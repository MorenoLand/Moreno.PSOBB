#include "protos.h"

void f_00899644(void) /* sub_899644 */
{
    FN_ENTER(0x00899644);
    /* 00899644: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 00899648: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00899649: mov esi, ecx */ r_esi = r_ecx;
    /* 0089964b: and dword ptr [esi + 4], 0 */ { u32 ad = (u32)(r_esi+0x4u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0089964f: and dword ptr [esi], 0 */ { u32 ad = (u32)(r_esi);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00899652: mov ecx, eax */ r_ecx = r_eax;
    /* 00899654: and ecx, 0xffff */ {  u32 a = r_ecx; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0089965a: mov dword ptr [esi + 8], eax */ W32((u32)(r_esi+0x8u), r_eax);
    /* 0089965d: jbe 0x899755 */ if ((fC||fZ)) goto L_00899755;
L_00899663:; BB(0x00899663);
    /* 00899663: cmp ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00899666: ja 0x899755 */ if ((!fC&&!fZ)) goto L_00899755;
L_0089966c:; BB(0x0089966c);
    /* 0089966c: test eax, 0xfff00000 */ {  u32 a = r_eax; u32 b = 0xfff00000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00899671: jne 0x899755 */ if (!fZ) goto L_00899755;
L_00899677:; BB(0x00899677);
    /* 00899677: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 0089967b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0089967c: and eax, 0x80000 */ {  u32 a = r_eax; u32 b = 0x80000u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00899681: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00899682: mov dword ptr [ecx + 0x40], eax */ W32((u32)(r_ecx+0x40u), r_eax);
    /* 00899685: call 0x89ea81 */ r_esp -= 4; W32(r_esp, 0x89968au); f_0089ea81();
    /* 0089968a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089968c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0089968d: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
    /* 00899690: je 0x89972b */ if (fZ) goto L_0089972b;
L_00899696:; BB(0x00899696);
    /* 00899696: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0089969a: call 0x89ea81 */ r_esp -= 4; W32(r_esp, 0x89969fu); f_0089ea81();
    /* 0089969f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008996a1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008996a2: mov dword ptr [esi], eax */ W32((u32)(r_esi), r_eax);
    /* 008996a4: je 0x89972b */ if (fZ) goto L_0089972b;
L_008996aa:; BB(0x008996aa);
    /* 008996aa: mov ecx, dword ptr [esi + 4] */ r_ecx = R32((u32)(r_esi+0x4u));
    /* 008996ad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008996ae: call 0x89a99d */ r_esp -= 4; W32(r_esp, 0x8996b3u); f_0089a99d();
    /* 008996b3: mov ebx, eax */ r_ebx = r_eax;
    /* 008996b5: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 008996b7: jl 0x899730 */ if ((fS!=fO)) goto L_00899730;
L_008996b9:; BB(0x008996b9);
    /* 008996b9: mov ecx, esi */ r_ecx = r_esi;
    /* 008996bb: call 0x8977a7 */ r_esp -= 4; W32(r_esp, 0x8996c0u); f_008977a7();
    /* 008996c0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 008996c2: jge 0x899727 */ if ((fS==fO)) goto L_00899727;
L_008996c4:; BB(0x008996c4);
    /* 008996c4: mov ecx, esi */ r_ecx = r_esi;
    /* 008996c6: call 0x8978df */ r_esp -= 4; W32(r_esp, 0x8996cbu); f_008978df();
    /* 008996cb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 008996cd: jge 0x899727 */ if ((fS==fO)) goto L_00899727;
L_008996cf:; BB(0x008996cf);
    /* 008996cf: mov ecx, esi */ r_ecx = r_esi;
    /* 008996d1: call 0x8979d0 */ r_esp -= 4; W32(r_esp, 0x8996d6u); f_008979d0();
    /* 008996d6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 008996d8: jge 0x899727 */ if ((fS==fO)) goto L_00899727;
L_008996da:; BB(0x008996da);
    /* 008996da: mov ecx, esi */ r_ecx = r_esi;
    /* 008996dc: call 0x897bd2 */ r_esp -= 4; W32(r_esp, 0x8996e1u); f_00897bd2();
    /* 008996e1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 008996e3: jge 0x899727 */ if ((fS==fO)) goto L_00899727;
L_008996e5:; BB(0x008996e5);
    /* 008996e5: mov ecx, esi */ r_ecx = r_esi;
    /* 008996e7: call 0x897dd6 */ r_esp -= 4; W32(r_esp, 0x8996ecu); f_00897dd6();
    /* 008996ec: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 008996ee: jge 0x899727 */ if ((fS==fO)) goto L_00899727;
L_008996f0:; BB(0x008996f0);
    /* 008996f0: mov ecx, esi */ r_ecx = r_esi;
    /* 008996f2: call 0x8981f9 */ r_esp -= 4; W32(r_esp, 0x8996f7u); f_008981f9();
    /* 008996f7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 008996f9: jge 0x899727 */ if ((fS==fO)) goto L_00899727;
L_008996fb:; BB(0x008996fb);
    /* 008996fb: mov ecx, esi */ r_ecx = r_esi;
    /* 008996fd: call 0x89878b */ r_esp -= 4; W32(r_esp, 0x899702u); f_0089878b();
    /* 00899702: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00899704: jge 0x899727 */ if ((fS==fO)) goto L_00899727;
L_00899706:; BB(0x00899706);
    /* 00899706: mov ecx, esi */ r_ecx = r_esi;
    /* 00899708: call 0x898b71 */ r_esp -= 4; W32(r_esp, 0x89970du); f_00898b71();
    /* 0089970d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0089970f: jge 0x899727 */ if ((fS==fO)) goto L_00899727;
L_00899711:; BB(0x00899711);
    /* 00899711: mov ecx, esi */ r_ecx = r_esi;
    /* 00899713: call 0x8992a2 */ r_esp -= 4; W32(r_esp, 0x899718u); f_008992a2();
    /* 00899718: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0089971a: jge 0x899727 */ if ((fS==fO)) goto L_00899727;
L_0089971c:; BB(0x0089971c);
    /* 0089971c: mov ecx, esi */ r_ecx = r_esi;
    /* 0089971e: call 0x8961d0 */ r_esp -= 4; W32(r_esp, 0x899723u); f_008961d0();
    /* 00899723: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00899725: jl 0x89972b */ if ((fS!=fO)) goto L_0089972b;
L_00899727:; BB(0x00899727);
    /* 00899727: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00899729: jmp 0x899730 */ goto L_00899730;
L_0089972b:; BB(0x0089972b);
    /* 0089972b: mov ebx, 0x80004005 */ r_ebx = 0x80004005u;
L_00899730:; BB(0x00899730);
    /* 00899730: mov ecx, dword ptr [esi + 4] */ r_ecx = R32((u32)(r_esi+0x4u));
    /* 00899733: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00899735: je 0x899741 */ if (fZ) goto L_00899741;
L_00899737:; BB(0x00899737);
    /* 00899737: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00899739: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0089973b: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x89973du); call_ind(t); }
    /* 0089973d: and dword ptr [esi + 4], 0 */ { u32 ad = (u32)(r_esi+0x4u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
L_00899741:; BB(0x00899741);
    /* 00899741: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 00899743: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00899745: je 0x899750 */ if (fZ) goto L_00899750;
L_00899747:; BB(0x00899747);
    /* 00899747: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00899749: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0089974b: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x89974du); call_ind(t); }
    /* 0089974d: and dword ptr [esi], 0 */ { u32 ad = (u32)(r_esi);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_00899750:; BB(0x00899750);
    /* 00899750: mov eax, ebx */ r_eax = r_ebx;
    /* 00899752: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00899753: jmp 0x89975a */ goto L_0089975a;
L_00899755:; BB(0x00899755);
    /* 00899755: mov eax, 0x8876086c */ r_eax = 0x8876086cu;
L_0089975a:; BB(0x0089975a);
    /* 0089975a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0089975b: ret 0xc */ FN_RET(0x00899644); r_esp += 16; return;
}

void f_0089976e(void) /* sub_89976E */
{
    FN_ENTER(0x0089976e);
    /* 0089976e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089976f: mov esi, ecx */ r_esi = r_ecx;
    /* 00899771: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 00899774: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00899775: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00899777: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00899779: jne 0x899782 */ if (!fZ) goto L_00899782;
L_0089977b:; BB(0x0089977b);
    /* 0089977b: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 0089977e: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00899780: je 0x899788 */ if (fZ) goto L_00899788;
L_00899782:; BB(0x00899782);
    /* 00899782: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00899784: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00899785: call dword ptr [ecx + 0x28] */ { u32 t = R32((u32)(r_ecx+0x28u)); r_esp -= 4; W32(r_esp, 0x899788u); call_ind(t); }
L_00899788:; BB(0x00899788);
    /* 00899788: mov edx, dword ptr [esi + 4] */ r_edx = R32((u32)(r_esi+0x4u));
    /* 0089978b: cmp edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089978d: je 0x8997af */ if (fZ) goto L_008997af;
L_0089978f:; BB(0x0089978f);
    /* 0089978f: mov ecx, dword ptr [esi + 8] */ r_ecx = R32((u32)(r_esi+0x8u));
    /* 00899792: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00899794: je 0x8997af */ if (fZ) goto L_008997af;
L_00899796:; BB(0x00899796);
    /* 00899796: mov eax, dword ptr [esi + 0xc] */ r_eax = R32((u32)(r_esi+0xcu));
    /* 00899799: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089979b: je 0x8997af */ if (fZ) goto L_008997af;
L_0089979d:; BB(0x0089979d);
    /* 0089979d: test byte ptr [esi], 1 */ {  u32 a = R8((u32)(r_esi)); u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008997a0: jne 0x8997af */ if (!fZ) goto L_008997af;
L_008997a2:; BB(0x008997a2);
    /* 008997a2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008997a3: mov ebx, dword ptr [eax] */ r_ebx = R32((u32)(r_eax));
    /* 008997a5: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008997a6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008997a7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008997a8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008997a9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008997aa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008997ab: call dword ptr [ebx + 0x70] */ { u32 t = R32((u32)(r_ebx+0x70u)); r_esp -= 4; W32(r_esp, 0x8997aeu); call_ind(t); }
    /* 008997ae: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
L_008997af:; BB(0x008997af);
    /* 008997af: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 008997b2: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008997b4: je 0x8997bf */ if (fZ) goto L_008997bf;
L_008997b6:; BB(0x008997b6);
    /* 008997b6: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 008997b8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008997b9: call dword ptr [ecx + 8] */ { u32 t = R32((u32)(r_ecx+0x8u)); r_esp -= 4; W32(r_esp, 0x8997bcu); call_ind(t); }
    /* 008997bc: mov dword ptr [esi + 8], edi */ W32((u32)(r_esi+0x8u), r_edi);
L_008997bf:; BB(0x008997bf);
    /* 008997bf: mov eax, dword ptr [esi + 0xc] */ r_eax = R32((u32)(r_esi+0xcu));
    /* 008997c2: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008997c4: je 0x8997cf */ if (fZ) goto L_008997cf;
L_008997c6:; BB(0x008997c6);
    /* 008997c6: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 008997c8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008997c9: call dword ptr [ecx + 8] */ { u32 t = R32((u32)(r_ecx+0x8u)); r_esp -= 4; W32(r_esp, 0x8997ccu); call_ind(t); }
    /* 008997cc: mov dword ptr [esi + 0xc], edi */ W32((u32)(r_esi+0xcu), r_edi);
L_008997cf:; BB(0x008997cf);
    /* 008997cf: mov dword ptr [esi + 4], edi */ W32((u32)(r_esi+0x4u), r_edi);
    /* 008997d2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008997d3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008997d5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008997d6: ret  */ FN_RET(0x0089976e); r_esp += 4; return;
}

void f_008997d7(void) /* sub_8997D7 */
{
    FN_ENTER(0x008997d7);
    /* 008997d7: mov eax, ecx */ r_eax = r_ecx;
    /* 008997d9: and dword ptr [eax], 0 */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008997dc: ret  */ FN_RET(0x008997d7); r_esp += 4; return;
}

void f_008997dd(void) /* sub_8997DD */
{
    FN_ENTER(0x008997dd);
    /* 008997dd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008997de: mov esi, ecx */ r_esi = r_ecx;
    /* 008997e0: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008997e2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008997e4: je 0x8997ec */ if (fZ) goto L_008997ec;
L_008997e6:; BB(0x008997e6);
    /* 008997e6: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 008997e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008997e9: call dword ptr [ecx + 0x28] */ { u32 t = R32((u32)(r_ecx+0x28u)); r_esp -= 4; W32(r_esp, 0x8997ecu); call_ind(t); }
L_008997ec:; BB(0x008997ec);
    /* 008997ec: and dword ptr [esi], 0 */ { u32 ad = (u32)(r_esi);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008997ef: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008997f1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008997f2: ret  */ FN_RET(0x008997dd); r_esp += 4; return;
}

void f_008997f8(void) /* sub_8997F8 */
{
    FN_ENTER(0x008997f8);
    /* 008997f8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008997f9: mov ebp, esp */ r_ebp = r_esp;
    /* 008997fb: sub esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008997fe: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008997ff: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00899800: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00899801: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00899804: call 0x89976e */ r_esp -= 4; W32(r_esp, 0x899809u); f_0089976e();
    /* 00899809: mov ebx, dword ptr [ebp + 0xc] */ r_ebx = R32((u32)(r_ebp+0xcu));
    /* 0089980c: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0089980e: lea ecx, [ebp - 0x60] */ r_ecx = (u32)(r_ebp+0xffffffa0u);
    /* 00899811: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00899812: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00899813: call dword ptr [eax + 0x20] */ { u32 t = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, 0x899816u); call_ind(t); }
    /* 00899816: mov esi, dword ptr [ebp + 0x14] */ r_esi = R32((u32)(r_ebp+0x14u));
    /* 00899819: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0089981b: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089981d: je 0x89988b */ if (fZ) goto L_0089988b;
L_0089981f:; BB(0x0089981f);
    /* 0089981f: lea edi, [ebp - 0x30] */ r_edi = (u32)(r_ebp+0xffffffd0u);
    /* 00899822: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 00899823: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 00899824: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 00899825: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 00899826: cmp dword ptr [ebp - 0x30], edx */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00899829: jl 0x899881 */ if ((fS!=fO)) goto L_00899881;
L_0089982b:; BB(0x0089982b);
    /* 0089982b: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0089982e: cmp eax, dword ptr [ebp - 0x48] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffb8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00899831: ja 0x899881 */ if ((!fC&&!fZ)) goto L_00899881;
L_00899833:; BB(0x00899833);
    /* 00899833: cmp dword ptr [ebp - 0x30], eax */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00899836: jg 0x899881 */ if ((!fZ&&fS==fO)) goto L_00899881;
L_00899838:; BB(0x00899838);
    /* 00899838: cmp dword ptr [ebp - 0x2c], edx */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0089983b: jl 0x899881 */ if ((fS!=fO)) goto L_00899881;
L_0089983d:; BB(0x0089983d);
    /* 0089983d: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00899840: cmp ecx, dword ptr [ebp - 0x44] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffbcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00899843: ja 0x899881 */ if ((!fC&&!fZ)) goto L_00899881;
L_00899845:; BB(0x00899845);
    /* 00899845: cmp dword ptr [ebp - 0x2c], ecx */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00899848: jg 0x899881 */ if ((!fZ&&fS==fO)) goto L_00899881;
L_0089984a:; BB(0x0089984a);
    /* 0089984a: cmp dword ptr [ebp - 0x30], edx */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089984d: jne 0x899861 */ if (!fZ) goto L_00899861;
L_0089984f:; BB(0x0089984f);
    /* 0089984f: cmp eax, dword ptr [ebp - 0x48] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffb8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00899852: jne 0x899861 */ if (!fZ) goto L_00899861;
L_00899854:; BB(0x00899854);
    /* 00899854: cmp dword ptr [ebp - 0x2c], edx */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00899857: jne 0x899861 */ if (!fZ) goto L_00899861;
L_00899859:; BB(0x00899859);
    /* 00899859: cmp ecx, dword ptr [ebp - 0x44] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffbcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089985c: mov dword ptr [ebp + 0x14], edx */ W32((u32)(r_ebp+0x14u), r_edx);
    /* 0089985f: je 0x899868 */ if (fZ) goto L_00899868;
L_00899861:; BB(0x00899861);
    /* 00899861: mov dword ptr [ebp + 0x14], 1 */ W32((u32)(r_ebp+0x14u), 0x1u);
L_00899868:; BB(0x00899868);
    /* 00899868: test byte ptr [ebp + 0x1c], 1 */ {  u32 a = R8((u32)(r_ebp+0x1cu)); u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0089986c: jne 0x89987c */ if (!fZ) goto L_0089987c;
L_0089986e:; BB(0x0089986e);
    /* 0089986e: cmp dword ptr [ebp + 0x14], edx */ {  u32 a = R32((u32)(r_ebp+0x14u)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00899871: jne 0x89987c */ if (!fZ) goto L_0089987c;
L_00899873:; BB(0x00899873);
    /* 00899873: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 0089987a: jmp 0x8998ab */ goto L_008998ab;
L_0089987c:; BB(0x0089987c);
    /* 0089987c: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0089987f: jmp 0x8998ab */ goto L_008998ab;
L_00899881:; BB(0x00899881);
    /* 00899881: mov eax, 0x8876086c */ r_eax = 0x8876086cu;
    /* 00899886: jmp 0x899bb3 */ goto L_00899bb3;
L_0089988b:; BB(0x0089988b);
    /* 0089988b: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 0089988e: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00899891: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00899894: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00899897: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 0089989a: not eax */ r_eax = ~r_eax;
    /* 0089989c: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0089989f: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 008998a2: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 008998a5: mov dword ptr [ebp + 0x14], edx */ W32((u32)(r_ebp+0x14u), r_edx);
    /* 008998a8: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_008998ab:; BB(0x008998ab);
    /* 008998ab: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 008998ae: and eax, 0x10000 */ {  u32 a = r_eax; u32 b = 0x10000u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 008998b3: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 008998b6: jne 0x899920 */ if (!fZ) goto L_00899920;
L_008998b8:; BB(0x008998b8);
    /* 008998b8: cmp dword ptr [ebp - 0x54], edx */ {  u32 a = R32((u32)(r_ebp+0xffffffacu)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008998bb: jne 0x8999b8 */ if (!fZ) goto L_008999b8;
L_008998c1:; BB(0x008998c1);
    /* 008998c1: test byte ptr [ebp - 0x57], 2 */ {  u32 a = R8((u32)(r_ebp+0xffffffa9u)); u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008998c5: jne 0x8999b8 */ if (!fZ) goto L_008999b8;
L_008998cb:; BB(0x008998cb);
    /* 008998cb: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 008998cd: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008998ce: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008998cf: call 0x89414b */ r_esp -= 4; W32(r_esp, 0x8998d4u); f_0089414b();
    /* 008998d4: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 008998d6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008998d7: lea ecx, [ebp - 0x14] */ r_ecx = (u32)(r_ebp+0xffffffecu);
    /* 008998da: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008998db: push 0x99dacc */ { u32 v = 0x99daccu; r_esp -= 4; W32(r_esp, v); }
    /* 008998e0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008998e1: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x8998e4u); call_ind(t); }
    /* 008998e4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 008998e6: jl 0x8998fe */ if ((fS!=fO)) goto L_008998fe;
L_008998e8:; BB(0x008998e8);
    /* 008998e8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 008998eb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008998ed: mov dword ptr [ebp - 4], esi */ W32((u32)(r_ebp+0xfffffffcu), r_esi);
    /* 008998f0: je 0x89990e */ if (fZ) goto L_0089990e;
L_008998f2:; BB(0x008998f2);
    /* 008998f2: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 008998f4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008998f5: call dword ptr [ecx + 8] */ { u32 t = R32((u32)(r_ecx+0x8u)); r_esp -= 4; W32(r_esp, 0x8998f8u); call_ind(t); }
    /* 008998f8: and dword ptr [ebp - 0x14], 0 */ { u32 ad = (u32)(r_ebp+0xffffffecu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008998fc: jmp 0x89990e */ goto L_0089990e;
L_008998fe:; BB(0x008998fe);
    /* 008998fe: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00899901: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 00899904: shr eax, 0x1a */ { u32 c = (26u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00899907: not eax */ r_eax = ~r_eax;
    /* 00899909: and eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0089990b: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0089990e:; BB(0x0089990e);
    /* 0089990e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00899910: call 0x89414b */ r_esp -= 4; W32(r_esp, 0x899915u); f_0089414b();
    /* 00899915: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00899919: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0089991a: je 0x8999b6 */ if (fZ) goto L_008999b6;
L_00899920:; BB(0x00899920);
    /* 00899920: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 00899923: cmp eax, 0x31545844 */ {  u32 a = r_eax; u32 b = 0x31545844u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00899928: je 0x89994e */ if (fZ) goto L_0089994e;
L_0089992a:; BB(0x0089992a);
    /* 0089992a: cmp eax, 0x32545844 */ {  u32 a = r_eax; u32 b = 0x32545844u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089992f: je 0x89994e */ if (fZ) goto L_0089994e;
L_00899931:; BB(0x00899931);
    /* 00899931: cmp eax, 0x33545844 */ {  u32 a = r_eax; u32 b = 0x33545844u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00899936: je 0x89994e */ if (fZ) goto L_0089994e;
L_00899938:; BB(0x00899938);
    /* 00899938: cmp eax, 0x34545844 */ {  u32 a = r_eax; u32 b = 0x34545844u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089993d: je 0x89994e */ if (fZ) goto L_0089994e;
L_0089993f:; BB(0x0089993f);
    /* 0089993f: cmp eax, 0x35545844 */ {  u32 a = r_eax; u32 b = 0x35545844u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00899944: je 0x89994e */ if (fZ) goto L_0089994e;
L_00899946:; BB(0x00899946);
    /* 00899946: mov ebx, dword ptr [ebp - 0x48] */ r_ebx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00899949: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 0089994c: jmp 0x899960 */ goto L_00899960;
L_0089994e:; BB(0x0089994e);
    /* 0089994e: mov ebx, dword ptr [ebp - 0x48] */ r_ebx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00899951: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00899954: add ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00899957: add eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0089995a: and ebx, 0xfffffffc */ {  u32 a = r_ebx; u32 b = 0xfffffffcu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 0089995d: and eax, 0xfffffffc */ {  u32 a = r_eax; u32 b = 0xfffffffcu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
L_00899960:; BB(0x00899960);
    /* 00899960: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 00899963: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00899966: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00899969: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0089996b: lea esi, [edi + 0xc] */ r_esi = (u32)(r_edi+0xcu);
    /* 0089996e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089996f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00899970: call dword ptr [ecx + 0xc] */ { u32 t = R32((u32)(r_ecx+0xcu)); r_esp -= 4; W32(r_esp, 0x899973u); call_ind(t); }
    /* 00899973: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00899975: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00899977: add edi, 8 */ {  u32 a = r_edi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0089997a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0089997b: push dword ptr [ebp - 0x60] */ { u32 v = R32((u32)(r_ebp+0xffffffa0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0089997e: push dword ptr [ebp - 0x10] */ { u32 v = R32((u32)(r_ebp+0xfffffff0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00899981: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00899982: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00899983: call dword ptr [ecx + 0x6c] */ { u32 t = R32((u32)(r_ecx+0x6cu)); r_esp -= 4; W32(r_esp, 0x899986u); call_ind(t); }
    /* 00899986: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00899988: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0089998a: jl 0x899bb3 */ if ((fS!=fO)) goto L_00899bb3;
L_00899990:; BB(0x00899990);
    /* 00899990: cmp dword ptr [ebp - 8], ebx */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00899993: jne 0x8999ad */ if (!fZ) goto L_008999ad;
L_00899995:; BB(0x00899995);
    /* 00899995: mov esi, dword ptr [esi] */ r_esi = R32((u32)(r_esi));
    /* 00899997: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00899999: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0089999a: push dword ptr [edi] */ { u32 v = R32((u32)(r_edi)); r_esp -= 4; W32(r_esp, v); }
    /* 0089999c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0089999d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0089999e: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 008999a1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008999a2: call dword ptr [eax + 0x70] */ { u32 t = R32((u32)(r_eax+0x70u)); r_esp -= 4; W32(r_esp, 0x8999a5u); call_ind(t); }
    /* 008999a5: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008999a7: jl 0x899bb3 */ if ((fS!=fO)) goto L_00899bb3;
L_008999ad:; BB(0x008999ad);
    /* 008999ad: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 008999af: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 008999b2: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008999b4: jmp 0x8999bb */ goto L_008999bb;
L_008999b6:; BB(0x008999b6);
    /* 008999b6: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_008999b8:; BB(0x008999b8);
    /* 008999b8: mov dword ptr [ebp - 0x10], ebx */ W32((u32)(r_ebp+0xfffffff0u), r_ebx);
L_008999bb:; BB(0x008999bb);
    /* 008999bb: movzx ebx, byte ptr [ebp + 0x1c] */ r_ebx = (u32)R8((u32)(r_ebp+0x1cu));
    /* 008999bf: and ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 008999c2: or ebx, 0x80 */ {  u32 a = r_ebx; u32 b = 0x80u; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 008999c8: shl ebx, 4 */ { u32 c = (4u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 008999cb: cmp dword ptr [ebp - 8], edx */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008999ce: je 0x899a3d */ if (fZ) goto L_00899a3d;
L_008999d0:; BB(0x008999d0);
    /* 008999d0: cmp dword ptr [ebp - 4], edx */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008999d3: jne 0x899a3d */ if (!fZ) goto L_00899a3d;
L_008999d5:; BB(0x008999d5);
    /* 008999d5: test byte ptr [ebp - 0x57], 2 */ {  u32 a = R8((u32)(r_ebp+0xffffffa9u)); u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008999d9: je 0x899a3d */ if (fZ) goto L_00899a3d;
L_008999db:; BB(0x008999db);
    /* 008999db: test byte ptr [ebp + 0x1e], 2 */ {  u32 a = R8((u32)(r_ebp+0x1eu)); u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008999df: je 0x8999ec */ if (fZ) goto L_008999ec;
L_008999e1:; BB(0x008999e1);
    /* 008999e1: or ebx, 0x2000 */ {  u32 a = r_ebx; u32 b = 0x2000u; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 008999e7: jmp 0x899bf0 */ goto L_00899bf0;
L_008999ec:; BB(0x008999ec);
    /* 008999ec: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008999ee: call 0x89414b */ r_esp -= 4; W32(r_esp, 0x8999f3u); f_0089414b();
    /* 008999f3: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 008999f6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008999f7: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 008999f9: lea edx, [ebp - 0xc] */ r_edx = (u32)(r_ebp+0xfffffff4u);
    /* 008999fc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008999fd: push 0x99dabc */ { u32 v = 0x99dabcu; r_esp -= 4; W32(r_esp, v); }
    /* 00899a02: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00899a03: call dword ptr [ecx + 0x1c] */ { u32 t = R32((u32)(r_ecx+0x1cu)); r_esp -= 4; W32(r_esp, 0x899a06u); call_ind(t); }
    /* 00899a06: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00899a08: jl 0x899a33 */ if ((fS!=fO)) goto L_00899a33;
L_00899a0a:; BB(0x00899a0a);
    /* 00899a0a: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00899a0d: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00899a0f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00899a10: call dword ptr [ecx + 0x34] */ { u32 t = R32((u32)(r_ecx+0x34u)); r_esp -= 4; W32(r_esp, 0x899a13u); call_ind(t); }
    /* 00899a13: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00899a16: jne 0x899a22 */ if (!fZ) goto L_00899a22;
L_00899a18:; BB(0x00899a18);
    /* 00899a18: or ebx, 0x2000 */ {  u32 a = r_ebx; u32 b = 0x2000u; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 00899a1e: and dword ptr [ebp + 0x14], 0 */ { u32 ad = (u32)(r_ebp+0x14u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
L_00899a22:; BB(0x00899a22);
    /* 00899a22: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00899a25: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00899a27: je 0x899a33 */ if (fZ) goto L_00899a33;
L_00899a29:; BB(0x00899a29);
    /* 00899a29: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00899a2b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00899a2c: call dword ptr [ecx + 8] */ { u32 t = R32((u32)(r_ecx+0x8u)); r_esp -= 4; W32(r_esp, 0x899a2fu); call_ind(t); }
    /* 00899a2f: and dword ptr [ebp - 0xc], 0 */ { u32 ad = (u32)(r_ebp+0xfffffff4u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
L_00899a33:; BB(0x00899a33);
    /* 00899a33: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00899a35: call 0x89414b */ r_esp -= 4; W32(r_esp, 0x899a3au); f_0089414b();
    /* 00899a3a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00899a3b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_00899a3d:; BB(0x00899a3d);
    /* 00899a3d: cmp dword ptr [ebp + 0x14], edx */ {  u32 a = R32((u32)(r_ebp+0x14u)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00899a40: je 0x899bf0 */ if (fZ) goto L_00899bf0;
L_00899a46:; BB(0x00899a46);
    /* 00899a46: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 00899a49: cmp eax, 0x31545844 */ {  u32 a = r_eax; u32 b = 0x31545844u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00899a4e: je 0x899ac5 */ if (fZ) goto L_00899ac5;
L_00899a50:; BB(0x00899a50);
    /* 00899a50: cmp eax, 0x32545844 */ {  u32 a = r_eax; u32 b = 0x32545844u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00899a55: je 0x899ac5 */ if (fZ) goto L_00899ac5;
L_00899a57:; BB(0x00899a57);
    /* 00899a57: cmp eax, 0x32595559 */ {  u32 a = r_eax; u32 b = 0x32595559u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00899a5c: je 0x899a89 */ if (fZ) goto L_00899a89;
L_00899a5e:; BB(0x00899a5e);
    /* 00899a5e: cmp eax, 0x33545844 */ {  u32 a = r_eax; u32 b = 0x33545844u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00899a63: je 0x899ac5 */ if (fZ) goto L_00899ac5;
L_00899a65:; BB(0x00899a65);
    /* 00899a65: cmp eax, 0x34545844 */ {  u32 a = r_eax; u32 b = 0x34545844u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00899a6a: je 0x899ac5 */ if (fZ) goto L_00899ac5;
L_00899a6c:; BB(0x00899a6c);
    /* 00899a6c: cmp eax, 0x35545844 */ {  u32 a = r_eax; u32 b = 0x35545844u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00899a71: je 0x899ac5 */ if (fZ) goto L_00899ac5;
L_00899a73:; BB(0x00899a73);
    /* 00899a73: cmp eax, 0x59565955 */ {  u32 a = r_eax; u32 b = 0x59565955u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00899a78: je 0x899a89 */ if (fZ) goto L_00899a89;
L_00899a7a:; BB(0x00899a7a);
    /* 00899a7a: lea esi, [ebp - 0x30] */ r_esi = (u32)(r_ebp+0xffffffd0u);
    /* 00899a7d: lea edi, [ebp - 0x40] */ r_edi = (u32)(r_ebp+0xffffffc0u);
    /* 00899a80: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 00899a81: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 00899a82: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 00899a83: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 00899a84: jmp 0x899be3 */ goto L_00899be3;
L_00899a89:; BB(0x00899a89);
    /* 00899a89: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00899a8c: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00899a8f: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00899a92: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00899a95: and ecx, 0xfffffffe */ {  u32 a = r_ecx; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00899a98: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00899a99: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00899a9c: cmp eax, dword ptr [ebp - 0x48] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffb8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00899a9f: mov dword ptr [ebp - 0x40], ecx */ W32((u32)(r_ebp+0xffffffc0u), r_ecx);
    /* 00899aa2: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00899aa5: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 00899aa8: mov dword ptr [ebp - 0x34], esi */ W32((u32)(r_ebp+0xffffffccu), r_esi);
    /* 00899aab: jbe 0x899ab3 */ if ((fC||fZ)) goto L_00899ab3;
L_00899aad:; BB(0x00899aad);
    /* 00899aad: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 00899ab0: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
L_00899ab3:; BB(0x00899ab3);
    /* 00899ab3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00899ab5: jne 0x899b24 */ if (!fZ) goto L_00899b24;
L_00899ab7:; BB(0x00899ab7);
    /* 00899ab7: cmp eax, dword ptr [ebp - 0x48] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffb8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00899aba: jne 0x899b24 */ if (!fZ) goto L_00899b24;
L_00899abc:; BB(0x00899abc);
    /* 00899abc: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00899abe: jne 0x899b24 */ if (!fZ) goto L_00899b24;
L_00899ac0:; BB(0x00899ac0);
    /* 00899ac0: cmp esi, dword ptr [ebp - 0x44] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0xffffffbcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00899ac3: jmp 0x899b1e */ goto L_00899b1e;
L_00899ac5:; BB(0x00899ac5);
    /* 00899ac5: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00899ac8: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00899acb: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00899ace: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 00899ad1: push -4 */ { u32 v = 0xfffffffcu; r_esp -= 4; W32(r_esp, v); }
    /* 00899ad3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00899ad4: add eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00899ad7: add ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00899ada: and edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00899adc: and eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00899ade: and esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 00899ae0: and ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00899ae2: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00899ae6: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 00899ae9: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00899aec: mov dword ptr [ebp - 0x3c], esi */ W32((u32)(r_ebp+0xffffffc4u), r_esi);
    /* 00899aef: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 00899af2: jne 0x899bba */ if (!fZ) goto L_00899bba;
L_00899af8:; BB(0x00899af8);
    /* 00899af8: cmp eax, dword ptr [ebp - 0x48] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffb8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00899afb: jbe 0x899b03 */ if ((fC||fZ)) goto L_00899b03;
L_00899afd:; BB(0x00899afd);
    /* 00899afd: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 00899b00: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
L_00899b03:; BB(0x00899b03);
    /* 00899b03: cmp ecx, dword ptr [ebp - 0x44] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffbcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00899b06: jbe 0x899b0e */ if ((fC||fZ)) goto L_00899b0e;
L_00899b08:; BB(0x00899b08);
    /* 00899b08: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00899b0b: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
L_00899b0e:; BB(0x00899b0e);
    /* 00899b0e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00899b10: jne 0x899b24 */ if (!fZ) goto L_00899b24;
L_00899b12:; BB(0x00899b12);
    /* 00899b12: cmp eax, dword ptr [ebp - 0x48] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffb8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00899b15: jne 0x899b24 */ if (!fZ) goto L_00899b24;
L_00899b17:; BB(0x00899b17);
    /* 00899b17: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00899b19: jne 0x899b24 */ if (!fZ) goto L_00899b24;
L_00899b1b:; BB(0x00899b1b);
    /* 00899b1b: cmp ecx, dword ptr [ebp - 0x44] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffbcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
L_00899b1e:; BB(0x00899b1e);
    /* 00899b1e: je 0x899bee */ if (fZ) goto L_00899bee;
L_00899b24:; BB(0x00899b24);
    /* 00899b24: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00899b27: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00899b29: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00899b2a: lea edx, [ebp - 0x40] */ r_edx = (u32)(r_ebp+0xffffffc0u);
    /* 00899b2d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00899b2e: lea edx, [ebp - 0x20] */ r_edx = (u32)(r_ebp+0xffffffe0u);
    /* 00899b31: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00899b32: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00899b33: call dword ptr [ecx + 0x24] */ { u32 t = R32((u32)(r_ecx+0x24u)); r_esp -= 4; W32(r_esp, 0x899b36u); call_ind(t); }
    /* 00899b36: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00899b38: jl 0x899bb3 */ if ((fS!=fO)) goto L_00899bb3;
L_00899b3a:; BB(0x00899b3a);
    /* 00899b3a: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 00899b3d: sub dword ptr [ebp - 0x30], eax */ { u32 ad = (u32)(r_ebp+0xffffffd0u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 00899b40: sub dword ptr [ebp - 0x28], eax */ { u32 ad = (u32)(r_ebp+0xffffffd8u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 00899b43: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 00899b46: sub dword ptr [ebp - 0x2c], eax */ { u32 ad = (u32)(r_ebp+0xffffffd4u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 00899b49: sub dword ptr [ebp - 0x24], eax */ { u32 ad = (u32)(r_ebp+0xffffffdcu);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 00899b4c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_00899b4e:; BB(0x00899b4e);
    /* 00899b4e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00899b51: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00899b54: mov dword ptr [eax + 0xc], ecx */ W32((u32)(r_eax+0xcu), r_ecx);
    /* 00899b57: mov dword ptr [eax + 0x10], ecx */ W32((u32)(r_eax+0x10u), r_ecx);
    /* 00899b5a: mov dword ptr [eax + 0x14], ecx */ W32((u32)(r_eax+0x14u), r_ecx);
    /* 00899b5d: mov dword ptr [eax + 0x20], ecx */ W32((u32)(r_eax+0x20u), r_ecx);
    /* 00899b60: mov dword ptr [eax + 0x38], ecx */ W32((u32)(r_eax+0x38u), r_ecx);
    /* 00899b63: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 00899b65: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 00899b68: lea edi, [eax + 0x28] */ r_edi = (u32)(r_eax+0x28u);
    /* 00899b6b: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 00899b6e: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00899b71: lea esi, [ebp - 0x30] */ r_esi = (u32)(r_ebp+0xffffffd0u);
    /* 00899b74: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 00899b75: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00899b77: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00899b78: mov dword ptr [eax + 0x3c], ecx */ W32((u32)(r_eax+0x3cu), r_ecx);
    /* 00899b7b: mov dword ptr [eax + 0x40], ecx */ W32((u32)(r_eax+0x40u), r_ecx);
    /* 00899b7e: mov ecx, dword ptr [ebp + 0x18] */ r_ecx = R32((u32)(r_ebp+0x18u));
    /* 00899b81: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
    /* 00899b84: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00899b87: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 00899b88: mov dword ptr [eax + 0x44], ecx */ W32((u32)(r_eax+0x44u), r_ecx);
    /* 00899b8b: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00899b8e: mov dword ptr [eax + 0x18], edx */ W32((u32)(r_eax+0x18u), r_edx);
    /* 00899b91: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00899b94: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 00899b95: mov dword ptr [eax + 0x48], ecx */ W32((u32)(r_eax+0x48u), r_ecx);
    /* 00899b98: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00899b9b: mov dword ptr [eax + 0x1c], edx */ W32((u32)(r_eax+0x1cu), r_edx);
    /* 00899b9e: mov dword ptr [eax + 0x24], 1 */ W32((u32)(r_eax+0x24u), 0x1u);
    /* 00899ba5: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00899ba8: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 00899ba9: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 00899bac: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 00899baf: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 00899bb1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_00899bb3:; BB(0x00899bb3);
    /* 00899bb3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00899bb4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00899bb5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00899bb6: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 00899bb7: ret 0x18 */ FN_RET(0x008997f8); r_esp += 28; return;
L_00899bba:; BB(0x00899bba);
    /* 00899bba: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00899bbc: jne 0x899bda */ if (!fZ) goto L_00899bda;
L_00899bbe:; BB(0x00899bbe);
    /* 00899bbe: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00899bc1: add edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00899bc4: and edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00899bc6: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00899bc8: jne 0x899bda */ if (!fZ) goto L_00899bda;
L_00899bca:; BB(0x00899bca);
    /* 00899bca: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00899bcc: jne 0x899bda */ if (!fZ) goto L_00899bda;
L_00899bce:; BB(0x00899bce);
    /* 00899bce: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00899bd1: add eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00899bd4: and eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00899bd6: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00899bd8: je 0x899bee */ if (fZ) goto L_00899bee;
L_00899bda:; BB(0x00899bda);
    /* 00899bda: mov dword ptr [ebp + 0x14], 1 */ W32((u32)(r_ebp+0x14u), 0x1u);
    /* 00899be1: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_00899be3:; BB(0x00899be3);
    /* 00899be3: cmp dword ptr [ebp + 0x14], edx */ {  u32 a = R32((u32)(r_ebp+0x14u)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00899be6: jne 0x899b24 */ if (!fZ) goto L_00899b24;
L_00899bec:; BB(0x00899bec);
    /* 00899bec: jmp 0x899bf0 */ goto L_00899bf0;
L_00899bee:; BB(0x00899bee);
    /* 00899bee: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_00899bf0:; BB(0x00899bf0);
    /* 00899bf0: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00899bf3: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00899bf5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00899bf6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00899bf7: lea edx, [ebp - 0x20] */ r_edx = (u32)(r_ebp+0xffffffe0u);
    /* 00899bfa: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00899bfb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00899bfc: call dword ptr [ecx + 0x24] */ { u32 t = R32((u32)(r_ecx+0x24u)); r_esp -= 4; W32(r_esp, 0x899bffu); call_ind(t); }
    /* 00899bff: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00899c01: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00899c03: jge 0x899b4e */ if ((fS==fO)) goto L_00899b4e;
L_00899c09:; BB(0x00899c09);
    /* 00899c09: jmp 0x899bb3 */ goto L_00899bb3;
}

void f_00899c10(void) /* sub_899C10 */
{
    FN_ENTER(0x00899c10);
    /* 00899c10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00899c11: mov ebp, esp */ r_ebp = r_esp;
    /* 00899c13: sub esp, 0x68 */ {  u32 a = r_esp; u32 b = 0x68u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00899c16: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00899c17: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00899c18: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00899c19: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00899c1b: cmp dword ptr [ecx], edi */ {  u32 a = R32((u32)(r_ecx)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00899c1d: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00899c20: je 0x899c27 */ if (fZ) goto L_00899c27;
L_00899c22:; BB(0x00899c22);
    /* 00899c22: call 0x8997dd */ r_esp -= 4; W32(r_esp, 0x899c27u); f_008997dd();
L_00899c27:; BB(0x00899c27);
    /* 00899c27: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00899c2a: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00899c2c: lea edx, [ebp - 0x68] */ r_edx = (u32)(r_ebp+0xffffff98u);
    /* 00899c2f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00899c30: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00899c31: call dword ptr [ecx + 0x20] */ { u32 t = R32((u32)(r_ecx+0x20u)); r_esp -= 4; W32(r_esp, 0x899c34u); call_ind(t); }
    /* 00899c34: mov esi, dword ptr [ebp + 0x14] */ r_esi = R32((u32)(r_ebp+0x14u));
    /* 00899c37: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00899c39: je 0x899cb8 */ if (fZ) goto L_00899cb8;
L_00899c3b:; BB(0x00899c3b);
    /* 00899c3b: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00899c3d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00899c3e: lea edi, [ebp - 0x30] */ r_edi = (u32)(r_ebp+0xffffffd0u);
    /* 00899c41: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 00899c43: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00899c46: cmp ecx, dword ptr [ebp - 0x54] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffacu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00899c49: ja 0x899cf0 */ if ((!fC&&!fZ)) goto L_00899cf0;
L_00899c4f:; BB(0x00899c4f);
    /* 00899c4f: cmp dword ptr [ebp - 0x30], ecx */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00899c52: ja 0x899cf0 */ if ((!fC&&!fZ)) goto L_00899cf0;
L_00899c58:; BB(0x00899c58);
    /* 00899c58: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00899c5b: cmp eax, dword ptr [ebp - 0x50] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffb0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00899c5e: ja 0x899cf0 */ if ((!fC&&!fZ)) goto L_00899cf0;
L_00899c64:; BB(0x00899c64);
    /* 00899c64: cmp dword ptr [ebp - 0x2c], eax */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00899c67: ja 0x899cf0 */ if ((!fC&&!fZ)) goto L_00899cf0;
L_00899c6d:; BB(0x00899c6d);
    /* 00899c6d: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00899c70: cmp ebx, dword ptr [ebp - 0x4c] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp+0xffffffb4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00899c73: ja 0x899cf0 */ if ((!fC&&!fZ)) goto L_00899cf0;
L_00899c75:; BB(0x00899c75);
    /* 00899c75: cmp dword ptr [ebp - 0x20], ebx */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00899c78: ja 0x899cf0 */ if ((!fC&&!fZ)) goto L_00899cf0;
L_00899c7a:; BB(0x00899c7a);
    /* 00899c7a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00899c7c: cmp dword ptr [ebp - 0x30], edx */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00899c7f: jne 0x899c9d */ if (!fZ) goto L_00899c9d;
L_00899c81:; BB(0x00899c81);
    /* 00899c81: cmp ecx, dword ptr [ebp - 0x54] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffacu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00899c84: jne 0x899c9d */ if (!fZ) goto L_00899c9d;
L_00899c86:; BB(0x00899c86);
    /* 00899c86: cmp dword ptr [ebp - 0x2c], edx */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00899c89: jne 0x899c9d */ if (!fZ) goto L_00899c9d;
L_00899c8b:; BB(0x00899c8b);
    /* 00899c8b: cmp eax, dword ptr [ebp - 0x50] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffb0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00899c8e: jne 0x899c9d */ if (!fZ) goto L_00899c9d;
L_00899c90:; BB(0x00899c90);
    /* 00899c90: cmp dword ptr [ebp - 0x20], edx */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00899c93: jne 0x899c9d */ if (!fZ) goto L_00899c9d;
L_00899c95:; BB(0x00899c95);
    /* 00899c95: cmp ebx, dword ptr [ebp - 0x4c] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp+0xffffffb4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00899c98: mov dword ptr [ebp + 0x14], edx */ W32((u32)(r_ebp+0x14u), r_edx);
    /* 00899c9b: je 0x899ca4 */ if (fZ) goto L_00899ca4;
L_00899c9d:; BB(0x00899c9d);
    /* 00899c9d: mov dword ptr [ebp + 0x14], 1 */ W32((u32)(r_ebp+0x14u), 0x1u);
L_00899ca4:; BB(0x00899ca4);
    /* 00899ca4: test byte ptr [ebp + 0x1c], 1 */ {  u32 a = R8((u32)(r_ebp+0x1cu)); u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00899ca8: jne 0x899cb4 */ if (!fZ) goto L_00899cb4;
L_00899caa:; BB(0x00899caa);
    /* 00899caa: cmp dword ptr [ebp + 0x14], edx */ {  u32 a = R32((u32)(r_ebp+0x14u)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00899cad: jne 0x899cb4 */ if (!fZ) goto L_00899cb4;
L_00899caf:; BB(0x00899caf);
    /* 00899caf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00899cb1: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00899cb2: jmp 0x899ce1 */ goto L_00899ce1;
L_00899cb4:; BB(0x00899cb4);
    /* 00899cb4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00899cb6: jmp 0x899ce1 */ goto L_00899ce1;
L_00899cb8:; BB(0x00899cb8);
    /* 00899cb8: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 00899cbb: mov ebx, dword ptr [ebp - 0x4c] */ r_ebx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00899cbe: and dword ptr [ebp + 0x14], 0 */ { u32 ad = (u32)(r_ebp+0x14u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00899cc2: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00899cc5: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 00899cc8: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00899ccb: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 00899cce: not eax */ r_eax = ~r_eax;
    /* 00899cd0: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00899cd3: mov dword ptr [ebp - 0x30], edi */ W32((u32)(r_ebp+0xffffffd0u), r_edi);
    /* 00899cd6: mov dword ptr [ebp - 0x2c], edi */ W32((u32)(r_ebp+0xffffffd4u), r_edi);
    /* 00899cd9: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00899cdc: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 00899cdf: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_00899ce1:; BB(0x00899ce1);
    /* 00899ce1: cmp dword ptr [ebp - 0x5c], edx */ {  u32 a = R32((u32)(r_ebp+0xffffffa4u)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00899ce4: mov ecx, 0x200 */ r_ecx = 0x200u;
    /* 00899ce9: jne 0x899cfa */ if (!fZ) goto L_00899cfa;
L_00899ceb:; BB(0x00899ceb);
    /* 00899ceb: test dword ptr [ebp - 0x60], ecx */ {  u32 a = R32((u32)(r_ebp+0xffffffa0u)); u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00899cee: jne 0x899cfa */ if (!fZ) goto L_00899cfa;
L_00899cf0:; BB(0x00899cf0);
    /* 00899cf0: mov eax, 0x8876086c */ r_eax = 0x8876086cu;
    /* 00899cf5: jmp 0x899f64 */ goto L_00899f64;
L_00899cfa:; BB(0x00899cfa);
    /* 00899cfa: movzx esi, byte ptr [ebp + 0x1c] */ r_esi = (u32)R8((u32)(r_ebp+0x1cu));
    /* 00899cfe: and esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 00899d01: or esi, 0x80 */ {  u32 a = r_esi; u32 b = 0x80u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00899d07: shl esi, 4 */ { u32 c = (4u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 00899d0a: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00899d0c: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00899d0e: mov dword ptr [ebp - 8], esi */ W32((u32)(r_ebp+0xfffffff8u), r_esi);
    /* 00899d11: je 0x899d78 */ if (fZ) goto L_00899d78;
L_00899d13:; BB(0x00899d13);
    /* 00899d13: test dword ptr [ebp - 0x60], ecx */ {  u32 a = R32((u32)(r_ebp+0xffffffa0u)); u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00899d16: je 0x899d78 */ if (fZ) goto L_00899d78;
L_00899d18:; BB(0x00899d18);
    /* 00899d18: test byte ptr [ebp + 0x1e], 2 */ {  u32 a = R8((u32)(r_ebp+0x1eu)); u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00899d1c: je 0x899d29 */ if (fZ) goto L_00899d29;
L_00899d1e:; BB(0x00899d1e);
    /* 00899d1e: or esi, 0x2000 */ {  u32 a = r_esi; u32 b = 0x2000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00899d24: jmp 0x899eb6 */ goto L_00899eb6;
L_00899d29:; BB(0x00899d29);
    /* 00899d29: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00899d2b: call 0x89414b */ r_esp -= 4; W32(r_esp, 0x899d30u); f_0089414b();
    /* 00899d30: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00899d33: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00899d34: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00899d36: lea edx, [ebp - 4] */ r_edx = (u32)(r_ebp+0xfffffffcu);
    /* 00899d39: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00899d3a: push 0x99daac */ { u32 v = 0x99daacu; r_esp -= 4; W32(r_esp, v); }
    /* 00899d3f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00899d40: call dword ptr [ecx + 0x1c] */ { u32 t = R32((u32)(r_ecx+0x1cu)); r_esp -= 4; W32(r_esp, 0x899d43u); call_ind(t); }
    /* 00899d43: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00899d45: jl 0x899d71 */ if ((fS!=fO)) goto L_00899d71;
L_00899d47:; BB(0x00899d47);
    /* 00899d47: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00899d4a: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00899d4c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00899d4d: call dword ptr [ecx + 0x34] */ { u32 t = R32((u32)(r_ecx+0x34u)); r_esp -= 4; W32(r_esp, 0x899d50u); call_ind(t); }
    /* 00899d50: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00899d53: jne 0x899d61 */ if (!fZ) goto L_00899d61;
L_00899d55:; BB(0x00899d55);
    /* 00899d55: or esi, 0x2000 */ {  u32 a = r_esi; u32 b = 0x2000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00899d5b: mov dword ptr [ebp - 8], esi */ W32((u32)(r_ebp+0xfffffff8u), r_esi);
    /* 00899d5e: mov dword ptr [ebp + 0x14], edi */ W32((u32)(r_ebp+0x14u), r_edi);
L_00899d61:; BB(0x00899d61);
    /* 00899d61: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00899d64: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00899d66: je 0x899d71 */ if (fZ) goto L_00899d71;
L_00899d68:; BB(0x00899d68);
    /* 00899d68: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00899d6a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00899d6b: call dword ptr [ecx + 8] */ { u32 t = R32((u32)(r_ecx+0x8u)); r_esp -= 4; W32(r_esp, 0x899d6eu); call_ind(t); }
    /* 00899d6e: mov dword ptr [ebp - 4], edi */ W32((u32)(r_ebp+0xfffffffcu), r_edi);
L_00899d71:; BB(0x00899d71);
    /* 00899d71: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00899d72: call 0x89414b */ r_esp -= 4; W32(r_esp, 0x899d77u); f_0089414b();
    /* 00899d77: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00899d78:; BB(0x00899d78);
    /* 00899d78: cmp dword ptr [ebp + 0x14], edi */ {  u32 a = R32((u32)(r_ebp+0x14u)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00899d7b: je 0x899eb6 */ if (fZ) goto L_00899eb6;
L_00899d81:; BB(0x00899d81);
    /* 00899d81: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 00899d84: cmp eax, 0x31545844 */ {  u32 a = r_eax; u32 b = 0x31545844u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00899d89: je 0x899e43 */ if (fZ) goto L_00899e43;
L_00899d8f:; BB(0x00899d8f);
    /* 00899d8f: cmp eax, 0x32545844 */ {  u32 a = r_eax; u32 b = 0x32545844u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00899d94: je 0x899e43 */ if (fZ) goto L_00899e43;
L_00899d9a:; BB(0x00899d9a);
    /* 00899d9a: cmp eax, 0x32595559 */ {  u32 a = r_eax; u32 b = 0x32595559u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00899d9f: je 0x899dd9 */ if (fZ) goto L_00899dd9;
L_00899da1:; BB(0x00899da1);
    /* 00899da1: cmp eax, 0x33545844 */ {  u32 a = r_eax; u32 b = 0x33545844u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00899da6: je 0x899e43 */ if (fZ) goto L_00899e43;
L_00899dac:; BB(0x00899dac);
    /* 00899dac: cmp eax, 0x34545844 */ {  u32 a = r_eax; u32 b = 0x34545844u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00899db1: je 0x899e43 */ if (fZ) goto L_00899e43;
L_00899db7:; BB(0x00899db7);
    /* 00899db7: cmp eax, 0x35545844 */ {  u32 a = r_eax; u32 b = 0x35545844u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00899dbc: je 0x899e43 */ if (fZ) goto L_00899e43;
L_00899dc2:; BB(0x00899dc2);
    /* 00899dc2: cmp eax, 0x59565955 */ {  u32 a = r_eax; u32 b = 0x59565955u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00899dc7: je 0x899dd9 */ if (fZ) goto L_00899dd9;
L_00899dc9:; BB(0x00899dc9);
    /* 00899dc9: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00899dcb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00899dcc: lea esi, [ebp - 0x30] */ r_esi = (u32)(r_ebp+0xffffffd0u);
    /* 00899dcf: lea edi, [ebp - 0x48] */ r_edi = (u32)(r_ebp+0xffffffb8u);
    /* 00899dd2: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 00899dd4: jmp 0x899ead */ goto L_00899ead;
L_00899dd9:; BB(0x00899dd9);
    /* 00899dd9: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00899ddc: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00899ddf: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00899de2: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00899de5: and ecx, 0xfffffffe */ {  u32 a = r_ecx; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00899de8: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00899de9: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00899dec: cmp eax, dword ptr [ebp - 0x54] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffacu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00899def: mov dword ptr [ebp - 0x3c], edi */ W32((u32)(r_ebp+0xffffffc4u), r_edi);
    /* 00899df2: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00899df5: mov dword ptr [ebp - 0x48], ecx */ W32((u32)(r_ebp+0xffffffb8u), r_ecx);
    /* 00899df8: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00899dfb: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 00899dfe: mov dword ptr [ebp - 0x38], edi */ W32((u32)(r_ebp+0xffffffc8u), r_edi);
    /* 00899e01: mov dword ptr [ebp - 0x34], ebx */ W32((u32)(r_ebp+0xffffffccu), r_ebx);
    /* 00899e04: jbe 0x899e0c */ if ((fC||fZ)) goto L_00899e0c;
L_00899e06:; BB(0x00899e06);
    /* 00899e06: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 00899e09: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
L_00899e0c:; BB(0x00899e0c);
    /* 00899e0c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00899e0e: jne 0x899ed2 */ if (!fZ) goto L_00899ed2;
L_00899e14:; BB(0x00899e14);
    /* 00899e14: cmp eax, dword ptr [ebp - 0x54] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffacu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00899e17: jne 0x899ed2 */ if (!fZ) goto L_00899ed2;
L_00899e1d:; BB(0x00899e1d);
    /* 00899e1d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00899e1f: jne 0x899ed2 */ if (!fZ) goto L_00899ed2;
L_00899e25:; BB(0x00899e25);
    /* 00899e25: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00899e28: cmp eax, dword ptr [ebp - 0x50] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffb0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00899e2b: jne 0x899ed2 */ if (!fZ) goto L_00899ed2;
L_00899e31:; BB(0x00899e31);
    /* 00899e31: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00899e33: jne 0x899ed2 */ if (!fZ) goto L_00899ed2;
L_00899e39:; BB(0x00899e39);
    /* 00899e39: cmp ebx, dword ptr [ebp - 0x4c] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp+0xffffffb4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00899e3c: je 0x899eb6 */ if (fZ) goto L_00899eb6;
L_00899e3e:; BB(0x00899e3e);
    /* 00899e3e: jmp 0x899ed2 */ goto L_00899ed2;
L_00899e43:; BB(0x00899e43);
    /* 00899e43: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00899e46: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00899e49: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00899e4c: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 00899e4f: push -4 */ { u32 v = 0xfffffffcu; r_esp -= 4; W32(r_esp, v); }
    /* 00899e51: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00899e52: add eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00899e55: add ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00899e58: and edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00899e5a: and eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00899e5c: and esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 00899e5e: and ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00899e60: cmp eax, dword ptr [ebp - 0x54] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffacu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00899e63: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00899e66: mov dword ptr [ebp - 0x48], edx */ W32((u32)(r_ebp+0xffffffb8u), r_edx);
    /* 00899e69: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00899e6c: mov dword ptr [ebp - 0x44], esi */ W32((u32)(r_ebp+0xffffffbcu), r_esi);
    /* 00899e6f: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
    /* 00899e72: mov dword ptr [ebp - 0x38], edi */ W32((u32)(r_ebp+0xffffffc8u), r_edi);
    /* 00899e75: mov dword ptr [ebp - 0x34], ebx */ W32((u32)(r_ebp+0xffffffccu), r_ebx);
    /* 00899e78: jbe 0x899e80 */ if ((fC||fZ)) goto L_00899e80;
L_00899e7a:; BB(0x00899e7a);
    /* 00899e7a: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 00899e7d: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
L_00899e80:; BB(0x00899e80);
    /* 00899e80: cmp ecx, dword ptr [ebp - 0x50] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffb0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00899e83: jbe 0x899e8b */ if ((fC||fZ)) goto L_00899e8b;
L_00899e85:; BB(0x00899e85);
    /* 00899e85: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00899e88: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
L_00899e8b:; BB(0x00899e8b);
    /* 00899e8b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00899e8d: jne 0x899ea6 */ if (!fZ) goto L_00899ea6;
L_00899e8f:; BB(0x00899e8f);
    /* 00899e8f: cmp eax, dword ptr [ebp - 0x54] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffacu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00899e92: jne 0x899ea6 */ if (!fZ) goto L_00899ea6;
L_00899e94:; BB(0x00899e94);
    /* 00899e94: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00899e96: jne 0x899ea6 */ if (!fZ) goto L_00899ea6;
L_00899e98:; BB(0x00899e98);
    /* 00899e98: cmp ecx, dword ptr [ebp - 0x50] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffb0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00899e9b: jne 0x899ea6 */ if (!fZ) goto L_00899ea6;
L_00899e9d:; BB(0x00899e9d);
    /* 00899e9d: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00899e9f: jne 0x899ea6 */ if (!fZ) goto L_00899ea6;
L_00899ea1:; BB(0x00899ea1);
    /* 00899ea1: cmp ebx, dword ptr [ebp - 0x4c] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp+0xffffffb4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00899ea4: je 0x899eb3 */ if (fZ) goto L_00899eb3;
L_00899ea6:; BB(0x00899ea6);
    /* 00899ea6: mov dword ptr [ebp + 0x14], 1 */ W32((u32)(r_ebp+0x14u), 0x1u);
L_00899ead:; BB(0x00899ead);
    /* 00899ead: cmp dword ptr [ebp + 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0x14u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00899eb1: jne 0x899ecf */ if (!fZ) goto L_00899ecf;
L_00899eb3:; BB(0x00899eb3);
    /* 00899eb3: mov esi, dword ptr [ebp - 8] */ r_esi = R32((u32)(r_ebp+0xfffffff8u));
L_00899eb6:; BB(0x00899eb6);
    /* 00899eb6: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00899eb9: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00899ebb: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00899ebc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00899ebe: lea edx, [ebp - 0x18] */ r_edx = (u32)(r_ebp+0xffffffe8u);
    /* 00899ec1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00899ec2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00899ec3: call dword ptr [ecx + 0x24] */ { u32 t = R32((u32)(r_ecx+0x24u)); r_esp -= 4; W32(r_esp, 0x899ec6u); call_ind(t); }
    /* 00899ec6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00899ec8: jge 0x899f05 */ if ((fS==fO)) goto L_00899f05;
L_00899eca:; BB(0x00899eca);
    /* 00899eca: jmp 0x899f64 */ goto L_00899f64;
L_00899ecf:; BB(0x00899ecf);
    /* 00899ecf: mov esi, dword ptr [ebp - 8] */ r_esi = R32((u32)(r_ebp+0xfffffff8u));
L_00899ed2:; BB(0x00899ed2);
    /* 00899ed2: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00899ed5: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00899ed7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00899ed8: lea edx, [ebp - 0x48] */ r_edx = (u32)(r_ebp+0xffffffb8u);
    /* 00899edb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00899edc: lea edx, [ebp - 0x18] */ r_edx = (u32)(r_ebp+0xffffffe8u);
    /* 00899edf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00899ee0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00899ee1: call dword ptr [ecx + 0x24] */ { u32 t = R32((u32)(r_ecx+0x24u)); r_esp -= 4; W32(r_esp, 0x899ee4u); call_ind(t); }
    /* 00899ee4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00899ee6: jl 0x899f64 */ if ((fS!=fO)) goto L_00899f64;
L_00899ee8:; BB(0x00899ee8);
    /* 00899ee8: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 00899eeb: sub dword ptr [ebp - 0x30], eax */ { u32 ad = (u32)(r_ebp+0xffffffd0u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 00899eee: sub dword ptr [ebp - 0x28], eax */ { u32 ad = (u32)(r_ebp+0xffffffd8u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 00899ef1: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00899ef4: sub dword ptr [ebp - 0x2c], eax */ { u32 ad = (u32)(r_ebp+0xffffffd4u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 00899ef7: sub dword ptr [ebp - 0x24], eax */ { u32 ad = (u32)(r_ebp+0xffffffdcu);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 00899efa: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00899efd: sub dword ptr [ebp - 0x20], eax */ { u32 ad = (u32)(r_ebp+0xffffffe0u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 00899f00: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 00899f02: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
L_00899f05:; BB(0x00899f05);
    /* 00899f05: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00899f08: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00899f0b: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 00899f0e: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 00899f10: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 00899f13: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 00899f16: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00899f19: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 00899f1c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00899f1f: mov dword ptr [eax + 0xc], ecx */ W32((u32)(r_eax+0xcu), r_ecx);
    /* 00899f22: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00899f24: mov dword ptr [eax + 0x10], ecx */ W32((u32)(r_eax+0x10u), r_ecx);
    /* 00899f27: mov dword ptr [eax + 0x14], ecx */ W32((u32)(r_eax+0x14u), r_ecx);
    /* 00899f2a: mov dword ptr [eax + 0x20], ecx */ W32((u32)(r_eax+0x20u), r_ecx);
    /* 00899f2d: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00899f30: mov dword ptr [eax + 0x24], ecx */ W32((u32)(r_eax+0x24u), r_ecx);
    /* 00899f33: lea edi, [eax + 0x28] */ r_edi = (u32)(r_eax+0x28u);
    /* 00899f36: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00899f38: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00899f39: lea esi, [ebp - 0x30] */ r_esi = (u32)(r_ebp+0xffffffd0u);
    /* 00899f3c: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 00899f3e: mov ecx, dword ptr [ebp + 0x18] */ r_ecx = R32((u32)(r_ebp+0x18u));
    /* 00899f41: mov dword ptr [eax + 0x44], ecx */ W32((u32)(r_eax+0x44u), r_ecx);
    /* 00899f44: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00899f47: mov dword ptr [eax + 0x18], edx */ W32((u32)(r_eax+0x18u), r_edx);
    /* 00899f4a: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00899f4d: mov dword ptr [eax + 0x48], ecx */ W32((u32)(r_eax+0x48u), r_ecx);
    /* 00899f50: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00899f53: mov dword ptr [eax + 0x1c], edx */ W32((u32)(r_eax+0x1cu), r_edx);
    /* 00899f56: mov dword ptr [eax + 0x40], 1 */ W32((u32)(r_eax+0x40u), 0x1u);
    /* 00899f5d: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00899f60: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 00899f62: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_00899f64:; BB(0x00899f64);
    /* 00899f64: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00899f65: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00899f66: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00899f67: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 00899f68: ret 0x18 */ FN_RET(0x00899c10); r_esp += 28; return;
}

void f_00899d5b(void)
{
    FN_ENTER(0x00899d5b);
    /* 00899d5b: mov dword ptr [ebp - 8], esi */ W32((u32)(r_ebp+0xfffffff8u), r_esi);
    /* 00899d5e: mov dword ptr [ebp + 0x14], edi */ W32((u32)(r_ebp+0x14u), r_edi);
    /* 00899d61: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00899d64: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00899d66: je 0x899d71 */ if (fZ) goto L_00899d71;
L_00899d68:; BB(0x00899d68);
    /* 00899d68: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00899d6a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00899d6b: call dword ptr [ecx + 8] */ { u32 t = R32((u32)(r_ecx+0x8u)); r_esp -= 4; W32(r_esp, 0x899d6eu); call_ind(t); }
    /* 00899d6e: mov dword ptr [ebp - 4], edi */ W32((u32)(r_ebp+0xfffffffcu), r_edi);
L_00899d71:; BB(0x00899d71);
    /* 00899d71: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00899d72: call 0x89414b */ r_esp -= 4; W32(r_esp, 0x899d77u); f_0089414b();
    /* 00899d77: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00899d78: cmp dword ptr [ebp + 0x14], edi */ {  u32 a = R32((u32)(r_ebp+0x14u)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00899d7b: je 0x899eb6 */ if (fZ) goto L_00899eb6;
L_00899d81:; BB(0x00899d81);
    /* 00899d81: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 00899d84: cmp eax, 0x31545844 */ {  u32 a = r_eax; u32 b = 0x31545844u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00899d89: je 0x899e43 */ if (fZ) goto L_00899e43;
L_00899d8f:; BB(0x00899d8f);
    /* 00899d8f: cmp eax, 0x32545844 */ {  u32 a = r_eax; u32 b = 0x32545844u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00899d94: je 0x899e43 */ if (fZ) goto L_00899e43;
L_00899d9a:; BB(0x00899d9a);
    /* 00899d9a: cmp eax, 0x32595559 */ {  u32 a = r_eax; u32 b = 0x32595559u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00899d9f: je 0x899dd9 */ if (fZ) goto L_00899dd9;
L_00899da1:; BB(0x00899da1);
    /* 00899da1: cmp eax, 0x33545844 */ {  u32 a = r_eax; u32 b = 0x33545844u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00899da6: je 0x899e43 */ if (fZ) goto L_00899e43;
L_00899dac:; BB(0x00899dac);
    /* 00899dac: cmp eax, 0x34545844 */ {  u32 a = r_eax; u32 b = 0x34545844u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00899db1: je 0x899e43 */ if (fZ) goto L_00899e43;
L_00899db7:; BB(0x00899db7);
    /* 00899db7: cmp eax, 0x35545844 */ {  u32 a = r_eax; u32 b = 0x35545844u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00899dbc: je 0x899e43 */ if (fZ) goto L_00899e43;
L_00899dc2:; BB(0x00899dc2);
    /* 00899dc2: cmp eax, 0x59565955 */ {  u32 a = r_eax; u32 b = 0x59565955u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00899dc7: je 0x899dd9 */ if (fZ) goto L_00899dd9;
L_00899dc9:; BB(0x00899dc9);
    /* 00899dc9: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00899dcb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00899dcc: lea esi, [ebp - 0x30] */ r_esi = (u32)(r_ebp+0xffffffd0u);
    /* 00899dcf: lea edi, [ebp - 0x48] */ r_edi = (u32)(r_ebp+0xffffffb8u);
    /* 00899dd2: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 00899dd4: jmp 0x899ead */ goto L_00899ead;
L_00899dd9:; BB(0x00899dd9);
    /* 00899dd9: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00899ddc: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00899ddf: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00899de2: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00899de5: and ecx, 0xfffffffe */ {  u32 a = r_ecx; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00899de8: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00899de9: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00899dec: cmp eax, dword ptr [ebp - 0x54] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffacu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00899def: mov dword ptr [ebp - 0x3c], edi */ W32((u32)(r_ebp+0xffffffc4u), r_edi);
    /* 00899df2: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00899df5: mov dword ptr [ebp - 0x48], ecx */ W32((u32)(r_ebp+0xffffffb8u), r_ecx);
    /* 00899df8: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00899dfb: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 00899dfe: mov dword ptr [ebp - 0x38], edi */ W32((u32)(r_ebp+0xffffffc8u), r_edi);
    /* 00899e01: mov dword ptr [ebp - 0x34], ebx */ W32((u32)(r_ebp+0xffffffccu), r_ebx);
    /* 00899e04: jbe 0x899e0c */ if ((fC||fZ)) goto L_00899e0c;
L_00899e06:; BB(0x00899e06);
    /* 00899e06: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 00899e09: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
L_00899e0c:; BB(0x00899e0c);
    /* 00899e0c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00899e0e: jne 0x899ed2 */ if (!fZ) goto L_00899ed2;
L_00899e14:; BB(0x00899e14);
    /* 00899e14: cmp eax, dword ptr [ebp - 0x54] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffacu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00899e17: jne 0x899ed2 */ if (!fZ) goto L_00899ed2;
L_00899e1d:; BB(0x00899e1d);
    /* 00899e1d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00899e1f: jne 0x899ed2 */ if (!fZ) goto L_00899ed2;
L_00899e25:; BB(0x00899e25);
    /* 00899e25: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00899e28: cmp eax, dword ptr [ebp - 0x50] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffb0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00899e2b: jne 0x899ed2 */ if (!fZ) goto L_00899ed2;
L_00899e31:; BB(0x00899e31);
    /* 00899e31: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00899e33: jne 0x899ed2 */ if (!fZ) goto L_00899ed2;
L_00899e39:; BB(0x00899e39);
    /* 00899e39: cmp ebx, dword ptr [ebp - 0x4c] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp+0xffffffb4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00899e3c: je 0x899eb6 */ if (fZ) goto L_00899eb6;
L_00899e3e:; BB(0x00899e3e);
    /* 00899e3e: jmp 0x899ed2 */ goto L_00899ed2;
L_00899e43:; BB(0x00899e43);
    /* 00899e43: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00899e46: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00899e49: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00899e4c: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 00899e4f: push -4 */ { u32 v = 0xfffffffcu; r_esp -= 4; W32(r_esp, v); }
    /* 00899e51: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00899e52: add eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00899e55: add ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00899e58: and edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00899e5a: and eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00899e5c: and esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 00899e5e: and ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00899e60: cmp eax, dword ptr [ebp - 0x54] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffacu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00899e63: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00899e66: mov dword ptr [ebp - 0x48], edx */ W32((u32)(r_ebp+0xffffffb8u), r_edx);
    /* 00899e69: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00899e6c: mov dword ptr [ebp - 0x44], esi */ W32((u32)(r_ebp+0xffffffbcu), r_esi);
    /* 00899e6f: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
    /* 00899e72: mov dword ptr [ebp - 0x38], edi */ W32((u32)(r_ebp+0xffffffc8u), r_edi);
    /* 00899e75: mov dword ptr [ebp - 0x34], ebx */ W32((u32)(r_ebp+0xffffffccu), r_ebx);
    /* 00899e78: jbe 0x899e80 */ if ((fC||fZ)) goto L_00899e80;
L_00899e7a:; BB(0x00899e7a);
    /* 00899e7a: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 00899e7d: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
L_00899e80:; BB(0x00899e80);
    /* 00899e80: cmp ecx, dword ptr [ebp - 0x50] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffb0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00899e83: jbe 0x899e8b */ if ((fC||fZ)) goto L_00899e8b;
L_00899e85:; BB(0x00899e85);
    /* 00899e85: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00899e88: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
L_00899e8b:; BB(0x00899e8b);
    /* 00899e8b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00899e8d: jne 0x899ea6 */ if (!fZ) goto L_00899ea6;
L_00899e8f:; BB(0x00899e8f);
    /* 00899e8f: cmp eax, dword ptr [ebp - 0x54] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffacu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00899e92: jne 0x899ea6 */ if (!fZ) goto L_00899ea6;
L_00899e94:; BB(0x00899e94);
    /* 00899e94: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00899e96: jne 0x899ea6 */ if (!fZ) goto L_00899ea6;
L_00899e98:; BB(0x00899e98);
    /* 00899e98: cmp ecx, dword ptr [ebp - 0x50] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffb0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00899e9b: jne 0x899ea6 */ if (!fZ) goto L_00899ea6;
L_00899e9d:; BB(0x00899e9d);
    /* 00899e9d: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00899e9f: jne 0x899ea6 */ if (!fZ) goto L_00899ea6;
L_00899ea1:; BB(0x00899ea1);
    /* 00899ea1: cmp ebx, dword ptr [ebp - 0x4c] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp+0xffffffb4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00899ea4: je 0x899eb3 */ if (fZ) goto L_00899eb3;
L_00899ea6:; BB(0x00899ea6);
    /* 00899ea6: mov dword ptr [ebp + 0x14], 1 */ W32((u32)(r_ebp+0x14u), 0x1u);
L_00899ead:; BB(0x00899ead);
    /* 00899ead: cmp dword ptr [ebp + 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0x14u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00899eb1: jne 0x899ecf */ if (!fZ) goto L_00899ecf;
L_00899eb3:; BB(0x00899eb3);
    /* 00899eb3: mov esi, dword ptr [ebp - 8] */ r_esi = R32((u32)(r_ebp+0xfffffff8u));
L_00899eb6:; BB(0x00899eb6);
    /* 00899eb6: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00899eb9: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00899ebb: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00899ebc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00899ebe: lea edx, [ebp - 0x18] */ r_edx = (u32)(r_ebp+0xffffffe8u);
    /* 00899ec1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00899ec2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00899ec3: call dword ptr [ecx + 0x24] */ { u32 t = R32((u32)(r_ecx+0x24u)); r_esp -= 4; W32(r_esp, 0x899ec6u); call_ind(t); }
    /* 00899ec6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00899ec8: jge 0x899f05 */ if ((fS==fO)) goto L_00899f05;
L_00899eca:; BB(0x00899eca);
    /* 00899eca: jmp 0x899f64 */ goto L_00899f64;
L_00899ecf:; BB(0x00899ecf);
    /* 00899ecf: mov esi, dword ptr [ebp - 8] */ r_esi = R32((u32)(r_ebp+0xfffffff8u));
L_00899ed2:; BB(0x00899ed2);
    /* 00899ed2: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00899ed5: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00899ed7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00899ed8: lea edx, [ebp - 0x48] */ r_edx = (u32)(r_ebp+0xffffffb8u);
    /* 00899edb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00899edc: lea edx, [ebp - 0x18] */ r_edx = (u32)(r_ebp+0xffffffe8u);
    /* 00899edf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00899ee0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00899ee1: call dword ptr [ecx + 0x24] */ { u32 t = R32((u32)(r_ecx+0x24u)); r_esp -= 4; W32(r_esp, 0x899ee4u); call_ind(t); }
    /* 00899ee4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00899ee6: jl 0x899f64 */ if ((fS!=fO)) goto L_00899f64;
L_00899ee8:; BB(0x00899ee8);
    /* 00899ee8: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 00899eeb: sub dword ptr [ebp - 0x30], eax */ { u32 ad = (u32)(r_ebp+0xffffffd0u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 00899eee: sub dword ptr [ebp - 0x28], eax */ { u32 ad = (u32)(r_ebp+0xffffffd8u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 00899ef1: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00899ef4: sub dword ptr [ebp - 0x2c], eax */ { u32 ad = (u32)(r_ebp+0xffffffd4u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 00899ef7: sub dword ptr [ebp - 0x24], eax */ { u32 ad = (u32)(r_ebp+0xffffffdcu);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 00899efa: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00899efd: sub dword ptr [ebp - 0x20], eax */ { u32 ad = (u32)(r_ebp+0xffffffe0u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 00899f00: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 00899f02: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
L_00899f05:; BB(0x00899f05);
    /* 00899f05: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00899f08: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00899f0b: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 00899f0e: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 00899f10: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 00899f13: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 00899f16: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00899f19: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 00899f1c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00899f1f: mov dword ptr [eax + 0xc], ecx */ W32((u32)(r_eax+0xcu), r_ecx);
    /* 00899f22: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00899f24: mov dword ptr [eax + 0x10], ecx */ W32((u32)(r_eax+0x10u), r_ecx);
    /* 00899f27: mov dword ptr [eax + 0x14], ecx */ W32((u32)(r_eax+0x14u), r_ecx);
    /* 00899f2a: mov dword ptr [eax + 0x20], ecx */ W32((u32)(r_eax+0x20u), r_ecx);
    /* 00899f2d: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00899f30: mov dword ptr [eax + 0x24], ecx */ W32((u32)(r_eax+0x24u), r_ecx);
    /* 00899f33: lea edi, [eax + 0x28] */ r_edi = (u32)(r_eax+0x28u);
    /* 00899f36: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00899f38: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00899f39: lea esi, [ebp - 0x30] */ r_esi = (u32)(r_ebp+0xffffffd0u);
    /* 00899f3c: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 00899f3e: mov ecx, dword ptr [ebp + 0x18] */ r_ecx = R32((u32)(r_ebp+0x18u));
    /* 00899f41: mov dword ptr [eax + 0x44], ecx */ W32((u32)(r_eax+0x44u), r_ecx);
    /* 00899f44: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00899f47: mov dword ptr [eax + 0x18], edx */ W32((u32)(r_eax+0x18u), r_edx);
    /* 00899f4a: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00899f4d: mov dword ptr [eax + 0x48], ecx */ W32((u32)(r_eax+0x48u), r_ecx);
    /* 00899f50: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00899f53: mov dword ptr [eax + 0x1c], edx */ W32((u32)(r_eax+0x1cu), r_edx);
    /* 00899f56: mov dword ptr [eax + 0x40], 1 */ W32((u32)(r_eax+0x40u), 0x1u);
    /* 00899f5d: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00899f60: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 00899f62: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_00899f64:; BB(0x00899f64);
    /* 00899f64: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00899f65: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00899f66: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00899f67: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 00899f68: ret 0x18 */ FN_RET(0x00899d5b); r_esp += 28; return;
}

void f_00899f81(void) /* sub_899F81 */
{
    FN_ENTER(0x00899f81);
    /* 00899f81: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00899f82: mov ebp, esp */ r_ebp = r_esp;
    /* 00899f84: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 00899f87: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00899f88: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00899f89: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00899f8a: je 0x89a177 */ if (fZ) goto L_0089a177;
L_00899f90:; BB(0x00899f90);
    /* 00899f90: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00899f91: je 0x89a08a */ if (fZ) goto L_0089a08a;
L_00899f97:; BB(0x00899f97);
    /* 00899f97: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00899f98: jne 0x89a26c */ if (!fZ) goto L_0089a26c;
L_00899f9e:; BB(0x00899f9e);
    /* 00899f9e: mov eax, dword ptr [ecx + 0x1048] */ r_eax = R32((u32)(r_ecx+0x1048u));
    /* 00899fa4: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00899fa5: je 0x89a012 */ if (fZ) goto L_0089a012;
L_00899fa7:; BB(0x00899fa7);
    /* 00899fa7: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00899fa8: jne 0x89a26c */ if (!fZ) goto L_0089a26c;
L_00899fae:; BB(0x00899fae);
    /* 00899fae: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00899fb0: cmp dword ptr [ecx + 0x1058], esi */ {  u32 a = R32((u32)(r_ecx+0x1058u)); u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00899fb6: jbe 0x89a26c */ if ((fC||fZ)) goto L_0089a26c;
L_00899fbc:; BB(0x00899fbc);
    /* 00899fbc: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00899fbf: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00899fc1: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_00899fc4:; BB(0x00899fc4);
    /* 00899fc4: mov edi, dword ptr [ecx + 0x104c] */ r_edi = R32((u32)(r_ecx+0x104cu));
    /* 00899fca: fld dword ptr [eax - 8] */ FPUSH(R_F32((u32)(r_eax+0xfffffff8u)));
    /* 00899fcd: fstp dword ptr [edx + edi] */ W_F32((u32)(r_edx+r_edi), ST(0)); FPOP();
    /* 00899fd0: mov edi, dword ptr [ecx + 0x104c] */ r_edi = R32((u32)(r_ecx+0x104cu));
    /* 00899fd6: fld dword ptr [eax - 4] */ FPUSH(R_F32((u32)(r_eax+0xfffffffcu)));
    /* 00899fd9: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00899fda: fstp dword ptr [edx + edi + 4] */ W_F32((u32)(r_edx+r_edi+0x4u), ST(0)); FPOP();
    /* 00899fde: mov edi, dword ptr [ecx + 0x104c] */ r_edi = R32((u32)(r_ecx+0x104cu));
    /* 00899fe4: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 00899fe6: add edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00899fe9: fstp dword ptr [edx + edi - 8] */ W_F32((u32)(r_edx+r_edi+0xfffffff8u), ST(0)); FPOP();
    /* 00899fed: mov edi, dword ptr [ecx + 0x104c] */ r_edi = R32((u32)(r_ecx+0x104cu));
    /* 00899ff3: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 00899ff6: add eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00899ff9: fadd st(0), st(0) */ ST(0) = ST(0) + ST(0);
    /* 00899ffb: fsub dword ptr [0x99b9b8] */ ST(0) = ST(0) - R_F32((u32)(0x99b9b8u));
    /* 0089a001: fstp dword ptr [edx + edi - 4] */ W_F32((u32)(r_edx+r_edi+0xfffffffcu), ST(0)); FPOP();
    /* 0089a005: cmp esi, dword ptr [ecx + 0x1058] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ecx+0x1058u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0089a00b: jb 0x899fc4 */ if (fC) goto L_00899fc4;
L_0089a00d:; BB(0x0089a00d);
    /* 0089a00d: jmp 0x89a26c */ goto L_0089a26c;
L_0089a012:; BB(0x0089a012);
    /* 0089a012: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0089a014: cmp dword ptr [ecx + 0x1058], esi */ {  u32 a = R32((u32)(r_ecx+0x1058u)); u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0089a01a: jbe 0x89a26c */ if ((fC||fZ)) goto L_0089a26c;
L_0089a020:; BB(0x0089a020);
    /* 0089a020: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0089a023: fld dword ptr [0x99b9ec] */ FPUSH(R_F32((u32)(0x99b9ecu)));
    /* 0089a029: fld dword ptr [0x99b9b8] */ FPUSH(R_F32((u32)(0x99b9b8u)));
    /* 0089a02f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0089a031: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_0089a034:; BB(0x0089a034);
    /* 0089a034: fld dword ptr [eax - 8] */ FPUSH(R_F32((u32)(r_eax+0xfffffff8u)));
    /* 0089a037: mov edi, dword ptr [ecx + 0x104c] */ r_edi = R32((u32)(r_ecx+0x104cu));
    /* 0089a03d: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0089a03f: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0089a040: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 0089a042: fstp dword ptr [edx + edi] */ W_F32((u32)(r_edx+r_edi), ST(0)); FPOP();
    /* 0089a045: mov edi, dword ptr [ecx + 0x104c] */ r_edi = R32((u32)(r_ecx+0x104cu));
    /* 0089a04b: fld dword ptr [eax - 4] */ FPUSH(R_F32((u32)(r_eax+0xfffffffcu)));
    /* 0089a04e: add edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0089a051: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0089a053: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 0089a055: fstp dword ptr [edx + edi - 0xc] */ W_F32((u32)(r_edx+r_edi+0xfffffff4u), ST(0)); FPOP();
    /* 0089a059: mov edi, dword ptr [ecx + 0x104c] */ r_edi = R32((u32)(r_ecx+0x104cu));
    /* 0089a05f: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 0089a061: add eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0089a064: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0089a066: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 0089a068: fstp dword ptr [edx + edi - 8] */ W_F32((u32)(r_edx+r_edi+0xfffffff8u), ST(0)); FPOP();
    /* 0089a06c: mov edi, dword ptr [ecx + 0x104c] */ r_edi = R32((u32)(r_ecx+0x104cu));
    /* 0089a072: fld dword ptr [eax - 0xc] */ FPUSH(R_F32((u32)(r_eax+0xfffffff4u)));
    /* 0089a075: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0089a077: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 0089a079: fstp dword ptr [edx + edi - 4] */ W_F32((u32)(r_edx+r_edi+0xfffffffcu), ST(0)); FPOP();
    /* 0089a07d: cmp esi, dword ptr [ecx + 0x1058] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ecx+0x1058u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0089a083: jb 0x89a034 */ if (fC) goto L_0089a034;
L_0089a085:; BB(0x0089a085);
    /* 0089a085: jmp 0x89a268 */ goto L_0089a268;
L_0089a08a:; BB(0x0089a08a);
    /* 0089a08a: mov eax, dword ptr [ecx + 0x1048] */ r_eax = R32((u32)(r_ecx+0x1048u));
    /* 0089a090: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0089a091: je 0x89a103 */ if (fZ) goto L_0089a103;
L_0089a093:; BB(0x0089a093);
    /* 0089a093: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0089a094: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0089a095: jne 0x89a26c */ if (!fZ) goto L_0089a26c;
L_0089a09b:; BB(0x0089a09b);
    /* 0089a09b: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0089a09d: cmp dword ptr [ecx + 0x1058], esi */ {  u32 a = R32((u32)(r_ecx+0x1058u)); u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0089a0a3: jbe 0x89a26c */ if ((fC||fZ)) goto L_0089a26c;
L_0089a0a9:; BB(0x0089a0a9);
    /* 0089a0a9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0089a0ac: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0089a0ae: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_0089a0b1:; BB(0x0089a0b1);
    /* 0089a0b1: mov edi, dword ptr [ecx + 0x104c] */ r_edi = R32((u32)(r_ecx+0x104cu));
    /* 0089a0b7: fld dword ptr [eax - 8] */ FPUSH(R_F32((u32)(r_eax+0xfffffff8u)));
    /* 0089a0ba: fstp dword ptr [edx + edi] */ W_F32((u32)(r_edx+r_edi), ST(0)); FPOP();
    /* 0089a0bd: mov edi, dword ptr [ecx + 0x104c] */ r_edi = R32((u32)(r_ecx+0x104cu));
    /* 0089a0c3: fld dword ptr [eax - 4] */ FPUSH(R_F32((u32)(r_eax+0xfffffffcu)));
    /* 0089a0c6: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0089a0c7: fstp dword ptr [edx + edi + 4] */ W_F32((u32)(r_edx+r_edi+0x4u), ST(0)); FPOP();
    /* 0089a0cb: mov edi, dword ptr [ecx + 0x104c] */ r_edi = R32((u32)(r_ecx+0x104cu));
    /* 0089a0d1: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 0089a0d3: add edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0089a0d6: fstp dword ptr [edx + edi - 8] */ W_F32((u32)(r_edx+r_edi+0xfffffff8u), ST(0)); FPOP();
    /* 0089a0da: mov edi, dword ptr [ecx + 0x104c] */ r_edi = R32((u32)(r_ecx+0x104cu));
    /* 0089a0e0: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 0089a0e3: add eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0089a0e6: fadd dword ptr [0x99b9b8] */ ST(0) = ST(0) + R_F32((u32)(0x99b9b8u));
    /* 0089a0ec: fmul dword ptr [0x99b9b4] */ ST(0) = ST(0) * R_F32((u32)(0x99b9b4u));
    /* 0089a0f2: fstp dword ptr [edx + edi - 4] */ W_F32((u32)(r_edx+r_edi+0xfffffffcu), ST(0)); FPOP();
    /* 0089a0f6: cmp esi, dword ptr [ecx + 0x1058] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ecx+0x1058u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0089a0fc: jb 0x89a0b1 */ if (fC) goto L_0089a0b1;
L_0089a0fe:; BB(0x0089a0fe);
    /* 0089a0fe: jmp 0x89a26c */ goto L_0089a26c;
L_0089a103:; BB(0x0089a103);
    /* 0089a103: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0089a105: cmp dword ptr [ecx + 0x1058], esi */ {  u32 a = R32((u32)(r_ecx+0x1058u)); u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0089a10b: jbe 0x89a26c */ if ((fC||fZ)) goto L_0089a26c;
L_0089a111:; BB(0x0089a111);
    /* 0089a111: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0089a114: fld dword ptr [0x99b9ec] */ FPUSH(R_F32((u32)(0x99b9ecu)));
    /* 0089a11a: fld dword ptr [0x99b9b8] */ FPUSH(R_F32((u32)(0x99b9b8u)));
    /* 0089a120: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0089a122: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_0089a125:; BB(0x0089a125);
    /* 0089a125: fld dword ptr [eax - 8] */ FPUSH(R_F32((u32)(r_eax+0xfffffff8u)));
    /* 0089a128: mov edi, dword ptr [ecx + 0x104c] */ r_edi = R32((u32)(r_ecx+0x104cu));
    /* 0089a12e: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0089a130: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0089a131: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 0089a133: fstp dword ptr [edx + edi] */ W_F32((u32)(r_edx+r_edi), ST(0)); FPOP();
    /* 0089a136: mov edi, dword ptr [ecx + 0x104c] */ r_edi = R32((u32)(r_ecx+0x104cu));
    /* 0089a13c: fld dword ptr [eax - 4] */ FPUSH(R_F32((u32)(r_eax+0xfffffffcu)));
    /* 0089a13f: add edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0089a142: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0089a144: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 0089a146: fstp dword ptr [edx + edi - 0xc] */ W_F32((u32)(r_edx+r_edi+0xfffffff4u), ST(0)); FPOP();
    /* 0089a14a: mov edi, dword ptr [ecx + 0x104c] */ r_edi = R32((u32)(r_ecx+0x104cu));
    /* 0089a150: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 0089a152: add eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0089a155: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0089a157: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 0089a159: fstp dword ptr [edx + edi - 8] */ W_F32((u32)(r_edx+r_edi+0xfffffff8u), ST(0)); FPOP();
    /* 0089a15d: mov edi, dword ptr [ecx + 0x104c] */ r_edi = R32((u32)(r_ecx+0x104cu));
    /* 0089a163: fld dword ptr [eax - 0xc] */ FPUSH(R_F32((u32)(r_eax+0xfffffff4u)));
    /* 0089a166: fstp dword ptr [edx + edi - 4] */ W_F32((u32)(r_edx+r_edi+0xfffffffcu), ST(0)); FPOP();
    /* 0089a16a: cmp esi, dword ptr [ecx + 0x1058] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ecx+0x1058u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0089a170: jb 0x89a125 */ if (fC) goto L_0089a125;
L_0089a172:; BB(0x0089a172);
    /* 0089a172: jmp 0x89a268 */ goto L_0089a268;
L_0089a177:; BB(0x0089a177);
    /* 0089a177: mov eax, dword ptr [ecx + 0x1048] */ r_eax = R32((u32)(r_ecx+0x1048u));
    /* 0089a17d: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0089a17e: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0089a17f: je 0x89a1fd */ if (fZ) goto L_0089a1fd;
L_0089a181:; BB(0x0089a181);
    /* 0089a181: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0089a182: jne 0x89a26c */ if (!fZ) goto L_0089a26c;
L_0089a188:; BB(0x0089a188);
    /* 0089a188: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0089a18a: cmp dword ptr [ecx + 0x1058], esi */ {  u32 a = R32((u32)(r_ecx+0x1058u)); u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0089a190: jbe 0x89a26c */ if ((fC||fZ)) goto L_0089a26c;
L_0089a196:; BB(0x0089a196);
    /* 0089a196: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0089a199: fld dword ptr [0x99b9b8] */ FPUSH(R_F32((u32)(0x99b9b8u)));
    /* 0089a19f: fld dword ptr [0x99b9b4] */ FPUSH(R_F32((u32)(0x99b9b4u)));
    /* 0089a1a5: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0089a1a7: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_0089a1aa:; BB(0x0089a1aa);
    /* 0089a1aa: fld dword ptr [eax - 8] */ FPUSH(R_F32((u32)(r_eax+0xfffffff8u)));
    /* 0089a1ad: mov edi, dword ptr [ecx + 0x104c] */ r_edi = R32((u32)(r_ecx+0x104cu));
    /* 0089a1b3: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0089a1b5: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0089a1b6: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0089a1b8: fstp dword ptr [edx + edi] */ W_F32((u32)(r_edx+r_edi), ST(0)); FPOP();
    /* 0089a1bb: mov edi, dword ptr [ecx + 0x104c] */ r_edi = R32((u32)(r_ecx+0x104cu));
    /* 0089a1c1: fld dword ptr [eax - 4] */ FPUSH(R_F32((u32)(r_eax+0xfffffffcu)));
    /* 0089a1c4: add edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0089a1c7: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0089a1c9: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0089a1cb: fstp dword ptr [edx + edi - 0xc] */ W_F32((u32)(r_edx+r_edi+0xfffffff4u), ST(0)); FPOP();
    /* 0089a1cf: mov edi, dword ptr [ecx + 0x104c] */ r_edi = R32((u32)(r_ecx+0x104cu));
    /* 0089a1d5: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 0089a1d7: add eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0089a1da: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0089a1dc: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0089a1de: fstp dword ptr [edx + edi - 8] */ W_F32((u32)(r_edx+r_edi+0xfffffff8u), ST(0)); FPOP();
    /* 0089a1e2: mov edi, dword ptr [ecx + 0x104c] */ r_edi = R32((u32)(r_ecx+0x104cu));
    /* 0089a1e8: fld dword ptr [eax - 0xc] */ FPUSH(R_F32((u32)(r_eax+0xfffffff4u)));
    /* 0089a1eb: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0089a1ed: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0089a1ef: fstp dword ptr [edx + edi - 4] */ W_F32((u32)(r_edx+r_edi+0xfffffffcu), ST(0)); FPOP();
    /* 0089a1f3: cmp esi, dword ptr [ecx + 0x1058] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ecx+0x1058u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0089a1f9: jb 0x89a1aa */ if (fC) goto L_0089a1aa;
L_0089a1fb:; BB(0x0089a1fb);
    /* 0089a1fb: jmp 0x89a268 */ goto L_0089a268;
L_0089a1fd:; BB(0x0089a1fd);
    /* 0089a1fd: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0089a1ff: cmp dword ptr [ecx + 0x1058], esi */ {  u32 a = R32((u32)(r_ecx+0x1058u)); u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0089a205: jbe 0x89a26c */ if ((fC||fZ)) goto L_0089a26c;
L_0089a207:; BB(0x0089a207);
    /* 0089a207: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0089a20a: fld dword ptr [0x99b9b8] */ FPUSH(R_F32((u32)(0x99b9b8u)));
    /* 0089a210: fld dword ptr [0x99b9b4] */ FPUSH(R_F32((u32)(0x99b9b4u)));
    /* 0089a216: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0089a218: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_0089a21b:; BB(0x0089a21b);
    /* 0089a21b: fld dword ptr [eax - 8] */ FPUSH(R_F32((u32)(r_eax+0xfffffff8u)));
    /* 0089a21e: mov edi, dword ptr [ecx + 0x104c] */ r_edi = R32((u32)(r_ecx+0x104cu));
    /* 0089a224: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0089a226: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0089a227: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0089a229: fstp dword ptr [edx + edi] */ W_F32((u32)(r_edx+r_edi), ST(0)); FPOP();
    /* 0089a22c: mov edi, dword ptr [ecx + 0x104c] */ r_edi = R32((u32)(r_ecx+0x104cu));
    /* 0089a232: fld dword ptr [eax - 4] */ FPUSH(R_F32((u32)(r_eax+0xfffffffcu)));
    /* 0089a235: add edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0089a238: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0089a23a: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0089a23c: fstp dword ptr [edx + edi - 0xc] */ W_F32((u32)(r_edx+r_edi+0xfffffff4u), ST(0)); FPOP();
    /* 0089a240: mov edi, dword ptr [ecx + 0x104c] */ r_edi = R32((u32)(r_ecx+0x104cu));
    /* 0089a246: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 0089a248: add eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0089a24b: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0089a24d: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0089a24f: fstp dword ptr [edx + edi - 8] */ W_F32((u32)(r_edx+r_edi+0xfffffff8u), ST(0)); FPOP();
    /* 0089a253: mov edi, dword ptr [ecx + 0x104c] */ r_edi = R32((u32)(r_ecx+0x104cu));
    /* 0089a259: fld dword ptr [eax - 0xc] */ FPUSH(R_F32((u32)(r_eax+0xfffffff4u)));
    /* 0089a25c: fstp dword ptr [edx + edi - 4] */ W_F32((u32)(r_edx+r_edi+0xfffffffcu), ST(0)); FPOP();
    /* 0089a260: cmp esi, dword ptr [ecx + 0x1058] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ecx+0x1058u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0089a266: jb 0x89a21b */ if (fC) goto L_0089a21b;
L_0089a268:; BB(0x0089a268);
    /* 0089a268: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0089a26a: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0089a26c:; BB(0x0089a26c);
    /* 0089a26c: mov eax, dword ptr [ecx + 0x104c] */ r_eax = R32((u32)(r_ecx+0x104cu));
    /* 0089a272: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0089a273: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0089a274: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0089a275: ret 4 */ FN_RET(0x00899f81); r_esp += 8; return;
}

