#include "protos.h"

void f_004821b0(void) /* sub_4821B0 */
{
    FN_ENTER(0x004821b0);
    /* 004821b0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004821b1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004821b2: mov esi, ecx */ r_esi = r_ecx;
    /* 004821b4: mov eax, dword ptr [esi + 0x12124] */ r_eax = R32((u32)(r_esi+0x12124u));
    /* 004821ba: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004821bc: jne 0x4821f3 */ if (!fZ) goto L_004821f3;
L_004821be:; BB(0x004821be);
    /* 004821be: mov dword ptr [esi + 0x12128], 0 */ W32((u32)(r_esi+0x12128u), 0x0u);
    /* 004821c8: call 0x7084a4 */ r_esp -= 4; W32(r_esp, 0x4821cdu); f_007084a4();
    /* 004821cd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004821ce: mov ecx, esi */ r_ecx = r_esi;
    /* 004821d0: call 0x77f5c4 */ r_esp -= 4; W32(r_esp, 0x4821d5u); f_0077f5c4();
    /* 004821d5: mov ebx, eax */ r_ebx = r_eax;
    /* 004821d7: call 0x708624 */ r_esp -= 4; W32(r_esp, 0x4821dcu); f_00708624();
    /* 004821dc: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 004821df: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004821e0: mov ecx, esi */ r_ecx = r_esi;
    /* 004821e2: call 0x77f8ec */ r_esp -= 4; W32(r_esp, 0x4821e7u); f_0077f8ec();
    /* 004821e7: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004821e9: je 0x482219 */ if (fZ) goto L_00482219;
L_004821eb:; BB(0x004821eb);
    /* 004821eb: mov eax, 1 */ r_eax = 0x1u;
    /* 004821f0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004821f1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004821f2: ret  */ FN_RET(0x004821b0); r_esp += 4; return;
L_004821f3:; BB(0x004821f3);
    /* 004821f3: push dword ptr [0xaaecc4] */ { u32 v = R32((u32)(0xaaecc4u)); r_esp -= 4; W32(r_esp, v); }
    /* 004821f9: mov dword ptr [esi + 0x12128], 1 */ W32((u32)(r_esi+0x12128u), 0x1u);
    /* 00482203: mov ecx, esi */ r_ecx = r_esi;
    /* 00482205: call 0x77f8c8 */ r_esp -= 4; W32(r_esp, 0x48220au); f_0077f8c8();
    /* 0048220a: movsx eax, word ptr [0xaaecc0] */ r_eax = (u32)(i32)(i16)R16((u32)(0xaaecc0u));
    /* 00482211: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00482212: mov ecx, esi */ r_ecx = r_esi;
    /* 00482214: call 0x77f8ec */ r_esp -= 4; W32(r_esp, 0x482219u); f_0077f8ec();
L_00482219:; BB(0x00482219);
    /* 00482219: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0048221b: mov ecx, esi */ r_ecx = r_esi;
    /* 0048221d: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x482220u); call_ind(t); }
    /* 00482220: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00482222: je 0x48223e */ if (fZ) goto L_0048223e;
L_00482224:; BB(0x00482224);
    /* 00482224: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00482227: jne 0x482231 */ if (!fZ) goto L_00482231;
L_00482229:; BB(0x00482229);
    /* 00482229: mov eax, 3 */ r_eax = 0x3u;
    /* 0048222e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0048222f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00482230: ret  */ FN_RET(0x004821b0); r_esp += 4; return;
L_00482231:; BB(0x00482231);
    /* 00482231: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00482234: jne 0x482229 */ if (!fZ) goto L_00482229;
L_00482236:; BB(0x00482236);
    /* 00482236: mov eax, 1 */ r_eax = 0x1u;
    /* 0048223b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0048223c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0048223d: ret  */ FN_RET(0x004821b0); r_esp += 4; return;
L_0048223e:; BB(0x0048223e);
    /* 0048223e: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00482240: mov ecx, esi */ r_ecx = r_esi;
    /* 00482242: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x482245u); call_ind(t); }
    /* 00482245: mov eax, 0xf */ r_eax = 0xfu;
    /* 0048224a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0048224b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0048224c: ret  */ FN_RET(0x004821b0); r_esp += 4; return;
}

void f_00482250(void) /* sub_482250 */
{
    FN_ENTER(0x00482250);
    /* 00482250: mov eax, dword ptr [ecx + 0x12120] */ r_eax = R32((u32)(r_ecx+0x12120u));
    /* 00482256: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00482259: je 0x48225e */ if (fZ) goto L_0048225e;
L_0048225b:; BB(0x0048225b);
    /* 0048225b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0048225d: ret  */ FN_RET(0x00482250); r_esp += 4; return;
L_0048225e:; BB(0x0048225e);
    /* 0048225e: mov eax, 1 */ r_eax = 0x1u;
    /* 00482263: ret  */ FN_RET(0x00482250); r_esp += 4; return;
}

void f_00482264(void) /* sub_482264 */
{
    FN_ENTER(0x00482264);
    /* 00482264: mov eax, dword ptr [ecx + 0x12120] */ r_eax = R32((u32)(r_ecx+0x12120u));
    /* 0048226a: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0048226d: je 0x482272 */ if (fZ) goto L_00482272;
L_0048226f:; BB(0x0048226f);
    /* 0048226f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00482271: ret  */ FN_RET(0x00482264); r_esp += 4; return;
L_00482272:; BB(0x00482272);
    /* 00482272: mov eax, 1 */ r_eax = 0x1u;
    /* 00482277: ret  */ FN_RET(0x00482264); r_esp += 4; return;
}

