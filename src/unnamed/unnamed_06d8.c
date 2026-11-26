#include "protos.h"

void f_006d8098(void) /* sub_6D8098 */
{
    FN_ENTER(0x006d8098);
    /* 006d8098: mov dword ptr [0xa962a0], 0x3f800000 */ W32((u32)(0xa962a0u), 0x3f800000u);
    /* 006d80a2: mov dword ptr [0xa962a4], 0x41000000 */ W32((u32)(0xa962a4u), 0x41000000u);
    /* 006d80ac: mov dword ptr [0xa962a8], 0x3fc00000 */ W32((u32)(0xa962a8u), 0x3fc00000u);
    /* 006d80b6: ret  */ FN_RET(0x006d8098); r_esp += 4; return;
}

void f_006d80b8(void) /* sub_6D80B8 */
{
    FN_ENTER(0x006d80b8);
    /* 006d80b8: call 0x6dcc44 */ r_esp -= 4; W32(r_esp, 0x6d80bdu); f_006dcc44();
    /* 006d80bd: call 0x6c86ec */ r_esp -= 4; W32(r_esp, 0x6d80c2u); f_006c86ec();
    /* 006d80c2: call 0x6dcab0 */ r_esp -= 4; W32(r_esp, 0x6d80c7u); f_006dcab0();
    /* 006d80c7: mov dword ptr [0xa962ac], 0 */ W32((u32)(0xa962acu), 0x0u);
    /* 006d80d1: mov ecx, 0xa9c4d4 */ r_ecx = 0xa9c4d4u;
    /* 006d80d6: call 0x827374 */ r_esp -= 4; W32(r_esp, 0x6d80dbu); f_00827374();
    /* 006d80db: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006d80dd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006d80df: mov ecx, 9 */ r_ecx = 0x9u;
    /* 006d80e4: jge 0x6d80e8 */ if ((fS==fO)) goto L_006d80e8;
L_006d80e6:; BB(0x006d80e6);
    /* 006d80e6: mov eax, edx */ r_eax = r_edx;
L_006d80e8:; BB(0x006d80e8);
    /* 006d80e8: mov edx, dword ptr [0xa9cd68] */ r_edx = R32((u32)(0xa9cd68u));
    /* 006d80ee: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006d80f1: jle 0x6d80f5 */ if ((fZ||fS!=fO)) goto L_006d80f5;
L_006d80f3:; BB(0x006d80f3);
    /* 006d80f3: mov eax, ecx */ r_eax = r_ecx;
L_006d80f5:; BB(0x006d80f5);
    /* 006d80f5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006d80f7: mov dword ptr [0xa962bc], eax */ W32((u32)(0xa962bcu), r_eax);
    /* 006d80fc: mov eax, 0 */ r_eax = 0x0u;
    /* 006d8101: jge 0x6d8105 */ if ((fS==fO)) goto L_006d8105;
L_006d8103:; BB(0x006d8103);
    /* 006d8103: mov edx, eax */ r_edx = r_eax;
L_006d8105:; BB(0x006d8105);
    /* 006d8105: mov eax, 3 */ r_eax = 0x3u;
    /* 006d810a: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006d810d: jle 0x6d8111 */ if ((fZ||fS!=fO)) goto L_006d8111;
L_006d810f:; BB(0x006d810f);
    /* 006d810f: mov edx, eax */ r_edx = r_eax;
L_006d8111:; BB(0x006d8111);
    /* 006d8111: mov dword ptr [0xa962b4], edx */ W32((u32)(0xa962b4u), r_edx);
    /* 006d8117: ret  */ FN_RET(0x006d80b8); r_esp += 4; return;
}

void f_006d8118(void) /* sub_6D8118 */
{
    FN_ENTER(0x006d8118);
    /* 006d8118: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006d8119: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006d811b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006d811d: call 0x6d813c */ r_esp -= 4; W32(r_esp, 0x6d8122u); f_006d813c();
    /* 006d8122: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006d8126: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d8128: jne 0x6d812e */ if (!fZ) goto L_006d812e;
L_006d812a:; BB(0x006d812a);
    /* 006d812a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d812b: ret 4 */ FN_RET(0x006d8118); r_esp += 8; return;
L_006d812e:; BB(0x006d812e);
    /* 006d812e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006d812f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6d8134u); f_005c2f74();
    /* 006d8134: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d8135: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d8136: ret 4 */ FN_RET(0x006d8118); r_esp += 8; return;
}

void f_006d813c(void) /* sub_6D813C */
{
    FN_ENTER(0x006d813c);
    /* 006d813c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006d813d: mov ebp, esp */ r_ebp = r_esp;
    /* 006d813f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006d8141: push 0x8ee264 */ { u32 v = 0x8ee264u; r_esp -= 4; W32(r_esp, v); }
    /* 006d8146: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006d814c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d814d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006d8154: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006d8157: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006d815a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006d815d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006d8160: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006d8163: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006d8166: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006d816d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006d8170: mov eax, dword ptr [ecx + 0x28] */ r_eax = R32((u32)(r_ecx+0x28u));
    /* 006d8173: mov dword ptr [ecx], 0xb3c918 */ W32((u32)(r_ecx), 0xb3c918u);
    /* 006d8179: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d817b: je 0x6d818e */ if (fZ) goto L_006d818e;
L_006d817d:; BB(0x006d817d);
    /* 006d817d: mov ecx, eax */ r_ecx = r_eax;
    /* 006d817f: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6d8184u); f_007127b0();
    /* 006d8184: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006d8187: mov dword ptr [ecx + 0x28], 0 */ W32((u32)(r_ecx+0x28u), 0x0u);
L_006d818e:; BB(0x006d818e);
    /* 006d818e: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 006d8191: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d8193: je 0x6d81a6 */ if (fZ) goto L_006d81a6;
L_006d8195:; BB(0x006d8195);
    /* 006d8195: mov ecx, eax */ r_ecx = r_eax;
    /* 006d8197: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6d819cu); f_007127b0();
    /* 006d819c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006d819f: mov dword ptr [ecx + 0x30], 0 */ W32((u32)(r_ecx+0x30u), 0x0u);
L_006d81a6:; BB(0x006d81a6);
    /* 006d81a6: mov eax, dword ptr [ecx + 0x34] */ r_eax = R32((u32)(r_ecx+0x34u));
    /* 006d81a9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d81ab: je 0x6d81be */ if (fZ) goto L_006d81be;
L_006d81ad:; BB(0x006d81ad);
    /* 006d81ad: mov ecx, eax */ r_ecx = r_eax;
    /* 006d81af: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6d81b4u); f_007127b0();
    /* 006d81b4: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006d81b7: mov dword ptr [ecx + 0x34], 0 */ W32((u32)(r_ecx+0x34u), 0x0u);
L_006d81be:; BB(0x006d81be);
    /* 006d81be: mov eax, dword ptr [ecx + 0x38] */ r_eax = R32((u32)(r_ecx+0x38u));
    /* 006d81c1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d81c3: je 0x6d81d6 */ if (fZ) goto L_006d81d6;
L_006d81c5:; BB(0x006d81c5);
    /* 006d81c5: mov ecx, eax */ r_ecx = r_eax;
    /* 006d81c7: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6d81ccu); f_007127b0();
    /* 006d81cc: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006d81cf: mov dword ptr [ecx + 0x38], 0 */ W32((u32)(r_ecx+0x38u), 0x0u);
L_006d81d6:; BB(0x006d81d6);
    /* 006d81d6: mov eax, dword ptr [ecx + 0x3c] */ r_eax = R32((u32)(r_ecx+0x3cu));
    /* 006d81d9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d81db: je 0x6d81ee */ if (fZ) goto L_006d81ee;
L_006d81dd:; BB(0x006d81dd);
    /* 006d81dd: mov ecx, eax */ r_ecx = r_eax;
    /* 006d81df: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6d81e4u); f_007127b0();
    /* 006d81e4: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006d81e7: mov dword ptr [ecx + 0x3c], 0 */ W32((u32)(r_ecx+0x3cu), 0x0u);
L_006d81ee:; BB(0x006d81ee);
    /* 006d81ee: mov eax, dword ptr [ecx + 0x40] */ r_eax = R32((u32)(r_ecx+0x40u));
    /* 006d81f1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d81f3: je 0x6d8206 */ if (fZ) goto L_006d8206;
L_006d81f5:; BB(0x006d81f5);
    /* 006d81f5: mov ecx, eax */ r_ecx = r_eax;
    /* 006d81f7: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6d81fcu); f_007127b0();
    /* 006d81fc: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006d81ff: mov dword ptr [ecx + 0x40], 0 */ W32((u32)(r_ecx+0x40u), 0x0u);
L_006d8206:; BB(0x006d8206);
    /* 006d8206: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006d820d: call 0x6dc848 */ r_esp -= 4; W32(r_esp, 0x6d8212u); f_006dc848();
    /* 006d8212: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006d8215: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006d821c: mov esp, ebp */ r_esp = r_ebp;
    /* 006d821e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d821f: ret  */ FN_RET(0x006d813c); r_esp += 4; return;
}

void f_006d8220(void) /* sub_6D8220 */
{
    FN_ENTER(0x006d8220);
    /* 006d8220: mov ecx, dword ptr [ecx + 0x2c] */ r_ecx = R32((u32)(r_ecx+0x2cu));
    /* 006d8223: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d8225: je 0x6d8234 */ if (fZ) goto L_006d8234;
L_006d8227:; BB(0x006d8227);
    /* 006d8227: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d822b: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d822f: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006d8231: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x6d8234u); call_ind(t); }
L_006d8234:; BB(0x006d8234);
    /* 006d8234: ret 8 */ FN_RET(0x006d8220); r_esp += 12; return;
}

void f_006d8238(void) /* sub_6D8238 */
{
    FN_ENTER(0x006d8238);
    /* 006d8238: mov ecx, dword ptr [ecx + 0x2c] */ r_ecx = R32((u32)(r_ecx+0x2cu));
    /* 006d823b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d823d: je 0x6d824c */ if (fZ) goto L_006d824c;
L_006d823f:; BB(0x006d823f);
    /* 006d823f: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d8243: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d8247: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006d8249: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x6d824cu); call_ind(t); }
L_006d824c:; BB(0x006d824c);
    /* 006d824c: ret 8 */ FN_RET(0x006d8238); r_esp += 12; return;
}

