#include "protos.h"

void f_005171c9(void)
{
    FN_ENTER(0x005171c9);
    goto L_005171c9;
L_005170b2:; BB(0x005170b2);
    /* 005170b2: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005170b5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005170b6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005170b7: ret 4 */ FN_RET(0x005171c9); r_esp += 8; return;
L_005171c9:; BB(0x005171c9);
    /* 005171c9: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 005171cb: mov ecx, edi */ r_ecx = r_edi;
    /* 005171cd: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x5171d2u); f_0061cdb0();
    /* 005171d2: push 0xde */ { u32 v = 0xdeu; r_esp -= 4; W32(r_esp, v); }
    /* 005171d7: mov ecx, edi */ r_ecx = r_edi;
    /* 005171d9: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x5171deu); f_007879b8();
    /* 005171de: lea ebp, [edi + 0x38] */ r_ebp = (u32)(r_edi+0x38u);
    /* 005171e1: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005171e3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005171e4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005171e5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005171e6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005171e7: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5171ecu); f_00814298();
    /* 005171ec: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005171ef: mov dword ptr [edi + 0x3c8], 0 */ W32((u32)(r_edi+0x3c8u), 0x0u);
    /* 005171f9: jmp 0x5170b2 */ goto L_005170b2;
}

void f_00517200(void) /* sub_517200 */
{
    FN_ENTER(0x00517200);
    /* 00517200: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00517201: mov edi, ecx */ r_edi = r_ecx;
    /* 00517203: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00517207: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051720a: je 0x5172a9 */ if (fZ) goto L_005172a9;
L_00517210:; BB(0x00517210);
    /* 00517210: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00517213: je 0x51726e */ if (fZ) goto L_0051726e;
L_00517215:; BB(0x00517215);
    /* 00517215: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00517217: jne 0x5172a5 */ if (!fZ) goto L_005172a5;
L_0051721d:; BB(0x0051721d);
    /* 0051721d: mov ecx, edi */ r_ecx = r_edi;
    /* 0051721f: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x517224u); f_007aa094();
    /* 00517224: mov ecx, edi */ r_ecx = r_edi;
    /* 00517226: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x51722bu); f_00521410();
    /* 0051722b: push dword ptr [edi + 0x3a0] */ { u32 v = R32((u32)(r_edi+0x3a0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00517231: push dword ptr [edi + 0x434] */ { u32 v = R32((u32)(r_edi+0x434u)); r_esp -= 4; W32(r_esp, v); }
    /* 00517237: mov ecx, edi */ r_ecx = r_edi;
    /* 00517239: call 0x5165f4 */ r_esp -= 4; W32(r_esp, 0x51723eu); f_005165f4();
    /* 0051723e: fstp dword ptr [edi + 0x434] */ W_F32((u32)(r_edi+0x434u), ST(0)); FPOP();
    /* 00517244: mov ecx, edi */ r_ecx = r_edi;
    /* 00517246: call 0x5165b4 */ r_esp -= 4; W32(r_esp, 0x51724bu); f_005165b4();
    /* 0051724b: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0051724d: mov ecx, edi */ r_ecx = r_edi;
    /* 0051724f: call dword ptr [eax + 0x168] */ { u32 t = R32((u32)(r_eax+0x168u)); r_esp -= 4; W32(r_esp, 0x517255u); call_ind(t); }
    /* 00517255: mov ecx, edi */ r_ecx = r_edi;
    /* 00517257: call 0x51655c */ r_esp -= 4; W32(r_esp, 0x51725cu); f_0051655c();
    /* 0051725c: mov ecx, edi */ r_ecx = r_edi;
    /* 0051725e: call 0x51ffdc */ r_esp -= 4; W32(r_esp, 0x517263u); f_0051ffdc();
    /* 00517263: mov ecx, edi */ r_ecx = r_edi;
    /* 00517265: call 0x516674 */ r_esp -= 4; W32(r_esp, 0x51726au); f_00516674();
    /* 0051726a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0051726b: ret 4 */ FN_RET(0x00517200); r_esp += 8; return;
L_0051726e:; BB(0x0051726e);
    /* 0051726e: push 0x43480000 */ { u32 v = 0x43480000u; r_esp -= 4; W32(r_esp, v); }
    /* 00517273: mov ecx, edi */ r_ecx = r_edi;
    /* 00517275: call 0x520ea0 */ r_esp -= 4; W32(r_esp, 0x51727au); f_00520ea0();
    /* 0051727a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fO = 0; }
    /* 0051727c: jne 0x51729c */ if (!fZ) goto L_0051729c;
L_0051727e:; BB(0x0051727e);
    /* 0051727e: fld dword ptr [edi + 0x3b4] */ FPUSH(R_F32((u32)(r_edi+0x3b4u)));
    /* 00517284: fcomp dword ptr [edi + 0x3e8] */ fx_compare(ST(0), R_F32((u32)(r_edi+0x3e8u))); FPOP();
    /* 0051728a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0051728c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0051728d: jae 0x5172a5 */ if (!fC) goto L_005172a5;
L_0051728f:; BB(0x0051728f);
    /* 0051728f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00517291: mov ecx, edi */ r_ecx = r_edi;
    /* 00517293: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x517298u); f_0051f62c();
    /* 00517298: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00517299: ret 4 */ FN_RET(0x00517200); r_esp += 8; return;
L_0051729c:; BB(0x0051729c);
    /* 0051729c: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0051729e: mov ecx, edi */ r_ecx = r_edi;
    /* 005172a0: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5172a5u); f_0051f62c();
L_005172a5:; BB(0x005172a5);
    /* 005172a5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005172a6: ret 4 */ FN_RET(0x00517200); r_esp += 8; return;
L_005172a9:; BB(0x005172a9);
    /* 005172a9: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 005172ab: mov eax, 1 */ r_eax = 0x1u;
    /* 005172b0: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 005172b7: mov ecx, edi */ r_ecx = r_edi;
    /* 005172b9: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x5172bfu); call_ind(t); }
    /* 005172bf: mov eax, dword ptr [edi + 0x430] */ r_eax = R32((u32)(r_edi+0x430u));
    /* 005172c5: mov edx, dword ptr [edi + 0x30] */ r_edx = R32((u32)(r_edi+0x30u));
    /* 005172c8: or edx, 0x1000000 */ {  u32 a = r_edx; u32 b = 0x1000000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 005172ce: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005172d1: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005172d4: mov dword ptr [edi + 0x430], eax */ W32((u32)(r_edi+0x430u), r_eax);
    /* 005172da: mov dword ptr [edi + 0x30], edx */ W32((u32)(r_edi+0x30u), r_edx);
    /* 005172dd: mov ecx, edi */ r_ecx = r_edi;
    /* 005172df: call 0x51735c */ r_esp -= 4; W32(r_esp, 0x5172e4u); f_0051735c();
    /* 005172e4: mov ecx, dword ptr [edi + 0x450] */ r_ecx = R32((u32)(r_edi+0x450u));
    /* 005172ea: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x5172efu); f_0082dcbc();
    /* 005172ef: fld dword ptr [0x920c44] */ FPUSH(R_F32((u32)(0x920c44u)));
    /* 005172f5: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 005172f7: fadd dword ptr [edi + 0x424] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x424u));
    /* 005172fd: mov eax, dword ptr [edi + 0x44c] */ r_eax = R32((u32)(r_edi+0x44cu));
    /* 00517303: mov ecx, dword ptr [edi + 0x450] */ r_ecx = R32((u32)(r_edi+0x450u));
    /* 00517309: fstp dword ptr [edi + 0x39c] */ W_F32((u32)(r_edi+0x39cu), ST(0)); FPOP();
    /* 0051730f: mov dword ptr [edi + 0x3a0], eax */ W32((u32)(r_edi+0x3a0u), r_eax);
    /* 00517315: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x51731au); f_0082ddd8();
    /* 0051731a: fld dword ptr [0x920c44] */ FPUSH(R_F32((u32)(0x920c44u)));
    /* 00517320: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00517322: fadd dword ptr [edi + 0x42c] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x42cu));
    /* 00517328: mov eax, dword ptr [edi + 0x358] */ r_eax = R32((u32)(r_edi+0x358u));
    /* 0051732e: fstp dword ptr [edi + 0x3a4] */ W_F32((u32)(r_edi+0x3a4u), ST(0)); FPOP();
    /* 00517334: push dword ptr [eax + 4] */ { u32 v = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00517337: push dword ptr [eax + 8] */ { u32 v = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0051733a: call 0x782a34 */ r_esp -= 4; W32(r_esp, 0x51733fu); f_00782a34();
    /* 0051733f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00517342: fld dword ptr [0x920c48] */ FPUSH(R_F32((u32)(0x920c48u)));
    /* 00517348: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0051734a: fstp dword ptr [edi + 0x3e8] */ W_F32((u32)(r_edi+0x3e8u), ST(0)); FPOP();
    /* 00517350: mov ecx, edi */ r_ecx = r_edi;
    /* 00517352: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x517357u); f_00521410();
    /* 00517357: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00517358: ret 4 */ FN_RET(0x00517200); r_esp += 8; return;
}

void f_0051735c(void) /* sub_51735C */
{
    FN_ENTER(0x0051735c);
    /* 0051735c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0051735d: mov esi, ecx */ r_esi = r_ecx;
    /* 0051735f: mov ecx, esi */ r_ecx = r_esi;
    /* 00517361: call 0x520bf4 */ r_esp -= 4; W32(r_esp, 0x517366u); f_00520bf4();
    /* 00517366: fld dword ptr [0x920c40] */ FPUSH(R_F32((u32)(0x920c40u)));
    /* 0051736c: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0051736e: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00517370: fadd dword ptr [esi + 0x428] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x428u));
    /* 00517376: mov ecx, esi */ r_ecx = r_esi;
    /* 00517378: fstp dword ptr [esi + 0x44c] */ W_F32((u32)(r_esi+0x44cu), ST(0)); FPOP();
    /* 0051737e: call 0x520c20 */ r_esp -= 4; W32(r_esp, 0x517383u); f_00520c20();
    /* 00517383: mov dword ptr [esi + 0x450], eax */ W32((u32)(r_esi+0x450u), r_eax);
    /* 00517389: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0051738a: ret  */ FN_RET(0x0051735c); r_esp += 4; return;
}

void f_0051738c(void) /* sub_51738C */
{
    FN_ENTER(0x0051738c);
    /* 0051738c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0051738d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0051738e: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00517391: mov edi, ecx */ r_edi = r_ecx;
    /* 00517393: mov eax, dword ptr [esp + 0x4c] */ r_eax = R32((u32)(r_esp+0x4cu));
    /* 00517397: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051739a: je 0x51776e */ if (fZ) goto L_0051776e;
L_005173a0:; BB(0x005173a0);
    /* 005173a0: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005173a3: je 0x517728 */ if (fZ) goto L_00517728;
L_005173a9:; BB(0x005173a9);
    /* 005173a9: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005173ac: je 0x517662 */ if (fZ) goto L_00517662;
L_005173b2:; BB(0x005173b2);
    /* 005173b2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005173b4: jne 0x517728 */ if (!fZ) goto L_00517728;
L_005173ba:; BB(0x005173ba);
    /* 005173ba: mov ecx, edi */ r_ecx = r_edi;
    /* 005173bc: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x5173c1u); f_007aa094();
    /* 005173c1: mov ecx, edi */ r_ecx = r_edi;
    /* 005173c3: call 0x521238 */ r_esp -= 4; W32(r_esp, 0x5173c8u); f_00521238();
    /* 005173c8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005173ca: jne 0x5173e3 */ if (!fZ) goto L_005173e3;
L_005173cc:; BB(0x005173cc);
    /* 005173cc: push 0x43480000 */ { u32 v = 0x43480000u; r_esp -= 4; W32(r_esp, v); }
    /* 005173d1: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005173d3: mov ecx, edi */ r_ecx = r_edi;
    /* 005173d5: call dword ptr [eax + 0x1a8] */ { u32 t = R32((u32)(r_eax+0x1a8u)); r_esp -= 4; W32(r_esp, 0x5173dbu); call_ind(t); }
    /* 005173db: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005173dd: je 0x517728 */ if (fZ) goto L_00517728;
L_005173e3:; BB(0x005173e3);
    /* 005173e3: mov eax, dword ptr [edi + 0x3c8] */ r_eax = R32((u32)(r_edi+0x3c8u));
    /* 005173e9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005173eb: je 0x5174ec */ if (fZ) goto L_005174ec;
L_005173f1:; BB(0x005173f1);
    /* 005173f1: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005173f4: jne 0x51746a */ if (!fZ) goto L_0051746a;
L_005173f6:; BB(0x005173f6);
    /* 005173f6: mov ecx, dword ptr [edi + 0x3dc] */ r_ecx = R32((u32)(r_edi+0x3dcu));
    /* 005173fc: mov ebp, dword ptr [edi + 0x3dc] */ r_ebp = R32((u32)(r_edi+0x3dcu));
    /* 00517402: mov eax, ecx */ r_eax = r_ecx;
    /* 00517404: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00517407: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00517409: sar ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0051740b: add ecx, dword ptr [edi + 0x3d8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edi+0x3d8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00517411: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00517412: mov dword ptr [edi + 0x3d8], ecx */ W32((u32)(r_edi+0x3d8u), r_ecx);
    /* 00517418: mov edx, ebp */ r_edx = r_ebp;
    /* 0051741a: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0051741d: add ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0051741f: sar ebp, 1 */ { u32 c = (1u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebp = r;  } }
    /* 00517421: mov ecx, edi */ r_ecx = r_edi;
    /* 00517423: add dword ptr [edi + 0x3d4], ebp */ { u32 ad = (u32)(r_edi+0x3d4u);  u32 a = R32(ad); u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00517429: call 0x5177f4 */ r_esp -= 4; W32(r_esp, 0x51742eu); f_005177f4();
    /* 0051742e: mov ecx, edi */ r_ecx = r_edi;
    /* 00517430: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x517435u); f_00521410();
    /* 00517435: fld dword ptr [0x920c38] */ FPUSH(R_F32((u32)(0x920c38u)));
    /* 0051743b: mov edx, dword ptr [edi + 0x358] */ r_edx = R32((u32)(r_edi+0x358u));
    /* 00517441: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 00517444: fcom dword ptr [edi + 0x3b4] */ fx_compare(ST(0), R_F32((u32)(r_edi+0x3b4u))); 
    /* 0051744a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0051744c: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 00517450: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 00517454: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00517455: jbe 0x5175a4 */ if ((fC||fZ)) goto L_005175a4;
L_0051745b:; BB(0x0051745b);
    /* 0051745b: mov dword ptr [edi + 0x3c8], 2 */ W32((u32)(r_edi+0x3c8u), 0x2u);
    /* 00517465: jmp 0x5175a4 */ goto L_005175a4;
L_0051746a:; BB(0x0051746a);
    /* 0051746a: fldz  */ FPUSH(0.0);
    /* 0051746c: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 00517470: fldz  */ FPUSH(0.0);
    /* 00517472: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 00517476: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00517479: jne 0x5175a4 */ if (!fZ) goto L_005175a4;
L_0051747f:; BB(0x0051747f);
    /* 0051747f: mov edx, dword ptr [edi + 0x3d8] */ r_edx = R32((u32)(r_edi+0x3d8u));
    /* 00517485: add edx, dword ptr [edi + 0x3dc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_edi+0x3dcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0051748b: mov eax, dword ptr [edi + 0x3dc] */ r_eax = R32((u32)(r_edi+0x3dcu));
    /* 00517491: mov dword ptr [edi + 0x3d8], edx */ W32((u32)(r_edi+0x3d8u), r_edx);
    /* 00517497: mov ecx, edi */ r_ecx = r_edi;
    /* 00517499: add dword ptr [edi + 0x3d4], eax */ { u32 ad = (u32)(r_edi+0x3d4u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0051749f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005174a0: call 0x5177f4 */ r_esp -= 4; W32(r_esp, 0x5174a5u); f_005177f4();
    /* 005174a5: mov ecx, edi */ r_ecx = r_edi;
    /* 005174a7: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x5174acu); f_00521410();
    /* 005174ac: mov eax, dword ptr [edi + 0x358] */ r_eax = R32((u32)(r_edi+0x358u));
    /* 005174b2: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 005174b5: mov ecx, dword ptr [edi + 0x3e0] */ r_ecx = R32((u32)(r_edi+0x3e0u));
    /* 005174bb: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 005174bf: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x5174c4u); f_0082dcbc();
    /* 005174c4: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 005174c8: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 005174cc: fmul dword ptr [0x920c34] */ ST(0) = ST(0) * R_F32((u32)(0x920c34u));
    /* 005174d2: mov eax, dword ptr [edi + 0x3e0] */ r_eax = R32((u32)(r_edi+0x3e0u));
    /* 005174d8: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 005174dc: add eax, 0x380 */ {  u32 a = r_eax; u32 b = 0x380u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005174e1: mov dword ptr [edi + 0x3e0], eax */ W32((u32)(r_edi+0x3e0u), r_eax);
    /* 005174e7: jmp 0x5175a4 */ goto L_005175a4;
L_005174ec:; BB(0x005174ec);
    /* 005174ec: push dword ptr [edi + 0x3d8] */ { u32 v = R32((u32)(r_edi+0x3d8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005174f2: mov ecx, edi */ r_ecx = r_edi;
    /* 005174f4: call 0x5177f4 */ r_esp -= 4; W32(r_esp, 0x5174f9u); f_005177f4();
    /* 005174f9: mov ecx, edi */ r_ecx = r_edi;
    /* 005174fb: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x517500u); f_00521410();
    /* 00517500: fld dword ptr [0x920c38] */ FPUSH(R_F32((u32)(0x920c38u)));
    /* 00517506: mov edx, dword ptr [edi + 0x358] */ r_edx = R32((u32)(r_edi+0x358u));
    /* 0051750c: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 0051750f: fld dword ptr [edi + 0x3b4] */ FPUSH(R_F32((u32)(r_edi+0x3b4u)));
    /* 00517515: fcomp dword ptr [0x920c30] */ fx_compare(ST(0), R_F32((u32)(0x920c30u))); FPOP();
    /* 0051751b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0051751d: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 00517521: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 00517525: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00517526: jae 0x5175a4 */ if (!fC) goto L_005175a4;
L_00517528:; BB(0x00517528);
    /* 00517528: mov ecx, edi */ r_ecx = r_edi;
    /* 0051752a: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x51752fu); f_007751b0();
    /* 0051752f: fcomp dword ptr [0x920c2c] */ fx_compare(ST(0), R_F32((u32)(0x920c2cu))); FPOP();
    /* 00517535: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00517537: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00517538: fld dword ptr [0x920c24] */ FPUSH(R_F32((u32)(0x920c24u)));
    /* 0051753e: jbe 0x51756e */ if ((fC||fZ)) goto L_0051756e;
L_00517540:; BB(0x00517540);
    /* 00517540: fld dword ptr [0x920c20] */ FPUSH(R_F32((u32)(0x920c20u)));
    /* 00517546: fmul dword ptr [esp + 0x2c] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x2cu));
    /* 0051754a: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 0051754c: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 00517550: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 00517555: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0051755a: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 0051755e: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 00517562: fistp dword ptr [edi + 0x3dc] */ W32((u32)(r_edi+0x3dcu), (u32)fx_int32(ST(0))); FPOP();
    /* 00517568: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 0051756c: jmp 0x51759a */ goto L_0051759a;
L_0051756e:; BB(0x0051756e);
    /* 0051756e: fld dword ptr [0x920c28] */ FPUSH(R_F32((u32)(0x920c28u)));
    /* 00517574: fmul dword ptr [esp + 0x2c] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x2cu));
    /* 00517578: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 0051757a: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 0051757e: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 00517583: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00517588: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 0051758c: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 00517590: fistp dword ptr [edi + 0x3dc] */ W32((u32)(r_edi+0x3dcu), (u32)fx_int32(ST(0))); FPOP();
    /* 00517596: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
L_0051759a:; BB(0x0051759a);
    /* 0051759a: mov dword ptr [edi + 0x3c8], 1 */ W32((u32)(r_edi+0x3c8u), 0x1u);
L_005175a4:; BB(0x005175a4);
    /* 005175a4: mov edx, dword ptr [edi + 0x3a8] */ r_edx = R32((u32)(r_edi+0x3a8u));
    /* 005175aa: mov eax, dword ptr [edi + 0x3ac] */ r_eax = R32((u32)(r_edi+0x3acu));
    /* 005175b0: mov ebp, dword ptr [edi + 0x3b0] */ r_ebp = R32((u32)(r_edi+0x3b0u));
    /* 005175b6: mov dword ptr [edi + 0x438], edx */ W32((u32)(r_edi+0x438u), r_edx);
    /* 005175bc: mov dword ptr [edi + 0x43c], eax */ W32((u32)(r_edi+0x43cu), r_eax);
    /* 005175c2: mov dword ptr [edi + 0x440], ebp */ W32((u32)(r_edi+0x440u), r_ebp);
    /* 005175c8: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005175cb: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 005175cf: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 005175d3: mov ecx, edi */ r_ecx = r_edi;
    /* 005175d5: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 005175d8: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 005175dc: call 0x516e98 */ r_esp -= 4; W32(r_esp, 0x5175e1u); f_00516e98();
    /* 005175e1: mov eax, dword ptr [edi + 0x434] */ r_eax = R32((u32)(r_edi+0x434u));
    /* 005175e7: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005175ea: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 005175ee: fadd dword ptr [edi + 0x3a0] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x3a0u));
    /* 005175f4: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 005175f8: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 005175fb: mov ecx, edi */ r_ecx = r_edi;
    /* 005175fd: call 0x5165f4 */ r_esp -= 4; W32(r_esp, 0x517602u); f_005165f4();
    /* 00517602: fstp dword ptr [edi + 0x434] */ W_F32((u32)(r_edi+0x434u), ST(0)); FPOP();
    /* 00517608: mov ecx, edi */ r_ecx = r_edi;
    /* 0051760a: call 0x51655c */ r_esp -= 4; W32(r_esp, 0x51760fu); f_0051655c();
    /* 0051760f: mov eax, dword ptr [edi + 0x398] */ r_eax = R32((u32)(r_edi+0x398u));
    /* 00517615: fld dword ptr [eax + 0x38] */ FPUSH(R_F32((u32)(r_eax+0x38u)));
    /* 00517618: fsub dword ptr [edi + 0x38] */ ST(0) = ST(0) - R_F32((u32)(r_edi+0x38u));
    /* 0051761b: fld dword ptr [eax + 0x40] */ FPUSH(R_F32((u32)(r_eax+0x40u)));
    /* 0051761e: fsub dword ptr [edi + 0x40] */ ST(0) = ST(0) - R_F32((u32)(r_edi+0x40u));
    /* 00517621: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 00517623: fmul qword ptr [0x920b90] */ ST(0) = ST(0) * R_F64((u32)(0x920b90u));
    /* 00517629: fdiv qword ptr [0x920b88] */ ST(0) = ST(0) / R_F64((u32)(0x920b88u));
    /* 0051762f: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 00517633: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 00517638: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0051763d: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 00517641: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 00517645: fistp dword ptr [edi + 0x60] */ W32((u32)(r_edi+0x60u), (u32)fx_int32(ST(0))); FPOP();
    /* 00517648: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 0051764c: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0051764e: mov ecx, edi */ r_ecx = r_edi;
    /* 00517650: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x517656u); call_ind(t); }
    /* 00517656: mov ecx, edi */ r_ecx = r_edi;
    /* 00517658: call 0x516674 */ r_esp -= 4; W32(r_esp, 0x51765du); f_00516674();
    /* 0051765d: jmp 0x517728 */ goto L_00517728;
L_00517662:; BB(0x00517662);
    /* 00517662: mov eax, dword ptr [edi + 0x398] */ r_eax = R32((u32)(r_edi+0x398u));
    /* 00517668: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051766a: je 0x517763 */ if (fZ) goto L_00517763;
L_00517670:; BB(0x00517670);
    /* 00517670: mov eax, dword ptr [edi + 0x3d4] */ r_eax = R32((u32)(r_edi+0x3d4u));
    /* 00517676: cmp eax, 0x8000 */ {  u32 a = r_eax; u32 b = 0x8000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0051767b: jg 0x517688 */ if ((!fZ&&fS==fO)) goto L_00517688;
L_0051767d:; BB(0x0051767d);
    /* 0051767d: cmp eax, 0xffff8000 */ {  u32 a = r_eax; u32 b = 0xffff8000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00517682: jge 0x517728 */ if ((fS==fO)) goto L_00517728;
L_00517688:; BB(0x00517688);
    /* 00517688: movzx eax, word ptr [edi + 0x420] */ r_eax = (u32)R16((u32)(r_edi+0x420u));
    /* 0051768f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00517690: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x517695u); f_007b4d18();
    /* 00517695: mov ebp, eax */ r_ebp = r_eax;
    /* 00517697: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051769a: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051769c: je 0x51774b */ if (fZ) goto L_0051774b;
L_005176a2:; BB(0x005176a2);
    /* 005176a2: movzx edx, word ptr [edi + 0x394] */ r_edx = (u32)R16((u32)(r_edi+0x394u));
    /* 005176a9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005176aa: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005176ac: call 0x51a924 */ r_esp -= 4; W32(r_esp, 0x5176b1u); f_0051a924();
    /* 005176b1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005176b3: je 0x5176c0 */ if (fZ) goto L_005176c0;
L_005176b5:; BB(0x005176b5);
    /* 005176b5: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005176b7: mov ecx, edi */ r_ecx = r_edi;
    /* 005176b9: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5176beu); f_0051f62c();
    /* 005176be: jmp 0x517728 */ goto L_00517728;
L_005176c0:; BB(0x005176c0);
    /* 005176c0: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 005176c3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005176c4: mov ecx, edi */ r_ecx = r_edi;
    /* 005176c6: push dword ptr [0xa72d54] */ { u32 v = R32((u32)(0xa72d54u)); r_esp -= 4; W32(r_esp, v); }
    /* 005176cc: call 0x51f918 */ r_esp -= 4; W32(r_esp, 0x5176d1u); f_0051f918();
    /* 005176d1: mov edx, eax */ r_edx = r_eax;
    /* 005176d3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005176d5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005176d7: jle 0x517715 */ if ((fZ||fS!=fO)) goto L_00517715;
L_005176d9:; BB(0x005176d9);
    /* 005176d9: mov dword ptr [esp + 0x3c], ebp */ W32((u32)(r_esp+0x3cu), r_ebp);
    /* 005176dd: mov dword ptr [esp + 0x38], ebx */ W32((u32)(r_esp+0x38u), r_ebx);
    /* 005176e1: mov ebx, eax */ r_ebx = r_eax;
    /* 005176e3: mov dword ptr [esp + 0x34], esi */ W32((u32)(r_esp+0x34u), r_esi);
    /* 005176e7: mov esi, edx */ r_esi = r_edx;
L_005176e9:; BB(0x005176e9);
    /* 005176e9: movzx ebp, word ptr [esp + ebx*8] */ r_ebp = (u32)R16((u32)(r_esp+r_ebx*8));
    /* 005176ed: movzx eax, word ptr [edi + 0x394] */ r_eax = (u32)R16((u32)(r_edi+0x394u));
    /* 005176f4: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005176f7: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005176f9: je 0x517709 */ if (fZ) goto L_00517709;
L_005176fb:; BB(0x005176fb);
    /* 005176fb: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005176fc: mov ecx, dword ptr [esp + 0x40] */ r_ecx = R32((u32)(r_esp+0x40u));
    /* 00517700: call 0x51a924 */ r_esp -= 4; W32(r_esp, 0x517705u); f_0051a924();
    /* 00517705: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00517707: jne 0x517730 */ if (!fZ) goto L_00517730;
L_00517709:; BB(0x00517709);
    /* 00517709: cmp ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0051770b: jl 0x5176e9 */ if ((fS!=fO)) goto L_005176e9;
L_0051770d:; BB(0x0051770d);
    /* 0051770d: mov ebx, dword ptr [esp + 0x38] */ r_ebx = R32((u32)(r_esp+0x38u));
    /* 00517711: mov esi, dword ptr [esp + 0x34] */ r_esi = R32((u32)(r_esp+0x34u));
L_00517715:; BB(0x00517715);
    /* 00517715: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00517717: mov ecx, edi */ r_ecx = r_edi;
    /* 00517719: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x51771eu); f_0051f62c();
    /* 0051771e: mov dword ptr [edi + 0x45c], 0 */ W32((u32)(r_edi+0x45cu), 0x0u);
L_00517728:; BB(0x00517728);
    /* 00517728: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0051772b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051772c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0051772d: ret 4 */ FN_RET(0x0051738c); r_esp += 8; return;
L_00517730:; BB(0x00517730);
    /* 00517730: mov ebx, dword ptr [esp + 0x38] */ r_ebx = R32((u32)(r_esp+0x38u));
    /* 00517734: mov esi, dword ptr [esp + 0x34] */ r_esi = R32((u32)(r_esp+0x34u));
    /* 00517738: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00517739: mov ecx, edi */ r_ecx = r_edi;
    /* 0051773b: call 0x520fcc */ r_esp -= 4; W32(r_esp, 0x517740u); f_00520fcc();
    /* 00517740: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00517742: mov ecx, edi */ r_ecx = r_edi;
    /* 00517744: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x517749u); f_0051f62c();
    /* 00517749: jmp 0x517728 */ goto L_00517728;
L_0051774b:; BB(0x0051774b);
    /* 0051774b: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0051774d: mov ecx, edi */ r_ecx = r_edi;
    /* 0051774f: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x517754u); f_0051f62c();
    /* 00517754: mov dword ptr [edi + 0x45c], 0 */ W32((u32)(r_edi+0x45cu), 0x0u);
    /* 0051775e: jmp 0x5176a2 */ goto L_005176a2;
L_00517763:; BB(0x00517763);
    /* 00517763: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00517765: mov ecx, edi */ r_ecx = r_edi;
    /* 00517767: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x51776cu); f_0051f62c();
    /* 0051776c: jmp 0x517728 */ goto L_00517728;
L_0051776e:; BB(0x0051776e);
    /* 0051776e: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 00517770: mov eax, 1 */ r_eax = 0x1u;
    /* 00517775: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 0051777c: mov ecx, edi */ r_ecx = r_edi;
    /* 0051777e: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x517784u); call_ind(t); }
    /* 00517784: mov eax, dword ptr [edi + 0x430] */ r_eax = R32((u32)(r_edi+0x430u));
    /* 0051778a: mov edx, dword ptr [edi + 0x30] */ r_edx = R32((u32)(r_edi+0x30u));
    /* 0051778d: or edx, 0x1000000 */ {  u32 a = r_edx; u32 b = 0x1000000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00517793: movsx ebp, word ptr [edi + 0x32e] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_edi+0x32eu));
    /* 0051779a: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0051779d: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005177a0: mov dword ptr [edi + 0x430], eax */ W32((u32)(r_edi+0x430u), r_eax);
    /* 005177a6: mov dword ptr [edi + 0x30], edx */ W32((u32)(r_edi+0x30u), r_edx);
    /* 005177a9: cmp ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005177ac: je 0x5177db */ if (fZ) goto L_005177db;
L_005177ae:; BB(0x005177ae);
    /* 005177ae: mov eax, dword ptr [edi + 0x60] */ r_eax = R32((u32)(r_edi+0x60u));
    /* 005177b1: add eax, 0x8000 */ {  u32 a = r_eax; u32 b = 0x8000u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005177b6: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005177b8: mov dword ptr [edi + 0x3c8], edx */ W32((u32)(r_edi+0x3c8u), r_edx);
    /* 005177be: mov dword ptr [edi + 0x3d8], eax */ W32((u32)(r_edi+0x3d8u), r_eax);
    /* 005177c4: mov dword ptr [edi + 0x3dc], edx */ W32((u32)(r_edi+0x3dcu), r_edx);
    /* 005177ca: mov dword ptr [edi + 0x3d4], edx */ W32((u32)(r_edi+0x3d4u), r_edx);
    /* 005177d0: mov dword ptr [edi + 0x3e0], edx */ W32((u32)(r_edi+0x3e0u), r_edx);
    /* 005177d6: jmp 0x517728 */ goto L_00517728;
L_005177db:; BB(0x005177db);
    /* 005177db: mov dword ptr [edi + 0x3c8], 2 */ W32((u32)(r_edi+0x3c8u), 0x2u);
    /* 005177e5: mov dword ptr [edi + 0x3d4], 0 */ W32((u32)(r_edi+0x3d4u), 0x0u);
    /* 005177ef: jmp 0x517728 */ goto L_00517728;
}

void f_005175e0(void)
{
    FN_ENTER(0x005175e0);
    /* 005175e0: dec dword ptr [ebx + 0x43487] */ { u32 ad = (u32)(r_ebx+0x43487u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 005175e6: add byte ptr [ebx + 0x44d9f8c4], al */ { u32 ad = (u32)(r_ebx+0x44d9f8c4u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 005175ec: and al, 0x38 */ {  u32 a = (u8)r_eax; u32 b = 0x38u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005175ee: fadd dword ptr [edi + 0x3a0] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x3a0u));
    /* 005175f4: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 005175f8: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 005175fb: mov ecx, edi */ r_ecx = r_edi;
    /* 005175fd: call 0x5165f4 */ r_esp -= 4; W32(r_esp, 0x517602u); f_005165f4();
    /* 00517602: fstp dword ptr [edi + 0x434] */ W_F32((u32)(r_edi+0x434u), ST(0)); FPOP();
    /* 00517608: mov ecx, edi */ r_ecx = r_edi;
    /* 0051760a: call 0x51655c */ r_esp -= 4; W32(r_esp, 0x51760fu); f_0051655c();
    /* 0051760f: mov eax, dword ptr [edi + 0x398] */ r_eax = R32((u32)(r_edi+0x398u));
    /* 00517615: fld dword ptr [eax + 0x38] */ FPUSH(R_F32((u32)(r_eax+0x38u)));
    /* 00517618: fsub dword ptr [edi + 0x38] */ ST(0) = ST(0) - R_F32((u32)(r_edi+0x38u));
    /* 0051761b: fld dword ptr [eax + 0x40] */ FPUSH(R_F32((u32)(r_eax+0x40u)));
    /* 0051761e: fsub dword ptr [edi + 0x40] */ ST(0) = ST(0) - R_F32((u32)(r_edi+0x40u));
    /* 00517621: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 00517623: fmul qword ptr [0x920b90] */ ST(0) = ST(0) * R_F64((u32)(0x920b90u));
    /* 00517629: fdiv qword ptr [0x920b88] */ ST(0) = ST(0) / R_F64((u32)(0x920b88u));
    /* 0051762f: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 00517633: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 00517638: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0051763d: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 00517641: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 00517645: fistp dword ptr [edi + 0x60] */ W32((u32)(r_edi+0x60u), (u32)fx_int32(ST(0))); FPOP();
    /* 00517648: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 0051764c: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0051764e: mov ecx, edi */ r_ecx = r_edi;
    /* 00517650: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x517656u); call_ind(t); }
    /* 00517656: mov ecx, edi */ r_ecx = r_edi;
    /* 00517658: call 0x516674 */ r_esp -= 4; W32(r_esp, 0x51765du); f_00516674();
    /* 0051765d: jmp 0x517728 */ goto L_00517728;
L_00517728:; BB(0x00517728);
    /* 00517728: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0051772b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051772c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0051772d: ret 4 */ FN_RET(0x005175e0); r_esp += 8; return;
}

void f_00517660(void)
{
    FN_ENTER(0x00517660);
    /* 00517660: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00517662: mov eax, dword ptr [edi + 0x398] */ r_eax = R32((u32)(r_edi+0x398u));
    /* 00517668: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051766a: je 0x517763 */ if (fZ) goto L_00517763;
L_00517670:; BB(0x00517670);
    /* 00517670: mov eax, dword ptr [edi + 0x3d4] */ r_eax = R32((u32)(r_edi+0x3d4u));
    /* 00517676: cmp eax, 0x8000 */ {  u32 a = r_eax; u32 b = 0x8000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0051767b: jg 0x517688 */ if ((!fZ&&fS==fO)) goto L_00517688;
L_0051767d:; BB(0x0051767d);
    /* 0051767d: cmp eax, 0xffff8000 */ {  u32 a = r_eax; u32 b = 0xffff8000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00517682: jge 0x517728 */ if ((fS==fO)) goto L_00517728;
L_00517688:; BB(0x00517688);
    /* 00517688: movzx eax, word ptr [edi + 0x420] */ r_eax = (u32)R16((u32)(r_edi+0x420u));
    /* 0051768f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00517690: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x517695u); f_007b4d18();
    /* 00517695: mov ebp, eax */ r_ebp = r_eax;
    /* 00517697: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051769a: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051769c: je 0x51774b */ if (fZ) goto L_0051774b;
L_005176a2:; BB(0x005176a2);
    /* 005176a2: movzx edx, word ptr [edi + 0x394] */ r_edx = (u32)R16((u32)(r_edi+0x394u));
    /* 005176a9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005176aa: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005176ac: call 0x51a924 */ r_esp -= 4; W32(r_esp, 0x5176b1u); f_0051a924();
    /* 005176b1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005176b3: je 0x5176c0 */ if (fZ) goto L_005176c0;
L_005176b5:; BB(0x005176b5);
    /* 005176b5: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005176b7: mov ecx, edi */ r_ecx = r_edi;
    /* 005176b9: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5176beu); f_0051f62c();
    /* 005176be: jmp 0x517728 */ goto L_00517728;
L_005176c0:; BB(0x005176c0);
    /* 005176c0: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 005176c3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005176c4: mov ecx, edi */ r_ecx = r_edi;
    /* 005176c6: push dword ptr [0xa72d54] */ { u32 v = R32((u32)(0xa72d54u)); r_esp -= 4; W32(r_esp, v); }
    /* 005176cc: call 0x51f918 */ r_esp -= 4; W32(r_esp, 0x5176d1u); f_0051f918();
    /* 005176d1: mov edx, eax */ r_edx = r_eax;
    /* 005176d3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005176d5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005176d7: jle 0x517715 */ if ((fZ||fS!=fO)) goto L_00517715;
L_005176d9:; BB(0x005176d9);
    /* 005176d9: mov dword ptr [esp + 0x3c], ebp */ W32((u32)(r_esp+0x3cu), r_ebp);
    /* 005176dd: mov dword ptr [esp + 0x38], ebx */ W32((u32)(r_esp+0x38u), r_ebx);
    /* 005176e1: mov ebx, eax */ r_ebx = r_eax;
    /* 005176e3: mov dword ptr [esp + 0x34], esi */ W32((u32)(r_esp+0x34u), r_esi);
    /* 005176e7: mov esi, edx */ r_esi = r_edx;
L_005176e9:; BB(0x005176e9);
    /* 005176e9: movzx ebp, word ptr [esp + ebx*8] */ r_ebp = (u32)R16((u32)(r_esp+r_ebx*8));
    /* 005176ed: movzx eax, word ptr [edi + 0x394] */ r_eax = (u32)R16((u32)(r_edi+0x394u));
    /* 005176f4: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005176f7: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005176f9: je 0x517709 */ if (fZ) goto L_00517709;
L_005176fb:; BB(0x005176fb);
    /* 005176fb: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005176fc: mov ecx, dword ptr [esp + 0x40] */ r_ecx = R32((u32)(r_esp+0x40u));
    /* 00517700: call 0x51a924 */ r_esp -= 4; W32(r_esp, 0x517705u); f_0051a924();
    /* 00517705: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00517707: jne 0x517730 */ if (!fZ) goto L_00517730;
L_00517709:; BB(0x00517709);
    /* 00517709: cmp ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0051770b: jl 0x5176e9 */ if ((fS!=fO)) goto L_005176e9;
L_0051770d:; BB(0x0051770d);
    /* 0051770d: mov ebx, dword ptr [esp + 0x38] */ r_ebx = R32((u32)(r_esp+0x38u));
    /* 00517711: mov esi, dword ptr [esp + 0x34] */ r_esi = R32((u32)(r_esp+0x34u));
L_00517715:; BB(0x00517715);
    /* 00517715: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00517717: mov ecx, edi */ r_ecx = r_edi;
    /* 00517719: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x51771eu); f_0051f62c();
    /* 0051771e: mov dword ptr [edi + 0x45c], 0 */ W32((u32)(r_edi+0x45cu), 0x0u);
L_00517728:; BB(0x00517728);
    /* 00517728: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0051772b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051772c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0051772d: ret 4 */ FN_RET(0x00517660); r_esp += 8; return;
L_00517730:; BB(0x00517730);
    /* 00517730: mov ebx, dword ptr [esp + 0x38] */ r_ebx = R32((u32)(r_esp+0x38u));
    /* 00517734: mov esi, dword ptr [esp + 0x34] */ r_esi = R32((u32)(r_esp+0x34u));
    /* 00517738: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00517739: mov ecx, edi */ r_ecx = r_edi;
    /* 0051773b: call 0x520fcc */ r_esp -= 4; W32(r_esp, 0x517740u); f_00520fcc();
    /* 00517740: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00517742: mov ecx, edi */ r_ecx = r_edi;
    /* 00517744: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x517749u); f_0051f62c();
    /* 00517749: jmp 0x517728 */ goto L_00517728;
L_0051774b:; BB(0x0051774b);
    /* 0051774b: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0051774d: mov ecx, edi */ r_ecx = r_edi;
    /* 0051774f: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x517754u); f_0051f62c();
    /* 00517754: mov dword ptr [edi + 0x45c], 0 */ W32((u32)(r_edi+0x45cu), 0x0u);
    /* 0051775e: jmp 0x5176a2 */ goto L_005176a2;
L_00517763:; BB(0x00517763);
    /* 00517763: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00517765: mov ecx, edi */ r_ecx = r_edi;
    /* 00517767: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x51776cu); f_0051f62c();
    /* 0051776c: jmp 0x517728 */ goto L_00517728;
}

void f_005177f4(void) /* sub_5177F4 */
{
    FN_ENTER(0x005177f4);
    /* 005177f4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005177f5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005177f7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005177f9: call 0x5213d8 */ r_esp -= 4; W32(r_esp, 0x5177feu); f_005213d8();
    /* 005177fe: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 00517802: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x517807u); f_0082dcbc();
    /* 00517807: fmul dword ptr [0x920c1c] */ ST(0) = ST(0) * R_F32((u32)(0x920c1cu));
    /* 0051780d: fadd dword ptr [ebx + 0x39c] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x39cu));
    /* 00517813: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 00517817: fld dword ptr [ebx + 0x3c] */ FPUSH(R_F32((u32)(r_ebx+0x3cu)));
    /* 0051781a: fadd dword ptr [ebx + 0x454] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x454u));
    /* 00517820: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00517822: fstp dword ptr [ebx + 0x39c] */ W_F32((u32)(r_ebx+0x39cu), ST(0)); FPOP();
    /* 00517828: fstp dword ptr [ebx + 0x3a0] */ W_F32((u32)(r_ebx+0x3a0u), ST(0)); FPOP();
    /* 0051782e: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x517833u); f_0082ddd8();
    /* 00517833: fmul dword ptr [0x920c1c] */ ST(0) = ST(0) * R_F32((u32)(0x920c1cu));
    /* 00517839: fadd dword ptr [ebx + 0x3a4] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x3a4u));
    /* 0051783f: fstp dword ptr [ebx + 0x3a4] */ W_F32((u32)(r_ebx+0x3a4u), ST(0)); FPOP();
    /* 00517845: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00517846: ret 4 */ FN_RET(0x005177f4); r_esp += 8; return;
}

void f_0051784c(void) /* sub_51784C */
{
    FN_ENTER(0x0051784c);
    /* 0051784c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0051784d: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0051784f: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00517853: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00517856: je 0x517ad6 */ if (fZ) goto L_00517ad6;
L_0051785c:; BB(0x0051785c);
    /* 0051785c: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051785f: je 0x517a79 */ if (fZ) goto L_00517a79;
L_00517865:; BB(0x00517865);
    /* 00517865: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00517867: jne 0x517a66 */ if (!fZ) goto L_00517a66;
L_0051786d:; BB(0x0051786d);
    /* 0051786d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051786f: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x517874u); f_007aa094();
    /* 00517874: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00517876: call 0x521238 */ r_esp -= 4; W32(r_esp, 0x51787bu); f_00521238();
    /* 0051787b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051787d: jne 0x517886 */ if (!fZ) goto L_00517886;
L_0051787f:; BB(0x0051787f);
    /* 0051787f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00517881: call 0x520f68 */ r_esp -= 4; W32(r_esp, 0x517886u); f_00520f68();
L_00517886:; BB(0x00517886);
    /* 00517886: mov eax, dword ptr [ebp + 0x3c8] */ r_eax = R32((u32)(r_ebp+0x3c8u));
    /* 0051788c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051788e: je 0x5179d7 */ if (fZ) goto L_005179d7;
L_00517894:; BB(0x00517894);
    /* 00517894: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00517897: jne 0x5178db */ if (!fZ) goto L_005178db;
L_00517899:; BB(0x00517899);
    /* 00517899: mov eax, dword ptr [ebp + 0x3cc] */ r_eax = R32((u32)(r_ebp+0x3ccu));
    /* 0051789f: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005178a2: mov dword ptr [ebp + 0x3cc], eax */ W32((u32)(r_ebp+0x3ccu), r_eax);
    /* 005178a8: mov edx, dword ptr [0xa72d68] */ r_edx = R32((u32)(0xa72d68u));
    /* 005178ae: cmp eax, dword ptr [edx + 0x1c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x1cu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005178b1: jl 0x5178cf */ if ((fS!=fO)) goto L_005178cf;
L_005178b3:; BB(0x005178b3);
    /* 005178b3: mov dword ptr [ebp + 0x3cc], 0 */ W32((u32)(r_ebp+0x3ccu), 0x0u);
    /* 005178bd: mov eax, 2 */ r_eax = 0x2u;
    /* 005178c2: mov dword ptr [ebp + 0x3c8], eax */ W32((u32)(r_ebp+0x3c8u), r_eax);
    /* 005178c8: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
L_005178cf:; BB(0x005178cf);
    /* 005178cf: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005178d1: call 0x518f50 */ r_esp -= 4; W32(r_esp, 0x5178d6u); f_00518f50();
    /* 005178d6: jmp 0x517a50 */ goto L_00517a50;
L_005178db:; BB(0x005178db);
    /* 005178db: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005178de: jne 0x517a50 */ if (!fZ) goto L_00517a50;
L_005178e4:; BB(0x005178e4);
    /* 005178e4: push 0x41100000 */ { u32 v = 0x41100000u; r_esp -= 4; W32(r_esp, v); }
    /* 005178e9: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005178eb: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x5178f0u); f_007aaa30();
    /* 005178f0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005178f2: je 0x51798d */ if (fZ) goto L_0051798d;
L_005178f8:; BB(0x005178f8);
    /* 005178f8: mov ecx, dword ptr [ebp + 0x398] */ r_ecx = R32((u32)(r_ebp+0x398u));
    /* 005178fe: add dword ptr [ebp + 0x448], 1 */ { u32 ad = (u32)(r_ebp+0x448u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00517905: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00517907: je 0x517964 */ if (fZ) goto L_00517964;
L_00517909:; BB(0x00517909);
    /* 00517909: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 0051790e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0051790f: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00517911: call dword ptr [eax + 0x50] */ { u32 t = R32((u32)(r_eax+0x50u)); r_esp -= 4; W32(r_esp, 0x517914u); call_ind(t); }
    /* 00517914: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00517916: je 0x517964 */ if (fZ) goto L_00517964;
L_00517918:; BB(0x00517918);
    /* 00517918: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 0051791d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0051791e: mov ecx, dword ptr [ebp + 0x398] */ r_ecx = R32((u32)(r_ebp+0x398u));
    /* 00517924: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00517926: call dword ptr [edx + 0x5c] */ { u32 t = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, 0x517929u); call_ind(t); }
    /* 00517929: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0051792b: push 0x40400000 */ { u32 v = 0x40400000u; r_esp -= 4; W32(r_esp, v); }
    /* 00517930: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00517931: mov ecx, dword ptr [ebp + 0x398] */ r_ecx = R32((u32)(r_ebp+0x398u));
    /* 00517937: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00517939: call dword ptr [eax + 0x68] */ { u32 t = R32((u32)(r_eax+0x68u)); r_esp -= 4; W32(r_esp, 0x51793cu); call_ind(t); }
    /* 0051793c: call 0x520e6c */ r_esp -= 4; W32(r_esp, 0x517941u); f_00520e6c();
    /* 00517941: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00517943: je 0x517964 */ if (fZ) goto L_00517964;
L_00517945:; BB(0x00517945);
    /* 00517945: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00517947: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x51794cu); f_007751b0();
    /* 0051794c: fcomp dword ptr [0x920c0c] */ fx_compare(ST(0), R_F32((u32)(0x920c0cu))); FPOP();
    /* 00517952: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00517954: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00517955: jae 0x517964 */ if (!fC) goto L_00517964;
L_00517957:; BB(0x00517957);
    /* 00517957: push dword ptr [ebp + 0x398] */ { u32 v = R32((u32)(r_ebp+0x398u)); r_esp -= 4; W32(r_esp, v); }
    /* 0051795d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051795f: call 0x51fe88 */ r_esp -= 4; W32(r_esp, 0x517964u); f_0051fe88();
L_00517964:; BB(0x00517964);
    /* 00517964: push 0xdd */ { u32 v = 0xddu; r_esp -= 4; W32(r_esp, v); }
    /* 00517969: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051796b: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x517970u); f_007879b8();
    /* 00517970: mov ecx, eax */ r_ecx = r_eax;
    /* 00517972: lea eax, [ebp + 0x38] */ r_eax = (u32)(r_ebp+0x38u);
    /* 00517975: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00517977: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00517978: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00517979: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051797a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051797b: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x517980u); f_00814298();
    /* 00517980: push 0xfffffc00 */ { u32 v = 0xfffffc00u; r_esp -= 4; W32(r_esp, v); }
    /* 00517985: call 0x814680 */ r_esp -= 4; W32(r_esp, 0x51798au); f_00814680();
    /* 0051798a: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0051798d:; BB(0x0051798d);
    /* 0051798d: mov eax, dword ptr [ebp + 0xb0] */ r_eax = R32((u32)(r_ebp+0xb0u));
    /* 00517993: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00517995: je 0x5179ce */ if (fZ) goto L_005179ce;
L_00517997:; BB(0x00517997);
    /* 00517997: mov eax, dword ptr [ebp + 0x448] */ r_eax = R32((u32)(r_ebp+0x448u));
    /* 0051799d: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005179a0: jl 0x5179b8 */ if ((fS!=fO)) goto L_005179b8;
L_005179a2:; BB(0x005179a2);
    /* 005179a2: mov dword ptr [ebp + 0x448], 0 */ W32((u32)(r_ebp+0x448u), 0x0u);
    /* 005179ac: mov dword ptr [ebp + 0x3c8], 3 */ W32((u32)(r_ebp+0x3c8u), 0x3u);
    /* 005179b6: jmp 0x5179ce */ goto L_005179ce;
L_005179b8:; BB(0x005179b8);
    /* 005179b8: mov dword ptr [ebp + 0x3c8], 0 */ W32((u32)(r_ebp+0x3c8u), 0x0u);
    /* 005179c2: mov eax, 1 */ r_eax = 0x1u;
    /* 005179c7: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
L_005179ce:; BB(0x005179ce);
    /* 005179ce: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005179d0: call 0x518f50 */ r_esp -= 4; W32(r_esp, 0x5179d5u); f_00518f50();
    /* 005179d5: jmp 0x517a50 */ goto L_00517a50;
L_005179d7:; BB(0x005179d7);
    /* 005179d7: mov eax, dword ptr [ebp + 0x398] */ r_eax = R32((u32)(r_ebp+0x398u));
    /* 005179dd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005179df: je 0x5179e8 */ if (fZ) goto L_005179e8;
L_005179e1:; BB(0x005179e1);
    /* 005179e1: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005179e3: call 0x516598 */ r_esp -= 4; W32(r_esp, 0x5179e8u); f_00516598();
L_005179e8:; BB(0x005179e8);
    /* 005179e8: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005179ea: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x5179efu); f_00521410();
    /* 005179ef: mov ecx, dword ptr [ebp + 0x60] */ r_ecx = R32((u32)(r_ebp+0x60u));
    /* 005179f2: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x5179f7u); f_0082dcbc();
    /* 005179f7: mov ecx, dword ptr [ebp + 0x60] */ r_ecx = R32((u32)(r_ebp+0x60u));
    /* 005179fa: fstp dword ptr [ebp + 0x438] */ W_F32((u32)(r_ebp+0x438u), ST(0)); FPOP();
    /* 00517a00: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x517a05u); f_0082ddd8();
    /* 00517a05: fstp dword ptr [ebp + 0x440] */ W_F32((u32)(r_ebp+0x440u), ST(0)); FPOP();
    /* 00517a0b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00517a0d: call 0x5165b4 */ r_esp -= 4; W32(r_esp, 0x517a12u); f_005165b4();
    /* 00517a12: push dword ptr [ebp + 0x3a0] */ { u32 v = R32((u32)(r_ebp+0x3a0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00517a18: push dword ptr [ebp + 0x434] */ { u32 v = R32((u32)(r_ebp+0x434u)); r_esp -= 4; W32(r_esp, v); }
    /* 00517a1e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00517a20: call 0x5165f4 */ r_esp -= 4; W32(r_esp, 0x517a25u); f_005165f4();
    /* 00517a25: fstp dword ptr [ebp + 0x434] */ W_F32((u32)(r_ebp+0x434u), ST(0)); FPOP();
    /* 00517a2b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00517a2d: call 0x51655c */ r_esp -= 4; W32(r_esp, 0x517a32u); f_0051655c();
    /* 00517a32: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00517a34: call 0x5166a4 */ r_esp -= 4; W32(r_esp, 0x517a39u); f_005166a4();
    /* 00517a39: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00517a3b: je 0x517a50 */ if (fZ) goto L_00517a50;
L_00517a3d:; BB(0x00517a3d);
    /* 00517a3d: mov dword ptr [ebp + 0x3c8], 1 */ W32((u32)(r_ebp+0x3c8u), 0x1u);
    /* 00517a47: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00517a49: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
L_00517a50:; BB(0x00517a50);
    /* 00517a50: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00517a53: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00517a55: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x517a5bu); call_ind(t); }
    /* 00517a5b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00517a5d: call 0x516674 */ r_esp -= 4; W32(r_esp, 0x517a62u); f_00516674();
    /* 00517a62: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00517a63: ret 4 */ FN_RET(0x0051784c); r_esp += 8; return;
L_00517a66:; BB(0x00517a66);
    /* 00517a66: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00517a69: jne 0x517ac5 */ if (!fZ) goto L_00517ac5;
L_00517a6b:; BB(0x00517a6b);
    /* 00517a6b: mov dword ptr [ebp + 0x45c], 0 */ W32((u32)(r_ebp+0x45cu), 0x0u);
    /* 00517a75: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00517a76: ret 4 */ FN_RET(0x0051784c); r_esp += 8; return;
L_00517a79:; BB(0x00517a79);
    /* 00517a79: fld dword ptr [ebp + 0x3b4] */ FPUSH(R_F32((u32)(r_ebp+0x3b4u)));
    /* 00517a7f: fcomp dword ptr [0x920cc4] */ fx_compare(ST(0), R_F32((u32)(0x920cc4u))); FPOP();
    /* 00517a85: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00517a87: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00517a88: ja 0x517abc */ if ((!fC&&!fZ)) goto L_00517abc;
L_00517a8a:; BB(0x00517a8a);
    /* 00517a8a: mov eax, dword ptr [ebp + 0x3c8] */ r_eax = R32((u32)(r_ebp+0x3c8u));
    /* 00517a90: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00517a92: jl 0x517ac5 */ if ((fS!=fO)) goto L_00517ac5;
L_00517a94:; BB(0x00517a94);
    /* 00517a94: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00517a97: jg 0x517aa5 */ if ((!fZ&&fS==fO)) goto L_00517aa5;
L_00517a99:; BB(0x00517a99);
    /* 00517a99: mov eax, dword ptr [ebp + 0x398] */ r_eax = R32((u32)(r_ebp+0x398u));
    /* 00517a9f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00517aa1: jne 0x517ac5 */ if (!fZ) goto L_00517ac5;
L_00517aa3:; BB(0x00517aa3);
    /* 00517aa3: jmp 0x517ac9 */ goto L_00517ac9;
L_00517aa5:; BB(0x00517aa5);
    /* 00517aa5: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00517aa8: je 0x517ac5 */ if (fZ) goto L_00517ac5;
L_00517aaa:; BB(0x00517aaa);
    /* 00517aaa: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00517aad: jne 0x517ac5 */ if (!fZ) goto L_00517ac5;
L_00517aaf:; BB(0x00517aaf);
    /* 00517aaf: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00517ab1: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00517ab3: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x517ab8u); f_0051f62c();
    /* 00517ab8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00517ab9: ret 4 */ FN_RET(0x0051784c); r_esp += 8; return;
L_00517abc:; BB(0x00517abc);
    /* 00517abc: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00517abe: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00517ac0: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x517ac5u); f_0051f62c();
L_00517ac5:; BB(0x00517ac5);
    /* 00517ac5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00517ac6: ret 4 */ FN_RET(0x0051784c); r_esp += 8; return;
L_00517ac9:; BB(0x00517ac9);
    /* 00517ac9: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00517acb: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00517acd: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x517ad2u); f_0051f62c();
    /* 00517ad2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00517ad3: ret 4 */ FN_RET(0x0051784c); r_esp += 8; return;
L_00517ad6:; BB(0x00517ad6);
    /* 00517ad6: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00517ad9: mov eax, 1 */ r_eax = 0x1u;
    /* 00517ade: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 00517ae5: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00517ae7: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x517aedu); call_ind(t); }
    /* 00517aed: mov eax, dword ptr [ebp + 0x430] */ r_eax = R32((u32)(r_ebp+0x430u));
    /* 00517af3: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 00517af6: mov dword ptr [ebp + 0x45c], 1 */ W32((u32)(r_ebp+0x45cu), 0x1u);
    /* 00517b00: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00517b03: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00517b06: mov dword ptr [ebp + 0x430], eax */ W32((u32)(r_ebp+0x430u), r_eax);
    /* 00517b0c: and edx, 0xfeffffff */ {  u32 a = r_edx; u32 b = 0xfeffffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00517b12: mov dword ptr [ebp + 0x30], edx */ W32((u32)(r_ebp+0x30u), r_edx);
    /* 00517b15: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00517b17: mov dword ptr [ebp + 0x3cc], eax */ W32((u32)(r_ebp+0x3ccu), r_eax);
    /* 00517b1d: mov dword ptr [ebp + 0x3c8], eax */ W32((u32)(r_ebp+0x3c8u), r_eax);
    /* 00517b23: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00517b24: ret 4 */ FN_RET(0x0051784c); r_esp += 8; return;
}

void f_00517b28(void) /* sub_517B28 */
{
    FN_ENTER(0x00517b28);
    /* 00517b28: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00517b29: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00517b2a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00517b2b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00517b2c: sub esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00517b2f: mov esi, ecx */ r_esi = r_ecx;
    /* 00517b31: lea ebx, [esi + 0x3fc] */ r_ebx = (u32)(r_esi+0x3fcu);
    /* 00517b37: lea ebp, [esi + 0x408] */ r_ebp = (u32)(r_esi+0x408u);
    /* 00517b3d: mov eax, dword ptr [esp + 0x5c] */ r_eax = R32((u32)(r_esp+0x5cu));
    /* 00517b41: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00517b44: je 0x51803d */ if (fZ) goto L_0051803d;
L_00517b4a:; BB(0x00517b4a);
    /* 00517b4a: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00517b4d: je 0x517ef9 */ if (fZ) goto L_00517ef9;
L_00517b53:; BB(0x00517b53);
    /* 00517b53: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00517b55: jne 0x517ed7 */ if (!fZ) goto L_00517ed7;
L_00517b5b:; BB(0x00517b5b);
    /* 00517b5b: mov ecx, esi */ r_ecx = r_esi;
    /* 00517b5d: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x517b62u); f_007aa094();
    /* 00517b62: mov ecx, esi */ r_ecx = r_esi;
    /* 00517b64: call 0x521238 */ r_esp -= 4; W32(r_esp, 0x517b69u); f_00521238();
    /* 00517b69: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00517b6b: jne 0x517b84 */ if (!fZ) goto L_00517b84;
L_00517b6d:; BB(0x00517b6d);
    /* 00517b6d: push 0x43480000 */ { u32 v = 0x43480000u; r_esp -= 4; W32(r_esp, v); }
    /* 00517b72: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00517b74: mov ecx, esi */ r_ecx = r_esi;
    /* 00517b76: call dword ptr [eax + 0x1a8] */ { u32 t = R32((u32)(r_eax+0x1a8u)); r_esp -= 4; W32(r_esp, 0x517b7cu); call_ind(t); }
    /* 00517b7c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00517b7e: je 0x517fce */ if (fZ) goto L_00517fce;
L_00517b84:; BB(0x00517b84);
    /* 00517b84: mov ecx, esi */ r_ecx = r_esi;
    /* 00517b86: call 0x518128 */ r_esp -= 4; W32(r_esp, 0x517b8bu); f_00518128();
    /* 00517b8b: mov ecx, esi */ r_ecx = r_esi;
    /* 00517b8d: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x517b92u); f_00521410();
    /* 00517b92: mov eax, dword ptr [esi + 0x300] */ r_eax = R32((u32)(r_esi+0x300u));
    /* 00517b98: mov edi, dword ptr [esi + 0x304] */ r_edi = R32((u32)(r_esi+0x304u));
    /* 00517b9e: mov dword ptr [esi + 0x3fc], eax */ W32((u32)(r_esi+0x3fcu), r_eax);
    /* 00517ba4: mov eax, dword ptr [esi + 0x308] */ r_eax = R32((u32)(r_esi+0x308u));
    /* 00517baa: mov dword ptr [esi + 0x400], edi */ W32((u32)(r_esi+0x400u), r_edi);
    /* 00517bb0: mov dword ptr [esi + 0x404], eax */ W32((u32)(r_esi+0x404u), r_eax);
    /* 00517bb6: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00517bb8: mov edx, ebp */ r_edx = r_ebp;
    /* 00517bba: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x517bbfu); f_0082f9c4();
    /* 00517bbf: mov eax, dword ptr [esi + 0x3cc] */ r_eax = R32((u32)(r_esi+0x3ccu));
    /* 00517bc5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00517bc7: jne 0x517cc6 */ if (!fZ) goto L_00517cc6;
L_00517bcd:; BB(0x00517bcd);
    /* 00517bcd: fld dword ptr [0x920c00] */ FPUSH(R_F32((u32)(0x920c00u)));
    /* 00517bd3: fcom dword ptr [esi + 0x438] */ fx_compare(ST(0), R_F32((u32)(r_esi+0x438u))); 
    /* 00517bd9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00517bdb: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00517bdc: je 0x517fd8 */ if (fZ) goto L_00517fd8;
L_00517be2:; BB(0x00517be2);
    /* 00517be2: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00517be4: lea ebx, [esi + 0x438] */ r_ebx = (u32)(r_esi+0x438u);
    /* 00517bea: lea edi, [esi + 0x3a8] */ r_edi = (u32)(r_esi+0x3a8u);
    /* 00517bf0: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00517bf2: mov edx, edi */ r_edx = r_edi;
    /* 00517bf4: call 0x82f9e0 */ r_esp -= 4; W32(r_esp, 0x517bf9u); f_0082f9e0();
    /* 00517bf9: fcomp dword ptr [0x920bfc] */ fx_compare(ST(0), R_F32((u32)(0x920bfcu))); FPOP();
    /* 00517bff: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00517c01: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00517c02: jb 0x517c3f */ if (fC) goto L_00517c3f;
L_00517c04:; BB(0x00517c04);
    /* 00517c04: fld dword ptr [esi + 0x3a8] */ FPUSH(R_F32((u32)(r_esi+0x3a8u)));
    /* 00517c0a: mov eax, dword ptr [esi + 0x3a8] */ r_eax = R32((u32)(r_esi+0x3a8u));
    /* 00517c10: mov ebx, dword ptr [esi + 0x3ac] */ r_ebx = R32((u32)(r_esi+0x3acu));
    /* 00517c16: mov edi, dword ptr [esi + 0x3b0] */ r_edi = R32((u32)(r_esi+0x3b0u));
    /* 00517c1c: mov dword ptr [esi + 0x438], eax */ W32((u32)(r_esi+0x438u), r_eax);
    /* 00517c22: mov dword ptr [esi + 0x43c], ebx */ W32((u32)(r_esi+0x43cu), r_ebx);
    /* 00517c28: mov dword ptr [esi + 0x3cc], 1 */ W32((u32)(r_esi+0x3ccu), 0x1u);
    /* 00517c32: mov dword ptr [esi + 0x440], edi */ W32((u32)(r_esi+0x440u), r_edi);
    /* 00517c38: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00517c3a: jmp 0x517d40 */ goto L_00517d40;
L_00517c3f:; BB(0x00517c3f);
    /* 00517c3f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00517c40: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00517c41: call 0x7829cc */ r_esp -= 4; W32(r_esp, 0x517c46u); f_007829cc();
    /* 00517c46: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00517c49: fld dword ptr [esi + 0x438] */ FPUSH(R_F32((u32)(r_esi+0x438u)));
    /* 00517c4f: fld dword ptr [esi + 0x440] */ FPUSH(R_F32((u32)(r_esi+0x440u)));
    /* 00517c55: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00517c57: je 0x517c5f */ if (fZ) goto L_00517c5f;
L_00517c59:; BB(0x00517c59);
    /* 00517c59: fchs  */ ST(0) = -ST(0);
    /* 00517c5b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00517c5d: jmp 0x517c63 */ goto L_00517c63;
L_00517c5f:; BB(0x00517c5f);
    /* 00517c5f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00517c61: fchs  */ ST(0) = -ST(0);
L_00517c63:; BB(0x00517c63);
    /* 00517c63: fld dword ptr [0x920bf8] */ FPUSH(R_F32((u32)(0x920bf8u)));
    /* 00517c69: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 00517c6b: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00517c6d: fadd dword ptr [esi + 0x3f0] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x3f0u));
    /* 00517c73: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00517c75: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00517c77: fadd dword ptr [esi + 0x3f8] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x3f8u));
    /* 00517c7d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00517c7f: fst dword ptr [esi + 0x3f0] */ W_F32((u32)(r_esi+0x3f0u), ST(0));
    /* 00517c85: fstp dword ptr [esi + 0x438] */ W_F32((u32)(r_esi+0x438u), ST(0)); FPOP();
    /* 00517c8b: fstp dword ptr [esi + 0x3f8] */ W_F32((u32)(r_esi+0x3f8u), ST(0)); FPOP();
    /* 00517c91: mov edi, dword ptr [esi + 0x3f8] */ r_edi = R32((u32)(r_esi+0x3f8u));
    /* 00517c97: mov dword ptr [esi + 0x3f4], 0 */ W32((u32)(r_esi+0x3f4u), 0x0u);
    /* 00517ca1: mov dword ptr [esi + 0x440], edi */ W32((u32)(r_esi+0x440u), r_edi);
    /* 00517ca7: mov dword ptr [esi + 0x43c], 0 */ W32((u32)(r_esi+0x43cu), 0x0u);
    /* 00517cb1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00517cb2: call 0x782868 */ r_esp -= 4; W32(r_esp, 0x517cb7u); f_00782868();
    /* 00517cb7: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00517cb9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00517cbc: fld dword ptr [esi + 0x438] */ FPUSH(R_F32((u32)(r_esi+0x438u)));
    /* 00517cc2: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00517cc4: jmp 0x517d40 */ goto L_00517d40;
L_00517cc6:; BB(0x00517cc6);
    /* 00517cc6: mov eax, dword ptr [esi + 0x3a8] */ r_eax = R32((u32)(r_esi+0x3a8u));
    /* 00517ccc: mov ebx, dword ptr [esi + 0x3ac] */ r_ebx = R32((u32)(r_esi+0x3acu));
    /* 00517cd2: mov edi, dword ptr [esi + 0x3b0] */ r_edi = R32((u32)(r_esi+0x3b0u));
    /* 00517cd8: mov ecx, dword ptr [esi + 0x3d4] */ r_ecx = R32((u32)(r_esi+0x3d4u));
    /* 00517cde: mov dword ptr [esi + 0x438], eax */ W32((u32)(r_esi+0x438u), r_eax);
    /* 00517ce4: mov dword ptr [esi + 0x43c], ebx */ W32((u32)(r_esi+0x43cu), r_ebx);
    /* 00517cea: mov dword ptr [esi + 0x440], edi */ W32((u32)(r_esi+0x440u), r_edi);
    /* 00517cf0: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x517cf5u); f_0082dcbc();
    /* 00517cf5: fld dword ptr [0x920c04] */ FPUSH(R_F32((u32)(0x920c04u)));
    /* 00517cfb: mov eax, dword ptr [esi + 0x3d4] */ r_eax = R32((u32)(r_esi+0x3d4u));
    /* 00517d01: fld dword ptr [esi + 0x3b0] */ FPUSH(R_F32((u32)(r_esi+0x3b0u)));
    /* 00517d07: fld dword ptr [esi + 0x3a8] */ FPUSH(R_F32((u32)(r_esi+0x3a8u)));
    /* 00517d0d: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00517d0f: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 00517d11: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00517d13: fstp dword ptr [esi + 0x408] */ W_F32((u32)(r_esi+0x408u), ST(0)); FPOP();
    /* 00517d19: mov dword ptr [esi + 0x40c], 0 */ W32((u32)(r_esi+0x40cu), 0x0u);
    /* 00517d23: add eax, 0x600 */ {  u32 a = r_eax; u32 b = 0x600u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00517d28: mov dword ptr [esi + 0x3d4], eax */ W32((u32)(r_esi+0x3d4u), r_eax);
    /* 00517d2e: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00517d30: fchs  */ ST(0) = -ST(0);
    /* 00517d32: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00517d34: fstp dword ptr [esi + 0x410] */ W_F32((u32)(r_esi+0x410u), ST(0)); FPOP();
    /* 00517d3a: fld dword ptr [esi + 0x438] */ FPUSH(R_F32((u32)(r_esi+0x438u)));
L_00517d40:; BB(0x00517d40);
    /* 00517d40: fld dword ptr [esi + 0x444] */ FPUSH(R_F32((u32)(r_esi+0x444u)));
    /* 00517d46: mov ebx, dword ptr [esi + 0x358] */ r_ebx = R32((u32)(r_esi+0x358u));
    /* 00517d4c: fld dword ptr [ebx + 4] */ FPUSH(R_F32((u32)(r_ebx+0x4u)));
    /* 00517d4f: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00517d51: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00517d53: mov ebx, dword ptr [ebx + 4] */ r_ebx = R32((u32)(r_ebx+0x4u));
    /* 00517d56: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00517d57: jae 0x517d6b */ if (!fC) goto L_00517d6b;
L_00517d59:; BB(0x00517d59);
    /* 00517d59: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00517d5b: fld dword ptr [0x920bf4] */ FPUSH(R_F32((u32)(0x920bf4u)));
    /* 00517d61: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00517d63: fst dword ptr [esi + 0x444] */ W_F32((u32)(r_esi+0x444u), ST(0));
    /* 00517d69: jmp 0x517d73 */ goto L_00517d73;
L_00517d6b:; BB(0x00517d6b);
    /* 00517d6b: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00517d6d: mov dword ptr [esi + 0x444], ebx */ W32((u32)(r_esi+0x444u), r_ebx);
L_00517d73:; BB(0x00517d73);
    /* 00517d73: fld dword ptr [esi + 0x440] */ FPUSH(R_F32((u32)(r_esi+0x440u)));
    /* 00517d79: fmul dword ptr [esi + 0x444] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0x444u));
    /* 00517d7f: fld dword ptr [esi + 0x3fc] */ FPUSH(R_F32((u32)(r_esi+0x3fcu)));
    /* 00517d85: fld dword ptr [esi + 0x404] */ FPUSH(R_F32((u32)(r_esi+0x404u)));
    /* 00517d8b: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00517d8d: fmulp st(4) */ ST(4) = ST(4) * ST(0); FPOP();
    /* 00517d8f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00517d91: fst dword ptr [esi + 0x3f8] */ W_F32((u32)(r_esi+0x3f8u), ST(0));
    /* 00517d97: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00517d99: fst dword ptr [esi + 0x3f0] */ W_F32((u32)(r_esi+0x3f0u), ST(0));
    /* 00517d9f: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00517da1: fst dword ptr [esi + 0x3fc] */ W_F32((u32)(r_esi+0x3fcu), ST(0));
    /* 00517da7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00517da9: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00517dab: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00517dad: fstp dword ptr [esi + 0x404] */ W_F32((u32)(r_esi+0x404u), ST(0)); FPOP();
    /* 00517db3: mov dword ptr [esi + 0x3f4], edi */ W32((u32)(r_esi+0x3f4u), r_edi);
    /* 00517db9: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00517dbc: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00517dbf: mov eax, dword ptr [esi + 0x400] */ r_eax = R32((u32)(r_esi+0x400u));
    /* 00517dc5: mov edx, ebp */ r_edx = r_ebp;
    /* 00517dc7: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00517dcb: mov ebx, dword ptr [esi + 0x404] */ r_ebx = R32((u32)(r_esi+0x404u));
    /* 00517dd1: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 00517dd5: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x517ddau); f_0082ebac();
    /* 00517dda: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 00517ddd: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 00517de1: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
    /* 00517de5: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 00517de9: lea edx, [esi + 0x38] */ r_edx = (u32)(r_esi+0x38u);
    /* 00517dec: mov dword ptr [esp + 0x10], ebx */ W32((u32)(r_esp+0x10u), r_ebx);
    /* 00517df0: mov dword ptr [esp + 0x14], ebp */ W32((u32)(r_esp+0x14u), r_ebp);
    /* 00517df4: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 00517df8: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x517dfdu); f_0082f9c4();
    /* 00517dfd: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 00517e05: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 00517e09: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00517e0a: call 0x7828e4 */ r_esp -= 4; W32(r_esp, 0x517e0fu); f_007828e4();
    /* 00517e0f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00517e10: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00517e13: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 00517e17: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 00517e1b: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00517e1f: mov ecx, esi */ r_ecx = r_esi;
    /* 00517e21: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00517e24: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00517e28: call 0x516e98 */ r_esp -= 4; W32(r_esp, 0x517e2du); f_00516e98();
    /* 00517e2d: push dword ptr [esi + 0x3a0] */ { u32 v = R32((u32)(r_esi+0x3a0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00517e33: push dword ptr [esi + 0x400] */ { u32 v = R32((u32)(r_esi+0x400u)); r_esp -= 4; W32(r_esp, v); }
    /* 00517e39: mov ecx, esi */ r_ecx = r_esi;
    /* 00517e3b: call 0x5165f4 */ r_esp -= 4; W32(r_esp, 0x517e40u); f_005165f4();
    /* 00517e40: fst dword ptr [esi + 0x434] */ W_F32((u32)(r_esi+0x434u), ST(0));
    /* 00517e46: fstp dword ptr [esi + 0x400] */ W_F32((u32)(r_esi+0x400u), ST(0)); FPOP();
    /* 00517e4c: mov ecx, esi */ r_ecx = r_esi;
    /* 00517e4e: call 0x51655c */ r_esp -= 4; W32(r_esp, 0x517e53u); f_0051655c();
    /* 00517e53: fld dword ptr [esi + 0x438] */ FPUSH(R_F32((u32)(r_esi+0x438u)));
    /* 00517e59: fld dword ptr [esi + 0x440] */ FPUSH(R_F32((u32)(r_esi+0x440u)));
    /* 00517e5f: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 00517e61: fmul qword ptr [0x920b80] */ ST(0) = ST(0) * R_F64((u32)(0x920b80u));
    /* 00517e67: fdiv qword ptr [0x920b78] */ ST(0) = ST(0) / R_F64((u32)(0x920b78u));
    /* 00517e6d: fnstcw word ptr [esp + 0x38] */ W16((u32)(r_esp+0x38u), fcw);
    /* 00517e71: movzx eax, word ptr [esp + 0x38] */ r_eax = (u32)R16((u32)(r_esp+0x38u));
    /* 00517e76: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00517e7b: mov dword ptr [esp + 0x40], eax */ W32((u32)(r_esp+0x40u), r_eax);
    /* 00517e7f: fldcw word ptr [esp + 0x40] */ fcw = R16((u32)(r_esp+0x40u));
    /* 00517e83: fistp dword ptr [esi + 0x60] */ W32((u32)(r_esi+0x60u), (u32)fx_int32(ST(0))); FPOP();
    /* 00517e86: fldcw word ptr [esp + 0x38] */ fcw = R16((u32)(r_esp+0x38u));
    /* 00517e8a: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00517e8c: mov ecx, esi */ r_ecx = r_esi;
    /* 00517e8e: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x517e94u); call_ind(t); }
    /* 00517e94: fld dword ptr [esi + 0x3fc] */ FPUSH(R_F32((u32)(r_esi+0x3fcu)));
    /* 00517e9a: fsub dword ptr [esi + 0x38] */ ST(0) = ST(0) - R_F32((u32)(r_esi+0x38u));
    /* 00517e9d: fld dword ptr [esi + 0x400] */ FPUSH(R_F32((u32)(r_esi+0x400u)));
    /* 00517ea3: fsub dword ptr [esi + 0x434] */ ST(0) = ST(0) - R_F32((u32)(r_esi+0x434u));
    /* 00517ea9: fld dword ptr [esi + 0x404] */ FPUSH(R_F32((u32)(r_esi+0x404u)));
    /* 00517eaf: fsub dword ptr [esi + 0x40] */ ST(0) = ST(0) - R_F32((u32)(r_esi+0x40u));
    /* 00517eb2: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00517eb4: fstp dword ptr [esi + 0x3fc] */ W_F32((u32)(r_esi+0x3fcu), ST(0)); FPOP();
    /* 00517eba: fstp dword ptr [esi + 0x400] */ W_F32((u32)(r_esi+0x400u), ST(0)); FPOP();
    /* 00517ec0: fstp dword ptr [esi + 0x404] */ W_F32((u32)(r_esi+0x404u), ST(0)); FPOP();
    /* 00517ec6: mov ecx, esi */ r_ecx = r_esi;
    /* 00517ec8: call 0x516674 */ r_esp -= 4; W32(r_esp, 0x517ecdu); f_00516674();
    /* 00517ecd: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00517ed0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00517ed1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00517ed2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00517ed3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00517ed4: ret 4 */ FN_RET(0x00517b28); r_esp += 8; return;
L_00517ed7:; BB(0x00517ed7);
    /* 00517ed7: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00517eda: jne 0x517fce */ if (!fZ) goto L_00517fce;
L_00517ee0:; BB(0x00517ee0);
    /* 00517ee0: mov eax, dword ptr [esi + 0x358] */ r_eax = R32((u32)(r_esi+0x358u));
    /* 00517ee6: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00517ee9: mov dword ptr [esi + 0x444], edx */ W32((u32)(r_esi+0x444u), r_edx);
    /* 00517eef: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00517ef2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00517ef3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00517ef4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00517ef5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00517ef6: ret 4 */ FN_RET(0x00517b28); r_esp += 8; return;
L_00517ef9:; BB(0x00517ef9);
    /* 00517ef9: fld dword ptr [esi + 0x3b4] */ FPUSH(R_F32((u32)(r_esi+0x3b4u)));
    /* 00517eff: fcom dword ptr [0x920cc4] */ fx_compare(ST(0), R_F32((u32)(0x920cc4u))); 
    /* 00517f05: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00517f07: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00517f08: jbe 0x517f1f */ if ((fC||fZ)) goto L_00517f1f;
L_00517f0a:; BB(0x00517f0a);
    /* 00517f0a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00517f0c: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00517f0e: mov ecx, esi */ r_ecx = r_esi;
    /* 00517f10: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x517f15u); f_0051f62c();
    /* 00517f15: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00517f18: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00517f19: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00517f1a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00517f1b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00517f1c: ret 4 */ FN_RET(0x00517b28); r_esp += 8; return;
L_00517f1f:; BB(0x00517f1f);
    /* 00517f1f: mov eax, dword ptr [esi + 0x398] */ r_eax = R32((u32)(r_esi+0x398u));
    /* 00517f25: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00517f27: je 0x517f0a */ if (fZ) goto L_00517f0a;
L_00517f29:; BB(0x00517f29);
    /* 00517f29: fcomp dword ptr [0x920bf0] */ fx_compare(ST(0), R_F32((u32)(0x920bf0u))); FPOP();
    /* 00517f2f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00517f31: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00517f32: jae 0x517fce */ if (!fC) goto L_00517fce;
L_00517f38:; BB(0x00517f38);
    /* 00517f38: movzx eax, word ptr [esi + 0x420] */ r_eax = (u32)R16((u32)(r_esi+0x420u));
    /* 00517f3f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00517f40: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x517f45u); f_007b4d18();
    /* 00517f45: mov edi, eax */ r_edi = r_eax;
    /* 00517f47: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00517f4a: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00517f4c: je 0x518025 */ if (fZ) goto L_00518025;
L_00517f52:; BB(0x00517f52);
    /* 00517f52: movzx edx, word ptr [esi + 0x394] */ r_edx = (u32)R16((u32)(r_esi+0x394u));
    /* 00517f59: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00517f5a: mov ecx, edi */ r_ecx = r_edi;
    /* 00517f5c: call 0x51a924 */ r_esp -= 4; W32(r_esp, 0x517f61u); f_0051a924();
    /* 00517f61: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00517f63: je 0x517f78 */ if (fZ) goto L_00517f78;
L_00517f65:; BB(0x00517f65);
    /* 00517f65: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00517f67: mov ecx, esi */ r_ecx = r_esi;
    /* 00517f69: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x517f6eu); f_0051f62c();
    /* 00517f6e: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00517f71: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00517f72: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00517f73: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00517f74: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00517f75: ret 4 */ FN_RET(0x00517b28); r_esp += 8; return;
L_00517f78:; BB(0x00517f78);
    /* 00517f78: lea edx, [esp + 0x18] */ r_edx = (u32)(r_esp+0x18u);
    /* 00517f7c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00517f7d: mov ecx, esi */ r_ecx = r_esi;
    /* 00517f7f: push dword ptr [0xa72d54] */ { u32 v = R32((u32)(0xa72d54u)); r_esp -= 4; W32(r_esp, v); }
    /* 00517f85: call 0x51f918 */ r_esp -= 4; W32(r_esp, 0x517f8au); f_0051f918();
    /* 00517f8a: mov ebp, eax */ r_ebp = r_eax;
    /* 00517f8c: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00517f8e: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00517f90: jle 0x517fbb */ if ((fZ||fS!=fO)) goto L_00517fbb;
L_00517f92:; BB(0x00517f92);
    /* 00517f92: mov dword ptr [esp + 0x44], edi */ W32((u32)(r_esp+0x44u), r_edi);
L_00517f96:; BB(0x00517f96);
    /* 00517f96: movzx edi, word ptr [esp + ebx*8 + 0x18] */ r_edi = (u32)R16((u32)(r_esp+r_ebx*8+0x18u));
    /* 00517f9b: movzx edx, word ptr [esi + 0x394] */ r_edx = (u32)R16((u32)(r_esi+0x394u));
    /* 00517fa2: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00517fa5: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00517fa7: je 0x517fb7 */ if (fZ) goto L_00517fb7;
L_00517fa9:; BB(0x00517fa9);
    /* 00517fa9: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00517faa: mov ecx, dword ptr [esp + 0x48] */ r_ecx = R32((u32)(r_esp+0x48u));
    /* 00517fae: call 0x51a924 */ r_esp -= 4; W32(r_esp, 0x517fb3u); f_0051a924();
    /* 00517fb3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00517fb5: jne 0x51800a */ if (!fZ) goto L_0051800a;
L_00517fb7:; BB(0x00517fb7);
    /* 00517fb7: cmp ebx, ebp */ {  u32 a = r_ebx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00517fb9: jl 0x517f96 */ if ((fS!=fO)) goto L_00517f96;
L_00517fbb:; BB(0x00517fbb);
    /* 00517fbb: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00517fbd: mov ecx, esi */ r_ecx = r_esi;
    /* 00517fbf: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x517fc4u); f_0051f62c();
    /* 00517fc4: mov dword ptr [esi + 0x45c], 0 */ W32((u32)(r_esi+0x45cu), 0x0u);
L_00517fce:; BB(0x00517fce);
    /* 00517fce: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00517fd1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00517fd2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00517fd3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00517fd4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00517fd5: ret 4 */ FN_RET(0x00517b28); r_esp += 8; return;
L_00517fd8:; BB(0x00517fd8);
    /* 00517fd8: fcom dword ptr [esi + 0x440] */ fx_compare(ST(0), R_F32((u32)(r_esi+0x440u))); 
    /* 00517fde: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00517fe0: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00517fe1: jne 0x517be2 */ if (!fZ) goto L_00517be2;
L_00517fe7:; BB(0x00517fe7);
    /* 00517fe7: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00517fe9: mov ecx, dword ptr [esi + 0x60] */ r_ecx = R32((u32)(r_esi+0x60u));
    /* 00517fec: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x517ff1u); f_0082dcbc();
    /* 00517ff1: mov ecx, dword ptr [esi + 0x60] */ r_ecx = R32((u32)(r_esi+0x60u));
    /* 00517ff4: fstp dword ptr [esi + 0x438] */ W_F32((u32)(r_esi+0x438u), ST(0)); FPOP();
    /* 00517ffa: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x517fffu); f_0082ddd8();
    /* 00517fff: fst dword ptr [esi + 0x440] */ W_F32((u32)(r_esi+0x440u), ST(0));
    /* 00518005: jmp 0x517be2 */ goto L_00517be2;
L_0051800a:; BB(0x0051800a);
    /* 0051800a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0051800b: mov ecx, esi */ r_ecx = r_esi;
    /* 0051800d: call 0x520fcc */ r_esp -= 4; W32(r_esp, 0x518012u); f_00520fcc();
    /* 00518012: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00518014: mov ecx, esi */ r_ecx = r_esi;
    /* 00518016: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x51801bu); f_0051f62c();
    /* 0051801b: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0051801e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0051801f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00518020: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00518021: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00518022: ret 4 */ FN_RET(0x00517b28); r_esp += 8; return;
L_00518025:; BB(0x00518025);
    /* 00518025: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00518027: mov ecx, esi */ r_ecx = r_esi;
    /* 00518029: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x51802eu); f_0051f62c();
    /* 0051802e: mov dword ptr [esi + 0x45c], 0 */ W32((u32)(r_esi+0x45cu), 0x0u);
    /* 00518038: jmp 0x517f52 */ goto L_00517f52;
L_0051803d:; BB(0x0051803d);
    /* 0051803d: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 0051803f: mov eax, 1 */ r_eax = 0x1u;
    /* 00518044: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
    /* 0051804b: mov ecx, esi */ r_ecx = r_esi;
    /* 0051804d: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x518053u); call_ind(t); }
    /* 00518053: mov eax, dword ptr [esi + 0x430] */ r_eax = R32((u32)(r_esi+0x430u));
    /* 00518059: mov edx, dword ptr [esi + 0x30] */ r_edx = R32((u32)(r_esi+0x30u));
    /* 0051805c: fld dword ptr [esi + 0x438] */ FPUSH(R_F32((u32)(r_esi+0x438u)));
    /* 00518062: fmul dword ptr [esi + 0x444] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0x444u));
    /* 00518068: fld dword ptr [esi + 0x440] */ FPUSH(R_F32((u32)(r_esi+0x440u)));
    /* 0051806e: fmul dword ptr [esi + 0x444] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0x444u));
    /* 00518074: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00518076: fstp dword ptr [esi + 0x3f0] */ W_F32((u32)(r_esi+0x3f0u), ST(0)); FPOP();
    /* 0051807c: fstp dword ptr [esi + 0x3f8] */ W_F32((u32)(r_esi+0x3f8u), ST(0)); FPOP();
    /* 00518082: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00518085: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00518088: mov dword ptr [esi + 0x3f4], 0 */ W32((u32)(r_esi+0x3f4u), 0x0u);
    /* 00518092: or edx, 0x1000000 */ {  u32 a = r_edx; u32 b = 0x1000000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00518098: mov dword ptr [esi + 0x430], eax */ W32((u32)(r_esi+0x430u), r_eax);
    /* 0051809e: mov dword ptr [esi + 0x30], edx */ W32((u32)(r_esi+0x30u), r_edx);
    /* 005180a1: lea ebp, [esi + 0x438] */ r_ebp = (u32)(r_esi+0x438u);
    /* 005180a7: lea ebx, [esi + 0x3a8] */ r_ebx = (u32)(r_esi+0x3a8u);
    /* 005180ad: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005180ae: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005180af: call 0x7829cc */ r_esp -= 4; W32(r_esp, 0x5180b4u); f_007829cc();
    /* 005180b4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005180b7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005180b9: je 0x5180c7 */ if (fZ) goto L_005180c7;
L_005180bb:; BB(0x005180bb);
    /* 005180bb: mov dword ptr [esi + 0x3d4], 0x8000 */ W32((u32)(r_esi+0x3d4u), 0x8000u);
    /* 005180c5: jmp 0x5180d1 */ goto L_005180d1;
L_005180c7:; BB(0x005180c7);
    /* 005180c7: mov dword ptr [esi + 0x3d4], 0 */ W32((u32)(r_esi+0x3d4u), 0x0u);
L_005180d1:; BB(0x005180d1);
    /* 005180d1: fld dword ptr [esi + 0x434] */ FPUSH(R_F32((u32)(r_esi+0x434u)));
    /* 005180d7: fsub dword ptr [esi + 0x3c] */ ST(0) = ST(0) - R_F32((u32)(r_esi+0x3cu));
    /* 005180da: fstp dword ptr [esi + 0x400] */ W_F32((u32)(r_esi+0x400u), ST(0)); FPOP();
    /* 005180e0: mov dword ptr [esi + 0x3cc], 0 */ W32((u32)(r_esi+0x3ccu), 0x0u);
    /* 005180ea: mov dword ptr [esi + 0x408], 0 */ W32((u32)(r_esi+0x408u), 0x0u);
    /* 005180f4: mov dword ptr [esi + 0x40c], 0 */ W32((u32)(r_esi+0x40cu), 0x0u);
    /* 005180fe: mov dword ptr [esi + 0x410], 0 */ W32((u32)(r_esi+0x410u), 0x0u);
    /* 00518108: mov dword ptr [esi + 0x3fc], 0 */ W32((u32)(r_esi+0x3fcu), 0x0u);
    /* 00518112: mov dword ptr [esi + 0x404], 0 */ W32((u32)(r_esi+0x404u), 0x0u);
    /* 0051811c: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0051811f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00518120: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00518121: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00518122: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00518123: ret 4 */ FN_RET(0x00517b28); r_esp += 8; return;
}

