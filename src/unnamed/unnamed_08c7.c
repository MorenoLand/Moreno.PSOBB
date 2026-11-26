#include "protos.h"

void f_008c7270(void) /* sub_8C7270 */
{
    FN_ENTER(0x008c7270);
    /* 008c7270: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008c7273: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 008c7277: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 008c727b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c727c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c727d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c727f: push 0xf003f */ { u32 v = 0xf003fu; r_esp -= 4; W32(r_esp, v); }
    /* 008c7284: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c7286: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c7288: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c728a: push 0xa393b8 */ { u32 v = 0xa393b8u; r_esp -= 4; W32(r_esp, v); }
    /* 008c728f: mov dword ptr [esp + 0x28], 0 */ W32((u32)(r_esp+0x28u), 0x0u);
    /* 008c7297: mov dword ptr [esp + 0x2c], 4 */ W32((u32)(r_esp+0x2cu), 0x4u);
    /* 008c729f: mov dword ptr [esp + 0x20], 0 */ W32((u32)(r_esp+0x20u), 0x0u);
    /* 008c72a7: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c72acu); f_008c94e0();
    /* 008c72ac: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c72af: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c72b0: push 0x80000001 */ { u32 v = 0x80000001u; r_esp -= 4; W32(r_esp, v); }
    /* 008c72b5: call dword ptr [0x8f8044] */ { u32 t = R32((u32)(0x8f8044u)); r_esp -= 4; W32(r_esp, 0x8c72bbu); call_ind(t); }
    /* 008c72bb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c72bd: jne 0x8c733d */ if (!fZ) goto L_008c733d;
L_008c72bf:; BB(0x008c72bf);
    /* 008c72bf: cmp dword ptr [esp + 8], 2 */ {  u32 a = R32((u32)(r_esp+0x8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c72c4: jne 0x8c7332 */ if (!fZ) goto L_008c7332;
L_008c72c6:; BB(0x008c72c6);
    /* 008c72c6: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 008c72ca: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 008c72ce: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c72cf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c72d0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c72d2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c72d4: push 0xa393ac */ { u32 v = 0xa393acu; r_esp -= 4; W32(r_esp, v); }
    /* 008c72d9: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c72deu); f_008c94e0();
    /* 008c72de: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 008c72e2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c72e5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c72e6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c72e7: call dword ptr [0x8f8008] */ { u32 t = R32((u32)(0x8f8008u)); r_esp -= 4; W32(r_esp, 0x8c72edu); call_ind(t); }
    /* 008c72ed: cmp dword ptr [esp], 1 */ {  u32 a = R32((u32)(r_esp)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008c72f2: jb 0x8c7332 */ if (fC) goto L_008c7332;
L_008c72f4:; BB(0x008c72f4);
    /* 008c72f4: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 008c72f8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c72f9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008c72fb: call 0x8c7350 */ r_esp -= 4; W32(r_esp, 0x8c7300u); f_008c7350();
    /* 008c7300: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 008c7304: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c7307: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 008c730b: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 008c7313: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c7314: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c7315: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 008c7317: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c7319: push 0xa393a0 */ { u32 v = 0xa393a0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c731e: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c7323u); f_008c94e0();
    /* 008c7323: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 008c7327: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c732a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c732b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c732c: call dword ptr [0x8f8010] */ { u32 t = R32((u32)(0x8f8010u)); r_esp -= 4; W32(r_esp, 0x8c7332u); call_ind(t); }
L_008c7332:; BB(0x008c7332);
    /* 008c7332: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 008c7336: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c7337: call dword ptr [0x8f8000] */ { u32 t = R32((u32)(0x8f8000u)); r_esp -= 4; W32(r_esp, 0x8c733du); call_ind(t); }
L_008c733d:; BB(0x008c733d);
    /* 008c733d: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 008c7341: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c7344: ret  */ FN_RET(0x008c7270); r_esp += 4; return;
}

void f_008c7350(void) /* sub_8C7350 */
{
    FN_ENTER(0x008c7350);
    /* 008c7350: mov eax, dword ptr [0xaea6e4] */ r_eax = R32((u32)(0xaea6e4u));
    /* 008c7355: sub esp, 0x26c */ {  u32 a = r_esp; u32 b = 0x26cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008c735b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c735d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c735e: jne 0x8c7579 */ if (!fZ) goto L_008c7579;
L_008c7364:; BB(0x008c7364);
    /* 008c7364: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008c7366: mov ecx, 0x40 */ r_ecx = 0x40u;
    /* 008c736b: mov dword ptr [esp + 5], eax */ W32((u32)(r_esp+0x5u), r_eax);
    /* 008c736f: lea edi, [esp + 0x69] */ r_edi = (u32)(r_esp+0x69u);
    /* 008c7373: mov dword ptr [esp + 9], eax */ W32((u32)(r_esp+0x9u), r_eax);
    /* 008c7377: mov byte ptr [esp + 4], 0 */ W8((u32)(r_esp+0x4u), 0x0u);
    /* 008c737c: mov dword ptr [esp + 0xd], eax */ W32((u32)(r_esp+0xdu), r_eax);
    /* 008c7380: mov word ptr [esp + 0x11], ax */ W16((u32)(r_esp+0x11u), (u16)r_eax);
    /* 008c7385: mov byte ptr [esp + 0x13], al */ W8((u32)(r_esp+0x13u), (u8)r_eax);
    /* 008c7389: mov byte ptr [esp + 0x68], al */ W8((u32)(r_esp+0x68u), (u8)r_eax);
    /* 008c738d: rep stosd dword ptr es:[edi], eax */ while (r_ecx) { W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 008c738f: stosw word ptr es:[edi], ax */ W16(r_edi, (u16)r_eax); r_edi += rt_df ? -2 : 2;
    /* 008c7391: stosb byte ptr es:[edi], al */ W8(r_edi, (u8)r_eax); r_edi += rt_df ? -1 : 1;
    /* 008c7392: mov edi, 0xaea920 */ r_edi = 0xaea920u;
    /* 008c7397: or ecx, 0xffffffff */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 008c739a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c739c: repne scasb al, byte ptr es:[edi] */ while (r_ecx) { { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (fZ) break; }
    /* 008c739e: not ecx */ r_ecx = ~r_ecx;
    /* 008c73a0: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008c73a1: cmp ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008c73a4: jb 0x8c73c8 */ if (fC) goto L_008c73c8;
L_008c73a6:; BB(0x008c73a6);
    /* 008c73a6: push 0xaea920 */ { u32 v = 0xaea920u; r_esp -= 4; W32(r_esp, v); }
    /* 008c73ab: push 0xa39450 */ { u32 v = 0xa39450u; r_esp -= 4; W32(r_esp, v); }
    /* 008c73b0: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c73b5u); f_008c94e0();
    /* 008c73b5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c73b8: lea ecx, [esp + 0x6c] */ r_ecx = (u32)(r_esp+0x6cu);
    /* 008c73bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c73bd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c73be: call 0x858bf5 */ r_esp -= 4; W32(r_esp, 0x8c73c3u); f_00858bf5();
    /* 008c73c3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c73c6: jmp 0x8c7414 */ goto L_008c7414;
L_008c73c8:; BB(0x008c73c8);
    /* 008c73c8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008c73c9: lea edx, [esp + 0x6c] */ r_edx = (u32)(r_esp+0x6cu);
    /* 008c73cd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c73ce: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c73cf: push 0x104 */ { u32 v = 0x104u; r_esp -= 4; W32(r_esp, v); }
    /* 008c73d4: call dword ptr [0x8f81d0] */ { u32 t = R32((u32)(0x8f81d0u)); r_esp -= 4; W32(r_esp, 0x8c73dau); call_ind(t); }
    /* 008c73da: push 0xa39434 */ { u32 v = 0xa39434u; r_esp -= 4; W32(r_esp, v); }
    /* 008c73df: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c73e4u); f_008c94e0();
    /* 008c73e4: mov edi, eax */ r_edi = r_eax;
    /* 008c73e6: or ecx, 0xffffffff */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 008c73e9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008c73eb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c73ee: repne scasb al, byte ptr es:[edi] */ while (r_ecx) { { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (fZ) break; }
    /* 008c73f0: not ecx */ r_ecx = ~r_ecx;
    /* 008c73f2: sub edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008c73f4: lea edx, [esp + 0x70] */ r_edx = (u32)(r_esp+0x70u);
    /* 008c73f8: mov esi, edi */ r_esi = r_edi;
    /* 008c73fa: mov ebp, ecx */ r_ebp = r_ecx;
    /* 008c73fc: mov edi, edx */ r_edi = r_edx;
    /* 008c73fe: or ecx, 0xffffffff */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c7401: repne scasb al, byte ptr es:[edi] */ while (r_ecx) { { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (fZ) break; }
    /* 008c7403: mov ecx, ebp */ r_ecx = r_ebp;
    /* 008c7405: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008c7406: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 008c7409: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 008c740b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 008c740d: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008c7410: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 008c7412: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c7413: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
L_008c7414:; BB(0x008c7414);
    /* 008c7414: lea eax, [esp + 0x68] */ r_eax = (u32)(r_esp+0x68u);
    /* 008c7418: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c741a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c741b: call 0x8cb285 */ r_esp -= 4; W32(r_esp, 0x8c7420u); f_008cb285();
    /* 008c7420: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c7423: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c7426: je 0x8c7561 */ if (fZ) goto L_008c7561;
L_008c742c:; BB(0x008c742c);
    /* 008c742c: mov ecx, dword ptr [esp + 0x274] */ r_ecx = R32((u32)(r_esp+0x274u));
    /* 008c7433: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 008c7437: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c7438: push 0xa39430 */ { u32 v = 0xa39430u; r_esp -= 4; W32(r_esp, v); }
    /* 008c743d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c743e: call 0x858bf5 */ r_esp -= 4; W32(r_esp, 0x8c7443u); f_00858bf5();
    /* 008c7443: mov ecx, 0x40 */ r_ecx = 0x40u;
    /* 008c7448: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008c744a: lea edi, [esp + 0x179] */ r_edi = (u32)(r_esp+0x179u);
    /* 008c7451: mov byte ptr [esp + 0x178], 0 */ W8((u32)(r_esp+0x178u), 0x0u);
    /* 008c7459: rep stosd dword ptr es:[edi], eax */ while (r_ecx) { W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 008c745b: stosw word ptr es:[edi], ax */ W16(r_edi, (u16)r_eax); r_edi += rt_df ? -2 : 2;
    /* 008c745d: mov ecx, dword ptr [esp + 0x284] */ r_ecx = R32((u32)(r_esp+0x284u));
    /* 008c7464: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c7467: stosb byte ptr es:[edi], al */ W8(r_edi, (u8)r_eax); r_edi += rt_df ? -1 : 1;
    /* 008c7468: mov eax, dword ptr [0xaea91c] */ r_eax = R32((u32)(0xaea91cu));
    /* 008c746d: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 008c7471: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008c7474: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c7475: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c7476: lea eax, [esp + 0x70] */ r_eax = (u32)(r_esp+0x70u);
    /* 008c747a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c747b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c747c: push 0xa39420 */ { u32 v = 0xa39420u; r_esp -= 4; W32(r_esp, v); }
    /* 008c7481: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c7486u); f_008c94e0();
    /* 008c7486: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c7489: lea ecx, [esp + 0x17c] */ r_ecx = (u32)(r_esp+0x17cu);
    /* 008c7490: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c7491: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c7492: call 0x858bf5 */ r_esp -= 4; W32(r_esp, 0x8c7497u); f_00858bf5();
    /* 008c7497: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008c7499: mov ecx, 0x11 */ r_ecx = 0x11u;
    /* 008c749e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008c74a0: lea edi, [esp + 0x3c] */ r_edi = (u32)(r_esp+0x3cu);
    /* 008c74a4: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 008c74a8: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c74ab: rep stosd dword ptr es:[edi], eax */ while (r_ecx) { W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 008c74ad: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 008c74b1: lea eax, [esp + 0x14] */ r_eax = (u32)(r_esp+0x14u);
    /* 008c74b5: lea ecx, [esp + 0x24] */ r_ecx = (u32)(r_esp+0x24u);
    /* 008c74b9: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 008c74bd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c74be: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c74bf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c74c0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c74c1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c74c2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c74c3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c74c4: mov dword ptr [esp + 0x3c], edx */ W32((u32)(r_esp+0x3cu), r_edx);
    /* 008c74c8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c74c9: lea edx, [esp + 0x18c] */ r_edx = (u32)(r_esp+0x18cu);
    /* 008c74d0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c74d1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c74d3: mov dword ptr [esp + 0x4c], 0x44 */ W32((u32)(r_esp+0x4cu), 0x44u);
    /* 008c74db: call dword ptr [0x8f8310] */ { u32 t = R32((u32)(0x8f8310u)); r_esp -= 4; W32(r_esp, 0x8c74e1u); call_ind(t); }
    /* 008c74e1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c74e3: mov eax, dword ptr [0xaeaa28] */ r_eax = R32((u32)(0xaeaa28u));
    /* 008c74e8: jne 0x8c7520 */ if (!fZ) goto L_008c7520;
L_008c74ea:; BB(0x008c74ea);
    /* 008c74ea: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c74ec: je 0x8c7579 */ if (fZ) goto L_008c7579;
L_008c74f2:; BB(0x008c74f2);
    /* 008c74f2: call dword ptr [0x8f817c] */ { u32 t = R32((u32)(0x8f817cu)); r_esp -= 4; W32(r_esp, 0x8c74f8u); call_ind(t); }
    /* 008c74f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c74f9: push 0xa39400 */ { u32 v = 0xa39400u; r_esp -= 4; W32(r_esp, v); }
    /* 008c74fe: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c7503u); f_008c94e0();
    /* 008c7503: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c7506: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c7507: mov eax, dword ptr [0xaeaa28] */ r_eax = R32((u32)(0xaeaa28u));
    /* 008c750c: add eax, 0x24 */ {  u32 a = r_eax; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008c750f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c7510: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c7515u); f_008c3720();
    /* 008c7515: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c7518: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c7519: add esp, 0x26c */ {  u32 a = r_esp; u32 b = 0x26cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c751f: ret  */ FN_RET(0x008c7350); r_esp += 4; return;
L_008c7520:; BB(0x008c7520);
    /* 008c7520: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c7522: je 0x8c754c */ if (fZ) goto L_008c754c;
L_008c7524:; BB(0x008c7524);
    /* 008c7524: lea ecx, [esp + 0x16c] */ r_ecx = (u32)(r_esp+0x16cu);
    /* 008c752b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c752c: push 0xa393ec */ { u32 v = 0xa393ecu; r_esp -= 4; W32(r_esp, v); }
    /* 008c7531: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c7536u); f_008c94e0();
    /* 008c7536: mov edx, dword ptr [0xaeaa28] */ r_edx = R32((u32)(0xaeaa28u));
    /* 008c753c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c753f: add edx, 0x24 */ {  u32 a = r_edx; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008c7542: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c7543: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c7544: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c7549u); f_008c3720();
    /* 008c7549: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_008c754c:; BB(0x008c754c);
    /* 008c754c: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 008c7550: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 008c7552: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c7553: call dword ptr [0x8f8128] */ { u32 t = R32((u32)(0x8f8128u)); r_esp -= 4; W32(r_esp, 0x8c7559u); call_ind(t); }
    /* 008c7559: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c755a: add esp, 0x26c */ {  u32 a = r_esp; u32 b = 0x26cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c7560: ret  */ FN_RET(0x008c7350); r_esp += 4; return;
L_008c7561:; BB(0x008c7561);
    /* 008c7561: mov ecx, dword ptr [esp + 0x278] */ r_ecx = R32((u32)(r_esp+0x278u));
    /* 008c7568: mov edx, dword ptr [esp + 0x274] */ r_edx = R32((u32)(r_esp+0x274u));
    /* 008c756f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c7570: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c7571: call 0x8c7590 */ r_esp -= 4; W32(r_esp, 0x8c7576u); f_008c7590();
    /* 008c7576: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_008c7579:; BB(0x008c7579);
    /* 008c7579: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c757a: add esp, 0x26c */ {  u32 a = r_esp; u32 b = 0x26cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c7580: ret  */ FN_RET(0x008c7350); r_esp += 4; return;
}

void f_008c7590(void) /* sub_8C7590 */
{
    FN_ENTER(0x008c7590);
    /* 008c7590: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008c7593: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008c7595: lea ecx, [esp + 8] */ r_ecx = (u32)(r_esp+0x8u);
    /* 008c7599: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 008c759d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c759e: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 008c75a2: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 008c75a6: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 008c75aa: call dword ptr [0x8f8188] */ { u32 t = R32((u32)(0x8f8188u)); r_esp -= 4; W32(r_esp, 0x8c75b0u); call_ind(t); }
    /* 008c75b0: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 008c75b4: mov eax, dword ptr [esp + 0x12] */ r_eax = R32((u32)(r_esp+0x12u));
    /* 008c75b8: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 008c75bc: and edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 008c75c2: and eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008c75c7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c75c8: mov edx, dword ptr [esp + 0x12] */ r_edx = R32((u32)(r_esp+0x12u));
    /* 008c75cc: and ecx, 0xffff */ {  u32 a = r_ecx; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008c75d2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c75d3: mov eax, dword ptr [esp + 0x12] */ r_eax = R32((u32)(r_esp+0x12u));
    /* 008c75d7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c75d8: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 008c75dc: and edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 008c75e2: and eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008c75e7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c75e8: and ecx, 0xffff */ {  u32 a = r_ecx; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008c75ee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c75ef: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c75f0: lea edx, [esp + 0x30] */ r_edx = (u32)(r_esp+0x30u);
    /* 008c75f4: push 0xa394c4 */ { u32 v = 0xa394c4u; r_esp -= 4; W32(r_esp, v); }
    /* 008c75f9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c75fa: call 0x858bf5 */ r_esp -= 4; W32(r_esp, 0x8c75ffu); f_00858bf5();
    /* 008c75ff: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c7602: lea eax, [esp + 4] */ r_eax = (u32)(r_esp+0x4u);
    /* 008c7606: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 008c760a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c760b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c760c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c760e: push 0xf003f */ { u32 v = 0xf003fu; r_esp -= 4; W32(r_esp, v); }
    /* 008c7613: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c7615: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c7617: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c7619: push 0xa39488 */ { u32 v = 0xa39488u; r_esp -= 4; W32(r_esp, v); }
    /* 008c761e: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c7623u); f_008c94e0();
    /* 008c7623: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c7626: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c7627: push 0x80000001 */ { u32 v = 0x80000001u; r_esp -= 4; W32(r_esp, v); }
    /* 008c762c: call dword ptr [0x8f8044] */ { u32 t = R32((u32)(0x8f8044u)); r_esp -= 4; W32(r_esp, 0x8c7632u); call_ind(t); }
    /* 008c7632: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c7634: jne 0x8c7699 */ if (!fZ) goto L_008c7699;
L_008c7636:; BB(0x008c7636);
    /* 008c7636: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c7637: mov esi, dword ptr [0x8f8010] */ r_esi = R32((u32)(0x8f8010u));
    /* 008c763d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c763e: lea edx, [esp + 0x38] */ r_edx = (u32)(r_esp+0x38u);
    /* 008c7642: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 008c7644: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c7645: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 008c7647: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c7648: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 008c764c: push 0xa3947c */ { u32 v = 0xa3947cu; r_esp -= 4; W32(r_esp, v); }
    /* 008c7651: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c7652: call esi */ { u32 t = r_esi; r_esp -= 4; W32(r_esp, 0x8c7654u); call_ind(t); }
    /* 008c7654: mov edx, dword ptr [esp + 0x3c] */ r_edx = R32((u32)(r_esp+0x3cu));
    /* 008c7658: or ecx, 0xffffffff */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 008c765b: mov edi, edx */ r_edi = r_edx;
    /* 008c765d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c765f: repne scasb al, byte ptr es:[edi] */ while (r_ecx) { { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (fZ) break; }
    /* 008c7661: not ecx */ r_ecx = ~r_ecx;
    /* 008c7663: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008c7664: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c7665: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 008c7669: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c766a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008c766c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c766d: push 0xa39470 */ { u32 v = 0xa39470u; r_esp -= 4; W32(r_esp, v); }
    /* 008c7672: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c7673: call esi */ { u32 t = r_esi; r_esp -= 4; W32(r_esp, 0x8c7675u); call_ind(t); }
    /* 008c7675: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 008c7679: lea edx, [esp + 0x20] */ r_edx = (u32)(r_esp+0x20u);
    /* 008c767d: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 008c767f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c7680: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008c7682: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c7684: push 0xa39464 */ { u32 v = 0xa39464u; r_esp -= 4; W32(r_esp, v); }
    /* 008c7689: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c768a: call esi */ { u32 t = r_esi; r_esp -= 4; W32(r_esp, 0x8c768cu); call_ind(t); }
    /* 008c768c: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 008c7690: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c7691: call dword ptr [0x8f8000] */ { u32 t = R32((u32)(0x8f8000u)); r_esp -= 4; W32(r_esp, 0x8c7697u); call_ind(t); }
    /* 008c7697: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c7698: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
L_008c7699:; BB(0x008c7699);
    /* 008c7699: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c769c: ret  */ FN_RET(0x008c7590); r_esp += 4; return;
}

void f_008c76c0(void) /* sub_8C76C0 */
{
    FN_ENTER(0x008c76c0);
    /* 008c76c0: sub esp, 0x240 */ {  u32 a = r_esp; u32 b = 0x240u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008c76c6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c76c7: mov ebx, ecx */ r_ebx = r_ecx;
    /* 008c76c9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c76ca: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c76cb: cmp dword ptr [ebx], 0 */ {  u32 a = R32((u32)(r_ebx)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c76ce: je 0x8c76d5 */ if (fZ) goto L_008c76d5;
L_008c76d0:; BB(0x008c76d0);
    /* 008c76d0: call 0x8c7880 */ r_esp -= 4; W32(r_esp, 0x8c76d5u); f_008c7880();
L_008c76d5:; BB(0x008c76d5);
    /* 008c76d5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008c76d6: lea eax, [esp + 0x14c] */ r_eax = (u32)(r_esp+0x14cu);
    /* 008c76dd: push 0x104 */ { u32 v = 0x104u; r_esp -= 4; W32(r_esp, v); }
    /* 008c76e2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c76e3: call dword ptr [0x8f8114] */ { u32 t = R32((u32)(0x8f8114u)); r_esp -= 4; W32(r_esp, 0x8c76e9u); call_ind(t); }
    /* 008c76e9: mov edi, 0xa384f8 */ r_edi = 0xa384f8u;
    /* 008c76ee: or ecx, 0xffffffff */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 008c76f1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c76f3: lea edx, [esp + 0x14c] */ r_edx = (u32)(r_esp+0x14cu);
    /* 008c76fa: repne scasb al, byte ptr es:[edi] */ while (r_ecx) { { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (fZ) break; }
    /* 008c76fc: not ecx */ r_ecx = ~r_ecx;
    /* 008c76fe: sub edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008c7700: mov esi, edi */ r_esi = r_edi;
    /* 008c7702: mov ebp, ecx */ r_ebp = r_ecx;
    /* 008c7704: mov edi, edx */ r_edi = r_edx;
    /* 008c7706: or ecx, 0xffffffff */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c7709: repne scasb al, byte ptr es:[edi] */ while (r_ecx) { { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (fZ) break; }
    /* 008c770b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 008c770d: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008c770e: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 008c7711: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 008c7713: mov ecx, ebp */ r_ecx = r_ebp;
    /* 008c7715: lea edx, [esp + 0x14c] */ r_edx = (u32)(r_esp+0x14cu);
    /* 008c771c: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008c771f: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 008c7721: mov edi, dword ptr [esp + 0x254] */ r_edi = R32((u32)(r_esp+0x254u));
    /* 008c7728: or ecx, 0xffffffff */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c772b: repne scasb al, byte ptr es:[edi] */ while (r_ecx) { { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (fZ) break; }
    /* 008c772d: not ecx */ r_ecx = ~r_ecx;
    /* 008c772f: sub edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008c7731: mov esi, edi */ r_esi = r_edi;
    /* 008c7733: mov ebp, ecx */ r_ebp = r_ecx;
    /* 008c7735: mov edi, edx */ r_edi = r_edx;
    /* 008c7737: or ecx, 0xffffffff */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c773a: repne scasb al, byte ptr es:[edi] */ while (r_ecx) { { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (fZ) break; }
    /* 008c773c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 008c773e: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008c773f: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 008c7742: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 008c7744: mov ecx, ebp */ r_ecx = r_ebp;
    /* 008c7746: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008c7749: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 008c774b: lea esi, [ebx + 4] */ r_esi = (u32)(r_ebx+0x4u);
    /* 008c774e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c774f: push 0x104 */ { u32 v = 0x104u; r_esp -= 4; W32(r_esp, v); }
    /* 008c7754: call dword ptr [0x8f80f8] */ { u32 t = R32((u32)(0x8f80f8u)); r_esp -= 4; W32(r_esp, 0x8c775au); call_ind(t); }
    /* 008c775a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c775b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c775d: push 0xa394e8 */ { u32 v = 0xa394e8u; r_esp -= 4; W32(r_esp, v); }
    /* 008c7762: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c7763: call dword ptr [0x8f80fc] */ { u32 t = R32((u32)(0x8f80fcu)); r_esp -= 4; W32(r_esp, 0x8c7769u); call_ind(t); }
    /* 008c7769: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c776b: lea eax, [esp + 0x150] */ r_eax = (u32)(r_esp+0x150u);
    /* 008c7772: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c7773: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c7774: call dword ptr [0x8f8168] */ { u32 t = R32((u32)(0x8f8168u)); r_esp -= 4; W32(r_esp, 0x8c777au); call_ind(t); }
    /* 008c777a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c777c: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 008c7781: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 008c7783: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c7785: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 008c7787: push 0xc0000000 */ { u32 v = 0xc0000000u; r_esp -= 4; W32(r_esp, v); }
    /* 008c778c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c778d: call dword ptr [0x8f8144] */ { u32 t = R32((u32)(0x8f8144u)); r_esp -= 4; W32(r_esp, 0x8c7793u); call_ind(t); }
    /* 008c7793: mov edi, eax */ r_edi = r_eax;
    /* 008c7795: cmp edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c7798: je 0x8c7833 */ if (fZ) goto L_008c7833;
L_008c779e:; BB(0x008c779e);
    /* 008c779e: lea ecx, [esp + 0x10] */ r_ecx = (u32)(r_esp+0x10u);
    /* 008c77a2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c77a4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c77a5: lea edx, [esp + 0x1c] */ r_edx = (u32)(r_esp+0x1cu);
    /* 008c77a9: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 008c77ab: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c77ac: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c77ad: call dword ptr [0x8f813c] */ { u32 t = R32((u32)(0x8f813cu)); r_esp -= 4; W32(r_esp, 0x8c77b3u); call_ind(t); }
    /* 008c77b3: cmp word ptr [esp + 0x14], 0x5a4d */ {  u32 a = R16((u32)(r_esp+0x14u)); u32 b = 0x5a4du; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 008c77ba: jne 0x8c782c */ if (!fZ) goto L_008c782c;
L_008c77bc:; BB(0x008c77bc);
    /* 008c77bc: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 008c77c0: mov ebp, dword ptr [0x8f81a0] */ r_ebp = R32((u32)(0x8f81a0u));
    /* 008c77c6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c77c8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c77ca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c77cb: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c77cc: call ebp */ { u32 t = r_ebp; r_esp -= 4; W32(r_esp, 0x8c77ceu); call_ind(t); }
    /* 008c77ce: lea ecx, [esp + 0x10] */ r_ecx = (u32)(r_esp+0x10u);
    /* 008c77d2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c77d4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c77d5: lea edx, [esp + 0x5c] */ r_edx = (u32)(r_esp+0x5cu);
    /* 008c77d9: push 0xf8 */ { u32 v = 0xf8u; r_esp -= 4; W32(r_esp, v); }
    /* 008c77de: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c77df: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c77e0: call dword ptr [0x8f813c] */ { u32 t = R32((u32)(0x8f813cu)); r_esp -= 4; W32(r_esp, 0x8c77e6u); call_ind(t); }
    /* 008c77e6: cmp dword ptr [esp + 0x54], 0x4550 */ {  u32 a = R32((u32)(r_esp+0x54u)); u32 b = 0x4550u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c77ee: jne 0x8c782c */ if (!fZ) goto L_008c782c;
L_008c77f0:; BB(0x008c77f0);
    /* 008c77f0: cmp dword ptr [esp + 0x88], 0x80000000 */ {  u32 a = R32((u32)(r_esp+0x88u)); u32 b = 0x80000000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008c77fb: jbe 0x8c782c */ if ((fC||fZ)) goto L_008c782c;
L_008c77fd:; BB(0x008c77fd);
    /* 008c77fd: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 008c7801: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c7803: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c7805: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c7806: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c7807: mov dword ptr [esp + 0x98], 0x10000000 */ W32((u32)(r_esp+0x98u), 0x10000000u);
    /* 008c7812: call ebp */ { u32 t = r_ebp; r_esp -= 4; W32(r_esp, 0x8c7814u); call_ind(t); }
    /* 008c7814: lea ecx, [esp + 0x10] */ r_ecx = (u32)(r_esp+0x10u);
    /* 008c7818: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c781a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c781b: lea edx, [esp + 0x5c] */ r_edx = (u32)(r_esp+0x5cu);
    /* 008c781f: push 0xf8 */ { u32 v = 0xf8u; r_esp -= 4; W32(r_esp, v); }
    /* 008c7824: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c7825: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c7826: call dword ptr [0x8f81c0] */ { u32 t = R32((u32)(0x8f81c0u)); r_esp -= 4; W32(r_esp, 0x8c782cu); call_ind(t); }
L_008c782c:; BB(0x008c782c);
    /* 008c782c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c782d: call dword ptr [0x8f8140] */ { u32 t = R32((u32)(0x8f8140u)); r_esp -= 4; W32(r_esp, 0x8c7833u); call_ind(t); }
L_008c7833:; BB(0x008c7833);
    /* 008c7833: mov edi, dword ptr [0x8f8100] */ r_edi = R32((u32)(0x8f8100u));
    /* 008c7839: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 008c783b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c783d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c783e: call edi */ { u32 t = r_edi; r_esp -= 4; W32(r_esp, 0x8c7840u); call_ind(t); }
    /* 008c7840: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c7842: mov dword ptr [ebx], eax */ W32((u32)(r_ebx), r_eax);
    /* 008c7844: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008c7845: je 0x8c7858 */ if (fZ) goto L_008c7858;
L_008c7847:; BB(0x008c7847);
    /* 008c7847: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c7848: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c7849: mov eax, 1 */ r_eax = 0x1u;
    /* 008c784e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008c784f: add esp, 0x240 */ {  u32 a = r_esp; u32 b = 0x240u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c7855: ret 4 */ FN_RET(0x008c76c0); r_esp += 8; return;
L_008c7858:; BB(0x008c7858);
    /* 008c7858: mov eax, dword ptr [esp + 0x250] */ r_eax = R32((u32)(r_esp+0x250u));
    /* 008c785f: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 008c7861: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c7863: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c7864: mov byte ptr [esi], 0 */ W8((u32)(r_esi), 0x0u);
    /* 008c7867: call edi */ { u32 t = r_edi; r_esp -= 4; W32(r_esp, 0x8c7869u); call_ind(t); }
    /* 008c7869: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008c786b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c786c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c786e: setne cl */ r_ecx = (r_ecx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 008c7871: mov dword ptr [ebx], eax */ W32((u32)(r_ebx), r_eax);
    /* 008c7873: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c7874: mov eax, ecx */ r_eax = r_ecx;
    /* 008c7876: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008c7877: add esp, 0x240 */ {  u32 a = r_esp; u32 b = 0x240u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c787d: ret 4 */ FN_RET(0x008c76c0); r_esp += 8; return;
}

void f_008c7880(void) /* sub_8C7880 */
{
    FN_ENTER(0x008c7880);
    /* 008c7880: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c7881: mov esi, ecx */ r_esi = r_ecx;
    /* 008c7883: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008c7885: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c7887: je 0x8c78c1 */ if (fZ) goto L_008c78c1;
L_008c7889:; BB(0x008c7889);
    /* 008c7889: mov cl, byte ptr [esi + 4] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_esi+0x4u))) & 0xffu);
    /* 008c788c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c788d: lea edi, [esi + 4] */ r_edi = (u32)(r_esi+0x4u);
    /* 008c7890: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c7891: test cl, cl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_ecx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008c7893: je 0x8c78ab */ if (fZ) goto L_008c78ab;
L_008c7895:; BB(0x008c7895);
    /* 008c7895: call dword ptr [0x8f8134] */ { u32 t = R32((u32)(0x8f8134u)); r_esp -= 4; W32(r_esp, 0x8c789bu); call_ind(t); }
    /* 008c789b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c789c: call dword ptr [0x8f81fc] */ { u32 t = R32((u32)(0x8f81fcu)); r_esp -= 4; W32(r_esp, 0x8c78a2u); call_ind(t); }
    /* 008c78a2: mov dword ptr [esi], 0 */ W32((u32)(r_esi), 0x0u);
    /* 008c78a8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c78a9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c78aa: ret  */ FN_RET(0x008c7880); r_esp += 4; return;
L_008c78ab:; BB(0x008c78ab);
    /* 008c78ab: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c78ad: call dword ptr [0x8f82fc] */ { u32 t = R32((u32)(0x8f82fcu)); r_esp -= 4; W32(r_esp, 0x8c78b3u); call_ind(t); }
    /* 008c78b3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c78b4: call dword ptr [0x8f81dc] */ { u32 t = R32((u32)(0x8f81dcu)); r_esp -= 4; W32(r_esp, 0x8c78bau); call_ind(t); }
    /* 008c78ba: mov dword ptr [esi], 0 */ W32((u32)(r_esi), 0x0u);
    /* 008c78c0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
L_008c78c1:; BB(0x008c78c1);
    /* 008c78c1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c78c2: ret  */ FN_RET(0x008c7880); r_esp += 4; return;
}

void f_008c78d0(void) /* sub_8C78D0 */
{
    FN_ENTER(0x008c78d0);
    /* 008c78d0: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 008c78d2: ret  */ FN_RET(0x008c78d0); r_esp += 4; return;
}

void f_008c78e0(void) /* sub_8C78E0 */
{
    FN_ENTER(0x008c78e0);
    /* 008c78e0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c78e1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c78e2: push 0xf0000000 */ { u32 v = 0xf0000000u; r_esp -= 4; W32(r_esp, v); }
    /* 008c78e7: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 008c78e9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008c78eb: mov esi, ecx */ r_esi = r_ecx;
    /* 008c78ed: push 0xa38458 */ { u32 v = 0xa38458u; r_esp -= 4; W32(r_esp, v); }
    /* 008c78f2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c78f3: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c78f4: mov dword ptr [esi + 0x14], ebx */ W32((u32)(r_esi+0x14u), r_ebx);
    /* 008c78f7: mov dword ptr [esi + 0xc], ebx */ W32((u32)(r_esi+0xcu), r_ebx);
    /* 008c78fa: mov dword ptr [esi], ebx */ W32((u32)(r_esi), r_ebx);
    /* 008c78fc: mov dword ptr [esi + 4], ebx */ W32((u32)(r_esi+0x4u), r_ebx);
    /* 008c78ff: mov dword ptr [esi + 8], ebx */ W32((u32)(r_esi+0x8u), r_ebx);
    /* 008c7902: mov dword ptr [esi + 0x24], ebx */ W32((u32)(r_esi+0x24u), r_ebx);
    /* 008c7905: mov dword ptr [esi + 0x38], ebx */ W32((u32)(r_esi+0x38u), r_ebx);
    /* 008c7908: mov dword ptr [esi + 0x40], ebx */ W32((u32)(r_esi+0x40u), r_ebx);
    /* 008c790b: mov dword ptr [esi + 0x3c], ebx */ W32((u32)(r_esi+0x3cu), r_ebx);
    /* 008c790e: mov dword ptr [esi + 0x18], ebx */ W32((u32)(r_esi+0x18u), r_ebx);
    /* 008c7911: mov byte ptr [esi + 0x1c], bl */ W8((u32)(r_esi+0x1cu), (u8)r_ebx);
    /* 008c7914: mov dword ptr [esi + 0x20], ebx */ W32((u32)(r_esi+0x20u), r_ebx);
    /* 008c7917: mov dword ptr [esi + 0x44], ebx */ W32((u32)(r_esi+0x44u), r_ebx);
    /* 008c791a: mov dword ptr [esi + 0x10], ebx */ W32((u32)(r_esi+0x10u), r_ebx);
    /* 008c791d: call dword ptr [0x8f803c] */ { u32 t = R32((u32)(0x8f803cu)); r_esp -= 4; W32(r_esp, 0x8c7923u); call_ind(t); }
    /* 008c7923: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c7925: jne 0x8c7929 */ if (!fZ) goto L_008c7929;
L_008c7927:; BB(0x008c7927);
    /* 008c7927: mov dword ptr [esi], ebx */ W32((u32)(r_esi), r_ebx);
L_008c7929:; BB(0x008c7929);
    /* 008c7929: mov eax, esi */ r_eax = r_esi;
    /* 008c792b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c792c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008c792d: ret  */ FN_RET(0x008c78e0); r_esp += 4; return;
}

void f_008c7930(void) /* sub_8C7930 */
{
    FN_ENTER(0x008c7930);
    /* 008c7930: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c7931: mov esi, ecx */ r_esi = r_ecx;
    /* 008c7933: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 008c7936: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c7938: je 0x8c7943 */ if (fZ) goto L_008c7943;
L_008c793a:; BB(0x008c793a);
    /* 008c793a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c793b: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x8c7940u); f_00858882();
    /* 008c7940: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_008c7943:; BB(0x008c7943);
    /* 008c7943: mov eax, dword ptr [esi + 0x14] */ r_eax = R32((u32)(r_esi+0x14u));
    /* 008c7946: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c7948: je 0x8c7953 */ if (fZ) goto L_008c7953;
L_008c794a:; BB(0x008c794a);
    /* 008c794a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c794b: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x8c7950u); f_00858882();
    /* 008c7950: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_008c7953:; BB(0x008c7953);
    /* 008c7953: mov eax, dword ptr [esi + 0xc] */ r_eax = R32((u32)(r_esi+0xcu));
    /* 008c7956: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c7957: mov ebx, dword ptr [0x8f8004] */ r_ebx = R32((u32)(0x8f8004u));
    /* 008c795d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c795f: je 0x8c7964 */ if (fZ) goto L_008c7964;
L_008c7961:; BB(0x008c7961);
    /* 008c7961: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c7962: call ebx */ { u32 t = r_ebx; r_esp -= 4; W32(r_esp, 0x8c7964u); call_ind(t); }
L_008c7964:; BB(0x008c7964);
    /* 008c7964: mov eax, dword ptr [esi + 0x10] */ r_eax = R32((u32)(r_esi+0x10u));
    /* 008c7967: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c7968: mov edi, dword ptr [0x8f802c] */ r_edi = R32((u32)(0x8f802cu));
    /* 008c796e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c7970: je 0x8c7975 */ if (fZ) goto L_008c7975;
L_008c7972:; BB(0x008c7972);
    /* 008c7972: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c7973: call edi */ { u32 t = r_edi; r_esp -= 4; W32(r_esp, 0x8c7975u); call_ind(t); }
L_008c7975:; BB(0x008c7975);
    /* 008c7975: mov eax, dword ptr [esi + 0x3c] */ r_eax = R32((u32)(r_esi+0x3cu));
    /* 008c7978: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c797a: je 0x8c797f */ if (fZ) goto L_008c797f;
L_008c797c:; BB(0x008c797c);
    /* 008c797c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c797d: call edi */ { u32 t = r_edi; r_esp -= 4; W32(r_esp, 0x8c797fu); call_ind(t); }
L_008c797f:; BB(0x008c797f);
    /* 008c797f: mov eax, dword ptr [esi + 0x40] */ r_eax = R32((u32)(r_esi+0x40u));
    /* 008c7982: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c7983: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c7985: je 0x8c798a */ if (fZ) goto L_008c798a;
L_008c7987:; BB(0x008c7987);
    /* 008c7987: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c7988: call ebx */ { u32 t = r_ebx; r_esp -= 4; W32(r_esp, 0x8c798au); call_ind(t); }
L_008c798a:; BB(0x008c798a);
    /* 008c798a: mov esi, dword ptr [esi] */ r_esi = R32((u32)(r_esi));
    /* 008c798c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008c798d: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c798f: je 0x8c799a */ if (fZ) goto L_008c799a;
L_008c7991:; BB(0x008c7991);
    /* 008c7991: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c7993: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c7994: call dword ptr [0x8f8028] */ { u32 t = R32((u32)(0x8f8028u)); r_esp -= 4; W32(r_esp, 0x8c799au); call_ind(t); }
L_008c799a:; BB(0x008c799a);
    /* 008c799a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c799b: ret  */ FN_RET(0x008c7930); r_esp += 4; return;
}

void f_008c79a0(void) /* sub_8C79A0 */
{
    FN_ENTER(0x008c79a0);
    /* 008c79a0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c79a1: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 008c79a5: mov eax, ebx */ r_eax = r_ebx;
    /* 008c79a7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c79a8: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 008c79ac: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c79ad: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 008c79af: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c79b0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c79b1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c79b3: call 0x8c7a40 */ r_esp -= 4; W32(r_esp, 0x8c79b8u); f_008c7a40();
    /* 008c79b8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c79bb: and eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008c79c0: cmp word ptr [esi], 0x5a4d */ {  u32 a = R16((u32)(r_esi)); u32 b = 0x5a4du; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 008c79c5: jne 0x8c79d6 */ if (!fZ) goto L_008c79d6;
L_008c79c7:; BB(0x008c79c7);
    /* 008c79c7: mov ecx, dword ptr [esi + 0x3c] */ r_ecx = R32((u32)(r_esi+0x3cu));
    /* 008c79ca: add ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008c79cc: mov edi, ecx */ r_edi = r_ecx;
    /* 008c79ce: cmp dword ptr [ecx], 0x4550 */ {  u32 a = R32((u32)(r_ecx)); u32 b = 0x4550u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c79d4: je 0x8c79da */ if (fZ) goto L_008c79da;
L_008c79d6:; BB(0x008c79d6);
    /* 008c79d6: mov edi, dword ptr [esp + 0x14] */ r_edi = R32((u32)(r_esp+0x14u));
L_008c79da:; BB(0x008c79da);
    /* 008c79da: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c79dc: jne 0x8c79e4 */ if (!fZ) goto L_008c79e4;
L_008c79de:; BB(0x008c79de);
    /* 008c79de: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c79df: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c79e0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c79e2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008c79e3: ret  */ FN_RET(0x008c79a0); r_esp += 4; return;
L_008c79e4:; BB(0x008c79e4);
    /* 008c79e4: mov ecx, dword ptr [edi + 0x58] */ r_ecx = R32((u32)(r_edi+0x58u));
    /* 008c79e7: cmp ax, cx */ {  u32 a = (u16)r_eax; u32 b = (u16)r_ecx; u32 r = (a - b) & 0xffffu;  fC = (a < b); }
    /* 008c79ea: jb 0x8c79f8 */ if (fC) goto L_008c79f8;
L_008c79ec:; BB(0x008c79ec);
    /* 008c79ec: mov edx, ecx */ r_edx = r_ecx;
    /* 008c79ee: and edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 008c79f4: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008c79f6: jmp 0x8c7a00 */ goto L_008c7a00;
L_008c79f8:; BB(0x008c79f8);
    /* 008c79f8: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008c79fa: and eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008c79ff: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
L_008c7a00:; BB(0x008c7a00);
    /* 008c7a00: shr ecx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 008c7a03: cmp ax, cx */ {  u32 a = (u16)r_eax; u32 b = (u16)r_ecx; u32 r = (a - b) & 0xffffu;  fC = (a < b); }
    /* 008c7a06: jb 0x8c7a12 */ if (fC) goto L_008c7a12;
L_008c7a08:; BB(0x008c7a08);
    /* 008c7a08: and ecx, 0xffff */ {  u32 a = r_ecx; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008c7a0e: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008c7a10: jmp 0x8c7a1a */ goto L_008c7a1a;
L_008c7a12:; BB(0x008c7a12);
    /* 008c7a12: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008c7a14: and eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008c7a19: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
L_008c7a1a:; BB(0x008c7a1a);
    /* 008c7a1a: test bl, 1 */ {  u32 a = (u8)r_ebx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008c7a1d: je 0x8c7a27 */ if (fZ) goto L_008c7a27;
L_008c7a1f:; BB(0x008c7a1f);
    /* 008c7a1f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008c7a21: mov cl, byte ptr [esi + ebx - 1] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_esi+r_ebx+0xffffffffu))) & 0xffu);
    /* 008c7a25: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_008c7a27:; BB(0x008c7a27);
    /* 008c7a27: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 008c7a2b: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 008c7a2f: add eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c7a31: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 008c7a33: mov eax, dword ptr [edi + 0x58] */ r_eax = R32((u32)(r_edi+0x58u));
    /* 008c7a36: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 008c7a38: mov eax, edi */ r_eax = r_edi;
    /* 008c7a3a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c7a3b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c7a3c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008c7a3d: ret  */ FN_RET(0x008c79a0); r_esp += 4; return;
}

void f_008c7a40(void) /* sub_8C7A40 */
{
    FN_ENTER(0x008c7a40);
    /* 008c7a40: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 008c7a44: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 008c7a48: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 008c7a4c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 008c7a4e: jbe 0x8c7a7a */ if ((fC||fZ)) goto L_008c7a7a;
L_008c7a50:; BB(0x008c7a50);
    /* 008c7a50: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c7a51: mov esi, eax */ r_esi = r_eax;
L_008c7a53:; BB(0x008c7a53);
    /* 008c7a53: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008c7a55: mov ax, word ptr [edx] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx))) & 0xffffu);
    /* 008c7a58: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008c7a5a: mov eax, ecx */ r_eax = r_ecx;
    /* 008c7a5c: shr eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 008c7a5f: test ax, ax */ {  u32 a = (u16)r_eax; u32 b = (u16)r_eax; u32 r = (a & b) & 0xffffu;  fZ = (r == 0); }
    /* 008c7a62: je 0x8c7a73 */ if (fZ) goto L_008c7a73;
L_008c7a64:; BB(0x008c7a64);
    /* 008c7a64: and eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008c7a69: and ecx, 0xffff */ {  u32 a = r_ecx; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008c7a6f: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008c7a71: mov ecx, eax */ r_ecx = r_eax;
L_008c7a73:; BB(0x008c7a73);
    /* 008c7a73: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008c7a76: dec esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_esi = r; fZ = (r == 0); }
    /* 008c7a77: jne 0x8c7a53 */ if (!fZ) goto L_008c7a53;
L_008c7a79:; BB(0x008c7a79);
    /* 008c7a79: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
L_008c7a7a:; BB(0x008c7a7a);
    /* 008c7a7a: mov eax, ecx */ r_eax = r_ecx;
    /* 008c7a7c: shr eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 008c7a7f: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c7a81: ret  */ FN_RET(0x008c7a40); r_esp += 4; return;
}

void f_008c7a90(void) /* sub_8C7A90 */
{
    FN_ENTER(0x008c7a90);
    /* 008c7a90: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 008c7a94: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008c7a97: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c7a98: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 008c7a9a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008c7a9b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c7a9c: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c7a9e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c7a9f: mov ebp, ecx */ r_ebp = r_ecx;
    /* 008c7aa1: jne 0x8c7ab6 */ if (!fZ) goto L_008c7ab6;
L_008c7aa3:; BB(0x008c7aa3);
    /* 008c7aa3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c7aa4: mov dword ptr [ebp + 0x44], 1 */ W32((u32)(r_ebp+0x44u), 0x1u);
    /* 008c7aab: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c7aac: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008c7aad: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c7aaf: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008c7ab0: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c7ab3: ret 8 */ FN_RET(0x008c7a90); r_esp += 12; return;
L_008c7ab6:; BB(0x008c7ab6);
    /* 008c7ab6: cmp byte ptr [eax], bl */ {  u32 a = R8((u32)(r_eax)); u32 b = (u8)r_ebx; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008c7ab8: jne 0x8c7acd */ if (!fZ) goto L_008c7acd;
L_008c7aba:; BB(0x008c7aba);
    /* 008c7aba: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c7abb: mov dword ptr [ebp + 0x44], 2 */ W32((u32)(r_ebp+0x44u), 0x2u);
    /* 008c7ac2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c7ac3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008c7ac4: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c7ac6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008c7ac7: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c7aca: ret 8 */ FN_RET(0x008c7a90); r_esp += 12; return;
L_008c7acd:; BB(0x008c7acd);
    /* 008c7acd: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c7ace: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 008c7ad3: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 008c7ad5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c7ad6: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 008c7ad8: push 0x80000000 */ { u32 v = 0x80000000u; r_esp -= 4; W32(r_esp, v); }
    /* 008c7add: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c7ade: call dword ptr [0x8f8144] */ { u32 t = R32((u32)(0x8f8144u)); r_esp -= 4; W32(r_esp, 0x8c7ae4u); call_ind(t); }
    /* 008c7ae4: mov esi, eax */ r_esi = r_eax;
    /* 008c7ae6: cmp esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c7ae9: mov dword ptr [esp + 0x18], esi */ W32((u32)(r_esp+0x18u), r_esi);
    /* 008c7aed: jne 0x8c7b02 */ if (!fZ) goto L_008c7b02;
L_008c7aef:; BB(0x008c7aef);
    /* 008c7aef: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c7af0: mov dword ptr [ebp + 0x44], 3 */ W32((u32)(r_ebp+0x44u), 0x3u);
    /* 008c7af7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c7af8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008c7af9: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c7afb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008c7afc: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c7aff: ret 8 */ FN_RET(0x008c7a90); r_esp += 12; return;
L_008c7b02:; BB(0x008c7b02);
    /* 008c7b02: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c7b03: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c7b04: call dword ptr [0x8f8138] */ { u32 t = R32((u32)(0x8f8138u)); r_esp -= 4; W32(r_esp, 0x8c7b0au); call_ind(t); }
    /* 008c7b0a: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c7b0d: mov dword ptr [ebp + 0x24], eax */ W32((u32)(r_ebp+0x24u), r_eax);
    /* 008c7b10: jne 0x8c7b2c */ if (!fZ) goto L_008c7b2c;
L_008c7b12:; BB(0x008c7b12);
    /* 008c7b12: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c7b13: call dword ptr [0x8f8140] */ { u32 t = R32((u32)(0x8f8140u)); r_esp -= 4; W32(r_esp, 0x8c7b19u); call_ind(t); }
    /* 008c7b19: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c7b1a: mov dword ptr [ebp + 0x44], 0x21 */ W32((u32)(r_ebp+0x44u), 0x21u);
    /* 008c7b21: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c7b22: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008c7b23: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c7b25: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008c7b26: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c7b29: ret 8 */ FN_RET(0x008c7a90); r_esp += 12; return;
L_008c7b2c:; BB(0x008c7b2c);
    /* 008c7b2c: mov eax, dword ptr [ebp + 4] */ r_eax = R32((u32)(r_ebp+0x4u));
    /* 008c7b2f: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c7b31: je 0x8c7b3f */ if (fZ) goto L_008c7b3f;
L_008c7b33:; BB(0x008c7b33);
    /* 008c7b33: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c7b34: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x8c7b39u); f_00858882();
    /* 008c7b39: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c7b3c: mov dword ptr [ebp + 4], ebx */ W32((u32)(r_ebp+0x4u), r_ebx);
L_008c7b3f:; BB(0x008c7b3f);
    /* 008c7b3f: mov eax, dword ptr [ebp + 0x24] */ r_eax = R32((u32)(r_ebp+0x24u));
    /* 008c7b42: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c7b43: call 0x859c55 */ r_esp -= 4; W32(r_esp, 0x8c7b48u); f_00859c55();
    /* 008c7b48: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c7b4b: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c7b4d: mov dword ptr [ebp + 4], eax */ W32((u32)(r_ebp+0x4u), r_eax);
    /* 008c7b50: jne 0x8c7b6c */ if (!fZ) goto L_008c7b6c;
L_008c7b52:; BB(0x008c7b52);
    /* 008c7b52: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c7b53: call dword ptr [0x8f8140] */ { u32 t = R32((u32)(0x8f8140u)); r_esp -= 4; W32(r_esp, 0x8c7b59u); call_ind(t); }
    /* 008c7b59: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c7b5a: mov dword ptr [ebp + 0x44], 4 */ W32((u32)(r_ebp+0x44u), 0x4u);
    /* 008c7b61: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c7b62: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008c7b63: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c7b65: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008c7b66: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c7b69: ret 8 */ FN_RET(0x008c7a90); r_esp += 12; return;
L_008c7b6c:; BB(0x008c7b6c);
    /* 008c7b6c: mov edx, dword ptr [ebp + 0x24] */ r_edx = R32((u32)(r_ebp+0x24u));
    /* 008c7b6f: lea ecx, [esp + 0x10] */ r_ecx = (u32)(r_esp+0x10u);
    /* 008c7b73: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c7b74: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c7b75: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c7b76: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c7b77: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c7b78: call dword ptr [0x8f813c] */ { u32 t = R32((u32)(0x8f813cu)); r_esp -= 4; W32(r_esp, 0x8c7b7eu); call_ind(t); }
    /* 008c7b7e: mov ecx, dword ptr [ebp + 0x24] */ r_ecx = R32((u32)(r_ebp+0x24u));
    /* 008c7b81: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 008c7b85: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c7b87: je 0x8c7ba3 */ if (fZ) goto L_008c7ba3;
L_008c7b89:; BB(0x008c7b89);
    /* 008c7b89: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c7b8a: call dword ptr [0x8f8140] */ { u32 t = R32((u32)(0x8f8140u)); r_esp -= 4; W32(r_esp, 0x8c7b90u); call_ind(t); }
    /* 008c7b90: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c7b91: mov dword ptr [ebp + 0x44], 5 */ W32((u32)(r_ebp+0x44u), 0x5u);
    /* 008c7b98: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c7b99: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008c7b9a: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c7b9c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008c7b9d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c7ba0: ret 8 */ FN_RET(0x008c7a90); r_esp += 12; return;
L_008c7ba3:; BB(0x008c7ba3);
    /* 008c7ba3: mov eax, dword ptr [ebp + 4] */ r_eax = R32((u32)(r_ebp+0x4u));
    /* 008c7ba6: mov byte ptr [ebp + 0x1d], bl */ W8((u32)(r_ebp+0x1du), (u8)r_ebx);
    /* 008c7ba9: cmp word ptr [eax], 0x5a4d */ {  u32 a = R16((u32)(r_eax)); u32 b = 0x5a4du; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 008c7bae: jne 0x8c7bf2 */ if (!fZ) goto L_008c7bf2;
L_008c7bb0:; BB(0x008c7bb0);
    /* 008c7bb0: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 008c7bb3: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008c7bb5: cmp dword ptr [edx], 0x4550 */ {  u32 a = R32((u32)(r_edx)); u32 b = 0x4550u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c7bbb: jne 0x8c7bf2 */ if (!fZ) goto L_008c7bf2;
L_008c7bbd:; BB(0x008c7bbd);
    /* 008c7bbd: mov esi, dword ptr [edx + 0x98] */ r_esi = R32((u32)(r_edx+0x98u));
    /* 008c7bc3: mov edx, dword ptr [edx + 0x9c] */ r_edx = R32((u32)(r_edx+0x9cu));
    /* 008c7bc9: cmp esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c7bcb: je 0x8c7bf2 */ if (fZ) goto L_008c7bf2;
L_008c7bcd:; BB(0x008c7bcd);
    /* 008c7bcd: cmp edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c7bcf: je 0x8c7bf2 */ if (fZ) goto L_008c7bf2;
L_008c7bd1:; BB(0x008c7bd1);
    /* 008c7bd1: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008c7bd3: mov byte ptr [ebp + 0x1d], 1 */ W8((u32)(r_ebp+0x1du), 0x1u);
    /* 008c7bd7: mov dword ptr [ebp + 0x24], ecx */ W32((u32)(r_ebp+0x24u), r_ecx);
    /* 008c7bda: mov dl, byte ptr [eax + esi - 1] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax+r_esi+0xffffffffu))) & 0xffu);
    /* 008c7bde: lea ecx, [eax + esi - 1] */ r_ecx = (u32)(r_eax+r_esi+0xffffffffu);
    /* 008c7be2: cmp dl, bl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_ebx; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008c7be4: jne 0x8c7bf2 */ if (!fZ) goto L_008c7bf2;
L_008c7be6:; BB(0x008c7be6);
    /* 008c7be6: mov edi, dword ptr [ebp + 0x24] */ r_edi = R32((u32)(r_ebp+0x24u));
    /* 008c7be9: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008c7bea: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008c7beb: mov dword ptr [ebp + 0x24], edi */ W32((u32)(r_ebp+0x24u), r_edi);
    /* 008c7bee: cmp byte ptr [ecx], bl */ {  u32 a = R8((u32)(r_ecx)); u32 b = (u8)r_ebx; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008c7bf0: je 0x8c7be6 */ if (fZ) goto L_008c7be6;
L_008c7bf2:; BB(0x008c7bf2);
    /* 008c7bf2: mov ecx, dword ptr [ebp + 0x24] */ r_ecx = R32((u32)(r_ebp+0x24u));
    /* 008c7bf5: lea edx, [ebp + 0x28] */ r_edx = (u32)(r_ebp+0x28u);
    /* 008c7bf8: mov edi, edx */ r_edi = r_edx;
    /* 008c7bfa: lea esi, [eax + ecx - 0x10] */ r_esi = (u32)(r_eax+r_ecx+0xfffffff0u);
    /* 008c7bfe: mov ebx, dword ptr [eax + ecx - 0x10] */ r_ebx = R32((u32)(r_eax+r_ecx+0xfffffff0u));
    /* 008c7c02: mov dword ptr [edi], ebx */ W32((u32)(r_edi), r_ebx);
    /* 008c7c04: mov ebx, dword ptr [esi + 4] */ r_ebx = R32((u32)(r_esi+0x4u));
    /* 008c7c07: mov dword ptr [edi + 4], ebx */ W32((u32)(r_edi+0x4u), r_ebx);
    /* 008c7c0a: mov ebx, dword ptr [esi + 8] */ r_ebx = R32((u32)(r_esi+0x8u));
    /* 008c7c0d: mov dword ptr [edi + 8], ebx */ W32((u32)(r_edi+0x8u), r_ebx);
    /* 008c7c10: mov esi, dword ptr [esi + 0xc] */ r_esi = R32((u32)(r_esi+0xcu));
    /* 008c7c13: mov dword ptr [edi + 0xc], esi */ W32((u32)(r_edi+0xcu), r_esi);
    /* 008c7c16: mov esi, dword ptr [edx] */ r_esi = R32((u32)(r_edx));
    /* 008c7c18: cmp esi, 0x32812622 */ {  u32 a = r_esi; u32 b = 0x32812622u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c7c1e: jne 0x8c7c92 */ if (!fZ) goto L_008c7c92;
L_008c7c20:; BB(0x008c7c20);
    /* 008c7c20: cmp dword ptr [ebp + 0x34], 0x32812621 */ {  u32 a = R32((u32)(r_ebp+0x34u)); u32 b = 0x32812621u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c7c27: jne 0x8c7c92 */ if (!fZ) goto L_008c7c92;
L_008c7c29:; BB(0x008c7c29);
    /* 008c7c29: mov edx, dword ptr [ebp + 0x2c] */ r_edx = R32((u32)(r_ebp+0x2cu));
    /* 008c7c2c: mov esi, dword ptr [ebp + 0x30] */ r_esi = R32((u32)(r_ebp+0x30u));
    /* 008c7c2f: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 008c7c31: mov byte ptr [ebp + 0x1c], 1 */ W8((u32)(r_ebp+0x1cu), 0x1u);
    /* 008c7c35: lea esi, [esi + edx + 0x10] */ r_esi = (u32)(r_esi+r_edx+0x10u);
    /* 008c7c39: mov dword ptr [ebp + 0x38], edx */ W32((u32)(r_ebp+0x38u), r_edx);
    /* 008c7c3c: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008c7c3e: mov dword ptr [ebp + 0x20], esi */ W32((u32)(r_ebp+0x20u), r_esi);
    /* 008c7c41: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
    /* 008c7c44: mov cl, byte ptr [ebp + 0x1d] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x1du))) & 0xffu);
    /* 008c7c47: cmp cl, bl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_ebx; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008c7c49: je 0x8c7cb0 */ if (fZ) goto L_008c7cb0;
L_008c7c4b:; BB(0x008c7c4b);
    /* 008c7c4b: cmp word ptr [eax], 0x5a4d */ {  u32 a = R16((u32)(r_eax)); u32 b = 0x5a4du; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 008c7c50: jne 0x8c7cb0 */ if (!fZ) goto L_008c7cb0;
L_008c7c52:; BB(0x008c7c52);
    /* 008c7c52: mov esi, dword ptr [eax + 0x3c] */ r_esi = R32((u32)(r_eax+0x3cu));
    /* 008c7c55: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008c7c57: cmp dword ptr [esi], 0x4550 */ {  u32 a = R32((u32)(r_esi)); u32 b = 0x4550u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c7c5d: jne 0x8c7c6b */ if (!fZ) goto L_008c7c6b;
L_008c7c5f:; BB(0x008c7c5f);
    /* 008c7c5f: mov dword ptr [esi + 0x9c], ebx */ W32((u32)(r_esi+0x9cu), r_ebx);
    /* 008c7c65: mov dword ptr [esi + 0x98], ebx */ W32((u32)(r_esi+0x98u), r_ebx);
L_008c7c6b:; BB(0x008c7c6b);
    /* 008c7c6b: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 008c7c6e: lea eax, [esp + 0x14] */ r_eax = (u32)(r_esp+0x14u);
    /* 008c7c72: lea ecx, [esp + 0x1c] */ r_ecx = (u32)(r_esp+0x1cu);
    /* 008c7c76: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c7c77: mov eax, dword ptr [ebp + 4] */ r_eax = R32((u32)(r_ebp+0x4u));
    /* 008c7c7a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c7c7b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c7c7c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c7c7d: call 0x8c79a0 */ r_esp -= 4; W32(r_esp, 0x8c7c82u); f_008c79a0();
    /* 008c7c82: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c7c85: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c7c87: je 0x8c7cb0 */ if (fZ) goto L_008c7cb0;
L_008c7c89:; BB(0x008c7c89);
    /* 008c7c89: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 008c7c8d: mov dword ptr [esi + 0x58], ecx */ W32((u32)(r_esi+0x58u), r_ecx);
    /* 008c7c90: jmp 0x8c7cb0 */ goto L_008c7cb0;
L_008c7c92:; BB(0x008c7c92);
    /* 008c7c92: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008c7c94: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 008c7c96: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 008c7c98: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 008c7c9b: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 008c7c9e: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 008c7ca1: mov ecx, dword ptr [ebp + 0x24] */ r_ecx = R32((u32)(r_ebp+0x24u));
    /* 008c7ca4: mov byte ptr [ebp + 0x1c], bl */ W8((u32)(r_ebp+0x1cu), (u8)r_ebx);
    /* 008c7ca7: mov dword ptr [ebp + 0x20], ebx */ W32((u32)(r_ebp+0x20u), r_ebx);
    /* 008c7caa: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
    /* 008c7cad: mov dword ptr [ebp + 0x38], ebx */ W32((u32)(r_ebp+0x38u), r_ebx);
L_008c7cb0:; BB(0x008c7cb0);
    /* 008c7cb0: mov edx, dword ptr [ebp + 0x24] */ r_edx = R32((u32)(r_ebp+0x24u));
    /* 008c7cb3: mov eax, dword ptr [ebp + 0x20] */ r_eax = R32((u32)(r_ebp+0x20u));
    /* 008c7cb6: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008c7cb8: jae 0x8c7cc9 */ if (!fC) goto L_008c7cc9;
L_008c7cba:; BB(0x008c7cba);
    /* 008c7cba: mov byte ptr [ebp + 0x1c], bl */ W8((u32)(r_ebp+0x1cu), (u8)r_ebx);
    /* 008c7cbd: mov dword ptr [ebp + 0x20], ebx */ W32((u32)(r_ebp+0x20u), r_ebx);
    /* 008c7cc0: mov dword ptr [ebp + 0x24], ebx */ W32((u32)(r_ebp+0x24u), r_ebx);
    /* 008c7cc3: mov dword ptr [ebp + 8], ebx */ W32((u32)(r_ebp+0x8u), r_ebx);
    /* 008c7cc6: mov dword ptr [ebp + 0x38], ebx */ W32((u32)(r_ebp+0x38u), r_ebx);
L_008c7cc9:; BB(0x008c7cc9);
    /* 008c7cc9: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 008c7ccd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c7cce: call dword ptr [0x8f8140] */ { u32 t = R32((u32)(0x8f8140u)); r_esp -= 4; W32(r_esp, 0x8c7cd4u); call_ind(t); }
    /* 008c7cd4: cmp byte ptr [ebp + 0x1c], bl */ {  u32 a = R8((u32)(r_ebp+0x1cu)); u32 b = (u8)r_ebx; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008c7cd7: jne 0x8c7cec */ if (!fZ) goto L_008c7cec;
L_008c7cd9:; BB(0x008c7cd9);
    /* 008c7cd9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c7cda: mov dword ptr [ebp + 0x44], 6 */ W32((u32)(r_ebp+0x44u), 0x6u);
    /* 008c7ce1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c7ce2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008c7ce3: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c7ce5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008c7ce6: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c7ce9: ret 8 */ FN_RET(0x008c7a90); r_esp += 12; return;
L_008c7cec:; BB(0x008c7cec);
    /* 008c7cec: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 008c7cef: mov ecx, dword ptr [ebp + 0x30] */ r_ecx = R32((u32)(r_ebp+0x30u));
    /* 008c7cf2: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c7cf4: mov dword ptr [ebp + 0x18], ecx */ W32((u32)(r_ebp+0x18u), r_ecx);
    /* 008c7cf7: je 0x8c7d05 */ if (fZ) goto L_008c7d05;
L_008c7cf9:; BB(0x008c7cf9);
    /* 008c7cf9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c7cfa: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x8c7cffu); f_00858882();
    /* 008c7cff: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c7d02: mov dword ptr [ebp + 0x14], ebx */ W32((u32)(r_ebp+0x14u), r_ebx);
L_008c7d05:; BB(0x008c7d05);
    /* 008c7d05: mov edx, dword ptr [ebp + 0x18] */ r_edx = R32((u32)(r_ebp+0x18u));
    /* 008c7d08: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c7d09: call 0x859c55 */ r_esp -= 4; W32(r_esp, 0x8c7d0eu); f_00859c55();
    /* 008c7d0e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c7d11: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c7d13: mov dword ptr [ebp + 0x14], eax */ W32((u32)(r_ebp+0x14u), r_eax);
    /* 008c7d16: jne 0x8c7d2b */ if (!fZ) goto L_008c7d2b;
L_008c7d18:; BB(0x008c7d18);
    /* 008c7d18: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c7d19: mov dword ptr [ebp + 0x44], 7 */ W32((u32)(r_ebp+0x44u), 0x7u);
    /* 008c7d20: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c7d21: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008c7d22: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c7d24: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008c7d25: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c7d28: ret 8 */ FN_RET(0x008c7a90); r_esp += 12; return;
L_008c7d2b:; BB(0x008c7d2b);
    /* 008c7d2b: mov esi, dword ptr [ebp + 4] */ r_esi = R32((u32)(r_ebp+0x4u));
    /* 008c7d2e: mov edx, dword ptr [ebp + 0x38] */ r_edx = R32((u32)(r_ebp+0x38u));
    /* 008c7d31: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 008c7d34: mov ecx, dword ptr [ebp + 0x18] */ r_ecx = R32((u32)(r_ebp+0x18u));
    /* 008c7d37: add esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008c7d39: add esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008c7d3b: mov edi, eax */ r_edi = r_eax;
    /* 008c7d3d: mov eax, ecx */ r_eax = r_ecx;
    /* 008c7d3f: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 008c7d42: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 008c7d44: mov ecx, eax */ r_ecx = r_eax;
    /* 008c7d46: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008c7d49: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 008c7d4b: cmp dword ptr [ebp], ebx */ {  u32 a = R32((u32)(r_ebp)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c7d4e: jne 0x8c7d7b */ if (!fZ) goto L_008c7d7b;
L_008c7d50:; BB(0x008c7d50);
    /* 008c7d50: push 0xf0000000 */ { u32 v = 0xf0000000u; r_esp -= 4; W32(r_esp, v); }
    /* 008c7d55: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008c7d57: push 0xa38458 */ { u32 v = 0xa38458u; r_esp -= 4; W32(r_esp, v); }
    /* 008c7d5c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c7d5d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008c7d5e: call dword ptr [0x8f803c] */ { u32 t = R32((u32)(0x8f803cu)); r_esp -= 4; W32(r_esp, 0x8c7d64u); call_ind(t); }
    /* 008c7d64: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c7d66: jne 0x8c7d7b */ if (!fZ) goto L_008c7d7b;
L_008c7d68:; BB(0x008c7d68);
    /* 008c7d68: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c7d69: mov dword ptr [ebp + 0x44], 8 */ W32((u32)(r_ebp+0x44u), 0x8u);
    /* 008c7d70: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c7d71: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008c7d72: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c7d74: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008c7d75: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c7d78: ret 8 */ FN_RET(0x008c7a90); r_esp += 12; return;
L_008c7d7b:; BB(0x008c7d7b);
    /* 008c7d7b: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 008c7d7e: lea edi, [ebp + 0x10] */ r_edi = (u32)(r_ebp+0x10u);
    /* 008c7d81: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c7d83: je 0x8c7d8e */ if (fZ) goto L_008c7d8e;
L_008c7d85:; BB(0x008c7d85);
    /* 008c7d85: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c7d86: call dword ptr [0x8f802c] */ { u32 t = R32((u32)(0x8f802cu)); r_esp -= 4; W32(r_esp, 0x8c7d8cu); call_ind(t); }
    /* 008c7d8c: mov dword ptr [edi], ebx */ W32((u32)(r_edi), r_ebx);
L_008c7d8e:; BB(0x008c7d8e);
    /* 008c7d8e: mov ecx, dword ptr [0xa39540] */ r_ecx = R32((u32)(0xa39540u));
    /* 008c7d94: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 008c7d97: mov esi, dword ptr [0x8f8034] */ r_esi = R32((u32)(0x8f8034u));
    /* 008c7d9d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c7d9e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c7d9f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c7da0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c7da1: push 0xa394ec */ { u32 v = 0xa394ecu; r_esp -= 4; W32(r_esp, v); }
    /* 008c7da6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c7da7: call esi */ { u32 t = r_esi; r_esp -= 4; W32(r_esp, 0x8c7da9u); call_ind(t); }
    /* 008c7da9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c7dab: jne 0x8c7e0e */ if (!fZ) goto L_008c7e0e;
L_008c7dad:; BB(0x008c7dad);
    /* 008c7dad: call dword ptr [0x8f817c] */ { u32 t = R32((u32)(0x8f817cu)); r_esp -= 4; W32(r_esp, 0x8c7db3u); call_ind(t); }
    /* 008c7db3: cmp eax, 0x57 */ {  u32 a = r_eax; u32 b = 0x57u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c7db6: jne 0x8c7dfb */ if (!fZ) goto L_008c7dfb;
L_008c7db8:; BB(0x008c7db8);
    /* 008c7db8: push 0xf0000000 */ { u32 v = 0xf0000000u; r_esp -= 4; W32(r_esp, v); }
    /* 008c7dbd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008c7dbf: push 0xa38458 */ { u32 v = 0xa38458u; r_esp -= 4; W32(r_esp, v); }
    /* 008c7dc4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c7dc5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008c7dc6: call dword ptr [0x8f803c] */ { u32 t = R32((u32)(0x8f803cu)); r_esp -= 4; W32(r_esp, 0x8c7dccu); call_ind(t); }
    /* 008c7dcc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c7dce: jne 0x8c7de3 */ if (!fZ) goto L_008c7de3;
L_008c7dd0:; BB(0x008c7dd0);
    /* 008c7dd0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c7dd1: mov dword ptr [ebp + 0x44], 0x62 */ W32((u32)(r_ebp+0x44u), 0x62u);
    /* 008c7dd8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c7dd9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008c7dda: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c7ddc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008c7ddd: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c7de0: ret 8 */ FN_RET(0x008c7a90); r_esp += 12; return;
L_008c7de3:; BB(0x008c7de3);
    /* 008c7de3: mov eax, dword ptr [0xa39540] */ r_eax = R32((u32)(0xa39540u));
    /* 008c7de8: mov ecx, dword ptr [ebp] */ r_ecx = R32((u32)(r_ebp));
    /* 008c7deb: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c7dec: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c7ded: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c7dee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c7def: push 0xa394ec */ { u32 v = 0xa394ecu; r_esp -= 4; W32(r_esp, v); }
    /* 008c7df4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c7df5: call esi */ { u32 t = r_esi; r_esp -= 4; W32(r_esp, 0x8c7df7u); call_ind(t); }
    /* 008c7df7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c7df9: jne 0x8c7e0e */ if (!fZ) goto L_008c7e0e;
L_008c7dfb:; BB(0x008c7dfb);
    /* 008c7dfb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c7dfc: mov dword ptr [ebp + 0x44], 9 */ W32((u32)(r_ebp+0x44u), 0x9u);
    /* 008c7e03: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c7e04: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008c7e05: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c7e07: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008c7e08: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c7e0b: ret 8 */ FN_RET(0x008c7a90); r_esp += 12; return;
L_008c7e0e:; BB(0x008c7e0e);
    /* 008c7e0e: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 008c7e11: lea esi, [ebp + 0xc] */ r_esi = (u32)(r_ebp+0xcu);
    /* 008c7e14: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c7e16: je 0x8c7e21 */ if (fZ) goto L_008c7e21;
L_008c7e18:; BB(0x008c7e18);
    /* 008c7e18: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c7e19: call dword ptr [0x8f8004] */ { u32 t = R32((u32)(0x8f8004u)); r_esp -= 4; W32(r_esp, 0x8c7e1fu); call_ind(t); }
    /* 008c7e1f: mov dword ptr [esi], ebx */ W32((u32)(r_esi), r_ebx);
L_008c7e21:; BB(0x008c7e21);
    /* 008c7e21: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 008c7e24: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c7e25: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c7e26: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c7e27: push 0x8003 */ { u32 v = 0x8003u; r_esp -= 4; W32(r_esp, v); }
    /* 008c7e2c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c7e2d: call dword ptr [0x8f8050] */ { u32 t = R32((u32)(0x8f8050u)); r_esp -= 4; W32(r_esp, 0x8c7e33u); call_ind(t); }
    /* 008c7e33: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c7e35: jne 0x8c7e4a */ if (!fZ) goto L_008c7e4a;
L_008c7e37:; BB(0x008c7e37);
    /* 008c7e37: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c7e38: mov dword ptr [ebp + 0x44], 0xa */ W32((u32)(r_ebp+0x44u), 0xau);
    /* 008c7e3f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c7e40: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008c7e41: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c7e43: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008c7e44: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c7e47: ret 8 */ FN_RET(0x008c7a90); r_esp += 12; return;
L_008c7e4a:; BB(0x008c7e4a);
    /* 008c7e4a: mov eax, dword ptr [ebp + 0x38] */ r_eax = R32((u32)(r_ebp+0x38u));
    /* 008c7e4d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 008c7e50: mov ecx, dword ptr [ebp + 4] */ r_ecx = R32((u32)(r_ebp+0x4u));
    /* 008c7e53: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008c7e55: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 008c7e57: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c7e58: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c7e59: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c7e5a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c7e5b: call dword ptr [0x8f8054] */ { u32 t = R32((u32)(0x8f8054u)); r_esp -= 4; W32(r_esp, 0x8c7e61u); call_ind(t); }
    /* 008c7e61: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c7e63: jne 0x8c7e78 */ if (!fZ) goto L_008c7e78;
L_008c7e65:; BB(0x008c7e65);
    /* 008c7e65: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c7e66: mov dword ptr [ebp + 0x44], 0xb */ W32((u32)(r_ebp+0x44u), 0xbu);
    /* 008c7e6d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c7e6e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008c7e6f: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c7e71: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008c7e72: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c7e75: ret 8 */ FN_RET(0x008c7a90); r_esp += 12; return;
L_008c7e78:; BB(0x008c7e78);
    /* 008c7e78: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 008c7e7a: mov ecx, dword ptr [ebp + 0x18] */ r_ecx = R32((u32)(r_ebp+0x18u));
    /* 008c7e7d: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 008c7e80: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c7e81: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c7e82: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c7e83: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008c7e85: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c7e86: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c7e87: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c7e88: call dword ptr [0x8f8038] */ { u32 t = R32((u32)(0x8f8038u)); r_esp -= 4; W32(r_esp, 0x8c7e8eu); call_ind(t); }
    /* 008c7e8e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c7e90: jne 0x8c7ef5 */ if (!fZ) goto L_008c7ef5;
L_008c7e92:; BB(0x008c7e92);
    /* 008c7e92: call dword ptr [0x8f817c] */ { u32 t = R32((u32)(0x8f817cu)); r_esp -= 4; W32(r_esp, 0x8c7e98u); call_ind(t); }
    /* 008c7e98: cmp eax, 0x57 */ {  u32 a = r_eax; u32 b = 0x57u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c7e9b: jne 0x8c7ee2 */ if (!fZ) goto L_008c7ee2;
L_008c7e9d:; BB(0x008c7e9d);
    /* 008c7e9d: push 0xf0000000 */ { u32 v = 0xf0000000u; r_esp -= 4; W32(r_esp, v); }
    /* 008c7ea2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008c7ea4: push 0xa38458 */ { u32 v = 0xa38458u; r_esp -= 4; W32(r_esp, v); }
    /* 008c7ea9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c7eaa: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008c7eab: call dword ptr [0x8f803c] */ { u32 t = R32((u32)(0x8f803cu)); r_esp -= 4; W32(r_esp, 0x8c7eb1u); call_ind(t); }
    /* 008c7eb1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c7eb3: jne 0x8c7ec8 */ if (!fZ) goto L_008c7ec8;
L_008c7eb5:; BB(0x008c7eb5);
    /* 008c7eb5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c7eb6: mov dword ptr [ebp + 0x44], 0x80 */ W32((u32)(r_ebp+0x44u), 0x80u);
    /* 008c7ebd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c7ebe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008c7ebf: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c7ec1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008c7ec2: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c7ec5: ret 8 */ FN_RET(0x008c7a90); r_esp += 12; return;
L_008c7ec8:; BB(0x008c7ec8);
    /* 008c7ec8: mov ecx, dword ptr [edi] */ r_ecx = R32((u32)(r_edi));
    /* 008c7eca: mov edx, dword ptr [ebp + 0x18] */ r_edx = R32((u32)(r_ebp+0x18u));
    /* 008c7ecd: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 008c7ed0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c7ed1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c7ed2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c7ed3: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 008c7ed5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c7ed6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c7ed7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c7ed8: call dword ptr [0x8f8038] */ { u32 t = R32((u32)(0x8f8038u)); r_esp -= 4; W32(r_esp, 0x8c7edeu); call_ind(t); }
    /* 008c7ede: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c7ee0: jne 0x8c7ef5 */ if (!fZ) goto L_008c7ef5;
L_008c7ee2:; BB(0x008c7ee2);
    /* 008c7ee2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c7ee3: mov dword ptr [ebp + 0x44], 0xc */ W32((u32)(r_ebp+0x44u), 0xcu);
    /* 008c7eea: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c7eeb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008c7eec: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c7eee: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008c7eef: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c7ef2: ret 8 */ FN_RET(0x008c7a90); r_esp += 12; return;
L_008c7ef5:; BB(0x008c7ef5);
    /* 008c7ef5: cmp byte ptr [esp + 0x28], bl */ {  u32 a = R8((u32)(r_esp+0x28u)); u32 b = (u8)r_ebx; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008c7ef9: je 0x8c7f40 */ if (fZ) goto L_008c7f40;
L_008c7efb:; BB(0x008c7efb);
    /* 008c7efb: mov esi, dword ptr [esp + 0x24] */ r_esi = R32((u32)(r_esp+0x24u));
    /* 008c7eff: push 0x5c */ { u32 v = 0x5cu; r_esp -= 4; W32(r_esp, v); }
    /* 008c7f01: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c7f02: call 0x868e50 */ r_esp -= 4; W32(r_esp, 0x8c7f07u); f_00868e50();
    /* 008c7f07: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c7f0a: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c7f0c: je 0x8c7f11 */ if (fZ) goto L_008c7f11;
L_008c7f0e:; BB(0x008c7f0e);
    /* 008c7f0e: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008c7f0f: jmp 0x8c7f13 */ goto L_008c7f13;
L_008c7f11:; BB(0x008c7f11);
    /* 008c7f11: mov eax, esi */ r_eax = r_esi;
L_008c7f13:; BB(0x008c7f13);
    /* 008c7f13: mov edx, dword ptr [ebp + 0x38] */ r_edx = R32((u32)(r_ebp+0x38u));
    /* 008c7f16: mov ecx, dword ptr [ebp + 4] */ r_ecx = R32((u32)(r_ebp+0x4u));
    /* 008c7f19: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c7f1a: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 008c7f1d: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008c7f1f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c7f20: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c7f21: call 0x85a1fe */ r_esp -= 4; W32(r_esp, 0x8c7f26u); f_0085a1fe();
    /* 008c7f26: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c7f29: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c7f2b: je 0x8c7f40 */ if (fZ) goto L_008c7f40;
L_008c7f2d:; BB(0x008c7f2d);
    /* 008c7f2d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c7f2e: mov dword ptr [ebp + 0x44], 0xd */ W32((u32)(r_ebp+0x44u), 0xdu);
    /* 008c7f35: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c7f36: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008c7f37: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c7f39: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008c7f3a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c7f3d: ret 8 */ FN_RET(0x008c7a90); r_esp += 12; return;
L_008c7f40:; BB(0x008c7f40);
    /* 008c7f40: mov eax, dword ptr [ebp + 4] */ r_eax = R32((u32)(r_ebp+0x4u));
    /* 008c7f43: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c7f45: je 0x8c7f53 */ if (fZ) goto L_008c7f53;
L_008c7f47:; BB(0x008c7f47);
    /* 008c7f47: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c7f48: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x8c7f4du); f_00858882();
    /* 008c7f4d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c7f50: mov dword ptr [ebp + 4], ebx */ W32((u32)(r_ebp+0x4u), r_ebx);
L_008c7f53:; BB(0x008c7f53);
    /* 008c7f53: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c7f54: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c7f55: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008c7f56: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 008c7f58: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008c7f59: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c7f5c: ret 8 */ FN_RET(0x008c7a90); r_esp += 12; return;
}

void f_008c7f60(void) /* sub_8C7F60 */
{
    FN_ENTER(0x008c7f60);
    /* 008c7f60: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c7f61: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 008c7f65: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008c7f66: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c7f67: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c7f68: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c7f6a: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 008c7f6f: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 008c7f71: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c7f73: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 008c7f75: push 0x80000000 */ { u32 v = 0x80000000u; r_esp -= 4; W32(r_esp, v); }
    /* 008c7f7a: mov ebp, ecx */ r_ebp = r_ecx;
    /* 008c7f7c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c7f7d: call dword ptr [0x8f8144] */ { u32 t = R32((u32)(0x8f8144u)); r_esp -= 4; W32(r_esp, 0x8c7f83u); call_ind(t); }
    /* 008c7f83: mov esi, eax */ r_esi = r_eax;
    /* 008c7f85: cmp esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c7f88: jne 0x8c7f9a */ if (!fZ) goto L_008c7f9a;
L_008c7f8a:; BB(0x008c7f8a);
    /* 008c7f8a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c7f8b: mov dword ptr [ebp + 0x44], 1 */ W32((u32)(r_ebp+0x44u), 0x1u);
    /* 008c7f92: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c7f93: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008c7f94: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c7f96: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008c7f97: ret 0x10 */ FN_RET(0x008c7f60); r_esp += 20; return;
L_008c7f9a:; BB(0x008c7f9a);
    /* 008c7f9a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c7f9c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c7f9d: call dword ptr [0x8f8138] */ { u32 t = R32((u32)(0x8f8138u)); r_esp -= 4; W32(r_esp, 0x8c7fa3u); call_ind(t); }
    /* 008c7fa3: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c7fa6: mov dword ptr [ebp + 0x24], eax */ W32((u32)(r_ebp+0x24u), r_eax);
    /* 008c7fa9: jne 0x8c7fc2 */ if (!fZ) goto L_008c7fc2;
L_008c7fab:; BB(0x008c7fab);
    /* 008c7fab: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c7fac: call dword ptr [0x8f8140] */ { u32 t = R32((u32)(0x8f8140u)); r_esp -= 4; W32(r_esp, 0x8c7fb2u); call_ind(t); }
    /* 008c7fb2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c7fb3: mov dword ptr [ebp + 0x44], 0xb */ W32((u32)(r_ebp+0x44u), 0xbu);
    /* 008c7fba: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c7fbb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008c7fbc: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c7fbe: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008c7fbf: ret 0x10 */ FN_RET(0x008c7f60); r_esp += 20; return;
L_008c7fc2:; BB(0x008c7fc2);
    /* 008c7fc2: mov eax, dword ptr [ebp + 4] */ r_eax = R32((u32)(r_ebp+0x4u));
    /* 008c7fc5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c7fc7: je 0x8c7fd9 */ if (fZ) goto L_008c7fd9;
L_008c7fc9:; BB(0x008c7fc9);
    /* 008c7fc9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c7fca: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x8c7fcfu); f_00858882();
    /* 008c7fcf: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c7fd2: mov dword ptr [ebp + 4], 0 */ W32((u32)(r_ebp+0x4u), 0x0u);
L_008c7fd9:; BB(0x008c7fd9);
    /* 008c7fd9: mov ecx, dword ptr [ebp + 0x24] */ r_ecx = R32((u32)(r_ebp+0x24u));
    /* 008c7fdc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c7fdd: call 0x859c55 */ r_esp -= 4; W32(r_esp, 0x8c7fe2u); f_00859c55();
    /* 008c7fe2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c7fe5: mov dword ptr [ebp + 4], eax */ W32((u32)(r_ebp+0x4u), r_eax);
    /* 008c7fe8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c7fea: jne 0x8c8003 */ if (!fZ) goto L_008c8003;
L_008c7fec:; BB(0x008c7fec);
    /* 008c7fec: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c7fed: call dword ptr [0x8f8140] */ { u32 t = R32((u32)(0x8f8140u)); r_esp -= 4; W32(r_esp, 0x8c7ff3u); call_ind(t); }
    /* 008c7ff3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c7ff4: mov dword ptr [ebp + 0x44], 2 */ W32((u32)(r_ebp+0x44u), 0x2u);
    /* 008c7ffb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c7ffc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008c7ffd: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c7fff: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008c8000: ret 0x10 */ FN_RET(0x008c7f60); r_esp += 20; return;
L_008c8003:; BB(0x008c8003);
    /* 008c8003: mov ecx, dword ptr [ebp + 0x24] */ r_ecx = R32((u32)(r_ebp+0x24u));
    /* 008c8006: lea edx, [esp + 0x14] */ r_edx = (u32)(r_esp+0x14u);
    /* 008c800a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c800c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c800d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c800e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c800f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c8010: call dword ptr [0x8f813c] */ { u32 t = R32((u32)(0x8f813cu)); r_esp -= 4; W32(r_esp, 0x8c8016u); call_ind(t); }
    /* 008c8016: mov eax, dword ptr [ebp + 0x24] */ r_eax = R32((u32)(r_ebp+0x24u));
    /* 008c8019: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 008c801d: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c801f: je 0x8c8038 */ if (fZ) goto L_008c8038;
L_008c8021:; BB(0x008c8021);
    /* 008c8021: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c8022: call dword ptr [0x8f8140] */ { u32 t = R32((u32)(0x8f8140u)); r_esp -= 4; W32(r_esp, 0x8c8028u); call_ind(t); }
    /* 008c8028: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c8029: mov dword ptr [ebp + 0x44], 3 */ W32((u32)(r_ebp+0x44u), 0x3u);
    /* 008c8030: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c8031: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008c8032: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c8034: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008c8035: ret 0x10 */ FN_RET(0x008c7f60); r_esp += 20; return;
L_008c8038:; BB(0x008c8038);
    /* 008c8038: mov edx, dword ptr [ebp + 4] */ r_edx = R32((u32)(r_ebp+0x4u));
    /* 008c803b: lea ecx, [ebp + 0x28] */ r_ecx = (u32)(r_ebp+0x28u);
    /* 008c803e: mov edi, ecx */ r_edi = r_ecx;
    /* 008c8040: lea edx, [edx + eax - 0x10] */ r_edx = (u32)(r_edx+r_eax+0xfffffff0u);
    /* 008c8044: mov ebx, dword ptr [edx] */ r_ebx = R32((u32)(r_edx));
    /* 008c8046: mov dword ptr [edi], ebx */ W32((u32)(r_edi), r_ebx);
    /* 008c8048: mov ebx, dword ptr [edx + 4] */ r_ebx = R32((u32)(r_edx+0x4u));
    /* 008c804b: mov dword ptr [edi + 4], ebx */ W32((u32)(r_edi+0x4u), r_ebx);
    /* 008c804e: mov ebx, dword ptr [edx + 8] */ r_ebx = R32((u32)(r_edx+0x8u));
    /* 008c8051: mov dword ptr [edi + 8], ebx */ W32((u32)(r_edi+0x8u), r_ebx);
    /* 008c8054: mov edx, dword ptr [edx + 0xc] */ r_edx = R32((u32)(r_edx+0xcu));
    /* 008c8057: mov dword ptr [edi + 0xc], edx */ W32((u32)(r_edi+0xcu), r_edx);
    /* 008c805a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 008c805c: cmp edx, 0x32812622 */ {  u32 a = r_edx; u32 b = 0x32812622u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c8062: jne 0x8c808c */ if (!fZ) goto L_008c808c;
L_008c8064:; BB(0x008c8064);
    /* 008c8064: cmp dword ptr [ebp + 0x34], 0x32812621 */ {  u32 a = R32((u32)(r_ebp+0x34u)); u32 b = 0x32812621u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c806b: jne 0x8c808c */ if (!fZ) goto L_008c808c;
L_008c806d:; BB(0x008c806d);
    /* 008c806d: mov ecx, dword ptr [ebp + 0x2c] */ r_ecx = R32((u32)(r_ebp+0x2cu));
    /* 008c8070: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 008c8073: mov edi, eax */ r_edi = r_eax;
    /* 008c8075: mov byte ptr [ebp + 0x1c], 1 */ W8((u32)(r_ebp+0x1cu), 0x1u);
    /* 008c8079: lea edx, [edx + ecx + 0x10] */ r_edx = (u32)(r_edx+r_ecx+0x10u);
    /* 008c807d: mov dword ptr [ebp + 0x38], ecx */ W32((u32)(r_ebp+0x38u), r_ecx);
    /* 008c8080: sub edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008c8082: mov dword ptr [ebp + 0x20], edx */ W32((u32)(r_ebp+0x20u), r_edx);
    /* 008c8085: mov dword ptr [ebp + 8], edi */ W32((u32)(r_ebp+0x8u), r_edi);
    /* 008c8088: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 008c808a: jmp 0x8c80aa */ goto L_008c80aa;
L_008c808c:; BB(0x008c808c);
    /* 008c808c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008c808e: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 008c8090: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 008c8092: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 008c8095: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 008c8098: mov dword ptr [ecx + 0xc], eax */ W32((u32)(r_ecx+0xcu), r_eax);
    /* 008c809b: mov eax, dword ptr [ebp + 0x24] */ r_eax = R32((u32)(r_ebp+0x24u));
    /* 008c809e: mov byte ptr [ebp + 0x1c], bl */ W8((u32)(r_ebp+0x1cu), (u8)r_ebx);
    /* 008c80a1: mov dword ptr [ebp + 0x20], ebx */ W32((u32)(r_ebp+0x20u), r_ebx);
    /* 008c80a4: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 008c80a7: mov dword ptr [ebp + 0x38], ebx */ W32((u32)(r_ebp+0x38u), r_ebx);
L_008c80aa:; BB(0x008c80aa);
    /* 008c80aa: cmp eax, dword ptr [ebp + 0x20] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x20u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008c80ad: jae 0x8c80be */ if (!fC) goto L_008c80be;
L_008c80af:; BB(0x008c80af);
    /* 008c80af: mov byte ptr [ebp + 0x1c], bl */ W8((u32)(r_ebp+0x1cu), (u8)r_ebx);
    /* 008c80b2: mov dword ptr [ebp + 0x20], ebx */ W32((u32)(r_ebp+0x20u), r_ebx);
    /* 008c80b5: mov dword ptr [ebp + 0x24], ebx */ W32((u32)(r_ebp+0x24u), r_ebx);
    /* 008c80b8: mov dword ptr [ebp + 8], ebx */ W32((u32)(r_ebp+0x8u), r_ebx);
    /* 008c80bb: mov dword ptr [ebp + 0x38], ebx */ W32((u32)(r_ebp+0x38u), r_ebx);
L_008c80be:; BB(0x008c80be);
    /* 008c80be: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c80bf: call dword ptr [0x8f8140] */ { u32 t = R32((u32)(0x8f8140u)); r_esp -= 4; W32(r_esp, 0x8c80c5u); call_ind(t); }
    /* 008c80c5: cmp dword ptr [ebp], ebx */ {  u32 a = R32((u32)(r_ebp)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c80c8: jne 0x8c80f2 */ if (!fZ) goto L_008c80f2;
L_008c80ca:; BB(0x008c80ca);
    /* 008c80ca: push 0xf0000000 */ { u32 v = 0xf0000000u; r_esp -= 4; W32(r_esp, v); }
    /* 008c80cf: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008c80d1: push 0xa38458 */ { u32 v = 0xa38458u; r_esp -= 4; W32(r_esp, v); }
    /* 008c80d6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c80d7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008c80d8: call dword ptr [0x8f803c] */ { u32 t = R32((u32)(0x8f803cu)); r_esp -= 4; W32(r_esp, 0x8c80deu); call_ind(t); }
    /* 008c80de: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c80e0: jne 0x8c80f2 */ if (!fZ) goto L_008c80f2;
L_008c80e2:; BB(0x008c80e2);
    /* 008c80e2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c80e3: mov dword ptr [ebp + 0x44], 4 */ W32((u32)(r_ebp+0x44u), 0x4u);
    /* 008c80ea: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c80eb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008c80ec: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c80ee: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008c80ef: ret 0x10 */ FN_RET(0x008c7f60); r_esp += 20; return;
L_008c80f2:; BB(0x008c80f2);
    /* 008c80f2: mov eax, dword ptr [ebp + 0x40] */ r_eax = R32((u32)(r_ebp+0x40u));
    /* 008c80f5: lea esi, [ebp + 0x40] */ r_esi = (u32)(r_ebp+0x40u);
    /* 008c80f8: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c80fa: je 0x8c8105 */ if (fZ) goto L_008c8105;
L_008c80fc:; BB(0x008c80fc);
    /* 008c80fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c80fd: call dword ptr [0x8f8004] */ { u32 t = R32((u32)(0x8f8004u)); r_esp -= 4; W32(r_esp, 0x8c8103u); call_ind(t); }
    /* 008c8103: mov dword ptr [esi], ebx */ W32((u32)(r_esi), r_ebx);
L_008c8105:; BB(0x008c8105);
    /* 008c8105: mov ecx, dword ptr [ebp] */ r_ecx = R32((u32)(r_ebp));
    /* 008c8108: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c8109: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c810a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c810b: push 0x8003 */ { u32 v = 0x8003u; r_esp -= 4; W32(r_esp, v); }
    /* 008c8110: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c8111: call dword ptr [0x8f8050] */ { u32 t = R32((u32)(0x8f8050u)); r_esp -= 4; W32(r_esp, 0x8c8117u); call_ind(t); }
    /* 008c8117: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c8119: jne 0x8c812b */ if (!fZ) goto L_008c812b;
L_008c811b:; BB(0x008c811b);
    /* 008c811b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c811c: mov dword ptr [ebp + 0x44], 5 */ W32((u32)(r_ebp+0x44u), 0x5u);
    /* 008c8123: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c8124: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008c8125: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c8127: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008c8128: ret 0x10 */ FN_RET(0x008c7f60); r_esp += 20; return;
L_008c812b:; BB(0x008c812b);
    /* 008c812b: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 008c812f: or ecx, 0xffffffff */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 008c8132: mov edi, edx */ r_edi = r_edx;
    /* 008c8134: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c8136: repne scasb al, byte ptr es:[edi] */ while (r_ecx) { { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (fZ) break; }
    /* 008c8138: not ecx */ r_ecx = ~r_ecx;
    /* 008c813a: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008c813b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c813c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c813d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c813e: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 008c8140: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c8141: call dword ptr [0x8f8054] */ { u32 t = R32((u32)(0x8f8054u)); r_esp -= 4; W32(r_esp, 0x8c8147u); call_ind(t); }
    /* 008c8147: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c8149: jne 0x8c815b */ if (!fZ) goto L_008c815b;
L_008c814b:; BB(0x008c814b);
    /* 008c814b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c814c: mov dword ptr [ebp + 0x44], 6 */ W32((u32)(r_ebp+0x44u), 0x6u);
    /* 008c8153: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c8154: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008c8155: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c8157: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008c8158: ret 0x10 */ FN_RET(0x008c7f60); r_esp += 20; return;
L_008c815b:; BB(0x008c815b);
    /* 008c815b: mov eax, dword ptr [ebp + 0x3c] */ r_eax = R32((u32)(r_ebp+0x3cu));
    /* 008c815e: lea edi, [ebp + 0x3c] */ r_edi = (u32)(r_ebp+0x3cu);
    /* 008c8161: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c8163: je 0x8c816e */ if (fZ) goto L_008c816e;
L_008c8165:; BB(0x008c8165);
    /* 008c8165: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c8166: call dword ptr [0x8f802c] */ { u32 t = R32((u32)(0x8f802cu)); r_esp -= 4; W32(r_esp, 0x8c816cu); call_ind(t); }
    /* 008c816c: mov dword ptr [edi], ebx */ W32((u32)(r_edi), r_ebx);
L_008c816e:; BB(0x008c816e);
    /* 008c816e: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008c8170: mov ecx, dword ptr [ebp] */ r_ecx = R32((u32)(r_ebp));
    /* 008c8173: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c8174: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c8175: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c8176: push 0x6801 */ { u32 v = 0x6801u; r_esp -= 4; W32(r_esp, v); }
    /* 008c817b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c817c: call dword ptr [0x8f804c] */ { u32 t = R32((u32)(0x8f804cu)); r_esp -= 4; W32(r_esp, 0x8c8182u); call_ind(t); }
    /* 008c8182: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c8184: jne 0x8c8196 */ if (!fZ) goto L_008c8196;
L_008c8186:; BB(0x008c8186);
    /* 008c8186: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c8187: mov dword ptr [ebp + 0x44], 7 */ W32((u32)(r_ebp+0x44u), 0x7u);
    /* 008c818e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c818f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008c8190: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c8192: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008c8193: ret 0x10 */ FN_RET(0x008c7f60); r_esp += 20; return;
L_008c8196:; BB(0x008c8196);
    /* 008c8196: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008c8199: mov edx, dword ptr [ebp + 4] */ r_edx = R32((u32)(r_ebp+0x4u));
    /* 008c819c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c819d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c819e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 008c81a0: call 0x8c8210 */ r_esp -= 4; W32(r_esp, 0x8c81a5u); f_008c8210();
    /* 008c81a5: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c81a7: jne 0x8c81b7 */ if (!fZ) goto L_008c81b7;
L_008c81a9:; BB(0x008c81a9);
    /* 008c81a9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c81aa: mov dword ptr [ebp + 0x44], 0x58 */ W32((u32)(r_ebp+0x44u), 0x58u);
    /* 008c81b1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c81b2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008c81b3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008c81b4: ret 0x10 */ FN_RET(0x008c7f60); r_esp += 20; return;
L_008c81b7:; BB(0x008c81b7);
    /* 008c81b7: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 008c81ba: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 008c81be: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008c81c0: jbe 0x8c81c4 */ if ((fC||fZ)) goto L_008c81c4;
L_008c81c2:; BB(0x008c81c2);
    /* 008c81c2: mov eax, ecx */ r_eax = r_ecx;
L_008c81c4:; BB(0x008c81c4);
    /* 008c81c4: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 008c81c8: mov esi, dword ptr [ebp + 4] */ r_esi = R32((u32)(r_ebp+0x4u));
    /* 008c81cb: mov ecx, eax */ r_ecx = r_eax;
    /* 008c81cd: mov edi, edx */ r_edi = r_edx;
    /* 008c81cf: mov ebx, ecx */ r_ebx = r_ecx;
    /* 008c81d1: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 008c81d4: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 008c81d6: mov ecx, ebx */ r_ecx = r_ebx;
    /* 008c81d8: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008c81db: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 008c81dd: mov byte ptr [edx + eax], 0 */ W8((u32)(r_edx+r_eax), 0x0u);
    /* 008c81e1: mov eax, dword ptr [ebp + 4] */ r_eax = R32((u32)(r_ebp+0x4u));
    /* 008c81e4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c81e6: je 0x8c81f8 */ if (fZ) goto L_008c81f8;
L_008c81e8:; BB(0x008c81e8);
    /* 008c81e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c81e9: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x8c81eeu); f_00858882();
    /* 008c81ee: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c81f1: mov dword ptr [ebp + 4], 0 */ W32((u32)(r_ebp+0x4u), 0x0u);
L_008c81f8:; BB(0x008c81f8);
    /* 008c81f8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c81f9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c81fa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008c81fb: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 008c81fd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008c81fe: ret 0x10 */ FN_RET(0x008c7f60); r_esp += 20; return;
}

