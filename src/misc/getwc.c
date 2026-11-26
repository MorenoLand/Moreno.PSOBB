#include "protos.h"

void f_00864767(void) /* __getwc_lk */
{
    FN_ENTER(0x00864767);
    /* 00864767: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00864768: mov ebp, esp */ r_ebp = r_esp;
    /* 0086476a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0086476b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086476c: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 0086476f: test byte ptr [esi + 0xc], 0x40 */ {  u32 a = R8((u32)(r_esi+0xcu)); u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00864773: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00864774: jne 0x86483e */ if (!fZ) goto L_0086483e;
L_0086477a:; BB(0x0086477a);
    /* 0086477a: mov eax, dword ptr [esi + 0x10] */ r_eax = R32((u32)(r_esi+0x10u));
    /* 0086477d: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00864780: je 0x864799 */ if (fZ) goto L_00864799;
L_00864782:; BB(0x00864782);
    /* 00864782: mov ecx, eax */ r_ecx = r_eax;
    /* 00864784: sar ecx, 5 */ { u32 c = (5u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00864787: mov ecx, dword ptr [ecx*4 + 0xaf0a80] */ r_ecx = R32((u32)(r_ecx*4+0xaf0a80u));
    /* 0086478e: and eax, 0x1f */ {  u32 a = r_eax; u32 b = 0x1fu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00864791: lea eax, [eax + eax*8] */ r_eax = (u32)(r_eax+r_eax*8);
    /* 00864794: lea eax, [ecx + eax*4] */ r_eax = (u32)(r_ecx+r_eax*4);
    /* 00864797: jmp 0x86479e */ goto L_0086479e;
L_00864799:; BB(0x00864799);
    /* 00864799: mov eax, 0xa24120 */ r_eax = 0xa24120u;
L_0086479e:; BB(0x0086479e);
    /* 0086479e: test byte ptr [eax + 4], 0x80 */ {  u32 a = R8((u32)(r_eax+0x4u)); u32 b = 0x80u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008647a2: je 0x86483e */ if (fZ) goto L_0086483e;
L_008647a8:; BB(0x008647a8);
    /* 008647a8: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 008647aa: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008647ab: dec dword ptr [esi + 4] */ { u32 ad = (u32)(r_esi+0x4u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fS = ((r >> 31) & 1); }
    /* 008647ae: js 0x8647ba */ if (fS) goto L_008647ba;
L_008647b0:; BB(0x008647b0);
    /* 008647b0: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 008647b2: movzx eax, byte ptr [ecx] */ r_eax = (u32)R8((u32)(r_ecx));
    /* 008647b5: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008647b6: mov dword ptr [esi], ecx */ W32((u32)(r_esi), r_ecx);
    /* 008647b8: jmp 0x8647c1 */ goto L_008647c1;
L_008647ba:; BB(0x008647ba);
    /* 008647ba: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008647bb: call 0x861994 */ r_esp -= 4; W32(r_esp, 0x8647c0u); f_00861994();
    /* 008647c0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008647c1:; BB(0x008647c1);
    /* 008647c1: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008647c4: jne 0x8647cf */ if (!fZ) goto L_008647cf;
L_008647c6:; BB(0x008647c6);
    /* 008647c6: or ax, 0xffff */ {  u32 a = (u16)r_eax; u32 b = 0xffffu; u32 r = (a | b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu); fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008647ca: jmp 0x864857 */ goto L_00864857;
L_008647cf:; BB(0x008647cf);
    /* 008647cf: mov ecx, dword ptr [0xa23fa0] */ r_ecx = R32((u32)(0xa23fa0u));
    /* 008647d5: mov byte ptr [ebp - 4], al */ W8((u32)(r_ebp+0xfffffffcu), (u8)r_eax);
    /* 008647d8: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 008647db: test byte ptr [ecx + eax*2 + 1], 0x80 */ {  u32 a = R8((u32)(r_ecx+r_eax*2+0x1u)); u32 b = 0x80u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008647e0: je 0x864815 */ if (fZ) goto L_00864815;
L_008647e2:; BB(0x008647e2);
    /* 008647e2: dec dword ptr [esi + 4] */ { u32 ad = (u32)(r_esi+0x4u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fS = ((r >> 31) & 1); }
    /* 008647e5: js 0x8647f1 */ if (fS) goto L_008647f1;
L_008647e7:; BB(0x008647e7);
    /* 008647e7: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 008647e9: movzx eax, byte ptr [ecx] */ r_eax = (u32)R8((u32)(r_ecx));
    /* 008647ec: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008647ed: mov dword ptr [esi], ecx */ W32((u32)(r_esi), r_ecx);
    /* 008647ef: jmp 0x8647f8 */ goto L_008647f8;
L_008647f1:; BB(0x008647f1);
    /* 008647f1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008647f2: call 0x861994 */ r_esp -= 4; W32(r_esp, 0x8647f7u); f_00861994();
    /* 008647f7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008647f8:; BB(0x008647f8);
    /* 008647f8: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008647fb: jne 0x86480f */ if (!fZ) goto L_0086480f;
L_008647fd:; BB(0x008647fd);
    /* 008647fd: movsx eax, byte ptr [ebp - 4] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0xfffffffcu));
    /* 00864801: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00864802: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00864803: call 0x8692a8 */ r_esp -= 4; W32(r_esp, 0x864808u); f_008692a8();
    /* 00864808: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00864809: or ax, 0xffff */ {  u32 a = (u16)r_eax; u32 b = 0xffffu; u32 r = (a | b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu); fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0086480d: jmp 0x864856 */ goto L_00864856;
L_0086480f:; BB(0x0086480f);
    /* 0086480f: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00864811: mov byte ptr [ebp - 3], al */ W8((u32)(r_ebp+0xfffffffdu), (u8)r_eax);
    /* 00864814: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
L_00864815:; BB(0x00864815);
    /* 00864815: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00864816: lea eax, [ebp - 4] */ r_eax = (u32)(r_ebp+0xfffffffcu);
    /* 00864819: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086481a: lea eax, [ebp + 0xa] */ r_eax = (u32)(r_ebp+0xau);
    /* 0086481d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086481e: call 0x866f7f */ r_esp -= 4; W32(r_esp, 0x864823u); f_00866f7f();
    /* 00864823: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00864826: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00864829: jne 0x864838 */ if (!fZ) goto L_00864838;
L_0086482b:; BB(0x0086482b);
    /* 0086482b: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x864830u); f_00859dd6();
    /* 00864830: mov dword ptr [eax], 0x2a */ W32((u32)(r_eax), 0x2au);
    /* 00864836: jmp 0x8647c6 */ goto L_008647c6;
L_00864838:; BB(0x00864838);
    /* 00864838: mov ax, word ptr [ebp + 0xa] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xau))) & 0xffffu);
    /* 0086483c: jmp 0x864857 */ goto L_00864857;
L_0086483e:; BB(0x0086483e);
    /* 0086483e: add dword ptr [esi + 4], -2 */ { u32 ad = (u32)(r_esi+0x4u);  u32 a = R32(ad); u32 b = 0xfffffffeu; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fS = ((r >> 31) & 1); }
    /* 00864842: js 0x864850 */ if (fS) goto L_00864850;
L_00864844:; BB(0x00864844);
    /* 00864844: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 00864846: mov ax, word ptr [ecx] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ecx))) & 0xffffu);
    /* 00864849: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0086484c: mov dword ptr [esi], ecx */ W32((u32)(r_esi), r_ecx);
    /* 0086484e: jmp 0x864857 */ goto L_00864857;
L_00864850:; BB(0x00864850);
    /* 00864850: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00864851: call 0x8696ab */ r_esp -= 4; W32(r_esp, 0x864856u); f_008696ab();
L_00864856:; BB(0x00864856);
    /* 00864856: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00864857:; BB(0x00864857);
    /* 00864857: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00864858: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00864859: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 0086485a: ret  */ FN_RET(0x00864767); r_esp += 4; return;
}

