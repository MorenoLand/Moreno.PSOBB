#include "protos.h"

void f_007080d0(void) /* sub_7080D0 */
{
    FN_ENTER(0x007080d0);
    /* 007080d0: movsx eax, word ptr [ecx] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx));
    /* 007080d3: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007080d6: jge 0x7080e8 */ if ((fS==fO)) goto L_007080e8;
L_007080d8:; BB(0x007080d8);
    /* 007080d8: lea edx, [eax + 1] */ r_edx = (u32)(r_eax+0x1u);
    /* 007080db: mov word ptr [ecx], dx */ W16((u32)(r_ecx), (u16)r_edx);
    /* 007080de: movzx edx, word ptr [esp + 4] */ r_edx = (u32)R16((u32)(r_esp+0x4u));
    /* 007080e3: mov word ptr [ecx + eax*2 + 4], dx */ W16((u32)(r_ecx+r_eax*2+0x4u), (u16)r_edx);
L_007080e8:; BB(0x007080e8);
    /* 007080e8: ret 4 */ FN_RET(0x007080d0); r_esp += 8; return;
}

void f_007080ec(void) /* sub_7080EC */
{
    FN_ENTER(0x007080ec);
    /* 007080ec: movsx eax, word ptr [ecx] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx));
    /* 007080ef: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007080f1: jle 0x708106 */ if ((fZ||fS!=fO)) goto L_00708106;
L_007080f3:; BB(0x007080f3);
    /* 007080f3: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007080f6: mov word ptr [ecx], ax */ W16((u32)(r_ecx), (u16)r_eax);
    /* 007080f9: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 007080fc: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 00708101: mov word ptr [ecx + edx*2 + 4], ax */ W16((u32)(r_ecx+r_edx*2+0x4u), (u16)r_eax);
L_00708106:; BB(0x00708106);
    /* 00708106: ret  */ FN_RET(0x007080ec); r_esp += 4; return;
}

void f_00708108(void) /* sub_708108 */
{
    FN_ENTER(0x00708108);
    /* 00708108: movsx edx, word ptr [ecx] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx));
    /* 0070810b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0070810d: jle 0x708119 */ if ((fZ||fS!=fO)) goto L_00708119;
L_0070810f:; BB(0x0070810f);
    /* 0070810f: movzx eax, word ptr [esp + 4] */ r_eax = (u32)R16((u32)(r_esp+0x4u));
    /* 00708114: mov word ptr [ecx + edx*2 + 2], ax */ W16((u32)(r_ecx+r_edx*2+0x2u), (u16)r_eax);
L_00708119:; BB(0x00708119);
    /* 00708119: ret 4 */ FN_RET(0x00708108); r_esp += 8; return;
}

void f_0070811c(void) /* sub_70811C */
{
    FN_ENTER(0x0070811c);
    /* 0070811c: mov eax, dword ptr [ecx + 0x14] */ r_eax = R32((u32)(r_ecx+0x14u));
    /* 0070811f: ret  */ FN_RET(0x0070811c); r_esp += 4; return;
}

void f_0070812c(void) /* sub_70812C */
{
    FN_ENTER(0x0070812c);
    /* 0070812c: mov dword ptr [ecx + 0x14], 0 */ W32((u32)(r_ecx+0x14u), 0x0u);
    /* 00708133: ret  */ FN_RET(0x0070812c); r_esp += 4; return;
}

void f_00708134(void) /* sub_708134 */
{
    FN_ENTER(0x00708134);
    /* 00708134: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00708136: mov word ptr [ecx + 2], dx */ W16((u32)(r_ecx+0x2u), (u16)r_edx);
    /* 0070813a: mov word ptr [ecx], dx */ W16((u32)(r_ecx), (u16)r_edx);
    /* 0070813d: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 00708142: mov word ptr [ecx + 4], ax */ W16((u32)(r_ecx+0x4u), (u16)r_eax);
    /* 00708146: mov word ptr [ecx + 6], ax */ W16((u32)(r_ecx+0x6u), (u16)r_eax);
    /* 0070814a: mov word ptr [ecx + 8], ax */ W16((u32)(r_ecx+0x8u), (u16)r_eax);
    /* 0070814e: mov word ptr [ecx + 0xa], ax */ W16((u32)(r_ecx+0xau), (u16)r_eax);
    /* 00708152: mov word ptr [ecx + 0xc], ax */ W16((u32)(r_ecx+0xcu), (u16)r_eax);
    /* 00708156: mov word ptr [ecx + 0xe], ax */ W16((u32)(r_ecx+0xeu), (u16)r_eax);
    /* 0070815a: mov word ptr [ecx + 0x10], ax */ W16((u32)(r_ecx+0x10u), (u16)r_eax);
    /* 0070815e: mov word ptr [ecx + 0x12], ax */ W16((u32)(r_ecx+0x12u), (u16)r_eax);
    /* 00708162: mov dword ptr [ecx + 0x14], edx */ W32((u32)(r_ecx+0x14u), r_edx);
    /* 00708165: mov dword ptr [ecx + 0x18], edx */ W32((u32)(r_ecx+0x18u), r_edx);
    /* 00708168: ret  */ FN_RET(0x00708134); r_esp += 4; return;
}

void f_0070816c(void) /* sub_70816C */
{
    FN_ENTER(0x0070816c);
    /* 0070816c: call 0x483748 */ r_esp -= 4; W32(r_esp, 0x708171u); f_00483748();
    /* 00708171: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00708173: je 0x70817a */ if (fZ) goto L_0070817a;
L_00708175:; BB(0x00708175);
    /* 00708175: call 0x86dd40 */ r_esp -= 4; W32(r_esp, 0x70817au); f_0086dd40();
L_0070817a:; BB(0x0070817a);
    /* 0070817a: call 0x483740 */ r_esp -= 4; W32(r_esp, 0x70817fu); f_00483740();
    /* 0070817f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00708181: jne 0x70818c */ if (!fZ) goto L_0070818c;
L_00708183:; BB(0x00708183);
    /* 00708183: call 0x483748 */ r_esp -= 4; W32(r_esp, 0x708188u); f_00483748();
    /* 00708188: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0070818a: je 0x708191 */ if (fZ) goto L_00708191;
L_0070818c:; BB(0x0070818c);
    /* 0070818c: call 0x83e0d8 */ r_esp -= 4; W32(r_esp, 0x708191u); f_0083e0d8();
L_00708191:; BB(0x00708191);
    /* 00708191: ret  */ FN_RET(0x0070816c); r_esp += 4; return;
}

void f_00708194(void)
{
    FN_ENTER(0x00708194);
    /* 00708194: call 0x483740 */ r_esp -= 4; W32(r_esp, 0x708199u); f_00483740();
    /* 00708199: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070819b: jne 0x7081a6 */ if (!fZ) goto L_007081a6;
L_0070819d:; BB(0x0070819d);
    /* 0070819d: call 0x483748 */ r_esp -= 4; W32(r_esp, 0x7081a2u); f_00483748();
    /* 007081a2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007081a4: je 0x7081ab */ if (fZ) goto L_007081ab;
L_007081a6:; BB(0x007081a6);
    /* 007081a6: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x7081abu); f_0061cdb0();
L_007081ab:; BB(0x007081ab);
    /* 007081ab: call 0x86dbb0 */ r_esp -= 4; W32(r_esp, 0x7081b0u); f_0086dbb0();
    /* 007081b0: ret  */ FN_RET(0x00708194); r_esp += 4; return;
}

void f_007081b4(void) /* sub_7081B4 */
{
    FN_ENTER(0x007081b4);
    /* 007081b4: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007081b7: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 007081bb: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 007081bf: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 007081c3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007081c4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007081c6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007081c7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007081c8: call 0x86d92c */ r_esp -= 4; W32(r_esp, 0x7081cdu); f_0086d92c();
    /* 007081cd: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007081d0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007081d2: jl 0x708233 */ if ((fS!=fO)) goto L_00708233;
L_007081d4:; BB(0x007081d4);
    /* 007081d4: mov dword ptr [esp + 0xc], ebx */ W32((u32)(r_esp+0xcu), r_ebx);
    /* 007081d8: mov ebx, eax */ r_ebx = r_eax;
    /* 007081da: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 007081de: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 007081e2: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 007081e6: mov edi, dword ptr [esp + 0x14] */ r_edi = R32((u32)(r_esp+0x14u));
    /* 007081ea: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 007081ed: mov ebp, dword ptr [esp + 0x1c] */ r_ebp = R32((u32)(r_esp+0x1cu));
L_007081f1:; BB(0x007081f1);
    /* 007081f1: call 0x80030c */ r_esp -= 4; W32(r_esp, 0x7081f6u); f_0080030c();
    /* 007081f6: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007081f7: call 0x6a71c0 */ r_esp -= 4; W32(r_esp, 0x7081fcu); f_006a71c0();
    /* 007081fc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007081fd: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00708200: je 0x708222 */ if (fZ) goto L_00708222;
L_00708202:; BB(0x00708202);
    /* 00708202: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00708205: je 0x7081f1 */ if (fZ) goto L_007081f1;
L_00708207:; BB(0x00708207);
    /* 00708207: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070820a: je 0x708211 */ if (fZ) goto L_00708211;
L_0070820c:; BB(0x0070820c);
    /* 0070820c: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070820f: jne 0x7081f1 */ if (!fZ) goto L_007081f1;
L_00708211:; BB(0x00708211);
    /* 00708211: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00708212: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00708214: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00708215: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00708216: call 0x86d92c */ r_esp -= 4; W32(r_esp, 0x70821bu); f_0086d92c();
    /* 0070821b: mov ebx, eax */ r_ebx = r_eax;
    /* 0070821d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00708220: jmp 0x7081f1 */ goto L_007081f1;
L_00708222:; BB(0x00708222);
    /* 00708222: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 00708226: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 0070822a: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
    /* 0070822d: mov eax, ebx */ r_eax = r_ebx;
    /* 0070822f: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
L_00708233:; BB(0x00708233);
    /* 00708233: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00708236: ret  */ FN_RET(0x007081b4); r_esp += 4; return;
}

void f_00708238(void) /* sub_708238 */
{
    FN_ENTER(0x00708238);
    /* 00708238: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00708239: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0070823a: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0070823e: call 0x708278 */ r_esp -= 4; W32(r_esp, 0x708243u); f_00708278();
    /* 00708243: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00708247: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00708248: call 0x86da20 */ r_esp -= 4; W32(r_esp, 0x70824du); f_0086da20();
    /* 0070824d: mov esi, eax */ r_esi = r_eax;
    /* 0070824f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00708252: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00708254: je 0x708261 */ if (fZ) goto L_00708261;
L_00708256:; BB(0x00708256);
    /* 00708256: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00708257: call 0x86dc7c */ r_esp -= 4; W32(r_esp, 0x70825cu); f_0086dc7c();
    /* 0070825c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0070825d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0070825f: jle 0x708266 */ if ((fZ||fS!=fO)) goto L_00708266;
L_00708261:; BB(0x00708261);
    /* 00708261: mov eax, esi */ r_eax = r_esi;
    /* 00708263: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00708264: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00708265: ret  */ FN_RET(0x00708238); r_esp += 4; return;
L_00708266:; BB(0x00708266);
    /* 00708266: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00708267: call 0x86db40 */ r_esp -= 4; W32(r_esp, 0x70826cu); f_0086db40();
    /* 0070826c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0070826e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00708271: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00708272: ret  */ FN_RET(0x00708238); r_esp += 4; return;
}

void f_00708278(void) /* sub_708278 */
{
    FN_ENTER(0x00708278);
    /* 00708278: mov ecx, 0xa96f40 */ r_ecx = 0xa96f40u;
    /* 0070827d: mov edx, eax */ r_edx = r_eax;
    /* 0070827f: call 0x83e614 */ r_esp -= 4; W32(r_esp, 0x708284u); f_0083e614();
    /* 00708284: mov eax, 0xa96f40 */ r_eax = 0xa96f40u;
    /* 00708289: ret  */ FN_RET(0x00708278); r_esp += 4; return;
}

void f_0070828c(void) /* sub_70828C */
{
    FN_ENTER(0x0070828c);
    /* 0070828c: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0070828f: call 0x483740 */ r_esp -= 4; W32(r_esp, 0x708294u); f_00483740();
    /* 00708294: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00708296: jne 0x7082a1 */ if (!fZ) goto L_007082a1;
L_00708298:; BB(0x00708298);
    /* 00708298: call 0x483748 */ r_esp -= 4; W32(r_esp, 0x70829du); f_00483748();
    /* 0070829d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070829f: je 0x7082a6 */ if (fZ) goto L_007082a6;
L_007082a1:; BB(0x007082a1);
    /* 007082a1: call 0x83e144 */ r_esp -= 4; W32(r_esp, 0x7082a6u); f_0083e144();
L_007082a6:; BB(0x007082a6);
    /* 007082a6: call 0x483748 */ r_esp -= 4; W32(r_esp, 0x7082abu); f_00483748();
    /* 007082ab: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007082ad: jne 0x7082b3 */ if (!fZ) goto L_007082b3;
L_007082af:; BB(0x007082af);
    /* 007082af: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007082b2: ret  */ FN_RET(0x0070828c); r_esp += 4; return;
L_007082b3:; BB(0x007082b3);
    /* 007082b3: call 0x83e134 */ r_esp -= 4; W32(r_esp, 0x7082b8u); f_0083e134();
    /* 007082b8: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 007082bb: call 0x483758 */ r_esp -= 4; W32(r_esp, 0x7082c0u); f_00483758();
    /* 007082c0: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 007082c4: call 0x483750 */ r_esp -= 4; W32(r_esp, 0x7082c9u); f_00483750();
    /* 007082c9: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 007082cd: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 007082d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007082d1: call 0x86e148 */ r_esp -= 4; W32(r_esp, 0x7082d6u); f_0086e148();
    /* 007082d6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007082d9: ret  */ FN_RET(0x0070828c); r_esp += 4; return;
}

void f_007082dc(void) /* sub_7082DC */
{
    FN_ENTER(0x007082dc);
    /* 007082dc: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x7082e1u); f_006dc358();
    /* 007082e1: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007082e4: jne 0x7082ec */ if (!fZ) goto L_007082ec;
L_007082e6:; BB(0x007082e6);
    /* 007082e6: mov eax, 0x96eb40 */ r_eax = 0x96eb40u;
    /* 007082eb: ret  */ FN_RET(0x007082dc); r_esp += 4; return;
L_007082ec:; BB(0x007082ec);
    /* 007082ec: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007082ef: jne 0x7082f7 */ if (!fZ) goto L_007082f7;
L_007082f1:; BB(0x007082f1);
    /* 007082f1: mov eax, 0x96eb50 */ r_eax = 0x96eb50u;
    /* 007082f6: ret  */ FN_RET(0x007082dc); r_esp += 4; return;
L_007082f7:; BB(0x007082f7);
    /* 007082f7: mov eax, 0x96eb6c */ r_eax = 0x96eb6cu;
    /* 007082fc: ret  */ FN_RET(0x007082dc); r_esp += 4; return;
}

void f_00708300(void) /* sub_708300 */
{
    FN_ENTER(0x00708300);
    /* 00708300: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x708305u); f_006dc358();
    /* 00708305: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00708308: jne 0x708310 */ if (!fZ) goto L_00708310;
L_0070830a:; BB(0x0070830a);
    /* 0070830a: mov eax, 0x2af8 */ r_eax = 0x2af8u;
    /* 0070830f: ret  */ FN_RET(0x00708300); r_esp += 4; return;
L_00708310:; BB(0x00708310);
    /* 00708310: mov eax, 0x32c8 */ r_eax = 0x32c8u;
    /* 00708315: ret  */ FN_RET(0x00708300); r_esp += 4; return;
}

void f_00708318(void) /* sub_708318 */
{
    FN_ENTER(0x00708318);
    /* 00708318: call 0x82d2f8 */ r_esp -= 4; W32(r_esp, 0x70831du); f_0082d2f8();
    /* 0070831d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0070831f: je 0x708327 */ if (fZ) goto L_00708327;
L_00708321:; BB(0x00708321);
    /* 00708321: mov eax, 0x96eba4 */ r_eax = 0x96eba4u;
    /* 00708326: ret  */ FN_RET(0x00708318); r_esp += 4; return;
L_00708327:; BB(0x00708327);
    /* 00708327: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x70832cu); f_006dc358();
    /* 0070832c: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0070832f: jne 0x708337 */ if (!fZ) goto L_00708337;
L_00708331:; BB(0x00708331);
    /* 00708331: mov eax, 0x96eb40 */ r_eax = 0x96eb40u;
    /* 00708336: ret  */ FN_RET(0x00708318); r_esp += 4; return;
L_00708337:; BB(0x00708337);
    /* 00708337: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0070833a: jne 0x708342 */ if (!fZ) goto L_00708342;
L_0070833c:; BB(0x0070833c);
    /* 0070833c: mov eax, 0x96eb50 */ r_eax = 0x96eb50u;
    /* 00708341: ret  */ FN_RET(0x00708318); r_esp += 4; return;
L_00708342:; BB(0x00708342);
    /* 00708342: mov eax, 0x96eba4 */ r_eax = 0x96eba4u;
    /* 00708347: ret  */ FN_RET(0x00708318); r_esp += 4; return;
}

void f_00708348(void) /* sub_708348 */
{
    FN_ENTER(0x00708348);
    /* 00708348: call 0x82d2f8 */ r_esp -= 4; W32(r_esp, 0x70834du); f_0082d2f8();
    /* 0070834d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0070834f: je 0x708357 */ if (fZ) goto L_00708357;
L_00708351:; BB(0x00708351);
    /* 00708351: mov eax, 0x2bc0 */ r_eax = 0x2bc0u;
    /* 00708356: ret  */ FN_RET(0x00708348); r_esp += 4; return;
L_00708357:; BB(0x00708357);
    /* 00708357: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x70835cu); f_006dc358();
    /* 0070835c: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0070835f: jne 0x708367 */ if (!fZ) goto L_00708367;
L_00708361:; BB(0x00708361);
    /* 00708361: mov eax, 0x2af8 */ r_eax = 0x2af8u;
    /* 00708366: ret  */ FN_RET(0x00708348); r_esp += 4; return;
L_00708367:; BB(0x00708367);
    /* 00708367: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0070836a: jne 0x708372 */ if (!fZ) goto L_00708372;
L_0070836c:; BB(0x0070836c);
    /* 0070836c: mov eax, 0x2af8 */ r_eax = 0x2af8u;
    /* 00708371: ret  */ FN_RET(0x00708348); r_esp += 4; return;
L_00708372:; BB(0x00708372);
    /* 00708372: mov eax, 0x2b5c */ r_eax = 0x2b5cu;
    /* 00708377: ret  */ FN_RET(0x00708348); r_esp += 4; return;
}

void f_00708378(void) /* sub_708378 */
{
    FN_ENTER(0x00708378);
    /* 00708378: call 0x83eca4 */ r_esp -= 4; W32(r_esp, 0x70837du); f_0083eca4();
    /* 0070837d: call 0x708384 */ r_esp -= 4; W32(r_esp, 0x708382u); f_00708384();
    /* 00708382: ret  */ FN_RET(0x00708378); r_esp += 4; return;
}

void f_00708384(void) /* sub_708384 */
{
    FN_ENTER(0x00708384);
    /* 00708384: mov eax, dword ptr [0xa978bc] */ r_eax = R32((u32)(0xa978bcu));
    /* 00708389: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070838b: je 0x70839e */ if (fZ) goto L_0070839e;
L_0070838d:; BB(0x0070838d);
    /* 0070838d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0070838e: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x708393u); f_00857e98();
    /* 00708393: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00708394: mov dword ptr [0xa978bc], 0 */ W32((u32)(0xa978bcu), 0x0u);
L_0070839e:; BB(0x0070839e);
    /* 0070839e: mov eax, dword ptr [0xa978c0] */ r_eax = R32((u32)(0xa978c0u));
    /* 007083a3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007083a5: je 0x7083b8 */ if (fZ) goto L_007083b8;
L_007083a7:; BB(0x007083a7);
    /* 007083a7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007083a8: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x7083adu); f_00857e98();
    /* 007083ad: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007083ae: mov dword ptr [0xa978c0], 0 */ W32((u32)(0xa978c0u), 0x0u);
L_007083b8:; BB(0x007083b8);
    /* 007083b8: mov eax, dword ptr [0xa9791c] */ r_eax = R32((u32)(0xa9791cu));
    /* 007083bd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007083bf: je 0x7083d2 */ if (fZ) goto L_007083d2;
L_007083c1:; BB(0x007083c1);
    /* 007083c1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007083c2: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x7083c7u); f_00857e98();
    /* 007083c7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007083c8: mov dword ptr [0xa9791c], 0 */ W32((u32)(0xa9791cu), 0x0u);
L_007083d2:; BB(0x007083d2);
    /* 007083d2: ret  */ FN_RET(0x00708384); r_esp += 4; return;
}

void f_007083d4(void) /* sub_7083D4 */
{
    FN_ENTER(0x007083d4);
    /* 007083d4: mov eax, 1 */ r_eax = 0x1u;
    /* 007083d9: ret  */ FN_RET(0x007083d4); r_esp += 4; return;
}

void f_007083dc(void) /* sub_7083DC */
{
    FN_ENTER(0x007083dc);
    /* 007083dc: mov eax, dword ptr [0xa978ac] */ r_eax = R32((u32)(0xa978acu));
    /* 007083e1: mov dword ptr [0xa978b0], 0 */ W32((u32)(0xa978b0u), 0x0u);
    /* 007083eb: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 007083ee: mov dword ptr [0xa978ac], eax */ W32((u32)(0xa978acu), r_eax);
    /* 007083f3: call 0x6c44c4 */ r_esp -= 4; W32(r_esp, 0x7083f8u); f_006c44c4();
    /* 007083f8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007083fa: ret  */ FN_RET(0x007083dc); r_esp += 4; return;
}

