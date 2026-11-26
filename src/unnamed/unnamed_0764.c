#include "protos.h"

void f_00764850(void) /* sub_764850 */
{
    FN_ENTER(0x00764850);
    /* 00764850: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00764851: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00764853: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00764855: call 0x764874 */ r_esp -= 4; W32(r_esp, 0x76485au); f_00764874();
    /* 0076485a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0076485e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00764860: jne 0x764866 */ if (!fZ) goto L_00764866;
L_00764862:; BB(0x00764862);
    /* 00764862: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00764863: ret 4 */ FN_RET(0x00764850); r_esp += 8; return;
L_00764866:; BB(0x00764866);
    /* 00764866: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00764867: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x76486cu); f_005c2f74();
    /* 0076486c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0076486d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0076486e: ret 4 */ FN_RET(0x00764850); r_esp += 8; return;
}

void f_00764874(void) /* sub_764874 */
{
    FN_ENTER(0x00764874);
    /* 00764874: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00764875: mov ebp, esp */ r_ebp = r_esp;
    /* 00764877: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00764879: push 0x8f3734 */ { u32 v = 0x8f3734u; r_esp -= 4; W32(r_esp, v); }
    /* 0076487e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00764884: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00764885: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0076488c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0076488f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00764892: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00764895: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00764898: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0076489b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0076489e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007648a5: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 007648a8: mov dword ptr [eax], 0xb43148 */ W32((u32)(r_eax), 0xb43148u);
    /* 007648ae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007648af: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x7648b4u); f_007b4e84();
    /* 007648b4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007648b5: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007648b8: call 0x7b9de0 */ r_esp -= 4; W32(r_esp, 0x7648bdu); f_007b9de0();
    /* 007648bd: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 007648c4: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007648c7: call 0x7b4aec */ r_esp -= 4; W32(r_esp, 0x7648ccu); f_007b4aec();
    /* 007648cc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007648cf: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007648d6: mov esp, ebp */ r_esp = r_ebp;
    /* 007648d8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007648d9: ret  */ FN_RET(0x00764874); r_esp += 4; return;
}