void f_00482278(void) /* sub_482278 */
{
    FN_ENTER(0x00482278);
    /* 00482278: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00482279: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0048227c: mov edi, ecx */ r_edi = r_ecx;
    /* 0048227e: mov ecx, dword ptr [0xa95e48] */ r_ecx = R32((u32)(0xa95e48u));
    /* 00482284: mov byte ptr [esp + 2], 0xe3 */ W8((u32)(r_esp+0x2u), 0xe3u);
    /* 00482289: mov dword ptr [edi + 0x1212c], ecx */ W32((u32)(r_edi+0x1212cu), r_ecx);
    /* 0048228f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00482291: mov dword ptr [esp + 0xc], 1 */ W32((u32)(r_esp+0xcu), 0x1u);
    /* 00482299: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0048229d: mov edx, 0x10 */ r_edx = 0x10u;
    /* 004822a2: mov byte ptr [esp + 3], al */ W8((u32)(r_esp+0x3u), (u8)r_eax);
    /* 004822a6: mov word ptr [esp], dx */ W16((u32)(r_esp), (u16)r_edx);
    /* 004822aa: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 004822ac: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 004822b0: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 004822b3: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 004822b5: mov ecx, edi */ r_ecx = r_edi;
    /* 004822b7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004822b8: call dword ptr [edx + 0x20] */ { u32 t = R32((u32)(r_edx+0x20u)); r_esp -= 4; W32(r_esp, 0x4822bbu); call_ind(t); }
    /* 004822bb: push dword ptr [edi + 0x1212c] */ { u32 v = R32((u32)(r_edi+0x1212cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004822c1: call 0x6c1a80 */ r_esp -= 4; W32(r_esp, 0x4822c6u); f_006c1a80();
    /* 004822c6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004822c9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004822ca: ret  */ FN_RET(0x00482278); r_esp += 4; return;
}

void f_004822cc(void) /* sub_4822CC */
{
    FN_ENTER(0x004822cc);
    /* 004822cc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004822cd: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004822d0: mov edi, ecx */ r_edi = r_ecx;
    /* 004822d2: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004822d4: mov eax, 0xc */ r_eax = 0xcu;
    /* 004822d9: mov byte ptr [esp + 2], 0xec */ W8((u32)(r_esp+0x2u), 0xecu);
    /* 004822de: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 004822e2: mov ecx, edi */ r_ecx = r_edi;
    /* 004822e4: mov byte ptr [esp + 3], dl */ W8((u32)(r_esp+0x3u), (u8)r_edx);
    /* 004822e8: mov word ptr [esp], ax */ W16((u32)(r_esp), (u16)r_eax);
    /* 004822ec: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 004822f0: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 004822f3: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 004822f5: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 004822f7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004822f8: call dword ptr [edx + 0x20] */ { u32 t = R32((u32)(r_edx+0x20u)); r_esp -= 4; W32(r_esp, 0x4822fbu); call_ind(t); }
    /* 004822fb: mov dword ptr [edi + 0x12120], 2 */ W32((u32)(r_edi+0x12120u), 0x2u);
    /* 00482305: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00482308: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00482309: ret  */ FN_RET(0x004822cc); r_esp += 4; return;
}

void f_0048230c(void) /* sub_48230C */
{
    FN_ENTER(0x0048230c);
    /* 0048230c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0048230d: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00482310: mov edi, ecx */ r_edi = r_ecx;
    /* 00482312: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00482314: mov edx, 0xc */ r_edx = 0xcu;
    /* 00482319: mov byte ptr [esp + 2], 0xec */ W8((u32)(r_esp+0x2u), 0xecu);
    /* 0048231e: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00482322: mov ecx, edi */ r_ecx = r_edi;
    /* 00482324: mov byte ptr [esp + 3], al */ W8((u32)(r_esp+0x3u), (u8)r_eax);
    /* 00482328: mov dword ptr [esp + 8], 1 */ W32((u32)(r_esp+0x8u), 0x1u);
    /* 00482330: mov word ptr [esp], dx */ W16((u32)(r_esp), (u16)r_edx);
    /* 00482334: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00482337: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 00482339: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 0048233b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048233c: call dword ptr [edx + 0x20] */ { u32 t = R32((u32)(r_edx+0x20u)); r_esp -= 4; W32(r_esp, 0x48233fu); call_ind(t); }
    /* 0048233f: mov dword ptr [edi + 0x12120], 2 */ W32((u32)(r_edi+0x12120u), 0x2u);
    /* 00482349: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0048234c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0048234d: ret  */ FN_RET(0x0048230c); r_esp += 4; return;
}

void f_00482350(void) /* sub_482350 */
{
    FN_ENTER(0x00482350);
    /* 00482350: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00482353: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00482355: mov edx, 8 */ r_edx = 0x8u;
    /* 0048235a: mov word ptr [esp], dx */ W16((u32)(r_esp), (u16)r_edx);
    /* 0048235e: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 00482366: mov byte ptr [esp + 2], 0xeb */ W8((u32)(r_esp+0x2u), 0xebu);
    /* 0048236b: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0048236e: mov byte ptr [esp + 3], 4 */ W8((u32)(r_esp+0x3u), 0x4u);
    /* 00482373: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00482375: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00482376: call dword ptr [eax + 0x20] */ { u32 t = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, 0x482379u); call_ind(t); }
    /* 00482379: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0048237c: ret  */ FN_RET(0x00482350); r_esp += 4; return;
}

void f_00482380(void) /* sub_482380 */
{
    FN_ENTER(0x00482380);
    /* 00482380: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00482383: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 00482387: mov edx, dword ptr [0xa46c38] */ r_edx = R32((u32)(0xa46c38u));
    /* 0048238d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048238f: je 0x4823d9 */ if (fZ) goto L_004823d9;
L_00482391:; BB(0x00482391);
    /* 00482391: mov byte ptr [esp + 2], 0x22 */ W8((u32)(r_esp+0x2u), 0x22u);
    /* 00482396: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00482398: mov ecx, 0x18 */ r_ecx = 0x18u;
    /* 0048239d: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 004823a1: mov byte ptr [esp + 3], dl */ W8((u32)(r_esp+0x3u), (u8)r_edx);
    /* 004823a5: mov word ptr [esp], cx */ W16((u32)(r_esp), (u16)r_ecx);
    /* 004823a9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004823ab: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 004823af: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 004823b2: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 004823b6: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 004823b9: mov eax, dword ptr [eax + 0xc] */ r_eax = R32((u32)(r_eax+0xcu));
    /* 004823bc: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 004823c0: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 004823c4: mov ecx, dword ptr [0xa46c38] */ r_ecx = R32((u32)(0xa46c38u));
    /* 004823ca: movzx edx, word ptr [esp] */ r_edx = (u32)R16((u32)(r_esp));
    /* 004823ce: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004823cf: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004823d1: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 004823d5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004823d6: call dword ptr [eax + 0x20] */ { u32 t = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, 0x4823d9u); call_ind(t); }
L_004823d9:; BB(0x004823d9);
    /* 004823d9: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004823dc: ret  */ FN_RET(0x00482380); r_esp += 4; return;
}

void f_004823e0(void) /* sub_4823E0 */
{
    FN_ENTER(0x004823e0);
    /* 004823e0: mov eax, 8 */ r_eax = 0x8u;
    /* 004823e5: mov word ptr [0xa46b80], ax */ W16((u32)(0xa46b80u), (u16)r_eax);
    /* 004823eb: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004823ed: mov eax, 0xa46c04 */ r_eax = 0xa46c04u;
    /* 004823f2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004823f4: mov byte ptr [0xa46b82], dl */ W8((u32)(0xa46b82u), (u8)r_edx);
    /* 004823fa: mov byte ptr [0xa46b83], dl */ W8((u32)(0xa46b83u), (u8)r_edx);
    /* 00482400: mov dword ptr [0xa46b84], edx */ W32((u32)(0xa46b84u), r_edx);
    /* 00482406: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 00482408: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 0048240b: ret  */ FN_RET(0x004823e0); r_esp += 4; return;
}

void f_0048240c(void) /* sub_48240C */
{
    FN_ENTER(0x0048240c);
    /* 0048240c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048240d: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0048240f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00482411: call 0x4786d4 */ r_esp -= 4; W32(r_esp, 0x482416u); f_004786d4();
    /* 00482416: mov dword ptr [ebp + 0x12130], 0xf */ W32((u32)(r_ebp+0x12130u), 0xfu);
    /* 00482420: mov dword ptr [ebp + 0x12120], 2 */ W32((u32)(r_ebp+0x12120u), 0x2u);
    /* 0048242a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048242b: ret  */ FN_RET(0x0048240c); r_esp += 4; return;
}

void f_0048242c(void) /* sub_48242C */
{
    FN_ENTER(0x0048242c);
    /* 0048242c: push 0xbaa4 */ { u32 v = 0xbaa4u; r_esp -= 4; W32(r_esp, v); }
    /* 00482431: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00482433: push dword ptr [0xa95e44] */ { u32 v = R32((u32)(0xa95e44u)); r_esp -= 4; W32(r_esp, v); }
    /* 00482439: call 0x86b5cc */ r_esp -= 4; W32(r_esp, 0x48243eu); f_0086b5cc();
    /* 0048243e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00482441: ret  */ FN_RET(0x0048242c); r_esp += 4; return;
}

void f_00482444(void) /* sub_482444 */
{
    FN_ENTER(0x00482444);
    /* 00482444: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00482445: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00482448: mov edi, ecx */ r_edi = r_ecx;
    /* 0048244a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0048244c: mov edx, 0xc */ r_edx = 0xcu;
    /* 00482451: mov byte ptr [esp + 2], 0xec */ W8((u32)(r_esp+0x2u), 0xecu);
    /* 00482456: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0048245a: mov ecx, edi */ r_ecx = r_edi;
    /* 0048245c: mov byte ptr [esp + 3], al */ W8((u32)(r_esp+0x3u), (u8)r_eax);
    /* 00482460: mov dword ptr [esp + 8], 2 */ W32((u32)(r_esp+0x8u), 0x2u);
    /* 00482468: mov word ptr [esp], dx */ W16((u32)(r_esp), (u16)r_edx);
    /* 0048246c: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0048246f: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 00482471: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 00482473: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00482474: call dword ptr [edx + 0x20] */ { u32 t = R32((u32)(r_edx+0x20u)); r_esp -= 4; W32(r_esp, 0x482477u); call_ind(t); }
    /* 00482477: mov dword ptr [edi + 0x12120], 2 */ W32((u32)(r_edi+0x12120u), 0x2u);
    /* 00482481: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00482484: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00482485: ret  */ FN_RET(0x00482444); r_esp += 4; return;
}

void f_00482488(void) /* sub_482488 */
{
    FN_ENTER(0x00482488);
    /* 00482488: mov eax, dword ptr [ecx + 0x12130] */ r_eax = R32((u32)(r_ecx+0x12130u));
    /* 0048248e: ret  */ FN_RET(0x00482488); r_esp += 4; return;
}

void f_00482490(void) /* sub_482490 */
{
    FN_ENTER(0x00482490);
    /* 00482490: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00482491: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00482492: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00482493: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00482494: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
    /* 00482498: mov ebx, dword ptr [0xa9cd44] */ r_ebx = R32((u32)(0xa9cd44u));
    /* 0048249e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004824a0: mov byte ptr [esi + 3], al */ W8((u32)(r_esi+0x3u), (u8)r_eax);
    /* 004824a3: mov edx, 0xb4 */ r_edx = 0xb4u;
    /* 004824a8: mov byte ptr [esi + 2], 0x93 */ W8((u32)(r_esi+0x2u), 0x93u);
    /* 004824ac: mov word ptr [esi], dx */ W16((u32)(r_esi), (u16)r_edx);
    /* 004824af: mov byte ptr [esi + 8], al */ W8((u32)(r_esi+0x8u), (u8)r_eax);
    /* 004824b2: mov byte ptr [esi + 9], al */ W8((u32)(r_esi+0x9u), (u8)r_eax);
    /* 004824b5: mov edx, 1 */ r_edx = 0x1u;
    /* 004824ba: mov word ptr [esi + 0xa], dx */ W16((u32)(r_esi+0xau), (u16)r_edx);
    /* 004824be: mov dword ptr [esi + 0xc], eax */ W32((u32)(r_esi+0xcu), r_eax);
    /* 004824c1: call 0x7c19b8 */ r_esp -= 4; W32(r_esp, 0x4824c6u); f_007c19b8();
    /* 004824c6: mov byte ptr [esi + 0x15], 0xff */ W8((u32)(r_esi+0x15u), 0xffu);
    /* 004824ca: mov dword ptr [esi + 0x10], eax */ W32((u32)(r_esi+0x10u), r_eax);
    /* 004824cd: mov byte ptr [esi + 0x14], bl */ W8((u32)(r_esi+0x14u), (u8)r_ebx);
    /* 004824d0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004824d2: mov byte ptr [esi + 0x16], al */ W8((u32)(r_esi+0x16u), (u8)r_eax);
    /* 004824d5: mov dword ptr [esi + 0x18], eax */ W32((u32)(r_esi+0x18u), r_eax);
    /* 004824d8: lea edx, [esi + 0x17] */ r_edx = (u32)(r_esi+0x17u);
    /* 004824db: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004824dc: push 0x9006d4 */ { u32 v = 0x9006d4u; r_esp -= 4; W32(r_esp, v); }
    /* 004824e1: call 0x82d3c0 */ r_esp -= 4; W32(r_esp, 0x4824e6u); f_0082d3c0();
    /* 004824e6: mov dword ptr [esp + 8], 1 */ W32((u32)(r_esp+0x8u), 0x1u);
    /* 004824ee: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004824f0: mov byte ptr [esi + 0x7c], bl */ W8((u32)(r_esi+0x7cu), (u8)r_ebx);
    /* 004824f3: mov byte ptr [esi + 0x7d], bl */ W8((u32)(r_esi+0x7du), (u8)r_ebx);
    /* 004824f6: mov word ptr [esi + 0x7e], bx */ W16((u32)(r_esi+0x7eu), (u16)r_ebx);
    /* 004824fa: mov dword ptr [esi + 0x80], ebx */ W32((u32)(r_esi+0x80u), r_ebx);
    /* 00482500: lea ebx, [esi + 0x84] */ r_ebx = (u32)(r_esi+0x84u);
    /* 00482506: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00482508: mov dword ptr [ebx], eax */ W32((u32)(r_ebx), r_eax);
    /* 0048250a: mov dword ptr [ebx + 4], eax */ W32((u32)(r_ebx+0x4u), r_eax);
    /* 0048250d: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 00482511: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00482512: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00482513: call 0x836634 */ r_esp -= 4; W32(r_esp, 0x482518u); f_00836634();
    /* 00482518: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048251b: movzx eax, byte ptr [esi + 0x84] */ r_eax = (u32)R8((u32)(r_esi+0x84u));
    /* 00482522: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00482524: jne 0x482567 */ if (!fZ) goto L_00482567;
L_00482526:; BB(0x00482526);
    /* 00482526: mov eax, ebx */ r_eax = r_ebx;
    /* 00482528: shr eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0048252b: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0048252e: mov byte ptr [esi + 0x85], al */ W8((u32)(r_esi+0x85u), (u8)r_eax);
    /* 00482534: shr ebx, 3 */ { u32 c = (3u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 00482537: xor byte ptr [esi + 0x86], al */ { u32 ad = (u32)(r_esi+0x86u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; W8(ad, r);  }
    /* 0048253d: or ebx, 0xffffff01 */ {  u32 a = r_ebx; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 00482543: mov byte ptr [esi + 0x84], bl */ W8((u32)(r_esi+0x84u), (u8)r_ebx);
    /* 00482549: xor byte ptr [esi + 0x87], al */ { u32 ad = (u32)(r_esi+0x87u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; W8(ad, r);  }
    /* 0048254f: xor byte ptr [esi + 0x88], al */ { u32 ad = (u32)(r_esi+0x88u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; W8(ad, r);  }
    /* 00482555: xor byte ptr [esi + 0x89], al */ { u32 ad = (u32)(r_esi+0x89u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; W8(ad, r);  }
    /* 0048255b: xor byte ptr [esi + 0x8a], al */ { u32 ad = (u32)(r_esi+0x8au);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; W8(ad, r);  }
    /* 00482561: xor byte ptr [esi + 0x8b], al */ { u32 ad = (u32)(r_esi+0x8bu);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; W8(ad, r);  }
L_00482567:; BB(0x00482567);
    /* 00482567: lea edx, [esi + 0x8c] */ r_edx = (u32)(r_esi+0x8cu);
    /* 0048256d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0048256f: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00482571: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00482574: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 00482577: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 0048257a: mov dword ptr [edx + 0x10], eax */ W32((u32)(r_edx+0x10u), r_eax);
    /* 0048257d: mov dword ptr [edx + 0x14], eax */ W32((u32)(r_edx+0x14u), r_eax);
    /* 00482580: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 00482583: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 00482586: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 00482589: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 0048258c: call 0x6f4c84 */ r_esp -= 4; W32(r_esp, 0x482591u); f_006f4c84();
    /* 00482591: lea esi, [esi + 0x8c] */ r_esi = (u32)(r_esi+0x8cu);
    /* 00482597: mov edi, eax */ r_edi = r_eax;
L_00482599:; BB(0x00482599);
    /* 00482599: mov dl, byte ptr [edi] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 0048259b: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0048259e: mov byte ptr [esi], dl */ W8((u32)(r_esi), (u8)r_edx);
    /* 004825a0: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004825a3: test dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004825a5: jne 0x482599 */ if (!fZ) goto L_00482599;
L_004825a7:; BB(0x004825a7);
    /* 004825a7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004825a8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004825a9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004825aa: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004825ab: ret 4 */ FN_RET(0x00482490); r_esp += 8; return;
}

void f_004825b0(void) /* sub_4825B0 */
{
    FN_ENTER(0x004825b0);
    /* 004825b0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004825b1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004825b3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004825b5: call 0x4825d4 */ r_esp -= 4; W32(r_esp, 0x4825bau); f_004825d4();
    /* 004825ba: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004825be: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004825c0: jne 0x4825c6 */ if (!fZ) goto L_004825c6;
L_004825c2:; BB(0x004825c2);
    /* 004825c2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004825c3: ret 4 */ FN_RET(0x004825b0); r_esp += 8; return;
L_004825c6:; BB(0x004825c6);
    /* 004825c6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004825c7: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x4825ccu); f_005c2f74();
    /* 004825cc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004825cd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004825ce: ret 4 */ FN_RET(0x004825b0); r_esp += 8; return;
}

void f_004825d4(void) /* sub_4825D4 */
{
    FN_ENTER(0x004825d4);
    /* 004825d4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004825d5: mov ebp, esp */ r_ebp = r_esp;
    /* 004825d7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004825d9: push 0x8cf79c */ { u32 v = 0x8cf79cu; r_esp -= 4; W32(r_esp, v); }
    /* 004825de: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004825e4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004825e5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004825ec: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004825ef: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004825f2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004825f5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004825f8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004825fb: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004825fe: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00482605: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00482608: mov eax, dword ptr [ecx + 0x1c] */ r_eax = R32((u32)(r_ecx+0x1cu));
    /* 0048260b: mov dword ptr [ecx], 0xaf83c0 */ W32((u32)(r_ecx), 0xaf83c0u);
    /* 00482611: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00482613: je 0x482626 */ if (fZ) goto L_00482626;
L_00482615:; BB(0x00482615);
    /* 00482615: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00482616: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x48261bu); f_00857e98();
    /* 0048261b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0048261c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0048261f: mov dword ptr [ecx + 0x1c], 0 */ W32((u32)(r_ecx+0x1cu), 0x0u);
L_00482626:; BB(0x00482626);
    /* 00482626: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0048262d: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x482632u); f_008171e8();
    /* 00482632: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00482635: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0048263c: mov esp, ebp */ r_esp = r_ebp;
    /* 0048263e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048263f: ret  */ FN_RET(0x004825d4); r_esp += 4; return;
}

void f_00482640(void) /* sub_482640 */
{
    FN_ENTER(0x00482640);
    /* 00482640: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00482641: mov ebp, esp */ r_ebp = r_esp;
    /* 00482643: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00482645: push 0x8cf7b8 */ { u32 v = 0x8cf7b8u; r_esp -= 4; W32(r_esp, v); }
    /* 0048264a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00482650: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00482651: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00482658: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0048265b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0048265e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00482661: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00482664: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00482667: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0048266a: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0048266d: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x482672u); f_008193cc();
    /* 00482672: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00482679: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0048267c: mov dword ptr [ecx], 0xaf83c0 */ W32((u32)(r_ecx), 0xaf83c0u);
    /* 00482682: call 0x4826ac */ r_esp -= 4; W32(r_esp, 0x482687u); f_004826ac();
    /* 00482687: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0048268a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0048268c: mov dword ptr [eax + 0x1c], edx */ W32((u32)(r_eax+0x1cu), r_edx);
    /* 0048268f: mov dword ptr [eax + 0x20], edx */ W32((u32)(r_eax+0x20u), r_edx);
    /* 00482692: mov dword ptr [eax + 0x2c], edx */ W32((u32)(r_eax+0x2cu), r_edx);
    /* 00482695: mov dword ptr [eax + 0x28], edx */ W32((u32)(r_eax+0x28u), r_edx);
    /* 00482698: mov dword ptr [eax + 0x24], edx */ W32((u32)(r_eax+0x24u), r_edx);
    /* 0048269b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048269e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004826a5: mov esp, ebp */ r_esp = r_ebp;
    /* 004826a7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004826a8: ret 4 */ FN_RET(0x00482640); r_esp += 8; return;
}

void f_004826ac(void) /* sub_4826AC */
{
    FN_ENTER(0x004826ac);
    /* 004826ac: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004826ad: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004826b0: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004826b2: mov edx, dword ptr [0xa95df4] */ r_edx = R32((u32)(0xa95df4u));
    /* 004826b8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004826ba: je 0x482701 */ if (fZ) goto L_00482701;
L_004826bc:; BB(0x004826bc);
    /* 004826bc: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 004826c4: mov eax, 0x10 */ r_eax = 0x10u;
    /* 004826c9: mov word ptr [esp], ax */ W16((u32)(r_esp), (u16)r_eax);
    /* 004826cd: mov byte ptr [esp + 2], 0xe8 */ W8((u32)(r_esp+0x2u), 0xe8u);
    /* 004826d2: mov byte ptr [esp + 3], 1 */ W8((u32)(r_esp+0x3u), 0x1u);
    /* 004826d7: push 0xd590 */ { u32 v = 0xd590u; r_esp -= 4; W32(r_esp, v); }
    /* 004826dc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004826dd: call 0x6c1e34 */ r_esp -= 4; W32(r_esp, 0x4826e2u); f_006c1e34();
    /* 004826e2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004826e5: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004826e9: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 004826ed: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 004826f0: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004826f2: mov dword ptr [esp + 0xc], 0 */ W32((u32)(r_esp+0xcu), 0x0u);
    /* 004826fa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004826fb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004826fc: call 0x482918 */ r_esp -= 4; W32(r_esp, 0x482701u); f_00482918();
L_00482701:; BB(0x00482701);
    /* 00482701: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00482704: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00482705: ret  */ FN_RET(0x004826ac); r_esp += 4; return;
}

void f_00482708(void) /* sub_482708 */
{
    FN_ENTER(0x00482708);
    /* 00482708: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0048270c: movzx edx, byte ptr [eax + 2] */ r_edx = (u32)R8((u32)(r_eax+0x2u));
    /* 00482710: cmp edx, 0xdc */ {  u32 a = r_edx; u32 b = 0xdcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00482716: jne 0x482738 */ if (!fZ) goto L_00482738;
L_00482718:; BB(0x00482718);
    /* 00482718: movzx edx, byte ptr [eax + 3] */ r_edx = (u32)R8((u32)(r_eax+0x3u));
    /* 0048271c: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048271f: jne 0x48272a */ if (!fZ) goto L_0048272a;
L_00482721:; BB(0x00482721);
    /* 00482721: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00482722: call 0x482934 */ r_esp -= 4; W32(r_esp, 0x482727u); f_00482934();
    /* 00482727: ret 4 */ FN_RET(0x00482708); r_esp += 8; return;
L_0048272a:; BB(0x0048272a);
    /* 0048272a: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0048272d: jne 0x48274f */ if (!fZ) goto L_0048274f;
L_0048272f:; BB(0x0048272f);
    /* 0048272f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00482730: call 0x48279c */ r_esp -= 4; W32(r_esp, 0x482735u); f_0048279c();
    /* 00482735: ret 4 */ FN_RET(0x00482708); r_esp += 8; return;
L_00482738:; BB(0x00482738);
    /* 00482738: cmp edx, 0xe8 */ {  u32 a = r_edx; u32 b = 0xe8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0048273e: jne 0x48274f */ if (!fZ) goto L_0048274f;
L_00482740:; BB(0x00482740);
    /* 00482740: movzx edx, byte ptr [eax + 3] */ r_edx = (u32)R8((u32)(r_eax+0x3u));
    /* 00482744: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00482747: jne 0x48274f */ if (!fZ) goto L_0048274f;
L_00482749:; BB(0x00482749);
    /* 00482749: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048274a: call 0x482754 */ r_esp -= 4; W32(r_esp, 0x48274fu); f_00482754();
L_0048274f:; BB(0x0048274f);
    /* 0048274f: ret 4 */ FN_RET(0x00482708); r_esp += 8; return;
}

void f_00482754(void) /* sub_482754 */
{
    FN_ENTER(0x00482754);
    /* 00482754: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00482757: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0048275b: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 0048275e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00482760: je 0x48278e */ if (fZ) goto L_0048278e;
L_00482762:; BB(0x00482762);
    /* 00482762: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 0048276a: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0048276d: mov eax, 8 */ r_eax = 0x8u;
    /* 00482772: mov byte ptr [esp + 2], 0xe8 */ W8((u32)(r_esp+0x2u), 0xe8u);
    /* 00482777: mov word ptr [esp], ax */ W16((u32)(r_esp), (u16)r_eax);
    /* 0048277b: mov byte ptr [esp + 3], 3 */ W8((u32)(r_esp+0x3u), 0x3u);
    /* 00482780: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00482782: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00482783: call 0x482918 */ r_esp -= 4; W32(r_esp, 0x482788u); f_00482918();
    /* 00482788: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0048278b: ret 4 */ FN_RET(0x00482754); r_esp += 8; return;
L_0048278e:; BB(0x0048278e);
    /* 0048278e: call 0x4829d0 */ r_esp -= 4; W32(r_esp, 0x482793u); f_004829d0();
    /* 00482793: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00482796: ret 4 */ FN_RET(0x00482754); r_esp += 8; return;
}

void f_0048279c(void) /* sub_48279C */
{
    FN_ENTER(0x0048279c);
    /* 0048279c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0048279d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0048279e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048279f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004827a0: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004827a3: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004827a5: mov edi, dword ptr [ebp + 0x1c] */ r_edi = R32((u32)(r_ebp+0x1cu));
    /* 004827a8: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004827aa: mov ebx, dword ptr [esp + 0x44] */ r_ebx = R32((u32)(r_esp+0x44u));
    /* 004827ae: je 0x48290e */ if (fZ) goto L_0048290e;
L_004827b4:; BB(0x004827b4);
    /* 004827b4: mov eax, dword ptr [ebp + 0x24] */ r_eax = R32((u32)(r_ebp+0x24u));
    /* 004827b7: cmp eax, dword ptr [ebx + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004827ba: je 0x48290e */ if (fZ) goto L_0048290e;
L_004827c0:; BB(0x004827c0);
    /* 004827c0: mov eax, dword ptr [ebx + 0xc] */ r_eax = R32((u32)(r_ebx+0xcu));
    /* 004827c3: mov edx, dword ptr [ebp + 0x20] */ r_edx = R32((u32)(r_ebp+0x20u));
    /* 004827c6: lea esi, [eax + eax] */ r_esi = (u32)(r_eax+r_eax);
    /* 004827c9: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004827cb: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 004827cd: lea esi, [eax + esi*4] */ r_esi = (u32)(r_eax+r_esi*4);
    /* 004827d0: shl esi, 0xb */ { u32 c = (11u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 004827d3: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004827d6: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004827d8: jne 0x4828b7 */ if (!fZ) goto L_004828b7;
L_004827de:; BB(0x004827de);
    /* 004827de: mov eax, 0x4ec4ec4f */ r_eax = 0x4ec4ec4fu;
    /* 004827e3: mov ecx, dword ptr [ebp + 0x28] */ r_ecx = R32((u32)(r_ebp+0x28u));
    /* 004827e6: mul ecx */ { u64 t = (u64)r_eax * r_ecx; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 004827e8: shr edx, 0xd */ { u32 c = (13u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 004827eb: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 004827ee: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004827f0: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004827f2: lea eax, [edx + eax*4] */ r_eax = (u32)(r_edx+r_eax*4);
    /* 004827f5: shl eax, 0xb */ { u32 c = (11u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 004827f8: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004827fa: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004827fc: jne 0x482803 */ if (!fZ) goto L_00482803;
L_004827fe:; BB(0x004827fe);
    /* 004827fe: mov ecx, 0x6800 */ r_ecx = 0x6800u;
L_00482803:; BB(0x00482803);
    /* 00482803: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00482804: add edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00482806: lea eax, [ebx + 0x10] */ r_eax = (u32)(r_ebx+0x10u);
    /* 00482809: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048280a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0048280b: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x482810u); f_0086b6b8();
    /* 00482810: push dword ptr [ebp + 0x28] */ { u32 v = R32((u32)(r_ebp+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 00482813: push dword ptr [ebp + 0x1c] */ { u32 v = R32((u32)(r_ebp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00482816: call 0x6c1e34 */ r_esp -= 4; W32(r_esp, 0x48281bu); f_006c1e34();
    /* 0048281b: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048281e: cmp eax, dword ptr [ebp + 0x2c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x2cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00482821: jne 0x482885 */ if (!fZ) goto L_00482885;
L_00482823:; BB(0x00482823);
    /* 00482823: mov eax, dword ptr [0xa95df4] */ r_eax = R32((u32)(0xa95df4u));
    /* 00482828: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048282a: je 0x48283d */ if (fZ) goto L_0048283d;
L_0048282c:; BB(0x0048282c);
    /* 0048282c: push 0xd590 */ { u32 v = 0xd590u; r_esp -= 4; W32(r_esp, v); }
    /* 00482831: push dword ptr [ebp + 0x1c] */ { u32 v = R32((u32)(r_ebp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00482834: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00482835: call 0x86b324 */ r_esp -= 4; W32(r_esp, 0x48283au); f_0086b324();
    /* 0048283a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0048283d:; BB(0x0048283d);
    /* 0048283d: mov edx, dword ptr [ebp + 0x24] */ r_edx = R32((u32)(r_ebp+0x24u));
    /* 00482840: mov byte ptr [esp + 0xa], 0xdc */ W8((u32)(r_esp+0xau), 0xdcu);
    /* 00482845: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00482847: mov eax, 0x14 */ r_eax = 0x14u;
    /* 0048284c: mov byte ptr [esp + 0xb], 3 */ W8((u32)(r_esp+0xbu), 0x3u);
    /* 00482851: mov dword ptr [esp + 0xc], ebx */ W32((u32)(r_esp+0xcu), r_ebx);
    /* 00482855: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00482857: mov word ptr [esp + 8], ax */ W16((u32)(r_esp+0x8u), (u16)r_eax);
    /* 0048285c: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 00482860: mov dword ptr [esp + 0x14], ebx */ W32((u32)(r_esp+0x14u), r_ebx);
    /* 00482864: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 00482868: lea esi, [esp + 8] */ r_esi = (u32)(r_esp+0x8u);
    /* 0048286c: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0048286e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0048286f: call 0x482918 */ r_esp -= 4; W32(r_esp, 0x482874u); f_00482918();
    /* 00482874: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00482876: call 0x4829d0 */ r_esp -= 4; W32(r_esp, 0x48287bu); f_004829d0();
    /* 0048287b: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0048287e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0048287f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00482880: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00482881: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00482882: ret 4 */ FN_RET(0x0048279c); r_esp += 8; return;
L_00482885:; BB(0x00482885);
    /* 00482885: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 0048288d: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 00482890: mov eax, 8 */ r_eax = 0x8u;
    /* 00482895: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00482897: mov byte ptr [esp + 2], 0xe8 */ W8((u32)(r_esp+0x2u), 0xe8u);
    /* 0048289c: mov word ptr [esp], ax */ W16((u32)(r_esp), (u16)r_eax);
    /* 004828a0: mov byte ptr [esp + 3], 3 */ W8((u32)(r_esp+0x3u), 0x3u);
    /* 004828a5: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 004828a7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004828a8: call 0x482918 */ r_esp -= 4; W32(r_esp, 0x4828adu); f_00482918();
    /* 004828ad: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004828b0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004828b1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004828b2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004828b3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004828b4: ret 4 */ FN_RET(0x0048279c); r_esp += 8; return;
L_004828b7:; BB(0x004828b7);
    /* 004828b7: push 0x6800 */ { u32 v = 0x6800u; r_esp -= 4; W32(r_esp, v); }
    /* 004828bc: add edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004828be: lea eax, [ebx + 0x10] */ r_eax = (u32)(r_ebx+0x10u);
    /* 004828c1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004828c2: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004828c3: call 0x86b324 */ r_esp -= 4; W32(r_esp, 0x4828c8u); f_0086b324();
    /* 004828c8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004828cb: mov edx, dword ptr [ebp + 0x24] */ r_edx = R32((u32)(r_ebp+0x24u));
    /* 004828ce: mov dword ptr [esp + 0x20], 0 */ W32((u32)(r_esp+0x20u), 0x0u);
    /* 004828d6: mov eax, 0x14 */ r_eax = 0x14u;
    /* 004828db: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004828dd: mov byte ptr [esp + 0x1e], 0xdc */ W8((u32)(r_esp+0x1eu), 0xdcu);
    /* 004828e2: mov word ptr [esp + 0x1c], ax */ W16((u32)(r_esp+0x1cu), (u16)r_eax);
    /* 004828e7: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 004828eb: mov byte ptr [esp + 0x1f], 3 */ W8((u32)(r_esp+0x1fu), 0x3u);
    /* 004828f0: mov ebx, dword ptr [ebx + 0xc] */ r_ebx = R32((u32)(r_ebx+0xcu));
    /* 004828f3: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004828f6: mov dword ptr [esp + 0x2c], 1 */ W32((u32)(r_esp+0x2cu), 0x1u);
    /* 004828fe: mov dword ptr [esp + 0x28], ebx */ W32((u32)(r_esp+0x28u), r_ebx);
    /* 00482902: lea esi, [esp + 0x1c] */ r_esi = (u32)(r_esp+0x1cu);
    /* 00482906: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00482908: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00482909: call 0x482918 */ r_esp -= 4; W32(r_esp, 0x48290eu); f_00482918();
L_0048290e:; BB(0x0048290e);
    /* 0048290e: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00482911: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00482912: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00482913: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00482914: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00482915: ret 4 */ FN_RET(0x0048279c); r_esp += 8; return;
}

void f_00482918(void) /* sub_482918 */
{
    FN_ENTER(0x00482918);
    /* 00482918: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 0048291b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0048291d: je 0x48292e */ if (fZ) goto L_0048292e;
L_0048291f:; BB(0x0048291f);
    /* 0048291f: movzx edx, word ptr [esp + 8] */ r_edx = (u32)R16((u32)(r_esp+0x8u));
    /* 00482924: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00482925: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00482927: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0048292b: call dword ptr [eax + 0x20] */ { u32 t = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, 0x48292eu); call_ind(t); }
L_0048292e:; BB(0x0048292e);
    /* 0048292e: ret 8 */ FN_RET(0x00482918); r_esp += 12; return;
}

void f_00482934(void) /* sub_482934 */
{
    FN_ENTER(0x00482934);
    /* 00482934: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00482935: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00482938: mov edi, ecx */ r_edi = r_ecx;
    /* 0048293a: mov eax, dword ptr [edi + 0x1c] */ r_eax = R32((u32)(r_edi+0x1cu));
    /* 0048293d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048293f: je 0x482948 */ if (fZ) goto L_00482948;
L_00482941:; BB(0x00482941);
    /* 00482941: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00482944: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00482945: ret 4 */ FN_RET(0x00482934); r_esp += 8; return;
L_00482948:; BB(0x00482948);
    /* 00482948: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0048294c: push dword ptr [eax + 0xc] */ { u32 v = R32((u32)(r_eax+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0048294f: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x482954u); f_008581c5();
    /* 00482954: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00482955: mov dword ptr [edi + 0x1c], eax */ W32((u32)(r_edi+0x1cu), r_eax);
    /* 00482958: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0048295c: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 0048295f: mov eax, 0x4ec4ec4f */ r_eax = 0x4ec4ec4fu;
    /* 00482964: add edx, 0x67ff */ {  u32 a = r_edx; u32 b = 0x67ffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0048296a: mul edx */ { u64 t = (u64)r_eax * r_edx; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 0048296c: shr edx, 0xd */ { u32 c = (13u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0048296f: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 00482973: mov dword ptr [edi + 0x20], edx */ W32((u32)(r_edi+0x20u), r_edx);
    /* 00482976: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00482979: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0048297d: mov dword ptr [edi + 0x24], ecx */ W32((u32)(r_edi+0x24u), r_ecx);
    /* 00482980: mov eax, dword ptr [eax + 0xc] */ r_eax = R32((u32)(r_eax+0xcu));
    /* 00482983: mov dword ptr [edi + 0x28], eax */ W32((u32)(r_edi+0x28u), r_eax);
    /* 00482986: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0048298a: mov eax, dword ptr [eax + 0x10] */ r_eax = R32((u32)(r_eax+0x10u));
    /* 0048298d: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 00482991: mov dword ptr [edi + 0x2c], eax */ W32((u32)(r_edi+0x2cu), r_eax);
    /* 00482994: mov byte ptr [esp + 2], 0xdc */ W8((u32)(r_esp+0x2u), 0xdcu);
    /* 00482999: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0048299b: mov eax, 0x14 */ r_eax = 0x14u;
    /* 004829a0: mov ecx, edi */ r_ecx = r_edi;
    /* 004829a2: mov byte ptr [esp + 3], 3 */ W8((u32)(r_esp+0x3u), 0x3u);
    /* 004829a7: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 004829ab: mov word ptr [esp], ax */ W16((u32)(r_esp), (u16)r_eax);
    /* 004829af: mov dword ptr [esp + 0x10], 1 */ W32((u32)(r_esp+0x10u), 0x1u);
    /* 004829b7: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 004829bb: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 004829be: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 004829c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004829c1: call 0x482918 */ r_esp -= 4; W32(r_esp, 0x4829c6u); f_00482918();
    /* 004829c6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004829c9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004829ca: ret 4 */ FN_RET(0x00482934); r_esp += 8; return;
}

void f_004829d0(void) /* sub_4829D0 */
{
    FN_ENTER(0x004829d0);
    /* 004829d0: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 004829d3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004829d5: je 0x4829dc */ if (fZ) goto L_004829dc;
L_004829d7:; BB(0x004829d7);
    /* 004829d7: call 0x482350 */ r_esp -= 4; W32(r_esp, 0x4829dcu); f_00482350();
L_004829dc:; BB(0x004829dc);
    /* 004829dc: ret  */ FN_RET(0x004829d0); r_esp += 4; return;
}

void f_004829e0(void) /* sub_4829E0 */
{
    FN_ENTER(0x004829e0);
    /* 004829e0: movzx eax, word ptr [0xa46c48] */ r_eax = (u32)R16((u32)(0xa46c48u));
    /* 004829e7: ret  */ FN_RET(0x004829e0); r_esp += 4; return;
}

void f_004829e8(void) /* sub_4829E8 */
{
    FN_ENTER(0x004829e8);
    /* 004829e8: movzx eax, word ptr [0xa46c4a] */ r_eax = (u32)R16((u32)(0xa46c4au));
    /* 004829ef: ret  */ FN_RET(0x004829e8); r_esp += 4; return;
}

void f_004829f0(void) /* sub_4829F0 */
{
    FN_ENTER(0x004829f0);
    /* 004829f0: movzx eax, word ptr [0xa46c4c] */ r_eax = (u32)R16((u32)(0xa46c4cu));
    /* 004829f7: ret  */ FN_RET(0x004829f0); r_esp += 4; return;
}

void f_004829f8(void) /* sub_4829F8 */
{
    FN_ENTER(0x004829f8);
    /* 004829f8: movzx eax, word ptr [0xa46c50] */ r_eax = (u32)R16((u32)(0xa46c50u));
    /* 004829ff: ret  */ FN_RET(0x004829f8); r_esp += 4; return;
}

void f_00482a00(void) /* sub_482A00 */
{
    FN_ENTER(0x00482a00);
    /* 00482a00: movzx eax, word ptr [0xa46c52] */ r_eax = (u32)R16((u32)(0xa46c52u));
    /* 00482a07: ret  */ FN_RET(0x00482a00); r_esp += 4; return;
}

void f_00482a08(void) /* sub_482A08 */
{
    FN_ENTER(0x00482a08);
    /* 00482a08: movzx eax, word ptr [0xa46c54] */ r_eax = (u32)R16((u32)(0xa46c54u));
    /* 00482a0f: ret  */ FN_RET(0x00482a08); r_esp += 4; return;
}

void f_00482a10(void) /* sub_482A10 */
{
    FN_ENTER(0x00482a10);
    /* 00482a10: mov eax, dword ptr [0xa46c5a] */ r_eax = R32((u32)(0xa46c5au));
    /* 00482a15: ret  */ FN_RET(0x00482a10); r_esp += 4; return;
}

void f_00482a18(void) /* sub_482A18 */
{
    FN_ENTER(0x00482a18);
    /* 00482a18: movzx eax, word ptr [0xa46c5e] */ r_eax = (u32)R16((u32)(0xa46c5eu));
    /* 00482a1f: ret  */ FN_RET(0x00482a18); r_esp += 4; return;
}

void f_00482a20(void) /* sub_482A20 */
{
    FN_ENTER(0x00482a20);
    /* 00482a20: movzx eax, word ptr [0xa46c64] */ r_eax = (u32)R16((u32)(0xa46c64u));
    /* 00482a27: ret  */ FN_RET(0x00482a20); r_esp += 4; return;
}

void f_00482a28(void) /* sub_482A28 */
{
    FN_ENTER(0x00482a28);
    /* 00482a28: movzx eax, word ptr [0xa46c68] */ r_eax = (u32)R16((u32)(0xa46c68u));
    /* 00482a2f: ret  */ FN_RET(0x00482a28); r_esp += 4; return;
}

void f_00482a30(void) /* sub_482A30 */
{
    FN_ENTER(0x00482a30);
    /* 00482a30: movzx eax, word ptr [0xa46c6a] */ r_eax = (u32)R16((u32)(0xa46c6au));
    /* 00482a37: ret  */ FN_RET(0x00482a30); r_esp += 4; return;
}

void f_00482a38(void) /* sub_482A38 */
{
    FN_ENTER(0x00482a38);
    /* 00482a38: movzx eax, word ptr [0xa46c6c] */ r_eax = (u32)R16((u32)(0xa46c6cu));
    /* 00482a3f: ret  */ FN_RET(0x00482a38); r_esp += 4; return;
}

void f_00482a40(void) /* sub_482A40 */
{
    FN_ENTER(0x00482a40);
    /* 00482a40: movzx eax, word ptr [0xa46c6c] */ r_eax = (u32)R16((u32)(0xa46c6cu));
    /* 00482a47: mov ecx, dword ptr [eax*4 + 0x9006e0] */ r_ecx = R32((u32)(r_eax*4+0x9006e0u));
    /* 00482a4e: call 0x83780c */ r_esp -= 4; W32(r_esp, 0x482a53u); f_0083780c();
    /* 00482a53: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00482a58: call 0x837818 */ r_esp -= 4; W32(r_esp, 0x482a5du); f_00837818();
    /* 00482a5d: ret  */ FN_RET(0x00482a40); r_esp += 4; return;
}

void f_00482a60(void) /* sub_482A60 */
{
    FN_ENTER(0x00482a60);
    /* 00482a60: movzx eax, word ptr [esp + 4] */ r_eax = (u32)R16((u32)(r_esp+0x4u));
    /* 00482a65: mov edx, 4 */ r_edx = 0x4u;
    /* 00482a6a: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00482a6d: jl 0x482a71 */ if ((fS!=fO)) goto L_00482a71;
L_00482a6f:; BB(0x00482a6f);
    /* 00482a6f: mov eax, edx */ r_eax = r_edx;
L_00482a71:; BB(0x00482a71);
    /* 00482a71: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00482a73: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00482a75: jg 0x482a79 */ if ((!fZ&&fS==fO)) goto L_00482a79;
L_00482a77:; BB(0x00482a77);
    /* 00482a77: mov eax, ecx */ r_eax = r_ecx;
L_00482a79:; BB(0x00482a79);
    /* 00482a79: mov word ptr [0xa46c6c], ax */ W16((u32)(0xa46c6cu), (u16)r_eax);
    /* 00482a7f: ret  */ FN_RET(0x00482a60); r_esp += 4; return;
}

void f_00482a80(void) /* sub_482A80 */
{
    FN_ENTER(0x00482a80);
    /* 00482a80: movzx eax, word ptr [0xa46c6c] */ r_eax = (u32)R16((u32)(0xa46c6cu));
    /* 00482a87: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00482a88: push 0x900728 */ { u32 v = 0x900728u; r_esp -= 4; W32(r_esp, v); }
    /* 00482a8d: call 0x82d5fc */ r_esp -= 4; W32(r_esp, 0x482a92u); f_0082d5fc();
    /* 00482a92: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00482a95: ret  */ FN_RET(0x00482a80); r_esp += 4; return;
}

void f_00482a98(void) /* sub_482A98 */
{
    FN_ENTER(0x00482a98);
    /* 00482a98: mov eax, dword ptr [0xa46c6e] */ r_eax = R32((u32)(0xa46c6eu));
    /* 00482a9d: ret  */ FN_RET(0x00482a98); r_esp += 4; return;
}

void f_00482aa0(void) /* sub_482AA0 */
{
    FN_ENTER(0x00482aa0);
    /* 00482aa0: mov eax, dword ptr [0xa46c72] */ r_eax = R32((u32)(0xa46c72u));
    /* 00482aa5: ret  */ FN_RET(0x00482aa0); r_esp += 4; return;
}

void f_00482aa8(void) /* sub_482AA8 */
{
    FN_ENTER(0x00482aa8);
    /* 00482aa8: mov dword ptr [0xa46c6e], 1 */ W32((u32)(0xa46c6eu), 0x1u);
    /* 00482ab2: mov eax, 0x280 */ r_eax = 0x280u;
    /* 00482ab7: mov edx, 0x1e0 */ r_edx = 0x1e0u;
    /* 00482abc: mov word ptr [0xa46c48], ax */ W16((u32)(0xa46c48u), (u16)r_eax);
    /* 00482ac2: mov word ptr [0xa46c4a], dx */ W16((u32)(0xa46c4au), (u16)r_edx);
    /* 00482ac9: mov ecx, 0x10 */ r_ecx = 0x10u;
    /* 00482ace: mov eax, 2 */ r_eax = 0x2u;
    /* 00482ad3: mov word ptr [0xa46c4c], cx */ W16((u32)(0xa46c4cu), (u16)r_ecx);
    /* 00482ada: mov word ptr [0xa46c4e], ax */ W16((u32)(0xa46c4eu), (u16)r_eax);
    /* 00482ae0: mov word ptr [0xa46c60], ax */ W16((u32)(0xa46c60u), (u16)r_eax);
    /* 00482ae6: mov word ptr [0xa46c66], ax */ W16((u32)(0xa46c66u), (u16)r_eax);
    /* 00482aec: mov word ptr [0xa46c6a], ax */ W16((u32)(0xa46c6au), (u16)r_eax);
    /* 00482af2: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00482af4: mov word ptr [0xa46c50], dx */ W16((u32)(0xa46c50u), (u16)r_edx);
    /* 00482afb: mov word ptr [0xa46c54], dx */ W16((u32)(0xa46c54u), (u16)r_edx);
    /* 00482b02: mov dword ptr [0xa46c56], edx */ W32((u32)(0xa46c56u), r_edx);
    /* 00482b08: mov dword ptr [0xa46c5a], edx */ W32((u32)(0xa46c5au), r_edx);
    /* 00482b0e: mov word ptr [0xa46c5e], dx */ W16((u32)(0xa46c5eu), (u16)r_edx);
    /* 00482b15: mov word ptr [0xa46c62], dx */ W16((u32)(0xa46c62u), (u16)r_edx);
    /* 00482b1c: mov word ptr [0xa46c64], dx */ W16((u32)(0xa46c64u), (u16)r_edx);
    /* 00482b23: mov word ptr [0xa46c68], dx */ W16((u32)(0xa46c68u), (u16)r_edx);
    /* 00482b2a: mov word ptr [0xa46c6c], ax */ W16((u32)(0xa46c6cu), (u16)r_eax);
    /* 00482b30: mov dword ptr [0xa46c72], edx */ W32((u32)(0xa46c72u), r_edx);
    /* 00482b36: ret  */ FN_RET(0x00482aa8); r_esp += 4; return;
}

void f_00482b38(void) /* sub_482B38 */
{
    FN_ENTER(0x00482b38);
    /* 00482b38: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00482b39: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00482b3a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00482b3b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00482b3c: sub esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00482b3f: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00482b42: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00482b43: push 0x900730 */ { u32 v = 0x900730u; r_esp -= 4; W32(r_esp, v); }
    /* 00482b48: call 0x82d3c0 */ r_esp -= 4; W32(r_esp, 0x482b4du); f_0082d3c0();
    /* 00482b4d: lea eax, [esp + 0x14] */ r_eax = (u32)(r_esp+0x14u);
    /* 00482b51: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00482b52: push 0x900738 */ { u32 v = 0x900738u; r_esp -= 4; W32(r_esp, v); }
    /* 00482b57: call 0x82d3c0 */ r_esp -= 4; W32(r_esp, 0x482b5cu); f_0082d3c0();
    /* 00482b5c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00482b5f: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
    /* 00482b62: mov ebx, 5 */ r_ebx = 0x5u;
    /* 00482b67: cmp ebp, 5 */ {  u32 a = r_ebp; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00482b6a: mov ecx, 0 */ r_ecx = 0x0u;
    /* 00482b6f: mov edx, 1 */ r_edx = 0x1u;
    /* 00482b74: jle 0x482b78 */ if ((fZ||fS!=fO)) goto L_00482b78;
L_00482b76:; BB(0x00482b76);
    /* 00482b76: mov ebp, ebx */ r_ebp = r_ebx;
L_00482b78:; BB(0x00482b78);
    /* 00482b78: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00482b7a: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
    /* 00482b7e: mov eax, 0 */ r_eax = 0x0u;
    /* 00482b83: mov esi, 2 */ r_esi = 0x2u;
    /* 00482b88: mov edi, 2 */ r_edi = 0x2u;
    /* 00482b8d: jg 0x482b91 */ if ((!fZ&&fS==fO)) goto L_00482b91;
L_00482b8f:; BB(0x00482b8f);
    /* 00482b8f: mov ebp, ecx */ r_ebp = r_ecx;
L_00482b91:; BB(0x00482b91);
    /* 00482b91: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 00482b95: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 00482b98: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00482b9b: jle 0x482b9f */ if ((fZ||fS!=fO)) goto L_00482b9f;
L_00482b9d:; BB(0x00482b9d);
    /* 00482b9d: mov ecx, edx */ r_ecx = r_edx;
L_00482b9f:; BB(0x00482b9f);
    /* 00482b9f: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 00482ba3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00482ba5: jg 0x482ba9 */ if ((!fZ&&fS==fO)) goto L_00482ba9;
L_00482ba7:; BB(0x00482ba7);
    /* 00482ba7: mov ecx, eax */ r_ecx = r_eax;
L_00482ba9:; BB(0x00482ba9);
    /* 00482ba9: mov eax, 1 */ r_eax = 0x1u;
    /* 00482bae: mov dword ptr [esp + 0x48], ecx */ W32((u32)(r_esp+0x48u), r_ecx);
    /* 00482bb2: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 00482bb6: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 00482bba: cmp ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00482bbd: jle 0x482bc1 */ if ((fZ||fS!=fO)) goto L_00482bc1;
L_00482bbf:; BB(0x00482bbf);
    /* 00482bbf: mov ebx, eax */ r_ebx = r_eax;
L_00482bc1:; BB(0x00482bc1);
    /* 00482bc1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00482bc3: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00482bc5: jg 0x482bc9 */ if ((!fZ&&fS==fO)) goto L_00482bc9;
L_00482bc7:; BB(0x00482bc7);
    /* 00482bc7: mov ebx, eax */ r_ebx = r_eax;
L_00482bc9:; BB(0x00482bc9);
    /* 00482bc9: mov dword ptr [esp + 0x10], ebx */ W32((u32)(r_esp+0x10u), r_ebx);
    /* 00482bcd: mov eax, 2 */ r_eax = 0x2u;
    /* 00482bd2: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00482bd5: jle 0x482bd9 */ if ((fZ||fS!=fO)) goto L_00482bd9;
L_00482bd7:; BB(0x00482bd7);
    /* 00482bd7: mov ecx, eax */ r_ecx = r_eax;
L_00482bd9:; BB(0x00482bd9);
    /* 00482bd9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00482bdb: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00482bdd: jg 0x482be1 */ if ((!fZ&&fS==fO)) goto L_00482be1;
L_00482bdf:; BB(0x00482bdf);
    /* 00482bdf: mov ecx, eax */ r_ecx = r_eax;
L_00482be1:; BB(0x00482be1);
    /* 00482be1: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
    /* 00482be5: mov eax, 1 */ r_eax = 0x1u;
    /* 00482bea: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00482bed: jle 0x482bf1 */ if ((fZ||fS!=fO)) goto L_00482bf1;
L_00482bef:; BB(0x00482bef);
    /* 00482bef: mov edx, eax */ r_edx = r_eax;
L_00482bf1:; BB(0x00482bf1);
    /* 00482bf1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00482bf3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00482bf5: jg 0x482bf9 */ if ((!fZ&&fS==fO)) goto L_00482bf9;
L_00482bf7:; BB(0x00482bf7);
    /* 00482bf7: mov edx, eax */ r_edx = r_eax;
L_00482bf9:; BB(0x00482bf9);
    /* 00482bf9: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 00482bfd: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 00482c01: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00482c04: jle 0x482c08 */ if ((fZ||fS!=fO)) goto L_00482c08;
L_00482c06:; BB(0x00482c06);
    /* 00482c06: mov eax, esi */ r_eax = r_esi;
L_00482c08:; BB(0x00482c08);
    /* 00482c08: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00482c0a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00482c0c: jg 0x482c10 */ if ((!fZ&&fS==fO)) goto L_00482c10;
L_00482c0e:; BB(0x00482c0e);
    /* 00482c0e: mov eax, esi */ r_eax = r_esi;
L_00482c10:; BB(0x00482c10);
    /* 00482c10: mov esi, dword ptr [esp + 0x20] */ r_esi = R32((u32)(r_esp+0x20u));
    /* 00482c14: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 00482c18: cmp esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00482c1b: jle 0x482c1f */ if ((fZ||fS!=fO)) goto L_00482c1f;
L_00482c1d:; BB(0x00482c1d);
    /* 00482c1d: mov esi, edi */ r_esi = r_edi;
L_00482c1f:; BB(0x00482c1f);
    /* 00482c1f: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00482c21: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00482c23: jg 0x482c27 */ if ((!fZ&&fS==fO)) goto L_00482c27;
L_00482c25:; BB(0x00482c25);
    /* 00482c25: mov esi, edi */ r_esi = r_edi;
L_00482c27:; BB(0x00482c27);
    /* 00482c27: mov edi, dword ptr [esp + 0x24] */ r_edi = R32((u32)(r_esp+0x24u));
    /* 00482c2b: mov dword ptr [esp + 0x3c], esi */ W32((u32)(r_esp+0x3cu), r_esi);
    /* 00482c2f: mov dword ptr [esp + 0x20], esi */ W32((u32)(r_esp+0x20u), r_esi);
    /* 00482c33: mov esi, 2 */ r_esi = 0x2u;
    /* 00482c38: cmp edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00482c3b: jle 0x482c3f */ if ((fZ||fS!=fO)) goto L_00482c3f;
L_00482c3d:; BB(0x00482c3d);
    /* 00482c3d: mov edi, esi */ r_edi = r_esi;
L_00482c3f:; BB(0x00482c3f);
    /* 00482c3f: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00482c41: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00482c43: jg 0x482c47 */ if ((!fZ&&fS==fO)) goto L_00482c47;
L_00482c45:; BB(0x00482c45);
    /* 00482c45: mov edi, esi */ r_edi = r_esi;
L_00482c47:; BB(0x00482c47);
    /* 00482c47: mov esi, dword ptr [esp + 0x28] */ r_esi = R32((u32)(r_esp+0x28u));
    /* 00482c4b: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00482c4e: mov dword ptr [esp + 0x40], edi */ W32((u32)(r_esp+0x40u), r_edi);
    /* 00482c52: mov dword ptr [esp + 0x24], edi */ W32((u32)(r_esp+0x24u), r_edi);
    /* 00482c56: mov edi, 1 */ r_edi = 0x1u;
    /* 00482c5b: jle 0x482c5f */ if ((fZ||fS!=fO)) goto L_00482c5f;
L_00482c5d:; BB(0x00482c5d);
    /* 00482c5d: mov esi, edi */ r_esi = r_edi;
L_00482c5f:; BB(0x00482c5f);
    /* 00482c5f: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00482c61: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00482c63: jg 0x482c67 */ if ((!fZ&&fS==fO)) goto L_00482c67;
L_00482c65:; BB(0x00482c65);
    /* 00482c65: mov esi, edi */ r_esi = r_edi;
L_00482c67:; BB(0x00482c67);
    /* 00482c67: mov edi, dword ptr [esp + 0x2c] */ r_edi = R32((u32)(r_esp+0x2cu));
    /* 00482c6b: mov dword ptr [esp + 0x44], esi */ W32((u32)(r_esp+0x44u), r_esi);
    /* 00482c6f: mov dword ptr [esp + 0x28], esi */ W32((u32)(r_esp+0x28u), r_esi);
    /* 00482c73: test edi, 0xffff0000 */ {  u32 a = r_edi; u32 b = 0xffff0000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00482c79: je 0x482c82 */ if (fZ) goto L_00482c82;
L_00482c7b:; BB(0x00482c7b);
    /* 00482c7b: mov esi, 1 */ r_esi = 0x1u;
    /* 00482c80: jmp 0x482c84 */ goto L_00482c84;
L_00482c82:; BB(0x00482c82);
    /* 00482c82: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_00482c84:; BB(0x00482c84);
    /* 00482c84: mov word ptr [0xa46c52], si */ W16((u32)(0xa46c52u), (u16)r_esi);
    /* 00482c8b: movzx esi, di */ r_esi = (u32)(u16)r_edi;
    /* 00482c8e: mov edi, 3 */ r_edi = 0x3u;
    /* 00482c93: cmp esi, 3 */ {  u32 a = r_esi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00482c96: jl 0x482c9a */ if ((fS!=fO)) goto L_00482c9a;
L_00482c98:; BB(0x00482c98);
    /* 00482c98: mov esi, edi */ r_esi = r_edi;
L_00482c9a:; BB(0x00482c9a);
    /* 00482c9a: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00482c9c: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00482c9e: jg 0x482ca2 */ if ((!fZ&&fS==fO)) goto L_00482ca2;
L_00482ca0:; BB(0x00482ca0);
    /* 00482ca0: mov esi, edi */ r_esi = r_edi;
L_00482ca2:; BB(0x00482ca2);
    /* 00482ca2: mov edi, dword ptr [ebp*8 + 0x9006f4] */ r_edi = R32((u32)(r_ebp*8+0x9006f4u));
    /* 00482ca9: mov ebp, dword ptr [ebp*8 + 0x9006f8] */ r_ebp = R32((u32)(r_ebp*8+0x9006f8u));
    /* 00482cb0: mov dword ptr [esp + 0x2c], esi */ W32((u32)(r_esp+0x2cu), r_esi);
    /* 00482cb4: mov word ptr [0xa46c48], di */ W16((u32)(0xa46c48u), (u16)r_edi);
    /* 00482cbb: mov word ptr [0xa46c4a], bp */ W16((u32)(0xa46c4au), (u16)r_ebp);
    /* 00482cc2: mov ebp, dword ptr [esp + 0x48] */ r_ebp = R32((u32)(r_esp+0x48u));
    /* 00482cc6: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00482cc8: jne 0x482cd1 */ if (!fZ) goto L_00482cd1;
L_00482cca:; BB(0x00482cca);
    /* 00482cca: mov ebp, 0x10 */ r_ebp = 0x10u;
    /* 00482ccf: jmp 0x482cd6 */ goto L_00482cd6;
L_00482cd1:; BB(0x00482cd1);
    /* 00482cd1: mov ebp, 0x20 */ r_ebp = 0x20u;
L_00482cd6:; BB(0x00482cd6);
    /* 00482cd6: mov word ptr [0xa46c4c], bp */ W16((u32)(0xa46c4cu), (u16)r_ebp);
    /* 00482cdd: mov word ptr [0xa46c50], si */ W16((u32)(0xa46c50u), (u16)r_esi);
    /* 00482ce4: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 00482ce8: mov ebp, 2 */ r_ebp = 0x2u;
    /* 00482ced: mov word ptr [0xa46c4e], bp */ W16((u32)(0xa46c4eu), (u16)r_ebp);
    /* 00482cf4: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00482cf7: je 0x482ea0 */ if (fZ) goto L_00482ea0;
L_00482cfd:; BB(0x00482cfd);
    /* 00482cfd: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
L_00482cff:; BB(0x00482cff);
    /* 00482cff: mov word ptr [0xa46c54], bp */ W16((u32)(0xa46c54u), (u16)r_ebp);
    /* 00482d06: mov ebp, dword ptr [esp + 0x40] */ r_ebp = R32((u32)(r_esp+0x40u));
    /* 00482d0a: cmp ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00482d0d: je 0x482e99 */ if (fZ) goto L_00482e99;
L_00482d13:; BB(0x00482d13);
    /* 00482d13: mov ebp, 1 */ r_ebp = 0x1u;
L_00482d18:; BB(0x00482d18);
    /* 00482d18: mov dword ptr [0xa46c56], ebp */ W32((u32)(0xa46c56u), r_ebp);
    /* 00482d1e: mov dword ptr [0xa46c5a], ebx */ W32((u32)(0xa46c5au), r_ebx);
    /* 00482d24: mov word ptr [0xa46c5e], cx */ W16((u32)(0xa46c5eu), (u16)r_ecx);
    /* 00482d2b: mov ecx, dword ptr [esp + 0x44] */ r_ecx = R32((u32)(r_esp+0x44u));
    /* 00482d2f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00482d31: je 0x482d37 */ if (fZ) goto L_00482d37;
L_00482d33:; BB(0x00482d33);
    /* 00482d33: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00482d35: jmp 0x482d3c */ goto L_00482d3c;
L_00482d37:; BB(0x00482d37);
    /* 00482d37: mov ecx, 2 */ r_ecx = 0x2u;
L_00482d3c:; BB(0x00482d3c);
    /* 00482d3c: mov word ptr [0xa46c60], cx */ W16((u32)(0xa46c60u), (u16)r_ecx);
    /* 00482d43: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00482d45: mov word ptr [0xa46c64], dx */ W16((u32)(0xa46c64u), (u16)r_edx);
    /* 00482d4c: je 0x482d55 */ if (fZ) goto L_00482d55;
L_00482d4e:; BB(0x00482d4e);
    /* 00482d4e: mov edx, 2 */ r_edx = 0x2u;
    /* 00482d53: jmp 0x482d57 */ goto L_00482d57;
L_00482d55:; BB(0x00482d55);
    /* 00482d55: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_00482d57:; BB(0x00482d57);
    /* 00482d57: mov word ptr [0xa46c66], dx */ W16((u32)(0xa46c66u), (u16)r_edx);
    /* 00482d5e: mov word ptr [0xa46c68], ax */ W16((u32)(0xa46c68u), (u16)r_eax);
    /* 00482d64: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 00482d68: push 0x900728 */ { u32 v = 0x900728u; r_esp -= 4; W32(r_esp, v); }
    /* 00482d6d: mov word ptr [0xa46c6a], ax */ W16((u32)(0xa46c6au), (u16)r_eax);
    /* 00482d73: mov edx, 2 */ r_edx = 0x2u;
    /* 00482d78: mov word ptr [0xa46c6c], dx */ W16((u32)(0xa46c6cu), (u16)r_edx);
    /* 00482d7f: call 0x82d40c */ r_esp -= 4; W32(r_esp, 0x482d84u); f_0082d40c();
    /* 00482d84: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00482d85: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00482d88: jne 0x482dc2 */ if (!fZ) goto L_00482dc2;
L_00482d8a:; BB(0x00482d8a);
    /* 00482d8a: lea eax, [esp + 0x30] */ r_eax = (u32)(r_esp+0x30u);
    /* 00482d8e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00482d8f: push 0x900728 */ { u32 v = 0x900728u; r_esp -= 4; W32(r_esp, v); }
    /* 00482d94: call 0x82d3c0 */ r_esp -= 4; W32(r_esp, 0x482d99u); f_0082d3c0();
    /* 00482d99: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00482d9c: mov ecx, dword ptr [esp + 0x30] */ r_ecx = R32((u32)(r_esp+0x30u));
    /* 00482da0: mov eax, 4 */ r_eax = 0x4u;
    /* 00482da5: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00482da8: mov edx, 0 */ r_edx = 0x0u;
    /* 00482dad: jbe 0x482db1 */ if ((fC||fZ)) goto L_00482db1;
L_00482daf:; BB(0x00482daf);
    /* 00482daf: mov ecx, eax */ r_ecx = r_eax;
L_00482db1:; BB(0x00482db1);
    /* 00482db1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 00482db3: ja 0x482db7 */ if ((!fC&&!fZ)) goto L_00482db7;
L_00482db5:; BB(0x00482db5);
    /* 00482db5: mov ecx, edx */ r_ecx = r_edx;
L_00482db7:; BB(0x00482db7);
    /* 00482db7: mov dword ptr [esp + 0x30], ecx */ W32((u32)(r_esp+0x30u), r_ecx);
    /* 00482dbb: mov word ptr [0xa46c6c], cx */ W16((u32)(0xa46c6cu), (u16)r_ecx);
L_00482dc2:; BB(0x00482dc2);
    /* 00482dc2: mov dword ptr [0xa46c6e], 1 */ W32((u32)(0xa46c6eu), 0x1u);
    /* 00482dcc: push 0x900744 */ { u32 v = 0x900744u; r_esp -= 4; W32(r_esp, v); }
    /* 00482dd1: call 0x82d40c */ r_esp -= 4; W32(r_esp, 0x482dd6u); f_0082d40c();
    /* 00482dd6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00482dd7: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00482dda: jne 0x482e20 */ if (!fZ) goto L_00482e20;
L_00482ddc:; BB(0x00482ddc);
    /* 00482ddc: lea eax, [esp + 0x34] */ r_eax = (u32)(r_esp+0x34u);
    /* 00482de0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00482de1: push 0x900744 */ { u32 v = 0x900744u; r_esp -= 4; W32(r_esp, v); }
    /* 00482de6: call 0x82d3c0 */ r_esp -= 4; W32(r_esp, 0x482debu); f_0082d3c0();
    /* 00482deb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00482dee: mov ecx, dword ptr [esp + 0x34] */ r_ecx = R32((u32)(r_esp+0x34u));
    /* 00482df2: mov eax, 1 */ r_eax = 0x1u;
    /* 00482df7: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00482dfa: mov edx, 0 */ r_edx = 0x0u;
    /* 00482dff: jbe 0x482e03 */ if ((fC||fZ)) goto L_00482e03;
L_00482e01:; BB(0x00482e01);
    /* 00482e01: mov ecx, eax */ r_ecx = r_eax;
L_00482e03:; BB(0x00482e03);
    /* 00482e03: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 00482e05: ja 0x482e09 */ if ((!fC&&!fZ)) goto L_00482e09;
L_00482e07:; BB(0x00482e07);
    /* 00482e07: mov ecx, edx */ r_ecx = r_edx;
L_00482e09:; BB(0x00482e09);
    /* 00482e09: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00482e0c: mov dword ptr [esp + 0x34], ecx */ W32((u32)(r_esp+0x34u), r_ecx);
    /* 00482e10: jne 0x482e19 */ if (!fZ) goto L_00482e19;
L_00482e12:; BB(0x00482e12);
    /* 00482e12: mov eax, 1 */ r_eax = 0x1u;
    /* 00482e17: jmp 0x482e1b */ goto L_00482e1b;
L_00482e19:; BB(0x00482e19);
    /* 00482e19: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00482e1b:; BB(0x00482e1b);
    /* 00482e1b: mov dword ptr [0xa46c6e], eax */ W32((u32)(0xa46c6eu), r_eax);
L_00482e20:; BB(0x00482e20);
    /* 00482e20: mov dword ptr [0xa46c72], 0 */ W32((u32)(0xa46c72u), 0x0u);
    /* 00482e2a: push 0x900750 */ { u32 v = 0x900750u; r_esp -= 4; W32(r_esp, v); }
    /* 00482e2f: call 0x82d40c */ r_esp -= 4; W32(r_esp, 0x482e34u); f_0082d40c();
    /* 00482e34: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00482e35: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00482e38: jne 0x482e5e */ if (!fZ) goto L_00482e5e;
L_00482e3a:; BB(0x00482e3a);
    /* 00482e3a: lea eax, [esp + 0x38] */ r_eax = (u32)(r_esp+0x38u);
    /* 00482e3e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00482e3f: push 0x900750 */ { u32 v = 0x900750u; r_esp -= 4; W32(r_esp, v); }
    /* 00482e44: call 0x82d3c0 */ r_esp -= 4; W32(r_esp, 0x482e49u); f_0082d3c0();
    /* 00482e49: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00482e4c: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 00482e50: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00482e52: je 0x482e5e */ if (fZ) goto L_00482e5e;
L_00482e54:; BB(0x00482e54);
    /* 00482e54: mov dword ptr [0xa46c72], 1 */ W32((u32)(0xa46c72u), 0x1u);
L_00482e5e:; BB(0x00482e5e);
    /* 00482e5e: mov eax, dword ptr [0xa46c56] */ r_eax = R32((u32)(0xa46c56u));
    /* 00482e63: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00482e65: je 0x482e6c */ if (fZ) goto L_00482e6c;
L_00482e67:; BB(0x00482e67);
    /* 00482e67: call 0x82daa4 */ r_esp -= 4; W32(r_esp, 0x482e6cu); f_0082daa4();
L_00482e6c:; BB(0x00482e6c);
    /* 00482e6c: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 00482e70: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00482e73: je 0x482e92 */ if (fZ) goto L_00482e92;
L_00482e75:; BB(0x00482e75);
    /* 00482e75: movzx eax, word ptr [0xa46c60] */ r_eax = (u32)R16((u32)(0xa46c60u));
    /* 00482e7c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00482e7e: jne 0x482e8a */ if (!fZ) goto L_00482e8a;
L_00482e80:; BB(0x00482e80);
    /* 00482e80: mov dword ptr [0xad93c0], 1 */ W32((u32)(0xad93c0u), 0x1u);
L_00482e8a:; BB(0x00482e8a);
    /* 00482e8a: add esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00482e8d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00482e8e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00482e8f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00482e90: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00482e91: ret  */ FN_RET(0x00482b38); r_esp += 4; return;
L_00482e92:; BB(0x00482e92);
    /* 00482e92: call 0x836bc0 */ r_esp -= 4; W32(r_esp, 0x482e97u); f_00836bc0();
    /* 00482e97: jmp 0x482e75 */ goto L_00482e75;
L_00482e99:; BB(0x00482e99);
    /* 00482e99: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00482e9b: jmp 0x482d18 */ goto L_00482d18;
L_00482ea0:; BB(0x00482ea0);
    /* 00482ea0: mov ebp, 1 */ r_ebp = 0x1u;
    /* 00482ea5: jmp 0x482cff */ goto L_00482cff;
}

void f_00482eac(void) /* sub_482EAC */
{
    FN_ENTER(0x00482eac);
    /* 00482eac: mov edx, 0xa46c48 */ r_edx = 0xa46c48u;
    /* 00482eb1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00482eb3: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00482eb5: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00482eb8: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 00482ebb: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 00482ebe: mov dword ptr [edx + 0x10], eax */ W32((u32)(r_edx+0x10u), r_eax);
    /* 00482ec1: mov dword ptr [edx + 0x14], eax */ W32((u32)(r_edx+0x14u), r_eax);
    /* 00482ec4: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 00482ec7: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 00482eca: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 00482ecd: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 00482ed0: mov dword ptr [edx + 0x28], eax */ W32((u32)(r_edx+0x28u), r_eax);
    /* 00482ed3: mov word ptr [edx + 0x2c], ax */ W16((u32)(r_edx+0x2cu), (u16)r_eax);
    /* 00482ed7: push 0x900730 */ { u32 v = 0x900730u; r_esp -= 4; W32(r_esp, v); }
    /* 00482edc: call 0x82d40c */ r_esp -= 4; W32(r_esp, 0x482ee1u); f_0082d40c();
    /* 00482ee1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00482ee2: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 00482ee5: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00482ee8: jne 0x482efd */ if (!fZ) goto L_00482efd;
L_00482eea:; BB(0x00482eea);
    /* 00482eea: push 0x900738 */ { u32 v = 0x900738u; r_esp -= 4; W32(r_esp, v); }
    /* 00482eef: call 0x82d40c */ r_esp -= 4; W32(r_esp, 0x482ef4u); f_0082d40c();
    /* 00482ef4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00482ef5: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 00482ef8: cmp eax, 0x24 */ {  u32 a = r_eax; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00482efb: je 0x482f03 */ if (fZ) goto L_00482f03;
L_00482efd:; BB(0x00482efd);
    /* 00482efd: call 0x482aa8 */ r_esp -= 4; W32(r_esp, 0x482f02u); f_00482aa8();
    /* 00482f02: ret  */ FN_RET(0x00482eac); r_esp += 4; return;
L_00482f03:; BB(0x00482f03);
    /* 00482f03: call 0x482b38 */ r_esp -= 4; W32(r_esp, 0x482f08u); f_00482b38();
    /* 00482f08: ret  */ FN_RET(0x00482eac); r_esp += 4; return;
}

void f_00482f0c(void) /* sub_482F0C */
{
    FN_ENTER(0x00482f0c);
    /* 00482f0c: movzx eax, word ptr [0xa46c4e] */ r_eax = (u32)R16((u32)(0xa46c4eu));
    /* 00482f13: ret  */ FN_RET(0x00482f0c); r_esp += 4; return;
}

void f_00482f14(void) /* sub_482F14 */
{
    FN_ENTER(0x00482f14);
    /* 00482f14: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00482f15: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00482f17: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00482f19: call 0x482f38 */ r_esp -= 4; W32(r_esp, 0x482f1eu); f_00482f38();
    /* 00482f1e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00482f22: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00482f24: jne 0x482f2a */ if (!fZ) goto L_00482f2a;
L_00482f26:; BB(0x00482f26);
    /* 00482f26: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00482f27: ret 4 */ FN_RET(0x00482f14); r_esp += 8; return;
L_00482f2a:; BB(0x00482f2a);
    /* 00482f2a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00482f2b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x482f30u); f_005c2f74();
    /* 00482f30: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00482f31: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00482f32: ret 4 */ FN_RET(0x00482f14); r_esp += 8; return;
}

void f_00482f38(void) /* sub_482F38 */
{
    FN_ENTER(0x00482f38);
    /* 00482f38: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00482f39: mov ebp, esp */ r_ebp = r_esp;
    /* 00482f3b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00482f3d: push 0x8cf7d4 */ { u32 v = 0x8cf7d4u; r_esp -= 4; W32(r_esp, v); }
    /* 00482f42: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00482f48: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00482f49: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00482f50: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00482f53: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00482f56: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00482f59: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00482f5c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00482f5f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00482f62: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00482f65: mov dword ptr [ecx], 0xaf8498 */ W32((u32)(r_ecx), 0xaf8498u);
    /* 00482f6b: cmp ecx, dword ptr [0xa46c7c] */ {  u32 a = r_ecx; u32 b = R32((u32)(0xa46c7cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00482f71: jne 0x482f7d */ if (!fZ) goto L_00482f7d;
L_00482f73:; BB(0x00482f73);
    /* 00482f73: mov dword ptr [0xa46c7c], 0 */ W32((u32)(0xa46c7cu), 0x0u);
L_00482f7d:; BB(0x00482f7d);
    /* 00482f7d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00482f84: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x482f89u); f_008171e8();
    /* 00482f89: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00482f8c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00482f93: mov esp, ebp */ r_esp = r_ebp;
    /* 00482f95: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00482f96: ret  */ FN_RET(0x00482f38); r_esp += 4; return;
}

void f_00482f98(void) /* sub_482F98 */
{
    FN_ENTER(0x00482f98);
    /* 00482f98: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00482f99: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00482f9b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00482f9d: call 0x482fbc */ r_esp -= 4; W32(r_esp, 0x482fa2u); f_00482fbc();
    /* 00482fa2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00482fa6: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00482fa8: jne 0x482fae */ if (!fZ) goto L_00482fae;
L_00482faa:; BB(0x00482faa);
    /* 00482faa: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00482fab: ret 4 */ FN_RET(0x00482f98); r_esp += 8; return;
L_00482fae:; BB(0x00482fae);
    /* 00482fae: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00482faf: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x482fb4u); f_005c2f74();
    /* 00482fb4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00482fb5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00482fb6: ret 4 */ FN_RET(0x00482f98); r_esp += 8; return;
}

void f_00482fbc(void) /* sub_482FBC */
{
    FN_ENTER(0x00482fbc);
    /* 00482fbc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00482fbd: mov ebp, esp */ r_ebp = r_esp;
    /* 00482fbf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00482fc1: push 0x8cf7f0 */ { u32 v = 0x8cf7f0u; r_esp -= 4; W32(r_esp, v); }
    /* 00482fc6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00482fcc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00482fcd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00482fd4: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00482fd7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00482fda: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00482fdd: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00482fe0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00482fe3: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00482fe6: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00482fe9: mov dword ptr [ecx], 0xaf84a8 */ W32((u32)(r_ecx), 0xaf84a8u);
    /* 00482fef: cmp ecx, dword ptr [0xa46c78] */ {  u32 a = r_ecx; u32 b = R32((u32)(0xa46c78u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00482ff5: jne 0x483001 */ if (!fZ) goto L_00483001;
L_00482ff7:; BB(0x00482ff7);
    /* 00482ff7: mov dword ptr [0xa46c78], 0 */ W32((u32)(0xa46c78u), 0x0u);
L_00483001:; BB(0x00483001);
    /* 00483001: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00483008: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x48300du); f_008171e8();
    /* 0048300d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00483010: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00483017: mov esp, ebp */ r_esp = r_ebp;
    /* 00483019: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048301a: ret  */ FN_RET(0x00482fbc); r_esp += 4; return;
}

