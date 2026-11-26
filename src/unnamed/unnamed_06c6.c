#include "protos.h"

void f_006c60a3(void)
{
    FN_ENTER(0x006c60a3);
    /* 006c60a3: mov dword ptr [ebp - 0x124], 0 */ W32((u32)(r_ebp+0xfffffedcu), 0x0u);
    /* 006c60ad: push 0xbaa4 */ { u32 v = 0xbaa4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c60b2: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6c60b7u); f_008581c5();
    /* 006c60b7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c60b8: mov dword ptr [ebp - 0x1b0], eax */ W32((u32)(r_ebp+0xfffffe50u), r_eax);
    /* 006c60be: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c60c0: je 0x6c74fd */ if (fZ) goto L_006c74fd;
L_006c60c6:; BB(0x006c60c6);
    /* 006c60c6: mov dword ptr [ebp - 0x124], 1 */ W32((u32)(r_ebp+0xfffffedcu), 0x1u);
    /* 006c60d0: mov dword ptr [ebp - 4], 0x2c */ W32((u32)(r_ebp+0xfffffffcu), 0x2cu);
    /* 006c60d7: push 0x6c1940 */ { u32 v = 0x6c1940u; r_esp -= 4; W32(r_esp, v); }
    /* 006c60dc: push 0x6c17f0 */ { u32 v = 0x6c17f0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c60e1: mov eax, dword ptr [ebp - 0x1b0] */ r_eax = R32((u32)(r_ebp+0xfffffe50u));
    /* 006c60e7: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c60e9: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006c60ec: push 0x2ea4 */ { u32 v = 0x2ea4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c60f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c60f2: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x6c60f7u); f_00858736();
    /* 006c60f7: mov eax, dword ptr [ebp - 0x1b0] */ r_eax = R32((u32)(r_ebp+0xfffffe50u));
    /* 006c60fd: mov dword ptr [ebp - 0x124], 0 */ W32((u32)(r_ebp+0xfffffedcu), 0x0u);
L_006c6107:; BB(0x006c6107);
    /* 006c6107: mov dword ptr [0xa95e44], eax */ W32((u32)(0xa95e44u), r_eax);
    /* 006c610c: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006c6113: push 0xd590 */ { u32 v = 0xd590u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6118: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6c611du); f_008581c5();
    /* 006c611d: mov dword ptr [ebp - 0x120], 0 */ W32((u32)(r_ebp+0xfffffee0u), 0x0u);
    /* 006c6127: mov dword ptr [0xa95df4], eax */ W32((u32)(0xa95df4u), r_eax);
    /* 006c612c: push 0xaf0 */ { u32 v = 0xaf0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6131: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6c6136u); f_008581c5();
    /* 006c6136: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c6139: mov dword ptr [ebp - 0x198], eax */ W32((u32)(r_ebp+0xfffffe68u), r_eax);
    /* 006c613f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c6141: je 0x6c74f6 */ if (fZ) goto L_006c74f6;
L_006c6147:; BB(0x006c6147);
    /* 006c6147: mov dword ptr [ebp - 0x120], 1 */ W32((u32)(r_ebp+0xfffffee0u), 0x1u);
    /* 006c6151: mov esi, dword ptr [ebp - 0x198] */ r_esi = R32((u32)(r_ebp+0xfffffe68u));
    /* 006c6157: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c6159: mov dword ptr [esi + 0x2b8], eax */ W32((u32)(r_esi+0x2b8u), r_eax);
    /* 006c615f: mov dword ptr [esi + 0x2bc], eax */ W32((u32)(r_esi+0x2bcu), r_eax);
    /* 006c6165: mov dword ptr [esi + 0x2c0], eax */ W32((u32)(r_esi+0x2c0u), r_eax);
    /* 006c616b: mov dword ptr [esi + 0x2c4], eax */ W32((u32)(r_esi+0x2c4u), r_eax);
    /* 006c6171: mov byte ptr [esi + 0x2c8], al */ W8((u32)(r_esi+0x2c8u), (u8)r_eax);
    /* 006c6177: mov byte ptr [esi + 0x2c9], al */ W8((u32)(r_esi+0x2c9u), (u8)r_eax);
    /* 006c617d: mov byte ptr [esi + 0x2ca], al */ W8((u32)(r_esi+0x2cau), (u8)r_eax);
    /* 006c6183: mov byte ptr [esi + 0x2cb], al */ W8((u32)(r_esi+0x2cbu), (u8)r_eax);
    /* 006c6189: mov word ptr [esi + 0x2cc], ax */ W16((u32)(r_esi+0x2ccu), (u16)r_eax);
    /* 006c6190: mov dword ptr [ebp - 0x120], eax */ W32((u32)(r_ebp+0xfffffee0u), r_eax);
    /* 006c6196: mov eax, dword ptr [ebp - 0x198] */ r_eax = R32((u32)(r_ebp+0xfffffe68u));
L_006c619c:; BB(0x006c619c);
    /* 006c619c: mov dword ptr [0xa95df0], eax */ W32((u32)(0xa95df0u), r_eax);
    /* 006c61a1: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006c61a8: mov dword ptr [ebp - 0x11c], 0 */ W32((u32)(r_ebp+0xfffffee4u), 0x0u);
    /* 006c61b2: push 0x4dc */ { u32 v = 0x4dcu; r_esp -= 4; W32(r_esp, v); }
    /* 006c61b7: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6c61bcu); f_008581c5();
    /* 006c61bc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c61bd: mov dword ptr [ebp - 0x1a8], eax */ W32((u32)(r_ebp+0xfffffe58u), r_eax);
    /* 006c61c3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c61c5: je 0x6c74ef */ if (fZ) goto L_006c74ef;
L_006c61cb:; BB(0x006c61cb);
    /* 006c61cb: mov dword ptr [ebp - 0x11c], 1 */ W32((u32)(r_ebp+0xfffffee4u), 0x1u);
    /* 006c61d5: mov dword ptr [ebp - 4], 0x2e */ W32((u32)(r_ebp+0xfffffffcu), 0x2eu);
    /* 006c61dc: mov ecx, dword ptr [ebp - 0x1a8] */ r_ecx = R32((u32)(r_ebp+0xfffffe58u));
    /* 006c61e2: call 0x6c454c */ r_esp -= 4; W32(r_esp, 0x6c61e7u); f_006c454c();
    /* 006c61e7: mov eax, dword ptr [ebp - 0x1a8] */ r_eax = R32((u32)(r_ebp+0xfffffe58u));
    /* 006c61ed: mov dword ptr [ebp - 0x11c], 0 */ W32((u32)(r_ebp+0xfffffee4u), 0x0u);
L_006c61f7:; BB(0x006c61f7);
    /* 006c61f7: mov dword ptr [0xa95dfc], eax */ W32((u32)(0xa95dfcu), r_eax);
    /* 006c61fc: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006c6203: mov dword ptr [ebp - 0x118], 0 */ W32((u32)(r_ebp+0xfffffee8u), 0x0u);
    /* 006c620d: push 0x29c8 */ { u32 v = 0x29c8u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6212: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6c6217u); f_008581c5();
    /* 006c6217: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c6218: mov dword ptr [ebp - 0x1a0], eax */ W32((u32)(r_ebp+0xfffffe60u), r_eax);
    /* 006c621e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c6220: je 0x6c74e8 */ if (fZ) goto L_006c74e8;
L_006c6226:; BB(0x006c6226);
    /* 006c6226: mov dword ptr [ebp - 0x118], 1 */ W32((u32)(r_ebp+0xfffffee8u), 0x1u);
    /* 006c6230: mov dword ptr [ebp - 4], 0x2f */ W32((u32)(r_ebp+0xfffffffcu), 0x2fu);
    /* 006c6237: mov ecx, dword ptr [ebp - 0x1a0] */ r_ecx = R32((u32)(r_ebp+0xfffffe60u));
    /* 006c623d: call 0x6c4674 */ r_esp -= 4; W32(r_esp, 0x6c6242u); f_006c4674();
    /* 006c6242: mov eax, dword ptr [ebp - 0x1a0] */ r_eax = R32((u32)(r_ebp+0xfffffe60u));
    /* 006c6248: mov dword ptr [ebp - 0x118], 0 */ W32((u32)(r_ebp+0xfffffee8u), 0x0u);
L_006c6252:; BB(0x006c6252);
    /* 006c6252: mov dword ptr [0xa95df8], eax */ W32((u32)(0xa95df8u), r_eax);
    /* 006c6257: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006c625e: jmp 0x6c6b1e */ goto L_006c6b1e;
L_006c6b1e:; BB(0x006c6b1e);
    /* 006c6b1e: push 0x4dc */ { u32 v = 0x4dcu; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b23: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b25: push dword ptr [0xa95dfc] */ { u32 v = R32((u32)(0xa95dfcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006c6b2b: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x6c6b30u); f_0086b688();
    /* 006c6b30: push 0x29c8 */ { u32 v = 0x29c8u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b35: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b37: push dword ptr [0xa95df8] */ { u32 v = R32((u32)(0xa95df8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c6b3d: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x6c6b42u); f_0086b688();
    /* 006c6b42: push 0xbaa4 */ { u32 v = 0xbaa4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b47: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b49: push dword ptr [0xa95e44] */ { u32 v = R32((u32)(0xa95e44u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c6b4f: call 0x86b5cc */ r_esp -= 4; W32(r_esp, 0x6c6b54u); f_0086b5cc();
    /* 006c6b54: push 0xaf0 */ { u32 v = 0xaf0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b59: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b5b: push dword ptr [0xa95df0] */ { u32 v = R32((u32)(0xa95df0u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c6b61: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x6c6b66u); f_0086b688();
    /* 006c6b66: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c6b69: call 0x6c78a0 */ r_esp -= 4; W32(r_esp, 0x6c6b6eu); f_006c78a0();
    /* 006c6b6e: mov dword ptr [0xa95dd4], 5 */ W32((u32)(0xa95dd4u), 0x5u);
    /* 006c6b78: mov dword ptr [0xa95dd0], 6 */ W32((u32)(0xa95dd0u), 0x6u);
    /* 006c6b82: mov dword ptr [0xa95dc8], 3 */ W32((u32)(0xa95dc8u), 0x3u);
    /* 006c6b8c: call 0x6c79c0 */ r_esp -= 4; W32(r_esp, 0x6c6b91u); f_006c79c0();
    /* 006c6b91: call 0x6c7988 */ r_esp -= 4; W32(r_esp, 0x6c6b96u); f_006c7988();
    /* 006c6b96: call 0x6c7950 */ r_esp -= 4; W32(r_esp, 0x6c6b9bu); f_006c7950();
    /* 006c6b9b: mov dword ptr [0xa95de0], 0 */ W32((u32)(0xa95de0u), 0x0u);
    /* 006c6ba5: call 0x415cec */ r_esp -= 4; W32(r_esp, 0x6c6baau); f_00415cec();
    /* 006c6baa: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 006c6bad: mov dword ptr [0xa95ddc], eax */ W32((u32)(0xa95ddcu), r_eax);
    /* 006c6bb2: call 0x415cec */ r_esp -= 4; W32(r_esp, 0x6c6bb7u); f_00415cec();
    /* 006c6bb7: mov edx, dword ptr [0xa95df0] */ r_edx = R32((u32)(0xa95df0u));
    /* 006c6bbd: mov ecx, dword ptr [edx + 0x110] */ r_ecx = R32((u32)(r_edx+0x110u));
    /* 006c6bc3: mov dword ptr [0xa95dc4], ecx */ W32((u32)(0xa95dc4u), r_ecx);
    /* 006c6bc9: mov dword ptr [0xa95dc0], ecx */ W32((u32)(0xa95dc0u), r_ecx);
    /* 006c6bcf: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 006c6bd2: mov dword ptr [0xa95dd8], eax */ W32((u32)(0xa95dd8u), r_eax);
    /* 006c6bd7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_006c6bd9:; BB(0x006c6bd9);
    /* 006c6bd9: mov byte ptr [ebp + eax - 0x24], 0 */ W8((u32)(r_ebp+r_eax+0xffffffdcu), 0x0u);
    /* 006c6bde: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006c6be1: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006c6be4: jl 0x6c6bd9 */ if ((fS!=fO)) goto L_006c6bd9;
L_006c6be6:; BB(0x006c6be6);
    /* 006c6be6: jmp 0x6c76e2 */ goto L_006c76e2;
L_006c74e8:; BB(0x006c74e8);
    /* 006c74e8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c74ea: jmp 0x6c6252 */ goto L_006c6252;
L_006c74ef:; BB(0x006c74ef);
    /* 006c74ef: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c74f1: jmp 0x6c61f7 */ goto L_006c61f7;
L_006c74f6:; BB(0x006c74f6);
    /* 006c74f6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c74f8: jmp 0x6c619c */ goto L_006c619c;
L_006c74fd:; BB(0x006c74fd);
    /* 006c74fd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c74ff: jmp 0x6c6107 */ goto L_006c6107;
L_006c76e2:; BB(0x006c76e2);
    /* 006c76e2: movsx eax, byte ptr [ebp - 0x22] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffdeu));
    /* 006c76e6: movsx esi, byte ptr [ebp - 0x21] */ r_esi = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffdfu));
    /* 006c76ea: movzx edi, byte ptr [ebp - 0x24] */ r_edi = (u32)R8((u32)(r_ebp+0xffffffdcu));
    /* 006c76ee: movsx edx, byte ptr [ebp - 0x23] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffddu));
    /* 006c76f2: movsx ebx, byte ptr [ebp - 0x20] */ r_ebx = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffe0u));
    /* 006c76f6: mov dword ptr [0xa95db0], 1 */ W32((u32)(0xa95db0u), 0x1u);
    /* 006c7700: shl edi, 0x18 */ { u32 c = (24u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 006c7703: shl edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 006c7706: or edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 006c7708: movsx edx, byte ptr [ebp - 0x1f] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffe1u));
    /* 006c770c: mov ecx, eax */ r_ecx = r_eax;
    /* 006c770e: shl ecx, 8 */ { u32 c = (8u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 006c7711: or edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 006c7713: or edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 006c7715: shl eax, 0x18 */ { u32 c = (24u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 006c7718: mov dword ptr [0xa95db8], edi */ W32((u32)(0xa95db8u), r_edi);
    /* 006c771e: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 006c7721: shl esi, 0x10 */ { u32 c = (16u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 006c7724: or eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006c7726: shl ebx, 8 */ { u32 c = (8u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 006c7729: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006c772c: or eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006c772e: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 006c7731: or eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006c7733: mov dword ptr [0xa95dbc], eax */ W32((u32)(0xa95dbcu), r_eax);
    /* 006c7738: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c773a: mov dword ptr [0xa95db4], eax */ W32((u32)(0xa95db4u), r_eax);
    /* 006c773f: mov dword ptr [0xa95dac], eax */ W32((u32)(0xa95dacu), r_eax);
    /* 006c7744: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006c7747: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006c774e: mov esp, ebp */ r_esp = r_ebp;
    /* 006c7750: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006c7751: ret  */ FN_RET(0x006c60a3); r_esp += 4; return;
}

void f_006c616d(void)
{
    FN_ENTER(0x006c616d);
    /* 006c616d: les eax, ptr [edx] */ UNSUP(0x006c616d, "les eax, ptr [edx]");
    /* 006c616f: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 006c6171: mov byte ptr [esi + 0x2c8], al */ W8((u32)(r_esi+0x2c8u), (u8)r_eax);
    /* 006c6177: mov byte ptr [esi + 0x2c9], al */ W8((u32)(r_esi+0x2c9u), (u8)r_eax);
    /* 006c617d: mov byte ptr [esi + 0x2ca], al */ W8((u32)(r_esi+0x2cau), (u8)r_eax);
    /* 006c6183: mov byte ptr [esi + 0x2cb], al */ W8((u32)(r_esi+0x2cbu), (u8)r_eax);
    /* 006c6189: mov word ptr [esi + 0x2cc], ax */ W16((u32)(r_esi+0x2ccu), (u16)r_eax);
    /* 006c6190: mov dword ptr [ebp - 0x120], eax */ W32((u32)(r_ebp+0xfffffee0u), r_eax);
    /* 006c6196: mov eax, dword ptr [ebp - 0x198] */ r_eax = R32((u32)(r_ebp+0xfffffe68u));
    /* 006c619c: mov dword ptr [0xa95df0], eax */ W32((u32)(0xa95df0u), r_eax);
    /* 006c61a1: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006c61a8: mov dword ptr [ebp - 0x11c], 0 */ W32((u32)(r_ebp+0xfffffee4u), 0x0u);
    /* 006c61b2: push 0x4dc */ { u32 v = 0x4dcu; r_esp -= 4; W32(r_esp, v); }
    /* 006c61b7: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6c61bcu); f_008581c5();
    /* 006c61bc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c61bd: mov dword ptr [ebp - 0x1a8], eax */ W32((u32)(r_ebp+0xfffffe58u), r_eax);
    /* 006c61c3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c61c5: je 0x6c74ef */ if (fZ) goto L_006c74ef;
L_006c61cb:; BB(0x006c61cb);
    /* 006c61cb: mov dword ptr [ebp - 0x11c], 1 */ W32((u32)(r_ebp+0xfffffee4u), 0x1u);
    /* 006c61d5: mov dword ptr [ebp - 4], 0x2e */ W32((u32)(r_ebp+0xfffffffcu), 0x2eu);
    /* 006c61dc: mov ecx, dword ptr [ebp - 0x1a8] */ r_ecx = R32((u32)(r_ebp+0xfffffe58u));
    /* 006c61e2: call 0x6c454c */ r_esp -= 4; W32(r_esp, 0x6c61e7u); f_006c454c();
    /* 006c61e7: mov eax, dword ptr [ebp - 0x1a8] */ r_eax = R32((u32)(r_ebp+0xfffffe58u));
    /* 006c61ed: mov dword ptr [ebp - 0x11c], 0 */ W32((u32)(r_ebp+0xfffffee4u), 0x0u);
L_006c61f7:; BB(0x006c61f7);
    /* 006c61f7: mov dword ptr [0xa95dfc], eax */ W32((u32)(0xa95dfcu), r_eax);
    /* 006c61fc: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006c6203: mov dword ptr [ebp - 0x118], 0 */ W32((u32)(r_ebp+0xfffffee8u), 0x0u);
    /* 006c620d: push 0x29c8 */ { u32 v = 0x29c8u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6212: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6c6217u); f_008581c5();
    /* 006c6217: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c6218: mov dword ptr [ebp - 0x1a0], eax */ W32((u32)(r_ebp+0xfffffe60u), r_eax);
    /* 006c621e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c6220: je 0x6c74e8 */ if (fZ) goto L_006c74e8;
L_006c6226:; BB(0x006c6226);
    /* 006c6226: mov dword ptr [ebp - 0x118], 1 */ W32((u32)(r_ebp+0xfffffee8u), 0x1u);
    /* 006c6230: mov dword ptr [ebp - 4], 0x2f */ W32((u32)(r_ebp+0xfffffffcu), 0x2fu);
    /* 006c6237: mov ecx, dword ptr [ebp - 0x1a0] */ r_ecx = R32((u32)(r_ebp+0xfffffe60u));
    /* 006c623d: call 0x6c4674 */ r_esp -= 4; W32(r_esp, 0x6c6242u); f_006c4674();
    /* 006c6242: mov eax, dword ptr [ebp - 0x1a0] */ r_eax = R32((u32)(r_ebp+0xfffffe60u));
    /* 006c6248: mov dword ptr [ebp - 0x118], 0 */ W32((u32)(r_ebp+0xfffffee8u), 0x0u);
L_006c6252:; BB(0x006c6252);
    /* 006c6252: mov dword ptr [0xa95df8], eax */ W32((u32)(0xa95df8u), r_eax);
    /* 006c6257: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006c625e: jmp 0x6c6b1e */ goto L_006c6b1e;
L_006c6b1e:; BB(0x006c6b1e);
    /* 006c6b1e: push 0x4dc */ { u32 v = 0x4dcu; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b23: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b25: push dword ptr [0xa95dfc] */ { u32 v = R32((u32)(0xa95dfcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006c6b2b: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x6c6b30u); f_0086b688();
    /* 006c6b30: push 0x29c8 */ { u32 v = 0x29c8u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b35: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b37: push dword ptr [0xa95df8] */ { u32 v = R32((u32)(0xa95df8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c6b3d: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x6c6b42u); f_0086b688();
    /* 006c6b42: push 0xbaa4 */ { u32 v = 0xbaa4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b47: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b49: push dword ptr [0xa95e44] */ { u32 v = R32((u32)(0xa95e44u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c6b4f: call 0x86b5cc */ r_esp -= 4; W32(r_esp, 0x6c6b54u); f_0086b5cc();
    /* 006c6b54: push 0xaf0 */ { u32 v = 0xaf0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b59: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b5b: push dword ptr [0xa95df0] */ { u32 v = R32((u32)(0xa95df0u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c6b61: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x6c6b66u); f_0086b688();
    /* 006c6b66: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c6b69: call 0x6c78a0 */ r_esp -= 4; W32(r_esp, 0x6c6b6eu); f_006c78a0();
    /* 006c6b6e: mov dword ptr [0xa95dd4], 5 */ W32((u32)(0xa95dd4u), 0x5u);
    /* 006c6b78: mov dword ptr [0xa95dd0], 6 */ W32((u32)(0xa95dd0u), 0x6u);
    /* 006c6b82: mov dword ptr [0xa95dc8], 3 */ W32((u32)(0xa95dc8u), 0x3u);
    /* 006c6b8c: call 0x6c79c0 */ r_esp -= 4; W32(r_esp, 0x6c6b91u); f_006c79c0();
    /* 006c6b91: call 0x6c7988 */ r_esp -= 4; W32(r_esp, 0x6c6b96u); f_006c7988();
    /* 006c6b96: call 0x6c7950 */ r_esp -= 4; W32(r_esp, 0x6c6b9bu); f_006c7950();
    /* 006c6b9b: mov dword ptr [0xa95de0], 0 */ W32((u32)(0xa95de0u), 0x0u);
    /* 006c6ba5: call 0x415cec */ r_esp -= 4; W32(r_esp, 0x6c6baau); f_00415cec();
    /* 006c6baa: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 006c6bad: mov dword ptr [0xa95ddc], eax */ W32((u32)(0xa95ddcu), r_eax);
    /* 006c6bb2: call 0x415cec */ r_esp -= 4; W32(r_esp, 0x6c6bb7u); f_00415cec();
    /* 006c6bb7: mov edx, dword ptr [0xa95df0] */ r_edx = R32((u32)(0xa95df0u));
    /* 006c6bbd: mov ecx, dword ptr [edx + 0x110] */ r_ecx = R32((u32)(r_edx+0x110u));
    /* 006c6bc3: mov dword ptr [0xa95dc4], ecx */ W32((u32)(0xa95dc4u), r_ecx);
    /* 006c6bc9: mov dword ptr [0xa95dc0], ecx */ W32((u32)(0xa95dc0u), r_ecx);
    /* 006c6bcf: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 006c6bd2: mov dword ptr [0xa95dd8], eax */ W32((u32)(0xa95dd8u), r_eax);
    /* 006c6bd7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_006c6bd9:; BB(0x006c6bd9);
    /* 006c6bd9: mov byte ptr [ebp + eax - 0x24], 0 */ W8((u32)(r_ebp+r_eax+0xffffffdcu), 0x0u);
    /* 006c6bde: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006c6be1: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006c6be4: jl 0x6c6bd9 */ if ((fS!=fO)) goto L_006c6bd9;
L_006c6be6:; BB(0x006c6be6);
    /* 006c6be6: jmp 0x6c76e2 */ goto L_006c76e2;
L_006c74e8:; BB(0x006c74e8);
    /* 006c74e8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c74ea: jmp 0x6c6252 */ goto L_006c6252;
L_006c74ef:; BB(0x006c74ef);
    /* 006c74ef: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c74f1: jmp 0x6c61f7 */ goto L_006c61f7;
L_006c76e2:; BB(0x006c76e2);
    /* 006c76e2: movsx eax, byte ptr [ebp - 0x22] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffdeu));
    /* 006c76e6: movsx esi, byte ptr [ebp - 0x21] */ r_esi = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffdfu));
    /* 006c76ea: movzx edi, byte ptr [ebp - 0x24] */ r_edi = (u32)R8((u32)(r_ebp+0xffffffdcu));
    /* 006c76ee: movsx edx, byte ptr [ebp - 0x23] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffddu));
    /* 006c76f2: movsx ebx, byte ptr [ebp - 0x20] */ r_ebx = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffe0u));
    /* 006c76f6: mov dword ptr [0xa95db0], 1 */ W32((u32)(0xa95db0u), 0x1u);
    /* 006c7700: shl edi, 0x18 */ { u32 c = (24u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 006c7703: shl edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 006c7706: or edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 006c7708: movsx edx, byte ptr [ebp - 0x1f] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffe1u));
    /* 006c770c: mov ecx, eax */ r_ecx = r_eax;
    /* 006c770e: shl ecx, 8 */ { u32 c = (8u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 006c7711: or edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 006c7713: or edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 006c7715: shl eax, 0x18 */ { u32 c = (24u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 006c7718: mov dword ptr [0xa95db8], edi */ W32((u32)(0xa95db8u), r_edi);
    /* 006c771e: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 006c7721: shl esi, 0x10 */ { u32 c = (16u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 006c7724: or eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006c7726: shl ebx, 8 */ { u32 c = (8u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 006c7729: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006c772c: or eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006c772e: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 006c7731: or eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006c7733: mov dword ptr [0xa95dbc], eax */ W32((u32)(0xa95dbcu), r_eax);
    /* 006c7738: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c773a: mov dword ptr [0xa95db4], eax */ W32((u32)(0xa95db4u), r_eax);
    /* 006c773f: mov dword ptr [0xa95dac], eax */ W32((u32)(0xa95dacu), r_eax);
    /* 006c7744: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006c7747: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006c774e: mov esp, ebp */ r_esp = r_ebp;
    /* 006c7750: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006c7751: ret  */ FN_RET(0x006c616d); r_esp += 4; return;
}

void f_006c616e(void)
{
    FN_ENTER(0x006c616e);
    /* 006c616e: add al, byte ptr [eax] */ {  u32 a = (u8)r_eax; u32 b = R8((u32)(r_eax)); u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 006c6170: add byte ptr [eax + 0x2c886], cl */ { u32 ad = (u32)(r_eax+0x2c886u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 006c6176: add byte ptr [eax + 0x2c986], cl */ { u32 ad = (u32)(r_eax+0x2c986u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 006c617c: add byte ptr [eax + 0x2ca86], cl */ { u32 ad = (u32)(r_eax+0x2ca86u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 006c6182: add byte ptr [eax + 0x2cb86], cl */ { u32 ad = (u32)(r_eax+0x2cb86u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 006c6188: add byte ptr [esi - 0x77], ah */ { u32 ad = (u32)(r_esi+0xffffff89u);  u32 a = R8(ad); u32 b = (u8)(r_eax>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 006c618b: xchg ah, cl */ { u32 x = (u8)(r_eax>>8); u32 y = (u8)r_ecx; r_eax = (r_eax & 0xffff00ffu) | (((y) & 0xffu) << 8); r_ecx = (r_ecx & 0xffffff00u) | ((x) & 0xffu); }
    /* 006c618d: add al, byte ptr [eax] */ {  u32 a = (u8)r_eax; u32 b = R8((u32)(r_eax)); u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 006c618f: add byte ptr [ecx - 0x11f7b], cl */ { u32 ad = (u32)(r_ecx+0xfffee085u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 006c6195: dec dword ptr [ebx - 0x1977b] */ { u32 ad = (u32)(r_ebx+0xfffe6885u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 006c619b: jmp dword ptr [ebx + 0xa95df0] */ { u32 t = R32((u32)(r_ebx+0xa95df0u)); jmp_ind(t); return; }
}

void f_006c6263(void)
{
    FN_ENTER(0x006c6263);
    /* 006c6263: push 0xd590 */ { u32 v = 0xd590u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6268: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6c626du); f_008581c5();
    /* 006c626d: mov dword ptr [ebp - 0x134], 0 */ W32((u32)(r_ebp+0xfffffeccu), 0x0u);
    /* 006c6277: mov dword ptr [0xa95df4], eax */ W32((u32)(0xa95df4u), r_eax);
    /* 006c627c: push 0xaf0 */ { u32 v = 0xaf0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6281: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6c6286u); f_008581c5();
    /* 006c6286: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c6289: mov dword ptr [ebp - 0x198], eax */ W32((u32)(r_ebp+0xfffffe68u), r_eax);
    /* 006c628f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c6291: je 0x6c7519 */ if (fZ) goto L_006c7519;
L_006c6297:; BB(0x006c6297);
    /* 006c6297: mov dword ptr [ebp - 0x134], 1 */ W32((u32)(r_ebp+0xfffffeccu), 0x1u);
    /* 006c62a1: mov esi, dword ptr [ebp - 0x198] */ r_esi = R32((u32)(r_ebp+0xfffffe68u));
    /* 006c62a7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c62a9: mov dword ptr [esi + 0x2b8], eax */ W32((u32)(r_esi+0x2b8u), r_eax);
    /* 006c62af: mov dword ptr [esi + 0x2bc], eax */ W32((u32)(r_esi+0x2bcu), r_eax);
    /* 006c62b5: mov dword ptr [esi + 0x2c0], eax */ W32((u32)(r_esi+0x2c0u), r_eax);
    /* 006c62bb: mov dword ptr [esi + 0x2c4], eax */ W32((u32)(r_esi+0x2c4u), r_eax);
    /* 006c62c1: mov byte ptr [esi + 0x2c8], al */ W8((u32)(r_esi+0x2c8u), (u8)r_eax);
    /* 006c62c7: mov byte ptr [esi + 0x2c9], al */ W8((u32)(r_esi+0x2c9u), (u8)r_eax);
    /* 006c62cd: mov byte ptr [esi + 0x2ca], al */ W8((u32)(r_esi+0x2cau), (u8)r_eax);
    /* 006c62d3: mov byte ptr [esi + 0x2cb], al */ W8((u32)(r_esi+0x2cbu), (u8)r_eax);
    /* 006c62d9: mov word ptr [esi + 0x2cc], ax */ W16((u32)(r_esi+0x2ccu), (u16)r_eax);
    /* 006c62e0: mov dword ptr [ebp - 0x134], eax */ W32((u32)(r_ebp+0xfffffeccu), r_eax);
    /* 006c62e6: mov eax, dword ptr [ebp - 0x198] */ r_eax = R32((u32)(r_ebp+0xfffffe68u));
L_006c62ec:; BB(0x006c62ec);
    /* 006c62ec: mov dword ptr [0xa95df0], eax */ W32((u32)(0xa95df0u), r_eax);
    /* 006c62f1: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006c62f8: mov dword ptr [ebp - 0x130], 0 */ W32((u32)(r_ebp+0xfffffed0u), 0x0u);
    /* 006c6302: push 0xbaa4 */ { u32 v = 0xbaa4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6307: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6c630cu); f_008581c5();
    /* 006c630c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c630d: mov dword ptr [ebp - 0x1b0], eax */ W32((u32)(r_ebp+0xfffffe50u), r_eax);
    /* 006c6313: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c6315: je 0x6c7512 */ if (fZ) goto L_006c7512;
L_006c631b:; BB(0x006c631b);
    /* 006c631b: mov dword ptr [ebp - 0x130], 1 */ W32((u32)(r_ebp+0xfffffed0u), 0x1u);
    /* 006c6325: mov dword ptr [ebp - 4], 0x29 */ W32((u32)(r_ebp+0xfffffffcu), 0x29u);
    /* 006c632c: push 0x6c1940 */ { u32 v = 0x6c1940u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6331: push 0x6c17f0 */ { u32 v = 0x6c17f0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6336: mov eax, dword ptr [ebp - 0x1b0] */ r_eax = R32((u32)(r_ebp+0xfffffe50u));
    /* 006c633c: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c633e: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006c6341: push 0x2ea4 */ { u32 v = 0x2ea4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6346: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c6347: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x6c634cu); f_00858736();
    /* 006c634c: mov eax, dword ptr [ebp - 0x1b0] */ r_eax = R32((u32)(r_ebp+0xfffffe50u));
    /* 006c6352: mov dword ptr [ebp - 0x130], 0 */ W32((u32)(r_ebp+0xfffffed0u), 0x0u);
L_006c635c:; BB(0x006c635c);
    /* 006c635c: mov dword ptr [0xa95e44], eax */ W32((u32)(0xa95e44u), r_eax);
    /* 006c6361: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006c6368: mov dword ptr [ebp - 0x12c], 0 */ W32((u32)(r_ebp+0xfffffed4u), 0x0u);
    /* 006c6372: push 0x4dc */ { u32 v = 0x4dcu; r_esp -= 4; W32(r_esp, v); }
    /* 006c6377: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6c637cu); f_008581c5();
    /* 006c637c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c637d: mov dword ptr [ebp - 0x1a8], eax */ W32((u32)(r_ebp+0xfffffe58u), r_eax);
    /* 006c6383: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c6385: je 0x6c750b */ if (fZ) goto L_006c750b;
L_006c638b:; BB(0x006c638b);
    /* 006c638b: mov dword ptr [ebp - 0x12c], 1 */ W32((u32)(r_ebp+0xfffffed4u), 0x1u);
    /* 006c6395: mov dword ptr [ebp - 4], 0x2a */ W32((u32)(r_ebp+0xfffffffcu), 0x2au);
    /* 006c639c: mov ecx, dword ptr [ebp - 0x1a8] */ r_ecx = R32((u32)(r_ebp+0xfffffe58u));
    /* 006c63a2: call 0x6c454c */ r_esp -= 4; W32(r_esp, 0x6c63a7u); f_006c454c();
    /* 006c63a7: mov eax, dword ptr [ebp - 0x1a8] */ r_eax = R32((u32)(r_ebp+0xfffffe58u));
    /* 006c63ad: mov dword ptr [ebp - 0x12c], 0 */ W32((u32)(r_ebp+0xfffffed4u), 0x0u);
L_006c63b7:; BB(0x006c63b7);
    /* 006c63b7: mov dword ptr [0xa95dfc], eax */ W32((u32)(0xa95dfcu), r_eax);
    /* 006c63bc: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006c63c3: mov dword ptr [ebp - 0x128], 0 */ W32((u32)(r_ebp+0xfffffed8u), 0x0u);
    /* 006c63cd: push 0x29c8 */ { u32 v = 0x29c8u; r_esp -= 4; W32(r_esp, v); }
    /* 006c63d2: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6c63d7u); f_008581c5();
    /* 006c63d7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c63d8: mov dword ptr [ebp - 0x1a0], eax */ W32((u32)(r_ebp+0xfffffe60u), r_eax);
    /* 006c63de: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c63e0: je 0x6c7504 */ if (fZ) goto L_006c7504;
L_006c63e6:; BB(0x006c63e6);
    /* 006c63e6: mov dword ptr [ebp - 0x128], 1 */ W32((u32)(r_ebp+0xfffffed8u), 0x1u);
    /* 006c63f0: mov dword ptr [ebp - 4], 0x2b */ W32((u32)(r_ebp+0xfffffffcu), 0x2bu);
    /* 006c63f7: mov ecx, dword ptr [ebp - 0x1a0] */ r_ecx = R32((u32)(r_ebp+0xfffffe60u));
    /* 006c63fd: call 0x6c4674 */ r_esp -= 4; W32(r_esp, 0x6c6402u); f_006c4674();
    /* 006c6402: mov eax, dword ptr [ebp - 0x1a0] */ r_eax = R32((u32)(r_ebp+0xfffffe60u));
    /* 006c6408: mov dword ptr [ebp - 0x128], 0 */ W32((u32)(r_ebp+0xfffffed8u), 0x0u);
L_006c6412:; BB(0x006c6412);
    /* 006c6412: mov dword ptr [0xa95df8], eax */ W32((u32)(0xa95df8u), r_eax);
    /* 006c6417: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006c641e: jmp 0x6c6b1e */ goto L_006c6b1e;
L_006c6b1e:; BB(0x006c6b1e);
    /* 006c6b1e: push 0x4dc */ { u32 v = 0x4dcu; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b23: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b25: push dword ptr [0xa95dfc] */ { u32 v = R32((u32)(0xa95dfcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006c6b2b: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x6c6b30u); f_0086b688();
    /* 006c6b30: push 0x29c8 */ { u32 v = 0x29c8u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b35: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b37: push dword ptr [0xa95df8] */ { u32 v = R32((u32)(0xa95df8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c6b3d: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x6c6b42u); f_0086b688();
    /* 006c6b42: push 0xbaa4 */ { u32 v = 0xbaa4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b47: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b49: push dword ptr [0xa95e44] */ { u32 v = R32((u32)(0xa95e44u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c6b4f: call 0x86b5cc */ r_esp -= 4; W32(r_esp, 0x6c6b54u); f_0086b5cc();
    /* 006c6b54: push 0xaf0 */ { u32 v = 0xaf0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b59: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b5b: push dword ptr [0xa95df0] */ { u32 v = R32((u32)(0xa95df0u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c6b61: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x6c6b66u); f_0086b688();
    /* 006c6b66: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c6b69: call 0x6c78a0 */ r_esp -= 4; W32(r_esp, 0x6c6b6eu); f_006c78a0();
    /* 006c6b6e: mov dword ptr [0xa95dd4], 5 */ W32((u32)(0xa95dd4u), 0x5u);
    /* 006c6b78: mov dword ptr [0xa95dd0], 6 */ W32((u32)(0xa95dd0u), 0x6u);
    /* 006c6b82: mov dword ptr [0xa95dc8], 3 */ W32((u32)(0xa95dc8u), 0x3u);
    /* 006c6b8c: call 0x6c79c0 */ r_esp -= 4; W32(r_esp, 0x6c6b91u); f_006c79c0();
    /* 006c6b91: call 0x6c7988 */ r_esp -= 4; W32(r_esp, 0x6c6b96u); f_006c7988();
    /* 006c6b96: call 0x6c7950 */ r_esp -= 4; W32(r_esp, 0x6c6b9bu); f_006c7950();
    /* 006c6b9b: mov dword ptr [0xa95de0], 0 */ W32((u32)(0xa95de0u), 0x0u);
    /* 006c6ba5: call 0x415cec */ r_esp -= 4; W32(r_esp, 0x6c6baau); f_00415cec();
    /* 006c6baa: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 006c6bad: mov dword ptr [0xa95ddc], eax */ W32((u32)(0xa95ddcu), r_eax);
    /* 006c6bb2: call 0x415cec */ r_esp -= 4; W32(r_esp, 0x6c6bb7u); f_00415cec();
    /* 006c6bb7: mov edx, dword ptr [0xa95df0] */ r_edx = R32((u32)(0xa95df0u));
    /* 006c6bbd: mov ecx, dword ptr [edx + 0x110] */ r_ecx = R32((u32)(r_edx+0x110u));
    /* 006c6bc3: mov dword ptr [0xa95dc4], ecx */ W32((u32)(0xa95dc4u), r_ecx);
    /* 006c6bc9: mov dword ptr [0xa95dc0], ecx */ W32((u32)(0xa95dc0u), r_ecx);
    /* 006c6bcf: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 006c6bd2: mov dword ptr [0xa95dd8], eax */ W32((u32)(0xa95dd8u), r_eax);
    /* 006c6bd7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_006c6bd9:; BB(0x006c6bd9);
    /* 006c6bd9: mov byte ptr [ebp + eax - 0x24], 0 */ W8((u32)(r_ebp+r_eax+0xffffffdcu), 0x0u);
    /* 006c6bde: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006c6be1: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006c6be4: jl 0x6c6bd9 */ if ((fS!=fO)) goto L_006c6bd9;
L_006c6be6:; BB(0x006c6be6);
    /* 006c6be6: jmp 0x6c76e2 */ goto L_006c76e2;
L_006c7504:; BB(0x006c7504);
    /* 006c7504: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c7506: jmp 0x6c6412 */ goto L_006c6412;
L_006c750b:; BB(0x006c750b);
    /* 006c750b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c750d: jmp 0x6c63b7 */ goto L_006c63b7;
L_006c7512:; BB(0x006c7512);
    /* 006c7512: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c7514: jmp 0x6c635c */ goto L_006c635c;
L_006c7519:; BB(0x006c7519);
    /* 006c7519: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c751b: jmp 0x6c62ec */ goto L_006c62ec;
L_006c76e2:; BB(0x006c76e2);
    /* 006c76e2: movsx eax, byte ptr [ebp - 0x22] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffdeu));
    /* 006c76e6: movsx esi, byte ptr [ebp - 0x21] */ r_esi = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffdfu));
    /* 006c76ea: movzx edi, byte ptr [ebp - 0x24] */ r_edi = (u32)R8((u32)(r_ebp+0xffffffdcu));
    /* 006c76ee: movsx edx, byte ptr [ebp - 0x23] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffddu));
    /* 006c76f2: movsx ebx, byte ptr [ebp - 0x20] */ r_ebx = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffe0u));
    /* 006c76f6: mov dword ptr [0xa95db0], 1 */ W32((u32)(0xa95db0u), 0x1u);
    /* 006c7700: shl edi, 0x18 */ { u32 c = (24u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 006c7703: shl edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 006c7706: or edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 006c7708: movsx edx, byte ptr [ebp - 0x1f] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffe1u));
    /* 006c770c: mov ecx, eax */ r_ecx = r_eax;
    /* 006c770e: shl ecx, 8 */ { u32 c = (8u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 006c7711: or edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 006c7713: or edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 006c7715: shl eax, 0x18 */ { u32 c = (24u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 006c7718: mov dword ptr [0xa95db8], edi */ W32((u32)(0xa95db8u), r_edi);
    /* 006c771e: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 006c7721: shl esi, 0x10 */ { u32 c = (16u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 006c7724: or eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006c7726: shl ebx, 8 */ { u32 c = (8u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 006c7729: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006c772c: or eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006c772e: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 006c7731: or eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006c7733: mov dword ptr [0xa95dbc], eax */ W32((u32)(0xa95dbcu), r_eax);
    /* 006c7738: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c773a: mov dword ptr [0xa95db4], eax */ W32((u32)(0xa95db4u), r_eax);
    /* 006c773f: mov dword ptr [0xa95dac], eax */ W32((u32)(0xa95dacu), r_eax);
    /* 006c7744: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006c7747: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006c774e: mov esp, ebp */ r_esp = r_ebp;
    /* 006c7750: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006c7751: ret  */ FN_RET(0x006c6263); r_esp += 4; return;
}

void f_006c6361(void)
{
    FN_ENTER(0x006c6361);
    /* 006c6361: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006c6368: mov dword ptr [ebp - 0x12c], 0 */ W32((u32)(r_ebp+0xfffffed4u), 0x0u);
    /* 006c6372: push 0x4dc */ { u32 v = 0x4dcu; r_esp -= 4; W32(r_esp, v); }
    /* 006c6377: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6c637cu); f_008581c5();
    /* 006c637c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c637d: mov dword ptr [ebp - 0x1a8], eax */ W32((u32)(r_ebp+0xfffffe58u), r_eax);
    /* 006c6383: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c6385: je 0x6c750b */ if (fZ) goto L_006c750b;
L_006c638b:; BB(0x006c638b);
    /* 006c638b: mov dword ptr [ebp - 0x12c], 1 */ W32((u32)(r_ebp+0xfffffed4u), 0x1u);
    /* 006c6395: mov dword ptr [ebp - 4], 0x2a */ W32((u32)(r_ebp+0xfffffffcu), 0x2au);
    /* 006c639c: mov ecx, dword ptr [ebp - 0x1a8] */ r_ecx = R32((u32)(r_ebp+0xfffffe58u));
    /* 006c63a2: call 0x6c454c */ r_esp -= 4; W32(r_esp, 0x6c63a7u); f_006c454c();
    /* 006c63a7: mov eax, dword ptr [ebp - 0x1a8] */ r_eax = R32((u32)(r_ebp+0xfffffe58u));
    /* 006c63ad: mov dword ptr [ebp - 0x12c], 0 */ W32((u32)(r_ebp+0xfffffed4u), 0x0u);
L_006c63b7:; BB(0x006c63b7);
    /* 006c63b7: mov dword ptr [0xa95dfc], eax */ W32((u32)(0xa95dfcu), r_eax);
    /* 006c63bc: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006c63c3: mov dword ptr [ebp - 0x128], 0 */ W32((u32)(r_ebp+0xfffffed8u), 0x0u);
    /* 006c63cd: push 0x29c8 */ { u32 v = 0x29c8u; r_esp -= 4; W32(r_esp, v); }
    /* 006c63d2: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6c63d7u); f_008581c5();
    /* 006c63d7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c63d8: mov dword ptr [ebp - 0x1a0], eax */ W32((u32)(r_ebp+0xfffffe60u), r_eax);
    /* 006c63de: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c63e0: je 0x6c7504 */ if (fZ) goto L_006c7504;
L_006c63e6:; BB(0x006c63e6);
    /* 006c63e6: mov dword ptr [ebp - 0x128], 1 */ W32((u32)(r_ebp+0xfffffed8u), 0x1u);
    /* 006c63f0: mov dword ptr [ebp - 4], 0x2b */ W32((u32)(r_ebp+0xfffffffcu), 0x2bu);
    /* 006c63f7: mov ecx, dword ptr [ebp - 0x1a0] */ r_ecx = R32((u32)(r_ebp+0xfffffe60u));
    /* 006c63fd: call 0x6c4674 */ r_esp -= 4; W32(r_esp, 0x6c6402u); f_006c4674();
    /* 006c6402: mov eax, dword ptr [ebp - 0x1a0] */ r_eax = R32((u32)(r_ebp+0xfffffe60u));
    /* 006c6408: mov dword ptr [ebp - 0x128], 0 */ W32((u32)(r_ebp+0xfffffed8u), 0x0u);
L_006c6412:; BB(0x006c6412);
    /* 006c6412: mov dword ptr [0xa95df8], eax */ W32((u32)(0xa95df8u), r_eax);
    /* 006c6417: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006c641e: jmp 0x6c6b1e */ goto L_006c6b1e;
L_006c6b1e:; BB(0x006c6b1e);
    /* 006c6b1e: push 0x4dc */ { u32 v = 0x4dcu; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b23: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b25: push dword ptr [0xa95dfc] */ { u32 v = R32((u32)(0xa95dfcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006c6b2b: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x6c6b30u); f_0086b688();
    /* 006c6b30: push 0x29c8 */ { u32 v = 0x29c8u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b35: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b37: push dword ptr [0xa95df8] */ { u32 v = R32((u32)(0xa95df8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c6b3d: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x6c6b42u); f_0086b688();
    /* 006c6b42: push 0xbaa4 */ { u32 v = 0xbaa4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b47: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b49: push dword ptr [0xa95e44] */ { u32 v = R32((u32)(0xa95e44u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c6b4f: call 0x86b5cc */ r_esp -= 4; W32(r_esp, 0x6c6b54u); f_0086b5cc();
    /* 006c6b54: push 0xaf0 */ { u32 v = 0xaf0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b59: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b5b: push dword ptr [0xa95df0] */ { u32 v = R32((u32)(0xa95df0u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c6b61: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x6c6b66u); f_0086b688();
    /* 006c6b66: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c6b69: call 0x6c78a0 */ r_esp -= 4; W32(r_esp, 0x6c6b6eu); f_006c78a0();
    /* 006c6b6e: mov dword ptr [0xa95dd4], 5 */ W32((u32)(0xa95dd4u), 0x5u);
    /* 006c6b78: mov dword ptr [0xa95dd0], 6 */ W32((u32)(0xa95dd0u), 0x6u);
    /* 006c6b82: mov dword ptr [0xa95dc8], 3 */ W32((u32)(0xa95dc8u), 0x3u);
    /* 006c6b8c: call 0x6c79c0 */ r_esp -= 4; W32(r_esp, 0x6c6b91u); f_006c79c0();
    /* 006c6b91: call 0x6c7988 */ r_esp -= 4; W32(r_esp, 0x6c6b96u); f_006c7988();
    /* 006c6b96: call 0x6c7950 */ r_esp -= 4; W32(r_esp, 0x6c6b9bu); f_006c7950();
    /* 006c6b9b: mov dword ptr [0xa95de0], 0 */ W32((u32)(0xa95de0u), 0x0u);
    /* 006c6ba5: call 0x415cec */ r_esp -= 4; W32(r_esp, 0x6c6baau); f_00415cec();
    /* 006c6baa: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 006c6bad: mov dword ptr [0xa95ddc], eax */ W32((u32)(0xa95ddcu), r_eax);
    /* 006c6bb2: call 0x415cec */ r_esp -= 4; W32(r_esp, 0x6c6bb7u); f_00415cec();
    /* 006c6bb7: mov edx, dword ptr [0xa95df0] */ r_edx = R32((u32)(0xa95df0u));
    /* 006c6bbd: mov ecx, dword ptr [edx + 0x110] */ r_ecx = R32((u32)(r_edx+0x110u));
    /* 006c6bc3: mov dword ptr [0xa95dc4], ecx */ W32((u32)(0xa95dc4u), r_ecx);
    /* 006c6bc9: mov dword ptr [0xa95dc0], ecx */ W32((u32)(0xa95dc0u), r_ecx);
    /* 006c6bcf: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 006c6bd2: mov dword ptr [0xa95dd8], eax */ W32((u32)(0xa95dd8u), r_eax);
    /* 006c6bd7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_006c6bd9:; BB(0x006c6bd9);
    /* 006c6bd9: mov byte ptr [ebp + eax - 0x24], 0 */ W8((u32)(r_ebp+r_eax+0xffffffdcu), 0x0u);
    /* 006c6bde: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006c6be1: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006c6be4: jl 0x6c6bd9 */ if ((fS!=fO)) goto L_006c6bd9;
L_006c6be6:; BB(0x006c6be6);
    /* 006c6be6: jmp 0x6c76e2 */ goto L_006c76e2;
L_006c7504:; BB(0x006c7504);
    /* 006c7504: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c7506: jmp 0x6c6412 */ goto L_006c6412;
L_006c750b:; BB(0x006c750b);
    /* 006c750b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c750d: jmp 0x6c63b7 */ goto L_006c63b7;
L_006c76e2:; BB(0x006c76e2);
    /* 006c76e2: movsx eax, byte ptr [ebp - 0x22] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffdeu));
    /* 006c76e6: movsx esi, byte ptr [ebp - 0x21] */ r_esi = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffdfu));
    /* 006c76ea: movzx edi, byte ptr [ebp - 0x24] */ r_edi = (u32)R8((u32)(r_ebp+0xffffffdcu));
    /* 006c76ee: movsx edx, byte ptr [ebp - 0x23] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffddu));
    /* 006c76f2: movsx ebx, byte ptr [ebp - 0x20] */ r_ebx = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffe0u));
    /* 006c76f6: mov dword ptr [0xa95db0], 1 */ W32((u32)(0xa95db0u), 0x1u);
    /* 006c7700: shl edi, 0x18 */ { u32 c = (24u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 006c7703: shl edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 006c7706: or edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 006c7708: movsx edx, byte ptr [ebp - 0x1f] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffe1u));
    /* 006c770c: mov ecx, eax */ r_ecx = r_eax;
    /* 006c770e: shl ecx, 8 */ { u32 c = (8u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 006c7711: or edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 006c7713: or edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 006c7715: shl eax, 0x18 */ { u32 c = (24u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 006c7718: mov dword ptr [0xa95db8], edi */ W32((u32)(0xa95db8u), r_edi);
    /* 006c771e: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 006c7721: shl esi, 0x10 */ { u32 c = (16u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 006c7724: or eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006c7726: shl ebx, 8 */ { u32 c = (8u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 006c7729: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006c772c: or eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006c772e: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 006c7731: or eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006c7733: mov dword ptr [0xa95dbc], eax */ W32((u32)(0xa95dbcu), r_eax);
    /* 006c7738: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c773a: mov dword ptr [0xa95db4], eax */ W32((u32)(0xa95db4u), r_eax);
    /* 006c773f: mov dword ptr [0xa95dac], eax */ W32((u32)(0xa95dacu), r_eax);
    /* 006c7744: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006c7747: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006c774e: mov esp, ebp */ r_esp = r_ebp;
    /* 006c7750: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006c7751: ret  */ FN_RET(0x006c6361); r_esp += 4; return;
}

void f_006c6423(void)
{
    FN_ENTER(0x006c6423);
    /* 006c6423: mov dword ptr [ebp - 0x144], 0 */ W32((u32)(r_ebp+0xfffffebcu), 0x0u);
    /* 006c642d: push 0xaf0 */ { u32 v = 0xaf0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6432: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6c6437u); f_008581c5();
    /* 006c6437: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c6438: mov dword ptr [ebp - 0x198], eax */ W32((u32)(r_ebp+0xfffffe68u), r_eax);
    /* 006c643e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c6440: je 0x6c7535 */ if (fZ) goto L_006c7535;
L_006c6446:; BB(0x006c6446);
    /* 006c6446: mov dword ptr [ebp - 0x144], 1 */ W32((u32)(r_ebp+0xfffffebcu), 0x1u);
    /* 006c6450: mov esi, dword ptr [ebp - 0x198] */ r_esi = R32((u32)(r_ebp+0xfffffe68u));
    /* 006c6456: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c6458: mov dword ptr [esi + 0x2b8], eax */ W32((u32)(r_esi+0x2b8u), r_eax);
    /* 006c645e: mov dword ptr [esi + 0x2bc], eax */ W32((u32)(r_esi+0x2bcu), r_eax);
    /* 006c6464: mov dword ptr [esi + 0x2c0], eax */ W32((u32)(r_esi+0x2c0u), r_eax);
    /* 006c646a: mov dword ptr [esi + 0x2c4], eax */ W32((u32)(r_esi+0x2c4u), r_eax);
    /* 006c6470: mov byte ptr [esi + 0x2c8], al */ W8((u32)(r_esi+0x2c8u), (u8)r_eax);
    /* 006c6476: mov byte ptr [esi + 0x2c9], al */ W8((u32)(r_esi+0x2c9u), (u8)r_eax);
    /* 006c647c: mov byte ptr [esi + 0x2ca], al */ W8((u32)(r_esi+0x2cau), (u8)r_eax);
    /* 006c6482: mov byte ptr [esi + 0x2cb], al */ W8((u32)(r_esi+0x2cbu), (u8)r_eax);
    /* 006c6488: mov word ptr [esi + 0x2cc], ax */ W16((u32)(r_esi+0x2ccu), (u16)r_eax);
    /* 006c648f: mov dword ptr [ebp - 0x144], eax */ W32((u32)(r_ebp+0xfffffebcu), r_eax);
    /* 006c6495: mov eax, dword ptr [ebp - 0x198] */ r_eax = R32((u32)(r_ebp+0xfffffe68u));
L_006c649b:; BB(0x006c649b);
    /* 006c649b: mov dword ptr [0xa95df0], eax */ W32((u32)(0xa95df0u), r_eax);
    /* 006c64a0: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006c64a7: push 0xd590 */ { u32 v = 0xd590u; r_esp -= 4; W32(r_esp, v); }
    /* 006c64ac: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6c64b1u); f_008581c5();
    /* 006c64b1: mov dword ptr [ebp - 0x140], 0 */ W32((u32)(r_ebp+0xfffffec0u), 0x0u);
    /* 006c64bb: mov dword ptr [0xa95df4], eax */ W32((u32)(0xa95df4u), r_eax);
    /* 006c64c0: push 0xbaa4 */ { u32 v = 0xbaa4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c64c5: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6c64cau); f_008581c5();
    /* 006c64ca: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c64cd: mov dword ptr [ebp - 0x1b0], eax */ W32((u32)(r_ebp+0xfffffe50u), r_eax);
    /* 006c64d3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c64d5: je 0x6c752e */ if (fZ) goto L_006c752e;
L_006c64db:; BB(0x006c64db);
    /* 006c64db: mov dword ptr [ebp - 0x140], 1 */ W32((u32)(r_ebp+0xfffffec0u), 0x1u);
    /* 006c64e5: mov dword ptr [ebp - 4], 0x25 */ W32((u32)(r_ebp+0xfffffffcu), 0x25u);
    /* 006c64ec: push 0x6c1940 */ { u32 v = 0x6c1940u; r_esp -= 4; W32(r_esp, v); }
    /* 006c64f1: push 0x6c17f0 */ { u32 v = 0x6c17f0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c64f6: mov eax, dword ptr [ebp - 0x1b0] */ r_eax = R32((u32)(r_ebp+0xfffffe50u));
    /* 006c64fc: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c64fe: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006c6501: push 0x2ea4 */ { u32 v = 0x2ea4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6506: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c6507: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x6c650cu); f_00858736();
    /* 006c650c: mov eax, dword ptr [ebp - 0x1b0] */ r_eax = R32((u32)(r_ebp+0xfffffe50u));
    /* 006c6512: mov dword ptr [ebp - 0x140], 0 */ W32((u32)(r_ebp+0xfffffec0u), 0x0u);
L_006c651c:; BB(0x006c651c);
    /* 006c651c: mov dword ptr [0xa95e44], eax */ W32((u32)(0xa95e44u), r_eax);
    /* 006c6521: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006c6528: mov dword ptr [ebp - 0x13c], 0 */ W32((u32)(r_ebp+0xfffffec4u), 0x0u);
    /* 006c6532: push 0x4dc */ { u32 v = 0x4dcu; r_esp -= 4; W32(r_esp, v); }
    /* 006c6537: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6c653cu); f_008581c5();
    /* 006c653c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c653d: mov dword ptr [ebp - 0x1a8], eax */ W32((u32)(r_ebp+0xfffffe58u), r_eax);
    /* 006c6543: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c6545: je 0x6c7527 */ if (fZ) goto L_006c7527;
L_006c654b:; BB(0x006c654b);
    /* 006c654b: mov dword ptr [ebp - 0x13c], 1 */ W32((u32)(r_ebp+0xfffffec4u), 0x1u);
    /* 006c6555: mov dword ptr [ebp - 4], 0x26 */ W32((u32)(r_ebp+0xfffffffcu), 0x26u);
    /* 006c655c: mov ecx, dword ptr [ebp - 0x1a8] */ r_ecx = R32((u32)(r_ebp+0xfffffe58u));
    /* 006c6562: call 0x6c454c */ r_esp -= 4; W32(r_esp, 0x6c6567u); f_006c454c();
    /* 006c6567: mov eax, dword ptr [ebp - 0x1a8] */ r_eax = R32((u32)(r_ebp+0xfffffe58u));
    /* 006c656d: mov dword ptr [ebp - 0x13c], 0 */ W32((u32)(r_ebp+0xfffffec4u), 0x0u);
L_006c6577:; BB(0x006c6577);
    /* 006c6577: mov dword ptr [0xa95dfc], eax */ W32((u32)(0xa95dfcu), r_eax);
    /* 006c657c: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006c6583: mov dword ptr [ebp - 0x138], 0 */ W32((u32)(r_ebp+0xfffffec8u), 0x0u);
    /* 006c658d: push 0x29c8 */ { u32 v = 0x29c8u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6592: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6c6597u); f_008581c5();
    /* 006c6597: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c6598: mov dword ptr [ebp - 0x1a0], eax */ W32((u32)(r_ebp+0xfffffe60u), r_eax);
    /* 006c659e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c65a0: je 0x6c7520 */ if (fZ) goto L_006c7520;
L_006c65a6:; BB(0x006c65a6);
    /* 006c65a6: mov dword ptr [ebp - 0x138], 1 */ W32((u32)(r_ebp+0xfffffec8u), 0x1u);
    /* 006c65b0: mov dword ptr [ebp - 4], 0x27 */ W32((u32)(r_ebp+0xfffffffcu), 0x27u);
    /* 006c65b7: mov ecx, dword ptr [ebp - 0x1a0] */ r_ecx = R32((u32)(r_ebp+0xfffffe60u));
    /* 006c65bd: call 0x6c4674 */ r_esp -= 4; W32(r_esp, 0x6c65c2u); f_006c4674();
    /* 006c65c2: mov eax, dword ptr [ebp - 0x1a0] */ r_eax = R32((u32)(r_ebp+0xfffffe60u));
    /* 006c65c8: mov dword ptr [ebp - 0x138], 0 */ W32((u32)(r_ebp+0xfffffec8u), 0x0u);
L_006c65d2:; BB(0x006c65d2);
    /* 006c65d2: mov dword ptr [0xa95df8], eax */ W32((u32)(0xa95df8u), r_eax);
    /* 006c65d7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006c65de: jmp 0x6c6b1e */ goto L_006c6b1e;
L_006c6b1e:; BB(0x006c6b1e);
    /* 006c6b1e: push 0x4dc */ { u32 v = 0x4dcu; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b23: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b25: push dword ptr [0xa95dfc] */ { u32 v = R32((u32)(0xa95dfcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006c6b2b: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x6c6b30u); f_0086b688();
    /* 006c6b30: push 0x29c8 */ { u32 v = 0x29c8u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b35: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b37: push dword ptr [0xa95df8] */ { u32 v = R32((u32)(0xa95df8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c6b3d: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x6c6b42u); f_0086b688();
    /* 006c6b42: push 0xbaa4 */ { u32 v = 0xbaa4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b47: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b49: push dword ptr [0xa95e44] */ { u32 v = R32((u32)(0xa95e44u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c6b4f: call 0x86b5cc */ r_esp -= 4; W32(r_esp, 0x6c6b54u); f_0086b5cc();
    /* 006c6b54: push 0xaf0 */ { u32 v = 0xaf0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b59: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b5b: push dword ptr [0xa95df0] */ { u32 v = R32((u32)(0xa95df0u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c6b61: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x6c6b66u); f_0086b688();
    /* 006c6b66: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c6b69: call 0x6c78a0 */ r_esp -= 4; W32(r_esp, 0x6c6b6eu); f_006c78a0();
    /* 006c6b6e: mov dword ptr [0xa95dd4], 5 */ W32((u32)(0xa95dd4u), 0x5u);
    /* 006c6b78: mov dword ptr [0xa95dd0], 6 */ W32((u32)(0xa95dd0u), 0x6u);
    /* 006c6b82: mov dword ptr [0xa95dc8], 3 */ W32((u32)(0xa95dc8u), 0x3u);
    /* 006c6b8c: call 0x6c79c0 */ r_esp -= 4; W32(r_esp, 0x6c6b91u); f_006c79c0();
    /* 006c6b91: call 0x6c7988 */ r_esp -= 4; W32(r_esp, 0x6c6b96u); f_006c7988();
    /* 006c6b96: call 0x6c7950 */ r_esp -= 4; W32(r_esp, 0x6c6b9bu); f_006c7950();
    /* 006c6b9b: mov dword ptr [0xa95de0], 0 */ W32((u32)(0xa95de0u), 0x0u);
    /* 006c6ba5: call 0x415cec */ r_esp -= 4; W32(r_esp, 0x6c6baau); f_00415cec();
    /* 006c6baa: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 006c6bad: mov dword ptr [0xa95ddc], eax */ W32((u32)(0xa95ddcu), r_eax);
    /* 006c6bb2: call 0x415cec */ r_esp -= 4; W32(r_esp, 0x6c6bb7u); f_00415cec();
    /* 006c6bb7: mov edx, dword ptr [0xa95df0] */ r_edx = R32((u32)(0xa95df0u));
    /* 006c6bbd: mov ecx, dword ptr [edx + 0x110] */ r_ecx = R32((u32)(r_edx+0x110u));
    /* 006c6bc3: mov dword ptr [0xa95dc4], ecx */ W32((u32)(0xa95dc4u), r_ecx);
    /* 006c6bc9: mov dword ptr [0xa95dc0], ecx */ W32((u32)(0xa95dc0u), r_ecx);
    /* 006c6bcf: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 006c6bd2: mov dword ptr [0xa95dd8], eax */ W32((u32)(0xa95dd8u), r_eax);
    /* 006c6bd7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_006c6bd9:; BB(0x006c6bd9);
    /* 006c6bd9: mov byte ptr [ebp + eax - 0x24], 0 */ W8((u32)(r_ebp+r_eax+0xffffffdcu), 0x0u);
    /* 006c6bde: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006c6be1: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006c6be4: jl 0x6c6bd9 */ if ((fS!=fO)) goto L_006c6bd9;
L_006c6be6:; BB(0x006c6be6);
    /* 006c6be6: jmp 0x6c76e2 */ goto L_006c76e2;
L_006c7520:; BB(0x006c7520);
    /* 006c7520: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c7522: jmp 0x6c65d2 */ goto L_006c65d2;
L_006c7527:; BB(0x006c7527);
    /* 006c7527: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c7529: jmp 0x6c6577 */ goto L_006c6577;
L_006c752e:; BB(0x006c752e);
    /* 006c752e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c7530: jmp 0x6c651c */ goto L_006c651c;
L_006c7535:; BB(0x006c7535);
    /* 006c7535: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c7537: jmp 0x6c649b */ goto L_006c649b;
L_006c76e2:; BB(0x006c76e2);
    /* 006c76e2: movsx eax, byte ptr [ebp - 0x22] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffdeu));
    /* 006c76e6: movsx esi, byte ptr [ebp - 0x21] */ r_esi = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffdfu));
    /* 006c76ea: movzx edi, byte ptr [ebp - 0x24] */ r_edi = (u32)R8((u32)(r_ebp+0xffffffdcu));
    /* 006c76ee: movsx edx, byte ptr [ebp - 0x23] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffddu));
    /* 006c76f2: movsx ebx, byte ptr [ebp - 0x20] */ r_ebx = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffe0u));
    /* 006c76f6: mov dword ptr [0xa95db0], 1 */ W32((u32)(0xa95db0u), 0x1u);
    /* 006c7700: shl edi, 0x18 */ { u32 c = (24u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 006c7703: shl edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 006c7706: or edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 006c7708: movsx edx, byte ptr [ebp - 0x1f] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffe1u));
    /* 006c770c: mov ecx, eax */ r_ecx = r_eax;
    /* 006c770e: shl ecx, 8 */ { u32 c = (8u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 006c7711: or edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 006c7713: or edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 006c7715: shl eax, 0x18 */ { u32 c = (24u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 006c7718: mov dword ptr [0xa95db8], edi */ W32((u32)(0xa95db8u), r_edi);
    /* 006c771e: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 006c7721: shl esi, 0x10 */ { u32 c = (16u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 006c7724: or eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006c7726: shl ebx, 8 */ { u32 c = (8u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 006c7729: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006c772c: or eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006c772e: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 006c7731: or eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006c7733: mov dword ptr [0xa95dbc], eax */ W32((u32)(0xa95dbcu), r_eax);
    /* 006c7738: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c773a: mov dword ptr [0xa95db4], eax */ W32((u32)(0xa95db4u), r_eax);
    /* 006c773f: mov dword ptr [0xa95dac], eax */ W32((u32)(0xa95dacu), r_eax);
    /* 006c7744: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006c7747: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006c774e: mov esp, ebp */ r_esp = r_ebp;
    /* 006c7750: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006c7751: ret  */ FN_RET(0x006c6423); r_esp += 4; return;
}

void f_006c6432(void)
{
    FN_ENTER(0x006c6432);
    /* 006c6432: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6c6437u); f_008581c5();
    /* 006c6437: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c6438: mov dword ptr [ebp - 0x198], eax */ W32((u32)(r_ebp+0xfffffe68u), r_eax);
    /* 006c643e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c6440: je 0x6c7535 */ if (fZ) goto L_006c7535;
L_006c6446:; BB(0x006c6446);
    /* 006c6446: mov dword ptr [ebp - 0x144], 1 */ W32((u32)(r_ebp+0xfffffebcu), 0x1u);
    /* 006c6450: mov esi, dword ptr [ebp - 0x198] */ r_esi = R32((u32)(r_ebp+0xfffffe68u));
    /* 006c6456: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c6458: mov dword ptr [esi + 0x2b8], eax */ W32((u32)(r_esi+0x2b8u), r_eax);
    /* 006c645e: mov dword ptr [esi + 0x2bc], eax */ W32((u32)(r_esi+0x2bcu), r_eax);
    /* 006c6464: mov dword ptr [esi + 0x2c0], eax */ W32((u32)(r_esi+0x2c0u), r_eax);
    /* 006c646a: mov dword ptr [esi + 0x2c4], eax */ W32((u32)(r_esi+0x2c4u), r_eax);
    /* 006c6470: mov byte ptr [esi + 0x2c8], al */ W8((u32)(r_esi+0x2c8u), (u8)r_eax);
    /* 006c6476: mov byte ptr [esi + 0x2c9], al */ W8((u32)(r_esi+0x2c9u), (u8)r_eax);
    /* 006c647c: mov byte ptr [esi + 0x2ca], al */ W8((u32)(r_esi+0x2cau), (u8)r_eax);
    /* 006c6482: mov byte ptr [esi + 0x2cb], al */ W8((u32)(r_esi+0x2cbu), (u8)r_eax);
    /* 006c6488: mov word ptr [esi + 0x2cc], ax */ W16((u32)(r_esi+0x2ccu), (u16)r_eax);
    /* 006c648f: mov dword ptr [ebp - 0x144], eax */ W32((u32)(r_ebp+0xfffffebcu), r_eax);
    /* 006c6495: mov eax, dword ptr [ebp - 0x198] */ r_eax = R32((u32)(r_ebp+0xfffffe68u));
L_006c649b:; BB(0x006c649b);
    /* 006c649b: mov dword ptr [0xa95df0], eax */ W32((u32)(0xa95df0u), r_eax);
    /* 006c64a0: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006c64a7: push 0xd590 */ { u32 v = 0xd590u; r_esp -= 4; W32(r_esp, v); }
    /* 006c64ac: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6c64b1u); f_008581c5();
    /* 006c64b1: mov dword ptr [ebp - 0x140], 0 */ W32((u32)(r_ebp+0xfffffec0u), 0x0u);
    /* 006c64bb: mov dword ptr [0xa95df4], eax */ W32((u32)(0xa95df4u), r_eax);
    /* 006c64c0: push 0xbaa4 */ { u32 v = 0xbaa4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c64c5: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6c64cau); f_008581c5();
    /* 006c64ca: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c64cd: mov dword ptr [ebp - 0x1b0], eax */ W32((u32)(r_ebp+0xfffffe50u), r_eax);
    /* 006c64d3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c64d5: je 0x6c752e */ if (fZ) goto L_006c752e;
L_006c64db:; BB(0x006c64db);
    /* 006c64db: mov dword ptr [ebp - 0x140], 1 */ W32((u32)(r_ebp+0xfffffec0u), 0x1u);
    /* 006c64e5: mov dword ptr [ebp - 4], 0x25 */ W32((u32)(r_ebp+0xfffffffcu), 0x25u);
    /* 006c64ec: push 0x6c1940 */ { u32 v = 0x6c1940u; r_esp -= 4; W32(r_esp, v); }
    /* 006c64f1: push 0x6c17f0 */ { u32 v = 0x6c17f0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c64f6: mov eax, dword ptr [ebp - 0x1b0] */ r_eax = R32((u32)(r_ebp+0xfffffe50u));
    /* 006c64fc: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c64fe: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006c6501: push 0x2ea4 */ { u32 v = 0x2ea4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6506: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c6507: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x6c650cu); f_00858736();
    /* 006c650c: mov eax, dword ptr [ebp - 0x1b0] */ r_eax = R32((u32)(r_ebp+0xfffffe50u));
    /* 006c6512: mov dword ptr [ebp - 0x140], 0 */ W32((u32)(r_ebp+0xfffffec0u), 0x0u);
L_006c651c:; BB(0x006c651c);
    /* 006c651c: mov dword ptr [0xa95e44], eax */ W32((u32)(0xa95e44u), r_eax);
    /* 006c6521: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006c6528: mov dword ptr [ebp - 0x13c], 0 */ W32((u32)(r_ebp+0xfffffec4u), 0x0u);
    /* 006c6532: push 0x4dc */ { u32 v = 0x4dcu; r_esp -= 4; W32(r_esp, v); }
    /* 006c6537: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6c653cu); f_008581c5();
    /* 006c653c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c653d: mov dword ptr [ebp - 0x1a8], eax */ W32((u32)(r_ebp+0xfffffe58u), r_eax);
    /* 006c6543: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c6545: je 0x6c7527 */ if (fZ) goto L_006c7527;
L_006c654b:; BB(0x006c654b);
    /* 006c654b: mov dword ptr [ebp - 0x13c], 1 */ W32((u32)(r_ebp+0xfffffec4u), 0x1u);
    /* 006c6555: mov dword ptr [ebp - 4], 0x26 */ W32((u32)(r_ebp+0xfffffffcu), 0x26u);
    /* 006c655c: mov ecx, dword ptr [ebp - 0x1a8] */ r_ecx = R32((u32)(r_ebp+0xfffffe58u));
    /* 006c6562: call 0x6c454c */ r_esp -= 4; W32(r_esp, 0x6c6567u); f_006c454c();
    /* 006c6567: mov eax, dword ptr [ebp - 0x1a8] */ r_eax = R32((u32)(r_ebp+0xfffffe58u));
    /* 006c656d: mov dword ptr [ebp - 0x13c], 0 */ W32((u32)(r_ebp+0xfffffec4u), 0x0u);
L_006c6577:; BB(0x006c6577);
    /* 006c6577: mov dword ptr [0xa95dfc], eax */ W32((u32)(0xa95dfcu), r_eax);
    /* 006c657c: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006c6583: mov dword ptr [ebp - 0x138], 0 */ W32((u32)(r_ebp+0xfffffec8u), 0x0u);
    /* 006c658d: push 0x29c8 */ { u32 v = 0x29c8u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6592: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6c6597u); f_008581c5();
    /* 006c6597: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c6598: mov dword ptr [ebp - 0x1a0], eax */ W32((u32)(r_ebp+0xfffffe60u), r_eax);
    /* 006c659e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c65a0: je 0x6c7520 */ if (fZ) goto L_006c7520;
L_006c65a6:; BB(0x006c65a6);
    /* 006c65a6: mov dword ptr [ebp - 0x138], 1 */ W32((u32)(r_ebp+0xfffffec8u), 0x1u);
    /* 006c65b0: mov dword ptr [ebp - 4], 0x27 */ W32((u32)(r_ebp+0xfffffffcu), 0x27u);
    /* 006c65b7: mov ecx, dword ptr [ebp - 0x1a0] */ r_ecx = R32((u32)(r_ebp+0xfffffe60u));
    /* 006c65bd: call 0x6c4674 */ r_esp -= 4; W32(r_esp, 0x6c65c2u); f_006c4674();
    /* 006c65c2: mov eax, dword ptr [ebp - 0x1a0] */ r_eax = R32((u32)(r_ebp+0xfffffe60u));
    /* 006c65c8: mov dword ptr [ebp - 0x138], 0 */ W32((u32)(r_ebp+0xfffffec8u), 0x0u);
L_006c65d2:; BB(0x006c65d2);
    /* 006c65d2: mov dword ptr [0xa95df8], eax */ W32((u32)(0xa95df8u), r_eax);
    /* 006c65d7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006c65de: jmp 0x6c6b1e */ goto L_006c6b1e;
L_006c6b1e:; BB(0x006c6b1e);
    /* 006c6b1e: push 0x4dc */ { u32 v = 0x4dcu; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b23: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b25: push dword ptr [0xa95dfc] */ { u32 v = R32((u32)(0xa95dfcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006c6b2b: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x6c6b30u); f_0086b688();
    /* 006c6b30: push 0x29c8 */ { u32 v = 0x29c8u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b35: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b37: push dword ptr [0xa95df8] */ { u32 v = R32((u32)(0xa95df8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c6b3d: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x6c6b42u); f_0086b688();
    /* 006c6b42: push 0xbaa4 */ { u32 v = 0xbaa4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b47: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b49: push dword ptr [0xa95e44] */ { u32 v = R32((u32)(0xa95e44u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c6b4f: call 0x86b5cc */ r_esp -= 4; W32(r_esp, 0x6c6b54u); f_0086b5cc();
    /* 006c6b54: push 0xaf0 */ { u32 v = 0xaf0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b59: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b5b: push dword ptr [0xa95df0] */ { u32 v = R32((u32)(0xa95df0u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c6b61: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x6c6b66u); f_0086b688();
    /* 006c6b66: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c6b69: call 0x6c78a0 */ r_esp -= 4; W32(r_esp, 0x6c6b6eu); f_006c78a0();
    /* 006c6b6e: mov dword ptr [0xa95dd4], 5 */ W32((u32)(0xa95dd4u), 0x5u);
    /* 006c6b78: mov dword ptr [0xa95dd0], 6 */ W32((u32)(0xa95dd0u), 0x6u);
    /* 006c6b82: mov dword ptr [0xa95dc8], 3 */ W32((u32)(0xa95dc8u), 0x3u);
    /* 006c6b8c: call 0x6c79c0 */ r_esp -= 4; W32(r_esp, 0x6c6b91u); f_006c79c0();
    /* 006c6b91: call 0x6c7988 */ r_esp -= 4; W32(r_esp, 0x6c6b96u); f_006c7988();
    /* 006c6b96: call 0x6c7950 */ r_esp -= 4; W32(r_esp, 0x6c6b9bu); f_006c7950();
    /* 006c6b9b: mov dword ptr [0xa95de0], 0 */ W32((u32)(0xa95de0u), 0x0u);
    /* 006c6ba5: call 0x415cec */ r_esp -= 4; W32(r_esp, 0x6c6baau); f_00415cec();
    /* 006c6baa: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 006c6bad: mov dword ptr [0xa95ddc], eax */ W32((u32)(0xa95ddcu), r_eax);
    /* 006c6bb2: call 0x415cec */ r_esp -= 4; W32(r_esp, 0x6c6bb7u); f_00415cec();
    /* 006c6bb7: mov edx, dword ptr [0xa95df0] */ r_edx = R32((u32)(0xa95df0u));
    /* 006c6bbd: mov ecx, dword ptr [edx + 0x110] */ r_ecx = R32((u32)(r_edx+0x110u));
    /* 006c6bc3: mov dword ptr [0xa95dc4], ecx */ W32((u32)(0xa95dc4u), r_ecx);
    /* 006c6bc9: mov dword ptr [0xa95dc0], ecx */ W32((u32)(0xa95dc0u), r_ecx);
    /* 006c6bcf: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 006c6bd2: mov dword ptr [0xa95dd8], eax */ W32((u32)(0xa95dd8u), r_eax);
    /* 006c6bd7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_006c6bd9:; BB(0x006c6bd9);
    /* 006c6bd9: mov byte ptr [ebp + eax - 0x24], 0 */ W8((u32)(r_ebp+r_eax+0xffffffdcu), 0x0u);
    /* 006c6bde: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006c6be1: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006c6be4: jl 0x6c6bd9 */ if ((fS!=fO)) goto L_006c6bd9;
L_006c6be6:; BB(0x006c6be6);
    /* 006c6be6: jmp 0x6c76e2 */ goto L_006c76e2;
L_006c7520:; BB(0x006c7520);
    /* 006c7520: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c7522: jmp 0x6c65d2 */ goto L_006c65d2;
L_006c7527:; BB(0x006c7527);
    /* 006c7527: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c7529: jmp 0x6c6577 */ goto L_006c6577;
L_006c752e:; BB(0x006c752e);
    /* 006c752e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c7530: jmp 0x6c651c */ goto L_006c651c;
L_006c7535:; BB(0x006c7535);
    /* 006c7535: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c7537: jmp 0x6c649b */ goto L_006c649b;
L_006c76e2:; BB(0x006c76e2);
    /* 006c76e2: movsx eax, byte ptr [ebp - 0x22] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffdeu));
    /* 006c76e6: movsx esi, byte ptr [ebp - 0x21] */ r_esi = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffdfu));
    /* 006c76ea: movzx edi, byte ptr [ebp - 0x24] */ r_edi = (u32)R8((u32)(r_ebp+0xffffffdcu));
    /* 006c76ee: movsx edx, byte ptr [ebp - 0x23] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffddu));
    /* 006c76f2: movsx ebx, byte ptr [ebp - 0x20] */ r_ebx = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffe0u));
    /* 006c76f6: mov dword ptr [0xa95db0], 1 */ W32((u32)(0xa95db0u), 0x1u);
    /* 006c7700: shl edi, 0x18 */ { u32 c = (24u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 006c7703: shl edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 006c7706: or edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 006c7708: movsx edx, byte ptr [ebp - 0x1f] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffe1u));
    /* 006c770c: mov ecx, eax */ r_ecx = r_eax;
    /* 006c770e: shl ecx, 8 */ { u32 c = (8u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 006c7711: or edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 006c7713: or edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 006c7715: shl eax, 0x18 */ { u32 c = (24u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 006c7718: mov dword ptr [0xa95db8], edi */ W32((u32)(0xa95db8u), r_edi);
    /* 006c771e: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 006c7721: shl esi, 0x10 */ { u32 c = (16u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 006c7724: or eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006c7726: shl ebx, 8 */ { u32 c = (8u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 006c7729: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006c772c: or eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006c772e: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 006c7731: or eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006c7733: mov dword ptr [0xa95dbc], eax */ W32((u32)(0xa95dbcu), r_eax);
    /* 006c7738: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c773a: mov dword ptr [0xa95db4], eax */ W32((u32)(0xa95db4u), r_eax);
    /* 006c773f: mov dword ptr [0xa95dac], eax */ W32((u32)(0xa95dacu), r_eax);
    /* 006c7744: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006c7747: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006c774e: mov esp, ebp */ r_esp = r_ebp;
    /* 006c7750: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006c7751: ret  */ FN_RET(0x006c6432); r_esp += 4; return;
}

void f_006c6572(void)
{
    FN_ENTER(0x006c6572);
    /* 006c6572: inc dword ptr [eax] */ { u32 ad = (u32)(r_eax); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 006c6574: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 006c6576: add byte ptr [ebx + 0xa95dfc], ah */ { u32 ad = (u32)(r_ebx+0xa95dfcu);  u32 a = R8(ad); u32 b = (u8)(r_eax>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 006c657c: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006c6583: mov dword ptr [ebp - 0x138], 0 */ W32((u32)(r_ebp+0xfffffec8u), 0x0u);
    /* 006c658d: push 0x29c8 */ { u32 v = 0x29c8u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6592: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6c6597u); f_008581c5();
    /* 006c6597: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c6598: mov dword ptr [ebp - 0x1a0], eax */ W32((u32)(r_ebp+0xfffffe60u), r_eax);
    /* 006c659e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c65a0: je 0x6c7520 */ if (fZ) goto L_006c7520;
L_006c65a6:; BB(0x006c65a6);
    /* 006c65a6: mov dword ptr [ebp - 0x138], 1 */ W32((u32)(r_ebp+0xfffffec8u), 0x1u);
    /* 006c65b0: mov dword ptr [ebp - 4], 0x27 */ W32((u32)(r_ebp+0xfffffffcu), 0x27u);
    /* 006c65b7: mov ecx, dword ptr [ebp - 0x1a0] */ r_ecx = R32((u32)(r_ebp+0xfffffe60u));
    /* 006c65bd: call 0x6c4674 */ r_esp -= 4; W32(r_esp, 0x6c65c2u); f_006c4674();
    /* 006c65c2: mov eax, dword ptr [ebp - 0x1a0] */ r_eax = R32((u32)(r_ebp+0xfffffe60u));
    /* 006c65c8: mov dword ptr [ebp - 0x138], 0 */ W32((u32)(r_ebp+0xfffffec8u), 0x0u);
L_006c65d2:; BB(0x006c65d2);
    /* 006c65d2: mov dword ptr [0xa95df8], eax */ W32((u32)(0xa95df8u), r_eax);
    /* 006c65d7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006c65de: jmp 0x6c6b1e */ goto L_006c6b1e;
L_006c6b1e:; BB(0x006c6b1e);
    /* 006c6b1e: push 0x4dc */ { u32 v = 0x4dcu; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b23: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b25: push dword ptr [0xa95dfc] */ { u32 v = R32((u32)(0xa95dfcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006c6b2b: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x6c6b30u); f_0086b688();
    /* 006c6b30: push 0x29c8 */ { u32 v = 0x29c8u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b35: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b37: push dword ptr [0xa95df8] */ { u32 v = R32((u32)(0xa95df8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c6b3d: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x6c6b42u); f_0086b688();
    /* 006c6b42: push 0xbaa4 */ { u32 v = 0xbaa4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b47: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b49: push dword ptr [0xa95e44] */ { u32 v = R32((u32)(0xa95e44u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c6b4f: call 0x86b5cc */ r_esp -= 4; W32(r_esp, 0x6c6b54u); f_0086b5cc();
    /* 006c6b54: push 0xaf0 */ { u32 v = 0xaf0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b59: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b5b: push dword ptr [0xa95df0] */ { u32 v = R32((u32)(0xa95df0u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c6b61: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x6c6b66u); f_0086b688();
    /* 006c6b66: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c6b69: call 0x6c78a0 */ r_esp -= 4; W32(r_esp, 0x6c6b6eu); f_006c78a0();
    /* 006c6b6e: mov dword ptr [0xa95dd4], 5 */ W32((u32)(0xa95dd4u), 0x5u);
    /* 006c6b78: mov dword ptr [0xa95dd0], 6 */ W32((u32)(0xa95dd0u), 0x6u);
    /* 006c6b82: mov dword ptr [0xa95dc8], 3 */ W32((u32)(0xa95dc8u), 0x3u);
    /* 006c6b8c: call 0x6c79c0 */ r_esp -= 4; W32(r_esp, 0x6c6b91u); f_006c79c0();
    /* 006c6b91: call 0x6c7988 */ r_esp -= 4; W32(r_esp, 0x6c6b96u); f_006c7988();
    /* 006c6b96: call 0x6c7950 */ r_esp -= 4; W32(r_esp, 0x6c6b9bu); f_006c7950();
    /* 006c6b9b: mov dword ptr [0xa95de0], 0 */ W32((u32)(0xa95de0u), 0x0u);
    /* 006c6ba5: call 0x415cec */ r_esp -= 4; W32(r_esp, 0x6c6baau); f_00415cec();
    /* 006c6baa: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 006c6bad: mov dword ptr [0xa95ddc], eax */ W32((u32)(0xa95ddcu), r_eax);
    /* 006c6bb2: call 0x415cec */ r_esp -= 4; W32(r_esp, 0x6c6bb7u); f_00415cec();
    /* 006c6bb7: mov edx, dword ptr [0xa95df0] */ r_edx = R32((u32)(0xa95df0u));
    /* 006c6bbd: mov ecx, dword ptr [edx + 0x110] */ r_ecx = R32((u32)(r_edx+0x110u));
    /* 006c6bc3: mov dword ptr [0xa95dc4], ecx */ W32((u32)(0xa95dc4u), r_ecx);
    /* 006c6bc9: mov dword ptr [0xa95dc0], ecx */ W32((u32)(0xa95dc0u), r_ecx);
    /* 006c6bcf: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 006c6bd2: mov dword ptr [0xa95dd8], eax */ W32((u32)(0xa95dd8u), r_eax);
    /* 006c6bd7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_006c6bd9:; BB(0x006c6bd9);
    /* 006c6bd9: mov byte ptr [ebp + eax - 0x24], 0 */ W8((u32)(r_ebp+r_eax+0xffffffdcu), 0x0u);
    /* 006c6bde: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006c6be1: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006c6be4: jl 0x6c6bd9 */ if ((fS!=fO)) goto L_006c6bd9;
L_006c6be6:; BB(0x006c6be6);
    /* 006c6be6: jmp 0x6c76e2 */ goto L_006c76e2;
L_006c7520:; BB(0x006c7520);
    /* 006c7520: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c7522: jmp 0x6c65d2 */ goto L_006c65d2;
L_006c76e2:; BB(0x006c76e2);
    /* 006c76e2: movsx eax, byte ptr [ebp - 0x22] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffdeu));
    /* 006c76e6: movsx esi, byte ptr [ebp - 0x21] */ r_esi = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffdfu));
    /* 006c76ea: movzx edi, byte ptr [ebp - 0x24] */ r_edi = (u32)R8((u32)(r_ebp+0xffffffdcu));
    /* 006c76ee: movsx edx, byte ptr [ebp - 0x23] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffddu));
    /* 006c76f2: movsx ebx, byte ptr [ebp - 0x20] */ r_ebx = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffe0u));
    /* 006c76f6: mov dword ptr [0xa95db0], 1 */ W32((u32)(0xa95db0u), 0x1u);
    /* 006c7700: shl edi, 0x18 */ { u32 c = (24u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 006c7703: shl edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 006c7706: or edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 006c7708: movsx edx, byte ptr [ebp - 0x1f] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffe1u));
    /* 006c770c: mov ecx, eax */ r_ecx = r_eax;
    /* 006c770e: shl ecx, 8 */ { u32 c = (8u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 006c7711: or edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 006c7713: or edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 006c7715: shl eax, 0x18 */ { u32 c = (24u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 006c7718: mov dword ptr [0xa95db8], edi */ W32((u32)(0xa95db8u), r_edi);
    /* 006c771e: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 006c7721: shl esi, 0x10 */ { u32 c = (16u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 006c7724: or eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006c7726: shl ebx, 8 */ { u32 c = (8u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 006c7729: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006c772c: or eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006c772e: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 006c7731: or eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006c7733: mov dword ptr [0xa95dbc], eax */ W32((u32)(0xa95dbcu), r_eax);
    /* 006c7738: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c773a: mov dword ptr [0xa95db4], eax */ W32((u32)(0xa95db4u), r_eax);
    /* 006c773f: mov dword ptr [0xa95dac], eax */ W32((u32)(0xa95dacu), r_eax);
    /* 006c7744: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006c7747: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006c774e: mov esp, ebp */ r_esp = r_ebp;
    /* 006c7750: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006c7751: ret  */ FN_RET(0x006c6572); r_esp += 4; return;
}

void f_006c65e3(void)
{
    FN_ENTER(0x006c65e3);
    /* 006c65e3: mov dword ptr [ebp - 0x154], 0 */ W32((u32)(r_ebp+0xfffffeacu), 0x0u);
    /* 006c65ed: push 0xbaa4 */ { u32 v = 0xbaa4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c65f2: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6c65f7u); f_008581c5();
    /* 006c65f7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c65f8: mov dword ptr [ebp - 0x1b0], eax */ W32((u32)(r_ebp+0xfffffe50u), r_eax);
    /* 006c65fe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c6600: je 0x6c7551 */ if (fZ) goto L_006c7551;
L_006c6606:; BB(0x006c6606);
    /* 006c6606: mov dword ptr [ebp - 0x154], 1 */ W32((u32)(r_ebp+0xfffffeacu), 0x1u);
    /* 006c6610: mov dword ptr [ebp - 4], 0x20 */ W32((u32)(r_ebp+0xfffffffcu), 0x20u);
    /* 006c6617: push 0x6c1940 */ { u32 v = 0x6c1940u; r_esp -= 4; W32(r_esp, v); }
    /* 006c661c: push 0x6c17f0 */ { u32 v = 0x6c17f0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6621: mov eax, dword ptr [ebp - 0x1b0] */ r_eax = R32((u32)(r_ebp+0xfffffe50u));
    /* 006c6627: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6629: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006c662c: push 0x2ea4 */ { u32 v = 0x2ea4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6631: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c6632: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x6c6637u); f_00858736();
    /* 006c6637: mov eax, dword ptr [ebp - 0x1b0] */ r_eax = R32((u32)(r_ebp+0xfffffe50u));
    /* 006c663d: mov dword ptr [ebp - 0x154], 0 */ W32((u32)(r_ebp+0xfffffeacu), 0x0u);
L_006c6647:; BB(0x006c6647);
    /* 006c6647: mov dword ptr [0xa95e44], eax */ W32((u32)(0xa95e44u), r_eax);
    /* 006c664c: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006c6653: push 0xd590 */ { u32 v = 0xd590u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6658: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6c665du); f_008581c5();
    /* 006c665d: mov dword ptr [ebp - 0x150], 0 */ W32((u32)(r_ebp+0xfffffeb0u), 0x0u);
    /* 006c6667: mov dword ptr [0xa95df4], eax */ W32((u32)(0xa95df4u), r_eax);
    /* 006c666c: push 0xaf0 */ { u32 v = 0xaf0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6671: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6c6676u); f_008581c5();
    /* 006c6676: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c6679: mov dword ptr [ebp - 0x198], eax */ W32((u32)(r_ebp+0xfffffe68u), r_eax);
    /* 006c667f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c6681: je 0x6c754a */ if (fZ) goto L_006c754a;
L_006c6687:; BB(0x006c6687);
    /* 006c6687: mov dword ptr [ebp - 0x150], 1 */ W32((u32)(r_ebp+0xfffffeb0u), 0x1u);
    /* 006c6691: mov esi, dword ptr [ebp - 0x198] */ r_esi = R32((u32)(r_ebp+0xfffffe68u));
    /* 006c6697: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c6699: mov dword ptr [esi + 0x2b8], eax */ W32((u32)(r_esi+0x2b8u), r_eax);
    /* 006c669f: mov dword ptr [esi + 0x2bc], eax */ W32((u32)(r_esi+0x2bcu), r_eax);
    /* 006c66a5: mov dword ptr [esi + 0x2c0], eax */ W32((u32)(r_esi+0x2c0u), r_eax);
    /* 006c66ab: mov dword ptr [esi + 0x2c4], eax */ W32((u32)(r_esi+0x2c4u), r_eax);
    /* 006c66b1: mov byte ptr [esi + 0x2c8], al */ W8((u32)(r_esi+0x2c8u), (u8)r_eax);
    /* 006c66b7: mov byte ptr [esi + 0x2c9], al */ W8((u32)(r_esi+0x2c9u), (u8)r_eax);
    /* 006c66bd: mov byte ptr [esi + 0x2ca], al */ W8((u32)(r_esi+0x2cau), (u8)r_eax);
    /* 006c66c3: mov byte ptr [esi + 0x2cb], al */ W8((u32)(r_esi+0x2cbu), (u8)r_eax);
    /* 006c66c9: mov word ptr [esi + 0x2cc], ax */ W16((u32)(r_esi+0x2ccu), (u16)r_eax);
    /* 006c66d0: mov dword ptr [ebp - 0x150], eax */ W32((u32)(r_ebp+0xfffffeb0u), r_eax);
    /* 006c66d6: mov eax, dword ptr [ebp - 0x198] */ r_eax = R32((u32)(r_ebp+0xfffffe68u));
L_006c66dc:; BB(0x006c66dc);
    /* 006c66dc: mov dword ptr [0xa95df0], eax */ W32((u32)(0xa95df0u), r_eax);
    /* 006c66e1: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006c66e8: mov dword ptr [ebp - 0x14c], 0 */ W32((u32)(r_ebp+0xfffffeb4u), 0x0u);
    /* 006c66f2: push 0x4dc */ { u32 v = 0x4dcu; r_esp -= 4; W32(r_esp, v); }
    /* 006c66f7: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6c66fcu); f_008581c5();
    /* 006c66fc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c66fd: mov dword ptr [ebp - 0x1a8], eax */ W32((u32)(r_ebp+0xfffffe58u), r_eax);
    /* 006c6703: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c6705: je 0x6c7543 */ if (fZ) goto L_006c7543;
L_006c670b:; BB(0x006c670b);
    /* 006c670b: mov dword ptr [ebp - 0x14c], 1 */ W32((u32)(r_ebp+0xfffffeb4u), 0x1u);
    /* 006c6715: mov dword ptr [ebp - 4], 0x22 */ W32((u32)(r_ebp+0xfffffffcu), 0x22u);
    /* 006c671c: mov ecx, dword ptr [ebp - 0x1a8] */ r_ecx = R32((u32)(r_ebp+0xfffffe58u));
    /* 006c6722: call 0x6c454c */ r_esp -= 4; W32(r_esp, 0x6c6727u); f_006c454c();
    /* 006c6727: mov eax, dword ptr [ebp - 0x1a8] */ r_eax = R32((u32)(r_ebp+0xfffffe58u));
    /* 006c672d: mov dword ptr [ebp - 0x14c], 0 */ W32((u32)(r_ebp+0xfffffeb4u), 0x0u);
L_006c6737:; BB(0x006c6737);
    /* 006c6737: mov dword ptr [0xa95dfc], eax */ W32((u32)(0xa95dfcu), r_eax);
    /* 006c673c: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006c6743: mov dword ptr [ebp - 0x148], 0 */ W32((u32)(r_ebp+0xfffffeb8u), 0x0u);
    /* 006c674d: push 0x29c8 */ { u32 v = 0x29c8u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6752: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6c6757u); f_008581c5();
    /* 006c6757: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c6758: mov dword ptr [ebp - 0x1a0], eax */ W32((u32)(r_ebp+0xfffffe60u), r_eax);
    /* 006c675e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c6760: je 0x6c753c */ if (fZ) goto L_006c753c;
L_006c6766:; BB(0x006c6766);
    /* 006c6766: mov dword ptr [ebp - 0x148], 1 */ W32((u32)(r_ebp+0xfffffeb8u), 0x1u);
    /* 006c6770: mov dword ptr [ebp - 4], 0x23 */ W32((u32)(r_ebp+0xfffffffcu), 0x23u);
    /* 006c6777: mov ecx, dword ptr [ebp - 0x1a0] */ r_ecx = R32((u32)(r_ebp+0xfffffe60u));
    /* 006c677d: call 0x6c4674 */ r_esp -= 4; W32(r_esp, 0x6c6782u); f_006c4674();
    /* 006c6782: mov eax, dword ptr [ebp - 0x1a0] */ r_eax = R32((u32)(r_ebp+0xfffffe60u));
    /* 006c6788: mov dword ptr [ebp - 0x148], 0 */ W32((u32)(r_ebp+0xfffffeb8u), 0x0u);
L_006c6792:; BB(0x006c6792);
    /* 006c6792: mov dword ptr [0xa95df8], eax */ W32((u32)(0xa95df8u), r_eax);
    /* 006c6797: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006c679e: jmp 0x6c6b1e */ goto L_006c6b1e;
L_006c6b1e:; BB(0x006c6b1e);
    /* 006c6b1e: push 0x4dc */ { u32 v = 0x4dcu; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b23: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b25: push dword ptr [0xa95dfc] */ { u32 v = R32((u32)(0xa95dfcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006c6b2b: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x6c6b30u); f_0086b688();
    /* 006c6b30: push 0x29c8 */ { u32 v = 0x29c8u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b35: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b37: push dword ptr [0xa95df8] */ { u32 v = R32((u32)(0xa95df8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c6b3d: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x6c6b42u); f_0086b688();
    /* 006c6b42: push 0xbaa4 */ { u32 v = 0xbaa4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b47: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b49: push dword ptr [0xa95e44] */ { u32 v = R32((u32)(0xa95e44u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c6b4f: call 0x86b5cc */ r_esp -= 4; W32(r_esp, 0x6c6b54u); f_0086b5cc();
    /* 006c6b54: push 0xaf0 */ { u32 v = 0xaf0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b59: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b5b: push dword ptr [0xa95df0] */ { u32 v = R32((u32)(0xa95df0u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c6b61: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x6c6b66u); f_0086b688();
    /* 006c6b66: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c6b69: call 0x6c78a0 */ r_esp -= 4; W32(r_esp, 0x6c6b6eu); f_006c78a0();
    /* 006c6b6e: mov dword ptr [0xa95dd4], 5 */ W32((u32)(0xa95dd4u), 0x5u);
    /* 006c6b78: mov dword ptr [0xa95dd0], 6 */ W32((u32)(0xa95dd0u), 0x6u);
    /* 006c6b82: mov dword ptr [0xa95dc8], 3 */ W32((u32)(0xa95dc8u), 0x3u);
    /* 006c6b8c: call 0x6c79c0 */ r_esp -= 4; W32(r_esp, 0x6c6b91u); f_006c79c0();
    /* 006c6b91: call 0x6c7988 */ r_esp -= 4; W32(r_esp, 0x6c6b96u); f_006c7988();
    /* 006c6b96: call 0x6c7950 */ r_esp -= 4; W32(r_esp, 0x6c6b9bu); f_006c7950();
    /* 006c6b9b: mov dword ptr [0xa95de0], 0 */ W32((u32)(0xa95de0u), 0x0u);
    /* 006c6ba5: call 0x415cec */ r_esp -= 4; W32(r_esp, 0x6c6baau); f_00415cec();
    /* 006c6baa: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 006c6bad: mov dword ptr [0xa95ddc], eax */ W32((u32)(0xa95ddcu), r_eax);
    /* 006c6bb2: call 0x415cec */ r_esp -= 4; W32(r_esp, 0x6c6bb7u); f_00415cec();
    /* 006c6bb7: mov edx, dword ptr [0xa95df0] */ r_edx = R32((u32)(0xa95df0u));
    /* 006c6bbd: mov ecx, dword ptr [edx + 0x110] */ r_ecx = R32((u32)(r_edx+0x110u));
    /* 006c6bc3: mov dword ptr [0xa95dc4], ecx */ W32((u32)(0xa95dc4u), r_ecx);
    /* 006c6bc9: mov dword ptr [0xa95dc0], ecx */ W32((u32)(0xa95dc0u), r_ecx);
    /* 006c6bcf: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 006c6bd2: mov dword ptr [0xa95dd8], eax */ W32((u32)(0xa95dd8u), r_eax);
    /* 006c6bd7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_006c6bd9:; BB(0x006c6bd9);
    /* 006c6bd9: mov byte ptr [ebp + eax - 0x24], 0 */ W8((u32)(r_ebp+r_eax+0xffffffdcu), 0x0u);
    /* 006c6bde: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006c6be1: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006c6be4: jl 0x6c6bd9 */ if ((fS!=fO)) goto L_006c6bd9;
L_006c6be6:; BB(0x006c6be6);
    /* 006c6be6: jmp 0x6c76e2 */ goto L_006c76e2;
L_006c753c:; BB(0x006c753c);
    /* 006c753c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c753e: jmp 0x6c6792 */ goto L_006c6792;
L_006c7543:; BB(0x006c7543);
    /* 006c7543: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c7545: jmp 0x6c6737 */ goto L_006c6737;
L_006c754a:; BB(0x006c754a);
    /* 006c754a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c754c: jmp 0x6c66dc */ goto L_006c66dc;
L_006c7551:; BB(0x006c7551);
    /* 006c7551: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c7553: jmp 0x6c6647 */ goto L_006c6647;
L_006c76e2:; BB(0x006c76e2);
    /* 006c76e2: movsx eax, byte ptr [ebp - 0x22] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffdeu));
    /* 006c76e6: movsx esi, byte ptr [ebp - 0x21] */ r_esi = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffdfu));
    /* 006c76ea: movzx edi, byte ptr [ebp - 0x24] */ r_edi = (u32)R8((u32)(r_ebp+0xffffffdcu));
    /* 006c76ee: movsx edx, byte ptr [ebp - 0x23] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffddu));
    /* 006c76f2: movsx ebx, byte ptr [ebp - 0x20] */ r_ebx = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffe0u));
    /* 006c76f6: mov dword ptr [0xa95db0], 1 */ W32((u32)(0xa95db0u), 0x1u);
    /* 006c7700: shl edi, 0x18 */ { u32 c = (24u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 006c7703: shl edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 006c7706: or edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 006c7708: movsx edx, byte ptr [ebp - 0x1f] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffe1u));
    /* 006c770c: mov ecx, eax */ r_ecx = r_eax;
    /* 006c770e: shl ecx, 8 */ { u32 c = (8u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 006c7711: or edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 006c7713: or edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 006c7715: shl eax, 0x18 */ { u32 c = (24u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 006c7718: mov dword ptr [0xa95db8], edi */ W32((u32)(0xa95db8u), r_edi);
    /* 006c771e: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 006c7721: shl esi, 0x10 */ { u32 c = (16u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 006c7724: or eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006c7726: shl ebx, 8 */ { u32 c = (8u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 006c7729: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006c772c: or eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006c772e: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 006c7731: or eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006c7733: mov dword ptr [0xa95dbc], eax */ W32((u32)(0xa95dbcu), r_eax);
    /* 006c7738: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c773a: mov dword ptr [0xa95db4], eax */ W32((u32)(0xa95db4u), r_eax);
    /* 006c773f: mov dword ptr [0xa95dac], eax */ W32((u32)(0xa95dacu), r_eax);
    /* 006c7744: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006c7747: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006c774e: mov esp, ebp */ r_esp = r_ebp;
    /* 006c7750: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006c7751: ret  */ FN_RET(0x006c65e3); r_esp += 4; return;
}

void f_006c67a3(void)
{
    FN_ENTER(0x006c67a3);
    /* 006c67a3: mov dword ptr [ebp - 0x164], 0 */ W32((u32)(r_ebp+0xfffffe9cu), 0x0u);
    /* 006c67ad: push 0xbaa4 */ { u32 v = 0xbaa4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c67b2: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6c67b7u); f_008581c5();
    /* 006c67b7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c67b8: mov dword ptr [ebp - 0x1b0], eax */ W32((u32)(r_ebp+0xfffffe50u), r_eax);
    /* 006c67be: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c67c0: je 0x6c756d */ if (fZ) goto L_006c756d;
L_006c67c6:; BB(0x006c67c6);
    /* 006c67c6: mov dword ptr [ebp - 0x164], 1 */ W32((u32)(r_ebp+0xfffffe9cu), 0x1u);
    /* 006c67d0: mov dword ptr [ebp - 4], 0x1c */ W32((u32)(r_ebp+0xfffffffcu), 0x1cu);
    /* 006c67d7: push 0x6c1940 */ { u32 v = 0x6c1940u; r_esp -= 4; W32(r_esp, v); }
    /* 006c67dc: push 0x6c17f0 */ { u32 v = 0x6c17f0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c67e1: mov eax, dword ptr [ebp - 0x1b0] */ r_eax = R32((u32)(r_ebp+0xfffffe50u));
    /* 006c67e7: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c67e9: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006c67ec: push 0x2ea4 */ { u32 v = 0x2ea4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c67f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c67f2: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x6c67f7u); f_00858736();
    /* 006c67f7: mov eax, dword ptr [ebp - 0x1b0] */ r_eax = R32((u32)(r_ebp+0xfffffe50u));
    /* 006c67fd: mov dword ptr [ebp - 0x164], 0 */ W32((u32)(r_ebp+0xfffffe9cu), 0x0u);
L_006c6807:; BB(0x006c6807);
    /* 006c6807: mov dword ptr [0xa95e44], eax */ W32((u32)(0xa95e44u), r_eax);
    /* 006c680c: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006c6813: mov dword ptr [ebp - 0x160], 0 */ W32((u32)(r_ebp+0xfffffea0u), 0x0u);
    /* 006c681d: push 0xaf0 */ { u32 v = 0xaf0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6822: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6c6827u); f_008581c5();
    /* 006c6827: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c6828: mov dword ptr [ebp - 0x198], eax */ W32((u32)(r_ebp+0xfffffe68u), r_eax);
    /* 006c682e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c6830: je 0x6c7566 */ if (fZ) goto L_006c7566;
L_006c6836:; BB(0x006c6836);
    /* 006c6836: mov dword ptr [ebp - 0x160], 1 */ W32((u32)(r_ebp+0xfffffea0u), 0x1u);
    /* 006c6840: mov esi, dword ptr [ebp - 0x198] */ r_esi = R32((u32)(r_ebp+0xfffffe68u));
    /* 006c6846: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c6848: mov dword ptr [esi + 0x2b8], eax */ W32((u32)(r_esi+0x2b8u), r_eax);
    /* 006c684e: mov dword ptr [esi + 0x2bc], eax */ W32((u32)(r_esi+0x2bcu), r_eax);
    /* 006c6854: mov dword ptr [esi + 0x2c0], eax */ W32((u32)(r_esi+0x2c0u), r_eax);
    /* 006c685a: mov dword ptr [esi + 0x2c4], eax */ W32((u32)(r_esi+0x2c4u), r_eax);
    /* 006c6860: mov byte ptr [esi + 0x2c8], al */ W8((u32)(r_esi+0x2c8u), (u8)r_eax);
    /* 006c6866: mov byte ptr [esi + 0x2c9], al */ W8((u32)(r_esi+0x2c9u), (u8)r_eax);
    /* 006c686c: mov byte ptr [esi + 0x2ca], al */ W8((u32)(r_esi+0x2cau), (u8)r_eax);
    /* 006c6872: mov byte ptr [esi + 0x2cb], al */ W8((u32)(r_esi+0x2cbu), (u8)r_eax);
    /* 006c6878: mov word ptr [esi + 0x2cc], ax */ W16((u32)(r_esi+0x2ccu), (u16)r_eax);
    /* 006c687f: mov dword ptr [ebp - 0x160], eax */ W32((u32)(r_ebp+0xfffffea0u), r_eax);
    /* 006c6885: mov eax, dword ptr [ebp - 0x198] */ r_eax = R32((u32)(r_ebp+0xfffffe68u));
L_006c688b:; BB(0x006c688b);
    /* 006c688b: mov dword ptr [0xa95df0], eax */ W32((u32)(0xa95df0u), r_eax);
    /* 006c6890: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006c6897: push 0xd590 */ { u32 v = 0xd590u; r_esp -= 4; W32(r_esp, v); }
    /* 006c689c: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6c68a1u); f_008581c5();
    /* 006c68a1: mov dword ptr [ebp - 0x15c], 0 */ W32((u32)(r_ebp+0xfffffea4u), 0x0u);
    /* 006c68ab: mov dword ptr [0xa95df4], eax */ W32((u32)(0xa95df4u), r_eax);
    /* 006c68b0: push 0x4dc */ { u32 v = 0x4dcu; r_esp -= 4; W32(r_esp, v); }
    /* 006c68b5: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6c68bau); f_008581c5();
    /* 006c68ba: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c68bd: mov dword ptr [ebp - 0x1a8], eax */ W32((u32)(r_ebp+0xfffffe58u), r_eax);
    /* 006c68c3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c68c5: je 0x6c755f */ if (fZ) goto L_006c755f;
L_006c68cb:; BB(0x006c68cb);
    /* 006c68cb: mov dword ptr [ebp - 0x15c], 1 */ W32((u32)(r_ebp+0xfffffea4u), 0x1u);
    /* 006c68d5: mov dword ptr [ebp - 4], 0x1e */ W32((u32)(r_ebp+0xfffffffcu), 0x1eu);
    /* 006c68dc: mov ecx, dword ptr [ebp - 0x1a8] */ r_ecx = R32((u32)(r_ebp+0xfffffe58u));
    /* 006c68e2: call 0x6c454c */ r_esp -= 4; W32(r_esp, 0x6c68e7u); f_006c454c();
    /* 006c68e7: mov eax, dword ptr [ebp - 0x1a8] */ r_eax = R32((u32)(r_ebp+0xfffffe58u));
    /* 006c68ed: mov dword ptr [ebp - 0x15c], 0 */ W32((u32)(r_ebp+0xfffffea4u), 0x0u);
L_006c68f7:; BB(0x006c68f7);
    /* 006c68f7: mov dword ptr [0xa95dfc], eax */ W32((u32)(0xa95dfcu), r_eax);
    /* 006c68fc: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006c6903: mov dword ptr [ebp - 0x158], 0 */ W32((u32)(r_ebp+0xfffffea8u), 0x0u);
    /* 006c690d: push 0x29c8 */ { u32 v = 0x29c8u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6912: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6c6917u); f_008581c5();
    /* 006c6917: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c6918: mov dword ptr [ebp - 0x1a0], eax */ W32((u32)(r_ebp+0xfffffe60u), r_eax);
    /* 006c691e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c6920: je 0x6c7558 */ if (fZ) goto L_006c7558;
L_006c6926:; BB(0x006c6926);
    /* 006c6926: mov dword ptr [ebp - 0x158], 1 */ W32((u32)(r_ebp+0xfffffea8u), 0x1u);
    /* 006c6930: mov dword ptr [ebp - 4], 0x1f */ W32((u32)(r_ebp+0xfffffffcu), 0x1fu);
    /* 006c6937: mov ecx, dword ptr [ebp - 0x1a0] */ r_ecx = R32((u32)(r_ebp+0xfffffe60u));
    /* 006c693d: call 0x6c4674 */ r_esp -= 4; W32(r_esp, 0x6c6942u); f_006c4674();
    /* 006c6942: mov eax, dword ptr [ebp - 0x1a0] */ r_eax = R32((u32)(r_ebp+0xfffffe60u));
    /* 006c6948: mov dword ptr [ebp - 0x158], 0 */ W32((u32)(r_ebp+0xfffffea8u), 0x0u);
L_006c6952:; BB(0x006c6952);
    /* 006c6952: mov dword ptr [0xa95df8], eax */ W32((u32)(0xa95df8u), r_eax);
    /* 006c6957: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006c695e: jmp 0x6c6b1e */ goto L_006c6b1e;
L_006c6b1e:; BB(0x006c6b1e);
    /* 006c6b1e: push 0x4dc */ { u32 v = 0x4dcu; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b23: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b25: push dword ptr [0xa95dfc] */ { u32 v = R32((u32)(0xa95dfcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006c6b2b: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x6c6b30u); f_0086b688();
    /* 006c6b30: push 0x29c8 */ { u32 v = 0x29c8u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b35: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b37: push dword ptr [0xa95df8] */ { u32 v = R32((u32)(0xa95df8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c6b3d: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x6c6b42u); f_0086b688();
    /* 006c6b42: push 0xbaa4 */ { u32 v = 0xbaa4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b47: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b49: push dword ptr [0xa95e44] */ { u32 v = R32((u32)(0xa95e44u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c6b4f: call 0x86b5cc */ r_esp -= 4; W32(r_esp, 0x6c6b54u); f_0086b5cc();
    /* 006c6b54: push 0xaf0 */ { u32 v = 0xaf0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b59: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b5b: push dword ptr [0xa95df0] */ { u32 v = R32((u32)(0xa95df0u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c6b61: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x6c6b66u); f_0086b688();
    /* 006c6b66: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c6b69: call 0x6c78a0 */ r_esp -= 4; W32(r_esp, 0x6c6b6eu); f_006c78a0();
    /* 006c6b6e: mov dword ptr [0xa95dd4], 5 */ W32((u32)(0xa95dd4u), 0x5u);
    /* 006c6b78: mov dword ptr [0xa95dd0], 6 */ W32((u32)(0xa95dd0u), 0x6u);
    /* 006c6b82: mov dword ptr [0xa95dc8], 3 */ W32((u32)(0xa95dc8u), 0x3u);
    /* 006c6b8c: call 0x6c79c0 */ r_esp -= 4; W32(r_esp, 0x6c6b91u); f_006c79c0();
    /* 006c6b91: call 0x6c7988 */ r_esp -= 4; W32(r_esp, 0x6c6b96u); f_006c7988();
    /* 006c6b96: call 0x6c7950 */ r_esp -= 4; W32(r_esp, 0x6c6b9bu); f_006c7950();
    /* 006c6b9b: mov dword ptr [0xa95de0], 0 */ W32((u32)(0xa95de0u), 0x0u);
    /* 006c6ba5: call 0x415cec */ r_esp -= 4; W32(r_esp, 0x6c6baau); f_00415cec();
    /* 006c6baa: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 006c6bad: mov dword ptr [0xa95ddc], eax */ W32((u32)(0xa95ddcu), r_eax);
    /* 006c6bb2: call 0x415cec */ r_esp -= 4; W32(r_esp, 0x6c6bb7u); f_00415cec();
    /* 006c6bb7: mov edx, dword ptr [0xa95df0] */ r_edx = R32((u32)(0xa95df0u));
    /* 006c6bbd: mov ecx, dword ptr [edx + 0x110] */ r_ecx = R32((u32)(r_edx+0x110u));
    /* 006c6bc3: mov dword ptr [0xa95dc4], ecx */ W32((u32)(0xa95dc4u), r_ecx);
    /* 006c6bc9: mov dword ptr [0xa95dc0], ecx */ W32((u32)(0xa95dc0u), r_ecx);
    /* 006c6bcf: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 006c6bd2: mov dword ptr [0xa95dd8], eax */ W32((u32)(0xa95dd8u), r_eax);
    /* 006c6bd7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_006c6bd9:; BB(0x006c6bd9);
    /* 006c6bd9: mov byte ptr [ebp + eax - 0x24], 0 */ W8((u32)(r_ebp+r_eax+0xffffffdcu), 0x0u);
    /* 006c6bde: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006c6be1: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006c6be4: jl 0x6c6bd9 */ if ((fS!=fO)) goto L_006c6bd9;
L_006c6be6:; BB(0x006c6be6);
    /* 006c6be6: jmp 0x6c76e2 */ goto L_006c76e2;
L_006c7558:; BB(0x006c7558);
    /* 006c7558: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c755a: jmp 0x6c6952 */ goto L_006c6952;
L_006c755f:; BB(0x006c755f);
    /* 006c755f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c7561: jmp 0x6c68f7 */ goto L_006c68f7;
L_006c7566:; BB(0x006c7566);
    /* 006c7566: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c7568: jmp 0x6c688b */ goto L_006c688b;
L_006c756d:; BB(0x006c756d);
    /* 006c756d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c756f: jmp 0x6c6807 */ goto L_006c6807;
L_006c76e2:; BB(0x006c76e2);
    /* 006c76e2: movsx eax, byte ptr [ebp - 0x22] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffdeu));
    /* 006c76e6: movsx esi, byte ptr [ebp - 0x21] */ r_esi = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffdfu));
    /* 006c76ea: movzx edi, byte ptr [ebp - 0x24] */ r_edi = (u32)R8((u32)(r_ebp+0xffffffdcu));
    /* 006c76ee: movsx edx, byte ptr [ebp - 0x23] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffddu));
    /* 006c76f2: movsx ebx, byte ptr [ebp - 0x20] */ r_ebx = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffe0u));
    /* 006c76f6: mov dword ptr [0xa95db0], 1 */ W32((u32)(0xa95db0u), 0x1u);
    /* 006c7700: shl edi, 0x18 */ { u32 c = (24u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 006c7703: shl edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 006c7706: or edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 006c7708: movsx edx, byte ptr [ebp - 0x1f] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffe1u));
    /* 006c770c: mov ecx, eax */ r_ecx = r_eax;
    /* 006c770e: shl ecx, 8 */ { u32 c = (8u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 006c7711: or edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 006c7713: or edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 006c7715: shl eax, 0x18 */ { u32 c = (24u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 006c7718: mov dword ptr [0xa95db8], edi */ W32((u32)(0xa95db8u), r_edi);
    /* 006c771e: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 006c7721: shl esi, 0x10 */ { u32 c = (16u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 006c7724: or eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006c7726: shl ebx, 8 */ { u32 c = (8u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 006c7729: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006c772c: or eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006c772e: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 006c7731: or eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006c7733: mov dword ptr [0xa95dbc], eax */ W32((u32)(0xa95dbcu), r_eax);
    /* 006c7738: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c773a: mov dword ptr [0xa95db4], eax */ W32((u32)(0xa95db4u), r_eax);
    /* 006c773f: mov dword ptr [0xa95dac], eax */ W32((u32)(0xa95dacu), r_eax);
    /* 006c7744: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006c7747: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006c774e: mov esp, ebp */ r_esp = r_ebp;
    /* 006c7750: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006c7751: ret  */ FN_RET(0x006c67a3); r_esp += 4; return;
}

void f_006c6963(void)
{
    FN_ENTER(0x006c6963);
    /* 006c6963: mov dword ptr [ebp - 0x174], 0 */ W32((u32)(r_ebp+0xfffffe8cu), 0x0u);
    /* 006c696d: push 0xbaa4 */ { u32 v = 0xbaa4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6972: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6c6977u); f_008581c5();
    /* 006c6977: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c6978: mov dword ptr [ebp - 0x1b0], eax */ W32((u32)(r_ebp+0xfffffe50u), r_eax);
    /* 006c697e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c6980: je 0x6c7589 */ if (fZ) goto L_006c7589;
L_006c6986:; BB(0x006c6986);
    /* 006c6986: mov dword ptr [ebp - 0x174], 1 */ W32((u32)(r_ebp+0xfffffe8cu), 0x1u);
    /* 006c6990: mov dword ptr [ebp - 4], 0x18 */ W32((u32)(r_ebp+0xfffffffcu), 0x18u);
    /* 006c6997: push 0x6c1940 */ { u32 v = 0x6c1940u; r_esp -= 4; W32(r_esp, v); }
    /* 006c699c: push 0x6c17f0 */ { u32 v = 0x6c17f0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c69a1: mov eax, dword ptr [ebp - 0x1b0] */ r_eax = R32((u32)(r_ebp+0xfffffe50u));
    /* 006c69a7: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c69a9: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006c69ac: push 0x2ea4 */ { u32 v = 0x2ea4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c69b1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c69b2: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x6c69b7u); f_00858736();
    /* 006c69b7: mov eax, dword ptr [ebp - 0x1b0] */ r_eax = R32((u32)(r_ebp+0xfffffe50u));
    /* 006c69bd: mov dword ptr [ebp - 0x174], 0 */ W32((u32)(r_ebp+0xfffffe8cu), 0x0u);
L_006c69c7:; BB(0x006c69c7);
    /* 006c69c7: mov dword ptr [0xa95e44], eax */ W32((u32)(0xa95e44u), r_eax);
    /* 006c69cc: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006c69d3: push 0xd590 */ { u32 v = 0xd590u; r_esp -= 4; W32(r_esp, v); }
    /* 006c69d8: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6c69ddu); f_008581c5();
    /* 006c69dd: mov dword ptr [ebp - 0x170], 0 */ W32((u32)(r_ebp+0xfffffe90u), 0x0u);
    /* 006c69e7: mov dword ptr [0xa95df4], eax */ W32((u32)(0xa95df4u), r_eax);
    /* 006c69ec: push 0xaf0 */ { u32 v = 0xaf0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c69f1: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6c69f6u); f_008581c5();
    /* 006c69f6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c69f9: mov dword ptr [ebp - 0x198], eax */ W32((u32)(r_ebp+0xfffffe68u), r_eax);
    /* 006c69ff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c6a01: je 0x6c7582 */ if (fZ) goto L_006c7582;
L_006c6a07:; BB(0x006c6a07);
    /* 006c6a07: mov dword ptr [ebp - 0x170], 1 */ W32((u32)(r_ebp+0xfffffe90u), 0x1u);
    /* 006c6a11: mov esi, dword ptr [ebp - 0x198] */ r_esi = R32((u32)(r_ebp+0xfffffe68u));
    /* 006c6a17: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c6a19: mov dword ptr [esi + 0x2b8], eax */ W32((u32)(r_esi+0x2b8u), r_eax);
    /* 006c6a1f: mov dword ptr [esi + 0x2bc], eax */ W32((u32)(r_esi+0x2bcu), r_eax);
    /* 006c6a25: mov dword ptr [esi + 0x2c0], eax */ W32((u32)(r_esi+0x2c0u), r_eax);
    /* 006c6a2b: mov dword ptr [esi + 0x2c4], eax */ W32((u32)(r_esi+0x2c4u), r_eax);
    /* 006c6a31: mov byte ptr [esi + 0x2c8], al */ W8((u32)(r_esi+0x2c8u), (u8)r_eax);
    /* 006c6a37: mov byte ptr [esi + 0x2c9], al */ W8((u32)(r_esi+0x2c9u), (u8)r_eax);
    /* 006c6a3d: mov byte ptr [esi + 0x2ca], al */ W8((u32)(r_esi+0x2cau), (u8)r_eax);
    /* 006c6a43: mov byte ptr [esi + 0x2cb], al */ W8((u32)(r_esi+0x2cbu), (u8)r_eax);
    /* 006c6a49: mov word ptr [esi + 0x2cc], ax */ W16((u32)(r_esi+0x2ccu), (u16)r_eax);
    /* 006c6a50: mov dword ptr [ebp - 0x170], eax */ W32((u32)(r_ebp+0xfffffe90u), r_eax);
    /* 006c6a56: mov eax, dword ptr [ebp - 0x198] */ r_eax = R32((u32)(r_ebp+0xfffffe68u));
L_006c6a5c:; BB(0x006c6a5c);
    /* 006c6a5c: mov dword ptr [0xa95df0], eax */ W32((u32)(0xa95df0u), r_eax);
    /* 006c6a61: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006c6a68: mov dword ptr [ebp - 0x16c], 0 */ W32((u32)(r_ebp+0xfffffe94u), 0x0u);
    /* 006c6a72: push 0x4dc */ { u32 v = 0x4dcu; r_esp -= 4; W32(r_esp, v); }
    /* 006c6a77: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6c6a7cu); f_008581c5();
    /* 006c6a7c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c6a7d: mov dword ptr [ebp - 0x1a8], eax */ W32((u32)(r_ebp+0xfffffe58u), r_eax);
    /* 006c6a83: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c6a85: je 0x6c757b */ if (fZ) goto L_006c757b;
L_006c6a8b:; BB(0x006c6a8b);
    /* 006c6a8b: mov dword ptr [ebp - 0x16c], 1 */ W32((u32)(r_ebp+0xfffffe94u), 0x1u);
    /* 006c6a95: mov dword ptr [ebp - 4], 0x1a */ W32((u32)(r_ebp+0xfffffffcu), 0x1au);
    /* 006c6a9c: mov ecx, dword ptr [ebp - 0x1a8] */ r_ecx = R32((u32)(r_ebp+0xfffffe58u));
    /* 006c6aa2: call 0x6c454c */ r_esp -= 4; W32(r_esp, 0x6c6aa7u); f_006c454c();
    /* 006c6aa7: mov eax, dword ptr [ebp - 0x1a8] */ r_eax = R32((u32)(r_ebp+0xfffffe58u));
    /* 006c6aad: mov dword ptr [ebp - 0x16c], 0 */ W32((u32)(r_ebp+0xfffffe94u), 0x0u);
L_006c6ab7:; BB(0x006c6ab7);
    /* 006c6ab7: mov dword ptr [0xa95dfc], eax */ W32((u32)(0xa95dfcu), r_eax);
    /* 006c6abc: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006c6ac3: mov dword ptr [ebp - 0x168], 0 */ W32((u32)(r_ebp+0xfffffe98u), 0x0u);
    /* 006c6acd: push 0x29c8 */ { u32 v = 0x29c8u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6ad2: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6c6ad7u); f_008581c5();
    /* 006c6ad7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c6ad8: mov dword ptr [ebp - 0x1a0], eax */ W32((u32)(r_ebp+0xfffffe60u), r_eax);
    /* 006c6ade: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c6ae0: je 0x6c7574 */ if (fZ) goto L_006c7574;
L_006c6ae6:; BB(0x006c6ae6);
    /* 006c6ae6: mov dword ptr [ebp - 0x168], 1 */ W32((u32)(r_ebp+0xfffffe98u), 0x1u);
    /* 006c6af0: mov dword ptr [ebp - 4], 0x1b */ W32((u32)(r_ebp+0xfffffffcu), 0x1bu);
    /* 006c6af7: mov ecx, dword ptr [ebp - 0x1a0] */ r_ecx = R32((u32)(r_ebp+0xfffffe60u));
    /* 006c6afd: call 0x6c4674 */ r_esp -= 4; W32(r_esp, 0x6c6b02u); f_006c4674();
    /* 006c6b02: mov eax, dword ptr [ebp - 0x1a0] */ r_eax = R32((u32)(r_ebp+0xfffffe60u));
    /* 006c6b08: mov dword ptr [ebp - 0x168], 0 */ W32((u32)(r_ebp+0xfffffe98u), 0x0u);
L_006c6b12:; BB(0x006c6b12);
    /* 006c6b12: mov dword ptr [0xa95df8], eax */ W32((u32)(0xa95df8u), r_eax);
    /* 006c6b17: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006c6b1e: push 0x4dc */ { u32 v = 0x4dcu; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b23: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b25: push dword ptr [0xa95dfc] */ { u32 v = R32((u32)(0xa95dfcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006c6b2b: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x6c6b30u); f_0086b688();
    /* 006c6b30: push 0x29c8 */ { u32 v = 0x29c8u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b35: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b37: push dword ptr [0xa95df8] */ { u32 v = R32((u32)(0xa95df8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c6b3d: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x6c6b42u); f_0086b688();
    /* 006c6b42: push 0xbaa4 */ { u32 v = 0xbaa4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b47: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b49: push dword ptr [0xa95e44] */ { u32 v = R32((u32)(0xa95e44u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c6b4f: call 0x86b5cc */ r_esp -= 4; W32(r_esp, 0x6c6b54u); f_0086b5cc();
    /* 006c6b54: push 0xaf0 */ { u32 v = 0xaf0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b59: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b5b: push dword ptr [0xa95df0] */ { u32 v = R32((u32)(0xa95df0u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c6b61: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x6c6b66u); f_0086b688();
    /* 006c6b66: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c6b69: call 0x6c78a0 */ r_esp -= 4; W32(r_esp, 0x6c6b6eu); f_006c78a0();
    /* 006c6b6e: mov dword ptr [0xa95dd4], 5 */ W32((u32)(0xa95dd4u), 0x5u);
    /* 006c6b78: mov dword ptr [0xa95dd0], 6 */ W32((u32)(0xa95dd0u), 0x6u);
    /* 006c6b82: mov dword ptr [0xa95dc8], 3 */ W32((u32)(0xa95dc8u), 0x3u);
    /* 006c6b8c: call 0x6c79c0 */ r_esp -= 4; W32(r_esp, 0x6c6b91u); f_006c79c0();
    /* 006c6b91: call 0x6c7988 */ r_esp -= 4; W32(r_esp, 0x6c6b96u); f_006c7988();
    /* 006c6b96: call 0x6c7950 */ r_esp -= 4; W32(r_esp, 0x6c6b9bu); f_006c7950();
    /* 006c6b9b: mov dword ptr [0xa95de0], 0 */ W32((u32)(0xa95de0u), 0x0u);
    /* 006c6ba5: call 0x415cec */ r_esp -= 4; W32(r_esp, 0x6c6baau); f_00415cec();
    /* 006c6baa: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 006c6bad: mov dword ptr [0xa95ddc], eax */ W32((u32)(0xa95ddcu), r_eax);
    /* 006c6bb2: call 0x415cec */ r_esp -= 4; W32(r_esp, 0x6c6bb7u); f_00415cec();
    /* 006c6bb7: mov edx, dword ptr [0xa95df0] */ r_edx = R32((u32)(0xa95df0u));
    /* 006c6bbd: mov ecx, dword ptr [edx + 0x110] */ r_ecx = R32((u32)(r_edx+0x110u));
    /* 006c6bc3: mov dword ptr [0xa95dc4], ecx */ W32((u32)(0xa95dc4u), r_ecx);
    /* 006c6bc9: mov dword ptr [0xa95dc0], ecx */ W32((u32)(0xa95dc0u), r_ecx);
    /* 006c6bcf: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 006c6bd2: mov dword ptr [0xa95dd8], eax */ W32((u32)(0xa95dd8u), r_eax);
    /* 006c6bd7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_006c6bd9:; BB(0x006c6bd9);
    /* 006c6bd9: mov byte ptr [ebp + eax - 0x24], 0 */ W8((u32)(r_ebp+r_eax+0xffffffdcu), 0x0u);
    /* 006c6bde: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006c6be1: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006c6be4: jl 0x6c6bd9 */ if ((fS!=fO)) goto L_006c6bd9;
L_006c6be6:; BB(0x006c6be6);
    /* 006c6be6: jmp 0x6c76e2 */ goto L_006c76e2;
L_006c7574:; BB(0x006c7574);
    /* 006c7574: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c7576: jmp 0x6c6b12 */ goto L_006c6b12;
L_006c757b:; BB(0x006c757b);
    /* 006c757b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c757d: jmp 0x6c6ab7 */ goto L_006c6ab7;
L_006c7582:; BB(0x006c7582);
    /* 006c7582: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c7584: jmp 0x6c6a5c */ goto L_006c6a5c;
L_006c7589:; BB(0x006c7589);
    /* 006c7589: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c758b: jmp 0x6c69c7 */ goto L_006c69c7;
L_006c76e2:; BB(0x006c76e2);
    /* 006c76e2: movsx eax, byte ptr [ebp - 0x22] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffdeu));
    /* 006c76e6: movsx esi, byte ptr [ebp - 0x21] */ r_esi = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffdfu));
    /* 006c76ea: movzx edi, byte ptr [ebp - 0x24] */ r_edi = (u32)R8((u32)(r_ebp+0xffffffdcu));
    /* 006c76ee: movsx edx, byte ptr [ebp - 0x23] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffddu));
    /* 006c76f2: movsx ebx, byte ptr [ebp - 0x20] */ r_ebx = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffe0u));
    /* 006c76f6: mov dword ptr [0xa95db0], 1 */ W32((u32)(0xa95db0u), 0x1u);
    /* 006c7700: shl edi, 0x18 */ { u32 c = (24u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 006c7703: shl edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 006c7706: or edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 006c7708: movsx edx, byte ptr [ebp - 0x1f] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffe1u));
    /* 006c770c: mov ecx, eax */ r_ecx = r_eax;
    /* 006c770e: shl ecx, 8 */ { u32 c = (8u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 006c7711: or edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 006c7713: or edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 006c7715: shl eax, 0x18 */ { u32 c = (24u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 006c7718: mov dword ptr [0xa95db8], edi */ W32((u32)(0xa95db8u), r_edi);
    /* 006c771e: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 006c7721: shl esi, 0x10 */ { u32 c = (16u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 006c7724: or eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006c7726: shl ebx, 8 */ { u32 c = (8u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 006c7729: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006c772c: or eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006c772e: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 006c7731: or eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006c7733: mov dword ptr [0xa95dbc], eax */ W32((u32)(0xa95dbcu), r_eax);
    /* 006c7738: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c773a: mov dword ptr [0xa95db4], eax */ W32((u32)(0xa95db4u), r_eax);
    /* 006c773f: mov dword ptr [0xa95dac], eax */ W32((u32)(0xa95dacu), r_eax);
    /* 006c7744: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006c7747: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006c774e: mov esp, ebp */ r_esp = r_ebp;
    /* 006c7750: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006c7751: ret  */ FN_RET(0x006c6963); r_esp += 4; return;
}

void f_006c6beb(void)
{
    FN_ENTER(0x006c6beb);
    goto L_006c6beb;
L_006c6b1e:; BB(0x006c6b1e);
    /* 006c6b1e: push 0x4dc */ { u32 v = 0x4dcu; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b23: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b25: push dword ptr [0xa95dfc] */ { u32 v = R32((u32)(0xa95dfcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006c6b2b: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x6c6b30u); f_0086b688();
    /* 006c6b30: push 0x29c8 */ { u32 v = 0x29c8u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b35: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b37: push dword ptr [0xa95df8] */ { u32 v = R32((u32)(0xa95df8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c6b3d: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x6c6b42u); f_0086b688();
    /* 006c6b42: push 0xbaa4 */ { u32 v = 0xbaa4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b47: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b49: push dword ptr [0xa95e44] */ { u32 v = R32((u32)(0xa95e44u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c6b4f: call 0x86b5cc */ r_esp -= 4; W32(r_esp, 0x6c6b54u); f_0086b5cc();
    /* 006c6b54: push 0xaf0 */ { u32 v = 0xaf0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b59: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b5b: push dword ptr [0xa95df0] */ { u32 v = R32((u32)(0xa95df0u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c6b61: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x6c6b66u); f_0086b688();
    /* 006c6b66: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c6b69: call 0x6c78a0 */ r_esp -= 4; W32(r_esp, 0x6c6b6eu); f_006c78a0();
    /* 006c6b6e: mov dword ptr [0xa95dd4], 5 */ W32((u32)(0xa95dd4u), 0x5u);
    /* 006c6b78: mov dword ptr [0xa95dd0], 6 */ W32((u32)(0xa95dd0u), 0x6u);
    /* 006c6b82: mov dword ptr [0xa95dc8], 3 */ W32((u32)(0xa95dc8u), 0x3u);
    /* 006c6b8c: call 0x6c79c0 */ r_esp -= 4; W32(r_esp, 0x6c6b91u); f_006c79c0();
    /* 006c6b91: call 0x6c7988 */ r_esp -= 4; W32(r_esp, 0x6c6b96u); f_006c7988();
    /* 006c6b96: call 0x6c7950 */ r_esp -= 4; W32(r_esp, 0x6c6b9bu); f_006c7950();
    /* 006c6b9b: mov dword ptr [0xa95de0], 0 */ W32((u32)(0xa95de0u), 0x0u);
    /* 006c6ba5: call 0x415cec */ r_esp -= 4; W32(r_esp, 0x6c6baau); f_00415cec();
    /* 006c6baa: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 006c6bad: mov dword ptr [0xa95ddc], eax */ W32((u32)(0xa95ddcu), r_eax);
    /* 006c6bb2: call 0x415cec */ r_esp -= 4; W32(r_esp, 0x6c6bb7u); f_00415cec();
    /* 006c6bb7: mov edx, dword ptr [0xa95df0] */ r_edx = R32((u32)(0xa95df0u));
    /* 006c6bbd: mov ecx, dword ptr [edx + 0x110] */ r_ecx = R32((u32)(r_edx+0x110u));
    /* 006c6bc3: mov dword ptr [0xa95dc4], ecx */ W32((u32)(0xa95dc4u), r_ecx);
    /* 006c6bc9: mov dword ptr [0xa95dc0], ecx */ W32((u32)(0xa95dc0u), r_ecx);
    /* 006c6bcf: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 006c6bd2: mov dword ptr [0xa95dd8], eax */ W32((u32)(0xa95dd8u), r_eax);
    /* 006c6bd7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_006c6bd9:; BB(0x006c6bd9);
    /* 006c6bd9: mov byte ptr [ebp + eax - 0x24], 0 */ W8((u32)(r_ebp+r_eax+0xffffffdcu), 0x0u);
    /* 006c6bde: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006c6be1: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006c6be4: jl 0x6c6bd9 */ if ((fS!=fO)) goto L_006c6bd9;
L_006c6be6:; BB(0x006c6be6);
    /* 006c6be6: jmp 0x6c76e2 */ goto L_006c76e2;
L_006c6beb:; BB(0x006c6beb);
    /* 006c6beb: mov dword ptr [ebp - 0x184], 0 */ W32((u32)(r_ebp+0xfffffe7cu), 0x0u);
    /* 006c6bf5: push 0xbaa4 */ { u32 v = 0xbaa4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6bfa: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6c6bffu); f_008581c5();
    /* 006c6bff: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c6c00: mov dword ptr [ebp - 0x1b0], eax */ W32((u32)(r_ebp+0xfffffe50u), r_eax);
    /* 006c6c06: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c6c08: je 0x6c7617 */ if (fZ) goto L_006c7617;
L_006c6c0e:; BB(0x006c6c0e);
    /* 006c6c0e: mov dword ptr [ebp - 0x184], 1 */ W32((u32)(r_ebp+0xfffffe7cu), 0x1u);
    /* 006c6c18: mov dword ptr [ebp - 4], 0x10 */ W32((u32)(r_ebp+0xfffffffcu), 0x10u);
    /* 006c6c1f: push 0x6c1940 */ { u32 v = 0x6c1940u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6c24: push 0x6c17f0 */ { u32 v = 0x6c17f0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6c29: mov eax, dword ptr [ebp - 0x1b0] */ r_eax = R32((u32)(r_ebp+0xfffffe50u));
    /* 006c6c2f: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6c31: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006c6c34: push 0x2ea4 */ { u32 v = 0x2ea4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6c39: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c6c3a: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x6c6c3fu); f_00858736();
    /* 006c6c3f: mov eax, dword ptr [ebp - 0x1b0] */ r_eax = R32((u32)(r_ebp+0xfffffe50u));
    /* 006c6c45: mov dword ptr [ebp - 0x184], 0 */ W32((u32)(r_ebp+0xfffffe7cu), 0x0u);
L_006c6c4f:; BB(0x006c6c4f);
    /* 006c6c4f: mov dword ptr [0xa95e44], eax */ W32((u32)(0xa95e44u), r_eax);
    /* 006c6c54: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006c6c5b: push 0xd590 */ { u32 v = 0xd590u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6c60: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6c6c65u); f_008581c5();
    /* 006c6c65: mov dword ptr [ebp - 0x180], 0 */ W32((u32)(r_ebp+0xfffffe80u), 0x0u);
    /* 006c6c6f: mov dword ptr [0xa95df4], eax */ W32((u32)(0xa95df4u), r_eax);
    /* 006c6c74: push 0xaf0 */ { u32 v = 0xaf0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6c79: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6c6c7eu); f_008581c5();
    /* 006c6c7e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c6c81: mov dword ptr [ebp - 0x198], eax */ W32((u32)(r_ebp+0xfffffe68u), r_eax);
    /* 006c6c87: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c6c89: je 0x6c7610 */ if (fZ) goto L_006c7610;
L_006c6c8f:; BB(0x006c6c8f);
    /* 006c6c8f: mov dword ptr [ebp - 0x180], 1 */ W32((u32)(r_ebp+0xfffffe80u), 0x1u);
    /* 006c6c99: mov esi, dword ptr [ebp - 0x198] */ r_esi = R32((u32)(r_ebp+0xfffffe68u));
    /* 006c6c9f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c6ca1: mov dword ptr [esi + 0x2b8], eax */ W32((u32)(r_esi+0x2b8u), r_eax);
    /* 006c6ca7: mov dword ptr [esi + 0x2bc], eax */ W32((u32)(r_esi+0x2bcu), r_eax);
    /* 006c6cad: mov dword ptr [esi + 0x2c0], eax */ W32((u32)(r_esi+0x2c0u), r_eax);
    /* 006c6cb3: mov dword ptr [esi + 0x2c4], eax */ W32((u32)(r_esi+0x2c4u), r_eax);
    /* 006c6cb9: mov byte ptr [esi + 0x2c8], al */ W8((u32)(r_esi+0x2c8u), (u8)r_eax);
    /* 006c6cbf: mov byte ptr [esi + 0x2c9], al */ W8((u32)(r_esi+0x2c9u), (u8)r_eax);
    /* 006c6cc5: mov byte ptr [esi + 0x2ca], al */ W8((u32)(r_esi+0x2cau), (u8)r_eax);
    /* 006c6ccb: mov byte ptr [esi + 0x2cb], al */ W8((u32)(r_esi+0x2cbu), (u8)r_eax);
    /* 006c6cd1: mov word ptr [esi + 0x2cc], ax */ W16((u32)(r_esi+0x2ccu), (u16)r_eax);
    /* 006c6cd8: mov dword ptr [ebp - 0x180], eax */ W32((u32)(r_ebp+0xfffffe80u), r_eax);
    /* 006c6cde: mov eax, dword ptr [ebp - 0x198] */ r_eax = R32((u32)(r_ebp+0xfffffe68u));
L_006c6ce4:; BB(0x006c6ce4);
    /* 006c6ce4: mov dword ptr [0xa95df0], eax */ W32((u32)(0xa95df0u), r_eax);
    /* 006c6ce9: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006c6cf0: mov dword ptr [ebp - 0x17c], 0 */ W32((u32)(r_ebp+0xfffffe84u), 0x0u);
    /* 006c6cfa: push 0x4dc */ { u32 v = 0x4dcu; r_esp -= 4; W32(r_esp, v); }
    /* 006c6cff: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6c6d04u); f_008581c5();
    /* 006c6d04: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c6d05: mov dword ptr [ebp - 0x1a8], eax */ W32((u32)(r_ebp+0xfffffe58u), r_eax);
    /* 006c6d0b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c6d0d: je 0x6c760c */ if (fZ) goto L_006c760c;
L_006c6d13:; BB(0x006c6d13);
    /* 006c6d13: mov dword ptr [ebp - 0x17c], 1 */ W32((u32)(r_ebp+0xfffffe84u), 0x1u);
    /* 006c6d1d: mov dword ptr [ebp - 4], 0x12 */ W32((u32)(r_ebp+0xfffffffcu), 0x12u);
    /* 006c6d24: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6d29: push 0x4da288 */ { u32 v = 0x4da288u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6d2e: mov edx, dword ptr [ebp - 0x1a8] */ r_edx = R32((u32)(r_ebp+0xfffffe58u));
    /* 006c6d34: mov dword ptr [ebp - 0x1d4], edx */ W32((u32)(r_ebp+0xfffffe2cu), r_edx);
    /* 006c6d3a: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 006c6d3c: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6d3e: lea eax, [edx + 0x3e0] */ r_eax = (u32)(r_edx+0x3e0u);
    /* 006c6d44: mov dword ptr [ebp - 0x1cc], eax */ W32((u32)(r_ebp+0xfffffe34u), r_eax);
    /* 006c6d4a: add edx, 0x3e4 */ {  u32 a = r_edx; u32 b = 0x3e4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006c6d50: mov dword ptr [ebp - 0x1c4], eax */ W32((u32)(r_ebp+0xfffffe3cu), r_eax);
    /* 006c6d56: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006c6d57: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x6c6d5cu); f_00858736();
    /* 006c6d5c: mov dword ptr [ebp - 4], 0x13 */ W32((u32)(r_ebp+0xfffffffcu), 0x13u);
    /* 006c6d63: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6d68: push 0x4da288 */ { u32 v = 0x4da288u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6d6d: mov eax, dword ptr [ebp - 0x1c4] */ r_eax = R32((u32)(r_ebp+0xfffffe3cu));
    /* 006c6d73: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 006c6d75: add eax, 0x3c */ {  u32 a = r_eax; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006c6d78: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6d7a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c6d7b: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x6c6d80u); f_00858736();
    /* 006c6d80: mov eax, dword ptr [ebp - 0x1c4] */ r_eax = R32((u32)(r_ebp+0xfffffe3cu));
    /* 006c6d86: mov dword ptr [eax], 0 */ W32((u32)(r_eax), 0x0u);
    /* 006c6d8c: mov dword ptr [ebp - 4], 0x14 */ W32((u32)(r_ebp+0xfffffffcu), 0x14u);
    /* 006c6d93: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6d98: push 0x4da288 */ { u32 v = 0x4da288u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6d9d: mov edx, dword ptr [ebp - 0x1cc] */ r_edx = R32((u32)(r_ebp+0xfffffe34u));
    /* 006c6da3: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 006c6da5: lea eax, [edx + 0x74] */ r_eax = (u32)(r_edx+0x74u);
    /* 006c6da8: add edx, 0x78 */ {  u32 a = r_edx; u32 b = 0x78u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006c6dab: mov dword ptr [ebp - 0x1bc], eax */ W32((u32)(r_ebp+0xfffffe44u), r_eax);
    /* 006c6db1: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6db3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006c6db4: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x6c6db9u); f_00858736();
    /* 006c6db9: mov dword ptr [ebp - 4], 0x15 */ W32((u32)(r_ebp+0xfffffffcu), 0x15u);
    /* 006c6dc0: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6dc5: push 0x4da288 */ { u32 v = 0x4da288u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6dca: mov eax, dword ptr [ebp - 0x1bc] */ r_eax = R32((u32)(r_ebp+0xfffffe44u));
    /* 006c6dd0: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 006c6dd2: add eax, 0x3c */ {  u32 a = r_eax; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006c6dd5: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6dd7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c6dd8: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x6c6dddu); f_00858736();
    /* 006c6ddd: mov eax, dword ptr [ebp - 0x1bc] */ r_eax = R32((u32)(r_ebp+0xfffffe44u));
    /* 006c6de3: mov dword ptr [eax], 0 */ W32((u32)(r_eax), 0x0u);
    /* 006c6de9: mov dword ptr [ebp - 4], 0x16 */ W32((u32)(r_ebp+0xfffffffcu), 0x16u);
    /* 006c6df0: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_006c6df2:; BB(0x006c6df2);
    /* 006c6df2: mov edi, dword ptr [ebp - 0x1d4] */ r_edi = R32((u32)(r_ebp+0xfffffe2cu));
    /* 006c6df8: lea edx, [ebx + ebx] */ r_edx = (u32)(r_ebx+r_ebx);
    /* 006c6dfb: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006c6dfd: lea esi, [edx + edx] */ r_esi = (u32)(r_edx+r_edx);
    /* 006c6e00: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006c6e02: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006c6e04: sub esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 006c6e06: mov byte ptr [esi + edi + 5], 0xff */ W8((u32)(r_esi+r_edi+0x5u), 0xffu);
    /* 006c6e0b: lea ecx, [edi + esi + 0xc] */ r_ecx = (u32)(r_edi+r_esi+0xcu);
    /* 006c6e0f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c6e11: mov byte ptr [esi + edi + 4], al */ W8((u32)(r_esi+r_edi+0x4u), (u8)r_eax);
    /* 006c6e15: mov dword ptr [esi + edi + 8], eax */ W32((u32)(r_esi+r_edi+0x8u), r_eax);
    /* 006c6e19: mov byte ptr [esi + edi + 7], al */ W8((u32)(r_esi+r_edi+0x7u), (u8)r_eax);
    /* 006c6e1d: mov byte ptr [esi + edi + 6], al */ W8((u32)(r_esi+r_edi+0x6u), (u8)r_eax);
    /* 006c6e21: call 0x5d6a3c */ r_esp -= 4; W32(r_esp, 0x6c6e26u); f_005d6a3c();
    /* 006c6e26: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006c6e29: cmp ebx, 0x1e */ {  u32 a = r_ebx; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006c6e2c: jl 0x6c6df2 */ if ((fS!=fO)) goto L_006c6df2;
L_006c6e2e:; BB(0x006c6e2e);
    /* 006c6e2e: jmp 0x6c7590 */ goto L_006c7590;
L_006c7590:; BB(0x006c7590);
    /* 006c7590: mov eax, dword ptr [ebp - 0x1a8] */ r_eax = R32((u32)(r_ebp+0xfffffe58u));
    /* 006c7596: mov dword ptr [ebp - 0x17c], 0 */ W32((u32)(r_ebp+0xfffffe84u), 0x0u);
L_006c75a0:; BB(0x006c75a0);
    /* 006c75a0: mov dword ptr [0xa95dfc], eax */ W32((u32)(0xa95dfcu), r_eax);
    /* 006c75a5: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006c75ac: mov dword ptr [ebp - 0x178], 0 */ W32((u32)(r_ebp+0xfffffe88u), 0x0u);
    /* 006c75b6: push 0x29c8 */ { u32 v = 0x29c8u; r_esp -= 4; W32(r_esp, v); }
    /* 006c75bb: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6c75c0u); f_008581c5();
    /* 006c75c0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c75c1: mov dword ptr [ebp - 0x1a0], eax */ W32((u32)(r_ebp+0xfffffe60u), r_eax);
    /* 006c75c7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c75c9: je 0x6c7608 */ if (fZ) goto L_006c7608;
L_006c75cb:; BB(0x006c75cb);
    /* 006c75cb: mov dword ptr [ebp - 0x178], 1 */ W32((u32)(r_ebp+0xfffffe88u), 0x1u);
    /* 006c75d5: mov dword ptr [ebp - 4], 0x17 */ W32((u32)(r_ebp+0xfffffffcu), 0x17u);
    /* 006c75dc: mov ecx, dword ptr [ebp - 0x1a0] */ r_ecx = R32((u32)(r_ebp+0xfffffe60u));
    /* 006c75e2: call 0x6c4674 */ r_esp -= 4; W32(r_esp, 0x6c75e7u); f_006c4674();
    /* 006c75e7: mov eax, dword ptr [ebp - 0x1a0] */ r_eax = R32((u32)(r_ebp+0xfffffe60u));
    /* 006c75ed: mov dword ptr [ebp - 0x178], 0 */ W32((u32)(r_ebp+0xfffffe88u), 0x0u);
L_006c75f7:; BB(0x006c75f7);
    /* 006c75f7: mov dword ptr [0xa95df8], eax */ W32((u32)(0xa95df8u), r_eax);
    /* 006c75fc: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006c7603: jmp 0x6c6b1e */ goto L_006c6b1e;
L_006c7608:; BB(0x006c7608);
    /* 006c7608: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c760a: jmp 0x6c75f7 */ goto L_006c75f7;
L_006c760c:; BB(0x006c760c);
    /* 006c760c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c760e: jmp 0x6c75a0 */ goto L_006c75a0;
L_006c7610:; BB(0x006c7610);
    /* 006c7610: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c7612: jmp 0x6c6ce4 */ goto L_006c6ce4;
L_006c7617:; BB(0x006c7617);
    /* 006c7617: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c7619: jmp 0x6c6c4f */ goto L_006c6c4f;
L_006c76e2:; BB(0x006c76e2);
    /* 006c76e2: movsx eax, byte ptr [ebp - 0x22] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffdeu));
    /* 006c76e6: movsx esi, byte ptr [ebp - 0x21] */ r_esi = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffdfu));
    /* 006c76ea: movzx edi, byte ptr [ebp - 0x24] */ r_edi = (u32)R8((u32)(r_ebp+0xffffffdcu));
    /* 006c76ee: movsx edx, byte ptr [ebp - 0x23] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffddu));
    /* 006c76f2: movsx ebx, byte ptr [ebp - 0x20] */ r_ebx = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffe0u));
    /* 006c76f6: mov dword ptr [0xa95db0], 1 */ W32((u32)(0xa95db0u), 0x1u);
    /* 006c7700: shl edi, 0x18 */ { u32 c = (24u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 006c7703: shl edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 006c7706: or edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 006c7708: movsx edx, byte ptr [ebp - 0x1f] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffe1u));
    /* 006c770c: mov ecx, eax */ r_ecx = r_eax;
    /* 006c770e: shl ecx, 8 */ { u32 c = (8u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 006c7711: or edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 006c7713: or edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 006c7715: shl eax, 0x18 */ { u32 c = (24u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 006c7718: mov dword ptr [0xa95db8], edi */ W32((u32)(0xa95db8u), r_edi);
    /* 006c771e: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 006c7721: shl esi, 0x10 */ { u32 c = (16u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 006c7724: or eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006c7726: shl ebx, 8 */ { u32 c = (8u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 006c7729: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006c772c: or eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006c772e: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 006c7731: or eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006c7733: mov dword ptr [0xa95dbc], eax */ W32((u32)(0xa95dbcu), r_eax);
    /* 006c7738: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c773a: mov dword ptr [0xa95db4], eax */ W32((u32)(0xa95db4u), r_eax);
    /* 006c773f: mov dword ptr [0xa95dac], eax */ W32((u32)(0xa95dacu), r_eax);
    /* 006c7744: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006c7747: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006c774e: mov esp, ebp */ r_esp = r_ebp;
    /* 006c7750: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006c7751: ret  */ FN_RET(0x006c6beb); r_esp += 4; return;
}

void f_006c6c41(void)
{
    FN_ENTER(0x006c6c41);
    /* 006c6c41: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    UNSUP(0x006c6c42, "falls out of decoded code");
}

void f_006c6c64(void)
{
    FN_ENTER(0x006c6c64);
    goto L_006c6c64;
L_006c6b1e:; BB(0x006c6b1e);
    /* 006c6b1e: push 0x4dc */ { u32 v = 0x4dcu; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b23: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b25: push dword ptr [0xa95dfc] */ { u32 v = R32((u32)(0xa95dfcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006c6b2b: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x6c6b30u); f_0086b688();
    /* 006c6b30: push 0x29c8 */ { u32 v = 0x29c8u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b35: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b37: push dword ptr [0xa95df8] */ { u32 v = R32((u32)(0xa95df8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c6b3d: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x6c6b42u); f_0086b688();
    /* 006c6b42: push 0xbaa4 */ { u32 v = 0xbaa4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b47: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b49: push dword ptr [0xa95e44] */ { u32 v = R32((u32)(0xa95e44u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c6b4f: call 0x86b5cc */ r_esp -= 4; W32(r_esp, 0x6c6b54u); f_0086b5cc();
    /* 006c6b54: push 0xaf0 */ { u32 v = 0xaf0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b59: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b5b: push dword ptr [0xa95df0] */ { u32 v = R32((u32)(0xa95df0u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c6b61: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x6c6b66u); f_0086b688();
    /* 006c6b66: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c6b69: call 0x6c78a0 */ r_esp -= 4; W32(r_esp, 0x6c6b6eu); f_006c78a0();
    /* 006c6b6e: mov dword ptr [0xa95dd4], 5 */ W32((u32)(0xa95dd4u), 0x5u);
    /* 006c6b78: mov dword ptr [0xa95dd0], 6 */ W32((u32)(0xa95dd0u), 0x6u);
    /* 006c6b82: mov dword ptr [0xa95dc8], 3 */ W32((u32)(0xa95dc8u), 0x3u);
    /* 006c6b8c: call 0x6c79c0 */ r_esp -= 4; W32(r_esp, 0x6c6b91u); f_006c79c0();
    /* 006c6b91: call 0x6c7988 */ r_esp -= 4; W32(r_esp, 0x6c6b96u); f_006c7988();
    /* 006c6b96: call 0x6c7950 */ r_esp -= 4; W32(r_esp, 0x6c6b9bu); f_006c7950();
    /* 006c6b9b: mov dword ptr [0xa95de0], 0 */ W32((u32)(0xa95de0u), 0x0u);
    /* 006c6ba5: call 0x415cec */ r_esp -= 4; W32(r_esp, 0x6c6baau); f_00415cec();
    /* 006c6baa: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 006c6bad: mov dword ptr [0xa95ddc], eax */ W32((u32)(0xa95ddcu), r_eax);
    /* 006c6bb2: call 0x415cec */ r_esp -= 4; W32(r_esp, 0x6c6bb7u); f_00415cec();
    /* 006c6bb7: mov edx, dword ptr [0xa95df0] */ r_edx = R32((u32)(0xa95df0u));
    /* 006c6bbd: mov ecx, dword ptr [edx + 0x110] */ r_ecx = R32((u32)(r_edx+0x110u));
    /* 006c6bc3: mov dword ptr [0xa95dc4], ecx */ W32((u32)(0xa95dc4u), r_ecx);
    /* 006c6bc9: mov dword ptr [0xa95dc0], ecx */ W32((u32)(0xa95dc0u), r_ecx);
    /* 006c6bcf: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 006c6bd2: mov dword ptr [0xa95dd8], eax */ W32((u32)(0xa95dd8u), r_eax);
    /* 006c6bd7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_006c6bd9:; BB(0x006c6bd9);
    /* 006c6bd9: mov byte ptr [ebp + eax - 0x24], 0 */ W8((u32)(r_ebp+r_eax+0xffffffdcu), 0x0u);
    /* 006c6bde: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006c6be1: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006c6be4: jl 0x6c6bd9 */ if ((fS!=fO)) goto L_006c6bd9;
L_006c6be6:; BB(0x006c6be6);
    /* 006c6be6: jmp 0x6c76e2 */ goto L_006c76e2;
L_006c6c64:; BB(0x006c6c64);
    /* 006c6c64: add bh, al */ {  u32 a = (u8)(r_ebx>>8); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 006c6c66: test dword ptr [eax + 0xfffffe], eax */ {  u32 a = R32((u32)(r_eax+0xfffffeu)); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;   }
    /* 006c6c6c: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 006c6c6e: add byte ptr [ebx + 0xa95df4], ah */ { u32 ad = (u32)(r_ebx+0xa95df4u);  u32 a = R8(ad); u32 b = (u8)(r_eax>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 006c6c74: push 0xaf0 */ { u32 v = 0xaf0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6c79: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6c6c7eu); f_008581c5();
    /* 006c6c7e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c6c81: mov dword ptr [ebp - 0x198], eax */ W32((u32)(r_ebp+0xfffffe68u), r_eax);
    /* 006c6c87: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c6c89: je 0x6c7610 */ if (fZ) goto L_006c7610;
L_006c6c8f:; BB(0x006c6c8f);
    /* 006c6c8f: mov dword ptr [ebp - 0x180], 1 */ W32((u32)(r_ebp+0xfffffe80u), 0x1u);
    /* 006c6c99: mov esi, dword ptr [ebp - 0x198] */ r_esi = R32((u32)(r_ebp+0xfffffe68u));
    /* 006c6c9f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c6ca1: mov dword ptr [esi + 0x2b8], eax */ W32((u32)(r_esi+0x2b8u), r_eax);
    /* 006c6ca7: mov dword ptr [esi + 0x2bc], eax */ W32((u32)(r_esi+0x2bcu), r_eax);
    /* 006c6cad: mov dword ptr [esi + 0x2c0], eax */ W32((u32)(r_esi+0x2c0u), r_eax);
    /* 006c6cb3: mov dword ptr [esi + 0x2c4], eax */ W32((u32)(r_esi+0x2c4u), r_eax);
    /* 006c6cb9: mov byte ptr [esi + 0x2c8], al */ W8((u32)(r_esi+0x2c8u), (u8)r_eax);
    /* 006c6cbf: mov byte ptr [esi + 0x2c9], al */ W8((u32)(r_esi+0x2c9u), (u8)r_eax);
    /* 006c6cc5: mov byte ptr [esi + 0x2ca], al */ W8((u32)(r_esi+0x2cau), (u8)r_eax);
    /* 006c6ccb: mov byte ptr [esi + 0x2cb], al */ W8((u32)(r_esi+0x2cbu), (u8)r_eax);
    /* 006c6cd1: mov word ptr [esi + 0x2cc], ax */ W16((u32)(r_esi+0x2ccu), (u16)r_eax);
    /* 006c6cd8: mov dword ptr [ebp - 0x180], eax */ W32((u32)(r_ebp+0xfffffe80u), r_eax);
    /* 006c6cde: mov eax, dword ptr [ebp - 0x198] */ r_eax = R32((u32)(r_ebp+0xfffffe68u));
L_006c6ce4:; BB(0x006c6ce4);
    /* 006c6ce4: mov dword ptr [0xa95df0], eax */ W32((u32)(0xa95df0u), r_eax);
    /* 006c6ce9: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006c6cf0: mov dword ptr [ebp - 0x17c], 0 */ W32((u32)(r_ebp+0xfffffe84u), 0x0u);
    /* 006c6cfa: push 0x4dc */ { u32 v = 0x4dcu; r_esp -= 4; W32(r_esp, v); }
    /* 006c6cff: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6c6d04u); f_008581c5();
    /* 006c6d04: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c6d05: mov dword ptr [ebp - 0x1a8], eax */ W32((u32)(r_ebp+0xfffffe58u), r_eax);
    /* 006c6d0b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c6d0d: je 0x6c760c */ if (fZ) goto L_006c760c;
L_006c6d13:; BB(0x006c6d13);
    /* 006c6d13: mov dword ptr [ebp - 0x17c], 1 */ W32((u32)(r_ebp+0xfffffe84u), 0x1u);
    /* 006c6d1d: mov dword ptr [ebp - 4], 0x12 */ W32((u32)(r_ebp+0xfffffffcu), 0x12u);
    /* 006c6d24: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6d29: push 0x4da288 */ { u32 v = 0x4da288u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6d2e: mov edx, dword ptr [ebp - 0x1a8] */ r_edx = R32((u32)(r_ebp+0xfffffe58u));
    /* 006c6d34: mov dword ptr [ebp - 0x1d4], edx */ W32((u32)(r_ebp+0xfffffe2cu), r_edx);
    /* 006c6d3a: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 006c6d3c: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6d3e: lea eax, [edx + 0x3e0] */ r_eax = (u32)(r_edx+0x3e0u);
    /* 006c6d44: mov dword ptr [ebp - 0x1cc], eax */ W32((u32)(r_ebp+0xfffffe34u), r_eax);
    /* 006c6d4a: add edx, 0x3e4 */ {  u32 a = r_edx; u32 b = 0x3e4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006c6d50: mov dword ptr [ebp - 0x1c4], eax */ W32((u32)(r_ebp+0xfffffe3cu), r_eax);
    /* 006c6d56: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006c6d57: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x6c6d5cu); f_00858736();
    /* 006c6d5c: mov dword ptr [ebp - 4], 0x13 */ W32((u32)(r_ebp+0xfffffffcu), 0x13u);
    /* 006c6d63: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6d68: push 0x4da288 */ { u32 v = 0x4da288u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6d6d: mov eax, dword ptr [ebp - 0x1c4] */ r_eax = R32((u32)(r_ebp+0xfffffe3cu));
    /* 006c6d73: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 006c6d75: add eax, 0x3c */ {  u32 a = r_eax; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006c6d78: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6d7a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c6d7b: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x6c6d80u); f_00858736();
    /* 006c6d80: mov eax, dword ptr [ebp - 0x1c4] */ r_eax = R32((u32)(r_ebp+0xfffffe3cu));
    /* 006c6d86: mov dword ptr [eax], 0 */ W32((u32)(r_eax), 0x0u);
    /* 006c6d8c: mov dword ptr [ebp - 4], 0x14 */ W32((u32)(r_ebp+0xfffffffcu), 0x14u);
    /* 006c6d93: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6d98: push 0x4da288 */ { u32 v = 0x4da288u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6d9d: mov edx, dword ptr [ebp - 0x1cc] */ r_edx = R32((u32)(r_ebp+0xfffffe34u));
    /* 006c6da3: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 006c6da5: lea eax, [edx + 0x74] */ r_eax = (u32)(r_edx+0x74u);
    /* 006c6da8: add edx, 0x78 */ {  u32 a = r_edx; u32 b = 0x78u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006c6dab: mov dword ptr [ebp - 0x1bc], eax */ W32((u32)(r_ebp+0xfffffe44u), r_eax);
    /* 006c6db1: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6db3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006c6db4: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x6c6db9u); f_00858736();
    /* 006c6db9: mov dword ptr [ebp - 4], 0x15 */ W32((u32)(r_ebp+0xfffffffcu), 0x15u);
    /* 006c6dc0: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6dc5: push 0x4da288 */ { u32 v = 0x4da288u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6dca: mov eax, dword ptr [ebp - 0x1bc] */ r_eax = R32((u32)(r_ebp+0xfffffe44u));
    /* 006c6dd0: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 006c6dd2: add eax, 0x3c */ {  u32 a = r_eax; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006c6dd5: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6dd7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c6dd8: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x6c6dddu); f_00858736();
    /* 006c6ddd: mov eax, dword ptr [ebp - 0x1bc] */ r_eax = R32((u32)(r_ebp+0xfffffe44u));
    /* 006c6de3: mov dword ptr [eax], 0 */ W32((u32)(r_eax), 0x0u);
    /* 006c6de9: mov dword ptr [ebp - 4], 0x16 */ W32((u32)(r_ebp+0xfffffffcu), 0x16u);
    /* 006c6df0: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_006c6df2:; BB(0x006c6df2);
    /* 006c6df2: mov edi, dword ptr [ebp - 0x1d4] */ r_edi = R32((u32)(r_ebp+0xfffffe2cu));
    /* 006c6df8: lea edx, [ebx + ebx] */ r_edx = (u32)(r_ebx+r_ebx);
    /* 006c6dfb: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006c6dfd: lea esi, [edx + edx] */ r_esi = (u32)(r_edx+r_edx);
    /* 006c6e00: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006c6e02: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006c6e04: sub esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 006c6e06: mov byte ptr [esi + edi + 5], 0xff */ W8((u32)(r_esi+r_edi+0x5u), 0xffu);
    /* 006c6e0b: lea ecx, [edi + esi + 0xc] */ r_ecx = (u32)(r_edi+r_esi+0xcu);
    /* 006c6e0f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c6e11: mov byte ptr [esi + edi + 4], al */ W8((u32)(r_esi+r_edi+0x4u), (u8)r_eax);
    /* 006c6e15: mov dword ptr [esi + edi + 8], eax */ W32((u32)(r_esi+r_edi+0x8u), r_eax);
    /* 006c6e19: mov byte ptr [esi + edi + 7], al */ W8((u32)(r_esi+r_edi+0x7u), (u8)r_eax);
    /* 006c6e1d: mov byte ptr [esi + edi + 6], al */ W8((u32)(r_esi+r_edi+0x6u), (u8)r_eax);
    /* 006c6e21: call 0x5d6a3c */ r_esp -= 4; W32(r_esp, 0x6c6e26u); f_005d6a3c();
    /* 006c6e26: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006c6e29: cmp ebx, 0x1e */ {  u32 a = r_ebx; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006c6e2c: jl 0x6c6df2 */ if ((fS!=fO)) goto L_006c6df2;
L_006c6e2e:; BB(0x006c6e2e);
    /* 006c6e2e: jmp 0x6c7590 */ goto L_006c7590;
L_006c7590:; BB(0x006c7590);
    /* 006c7590: mov eax, dword ptr [ebp - 0x1a8] */ r_eax = R32((u32)(r_ebp+0xfffffe58u));
    /* 006c7596: mov dword ptr [ebp - 0x17c], 0 */ W32((u32)(r_ebp+0xfffffe84u), 0x0u);
L_006c75a0:; BB(0x006c75a0);
    /* 006c75a0: mov dword ptr [0xa95dfc], eax */ W32((u32)(0xa95dfcu), r_eax);
    /* 006c75a5: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006c75ac: mov dword ptr [ebp - 0x178], 0 */ W32((u32)(r_ebp+0xfffffe88u), 0x0u);
    /* 006c75b6: push 0x29c8 */ { u32 v = 0x29c8u; r_esp -= 4; W32(r_esp, v); }
    /* 006c75bb: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6c75c0u); f_008581c5();
    /* 006c75c0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c75c1: mov dword ptr [ebp - 0x1a0], eax */ W32((u32)(r_ebp+0xfffffe60u), r_eax);
    /* 006c75c7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c75c9: je 0x6c7608 */ if (fZ) goto L_006c7608;
L_006c75cb:; BB(0x006c75cb);
    /* 006c75cb: mov dword ptr [ebp - 0x178], 1 */ W32((u32)(r_ebp+0xfffffe88u), 0x1u);
    /* 006c75d5: mov dword ptr [ebp - 4], 0x17 */ W32((u32)(r_ebp+0xfffffffcu), 0x17u);
    /* 006c75dc: mov ecx, dword ptr [ebp - 0x1a0] */ r_ecx = R32((u32)(r_ebp+0xfffffe60u));
    /* 006c75e2: call 0x6c4674 */ r_esp -= 4; W32(r_esp, 0x6c75e7u); f_006c4674();
    /* 006c75e7: mov eax, dword ptr [ebp - 0x1a0] */ r_eax = R32((u32)(r_ebp+0xfffffe60u));
    /* 006c75ed: mov dword ptr [ebp - 0x178], 0 */ W32((u32)(r_ebp+0xfffffe88u), 0x0u);
L_006c75f7:; BB(0x006c75f7);
    /* 006c75f7: mov dword ptr [0xa95df8], eax */ W32((u32)(0xa95df8u), r_eax);
    /* 006c75fc: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006c7603: jmp 0x6c6b1e */ goto L_006c6b1e;
L_006c7608:; BB(0x006c7608);
    /* 006c7608: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c760a: jmp 0x6c75f7 */ goto L_006c75f7;
L_006c760c:; BB(0x006c760c);
    /* 006c760c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c760e: jmp 0x6c75a0 */ goto L_006c75a0;
L_006c7610:; BB(0x006c7610);
    /* 006c7610: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c7612: jmp 0x6c6ce4 */ goto L_006c6ce4;
L_006c76e2:; BB(0x006c76e2);
    /* 006c76e2: movsx eax, byte ptr [ebp - 0x22] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffdeu));
    /* 006c76e6: movsx esi, byte ptr [ebp - 0x21] */ r_esi = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffdfu));
    /* 006c76ea: movzx edi, byte ptr [ebp - 0x24] */ r_edi = (u32)R8((u32)(r_ebp+0xffffffdcu));
    /* 006c76ee: movsx edx, byte ptr [ebp - 0x23] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffddu));
    /* 006c76f2: movsx ebx, byte ptr [ebp - 0x20] */ r_ebx = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffe0u));
    /* 006c76f6: mov dword ptr [0xa95db0], 1 */ W32((u32)(0xa95db0u), 0x1u);
    /* 006c7700: shl edi, 0x18 */ { u32 c = (24u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 006c7703: shl edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 006c7706: or edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 006c7708: movsx edx, byte ptr [ebp - 0x1f] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffe1u));
    /* 006c770c: mov ecx, eax */ r_ecx = r_eax;
    /* 006c770e: shl ecx, 8 */ { u32 c = (8u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 006c7711: or edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 006c7713: or edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 006c7715: shl eax, 0x18 */ { u32 c = (24u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 006c7718: mov dword ptr [0xa95db8], edi */ W32((u32)(0xa95db8u), r_edi);
    /* 006c771e: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 006c7721: shl esi, 0x10 */ { u32 c = (16u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 006c7724: or eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006c7726: shl ebx, 8 */ { u32 c = (8u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 006c7729: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006c772c: or eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006c772e: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 006c7731: or eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006c7733: mov dword ptr [0xa95dbc], eax */ W32((u32)(0xa95dbcu), r_eax);
    /* 006c7738: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c773a: mov dword ptr [0xa95db4], eax */ W32((u32)(0xa95db4u), r_eax);
    /* 006c773f: mov dword ptr [0xa95dac], eax */ W32((u32)(0xa95dacu), r_eax);
    /* 006c7744: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006c7747: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006c774e: mov esp, ebp */ r_esp = r_ebp;
    /* 006c7750: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006c7751: ret  */ FN_RET(0x006c6c64); r_esp += 4; return;
}

void f_006c6c69(void)
{
    FN_ENTER(0x006c6c69);
}

void f_006c6d62(void)
{
    FN_ENTER(0x006c6d62);
    /* 006c6d62: add byte ptr [eax - 0x50], ch */ { u32 ad = (u32)(r_eax+0xffffffb0u);  u32 a = R8(ad); u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 006c6d65: int 0x61 */ UNSUP(0x006c6d65, "int 0x61");
    /* 006c6d67: add byte ptr [eax - 0x78], ch */ { u32 ad = (u32)(r_eax+0xffffff88u);  u32 a = R8(ad); u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 006c6d6a: mov byte ptr [0x858b004d], al */ W8((u32)(0x858b004du), (u8)r_eax);
    /* 006c6d6f: cmp al, 0xfe */ {  u32 a = (u8)r_eax; u32 b = 0xfeu; u32 r = (a - b) & 0xffu;   }
    UNSUP(0x006c6d71, "falls out of decoded code");
}

void f_006c6d65(void)
{
    FN_ENTER(0x006c6d65);
    /* 006c6d65: int 0x61 */ UNSUP(0x006c6d65, "int 0x61");
    /* 006c6d67: add byte ptr [eax - 0x78], ch */ { u32 ad = (u32)(r_eax+0xffffff88u);  u32 a = R8(ad); u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 006c6d6a: mov byte ptr [0x858b004d], al */ W8((u32)(0x858b004du), (u8)r_eax);
    /* 006c6d6f: cmp al, 0xfe */ {  u32 a = (u8)r_eax; u32 b = 0xfeu; u32 r = (a - b) & 0xffu;   }
    UNSUP(0x006c6d71, "falls out of decoded code");
}

void f_006c6e33(void)
{
    FN_ENTER(0x006c6e33);
    goto L_006c6e33;
L_006c6b1e:; BB(0x006c6b1e);
    /* 006c6b1e: push 0x4dc */ { u32 v = 0x4dcu; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b23: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b25: push dword ptr [0xa95dfc] */ { u32 v = R32((u32)(0xa95dfcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006c6b2b: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x6c6b30u); f_0086b688();
    /* 006c6b30: push 0x29c8 */ { u32 v = 0x29c8u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b35: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b37: push dword ptr [0xa95df8] */ { u32 v = R32((u32)(0xa95df8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c6b3d: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x6c6b42u); f_0086b688();
    /* 006c6b42: push 0xbaa4 */ { u32 v = 0xbaa4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b47: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b49: push dword ptr [0xa95e44] */ { u32 v = R32((u32)(0xa95e44u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c6b4f: call 0x86b5cc */ r_esp -= 4; W32(r_esp, 0x6c6b54u); f_0086b5cc();
    /* 006c6b54: push 0xaf0 */ { u32 v = 0xaf0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b59: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b5b: push dword ptr [0xa95df0] */ { u32 v = R32((u32)(0xa95df0u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c6b61: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x6c6b66u); f_0086b688();
    /* 006c6b66: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c6b69: call 0x6c78a0 */ r_esp -= 4; W32(r_esp, 0x6c6b6eu); f_006c78a0();
    /* 006c6b6e: mov dword ptr [0xa95dd4], 5 */ W32((u32)(0xa95dd4u), 0x5u);
    /* 006c6b78: mov dword ptr [0xa95dd0], 6 */ W32((u32)(0xa95dd0u), 0x6u);
    /* 006c6b82: mov dword ptr [0xa95dc8], 3 */ W32((u32)(0xa95dc8u), 0x3u);
    /* 006c6b8c: call 0x6c79c0 */ r_esp -= 4; W32(r_esp, 0x6c6b91u); f_006c79c0();
    /* 006c6b91: call 0x6c7988 */ r_esp -= 4; W32(r_esp, 0x6c6b96u); f_006c7988();
    /* 006c6b96: call 0x6c7950 */ r_esp -= 4; W32(r_esp, 0x6c6b9bu); f_006c7950();
    /* 006c6b9b: mov dword ptr [0xa95de0], 0 */ W32((u32)(0xa95de0u), 0x0u);
    /* 006c6ba5: call 0x415cec */ r_esp -= 4; W32(r_esp, 0x6c6baau); f_00415cec();
    /* 006c6baa: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 006c6bad: mov dword ptr [0xa95ddc], eax */ W32((u32)(0xa95ddcu), r_eax);
    /* 006c6bb2: call 0x415cec */ r_esp -= 4; W32(r_esp, 0x6c6bb7u); f_00415cec();
    /* 006c6bb7: mov edx, dword ptr [0xa95df0] */ r_edx = R32((u32)(0xa95df0u));
    /* 006c6bbd: mov ecx, dword ptr [edx + 0x110] */ r_ecx = R32((u32)(r_edx+0x110u));
    /* 006c6bc3: mov dword ptr [0xa95dc4], ecx */ W32((u32)(0xa95dc4u), r_ecx);
    /* 006c6bc9: mov dword ptr [0xa95dc0], ecx */ W32((u32)(0xa95dc0u), r_ecx);
    /* 006c6bcf: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 006c6bd2: mov dword ptr [0xa95dd8], eax */ W32((u32)(0xa95dd8u), r_eax);
    /* 006c6bd7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_006c6bd9:; BB(0x006c6bd9);
    /* 006c6bd9: mov byte ptr [ebp + eax - 0x24], 0 */ W8((u32)(r_ebp+r_eax+0xffffffdcu), 0x0u);
    /* 006c6bde: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006c6be1: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006c6be4: jl 0x6c6bd9 */ if ((fS!=fO)) goto L_006c6bd9;
L_006c6be6:; BB(0x006c6be6);
    /* 006c6be6: jmp 0x6c76e2 */ goto L_006c76e2;
L_006c6e33:; BB(0x006c6e33);
    /* 006c6e33: mov dword ptr [ebp - 0x194], 0 */ W32((u32)(r_ebp+0xfffffe6cu), 0x0u);
    /* 006c6e3d: push 0xbaa4 */ { u32 v = 0xbaa4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6e42: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6c6e47u); f_008581c5();
    /* 006c6e47: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c6e48: mov dword ptr [ebp - 0x1b0], eax */ W32((u32)(r_ebp+0xfffffe50u), r_eax);
    /* 006c6e4e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c6e50: je 0x6c76cd */ if (fZ) goto L_006c76cd;
L_006c6e56:; BB(0x006c6e56);
    /* 006c6e56: mov dword ptr [ebp - 0x194], 1 */ W32((u32)(r_ebp+0xfffffe6cu), 0x1u);
    /* 006c6e60: mov dword ptr [ebp - 4], 8 */ W32((u32)(r_ebp+0xfffffffcu), 0x8u);
    /* 006c6e67: push 0x6c1940 */ { u32 v = 0x6c1940u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6e6c: push 0x6c17f0 */ { u32 v = 0x6c17f0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6e71: mov eax, dword ptr [ebp - 0x1b0] */ r_eax = R32((u32)(r_ebp+0xfffffe50u));
    /* 006c6e77: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6e79: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006c6e7c: push 0x2ea4 */ { u32 v = 0x2ea4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6e81: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c6e82: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x6c6e87u); f_00858736();
    /* 006c6e87: mov eax, dword ptr [ebp - 0x1b0] */ r_eax = R32((u32)(r_ebp+0xfffffe50u));
    /* 006c6e8d: mov dword ptr [ebp - 0x194], 0 */ W32((u32)(r_ebp+0xfffffe6cu), 0x0u);
L_006c6e97:; BB(0x006c6e97);
    /* 006c6e97: mov dword ptr [0xa95e44], eax */ W32((u32)(0xa95e44u), r_eax);
    /* 006c6e9c: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006c6ea3: mov dword ptr [ebp - 0x190], 0 */ W32((u32)(r_ebp+0xfffffe70u), 0x0u);
    /* 006c6ead: push 0xaf0 */ { u32 v = 0xaf0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6eb2: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6c6eb7u); f_008581c5();
    /* 006c6eb7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c6eb8: mov dword ptr [ebp - 0x198], eax */ W32((u32)(r_ebp+0xfffffe68u), r_eax);
    /* 006c6ebe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c6ec0: je 0x6c76c6 */ if (fZ) goto L_006c76c6;
L_006c6ec6:; BB(0x006c6ec6);
    /* 006c6ec6: mov dword ptr [ebp - 0x190], 1 */ W32((u32)(r_ebp+0xfffffe70u), 0x1u);
    /* 006c6ed0: mov esi, dword ptr [ebp - 0x198] */ r_esi = R32((u32)(r_ebp+0xfffffe68u));
    /* 006c6ed6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c6ed8: mov dword ptr [esi + 0x2b8], eax */ W32((u32)(r_esi+0x2b8u), r_eax);
    /* 006c6ede: mov dword ptr [esi + 0x2bc], eax */ W32((u32)(r_esi+0x2bcu), r_eax);
    /* 006c6ee4: mov dword ptr [esi + 0x2c0], eax */ W32((u32)(r_esi+0x2c0u), r_eax);
    /* 006c6eea: mov dword ptr [esi + 0x2c4], eax */ W32((u32)(r_esi+0x2c4u), r_eax);
    /* 006c6ef0: mov byte ptr [esi + 0x2c8], al */ W8((u32)(r_esi+0x2c8u), (u8)r_eax);
    /* 006c6ef6: mov byte ptr [esi + 0x2c9], al */ W8((u32)(r_esi+0x2c9u), (u8)r_eax);
    /* 006c6efc: mov byte ptr [esi + 0x2ca], al */ W8((u32)(r_esi+0x2cau), (u8)r_eax);
    /* 006c6f02: mov byte ptr [esi + 0x2cb], al */ W8((u32)(r_esi+0x2cbu), (u8)r_eax);
    /* 006c6f08: mov word ptr [esi + 0x2cc], ax */ W16((u32)(r_esi+0x2ccu), (u16)r_eax);
    /* 006c6f0f: mov dword ptr [ebp - 0x190], eax */ W32((u32)(r_ebp+0xfffffe70u), r_eax);
    /* 006c6f15: mov eax, dword ptr [ebp - 0x198] */ r_eax = R32((u32)(r_ebp+0xfffffe68u));
L_006c6f1b:; BB(0x006c6f1b);
    /* 006c6f1b: mov dword ptr [0xa95df0], eax */ W32((u32)(0xa95df0u), r_eax);
    /* 006c6f20: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006c6f27: mov dword ptr [ebp - 0x18c], 0 */ W32((u32)(r_ebp+0xfffffe74u), 0x0u);
    /* 006c6f31: push 0x4dc */ { u32 v = 0x4dcu; r_esp -= 4; W32(r_esp, v); }
    /* 006c6f36: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6c6f3bu); f_008581c5();
    /* 006c6f3b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c6f3c: mov dword ptr [ebp - 0x1a8], eax */ W32((u32)(r_ebp+0xfffffe58u), r_eax);
    /* 006c6f42: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c6f44: je 0x6c76bf */ if (fZ) goto L_006c76bf;
L_006c6f4a:; BB(0x006c6f4a);
    /* 006c6f4a: mov dword ptr [ebp - 0x18c], 1 */ W32((u32)(r_ebp+0xfffffe74u), 0x1u);
    /* 006c6f54: mov dword ptr [ebp - 4], 0xa */ W32((u32)(r_ebp+0xfffffffcu), 0xau);
    /* 006c6f5b: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6f60: push 0x4da288 */ { u32 v = 0x4da288u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6f65: mov edx, dword ptr [ebp - 0x1a8] */ r_edx = R32((u32)(r_ebp+0xfffffe58u));
    /* 006c6f6b: mov dword ptr [ebp - 0x1f4], edx */ W32((u32)(r_ebp+0xfffffe0cu), r_edx);
    /* 006c6f71: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 006c6f73: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6f75: lea eax, [edx + 0x3e0] */ r_eax = (u32)(r_edx+0x3e0u);
    /* 006c6f7b: mov dword ptr [ebp - 0x1ec], eax */ W32((u32)(r_ebp+0xfffffe14u), r_eax);
    /* 006c6f81: add edx, 0x3e4 */ {  u32 a = r_edx; u32 b = 0x3e4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006c6f87: mov dword ptr [ebp - 0x1e4], eax */ W32((u32)(r_ebp+0xfffffe1cu), r_eax);
    /* 006c6f8d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006c6f8e: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x6c6f93u); f_00858736();
    /* 006c6f93: mov dword ptr [ebp - 4], 0xb */ W32((u32)(r_ebp+0xfffffffcu), 0xbu);
    /* 006c6f9a: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6f9f: push 0x4da288 */ { u32 v = 0x4da288u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6fa4: mov eax, dword ptr [ebp - 0x1e4] */ r_eax = R32((u32)(r_ebp+0xfffffe1cu));
    /* 006c6faa: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 006c6fac: add eax, 0x3c */ {  u32 a = r_eax; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006c6faf: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6fb1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c6fb2: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x6c6fb7u); f_00858736();
    /* 006c6fb7: mov eax, dword ptr [ebp - 0x1e4] */ r_eax = R32((u32)(r_ebp+0xfffffe1cu));
    /* 006c6fbd: mov dword ptr [eax], 0 */ W32((u32)(r_eax), 0x0u);
    /* 006c6fc3: mov dword ptr [ebp - 4], 0xc */ W32((u32)(r_ebp+0xfffffffcu), 0xcu);
    /* 006c6fca: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6fcf: push 0x4da288 */ { u32 v = 0x4da288u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6fd4: mov edx, dword ptr [ebp - 0x1ec] */ r_edx = R32((u32)(r_ebp+0xfffffe14u));
    /* 006c6fda: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 006c6fdc: lea eax, [edx + 0x74] */ r_eax = (u32)(r_edx+0x74u);
    /* 006c6fdf: add edx, 0x78 */ {  u32 a = r_edx; u32 b = 0x78u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006c6fe2: mov dword ptr [ebp - 0x1dc], eax */ W32((u32)(r_ebp+0xfffffe24u), r_eax);
    /* 006c6fe8: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6fea: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006c6feb: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x6c6ff0u); f_00858736();
    /* 006c6ff0: mov dword ptr [ebp - 4], 0xd */ W32((u32)(r_ebp+0xfffffffcu), 0xdu);
    /* 006c6ff7: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6ffc: push 0x4da288 */ { u32 v = 0x4da288u; r_esp -= 4; W32(r_esp, v); }
    /* 006c7001: mov eax, dword ptr [ebp - 0x1dc] */ r_eax = R32((u32)(r_ebp+0xfffffe24u));
    /* 006c7007: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 006c7009: add eax, 0x3c */ {  u32 a = r_eax; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006c700c: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c700e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c700f: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x6c7014u); f_00858736();
    /* 006c7014: mov eax, dword ptr [ebp - 0x1dc] */ r_eax = R32((u32)(r_ebp+0xfffffe24u));
    /* 006c701a: mov dword ptr [eax], 0 */ W32((u32)(r_eax), 0x0u);
    /* 006c7020: mov dword ptr [ebp - 4], 0xe */ W32((u32)(r_ebp+0xfffffffcu), 0xeu);
    /* 006c7027: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_006c7029:; BB(0x006c7029);
    /* 006c7029: mov edi, dword ptr [ebp - 0x1f4] */ r_edi = R32((u32)(r_ebp+0xfffffe0cu));
    /* 006c702f: lea edx, [ebx + ebx] */ r_edx = (u32)(r_ebx+r_ebx);
    /* 006c7032: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006c7034: lea esi, [edx + edx] */ r_esi = (u32)(r_edx+r_edx);
    /* 006c7037: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006c7039: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006c703b: sub esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 006c703d: mov byte ptr [esi + edi + 5], 0xff */ W8((u32)(r_esi+r_edi+0x5u), 0xffu);
    /* 006c7042: lea ecx, [edi + esi + 0xc] */ r_ecx = (u32)(r_edi+r_esi+0xcu);
    /* 006c7046: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c7048: mov byte ptr [esi + edi + 4], al */ W8((u32)(r_esi+r_edi+0x4u), (u8)r_eax);
    /* 006c704c: mov dword ptr [esi + edi + 8], eax */ W32((u32)(r_esi+r_edi+0x8u), r_eax);
    /* 006c7050: mov byte ptr [esi + edi + 7], al */ W8((u32)(r_esi+r_edi+0x7u), (u8)r_eax);
    /* 006c7054: mov byte ptr [esi + edi + 6], al */ W8((u32)(r_esi+r_edi+0x6u), (u8)r_eax);
    /* 006c7058: call 0x5d6a3c */ r_esp -= 4; W32(r_esp, 0x6c705du); f_005d6a3c();
    /* 006c705d: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006c7060: cmp ebx, 0x1e */ {  u32 a = r_ebx; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006c7063: jl 0x6c7029 */ if ((fS!=fO)) goto L_006c7029;
L_006c7065:; BB(0x006c7065);
    /* 006c7065: jmp 0x6c761e */ goto L_006c761e;
L_006c761e:; BB(0x006c761e);
    /* 006c761e: mov eax, dword ptr [ebp - 0x1a8] */ r_eax = R32((u32)(r_ebp+0xfffffe58u));
    /* 006c7624: mov dword ptr [ebp - 0x18c], 0 */ W32((u32)(r_ebp+0xfffffe74u), 0x0u);
L_006c762e:; BB(0x006c762e);
    /* 006c762e: mov dword ptr [0xa95dfc], eax */ W32((u32)(0xa95dfcu), r_eax);
    /* 006c7633: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006c763a: mov dword ptr [ebp - 0x188], 0 */ W32((u32)(r_ebp+0xfffffe78u), 0x0u);
    /* 006c7644: push 0x29c8 */ { u32 v = 0x29c8u; r_esp -= 4; W32(r_esp, v); }
    /* 006c7649: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6c764eu); f_008581c5();
    /* 006c764e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c764f: mov dword ptr [ebp - 0x1a0], eax */ W32((u32)(r_ebp+0xfffffe60u), r_eax);
    /* 006c7655: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c7657: je 0x6c76bb */ if (fZ) goto L_006c76bb;
L_006c7659:; BB(0x006c7659);
    /* 006c7659: mov dword ptr [ebp - 0x188], 1 */ W32((u32)(r_ebp+0xfffffe78u), 0x1u);
    /* 006c7663: mov dword ptr [ebp - 4], 0xf */ W32((u32)(r_ebp+0xfffffffcu), 0xfu);
    /* 006c766a: mov ebx, dword ptr [ebp - 0x1a0] */ r_ebx = R32((u32)(r_ebp+0xfffffe60u));
    /* 006c7670: add ebx, 0x224 */ {  u32 a = r_ebx; u32 b = 0x224u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006c7676: mov esi, 0xc8 */ r_esi = 0xc8u;
L_006c767b:; BB(0x006c767b);
    /* 006c767b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006c767d: call 0x6c8960 */ r_esp -= 4; W32(r_esp, 0x6c7682u); f_006c8960();
    /* 006c7682: add ebx, 0x18 */ {  u32 a = r_ebx; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006c7685: add esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_esi = r; fZ = (r == 0); }
    /* 006c7688: jne 0x6c767b */ if (!fZ) goto L_006c767b;
L_006c768a:; BB(0x006c768a);
    /* 006c768a: mov eax, dword ptr [ebp - 0x1a0] */ r_eax = R32((u32)(r_ebp+0xfffffe60u));
    /* 006c7690: mov dword ptr [ebp - 0x188], 0 */ W32((u32)(r_ebp+0xfffffe78u), 0x0u);
L_006c769a:; BB(0x006c769a);
    /* 006c769a: mov dword ptr [0xa95df8], eax */ W32((u32)(0xa95df8u), r_eax);
    /* 006c769f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006c76a6: push 0xd590 */ { u32 v = 0xd590u; r_esp -= 4; W32(r_esp, v); }
    /* 006c76ab: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6c76b0u); f_008581c5();
    /* 006c76b0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c76b1: mov dword ptr [0xa95df4], eax */ W32((u32)(0xa95df4u), r_eax);
    /* 006c76b6: jmp 0x6c6b1e */ goto L_006c6b1e;
L_006c76bb:; BB(0x006c76bb);
    /* 006c76bb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c76bd: jmp 0x6c769a */ goto L_006c769a;
L_006c76bf:; BB(0x006c76bf);
    /* 006c76bf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c76c1: jmp 0x6c762e */ goto L_006c762e;
L_006c76c6:; BB(0x006c76c6);
    /* 006c76c6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c76c8: jmp 0x6c6f1b */ goto L_006c6f1b;
L_006c76cd:; BB(0x006c76cd);
    /* 006c76cd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c76cf: jmp 0x6c6e97 */ goto L_006c6e97;
L_006c76e2:; BB(0x006c76e2);
    /* 006c76e2: movsx eax, byte ptr [ebp - 0x22] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffdeu));
    /* 006c76e6: movsx esi, byte ptr [ebp - 0x21] */ r_esi = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffdfu));
    /* 006c76ea: movzx edi, byte ptr [ebp - 0x24] */ r_edi = (u32)R8((u32)(r_ebp+0xffffffdcu));
    /* 006c76ee: movsx edx, byte ptr [ebp - 0x23] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffddu));
    /* 006c76f2: movsx ebx, byte ptr [ebp - 0x20] */ r_ebx = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffe0u));
    /* 006c76f6: mov dword ptr [0xa95db0], 1 */ W32((u32)(0xa95db0u), 0x1u);
    /* 006c7700: shl edi, 0x18 */ { u32 c = (24u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 006c7703: shl edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 006c7706: or edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 006c7708: movsx edx, byte ptr [ebp - 0x1f] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffe1u));
    /* 006c770c: mov ecx, eax */ r_ecx = r_eax;
    /* 006c770e: shl ecx, 8 */ { u32 c = (8u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 006c7711: or edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 006c7713: or edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 006c7715: shl eax, 0x18 */ { u32 c = (24u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 006c7718: mov dword ptr [0xa95db8], edi */ W32((u32)(0xa95db8u), r_edi);
    /* 006c771e: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 006c7721: shl esi, 0x10 */ { u32 c = (16u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 006c7724: or eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006c7726: shl ebx, 8 */ { u32 c = (8u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 006c7729: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006c772c: or eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006c772e: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 006c7731: or eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006c7733: mov dword ptr [0xa95dbc], eax */ W32((u32)(0xa95dbcu), r_eax);
    /* 006c7738: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c773a: mov dword ptr [0xa95db4], eax */ W32((u32)(0xa95db4u), r_eax);
    /* 006c773f: mov dword ptr [0xa95dac], eax */ W32((u32)(0xa95dacu), r_eax);
    /* 006c7744: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006c7747: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006c774e: mov esp, ebp */ r_esp = r_ebp;
    /* 006c7750: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006c7751: ret  */ FN_RET(0x006c6e33); r_esp += 4; return;
}

void f_006c6e6a(void)
{
    FN_ENTER(0x006c6e6a);
    /* 006c6e6a: insb byte ptr es:[edi], dx */ UNSUP(0x006c6e6a, "insb byte ptr es:[edi], dx");
    /* 006c6e6b: add byte ptr [eax - 0x10], ch */ { u32 ad = (u32)(r_eax+0xfffffff0u);  u32 a = R8(ad); u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 006c6e6e: pop ss */ UNSUP(0x006c6e6e, "pop ss");
    /* 006c6e6f: insb byte ptr es:[edi], dx */ UNSUP(0x006c6e6f, "insb byte ptr es:[edi], dx");
    /* 006c6e70: add byte ptr [ebx - 0x1af7b], cl */ { u32 ad = (u32)(r_ebx+0xfffe5085u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 006c6e76: jmp ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); jmp_ind(t); return; }
}

void f_006c6e79(void)
{
    FN_ENTER(0x006c6e79);
    goto L_006c6e79;
L_006c6b1e:; BB(0x006c6b1e);
    /* 006c6b1e: push 0x4dc */ { u32 v = 0x4dcu; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b23: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b25: push dword ptr [0xa95dfc] */ { u32 v = R32((u32)(0xa95dfcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006c6b2b: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x6c6b30u); f_0086b688();
    /* 006c6b30: push 0x29c8 */ { u32 v = 0x29c8u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b35: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b37: push dword ptr [0xa95df8] */ { u32 v = R32((u32)(0xa95df8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c6b3d: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x6c6b42u); f_0086b688();
    /* 006c6b42: push 0xbaa4 */ { u32 v = 0xbaa4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b47: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b49: push dword ptr [0xa95e44] */ { u32 v = R32((u32)(0xa95e44u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c6b4f: call 0x86b5cc */ r_esp -= 4; W32(r_esp, 0x6c6b54u); f_0086b5cc();
    /* 006c6b54: push 0xaf0 */ { u32 v = 0xaf0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b59: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b5b: push dword ptr [0xa95df0] */ { u32 v = R32((u32)(0xa95df0u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c6b61: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x6c6b66u); f_0086b688();
    /* 006c6b66: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c6b69: call 0x6c78a0 */ r_esp -= 4; W32(r_esp, 0x6c6b6eu); f_006c78a0();
    /* 006c6b6e: mov dword ptr [0xa95dd4], 5 */ W32((u32)(0xa95dd4u), 0x5u);
    /* 006c6b78: mov dword ptr [0xa95dd0], 6 */ W32((u32)(0xa95dd0u), 0x6u);
    /* 006c6b82: mov dword ptr [0xa95dc8], 3 */ W32((u32)(0xa95dc8u), 0x3u);
    /* 006c6b8c: call 0x6c79c0 */ r_esp -= 4; W32(r_esp, 0x6c6b91u); f_006c79c0();
    /* 006c6b91: call 0x6c7988 */ r_esp -= 4; W32(r_esp, 0x6c6b96u); f_006c7988();
    /* 006c6b96: call 0x6c7950 */ r_esp -= 4; W32(r_esp, 0x6c6b9bu); f_006c7950();
    /* 006c6b9b: mov dword ptr [0xa95de0], 0 */ W32((u32)(0xa95de0u), 0x0u);
    /* 006c6ba5: call 0x415cec */ r_esp -= 4; W32(r_esp, 0x6c6baau); f_00415cec();
    /* 006c6baa: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 006c6bad: mov dword ptr [0xa95ddc], eax */ W32((u32)(0xa95ddcu), r_eax);
    /* 006c6bb2: call 0x415cec */ r_esp -= 4; W32(r_esp, 0x6c6bb7u); f_00415cec();
    /* 006c6bb7: mov edx, dword ptr [0xa95df0] */ r_edx = R32((u32)(0xa95df0u));
    /* 006c6bbd: mov ecx, dword ptr [edx + 0x110] */ r_ecx = R32((u32)(r_edx+0x110u));
    /* 006c6bc3: mov dword ptr [0xa95dc4], ecx */ W32((u32)(0xa95dc4u), r_ecx);
    /* 006c6bc9: mov dword ptr [0xa95dc0], ecx */ W32((u32)(0xa95dc0u), r_ecx);
    /* 006c6bcf: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 006c6bd2: mov dword ptr [0xa95dd8], eax */ W32((u32)(0xa95dd8u), r_eax);
    /* 006c6bd7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_006c6bd9:; BB(0x006c6bd9);
    /* 006c6bd9: mov byte ptr [ebp + eax - 0x24], 0 */ W8((u32)(r_ebp+r_eax+0xffffffdcu), 0x0u);
    /* 006c6bde: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006c6be1: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006c6be4: jl 0x6c6bd9 */ if ((fS!=fO)) goto L_006c6bd9;
L_006c6be6:; BB(0x006c6be6);
    /* 006c6be6: jmp 0x6c76e2 */ goto L_006c76e2;
L_006c6e79:; BB(0x006c6e79);
    /* 006c6e79: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006c6e7c: push 0x2ea4 */ { u32 v = 0x2ea4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6e81: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c6e82: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x6c6e87u); f_00858736();
    /* 006c6e87: mov eax, dword ptr [ebp - 0x1b0] */ r_eax = R32((u32)(r_ebp+0xfffffe50u));
    /* 006c6e8d: mov dword ptr [ebp - 0x194], 0 */ W32((u32)(r_ebp+0xfffffe6cu), 0x0u);
    /* 006c6e97: mov dword ptr [0xa95e44], eax */ W32((u32)(0xa95e44u), r_eax);
    /* 006c6e9c: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006c6ea3: mov dword ptr [ebp - 0x190], 0 */ W32((u32)(r_ebp+0xfffffe70u), 0x0u);
    /* 006c6ead: push 0xaf0 */ { u32 v = 0xaf0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6eb2: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6c6eb7u); f_008581c5();
    /* 006c6eb7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c6eb8: mov dword ptr [ebp - 0x198], eax */ W32((u32)(r_ebp+0xfffffe68u), r_eax);
    /* 006c6ebe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c6ec0: je 0x6c76c6 */ if (fZ) goto L_006c76c6;
L_006c6ec6:; BB(0x006c6ec6);
    /* 006c6ec6: mov dword ptr [ebp - 0x190], 1 */ W32((u32)(r_ebp+0xfffffe70u), 0x1u);
    /* 006c6ed0: mov esi, dword ptr [ebp - 0x198] */ r_esi = R32((u32)(r_ebp+0xfffffe68u));
    /* 006c6ed6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c6ed8: mov dword ptr [esi + 0x2b8], eax */ W32((u32)(r_esi+0x2b8u), r_eax);
    /* 006c6ede: mov dword ptr [esi + 0x2bc], eax */ W32((u32)(r_esi+0x2bcu), r_eax);
    /* 006c6ee4: mov dword ptr [esi + 0x2c0], eax */ W32((u32)(r_esi+0x2c0u), r_eax);
    /* 006c6eea: mov dword ptr [esi + 0x2c4], eax */ W32((u32)(r_esi+0x2c4u), r_eax);
    /* 006c6ef0: mov byte ptr [esi + 0x2c8], al */ W8((u32)(r_esi+0x2c8u), (u8)r_eax);
    /* 006c6ef6: mov byte ptr [esi + 0x2c9], al */ W8((u32)(r_esi+0x2c9u), (u8)r_eax);
    /* 006c6efc: mov byte ptr [esi + 0x2ca], al */ W8((u32)(r_esi+0x2cau), (u8)r_eax);
    /* 006c6f02: mov byte ptr [esi + 0x2cb], al */ W8((u32)(r_esi+0x2cbu), (u8)r_eax);
    /* 006c6f08: mov word ptr [esi + 0x2cc], ax */ W16((u32)(r_esi+0x2ccu), (u16)r_eax);
    /* 006c6f0f: mov dword ptr [ebp - 0x190], eax */ W32((u32)(r_ebp+0xfffffe70u), r_eax);
    /* 006c6f15: mov eax, dword ptr [ebp - 0x198] */ r_eax = R32((u32)(r_ebp+0xfffffe68u));
L_006c6f1b:; BB(0x006c6f1b);
    /* 006c6f1b: mov dword ptr [0xa95df0], eax */ W32((u32)(0xa95df0u), r_eax);
    /* 006c6f20: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006c6f27: mov dword ptr [ebp - 0x18c], 0 */ W32((u32)(r_ebp+0xfffffe74u), 0x0u);
    /* 006c6f31: push 0x4dc */ { u32 v = 0x4dcu; r_esp -= 4; W32(r_esp, v); }
    /* 006c6f36: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6c6f3bu); f_008581c5();
    /* 006c6f3b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c6f3c: mov dword ptr [ebp - 0x1a8], eax */ W32((u32)(r_ebp+0xfffffe58u), r_eax);
    /* 006c6f42: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c6f44: je 0x6c76bf */ if (fZ) goto L_006c76bf;
L_006c6f4a:; BB(0x006c6f4a);
    /* 006c6f4a: mov dword ptr [ebp - 0x18c], 1 */ W32((u32)(r_ebp+0xfffffe74u), 0x1u);
    /* 006c6f54: mov dword ptr [ebp - 4], 0xa */ W32((u32)(r_ebp+0xfffffffcu), 0xau);
    /* 006c6f5b: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6f60: push 0x4da288 */ { u32 v = 0x4da288u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6f65: mov edx, dword ptr [ebp - 0x1a8] */ r_edx = R32((u32)(r_ebp+0xfffffe58u));
    /* 006c6f6b: mov dword ptr [ebp - 0x1f4], edx */ W32((u32)(r_ebp+0xfffffe0cu), r_edx);
    /* 006c6f71: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 006c6f73: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6f75: lea eax, [edx + 0x3e0] */ r_eax = (u32)(r_edx+0x3e0u);
    /* 006c6f7b: mov dword ptr [ebp - 0x1ec], eax */ W32((u32)(r_ebp+0xfffffe14u), r_eax);
    /* 006c6f81: add edx, 0x3e4 */ {  u32 a = r_edx; u32 b = 0x3e4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006c6f87: mov dword ptr [ebp - 0x1e4], eax */ W32((u32)(r_ebp+0xfffffe1cu), r_eax);
    /* 006c6f8d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006c6f8e: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x6c6f93u); f_00858736();
    /* 006c6f93: mov dword ptr [ebp - 4], 0xb */ W32((u32)(r_ebp+0xfffffffcu), 0xbu);
    /* 006c6f9a: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6f9f: push 0x4da288 */ { u32 v = 0x4da288u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6fa4: mov eax, dword ptr [ebp - 0x1e4] */ r_eax = R32((u32)(r_ebp+0xfffffe1cu));
    /* 006c6faa: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 006c6fac: add eax, 0x3c */ {  u32 a = r_eax; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006c6faf: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6fb1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c6fb2: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x6c6fb7u); f_00858736();
    /* 006c6fb7: mov eax, dword ptr [ebp - 0x1e4] */ r_eax = R32((u32)(r_ebp+0xfffffe1cu));
    /* 006c6fbd: mov dword ptr [eax], 0 */ W32((u32)(r_eax), 0x0u);
    /* 006c6fc3: mov dword ptr [ebp - 4], 0xc */ W32((u32)(r_ebp+0xfffffffcu), 0xcu);
    /* 006c6fca: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6fcf: push 0x4da288 */ { u32 v = 0x4da288u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6fd4: mov edx, dword ptr [ebp - 0x1ec] */ r_edx = R32((u32)(r_ebp+0xfffffe14u));
    /* 006c6fda: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 006c6fdc: lea eax, [edx + 0x74] */ r_eax = (u32)(r_edx+0x74u);
    /* 006c6fdf: add edx, 0x78 */ {  u32 a = r_edx; u32 b = 0x78u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006c6fe2: mov dword ptr [ebp - 0x1dc], eax */ W32((u32)(r_ebp+0xfffffe24u), r_eax);
    /* 006c6fe8: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6fea: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006c6feb: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x6c6ff0u); f_00858736();
    /* 006c6ff0: mov dword ptr [ebp - 4], 0xd */ W32((u32)(r_ebp+0xfffffffcu), 0xdu);
    /* 006c6ff7: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6ffc: push 0x4da288 */ { u32 v = 0x4da288u; r_esp -= 4; W32(r_esp, v); }
    /* 006c7001: mov eax, dword ptr [ebp - 0x1dc] */ r_eax = R32((u32)(r_ebp+0xfffffe24u));
    /* 006c7007: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 006c7009: add eax, 0x3c */ {  u32 a = r_eax; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006c700c: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c700e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c700f: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x6c7014u); f_00858736();
    /* 006c7014: mov eax, dword ptr [ebp - 0x1dc] */ r_eax = R32((u32)(r_ebp+0xfffffe24u));
    /* 006c701a: mov dword ptr [eax], 0 */ W32((u32)(r_eax), 0x0u);
    /* 006c7020: mov dword ptr [ebp - 4], 0xe */ W32((u32)(r_ebp+0xfffffffcu), 0xeu);
    /* 006c7027: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_006c7029:; BB(0x006c7029);
    /* 006c7029: mov edi, dword ptr [ebp - 0x1f4] */ r_edi = R32((u32)(r_ebp+0xfffffe0cu));
    /* 006c702f: lea edx, [ebx + ebx] */ r_edx = (u32)(r_ebx+r_ebx);
    /* 006c7032: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006c7034: lea esi, [edx + edx] */ r_esi = (u32)(r_edx+r_edx);
    /* 006c7037: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006c7039: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006c703b: sub esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 006c703d: mov byte ptr [esi + edi + 5], 0xff */ W8((u32)(r_esi+r_edi+0x5u), 0xffu);
    /* 006c7042: lea ecx, [edi + esi + 0xc] */ r_ecx = (u32)(r_edi+r_esi+0xcu);
    /* 006c7046: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c7048: mov byte ptr [esi + edi + 4], al */ W8((u32)(r_esi+r_edi+0x4u), (u8)r_eax);
    /* 006c704c: mov dword ptr [esi + edi + 8], eax */ W32((u32)(r_esi+r_edi+0x8u), r_eax);
    /* 006c7050: mov byte ptr [esi + edi + 7], al */ W8((u32)(r_esi+r_edi+0x7u), (u8)r_eax);
    /* 006c7054: mov byte ptr [esi + edi + 6], al */ W8((u32)(r_esi+r_edi+0x6u), (u8)r_eax);
    /* 006c7058: call 0x5d6a3c */ r_esp -= 4; W32(r_esp, 0x6c705du); f_005d6a3c();
    /* 006c705d: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006c7060: cmp ebx, 0x1e */ {  u32 a = r_ebx; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006c7063: jl 0x6c7029 */ if ((fS!=fO)) goto L_006c7029;
L_006c7065:; BB(0x006c7065);
    /* 006c7065: jmp 0x6c761e */ goto L_006c761e;
L_006c761e:; BB(0x006c761e);
    /* 006c761e: mov eax, dword ptr [ebp - 0x1a8] */ r_eax = R32((u32)(r_ebp+0xfffffe58u));
    /* 006c7624: mov dword ptr [ebp - 0x18c], 0 */ W32((u32)(r_ebp+0xfffffe74u), 0x0u);
L_006c762e:; BB(0x006c762e);
    /* 006c762e: mov dword ptr [0xa95dfc], eax */ W32((u32)(0xa95dfcu), r_eax);
    /* 006c7633: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006c763a: mov dword ptr [ebp - 0x188], 0 */ W32((u32)(r_ebp+0xfffffe78u), 0x0u);
    /* 006c7644: push 0x29c8 */ { u32 v = 0x29c8u; r_esp -= 4; W32(r_esp, v); }
    /* 006c7649: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6c764eu); f_008581c5();
    /* 006c764e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c764f: mov dword ptr [ebp - 0x1a0], eax */ W32((u32)(r_ebp+0xfffffe60u), r_eax);
    /* 006c7655: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c7657: je 0x6c76bb */ if (fZ) goto L_006c76bb;
L_006c7659:; BB(0x006c7659);
    /* 006c7659: mov dword ptr [ebp - 0x188], 1 */ W32((u32)(r_ebp+0xfffffe78u), 0x1u);
    /* 006c7663: mov dword ptr [ebp - 4], 0xf */ W32((u32)(r_ebp+0xfffffffcu), 0xfu);
    /* 006c766a: mov ebx, dword ptr [ebp - 0x1a0] */ r_ebx = R32((u32)(r_ebp+0xfffffe60u));
    /* 006c7670: add ebx, 0x224 */ {  u32 a = r_ebx; u32 b = 0x224u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006c7676: mov esi, 0xc8 */ r_esi = 0xc8u;
L_006c767b:; BB(0x006c767b);
    /* 006c767b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006c767d: call 0x6c8960 */ r_esp -= 4; W32(r_esp, 0x6c7682u); f_006c8960();
    /* 006c7682: add ebx, 0x18 */ {  u32 a = r_ebx; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006c7685: add esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_esi = r; fZ = (r == 0); }
    /* 006c7688: jne 0x6c767b */ if (!fZ) goto L_006c767b;
L_006c768a:; BB(0x006c768a);
    /* 006c768a: mov eax, dword ptr [ebp - 0x1a0] */ r_eax = R32((u32)(r_ebp+0xfffffe60u));
    /* 006c7690: mov dword ptr [ebp - 0x188], 0 */ W32((u32)(r_ebp+0xfffffe78u), 0x0u);
L_006c769a:; BB(0x006c769a);
    /* 006c769a: mov dword ptr [0xa95df8], eax */ W32((u32)(0xa95df8u), r_eax);
    /* 006c769f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006c76a6: push 0xd590 */ { u32 v = 0xd590u; r_esp -= 4; W32(r_esp, v); }
    /* 006c76ab: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6c76b0u); f_008581c5();
    /* 006c76b0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c76b1: mov dword ptr [0xa95df4], eax */ W32((u32)(0xa95df4u), r_eax);
    /* 006c76b6: jmp 0x6c6b1e */ goto L_006c6b1e;
L_006c76bb:; BB(0x006c76bb);
    /* 006c76bb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c76bd: jmp 0x6c769a */ goto L_006c769a;
L_006c76bf:; BB(0x006c76bf);
    /* 006c76bf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c76c1: jmp 0x6c762e */ goto L_006c762e;
L_006c76c6:; BB(0x006c76c6);
    /* 006c76c6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c76c8: jmp 0x6c6f1b */ goto L_006c6f1b;
L_006c76e2:; BB(0x006c76e2);
    /* 006c76e2: movsx eax, byte ptr [ebp - 0x22] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffdeu));
    /* 006c76e6: movsx esi, byte ptr [ebp - 0x21] */ r_esi = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffdfu));
    /* 006c76ea: movzx edi, byte ptr [ebp - 0x24] */ r_edi = (u32)R8((u32)(r_ebp+0xffffffdcu));
    /* 006c76ee: movsx edx, byte ptr [ebp - 0x23] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffddu));
    /* 006c76f2: movsx ebx, byte ptr [ebp - 0x20] */ r_ebx = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffe0u));
    /* 006c76f6: mov dword ptr [0xa95db0], 1 */ W32((u32)(0xa95db0u), 0x1u);
    /* 006c7700: shl edi, 0x18 */ { u32 c = (24u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 006c7703: shl edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 006c7706: or edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 006c7708: movsx edx, byte ptr [ebp - 0x1f] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffe1u));
    /* 006c770c: mov ecx, eax */ r_ecx = r_eax;
    /* 006c770e: shl ecx, 8 */ { u32 c = (8u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 006c7711: or edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 006c7713: or edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 006c7715: shl eax, 0x18 */ { u32 c = (24u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 006c7718: mov dword ptr [0xa95db8], edi */ W32((u32)(0xa95db8u), r_edi);
    /* 006c771e: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 006c7721: shl esi, 0x10 */ { u32 c = (16u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 006c7724: or eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006c7726: shl ebx, 8 */ { u32 c = (8u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 006c7729: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006c772c: or eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006c772e: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 006c7731: or eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006c7733: mov dword ptr [0xa95dbc], eax */ W32((u32)(0xa95dbcu), r_eax);
    /* 006c7738: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c773a: mov dword ptr [0xa95db4], eax */ W32((u32)(0xa95db4u), r_eax);
    /* 006c773f: mov dword ptr [0xa95dac], eax */ W32((u32)(0xa95dacu), r_eax);
    /* 006c7744: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006c7747: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006c774e: mov esp, ebp */ r_esp = r_ebp;
    /* 006c7750: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006c7751: ret  */ FN_RET(0x006c6e79); r_esp += 4; return;
}

void f_006c6f73(void)
{
    FN_ENTER(0x006c6f73);
    goto L_006c6f73;
L_006c6b1e:; BB(0x006c6b1e);
    /* 006c6b1e: push 0x4dc */ { u32 v = 0x4dcu; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b23: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b25: push dword ptr [0xa95dfc] */ { u32 v = R32((u32)(0xa95dfcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006c6b2b: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x6c6b30u); f_0086b688();
    /* 006c6b30: push 0x29c8 */ { u32 v = 0x29c8u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b35: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b37: push dword ptr [0xa95df8] */ { u32 v = R32((u32)(0xa95df8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c6b3d: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x6c6b42u); f_0086b688();
    /* 006c6b42: push 0xbaa4 */ { u32 v = 0xbaa4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b47: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b49: push dword ptr [0xa95e44] */ { u32 v = R32((u32)(0xa95e44u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c6b4f: call 0x86b5cc */ r_esp -= 4; W32(r_esp, 0x6c6b54u); f_0086b5cc();
    /* 006c6b54: push 0xaf0 */ { u32 v = 0xaf0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b59: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b5b: push dword ptr [0xa95df0] */ { u32 v = R32((u32)(0xa95df0u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c6b61: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x6c6b66u); f_0086b688();
    /* 006c6b66: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c6b69: call 0x6c78a0 */ r_esp -= 4; W32(r_esp, 0x6c6b6eu); f_006c78a0();
    /* 006c6b6e: mov dword ptr [0xa95dd4], 5 */ W32((u32)(0xa95dd4u), 0x5u);
    /* 006c6b78: mov dword ptr [0xa95dd0], 6 */ W32((u32)(0xa95dd0u), 0x6u);
    /* 006c6b82: mov dword ptr [0xa95dc8], 3 */ W32((u32)(0xa95dc8u), 0x3u);
    /* 006c6b8c: call 0x6c79c0 */ r_esp -= 4; W32(r_esp, 0x6c6b91u); f_006c79c0();
    /* 006c6b91: call 0x6c7988 */ r_esp -= 4; W32(r_esp, 0x6c6b96u); f_006c7988();
    /* 006c6b96: call 0x6c7950 */ r_esp -= 4; W32(r_esp, 0x6c6b9bu); f_006c7950();
    /* 006c6b9b: mov dword ptr [0xa95de0], 0 */ W32((u32)(0xa95de0u), 0x0u);
    /* 006c6ba5: call 0x415cec */ r_esp -= 4; W32(r_esp, 0x6c6baau); f_00415cec();
    /* 006c6baa: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 006c6bad: mov dword ptr [0xa95ddc], eax */ W32((u32)(0xa95ddcu), r_eax);
    /* 006c6bb2: call 0x415cec */ r_esp -= 4; W32(r_esp, 0x6c6bb7u); f_00415cec();
    /* 006c6bb7: mov edx, dword ptr [0xa95df0] */ r_edx = R32((u32)(0xa95df0u));
    /* 006c6bbd: mov ecx, dword ptr [edx + 0x110] */ r_ecx = R32((u32)(r_edx+0x110u));
    /* 006c6bc3: mov dword ptr [0xa95dc4], ecx */ W32((u32)(0xa95dc4u), r_ecx);
    /* 006c6bc9: mov dword ptr [0xa95dc0], ecx */ W32((u32)(0xa95dc0u), r_ecx);
    /* 006c6bcf: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 006c6bd2: mov dword ptr [0xa95dd8], eax */ W32((u32)(0xa95dd8u), r_eax);
    /* 006c6bd7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_006c6bd9:; BB(0x006c6bd9);
    /* 006c6bd9: mov byte ptr [ebp + eax - 0x24], 0 */ W8((u32)(r_ebp+r_eax+0xffffffdcu), 0x0u);
    /* 006c6bde: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006c6be1: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006c6be4: jl 0x6c6bd9 */ if ((fS!=fO)) goto L_006c6bd9;
L_006c6be6:; BB(0x006c6be6);
    /* 006c6be6: jmp 0x6c76e2 */ goto L_006c76e2;
L_006c6f73:; BB(0x006c6f73);
    /* 006c6f73: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6f75: lea eax, [edx + 0x3e0] */ r_eax = (u32)(r_edx+0x3e0u);
    /* 006c6f7b: mov dword ptr [ebp - 0x1ec], eax */ W32((u32)(r_ebp+0xfffffe14u), r_eax);
    /* 006c6f81: add edx, 0x3e4 */ {  u32 a = r_edx; u32 b = 0x3e4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006c6f87: mov dword ptr [ebp - 0x1e4], eax */ W32((u32)(r_ebp+0xfffffe1cu), r_eax);
    /* 006c6f8d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006c6f8e: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x6c6f93u); f_00858736();
    /* 006c6f93: mov dword ptr [ebp - 4], 0xb */ W32((u32)(r_ebp+0xfffffffcu), 0xbu);
    /* 006c6f9a: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6f9f: push 0x4da288 */ { u32 v = 0x4da288u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6fa4: mov eax, dword ptr [ebp - 0x1e4] */ r_eax = R32((u32)(r_ebp+0xfffffe1cu));
    /* 006c6faa: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 006c6fac: add eax, 0x3c */ {  u32 a = r_eax; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006c6faf: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6fb1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c6fb2: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x6c6fb7u); f_00858736();
    /* 006c6fb7: mov eax, dword ptr [ebp - 0x1e4] */ r_eax = R32((u32)(r_ebp+0xfffffe1cu));
    /* 006c6fbd: mov dword ptr [eax], 0 */ W32((u32)(r_eax), 0x0u);
    /* 006c6fc3: mov dword ptr [ebp - 4], 0xc */ W32((u32)(r_ebp+0xfffffffcu), 0xcu);
    /* 006c6fca: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6fcf: push 0x4da288 */ { u32 v = 0x4da288u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6fd4: mov edx, dword ptr [ebp - 0x1ec] */ r_edx = R32((u32)(r_ebp+0xfffffe14u));
    /* 006c6fda: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 006c6fdc: lea eax, [edx + 0x74] */ r_eax = (u32)(r_edx+0x74u);
    /* 006c6fdf: add edx, 0x78 */ {  u32 a = r_edx; u32 b = 0x78u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006c6fe2: mov dword ptr [ebp - 0x1dc], eax */ W32((u32)(r_ebp+0xfffffe24u), r_eax);
    /* 006c6fe8: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6fea: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006c6feb: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x6c6ff0u); f_00858736();
    /* 006c6ff0: mov dword ptr [ebp - 4], 0xd */ W32((u32)(r_ebp+0xfffffffcu), 0xdu);
    /* 006c6ff7: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6ffc: push 0x4da288 */ { u32 v = 0x4da288u; r_esp -= 4; W32(r_esp, v); }
    /* 006c7001: mov eax, dword ptr [ebp - 0x1dc] */ r_eax = R32((u32)(r_ebp+0xfffffe24u));
    /* 006c7007: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 006c7009: add eax, 0x3c */ {  u32 a = r_eax; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006c700c: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c700e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c700f: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x6c7014u); f_00858736();
    /* 006c7014: mov eax, dword ptr [ebp - 0x1dc] */ r_eax = R32((u32)(r_ebp+0xfffffe24u));
    /* 006c701a: mov dword ptr [eax], 0 */ W32((u32)(r_eax), 0x0u);
    /* 006c7020: mov dword ptr [ebp - 4], 0xe */ W32((u32)(r_ebp+0xfffffffcu), 0xeu);
    /* 006c7027: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_006c7029:; BB(0x006c7029);
    /* 006c7029: mov edi, dword ptr [ebp - 0x1f4] */ r_edi = R32((u32)(r_ebp+0xfffffe0cu));
    /* 006c702f: lea edx, [ebx + ebx] */ r_edx = (u32)(r_ebx+r_ebx);
    /* 006c7032: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006c7034: lea esi, [edx + edx] */ r_esi = (u32)(r_edx+r_edx);
    /* 006c7037: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006c7039: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006c703b: sub esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 006c703d: mov byte ptr [esi + edi + 5], 0xff */ W8((u32)(r_esi+r_edi+0x5u), 0xffu);
    /* 006c7042: lea ecx, [edi + esi + 0xc] */ r_ecx = (u32)(r_edi+r_esi+0xcu);
    /* 006c7046: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c7048: mov byte ptr [esi + edi + 4], al */ W8((u32)(r_esi+r_edi+0x4u), (u8)r_eax);
    /* 006c704c: mov dword ptr [esi + edi + 8], eax */ W32((u32)(r_esi+r_edi+0x8u), r_eax);
    /* 006c7050: mov byte ptr [esi + edi + 7], al */ W8((u32)(r_esi+r_edi+0x7u), (u8)r_eax);
    /* 006c7054: mov byte ptr [esi + edi + 6], al */ W8((u32)(r_esi+r_edi+0x6u), (u8)r_eax);
    /* 006c7058: call 0x5d6a3c */ r_esp -= 4; W32(r_esp, 0x6c705du); f_005d6a3c();
    /* 006c705d: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006c7060: cmp ebx, 0x1e */ {  u32 a = r_ebx; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006c7063: jl 0x6c7029 */ if ((fS!=fO)) goto L_006c7029;
L_006c7065:; BB(0x006c7065);
    /* 006c7065: jmp 0x6c761e */ goto L_006c761e;
L_006c761e:; BB(0x006c761e);
    /* 006c761e: mov eax, dword ptr [ebp - 0x1a8] */ r_eax = R32((u32)(r_ebp+0xfffffe58u));
    /* 006c7624: mov dword ptr [ebp - 0x18c], 0 */ W32((u32)(r_ebp+0xfffffe74u), 0x0u);
    /* 006c762e: mov dword ptr [0xa95dfc], eax */ W32((u32)(0xa95dfcu), r_eax);
    /* 006c7633: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006c763a: mov dword ptr [ebp - 0x188], 0 */ W32((u32)(r_ebp+0xfffffe78u), 0x0u);
    /* 006c7644: push 0x29c8 */ { u32 v = 0x29c8u; r_esp -= 4; W32(r_esp, v); }
    /* 006c7649: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6c764eu); f_008581c5();
    /* 006c764e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c764f: mov dword ptr [ebp - 0x1a0], eax */ W32((u32)(r_ebp+0xfffffe60u), r_eax);
    /* 006c7655: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c7657: je 0x6c76bb */ if (fZ) goto L_006c76bb;
L_006c7659:; BB(0x006c7659);
    /* 006c7659: mov dword ptr [ebp - 0x188], 1 */ W32((u32)(r_ebp+0xfffffe78u), 0x1u);
    /* 006c7663: mov dword ptr [ebp - 4], 0xf */ W32((u32)(r_ebp+0xfffffffcu), 0xfu);
    /* 006c766a: mov ebx, dword ptr [ebp - 0x1a0] */ r_ebx = R32((u32)(r_ebp+0xfffffe60u));
    /* 006c7670: add ebx, 0x224 */ {  u32 a = r_ebx; u32 b = 0x224u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006c7676: mov esi, 0xc8 */ r_esi = 0xc8u;
L_006c767b:; BB(0x006c767b);
    /* 006c767b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006c767d: call 0x6c8960 */ r_esp -= 4; W32(r_esp, 0x6c7682u); f_006c8960();
    /* 006c7682: add ebx, 0x18 */ {  u32 a = r_ebx; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006c7685: add esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_esi = r; fZ = (r == 0); }
    /* 006c7688: jne 0x6c767b */ if (!fZ) goto L_006c767b;
L_006c768a:; BB(0x006c768a);
    /* 006c768a: mov eax, dword ptr [ebp - 0x1a0] */ r_eax = R32((u32)(r_ebp+0xfffffe60u));
    /* 006c7690: mov dword ptr [ebp - 0x188], 0 */ W32((u32)(r_ebp+0xfffffe78u), 0x0u);
L_006c769a:; BB(0x006c769a);
    /* 006c769a: mov dword ptr [0xa95df8], eax */ W32((u32)(0xa95df8u), r_eax);
    /* 006c769f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006c76a6: push 0xd590 */ { u32 v = 0xd590u; r_esp -= 4; W32(r_esp, v); }
    /* 006c76ab: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6c76b0u); f_008581c5();
    /* 006c76b0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c76b1: mov dword ptr [0xa95df4], eax */ W32((u32)(0xa95df4u), r_eax);
    /* 006c76b6: jmp 0x6c6b1e */ goto L_006c6b1e;
L_006c76bb:; BB(0x006c76bb);
    /* 006c76bb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c76bd: jmp 0x6c769a */ goto L_006c769a;
L_006c76e2:; BB(0x006c76e2);
    /* 006c76e2: movsx eax, byte ptr [ebp - 0x22] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffdeu));
    /* 006c76e6: movsx esi, byte ptr [ebp - 0x21] */ r_esi = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffdfu));
    /* 006c76ea: movzx edi, byte ptr [ebp - 0x24] */ r_edi = (u32)R8((u32)(r_ebp+0xffffffdcu));
    /* 006c76ee: movsx edx, byte ptr [ebp - 0x23] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffddu));
    /* 006c76f2: movsx ebx, byte ptr [ebp - 0x20] */ r_ebx = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffe0u));
    /* 006c76f6: mov dword ptr [0xa95db0], 1 */ W32((u32)(0xa95db0u), 0x1u);
    /* 006c7700: shl edi, 0x18 */ { u32 c = (24u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 006c7703: shl edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 006c7706: or edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 006c7708: movsx edx, byte ptr [ebp - 0x1f] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffe1u));
    /* 006c770c: mov ecx, eax */ r_ecx = r_eax;
    /* 006c770e: shl ecx, 8 */ { u32 c = (8u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 006c7711: or edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 006c7713: or edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 006c7715: shl eax, 0x18 */ { u32 c = (24u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 006c7718: mov dword ptr [0xa95db8], edi */ W32((u32)(0xa95db8u), r_edi);
    /* 006c771e: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 006c7721: shl esi, 0x10 */ { u32 c = (16u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 006c7724: or eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006c7726: shl ebx, 8 */ { u32 c = (8u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 006c7729: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006c772c: or eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006c772e: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 006c7731: or eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006c7733: mov dword ptr [0xa95dbc], eax */ W32((u32)(0xa95dbcu), r_eax);
    /* 006c7738: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c773a: mov dword ptr [0xa95db4], eax */ W32((u32)(0xa95db4u), r_eax);
    /* 006c773f: mov dword ptr [0xa95dac], eax */ W32((u32)(0xa95dacu), r_eax);
    /* 006c7744: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006c7747: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006c774e: mov esp, ebp */ r_esp = r_ebp;
    /* 006c7750: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006c7751: ret  */ FN_RET(0x006c6f73); r_esp += 4; return;
}

