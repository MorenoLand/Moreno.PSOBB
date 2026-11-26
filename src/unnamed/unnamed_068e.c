#include "protos.h"

void f_0068e030(void) /* sub_68E030 */
{
    FN_ENTER(0x0068e030);
    /* 0068e030: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0068e031: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0068e032: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0068e033: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0068e034: sub esp, 0xa4 */ {  u32 a = r_esp; u32 b = 0xa4u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0068e03a: mov esi, ecx */ r_esi = r_ecx;
    /* 0068e03c: mov ebp, dword ptr [esp + 0xb8] */ r_ebp = R32((u32)(r_esp+0xb8u));
    /* 0068e043: mov ebx, dword ptr [esp + 0xbc] */ r_ebx = R32((u32)(r_esp+0xbcu));
    /* 0068e04a: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068e04c: je 0x68e4d9 */ if (fZ) goto L_0068e4d9;
L_0068e052:; BB(0x0068e052);
    /* 0068e052: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068e054: je 0x68e4d9 */ if (fZ) goto L_0068e4d9;
L_0068e05a:; BB(0x0068e05a);
    /* 0068e05a: mov edi, dword ptr [esi + 0x2b4] */ r_edi = R32((u32)(r_esi+0x2b4u));
    /* 0068e060: movzx eax, word ptr [edi] */ r_eax = (u32)R16((u32)(r_edi));
    /* 0068e063: mov edx, dword ptr [esi + 0x31c] */ r_edx = R32((u32)(r_esi+0x31cu));
    /* 0068e069: mov word ptr [esp], ax */ W16((u32)(r_esp), (u16)r_eax);
    /* 0068e06d: movzx eax, word ptr [edi + 2] */ r_eax = (u32)R16((u32)(r_edi+0x2u));
    /* 0068e071: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 0068e076: movzx eax, word ptr [edi + 4] */ r_eax = (u32)R16((u32)(r_edi+0x4u));
    /* 0068e07a: mov word ptr [esp + 4], ax */ W16((u32)(r_esp+0x4u), (u16)r_eax);
    /* 0068e07f: movzx eax, word ptr [edi + 6] */ r_eax = (u32)R16((u32)(r_edi+0x6u));
    /* 0068e083: mov word ptr [esp + 6], ax */ W16((u32)(r_esp+0x6u), (u16)r_eax);
    /* 0068e088: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 0068e08c: mov word ptr [esp + 8], ax */ W16((u32)(r_esp+0x8u), (u16)r_eax);
    /* 0068e091: movzx eax, word ptr [edi + 0xa] */ r_eax = (u32)R16((u32)(r_edi+0xau));
    /* 0068e095: mov word ptr [esp + 0xa], ax */ W16((u32)(r_esp+0xau), (u16)r_eax);
    /* 0068e09a: movzx eax, word ptr [edi + 0xc] */ r_eax = (u32)R16((u32)(r_edi+0xcu));
    /* 0068e09e: mov word ptr [esp + 0xc], ax */ W16((u32)(r_esp+0xcu), (u16)r_eax);
    /* 0068e0a3: movzx eax, word ptr [edi + 0xe] */ r_eax = (u32)R16((u32)(r_edi+0xeu));
    /* 0068e0a7: mov word ptr [esp + 0xe], ax */ W16((u32)(r_esp+0xeu), (u16)r_eax);
    /* 0068e0ac: mov eax, dword ptr [edi + 0x10] */ r_eax = R32((u32)(r_edi+0x10u));
    /* 0068e0af: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0068e0b3: mov eax, dword ptr [edi + 0x14] */ r_eax = R32((u32)(r_edi+0x14u));
    /* 0068e0b6: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0068e0ba: mov eax, dword ptr [edi + 0x18] */ r_eax = R32((u32)(r_edi+0x18u));
    /* 0068e0bd: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0068e0c1: mov eax, dword ptr [edi + 0x1c] */ r_eax = R32((u32)(r_edi+0x1cu));
    /* 0068e0c4: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 0068e0c8: mov eax, dword ptr [edi + 0x20] */ r_eax = R32((u32)(r_edi+0x20u));
    /* 0068e0cb: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0068e0cf: movzx eax, word ptr [edx] */ r_eax = (u32)R16((u32)(r_edx));
    /* 0068e0d2: mov word ptr [esp + 0x24], ax */ W16((u32)(r_esp+0x24u), (u16)r_eax);
    /* 0068e0d7: movzx eax, word ptr [edx + 2] */ r_eax = (u32)R16((u32)(r_edx+0x2u));
    /* 0068e0db: mov word ptr [esp + 0x26], ax */ W16((u32)(r_esp+0x26u), (u16)r_eax);
    /* 0068e0e0: movzx eax, word ptr [edx + 4] */ r_eax = (u32)R16((u32)(r_edx+0x4u));
    /* 0068e0e4: mov word ptr [esp + 0x28], ax */ W16((u32)(r_esp+0x28u), (u16)r_eax);
    /* 0068e0e9: movzx eax, word ptr [edx + 6] */ r_eax = (u32)R16((u32)(r_edx+0x6u));
    /* 0068e0ed: mov word ptr [esp + 0x2a], ax */ W16((u32)(r_esp+0x2au), (u16)r_eax);
    /* 0068e0f2: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0068e0f5: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 0068e0f9: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 0068e0fc: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 0068e100: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 0068e103: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 0068e107: movzx eax, word ptr [edx + 0x14] */ r_eax = (u32)R16((u32)(r_edx+0x14u));
    /* 0068e10b: mov word ptr [esp + 0x38], ax */ W16((u32)(r_esp+0x38u), (u16)r_eax);
    /* 0068e110: movzx eax, word ptr [edx + 0x16] */ r_eax = (u32)R16((u32)(r_edx+0x16u));
    /* 0068e114: mov word ptr [esp + 0x3a], ax */ W16((u32)(r_esp+0x3au), (u16)r_eax);
    /* 0068e119: movzx eax, word ptr [edx + 0x18] */ r_eax = (u32)R16((u32)(r_edx+0x18u));
    /* 0068e11d: mov word ptr [esp + 0x3c], ax */ W16((u32)(r_esp+0x3cu), (u16)r_eax);
    /* 0068e122: movzx eax, word ptr [edx + 0x1a] */ r_eax = (u32)R16((u32)(r_edx+0x1au));
    /* 0068e126: mov word ptr [esp + 0x3e], ax */ W16((u32)(r_esp+0x3eu), (u16)r_eax);
    /* 0068e12b: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0068e12e: mov dword ptr [esp + 0x40], eax */ W32((u32)(r_esp+0x40u), r_eax);
    /* 0068e132: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 0068e135: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 0068e139: mov eax, dword ptr [edx + 0x24] */ r_eax = R32((u32)(r_edx+0x24u));
    /* 0068e13c: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 0068e140: mov eax, dword ptr [edx + 0x28] */ r_eax = R32((u32)(r_edx+0x28u));
    /* 0068e143: mov dword ptr [esp + 0x4c], eax */ W32((u32)(r_esp+0x4cu), r_eax);
    /* 0068e147: mov eax, dword ptr [edx + 0x2c] */ r_eax = R32((u32)(r_edx+0x2cu));
    /* 0068e14a: mov dword ptr [esp + 0x50], eax */ W32((u32)(r_esp+0x50u), r_eax);
    /* 0068e14e: mov eax, dword ptr [esi + 0x320] */ r_eax = R32((u32)(r_esi+0x320u));
    /* 0068e154: movzx edx, word ptr [eax] */ r_edx = (u32)R16((u32)(r_eax));
    /* 0068e157: mov word ptr [esp + 0x54], dx */ W16((u32)(r_esp+0x54u), (u16)r_edx);
    /* 0068e15c: movzx edx, word ptr [eax + 2] */ r_edx = (u32)R16((u32)(r_eax+0x2u));
    /* 0068e160: mov word ptr [esp + 0x56], dx */ W16((u32)(r_esp+0x56u), (u16)r_edx);
    /* 0068e165: movzx edx, word ptr [eax + 4] */ r_edx = (u32)R16((u32)(r_eax+0x4u));
    /* 0068e169: mov word ptr [esp + 0x58], dx */ W16((u32)(r_esp+0x58u), (u16)r_edx);
    /* 0068e16e: movzx edx, word ptr [eax + 6] */ r_edx = (u32)R16((u32)(r_eax+0x6u));
    /* 0068e172: mov word ptr [esp + 0x5a], dx */ W16((u32)(r_esp+0x5au), (u16)r_edx);
    /* 0068e177: movzx edx, word ptr [eax + 8] */ r_edx = (u32)R16((u32)(r_eax+0x8u));
    /* 0068e17b: mov word ptr [esp + 0x5c], dx */ W16((u32)(r_esp+0x5cu), (u16)r_edx);
    /* 0068e180: movzx edx, word ptr [eax + 0xa] */ r_edx = (u32)R16((u32)(r_eax+0xau));
    /* 0068e184: mov word ptr [esp + 0x5e], dx */ W16((u32)(r_esp+0x5eu), (u16)r_edx);
    /* 0068e189: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 0068e18c: mov dword ptr [esp + 0x60], edx */ W32((u32)(r_esp+0x60u), r_edx);
    /* 0068e190: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 0068e193: mov dword ptr [esp + 0x64], edx */ W32((u32)(r_esp+0x64u), r_edx);
    /* 0068e197: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 0068e19a: mov dword ptr [esp + 0x68], edx */ W32((u32)(r_esp+0x68u), r_edx);
    /* 0068e19e: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 0068e1a1: mov dword ptr [esp + 0x6c], edx */ W32((u32)(r_esp+0x6cu), r_edx);
    /* 0068e1a5: mov eax, dword ptr [eax + 0x1c] */ r_eax = R32((u32)(r_eax+0x1cu));
    /* 0068e1a8: mov dword ptr [esp + 0x70], eax */ W32((u32)(r_esp+0x70u), r_eax);
    /* 0068e1ac: movzx eax, byte ptr [ebx] */ r_eax = (u32)R8((u32)(r_ebx));
    /* 0068e1af: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068e1b1: je 0x68e1ed */ if (fZ) goto L_0068e1ed;
L_0068e1b3:; BB(0x0068e1b3);
    /* 0068e1b3: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068e1b6: jne 0x68e1d0 */ if (!fZ) goto L_0068e1d0;
L_0068e1b8:; BB(0x0068e1b8);
    /* 0068e1b8: movzx eax, byte ptr [ebx + 1] */ r_eax = (u32)R8((u32)(r_ebx+0x1u));
    /* 0068e1bc: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068e1bf: je 0x68e458 */ if (fZ) goto L_0068e458;
L_0068e1c5:; BB(0x0068e1c5);
    /* 0068e1c5: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068e1c8: je 0x68e43d */ if (fZ) goto L_0068e43d;
L_0068e1ce:; BB(0x0068e1ce);
    /* 0068e1ce: jmp 0x68e22c */ goto L_0068e22c;
L_0068e1d0:; BB(0x0068e1d0);
    /* 0068e1d0: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068e1d3: jne 0x68e22c */ if (!fZ) goto L_0068e22c;
L_0068e1d5:; BB(0x0068e1d5);
    /* 0068e1d5: lea ecx, [esi + 0xdf8] */ r_ecx = (u32)(r_esi+0xdf8u);
    /* 0068e1db: mov dword ptr [esp + 0xa0], ecx */ W32((u32)(r_esp+0xa0u), r_ecx);
    /* 0068e1e2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0068e1e4: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x68e1e9u); f_0069792c();
    /* 0068e1e9: mov edi, eax */ r_edi = r_eax;
    /* 0068e1eb: jmp 0x68e203 */ goto L_0068e203;
L_0068e1ed:; BB(0x0068e1ed);
    /* 0068e1ed: lea ecx, [esi + 0xdf8] */ r_ecx = (u32)(r_esi+0xdf8u);
    /* 0068e1f3: mov dword ptr [esp + 0xa0], ecx */ W32((u32)(r_esp+0xa0u), r_ecx);
    /* 0068e1fa: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0068e1fc: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x68e201u); f_0069792c();
    /* 0068e201: mov edi, eax */ r_edi = r_eax;
L_0068e203:; BB(0x0068e203);
    /* 0068e203: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068e205: je 0x68e22c */ if (fZ) goto L_0068e22c;
L_0068e207:; BB(0x0068e207);
    /* 0068e207: lea ecx, [esp + 0x54] */ r_ecx = (u32)(r_esp+0x54u);
    /* 0068e20b: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0068e20e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068e20f: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 0068e211: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068e212: lea eax, [esp + 0x2c] */ r_eax = (u32)(r_esp+0x2cu);
    /* 0068e216: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068e217: mov ecx, edi */ r_ecx = r_edi;
    /* 0068e219: call dword ptr [edx + 0x5c] */ { u32 t = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, 0x68e21cu); call_ind(t); }
    /* 0068e21c: movzx edx, byte ptr [edi + 0xf2] */ r_edx = (u32)R8((u32)(r_edi+0xf2u));
    /* 0068e223: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068e226: je 0x68e473 */ if (fZ) goto L_0068e473;
L_0068e22c:; BB(0x0068e22c);
    /* 0068e22c: lea edi, [esp + 0x24] */ r_edi = (u32)(r_esp+0x24u);
    /* 0068e230: lea edx, [esp + 0x54] */ r_edx = (u32)(r_esp+0x54u);
    /* 0068e234: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0068e237: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0068e239: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0068e23b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068e23c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068e23d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0068e23e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0068e23f: call 0x5d330c */ r_esp -= 4; W32(r_esp, 0x68e244u); f_005d330c();
    /* 0068e244: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0068e245: call 0x6ac458 */ r_esp -= 4; W32(r_esp, 0x68e24au); f_006ac458();
    /* 0068e24a: movsx edx, word ptr [esp + 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esp+0x4u));
    /* 0068e24f: movsx eax, word ptr [eax] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax));
    /* 0068e252: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068e253: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0068e255: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068e256: call 0x7a8f0c */ r_esp -= 4; W32(r_esp, 0x68e25bu); f_007a8f0c();
    /* 0068e25b: mov word ptr [esp + 0x10], ax */ W16((u32)(r_esp+0x10u), (u16)r_eax);
    /* 0068e260: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0068e261: call 0x6ac458 */ r_esp -= 4; W32(r_esp, 0x68e266u); f_006ac458();
    /* 0068e266: movsx edx, word ptr [esp + 0x16] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esp+0x16u));
    /* 0068e26b: movsx eax, word ptr [eax + 2] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x2u));
    /* 0068e26f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068e270: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0068e272: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068e273: call 0x7a8f0c */ r_esp -= 4; W32(r_esp, 0x68e278u); f_007a8f0c();
    /* 0068e278: mov word ptr [esp + 0x22], ax */ W16((u32)(r_esp+0x22u), (u16)r_eax);
    /* 0068e27d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0068e27e: call 0x6ac458 */ r_esp -= 4; W32(r_esp, 0x68e283u); f_006ac458();
    /* 0068e283: movsx edx, word ptr [esp + 0x28] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esp+0x28u));
    /* 0068e288: movsx eax, word ptr [eax + 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x4u));
    /* 0068e28c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068e28d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0068e28f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068e290: call 0x7a8f0c */ r_esp -= 4; W32(r_esp, 0x68e295u); f_007a8f0c();
    /* 0068e295: mov word ptr [esp + 0x34], ax */ W16((u32)(r_esp+0x34u), (u16)r_eax);
    /* 0068e29a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0068e29b: call 0x6ac458 */ r_esp -= 4; W32(r_esp, 0x68e2a0u); f_006ac458();
    /* 0068e2a0: movsx edx, word ptr [esp + 0x3c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esp+0x3cu));
    /* 0068e2a5: movsx eax, word ptr [eax + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x8u));
    /* 0068e2a9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068e2aa: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0068e2ac: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068e2ad: call 0x7a8f0c */ r_esp -= 4; W32(r_esp, 0x68e2b2u); f_007a8f0c();
    /* 0068e2b2: mov word ptr [esp + 0x48], ax */ W16((u32)(r_esp+0x48u), (u16)r_eax);
    /* 0068e2b7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0068e2b8: call 0x6ac458 */ r_esp -= 4; W32(r_esp, 0x68e2bdu); f_006ac458();
    /* 0068e2bd: movsx edx, word ptr [esp + 0x4e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esp+0x4eu));
    /* 0068e2c2: movsx eax, word ptr [eax + 0xa] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0xau));
    /* 0068e2c6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068e2c7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0068e2c9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068e2ca: call 0x7a8f0c */ r_esp -= 4; W32(r_esp, 0x68e2cfu); f_007a8f0c();
    /* 0068e2cf: mov word ptr [esp + 0x5a], ax */ W16((u32)(r_esp+0x5au), (u16)r_eax);
    /* 0068e2d4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0068e2d5: call 0x6ac458 */ r_esp -= 4; W32(r_esp, 0x68e2dau); f_006ac458();
    /* 0068e2da: movsx edx, word ptr [esp + 0x60] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esp+0x60u));
    /* 0068e2df: movsx eax, word ptr [eax + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0xcu));
    /* 0068e2e3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068e2e4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0068e2e6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068e2e7: call 0x7a8f0c */ r_esp -= 4; W32(r_esp, 0x68e2ecu); f_007a8f0c();
    /* 0068e2ec: mov word ptr [esp + 0x6c], ax */ W16((u32)(r_esp+0x6cu), (u16)r_eax);
    /* 0068e2f1: lea ebx, [esp + 0x60] */ r_ebx = (u32)(r_esp+0x60u);
    /* 0068e2f5: lea edx, [esp + 0x84] */ r_edx = (u32)(r_esp+0x84u);
    /* 0068e2fc: lea eax, [esp + 0xb4] */ r_eax = (u32)(r_esp+0xb4u);
    /* 0068e303: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068e304: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068e305: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0068e306: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0068e307: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0068e308: call 0x69807c */ r_esp -= 4; W32(r_esp, 0x68e30du); f_0069807c();
    /* 0068e30d: movsx ebx, word ptr [esp + 0x74] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_esp+0x74u));
    /* 0068e312: movsx edx, word ptr [esp + 0x98] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esp+0x98u));
    /* 0068e31a: movzx edi, word ptr [esp + 0x9a] */ r_edi = (u32)R16((u32)(r_esp+0x9au));
    /* 0068e322: fld dword ptr [esi + 0x278] */ FPUSH(R_F32((u32)(r_esi+0x278u)));
    /* 0068e328: movsx ecx, word ptr [ebp + 2] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x2u));
    /* 0068e32c: lea eax, [edx + ebx] */ r_eax = (u32)(r_edx+r_ebx);
    /* 0068e32f: mov dword ptr [esp + 0xe8], eax */ W32((u32)(r_esp+0xe8u), r_eax);
    /* 0068e336: fild dword ptr [esp + 0xe8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0xe8u)));
    /* 0068e33d: mov dword ptr [esp + 0xf0], ebx */ W32((u32)(r_esp+0xf0u), r_ebx);
    /* 0068e344: fild dword ptr [esp + 0xf0] */ FPUSH((long double)(i32)R32((u32)(r_esp+0xf0u)));
    /* 0068e34b: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0068e34d: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0068e34f: sub edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0068e351: fnstcw word ptr [esp + 0xf8] */ W16((u32)(r_esp+0xf8u), fcw);
    /* 0068e358: movzx eax, word ptr [esp + 0xf8] */ r_eax = (u32)R16((u32)(r_esp+0xf8u));
    /* 0068e360: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0068e365: mov dword ptr [esp + 0x100], eax */ W32((u32)(r_esp+0x100u), r_eax);
    /* 0068e36c: fldcw word ptr [esp + 0x100] */ fcw = R16((u32)(r_esp+0x100u));
    /* 0068e373: fistp dword ptr [esp + 0x108] */ W32((u32)(r_esp+0x108u), (u32)fx_int32(ST(0))); FPOP();
    /* 0068e37a: fldcw word ptr [esp + 0xf8] */ fcw = R16((u32)(r_esp+0xf8u));
    /* 0068e381: mov ebx, dword ptr [esp + 0x108] */ r_ebx = R32((u32)(r_esp+0x108u));
    /* 0068e388: movsx eax, di */ r_eax = (u32)(i32)(i16)(u16)r_edi;
    /* 0068e38b: mov dword ptr [esp + 0xf0], eax */ W32((u32)(r_esp+0xf0u), r_eax);
    /* 0068e392: fild dword ptr [esp + 0xf0] */ FPUSH((long double)(i32)R32((u32)(r_esp+0xf0u)));
    /* 0068e399: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 0068e39b: mov dword ptr [esp + 0xf0], ecx */ W32((u32)(r_esp+0xf0u), r_ecx);
    /* 0068e3a2: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0068e3a4: fnstcw word ptr [esp + 0xf8] */ W16((u32)(r_esp+0xf8u), fcw);
    /* 0068e3ab: movzx eax, word ptr [esp + 0xf8] */ r_eax = (u32)R16((u32)(r_esp+0xf8u));
    /* 0068e3b3: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0068e3b8: mov dword ptr [esp + 0x100], eax */ W32((u32)(r_esp+0x100u), r_eax);
    /* 0068e3bf: fldcw word ptr [esp + 0x100] */ fcw = R16((u32)(r_esp+0x100u));
    /* 0068e3c6: fistp dword ptr [esp + 0x108] */ W32((u32)(r_esp+0x108u), (u32)fx_int32(ST(0))); FPOP();
    /* 0068e3cd: fldcw word ptr [esp + 0xf8] */ fcw = R16((u32)(r_esp+0xf8u));
    /* 0068e3d4: fild dword ptr [esp + 0xf0] */ FPUSH((long double)(i32)R32((u32)(r_esp+0xf0u)));
    /* 0068e3db: add ebx, dword ptr [esp + 0x108] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esp+0x108u)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0068e3e2: mov word ptr [ebp], bx */ W16((u32)(r_ebp), (u16)r_ebx);
    /* 0068e3e6: fld dword ptr [esi + 0x284] */ FPUSH(R_F32((u32)(r_esi+0x284u)));
    /* 0068e3ec: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0068e3ee: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0068e3f0: fnstcw word ptr [esp + 0xf8] */ W16((u32)(r_esp+0xf8u), fcw);
    /* 0068e3f7: movzx eax, word ptr [esp + 0xf8] */ r_eax = (u32)R16((u32)(r_esp+0xf8u));
    /* 0068e3ff: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0068e404: mov dword ptr [esp + 0x100], eax */ W32((u32)(r_esp+0x100u), r_eax);
    /* 0068e40b: fldcw word ptr [esp + 0x100] */ fcw = R16((u32)(r_esp+0x100u));
    /* 0068e412: fistp dword ptr [esp + 0x108] */ W32((u32)(r_esp+0x108u), (u32)fx_int32(ST(0))); FPOP();
    /* 0068e419: fldcw word ptr [esp + 0xf8] */ fcw = R16((u32)(r_esp+0xf8u));
    /* 0068e420: mov eax, 1 */ r_eax = 0x1u;
    /* 0068e425: mov esi, dword ptr [esp + 0x108] */ r_esi = R32((u32)(r_esp+0x108u));
    /* 0068e42c: mov word ptr [ebp + 2], si */ W16((u32)(r_ebp+0x2u), (u16)r_esi);
    /* 0068e430: add esp, 0x118 */ {  u32 a = r_esp; u32 b = 0x118u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068e436: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0068e437: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068e438: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0068e439: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068e43a: ret 8 */ FN_RET(0x0068e030); r_esp += 12; return;
L_0068e43d:; BB(0x0068e43d);
    /* 0068e43d: lea ecx, [esi + 0xdf8] */ r_ecx = (u32)(r_esi+0xdf8u);
    /* 0068e443: mov dword ptr [esp + 0xa0], ecx */ W32((u32)(r_esp+0xa0u), r_ecx);
    /* 0068e44a: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0068e44c: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x68e451u); f_0069792c();
    /* 0068e451: mov edi, eax */ r_edi = r_eax;
    /* 0068e453: jmp 0x68e203 */ goto L_0068e203;
L_0068e458:; BB(0x0068e458);
    /* 0068e458: lea ecx, [esi + 0xdf8] */ r_ecx = (u32)(r_esi+0xdf8u);
    /* 0068e45e: mov dword ptr [esp + 0xa0], ecx */ W32((u32)(r_esp+0xa0u), r_ecx);
    /* 0068e465: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0068e467: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x68e46cu); f_0069792c();
    /* 0068e46c: mov edi, eax */ r_edi = r_eax;
    /* 0068e46e: jmp 0x68e203 */ goto L_0068e203;
L_0068e473:; BB(0x0068e473);
    /* 0068e473: movzx eax, byte ptr [edi + 0xf3] */ r_eax = (u32)R8((u32)(r_edi+0xf3u));
    /* 0068e47a: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068e47d: jne 0x68e22c */ if (!fZ) goto L_0068e22c;
L_0068e483:; BB(0x0068e483);
    /* 0068e483: mov ebx, dword ptr [esp + 0xa0] */ r_ebx = R32((u32)(r_esp+0xa0u));
    /* 0068e48a: mov dword ptr [esp + 0x9c], esi */ W32((u32)(r_esp+0x9cu), r_esi);
    /* 0068e491: mov edi, 9 */ r_edi = 0x9u;
L_0068e496:; BB(0x0068e496);
    /* 0068e496: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0068e497: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0068e499: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x68e49eu); f_0069792c();
    /* 0068e49e: mov ecx, eax */ r_ecx = r_eax;
    /* 0068e4a0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068e4a2: je 0x68e4b7 */ if (fZ) goto L_0068e4b7;
L_0068e4a4:; BB(0x0068e4a4);
    /* 0068e4a4: lea eax, [esp + 0x24] */ r_eax = (u32)(r_esp+0x24u);
    /* 0068e4a8: lea esi, [esp + 0x54] */ r_esi = (u32)(r_esp+0x54u);
    /* 0068e4ac: lea ebp, [esp] */ r_ebp = (u32)(r_esp);
    /* 0068e4af: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0068e4b0: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0068e4b2: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0068e4b3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068e4b4: call dword ptr [edx + 0x5c] */ { u32 t = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, 0x68e4b7u); call_ind(t); }
L_0068e4b7:; BB(0x0068e4b7);
    /* 0068e4b7: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0068e4ba: cmp edi, 0xc */ {  u32 a = r_edi; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0068e4bd: jle 0x68e496 */ if ((fZ||fS!=fO)) goto L_0068e496;
L_0068e4bf:; BB(0x0068e4bf);
    /* 0068e4bf: mov ebx, dword ptr [esp + 0xbc] */ r_ebx = R32((u32)(r_esp+0xbcu));
    /* 0068e4c6: mov ebp, dword ptr [esp + 0xb8] */ r_ebp = R32((u32)(r_esp+0xb8u));
    /* 0068e4cd: mov esi, dword ptr [esp + 0x9c] */ r_esi = R32((u32)(r_esp+0x9cu));
    /* 0068e4d4: jmp 0x68e22c */ goto L_0068e22c;
L_0068e4d9:; BB(0x0068e4d9);
    /* 0068e4d9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068e4db: add esp, 0xa4 */ {  u32 a = r_esp; u32 b = 0xa4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068e4e1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0068e4e2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068e4e3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0068e4e4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068e4e5: ret 8 */ FN_RET(0x0068e030); r_esp += 12; return;
}

void f_0068e4e8(void) /* sub_68E4E8 */
{
    FN_ENTER(0x0068e4e8);
    /* 0068e4e8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0068e4e9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0068e4ea: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0068e4eb: sub esp, 0xa4 */ {  u32 a = r_esp; u32 b = 0xa4u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0068e4f1: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0068e4f3: mov ebx, dword ptr [esp + 0xb4] */ r_ebx = R32((u32)(r_esp+0xb4u));
    /* 0068e4fa: mov ecx, dword ptr [ebp + 0xdf4] */ r_ecx = R32((u32)(r_ebp+0xdf4u));
    /* 0068e500: push dword ptr [esp + 0xb8] */ { u32 v = R32((u32)(r_esp+0xb8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0068e507: call 0x6a6a60 */ r_esp -= 4; W32(r_esp, 0x68e50cu); f_006a6a60();
    /* 0068e50c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068e50e: je 0x68e887 */ if (fZ) goto L_0068e887;
L_0068e514:; BB(0x0068e514);
    /* 0068e514: mov ecx, eax */ r_ecx = r_eax;
    /* 0068e516: call 0x6a60dc */ r_esp -= 4; W32(r_esp, 0x68e51bu); f_006a60dc();
    /* 0068e51b: mov esi, eax */ r_esi = r_eax;
    /* 0068e51d: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068e51f: je 0x68e887 */ if (fZ) goto L_0068e887;
L_0068e525:; BB(0x0068e525);
    /* 0068e525: mov edx, dword ptr [esi + 0xdc] */ r_edx = R32((u32)(r_esi+0xdcu));
    /* 0068e52b: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0068e52e: jne 0x68e534 */ if (!fZ) goto L_0068e534;
L_0068e530:; BB(0x0068e530);
    /* 0068e530: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0068e532: jmp 0x68e542 */ goto L_0068e542;
L_0068e534:; BB(0x0068e534);
    /* 0068e534: test dl, 8 */ {  u32 a = (u8)r_edx; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0068e537: je 0x68e540 */ if (fZ) goto L_0068e540;
L_0068e539:; BB(0x0068e539);
    /* 0068e539: mov edx, 1 */ r_edx = 0x1u;
    /* 0068e53e: jmp 0x68e542 */ goto L_0068e542;
L_0068e540:; BB(0x0068e540);
    /* 0068e540: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_0068e542:; BB(0x0068e542);
    /* 0068e542: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068e544: jne 0x68e564 */ if (!fZ) goto L_0068e564;
L_0068e546:; BB(0x0068e546);
    /* 0068e546: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 0068e548: mov ecx, esi */ r_ecx = r_esi;
    /* 0068e54a: call dword ptr [edx + 0x7c] */ { u32 t = R32((u32)(r_edx+0x7cu)); r_esp -= 4; W32(r_esp, 0x68e54du); call_ind(t); }
    /* 0068e54d: lea ecx, [ebp + 0xdf8] */ r_ecx = (u32)(r_ebp+0xdf8u);
    /* 0068e553: movsx edx, al */ r_edx = (u32)(i32)(i8)(u8)r_eax;
    /* 0068e556: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068e557: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x68e55cu); f_0069792c();
    /* 0068e55c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068e55e: je 0x68e895 */ if (fZ) goto L_0068e895;
L_0068e564:; BB(0x0068e564);
    /* 0068e564: lea ecx, [esp + 0x30] */ r_ecx = (u32)(r_esp+0x30u);
    /* 0068e568: mov edx, dword ptr [ebp + 0x31c] */ r_edx = R32((u32)(r_ebp+0x31cu));
    /* 0068e56e: movzx eax, word ptr [edx] */ r_eax = (u32)R16((u32)(r_edx));
    /* 0068e571: mov word ptr [esp], ax */ W16((u32)(r_esp), (u16)r_eax);
    /* 0068e575: movzx eax, word ptr [edx + 2] */ r_eax = (u32)R16((u32)(r_edx+0x2u));
    /* 0068e579: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 0068e57e: movzx eax, word ptr [edx + 4] */ r_eax = (u32)R16((u32)(r_edx+0x4u));
    /* 0068e582: mov word ptr [esp + 4], ax */ W16((u32)(r_esp+0x4u), (u16)r_eax);
    /* 0068e587: movzx eax, word ptr [edx + 6] */ r_eax = (u32)R16((u32)(r_edx+0x6u));
    /* 0068e58b: mov word ptr [esp + 6], ax */ W16((u32)(r_esp+0x6u), (u16)r_eax);
    /* 0068e590: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0068e593: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0068e597: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 0068e59a: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0068e59e: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 0068e5a1: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0068e5a5: movzx eax, word ptr [edx + 0x14] */ r_eax = (u32)R16((u32)(r_edx+0x14u));
    /* 0068e5a9: mov word ptr [esp + 0x14], ax */ W16((u32)(r_esp+0x14u), (u16)r_eax);
    /* 0068e5ae: movzx eax, word ptr [edx + 0x16] */ r_eax = (u32)R16((u32)(r_edx+0x16u));
    /* 0068e5b2: mov word ptr [esp + 0x16], ax */ W16((u32)(r_esp+0x16u), (u16)r_eax);
    /* 0068e5b7: movzx eax, word ptr [edx + 0x18] */ r_eax = (u32)R16((u32)(r_edx+0x18u));
    /* 0068e5bb: mov word ptr [esp + 0x18], ax */ W16((u32)(r_esp+0x18u), (u16)r_eax);
    /* 0068e5c0: movzx eax, word ptr [edx + 0x1a] */ r_eax = (u32)R16((u32)(r_edx+0x1au));
    /* 0068e5c4: mov word ptr [esp + 0x1a], ax */ W16((u32)(r_esp+0x1au), (u16)r_eax);
    /* 0068e5c9: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0068e5cc: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 0068e5d0: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 0068e5d3: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0068e5d7: mov eax, dword ptr [edx + 0x24] */ r_eax = R32((u32)(r_edx+0x24u));
    /* 0068e5da: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 0068e5de: mov eax, dword ptr [edx + 0x28] */ r_eax = R32((u32)(r_edx+0x28u));
    /* 0068e5e1: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 0068e5e5: mov edx, dword ptr [edx + 0x2c] */ r_edx = R32((u32)(r_edx+0x2cu));
    /* 0068e5e8: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 0068e5ec: mov edx, dword ptr [ebp + 0x320] */ r_edx = R32((u32)(r_ebp+0x320u));
    /* 0068e5f2: movzx eax, word ptr [edx] */ r_eax = (u32)R16((u32)(r_edx));
    /* 0068e5f5: mov word ptr [esp + 0x30], ax */ W16((u32)(r_esp+0x30u), (u16)r_eax);
    /* 0068e5fa: movzx eax, word ptr [edx + 2] */ r_eax = (u32)R16((u32)(r_edx+0x2u));
    /* 0068e5fe: mov word ptr [esp + 0x32], ax */ W16((u32)(r_esp+0x32u), (u16)r_eax);
    /* 0068e603: movzx eax, word ptr [edx + 4] */ r_eax = (u32)R16((u32)(r_edx+0x4u));
    /* 0068e607: mov word ptr [esp + 0x34], ax */ W16((u32)(r_esp+0x34u), (u16)r_eax);
    /* 0068e60c: movzx eax, word ptr [edx + 6] */ r_eax = (u32)R16((u32)(r_edx+0x6u));
    /* 0068e610: mov word ptr [esp + 0x36], ax */ W16((u32)(r_esp+0x36u), (u16)r_eax);
    /* 0068e615: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0068e619: mov word ptr [esp + 0x38], ax */ W16((u32)(r_esp+0x38u), (u16)r_eax);
    /* 0068e61e: movzx eax, word ptr [edx + 0xa] */ r_eax = (u32)R16((u32)(r_edx+0xau));
    /* 0068e622: mov word ptr [esp + 0x3a], ax */ W16((u32)(r_esp+0x3au), (u16)r_eax);
    /* 0068e627: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 0068e62a: mov dword ptr [esp + 0x3c], eax */ W32((u32)(r_esp+0x3cu), r_eax);
    /* 0068e62e: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 0068e631: mov dword ptr [esp + 0x40], eax */ W32((u32)(r_esp+0x40u), r_eax);
    /* 0068e635: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 0068e638: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 0068e63c: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 0068e63f: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 0068e643: mov edx, dword ptr [edx + 0x1c] */ r_edx = R32((u32)(r_edx+0x1cu));
    /* 0068e646: mov dword ptr [esp + 0x4c], edx */ W32((u32)(r_esp+0x4cu), r_edx);
    /* 0068e64a: mov edx, dword ptr [ebp + 0x2b4] */ r_edx = R32((u32)(r_ebp+0x2b4u));
    /* 0068e650: movzx eax, word ptr [edx] */ r_eax = (u32)R16((u32)(r_edx));
    /* 0068e653: mov word ptr [esp + 0x50], ax */ W16((u32)(r_esp+0x50u), (u16)r_eax);
    /* 0068e658: movzx eax, word ptr [edx + 2] */ r_eax = (u32)R16((u32)(r_edx+0x2u));
    /* 0068e65c: mov word ptr [esp + 0x52], ax */ W16((u32)(r_esp+0x52u), (u16)r_eax);
    /* 0068e661: movzx eax, word ptr [edx + 4] */ r_eax = (u32)R16((u32)(r_edx+0x4u));
    /* 0068e665: mov word ptr [esp + 0x54], ax */ W16((u32)(r_esp+0x54u), (u16)r_eax);
    /* 0068e66a: movzx eax, word ptr [edx + 6] */ r_eax = (u32)R16((u32)(r_edx+0x6u));
    /* 0068e66e: mov word ptr [esp + 0x56], ax */ W16((u32)(r_esp+0x56u), (u16)r_eax);
    /* 0068e673: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0068e677: mov word ptr [esp + 0x58], ax */ W16((u32)(r_esp+0x58u), (u16)r_eax);
    /* 0068e67c: movzx eax, word ptr [edx + 0xa] */ r_eax = (u32)R16((u32)(r_edx+0xau));
    /* 0068e680: mov word ptr [esp + 0x5a], ax */ W16((u32)(r_esp+0x5au), (u16)r_eax);
    /* 0068e685: movzx eax, word ptr [edx + 0xc] */ r_eax = (u32)R16((u32)(r_edx+0xcu));
    /* 0068e689: mov word ptr [esp + 0x5c], ax */ W16((u32)(r_esp+0x5cu), (u16)r_eax);
    /* 0068e68e: movzx eax, word ptr [edx + 0xe] */ r_eax = (u32)R16((u32)(r_edx+0xeu));
    /* 0068e692: mov word ptr [esp + 0x5e], ax */ W16((u32)(r_esp+0x5eu), (u16)r_eax);
    /* 0068e697: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 0068e69a: mov dword ptr [esp + 0x60], eax */ W32((u32)(r_esp+0x60u), r_eax);
    /* 0068e69e: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 0068e6a1: mov dword ptr [esp + 0x64], eax */ W32((u32)(r_esp+0x64u), r_eax);
    /* 0068e6a5: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 0068e6a8: mov dword ptr [esp + 0x68], eax */ W32((u32)(r_esp+0x68u), r_eax);
    /* 0068e6ac: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0068e6af: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 0068e6b3: mov edx, dword ptr [edx + 0x20] */ r_edx = R32((u32)(r_edx+0x20u));
    /* 0068e6b6: mov dword ptr [esp + 0x70], edx */ W32((u32)(r_esp+0x70u), r_edx);
    /* 0068e6ba: lea eax, [esp + 0x50] */ r_eax = (u32)(r_esp+0x50u);
    /* 0068e6be: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068e6bf: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 0068e6c1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068e6c2: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 0068e6c6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068e6c7: mov ecx, esi */ r_ecx = r_esi;
    /* 0068e6c9: call dword ptr [edx + 0x5c] */ { u32 t = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, 0x68e6ccu); call_ind(t); }
    /* 0068e6cc: movzx edx, byte ptr [esi + 0xf2] */ r_edx = (u32)R8((u32)(r_esi+0xf2u));
    /* 0068e6d3: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068e6d6: je 0x68e819 */ if (fZ) goto L_0068e819;
L_0068e6dc:; BB(0x0068e6dc);
    /* 0068e6dc: lea esi, [esp + 0x50] */ r_esi = (u32)(r_esp+0x50u);
    /* 0068e6e0: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0068e6e3: lea eax, [esp + 0x30] */ r_eax = (u32)(r_esp+0x30u);
    /* 0068e6e7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068e6e8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068e6e9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0068e6ea: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0068e6eb: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0068e6ec: call 0x69807c */ r_esp -= 4; W32(r_esp, 0x68e6f1u); f_0069807c();
    /* 0068e6f1: movsx esi, word ptr [esp + 0x64] */ r_esi = (u32)(i32)(i16)R16((u32)(r_esp+0x64u));
    /* 0068e6f6: movsx ecx, word ptr [esp + 0x14] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_esp+0x14u));
    /* 0068e6fb: fld dword ptr [ebp + 0x278] */ FPUSH(R_F32((u32)(r_ebp+0x278u)));
    /* 0068e701: mov dword ptr [esp + 0x90], esi */ W32((u32)(r_esp+0x90u), r_esi);
    /* 0068e708: fild dword ptr [esp + 0x90] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x90u)));
    /* 0068e70f: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0068e711: lea eax, [ecx + esi] */ r_eax = (u32)(r_ecx+r_esi);
    /* 0068e714: mov dword ptr [esp + 0x88], eax */ W32((u32)(r_esp+0x88u), r_eax);
    /* 0068e71b: fild dword ptr [esp + 0x88] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x88u)));
    /* 0068e722: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0068e724: fnstcw word ptr [esp + 0x98] */ W16((u32)(r_esp+0x98u), fcw);
    /* 0068e72b: movzx eax, word ptr [esp + 0x98] */ r_eax = (u32)R16((u32)(r_esp+0x98u));
    /* 0068e733: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0068e738: mov dword ptr [esp + 0xa0], eax */ W32((u32)(r_esp+0xa0u), r_eax);
    /* 0068e73f: fldcw word ptr [esp + 0xa0] */ fcw = R16((u32)(r_esp+0xa0u));
    /* 0068e746: fistp dword ptr [esp + 0xa8] */ W32((u32)(r_esp+0xa8u), (u32)fx_int32(ST(0))); FPOP();
    /* 0068e74d: fldcw word ptr [esp + 0x98] */ fcw = R16((u32)(r_esp+0x98u));
    /* 0068e754: movzx eax, word ptr [esp + 0x16] */ r_eax = (u32)R16((u32)(r_esp+0x16u));
    /* 0068e759: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0068e75b: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0068e75e: mov edx, dword ptr [esp + 0xa8] */ r_edx = R32((u32)(r_esp+0xa8u));
    /* 0068e765: mov dword ptr [esp + 0x90], eax */ W32((u32)(r_esp+0x90u), r_eax);
    /* 0068e76c: fild dword ptr [esp + 0x90] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x90u)));
    /* 0068e773: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 0068e775: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0068e777: fnstcw word ptr [esp + 0x98] */ W16((u32)(r_esp+0x98u), fcw);
    /* 0068e77e: movzx eax, word ptr [esp + 0x98] */ r_eax = (u32)R16((u32)(r_esp+0x98u));
    /* 0068e786: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0068e78b: mov dword ptr [esp + 0xa0], eax */ W32((u32)(r_esp+0xa0u), r_eax);
    /* 0068e792: fldcw word ptr [esp + 0xa0] */ fcw = R16((u32)(r_esp+0xa0u));
    /* 0068e799: fistp dword ptr [esp + 0xa8] */ W32((u32)(r_esp+0xa8u), (u32)fx_int32(ST(0))); FPOP();
    /* 0068e7a0: fldcw word ptr [esp + 0x98] */ fcw = R16((u32)(r_esp+0x98u));
    /* 0068e7a7: add edx, dword ptr [esp + 0xa8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0xa8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0068e7ae: mov word ptr [ebx], dx */ W16((u32)(r_ebx), (u16)r_edx);
    /* 0068e7b1: fld dword ptr [ebp + 0x284] */ FPUSH(R_F32((u32)(r_ebp+0x284u)));
    /* 0068e7b7: movsx ebp, word ptr [ebx + 2] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_ebx+0x2u));
    /* 0068e7bb: mov dword ptr [esp + 0x90], ebp */ W32((u32)(r_esp+0x90u), r_ebp);
    /* 0068e7c2: fild dword ptr [esp + 0x90] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x90u)));
    /* 0068e7c9: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 0068e7cb: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0068e7cd: fnstcw word ptr [esp + 0x98] */ W16((u32)(r_esp+0x98u), fcw);
    /* 0068e7d4: movzx eax, word ptr [esp + 0x98] */ r_eax = (u32)R16((u32)(r_esp+0x98u));
    /* 0068e7dc: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0068e7e1: mov dword ptr [esp + 0xa0], eax */ W32((u32)(r_esp+0xa0u), r_eax);
    /* 0068e7e8: fldcw word ptr [esp + 0xa0] */ fcw = R16((u32)(r_esp+0xa0u));
    /* 0068e7ef: fistp dword ptr [esp + 0xa8] */ W32((u32)(r_esp+0xa8u), (u32)fx_int32(ST(0))); FPOP();
    /* 0068e7f6: fldcw word ptr [esp + 0x98] */ fcw = R16((u32)(r_esp+0x98u));
    /* 0068e7fd: mov eax, dword ptr [esp + 0xa8] */ r_eax = R32((u32)(r_esp+0xa8u));
    /* 0068e804: mov word ptr [ebx + 2], ax */ W16((u32)(r_ebx+0x2u), (u16)r_eax);
    /* 0068e808: mov eax, 2 */ r_eax = 0x2u;
    /* 0068e80d: add esp, 0xb8 */ {  u32 a = r_esp; u32 b = 0xb8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068e813: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0068e814: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068e815: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0068e816: ret 8 */ FN_RET(0x0068e4e8); r_esp += 12; return;
L_0068e819:; BB(0x0068e819);
    /* 0068e819: movzx eax, byte ptr [esi + 0xf3] */ r_eax = (u32)R8((u32)(r_esi+0xf3u));
    /* 0068e820: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068e823: jne 0x68e6dc */ if (!fZ) goto L_0068e6dc;
L_0068e829:; BB(0x0068e829);
    /* 0068e829: mov dword ptr [esp + 0x9c], ebp */ W32((u32)(r_esp+0x9cu), r_ebp);
    /* 0068e830: mov dword ptr [esp + 0xa0], edi */ W32((u32)(r_esp+0xa0u), r_edi);
    /* 0068e837: mov eax, 9 */ r_eax = 0x9u;
    /* 0068e83c: lea esi, [ebp + 0xdf8] */ r_esi = (u32)(r_ebp+0xdf8u);
    /* 0068e842: mov ebx, eax */ r_ebx = r_eax;
L_0068e844:; BB(0x0068e844);
    /* 0068e844: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0068e845: mov ecx, esi */ r_ecx = r_esi;
    /* 0068e847: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x68e84cu); f_0069792c();
    /* 0068e84c: mov ecx, eax */ r_ecx = r_eax;
    /* 0068e84e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068e850: je 0x68e865 */ if (fZ) goto L_0068e865;
L_0068e852:; BB(0x0068e852);
    /* 0068e852: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0068e855: lea edi, [esp + 0x30] */ r_edi = (u32)(r_esp+0x30u);
    /* 0068e859: lea ebp, [esp + 0x50] */ r_ebp = (u32)(r_esp+0x50u);
    /* 0068e85d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0068e85e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0068e860: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0068e861: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068e862: call dword ptr [edx + 0x5c] */ { u32 t = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, 0x68e865u); call_ind(t); }
L_0068e865:; BB(0x0068e865);
    /* 0068e865: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0068e868: cmp ebx, 0xc */ {  u32 a = r_ebx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0068e86b: jle 0x68e844 */ if ((fZ||fS!=fO)) goto L_0068e844;
L_0068e86d:; BB(0x0068e86d);
    /* 0068e86d: mov ebx, dword ptr [esp + 0xb4] */ r_ebx = R32((u32)(r_esp+0xb4u));
    /* 0068e874: mov ebp, dword ptr [esp + 0x9c] */ r_ebp = R32((u32)(r_esp+0x9cu));
    /* 0068e87b: mov edi, dword ptr [esp + 0xa0] */ r_edi = R32((u32)(r_esp+0xa0u));
    /* 0068e882: jmp 0x68e6dc */ goto L_0068e6dc;
L_0068e887:; BB(0x0068e887);
    /* 0068e887: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068e889: add esp, 0xa4 */ {  u32 a = r_esp; u32 b = 0xa4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068e88f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0068e890: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068e891: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0068e892: ret 8 */ FN_RET(0x0068e4e8); r_esp += 12; return;
L_0068e895:; BB(0x0068e895);
    /* 0068e895: mov eax, 1 */ r_eax = 0x1u;
    /* 0068e89a: add esp, 0xa4 */ {  u32 a = r_esp; u32 b = 0xa4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068e8a0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0068e8a1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068e8a2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0068e8a3: ret 8 */ FN_RET(0x0068e4e8); r_esp += 12; return;
}

void f_0068e8a8(void) /* sub_68E8A8 */
{
    FN_ENTER(0x0068e8a8);
    /* 0068e8a8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0068e8a9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0068e8aa: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0068e8ab: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0068e8ac: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0068e8af: mov esi, dword ptr [esp + 0x20] */ r_esi = R32((u32)(r_esp+0x20u));
    /* 0068e8b3: movsx edi, word ptr [esi + 0x334] */ r_edi = (u32)(i32)(i16)R16((u32)(r_esi+0x334u));
    /* 0068e8ba: movzx ebp, word ptr [esi + 0x336] */ r_ebp = (u32)R16((u32)(r_esi+0x336u));
    /* 0068e8c1: mov ecx, dword ptr [esp + 0x24] */ r_ecx = R32((u32)(r_esp+0x24u));
    /* 0068e8c5: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0068e8c7: call dword ptr [eax + 0x7c] */ { u32 t = R32((u32)(r_eax+0x7cu)); r_esp -= 4; W32(r_esp, 0x68e8cau); call_ind(t); }
    /* 0068e8ca: mov ecx, dword ptr [esp + 0x24] */ r_ecx = R32((u32)(r_esp+0x24u));
    /* 0068e8ce: lea edx, [esi + 0xdf8] */ r_edx = (u32)(r_esi+0xdf8u);
    /* 0068e8d4: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0068e8d8: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 0068e8db: mov dword ptr [esi + eax*4 + 0xdf8], 0 */ W32((u32)(r_esi+r_eax*4+0xdf8u), 0x0u);
    /* 0068e8e6: mov ebx, dword ptr [ecx] */ r_ebx = R32((u32)(r_ecx));
    /* 0068e8e8: call dword ptr [ebx + 0x4c] */ { u32 t = R32((u32)(r_ebx+0x4cu)); r_esp -= 4; W32(r_esp, 0x68e8ebu); call_ind(t); }
    /* 0068e8eb: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 0068e8ef: movzx edx, byte ptr [eax + 0xf2] */ r_edx = (u32)R8((u32)(r_eax+0xf2u));
    /* 0068e8f6: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068e8f9: je 0x68e9f2 */ if (fZ) goto L_0068e9f2;
L_0068e8ff:; BB(0x0068e8ff);
    /* 0068e8ff: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 0068e903: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 0068e906: mov ebx, 9 */ r_ebx = 0x9u;
L_0068e90b:; BB(0x0068e90b);
    /* 0068e90b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0068e90c: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0068e910: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x68e915u); f_0069792c();
    /* 0068e915: mov ebp, eax */ r_ebp = r_eax;
    /* 0068e917: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068e919: je 0x68e94c */ if (fZ) goto L_0068e94c;
L_0068e91b:; BB(0x0068e91b);
    /* 0068e91b: mov dword ptr [esi + ebx*4 + 0xdf8], 0 */ W32((u32)(r_esi+r_ebx*4+0xdf8u), 0x0u);
    /* 0068e926: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 0068e929: lea edi, [ebx + ebx] */ r_edi = (u32)(r_ebx+r_ebx);
    /* 0068e92c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0068e92e: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x68e931u); call_ind(t); }
    /* 0068e931: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0068e934: movsx edx, bl */ r_edx = (u32)(i32)(i8)(u8)r_ebx;
    /* 0068e937: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068e938: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0068e93a: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x68e93du); call_ind(t); }
    /* 0068e93d: mov dword ptr [esi + edi*2 + 0xdf8], ebp */ W32((u32)(r_esi+r_edi*2+0xdf8u), r_ebp);
    /* 0068e944: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 0068e947: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0068e949: call dword ptr [edx + 0x48] */ { u32 t = R32((u32)(r_edx+0x48u)); r_esp -= 4; W32(r_esp, 0x68e94cu); call_ind(t); }
L_0068e94c:; BB(0x0068e94c);
    /* 0068e94c: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0068e94f: cmp ebx, 0xc */ {  u32 a = r_ebx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0068e952: jle 0x68e90b */ if ((fZ||fS!=fO)) goto L_0068e90b;
L_0068e954:; BB(0x0068e954);
    /* 0068e954: mov ebp, dword ptr [esp + 4] */ r_ebp = R32((u32)(r_esp+0x4u));
    /* 0068e958: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 0068e95b: mov eax, dword ptr [esi + 0x328] */ r_eax = R32((u32)(r_esi+0x328u));
    /* 0068e961: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0068e963: je 0x68e974 */ if (fZ) goto L_0068e974;
L_0068e965:; BB(0x0068e965);
    /* 0068e965: mov ecx, esi */ r_ecx = r_esi;
    /* 0068e967: call 0x691468 */ r_esp -= 4; W32(r_esp, 0x68e96cu); f_00691468();
    /* 0068e96c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068e96d: mov ecx, esi */ r_ecx = r_esi;
    /* 0068e96f: call 0x7aa4c8 */ r_esp -= 4; W32(r_esp, 0x68e974u); f_007aa4c8();
L_0068e974:; BB(0x0068e974);
    /* 0068e974: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 0068e977: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
    /* 0068e97b: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_0068e97d:; BB(0x0068e97d);
    /* 0068e97d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0068e97e: mov ecx, edi */ r_ecx = r_edi;
    /* 0068e980: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x68e985u); f_0069792c();
    /* 0068e985: mov esi, eax */ r_esi = r_eax;
    /* 0068e987: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068e989: je 0x68e9be */ if (fZ) goto L_0068e9be;
L_0068e98b:; BB(0x0068e98b);
    /* 0068e98b: mov ecx, esi */ r_ecx = r_esi;
    /* 0068e98d: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x68e992u); f_008173b4();
    /* 0068e992: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068e994: je 0x68e9be */ if (fZ) goto L_0068e9be;
L_0068e996:; BB(0x0068e996);
    /* 0068e996: mov edx, dword ptr [esi + 0xdc] */ r_edx = R32((u32)(r_esi+0xdcu));
    /* 0068e99c: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0068e99f: jne 0x68e9a5 */ if (!fZ) goto L_0068e9a5;
L_0068e9a1:; BB(0x0068e9a1);
    /* 0068e9a1: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0068e9a3: jmp 0x68e9b3 */ goto L_0068e9b3;
L_0068e9a5:; BB(0x0068e9a5);
    /* 0068e9a5: test dl, 8 */ {  u32 a = (u8)r_edx; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0068e9a8: je 0x68e9b1 */ if (fZ) goto L_0068e9b1;
L_0068e9aa:; BB(0x0068e9aa);
    /* 0068e9aa: mov edx, 1 */ r_edx = 0x1u;
    /* 0068e9af: jmp 0x68e9b3 */ goto L_0068e9b3;
L_0068e9b1:; BB(0x0068e9b1);
    /* 0068e9b1: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_0068e9b3:; BB(0x0068e9b3);
    /* 0068e9b3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068e9b5: je 0x68e9be */ if (fZ) goto L_0068e9be;
L_0068e9b7:; BB(0x0068e9b7);
    /* 0068e9b7: mov ecx, esi */ r_ecx = r_esi;
    /* 0068e9b9: call 0x5c42f4 */ r_esp -= 4; W32(r_esp, 0x68e9beu); f_005c42f4();
L_0068e9be:; BB(0x0068e9be);
    /* 0068e9be: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0068e9c1: cmp ebx, 0xd */ {  u32 a = r_ebx; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0068e9c4: jl 0x68e97d */ if ((fS!=fO)) goto L_0068e97d;
L_0068e9c6:; BB(0x0068e9c6);
    /* 0068e9c6: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 0068e9c9: mov esi, dword ptr [esp + 0x20] */ r_esi = R32((u32)(r_esp+0x20u));
    /* 0068e9cd: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0068e9ce: mov ecx, esi */ r_ecx = r_esi;
    /* 0068e9d0: call 0x770b58 */ r_esp -= 4; W32(r_esp, 0x68e9d5u); f_00770b58();
    /* 0068e9d5: mov word ptr [esi + 0x336], bp */ W16((u32)(r_esi+0x336u), (u16)r_ebp);
    /* 0068e9dc: mov ecx, esi */ r_ecx = r_esi;
    /* 0068e9de: call 0x775270 */ r_esp -= 4; W32(r_esp, 0x68e9e3u); f_00775270();
    /* 0068e9e3: mov ecx, esi */ r_ecx = r_esi;
    /* 0068e9e5: call 0x7776f8 */ r_esp -= 4; W32(r_esp, 0x68e9eau); f_007776f8();
    /* 0068e9ea: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068e9ed: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0068e9ee: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068e9ef: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0068e9f0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068e9f1: ret  */ FN_RET(0x0068e8a8); r_esp += 4; return;
L_0068e9f2:; BB(0x0068e9f2);
    /* 0068e9f2: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 0068e9f6: movzx edx, byte ptr [eax + 0xf3] */ r_edx = (u32)R8((u32)(r_eax+0xf3u));
    /* 0068e9fd: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068ea00: jne 0x68e8ff */ if (!fZ) goto L_0068e8ff;
L_0068ea06:; BB(0x0068ea06);
    /* 0068ea06: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 0068ea09: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
    /* 0068ea0d: mov ebx, 9 */ r_ebx = 0x9u;
L_0068ea12:; BB(0x0068ea12);
    /* 0068ea12: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0068ea13: mov ecx, edi */ r_ecx = r_edi;
    /* 0068ea15: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x68ea1au); f_0069792c();
    /* 0068ea1a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068ea1c: je 0x68ea30 */ if (fZ) goto L_0068ea30;
L_0068ea1e:; BB(0x0068ea1e);
    /* 0068ea1e: mov dword ptr [esi + ebx*4 + 0xdf8], 0 */ W32((u32)(r_esi+r_ebx*4+0xdf8u), 0x0u);
    /* 0068ea29: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0068ea2b: mov ecx, eax */ r_ecx = r_eax;
    /* 0068ea2d: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x68ea30u); call_ind(t); }
L_0068ea30:; BB(0x0068ea30);
    /* 0068ea30: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0068ea33: cmp ebx, 0xc */ {  u32 a = r_ebx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0068ea36: jle 0x68ea12 */ if ((fZ||fS!=fO)) goto L_0068ea12;
L_0068ea38:; BB(0x0068ea38);
    /* 0068ea38: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 0068ea3b: jmp 0x68e8ff */ goto L_0068e8ff;
}

void f_0068ea40(void) /* sub_68EA40 */
{
    FN_ENTER(0x0068ea40);
    /* 0068ea40: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0068ea41: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0068ea42: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0068ea43: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0068ea44: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0068ea47: mov ecx, dword ptr [esp + 0x34] */ r_ecx = R32((u32)(r_esp+0x34u));
    /* 0068ea4b: mov dword ptr [esp + 8], 0xffffffff */ W32((u32)(r_esp+0x8u), 0xffffffffu);
    /* 0068ea53: mov dword ptr [esp + 0xc], 0 */ W32((u32)(r_esp+0xcu), 0x0u);
    /* 0068ea5b: mov byte ptr [esp + 4], 0x26 */ W8((u32)(r_esp+0x4u), 0x26u);
    /* 0068ea60: mov byte ptr [esp + 5], 3 */ W8((u32)(r_esp+0x5u), 0x3u);
    /* 0068ea65: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0068ea67: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0068ea6b: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0068ea6e: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0068ea72: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 0068ea75: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0068ea79: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 0068ea7d: call 0x6a996c */ r_esp -= 4; W32(r_esp, 0x68ea82u); f_006a996c();
    /* 0068ea82: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068ea84: je 0x68ebf6 */ if (fZ) goto L_0068ebf6;
L_0068ea8a:; BB(0x0068ea8a);
    /* 0068ea8a: movzx eax, word ptr [esp + 6] */ r_eax = (u32)R16((u32)(r_esp+0x6u));
    /* 0068ea8f: call 0x68d5ac */ r_esp -= 4; W32(r_esp, 0x68ea94u); f_0068d5ac();
    /* 0068ea94: mov esi, eax */ r_esi = r_eax;
    /* 0068ea96: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068ea98: je 0x68ebf6 */ if (fZ) goto L_0068ebf6;
L_0068ea9e:; BB(0x0068ea9e);
    /* 0068ea9e: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0068eaa2: mov ecx, dword ptr [esi + 0xdf4] */ r_ecx = R32((u32)(r_esi+0xdf4u));
    /* 0068eaa8: call 0x6a6a60 */ r_esp -= 4; W32(r_esp, 0x68eaadu); f_006a6a60();
    /* 0068eaad: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068eaaf: je 0x68ebf6 */ if (fZ) goto L_0068ebf6;
L_0068eab5:; BB(0x0068eab5);
    /* 0068eab5: mov ecx, eax */ r_ecx = r_eax;
    /* 0068eab7: call 0x6a60dc */ r_esp -= 4; W32(r_esp, 0x68eabcu); f_006a60dc();
    /* 0068eabc: mov ebx, eax */ r_ebx = r_eax;
    /* 0068eabe: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068eac0: je 0x68ebf6 */ if (fZ) goto L_0068ebf6;
L_0068eac6:; BB(0x0068eac6);
    /* 0068eac6: movsx ebp, word ptr [esi + 0x334] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_esi+0x334u));
    /* 0068eacd: movzx edx, word ptr [esi + 0x336] */ r_edx = (u32)R16((u32)(r_esi+0x336u));
    /* 0068ead4: mov edi, dword ptr [ebx] */ r_edi = R32((u32)(r_ebx));
    /* 0068ead6: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 0068eada: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0068eadc: call dword ptr [edi + 0x7c] */ { u32 t = R32((u32)(r_edi+0x7cu)); r_esp -= 4; W32(r_esp, 0x68eadfu); call_ind(t); }
    /* 0068eadf: lea edx, [esi + 0xdf8] */ r_edx = (u32)(r_esi+0xdf8u);
    /* 0068eae5: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 0068eae9: movsx edi, al */ r_edi = (u32)(i32)(i8)(u8)r_eax;
    /* 0068eaec: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0068eaee: mov dword ptr [esi + edi*4 + 0xdf8], 0 */ W32((u32)(r_esi+r_edi*4+0xdf8u), 0x0u);
    /* 0068eaf9: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0068eafb: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x68eafeu); call_ind(t); }
    /* 0068eafe: movzx edx, byte ptr [ebx + 0xf2] */ r_edx = (u32)R8((u32)(r_ebx+0xf2u));
    /* 0068eb05: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068eb08: je 0x68ebfe */ if (fZ) goto L_0068ebfe;
L_0068eb0e:; BB(0x0068eb0e);
    /* 0068eb0e: mov dword ptr [esp + 0x10], ebp */ W32((u32)(r_esp+0x10u), r_ebp);
    /* 0068eb12: mov ebx, 9 */ r_ebx = 0x9u;
L_0068eb17:; BB(0x0068eb17);
    /* 0068eb17: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0068eb18: mov ecx, dword ptr [esp + 0x1c] */ r_ecx = R32((u32)(r_esp+0x1cu));
    /* 0068eb1c: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x68eb21u); f_0069792c();
    /* 0068eb21: mov ebp, eax */ r_ebp = r_eax;
    /* 0068eb23: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068eb25: je 0x68eb58 */ if (fZ) goto L_0068eb58;
L_0068eb27:; BB(0x0068eb27);
    /* 0068eb27: mov dword ptr [esi + ebx*4 + 0xdf8], 0 */ W32((u32)(r_esi+r_ebx*4+0xdf8u), 0x0u);
    /* 0068eb32: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 0068eb35: lea edi, [ebx + ebx] */ r_edi = (u32)(r_ebx+r_ebx);
    /* 0068eb38: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0068eb3a: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x68eb3du); call_ind(t); }
    /* 0068eb3d: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0068eb40: movsx edx, bl */ r_edx = (u32)(i32)(i8)(u8)r_ebx;
    /* 0068eb43: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068eb44: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0068eb46: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x68eb49u); call_ind(t); }
    /* 0068eb49: mov dword ptr [esi + edi*2 + 0xdf8], ebp */ W32((u32)(r_esi+r_edi*2+0xdf8u), r_ebp);
    /* 0068eb50: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 0068eb53: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0068eb55: call dword ptr [edx + 0x48] */ { u32 t = R32((u32)(r_edx+0x48u)); r_esp -= 4; W32(r_esp, 0x68eb58u); call_ind(t); }
L_0068eb58:; BB(0x0068eb58);
    /* 0068eb58: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0068eb5b: cmp ebx, 0xc */ {  u32 a = r_ebx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0068eb5e: jle 0x68eb17 */ if ((fZ||fS!=fO)) goto L_0068eb17;
L_0068eb60:; BB(0x0068eb60);
    /* 0068eb60: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 0068eb64: mov edx, dword ptr [esi + 0x328] */ r_edx = R32((u32)(r_esi+0x328u));
    /* 0068eb6a: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0068eb6d: je 0x68eb7e */ if (fZ) goto L_0068eb7e;
L_0068eb6f:; BB(0x0068eb6f);
    /* 0068eb6f: mov ecx, esi */ r_ecx = r_esi;
    /* 0068eb71: call 0x691468 */ r_esp -= 4; W32(r_esp, 0x68eb76u); f_00691468();
    /* 0068eb76: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068eb77: mov ecx, esi */ r_ecx = r_esi;
    /* 0068eb79: call 0x7aa4c8 */ r_esp -= 4; W32(r_esp, 0x68eb7eu); f_007aa4c8();
L_0068eb7e:; BB(0x0068eb7e);
    /* 0068eb7e: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
    /* 0068eb82: mov dword ptr [esp + 0x1c], esi */ W32((u32)(r_esp+0x1cu), r_esi);
    /* 0068eb86: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_0068eb88:; BB(0x0068eb88);
    /* 0068eb88: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0068eb89: mov ecx, edi */ r_ecx = r_edi;
    /* 0068eb8b: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x68eb90u); f_0069792c();
    /* 0068eb90: mov esi, eax */ r_esi = r_eax;
    /* 0068eb92: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068eb94: je 0x68ebc9 */ if (fZ) goto L_0068ebc9;
L_0068eb96:; BB(0x0068eb96);
    /* 0068eb96: mov ecx, esi */ r_ecx = r_esi;
    /* 0068eb98: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x68eb9du); f_008173b4();
    /* 0068eb9d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068eb9f: je 0x68ebc9 */ if (fZ) goto L_0068ebc9;
L_0068eba1:; BB(0x0068eba1);
    /* 0068eba1: mov edx, dword ptr [esi + 0xdc] */ r_edx = R32((u32)(r_esi+0xdcu));
    /* 0068eba7: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0068ebaa: jne 0x68ebb0 */ if (!fZ) goto L_0068ebb0;
L_0068ebac:; BB(0x0068ebac);
    /* 0068ebac: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0068ebae: jmp 0x68ebbe */ goto L_0068ebbe;
L_0068ebb0:; BB(0x0068ebb0);
    /* 0068ebb0: test dl, 8 */ {  u32 a = (u8)r_edx; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0068ebb3: je 0x68ebbc */ if (fZ) goto L_0068ebbc;
L_0068ebb5:; BB(0x0068ebb5);
    /* 0068ebb5: mov edx, 1 */ r_edx = 0x1u;
    /* 0068ebba: jmp 0x68ebbe */ goto L_0068ebbe;
L_0068ebbc:; BB(0x0068ebbc);
    /* 0068ebbc: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_0068ebbe:; BB(0x0068ebbe);
    /* 0068ebbe: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068ebc0: je 0x68ebc9 */ if (fZ) goto L_0068ebc9;
L_0068ebc2:; BB(0x0068ebc2);
    /* 0068ebc2: mov ecx, esi */ r_ecx = r_esi;
    /* 0068ebc4: call 0x5c42f4 */ r_esp -= 4; W32(r_esp, 0x68ebc9u); f_005c42f4();
L_0068ebc9:; BB(0x0068ebc9);
    /* 0068ebc9: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0068ebcc: cmp ebx, 0xd */ {  u32 a = r_ebx; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0068ebcf: jl 0x68eb88 */ if ((fS!=fO)) goto L_0068eb88;
L_0068ebd1:; BB(0x0068ebd1);
    /* 0068ebd1: mov esi, dword ptr [esp + 0x1c] */ r_esi = R32((u32)(r_esp+0x1cu));
    /* 0068ebd5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0068ebd6: mov ecx, esi */ r_ecx = r_esi;
    /* 0068ebd8: call 0x770b58 */ r_esp -= 4; W32(r_esp, 0x68ebddu); f_00770b58();
    /* 0068ebdd: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 0068ebe1: mov word ptr [esi + 0x336], dx */ W16((u32)(r_esi+0x336u), (u16)r_edx);
    /* 0068ebe8: mov ecx, esi */ r_ecx = r_esi;
    /* 0068ebea: call 0x775270 */ r_esp -= 4; W32(r_esp, 0x68ebefu); f_00775270();
    /* 0068ebef: mov ecx, esi */ r_ecx = r_esi;
    /* 0068ebf1: call 0x7776f8 */ r_esp -= 4; W32(r_esp, 0x68ebf6u); f_007776f8();
L_0068ebf6:; BB(0x0068ebf6);
    /* 0068ebf6: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068ebf9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0068ebfa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068ebfb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0068ebfc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068ebfd: ret  */ FN_RET(0x0068ea40); r_esp += 4; return;
L_0068ebfe:; BB(0x0068ebfe);
    /* 0068ebfe: movzx edx, byte ptr [ebx + 0xf3] */ r_edx = (u32)R8((u32)(r_ebx+0xf3u));
    /* 0068ec05: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068ec08: jne 0x68eb0e */ if (!fZ) goto L_0068eb0e;
L_0068ec0e:; BB(0x0068ec0e);
    /* 0068ec0e: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
    /* 0068ec12: mov ebx, 9 */ r_ebx = 0x9u;
L_0068ec17:; BB(0x0068ec17);
    /* 0068ec17: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0068ec18: mov ecx, edi */ r_ecx = r_edi;
    /* 0068ec1a: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x68ec1fu); f_0069792c();
    /* 0068ec1f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068ec21: je 0x68ec35 */ if (fZ) goto L_0068ec35;
L_0068ec23:; BB(0x0068ec23);
    /* 0068ec23: mov dword ptr [esi + ebx*4 + 0xdf8], 0 */ W32((u32)(r_esi+r_ebx*4+0xdf8u), 0x0u);
    /* 0068ec2e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0068ec30: mov ecx, eax */ r_ecx = r_eax;
    /* 0068ec32: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x68ec35u); call_ind(t); }
L_0068ec35:; BB(0x0068ec35);
    /* 0068ec35: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0068ec38: cmp ebx, 0xc */ {  u32 a = r_ebx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0068ec3b: jle 0x68ec17 */ if ((fZ||fS!=fO)) goto L_0068ec17;
L_0068ec3d:; BB(0x0068ec3d);
    /* 0068ec3d: jmp 0x68eb0e */ goto L_0068eb0e;
}

void f_0068ec44(void) /* sub_68EC44 */
{
    FN_ENTER(0x0068ec44);
    /* 0068ec44: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0068ec45: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0068ec46: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0068ec47: mov esi, ecx */ r_esi = r_ecx;
    /* 0068ec49: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
    /* 0068ec4d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0068ec4f: call 0x5d24b0 */ r_esp -= 4; W32(r_esp, 0x68ec54u); f_005d24b0();
    /* 0068ec54: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068ec56: je 0x68ecd5 */ if (fZ) goto L_0068ecd5;
L_0068ec58:; BB(0x0068ec58);
    /* 0068ec58: movzx eax, byte ptr [ebx] */ r_eax = (u32)R8((u32)(r_ebx));
    /* 0068ec5b: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0068ec5e: je 0x68ecec */ if (fZ) goto L_0068ecec;
L_0068ec64:; BB(0x0068ec64);
    /* 0068ec64: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0068ec65: mov ecx, dword ptr [esi + 0xdf4] */ r_ecx = R32((u32)(r_esi+0xdf4u));
    /* 0068ec6b: call 0x6a4e50 */ r_esp -= 4; W32(r_esp, 0x68ec70u); f_006a4e50();
    /* 0068ec70: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068ec72: jne 0x68ec98 */ if (!fZ) goto L_0068ec98;
L_0068ec74:; BB(0x0068ec74);
    /* 0068ec74: mov eax, dword ptr [esi + 0xdf4] */ r_eax = R32((u32)(r_esi+0xdf4u));
    /* 0068ec7a: movsx edx, word ptr [eax + 0x1c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x1cu));
    /* 0068ec7e: cmp edx, 0x1e */ {  u32 a = r_edx; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0068ec81: jl 0x68ec8b */ if ((fS!=fO)) goto L_0068ec8b;
L_0068ec83:; BB(0x0068ec83);
    /* 0068ec83: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0068ec85: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0068ec86: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0068ec87: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068ec88: ret 4 */ FN_RET(0x0068ec44); r_esp += 8; return;
L_0068ec8b:; BB(0x0068ec8b);
    /* 0068ec8b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0068ec8d: call 0x5d6430 */ r_esp -= 4; W32(r_esp, 0x68ec92u); f_005d6430();
    /* 0068ec92: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0068ec93: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0068ec94: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068ec95: ret 4 */ FN_RET(0x0068ec44); r_esp += 8; return;
L_0068ec98:; BB(0x0068ec98);
    /* 0068ec98: mov ecx, eax */ r_ecx = r_eax;
    /* 0068ec9a: call 0x6a60dc */ r_esp -= 4; W32(r_esp, 0x68ec9fu); f_006a60dc();
    /* 0068ec9f: mov esi, eax */ r_esi = r_eax;
    /* 0068eca1: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068eca3: je 0x68ecc5 */ if (fZ) goto L_0068ecc5;
L_0068eca5:; BB(0x0068eca5);
    /* 0068eca5: mov ecx, esi */ r_ecx = r_esi;
    /* 0068eca7: call 0x5c5064 */ r_esp -= 4; W32(r_esp, 0x68ecacu); f_005c5064();
    /* 0068ecac: mov edi, eax */ r_edi = r_eax;
    /* 0068ecae: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 0068ecb0: mov ecx, esi */ r_ecx = r_esi;
    /* 0068ecb2: call dword ptr [edx + 0x88] */ { u32 t = R32((u32)(r_edx+0x88u)); r_esp -= 4; W32(r_esp, 0x68ecb8u); call_ind(t); }
    /* 0068ecb8: sub edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0068ecba: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0068ecbc: call 0x5d29b0 */ r_esp -= 4; W32(r_esp, 0x68ecc1u); f_005d29b0();
    /* 0068ecc1: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0068ecc3: jge 0x68eccd */ if ((fS==fO)) goto L_0068eccd;
L_0068ecc5:; BB(0x0068ecc5);
    /* 0068ecc5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0068ecc7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0068ecc8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0068ecc9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068ecca: ret 4 */ FN_RET(0x0068ec44); r_esp += 8; return;
L_0068eccd:; BB(0x0068eccd);
    /* 0068eccd: mov eax, edi */ r_eax = r_edi;
    /* 0068eccf: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0068ecd0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0068ecd1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068ecd2: ret 4 */ FN_RET(0x0068ec44); r_esp += 8; return;
L_0068ecd5:; BB(0x0068ecd5);
    /* 0068ecd5: mov eax, dword ptr [esi + 0xdf4] */ r_eax = R32((u32)(r_esi+0xdf4u));
    /* 0068ecdb: movsx edx, word ptr [eax + 0x1c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x1cu));
    /* 0068ecdf: cmp edx, 0x1e */ {  u32 a = r_edx; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0068ece2: jl 0x68ecec */ if ((fS!=fO)) goto L_0068ecec;
L_0068ece4:; BB(0x0068ece4);
    /* 0068ece4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0068ece6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0068ece7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0068ece8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068ece9: ret 4 */ FN_RET(0x0068ec44); r_esp += 8; return;
L_0068ecec:; BB(0x0068ecec);
    /* 0068ecec: mov eax, 1 */ r_eax = 0x1u;
    /* 0068ecf1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0068ecf2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0068ecf3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068ecf4: ret 4 */ FN_RET(0x0068ec44); r_esp += 8; return;
}

void f_0068ecf8(void) /* sub_68ECF8 */
{
    FN_ENTER(0x0068ecf8);
    /* 0068ecf8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0068ecf9: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0068ecfc: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0068ecfe: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0068ed00: call 0x68fb8c */ r_esp -= 4; W32(r_esp, 0x68ed05u); f_0068fb8c();
    /* 0068ed05: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068ed07: jne 0x68ed59 */ if (!fZ) goto L_0068ed59;
L_0068ed09:; BB(0x0068ed09);
    /* 0068ed09: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068ed0b: je 0x68ed20 */ if (fZ) goto L_0068ed20;
L_0068ed0d:; BB(0x0068ed0d);
    /* 0068ed0d: movsx eax, word ptr [ebx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32cu));
    /* 0068ed14: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068ed17: jne 0x68ed20 */ if (!fZ) goto L_0068ed20;
L_0068ed19:; BB(0x0068ed19);
    /* 0068ed19: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068ed1c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0068ed1d: ret 0xc */ FN_RET(0x0068ecf8); r_esp += 16; return;
L_0068ed20:; BB(0x0068ed20);
    /* 0068ed20: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 0068ed24: movzx eax, word ptr [ebx + 0x1c] */ r_eax = (u32)R16((u32)(r_ebx+0x1cu));
    /* 0068ed28: mov byte ptr [esp + 1], 4 */ W8((u32)(r_esp+0x1u), 0x4u);
    /* 0068ed2d: mov byte ptr [esp], 0xcb */ W8((u32)(r_esp), 0xcbu);
    /* 0068ed31: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 0068ed36: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0068ed3a: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0068ed3e: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0068ed42: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 0068ed46: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0068ed4a: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0068ed4d: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x68ed52u); f_008003e0();
    /* 0068ed52: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0068ed54: call 0x68dd44 */ r_esp -= 4; W32(r_esp, 0x68ed59u); f_0068dd44();
L_0068ed59:; BB(0x0068ed59);
    /* 0068ed59: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068ed5c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0068ed5d: ret 0xc */ FN_RET(0x0068ecf8); r_esp += 16; return;
}

void f_0068ed60(void) /* sub_68ED60 */
{
    FN_ENTER(0x0068ed60);
    /* 0068ed60: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0068ed61: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0068ed62: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0068ed63: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 0068ed67: movzx eax, word ptr [edi + 2] */ r_eax = (u32)R16((u32)(r_edi+0x2u));
    /* 0068ed6b: call 0x68d5ac */ r_esp -= 4; W32(r_esp, 0x68ed70u); f_0068d5ac();
    /* 0068ed70: mov ebx, eax */ r_ebx = r_eax;
    /* 0068ed72: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0068ed74: je 0x68ed8e */ if (fZ) goto L_0068ed8e;
L_0068ed76:; BB(0x0068ed76);
    /* 0068ed76: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0068ed78: call 0x68fb8c */ r_esp -= 4; W32(r_esp, 0x68ed7du); f_0068fb8c();
    /* 0068ed7d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0068ed7f: jne 0x68ed8e */ if (!fZ) goto L_0068ed8e;
L_0068ed81:; BB(0x0068ed81);
    /* 0068ed81: push dword ptr [edi + 8] */ { u32 v = R32((u32)(r_edi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0068ed84: push dword ptr [edi + 4] */ { u32 v = R32((u32)(r_edi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0068ed87: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0068ed89: call 0x68ed94 */ r_esp -= 4; W32(r_esp, 0x68ed8eu); f_0068ed94();
L_0068ed8e:; BB(0x0068ed8e);
    /* 0068ed8e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0068ed8f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0068ed90: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068ed91: ret  */ FN_RET(0x0068ed60); r_esp += 4; return;
}

void f_0068ed94(void) /* sub_68ED94 */
{
    FN_ENTER(0x0068ed94);
    /* 0068ed94: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0068ed98: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0068ed9c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068ed9d: mov ecx, dword ptr [ecx + 0xdf4] */ r_ecx = R32((u32)(r_ecx+0xdf4u));
    /* 0068eda3: call 0x6a6540 */ r_esp -= 4; W32(r_esp, 0x68eda8u); f_006a6540();
    /* 0068eda8: ret 8 */ FN_RET(0x0068ed94); r_esp += 12; return;
}

void f_0068edac(void) /* sub_68EDAC */
{
    FN_ENTER(0x0068edac);
    /* 0068edac: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0068edad: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0068edb0: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0068edb2: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0068edb4: call 0x68fb8c */ r_esp -= 4; W32(r_esp, 0x68edb9u); f_0068fb8c();
    /* 0068edb9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068edbb: jne 0x68ee05 */ if (!fZ) goto L_0068ee05;
L_0068edbd:; BB(0x0068edbd);
    /* 0068edbd: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068edbf: je 0x68edd4 */ if (fZ) goto L_0068edd4;
L_0068edc1:; BB(0x0068edc1);
    /* 0068edc1: movsx eax, word ptr [ebp + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32cu));
    /* 0068edc8: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068edcb: jne 0x68edd4 */ if (!fZ) goto L_0068edd4;
L_0068edcd:; BB(0x0068edcd);
    /* 0068edcd: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068edd0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068edd1: ret 8 */ FN_RET(0x0068edac); r_esp += 12; return;
L_0068edd4:; BB(0x0068edd4);
    /* 0068edd4: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 0068edd8: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0068eddc: mov byte ptr [esp + 1], 3 */ W8((u32)(r_esp+0x1u), 0x3u);
    /* 0068ede1: mov byte ptr [esp], 0xcc */ W8((u32)(r_esp), 0xccu);
    /* 0068ede5: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 0068edea: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0068edee: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0068edf2: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0068edf6: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0068edf9: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x68edfeu); f_008003e0();
    /* 0068edfe: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0068ee00: call 0x68dd44 */ r_esp -= 4; W32(r_esp, 0x68ee05u); f_0068dd44();
L_0068ee05:; BB(0x0068ee05);
    /* 0068ee05: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068ee08: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068ee09: ret 8 */ FN_RET(0x0068edac); r_esp += 12; return;
}

void f_0068ee0c(void)
{
    FN_ENTER(0x0068ee0c);
    /* 0068ee0c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0068ee0d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0068ee0e: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0068ee12: call 0x6a9e70 */ r_esp -= 4; W32(r_esp, 0x68ee17u); f_006a9e70();
    /* 0068ee17: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0068ee19: je 0x68ee4e */ if (fZ) goto L_0068ee4e;
L_0068ee1b:; BB(0x0068ee1b);
    /* 0068ee1b: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0068ee1f: movzx eax, word ptr [edx + 2] */ r_eax = (u32)R16((u32)(r_edx+0x2u));
    /* 0068ee23: call 0x68d5ac */ r_esp -= 4; W32(r_esp, 0x68ee28u); f_0068d5ac();
    /* 0068ee28: mov esi, eax */ r_esi = r_eax;
    /* 0068ee2a: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0068ee2c: je 0x68ee4e */ if (fZ) goto L_0068ee4e;
L_0068ee2e:; BB(0x0068ee2e);
    /* 0068ee2e: mov ecx, esi */ r_ecx = r_esi;
    /* 0068ee30: call 0x68fb8c */ r_esp -= 4; W32(r_esp, 0x68ee35u); f_0068fb8c();
    /* 0068ee35: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0068ee37: jne 0x68ee4e */ if (!fZ) goto L_0068ee4e;
L_0068ee39:; BB(0x0068ee39);
    /* 0068ee39: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0068ee3d: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0068ee40: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 0068ee44: mov ecx, esi */ r_ecx = r_esi;
    /* 0068ee46: push dword ptr [edx + 4] */ { u32 v = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0068ee49: call 0x68ed94 */ r_esp -= 4; W32(r_esp, 0x68ee4eu); f_0068ed94();
L_0068ee4e:; BB(0x0068ee4e);
    /* 0068ee4e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0068ee4f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0068ee50: ret  */ FN_RET(0x0068ee0c); r_esp += 4; return;
}

void f_0068ee54(void) /* sub_68EE54 */
{
    FN_ENTER(0x0068ee54);
    /* 0068ee54: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0068ee55: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0068ee58: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0068ee5a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0068ee5c: call 0x68fb8c */ r_esp -= 4; W32(r_esp, 0x68ee61u); f_0068fb8c();
    /* 0068ee61: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068ee63: jne 0x68eead */ if (!fZ) goto L_0068eead;
L_0068ee65:; BB(0x0068ee65);
    /* 0068ee65: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068ee67: je 0x68ee7c */ if (fZ) goto L_0068ee7c;
L_0068ee69:; BB(0x0068ee69);
    /* 0068ee69: movsx eax, word ptr [ebp + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32cu));
    /* 0068ee70: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068ee73: jne 0x68ee7c */ if (!fZ) goto L_0068ee7c;
L_0068ee75:; BB(0x0068ee75);
    /* 0068ee75: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068ee78: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068ee79: ret 8 */ FN_RET(0x0068ee54); r_esp += 12; return;
L_0068ee7c:; BB(0x0068ee7c);
    /* 0068ee7c: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 0068ee80: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0068ee84: mov byte ptr [esp], 0x29 */ W8((u32)(r_esp), 0x29u);
    /* 0068ee88: mov byte ptr [esp + 1], 3 */ W8((u32)(r_esp+0x1u), 0x3u);
    /* 0068ee8d: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 0068ee92: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0068ee96: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0068ee9a: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0068ee9e: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0068eea1: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x68eea6u); f_008003e0();
    /* 0068eea6: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0068eea8: call 0x68dd44 */ r_esp -= 4; W32(r_esp, 0x68eeadu); f_0068dd44();
L_0068eead:; BB(0x0068eead);
    /* 0068eead: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068eeb0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068eeb1: ret 8 */ FN_RET(0x0068ee54); r_esp += 12; return;
}

void f_0068eeb4(void) /* sub_68EEB4 */
{
    FN_ENTER(0x0068eeb4);
    /* 0068eeb4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0068eeb5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0068eeb6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0068eeb7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0068eeb8: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 0068eebc: movzx eax, word ptr [edx + 2] */ r_eax = (u32)R16((u32)(r_edx+0x2u));
    /* 0068eec0: mov edi, dword ptr [edx + 4] */ r_edi = R32((u32)(r_edx+0x4u));
    /* 0068eec3: mov ebp, dword ptr [edx + 8] */ r_ebp = R32((u32)(r_edx+0x8u));
    /* 0068eec6: call 0x68d5ac */ r_esp -= 4; W32(r_esp, 0x68eecbu); f_0068d5ac();
    /* 0068eecb: mov ebx, eax */ r_ebx = r_eax;
    /* 0068eecd: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0068eecf: je 0x68eee5 */ if (fZ) goto L_0068eee5;
L_0068eed1:; BB(0x0068eed1);
    /* 0068eed1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0068eed3: call 0x68fb8c */ r_esp -= 4; W32(r_esp, 0x68eed8u); f_0068fb8c();
    /* 0068eed8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0068eeda: jne 0x68eee5 */ if (!fZ) goto L_0068eee5;
L_0068eedc:; BB(0x0068eedc);
    /* 0068eedc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0068eedd: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0068eede: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0068eee0: call 0x68ed94 */ r_esp -= 4; W32(r_esp, 0x68eee5u); f_0068ed94();
L_0068eee5:; BB(0x0068eee5);
    /* 0068eee5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0068eee6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0068eee7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068eee8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068eee9: ret  */ FN_RET(0x0068eeb4); r_esp += 4; return;
}

void f_0068eeec(void) /* sub_68EEEC */
{
    FN_ENTER(0x0068eeec);
    /* 0068eeec: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0068eeed: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0068eeee: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0068eeef: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0068eef0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0068eef1: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 0068eef5: movzx eax, word ptr [edx + 2] */ r_eax = (u32)R16((u32)(r_edx+0x2u));
    /* 0068eef9: mov esi, dword ptr [edx + 4] */ r_esi = R32((u32)(r_edx+0x4u));
    /* 0068eefc: mov edi, dword ptr [edx + 8] */ r_edi = R32((u32)(r_edx+0x8u));
    /* 0068eeff: mov ebp, dword ptr [edx + 0xc] */ r_ebp = R32((u32)(r_edx+0xcu));
    /* 0068ef02: call 0x68d5ac */ r_esp -= 4; W32(r_esp, 0x68ef07u); f_0068d5ac();
    /* 0068ef07: mov ebx, eax */ r_ebx = r_eax;
    /* 0068ef09: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0068ef0b: je 0x68ef22 */ if (fZ) goto L_0068ef22;
L_0068ef0d:; BB(0x0068ef0d);
    /* 0068ef0d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0068ef0f: call 0x68fb8c */ r_esp -= 4; W32(r_esp, 0x68ef14u); f_0068fb8c();
    /* 0068ef14: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0068ef16: jne 0x68ef22 */ if (!fZ) goto L_0068ef22;
L_0068ef18:; BB(0x0068ef18);
    /* 0068ef18: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0068ef19: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0068ef1a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0068ef1c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0068ef1d: call 0x68ef28 */ r_esp -= 4; W32(r_esp, 0x68ef22u); f_0068ef28();
L_0068ef22:; BB(0x0068ef22);
    /* 0068ef22: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0068ef23: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0068ef24: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068ef25: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0068ef26: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068ef27: ret  */ FN_RET(0x0068eeec); r_esp += 4; return;
}

void f_0068ef28(void) /* sub_68EF28 */
{
    FN_ENTER(0x0068ef28);
    /* 0068ef28: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0068ef2c: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0068ef30: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0068ef34: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068ef35: mov ecx, dword ptr [ecx + 0xdf4] */ r_ecx = R32((u32)(r_ecx+0xdf4u));
    /* 0068ef3b: call 0x6a6624 */ r_esp -= 4; W32(r_esp, 0x68ef40u); f_006a6624();
    /* 0068ef40: ret 0xc */ FN_RET(0x0068ef28); r_esp += 16; return;
}

void f_0068ef44(void) /* sub_68EF44 */
{
    FN_ENTER(0x0068ef44);
    /* 0068ef44: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0068ef45: sub esp, 0x84 */ {  u32 a = r_esp; u32 b = 0x84u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0068ef4b: mov eax, dword ptr [esp + 0x8c] */ r_eax = R32((u32)(r_esp+0x8cu));
    /* 0068ef52: mov byte ptr [esp + 5], 0x20 */ W8((u32)(r_esp+0x5u), 0x20u);
    /* 0068ef57: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0068ef59: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0068ef5c: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0068ef60: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 0068ef63: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 0068ef67: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 0068ef6b: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 0068ef6e: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 0068ef72: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 0068ef75: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 0068ef79: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 0068ef7c: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 0068ef80: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 0068ef83: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 0068ef87: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 0068ef8a: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 0068ef8e: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 0068ef91: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 0068ef95: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 0068ef98: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 0068ef9c: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 0068ef9f: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 0068efa3: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 0068efa6: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
    /* 0068efaa: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 0068efad: mov dword ptr [esp + 0x34], edx */ W32((u32)(r_esp+0x34u), r_edx);
    /* 0068efb1: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 0068efb4: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
    /* 0068efb8: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 0068efbb: mov dword ptr [esp + 0x3c], edx */ W32((u32)(r_esp+0x3cu), r_edx);
    /* 0068efbf: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 0068efc2: mov dword ptr [esp + 0x40], edx */ W32((u32)(r_esp+0x40u), r_edx);
    /* 0068efc6: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 0068efc9: mov dword ptr [esp + 0x44], edx */ W32((u32)(r_esp+0x44u), r_edx);
    /* 0068efcd: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0068efd0: mov dword ptr [esp + 0x48], edx */ W32((u32)(r_esp+0x48u), r_edx);
    /* 0068efd4: mov edx, dword ptr [eax + 0x48] */ r_edx = R32((u32)(r_eax+0x48u));
    /* 0068efd7: mov dword ptr [esp + 0x4c], edx */ W32((u32)(r_esp+0x4cu), r_edx);
    /* 0068efdb: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 0068efde: mov dword ptr [esp + 0x50], edx */ W32((u32)(r_esp+0x50u), r_edx);
    /* 0068efe2: mov edx, dword ptr [eax + 0x50] */ r_edx = R32((u32)(r_eax+0x50u));
    /* 0068efe5: mov dword ptr [esp + 0x54], edx */ W32((u32)(r_esp+0x54u), r_edx);
    /* 0068efe9: mov edx, dword ptr [eax + 0x54] */ r_edx = R32((u32)(r_eax+0x54u));
    /* 0068efec: mov dword ptr [esp + 0x58], edx */ W32((u32)(r_esp+0x58u), r_edx);
    /* 0068eff0: mov edx, dword ptr [eax + 0x58] */ r_edx = R32((u32)(r_eax+0x58u));
    /* 0068eff3: mov dword ptr [esp + 0x5c], edx */ W32((u32)(r_esp+0x5cu), r_edx);
    /* 0068eff7: mov edx, dword ptr [eax + 0x5c] */ r_edx = R32((u32)(r_eax+0x5cu));
    /* 0068effa: mov dword ptr [esp + 0x60], edx */ W32((u32)(r_esp+0x60u), r_edx);
    /* 0068effe: mov edx, dword ptr [eax + 0x60] */ r_edx = R32((u32)(r_eax+0x60u));
    /* 0068f001: mov dword ptr [esp + 0x64], edx */ W32((u32)(r_esp+0x64u), r_edx);
    /* 0068f005: mov edx, dword ptr [eax + 0x64] */ r_edx = R32((u32)(r_eax+0x64u));
    /* 0068f008: mov dword ptr [esp + 0x68], edx */ W32((u32)(r_esp+0x68u), r_edx);
    /* 0068f00c: mov edx, dword ptr [eax + 0x68] */ r_edx = R32((u32)(r_eax+0x68u));
    /* 0068f00f: mov dword ptr [esp + 0x6c], edx */ W32((u32)(r_esp+0x6cu), r_edx);
    /* 0068f013: mov edx, dword ptr [eax + 0x6c] */ r_edx = R32((u32)(r_eax+0x6cu));
    /* 0068f016: mov dword ptr [esp + 0x70], edx */ W32((u32)(r_esp+0x70u), r_edx);
    /* 0068f01a: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 0068f01d: mov dword ptr [esp + 0x74], edx */ W32((u32)(r_esp+0x74u), r_edx);
    /* 0068f021: mov edx, dword ptr [eax + 0x74] */ r_edx = R32((u32)(r_eax+0x74u));
    /* 0068f024: mov dword ptr [esp + 0x78], edx */ W32((u32)(r_esp+0x78u), r_edx);
    /* 0068f028: mov edx, dword ptr [eax + 0x78] */ r_edx = R32((u32)(r_eax+0x78u));
    /* 0068f02b: mov eax, dword ptr [eax + 0x7c] */ r_eax = R32((u32)(r_eax+0x7cu));
    /* 0068f02e: mov dword ptr [esp + 0x7c], edx */ W32((u32)(r_esp+0x7cu), r_edx);
    /* 0068f032: mov dword ptr [esp + 0x80], eax */ W32((u32)(r_esp+0x80u), r_eax);
    /* 0068f039: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 0068f03d: call 0x6a9994 */ r_esp -= 4; W32(r_esp, 0x68f042u); f_006a9994();
    /* 0068f042: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068f044: je 0x68f06f */ if (fZ) goto L_0068f06f;
L_0068f046:; BB(0x0068f046);
    /* 0068f046: movzx eax, word ptr [esp + 6] */ r_eax = (u32)R16((u32)(r_esp+0x6u));
    /* 0068f04b: call 0x68d5ac */ r_esp -= 4; W32(r_esp, 0x68f050u); f_0068d5ac();
    /* 0068f050: mov ebx, eax */ r_ebx = r_eax;
    /* 0068f052: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068f054: je 0x68f06f */ if (fZ) goto L_0068f06f;
L_0068f056:; BB(0x0068f056);
    /* 0068f056: call 0x68be84 */ r_esp -= 4; W32(r_esp, 0x68f05bu); f_0068be84();
    /* 0068f05b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068f05d: jne 0x68f06f */ if (!fZ) goto L_0068f06f;
L_0068f05f:; BB(0x0068f05f);
    /* 0068f05f: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 0068f063: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0068f067: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068f068: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0068f06a: call 0x68f078 */ r_esp -= 4; W32(r_esp, 0x68f06fu); f_0068f078();
L_0068f06f:; BB(0x0068f06f);
    /* 0068f06f: add esp, 0x84 */ {  u32 a = r_esp; u32 b = 0x84u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068f075: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0068f076: ret  */ FN_RET(0x0068ef44); r_esp += 4; return;
}

