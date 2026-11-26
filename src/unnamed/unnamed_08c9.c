#include "protos.h"

void f_008c93d0(void) /* sub_8C93D0 */
{
    FN_ENTER(0x008c93d0);
    /* 008c93d0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c93d1: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
    /* 008c93d5: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c93d6: call dword ptr [0x8f811c] */ { u32 t = R32((u32)(0x8f811cu)); r_esp -= 4; W32(r_esp, 0x8c93dcu); call_ind(t); }
    /* 008c93dc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c93de: je 0x8c9467 */ if (fZ) goto L_008c9467;
L_008c93e4:; BB(0x008c93e4);
    /* 008c93e4: mov ecx, edi */ r_ecx = r_edi;
    /* 008c93e6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c93e7: and ecx, 0xff */ {  u32 a = r_ecx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008c93ed: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c93ee: mov byte ptr [0xaeab21], cl */ W8((u32)(0xaeab21u), (u8)r_ecx);
    /* 008c93f4: mov byte ptr [0xaeab20], 1 */ W8((u32)(0xaeab20u), 0x1u);
    /* 008c93fb: lea edx, [ecx + ecx*2 + 0x65] */ r_edx = (u32)(r_ecx+r_ecx*2+0x65u);
    /* 008c93ff: lea ecx, [ecx + ecx*2 + 1] */ r_ecx = (u32)(r_ecx+r_ecx*2+0x1u);
    /* 008c9403: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 008c9407: mov esi, 4 */ r_esi = 0x4u;
    /* 008c940c: lea ecx, [ecx + ecx*2] */ r_ecx = (u32)(r_ecx+r_ecx*2);
    /* 008c940f: lea edx, [ecx + 0x65] */ r_edx = (u32)(r_ecx+0x65u);
    /* 008c9412: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008c9413: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 008c9415: jle 0x8c943c */ if ((fZ||fS!=fO)) goto L_008c943c;
L_008c9417:; BB(0x008c9417);
    /* 008c9417: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008c9418: sub edi, 0xaeab24 */ {  u32 a = r_edi; u32 b = 0xaeab24u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008c941e: mov ebp, eax */ r_ebp = r_eax;
L_008c9420:; BB(0x008c9420);
    /* 008c9420: mov bl, byte ptr [edi + esi + 0xaeab20] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_edi+r_esi+0xaeab20u))) & 0xffu);
    /* 008c9427: lea ecx, [ecx + ecx*2] */ r_ecx = (u32)(r_ecx+r_ecx*2);
    /* 008c942a: mov al, cl */ r_eax = (r_eax & 0xffffff00u) | (((u8)r_ecx) & 0xffu);
    /* 008c942c: add al, 0x65 */ {  u32 a = (u8)r_eax; u32 b = 0x65u; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c942e: xor bl, al */ {  u32 a = (u8)r_ebx; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_ebx = (r_ebx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c9430: mov byte ptr [esi + 0xaeab20], bl */ W8((u32)(r_esi+0xaeab20u), (u8)r_ebx);
    /* 008c9436: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008c9437: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008c9438: dec ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); }
    /* 008c9439: jne 0x8c9420 */ if (!fZ) goto L_008c9420;
L_008c943b:; BB(0x008c943b);
    /* 008c943b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
L_008c943c:; BB(0x008c943c);
    /* 008c943c: mov bl, byte ptr [esp + 0x10] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_esp+0x10u))) & 0xffu);
    /* 008c9440: lea ecx, [esi - 4] */ r_ecx = (u32)(r_esi+0xfffffffcu);
    /* 008c9443: mov eax, ecx */ r_eax = r_ecx;
    /* 008c9445: mov byte ptr [esi + 0xaeab20], 0 */ W8((u32)(r_esi+0xaeab20u), 0x0u);
    /* 008c944c: sar eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 008c944f: xor al, bl */ {  u32 a = (u8)r_eax; u32 b = (u8)r_ebx; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c9451: xor dl, cl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_ecx; u32 r = (a ^ b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c9453: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c9454: mov byte ptr [0xaeab22], al */ W8((u32)(0xaeab22u), (u8)r_eax);
    /* 008c9459: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008c945a: mov byte ptr [0xaeab23], dl */ W8((u32)(0xaeab23u), (u8)r_edx);
    /* 008c9460: mov eax, 0xaeab20 */ r_eax = 0xaeab20u;
    /* 008c9465: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c9466: ret  */ FN_RET(0x008c93d0); r_esp += 4; return;
L_008c9467:; BB(0x008c9467);
    /* 008c9467: mov eax, 0xaeab20 */ r_eax = 0xaeab20u;
    /* 008c946c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c946d: ret  */ FN_RET(0x008c93d0); r_esp += 4; return;
}

void f_008c9470(void) /* sub_8C9470 */
{
    FN_ENTER(0x008c9470);
    /* 008c9470: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 008c9474: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c9476: jne 0x8c9479 */ if (!fZ) goto L_008c9479;
L_008c9478:; BB(0x008c9478);
    /* 008c9478: ret  */ FN_RET(0x008c9470); r_esp += 4; return;
L_008c9479:; BB(0x008c9479);
    /* 008c9479: cmp byte ptr [eax], 1 */ {  u32 a = R8((u32)(r_eax)); u32 b = 0x1u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); }
    /* 008c947c: jne 0x8c94d4 */ if (!fZ) goto L_008c94d4;
L_008c947e:; BB(0x008c947e);
    /* 008c947e: movsx ecx, byte ptr [eax + 1] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x1u));
    /* 008c9482: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c9483: mov bl, byte ptr [eax + 2] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_eax+0x2u))) & 0xffu);
    /* 008c9486: lea ecx, [ecx + ecx*2] */ r_ecx = (u32)(r_ecx+r_ecx*2);
    /* 008c9489: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c948a: mov dl, cl */ r_edx = (r_edx & 0xffffff00u) | (((u8)r_ecx) & 0xffu);
    /* 008c948c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c948d: add dl, 0x65 */ {  u32 a = (u8)r_edx; u32 b = 0x65u; u32 r = (a + b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c9490: lea ecx, [ecx + ecx*2 + 3] */ r_ecx = (u32)(r_ecx+r_ecx*2+0x3u);
    /* 008c9494: xor bl, dl */ {  u32 a = (u8)r_ebx; u32 b = (u8)r_edx; u32 r = (a ^ b) & 0xffu; r_ebx = (r_ebx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c9496: mov dl, cl */ r_edx = (r_edx & 0xffffff00u) | (((u8)r_ecx) & 0xffu);
    /* 008c9498: mov byte ptr [eax + 2], bl */ W8((u32)(r_eax+0x2u), (u8)r_ebx);
    /* 008c949b: mov bl, byte ptr [eax + 3] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_eax+0x3u))) & 0xffu);
    /* 008c949e: add dl, 0x65 */ {  u32 a = (u8)r_edx; u32 b = 0x65u; u32 r = (a + b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c94a1: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 008c94a3: xor bl, dl */ {  u32 a = (u8)r_ebx; u32 b = (u8)r_edx; u32 r = (a ^ b) & 0xffu; r_ebx = (r_ebx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c94a5: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008c94a7: mov dh, byte ptr [eax + 2] */ r_edx = (r_edx & 0xffff00ffu) | (((R8((u32)(r_eax+0x2u))) & 0xffu) << 8);
    /* 008c94aa: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008c94ab: mov dl, bl */ r_edx = (r_edx & 0xffffff00u) | (((u8)r_ebx) & 0xffu);
    /* 008c94ad: mov byte ptr [eax + 3], bl */ W8((u32)(r_eax+0x3u), (u8)r_ebx);
    /* 008c94b0: mov edi, edx */ r_edi = r_edx;
    /* 008c94b2: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c94b4: jle 0x8c94cd */ if ((fZ||fS!=fO)) goto L_008c94cd;
L_008c94b6:; BB(0x008c94b6);
    /* 008c94b6: mov bl, byte ptr [esi + eax + 4] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_esi+r_eax+0x4u))) & 0xffu);
    /* 008c94ba: lea ecx, [ecx + ecx*2] */ r_ecx = (u32)(r_ecx+r_ecx*2);
    /* 008c94bd: mov dl, cl */ r_edx = (r_edx & 0xffffff00u) | (((u8)r_ecx) & 0xffu);
    /* 008c94bf: add dl, 0x65 */ {  u32 a = (u8)r_edx; u32 b = 0x65u; u32 r = (a + b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c94c2: xor bl, dl */ {  u32 a = (u8)r_ebx; u32 b = (u8)r_edx; u32 r = (a ^ b) & 0xffu; r_ebx = (r_ebx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c94c4: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008c94c5: mov byte ptr [esi + eax], bl */ W8((u32)(r_esi+r_eax), (u8)r_ebx);
    /* 008c94c8: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008c94c9: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008c94cb: jl 0x8c94b6 */ if ((fS!=fO)) goto L_008c94b6;
L_008c94cd:; BB(0x008c94cd);
    /* 008c94cd: mov byte ptr [edi + eax], 0 */ W8((u32)(r_edi+r_eax), 0x0u);
    /* 008c94d1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c94d2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c94d3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
L_008c94d4:; BB(0x008c94d4);
    /* 008c94d4: ret  */ FN_RET(0x008c9470); r_esp += 4; return;
}

void f_008c94e0(void) /* sub_8C94E0 */
{
    FN_ENTER(0x008c94e0);
    /* 008c94e0: mov al, byte ptr [0xaeab18] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(0xaeab18u))) & 0xffu);
    /* 008c94e5: sub esp, 0x40c */ {  u32 a = r_esp; u32 b = 0x40cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008c94eb: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008c94ed: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c94ee: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c94ef: jne 0x8c9514 */ if (!fZ) goto L_008c9514;
L_008c94f1:; BB(0x008c94f1);
    /* 008c94f1: mov bl, al */ r_ebx = (r_ebx & 0xffffff00u) | (((u8)r_eax) & 0xffu);
    /* 008c94f3: push 0xaeaa78 */ { u32 v = 0xaeaa78u; r_esp -= 4; W32(r_esp, v); }
    /* 008c94f8: or bl, 1 */ {  u32 a = (u8)r_ebx; u32 b = 0x1u; u32 r = (a | b) & 0xffu; r_ebx = (r_ebx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c94fb: mov byte ptr [0xaeab18], bl */ W8((u32)(0xaeab18u), (u8)r_ebx);
    /* 008c9501: call dword ptr [0x8f81bc] */ { u32 t = R32((u32)(0x8f81bcu)); r_esp -= 4; W32(r_esp, 0x8c9507u); call_ind(t); }
    /* 008c9507: push 0x8c96b0 */ { u32 v = 0x8c96b0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c950c: call 0x85909d */ r_esp -= 4; W32(r_esp, 0x8c9511u); f_0085909d();
    /* 008c9511: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_008c9514:; BB(0x008c9514);
    /* 008c9514: mov edi, dword ptr [esp + 0x418] */ r_edi = R32((u32)(r_esp+0x418u));
    /* 008c951b: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c951d: jne 0x8c952a */ if (!fZ) goto L_008c952a;
L_008c951f:; BB(0x008c951f);
    /* 008c951f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c9520: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008c9522: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008c9523: add esp, 0x40c */ {  u32 a = r_esp; u32 b = 0x40cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c9529: ret  */ FN_RET(0x008c94e0); r_esp += 4; return;
L_008c952a:; BB(0x008c952a);
    /* 008c952a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008c952b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c952c: push 0xaeaa78 */ { u32 v = 0xaeaa78u; r_esp -= 4; W32(r_esp, v); }
    /* 008c9531: call dword ptr [0x8f81b4] */ { u32 t = R32((u32)(0x8f81b4u)); r_esp -= 4; W32(r_esp, 0x8c9537u); call_ind(t); }
    /* 008c9537: cmp byte ptr [edi], 1 */ {  u32 a = R8((u32)(r_edi)); u32 b = 0x1u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008c953a: jne 0x8c958c */ if (!fZ) goto L_008c958c;
L_008c953c:; BB(0x008c953c);
    /* 008c953c: movsx eax, byte ptr [edi + 1] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edi+0x1u));
    /* 008c9540: mov dl, byte ptr [edi + 2] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi+0x2u))) & 0xffu);
    /* 008c9543: mov bl, byte ptr [edi + 3] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_edi+0x3u))) & 0xffu);
    /* 008c9546: lea eax, [eax + eax*2] */ r_eax = (u32)(r_eax+r_eax*2);
    /* 008c9549: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 008c954b: mov cl, al */ r_ecx = (r_ecx & 0xffffff00u) | (((u8)r_eax) & 0xffu);
    /* 008c954d: add cl, 0x65 */ {  u32 a = (u8)r_ecx; u32 b = 0x65u; u32 r = (a + b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c9550: lea eax, [eax + eax*2 + 3] */ r_eax = (u32)(r_eax+r_eax*2+0x3u);
    /* 008c9554: xor dl, cl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_ecx; u32 r = (a ^ b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c9556: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008c9558: mov byte ptr [edi + 2], dl */ W8((u32)(r_edi+0x2u), (u8)r_edx);
    /* 008c955b: mov ch, byte ptr [edi + 2] */ r_ecx = (r_ecx & 0xffff00ffu) | (((R8((u32)(r_edi+0x2u))) & 0xffu) << 8);
    /* 008c955e: mov dl, al */ r_edx = (r_edx & 0xffffff00u) | (((u8)r_eax) & 0xffu);
    /* 008c9560: add dl, 0x65 */ {  u32 a = (u8)r_edx; u32 b = 0x65u; u32 r = (a + b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c9563: xor bl, dl */ {  u32 a = (u8)r_ebx; u32 b = (u8)r_edx; u32 r = (a ^ b) & 0xffu; r_ebx = (r_ebx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c9565: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008c9566: mov cl, bl */ r_ecx = (r_ecx & 0xffffff00u) | (((u8)r_ebx) & 0xffu);
    /* 008c9568: mov byte ptr [edi + 3], bl */ W8((u32)(r_edi+0x3u), (u8)r_ebx);
    /* 008c956b: mov ebp, ecx */ r_ebp = r_ecx;
    /* 008c956d: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 008c956f: jle 0x8c9588 */ if ((fZ||fS!=fO)) goto L_008c9588;
L_008c9571:; BB(0x008c9571);
    /* 008c9571: mov cl, byte ptr [esi + edi + 4] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_esi+r_edi+0x4u))) & 0xffu);
    /* 008c9575: lea eax, [eax + eax*2] */ r_eax = (u32)(r_eax+r_eax*2);
    /* 008c9578: mov dl, al */ r_edx = (r_edx & 0xffffff00u) | (((u8)r_eax) & 0xffu);
    /* 008c957a: add dl, 0x65 */ {  u32 a = (u8)r_edx; u32 b = 0x65u; u32 r = (a + b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c957d: xor cl, dl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_edx; u32 r = (a ^ b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c957f: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008c9580: mov byte ptr [esi + edi], cl */ W8((u32)(r_esi+r_edi), (u8)r_ecx);
    /* 008c9583: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008c9584: cmp esi, ebp */ {  u32 a = r_esi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008c9586: jl 0x8c9571 */ if ((fS!=fO)) goto L_008c9571;
L_008c9588:; BB(0x008c9588);
    /* 008c9588: mov byte ptr [edi + ebp], 0 */ W8((u32)(r_edi+r_ebp), 0x0u);
L_008c958c:; BB(0x008c958c);
    /* 008c958c: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 008c958e: call dword ptr [0x8f8214] */ { u32 t = R32((u32)(0x8f8214u)); r_esp -= 4; W32(r_esp, 0x8c9594u); call_ind(t); }
    /* 008c9594: mov edx, 1 */ r_edx = 0x1u;
    /* 008c9599: mov ecx, 0xaeaa9c */ r_ecx = 0xaeaa9cu;
L_008c959e:; BB(0x008c959e);
    /* 008c959e: cmp dword ptr [ecx], eax */ {  u32 a = R32((u32)(r_ecx)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c95a0: je 0x8c95b0 */ if (fZ) goto L_008c95b0;
L_008c95a2:; BB(0x008c95a2);
    /* 008c95a2: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008c95a5: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008c95a6: cmp ecx, 0xaeaac0 */ {  u32 a = r_ecx; u32 b = 0xaeaac0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008c95ac: jl 0x8c959e */ if ((fS!=fO)) goto L_008c959e;
L_008c95ae:; BB(0x008c95ae);
    /* 008c95ae: jmp 0x8c95b6 */ goto L_008c95b6;
L_008c95b0:; BB(0x008c95b0);
    /* 008c95b0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c95b2: mov ebx, edx */ r_ebx = r_edx;
    /* 008c95b4: jne 0x8c95d1 */ if (!fZ) goto L_008c95d1;
L_008c95b6:; BB(0x008c95b6);
    /* 008c95b6: mov ecx, dword ptr [0xaeaf20] */ r_ecx = R32((u32)(0xaeaf20u));
    /* 008c95bc: cmp ecx, 9 */ {  u32 a = r_ecx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008c95bf: jae 0x8c95d1 */ if (!fC) goto L_008c95d1;
L_008c95c1:; BB(0x008c95c1);
    /* 008c95c1: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008c95c2: mov dword ptr [0xaeaf20], ecx */ W32((u32)(0xaeaf20u), r_ecx);
    /* 008c95c8: mov ebx, ecx */ r_ebx = r_ecx;
    /* 008c95ca: mov dword ptr [ecx*4 + 0xaeaa98], eax */ W32((u32)(r_ecx*4+0xaeaa98u), r_eax);
L_008c95d1:; BB(0x008c95d1);
    /* 008c95d1: mov esi, dword ptr [ebx*4 + 0xaeaac0] */ r_esi = R32((u32)(r_ebx*4+0xaeaac0u));
    /* 008c95d8: mov dword ptr [ebx*4 + 0xaeaac0], edi */ W32((u32)(r_ebx*4+0xaeaac0u), r_edi);
    /* 008c95df: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c95e1: je 0x8c968b */ if (fZ) goto L_008c968b;
L_008c95e7:; BB(0x008c95e7);
    /* 008c95e7: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c95e9: je 0x8c968b */ if (fZ) goto L_008c968b;
L_008c95ef:; BB(0x008c95ef);
    /* 008c95ef: cmp byte ptr [edi], 1 */ {  u32 a = R8((u32)(r_edi)); u32 b = 0x1u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008c95f2: je 0x8c968b */ if (fZ) goto L_008c968b;
L_008c95f8:; BB(0x008c95f8);
    /* 008c95f8: cmp byte ptr [esi], 1 */ {  u32 a = R8((u32)(r_esi)); u32 b = 0x1u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008c95fb: je 0x8c968b */ if (fZ) goto L_008c968b;
L_008c9601:; BB(0x008c9601);
    /* 008c9601: lea edx, [esp + 0x1c] */ r_edx = (u32)(r_esp+0x1cu);
    /* 008c9605: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c9606: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c9607: call dword ptr [0x8f8108] */ { u32 t = R32((u32)(0x8f8108u)); r_esp -= 4; W32(r_esp, 0x8c960du); call_ind(t); }
    /* 008c960d: lea eax, [esp + 0x1c] */ r_eax = (u32)(r_esp+0x1cu);
    /* 008c9611: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c9612: call dword ptr [0x8f811c] */ { u32 t = R32((u32)(0x8f811cu)); r_esp -= 4; W32(r_esp, 0x8c9618u); call_ind(t); }
    /* 008c9618: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c961a: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 008c961e: je 0x8c968b */ if (fZ) goto L_008c968b;
L_008c9620:; BB(0x008c9620);
    /* 008c9620: lea ecx, [esp + 0x1c] */ r_ecx = (u32)(r_esp+0x1cu);
    /* 008c9624: mov byte ptr [esi], 1 */ W8((u32)(r_esi), 0x1u);
    /* 008c9627: and ecx, 0xff */ {  u32 a = r_ecx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008c962d: mov ebp, 4 */ r_ebp = 0x4u;
    /* 008c9632: mov byte ptr [esi + 1], cl */ W8((u32)(r_esi+0x1u), (u8)r_ecx);
    /* 008c9635: lea edx, [ecx + ecx*2 + 0x65] */ r_edx = (u32)(r_ecx+r_ecx*2+0x65u);
    /* 008c9639: lea ecx, [ecx + ecx*2 + 1] */ r_ecx = (u32)(r_ecx+r_ecx*2+0x1u);
    /* 008c963d: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 008c9641: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008c9643: lea ecx, [ecx + ecx*2] */ r_ecx = (u32)(r_ecx+r_ecx*2);
    /* 008c9646: lea ebx, [ecx + 0x65] */ r_ebx = (u32)(r_ecx+0x65u);
    /* 008c9649: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008c964a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 008c964c: mov dword ptr [esp + 0x10], ebx */ W32((u32)(r_esp+0x10u), r_ebx);
    /* 008c9650: jle 0x8c9671 */ if ((fZ||fS!=fO)) goto L_008c9671;
L_008c9652:; BB(0x008c9652);
    /* 008c9652: mov bl, byte ptr [esp + edx + 0x1c] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_esp+r_edx+0x1cu))) & 0xffu);
    /* 008c9656: lea ecx, [ecx + ecx*2] */ r_ecx = (u32)(r_ecx+r_ecx*2);
    /* 008c9659: mov al, cl */ r_eax = (r_eax & 0xffffff00u) | (((u8)r_ecx) & 0xffu);
    /* 008c965b: add al, 0x65 */ {  u32 a = (u8)r_eax; u32 b = 0x65u; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c965d: xor bl, al */ {  u32 a = (u8)r_ebx; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_ebx = (r_ebx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c965f: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 008c9663: mov byte ptr [esi + ebp], bl */ W8((u32)(r_esi+r_ebp), (u8)r_ebx);
    /* 008c9666: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008c9667: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008c9668: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008c9669: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008c966b: jl 0x8c9652 */ if ((fS!=fO)) goto L_008c9652;
L_008c966d:; BB(0x008c966d);
    /* 008c966d: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
L_008c9671:; BB(0x008c9671);
    /* 008c9671: mov dl, byte ptr [esp + 0x14] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_esp+0x14u))) & 0xffu);
    /* 008c9675: lea eax, [ebp - 4] */ r_eax = (u32)(r_ebp+0xfffffffcu);
    /* 008c9678: mov ecx, eax */ r_ecx = r_eax;
    /* 008c967a: mov byte ptr [esi + ebp], 0 */ W8((u32)(r_esi+r_ebp), 0x0u);
    /* 008c967e: sar ecx, 8 */ { u32 c = (8u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 008c9681: xor cl, dl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_edx; u32 r = (a ^ b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c9683: xor bl, al */ {  u32 a = (u8)r_ebx; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_ebx = (r_ebx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c9685: mov byte ptr [esi + 2], cl */ W8((u32)(r_esi+0x2u), (u8)r_ecx);
    /* 008c9688: mov byte ptr [esi + 3], bl */ W8((u32)(r_esi+0x3u), (u8)r_ebx);
L_008c968b:; BB(0x008c968b);
    /* 008c968b: push 0xaeaa78 */ { u32 v = 0xaeaa78u; r_esp -= 4; W32(r_esp, v); }
    /* 008c9690: call dword ptr [0x8f81b8] */ { u32 t = R32((u32)(0x8f81b8u)); r_esp -= 4; W32(r_esp, 0x8c9696u); call_ind(t); }
    /* 008c9696: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c9697: mov eax, edi */ r_eax = r_edi;
    /* 008c9699: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008c969a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c969b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008c969c: add esp, 0x40c */ {  u32 a = r_esp; u32 b = 0x40cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c96a2: ret  */ FN_RET(0x008c94e0); r_esp += 4; return;
}

void f_008c95df(void)
{
    FN_ENTER(0x008c95df);
    /* 008c95df: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c95e1: je 0x8c968b */ if (fZ) goto L_008c968b;
L_008c95e7:; BB(0x008c95e7);
    /* 008c95e7: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c95e9: je 0x8c968b */ if (fZ) goto L_008c968b;
L_008c95ef:; BB(0x008c95ef);
    /* 008c95ef: cmp byte ptr [edi], 1 */ {  u32 a = R8((u32)(r_edi)); u32 b = 0x1u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008c95f2: je 0x8c968b */ if (fZ) goto L_008c968b;
L_008c95f8:; BB(0x008c95f8);
    /* 008c95f8: cmp byte ptr [esi], 1 */ {  u32 a = R8((u32)(r_esi)); u32 b = 0x1u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008c95fb: je 0x8c968b */ if (fZ) goto L_008c968b;
L_008c9601:; BB(0x008c9601);
    /* 008c9601: lea edx, [esp + 0x1c] */ r_edx = (u32)(r_esp+0x1cu);
    /* 008c9605: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c9606: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c9607: call dword ptr [0x8f8108] */ { u32 t = R32((u32)(0x8f8108u)); r_esp -= 4; W32(r_esp, 0x8c960du); call_ind(t); }
    /* 008c960d: lea eax, [esp + 0x1c] */ r_eax = (u32)(r_esp+0x1cu);
    /* 008c9611: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c9612: call dword ptr [0x8f811c] */ { u32 t = R32((u32)(0x8f811cu)); r_esp -= 4; W32(r_esp, 0x8c9618u); call_ind(t); }
    /* 008c9618: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c961a: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 008c961e: je 0x8c968b */ if (fZ) goto L_008c968b;
L_008c9620:; BB(0x008c9620);
    /* 008c9620: lea ecx, [esp + 0x1c] */ r_ecx = (u32)(r_esp+0x1cu);
    /* 008c9624: mov byte ptr [esi], 1 */ W8((u32)(r_esi), 0x1u);
    /* 008c9627: and ecx, 0xff */ {  u32 a = r_ecx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008c962d: mov ebp, 4 */ r_ebp = 0x4u;
    /* 008c9632: mov byte ptr [esi + 1], cl */ W8((u32)(r_esi+0x1u), (u8)r_ecx);
    /* 008c9635: lea edx, [ecx + ecx*2 + 0x65] */ r_edx = (u32)(r_ecx+r_ecx*2+0x65u);
    /* 008c9639: lea ecx, [ecx + ecx*2 + 1] */ r_ecx = (u32)(r_ecx+r_ecx*2+0x1u);
    /* 008c963d: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 008c9641: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008c9643: lea ecx, [ecx + ecx*2] */ r_ecx = (u32)(r_ecx+r_ecx*2);
    /* 008c9646: lea ebx, [ecx + 0x65] */ r_ebx = (u32)(r_ecx+0x65u);
    /* 008c9649: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008c964a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 008c964c: mov dword ptr [esp + 0x10], ebx */ W32((u32)(r_esp+0x10u), r_ebx);
    /* 008c9650: jle 0x8c9671 */ if ((fZ||fS!=fO)) goto L_008c9671;
L_008c9652:; BB(0x008c9652);
    /* 008c9652: mov bl, byte ptr [esp + edx + 0x1c] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_esp+r_edx+0x1cu))) & 0xffu);
    /* 008c9656: lea ecx, [ecx + ecx*2] */ r_ecx = (u32)(r_ecx+r_ecx*2);
    /* 008c9659: mov al, cl */ r_eax = (r_eax & 0xffffff00u) | (((u8)r_ecx) & 0xffu);
    /* 008c965b: add al, 0x65 */ {  u32 a = (u8)r_eax; u32 b = 0x65u; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c965d: xor bl, al */ {  u32 a = (u8)r_ebx; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_ebx = (r_ebx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c965f: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 008c9663: mov byte ptr [esi + ebp], bl */ W8((u32)(r_esi+r_ebp), (u8)r_ebx);
    /* 008c9666: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008c9667: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008c9668: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008c9669: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008c966b: jl 0x8c9652 */ if ((fS!=fO)) goto L_008c9652;
L_008c966d:; BB(0x008c966d);
    /* 008c966d: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
L_008c9671:; BB(0x008c9671);
    /* 008c9671: mov dl, byte ptr [esp + 0x14] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_esp+0x14u))) & 0xffu);
    /* 008c9675: lea eax, [ebp - 4] */ r_eax = (u32)(r_ebp+0xfffffffcu);
    /* 008c9678: mov ecx, eax */ r_ecx = r_eax;
    /* 008c967a: mov byte ptr [esi + ebp], 0 */ W8((u32)(r_esi+r_ebp), 0x0u);
    /* 008c967e: sar ecx, 8 */ { u32 c = (8u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 008c9681: xor cl, dl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_edx; u32 r = (a ^ b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c9683: xor bl, al */ {  u32 a = (u8)r_ebx; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_ebx = (r_ebx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c9685: mov byte ptr [esi + 2], cl */ W8((u32)(r_esi+0x2u), (u8)r_ecx);
    /* 008c9688: mov byte ptr [esi + 3], bl */ W8((u32)(r_esi+0x3u), (u8)r_ebx);
L_008c968b:; BB(0x008c968b);
    /* 008c968b: push 0xaeaa78 */ { u32 v = 0xaeaa78u; r_esp -= 4; W32(r_esp, v); }
    /* 008c9690: call dword ptr [0x8f81b8] */ { u32 t = R32((u32)(0x8f81b8u)); r_esp -= 4; W32(r_esp, 0x8c9696u); call_ind(t); }
    /* 008c9696: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c9697: mov eax, edi */ r_eax = r_edi;
    /* 008c9699: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008c969a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c969b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008c969c: add esp, 0x40c */ {  u32 a = r_esp; u32 b = 0x40cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c96a2: ret  */ FN_RET(0x008c95df); r_esp += 4; return;
}

void f_008c96c0(void) /* sub_8C96C0 */
{
    FN_ENTER(0x008c96c0);
    /* 008c96c0: sub esp, 0x84 */ {  u32 a = r_esp; u32 b = 0x84u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008c96c6: mov eax, dword ptr [esp + 0x90] */ r_eax = R32((u32)(r_esp+0x90u));
    /* 008c96cd: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 008c96d1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c96d2: push 0xa39430 */ { u32 v = 0xa39430u; r_esp -= 4; W32(r_esp, v); }
    /* 008c96d7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c96d8: call 0x858bf5 */ r_esp -= 4; W32(r_esp, 0x8c96ddu); f_00858bf5();
    /* 008c96dd: mov edx, dword ptr [esp + 0xa0] */ r_edx = R32((u32)(r_esp+0xa0u));
    /* 008c96e4: lea eax, [esp + 0x50] */ r_eax = (u32)(r_esp+0x50u);
    /* 008c96e8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c96e9: mov edx, dword ptr [esp + 0x9c] */ r_edx = R32((u32)(r_esp+0x9cu));
    /* 008c96f0: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 008c96f2: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 008c96f6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c96f7: mov eax, dword ptr [esp + 0xa0] */ r_eax = R32((u32)(r_esp+0xa0u));
    /* 008c96fe: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c96ff: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c9700: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c9701: call 0x8c9730 */ r_esp -= 4; W32(r_esp, 0x8c9706u); f_008c9730();
    /* 008c9706: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c9709: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 008c970d: lea edx, [esp + 0x44] */ r_edx = (u32)(r_esp+0x44u);
    /* 008c9711: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 008c9719: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c971a: push 0xa39430 */ { u32 v = 0xa39430u; r_esp -= 4; W32(r_esp, v); }
    /* 008c971f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c9720: call 0x859b7a */ r_esp -= 4; W32(r_esp, 0x8c9725u); f_00859b7a();
    /* 008c9725: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 008c9729: add esp, 0x90 */ {  u32 a = r_esp; u32 b = 0x90u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c972f: ret  */ FN_RET(0x008c96c0); r_esp += 4; return;
}

void f_008c9730(void) /* sub_8C9730 */
{
    FN_ENTER(0x008c9730);
    /* 008c9730: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 008c9734: sub esp, 0x180 */ {  u32 a = r_esp; u32 b = 0x180u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008c973a: lea ecx, [esp + 0x40] */ r_ecx = (u32)(r_esp+0x40u);
    /* 008c973e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008c973f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c9740: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c9741: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c9742: push 0xa3954c */ { u32 v = 0xa3954cu; r_esp -= 4; W32(r_esp, v); }
    /* 008c9747: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c9748: call 0x858bf5 */ r_esp -= 4; W32(r_esp, 0x8c974du); f_00858bf5();
    /* 008c974d: mov edx, dword ptr [esp + 0x1a0] */ r_edx = R32((u32)(r_esp+0x1a0u));
    /* 008c9754: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c9757: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 008c975b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c975c: push 0xa39548 */ { u32 v = 0xa39548u; r_esp -= 4; W32(r_esp, v); }
    /* 008c9761: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c9762: call 0x858bf5 */ r_esp -= 4; W32(r_esp, 0x8c9767u); f_00858bf5();
    /* 008c9767: lea edi, [esp + 0x58] */ r_edi = (u32)(r_esp+0x58u);
    /* 008c976b: or ecx, 0xffffffff */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 008c976e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c9770: mov edx, dword ptr [esp + 0x1b0] */ r_edx = R32((u32)(r_esp+0x1b0u));
    /* 008c9777: repne scasb al, byte ptr es:[edi] */ while (r_ecx) { { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (fZ) break; }
    /* 008c9779: not ecx */ r_ecx = ~r_ecx;
    /* 008c977b: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008c977c: lea edi, [esp + 0x18] */ r_edi = (u32)(r_esp+0x18u);
    /* 008c9780: mov ebp, ecx */ r_ebp = r_ecx;
    /* 008c9782: or ecx, 0xffffffff */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c9785: repne scasb al, byte ptr es:[edi] */ while (r_ecx) { { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (fZ) break; }
    /* 008c9787: not ecx */ r_ecx = ~r_ecx;
    /* 008c9789: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008c978a: mov edi, ecx */ r_edi = r_ecx;
    /* 008c978c: lea ecx, [esp + 0x98] */ r_ecx = (u32)(r_esp+0x98u);
    /* 008c9793: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c9794: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c9795: call 0x8c98b0 */ r_esp -= 4; W32(r_esp, 0x8c979au); f_008c98b0();
    /* 008c979a: mov esi, eax */ r_esi = r_eax;
    /* 008c979c: lea eax, [esp + 0xa0] */ r_eax = (u32)(r_esp+0xa0u);
    /* 008c97a3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008c97a4: lea ecx, [esp + 0x64] */ r_ecx = (u32)(r_esp+0x64u);
    /* 008c97a8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c97a9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c97aa: call 0x8cb410 */ r_esp -= 4; W32(r_esp, 0x8c97afu); f_008cb410();
    /* 008c97af: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c97b2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c97b4: je 0x8c97e9 */ if (fZ) goto L_008c97e9;
L_008c97b6:; BB(0x008c97b6);
    /* 008c97b6: cmp byte ptr [esi], 0 */ {  u32 a = R8((u32)(r_esi)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008c97b9: je 0x8c9856 */ if (fZ) goto L_008c9856;
L_008c97bf:; BB(0x008c97bf);
    /* 008c97bf: lea edx, [esp + 0x8c] */ r_edx = (u32)(r_esp+0x8cu);
    /* 008c97c6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c97c7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c97c8: call 0x8c98b0 */ r_esp -= 4; W32(r_esp, 0x8c97cdu); f_008c98b0();
    /* 008c97cd: mov esi, eax */ r_esi = r_eax;
    /* 008c97cf: lea eax, [esp + 0x94] */ r_eax = (u32)(r_esp+0x94u);
    /* 008c97d6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008c97d7: lea ecx, [esp + 0x58] */ r_ecx = (u32)(r_esp+0x58u);
    /* 008c97db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c97dc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c97dd: call 0x8cb410 */ r_esp -= 4; W32(r_esp, 0x8c97e2u); f_008cb410();
    /* 008c97e2: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c97e5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c97e7: jne 0x8c97b6 */ if (!fZ) goto L_008c97b6;
L_008c97e9:; BB(0x008c97e9);
    /* 008c97e9: lea eax, [esp + 0x8c] */ r_eax = (u32)(r_esp+0x8cu);
    /* 008c97f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c97f1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c97f2: call 0x8c98b0 */ r_esp -= 4; W32(r_esp, 0x8c97f7u); f_008c98b0();
    /* 008c97f7: mov esi, eax */ r_esi = r_eax;
    /* 008c97f9: mov al, byte ptr [esp + 0x94] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esp+0x94u))) & 0xffu);
    /* 008c9800: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c9803: cmp al, 0x5b */ {  u32 a = (u8)r_eax; u32 b = 0x5bu; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008c9805: je 0x8c9844 */ if (fZ) goto L_008c9844;
L_008c9807:; BB(0x008c9807);
    /* 008c9807: lea ecx, [esp + 0x8c] */ r_ecx = (u32)(r_esp+0x8cu);
    /* 008c980e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c980f: lea edx, [esp + 0x10] */ r_edx = (u32)(r_esp+0x10u);
    /* 008c9813: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c9814: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c9815: call 0x8cb410 */ r_esp -= 4; W32(r_esp, 0x8c981au); f_008cb410();
    /* 008c981a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c981d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c981f: je 0x8c9867 */ if (fZ) goto L_008c9867;
L_008c9821:; BB(0x008c9821);
    /* 008c9821: cmp byte ptr [esi], 0 */ {  u32 a = R8((u32)(r_esi)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008c9824: je 0x8c9844 */ if (fZ) goto L_008c9844;
L_008c9826:; BB(0x008c9826);
    /* 008c9826: lea eax, [esp + 0x8c] */ r_eax = (u32)(r_esp+0x8cu);
    /* 008c982d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c982e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c982f: call 0x8c98b0 */ r_esp -= 4; W32(r_esp, 0x8c9834u); f_008c98b0();
    /* 008c9834: mov esi, eax */ r_esi = r_eax;
    /* 008c9836: mov al, byte ptr [esp + 0x94] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esp+0x94u))) & 0xffu);
    /* 008c983d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c9840: cmp al, 0x5b */ {  u32 a = (u8)r_eax; u32 b = 0x5bu; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008c9842: jne 0x8c9807 */ if (!fZ) goto L_008c9807;
L_008c9844:; BB(0x008c9844);
    /* 008c9844: mov esi, dword ptr [esp + 0x1a0] */ r_esi = R32((u32)(r_esp+0x1a0u));
    /* 008c984b: mov ecx, dword ptr [esp + 0x198] */ r_ecx = R32((u32)(r_esp+0x198u));
    /* 008c9852: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c9853: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c9854: jmp 0x8c9885 */ goto L_008c9885;
L_008c9856:; BB(0x008c9856);
    /* 008c9856: mov esi, dword ptr [esp + 0x1a0] */ r_esi = R32((u32)(r_esp+0x1a0u));
    /* 008c985d: mov edx, dword ptr [esp + 0x198] */ r_edx = R32((u32)(r_esp+0x198u));
    /* 008c9864: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c9865: jmp 0x8c9884 */ goto L_008c9884;
L_008c9867:; BB(0x008c9867);
    /* 008c9867: lea edi, [esp + 0xc] */ r_edi = (u32)(r_esp+0xcu);
    /* 008c986b: or ecx, 0xffffffff */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 008c986e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c9870: mov esi, dword ptr [esp + 0x1a0] */ r_esi = R32((u32)(r_esp+0x1a0u));
    /* 008c9877: repne scasb al, byte ptr es:[edi] */ while (r_ecx) { { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (fZ) break; }
    /* 008c9879: not ecx */ r_ecx = ~r_ecx;
    /* 008c987b: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008c987c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c987d: lea edx, [esp + ecx + 0x90] */ r_edx = (u32)(r_esp+r_ecx+0x90u);
L_008c9884:; BB(0x008c9884);
    /* 008c9884: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
L_008c9885:; BB(0x008c9885);
    /* 008c9885: mov edi, dword ptr [esp + 0x1a4] */ r_edi = R32((u32)(r_esp+0x1a4u));
    /* 008c988c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c988d: call 0x8cb2cb */ r_esp -= 4; W32(r_esp, 0x8c9892u); f_008cb2cb();
    /* 008c9892: or ecx, 0xffffffff */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 008c9895: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008c9897: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c989a: mov byte ptr [edi + esi - 1], 0 */ W8((u32)(r_edi+r_esi+0xffffffffu), 0x0u);
    /* 008c989f: repne scasb al, byte ptr es:[edi] */ while (r_ecx) { { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (fZ) break; }
    /* 008c98a1: not ecx */ r_ecx = ~r_ecx;
    /* 008c98a3: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008c98a4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c98a5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c98a6: mov eax, ecx */ r_eax = r_ecx;
    /* 008c98a8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008c98a9: add esp, 0x180 */ {  u32 a = r_esp; u32 b = 0x180u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c98af: ret  */ FN_RET(0x008c9730); r_esp += 4; return;
}

void f_008c9838(void)
{
    FN_ENTER(0x008c9838);
    goto L_008c9838;
L_008c9807:; BB(0x008c9807);
    /* 008c9807: lea ecx, [esp + 0x8c] */ r_ecx = (u32)(r_esp+0x8cu);
    /* 008c980e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c980f: lea edx, [esp + 0x10] */ r_edx = (u32)(r_esp+0x10u);
    /* 008c9813: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c9814: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c9815: call 0x8cb410 */ r_esp -= 4; W32(r_esp, 0x8c981au); f_008cb410();
    /* 008c981a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c981d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c981f: je 0x8c9867 */ if (fZ) goto L_008c9867;
L_008c9821:; BB(0x008c9821);
    /* 008c9821: cmp byte ptr [esi], 0 */ {  u32 a = R8((u32)(r_esi)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008c9824: je 0x8c9844 */ if (fZ) goto L_008c9844;
L_008c9826:; BB(0x008c9826);
    /* 008c9826: lea eax, [esp + 0x8c] */ r_eax = (u32)(r_esp+0x8cu);
    /* 008c982d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c982e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c982f: call 0x8c98b0 */ r_esp -= 4; W32(r_esp, 0x8c9834u); f_008c98b0();
    /* 008c9834: mov esi, eax */ r_esi = r_eax;
    /* 008c9836: mov al, byte ptr [esp + 0x94] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esp+0x94u))) & 0xffu);
L_008c9838:; BB(0x008c9838);
    /* 008c9838: and al, 0x94 */ {  u32 a = (u8)r_eax; u32 b = 0x94u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c983a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008c983c: add byte ptr [ebx + 0x5b3c08c4], al */ { u32 ad = (u32)(r_ebx+0x5b3c08c4u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r); fZ = (r == 0); }
    /* 008c983d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c9840: cmp al, 0x5b */ {  u32 a = (u8)r_eax; u32 b = 0x5bu; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008c9842: jne 0x8c9807 */ if (!fZ) goto L_008c9807;
L_008c9844:; BB(0x008c9844);
    /* 008c9844: mov esi, dword ptr [esp + 0x1a0] */ r_esi = R32((u32)(r_esp+0x1a0u));
    /* 008c984b: mov ecx, dword ptr [esp + 0x198] */ r_ecx = R32((u32)(r_esp+0x198u));
    /* 008c9852: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c9853: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c9854: jmp 0x8c9885 */ goto L_008c9885;
L_008c9867:; BB(0x008c9867);
    /* 008c9867: lea edi, [esp + 0xc] */ r_edi = (u32)(r_esp+0xcu);
    /* 008c986b: or ecx, 0xffffffff */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 008c986e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c9870: mov esi, dword ptr [esp + 0x1a0] */ r_esi = R32((u32)(r_esp+0x1a0u));
    /* 008c9877: repne scasb al, byte ptr es:[edi] */ while (r_ecx) { { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (fZ) break; }
    /* 008c9879: not ecx */ r_ecx = ~r_ecx;
    /* 008c987b: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008c987c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c987d: lea edx, [esp + ecx + 0x90] */ r_edx = (u32)(r_esp+r_ecx+0x90u);
    /* 008c9884: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
L_008c9885:; BB(0x008c9885);
    /* 008c9885: mov edi, dword ptr [esp + 0x1a4] */ r_edi = R32((u32)(r_esp+0x1a4u));
    /* 008c988c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c988d: call 0x8cb2cb */ r_esp -= 4; W32(r_esp, 0x8c9892u); f_008cb2cb();
    /* 008c9892: or ecx, 0xffffffff */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 008c9895: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008c9897: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c989a: mov byte ptr [edi + esi - 1], 0 */ W8((u32)(r_edi+r_esi+0xffffffffu), 0x0u);
    /* 008c989f: repne scasb al, byte ptr es:[edi] */ while (r_ecx) { { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (fZ) break; }
    /* 008c98a1: not ecx */ r_ecx = ~r_ecx;
    /* 008c98a3: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008c98a4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c98a5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c98a6: mov eax, ecx */ r_eax = r_ecx;
    /* 008c98a8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008c98a9: add esp, 0x180 */ {  u32 a = r_esp; u32 b = 0x180u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c98af: ret  */ FN_RET(0x008c9838); r_esp += 4; return;
}

void f_008c98b0(void) /* sub_8C98B0 */
{
    FN_ENTER(0x008c98b0);
    /* 008c98b0: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 008c98b4: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008c98b6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c98b7: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 008c98bb: mov cl, byte ptr [eax] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 008c98bd: test cl, cl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_ecx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008c98bf: je 0x8c98de */ if (fZ) goto L_008c98de;
L_008c98c1:; BB(0x008c98c1);
    /* 008c98c1: cmp cl, 0xd */ {  u32 a = (u8)r_ecx; u32 b = 0xdu; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008c98c4: je 0x8c98de */ if (fZ) goto L_008c98de;
L_008c98c6:; BB(0x008c98c6);
    /* 008c98c6: cmp cl, 0xa */ {  u32 a = (u8)r_ecx; u32 b = 0xau; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008c98c9: je 0x8c98de */ if (fZ) goto L_008c98de;
L_008c98cb:; BB(0x008c98cb);
    /* 008c98cb: mov byte ptr [esi], cl */ W8((u32)(r_esi), (u8)r_ecx);
    /* 008c98cd: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008c98ce: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008c98cf: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008c98d0: cmp edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008c98d6: jge 0x8c98de */ if ((fS==fO)) goto L_008c98de;
L_008c98d8:; BB(0x008c98d8);
    /* 008c98d8: mov cl, byte ptr [eax] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 008c98da: test cl, cl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_ecx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008c98dc: jne 0x8c98c1 */ if (!fZ) goto L_008c98c1;
L_008c98de:; BB(0x008c98de);
    /* 008c98de: mov byte ptr [esi], 0 */ W8((u32)(r_esi), 0x0u);
    /* 008c98e1: mov cl, byte ptr [eax] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 008c98e3: cmp cl, 0xd */ {  u32 a = (u8)r_ecx; u32 b = 0xdu; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008c98e6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c98e7: jne 0x8c98ea */ if (!fZ) goto L_008c98ea;
L_008c98e9:; BB(0x008c98e9);
    /* 008c98e9: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_008c98ea:; BB(0x008c98ea);
    /* 008c98ea: cmp byte ptr [eax], 0xa */ {  u32 a = R8((u32)(r_eax)); u32 b = 0xau; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); }
    /* 008c98ed: jne 0x8c98f0 */ if (!fZ) goto L_008c98f0;
L_008c98ef:; BB(0x008c98ef);
    /* 008c98ef: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
L_008c98f0:; BB(0x008c98f0);
    /* 008c98f0: ret  */ FN_RET(0x008c98b0); r_esp += 4; return;
}

void f_008c9910(void) /* sub_8C9910 */
{
    FN_ENTER(0x008c9910);
    /* 008c9910: mov ecx, 0xaeaf28 */ r_ecx = 0xaeaf28u;
    /* 008c9915: jmp 0x8c9940 */ f_008c9940(); return;
}

void f_008c9940(void) /* sub_8C9940 */
{
    FN_ENTER(0x008c9940);
    /* 008c9940: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c9941: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c9942: mov eax, ecx */ r_eax = r_ecx;
    /* 008c9944: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c9945: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 008c9947: mov edi, eax */ r_edi = r_eax;
L_008c9949:; BB(0x008c9949);
    /* 008c9949: mov edx, esi */ r_edx = r_esi;
    /* 008c994b: mov ebx, 8 */ r_ebx = 0x8u;
L_008c9950:; BB(0x008c9950);
    /* 008c9950: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008c9953: je 0x8c995f */ if (fZ) goto L_008c995f;
L_008c9955:; BB(0x008c9955);
    /* 008c9955: shr edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 008c9957: xor edx, 0xedb88320 */ {  u32 a = r_edx; u32 b = 0xedb88320u; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008c995d: jmp 0x8c9961 */ goto L_008c9961;
L_008c995f:; BB(0x008c995f);
    /* 008c995f: shr edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
L_008c9961:; BB(0x008c9961);
    /* 008c9961: dec ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); }
    /* 008c9962: jne 0x8c9950 */ if (!fZ) goto L_008c9950;
L_008c9964:; BB(0x008c9964);
    /* 008c9964: mov dword ptr [edi], edx */ W32((u32)(r_edi), r_edx);
    /* 008c9966: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008c9967: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008c996a: cmp esi, 0x100 */ {  u32 a = r_esi; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008c9970: jl 0x8c9949 */ if ((fS!=fO)) goto L_008c9949;
L_008c9972:; BB(0x008c9972);
    /* 008c9972: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c9973: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c9974: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008c9975: ret  */ FN_RET(0x008c9940); r_esp += 4; return;
}

void f_008c9980(void) /* sub_8C9980 */
{
    FN_ENTER(0x008c9980);
    /* 008c9980: mov eax, 0x1004 */ r_eax = 0x1004u;
    /* 008c9985: call 0x858020 */ r_esp -= 4; W32(r_esp, 0x8c998au); f_00858020();
    /* 008c998a: mov eax, dword ptr [esp + 0x1008] */ r_eax = R32((u32)(r_esp+0x1008u));
    /* 008c9991: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008c9992: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c9993: mov esi, dword ptr [esp + 0x1014] */ r_esi = R32((u32)(r_esp+0x1014u));
    /* 008c999a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c999c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c999d: mov ebp, ecx */ r_ebp = r_ecx;
    /* 008c999f: mov dword ptr [esi], 0xffffffff */ W32((u32)(r_esi), 0xffffffffu);
    /* 008c99a5: je 0x8c9a85 */ if (fZ) goto L_008c9a85;
L_008c99ab:; BB(0x008c99ab);
    /* 008c99ab: cmp byte ptr [eax], 0 */ {  u32 a = R8((u32)(r_eax)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008c99ae: je 0x8c9a85 */ if (fZ) goto L_008c9a85;
L_008c99b4:; BB(0x008c99b4);
    /* 008c99b4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c99b6: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 008c99bb: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 008c99bd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c99bf: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 008c99c1: push 0x80000000 */ { u32 v = 0x80000000u; r_esp -= 4; W32(r_esp, v); }
    /* 008c99c6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c99c7: call dword ptr [0x8f8144] */ { u32 t = R32((u32)(0x8f8144u)); r_esp -= 4; W32(r_esp, 0x8c99cdu); call_ind(t); }
    /* 008c99cd: mov edi, eax */ r_edi = r_eax;
    /* 008c99cf: cmp edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c99d2: jne 0x8c99ec */ if (!fZ) goto L_008c99ec;
L_008c99d4:; BB(0x008c99d4);
    /* 008c99d4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c99d5: mov dword ptr [ebp + 0x400], 2 */ W32((u32)(r_ebp+0x400u), 0x2u);
    /* 008c99df: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c99e0: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c99e2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008c99e3: add esp, 0x1004 */ {  u32 a = r_esp; u32 b = 0x1004u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c99e9: ret 8 */ FN_RET(0x008c9980); r_esp += 12; return;
L_008c99ec:; BB(0x008c99ec);
    /* 008c99ec: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c99ed: lea eax, [esp + 0x10] */ r_eax = (u32)(r_esp+0x10u);
    /* 008c99f1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c99f3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c99f4: lea ecx, [esp + 0x1c] */ r_ecx = (u32)(r_esp+0x1cu);
    /* 008c99f8: push 0x1000 */ { u32 v = 0x1000u; r_esp -= 4; W32(r_esp, v); }
    /* 008c99fd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c99fe: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c99ff: call dword ptr [0x8f813c] */ { u32 t = R32((u32)(0x8f813cu)); r_esp -= 4; W32(r_esp, 0x8c9a05u); call_ind(t); }
    /* 008c9a05: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c9a07: je 0x8c9a5f */ if (fZ) goto L_008c9a5f;
L_008c9a09:; BB(0x008c9a09);
    /* 008c9a09: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 008c9a0d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c9a0f: je 0x8c9a5b */ if (fZ) goto L_008c9a5b;
L_008c9a11:; BB(0x008c9a11);
    /* 008c9a11: lea ecx, [esp + ecx + 0x14] */ r_ecx = (u32)(r_esp+r_ecx+0x14u);
    /* 008c9a15: lea edx, [esp + 0x14] */ r_edx = (u32)(r_esp+0x14u);
    /* 008c9a19: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008c9a1b: lea eax, [esp + 0x14] */ r_eax = (u32)(r_esp+0x14u);
    /* 008c9a1f: jae 0x8c9a3d */ if (!fC) goto L_008c9a3d;
L_008c9a21:; BB(0x008c9a21);
    /* 008c9a21: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008c9a23: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 008c9a25: mov dl, byte ptr [esi] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_esi))) & 0xffu);
    /* 008c9a27: mov bl, byte ptr [eax] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 008c9a29: xor edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008c9a2b: mov ebx, dword ptr [esi] */ r_ebx = R32((u32)(r_esi));
    /* 008c9a2d: shr ebx, 8 */ { u32 c = (8u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 008c9a30: mov edx, dword ptr [ebp + edx*4] */ r_edx = R32((u32)(r_ebp+r_edx*4));
    /* 008c9a34: xor edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008c9a36: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008c9a37: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008c9a39: mov dword ptr [esi], edx */ W32((u32)(r_esi), r_edx);
    /* 008c9a3b: jb 0x8c9a21 */ if (fC) goto L_008c9a21;
L_008c9a3d:; BB(0x008c9a3d);
    /* 008c9a3d: lea eax, [esp + 0x10] */ r_eax = (u32)(r_esp+0x10u);
    /* 008c9a41: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c9a43: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c9a44: lea ecx, [esp + 0x1c] */ r_ecx = (u32)(r_esp+0x1cu);
    /* 008c9a48: push 0x1000 */ { u32 v = 0x1000u; r_esp -= 4; W32(r_esp, v); }
    /* 008c9a4d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c9a4e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c9a4f: call dword ptr [0x8f813c] */ { u32 t = R32((u32)(0x8f813cu)); r_esp -= 4; W32(r_esp, 0x8c9a55u); call_ind(t); }
    /* 008c9a55: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c9a57: jne 0x8c9a09 */ if (!fZ) goto L_008c9a09;
L_008c9a59:; BB(0x008c9a59);
    /* 008c9a59: jmp 0x8c9a5f */ goto L_008c9a5f;
L_008c9a5b:; BB(0x008c9a5b);
    /* 008c9a5b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c9a5d: jne 0x8c9a69 */ if (!fZ) goto L_008c9a69;
L_008c9a5f:; BB(0x008c9a5f);
    /* 008c9a5f: mov dword ptr [ebp + 0x400], 3 */ W32((u32)(r_ebp+0x400u), 0x3u);
L_008c9a69:; BB(0x008c9a69);
    /* 008c9a69: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c9a6a: call dword ptr [0x8f8140] */ { u32 t = R32((u32)(0x8f8140u)); r_esp -= 4; W32(r_esp, 0x8c9a70u); call_ind(t); }
    /* 008c9a70: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 008c9a72: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008c9a73: not edx */ r_edx = ~r_edx;
    /* 008c9a75: mov dword ptr [esi], edx */ W32((u32)(r_esi), r_edx);
    /* 008c9a77: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c9a78: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c9a79: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 008c9a7b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008c9a7c: add esp, 0x1004 */ {  u32 a = r_esp; u32 b = 0x1004u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c9a82: ret 8 */ FN_RET(0x008c9980); r_esp += 12; return;
L_008c9a85:; BB(0x008c9a85);
    /* 008c9a85: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c9a86: mov dword ptr [ebp + 0x400], 1 */ W32((u32)(r_ebp+0x400u), 0x1u);
    /* 008c9a90: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c9a91: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c9a93: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008c9a94: add esp, 0x1004 */ {  u32 a = r_esp; u32 b = 0x1004u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c9a9a: ret 8 */ FN_RET(0x008c9980); r_esp += 12; return;
}

void f_008c9b03(void) /* sub_8C9B03 */
{
    FN_ENTER(0x008c9b03);
    /* 008c9b03: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 008c9b07: call dword ptr [0x8f81b0] */ { u32 t = R32((u32)(0x8f81b0u)); r_esp -= 4; W32(r_esp, 0x8c9b0du); call_ind(t); }
    /* 008c9b0d: ret  */ FN_RET(0x008c9b03); r_esp += 4; return;
}

void f_008c9b28(void) /* sub_8C9B28 */
{
    FN_ENTER(0x008c9b28);
L_008c9b28:; BB(0x008c9b28);
    /* 008c9b28: test dword ptr [0xae7f00], 0xfffffe00 */ {  u32 a = R32((u32)(0xae7f00u)); u32 b = 0xfffffe00u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c9b32: jne 0x8c9c14 */ if (!fZ) goto L_008c9c14;
L_008c9b38:; BB(0x008c9b38);
    /* 008c9b38: test dword ptr [0xae7f00], 0xffffffff */ {  u32 a = R32((u32)(0xae7f00u)); u32 b = 0xffffffffu; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c9b42: jne 0x8c9efc */ if (!fZ) goto L_008c9efc;
L_008c9b48:; BB(0x008c9b48);
    /* 008c9b48: call 0x86b8a0 */ r_esp -= 4; W32(r_esp, 0x8c9b4du); f_0086b8a0();
    /* 008c9b4d: jmp 0x8c9b28 */ goto L_008c9b28;
L_008c9c14:; BB(0x008c9c14);
    /* 008c9c14: movlpd xmm0, qword ptr [esp + 4] */ xmm[0].q[0] = R64((u32)(r_esp+0x4u));
    /* 008c9c1a: unpcklpd xmm0, xmm0 */ { XMM s = xmm[0]; xmm[0].f[1] = s.f[0]; }
    /* 008c9c1e: movapd xmm1, xmmword ptr [0x99f980] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0x99f980u), 16); xmm[1] = s; }
    /* 008c9c26: movapd xmm6, xmmword ptr [0x99fde0] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0x99fde0u), 16); xmm[6] = s; }
    /* 008c9c2e: movapd xmm2, xmmword ptr [0x99f990] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0x99f990u), 16); xmm[2] = s; }
    /* 008c9c36: movapd xmm3, xmmword ptr [0x99f9a0] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0x99f9a0u), 16); xmm[3] = s; }
    /* 008c9c3e: pextrw eax, xmm0, 3 */ r_eax = (u32)xmm[0].w[3];
    /* 008c9c43: and eax, 0x7fff */ {  u32 a = r_eax; u32 b = 0x7fffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008c9c48: mov edx, 0x408f */ r_edx = 0x408fu;
    /* 008c9c4d: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 008c9c4f: sub eax, 0x3c90 */ {  u32 a = r_eax; u32 b = 0x3c90u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008c9c54: or edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 008c9c56: cmp edx, 0x80000000 */ {  u32 a = r_edx; u32 b = 0x80000000u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008c9c5c: jae 0x8c9ec8 */ if (!fC) goto L_008c9ec8;
L_008c9c62:; BB(0x008c9c62);
    /* 008c9c62: mulpd xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1].f[0] = xmm[1].f[0] * s.f[0]; xmm[1].f[1] = xmm[1].f[1] * s.f[1]; }
    /* 008c9c66: addpd xmm1, xmm6 */ { XMM s = xmm[6]; xmm[1].f[0] = xmm[1].f[0] + s.f[0]; xmm[1].f[1] = xmm[1].f[1] + s.f[1]; }
    /* 008c9c6a: movapd xmm7, xmm1 */ { XMM s = xmm[1]; xmm[7] = s; }
    /* 008c9c6e: subpd xmm1, xmm6 */ { XMM s = xmm[6]; xmm[1].f[0] = xmm[1].f[0] - s.f[0]; xmm[1].f[1] = xmm[1].f[1] - s.f[1]; }
    /* 008c9c72: mulpd xmm2, xmm1 */ { XMM s = xmm[1]; xmm[2].f[0] = xmm[2].f[0] * s.f[0]; xmm[2].f[1] = xmm[2].f[1] * s.f[1]; }
    /* 008c9c76: movapd xmm4, xmmword ptr [0x99f9b0] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0x99f9b0u), 16); xmm[4] = s; }
    /* 008c9c7e: mulpd xmm3, xmm1 */ { XMM s = xmm[1]; xmm[3].f[0] = xmm[3].f[0] * s.f[0]; xmm[3].f[1] = xmm[3].f[1] * s.f[1]; }
    /* 008c9c82: movapd xmm5, xmmword ptr [0x99f9c0] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0x99f9c0u), 16); xmm[5] = s; }
    /* 008c9c8a: subpd xmm0, xmm2 */ { XMM s = xmm[2]; xmm[0].f[0] = xmm[0].f[0] - s.f[0]; xmm[0].f[1] = xmm[0].f[1] - s.f[1]; }
    /* 008c9c8e: movd eax, xmm7 */ r_eax = xmm[7].d[0];
    /* 008c9c92: mov ecx, eax */ r_ecx = r_eax;
    /* 008c9c94: and ecx, 0x3f */ {  u32 a = r_ecx; u32 b = 0x3fu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008c9c97: shl ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 008c9c9a: sar eax, 6 */ { u32 c = (6u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 008c9c9d: mov edx, eax */ r_edx = r_eax;
    /* 008c9c9f: subpd xmm0, xmm3 */ { XMM s = xmm[3]; xmm[0].f[0] = xmm[0].f[0] - s.f[0]; xmm[0].f[1] = xmm[0].f[1] - s.f[1]; }
    /* 008c9ca3: movapd xmm2, xmmword ptr [ecx + 0x99f9e0] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_ecx+0x99f9e0u), 16); xmm[2] = s; }
    /* 008c9cab: mulpd xmm4, xmm0 */ { XMM s = xmm[0]; xmm[4].f[0] = xmm[4].f[0] * s.f[0]; xmm[4].f[1] = xmm[4].f[1] * s.f[1]; }
    /* 008c9caf: movapd xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1] = s; }
    /* 008c9cb3: mulpd xmm0, xmm0 */ { XMM s = xmm[0]; xmm[0].f[0] = xmm[0].f[0] * s.f[0]; xmm[0].f[1] = xmm[0].f[1] * s.f[1]; }
    /* 008c9cb7: addpd xmm5, xmm4 */ { XMM s = xmm[4]; xmm[5].f[0] = xmm[5].f[0] + s.f[0]; xmm[5].f[1] = xmm[5].f[1] + s.f[1]; }
    /* 008c9cbb: mulsd xmm0, xmm0 */ { XMM s = xmm[0]; xmm[0].f[0] = xmm[0].f[0] * s.f[0]; }
    /* 008c9cbf: addsd xmm1, xmm2 */ { XMM s = xmm[2]; xmm[1].f[0] = xmm[1].f[0] + s.f[0]; }
    /* 008c9cc3: unpckhpd xmm2, xmm2 */ { XMM s = xmm[2]; xmm[2].f[0] = xmm[2].f[1]; xmm[2].f[1] = s.f[1]; }
    /* 008c9cc7: movdqa xmm6, xmmword ptr [0x99fdf0] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0x99fdf0u), 16); xmm[6] = s; }
    /* 008c9ccf: pand xmm7, xmm6 */ { MM64 a; a.q = xmm[7].q[0]; MM64 b; b.q = xmm[6].q[0]; MM64 r; r.q = a.q & b.q; xmm[7].q[0] = r.q; } { MM64 a; a.q = xmm[7].q[1]; MM64 b; b.q = xmm[6].q[1]; MM64 r; r.q = a.q & b.q; xmm[7].q[1] = r.q; }
    /* 008c9cd3: movdqa xmm6, xmmword ptr [0x99fe00] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0x99fe00u), 16); xmm[6] = s; }
    /* 008c9cdb: paddq xmm7, xmm6 */ { XMM s = xmm[6]; xmm[7].q[0] += s.q[0]; xmm[7].q[1] += s.q[1]; }
    /* 008c9cdf: psllq xmm7, 0x2e */ { MM64 a; a.q = xmm[7].q[0]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x2eu; r.q = c > 63 ? 0 : (a.q << c); xmm[7].q[0] = r.q; } { MM64 a; a.q = xmm[7].q[1]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x2eu; r.q = c > 63 ? 0 : (a.q << c); xmm[7].q[1] = r.q; }
    /* 008c9ce4: mulpd xmm0, xmm5 */ { XMM s = xmm[5]; xmm[0].f[0] = xmm[0].f[0] * s.f[0]; xmm[0].f[1] = xmm[0].f[1] * s.f[1]; }
    /* 008c9ce8: addsd xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1].f[0] = xmm[1].f[0] + s.f[0]; }
    /* 008c9cec: orpd xmm2, xmm7 */ { XMM s = xmm[7]; xmm[2].q[0] = xmm[2].q[0] | s.q[0]; xmm[2].q[1] = xmm[2].q[1] | s.q[1]; }
    /* 008c9cf0: unpckhpd xmm0, xmm0 */ { XMM s = xmm[0]; xmm[0].f[0] = xmm[0].f[1]; xmm[0].f[1] = s.f[1]; }
    /* 008c9cf4: addsd xmm0, xmm1 */ { XMM s = xmm[1]; xmm[0].f[0] = xmm[0].f[0] + s.f[0]; }
    /* 008c9cf8: add edx, 0x37e */ {  u32 a = r_edx; u32 b = 0x37eu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008c9cfe: cmp edx, 0x77c */ {  u32 a = r_edx; u32 b = 0x77cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008c9d04: ja 0x8c9d23 */ if ((!fC&&!fZ)) goto L_008c9d23;
L_008c9d0a:; BB(0x008c9d0a);
    /* 008c9d0a: mulsd xmm0, xmm2 */ { XMM s = xmm[2]; xmm[0].f[0] = xmm[0].f[0] * s.f[0]; }
    /* 008c9d0e: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008c9d11: addsd xmm0, xmm2 */ { XMM s = xmm[2]; xmm[0].f[0] = xmm[0].f[0] + s.f[0]; }
    /* 008c9d15: movlpd qword ptr [esp + 4], xmm0 */ W64((u32)(r_esp+0x4u), xmm[0].q[0]);
    /* 008c9d1b: fld qword ptr [esp + 4] */ FPUSH(R_F64((u32)(r_esp+0x4u)));
    /* 008c9d1f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c9d22: ret  */ FN_RET(0x008c9b28); r_esp += 4; return;
L_008c9d23:; BB(0x008c9d23);
    /* 008c9d23: sub esp, 0x12 */ {  u32 a = r_esp; u32 b = 0x12u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008c9d26: wait  */ ;
    /* 008c9d27: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 008c9d2b: mov dx, word ptr [esp + 0x10] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_esp+0x10u))) & 0xffffu);
    /* 008c9d30: or dx, 0x300 */ {  u32 a = (u16)r_edx; u32 b = 0x300u; u32 r = (a | b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 008c9d35: mov word ptr [esp], dx */ W16((u32)(r_esp), (u16)r_edx);
    /* 008c9d39: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 008c9d3c: mov edx, eax */ r_edx = r_eax;
    /* 008c9d3e: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 008c9d40: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 008c9d42: movdqa xmm6, xmmword ptr [0x99fe10] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0x99fe10u), 16); xmm[6] = s; }
    /* 008c9d4a: pandn xmm6, xmm2 */ { MM64 a; a.q = xmm[6].q[0]; MM64 b; b.q = xmm[2].q[0]; MM64 r; r.q = ~a.q & b.q; xmm[6].q[0] = r.q; } { MM64 a; a.q = xmm[6].q[1]; MM64 b; b.q = xmm[2].q[1]; MM64 r; r.q = ~a.q & b.q; xmm[6].q[1] = r.q; }
    /* 008c9d4e: add eax, 0x3ff */ {  u32 a = r_eax; u32 b = 0x3ffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008c9d53: movd xmm3, eax */ { u32 v = r_eax; xmm[3].d[0] = v; xmm[3].d[1] = 0; xmm[3].d[2] = 0; xmm[3].d[3] = 0; }
    /* 008c9d57: psllq xmm3, 0x34 */ { MM64 a; a.q = xmm[3].q[0]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x34u; r.q = c > 63 ? 0 : (a.q << c); xmm[3].q[0] = r.q; } { MM64 a; a.q = xmm[3].q[1]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x34u; r.q = c > 63 ? 0 : (a.q << c); xmm[3].q[1] = r.q; }
    /* 008c9d5c: orpd xmm6, xmm3 */ { XMM s = xmm[3]; xmm[6].q[0] = xmm[6].q[0] | s.q[0]; xmm[6].q[1] = xmm[6].q[1] | s.q[1]; }
    /* 008c9d60: add edx, 0x3ff */ {  u32 a = r_edx; u32 b = 0x3ffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008c9d66: movd xmm4, edx */ { u32 v = r_edx; xmm[4].d[0] = v; xmm[4].d[1] = 0; xmm[4].d[2] = 0; xmm[4].d[3] = 0; }
    /* 008c9d6a: psllq xmm4, 0x34 */ { MM64 a; a.q = xmm[4].q[0]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x34u; r.q = c > 63 ? 0 : (a.q << c); xmm[4].q[0] = r.q; } { MM64 a; a.q = xmm[4].q[1]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x34u; r.q = c > 63 ? 0 : (a.q << c); xmm[4].q[1] = r.q; }
    /* 008c9d6f: movlpd qword ptr [esp], xmm0 */ W64((u32)(r_esp), xmm[0].q[0]);
    /* 008c9d74: fld qword ptr [esp] */ FPUSH(R_F64((u32)(r_esp)));
    /* 008c9d77: movlpd qword ptr [esp + 8], xmm6 */ W64((u32)(r_esp+0x8u), xmm[6].q[0]);
    /* 008c9d7d: fld qword ptr [esp + 8] */ FPUSH(R_F64((u32)(r_esp+0x8u)));
    /* 008c9d81: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 008c9d83: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008c9d85: movlpd qword ptr [esp], xmm4 */ W64((u32)(r_esp), xmm[4].q[0]);
    /* 008c9d8a: fld qword ptr [esp] */ FPUSH(R_F64((u32)(r_esp)));
    /* 008c9d8d: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 008c9d8f: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 008c9d92: movlpd xmm0, qword ptr [esp] */ xmm[0].q[0] = R64((u32)(r_esp));
    /* 008c9d97: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 008c9d9b: add esp, 0x12 */ {  u32 a = r_esp; u32 b = 0x12u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c9d9e: pextrw ecx, xmm0, 3 */ r_ecx = (u32)xmm[0].w[3];
    /* 008c9da3: and ecx, 0x7ff0 */ {  u32 a = r_ecx; u32 b = 0x7ff0u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008c9da9: cmp ecx, 0x7ff0 */ {  u32 a = r_ecx; u32 b = 0x7ff0u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008c9daf: jae 0x8c9df6 */ if (!fC) goto L_008c9df6;
L_008c9db5:; BB(0x008c9db5);
    /* 008c9db5: cmp ecx, 0 */ {  u32 a = r_ecx; u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c9db8: je 0x8c9e00 */ if (fZ) goto L_008c9e00;
L_008c9dbe:; BB(0x008c9dbe);
    /* 008c9dbe: jmp 0x8c9e33 */ goto L_008c9e33;
L_008c9df6:; BB(0x008c9df6);
    /* 008c9df6: mov edx, 0xe */ r_edx = 0xeu;
    /* 008c9dfb: jmp 0x8c9e05 */ goto L_008c9e05;
L_008c9e00:; BB(0x008c9e00);
    /* 008c9e00: mov edx, 0xf */ r_edx = 0xfu;
L_008c9e05:; BB(0x008c9e05);
    /* 008c9e05: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008c9e08: movlpd qword ptr [esp + 0x10], xmm0 */ W64((u32)(r_esp+0x10u), xmm[0].q[0]);
    /* 008c9e0e: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 008c9e12: mov edx, esp */ r_edx = r_esp;
    /* 008c9e14: add edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008c9e17: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 008c9e1b: add edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008c9e1e: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 008c9e22: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 008c9e25: call 0x850eb4 */ r_esp -= 4; W32(r_esp, 0x8c9e2au); f_00850eb4();
    /* 008c9e2a: movlpd xmm0, qword ptr [esp + 0x10] */ xmm[0].q[0] = R64((u32)(r_esp+0x10u));
    /* 008c9e30: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_008c9e33:; BB(0x008c9e33);
    /* 008c9e33: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008c9e36: movlpd qword ptr [esp + 4], xmm0 */ W64((u32)(r_esp+0x4u), xmm[0].q[0]);
    /* 008c9e3c: fld qword ptr [esp + 4] */ FPUSH(R_F64((u32)(r_esp+0x4u)));
    /* 008c9e40: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c9e43: ret  */ FN_RET(0x008c9b28); r_esp += 4; return;
L_008c9e44:; BB(0x008c9e44);
    /* 008c9e44: cmp eax, 0x7ff00000 */ {  u32 a = r_eax; u32 b = 0x7ff00000u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008c9e49: jae 0x8c9e84 */ if (!fC) goto L_008c9e84;
L_008c9e4f:; BB(0x008c9e4f);
    /* 008c9e4f: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 008c9e53: cmp eax, 0x80000000 */ {  u32 a = r_eax; u32 b = 0x80000000u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008c9e58: jae 0x8c9e71 */ if (!fC) goto L_008c9e71;
L_008c9e5e:; BB(0x008c9e5e);
    /* 008c9e5e: movlpd xmm0, qword ptr [0x99fe20] */ xmm[0].q[0] = R64((u32)(0x99fe20u));
    /* 008c9e66: mulsd xmm0, xmm0 */ { XMM s = xmm[0]; xmm[0].f[0] = xmm[0].f[0] * s.f[0]; }
    /* 008c9e6a: mov edx, 0xe */ r_edx = 0xeu;
    /* 008c9e6f: jmp 0x8c9e05 */ goto L_008c9e05;
L_008c9e71:; BB(0x008c9e71);
    /* 008c9e71: movlpd xmm0, qword ptr [0x99fe28] */ xmm[0].q[0] = R64((u32)(0x99fe28u));
    /* 008c9e79: mulsd xmm0, xmm0 */ { XMM s = xmm[0]; xmm[0].f[0] = xmm[0].f[0] * s.f[0]; }
    /* 008c9e7d: mov edx, 0xf */ r_edx = 0xfu;
    /* 008c9e82: jmp 0x8c9e05 */ goto L_008c9e05;
L_008c9e84:; BB(0x008c9e84);
    /* 008c9e84: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 008c9e88: cmp eax, 0x7ff00000 */ {  u32 a = r_eax; u32 b = 0x7ff00000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008c9e8d: ja 0x8c9ead */ if ((!fC&&!fZ)) goto L_008c9ead;
L_008c9e8f:; BB(0x008c9e8f);
    /* 008c9e8f: cmp edx, 0 */ {  u32 a = r_edx; u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c9e92: jne 0x8c9ead */ if (!fZ) goto L_008c9ead;
L_008c9e94:; BB(0x008c9e94);
    /* 008c9e94: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 008c9e98: cmp eax, 0x7ff00000 */ {  u32 a = r_eax; u32 b = 0x7ff00000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008c9e9d: jne 0x8c9ea6 */ if (!fZ) goto L_008c9ea6;
L_008c9e9f:; BB(0x008c9e9f);
    /* 008c9e9f: fld qword ptr [0x99fe30] */ FPUSH(R_F64((u32)(0x99fe30u)));
    /* 008c9ea5: ret  */ FN_RET(0x008c9b28); r_esp += 4; return;
L_008c9ea6:; BB(0x008c9ea6);
    /* 008c9ea6: fld qword ptr [0x99fe38] */ FPUSH(R_F64((u32)(0x99fe38u)));
    /* 008c9eac: ret  */ FN_RET(0x008c9b28); r_esp += 4; return;
L_008c9ead:; BB(0x008c9ead);
    /* 008c9ead: movlpd xmm0, qword ptr [esp + 4] */ xmm[0].q[0] = R64((u32)(r_esp+0x4u));
    /* 008c9eb3: addsd xmm0, xmm0 */ { XMM s = xmm[0]; xmm[0].f[0] = xmm[0].f[0] + s.f[0]; }
    /* 008c9eb7: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008c9eba: movlpd qword ptr [esp + 4], xmm0 */ W64((u32)(r_esp+0x4u), xmm[0].q[0]);
    /* 008c9ec0: fld qword ptr [esp + 4] */ FPUSH(R_F64((u32)(r_esp+0x4u)));
    /* 008c9ec4: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c9ec7: ret  */ FN_RET(0x008c9b28); r_esp += 4; return;
L_008c9ec8:; BB(0x008c9ec8);
    /* 008c9ec8: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 008c9ecc: and eax, 0x7fffffff */ {  u32 a = r_eax; u32 b = 0x7fffffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008c9ed1: cmp eax, 0x40900000 */ {  u32 a = r_eax; u32 b = 0x40900000u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008c9ed6: jae 0x8c9e44 */ if (!fC) goto L_008c9e44;
L_008c9edc:; BB(0x008c9edc);
    /* 008c9edc: movlpd xmm0, qword ptr [esp + 4] */ xmm[0].q[0] = R64((u32)(r_esp+0x4u));
    /* 008c9ee2: addsd xmm0, qword ptr [0x99fe40] */ { XMM s; s.q[0] = R64((u32)(0x99fe40u)); s.q[1] = 0; xmm[0].f[0] = xmm[0].f[0] + s.f[0]; }
    /* 008c9eea: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008c9eed: movlpd qword ptr [esp + 4], xmm0 */ W64((u32)(r_esp+0x4u), xmm[0].q[0]);
    /* 008c9ef3: fld qword ptr [esp + 4] */ FPUSH(R_F64((u32)(r_esp+0x4u)));
    /* 008c9ef7: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c9efa: ret  */ FN_RET(0x008c9b28); r_esp += 4; return;
L_008c9efc:; BB(0x008c9efc);
    /* 008c9efc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c9efd: mov ebx, esp */ r_ebx = r_esp;
    /* 008c9eff: and esp, 0xfffffff8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 008c9f02: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008c9f03: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008c9f04: mov ebp, dword ptr [ebx + 4] */ r_ebp = R32((u32)(r_ebx+0x4u));
    /* 008c9f07: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 008c9f0b: mov ebp, esp */ r_ebp = r_esp;
    /* 008c9f0d: sub esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008c9f10: mov dword ptr [ebp - 0x14], edi */ W32((u32)(r_ebp+0xffffffecu), r_edi);
    /* 008c9f13: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 008c9f16: mov esi, 0 */ r_esi = 0x0u;
    /* 008c9f1b: fnstcw word ptr [ebp - 0x28] */ W16((u32)(r_ebp+0xffffffd8u), fcw);
    /* 008c9f1e: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 008c9f21: mov edx, ecx */ r_edx = r_ecx;
    /* 008c9f23: and edx, 0x7fffffff */ {  u32 a = r_edx; u32 b = 0x7fffffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 008c9f29: cmp edx, 0x4055a92d */ {  u32 a = r_edx; u32 b = 0x4055a92du; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008c9f2f: jae 0x8ca03d */ if (!fC) goto L_008ca03d;
L_008c9f35:; BB(0x008c9f35);
    /* 008c9f35: cmp edx, 0x3c600000 */ {  u32 a = r_edx; u32 b = 0x3c600000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008c9f3b: jae 0x8c9f53 */ if (!fC) goto L_008c9f53;
L_008c9f3d:; BB(0x008c9f3d);
    /* 008c9f3d: fld qword ptr [0x99fea8] */ FPUSH(R_F64((u32)(0x99fea8u)));
    /* 008c9f43: fadd qword ptr [ebx + 8] */ ST(0) = ST(0) + R_F64((u32)(r_ebx+0x8u));
    /* 008c9f46: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 008c9f49: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 008c9f4c: mov esp, ebp */ r_esp = r_ebp;
    /* 008c9f4e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008c9f4f: mov esp, ebx */ r_esp = r_ebx;
    /* 008c9f51: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008c9f52: ret  */ FN_RET(0x008c9b28); r_esp += 4; return;
L_008c9f53:; BB(0x008c9f53);
    /* 008c9f53: fld qword ptr [0x99ff08] */ FPUSH(R_F64((u32)(0x99ff08u)));
    /* 008c9f59: fld qword ptr [ebx + 8] */ FPUSH(R_F64((u32)(r_ebx+0x8u)));
    /* 008c9f5c: fmul qword ptr [0x99fe60] */ ST(0) = ST(0) * R_F64((u32)(0x99fe60u));
    /* 008c9f62: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 008c9f64: fld qword ptr [0x99fea8] */ FPUSH(R_F64((u32)(0x99fea8u)));
    /* 008c9f6a: fld qword ptr [0x99fe88] */ FPUSH(R_F64((u32)(0x99fe88u)));
    /* 008c9f70: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 008c9f73: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 008c9f76: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 008c9f78: fstp qword ptr [ebp - 0x48] */ W_F64((u32)(r_ebp+0xffffffb8u), ST(0)); FPOP();
    /* 008c9f7b: fld qword ptr [0x99fea0] */ FPUSH(R_F64((u32)(0x99fea0u)));
    /* 008c9f81: fld qword ptr [ebp - 0x48] */ FPUSH(R_F64((u32)(r_ebp+0xffffffb8u)));
    /* 008c9f84: fsubrp st(4) */ ST(4) = ST(0) - ST(4); FPOP();
    /* 008c9f86: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 008c9f88: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 008c9f8a: fmul qword ptr [0x99fe98] */ ST(0) = ST(0) * R_F64((u32)(0x99fe98u));
    /* 008c9f90: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 008c9f92: fadd qword ptr [ebx + 8] */ ST(0) = ST(0) + R_F64((u32)(r_ebx+0x8u));
    /* 008c9f95: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 008c9f98: fld qword ptr [0x99fe90] */ FPUSH(R_F64((u32)(0x99fe90u)));
    /* 008c9f9e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 008c9fa0: fst qword ptr [ebx + 8] */ W_F64((u32)(r_ebx+0x8u), ST(0));
    /* 008c9fa3: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 008c9fa5: fsub st(5) */ ST(0) = ST(0) - ST(5);
    /* 008c9fa7: fsub st(1), st(0) */ ST(1) = ST(1) - ST(0);
    /* 008c9fa9: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 008c9fab: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 008c9fad: fadd st(4), st(0) */ ST(4) = ST(4) + ST(0);
    /* 008c9faf: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 008c9fb1: fstp qword ptr [ebp - 0x40] */ W_F64((u32)(r_ebp+0xffffffc0u), ST(0)); FPOP();
    /* 008c9fb4: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 008c9fb6: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 008c9fb8: fld qword ptr [0x99fe78] */ FPUSH(R_F64((u32)(0x99fe78u)));
    /* 008c9fbe: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 008c9fc0: fadd st(5), st(0) */ ST(5) = ST(5) + ST(0);
    /* 008c9fc2: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
    /* 008c9fc9: mov ecx, edx */ r_ecx = r_edx;
    /* 008c9fcb: fld qword ptr [ebp - 0x40] */ FPUSH(R_F64((u32)(r_ebp+0xffffffc0u)));
    /* 008c9fce: fadd st(3), st(0) */ ST(3) = ST(3) + ST(0);
    /* 008c9fd0: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 008c9fd2: fsubp st(4) */ ST(4) = ST(4) - ST(0); FPOP();
    /* 008c9fd4: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 008c9fd6: fld st(4) */ { long double v = ST(4); FPUSH(v); }
    /* 008c9fd8: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 008c9fda: fmul st(4), st(0) */ ST(4) = ST(4) * ST(0);
    /* 008c9fdc: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 008c9fde: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 008c9fe0: fadd qword ptr [0x99fe80] */ ST(0) = ST(0) + R_F64((u32)(0x99fe80u));
    /* 008c9fe6: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008c9fe8: shl ecx, 0x19 */ { u32 c = (25u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 008c9feb: sar ecx, 0x19 */ { u32 c = (25u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 008c9fee: fld qword ptr [0x99fe68] */ FPUSH(R_F64((u32)(0x99fe68u)));
    /* 008c9ff4: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 008c9ff6: fadd qword ptr [0x99fe70] */ ST(0) = ST(0) + R_F64((u32)(0x99fe70u));
    /* 008c9ffc: fmulp st(6) */ ST(6) = ST(6) * ST(0); FPOP();
    /* 008c9ffe: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 008ca000: faddp st(5) */ ST(5) = ST(5) + ST(0); FPOP();
    /* 008ca002: fmulp st(4) */ ST(4) = ST(4) * ST(0); FPOP();
    /* 008ca004: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 008ca006: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 008ca008: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008ca00a: fld qword ptr [ebp - 0x40] */ FPUSH(R_F64((u32)(r_ebp+0xffffffc0u)));
    /* 008ca00d: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 008ca00f: sar edx, 7 */ { u32 c = (7u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 008ca012: add edx, 0x7f */ {  u32 a = r_edx; u32 b = 0x7fu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008ca015: shl edx, 0x17 */ { u32 c = (23u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 008ca018: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 008ca01b: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008ca01d: fmul qword ptr [ecx*8 + 0x997a00] */ ST(0) = ST(0) * R_F64((u32)(r_ecx*8+0x997a00u));
    /* 008ca024: fld qword ptr [ecx*8 + 0x997a08] */ FPUSH(R_F64((u32)(r_ecx*8+0x997a08u)));
    /* 008ca02b: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 008ca02d: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 008ca02f: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008ca031: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008ca033: fmul dword ptr [ebp - 0x24] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffdcu));
    /* 008ca036: mov esp, ebp */ r_esp = r_ebp;
    /* 008ca038: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008ca039: mov esp, ebx */ r_esp = r_ebx;
    /* 008ca03b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008ca03c: ret  */ FN_RET(0x008c9b28); r_esp += 4; return;
L_008ca03d:; BB(0x008ca03d);
    /* 008ca03d: mov eax, ecx */ r_eax = r_ecx;
    /* 008ca03f: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 008ca042: mov edi, dword ptr [eax*8 + 0x99fefc] */ r_edi = R32((u32)(r_eax*8+0x99fefcu));
    /* 008ca049: cmp edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008ca04b: jb 0x8ca063 */ if (fC) goto L_008ca063;
L_008ca04d:; BB(0x008ca04d);
    /* 008ca04d: jne 0x8ca209 */ if (!fZ) goto L_008ca209;
L_008ca053:; BB(0x008ca053);
    /* 008ca053: mov edi, dword ptr [ebx + 8] */ r_edi = R32((u32)(r_ebx+0x8u));
    /* 008ca056: cmp edi, dword ptr [eax*8 + 0x99fef8] */ {  u32 a = r_edi; u32 b = R32((u32)(r_eax*8+0x99fef8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008ca05d: ja 0x8ca209 */ if ((!fC&&!fZ)) goto L_008ca209;
L_008ca063:; BB(0x008ca063);
    /* 008ca063: fld qword ptr [0x99ff08] */ FPUSH(R_F64((u32)(0x99ff08u)));
    /* 008ca069: fld qword ptr [ebx + 8] */ FPUSH(R_F64((u32)(r_ebx+0x8u)));
    /* 008ca06c: fmul qword ptr [0x99fe60] */ ST(0) = ST(0) * R_F64((u32)(0x99fe60u));
    /* 008ca072: fld qword ptr [0x99fea0] */ FPUSH(R_F64((u32)(0x99fea0u)));
    /* 008ca078: fld qword ptr [0x99fea8] */ FPUSH(R_F64((u32)(0x99fea8u)));
    /* 008ca07e: fld qword ptr [0x99fe90] */ FPUSH(R_F64((u32)(0x99fe90u)));
    /* 008ca084: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 008ca086: fadd st(4) */ ST(0) = ST(0) + ST(4);
    /* 008ca088: fstp qword ptr [ebp - 0x48] */ W_F64((u32)(r_ebp+0xffffffb8u), ST(0)); FPOP();
    /* 008ca08b: fld qword ptr [ebp - 0x48] */ FPUSH(R_F64((u32)(r_ebp+0xffffffb8u)));
    /* 008ca08e: mov edi, dword ptr [ebp - 0x48] */ r_edi = R32((u32)(r_ebp+0xffffffb8u));
    /* 008ca091: fsubrp st(4) */ ST(4) = ST(0) - ST(4); FPOP();
    /* 008ca093: fld qword ptr [0x99fe88] */ FPUSH(R_F64((u32)(0x99fe88u)));
    /* 008ca099: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 008ca09b: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 008ca09d: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 008ca09f: fmul qword ptr [0x99fe98] */ ST(0) = ST(0) * R_F64((u32)(0x99fe98u));
    /* 008ca0a5: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 008ca0a7: fadd qword ptr [ebx + 8] */ ST(0) = ST(0) + R_F64((u32)(r_ebx+0x8u));
    /* 008ca0aa: fst qword ptr [ebx + 8] */ W_F64((u32)(r_ebx+0x8u), ST(0));
    /* 008ca0ad: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 008ca0af: fsub st(5) */ ST(0) = ST(0) - ST(5);
    /* 008ca0b1: fsub st(1), st(0) */ ST(1) = ST(1) - ST(0);
    /* 008ca0b3: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 008ca0b5: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 008ca0b7: fadd st(3), st(0) */ ST(3) = ST(3) + ST(0);
    /* 008ca0b9: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 008ca0bb: fstp qword ptr [ebp - 0x40] */ W_F64((u32)(r_ebp+0xffffffc0u), ST(0)); FPOP();
    /* 008ca0be: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 008ca0c0: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 008ca0c2: fld qword ptr [0x99fe78] */ FPUSH(R_F64((u32)(0x99fe78u)));
    /* 008ca0c8: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 008ca0ca: fadd st(5), st(0) */ ST(5) = ST(5) + ST(0);
    /* 008ca0cc: mov ecx, edi */ r_ecx = r_edi;
    /* 008ca0ce: mov dword ptr [ebp - 8], esi */ W32((u32)(r_ebp+0xfffffff8u), r_esi);
    /* 008ca0d1: mov esi, edi */ r_esi = r_edi;
    /* 008ca0d3: shl esi, 0x19 */ { u32 c = (25u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 008ca0d6: sar esi, 0x19 */ { u32 c = (25u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 008ca0d9: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008ca0db: sar ecx, 7 */ { u32 c = (7u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 008ca0de: add ecx, dword ptr [eax*4 + 0x99fef0] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax*4+0x99fef0u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008ca0e5: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008ca0e7: shl ecx, 0x14 */ { u32 c = (20u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 008ca0ea: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008ca0ec: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 008ca0ef: fld qword ptr [ebp - 0x40] */ FPUSH(R_F64((u32)(r_ebp+0xffffffc0u)));
    /* 008ca0f2: fadd st(5), st(0) */ ST(5) = ST(5) + ST(0);
    /* 008ca0f4: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 008ca0f6: fsubp st(3) */ ST(3) = ST(3) - ST(0); FPOP();
    /* 008ca0f8: fld qword ptr [0x99fe68] */ FPUSH(R_F64((u32)(0x99fe68u)));
    /* 008ca0fe: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 008ca100: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 008ca102: fld st(5) */ { long double v = ST(5); FPUSH(v); }
    /* 008ca104: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 008ca106: fmul st(4), st(0) */ ST(4) = ST(4) * ST(0);
    /* 008ca108: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 008ca10a: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 008ca10c: fadd qword ptr [0x99fe80] */ ST(0) = ST(0) + R_F64((u32)(0x99fe80u));
    /* 008ca112: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 008ca114: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 008ca116: fadd qword ptr [0x99fe70] */ ST(0) = ST(0) + R_F64((u32)(0x99fe70u));
    /* 008ca11c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 008ca11e: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 008ca120: fxch st(6) */ { long double t = ST(0); ST(0) = ST(6); ST(6) = t; }
    /* 008ca122: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 008ca124: faddp st(5) */ ST(5) = ST(5) + ST(0); FPOP();
    /* 008ca126: fmulp st(4) */ ST(4) = ST(4) * ST(0); FPOP();
    /* 008ca128: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 008ca12a: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008ca12c: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 008ca12f: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 008ca131: cmp edi, 0xfffe0101 */ {  u32 a = r_edi; u32 b = 0xfffe0101u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008ca137: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 008ca13a: fld qword ptr [esi*8 + 0x997a00] */ FPUSH(R_F64((u32)(r_esi*8+0x997a00u)));
    /* 008ca141: fld qword ptr [esi*8 + 0x997a08] */ FPUSH(R_F64((u32)(r_esi*8+0x997a08u)));
    /* 008ca148: mov esi, dword ptr [ebp - 8] */ r_esi = R32((u32)(r_ebp+0xfffffff8u));
    /* 008ca14b: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 008ca14e: jle 0x8ca170 */ if ((fZ||fS!=fO)) goto L_008ca170;
L_008ca150:; BB(0x008ca150);
    /* 008ca150: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 008ca152: fadd st(3) */ ST(0) = ST(0) + ST(3);
    /* 008ca154: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 008ca156: fld qword ptr [ebp - 0x10] */ FPUSH(R_F64((u32)(r_ebp+0xfffffff0u)));
    /* 008ca159: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 008ca15b: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 008ca15d: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 008ca15f: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008ca161: fmul qword ptr [ebp - 0x38] */ ST(0) = ST(0) * R_F64((u32)(r_ebp+0xffffffc8u));
    /* 008ca164: fmul qword ptr [eax*8 + 0x99fee0] */ ST(0) = ST(0) * R_F64((u32)(r_eax*8+0x99fee0u));
    /* 008ca16b: jmp 0x8ca1fc */ goto L_008ca1fc;
L_008ca170:; BB(0x008ca170);
    /* 008ca170: fld qword ptr [ebp - 0x10] */ FPUSH(R_F64((u32)(r_ebp+0xfffffff0u)));
    /* 008ca173: fld qword ptr [ebp - 0x10] */ FPUSH(R_F64((u32)(r_ebp+0xfffffff0u)));
    /* 008ca176: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 008ca178: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 008ca17a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 008ca17c: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 008ca17e: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 008ca180: faddp st(4) */ ST(4) = ST(4) + ST(0); FPOP();
    /* 008ca182: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 008ca184: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 008ca186: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008ca188: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 008ca18a: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 008ca18c: fstp qword ptr [ebp - 0x40] */ W_F64((u32)(r_ebp+0xffffffc0u), ST(0)); FPOP();
    /* 008ca18f: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 008ca192: and edx, 0xfffff000 */ {  u32 a = r_edx; u32 b = 0xfffff000u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 008ca198: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 008ca19b: fld qword ptr [ebp - 0x40] */ FPUSH(R_F64((u32)(r_ebp+0xffffffc0u)));
    /* 008ca19e: fsub st(2), st(0) */ ST(2) = ST(2) - ST(0);
    /* 008ca1a0: movzx edx, word ptr [ebp - 0x28] */ r_edx = (u32)R16((u32)(r_ebp+0xffffffd8u));
    /* 008ca1a4: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 008ca1a6: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 008ca1a8: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 008ca1aa: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 008ca1ad: mov ecx, edx */ r_ecx = r_edx;
    /* 008ca1af: and ecx, 0x300 */ {  u32 a = r_ecx; u32 b = 0x300u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008ca1b5: cmp ecx, 0x300 */ {  u32 a = r_ecx; u32 b = 0x300u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008ca1bb: je 0x8ca1d4 */ if (fZ) goto L_008ca1d4;
L_008ca1bd:; BB(0x008ca1bd);
    /* 008ca1bd: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008ca1bf: or edx, 0xffff0300 */ {  u32 a = r_edx; u32 b = 0xffff0300u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 008ca1c5: mov word ptr [ebp - 0x20], dx */ W16((u32)(r_ebp+0xffffffe0u), (u16)r_edx);
    /* 008ca1c9: fldcw word ptr [ebp - 0x20] */ fcw = R16((u32)(r_ebp+0xffffffe0u));
    /* 008ca1cc: fld qword ptr [ebp - 0x40] */ FPUSH(R_F64((u32)(r_ebp+0xffffffc0u)));
    /* 008ca1cf: mov esi, 1 */ r_esi = 0x1u;
L_008ca1d4:; BB(0x008ca1d4);
    /* 008ca1d4: fadd qword ptr [ebp - 0x10] */ ST(0) = ST(0) + R_F64((u32)(r_ebp+0xfffffff0u));
    /* 008ca1d7: fmul qword ptr [ebp - 0x38] */ ST(0) = ST(0) * R_F64((u32)(r_ebp+0xffffffc8u));
    /* 008ca1da: fmul qword ptr [eax*8 + 0x99fee0] */ ST(0) = ST(0) * R_F64((u32)(r_eax*8+0x99fee0u));
    /* 008ca1e1: fstp qword ptr [ebp - 0x30] */ W_F64((u32)(r_ebp+0xffffffd0u), ST(0)); FPOP();
    /* 008ca1e4: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008ca1e6: je 0x8ca1eb */ if (fZ) goto L_008ca1eb;
L_008ca1e8:; BB(0x008ca1e8);
    /* 008ca1e8: fldcw word ptr [ebp - 0x28] */ fcw = R16((u32)(r_ebp+0xffffffd8u));
L_008ca1eb:; BB(0x008ca1eb);
    /* 008ca1eb: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 008ca1ee: cmp eax, 0x100000 */ {  u32 a = r_eax; u32 b = 0x100000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008ca1f3: jl 0x8ca283 */ if ((fS!=fO)) goto L_008ca283;
L_008ca1f9:; BB(0x008ca1f9);
    /* 008ca1f9: fld qword ptr [ebp - 0x30] */ FPUSH(R_F64((u32)(r_ebp+0xffffffd0u)));
L_008ca1fc:; BB(0x008ca1fc);
    /* 008ca1fc: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 008ca1ff: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 008ca202: mov esp, ebp */ r_esp = r_ebp;
    /* 008ca204: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008ca205: mov esp, ebx */ r_esp = r_ebx;
    /* 008ca207: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008ca208: ret  */ FN_RET(0x008c9b28); r_esp += 4; return;
L_008ca209:; BB(0x008ca209);
    /* 008ca209: cmp edx, 0x7ff00000 */ {  u32 a = r_edx; u32 b = 0x7ff00000u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008ca20f: jae 0x8ca24e */ if (!fC) goto L_008ca24e;
L_008ca211:; BB(0x008ca211);
    /* 008ca211: test ecx, 0x80000000 */ {  u32 a = r_ecx; u32 b = 0x80000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008ca217: jne 0x8ca2a9 */ if (!fZ) goto L_008ca2a9;
L_008ca21d:; BB(0x008ca21d);
    /* 008ca21d: fld qword ptr [0x99fec0] */ FPUSH(R_F64((u32)(0x99fec0u)));
    /* 008ca223: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 008ca225: fstp qword ptr [ebp - 0x30] */ W_F64((u32)(r_ebp+0xffffffd0u), ST(0)); FPOP();
    /* 008ca228: lea ecx, [ebx + 8] */ r_ecx = (u32)(r_ebx+0x8u);
    /* 008ca22b: lea edx, [ebx + 8] */ r_edx = (u32)(r_ebx+0x8u);
    /* 008ca22e: lea eax, [ebp - 0x30] */ r_eax = (u32)(r_ebp+0xffffffd0u);
    /* 008ca231: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 008ca233: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008ca234: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008ca235: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008ca236: call 0x850eb4 */ r_esp -= 4; W32(r_esp, 0x8ca23bu); f_00850eb4();
    /* 008ca23b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008ca23e: fld qword ptr [ebp - 0x30] */ FPUSH(R_F64((u32)(r_ebp+0xffffffd0u)));
    /* 008ca241: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 008ca244: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 008ca247: mov esp, ebp */ r_esp = r_ebp;
    /* 008ca249: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008ca24a: mov esp, ebx */ r_esp = r_ebx;
    /* 008ca24c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008ca24d: ret  */ FN_RET(0x008c9b28); r_esp += 4; return;
L_008ca24e:; BB(0x008ca24e);
    /* 008ca24e: add edx, 0x80100000 */ {  u32 a = r_edx; u32 b = 0x80100000u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008ca254: or edx, dword ptr [ebx + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebx+0x8u)); u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008ca257: jne 0x8ca26d */ if (!fZ) goto L_008ca26d;
L_008ca259:; BB(0x008ca259);
    /* 008ca259: fld qword ptr [eax*8 + 0x99fed0] */ FPUSH(R_F64((u32)(r_eax*8+0x99fed0u)));
    /* 008ca260: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 008ca263: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 008ca266: mov esp, ebp */ r_esp = r_ebp;
    /* 008ca268: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008ca269: mov esp, ebx */ r_esp = r_ebx;
    /* 008ca26b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008ca26c: ret  */ FN_RET(0x008c9b28); r_esp += 4; return;
L_008ca26d:; BB(0x008ca26d);
    /* 008ca26d: fld qword ptr [ebx + 8] */ FPUSH(R_F64((u32)(r_ebx+0x8u)));
    /* 008ca270: fmul qword ptr [0x99fea8] */ ST(0) = ST(0) * R_F64((u32)(0x99fea8u));
    /* 008ca276: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 008ca279: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 008ca27c: mov esp, ebp */ r_esp = r_ebp;
    /* 008ca27e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008ca27f: mov esp, ebx */ r_esp = r_ebx;
    /* 008ca281: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008ca282: ret  */ FN_RET(0x008c9b28); r_esp += 4; return;
L_008ca283:; BB(0x008ca283);
    /* 008ca283: lea ecx, [ebx + 8] */ r_ecx = (u32)(r_ebx+0x8u);
    /* 008ca286: lea edx, [ebx + 8] */ r_edx = (u32)(r_ebx+0x8u);
    /* 008ca289: lea eax, [ebp - 0x30] */ r_eax = (u32)(r_ebp+0xffffffd0u);
    /* 008ca28c: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 008ca28e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008ca28f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008ca290: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008ca291: call 0x850eb4 */ r_esp -= 4; W32(r_esp, 0x8ca296u); f_00850eb4();
    /* 008ca296: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008ca299: fld qword ptr [ebp - 0x30] */ FPUSH(R_F64((u32)(r_ebp+0xffffffd0u)));
    /* 008ca29c: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 008ca29f: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 008ca2a2: mov esp, ebp */ r_esp = r_ebp;
    /* 008ca2a4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008ca2a5: mov esp, ebx */ r_esp = r_ebx;
    /* 008ca2a7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008ca2a8: ret  */ FN_RET(0x008c9b28); r_esp += 4; return;
L_008ca2a9:; BB(0x008ca2a9);
    /* 008ca2a9: fld qword ptr [0x99feb0] */ FPUSH(R_F64((u32)(0x99feb0u)));
    /* 008ca2af: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 008ca2b1: fstp qword ptr [ebp - 0x30] */ W_F64((u32)(r_ebp+0xffffffd0u), ST(0)); FPOP();
    /* 008ca2b4: lea ecx, [ebx + 8] */ r_ecx = (u32)(r_ebx+0x8u);
    /* 008ca2b7: lea edx, [ebx + 8] */ r_edx = (u32)(r_ebx+0x8u);
    /* 008ca2ba: lea eax, [ebp - 0x30] */ r_eax = (u32)(r_ebp+0xffffffd0u);
    /* 008ca2bd: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 008ca2bf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008ca2c0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008ca2c1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008ca2c2: call 0x850eb4 */ r_esp -= 4; W32(r_esp, 0x8ca2c7u); f_00850eb4();
    /* 008ca2c7: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008ca2ca: fld qword ptr [ebp - 0x30] */ FPUSH(R_F64((u32)(r_ebp+0xffffffd0u)));
    /* 008ca2cd: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 008ca2d0: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 008ca2d3: mov esp, ebp */ r_esp = r_ebp;
    /* 008ca2d5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008ca2d6: mov esp, ebx */ r_esp = r_ebx;
    /* 008ca2d8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008ca2d9: ret  */ FN_RET(0x008c9b28); r_esp += 4; return;
}

void f_008c9b50(void) /* sub_8C9B50 */
{
    FN_ENTER(0x008c9b50);
L_008c9b50:; BB(0x008c9b50);
    /* 008c9b50: test dword ptr [0xae7f00], 0xfffffe00 */ {  u32 a = R32((u32)(0xae7f00u)); u32 b = 0xfffffe00u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c9b5a: jne 0x8ca2dc */ if (!fZ) goto L_008ca2dc;
L_008c9b60:; BB(0x008c9b60);
    /* 008c9b60: test dword ptr [0xae7f00], 0xffffffff */ {  u32 a = R32((u32)(0xae7f00u)); u32 b = 0xffffffffu; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c9b6a: jne 0x8ca394 */ if (!fZ) goto L_008ca394;
L_008c9b70:; BB(0x008c9b70);
    /* 008c9b70: call 0x86b8a0 */ r_esp -= 4; W32(r_esp, 0x8c9b75u); f_0086b8a0();
    /* 008c9b75: jmp 0x8c9b50 */ goto L_008c9b50;
L_008ca2dc:; BB(0x008ca2dc);
    /* 008ca2dc: movq xmm0, qword ptr [esp + 4] */ { xmm[0].q[0] = R64((u32)(r_esp+0x4u)); xmm[0].q[1] = 0; }
    /* 008ca2e2: pextrw eax, xmm0, 3 */ r_eax = (u32)xmm[0].w[3];
    /* 008ca2e7: and eax, 0x7fff */ {  u32 a = r_eax; u32 b = 0x7fffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008ca2ec: sub eax, 0x3ff0 */ {  u32 a = r_eax; u32 b = 0x3ff0u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fS = ((r >> 31) & 1); }
    /* 008ca2f1: js 0x8ca336 */ if (fS) goto L_008ca336;
L_008ca2f7:; BB(0x008ca2f7);
    /* 008ca2f7: cmp eax, 0x330 */ {  u32 a = r_eax; u32 b = 0x330u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008ca2fc: jae 0x8ca368 */ if (!fC) goto L_008ca368;
L_008ca302:; BB(0x008ca302);
    /* 008ca302: movq xmm1, qword ptr [0x99ff58] */ { xmm[1].q[0] = R64((u32)(0x99ff58u)); xmm[1].q[1] = 0; }
    /* 008ca30a: movq xmm3, qword ptr [0x99ff60] */ { xmm[3].q[0] = R64((u32)(0x99ff60u)); xmm[3].q[1] = 0; }
    /* 008ca312: movdqa xmm2, xmm0 */ { XMM s = xmm[0]; xmm[2] = s; }
    /* 008ca316: addsd xmm0, xmm1 */ { XMM s = xmm[1]; xmm[0].f[0] = xmm[0].f[0] + s.f[0]; }
    /* 008ca31a: subsd xmm0, xmm1 */ { XMM s = xmm[1]; xmm[0].f[0] = xmm[0].f[0] - s.f[0]; }
    /* 008ca31e: cmpltsd xmm2, xmm0 */ { XMM s = xmm[0]; double a = xmm[2].f[0]; double b = s.f[0]; xmm[2].q[0] = (a < b) ? ~0ull : 0ull; }
    /* 008ca323: pand xmm2, xmm3 */ { MM64 a; a.q = xmm[2].q[0]; MM64 b; b.q = xmm[3].q[0]; MM64 r; r.q = a.q & b.q; xmm[2].q[0] = r.q; } { MM64 a; a.q = xmm[2].q[1]; MM64 b; b.q = xmm[3].q[1]; MM64 r; r.q = a.q & b.q; xmm[2].q[1] = r.q; }
    /* 008ca327: addsd xmm0, xmm2 */ { XMM s = xmm[2]; xmm[0].f[0] = xmm[0].f[0] + s.f[0]; }
    /* 008ca32b: movq qword ptr [esp + 4], xmm0 */ W64((u32)(r_esp+0x4u), xmm[0].q[0]);
    /* 008ca331: fld qword ptr [esp + 4] */ FPUSH(R_F64((u32)(r_esp+0x4u)));
    /* 008ca335: ret  */ FN_RET(0x008c9b50); r_esp += 4; return;
L_008ca336:; BB(0x008ca336);
    /* 008ca336: pxor xmm1, xmm1 */ { MM64 a; a.q = xmm[1].q[0]; MM64 b; b.q = xmm[1].q[0]; MM64 r; r.q = a.q ^ b.q; xmm[1].q[0] = r.q; } { MM64 a; a.q = xmm[1].q[1]; MM64 b; b.q = xmm[1].q[1]; MM64 r; r.q = a.q ^ b.q; xmm[1].q[1] = r.q; }
    /* 008ca33a: pextrw eax, xmm0, 3 */ r_eax = (u32)xmm[0].w[3];
    /* 008ca33f: cmpeqsd xmm1, xmm0 */ { XMM s = xmm[0]; double a = xmm[1].f[0]; double b = s.f[0]; xmm[1].q[0] = (a == b) ? ~0ull : 0ull; }
    /* 008ca344: test eax, 0x8000 */ {  u32 a = r_eax; u32 b = 0x8000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008ca349: movmskpd edx, xmm1 */ r_edx = ((xmm[1].d[1] >> 31) << 0) | ((xmm[1].d[3] >> 31) << 1);
    /* 008ca34d: je 0x8ca361 */ if (fZ) goto L_008ca361;
L_008ca34f:; BB(0x008ca34f);
    /* 008ca34f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008ca351: jne 0x8ca35a */ if (!fZ) goto L_008ca35a;
L_008ca353:; BB(0x008ca353);
    /* 008ca353: fld qword ptr [0x99ff60] */ FPUSH(R_F64((u32)(0x99ff60u)));
    /* 008ca359: ret  */ FN_RET(0x008c9b50); r_esp += 4; return;
L_008ca35a:; BB(0x008ca35a);
    /* 008ca35a: fld qword ptr [0x99ff70] */ FPUSH(R_F64((u32)(0x99ff70u)));
    /* 008ca360: ret  */ FN_RET(0x008c9b50); r_esp += 4; return;
L_008ca361:; BB(0x008ca361);
    /* 008ca361: fld qword ptr [0x99ff68] */ FPUSH(R_F64((u32)(0x99ff68u)));
    /* 008ca367: ret  */ FN_RET(0x008c9b50); r_esp += 4; return;
L_008ca368:; BB(0x008ca368);
    /* 008ca368: cmp eax, 0x340 */ {  u32 a = r_eax; u32 b = 0x340u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008ca36d: pextrw edx, xmm0, 0 */ r_edx = (u32)xmm[0].w[0];
    /* 008ca372: jae 0x8ca38c */ if (!fC) goto L_008ca38c;
L_008ca374:; BB(0x008ca374);
    /* 008ca374: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008ca377: je 0x8ca38c */ if (fZ) goto L_008ca38c;
L_008ca379:; BB(0x008ca379);
    /* 008ca379: addsd xmm0, qword ptr [0x99ff78] */ { XMM s; s.q[0] = R64((u32)(0x99ff78u)); s.q[1] = 0; xmm[0].f[0] = xmm[0].f[0] + s.f[0]; }
    /* 008ca381: movq qword ptr [esp + 4], xmm0 */ W64((u32)(r_esp+0x4u), xmm[0].q[0]);
    /* 008ca387: fld qword ptr [esp + 4] */ FPUSH(R_F64((u32)(r_esp+0x4u)));
    /* 008ca38b: ret  */ FN_RET(0x008c9b50); r_esp += 4; return;
L_008ca38c:; BB(0x008ca38c);
    /* 008ca38c: fld qword ptr [esp + 4] */ FPUSH(R_F64((u32)(r_esp+0x4u)));
    /* 008ca390: ret  */ FN_RET(0x008c9b50); r_esp += 4; return;
L_008ca394:; BB(0x008ca394);
    /* 008ca394: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008ca395: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 008ca399: mov edi, eax */ r_edi = r_eax;
    /* 008ca39b: and edi, 0x7fffffff */ {  u32 a = r_edi; u32 b = 0x7fffffffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 008ca3a1: lea edx, [edi - 0x3ff00000] */ r_edx = (u32)(r_edi+0xc0100000u);
    /* 008ca3a7: cmp edx, 0x3400000 */ {  u32 a = r_edx; u32 b = 0x3400000u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008ca3ad: jae 0x8ca44e */ if (!fC) goto L_008ca44e;
L_008ca3b3:; BB(0x008ca3b3);
    /* 008ca3b3: cmp edx, 0x1500000 */ {  u32 a = r_edx; u32 b = 0x1500000u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008ca3b9: jae 0x8ca402 */ if (!fC) goto L_008ca402;
L_008ca3bb:; BB(0x008ca3bb);
    /* 008ca3bb: mov ecx, edi */ r_ecx = r_edi;
    /* 008ca3bd: shr ecx, 0x14 */ { u32 c = (20u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 008ca3c0: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008ca3c2: add ecx, 0x413 */ {  u32 a = r_ecx; u32 b = 0x413u; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008ca3c8: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 008ca3cd: shl edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 008ca3cf: mov ecx, edx */ r_ecx = r_edx;
    /* 008ca3d1: not ecx */ r_ecx = ~r_ecx;
    /* 008ca3d3: and edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 008ca3d5: and eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008ca3d7: or edi, dword ptr [esp + 8] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp+0x8u)); u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 008ca3db: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 008ca3e3: test eax, 0x80000000 */ {  u32 a = r_eax; u32 b = 0x80000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008ca3e8: je 0x8ca3fc */ if (fZ) goto L_008ca3fc;
L_008ca3ea:; BB(0x008ca3ea);
    /* 008ca3ea: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008ca3ec: je 0x8ca3f6 */ if (fZ) goto L_008ca3f6;
L_008ca3ee:; BB(0x008ca3ee);
    /* 008ca3ee: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008ca3f0: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 008ca3f4: jmp 0x8ca448 */ goto L_008ca448;
L_008ca3f6:; BB(0x008ca3f6);
    /* 008ca3f6: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 008ca3fa: jmp 0x8ca448 */ goto L_008ca448;
L_008ca3fc:; BB(0x008ca3fc);
    /* 008ca3fc: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 008ca400: jmp 0x8ca448 */ goto L_008ca448;
L_008ca402:; BB(0x008ca402);
    /* 008ca402: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 008ca406: shr edi, 0x14 */ { u32 c = (20u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 008ca409: neg edi */ { u32 x = r_edi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008ca40b: add edi, 0x433 */ {  u32 a = r_edi; u32 b = 0x433u; u32 r = (a + b) & 0xffffffffu; r_edi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008ca411: mov ecx, edi */ r_ecx = r_edi;
    /* 008ca413: mov edi, 0xffffffff */ r_edi = 0xffffffffu;
    /* 008ca418: shl edi, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 008ca41a: mov ecx, edi */ r_ecx = r_edi;
    /* 008ca41c: not ecx */ r_ecx = ~r_ecx;
    /* 008ca41e: and ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008ca420: and edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 008ca422: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 008ca426: test eax, 0x80000000 */ {  u32 a = r_eax; u32 b = 0x80000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008ca42b: je 0x8ca448 */ if (fZ) goto L_008ca448;
L_008ca42d:; BB(0x008ca42d);
    /* 008ca42d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008ca42f: je 0x8ca448 */ if (fZ) goto L_008ca448;
L_008ca431:; BB(0x008ca431);
    /* 008ca431: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 008ca435: mov eax, edi */ r_eax = r_edi;
    /* 008ca437: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008ca438: sub ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); }
    /* 008ca43a: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 008ca43e: sbb eax, edx */ { u32 c = fC; u32 a = r_eax; u32 b = r_edx; u32 r = (a - b - c) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = ((u64)a < (u64)b + c); }
    /* 008ca440: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 008ca444: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
L_008ca448:; BB(0x008ca448);
    /* 008ca448: fld qword ptr [esp + 8] */ FPUSH(R_F64((u32)(r_esp+0x8u)));
    /* 008ca44c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008ca44d: ret  */ FN_RET(0x008c9b50); r_esp += 4; return;
L_008ca44e:; BB(0x008ca44e);
    /* 008ca44e: test edx, 0x80000000 */ {  u32 a = r_edx; u32 b = 0x80000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008ca454: je 0x8ca470 */ if (fZ) goto L_008ca470;
L_008ca456:; BB(0x008ca456);
    /* 008ca456: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 008ca45a: or edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_edi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008ca45c: jne 0x8ca464 */ if (!fZ) goto L_008ca464;
L_008ca45e:; BB(0x008ca45e);
    /* 008ca45e: fld qword ptr [esp + 8] */ FPUSH(R_F64((u32)(r_esp+0x8u)));
    /* 008ca462: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008ca463: ret  */ FN_RET(0x008c9b50); r_esp += 4; return;
L_008ca464:; BB(0x008ca464);
    /* 008ca464: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r; fC = (c <= 32) ? ((a >> (c - 1)) & 1) : 0; fO = (a >> 31) & 1; fZ = (r == 0); fS = (r >> 31) & 1; fP = !__builtin_parity(r & 0xffu); } }
    /* 008ca467: fld qword ptr [eax*8 + 0x99ff80] */ FPUSH(R_F64((u32)(r_eax*8+0x99ff80u)));
    /* 008ca46e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008ca46f: ret  */ FN_RET(0x008c9b50); r_esp += 4; return;
L_008ca470:; BB(0x008ca470);
    /* 008ca470: cmp edx, 0x40000000 */ {  u32 a = r_edx; u32 b = 0x40000000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008ca476: jae 0x8ca47e */ if (!fC) goto L_008ca47e;
L_008ca478:; BB(0x008ca478);
    /* 008ca478: fld qword ptr [esp + 8] */ FPUSH(R_F64((u32)(r_esp+0x8u)));
    /* 008ca47c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008ca47d: ret  */ FN_RET(0x008c9b50); r_esp += 4; return;
L_008ca47e:; BB(0x008ca47e);
    /* 008ca47e: fld qword ptr [esp + 8] */ FPUSH(R_F64((u32)(r_esp+0x8u)));
    /* 008ca482: fmul qword ptr [0x99ff90] */ ST(0) = ST(0) * R_F64((u32)(0x99ff90u));
    /* 008ca488: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008ca489: ret  */ FN_RET(0x008c9b50); r_esp += 4; return;
}

void f_008c9b78(void) /* sub_8C9B78 */
{
    FN_ENTER(0x008c9b78);
L_008c9b78:; BB(0x008c9b78);
    /* 008c9b78: test dword ptr [0xae7f00], 0xfffffe00 */ {  u32 a = R32((u32)(0xae7f00u)); u32 b = 0xfffffe00u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c9b82: jne 0x8ca48c */ if (!fZ) goto L_008ca48c;
L_008c9b88:; BB(0x008c9b88);
    /* 008c9b88: test dword ptr [0xae7f00], 0xffffffff */ {  u32 a = R32((u32)(0xae7f00u)); u32 b = 0xffffffffu; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c9b92: jne 0x8ca544 */ if (!fZ) goto L_008ca544;
L_008c9b98:; BB(0x008c9b98);
    /* 008c9b98: call 0x86b8a0 */ r_esp -= 4; W32(r_esp, 0x8c9b9du); f_0086b8a0();
    /* 008c9b9d: jmp 0x8c9b78 */ goto L_008c9b78;
L_008ca48c:; BB(0x008ca48c);
    /* 008ca48c: movq xmm0, qword ptr [esp + 4] */ { xmm[0].q[0] = R64((u32)(r_esp+0x4u)); xmm[0].q[1] = 0; }
    /* 008ca492: pextrw eax, xmm0, 3 */ r_eax = (u32)xmm[0].w[3];
    /* 008ca497: and eax, 0x7fff */ {  u32 a = r_eax; u32 b = 0x7fffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008ca49c: sub eax, 0x3ff0 */ {  u32 a = r_eax; u32 b = 0x3ff0u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fS = ((r >> 31) & 1); }
    /* 008ca4a1: js 0x8ca4e6 */ if (fS) goto L_008ca4e6;
L_008ca4a7:; BB(0x008ca4a7);
    /* 008ca4a7: cmp eax, 0x330 */ {  u32 a = r_eax; u32 b = 0x330u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008ca4ac: jae 0x8ca518 */ if (!fC) goto L_008ca518;
L_008ca4b2:; BB(0x008ca4b2);
    /* 008ca4b2: movq xmm1, qword ptr [0x99ffa0] */ { xmm[1].q[0] = R64((u32)(0x99ffa0u)); xmm[1].q[1] = 0; }
    /* 008ca4ba: movq xmm3, qword ptr [0x99ffa8] */ { xmm[3].q[0] = R64((u32)(0x99ffa8u)); xmm[3].q[1] = 0; }
    /* 008ca4c2: movdqa xmm2, xmm0 */ { XMM s = xmm[0]; xmm[2] = s; }
    /* 008ca4c6: addsd xmm0, xmm1 */ { XMM s = xmm[1]; xmm[0].f[0] = xmm[0].f[0] + s.f[0]; }
    /* 008ca4ca: subsd xmm0, xmm1 */ { XMM s = xmm[1]; xmm[0].f[0] = xmm[0].f[0] - s.f[0]; }
    /* 008ca4ce: cmpnlesd xmm2, xmm0 */ { XMM s = xmm[0]; double a = xmm[2].f[0]; double b = s.f[0]; xmm[2].q[0] = (!(a <= b)) ? ~0ull : 0ull; }
    /* 008ca4d3: pand xmm2, xmm3 */ { MM64 a; a.q = xmm[2].q[0]; MM64 b; b.q = xmm[3].q[0]; MM64 r; r.q = a.q & b.q; xmm[2].q[0] = r.q; } { MM64 a; a.q = xmm[2].q[1]; MM64 b; b.q = xmm[3].q[1]; MM64 r; r.q = a.q & b.q; xmm[2].q[1] = r.q; }
    /* 008ca4d7: addsd xmm0, xmm2 */ { XMM s = xmm[2]; xmm[0].f[0] = xmm[0].f[0] + s.f[0]; }
    /* 008ca4db: movq qword ptr [esp + 4], xmm0 */ W64((u32)(r_esp+0x4u), xmm[0].q[0]);
    /* 008ca4e1: fld qword ptr [esp + 4] */ FPUSH(R_F64((u32)(r_esp+0x4u)));
    /* 008ca4e5: ret  */ FN_RET(0x008c9b78); r_esp += 4; return;
L_008ca4e6:; BB(0x008ca4e6);
    /* 008ca4e6: pxor xmm1, xmm1 */ { MM64 a; a.q = xmm[1].q[0]; MM64 b; b.q = xmm[1].q[0]; MM64 r; r.q = a.q ^ b.q; xmm[1].q[0] = r.q; } { MM64 a; a.q = xmm[1].q[1]; MM64 b; b.q = xmm[1].q[1]; MM64 r; r.q = a.q ^ b.q; xmm[1].q[1] = r.q; }
    /* 008ca4ea: pextrw eax, xmm0, 3 */ r_eax = (u32)xmm[0].w[3];
    /* 008ca4ef: cmpeqsd xmm1, xmm0 */ { XMM s = xmm[0]; double a = xmm[1].f[0]; double b = s.f[0]; xmm[1].q[0] = (a == b) ? ~0ull : 0ull; }
    /* 008ca4f4: test eax, 0x8000 */ {  u32 a = r_eax; u32 b = 0x8000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008ca4f9: movmskpd edx, xmm1 */ r_edx = ((xmm[1].d[1] >> 31) << 0) | ((xmm[1].d[3] >> 31) << 1);
    /* 008ca4fd: jne 0x8ca511 */ if (!fZ) goto L_008ca511;
L_008ca4ff:; BB(0x008ca4ff);
    /* 008ca4ff: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008ca501: jne 0x8ca50a */ if (!fZ) goto L_008ca50a;
L_008ca503:; BB(0x008ca503);
    /* 008ca503: fld qword ptr [0x99ffa8] */ FPUSH(R_F64((u32)(0x99ffa8u)));
    /* 008ca509: ret  */ FN_RET(0x008c9b78); r_esp += 4; return;
L_008ca50a:; BB(0x008ca50a);
    /* 008ca50a: fld qword ptr [0x99ffb0] */ FPUSH(R_F64((u32)(0x99ffb0u)));
    /* 008ca510: ret  */ FN_RET(0x008c9b78); r_esp += 4; return;
L_008ca511:; BB(0x008ca511);
    /* 008ca511: fld qword ptr [0x99ffb8] */ FPUSH(R_F64((u32)(0x99ffb8u)));
    /* 008ca517: ret  */ FN_RET(0x008c9b78); r_esp += 4; return;
L_008ca518:; BB(0x008ca518);
    /* 008ca518: cmp eax, 0x340 */ {  u32 a = r_eax; u32 b = 0x340u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008ca51d: pextrw edx, xmm0, 0 */ r_edx = (u32)xmm[0].w[0];
    /* 008ca522: jae 0x8ca53c */ if (!fC) goto L_008ca53c;
L_008ca524:; BB(0x008ca524);
    /* 008ca524: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008ca527: je 0x8ca53c */ if (fZ) goto L_008ca53c;
L_008ca529:; BB(0x008ca529);
    /* 008ca529: addsd xmm0, qword ptr [0x99ffc0] */ { XMM s; s.q[0] = R64((u32)(0x99ffc0u)); s.q[1] = 0; xmm[0].f[0] = xmm[0].f[0] + s.f[0]; }
    /* 008ca531: movq qword ptr [esp + 4], xmm0 */ W64((u32)(r_esp+0x4u), xmm[0].q[0]);
    /* 008ca537: fld qword ptr [esp + 4] */ FPUSH(R_F64((u32)(r_esp+0x4u)));
    /* 008ca53b: ret  */ FN_RET(0x008c9b78); r_esp += 4; return;
L_008ca53c:; BB(0x008ca53c);
    /* 008ca53c: fld qword ptr [esp + 4] */ FPUSH(R_F64((u32)(r_esp+0x4u)));
    /* 008ca540: ret  */ FN_RET(0x008c9b78); r_esp += 4; return;
L_008ca544:; BB(0x008ca544);
    /* 008ca544: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008ca545: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 008ca549: mov edi, eax */ r_edi = r_eax;
    /* 008ca54b: and edi, 0x7fffffff */ {  u32 a = r_edi; u32 b = 0x7fffffffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 008ca551: lea edx, [edi - 0x3ff00000] */ r_edx = (u32)(r_edi+0xc0100000u);
    /* 008ca557: cmp edx, 0x3400000 */ {  u32 a = r_edx; u32 b = 0x3400000u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008ca55d: jae 0x8ca5fe */ if (!fC) goto L_008ca5fe;
L_008ca563:; BB(0x008ca563);
    /* 008ca563: cmp edx, 0x1500000 */ {  u32 a = r_edx; u32 b = 0x1500000u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008ca569: jae 0x8ca5b2 */ if (!fC) goto L_008ca5b2;
L_008ca56b:; BB(0x008ca56b);
    /* 008ca56b: mov ecx, edi */ r_ecx = r_edi;
    /* 008ca56d: shr ecx, 0x14 */ { u32 c = (20u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 008ca570: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008ca572: add ecx, 0x413 */ {  u32 a = r_ecx; u32 b = 0x413u; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008ca578: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 008ca57d: shl edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 008ca57f: mov ecx, edx */ r_ecx = r_edx;
    /* 008ca581: not ecx */ r_ecx = ~r_ecx;
    /* 008ca583: and edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 008ca585: and eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008ca587: or edi, dword ptr [esp + 8] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp+0x8u)); u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 008ca58b: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 008ca593: test eax, 0x80000000 */ {  u32 a = r_eax; u32 b = 0x80000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008ca598: jne 0x8ca5ac */ if (!fZ) goto L_008ca5ac;
L_008ca59a:; BB(0x008ca59a);
    /* 008ca59a: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008ca59c: je 0x8ca5a6 */ if (fZ) goto L_008ca5a6;
L_008ca59e:; BB(0x008ca59e);
    /* 008ca59e: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008ca5a0: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 008ca5a4: jmp 0x8ca5f8 */ goto L_008ca5f8;
L_008ca5a6:; BB(0x008ca5a6);
    /* 008ca5a6: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 008ca5aa: jmp 0x8ca5f8 */ goto L_008ca5f8;
L_008ca5ac:; BB(0x008ca5ac);
    /* 008ca5ac: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 008ca5b0: jmp 0x8ca5f8 */ goto L_008ca5f8;
L_008ca5b2:; BB(0x008ca5b2);
    /* 008ca5b2: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 008ca5b6: shr edi, 0x14 */ { u32 c = (20u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 008ca5b9: neg edi */ { u32 x = r_edi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008ca5bb: add edi, 0x433 */ {  u32 a = r_edi; u32 b = 0x433u; u32 r = (a + b) & 0xffffffffu; r_edi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008ca5c1: mov ecx, edi */ r_ecx = r_edi;
    /* 008ca5c3: mov edi, 0xffffffff */ r_edi = 0xffffffffu;
    /* 008ca5c8: shl edi, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 008ca5ca: mov ecx, edi */ r_ecx = r_edi;
    /* 008ca5cc: not ecx */ r_ecx = ~r_ecx;
    /* 008ca5ce: and ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008ca5d0: and edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 008ca5d2: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 008ca5d6: test eax, 0x80000000 */ {  u32 a = r_eax; u32 b = 0x80000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008ca5db: jne 0x8ca5f8 */ if (!fZ) goto L_008ca5f8;
L_008ca5dd:; BB(0x008ca5dd);
    /* 008ca5dd: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008ca5df: je 0x8ca5f8 */ if (fZ) goto L_008ca5f8;
L_008ca5e1:; BB(0x008ca5e1);
    /* 008ca5e1: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 008ca5e5: mov eax, edi */ r_eax = r_edi;
    /* 008ca5e7: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008ca5e8: sub ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); }
    /* 008ca5ea: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 008ca5ee: sbb eax, edx */ { u32 c = fC; u32 a = r_eax; u32 b = r_edx; u32 r = (a - b - c) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = ((u64)a < (u64)b + c); }
    /* 008ca5f0: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 008ca5f4: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
L_008ca5f8:; BB(0x008ca5f8);
    /* 008ca5f8: fld qword ptr [esp + 8] */ FPUSH(R_F64((u32)(r_esp+0x8u)));
    /* 008ca5fc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008ca5fd: ret  */ FN_RET(0x008c9b78); r_esp += 4; return;
L_008ca5fe:; BB(0x008ca5fe);
    /* 008ca5fe: test edx, 0x80000000 */ {  u32 a = r_edx; u32 b = 0x80000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008ca604: je 0x8ca620 */ if (fZ) goto L_008ca620;
L_008ca606:; BB(0x008ca606);
    /* 008ca606: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 008ca60a: or edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_edi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008ca60c: jne 0x8ca614 */ if (!fZ) goto L_008ca614;
L_008ca60e:; BB(0x008ca60e);
    /* 008ca60e: fld qword ptr [esp + 8] */ FPUSH(R_F64((u32)(r_esp+0x8u)));
    /* 008ca612: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008ca613: ret  */ FN_RET(0x008c9b78); r_esp += 4; return;
L_008ca614:; BB(0x008ca614);
    /* 008ca614: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r; fC = (c <= 32) ? ((a >> (c - 1)) & 1) : 0; fO = (a >> 31) & 1; fZ = (r == 0); fS = (r >> 31) & 1; fP = !__builtin_parity(r & 0xffu); } }
    /* 008ca617: fld qword ptr [eax*8 + 0x99ffc8] */ FPUSH(R_F64((u32)(r_eax*8+0x99ffc8u)));
    /* 008ca61e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008ca61f: ret  */ FN_RET(0x008c9b78); r_esp += 4; return;
L_008ca620:; BB(0x008ca620);
    /* 008ca620: cmp edx, 0x40000000 */ {  u32 a = r_edx; u32 b = 0x40000000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008ca626: jae 0x8ca62e */ if (!fC) goto L_008ca62e;
L_008ca628:; BB(0x008ca628);
    /* 008ca628: fld qword ptr [esp + 8] */ FPUSH(R_F64((u32)(r_esp+0x8u)));
    /* 008ca62c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008ca62d: ret  */ FN_RET(0x008c9b78); r_esp += 4; return;
L_008ca62e:; BB(0x008ca62e);
    /* 008ca62e: fld qword ptr [esp + 8] */ FPUSH(R_F64((u32)(r_esp+0x8u)));
    /* 008ca632: fmul qword ptr [0x99ffd8] */ ST(0) = ST(0) * R_F64((u32)(0x99ffd8u));
    /* 008ca638: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008ca639: ret  */ FN_RET(0x008c9b78); r_esp += 4; return;
}

void f_008c9ba0(void) /* sub_8C9BA0 */
{
    FN_ENTER(0x008c9ba0);
L_008c9ba0:; BB(0x008c9ba0);
    /* 008c9ba0: test dword ptr [0xae7f00], 0xfffffe00 */ {  u32 a = R32((u32)(0xae7f00u)); u32 b = 0xfffffe00u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c9baa: jne 0x8ca63c */ if (!fZ) goto L_008ca63c;
L_008c9bb0:; BB(0x008c9bb0);
    /* 008c9bb0: test dword ptr [0xae7f00], 0xffffffff */ {  u32 a = R32((u32)(0xae7f00u)); u32 b = 0xffffffffu; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c9bba: jne 0x8ca7d4 */ if (!fZ) goto L_008ca7d4;
L_008c9bc0:; BB(0x008c9bc0);
    /* 008c9bc0: call 0x86b8a0 */ r_esp -= 4; W32(r_esp, 0x8c9bc5u); f_0086b8a0();
    /* 008c9bc5: jmp 0x8c9ba0 */ goto L_008c9ba0;
L_008ca63c:; BB(0x008ca63c);
    /* 008ca63c: movq xmm4, qword ptr [0x9a0030] */ { xmm[4].q[0] = R64((u32)(0x9a0030u)); xmm[4].q[1] = 0; }
    /* 008ca644: movq xmm0, qword ptr [esp + 4] */ { xmm[0].q[0] = R64((u32)(r_esp+0x4u)); xmm[0].q[1] = 0; }
    /* 008ca64a: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 008ca64e: mov eax, 0x10000 */ r_eax = 0x10000u;
    /* 008ca653: mov edx, 0xffff0000 */ r_edx = 0xffff0000u;
    /* 008ca658: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008ca65a: cmovg ecx, eax */ if ((!fZ&&fS==fO)) { r_ecx = r_eax; }
    /* 008ca65d: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008ca65f: cmovl ecx, edx */ if ((fS!=fO)) { r_ecx = r_edx; }
    /* 008ca662: andpd xmm4, xmm0 */ { XMM s = xmm[0]; xmm[4].q[0] = xmm[4].q[0] & s.q[0]; xmm[4].q[1] = xmm[4].q[1] & s.q[1]; }
    /* 008ca666: xorpd xmm0, xmm4 */ { XMM s = xmm[4]; xmm[0].q[0] = xmm[0].q[0] ^ s.q[0]; xmm[0].q[1] = xmm[0].q[1] ^ s.q[1]; }
    /* 008ca66a: ucomisd xmm0, qword ptr [0x9a0038] */ { XMM s; s.q[0] = R64((u32)(0x9a0038u)); s.q[1] = 0; double a = xmm[0].f[0]; double b = s.f[0]; fO = 0; fS = 0; fA = 0; if (a != a || b != b) { fZ = 1; fP = 1; fC = 1; } else if (a > b) { fZ = 0; fP = 0; fC = 0; } else if (a < b) { fZ = 0; fP = 0; fC = 1; } else { fZ = 1; fP = 0; fC = 0; } }
    /* 008ca672: jp 0x8ca6e6 */ if (fP) goto L_008ca6e6;
L_008ca678:; BB(0x008ca678);
    /* 008ca678: je 0x8ca6e6 */ if (fZ) goto L_008ca6e6;
L_008ca67e:; BB(0x008ca67e);
    /* 008ca67e: comisd xmm0, xmmword ptr [0x9a0040] */ { XMM s; s.q[0] = R64((u32)(0x9a0040u)); s.q[1] = 0; double a = xmm[0].f[0]; double b = s.f[0]; fO = 0; fS = 0; fA = 0; if (a != a || b != b) { fZ = 1; fP = 1; fC = 1; } else if (a > b) { fZ = 0; fP = 0; fC = 0; } else if (a < b) { fZ = 0; fP = 0; fC = 1; } else { fZ = 1; fP = 0; fC = 0; } }
    /* 008ca686: jb 0x8ca6eb */ if (fC) goto L_008ca6eb;
L_008ca68c:; BB(0x008ca68c);
    /* 008ca68c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_008ca68e:; BB(0x008ca68e);
    /* 008ca68e: movapd xmm2, xmm0 */ { XMM s = xmm[0]; xmm[2] = s; }
    /* 008ca692: movapd xmm3, xmmword ptr [0x99fff0] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0x99fff0u), 16); xmm[3] = s; }
    /* 008ca69a: psrlq xmm2, 0x34 */ { MM64 a; a.q = xmm[2].q[0]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x34u; r.q = c > 63 ? 0 : (a.q >> c); xmm[2].q[0] = r.q; } { MM64 a; a.q = xmm[2].q[1]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x34u; r.q = c > 63 ? 0 : (a.q >> c); xmm[2].q[1] = r.q; }
    /* 008ca69f: movd xmm1, ecx */ { u32 v = r_ecx; xmm[1].d[0] = v; xmm[1].d[1] = 0; xmm[1].d[2] = 0; xmm[1].d[3] = 0; }
    /* 008ca6a3: andpd xmm2, xmm3 */ { XMM s = xmm[3]; xmm[2].q[0] = xmm[2].q[0] & s.q[0]; xmm[2].q[1] = xmm[2].q[1] & s.q[1]; }
    /* 008ca6a7: paddq xmm2, xmm1 */ { XMM s = xmm[1]; xmm[2].q[0] += s.q[0]; xmm[2].q[1] += s.q[1]; }
    /* 008ca6ab: movd eax, xmm2 */ r_eax = xmm[2].d[0];
    /* 008ca6af: movapd xmm3, xmmword ptr [0x9a0000] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0x9a0000u), 16); xmm[3] = s; }
    /* 008ca6b7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 008ca6b9: jle 0x8ca707 */ if ((fZ||fS!=fO)) goto L_008ca707;
L_008ca6bf:; BB(0x008ca6bf);
    /* 008ca6bf: cmp eax, 0x7ff */ {  u32 a = r_eax; u32 b = 0x7ffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008ca6c4: jge 0x8ca747 */ if ((fS==fO)) goto L_008ca747;
L_008ca6ca:; BB(0x008ca6ca);
    /* 008ca6ca: andpd xmm0, xmm3 */ { XMM s = xmm[3]; xmm[0].q[0] = xmm[0].q[0] & s.q[0]; xmm[0].q[1] = xmm[0].q[1] & s.q[1]; }
    /* 008ca6ce: psllq xmm2, 0x34 */ { MM64 a; a.q = xmm[2].q[0]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x34u; r.q = c > 63 ? 0 : (a.q << c); xmm[2].q[0] = r.q; } { MM64 a; a.q = xmm[2].q[1]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x34u; r.q = c > 63 ? 0 : (a.q << c); xmm[2].q[1] = r.q; }
    /* 008ca6d3: xorpd xmm0, xmm4 */ { XMM s = xmm[4]; xmm[0].q[0] = xmm[0].q[0] ^ s.q[0]; xmm[0].q[1] = xmm[0].q[1] ^ s.q[1]; }
    /* 008ca6d7: orpd xmm0, xmm2 */ { XMM s = xmm[2]; xmm[0].q[0] = xmm[0].q[0] | s.q[0]; xmm[0].q[1] = xmm[0].q[1] | s.q[1]; }
    /* 008ca6db: movq qword ptr [esp + 4], xmm0 */ W64((u32)(r_esp+0x4u), xmm[0].q[0]);
    /* 008ca6e1: fld qword ptr [esp + 4] */ FPUSH(R_F64((u32)(r_esp+0x4u)));
    /* 008ca6e5: ret  */ FN_RET(0x008c9ba0); r_esp += 4; return;
L_008ca6e6:; BB(0x008ca6e6);
    /* 008ca6e6: fld qword ptr [esp + 4] */ FPUSH(R_F64((u32)(r_esp+0x4u)));
    /* 008ca6ea: ret  */ FN_RET(0x008c9ba0); r_esp += 4; return;
L_008ca6eb:; BB(0x008ca6eb);
    /* 008ca6eb: comisd xmm0, xmmword ptr [0x9a0048] */ { XMM s; s.q[0] = R64((u32)(0x9a0048u)); s.q[1] = 0; double a = xmm[0].f[0]; double b = s.f[0]; fO = 0; fS = 0; fA = 0; if (a != a || b != b) { fZ = 1; fP = 1; fC = 1; } else if (a > b) { fZ = 0; fP = 0; fC = 0; } else if (a < b) { fZ = 0; fP = 0; fC = 1; } else { fZ = 1; fP = 0; fC = 0; } }
    /* 008ca6f3: je 0x8ca6e6 */ if (fZ) goto L_008ca6e6;
L_008ca6f5:; BB(0x008ca6f5);
    /* 008ca6f5: mulsd xmm0, qword ptr [0x9a0050] */ { XMM s; s.q[0] = R64((u32)(0x9a0050u)); s.q[1] = 0; xmm[0].f[0] = xmm[0].f[0] * s.f[0]; }
    /* 008ca6fd: sub ecx, 0x37 */ {  u32 a = r_ecx; u32 b = 0x37u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008ca700: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 008ca705: jmp 0x8ca68e */ goto L_008ca68e;
L_008ca707:; BB(0x008ca707);
    /* 008ca707: cmp eax, -0x34 */ {  u32 a = r_eax; u32 b = 0xffffffccu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008ca70a: jl 0x8ca766 */ if ((fS!=fO)) goto L_008ca766;
L_008ca710:; BB(0x008ca710);
    /* 008ca710: andpd xmm0, xmm3 */ { XMM s = xmm[3]; xmm[0].q[0] = xmm[0].q[0] & s.q[0]; xmm[0].q[1] = xmm[0].q[1] & s.q[1]; }
    /* 008ca714: shufpd xmm3, xmm3, 1 */ { XMM s = xmm[3]; double lo = xmm[3].f[1]; double hi = s.f[0]; xmm[3].f[0] = lo; xmm[3].f[1] = hi; }
    /* 008ca719: paddq xmm2, xmm3 */ { XMM s = xmm[3]; xmm[2].q[0] += s.q[0]; xmm[2].q[1] += s.q[1]; }
    /* 008ca71d: xorpd xmm0, xmm4 */ { XMM s = xmm[4]; xmm[0].q[0] = xmm[0].q[0] ^ s.q[0]; xmm[0].q[1] = xmm[0].q[1] ^ s.q[1]; }
    /* 008ca721: psllq xmm2, 0x34 */ { MM64 a; a.q = xmm[2].q[0]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x34u; r.q = c > 63 ? 0 : (a.q << c); xmm[2].q[0] = r.q; } { MM64 a; a.q = xmm[2].q[1]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x34u; r.q = c > 63 ? 0 : (a.q << c); xmm[2].q[1] = r.q; }
    /* 008ca726: orpd xmm0, xmm2 */ { XMM s = xmm[2]; xmm[0].q[0] = xmm[0].q[0] | s.q[0]; xmm[0].q[1] = xmm[0].q[1] | s.q[1]; }
    /* 008ca72a: mulsd xmm0, qword ptr [0x9a0058] */ { XMM s; s.q[0] = R64((u32)(0x9a0058u)); s.q[1] = 0; xmm[0].f[0] = xmm[0].f[0] * s.f[0]; }
    /* 008ca732: and edx, dword ptr [esp + 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0xcu)); u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008ca736: js 0x8ca785 */ if (fS) goto L_008ca785;
L_008ca73c:; BB(0x008ca73c);
    /* 008ca73c: movq qword ptr [esp + 4], xmm0 */ W64((u32)(r_esp+0x4u), xmm[0].q[0]);
    /* 008ca742: fld qword ptr [esp + 4] */ FPUSH(R_F64((u32)(r_esp+0x4u)));
    /* 008ca746: ret  */ FN_RET(0x008c9ba0); r_esp += 4; return;
L_008ca747:; BB(0x008ca747);
    /* 008ca747: pextrw eax, xmm4, 3 */ r_eax = (u32)xmm[4].w[3];
    /* 008ca74c: shr eax, 0xc */ { u32 c = (12u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 008ca74f: movq xmm0, qword ptr [0x9a0010] */ { xmm[0].q[0] = R64((u32)(0x9a0010u)); xmm[0].q[1] = 0; }
    /* 008ca757: mov ecx, 0x92 */ r_ecx = 0x92u;
    /* 008ca75c: mulsd xmm0, qword ptr [eax + 0x9a0010] */ { XMM s; s.q[0] = R64((u32)(r_eax+0x9a0010u)); s.q[1] = 0; xmm[0].f[0] = xmm[0].f[0] * s.f[0]; }
    /* 008ca764: jmp 0x8ca7a4 */ goto L_008ca7a4;
L_008ca766:; BB(0x008ca766);
    /* 008ca766: pextrw eax, xmm4, 3 */ r_eax = (u32)xmm[4].w[3];
    /* 008ca76b: shr eax, 0xc */ { u32 c = (12u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 008ca76e: movq xmm0, qword ptr [0x9a0020] */ { xmm[0].q[0] = R64((u32)(0x9a0020u)); xmm[0].q[1] = 0; }
    /* 008ca776: mov ecx, 0x93 */ r_ecx = 0x93u;
    /* 008ca77b: mulsd xmm0, qword ptr [eax + 0x9a0020] */ { XMM s; s.q[0] = R64((u32)(r_eax+0x9a0020u)); s.q[1] = 0; xmm[0].f[0] = xmm[0].f[0] * s.f[0]; }
    /* 008ca783: jmp 0x8ca7a4 */ goto L_008ca7a4;
L_008ca785:; BB(0x008ca785);
    /* 008ca785: pextrw eax, xmm4, 3 */ r_eax = (u32)xmm[4].w[3];
    /* 008ca78a: shr eax, 0xc */ { u32 c = (12u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 008ca78d: movq xmm1, qword ptr [0x9a0020] */ { xmm[1].q[0] = R64((u32)(0x9a0020u)); xmm[1].q[1] = 0; }
    /* 008ca795: mov ecx, 0x93 */ r_ecx = 0x93u;
    /* 008ca79a: mulsd xmm1, qword ptr [eax + 0x9a0020] */ { XMM s; s.q[0] = R64((u32)(r_eax+0x9a0020u)); s.q[1] = 0; xmm[1].f[0] = xmm[1].f[0] * s.f[0]; }
    /* 008ca7a2: jmp 0x8ca7a4 */ goto L_008ca7a4;
L_008ca7a4:; BB(0x008ca7a4);
    /* 008ca7a4: lea eax, [esp + 4] */ r_eax = (u32)(r_esp+0x4u);
    /* 008ca7a8: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 008ca7ac: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008ca7af: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 008ca7b2: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 008ca7b6: lea eax, [esp + 0x10] */ r_eax = (u32)(r_esp+0x10u);
    /* 008ca7ba: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 008ca7be: movq qword ptr [eax], xmm0 */ W64((u32)(r_eax), xmm[0].q[0]);
    /* 008ca7c2: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 008ca7c6: call 0x850eb4 */ r_esp -= 4; W32(r_esp, 0x8ca7cbu); f_00850eb4();
    /* 008ca7cb: fld qword ptr [esp + 0x10] */ FPUSH(R_F64((u32)(r_esp+0x10u)));
    /* 008ca7cf: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008ca7d2: ret  */ FN_RET(0x008c9ba0); r_esp += 4; return;
L_008ca7d4:; BB(0x008ca7d4);
    /* 008ca7d4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008ca7d5: mov ebx, esp */ r_ebx = r_esp;
    /* 008ca7d7: and esp, 0xfffffff8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 008ca7da: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008ca7db: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008ca7de: mov eax, dword ptr [ebx + 0xc] */ r_eax = R32((u32)(r_ebx+0xcu));
    /* 008ca7e1: mov edx, eax */ r_edx = r_eax;
    /* 008ca7e3: and edx, 0x7ff00000 */ {  u32 a = r_edx; u32 b = 0x7ff00000u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 008ca7e9: shr edx, 0x14 */ { u32 c = (20u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 008ca7ec: cmp edx, 0x7ff */ {  u32 a = r_edx; u32 b = 0x7ffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008ca7f2: je 0x8ca964 */ if (fZ) goto L_008ca964;
L_008ca7f8:; BB(0x008ca7f8);
    /* 008ca7f8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008ca7fa: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008ca7fc: jne 0x8ca837 */ if (!fZ) goto L_008ca837;
L_008ca7fe:; BB(0x008ca7fe);
    /* 008ca7fe: test eax, 0xfffff */ {  u32 a = r_eax; u32 b = 0xfffffu; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008ca803: jne 0x8ca817 */ if (!fZ) goto L_008ca817;
L_008ca805:; BB(0x008ca805);
    /* 008ca805: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 008ca808: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008ca80a: jne 0x8ca817 */ if (!fZ) goto L_008ca817;
L_008ca80c:; BB(0x008ca80c);
    /* 008ca80c: fld qword ptr [ebx + 8] */ FPUSH(R_F64((u32)(r_ebx+0x8u)));
    /* 008ca80f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008ca812: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008ca813: mov esp, ebx */ r_esp = r_ebx;
    /* 008ca815: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008ca816: ret  */ FN_RET(0x008c9ba0); r_esp += 4; return;
L_008ca817:; BB(0x008ca817);
    /* 008ca817: fld qword ptr [ebx + 8] */ FPUSH(R_F64((u32)(r_ebx+0x8u)));
    /* 008ca81a: fmul qword ptr [0x9a0090] */ ST(0) = ST(0) * R_F64((u32)(0x9a0090u));
    /* 008ca820: fstp qword ptr [ebx + 8] */ W_F64((u32)(r_ebx+0x8u), ST(0)); FPOP();
    /* 008ca823: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 008ca826: and edx, 0x7ff00000 */ {  u32 a = r_edx; u32 b = 0x7ff00000u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 008ca82c: shr edx, 0x14 */ { u32 c = (20u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 008ca82f: add edx, -0x37 */ {  u32 a = r_edx; u32 b = 0xffffffc9u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008ca832: mov ecx, 1 */ r_ecx = 0x1u;
L_008ca837:; BB(0x008ca837);
    /* 008ca837: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 008ca83a: mov ebp, 0x10000 */ r_ebp = 0x10000u;
    /* 008ca83f: cmp eax, 0x10000 */ {  u32 a = r_eax; u32 b = 0x10000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008ca844: jle 0x8ca848 */ if ((fZ||fS!=fO)) goto L_008ca848;
L_008ca846:; BB(0x008ca846);
    /* 008ca846: mov eax, ebp */ r_eax = r_ebp;
L_008ca848:; BB(0x008ca848);
    /* 008ca848: mov ebp, 0xffff0000 */ r_ebp = 0xffff0000u;
    /* 008ca84d: cmp eax, 0xffff0000 */ {  u32 a = r_eax; u32 b = 0xffff0000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008ca852: jge 0x8ca856 */ if ((fS==fO)) goto L_008ca856;
L_008ca854:; BB(0x008ca854);
    /* 008ca854: mov eax, ebp */ r_eax = r_ebp;
L_008ca856:; BB(0x008ca856);
    /* 008ca856: mov dword ptr [ebx + 0x10], eax */ W32((u32)(r_ebx+0x10u), r_eax);
    /* 008ca859: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008ca85b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 008ca85d: jle 0x8ca8c7 */ if ((fZ||fS!=fO)) goto L_008ca8c7;
L_008ca85f:; BB(0x008ca85f);
    /* 008ca85f: cmp edx, 0x7ff */ {  u32 a = r_edx; u32 b = 0x7ffu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008ca865: jge 0x8ca889 */ if ((fS==fO)) goto L_008ca889;
L_008ca867:; BB(0x008ca867);
    /* 008ca867: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 008ca86a: and ecx, 0x800fffff */ {  u32 a = r_ecx; u32 b = 0x800fffffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008ca870: and edx, 0x7ff */ {  u32 a = r_edx; u32 b = 0x7ffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 008ca876: shl edx, 0x14 */ { u32 c = (20u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 008ca879: or ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 008ca87b: mov dword ptr [ebx + 0xc], ecx */ W32((u32)(r_ebx+0xcu), r_ecx);
    /* 008ca87e: fld qword ptr [ebx + 8] */ FPUSH(R_F64((u32)(r_ebx+0x8u)));
    /* 008ca881: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008ca884: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008ca885: mov esp, ebx */ r_esp = r_ebx;
    /* 008ca887: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008ca888: ret  */ FN_RET(0x008c9ba0); r_esp += 4; return;
L_008ca889:; BB(0x008ca889);
    /* 008ca889: movzx eax, byte ptr [ebx + 0xf] */ r_eax = (u32)R8((u32)(r_ebx+0xfu));
    /* 008ca88d: lea ebp, [ebx + 8] */ r_ebp = (u32)(r_ebx+0x8u);
    /* 008ca890: lea ecx, [ebx + 0x10] */ r_ecx = (u32)(r_ebx+0x10u);
    /* 008ca893: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 008ca896: and eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008ca89b: shr eax, 7 */ { u32 c = (7u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 008ca89e: fld qword ptr [eax*8 + 0x9a0070] */ FPUSH(R_F64((u32)(r_eax*8+0x9a0070u)));
    /* 008ca8a5: fmul qword ptr [0x9a0070] */ ST(0) = ST(0) * R_F64((u32)(0x9a0070u));
    /* 008ca8ab: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 008ca8ae: push 0x92 */ { u32 v = 0x92u; r_esp -= 4; W32(r_esp, v); }
    /* 008ca8b3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008ca8b4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008ca8b5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008ca8b6: call 0x850eb4 */ r_esp -= 4; W32(r_esp, 0x8ca8bbu); f_00850eb4();
    /* 008ca8bb: fld qword ptr [esp + 0x10] */ FPUSH(R_F64((u32)(r_esp+0x10u)));
    /* 008ca8bf: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008ca8c2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008ca8c3: mov esp, ebx */ r_esp = r_ebx;
    /* 008ca8c5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008ca8c6: ret  */ FN_RET(0x008c9ba0); r_esp += 4; return;
L_008ca8c7:; BB(0x008ca8c7);
    /* 008ca8c7: cmp edx, -0x34 */ {  u32 a = r_edx; u32 b = 0xffffffccu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008ca8ca: jl 0x8ca926 */ if ((fS!=fO)) goto L_008ca926;
L_008ca8cc:; BB(0x008ca8cc);
    /* 008ca8cc: mov eax, dword ptr [ebx + 0xc] */ r_eax = R32((u32)(r_ebx+0xcu));
    /* 008ca8cf: and eax, 0x800fffff */ {  u32 a = r_eax; u32 b = 0x800fffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008ca8d4: add edx, 0x37 */ {  u32 a = r_edx; u32 b = 0x37u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008ca8d7: and edx, 0x7ff */ {  u32 a = r_edx; u32 b = 0x7ffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 008ca8dd: shl edx, 0x14 */ { u32 c = (20u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 008ca8e0: or eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 008ca8e2: mov dword ptr [ebx + 0xc], eax */ W32((u32)(r_ebx+0xcu), r_eax);
    /* 008ca8e5: fld qword ptr [ebx + 8] */ FPUSH(R_F64((u32)(r_ebx+0x8u)));
    /* 008ca8e8: fmul qword ptr [0x9a0098] */ ST(0) = ST(0) * R_F64((u32)(0x9a0098u));
    /* 008ca8ee: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008ca8f0: je 0x8ca8f9 */ if (fZ) goto L_008ca8f9;
L_008ca8f2:; BB(0x008ca8f2);
    /* 008ca8f2: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 008ca8f5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 008ca8f7: jl 0x8ca901 */ if ((fS!=fO)) goto L_008ca901;
L_008ca8f9:; BB(0x008ca8f9);
    /* 008ca8f9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008ca8fc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008ca8fd: mov esp, ebx */ r_esp = r_ebx;
    /* 008ca8ff: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008ca900: ret  */ FN_RET(0x008c9ba0); r_esp += 4; return;
L_008ca901:; BB(0x008ca901);
    /* 008ca901: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 008ca904: lea ecx, [ebx + 8] */ r_ecx = (u32)(r_ebx+0x8u);
    /* 008ca907: lea edx, [ebx + 0x10] */ r_edx = (u32)(r_ebx+0x10u);
    /* 008ca90a: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 008ca90d: push 0x93 */ { u32 v = 0x93u; r_esp -= 4; W32(r_esp, v); }
    /* 008ca912: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008ca913: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008ca914: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008ca915: call 0x850eb4 */ r_esp -= 4; W32(r_esp, 0x8ca91au); f_00850eb4();
    /* 008ca91a: fld qword ptr [esp + 0x10] */ FPUSH(R_F64((u32)(r_esp+0x10u)));
    /* 008ca91e: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008ca921: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008ca922: mov esp, ebx */ r_esp = r_ebx;
    /* 008ca924: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008ca925: ret  */ FN_RET(0x008c9ba0); r_esp += 4; return;
L_008ca926:; BB(0x008ca926);
    /* 008ca926: movzx eax, byte ptr [ebx + 0xf] */ r_eax = (u32)R8((u32)(r_ebx+0xfu));
    /* 008ca92a: lea ebp, [ebx + 8] */ r_ebp = (u32)(r_ebx+0x8u);
    /* 008ca92d: lea ecx, [ebx + 0x10] */ r_ecx = (u32)(r_ebx+0x10u);
    /* 008ca930: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 008ca933: and eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008ca938: shr eax, 7 */ { u32 c = (7u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 008ca93b: fld qword ptr [eax*8 + 0x9a0080] */ FPUSH(R_F64((u32)(r_eax*8+0x9a0080u)));
    /* 008ca942: fmul qword ptr [0x9a0080] */ ST(0) = ST(0) * R_F64((u32)(0x9a0080u));
    /* 008ca948: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 008ca94b: push 0x93 */ { u32 v = 0x93u; r_esp -= 4; W32(r_esp, v); }
    /* 008ca950: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008ca951: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008ca952: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008ca953: call 0x850eb4 */ r_esp -= 4; W32(r_esp, 0x8ca958u); f_00850eb4();
    /* 008ca958: fld qword ptr [esp + 0x10] */ FPUSH(R_F64((u32)(r_esp+0x10u)));
    /* 008ca95c: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008ca95f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008ca960: mov esp, ebx */ r_esp = r_ebx;
    /* 008ca962: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008ca963: ret  */ FN_RET(0x008c9ba0); r_esp += 4; return;
L_008ca964:; BB(0x008ca964);
    /* 008ca964: fld qword ptr [ebx + 8] */ FPUSH(R_F64((u32)(r_ebx+0x8u)));
    /* 008ca967: fmul qword ptr [0x9a00a0] */ ST(0) = ST(0) * R_F64((u32)(0x9a00a0u));
    /* 008ca96d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008ca970: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008ca971: mov esp, ebx */ r_esp = r_ebx;
    /* 008ca973: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008ca974: ret  */ FN_RET(0x008c9ba0); r_esp += 4; return;
}

void f_008c9bc8(void) /* sub_8C9BC8 */
{
    FN_ENTER(0x008c9bc8);
L_008c9bc8:; BB(0x008c9bc8);
    /* 008c9bc8: test dword ptr [0xae7f00], 0xfffffe00 */ {  u32 a = R32((u32)(0xae7f00u)); u32 b = 0xfffffe00u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c9bd2: jne 0x8ca978 */ if (!fZ) goto L_008ca978;
L_008c9bd8:; BB(0x008c9bd8);
    /* 008c9bd8: test dword ptr [0xae7f00], 0xffffffff */ {  u32 a = R32((u32)(0xae7f00u)); u32 b = 0xffffffffu; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c9be2: jne 0x8caa10 */ if (!fZ) goto L_008caa10;
L_008c9be8:; BB(0x008c9be8);
    /* 008c9be8: call 0x86b8a0 */ r_esp -= 4; W32(r_esp, 0x8c9bedu); f_0086b8a0();
    /* 008c9bed: jmp 0x8c9bc8 */ goto L_008c9bc8;
L_008ca978:; BB(0x008ca978);
    /* 008ca978: movq xmm0, qword ptr [esp + 4] */ { xmm[0].q[0] = R64((u32)(r_esp+0x4u)); xmm[0].q[1] = 0; }
    /* 008ca97e: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 008ca982: pextrw eax, xmm0, 3 */ r_eax = (u32)xmm[0].w[3];
    /* 008ca987: movq xmm1, qword ptr [0x9a00b0] */ { xmm[1].q[0] = R64((u32)(0x9a00b0u)); xmm[1].q[1] = 0; }
    /* 008ca98f: and eax, 0x7fff */ {  u32 a = r_eax; u32 b = 0x7fffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008ca994: movq xmm2, qword ptr [0x9a00b8] */ { xmm[2].q[0] = R64((u32)(0x9a00b8u)); xmm[2].q[1] = 0; }
    /* 008ca99c: sub eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fS = ((r >> 31) & 1); }
    /* 008ca99f: js 0x8ca9c5 */ if (fS) goto L_008ca9c5;
L_008ca9a1:; BB(0x008ca9a1);
    /* 008ca9a1: cmp eax, 0x7fe0 */ {  u32 a = r_eax; u32 b = 0x7fe0u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008ca9a6: jae 0x8caa04 */ if (!fC) goto L_008caa04;
L_008ca9a8:; BB(0x008ca9a8);
    /* 008ca9a8: shr eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 008ca9ab: pand xmm0, xmm1 */ { MM64 a; a.q = xmm[0].q[0]; MM64 b; b.q = xmm[1].q[0]; MM64 r; r.q = a.q & b.q; xmm[0].q[0] = r.q; } { MM64 a; a.q = xmm[0].q[1]; MM64 b; b.q = xmm[1].q[1]; MM64 r; r.q = a.q & b.q; xmm[0].q[1] = r.q; }
    /* 008ca9af: sub eax, 0x3fd */ {  u32 a = r_eax; u32 b = 0x3fdu; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008ca9b4: por xmm0, xmm2 */ { MM64 a; a.q = xmm[0].q[0]; MM64 b; b.q = xmm[2].q[0]; MM64 r; r.q = a.q | b.q; xmm[0].q[0] = r.q; } { MM64 a; a.q = xmm[0].q[1]; MM64 b; b.q = xmm[2].q[1]; MM64 r; r.q = a.q | b.q; xmm[0].q[1] = r.q; }
    /* 008ca9b8: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 008ca9ba: movq qword ptr [esp + 4], xmm0 */ W64((u32)(r_esp+0x4u), xmm[0].q[0]);
    /* 008ca9c0: fld qword ptr [esp + 4] */ FPUSH(R_F64((u32)(r_esp+0x4u)));
    /* 008ca9c4: ret  */ FN_RET(0x008c9bc8); r_esp += 4; return;
L_008ca9c5:; BB(0x008ca9c5);
    /* 008ca9c5: pxor xmm3, xmm3 */ { MM64 a; a.q = xmm[3].q[0]; MM64 b; b.q = xmm[3].q[0]; MM64 r; r.q = a.q ^ b.q; xmm[3].q[0] = r.q; } { MM64 a; a.q = xmm[3].q[1]; MM64 b; b.q = xmm[3].q[1]; MM64 r; r.q = a.q ^ b.q; xmm[3].q[1] = r.q; }
    /* 008ca9c9: movq xmm4, qword ptr [0x9a00c0] */ { xmm[4].q[0] = R64((u32)(0x9a00c0u)); xmm[4].q[1] = 0; }
    /* 008ca9d1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008ca9d3: comisd xmm0, xmm3 */ { XMM s = xmm[3]; double a = xmm[0].f[0]; double b = s.f[0]; fO = 0; fS = 0; fA = 0; if (a != a || b != b) { fZ = 1; fP = 1; fC = 1; } else if (a > b) { fZ = 0; fP = 0; fC = 0; } else if (a < b) { fZ = 0; fP = 0; fC = 1; } else { fZ = 1; fP = 0; fC = 0; } }
    /* 008ca9d7: je 0x8ca9fd */ if (fZ) goto L_008ca9fd;
L_008ca9d9:; BB(0x008ca9d9);
    /* 008ca9d9: mulsd xmm0, xmm4 */ { XMM s = xmm[4]; xmm[0].f[0] = xmm[0].f[0] * s.f[0]; }
    /* 008ca9dd: pextrw eax, xmm0, 3 */ r_eax = (u32)xmm[0].w[3];
    /* 008ca9e2: and eax, 0x7fff */ {  u32 a = r_eax; u32 b = 0x7fffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008ca9e7: pand xmm0, xmm1 */ { MM64 a; a.q = xmm[0].q[0]; MM64 b; b.q = xmm[1].q[0]; MM64 r; r.q = a.q & b.q; xmm[0].q[0] = r.q; } { MM64 a; a.q = xmm[0].q[1]; MM64 b; b.q = xmm[1].q[1]; MM64 r; r.q = a.q & b.q; xmm[0].q[1] = r.q; }
    /* 008ca9eb: shr eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 008ca9ee: por xmm0, xmm2 */ { MM64 a; a.q = xmm[0].q[0]; MM64 b; b.q = xmm[2].q[0]; MM64 r; r.q = a.q | b.q; xmm[0].q[0] = r.q; } { MM64 a; a.q = xmm[0].q[1]; MM64 b; b.q = xmm[2].q[1]; MM64 r; r.q = a.q | b.q; xmm[0].q[1] = r.q; }
    /* 008ca9f2: sub eax, 0x435 */ {  u32 a = r_eax; u32 b = 0x435u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008ca9f7: movq qword ptr [esp + 4], xmm0 */ W64((u32)(r_esp+0x4u), xmm[0].q[0]);
L_008ca9fd:; BB(0x008ca9fd);
    /* 008ca9fd: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 008ca9ff: fld qword ptr [esp + 4] */ FPUSH(R_F64((u32)(r_esp+0x4u)));
    /* 008caa03: ret  */ FN_RET(0x008c9bc8); r_esp += 4; return;
L_008caa04:; BB(0x008caa04);
    /* 008caa04: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008caa06: fld1  */ FPUSH(1.0);
    /* 008caa08: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 008caa0a: fmul qword ptr [esp + 4] */ ST(0) = ST(0) * R_F64((u32)(r_esp+0x4u));
    /* 008caa0e: ret  */ FN_RET(0x008c9bc8); r_esp += 4; return;
L_008caa10:; BB(0x008caa10);
    /* 008caa10: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008caa11: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 008caa15: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 008caa19: mov eax, ecx */ r_eax = r_ecx;
    /* 008caa1b: and eax, 0x7fffffff */ {  u32 a = r_eax; u32 b = 0x7fffffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008caa20: lea esi, [eax - 0x100000] */ r_esi = (u32)(r_eax+0xfff00000u);
    /* 008caa26: cmp esi, 0x7fe00000 */ {  u32 a = r_esi; u32 b = 0x7fe00000u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008caa2c: jb 0x8caa3e */ if (fC) goto L_008caa3e;
L_008caa2e:; BB(0x008caa2e);
    /* 008caa2e: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008caa30: jl 0x8caa5f */ if ((fS!=fO)) goto L_008caa5f;
L_008caa32:; BB(0x008caa32);
    /* 008caa32: mov dword ptr [edx], 0 */ W32((u32)(r_edx), 0x0u);
    /* 008caa38: fld qword ptr [esp + 8] */ FPUSH(R_F64((u32)(r_esp+0x8u)));
    /* 008caa3c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008caa3d: ret  */ FN_RET(0x008c9bc8); r_esp += 4; return;
L_008caa3e:; BB(0x008caa3e);
    /* 008caa3e: and ecx, 0x800fffff */ {  u32 a = r_ecx; u32 b = 0x800fffffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008caa44: or ecx, 0x3fe00000 */ {  u32 a = r_ecx; u32 b = 0x3fe00000u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 008caa4a: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 008caa4e: shr esi, 0x14 */ { u32 c = (20u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 008caa51: add esi, 0xfffffc03 */ {  u32 a = r_esi; u32 b = 0xfffffc03u; u32 r = (a + b) & 0xffffffffu; r_esi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008caa57: mov dword ptr [edx], esi */ W32((u32)(r_edx), r_esi);
    /* 008caa59: fld qword ptr [esp + 8] */ FPUSH(R_F64((u32)(r_esp+0x8u)));
    /* 008caa5d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008caa5e: ret  */ FN_RET(0x008c9bc8); r_esp += 4; return;
L_008caa5f:; BB(0x008caa5f);
    /* 008caa5f: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 008caa63: or eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008caa65: je 0x8caa32 */ if (fZ) goto L_008caa32;
L_008caa67:; BB(0x008caa67);
    /* 008caa67: fld qword ptr [esp + 8] */ FPUSH(R_F64((u32)(r_esp+0x8u)));
    /* 008caa6b: fmul qword ptr [0x9a00c8] */ ST(0) = ST(0) * R_F64((u32)(0x9a00c8u));
    /* 008caa71: fstp qword ptr [esp + 8] */ W_F64((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 008caa75: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 008caa79: mov eax, ecx */ r_eax = r_ecx;
    /* 008caa7b: and eax, 0x7fffffff */ {  u32 a = r_eax; u32 b = 0x7fffffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008caa80: and ecx, 0x800fffff */ {  u32 a = r_ecx; u32 b = 0x800fffffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008caa86: shr eax, 0x14 */ { u32 c = (20u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 008caa89: or ecx, 0x3fe00000 */ {  u32 a = r_ecx; u32 b = 0x3fe00000u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 008caa8f: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 008caa93: add eax, 0xfffffbcb */ {  u32 a = r_eax; u32 b = 0xfffffbcbu; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008caa98: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 008caa9a: fld qword ptr [esp + 8] */ FPUSH(R_F64((u32)(r_esp+0x8u)));
    /* 008caa9e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008caa9f: ret  */ FN_RET(0x008c9bc8); r_esp += 4; return;
}

void f_008c9bf0(void) /* sub_8C9BF0 */
{
    FN_ENTER(0x008c9bf0);
    /* 008c9bf0: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008c9bf3: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 008c9bf6: call 0x84d15c */ r_esp -= 4; W32(r_esp, 0x8c9bfbu); f_0084d15c();
    /* 008c9bfb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c9bfe: ret  */ FN_RET(0x008c9bf0); r_esp += 4; return;
}

void f_008c9c00(void) /* sub_8C9C00 */
{
    FN_ENTER(0x008c9c00);
    /* 008c9c00: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008c9c03: fstp qword ptr [esp + 8] */ W_F64((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 008c9c07: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 008c9c0a: call 0x84d1d4 */ r_esp -= 4; W32(r_esp, 0x8c9c0fu); f_0084d1d4();
    /* 008c9c0f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c9c12: ret  */ FN_RET(0x008c9c00); r_esp += 4; return;
}