void f_006d8250(void) /* sub_6D8250 */
{
    FN_ENTER(0x006d8250);
    /* 006d8250: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006d8251: mov ebp, esp */ r_ebp = r_esp;
    /* 006d8253: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006d8255: push 0x8ee280 */ { u32 v = 0x8ee280u; r_esp -= 4; W32(r_esp, v); }
    /* 006d825a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006d8260: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d8261: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006d8268: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006d826b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006d826e: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 006d8271: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 006d8274: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 006d8277: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 006d827a: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d827d: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 006d8280: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 006d8283: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006d8286: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 006d8289: call 0x6dc898 */ r_esp -= 4; W32(r_esp, 0x6d828eu); f_006dc898();
    /* 006d828e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006d8295: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006d8298: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 006d829b: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006d829e: lea esi, [ebp - 0x2c] */ r_esi = (u32)(r_ebp+0xffffffd4u);
    /* 006d82a1: mov dword ptr [ebx + 0x24], edi */ W32((u32)(r_ebx+0x24u), r_edi);
    /* 006d82a4: mov dword ptr [ebx + 0x2c], edx */ W32((u32)(r_ebx+0x2cu), r_edx);
    /* 006d82a7: mov dword ptr [ebx], 0xb3c918 */ W32((u32)(r_ebx), 0xb3c918u);
    /* 006d82ad: mov eax, dword ptr [0x9cf1f0] */ r_eax = R32((u32)(0x9cf1f0u));
    /* 006d82b2: mov dword ptr [ebx + 4], eax */ W32((u32)(r_ebx+0x4u), r_eax);
    /* 006d82b5: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006d82b7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006d82b8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006d82b9: mov dword ptr [ebx + 0x28], ecx */ W32((u32)(r_ebx+0x28u), r_ecx);
    /* 006d82bc: mov dword ptr [ebx + 0x30], ecx */ W32((u32)(r_ebx+0x30u), r_ecx);
    /* 006d82bf: mov dword ptr [ebx + 0x34], ecx */ W32((u32)(r_ebx+0x34u), r_ecx);
    /* 006d82c2: mov dword ptr [ebx + 0x38], ecx */ W32((u32)(r_ebx+0x38u), r_ecx);
    /* 006d82c5: mov dword ptr [ebx + 0x3c], ecx */ W32((u32)(r_ebx+0x3cu), r_ecx);
    /* 006d82c8: mov dword ptr [ebx + 0x40], ecx */ W32((u32)(r_ebx+0x40u), r_ecx);
    /* 006d82cb: mov dword ptr [ebx + 0x44], ecx */ W32((u32)(r_ebx+0x44u), r_ecx);
    /* 006d82ce: mov dword ptr [ebx + 0x50], ecx */ W32((u32)(r_ebx+0x50u), r_ecx);
    /* 006d82d1: mov dword ptr [ebx + 0x20], ecx */ W32((u32)(r_ebx+0x20u), r_ecx);
    /* 006d82d4: mov dword ptr [ebx + 0x1c0], ecx */ W32((u32)(r_ebx+0x1c0u), r_ecx);
    /* 006d82da: mov dword ptr [ebx + 0x4c], ecx */ W32((u32)(r_ebx+0x4cu), r_ecx);
    /* 006d82dd: mov dword ptr [ebx + 0x54], ecx */ W32((u32)(r_ebx+0x54u), r_ecx);
    /* 006d82e0: call 0x6d7ef8 */ r_esp -= 4; W32(r_esp, 0x6d82e5u); f_006d7ef8();
    /* 006d82e5: push dword ptr [ebp - 0x2c] */ { u32 v = R32((u32)(r_ebp+0xffffffd4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d82e8: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x6d82edu); f_0061cdb0();
    /* 006d82ed: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006d82f0: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 006d82f3: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 006d82f6: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006d82f9: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006d82fc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006d82ff: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006d8306: mov esp, ebp */ r_esp = r_ebp;
    /* 006d8308: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d8309: ret 0xc */ FN_RET(0x006d8250); r_esp += 16; return;
}

void f_006d830c(void) /* sub_6D830C */
{
    FN_ENTER(0x006d830c);
    /* 006d830c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006d830d: mov esi, ecx */ r_esi = r_ecx;
    /* 006d830f: mov eax, dword ptr [esi + 0x20] */ r_eax = R32((u32)(r_esi+0x20u));
    /* 006d8312: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006d8315: ja 0x6d837a */ if ((!fC&&!fZ)) goto L_006d837a;
L_006d8317:; BB(0x006d8317);
    /* 006d8317: mov eax, dword ptr [eax*4 + 0x96c37c] */ r_eax = R32((u32)(r_eax*4+0x96c37cu));
    /* 006d831e: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_006d837a:; BB(0x006d837a);
    /* 006d837a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006d837b: ret  */ FN_RET(0x006d830c); r_esp += 4; return;
}

void f_006d8320(void)
{
    FN_ENTER(0x006d8320);
    /* 006d8320: mov ecx, esi */ r_ecx = r_esi;
    /* 006d8322: call 0x6d87dc */ r_esp -= 4; W32(r_esp, 0x6d8327u); f_006d87dc();
    /* 006d8327: jmp 0x6d837a */ goto L_006d837a;
L_006d837a:; BB(0x006d837a);
    /* 006d837a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006d837b: ret  */ FN_RET(0x006d8320); r_esp += 4; return;
}

void f_006d8329(void)
{
    FN_ENTER(0x006d8329);
    /* 006d8329: mov ecx, esi */ r_ecx = r_esi;
    /* 006d832b: call 0x6d89ec */ r_esp -= 4; W32(r_esp, 0x6d8330u); f_006d89ec();
    /* 006d8330: jmp 0x6d837a */ goto L_006d837a;
L_006d837a:; BB(0x006d837a);
    /* 006d837a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006d837b: ret  */ FN_RET(0x006d8329); r_esp += 4; return;
}

void f_006d8332(void)
{
    FN_ENTER(0x006d8332);
    /* 006d8332: mov ecx, esi */ r_ecx = r_esi;
    /* 006d8334: call 0x6d89ec */ r_esp -= 4; W32(r_esp, 0x6d8339u); f_006d89ec();
    /* 006d8339: jmp 0x6d837a */ goto L_006d837a;
L_006d837a:; BB(0x006d837a);
    /* 006d837a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006d837b: ret  */ FN_RET(0x006d8332); r_esp += 4; return;
}

void f_006d833b(void)
{
    FN_ENTER(0x006d833b);
    /* 006d833b: mov eax, dword ptr [esi + 0x1c0] */ r_eax = R32((u32)(r_esi+0x1c0u));
    /* 006d8341: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d8343: je 0x6d834b */ if (fZ) goto L_006d834b;
L_006d8345:; BB(0x006d8345);
    /* 006d8345: push dword ptr [esi + 0x2c] */ { u32 v = R32((u32)(r_esi+0x2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006d8348: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6d834au); call_ind(t); }
    /* 006d834a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_006d834b:; BB(0x006d834b);
    /* 006d834b: movzx eax, word ptr [esi + 8] */ r_eax = (u32)R16((u32)(r_esi+0x8u));
    /* 006d834f: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d8354: mov word ptr [esi + 8], ax */ W16((u32)(r_esi+0x8u), (u16)r_eax);
    /* 006d8358: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006d8359: ret  */ FN_RET(0x006d833b); r_esp += 4; return;
}

void f_006d835a(void)
{
    FN_ENTER(0x006d835a);
    /* 006d835a: mov ecx, esi */ r_ecx = r_esi;
    /* 006d835c: call 0x6d837c */ r_esp -= 4; W32(r_esp, 0x6d8361u); f_006d837c();
    /* 006d8361: jmp 0x6d837a */ goto L_006d837a;
L_006d837a:; BB(0x006d837a);
    /* 006d837a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006d837b: ret  */ FN_RET(0x006d835a); r_esp += 4; return;
}

void f_006d8363(void)
{
    FN_ENTER(0x006d8363);
    /* 006d8363: mov ecx, esi */ r_ecx = r_esi;
    /* 006d8365: call 0x6d8660 */ r_esp -= 4; W32(r_esp, 0x6d836au); f_006d8660();
    /* 006d836a: jmp 0x6d837a */ goto L_006d837a;
L_006d837a:; BB(0x006d837a);
    /* 006d837a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006d837b: ret  */ FN_RET(0x006d8363); r_esp += 4; return;
}

void f_006d836c(void)
{
    FN_ENTER(0x006d836c);
    /* 006d836c: mov ecx, esi */ r_ecx = r_esi;
    /* 006d836e: call 0x6d8a40 */ r_esp -= 4; W32(r_esp, 0x6d8373u); f_006d8a40();
    /* 006d8373: mov dword ptr [esi + 0x20], 1 */ W32((u32)(r_esi+0x20u), 0x1u);
    /* 006d837a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006d837b: ret  */ FN_RET(0x006d836c); r_esp += 4; return;
}

void f_006d837a(void)
{
    FN_ENTER(0x006d837a);
    /* 006d837a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006d837b: ret  */ FN_RET(0x006d837a); r_esp += 4; return;
}

void f_006d837c(void) /* sub_6D837C */
{
    FN_ENTER(0x006d837c);
    /* 006d837c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006d837d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006d837e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006d837f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006d8380: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006d8383: mov edi, ecx */ r_edi = r_ecx;
    /* 006d8385: mov eax, dword ptr [edi + 0x4c] */ r_eax = R32((u32)(r_edi+0x4cu));
    /* 006d8388: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d838a: jne 0x6d841c */ if (!fZ) goto L_006d841c;
L_006d8390:; BB(0x006d8390);
    /* 006d8390: mov ecx, dword ptr [edi + 0x34] */ r_ecx = R32((u32)(r_edi+0x34u));
    /* 006d8393: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d8395: je 0x6d83c5 */ if (fZ) goto L_006d83c5;
L_006d8397:; BB(0x006d8397);
    /* 006d8397: movzx eax, word ptr [ecx + 0x60] */ r_eax = (u32)R16((u32)(r_ecx+0x60u));
    /* 006d839b: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006d839d: je 0x6d83c5 */ if (fZ) goto L_006d83c5;
L_006d839f:; BB(0x006d839f);
    /* 006d839f: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 006d83a2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d83a4: je 0x6d8579 */ if (fZ) goto L_006d8579;
L_006d83aa:; BB(0x006d83aa);
    /* 006d83aa: mov eax, dword ptr [ecx + 0x70] */ r_eax = R32((u32)(r_ecx+0x70u));
    /* 006d83ad: mov dword ptr [edi + 0x50], eax */ W32((u32)(r_edi+0x50u), r_eax);
    /* 006d83b0: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6d83b5u); f_007127b0();
    /* 006d83b5: mov dword ptr [edi + 0x34], 0 */ W32((u32)(r_edi+0x34u), 0x0u);
    /* 006d83bc: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006d83be: mov dword ptr [edi + 0x4c], 1 */ W32((u32)(r_edi+0x4cu), 0x1u);
L_006d83c5:; BB(0x006d83c5);
    /* 006d83c5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d83c7: je 0x6d8571 */ if (fZ) goto L_006d8571;
L_006d83cd:; BB(0x006d83cd);
    /* 006d83cd: movzx eax, word ptr [ecx + 0x60] */ r_eax = (u32)R16((u32)(r_ecx+0x60u));
    /* 006d83d1: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006d83d3: je 0x6d8571 */ if (fZ) goto L_006d8571;
L_006d83d9:; BB(0x006d83d9);
    /* 006d83d9: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6d83deu); f_007127b0();
    /* 006d83de: mov edx, dword ptr [edi + 0x28] */ r_edx = R32((u32)(r_edi+0x28u));
    /* 006d83e1: mov dword ptr [edi + 0x34], 0 */ W32((u32)(r_edi+0x34u), 0x0u);
    /* 006d83e8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d83ea: je 0x6d840d */ if (fZ) goto L_006d840d;
L_006d83ec:; BB(0x006d83ec);
    /* 006d83ec: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 006d83f3: and eax, 0xfffd */ {  u32 a = r_eax; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 006d83f8: mov ecx, dword ptr [edx + 0x60] */ r_ecx = R32((u32)(r_edx+0x60u));
    /* 006d83fb: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
    /* 006d8402: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d8404: je 0x6d840d */ if (fZ) goto L_006d840d;
L_006d8406:; BB(0x006d8406);
    /* 006d8406: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d8408: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x6d840du); f_00760acc();
L_006d840d:; BB(0x006d840d);
    /* 006d840d: mov dword ptr [edi + 0x20], 1 */ W32((u32)(r_edi+0x20u), 0x1u);
    /* 006d8414: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006d8417: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d8418: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d8419: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006d841a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006d841b: ret  */ FN_RET(0x006d837c); r_esp += 4; return;
L_006d841c:; BB(0x006d841c);
    /* 006d841c: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d841f: jne 0x6d8571 */ if (!fZ) goto L_006d8571;
L_006d8425:; BB(0x006d8425);
    /* 006d8425: mov ecx, dword ptr [edi + 0x30] */ r_ecx = R32((u32)(r_edi+0x30u));
    /* 006d8428: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d842a: je 0x6d8527 */ if (fZ) goto L_006d8527;
L_006d8430:; BB(0x006d8430);
    /* 006d8430: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 006d8437: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006d8439: je 0x6d8527 */ if (fZ) goto L_006d8527;
L_006d843f:; BB(0x006d843f);
    /* 006d843f: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x6d8444u); f_007365f4();
    /* 006d8444: mov esi, eax */ r_esi = r_eax;
    /* 006d8446: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d8448: jne 0x6d851b */ if (!fZ) goto L_006d851b;
L_006d844e:; BB(0x006d844e);
    /* 006d844e: mov ecx, dword ptr [edi + 0x28] */ r_ecx = R32((u32)(r_edi+0x28u));
    /* 006d8451: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d8453: je 0x6d8507 */ if (fZ) goto L_006d8507;
L_006d8459:; BB(0x006d8459);
    /* 006d8459: call 0x737d90 */ r_esp -= 4; W32(r_esp, 0x6d845eu); f_00737d90();
    /* 006d845e: mov ebp, eax */ r_ebp = r_eax;
    /* 006d8460: lea ebx, [ebp + ebp*4] */ r_ebx = (u32)(r_ebp+r_ebp*4);
    /* 006d8464: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006d8466: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006d8468: lea ebx, [edi + ebx + 0x58] */ r_ebx = (u32)(r_edi+r_ebx+0x58u);
    /* 006d846c: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 006d846e: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 006d8471: mov edx, dword ptr [ebx + 4] */ r_edx = R32((u32)(r_ebx+0x4u));
    /* 006d8474: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 006d8478: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 006d847b: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 006d847f: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 006d8482: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 006d8486: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 006d8489: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 006d848d: movzx edx, word ptr [0xa9c4f4] */ r_edx = (u32)R16((u32)(0xa9c4f4u));
    /* 006d8494: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006d8495: call 0x5e3aac */ r_esp -= 4; W32(r_esp, 0x6d849au); f_005e3aac();
    /* 006d849a: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 006d849e: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 006d84a2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006d84a3: call 0x6dc1e4 */ r_esp -= 4; W32(r_esp, 0x6d84a8u); f_006dc1e4();
    /* 006d84a8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d84ab: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d84ad: je 0x6d84bd */ if (fZ) goto L_006d84bd;
L_006d84af:; BB(0x006d84af);
    /* 006d84af: movzx edx, byte ptr [edi + 0x50] */ r_edx = (u32)R8((u32)(r_edi+0x50u));
    /* 006d84b3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006d84b4: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 006d84b8: call 0x5d2484 */ r_esp -= 4; W32(r_esp, 0x6d84bdu); f_005d2484();
L_006d84bd:; BB(0x006d84bd);
    /* 006d84bd: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 006d84c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006d84c1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006d84c3: mov ecx, dword ptr [edi + 0x24] */ r_ecx = R32((u32)(r_edi+0x24u));
    /* 006d84c6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006d84c7: call 0x68f1d0 */ r_esp -= 4; W32(r_esp, 0x6d84ccu); f_0068f1d0();
    /* 006d84cc: mov edx, dword ptr [edi + 0x3c] */ r_edx = R32((u32)(r_edi+0x3cu));
    /* 006d84cf: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d84d1: je 0x6d84ed */ if (fZ) goto L_006d84ed;
L_006d84d3:; BB(0x006d84d3);
    /* 006d84d3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006d84d5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006d84d6: mov edx, dword ptr [edi + 0x24] */ r_edx = R32((u32)(r_edi+0x24u));
    /* 006d84d9: mov ecx, dword ptr [edx + 0xdf4] */ r_ecx = R32((u32)(r_edx+0xdf4u));
    /* 006d84df: call 0x6a4b74 */ r_esp -= 4; W32(r_esp, 0x6d84e4u); f_006a4b74();
    /* 006d84e4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d84e5: mov ecx, dword ptr [edi + 0x3c] */ r_ecx = R32((u32)(r_edi+0x3cu));
    /* 006d84e8: call 0x73f040 */ r_esp -= 4; W32(r_esp, 0x6d84edu); f_0073f040();
L_006d84ed:; BB(0x006d84ed);
    /* 006d84ed: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006d84ee: call 0x6dc1f8 */ r_esp -= 4; W32(r_esp, 0x6d84f3u); f_006dc1f8();
    /* 006d84f3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d84f4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d84f6: je 0x6d84ff */ if (fZ) goto L_006d84ff;
L_006d84f8:; BB(0x006d84f8);
    /* 006d84f8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006d84f9: call 0x6dca88 */ r_esp -= 4; W32(r_esp, 0x6d84feu); f_006dca88();
    /* 006d84fe: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_006d84ff:; BB(0x006d84ff);
    /* 006d84ff: mov ecx, dword ptr [edi + 0x28] */ r_ecx = R32((u32)(r_edi+0x28u));
    /* 006d8502: call 0x737d70 */ r_esp -= 4; W32(r_esp, 0x6d8507u); f_00737d70();
L_006d8507:; BB(0x006d8507);
    /* 006d8507: mov ecx, dword ptr [edi + 0x30] */ r_ecx = R32((u32)(r_edi+0x30u));
    /* 006d850a: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6d850fu); f_007127b0();
    /* 006d850f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006d8511: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006d8513: mov dword ptr [edi + 0x30], edx */ W32((u32)(r_edi+0x30u), r_edx);
    /* 006d8516: mov dword ptr [edi + 0x20], edx */ W32((u32)(r_edi+0x20u), r_edx);
    /* 006d8519: jmp 0x6d851e */ goto L_006d851e;
L_006d851b:; BB(0x006d851b);
    /* 006d851b: mov ecx, dword ptr [edi + 0x30] */ r_ecx = R32((u32)(r_edi+0x30u));
L_006d851e:; BB(0x006d851e);
    /* 006d851e: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d8521: je 0x6d8615 */ if (fZ) goto L_006d8615;
L_006d8527:; BB(0x006d8527);
    /* 006d8527: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d8529: je 0x6d8571 */ if (fZ) goto L_006d8571;
L_006d852b:; BB(0x006d852b);
    /* 006d852b: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 006d8532: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006d8534: je 0x6d8571 */ if (fZ) goto L_006d8571;
L_006d8536:; BB(0x006d8536);
    /* 006d8536: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6d853bu); f_007127b0();
    /* 006d853b: mov edx, dword ptr [edi + 0x28] */ r_edx = R32((u32)(r_edi+0x28u));
    /* 006d853e: mov dword ptr [edi + 0x30], 0 */ W32((u32)(r_edi+0x30u), 0x0u);
    /* 006d8545: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d8547: je 0x6d856a */ if (fZ) goto L_006d856a;
L_006d8549:; BB(0x006d8549);
    /* 006d8549: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 006d8550: and eax, 0xfffd */ {  u32 a = r_eax; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 006d8555: mov ecx, dword ptr [edx + 0x60] */ r_ecx = R32((u32)(r_edx+0x60u));
    /* 006d8558: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
    /* 006d855f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d8561: je 0x6d856a */ if (fZ) goto L_006d856a;
L_006d8563:; BB(0x006d8563);
    /* 006d8563: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d8565: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x6d856au); f_00760acc();
L_006d856a:; BB(0x006d856a);
    /* 006d856a: mov dword ptr [edi + 0x20], 1 */ W32((u32)(r_edi+0x20u), 0x1u);
L_006d8571:; BB(0x006d8571);
    /* 006d8571: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006d8574: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d8575: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d8576: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006d8577: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006d8578: ret  */ FN_RET(0x006d837c); r_esp += 4; return;
L_006d8579:; BB(0x006d8579);
    /* 006d8579: push 0x2d */ { u32 v = 0x2du; r_esp -= 4; W32(r_esp, v); }
    /* 006d857b: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x6d8580u); f_0073ec50();
    /* 006d8580: mov edx, dword ptr [edi + 0x24] */ r_edx = R32((u32)(r_edi+0x24u));
    /* 006d8583: movzx ebx, word ptr [edx + 0x1c] */ r_ebx = (u32)R16((u32)(r_edx+0x1cu));
    /* 006d8587: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006d8588: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 006d858a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d858b: call 0x7354fc */ r_esp -= 4; W32(r_esp, 0x6d8590u); f_007354fc();
    /* 006d8590: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006d8592: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 006d8595: call 0x6dbdb8 */ r_esp -= 4; W32(r_esp, 0x6d859au); f_006dbdb8();
    /* 006d859a: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d859d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006d859f: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006d85a1: mov ecx, dword ptr [edi + 0x30] */ r_ecx = R32((u32)(r_edi+0x30u));
    /* 006d85a4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d85a5: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x6d85aau); f_00735c90();
    /* 006d85aa: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 006d85ac: call 0x6dbdb8 */ r_esp -= 4; W32(r_esp, 0x6d85b1u); f_006dbdb8();
    /* 006d85b1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d85b2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d85b4: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006d85b6: mov ecx, dword ptr [edi + 0x30] */ r_ecx = R32((u32)(r_edi+0x30u));
    /* 006d85b9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d85ba: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x6d85bfu); f_00735c90();
    /* 006d85bf: mov ecx, dword ptr [edi + 0x30] */ r_ecx = R32((u32)(r_edi+0x30u));
    /* 006d85c2: call 0x73608c */ r_esp -= 4; W32(r_esp, 0x6d85c7u); f_0073608c();
    /* 006d85c7: mov ecx, dword ptr [edi + 0x30] */ r_ecx = R32((u32)(r_edi+0x30u));
    /* 006d85ca: call 0x736458 */ r_esp -= 4; W32(r_esp, 0x6d85cfu); f_00736458();
    /* 006d85cf: mov edx, dword ptr [edi + 0x30] */ r_edx = R32((u32)(r_edi+0x30u));
    /* 006d85d2: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 006d85d9: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006d85de: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
    /* 006d85e5: mov ecx, edi */ r_ecx = r_edi;
    /* 006d85e7: call 0x6dc8d8 */ r_esp -= 4; W32(r_esp, 0x6d85ecu); f_006dc8d8();
    /* 006d85ec: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 006d85f0: mov ecx, edi */ r_ecx = r_edi;
    /* 006d85f2: call 0x6dc8d8 */ r_esp -= 4; W32(r_esp, 0x6d85f7u); f_006dc8d8();
    /* 006d85f7: mov ecx, dword ptr [edi + 0x30] */ r_ecx = R32((u32)(r_edi+0x30u));
    /* 006d85fa: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d85fd: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 006d8601: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006d8604: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 006d8608: call 0x70f5a4 */ r_esp -= 4; W32(r_esp, 0x6d860du); f_0070f5a4();
    /* 006d860d: mov ecx, dword ptr [edi + 0x34] */ r_ecx = R32((u32)(r_edi+0x34u));
    /* 006d8610: jmp 0x6d83aa */ goto L_006d83aa;
L_006d8615:; BB(0x006d8615);
    /* 006d8615: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6d861au); f_007127b0();
    /* 006d861a: mov edx, dword ptr [edi + 0x28] */ r_edx = R32((u32)(r_edi+0x28u));
    /* 006d861d: mov dword ptr [edi + 0x30], 0 */ W32((u32)(r_edi+0x30u), 0x0u);
    /* 006d8624: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006d8626: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d8628: je 0x6d8653 */ if (fZ) goto L_006d8653;
L_006d862a:; BB(0x006d862a);
    /* 006d862a: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 006d8631: and eax, 0xfffd */ {  u32 a = r_eax; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 006d8636: mov ecx, dword ptr [edx + 0x60] */ r_ecx = R32((u32)(r_edx+0x60u));
    /* 006d8639: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
    /* 006d8640: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d8642: je 0x6d8650 */ if (fZ) goto L_006d8650;
L_006d8644:; BB(0x006d8644);
    /* 006d8644: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d8646: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x6d864bu); f_00760acc();
    /* 006d864b: mov ecx, dword ptr [edi + 0x30] */ r_ecx = R32((u32)(r_edi+0x30u));
    /* 006d864e: jmp 0x6d8653 */ goto L_006d8653;
L_006d8650:; BB(0x006d8650);
    /* 006d8650: mov ecx, dword ptr [edi + 0x30] */ r_ecx = R32((u32)(r_edi+0x30u));
L_006d8653:; BB(0x006d8653);
    /* 006d8653: mov dword ptr [edi + 0x20], 1 */ W32((u32)(r_edi+0x20u), 0x1u);
    /* 006d865a: jmp 0x6d8527 */ goto L_006d8527;
}

void f_006d8660(void) /* sub_6D8660 */
{
    FN_ENTER(0x006d8660);
    /* 006d8660: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006d8661: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006d8662: mov edi, ecx */ r_edi = r_ecx;
    /* 006d8664: mov ecx, dword ptr [edi + 0x28] */ r_ecx = R32((u32)(r_edi+0x28u));
    /* 006d8667: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d8669: je 0x6d86e6 */ if (fZ) goto L_006d86e6;
L_006d866b:; BB(0x006d866b);
    /* 006d866b: call 0x737d90 */ r_esp -= 4; W32(r_esp, 0x6d8670u); f_00737d90();
    /* 006d8670: mov ebp, eax */ r_ebp = r_eax;
    /* 006d8672: mov ecx, dword ptr [edi + 0x38] */ r_ecx = R32((u32)(r_edi+0x38u));
    /* 006d8675: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d8677: je 0x6d8690 */ if (fZ) goto L_006d8690;
L_006d8679:; BB(0x006d8679);
    /* 006d8679: cmp ebp, dword ptr [edi + 0x54] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_edi+0x54u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d867c: je 0x6d8690 */ if (fZ) goto L_006d8690;
L_006d867e:; BB(0x006d867e);
    /* 006d867e: lea edx, [ebp + ebp*4] */ r_edx = (u32)(r_ebp+r_ebp*4);
    /* 006d8682: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006d8684: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006d8686: lea edx, [edi + edx + 0x58] */ r_edx = (u32)(r_edi+r_edx+0x58u);
    /* 006d868a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006d868b: call 0x725fa8 */ r_esp -= 4; W32(r_esp, 0x6d8690u); f_00725fa8();
L_006d8690:; BB(0x006d8690);
    /* 006d8690: mov edx, dword ptr [edi + 0x3c] */ r_edx = R32((u32)(r_edi+0x3cu));
    /* 006d8693: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d8695: je 0x6d86c2 */ if (fZ) goto L_006d86c2;
L_006d8697:; BB(0x006d8697);
    /* 006d8697: cmp ebp, dword ptr [edi + 0x54] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_edi+0x54u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d869a: je 0x6d86c2 */ if (fZ) goto L_006d86c2;
L_006d869c:; BB(0x006d869c);
    /* 006d869c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006d869e: mov eax, dword ptr [edi + 0x24] */ r_eax = R32((u32)(r_edi+0x24u));
    /* 006d86a1: mov ecx, dword ptr [eax + 0xdf4] */ r_ecx = R32((u32)(r_eax+0xdf4u));
    /* 006d86a7: lea edx, [ebp + ebp*4] */ r_edx = (u32)(r_ebp+r_ebp*4);
    /* 006d86ab: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006d86ad: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006d86af: lea edx, [edi + edx + 0x58] */ r_edx = (u32)(r_edi+r_edx+0x58u);
    /* 006d86b3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006d86b4: call 0x6a4b74 */ r_esp -= 4; W32(r_esp, 0x6d86b9u); f_006a4b74();
    /* 006d86b9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d86ba: mov ecx, dword ptr [edi + 0x3c] */ r_ecx = R32((u32)(r_edi+0x3cu));
    /* 006d86bd: call 0x73f040 */ r_esp -= 4; W32(r_esp, 0x6d86c2u); f_0073f040();
L_006d86c2:; BB(0x006d86c2);
    /* 006d86c2: mov ecx, dword ptr [edi + 0x40] */ r_ecx = R32((u32)(r_edi+0x40u));
    /* 006d86c5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d86c7: je 0x6d86e0 */ if (fZ) goto L_006d86e0;
L_006d86c9:; BB(0x006d86c9);
    /* 006d86c9: cmp ebp, dword ptr [edi + 0x54] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_edi+0x54u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d86cc: je 0x6d86e0 */ if (fZ) goto L_006d86e0;
L_006d86ce:; BB(0x006d86ce);
    /* 006d86ce: lea edx, [ebp + ebp*4] */ r_edx = (u32)(r_ebp+r_ebp*4);
    /* 006d86d2: mov edx, dword ptr [edi + edx*4 + 0x68] */ r_edx = R32((u32)(r_edi+r_edx*4+0x68u));
    /* 006d86d6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006d86d8: jle 0x6d86e0 */ if ((fZ||fS!=fO)) goto L_006d86e0;
L_006d86da:; BB(0x006d86da);
    /* 006d86da: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006d86db: call 0x715c74 */ r_esp -= 4; W32(r_esp, 0x6d86e0u); f_00715c74();
L_006d86e0:; BB(0x006d86e0);
    /* 006d86e0: mov ecx, dword ptr [edi + 0x28] */ r_ecx = R32((u32)(r_edi+0x28u));
    /* 006d86e3: mov dword ptr [edi + 0x54], ebp */ W32((u32)(r_edi+0x54u), r_ebp);
L_006d86e6:; BB(0x006d86e6);
    /* 006d86e6: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 006d86ed: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006d86ef: je 0x6d870d */ if (fZ) goto L_006d870d;
L_006d86f1:; BB(0x006d86f1);
    /* 006d86f1: mov dword ptr [edi + 0x20], 3 */ W32((u32)(r_edi+0x20u), 0x3u);
    /* 006d86f8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006d86fa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d86fb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d86fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d86fd: push 0x570 */ { u32 v = 0x570u; r_esp -= 4; W32(r_esp, v); }
    /* 006d8702: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x6d8707u); f_00814298();
    /* 006d8707: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006d870a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d870b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006d870c: ret  */ FN_RET(0x006d8660); r_esp += 4; return;
L_006d870d:; BB(0x006d870d);
    /* 006d870d: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d870f: je 0x6d8769 */ if (fZ) goto L_006d8769;
L_006d8711:; BB(0x006d8711);
    /* 006d8711: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006d8713: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d8714: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d8715: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d8716: push 0x570 */ { u32 v = 0x570u; r_esp -= 4; W32(r_esp, v); }
    /* 006d871b: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x6d8720u); f_00814298();
    /* 006d8720: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d8723: mov ecx, edi */ r_ecx = r_edi;
    /* 006d8725: call 0x6d876c */ r_esp -= 4; W32(r_esp, 0x6d872au); f_006d876c();
    /* 006d872a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d872c: je 0x6d8757 */ if (fZ) goto L_006d8757;
L_006d872e:; BB(0x006d872e);
    /* 006d872e: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d8731: jne 0x6d8748 */ if (!fZ) goto L_006d8748;
L_006d8733:; BB(0x006d8733);
    /* 006d8733: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d8735: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 006d8737: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 006d8739: mov ecx, edi */ r_ecx = r_edi;
    /* 006d873b: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x6d873eu); call_ind(t); }
    /* 006d873e: mov dword ptr [edi + 0x20], 6 */ W32((u32)(r_edi+0x20u), 0x6u);
    /* 006d8745: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d8746: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006d8747: ret  */ FN_RET(0x006d8660); r_esp += 4; return;
L_006d8748:; BB(0x006d8748);
    /* 006d8748: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006d874b: jne 0x6d8769 */ if (!fZ) goto L_006d8769;
L_006d874d:; BB(0x006d874d);
    /* 006d874d: mov dword ptr [edi + 0x20], 7 */ W32((u32)(r_edi+0x20u), 0x7u);
    /* 006d8754: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d8755: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006d8756: ret  */ FN_RET(0x006d8660); r_esp += 4; return;
L_006d8757:; BB(0x006d8757);
    /* 006d8757: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d8759: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 006d875b: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 006d875d: mov ecx, edi */ r_ecx = r_edi;
    /* 006d875f: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x6d8762u); call_ind(t); }
    /* 006d8762: mov dword ptr [edi + 0x20], 5 */ W32((u32)(r_edi+0x20u), 0x5u);
L_006d8769:; BB(0x006d8769);
    /* 006d8769: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d876a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006d876b: ret  */ FN_RET(0x006d8660); r_esp += 4; return;
}

void f_006d876c(void) /* sub_6D876C */
{
    FN_ENTER(0x006d876c);
    /* 006d876c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006d876d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006d876e: mov esi, ecx */ r_esi = r_ecx;
    /* 006d8770: mov ecx, dword ptr [esi + 0x28] */ r_ecx = R32((u32)(r_esi+0x28u));
    /* 006d8773: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d8775: je 0x6d8797 */ if (fZ) goto L_006d8797;
L_006d8777:; BB(0x006d8777);
    /* 006d8777: call 0x737d90 */ r_esp -= 4; W32(r_esp, 0x6d877cu); f_00737d90();
    /* 006d877c: mov ecx, dword ptr [esi + 0x24] */ r_ecx = R32((u32)(r_esi+0x24u));
    /* 006d877f: mov edx, dword ptr [ecx + 0x2b4] */ r_edx = R32((u32)(r_ecx+0x2b4u));
    /* 006d8785: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 006d8788: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d878a: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d878c: lea edi, [esi + eax] */ r_edi = (u32)(r_esi+r_eax);
    /* 006d878f: mov edi, dword ptr [edi + 0x68] */ r_edi = R32((u32)(r_edi+0x68u));
    /* 006d8792: cmp edi, dword ptr [edx + 0x20] */ {  u32 a = r_edi; u32 b = R32((u32)(r_edx+0x20u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006d8795: jle 0x6d879c */ if ((fZ||fS!=fO)) goto L_006d879c;
L_006d8797:; BB(0x006d8797);
    /* 006d8797: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d8799: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006d879a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006d879b: ret  */ FN_RET(0x006d876c); r_esp += 4; return;
L_006d879c:; BB(0x006d879c);
    /* 006d879c: lea eax, [esi + eax + 0x58] */ r_eax = (u32)(r_esi+r_eax+0x58u);
    /* 006d87a0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d87a1: call 0x68ec44 */ r_esp -= 4; W32(r_esp, 0x6d87a6u); f_0068ec44();
    /* 006d87a6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d87a8: jne 0x6d87b2 */ if (!fZ) goto L_006d87b2;
L_006d87aa:; BB(0x006d87aa);
    /* 006d87aa: mov eax, 1 */ r_eax = 0x1u;
    /* 006d87af: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006d87b0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006d87b1: ret  */ FN_RET(0x006d876c); r_esp += 4; return;
L_006d87b2:; BB(0x006d87b2);
    /* 006d87b2: mov eax, 3 */ r_eax = 0x3u;
    /* 006d87b7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006d87b8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006d87b9: ret  */ FN_RET(0x006d876c); r_esp += 4; return;
}

void f_006d87bc(void) /* sub_6D87BC */
{
    FN_ENTER(0x006d87bc);
    /* 006d87bc: mov dword ptr [0xa962c0], 0x3f800000 */ W32((u32)(0xa962c0u), 0x3f800000u);
    /* 006d87c6: mov dword ptr [0xa962c4], 0x41000000 */ W32((u32)(0xa962c4u), 0x41000000u);
    /* 006d87d0: mov dword ptr [0xa962c8], 0x3fc00000 */ W32((u32)(0xa962c8u), 0x3fc00000u);
    /* 006d87da: ret  */ FN_RET(0x006d87bc); r_esp += 4; return;
}

void f_006d87dc(void) /* sub_6D87DC */
{
    FN_ENTER(0x006d87dc);
    /* 006d87dc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006d87dd: mov ebp, esp */ r_ebp = r_esp;
    /* 006d87df: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006d87e1: push 0x8ee2a8 */ { u32 v = 0x8ee2a8u; r_esp -= 4; W32(r_esp, v); }
    /* 006d87e6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006d87ec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d87ed: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006d87f4: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006d87f7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006d87fa: mov dword ptr [ebp - 0x2c], edi */ W32((u32)(r_ebp+0xffffffd4u), r_edi);
    /* 006d87fd: mov dword ptr [ebp - 0x28], esi */ W32((u32)(r_ebp+0xffffffd8u), r_esi);
    /* 006d8800: mov dword ptr [ebp - 0x24], ebx */ W32((u32)(r_ebp+0xffffffdcu), r_ebx);
    /* 006d8803: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 006d8806: mov ecx, dword ptr [ecx + 0x28] */ r_ecx = R32((u32)(r_ecx+0x28u));
    /* 006d8809: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d880b: je 0x6d89c9 */ if (fZ) goto L_006d89c9;
L_006d8811:; BB(0x006d8811);
    /* 006d8811: call 0x737d90 */ r_esp -= 4; W32(r_esp, 0x6d8816u); f_00737d90();
    /* 006d8816: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 006d8819: mov ecx, dword ptr [esi + 0x24] */ r_ecx = R32((u32)(r_esi+0x24u));
    /* 006d881c: lea ebx, [eax + eax*4] */ r_ebx = (u32)(r_eax+r_eax*4);
    /* 006d881f: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 006d8822: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d8824: lea edx, [esi + eax + 0x58] */ r_edx = (u32)(r_esi+r_eax+0x58u);
    /* 006d8828: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006d8829: call 0x68ec44 */ r_esp -= 4; W32(r_esp, 0x6d882eu); f_0068ec44();
    /* 006d882e: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006d8831: mov ecx, dword ptr [esi + 0x24] */ r_ecx = R32((u32)(r_esi+0x24u));
    /* 006d8834: mov edi, dword ptr [ecx + 0x2b4] */ r_edi = R32((u32)(r_ecx+0x2b4u));
    /* 006d883a: mov ebx, dword ptr [esi + ebx*4 + 0x68] */ r_ebx = R32((u32)(r_esi+r_ebx*4+0x68u));
    /* 006d883e: mov eax, dword ptr [edi + 0x20] */ r_eax = R32((u32)(r_edi+0x20u));
    /* 006d8841: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 006d8842: idiv ebx */ { i32 d = (i32)r_ebx; if (!d) UNSUP(0x006d8842, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x006d8842, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 006d8844: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006d8847: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006d8849: jl 0x6d884d */ if ((fS!=fO)) goto L_006d884d;
L_006d884b:; BB(0x006d884b);
    /* 006d884b: mov edx, eax */ r_edx = r_eax;
L_006d884d:; BB(0x006d884d);
    /* 006d884d: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 006d8850: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006d8853: jle 0x6d8915 */ if ((fZ||fS!=fO)) goto L_006d8915;
L_006d8859:; BB(0x006d8859);
    /* 006d8859: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 006d8860: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 006d8865: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6d886au); f_005caba4();
    /* 006d886a: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 006d886d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d8870: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 006d8873: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d8875: je 0x6d89e0 */ if (fZ) goto L_006d89e0;
L_006d887b:; BB(0x006d887b);
    /* 006d887b: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 006d8882: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006d8889: push 0x2d */ { u32 v = 0x2du; r_esp -= 4; W32(r_esp, v); }
    /* 006d888b: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x6d8890u); f_0073ec50();
    /* 006d8890: mov ebx, eax */ r_ebx = r_eax;
    /* 006d8892: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d8895: mov ecx, esi */ r_ecx = r_esi;
    /* 006d8897: call 0x6dc9ec */ r_esp -= 4; W32(r_esp, 0x6d889cu); f_006dc9ec();
    /* 006d889c: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006d889f: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006d88a2: mov edi, 1 */ r_edi = 0x1u;
    /* 006d88a7: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 006d88aa: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006d88ab: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006d88ac: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006d88ad: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006d88ae: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006d88af: call 0x728ac4 */ r_esp -= 4; W32(r_esp, 0x6d88b4u); f_00728ac4();
    /* 006d88b4: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_006d88bb:; BB(0x006d88bb);
    /* 006d88bb: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 006d88be: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006d88c1: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 006d88c4: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006d88cb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d88cd: je 0x6d88ed */ if (fZ) goto L_006d88ed;
L_006d88cf:; BB(0x006d88cf);
    /* 006d88cf: call 0x78b208 */ r_esp -= 4; W32(r_esp, 0x6d88d4u); f_0078b208();
    /* 006d88d4: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006d88d7: jle 0x6d88ed */ if ((fZ||fS!=fO)) goto L_006d88ed;
L_006d88d9:; BB(0x006d88d9);
    /* 006d88d9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006d88dc: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 006d88df: mov dword ptr [edx + 0x78], 0x3f400000 */ W32((u32)(r_edx+0x78u), 0x3f400000u);
    /* 006d88e6: mov dword ptr [edx + 0x7c], 0x3f400000 */ W32((u32)(r_edx+0x7cu), 0x3f400000u);
L_006d88ed:; BB(0x006d88ed);
    /* 006d88ed: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006d88f0: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 006d88f3: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 006d88f6: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006d88f9: mov dword ptr [eax + 0x4c], 0 */ W32((u32)(r_eax+0x4cu), 0x0u);
    /* 006d8900: mov dword ptr [eax + 0x20], 2 */ W32((u32)(r_eax+0x20u), 0x2u);
    /* 006d8907: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006d890a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006d8911: mov esp, ebp */ r_esp = r_ebp;
    /* 006d8913: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d8914: ret  */ FN_RET(0x006d87dc); r_esp += 4; return;
L_006d8915:; BB(0x006d8915);
    /* 006d8915: push 0x2d */ { u32 v = 0x2du; r_esp -= 4; W32(r_esp, v); }
    /* 006d8917: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x6d891cu); f_0073ec50();
    /* 006d891c: mov edx, esi */ r_edx = r_esi;
    /* 006d891e: mov ecx, dword ptr [edx + 0x24] */ r_ecx = R32((u32)(r_edx+0x24u));
    /* 006d8921: movzx ebx, word ptr [ecx + 0x1c] */ r_ebx = (u32)R16((u32)(r_ecx+0x1cu));
    /* 006d8925: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006d8926: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 006d8928: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d8929: call 0x7354fc */ r_esp -= 4; W32(r_esp, 0x6d892eu); f_007354fc();
    /* 006d892e: mov edx, esi */ r_edx = r_esi;
    /* 006d8930: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006d8932: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
    /* 006d8935: call 0x6dbdb8 */ r_esp -= 4; W32(r_esp, 0x6d893au); f_006dbdb8();
    /* 006d893a: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d893d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006d893f: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006d8941: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d8942: mov eax, esi */ r_eax = r_esi;
    /* 006d8944: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 006d8947: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x6d894cu); f_00735c90();
    /* 006d894c: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 006d894e: call 0x6dbdb8 */ r_esp -= 4; W32(r_esp, 0x6d8953u); f_006dbdb8();
    /* 006d8953: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d8954: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d8956: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006d8958: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d8959: mov eax, esi */ r_eax = r_esi;
    /* 006d895b: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 006d895e: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x6d8963u); f_00735c90();
    /* 006d8963: mov eax, esi */ r_eax = r_esi;
    /* 006d8965: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 006d8968: call 0x73608c */ r_esp -= 4; W32(r_esp, 0x6d896du); f_0073608c();
    /* 006d896d: mov eax, esi */ r_eax = r_esi;
    /* 006d896f: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 006d8972: call 0x736458 */ r_esp -= 4; W32(r_esp, 0x6d8977u); f_00736458();
    /* 006d8977: mov ecx, esi */ r_ecx = r_esi;
    /* 006d8979: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 006d897c: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 006d8983: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006d8988: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
    /* 006d898f: call 0x6dc8d8 */ r_esp -= 4; W32(r_esp, 0x6d8994u); f_006dc8d8();
    /* 006d8994: fstp dword ptr [ebp - 0x20] */ W_F32((u32)(r_ebp+0xffffffe0u), ST(0)); FPOP();
    /* 006d8997: mov ecx, esi */ r_ecx = r_esi;
    /* 006d8999: call 0x6dc8d8 */ r_esp -= 4; W32(r_esp, 0x6d899eu); f_006dc8d8();
    /* 006d899e: fld dword ptr [ebp - 0x20] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe0u)));
    /* 006d89a1: mov eax, esi */ r_eax = r_esi;
    /* 006d89a3: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 006d89a6: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d89a9: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006d89ac: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 006d89b0: call 0x70f5a4 */ r_esp -= 4; W32(r_esp, 0x6d89b5u); f_0070f5a4();
    /* 006d89b5: mov edx, esi */ r_edx = r_esi;
    /* 006d89b7: mov dword ptr [edx + 0x20], 2 */ W32((u32)(r_edx+0x20u), 0x2u);
    /* 006d89be: mov eax, 1 */ r_eax = 0x1u;
    /* 006d89c3: mov dword ptr [edx + 0x50], eax */ W32((u32)(r_edx+0x50u), r_eax);
    /* 006d89c6: mov dword ptr [edx + 0x4c], eax */ W32((u32)(r_edx+0x4cu), r_eax);
L_006d89c9:; BB(0x006d89c9);
    /* 006d89c9: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 006d89cc: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 006d89cf: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006d89d2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006d89d5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006d89dc: mov esp, ebp */ r_esp = r_ebp;
    /* 006d89de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d89df: ret  */ FN_RET(0x006d87dc); r_esp += 4; return;
L_006d89e0:; BB(0x006d89e0);
    /* 006d89e0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006d89e2: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 006d89e5: jmp 0x6d88bb */ goto L_006d88bb;
}

void f_006d89ec(void) /* sub_6D89EC */
{
    FN_ENTER(0x006d89ec);
    /* 006d89ec: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006d89ed: mov edi, ecx */ r_edi = r_ecx;
    /* 006d89ef: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 006d89f1: mov ecx, edi */ r_ecx = r_edi;
    /* 006d89f3: call dword ptr [eax + 0x20] */ { u32 t = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, 0x6d89f6u); call_ind(t); }
    /* 006d89f6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d89f8: jne 0x6d89fc */ if (!fZ) goto L_006d89fc;
L_006d89fa:; BB(0x006d89fa);
    /* 006d89fa: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006d89fb: ret  */ FN_RET(0x006d89ec); r_esp += 4; return;
L_006d89fc:; BB(0x006d89fc);
    /* 006d89fc: mov ecx, edi */ r_ecx = r_edi;
    /* 006d89fe: call 0x6dc988 */ r_esp -= 4; W32(r_esp, 0x6d8a03u); f_006dc988();
    /* 006d8a03: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d8a05: je 0x6d8a3d */ if (fZ) goto L_006d8a3d;
L_006d8a07:; BB(0x006d8a07);
    /* 006d8a07: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d8a09: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 006d8a0b: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 006d8a0d: mov ecx, edi */ r_ecx = r_edi;
    /* 006d8a0f: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x6d8a12u); call_ind(t); }
    /* 006d8a12: mov edx, dword ptr [edi + 0x28] */ r_edx = R32((u32)(r_edi+0x28u));
    /* 006d8a15: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 006d8a1c: and eax, 0xfffd */ {  u32 a = r_eax; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 006d8a21: mov ecx, dword ptr [edx + 0x60] */ r_ecx = R32((u32)(r_edx+0x60u));
    /* 006d8a24: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
    /* 006d8a2b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d8a2d: je 0x6d8a36 */ if (fZ) goto L_006d8a36;
L_006d8a2f:; BB(0x006d8a2f);
    /* 006d8a2f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d8a31: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x6d8a36u); f_00760acc();
L_006d8a36:; BB(0x006d8a36);
    /* 006d8a36: mov dword ptr [edi + 0x20], 1 */ W32((u32)(r_edi+0x20u), 0x1u);
L_006d8a3d:; BB(0x006d8a3d);
    /* 006d8a3d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006d8a3e: ret  */ FN_RET(0x006d89ec); r_esp += 4; return;
}

void f_006d8a40(void) /* sub_6D8A40 */
{
    FN_ENTER(0x006d8a40);
    /* 006d8a40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006d8a41: mov ebp, esp */ r_ebp = r_esp;
    /* 006d8a43: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006d8a45: push 0x8ee2d0 */ { u32 v = 0x8ee2d0u; r_esp -= 4; W32(r_esp, v); }
    /* 006d8a4a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006d8a50: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d8a51: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006d8a58: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006d8a5b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006d8a5e: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 006d8a61: mov dword ptr [ebp - 0x24], esi */ W32((u32)(r_ebp+0xffffffdcu), r_esi);
    /* 006d8a64: mov dword ptr [ebp - 0x20], ebx */ W32((u32)(r_ebp+0xffffffe0u), r_ebx);
    /* 006d8a67: mov eax, dword ptr [0xa96390] */ r_eax = R32((u32)(0xa96390u));
    /* 006d8a6c: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 006d8a6f: mov dword ptr [ecx + 0x48], eax */ W32((u32)(r_ecx+0x48u), r_eax);
    /* 006d8a72: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 006d8a74: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006d8a76: jle 0x6d8ab8 */ if ((fZ||fS!=fO)) goto L_006d8ab8;
L_006d8a78:; BB(0x006d8a78);
    /* 006d8a78: lea eax, [ebp - 0x44] */ r_eax = (u32)(r_ebp+0xffffffbcu);
    /* 006d8a7b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006d8a7c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d8a7d: call 0x6dca54 */ r_esp -= 4; W32(r_esp, 0x6d8a82u); f_006dca54();
    /* 006d8a82: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d8a85: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 006d8a88: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006d8a8b: lea eax, [ebx + ebx*4] */ r_eax = (u32)(r_ebx+r_ebx*4);
    /* 006d8a8e: mov dword ptr [edx + eax*4 + 0x58], ecx */ W32((u32)(r_edx+r_eax*4+0x58u), r_ecx);
    /* 006d8a92: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006d8a95: mov esi, dword ptr [ebp - 0x40] */ r_esi = R32((u32)(r_ebp+0xffffffc0u));
    /* 006d8a98: mov dword ptr [edx + eax*4 + 0x5c], esi */ W32((u32)(r_edx+r_eax*4+0x5cu), r_esi);
    /* 006d8a9c: mov edi, dword ptr [ebp - 0x3c] */ r_edi = R32((u32)(r_ebp+0xffffffc4u));
    /* 006d8a9f: mov dword ptr [edx + eax*4 + 0x60], edi */ W32((u32)(r_edx+r_eax*4+0x60u), r_edi);
    /* 006d8aa3: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 006d8aa6: mov dword ptr [edx + eax*4 + 0x64], ecx */ W32((u32)(r_edx+r_eax*4+0x64u), r_ecx);
    /* 006d8aaa: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 006d8aad: mov dword ptr [edx + eax*4 + 0x68], ecx */ W32((u32)(r_edx+r_eax*4+0x68u), r_ecx);
    /* 006d8ab1: mov eax, dword ptr [edx + 0x48] */ r_eax = R32((u32)(r_edx+0x48u));
    /* 006d8ab4: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006d8ab6: jl 0x6d8a78 */ if ((fS!=fO)) goto L_006d8a78;
L_006d8ab8:; BB(0x006d8ab8);
    /* 006d8ab8: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006d8abb: lea esi, [edx + 0x58] */ r_esi = (u32)(r_edx+0x58u);
    /* 006d8abe: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006d8ac1: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 006d8ac3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006d8ac5: jle 0x6d8ae9 */ if ((fZ||fS!=fO)) goto L_006d8ae9;
L_006d8ac7:; BB(0x006d8ac7);
    /* 006d8ac7: mov edx, dword ptr [esi + 0x10] */ r_edx = R32((u32)(r_esi+0x10u));
    /* 006d8aca: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d8acd: je 0x6d8adf */ if (fZ) goto L_006d8adf;
L_006d8acf:; BB(0x006d8acf);
    /* 006d8acf: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006d8ad0: call 0x5c9b80 */ r_esp -= 4; W32(r_esp, 0x6d8ad5u); f_005c9b80();
    /* 006d8ad5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d8ad6: mov dword ptr [esi + 0x10], eax */ W32((u32)(r_esi+0x10u), r_eax);
    /* 006d8ad9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006d8adc: mov eax, dword ptr [eax + 0x48] */ r_eax = R32((u32)(r_eax+0x48u));
L_006d8adf:; BB(0x006d8adf);
    /* 006d8adf: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006d8ae2: add esi, 0x14 */ {  u32 a = r_esi; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006d8ae5: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006d8ae7: jl 0x6d8ac7 */ if ((fS!=fO)) goto L_006d8ac7;
L_006d8ae9:; BB(0x006d8ae9);
    /* 006d8ae9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006d8aec: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 006d8aef: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d8af1: je 0x6d8ccf */ if (fZ) goto L_006d8ccf;
L_006d8af7:; BB(0x006d8af7);
    /* 006d8af7: call 0x737d1c */ r_esp -= 4; W32(r_esp, 0x6d8afcu); f_00737d1c();
    /* 006d8afc: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006d8aff: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
L_006d8b02:; BB(0x006d8b02);
    /* 006d8b02: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d8b04: je 0x6d8b7d */ if (fZ) goto L_006d8b7d;
L_006d8b06:; BB(0x006d8b06);
    /* 006d8b06: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006d8b09: mov edx, dword ptr [eax + 0x48] */ r_edx = R32((u32)(r_eax+0x48u));
    /* 006d8b0c: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 006d8b0e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006d8b10: jle 0x6d8b45 */ if ((fZ||fS!=fO)) goto L_006d8b45;
L_006d8b12:; BB(0x006d8b12);
    /* 006d8b12: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 006d8b15: lea eax, [ebx + ebx*4] */ r_eax = (u32)(r_ebx+r_ebx*4);
    /* 006d8b18: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d8b1a: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d8b1c: lea edi, [esi + eax] */ r_edi = (u32)(r_esi+r_eax);
    /* 006d8b1f: mov esi, dword ptr [edi + 0x68] */ r_esi = R32((u32)(r_edi+0x68u));
    /* 006d8b22: cmp esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d8b25: je 0x6d8b3e */ if (fZ) goto L_006d8b3e;
L_006d8b27:; BB(0x006d8b27);
    /* 006d8b27: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006d8b2a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006d8b2b: lea eax, [edx + eax + 0x58] */ r_eax = (u32)(r_edx+r_eax+0x58u);
    /* 006d8b2f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d8b30: call 0x7375a4 */ r_esp -= 4; W32(r_esp, 0x6d8b35u); f_007375a4();
    /* 006d8b35: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006d8b38: mov edx, dword ptr [eax + 0x48] */ r_edx = R32((u32)(r_eax+0x48u));
    /* 006d8b3b: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
L_006d8b3e:; BB(0x006d8b3e);
    /* 006d8b3e: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006d8b41: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006d8b43: jl 0x6d8b12 */ if ((fS!=fO)) goto L_006d8b12;
L_006d8b45:; BB(0x006d8b45);
    /* 006d8b45: call 0x737cdc */ r_esp -= 4; W32(r_esp, 0x6d8b4au); f_00737cdc();
    /* 006d8b4a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006d8b4d: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 006d8b50: movzx edx, word ptr [ecx + 0x84] */ r_edx = (u32)R16((u32)(r_ecx+0x84u));
    /* 006d8b57: and edx, 0xfffd */ {  u32 a = r_edx; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 006d8b5d: mov word ptr [ecx + 0x84], dx */ W16((u32)(r_ecx+0x84u), (u16)r_edx);
    /* 006d8b64: mov ecx, dword ptr [ecx + 0x60] */ r_ecx = R32((u32)(r_ecx+0x60u));
    /* 006d8b67: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d8b69: je 0x6d8b72 */ if (fZ) goto L_006d8b72;
L_006d8b6b:; BB(0x006d8b6b);
    /* 006d8b6b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d8b6d: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x6d8b72u); f_00760acc();
L_006d8b72:; BB(0x006d8b72);
    /* 006d8b72: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006d8b75: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 006d8b78: call 0x737da4 */ r_esp -= 4; W32(r_esp, 0x6d8b7du); f_00737da4();
L_006d8b7d:; BB(0x006d8b7d);
    /* 006d8b7d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006d8b80: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 006d8b83: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d8b85: je 0x6d8c1b */ if (fZ) goto L_006d8c1b;
L_006d8b8b:; BB(0x006d8b8b);
    /* 006d8b8b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006d8b8e: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 006d8b91: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d8b93: je 0x6d8bdf */ if (fZ) goto L_006d8bdf;
L_006d8b95:; BB(0x006d8b95);
    /* 006d8b95: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006d8b98: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 006d8b9b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d8b9d: je 0x6d8bb6 */ if (fZ) goto L_006d8bb6;
L_006d8b9f:; BB(0x006d8b9f);
    /* 006d8b9f: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 006d8ba2: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 006d8ba5: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006d8ba8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006d8bab: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006d8bb2: mov esp, ebp */ r_esp = r_ebp;
    /* 006d8bb4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d8bb5: ret  */ FN_RET(0x006d8a40); r_esp += 4; return;
L_006d8bb6:; BB(0x006d8bb6);
    /* 006d8bb6: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 006d8bb9: movzx ecx, word ptr [edx + 0x1c] */ r_ecx = (u32)R16((u32)(r_edx+0x1cu));
    /* 006d8bbd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006d8bbe: call 0x715b58 */ r_esp -= 4; W32(r_esp, 0x6d8bc3u); f_00715b58();
    /* 006d8bc3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d8bc4: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006d8bc7: mov dword ptr [edx + 0x40], eax */ W32((u32)(r_edx+0x40u), r_eax);
    /* 006d8bca: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d8bcc: je 0x6d8b9f */ if (fZ) goto L_006d8b9f;
L_006d8bce:; BB(0x006d8bce);
    /* 006d8bce: mov edx, dword ptr [edx + 0x68] */ r_edx = R32((u32)(r_edx+0x68u));
    /* 006d8bd1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d8bd3: jle 0x6d8b9f */ if ((fZ||fS!=fO)) goto L_006d8b9f;
L_006d8bd5:; BB(0x006d8bd5);
    /* 006d8bd5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006d8bd6: mov ecx, eax */ r_ecx = r_eax;
    /* 006d8bd8: call 0x715c74 */ r_esp -= 4; W32(r_esp, 0x6d8bddu); f_00715c74();
    /* 006d8bdd: jmp 0x6d8b9f */ goto L_006d8b9f;
L_006d8bdf:; BB(0x006d8bdf);
    /* 006d8bdf: mov ecx, eax */ r_ecx = r_eax;
    /* 006d8be1: call 0x6dc9ec */ r_esp -= 4; W32(r_esp, 0x6d8be6u); f_006dc9ec();
    /* 006d8be6: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 006d8be9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d8bea: call 0x73ee78 */ r_esp -= 4; W32(r_esp, 0x6d8befu); f_0073ee78();
    /* 006d8bef: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d8bf0: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006d8bf3: mov ebx, dword ptr [edx + 0x24] */ r_ebx = R32((u32)(r_edx+0x24u));
    /* 006d8bf6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006d8bf8: mov dword ptr [edx + 0x3c], eax */ W32((u32)(r_edx+0x3cu), r_eax);
    /* 006d8bfb: mov ecx, dword ptr [ebx + 0xdf4] */ r_ecx = R32((u32)(r_ebx+0xdf4u));
    /* 006d8c01: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006d8c04: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d8c05: call 0x6a4b74 */ r_esp -= 4; W32(r_esp, 0x6d8c0au); f_006a4b74();
    /* 006d8c0a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d8c0b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006d8c0e: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 006d8c11: call 0x73f040 */ r_esp -= 4; W32(r_esp, 0x6d8c16u); f_0073f040();
    /* 006d8c16: jmp 0x6d8b95 */ goto L_006d8b95;
L_006d8c1b:; BB(0x006d8c1b);
    /* 006d8c1b: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 006d8c22: push 0xb4 */ { u32 v = 0xb4u; r_esp -= 4; W32(r_esp, v); }
    /* 006d8c27: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6d8c2cu); f_005caba4();
    /* 006d8c2c: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 006d8c2f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d8c32: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 006d8c35: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d8c37: je 0x6d8cc8 */ if (fZ) goto L_006d8cc8;
L_006d8c3d:; BB(0x006d8c3d);
    /* 006d8c3d: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 006d8c44: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006d8c4b: push 0x29 */ { u32 v = 0x29u; r_esp -= 4; W32(r_esp, v); }
    /* 006d8c4d: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x6d8c52u); f_0073ec50();
    /* 006d8c52: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d8c53: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006d8c56: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006d8c59: mov ebx, dword ptr [edx + 0x24] */ r_ebx = R32((u32)(r_edx+0x24u));
    /* 006d8c5c: movzx esi, word ptr [ebx + 0x1c] */ r_esi = (u32)R16((u32)(r_ebx+0x1cu));
    /* 006d8c60: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006d8c61: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d8c62: call 0x725d18 */ r_esp -= 4; W32(r_esp, 0x6d8c67u); f_00725d18();
    /* 006d8c67: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_006d8c6e:; BB(0x006d8c6e);
    /* 006d8c6e: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 006d8c71: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006d8c74: mov dword ptr [edx + 0x38], eax */ W32((u32)(r_edx+0x38u), r_eax);
    /* 006d8c77: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006d8c7e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d8c80: je 0x6d8cb7 */ if (fZ) goto L_006d8cb7;
L_006d8c82:; BB(0x006d8c82);
    /* 006d8c82: call 0x78b208 */ r_esp -= 4; W32(r_esp, 0x6d8c87u); f_0078b208();
    /* 006d8c87: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006d8c8a: jg 0x6d8c97 */ if ((!fZ&&fS==fO)) goto L_006d8c97;
L_006d8c8c:; BB(0x006d8c8c);
    /* 006d8c8c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006d8c8f: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 006d8c92: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 006d8c95: jmp 0x6d8cb7 */ goto L_006d8cb7;
L_006d8c97:; BB(0x006d8c97);
    /* 006d8c97: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006d8c9a: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 006d8c9d: mov dword ptr [eax + 0xa8], 0x3f400000 */ W32((u32)(r_eax+0xa8u), 0x3f400000u);
    /* 006d8ca7: mov dword ptr [eax + 0xac], 0x3f400000 */ W32((u32)(r_eax+0xacu), 0x3f400000u);
    /* 006d8cb1: mov ecx, dword ptr [edx + 0x38] */ r_ecx = R32((u32)(r_edx+0x38u));
    /* 006d8cb4: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
L_006d8cb7:; BB(0x006d8cb7);
    /* 006d8cb7: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006d8cba: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006d8cbd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d8cbe: call 0x725fa8 */ r_esp -= 4; W32(r_esp, 0x6d8cc3u); f_00725fa8();
    /* 006d8cc3: jmp 0x6d8b8b */ goto L_006d8b8b;
L_006d8cc8:; BB(0x006d8cc8);
    /* 006d8cc8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006d8cca: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 006d8ccd: jmp 0x6d8c6e */ goto L_006d8c6e;
L_006d8ccf:; BB(0x006d8ccf);
    /* 006d8ccf: push 0x2d */ { u32 v = 0x2du; r_esp -= 4; W32(r_esp, v); }
    /* 006d8cd1: call 0x6dbdb8 */ r_esp -= 4; W32(r_esp, 0x6d8cd6u); f_006dbdb8();
    /* 006d8cd6: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 006d8cd9: mov edx, dword ptr [ebx + 0x24] */ r_edx = R32((u32)(r_ebx+0x24u));
    /* 006d8cdc: movzx ecx, word ptr [edx + 0x1c] */ r_ecx = (u32)R16((u32)(r_edx+0x1cu));
    /* 006d8ce0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006d8ce1: push dword ptr [ebx + 0x48] */ { u32 v = R32((u32)(r_ebx+0x48u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d8ce4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d8ce5: call 0x73ff34 */ r_esp -= 4; W32(r_esp, 0x6d8ceau); f_0073ff34();
    /* 006d8cea: mov ecx, eax */ r_ecx = r_eax;
    /* 006d8cec: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d8cef: mov edx, ebx */ r_edx = r_ebx;
    /* 006d8cf1: mov dword ptr [edx + 0x28], ecx */ W32((u32)(r_edx+0x28u), r_ecx);
    /* 006d8cf4: jmp 0x6d8b02 */ goto L_006d8b02;
}

void f_006d8cfc(void) /* sub_6D8CFC */
{
    FN_ENTER(0x006d8cfc);
    /* 006d8cfc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006d8cfd: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006d8cff: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006d8d01: call 0x6d8d20 */ r_esp -= 4; W32(r_esp, 0x6d8d06u); f_006d8d20();
    /* 006d8d06: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006d8d0a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d8d0c: jne 0x6d8d12 */ if (!fZ) goto L_006d8d12;
L_006d8d0e:; BB(0x006d8d0e);
    /* 006d8d0e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d8d0f: ret 4 */ FN_RET(0x006d8cfc); r_esp += 8; return;
L_006d8d12:; BB(0x006d8d12);
    /* 006d8d12: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006d8d13: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6d8d18u); f_005c2f74();
    /* 006d8d18: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d8d19: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d8d1a: ret 4 */ FN_RET(0x006d8cfc); r_esp += 8; return;
}

void f_006d8d20(void) /* sub_6D8D20 */
{
    FN_ENTER(0x006d8d20);
    /* 006d8d20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006d8d21: mov ebp, esp */ r_ebp = r_esp;
    /* 006d8d23: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006d8d25: push 0x8ee2ec */ { u32 v = 0x8ee2ecu; r_esp -= 4; W32(r_esp, v); }
    /* 006d8d2a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006d8d30: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d8d31: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006d8d38: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006d8d3b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006d8d3e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006d8d41: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006d8d44: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006d8d47: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006d8d4a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006d8d51: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006d8d54: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 006d8d57: mov dword ptr [eax], 0xb3c9e0 */ W32((u32)(r_eax), 0xb3c9e0u);
    /* 006d8d5d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d8d5f: je 0x6d8d78 */ if (fZ) goto L_006d8d78;
L_006d8d61:; BB(0x006d8d61);
    /* 006d8d61: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 006d8d65: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006d8d6a: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 006d8d6e: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006d8d71: mov dword ptr [eax + 0x34], 0 */ W32((u32)(r_eax+0x34u), 0x0u);
L_006d8d78:; BB(0x006d8d78);
    /* 006d8d78: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 006d8d7b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d8d7d: je 0x6d8d8e */ if (fZ) goto L_006d8d8e;
L_006d8d7f:; BB(0x006d8d7f);
    /* 006d8d7f: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6d8d84u); f_007127b0();
    /* 006d8d84: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006d8d87: mov dword ptr [eax + 0x2c], 0 */ W32((u32)(r_eax+0x2cu), 0x0u);
L_006d8d8e:; BB(0x006d8d8e);
    /* 006d8d8e: mov ecx, eax */ r_ecx = r_eax;
    /* 006d8d90: call 0x6dc514 */ r_esp -= 4; W32(r_esp, 0x6d8d95u); f_006dc514();
    /* 006d8d95: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006d8d98: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 006d8d9b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d8d9d: je 0x6d8dae */ if (fZ) goto L_006d8dae;
L_006d8d9f:; BB(0x006d8d9f);
    /* 006d8d9f: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6d8da4u); f_007127b0();
    /* 006d8da4: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006d8da7: mov dword ptr [eax + 0x30], 0 */ W32((u32)(r_eax+0x30u), 0x0u);
L_006d8dae:; BB(0x006d8dae);
    /* 006d8dae: mov dword ptr [0xa962e4], 0 */ W32((u32)(0xa962e4u), 0x0u);
    /* 006d8db8: mov ecx, eax */ r_ecx = r_eax;
    /* 006d8dba: call 0x6dc9fc */ r_esp -= 4; W32(r_esp, 0x6d8dbfu); f_006dc9fc();
    /* 006d8dbf: mov dword ptr [eax*4 + 0xa962e8], 0 */ W32((u32)(r_eax*4+0xa962e8u), 0x0u);
    /* 006d8dca: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d8dcc: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x6d8dd1u); f_00791748();
    /* 006d8dd1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d8dd2: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006d8dd9: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006d8ddc: call 0x6dc3a0 */ r_esp -= 4; W32(r_esp, 0x6d8de1u); f_006dc3a0();
    /* 006d8de1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006d8de4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006d8deb: mov esp, ebp */ r_esp = r_ebp;
    /* 006d8ded: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d8dee: ret  */ FN_RET(0x006d8d20); r_esp += 4; return;
}

void f_006d8df0(void) /* sub_6D8DF0 */
{
    FN_ENTER(0x006d8df0);
    /* 006d8df0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006d8df1: mov edi, ecx */ r_edi = r_ecx;
    /* 006d8df3: mov eax, dword ptr [edi + 0x20] */ r_eax = R32((u32)(r_edi+0x20u));
    /* 006d8df6: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006d8df9: ja 0x6d8e48 */ if ((!fC&&!fZ)) goto L_006d8e48;
L_006d8dfb:; BB(0x006d8dfb);
    /* 006d8dfb: mov eax, dword ptr [eax*4 + 0x96c3b4] */ r_eax = R32((u32)(r_eax*4+0x96c3b4u));
    /* 006d8e02: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_006d8e48:; BB(0x006d8e48);
    /* 006d8e48: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006d8e49: ret  */ FN_RET(0x006d8df0); r_esp += 4; return;
}

void f_006d8e04(void)
{
    FN_ENTER(0x006d8e04);
    /* 006d8e04: mov ecx, edi */ r_ecx = r_edi;
    /* 006d8e06: call 0x6d6668 */ r_esp -= 4; W32(r_esp, 0x6d8e0bu); f_006d6668();
    /* 006d8e0b: jmp 0x6d8e48 */ goto L_006d8e48;
L_006d8e48:; BB(0x006d8e48);
    /* 006d8e48: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006d8e49: ret  */ FN_RET(0x006d8e04); r_esp += 4; return;
}

void f_006d8e0d(void)
{
    FN_ENTER(0x006d8e0d);
    /* 006d8e0d: mov ecx, edi */ r_ecx = r_edi;
    /* 006d8e0f: call 0x6d91f8 */ r_esp -= 4; W32(r_esp, 0x6d8e14u); f_006d91f8();
    /* 006d8e14: jmp 0x6d8e48 */ goto L_006d8e48;
L_006d8e48:; BB(0x006d8e48);
    /* 006d8e48: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006d8e49: ret  */ FN_RET(0x006d8e0d); r_esp += 4; return;
}

void f_006d8e16(void)
{
    FN_ENTER(0x006d8e16);
    /* 006d8e16: mov ecx, edi */ r_ecx = r_edi;
    /* 006d8e18: call 0x6d8e4c */ r_esp -= 4; W32(r_esp, 0x6d8e1du); f_006d8e4c();
    /* 006d8e1d: jmp 0x6d8e48 */ goto L_006d8e48;
L_006d8e48:; BB(0x006d8e48);
    /* 006d8e48: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006d8e49: ret  */ FN_RET(0x006d8e16); r_esp += 4; return;
}

void f_006d8e1f(void)
{
    FN_ENTER(0x006d8e1f);
    /* 006d8e1f: mov ecx, edi */ r_ecx = r_edi;
    /* 006d8e21: call 0x6d8f04 */ r_esp -= 4; W32(r_esp, 0x6d8e26u); f_006d8f04();
    /* 006d8e26: jmp 0x6d8e48 */ goto L_006d8e48;
L_006d8e48:; BB(0x006d8e48);
    /* 006d8e48: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006d8e49: ret  */ FN_RET(0x006d8e1f); r_esp += 4; return;
}

void f_006d8e28(void)
{
    FN_ENTER(0x006d8e28);
    /* 006d8e28: mov ecx, edi */ r_ecx = r_edi;
    /* 006d8e2a: call 0x6d8fcc */ r_esp -= 4; W32(r_esp, 0x6d8e2fu); f_006d8fcc();
    /* 006d8e2f: jmp 0x6d8e48 */ goto L_006d8e48;
L_006d8e48:; BB(0x006d8e48);
    /* 006d8e48: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006d8e49: ret  */ FN_RET(0x006d8e28); r_esp += 4; return;
}

void f_006d8e31(void)
{
    FN_ENTER(0x006d8e31);
    /* 006d8e31: mov ecx, edi */ r_ecx = r_edi;
    /* 006d8e33: call 0x6d922c */ r_esp -= 4; W32(r_esp, 0x6d8e38u); f_006d922c();
    /* 006d8e38: jmp 0x6d8e48 */ goto L_006d8e48;
L_006d8e48:; BB(0x006d8e48);
    /* 006d8e48: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006d8e49: ret  */ FN_RET(0x006d8e31); r_esp += 4; return;
}

void f_006d8e3a(void)
{
    FN_ENTER(0x006d8e3a);
    /* 006d8e3a: mov ecx, edi */ r_ecx = r_edi;
    /* 006d8e3c: call 0x6dc7d4 */ r_esp -= 4; W32(r_esp, 0x6d8e41u); f_006dc7d4();
    /* 006d8e41: mov dword ptr [edi + 0x20], 1 */ W32((u32)(r_edi+0x20u), 0x1u);
    /* 006d8e48: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006d8e49: ret  */ FN_RET(0x006d8e3a); r_esp += 4; return;
}

void f_006d8e48(void)
{
    FN_ENTER(0x006d8e48);
    /* 006d8e48: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006d8e49: ret  */ FN_RET(0x006d8e48); r_esp += 4; return;
}

void f_006d8e4c(void) /* sub_6D8E4C */
{
    FN_ENTER(0x006d8e4c);
    /* 006d8e4c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006d8e4d: mov ebp, esp */ r_ebp = r_esp;
    /* 006d8e4f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006d8e51: push 0x8ee314 */ { u32 v = 0x8ee314u; r_esp -= 4; W32(r_esp, v); }
    /* 006d8e56: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006d8e5c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d8e5d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006d8e64: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006d8e67: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006d8e6a: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 006d8e6d: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 006d8e70: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 006d8e73: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 006d8e76: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 006d8e7d: push 0x3ac */ { u32 v = 0x3acu; r_esp -= 4; W32(r_esp, v); }
    /* 006d8e82: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6d8e87u); f_005caba4();
    /* 006d8e87: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006d8e8a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d8e8d: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 006d8e90: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d8e92: je 0x6d8efb */ if (fZ) goto L_006d8efb;
L_006d8e94:; BB(0x006d8e94);
    /* 006d8e94: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 006d8e9b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006d8ea2: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006d8ea5: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006d8ea8: push 0x2d */ { u32 v = 0x2du; r_esp -= 4; W32(r_esp, v); }
    /* 006d8eaa: push dword ptr [eax + 0x24] */ { u32 v = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d8ead: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d8eae: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d8eb4: call 0x6d58b8 */ r_esp -= 4; W32(r_esp, 0x6d8eb9u); f_006d58b8();
    /* 006d8eb9: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_006d8ec0:; BB(0x006d8ec0);
    /* 006d8ec0: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006d8ec7: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006d8eca: mov dword ptr [eax + 0x3a4], 0x6d4a00 */ W32((u32)(r_eax+0x3a4u), 0x6d4a00u);
    /* 006d8ed4: mov dword ptr [eax + 0x3a8], 0x6d928c */ W32((u32)(r_eax+0x3a8u), 0x6d928cu);
    /* 006d8ede: call 0x7bebe8 */ r_esp -= 4; W32(r_esp, 0x6d8ee3u); f_007bebe8();
    /* 006d8ee3: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006d8ee6: mov dword ptr [eax + 0x20], 5 */ W32((u32)(r_eax+0x20u), 0x5u);
    /* 006d8eed: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006d8ef0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006d8ef7: mov esp, ebp */ r_esp = r_ebp;
    /* 006d8ef9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d8efa: ret  */ FN_RET(0x006d8e4c); r_esp += 4; return;
L_006d8efb:; BB(0x006d8efb);
    /* 006d8efb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006d8efd: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006d8f00: jmp 0x6d8ec0 */ goto L_006d8ec0;
}

void f_006d8f04(void) /* sub_6D8F04 */
{
    FN_ENTER(0x006d8f04);
    /* 006d8f04: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006d8f05: mov ebp, esp */ r_ebp = r_esp;
    /* 006d8f07: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006d8f09: push 0x8ee33c */ { u32 v = 0x8ee33cu; r_esp -= 4; W32(r_esp, v); }
    /* 006d8f0e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006d8f14: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d8f15: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006d8f1c: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006d8f1f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006d8f22: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 006d8f25: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 006d8f28: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 006d8f2b: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 006d8f2e: mov eax, dword ptr [0xa96390] */ r_eax = R32((u32)(0xa96390u));
    /* 006d8f33: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d8f35: jle 0x6d8fbb */ if ((fZ||fS!=fO)) goto L_006d8fbb;
L_006d8f3b:; BB(0x006d8f3b);
    /* 006d8f3b: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 006d8f42: push 0x1c4 */ { u32 v = 0x1c4u; r_esp -= 4; W32(r_esp, v); }
    /* 006d8f47: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6d8f4cu); f_005caba4();
    /* 006d8f4c: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006d8f4f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d8f52: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 006d8f55: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d8f57: je 0x6d8fb4 */ if (fZ) goto L_006d8fb4;
L_006d8f59:; BB(0x006d8f59);
    /* 006d8f59: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 006d8f60: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006d8f67: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006d8f6a: push dword ptr [eax + 0x24] */ { u32 v = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d8f6d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006d8f70: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d8f71: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d8f77: call 0x6d8250 */ r_esp -= 4; W32(r_esp, 0x6d8f7cu); f_006d8250();
    /* 006d8f7c: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_006d8f83:; BB(0x006d8f83);
    /* 006d8f83: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006d8f8a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006d8f8d: mov dword ptr [eax + 0x1c0], 0x6d4a00 */ W32((u32)(r_eax+0x1c0u), 0x6d4a00u);
    /* 006d8f97: call 0x7bebe8 */ r_esp -= 4; W32(r_esp, 0x6d8f9cu); f_007bebe8();
    /* 006d8f9c: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006d8f9f: mov dword ptr [eax + 0x20], 5 */ W32((u32)(r_eax+0x20u), 0x5u);
    /* 006d8fa6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006d8fa9: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006d8fb0: mov esp, ebp */ r_esp = r_ebp;
    /* 006d8fb2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d8fb3: ret  */ FN_RET(0x006d8f04); r_esp += 4; return;
L_006d8fb4:; BB(0x006d8fb4);
    /* 006d8fb4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006d8fb6: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006d8fb9: jmp 0x6d8f83 */ goto L_006d8f83;
L_006d8fbb:; BB(0x006d8fbb);
    /* 006d8fbb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006d8fbe: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006d8fc5: mov esp, ebp */ r_esp = r_ebp;
    /* 006d8fc7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d8fc8: ret  */ FN_RET(0x006d8f04); r_esp += 4; return;
}

void f_006d8fcc(void) /* sub_6D8FCC */
{
    FN_ENTER(0x006d8fcc);
    /* 006d8fcc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006d8fcd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006d8fce: mov edi, ecx */ r_edi = r_ecx;
    /* 006d8fd0: mov ecx, dword ptr [edi + 0x30] */ r_ecx = R32((u32)(r_edi+0x30u));
    /* 006d8fd3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d8fd5: je 0x6d9081 */ if (fZ) goto L_006d9081;
L_006d8fdb:; BB(0x006d8fdb);
    /* 006d8fdb: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d8fdd: je 0x6d902a */ if (fZ) goto L_006d902a;
L_006d8fdf:; BB(0x006d8fdf);
    /* 006d8fdf: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 006d8fe6: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006d8fe8: je 0x6d902a */ if (fZ) goto L_006d902a;
L_006d8fea:; BB(0x006d8fea);
    /* 006d8fea: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x6d8fefu); f_007365f4();
    /* 006d8fef: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d8ff1: je 0x6d8ffd */ if (fZ) goto L_006d8ffd;
L_006d8ff3:; BB(0x006d8ff3);
    /* 006d8ff3: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d8ff6: je 0x6d905d */ if (fZ) goto L_006d905d;
L_006d8ff8:; BB(0x006d8ff8);
    /* 006d8ff8: mov ecx, dword ptr [edi + 0x30] */ r_ecx = R32((u32)(r_edi+0x30u));
    /* 006d8ffb: jmp 0x6d902a */ goto L_006d902a;
L_006d8ffd:; BB(0x006d8ffd);
    /* 006d8ffd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d8fff: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 006d9001: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 006d9003: mov ecx, edi */ r_ecx = r_edi;
    /* 006d9005: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x6d9008u); call_ind(t); }
    /* 006d9008: mov ecx, dword ptr [edi + 0x30] */ r_ecx = R32((u32)(r_edi+0x30u));
    /* 006d900b: mov dword ptr [edi + 0x20], 3 */ W32((u32)(r_edi+0x20u), 0x3u);
    /* 006d9012: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6d9017u); f_007127b0();
    /* 006d9017: mov eax, dword ptr [0xa96390] */ r_eax = R32((u32)(0xa96390u));
    /* 006d901c: mov dword ptr [edi + 0x30], 0 */ W32((u32)(r_edi+0x30u), 0x0u);
    /* 006d9023: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d9025: jle 0x6d9076 */ if ((fZ||fS!=fO)) goto L_006d9076;
L_006d9027:; BB(0x006d9027);
    /* 006d9027: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d9028: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006d9029: ret  */ FN_RET(0x006d8fcc); r_esp += 4; return;
L_006d902a:; BB(0x006d902a);
    /* 006d902a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d902c: je 0x6d905a */ if (fZ) goto L_006d905a;
L_006d902e:; BB(0x006d902e);
    /* 006d902e: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 006d9035: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d9037: je 0x6d905a */ if (fZ) goto L_006d905a;
L_006d9039:; BB(0x006d9039);
    /* 006d9039: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d903b: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 006d903d: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 006d903f: mov ecx, edi */ r_ecx = r_edi;
    /* 006d9041: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x6d9044u); call_ind(t); }
    /* 006d9044: mov ecx, dword ptr [edi + 0x30] */ r_ecx = R32((u32)(r_edi+0x30u));
    /* 006d9047: mov dword ptr [edi + 0x20], 7 */ W32((u32)(r_edi+0x20u), 0x7u);
    /* 006d904e: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6d9053u); f_007127b0();
    /* 006d9053: mov dword ptr [edi + 0x30], 0 */ W32((u32)(r_edi+0x30u), 0x0u);
L_006d905a:; BB(0x006d905a);
    /* 006d905a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d905b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006d905c: ret  */ FN_RET(0x006d8fcc); r_esp += 4; return;
L_006d905d:; BB(0x006d905d);
    /* 006d905d: mov ecx, dword ptr [edi + 0x30] */ r_ecx = R32((u32)(r_edi+0x30u));
    /* 006d9060: mov dword ptr [edi + 0x20], 4 */ W32((u32)(r_edi+0x20u), 0x4u);
    /* 006d9067: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6d906cu); f_007127b0();
    /* 006d906c: mov dword ptr [edi + 0x30], 0 */ W32((u32)(r_edi+0x30u), 0x0u);
    /* 006d9073: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d9074: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006d9075: ret  */ FN_RET(0x006d8fcc); r_esp += 4; return;
L_006d9076:; BB(0x006d9076);
    /* 006d9076: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006d9078: call 0x6d7f5c */ r_esp -= 4; W32(r_esp, 0x6d907du); f_006d7f5c();
    /* 006d907d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d907e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d907f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006d9080: ret  */ FN_RET(0x006d8fcc); r_esp += 4; return;
L_006d9081:; BB(0x006d9081);
    /* 006d9081: push 0x2d */ { u32 v = 0x2du; r_esp -= 4; W32(r_esp, v); }
    /* 006d9083: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x6d9088u); f_0073ec50();
    /* 006d9088: mov edx, dword ptr [edi + 0x24] */ r_edx = R32((u32)(r_edi+0x24u));
    /* 006d908b: movzx edx, word ptr [edx + 0x1c] */ r_edx = (u32)R16((u32)(r_edx+0x1cu));
    /* 006d908f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006d9090: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 006d9092: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d9093: call 0x7354fc */ r_esp -= 4; W32(r_esp, 0x6d9098u); f_007354fc();
    /* 006d9098: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006d909a: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 006d909d: call 0x6dbdb8 */ r_esp -= 4; W32(r_esp, 0x6d90a2u); f_006dbdb8();
    /* 006d90a2: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d90a5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006d90a7: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006d90a9: mov ecx, dword ptr [edi + 0x30] */ r_ecx = R32((u32)(r_edi+0x30u));
    /* 006d90ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d90ad: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x6d90b2u); f_00735c90();
    /* 006d90b2: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006d90b4: call 0x6dbdb8 */ r_esp -= 4; W32(r_esp, 0x6d90b9u); f_006dbdb8();
    /* 006d90b9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d90ba: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d90bc: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006d90be: mov ecx, dword ptr [edi + 0x30] */ r_ecx = R32((u32)(r_edi+0x30u));
    /* 006d90c1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d90c2: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x6d90c7u); f_00735c90();
    /* 006d90c7: mov ecx, dword ptr [edi + 0x30] */ r_ecx = R32((u32)(r_edi+0x30u));
    /* 006d90ca: call 0x73608c */ r_esp -= 4; W32(r_esp, 0x6d90cfu); f_0073608c();
    /* 006d90cf: mov ecx, dword ptr [edi + 0x30] */ r_ecx = R32((u32)(r_edi+0x30u));
    /* 006d90d2: call 0x736458 */ r_esp -= 4; W32(r_esp, 0x6d90d7u); f_00736458();
    /* 006d90d7: mov edx, dword ptr [edi + 0x30] */ r_edx = R32((u32)(r_edi+0x30u));
    /* 006d90da: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 006d90e1: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006d90e6: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
    /* 006d90ed: mov ecx, edi */ r_ecx = r_edi;
    /* 006d90ef: call 0x6dc8d8 */ r_esp -= 4; W32(r_esp, 0x6d90f4u); f_006dc8d8();
    /* 006d90f4: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006d90f7: mov ecx, edi */ r_ecx = r_edi;
    /* 006d90f9: call 0x6dc8d8 */ r_esp -= 4; W32(r_esp, 0x6d90feu); f_006dc8d8();
    /* 006d90fe: mov ecx, dword ptr [edi + 0x30] */ r_ecx = R32((u32)(r_edi+0x30u));
    /* 006d9101: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d9104: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 006d9108: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006d910b: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 006d910f: call 0x70f5a4 */ r_esp -= 4; W32(r_esp, 0x6d9114u); f_0070f5a4();
    /* 006d9114: mov ecx, dword ptr [edi + 0x30] */ r_ecx = R32((u32)(r_edi+0x30u));
    /* 006d9117: jmp 0x6d8fdb */ goto L_006d8fdb;
}

