#include "protos.h"

void f_008c8210(void) /* sub_8C8210 */
{
    FN_ENTER(0x008c8210);
    /* 008c8210: sub esp, 0x41c */ {  u32 a = r_esp; u32 b = 0x41cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008c8216: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 008c821a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c821c: lea edx, [esp + 8] */ r_edx = (u32)(r_esp+0x8u);
    /* 008c8220: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c8221: mov eax, dword ptr [ecx + 0x40] */ r_eax = R32((u32)(r_ecx+0x40u));
    /* 008c8224: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c8225: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 008c8227: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c8228: mov dword ptr [esp + 0x14], 0x10 */ W32((u32)(r_esp+0x14u), 0x10u);
    /* 008c8230: call dword ptr [0x8f8048] */ { u32 t = R32((u32)(0x8f8048u)); r_esp -= 4; W32(r_esp, 0x8c8236u); call_ind(t); }
    /* 008c8236: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c8238: jne 0x8c8245 */ if (!fZ) goto L_008c8245;
L_008c823a:; BB(0x008c823a);
    /* 008c823a: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c823c: add esp, 0x41c */ {  u32 a = r_esp; u32 b = 0x41cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c8242: ret 8 */ FN_RET(0x008c8210); r_esp += 12; return;
L_008c8245:; BB(0x008c8245);
    /* 008c8245: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008c8247: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 008c824b: mov dword ptr [esp + 9], ecx */ W32((u32)(r_esp+0x9u), r_ecx);
    /* 008c824f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c8250: mov dword ptr [esp + 0x11], ecx */ W32((u32)(r_esp+0x11u), r_ecx);
    /* 008c8254: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 008c8258: mov word ptr [esp + 0x15], cx */ W16((u32)(r_esp+0x15u), (u16)r_ecx);
    /* 008c825d: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 008c825f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c8260: mov byte ptr [esp + 0x1f], cl */ W8((u32)(r_esp+0x1fu), (u8)r_ecx);
    /* 008c8264: call 0x8c8d30 */ r_esp -= 4; W32(r_esp, 0x8c8269u); f_008c8d30();
    /* 008c8269: mov eax, dword ptr [esp + 0x42c] */ r_eax = R32((u32)(r_esp+0x42cu));
    /* 008c8270: mov ecx, dword ptr [esp + 0x430] */ r_ecx = R32((u32)(r_esp+0x430u));
    /* 008c8277: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c8278: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c8279: lea edx, [esp + 0x28] */ r_edx = (u32)(r_esp+0x28u);
    /* 008c827d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c827e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c827f: call 0x8c8e20 */ r_esp -= 4; W32(r_esp, 0x8c8284u); f_008c8e20();
    /* 008c8284: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c8287: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 008c8289: add esp, 0x41c */ {  u32 a = r_esp; u32 b = 0x41cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c828f: ret 8 */ FN_RET(0x008c8210); r_esp += 12; return;
}

void f_008c82a0(void) /* sub_8C82A0 */
{
    FN_ENTER(0x008c82a0);
    /* 008c82a0: mov eax, dword ptr [ecx + 0x1640] */ r_eax = R32((u32)(r_ecx+0x1640u));
    /* 008c82a6: ret  */ FN_RET(0x008c82a0); r_esp += 4; return;
}

void f_008c82b0(void) /* sub_8C82B0 */
{
    FN_ENTER(0x008c82b0);
    /* 008c82b0: mov eax, dword ptr [ecx + 0x164c] */ r_eax = R32((u32)(r_ecx+0x164cu));
    /* 008c82b6: ret  */ FN_RET(0x008c82b0); r_esp += 4; return;
}

void f_008c82c0(void) /* sub_8C82C0 */
{
    FN_ENTER(0x008c82c0);
    /* 008c82c0: lea eax, [ecx + 0x634] */ r_eax = (u32)(r_ecx+0x634u);
    /* 008c82c6: ret  */ FN_RET(0x008c82c0); r_esp += 4; return;
}

void f_008c82d0(void) /* sub_8C82D0 */
{
    FN_ENTER(0x008c82d0);
    /* 008c82d0: mov eax, dword ptr [ecx + 0x1634] */ r_eax = R32((u32)(r_ecx+0x1634u));
    /* 008c82d6: ret  */ FN_RET(0x008c82d0); r_esp += 4; return;
}

void f_008c82e0(void) /* sub_8C82E0 */
{
    FN_ENTER(0x008c82e0);
    /* 008c82e0: lea eax, [ecx + 0x18] */ r_eax = (u32)(r_ecx+0x18u);
    /* 008c82e3: ret  */ FN_RET(0x008c82e0); r_esp += 4; return;
}

void f_008c82f0(void) /* sub_8C82F0 */
{
    FN_ENTER(0x008c82f0);
    /* 008c82f0: sub esp, 0x45c */ {  u32 a = r_esp; u32 b = 0x45cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008c82f6: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c82f7: mov edi, dword ptr [ecx + 4] */ r_edi = R32((u32)(r_ecx+0x4u));
    /* 008c82fa: cmp edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c82fd: mov dword ptr [esp + 0x18], ecx */ W32((u32)(r_esp+0x18u), r_ecx);
    /* 008c8301: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 008c8305: jne 0x8c8313 */ if (!fZ) goto L_008c8313;
L_008c8307:; BB(0x008c8307);
    /* 008c8307: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c8309: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c830a: add esp, 0x45c */ {  u32 a = r_esp; u32 b = 0x45cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c8310: ret 0xc */ FN_RET(0x008c82f0); r_esp += 16; return;
L_008c8313:; BB(0x008c8313);
    /* 008c8313: mov edx, dword ptr [esp + 0x464] */ r_edx = R32((u32)(r_esp+0x464u));
    /* 008c831a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c831b: mov ebx, dword ptr [esp + 0x46c] */ r_ebx = R32((u32)(r_esp+0x46cu));
    /* 008c8322: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008c8323: mov ebp, dword ptr [ecx + 0xc] */ r_ebp = R32((u32)(r_ecx+0xcu));
    /* 008c8326: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c8327: mov esi, dword ptr [esp + 0x478] */ r_esi = R32((u32)(r_esp+0x478u));
    /* 008c832e: cmp ebx, 0x63d */ {  u32 a = r_ebx; u32 b = 0x63du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c8334: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 008c8338: mov dword ptr [esp + 0x1c], ebx */ W32((u32)(r_esp+0x1cu), r_ebx);
    /* 008c833c: mov dword ptr [esp + 0x18], ebp */ W32((u32)(r_esp+0x18u), r_ebp);
    /* 008c8340: mov dword ptr [esp + 0x20], esi */ W32((u32)(r_esp+0x20u), r_esi);
    /* 008c8344: jne 0x8c839b */ if (!fZ) goto L_008c839b;
L_008c8346:; BB(0x008c8346);
    /* 008c8346: mov ecx, 0x108 */ r_ecx = 0x108u;
    /* 008c834b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008c834d: lea edi, [esp + 0x4c] */ r_edi = (u32)(r_esp+0x4cu);
    /* 008c8351: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008c8354: rep stosd dword ptr es:[edi], eax */ while (r_ecx) { W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 008c8356: mov eax, dword ptr [esi - 4] */ r_eax = R32((u32)(r_esi+0xfffffffcu));
    /* 008c8359: mov dword ptr [esp + 0x4c], edx */ W32((u32)(r_esp+0x4cu), r_edx);
    /* 008c835d: mov ecx, eax */ r_ecx = r_eax;
    /* 008c835f: lea edi, [esp + 0x5c] */ r_edi = (u32)(r_esp+0x5cu);
    /* 008c8363: mov edx, ecx */ r_edx = r_ecx;
    /* 008c8365: mov dword ptr [esp + 0x50], ebp */ W32((u32)(r_esp+0x50u), r_ebp);
    /* 008c8369: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 008c836c: mov dword ptr [esp + 0x54], ebx */ W32((u32)(r_esp+0x54u), r_ebx);
    /* 008c8370: mov dword ptr [esp + 0x58], eax */ W32((u32)(r_esp+0x58u), r_eax);
    /* 008c8374: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 008c8376: mov ecx, edx */ r_ecx = r_edx;
    /* 008c8378: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 008c837c: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008c837f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c8381: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 008c8383: lea ecx, [esp + 0x14] */ r_ecx = (u32)(r_esp+0x14u);
    /* 008c8387: add eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008c838a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c838b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c838c: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 008c8390: lea edx, [esp + 0x58] */ r_edx = (u32)(r_esp+0x58u);
    /* 008c8394: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c8395: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c8396: jmp 0x8c850c */ goto L_008c850c;
L_008c839b:; BB(0x008c839b);
    /* 008c839b: cmp ebx, 0x63c */ {  u32 a = r_ebx; u32 b = 0x63cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c83a1: jne 0x8c83f8 */ if (!fZ) goto L_008c83f8;
L_008c83a3:; BB(0x008c83a3);
    /* 008c83a3: mov ecx, 0x108 */ r_ecx = 0x108u;
    /* 008c83a8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008c83aa: lea edi, [esp + 0x4c] */ r_edi = (u32)(r_esp+0x4cu);
    /* 008c83ae: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008c83b1: rep stosd dword ptr es:[edi], eax */ while (r_ecx) { W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 008c83b3: mov eax, dword ptr [esi - 4] */ r_eax = R32((u32)(r_esi+0xfffffffcu));
    /* 008c83b6: mov dword ptr [esp + 0x4c], edx */ W32((u32)(r_esp+0x4cu), r_edx);
    /* 008c83ba: mov ecx, eax */ r_ecx = r_eax;
    /* 008c83bc: lea edi, [esp + 0x5c] */ r_edi = (u32)(r_esp+0x5cu);
    /* 008c83c0: mov edx, ecx */ r_edx = r_ecx;
    /* 008c83c2: mov dword ptr [esp + 0x50], ebp */ W32((u32)(r_esp+0x50u), r_ebp);
    /* 008c83c6: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 008c83c9: mov dword ptr [esp + 0x54], ebx */ W32((u32)(r_esp+0x54u), r_ebx);
    /* 008c83cd: mov dword ptr [esp + 0x58], eax */ W32((u32)(r_esp+0x58u), r_eax);
    /* 008c83d1: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 008c83d3: mov ecx, edx */ r_ecx = r_edx;
    /* 008c83d5: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 008c83d9: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008c83dc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c83de: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 008c83e0: lea ecx, [esp + 0x14] */ r_ecx = (u32)(r_esp+0x14u);
    /* 008c83e4: add eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008c83e7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c83e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c83e9: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 008c83ed: lea edx, [esp + 0x58] */ r_edx = (u32)(r_esp+0x58u);
    /* 008c83f1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c83f2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c83f3: jmp 0x8c850c */ goto L_008c850c;
L_008c83f8:; BB(0x008c83f8);
    /* 008c83f8: cmp ebx, 0x613 */ {  u32 a = r_ebx; u32 b = 0x613u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c83fe: jne 0x8c8470 */ if (!fZ) goto L_008c8470;
L_008c8400:; BB(0x008c8400);
    /* 008c8400: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c8401: call dword ptr [0x8f811c] */ { u32 t = R32((u32)(0x8f811cu)); r_esp -= 4; W32(r_esp, 0x8c8407u); call_ind(t); }
    /* 008c8407: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008c8408: cmp eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008c840d: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 008c8411: jbe 0x8c8423 */ if ((fC||fZ)) goto L_008c8423;
L_008c8413:; BB(0x008c8413);
    /* 008c8413: mov eax, 0x200 */ r_eax = 0x200u;
    /* 008c8418: mov byte ptr [esi + 0x1ff], 0 */ W8((u32)(r_esi+0x1ffu), 0x0u);
    /* 008c841f: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
L_008c8423:; BB(0x008c8423);
    /* 008c8423: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 008c8427: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 008c842b: mov dword ptr [esp + 0x4c], ecx */ W32((u32)(r_esp+0x4cu), r_ecx);
    /* 008c842f: mov ecx, dword ptr [esp + 0x1c] */ r_ecx = R32((u32)(r_esp+0x1cu));
    /* 008c8433: mov dword ptr [esp + 0x54], ecx */ W32((u32)(r_esp+0x54u), r_ecx);
    /* 008c8437: mov ecx, eax */ r_ecx = r_eax;
    /* 008c8439: mov dword ptr [esp + 0x50], edx */ W32((u32)(r_esp+0x50u), r_edx);
    /* 008c843d: mov edx, ecx */ r_edx = r_ecx;
    /* 008c843f: lea edi, [esp + 0x5c] */ r_edi = (u32)(r_esp+0x5cu);
    /* 008c8443: mov dword ptr [esp + 0x58], eax */ W32((u32)(r_esp+0x58u), r_eax);
    /* 008c8447: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 008c844a: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 008c844c: mov ecx, edx */ r_ecx = r_edx;
    /* 008c844e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c8450: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008c8453: add eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008c8456: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 008c8458: lea ecx, [esp + 0x14] */ r_ecx = (u32)(r_esp+0x14u);
    /* 008c845c: lea edx, [esp + 0x50] */ r_edx = (u32)(r_esp+0x50u);
    /* 008c8460: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c8461: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c8462: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 008c8466: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c8467: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 008c846a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c846b: jmp 0x8c850c */ goto L_008c850c;
L_008c8470:; BB(0x008c8470);
    /* 008c8470: cmp ebx, 0x619 */ {  u32 a = r_ebx; u32 b = 0x619u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c8476: jne 0x8c84bc */ if (!fZ) goto L_008c84bc;
L_008c8478:; BB(0x008c8478);
    /* 008c8478: mov ecx, dword ptr [esi + 8] */ r_ecx = R32((u32)(r_esi+0x8u));
    /* 008c847b: mov eax, 0x10 */ r_eax = 0x10u;
    /* 008c8480: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 008c8484: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 008c8488: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 008c848b: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 008c848f: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 008c8491: mov dword ptr [esp + 0x3c], eax */ W32((u32)(r_esp+0x3cu), r_eax);
    /* 008c8495: lea eax, [esp + 0x10] */ r_eax = (u32)(r_esp+0x10u);
    /* 008c8499: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
    /* 008c849d: mov edx, dword ptr [esi + 0xc] */ r_edx = R32((u32)(r_esi+0xcu));
    /* 008c84a0: mov dword ptr [esp + 0x40], ecx */ W32((u32)(r_esp+0x40u), r_ecx);
    /* 008c84a4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c84a6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c84a7: lea ecx, [esp + 0x30] */ r_ecx = (u32)(r_esp+0x30u);
    /* 008c84ab: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 008c84ad: mov dword ptr [esp + 0x38], ebp */ W32((u32)(r_esp+0x38u), r_ebp);
    /* 008c84b1: mov dword ptr [esp + 0x3c], ebx */ W32((u32)(r_esp+0x3cu), r_ebx);
    /* 008c84b5: mov dword ptr [esp + 0x50], edx */ W32((u32)(r_esp+0x50u), r_edx);
    /* 008c84b9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c84ba: jmp 0x8c850b */ goto L_008c850b;
L_008c84bc:; BB(0x008c84bc);
    /* 008c84bc: cmp ebx, 0x61a */ {  u32 a = r_ebx; u32 b = 0x61au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c84c2: jne 0x8c84fd */ if (!fZ) goto L_008c84fd;
L_008c84c4:; BB(0x008c84c4);
    /* 008c84c4: mov eax, 0x14 */ r_eax = 0x14u;
    /* 008c84c9: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 008c84cd: mov ecx, 5 */ r_ecx = 0x5u;
    /* 008c84d2: lea edi, [esp + 0x38] */ r_edi = (u32)(r_esp+0x38u);
    /* 008c84d6: mov dword ptr [esp + 0x2c], ebp */ W32((u32)(r_esp+0x2cu), r_ebp);
    /* 008c84da: mov dword ptr [esp + 0x30], ebx */ W32((u32)(r_esp+0x30u), r_ebx);
    /* 008c84de: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 008c84e2: lea edx, [esp + 0x10] */ r_edx = (u32)(r_esp+0x10u);
    /* 008c84e6: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 008c84ea: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c84ec: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 008c84ee: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 008c84f2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c84f3: lea eax, [esp + 0x30] */ r_eax = (u32)(r_esp+0x30u);
    /* 008c84f7: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 008c84f9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c84fa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c84fb: jmp 0x8c850c */ goto L_008c850c;
L_008c84fd:; BB(0x008c84fd);
    /* 008c84fd: lea edx, [esp + 0x10] */ r_edx = (u32)(r_esp+0x10u);
    /* 008c8501: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c8503: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c8504: lea eax, [esp + 0x1c] */ r_eax = (u32)(r_esp+0x1cu);
    /* 008c8508: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 008c850a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
L_008c850b:; BB(0x008c850b);
    /* 008c850b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
L_008c850c:; BB(0x008c850c);
    /* 008c850c: call dword ptr [0x8f81c0] */ { u32 t = R32((u32)(0x8f81c0u)); r_esp -= 4; W32(r_esp, 0x8c8512u); call_ind(t); }
    /* 008c8512: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c8513: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008c8514: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c8516: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008c8517: jne 0x8c853c */ if (!fZ) goto L_008c853c;
L_008c8519:; BB(0x008c8519);
    /* 008c8519: call dword ptr [0x8f817c] */ { u32 t = R32((u32)(0x8f817cu)); r_esp -= 4; W32(r_esp, 0x8c851fu); call_ind(t); }
    /* 008c851f: cmp eax, 0x6d */ {  u32 a = r_eax; u32 b = 0x6du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c8522: je 0x8c8530 */ if (fZ) goto L_008c8530;
L_008c8524:; BB(0x008c8524);
    /* 008c8524: cmp eax, 0xe8 */ {  u32 a = r_eax; u32 b = 0xe8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c8529: je 0x8c8530 */ if (fZ) goto L_008c8530;
L_008c852b:; BB(0x008c852b);
    /* 008c852b: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c852e: jne 0x8c853c */ if (!fZ) goto L_008c853c;
L_008c8530:; BB(0x008c8530);
    /* 008c8530: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c8532: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c8533: add esp, 0x45c */ {  u32 a = r_esp; u32 b = 0x45cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c8539: ret 0xc */ FN_RET(0x008c82f0); r_esp += 16; return;
L_008c853c:; BB(0x008c853c);
    /* 008c853c: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 008c853e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c853f: add esp, 0x45c */ {  u32 a = r_esp; u32 b = 0x45cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c8545: ret 0xc */ FN_RET(0x008c82f0); r_esp += 16; return;
}

void f_008c8550(void) /* sub_8C8550 */
{
    FN_ENTER(0x008c8550);
    /* 008c8550: mov eax, dword ptr [ecx + 0x1654] */ r_eax = R32((u32)(r_ecx+0x1654u));
    /* 008c8556: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 008c855a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c855b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c855c: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 008c8560: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c8561: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 008c8565: cmp eax, 0x619 */ {  u32 a = r_eax; u32 b = 0x619u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c856a: je 0x8c85bf */ if (fZ) goto L_008c85bf;
L_008c856c:; BB(0x008c856c);
    /* 008c856c: cmp eax, 0x61a */ {  u32 a = r_eax; u32 b = 0x61au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c8571: je 0x8c85bf */ if (fZ) goto L_008c85bf;
L_008c8573:; BB(0x008c8573);
    /* 008c8573: cmp dword ptr [ecx + 0x1650], edi */ {  u32 a = R32((u32)(r_ecx+0x1650u)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c8579: jne 0x8c85a3 */ if (!fZ) goto L_008c85a3;
L_008c857b:; BB(0x008c857b);
    /* 008c857b: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c857d: jne 0x8c85a3 */ if (!fZ) goto L_008c85a3;
L_008c857f:; BB(0x008c857f);
    /* 008c857f: cmp dword ptr [ecx + 0x1658], edx */ {  u32 a = R32((u32)(r_ecx+0x1658u)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c8585: jne 0x8c85a3 */ if (!fZ) goto L_008c85a3;
L_008c8587:; BB(0x008c8587);
    /* 008c8587: mov ebx, dword ptr [ecx + 0x165c] */ r_ebx = R32((u32)(r_ecx+0x165cu));
    /* 008c858d: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008c858e: mov eax, ebx */ r_eax = r_ebx;
    /* 008c8590: mov dword ptr [ecx + 0x165c], ebx */ W32((u32)(r_ecx+0x165cu), r_ebx);
    /* 008c8596: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008c8599: jbe 0x8c85ad */ if ((fC||fZ)) goto L_008c85ad;
L_008c859b:; BB(0x008c859b);
    /* 008c859b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c859c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c859d: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 008c859f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008c85a0: ret 0xc */ FN_RET(0x008c8550); r_esp += 16; return;
L_008c85a3:; BB(0x008c85a3);
    /* 008c85a3: mov dword ptr [ecx + 0x165c], 0 */ W32((u32)(r_ecx+0x165cu), 0x0u);
L_008c85ad:; BB(0x008c85ad);
    /* 008c85ad: mov dword ptr [ecx + 0x1650], edi */ W32((u32)(r_ecx+0x1650u), r_edi);
    /* 008c85b3: mov dword ptr [ecx + 0x1654], esi */ W32((u32)(r_ecx+0x1654u), r_esi);
    /* 008c85b9: mov dword ptr [ecx + 0x1658], edx */ W32((u32)(r_ecx+0x1658u), r_edx);
L_008c85bf:; BB(0x008c85bf);
    /* 008c85bf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c85c0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c85c1: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c85c2: call 0x8c82f0 */ r_esp -= 4; W32(r_esp, 0x8c85c7u); f_008c82f0();
    /* 008c85c7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c85c8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c85c9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008c85ca: ret 0xc */ FN_RET(0x008c8550); r_esp += 16; return;
}

void f_008c85d0(void) /* sub_8C85D0 */
{
    FN_ENTER(0x008c85d0);
    /* 008c85d0: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008c85d3: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 008c85d7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c85d8: mov esi, ecx */ r_esi = r_ecx;
    /* 008c85da: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c85db: call dword ptr [0x8f8188] */ { u32 t = R32((u32)(0x8f8188u)); r_esp -= 4; W32(r_esp, 0x8c85e1u); call_ind(t); }
    /* 008c85e1: mov ecx, dword ptr [esp + 0xa] */ r_ecx = R32((u32)(r_esp+0xau));
    /* 008c85e5: mov edx, dword ptr [esp + 6] */ r_edx = R32((u32)(r_esp+0x6u));
    /* 008c85e9: and ecx, 0xffff */ {  u32 a = r_ecx; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008c85ef: and edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 008c85f5: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 008c85f9: imul ecx, edx */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)r_edx; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008c85fc: and eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008c8601: imul ecx, eax */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)r_eax; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008c8604: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 008c8607: xor ecx, 0xdad53a */ {  u32 a = r_ecx; u32 b = 0xdad53au; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008c860d: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
    /* 008c8610: mov dword ptr [esi + 8], eax */ W32((u32)(r_esi+0x8u), r_eax);
    /* 008c8613: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008c8615: mov dword ptr [esi + 0xc], ecx */ W32((u32)(r_esi+0xcu), r_ecx);
    /* 008c8618: mov dword ptr [esi], eax */ W32((u32)(r_esi), r_eax);
    /* 008c861a: mov dword ptr [esi + 0x10], eax */ W32((u32)(r_esi+0x10u), r_eax);
    /* 008c861d: mov byte ptr [esi + 0x14], al */ W8((u32)(r_esi+0x14u), (u8)r_eax);
    /* 008c8620: mov dword ptr [esi + 0x2c], eax */ W32((u32)(r_esi+0x2cu), r_eax);
    /* 008c8623: mov byte ptr [esi + 0x30], al */ W8((u32)(r_esi+0x30u), (u8)r_eax);
    /* 008c8626: mov byte ptr [esi + 0x230], al */ W8((u32)(r_esi+0x230u), (u8)r_eax);
    /* 008c862c: mov dword ptr [esi + 0x630], eax */ W32((u32)(r_esi+0x630u), r_eax);
    /* 008c8632: mov byte ptr [esi + 0x634], al */ W8((u32)(r_esi+0x634u), (u8)r_eax);
    /* 008c8638: mov dword ptr [esi + 0x1634], eax */ W32((u32)(r_esi+0x1634u), r_eax);
    /* 008c863e: mov eax, esi */ r_eax = r_esi;
    /* 008c8640: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c8641: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c8644: ret  */ FN_RET(0x008c85d0); r_esp += 4; return;
}

void f_008c8660(void) /* sub_8C8660 */
{
    FN_ENTER(0x008c8660);
    /* 008c8660: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008c8663: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c8664: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008c8665: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c8666: mov esi, ecx */ r_esi = r_ecx;
    /* 008c8668: mov ecx, dword ptr [esi + 4] */ r_ecx = R32((u32)(r_esi+0x4u));
    /* 008c866b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c866c: lea eax, [esi + 4] */ r_eax = (u32)(r_esi+0x4u);
    /* 008c866f: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c8672: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 008c8676: je 0x8c8682 */ if (fZ) goto L_008c8682;
L_008c8678:; BB(0x008c8678);
    /* 008c8678: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c8679: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c867a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008c867b: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c867d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008c867e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c8681: ret  */ FN_RET(0x008c8660); r_esp += 4; return;
L_008c8682:; BB(0x008c8682);
    /* 008c8682: mov ebp, dword ptr [0x8f826c] */ r_ebp = R32((u32)(0x8f826cu));
    /* 008c8688: push -0xb */ { u32 v = 0xfffffff5u; r_esp -= 4; W32(r_esp, v); }
    /* 008c868a: mov dword ptr [esp + 0x18], 0xc */ W32((u32)(r_esp+0x18u), 0xcu);
    /* 008c8692: mov dword ptr [esp + 0x20], 1 */ W32((u32)(r_esp+0x20u), 0x1u);
    /* 008c869a: mov dword ptr [esp + 0x1c], 0 */ W32((u32)(r_esp+0x1cu), 0x0u);
    /* 008c86a2: call ebp */ { u32 t = r_ebp; r_esp -= 4; W32(r_esp, 0x8c86a4u); call_ind(t); }
    /* 008c86a4: mov dword ptr [esi + 0x163c], eax */ W32((u32)(r_esi+0x163cu), r_eax);
    /* 008c86aa: lea eax, [esp + 0x14] */ r_eax = (u32)(r_esp+0x14u);
    /* 008c86ae: lea ebx, [esi + 0x164c] */ r_ebx = (u32)(r_esi+0x164cu);
    /* 008c86b4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c86b6: lea edi, [esi + 0x1648] */ r_edi = (u32)(r_esi+0x1648u);
    /* 008c86bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c86bd: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c86be: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c86bf: call dword ptr [0x8f80f0] */ { u32 t = R32((u32)(0x8f80f0u)); r_esp -= 4; W32(r_esp, 0x8c86c5u); call_ind(t); }
    /* 008c86c5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c86c7: jne 0x8c86d3 */ if (!fZ) goto L_008c86d3;
L_008c86c9:; BB(0x008c86c9);
    /* 008c86c9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c86ca: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c86cb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008c86cc: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c86ce: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008c86cf: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c86d2: ret  */ FN_RET(0x008c8660); r_esp += 4; return;
L_008c86d3:; BB(0x008c86d3);
    /* 008c86d3: mov ecx, dword ptr [ebx] */ r_ecx = R32((u32)(r_ebx));
    /* 008c86d5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c86d6: push -0xb */ { u32 v = 0xfffffff5u; r_esp -= 4; W32(r_esp, v); }
    /* 008c86d8: call dword ptr [0x8f825c] */ { u32 t = R32((u32)(0x8f825cu)); r_esp -= 4; W32(r_esp, 0x8c86deu); call_ind(t); }
    /* 008c86de: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c86e0: jne 0x8c86ec */ if (!fZ) goto L_008c86ec;
L_008c86e2:; BB(0x008c86e2);
    /* 008c86e2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c86e3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c86e4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008c86e5: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c86e7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008c86e8: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c86eb: ret  */ FN_RET(0x008c8660); r_esp += 4; return;
L_008c86ec:; BB(0x008c86ec);
    /* 008c86ec: mov ebx, dword ptr [0x8f81f8] */ r_ebx = R32((u32)(0x8f81f8u));
    /* 008c86f2: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 008c86f4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c86f6: lea edx, [esi + 8] */ r_edx = (u32)(r_esi+0x8u);
    /* 008c86f9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c86fb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c86fc: call ebx */ { u32 t = r_ebx; r_esp -= 4; W32(r_esp, 0x8c86feu); call_ind(t); }
    /* 008c86fe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c86ff: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 008c8701: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c8702: call ebx */ { u32 t = r_ebx; r_esp -= 4; W32(r_esp, 0x8c8704u); call_ind(t); }
    /* 008c8704: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c8705: call dword ptr [0x8f80f4] */ { u32 t = R32((u32)(0x8f80f4u)); r_esp -= 4; W32(r_esp, 0x8c870bu); call_ind(t); }
    /* 008c870b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c870d: jne 0x8c8719 */ if (!fZ) goto L_008c8719;
L_008c870f:; BB(0x008c870f);
    /* 008c870f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c8710: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c8711: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008c8712: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c8714: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008c8715: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c8718: ret  */ FN_RET(0x008c8660); r_esp += 4; return;
L_008c8719:; BB(0x008c8719);
    /* 008c8719: mov ecx, dword ptr [edi] */ r_ecx = R32((u32)(r_edi));
    /* 008c871b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c871c: call dword ptr [0x8f8140] */ { u32 t = R32((u32)(0x8f8140u)); r_esp -= 4; W32(r_esp, 0x8c8722u); call_ind(t); }
    /* 008c8722: push -0xa */ { u32 v = 0xfffffff6u; r_esp -= 4; W32(r_esp, v); }
    /* 008c8724: call ebp */ { u32 t = r_ebp; r_esp -= 4; W32(r_esp, 0x8c8726u); call_ind(t); }
    /* 008c8726: lea edx, [esp + 0x14] */ r_edx = (u32)(r_esp+0x14u);
    /* 008c872a: mov dword ptr [esi + 0x1638], eax */ W32((u32)(r_esi+0x1638u), r_eax);
    /* 008c8730: lea edi, [esi + 0x1644] */ r_edi = (u32)(r_esi+0x1644u);
    /* 008c8736: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c8738: add esi, 0x1640 */ {  u32 a = r_esi; u32 b = 0x1640u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008c873e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c873f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c8740: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c8741: call dword ptr [0x8f80f0] */ { u32 t = R32((u32)(0x8f80f0u)); r_esp -= 4; W32(r_esp, 0x8c8747u); call_ind(t); }
    /* 008c8747: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c8749: jne 0x8c8755 */ if (!fZ) goto L_008c8755;
L_008c874b:; BB(0x008c874b);
    /* 008c874b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c874c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c874d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008c874e: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c8750: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008c8751: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c8754: ret  */ FN_RET(0x008c8660); r_esp += 4; return;
L_008c8755:; BB(0x008c8755);
    /* 008c8755: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008c8757: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c8758: push -0xa */ { u32 v = 0xfffffff6u; r_esp -= 4; W32(r_esp, v); }
    /* 008c875a: call dword ptr [0x8f825c] */ { u32 t = R32((u32)(0x8f825cu)); r_esp -= 4; W32(r_esp, 0x8c8760u); call_ind(t); }
    /* 008c8760: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c8762: jne 0x8c876e */ if (!fZ) goto L_008c876e;
L_008c8764:; BB(0x008c8764);
    /* 008c8764: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c8765: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c8766: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008c8767: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c8769: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008c876a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c876d: ret  */ FN_RET(0x008c8660); r_esp += 4; return;
L_008c876e:; BB(0x008c876e);
    /* 008c876e: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 008c8772: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 008c8774: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c8776: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c8778: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c8779: call ebx */ { u32 t = r_ebx; r_esp -= 4; W32(r_esp, 0x8c877bu); call_ind(t); }
    /* 008c877b: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 008c877d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c877e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c877f: call ebx */ { u32 t = r_ebx; r_esp -= 4; W32(r_esp, 0x8c8781u); call_ind(t); }
    /* 008c8781: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c8782: call dword ptr [0x8f80f4] */ { u32 t = R32((u32)(0x8f80f4u)); r_esp -= 4; W32(r_esp, 0x8c8788u); call_ind(t); }
    /* 008c8788: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c878a: jne 0x8c8796 */ if (!fZ) goto L_008c8796;
L_008c878c:; BB(0x008c878c);
    /* 008c878c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c878d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c878e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008c878f: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c8791: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008c8792: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c8795: ret  */ FN_RET(0x008c8660); r_esp += 4; return;
L_008c8796:; BB(0x008c8796);
    /* 008c8796: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 008c8798: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c8799: call dword ptr [0x8f8140] */ { u32 t = R32((u32)(0x8f8140u)); r_esp -= 4; W32(r_esp, 0x8c879fu); call_ind(t); }
    /* 008c879f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c87a0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c87a1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008c87a2: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 008c87a4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008c87a5: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c87a8: ret  */ FN_RET(0x008c8660); r_esp += 4; return;
}

void f_008c87b0(void) /* sub_8C87B0 */
{
    FN_ENTER(0x008c87b0);
    /* 008c87b0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c87b1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c87b2: mov esi, ecx */ r_esi = r_ecx;
    /* 008c87b4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c87b5: cmp dword ptr [esi + 4], -1 */ {  u32 a = R32((u32)(r_esi+0x4u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c87b9: jne 0x8c87c1 */ if (!fZ) goto L_008c87c1;
L_008c87bb:; BB(0x008c87bb);
    /* 008c87bb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c87bc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c87be: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c87bf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008c87c0: ret  */ FN_RET(0x008c87b0); r_esp += 4; return;
L_008c87c1:; BB(0x008c87c1);
    /* 008c87c1: mov eax, dword ptr [esi + 0x1638] */ r_eax = R32((u32)(r_esi+0x1638u));
    /* 008c87c7: mov edi, dword ptr [0x8f825c] */ r_edi = R32((u32)(0x8f825cu));
    /* 008c87cd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c87ce: push -0xa */ { u32 v = 0xfffffff6u; r_esp -= 4; W32(r_esp, v); }
    /* 008c87d0: call edi */ { u32 t = r_edi; r_esp -= 4; W32(r_esp, 0x8c87d2u); call_ind(t); }
    /* 008c87d2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c87d4: jne 0x8c87da */ if (!fZ) goto L_008c87da;
L_008c87d6:; BB(0x008c87d6);
    /* 008c87d6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c87d7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c87d8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008c87d9: ret  */ FN_RET(0x008c87b0); r_esp += 4; return;
L_008c87da:; BB(0x008c87da);
    /* 008c87da: mov ecx, dword ptr [esi + 0x163c] */ r_ecx = R32((u32)(r_esi+0x163cu));
    /* 008c87e0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c87e1: push -0xb */ { u32 v = 0xfffffff5u; r_esp -= 4; W32(r_esp, v); }
    /* 008c87e3: call edi */ { u32 t = r_edi; r_esp -= 4; W32(r_esp, 0x8c87e5u); call_ind(t); }
    /* 008c87e5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c87e7: jne 0x8c87ed */ if (!fZ) goto L_008c87ed;
L_008c87e9:; BB(0x008c87e9);
    /* 008c87e9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c87ea: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c87eb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008c87ec: ret  */ FN_RET(0x008c87b0); r_esp += 4; return;
L_008c87ed:; BB(0x008c87ed);
    /* 008c87ed: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c87ef: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c87f1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008c87f3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c87f5: call dword ptr [0x8f8124] */ { u32 t = R32((u32)(0x8f8124u)); r_esp -= 4; W32(r_esp, 0x8c87fbu); call_ind(t); }
    /* 008c87fb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c87fd: mov dword ptr [esi + 0x10], eax */ W32((u32)(r_esi+0x10u), r_eax);
    /* 008c8800: jne 0x8c8806 */ if (!fZ) goto L_008c8806;
L_008c8802:; BB(0x008c8802);
    /* 008c8802: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c8803: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c8804: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008c8805: ret  */ FN_RET(0x008c87b0); r_esp += 4; return;
L_008c8806:; BB(0x008c8806);
    /* 008c8806: lea edx, [esp + 8] */ r_edx = (u32)(r_esp+0x8u);
    /* 008c880a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c880b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c880d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c880e: push 0x8c88b0 */ { u32 v = 0x8c88b0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c8813: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c8815: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c8817: call dword ptr [0x8f8218] */ { u32 t = R32((u32)(0x8f8218u)); r_esp -= 4; W32(r_esp, 0x8c881du); call_ind(t); }
    /* 008c881d: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 008c8821: mov dword ptr [esi], eax */ W32((u32)(r_esi), r_eax);
    /* 008c8823: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 008c8825: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 008c8827: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c8828: and eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c882a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c882b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008c882c: ret  */ FN_RET(0x008c87b0); r_esp += 4; return;
}

void f_008c8830(void) /* sub_8C8830 */
{
    FN_ENTER(0x008c8830);
    /* 008c8830: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c8831: mov esi, ecx */ r_esi = r_ecx;
    /* 008c8833: cmp dword ptr [esi + 4], -1 */ {  u32 a = R32((u32)(r_esi+0x4u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c8837: jne 0x8c883d */ if (!fZ) goto L_008c883d;
L_008c8839:; BB(0x008c8839);
    /* 008c8839: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c883b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c883c: ret  */ FN_RET(0x008c8830); r_esp += 4; return;
L_008c883d:; BB(0x008c883d);
    /* 008c883d: mov eax, dword ptr [esi + 0x10] */ r_eax = R32((u32)(r_esi+0x10u));
    /* 008c8840: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c8842: je 0x8c884b */ if (fZ) goto L_008c884b;
L_008c8844:; BB(0x008c8844);
    /* 008c8844: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c8845: call dword ptr [0x8f82e4] */ { u32 t = R32((u32)(0x8f82e4u)); r_esp -= 4; W32(r_esp, 0x8c884bu); call_ind(t); }
L_008c884b:; BB(0x008c884b);
    /* 008c884b: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008c884d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c884e: mov edi, dword ptr [0x8f8140] */ r_edi = R32((u32)(0x8f8140u));
    /* 008c8854: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c8856: je 0x8c887e */ if (fZ) goto L_008c887e;
L_008c8858:; BB(0x008c8858);
    /* 008c8858: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 008c885a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c885b: call dword ptr [0x8f8128] */ { u32 t = R32((u32)(0x8f8128u)); r_esp -= 4; W32(r_esp, 0x8c8861u); call_ind(t); }
    /* 008c8861: cmp eax, 0x102 */ {  u32 a = r_eax; u32 b = 0x102u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c8866: jne 0x8c8873 */ if (!fZ) goto L_008c8873;
L_008c8868:; BB(0x008c8868);
    /* 008c8868: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008c886a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c886c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c886d: call dword ptr [0x8f815c] */ { u32 t = R32((u32)(0x8f815cu)); r_esp -= 4; W32(r_esp, 0x8c8873u); call_ind(t); }
L_008c8873:; BB(0x008c8873);
    /* 008c8873: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 008c8875: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c8876: call edi */ { u32 t = r_edi; r_esp -= 4; W32(r_esp, 0x8c8878u); call_ind(t); }
    /* 008c8878: mov dword ptr [esi], 0 */ W32((u32)(r_esi), 0x0u);
L_008c887e:; BB(0x008c887e);
    /* 008c887e: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 008c8881: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c8884: je 0x8c8890 */ if (fZ) goto L_008c8890;
L_008c8886:; BB(0x008c8886);
    /* 008c8886: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c8887: call edi */ { u32 t = r_edi; r_esp -= 4; W32(r_esp, 0x8c8889u); call_ind(t); }
    /* 008c8889: mov dword ptr [esi + 4], 0xffffffff */ W32((u32)(r_esi+0x4u), 0xffffffffu);
L_008c8890:; BB(0x008c8890);
    /* 008c8890: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 008c8893: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008c8896: je 0x8c88a2 */ if (fZ) goto L_008c88a2;
L_008c8898:; BB(0x008c8898);
    /* 008c8898: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c8899: call edi */ { u32 t = r_edi; r_esp -= 4; W32(r_esp, 0x8c889bu); call_ind(t); }
    /* 008c889b: mov dword ptr [esi + 8], 0xffffffff */ W32((u32)(r_esi+0x8u), 0xffffffffu);
L_008c88a2:; BB(0x008c88a2);
    /* 008c88a2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c88a3: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 008c88a5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c88a6: ret  */ FN_RET(0x008c8830); r_esp += 4; return;
}

void f_008c88b0(void) /* sub_8C88B0 */
{
    FN_ENTER(0x008c88b0);
    /* 008c88b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008c88b1: mov ebp, esp */ r_ebp = r_esp;
    /* 008c88b3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 008c88b5: push 0x99f950 */ { u32 v = 0x99f950u; r_esp -= 4; W32(r_esp, v); }
    /* 008c88ba: push 0x85b6a4 */ { u32 v = 0x85b6a4u; r_esp -= 4; W32(r_esp, v); }
    /* 008c88bf: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 008c88c5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c88c6: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 008c88cd: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008c88d0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c88d1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c88d2: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c88d3: mov dword ptr [ebp - 0x18], esp */ W32((u32)(r_ebp+0xffffffe8u), r_esp);
    /* 008c88d6: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 008c88d9: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 008c88db: mov dword ptr [ebp - 0x20], ebx */ W32((u32)(r_ebp+0xffffffe0u), r_ebx);
    /* 008c88de: mov dword ptr [ebp - 0x40], ebx */ W32((u32)(r_ebp+0xffffffc0u), r_ebx);
    /* 008c88e1: mov dword ptr [ebp - 0x2c], ebx */ W32((u32)(r_ebp+0xffffffd4u), r_ebx);
    /* 008c88e4: mov dword ptr [ebp - 4], ebx */ W32((u32)(r_ebp+0xfffffffcu), r_ebx);
    /* 008c88e7: mov edi, dword ptr [0x8f813c] */ r_edi = R32((u32)(0x8f813cu));
L_008c88ed:; BB(0x008c88ed);
    /* 008c88ed: cmp dword ptr [ebp - 0x20], ebx */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008c88f0: ja 0x8c89e1 */ if ((!fC&&!fZ)) goto L_008c89e1;
L_008c88f6:; BB(0x008c88f6);
    /* 008c88f6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c88f7: lea eax, [ebp - 0x20] */ r_eax = (u32)(r_ebp+0xffffffe0u);
    /* 008c88fa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c88fb: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c88fc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c88fd: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c88fe: mov ecx, dword ptr [esi + 8] */ r_ecx = R32((u32)(r_esi+0x8u));
    /* 008c8901: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c8902: call dword ptr [0x8f80ec] */ { u32 t = R32((u32)(0x8f80ecu)); r_esp -= 4; W32(r_esp, 0x8c8908u); call_ind(t); }
    /* 008c8908: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c890a: jne 0x8c8920 */ if (!fZ) goto L_008c8920;
L_008c890c:; BB(0x008c890c);
    /* 008c890c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c890d: push 0x60f */ { u32 v = 0x60fu; r_esp -= 4; W32(r_esp, v); }
    /* 008c8912: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c8913: call 0x8c4490 */ r_esp -= 4; W32(r_esp, 0x8c8918u); f_008c4490();
    /* 008c8918: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008c891a: je 0x8c8ca2 */ if (fZ) goto L_008c8ca2;
L_008c8920:; BB(0x008c8920);
    /* 008c8920: cmp dword ptr [ebp - 0x20], ebx */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c8923: jne 0x8c89e1 */ if (!fZ) goto L_008c89e1;
L_008c8929:; BB(0x008c8929);
    /* 008c8929: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 008c892b: mov edx, dword ptr [esi + 0x10] */ r_edx = R32((u32)(r_esi+0x10u));
    /* 008c892e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c892f: call dword ptr [0x8f8128] */ { u32 t = R32((u32)(0x8f8128u)); r_esp -= 4; W32(r_esp, 0x8c8935u); call_ind(t); }
    /* 008c8935: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c8937: je 0x8c8ca2 */ if (fZ) goto L_008c8ca2;
L_008c893d:; BB(0x008c893d);
    /* 008c893d: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 008c8940: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008c8941: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 008c8944: cmp eax, 0xc8 */ {  u32 a = r_eax; u32 b = 0xc8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008c8949: jl 0x8c8993 */ if ((fS!=fO)) goto L_008c8993;
L_008c894b:; BB(0x008c894b);
    /* 008c894b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c894c: push 0x60e */ { u32 v = 0x60eu; r_esp -= 4; W32(r_esp, v); }
    /* 008c8951: push 0x8b1 */ { u32 v = 0x8b1u; r_esp -= 4; W32(r_esp, v); }
    /* 008c8956: mov ecx, esi */ r_ecx = r_esi;
    /* 008c8958: call 0x8c82f0 */ r_esp -= 4; W32(r_esp, 0x8c895du); f_008c82f0();
    /* 008c895d: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008c895f: jne 0x8c8975 */ if (!fZ) goto L_008c8975;
L_008c8961:; BB(0x008c8961);
    /* 008c8961: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c8962: push 0x60f */ { u32 v = 0x60fu; r_esp -= 4; W32(r_esp, v); }
    /* 008c8967: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c8968: call 0x8c4490 */ r_esp -= 4; W32(r_esp, 0x8c896du); f_008c4490();
    /* 008c896d: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008c896f: je 0x8c8ca2 */ if (fZ) goto L_008c8ca2;
L_008c8975:; BB(0x008c8975);
    /* 008c8975: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 008c8978: cmp eax, 0x320 */ {  u32 a = r_eax; u32 b = 0x320u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008c897d: jl 0x8c8993 */ if ((fS!=fO)) goto L_008c8993;
L_008c897f:; BB(0x008c897f);
    /* 008c897f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c8980: push 0x618 */ { u32 v = 0x618u; r_esp -= 4; W32(r_esp, v); }
    /* 008c8985: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c8986: call 0x8c4490 */ r_esp -= 4; W32(r_esp, 0x8c898bu); f_008c4490();
    /* 008c898b: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008c898d: je 0x8c8ca2 */ if (fZ) goto L_008c8ca2;
L_008c8993:; BB(0x008c8993);
    /* 008c8993: cmp byte ptr [esi + 0x14], bl */ {  u32 a = R8((u32)(r_esi+0x14u)); u32 b = (u8)r_ebx; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008c8996: je 0x8c88ed */ if (fZ) goto L_008c88ed;
L_008c899c:; BB(0x008c899c);
    /* 008c899c: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 008c899f: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008c89a0: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 008c89a3: cmp eax, 0x50 */ {  u32 a = r_eax; u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008c89a6: jl 0x8c88ed */ if ((fS!=fO)) goto L_008c88ed;
L_008c89ac:; BB(0x008c89ac);
    /* 008c89ac: mov dword ptr [ebp - 0x40], ebx */ W32((u32)(r_ebp+0xffffffc0u), r_ebx);
    /* 008c89af: mov byte ptr [esi + 0x14], bl */ W8((u32)(r_esi+0x14u), (u8)r_ebx);
    /* 008c89b2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c89b3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c89b4: push 0x8b0 */ { u32 v = 0x8b0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c89b9: mov ecx, esi */ r_ecx = r_esi;
    /* 008c89bb: call 0x8c82f0 */ r_esp -= 4; W32(r_esp, 0x8c89c0u); f_008c82f0();
    /* 008c89c0: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008c89c2: jne 0x8c88ed */ if (!fZ) goto L_008c88ed;
L_008c89c8:; BB(0x008c89c8);
    /* 008c89c8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c89c9: push 0x60f */ { u32 v = 0x60fu; r_esp -= 4; W32(r_esp, v); }
    /* 008c89ce: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c89cf: call 0x8c4490 */ r_esp -= 4; W32(r_esp, 0x8c89d4u); f_008c4490();
    /* 008c89d4: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008c89d6: je 0x8c8ca2 */ if (fZ) goto L_008c8ca2;
L_008c89dc:; BB(0x008c89dc);
    /* 008c89dc: jmp 0x8c88ed */ goto L_008c88ed;
L_008c89e1:; BB(0x008c89e1);
    /* 008c89e1: mov dword ptr [ebp - 0x2c], ebx */ W32((u32)(r_ebp+0xffffffd4u), r_ebx);
    /* 008c89e4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c89e5: lea ecx, [ebp - 0x1c] */ r_ecx = (u32)(r_ebp+0xffffffe4u);
    /* 008c89e8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c89e9: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 008c89eb: lea edx, [ebp - 0x3c] */ r_edx = (u32)(r_ebp+0xffffffc4u);
    /* 008c89ee: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c89ef: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 008c89f2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c89f3: call edi */ { u32 t = r_edi; r_esp -= 4; W32(r_esp, 0x8c89f5u); call_ind(t); }
    /* 008c89f5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c89f7: je 0x8c89fe */ if (fZ) goto L_008c89fe;
L_008c89f9:; BB(0x008c89f9);
    /* 008c89f9: cmp dword ptr [ebp - 0x1c], ebx */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c89fc: jne 0x8c8a12 */ if (!fZ) goto L_008c8a12;
L_008c89fe:; BB(0x008c89fe);
    /* 008c89fe: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c89ff: push 0x60f */ { u32 v = 0x60fu; r_esp -= 4; W32(r_esp, v); }
    /* 008c8a04: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c8a05: call 0x8c4490 */ r_esp -= 4; W32(r_esp, 0x8c8a0au); f_008c4490();
    /* 008c8a0a: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008c8a0c: je 0x8c8ca2 */ if (fZ) goto L_008c8ca2;
L_008c8a12:; BB(0x008c8a12);
    /* 008c8a12: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 008c8a15: sub dword ptr [ebp - 0x20], ecx */ { u32 ad = (u32)(r_ebp+0xffffffe0u);  u32 a = R32(ad); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 008c8a18: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 008c8a1b: cmp eax, 0x60e */ {  u32 a = r_eax; u32 b = 0x60eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c8a20: je 0x8c88ed */ if (fZ) goto L_008c88ed;
L_008c8a26:; BB(0x008c8a26);
    /* 008c8a26: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 008c8a29: cmp ecx, 0x8b1 */ {  u32 a = r_ecx; u32 b = 0x8b1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c8a2f: jne 0x8c8bac */ if (!fZ) goto L_008c8bac;
L_008c8a35:; BB(0x008c8a35);
    /* 008c8a35: cmp eax, 0x63d */ {  u32 a = r_eax; u32 b = 0x63du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c8a3a: jne 0x8c8a8b */ if (!fZ) goto L_008c8a8b;
L_008c8a3c:; BB(0x008c8a3c);
    /* 008c8a3c: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 008c8a3f: cmp eax, 0x1000 */ {  u32 a = r_eax; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008c8a44: ja 0x8c8ca2 */ if ((!fC&&!fZ)) goto L_008c8ca2;
L_008c8a4a:; BB(0x008c8a4a);
    /* 008c8a4a: mov dword ptr [esi + 0x1634], eax */ W32((u32)(r_esi+0x1634u), r_eax);
    /* 008c8a50: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c8a51: lea edx, [ebp - 0x1c] */ r_edx = (u32)(r_ebp+0xffffffe4u);
    /* 008c8a54: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c8a55: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c8a56: lea eax, [esi + 0x634] */ r_eax = (u32)(r_esi+0x634u);
    /* 008c8a5c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c8a5d: mov ecx, dword ptr [esi + 8] */ r_ecx = R32((u32)(r_esi+0x8u));
    /* 008c8a60: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c8a61: call edi */ { u32 t = r_edi; r_esp -= 4; W32(r_esp, 0x8c8a63u); call_ind(t); }
    /* 008c8a63: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c8a65: je 0x8c8a6c */ if (fZ) goto L_008c8a6c;
L_008c8a67:; BB(0x008c8a67);
    /* 008c8a67: cmp dword ptr [ebp - 0x1c], ebx */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c8a6a: jne 0x8c8a80 */ if (!fZ) goto L_008c8a80;
L_008c8a6c:; BB(0x008c8a6c);
    /* 008c8a6c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c8a6d: push 0x60f */ { u32 v = 0x60fu; r_esp -= 4; W32(r_esp, v); }
    /* 008c8a72: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c8a73: call 0x8c4490 */ r_esp -= 4; W32(r_esp, 0x8c8a78u); f_008c4490();
    /* 008c8a78: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008c8a7a: je 0x8c8ca2 */ if (fZ) goto L_008c8ca2;
L_008c8a80:; BB(0x008c8a80);
    /* 008c8a80: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 008c8a83: sub dword ptr [ebp - 0x20], edx */ { u32 ad = (u32)(r_ebp+0xffffffe0u);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 008c8a86: jmp 0x8c88ed */ goto L_008c88ed;
L_008c8a8b:; BB(0x008c8a8b);
    /* 008c8a8b: cmp eax, 0x63c */ {  u32 a = r_eax; u32 b = 0x63cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c8a90: jne 0x8c8af7 */ if (!fZ) goto L_008c8af7;
L_008c8a92:; BB(0x008c8a92);
    /* 008c8a92: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 008c8a95: cmp eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008c8a9a: ja 0x8c8ca2 */ if ((!fC&&!fZ)) goto L_008c8ca2;
L_008c8aa0:; BB(0x008c8aa0);
    /* 008c8aa0: mov dword ptr [esi + 0x630], eax */ W32((u32)(r_esi+0x630u), r_eax);
    /* 008c8aa6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c8aa7: lea ecx, [ebp - 0x1c] */ r_ecx = (u32)(r_ebp+0xffffffe4u);
    /* 008c8aaa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c8aab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c8aac: lea edx, [esi + 0x230] */ r_edx = (u32)(r_esi+0x230u);
    /* 008c8ab2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c8ab3: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 008c8ab6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c8ab7: call edi */ { u32 t = r_edi; r_esp -= 4; W32(r_esp, 0x8c8ab9u); call_ind(t); }
    /* 008c8ab9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c8abb: je 0x8c8ac2 */ if (fZ) goto L_008c8ac2;
L_008c8abd:; BB(0x008c8abd);
    /* 008c8abd: cmp dword ptr [ebp - 0x1c], ebx */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c8ac0: jne 0x8c8ad6 */ if (!fZ) goto L_008c8ad6;
L_008c8ac2:; BB(0x008c8ac2);
    /* 008c8ac2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c8ac3: push 0x60f */ { u32 v = 0x60fu; r_esp -= 4; W32(r_esp, v); }
    /* 008c8ac8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c8ac9: call 0x8c4490 */ r_esp -= 4; W32(r_esp, 0x8c8aceu); f_008c4490();
    /* 008c8ace: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008c8ad0: je 0x8c8ca2 */ if (fZ) goto L_008c8ca2;
L_008c8ad6:; BB(0x008c8ad6);
    /* 008c8ad6: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 008c8ad9: sub dword ptr [ebp - 0x20], ecx */ { u32 ad = (u32)(r_ebp+0xffffffe0u);  u32 a = R32(ad); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 008c8adc: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 008c8adf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c8ae0: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 008c8ae3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c8ae4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c8ae5: call 0x8c4490 */ r_esp -= 4; W32(r_esp, 0x8c8aeau); f_008c4490();
    /* 008c8aea: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008c8aec: je 0x8c8ca2 */ if (fZ) goto L_008c8ca2;
L_008c8af2:; BB(0x008c8af2);
    /* 008c8af2: jmp 0x8c88ed */ goto L_008c88ed;
L_008c8af7:; BB(0x008c8af7);
    /* 008c8af7: cmp eax, 0x613 */ {  u32 a = r_eax; u32 b = 0x613u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c8afc: jne 0x8c8b44 */ if (!fZ) goto L_008c8b44;
L_008c8afe:; BB(0x008c8afe);
    /* 008c8afe: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 008c8b01: cmp eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008c8b06: ja 0x8c8ca2 */ if ((!fC&&!fZ)) goto L_008c8ca2;
L_008c8b0c:; BB(0x008c8b0c);
    /* 008c8b0c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c8b0d: lea ecx, [ebp - 0x1c] */ r_ecx = (u32)(r_ebp+0xffffffe4u);
    /* 008c8b10: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c8b11: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c8b12: lea edx, [esi + 0x30] */ r_edx = (u32)(r_esi+0x30u);
    /* 008c8b15: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c8b16: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 008c8b19: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c8b1a: call edi */ { u32 t = r_edi; r_esp -= 4; W32(r_esp, 0x8c8b1cu); call_ind(t); }
    /* 008c8b1c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c8b1e: je 0x8c8b25 */ if (fZ) goto L_008c8b25;
L_008c8b20:; BB(0x008c8b20);
    /* 008c8b20: cmp dword ptr [ebp - 0x1c], ebx */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c8b23: jne 0x8c8b39 */ if (!fZ) goto L_008c8b39;
L_008c8b25:; BB(0x008c8b25);
    /* 008c8b25: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c8b26: push 0x60f */ { u32 v = 0x60fu; r_esp -= 4; W32(r_esp, v); }
    /* 008c8b2b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c8b2c: call 0x8c4490 */ r_esp -= 4; W32(r_esp, 0x8c8b31u); f_008c4490();
    /* 008c8b31: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008c8b33: je 0x8c8ca2 */ if (fZ) goto L_008c8ca2;
L_008c8b39:; BB(0x008c8b39);
    /* 008c8b39: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 008c8b3c: sub dword ptr [ebp - 0x20], ecx */ { u32 ad = (u32)(r_ebp+0xffffffe0u);  u32 a = R32(ad); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 008c8b3f: jmp 0x8c88ed */ goto L_008c88ed;
L_008c8b44:; BB(0x008c8b44);
    /* 008c8b44: cmp eax, 0x619 */ {  u32 a = r_eax; u32 b = 0x619u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c8b49: je 0x8c8b52 */ if (fZ) goto L_008c8b52;
L_008c8b4b:; BB(0x008c8b4b);
    /* 008c8b4b: cmp eax, 0x61a */ {  u32 a = r_eax; u32 b = 0x61au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c8b50: jne 0x8c8bac */ if (!fZ) goto L_008c8bac;
L_008c8b52:; BB(0x008c8b52);
    /* 008c8b52: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 008c8b55: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008c8b58: ja 0x8c8ca2 */ if ((!fC&&!fZ)) goto L_008c8ca2;
L_008c8b5e:; BB(0x008c8b5e);
    /* 008c8b5e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c8b5f: lea edx, [ebp - 0x1c] */ r_edx = (u32)(r_ebp+0xffffffe4u);
    /* 008c8b62: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c8b63: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c8b64: lea eax, [esi + 0x18] */ r_eax = (u32)(r_esi+0x18u);
    /* 008c8b67: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c8b68: mov ecx, dword ptr [esi + 8] */ r_ecx = R32((u32)(r_esi+0x8u));
    /* 008c8b6b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c8b6c: call edi */ { u32 t = r_edi; r_esp -= 4; W32(r_esp, 0x8c8b6eu); call_ind(t); }
    /* 008c8b6e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c8b70: je 0x8c8b77 */ if (fZ) goto L_008c8b77;
L_008c8b72:; BB(0x008c8b72);
    /* 008c8b72: cmp dword ptr [ebp - 0x1c], ebx */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c8b75: jne 0x8c8b8b */ if (!fZ) goto L_008c8b8b;
L_008c8b77:; BB(0x008c8b77);
    /* 008c8b77: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c8b78: push 0x60f */ { u32 v = 0x60fu; r_esp -= 4; W32(r_esp, v); }
    /* 008c8b7d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c8b7e: call 0x8c4490 */ r_esp -= 4; W32(r_esp, 0x8c8b83u); f_008c4490();
    /* 008c8b83: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008c8b85: je 0x8c8ca2 */ if (fZ) goto L_008c8ca2;
L_008c8b8b:; BB(0x008c8b8b);
    /* 008c8b8b: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 008c8b8e: sub dword ptr [ebp - 0x20], edx */ { u32 ad = (u32)(r_ebp+0xffffffe0u);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 008c8b91: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 008c8b94: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c8b95: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 008c8b98: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c8b99: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c8b9a: call 0x8c4490 */ r_esp -= 4; W32(r_esp, 0x8c8b9fu); f_008c4490();
    /* 008c8b9f: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008c8ba1: je 0x8c8ca2 */ if (fZ) goto L_008c8ca2;
L_008c8ba7:; BB(0x008c8ba7);
    /* 008c8ba7: jmp 0x8c88ed */ goto L_008c88ed;
L_008c8bac:; BB(0x008c8bac);
    /* 008c8bac: cmp ecx, 0x8b2 */ {  u32 a = r_ecx; u32 b = 0x8b2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c8bb2: jne 0x8c8be3 */ if (!fZ) goto L_008c8be3;
L_008c8bb4:; BB(0x008c8bb4);
    /* 008c8bb4: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c8bb6: jne 0x8c8bc3 */ if (!fZ) goto L_008c8bc3;
L_008c8bb8:; BB(0x008c8bb8);
    /* 008c8bb8: mov byte ptr [esi + 0x14], bl */ W8((u32)(r_esi+0x14u), (u8)r_ebx);
    /* 008c8bbb: inc dword ptr [esi + 0xc] */ { u32 ad = (u32)(r_esi+0xcu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008c8bbe: jmp 0x8c88ed */ goto L_008c88ed;
L_008c8bc3:; BB(0x008c8bc3);
    /* 008c8bc3: cmp eax, 0x610 */ {  u32 a = r_eax; u32 b = 0x610u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c8bc8: jne 0x8c88ed */ if (!fZ) goto L_008c88ed;
L_008c8bce:; BB(0x008c8bce);
    /* 008c8bce: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c8bcf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c8bd0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c8bd1: call 0x8c4490 */ r_esp -= 4; W32(r_esp, 0x8c8bd6u); f_008c4490();
    /* 008c8bd6: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008c8bd8: je 0x8c8ca2 */ if (fZ) goto L_008c8ca2;
L_008c8bde:; BB(0x008c8bde);
    /* 008c8bde: jmp 0x8c88ed */ goto L_008c88ed;
L_008c8be3:; BB(0x008c8be3);
    /* 008c8be3: cmp ecx, 0x8b0 */ {  u32 a = r_ecx; u32 b = 0x8b0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c8be9: jne 0x8c8c40 */ if (!fZ) goto L_008c8c40;
L_008c8beb:; BB(0x008c8beb);
    /* 008c8beb: mov edx, dword ptr [esi + 0xc] */ r_edx = R32((u32)(r_esi+0xcu));
    /* 008c8bee: cmp edx, dword ptr [ebp - 0x38] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffc8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c8bf1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c8bf2: je 0x8c8c13 */ if (fZ) goto L_008c8c13;
L_008c8bf4:; BB(0x008c8bf4);
    /* 008c8bf4: push 0x60f */ { u32 v = 0x60fu; r_esp -= 4; W32(r_esp, v); }
    /* 008c8bf9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c8bfa: call 0x8c4490 */ r_esp -= 4; W32(r_esp, 0x8c8bffu); f_008c4490();
    /* 008c8bff: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008c8c01: je 0x8c8ca2 */ if (fZ) goto L_008c8ca2;
L_008c8c07:; BB(0x008c8c07);
    /* 008c8c07: mov byte ptr [esi + 0x14], 1 */ W8((u32)(r_esi+0x14u), 0x1u);
    /* 008c8c0b: inc dword ptr [esi + 0xc] */ { u32 ad = (u32)(r_esi+0xcu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008c8c0e: jmp 0x8c88ed */ goto L_008c88ed;
L_008c8c13:; BB(0x008c8c13);
    /* 008c8c13: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c8c14: push 0x8b2 */ { u32 v = 0x8b2u; r_esp -= 4; W32(r_esp, v); }
    /* 008c8c19: mov ecx, esi */ r_ecx = r_esi;
    /* 008c8c1b: call 0x8c82f0 */ r_esp -= 4; W32(r_esp, 0x8c8c20u); f_008c82f0();
    /* 008c8c20: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008c8c22: jne 0x8c8c34 */ if (!fZ) goto L_008c8c34;
L_008c8c24:; BB(0x008c8c24);
    /* 008c8c24: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c8c25: push 0x60f */ { u32 v = 0x60fu; r_esp -= 4; W32(r_esp, v); }
    /* 008c8c2a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c8c2b: call 0x8c4490 */ r_esp -= 4; W32(r_esp, 0x8c8c30u); f_008c4490();
    /* 008c8c30: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008c8c32: je 0x8c8ca2 */ if (fZ) goto L_008c8ca2;
L_008c8c34:; BB(0x008c8c34);
    /* 008c8c34: mov byte ptr [esi + 0x14], 1 */ W8((u32)(r_esi+0x14u), 0x1u);
    /* 008c8c38: inc dword ptr [esi + 0xc] */ { u32 ad = (u32)(r_esi+0xcu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008c8c3b: jmp 0x8c88ed */ goto L_008c88ed;
L_008c8c40:; BB(0x008c8c40);
    /* 008c8c40: cmp ecx, 0x8b1 */ {  u32 a = r_ecx; u32 b = 0x8b1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c8c46: jne 0x8c88ed */ if (!fZ) goto L_008c88ed;
L_008c8c4c:; BB(0x008c8c4c);
    /* 008c8c4c: cmp eax, 0x610 */ {  u32 a = r_eax; u32 b = 0x610u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c8c51: jne 0x8c8c62 */ if (!fZ) goto L_008c8c62;
L_008c8c53:; BB(0x008c8c53);
    /* 008c8c53: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c8c54: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c8c55: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c8c56: call 0x8c4490 */ r_esp -= 4; W32(r_esp, 0x8c8c5bu); f_008c4490();
    /* 008c8c5b: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008c8c5d: je 0x8c8ca2 */ if (fZ) goto L_008c8ca2;
L_008c8c5f:; BB(0x008c8c5f);
    /* 008c8c5f: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
L_008c8c62:; BB(0x008c8c62);
    /* 008c8c62: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 008c8c65: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c8c66: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c8c67: push 0x8b2 */ { u32 v = 0x8b2u; r_esp -= 4; W32(r_esp, v); }
    /* 008c8c6c: mov ecx, esi */ r_ecx = r_esi;
    /* 008c8c6e: call 0x8c82f0 */ r_esp -= 4; W32(r_esp, 0x8c8c73u); f_008c82f0();
    /* 008c8c73: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008c8c75: jne 0x8c8c8c */ if (!fZ) goto L_008c8c8c;
L_008c8c77:; BB(0x008c8c77);
    /* 008c8c77: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c8c78: push 0x60f */ { u32 v = 0x60fu; r_esp -= 4; W32(r_esp, v); }
    /* 008c8c7d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c8c7e: call 0x8c4490 */ r_esp -= 4; W32(r_esp, 0x8c8c83u); f_008c4490();
    /* 008c8c83: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008c8c85: je 0x8c8ca2 */ if (fZ) goto L_008c8ca2;
L_008c8c87:; BB(0x008c8c87);
    /* 008c8c87: jmp 0x8c88ed */ goto L_008c88ed;
L_008c8c8c:; BB(0x008c8c8c);
    /* 008c8c8c: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 008c8c8f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c8c90: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 008c8c93: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c8c94: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c8c95: call 0x8c4490 */ r_esp -= 4; W32(r_esp, 0x8c8c9au); f_008c4490();
    /* 008c8c9a: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008c8c9c: jne 0x8c88ed */ if (!fZ) goto L_008c88ed;
L_008c8ca2:; BB(0x008c8ca2);
    /* 008c8ca2: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 008c8ca5: or edi, 0xffffffff */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 008c8ca8: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c8caa: je 0x8c8cb6 */ if (fZ) goto L_008c8cb6;
L_008c8cac:; BB(0x008c8cac);
    /* 008c8cac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c8cad: call dword ptr [0x8f8140] */ { u32 t = R32((u32)(0x8f8140u)); r_esp -= 4; W32(r_esp, 0x8c8cb3u); call_ind(t); }
    /* 008c8cb3: mov dword ptr [esi + 8], edi */ W32((u32)(r_esi+0x8u), r_edi);
L_008c8cb6:; BB(0x008c8cb6);
    /* 008c8cb6: push 0x7530 */ { u32 v = 0x7530u; r_esp -= 4; W32(r_esp, v); }
    /* 008c8cbb: mov ecx, dword ptr [esi + 0x10] */ r_ecx = R32((u32)(r_esi+0x10u));
    /* 008c8cbe: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c8cbf: call dword ptr [0x8f8128] */ { u32 t = R32((u32)(0x8f8128u)); r_esp -= 4; W32(r_esp, 0x8c8cc5u); call_ind(t); }
    /* 008c8cc5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c8cc7: jne 0x8c8cec */ if (!fZ) goto L_008c8cec;
L_008c8cc9:; BB(0x008c8cc9);
    /* 008c8cc9: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 008c8ccc: cmp eax, 0x610 */ {  u32 a = r_eax; u32 b = 0x610u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c8cd1: je 0x8c8cec */ if (fZ) goto L_008c8cec;
L_008c8cd3:; BB(0x008c8cd3);
    /* 008c8cd3: cmp eax, 0x60f */ {  u32 a = r_eax; u32 b = 0x60fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c8cd8: je 0x8c8cec */ if (fZ) goto L_008c8cec;
L_008c8cda:; BB(0x008c8cda);
    /* 008c8cda: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c8cdb: push 0x610 */ { u32 v = 0x610u; r_esp -= 4; W32(r_esp, v); }
    /* 008c8ce0: push 0x8b1 */ { u32 v = 0x8b1u; r_esp -= 4; W32(r_esp, v); }
    /* 008c8ce5: mov ecx, esi */ r_ecx = r_esi;
    /* 008c8ce7: call 0x8c82f0 */ r_esp -= 4; W32(r_esp, 0x8c8cecu); f_008c82f0();
L_008c8cec:; BB(0x008c8cec);
    /* 008c8cec: mov dword ptr [ebp - 4], edi */ W32((u32)(r_ebp+0xfffffffcu), r_edi);
    /* 008c8cef: jmp 0x8c8d0c */ goto L_008c8d0c;
L_008c8d0c:; BB(0x008c8d0c);
    /* 008c8d0c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c8d0e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 008c8d11: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 008c8d18: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c8d19: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c8d1a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008c8d1b: mov esp, ebp */ r_esp = r_ebp;
    /* 008c8d1d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008c8d1e: ret 4 */ FN_RET(0x008c88b0); r_esp += 8; return;
}

void f_008c8cf1(void)
{
    FN_ENTER(0x008c8cf1);
    /* 008c8cf1: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 008c8cf4: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 008c8cf6: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 008c8cf9: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 008c8cfc: mov eax, 1 */ r_eax = 0x1u;
    /* 008c8d01: ret  */ FN_RET(0x008c8cf1); r_esp += 4; return;
}

void f_008c8d02(void)
{
    FN_ENTER(0x008c8d02);
    /* 008c8d02: mov esp, dword ptr [ebp - 0x18] */ r_esp = R32((u32)(r_ebp+0xffffffe8u));
    /* 008c8d05: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 008c8d0c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c8d0e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 008c8d11: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 008c8d18: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c8d19: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c8d1a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008c8d1b: mov esp, ebp */ r_esp = r_ebp;
    /* 008c8d1d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008c8d1e: ret 4 */ FN_RET(0x008c8d02); r_esp += 8; return;
}

void f_008c8d30(void) /* sub_8C8D30 */
{
    FN_ENTER(0x008c8d30);
    /* 008c8d30: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 008c8d34: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c8d35: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008c8d36: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c8d37: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c8d38: lea esi, [edx + 8] */ r_esi = (u32)(r_edx+0x8u);
    /* 008c8d3b: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 008c8d3d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008c8d3f: mov ecx, esi */ r_ecx = r_esi;
L_008c8d41:; BB(0x008c8d41);
    /* 008c8d41: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 008c8d43: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008c8d44: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008c8d47: cmp eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008c8d4c: jb 0x8c8d41 */ if (fC) goto L_008c8d41;
L_008c8d4e:; BB(0x008c8d4e);
    /* 008c8d4e: mov ebp, dword ptr [esp + 0x1c] */ r_ebp = R32((u32)(r_esp+0x1cu));
    /* 008c8d52: mov dword ptr [edx], edi */ W32((u32)(r_edx), r_edi);
    /* 008c8d54: mov dword ptr [edx + 4], edi */ W32((u32)(r_edx+0x4u), r_edi);
    /* 008c8d57: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008c8d59: lea ecx, [esi + 8] */ r_ecx = (u32)(r_esi+0x8u);
    /* 008c8d5c: mov dword ptr [esp + 0x14], 0x40 */ W32((u32)(r_esp+0x14u), 0x40u);
L_008c8d64:; BB(0x008c8d64);
    /* 008c8d64: mov edx, dword ptr [ecx - 8] */ r_edx = R32((u32)(r_ecx+0xfffffff8u));
    /* 008c8d67: mov bl, byte ptr [eax + ebp] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_eax+r_ebp))) & 0xffu);
    /* 008c8d6a: add ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008c8d6c: add ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008c8d6e: and ebx, 0xff */ {  u32 a = r_ebx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 008c8d74: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008c8d75: mov edi, ebx */ r_edi = r_ebx;
    /* 008c8d77: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 008c8d7b: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c8d7d: jne 0x8c8d81 */ if (!fZ) goto L_008c8d81;
L_008c8d7f:; BB(0x008c8d7f);
    /* 008c8d7f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_008c8d81:; BB(0x008c8d81);
    /* 008c8d81: mov ebx, dword ptr [esi + edi*4] */ r_ebx = R32((u32)(r_esi+r_edi*4));
    /* 008c8d84: mov dword ptr [ecx - 8], ebx */ W32((u32)(r_ecx+0xfffffff8u), r_ebx);
    /* 008c8d87: mov dword ptr [esi + edi*4], edx */ W32((u32)(r_esi+r_edi*4), r_edx);
    /* 008c8d8a: mov edx, dword ptr [ecx - 4] */ r_edx = R32((u32)(r_ecx+0xfffffffcu));
    /* 008c8d8d: mov bl, byte ptr [eax + ebp] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_eax+r_ebp))) & 0xffu);
    /* 008c8d90: add ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008c8d92: add ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008c8d94: and ebx, 0xff */ {  u32 a = r_ebx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 008c8d9a: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008c8d9b: mov edi, ebx */ r_edi = r_ebx;
    /* 008c8d9d: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 008c8da1: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c8da3: jne 0x8c8da7 */ if (!fZ) goto L_008c8da7;
L_008c8da5:; BB(0x008c8da5);
    /* 008c8da5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_008c8da7:; BB(0x008c8da7);
    /* 008c8da7: mov ebx, dword ptr [esi + edi*4] */ r_ebx = R32((u32)(r_esi+r_edi*4));
    /* 008c8daa: mov dword ptr [ecx - 4], ebx */ W32((u32)(r_ecx+0xfffffffcu), r_ebx);
    /* 008c8dad: mov dword ptr [esi + edi*4], edx */ W32((u32)(r_esi+r_edi*4), r_edx);
    /* 008c8db0: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 008c8db2: mov bl, byte ptr [eax + ebp] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_eax+r_ebp))) & 0xffu);
    /* 008c8db5: add ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008c8db7: add ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008c8db9: and ebx, 0xff */ {  u32 a = r_ebx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 008c8dbf: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008c8dc0: mov edi, ebx */ r_edi = r_ebx;
    /* 008c8dc2: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 008c8dc6: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c8dc8: jne 0x8c8dcc */ if (!fZ) goto L_008c8dcc;
L_008c8dca:; BB(0x008c8dca);
    /* 008c8dca: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_008c8dcc:; BB(0x008c8dcc);
    /* 008c8dcc: mov ebx, dword ptr [esi + edi*4] */ r_ebx = R32((u32)(r_esi+r_edi*4));
    /* 008c8dcf: mov dword ptr [ecx], ebx */ W32((u32)(r_ecx), r_ebx);
    /* 008c8dd1: mov dword ptr [esi + edi*4], edx */ W32((u32)(r_esi+r_edi*4), r_edx);
    /* 008c8dd4: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 008c8dd7: mov bl, byte ptr [eax + ebp] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_eax+r_ebp))) & 0xffu);
    /* 008c8dda: add ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008c8ddc: add ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008c8dde: and ebx, 0xff */ {  u32 a = r_ebx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 008c8de4: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008c8de5: mov edi, ebx */ r_edi = r_ebx;
    /* 008c8de7: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 008c8deb: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c8ded: jne 0x8c8df1 */ if (!fZ) goto L_008c8df1;
L_008c8def:; BB(0x008c8def);
    /* 008c8def: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_008c8df1:; BB(0x008c8df1);
    /* 008c8df1: mov ebx, dword ptr [esi + edi*4] */ r_ebx = R32((u32)(r_esi+r_edi*4));
    /* 008c8df4: mov dword ptr [ecx + 4], ebx */ W32((u32)(r_ecx+0x4u), r_ebx);
    /* 008c8df7: mov dword ptr [esi + edi*4], edx */ W32((u32)(r_esi+r_edi*4), r_edx);
    /* 008c8dfa: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 008c8dfe: add ecx, 0x10 */ {  u32 a = r_ecx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fC = (r < a); }
    /* 008c8e01: dec edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008c8e02: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 008c8e06: jne 0x8c8d64 */ if (!fZ) goto L_008c8d64;
L_008c8e0c:; BB(0x008c8e0c);
    /* 008c8e0c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c8e0d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c8e0e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008c8e0f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008c8e10: ret  */ FN_RET(0x008c8d30); r_esp += 4; return;
}

void f_008c8e20(void) /* sub_8C8E20 */
{
    FN_ENTER(0x008c8e20);
    /* 008c8e20: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 008c8e24: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 008c8e28: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c8e29: mov ecx, edx */ r_ecx = r_edx;
    /* 008c8e2b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008c8e2c: mov ebp, dword ptr [eax + 4] */ r_ebp = R32((u32)(r_eax+0x4u));
    /* 008c8e2f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c8e30: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c8e31: mov edi, dword ptr [eax] */ r_edi = R32((u32)(r_eax));
    /* 008c8e33: shr ecx, 3 */ { u32 c = (3u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r; fZ = (r == 0); } }
    /* 008c8e36: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
    /* 008c8e3a: je 0x8c93bd */ if (fZ) goto L_008c93bd;
L_008c8e40:; BB(0x008c8e40);
    /* 008c8e40: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008c8e41: mov esi, dword ptr [esp + 0x1c] */ r_esi = R32((u32)(r_esp+0x1cu));
    /* 008c8e45: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 008c8e4b: mov ecx, dword ptr [eax + edi*4 + 8] */ r_ecx = R32((u32)(r_eax+r_edi*4+0x8u));
    /* 008c8e4f: add ebp, ecx */ {  u32 a = r_ebp; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008c8e51: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 008c8e57: mov edx, dword ptr [eax + ebp*4 + 8] */ r_edx = R32((u32)(r_eax+r_ebp*4+0x8u));
    /* 008c8e5b: mov dword ptr [eax + edi*4 + 8], edx */ W32((u32)(r_eax+r_edi*4+0x8u), r_edx);
    /* 008c8e5f: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008c8e61: and edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 008c8e67: mov dword ptr [eax + ebp*4 + 8], ecx */ W32((u32)(r_eax+r_ebp*4+0x8u), r_ecx);
    /* 008c8e6b: mov bl, byte ptr [esi] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_esi))) & 0xffu);
    /* 008c8e6d: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 008c8e71: mov dl, byte ptr [eax + edx*4 + 8] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax+r_edx*4+0x8u))) & 0xffu);
    /* 008c8e75: xor dl, bl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_ebx; u32 r = (a ^ b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c8e77: mov byte ptr [ecx], dl */ W8((u32)(r_ecx), (u8)r_edx);
    /* 008c8e79: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008c8e7a: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008c8e7b: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008c8e7c: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 008c8e82: mov edx, dword ptr [eax + edi*4 + 8] */ r_edx = R32((u32)(r_eax+r_edi*4+0x8u));
    /* 008c8e86: add ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008c8e88: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 008c8e8e: mov ebx, dword ptr [eax + ebp*4 + 8] */ r_ebx = R32((u32)(r_eax+r_ebp*4+0x8u));
    /* 008c8e92: mov dword ptr [eax + edi*4 + 8], ebx */ W32((u32)(r_eax+r_edi*4+0x8u), r_ebx);
    /* 008c8e96: add ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008c8e98: and ebx, 0xff */ {  u32 a = r_ebx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 008c8e9e: mov dword ptr [eax + ebp*4 + 8], edx */ W32((u32)(r_eax+r_ebp*4+0x8u), r_edx);
    /* 008c8ea2: mov dl, byte ptr [eax + ebx*4 + 8] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax+r_ebx*4+0x8u))) & 0xffu);
    /* 008c8ea6: mov bl, byte ptr [esi] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_esi))) & 0xffu);
    /* 008c8ea8: xor dl, bl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_ebx; u32 r = (a ^ b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c8eaa: mov byte ptr [ecx], dl */ W8((u32)(r_ecx), (u8)r_edx);
    /* 008c8eac: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008c8ead: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008c8eae: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008c8eaf: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 008c8eb5: mov edx, dword ptr [eax + edi*4 + 8] */ r_edx = R32((u32)(r_eax+r_edi*4+0x8u));
    /* 008c8eb9: add ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008c8ebb: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 008c8ec1: mov ebx, dword ptr [eax + ebp*4 + 8] */ r_ebx = R32((u32)(r_eax+r_ebp*4+0x8u));
    /* 008c8ec5: mov dword ptr [eax + edi*4 + 8], ebx */ W32((u32)(r_eax+r_edi*4+0x8u), r_ebx);
    /* 008c8ec9: add ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008c8ecb: and ebx, 0xff */ {  u32 a = r_ebx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 008c8ed1: mov dword ptr [eax + ebp*4 + 8], edx */ W32((u32)(r_eax+r_ebp*4+0x8u), r_edx);
    /* 008c8ed5: mov dl, byte ptr [eax + ebx*4 + 8] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax+r_ebx*4+0x8u))) & 0xffu);
    /* 008c8ed9: mov bl, byte ptr [esi] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_esi))) & 0xffu);
    /* 008c8edb: xor dl, bl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_ebx; u32 r = (a ^ b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c8edd: mov byte ptr [ecx], dl */ W8((u32)(r_ecx), (u8)r_edx);
    /* 008c8edf: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008c8ee0: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008c8ee1: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008c8ee2: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 008c8ee8: mov edx, dword ptr [eax + edi*4 + 8] */ r_edx = R32((u32)(r_eax+r_edi*4+0x8u));
    /* 008c8eec: add ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008c8eee: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 008c8ef4: mov ebx, dword ptr [eax + ebp*4 + 8] */ r_ebx = R32((u32)(r_eax+r_ebp*4+0x8u));
    /* 008c8ef8: mov dword ptr [eax + edi*4 + 8], ebx */ W32((u32)(r_eax+r_edi*4+0x8u), r_ebx);
    /* 008c8efc: add ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008c8efe: and ebx, 0xff */ {  u32 a = r_ebx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 008c8f04: mov dword ptr [eax + ebp*4 + 8], edx */ W32((u32)(r_eax+r_ebp*4+0x8u), r_edx);
    /* 008c8f08: mov dl, byte ptr [eax + ebx*4 + 8] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax+r_ebx*4+0x8u))) & 0xffu);
    /* 008c8f0c: mov bl, byte ptr [esi] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_esi))) & 0xffu);
    /* 008c8f0e: xor dl, bl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_ebx; u32 r = (a ^ b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c8f10: mov byte ptr [ecx], dl */ W8((u32)(r_ecx), (u8)r_edx);
    /* 008c8f12: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008c8f13: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008c8f14: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008c8f15: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 008c8f1b: mov edx, dword ptr [eax + edi*4 + 8] */ r_edx = R32((u32)(r_eax+r_edi*4+0x8u));
    /* 008c8f1f: add ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008c8f21: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 008c8f27: mov ebx, dword ptr [eax + ebp*4 + 8] */ r_ebx = R32((u32)(r_eax+r_ebp*4+0x8u));
    /* 008c8f2b: mov dword ptr [eax + edi*4 + 8], ebx */ W32((u32)(r_eax+r_edi*4+0x8u), r_ebx);
    /* 008c8f2f: add ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008c8f31: and ebx, 0xff */ {  u32 a = r_ebx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 008c8f37: mov dword ptr [eax + ebp*4 + 8], edx */ W32((u32)(r_eax+r_ebp*4+0x8u), r_edx);
    /* 008c8f3b: mov dl, byte ptr [eax + ebx*4 + 8] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax+r_ebx*4+0x8u))) & 0xffu);
    /* 008c8f3f: mov bl, byte ptr [esi] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_esi))) & 0xffu);
    /* 008c8f41: xor dl, bl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_ebx; u32 r = (a ^ b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c8f43: mov byte ptr [ecx], dl */ W8((u32)(r_ecx), (u8)r_edx);
    /* 008c8f45: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008c8f46: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008c8f47: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008c8f48: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 008c8f4e: mov edx, dword ptr [eax + edi*4 + 8] */ r_edx = R32((u32)(r_eax+r_edi*4+0x8u));
    /* 008c8f52: add ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008c8f54: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 008c8f5a: mov ebx, dword ptr [eax + ebp*4 + 8] */ r_ebx = R32((u32)(r_eax+r_ebp*4+0x8u));
    /* 008c8f5e: mov dword ptr [eax + edi*4 + 8], ebx */ W32((u32)(r_eax+r_edi*4+0x8u), r_ebx);
    /* 008c8f62: add ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008c8f64: and ebx, 0xff */ {  u32 a = r_ebx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 008c8f6a: mov dword ptr [eax + ebp*4 + 8], edx */ W32((u32)(r_eax+r_ebp*4+0x8u), r_edx);
    /* 008c8f6e: mov dl, byte ptr [eax + ebx*4 + 8] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax+r_ebx*4+0x8u))) & 0xffu);
    /* 008c8f72: mov bl, byte ptr [esi] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_esi))) & 0xffu);
    /* 008c8f74: xor dl, bl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_ebx; u32 r = (a ^ b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c8f76: mov byte ptr [ecx], dl */ W8((u32)(r_ecx), (u8)r_edx);
    /* 008c8f78: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008c8f79: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008c8f7a: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008c8f7b: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 008c8f81: mov edx, dword ptr [eax + edi*4 + 8] */ r_edx = R32((u32)(r_eax+r_edi*4+0x8u));
    /* 008c8f85: add ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008c8f87: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 008c8f8d: mov ebx, dword ptr [eax + ebp*4 + 8] */ r_ebx = R32((u32)(r_eax+r_ebp*4+0x8u));
    /* 008c8f91: mov dword ptr [eax + edi*4 + 8], ebx */ W32((u32)(r_eax+r_edi*4+0x8u), r_ebx);
    /* 008c8f95: add ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008c8f97: and ebx, 0xff */ {  u32 a = r_ebx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 008c8f9d: mov dword ptr [eax + ebp*4 + 8], edx */ W32((u32)(r_eax+r_ebp*4+0x8u), r_edx);
    /* 008c8fa1: mov dl, byte ptr [eax + ebx*4 + 8] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax+r_ebx*4+0x8u))) & 0xffu);
    /* 008c8fa5: mov bl, byte ptr [esi] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_esi))) & 0xffu);
    /* 008c8fa7: xor dl, bl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_ebx; u32 r = (a ^ b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c8fa9: mov byte ptr [ecx], dl */ W8((u32)(r_ecx), (u8)r_edx);
    /* 008c8fab: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008c8fac: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008c8fad: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008c8fae: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 008c8fb4: mov edx, dword ptr [eax + edi*4 + 8] */ r_edx = R32((u32)(r_eax+r_edi*4+0x8u));
    /* 008c8fb8: add ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008c8fba: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 008c8fc0: mov ebx, dword ptr [eax + ebp*4 + 8] */ r_ebx = R32((u32)(r_eax+r_ebp*4+0x8u));
    /* 008c8fc4: mov dword ptr [eax + edi*4 + 8], ebx */ W32((u32)(r_eax+r_edi*4+0x8u), r_ebx);
    /* 008c8fc8: add ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008c8fca: and ebx, 0xff */ {  u32 a = r_ebx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 008c8fd0: mov dword ptr [eax + ebp*4 + 8], edx */ W32((u32)(r_eax+r_ebp*4+0x8u), r_edx);
    /* 008c8fd4: mov dl, byte ptr [eax + ebx*4 + 8] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax+r_ebx*4+0x8u))) & 0xffu);
    /* 008c8fd8: mov bl, byte ptr [esi] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_esi))) & 0xffu);
    /* 008c8fda: xor dl, bl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_ebx; u32 r = (a ^ b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c8fdc: mov byte ptr [ecx], dl */ W8((u32)(r_ecx), (u8)r_edx);
    /* 008c8fde: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 008c8fe2: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008c8fe3: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008c8fe4: dec edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 008c8fe5: je 0x8c9196 */ if (fZ) goto L_008c9196;
L_008c8feb:; BB(0x008c8feb);
    /* 008c8feb: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
L_008c8fef:; BB(0x008c8fef);
    /* 008c8fef: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008c8ff0: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 008c8ff6: mov edx, dword ptr [eax + edi*4 + 8] */ r_edx = R32((u32)(r_eax+r_edi*4+0x8u));
    /* 008c8ffa: add ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008c8ffc: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 008c9002: mov ebx, dword ptr [eax + ebp*4 + 8] */ r_ebx = R32((u32)(r_eax+r_ebp*4+0x8u));
    /* 008c9006: mov dword ptr [eax + edi*4 + 8], ebx */ W32((u32)(r_eax+r_edi*4+0x8u), r_ebx);
    /* 008c900a: add ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008c900c: and ebx, 0xff */ {  u32 a = r_ebx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 008c9012: mov dword ptr [eax + ebp*4 + 8], edx */ W32((u32)(r_eax+r_ebp*4+0x8u), r_edx);
    /* 008c9016: mov dl, byte ptr [eax + ebx*4 + 8] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax+r_ebx*4+0x8u))) & 0xffu);
    /* 008c901a: mov bl, byte ptr [esi] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_esi))) & 0xffu);
    /* 008c901c: xor dl, bl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_ebx; u32 r = (a ^ b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c901e: mov byte ptr [ecx], dl */ W8((u32)(r_ecx), (u8)r_edx);
    /* 008c9020: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008c9021: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008c9022: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008c9023: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 008c9029: mov edx, dword ptr [eax + edi*4 + 8] */ r_edx = R32((u32)(r_eax+r_edi*4+0x8u));
    /* 008c902d: add ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008c902f: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 008c9035: mov ebx, dword ptr [eax + ebp*4 + 8] */ r_ebx = R32((u32)(r_eax+r_ebp*4+0x8u));
    /* 008c9039: mov dword ptr [eax + edi*4 + 8], ebx */ W32((u32)(r_eax+r_edi*4+0x8u), r_ebx);
    /* 008c903d: add ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008c903f: and ebx, 0xff */ {  u32 a = r_ebx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 008c9045: mov dword ptr [eax + ebp*4 + 8], edx */ W32((u32)(r_eax+r_ebp*4+0x8u), r_edx);
    /* 008c9049: mov dl, byte ptr [eax + ebx*4 + 8] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax+r_ebx*4+0x8u))) & 0xffu);
    /* 008c904d: mov bl, byte ptr [esi] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_esi))) & 0xffu);
    /* 008c904f: xor dl, bl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_ebx; u32 r = (a ^ b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c9051: mov byte ptr [ecx], dl */ W8((u32)(r_ecx), (u8)r_edx);
    /* 008c9053: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008c9054: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008c9055: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008c9056: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 008c905c: mov edx, dword ptr [eax + edi*4 + 8] */ r_edx = R32((u32)(r_eax+r_edi*4+0x8u));
    /* 008c9060: add ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008c9062: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 008c9068: mov ebx, dword ptr [eax + ebp*4 + 8] */ r_ebx = R32((u32)(r_eax+r_ebp*4+0x8u));
    /* 008c906c: mov dword ptr [eax + edi*4 + 8], ebx */ W32((u32)(r_eax+r_edi*4+0x8u), r_ebx);
    /* 008c9070: add ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008c9072: and ebx, 0xff */ {  u32 a = r_ebx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 008c9078: mov dword ptr [eax + ebp*4 + 8], edx */ W32((u32)(r_eax+r_ebp*4+0x8u), r_edx);
    /* 008c907c: mov dl, byte ptr [eax + ebx*4 + 8] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax+r_ebx*4+0x8u))) & 0xffu);
    /* 008c9080: mov bl, byte ptr [esi] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_esi))) & 0xffu);
    /* 008c9082: xor dl, bl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_ebx; u32 r = (a ^ b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c9084: mov byte ptr [ecx], dl */ W8((u32)(r_ecx), (u8)r_edx);
    /* 008c9086: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008c9087: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008c9088: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008c9089: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 008c908f: mov edx, dword ptr [eax + edi*4 + 8] */ r_edx = R32((u32)(r_eax+r_edi*4+0x8u));
    /* 008c9093: add ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008c9095: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 008c909b: mov ebx, dword ptr [eax + ebp*4 + 8] */ r_ebx = R32((u32)(r_eax+r_ebp*4+0x8u));
    /* 008c909f: mov dword ptr [eax + edi*4 + 8], ebx */ W32((u32)(r_eax+r_edi*4+0x8u), r_ebx);
    /* 008c90a3: add ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008c90a5: and ebx, 0xff */ {  u32 a = r_ebx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 008c90ab: mov dword ptr [eax + ebp*4 + 8], edx */ W32((u32)(r_eax+r_ebp*4+0x8u), r_edx);
    /* 008c90af: mov dl, byte ptr [eax + ebx*4 + 8] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax+r_ebx*4+0x8u))) & 0xffu);
    /* 008c90b3: mov bl, byte ptr [esi] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_esi))) & 0xffu);
    /* 008c90b5: xor dl, bl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_ebx; u32 r = (a ^ b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c90b7: mov byte ptr [ecx], dl */ W8((u32)(r_ecx), (u8)r_edx);
    /* 008c90b9: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008c90ba: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008c90bb: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008c90bc: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 008c90c2: mov edx, dword ptr [eax + edi*4 + 8] */ r_edx = R32((u32)(r_eax+r_edi*4+0x8u));
    /* 008c90c6: add ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008c90c8: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 008c90ce: mov ebx, dword ptr [eax + ebp*4 + 8] */ r_ebx = R32((u32)(r_eax+r_ebp*4+0x8u));
    /* 008c90d2: mov dword ptr [eax + edi*4 + 8], ebx */ W32((u32)(r_eax+r_edi*4+0x8u), r_ebx);
    /* 008c90d6: add ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008c90d8: and ebx, 0xff */ {  u32 a = r_ebx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 008c90de: mov dword ptr [eax + ebp*4 + 8], edx */ W32((u32)(r_eax+r_ebp*4+0x8u), r_edx);
    /* 008c90e2: mov dl, byte ptr [eax + ebx*4 + 8] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax+r_ebx*4+0x8u))) & 0xffu);
    /* 008c90e6: mov bl, byte ptr [esi] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_esi))) & 0xffu);
    /* 008c90e8: xor dl, bl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_ebx; u32 r = (a ^ b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c90ea: mov byte ptr [ecx], dl */ W8((u32)(r_ecx), (u8)r_edx);
    /* 008c90ec: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008c90ed: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008c90ee: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008c90ef: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 008c90f5: mov edx, dword ptr [eax + edi*4 + 8] */ r_edx = R32((u32)(r_eax+r_edi*4+0x8u));
    /* 008c90f9: add ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008c90fb: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 008c9101: mov ebx, dword ptr [eax + ebp*4 + 8] */ r_ebx = R32((u32)(r_eax+r_ebp*4+0x8u));
    /* 008c9105: mov dword ptr [eax + edi*4 + 8], ebx */ W32((u32)(r_eax+r_edi*4+0x8u), r_ebx);
    /* 008c9109: add ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008c910b: and ebx, 0xff */ {  u32 a = r_ebx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 008c9111: mov dword ptr [eax + ebp*4 + 8], edx */ W32((u32)(r_eax+r_ebp*4+0x8u), r_edx);
    /* 008c9115: mov dl, byte ptr [eax + ebx*4 + 8] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax+r_ebx*4+0x8u))) & 0xffu);
    /* 008c9119: mov bl, byte ptr [esi] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_esi))) & 0xffu);
    /* 008c911b: xor dl, bl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_ebx; u32 r = (a ^ b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c911d: mov byte ptr [ecx], dl */ W8((u32)(r_ecx), (u8)r_edx);
    /* 008c911f: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008c9120: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008c9121: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008c9122: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 008c9128: mov edx, dword ptr [eax + edi*4 + 8] */ r_edx = R32((u32)(r_eax+r_edi*4+0x8u));
    /* 008c912c: add ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008c912e: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 008c9134: mov ebx, dword ptr [eax + ebp*4 + 8] */ r_ebx = R32((u32)(r_eax+r_ebp*4+0x8u));
    /* 008c9138: mov dword ptr [eax + edi*4 + 8], ebx */ W32((u32)(r_eax+r_edi*4+0x8u), r_ebx);
    /* 008c913c: add ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008c913e: and ebx, 0xff */ {  u32 a = r_ebx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 008c9144: mov dword ptr [eax + ebp*4 + 8], edx */ W32((u32)(r_eax+r_ebp*4+0x8u), r_edx);
    /* 008c9148: mov dl, byte ptr [eax + ebx*4 + 8] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax+r_ebx*4+0x8u))) & 0xffu);
    /* 008c914c: mov bl, byte ptr [esi] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_esi))) & 0xffu);
    /* 008c914e: xor dl, bl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_ebx; u32 r = (a ^ b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c9150: mov byte ptr [ecx], dl */ W8((u32)(r_ecx), (u8)r_edx);
    /* 008c9152: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008c9153: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008c9154: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008c9155: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 008c915b: mov edx, dword ptr [eax + edi*4 + 8] */ r_edx = R32((u32)(r_eax+r_edi*4+0x8u));
    /* 008c915f: add ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008c9161: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 008c9167: mov ebx, dword ptr [eax + ebp*4 + 8] */ r_ebx = R32((u32)(r_eax+r_ebp*4+0x8u));
    /* 008c916b: mov dword ptr [eax + edi*4 + 8], ebx */ W32((u32)(r_eax+r_edi*4+0x8u), r_ebx);
    /* 008c916f: add ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008c9171: and ebx, 0xff */ {  u32 a = r_ebx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 008c9177: mov dword ptr [eax + ebp*4 + 8], edx */ W32((u32)(r_eax+r_ebp*4+0x8u), r_edx);
    /* 008c917b: mov dl, byte ptr [eax + ebx*4 + 8] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax+r_ebx*4+0x8u))) & 0xffu);
    /* 008c917f: mov bl, byte ptr [esi] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_esi))) & 0xffu);
    /* 008c9181: xor dl, bl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_ebx; u32 r = (a ^ b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c9183: mov byte ptr [ecx], dl */ W8((u32)(r_ecx), (u8)r_edx);
    /* 008c9185: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 008c9189: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008c918a: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008c918b: dec edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 008c918c: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 008c9190: jne 0x8c8fef */ if (!fZ) goto L_008c8fef;
L_008c9196:; BB(0x008c9196);
    /* 008c9196: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
L_008c919a:; BB(0x008c919a);
    /* 008c919a: and edx, 7 */ {  u32 a = r_edx; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c919d: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 008c91a1: je 0x8c93b3 */ if (fZ) goto L_008c93b3;
L_008c91a7:; BB(0x008c91a7);
    /* 008c91a7: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008c91a8: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 008c91ae: mov edx, dword ptr [eax + edi*4 + 8] */ r_edx = R32((u32)(r_eax+r_edi*4+0x8u));
    /* 008c91b2: add ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008c91b4: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 008c91ba: mov ebx, dword ptr [eax + ebp*4 + 8] */ r_ebx = R32((u32)(r_eax+r_ebp*4+0x8u));
    /* 008c91be: mov dword ptr [eax + edi*4 + 8], ebx */ W32((u32)(r_eax+r_edi*4+0x8u), r_ebx);
    /* 008c91c2: add ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008c91c4: and ebx, 0xff */ {  u32 a = r_ebx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 008c91ca: mov dword ptr [eax + ebp*4 + 8], edx */ W32((u32)(r_eax+r_ebp*4+0x8u), r_edx);
    /* 008c91ce: mov dl, byte ptr [eax + ebx*4 + 8] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax+r_ebx*4+0x8u))) & 0xffu);
    /* 008c91d2: mov bl, byte ptr [esi] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_esi))) & 0xffu);
    /* 008c91d4: xor dl, bl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_ebx; u32 r = (a ^ b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fC = 0; }
    /* 008c91d6: mov byte ptr [ecx], dl */ W8((u32)(r_ecx), (u8)r_edx);
    /* 008c91d8: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 008c91dc: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008c91dd: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008c91de: dec edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008c91df: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 008c91e3: je 0x8c93b3 */ if (fZ) goto L_008c93b3;
L_008c91e9:; BB(0x008c91e9);
    /* 008c91e9: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008c91ea: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 008c91f0: mov edx, dword ptr [eax + edi*4 + 8] */ r_edx = R32((u32)(r_eax+r_edi*4+0x8u));
    /* 008c91f4: add ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008c91f6: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 008c91fc: mov ebx, dword ptr [eax + ebp*4 + 8] */ r_ebx = R32((u32)(r_eax+r_ebp*4+0x8u));
    /* 008c9200: mov dword ptr [eax + edi*4 + 8], ebx */ W32((u32)(r_eax+r_edi*4+0x8u), r_ebx);
    /* 008c9204: add ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008c9206: and ebx, 0xff */ {  u32 a = r_ebx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 008c920c: mov dword ptr [eax + ebp*4 + 8], edx */ W32((u32)(r_eax+r_ebp*4+0x8u), r_edx);
    /* 008c9210: mov dl, byte ptr [eax + ebx*4 + 8] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax+r_ebx*4+0x8u))) & 0xffu);
    /* 008c9214: mov bl, byte ptr [esi] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_esi))) & 0xffu);
    /* 008c9216: xor dl, bl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_ebx; u32 r = (a ^ b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fC = 0; }
    /* 008c9218: mov byte ptr [ecx], dl */ W8((u32)(r_ecx), (u8)r_edx);
    /* 008c921a: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 008c921e: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008c921f: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008c9220: dec edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008c9221: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 008c9225: je 0x8c93b3 */ if (fZ) goto L_008c93b3;
L_008c922b:; BB(0x008c922b);
    /* 008c922b: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008c922c: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 008c9232: mov edx, dword ptr [eax + edi*4 + 8] */ r_edx = R32((u32)(r_eax+r_edi*4+0x8u));
    /* 008c9236: add ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008c9238: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 008c923e: mov ebx, dword ptr [eax + ebp*4 + 8] */ r_ebx = R32((u32)(r_eax+r_ebp*4+0x8u));
    /* 008c9242: mov dword ptr [eax + edi*4 + 8], ebx */ W32((u32)(r_eax+r_edi*4+0x8u), r_ebx);
    /* 008c9246: add ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008c9248: and ebx, 0xff */ {  u32 a = r_ebx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 008c924e: mov dword ptr [eax + ebp*4 + 8], edx */ W32((u32)(r_eax+r_ebp*4+0x8u), r_edx);
    /* 008c9252: mov dl, byte ptr [eax + ebx*4 + 8] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax+r_ebx*4+0x8u))) & 0xffu);
    /* 008c9256: mov bl, byte ptr [esi] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_esi))) & 0xffu);
    /* 008c9258: xor dl, bl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_ebx; u32 r = (a ^ b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fC = 0; }
    /* 008c925a: mov byte ptr [ecx], dl */ W8((u32)(r_ecx), (u8)r_edx);
    /* 008c925c: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 008c9260: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008c9261: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008c9262: dec edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008c9263: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 008c9267: je 0x8c93b3 */ if (fZ) goto L_008c93b3;
L_008c926d:; BB(0x008c926d);
    /* 008c926d: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008c926e: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 008c9274: mov edx, dword ptr [eax + edi*4 + 8] */ r_edx = R32((u32)(r_eax+r_edi*4+0x8u));
    /* 008c9278: add ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008c927a: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 008c9280: mov ebx, dword ptr [eax + ebp*4 + 8] */ r_ebx = R32((u32)(r_eax+r_ebp*4+0x8u));
    /* 008c9284: mov dword ptr [eax + edi*4 + 8], ebx */ W32((u32)(r_eax+r_edi*4+0x8u), r_ebx);
    /* 008c9288: add ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008c928a: and ebx, 0xff */ {  u32 a = r_ebx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 008c9290: mov dword ptr [eax + ebp*4 + 8], edx */ W32((u32)(r_eax+r_ebp*4+0x8u), r_edx);
    /* 008c9294: mov dl, byte ptr [eax + ebx*4 + 8] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax+r_ebx*4+0x8u))) & 0xffu);
    /* 008c9298: mov bl, byte ptr [esi] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_esi))) & 0xffu);
    /* 008c929a: xor dl, bl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_ebx; u32 r = (a ^ b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fC = 0; }
    /* 008c929c: mov byte ptr [ecx], dl */ W8((u32)(r_ecx), (u8)r_edx);
    /* 008c929e: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 008c92a2: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008c92a3: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008c92a4: dec edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008c92a5: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 008c92a9: je 0x8c93b3 */ if (fZ) goto L_008c93b3;
L_008c92af:; BB(0x008c92af);
    /* 008c92af: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008c92b0: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 008c92b6: mov edx, dword ptr [eax + edi*4 + 8] */ r_edx = R32((u32)(r_eax+r_edi*4+0x8u));
    /* 008c92ba: add ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008c92bc: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 008c92c2: mov ebx, dword ptr [eax + ebp*4 + 8] */ r_ebx = R32((u32)(r_eax+r_ebp*4+0x8u));
    /* 008c92c6: mov dword ptr [eax + edi*4 + 8], ebx */ W32((u32)(r_eax+r_edi*4+0x8u), r_ebx);
    /* 008c92ca: add ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008c92cc: and ebx, 0xff */ {  u32 a = r_ebx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 008c92d2: mov dword ptr [eax + ebp*4 + 8], edx */ W32((u32)(r_eax+r_ebp*4+0x8u), r_edx);
    /* 008c92d6: mov dl, byte ptr [eax + ebx*4 + 8] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax+r_ebx*4+0x8u))) & 0xffu);
    /* 008c92da: mov bl, byte ptr [esi] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_esi))) & 0xffu);
    /* 008c92dc: xor dl, bl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_ebx; u32 r = (a ^ b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fC = 0; }
    /* 008c92de: mov byte ptr [ecx], dl */ W8((u32)(r_ecx), (u8)r_edx);
    /* 008c92e0: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 008c92e4: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008c92e5: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008c92e6: dec edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008c92e7: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 008c92eb: je 0x8c93b3 */ if (fZ) goto L_008c93b3;
L_008c92f1:; BB(0x008c92f1);
    /* 008c92f1: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008c92f2: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 008c92f8: mov edx, dword ptr [eax + edi*4 + 8] */ r_edx = R32((u32)(r_eax+r_edi*4+0x8u));
    /* 008c92fc: add ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008c92fe: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 008c9304: mov ebx, dword ptr [eax + ebp*4 + 8] */ r_ebx = R32((u32)(r_eax+r_ebp*4+0x8u));
    /* 008c9308: mov dword ptr [eax + edi*4 + 8], ebx */ W32((u32)(r_eax+r_edi*4+0x8u), r_ebx);
    /* 008c930c: add ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008c930e: and ebx, 0xff */ {  u32 a = r_ebx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 008c9314: mov dword ptr [eax + ebp*4 + 8], edx */ W32((u32)(r_eax+r_ebp*4+0x8u), r_edx);
    /* 008c9318: mov dl, byte ptr [eax + ebx*4 + 8] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax+r_ebx*4+0x8u))) & 0xffu);
    /* 008c931c: mov bl, byte ptr [esi] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_esi))) & 0xffu);
    /* 008c931e: xor dl, bl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_ebx; u32 r = (a ^ b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fC = 0; }
    /* 008c9320: mov byte ptr [ecx], dl */ W8((u32)(r_ecx), (u8)r_edx);
    /* 008c9322: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 008c9326: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008c9327: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008c9328: dec edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008c9329: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 008c932d: je 0x8c93b3 */ if (fZ) goto L_008c93b3;
L_008c9333:; BB(0x008c9333);
    /* 008c9333: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008c9334: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 008c933a: mov edx, dword ptr [eax + edi*4 + 8] */ r_edx = R32((u32)(r_eax+r_edi*4+0x8u));
    /* 008c933e: add ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008c9340: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 008c9346: mov ebx, dword ptr [eax + ebp*4 + 8] */ r_ebx = R32((u32)(r_eax+r_ebp*4+0x8u));
    /* 008c934a: mov dword ptr [eax + edi*4 + 8], ebx */ W32((u32)(r_eax+r_edi*4+0x8u), r_ebx);
    /* 008c934e: add ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008c9350: and ebx, 0xff */ {  u32 a = r_ebx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 008c9356: mov dword ptr [eax + ebp*4 + 8], edx */ W32((u32)(r_eax+r_ebp*4+0x8u), r_edx);
    /* 008c935a: mov dl, byte ptr [eax + ebx*4 + 8] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax+r_ebx*4+0x8u))) & 0xffu);
    /* 008c935e: mov bl, byte ptr [esi] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_esi))) & 0xffu);
    /* 008c9360: xor dl, bl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_ebx; u32 r = (a ^ b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fC = 0; }
    /* 008c9362: mov byte ptr [ecx], dl */ W8((u32)(r_ecx), (u8)r_edx);
    /* 008c9364: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 008c9368: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008c9369: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008c936a: dec edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008c936b: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 008c936f: je 0x8c93b3 */ if (fZ) goto L_008c93b3;
L_008c9371:; BB(0x008c9371);
    /* 008c9371: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008c9372: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 008c9378: mov edx, dword ptr [eax + edi*4 + 8] */ r_edx = R32((u32)(r_eax+r_edi*4+0x8u));
    /* 008c937c: add ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008c937e: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 008c9384: mov ebx, dword ptr [eax + ebp*4 + 8] */ r_ebx = R32((u32)(r_eax+r_ebp*4+0x8u));
    /* 008c9388: mov dword ptr [eax + edi*4 + 8], ebx */ W32((u32)(r_eax+r_edi*4+0x8u), r_ebx);
    /* 008c938c: add ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008c938e: and ebx, 0xff */ {  u32 a = r_ebx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 008c9394: mov dword ptr [eax + ebp*4 + 8], edx */ W32((u32)(r_eax+r_ebp*4+0x8u), r_edx);
    /* 008c9398: mov dl, byte ptr [eax + ebx*4 + 8] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax+r_ebx*4+0x8u))) & 0xffu);
    /* 008c939c: mov bl, byte ptr [esi] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_esi))) & 0xffu);
    /* 008c939e: xor dl, bl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_ebx; u32 r = (a ^ b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fC = 0; }
    /* 008c93a0: mov byte ptr [ecx], dl */ W8((u32)(r_ecx), (u8)r_edx);
    /* 008c93a2: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 008c93a6: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008c93a7: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008c93a8: dec edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008c93a9: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 008c93ad: jne 0x8c91e9 */ if (!fZ) goto L_008c91e9;
L_008c93b3:; BB(0x008c93b3);
    /* 008c93b3: mov dword ptr [eax], edi */ W32((u32)(r_eax), r_edi);
    /* 008c93b5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c93b6: mov dword ptr [eax + 4], ebp */ W32((u32)(r_eax+0x4u), r_ebp);
    /* 008c93b9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c93ba: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008c93bb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008c93bc: ret  */ FN_RET(0x008c8e20); r_esp += 4; return;
L_008c93bd:; BB(0x008c93bd);
    /* 008c93bd: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 008c93c1: mov esi, dword ptr [esp + 0x1c] */ r_esi = R32((u32)(r_esp+0x1cu));
    /* 008c93c5: jmp 0x8c919a */ goto L_008c919a;
}

