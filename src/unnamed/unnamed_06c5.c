#include "protos.h"

void f_006c50e3(void)
{
    FN_ENTER(0x006c50e3);
    /* 006c50e3: mov dword ptr [ebp - 0x94], 0 */ W32((u32)(r_ebp+0xffffff6cu), 0x0u);
    /* 006c50ed: push 0xaf0 */ { u32 v = 0xaf0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c50f2: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6c50f7u); f_008581c5();
    /* 006c50f7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c50f8: mov dword ptr [ebp - 0x198], eax */ W32((u32)(r_ebp+0xfffffe68u), r_eax);
    /* 006c50fe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c5100: je 0x6c7401 */ if (fZ) goto L_006c7401;
L_006c5106:; BB(0x006c5106);
    /* 006c5106: mov dword ptr [ebp - 0x94], 1 */ W32((u32)(r_ebp+0xffffff6cu), 0x1u);
    /* 006c5110: mov esi, dword ptr [ebp - 0x198] */ r_esi = R32((u32)(r_ebp+0xfffffe68u));
    /* 006c5116: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c5118: mov dword ptr [esi + 0x2b8], eax */ W32((u32)(r_esi+0x2b8u), r_eax);
    /* 006c511e: mov dword ptr [esi + 0x2bc], eax */ W32((u32)(r_esi+0x2bcu), r_eax);
    /* 006c5124: mov dword ptr [esi + 0x2c0], eax */ W32((u32)(r_esi+0x2c0u), r_eax);
    /* 006c512a: mov dword ptr [esi + 0x2c4], eax */ W32((u32)(r_esi+0x2c4u), r_eax);
    /* 006c5130: mov byte ptr [esi + 0x2c8], al */ W8((u32)(r_esi+0x2c8u), (u8)r_eax);
    /* 006c5136: mov byte ptr [esi + 0x2c9], al */ W8((u32)(r_esi+0x2c9u), (u8)r_eax);
    /* 006c513c: mov byte ptr [esi + 0x2ca], al */ W8((u32)(r_esi+0x2cau), (u8)r_eax);
    /* 006c5142: mov byte ptr [esi + 0x2cb], al */ W8((u32)(r_esi+0x2cbu), (u8)r_eax);
    /* 006c5148: mov word ptr [esi + 0x2cc], ax */ W16((u32)(r_esi+0x2ccu), (u16)r_eax);
    /* 006c514f: mov dword ptr [ebp - 0x94], eax */ W32((u32)(r_ebp+0xffffff6cu), r_eax);
    /* 006c5155: mov eax, dword ptr [ebp - 0x198] */ r_eax = R32((u32)(r_ebp+0xfffffe68u));
L_006c515b:; BB(0x006c515b);
    /* 006c515b: mov dword ptr [0xa95df0], eax */ W32((u32)(0xa95df0u), r_eax);
    /* 006c5160: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006c5167: push 0xd590 */ { u32 v = 0xd590u; r_esp -= 4; W32(r_esp, v); }
    /* 006c516c: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6c5171u); f_008581c5();
    /* 006c5171: mov dword ptr [ebp - 0x90], 0 */ W32((u32)(r_ebp+0xffffff70u), 0x0u);
    /* 006c517b: mov dword ptr [0xa95df4], eax */ W32((u32)(0xa95df4u), r_eax);
    /* 006c5180: push 0xbaa4 */ { u32 v = 0xbaa4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c5185: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6c518au); f_008581c5();
    /* 006c518a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c518d: mov dword ptr [ebp - 0x1b0], eax */ W32((u32)(r_ebp+0xfffffe50u), r_eax);
    /* 006c5193: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c5195: je 0x6c73fa */ if (fZ) goto L_006c73fa;
L_006c519b:; BB(0x006c519b);
    /* 006c519b: mov dword ptr [ebp - 0x90], 1 */ W32((u32)(r_ebp+0xffffff70u), 0x1u);
    /* 006c51a5: mov dword ptr [ebp - 4], 0x51 */ W32((u32)(r_ebp+0xfffffffcu), 0x51u);
    /* 006c51ac: push 0x6c1940 */ { u32 v = 0x6c1940u; r_esp -= 4; W32(r_esp, v); }
    /* 006c51b1: push 0x6c17f0 */ { u32 v = 0x6c17f0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c51b6: mov eax, dword ptr [ebp - 0x1b0] */ r_eax = R32((u32)(r_ebp+0xfffffe50u));
    /* 006c51bc: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c51be: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006c51c1: push 0x2ea4 */ { u32 v = 0x2ea4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c51c6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c51c7: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x6c51ccu); f_00858736();
    /* 006c51cc: mov eax, dword ptr [ebp - 0x1b0] */ r_eax = R32((u32)(r_ebp+0xfffffe50u));
    /* 006c51d2: mov dword ptr [ebp - 0x90], 0 */ W32((u32)(r_ebp+0xffffff70u), 0x0u);
L_006c51dc:; BB(0x006c51dc);
    /* 006c51dc: mov dword ptr [0xa95e44], eax */ W32((u32)(0xa95e44u), r_eax);
    /* 006c51e1: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006c51e8: mov dword ptr [ebp - 0x8c], 0 */ W32((u32)(r_ebp+0xffffff74u), 0x0u);
    /* 006c51f2: push 0x4dc */ { u32 v = 0x4dcu; r_esp -= 4; W32(r_esp, v); }
    /* 006c51f7: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6c51fcu); f_008581c5();
    /* 006c51fc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c51fd: mov dword ptr [ebp - 0x1a8], eax */ W32((u32)(r_ebp+0xfffffe58u), r_eax);
    /* 006c5203: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c5205: je 0x6c73f3 */ if (fZ) goto L_006c73f3;
L_006c520b:; BB(0x006c520b);
    /* 006c520b: mov dword ptr [ebp - 0x8c], 1 */ W32((u32)(r_ebp+0xffffff74u), 0x1u);
    /* 006c5215: mov dword ptr [ebp - 4], 0x52 */ W32((u32)(r_ebp+0xfffffffcu), 0x52u);
    /* 006c521c: mov ecx, dword ptr [ebp - 0x1a8] */ r_ecx = R32((u32)(r_ebp+0xfffffe58u));
    /* 006c5222: call 0x6c454c */ r_esp -= 4; W32(r_esp, 0x6c5227u); f_006c454c();
    /* 006c5227: mov eax, dword ptr [ebp - 0x1a8] */ r_eax = R32((u32)(r_ebp+0xfffffe58u));
    /* 006c522d: mov dword ptr [ebp - 0x8c], 0 */ W32((u32)(r_ebp+0xffffff74u), 0x0u);
L_006c5237:; BB(0x006c5237);
    /* 006c5237: mov dword ptr [0xa95dfc], eax */ W32((u32)(0xa95dfcu), r_eax);
    /* 006c523c: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006c5243: mov dword ptr [ebp - 0x88], 0 */ W32((u32)(r_ebp+0xffffff78u), 0x0u);
    /* 006c524d: push 0x29c8 */ { u32 v = 0x29c8u; r_esp -= 4; W32(r_esp, v); }
    /* 006c5252: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6c5257u); f_008581c5();
    /* 006c5257: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c5258: mov dword ptr [ebp - 0x1a0], eax */ W32((u32)(r_ebp+0xfffffe60u), r_eax);
    /* 006c525e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c5260: je 0x6c73ec */ if (fZ) goto L_006c73ec;
L_006c5266:; BB(0x006c5266);
    /* 006c5266: mov dword ptr [ebp - 0x88], 1 */ W32((u32)(r_ebp+0xffffff78u), 0x1u);
    /* 006c5270: mov dword ptr [ebp - 4], 0x53 */ W32((u32)(r_ebp+0xfffffffcu), 0x53u);
    /* 006c5277: mov ecx, dword ptr [ebp - 0x1a0] */ r_ecx = R32((u32)(r_ebp+0xfffffe60u));
    /* 006c527d: call 0x6c4674 */ r_esp -= 4; W32(r_esp, 0x6c5282u); f_006c4674();
    /* 006c5282: mov eax, dword ptr [ebp - 0x1a0] */ r_eax = R32((u32)(r_ebp+0xfffffe60u));
    /* 006c5288: mov dword ptr [ebp - 0x88], 0 */ W32((u32)(r_ebp+0xffffff78u), 0x0u);
L_006c5292:; BB(0x006c5292);
    /* 006c5292: mov dword ptr [0xa95df8], eax */ W32((u32)(0xa95df8u), r_eax);
    /* 006c5297: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006c529e: jmp 0x6c6b1e */ goto L_006c6b1e;
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
L_006c73ec:; BB(0x006c73ec);
    /* 006c73ec: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c73ee: jmp 0x6c5292 */ goto L_006c5292;
L_006c73f3:; BB(0x006c73f3);
    /* 006c73f3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c73f5: jmp 0x6c5237 */ goto L_006c5237;
L_006c73fa:; BB(0x006c73fa);
    /* 006c73fa: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c73fc: jmp 0x6c51dc */ goto L_006c51dc;
L_006c7401:; BB(0x006c7401);
    /* 006c7401: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c7403: jmp 0x6c515b */ goto L_006c515b;
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
    /* 006c7751: ret  */ FN_RET(0x006c50e3); r_esp += 4; return;
}

void f_006c52a3(void)
{
    FN_ENTER(0x006c52a3);
    /* 006c52a3: mov dword ptr [ebp - 0xa4], 0 */ W32((u32)(r_ebp+0xffffff5cu), 0x0u);
    /* 006c52ad: push 0xaf0 */ { u32 v = 0xaf0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c52b2: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6c52b7u); f_008581c5();
    /* 006c52b7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c52b8: mov dword ptr [ebp - 0x198], eax */ W32((u32)(r_ebp+0xfffffe68u), r_eax);
    /* 006c52be: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c52c0: je 0x6c741d */ if (fZ) goto L_006c741d;
L_006c52c6:; BB(0x006c52c6);
    /* 006c52c6: mov dword ptr [ebp - 0xa4], 1 */ W32((u32)(r_ebp+0xffffff5cu), 0x1u);
    /* 006c52d0: mov esi, dword ptr [ebp - 0x198] */ r_esi = R32((u32)(r_ebp+0xfffffe68u));
    /* 006c52d6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c52d8: mov dword ptr [esi + 0x2b8], eax */ W32((u32)(r_esi+0x2b8u), r_eax);
    /* 006c52de: mov dword ptr [esi + 0x2bc], eax */ W32((u32)(r_esi+0x2bcu), r_eax);
    /* 006c52e4: mov dword ptr [esi + 0x2c0], eax */ W32((u32)(r_esi+0x2c0u), r_eax);
    /* 006c52ea: mov dword ptr [esi + 0x2c4], eax */ W32((u32)(r_esi+0x2c4u), r_eax);
    /* 006c52f0: mov byte ptr [esi + 0x2c8], al */ W8((u32)(r_esi+0x2c8u), (u8)r_eax);
    /* 006c52f6: mov byte ptr [esi + 0x2c9], al */ W8((u32)(r_esi+0x2c9u), (u8)r_eax);
    /* 006c52fc: mov byte ptr [esi + 0x2ca], al */ W8((u32)(r_esi+0x2cau), (u8)r_eax);
    /* 006c5302: mov byte ptr [esi + 0x2cb], al */ W8((u32)(r_esi+0x2cbu), (u8)r_eax);
    /* 006c5308: mov word ptr [esi + 0x2cc], ax */ W16((u32)(r_esi+0x2ccu), (u16)r_eax);
    /* 006c530f: mov dword ptr [ebp - 0xa4], eax */ W32((u32)(r_ebp+0xffffff5cu), r_eax);
    /* 006c5315: mov eax, dword ptr [ebp - 0x198] */ r_eax = R32((u32)(r_ebp+0xfffffe68u));
L_006c531b:; BB(0x006c531b);
    /* 006c531b: mov dword ptr [0xa95df0], eax */ W32((u32)(0xa95df0u), r_eax);
    /* 006c5320: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006c5327: mov dword ptr [ebp - 0xa0], 0 */ W32((u32)(r_ebp+0xffffff60u), 0x0u);
    /* 006c5331: push 0xbaa4 */ { u32 v = 0xbaa4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c5336: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6c533bu); f_008581c5();
    /* 006c533b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c533c: mov dword ptr [ebp - 0x1b0], eax */ W32((u32)(r_ebp+0xfffffe50u), r_eax);
    /* 006c5342: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c5344: je 0x6c7416 */ if (fZ) goto L_006c7416;
L_006c534a:; BB(0x006c534a);
    /* 006c534a: mov dword ptr [ebp - 0xa0], 1 */ W32((u32)(r_ebp+0xffffff60u), 0x1u);
    /* 006c5354: mov dword ptr [ebp - 4], 0x4d */ W32((u32)(r_ebp+0xfffffffcu), 0x4du);
    /* 006c535b: push 0x6c1940 */ { u32 v = 0x6c1940u; r_esp -= 4; W32(r_esp, v); }
    /* 006c5360: push 0x6c17f0 */ { u32 v = 0x6c17f0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c5365: mov eax, dword ptr [ebp - 0x1b0] */ r_eax = R32((u32)(r_ebp+0xfffffe50u));
    /* 006c536b: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c536d: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006c5370: push 0x2ea4 */ { u32 v = 0x2ea4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c5375: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c5376: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x6c537bu); f_00858736();
    /* 006c537b: mov eax, dword ptr [ebp - 0x1b0] */ r_eax = R32((u32)(r_ebp+0xfffffe50u));
    /* 006c5381: mov dword ptr [ebp - 0xa0], 0 */ W32((u32)(r_ebp+0xffffff60u), 0x0u);
L_006c538b:; BB(0x006c538b);
    /* 006c538b: mov dword ptr [0xa95e44], eax */ W32((u32)(0xa95e44u), r_eax);
    /* 006c5390: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006c5397: push 0xd590 */ { u32 v = 0xd590u; r_esp -= 4; W32(r_esp, v); }
    /* 006c539c: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6c53a1u); f_008581c5();
    /* 006c53a1: mov dword ptr [ebp - 0x9c], 0 */ W32((u32)(r_ebp+0xffffff64u), 0x0u);
    /* 006c53ab: mov dword ptr [0xa95df4], eax */ W32((u32)(0xa95df4u), r_eax);
    /* 006c53b0: push 0x4dc */ { u32 v = 0x4dcu; r_esp -= 4; W32(r_esp, v); }
    /* 006c53b5: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6c53bau); f_008581c5();
    /* 006c53ba: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c53bd: mov dword ptr [ebp - 0x1a8], eax */ W32((u32)(r_ebp+0xfffffe58u), r_eax);
    /* 006c53c3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c53c5: je 0x6c740f */ if (fZ) goto L_006c740f;
L_006c53cb:; BB(0x006c53cb);
    /* 006c53cb: mov dword ptr [ebp - 0x9c], 1 */ W32((u32)(r_ebp+0xffffff64u), 0x1u);
    /* 006c53d5: mov dword ptr [ebp - 4], 0x4e */ W32((u32)(r_ebp+0xfffffffcu), 0x4eu);
    /* 006c53dc: mov ecx, dword ptr [ebp - 0x1a8] */ r_ecx = R32((u32)(r_ebp+0xfffffe58u));
    /* 006c53e2: call 0x6c454c */ r_esp -= 4; W32(r_esp, 0x6c53e7u); f_006c454c();
    /* 006c53e7: mov eax, dword ptr [ebp - 0x1a8] */ r_eax = R32((u32)(r_ebp+0xfffffe58u));
    /* 006c53ed: mov dword ptr [ebp - 0x9c], 0 */ W32((u32)(r_ebp+0xffffff64u), 0x0u);
L_006c53f7:; BB(0x006c53f7);
    /* 006c53f7: mov dword ptr [0xa95dfc], eax */ W32((u32)(0xa95dfcu), r_eax);
    /* 006c53fc: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006c5403: mov dword ptr [ebp - 0x98], 0 */ W32((u32)(r_ebp+0xffffff68u), 0x0u);
    /* 006c540d: push 0x29c8 */ { u32 v = 0x29c8u; r_esp -= 4; W32(r_esp, v); }
    /* 006c5412: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6c5417u); f_008581c5();
    /* 006c5417: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c5418: mov dword ptr [ebp - 0x1a0], eax */ W32((u32)(r_ebp+0xfffffe60u), r_eax);
    /* 006c541e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c5420: je 0x6c7408 */ if (fZ) goto L_006c7408;
L_006c5426:; BB(0x006c5426);
    /* 006c5426: mov dword ptr [ebp - 0x98], 1 */ W32((u32)(r_ebp+0xffffff68u), 0x1u);
    /* 006c5430: mov dword ptr [ebp - 4], 0x4f */ W32((u32)(r_ebp+0xfffffffcu), 0x4fu);
    /* 006c5437: mov ecx, dword ptr [ebp - 0x1a0] */ r_ecx = R32((u32)(r_ebp+0xfffffe60u));
    /* 006c543d: call 0x6c4674 */ r_esp -= 4; W32(r_esp, 0x6c5442u); f_006c4674();
    /* 006c5442: mov eax, dword ptr [ebp - 0x1a0] */ r_eax = R32((u32)(r_ebp+0xfffffe60u));
    /* 006c5448: mov dword ptr [ebp - 0x98], 0 */ W32((u32)(r_ebp+0xffffff68u), 0x0u);
L_006c5452:; BB(0x006c5452);
    /* 006c5452: mov dword ptr [0xa95df8], eax */ W32((u32)(0xa95df8u), r_eax);
    /* 006c5457: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006c545e: jmp 0x6c6b1e */ goto L_006c6b1e;
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
L_006c7408:; BB(0x006c7408);
    /* 006c7408: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c740a: jmp 0x6c5452 */ goto L_006c5452;
L_006c740f:; BB(0x006c740f);
    /* 006c740f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c7411: jmp 0x6c53f7 */ goto L_006c53f7;
L_006c7416:; BB(0x006c7416);
    /* 006c7416: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c7418: jmp 0x6c538b */ goto L_006c538b;
L_006c741d:; BB(0x006c741d);
    /* 006c741d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c741f: jmp 0x6c531b */ goto L_006c531b;
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
    /* 006c7751: ret  */ FN_RET(0x006c52a3); r_esp += 4; return;
}

void f_006c5463(void)
{
    FN_ENTER(0x006c5463);
    /* 006c5463: mov dword ptr [ebp - 0xb4], 0 */ W32((u32)(r_ebp+0xffffff4cu), 0x0u);
    /* 006c546d: push 0xaf0 */ { u32 v = 0xaf0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c5472: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6c5477u); f_008581c5();
    /* 006c5477: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c5478: mov dword ptr [ebp - 0x198], eax */ W32((u32)(r_ebp+0xfffffe68u), r_eax);
    /* 006c547e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c5480: je 0x6c7439 */ if (fZ) goto L_006c7439;
L_006c5486:; BB(0x006c5486);
    /* 006c5486: mov dword ptr [ebp - 0xb4], 1 */ W32((u32)(r_ebp+0xffffff4cu), 0x1u);
    /* 006c5490: mov esi, dword ptr [ebp - 0x198] */ r_esi = R32((u32)(r_ebp+0xfffffe68u));
    /* 006c5496: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c5498: mov dword ptr [esi + 0x2b8], eax */ W32((u32)(r_esi+0x2b8u), r_eax);
    /* 006c549e: mov dword ptr [esi + 0x2bc], eax */ W32((u32)(r_esi+0x2bcu), r_eax);
    /* 006c54a4: mov dword ptr [esi + 0x2c0], eax */ W32((u32)(r_esi+0x2c0u), r_eax);
    /* 006c54aa: mov dword ptr [esi + 0x2c4], eax */ W32((u32)(r_esi+0x2c4u), r_eax);
    /* 006c54b0: mov byte ptr [esi + 0x2c8], al */ W8((u32)(r_esi+0x2c8u), (u8)r_eax);
    /* 006c54b6: mov byte ptr [esi + 0x2c9], al */ W8((u32)(r_esi+0x2c9u), (u8)r_eax);
    /* 006c54bc: mov byte ptr [esi + 0x2ca], al */ W8((u32)(r_esi+0x2cau), (u8)r_eax);
    /* 006c54c2: mov byte ptr [esi + 0x2cb], al */ W8((u32)(r_esi+0x2cbu), (u8)r_eax);
    /* 006c54c8: mov word ptr [esi + 0x2cc], ax */ W16((u32)(r_esi+0x2ccu), (u16)r_eax);
    /* 006c54cf: mov dword ptr [ebp - 0xb4], eax */ W32((u32)(r_ebp+0xffffff4cu), r_eax);
    /* 006c54d5: mov eax, dword ptr [ebp - 0x198] */ r_eax = R32((u32)(r_ebp+0xfffffe68u));
L_006c54db:; BB(0x006c54db);
    /* 006c54db: mov dword ptr [0xa95df0], eax */ W32((u32)(0xa95df0u), r_eax);
    /* 006c54e0: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006c54e7: push 0xd590 */ { u32 v = 0xd590u; r_esp -= 4; W32(r_esp, v); }
    /* 006c54ec: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6c54f1u); f_008581c5();
    /* 006c54f1: mov dword ptr [ebp - 0xb0], 0 */ W32((u32)(r_ebp+0xffffff50u), 0x0u);
    /* 006c54fb: mov dword ptr [0xa95df4], eax */ W32((u32)(0xa95df4u), r_eax);
    /* 006c5500: push 0xbaa4 */ { u32 v = 0xbaa4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c5505: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6c550au); f_008581c5();
    /* 006c550a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c550d: mov dword ptr [ebp - 0x1b0], eax */ W32((u32)(r_ebp+0xfffffe50u), r_eax);
    /* 006c5513: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c5515: je 0x6c7432 */ if (fZ) goto L_006c7432;
L_006c551b:; BB(0x006c551b);
    /* 006c551b: mov dword ptr [ebp - 0xb0], 1 */ W32((u32)(r_ebp+0xffffff50u), 0x1u);
    /* 006c5525: mov dword ptr [ebp - 4], 0x49 */ W32((u32)(r_ebp+0xfffffffcu), 0x49u);
    /* 006c552c: push 0x6c1940 */ { u32 v = 0x6c1940u; r_esp -= 4; W32(r_esp, v); }
    /* 006c5531: push 0x6c17f0 */ { u32 v = 0x6c17f0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c5536: mov eax, dword ptr [ebp - 0x1b0] */ r_eax = R32((u32)(r_ebp+0xfffffe50u));
    /* 006c553c: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c553e: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006c5541: push 0x2ea4 */ { u32 v = 0x2ea4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c5546: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c5547: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x6c554cu); f_00858736();
    /* 006c554c: mov eax, dword ptr [ebp - 0x1b0] */ r_eax = R32((u32)(r_ebp+0xfffffe50u));
    /* 006c5552: mov dword ptr [ebp - 0xb0], 0 */ W32((u32)(r_ebp+0xffffff50u), 0x0u);
L_006c555c:; BB(0x006c555c);
    /* 006c555c: mov dword ptr [0xa95e44], eax */ W32((u32)(0xa95e44u), r_eax);
    /* 006c5561: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006c5568: mov dword ptr [ebp - 0xac], 0 */ W32((u32)(r_ebp+0xffffff54u), 0x0u);
    /* 006c5572: push 0x4dc */ { u32 v = 0x4dcu; r_esp -= 4; W32(r_esp, v); }
    /* 006c5577: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6c557cu); f_008581c5();
    /* 006c557c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c557d: mov dword ptr [ebp - 0x1a8], eax */ W32((u32)(r_ebp+0xfffffe58u), r_eax);
    /* 006c5583: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c5585: je 0x6c742b */ if (fZ) goto L_006c742b;
L_006c558b:; BB(0x006c558b);
    /* 006c558b: mov dword ptr [ebp - 0xac], 1 */ W32((u32)(r_ebp+0xffffff54u), 0x1u);
    /* 006c5595: mov dword ptr [ebp - 4], 0x4a */ W32((u32)(r_ebp+0xfffffffcu), 0x4au);
    /* 006c559c: mov ecx, dword ptr [ebp - 0x1a8] */ r_ecx = R32((u32)(r_ebp+0xfffffe58u));
    /* 006c55a2: call 0x6c454c */ r_esp -= 4; W32(r_esp, 0x6c55a7u); f_006c454c();
    /* 006c55a7: mov eax, dword ptr [ebp - 0x1a8] */ r_eax = R32((u32)(r_ebp+0xfffffe58u));
    /* 006c55ad: mov dword ptr [ebp - 0xac], 0 */ W32((u32)(r_ebp+0xffffff54u), 0x0u);
L_006c55b7:; BB(0x006c55b7);
    /* 006c55b7: mov dword ptr [0xa95dfc], eax */ W32((u32)(0xa95dfcu), r_eax);
    /* 006c55bc: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006c55c3: mov dword ptr [ebp - 0xa8], 0 */ W32((u32)(r_ebp+0xffffff58u), 0x0u);
    /* 006c55cd: push 0x29c8 */ { u32 v = 0x29c8u; r_esp -= 4; W32(r_esp, v); }
    /* 006c55d2: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6c55d7u); f_008581c5();
    /* 006c55d7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c55d8: mov dword ptr [ebp - 0x1a0], eax */ W32((u32)(r_ebp+0xfffffe60u), r_eax);
    /* 006c55de: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c55e0: je 0x6c7424 */ if (fZ) goto L_006c7424;
L_006c55e6:; BB(0x006c55e6);
    /* 006c55e6: mov dword ptr [ebp - 0xa8], 1 */ W32((u32)(r_ebp+0xffffff58u), 0x1u);
    /* 006c55f0: mov dword ptr [ebp - 4], 0x4b */ W32((u32)(r_ebp+0xfffffffcu), 0x4bu);
    /* 006c55f7: mov ecx, dword ptr [ebp - 0x1a0] */ r_ecx = R32((u32)(r_ebp+0xfffffe60u));
    /* 006c55fd: call 0x6c4674 */ r_esp -= 4; W32(r_esp, 0x6c5602u); f_006c4674();
    /* 006c5602: mov eax, dword ptr [ebp - 0x1a0] */ r_eax = R32((u32)(r_ebp+0xfffffe60u));
    /* 006c5608: mov dword ptr [ebp - 0xa8], 0 */ W32((u32)(r_ebp+0xffffff58u), 0x0u);
L_006c5612:; BB(0x006c5612);
    /* 006c5612: mov dword ptr [0xa95df8], eax */ W32((u32)(0xa95df8u), r_eax);
    /* 006c5617: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006c561e: jmp 0x6c6b1e */ goto L_006c6b1e;
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
L_006c7424:; BB(0x006c7424);
    /* 006c7424: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c7426: jmp 0x6c5612 */ goto L_006c5612;
L_006c742b:; BB(0x006c742b);
    /* 006c742b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c742d: jmp 0x6c55b7 */ goto L_006c55b7;
L_006c7432:; BB(0x006c7432);
    /* 006c7432: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c7434: jmp 0x6c555c */ goto L_006c555c;
L_006c7439:; BB(0x006c7439);
    /* 006c7439: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c743b: jmp 0x6c54db */ goto L_006c54db;
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
    /* 006c7751: ret  */ FN_RET(0x006c5463); r_esp += 4; return;
}

void f_006c5623(void)
{
    FN_ENTER(0x006c5623);
    /* 006c5623: mov dword ptr [ebp - 0xc4], 0 */ W32((u32)(r_ebp+0xffffff3cu), 0x0u);
    /* 006c562d: push 0xaf0 */ { u32 v = 0xaf0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c5632: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6c5637u); f_008581c5();
    /* 006c5637: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c5638: mov dword ptr [ebp - 0x198], eax */ W32((u32)(r_ebp+0xfffffe68u), r_eax);
    /* 006c563e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c5640: je 0x6c7455 */ if (fZ) goto L_006c7455;
L_006c5646:; BB(0x006c5646);
    /* 006c5646: mov dword ptr [ebp - 0xc4], 1 */ W32((u32)(r_ebp+0xffffff3cu), 0x1u);
    /* 006c5650: mov esi, dword ptr [ebp - 0x198] */ r_esi = R32((u32)(r_ebp+0xfffffe68u));
    /* 006c5656: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c5658: mov dword ptr [esi + 0x2b8], eax */ W32((u32)(r_esi+0x2b8u), r_eax);
    /* 006c565e: mov dword ptr [esi + 0x2bc], eax */ W32((u32)(r_esi+0x2bcu), r_eax);
    /* 006c5664: mov dword ptr [esi + 0x2c0], eax */ W32((u32)(r_esi+0x2c0u), r_eax);
    /* 006c566a: mov dword ptr [esi + 0x2c4], eax */ W32((u32)(r_esi+0x2c4u), r_eax);
    /* 006c5670: mov byte ptr [esi + 0x2c8], al */ W8((u32)(r_esi+0x2c8u), (u8)r_eax);
    /* 006c5676: mov byte ptr [esi + 0x2c9], al */ W8((u32)(r_esi+0x2c9u), (u8)r_eax);
    /* 006c567c: mov byte ptr [esi + 0x2ca], al */ W8((u32)(r_esi+0x2cau), (u8)r_eax);
    /* 006c5682: mov byte ptr [esi + 0x2cb], al */ W8((u32)(r_esi+0x2cbu), (u8)r_eax);
    /* 006c5688: mov word ptr [esi + 0x2cc], ax */ W16((u32)(r_esi+0x2ccu), (u16)r_eax);
    /* 006c568f: mov dword ptr [ebp - 0xc4], eax */ W32((u32)(r_ebp+0xffffff3cu), r_eax);
    /* 006c5695: mov eax, dword ptr [ebp - 0x198] */ r_eax = R32((u32)(r_ebp+0xfffffe68u));
L_006c569b:; BB(0x006c569b);
    /* 006c569b: mov dword ptr [0xa95df0], eax */ W32((u32)(0xa95df0u), r_eax);
    /* 006c56a0: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006c56a7: mov dword ptr [ebp - 0xc0], 0 */ W32((u32)(r_ebp+0xffffff40u), 0x0u);
    /* 006c56b1: push 0xbaa4 */ { u32 v = 0xbaa4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c56b6: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6c56bbu); f_008581c5();
    /* 006c56bb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c56bc: mov dword ptr [ebp - 0x1b0], eax */ W32((u32)(r_ebp+0xfffffe50u), r_eax);
    /* 006c56c2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c56c4: je 0x6c744e */ if (fZ) goto L_006c744e;
L_006c56ca:; BB(0x006c56ca);
    /* 006c56ca: mov dword ptr [ebp - 0xc0], 1 */ W32((u32)(r_ebp+0xffffff40u), 0x1u);
    /* 006c56d4: mov dword ptr [ebp - 4], 0x45 */ W32((u32)(r_ebp+0xfffffffcu), 0x45u);
    /* 006c56db: push 0x6c1940 */ { u32 v = 0x6c1940u; r_esp -= 4; W32(r_esp, v); }
    /* 006c56e0: push 0x6c17f0 */ { u32 v = 0x6c17f0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c56e5: mov eax, dword ptr [ebp - 0x1b0] */ r_eax = R32((u32)(r_ebp+0xfffffe50u));
    /* 006c56eb: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c56ed: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006c56f0: push 0x2ea4 */ { u32 v = 0x2ea4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c56f5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c56f6: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x6c56fbu); f_00858736();
    /* 006c56fb: mov eax, dword ptr [ebp - 0x1b0] */ r_eax = R32((u32)(r_ebp+0xfffffe50u));
    /* 006c5701: mov dword ptr [ebp - 0xc0], 0 */ W32((u32)(r_ebp+0xffffff40u), 0x0u);
L_006c570b:; BB(0x006c570b);
    /* 006c570b: mov dword ptr [0xa95e44], eax */ W32((u32)(0xa95e44u), r_eax);
    /* 006c5710: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006c5717: push 0xd590 */ { u32 v = 0xd590u; r_esp -= 4; W32(r_esp, v); }
    /* 006c571c: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6c5721u); f_008581c5();
    /* 006c5721: mov dword ptr [ebp - 0xbc], 0 */ W32((u32)(r_ebp+0xffffff44u), 0x0u);
    /* 006c572b: mov dword ptr [0xa95df4], eax */ W32((u32)(0xa95df4u), r_eax);
    /* 006c5730: push 0x4dc */ { u32 v = 0x4dcu; r_esp -= 4; W32(r_esp, v); }
    /* 006c5735: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6c573au); f_008581c5();
    /* 006c573a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c573d: mov dword ptr [ebp - 0x1a8], eax */ W32((u32)(r_ebp+0xfffffe58u), r_eax);
    /* 006c5743: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c5745: je 0x6c7447 */ if (fZ) goto L_006c7447;
L_006c574b:; BB(0x006c574b);
    /* 006c574b: mov dword ptr [ebp - 0xbc], 1 */ W32((u32)(r_ebp+0xffffff44u), 0x1u);
    /* 006c5755: mov dword ptr [ebp - 4], 0x46 */ W32((u32)(r_ebp+0xfffffffcu), 0x46u);
    /* 006c575c: mov ecx, dword ptr [ebp - 0x1a8] */ r_ecx = R32((u32)(r_ebp+0xfffffe58u));
    /* 006c5762: call 0x6c454c */ r_esp -= 4; W32(r_esp, 0x6c5767u); f_006c454c();
    /* 006c5767: mov eax, dword ptr [ebp - 0x1a8] */ r_eax = R32((u32)(r_ebp+0xfffffe58u));
    /* 006c576d: mov dword ptr [ebp - 0xbc], 0 */ W32((u32)(r_ebp+0xffffff44u), 0x0u);
L_006c5777:; BB(0x006c5777);
    /* 006c5777: mov dword ptr [0xa95dfc], eax */ W32((u32)(0xa95dfcu), r_eax);
    /* 006c577c: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006c5783: mov dword ptr [ebp - 0xb8], 0 */ W32((u32)(r_ebp+0xffffff48u), 0x0u);
    /* 006c578d: push 0x29c8 */ { u32 v = 0x29c8u; r_esp -= 4; W32(r_esp, v); }
    /* 006c5792: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6c5797u); f_008581c5();
    /* 006c5797: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c5798: mov dword ptr [ebp - 0x1a0], eax */ W32((u32)(r_ebp+0xfffffe60u), r_eax);
    /* 006c579e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c57a0: je 0x6c7440 */ if (fZ) goto L_006c7440;
L_006c57a6:; BB(0x006c57a6);
    /* 006c57a6: mov dword ptr [ebp - 0xb8], 1 */ W32((u32)(r_ebp+0xffffff48u), 0x1u);
    /* 006c57b0: mov dword ptr [ebp - 4], 0x47 */ W32((u32)(r_ebp+0xfffffffcu), 0x47u);
    /* 006c57b7: mov ecx, dword ptr [ebp - 0x1a0] */ r_ecx = R32((u32)(r_ebp+0xfffffe60u));
    /* 006c57bd: call 0x6c4674 */ r_esp -= 4; W32(r_esp, 0x6c57c2u); f_006c4674();
    /* 006c57c2: mov eax, dword ptr [ebp - 0x1a0] */ r_eax = R32((u32)(r_ebp+0xfffffe60u));
    /* 006c57c8: mov dword ptr [ebp - 0xb8], 0 */ W32((u32)(r_ebp+0xffffff48u), 0x0u);
L_006c57d2:; BB(0x006c57d2);
    /* 006c57d2: mov dword ptr [0xa95df8], eax */ W32((u32)(0xa95df8u), r_eax);
    /* 006c57d7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006c57de: jmp 0x6c6b1e */ goto L_006c6b1e;
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
L_006c7440:; BB(0x006c7440);
    /* 006c7440: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c7442: jmp 0x6c57d2 */ goto L_006c57d2;
L_006c7447:; BB(0x006c7447);
    /* 006c7447: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c7449: jmp 0x6c5777 */ goto L_006c5777;
L_006c744e:; BB(0x006c744e);
    /* 006c744e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c7450: jmp 0x6c570b */ goto L_006c570b;
L_006c7455:; BB(0x006c7455);
    /* 006c7455: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c7457: jmp 0x6c569b */ goto L_006c569b;
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
    /* 006c7751: ret  */ FN_RET(0x006c5623); r_esp += 4; return;
}

void f_006c57e3(void)
{
    FN_ENTER(0x006c57e3);
    /* 006c57e3: mov dword ptr [ebp - 0xd4], 0 */ W32((u32)(r_ebp+0xffffff2cu), 0x0u);
    /* 006c57ed: push 0xaf0 */ { u32 v = 0xaf0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c57f2: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6c57f7u); f_008581c5();
    /* 006c57f7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c57f8: mov dword ptr [ebp - 0x198], eax */ W32((u32)(r_ebp+0xfffffe68u), r_eax);
    /* 006c57fe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c5800: je 0x6c7471 */ if (fZ) goto L_006c7471;
L_006c5806:; BB(0x006c5806);
    /* 006c5806: mov dword ptr [ebp - 0xd4], 1 */ W32((u32)(r_ebp+0xffffff2cu), 0x1u);
    /* 006c5810: mov esi, dword ptr [ebp - 0x198] */ r_esi = R32((u32)(r_ebp+0xfffffe68u));
    /* 006c5816: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c5818: mov dword ptr [esi + 0x2b8], eax */ W32((u32)(r_esi+0x2b8u), r_eax);
    /* 006c581e: mov dword ptr [esi + 0x2bc], eax */ W32((u32)(r_esi+0x2bcu), r_eax);
    /* 006c5824: mov dword ptr [esi + 0x2c0], eax */ W32((u32)(r_esi+0x2c0u), r_eax);
    /* 006c582a: mov dword ptr [esi + 0x2c4], eax */ W32((u32)(r_esi+0x2c4u), r_eax);
    /* 006c5830: mov byte ptr [esi + 0x2c8], al */ W8((u32)(r_esi+0x2c8u), (u8)r_eax);
    /* 006c5836: mov byte ptr [esi + 0x2c9], al */ W8((u32)(r_esi+0x2c9u), (u8)r_eax);
    /* 006c583c: mov byte ptr [esi + 0x2ca], al */ W8((u32)(r_esi+0x2cau), (u8)r_eax);
    /* 006c5842: mov byte ptr [esi + 0x2cb], al */ W8((u32)(r_esi+0x2cbu), (u8)r_eax);
    /* 006c5848: mov word ptr [esi + 0x2cc], ax */ W16((u32)(r_esi+0x2ccu), (u16)r_eax);
    /* 006c584f: mov dword ptr [ebp - 0xd4], eax */ W32((u32)(r_ebp+0xffffff2cu), r_eax);
    /* 006c5855: mov eax, dword ptr [ebp - 0x198] */ r_eax = R32((u32)(r_ebp+0xfffffe68u));
L_006c585b:; BB(0x006c585b);
    /* 006c585b: mov dword ptr [0xa95df0], eax */ W32((u32)(0xa95df0u), r_eax);
    /* 006c5860: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006c5867: mov dword ptr [ebp - 0xd0], 0 */ W32((u32)(r_ebp+0xffffff30u), 0x0u);
    /* 006c5871: push 0xbaa4 */ { u32 v = 0xbaa4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c5876: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6c587bu); f_008581c5();
    /* 006c587b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c587c: mov dword ptr [ebp - 0x1b0], eax */ W32((u32)(r_ebp+0xfffffe50u), r_eax);
    /* 006c5882: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c5884: je 0x6c746a */ if (fZ) goto L_006c746a;
L_006c588a:; BB(0x006c588a);
    /* 006c588a: mov dword ptr [ebp - 0xd0], 1 */ W32((u32)(r_ebp+0xffffff30u), 0x1u);
    /* 006c5894: mov dword ptr [ebp - 4], 0x41 */ W32((u32)(r_ebp+0xfffffffcu), 0x41u);
    /* 006c589b: push 0x6c1940 */ { u32 v = 0x6c1940u; r_esp -= 4; W32(r_esp, v); }
    /* 006c58a0: push 0x6c17f0 */ { u32 v = 0x6c17f0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c58a5: mov eax, dword ptr [ebp - 0x1b0] */ r_eax = R32((u32)(r_ebp+0xfffffe50u));
    /* 006c58ab: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c58ad: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006c58b0: push 0x2ea4 */ { u32 v = 0x2ea4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c58b5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c58b6: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x6c58bbu); f_00858736();
    /* 006c58bb: mov eax, dword ptr [ebp - 0x1b0] */ r_eax = R32((u32)(r_ebp+0xfffffe50u));
    /* 006c58c1: mov dword ptr [ebp - 0xd0], 0 */ W32((u32)(r_ebp+0xffffff30u), 0x0u);
L_006c58cb:; BB(0x006c58cb);
    /* 006c58cb: mov dword ptr [0xa95e44], eax */ W32((u32)(0xa95e44u), r_eax);
    /* 006c58d0: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006c58d7: push 0xd590 */ { u32 v = 0xd590u; r_esp -= 4; W32(r_esp, v); }
    /* 006c58dc: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6c58e1u); f_008581c5();
    /* 006c58e1: mov dword ptr [ebp - 0xcc], 0 */ W32((u32)(r_ebp+0xffffff34u), 0x0u);
    /* 006c58eb: mov dword ptr [0xa95df4], eax */ W32((u32)(0xa95df4u), r_eax);
    /* 006c58f0: push 0x4dc */ { u32 v = 0x4dcu; r_esp -= 4; W32(r_esp, v); }
    /* 006c58f5: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6c58fau); f_008581c5();
    /* 006c58fa: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c58fd: mov dword ptr [ebp - 0x1a8], eax */ W32((u32)(r_ebp+0xfffffe58u), r_eax);
    /* 006c5903: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c5905: je 0x6c7463 */ if (fZ) goto L_006c7463;
L_006c590b:; BB(0x006c590b);
    /* 006c590b: mov dword ptr [ebp - 0xcc], 1 */ W32((u32)(r_ebp+0xffffff34u), 0x1u);
    /* 006c5915: mov dword ptr [ebp - 4], 0x42 */ W32((u32)(r_ebp+0xfffffffcu), 0x42u);
    /* 006c591c: mov ecx, dword ptr [ebp - 0x1a8] */ r_ecx = R32((u32)(r_ebp+0xfffffe58u));
    /* 006c5922: call 0x6c454c */ r_esp -= 4; W32(r_esp, 0x6c5927u); f_006c454c();
    /* 006c5927: mov eax, dword ptr [ebp - 0x1a8] */ r_eax = R32((u32)(r_ebp+0xfffffe58u));
    /* 006c592d: mov dword ptr [ebp - 0xcc], 0 */ W32((u32)(r_ebp+0xffffff34u), 0x0u);
L_006c5937:; BB(0x006c5937);
    /* 006c5937: mov dword ptr [0xa95dfc], eax */ W32((u32)(0xa95dfcu), r_eax);
    /* 006c593c: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006c5943: mov dword ptr [ebp - 0xc8], 0 */ W32((u32)(r_ebp+0xffffff38u), 0x0u);
    /* 006c594d: push 0x29c8 */ { u32 v = 0x29c8u; r_esp -= 4; W32(r_esp, v); }
    /* 006c5952: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6c5957u); f_008581c5();
    /* 006c5957: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c5958: mov dword ptr [ebp - 0x1a0], eax */ W32((u32)(r_ebp+0xfffffe60u), r_eax);
    /* 006c595e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c5960: je 0x6c745c */ if (fZ) goto L_006c745c;
L_006c5966:; BB(0x006c5966);
    /* 006c5966: mov dword ptr [ebp - 0xc8], 1 */ W32((u32)(r_ebp+0xffffff38u), 0x1u);
    /* 006c5970: mov dword ptr [ebp - 4], 0x43 */ W32((u32)(r_ebp+0xfffffffcu), 0x43u);
    /* 006c5977: mov ecx, dword ptr [ebp - 0x1a0] */ r_ecx = R32((u32)(r_ebp+0xfffffe60u));
    /* 006c597d: call 0x6c4674 */ r_esp -= 4; W32(r_esp, 0x6c5982u); f_006c4674();
    /* 006c5982: mov eax, dword ptr [ebp - 0x1a0] */ r_eax = R32((u32)(r_ebp+0xfffffe60u));
    /* 006c5988: mov dword ptr [ebp - 0xc8], 0 */ W32((u32)(r_ebp+0xffffff38u), 0x0u);
L_006c5992:; BB(0x006c5992);
    /* 006c5992: mov dword ptr [0xa95df8], eax */ W32((u32)(0xa95df8u), r_eax);
    /* 006c5997: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006c599e: jmp 0x6c6b1e */ goto L_006c6b1e;
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
L_006c745c:; BB(0x006c745c);
    /* 006c745c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c745e: jmp 0x6c5992 */ goto L_006c5992;
L_006c7463:; BB(0x006c7463);
    /* 006c7463: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c7465: jmp 0x6c5937 */ goto L_006c5937;
L_006c746a:; BB(0x006c746a);
    /* 006c746a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c746c: jmp 0x6c58cb */ goto L_006c58cb;
L_006c7471:; BB(0x006c7471);
    /* 006c7471: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c7473: jmp 0x6c585b */ goto L_006c585b;
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
    /* 006c7751: ret  */ FN_RET(0x006c57e3); r_esp += 4; return;
}

void f_006c59a3(void)
{
    FN_ENTER(0x006c59a3);
    /* 006c59a3: mov dword ptr [ebp - 0xe4], 0 */ W32((u32)(r_ebp+0xffffff1cu), 0x0u);
    /* 006c59ad: push 0xaf0 */ { u32 v = 0xaf0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c59b2: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6c59b7u); f_008581c5();
    /* 006c59b7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c59b8: mov dword ptr [ebp - 0x198], eax */ W32((u32)(r_ebp+0xfffffe68u), r_eax);
    /* 006c59be: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c59c0: je 0x6c748d */ if (fZ) goto L_006c748d;
L_006c59c6:; BB(0x006c59c6);
    /* 006c59c6: mov dword ptr [ebp - 0xe4], 1 */ W32((u32)(r_ebp+0xffffff1cu), 0x1u);
    /* 006c59d0: mov esi, dword ptr [ebp - 0x198] */ r_esi = R32((u32)(r_ebp+0xfffffe68u));
    /* 006c59d6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c59d8: mov dword ptr [esi + 0x2b8], eax */ W32((u32)(r_esi+0x2b8u), r_eax);
    /* 006c59de: mov dword ptr [esi + 0x2bc], eax */ W32((u32)(r_esi+0x2bcu), r_eax);
    /* 006c59e4: mov dword ptr [esi + 0x2c0], eax */ W32((u32)(r_esi+0x2c0u), r_eax);
    /* 006c59ea: mov dword ptr [esi + 0x2c4], eax */ W32((u32)(r_esi+0x2c4u), r_eax);
    /* 006c59f0: mov byte ptr [esi + 0x2c8], al */ W8((u32)(r_esi+0x2c8u), (u8)r_eax);
    /* 006c59f6: mov byte ptr [esi + 0x2c9], al */ W8((u32)(r_esi+0x2c9u), (u8)r_eax);
    /* 006c59fc: mov byte ptr [esi + 0x2ca], al */ W8((u32)(r_esi+0x2cau), (u8)r_eax);
    /* 006c5a02: mov byte ptr [esi + 0x2cb], al */ W8((u32)(r_esi+0x2cbu), (u8)r_eax);
    /* 006c5a08: mov word ptr [esi + 0x2cc], ax */ W16((u32)(r_esi+0x2ccu), (u16)r_eax);
    /* 006c5a0f: mov dword ptr [ebp - 0xe4], eax */ W32((u32)(r_ebp+0xffffff1cu), r_eax);
    /* 006c5a15: mov eax, dword ptr [ebp - 0x198] */ r_eax = R32((u32)(r_ebp+0xfffffe68u));
L_006c5a1b:; BB(0x006c5a1b);
    /* 006c5a1b: mov dword ptr [0xa95df0], eax */ W32((u32)(0xa95df0u), r_eax);
    /* 006c5a20: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006c5a27: push 0xd590 */ { u32 v = 0xd590u; r_esp -= 4; W32(r_esp, v); }
    /* 006c5a2c: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6c5a31u); f_008581c5();
    /* 006c5a31: mov dword ptr [ebp - 0xe0], 0 */ W32((u32)(r_ebp+0xffffff20u), 0x0u);
    /* 006c5a3b: mov dword ptr [0xa95df4], eax */ W32((u32)(0xa95df4u), r_eax);
    /* 006c5a40: push 0xbaa4 */ { u32 v = 0xbaa4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c5a45: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6c5a4au); f_008581c5();
    /* 006c5a4a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c5a4d: mov dword ptr [ebp - 0x1b0], eax */ W32((u32)(r_ebp+0xfffffe50u), r_eax);
    /* 006c5a53: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c5a55: je 0x6c7486 */ if (fZ) goto L_006c7486;
L_006c5a5b:; BB(0x006c5a5b);
    /* 006c5a5b: mov dword ptr [ebp - 0xe0], 1 */ W32((u32)(r_ebp+0xffffff20u), 0x1u);
    /* 006c5a65: mov dword ptr [ebp - 4], 0x3d */ W32((u32)(r_ebp+0xfffffffcu), 0x3du);
    /* 006c5a6c: push 0x6c1940 */ { u32 v = 0x6c1940u; r_esp -= 4; W32(r_esp, v); }
    /* 006c5a71: push 0x6c17f0 */ { u32 v = 0x6c17f0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c5a76: mov eax, dword ptr [ebp - 0x1b0] */ r_eax = R32((u32)(r_ebp+0xfffffe50u));
    /* 006c5a7c: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c5a7e: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006c5a81: push 0x2ea4 */ { u32 v = 0x2ea4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c5a86: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c5a87: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x6c5a8cu); f_00858736();
    /* 006c5a8c: mov eax, dword ptr [ebp - 0x1b0] */ r_eax = R32((u32)(r_ebp+0xfffffe50u));
    /* 006c5a92: mov dword ptr [ebp - 0xe0], 0 */ W32((u32)(r_ebp+0xffffff20u), 0x0u);
L_006c5a9c:; BB(0x006c5a9c);
    /* 006c5a9c: mov dword ptr [0xa95e44], eax */ W32((u32)(0xa95e44u), r_eax);
    /* 006c5aa1: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006c5aa8: mov dword ptr [ebp - 0xdc], 0 */ W32((u32)(r_ebp+0xffffff24u), 0x0u);
    /* 006c5ab2: push 0x4dc */ { u32 v = 0x4dcu; r_esp -= 4; W32(r_esp, v); }
    /* 006c5ab7: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6c5abcu); f_008581c5();
    /* 006c5abc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c5abd: mov dword ptr [ebp - 0x1a8], eax */ W32((u32)(r_ebp+0xfffffe58u), r_eax);
    /* 006c5ac3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c5ac5: je 0x6c747f */ if (fZ) goto L_006c747f;
L_006c5acb:; BB(0x006c5acb);
    /* 006c5acb: mov dword ptr [ebp - 0xdc], 1 */ W32((u32)(r_ebp+0xffffff24u), 0x1u);
    /* 006c5ad5: mov dword ptr [ebp - 4], 0x3e */ W32((u32)(r_ebp+0xfffffffcu), 0x3eu);
    /* 006c5adc: mov ecx, dword ptr [ebp - 0x1a8] */ r_ecx = R32((u32)(r_ebp+0xfffffe58u));
    /* 006c5ae2: call 0x6c454c */ r_esp -= 4; W32(r_esp, 0x6c5ae7u); f_006c454c();
    /* 006c5ae7: mov eax, dword ptr [ebp - 0x1a8] */ r_eax = R32((u32)(r_ebp+0xfffffe58u));
    /* 006c5aed: mov dword ptr [ebp - 0xdc], 0 */ W32((u32)(r_ebp+0xffffff24u), 0x0u);
L_006c5af7:; BB(0x006c5af7);
    /* 006c5af7: mov dword ptr [0xa95dfc], eax */ W32((u32)(0xa95dfcu), r_eax);
    /* 006c5afc: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006c5b03: mov dword ptr [ebp - 0xd8], 0 */ W32((u32)(r_ebp+0xffffff28u), 0x0u);
    /* 006c5b0d: push 0x29c8 */ { u32 v = 0x29c8u; r_esp -= 4; W32(r_esp, v); }
    /* 006c5b12: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6c5b17u); f_008581c5();
    /* 006c5b17: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c5b18: mov dword ptr [ebp - 0x1a0], eax */ W32((u32)(r_ebp+0xfffffe60u), r_eax);
    /* 006c5b1e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c5b20: je 0x6c7478 */ if (fZ) goto L_006c7478;
L_006c5b26:; BB(0x006c5b26);
    /* 006c5b26: mov dword ptr [ebp - 0xd8], 1 */ W32((u32)(r_ebp+0xffffff28u), 0x1u);
    /* 006c5b30: mov dword ptr [ebp - 4], 0x3f */ W32((u32)(r_ebp+0xfffffffcu), 0x3fu);
    /* 006c5b37: mov ecx, dword ptr [ebp - 0x1a0] */ r_ecx = R32((u32)(r_ebp+0xfffffe60u));
    /* 006c5b3d: call 0x6c4674 */ r_esp -= 4; W32(r_esp, 0x6c5b42u); f_006c4674();
    /* 006c5b42: mov eax, dword ptr [ebp - 0x1a0] */ r_eax = R32((u32)(r_ebp+0xfffffe60u));
    /* 006c5b48: mov dword ptr [ebp - 0xd8], 0 */ W32((u32)(r_ebp+0xffffff28u), 0x0u);
L_006c5b52:; BB(0x006c5b52);
    /* 006c5b52: mov dword ptr [0xa95df8], eax */ W32((u32)(0xa95df8u), r_eax);
    /* 006c5b57: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006c5b5e: jmp 0x6c6b1e */ goto L_006c6b1e;
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
L_006c7478:; BB(0x006c7478);
    /* 006c7478: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c747a: jmp 0x6c5b52 */ goto L_006c5b52;
L_006c747f:; BB(0x006c747f);
    /* 006c747f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c7481: jmp 0x6c5af7 */ goto L_006c5af7;
L_006c7486:; BB(0x006c7486);
    /* 006c7486: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c7488: jmp 0x6c5a9c */ goto L_006c5a9c;
L_006c748d:; BB(0x006c748d);
    /* 006c748d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c748f: jmp 0x6c5a1b */ goto L_006c5a1b;
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
    /* 006c7751: ret  */ FN_RET(0x006c59a3); r_esp += 4; return;
}

void f_006c5b63(void)
{
    FN_ENTER(0x006c5b63);
    /* 006c5b63: mov dword ptr [ebp - 0xf4], 0 */ W32((u32)(r_ebp+0xffffff0cu), 0x0u);
    /* 006c5b6d: push 0xbaa4 */ { u32 v = 0xbaa4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c5b72: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6c5b77u); f_008581c5();
    /* 006c5b77: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c5b78: mov dword ptr [ebp - 0x1b0], eax */ W32((u32)(r_ebp+0xfffffe50u), r_eax);
    /* 006c5b7e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c5b80: je 0x6c74a9 */ if (fZ) goto L_006c74a9;
L_006c5b86:; BB(0x006c5b86);
    /* 006c5b86: mov dword ptr [ebp - 0xf4], 1 */ W32((u32)(r_ebp+0xffffff0cu), 0x1u);
    /* 006c5b90: mov dword ptr [ebp - 4], 0x38 */ W32((u32)(r_ebp+0xfffffffcu), 0x38u);
    /* 006c5b97: push 0x6c1940 */ { u32 v = 0x6c1940u; r_esp -= 4; W32(r_esp, v); }
    /* 006c5b9c: push 0x6c17f0 */ { u32 v = 0x6c17f0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c5ba1: mov eax, dword ptr [ebp - 0x1b0] */ r_eax = R32((u32)(r_ebp+0xfffffe50u));
    /* 006c5ba7: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c5ba9: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006c5bac: push 0x2ea4 */ { u32 v = 0x2ea4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c5bb1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c5bb2: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x6c5bb7u); f_00858736();
    /* 006c5bb7: mov eax, dword ptr [ebp - 0x1b0] */ r_eax = R32((u32)(r_ebp+0xfffffe50u));
    /* 006c5bbd: mov dword ptr [ebp - 0xf4], 0 */ W32((u32)(r_ebp+0xffffff0cu), 0x0u);
L_006c5bc7:; BB(0x006c5bc7);
    /* 006c5bc7: mov dword ptr [0xa95e44], eax */ W32((u32)(0xa95e44u), r_eax);
    /* 006c5bcc: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006c5bd3: push 0xd590 */ { u32 v = 0xd590u; r_esp -= 4; W32(r_esp, v); }
    /* 006c5bd8: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6c5bddu); f_008581c5();
    /* 006c5bdd: mov dword ptr [ebp - 0xf0], 0 */ W32((u32)(r_ebp+0xffffff10u), 0x0u);
    /* 006c5be7: mov dword ptr [0xa95df4], eax */ W32((u32)(0xa95df4u), r_eax);
    /* 006c5bec: push 0xaf0 */ { u32 v = 0xaf0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c5bf1: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6c5bf6u); f_008581c5();
    /* 006c5bf6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c5bf9: mov dword ptr [ebp - 0x198], eax */ W32((u32)(r_ebp+0xfffffe68u), r_eax);
    /* 006c5bff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c5c01: je 0x6c74a2 */ if (fZ) goto L_006c74a2;
L_006c5c07:; BB(0x006c5c07);
    /* 006c5c07: mov dword ptr [ebp - 0xf0], 1 */ W32((u32)(r_ebp+0xffffff10u), 0x1u);
    /* 006c5c11: mov esi, dword ptr [ebp - 0x198] */ r_esi = R32((u32)(r_ebp+0xfffffe68u));
    /* 006c5c17: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c5c19: mov dword ptr [esi + 0x2b8], eax */ W32((u32)(r_esi+0x2b8u), r_eax);
    /* 006c5c1f: mov dword ptr [esi + 0x2bc], eax */ W32((u32)(r_esi+0x2bcu), r_eax);
    /* 006c5c25: mov dword ptr [esi + 0x2c0], eax */ W32((u32)(r_esi+0x2c0u), r_eax);
    /* 006c5c2b: mov dword ptr [esi + 0x2c4], eax */ W32((u32)(r_esi+0x2c4u), r_eax);
    /* 006c5c31: mov byte ptr [esi + 0x2c8], al */ W8((u32)(r_esi+0x2c8u), (u8)r_eax);
    /* 006c5c37: mov byte ptr [esi + 0x2c9], al */ W8((u32)(r_esi+0x2c9u), (u8)r_eax);
    /* 006c5c3d: mov byte ptr [esi + 0x2ca], al */ W8((u32)(r_esi+0x2cau), (u8)r_eax);
    /* 006c5c43: mov byte ptr [esi + 0x2cb], al */ W8((u32)(r_esi+0x2cbu), (u8)r_eax);
    /* 006c5c49: mov word ptr [esi + 0x2cc], ax */ W16((u32)(r_esi+0x2ccu), (u16)r_eax);
    /* 006c5c50: mov dword ptr [ebp - 0xf0], eax */ W32((u32)(r_ebp+0xffffff10u), r_eax);
    /* 006c5c56: mov eax, dword ptr [ebp - 0x198] */ r_eax = R32((u32)(r_ebp+0xfffffe68u));
L_006c5c5c:; BB(0x006c5c5c);
    /* 006c5c5c: mov dword ptr [0xa95df0], eax */ W32((u32)(0xa95df0u), r_eax);
    /* 006c5c61: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006c5c68: mov dword ptr [ebp - 0xec], 0 */ W32((u32)(r_ebp+0xffffff14u), 0x0u);
    /* 006c5c72: push 0x4dc */ { u32 v = 0x4dcu; r_esp -= 4; W32(r_esp, v); }
    /* 006c5c77: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6c5c7cu); f_008581c5();
    /* 006c5c7c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c5c7d: mov dword ptr [ebp - 0x1a8], eax */ W32((u32)(r_ebp+0xfffffe58u), r_eax);
    /* 006c5c83: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c5c85: je 0x6c749b */ if (fZ) goto L_006c749b;
L_006c5c8b:; BB(0x006c5c8b);
    /* 006c5c8b: mov dword ptr [ebp - 0xec], 1 */ W32((u32)(r_ebp+0xffffff14u), 0x1u);
    /* 006c5c95: mov dword ptr [ebp - 4], 0x3a */ W32((u32)(r_ebp+0xfffffffcu), 0x3au);
    /* 006c5c9c: mov ecx, dword ptr [ebp - 0x1a8] */ r_ecx = R32((u32)(r_ebp+0xfffffe58u));
    /* 006c5ca2: call 0x6c454c */ r_esp -= 4; W32(r_esp, 0x6c5ca7u); f_006c454c();
    /* 006c5ca7: mov eax, dword ptr [ebp - 0x1a8] */ r_eax = R32((u32)(r_ebp+0xfffffe58u));
    /* 006c5cad: mov dword ptr [ebp - 0xec], 0 */ W32((u32)(r_ebp+0xffffff14u), 0x0u);
L_006c5cb7:; BB(0x006c5cb7);
    /* 006c5cb7: mov dword ptr [0xa95dfc], eax */ W32((u32)(0xa95dfcu), r_eax);
    /* 006c5cbc: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006c5cc3: mov dword ptr [ebp - 0xe8], 0 */ W32((u32)(r_ebp+0xffffff18u), 0x0u);
    /* 006c5ccd: push 0x29c8 */ { u32 v = 0x29c8u; r_esp -= 4; W32(r_esp, v); }
    /* 006c5cd2: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6c5cd7u); f_008581c5();
    /* 006c5cd7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c5cd8: mov dword ptr [ebp - 0x1a0], eax */ W32((u32)(r_ebp+0xfffffe60u), r_eax);
    /* 006c5cde: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c5ce0: je 0x6c7494 */ if (fZ) goto L_006c7494;
L_006c5ce6:; BB(0x006c5ce6);
    /* 006c5ce6: mov dword ptr [ebp - 0xe8], 1 */ W32((u32)(r_ebp+0xffffff18u), 0x1u);
    /* 006c5cf0: mov dword ptr [ebp - 4], 0x3b */ W32((u32)(r_ebp+0xfffffffcu), 0x3bu);
    /* 006c5cf7: mov ecx, dword ptr [ebp - 0x1a0] */ r_ecx = R32((u32)(r_ebp+0xfffffe60u));
    /* 006c5cfd: call 0x6c4674 */ r_esp -= 4; W32(r_esp, 0x6c5d02u); f_006c4674();
    /* 006c5d02: mov eax, dword ptr [ebp - 0x1a0] */ r_eax = R32((u32)(r_ebp+0xfffffe60u));
    /* 006c5d08: mov dword ptr [ebp - 0xe8], 0 */ W32((u32)(r_ebp+0xffffff18u), 0x0u);
L_006c5d12:; BB(0x006c5d12);
    /* 006c5d12: mov dword ptr [0xa95df8], eax */ W32((u32)(0xa95df8u), r_eax);
    /* 006c5d17: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006c5d1e: jmp 0x6c6b1e */ goto L_006c6b1e;
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
L_006c7494:; BB(0x006c7494);
    /* 006c7494: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c7496: jmp 0x6c5d12 */ goto L_006c5d12;
L_006c749b:; BB(0x006c749b);
    /* 006c749b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c749d: jmp 0x6c5cb7 */ goto L_006c5cb7;
L_006c74a2:; BB(0x006c74a2);
    /* 006c74a2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c74a4: jmp 0x6c5c5c */ goto L_006c5c5c;
L_006c74a9:; BB(0x006c74a9);
    /* 006c74a9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c74ab: jmp 0x6c5bc7 */ goto L_006c5bc7;
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
    /* 006c7751: ret  */ FN_RET(0x006c5b63); r_esp += 4; return;
}

void f_006c5d23(void)
{
    FN_ENTER(0x006c5d23);
    /* 006c5d23: mov dword ptr [ebp - 0x104], 0 */ W32((u32)(r_ebp+0xfffffefcu), 0x0u);
    /* 006c5d2d: push 0xbaa4 */ { u32 v = 0xbaa4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c5d32: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6c5d37u); f_008581c5();
    /* 006c5d37: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c5d38: mov dword ptr [ebp - 0x1b0], eax */ W32((u32)(r_ebp+0xfffffe50u), r_eax);
    /* 006c5d3e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c5d40: je 0x6c74c5 */ if (fZ) goto L_006c74c5;
L_006c5d46:; BB(0x006c5d46);
    /* 006c5d46: mov dword ptr [ebp - 0x104], 1 */ W32((u32)(r_ebp+0xfffffefcu), 0x1u);
    /* 006c5d50: mov dword ptr [ebp - 4], 0x34 */ W32((u32)(r_ebp+0xfffffffcu), 0x34u);
    /* 006c5d57: push 0x6c1940 */ { u32 v = 0x6c1940u; r_esp -= 4; W32(r_esp, v); }
    /* 006c5d5c: push 0x6c17f0 */ { u32 v = 0x6c17f0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c5d61: mov eax, dword ptr [ebp - 0x1b0] */ r_eax = R32((u32)(r_ebp+0xfffffe50u));
    /* 006c5d67: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c5d69: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006c5d6c: push 0x2ea4 */ { u32 v = 0x2ea4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c5d71: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c5d72: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x6c5d77u); f_00858736();
    /* 006c5d77: mov eax, dword ptr [ebp - 0x1b0] */ r_eax = R32((u32)(r_ebp+0xfffffe50u));
    /* 006c5d7d: mov dword ptr [ebp - 0x104], 0 */ W32((u32)(r_ebp+0xfffffefcu), 0x0u);
L_006c5d87:; BB(0x006c5d87);
    /* 006c5d87: mov dword ptr [0xa95e44], eax */ W32((u32)(0xa95e44u), r_eax);
    /* 006c5d8c: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006c5d93: push 0xd590 */ { u32 v = 0xd590u; r_esp -= 4; W32(r_esp, v); }
    /* 006c5d98: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6c5d9du); f_008581c5();
    /* 006c5d9d: mov dword ptr [ebp - 0x100], 0 */ W32((u32)(r_ebp+0xffffff00u), 0x0u);
    /* 006c5da7: mov dword ptr [0xa95df4], eax */ W32((u32)(0xa95df4u), r_eax);
    /* 006c5dac: push 0xaf0 */ { u32 v = 0xaf0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c5db1: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6c5db6u); f_008581c5();
    /* 006c5db6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c5db9: mov dword ptr [ebp - 0x198], eax */ W32((u32)(r_ebp+0xfffffe68u), r_eax);
    /* 006c5dbf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c5dc1: je 0x6c74be */ if (fZ) goto L_006c74be;
L_006c5dc7:; BB(0x006c5dc7);
    /* 006c5dc7: mov dword ptr [ebp - 0x100], 1 */ W32((u32)(r_ebp+0xffffff00u), 0x1u);
    /* 006c5dd1: mov esi, dword ptr [ebp - 0x198] */ r_esi = R32((u32)(r_ebp+0xfffffe68u));
    /* 006c5dd7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c5dd9: mov dword ptr [esi + 0x2b8], eax */ W32((u32)(r_esi+0x2b8u), r_eax);
    /* 006c5ddf: mov dword ptr [esi + 0x2bc], eax */ W32((u32)(r_esi+0x2bcu), r_eax);
    /* 006c5de5: mov dword ptr [esi + 0x2c0], eax */ W32((u32)(r_esi+0x2c0u), r_eax);
    /* 006c5deb: mov dword ptr [esi + 0x2c4], eax */ W32((u32)(r_esi+0x2c4u), r_eax);
    /* 006c5df1: mov byte ptr [esi + 0x2c8], al */ W8((u32)(r_esi+0x2c8u), (u8)r_eax);
    /* 006c5df7: mov byte ptr [esi + 0x2c9], al */ W8((u32)(r_esi+0x2c9u), (u8)r_eax);
    /* 006c5dfd: mov byte ptr [esi + 0x2ca], al */ W8((u32)(r_esi+0x2cau), (u8)r_eax);
    /* 006c5e03: mov byte ptr [esi + 0x2cb], al */ W8((u32)(r_esi+0x2cbu), (u8)r_eax);
    /* 006c5e09: mov word ptr [esi + 0x2cc], ax */ W16((u32)(r_esi+0x2ccu), (u16)r_eax);
    /* 006c5e10: mov dword ptr [ebp - 0x100], eax */ W32((u32)(r_ebp+0xffffff00u), r_eax);
    /* 006c5e16: mov eax, dword ptr [ebp - 0x198] */ r_eax = R32((u32)(r_ebp+0xfffffe68u));
L_006c5e1c:; BB(0x006c5e1c);
    /* 006c5e1c: mov dword ptr [0xa95df0], eax */ W32((u32)(0xa95df0u), r_eax);
    /* 006c5e21: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006c5e28: mov dword ptr [ebp - 0xfc], 0 */ W32((u32)(r_ebp+0xffffff04u), 0x0u);
    /* 006c5e32: push 0x4dc */ { u32 v = 0x4dcu; r_esp -= 4; W32(r_esp, v); }
    /* 006c5e37: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6c5e3cu); f_008581c5();
    /* 006c5e3c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c5e3d: mov dword ptr [ebp - 0x1a8], eax */ W32((u32)(r_ebp+0xfffffe58u), r_eax);
    /* 006c5e43: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c5e45: je 0x6c74b7 */ if (fZ) goto L_006c74b7;
L_006c5e4b:; BB(0x006c5e4b);
    /* 006c5e4b: mov dword ptr [ebp - 0xfc], 1 */ W32((u32)(r_ebp+0xffffff04u), 0x1u);
    /* 006c5e55: mov dword ptr [ebp - 4], 0x36 */ W32((u32)(r_ebp+0xfffffffcu), 0x36u);
    /* 006c5e5c: mov ecx, dword ptr [ebp - 0x1a8] */ r_ecx = R32((u32)(r_ebp+0xfffffe58u));
    /* 006c5e62: call 0x6c454c */ r_esp -= 4; W32(r_esp, 0x6c5e67u); f_006c454c();
    /* 006c5e67: mov eax, dword ptr [ebp - 0x1a8] */ r_eax = R32((u32)(r_ebp+0xfffffe58u));
    /* 006c5e6d: mov dword ptr [ebp - 0xfc], 0 */ W32((u32)(r_ebp+0xffffff04u), 0x0u);
L_006c5e77:; BB(0x006c5e77);
    /* 006c5e77: mov dword ptr [0xa95dfc], eax */ W32((u32)(0xa95dfcu), r_eax);
    /* 006c5e7c: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006c5e83: mov dword ptr [ebp - 0xf8], 0 */ W32((u32)(r_ebp+0xffffff08u), 0x0u);
    /* 006c5e8d: push 0x29c8 */ { u32 v = 0x29c8u; r_esp -= 4; W32(r_esp, v); }
    /* 006c5e92: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6c5e97u); f_008581c5();
    /* 006c5e97: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c5e98: mov dword ptr [ebp - 0x1a0], eax */ W32((u32)(r_ebp+0xfffffe60u), r_eax);
    /* 006c5e9e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c5ea0: je 0x6c74b0 */ if (fZ) goto L_006c74b0;
L_006c5ea6:; BB(0x006c5ea6);
    /* 006c5ea6: mov dword ptr [ebp - 0xf8], 1 */ W32((u32)(r_ebp+0xffffff08u), 0x1u);
    /* 006c5eb0: mov dword ptr [ebp - 4], 0x37 */ W32((u32)(r_ebp+0xfffffffcu), 0x37u);
    /* 006c5eb7: mov ecx, dword ptr [ebp - 0x1a0] */ r_ecx = R32((u32)(r_ebp+0xfffffe60u));
    /* 006c5ebd: call 0x6c4674 */ r_esp -= 4; W32(r_esp, 0x6c5ec2u); f_006c4674();
    /* 006c5ec2: mov eax, dword ptr [ebp - 0x1a0] */ r_eax = R32((u32)(r_ebp+0xfffffe60u));
    /* 006c5ec8: mov dword ptr [ebp - 0xf8], 0 */ W32((u32)(r_ebp+0xffffff08u), 0x0u);
L_006c5ed2:; BB(0x006c5ed2);
    /* 006c5ed2: mov dword ptr [0xa95df8], eax */ W32((u32)(0xa95df8u), r_eax);
    /* 006c5ed7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006c5ede: jmp 0x6c6b1e */ goto L_006c6b1e;
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
L_006c74b0:; BB(0x006c74b0);
    /* 006c74b0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c74b2: jmp 0x6c5ed2 */ goto L_006c5ed2;
L_006c74b7:; BB(0x006c74b7);
    /* 006c74b7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c74b9: jmp 0x6c5e77 */ goto L_006c5e77;
L_006c74be:; BB(0x006c74be);
    /* 006c74be: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c74c0: jmp 0x6c5e1c */ goto L_006c5e1c;
L_006c74c5:; BB(0x006c74c5);
    /* 006c74c5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c74c7: jmp 0x6c5d87 */ goto L_006c5d87;
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
    /* 006c7751: ret  */ FN_RET(0x006c5d23); r_esp += 4; return;
}

void f_006c5ee3(void)
{
    FN_ENTER(0x006c5ee3);
    /* 006c5ee3: mov dword ptr [ebp - 0x114], 0 */ W32((u32)(r_ebp+0xfffffeecu), 0x0u);
    /* 006c5eed: push 0xbaa4 */ { u32 v = 0xbaa4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c5ef2: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6c5ef7u); f_008581c5();
    /* 006c5ef7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c5ef8: mov dword ptr [ebp - 0x1b0], eax */ W32((u32)(r_ebp+0xfffffe50u), r_eax);
    /* 006c5efe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c5f00: je 0x6c74e1 */ if (fZ) goto L_006c74e1;
L_006c5f06:; BB(0x006c5f06);
    /* 006c5f06: mov dword ptr [ebp - 0x114], 1 */ W32((u32)(r_ebp+0xfffffeecu), 0x1u);
    /* 006c5f10: mov dword ptr [ebp - 4], 0x30 */ W32((u32)(r_ebp+0xfffffffcu), 0x30u);
    /* 006c5f17: push 0x6c1940 */ { u32 v = 0x6c1940u; r_esp -= 4; W32(r_esp, v); }
    /* 006c5f1c: push 0x6c17f0 */ { u32 v = 0x6c17f0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c5f21: mov eax, dword ptr [ebp - 0x1b0] */ r_eax = R32((u32)(r_ebp+0xfffffe50u));
    /* 006c5f27: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c5f29: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006c5f2c: push 0x2ea4 */ { u32 v = 0x2ea4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c5f31: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c5f32: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x6c5f37u); f_00858736();
    /* 006c5f37: mov eax, dword ptr [ebp - 0x1b0] */ r_eax = R32((u32)(r_ebp+0xfffffe50u));
    /* 006c5f3d: mov dword ptr [ebp - 0x114], 0 */ W32((u32)(r_ebp+0xfffffeecu), 0x0u);
L_006c5f47:; BB(0x006c5f47);
    /* 006c5f47: mov dword ptr [0xa95e44], eax */ W32((u32)(0xa95e44u), r_eax);
    /* 006c5f4c: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006c5f53: mov dword ptr [ebp - 0x110], 0 */ W32((u32)(r_ebp+0xfffffef0u), 0x0u);
    /* 006c5f5d: push 0xaf0 */ { u32 v = 0xaf0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c5f62: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6c5f67u); f_008581c5();
    /* 006c5f67: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c5f68: mov dword ptr [ebp - 0x198], eax */ W32((u32)(r_ebp+0xfffffe68u), r_eax);
    /* 006c5f6e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c5f70: je 0x6c74da */ if (fZ) goto L_006c74da;
L_006c5f76:; BB(0x006c5f76);
    /* 006c5f76: mov dword ptr [ebp - 0x110], 1 */ W32((u32)(r_ebp+0xfffffef0u), 0x1u);
    /* 006c5f80: mov esi, dword ptr [ebp - 0x198] */ r_esi = R32((u32)(r_ebp+0xfffffe68u));
    /* 006c5f86: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c5f88: mov dword ptr [esi + 0x2b8], eax */ W32((u32)(r_esi+0x2b8u), r_eax);
    /* 006c5f8e: mov dword ptr [esi + 0x2bc], eax */ W32((u32)(r_esi+0x2bcu), r_eax);
    /* 006c5f94: mov dword ptr [esi + 0x2c0], eax */ W32((u32)(r_esi+0x2c0u), r_eax);
    /* 006c5f9a: mov dword ptr [esi + 0x2c4], eax */ W32((u32)(r_esi+0x2c4u), r_eax);
    /* 006c5fa0: mov byte ptr [esi + 0x2c8], al */ W8((u32)(r_esi+0x2c8u), (u8)r_eax);
    /* 006c5fa6: mov byte ptr [esi + 0x2c9], al */ W8((u32)(r_esi+0x2c9u), (u8)r_eax);
    /* 006c5fac: mov byte ptr [esi + 0x2ca], al */ W8((u32)(r_esi+0x2cau), (u8)r_eax);
    /* 006c5fb2: mov byte ptr [esi + 0x2cb], al */ W8((u32)(r_esi+0x2cbu), (u8)r_eax);
    /* 006c5fb8: mov word ptr [esi + 0x2cc], ax */ W16((u32)(r_esi+0x2ccu), (u16)r_eax);
    /* 006c5fbf: mov dword ptr [ebp - 0x110], eax */ W32((u32)(r_ebp+0xfffffef0u), r_eax);
    /* 006c5fc5: mov eax, dword ptr [ebp - 0x198] */ r_eax = R32((u32)(r_ebp+0xfffffe68u));
L_006c5fcb:; BB(0x006c5fcb);
    /* 006c5fcb: mov dword ptr [0xa95df0], eax */ W32((u32)(0xa95df0u), r_eax);
    /* 006c5fd0: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006c5fd7: push 0xd590 */ { u32 v = 0xd590u; r_esp -= 4; W32(r_esp, v); }
    /* 006c5fdc: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6c5fe1u); f_008581c5();
    /* 006c5fe1: mov dword ptr [ebp - 0x10c], 0 */ W32((u32)(r_ebp+0xfffffef4u), 0x0u);
    /* 006c5feb: mov dword ptr [0xa95df4], eax */ W32((u32)(0xa95df4u), r_eax);
    /* 006c5ff0: push 0x4dc */ { u32 v = 0x4dcu; r_esp -= 4; W32(r_esp, v); }
    /* 006c5ff5: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6c5ffau); f_008581c5();
    /* 006c5ffa: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c5ffd: mov dword ptr [ebp - 0x1a8], eax */ W32((u32)(r_ebp+0xfffffe58u), r_eax);
    /* 006c6003: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c6005: je 0x6c74d3 */ if (fZ) goto L_006c74d3;
L_006c600b:; BB(0x006c600b);
    /* 006c600b: mov dword ptr [ebp - 0x10c], 1 */ W32((u32)(r_ebp+0xfffffef4u), 0x1u);
    /* 006c6015: mov dword ptr [ebp - 4], 0x32 */ W32((u32)(r_ebp+0xfffffffcu), 0x32u);
    /* 006c601c: mov ecx, dword ptr [ebp - 0x1a8] */ r_ecx = R32((u32)(r_ebp+0xfffffe58u));
    /* 006c6022: call 0x6c454c */ r_esp -= 4; W32(r_esp, 0x6c6027u); f_006c454c();
    /* 006c6027: mov eax, dword ptr [ebp - 0x1a8] */ r_eax = R32((u32)(r_ebp+0xfffffe58u));
    /* 006c602d: mov dword ptr [ebp - 0x10c], 0 */ W32((u32)(r_ebp+0xfffffef4u), 0x0u);
L_006c6037:; BB(0x006c6037);
    /* 006c6037: mov dword ptr [0xa95dfc], eax */ W32((u32)(0xa95dfcu), r_eax);
    /* 006c603c: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006c6043: mov dword ptr [ebp - 0x108], 0 */ W32((u32)(r_ebp+0xfffffef8u), 0x0u);
    /* 006c604d: push 0x29c8 */ { u32 v = 0x29c8u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6052: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6c6057u); f_008581c5();
    /* 006c6057: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c6058: mov dword ptr [ebp - 0x1a0], eax */ W32((u32)(r_ebp+0xfffffe60u), r_eax);
    /* 006c605e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c6060: je 0x6c74cc */ if (fZ) goto L_006c74cc;
L_006c6066:; BB(0x006c6066);
    /* 006c6066: mov dword ptr [ebp - 0x108], 1 */ W32((u32)(r_ebp+0xfffffef8u), 0x1u);
    /* 006c6070: mov dword ptr [ebp - 4], 0x33 */ W32((u32)(r_ebp+0xfffffffcu), 0x33u);
    /* 006c6077: mov ecx, dword ptr [ebp - 0x1a0] */ r_ecx = R32((u32)(r_ebp+0xfffffe60u));
    /* 006c607d: call 0x6c4674 */ r_esp -= 4; W32(r_esp, 0x6c6082u); f_006c4674();
    /* 006c6082: mov eax, dword ptr [ebp - 0x1a0] */ r_eax = R32((u32)(r_ebp+0xfffffe60u));
    /* 006c6088: mov dword ptr [ebp - 0x108], 0 */ W32((u32)(r_ebp+0xfffffef8u), 0x0u);
L_006c6092:; BB(0x006c6092);
    /* 006c6092: mov dword ptr [0xa95df8], eax */ W32((u32)(0xa95df8u), r_eax);
    /* 006c6097: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006c609e: jmp 0x6c6b1e */ goto L_006c6b1e;
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
L_006c74cc:; BB(0x006c74cc);
    /* 006c74cc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c74ce: jmp 0x6c6092 */ goto L_006c6092;
L_006c74d3:; BB(0x006c74d3);
    /* 006c74d3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c74d5: jmp 0x6c6037 */ goto L_006c6037;
L_006c74da:; BB(0x006c74da);
    /* 006c74da: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c74dc: jmp 0x6c5fcb */ goto L_006c5fcb;
L_006c74e1:; BB(0x006c74e1);
    /* 006c74e1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c74e3: jmp 0x6c5f47 */ goto L_006c5f47;
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
    /* 006c7751: ret  */ FN_RET(0x006c5ee3); r_esp += 4; return;
}

