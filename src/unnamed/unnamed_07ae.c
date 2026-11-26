#include "protos.h"

void f_007ae360(void) /* sub_7AE360 */
{
    FN_ENTER(0x007ae360);
    /* 007ae360: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007ae361: mov ebp, esp */ r_ebp = r_esp;
    /* 007ae363: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007ae365: push 0x8f5e7c */ { u32 v = 0x8f5e7cu; r_esp -= 4; W32(r_esp, v); }
    /* 007ae36a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 007ae370: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007ae371: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 007ae378: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007ae37b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 007ae37e: mov dword ptr [ebp - 0x2c], edi */ W32((u32)(r_ebp+0xffffffd4u), r_edi);
    /* 007ae381: mov dword ptr [ebp - 0x28], esi */ W32((u32)(r_ebp+0xffffffd8u), r_esi);
    /* 007ae384: mov dword ptr [ebp - 0x24], ebx */ W32((u32)(r_ebp+0xffffffdcu), r_ebx);
    /* 007ae387: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 007ae38b: push dword ptr [ebp + 0x18] */ { u32 v = R32((u32)(r_ebp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 007ae38e: movzx edx, word ptr [ebp + 0xc] */ r_edx = (u32)R16((u32)(r_ebp+0xcu));
    /* 007ae392: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 007ae395: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 007ae398: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 007ae39b: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 007ae39e: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 007ae3a1: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 007ae3a4: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 007ae3a7: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x7ae3acu); f_008193cc();
    /* 007ae3ac: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007ae3b3: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 007ae3b6: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 007ae3b9: mov dword ptr [edx], 0xb46578 */ W32((u32)(r_edx), 0xb46578u);
    /* 007ae3bf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007ae3c1: push 0x108 */ { u32 v = 0x108u; r_esp -= 4; W32(r_esp, v); }
    /* 007ae3c6: mov word ptr [edx + 0x5c], ax */ W16((u32)(r_edx+0x5cu), (u16)r_eax);
    /* 007ae3ca: mov word ptr [edx + 0x5e], ax */ W16((u32)(r_edx+0x5eu), (u16)r_eax);
    /* 007ae3ce: mov word ptr [edx + 0x60], ax */ W16((u32)(r_edx+0x60u), (u16)r_eax);
    /* 007ae3d2: mov word ptr [edx + 0x62], ax */ W16((u32)(r_edx+0x62u), (u16)r_eax);
    /* 007ae3d6: mov word ptr [edx + 0x64], ax */ W16((u32)(r_edx+0x64u), (u16)r_eax);
    /* 007ae3da: mov word ptr [edx + 0x66], ax */ W16((u32)(r_edx+0x66u), (u16)r_eax);
    /* 007ae3de: mov word ptr [edx + 0x68], ax */ W16((u32)(r_edx+0x68u), (u16)r_eax);
    /* 007ae3e2: mov word ptr [edx + 0x6a], ax */ W16((u32)(r_edx+0x6au), (u16)r_eax);
    /* 007ae3e6: mov word ptr [edx + 0x6c], ax */ W16((u32)(r_edx+0x6cu), (u16)r_eax);
    /* 007ae3ea: mov word ptr [edx + 0x6e], ax */ W16((u32)(r_edx+0x6eu), (u16)r_eax);
    /* 007ae3ee: mov word ptr [edx + 0x70], ax */ W16((u32)(r_edx+0x70u), (u16)r_eax);
    /* 007ae3f2: mov esi, dword ptr [ebp - 0x30] */ r_esi = R32((u32)(r_ebp+0xffffffd0u));
    /* 007ae3f5: mov ecx, dword ptr [0xa03ca4] */ r_ecx = R32((u32)(0xa03ca4u));
    /* 007ae3fb: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 007ae3fe: mov dword ptr [esi + 4], ecx */ W32((u32)(r_esi+0x4u), r_ecx);
    /* 007ae401: mov dword ptr [esi + 0x24], 0x19 */ W32((u32)(r_esi+0x24u), 0x19u);
    /* 007ae408: mov dword ptr [esi + 0x1c], eax */ W32((u32)(r_esi+0x1cu), r_eax);
    /* 007ae40b: mov dword ptr [esi + 0x20], eax */ W32((u32)(r_esi+0x20u), r_eax);
    /* 007ae40e: mov dword ptr [esi + 0xc4], eax */ W32((u32)(r_esi+0xc4u), r_eax);
    /* 007ae414: mov dword ptr [esi + 0xac], 0 */ W32((u32)(r_esi+0xacu), 0x0u);
    /* 007ae41e: mov dword ptr [esi + 0xc8], eax */ W32((u32)(r_esi+0xc8u), r_eax);
    /* 007ae424: mov dword ptr [esi + 0xcc], eax */ W32((u32)(r_esi+0xccu), r_eax);
    /* 007ae42a: mov word ptr [esi + 0x2c], bx */ W16((u32)(r_esi+0x2cu), (u16)r_ebx);
    /* 007ae42e: mov dword ptr [esi + 0xb0], 0 */ W32((u32)(r_esi+0xb0u), 0x0u);
    /* 007ae438: mov dword ptr [esi + 0x80], eax */ W32((u32)(r_esi+0x80u), r_eax);
    /* 007ae43e: mov dword ptr [esi + 0x7c], eax */ W32((u32)(r_esi+0x7cu), r_eax);
    /* 007ae441: mov byte ptr [esi + 0x8c], al */ W8((u32)(r_esi+0x8cu), (u8)r_eax);
    /* 007ae447: mov dword ptr [esi + 0xb4], 0 */ W32((u32)(r_esi+0xb4u), 0x0u);
    /* 007ae451: mov word ptr [esi + 0x8e], ax */ W16((u32)(r_esi+0x8eu), (u16)r_eax);
    /* 007ae458: mov byte ptr [esi + 0x8d], al */ W8((u32)(r_esi+0x8du), (u8)r_eax);
    /* 007ae45e: mov dword ptr [esi + 0xd0], 0 */ W32((u32)(r_esi+0xd0u), 0x0u);
    /* 007ae468: mov dword ptr [esi + 0xd4], 0 */ W32((u32)(r_esi+0xd4u), 0x0u);
    /* 007ae472: mov dword ptr [esi + 0xd8], 0 */ W32((u32)(r_esi+0xd8u), 0x0u);
    /* 007ae47c: mov dword ptr [esi + 0xdc], 0 */ W32((u32)(r_esi+0xdcu), 0x0u);
    /* 007ae486: mov dword ptr [esi + 0xe0], 0 */ W32((u32)(r_esi+0xe0u), 0x0u);
    /* 007ae490: mov dword ptr [esi + 0xe4], 0 */ W32((u32)(r_esi+0xe4u), 0x0u);
    /* 007ae49a: mov dword ptr [esi + 0x88], 0 */ W32((u32)(r_esi+0x88u), 0x0u);
    /* 007ae4a4: mov dword ptr [esi + 0x58], 0 */ W32((u32)(r_esi+0x58u), 0x0u);
    /* 007ae4ab: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x7ae4b0u); f_008581c5();
    /* 007ae4b0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007ae4b1: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 007ae4b4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007ae4b6: je 0x7ae91d */ if (fZ) goto L_007ae91d;
L_007ae4bc:; BB(0x007ae4bc);
    /* 007ae4bc: mov dword ptr [ebp - 0x4c], 1 */ W32((u32)(r_ebp+0xffffffb4u), 0x1u);
    /* 007ae4c3: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 007ae4ca: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 007ae4cd: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007ae4d0: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 007ae4d3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007ae4d4: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x7ae4d9u); f_007b4d18();
    /* 007ae4d9: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 007ae4dc: mov dword ptr [ebx + 0x9c], 0 */ W32((u32)(r_ebx+0x9cu), 0x0u);
    /* 007ae4e6: mov dword ptr [ebx + 0x94], eax */ W32((u32)(r_ebx+0x94u), r_eax);
    /* 007ae4ec: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007ae4ef: mov dword ptr [ebx + 0xa0], 0 */ W32((u32)(r_ebx+0xa0u), 0x0u);
    /* 007ae4f9: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 007ae4fb: mov dword ptr [ebx + 0x8c], esi */ W32((u32)(r_ebx+0x8cu), r_esi);
    /* 007ae501: mov ecx, 0xffff */ r_ecx = 0xffffu;
    /* 007ae506: mov dword ptr [ebx + 0xa4], 0 */ W32((u32)(r_ebx+0xa4u), 0x0u);
    /* 007ae510: mov dword ptr [ebx + 0x90], esi */ W32((u32)(r_ebx+0x90u), r_esi);
    /* 007ae516: mov dword ptr [ebx + 0xc], 0 */ W32((u32)(r_ebx+0xcu), 0x0u);
    /* 007ae51d: push 0xac */ { u32 v = 0xacu; r_esp -= 4; W32(r_esp, v); }
    /* 007ae522: mov word ptr [ebx + 0x8a], ax */ W16((u32)(r_ebx+0x8au), (u16)r_eax);
    /* 007ae529: mov dword ptr [ebx + 0x18], 0 */ W32((u32)(r_ebx+0x18u), 0x0u);
    /* 007ae530: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 007ae535: mov word ptr [ebx + 0x88], dx */ W16((u32)(r_ebx+0x88u), (u16)r_edx);
    /* 007ae53c: mov dword ptr [ebx + 0x84], esi */ W32((u32)(r_ebx+0x84u), r_esi);
    /* 007ae542: mov dword ptr [ebx + 0x24], 0 */ W32((u32)(r_ebx+0x24u), 0x0u);
    /* 007ae549: mov dword ptr [ebx], esi */ W32((u32)(r_ebx), r_esi);
    /* 007ae54b: mov dword ptr [ebx + 4], ecx */ W32((u32)(r_ebx+0x4u), r_ecx);
    /* 007ae54e: mov dword ptr [ebx + 0x10], ecx */ W32((u32)(r_ebx+0x10u), r_ecx);
    /* 007ae551: mov dword ptr [ebx + 0x30], 0 */ W32((u32)(r_ebx+0x30u), 0x0u);
    /* 007ae558: mov dword ptr [ebx + 0x1c], ecx */ W32((u32)(r_ebx+0x1cu), r_ecx);
    /* 007ae55b: mov dword ptr [ebx + 0x28], ecx */ W32((u32)(r_ebx+0x28u), r_ecx);
    /* 007ae55e: mov dword ptr [ebx + 0x34], ecx */ W32((u32)(r_ebx+0x34u), r_ecx);
    /* 007ae561: mov dword ptr [ebx + 0x3c], 0 */ W32((u32)(r_ebx+0x3cu), 0x0u);
    /* 007ae568: mov dword ptr [ebx + 0x40], ecx */ W32((u32)(r_ebx+0x40u), r_ecx);
    /* 007ae56b: mov dword ptr [ebx + 0x4c], ecx */ W32((u32)(r_ebx+0x4cu), r_ecx);
    /* 007ae56e: mov dword ptr [ebx + 0x58], ecx */ W32((u32)(r_ebx+0x58u), r_ecx);
    /* 007ae571: mov dword ptr [ebx + 0x48], 0 */ W32((u32)(r_ebx+0x48u), 0x0u);
    /* 007ae578: mov dword ptr [ebx + 0x64], ecx */ W32((u32)(r_ebx+0x64u), r_ecx);
    /* 007ae57b: mov dword ptr [ebx + 0x70], ecx */ W32((u32)(r_ebx+0x70u), r_ecx);
    /* 007ae57e: mov dword ptr [ebx + 0x104], esi */ W32((u32)(r_ebx+0x104u), r_esi);
    /* 007ae584: mov dword ptr [ebx + 0x54], 0 */ W32((u32)(r_ebx+0x54u), 0x0u);
    /* 007ae58b: mov dword ptr [ebx + 0xc0], esi */ W32((u32)(r_ebx+0xc0u), r_esi);
    /* 007ae591: mov dword ptr [ebx + 0x60], 0 */ W32((u32)(r_ebx+0x60u), 0x0u);
    /* 007ae598: mov dword ptr [ebx + 0x6c], 0 */ W32((u32)(r_ebx+0x6cu), 0x0u);
    /* 007ae59f: mov dword ptr [ebx + 0x78], 0 */ W32((u32)(r_ebx+0x78u), 0x0u);
    /* 007ae5a6: mov dword ptr [ebp - 0x44], esi */ W32((u32)(r_ebp+0xffffffbcu), r_esi);
    /* 007ae5a9: mov dword ptr [ebx + 0xac], 0 */ W32((u32)(r_ebx+0xacu), 0x0u);
    /* 007ae5b3: mov dword ptr [ebx + 0xb0], 0 */ W32((u32)(r_ebx+0xb0u), 0x0u);
    /* 007ae5bd: mov dword ptr [ebx + 0xb4], 0x40a00000 */ W32((u32)(r_ebx+0xb4u), 0x40a00000u);
    /* 007ae5c7: mov dword ptr [ebx + 0xb8], 0x41980000 */ W32((u32)(r_ebx+0xb8u), 0x41980000u);
    /* 007ae5d1: mov dword ptr [ebx + 0xbc], 0x40a00000 */ W32((u32)(r_ebx+0xbcu), 0x40a00000u);
    /* 007ae5db: mov dword ptr [ebx + 0xc4], 0x1103 */ W32((u32)(r_ebx+0xc4u), 0x1103u);
    /* 007ae5e5: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x7ae5eau); f_005caba4();
    /* 007ae5ea: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 007ae5ed: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007ae5f0: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 007ae5f3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007ae5f5: je 0x7ae913 */ if (fZ) goto L_007ae913;
L_007ae5fb:; BB(0x007ae5fb);
    /* 007ae5fb: mov dword ptr [ebp - 0x44], 1 */ W32((u32)(r_ebp+0xffffffbcu), 0x1u);
    /* 007ae602: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 007ae609: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 007ae60f: mov ecx, eax */ r_ecx = r_eax;
    /* 007ae611: call 0x7b4b48 */ r_esp -= 4; W32(r_esp, 0x7ae616u); f_007b4b48();
    /* 007ae616: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
L_007ae61d:; BB(0x007ae61d);
    /* 007ae61d: mov edx, ebx */ r_edx = r_ebx;
    /* 007ae61f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007ae622: mov dword ptr [edx + 0xa8], eax */ W32((u32)(r_edx+0xa8u), r_eax);
    /* 007ae628: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 007ae62f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007ae631: je 0x7ae646 */ if (fZ) goto L_007ae646;
L_007ae633:; BB(0x007ae633);
    /* 007ae633: mov eax, edx */ r_eax = r_edx;
    /* 007ae635: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 007ae638: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007ae63a: lea edx, [eax + 0xac] */ r_edx = (u32)(r_eax+0xacu);
    /* 007ae640: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007ae641: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x7ae646u); f_007b9a88();
L_007ae646:; BB(0x007ae646);
    /* 007ae646: mov edx, ebx */ r_edx = r_ebx;
    /* 007ae648: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
    /* 007ae64f: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 007ae654: mov dword ptr [edx + 0x7c], eax */ W32((u32)(r_edx+0x7cu), r_eax);
    /* 007ae657: mov dword ptr [edx + 0x80], eax */ W32((u32)(r_edx+0x80u), r_eax);
    /* 007ae65d: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
L_007ae660:; BB(0x007ae660);
    /* 007ae660: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 007ae663: mov dword ptr [eax + 0x74], edx */ W32((u32)(r_eax+0x74u), r_edx);
    /* 007ae666: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007ae66d: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 007ae674: push 0x108 */ { u32 v = 0x108u; r_esp -= 4; W32(r_esp, v); }
    /* 007ae679: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x7ae67eu); f_008581c5();
    /* 007ae67e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007ae67f: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 007ae682: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007ae684: je 0x7ae90c */ if (fZ) goto L_007ae90c;
L_007ae68a:; BB(0x007ae68a);
    /* 007ae68a: mov dword ptr [ebp - 0x3c], 1 */ W32((u32)(r_ebp+0xffffffc4u), 0x1u);
    /* 007ae691: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 007ae698: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 007ae69b: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 007ae69e: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 007ae6a1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007ae6a2: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x7ae6a7u); f_007b4d18();
    /* 007ae6a7: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 007ae6aa: mov dword ptr [ebx + 0x9c], 0 */ W32((u32)(r_ebx+0x9cu), 0x0u);
    /* 007ae6b4: mov dword ptr [ebx + 0x94], eax */ W32((u32)(r_ebx+0x94u), r_eax);
    /* 007ae6ba: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 007ae6bd: mov dword ptr [ebx + 0xa0], 0 */ W32((u32)(r_ebx+0xa0u), 0x0u);
    /* 007ae6c7: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 007ae6c9: mov dword ptr [ebx + 0x8c], esi */ W32((u32)(r_ebx+0x8cu), r_esi);
    /* 007ae6cf: mov ecx, 0xffff */ r_ecx = 0xffffu;
    /* 007ae6d4: mov dword ptr [ebx + 0xa4], 0 */ W32((u32)(r_ebx+0xa4u), 0x0u);
    /* 007ae6de: mov dword ptr [ebx + 0x90], esi */ W32((u32)(r_ebx+0x90u), r_esi);
    /* 007ae6e4: mov dword ptr [ebx + 0xc], 0 */ W32((u32)(r_ebx+0xcu), 0x0u);
    /* 007ae6eb: push 0xac */ { u32 v = 0xacu; r_esp -= 4; W32(r_esp, v); }
    /* 007ae6f0: mov word ptr [ebx + 0x8a], ax */ W16((u32)(r_ebx+0x8au), (u16)r_eax);
    /* 007ae6f7: mov dword ptr [ebx + 0x18], 0 */ W32((u32)(r_ebx+0x18u), 0x0u);
    /* 007ae6fe: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 007ae703: mov word ptr [ebx + 0x88], dx */ W16((u32)(r_ebx+0x88u), (u16)r_edx);
    /* 007ae70a: mov dword ptr [ebx + 0x84], esi */ W32((u32)(r_ebx+0x84u), r_esi);
    /* 007ae710: mov dword ptr [ebx + 0x24], 0 */ W32((u32)(r_ebx+0x24u), 0x0u);
    /* 007ae717: mov dword ptr [ebx], esi */ W32((u32)(r_ebx), r_esi);
    /* 007ae719: mov dword ptr [ebx + 4], ecx */ W32((u32)(r_ebx+0x4u), r_ecx);
    /* 007ae71c: mov dword ptr [ebx + 0x10], ecx */ W32((u32)(r_ebx+0x10u), r_ecx);
    /* 007ae71f: mov dword ptr [ebx + 0x30], 0 */ W32((u32)(r_ebx+0x30u), 0x0u);
    /* 007ae726: mov dword ptr [ebx + 0x1c], ecx */ W32((u32)(r_ebx+0x1cu), r_ecx);
    /* 007ae729: mov dword ptr [ebx + 0x28], ecx */ W32((u32)(r_ebx+0x28u), r_ecx);
    /* 007ae72c: mov dword ptr [ebx + 0x34], ecx */ W32((u32)(r_ebx+0x34u), r_ecx);
    /* 007ae72f: mov dword ptr [ebx + 0x3c], 0 */ W32((u32)(r_ebx+0x3cu), 0x0u);
    /* 007ae736: mov dword ptr [ebx + 0x40], ecx */ W32((u32)(r_ebx+0x40u), r_ecx);
    /* 007ae739: mov dword ptr [ebx + 0x4c], ecx */ W32((u32)(r_ebx+0x4cu), r_ecx);
    /* 007ae73c: mov dword ptr [ebx + 0x58], ecx */ W32((u32)(r_ebx+0x58u), r_ecx);
    /* 007ae73f: mov dword ptr [ebx + 0x48], 0 */ W32((u32)(r_ebx+0x48u), 0x0u);
    /* 007ae746: mov dword ptr [ebx + 0x64], ecx */ W32((u32)(r_ebx+0x64u), r_ecx);
    /* 007ae749: mov dword ptr [ebx + 0x70], ecx */ W32((u32)(r_ebx+0x70u), r_ecx);
    /* 007ae74c: mov dword ptr [ebx + 0x104], esi */ W32((u32)(r_ebx+0x104u), r_esi);
    /* 007ae752: mov dword ptr [ebx + 0x54], 0 */ W32((u32)(r_ebx+0x54u), 0x0u);
    /* 007ae759: mov dword ptr [ebx + 0xc0], esi */ W32((u32)(r_ebx+0xc0u), r_esi);
    /* 007ae75f: mov dword ptr [ebx + 0x60], 0 */ W32((u32)(r_ebx+0x60u), 0x0u);
    /* 007ae766: mov dword ptr [ebx + 0x6c], 0 */ W32((u32)(r_ebx+0x6cu), 0x0u);
    /* 007ae76d: mov dword ptr [ebx + 0x78], 0 */ W32((u32)(r_ebx+0x78u), 0x0u);
    /* 007ae774: mov dword ptr [ebp - 0x38], esi */ W32((u32)(r_ebp+0xffffffc8u), r_esi);
    /* 007ae777: mov dword ptr [ebx + 0xac], 0 */ W32((u32)(r_ebx+0xacu), 0x0u);
    /* 007ae781: mov dword ptr [ebx + 0xb0], 0 */ W32((u32)(r_ebx+0xb0u), 0x0u);
    /* 007ae78b: mov dword ptr [ebx + 0xb4], 0x40a00000 */ W32((u32)(r_ebx+0xb4u), 0x40a00000u);
    /* 007ae795: mov dword ptr [ebx + 0xb8], 0x41980000 */ W32((u32)(r_ebx+0xb8u), 0x41980000u);
    /* 007ae79f: mov dword ptr [ebx + 0xbc], 0x40a00000 */ W32((u32)(r_ebx+0xbcu), 0x40a00000u);
    /* 007ae7a9: mov dword ptr [ebx + 0xc4], 0x1103 */ W32((u32)(r_ebx+0xc4u), 0x1103u);
    /* 007ae7b3: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x7ae7b8u); f_005caba4();
    /* 007ae7b8: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 007ae7bb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007ae7be: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 007ae7c1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007ae7c3: je 0x7ae902 */ if (fZ) goto L_007ae902;
L_007ae7c9:; BB(0x007ae7c9);
    /* 007ae7c9: mov dword ptr [ebp - 0x38], 1 */ W32((u32)(r_ebp+0xffffffc8u), 0x1u);
    /* 007ae7d0: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 007ae7d7: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 007ae7dd: mov ecx, eax */ r_ecx = r_eax;
    /* 007ae7df: call 0x7b4b48 */ r_esp -= 4; W32(r_esp, 0x7ae7e4u); f_007b4b48();
    /* 007ae7e4: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_007ae7eb:; BB(0x007ae7eb);
    /* 007ae7eb: mov edx, ebx */ r_edx = r_ebx;
    /* 007ae7ed: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 007ae7f0: mov dword ptr [edx + 0xa8], eax */ W32((u32)(r_edx+0xa8u), r_eax);
    /* 007ae7f6: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 007ae7fd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007ae7ff: je 0x7ae814 */ if (fZ) goto L_007ae814;
L_007ae801:; BB(0x007ae801);
    /* 007ae801: mov eax, edx */ r_eax = r_edx;
    /* 007ae803: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 007ae806: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007ae808: lea edx, [eax + 0xac] */ r_edx = (u32)(r_eax+0xacu);
    /* 007ae80e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007ae80f: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x7ae814u); f_007b9a88();
L_007ae814:; BB(0x007ae814);
    /* 007ae814: mov edx, ebx */ r_edx = r_ebx;
    /* 007ae816: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 007ae81d: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 007ae822: mov dword ptr [edx + 0x7c], eax */ W32((u32)(r_edx+0x7cu), r_eax);
    /* 007ae825: mov dword ptr [edx + 0x80], eax */ W32((u32)(r_edx+0x80u), r_eax);
    /* 007ae82b: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
L_007ae82e:; BB(0x007ae82e);
    /* 007ae82e: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 007ae831: mov dword ptr [edx + 0x78], eax */ W32((u32)(r_edx+0x78u), r_eax);
    /* 007ae834: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007ae83b: movsx ecx, word ptr [edx + 0x2c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edx+0x2cu));
    /* 007ae83f: lea eax, [ecx + ecx*4] */ r_eax = (u32)(r_ecx+r_ecx*4);
    /* 007ae842: mov ebx, dword ptr [eax*8 + 0xa02ea0] */ r_ebx = R32((u32)(r_eax*8+0xa02ea0u));
    /* 007ae849: mov dword ptr [edx + 0x30], ebx */ W32((u32)(r_edx+0x30u), r_ebx);
    /* 007ae84c: mov esi, dword ptr [eax*8 + 0xa02ea4] */ r_esi = R32((u32)(r_eax*8+0xa02ea4u));
    /* 007ae853: mov dword ptr [edx + 0x34], esi */ W32((u32)(r_edx+0x34u), r_esi);
    /* 007ae856: mov edi, dword ptr [eax*8 + 0xa02ea8] */ r_edi = R32((u32)(r_eax*8+0xa02ea8u));
    /* 007ae85d: mov dword ptr [edx + 0x38], edi */ W32((u32)(r_edx+0x38u), r_edi);
    /* 007ae860: mov ecx, dword ptr [eax*8 + 0xa02eac] */ r_ecx = R32((u32)(r_eax*8+0xa02eacu));
    /* 007ae867: mov dword ptr [edx + 0x3c], ecx */ W32((u32)(r_edx+0x3cu), r_ecx);
    /* 007ae86a: mov ecx, dword ptr [eax*8 + 0xa02eb0] */ r_ecx = R32((u32)(r_eax*8+0xa02eb0u));
    /* 007ae871: mov dword ptr [edx + 0x40], ecx */ W32((u32)(r_edx+0x40u), r_ecx);
    /* 007ae874: mov ecx, dword ptr [eax*8 + 0xa02eb4] */ r_ecx = R32((u32)(r_eax*8+0xa02eb4u));
    /* 007ae87b: mov dword ptr [edx + 0x44], ecx */ W32((u32)(r_edx+0x44u), r_ecx);
    /* 007ae87e: mov ecx, dword ptr [eax*8 + 0xa02eb8] */ r_ecx = R32((u32)(r_eax*8+0xa02eb8u));
    /* 007ae885: mov dword ptr [edx + 0x48], ecx */ W32((u32)(r_edx+0x48u), r_ecx);
    /* 007ae888: mov ecx, dword ptr [eax*8 + 0xa02ebc] */ r_ecx = R32((u32)(r_eax*8+0xa02ebcu));
    /* 007ae88f: mov dword ptr [edx + 0x4c], ecx */ W32((u32)(r_edx+0x4cu), r_ecx);
    /* 007ae892: mov ecx, dword ptr [eax*8 + 0xa02ec0] */ r_ecx = R32((u32)(r_eax*8+0xa02ec0u));
    /* 007ae899: mov dword ptr [edx + 0x50], ecx */ W32((u32)(r_edx+0x50u), r_ecx);
    /* 007ae89c: mov eax, dword ptr [eax*8 + 0xa02ec4] */ r_eax = R32((u32)(r_eax*8+0xa02ec4u));
    /* 007ae8a3: mov dword ptr [edx + 0x54], eax */ W32((u32)(r_edx+0x54u), r_eax);
    /* 007ae8a6: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 007ae8a9: mov edx, dword ptr [eax + 0x78] */ r_edx = R32((u32)(r_eax+0x78u));
    /* 007ae8ac: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007ae8ae: je 0x7ae8e0 */ if (fZ) goto L_007ae8e0;
L_007ae8b0:; BB(0x007ae8b0);
    /* 007ae8b0: mov ecx, dword ptr [edx + 0x94] */ r_ecx = R32((u32)(r_edx+0x94u));
    /* 007ae8b6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007ae8b8: je 0x7ae8e0 */ if (fZ) goto L_007ae8e0;
L_007ae8ba:; BB(0x007ae8ba);
    /* 007ae8ba: mov edx, dword ptr [ecx + 0x38] */ r_edx = R32((u32)(r_ecx+0x38u));
    /* 007ae8bd: mov dword ptr [eax + 0xdc], edx */ W32((u32)(r_eax+0xdcu), r_edx);
    /* 007ae8c3: mov ebx, dword ptr [ecx + 0x3c] */ r_ebx = R32((u32)(r_ecx+0x3cu));
    /* 007ae8c6: mov dword ptr [eax + 0xe0], ebx */ W32((u32)(r_eax+0xe0u), r_ebx);
    /* 007ae8cc: mov esi, dword ptr [ecx + 0x40] */ r_esi = R32((u32)(r_ecx+0x40u));
    /* 007ae8cf: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 007ae8d2: mov dword ptr [eax + 0xe4], esi */ W32((u32)(r_eax+0xe4u), r_esi);
    /* 007ae8d8: call 0x7ae924 */ r_esp -= 4; W32(r_esp, 0x7ae8ddu); f_007ae924();
    /* 007ae8dd: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
L_007ae8e0:; BB(0x007ae8e0);
    /* 007ae8e0: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007ae8e3: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 007ae8e6: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 007ae8e9: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 007ae8ec: mov dword ptr [eax + 0x84], edx */ W32((u32)(r_eax+0x84u), r_edx);
    /* 007ae8f2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007ae8f5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007ae8fc: mov esp, ebp */ r_esp = r_ebp;
    /* 007ae8fe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007ae8ff: ret 0x14 */ FN_RET(0x007ae360); r_esp += 24; return;
L_007ae902:; BB(0x007ae902);
    /* 007ae902: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007ae904: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 007ae907: jmp 0x7ae7eb */ goto L_007ae7eb;
L_007ae90c:; BB(0x007ae90c);
    /* 007ae90c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007ae90e: jmp 0x7ae82e */ goto L_007ae82e;
L_007ae913:; BB(0x007ae913);
    /* 007ae913: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007ae915: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 007ae918: jmp 0x7ae61d */ goto L_007ae61d;
L_007ae91d:; BB(0x007ae91d);
    /* 007ae91d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007ae91f: jmp 0x7ae660 */ goto L_007ae660;
}

void f_007ae924(void) /* sub_7AE924 */
{
    FN_ENTER(0x007ae924);
    /* 007ae924: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007ae925: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007ae926: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007ae927: mov edi, ecx */ r_edi = r_ecx;
    /* 007ae929: mov eax, dword ptr [edi + 0x78] */ r_eax = R32((u32)(r_edi+0x78u));
    /* 007ae92c: mov ebp, dword ptr [eax + 0x94] */ r_ebp = R32((u32)(r_eax+0x94u));
    /* 007ae932: mov eax, dword ptr [edi + 0x34] */ r_eax = R32((u32)(r_edi+0x34u));
    /* 007ae935: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007ae937: jne 0x7ae9b0 */ if (!fZ) goto L_007ae9b0;
L_007ae939:; BB(0x007ae939);
    /* 007ae939: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007ae93b: jne 0x7ae97e */ if (!fZ) goto L_007ae97e;
L_007ae93d:; BB(0x007ae93d);
    /* 007ae93d: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007ae93f: jne 0x7ae94c */ if (!fZ) goto L_007ae94c;
L_007ae941:; BB(0x007ae941);
    /* 007ae941: lea ebx, [ebp + 0x460] */ r_ebx = (u32)(r_ebp+0x460u);
    /* 007ae947: jmp 0x7ae9e0 */ goto L_007ae9e0;
L_007ae94c:; BB(0x007ae94c);
    /* 007ae94c: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 007ae94e: movzx eax, byte ptr [edi + 0x50] */ r_eax = (u32)R8((u32)(r_edi+0x50u));
    /* 007ae952: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007ae953: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007ae955: call 0x699fd8 */ r_esp -= 4; W32(r_esp, 0x7ae95au); f_00699fd8();
    /* 007ae95a: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 007ae95c: movzx eax, byte ptr [edi + 0x50] */ r_eax = (u32)R8((u32)(r_edi+0x50u));
    /* 007ae960: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007ae961: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007ae963: call 0x699fd8 */ r_esp -= 4; W32(r_esp, 0x7ae968u); f_00699fd8();
    /* 007ae968: movzx eax, byte ptr [edi + 0x50] */ r_eax = (u32)R8((u32)(r_edi+0x50u));
    /* 007ae96c: lea ebx, [ebp + 0x460] */ r_ebx = (u32)(r_ebp+0x460u);
    /* 007ae972: mov byte ptr [ebx + 0x62], al */ W8((u32)(r_ebx+0x62u), (u8)r_eax);
    /* 007ae975: movzx edx, byte ptr [edi + 0x50] */ r_edx = (u32)R8((u32)(r_edi+0x50u));
    /* 007ae979: mov byte ptr [ebx + 0x64], dl */ W8((u32)(r_ebx+0x64u), (u8)r_edx);
    /* 007ae97c: jmp 0x7ae9e0 */ goto L_007ae9e0;
L_007ae97e:; BB(0x007ae97e);
    /* 007ae97e: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 007ae980: movzx eax, byte ptr [edi + 0x50] */ r_eax = (u32)R8((u32)(r_edi+0x50u));
    /* 007ae984: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007ae985: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007ae987: call 0x699fd8 */ r_esp -= 4; W32(r_esp, 0x7ae98cu); f_00699fd8();
    /* 007ae98c: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 007ae98e: movzx eax, byte ptr [edi + 0x50] */ r_eax = (u32)R8((u32)(r_edi+0x50u));
    /* 007ae992: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007ae993: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007ae995: call 0x699fd8 */ r_esp -= 4; W32(r_esp, 0x7ae99au); f_00699fd8();
    /* 007ae99a: movzx eax, byte ptr [edi + 0x50] */ r_eax = (u32)R8((u32)(r_edi+0x50u));
    /* 007ae99e: lea ebx, [ebp + 0x460] */ r_ebx = (u32)(r_ebp+0x460u);
    /* 007ae9a4: mov byte ptr [ebx + 0x5f], al */ W8((u32)(r_ebx+0x5fu), (u8)r_eax);
    /* 007ae9a7: movzx edx, byte ptr [edi + 0x50] */ r_edx = (u32)R8((u32)(r_edi+0x50u));
    /* 007ae9ab: mov byte ptr [ebx + 0x60], dl */ W8((u32)(r_ebx+0x60u), (u8)r_edx);
    /* 007ae9ae: jmp 0x7ae9e0 */ goto L_007ae9e0;
L_007ae9b0:; BB(0x007ae9b0);
    /* 007ae9b0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007ae9b2: movzx eax, byte ptr [edi + 0x50] */ r_eax = (u32)R8((u32)(r_edi+0x50u));
    /* 007ae9b6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007ae9b7: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007ae9b9: call 0x699fd8 */ r_esp -= 4; W32(r_esp, 0x7ae9beu); f_00699fd8();
    /* 007ae9be: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007ae9c0: movzx eax, byte ptr [edi + 0x50] */ r_eax = (u32)R8((u32)(r_edi+0x50u));
    /* 007ae9c4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007ae9c5: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007ae9c7: call 0x699fd8 */ r_esp -= 4; W32(r_esp, 0x7ae9ccu); f_00699fd8();
    /* 007ae9cc: movzx eax, byte ptr [edi + 0x50] */ r_eax = (u32)R8((u32)(r_edi+0x50u));
    /* 007ae9d0: lea ebx, [ebp + 0x460] */ r_ebx = (u32)(r_ebp+0x460u);
    /* 007ae9d6: mov byte ptr [ebx + 0x5c], al */ W8((u32)(r_ebx+0x5cu), (u8)r_eax);
    /* 007ae9d9: movzx edx, byte ptr [edi + 0x50] */ r_edx = (u32)R8((u32)(r_edi+0x50u));
    /* 007ae9dd: mov byte ptr [ebx + 0x5d], dl */ W8((u32)(r_ebx+0x5du), (u8)r_edx);
L_007ae9e0:; BB(0x007ae9e0);
    /* 007ae9e0: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 007ae9e2: movzx eax, byte ptr [edi + 0x51] */ r_eax = (u32)R8((u32)(r_edi+0x51u));
    /* 007ae9e6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007ae9e7: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007ae9e9: call 0x699fd8 */ r_esp -= 4; W32(r_esp, 0x7ae9eeu); f_00699fd8();
    /* 007ae9ee: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 007ae9f0: movzx eax, byte ptr [edi + 0x51] */ r_eax = (u32)R8((u32)(r_edi+0x51u));
    /* 007ae9f4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007ae9f5: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007ae9f7: call 0x699fd8 */ r_esp -= 4; W32(r_esp, 0x7ae9fcu); f_00699fd8();
    /* 007ae9fc: movzx eax, byte ptr [edi + 0x51] */ r_eax = (u32)R8((u32)(r_edi+0x51u));
    /* 007aea00: mov byte ptr [ebx + 0x6b], al */ W8((u32)(r_ebx+0x6bu), (u8)r_eax);
    /* 007aea03: movzx edx, byte ptr [edi + 0x51] */ r_edx = (u32)R8((u32)(r_edi+0x51u));
    /* 007aea07: mov byte ptr [ebx + 0x6c], dl */ W8((u32)(r_ebx+0x6cu), (u8)r_edx);
    /* 007aea0a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007aea0b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007aea0c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007aea0d: ret  */ FN_RET(0x007ae924); r_esp += 4; return;
}

void f_007aea10(void) /* sub_7AEA10 */
{
    FN_ENTER(0x007aea10);
    /* 007aea10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007aea11: mov ebp, esp */ r_ebp = r_esp;
    /* 007aea13: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007aea15: push 0x8f5f04 */ { u32 v = 0x8f5f04u; r_esp -= 4; W32(r_esp, v); }
    /* 007aea1a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 007aea20: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007aea21: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 007aea28: sub esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007aea2b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 007aea2e: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 007aea31: mov dword ptr [ebp - 0x24], esi */ W32((u32)(r_ebp+0xffffffdcu), r_esi);
    /* 007aea34: mov dword ptr [ebp - 0x20], ebx */ W32((u32)(r_ebp+0xffffffe0u), r_ebx);
    /* 007aea37: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 007aea3b: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 007aea3e: movzx edx, word ptr [ebp + 0xc] */ r_edx = (u32)R16((u32)(r_ebp+0xcu));
    /* 007aea42: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 007aea45: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 007aea48: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 007aea4b: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 007aea4e: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 007aea51: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x7aea56u); f_008193cc();
    /* 007aea56: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007aea5d: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 007aea60: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 007aea63: mov dword ptr [edx], 0xb46578 */ W32((u32)(r_edx), 0xb46578u);
    /* 007aea69: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007aea6b: push 0x108 */ { u32 v = 0x108u; r_esp -= 4; W32(r_esp, v); }
    /* 007aea70: mov word ptr [edx + 0x5c], ax */ W16((u32)(r_edx+0x5cu), (u16)r_eax);
    /* 007aea74: mov word ptr [edx + 0x5e], ax */ W16((u32)(r_edx+0x5eu), (u16)r_eax);
    /* 007aea78: mov word ptr [edx + 0x60], ax */ W16((u32)(r_edx+0x60u), (u16)r_eax);
    /* 007aea7c: mov word ptr [edx + 0x62], ax */ W16((u32)(r_edx+0x62u), (u16)r_eax);
    /* 007aea80: mov word ptr [edx + 0x64], ax */ W16((u32)(r_edx+0x64u), (u16)r_eax);
    /* 007aea84: mov word ptr [edx + 0x66], ax */ W16((u32)(r_edx+0x66u), (u16)r_eax);
    /* 007aea88: mov word ptr [edx + 0x68], ax */ W16((u32)(r_edx+0x68u), (u16)r_eax);
    /* 007aea8c: mov word ptr [edx + 0x6a], ax */ W16((u32)(r_edx+0x6au), (u16)r_eax);
    /* 007aea90: mov word ptr [edx + 0x6c], ax */ W16((u32)(r_edx+0x6cu), (u16)r_eax);
    /* 007aea94: mov word ptr [edx + 0x6e], ax */ W16((u32)(r_edx+0x6eu), (u16)r_eax);
    /* 007aea98: mov word ptr [edx + 0x70], ax */ W16((u32)(r_edx+0x70u), (u16)r_eax);
    /* 007aea9c: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 007aea9f: mov ecx, dword ptr [0xa03ca4] */ r_ecx = R32((u32)(0xa03ca4u));
    /* 007aeaa5: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 007aeaa8: mov dword ptr [esi + 4], ecx */ W32((u32)(r_esi+0x4u), r_ecx);
    /* 007aeaab: mov dword ptr [esi + 0x24], 0x19 */ W32((u32)(r_esi+0x24u), 0x19u);
    /* 007aeab2: mov dword ptr [esi + 0x1c], eax */ W32((u32)(r_esi+0x1cu), r_eax);
    /* 007aeab5: mov dword ptr [esi + 0x20], eax */ W32((u32)(r_esi+0x20u), r_eax);
    /* 007aeab8: mov dword ptr [esi + 0xc4], eax */ W32((u32)(r_esi+0xc4u), r_eax);
    /* 007aeabe: mov dword ptr [esi + 0xac], 0 */ W32((u32)(r_esi+0xacu), 0x0u);
    /* 007aeac8: mov dword ptr [esi + 0xc8], eax */ W32((u32)(r_esi+0xc8u), r_eax);
    /* 007aeace: mov dword ptr [esi + 0xcc], eax */ W32((u32)(r_esi+0xccu), r_eax);
    /* 007aead4: mov word ptr [esi + 0x2c], bx */ W16((u32)(r_esi+0x2cu), (u16)r_ebx);
    /* 007aead8: mov dword ptr [esi + 0xb0], 0 */ W32((u32)(r_esi+0xb0u), 0x0u);
    /* 007aeae2: mov dword ptr [esi + 0x80], eax */ W32((u32)(r_esi+0x80u), r_eax);
    /* 007aeae8: mov dword ptr [esi + 0x7c], eax */ W32((u32)(r_esi+0x7cu), r_eax);
    /* 007aeaeb: mov byte ptr [esi + 0x8c], al */ W8((u32)(r_esi+0x8cu), (u8)r_eax);
    /* 007aeaf1: mov dword ptr [esi + 0xb4], 0 */ W32((u32)(r_esi+0xb4u), 0x0u);
    /* 007aeafb: mov word ptr [esi + 0x8e], ax */ W16((u32)(r_esi+0x8eu), (u16)r_eax);
    /* 007aeb02: mov byte ptr [esi + 0x8d], al */ W8((u32)(r_esi+0x8du), (u8)r_eax);
    /* 007aeb08: mov dword ptr [esi + 0xd0], 0 */ W32((u32)(r_esi+0xd0u), 0x0u);
    /* 007aeb12: mov dword ptr [esi + 0xd4], 0 */ W32((u32)(r_esi+0xd4u), 0x0u);
    /* 007aeb1c: mov dword ptr [esi + 0xd8], 0 */ W32((u32)(r_esi+0xd8u), 0x0u);
    /* 007aeb26: mov dword ptr [esi + 0xdc], 0 */ W32((u32)(r_esi+0xdcu), 0x0u);
    /* 007aeb30: mov dword ptr [esi + 0xe0], 0 */ W32((u32)(r_esi+0xe0u), 0x0u);
    /* 007aeb3a: mov dword ptr [esi + 0xe4], 0 */ W32((u32)(r_esi+0xe4u), 0x0u);
    /* 007aeb44: mov dword ptr [esi + 0x88], 0 */ W32((u32)(r_esi+0x88u), 0x0u);
    /* 007aeb4e: mov dword ptr [esi + 0x58], 0 */ W32((u32)(r_esi+0x58u), 0x0u);
    /* 007aeb55: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x7aeb5au); f_008581c5();
    /* 007aeb5a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007aeb5b: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 007aeb5e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007aeb60: je 0x7aefca */ if (fZ) goto L_007aefca;
L_007aeb66:; BB(0x007aeb66);
    /* 007aeb66: mov dword ptr [ebp - 0x48], 1 */ W32((u32)(r_ebp+0xffffffb8u), 0x1u);
    /* 007aeb6d: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 007aeb74: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 007aeb77: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007aeb7a: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 007aeb7d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007aeb7e: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x7aeb83u); f_007b4d18();
    /* 007aeb83: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 007aeb86: mov dword ptr [ebx + 0x9c], 0 */ W32((u32)(r_ebx+0x9cu), 0x0u);
    /* 007aeb90: mov dword ptr [ebx + 0x94], eax */ W32((u32)(r_ebx+0x94u), r_eax);
    /* 007aeb96: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007aeb99: mov dword ptr [ebx + 0xa0], 0 */ W32((u32)(r_ebx+0xa0u), 0x0u);
    /* 007aeba3: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 007aeba5: mov dword ptr [ebx + 0x8c], esi */ W32((u32)(r_ebx+0x8cu), r_esi);
    /* 007aebab: mov ecx, 0xffff */ r_ecx = 0xffffu;
    /* 007aebb0: mov dword ptr [ebx + 0xa4], 0 */ W32((u32)(r_ebx+0xa4u), 0x0u);
    /* 007aebba: mov dword ptr [ebx + 0x90], esi */ W32((u32)(r_ebx+0x90u), r_esi);
    /* 007aebc0: mov dword ptr [ebx + 0xc], 0 */ W32((u32)(r_ebx+0xcu), 0x0u);
    /* 007aebc7: push 0xac */ { u32 v = 0xacu; r_esp -= 4; W32(r_esp, v); }
    /* 007aebcc: mov word ptr [ebx + 0x8a], ax */ W16((u32)(r_ebx+0x8au), (u16)r_eax);
    /* 007aebd3: mov dword ptr [ebx + 0x18], 0 */ W32((u32)(r_ebx+0x18u), 0x0u);
    /* 007aebda: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 007aebdf: mov word ptr [ebx + 0x88], dx */ W16((u32)(r_ebx+0x88u), (u16)r_edx);
    /* 007aebe6: mov dword ptr [ebx + 0x84], esi */ W32((u32)(r_ebx+0x84u), r_esi);
    /* 007aebec: mov dword ptr [ebx + 0x24], 0 */ W32((u32)(r_ebx+0x24u), 0x0u);
    /* 007aebf3: mov dword ptr [ebx], esi */ W32((u32)(r_ebx), r_esi);
    /* 007aebf5: mov dword ptr [ebx + 4], ecx */ W32((u32)(r_ebx+0x4u), r_ecx);
    /* 007aebf8: mov dword ptr [ebx + 0x10], ecx */ W32((u32)(r_ebx+0x10u), r_ecx);
    /* 007aebfb: mov dword ptr [ebx + 0x30], 0 */ W32((u32)(r_ebx+0x30u), 0x0u);
    /* 007aec02: mov dword ptr [ebx + 0x1c], ecx */ W32((u32)(r_ebx+0x1cu), r_ecx);
    /* 007aec05: mov dword ptr [ebx + 0x28], ecx */ W32((u32)(r_ebx+0x28u), r_ecx);
    /* 007aec08: mov dword ptr [ebx + 0x34], ecx */ W32((u32)(r_ebx+0x34u), r_ecx);
    /* 007aec0b: mov dword ptr [ebx + 0x3c], 0 */ W32((u32)(r_ebx+0x3cu), 0x0u);
    /* 007aec12: mov dword ptr [ebx + 0x40], ecx */ W32((u32)(r_ebx+0x40u), r_ecx);
    /* 007aec15: mov dword ptr [ebx + 0x4c], ecx */ W32((u32)(r_ebx+0x4cu), r_ecx);
    /* 007aec18: mov dword ptr [ebx + 0x58], ecx */ W32((u32)(r_ebx+0x58u), r_ecx);
    /* 007aec1b: mov dword ptr [ebx + 0x48], 0 */ W32((u32)(r_ebx+0x48u), 0x0u);
    /* 007aec22: mov dword ptr [ebx + 0x64], ecx */ W32((u32)(r_ebx+0x64u), r_ecx);
    /* 007aec25: mov dword ptr [ebx + 0x70], ecx */ W32((u32)(r_ebx+0x70u), r_ecx);
    /* 007aec28: mov dword ptr [ebx + 0x104], esi */ W32((u32)(r_ebx+0x104u), r_esi);
    /* 007aec2e: mov dword ptr [ebx + 0x54], 0 */ W32((u32)(r_ebx+0x54u), 0x0u);
    /* 007aec35: mov dword ptr [ebx + 0xc0], esi */ W32((u32)(r_ebx+0xc0u), r_esi);
    /* 007aec3b: mov dword ptr [ebx + 0x60], 0 */ W32((u32)(r_ebx+0x60u), 0x0u);
    /* 007aec42: mov dword ptr [ebx + 0x6c], 0 */ W32((u32)(r_ebx+0x6cu), 0x0u);
    /* 007aec49: mov dword ptr [ebx + 0x78], 0 */ W32((u32)(r_ebx+0x78u), 0x0u);
    /* 007aec50: mov dword ptr [ebp - 0x40], esi */ W32((u32)(r_ebp+0xffffffc0u), r_esi);
    /* 007aec53: mov dword ptr [ebx + 0xac], 0 */ W32((u32)(r_ebx+0xacu), 0x0u);
    /* 007aec5d: mov dword ptr [ebx + 0xb0], 0 */ W32((u32)(r_ebx+0xb0u), 0x0u);
    /* 007aec67: mov dword ptr [ebx + 0xb4], 0x40a00000 */ W32((u32)(r_ebx+0xb4u), 0x40a00000u);
    /* 007aec71: mov dword ptr [ebx + 0xb8], 0x41980000 */ W32((u32)(r_ebx+0xb8u), 0x41980000u);
    /* 007aec7b: mov dword ptr [ebx + 0xbc], 0x40a00000 */ W32((u32)(r_ebx+0xbcu), 0x40a00000u);
    /* 007aec85: mov dword ptr [ebx + 0xc4], 0x1103 */ W32((u32)(r_ebx+0xc4u), 0x1103u);
    /* 007aec8f: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x7aec94u); f_005caba4();
    /* 007aec94: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 007aec97: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007aec9a: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 007aec9d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007aec9f: je 0x7aefc0 */ if (fZ) goto L_007aefc0;
L_007aeca5:; BB(0x007aeca5);
    /* 007aeca5: mov dword ptr [ebp - 0x40], 1 */ W32((u32)(r_ebp+0xffffffc0u), 0x1u);
    /* 007aecac: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 007aecb3: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 007aecb9: mov ecx, eax */ r_ecx = r_eax;
    /* 007aecbb: call 0x7b4b48 */ r_esp -= 4; W32(r_esp, 0x7aecc0u); f_007b4b48();
    /* 007aecc0: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
L_007aecc7:; BB(0x007aecc7);
    /* 007aecc7: mov edx, ebx */ r_edx = r_ebx;
    /* 007aecc9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007aeccc: mov dword ptr [edx + 0xa8], eax */ W32((u32)(r_edx+0xa8u), r_eax);
    /* 007aecd2: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 007aecd9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007aecdb: je 0x7aecf0 */ if (fZ) goto L_007aecf0;
L_007aecdd:; BB(0x007aecdd);
    /* 007aecdd: mov eax, edx */ r_eax = r_edx;
    /* 007aecdf: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 007aece2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007aece4: lea edx, [eax + 0xac] */ r_edx = (u32)(r_eax+0xacu);
    /* 007aecea: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007aeceb: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x7aecf0u); f_007b9a88();
L_007aecf0:; BB(0x007aecf0);
    /* 007aecf0: mov edx, ebx */ r_edx = r_ebx;
    /* 007aecf2: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
    /* 007aecf9: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 007aecfe: mov dword ptr [edx + 0x7c], eax */ W32((u32)(r_edx+0x7cu), r_eax);
    /* 007aed01: mov dword ptr [edx + 0x80], eax */ W32((u32)(r_edx+0x80u), r_eax);
    /* 007aed07: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
L_007aed0a:; BB(0x007aed0a);
    /* 007aed0a: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 007aed0d: mov dword ptr [eax + 0x74], edx */ W32((u32)(r_eax+0x74u), r_edx);
    /* 007aed10: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007aed17: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 007aed1e: push 0x108 */ { u32 v = 0x108u; r_esp -= 4; W32(r_esp, v); }
    /* 007aed23: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x7aed28u); f_008581c5();
    /* 007aed28: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007aed29: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 007aed2c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007aed2e: je 0x7aefb9 */ if (fZ) goto L_007aefb9;
L_007aed34:; BB(0x007aed34);
    /* 007aed34: mov dword ptr [ebp - 0x38], 1 */ W32((u32)(r_ebp+0xffffffc8u), 0x1u);
    /* 007aed3b: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 007aed42: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 007aed45: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 007aed48: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 007aed4b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007aed4c: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x7aed51u); f_007b4d18();
    /* 007aed51: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 007aed54: mov dword ptr [ebx + 0x9c], 0 */ W32((u32)(r_ebx+0x9cu), 0x0u);
    /* 007aed5e: mov dword ptr [ebx + 0x94], eax */ W32((u32)(r_ebx+0x94u), r_eax);
    /* 007aed64: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 007aed67: mov dword ptr [ebx + 0xa0], 0 */ W32((u32)(r_ebx+0xa0u), 0x0u);
    /* 007aed71: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 007aed73: mov dword ptr [ebx + 0x8c], esi */ W32((u32)(r_ebx+0x8cu), r_esi);
    /* 007aed79: mov ecx, 0xffff */ r_ecx = 0xffffu;
    /* 007aed7e: mov dword ptr [ebx + 0xa4], 0 */ W32((u32)(r_ebx+0xa4u), 0x0u);
    /* 007aed88: mov dword ptr [ebx + 0x90], esi */ W32((u32)(r_ebx+0x90u), r_esi);
    /* 007aed8e: mov dword ptr [ebx + 0xc], 0 */ W32((u32)(r_ebx+0xcu), 0x0u);
    /* 007aed95: push 0xac */ { u32 v = 0xacu; r_esp -= 4; W32(r_esp, v); }
    /* 007aed9a: mov word ptr [ebx + 0x8a], ax */ W16((u32)(r_ebx+0x8au), (u16)r_eax);
    /* 007aeda1: mov dword ptr [ebx + 0x18], 0 */ W32((u32)(r_ebx+0x18u), 0x0u);
    /* 007aeda8: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 007aedad: mov word ptr [ebx + 0x88], dx */ W16((u32)(r_ebx+0x88u), (u16)r_edx);
    /* 007aedb4: mov dword ptr [ebx + 0x84], esi */ W32((u32)(r_ebx+0x84u), r_esi);
    /* 007aedba: mov dword ptr [ebx + 0x24], 0 */ W32((u32)(r_ebx+0x24u), 0x0u);
    /* 007aedc1: mov dword ptr [ebx], esi */ W32((u32)(r_ebx), r_esi);
    /* 007aedc3: mov dword ptr [ebx + 4], ecx */ W32((u32)(r_ebx+0x4u), r_ecx);
    /* 007aedc6: mov dword ptr [ebx + 0x10], ecx */ W32((u32)(r_ebx+0x10u), r_ecx);
    /* 007aedc9: mov dword ptr [ebx + 0x30], 0 */ W32((u32)(r_ebx+0x30u), 0x0u);
    /* 007aedd0: mov dword ptr [ebx + 0x1c], ecx */ W32((u32)(r_ebx+0x1cu), r_ecx);
    /* 007aedd3: mov dword ptr [ebx + 0x28], ecx */ W32((u32)(r_ebx+0x28u), r_ecx);
    /* 007aedd6: mov dword ptr [ebx + 0x34], ecx */ W32((u32)(r_ebx+0x34u), r_ecx);
    /* 007aedd9: mov dword ptr [ebx + 0x3c], 0 */ W32((u32)(r_ebx+0x3cu), 0x0u);
    /* 007aede0: mov dword ptr [ebx + 0x40], ecx */ W32((u32)(r_ebx+0x40u), r_ecx);
    /* 007aede3: mov dword ptr [ebx + 0x4c], ecx */ W32((u32)(r_ebx+0x4cu), r_ecx);
    /* 007aede6: mov dword ptr [ebx + 0x58], ecx */ W32((u32)(r_ebx+0x58u), r_ecx);
    /* 007aede9: mov dword ptr [ebx + 0x48], 0 */ W32((u32)(r_ebx+0x48u), 0x0u);
    /* 007aedf0: mov dword ptr [ebx + 0x64], ecx */ W32((u32)(r_ebx+0x64u), r_ecx);
    /* 007aedf3: mov dword ptr [ebx + 0x70], ecx */ W32((u32)(r_ebx+0x70u), r_ecx);
    /* 007aedf6: mov dword ptr [ebx + 0x104], esi */ W32((u32)(r_ebx+0x104u), r_esi);
    /* 007aedfc: mov dword ptr [ebx + 0x54], 0 */ W32((u32)(r_ebx+0x54u), 0x0u);
    /* 007aee03: mov dword ptr [ebx + 0xc0], esi */ W32((u32)(r_ebx+0xc0u), r_esi);
    /* 007aee09: mov dword ptr [ebx + 0x60], 0 */ W32((u32)(r_ebx+0x60u), 0x0u);
    /* 007aee10: mov dword ptr [ebx + 0x6c], 0 */ W32((u32)(r_ebx+0x6cu), 0x0u);
    /* 007aee17: mov dword ptr [ebx + 0x78], 0 */ W32((u32)(r_ebx+0x78u), 0x0u);
    /* 007aee1e: mov dword ptr [ebp - 0x34], esi */ W32((u32)(r_ebp+0xffffffccu), r_esi);
    /* 007aee21: mov dword ptr [ebx + 0xac], 0 */ W32((u32)(r_ebx+0xacu), 0x0u);
    /* 007aee2b: mov dword ptr [ebx + 0xb0], 0 */ W32((u32)(r_ebx+0xb0u), 0x0u);
    /* 007aee35: mov dword ptr [ebx + 0xb4], 0x40a00000 */ W32((u32)(r_ebx+0xb4u), 0x40a00000u);
    /* 007aee3f: mov dword ptr [ebx + 0xb8], 0x41980000 */ W32((u32)(r_ebx+0xb8u), 0x41980000u);
    /* 007aee49: mov dword ptr [ebx + 0xbc], 0x40a00000 */ W32((u32)(r_ebx+0xbcu), 0x40a00000u);
    /* 007aee53: mov dword ptr [ebx + 0xc4], 0x1103 */ W32((u32)(r_ebx+0xc4u), 0x1103u);
    /* 007aee5d: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x7aee62u); f_005caba4();
    /* 007aee62: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 007aee65: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007aee68: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 007aee6b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007aee6d: je 0x7aefaf */ if (fZ) goto L_007aefaf;
L_007aee73:; BB(0x007aee73);
    /* 007aee73: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 007aee7a: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 007aee81: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 007aee87: mov ecx, eax */ r_ecx = r_eax;
    /* 007aee89: call 0x7b4b48 */ r_esp -= 4; W32(r_esp, 0x7aee8eu); f_007b4b48();
    /* 007aee8e: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_007aee95:; BB(0x007aee95);
    /* 007aee95: mov edx, ebx */ r_edx = r_ebx;
    /* 007aee97: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 007aee9a: mov dword ptr [edx + 0xa8], eax */ W32((u32)(r_edx+0xa8u), r_eax);
    /* 007aeea0: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 007aeea7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007aeea9: je 0x7aeebe */ if (fZ) goto L_007aeebe;
L_007aeeab:; BB(0x007aeeab);
    /* 007aeeab: mov eax, edx */ r_eax = r_edx;
    /* 007aeead: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 007aeeb0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007aeeb2: lea edx, [eax + 0xac] */ r_edx = (u32)(r_eax+0xacu);
    /* 007aeeb8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007aeeb9: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x7aeebeu); f_007b9a88();
L_007aeebe:; BB(0x007aeebe);
    /* 007aeebe: mov edx, ebx */ r_edx = r_ebx;
    /* 007aeec0: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 007aeec7: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 007aeecc: mov dword ptr [edx + 0x7c], eax */ W32((u32)(r_edx+0x7cu), r_eax);
    /* 007aeecf: mov dword ptr [edx + 0x80], eax */ W32((u32)(r_edx+0x80u), r_eax);
    /* 007aeed5: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
L_007aeed8:; BB(0x007aeed8);
    /* 007aeed8: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 007aeedb: mov dword ptr [edx + 0x78], eax */ W32((u32)(r_edx+0x78u), r_eax);
    /* 007aeede: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007aeee5: movsx ecx, word ptr [edx + 0x2c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edx+0x2cu));
    /* 007aeee9: lea eax, [ecx + ecx*4] */ r_eax = (u32)(r_ecx+r_ecx*4);
    /* 007aeeec: mov ebx, dword ptr [eax*8 + 0xa02ea0] */ r_ebx = R32((u32)(r_eax*8+0xa02ea0u));
    /* 007aeef3: mov dword ptr [edx + 0x30], ebx */ W32((u32)(r_edx+0x30u), r_ebx);
    /* 007aeef6: mov esi, dword ptr [eax*8 + 0xa02ea4] */ r_esi = R32((u32)(r_eax*8+0xa02ea4u));
    /* 007aeefd: mov dword ptr [edx + 0x34], esi */ W32((u32)(r_edx+0x34u), r_esi);
    /* 007aef00: mov edi, dword ptr [eax*8 + 0xa02ea8] */ r_edi = R32((u32)(r_eax*8+0xa02ea8u));
    /* 007aef07: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 007aef0a: mov dword ptr [edx + 0x38], edi */ W32((u32)(r_edx+0x38u), r_edi);
    /* 007aef0d: mov ecx, dword ptr [eax*8 + 0xa02eac] */ r_ecx = R32((u32)(r_eax*8+0xa02eacu));
    /* 007aef14: mov dword ptr [edx + 0x3c], ecx */ W32((u32)(r_edx+0x3cu), r_ecx);
    /* 007aef17: mov ecx, dword ptr [eax*8 + 0xa02eb0] */ r_ecx = R32((u32)(r_eax*8+0xa02eb0u));
    /* 007aef1e: mov dword ptr [edx + 0x40], ecx */ W32((u32)(r_edx+0x40u), r_ecx);
    /* 007aef21: mov ecx, dword ptr [eax*8 + 0xa02eb4] */ r_ecx = R32((u32)(r_eax*8+0xa02eb4u));
    /* 007aef28: mov dword ptr [edx + 0x44], ecx */ W32((u32)(r_edx+0x44u), r_ecx);
    /* 007aef2b: mov ecx, dword ptr [eax*8 + 0xa02eb8] */ r_ecx = R32((u32)(r_eax*8+0xa02eb8u));
    /* 007aef32: mov dword ptr [edx + 0x48], ecx */ W32((u32)(r_edx+0x48u), r_ecx);
    /* 007aef35: mov ecx, dword ptr [eax*8 + 0xa02ebc] */ r_ecx = R32((u32)(r_eax*8+0xa02ebcu));
    /* 007aef3c: mov dword ptr [edx + 0x4c], ecx */ W32((u32)(r_edx+0x4cu), r_ecx);
    /* 007aef3f: mov ecx, dword ptr [eax*8 + 0xa02ec0] */ r_ecx = R32((u32)(r_eax*8+0xa02ec0u));
    /* 007aef46: mov dword ptr [edx + 0x50], ecx */ W32((u32)(r_edx+0x50u), r_ecx);
    /* 007aef49: mov eax, dword ptr [eax*8 + 0xa02ec4] */ r_eax = R32((u32)(r_eax*8+0xa02ec4u));
    /* 007aef50: mov dword ptr [edx + 0x54], eax */ W32((u32)(r_edx+0x54u), r_eax);
    /* 007aef53: mov eax, dword ptr [esi + 0x78] */ r_eax = R32((u32)(r_esi+0x78u));
    /* 007aef56: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007aef58: je 0x7aef8a */ if (fZ) goto L_007aef8a;
L_007aef5a:; BB(0x007aef5a);
    /* 007aef5a: mov ecx, dword ptr [eax + 0x94] */ r_ecx = R32((u32)(r_eax+0x94u));
    /* 007aef60: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007aef62: je 0x7aef8a */ if (fZ) goto L_007aef8a;
L_007aef64:; BB(0x007aef64);
    /* 007aef64: mov eax, dword ptr [ecx + 0x38] */ r_eax = R32((u32)(r_ecx+0x38u));
    /* 007aef67: mov dword ptr [esi + 0xdc], eax */ W32((u32)(r_esi+0xdcu), r_eax);
    /* 007aef6d: mov edx, dword ptr [ecx + 0x3c] */ r_edx = R32((u32)(r_ecx+0x3cu));
    /* 007aef70: mov dword ptr [esi + 0xe0], edx */ W32((u32)(r_esi+0xe0u), r_edx);
    /* 007aef76: mov ebx, dword ptr [ecx + 0x40] */ r_ebx = R32((u32)(r_ecx+0x40u));
    /* 007aef79: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 007aef7c: mov dword ptr [esi + 0xe4], ebx */ W32((u32)(r_esi+0xe4u), r_ebx);
    /* 007aef82: call 0x7ae924 */ r_esp -= 4; W32(r_esp, 0x7aef87u); f_007ae924();
    /* 007aef87: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
L_007aef8a:; BB(0x007aef8a);
    /* 007aef8a: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 007aef8d: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007aef90: mov dword ptr [esi + 0x84], 0 */ W32((u32)(r_esi+0x84u), 0x0u);
    /* 007aef9a: mov eax, esi */ r_eax = r_esi;
    /* 007aef9c: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 007aef9f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007aefa2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007aefa9: mov esp, ebp */ r_esp = r_ebp;
    /* 007aefab: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007aefac: ret 0x10 */ FN_RET(0x007aea10); r_esp += 20; return;
L_007aefaf:; BB(0x007aefaf);
    /* 007aefaf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007aefb1: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 007aefb4: jmp 0x7aee95 */ goto L_007aee95;
L_007aefb9:; BB(0x007aefb9);
    /* 007aefb9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007aefbb: jmp 0x7aeed8 */ goto L_007aeed8;
L_007aefc0:; BB(0x007aefc0);
    /* 007aefc0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007aefc2: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 007aefc5: jmp 0x7aecc7 */ goto L_007aecc7;
L_007aefca:; BB(0x007aefca);
    /* 007aefca: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007aefcc: jmp 0x7aed0a */ goto L_007aed0a;
}

void f_007aefd4(void) /* sub_7AEFD4 */
{
    FN_ENTER(0x007aefd4);
    /* 007aefd4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007aefd5: mov esi, ecx */ r_esi = r_ecx;
    /* 007aefd7: mov ecx, dword ptr [esi + 0x74] */ r_ecx = R32((u32)(r_esi+0x74u));
    /* 007aefda: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007aefdc: je 0x7af172 */ if (fZ) goto L_007af172;
L_007aefe2:; BB(0x007aefe2);
    /* 007aefe2: mov eax, dword ptr [esi + 0x78] */ r_eax = R32((u32)(r_esi+0x78u));
    /* 007aefe5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007aefe7: je 0x7af172 */ if (fZ) goto L_007af172;
L_007aefed:; BB(0x007aefed);
    /* 007aefed: call 0x7af174 */ r_esp -= 4; W32(r_esp, 0x7aeff2u); f_007af174();
    /* 007aeff2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007aeff4: je 0x7af005 */ if (fZ) goto L_007af005;
L_007aeff6:; BB(0x007aeff6);
    /* 007aeff6: movzx eax, word ptr [esi + 8] */ r_eax = (u32)R16((u32)(r_esi+0x8u));
    /* 007aeffa: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007aefff: mov word ptr [esi + 8], ax */ W16((u32)(r_esi+0x8u), (u16)r_eax);
    /* 007af003: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007af004: ret  */ FN_RET(0x007aefd4); r_esp += 4; return;
L_007af005:; BB(0x007af005);
    /* 007af005: mov ecx, dword ptr [esi + 0x78] */ r_ecx = R32((u32)(r_esi+0x78u));
    /* 007af008: call 0x7af174 */ r_esp -= 4; W32(r_esp, 0x7af00du); f_007af174();
    /* 007af00d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007af00f: je 0x7af020 */ if (fZ) goto L_007af020;
L_007af011:; BB(0x007af011);
    /* 007af011: movzx eax, word ptr [esi + 8] */ r_eax = (u32)R16((u32)(r_esi+0x8u));
    /* 007af015: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007af01a: mov word ptr [esi + 8], ax */ W16((u32)(r_esi+0x8u), (u16)r_eax);
    /* 007af01e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007af01f: ret  */ FN_RET(0x007aefd4); r_esp += 4; return;
L_007af020:; BB(0x007af020);
    /* 007af020: mov eax, dword ptr [esi + 0x78] */ r_eax = R32((u32)(r_esi+0x78u));
    /* 007af023: mov eax, dword ptr [eax + 0x94] */ r_eax = R32((u32)(r_eax+0x94u));
    /* 007af029: mov edx, dword ptr [eax + 0xdf0] */ r_edx = R32((u32)(r_eax+0xdf0u));
    /* 007af02f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007af031: jne 0x7af172 */ if (!fZ) goto L_007af172;
L_007af037:; BB(0x007af037);
    /* 007af037: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007af039: je 0x7af04d */ if (fZ) goto L_007af04d;
L_007af03b:; BB(0x007af03b);
    /* 007af03b: movzx eax, word ptr [eax + 0x750] */ r_eax = (u32)R16((u32)(r_eax+0x750u));
    /* 007af042: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007af047: je 0x7af172 */ if (fZ) goto L_007af172;
L_007af04d:; BB(0x007af04d);
    /* 007af04d: mov ecx, esi */ r_ecx = r_esi;
    /* 007af04f: call 0x7b34e8 */ r_esp -= 4; W32(r_esp, 0x7af054u); f_007b34e8();
    /* 007af054: mov eax, dword ptr [esi + 0x74] */ r_eax = R32((u32)(r_esi+0x74u));
    /* 007af057: mov edx, dword ptr [eax + 0x94] */ r_edx = R32((u32)(r_eax+0x94u));
    /* 007af05d: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 007af060: test eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007af065: jne 0x7af172 */ if (!fZ) goto L_007af172;
L_007af06b:; BB(0x007af06b);
    /* 007af06b: mov eax, dword ptr [esi + 0x78] */ r_eax = R32((u32)(r_esi+0x78u));
    /* 007af06e: mov edx, dword ptr [eax + 0x94] */ r_edx = R32((u32)(r_eax+0x94u));
    /* 007af074: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 007af077: test eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007af07c: je 0x7af149 */ if (fZ) goto L_007af149;
L_007af082:; BB(0x007af082);
    /* 007af082: movsx eax, word ptr [esi + 0x62] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x62u));
    /* 007af086: cmp eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007af08b: jl 0x7af0c5 */ if ((fS!=fO)) goto L_007af0c5;
L_007af08d:; BB(0x007af08d);
    /* 007af08d: mov eax, 0x400 */ r_eax = 0x400u;
    /* 007af092: mov edx, 0x400 */ r_edx = 0x400u;
    /* 007af097: mov word ptr [esi + 0x62], dx */ W16((u32)(r_esi+0x62u), (u16)r_edx);
    /* 007af09b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007af09d: mov word ptr [esi + 0x5c], dx */ W16((u32)(r_esi+0x5cu), (u16)r_edx);
    /* 007af0a1: mov edx, dword ptr [esi + 0x24] */ r_edx = R32((u32)(r_esi+0x24u));
    /* 007af0a4: cmp edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007af0a7: je 0x7af0fb */ if (fZ) goto L_007af0fb;
L_007af0a9:; BB(0x007af0a9);
    /* 007af0a9: mov eax, dword ptr [esi + 0x80] */ r_eax = R32((u32)(r_esi+0x80u));
    /* 007af0af: mov dword ptr [esi + 0x24], 5 */ W32((u32)(r_esi+0x24u), 0x5u);
    /* 007af0b6: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007af0b9: mov dword ptr [esi + 0x80], eax */ W32((u32)(r_esi+0x80u), r_eax);
    /* 007af0bf: movsx eax, word ptr [esi + 0x62] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x62u));
    /* 007af0c3: jmp 0x7af0fb */ goto L_007af0fb;
L_007af0c5:; BB(0x007af0c5);
    /* 007af0c5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007af0c7: jl 0x7af0fb */ if ((fS!=fO)) goto L_007af0fb;
L_007af0c9:; BB(0x007af0c9);
    /* 007af0c9: mov edx, dword ptr [esi + 0x84] */ r_edx = R32((u32)(r_esi+0x84u));
    /* 007af0cf: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007af0d1: jne 0x7af0fb */ if (!fZ) goto L_007af0fb;
L_007af0d3:; BB(0x007af0d3);
    /* 007af0d3: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007af0d5: mov word ptr [esi + 0x5c], dx */ W16((u32)(r_esi+0x5cu), (u16)r_edx);
    /* 007af0d9: mov edx, dword ptr [esi + 0x24] */ r_edx = R32((u32)(r_esi+0x24u));
    /* 007af0dc: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007af0df: je 0x7af0fb */ if (fZ) goto L_007af0fb;
L_007af0e1:; BB(0x007af0e1);
    /* 007af0e1: mov eax, dword ptr [esi + 0x80] */ r_eax = R32((u32)(r_esi+0x80u));
    /* 007af0e7: mov dword ptr [esi + 0x24], 4 */ W32((u32)(r_esi+0x24u), 0x4u);
    /* 007af0ee: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007af0f1: mov dword ptr [esi + 0x80], eax */ W32((u32)(r_esi+0x80u), r_eax);
    /* 007af0f7: movsx eax, word ptr [esi + 0x62] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x62u));
L_007af0fb:; BB(0x007af0fb);
    /* 007af0fb: mov edx, dword ptr [esi + 0x78] */ r_edx = R32((u32)(r_esi+0x78u));
    /* 007af0fe: mov dword ptr [esi + 0x7c], 0 */ W32((u32)(r_esi+0x7cu), 0x0u);
    /* 007af105: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007af108: mov word ptr [esi + 0x62], ax */ W16((u32)(r_esi+0x62u), (u16)r_eax);
    /* 007af10c: mov eax, dword ptr [esi + 0x80] */ r_eax = R32((u32)(r_esi+0x80u));
    /* 007af112: and eax, 0xffffefcf */ {  u32 a = r_eax; u32 b = 0xffffefcfu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 007af117: mov dword ptr [esi + 0x80], eax */ W32((u32)(r_esi+0x80u), r_eax);
    /* 007af11d: mov edx, dword ptr [edx + 0x94] */ r_edx = R32((u32)(r_edx+0x94u));
    /* 007af123: mov eax, dword ptr [edx + 0x300] */ r_eax = R32((u32)(r_edx+0x300u));
    /* 007af129: mov dword ptr [esi + 0xdc], eax */ W32((u32)(r_esi+0xdcu), r_eax);
    /* 007af12f: mov eax, dword ptr [edx + 0x304] */ r_eax = R32((u32)(r_edx+0x304u));
    /* 007af135: mov dword ptr [esi + 0xe0], eax */ W32((u32)(r_esi+0xe0u), r_eax);
    /* 007af13b: mov eax, dword ptr [edx + 0x308] */ r_eax = R32((u32)(r_edx+0x308u));
    /* 007af141: mov dword ptr [esi + 0xe4], eax */ W32((u32)(r_esi+0xe4u), r_eax);
    /* 007af147: jmp 0x7af16b */ goto L_007af16b;
L_007af149:; BB(0x007af149);
    /* 007af149: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007af14b: mov word ptr [esi + 0x62], ax */ W16((u32)(r_esi+0x62u), (u16)r_eax);
    /* 007af14f: mov ecx, esi */ r_ecx = r_esi;
    /* 007af151: call 0x7af1a8 */ r_esp -= 4; W32(r_esp, 0x7af156u); f_007af1a8();
    /* 007af156: mov ecx, esi */ r_ecx = r_esi;
    /* 007af158: call 0x7af7ec */ r_esp -= 4; W32(r_esp, 0x7af15du); f_007af7ec();
    /* 007af15d: mov ecx, esi */ r_ecx = r_esi;
    /* 007af15f: call 0x7b00bc */ r_esp -= 4; W32(r_esp, 0x7af164u); f_007b00bc();
    /* 007af164: mov ecx, esi */ r_ecx = r_esi;
    /* 007af166: call 0x7b1134 */ r_esp -= 4; W32(r_esp, 0x7af16bu); f_007b1134();
L_007af16b:; BB(0x007af16b);
    /* 007af16b: mov ecx, esi */ r_ecx = r_esi;
    /* 007af16d: call 0x7b2764 */ r_esp -= 4; W32(r_esp, 0x7af172u); f_007b2764();
L_007af172:; BB(0x007af172);
    /* 007af172: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007af173: ret  */ FN_RET(0x007aefd4); r_esp += 4; return;
}