void f_007083fc(void) /* sub_7083FC */
{
    FN_ENTER(0x007083fc);
    /* 007083fc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007083fd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007083fe: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007083ff: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00708400: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00708401: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 00708405: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00708407: mov eax, dword ptr [0xa97910] */ r_eax = R32((u32)(0xa97910u));
    /* 0070840c: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0070840f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00708411: je 0x708465 */ if (fZ) goto L_00708465;
L_00708413:; BB(0x00708413);
    /* 00708413: mov ecx, dword ptr [0xa9791c] */ r_ecx = R32((u32)(0xa9791cu));
    /* 00708419: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 0070841b: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 0070841e: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00708420: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00708422: sub eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00708424: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00708426: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00708428: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_0070842a:; BB(0x0070842a);
    /* 0070842a: lea esi, [ecx + eax] */ r_esi = (u32)(r_ecx+r_eax);
    /* 0070842d: cmp edx, dword ptr [esi] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esi)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070842f: jne 0x708452 */ if (!fZ) goto L_00708452;
L_00708431:; BB(0x00708431);
    /* 00708431: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
    /* 00708435: mov ebp, dword ptr [eax + ecx + 4] */ r_ebp = R32((u32)(r_eax+r_ecx+0x4u));
    /* 00708439: cmp ebp, dword ptr [edi + 4] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_edi+0x4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070843c: jne 0x708452 */ if (!fZ) goto L_00708452;
L_0070843e:; BB(0x0070843e);
    /* 0070843e: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
    /* 00708442: mov ebp, dword ptr [eax + ecx + 8] */ r_ebp = R32((u32)(r_eax+r_ecx+0x8u));
    /* 00708446: cmp ebp, dword ptr [edi + 8] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_edi+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00708449: jne 0x708452 */ if (!fZ) goto L_00708452;
L_0070844b:; BB(0x0070844b);
    /* 0070844b: mov ebp, 1 */ r_ebp = 0x1u;
    /* 00708450: jmp 0x708454 */ goto L_00708454;
L_00708452:; BB(0x00708452);
    /* 00708452: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
L_00708454:; BB(0x00708454);
    /* 00708454: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00708456: jne 0x70846d */ if (!fZ) goto L_0070846d;
L_00708458:; BB(0x00708458);
    /* 00708458: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
    /* 0070845b: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0070845e: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00708461: cmp ebx, ebp */ {  u32 a = r_ebx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00708463: jb 0x70842a */ if (fC) goto L_0070842a;
L_00708465:; BB(0x00708465);
    /* 00708465: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00708467: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00708468: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00708469: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0070846a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0070846b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0070846c: ret  */ FN_RET(0x007083fc); r_esp += 4; return;
L_0070846d:; BB(0x0070846d);
    /* 0070846d: mov eax, esi */ r_eax = r_esi;
    /* 0070846f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00708470: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00708471: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00708472: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00708473: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00708474: ret  */ FN_RET(0x007083fc); r_esp += 4; return;
}

void f_00708478(void) /* sub_708478 */
{
    FN_ENTER(0x00708478);
    /* 00708478: mov eax, dword ptr [0xa97918] */ r_eax = R32((u32)(0xa97918u));
    /* 0070847d: cmp eax, dword ptr [0xa97910] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa97910u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00708483: jae 0x70849c */ if (!fC) goto L_0070849c;
L_00708485:; BB(0x00708485);
    /* 00708485: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 00708488: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0070848a: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0070848c: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0070848e: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00708490: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00708492: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00708494: add edx, dword ptr [0xa9791c] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa9791cu)); u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0070849a: jmp 0x70849e */ goto L_0070849e;
L_0070849c:; BB(0x0070849c);
    /* 0070849c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_0070849e:; BB(0x0070849e);
    /* 0070849e: mov eax, edx */ r_eax = r_edx;
    /* 007084a0: ret  */ FN_RET(0x00708478); r_esp += 4; return;
}

void f_007084a4(void) /* sub_7084A4 */
{
    FN_ENTER(0x007084a4);
    /* 007084a4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007084a5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007084a6: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x7084abu); f_006dc358();
    /* 007084ab: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007084ae: je 0x7084f7 */ if (fZ) goto L_007084f7;
L_007084b0:; BB(0x007084b0);
    /* 007084b0: call 0x708514 */ r_esp -= 4; W32(r_esp, 0x7084b5u); f_00708514();
    /* 007084b5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007084b7: je 0x7084d5 */ if (fZ) goto L_007084d5;
L_007084b9:; BB(0x007084b9);
    /* 007084b9: call 0x7085f4 */ r_esp -= 4; W32(r_esp, 0x7084beu); f_007085f4();
    /* 007084be: mov esi, 0xa97820 */ r_esi = 0xa97820u;
    /* 007084c3: mov edi, eax */ r_edi = r_eax;
L_007084c5:; BB(0x007084c5);
    /* 007084c5: mov dl, byte ptr [edi] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 007084c7: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 007084ca: mov byte ptr [esi], dl */ W8((u32)(r_esi), (u8)r_edx);
    /* 007084cc: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007084cf: test dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007084d1: jne 0x7084c5 */ if (!fZ) goto L_007084c5;
L_007084d3:; BB(0x007084d3);
    /* 007084d3: jmp 0x7084ef */ goto L_007084ef;
L_007084d5:; BB(0x007084d5);
    /* 007084d5: call 0x7085d0 */ r_esp -= 4; W32(r_esp, 0x7084dau); f_007085d0();
    /* 007084da: mov esi, 0xa97820 */ r_esi = 0xa97820u;
    /* 007084df: mov edi, eax */ r_edi = r_eax;
L_007084e1:; BB(0x007084e1);
    /* 007084e1: mov dl, byte ptr [edi] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 007084e3: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 007084e6: mov byte ptr [esi], dl */ W8((u32)(r_esi), (u8)r_edx);
    /* 007084e8: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007084eb: test dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007084ed: jne 0x7084e1 */ if (!fZ) goto L_007084e1;
L_007084ef:; BB(0x007084ef);
    /* 007084ef: mov eax, 0xa97820 */ r_eax = 0xa97820u;
    /* 007084f4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007084f5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007084f6: ret  */ FN_RET(0x007084a4); r_esp += 4; return;
L_007084f7:; BB(0x007084f7);
    /* 007084f7: mov esi, 0xa97820 */ r_esi = 0xa97820u;
    /* 007084fc: mov edi, 0xa43560 */ r_edi = 0xa43560u;
L_00708501:; BB(0x00708501);
    /* 00708501: mov dl, byte ptr [edi] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 00708503: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00708506: mov byte ptr [esi], dl */ W8((u32)(r_esi), (u8)r_edx);
    /* 00708508: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0070850b: test dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0070850d: jne 0x708501 */ if (!fZ) goto L_00708501;
L_0070850f:; BB(0x0070850f);
    /* 0070850f: jmp 0x7084ef */ goto L_007084ef;
}

void f_00708514(void) /* sub_708514 */
{
    FN_ENTER(0x00708514);
    /* 00708514: mov eax, 0x1130 */ r_eax = 0x1130u;
    /* 00708519: call 0x858020 */ r_esp -= 4; W32(r_esp, 0x70851eu); f_00858020();
    /* 0070851e: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x708523u); f_006dc358();
    /* 00708523: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00708526: je 0x7085ba */ if (fZ) goto L_007085ba;
L_0070852c:; BB(0x0070852c);
    /* 0070852c: call 0x82d2f8 */ r_esp -= 4; W32(r_esp, 0x708531u); f_0082d2f8();
    /* 00708531: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00708533: je 0x708541 */ if (fZ) goto L_00708541;
L_00708535:; BB(0x00708535);
    /* 00708535: mov eax, 1 */ r_eax = 0x1u;
    /* 0070853a: add esp, 0x1130 */ {  u32 a = r_esp; u32 b = 0x1130u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00708540: ret  */ FN_RET(0x00708514); r_esp += 4; return;
L_00708541:; BB(0x00708541);
    /* 00708541: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00708543: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00708546: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0070854a: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0070854e: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 00708552: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00708556: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0070855a: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0070855e: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 00708562: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 00708566: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 0070856a: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 0070856e: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 00708572: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00708575: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00708576: push 0x96eae4 */ { u32 v = 0x96eae4u; r_esp -= 4; W32(r_esp, v); }
    /* 0070857b: call 0x82d3c0 */ r_esp -= 4; W32(r_esp, 0x708580u); f_0082d3c0();
    /* 00708580: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00708583: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00708585: mov eax, 0x96ead8 */ r_eax = 0x96ead8u;
    /* 0070858a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0070858b: lea ecx, [esp + 0x38] */ r_ecx = (u32)(r_esp+0x38u);
    /* 0070858f: call 0x763fd0 */ r_esp -= 4; W32(r_esp, 0x708594u); f_00763fd0();
    /* 00708594: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00708597: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00708599: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0070859a: lea ecx, [esp + 0x38] */ r_ecx = (u32)(r_esp+0x38u);
    /* 0070859e: call 0x763e70 */ r_esp -= 4; W32(r_esp, 0x7085a3u); f_00763e70();
    /* 007085a3: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 007085a6: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 007085a8: push 0x96eaf4 */ { u32 v = 0x96eaf4u; r_esp -= 4; W32(r_esp, v); }
    /* 007085ad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007085ae: call 0x8598c0 */ r_esp -= 4; W32(r_esp, 0x7085b3u); f_008598c0();
    /* 007085b3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007085b6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007085b8: jne 0x7085c6 */ if (!fZ) goto L_007085c6;
L_007085ba:; BB(0x007085ba);
    /* 007085ba: mov eax, 1 */ r_eax = 0x1u;
    /* 007085bf: add esp, 0x1130 */ {  u32 a = r_esp; u32 b = 0x1130u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007085c5: ret  */ FN_RET(0x00708514); r_esp += 4; return;
L_007085c6:; BB(0x007085c6);
    /* 007085c6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007085c8: add esp, 0x1130 */ {  u32 a = r_esp; u32 b = 0x1130u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007085ce: ret  */ FN_RET(0x00708514); r_esp += 4; return;
}

void f_007085d0(void) /* sub_7085D0 */
{
    FN_ENTER(0x007085d0);
    /* 007085d0: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x7085d5u); f_006dc358();
    /* 007085d5: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007085d8: jne 0x7085e0 */ if (!fZ) goto L_007085e0;
L_007085da:; BB(0x007085da);
    /* 007085da: mov eax, 0x96eb00 */ r_eax = 0x96eb00u;
    /* 007085df: ret  */ FN_RET(0x007085d0); r_esp += 4; return;
L_007085e0:; BB(0x007085e0);
    /* 007085e0: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007085e3: jne 0x7085eb */ if (!fZ) goto L_007085eb;
L_007085e5:; BB(0x007085e5);
    /* 007085e5: mov eax, 0x96eb0c */ r_eax = 0x96eb0cu;
    /* 007085ea: ret  */ FN_RET(0x007085d0); r_esp += 4; return;
L_007085eb:; BB(0x007085eb);
    /* 007085eb: mov eax, 0x96eb24 */ r_eax = 0x96eb24u;
    /* 007085f0: ret  */ FN_RET(0x007085d0); r_esp += 4; return;
}

void f_007085f4(void) /* sub_7085F4 */
{
    FN_ENTER(0x007085f4);
    /* 007085f4: call 0x82d2f8 */ r_esp -= 4; W32(r_esp, 0x7085f9u); f_0082d2f8();
    /* 007085f9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007085fb: je 0x708603 */ if (fZ) goto L_00708603;
L_007085fd:; BB(0x007085fd);
    /* 007085fd: mov eax, 0x96eb88 */ r_eax = 0x96eb88u;
    /* 00708602: ret  */ FN_RET(0x007085f4); r_esp += 4; return;
L_00708603:; BB(0x00708603);
    /* 00708603: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x708608u); f_006dc358();
    /* 00708608: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0070860b: jne 0x708613 */ if (!fZ) goto L_00708613;
L_0070860d:; BB(0x0070860d);
    /* 0070860d: mov eax, 0x96eb00 */ r_eax = 0x96eb00u;
    /* 00708612: ret  */ FN_RET(0x007085f4); r_esp += 4; return;
L_00708613:; BB(0x00708613);
    /* 00708613: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00708616: jne 0x70861e */ if (!fZ) goto L_0070861e;
L_00708618:; BB(0x00708618);
    /* 00708618: mov eax, 0x96eb0c */ r_eax = 0x96eb0cu;
    /* 0070861d: ret  */ FN_RET(0x007085f4); r_esp += 4; return;
L_0070861e:; BB(0x0070861e);
    /* 0070861e: mov eax, 0x96eb88 */ r_eax = 0x96eb88u;
    /* 00708623: ret  */ FN_RET(0x007085f4); r_esp += 4; return;
}

void f_00708624(void) /* sub_708624 */
{
    FN_ENTER(0x00708624);
    /* 00708624: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x708629u); f_006dc358();
    /* 00708629: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0070862c: jne 0x708635 */ if (!fZ) goto L_00708635;
L_0070862e:; BB(0x0070862e);
    /* 0070862e: mov eax, dword ptr [0xa43670] */ r_eax = R32((u32)(0xa43670u));
    /* 00708633: jmp 0x708654 */ goto L_00708654;
L_00708635:; BB(0x00708635);
    /* 00708635: call 0x708514 */ r_esp -= 4; W32(r_esp, 0x70863au); f_00708514();
    /* 0070863a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070863c: je 0x70864a */ if (fZ) goto L_0070864a;
L_0070863e:; BB(0x0070863e);
    /* 0070863e: call 0x708670 */ r_esp -= 4; W32(r_esp, 0x708643u); f_00708670();
    /* 00708643: mov eax, 0x2ee0 */ r_eax = 0x2ee0u;
    /* 00708648: jmp 0x708654 */ goto L_00708654;
L_0070864a:; BB(0x0070864a);
    /* 0070864a: call 0x708658 */ r_esp -= 4; W32(r_esp, 0x70864fu); f_00708658();
    /* 0070864f: mov eax, 0x36b0 */ r_eax = 0x36b0u;
L_00708654:; BB(0x00708654);
    /* 00708654: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 00708657: ret  */ FN_RET(0x00708624); r_esp += 4; return;
}

void f_00708658(void) /* sub_708658 */
{
    FN_ENTER(0x00708658);
    /* 00708658: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x70865du); f_006dc358();
    /* 0070865d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00708660: jne 0x708668 */ if (!fZ) goto L_00708668;
L_00708662:; BB(0x00708662);
    /* 00708662: mov eax, 0x2ee0 */ r_eax = 0x2ee0u;
    /* 00708667: ret  */ FN_RET(0x00708658); r_esp += 4; return;
L_00708668:; BB(0x00708668);
    /* 00708668: mov eax, 0x2ee0 */ r_eax = 0x2ee0u;
    /* 0070866d: ret  */ FN_RET(0x00708658); r_esp += 4; return;
}

void f_00708670(void) /* sub_708670 */
{
    FN_ENTER(0x00708670);
    /* 00708670: call 0x82d2f8 */ r_esp -= 4; W32(r_esp, 0x708675u); f_0082d2f8();
    /* 00708675: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00708677: je 0x70867f */ if (fZ) goto L_0070867f;
L_00708679:; BB(0x00708679);
    /* 00708679: mov eax, 0x2ee0 */ r_eax = 0x2ee0u;
    /* 0070867e: ret  */ FN_RET(0x00708670); r_esp += 4; return;
L_0070867f:; BB(0x0070867f);
    /* 0070867f: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x708684u); f_006dc358();
    /* 00708684: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00708687: jne 0x70868f */ if (!fZ) goto L_0070868f;
L_00708689:; BB(0x00708689);
    /* 00708689: mov eax, 0x2ee0 */ r_eax = 0x2ee0u;
    /* 0070868e: ret  */ FN_RET(0x00708670); r_esp += 4; return;
L_0070868f:; BB(0x0070868f);
    /* 0070868f: mov eax, 0x2ee0 */ r_eax = 0x2ee0u;
    /* 00708694: ret  */ FN_RET(0x00708670); r_esp += 4; return;
}

void f_00708698(void) /* sub_708698 */
{
    FN_ENTER(0x00708698);
    /* 00708698: mov eax, dword ptr [0xa978b4] */ r_eax = R32((u32)(0xa978b4u));
    /* 0070869d: or eax, dword ptr [esp + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x4u)); u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007086a1: and eax, dword ptr [esp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x8u)); u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007086a5: mov dword ptr [0xa978b4], eax */ W32((u32)(0xa978b4u), r_eax);
    /* 007086aa: ret  */ FN_RET(0x00708698); r_esp += 4; return;
}

void f_007086ac(void) /* sub_7086AC */
{
    FN_ENTER(0x007086ac);
    /* 007086ac: mov dword ptr [0xa978a0], 0x3f800000 */ W32((u32)(0xa978a0u), 0x3f800000u);
    /* 007086b6: mov dword ptr [0xa978a4], 0x41000000 */ W32((u32)(0xa978a4u), 0x41000000u);
    /* 007086c0: mov dword ptr [0xa978a8], 0x3fc00000 */ W32((u32)(0xa978a8u), 0x3fc00000u);
    /* 007086ca: ret  */ FN_RET(0x007086ac); r_esp += 4; return;
}

void f_007086cc(void) /* sub_7086CC */
{
    FN_ENTER(0x007086cc);
    /* 007086cc: mov edx, dword ptr [0xa9791c] */ r_edx = R32((u32)(0xa9791cu));
    /* 007086d2: mov eax, 0x96ea94 */ r_eax = 0x96ea94u;
    /* 007086d7: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 007086d9: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 007086db: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 007086de: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 007086e1: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 007086e4: mov dword ptr [edx + 8], ecx */ W32((u32)(r_edx+0x8u), r_ecx);
    /* 007086e7: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 007086ea: mov dword ptr [edx + 0xc], ecx */ W32((u32)(r_edx+0xcu), r_ecx);
    /* 007086ed: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 007086f0: mov dword ptr [edx + 0x10], ecx */ W32((u32)(r_edx+0x10u), r_ecx);
    /* 007086f3: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 007086f6: mov dword ptr [edx + 0x14], ecx */ W32((u32)(r_edx+0x14u), r_ecx);
    /* 007086f9: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 007086fc: mov dword ptr [edx + 0x18], ecx */ W32((u32)(r_edx+0x18u), r_ecx);
    /* 007086ff: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 00708702: mov dword ptr [edx + 0x1c], ecx */ W32((u32)(r_edx+0x1cu), r_ecx);
    /* 00708705: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 00708708: mov dword ptr [edx + 0x20], ecx */ W32((u32)(r_edx+0x20u), r_ecx);
    /* 0070870b: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 0070870e: mov dword ptr [edx + 0x24], ecx */ W32((u32)(r_edx+0x24u), r_ecx);
    /* 00708711: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 00708714: mov dword ptr [edx + 0x28], ecx */ W32((u32)(r_edx+0x28u), r_ecx);
    /* 00708717: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 0070871a: mov dword ptr [edx + 0x2c], ecx */ W32((u32)(r_edx+0x2cu), r_ecx);
    /* 0070871d: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 00708720: mov eax, dword ptr [eax + 0x34] */ r_eax = R32((u32)(r_eax+0x34u));
    /* 00708723: mov dword ptr [edx + 0x30], ecx */ W32((u32)(r_edx+0x30u), r_ecx);
    /* 00708726: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 00708729: mov dword ptr [0xa97910], 1 */ W32((u32)(0xa97910u), 0x1u);
    /* 00708733: ret  */ FN_RET(0x007086cc); r_esp += 4; return;
}

void f_00708734(void) /* sub_708734 */
{
    FN_ENTER(0x00708734);
    /* 00708734: mov eax, dword ptr [0xa978b0] */ r_eax = R32((u32)(0xa978b0u));
    /* 00708739: ret  */ FN_RET(0x00708734); r_esp += 4; return;
}

void f_0070873c(void) /* sub_70873C */
{
    FN_ENTER(0x0070873c);
    /* 0070873c: mov eax, dword ptr [0xa978ac] */ r_eax = R32((u32)(0xa978acu));
    /* 00708741: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00708744: mov dword ptr [0xa978ac], eax */ W32((u32)(0xa978acu), r_eax);
    /* 00708749: ret  */ FN_RET(0x0070873c); r_esp += 4; return;
}

void f_0070874c(void) /* sub_70874C */
{
    FN_ENTER(0x0070874c);
    /* 0070874c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0070874d: call 0x708790 */ r_esp -= 4; W32(r_esp, 0x708752u); f_00708790();
    /* 00708752: call 0x83fa1c */ r_esp -= 4; W32(r_esp, 0x708757u); f_0083fa1c();
    /* 00708757: call 0x7086cc */ r_esp -= 4; W32(r_esp, 0x70875cu); f_007086cc();
    /* 0070875c: mov edx, 0xa978d4 */ r_edx = 0xa978d4u;
    /* 00708761: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00708763: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00708765: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00708768: mov edx, 0xa978c4 */ r_edx = 0xa978c4u;
    /* 0070876d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0070876f: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00708771: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00708774: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 00708777: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 0070877a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0070877c: mov ebx, eax */ r_ebx = r_eax;
L_0070877e:; BB(0x0070877e);
    /* 0070877e: call 0x5b9204 */ r_esp -= 4; W32(r_esp, 0x708783u); f_005b9204();
    /* 00708783: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00708786: cmp ebx, 0x3c */ {  u32 a = r_ebx; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00708789: jb 0x70877e */ if (fC) goto L_0070877e;
L_0070878b:; BB(0x0070878b);
    /* 0070878b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0070878c: ret  */ FN_RET(0x0070874c); r_esp += 4; return;
}

void f_00708790(void) /* sub_708790 */
{
    FN_ENTER(0x00708790);
    /* 00708790: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 00708792: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00708794: mov dword ptr [0xa97910], eax */ W32((u32)(0xa97910u), r_eax);
    /* 00708799: mov dword ptr [0xa97918], eax */ W32((u32)(0xa97918u), r_eax);
    /* 0070879e: mov dword ptr [0xa97914], eax */ W32((u32)(0xa97914u), r_eax);
    /* 007087a3: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x7087a8u); f_008581c5();
    /* 007087a8: mov dword ptr [0xa9791c], eax */ W32((u32)(0xa9791cu), r_eax);
    /* 007087ad: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007087af: mov dword ptr [0xa978c0], eax */ W32((u32)(0xa978c0u), r_eax);
    /* 007087b4: mov dword ptr [0xa978b8], eax */ W32((u32)(0xa978b8u), r_eax);
    /* 007087b9: mov dword ptr [0xa978bc], eax */ W32((u32)(0xa978bcu), r_eax);
    /* 007087be: mov dword ptr [0xa978b4], eax */ W32((u32)(0xa978b4u), r_eax);
    /* 007087c3: mov dword ptr [0xa978b0], eax */ W32((u32)(0xa978b0u), r_eax);
    /* 007087c8: mov dword ptr [0xa978ac], eax */ W32((u32)(0xa978acu), r_eax);
    /* 007087cd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007087ce: ret  */ FN_RET(0x00708790); r_esp += 4; return;
}

void f_007087dc(void) /* sub_7087DC */
{
    FN_ENTER(0x007087dc);
    /* 007087dc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007087dd: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007087de: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
    /* 007087e2: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007087e4: jne 0x7087eb */ if (!fZ) goto L_007087eb;
L_007087e6:; BB(0x007087e6);
    /* 007087e6: mov edi, 0x8f8814 */ r_edi = 0x8f8814u;
L_007087eb:; BB(0x007087eb);
    /* 007087eb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007087ed: mov dh, byte ptr [edi] */ r_edx = (r_edx & 0xffff00ffu) | (((R8((u32)(r_edi))) & 0xffu) << 8);
    /* 007087ef: mov ecx, edi */ r_ecx = r_edi;
    /* 007087f1: test dh, dh */ {  u32 a = (u8)(r_edx>>8); u32 b = (u8)(r_edx>>8); u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007087f3: je 0x708801 */ if (fZ) goto L_00708801;
L_007087f5:; BB(0x007087f5);
    /* 007087f5: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007087f8: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007087fb: mov dl, byte ptr [ecx] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx))) & 0xffu);
    /* 007087fd: test dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007087ff: jne 0x7087f5 */ if (!fZ) goto L_007087f5;
L_00708801:; BB(0x00708801);
    /* 00708801: mov edx, 0x200 */ r_edx = 0x200u;
    /* 00708806: cmp eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0070880b: mov ecx, 0 */ r_ecx = 0x0u;
    /* 00708810: mov word ptr [0xa97920], cx */ W16((u32)(0xa97920u), (u16)r_ecx);
    /* 00708817: mov ecx, 0 */ r_ecx = 0x0u;
    /* 0070881c: jle 0x708820 */ if ((fZ||fS!=fO)) goto L_00708820;
L_0070881e:; BB(0x0070881e);
    /* 0070881e: mov eax, edx */ r_eax = r_edx;
L_00708820:; BB(0x00708820);
    /* 00708820: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00708822: jle 0x708886 */ if ((fZ||fS!=fO)) goto L_00708886;
L_00708824:; BB(0x00708824);
    /* 00708824: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00708827: jl 0x708873 */ if ((fS!=fO)) goto L_00708873;
L_00708829:; BB(0x00708829);
    /* 00708829: lea edx, [eax - 6] */ r_edx = (u32)(r_eax+0xfffffffau);
L_0070882c:; BB(0x0070882c);
    /* 0070882c: movzx ebx, byte ptr [ecx + edi] */ r_ebx = (u32)R8((u32)(r_ecx+r_edi));
    /* 00708830: mov word ptr [ecx*2 + 0xa97920], bx */ W16((u32)(r_ecx*2+0xa97920u), (u16)r_ebx);
    /* 00708838: movzx ebx, byte ptr [ecx + edi + 1] */ r_ebx = (u32)R8((u32)(r_ecx+r_edi+0x1u));
    /* 0070883d: mov word ptr [ecx*2 + 0xa97922], bx */ W16((u32)(r_ecx*2+0xa97922u), (u16)r_ebx);
    /* 00708845: movzx ebx, byte ptr [ecx + edi + 2] */ r_ebx = (u32)R8((u32)(r_ecx+r_edi+0x2u));
    /* 0070884a: mov word ptr [ecx*2 + 0xa97924], bx */ W16((u32)(r_ecx*2+0xa97924u), (u16)r_ebx);
    /* 00708852: movzx ebx, byte ptr [ecx + edi + 3] */ r_ebx = (u32)R8((u32)(r_ecx+r_edi+0x3u));
    /* 00708857: mov word ptr [ecx*2 + 0xa97926], bx */ W16((u32)(r_ecx*2+0xa97926u), (u16)r_ebx);
    /* 0070885f: movzx ebx, byte ptr [ecx + edi + 4] */ r_ebx = (u32)R8((u32)(r_ecx+r_edi+0x4u));
    /* 00708864: mov word ptr [ecx*2 + 0xa97928], bx */ W16((u32)(r_ecx*2+0xa97928u), (u16)r_ebx);
    /* 0070886c: add ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0070886f: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00708871: jle 0x70882c */ if ((fZ||fS!=fO)) goto L_0070882c;
L_00708873:; BB(0x00708873);
    /* 00708873: movzx edx, byte ptr [ecx + edi] */ r_edx = (u32)R8((u32)(r_ecx+r_edi));
    /* 00708877: mov word ptr [ecx*2 + 0xa97920], dx */ W16((u32)(r_ecx*2+0xa97920u), (u16)r_edx);
    /* 0070887f: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00708882: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00708884: jl 0x708873 */ if ((fS!=fO)) goto L_00708873;
L_00708886:; BB(0x00708886);
    /* 00708886: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00708888: mov word ptr [ecx*2 + 0xa97920], dx */ W16((u32)(r_ecx*2+0xa97920u), (u16)r_edx);
    /* 00708890: mov eax, 0xa97920 */ r_eax = 0xa97920u;
    /* 00708895: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00708896: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00708897: ret  */ FN_RET(0x007087dc); r_esp += 4; return;
}

void f_00708898(void) /* sub_708898 */
{
    FN_ENTER(0x00708898);
    /* 00708898: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00708899: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0070889c: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 007088a0: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007088a2: jne 0x7088a9 */ if (!fZ) goto L_007088a9;
L_007088a4:; BB(0x007088a4);
    /* 007088a4: mov ebx, 0x8f8818 */ r_ebx = 0x8f8818u;
L_007088a9:; BB(0x007088a9);
    /* 007088a9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007088aa: call 0x858009 */ r_esp -= 4; W32(r_esp, 0x7088afu); f_00858009();
    /* 007088af: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007088b0: mov byte ptr [0xa97d20], 0 */ W8((u32)(0xa97d20u), 0x0u);
    /* 007088b7: mov edx, 0x200 */ r_edx = 0x200u;
    /* 007088bc: cmp eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007088c1: jle 0x7088c5 */ if ((fZ||fS!=fO)) goto L_007088c5;
L_007088c3:; BB(0x007088c3);
    /* 007088c3: mov eax, edx */ r_eax = r_edx;
L_007088c5:; BB(0x007088c5);
    /* 007088c5: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007088c7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 007088c9: jle 0x70893f */ if ((fZ||fS!=fO)) goto L_0070893f;
L_007088cb:; BB(0x007088cb);
    /* 007088cb: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007088ce: jl 0x70892e */ if ((fS!=fO)) goto L_0070892e;
L_007088d0:; BB(0x007088d0);
    /* 007088d0: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 007088d3: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 007088d7: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
    /* 007088db: mov dword ptr [esp + 0xc], ebp */ W32((u32)(r_esp+0xcu), r_ebp);
    /* 007088df: lea edx, [eax - 6] */ r_edx = (u32)(r_eax+0xfffffffau);
L_007088e2:; BB(0x007088e2);
    /* 007088e2: movzx eax, word ptr [ebx + ecx*2] */ r_eax = (u32)R16((u32)(r_ebx+r_ecx*2));
    /* 007088e6: mov byte ptr [ecx + 0xa97d20], al */ W8((u32)(r_ecx+0xa97d20u), (u8)r_eax);
    /* 007088ec: movzx eax, word ptr [ebx + ecx*2 + 2] */ r_eax = (u32)R16((u32)(r_ebx+r_ecx*2+0x2u));
    /* 007088f1: mov byte ptr [ecx + 0xa97d21], al */ W8((u32)(r_ecx+0xa97d21u), (u8)r_eax);
    /* 007088f7: movzx eax, word ptr [ebx + ecx*2 + 4] */ r_eax = (u32)R16((u32)(r_ebx+r_ecx*2+0x4u));
    /* 007088fc: mov byte ptr [ecx + 0xa97d22], al */ W8((u32)(r_ecx+0xa97d22u), (u8)r_eax);
    /* 00708902: movzx eax, word ptr [ebx + ecx*2 + 6] */ r_eax = (u32)R16((u32)(r_ebx+r_ecx*2+0x6u));
    /* 00708907: mov byte ptr [ecx + 0xa97d23], al */ W8((u32)(r_ecx+0xa97d23u), (u8)r_eax);
    /* 0070890d: movzx eax, word ptr [ebx + ecx*2 + 8] */ r_eax = (u32)R16((u32)(r_ebx+r_ecx*2+0x8u));
    /* 00708912: mov byte ptr [ecx + 0xa97d24], al */ W8((u32)(r_ecx+0xa97d24u), (u8)r_eax);
    /* 00708918: add ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0070891b: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0070891d: jle 0x7088e2 */ if ((fZ||fS!=fO)) goto L_007088e2;
L_0070891f:; BB(0x0070891f);
    /* 0070891f: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 00708922: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 00708926: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
    /* 0070892a: mov ebp, dword ptr [esp + 0xc] */ r_ebp = R32((u32)(r_esp+0xcu));
L_0070892e:; BB(0x0070892e);
    /* 0070892e: movzx edx, word ptr [ebx + ecx*2] */ r_edx = (u32)R16((u32)(r_ebx+r_ecx*2));
    /* 00708932: mov byte ptr [ecx + 0xa97d20], dl */ W8((u32)(r_ecx+0xa97d20u), (u8)r_edx);
    /* 00708938: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0070893b: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0070893d: jl 0x70892e */ if ((fS!=fO)) goto L_0070892e;
L_0070893f:; BB(0x0070893f);
    /* 0070893f: mov byte ptr [ecx + 0xa97d20], 0 */ W8((u32)(r_ecx+0xa97d20u), 0x0u);
    /* 00708946: mov eax, 0xa97d20 */ r_eax = 0xa97d20u;
    /* 0070894b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0070894e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0070894f: ret  */ FN_RET(0x00708898); r_esp += 4; return;
}

void f_00708950(void) /* sub_708950 */
{
    FN_ENTER(0x00708950);
    /* 00708950: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00708951: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00708953: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00708955: call 0x708974 */ r_esp -= 4; W32(r_esp, 0x70895au); f_00708974();
    /* 0070895a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0070895e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00708960: jne 0x708966 */ if (!fZ) goto L_00708966;
L_00708962:; BB(0x00708962);
    /* 00708962: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00708963: ret 4 */ FN_RET(0x00708950); r_esp += 8; return;
L_00708966:; BB(0x00708966);
    /* 00708966: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00708967: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x70896cu); f_005c2f74();
    /* 0070896c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0070896d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0070896e: ret 4 */ FN_RET(0x00708950); r_esp += 8; return;
}

void f_00708974(void) /* sub_708974 */
{
    FN_ENTER(0x00708974);
    /* 00708974: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00708975: mov ebp, esp */ r_ebp = r_esp;
    /* 00708977: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00708979: push 0x8f0180 */ { u32 v = 0x8f0180u; r_esp -= 4; W32(r_esp, v); }
    /* 0070897e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00708984: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00708985: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0070898c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0070898f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00708992: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00708995: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00708998: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0070899b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0070899e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007089a1: mov dword ptr [ecx], 0xb3edb0 */ W32((u32)(r_ecx), 0xb3edb0u);
    /* 007089a7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 007089ae: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x7089b3u); f_008171e8();
    /* 007089b3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007089b6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007089bd: mov esp, ebp */ r_esp = r_ebp;
    /* 007089bf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007089c0: ret  */ FN_RET(0x00708974); r_esp += 4; return;
}

void f_007089c4(void) /* sub_7089C4 */
{
    FN_ENTER(0x007089c4);
    /* 007089c4: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007089c7: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 007089cd: fld dword ptr [0xa48828] */ FPUSH(R_F32((u32)(0xa48828u)));
    /* 007089d3: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 007089d7: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 007089dc: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007089e1: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 007089e5: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 007089e9: fistp dword ptr [0xa97f2c] */ W32((u32)(0xa97f2cu), (u32)fx_int32(ST(0))); FPOP();
    /* 007089ef: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 007089f3: fld dword ptr [0x96ede4] */ FPUSH(R_F32((u32)(0x96ede4u)));
    /* 007089f9: fmul dword ptr [0xaf035c] */ ST(0) = ST(0) * R_F32((u32)(0xaf035cu));
    /* 007089ff: fadd dword ptr [0xa4882c] */ ST(0) = ST(0) + R_F32((u32)(0xa4882cu));
    /* 00708a05: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 00708a09: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 00708a0e: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00708a13: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00708a17: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00708a1b: fistp dword ptr [0xa97f30] */ W32((u32)(0xa97f30u), (u32)fx_int32(ST(0))); FPOP();
    /* 00708a21: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00708a25: mov dword ptr [0xa97f38], 0 */ W32((u32)(0xa97f38u), 0x0u);
    /* 00708a2f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00708a31: mov dword ptr [0xa97f28], edx */ W32((u32)(0xa97f28u), r_edx);
    /* 00708a37: mov word ptr [0xa97f34], dx */ W16((u32)(0xa97f34u), (u16)r_edx);
    /* 00708a3e: mov word ptr [0xa97f36], dx */ W16((u32)(0xa97f36u), (u16)r_edx);
    /* 00708a45: call 0x7be250 */ r_esp -= 4; W32(r_esp, 0x708a4au); f_007be250();
    /* 00708a4a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00708a4b: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00708a4e: call 0x708a5d */ r_esp -= 4; W32(r_esp, 0x708a53u); f_00708a5d();
    /* 00708a53: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00708a56: ret  */ FN_RET(0x007089c4); r_esp += 4; return;
}

void f_00708a58(void) /* sub_708A58 */
{
    FN_ENTER(0x00708a58);
    /* 00708a58: movzx eax, byte ptr [esp + 4] */ r_eax = (u32)R8((u32)(r_esp+0x4u));
    /* 00708a5d: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00708a60: mov dword ptr [0xa97f24], eax */ W32((u32)(0xa97f24u), r_eax);
    /* 00708a65: ret  */ FN_RET(0x00708a58); r_esp += 4; return;
}

void f_00708a5d(void) /* sub_708A5D */
{
    FN_ENTER(0x00708a5d);
    /* 00708a5d: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00708a60: mov dword ptr [0xa97f24], eax */ W32((u32)(0xa97f24u), r_eax);
    /* 00708a65: ret  */ FN_RET(0x00708a5d); r_esp += 4; return;
}

void f_00708a68(void) /* sub_708A68 */
{
    FN_ENTER(0x00708a68);
    /* 00708a68: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00708a69: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00708a6c: mov ebp, dword ptr [esp + 0x1c] */ r_ebp = R32((u32)(r_esp+0x1cu));
    /* 00708a70: mov eax, dword ptr [0x9d09e8] */ r_eax = R32((u32)(0x9d09e8u));
    /* 00708a75: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00708a77: je 0x708bcc */ if (fZ) goto L_00708bcc;
L_00708a7d:; BB(0x00708a7d);
    /* 00708a7d: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00708a7f: je 0x708bcc */ if (fZ) goto L_00708bcc;
L_00708a85:; BB(0x00708a85);
    /* 00708a85: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00708a87: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00708a8b: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 00708a8f: call 0x7a61a4 */ r_esp -= 4; W32(r_esp, 0x708a94u); f_007a61a4();
    /* 00708a94: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00708a97: jl 0x708ab0 */ if ((fS!=fO)) goto L_00708ab0;
L_00708a99:; BB(0x00708a99);
    /* 00708a99: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00708a9c: jg 0x708ab5 */ if ((!fZ&&fS==fO)) goto L_00708ab5;
L_00708a9e:; BB(0x00708a9e);
    /* 00708a9e: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 00708aa2: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 00708aa6: call 0x708bd4 */ r_esp -= 4; W32(r_esp, 0x708aabu); f_00708bd4();
    /* 00708aab: jmp 0x708b57 */ goto L_00708b57;
L_00708ab0:; BB(0x00708ab0);
    /* 00708ab0: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00708ab3: je 0x708b07 */ if (fZ) goto L_00708b07;
L_00708ab5:; BB(0x00708ab5);
    /* 00708ab5: mov dword ptr [esp + 0x10], edi */ W32((u32)(r_esp+0x10u), r_edi);
    /* 00708ab9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00708abb: mov edi, eax */ r_edi = r_eax;
L_00708abd:; BB(0x00708abd);
    /* 00708abd: movzx edx, byte ptr [edi + 0x9d08c0] */ r_edx = (u32)R8((u32)(r_edi+0x9d08c0u));
    /* 00708ac4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00708ac5: call 0x7bfce4 */ r_esp -= 4; W32(r_esp, 0x708acau); f_007bfce4();
    /* 00708aca: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00708acb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00708acd: je 0x708adb */ if (fZ) goto L_00708adb;
L_00708acf:; BB(0x00708acf);
    /* 00708acf: mov edx, dword ptr [edi + 0x9d08c4] */ r_edx = R32((u32)(r_edi+0x9d08c4u));
    /* 00708ad5: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 00708ad7: or dword ptr [esp + 8], ecx */ { u32 ad = (u32)(r_esp+0x8u);  u32 a = R32(ad); u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_00708adb:; BB(0x00708adb);
    /* 00708adb: movzx edx, byte ptr [edi + 0x9d08c0] */ r_edx = (u32)R8((u32)(r_edi+0x9d08c0u));
    /* 00708ae2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00708ae3: call 0x7bfff8 */ r_esp -= 4; W32(r_esp, 0x708ae8u); f_007bfff8();
    /* 00708ae8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00708ae9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00708aeb: je 0x708af9 */ if (fZ) goto L_00708af9;
L_00708aed:; BB(0x00708aed);
    /* 00708aed: mov edx, dword ptr [edi + 0x9d08c4] */ r_edx = R32((u32)(r_edi+0x9d08c4u));
    /* 00708af3: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 00708af5: or dword ptr [esp + 0xc], ecx */ { u32 ad = (u32)(r_esp+0xcu);  u32 a = R32(ad); u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_00708af9:; BB(0x00708af9);
    /* 00708af9: add edi, 8 */ {  u32 a = r_edi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00708afc: cmp edi, 0x58 */ {  u32 a = r_edi; u32 b = 0x58u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00708aff: jb 0x708abd */ if (fC) goto L_00708abd;
L_00708b01:; BB(0x00708b01);
    /* 00708b01: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 00708b05: jmp 0x708b57 */ goto L_00708b57;
L_00708b07:; BB(0x00708b07);
    /* 00708b07: mov dword ptr [esp + 0x10], edi */ W32((u32)(r_esp+0x10u), r_edi);
    /* 00708b0b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00708b0d: mov edi, eax */ r_edi = r_eax;
L_00708b0f:; BB(0x00708b0f);
    /* 00708b0f: movzx edx, byte ptr [edi + 0x9d08c0] */ r_edx = (u32)R8((u32)(r_edi+0x9d08c0u));
    /* 00708b16: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00708b17: call 0x7bfce4 */ r_esp -= 4; W32(r_esp, 0x708b1cu); f_007bfce4();
    /* 00708b1c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00708b1d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00708b1f: je 0x708b2d */ if (fZ) goto L_00708b2d;
L_00708b21:; BB(0x00708b21);
    /* 00708b21: mov edx, dword ptr [edi + 0x9d08c4] */ r_edx = R32((u32)(r_edi+0x9d08c4u));
    /* 00708b27: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 00708b29: or dword ptr [esp + 8], ecx */ { u32 ad = (u32)(r_esp+0x8u);  u32 a = R32(ad); u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_00708b2d:; BB(0x00708b2d);
    /* 00708b2d: movzx edx, byte ptr [edi + 0x9d08c0] */ r_edx = (u32)R8((u32)(r_edi+0x9d08c0u));
    /* 00708b34: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00708b35: call 0x7bfff8 */ r_esp -= 4; W32(r_esp, 0x708b3au); f_007bfff8();
    /* 00708b3a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00708b3b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00708b3d: je 0x708b4b */ if (fZ) goto L_00708b4b;
L_00708b3f:; BB(0x00708b3f);
    /* 00708b3f: mov edx, dword ptr [edi + 0x9d08c4] */ r_edx = R32((u32)(r_edi+0x9d08c4u));
    /* 00708b45: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 00708b47: or dword ptr [esp + 0xc], ecx */ { u32 ad = (u32)(r_esp+0xcu);  u32 a = R32(ad); u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_00708b4b:; BB(0x00708b4b);
    /* 00708b4b: add edi, 8 */ {  u32 a = r_edi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00708b4e: cmp edi, 0x58 */ {  u32 a = r_edi; u32 b = 0x58u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00708b51: jb 0x708b0f */ if (fC) goto L_00708b0f;
L_00708b53:; BB(0x00708b53);
    /* 00708b53: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
L_00708b57:; BB(0x00708b57);
    /* 00708b57: push 0x4c */ { u32 v = 0x4cu; r_esp -= 4; W32(r_esp, v); }
    /* 00708b59: call 0x7bfce4 */ r_esp -= 4; W32(r_esp, 0x708b5eu); f_007bfce4();
    /* 00708b5e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00708b5f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00708b61: je 0x708b6c */ if (fZ) goto L_00708b6c;
L_00708b63:; BB(0x00708b63);
    /* 00708b63: mov eax, dword ptr [0xa0f678] */ r_eax = R32((u32)(0xa0f678u));
    /* 00708b68: or dword ptr [esp + 8], eax */ { u32 ad = (u32)(r_esp+0x8u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_00708b6c:; BB(0x00708b6c);
    /* 00708b6c: push 0x4c */ { u32 v = 0x4cu; r_esp -= 4; W32(r_esp, v); }
    /* 00708b6e: call 0x7bfff8 */ r_esp -= 4; W32(r_esp, 0x708b73u); f_007bfff8();
    /* 00708b73: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00708b74: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00708b76: je 0x708b88 */ if (fZ) goto L_00708b88;
L_00708b78:; BB(0x00708b78);
    /* 00708b78: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 00708b7c: or ecx, dword ptr [0xa0f678] */ {  u32 a = r_ecx; u32 b = R32((u32)(0xa0f678u)); u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00708b82: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 00708b86: jmp 0x708b8c */ goto L_00708b8c;
L_00708b88:; BB(0x00708b88);
    /* 00708b88: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
L_00708b8c:; BB(0x00708b8c);
    /* 00708b8c: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00708b90: or ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00708b92: test dword ptr [0xa0f684], ecx */ {  u32 a = R32((u32)(0xa0f684u)); u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00708b98: je 0x708ba3 */ if (fZ) goto L_00708ba3;
L_00708b9a:; BB(0x00708b9a);
    /* 00708b9a: mov edx, 0xff */ r_edx = 0xffu;
    /* 00708b9f: mov word ptr [ebp + 0x12], dx */ W16((u32)(r_ebp+0x12u), (u16)r_edx);
L_00708ba3:; BB(0x00708ba3);
    /* 00708ba3: test dword ptr [0xa0f688], ecx */ {  u32 a = R32((u32)(0xa0f688u)); u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00708ba9: je 0x708bb4 */ if (fZ) goto L_00708bb4;
L_00708bab:; BB(0x00708bab);
    /* 00708bab: mov edx, 0xff */ r_edx = 0xffu;
    /* 00708bb0: mov word ptr [ebp + 0x10], dx */ W16((u32)(r_ebp+0x10u), (u16)r_edx);
L_00708bb4:; BB(0x00708bb4);
    /* 00708bb4: or dword ptr [ebp], eax */ { u32 ad = (u32)(r_ebp);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 00708bb7: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00708bbb: not eax */ r_eax = ~r_eax;
    /* 00708bbd: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 00708bc1: and dword ptr [ebp + 4], eax */ { u32 ad = (u32)(r_ebp+0x4u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00708bc4: or dword ptr [ebp + 8], edx */ { u32 ad = (u32)(r_ebp+0x8u);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 00708bc7: not edx */ r_edx = ~r_edx;
    /* 00708bc9: and dword ptr [ebp + 0xc], edx */ { u32 ad = (u32)(r_ebp+0xcu);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
L_00708bcc:; BB(0x00708bcc);
    /* 00708bcc: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00708bcf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00708bd0: ret  */ FN_RET(0x00708a68); r_esp += 4; return;
}

void f_00708bd4(void) /* sub_708BD4 */
{
    FN_ENTER(0x00708bd4);
    /* 00708bd4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00708bd5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00708bd6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00708bd7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00708bd8: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00708bdb: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00708bdf: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00708be3: call 0x791b48 */ r_esp -= 4; W32(r_esp, 0x708be8u); f_00791b48();
    /* 00708be8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00708bea: je 0x709566 */ if (fZ) goto L_00709566;
L_00708bf0:; BB(0x00708bf0);
    /* 00708bf0: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00708bf3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00708bf5: mov ebx, eax */ r_ebx = r_eax;
L_00708bf7:; BB(0x00708bf7);
    /* 00708bf7: mov ebp, dword ptr [ebx + 0x96edd0] */ r_ebp = R32((u32)(r_ebx+0x96edd0u));
    /* 00708bfd: call 0x791b48 */ r_esp -= 4; W32(r_esp, 0x708c02u); f_00791b48();
    /* 00708c02: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00708c04: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00708c06: and ecx, 0xff */ {  u32 a = r_ecx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00708c0c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00708c0e: je 0x70972f */ if (fZ) goto L_0070972f;
L_00708c14:; BB(0x00708c14);
    /* 00708c14: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00708c16: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00708c18: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00708c1a: lea edx, [edx + ecx] */ r_edx = (u32)(r_edx+r_ecx);
L_00708c1d:; BB(0x00708c1d);
    /* 00708c1d: push 0x1000000 */ { u32 v = 0x1000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00708c22: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00708c28: mov edi, dword ptr [edx] */ r_edi = R32((u32)(r_edx));
    /* 00708c2a: mov esi, dword ptr [edx + 4] */ r_esi = R32((u32)(r_edx+0x4u));
    /* 00708c2d: call 0x7be19c */ r_esp -= 4; W32(r_esp, 0x708c32u); f_007be19c();
    /* 00708c32: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00708c35: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00708c37: je 0x708c45 */ if (fZ) goto L_00708c45;
L_00708c39:; BB(0x00708c39);
    /* 00708c39: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00708c3a: call 0x791b34 */ r_esp -= 4; W32(r_esp, 0x708c3fu); f_00791b34();
    /* 00708c3f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00708c40: mov edi, dword ptr [eax] */ r_edi = R32((u32)(r_eax));
    /* 00708c42: mov esi, dword ptr [eax + 4] */ r_esi = R32((u32)(r_eax+0x4u));
L_00708c45:; BB(0x00708c45);
    /* 00708c45: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 00708c4b: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00708c4d: jne 0x708d2d */ if (!fZ) goto L_00708d2d;
L_00708c53:; BB(0x00708c53);
    /* 00708c53: cmp ebp, 0x1f */ {  u32 a = r_ebp; u32 b = 0x1fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00708c56: je 0x709580 */ if (fZ) goto L_00709580;
L_00708c5c:; BB(0x00708c5c);
    /* 00708c5c: cmp ebp, 7 */ {  u32 a = r_ebp; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00708c5f: je 0x70956e */ if (fZ) goto L_0070956e;
L_00708c65:; BB(0x00708c65);
    /* 00708c65: and esi, 0xff */ {  u32 a = r_esi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 00708c6b: lea edx, [ebp - 6] */ r_edx = (u32)(r_ebp+0xfffffffau);
    /* 00708c6e: cmp edx, 0x19 */ {  u32 a = r_edx; u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00708c71: ja 0x708d05 */ if ((!fC&&!fZ)) goto L_00708d05;
L_00708c77:; BB(0x00708c77);
    /* 00708c77: mov edx, dword ptr [ebp*4 + 0x96ecc8] */ r_edx = R32((u32)(r_ebp*4+0x96ecc8u));
    /* 00708c7e: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
L_00708d05:; BB(0x00708d05);
    /* 00708d05: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00708d06: call 0x7bfce4 */ r_esp -= 4; W32(r_esp, 0x708d0bu); f_007bfce4();
    /* 00708d0b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00708d0c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00708d0e: je 0x708d19 */ if (fZ) goto L_00708d19;
L_00708d10:; BB(0x00708d10);
    /* 00708d10: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 00708d14: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 00708d17: or dword ptr [ecx], edx */ { u32 ad = (u32)(r_ecx);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_00708d19:; BB(0x00708d19);
    /* 00708d19: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00708d1a: call 0x7bfff8 */ r_esp -= 4; W32(r_esp, 0x708d1fu); f_007bfff8();
    /* 00708d1f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00708d20: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00708d22: je 0x708d2d */ if (fZ) goto L_00708d2d;
L_00708d24:; BB(0x00708d24);
    /* 00708d24: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 00708d28: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 00708d2b: or dword ptr [ecx], edx */ { u32 ad = (u32)(r_ecx);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_00708d2d:; BB(0x00708d2d);
    /* 00708d2d: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00708d30: cmp ebx, 0x10 */ {  u32 a = r_ebx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00708d33: jl 0x708bf7 */ if ((fS!=fO)) goto L_00708bf7;
L_00708d39:; BB(0x00708d39);
    /* 00708d39: call 0x7917b8 */ r_esp -= 4; W32(r_esp, 0x708d3eu); f_007917b8();
    /* 00708d3e: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00708d41: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00708d44: ja 0x709566 */ if ((!fC&&!fZ)) goto L_00709566;
L_00708d4a:; BB(0x00708d4a);
    /* 00708d4a: mov eax, dword ptr [eax*4 + 0x96ed48] */ r_eax = R32((u32)(r_eax*4+0x96ed48u));
    /* 00708d51: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_00709566:; BB(0x00709566);
    /* 00709566: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00709569: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0070956a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0070956b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0070956c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0070956d: ret  */ FN_RET(0x00708bd4); r_esp += 4; return;
L_0070956e:; BB(0x0070956e);
    /* 0070956e: call 0x7c00d0 */ r_esp -= 4; W32(r_esp, 0x709573u); f_007c00d0();
    /* 00709573: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00709575: jne 0x708d2d */ if (!fZ) goto L_00708d2d;
L_0070957b:; BB(0x0070957b);
    /* 0070957b: jmp 0x708c65 */ goto L_00708c65;
L_00709580:; BB(0x00709580);
    /* 00709580: push 0x2000000 */ { u32 v = 0x2000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00709585: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0070958b: call 0x7be19c */ r_esp -= 4; W32(r_esp, 0x709590u); f_007be19c();
    /* 00709590: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00709593: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00709595: je 0x7095c3 */ if (fZ) goto L_007095c3;
L_00709597:; BB(0x00709597);
    /* 00709597: call 0x7c00c4 */ r_esp -= 4; W32(r_esp, 0x70959cu); f_007c00c4();
    /* 0070959c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070959e: je 0x708d2d */ if (fZ) goto L_00708d2d;
L_007095a4:; BB(0x007095a4);
    /* 007095a4: call 0x7c00dc */ r_esp -= 4; W32(r_esp, 0x7095a9u); f_007c00dc();
    /* 007095a9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007095ab: jne 0x708d2d */ if (!fZ) goto L_00708d2d;
L_007095b1:; BB(0x007095b1);
    /* 007095b1: call 0x7c00d0 */ r_esp -= 4; W32(r_esp, 0x7095b6u); f_007c00d0();
    /* 007095b6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007095b8: jne 0x708d2d */ if (!fZ) goto L_00708d2d;
L_007095be:; BB(0x007095be);
    /* 007095be: jmp 0x708c65 */ goto L_00708c65;
L_007095c3:; BB(0x007095c3);
    /* 007095c3: call 0x7c00c4 */ r_esp -= 4; W32(r_esp, 0x7095c8u); f_007c00c4();
    /* 007095c8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007095ca: jne 0x708d2d */ if (!fZ) goto L_00708d2d;
L_007095d0:; BB(0x007095d0);
    /* 007095d0: call 0x7c00dc */ r_esp -= 4; W32(r_esp, 0x7095d5u); f_007c00dc();
    /* 007095d5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007095d7: jne 0x708d2d */ if (!fZ) goto L_00708d2d;
L_007095dd:; BB(0x007095dd);
    /* 007095dd: call 0x7c00d0 */ r_esp -= 4; W32(r_esp, 0x7095e2u); f_007c00d0();
    /* 007095e2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007095e4: jne 0x708d2d */ if (!fZ) goto L_00708d2d;
L_007095ea:; BB(0x007095ea);
    /* 007095ea: jmp 0x708c65 */ goto L_00708c65;
L_0070972f:; BB(0x0070972f);
    /* 0070972f: mov edx, 0x96edc8 */ r_edx = 0x96edc8u;
    /* 00709734: jmp 0x708c1d */ goto L_00708c1d;
}

void f_00708c80(void)
{
    FN_ENTER(0x00708c80);
    goto L_00708c80;
L_00708bf7:; BB(0x00708bf7);
    /* 00708bf7: mov ebp, dword ptr [ebx + 0x96edd0] */ r_ebp = R32((u32)(r_ebx+0x96edd0u));
    /* 00708bfd: call 0x791b48 */ r_esp -= 4; W32(r_esp, 0x708c02u); f_00791b48();
    /* 00708c02: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00708c04: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00708c06: and ecx, 0xff */ {  u32 a = r_ecx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00708c0c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00708c0e: je 0x70972f */ if (fZ) goto L_0070972f;
L_00708c14:; BB(0x00708c14);
    /* 00708c14: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00708c16: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00708c18: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00708c1a: lea edx, [edx + ecx] */ r_edx = (u32)(r_edx+r_ecx);
L_00708c1d:; BB(0x00708c1d);
    /* 00708c1d: push 0x1000000 */ { u32 v = 0x1000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00708c22: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00708c28: mov edi, dword ptr [edx] */ r_edi = R32((u32)(r_edx));
    /* 00708c2a: mov esi, dword ptr [edx + 4] */ r_esi = R32((u32)(r_edx+0x4u));
    /* 00708c2d: call 0x7be19c */ r_esp -= 4; W32(r_esp, 0x708c32u); f_007be19c();
    /* 00708c32: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00708c35: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00708c37: je 0x708c45 */ if (fZ) goto L_00708c45;
L_00708c39:; BB(0x00708c39);
    /* 00708c39: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00708c3a: call 0x791b34 */ r_esp -= 4; W32(r_esp, 0x708c3fu); f_00791b34();
    /* 00708c3f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00708c40: mov edi, dword ptr [eax] */ r_edi = R32((u32)(r_eax));
    /* 00708c42: mov esi, dword ptr [eax + 4] */ r_esi = R32((u32)(r_eax+0x4u));
L_00708c45:; BB(0x00708c45);
    /* 00708c45: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 00708c4b: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00708c4d: jne 0x708d2d */ if (!fZ) goto L_00708d2d;
L_00708c53:; BB(0x00708c53);
    /* 00708c53: cmp ebp, 0x1f */ {  u32 a = r_ebp; u32 b = 0x1fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00708c56: je 0x709580 */ if (fZ) goto L_00709580;
L_00708c5c:; BB(0x00708c5c);
    /* 00708c5c: cmp ebp, 7 */ {  u32 a = r_ebp; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00708c5f: je 0x70956e */ if (fZ) goto L_0070956e;
L_00708c65:; BB(0x00708c65);
    /* 00708c65: and esi, 0xff */ {  u32 a = r_esi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 00708c6b: lea edx, [ebp - 6] */ r_edx = (u32)(r_ebp+0xfffffffau);
    /* 00708c6e: cmp edx, 0x19 */ {  u32 a = r_edx; u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00708c71: ja 0x708d05 */ if ((!fC&&!fZ)) goto L_00708d05;
L_00708c77:; BB(0x00708c77);
    /* 00708c77: mov edx, dword ptr [ebp*4 + 0x96ecc8] */ r_edx = R32((u32)(r_ebp*4+0x96ecc8u));
    /* 00708c7e: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
L_00708c80:; BB(0x00708c80);
    /* 00708c80: mov edx, dword ptr [0xa0f68c] */ r_edx = R32((u32)(0xa0f68cu));
    /* 00708c86: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 00708c89: jmp 0x708d05 */ goto L_00708d05;
L_00708d05:; BB(0x00708d05);
    /* 00708d05: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00708d06: call 0x7bfce4 */ r_esp -= 4; W32(r_esp, 0x708d0bu); f_007bfce4();
    /* 00708d0b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00708d0c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00708d0e: je 0x708d19 */ if (fZ) goto L_00708d19;
L_00708d10:; BB(0x00708d10);
    /* 00708d10: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 00708d14: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 00708d17: or dword ptr [ecx], edx */ { u32 ad = (u32)(r_ecx);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_00708d19:; BB(0x00708d19);
    /* 00708d19: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00708d1a: call 0x7bfff8 */ r_esp -= 4; W32(r_esp, 0x708d1fu); f_007bfff8();
    /* 00708d1f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00708d20: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00708d22: je 0x708d2d */ if (fZ) goto L_00708d2d;
L_00708d24:; BB(0x00708d24);
    /* 00708d24: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 00708d28: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 00708d2b: or dword ptr [ecx], edx */ { u32 ad = (u32)(r_ecx);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_00708d2d:; BB(0x00708d2d);
    /* 00708d2d: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00708d30: cmp ebx, 0x10 */ {  u32 a = r_ebx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00708d33: jl 0x708bf7 */ if ((fS!=fO)) goto L_00708bf7;
L_00708d39:; BB(0x00708d39);
    /* 00708d39: call 0x7917b8 */ r_esp -= 4; W32(r_esp, 0x708d3eu); f_007917b8();
    /* 00708d3e: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00708d41: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00708d44: ja 0x709566 */ if ((!fC&&!fZ)) goto L_00709566;
L_00708d4a:; BB(0x00708d4a);
    /* 00708d4a: mov eax, dword ptr [eax*4 + 0x96ed48] */ r_eax = R32((u32)(r_eax*4+0x96ed48u));
    /* 00708d51: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_00709566:; BB(0x00709566);
    /* 00709566: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00709569: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0070956a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0070956b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0070956c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0070956d: ret  */ FN_RET(0x00708c80); r_esp += 4; return;
L_0070956e:; BB(0x0070956e);
    /* 0070956e: call 0x7c00d0 */ r_esp -= 4; W32(r_esp, 0x709573u); f_007c00d0();
    /* 00709573: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00709575: jne 0x708d2d */ if (!fZ) goto L_00708d2d;
L_0070957b:; BB(0x0070957b);
    /* 0070957b: jmp 0x708c65 */ goto L_00708c65;
L_00709580:; BB(0x00709580);
    /* 00709580: push 0x2000000 */ { u32 v = 0x2000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00709585: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0070958b: call 0x7be19c */ r_esp -= 4; W32(r_esp, 0x709590u); f_007be19c();
    /* 00709590: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00709593: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00709595: je 0x7095c3 */ if (fZ) goto L_007095c3;
L_00709597:; BB(0x00709597);
    /* 00709597: call 0x7c00c4 */ r_esp -= 4; W32(r_esp, 0x70959cu); f_007c00c4();
    /* 0070959c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070959e: je 0x708d2d */ if (fZ) goto L_00708d2d;
L_007095a4:; BB(0x007095a4);
    /* 007095a4: call 0x7c00dc */ r_esp -= 4; W32(r_esp, 0x7095a9u); f_007c00dc();
    /* 007095a9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007095ab: jne 0x708d2d */ if (!fZ) goto L_00708d2d;
L_007095b1:; BB(0x007095b1);
    /* 007095b1: call 0x7c00d0 */ r_esp -= 4; W32(r_esp, 0x7095b6u); f_007c00d0();
    /* 007095b6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007095b8: jne 0x708d2d */ if (!fZ) goto L_00708d2d;
L_007095be:; BB(0x007095be);
    /* 007095be: jmp 0x708c65 */ goto L_00708c65;
L_007095c3:; BB(0x007095c3);
    /* 007095c3: call 0x7c00c4 */ r_esp -= 4; W32(r_esp, 0x7095c8u); f_007c00c4();
    /* 007095c8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007095ca: jne 0x708d2d */ if (!fZ) goto L_00708d2d;
L_007095d0:; BB(0x007095d0);
    /* 007095d0: call 0x7c00dc */ r_esp -= 4; W32(r_esp, 0x7095d5u); f_007c00dc();
    /* 007095d5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007095d7: jne 0x708d2d */ if (!fZ) goto L_00708d2d;
L_007095dd:; BB(0x007095dd);
    /* 007095dd: call 0x7c00d0 */ r_esp -= 4; W32(r_esp, 0x7095e2u); f_007c00d0();
    /* 007095e2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007095e4: jne 0x708d2d */ if (!fZ) goto L_00708d2d;
L_007095ea:; BB(0x007095ea);
    /* 007095ea: jmp 0x708c65 */ goto L_00708c65;
L_0070972f:; BB(0x0070972f);
    /* 0070972f: mov edx, 0x96edc8 */ r_edx = 0x96edc8u;
    /* 00709734: jmp 0x708c1d */ goto L_00708c1d;
}

void f_00708c8e(void)
{
    FN_ENTER(0x00708c8e);
    goto L_00708c8e;
L_00708bf7:; BB(0x00708bf7);
    /* 00708bf7: mov ebp, dword ptr [ebx + 0x96edd0] */ r_ebp = R32((u32)(r_ebx+0x96edd0u));
    /* 00708bfd: call 0x791b48 */ r_esp -= 4; W32(r_esp, 0x708c02u); f_00791b48();
    /* 00708c02: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00708c04: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00708c06: and ecx, 0xff */ {  u32 a = r_ecx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00708c0c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00708c0e: je 0x70972f */ if (fZ) goto L_0070972f;
L_00708c14:; BB(0x00708c14);
    /* 00708c14: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00708c16: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00708c18: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00708c1a: lea edx, [edx + ecx] */ r_edx = (u32)(r_edx+r_ecx);
L_00708c1d:; BB(0x00708c1d);
    /* 00708c1d: push 0x1000000 */ { u32 v = 0x1000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00708c22: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00708c28: mov edi, dword ptr [edx] */ r_edi = R32((u32)(r_edx));
    /* 00708c2a: mov esi, dword ptr [edx + 4] */ r_esi = R32((u32)(r_edx+0x4u));
    /* 00708c2d: call 0x7be19c */ r_esp -= 4; W32(r_esp, 0x708c32u); f_007be19c();
    /* 00708c32: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00708c35: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00708c37: je 0x708c45 */ if (fZ) goto L_00708c45;
L_00708c39:; BB(0x00708c39);
    /* 00708c39: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00708c3a: call 0x791b34 */ r_esp -= 4; W32(r_esp, 0x708c3fu); f_00791b34();
    /* 00708c3f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00708c40: mov edi, dword ptr [eax] */ r_edi = R32((u32)(r_eax));
    /* 00708c42: mov esi, dword ptr [eax + 4] */ r_esi = R32((u32)(r_eax+0x4u));
L_00708c45:; BB(0x00708c45);
    /* 00708c45: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 00708c4b: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00708c4d: jne 0x708d2d */ if (!fZ) goto L_00708d2d;
L_00708c53:; BB(0x00708c53);
    /* 00708c53: cmp ebp, 0x1f */ {  u32 a = r_ebp; u32 b = 0x1fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00708c56: je 0x709580 */ if (fZ) goto L_00709580;
L_00708c5c:; BB(0x00708c5c);
    /* 00708c5c: cmp ebp, 7 */ {  u32 a = r_ebp; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00708c5f: je 0x70956e */ if (fZ) goto L_0070956e;
L_00708c65:; BB(0x00708c65);
    /* 00708c65: and esi, 0xff */ {  u32 a = r_esi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 00708c6b: lea edx, [ebp - 6] */ r_edx = (u32)(r_ebp+0xfffffffau);
    /* 00708c6e: cmp edx, 0x19 */ {  u32 a = r_edx; u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00708c71: ja 0x708d05 */ if ((!fC&&!fZ)) goto L_00708d05;
L_00708c77:; BB(0x00708c77);
    /* 00708c77: mov edx, dword ptr [ebp*4 + 0x96ecc8] */ r_edx = R32((u32)(r_ebp*4+0x96ecc8u));
    /* 00708c7e: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
L_00708c8e:; BB(0x00708c8e);
    /* 00708c8e: mov edx, dword ptr [0xa0f684] */ r_edx = R32((u32)(0xa0f684u));
    /* 00708c94: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 00708c97: jmp 0x708d05 */ goto L_00708d05;
L_00708d05:; BB(0x00708d05);
    /* 00708d05: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00708d06: call 0x7bfce4 */ r_esp -= 4; W32(r_esp, 0x708d0bu); f_007bfce4();
    /* 00708d0b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00708d0c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00708d0e: je 0x708d19 */ if (fZ) goto L_00708d19;
L_00708d10:; BB(0x00708d10);
    /* 00708d10: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 00708d14: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 00708d17: or dword ptr [ecx], edx */ { u32 ad = (u32)(r_ecx);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_00708d19:; BB(0x00708d19);
    /* 00708d19: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00708d1a: call 0x7bfff8 */ r_esp -= 4; W32(r_esp, 0x708d1fu); f_007bfff8();
    /* 00708d1f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00708d20: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00708d22: je 0x708d2d */ if (fZ) goto L_00708d2d;
L_00708d24:; BB(0x00708d24);
    /* 00708d24: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 00708d28: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 00708d2b: or dword ptr [ecx], edx */ { u32 ad = (u32)(r_ecx);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_00708d2d:; BB(0x00708d2d);
    /* 00708d2d: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00708d30: cmp ebx, 0x10 */ {  u32 a = r_ebx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00708d33: jl 0x708bf7 */ if ((fS!=fO)) goto L_00708bf7;
L_00708d39:; BB(0x00708d39);
    /* 00708d39: call 0x7917b8 */ r_esp -= 4; W32(r_esp, 0x708d3eu); f_007917b8();
    /* 00708d3e: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00708d41: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00708d44: ja 0x709566 */ if ((!fC&&!fZ)) goto L_00709566;
L_00708d4a:; BB(0x00708d4a);
    /* 00708d4a: mov eax, dword ptr [eax*4 + 0x96ed48] */ r_eax = R32((u32)(r_eax*4+0x96ed48u));
    /* 00708d51: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_00709566:; BB(0x00709566);
    /* 00709566: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00709569: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0070956a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0070956b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0070956c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0070956d: ret  */ FN_RET(0x00708c8e); r_esp += 4; return;
L_0070956e:; BB(0x0070956e);
    /* 0070956e: call 0x7c00d0 */ r_esp -= 4; W32(r_esp, 0x709573u); f_007c00d0();
    /* 00709573: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00709575: jne 0x708d2d */ if (!fZ) goto L_00708d2d;
L_0070957b:; BB(0x0070957b);
    /* 0070957b: jmp 0x708c65 */ goto L_00708c65;
L_00709580:; BB(0x00709580);
    /* 00709580: push 0x2000000 */ { u32 v = 0x2000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00709585: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0070958b: call 0x7be19c */ r_esp -= 4; W32(r_esp, 0x709590u); f_007be19c();
    /* 00709590: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00709593: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00709595: je 0x7095c3 */ if (fZ) goto L_007095c3;
L_00709597:; BB(0x00709597);
    /* 00709597: call 0x7c00c4 */ r_esp -= 4; W32(r_esp, 0x70959cu); f_007c00c4();
    /* 0070959c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070959e: je 0x708d2d */ if (fZ) goto L_00708d2d;
L_007095a4:; BB(0x007095a4);
    /* 007095a4: call 0x7c00dc */ r_esp -= 4; W32(r_esp, 0x7095a9u); f_007c00dc();
    /* 007095a9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007095ab: jne 0x708d2d */ if (!fZ) goto L_00708d2d;
L_007095b1:; BB(0x007095b1);
    /* 007095b1: call 0x7c00d0 */ r_esp -= 4; W32(r_esp, 0x7095b6u); f_007c00d0();
    /* 007095b6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007095b8: jne 0x708d2d */ if (!fZ) goto L_00708d2d;
L_007095be:; BB(0x007095be);
    /* 007095be: jmp 0x708c65 */ goto L_00708c65;
L_007095c3:; BB(0x007095c3);
    /* 007095c3: call 0x7c00c4 */ r_esp -= 4; W32(r_esp, 0x7095c8u); f_007c00c4();
    /* 007095c8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007095ca: jne 0x708d2d */ if (!fZ) goto L_00708d2d;
L_007095d0:; BB(0x007095d0);
    /* 007095d0: call 0x7c00dc */ r_esp -= 4; W32(r_esp, 0x7095d5u); f_007c00dc();
    /* 007095d5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007095d7: jne 0x708d2d */ if (!fZ) goto L_00708d2d;
L_007095dd:; BB(0x007095dd);
    /* 007095dd: call 0x7c00d0 */ r_esp -= 4; W32(r_esp, 0x7095e2u); f_007c00d0();
    /* 007095e2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007095e4: jne 0x708d2d */ if (!fZ) goto L_00708d2d;
L_007095ea:; BB(0x007095ea);
    /* 007095ea: jmp 0x708c65 */ goto L_00708c65;
L_0070972f:; BB(0x0070972f);
    /* 0070972f: mov edx, 0x96edc8 */ r_edx = 0x96edc8u;
    /* 00709734: jmp 0x708c1d */ goto L_00708c1d;
}

void f_00708c99(void)
{
    FN_ENTER(0x00708c99);
    goto L_00708c99;
L_00708bf7:; BB(0x00708bf7);
    /* 00708bf7: mov ebp, dword ptr [ebx + 0x96edd0] */ r_ebp = R32((u32)(r_ebx+0x96edd0u));
    /* 00708bfd: call 0x791b48 */ r_esp -= 4; W32(r_esp, 0x708c02u); f_00791b48();
    /* 00708c02: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00708c04: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00708c06: and ecx, 0xff */ {  u32 a = r_ecx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00708c0c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00708c0e: je 0x70972f */ if (fZ) goto L_0070972f;
L_00708c14:; BB(0x00708c14);
    /* 00708c14: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00708c16: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00708c18: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00708c1a: lea edx, [edx + ecx] */ r_edx = (u32)(r_edx+r_ecx);
L_00708c1d:; BB(0x00708c1d);
    /* 00708c1d: push 0x1000000 */ { u32 v = 0x1000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00708c22: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00708c28: mov edi, dword ptr [edx] */ r_edi = R32((u32)(r_edx));
    /* 00708c2a: mov esi, dword ptr [edx + 4] */ r_esi = R32((u32)(r_edx+0x4u));
    /* 00708c2d: call 0x7be19c */ r_esp -= 4; W32(r_esp, 0x708c32u); f_007be19c();
    /* 00708c32: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00708c35: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00708c37: je 0x708c45 */ if (fZ) goto L_00708c45;
L_00708c39:; BB(0x00708c39);
    /* 00708c39: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00708c3a: call 0x791b34 */ r_esp -= 4; W32(r_esp, 0x708c3fu); f_00791b34();
    /* 00708c3f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00708c40: mov edi, dword ptr [eax] */ r_edi = R32((u32)(r_eax));
    /* 00708c42: mov esi, dword ptr [eax + 4] */ r_esi = R32((u32)(r_eax+0x4u));
L_00708c45:; BB(0x00708c45);
    /* 00708c45: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 00708c4b: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00708c4d: jne 0x708d2d */ if (!fZ) goto L_00708d2d;
L_00708c53:; BB(0x00708c53);
    /* 00708c53: cmp ebp, 0x1f */ {  u32 a = r_ebp; u32 b = 0x1fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00708c56: je 0x709580 */ if (fZ) goto L_00709580;
L_00708c5c:; BB(0x00708c5c);
    /* 00708c5c: cmp ebp, 7 */ {  u32 a = r_ebp; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00708c5f: je 0x70956e */ if (fZ) goto L_0070956e;
L_00708c65:; BB(0x00708c65);
    /* 00708c65: and esi, 0xff */ {  u32 a = r_esi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 00708c6b: lea edx, [ebp - 6] */ r_edx = (u32)(r_ebp+0xfffffffau);
    /* 00708c6e: cmp edx, 0x19 */ {  u32 a = r_edx; u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00708c71: ja 0x708d05 */ if ((!fC&&!fZ)) goto L_00708d05;
L_00708c77:; BB(0x00708c77);
    /* 00708c77: mov edx, dword ptr [ebp*4 + 0x96ecc8] */ r_edx = R32((u32)(r_ebp*4+0x96ecc8u));
    /* 00708c7e: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
L_00708c99:; BB(0x00708c99);
    /* 00708c99: mov edx, dword ptr [0xa0f678] */ r_edx = R32((u32)(0xa0f678u));
    /* 00708c9f: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 00708ca2: jmp 0x708d05 */ goto L_00708d05;
L_00708d05:; BB(0x00708d05);
    /* 00708d05: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00708d06: call 0x7bfce4 */ r_esp -= 4; W32(r_esp, 0x708d0bu); f_007bfce4();
    /* 00708d0b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00708d0c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00708d0e: je 0x708d19 */ if (fZ) goto L_00708d19;
L_00708d10:; BB(0x00708d10);
    /* 00708d10: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 00708d14: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 00708d17: or dword ptr [ecx], edx */ { u32 ad = (u32)(r_ecx);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_00708d19:; BB(0x00708d19);
    /* 00708d19: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00708d1a: call 0x7bfff8 */ r_esp -= 4; W32(r_esp, 0x708d1fu); f_007bfff8();
    /* 00708d1f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00708d20: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00708d22: je 0x708d2d */ if (fZ) goto L_00708d2d;
L_00708d24:; BB(0x00708d24);
    /* 00708d24: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 00708d28: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 00708d2b: or dword ptr [ecx], edx */ { u32 ad = (u32)(r_ecx);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_00708d2d:; BB(0x00708d2d);
    /* 00708d2d: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00708d30: cmp ebx, 0x10 */ {  u32 a = r_ebx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00708d33: jl 0x708bf7 */ if ((fS!=fO)) goto L_00708bf7;
L_00708d39:; BB(0x00708d39);
    /* 00708d39: call 0x7917b8 */ r_esp -= 4; W32(r_esp, 0x708d3eu); f_007917b8();
    /* 00708d3e: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00708d41: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00708d44: ja 0x709566 */ if ((!fC&&!fZ)) goto L_00709566;
L_00708d4a:; BB(0x00708d4a);
    /* 00708d4a: mov eax, dword ptr [eax*4 + 0x96ed48] */ r_eax = R32((u32)(r_eax*4+0x96ed48u));
    /* 00708d51: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_00709566:; BB(0x00709566);
    /* 00709566: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00709569: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0070956a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0070956b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0070956c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0070956d: ret  */ FN_RET(0x00708c99); r_esp += 4; return;
L_0070956e:; BB(0x0070956e);
    /* 0070956e: call 0x7c00d0 */ r_esp -= 4; W32(r_esp, 0x709573u); f_007c00d0();
    /* 00709573: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00709575: jne 0x708d2d */ if (!fZ) goto L_00708d2d;
L_0070957b:; BB(0x0070957b);
    /* 0070957b: jmp 0x708c65 */ goto L_00708c65;
L_00709580:; BB(0x00709580);
    /* 00709580: push 0x2000000 */ { u32 v = 0x2000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00709585: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0070958b: call 0x7be19c */ r_esp -= 4; W32(r_esp, 0x709590u); f_007be19c();
    /* 00709590: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00709593: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00709595: je 0x7095c3 */ if (fZ) goto L_007095c3;
L_00709597:; BB(0x00709597);
    /* 00709597: call 0x7c00c4 */ r_esp -= 4; W32(r_esp, 0x70959cu); f_007c00c4();
    /* 0070959c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070959e: je 0x708d2d */ if (fZ) goto L_00708d2d;
L_007095a4:; BB(0x007095a4);
    /* 007095a4: call 0x7c00dc */ r_esp -= 4; W32(r_esp, 0x7095a9u); f_007c00dc();
    /* 007095a9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007095ab: jne 0x708d2d */ if (!fZ) goto L_00708d2d;
L_007095b1:; BB(0x007095b1);
    /* 007095b1: call 0x7c00d0 */ r_esp -= 4; W32(r_esp, 0x7095b6u); f_007c00d0();
    /* 007095b6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007095b8: jne 0x708d2d */ if (!fZ) goto L_00708d2d;
L_007095be:; BB(0x007095be);
    /* 007095be: jmp 0x708c65 */ goto L_00708c65;
L_007095c3:; BB(0x007095c3);
    /* 007095c3: call 0x7c00c4 */ r_esp -= 4; W32(r_esp, 0x7095c8u); f_007c00c4();
    /* 007095c8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007095ca: jne 0x708d2d */ if (!fZ) goto L_00708d2d;
L_007095d0:; BB(0x007095d0);
    /* 007095d0: call 0x7c00dc */ r_esp -= 4; W32(r_esp, 0x7095d5u); f_007c00dc();
    /* 007095d5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007095d7: jne 0x708d2d */ if (!fZ) goto L_00708d2d;
L_007095dd:; BB(0x007095dd);
    /* 007095dd: call 0x7c00d0 */ r_esp -= 4; W32(r_esp, 0x7095e2u); f_007c00d0();
    /* 007095e2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007095e4: jne 0x708d2d */ if (!fZ) goto L_00708d2d;
L_007095ea:; BB(0x007095ea);
    /* 007095ea: jmp 0x708c65 */ goto L_00708c65;
L_0070972f:; BB(0x0070972f);
    /* 0070972f: mov edx, 0x96edc8 */ r_edx = 0x96edc8u;
    /* 00709734: jmp 0x708c1d */ goto L_00708c1d;
}

void f_00708ca4(void)
{
    FN_ENTER(0x00708ca4);
    goto L_00708ca4;
L_00708bf7:; BB(0x00708bf7);
    /* 00708bf7: mov ebp, dword ptr [ebx + 0x96edd0] */ r_ebp = R32((u32)(r_ebx+0x96edd0u));
    /* 00708bfd: call 0x791b48 */ r_esp -= 4; W32(r_esp, 0x708c02u); f_00791b48();
    /* 00708c02: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00708c04: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00708c06: and ecx, 0xff */ {  u32 a = r_ecx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00708c0c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00708c0e: je 0x70972f */ if (fZ) goto L_0070972f;
L_00708c14:; BB(0x00708c14);
    /* 00708c14: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00708c16: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00708c18: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00708c1a: lea edx, [edx + ecx] */ r_edx = (u32)(r_edx+r_ecx);
L_00708c1d:; BB(0x00708c1d);
    /* 00708c1d: push 0x1000000 */ { u32 v = 0x1000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00708c22: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00708c28: mov edi, dword ptr [edx] */ r_edi = R32((u32)(r_edx));
    /* 00708c2a: mov esi, dword ptr [edx + 4] */ r_esi = R32((u32)(r_edx+0x4u));
    /* 00708c2d: call 0x7be19c */ r_esp -= 4; W32(r_esp, 0x708c32u); f_007be19c();
    /* 00708c32: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00708c35: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00708c37: je 0x708c45 */ if (fZ) goto L_00708c45;
L_00708c39:; BB(0x00708c39);
    /* 00708c39: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00708c3a: call 0x791b34 */ r_esp -= 4; W32(r_esp, 0x708c3fu); f_00791b34();
    /* 00708c3f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00708c40: mov edi, dword ptr [eax] */ r_edi = R32((u32)(r_eax));
    /* 00708c42: mov esi, dword ptr [eax + 4] */ r_esi = R32((u32)(r_eax+0x4u));
L_00708c45:; BB(0x00708c45);
    /* 00708c45: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 00708c4b: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00708c4d: jne 0x708d2d */ if (!fZ) goto L_00708d2d;
L_00708c53:; BB(0x00708c53);
    /* 00708c53: cmp ebp, 0x1f */ {  u32 a = r_ebp; u32 b = 0x1fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00708c56: je 0x709580 */ if (fZ) goto L_00709580;
L_00708c5c:; BB(0x00708c5c);
    /* 00708c5c: cmp ebp, 7 */ {  u32 a = r_ebp; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00708c5f: je 0x70956e */ if (fZ) goto L_0070956e;
L_00708c65:; BB(0x00708c65);
    /* 00708c65: and esi, 0xff */ {  u32 a = r_esi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 00708c6b: lea edx, [ebp - 6] */ r_edx = (u32)(r_ebp+0xfffffffau);
    /* 00708c6e: cmp edx, 0x19 */ {  u32 a = r_edx; u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00708c71: ja 0x708d05 */ if ((!fC&&!fZ)) goto L_00708d05;
L_00708c77:; BB(0x00708c77);
    /* 00708c77: mov edx, dword ptr [ebp*4 + 0x96ecc8] */ r_edx = R32((u32)(r_ebp*4+0x96ecc8u));
    /* 00708c7e: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
L_00708ca4:; BB(0x00708ca4);
    /* 00708ca4: mov edx, dword ptr [0xa0f67c] */ r_edx = R32((u32)(0xa0f67cu));
    /* 00708caa: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 00708cad: jmp 0x708d05 */ goto L_00708d05;
L_00708d05:; BB(0x00708d05);
    /* 00708d05: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00708d06: call 0x7bfce4 */ r_esp -= 4; W32(r_esp, 0x708d0bu); f_007bfce4();
    /* 00708d0b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00708d0c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00708d0e: je 0x708d19 */ if (fZ) goto L_00708d19;
L_00708d10:; BB(0x00708d10);
    /* 00708d10: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 00708d14: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 00708d17: or dword ptr [ecx], edx */ { u32 ad = (u32)(r_ecx);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_00708d19:; BB(0x00708d19);
    /* 00708d19: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00708d1a: call 0x7bfff8 */ r_esp -= 4; W32(r_esp, 0x708d1fu); f_007bfff8();
    /* 00708d1f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00708d20: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00708d22: je 0x708d2d */ if (fZ) goto L_00708d2d;
L_00708d24:; BB(0x00708d24);
    /* 00708d24: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 00708d28: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 00708d2b: or dword ptr [ecx], edx */ { u32 ad = (u32)(r_ecx);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_00708d2d:; BB(0x00708d2d);
    /* 00708d2d: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00708d30: cmp ebx, 0x10 */ {  u32 a = r_ebx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00708d33: jl 0x708bf7 */ if ((fS!=fO)) goto L_00708bf7;
L_00708d39:; BB(0x00708d39);
    /* 00708d39: call 0x7917b8 */ r_esp -= 4; W32(r_esp, 0x708d3eu); f_007917b8();
    /* 00708d3e: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00708d41: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00708d44: ja 0x709566 */ if ((!fC&&!fZ)) goto L_00709566;
L_00708d4a:; BB(0x00708d4a);
    /* 00708d4a: mov eax, dword ptr [eax*4 + 0x96ed48] */ r_eax = R32((u32)(r_eax*4+0x96ed48u));
    /* 00708d51: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_00709566:; BB(0x00709566);
    /* 00709566: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00709569: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0070956a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0070956b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0070956c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0070956d: ret  */ FN_RET(0x00708ca4); r_esp += 4; return;
L_0070956e:; BB(0x0070956e);
    /* 0070956e: call 0x7c00d0 */ r_esp -= 4; W32(r_esp, 0x709573u); f_007c00d0();
    /* 00709573: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00709575: jne 0x708d2d */ if (!fZ) goto L_00708d2d;
L_0070957b:; BB(0x0070957b);
    /* 0070957b: jmp 0x708c65 */ goto L_00708c65;
L_00709580:; BB(0x00709580);
    /* 00709580: push 0x2000000 */ { u32 v = 0x2000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00709585: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0070958b: call 0x7be19c */ r_esp -= 4; W32(r_esp, 0x709590u); f_007be19c();
    /* 00709590: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00709593: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00709595: je 0x7095c3 */ if (fZ) goto L_007095c3;
L_00709597:; BB(0x00709597);
    /* 00709597: call 0x7c00c4 */ r_esp -= 4; W32(r_esp, 0x70959cu); f_007c00c4();
    /* 0070959c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070959e: je 0x708d2d */ if (fZ) goto L_00708d2d;
L_007095a4:; BB(0x007095a4);
    /* 007095a4: call 0x7c00dc */ r_esp -= 4; W32(r_esp, 0x7095a9u); f_007c00dc();
    /* 007095a9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007095ab: jne 0x708d2d */ if (!fZ) goto L_00708d2d;
L_007095b1:; BB(0x007095b1);
    /* 007095b1: call 0x7c00d0 */ r_esp -= 4; W32(r_esp, 0x7095b6u); f_007c00d0();
    /* 007095b6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007095b8: jne 0x708d2d */ if (!fZ) goto L_00708d2d;
L_007095be:; BB(0x007095be);
    /* 007095be: jmp 0x708c65 */ goto L_00708c65;
L_007095c3:; BB(0x007095c3);
    /* 007095c3: call 0x7c00c4 */ r_esp -= 4; W32(r_esp, 0x7095c8u); f_007c00c4();
    /* 007095c8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007095ca: jne 0x708d2d */ if (!fZ) goto L_00708d2d;
L_007095d0:; BB(0x007095d0);
    /* 007095d0: call 0x7c00dc */ r_esp -= 4; W32(r_esp, 0x7095d5u); f_007c00dc();
    /* 007095d5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007095d7: jne 0x708d2d */ if (!fZ) goto L_00708d2d;
L_007095dd:; BB(0x007095dd);
    /* 007095dd: call 0x7c00d0 */ r_esp -= 4; W32(r_esp, 0x7095e2u); f_007c00d0();
    /* 007095e2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007095e4: jne 0x708d2d */ if (!fZ) goto L_00708d2d;
L_007095ea:; BB(0x007095ea);
    /* 007095ea: jmp 0x708c65 */ goto L_00708c65;
L_0070972f:; BB(0x0070972f);
    /* 0070972f: mov edx, 0x96edc8 */ r_edx = 0x96edc8u;
    /* 00709734: jmp 0x708c1d */ goto L_00708c1d;
}

void f_00708caf(void)
{
    FN_ENTER(0x00708caf);
    goto L_00708caf;
L_00708bf7:; BB(0x00708bf7);
    /* 00708bf7: mov ebp, dword ptr [ebx + 0x96edd0] */ r_ebp = R32((u32)(r_ebx+0x96edd0u));
    /* 00708bfd: call 0x791b48 */ r_esp -= 4; W32(r_esp, 0x708c02u); f_00791b48();
    /* 00708c02: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00708c04: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00708c06: and ecx, 0xff */ {  u32 a = r_ecx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00708c0c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00708c0e: je 0x70972f */ if (fZ) goto L_0070972f;
L_00708c14:; BB(0x00708c14);
    /* 00708c14: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00708c16: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00708c18: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00708c1a: lea edx, [edx + ecx] */ r_edx = (u32)(r_edx+r_ecx);
L_00708c1d:; BB(0x00708c1d);
    /* 00708c1d: push 0x1000000 */ { u32 v = 0x1000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00708c22: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00708c28: mov edi, dword ptr [edx] */ r_edi = R32((u32)(r_edx));
    /* 00708c2a: mov esi, dword ptr [edx + 4] */ r_esi = R32((u32)(r_edx+0x4u));
    /* 00708c2d: call 0x7be19c */ r_esp -= 4; W32(r_esp, 0x708c32u); f_007be19c();
    /* 00708c32: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00708c35: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00708c37: je 0x708c45 */ if (fZ) goto L_00708c45;
L_00708c39:; BB(0x00708c39);
    /* 00708c39: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00708c3a: call 0x791b34 */ r_esp -= 4; W32(r_esp, 0x708c3fu); f_00791b34();
    /* 00708c3f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00708c40: mov edi, dword ptr [eax] */ r_edi = R32((u32)(r_eax));
    /* 00708c42: mov esi, dword ptr [eax + 4] */ r_esi = R32((u32)(r_eax+0x4u));
L_00708c45:; BB(0x00708c45);
    /* 00708c45: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 00708c4b: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00708c4d: jne 0x708d2d */ if (!fZ) goto L_00708d2d;
L_00708c53:; BB(0x00708c53);
    /* 00708c53: cmp ebp, 0x1f */ {  u32 a = r_ebp; u32 b = 0x1fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00708c56: je 0x709580 */ if (fZ) goto L_00709580;
L_00708c5c:; BB(0x00708c5c);
    /* 00708c5c: cmp ebp, 7 */ {  u32 a = r_ebp; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00708c5f: je 0x70956e */ if (fZ) goto L_0070956e;
L_00708c65:; BB(0x00708c65);
    /* 00708c65: and esi, 0xff */ {  u32 a = r_esi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 00708c6b: lea edx, [ebp - 6] */ r_edx = (u32)(r_ebp+0xfffffffau);
    /* 00708c6e: cmp edx, 0x19 */ {  u32 a = r_edx; u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00708c71: ja 0x708d05 */ if ((!fC&&!fZ)) goto L_00708d05;
L_00708c77:; BB(0x00708c77);
    /* 00708c77: mov edx, dword ptr [ebp*4 + 0x96ecc8] */ r_edx = R32((u32)(r_ebp*4+0x96ecc8u));
    /* 00708c7e: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
L_00708caf:; BB(0x00708caf);
    /* 00708caf: mov edx, dword ptr [0xa0f674] */ r_edx = R32((u32)(0xa0f674u));
    /* 00708cb5: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 00708cb8: jmp 0x708d05 */ goto L_00708d05;
L_00708d05:; BB(0x00708d05);
    /* 00708d05: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00708d06: call 0x7bfce4 */ r_esp -= 4; W32(r_esp, 0x708d0bu); f_007bfce4();
    /* 00708d0b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00708d0c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00708d0e: je 0x708d19 */ if (fZ) goto L_00708d19;
L_00708d10:; BB(0x00708d10);
    /* 00708d10: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 00708d14: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 00708d17: or dword ptr [ecx], edx */ { u32 ad = (u32)(r_ecx);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_00708d19:; BB(0x00708d19);
    /* 00708d19: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00708d1a: call 0x7bfff8 */ r_esp -= 4; W32(r_esp, 0x708d1fu); f_007bfff8();
    /* 00708d1f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00708d20: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00708d22: je 0x708d2d */ if (fZ) goto L_00708d2d;
L_00708d24:; BB(0x00708d24);
    /* 00708d24: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 00708d28: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 00708d2b: or dword ptr [ecx], edx */ { u32 ad = (u32)(r_ecx);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_00708d2d:; BB(0x00708d2d);
    /* 00708d2d: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00708d30: cmp ebx, 0x10 */ {  u32 a = r_ebx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00708d33: jl 0x708bf7 */ if ((fS!=fO)) goto L_00708bf7;
L_00708d39:; BB(0x00708d39);
    /* 00708d39: call 0x7917b8 */ r_esp -= 4; W32(r_esp, 0x708d3eu); f_007917b8();
    /* 00708d3e: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00708d41: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00708d44: ja 0x709566 */ if ((!fC&&!fZ)) goto L_00709566;
L_00708d4a:; BB(0x00708d4a);
    /* 00708d4a: mov eax, dword ptr [eax*4 + 0x96ed48] */ r_eax = R32((u32)(r_eax*4+0x96ed48u));
    /* 00708d51: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_00709566:; BB(0x00709566);
    /* 00709566: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00709569: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0070956a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0070956b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0070956c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0070956d: ret  */ FN_RET(0x00708caf); r_esp += 4; return;
L_0070956e:; BB(0x0070956e);
    /* 0070956e: call 0x7c00d0 */ r_esp -= 4; W32(r_esp, 0x709573u); f_007c00d0();
    /* 00709573: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00709575: jne 0x708d2d */ if (!fZ) goto L_00708d2d;
L_0070957b:; BB(0x0070957b);
    /* 0070957b: jmp 0x708c65 */ goto L_00708c65;
L_00709580:; BB(0x00709580);
    /* 00709580: push 0x2000000 */ { u32 v = 0x2000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00709585: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0070958b: call 0x7be19c */ r_esp -= 4; W32(r_esp, 0x709590u); f_007be19c();
    /* 00709590: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00709593: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00709595: je 0x7095c3 */ if (fZ) goto L_007095c3;
L_00709597:; BB(0x00709597);
    /* 00709597: call 0x7c00c4 */ r_esp -= 4; W32(r_esp, 0x70959cu); f_007c00c4();
    /* 0070959c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070959e: je 0x708d2d */ if (fZ) goto L_00708d2d;
L_007095a4:; BB(0x007095a4);
    /* 007095a4: call 0x7c00dc */ r_esp -= 4; W32(r_esp, 0x7095a9u); f_007c00dc();
    /* 007095a9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007095ab: jne 0x708d2d */ if (!fZ) goto L_00708d2d;
L_007095b1:; BB(0x007095b1);
    /* 007095b1: call 0x7c00d0 */ r_esp -= 4; W32(r_esp, 0x7095b6u); f_007c00d0();
    /* 007095b6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007095b8: jne 0x708d2d */ if (!fZ) goto L_00708d2d;
L_007095be:; BB(0x007095be);
    /* 007095be: jmp 0x708c65 */ goto L_00708c65;
L_007095c3:; BB(0x007095c3);
    /* 007095c3: call 0x7c00c4 */ r_esp -= 4; W32(r_esp, 0x7095c8u); f_007c00c4();
    /* 007095c8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007095ca: jne 0x708d2d */ if (!fZ) goto L_00708d2d;
L_007095d0:; BB(0x007095d0);
    /* 007095d0: call 0x7c00dc */ r_esp -= 4; W32(r_esp, 0x7095d5u); f_007c00dc();
    /* 007095d5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007095d7: jne 0x708d2d */ if (!fZ) goto L_00708d2d;
L_007095dd:; BB(0x007095dd);
    /* 007095dd: call 0x7c00d0 */ r_esp -= 4; W32(r_esp, 0x7095e2u); f_007c00d0();
    /* 007095e2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007095e4: jne 0x708d2d */ if (!fZ) goto L_00708d2d;
L_007095ea:; BB(0x007095ea);
    /* 007095ea: jmp 0x708c65 */ goto L_00708c65;
L_0070972f:; BB(0x0070972f);
    /* 0070972f: mov edx, 0x96edc8 */ r_edx = 0x96edc8u;
    /* 00709734: jmp 0x708c1d */ goto L_00708c1d;
}

void f_00708cba(void)
{
    FN_ENTER(0x00708cba);
    goto L_00708cba;
L_00708bf7:; BB(0x00708bf7);
    /* 00708bf7: mov ebp, dword ptr [ebx + 0x96edd0] */ r_ebp = R32((u32)(r_ebx+0x96edd0u));
    /* 00708bfd: call 0x791b48 */ r_esp -= 4; W32(r_esp, 0x708c02u); f_00791b48();
    /* 00708c02: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00708c04: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00708c06: and ecx, 0xff */ {  u32 a = r_ecx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00708c0c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00708c0e: je 0x70972f */ if (fZ) goto L_0070972f;
L_00708c14:; BB(0x00708c14);
    /* 00708c14: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00708c16: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00708c18: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00708c1a: lea edx, [edx + ecx] */ r_edx = (u32)(r_edx+r_ecx);
L_00708c1d:; BB(0x00708c1d);
    /* 00708c1d: push 0x1000000 */ { u32 v = 0x1000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00708c22: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00708c28: mov edi, dword ptr [edx] */ r_edi = R32((u32)(r_edx));
    /* 00708c2a: mov esi, dword ptr [edx + 4] */ r_esi = R32((u32)(r_edx+0x4u));
    /* 00708c2d: call 0x7be19c */ r_esp -= 4; W32(r_esp, 0x708c32u); f_007be19c();
    /* 00708c32: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00708c35: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00708c37: je 0x708c45 */ if (fZ) goto L_00708c45;
L_00708c39:; BB(0x00708c39);
    /* 00708c39: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00708c3a: call 0x791b34 */ r_esp -= 4; W32(r_esp, 0x708c3fu); f_00791b34();
    /* 00708c3f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00708c40: mov edi, dword ptr [eax] */ r_edi = R32((u32)(r_eax));
    /* 00708c42: mov esi, dword ptr [eax + 4] */ r_esi = R32((u32)(r_eax+0x4u));
L_00708c45:; BB(0x00708c45);
    /* 00708c45: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 00708c4b: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00708c4d: jne 0x708d2d */ if (!fZ) goto L_00708d2d;
L_00708c53:; BB(0x00708c53);
    /* 00708c53: cmp ebp, 0x1f */ {  u32 a = r_ebp; u32 b = 0x1fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00708c56: je 0x709580 */ if (fZ) goto L_00709580;
L_00708c5c:; BB(0x00708c5c);
    /* 00708c5c: cmp ebp, 7 */ {  u32 a = r_ebp; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00708c5f: je 0x70956e */ if (fZ) goto L_0070956e;
L_00708c65:; BB(0x00708c65);
    /* 00708c65: and esi, 0xff */ {  u32 a = r_esi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 00708c6b: lea edx, [ebp - 6] */ r_edx = (u32)(r_ebp+0xfffffffau);
    /* 00708c6e: cmp edx, 0x19 */ {  u32 a = r_edx; u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00708c71: ja 0x708d05 */ if ((!fC&&!fZ)) goto L_00708d05;
L_00708c77:; BB(0x00708c77);
    /* 00708c77: mov edx, dword ptr [ebp*4 + 0x96ecc8] */ r_edx = R32((u32)(r_ebp*4+0x96ecc8u));
    /* 00708c7e: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
L_00708cba:; BB(0x00708cba);
    /* 00708cba: mov edx, dword ptr [0xa0f688] */ r_edx = R32((u32)(0xa0f688u));
    /* 00708cc0: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 00708cc3: jmp 0x708d05 */ goto L_00708d05;
L_00708d05:; BB(0x00708d05);
    /* 00708d05: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00708d06: call 0x7bfce4 */ r_esp -= 4; W32(r_esp, 0x708d0bu); f_007bfce4();
    /* 00708d0b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00708d0c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00708d0e: je 0x708d19 */ if (fZ) goto L_00708d19;
L_00708d10:; BB(0x00708d10);
    /* 00708d10: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 00708d14: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 00708d17: or dword ptr [ecx], edx */ { u32 ad = (u32)(r_ecx);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_00708d19:; BB(0x00708d19);
    /* 00708d19: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00708d1a: call 0x7bfff8 */ r_esp -= 4; W32(r_esp, 0x708d1fu); f_007bfff8();
    /* 00708d1f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00708d20: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00708d22: je 0x708d2d */ if (fZ) goto L_00708d2d;
L_00708d24:; BB(0x00708d24);
    /* 00708d24: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 00708d28: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 00708d2b: or dword ptr [ecx], edx */ { u32 ad = (u32)(r_ecx);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_00708d2d:; BB(0x00708d2d);
    /* 00708d2d: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00708d30: cmp ebx, 0x10 */ {  u32 a = r_ebx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00708d33: jl 0x708bf7 */ if ((fS!=fO)) goto L_00708bf7;
L_00708d39:; BB(0x00708d39);
    /* 00708d39: call 0x7917b8 */ r_esp -= 4; W32(r_esp, 0x708d3eu); f_007917b8();
    /* 00708d3e: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00708d41: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00708d44: ja 0x709566 */ if ((!fC&&!fZ)) goto L_00709566;
L_00708d4a:; BB(0x00708d4a);
    /* 00708d4a: mov eax, dword ptr [eax*4 + 0x96ed48] */ r_eax = R32((u32)(r_eax*4+0x96ed48u));
    /* 00708d51: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_00709566:; BB(0x00709566);
    /* 00709566: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00709569: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0070956a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0070956b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0070956c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0070956d: ret  */ FN_RET(0x00708cba); r_esp += 4; return;
L_0070956e:; BB(0x0070956e);
    /* 0070956e: call 0x7c00d0 */ r_esp -= 4; W32(r_esp, 0x709573u); f_007c00d0();
    /* 00709573: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00709575: jne 0x708d2d */ if (!fZ) goto L_00708d2d;
L_0070957b:; BB(0x0070957b);
    /* 0070957b: jmp 0x708c65 */ goto L_00708c65;
L_00709580:; BB(0x00709580);
    /* 00709580: push 0x2000000 */ { u32 v = 0x2000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00709585: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0070958b: call 0x7be19c */ r_esp -= 4; W32(r_esp, 0x709590u); f_007be19c();
    /* 00709590: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00709593: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00709595: je 0x7095c3 */ if (fZ) goto L_007095c3;
L_00709597:; BB(0x00709597);
    /* 00709597: call 0x7c00c4 */ r_esp -= 4; W32(r_esp, 0x70959cu); f_007c00c4();
    /* 0070959c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070959e: je 0x708d2d */ if (fZ) goto L_00708d2d;
L_007095a4:; BB(0x007095a4);
    /* 007095a4: call 0x7c00dc */ r_esp -= 4; W32(r_esp, 0x7095a9u); f_007c00dc();
    /* 007095a9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007095ab: jne 0x708d2d */ if (!fZ) goto L_00708d2d;
L_007095b1:; BB(0x007095b1);
    /* 007095b1: call 0x7c00d0 */ r_esp -= 4; W32(r_esp, 0x7095b6u); f_007c00d0();
    /* 007095b6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007095b8: jne 0x708d2d */ if (!fZ) goto L_00708d2d;
L_007095be:; BB(0x007095be);
    /* 007095be: jmp 0x708c65 */ goto L_00708c65;
L_007095c3:; BB(0x007095c3);
    /* 007095c3: call 0x7c00c4 */ r_esp -= 4; W32(r_esp, 0x7095c8u); f_007c00c4();
    /* 007095c8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007095ca: jne 0x708d2d */ if (!fZ) goto L_00708d2d;
L_007095d0:; BB(0x007095d0);
    /* 007095d0: call 0x7c00dc */ r_esp -= 4; W32(r_esp, 0x7095d5u); f_007c00dc();
    /* 007095d5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007095d7: jne 0x708d2d */ if (!fZ) goto L_00708d2d;
L_007095dd:; BB(0x007095dd);
    /* 007095dd: call 0x7c00d0 */ r_esp -= 4; W32(r_esp, 0x7095e2u); f_007c00d0();
    /* 007095e2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007095e4: jne 0x708d2d */ if (!fZ) goto L_00708d2d;
L_007095ea:; BB(0x007095ea);
    /* 007095ea: jmp 0x708c65 */ goto L_00708c65;
L_0070972f:; BB(0x0070972f);
    /* 0070972f: mov edx, 0x96edc8 */ r_edx = 0x96edc8u;
    /* 00709734: jmp 0x708c1d */ goto L_00708c1d;
}

void f_00708cc5(void)
{
    FN_ENTER(0x00708cc5);
    goto L_00708cc5;
L_00708bf7:; BB(0x00708bf7);
    /* 00708bf7: mov ebp, dword ptr [ebx + 0x96edd0] */ r_ebp = R32((u32)(r_ebx+0x96edd0u));
    /* 00708bfd: call 0x791b48 */ r_esp -= 4; W32(r_esp, 0x708c02u); f_00791b48();
    /* 00708c02: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00708c04: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00708c06: and ecx, 0xff */ {  u32 a = r_ecx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00708c0c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00708c0e: je 0x70972f */ if (fZ) goto L_0070972f;
L_00708c14:; BB(0x00708c14);
    /* 00708c14: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00708c16: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00708c18: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00708c1a: lea edx, [edx + ecx] */ r_edx = (u32)(r_edx+r_ecx);
L_00708c1d:; BB(0x00708c1d);
    /* 00708c1d: push 0x1000000 */ { u32 v = 0x1000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00708c22: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00708c28: mov edi, dword ptr [edx] */ r_edi = R32((u32)(r_edx));
    /* 00708c2a: mov esi, dword ptr [edx + 4] */ r_esi = R32((u32)(r_edx+0x4u));
    /* 00708c2d: call 0x7be19c */ r_esp -= 4; W32(r_esp, 0x708c32u); f_007be19c();
    /* 00708c32: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00708c35: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00708c37: je 0x708c45 */ if (fZ) goto L_00708c45;
L_00708c39:; BB(0x00708c39);
    /* 00708c39: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00708c3a: call 0x791b34 */ r_esp -= 4; W32(r_esp, 0x708c3fu); f_00791b34();
    /* 00708c3f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00708c40: mov edi, dword ptr [eax] */ r_edi = R32((u32)(r_eax));
    /* 00708c42: mov esi, dword ptr [eax + 4] */ r_esi = R32((u32)(r_eax+0x4u));
L_00708c45:; BB(0x00708c45);
    /* 00708c45: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 00708c4b: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00708c4d: jne 0x708d2d */ if (!fZ) goto L_00708d2d;
L_00708c53:; BB(0x00708c53);
    /* 00708c53: cmp ebp, 0x1f */ {  u32 a = r_ebp; u32 b = 0x1fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00708c56: je 0x709580 */ if (fZ) goto L_00709580;
L_00708c5c:; BB(0x00708c5c);
    /* 00708c5c: cmp ebp, 7 */ {  u32 a = r_ebp; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00708c5f: je 0x70956e */ if (fZ) goto L_0070956e;
L_00708c65:; BB(0x00708c65);
    /* 00708c65: and esi, 0xff */ {  u32 a = r_esi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 00708c6b: lea edx, [ebp - 6] */ r_edx = (u32)(r_ebp+0xfffffffau);
    /* 00708c6e: cmp edx, 0x19 */ {  u32 a = r_edx; u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00708c71: ja 0x708d05 */ if ((!fC&&!fZ)) goto L_00708d05;
L_00708c77:; BB(0x00708c77);
    /* 00708c77: mov edx, dword ptr [ebp*4 + 0x96ecc8] */ r_edx = R32((u32)(r_ebp*4+0x96ecc8u));
    /* 00708c7e: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
L_00708cc5:; BB(0x00708cc5);
    /* 00708cc5: mov edx, dword ptr [0xa0f684] */ r_edx = R32((u32)(0xa0f684u));
    /* 00708ccb: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 00708cce: jmp 0x708d05 */ goto L_00708d05;
L_00708d05:; BB(0x00708d05);
    /* 00708d05: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00708d06: call 0x7bfce4 */ r_esp -= 4; W32(r_esp, 0x708d0bu); f_007bfce4();
    /* 00708d0b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00708d0c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00708d0e: je 0x708d19 */ if (fZ) goto L_00708d19;
L_00708d10:; BB(0x00708d10);
    /* 00708d10: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 00708d14: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 00708d17: or dword ptr [ecx], edx */ { u32 ad = (u32)(r_ecx);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_00708d19:; BB(0x00708d19);
    /* 00708d19: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00708d1a: call 0x7bfff8 */ r_esp -= 4; W32(r_esp, 0x708d1fu); f_007bfff8();
    /* 00708d1f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00708d20: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00708d22: je 0x708d2d */ if (fZ) goto L_00708d2d;
L_00708d24:; BB(0x00708d24);
    /* 00708d24: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 00708d28: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 00708d2b: or dword ptr [ecx], edx */ { u32 ad = (u32)(r_ecx);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_00708d2d:; BB(0x00708d2d);
    /* 00708d2d: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00708d30: cmp ebx, 0x10 */ {  u32 a = r_ebx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00708d33: jl 0x708bf7 */ if ((fS!=fO)) goto L_00708bf7;
L_00708d39:; BB(0x00708d39);
    /* 00708d39: call 0x7917b8 */ r_esp -= 4; W32(r_esp, 0x708d3eu); f_007917b8();
    /* 00708d3e: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00708d41: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00708d44: ja 0x709566 */ if ((!fC&&!fZ)) goto L_00709566;
L_00708d4a:; BB(0x00708d4a);
    /* 00708d4a: mov eax, dword ptr [eax*4 + 0x96ed48] */ r_eax = R32((u32)(r_eax*4+0x96ed48u));
    /* 00708d51: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_00709566:; BB(0x00709566);
    /* 00709566: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00709569: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0070956a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0070956b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0070956c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0070956d: ret  */ FN_RET(0x00708cc5); r_esp += 4; return;
L_0070956e:; BB(0x0070956e);
    /* 0070956e: call 0x7c00d0 */ r_esp -= 4; W32(r_esp, 0x709573u); f_007c00d0();
    /* 00709573: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00709575: jne 0x708d2d */ if (!fZ) goto L_00708d2d;
L_0070957b:; BB(0x0070957b);
    /* 0070957b: jmp 0x708c65 */ goto L_00708c65;
L_00709580:; BB(0x00709580);
    /* 00709580: push 0x2000000 */ { u32 v = 0x2000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00709585: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0070958b: call 0x7be19c */ r_esp -= 4; W32(r_esp, 0x709590u); f_007be19c();
    /* 00709590: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00709593: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00709595: je 0x7095c3 */ if (fZ) goto L_007095c3;
L_00709597:; BB(0x00709597);
    /* 00709597: call 0x7c00c4 */ r_esp -= 4; W32(r_esp, 0x70959cu); f_007c00c4();
    /* 0070959c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070959e: je 0x708d2d */ if (fZ) goto L_00708d2d;
L_007095a4:; BB(0x007095a4);
    /* 007095a4: call 0x7c00dc */ r_esp -= 4; W32(r_esp, 0x7095a9u); f_007c00dc();
    /* 007095a9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007095ab: jne 0x708d2d */ if (!fZ) goto L_00708d2d;
L_007095b1:; BB(0x007095b1);
    /* 007095b1: call 0x7c00d0 */ r_esp -= 4; W32(r_esp, 0x7095b6u); f_007c00d0();
    /* 007095b6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007095b8: jne 0x708d2d */ if (!fZ) goto L_00708d2d;
L_007095be:; BB(0x007095be);
    /* 007095be: jmp 0x708c65 */ goto L_00708c65;
L_007095c3:; BB(0x007095c3);
    /* 007095c3: call 0x7c00c4 */ r_esp -= 4; W32(r_esp, 0x7095c8u); f_007c00c4();
    /* 007095c8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007095ca: jne 0x708d2d */ if (!fZ) goto L_00708d2d;
L_007095d0:; BB(0x007095d0);
    /* 007095d0: call 0x7c00dc */ r_esp -= 4; W32(r_esp, 0x7095d5u); f_007c00dc();
    /* 007095d5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007095d7: jne 0x708d2d */ if (!fZ) goto L_00708d2d;
L_007095dd:; BB(0x007095dd);
    /* 007095dd: call 0x7c00d0 */ r_esp -= 4; W32(r_esp, 0x7095e2u); f_007c00d0();
    /* 007095e2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007095e4: jne 0x708d2d */ if (!fZ) goto L_00708d2d;
L_007095ea:; BB(0x007095ea);
    /* 007095ea: jmp 0x708c65 */ goto L_00708c65;
L_0070972f:; BB(0x0070972f);
    /* 0070972f: mov edx, 0x96edc8 */ r_edx = 0x96edc8u;
    /* 00709734: jmp 0x708c1d */ goto L_00708c1d;
}

void f_00708cd0(void)
{
    FN_ENTER(0x00708cd0);
    goto L_00708cd0;
L_00708bf7:; BB(0x00708bf7);
    /* 00708bf7: mov ebp, dword ptr [ebx + 0x96edd0] */ r_ebp = R32((u32)(r_ebx+0x96edd0u));
    /* 00708bfd: call 0x791b48 */ r_esp -= 4; W32(r_esp, 0x708c02u); f_00791b48();
    /* 00708c02: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00708c04: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00708c06: and ecx, 0xff */ {  u32 a = r_ecx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00708c0c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00708c0e: je 0x70972f */ if (fZ) goto L_0070972f;
L_00708c14:; BB(0x00708c14);
    /* 00708c14: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00708c16: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00708c18: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00708c1a: lea edx, [edx + ecx] */ r_edx = (u32)(r_edx+r_ecx);
L_00708c1d:; BB(0x00708c1d);
    /* 00708c1d: push 0x1000000 */ { u32 v = 0x1000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00708c22: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00708c28: mov edi, dword ptr [edx] */ r_edi = R32((u32)(r_edx));
    /* 00708c2a: mov esi, dword ptr [edx + 4] */ r_esi = R32((u32)(r_edx+0x4u));
    /* 00708c2d: call 0x7be19c */ r_esp -= 4; W32(r_esp, 0x708c32u); f_007be19c();
    /* 00708c32: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00708c35: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00708c37: je 0x708c45 */ if (fZ) goto L_00708c45;
L_00708c39:; BB(0x00708c39);
    /* 00708c39: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00708c3a: call 0x791b34 */ r_esp -= 4; W32(r_esp, 0x708c3fu); f_00791b34();
    /* 00708c3f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00708c40: mov edi, dword ptr [eax] */ r_edi = R32((u32)(r_eax));
    /* 00708c42: mov esi, dword ptr [eax + 4] */ r_esi = R32((u32)(r_eax+0x4u));
L_00708c45:; BB(0x00708c45);
    /* 00708c45: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 00708c4b: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00708c4d: jne 0x708d2d */ if (!fZ) goto L_00708d2d;
L_00708c53:; BB(0x00708c53);
    /* 00708c53: cmp ebp, 0x1f */ {  u32 a = r_ebp; u32 b = 0x1fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00708c56: je 0x709580 */ if (fZ) goto L_00709580;
L_00708c5c:; BB(0x00708c5c);
    /* 00708c5c: cmp ebp, 7 */ {  u32 a = r_ebp; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00708c5f: je 0x70956e */ if (fZ) goto L_0070956e;
L_00708c65:; BB(0x00708c65);
    /* 00708c65: and esi, 0xff */ {  u32 a = r_esi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 00708c6b: lea edx, [ebp - 6] */ r_edx = (u32)(r_ebp+0xfffffffau);
    /* 00708c6e: cmp edx, 0x19 */ {  u32 a = r_edx; u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00708c71: ja 0x708d05 */ if ((!fC&&!fZ)) goto L_00708d05;
L_00708c77:; BB(0x00708c77);
    /* 00708c77: mov edx, dword ptr [ebp*4 + 0x96ecc8] */ r_edx = R32((u32)(r_ebp*4+0x96ecc8u));
    /* 00708c7e: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
L_00708cd0:; BB(0x00708cd0);
    /* 00708cd0: mov edx, dword ptr [0xa0f668] */ r_edx = R32((u32)(0xa0f668u));
    /* 00708cd6: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 00708cd9: jmp 0x708d05 */ goto L_00708d05;
L_00708d05:; BB(0x00708d05);
    /* 00708d05: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00708d06: call 0x7bfce4 */ r_esp -= 4; W32(r_esp, 0x708d0bu); f_007bfce4();
    /* 00708d0b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00708d0c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00708d0e: je 0x708d19 */ if (fZ) goto L_00708d19;
L_00708d10:; BB(0x00708d10);
    /* 00708d10: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 00708d14: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 00708d17: or dword ptr [ecx], edx */ { u32 ad = (u32)(r_ecx);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_00708d19:; BB(0x00708d19);
    /* 00708d19: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00708d1a: call 0x7bfff8 */ r_esp -= 4; W32(r_esp, 0x708d1fu); f_007bfff8();
    /* 00708d1f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00708d20: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00708d22: je 0x708d2d */ if (fZ) goto L_00708d2d;
L_00708d24:; BB(0x00708d24);
    /* 00708d24: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 00708d28: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 00708d2b: or dword ptr [ecx], edx */ { u32 ad = (u32)(r_ecx);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_00708d2d:; BB(0x00708d2d);
    /* 00708d2d: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00708d30: cmp ebx, 0x10 */ {  u32 a = r_ebx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00708d33: jl 0x708bf7 */ if ((fS!=fO)) goto L_00708bf7;
L_00708d39:; BB(0x00708d39);
    /* 00708d39: call 0x7917b8 */ r_esp -= 4; W32(r_esp, 0x708d3eu); f_007917b8();
    /* 00708d3e: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00708d41: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00708d44: ja 0x709566 */ if ((!fC&&!fZ)) goto L_00709566;
L_00708d4a:; BB(0x00708d4a);
    /* 00708d4a: mov eax, dword ptr [eax*4 + 0x96ed48] */ r_eax = R32((u32)(r_eax*4+0x96ed48u));
    /* 00708d51: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_00709566:; BB(0x00709566);
    /* 00709566: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00709569: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0070956a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0070956b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0070956c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0070956d: ret  */ FN_RET(0x00708cd0); r_esp += 4; return;
L_0070956e:; BB(0x0070956e);
    /* 0070956e: call 0x7c00d0 */ r_esp -= 4; W32(r_esp, 0x709573u); f_007c00d0();
    /* 00709573: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00709575: jne 0x708d2d */ if (!fZ) goto L_00708d2d;
L_0070957b:; BB(0x0070957b);
    /* 0070957b: jmp 0x708c65 */ goto L_00708c65;
L_00709580:; BB(0x00709580);
    /* 00709580: push 0x2000000 */ { u32 v = 0x2000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00709585: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0070958b: call 0x7be19c */ r_esp -= 4; W32(r_esp, 0x709590u); f_007be19c();
    /* 00709590: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00709593: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00709595: je 0x7095c3 */ if (fZ) goto L_007095c3;
L_00709597:; BB(0x00709597);
    /* 00709597: call 0x7c00c4 */ r_esp -= 4; W32(r_esp, 0x70959cu); f_007c00c4();
    /* 0070959c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070959e: je 0x708d2d */ if (fZ) goto L_00708d2d;
L_007095a4:; BB(0x007095a4);
    /* 007095a4: call 0x7c00dc */ r_esp -= 4; W32(r_esp, 0x7095a9u); f_007c00dc();
    /* 007095a9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007095ab: jne 0x708d2d */ if (!fZ) goto L_00708d2d;
L_007095b1:; BB(0x007095b1);
    /* 007095b1: call 0x7c00d0 */ r_esp -= 4; W32(r_esp, 0x7095b6u); f_007c00d0();
    /* 007095b6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007095b8: jne 0x708d2d */ if (!fZ) goto L_00708d2d;
L_007095be:; BB(0x007095be);
    /* 007095be: jmp 0x708c65 */ goto L_00708c65;
L_007095c3:; BB(0x007095c3);
    /* 007095c3: call 0x7c00c4 */ r_esp -= 4; W32(r_esp, 0x7095c8u); f_007c00c4();
    /* 007095c8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007095ca: jne 0x708d2d */ if (!fZ) goto L_00708d2d;
L_007095d0:; BB(0x007095d0);
    /* 007095d0: call 0x7c00dc */ r_esp -= 4; W32(r_esp, 0x7095d5u); f_007c00dc();
    /* 007095d5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007095d7: jne 0x708d2d */ if (!fZ) goto L_00708d2d;
L_007095dd:; BB(0x007095dd);
    /* 007095dd: call 0x7c00d0 */ r_esp -= 4; W32(r_esp, 0x7095e2u); f_007c00d0();
    /* 007095e2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007095e4: jne 0x708d2d */ if (!fZ) goto L_00708d2d;
L_007095ea:; BB(0x007095ea);
    /* 007095ea: jmp 0x708c65 */ goto L_00708c65;
L_0070972f:; BB(0x0070972f);
    /* 0070972f: mov edx, 0x96edc8 */ r_edx = 0x96edc8u;
    /* 00709734: jmp 0x708c1d */ goto L_00708c1d;
}

void f_00708cdb(void)
{
    FN_ENTER(0x00708cdb);
    goto L_00708cdb;
L_00708bf7:; BB(0x00708bf7);
    /* 00708bf7: mov ebp, dword ptr [ebx + 0x96edd0] */ r_ebp = R32((u32)(r_ebx+0x96edd0u));
    /* 00708bfd: call 0x791b48 */ r_esp -= 4; W32(r_esp, 0x708c02u); f_00791b48();
    /* 00708c02: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00708c04: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00708c06: and ecx, 0xff */ {  u32 a = r_ecx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00708c0c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00708c0e: je 0x70972f */ if (fZ) goto L_0070972f;
L_00708c14:; BB(0x00708c14);
    /* 00708c14: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00708c16: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00708c18: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00708c1a: lea edx, [edx + ecx] */ r_edx = (u32)(r_edx+r_ecx);
L_00708c1d:; BB(0x00708c1d);
    /* 00708c1d: push 0x1000000 */ { u32 v = 0x1000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00708c22: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00708c28: mov edi, dword ptr [edx] */ r_edi = R32((u32)(r_edx));
    /* 00708c2a: mov esi, dword ptr [edx + 4] */ r_esi = R32((u32)(r_edx+0x4u));
    /* 00708c2d: call 0x7be19c */ r_esp -= 4; W32(r_esp, 0x708c32u); f_007be19c();
    /* 00708c32: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00708c35: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00708c37: je 0x708c45 */ if (fZ) goto L_00708c45;
L_00708c39:; BB(0x00708c39);
    /* 00708c39: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00708c3a: call 0x791b34 */ r_esp -= 4; W32(r_esp, 0x708c3fu); f_00791b34();
    /* 00708c3f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00708c40: mov edi, dword ptr [eax] */ r_edi = R32((u32)(r_eax));
    /* 00708c42: mov esi, dword ptr [eax + 4] */ r_esi = R32((u32)(r_eax+0x4u));
L_00708c45:; BB(0x00708c45);
    /* 00708c45: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 00708c4b: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00708c4d: jne 0x708d2d */ if (!fZ) goto L_00708d2d;
L_00708c53:; BB(0x00708c53);
    /* 00708c53: cmp ebp, 0x1f */ {  u32 a = r_ebp; u32 b = 0x1fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00708c56: je 0x709580 */ if (fZ) goto L_00709580;
L_00708c5c:; BB(0x00708c5c);
    /* 00708c5c: cmp ebp, 7 */ {  u32 a = r_ebp; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00708c5f: je 0x70956e */ if (fZ) goto L_0070956e;
L_00708c65:; BB(0x00708c65);
    /* 00708c65: and esi, 0xff */ {  u32 a = r_esi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 00708c6b: lea edx, [ebp - 6] */ r_edx = (u32)(r_ebp+0xfffffffau);
    /* 00708c6e: cmp edx, 0x19 */ {  u32 a = r_edx; u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00708c71: ja 0x708d05 */ if ((!fC&&!fZ)) goto L_00708d05;
L_00708c77:; BB(0x00708c77);
    /* 00708c77: mov edx, dword ptr [ebp*4 + 0x96ecc8] */ r_edx = R32((u32)(r_ebp*4+0x96ecc8u));
    /* 00708c7e: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
L_00708cdb:; BB(0x00708cdb);
    /* 00708cdb: mov edx, dword ptr [0xa0f664] */ r_edx = R32((u32)(0xa0f664u));
    /* 00708ce1: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 00708ce4: jmp 0x708d05 */ goto L_00708d05;
L_00708d05:; BB(0x00708d05);
    /* 00708d05: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00708d06: call 0x7bfce4 */ r_esp -= 4; W32(r_esp, 0x708d0bu); f_007bfce4();
    /* 00708d0b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00708d0c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00708d0e: je 0x708d19 */ if (fZ) goto L_00708d19;
L_00708d10:; BB(0x00708d10);
    /* 00708d10: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 00708d14: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 00708d17: or dword ptr [ecx], edx */ { u32 ad = (u32)(r_ecx);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_00708d19:; BB(0x00708d19);
    /* 00708d19: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00708d1a: call 0x7bfff8 */ r_esp -= 4; W32(r_esp, 0x708d1fu); f_007bfff8();
    /* 00708d1f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00708d20: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00708d22: je 0x708d2d */ if (fZ) goto L_00708d2d;
L_00708d24:; BB(0x00708d24);
    /* 00708d24: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 00708d28: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 00708d2b: or dword ptr [ecx], edx */ { u32 ad = (u32)(r_ecx);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_00708d2d:; BB(0x00708d2d);
    /* 00708d2d: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00708d30: cmp ebx, 0x10 */ {  u32 a = r_ebx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00708d33: jl 0x708bf7 */ if ((fS!=fO)) goto L_00708bf7;
L_00708d39:; BB(0x00708d39);
    /* 00708d39: call 0x7917b8 */ r_esp -= 4; W32(r_esp, 0x708d3eu); f_007917b8();
    /* 00708d3e: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00708d41: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00708d44: ja 0x709566 */ if ((!fC&&!fZ)) goto L_00709566;
L_00708d4a:; BB(0x00708d4a);
    /* 00708d4a: mov eax, dword ptr [eax*4 + 0x96ed48] */ r_eax = R32((u32)(r_eax*4+0x96ed48u));
    /* 00708d51: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_00709566:; BB(0x00709566);
    /* 00709566: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00709569: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0070956a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0070956b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0070956c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0070956d: ret  */ FN_RET(0x00708cdb); r_esp += 4; return;
L_0070956e:; BB(0x0070956e);
    /* 0070956e: call 0x7c00d0 */ r_esp -= 4; W32(r_esp, 0x709573u); f_007c00d0();
    /* 00709573: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00709575: jne 0x708d2d */ if (!fZ) goto L_00708d2d;
L_0070957b:; BB(0x0070957b);
    /* 0070957b: jmp 0x708c65 */ goto L_00708c65;
L_00709580:; BB(0x00709580);
    /* 00709580: push 0x2000000 */ { u32 v = 0x2000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00709585: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0070958b: call 0x7be19c */ r_esp -= 4; W32(r_esp, 0x709590u); f_007be19c();
    /* 00709590: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00709593: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00709595: je 0x7095c3 */ if (fZ) goto L_007095c3;
L_00709597:; BB(0x00709597);
    /* 00709597: call 0x7c00c4 */ r_esp -= 4; W32(r_esp, 0x70959cu); f_007c00c4();
    /* 0070959c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070959e: je 0x708d2d */ if (fZ) goto L_00708d2d;
L_007095a4:; BB(0x007095a4);
    /* 007095a4: call 0x7c00dc */ r_esp -= 4; W32(r_esp, 0x7095a9u); f_007c00dc();
    /* 007095a9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007095ab: jne 0x708d2d */ if (!fZ) goto L_00708d2d;
L_007095b1:; BB(0x007095b1);
    /* 007095b1: call 0x7c00d0 */ r_esp -= 4; W32(r_esp, 0x7095b6u); f_007c00d0();
    /* 007095b6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007095b8: jne 0x708d2d */ if (!fZ) goto L_00708d2d;
L_007095be:; BB(0x007095be);
    /* 007095be: jmp 0x708c65 */ goto L_00708c65;
L_007095c3:; BB(0x007095c3);
    /* 007095c3: call 0x7c00c4 */ r_esp -= 4; W32(r_esp, 0x7095c8u); f_007c00c4();
    /* 007095c8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007095ca: jne 0x708d2d */ if (!fZ) goto L_00708d2d;
L_007095d0:; BB(0x007095d0);
    /* 007095d0: call 0x7c00dc */ r_esp -= 4; W32(r_esp, 0x7095d5u); f_007c00dc();
    /* 007095d5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007095d7: jne 0x708d2d */ if (!fZ) goto L_00708d2d;
L_007095dd:; BB(0x007095dd);
    /* 007095dd: call 0x7c00d0 */ r_esp -= 4; W32(r_esp, 0x7095e2u); f_007c00d0();
    /* 007095e2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007095e4: jne 0x708d2d */ if (!fZ) goto L_00708d2d;
L_007095ea:; BB(0x007095ea);
    /* 007095ea: jmp 0x708c65 */ goto L_00708c65;
L_0070972f:; BB(0x0070972f);
    /* 0070972f: mov edx, 0x96edc8 */ r_edx = 0x96edc8u;
    /* 00709734: jmp 0x708c1d */ goto L_00708c1d;
}

void f_00708ce6(void)
{
    FN_ENTER(0x00708ce6);
    goto L_00708ce6;
L_00708bf7:; BB(0x00708bf7);
    /* 00708bf7: mov ebp, dword ptr [ebx + 0x96edd0] */ r_ebp = R32((u32)(r_ebx+0x96edd0u));
    /* 00708bfd: call 0x791b48 */ r_esp -= 4; W32(r_esp, 0x708c02u); f_00791b48();
    /* 00708c02: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00708c04: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00708c06: and ecx, 0xff */ {  u32 a = r_ecx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00708c0c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00708c0e: je 0x70972f */ if (fZ) goto L_0070972f;
L_00708c14:; BB(0x00708c14);
    /* 00708c14: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00708c16: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00708c18: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00708c1a: lea edx, [edx + ecx] */ r_edx = (u32)(r_edx+r_ecx);
L_00708c1d:; BB(0x00708c1d);
    /* 00708c1d: push 0x1000000 */ { u32 v = 0x1000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00708c22: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00708c28: mov edi, dword ptr [edx] */ r_edi = R32((u32)(r_edx));
    /* 00708c2a: mov esi, dword ptr [edx + 4] */ r_esi = R32((u32)(r_edx+0x4u));
    /* 00708c2d: call 0x7be19c */ r_esp -= 4; W32(r_esp, 0x708c32u); f_007be19c();
    /* 00708c32: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00708c35: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00708c37: je 0x708c45 */ if (fZ) goto L_00708c45;
L_00708c39:; BB(0x00708c39);
    /* 00708c39: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00708c3a: call 0x791b34 */ r_esp -= 4; W32(r_esp, 0x708c3fu); f_00791b34();
    /* 00708c3f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00708c40: mov edi, dword ptr [eax] */ r_edi = R32((u32)(r_eax));
    /* 00708c42: mov esi, dword ptr [eax + 4] */ r_esi = R32((u32)(r_eax+0x4u));
L_00708c45:; BB(0x00708c45);
    /* 00708c45: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 00708c4b: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00708c4d: jne 0x708d2d */ if (!fZ) goto L_00708d2d;
L_00708c53:; BB(0x00708c53);
    /* 00708c53: cmp ebp, 0x1f */ {  u32 a = r_ebp; u32 b = 0x1fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00708c56: je 0x709580 */ if (fZ) goto L_00709580;
L_00708c5c:; BB(0x00708c5c);
    /* 00708c5c: cmp ebp, 7 */ {  u32 a = r_ebp; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00708c5f: je 0x70956e */ if (fZ) goto L_0070956e;
L_00708c65:; BB(0x00708c65);
    /* 00708c65: and esi, 0xff */ {  u32 a = r_esi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 00708c6b: lea edx, [ebp - 6] */ r_edx = (u32)(r_ebp+0xfffffffau);
    /* 00708c6e: cmp edx, 0x19 */ {  u32 a = r_edx; u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00708c71: ja 0x708d05 */ if ((!fC&&!fZ)) goto L_00708d05;
L_00708c77:; BB(0x00708c77);
    /* 00708c77: mov edx, dword ptr [ebp*4 + 0x96ecc8] */ r_edx = R32((u32)(r_ebp*4+0x96ecc8u));
    /* 00708c7e: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
L_00708ce6:; BB(0x00708ce6);
    /* 00708ce6: mov edx, dword ptr [0xa0f68c] */ r_edx = R32((u32)(0xa0f68cu));
    /* 00708cec: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 00708cef: jmp 0x708d05 */ goto L_00708d05;
L_00708d05:; BB(0x00708d05);
    /* 00708d05: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00708d06: call 0x7bfce4 */ r_esp -= 4; W32(r_esp, 0x708d0bu); f_007bfce4();
    /* 00708d0b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00708d0c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00708d0e: je 0x708d19 */ if (fZ) goto L_00708d19;
L_00708d10:; BB(0x00708d10);
    /* 00708d10: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 00708d14: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 00708d17: or dword ptr [ecx], edx */ { u32 ad = (u32)(r_ecx);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_00708d19:; BB(0x00708d19);
    /* 00708d19: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00708d1a: call 0x7bfff8 */ r_esp -= 4; W32(r_esp, 0x708d1fu); f_007bfff8();
    /* 00708d1f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00708d20: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00708d22: je 0x708d2d */ if (fZ) goto L_00708d2d;
L_00708d24:; BB(0x00708d24);
    /* 00708d24: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 00708d28: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 00708d2b: or dword ptr [ecx], edx */ { u32 ad = (u32)(r_ecx);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_00708d2d:; BB(0x00708d2d);
    /* 00708d2d: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00708d30: cmp ebx, 0x10 */ {  u32 a = r_ebx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00708d33: jl 0x708bf7 */ if ((fS!=fO)) goto L_00708bf7;
L_00708d39:; BB(0x00708d39);
    /* 00708d39: call 0x7917b8 */ r_esp -= 4; W32(r_esp, 0x708d3eu); f_007917b8();
    /* 00708d3e: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00708d41: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00708d44: ja 0x709566 */ if ((!fC&&!fZ)) goto L_00709566;
L_00708d4a:; BB(0x00708d4a);
    /* 00708d4a: mov eax, dword ptr [eax*4 + 0x96ed48] */ r_eax = R32((u32)(r_eax*4+0x96ed48u));
    /* 00708d51: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_00709566:; BB(0x00709566);
    /* 00709566: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00709569: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0070956a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0070956b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0070956c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0070956d: ret  */ FN_RET(0x00708ce6); r_esp += 4; return;
L_0070956e:; BB(0x0070956e);
    /* 0070956e: call 0x7c00d0 */ r_esp -= 4; W32(r_esp, 0x709573u); f_007c00d0();
    /* 00709573: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00709575: jne 0x708d2d */ if (!fZ) goto L_00708d2d;
L_0070957b:; BB(0x0070957b);
    /* 0070957b: jmp 0x708c65 */ goto L_00708c65;
L_00709580:; BB(0x00709580);
    /* 00709580: push 0x2000000 */ { u32 v = 0x2000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00709585: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0070958b: call 0x7be19c */ r_esp -= 4; W32(r_esp, 0x709590u); f_007be19c();
    /* 00709590: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00709593: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00709595: je 0x7095c3 */ if (fZ) goto L_007095c3;
L_00709597:; BB(0x00709597);
    /* 00709597: call 0x7c00c4 */ r_esp -= 4; W32(r_esp, 0x70959cu); f_007c00c4();
    /* 0070959c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070959e: je 0x708d2d */ if (fZ) goto L_00708d2d;
L_007095a4:; BB(0x007095a4);
    /* 007095a4: call 0x7c00dc */ r_esp -= 4; W32(r_esp, 0x7095a9u); f_007c00dc();
    /* 007095a9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007095ab: jne 0x708d2d */ if (!fZ) goto L_00708d2d;
L_007095b1:; BB(0x007095b1);
    /* 007095b1: call 0x7c00d0 */ r_esp -= 4; W32(r_esp, 0x7095b6u); f_007c00d0();
    /* 007095b6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007095b8: jne 0x708d2d */ if (!fZ) goto L_00708d2d;
L_007095be:; BB(0x007095be);
    /* 007095be: jmp 0x708c65 */ goto L_00708c65;
L_007095c3:; BB(0x007095c3);
    /* 007095c3: call 0x7c00c4 */ r_esp -= 4; W32(r_esp, 0x7095c8u); f_007c00c4();
    /* 007095c8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007095ca: jne 0x708d2d */ if (!fZ) goto L_00708d2d;
L_007095d0:; BB(0x007095d0);
    /* 007095d0: call 0x7c00dc */ r_esp -= 4; W32(r_esp, 0x7095d5u); f_007c00dc();
    /* 007095d5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007095d7: jne 0x708d2d */ if (!fZ) goto L_00708d2d;
L_007095dd:; BB(0x007095dd);
    /* 007095dd: call 0x7c00d0 */ r_esp -= 4; W32(r_esp, 0x7095e2u); f_007c00d0();
    /* 007095e2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007095e4: jne 0x708d2d */ if (!fZ) goto L_00708d2d;
L_007095ea:; BB(0x007095ea);
    /* 007095ea: jmp 0x708c65 */ goto L_00708c65;
L_0070972f:; BB(0x0070972f);
    /* 0070972f: mov edx, 0x96edc8 */ r_edx = 0x96edc8u;
    /* 00709734: jmp 0x708c1d */ goto L_00708c1d;
}

void f_00708cf1(void)
{
    FN_ENTER(0x00708cf1);
    goto L_00708cf1;
L_00708bf7:; BB(0x00708bf7);
    /* 00708bf7: mov ebp, dword ptr [ebx + 0x96edd0] */ r_ebp = R32((u32)(r_ebx+0x96edd0u));
    /* 00708bfd: call 0x791b48 */ r_esp -= 4; W32(r_esp, 0x708c02u); f_00791b48();
    /* 00708c02: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00708c04: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00708c06: and ecx, 0xff */ {  u32 a = r_ecx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00708c0c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00708c0e: je 0x70972f */ if (fZ) goto L_0070972f;
L_00708c14:; BB(0x00708c14);
    /* 00708c14: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00708c16: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00708c18: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00708c1a: lea edx, [edx + ecx] */ r_edx = (u32)(r_edx+r_ecx);
L_00708c1d:; BB(0x00708c1d);
    /* 00708c1d: push 0x1000000 */ { u32 v = 0x1000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00708c22: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00708c28: mov edi, dword ptr [edx] */ r_edi = R32((u32)(r_edx));
    /* 00708c2a: mov esi, dword ptr [edx + 4] */ r_esi = R32((u32)(r_edx+0x4u));
    /* 00708c2d: call 0x7be19c */ r_esp -= 4; W32(r_esp, 0x708c32u); f_007be19c();
    /* 00708c32: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00708c35: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00708c37: je 0x708c45 */ if (fZ) goto L_00708c45;
L_00708c39:; BB(0x00708c39);
    /* 00708c39: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00708c3a: call 0x791b34 */ r_esp -= 4; W32(r_esp, 0x708c3fu); f_00791b34();
    /* 00708c3f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00708c40: mov edi, dword ptr [eax] */ r_edi = R32((u32)(r_eax));
    /* 00708c42: mov esi, dword ptr [eax + 4] */ r_esi = R32((u32)(r_eax+0x4u));
L_00708c45:; BB(0x00708c45);
    /* 00708c45: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 00708c4b: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00708c4d: jne 0x708d2d */ if (!fZ) goto L_00708d2d;
L_00708c53:; BB(0x00708c53);
    /* 00708c53: cmp ebp, 0x1f */ {  u32 a = r_ebp; u32 b = 0x1fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00708c56: je 0x709580 */ if (fZ) goto L_00709580;
L_00708c5c:; BB(0x00708c5c);
    /* 00708c5c: cmp ebp, 7 */ {  u32 a = r_ebp; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00708c5f: je 0x70956e */ if (fZ) goto L_0070956e;
L_00708c65:; BB(0x00708c65);
    /* 00708c65: and esi, 0xff */ {  u32 a = r_esi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 00708c6b: lea edx, [ebp - 6] */ r_edx = (u32)(r_ebp+0xfffffffau);
    /* 00708c6e: cmp edx, 0x19 */ {  u32 a = r_edx; u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00708c71: ja 0x708d05 */ if ((!fC&&!fZ)) goto L_00708d05;
L_00708c77:; BB(0x00708c77);
    /* 00708c77: mov edx, dword ptr [ebp*4 + 0x96ecc8] */ r_edx = R32((u32)(r_ebp*4+0x96ecc8u));
    /* 00708c7e: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
L_00708cf1:; BB(0x00708cf1);
    /* 00708cf1: mov edx, dword ptr [0xa0f678] */ r_edx = R32((u32)(0xa0f678u));
    /* 00708cf7: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 00708cfa: jmp 0x708d05 */ goto L_00708d05;
L_00708d05:; BB(0x00708d05);
    /* 00708d05: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00708d06: call 0x7bfce4 */ r_esp -= 4; W32(r_esp, 0x708d0bu); f_007bfce4();
    /* 00708d0b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00708d0c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00708d0e: je 0x708d19 */ if (fZ) goto L_00708d19;
L_00708d10:; BB(0x00708d10);
    /* 00708d10: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 00708d14: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 00708d17: or dword ptr [ecx], edx */ { u32 ad = (u32)(r_ecx);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_00708d19:; BB(0x00708d19);
    /* 00708d19: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00708d1a: call 0x7bfff8 */ r_esp -= 4; W32(r_esp, 0x708d1fu); f_007bfff8();
    /* 00708d1f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00708d20: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00708d22: je 0x708d2d */ if (fZ) goto L_00708d2d;
L_00708d24:; BB(0x00708d24);
    /* 00708d24: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 00708d28: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 00708d2b: or dword ptr [ecx], edx */ { u32 ad = (u32)(r_ecx);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_00708d2d:; BB(0x00708d2d);
    /* 00708d2d: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00708d30: cmp ebx, 0x10 */ {  u32 a = r_ebx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00708d33: jl 0x708bf7 */ if ((fS!=fO)) goto L_00708bf7;
L_00708d39:; BB(0x00708d39);
    /* 00708d39: call 0x7917b8 */ r_esp -= 4; W32(r_esp, 0x708d3eu); f_007917b8();
    /* 00708d3e: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00708d41: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00708d44: ja 0x709566 */ if ((!fC&&!fZ)) goto L_00709566;
L_00708d4a:; BB(0x00708d4a);
    /* 00708d4a: mov eax, dword ptr [eax*4 + 0x96ed48] */ r_eax = R32((u32)(r_eax*4+0x96ed48u));
    /* 00708d51: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_00709566:; BB(0x00709566);
    /* 00709566: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00709569: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0070956a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0070956b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0070956c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0070956d: ret  */ FN_RET(0x00708cf1); r_esp += 4; return;
L_0070956e:; BB(0x0070956e);
    /* 0070956e: call 0x7c00d0 */ r_esp -= 4; W32(r_esp, 0x709573u); f_007c00d0();
    /* 00709573: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00709575: jne 0x708d2d */ if (!fZ) goto L_00708d2d;
L_0070957b:; BB(0x0070957b);
    /* 0070957b: jmp 0x708c65 */ goto L_00708c65;
L_00709580:; BB(0x00709580);
    /* 00709580: push 0x2000000 */ { u32 v = 0x2000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00709585: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0070958b: call 0x7be19c */ r_esp -= 4; W32(r_esp, 0x709590u); f_007be19c();
    /* 00709590: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00709593: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00709595: je 0x7095c3 */ if (fZ) goto L_007095c3;
L_00709597:; BB(0x00709597);
    /* 00709597: call 0x7c00c4 */ r_esp -= 4; W32(r_esp, 0x70959cu); f_007c00c4();
    /* 0070959c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070959e: je 0x708d2d */ if (fZ) goto L_00708d2d;
L_007095a4:; BB(0x007095a4);
    /* 007095a4: call 0x7c00dc */ r_esp -= 4; W32(r_esp, 0x7095a9u); f_007c00dc();
    /* 007095a9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007095ab: jne 0x708d2d */ if (!fZ) goto L_00708d2d;
L_007095b1:; BB(0x007095b1);
    /* 007095b1: call 0x7c00d0 */ r_esp -= 4; W32(r_esp, 0x7095b6u); f_007c00d0();
    /* 007095b6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007095b8: jne 0x708d2d */ if (!fZ) goto L_00708d2d;
L_007095be:; BB(0x007095be);
    /* 007095be: jmp 0x708c65 */ goto L_00708c65;
L_007095c3:; BB(0x007095c3);
    /* 007095c3: call 0x7c00c4 */ r_esp -= 4; W32(r_esp, 0x7095c8u); f_007c00c4();
    /* 007095c8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007095ca: jne 0x708d2d */ if (!fZ) goto L_00708d2d;
L_007095d0:; BB(0x007095d0);
    /* 007095d0: call 0x7c00dc */ r_esp -= 4; W32(r_esp, 0x7095d5u); f_007c00dc();
    /* 007095d5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007095d7: jne 0x708d2d */ if (!fZ) goto L_00708d2d;
L_007095dd:; BB(0x007095dd);
    /* 007095dd: call 0x7c00d0 */ r_esp -= 4; W32(r_esp, 0x7095e2u); f_007c00d0();
    /* 007095e2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007095e4: jne 0x708d2d */ if (!fZ) goto L_00708d2d;
L_007095ea:; BB(0x007095ea);
    /* 007095ea: jmp 0x708c65 */ goto L_00708c65;
L_0070972f:; BB(0x0070972f);
    /* 0070972f: mov edx, 0x96edc8 */ r_edx = 0x96edc8u;
    /* 00709734: jmp 0x708c1d */ goto L_00708c1d;
}

void f_00708cfc(void)
{
    FN_ENTER(0x00708cfc);
    goto L_00708cfc;
L_00708bf7:; BB(0x00708bf7);
    /* 00708bf7: mov ebp, dword ptr [ebx + 0x96edd0] */ r_ebp = R32((u32)(r_ebx+0x96edd0u));
    /* 00708bfd: call 0x791b48 */ r_esp -= 4; W32(r_esp, 0x708c02u); f_00791b48();
    /* 00708c02: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00708c04: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00708c06: and ecx, 0xff */ {  u32 a = r_ecx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00708c0c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00708c0e: je 0x70972f */ if (fZ) goto L_0070972f;
L_00708c14:; BB(0x00708c14);
    /* 00708c14: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00708c16: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00708c18: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00708c1a: lea edx, [edx + ecx] */ r_edx = (u32)(r_edx+r_ecx);
L_00708c1d:; BB(0x00708c1d);
    /* 00708c1d: push 0x1000000 */ { u32 v = 0x1000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00708c22: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00708c28: mov edi, dword ptr [edx] */ r_edi = R32((u32)(r_edx));
    /* 00708c2a: mov esi, dword ptr [edx + 4] */ r_esi = R32((u32)(r_edx+0x4u));
    /* 00708c2d: call 0x7be19c */ r_esp -= 4; W32(r_esp, 0x708c32u); f_007be19c();
    /* 00708c32: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00708c35: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00708c37: je 0x708c45 */ if (fZ) goto L_00708c45;
L_00708c39:; BB(0x00708c39);
    /* 00708c39: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00708c3a: call 0x791b34 */ r_esp -= 4; W32(r_esp, 0x708c3fu); f_00791b34();
    /* 00708c3f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00708c40: mov edi, dword ptr [eax] */ r_edi = R32((u32)(r_eax));
    /* 00708c42: mov esi, dword ptr [eax + 4] */ r_esi = R32((u32)(r_eax+0x4u));
L_00708c45:; BB(0x00708c45);
    /* 00708c45: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 00708c4b: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00708c4d: jne 0x708d2d */ if (!fZ) goto L_00708d2d;
L_00708c53:; BB(0x00708c53);
    /* 00708c53: cmp ebp, 0x1f */ {  u32 a = r_ebp; u32 b = 0x1fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00708c56: je 0x709580 */ if (fZ) goto L_00709580;
L_00708c5c:; BB(0x00708c5c);
    /* 00708c5c: cmp ebp, 7 */ {  u32 a = r_ebp; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00708c5f: je 0x70956e */ if (fZ) goto L_0070956e;
L_00708c65:; BB(0x00708c65);
    /* 00708c65: and esi, 0xff */ {  u32 a = r_esi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 00708c6b: lea edx, [ebp - 6] */ r_edx = (u32)(r_ebp+0xfffffffau);
    /* 00708c6e: cmp edx, 0x19 */ {  u32 a = r_edx; u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00708c71: ja 0x708d05 */ if ((!fC&&!fZ)) goto L_00708d05;
L_00708c77:; BB(0x00708c77);
    /* 00708c77: mov edx, dword ptr [ebp*4 + 0x96ecc8] */ r_edx = R32((u32)(r_ebp*4+0x96ecc8u));
    /* 00708c7e: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
L_00708cfc:; BB(0x00708cfc);
    /* 00708cfc: mov edx, dword ptr [0xa0f674] */ r_edx = R32((u32)(0xa0f674u));
    /* 00708d02: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
L_00708d05:; BB(0x00708d05);
    /* 00708d05: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00708d06: call 0x7bfce4 */ r_esp -= 4; W32(r_esp, 0x708d0bu); f_007bfce4();
    /* 00708d0b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00708d0c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00708d0e: je 0x708d19 */ if (fZ) goto L_00708d19;
L_00708d10:; BB(0x00708d10);
    /* 00708d10: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 00708d14: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 00708d17: or dword ptr [ecx], edx */ { u32 ad = (u32)(r_ecx);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_00708d19:; BB(0x00708d19);
    /* 00708d19: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00708d1a: call 0x7bfff8 */ r_esp -= 4; W32(r_esp, 0x708d1fu); f_007bfff8();
    /* 00708d1f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00708d20: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00708d22: je 0x708d2d */ if (fZ) goto L_00708d2d;
L_00708d24:; BB(0x00708d24);
    /* 00708d24: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 00708d28: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 00708d2b: or dword ptr [ecx], edx */ { u32 ad = (u32)(r_ecx);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_00708d2d:; BB(0x00708d2d);
    /* 00708d2d: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00708d30: cmp ebx, 0x10 */ {  u32 a = r_ebx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00708d33: jl 0x708bf7 */ if ((fS!=fO)) goto L_00708bf7;
L_00708d39:; BB(0x00708d39);
    /* 00708d39: call 0x7917b8 */ r_esp -= 4; W32(r_esp, 0x708d3eu); f_007917b8();
    /* 00708d3e: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00708d41: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00708d44: ja 0x709566 */ if ((!fC&&!fZ)) goto L_00709566;
L_00708d4a:; BB(0x00708d4a);
    /* 00708d4a: mov eax, dword ptr [eax*4 + 0x96ed48] */ r_eax = R32((u32)(r_eax*4+0x96ed48u));
    /* 00708d51: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_00709566:; BB(0x00709566);
    /* 00709566: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00709569: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0070956a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0070956b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0070956c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0070956d: ret  */ FN_RET(0x00708cfc); r_esp += 4; return;
L_0070956e:; BB(0x0070956e);
    /* 0070956e: call 0x7c00d0 */ r_esp -= 4; W32(r_esp, 0x709573u); f_007c00d0();
    /* 00709573: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00709575: jne 0x708d2d */ if (!fZ) goto L_00708d2d;
L_0070957b:; BB(0x0070957b);
    /* 0070957b: jmp 0x708c65 */ goto L_00708c65;
L_00709580:; BB(0x00709580);
    /* 00709580: push 0x2000000 */ { u32 v = 0x2000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00709585: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0070958b: call 0x7be19c */ r_esp -= 4; W32(r_esp, 0x709590u); f_007be19c();
    /* 00709590: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00709593: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00709595: je 0x7095c3 */ if (fZ) goto L_007095c3;
L_00709597:; BB(0x00709597);
    /* 00709597: call 0x7c00c4 */ r_esp -= 4; W32(r_esp, 0x70959cu); f_007c00c4();
    /* 0070959c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070959e: je 0x708d2d */ if (fZ) goto L_00708d2d;
L_007095a4:; BB(0x007095a4);
    /* 007095a4: call 0x7c00dc */ r_esp -= 4; W32(r_esp, 0x7095a9u); f_007c00dc();
    /* 007095a9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007095ab: jne 0x708d2d */ if (!fZ) goto L_00708d2d;
L_007095b1:; BB(0x007095b1);
    /* 007095b1: call 0x7c00d0 */ r_esp -= 4; W32(r_esp, 0x7095b6u); f_007c00d0();
    /* 007095b6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007095b8: jne 0x708d2d */ if (!fZ) goto L_00708d2d;
L_007095be:; BB(0x007095be);
    /* 007095be: jmp 0x708c65 */ goto L_00708c65;
L_007095c3:; BB(0x007095c3);
    /* 007095c3: call 0x7c00c4 */ r_esp -= 4; W32(r_esp, 0x7095c8u); f_007c00c4();
    /* 007095c8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007095ca: jne 0x708d2d */ if (!fZ) goto L_00708d2d;
L_007095d0:; BB(0x007095d0);
    /* 007095d0: call 0x7c00dc */ r_esp -= 4; W32(r_esp, 0x7095d5u); f_007c00dc();
    /* 007095d5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007095d7: jne 0x708d2d */ if (!fZ) goto L_00708d2d;
L_007095dd:; BB(0x007095dd);
    /* 007095dd: call 0x7c00d0 */ r_esp -= 4; W32(r_esp, 0x7095e2u); f_007c00d0();
    /* 007095e2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007095e4: jne 0x708d2d */ if (!fZ) goto L_00708d2d;
L_007095ea:; BB(0x007095ea);
    /* 007095ea: jmp 0x708c65 */ goto L_00708c65;
L_0070972f:; BB(0x0070972f);
    /* 0070972f: mov edx, 0x96edc8 */ r_edx = 0x96edc8u;
    /* 00709734: jmp 0x708c1d */ goto L_00708c1d;
}

void f_00708d05(void)
{
    FN_ENTER(0x00708d05);
    goto L_00708d05;
L_00708bf7:; BB(0x00708bf7);
    /* 00708bf7: mov ebp, dword ptr [ebx + 0x96edd0] */ r_ebp = R32((u32)(r_ebx+0x96edd0u));
    /* 00708bfd: call 0x791b48 */ r_esp -= 4; W32(r_esp, 0x708c02u); f_00791b48();
    /* 00708c02: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00708c04: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00708c06: and ecx, 0xff */ {  u32 a = r_ecx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00708c0c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00708c0e: je 0x70972f */ if (fZ) goto L_0070972f;
L_00708c14:; BB(0x00708c14);
    /* 00708c14: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00708c16: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00708c18: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00708c1a: lea edx, [edx + ecx] */ r_edx = (u32)(r_edx+r_ecx);
L_00708c1d:; BB(0x00708c1d);
    /* 00708c1d: push 0x1000000 */ { u32 v = 0x1000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00708c22: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00708c28: mov edi, dword ptr [edx] */ r_edi = R32((u32)(r_edx));
    /* 00708c2a: mov esi, dword ptr [edx + 4] */ r_esi = R32((u32)(r_edx+0x4u));
    /* 00708c2d: call 0x7be19c */ r_esp -= 4; W32(r_esp, 0x708c32u); f_007be19c();
    /* 00708c32: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00708c35: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00708c37: je 0x708c45 */ if (fZ) goto L_00708c45;
L_00708c39:; BB(0x00708c39);
    /* 00708c39: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00708c3a: call 0x791b34 */ r_esp -= 4; W32(r_esp, 0x708c3fu); f_00791b34();
    /* 00708c3f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00708c40: mov edi, dword ptr [eax] */ r_edi = R32((u32)(r_eax));
    /* 00708c42: mov esi, dword ptr [eax + 4] */ r_esi = R32((u32)(r_eax+0x4u));
L_00708c45:; BB(0x00708c45);
    /* 00708c45: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 00708c4b: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00708c4d: jne 0x708d2d */ if (!fZ) goto L_00708d2d;
L_00708c53:; BB(0x00708c53);
    /* 00708c53: cmp ebp, 0x1f */ {  u32 a = r_ebp; u32 b = 0x1fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00708c56: je 0x709580 */ if (fZ) goto L_00709580;
L_00708c5c:; BB(0x00708c5c);
    /* 00708c5c: cmp ebp, 7 */ {  u32 a = r_ebp; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00708c5f: je 0x70956e */ if (fZ) goto L_0070956e;
L_00708c65:; BB(0x00708c65);
    /* 00708c65: and esi, 0xff */ {  u32 a = r_esi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 00708c6b: lea edx, [ebp - 6] */ r_edx = (u32)(r_ebp+0xfffffffau);
    /* 00708c6e: cmp edx, 0x19 */ {  u32 a = r_edx; u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00708c71: ja 0x708d05 */ if ((!fC&&!fZ)) goto L_00708d05;
L_00708c77:; BB(0x00708c77);
    /* 00708c77: mov edx, dword ptr [ebp*4 + 0x96ecc8] */ r_edx = R32((u32)(r_ebp*4+0x96ecc8u));
    /* 00708c7e: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
L_00708d05:; BB(0x00708d05);
    /* 00708d05: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00708d06: call 0x7bfce4 */ r_esp -= 4; W32(r_esp, 0x708d0bu); f_007bfce4();
    /* 00708d0b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00708d0c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00708d0e: je 0x708d19 */ if (fZ) goto L_00708d19;
L_00708d10:; BB(0x00708d10);
    /* 00708d10: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 00708d14: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 00708d17: or dword ptr [ecx], edx */ { u32 ad = (u32)(r_ecx);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_00708d19:; BB(0x00708d19);
    /* 00708d19: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00708d1a: call 0x7bfff8 */ r_esp -= 4; W32(r_esp, 0x708d1fu); f_007bfff8();
    /* 00708d1f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00708d20: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00708d22: je 0x708d2d */ if (fZ) goto L_00708d2d;
L_00708d24:; BB(0x00708d24);
    /* 00708d24: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 00708d28: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 00708d2b: or dword ptr [ecx], edx */ { u32 ad = (u32)(r_ecx);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_00708d2d:; BB(0x00708d2d);
    /* 00708d2d: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00708d30: cmp ebx, 0x10 */ {  u32 a = r_ebx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00708d33: jl 0x708bf7 */ if ((fS!=fO)) goto L_00708bf7;
L_00708d39:; BB(0x00708d39);
    /* 00708d39: call 0x7917b8 */ r_esp -= 4; W32(r_esp, 0x708d3eu); f_007917b8();
    /* 00708d3e: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00708d41: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00708d44: ja 0x709566 */ if ((!fC&&!fZ)) goto L_00709566;
L_00708d4a:; BB(0x00708d4a);
    /* 00708d4a: mov eax, dword ptr [eax*4 + 0x96ed48] */ r_eax = R32((u32)(r_eax*4+0x96ed48u));
    /* 00708d51: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_00709566:; BB(0x00709566);
    /* 00709566: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00709569: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0070956a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0070956b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0070956c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0070956d: ret  */ FN_RET(0x00708d05); r_esp += 4; return;
L_0070956e:; BB(0x0070956e);
    /* 0070956e: call 0x7c00d0 */ r_esp -= 4; W32(r_esp, 0x709573u); f_007c00d0();
    /* 00709573: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00709575: jne 0x708d2d */ if (!fZ) goto L_00708d2d;
L_0070957b:; BB(0x0070957b);
    /* 0070957b: jmp 0x708c65 */ goto L_00708c65;
L_00709580:; BB(0x00709580);
    /* 00709580: push 0x2000000 */ { u32 v = 0x2000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00709585: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0070958b: call 0x7be19c */ r_esp -= 4; W32(r_esp, 0x709590u); f_007be19c();
    /* 00709590: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00709593: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00709595: je 0x7095c3 */ if (fZ) goto L_007095c3;
L_00709597:; BB(0x00709597);
    /* 00709597: call 0x7c00c4 */ r_esp -= 4; W32(r_esp, 0x70959cu); f_007c00c4();
    /* 0070959c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070959e: je 0x708d2d */ if (fZ) goto L_00708d2d;
L_007095a4:; BB(0x007095a4);
    /* 007095a4: call 0x7c00dc */ r_esp -= 4; W32(r_esp, 0x7095a9u); f_007c00dc();
    /* 007095a9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007095ab: jne 0x708d2d */ if (!fZ) goto L_00708d2d;
L_007095b1:; BB(0x007095b1);
    /* 007095b1: call 0x7c00d0 */ r_esp -= 4; W32(r_esp, 0x7095b6u); f_007c00d0();
    /* 007095b6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007095b8: jne 0x708d2d */ if (!fZ) goto L_00708d2d;
L_007095be:; BB(0x007095be);
    /* 007095be: jmp 0x708c65 */ goto L_00708c65;
L_007095c3:; BB(0x007095c3);
    /* 007095c3: call 0x7c00c4 */ r_esp -= 4; W32(r_esp, 0x7095c8u); f_007c00c4();
    /* 007095c8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007095ca: jne 0x708d2d */ if (!fZ) goto L_00708d2d;
L_007095d0:; BB(0x007095d0);
    /* 007095d0: call 0x7c00dc */ r_esp -= 4; W32(r_esp, 0x7095d5u); f_007c00dc();
    /* 007095d5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007095d7: jne 0x708d2d */ if (!fZ) goto L_00708d2d;
L_007095dd:; BB(0x007095dd);
    /* 007095dd: call 0x7c00d0 */ r_esp -= 4; W32(r_esp, 0x7095e2u); f_007c00d0();
    /* 007095e2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007095e4: jne 0x708d2d */ if (!fZ) goto L_00708d2d;
L_007095ea:; BB(0x007095ea);
    /* 007095ea: jmp 0x708c65 */ goto L_00708c65;
L_0070972f:; BB(0x0070972f);
    /* 0070972f: mov edx, 0x96edc8 */ r_edx = 0x96edc8u;
    /* 00709734: jmp 0x708c1d */ goto L_00708c1d;
}

void f_00708d53(void)
{
    FN_ENTER(0x00708d53);
    /* 00708d53: movzx eax, byte ptr [0xa97f20] */ r_eax = (u32)R8((u32)(0xa97f20u));
    /* 00708d5a: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00708d5c: jne 0x708e11 */ if (!fZ) goto L_00708e11;
L_00708d62:; BB(0x00708d62);
    /* 00708d62: call 0x791b48 */ r_esp -= 4; W32(r_esp, 0x708d67u); f_00791b48();
    /* 00708d67: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00708d69: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00708d6b: je 0x709621 */ if (fZ) goto L_00709621;
L_00708d71:; BB(0x00708d71);
    /* 00708d71: add eax, 0x50 */ {  u32 a = r_eax; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_00708d74:; BB(0x00708d74);
    /* 00708d74: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 00708d77: mov dword ptr [0x9d0860], eax */ W32((u32)(0x9d0860u), r_eax);
    /* 00708d7c: call 0x791b48 */ r_esp -= 4; W32(r_esp, 0x708d81u); f_00791b48();
    /* 00708d81: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00708d83: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00708d85: je 0x709617 */ if (fZ) goto L_00709617;
L_00708d8b:; BB(0x00708d8b);
    /* 00708d8b: add eax, 0x58 */ {  u32 a = r_eax; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_00708d8e:; BB(0x00708d8e);
    /* 00708d8e: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 00708d91: mov dword ptr [0x9d0868], eax */ W32((u32)(0x9d0868u), r_eax);
    /* 00708d96: call 0x791b48 */ r_esp -= 4; W32(r_esp, 0x708d9bu); f_00791b48();
    /* 00708d9b: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00708d9d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00708d9f: je 0x70960d */ if (fZ) goto L_0070960d;
L_00708da5:; BB(0x00708da5);
    /* 00708da5: add eax, 0x68 */ {  u32 a = r_eax; u32 b = 0x68u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_00708da8:; BB(0x00708da8);
    /* 00708da8: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 00708dab: mov dword ptr [0x9d0870], eax */ W32((u32)(0x9d0870u), r_eax);
    /* 00708db0: call 0x791b48 */ r_esp -= 4; W32(r_esp, 0x708db5u); f_00791b48();
    /* 00708db5: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00708db7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00708db9: je 0x709603 */ if (fZ) goto L_00709603;
L_00708dbf:; BB(0x00708dbf);
    /* 00708dbf: add eax, 0x60 */ {  u32 a = r_eax; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_00708dc2:; BB(0x00708dc2);
    /* 00708dc2: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 00708dc5: mov dword ptr [0x9d0878], eax */ W32((u32)(0x9d0878u), r_eax);
    /* 00708dca: call 0x791b48 */ r_esp -= 4; W32(r_esp, 0x708dcfu); f_00791b48();
    /* 00708dcf: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00708dd1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00708dd3: je 0x7095f9 */ if (fZ) goto L_007095f9;
L_00708dd9:; BB(0x00708dd9);
    /* 00708dd9: add eax, 0x30 */ {  u32 a = r_eax; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_00708ddc:; BB(0x00708ddc);
    /* 00708ddc: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 00708ddf: mov dword ptr [0x9d0880], eax */ W32((u32)(0x9d0880u), r_eax);
    /* 00708de4: call 0x791b48 */ r_esp -= 4; W32(r_esp, 0x708de9u); f_00791b48();
    /* 00708de9: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00708deb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00708ded: je 0x7095ef */ if (fZ) goto L_007095ef;
L_00708df3:; BB(0x00708df3);
    /* 00708df3: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_00708df6:; BB(0x00708df6);
    /* 00708df6: movzx edx, byte ptr [0xa97f20] */ r_edx = (u32)R8((u32)(0xa97f20u));
    /* 00708dfd: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 00708e00: mov dword ptr [0x9d0888], eax */ W32((u32)(0x9d0888u), r_eax);
    /* 00708e05: or edx, 0xffffff10 */ {  u32 a = r_edx; u32 b = 0xffffff10u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00708e0b: mov byte ptr [0xa97f20], dl */ W8((u32)(0xa97f20u), (u8)r_edx);
L_00708e11:; BB(0x00708e11);
    /* 00708e11: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 00708e15: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
    /* 00708e19: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00708e1b: mov ebx, eax */ r_ebx = r_eax;
L_00708e1d:; BB(0x00708e1d);
    /* 00708e1d: movzx edx, byte ptr [ebx + 0x9d0860] */ r_edx = (u32)R8((u32)(r_ebx+0x9d0860u));
    /* 00708e24: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00708e25: call 0x7bfce4 */ r_esp -= 4; W32(r_esp, 0x708e2au); f_007bfce4();
    /* 00708e2a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00708e2b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00708e2d: je 0x708e39 */ if (fZ) goto L_00708e39;
L_00708e2f:; BB(0x00708e2f);
    /* 00708e2f: mov edx, dword ptr [ebx + 0x9d0864] */ r_edx = R32((u32)(r_ebx+0x9d0864u));
    /* 00708e35: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 00708e37: or dword ptr [esi], ecx */ { u32 ad = (u32)(r_esi);  u32 a = R32(ad); u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_00708e39:; BB(0x00708e39);
    /* 00708e39: movzx edx, byte ptr [ebx + 0x9d0860] */ r_edx = (u32)R8((u32)(r_ebx+0x9d0860u));
    /* 00708e40: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00708e41: call 0x7bfff8 */ r_esp -= 4; W32(r_esp, 0x708e46u); f_007bfff8();
    /* 00708e46: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00708e47: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00708e49: je 0x708e55 */ if (fZ) goto L_00708e55;
L_00708e4b:; BB(0x00708e4b);
    /* 00708e4b: mov edx, dword ptr [ebx + 0x9d0864] */ r_edx = R32((u32)(r_ebx+0x9d0864u));
    /* 00708e51: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 00708e53: or dword ptr [edi], ecx */ { u32 ad = (u32)(r_edi);  u32 a = R32(ad); u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_00708e55:; BB(0x00708e55);
    /* 00708e55: add ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00708e58: cmp ebx, 0x48 */ {  u32 a = r_ebx; u32 b = 0x48u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00708e5b: jb 0x708e1d */ if (fC) goto L_00708e1d;
L_00708e5d:; BB(0x00708e5d);
    /* 00708e5d: jmp 0x709566 */ goto L_00709566;
L_00709566:; BB(0x00709566);
    /* 00709566: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00709569: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0070956a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0070956b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0070956c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0070956d: ret  */ FN_RET(0x00708d53); r_esp += 4; return;
L_007095ef:; BB(0x007095ef);
    /* 007095ef: mov eax, 0x96edc8 */ r_eax = 0x96edc8u;
    /* 007095f4: jmp 0x708df6 */ goto L_00708df6;
L_007095f9:; BB(0x007095f9);
    /* 007095f9: mov eax, 0x96edc8 */ r_eax = 0x96edc8u;
    /* 007095fe: jmp 0x708ddc */ goto L_00708ddc;
L_00709603:; BB(0x00709603);
    /* 00709603: mov eax, 0x96edc8 */ r_eax = 0x96edc8u;
    /* 00709608: jmp 0x708dc2 */ goto L_00708dc2;
L_0070960d:; BB(0x0070960d);
    /* 0070960d: mov eax, 0x96edc8 */ r_eax = 0x96edc8u;
    /* 00709612: jmp 0x708da8 */ goto L_00708da8;
L_00709617:; BB(0x00709617);
    /* 00709617: mov eax, 0x96edc8 */ r_eax = 0x96edc8u;
    /* 0070961c: jmp 0x708d8e */ goto L_00708d8e;
L_00709621:; BB(0x00709621);
    /* 00709621: mov eax, 0x96edc8 */ r_eax = 0x96edc8u;
    /* 00709626: jmp 0x708d74 */ goto L_00708d74;
}

void f_00708e62(void)
{
    FN_ENTER(0x00708e62);
    /* 00708e62: movzx eax, byte ptr [0xa97f20] */ r_eax = (u32)R8((u32)(0xa97f20u));
    /* 00708e69: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00708e6b: jne 0x708f20 */ if (!fZ) goto L_00708f20;
L_00708e71:; BB(0x00708e71);
    /* 00708e71: call 0x791b48 */ r_esp -= 4; W32(r_esp, 0x708e76u); f_00791b48();
    /* 00708e76: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00708e78: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00708e7a: je 0x70965d */ if (fZ) goto L_0070965d;
L_00708e80:; BB(0x00708e80);
    /* 00708e80: add eax, 0x50 */ {  u32 a = r_eax; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_00708e83:; BB(0x00708e83);
    /* 00708e83: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 00708e86: mov dword ptr [0x9d09b8], eax */ W32((u32)(0x9d09b8u), r_eax);
    /* 00708e8b: call 0x791b48 */ r_esp -= 4; W32(r_esp, 0x708e90u); f_00791b48();
    /* 00708e90: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00708e92: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00708e94: je 0x709653 */ if (fZ) goto L_00709653;
L_00708e9a:; BB(0x00708e9a);
    /* 00708e9a: add eax, 0x58 */ {  u32 a = r_eax; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_00708e9d:; BB(0x00708e9d);
    /* 00708e9d: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 00708ea0: mov dword ptr [0x9d09c0], eax */ W32((u32)(0x9d09c0u), r_eax);
    /* 00708ea5: call 0x791b48 */ r_esp -= 4; W32(r_esp, 0x708eaau); f_00791b48();
    /* 00708eaa: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00708eac: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00708eae: je 0x709649 */ if (fZ) goto L_00709649;
L_00708eb4:; BB(0x00708eb4);
    /* 00708eb4: add eax, 0x68 */ {  u32 a = r_eax; u32 b = 0x68u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_00708eb7:; BB(0x00708eb7);
    /* 00708eb7: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 00708eba: mov dword ptr [0x9d09c8], eax */ W32((u32)(0x9d09c8u), r_eax);
    /* 00708ebf: call 0x791b48 */ r_esp -= 4; W32(r_esp, 0x708ec4u); f_00791b48();
    /* 00708ec4: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00708ec6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00708ec8: je 0x70963f */ if (fZ) goto L_0070963f;
L_00708ece:; BB(0x00708ece);
    /* 00708ece: add eax, 0x60 */ {  u32 a = r_eax; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_00708ed1:; BB(0x00708ed1);
    /* 00708ed1: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 00708ed4: mov dword ptr [0x9d09d0], eax */ W32((u32)(0x9d09d0u), r_eax);
    /* 00708ed9: call 0x791b48 */ r_esp -= 4; W32(r_esp, 0x708edeu); f_00791b48();
    /* 00708ede: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00708ee0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00708ee2: je 0x709635 */ if (fZ) goto L_00709635;
L_00708ee8:; BB(0x00708ee8);
    /* 00708ee8: add eax, 0x30 */ {  u32 a = r_eax; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_00708eeb:; BB(0x00708eeb);
    /* 00708eeb: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 00708eee: mov dword ptr [0x9d09d8], eax */ W32((u32)(0x9d09d8u), r_eax);
    /* 00708ef3: call 0x791b48 */ r_esp -= 4; W32(r_esp, 0x708ef8u); f_00791b48();
    /* 00708ef8: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00708efa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00708efc: je 0x70962b */ if (fZ) goto L_0070962b;
L_00708f02:; BB(0x00708f02);
    /* 00708f02: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_00708f05:; BB(0x00708f05);
    /* 00708f05: movzx edx, byte ptr [0xa97f20] */ r_edx = (u32)R8((u32)(0xa97f20u));
    /* 00708f0c: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 00708f0f: mov dword ptr [0x9d09e0], eax */ W32((u32)(0x9d09e0u), r_eax);
    /* 00708f14: or edx, 0xffffff08 */ {  u32 a = r_edx; u32 b = 0xffffff08u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00708f1a: mov byte ptr [0xa97f20], dl */ W8((u32)(0xa97f20u), (u8)r_edx);
L_00708f20:; BB(0x00708f20);
    /* 00708f20: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 00708f24: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
    /* 00708f28: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00708f2a: mov ebx, eax */ r_ebx = r_eax;
L_00708f2c:; BB(0x00708f2c);
    /* 00708f2c: movzx edx, byte ptr [ebx + 0x9d09b8] */ r_edx = (u32)R8((u32)(r_ebx+0x9d09b8u));
    /* 00708f33: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00708f34: call 0x7bfce4 */ r_esp -= 4; W32(r_esp, 0x708f39u); f_007bfce4();
    /* 00708f39: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00708f3a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00708f3c: je 0x708f48 */ if (fZ) goto L_00708f48;
L_00708f3e:; BB(0x00708f3e);
    /* 00708f3e: mov edx, dword ptr [ebx + 0x9d09bc] */ r_edx = R32((u32)(r_ebx+0x9d09bcu));
    /* 00708f44: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 00708f46: or dword ptr [esi], ecx */ { u32 ad = (u32)(r_esi);  u32 a = R32(ad); u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_00708f48:; BB(0x00708f48);
    /* 00708f48: movzx edx, byte ptr [ebx + 0x9d09b8] */ r_edx = (u32)R8((u32)(r_ebx+0x9d09b8u));
    /* 00708f4f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00708f50: call 0x7bfff8 */ r_esp -= 4; W32(r_esp, 0x708f55u); f_007bfff8();
    /* 00708f55: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00708f56: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00708f58: je 0x708f64 */ if (fZ) goto L_00708f64;
L_00708f5a:; BB(0x00708f5a);
    /* 00708f5a: mov edx, dword ptr [ebx + 0x9d09bc] */ r_edx = R32((u32)(r_ebx+0x9d09bcu));
    /* 00708f60: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 00708f62: or dword ptr [edi], ecx */ { u32 ad = (u32)(r_edi);  u32 a = R32(ad); u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_00708f64:; BB(0x00708f64);
    /* 00708f64: add ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00708f67: cmp ebx, 0x30 */ {  u32 a = r_ebx; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00708f6a: jb 0x708f2c */ if (fC) goto L_00708f2c;
L_00708f6c:; BB(0x00708f6c);
    /* 00708f6c: jmp 0x709566 */ goto L_00709566;
L_00709566:; BB(0x00709566);
    /* 00709566: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00709569: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0070956a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0070956b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0070956c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0070956d: ret  */ FN_RET(0x00708e62); r_esp += 4; return;
L_0070962b:; BB(0x0070962b);
    /* 0070962b: mov eax, 0x96edc8 */ r_eax = 0x96edc8u;
    /* 00709630: jmp 0x708f05 */ goto L_00708f05;
L_00709635:; BB(0x00709635);
    /* 00709635: mov eax, 0x96edc8 */ r_eax = 0x96edc8u;
    /* 0070963a: jmp 0x708eeb */ goto L_00708eeb;
L_0070963f:; BB(0x0070963f);
    /* 0070963f: mov eax, 0x96edc8 */ r_eax = 0x96edc8u;
    /* 00709644: jmp 0x708ed1 */ goto L_00708ed1;
L_00709649:; BB(0x00709649);
    /* 00709649: mov eax, 0x96edc8 */ r_eax = 0x96edc8u;
    /* 0070964e: jmp 0x708eb7 */ goto L_00708eb7;
L_00709653:; BB(0x00709653);
    /* 00709653: mov eax, 0x96edc8 */ r_eax = 0x96edc8u;
    /* 00709658: jmp 0x708e9d */ goto L_00708e9d;
L_0070965d:; BB(0x0070965d);
    /* 0070965d: mov eax, 0x96edc8 */ r_eax = 0x96edc8u;
    /* 00709662: jmp 0x708e83 */ goto L_00708e83;
}

void f_00708f71(void)
{
    FN_ENTER(0x00708f71);
    /* 00708f71: movzx eax, byte ptr [0xa97f20] */ r_eax = (u32)R8((u32)(0xa97f20u));
    /* 00708f78: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00708f7a: jne 0x70902f */ if (!fZ) goto L_0070902f;
L_00708f80:; BB(0x00708f80);
    /* 00708f80: call 0x791b48 */ r_esp -= 4; W32(r_esp, 0x708f85u); f_00791b48();
    /* 00708f85: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00708f87: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00708f89: je 0x709699 */ if (fZ) goto L_00709699;
L_00708f8f:; BB(0x00708f8f);
    /* 00708f8f: add eax, 0x50 */ {  u32 a = r_eax; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_00708f92:; BB(0x00708f92);
    /* 00708f92: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 00708f95: mov dword ptr [0x9d0800], eax */ W32((u32)(0x9d0800u), r_eax);
    /* 00708f9a: call 0x791b48 */ r_esp -= 4; W32(r_esp, 0x708f9fu); f_00791b48();
    /* 00708f9f: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00708fa1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00708fa3: je 0x70968f */ if (fZ) goto L_0070968f;
L_00708fa9:; BB(0x00708fa9);
    /* 00708fa9: add eax, 0x58 */ {  u32 a = r_eax; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_00708fac:; BB(0x00708fac);
    /* 00708fac: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 00708faf: mov dword ptr [0x9d0808], eax */ W32((u32)(0x9d0808u), r_eax);
    /* 00708fb4: call 0x791b48 */ r_esp -= 4; W32(r_esp, 0x708fb9u); f_00791b48();
    /* 00708fb9: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00708fbb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00708fbd: je 0x709685 */ if (fZ) goto L_00709685;
L_00708fc3:; BB(0x00708fc3);
    /* 00708fc3: add eax, 0x68 */ {  u32 a = r_eax; u32 b = 0x68u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_00708fc6:; BB(0x00708fc6);
    /* 00708fc6: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 00708fc9: mov dword ptr [0x9d0810], eax */ W32((u32)(0x9d0810u), r_eax);
    /* 00708fce: call 0x791b48 */ r_esp -= 4; W32(r_esp, 0x708fd3u); f_00791b48();
    /* 00708fd3: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00708fd5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00708fd7: je 0x70967b */ if (fZ) goto L_0070967b;
L_00708fdd:; BB(0x00708fdd);
    /* 00708fdd: add eax, 0x60 */ {  u32 a = r_eax; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_00708fe0:; BB(0x00708fe0);
    /* 00708fe0: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 00708fe3: mov dword ptr [0x9d0818], eax */ W32((u32)(0x9d0818u), r_eax);
    /* 00708fe8: call 0x791b48 */ r_esp -= 4; W32(r_esp, 0x708fedu); f_00791b48();
    /* 00708fed: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00708fef: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00708ff1: je 0x709671 */ if (fZ) goto L_00709671;
L_00708ff7:; BB(0x00708ff7);
    /* 00708ff7: add eax, 0x30 */ {  u32 a = r_eax; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_00708ffa:; BB(0x00708ffa);
    /* 00708ffa: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 00708ffd: mov dword ptr [0x9d0820], eax */ W32((u32)(0x9d0820u), r_eax);
    /* 00709002: call 0x791b48 */ r_esp -= 4; W32(r_esp, 0x709007u); f_00791b48();
    /* 00709007: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00709009: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070900b: je 0x709667 */ if (fZ) goto L_00709667;
L_00709011:; BB(0x00709011);
    /* 00709011: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_00709014:; BB(0x00709014);
    /* 00709014: movzx edx, byte ptr [0xa97f20] */ r_edx = (u32)R8((u32)(0xa97f20u));
    /* 0070901b: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 0070901e: mov dword ptr [0x9d0828], eax */ W32((u32)(0x9d0828u), r_eax);
    /* 00709023: or edx, 0xffffff04 */ {  u32 a = r_edx; u32 b = 0xffffff04u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00709029: mov byte ptr [0xa97f20], dl */ W8((u32)(0xa97f20u), (u8)r_edx);
L_0070902f:; BB(0x0070902f);
    /* 0070902f: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 00709033: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
    /* 00709037: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00709039: mov ebx, eax */ r_ebx = r_eax;
L_0070903b:; BB(0x0070903b);
    /* 0070903b: movzx edx, byte ptr [ebx + 0x9d0800] */ r_edx = (u32)R8((u32)(r_ebx+0x9d0800u));
    /* 00709042: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00709043: call 0x7bfce4 */ r_esp -= 4; W32(r_esp, 0x709048u); f_007bfce4();
    /* 00709048: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00709049: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070904b: je 0x709057 */ if (fZ) goto L_00709057;
L_0070904d:; BB(0x0070904d);
    /* 0070904d: mov edx, dword ptr [ebx + 0x9d0804] */ r_edx = R32((u32)(r_ebx+0x9d0804u));
    /* 00709053: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 00709055: or dword ptr [esi], ecx */ { u32 ad = (u32)(r_esi);  u32 a = R32(ad); u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_00709057:; BB(0x00709057);
    /* 00709057: movzx edx, byte ptr [ebx + 0x9d0800] */ r_edx = (u32)R8((u32)(r_ebx+0x9d0800u));
    /* 0070905e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0070905f: call 0x7bfff8 */ r_esp -= 4; W32(r_esp, 0x709064u); f_007bfff8();
    /* 00709064: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00709065: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00709067: je 0x709073 */ if (fZ) goto L_00709073;
L_00709069:; BB(0x00709069);
    /* 00709069: mov edx, dword ptr [ebx + 0x9d0804] */ r_edx = R32((u32)(r_ebx+0x9d0804u));
    /* 0070906f: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 00709071: or dword ptr [edi], ecx */ { u32 ad = (u32)(r_edi);  u32 a = R32(ad); u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_00709073:; BB(0x00709073);
    /* 00709073: add ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00709076: cmp ebx, 0x48 */ {  u32 a = r_ebx; u32 b = 0x48u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00709079: jb 0x70903b */ if (fC) goto L_0070903b;
L_0070907b:; BB(0x0070907b);
    /* 0070907b: jmp 0x709566 */ goto L_00709566;
L_00709566:; BB(0x00709566);
    /* 00709566: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00709569: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0070956a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0070956b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0070956c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0070956d: ret  */ FN_RET(0x00708f71); r_esp += 4; return;
L_00709667:; BB(0x00709667);
    /* 00709667: mov eax, 0x96edc8 */ r_eax = 0x96edc8u;
    /* 0070966c: jmp 0x709014 */ goto L_00709014;
L_00709671:; BB(0x00709671);
    /* 00709671: mov eax, 0x96edc8 */ r_eax = 0x96edc8u;
    /* 00709676: jmp 0x708ffa */ goto L_00708ffa;
L_0070967b:; BB(0x0070967b);
    /* 0070967b: mov eax, 0x96edc8 */ r_eax = 0x96edc8u;
    /* 00709680: jmp 0x708fe0 */ goto L_00708fe0;
L_00709685:; BB(0x00709685);
    /* 00709685: mov eax, 0x96edc8 */ r_eax = 0x96edc8u;
    /* 0070968a: jmp 0x708fc6 */ goto L_00708fc6;
L_0070968f:; BB(0x0070968f);
    /* 0070968f: mov eax, 0x96edc8 */ r_eax = 0x96edc8u;
    /* 00709694: jmp 0x708fac */ goto L_00708fac;
L_00709699:; BB(0x00709699);
    /* 00709699: mov eax, 0x96edc8 */ r_eax = 0x96edc8u;
    /* 0070969e: jmp 0x708f92 */ goto L_00708f92;
}