void f_007648dc(void) /* sub_7648DC */
{
    FN_ENTER(0x007648dc);
    /* 007648dc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007648dd: mov ebp, esp */ r_ebp = r_esp;
    /* 007648df: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007648e1: push 0x8f3750 */ { u32 v = 0x8f3750u; r_esp -= 4; W32(r_esp, v); }
    /* 007648e6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 007648ec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007648ed: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 007648f4: sub esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007648f7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 007648fa: mov dword ptr [ebp - 0x2c], edi */ W32((u32)(r_ebp+0xffffffd4u), r_edi);
    /* 007648fd: mov dword ptr [ebp - 0x28], esi */ W32((u32)(r_ebp+0xffffffd8u), r_esi);
    /* 00764900: mov dword ptr [ebp - 0x24], ebx */ W32((u32)(r_ebp+0xffffffdcu), r_ebx);
    /* 00764903: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00764906: mov eax, dword ptr [0xa9afcc] */ r_eax = R32((u32)(0xa9afccu));
    /* 0076490b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076490d: je 0x764920 */ if (fZ) goto L_00764920;
L_0076490f:; BB(0x0076490f);
    /* 0076490f: mov eax, ecx */ r_eax = r_ecx;
    /* 00764911: mov edx, dword ptr [eax + 0xc8] */ r_edx = R32((u32)(r_eax+0xc8u));
    /* 00764917: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0076491a: jne 0x764b16 */ if (!fZ) goto L_00764b16;
L_00764920:; BB(0x00764920);
    /* 00764920: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00764923: call 0x764ba8 */ r_esp -= 4; W32(r_esp, 0x764928u); f_00764ba8();
    /* 00764928: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076492a: je 0x764989 */ if (fZ) goto L_00764989;
L_0076492c:; BB(0x0076492c);
    /* 0076492c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0076492f: mov eax, dword ptr [ecx + 0x38] */ r_eax = R32((u32)(r_ecx+0x38u));
    /* 00764932: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00764935: mov edx, dword ptr [ecx + 0x3c] */ r_edx = R32((u32)(r_ecx+0x3cu));
    /* 00764938: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 0076493b: mov ebx, dword ptr [ecx + 0x40] */ r_ebx = R32((u32)(r_ecx+0x40u));
    /* 0076493e: mov dword ptr [ebp - 0x30], ebx */ W32((u32)(r_ebp+0xffffffd0u), r_ebx);
    /* 00764941: call 0x7b51c4 */ r_esp -= 4; W32(r_esp, 0x764946u); f_007b51c4();
    /* 00764946: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00764949: call 0x7b6894 */ r_esp -= 4; W32(r_esp, 0x76494eu); f_007b6894();
    /* 0076494e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00764951: call 0x7b798c */ r_esp -= 4; W32(r_esp, 0x764956u); f_007b798c();
    /* 00764956: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00764959: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0076495c: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 0076495f: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00764962: mov dword ptr [ebx + 0x38], eax */ W32((u32)(r_ebx+0x38u), r_eax);
    /* 00764965: mov dword ptr [ebx + 0x3c], edx */ W32((u32)(r_ebx+0x3cu), r_edx);
    /* 00764968: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00764969: mov dword ptr [ebx + 0x40], ecx */ W32((u32)(r_ebx+0x40u), r_ecx);
    /* 0076496c: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x764971u); f_007b999c();
    /* 00764971: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00764972: mov eax, ebx */ r_eax = r_ebx;
    /* 00764974: mov eax, dword ptr [eax + 0xa4] */ r_eax = R32((u32)(r_eax+0xa4u));
    /* 0076497a: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 0076497d: test edx, 0x180000 */ {  u32 a = r_edx; u32 b = 0x180000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00764983: jne 0x764a18 */ if (!fZ) goto L_00764a18;
L_00764989:; BB(0x00764989);
    /* 00764989: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0076498c: mov edx, dword ptr [eax + 0xe4] */ r_edx = R32((u32)(r_eax+0xe4u));
    /* 00764992: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00764994: je 0x764a01 */ if (fZ) goto L_00764a01;
L_00764996:; BB(0x00764996);
    /* 00764996: mov ecx, eax */ r_ecx = r_eax;
    /* 00764998: call 0x764ba8 */ r_esp -= 4; W32(r_esp, 0x76499du); f_00764ba8();
    /* 0076499d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076499f: je 0x7649a8 */ if (fZ) goto L_007649a8;
L_007649a1:; BB(0x007649a1);
    /* 007649a1: mov edx, 0xffffa24c */ r_edx = 0xffffa24cu;
    /* 007649a6: jmp 0x7649c4 */ goto L_007649c4;
L_007649a8:; BB(0x007649a8);
    /* 007649a8: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 007649ab: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 007649ad: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007649af: call 0x7b5290 */ r_esp -= 4; W32(r_esp, 0x7649b4u); f_007b5290();
    /* 007649b4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007649b6: jne 0x7649bf */ if (!fZ) goto L_007649bf;
L_007649b8:; BB(0x007649b8);
    /* 007649b8: mov edx, 0xff909090 */ r_edx = 0xff909090u;
    /* 007649bd: jmp 0x7649c4 */ goto L_007649c4;
L_007649bf:; BB(0x007649bf);
    /* 007649bf: mov edx, 0xffffa24c */ r_edx = 0xffffa24cu;
L_007649c4:; BB(0x007649c4);
    /* 007649c4: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 007649c7: add esp, -0x14 */ {  u32 a = r_esp; u32 b = 0xffffffecu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007649ca: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 007649ce: mov edx, dword ptr [ecx + 0xac] */ r_edx = R32((u32)(r_ecx+0xacu));
    /* 007649d4: fld dword ptr [edx + 0xc] */ FPUSH(R_F32((u32)(r_edx+0xcu)));
    /* 007649d7: fmul dword ptr [0x97609c] */ ST(0) = ST(0) * R_F32((u32)(0x97609cu));
    /* 007649dd: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 007649e1: lea eax, [ecx + 0xcc] */ r_eax = (u32)(r_ecx+0xccu);
    /* 007649e7: mov ebx, 1 */ r_ebx = 0x1u;
    /* 007649ec: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 007649ef: mov word ptr [esp + 0xc], bx */ W16((u32)(r_esp+0xcu), (u16)r_ebx);
    /* 007649f4: mov word ptr [esp + 0x10], bx */ W16((u32)(r_esp+0x10u), (u16)r_ebx);
    /* 007649f9: call 0x80575c */ r_esp -= 4; W32(r_esp, 0x7649feu); f_0080575c();
    /* 007649fe: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_00764a01:; BB(0x00764a01);
    /* 00764a01: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 00764a04: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 00764a07: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00764a0a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00764a0d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00764a14: mov esp, ebp */ r_esp = r_ebp;
    /* 00764a16: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00764a17: ret  */ FN_RET(0x007648dc); r_esp += 4; return;
L_00764a18:; BB(0x00764a18);
    /* 00764a18: fld dword ptr [eax + 0xc] */ FPUSH(R_F32((u32)(r_eax+0xcu)));
    /* 00764a1b: fmul dword ptr [0x9760a4] */ ST(0) = ST(0) * R_F32((u32)(0x9760a4u));
    /* 00764a21: mov eax, dword ptr [0xa9b07c] */ r_eax = R32((u32)(0xa9b07cu));
    /* 00764a26: movzx edx, word ptr [eax + 0x1c] */ r_edx = (u32)R16((u32)(r_eax+0x1cu));
    /* 00764a2a: fst dword ptr [ebp - 0x20] */ W_F32((u32)(r_ebp+0xffffffe0u), ST(0));
    /* 00764a2d: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00764a2f: fstp dword ptr [ebp - 0x1c] */ W_F32((u32)(r_ebp+0xffffffe4u), ST(0)); FPOP();
    /* 00764a32: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00764a35: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_00764a37:; BB(0x00764a37);
    /* 00764a37: mov ebx, dword ptr [esi*4 + 0xaad6e0] */ r_ebx = R32((u32)(r_esi*4+0xaad6e0u));
    /* 00764a3e: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00764a40: je 0x764989 */ if (fZ) goto L_00764989;
L_00764a46:; BB(0x00764a46);
    /* 00764a46: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00764a49: movzx edx, word ptr [ebx + 0x1c] */ r_edx = (u32)R16((u32)(r_ebx+0x1cu));
    /* 00764a4d: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00764a4f: jg 0x764a5c */ if ((!fZ&&fS==fO)) goto L_00764a5c;
L_00764a51:; BB(0x00764a51);
    /* 00764a51: lea ecx, [eax + 8] */ r_ecx = (u32)(r_eax+0x8u);
    /* 00764a54: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00764a56: jle 0x764b05 */ if ((fZ||fS!=fO)) goto L_00764b05;
L_00764a5c:; BB(0x00764a5c);
    /* 00764a5c: lea ecx, [ebp - 0x38] */ r_ecx = (u32)(r_ebp+0xffffffc8u);
    /* 00764a5f: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 00764a62: mov edi, dword ptr [ebx + 0x3c] */ r_edi = R32((u32)(r_ebx+0x3cu));
    /* 00764a65: mov edx, dword ptr [ebx + 0x40] */ r_edx = R32((u32)(r_ebx+0x40u));
    /* 00764a68: mov dword ptr [ebx + 0x44], eax */ W32((u32)(r_ebx+0x44u), r_eax);
    /* 00764a6b: mov dword ptr [ebx + 0x48], edi */ W32((u32)(r_ebx+0x48u), r_edi);
    /* 00764a6e: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00764a71: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00764a74: mov dword ptr [ebp - 0x34], edi */ W32((u32)(r_ebp+0xffffffccu), r_edi);
    /* 00764a77: mov dword ptr [ebx + 0x4c], edx */ W32((u32)(r_ebx+0x4cu), r_edx);
    /* 00764a7a: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 00764a7d: mov edx, dword ptr [eax + 0xa4] */ r_edx = R32((u32)(r_eax+0xa4u));
    /* 00764a83: add edx, 0x1c */ {  u32 a = r_edx; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00764a86: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x764a8bu); f_0082f9c4();
    /* 00764a8b: fld dword ptr [ebp - 0x38] */ FPUSH(R_F32((u32)(r_ebp+0xffffffc8u)));
    /* 00764a8e: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00764a90: fld dword ptr [ebp - 0x30] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd0u)));
    /* 00764a93: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00764a95: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00764a97: fld dword ptr [ebp - 0x1c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe4u)));
    /* 00764a9a: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00764a9c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00764a9e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00764a9f: jb 0x764b05 */ if (fC) goto L_00764b05;
L_00764aa1:; BB(0x00764aa1);
    /* 00764aa1: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 00764aa8: lea ecx, [ebp - 0x38] */ r_ecx = (u32)(r_ebp+0xffffffc8u);
    /* 00764aab: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x764ab0u); f_0082df08();
    /* 00764ab0: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00764ab2: fld dword ptr [ebp - 0x38] */ FPUSH(R_F32((u32)(r_ebp+0xffffffc8u)));
    /* 00764ab5: fld dword ptr [ebp - 0x20] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe0u)));
    /* 00764ab8: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 00764aba: fld dword ptr [ebp - 0x30] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd0u)));
    /* 00764abd: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00764ac0: mov edx, dword ptr [eax + 0xa4] */ r_edx = R32((u32)(r_eax+0xa4u));
    /* 00764ac6: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00764ac8: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00764aca: fstp dword ptr [ebp - 0x38] */ W_F32((u32)(r_ebp+0xffffffc8u), ST(0)); FPOP();
    /* 00764acd: fstp dword ptr [ebp - 0x30] */ W_F32((u32)(r_ebp+0xffffffd0u), ST(0)); FPOP();
    /* 00764ad0: lea ecx, [ebp - 0x38] */ r_ecx = (u32)(r_ebp+0xffffffc8u);
    /* 00764ad3: add edx, 0x1c */ {  u32 a = r_edx; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00764ad6: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x764adbu); f_0082ebac();
    /* 00764adb: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00764ade: lea edx, [ebp - 0x38] */ r_edx = (u32)(r_ebp+0xffffffc8u);
    /* 00764ae1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00764ae3: mov eax, dword ptr [ebx + 0x3c] */ r_eax = R32((u32)(r_ebx+0x3cu));
    /* 00764ae6: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00764ae9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00764aea: call 0x7b4c58 */ r_esp -= 4; W32(r_esp, 0x764aefu); f_007b4c58();
    /* 00764aef: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00764af1: je 0x764b05 */ if (fZ) goto L_00764b05;
L_00764af3:; BB(0x00764af3);
    /* 00764af3: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00764af6: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00764af9: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00764afc: mov dword ptr [ebx + 0x38], eax */ W32((u32)(r_ebx+0x38u), r_eax);
    /* 00764aff: mov dword ptr [ebx + 0x3c], edx */ W32((u32)(r_ebx+0x3cu), r_edx);
    /* 00764b02: mov dword ptr [ebx + 0x40], ecx */ W32((u32)(r_ebx+0x40u), r_ecx);
L_00764b05:; BB(0x00764b05);
    /* 00764b05: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00764b08: cmp esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00764b0b: jl 0x764a37 */ if ((fS!=fO)) goto L_00764a37;
L_00764b11:; BB(0x00764b11);
    /* 00764b11: jmp 0x764989 */ goto L_00764989;
L_00764b16:; BB(0x00764b16);
    /* 00764b16: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00764b18: lea ecx, [ebp - 0x48] */ r_ecx = (u32)(r_ebp+0xffffffb8u);
    /* 00764b1b: call 0x521a4c */ r_esp -= 4; W32(r_esp, 0x764b20u); f_00521a4c();
    /* 00764b20: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00764b27: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00764b2a: mov ecx, dword ptr [0xa9b07c] */ r_ecx = R32((u32)(0xa9b07cu));
    /* 00764b30: lea eax, [ebp - 0x48] */ r_eax = (u32)(r_ebp+0xffffffb8u);
    /* 00764b33: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00764b34: lea ebx, [edx + 0x38] */ r_ebx = (u32)(r_edx+0x38u);
    /* 00764b37: push dword ptr [edx + 0xbc] */ { u32 v = R32((u32)(r_edx+0xbcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00764b3d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00764b3e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00764b40: call 0x76a724 */ r_esp -= 4; W32(r_esp, 0x764b45u); f_0076a724();
    /* 00764b45: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00764b48: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00764b4a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00764b4c: jle 0x764b91 */ if ((fZ||fS!=fO)) goto L_00764b91;
L_00764b4e:; BB(0x00764b4e);
    /* 00764b4e: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00764b50: jl 0x764b56 */ if ((fS!=fO)) goto L_00764b56;
L_00764b52:; BB(0x00764b52);
    /* 00764b52: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00764b54: jl 0x764b5b */ if ((fS!=fO)) goto L_00764b5b;
L_00764b56:; BB(0x00764b56);
    /* 00764b56: mov ebx, dword ptr [ebp - 0x44] */ r_ebx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00764b59: jmp 0x764b61 */ goto L_00764b61;
L_00764b5b:; BB(0x00764b5b);
    /* 00764b5b: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 00764b5e: mov ebx, dword ptr [eax + esi*4] */ r_ebx = R32((u32)(r_eax+r_esi*4));
L_00764b61:; BB(0x00764b61);
    /* 00764b61: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 00764b64: test al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00764b66: je 0x764b82 */ if (fZ) goto L_00764b82;
L_00764b68:; BB(0x00764b68);
    /* 00764b68: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00764b6a: mov dword ptr [ebx + 0x270], 0 */ W32((u32)(r_ebx+0x270u), 0x0u);
    /* 00764b74: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00764b76: call dword ptr [eax + 0xa4] */ { u32 t = R32((u32)(r_eax+0xa4u)); r_esp -= 4; W32(r_esp, 0x764b7cu); call_ind(t); }
    /* 00764b7c: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00764b7f: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
L_00764b82:; BB(0x00764b82);
    /* 00764b82: or eax, 0x600 */ {  u32 a = r_eax; u32 b = 0x600u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00764b87: mov dword ptr [ebx + 0x30], eax */ W32((u32)(r_ebx+0x30u), r_eax);
    /* 00764b8a: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00764b8d: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00764b8f: jl 0x764b4e */ if ((fS!=fO)) goto L_00764b4e;
L_00764b91:; BB(0x00764b91);
    /* 00764b91: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00764b98: lea ecx, [ebp - 0x48] */ r_ecx = (u32)(r_ebp+0xffffffb8u);
    /* 00764b9b: call 0x521ac0 */ r_esp -= 4; W32(r_esp, 0x764ba0u); f_00521ac0();
    /* 00764ba0: jmp 0x764920 */ goto L_00764920;
}

void f_00764ba8(void) /* sub_764BA8 */
{
    FN_ENTER(0x00764ba8);
    /* 00764ba8: mov eax, dword ptr [ecx + 0xe0] */ r_eax = R32((u32)(r_ecx+0xe0u));
    /* 00764bae: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00764bb0: je 0x764bc2 */ if (fZ) goto L_00764bc2;
L_00764bb2:; BB(0x00764bb2);
    /* 00764bb2: mov eax, dword ptr [ecx + 0xdc] */ r_eax = R32((u32)(r_ecx+0xdcu));
    /* 00764bb8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00764bba: je 0x764bc2 */ if (fZ) goto L_00764bc2;
L_00764bbc:; BB(0x00764bbc);
    /* 00764bbc: mov eax, 1 */ r_eax = 0x1u;
    /* 00764bc1: ret  */ FN_RET(0x00764ba8); r_esp += 4; return;
L_00764bc2:; BB(0x00764bc2);
    /* 00764bc2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00764bc4: ret  */ FN_RET(0x00764ba8); r_esp += 4; return;
}

void f_00764bc8(void) /* sub_764BC8 */
{
    FN_ENTER(0x00764bc8);
    /* 00764bc8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00764bc9: mov ebp, esp */ r_ebp = r_esp;
    /* 00764bcb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00764bcd: push 0x8f376c */ { u32 v = 0x8f376cu; r_esp -= 4; W32(r_esp, v); }
    /* 00764bd2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00764bd8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00764bd9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00764be0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00764be3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00764be6: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00764be9: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00764bec: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00764bef: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00764bf2: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00764bf5: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00764bf8: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00764bfb: call 0x7b4b48 */ r_esp -= 4; W32(r_esp, 0x764c00u); f_007b4b48();
    /* 00764c00: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00764c07: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00764c0a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00764c0d: mov dword ptr [ecx], 0xb43148 */ W32((u32)(r_ecx), 0xb43148u);
    /* 00764c13: mov edx, dword ptr [0x9f5a40] */ r_edx = R32((u32)(0x9f5a40u));
    /* 00764c19: mov dword ptr [ecx + 0xac], eax */ W32((u32)(r_ecx+0xacu), r_eax);
    /* 00764c1f: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 00764c22: mov ebx, dword ptr [eax] */ r_ebx = R32((u32)(r_eax));
    /* 00764c24: mov dword ptr [ecx + 0xb0], ebx */ W32((u32)(r_ecx+0xb0u), r_ebx);
    /* 00764c2a: mov esi, dword ptr [eax + 4] */ r_esi = R32((u32)(r_eax+0x4u));
    /* 00764c2d: mov dword ptr [ecx + 0xb4], esi */ W32((u32)(r_ecx+0xb4u), r_esi);
    /* 00764c33: mov edi, dword ptr [eax + 8] */ r_edi = R32((u32)(r_eax+0x8u));
    /* 00764c36: mov dword ptr [ecx + 0xb8], edi */ W32((u32)(r_ecx+0xb8u), r_edi);
    /* 00764c3c: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 00764c3f: mov dword ptr [ecx + 0xbc], edx */ W32((u32)(r_ecx+0xbcu), r_edx);
    /* 00764c45: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 00764c48: mov dword ptr [ecx + 0xc0], edx */ W32((u32)(r_ecx+0xc0u), r_edx);
    /* 00764c4e: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 00764c51: mov dword ptr [ecx + 0xc4], edx */ W32((u32)(r_ecx+0xc4u), r_edx);
    /* 00764c57: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 00764c5a: mov dword ptr [ecx + 0xc8], edx */ W32((u32)(r_ecx+0xc8u), r_edx);
    /* 00764c60: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 00764c63: mov dword ptr [ecx + 0xcc], edx */ W32((u32)(r_ecx+0xccu), r_edx);
    /* 00764c69: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 00764c6c: mov dword ptr [ecx + 0xd0], edx */ W32((u32)(r_ecx+0xd0u), r_edx);
    /* 00764c72: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 00764c75: mov dword ptr [ecx + 0xd4], edx */ W32((u32)(r_ecx+0xd4u), r_edx);
    /* 00764c7b: mov eax, dword ptr [eax + 0x28] */ r_eax = R32((u32)(r_eax+0x28u));
    /* 00764c7e: mov dword ptr [ecx + 0xd8], eax */ W32((u32)(r_ecx+0xd8u), r_eax);
    /* 00764c84: lea eax, [ecx + 0xb0] */ r_eax = (u32)(r_ecx+0xb0u);
    /* 00764c8a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00764c8b: call 0x7b9ccc */ r_esp -= 4; W32(r_esp, 0x764c90u); f_007b9ccc();
    /* 00764c90: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00764c93: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x764c98u); f_007b4f54();
    /* 00764c98: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00764c9b: call 0x764cbc */ r_esp -= 4; W32(r_esp, 0x764ca0u); f_00764cbc();
    /* 00764ca0: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00764ca3: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00764ca6: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00764ca9: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00764cac: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00764caf: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00764cb6: mov esp, ebp */ r_esp = r_ebp;
    /* 00764cb8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00764cb9: ret 8 */ FN_RET(0x00764bc8); r_esp += 12; return;
}

void f_00764cbc(void) /* sub_764CBC */
{
    FN_ENTER(0x00764cbc);
    /* 00764cbc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00764cbd: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00764cbf: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00764cc1: call 0x764cd4 */ r_esp -= 4; W32(r_esp, 0x764cc6u); f_00764cd4();
    /* 00764cc6: mov dword ptr [ebp + 0xe4], 0 */ W32((u32)(r_ebp+0xe4u), 0x0u);
    /* 00764cd0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00764cd1: ret  */ FN_RET(0x00764cbc); r_esp += 4; return;
}

void f_00764cd4(void) /* sub_764CD4 */
{
    FN_ENTER(0x00764cd4);
    /* 00764cd4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00764cd6: mov dword ptr [ecx + 0xe0], eax */ W32((u32)(r_ecx+0xe0u), r_eax);
    /* 00764cdc: mov dword ptr [ecx + 0xdc], eax */ W32((u32)(r_ecx+0xdcu), r_eax);
    /* 00764ce2: call 0x7ba03c */ r_esp -= 4; W32(r_esp, 0x764ce7u); f_007ba03c();
    /* 00764ce7: ret  */ FN_RET(0x00764cd4); r_esp += 4; return;
}

void f_00764ce8(void) /* sub_764CE8 */
{
    FN_ENTER(0x00764ce8);
    /* 00764ce8: mov eax, 1 */ r_eax = 0x1u;
    /* 00764ced: mov dword ptr [ecx + 0xe0], eax */ W32((u32)(r_ecx+0xe0u), r_eax);
    /* 00764cf3: mov dword ptr [ecx + 0xdc], eax */ W32((u32)(r_ecx+0xdcu), r_eax);
    /* 00764cf9: lea edx, [ecx + 0x38] */ r_edx = (u32)(r_ecx+0x38u);
    /* 00764cfc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00764cfd: call 0x764d04 */ r_esp -= 4; W32(r_esp, 0x764d02u); f_00764d04();
    /* 00764d02: ret  */ FN_RET(0x00764ce8); r_esp += 4; return;
}

void f_00764d04(void) /* sub_764D04 */
{
    FN_ENTER(0x00764d04);
    /* 00764d04: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00764d05: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00764d08: mov edi, ecx */ r_edi = r_ecx;
    /* 00764d0a: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 00764d0e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00764d10: je 0x764f40 */ if (fZ) goto L_00764f40;
L_00764d16:; BB(0x00764d16);
    /* 00764d16: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00764d17: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00764d19: mov dword ptr [edi + 0x38], edx */ W32((u32)(r_edi+0x38u), r_edx);
    /* 00764d1c: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 00764d1f: mov dword ptr [edi + 0x3c], eax */ W32((u32)(r_edi+0x3cu), r_eax);
    /* 00764d22: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 00764d25: mov dword ptr [edi + 0x40], eax */ W32((u32)(r_edi+0x40u), r_eax);
    /* 00764d28: mov eax, dword ptr [edi + 0xac] */ r_eax = R32((u32)(r_edi+0xacu));
    /* 00764d2e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00764d30: mov dword ptr [edi + 0xb0], edx */ W32((u32)(r_edi+0xb0u), r_edx);
    /* 00764d36: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00764d39: mov dword ptr [edi + 0xb4], edx */ W32((u32)(r_edi+0xb4u), r_edx);
    /* 00764d3f: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 00764d42: mov dword ptr [edi + 0xb8], edx */ W32((u32)(r_edi+0xb8u), r_edx);
    /* 00764d48: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 00764d4b: mov dword ptr [edi + 0xbc], edx */ W32((u32)(r_edi+0xbcu), r_edx);
    /* 00764d51: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 00764d54: mov dword ptr [edi + 0xc0], edx */ W32((u32)(r_edi+0xc0u), r_edx);
    /* 00764d5a: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 00764d5d: mov dword ptr [edi + 0xc4], edx */ W32((u32)(r_edi+0xc4u), r_edx);
    /* 00764d63: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 00764d66: mov dword ptr [edi + 0xc8], edx */ W32((u32)(r_edi+0xc8u), r_edx);
    /* 00764d6c: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 00764d6f: mov dword ptr [edi + 0xcc], edx */ W32((u32)(r_edi+0xccu), r_edx);
    /* 00764d75: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 00764d78: mov dword ptr [edi + 0xd0], edx */ W32((u32)(r_edi+0xd0u), r_edx);
    /* 00764d7e: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 00764d81: mov dword ptr [edi + 0xd4], edx */ W32((u32)(r_edi+0xd4u), r_edx);
    /* 00764d87: mov eax, dword ptr [eax + 0x28] */ r_eax = R32((u32)(r_eax+0x28u));
    /* 00764d8a: mov dword ptr [edi + 0xd8], eax */ W32((u32)(r_edi+0xd8u), r_eax);
    /* 00764d90: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x764d95u); f_007b999c();
    /* 00764d95: lea eax, [edi + 0x38] */ r_eax = (u32)(r_edi+0x38u);
    /* 00764d98: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00764d99: call 0x807cac */ r_esp -= 4; W32(r_esp, 0x764d9eu); f_00807cac();
    /* 00764d9e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00764da1: fld dword ptr [0x976090] */ FPUSH(R_F32((u32)(0x976090u)));
    /* 00764da7: mov edx, dword ptr [edi + 0xa4] */ r_edx = R32((u32)(r_edi+0xa4u));
    /* 00764dad: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00764db0: mov word ptr [edi + 0x28], ax */ W16((u32)(r_edi+0x28u), (u16)r_eax);
    /* 00764db4: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00764db7: fld dword ptr [edx + 0x20] */ FPUSH(R_F32((u32)(r_edx+0x20u)));
    /* 00764dba: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00764dbe: mov eax, dword ptr [edx + 0x24] */ r_eax = R32((u32)(r_edx+0x24u));
    /* 00764dc1: mov ecx, edi */ r_ecx = r_edi;
    /* 00764dc3: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 00764dc7: mov eax, dword ptr [edi + 0xac] */ r_eax = R32((u32)(r_edi+0xacu));
    /* 00764dcd: fadd dword ptr [eax + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0xcu));
    /* 00764dd0: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00764dd4: lea eax, [esp + 4] */ r_eax = (u32)(r_esp+0x4u);
    /* 00764dd8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00764dda: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00764ddb: call 0x7b4c58 */ r_esp -= 4; W32(r_esp, 0x764de0u); f_007b4c58();
    /* 00764de0: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00764de2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00764de4: mov dword ptr [edi + 0xdc], eax */ W32((u32)(r_edi+0xdcu), r_eax);
    /* 00764dea: mov ecx, edi */ r_ecx = r_edi;
    /* 00764dec: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x764df1u); f_007b52ec();
    /* 00764df1: mov eax, dword ptr [edi + 0xdc] */ r_eax = R32((u32)(r_edi+0xdcu));
    /* 00764df7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00764df9: je 0x764e54 */ if (fZ) goto L_00764e54;
L_00764dfb:; BB(0x00764dfb);
    /* 00764dfb: mov edx, dword ptr [edi + 0xa4] */ r_edx = R32((u32)(r_edi+0xa4u));
    /* 00764e01: fld dword ptr [edx + 0x20] */ FPUSH(R_F32((u32)(r_edx+0x20u)));
    /* 00764e04: fsub dword ptr [esp + 8] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x8u));
    /* 00764e08: mov eax, dword ptr [edi + 0xac] */ r_eax = R32((u32)(r_edi+0xacu));
    /* 00764e0e: fld dword ptr [eax + 0xc] */ FPUSH(R_F32((u32)(r_eax+0xcu)));
    /* 00764e11: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00764e13: fst dword ptr [esp] */ W_F32((u32)(r_esp), ST(0));
    /* 00764e16: fld dword ptr [eax + 0xc] */ FPUSH(R_F32((u32)(r_eax+0xcu)));
    /* 00764e19: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00764e1b: fcomp dword ptr [0x976090] */ fx_compare(ST(0), R_F32((u32)(0x976090u))); FPOP();
    /* 00764e21: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00764e23: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00764e24: jae 0x764e34 */ if (!fC) goto L_00764e34;
L_00764e26:; BB(0x00764e26);
    /* 00764e26: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00764e28: mov dword ptr [edi + 0xdc], 0 */ W32((u32)(r_edi+0xdcu), 0x0u);
    /* 00764e32: jmp 0x764e54 */ goto L_00764e54;
L_00764e34:; BB(0x00764e34);
    /* 00764e34: fsubr dword ptr [esp] */ ST(0) = R_F32((u32)(r_esp)) - ST(0);
    /* 00764e37: fcomp dword ptr [0x97608c] */ fx_compare(ST(0), R_F32((u32)(0x97608cu))); FPOP();
    /* 00764e3d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00764e3f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00764e40: jbe 0x764e54 */ if ((fC||fZ)) goto L_00764e54;
L_00764e42:; BB(0x00764e42);
    /* 00764e42: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00764e44: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00764e46: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00764e47: mov dword ptr [edi + 0xdc], eax */ W32((u32)(r_edi+0xdcu), r_eax);
    /* 00764e4d: mov ecx, edi */ r_ecx = r_edi;
    /* 00764e4f: call 0x7b52c4 */ r_esp -= 4; W32(r_esp, 0x764e54u); f_007b52c4();
L_00764e54:; BB(0x00764e54);
    /* 00764e54: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00764e56: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00764e58: mov ecx, edi */ r_ecx = r_edi;
    /* 00764e5a: call 0x7b5290 */ r_esp -= 4; W32(r_esp, 0x764e5fu); f_007b5290();
    /* 00764e5f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00764e61: je 0x764e70 */ if (fZ) goto L_00764e70;
L_00764e63:; BB(0x00764e63);
    /* 00764e63: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00764e65: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00764e67: mov ecx, edi */ r_ecx = r_edi;
    /* 00764e69: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x764e6eu); f_007b52ec();
    /* 00764e6e: jmp 0x764e7b */ goto L_00764e7b;
L_00764e70:; BB(0x00764e70);
    /* 00764e70: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00764e72: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00764e74: mov ecx, edi */ r_ecx = r_edi;
    /* 00764e76: call 0x7b52c4 */ r_esp -= 4; W32(r_esp, 0x764e7bu); f_007b52c4();
L_00764e7b:; BB(0x00764e7b);
    /* 00764e7b: mov ecx, edi */ r_ecx = r_edi;
    /* 00764e7d: call 0x764ba8 */ r_esp -= 4; W32(r_esp, 0x764e82u); f_00764ba8();
    /* 00764e82: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00764e84: je 0x764f39 */ if (fZ) goto L_00764f39;
L_00764e8a:; BB(0x00764e8a);
    /* 00764e8a: mov edx, dword ptr [edi + 0xa4] */ r_edx = R32((u32)(r_edi+0xa4u));
    /* 00764e90: fld dword ptr [edx + 0x20] */ FPUSH(R_F32((u32)(r_edx+0x20u)));
    /* 00764e93: fcomp dword ptr [esp + 8] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x8u))); FPOP();
    /* 00764e97: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00764e99: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00764e9a: jae 0x764f2b */ if (!fC) goto L_00764f2b;
L_00764ea0:; BB(0x00764ea0);
    /* 00764ea0: mov eax, dword ptr [edi + 0xac] */ r_eax = R32((u32)(r_edi+0xacu));
    /* 00764ea6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00764ea8: mov dword ptr [edi + 0xb0], edx */ W32((u32)(r_edi+0xb0u), r_edx);
    /* 00764eae: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00764eb1: mov dword ptr [edi + 0xb4], edx */ W32((u32)(r_edi+0xb4u), r_edx);
    /* 00764eb7: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 00764eba: mov dword ptr [edi + 0xb8], edx */ W32((u32)(r_edi+0xb8u), r_edx);
    /* 00764ec0: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 00764ec3: mov dword ptr [edi + 0xbc], edx */ W32((u32)(r_edi+0xbcu), r_edx);
    /* 00764ec9: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 00764ecc: mov dword ptr [edi + 0xc0], edx */ W32((u32)(r_edi+0xc0u), r_edx);
    /* 00764ed2: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 00764ed5: mov dword ptr [edi + 0xc4], edx */ W32((u32)(r_edi+0xc4u), r_edx);
    /* 00764edb: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 00764ede: mov dword ptr [edi + 0xc8], edx */ W32((u32)(r_edi+0xc8u), r_edx);
    /* 00764ee4: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 00764ee7: mov dword ptr [edi + 0xcc], edx */ W32((u32)(r_edi+0xccu), r_edx);
    /* 00764eed: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 00764ef0: mov dword ptr [edi + 0xd0], edx */ W32((u32)(r_edi+0xd0u), r_edx);
    /* 00764ef6: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 00764ef9: mov dword ptr [edi + 0xd4], edx */ W32((u32)(r_edi+0xd4u), r_edx);
    /* 00764eff: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 00764f02: mov dword ptr [edi + 0xd8], edx */ W32((u32)(r_edi+0xd8u), r_edx);
    /* 00764f08: fld dword ptr [eax + 0xc] */ FPUSH(R_F32((u32)(r_eax+0xcu)));
    /* 00764f0b: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00764f0d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00764f0e: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00764f12: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00764f14: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00764f16: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00764f19: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x764f1eu); f_0082dc9c();
    /* 00764f1e: fstp dword ptr [edi + 0xbc] */ W_F32((u32)(r_edi+0xbcu), ST(0)); FPOP();
    /* 00764f24: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00764f25: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x764f2au); f_007b999c();
    /* 00764f2a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00764f2b:; BB(0x00764f2b);
    /* 00764f2b: mov ecx, edi */ r_ecx = r_edi;
    /* 00764f2d: call 0x7b9fbc */ r_esp -= 4; W32(r_esp, 0x764f32u); f_007b9fbc();
    /* 00764f32: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00764f35: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00764f36: ret 4 */ FN_RET(0x00764d04); r_esp += 8; return;
L_00764f39:; BB(0x00764f39);
    /* 00764f39: mov ecx, edi */ r_ecx = r_edi;
    /* 00764f3b: call 0x7ba03c */ r_esp -= 4; W32(r_esp, 0x764f40u); f_007ba03c();
L_00764f40:; BB(0x00764f40);
    /* 00764f40: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00764f43: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00764f44: ret 4 */ FN_RET(0x00764d04); r_esp += 8; return;
}

void f_00764f48(void) /* sub_764F48 */
{
    FN_ENTER(0x00764f48);
    /* 00764f48: mov dword ptr [ecx + 0xe4], 1 */ W32((u32)(r_ecx+0xe4u), 0x1u);
    /* 00764f52: ret  */ FN_RET(0x00764f48); r_esp += 4; return;
}

void f_00764f54(void) /* sub_764F54 */
{
    FN_ENTER(0x00764f54);
    /* 00764f54: mov dword ptr [ecx + 0xe4], 0 */ W32((u32)(r_ecx+0xe4u), 0x0u);
    /* 00764f5e: ret  */ FN_RET(0x00764f54); r_esp += 4; return;
}

void f_00764f60(void) /* sub_764F60 */
{
    FN_ENTER(0x00764f60);
    /* 00764f60: mov dword ptr [0xa9afcc], 1 */ W32((u32)(0xa9afccu), 0x1u);
    /* 00764f6a: ret  */ FN_RET(0x00764f60); r_esp += 4; return;
}

void f_00764f6c(void) /* sub_764F6C */
{
    FN_ENTER(0x00764f6c);
    /* 00764f6c: mov dword ptr [0xa9afcc], 0 */ W32((u32)(0xa9afccu), 0x0u);
    /* 00764f76: ret  */ FN_RET(0x00764f6c); r_esp += 4; return;
}

void f_00764f78(void) /* sub_764F78 */
{
    FN_ENTER(0x00764f78);
    /* 00764f78: mov dword ptr [0xa9afc0], 0x3f800000 */ W32((u32)(0xa9afc0u), 0x3f800000u);
    /* 00764f82: mov dword ptr [0xa9afc4], 0x41000000 */ W32((u32)(0xa9afc4u), 0x41000000u);
    /* 00764f8c: mov dword ptr [0xa9afc8], 0x3fc00000 */ W32((u32)(0xa9afc8u), 0x3fc00000u);
    /* 00764f96: ret  */ FN_RET(0x00764f78); r_esp += 4; return;
}

void f_00764f98(void) /* sub_764F98 */
{
    FN_ENTER(0x00764f98);
    /* 00764f98: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00764f99: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00764f9b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00764f9d: call 0x764fbc */ r_esp -= 4; W32(r_esp, 0x764fa2u); f_00764fbc();
    /* 00764fa2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00764fa6: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00764fa8: jne 0x764fae */ if (!fZ) goto L_00764fae;
L_00764faa:; BB(0x00764faa);
    /* 00764faa: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00764fab: ret 4 */ FN_RET(0x00764f98); r_esp += 8; return;
L_00764fae:; BB(0x00764fae);
    /* 00764fae: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00764faf: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x764fb4u); f_005c2f74();
    /* 00764fb4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00764fb5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00764fb6: ret 4 */ FN_RET(0x00764f98); r_esp += 8; return;
}

void f_00764fbc(void) /* sub_764FBC */
{
    FN_ENTER(0x00764fbc);
    /* 00764fbc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00764fbd: mov ebp, esp */ r_ebp = r_esp;
    /* 00764fbf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00764fc1: push 0x8f3788 */ { u32 v = 0x8f3788u; r_esp -= 4; W32(r_esp, v); }
    /* 00764fc6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00764fcc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00764fcd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00764fd4: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00764fd7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00764fda: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00764fdd: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00764fe0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00764fe3: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00764fe6: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00764fed: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00764ff0: mov dword ptr [eax], 0xb43200 */ W32((u32)(r_eax), 0xb43200u);
    /* 00764ff6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00764ff7: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x764ffcu); f_007b4e84();
    /* 00764ffc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00764ffd: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00765000: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x765005u); f_007b9c8c();
    /* 00765005: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0076500c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0076500f: call 0x78638c */ r_esp -= 4; W32(r_esp, 0x765014u); f_0078638c();
    /* 00765014: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00765017: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0076501e: mov esp, ebp */ r_esp = r_ebp;
    /* 00765020: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00765021: ret  */ FN_RET(0x00764fbc); r_esp += 4; return;
}

