#include "protos.h"

void f_00509580(void) /* sub_509580 */
{
    FN_ENTER(0x00509580);
    /* 00509580: movzx eax, word ptr [ecx + 0x2c] */ r_eax = (u32)R16((u32)(r_ecx+0x2cu));
    /* 00509584: and eax, 0xfffe */ {  u32 a = r_eax; u32 b = 0xfffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00509589: mov word ptr [ecx + 0x2c], ax */ W16((u32)(r_ecx+0x2cu), (u16)r_eax);
    /* 0050958d: ret  */ FN_RET(0x00509580); r_esp += 4; return;
}

void f_00509590(void) /* sub_509590 */
{
    FN_ENTER(0x00509590);
    /* 00509590: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00509591: mov ebp, esp */ r_ebp = r_esp;
    /* 00509593: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00509595: push 0x8d3bc2 */ { u32 v = 0x8d3bc2u; r_esp -= 4; W32(r_esp, v); }
    /* 0050959a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005095a0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005095a1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005095a8: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005095ab: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005095ae: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 005095b1: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 005095b4: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 005095b7: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005095ba: mov edx, dword ptr [0x9bb1c8] */ r_edx = R32((u32)(0x9bb1c8u));
    /* 005095c0: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005095c2: jg 0x5096ff */ if ((!fZ&&fS==fO)) goto L_005096ff;
L_005095c8:; BB(0x005095c8);
    /* 005095c8: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005095cb: add edx, 0x40 */ {  u32 a = r_edx; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005095ce: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005095d0: jle 0x5096ef */ if ((fZ||fS!=fO)) goto L_005096ef;
L_005095d6:; BB(0x005095d6);
    /* 005095d6: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005095d9: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 005095e0: lea edx, [eax - 0x200] */ r_edx = (u32)(r_eax+0xfffffe00u);
    /* 005095e6: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 005095e9: push 0xd0 */ { u32 v = 0xd0u; r_esp -= 4; W32(r_esp, v); }
    /* 005095ee: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5095f3u); f_005caba4();
    /* 005095f3: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005095f6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005095f9: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 005095fc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005095fe: je 0x509808 */ if (fZ) goto L_00509808;
L_00509604:; BB(0x00509604);
    /* 00509604: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 0050960b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00509612: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 00509618: mov ebx, dword ptr [ebp + 0xc] */ r_ebx = R32((u32)(r_ebp+0xcu));
    /* 0050961b: lea ebx, [ebx + ebx*4 - 0xa00] */ r_ebx = (u32)(r_ebx+r_ebx*4+0xfffff600u);
    /* 00509622: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00509624: mov ecx, eax */ r_ecx = r_eax;
    /* 00509626: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00509628: sub ebx, dword ptr [ebp - 0x18] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0050962b: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0050962d: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0050962f: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00509631: add ebx, dword ptr [0xa72ccc] */ {  u32 a = r_ebx; u32 b = R32((u32)(0xa72cccu)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00509637: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x50963cu); f_008193cc();
    /* 0050963c: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0050963f: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 00509642: mov dword ptr [edx], 0xaff308 */ W32((u32)(r_edx), 0xaff308u);
    /* 00509648: mov ecx, dword ptr [0x9ba90c] */ r_ecx = R32((u32)(0x9ba90cu));
    /* 0050964e: mov dword ptr [edx + 0x44], 0x3f800000 */ W32((u32)(r_edx+0x44u), 0x3f800000u);
    /* 00509655: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 00509658: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0050965a: mov dword ptr [edx + 0x48], 0x3f800000 */ W32((u32)(r_edx+0x48u), 0x3f800000u);
    /* 00509661: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00509664: mov dword ptr [edx + 0x50], eax */ W32((u32)(r_edx+0x50u), r_eax);
    /* 00509667: mov dword ptr [edx + 0x1c], 0 */ W32((u32)(r_edx+0x1cu), 0x0u);
    /* 0050966e: mov dword ptr [edx + 0x54], eax */ W32((u32)(r_edx+0x54u), r_eax);
    /* 00509671: mov dword ptr [edx + 0x58], eax */ W32((u32)(r_edx+0x58u), r_eax);
    /* 00509674: mov dword ptr [edx + 0x4c], eax */ W32((u32)(r_edx+0x4cu), r_eax);
    /* 00509677: mov dword ptr [edx + 0x24], 0x3f800000 */ W32((u32)(r_edx+0x24u), 0x3f800000u);
    /* 0050967e: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 00509681: mov dword ptr [edx + 0x28], ebx */ W32((u32)(r_edx+0x28u), r_ebx);
    /* 00509684: mov ebx, dword ptr [edi] */ r_ebx = R32((u32)(r_edi));
    /* 00509686: mov dword ptr [edx + 0x6c], ebx */ W32((u32)(r_edx+0x6cu), r_ebx);
    /* 00509689: mov esi, dword ptr [edi + 4] */ r_esi = R32((u32)(r_edi+0x4u));
    /* 0050968c: mov dword ptr [edx + 0x70], esi */ W32((u32)(r_edx+0x70u), r_esi);
    /* 0050968f: mov ecx, dword ptr [edi + 8] */ r_ecx = R32((u32)(r_edi+0x8u));
    /* 00509692: mov dword ptr [edx + 0x74], ecx */ W32((u32)(r_edx+0x74u), r_ecx);
    /* 00509695: mov word ptr [edx + 0x2c], ax */ W16((u32)(r_edx+0x2cu), (u16)r_eax);
    /* 00509699: mov dword ptr [edx + 0x64], 0x3f800000 */ W32((u32)(r_edx+0x64u), 0x3f800000u);
    /* 005096a0: mov ecx, 0xffff */ r_ecx = 0xffffu;
    /* 005096a5: mov word ptr [edx + 0x2e], ax */ W16((u32)(r_edx+0x2eu), (u16)r_eax);
    /* 005096a9: mov dword ptr [edx + 0x68], 0x3f800000 */ W32((u32)(r_edx+0x68u), 0x3f800000u);
    /* 005096b0: mov word ptr [edx + 0x30], cx */ W16((u32)(r_edx+0x30u), (u16)r_ecx);
    /* 005096b4: mov ecx, dword ptr [0xaca344] */ r_ecx = R32((u32)(0xaca344u));
    /* 005096ba: mov dword ptr [edx + 0x78], eax */ W32((u32)(r_edx+0x78u), r_eax);
    /* 005096bd: mov dword ptr [edx + 0x7c], eax */ W32((u32)(r_edx+0x7cu), r_eax);
    /* 005096c0: mov dword ptr [edx + 0x80], eax */ W32((u32)(r_edx+0x80u), r_eax);
    /* 005096c6: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 005096c9: mov dword ptr [edx + 0x38], eax */ W32((u32)(r_edx+0x38u), r_eax);
    /* 005096cc: mov dword ptr [edx + 0x3c], eax */ W32((u32)(r_edx+0x3cu), r_eax);
    /* 005096cf: mov dword ptr [edx + 0x40], eax */ W32((u32)(r_edx+0x40u), r_eax);
    /* 005096d2: mov dword ptr [edx + 0x5c], ecx */ W32((u32)(r_edx+0x5cu), r_ecx);
L_005096d5:; BB(0x005096d5);
    /* 005096d5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005096d8: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 005096db: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 005096de: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005096e1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005096e4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005096eb: mov esp, ebp */ r_esp = r_ebp;
    /* 005096ed: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005096ee: ret  */ FN_RET(0x00509590); r_esp += 4; return;
L_005096ef:; BB(0x005096ef);
    /* 005096ef: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005096f1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005096f4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005096fb: mov esp, ebp */ r_esp = r_ebp;
    /* 005096fd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005096fe: ret  */ FN_RET(0x00509590); r_esp += 4; return;
L_005096ff:; BB(0x005096ff);
    /* 005096ff: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 00509706: push 0xd0 */ { u32 v = 0xd0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050970b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x509710u); f_005caba4();
    /* 00509710: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00509713: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00509716: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00509719: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050971b: je 0x509812 */ if (fZ) goto L_00509812;
L_00509721:; BB(0x00509721);
    /* 00509721: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 00509728: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0050972f: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 00509735: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00509738: lea ebx, [eax + eax*4] */ r_ebx = (u32)(r_eax+r_eax*4);
    /* 0050973b: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0050973d: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00509740: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00509742: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 00509744: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00509746: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00509748: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0050974a: add ebx, dword ptr [0xa72cd0] */ {  u32 a = r_ebx; u32 b = R32((u32)(0xa72cd0u)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00509750: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x509755u); f_008193cc();
    /* 00509755: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00509758: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 0050975b: mov dword ptr [edx], 0xaff308 */ W32((u32)(r_edx), 0xaff308u);
    /* 00509761: mov ecx, dword ptr [0x9ba90c] */ r_ecx = R32((u32)(0x9ba90cu));
    /* 00509767: mov dword ptr [edx + 0x44], 0x3f800000 */ W32((u32)(r_edx+0x44u), 0x3f800000u);
    /* 0050976e: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 00509771: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00509773: mov dword ptr [edx + 0x48], 0x3f800000 */ W32((u32)(r_edx+0x48u), 0x3f800000u);
    /* 0050977a: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0050977d: mov dword ptr [edx + 0x50], eax */ W32((u32)(r_edx+0x50u), r_eax);
    /* 00509780: mov dword ptr [edx + 0x1c], 0 */ W32((u32)(r_edx+0x1cu), 0x0u);
    /* 00509787: mov dword ptr [edx + 0x54], eax */ W32((u32)(r_edx+0x54u), r_eax);
    /* 0050978a: mov dword ptr [edx + 0x58], eax */ W32((u32)(r_edx+0x58u), r_eax);
    /* 0050978d: mov dword ptr [edx + 0x4c], eax */ W32((u32)(r_edx+0x4cu), r_eax);
    /* 00509790: mov dword ptr [edx + 0x24], 0x3f800000 */ W32((u32)(r_edx+0x24u), 0x3f800000u);
    /* 00509797: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 0050979a: mov dword ptr [edx + 0x28], ebx */ W32((u32)(r_edx+0x28u), r_ebx);
    /* 0050979d: mov ebx, dword ptr [edi] */ r_ebx = R32((u32)(r_edi));
    /* 0050979f: mov dword ptr [edx + 0x6c], ebx */ W32((u32)(r_edx+0x6cu), r_ebx);
    /* 005097a2: mov esi, dword ptr [edi + 4] */ r_esi = R32((u32)(r_edi+0x4u));
    /* 005097a5: mov dword ptr [edx + 0x70], esi */ W32((u32)(r_edx+0x70u), r_esi);
    /* 005097a8: mov ecx, dword ptr [edi + 8] */ r_ecx = R32((u32)(r_edi+0x8u));
    /* 005097ab: mov dword ptr [edx + 0x74], ecx */ W32((u32)(r_edx+0x74u), r_ecx);
    /* 005097ae: mov word ptr [edx + 0x2c], ax */ W16((u32)(r_edx+0x2cu), (u16)r_eax);
    /* 005097b2: mov dword ptr [edx + 0x64], 0x3f800000 */ W32((u32)(r_edx+0x64u), 0x3f800000u);
    /* 005097b9: mov ecx, 0xffff */ r_ecx = 0xffffu;
    /* 005097be: mov word ptr [edx + 0x2e], ax */ W16((u32)(r_edx+0x2eu), (u16)r_eax);
    /* 005097c2: mov dword ptr [edx + 0x68], 0x3f800000 */ W32((u32)(r_edx+0x68u), 0x3f800000u);
    /* 005097c9: mov word ptr [edx + 0x30], cx */ W16((u32)(r_edx+0x30u), (u16)r_ecx);
    /* 005097cd: mov ecx, dword ptr [0xaca344] */ r_ecx = R32((u32)(0xaca344u));
    /* 005097d3: mov dword ptr [edx + 0x78], eax */ W32((u32)(r_edx+0x78u), r_eax);
    /* 005097d6: mov dword ptr [edx + 0x7c], eax */ W32((u32)(r_edx+0x7cu), r_eax);
    /* 005097d9: mov dword ptr [edx + 0x80], eax */ W32((u32)(r_edx+0x80u), r_eax);
    /* 005097df: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 005097e2: mov dword ptr [edx + 0x38], eax */ W32((u32)(r_edx+0x38u), r_eax);
    /* 005097e5: mov dword ptr [edx + 0x3c], eax */ W32((u32)(r_edx+0x3cu), r_eax);
    /* 005097e8: mov dword ptr [edx + 0x40], eax */ W32((u32)(r_edx+0x40u), r_eax);
    /* 005097eb: mov dword ptr [edx + 0x5c], ecx */ W32((u32)(r_edx+0x5cu), r_ecx);
L_005097ee:; BB(0x005097ee);
    /* 005097ee: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005097f1: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 005097f4: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 005097f7: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005097fa: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005097fd: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00509804: mov esp, ebp */ r_esp = r_ebp;
    /* 00509806: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00509807: ret  */ FN_RET(0x00509590); r_esp += 4; return;
L_00509808:; BB(0x00509808);
    /* 00509808: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0050980a: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0050980d: jmp 0x5096d5 */ goto L_005096d5;
L_00509812:; BB(0x00509812);
    /* 00509812: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00509814: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00509817: jmp 0x5097ee */ goto L_005097ee;
}

void f_005096a0(void)
{
    FN_ENTER(0x005096a0);
    /* 005096a0: mov ecx, 0xffff */ r_ecx = 0xffffu;
    /* 005096a5: mov word ptr [edx + 0x2e], ax */ W16((u32)(r_edx+0x2eu), (u16)r_eax);
    /* 005096a9: mov dword ptr [edx + 0x68], 0x3f800000 */ W32((u32)(r_edx+0x68u), 0x3f800000u);
    /* 005096b0: mov word ptr [edx + 0x30], cx */ W16((u32)(r_edx+0x30u), (u16)r_ecx);
    /* 005096b4: mov ecx, dword ptr [0xaca344] */ r_ecx = R32((u32)(0xaca344u));
    /* 005096ba: mov dword ptr [edx + 0x78], eax */ W32((u32)(r_edx+0x78u), r_eax);
    /* 005096bd: mov dword ptr [edx + 0x7c], eax */ W32((u32)(r_edx+0x7cu), r_eax);
    /* 005096c0: mov dword ptr [edx + 0x80], eax */ W32((u32)(r_edx+0x80u), r_eax);
    /* 005096c6: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 005096c9: mov dword ptr [edx + 0x38], eax */ W32((u32)(r_edx+0x38u), r_eax);
    /* 005096cc: mov dword ptr [edx + 0x3c], eax */ W32((u32)(r_edx+0x3cu), r_eax);
    /* 005096cf: mov dword ptr [edx + 0x40], eax */ W32((u32)(r_edx+0x40u), r_eax);
    /* 005096d2: mov dword ptr [edx + 0x5c], ecx */ W32((u32)(r_edx+0x5cu), r_ecx);
    /* 005096d5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005096d8: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 005096db: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 005096de: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005096e1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005096e4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005096eb: mov esp, ebp */ r_esp = r_ebp;
    /* 005096ed: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005096ee: ret  */ FN_RET(0x005096a0); r_esp += 4; return;
}

void f_0050981c(void) /* sub_50981C */
{
    FN_ENTER(0x0050981c);
    /* 0050981c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050981d: mov ebp, esp */ r_ebp = r_esp;
    /* 0050981f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00509821: push 0x8d3c02 */ { u32 v = 0x8d3c02u; r_esp -= 4; W32(r_esp, v); }
    /* 00509826: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0050982c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050982d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00509834: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00509837: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0050983a: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 0050983d: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 00509840: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 00509843: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00509846: mov edx, dword ptr [0x9bb1c8] */ r_edx = R32((u32)(0x9bb1c8u));
    /* 0050984c: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050984e: jg 0x5099c9 */ if ((!fZ&&fS==fO)) goto L_005099c9;
L_00509854:; BB(0x00509854);
    /* 00509854: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00509857: add edx, 0x40 */ {  u32 a = r_edx; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0050985a: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050985c: jle 0x5099b9 */ if ((fZ||fS!=fO)) goto L_005099b9;
L_00509862:; BB(0x00509862);
    /* 00509862: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00509865: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 0050986c: lea edx, [eax - 0x200] */ r_edx = (u32)(r_eax+0xfffffe00u);
    /* 00509872: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00509875: push 0xd0 */ { u32 v = 0xd0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050987a: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x50987fu); f_005caba4();
    /* 0050987f: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00509882: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00509885: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00509888: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050988a: je 0x509b10 */ if (fZ) goto L_00509b10;
L_00509890:; BB(0x00509890);
    /* 00509890: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 00509897: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0050989e: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 005098a4: mov ebx, dword ptr [ebp + 0xc] */ r_ebx = R32((u32)(r_ebp+0xcu));
    /* 005098a7: lea ebx, [ebx + ebx*4 - 0xa00] */ r_ebx = (u32)(r_ebx+r_ebx*4+0xfffff600u);
    /* 005098ae: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005098b0: mov ecx, eax */ r_ecx = r_eax;
    /* 005098b2: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005098b4: sub ebx, dword ptr [ebp - 0x18] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 005098b7: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005098b9: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005098bb: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005098bd: add ebx, dword ptr [0xa72ccc] */ {  u32 a = r_ebx; u32 b = R32((u32)(0xa72cccu)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005098c3: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x5098c8u); f_008193cc();
    /* 005098c8: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 005098cb: mov dword ptr [esi], 0xaff308 */ W32((u32)(r_esi), 0xaff308u);
    /* 005098d1: mov edx, dword ptr [0x9ba90c] */ r_edx = R32((u32)(0x9ba90cu));
    /* 005098d7: mov dword ptr [esi + 0x44], 0x3f800000 */ W32((u32)(r_esi+0x44u), 0x3f800000u);
    /* 005098de: mov ecx, 0x3f800000 */ r_ecx = 0x3f800000u;
    /* 005098e3: mov dword ptr [esi + 4], edx */ W32((u32)(r_esi+0x4u), r_edx);
    /* 005098e6: mov dword ptr [esi + 0x48], 0x3f800000 */ W32((u32)(r_esi+0x48u), 0x3f800000u);
    /* 005098ed: mov edx, 0x3f800000 */ r_edx = 0x3f800000u;
    /* 005098f2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005098f4: mov dword ptr [esi + 0x1c], 0 */ W32((u32)(r_esi+0x1cu), 0x0u);
    /* 005098fb: mov dword ptr [esi + 0x50], eax */ W32((u32)(r_esi+0x50u), r_eax);
    /* 005098fe: mov dword ptr [esi + 0x54], eax */ W32((u32)(r_esi+0x54u), r_eax);
    /* 00509901: mov dword ptr [esi + 0x58], eax */ W32((u32)(r_esi+0x58u), r_eax);
    /* 00509904: mov dword ptr [esi + 0x24], 0x3f800000 */ W32((u32)(r_esi+0x24u), 0x3f800000u);
    /* 0050990b: mov dword ptr [esi + 0x4c], eax */ W32((u32)(r_esi+0x4cu), r_eax);
    /* 0050990e: mov dword ptr [esi + 0x20], eax */ W32((u32)(r_esi+0x20u), r_eax);
    /* 00509911: mov dword ptr [esi + 0x28], ebx */ W32((u32)(r_esi+0x28u), r_ebx);
    /* 00509914: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 00509917: mov edi, dword ptr [ebx] */ r_edi = R32((u32)(r_ebx));
    /* 00509919: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 0050991c: mov dword ptr [esi + 0x6c], edi */ W32((u32)(r_esi+0x6cu), r_edi);
    /* 0050991f: mov ebx, dword ptr [ebx + 4] */ r_ebx = R32((u32)(r_ebx+0x4u));
    /* 00509922: mov dword ptr [esi + 0x70], ebx */ W32((u32)(r_esi+0x70u), r_ebx);
    /* 00509925: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 00509928: mov ebx, dword ptr [ebx + 8] */ r_ebx = R32((u32)(r_ebx+0x8u));
    /* 0050992b: mov dword ptr [esi + 0x74], ebx */ W32((u32)(r_esi+0x74u), r_ebx);
    /* 0050992e: movzx ebx, word ptr [ebp + 0x10] */ r_ebx = (u32)R16((u32)(r_ebp+0x10u));
    /* 00509932: mov word ptr [esi + 0x2c], bx */ W16((u32)(r_esi+0x2cu), (u16)r_ebx);
    /* 00509936: mov word ptr [esi + 0x2e], ax */ W16((u32)(r_esi+0x2eu), (u16)r_eax);
    /* 0050993a: mov ebx, 0xffff */ r_ebx = 0xffffu;
    /* 0050993f: mov word ptr [esi + 0x30], bx */ W16((u32)(r_esi+0x30u), (u16)r_ebx);
    /* 00509943: mov dword ptr [esi + 0x78], eax */ W32((u32)(r_esi+0x78u), r_eax);
    /* 00509946: mov dword ptr [esi + 0x7c], eax */ W32((u32)(r_esi+0x7cu), r_eax);
    /* 00509949: mov dword ptr [esi + 0x80], eax */ W32((u32)(r_esi+0x80u), r_eax);
    /* 0050994f: mov dword ptr [esi + 0x34], eax */ W32((u32)(r_esi+0x34u), r_eax);
    /* 00509952: mov dword ptr [esi + 0x38], eax */ W32((u32)(r_esi+0x38u), r_eax);
    /* 00509955: mov dword ptr [esi + 0x3c], eax */ W32((u32)(r_esi+0x3cu), r_eax);
    /* 00509958: mov dword ptr [esi + 0x40], eax */ W32((u32)(r_esi+0x40u), r_eax);
    /* 0050995b: movzx eax, word ptr [ebp + 0x10] */ r_eax = (u32)R16((u32)(r_ebp+0x10u));
    /* 0050995f: test eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00509964: je 0x509989 */ if (fZ) goto L_00509989;
L_00509966:; BB(0x00509966);
    /* 00509966: movzx eax, word ptr [ebp + 0x10] */ r_eax = (u32)R16((u32)(r_ebp+0x10u));
    /* 0050996a: test eax, 0x4000 */ {  u32 a = r_eax; u32 b = 0x4000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0050996f: je 0x50997d */ if (fZ) goto L_0050997d;
L_00509971:; BB(0x00509971);
    /* 00509971: mov eax, dword ptr [0xaca328] */ r_eax = R32((u32)(0xaca328u));
    /* 00509976: mov ebx, esi */ r_ebx = r_esi;
    /* 00509978: mov dword ptr [ebx + 0x5c], eax */ W32((u32)(r_ebx+0x5cu), r_eax);
    /* 0050997b: jmp 0x509993 */ goto L_00509993;
L_0050997d:; BB(0x0050997d);
    /* 0050997d: mov eax, dword ptr [0xaca344] */ r_eax = R32((u32)(0xaca344u));
    /* 00509982: mov ebx, esi */ r_ebx = r_esi;
    /* 00509984: mov dword ptr [ebx + 0x5c], eax */ W32((u32)(r_ebx+0x5cu), r_eax);
    /* 00509987: jmp 0x509993 */ goto L_00509993;
L_00509989:; BB(0x00509989);
    /* 00509989: mov eax, dword ptr [0xaca344] */ r_eax = R32((u32)(0xaca344u));
    /* 0050998e: mov ebx, esi */ r_ebx = r_esi;
    /* 00509990: mov dword ptr [ebx + 0x5c], eax */ W32((u32)(r_ebx+0x5cu), r_eax);
L_00509993:; BB(0x00509993);
    /* 00509993: mov eax, ebx */ r_eax = r_ebx;
    /* 00509995: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 0050999c: mov dword ptr [eax + 0x64], edx */ W32((u32)(r_eax+0x64u), r_edx);
    /* 0050999f: mov dword ptr [eax + 0x68], ecx */ W32((u32)(r_eax+0x68u), r_ecx);
L_005099a2:; BB(0x005099a2);
    /* 005099a2: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 005099a5: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 005099a8: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005099ab: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005099ae: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005099b5: mov esp, ebp */ r_esp = r_ebp;
    /* 005099b7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005099b8: ret  */ FN_RET(0x0050981c); r_esp += 4; return;
L_005099b9:; BB(0x005099b9);
    /* 005099b9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005099bb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005099be: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005099c5: mov esp, ebp */ r_esp = r_ebp;
    /* 005099c7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005099c8: ret  */ FN_RET(0x0050981c); r_esp += 4; return;
L_005099c9:; BB(0x005099c9);
    /* 005099c9: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 005099d0: push 0xd0 */ { u32 v = 0xd0u; r_esp -= 4; W32(r_esp, v); }
    /* 005099d5: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5099dau); f_005caba4();
    /* 005099da: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005099dd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005099e0: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005099e3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005099e5: je 0x509b1a */ if (fZ) goto L_00509b1a;
L_005099eb:; BB(0x005099eb);
    /* 005099eb: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 005099f2: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005099f9: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 005099ff: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00509a02: lea ebx, [eax + eax*4] */ r_ebx = (u32)(r_eax+r_eax*4);
    /* 00509a05: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00509a07: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00509a0a: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00509a0c: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 00509a0e: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00509a10: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00509a12: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00509a14: add ebx, dword ptr [0xa72cd0] */ {  u32 a = r_ebx; u32 b = R32((u32)(0xa72cd0u)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00509a1a: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x509a1fu); f_008193cc();
    /* 00509a1f: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 00509a22: mov dword ptr [esi], 0xaff308 */ W32((u32)(r_esi), 0xaff308u);
    /* 00509a28: mov edx, dword ptr [0x9ba90c] */ r_edx = R32((u32)(0x9ba90cu));
    /* 00509a2e: mov dword ptr [esi + 0x44], 0x3f800000 */ W32((u32)(r_esi+0x44u), 0x3f800000u);
    /* 00509a35: mov ecx, 0x3f800000 */ r_ecx = 0x3f800000u;
    /* 00509a3a: mov dword ptr [esi + 4], edx */ W32((u32)(r_esi+0x4u), r_edx);
    /* 00509a3d: mov dword ptr [esi + 0x48], 0x3f800000 */ W32((u32)(r_esi+0x48u), 0x3f800000u);
    /* 00509a44: mov edx, 0x3f800000 */ r_edx = 0x3f800000u;
    /* 00509a49: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00509a4b: mov dword ptr [esi + 0x1c], 0 */ W32((u32)(r_esi+0x1cu), 0x0u);
    /* 00509a52: mov dword ptr [esi + 0x50], eax */ W32((u32)(r_esi+0x50u), r_eax);
    /* 00509a55: mov dword ptr [esi + 0x54], eax */ W32((u32)(r_esi+0x54u), r_eax);
    /* 00509a58: mov dword ptr [esi + 0x58], eax */ W32((u32)(r_esi+0x58u), r_eax);
    /* 00509a5b: mov dword ptr [esi + 0x24], 0x3f800000 */ W32((u32)(r_esi+0x24u), 0x3f800000u);
    /* 00509a62: mov dword ptr [esi + 0x4c], eax */ W32((u32)(r_esi+0x4cu), r_eax);
    /* 00509a65: mov dword ptr [esi + 0x20], eax */ W32((u32)(r_esi+0x20u), r_eax);
    /* 00509a68: mov dword ptr [esi + 0x28], ebx */ W32((u32)(r_esi+0x28u), r_ebx);
    /* 00509a6b: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 00509a6e: mov edi, dword ptr [ebx] */ r_edi = R32((u32)(r_ebx));
    /* 00509a70: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 00509a73: mov dword ptr [esi + 0x6c], edi */ W32((u32)(r_esi+0x6cu), r_edi);
    /* 00509a76: mov ebx, dword ptr [ebx + 4] */ r_ebx = R32((u32)(r_ebx+0x4u));
    /* 00509a79: mov dword ptr [esi + 0x70], ebx */ W32((u32)(r_esi+0x70u), r_ebx);
    /* 00509a7c: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 00509a7f: mov ebx, dword ptr [ebx + 8] */ r_ebx = R32((u32)(r_ebx+0x8u));
    /* 00509a82: mov dword ptr [esi + 0x74], ebx */ W32((u32)(r_esi+0x74u), r_ebx);
    /* 00509a85: movzx ebx, word ptr [ebp + 0x10] */ r_ebx = (u32)R16((u32)(r_ebp+0x10u));
    /* 00509a89: mov word ptr [esi + 0x2c], bx */ W16((u32)(r_esi+0x2cu), (u16)r_ebx);
    /* 00509a8d: mov word ptr [esi + 0x2e], ax */ W16((u32)(r_esi+0x2eu), (u16)r_eax);
    /* 00509a91: mov ebx, 0xffff */ r_ebx = 0xffffu;
    /* 00509a96: mov word ptr [esi + 0x30], bx */ W16((u32)(r_esi+0x30u), (u16)r_ebx);
    /* 00509a9a: mov dword ptr [esi + 0x78], eax */ W32((u32)(r_esi+0x78u), r_eax);
    /* 00509a9d: mov dword ptr [esi + 0x7c], eax */ W32((u32)(r_esi+0x7cu), r_eax);
    /* 00509aa0: mov dword ptr [esi + 0x80], eax */ W32((u32)(r_esi+0x80u), r_eax);
    /* 00509aa6: mov dword ptr [esi + 0x34], eax */ W32((u32)(r_esi+0x34u), r_eax);
    /* 00509aa9: mov dword ptr [esi + 0x38], eax */ W32((u32)(r_esi+0x38u), r_eax);
    /* 00509aac: mov dword ptr [esi + 0x3c], eax */ W32((u32)(r_esi+0x3cu), r_eax);
    /* 00509aaf: mov dword ptr [esi + 0x40], eax */ W32((u32)(r_esi+0x40u), r_eax);
    /* 00509ab2: movzx eax, word ptr [ebp + 0x10] */ r_eax = (u32)R16((u32)(r_ebp+0x10u));
    /* 00509ab6: test eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00509abb: je 0x509ae0 */ if (fZ) goto L_00509ae0;
L_00509abd:; BB(0x00509abd);
    /* 00509abd: movzx eax, word ptr [ebp + 0x10] */ r_eax = (u32)R16((u32)(r_ebp+0x10u));
    /* 00509ac1: test eax, 0x4000 */ {  u32 a = r_eax; u32 b = 0x4000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00509ac6: je 0x509ad4 */ if (fZ) goto L_00509ad4;
L_00509ac8:; BB(0x00509ac8);
    /* 00509ac8: mov eax, dword ptr [0xaca328] */ r_eax = R32((u32)(0xaca328u));
    /* 00509acd: mov ebx, esi */ r_ebx = r_esi;
    /* 00509acf: mov dword ptr [ebx + 0x5c], eax */ W32((u32)(r_ebx+0x5cu), r_eax);
    /* 00509ad2: jmp 0x509aea */ goto L_00509aea;
L_00509ad4:; BB(0x00509ad4);
    /* 00509ad4: mov eax, dword ptr [0xaca344] */ r_eax = R32((u32)(0xaca344u));
    /* 00509ad9: mov ebx, esi */ r_ebx = r_esi;
    /* 00509adb: mov dword ptr [ebx + 0x5c], eax */ W32((u32)(r_ebx+0x5cu), r_eax);
    /* 00509ade: jmp 0x509aea */ goto L_00509aea;
L_00509ae0:; BB(0x00509ae0);
    /* 00509ae0: mov eax, dword ptr [0xaca344] */ r_eax = R32((u32)(0xaca344u));
    /* 00509ae5: mov ebx, esi */ r_ebx = r_esi;
    /* 00509ae7: mov dword ptr [ebx + 0x5c], eax */ W32((u32)(r_ebx+0x5cu), r_eax);
L_00509aea:; BB(0x00509aea);
    /* 00509aea: mov eax, ebx */ r_eax = r_ebx;
    /* 00509aec: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 00509af3: mov dword ptr [eax + 0x64], edx */ W32((u32)(r_eax+0x64u), r_edx);
    /* 00509af6: mov dword ptr [eax + 0x68], ecx */ W32((u32)(r_eax+0x68u), r_ecx);
L_00509af9:; BB(0x00509af9);
    /* 00509af9: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00509afc: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00509aff: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00509b02: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00509b05: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00509b0c: mov esp, ebp */ r_esp = r_ebp;
    /* 00509b0e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00509b0f: ret  */ FN_RET(0x0050981c); r_esp += 4; return;
L_00509b10:; BB(0x00509b10);
    /* 00509b10: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00509b12: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00509b15: jmp 0x5099a2 */ goto L_005099a2;
L_00509b1a:; BB(0x00509b1a);
    /* 00509b1a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00509b1c: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00509b1f: jmp 0x509af9 */ goto L_00509af9;
}

void f_00509b24(void) /* sub_509B24 */
{
    FN_ENTER(0x00509b24);
    /* 00509b24: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00509b25: mov ebp, esp */ r_ebp = r_esp;
    /* 00509b27: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00509b29: push 0x8d3c42 */ { u32 v = 0x8d3c42u; r_esp -= 4; W32(r_esp, v); }
    /* 00509b2e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00509b34: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00509b35: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00509b3c: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00509b3f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00509b42: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 00509b45: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 00509b48: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 00509b4b: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00509b4e: mov edx, dword ptr [0x9bb1c8] */ r_edx = R32((u32)(0x9bb1c8u));
    /* 00509b54: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00509b56: jg 0x509c9e */ if ((!fZ&&fS==fO)) goto L_00509c9e;
L_00509b5c:; BB(0x00509b5c);
    /* 00509b5c: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00509b5f: add edx, 0x40 */ {  u32 a = r_edx; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00509b62: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00509b64: jle 0x509c8e */ if ((fZ||fS!=fO)) goto L_00509c8e;
L_00509b6a:; BB(0x00509b6a);
    /* 00509b6a: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00509b6d: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 00509b74: lea edx, [eax - 0x200] */ r_edx = (u32)(r_eax+0xfffffe00u);
    /* 00509b7a: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00509b7d: push 0xd0 */ { u32 v = 0xd0u; r_esp -= 4; W32(r_esp, v); }
    /* 00509b82: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x509b87u); f_005caba4();
    /* 00509b87: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00509b8a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00509b8d: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00509b90: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00509b92: je 0x509db2 */ if (fZ) goto L_00509db2;
L_00509b98:; BB(0x00509b98);
    /* 00509b98: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 00509b9f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00509ba6: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 00509bac: mov ebx, dword ptr [ebp + 0x10] */ r_ebx = R32((u32)(r_ebp+0x10u));
    /* 00509baf: lea ebx, [ebx + ebx*4 - 0xa00] */ r_ebx = (u32)(r_ebx+r_ebx*4+0xfffff600u);
    /* 00509bb6: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00509bb8: mov ecx, eax */ r_ecx = r_eax;
    /* 00509bba: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00509bbc: sub ebx, dword ptr [ebp - 0x18] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 00509bbf: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00509bc1: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00509bc3: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00509bc5: add ebx, dword ptr [0xa72ccc] */ {  u32 a = r_ebx; u32 b = R32((u32)(0xa72cccu)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00509bcb: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x509bd0u); f_008193cc();
    /* 00509bd0: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00509bd3: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 00509bd6: mov dword ptr [edx], 0xaff308 */ W32((u32)(r_edx), 0xaff308u);
    /* 00509bdc: mov ecx, dword ptr [0x9ba90c] */ r_ecx = R32((u32)(0x9ba90cu));
    /* 00509be2: mov dword ptr [edx + 0x44], 0x3f800000 */ W32((u32)(r_edx+0x44u), 0x3f800000u);
    /* 00509be9: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 00509bec: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00509bee: mov dword ptr [edx + 0x48], 0x3f800000 */ W32((u32)(r_edx+0x48u), 0x3f800000u);
    /* 00509bf5: mov dword ptr [edx + 0x50], eax */ W32((u32)(r_edx+0x50u), r_eax);
    /* 00509bf8: mov dword ptr [edx + 0x54], eax */ W32((u32)(r_edx+0x54u), r_eax);
    /* 00509bfb: mov dword ptr [edx + 0x58], eax */ W32((u32)(r_edx+0x58u), r_eax);
    /* 00509bfe: mov dword ptr [edx + 0x1c], 0 */ W32((u32)(r_edx+0x1cu), 0x0u);
    /* 00509c05: mov dword ptr [edx + 0x4c], eax */ W32((u32)(r_edx+0x4cu), r_eax);
    /* 00509c08: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 00509c0b: mov dword ptr [edx + 0x28], ebx */ W32((u32)(r_edx+0x28u), r_ebx);
    /* 00509c0e: mov dword ptr [edx + 0x24], 0x3f800000 */ W32((u32)(r_edx+0x24u), 0x3f800000u);
    /* 00509c15: mov ebx, dword ptr [edi] */ r_ebx = R32((u32)(r_edi));
    /* 00509c17: mov dword ptr [edx + 0x6c], ebx */ W32((u32)(r_edx+0x6cu), r_ebx);
    /* 00509c1a: mov esi, dword ptr [edi + 4] */ r_esi = R32((u32)(r_edi+0x4u));
    /* 00509c1d: mov ebx, dword ptr [ebp + 0xc] */ r_ebx = R32((u32)(r_ebp+0xcu));
    /* 00509c20: mov dword ptr [edx + 0x70], esi */ W32((u32)(r_edx+0x70u), r_esi);
    /* 00509c23: mov ecx, dword ptr [edi + 8] */ r_ecx = R32((u32)(r_edi+0x8u));
    /* 00509c26: mov dword ptr [edx + 0x74], ecx */ W32((u32)(r_edx+0x74u), r_ecx);
    /* 00509c29: mov word ptr [edx + 0x2c], ax */ W16((u32)(r_edx+0x2cu), (u16)r_eax);
    /* 00509c2d: mov word ptr [edx + 0x2e], ax */ W16((u32)(r_edx+0x2eu), (u16)r_eax);
    /* 00509c31: mov ecx, 0xffff */ r_ecx = 0xffffu;
    /* 00509c36: mov word ptr [edx + 0x30], cx */ W16((u32)(r_edx+0x30u), (u16)r_ecx);
    /* 00509c3a: mov ecx, dword ptr [ebx] */ r_ecx = R32((u32)(r_ebx));
    /* 00509c3c: mov dword ptr [edx + 0x78], ecx */ W32((u32)(r_edx+0x78u), r_ecx);
    /* 00509c3f: mov ecx, dword ptr [ebx + 8] */ r_ecx = R32((u32)(r_ebx+0x8u));
    /* 00509c42: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00509c45: mov dword ptr [edx + 0x80], ecx */ W32((u32)(r_edx+0x80u), r_ecx);
    /* 00509c4b: mov ecx, dword ptr [ebx + 4] */ r_ecx = R32((u32)(r_ebx+0x4u));
    /* 00509c4e: mov dword ptr [edx + 0x7c], ecx */ W32((u32)(r_edx+0x7cu), r_ecx);
    /* 00509c51: mov ecx, dword ptr [0xaca344] */ r_ecx = R32((u32)(0xaca344u));
    /* 00509c57: mov dword ptr [edx + 0x64], 0x3f800000 */ W32((u32)(r_edx+0x64u), 0x3f800000u);
    /* 00509c5e: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 00509c61: mov dword ptr [edx + 0x38], eax */ W32((u32)(r_edx+0x38u), r_eax);
    /* 00509c64: mov dword ptr [edx + 0x68], 0x3f800000 */ W32((u32)(r_edx+0x68u), 0x3f800000u);
    /* 00509c6b: mov dword ptr [edx + 0x3c], eax */ W32((u32)(r_edx+0x3cu), r_eax);
    /* 00509c6e: mov dword ptr [edx + 0x40], eax */ W32((u32)(r_edx+0x40u), r_eax);
    /* 00509c71: mov dword ptr [edx + 0x5c], ecx */ W32((u32)(r_edx+0x5cu), r_ecx);
L_00509c74:; BB(0x00509c74);
    /* 00509c74: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00509c77: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00509c7a: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00509c7d: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00509c80: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00509c83: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00509c8a: mov esp, ebp */ r_esp = r_ebp;
    /* 00509c8c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00509c8d: ret  */ FN_RET(0x00509b24); r_esp += 4; return;
L_00509c8e:; BB(0x00509c8e);
    /* 00509c8e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00509c90: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00509c93: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00509c9a: mov esp, ebp */ r_esp = r_ebp;
    /* 00509c9c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00509c9d: ret  */ FN_RET(0x00509b24); r_esp += 4; return;
L_00509c9e:; BB(0x00509c9e);
    /* 00509c9e: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 00509ca5: push 0xd0 */ { u32 v = 0xd0u; r_esp -= 4; W32(r_esp, v); }
    /* 00509caa: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x509cafu); f_005caba4();
    /* 00509caf: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00509cb2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00509cb5: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00509cb8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00509cba: je 0x509dbc */ if (fZ) goto L_00509dbc;
L_00509cc0:; BB(0x00509cc0);
    /* 00509cc0: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 00509cc7: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00509cce: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 00509cd4: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00509cd7: lea ebx, [eax + eax*4] */ r_ebx = (u32)(r_eax+r_eax*4);
    /* 00509cda: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00509cdc: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00509cdf: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00509ce1: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 00509ce3: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00509ce5: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00509ce7: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00509ce9: add ebx, dword ptr [0xa72cd0] */ {  u32 a = r_ebx; u32 b = R32((u32)(0xa72cd0u)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00509cef: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x509cf4u); f_008193cc();
    /* 00509cf4: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00509cf7: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 00509cfa: mov dword ptr [edx], 0xaff308 */ W32((u32)(r_edx), 0xaff308u);
    /* 00509d00: mov ecx, dword ptr [0x9ba90c] */ r_ecx = R32((u32)(0x9ba90cu));
    /* 00509d06: mov dword ptr [edx + 0x44], 0x3f800000 */ W32((u32)(r_edx+0x44u), 0x3f800000u);
    /* 00509d0d: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 00509d10: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00509d12: mov dword ptr [edx + 0x48], 0x3f800000 */ W32((u32)(r_edx+0x48u), 0x3f800000u);
    /* 00509d19: mov dword ptr [edx + 0x50], eax */ W32((u32)(r_edx+0x50u), r_eax);
    /* 00509d1c: mov dword ptr [edx + 0x54], eax */ W32((u32)(r_edx+0x54u), r_eax);
    /* 00509d1f: mov dword ptr [edx + 0x58], eax */ W32((u32)(r_edx+0x58u), r_eax);
    /* 00509d22: mov dword ptr [edx + 0x1c], 0 */ W32((u32)(r_edx+0x1cu), 0x0u);
    /* 00509d29: mov dword ptr [edx + 0x4c], eax */ W32((u32)(r_edx+0x4cu), r_eax);
    /* 00509d2c: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 00509d2f: mov dword ptr [edx + 0x28], ebx */ W32((u32)(r_edx+0x28u), r_ebx);
    /* 00509d32: mov dword ptr [edx + 0x24], 0x3f800000 */ W32((u32)(r_edx+0x24u), 0x3f800000u);
    /* 00509d39: mov ebx, dword ptr [edi] */ r_ebx = R32((u32)(r_edi));
    /* 00509d3b: mov dword ptr [edx + 0x6c], ebx */ W32((u32)(r_edx+0x6cu), r_ebx);
    /* 00509d3e: mov esi, dword ptr [edi + 4] */ r_esi = R32((u32)(r_edi+0x4u));
    /* 00509d41: mov ebx, dword ptr [ebp + 0xc] */ r_ebx = R32((u32)(r_ebp+0xcu));
    /* 00509d44: mov dword ptr [edx + 0x70], esi */ W32((u32)(r_edx+0x70u), r_esi);
    /* 00509d47: mov ecx, dword ptr [edi + 8] */ r_ecx = R32((u32)(r_edi+0x8u));
    /* 00509d4a: mov dword ptr [edx + 0x74], ecx */ W32((u32)(r_edx+0x74u), r_ecx);
    /* 00509d4d: mov word ptr [edx + 0x2c], ax */ W16((u32)(r_edx+0x2cu), (u16)r_eax);
    /* 00509d51: mov word ptr [edx + 0x2e], ax */ W16((u32)(r_edx+0x2eu), (u16)r_eax);
    /* 00509d55: mov ecx, 0xffff */ r_ecx = 0xffffu;
    /* 00509d5a: mov word ptr [edx + 0x30], cx */ W16((u32)(r_edx+0x30u), (u16)r_ecx);
    /* 00509d5e: mov ecx, dword ptr [ebx] */ r_ecx = R32((u32)(r_ebx));
    /* 00509d60: mov dword ptr [edx + 0x78], ecx */ W32((u32)(r_edx+0x78u), r_ecx);
    /* 00509d63: mov ecx, dword ptr [ebx + 8] */ r_ecx = R32((u32)(r_ebx+0x8u));
    /* 00509d66: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00509d69: mov dword ptr [edx + 0x80], ecx */ W32((u32)(r_edx+0x80u), r_ecx);
    /* 00509d6f: mov ecx, dword ptr [ebx + 4] */ r_ecx = R32((u32)(r_ebx+0x4u));
    /* 00509d72: mov dword ptr [edx + 0x7c], ecx */ W32((u32)(r_edx+0x7cu), r_ecx);
    /* 00509d75: mov ecx, dword ptr [0xaca344] */ r_ecx = R32((u32)(0xaca344u));
    /* 00509d7b: mov dword ptr [edx + 0x64], 0x3f800000 */ W32((u32)(r_edx+0x64u), 0x3f800000u);
    /* 00509d82: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 00509d85: mov dword ptr [edx + 0x38], eax */ W32((u32)(r_edx+0x38u), r_eax);
    /* 00509d88: mov dword ptr [edx + 0x68], 0x3f800000 */ W32((u32)(r_edx+0x68u), 0x3f800000u);
    /* 00509d8f: mov dword ptr [edx + 0x3c], eax */ W32((u32)(r_edx+0x3cu), r_eax);
    /* 00509d92: mov dword ptr [edx + 0x40], eax */ W32((u32)(r_edx+0x40u), r_eax);
    /* 00509d95: mov dword ptr [edx + 0x5c], ecx */ W32((u32)(r_edx+0x5cu), r_ecx);
L_00509d98:; BB(0x00509d98);
    /* 00509d98: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00509d9b: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00509d9e: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00509da1: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00509da4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00509da7: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00509dae: mov esp, ebp */ r_esp = r_ebp;
    /* 00509db0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00509db1: ret  */ FN_RET(0x00509b24); r_esp += 4; return;
L_00509db2:; BB(0x00509db2);
    /* 00509db2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00509db4: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00509db7: jmp 0x509c74 */ goto L_00509c74;
L_00509dbc:; BB(0x00509dbc);
    /* 00509dbc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00509dbe: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00509dc1: jmp 0x509d98 */ goto L_00509d98;
}

void f_00509dc4(void) /* sub_509DC4 */
{
    FN_ENTER(0x00509dc4);
    /* 00509dc4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00509dc5: mov ebp, esp */ r_ebp = r_esp;
    /* 00509dc7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00509dc9: push 0x8d3c82 */ { u32 v = 0x8d3c82u; r_esp -= 4; W32(r_esp, v); }
    /* 00509dce: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00509dd4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00509dd5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00509ddc: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00509ddf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00509de2: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 00509de5: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 00509de8: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 00509deb: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00509dee: mov edx, dword ptr [0x9bb1c8] */ r_edx = R32((u32)(0x9bb1c8u));
    /* 00509df4: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00509df6: jg 0x509f82 */ if ((!fZ&&fS==fO)) goto L_00509f82;
L_00509dfc:; BB(0x00509dfc);
    /* 00509dfc: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00509dff: add edx, 0x40 */ {  u32 a = r_edx; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00509e02: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00509e04: jle 0x509f72 */ if ((fZ||fS!=fO)) goto L_00509f72;
L_00509e0a:; BB(0x00509e0a);
    /* 00509e0a: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00509e0d: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 00509e14: lea edx, [eax - 0x200] */ r_edx = (u32)(r_eax+0xfffffe00u);
    /* 00509e1a: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00509e1d: push 0xd0 */ { u32 v = 0xd0u; r_esp -= 4; W32(r_esp, v); }
    /* 00509e22: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x509e27u); f_005caba4();
    /* 00509e27: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00509e2a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00509e2d: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00509e30: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00509e32: je 0x50a0da */ if (fZ) goto L_0050a0da;
L_00509e38:; BB(0x00509e38);
    /* 00509e38: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 00509e3f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00509e46: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 00509e4c: mov ebx, dword ptr [ebp + 0x10] */ r_ebx = R32((u32)(r_ebp+0x10u));
    /* 00509e4f: lea ebx, [ebx + ebx*4 - 0xa00] */ r_ebx = (u32)(r_ebx+r_ebx*4+0xfffff600u);
    /* 00509e56: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00509e58: mov ecx, eax */ r_ecx = r_eax;
    /* 00509e5a: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00509e5c: sub ebx, dword ptr [ebp - 0x18] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 00509e5f: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00509e61: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00509e63: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00509e65: add ebx, dword ptr [0xa72ccc] */ {  u32 a = r_ebx; u32 b = R32((u32)(0xa72cccu)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00509e6b: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x509e70u); f_008193cc();
    /* 00509e70: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 00509e73: mov dword ptr [esi], 0xaff308 */ W32((u32)(r_esi), 0xaff308u);
    /* 00509e79: mov edx, dword ptr [0x9ba90c] */ r_edx = R32((u32)(0x9ba90cu));
    /* 00509e7f: mov dword ptr [esi + 0x44], 0x3f800000 */ W32((u32)(r_esi+0x44u), 0x3f800000u);
    /* 00509e86: mov ecx, 0x3f800000 */ r_ecx = 0x3f800000u;
    /* 00509e8b: mov dword ptr [esi + 4], edx */ W32((u32)(r_esi+0x4u), r_edx);
    /* 00509e8e: mov dword ptr [esi + 0x48], 0x3f800000 */ W32((u32)(r_esi+0x48u), 0x3f800000u);
    /* 00509e95: mov edx, 0x3f800000 */ r_edx = 0x3f800000u;
    /* 00509e9a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00509e9c: mov dword ptr [esi + 0x1c], 0 */ W32((u32)(r_esi+0x1cu), 0x0u);
    /* 00509ea3: mov dword ptr [esi + 0x50], eax */ W32((u32)(r_esi+0x50u), r_eax);
    /* 00509ea6: mov dword ptr [esi + 0x54], eax */ W32((u32)(r_esi+0x54u), r_eax);
    /* 00509ea9: mov dword ptr [esi + 0x58], eax */ W32((u32)(r_esi+0x58u), r_eax);
    /* 00509eac: mov dword ptr [esi + 0x24], 0x3f800000 */ W32((u32)(r_esi+0x24u), 0x3f800000u);
    /* 00509eb3: mov dword ptr [esi + 0x4c], eax */ W32((u32)(r_esi+0x4cu), r_eax);
    /* 00509eb6: mov dword ptr [esi + 0x20], eax */ W32((u32)(r_esi+0x20u), r_eax);
    /* 00509eb9: mov dword ptr [esi + 0x28], ebx */ W32((u32)(r_esi+0x28u), r_ebx);
    /* 00509ebc: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 00509ebf: mov edi, dword ptr [ebx] */ r_edi = R32((u32)(r_ebx));
    /* 00509ec1: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 00509ec4: mov dword ptr [esi + 0x6c], edi */ W32((u32)(r_esi+0x6cu), r_edi);
    /* 00509ec7: mov ebx, dword ptr [ebx + 4] */ r_ebx = R32((u32)(r_ebx+0x4u));
    /* 00509eca: mov dword ptr [esi + 0x70], ebx */ W32((u32)(r_esi+0x70u), r_ebx);
    /* 00509ecd: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 00509ed0: mov ebx, dword ptr [ebx + 8] */ r_ebx = R32((u32)(r_ebx+0x8u));
    /* 00509ed3: mov dword ptr [esi + 0x74], ebx */ W32((u32)(r_esi+0x74u), r_ebx);
    /* 00509ed6: movzx ebx, word ptr [ebp + 0x14] */ r_ebx = (u32)R16((u32)(r_ebp+0x14u));
    /* 00509eda: mov word ptr [esi + 0x2c], bx */ W16((u32)(r_esi+0x2cu), (u16)r_ebx);
    /* 00509ede: mov word ptr [esi + 0x2e], ax */ W16((u32)(r_esi+0x2eu), (u16)r_eax);
    /* 00509ee2: mov ebx, 0xffff */ r_ebx = 0xffffu;
    /* 00509ee7: mov word ptr [esi + 0x30], bx */ W16((u32)(r_esi+0x30u), (u16)r_ebx);
    /* 00509eeb: mov ebx, dword ptr [ebp + 0xc] */ r_ebx = R32((u32)(r_ebp+0xcu));
    /* 00509eee: mov ebx, dword ptr [ebx] */ r_ebx = R32((u32)(r_ebx));
    /* 00509ef0: mov dword ptr [esi + 0x78], ebx */ W32((u32)(r_esi+0x78u), r_ebx);
    /* 00509ef3: mov ebx, dword ptr [ebp + 0xc] */ r_ebx = R32((u32)(r_ebp+0xcu));
    /* 00509ef6: mov ebx, dword ptr [ebx + 8] */ r_ebx = R32((u32)(r_ebx+0x8u));
    /* 00509ef9: mov dword ptr [esi + 0x80], ebx */ W32((u32)(r_esi+0x80u), r_ebx);
    /* 00509eff: mov ebx, dword ptr [ebp + 0xc] */ r_ebx = R32((u32)(r_ebp+0xcu));
    /* 00509f02: mov ebx, dword ptr [ebx + 4] */ r_ebx = R32((u32)(r_ebx+0x4u));
    /* 00509f05: mov dword ptr [esi + 0x7c], ebx */ W32((u32)(r_esi+0x7cu), r_ebx);
    /* 00509f08: mov dword ptr [esi + 0x34], eax */ W32((u32)(r_esi+0x34u), r_eax);
    /* 00509f0b: mov dword ptr [esi + 0x38], eax */ W32((u32)(r_esi+0x38u), r_eax);
    /* 00509f0e: mov dword ptr [esi + 0x3c], eax */ W32((u32)(r_esi+0x3cu), r_eax);
    /* 00509f11: mov dword ptr [esi + 0x40], eax */ W32((u32)(r_esi+0x40u), r_eax);
    /* 00509f14: movzx eax, word ptr [ebp + 0x14] */ r_eax = (u32)R16((u32)(r_ebp+0x14u));
    /* 00509f18: test eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00509f1d: je 0x509f42 */ if (fZ) goto L_00509f42;
L_00509f1f:; BB(0x00509f1f);
    /* 00509f1f: movzx eax, word ptr [ebp + 0x14] */ r_eax = (u32)R16((u32)(r_ebp+0x14u));
    /* 00509f23: test eax, 0x4000 */ {  u32 a = r_eax; u32 b = 0x4000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00509f28: je 0x509f36 */ if (fZ) goto L_00509f36;
L_00509f2a:; BB(0x00509f2a);
    /* 00509f2a: mov eax, dword ptr [0xaca328] */ r_eax = R32((u32)(0xaca328u));
    /* 00509f2f: mov ebx, esi */ r_ebx = r_esi;
    /* 00509f31: mov dword ptr [ebx + 0x5c], eax */ W32((u32)(r_ebx+0x5cu), r_eax);
    /* 00509f34: jmp 0x509f4c */ goto L_00509f4c;
L_00509f36:; BB(0x00509f36);
    /* 00509f36: mov eax, dword ptr [0xaca344] */ r_eax = R32((u32)(0xaca344u));
    /* 00509f3b: mov ebx, esi */ r_ebx = r_esi;
    /* 00509f3d: mov dword ptr [ebx + 0x5c], eax */ W32((u32)(r_ebx+0x5cu), r_eax);
    /* 00509f40: jmp 0x509f4c */ goto L_00509f4c;
L_00509f42:; BB(0x00509f42);
    /* 00509f42: mov eax, dword ptr [0xaca344] */ r_eax = R32((u32)(0xaca344u));
    /* 00509f47: mov ebx, esi */ r_ebx = r_esi;
    /* 00509f49: mov dword ptr [ebx + 0x5c], eax */ W32((u32)(r_ebx+0x5cu), r_eax);
L_00509f4c:; BB(0x00509f4c);
    /* 00509f4c: mov eax, ebx */ r_eax = r_ebx;
    /* 00509f4e: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 00509f55: mov dword ptr [eax + 0x64], edx */ W32((u32)(r_eax+0x64u), r_edx);
    /* 00509f58: mov dword ptr [eax + 0x68], ecx */ W32((u32)(r_eax+0x68u), r_ecx);
L_00509f5b:; BB(0x00509f5b);
    /* 00509f5b: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00509f5e: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00509f61: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00509f64: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00509f67: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00509f6e: mov esp, ebp */ r_esp = r_ebp;
    /* 00509f70: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00509f71: ret  */ FN_RET(0x00509dc4); r_esp += 4; return;
L_00509f72:; BB(0x00509f72);
    /* 00509f72: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00509f74: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00509f77: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00509f7e: mov esp, ebp */ r_esp = r_ebp;
    /* 00509f80: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00509f81: ret  */ FN_RET(0x00509dc4); r_esp += 4; return;
L_00509f82:; BB(0x00509f82);
    /* 00509f82: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 00509f89: push 0xd0 */ { u32 v = 0xd0u; r_esp -= 4; W32(r_esp, v); }
    /* 00509f8e: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x509f93u); f_005caba4();
    /* 00509f93: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00509f96: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00509f99: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00509f9c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00509f9e: je 0x50a0e4 */ if (fZ) goto L_0050a0e4;
L_00509fa4:; BB(0x00509fa4);
    /* 00509fa4: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 00509fab: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00509fb2: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 00509fb8: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00509fbb: lea ebx, [eax + eax*4] */ r_ebx = (u32)(r_eax+r_eax*4);
    /* 00509fbe: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00509fc0: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00509fc3: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00509fc5: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 00509fc7: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00509fc9: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00509fcb: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00509fcd: add ebx, dword ptr [0xa72cd0] */ {  u32 a = r_ebx; u32 b = R32((u32)(0xa72cd0u)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00509fd3: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x509fd8u); f_008193cc();
    /* 00509fd8: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 00509fdb: mov dword ptr [esi], 0xaff308 */ W32((u32)(r_esi), 0xaff308u);
    /* 00509fe1: mov edx, dword ptr [0x9ba90c] */ r_edx = R32((u32)(0x9ba90cu));
    /* 00509fe7: mov dword ptr [esi + 0x44], 0x3f800000 */ W32((u32)(r_esi+0x44u), 0x3f800000u);
    /* 00509fee: mov ecx, 0x3f800000 */ r_ecx = 0x3f800000u;
    /* 00509ff3: mov dword ptr [esi + 4], edx */ W32((u32)(r_esi+0x4u), r_edx);
    /* 00509ff6: mov dword ptr [esi + 0x48], 0x3f800000 */ W32((u32)(r_esi+0x48u), 0x3f800000u);
    /* 00509ffd: mov edx, 0x3f800000 */ r_edx = 0x3f800000u;
    /* 0050a002: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0050a004: mov dword ptr [esi + 0x1c], 0 */ W32((u32)(r_esi+0x1cu), 0x0u);
    /* 0050a00b: mov dword ptr [esi + 0x50], eax */ W32((u32)(r_esi+0x50u), r_eax);
    /* 0050a00e: mov dword ptr [esi + 0x54], eax */ W32((u32)(r_esi+0x54u), r_eax);
    /* 0050a011: mov dword ptr [esi + 0x58], eax */ W32((u32)(r_esi+0x58u), r_eax);
    /* 0050a014: mov dword ptr [esi + 0x24], 0x3f800000 */ W32((u32)(r_esi+0x24u), 0x3f800000u);
    /* 0050a01b: mov dword ptr [esi + 0x4c], eax */ W32((u32)(r_esi+0x4cu), r_eax);
    /* 0050a01e: mov dword ptr [esi + 0x20], eax */ W32((u32)(r_esi+0x20u), r_eax);
    /* 0050a021: mov dword ptr [esi + 0x28], ebx */ W32((u32)(r_esi+0x28u), r_ebx);
    /* 0050a024: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 0050a027: mov edi, dword ptr [ebx] */ r_edi = R32((u32)(r_ebx));
    /* 0050a029: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 0050a02c: mov dword ptr [esi + 0x6c], edi */ W32((u32)(r_esi+0x6cu), r_edi);
    /* 0050a02f: mov ebx, dword ptr [ebx + 4] */ r_ebx = R32((u32)(r_ebx+0x4u));
    /* 0050a032: mov dword ptr [esi + 0x70], ebx */ W32((u32)(r_esi+0x70u), r_ebx);
    /* 0050a035: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 0050a038: mov ebx, dword ptr [ebx + 8] */ r_ebx = R32((u32)(r_ebx+0x8u));
    /* 0050a03b: mov dword ptr [esi + 0x74], ebx */ W32((u32)(r_esi+0x74u), r_ebx);
    /* 0050a03e: movzx ebx, word ptr [ebp + 0x14] */ r_ebx = (u32)R16((u32)(r_ebp+0x14u));
    /* 0050a042: mov word ptr [esi + 0x2c], bx */ W16((u32)(r_esi+0x2cu), (u16)r_ebx);
    /* 0050a046: mov word ptr [esi + 0x2e], ax */ W16((u32)(r_esi+0x2eu), (u16)r_eax);
    /* 0050a04a: mov ebx, 0xffff */ r_ebx = 0xffffu;
    /* 0050a04f: mov word ptr [esi + 0x30], bx */ W16((u32)(r_esi+0x30u), (u16)r_ebx);
    /* 0050a053: mov ebx, dword ptr [ebp + 0xc] */ r_ebx = R32((u32)(r_ebp+0xcu));
    /* 0050a056: mov ebx, dword ptr [ebx] */ r_ebx = R32((u32)(r_ebx));
    /* 0050a058: mov dword ptr [esi + 0x78], ebx */ W32((u32)(r_esi+0x78u), r_ebx);
    /* 0050a05b: mov ebx, dword ptr [ebp + 0xc] */ r_ebx = R32((u32)(r_ebp+0xcu));
    /* 0050a05e: mov ebx, dword ptr [ebx + 8] */ r_ebx = R32((u32)(r_ebx+0x8u));
    /* 0050a061: mov dword ptr [esi + 0x80], ebx */ W32((u32)(r_esi+0x80u), r_ebx);
    /* 0050a067: mov ebx, dword ptr [ebp + 0xc] */ r_ebx = R32((u32)(r_ebp+0xcu));
    /* 0050a06a: mov ebx, dword ptr [ebx + 4] */ r_ebx = R32((u32)(r_ebx+0x4u));
    /* 0050a06d: mov dword ptr [esi + 0x7c], ebx */ W32((u32)(r_esi+0x7cu), r_ebx);
    /* 0050a070: mov dword ptr [esi + 0x34], eax */ W32((u32)(r_esi+0x34u), r_eax);
    /* 0050a073: mov dword ptr [esi + 0x38], eax */ W32((u32)(r_esi+0x38u), r_eax);
    /* 0050a076: mov dword ptr [esi + 0x3c], eax */ W32((u32)(r_esi+0x3cu), r_eax);
    /* 0050a079: mov dword ptr [esi + 0x40], eax */ W32((u32)(r_esi+0x40u), r_eax);
    /* 0050a07c: movzx eax, word ptr [ebp + 0x14] */ r_eax = (u32)R16((u32)(r_ebp+0x14u));
    /* 0050a080: test eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0050a085: je 0x50a0aa */ if (fZ) goto L_0050a0aa;
L_0050a087:; BB(0x0050a087);
    /* 0050a087: movzx eax, word ptr [ebp + 0x14] */ r_eax = (u32)R16((u32)(r_ebp+0x14u));
    /* 0050a08b: test eax, 0x4000 */ {  u32 a = r_eax; u32 b = 0x4000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0050a090: je 0x50a09e */ if (fZ) goto L_0050a09e;
L_0050a092:; BB(0x0050a092);
    /* 0050a092: mov eax, dword ptr [0xaca328] */ r_eax = R32((u32)(0xaca328u));
    /* 0050a097: mov ebx, esi */ r_ebx = r_esi;
    /* 0050a099: mov dword ptr [ebx + 0x5c], eax */ W32((u32)(r_ebx+0x5cu), r_eax);
    /* 0050a09c: jmp 0x50a0b4 */ goto L_0050a0b4;
L_0050a09e:; BB(0x0050a09e);
    /* 0050a09e: mov eax, dword ptr [0xaca344] */ r_eax = R32((u32)(0xaca344u));
    /* 0050a0a3: mov ebx, esi */ r_ebx = r_esi;
    /* 0050a0a5: mov dword ptr [ebx + 0x5c], eax */ W32((u32)(r_ebx+0x5cu), r_eax);
    /* 0050a0a8: jmp 0x50a0b4 */ goto L_0050a0b4;
L_0050a0aa:; BB(0x0050a0aa);
    /* 0050a0aa: mov eax, dword ptr [0xaca344] */ r_eax = R32((u32)(0xaca344u));
    /* 0050a0af: mov ebx, esi */ r_ebx = r_esi;
    /* 0050a0b1: mov dword ptr [ebx + 0x5c], eax */ W32((u32)(r_ebx+0x5cu), r_eax);
L_0050a0b4:; BB(0x0050a0b4);
    /* 0050a0b4: mov eax, ebx */ r_eax = r_ebx;
    /* 0050a0b6: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 0050a0bd: mov dword ptr [eax + 0x64], edx */ W32((u32)(r_eax+0x64u), r_edx);
    /* 0050a0c0: mov dword ptr [eax + 0x68], ecx */ W32((u32)(r_eax+0x68u), r_ecx);
L_0050a0c3:; BB(0x0050a0c3);
    /* 0050a0c3: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0050a0c6: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0050a0c9: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0050a0cc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0050a0cf: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0050a0d6: mov esp, ebp */ r_esp = r_ebp;
    /* 0050a0d8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050a0d9: ret  */ FN_RET(0x00509dc4); r_esp += 4; return;
L_0050a0da:; BB(0x0050a0da);
    /* 0050a0da: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0050a0dc: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0050a0df: jmp 0x509f5b */ goto L_00509f5b;
L_0050a0e4:; BB(0x0050a0e4);
    /* 0050a0e4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0050a0e6: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0050a0e9: jmp 0x50a0c3 */ goto L_0050a0c3;
}

