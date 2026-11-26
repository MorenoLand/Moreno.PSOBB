#include "protos.h"

void f_0089f1dd(void) /* ??_GCWin32Heap@ATL@@UAEPAXI@Z_4 */
{
    FN_ENTER(0x0089f1dd);
    /* 0089f1dd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089f1de: mov esi, ecx */ r_esi = r_ecx;
    /* 0089f1e0: call 0x89ea08 */ r_esp -= 4; W32(r_esp, 0x89f1e5u); f_0089ea08();
    /* 0089f1e5: test byte ptr [esp + 8], 1 */ {  u32 a = R8((u32)(r_esp+0x8u)); u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0089f1ea: je 0x89f1f3 */ if (fZ) goto L_0089f1f3;
L_0089f1ec:; BB(0x0089f1ec);
    /* 0089f1ec: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089f1ed: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x89f1f2u); f_00857e98();
    /* 0089f1f2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0089f1f3:; BB(0x0089f1f3);
    /* 0089f1f3: mov eax, esi */ r_eax = r_esi;
    /* 0089f1f5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0089f1f6: ret 4 */ FN_RET(0x0089f1dd); r_esp += 8; return;
}

void f_0089f1f9(void) /* ??_GCWin32Heap@ATL@@UAEPAXI@Z_5 */
{
    FN_ENTER(0x0089f1f9);
    /* 0089f1f9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089f1fa: mov esi, ecx */ r_esi = r_ecx;
    /* 0089f1fc: call 0x89f215 */ r_esp -= 4; W32(r_esp, 0x89f201u); f_0089f215();
    /* 0089f201: test byte ptr [esp + 8], 1 */ {  u32 a = R8((u32)(r_esp+0x8u)); u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0089f206: je 0x89f20f */ if (fZ) goto L_0089f20f;
L_0089f208:; BB(0x0089f208);
    /* 0089f208: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089f209: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x89f20eu); f_00857e98();
    /* 0089f20e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0089f20f:; BB(0x0089f20f);
    /* 0089f20f: mov eax, esi */ r_eax = r_esi;
    /* 0089f211: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0089f212: ret 4 */ FN_RET(0x0089f1f9); r_esp += 8; return;
}

void f_0089f21a(void) /* ??0CD3DXFile@@QAE@XZ */
{
    FN_ENTER(0x0089f21a);
    /* 0089f21a: mov eax, ecx */ r_eax = r_ecx;
    /* 0089f21c: or dword ptr [eax], 0xffffffff */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 0089f21f: or dword ptr [eax + 4], 0xffffffff */ { u32 ad = (u32)(r_eax+0x4u);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 0089f223: and dword ptr [eax + 8], 0 */ { u32 ad = (u32)(r_eax+0x8u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0089f227: and dword ptr [eax + 0xc], 0 */ { u32 ad = (u32)(r_eax+0xcu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0089f22b: ret  */ FN_RET(0x0089f21a); r_esp += 4; return;
}

void f_0089f710(void) /* ??0CD3DXAssembler@@QAE@XZ */
{
    FN_ENTER(0x0089f710);
    /* 0089f710: mov eax, 0x8cb968 */ r_eax = 0x8cb968u;
    /* 0089f715: call 0x8cb064 */ r_esp -= 4; W32(r_esp, 0x89f71au); f_008cb064();
    /* 0089f71a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0089f71b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089f71c: mov esi, ecx */ r_esi = r_ecx;
    /* 0089f71e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0089f71f: mov dword ptr [ebp - 0x10], esi */ W32((u32)(r_ebp+0xfffffff0u), r_esi);
    /* 0089f722: call 0x8a89d7 */ r_esp -= 4; W32(r_esp, 0x89f727u); f_008a89d7();
    /* 0089f727: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0089f729: lea ecx, [esi + 0x14] */ r_ecx = (u32)(r_esi+0x14u);
    /* 0089f72c: mov dword ptr [ebp - 4], edi */ W32((u32)(r_ebp+0xfffffffcu), r_edi);
    /* 0089f72f: call 0x89975e */ r_esp -= 4; W32(r_esp, 0x89f734u); f_0089975e();
    /* 0089f734: lea ecx, [esi + 0x24] */ r_ecx = (u32)(r_esi+0x24u);
    /* 0089f737: mov byte ptr [ebp - 4], 1 */ W8((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0089f73b: call 0x89975e */ r_esp -= 4; W32(r_esp, 0x89f740u); f_0089975e();
    /* 0089f740: lea ecx, [esi + 0x34] */ r_ecx = (u32)(r_esi+0x34u);
    /* 0089f743: mov byte ptr [ebp - 4], 2 */ W8((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0089f747: call 0x89975e */ r_esp -= 4; W32(r_esp, 0x89f74cu); f_0089975e();
    /* 0089f74c: lea ecx, [esi + 0x44] */ r_ecx = (u32)(r_esi+0x44u);
    /* 0089f74f: mov byte ptr [ebp - 4], 3 */ W8((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 0089f753: call 0x89975e */ r_esp -= 4; W32(r_esp, 0x89f758u); f_0089975e();
    /* 0089f758: lea ecx, [esi + 0x54] */ r_ecx = (u32)(r_esi+0x54u);
    /* 0089f75b: mov byte ptr [ebp - 4], 4 */ W8((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 0089f75f: call 0x89975e */ r_esp -= 4; W32(r_esp, 0x89f764u); f_0089975e();
    /* 0089f764: lea ecx, [esi + 0x64] */ r_ecx = (u32)(r_esi+0x64u);
    /* 0089f767: mov byte ptr [ebp - 4], 5 */ W8((u32)(r_ebp+0xfffffffcu), 0x5u);
    /* 0089f76b: call 0x89975e */ r_esp -= 4; W32(r_esp, 0x89f770u); f_0089975e();
    /* 0089f770: lea ecx, [esi + 0x74] */ r_ecx = (u32)(r_esi+0x74u);
    /* 0089f773: mov byte ptr [ebp - 4], 6 */ W8((u32)(r_ebp+0xfffffffcu), 0x6u);
    /* 0089f777: call 0x89975e */ r_esp -= 4; W32(r_esp, 0x89f77cu); f_0089975e();
    /* 0089f77c: lea ecx, [esi + 0x84] */ r_ecx = (u32)(r_esi+0x84u);
    /* 0089f782: mov byte ptr [ebp - 4], 7 */ W8((u32)(r_ebp+0xfffffffcu), 0x7u);
    /* 0089f786: call 0x8a89d7 */ r_esp -= 4; W32(r_esp, 0x89f78bu); f_008a89d7();
    /* 0089f78b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0089f78e: mov dword ptr [0xaea330], esi */ W32((u32)(0xaea330u), r_esi);
    /* 0089f794: mov dword ptr [esi + 0x98], edi */ W32((u32)(r_esi+0x98u), r_edi);
    /* 0089f79a: mov dword ptr [esi + 0x9c], edi */ W32((u32)(r_esi+0x9cu), r_edi);
    /* 0089f7a0: mov dword ptr [esi + 0xa0], edi */ W32((u32)(r_esi+0xa0u), r_edi);
    /* 0089f7a6: mov dword ptr [esi + 0xa4], edi */ W32((u32)(r_esi+0xa4u), r_edi);
    /* 0089f7ac: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0089f7ad: mov eax, esi */ r_eax = r_esi;
    /* 0089f7af: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0089f7b0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0089f7b7: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 0089f7b8: ret  */ FN_RET(0x0089f710); r_esp += 4; return;
}

void f_0089f7b9(void) /* ??1CD3DXAssembler@@QAE@XZ */
{
    FN_ENTER(0x0089f7b9);
    /* 0089f7b9: mov eax, 0x8cb968 */ r_eax = 0x8cb968u;
    /* 0089f7be: call 0x8cb064 */ r_esp -= 4; W32(r_esp, 0x89f7c3u); f_008cb064();
    /* 0089f7c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0089f7c4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089f7c5: mov esi, ecx */ r_esi = r_ecx;
    /* 0089f7c7: mov dword ptr [ebp - 0x10], esi */ W32((u32)(r_ebp+0xfffffff0u), r_esi);
    /* 0089f7ca: lea ecx, [esi + 0x84] */ r_ecx = (u32)(r_esi+0x84u);
    /* 0089f7d0: mov dword ptr [ebp - 4], 7 */ W32((u32)(r_ebp+0xfffffffcu), 0x7u);
    /* 0089f7d7: call 0x8a89ea */ r_esp -= 4; W32(r_esp, 0x89f7dcu); f_008a89ea();
    /* 0089f7dc: lea ecx, [esi + 0x74] */ r_ecx = (u32)(r_esi+0x74u);
    /* 0089f7df: mov byte ptr [ebp - 4], 6 */ W8((u32)(r_ebp+0xfffffffcu), 0x6u);
    /* 0089f7e3: call 0x8a8953 */ r_esp -= 4; W32(r_esp, 0x89f7e8u); f_008a8953();
    /* 0089f7e8: lea ecx, [esi + 0x64] */ r_ecx = (u32)(r_esi+0x64u);
    /* 0089f7eb: mov byte ptr [ebp - 4], 5 */ W8((u32)(r_ebp+0xfffffffcu), 0x5u);
    /* 0089f7ef: call 0x8a8953 */ r_esp -= 4; W32(r_esp, 0x89f7f4u); f_008a8953();
    /* 0089f7f4: lea ecx, [esi + 0x54] */ r_ecx = (u32)(r_esi+0x54u);
    /* 0089f7f7: mov byte ptr [ebp - 4], 4 */ W8((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 0089f7fb: call 0x8a8953 */ r_esp -= 4; W32(r_esp, 0x89f800u); f_008a8953();
    /* 0089f800: lea ecx, [esi + 0x44] */ r_ecx = (u32)(r_esi+0x44u);
    /* 0089f803: mov byte ptr [ebp - 4], 3 */ W8((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 0089f807: call 0x8a8953 */ r_esp -= 4; W32(r_esp, 0x89f80cu); f_008a8953();
    /* 0089f80c: lea ecx, [esi + 0x34] */ r_ecx = (u32)(r_esi+0x34u);
    /* 0089f80f: mov byte ptr [ebp - 4], 2 */ W8((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0089f813: call 0x8a8953 */ r_esp -= 4; W32(r_esp, 0x89f818u); f_008a8953();
    /* 0089f818: lea ecx, [esi + 0x24] */ r_ecx = (u32)(r_esi+0x24u);
    /* 0089f81b: mov byte ptr [ebp - 4], 1 */ W8((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0089f81f: call 0x8a8953 */ r_esp -= 4; W32(r_esp, 0x89f824u); f_008a8953();
    /* 0089f824: and byte ptr [ebp - 4], 0 */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R8(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffu; W8(ad, r);  }
    /* 0089f828: lea ecx, [esi + 0x14] */ r_ecx = (u32)(r_esi+0x14u);
    /* 0089f82b: call 0x8a8953 */ r_esp -= 4; W32(r_esp, 0x89f830u); f_008a8953();
    /* 0089f830: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 0089f834: mov ecx, esi */ r_ecx = r_esi;
    /* 0089f836: call 0x8a89ea */ r_esp -= 4; W32(r_esp, 0x89f83bu); f_008a89ea();
    /* 0089f83b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0089f83e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0089f83f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0089f846: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 0089f847: ret  */ FN_RET(0x0089f7b9); r_esp += 4; return;
}

