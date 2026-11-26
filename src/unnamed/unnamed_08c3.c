#include "protos.h"

void f_008c35b0(void) /* sub_8C35B0 */
{
    FN_ENTER(0x008c35b0);
    /* 008c35b0: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 008c35b2: push 0x8cb9eb */ { u32 v = 0x8cb9ebu; r_esp -= 4; W32(r_esp, v); }
    /* 008c35b7: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 008c35bd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c35be: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 008c35c5: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008c35c8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c35c9: mov esi, ecx */ r_esi = r_ecx;
    /* 008c35cb: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 008c35cf: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008c35d1: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 008c35d9: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c35dc: je 0x8c36ff */ if (fZ) goto L_008c36ff;
L_008c35e2:; BB(0x008c35e2);
    /* 008c35e2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c35e3: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c35e4: lea edi, [esi + 0x101c] */ r_edi = (u32)(r_esi+0x101cu);
    /* 008c35ea: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c35eb: call dword ptr [0x8f8188] */ { u32 t = R32((u32)(0x8f8188u)); r_esp -= 4; W32(r_esp, 0x8c35f1u); call_ind(t); }
    /* 008c35f1: mov eax, dword ptr [esi + 0x143c] */ r_eax = R32((u32)(r_esi+0x143cu));
    /* 008c35f7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c35f9: je 0x8c360a */ if (fZ) goto L_008c360a;
L_008c35fb:; BB(0x008c35fb);
    /* 008c35fb: mov ecx, dword ptr [esi + 0x1440] */ r_ecx = R32((u32)(r_esi+0x1440u));
    /* 008c3601: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008c3603: mov eax, 0xa37ba0 */ r_eax = 0xa37ba0u;
    /* 008c3608: ja 0x8c360f */ if ((!fC&&!fZ)) goto L_008c360f;
L_008c360a:; BB(0x008c360a);
    /* 008c360a: mov eax, 0x8f8814 */ r_eax = 0x8f8814u;
L_008c360f:; BB(0x008c360f);
    /* 008c360f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c3610: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008c3612: mov ax, word ptr [esi + 0x102a] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_esi+0x102au))) & 0xffffu);
    /* 008c3619: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008c361b: mov cx, word ptr [esi + 0x1028] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_esi+0x1028u))) & 0xffffu);
    /* 008c3622: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c3623: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008c3625: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008c3627: mov dx, word ptr [esi + 0x1026] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_esi+0x1026u))) & 0xffffu);
    /* 008c362e: mov ax, word ptr [esi + 0x1024] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_esi+0x1024u))) & 0xffffu);
    /* 008c3635: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c3636: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c3637: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008c3639: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c363a: mov cx, word ptr [esi + 0x1022] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_esi+0x1022u))) & 0xffffu);
    /* 008c3641: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008c3643: mov dx, word ptr [esi + 0x101e] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_esi+0x101eu))) & 0xffffu);
    /* 008c364a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008c364c: mov ax, word ptr [edi] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edi))) & 0xffffu);
    /* 008c364f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c3650: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c3651: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c3652: push 0xa37b48 */ { u32 v = 0xa37b48u; r_esp -= 4; W32(r_esp, v); }
    /* 008c3657: lea ebx, [esi + 0x1c] */ r_ebx = (u32)(r_esi+0x1cu);
    /* 008c365a: call 0x8c9470 */ r_esp -= 4; W32(r_esp, 0x8c365fu); f_008c9470();
    /* 008c365f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c3662: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c3663: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c3664: call 0x858bf5 */ r_esp -= 4; W32(r_esp, 0x8c3669u); f_00858bf5();
    /* 008c3669: mov edi, ebx */ r_edi = r_ebx;
    /* 008c366b: or ecx, 0xffffffff */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 008c366e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008c3670: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c3673: repne scasb al, byte ptr es:[edi] */ while (r_ecx) { { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (fZ) break; }
    /* 008c3675: mov eax, dword ptr [esi + 0x1438] */ r_eax = R32((u32)(r_esi+0x1438u));
    /* 008c367b: not ecx */ r_ecx = ~r_ecx;
    /* 008c367d: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008c367e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c3680: mov edi, ecx */ r_edi = r_ecx;
    /* 008c3682: je 0x8c36b5 */ if (fZ) goto L_008c36b5;
L_008c3684:; BB(0x008c3684);
    /* 008c3684: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 008c3686: jle 0x8c36c7 */ if ((fZ||fS!=fO)) goto L_008c36c7;
L_008c3688:; BB(0x008c3688);
    /* 008c3688: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008c3689: mov ebp, 0xffffffe4 */ r_ebp = 0xffffffe4u;
    /* 008c368e: mov eax, ebx */ r_eax = r_ebx;
    /* 008c3690: sub ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 008c3692: mov ecx, 2 */ r_ecx = 0x2u;
L_008c3697:; BB(0x008c3697);
    /* 008c3697: mov edx, dword ptr [esi + 0x1438] */ r_edx = R32((u32)(r_esi+0x1438u));
    /* 008c369d: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008c369f: mov dword ptr [esi + 0x1438], edx */ W32((u32)(r_esi+0x1438u), r_edx);
    /* 008c36a5: add dl, 0x43 */ {  u32 a = (u8)r_edx; u32 b = 0x43u; u32 r = (a + b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c36a8: xor byte ptr [eax], dl */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_edx; u32 r = (a ^ b) & 0xffu; W8(ad, r);  }
    /* 008c36aa: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008c36ab: lea edx, [eax + ebp] */ r_edx = (u32)(r_eax+r_ebp);
    /* 008c36ae: cmp edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008c36b0: jl 0x8c3697 */ if ((fS!=fO)) goto L_008c3697;
L_008c36b2:; BB(0x008c36b2);
    /* 008c36b2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008c36b3: jmp 0x8c36c7 */ goto L_008c36c7;
L_008c36b5:; BB(0x008c36b5);
    /* 008c36b5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c36b6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c36b7: lea eax, [esi + 0x1030] */ r_eax = (u32)(r_esi+0x1030u);
    /* 008c36bd: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c36be: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c36bf: call 0x8c8e20 */ r_esp -= 4; W32(r_esp, 0x8c36c4u); f_008c8e20();
    /* 008c36c4: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_008c36c7:; BB(0x008c36c7);
    /* 008c36c7: cmp dword ptr [esi + 0x143c], 0x3e7 */ {  u32 a = R32((u32)(r_esi+0x143cu)); u32 b = 0x3e7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c36d1: je 0x8c36e5 */ if (fZ) goto L_008c36e5;
L_008c36d3:; BB(0x008c36d3);
    /* 008c36d3: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 008c36d5: lea ecx, [esp + 0x10] */ r_ecx = (u32)(r_esp+0x10u);
    /* 008c36d9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c36db: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c36dc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c36dd: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c36de: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c36df: call dword ptr [0x8f81c0] */ { u32 t = R32((u32)(0x8f81c0u)); r_esp -= 4; W32(r_esp, 0x8c36e5u); call_ind(t); }
L_008c36e5:; BB(0x008c36e5);
    /* 008c36e5: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008c36e7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c36e8: call dword ptr [0x8f82d4] */ { u32 t = R32((u32)(0x8f82d4u)); r_esp -= 4; W32(r_esp, 0x8c36eeu); call_ind(t); }
    /* 008c36ee: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 008c36f0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c36f1: call dword ptr [0x8f8140] */ { u32 t = R32((u32)(0x8f8140u)); r_esp -= 4; W32(r_esp, 0x8c36f7u); call_ind(t); }
    /* 008c36f7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c36f8: mov dword ptr [esi], 0xffffffff */ W32((u32)(r_esi), 0xffffffffu);
    /* 008c36fe: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
L_008c36ff:; BB(0x008c36ff);
    /* 008c36ff: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008c3702: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c3703: call dword ptr [0x8f81b0] */ { u32 t = R32((u32)(0x8f81b0u)); r_esp -= 4; W32(r_esp, 0x8c3709u); call_ind(t); }
    /* 008c3709: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 008c370d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c370e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 008c3715: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c3718: ret  */ FN_RET(0x008c35b0); r_esp += 4; return;
}

void f_008c3720(void) /* sub_8C3720 */
{
    FN_ENTER(0x008c3720);
    /* 008c3720: mov eax, 0x1008 */ r_eax = 0x1008u;
    /* 008c3725: call 0x858020 */ r_esp -= 4; W32(r_esp, 0x8c372au); f_00858020();
    /* 008c372a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008c372b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c372c: mov esi, dword ptr [esp + 0x1014] */ r_esi = R32((u32)(r_esp+0x1014u));
    /* 008c3733: cmp dword ptr [esi], -1 */ {  u32 a = R32((u32)(r_esi)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c3736: je 0x8c388f */ if (fZ) goto L_008c388f;
L_008c373c:; BB(0x008c373c);
    /* 008c373c: mov eax, dword ptr [esi + 0x143c] */ r_eax = R32((u32)(r_esi+0x143cu));
    /* 008c3742: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c3744: je 0x8c3767 */ if (fZ) goto L_008c3767;
L_008c3746:; BB(0x008c3746);
    /* 008c3746: mov ecx, dword ptr [esp + 0x1018] */ r_ecx = R32((u32)(r_esp+0x1018u));
    /* 008c374d: cmp byte ptr [ecx], 0x21 */ {  u32 a = R8((u32)(r_ecx)); u32 b = 0x21u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008c3750: je 0x8c3767 */ if (fZ) goto L_008c3767;
L_008c3752:; BB(0x008c3752);
    /* 008c3752: mov ecx, dword ptr [esi + 0x1440] */ r_ecx = R32((u32)(r_esi+0x1440u));
    /* 008c3758: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008c375a: ja 0x8c388f */ if ((!fC&&!fZ)) goto L_008c388f;
L_008c3760:; BB(0x008c3760);
    /* 008c3760: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008c3761: mov dword ptr [esi + 0x1440], ecx */ W32((u32)(r_esi+0x1440u), r_ecx);
L_008c3767:; BB(0x008c3767);
    /* 008c3767: lea ebp, [esi + 4] */ r_ebp = (u32)(r_esi+0x4u);
    /* 008c376a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008c376b: mov dword ptr [esp + 0xc], ebp */ W32((u32)(r_esp+0xcu), r_ebp);
    /* 008c376f: call dword ptr [0x8f81b4] */ { u32 t = R32((u32)(0x8f81b4u)); r_esp -= 4; W32(r_esp, 0x8c3775u); call_ind(t); }
    /* 008c3775: mov eax, dword ptr [esp + 0x1018] */ r_eax = R32((u32)(r_esp+0x1018u));
    /* 008c377c: lea edx, [esp + 0x101c] */ r_edx = (u32)(r_esp+0x101cu);
    /* 008c3783: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c3784: lea ecx, [esp + 0x14] */ r_ecx = (u32)(r_esp+0x14u);
    /* 008c3788: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c3789: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c378a: call 0x85a581 */ r_esp -= 4; W32(r_esp, 0x8c378fu); f_0085a581();
    /* 008c378f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c3792: lea edx, [esi + 0x101c] */ r_edx = (u32)(r_esi+0x101cu);
    /* 008c3798: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c3799: call dword ptr [0x8f8188] */ { u32 t = R32((u32)(0x8f8188u)); r_esp -= 4; W32(r_esp, 0x8c379fu); call_ind(t); }
    /* 008c379f: mov eax, 0x858bf5 */ r_eax = 0x858bf5u;
    /* 008c37a4: cmp byte ptr [eax], 0xcc */ {  u32 a = R8((u32)(r_eax)); u32 b = 0xccu; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008c37a7: je 0x8c3888 */ if (fZ) goto L_008c3888;
L_008c37ad:; BB(0x008c37ad);
    /* 008c37ad: mov ecx, dword ptr [0x8f81c0] */ r_ecx = R32((u32)(0x8f81c0u));
    /* 008c37b3: cmp byte ptr [ecx], 0xcc */ {  u32 a = R8((u32)(r_ecx)); u32 b = 0xccu; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008c37b6: je 0x8c3888 */ if (fZ) goto L_008c3888;
L_008c37bc:; BB(0x008c37bc);
    /* 008c37bc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008c37be: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c37bf: mov ax, word ptr [esi + 0x102a] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_esi+0x102au))) & 0xffffu);
    /* 008c37c6: lea edx, [esp + 0x14] */ r_edx = (u32)(r_esp+0x14u);
    /* 008c37ca: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c37cb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c37cc: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008c37ce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c37cf: mov cx, word ptr [esi + 0x1028] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_esi+0x1028u))) & 0xffffu);
    /* 008c37d6: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008c37d8: mov dx, word ptr [esi + 0x1026] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_esi+0x1026u))) & 0xffffu);
    /* 008c37df: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008c37e1: mov ax, word ptr [esi + 0x1024] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_esi+0x1024u))) & 0xffffu);
    /* 008c37e8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c37e9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c37ea: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c37eb: push 0xa38518 */ { u32 v = 0xa38518u; r_esp -= 4; W32(r_esp, v); }
    /* 008c37f0: lea ebx, [esi + 0x1c] */ r_ebx = (u32)(r_esi+0x1cu);
    /* 008c37f3: call 0x8c9470 */ r_esp -= 4; W32(r_esp, 0x8c37f8u); f_008c9470();
    /* 008c37f8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c37fb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c37fc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c37fd: call 0x858bf5 */ r_esp -= 4; W32(r_esp, 0x8c3802u); f_00858bf5();
    /* 008c3802: mov edi, ebx */ r_edi = r_ebx;
    /* 008c3804: or ecx, 0xffffffff */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 008c3807: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008c3809: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c380c: repne scasb al, byte ptr es:[edi] */ while (r_ecx) { { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (fZ) break; }
    /* 008c380e: mov eax, dword ptr [esi + 0x1438] */ r_eax = R32((u32)(r_esi+0x1438u));
    /* 008c3814: not ecx */ r_ecx = ~r_ecx;
    /* 008c3816: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008c3817: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c3819: mov edi, ecx */ r_edi = r_ecx;
    /* 008c381b: je 0x8c3850 */ if (fZ) goto L_008c3850;
L_008c381d:; BB(0x008c381d);
    /* 008c381d: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 008c381f: jle 0x8c3862 */ if ((fZ||fS!=fO)) goto L_008c3862;
L_008c3821:; BB(0x008c3821);
    /* 008c3821: mov ebp, 0xffffffe4 */ r_ebp = 0xffffffe4u;
    /* 008c3826: mov eax, ebx */ r_eax = r_ebx;
    /* 008c3828: sub ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 008c382a: mov ecx, 2 */ r_ecx = 0x2u;
L_008c382f:; BB(0x008c382f);
    /* 008c382f: mov edx, dword ptr [esi + 0x1438] */ r_edx = R32((u32)(r_esi+0x1438u));
    /* 008c3835: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008c3837: mov dword ptr [esi + 0x1438], edx */ W32((u32)(r_esi+0x1438u), r_edx);
    /* 008c383d: add dl, 0x43 */ {  u32 a = (u8)r_edx; u32 b = 0x43u; u32 r = (a + b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c3840: xor byte ptr [eax], dl */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_edx; u32 r = (a ^ b) & 0xffu; W8(ad, r);  }
    /* 008c3842: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008c3843: lea edx, [eax + ebp] */ r_edx = (u32)(r_eax+r_ebp);
    /* 008c3846: cmp edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008c3848: jl 0x8c382f */ if ((fS!=fO)) goto L_008c382f;
L_008c384a:; BB(0x008c384a);
    /* 008c384a: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 008c384e: jmp 0x8c3862 */ goto L_008c3862;
L_008c3850:; BB(0x008c3850);
    /* 008c3850: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c3851: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c3852: lea eax, [esi + 0x1030] */ r_eax = (u32)(r_esi+0x1030u);
    /* 008c3858: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c3859: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c385a: call 0x8c8e20 */ r_esp -= 4; W32(r_esp, 0x8c385fu); f_008c8e20();
    /* 008c385f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_008c3862:; BB(0x008c3862);
    /* 008c3862: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 008c3864: lea ecx, [esp + 0x14] */ r_ecx = (u32)(r_esp+0x14u);
    /* 008c3868: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c386a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c386b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c386c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c386d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c386e: call dword ptr [0x8f81c0] */ { u32 t = R32((u32)(0x8f81c0u)); r_esp -= 4; W32(r_esp, 0x8c3874u); call_ind(t); }
    /* 008c3874: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008c3875: call dword ptr [0x8f81b8] */ { u32 t = R32((u32)(0x8f81b8u)); r_esp -= 4; W32(r_esp, 0x8c387bu); call_ind(t); }
    /* 008c387b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c387c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008c387d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c387e: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 008c3880: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008c3881: add esp, 0x1008 */ {  u32 a = r_esp; u32 b = 0x1008u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c3887: ret  */ FN_RET(0x008c3720); r_esp += 4; return;
L_008c3888:; BB(0x008c3888);
    /* 008c3888: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008c3889: call dword ptr [0x8f81b8] */ { u32 t = R32((u32)(0x8f81b8u)); r_esp -= 4; W32(r_esp, 0x8c388fu); call_ind(t); }
L_008c388f:; BB(0x008c388f);
    /* 008c388f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c3890: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c3892: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008c3893: add esp, 0x1008 */ {  u32 a = r_esp; u32 b = 0x1008u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c3899: ret  */ FN_RET(0x008c3720); r_esp += 4; return;
}

void f_008c38a0(void) /* sub_8C38A0 */
{
    FN_ENTER(0x008c38a0);
    /* 008c38a0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c38a1: mov esi, ecx */ r_esi = r_ecx;
    /* 008c38a3: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c38a4: push 0xa38594 */ { u32 v = 0xa38594u; r_esp -= 4; W32(r_esp, v); }
    /* 008c38a9: lea edi, [esi + 0x24] */ r_edi = (u32)(r_esi+0x24u);
    /* 008c38ac: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c38b1u); f_008c94e0();
    /* 008c38b1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c38b4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c38b5: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c38b6: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c38bbu); f_008c3720();
    /* 008c38bb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c38be: call 0x8c5000 */ r_esp -= 4; W32(r_esp, 0x8c38c3u); f_008c5000();
    /* 008c38c3: call 0x8c50e0 */ r_esp -= 4; W32(r_esp, 0x8c38c8u); f_008c50e0();
    /* 008c38c8: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 008c38cc: lea ecx, [esi + 0x1468] */ r_ecx = (u32)(r_esi+0x1468u);
    /* 008c38d2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c38d3: push 0x612 */ { u32 v = 0x612u; r_esp -= 4; W32(r_esp, v); }
    /* 008c38d8: push 0x8b1 */ { u32 v = 0x8b1u; r_esp -= 4; W32(r_esp, v); }
    /* 008c38dd: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
    /* 008c38e0: call 0x8c8550 */ r_esp -= 4; W32(r_esp, 0x8c38e5u); f_008c8550();
    /* 008c38e5: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 008c38e8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c38ea: je 0x8c3930 */ if (fZ) goto L_008c3930;
L_008c38ec:; BB(0x008c38ec);
    /* 008c38ec: mov ecx, dword ptr [esi + 0xc] */ r_ecx = R32((u32)(r_esi+0xcu));
    /* 008c38ef: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c38f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c38f1: push 0xa38574 */ { u32 v = 0xa38574u; r_esp -= 4; W32(r_esp, v); }
    /* 008c38f6: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c38fbu); f_008c94e0();
    /* 008c38fb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c38fe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c38ff: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c3900: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c3905u); f_008c3720();
    /* 008c3905: mov edx, dword ptr [esi + 0xc] */ r_edx = R32((u32)(r_esi+0xcu));
    /* 008c3908: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 008c390b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c390e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c390f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c3910: call 0x82d238 */ r_esp -= 4; W32(r_esp, 0x8c3915u); f_0082d238();
    /* 008c3915: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c3917: jne 0x8c3930 */ if (!fZ) goto L_008c3930;
L_008c3919:; BB(0x008c3919);
    /* 008c3919: push 0xa38558 */ { u32 v = 0xa38558u; r_esp -= 4; W32(r_esp, v); }
    /* 008c391e: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c3923u); f_008c94e0();
    /* 008c3923: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c3926: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c3927: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c3928: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c392du); f_008c3720();
    /* 008c392d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_008c3930:; BB(0x008c3930);
    /* 008c3930: push 0xa38538 */ { u32 v = 0xa38538u; r_esp -= 4; W32(r_esp, v); }
    /* 008c3935: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c393au); f_008c94e0();
    /* 008c393a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c393d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c393e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c393f: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c3944u); f_008c3720();
    /* 008c3944: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c3947: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c3948: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c3949: ret 4 */ FN_RET(0x008c38a0); r_esp += 8; return;
}

void f_008c3950(void) /* sub_8C3950 */
{
    FN_ENTER(0x008c3950);
    /* 008c3950: sub esp, 0x94 */ {  u32 a = r_esp; u32 b = 0x94u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008c3956: push 0xa37bb4 */ { u32 v = 0xa37bb4u; r_esp -= 4; W32(r_esp, v); }
    /* 008c395b: push 0xa37ba4 */ { u32 v = 0xa37ba4u; r_esp -= 4; W32(r_esp, v); }
    /* 008c3960: mov dword ptr [esp + 8], 0x94 */ W32((u32)(r_esp+0x8u), 0x94u);
    /* 008c3968: call dword ptr [0x8f81f0] */ { u32 t = R32((u32)(0x8f81f0u)); r_esp -= 4; W32(r_esp, 0x8c396eu); call_ind(t); }
    /* 008c396e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c396f: call 0x8c5c80 */ r_esp -= 4; W32(r_esp, 0x8c3974u); f_008c5c80();
    /* 008c3974: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c3976: jne 0x8c397d */ if (!fZ) goto L_008c397d;
L_008c3978:; BB(0x008c3978);
    /* 008c3978: mov eax, dword ptr [0x8f820c] */ r_eax = R32((u32)(0x8f820cu));
L_008c397d:; BB(0x008c397d);
    /* 008c397d: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 008c3981: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c3982: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x8c3984u); call_ind(t); }
    /* 008c3984: cmp dword ptr [esp + 0x10], 2 */ {  u32 a = R32((u32)(r_esp+0x10u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c3989: jne 0x8c39b9 */ if (!fZ) goto L_008c39b9;
L_008c398b:; BB(0x008c398b);
    /* 008c398b: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 008c398f: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 008c3991: cmp ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c3994: jne 0x8c39bb */ if (!fZ) goto L_008c39bb;
L_008c3996:; BB(0x008c3996);
    /* 008c3996: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 008c399a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c399c: jne 0x8c39bb */ if (!fZ) goto L_008c39bb;
L_008c399e:; BB(0x008c399e);
    /* 008c399e: mov edx, dword ptr [0xa37b2c] */ r_edx = R32((u32)(0xa37b2cu));
    /* 008c39a4: mov byte ptr [0xaea816], al */ W8((u32)(0xaea816u), (u8)r_eax);
    /* 008c39a9: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 008c39ac: mov dword ptr [0xa37b2c], ecx */ W32((u32)(0xa37b2cu), r_ecx);
    /* 008c39b2: add esp, 0x94 */ {  u32 a = r_esp; u32 b = 0x94u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c39b8: ret  */ FN_RET(0x008c3950); r_esp += 4; return;
L_008c39b9:; BB(0x008c39b9);
    /* 008c39b9: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_008c39bb:; BB(0x008c39bb);
    /* 008c39bb: add esp, 0x94 */ {  u32 a = r_esp; u32 b = 0x94u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c39c1: ret  */ FN_RET(0x008c3950); r_esp += 4; return;
}

void f_008c39d0(void) /* sub_8C39D0 */
{
    FN_ENTER(0x008c39d0);
    /* 008c39d0: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 008c39d4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c39d5: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 008c39d9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c39da: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c39db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c39dc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c39dd: call 0x8c3a20 */ r_esp -= 4; W32(r_esp, 0x8c39e2u); f_008c3a20();
    /* 008c39e2: push 0xa385ac */ { u32 v = 0xa385acu; r_esp -= 4; W32(r_esp, v); }
    /* 008c39e7: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c39ecu); f_008c94e0();
    /* 008c39ec: mov edi, eax */ r_edi = r_eax;
    /* 008c39ee: or ecx, 0xffffffff */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 008c39f1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008c39f3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c39f6: repne scasb al, byte ptr es:[edi] */ while (r_ecx) { { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (fZ) break; }
    /* 008c39f8: not ecx */ r_ecx = ~r_ecx;
    /* 008c39fa: sub edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008c39fc: mov esi, edi */ r_esi = r_edi;
    /* 008c39fe: mov edx, ecx */ r_edx = r_ecx;
    /* 008c3a00: mov edi, ebx */ r_edi = r_ebx;
    /* 008c3a02: or ecx, 0xffffffff */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c3a05: repne scasb al, byte ptr es:[edi] */ while (r_ecx) { { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (fZ) break; }
    /* 008c3a07: mov ecx, edx */ r_ecx = r_edx;
    /* 008c3a09: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008c3a0a: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 008c3a0d: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 008c3a0f: mov ecx, edx */ r_ecx = r_edx;
    /* 008c3a11: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 008c3a13: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c3a16: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 008c3a18: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c3a19: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c3a1a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008c3a1b: ret 8 */ FN_RET(0x008c39d0); r_esp += 12; return;
}

void f_008c3a20(void) /* sub_8C3A20 */
{
    FN_ENTER(0x008c3a20);
    /* 008c3a20: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 008c3a24: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c3a25: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 008c3a29: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c3a2a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c3a2b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c3a2c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c3a2d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c3a2f: call dword ptr [0x8f81ec] */ { u32 t = R32((u32)(0x8f81ecu)); r_esp -= 4; W32(r_esp, 0x8c3a35u); call_ind(t); }
    /* 008c3a35: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c3a37: jne 0x8c3a61 */ if (!fZ) goto L_008c3a61;
L_008c3a39:; BB(0x008c3a39);
    /* 008c3a39: mov edi, 0xa385bc */ r_edi = 0xa385bcu;
    /* 008c3a3e: or ecx, 0xffffffff */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c3a41: repne scasb al, byte ptr es:[edi] */ while (r_ecx) { { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (fZ) break; }
    /* 008c3a43: not ecx */ r_ecx = ~r_ecx;
    /* 008c3a45: sub edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008c3a47: mov edx, ecx */ r_edx = r_ecx;
    /* 008c3a49: mov esi, edi */ r_esi = r_edi;
    /* 008c3a4b: mov edi, ebx */ r_edi = r_ebx;
    /* 008c3a4d: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 008c3a50: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 008c3a52: mov ecx, edx */ r_ecx = r_edx;
    /* 008c3a54: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008c3a57: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c3a59: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 008c3a5b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c3a5c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c3a5d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008c3a5e: ret 8 */ FN_RET(0x008c3a20); r_esp += 12; return;
L_008c3a61:; BB(0x008c3a61);
    /* 008c3a61: push 0x5c */ { u32 v = 0x5cu; r_esp -= 4; W32(r_esp, v); }
    /* 008c3a63: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c3a64: call 0x8612da */ r_esp -= 4; W32(r_esp, 0x8c3a69u); f_008612da();
    /* 008c3a69: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c3a6c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c3a6e: je 0x8c3a7b */ if (fZ) goto L_008c3a7b;
L_008c3a70:; BB(0x008c3a70);
    /* 008c3a70: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c3a71: mov byte ptr [eax], 0 */ W8((u32)(r_eax), 0x0u);
    /* 008c3a74: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c3a75: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 008c3a77: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008c3a78: ret 8 */ FN_RET(0x008c3a20); r_esp += 12; return;
L_008c3a7b:; BB(0x008c3a7b);
    /* 008c3a7b: mov edi, 0xa385bc */ r_edi = 0xa385bcu;
    /* 008c3a80: or ecx, 0xffffffff */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 008c3a83: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c3a85: repne scasb al, byte ptr es:[edi] */ while (r_ecx) { { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (fZ) break; }
    /* 008c3a87: not ecx */ r_ecx = ~r_ecx;
    /* 008c3a89: sub edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008c3a8b: mov eax, ecx */ r_eax = r_ecx;
    /* 008c3a8d: mov esi, edi */ r_esi = r_edi;
    /* 008c3a8f: mov edi, ebx */ r_edi = r_ebx;
    /* 008c3a91: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 008c3a94: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 008c3a96: mov ecx, eax */ r_ecx = r_eax;
    /* 008c3a98: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 008c3a9a: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c3a9d: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 008c3a9f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c3aa0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c3aa1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008c3aa2: ret 8 */ FN_RET(0x008c3a20); r_esp += 12; return;
}

void f_008c3ab0(void) /* sub_8C3AB0 */
{
    FN_ENTER(0x008c3ab0);
    /* 008c3ab0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c3ab1: mov esi, ecx */ r_esi = r_ecx;
    /* 008c3ab3: cmp byte ptr [esi], 0 */ {  u32 a = R8((u32)(r_esi)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008c3ab6: je 0x8c3b22 */ if (fZ) goto L_008c3b22;
L_008c3ab8:; BB(0x008c3ab8);
    /* 008c3ab8: mov al, byte ptr [esi + 0x2ba4] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esi+0x2ba4u))) & 0xffu);
    /* 008c3abe: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008c3ac0: je 0x8c3ad9 */ if (fZ) goto L_008c3ad9;
L_008c3ac2:; BB(0x008c3ac2);
    /* 008c3ac2: push 0xa385dc */ { u32 v = 0xa385dcu; r_esp -= 4; W32(r_esp, v); }
    /* 008c3ac7: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c3accu); f_008c94e0();
    /* 008c3acc: mov ecx, dword ptr [esi + 0x2ba0] */ r_ecx = R32((u32)(r_esi+0x2ba0u));
    /* 008c3ad2: mov dl, byte ptr [eax] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 008c3ad4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c3ad7: mov byte ptr [ecx], dl */ W8((u32)(r_ecx), (u8)r_edx);
L_008c3ad9:; BB(0x008c3ad9);
    /* 008c3ad9: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c3ada: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
    /* 008c3ade: mov eax, dword ptr [edi + 0xc] */ r_eax = R32((u32)(r_edi+0xcu));
    /* 008c3ae1: mov ecx, dword ptr [edi + 8] */ r_ecx = R32((u32)(r_edi+0x8u));
    /* 008c3ae4: mov edx, dword ptr [edi + 4] */ r_edx = R32((u32)(r_edi+0x4u));
    /* 008c3ae7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c3ae8: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 008c3aea: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c3aeb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c3aec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c3aed: push 0xa385c0 */ { u32 v = 0xa385c0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c3af2: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c3af7u); f_008c94e0();
    /* 008c3af7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c3afa: lea ecx, [esi + 0x24] */ r_ecx = (u32)(r_esi+0x24u);
    /* 008c3afd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c3afe: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c3aff: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c3b04u); f_008c3720();
    /* 008c3b04: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c3b07: lea ecx, [esi + 0x1468] */ r_ecx = (u32)(r_esi+0x1468u);
    /* 008c3b0d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c3b0e: push 0x619 */ { u32 v = 0x619u; r_esp -= 4; W32(r_esp, v); }
    /* 008c3b13: push 0x8b1 */ { u32 v = 0x8b1u; r_esp -= 4; W32(r_esp, v); }
    /* 008c3b18: call 0x8c8550 */ r_esp -= 4; W32(r_esp, 0x8c3b1du); f_008c8550();
    /* 008c3b1d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c3b1e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c3b1f: ret 4 */ FN_RET(0x008c3ab0); r_esp += 8; return;
L_008c3b22:; BB(0x008c3b22);
    /* 008c3b22: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c3b24: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c3b25: ret 4 */ FN_RET(0x008c3ab0); r_esp += 8; return;
}

void f_008c3b30(void) /* sub_8C3B30 */
{
    FN_ENTER(0x008c3b30);
    /* 008c3b30: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c3b31: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c3b32: mov esi, ecx */ r_esi = r_ecx;
    /* 008c3b34: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 008c3b36: cmp byte ptr [esi + 1], bl */ {  u32 a = R8((u32)(r_esi+0x1u)); u32 b = (u8)r_ebx; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); }
    /* 008c3b39: je 0x8c3b40 */ if (fZ) goto L_008c3b40;
L_008c3b3b:; BB(0x008c3b3b);
    /* 008c3b3b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c3b3c: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 008c3b3e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008c3b3f: ret  */ FN_RET(0x008c3b30); r_esp += 4; return;
L_008c3b40:; BB(0x008c3b40);
    /* 008c3b40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008c3b41: push 0xa3862c */ { u32 v = 0xa3862cu; r_esp -= 4; W32(r_esp, v); }
    /* 008c3b46: lea ebp, [esi + 0x24] */ r_ebp = (u32)(r_esi+0x24u);
    /* 008c3b49: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c3b4eu); f_008c94e0();
    /* 008c3b4e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c3b51: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c3b52: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008c3b53: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c3b58u); f_008c3720();
    /* 008c3b58: mov al, byte ptr [esi + 0x20] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esi+0x20u))) & 0xffu);
    /* 008c3b5b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c3b5e: cmp al, bl */ {  u32 a = (u8)r_eax; u32 b = (u8)r_ebx; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008c3b60: mov byte ptr [esi + 1], 1 */ W8((u32)(r_esi+0x1u), 0x1u);
    /* 008c3b64: je 0x8c3b70 */ if (fZ) goto L_008c3b70;
L_008c3b66:; BB(0x008c3b66);
    /* 008c3b66: mov ecx, esi */ r_ecx = r_esi;
    /* 008c3b68: call 0x8c3f00 */ r_esp -= 4; W32(r_esp, 0x8c3b6du); f_008c3f00();
    /* 008c3b6d: mov byte ptr [esi + 0x20], bl */ W8((u32)(r_esi+0x20u), (u8)r_ebx);
L_008c3b70:; BB(0x008c3b70);
    /* 008c3b70: mov eax, dword ptr [esi + 0x2b88] */ r_eax = R32((u32)(r_esi+0x2b88u));
    /* 008c3b76: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c3b77: mov edi, dword ptr [0x8f8140] */ r_edi = R32((u32)(0x8f8140u));
    /* 008c3b7d: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c3b7f: je 0x8c3b8a */ if (fZ) goto L_008c3b8a;
L_008c3b81:; BB(0x008c3b81);
    /* 008c3b81: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c3b82: call edi */ { u32 t = r_edi; r_esp -= 4; W32(r_esp, 0x8c3b84u); call_ind(t); }
    /* 008c3b84: mov dword ptr [esi + 0x2b88], ebx */ W32((u32)(r_esi+0x2b88u), r_ebx);
L_008c3b8a:; BB(0x008c3b8a);
    /* 008c3b8a: mov eax, dword ptr [esi + 0x18] */ r_eax = R32((u32)(r_esi+0x18u));
    /* 008c3b8d: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c3b8f: je 0x8c3b97 */ if (fZ) goto L_008c3b97;
L_008c3b91:; BB(0x008c3b91);
    /* 008c3b91: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c3b92: call edi */ { u32 t = r_edi; r_esp -= 4; W32(r_esp, 0x8c3b94u); call_ind(t); }
    /* 008c3b94: mov dword ptr [esi + 0x18], ebx */ W32((u32)(r_esi+0x18u), r_ebx);
L_008c3b97:; BB(0x008c3b97);
    /* 008c3b97: mov eax, dword ptr [esi + 0x2b8c] */ r_eax = R32((u32)(r_esi+0x2b8cu));
    /* 008c3b9d: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c3b9f: je 0x8c3baa */ if (fZ) goto L_008c3baa;
L_008c3ba1:; BB(0x008c3ba1);
    /* 008c3ba1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c3ba2: call edi */ { u32 t = r_edi; r_esp -= 4; W32(r_esp, 0x8c3ba4u); call_ind(t); }
    /* 008c3ba4: mov dword ptr [esi + 0x2b8c], ebx */ W32((u32)(r_esi+0x2b8cu), r_ebx);
L_008c3baa:; BB(0x008c3baa);
    /* 008c3baa: mov al, byte ptr [esi + 0x2b90] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esi+0x2b90u))) & 0xffu);
    /* 008c3bb0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c3bb1: cmp al, bl */ {  u32 a = (u8)r_eax; u32 b = (u8)r_ebx; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008c3bb3: je 0x8c3bc3 */ if (fZ) goto L_008c3bc3;
L_008c3bb5:; BB(0x008c3bb5);
    /* 008c3bb5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c3bb6: call 0x8c6c50 */ r_esp -= 4; W32(r_esp, 0x8c3bbbu); f_008c6c50();
    /* 008c3bbb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c3bbe: call 0x8c6a60 */ r_esp -= 4; W32(r_esp, 0x8c3bc3u); f_008c6a60();
L_008c3bc3:; BB(0x008c3bc3);
    /* 008c3bc3: cmp dword ptr [0xaea6d0], ebx */ {  u32 a = R32((u32)(0xaea6d0u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c3bc9: je 0x8c3bda */ if (fZ) goto L_008c3bda;
L_008c3bcb:; BB(0x008c3bcb);
    /* 008c3bcb: cmp dword ptr [0xaea6cc], ebx */ {  u32 a = R32((u32)(0xaea6ccu)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c3bd1: je 0x8c3bda */ if (fZ) goto L_008c3bda;
L_008c3bd3:; BB(0x008c3bd3);
    /* 008c3bd3: mov ecx, esi */ r_ecx = r_esi;
    /* 008c3bd5: call 0x8c4880 */ r_esp -= 4; W32(r_esp, 0x8c3bdau); f_008c4880();
L_008c3bda:; BB(0x008c3bda);
    /* 008c3bda: cmp byte ptr [esi + 0x2ba4], bl */ {  u32 a = R8((u32)(r_esi+0x2ba4u)); u32 b = (u8)r_ebx; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008c3be0: je 0x8c3be9 */ if (fZ) goto L_008c3be9;
L_008c3be2:; BB(0x008c3be2);
    /* 008c3be2: mov ecx, esi */ r_ecx = r_esi;
    /* 008c3be4: call 0x8c4ee0 */ r_esp -= 4; W32(r_esp, 0x8c3be9u); f_008c4ee0();
L_008c3be9:; BB(0x008c3be9);
    /* 008c3be9: push 0xa38614 */ { u32 v = 0xa38614u; r_esp -= 4; W32(r_esp, v); }
    /* 008c3bee: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c3bf3u); f_008c94e0();
    /* 008c3bf3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c3bf6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c3bf7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008c3bf8: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c3bfdu); f_008c3720();
    /* 008c3bfd: mov al, byte ptr [0xaea818] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(0xaea818u))) & 0xffu);
    /* 008c3c02: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c3c05: cmp al, bl */ {  u32 a = (u8)r_eax; u32 b = (u8)r_ebx; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008c3c07: je 0x8c3c1f */ if (fZ) goto L_008c3c1f;
L_008c3c09:; BB(0x008c3c09);
    /* 008c3c09: lea ecx, [esi + 0x1468] */ r_ecx = (u32)(r_esi+0x1468u);
    /* 008c3c0f: call 0x8c82d0 */ r_esp -= 4; W32(r_esp, 0x8c3c14u); f_008c82d0();
    /* 008c3c14: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c3c16: je 0x8c3c1f */ if (fZ) goto L_008c3c1f;
L_008c3c18:; BB(0x008c3c18);
    /* 008c3c18: mov ecx, esi */ r_ecx = r_esi;
    /* 008c3c1a: call 0x8c3fe0 */ r_esp -= 4; W32(r_esp, 0x8c3c1fu); f_008c3fe0();
L_008c3c1f:; BB(0x008c3c1f);
    /* 008c3c1f: mov eax, dword ptr [0xaea704] */ r_eax = R32((u32)(0xaea704u));
    /* 008c3c24: mov ecx, dword ptr [esi + 0x10] */ r_ecx = R32((u32)(r_esi+0x10u));
    /* 008c3c27: and eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008c3c2c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c3c2d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c3c2e: push 0xa385e4 */ { u32 v = 0xa385e4u; r_esp -= 4; W32(r_esp, v); }
    /* 008c3c33: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c3c38u); f_008c94e0();
    /* 008c3c38: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c3c3b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c3c3c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008c3c3d: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c3c42u); f_008c3720();
    /* 008c3c42: mov ecx, dword ptr [esi + 0x10] */ r_ecx = R32((u32)(r_esi+0x10u));
    /* 008c3c45: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c3c48: cmp ecx, 0x755 */ {  u32 a = r_ecx; u32 b = 0x755u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c3c4e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008c3c4f: jne 0x8c3c59 */ if (!fZ) goto L_008c3c59;
L_008c3c51:; BB(0x008c3c51);
    /* 008c3c51: cmp byte ptr [0xaea704], bl */ {  u32 a = R8((u32)(0xaea704u)); u32 b = (u8)r_ebx; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008c3c57: je 0x8c3c73 */ if (fZ) goto L_008c3c73;
L_008c3c59:; BB(0x008c3c59);
    /* 008c3c59: mov dl, byte ptr [esi + 0x2b14] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_esi+0x2b14u))) & 0xffu);
    /* 008c3c5f: lea eax, [esi + 0x2b14] */ r_eax = (u32)(r_esi+0x2b14u);
    /* 008c3c65: cmp dl, bl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_ebx; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008c3c67: je 0x8c3c73 */ if (fZ) goto L_008c3c73;
L_008c3c69:; BB(0x008c3c69);
    /* 008c3c69: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c3c6a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c3c6b: call 0x8c7350 */ r_esp -= 4; W32(r_esp, 0x8c3c70u); f_008c7350();
    /* 008c3c70: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_008c3c73:; BB(0x008c3c73);
    /* 008c3c73: lea ecx, [esi + 0x1468] */ r_ecx = (u32)(r_esi+0x1468u);
    /* 008c3c79: mov byte ptr [esi], bl */ W8((u32)(r_esi), (u8)r_ebx);
    /* 008c3c7b: call 0x8c8830 */ r_esp -= 4; W32(r_esp, 0x8c3c80u); f_008c8830();
    /* 008c3c80: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c3c81: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008c3c82: ret  */ FN_RET(0x008c3b30); r_esp += 4; return;
}

void f_008c3c90(void) /* sub_8C3C90 */
{
    FN_ENTER(0x008c3c90);
    /* 008c3c90: sub esp, 0x108 */ {  u32 a = r_esp; u32 b = 0x108u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008c3c96: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c3c97: mov ebx, ecx */ r_ebx = r_ecx;
    /* 008c3c99: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008c3c9a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c3c9b: mov al, byte ptr [ebx + 0x20] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebx+0x20u))) & 0xffu);
    /* 008c3c9e: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008c3ca0: je 0x8c3cae */ if (fZ) goto L_008c3cae;
L_008c3ca2:; BB(0x008c3ca2);
    /* 008c3ca2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c3ca3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008c3ca4: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 008c3ca6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008c3ca7: add esp, 0x108 */ {  u32 a = r_esp; u32 b = 0x108u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c3cad: ret  */ FN_RET(0x008c3c90); r_esp += 4; return;
L_008c3cae:; BB(0x008c3cae);
    /* 008c3cae: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c3caf: push 0xa38758 */ { u32 v = 0xa38758u; r_esp -= 4; W32(r_esp, v); }
    /* 008c3cb4: lea ebp, [ebx + 0x24] */ r_ebp = (u32)(r_ebx+0x24u);
    /* 008c3cb7: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c3cbcu); f_008c94e0();
    /* 008c3cbc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c3cbf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c3cc0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008c3cc1: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c3cc6u); f_008c3720();
    /* 008c3cc6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c3cc9: lea eax, [esp + 0x14] */ r_eax = (u32)(r_esp+0x14u);
    /* 008c3ccd: mov ecx, ebx */ r_ecx = r_ebx;
    /* 008c3ccf: push 0x104 */ { u32 v = 0x104u; r_esp -= 4; W32(r_esp, v); }
    /* 008c3cd4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c3cd5: call 0x8c39d0 */ r_esp -= 4; W32(r_esp, 0x8c3cdau); f_008c39d0();
    /* 008c3cda: mov edi, 0xa384f8 */ r_edi = 0xa384f8u;
    /* 008c3cdf: or ecx, 0xffffffff */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 008c3ce2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c3ce4: lea edx, [esp + 0x14] */ r_edx = (u32)(r_esp+0x14u);
    /* 008c3ce8: repne scasb al, byte ptr es:[edi] */ while (r_ecx) { { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (fZ) break; }
    /* 008c3cea: not ecx */ r_ecx = ~r_ecx;
    /* 008c3cec: sub edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008c3cee: push 0xa38748 */ { u32 v = 0xa38748u; r_esp -= 4; W32(r_esp, v); }
    /* 008c3cf3: mov esi, edi */ r_esi = r_edi;
    /* 008c3cf5: mov edi, edx */ r_edi = r_edx;
    /* 008c3cf7: mov edx, ecx */ r_edx = r_ecx;
    /* 008c3cf9: or ecx, 0xffffffff */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c3cfc: repne scasb al, byte ptr es:[edi] */ while (r_ecx) { { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (fZ) break; }
    /* 008c3cfe: mov ecx, edx */ r_ecx = r_edx;
    /* 008c3d00: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008c3d01: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 008c3d04: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 008c3d06: mov ecx, edx */ r_ecx = r_edx;
    /* 008c3d08: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008c3d0b: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 008c3d0d: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c3d12u); f_008c94e0();
    /* 008c3d12: mov edi, eax */ r_edi = r_eax;
    /* 008c3d14: or ecx, 0xffffffff */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 008c3d17: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008c3d19: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c3d1c: repne scasb al, byte ptr es:[edi] */ while (r_ecx) { { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (fZ) break; }
    /* 008c3d1e: not ecx */ r_ecx = ~r_ecx;
    /* 008c3d20: sub edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008c3d22: lea edx, [esp + 0x14] */ r_edx = (u32)(r_esp+0x14u);
    /* 008c3d26: mov esi, edi */ r_esi = r_edi;
    /* 008c3d28: mov edi, edx */ r_edi = r_edx;
    /* 008c3d2a: mov edx, ecx */ r_edx = r_ecx;
    /* 008c3d2c: or ecx, 0xffffffff */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c3d2f: repne scasb al, byte ptr es:[edi] */ while (r_ecx) { { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (fZ) break; }
    /* 008c3d31: mov ecx, edx */ r_ecx = r_edx;
    /* 008c3d33: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008c3d34: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 008c3d37: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 008c3d39: mov ecx, edx */ r_ecx = r_edx;
    /* 008c3d3b: lea eax, [esp + 0x14] */ r_eax = (u32)(r_esp+0x14u);
    /* 008c3d3f: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008c3d42: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c3d43: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 008c3d45: push 0xa3873c */ { u32 v = 0xa3873cu; r_esp -= 4; W32(r_esp, v); }
    /* 008c3d4a: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c3d4fu); f_008c94e0();
    /* 008c3d4f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c3d52: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c3d53: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008c3d54: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c3d59u); f_008c3720();
    /* 008c3d59: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c3d5c: lea ecx, [esp + 0x14] */ r_ecx = (u32)(r_esp+0x14u);
    /* 008c3d60: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008c3d62: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c3d63: lea ecx, [ebx + 0x2ac8] */ r_ecx = (u32)(r_ebx+0x2ac8u);
    /* 008c3d69: call 0x8c7a90 */ r_esp -= 4; W32(r_esp, 0x8c3d6eu); f_008c7a90();
    /* 008c3d6e: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008c3d70: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c3d71: jne 0x8c3da8 */ if (!fZ) goto L_008c3da8;
L_008c3d73:; BB(0x008c3d73);
    /* 008c3d73: mov esi, dword ptr [0x8f817c] */ r_esi = R32((u32)(0x8f817cu));
    /* 008c3d79: call esi */ { u32 t = r_esi; r_esp -= 4; W32(r_esp, 0x8c3d7bu); call_ind(t); }
    /* 008c3d7b: mov ebx, dword ptr [ebx + 0x2b0c] */ r_ebx = R32((u32)(r_ebx+0x2b0cu));
    /* 008c3d81: call esi */ { u32 t = r_esi; r_esp -= 4; W32(r_esp, 0x8c3d83u); call_ind(t); }
    /* 008c3d83: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c3d84: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c3d85: push 0xa3871c */ { u32 v = 0xa3871cu; r_esp -= 4; W32(r_esp, v); }
    /* 008c3d8a: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c3d8fu); f_008c94e0();
    /* 008c3d8f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c3d92: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c3d93: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008c3d94: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c3d99u); f_008c3720();
    /* 008c3d99: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c3d9c: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c3d9e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c3d9f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008c3da0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008c3da1: add esp, 0x108 */ {  u32 a = r_esp; u32 b = 0x108u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c3da7: ret  */ FN_RET(0x008c3c90); r_esp += 4; return;
L_008c3da8:; BB(0x008c3da8);
    /* 008c3da8: lea edx, [esp + 0x10] */ r_edx = (u32)(r_esp+0x10u);
    /* 008c3dac: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c3dad: call dword ptr [0x8f8130] */ { u32 t = R32((u32)(0x8f8130u)); r_esp -= 4; W32(r_esp, 0x8c3db3u); call_ind(t); }
    /* 008c3db3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c3db5: mov dword ptr [ebx + 0x2b34], eax */ W32((u32)(r_ebx+0x2b34u), r_eax);
    /* 008c3dbb: jne 0x8c3dce */ if (!fZ) goto L_008c3dce;
L_008c3dbd:; BB(0x008c3dbd);
    /* 008c3dbd: call dword ptr [0x8f817c] */ { u32 t = R32((u32)(0x8f817cu)); r_esp -= 4; W32(r_esp, 0x8c3dc3u); call_ind(t); }
    /* 008c3dc3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c3dc4: push 0xa38700 */ { u32 v = 0xa38700u; r_esp -= 4; W32(r_esp, v); }
    /* 008c3dc9: jmp 0x8c3ed6 */ goto L_008c3ed6;
L_008c3dce:; BB(0x008c3dce);
    /* 008c3dce: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 008c3dd0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c3dd1: call 0x8c5c80 */ r_esp -= 4; W32(r_esp, 0x8c3dd6u); f_008c5c80();
    /* 008c3dd6: mov dword ptr [ebx + 0x2b94], eax */ W32((u32)(r_ebx+0x2b94u), r_eax);
    /* 008c3ddc: mov eax, dword ptr [ebx + 0x2b34] */ r_eax = R32((u32)(r_ebx+0x2b34u));
    /* 008c3de2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008c3de4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c3de5: call 0x8c5c80 */ r_esp -= 4; W32(r_esp, 0x8c3deau); f_008c5c80();
    /* 008c3dea: mov ecx, dword ptr [ebx + 0x2b94] */ r_ecx = R32((u32)(r_ebx+0x2b94u));
    /* 008c3df0: mov dword ptr [ebx + 0x2b98], eax */ W32((u32)(r_ebx+0x2b98u), r_eax);
    /* 008c3df6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c3df8: je 0x8c3eca */ if (fZ) goto L_008c3eca;
L_008c3dfe:; BB(0x008c3dfe);
    /* 008c3dfe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c3e00: je 0x8c3eca */ if (fZ) goto L_008c3eca;
L_008c3e06:; BB(0x008c3e06);
    /* 008c3e06: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c3e08: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c3e0a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c3e0c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c3e0e: call dword ptr [0x8f8124] */ { u32 t = R32((u32)(0x8f8124u)); r_esp -= 4; W32(r_esp, 0x8c3e14u); call_ind(t); }
    /* 008c3e14: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c3e16: mov dword ptr [ebx + 0x14], eax */ W32((u32)(r_ebx+0x14u), r_eax);
    /* 008c3e19: jne 0x8c3e2c */ if (!fZ) goto L_008c3e2c;
L_008c3e1b:; BB(0x008c3e1b);
    /* 008c3e1b: call dword ptr [0x8f817c] */ { u32 t = R32((u32)(0x8f817cu)); r_esp -= 4; W32(r_esp, 0x8c3e21u); call_ind(t); }
    /* 008c3e21: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c3e22: push 0xa386d8 */ { u32 v = 0xa386d8u; r_esp -= 4; W32(r_esp, v); }
    /* 008c3e27: jmp 0x8c3ed6 */ goto L_008c3ed6;
L_008c3e2c:; BB(0x008c3e2c);
    /* 008c3e2c: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 008c3e30: mov byte ptr [ebx + 0x20], 1 */ W8((u32)(r_ebx+0x20u), 0x1u);
    /* 008c3e34: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c3e35: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c3e37: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c3e38: push 0x8c4110 */ { u32 v = 0x8c4110u; r_esp -= 4; W32(r_esp, v); }
    /* 008c3e3d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c3e3f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c3e41: call dword ptr [0x8f8218] */ { u32 t = R32((u32)(0x8f8218u)); r_esp -= 4; W32(r_esp, 0x8c3e47u); call_ind(t); }
    /* 008c3e47: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c3e49: mov dword ptr [ebx + 0x2b38], eax */ W32((u32)(r_ebx+0x2b38u), r_eax);
    /* 008c3e4f: jne 0x8c3e5f */ if (!fZ) goto L_008c3e5f;
L_008c3e51:; BB(0x008c3e51);
    /* 008c3e51: call dword ptr [0x8f817c] */ { u32 t = R32((u32)(0x8f817cu)); r_esp -= 4; W32(r_esp, 0x8c3e57u); call_ind(t); }
    /* 008c3e57: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c3e58: push 0xa386b4 */ { u32 v = 0xa386b4u; r_esp -= 4; W32(r_esp, v); }
    /* 008c3e5d: jmp 0x8c3ed6 */ goto L_008c3ed6;
L_008c3e5f:; BB(0x008c3e5f);
    /* 008c3e5f: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 008c3e63: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c3e64: push 0xa38690 */ { u32 v = 0xa38690u; r_esp -= 4; W32(r_esp, v); }
    /* 008c3e69: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c3e6eu); f_008c94e0();
    /* 008c3e6e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c3e71: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c3e72: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008c3e73: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c3e78u); f_008c3720();
    /* 008c3e78: mov eax, dword ptr [ebx + 0x14] */ r_eax = R32((u32)(r_ebx+0x14u));
    /* 008c3e7b: mov ecx, dword ptr [ebx + 0x2b80] */ r_ecx = R32((u32)(r_ebx+0x2b80u));
    /* 008c3e81: mov edx, dword ptr [ebx + 0x2b84] */ r_edx = R32((u32)(r_ebx+0x2b84u));
    /* 008c3e87: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c3e88: mov eax, dword ptr [ebx + 0x2b10] */ r_eax = R32((u32)(r_ebx+0x2b10u));
    /* 008c3e8e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c3e8f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c3e90: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c3e91: call dword ptr [ebx + 0x2b94] */ { u32 t = R32((u32)(r_ebx+0x2b94u)); r_esp -= 4; W32(r_esp, 0x8c3e97u); call_ind(t); }
    /* 008c3e97: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c3e9a: cmp eax, 0x6b */ {  u32 a = r_eax; u32 b = 0x6bu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c3e9d: je 0x8c3ea7 */ if (fZ) goto L_008c3ea7;
L_008c3e9f:; BB(0x008c3e9f);
    /* 008c3e9f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c3ea0: push 0xa38674 */ { u32 v = 0xa38674u; r_esp -= 4; W32(r_esp, v); }
    /* 008c3ea5: jmp 0x8c3ed6 */ goto L_008c3ed6;
L_008c3ea7:; BB(0x008c3ea7);
    /* 008c3ea7: push 0xa38660 */ { u32 v = 0xa38660u; r_esp -= 4; W32(r_esp, v); }
    /* 008c3eac: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c3eb1u); f_008c94e0();
    /* 008c3eb1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c3eb4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c3eb5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008c3eb6: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c3ebbu); f_008c3720();
    /* 008c3ebb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c3ebe: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 008c3ec0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c3ec1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008c3ec2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008c3ec3: add esp, 0x108 */ {  u32 a = r_esp; u32 b = 0x108u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c3ec9: ret  */ FN_RET(0x008c3c90); r_esp += 4; return;
L_008c3eca:; BB(0x008c3eca);
    /* 008c3eca: call dword ptr [0x8f817c] */ { u32 t = R32((u32)(0x8f817cu)); r_esp -= 4; W32(r_esp, 0x8c3ed0u); call_ind(t); }
    /* 008c3ed0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c3ed1: push 0xa38648 */ { u32 v = 0xa38648u; r_esp -= 4; W32(r_esp, v); }
L_008c3ed6:; BB(0x008c3ed6);
    /* 008c3ed6: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c3edbu); f_008c94e0();
    /* 008c3edb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c3ede: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c3edf: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008c3ee0: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c3ee5u); f_008c3720();
    /* 008c3ee5: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c3ee8: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c3eea: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c3eeb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008c3eec: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008c3eed: add esp, 0x108 */ {  u32 a = r_esp; u32 b = 0x108u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c3ef3: ret  */ FN_RET(0x008c3c90); r_esp += 4; return;
}

void f_008c3f00(void) /* sub_8C3F00 */
{
    FN_ENTER(0x008c3f00);
    /* 008c3f00: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c3f01: mov esi, ecx */ r_esi = r_ecx;
    /* 008c3f03: mov al, byte ptr [esi + 0x20] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esi+0x20u))) & 0xffu);
    /* 008c3f06: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c3f08: jne 0x8c3f0e */ if (!fZ) goto L_008c3f0e;
L_008c3f0a:; BB(0x008c3f0a);
    /* 008c3f0a: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 008c3f0c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c3f0d: ret  */ FN_RET(0x008c3f00); r_esp += 4; return;
L_008c3f0e:; BB(0x008c3f0e);
    /* 008c3f0e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c3f0f: push 0xa38798 */ { u32 v = 0xa38798u; r_esp -= 4; W32(r_esp, v); }
    /* 008c3f14: lea edi, [esi + 0x24] */ r_edi = (u32)(r_esi+0x24u);
    /* 008c3f17: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c3f1cu); f_008c94e0();
    /* 008c3f1c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c3f1f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c3f20: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c3f21: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c3f26u); f_008c3720();
    /* 008c3f26: mov ecx, dword ptr [esi + 0x2b10] */ r_ecx = R32((u32)(r_esi+0x2b10u));
    /* 008c3f2c: lea eax, [esi + 0x2b3c] */ r_eax = (u32)(r_esi+0x2b3cu);
    /* 008c3f32: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c3f33: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c3f34: call dword ptr [esi + 0x2b98] */ { u32 t = R32((u32)(r_esi+0x2b98u)); r_esp -= 4; W32(r_esp, 0x8c3f3au); call_ind(t); }
    /* 008c3f3a: mov eax, dword ptr [esi + 0x14] */ r_eax = R32((u32)(r_esi+0x14u));
    /* 008c3f3d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c3f40: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c3f42: mov byte ptr [esi + 0x20], 0 */ W8((u32)(r_esi+0x20u), 0x0u);
    /* 008c3f46: je 0x8c3f4f */ if (fZ) goto L_008c3f4f;
L_008c3f48:; BB(0x008c3f48);
    /* 008c3f48: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c3f49: call dword ptr [0x8f82e4] */ { u32 t = R32((u32)(0x8f82e4u)); r_esp -= 4; W32(r_esp, 0x8c3f4fu); call_ind(t); }
L_008c3f4f:; BB(0x008c3f4f);
    /* 008c3f4f: mov edx, dword ptr [esi + 0x2b38] */ r_edx = R32((u32)(r_esi+0x2b38u));
    /* 008c3f55: push 0x7d0 */ { u32 v = 0x7d0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c3f5a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c3f5b: call dword ptr [0x8f8128] */ { u32 t = R32((u32)(0x8f8128u)); r_esp -= 4; W32(r_esp, 0x8c3f61u); call_ind(t); }
    /* 008c3f61: cmp eax, 0x102 */ {  u32 a = r_eax; u32 b = 0x102u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c3f66: jne 0x8c3f8e */ if (!fZ) goto L_008c3f8e;
L_008c3f68:; BB(0x008c3f68);
    /* 008c3f68: push 0xa38780 */ { u32 v = 0xa38780u; r_esp -= 4; W32(r_esp, v); }
    /* 008c3f6d: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c3f72u); f_008c94e0();
    /* 008c3f72: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c3f75: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c3f76: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c3f77: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c3f7cu); f_008c3720();
    /* 008c3f7c: mov eax, dword ptr [esi + 0x2b38] */ r_eax = R32((u32)(r_esi+0x2b38u));
    /* 008c3f82: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c3f85: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c3f87: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c3f88: call dword ptr [0x8f815c] */ { u32 t = R32((u32)(0x8f815cu)); r_esp -= 4; W32(r_esp, 0x8c3f8eu); call_ind(t); }
L_008c3f8e:; BB(0x008c3f8e);
    /* 008c3f8e: mov ecx, dword ptr [esi + 0x2b38] */ r_ecx = R32((u32)(r_esi+0x2b38u));
    /* 008c3f94: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c3f95: call dword ptr [0x8f8140] */ { u32 t = R32((u32)(0x8f8140u)); r_esp -= 4; W32(r_esp, 0x8c3f9bu); call_ind(t); }
    /* 008c3f9b: mov eax, dword ptr [esi + 0x2b34] */ r_eax = R32((u32)(r_esi+0x2b34u));
    /* 008c3fa1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c3fa3: je 0x8c3fac */ if (fZ) goto L_008c3fac;
L_008c3fa5:; BB(0x008c3fa5);
    /* 008c3fa5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c3fa6: call dword ptr [0x8f8134] */ { u32 t = R32((u32)(0x8f8134u)); r_esp -= 4; W32(r_esp, 0x8c3facu); call_ind(t); }
L_008c3fac:; BB(0x008c3fac);
    /* 008c3fac: push 0xa3876c */ { u32 v = 0xa3876cu; r_esp -= 4; W32(r_esp, v); }
    /* 008c3fb1: mov dword ptr [esi + 0x2b94], 0 */ W32((u32)(r_esi+0x2b94u), 0x0u);
    /* 008c3fbb: mov dword ptr [esi + 0x2b98], 0 */ W32((u32)(r_esi+0x2b98u), 0x0u);
    /* 008c3fc5: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c3fcau); f_008c94e0();
    /* 008c3fca: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c3fcd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c3fce: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c3fcf: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c3fd4u); f_008c3720();
    /* 008c3fd4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c3fd7: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 008c3fd9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c3fda: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c3fdb: ret  */ FN_RET(0x008c3f00); r_esp += 4; return;
}

void f_008c3fe0(void) /* sub_8C3FE0 */
{
    FN_ENTER(0x008c3fe0);
    /* 008c3fe0: sub esp, 0x1a0 */ {  u32 a = r_esp; u32 b = 0x1a0u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008c3fe6: lea eax, [esp + 0x10] */ r_eax = (u32)(r_esp+0x10u);
    /* 008c3fea: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c3feb: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008c3fec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c3fed: mov ebp, ecx */ r_ebp = r_ecx;
    /* 008c3fef: push 0x202 */ { u32 v = 0x202u; r_esp -= 4; W32(r_esp, v); }
    /* 008c3ff4: call dword ptr [0x8f83f0] */ { u32 t = R32((u32)(0x8f83f0u)); r_esp -= 4; W32(r_esp, 0x8c3ffau); call_ind(t); }
    /* 008c3ffa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c3ffc: je 0x8c4009 */ if (fZ) goto L_008c4009;
L_008c3ffe:; BB(0x008c3ffe);
    /* 008c3ffe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008c3fff: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008c4001: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008c4002: add esp, 0x1a0 */ {  u32 a = r_esp; u32 b = 0x1a0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c4008: ret  */ FN_RET(0x008c3fe0); r_esp += 4; return;
L_008c4009:; BB(0x008c4009);
    /* 008c4009: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c400b: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 008c400d: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 008c400f: call dword ptr [0x8f83e0] */ { u32 t = R32((u32)(0x8f83e0u)); r_esp -= 4; W32(r_esp, 0x8c4015u); call_ind(t); }
    /* 008c4015: mov ebx, eax */ r_ebx = r_eax;
    /* 008c4017: cmp ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c401a: jne 0x8c4027 */ if (!fZ) goto L_008c4027;
L_008c401c:; BB(0x008c401c);
    /* 008c401c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008c401d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008c401f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008c4020: add esp, 0x1a0 */ {  u32 a = r_esp; u32 b = 0x1a0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c4026: ret  */ FN_RET(0x008c3fe0); r_esp += 4; return;
L_008c4027:; BB(0x008c4027);
    /* 008c4027: push 0x3a98 */ { u32 v = 0x3a98u; r_esp -= 4; W32(r_esp, v); }
    /* 008c402c: mov word ptr [esp + 0xc], 2 */ W16((u32)(r_esp+0xcu), 0x2u);
    /* 008c4033: call dword ptr [0x8f83d4] */ { u32 t = R32((u32)(0x8f83d4u)); r_esp -= 4; W32(r_esp, 0x8c4039u); call_ind(t); }
    /* 008c4039: push 0xaea818 */ { u32 v = 0xaea818u; r_esp -= 4; W32(r_esp, v); }
    /* 008c403e: mov word ptr [esp + 0xe], ax */ W16((u32)(r_esp+0xeu), (u16)r_eax);
    /* 008c4043: call dword ptr [0x8f8400] */ { u32 t = R32((u32)(0x8f8400u)); r_esp -= 4; W32(r_esp, 0x8c4049u); call_ind(t); }
    /* 008c4049: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c404c: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 008c4050: jne 0x8c4092 */ if (!fZ) goto L_008c4092;
L_008c4052:; BB(0x008c4052);
    /* 008c4052: push 0xaea818 */ { u32 v = 0xaea818u; r_esp -= 4; W32(r_esp, v); }
    /* 008c4057: call dword ptr [0x8f83f4] */ { u32 t = R32((u32)(0x8f83f4u)); r_esp -= 4; W32(r_esp, 0x8c405du); call_ind(t); }
    /* 008c405d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c405f: jne 0x8c4073 */ if (!fZ) goto L_008c4073;
L_008c4061:; BB(0x008c4061);
    /* 008c4061: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c4062: call dword ptr [0x8f83e4] */ { u32 t = R32((u32)(0x8f83e4u)); r_esp -= 4; W32(r_esp, 0x8c4068u); call_ind(t); }
    /* 008c4068: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008c4069: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008c406b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008c406c: add esp, 0x1a0 */ {  u32 a = r_esp; u32 b = 0x1a0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c4072: ret  */ FN_RET(0x008c3fe0); r_esp += 4; return;
L_008c4073:; BB(0x008c4073);
    /* 008c4073: movsx ecx, word ptr [eax + 0xa] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0xau));
    /* 008c4077: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 008c407a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c407b: mov eax, ecx */ r_eax = r_ecx;
    /* 008c407d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c407e: mov esi, dword ptr [edx] */ r_esi = R32((u32)(r_edx));
    /* 008c4080: lea edi, [esp + 0x14] */ r_edi = (u32)(r_esp+0x14u);
    /* 008c4084: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 008c4087: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 008c4089: mov ecx, eax */ r_ecx = r_eax;
    /* 008c408b: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008c408e: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 008c4090: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c4091: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
L_008c4092:; BB(0x008c4092);
    /* 008c4092: lea ecx, [ebp + 0x1468] */ r_ecx = (u32)(r_ebp+0x1468u);
    /* 008c4098: call 0x8c82c0 */ r_esp -= 4; W32(r_esp, 0x8c409du); f_008c82c0();
    /* 008c409d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c409f: jne 0x8c40b3 */ if (!fZ) goto L_008c40b3;
L_008c40a1:; BB(0x008c40a1);
    /* 008c40a1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c40a2: call dword ptr [0x8f83e4] */ { u32 t = R32((u32)(0x8f83e4u)); r_esp -= 4; W32(r_esp, 0x8c40a8u); call_ind(t); }
    /* 008c40a8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008c40a9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008c40ab: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008c40ac: add esp, 0x1a0 */ {  u32 a = r_esp; u32 b = 0x1a0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c40b2: ret  */ FN_RET(0x008c3fe0); r_esp += 4; return;
L_008c40b3:; BB(0x008c40b3);
    /* 008c40b3: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 008c40b5: lea edx, [esp + 8] */ r_edx = (u32)(r_esp+0x8u);
    /* 008c40b9: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 008c40bb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c40bc: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008c40bf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c40c1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c40c2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c40c3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c40c4: call dword ptr [0x8f83ec] */ { u32 t = R32((u32)(0x8f83ecu)); r_esp -= 4; W32(r_esp, 0x8c40cau); call_ind(t); }
    /* 008c40ca: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c40cc: jne 0x8c40e0 */ if (!fZ) goto L_008c40e0;
L_008c40ce:; BB(0x008c40ce);
    /* 008c40ce: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c40cf: call dword ptr [0x8f83e4] */ { u32 t = R32((u32)(0x8f83e4u)); r_esp -= 4; W32(r_esp, 0x8c40d5u); call_ind(t); }
    /* 008c40d5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008c40d6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008c40d8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008c40d9: add esp, 0x1a0 */ {  u32 a = r_esp; u32 b = 0x1a0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c40df: ret  */ FN_RET(0x008c3fe0); r_esp += 4; return;
L_008c40e0:; BB(0x008c40e0);
    /* 008c40e0: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c40e3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c40e4: jne 0x8c40f7 */ if (!fZ) goto L_008c40f7;
L_008c40e6:; BB(0x008c40e6);
    /* 008c40e6: call dword ptr [0x8f83e4] */ { u32 t = R32((u32)(0x8f83e4u)); r_esp -= 4; W32(r_esp, 0x8c40ecu); call_ind(t); }
    /* 008c40ec: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008c40ed: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008c40ef: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008c40f0: add esp, 0x1a0 */ {  u32 a = r_esp; u32 b = 0x1a0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c40f6: ret  */ FN_RET(0x008c3fe0); r_esp += 4; return;
L_008c40f7:; BB(0x008c40f7);
    /* 008c40f7: call dword ptr [0x8f83e4] */ { u32 t = R32((u32)(0x8f83e4u)); r_esp -= 4; W32(r_esp, 0x8c40fdu); call_ind(t); }
    /* 008c40fd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008c40fe: mov eax, 1 */ r_eax = 0x1u;
    /* 008c4103: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008c4104: add esp, 0x1a0 */ {  u32 a = r_esp; u32 b = 0x1a0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c410a: ret  */ FN_RET(0x008c3fe0); r_esp += 4; return;
}

