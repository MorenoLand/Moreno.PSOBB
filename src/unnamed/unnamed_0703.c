#include "protos.h"

void f_0070300c(void) /* sub_70300C */
{
    FN_ENTER(0x0070300c);
    /* 0070300c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0070300d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0070300f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00703011: call 0x7071d8 */ r_esp -= 4; W32(r_esp, 0x703016u); f_007071d8();
    /* 00703016: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00703018: call 0x706fb0 */ r_esp -= 4; W32(r_esp, 0x70301du); f_00706fb0();
    /* 0070301d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0070301f: call 0x706e54 */ r_esp -= 4; W32(r_esp, 0x703024u); f_00706e54();
    /* 00703024: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00703026: je 0x703040 */ if (fZ) goto L_00703040;
L_00703028:; BB(0x00703028);
    /* 00703028: call 0x707664 */ r_esp -= 4; W32(r_esp, 0x70302du); f_00707664();
    /* 0070302d: mov dword ptr [ebx + 0xb4], 6 */ W32((u32)(r_ebx+0xb4u), 0x6u);
    /* 00703037: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00703039: call 0x7028d4 */ r_esp -= 4; W32(r_esp, 0x70303eu); f_007028d4();
    /* 0070303e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0070303f: ret  */ FN_RET(0x0070300c); r_esp += 4; return;
L_00703040:; BB(0x00703040);
    /* 00703040: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00703042: call 0x706e6c */ r_esp -= 4; W32(r_esp, 0x703047u); f_00706e6c();
    /* 00703047: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00703049: je 0x703057 */ if (fZ) goto L_00703057;
L_0070304b:; BB(0x0070304b);
    /* 0070304b: call 0x707678 */ r_esp -= 4; W32(r_esp, 0x703050u); f_00707678();
    /* 00703050: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00703052: call 0x702488 */ r_esp -= 4; W32(r_esp, 0x703057u); f_00702488();
L_00703057:; BB(0x00703057);
    /* 00703057: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00703058: ret  */ FN_RET(0x0070300c); r_esp += 4; return;
}

void f_0070305c(void) /* sub_70305C */
{
    FN_ENTER(0x0070305c);
    /* 0070305c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0070305d: mov esi, ecx */ r_esi = r_ecx;
    /* 0070305f: mov eax, 1 */ r_eax = 0x1u;
    /* 00703064: mov word ptr [esi + 0xc6], ax */ W16((u32)(r_esi+0xc6u), (u16)r_eax);
    /* 0070306b: mov eax, dword ptr [esi + 0xb8] */ r_eax = R32((u32)(r_esi+0xb8u));
    /* 00703071: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00703073: jne 0x7030cd */ if (!fZ) goto L_007030cd;
L_00703075:; BB(0x00703075);
    /* 00703075: mov ecx, esi */ r_ecx = r_esi;
    /* 00703077: call 0x7071d8 */ r_esp -= 4; W32(r_esp, 0x70307cu); f_007071d8();
    /* 0070307c: mov ecx, esi */ r_ecx = r_esi;
    /* 0070307e: call 0x706fb0 */ r_esp -= 4; W32(r_esp, 0x703083u); f_00706fb0();
    /* 00703083: mov ecx, esi */ r_ecx = r_esi;
    /* 00703085: call 0x706e54 */ r_esp -= 4; W32(r_esp, 0x70308au); f_00706e54();
    /* 0070308a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070308c: je 0x7030a6 */ if (fZ) goto L_007030a6;
L_0070308e:; BB(0x0070308e);
    /* 0070308e: call 0x707664 */ r_esp -= 4; W32(r_esp, 0x703093u); f_00707664();
    /* 00703093: mov ecx, esi */ r_ecx = r_esi;
    /* 00703095: call 0x7028a8 */ r_esp -= 4; W32(r_esp, 0x70309au); f_007028a8();
    /* 0070309a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070309c: mov eax, 0 */ r_eax = 0x0u;
    /* 007030a1: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 007030a4: jmp 0x7030d9 */ goto L_007030d9;
L_007030a6:; BB(0x007030a6);
    /* 007030a6: mov ecx, esi */ r_ecx = r_esi;
    /* 007030a8: call 0x706e6c */ r_esp -= 4; W32(r_esp, 0x7030adu); f_00706e6c();
    /* 007030ad: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007030af: je 0x703140 */ if (fZ) goto L_00703140;
L_007030b5:; BB(0x007030b5);
    /* 007030b5: call 0x707678 */ r_esp -= 4; W32(r_esp, 0x7030bau); f_00707678();
    /* 007030ba: mov dword ptr [esi + 0xa4], 0 */ W32((u32)(r_esi+0xa4u), 0x0u);
    /* 007030c4: mov ecx, esi */ r_ecx = r_esi;
    /* 007030c6: call 0x702488 */ r_esp -= 4; W32(r_esp, 0x7030cbu); f_00702488();
    /* 007030cb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007030cc: ret  */ FN_RET(0x0070305c); r_esp += 4; return;
L_007030cd:; BB(0x007030cd);
    /* 007030cd: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007030d0: jne 0x703140 */ if (!fZ) goto L_00703140;
L_007030d2:; BB(0x007030d2);
    /* 007030d2: mov ecx, esi */ r_ecx = r_esi;
    /* 007030d4: call 0x702688 */ r_esp -= 4; W32(r_esp, 0x7030d9u); f_00702688();
L_007030d9:; BB(0x007030d9);
    /* 007030d9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007030db: je 0x703140 */ if (fZ) goto L_00703140;
L_007030dd:; BB(0x007030dd);
    /* 007030dd: mov eax, dword ptr [esi + 0x8c] */ r_eax = R32((u32)(r_esi+0x8cu));
    /* 007030e3: mov dword ptr [esi + 0xa4], 1 */ W32((u32)(r_esi+0xa4u), 0x1u);
    /* 007030ed: cmp eax, -0x3c */ {  u32 a = r_eax; u32 b = 0xffffffc4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007030f0: je 0x703142 */ if (fZ) goto L_00703142;
L_007030f2:; BB(0x007030f2);
    /* 007030f2: mov eax, dword ptr [0xa96ef4] */ r_eax = R32((u32)(0xa96ef4u));
    /* 007030f7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007030f9: jne 0x70311b */ if (!fZ) goto L_0070311b;
L_007030fb:; BB(0x007030fb);
    /* 007030fb: mov ecx, esi */ r_ecx = r_esi;
    /* 007030fd: call 0x702f88 */ r_esp -= 4; W32(r_esp, 0x703102u); f_00702f88();
    /* 00703102: lea ecx, [esi + 0xc4] */ r_ecx = (u32)(r_esi+0xc4u);
    /* 00703108: call 0x708134 */ r_esp -= 4; W32(r_esp, 0x70310du); f_00708134();
    /* 0070310d: mov eax, 3 */ r_eax = 0x3u;
    /* 00703112: mov word ptr [esi + 0xc6], ax */ W16((u32)(r_esi+0xc6u), (u16)r_eax);
    /* 00703119: jmp 0x703139 */ goto L_00703139;
L_0070311b:; BB(0x0070311b);
    /* 0070311b: lea ecx, [esi + 0xc4] */ r_ecx = (u32)(r_esi+0xc4u);
    /* 00703121: call 0x708134 */ r_esp -= 4; W32(r_esp, 0x703126u); f_00708134();
    /* 00703126: mov eax, 4 */ r_eax = 0x4u;
    /* 0070312b: mov word ptr [esi + 0xc6], ax */ W16((u32)(r_esi+0xc6u), (u16)r_eax);
    /* 00703132: mov ecx, esi */ r_ecx = r_esi;
    /* 00703134: call 0x702d34 */ r_esp -= 4; W32(r_esp, 0x703139u); f_00702d34();
L_00703139:; BB(0x00703139);
    /* 00703139: mov ecx, esi */ r_ecx = r_esi;
    /* 0070313b: call 0x7028d4 */ r_esp -= 4; W32(r_esp, 0x703140u); f_007028d4();
L_00703140:; BB(0x00703140);
    /* 00703140: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00703141: ret  */ FN_RET(0x0070305c); r_esp += 4; return;
L_00703142:; BB(0x00703142);
    /* 00703142: mov dword ptr [esi + 0xb4], 0x14 */ W32((u32)(r_esi+0xb4u), 0x14u);
    /* 0070314c: jmp 0x703139 */ goto L_00703139;
}

void f_00703150(void) /* sub_703150 */
{
    FN_ENTER(0x00703150);
    /* 00703150: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00703151: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00703153: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00703155: call 0x706fb0 */ r_esp -= 4; W32(r_esp, 0x70315au); f_00706fb0();
    /* 0070315a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0070315c: call 0x706e54 */ r_esp -= 4; W32(r_esp, 0x703161u); f_00706e54();
    /* 00703161: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00703163: je 0x70317e */ if (fZ) goto L_0070317e;
L_00703165:; BB(0x00703165);
    /* 00703165: call 0x707664 */ r_esp -= 4; W32(r_esp, 0x70316au); f_00707664();
    /* 0070316a: mov eax, dword ptr [ebp + 0xb0] */ r_eax = R32((u32)(r_ebp+0xb0u));
    /* 00703170: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00703173: je 0x703197 */ if (fZ) goto L_00703197;
L_00703175:; BB(0x00703175);
    /* 00703175: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00703177: call 0x706c94 */ r_esp -= 4; W32(r_esp, 0x70317cu); f_00706c94();
    /* 0070317c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0070317d: ret  */ FN_RET(0x00703150); r_esp += 4; return;
L_0070317e:; BB(0x0070317e);
    /* 0070317e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00703180: call 0x706e6c */ r_esp -= 4; W32(r_esp, 0x703185u); f_00706e6c();
    /* 00703185: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00703187: je 0x703195 */ if (fZ) goto L_00703195;
L_00703189:; BB(0x00703189);
    /* 00703189: call 0x707678 */ r_esp -= 4; W32(r_esp, 0x70318eu); f_00707678();
    /* 0070318e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00703190: call 0x702488 */ r_esp -= 4; W32(r_esp, 0x703195u); f_00702488();
L_00703195:; BB(0x00703195);
    /* 00703195: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00703196: ret  */ FN_RET(0x00703150); r_esp += 4; return;
L_00703197:; BB(0x00703197);
    /* 00703197: mov dword ptr [ebp + 0xb4], 0x14 */ W32((u32)(r_ebp+0xb4u), 0x14u);
    /* 007031a1: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007031a3: mov dword ptr [ebp + 0x8c], 0xffffffc4 */ W32((u32)(r_ebp+0x8cu), 0xffffffc4u);
    /* 007031ad: call 0x7028d4 */ r_esp -= 4; W32(r_esp, 0x7031b2u); f_007028d4();
    /* 007031b2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007031b3: ret  */ FN_RET(0x00703150); r_esp += 4; return;
}

void f_007031b4(void) /* sub_7031B4 */
{
    FN_ENTER(0x007031b4);
    /* 007031b4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007031b5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007031b6: mov esi, ecx */ r_esi = r_ecx;
    /* 007031b8: mov ecx, esi */ r_ecx = r_esi;
    /* 007031ba: call 0x7071d8 */ r_esp -= 4; W32(r_esp, 0x7031bfu); f_007071d8();
    /* 007031bf: mov ecx, esi */ r_ecx = r_esi;
    /* 007031c1: call 0x706e54 */ r_esp -= 4; W32(r_esp, 0x7031c6u); f_00706e54();
    /* 007031c6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007031c8: je 0x703218 */ if (fZ) goto L_00703218;
L_007031ca:; BB(0x007031ca);
    /* 007031ca: call 0x707664 */ r_esp -= 4; W32(r_esp, 0x7031cfu); f_00707664();
    /* 007031cf: mov eax, dword ptr [esi + 0x20] */ r_eax = R32((u32)(r_esi+0x20u));
    /* 007031d2: mov ecx, dword ptr [esi + eax*4 + 0x24] */ r_ecx = R32((u32)(r_esi+r_eax*4+0x24u));
    /* 007031d6: call 0x700f98 */ r_esp -= 4; W32(r_esp, 0x7031dbu); f_00700f98();
    /* 007031db: mov ebp, eax */ r_ebp = r_eax;
    /* 007031dd: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007031de: mov ecx, esi */ r_ecx = r_esi;
    /* 007031e0: call 0x707280 */ r_esp -= 4; W32(r_esp, 0x7031e5u); f_00707280();
    /* 007031e5: mov word ptr [esi + 0xc6], ax */ W16((u32)(r_esi+0xc6u), (u16)r_eax);
    /* 007031ec: movsx edx, bp */ r_edx = (u32)(i32)(i16)(u16)r_ebp;
    /* 007031ef: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007031f0: mov ecx, esi */ r_ecx = r_esi;
    /* 007031f2: call 0x707294 */ r_esp -= 4; W32(r_esp, 0x7031f7u); f_00707294();
    /* 007031f7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007031f8: mov dword ptr [esi + 0xb4], eax */ W32((u32)(r_esi+0xb4u), r_eax);
    /* 007031fe: call 0x707e54 */ r_esp -= 4; W32(r_esp, 0x703203u); f_00707e54();
    /* 00703203: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00703204: mov dword ptr [esi + 0x104], 0 */ W32((u32)(r_esi+0x104u), 0x0u);
    /* 0070320e: mov ecx, esi */ r_ecx = r_esi;
    /* 00703210: call 0x7028d4 */ r_esp -= 4; W32(r_esp, 0x703215u); f_007028d4();
    /* 00703215: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00703216: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00703217: ret  */ FN_RET(0x007031b4); r_esp += 4; return;
L_00703218:; BB(0x00703218);
    /* 00703218: mov ecx, esi */ r_ecx = r_esi;
    /* 0070321a: call 0x706e6c */ r_esp -= 4; W32(r_esp, 0x70321fu); f_00706e6c();
    /* 0070321f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00703221: je 0x70322f */ if (fZ) goto L_0070322f;
L_00703223:; BB(0x00703223);
    /* 00703223: call 0x707678 */ r_esp -= 4; W32(r_esp, 0x703228u); f_00707678();
    /* 00703228: mov ecx, esi */ r_ecx = r_esi;
    /* 0070322a: call 0x706da4 */ r_esp -= 4; W32(r_esp, 0x70322fu); f_00706da4();
L_0070322f:; BB(0x0070322f);
    /* 0070322f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00703230: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00703231: ret  */ FN_RET(0x007031b4); r_esp += 4; return;
}

void f_00703234(void) /* sub_703234 */
{
    FN_ENTER(0x00703234);
    /* 00703234: mov dword ptr [0xa96e8c], 0x3f800000 */ W32((u32)(0xa96e8cu), 0x3f800000u);
    /* 0070323e: mov dword ptr [0xa96e90], 0x41000000 */ W32((u32)(0xa96e90u), 0x41000000u);
    /* 00703248: mov dword ptr [0xa96e94], 0x3fc00000 */ W32((u32)(0xa96e94u), 0x3fc00000u);
    /* 00703252: ret  */ FN_RET(0x00703234); r_esp += 4; return;
}

void f_00703254(void) /* sub_703254 */
{
    FN_ENTER(0x00703254);
    /* 00703254: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00703255: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00703256: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00703258: mov dword ptr [0xa96ed4], eax */ W32((u32)(0xa96ed4u), r_eax);
    /* 0070325d: mov dword ptr [0xa96ed0], eax */ W32((u32)(0xa96ed0u), r_eax);
    /* 00703262: mov dword ptr [0xa96ecc], eax */ W32((u32)(0xa96eccu), r_eax);
    /* 00703267: mov dword ptr [0xa96ec8], eax */ W32((u32)(0xa96ec8u), r_eax);
    /* 0070326c: mov dword ptr [0xa96ebc], eax */ W32((u32)(0xa96ebcu), r_eax);
    /* 00703271: mov dword ptr [0xa96eb8], eax */ W32((u32)(0xa96eb8u), r_eax);
    /* 00703276: mov dword ptr [0xa96eb4], eax */ W32((u32)(0xa96eb4u), r_eax);
    /* 0070327b: mov dword ptr [0xa96eb0], eax */ W32((u32)(0xa96eb0u), r_eax);
    /* 00703280: mov dword ptr [0xa96eac], eax */ W32((u32)(0xa96eacu), r_eax);
    /* 00703285: mov dword ptr [0xa96ea8], eax */ W32((u32)(0xa96ea8u), r_eax);
    /* 0070328a: mov dword ptr [0xa96ea4], eax */ W32((u32)(0xa96ea4u), r_eax);
    /* 0070328f: mov dword ptr [0xa96ea0], eax */ W32((u32)(0xa96ea0u), r_eax);
    /* 00703294: mov dword ptr [0xa96e9c], eax */ W32((u32)(0xa96e9cu), r_eax);
    /* 00703299: mov dword ptr [0xa96e98], eax */ W32((u32)(0xa96e98u), r_eax);
    /* 0070329e: mov eax, dword ptr [0xa9cd44] */ r_eax = R32((u32)(0xa9cd44u));
    /* 007032a3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007032a5: jl 0x7032b3 */ if ((fS!=fO)) goto L_007032b3;
L_007032a7:; BB(0x007032a7);
    /* 007032a7: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007032aa: jge 0x7032b3 */ if ((fS==fO)) goto L_007032b3;
L_007032ac:; BB(0x007032ac);
    /* 007032ac: mov dword ptr [0xa96ef4], eax */ W32((u32)(0xa96ef4u), r_eax);
    /* 007032b1: jmp 0x7032bd */ goto L_007032bd;
L_007032b3:; BB(0x007032b3);
    /* 007032b3: mov dword ptr [0xa96ef4], 0 */ W32((u32)(0xa96ef4u), 0x0u);
L_007032bd:; BB(0x007032bd);
    /* 007032bd: call 0x705eb8 */ r_esp -= 4; W32(r_esp, 0x7032c2u); f_00705eb8();
    /* 007032c2: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 007032c7: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x7032ccu); f_008581c5();
    /* 007032cc: mov dword ptr [0xa96ef0], eax */ W32((u32)(0xa96ef0u), r_eax);
    /* 007032d1: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 007032d6: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x7032dbu); f_008581c5();
    /* 007032db: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007032de: mov edx, dword ptr [0xa96ef0] */ r_edx = R32((u32)(0xa96ef0u));
    /* 007032e4: mov dword ptr [0xa96eec], eax */ W32((u32)(0xa96eecu), r_eax);
    /* 007032e9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007032eb: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 007032ed: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 007032f0: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 007032f3: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 007032f6: mov dword ptr [edx + 0x10], eax */ W32((u32)(r_edx+0x10u), r_eax);
    /* 007032f9: mov dword ptr [edx + 0x14], eax */ W32((u32)(r_edx+0x14u), r_eax);
    /* 007032fc: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 007032ff: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 00703302: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 00703305: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 00703308: mov dword ptr [edx + 0x28], eax */ W32((u32)(r_edx+0x28u), r_eax);
    /* 0070330b: mov dword ptr [edx + 0x2c], eax */ W32((u32)(r_edx+0x2cu), r_eax);
    /* 0070330e: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
    /* 00703311: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 00703314: mov dword ptr [edx + 0x38], eax */ W32((u32)(r_edx+0x38u), r_eax);
    /* 00703317: mov dword ptr [edx + 0x3c], eax */ W32((u32)(r_edx+0x3cu), r_eax);
    /* 0070331a: mov dword ptr [edx + 0x40], eax */ W32((u32)(r_edx+0x40u), r_eax);
    /* 0070331d: mov dword ptr [edx + 0x44], eax */ W32((u32)(r_edx+0x44u), r_eax);
    /* 00703320: mov dword ptr [edx + 0x48], eax */ W32((u32)(r_edx+0x48u), r_eax);
    /* 00703323: mov dword ptr [edx + 0x4c], eax */ W32((u32)(r_edx+0x4cu), r_eax);
    /* 00703326: mov dword ptr [edx + 0x50], eax */ W32((u32)(r_edx+0x50u), r_eax);
    /* 00703329: mov dword ptr [edx + 0x54], eax */ W32((u32)(r_edx+0x54u), r_eax);
    /* 0070332c: mov dword ptr [edx + 0x58], eax */ W32((u32)(r_edx+0x58u), r_eax);
    /* 0070332f: mov dword ptr [edx + 0x5c], eax */ W32((u32)(r_edx+0x5cu), r_eax);
    /* 00703332: mov dword ptr [edx + 0x60], eax */ W32((u32)(r_edx+0x60u), r_eax);
    /* 00703335: mov dword ptr [edx + 0x64], eax */ W32((u32)(r_edx+0x64u), r_eax);
    /* 00703338: mov dword ptr [edx + 0x68], eax */ W32((u32)(r_edx+0x68u), r_eax);
    /* 0070333b: mov dword ptr [edx + 0x6c], eax */ W32((u32)(r_edx+0x6cu), r_eax);
    /* 0070333e: mov dword ptr [edx + 0x70], eax */ W32((u32)(r_edx+0x70u), r_eax);
    /* 00703341: mov dword ptr [edx + 0x74], eax */ W32((u32)(r_edx+0x74u), r_eax);
    /* 00703344: mov dword ptr [edx + 0x78], eax */ W32((u32)(r_edx+0x78u), r_eax);
    /* 00703347: mov dword ptr [edx + 0x7c], eax */ W32((u32)(r_edx+0x7cu), r_eax);
    /* 0070334a: mov edx, dword ptr [0xa96eec] */ r_edx = R32((u32)(0xa96eecu));
    /* 00703350: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00703352: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00703354: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00703357: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 0070335a: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 0070335d: mov dword ptr [edx + 0x10], eax */ W32((u32)(r_edx+0x10u), r_eax);
    /* 00703360: mov dword ptr [edx + 0x14], eax */ W32((u32)(r_edx+0x14u), r_eax);
    /* 00703363: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 00703366: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 00703369: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 0070336c: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 0070336f: mov dword ptr [edx + 0x28], eax */ W32((u32)(r_edx+0x28u), r_eax);
    /* 00703372: mov dword ptr [edx + 0x2c], eax */ W32((u32)(r_edx+0x2cu), r_eax);
    /* 00703375: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
    /* 00703378: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 0070337b: mov dword ptr [edx + 0x38], eax */ W32((u32)(r_edx+0x38u), r_eax);
    /* 0070337e: mov dword ptr [edx + 0x3c], eax */ W32((u32)(r_edx+0x3cu), r_eax);
    /* 00703381: mov dword ptr [edx + 0x40], eax */ W32((u32)(r_edx+0x40u), r_eax);
    /* 00703384: mov dword ptr [edx + 0x44], eax */ W32((u32)(r_edx+0x44u), r_eax);
    /* 00703387: mov dword ptr [edx + 0x48], eax */ W32((u32)(r_edx+0x48u), r_eax);
    /* 0070338a: mov dword ptr [edx + 0x4c], eax */ W32((u32)(r_edx+0x4cu), r_eax);
    /* 0070338d: mov dword ptr [edx + 0x50], eax */ W32((u32)(r_edx+0x50u), r_eax);
    /* 00703390: mov dword ptr [edx + 0x54], eax */ W32((u32)(r_edx+0x54u), r_eax);
    /* 00703393: mov dword ptr [edx + 0x58], eax */ W32((u32)(r_edx+0x58u), r_eax);
    /* 00703396: mov dword ptr [edx + 0x5c], eax */ W32((u32)(r_edx+0x5cu), r_eax);
    /* 00703399: mov dword ptr [edx + 0x60], eax */ W32((u32)(r_edx+0x60u), r_eax);
    /* 0070339c: mov dword ptr [edx + 0x64], eax */ W32((u32)(r_edx+0x64u), r_eax);
    /* 0070339f: mov dword ptr [edx + 0x68], eax */ W32((u32)(r_edx+0x68u), r_eax);
    /* 007033a2: mov dword ptr [edx + 0x6c], eax */ W32((u32)(r_edx+0x6cu), r_eax);
    /* 007033a5: mov dword ptr [edx + 0x70], eax */ W32((u32)(r_edx+0x70u), r_eax);
    /* 007033a8: mov dword ptr [edx + 0x74], eax */ W32((u32)(r_edx+0x74u), r_eax);
    /* 007033ab: mov dword ptr [edx + 0x78], eax */ W32((u32)(r_edx+0x78u), r_eax);
    /* 007033ae: mov dword ptr [edx + 0x7c], eax */ W32((u32)(r_edx+0x7cu), r_eax);
    /* 007033b1: push 0x240 */ { u32 v = 0x240u; r_esp -= 4; W32(r_esp, v); }
    /* 007033b6: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x7033bbu); f_008581c5();
    /* 007033bb: mov dword ptr [0xa96ee8], eax */ W32((u32)(0xa96ee8u), r_eax);
    /* 007033c0: push 0x120 */ { u32 v = 0x120u; r_esp -= 4; W32(r_esp, v); }
    /* 007033c5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007033c7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007033c8: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x7033cdu); f_0086b688();
    /* 007033cd: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 007033cf: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x7033d4u); f_008581c5();
    /* 007033d4: mov edx, dword ptr [0xa96ee8] */ r_edx = R32((u32)(0xa96ee8u));
    /* 007033da: mov dword ptr [0xa96ee4], eax */ W32((u32)(0xa96ee4u), r_eax);
    /* 007033df: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 007033e4: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 007033e6: mov ecx, dword ptr [0xa96ee4] */ r_ecx = R32((u32)(0xa96ee4u));
    /* 007033ec: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 007033ee: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007033f0: mov word ptr [edx], ax */ W16((u32)(r_edx), (u16)r_eax);
    /* 007033f3: mov edx, dword ptr [0xa96ee8] */ r_edx = R32((u32)(0xa96ee8u));
    /* 007033f9: mov ecx, dword ptr [0xa96ee4] */ r_ecx = R32((u32)(0xa96ee4u));
    /* 007033ff: add edx, 0x30 */ {  u32 a = r_edx; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00703402: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 00703405: mov edx, dword ptr [0xa96ee4] */ r_edx = R32((u32)(0xa96ee4u));
    /* 0070340b: mov edx, dword ptr [edx + 4] */ r_edx = R32((u32)(r_edx+0x4u));
    /* 0070340e: mov word ptr [edx], ax */ W16((u32)(r_edx), (u16)r_eax);
    /* 00703411: mov edx, dword ptr [0xa96ee8] */ r_edx = R32((u32)(0xa96ee8u));
    /* 00703417: mov ecx, dword ptr [0xa96ee4] */ r_ecx = R32((u32)(0xa96ee4u));
    /* 0070341d: add edx, 0x60 */ {  u32 a = r_edx; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00703420: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 00703423: mov edx, dword ptr [0xa96ee4] */ r_edx = R32((u32)(0xa96ee4u));
    /* 00703429: mov edx, dword ptr [edx + 8] */ r_edx = R32((u32)(r_edx+0x8u));
    /* 0070342c: mov word ptr [edx], ax */ W16((u32)(r_edx), (u16)r_eax);
    /* 0070342f: mov edx, dword ptr [0xa96ee8] */ r_edx = R32((u32)(0xa96ee8u));
    /* 00703435: mov ecx, dword ptr [0xa96ee4] */ r_ecx = R32((u32)(0xa96ee4u));
    /* 0070343b: add edx, 0x90 */ {  u32 a = r_edx; u32 b = 0x90u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00703441: mov dword ptr [ecx + 0xc], edx */ W32((u32)(r_ecx+0xcu), r_edx);
    /* 00703444: mov edx, dword ptr [0xa96ee4] */ r_edx = R32((u32)(0xa96ee4u));
    /* 0070344a: mov edx, dword ptr [edx + 0xc] */ r_edx = R32((u32)(r_edx+0xcu));
    /* 0070344d: mov word ptr [edx], ax */ W16((u32)(r_edx), (u16)r_eax);
    /* 00703450: mov edx, dword ptr [0xa96ee8] */ r_edx = R32((u32)(0xa96ee8u));
    /* 00703456: add edx, 0xc0 */ {  u32 a = r_edx; u32 b = 0xc0u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0070345c: mov ecx, dword ptr [0xa96ee4] */ r_ecx = R32((u32)(0xa96ee4u));
    /* 00703462: mov dword ptr [ecx + 0x10], edx */ W32((u32)(r_ecx+0x10u), r_edx);
    /* 00703465: mov edx, dword ptr [0xa96ee4] */ r_edx = R32((u32)(0xa96ee4u));
    /* 0070346b: mov edx, dword ptr [edx + 0x10] */ r_edx = R32((u32)(r_edx+0x10u));
    /* 0070346e: mov word ptr [edx], ax */ W16((u32)(r_edx), (u16)r_eax);
    /* 00703471: mov edx, dword ptr [0xa96ee8] */ r_edx = R32((u32)(0xa96ee8u));
    /* 00703477: mov ecx, dword ptr [0xa96ee4] */ r_ecx = R32((u32)(0xa96ee4u));
    /* 0070347d: add edx, 0xf0 */ {  u32 a = r_edx; u32 b = 0xf0u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00703483: mov dword ptr [ecx + 0x14], edx */ W32((u32)(r_ecx+0x14u), r_edx);
    /* 00703486: mov edx, dword ptr [0xa96ee4] */ r_edx = R32((u32)(0xa96ee4u));
    /* 0070348c: mov edx, dword ptr [edx + 0x14] */ r_edx = R32((u32)(r_edx+0x14u));
    /* 0070348f: mov word ptr [edx], ax */ W16((u32)(r_edx), (u16)r_eax);
    /* 00703492: mov edx, dword ptr [0xa96ee8] */ r_edx = R32((u32)(0xa96ee8u));
    /* 00703498: mov ecx, dword ptr [0xa96ee4] */ r_ecx = R32((u32)(0xa96ee4u));
    /* 0070349e: add edx, 0x120 */ {  u32 a = r_edx; u32 b = 0x120u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007034a4: mov dword ptr [ecx + 0x18], edx */ W32((u32)(r_ecx+0x18u), r_edx);
    /* 007034a7: mov edx, dword ptr [0xa96ee4] */ r_edx = R32((u32)(0xa96ee4u));
    /* 007034ad: mov edx, dword ptr [edx + 0x18] */ r_edx = R32((u32)(r_edx+0x18u));
    /* 007034b0: mov word ptr [edx], ax */ W16((u32)(r_edx), (u16)r_eax);
    /* 007034b3: mov edx, dword ptr [0xa96ee8] */ r_edx = R32((u32)(0xa96ee8u));
    /* 007034b9: add edx, 0x150 */ {  u32 a = r_edx; u32 b = 0x150u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007034bf: mov ecx, dword ptr [0xa96ee4] */ r_ecx = R32((u32)(0xa96ee4u));
    /* 007034c5: mov dword ptr [ecx + 0x1c], edx */ W32((u32)(r_ecx+0x1cu), r_edx);
    /* 007034c8: mov edx, dword ptr [0xa96ee4] */ r_edx = R32((u32)(0xa96ee4u));
    /* 007034ce: mov edx, dword ptr [edx + 0x1c] */ r_edx = R32((u32)(r_edx+0x1cu));
    /* 007034d1: mov word ptr [edx], ax */ W16((u32)(r_edx), (u16)r_eax);
    /* 007034d4: mov edx, dword ptr [0xa96ee8] */ r_edx = R32((u32)(0xa96ee8u));
    /* 007034da: mov ecx, dword ptr [0xa96ee4] */ r_ecx = R32((u32)(0xa96ee4u));
    /* 007034e0: add edx, 0x180 */ {  u32 a = r_edx; u32 b = 0x180u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007034e6: mov dword ptr [ecx + 0x20], edx */ W32((u32)(r_ecx+0x20u), r_edx);
    /* 007034e9: mov edx, dword ptr [0xa96ee4] */ r_edx = R32((u32)(0xa96ee4u));
    /* 007034ef: mov edx, dword ptr [edx + 0x20] */ r_edx = R32((u32)(r_edx+0x20u));
    /* 007034f2: mov word ptr [edx], ax */ W16((u32)(r_edx), (u16)r_eax);
    /* 007034f5: mov edx, dword ptr [0xa96ee8] */ r_edx = R32((u32)(0xa96ee8u));
    /* 007034fb: mov ecx, dword ptr [0xa96ee4] */ r_ecx = R32((u32)(0xa96ee4u));
    /* 00703501: add edx, 0x1b0 */ {  u32 a = r_edx; u32 b = 0x1b0u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00703507: mov dword ptr [ecx + 0x24], edx */ W32((u32)(r_ecx+0x24u), r_edx);
    /* 0070350a: mov edx, dword ptr [0xa96ee4] */ r_edx = R32((u32)(0xa96ee4u));
    /* 00703510: mov edx, dword ptr [edx + 0x24] */ r_edx = R32((u32)(r_edx+0x24u));
    /* 00703513: mov word ptr [edx], ax */ W16((u32)(r_edx), (u16)r_eax);
    /* 00703516: mov edx, dword ptr [0xa96ee8] */ r_edx = R32((u32)(0xa96ee8u));
    /* 0070351c: add edx, 0x1e0 */ {  u32 a = r_edx; u32 b = 0x1e0u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00703522: mov ecx, dword ptr [0xa96ee4] */ r_ecx = R32((u32)(0xa96ee4u));
    /* 00703528: mov dword ptr [ecx + 0x28], edx */ W32((u32)(r_ecx+0x28u), r_edx);
    /* 0070352b: mov edx, dword ptr [0xa96ee4] */ r_edx = R32((u32)(0xa96ee4u));
    /* 00703531: mov edx, dword ptr [edx + 0x28] */ r_edx = R32((u32)(r_edx+0x28u));
    /* 00703534: mov word ptr [edx], ax */ W16((u32)(r_edx), (u16)r_eax);
    /* 00703537: mov edx, dword ptr [0xa96ee8] */ r_edx = R32((u32)(0xa96ee8u));
    /* 0070353d: mov ecx, dword ptr [0xa96ee4] */ r_ecx = R32((u32)(0xa96ee4u));
    /* 00703543: add edx, 0x210 */ {  u32 a = r_edx; u32 b = 0x210u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00703549: mov dword ptr [ecx + 0x2c], edx */ W32((u32)(r_ecx+0x2cu), r_edx);
    /* 0070354c: mov edx, dword ptr [0xa96ee4] */ r_edx = R32((u32)(0xa96ee4u));
    /* 00703552: mov edx, dword ptr [edx + 0x2c] */ r_edx = R32((u32)(r_edx+0x2cu));
    /* 00703555: mov word ptr [edx], ax */ W16((u32)(r_edx), (u16)r_eax);
    /* 00703558: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x70355du); f_008581c5();
    /* 0070355d: mov dword ptr [0xa96edc], eax */ W32((u32)(0xa96edcu), r_eax);
    /* 00703562: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 00703564: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x703569u); f_008581c5();
    /* 00703569: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0070356c: mov ecx, dword ptr [0xa96edc] */ r_ecx = R32((u32)(0xa96edcu));
    /* 00703572: mov dword ptr [0xa96ee0], eax */ W32((u32)(0xa96ee0u), r_eax);
    /* 00703577: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00703579: jmp 0x703580 */ goto L_00703580;
L_0070357b:; BB(0x0070357b);
    /* 0070357b: mov eax, dword ptr [0xa96ee0] */ r_eax = R32((u32)(0xa96ee0u));
L_00703580:; BB(0x00703580);
    /* 00703580: mov dword ptr [eax + edx*8 + 4], 0 */ W32((u32)(r_eax+r_edx*8+0x4u), 0x0u);
    /* 00703588: mov dword ptr [eax + edx*8], ecx */ W32((u32)(r_eax+r_edx*8), r_ecx);
    /* 0070358b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0070358d: jl 0x703599 */ if ((fS!=fO)) goto L_00703599;
L_0070358f:; BB(0x0070358f);
    /* 0070358f: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00703592: jg 0x703599 */ if ((!fZ&&fS==fO)) goto L_00703599;
L_00703594:; BB(0x00703594);
    /* 00703594: add ecx, 0x40 */ {  u32 a = r_ecx; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00703597: jmp 0x70359c */ goto L_0070359c;
L_00703599:; BB(0x00703599);
    /* 00703599: add ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
L_0070359c:; BB(0x0070359c);
    /* 0070359c: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0070359f: cmp edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007035a2: jl 0x70357b */ if ((fS!=fO)) goto L_0070357b;
L_007035a4:; BB(0x007035a4);
    /* 007035a4: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 007035a9: mov word ptr [0xa96ed8], ax */ W16((u32)(0xa96ed8u), (u16)r_eax);
    /* 007035af: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007035b1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007035b3: mov ebx, eax */ r_ebx = r_eax;
    /* 007035b5: mov esi, edx */ r_esi = r_edx;
L_007035b7:; BB(0x007035b7);
    /* 007035b7: push dword ptr [esi*4 + 0xa96dd8] */ { u32 v = R32((u32)(r_esi*4+0xa96dd8u)); r_esp -= 4; W32(r_esp, v); }
    /* 007035be: push dword ptr [esi*8 + 0xa96df8] */ { u32 v = R32((u32)(r_esi*8+0xa96df8u)); r_esp -= 4; W32(r_esp, v); }
    /* 007035c5: push dword ptr [esi*8 + 0xa96df4] */ { u32 v = R32((u32)(r_esi*8+0xa96df4u)); r_esp -= 4; W32(r_esp, v); }
    /* 007035cc: lea ecx, [ebx + 0xa96b80] */ r_ecx = (u32)(r_ebx+0xa96b80u);
    /* 007035d2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007035d3: call 0x6fff24 */ r_esp -= 4; W32(r_esp, 0x7035d8u); f_006fff24();
    /* 007035d8: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007035db: add ebx, 0x40 */ {  u32 a = r_ebx; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007035de: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007035e1: cmp esi, 6 */ {  u32 a = r_esi; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007035e4: jl 0x7035b7 */ if ((fS!=fO)) goto L_007035b7;
L_007035e6:; BB(0x007035e6);
    /* 007035e6: fld dword ptr [0xa96e24] */ FPUSH(R_F32((u32)(0xa96e24u)));
    /* 007035ec: fld dword ptr [0xa96e28] */ FPUSH(R_F32((u32)(0xa96e28u)));
    /* 007035f2: fld dword ptr [0xa96e30] */ FPUSH(R_F32((u32)(0xa96e30u)));
    /* 007035f8: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 007035fa: fld dword ptr [0x96e4b8] */ FPUSH(R_F32((u32)(0x96e4b8u)));
    /* 00703600: fld dword ptr [0x96e4bc] */ FPUSH(R_F32((u32)(0x96e4bcu)));
    /* 00703606: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00703608: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0070360a: fst dword ptr [0xa96d04] */ W_F32((u32)(0xa96d04u), ST(0));
    /* 00703610: fst dword ptr [0xa96d0c] */ W_F32((u32)(0xa96d0cu), ST(0));
    /* 00703616: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00703618: fadd st(4) */ ST(0) = ST(0) + ST(4);
    /* 0070361a: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0070361c: fmul st(4), st(0) */ ST(4) = ST(4) * ST(0);
    /* 0070361e: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00703620: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00703622: fst dword ptr [0xa96d00] */ W_F32((u32)(0xa96d00u), ST(0));
    /* 00703628: fst dword ptr [0xa96d10] */ W_F32((u32)(0xa96d10u), ST(0));
    /* 0070362e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00703630: fst dword ptr [0xa96d08] */ W_F32((u32)(0xa96d08u), ST(0));
    /* 00703636: fst dword ptr [0xa96d18] */ W_F32((u32)(0xa96d18u), ST(0));
    /* 0070363c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0070363e: fst dword ptr [0xa96d20] */ W_F32((u32)(0xa96d20u), ST(0));
    /* 00703644: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00703646: fst dword ptr [0xa96d28] */ W_F32((u32)(0xa96d28u), ST(0));
    /* 0070364c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0070364e: fstp dword ptr [0xa96d30] */ W_F32((u32)(0xa96d30u), ST(0)); FPOP();
    /* 00703654: fstp dword ptr [0xa96d38] */ W_F32((u32)(0xa96d38u), ST(0)); FPOP();
    /* 0070365a: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 0070365c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0070365e: fst dword ptr [0xa96d14] */ W_F32((u32)(0xa96d14u), ST(0));
    /* 00703664: fst dword ptr [0xa96d1c] */ W_F32((u32)(0xa96d1cu), ST(0));
    /* 0070366a: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0070366c: fst dword ptr [0xa96d24] */ W_F32((u32)(0xa96d24u), ST(0));
    /* 00703672: fst dword ptr [0xa96d2c] */ W_F32((u32)(0xa96d2cu), ST(0));
    /* 00703678: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0070367a: fst dword ptr [0xa96d34] */ W_F32((u32)(0xa96d34u), ST(0));
    /* 00703680: fstp dword ptr [0xa96d3c] */ W_F32((u32)(0xa96d3cu), ST(0)); FPOP();
    /* 00703686: call 0x707ff8 */ r_esp -= 4; W32(r_esp, 0x70368bu); f_00707ff8();
    /* 0070368b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0070368c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0070368d: ret  */ FN_RET(0x00703254); r_esp += 4; return;
}

void f_00703690(void) /* sub_703690 */
{
    FN_ENTER(0x00703690);
    /* 00703690: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00703691: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00703692: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00703693: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00703696: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 0070369a: mov edi, dword ptr [esp + 0x1c] */ r_edi = R32((u32)(r_esp+0x1cu));
    /* 0070369e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007036a0: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 007036a7: movsx esi, word ptr [ebx] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 007036aa: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007036ac: je 0x7037bf */ if (fZ) goto L_007037bf;
L_007036b2:; BB(0x007036b2);
    /* 007036b2: movsx edx, word ptr [ebx + 2] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x2u));
    /* 007036b6: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007036b9: je 0x7038d8 */ if (fZ) goto L_007038d8;
L_007036bf:; BB(0x007036bf);
    /* 007036bf: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007036c2: je 0x70385e */ if (fZ) goto L_0070385e;
L_007036c8:; BB(0x007036c8);
    /* 007036c8: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007036cb: je 0x7037d9 */ if (fZ) goto L_007037d9;
L_007036d1:; BB(0x007036d1);
    /* 007036d1: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007036d4: je 0x70373c */ if (fZ) goto L_0070373c;
L_007036d6:; BB(0x007036d6);
    /* 007036d6: cmp edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007036d9: jne 0x703720 */ if (!fZ) goto L_00703720;
L_007036db:; BB(0x007036db);
    /* 007036db: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007036dd: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 007036df: jle 0x7037af */ if ((fZ||fS!=fO)) goto L_007037af;
L_007036e5:; BB(0x007036e5);
    /* 007036e5: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 007036e9: mov ebp, ebx */ r_ebp = r_ebx;
    /* 007036eb: mov ebx, edx */ r_ebx = r_edx;
L_007036ed:; BB(0x007036ed);
    /* 007036ed: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 007036f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007036f1: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007036f2: call 0x706284 */ r_esp -= 4; W32(r_esp, 0x7036f7u); f_00706284();
    /* 007036f7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_007036fa:; BB(0x007036fa);
    /* 007036fa: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 007036fd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007036fe: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007036ff: movsx ecx, word ptr [ebp + ebx*2 + 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+r_ebx*2+0x4u));
    /* 00703704: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00703705: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00703706: call 0x7064d8 */ r_esp -= 4; W32(r_esp, 0x70370bu); f_007064d8();
    /* 0070370b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0070370e: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00703711: cmp ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00703713: jge 0x7037d0 */ if ((fS==fO)) goto L_007037d0;
L_00703719:; BB(0x00703719);
    /* 00703719: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070371c: je 0x7036fa */ if (fZ) goto L_007036fa;
L_0070371e:; BB(0x0070371e);
    /* 0070371e: jmp 0x7036ed */ goto L_007036ed;
L_00703720:; BB(0x00703720);
    /* 00703720: cmp edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00703723: jne 0x7037af */ if (!fZ) goto L_007037af;
L_00703729:; BB(0x00703729);
    /* 00703729: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0070372c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0070372d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0070372e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0070372f: call 0x7069fc */ r_esp -= 4; W32(r_esp, 0x703734u); f_007069fc();
    /* 00703734: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00703737: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 0070373a: jmp 0x7037af */ goto L_007037af;
L_0070373c:; BB(0x0070373c);
    /* 0070373c: cmp esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0070373f: jg 0x703748 */ if ((!fZ&&fS==fO)) goto L_00703748;
L_00703741:; BB(0x00703741);
    /* 00703741: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00703744: jg 0x70375b */ if ((!fZ&&fS==fO)) goto L_0070375b;
L_00703746:; BB(0x00703746);
    /* 00703746: jmp 0x70378f */ goto L_0070378f;
L_00703748:; BB(0x00703748);
    /* 00703748: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0070374b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0070374c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0070374d: movsx edx, word ptr [ebx + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x8u));
    /* 00703751: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00703752: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00703753: call 0x7064d8 */ r_esp -= 4; W32(r_esp, 0x703758u); f_007064d8();
    /* 00703758: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0070375b:; BB(0x0070375b);
    /* 0070375b: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0070375e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0070375f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00703760: call 0x706284 */ r_esp -= 4; W32(r_esp, 0x703765u); f_00706284();
    /* 00703765: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 00703769: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0070376a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0070376b: movsx edx, word ptr [ebx + 6] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x6u));
    /* 0070376f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00703770: call 0x706b60 */ r_esp -= 4; W32(r_esp, 0x703775u); f_00706b60();
    /* 00703775: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00703778: cmp esi, 3 */ {  u32 a = r_esi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0070377b: jle 0x70378f */ if ((fZ||fS!=fO)) goto L_0070378f;
L_0070377d:; BB(0x0070377d);
    /* 0070377d: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00703780: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00703781: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00703782: movsx edx, word ptr [ebx + 0xa] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0xau));
    /* 00703786: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00703787: call 0x706b60 */ r_esp -= 4; W32(r_esp, 0x70378cu); f_00706b60();
    /* 0070378c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0070378f:; BB(0x0070378f);
    /* 0070378f: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00703792: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00703793: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00703794: call 0x7069b8 */ r_esp -= 4; W32(r_esp, 0x703799u); f_007069b8();
    /* 00703799: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 0070379d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0070379e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0070379f: movsx edx, word ptr [ebx + 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x4u));
    /* 007037a3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007037a4: call 0x706b60 */ r_esp -= 4; W32(r_esp, 0x7037a9u); f_00706b60();
    /* 007037a9: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007037ac: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
L_007037af:; BB(0x007037af);
    /* 007037af: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007037b1: mov word ptr [edi + eax*2], dx */ W16((u32)(r_edi+r_eax*2), (u16)r_edx);
    /* 007037b5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007037b8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007037bb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007037bc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007037bd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007037be: ret  */ FN_RET(0x00703690); r_esp += 4; return;
L_007037bf:; BB(0x007037bf);
    /* 007037bf: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007037c1: mov word ptr [edi], dx */ W16((u32)(r_edi), (u16)r_edx);
    /* 007037c4: mov eax, 1 */ r_eax = 0x1u;
    /* 007037c9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007037cc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007037cd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007037ce: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007037cf: ret  */ FN_RET(0x00703690); r_esp += 4; return;
L_007037d0:; BB(0x007037d0);
    /* 007037d0: mov ebp, dword ptr [esp + 4] */ r_ebp = R32((u32)(r_esp+0x4u));
    /* 007037d4: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 007037d7: jmp 0x7037af */ goto L_007037af;
L_007037d9:; BB(0x007037d9);
    /* 007037d9: cmp esi, 3 */ {  u32 a = r_esi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007037dc: mov edx, 3 */ r_edx = 0x3u;
    /* 007037e1: mov eax, 0 */ r_eax = 0x0u;
    /* 007037e6: jg 0x7037ea */ if ((!fZ&&fS==fO)) goto L_007037ea;
L_007037e8:; BB(0x007037e8);
    /* 007037e8: mov edx, esi */ r_edx = r_esi;
L_007037ea:; BB(0x007037ea);
    /* 007037ea: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 007037ec: jle 0x70382c */ if ((fZ||fS!=fO)) goto L_0070382c;
L_007037ee:; BB(0x007037ee);
    /* 007037ee: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 007037f2: mov ebp, eax */ r_ebp = r_eax;
    /* 007037f4: mov esi, edx */ r_esi = r_edx;
L_007037f6:; BB(0x007037f6);
    /* 007037f6: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 007037f9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007037fa: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007037fb: call 0x706284 */ r_esp -= 4; W32(r_esp, 0x703800u); f_00706284();
    /* 00703800: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00703803:; BB(0x00703803);
    /* 00703803: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00703806: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00703807: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00703808: movsx eax, word ptr [ebx + ebp*2 + 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+r_ebp*2+0x4u));
    /* 0070380d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0070380e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0070380f: call 0x7064d8 */ r_esp -= 4; W32(r_esp, 0x703814u); f_007064d8();
    /* 00703814: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00703817: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0070381a: cmp ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0070381c: jge 0x703825 */ if ((fS==fO)) goto L_00703825;
L_0070381e:; BB(0x0070381e);
    /* 0070381e: cmp ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00703821: je 0x703803 */ if (fZ) goto L_00703803;
L_00703823:; BB(0x00703823);
    /* 00703823: jmp 0x7037f6 */ goto L_007037f6;
L_00703825:; BB(0x00703825);
    /* 00703825: mov ebp, dword ptr [esp + 4] */ r_ebp = R32((u32)(r_esp+0x4u));
    /* 00703829: movsx esi, word ptr [ebx] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebx));
L_0070382c:; BB(0x0070382c);
    /* 0070382c: cmp esi, 3 */ {  u32 a = r_esi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0070382f: jg 0x703839 */ if ((!fZ&&fS==fO)) goto L_00703839;
L_00703831:; BB(0x00703831);
    /* 00703831: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 00703834: jmp 0x7037af */ goto L_007037af;
L_00703839:; BB(0x00703839);
    /* 00703839: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0070383c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0070383d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0070383e: call 0x7069b8 */ r_esp -= 4; W32(r_esp, 0x703843u); f_007069b8();
    /* 00703843: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 00703847: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00703848: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00703849: movsx edx, word ptr [ebx + 0xa] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0xau));
    /* 0070384d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0070384e: call 0x706b60 */ r_esp -= 4; W32(r_esp, 0x703853u); f_00706b60();
    /* 00703853: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00703856: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 00703859: jmp 0x7037af */ goto L_007037af;
L_0070385e:; BB(0x0070385e);
    /* 0070385e: mov eax, 2 */ r_eax = 0x2u;
    /* 00703863: cmp esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00703866: jle 0x70386a */ if ((fZ||fS!=fO)) goto L_0070386a;
L_00703868:; BB(0x00703868);
    /* 00703868: mov esi, eax */ r_esi = r_eax;
L_0070386a:; BB(0x0070386a);
    /* 0070386a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0070386c: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0070386e: jle 0x703894 */ if ((fZ||fS!=fO)) goto L_00703894;
L_00703870:; BB(0x00703870);
    /* 00703870: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 00703874: mov ebp, eax */ r_ebp = r_eax;
L_00703876:; BB(0x00703876);
    /* 00703876: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 00703879: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0070387a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0070387b: movsx ecx, word ptr [ebx + ebp*2 + 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebx+r_ebp*2+0x4u));
    /* 00703880: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00703881: call 0x706b60 */ r_esp -= 4; W32(r_esp, 0x703886u); f_00706b60();
    /* 00703886: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00703889: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0070388c: cmp ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0070388e: jl 0x703876 */ if ((fS!=fO)) goto L_00703876;
L_00703890:; BB(0x00703890);
    /* 00703890: mov ebp, dword ptr [esp + 4] */ r_ebp = R32((u32)(r_esp+0x4u));
L_00703894:; BB(0x00703894);
    /* 00703894: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00703897: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00703898: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00703899: push 0x3f */ { u32 v = 0x3fu; r_esp -= 4; W32(r_esp, v); }
    /* 0070389b: call 0x70625c */ r_esp -= 4; W32(r_esp, 0x7038a0u); f_0070625c();
    /* 007038a0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007038a3: movsx eax, word ptr [ebx] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 007038a6: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007038a9: jg 0x7038b3 */ if ((!fZ&&fS==fO)) goto L_007038b3;
L_007038ab:; BB(0x007038ab);
    /* 007038ab: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 007038ae: jmp 0x7037af */ goto L_007037af;
L_007038b3:; BB(0x007038b3);
    /* 007038b3: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 007038b6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007038b7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007038b8: call 0x7069b8 */ r_esp -= 4; W32(r_esp, 0x7038bdu); f_007069b8();
    /* 007038bd: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 007038c1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007038c2: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007038c3: movsx edx, word ptr [ebx + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x8u));
    /* 007038c7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007038c8: call 0x706b60 */ r_esp -= 4; W32(r_esp, 0x7038cdu); f_00706b60();
    /* 007038cd: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007038d0: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 007038d3: jmp 0x7037af */ goto L_007037af;
L_007038d8:; BB(0x007038d8);
    /* 007038d8: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 007038db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007038dc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007038dd: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007038de: call 0x706490 */ r_esp -= 4; W32(r_esp, 0x7038e3u); f_00706490();
    /* 007038e3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007038e6: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 007038e9: jmp 0x7037af */ goto L_007037af;
}

void f_007038f0(void) /* sub_7038F0 */
{
    FN_ENTER(0x007038f0);
    /* 007038f0: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 007038f4: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 007038f8: movzx ecx, word ptr [esp + 0xc] */ r_ecx = (u32)R16((u32)(r_esp+0xcu));
    /* 007038fd: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007038fe: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007038ff: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00703900: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00703901: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00703904: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00703906: mov edi, edx */ r_edi = r_edx;
    /* 00703908: mov esi, eax */ r_esi = r_eax;
    /* 0070390a: mov dword ptr [esp + 0xc], 0 */ W32((u32)(r_esp+0xcu), 0x0u);
    /* 00703912: movsx ebx, word ptr [esi] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_esi));
    /* 00703915: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00703917: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00703919: je 0x703cb0 */ if (fZ) goto L_00703cb0;
L_0070391f:; BB(0x0070391f);
    /* 0070391f: movsx eax, word ptr [esi + 2] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x2u));
    /* 00703923: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00703926: je 0x703ebb */ if (fZ) goto L_00703ebb;
L_0070392c:; BB(0x0070392c);
    /* 0070392c: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070392f: je 0x703e2c */ if (fZ) goto L_00703e2c;
L_00703935:; BB(0x00703935);
    /* 00703935: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00703938: je 0x703de9 */ if (fZ) goto L_00703de9;
L_0070393e:; BB(0x0070393e);
    /* 0070393e: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00703941: je 0x703b05 */ if (fZ) goto L_00703b05;
L_00703947:; BB(0x00703947);
    /* 00703947: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070394a: jne 0x703ae4 */ if (!fZ) goto L_00703ae4;
L_00703950:; BB(0x00703950);
    /* 00703950: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 00703954: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00703955: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00703956: movsx ebp, word ptr [esi + 4] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_esi+0x4u));
    /* 0070395a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0070395b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0070395c: call 0x7064d8 */ r_esp -= 4; W32(r_esp, 0x703961u); f_007064d8();
    /* 00703961: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00703964: cmp ebp, 0x2c4 */ {  u32 a = r_ebp; u32 b = 0x2c4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070396a: je 0x703d85 */ if (fZ) goto L_00703d85;
L_00703970:; BB(0x00703970);
    /* 00703970: cmp ebp, 0x2c7 */ {  u32 a = r_ebp; u32 b = 0x2c7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00703976: je 0x703d55 */ if (fZ) goto L_00703d55;
L_0070397c:; BB(0x0070397c);
    /* 0070397c: cmp ebp, 0x68c */ {  u32 a = r_ebp; u32 b = 0x68cu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00703982: jl 0x7039b9 */ if ((fS!=fO)) goto L_007039b9;
L_00703984:; BB(0x00703984);
    /* 00703984: cmp ebp, 0x697 */ {  u32 a = r_ebp; u32 b = 0x697u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0070398a: jg 0x7039b9 */ if ((!fZ&&fS==fO)) goto L_007039b9;
L_0070398c:; BB(0x0070398c);
    /* 0070398c: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 00703990: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00703991: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00703992: mov ebp, 1 */ r_ebp = 0x1u;
    /* 00703997: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 00703999: call 0x70625c */ r_esp -= 4; W32(r_esp, 0x70399eu); f_0070625c();
    /* 0070399e: mov eax, dword ptr [0xa96ed4] */ r_eax = R32((u32)(0xa96ed4u));
    /* 007039a3: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 007039a7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007039a8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007039a9: push dword ptr [eax + 0xa54] */ { u32 v = R32((u32)(r_eax+0xa54u)); r_esp -= 4; W32(r_esp, v); }
    /* 007039af: call 0x7067e4 */ r_esp -= 4; W32(r_esp, 0x7039b4u); f_007067e4();
    /* 007039b4: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007039b7: jmp 0x7039cb */ goto L_007039cb;
L_007039b9:; BB(0x007039b9);
    /* 007039b9: movzx ecx, word ptr [edi] */ r_ecx = (u32)R16((u32)(r_edi));
    /* 007039bc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007039bd: mov ebp, 3 */ r_ebp = 0x3u;
    /* 007039c2: call 0x815e78 */ r_esp -= 4; W32(r_esp, 0x7039c7u); f_00815e78();
    /* 007039c7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007039c8: mov word ptr [edi], ax */ W16((u32)(r_edi), (u16)r_eax);
L_007039cb:; BB(0x007039cb);
    /* 007039cb: cmp ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007039ce: jle 0x703ace */ if ((fZ||fS!=fO)) goto L_00703ace;
L_007039d4:; BB(0x007039d4);
    /* 007039d4: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 007039d8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007039d9: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007039da: call 0x7068fc */ r_esp -= 4; W32(r_esp, 0x7039dfu); f_007068fc();
    /* 007039df: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007039e2: mov ecx, dword ptr [0xa96eb8] */ r_ecx = R32((u32)(0xa96eb8u));
    /* 007039e8: movsx eax, word ptr [esi + 6] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x6u));
    /* 007039ec: mov dword ptr [esp + 0x3c], eax */ W32((u32)(r_esp+0x3cu), r_eax);
    /* 007039f0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007039f2: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 007039f6: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 007039f9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 007039fb: jle 0x703a2a */ if ((fZ||fS!=fO)) goto L_00703a2a;
L_007039fd:; BB(0x007039fd);
    /* 007039fd: mov edx, dword ptr [esp + 0x3c] */ r_edx = R32((u32)(r_esp+0x3cu));
    /* 00703a01: mov ecx, dword ptr [ecx] */ r_ecx = R32((u32)(r_ecx));
    /* 00703a03: mov dword ptr [esp + 0x30], esi */ W32((u32)(r_esp+0x30u), r_esi);
    /* 00703a07: mov dword ptr [esp + 0x2c], edi */ W32((u32)(r_esp+0x2cu), r_edi);
    /* 00703a0b: mov edi, dword ptr [esp + 0x38] */ r_edi = R32((u32)(r_esp+0x38u));
L_00703a0f:; BB(0x00703a0f);
    /* 00703a0f: movsx esi, word ptr [ecx + edi*2] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ecx+r_edi*2));
    /* 00703a13: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00703a16: cmp edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00703a18: je 0x703d48 */ if (fZ) goto L_00703d48;
L_00703a1e:; BB(0x00703a1e);
    /* 00703a1e: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00703a20: jl 0x703a0f */ if ((fS!=fO)) goto L_00703a0f;
L_00703a22:; BB(0x00703a22);
    /* 00703a22: mov esi, dword ptr [esp + 0x30] */ r_esi = R32((u32)(r_esp+0x30u));
    /* 00703a26: mov edi, dword ptr [esp + 0x2c] */ r_edi = R32((u32)(r_esp+0x2cu));
L_00703a2a:; BB(0x00703a2a);
    /* 00703a2a: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00703a2c: je 0x703a70 */ if (fZ) goto L_00703a70;
L_00703a2e:; BB(0x00703a2e);
    /* 00703a2e: jle 0x703a89 */ if ((fZ||fS!=fO)) goto L_00703a89;
L_00703a30:; BB(0x00703a30);
    /* 00703a30: cmp ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00703a33: jle 0x703a55 */ if ((fZ||fS!=fO)) goto L_00703a55;
L_00703a35:; BB(0x00703a35);
    /* 00703a35: cmp ebp, 3 */ {  u32 a = r_ebp; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00703a38: jne 0x703a89 */ if (!fZ) goto L_00703a89;
L_00703a3a:; BB(0x00703a3a);
    /* 00703a3a: mov eax, dword ptr [0xa96ed4] */ r_eax = R32((u32)(0xa96ed4u));
    /* 00703a3f: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 00703a43: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00703a44: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00703a45: push dword ptr [eax + 0x1784] */ { u32 v = R32((u32)(r_eax+0x1784u)); r_esp -= 4; W32(r_esp, v); }
    /* 00703a4b: call 0x7067e4 */ r_esp -= 4; W32(r_esp, 0x703a50u); f_007067e4();
    /* 00703a50: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00703a53: jmp 0x703a89 */ goto L_00703a89;
L_00703a55:; BB(0x00703a55);
    /* 00703a55: mov eax, dword ptr [0xa96ed4] */ r_eax = R32((u32)(0xa96ed4u));
    /* 00703a5a: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 00703a5e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00703a5f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00703a60: push dword ptr [eax + 0x1780] */ { u32 v = R32((u32)(r_eax+0x1780u)); r_esp -= 4; W32(r_esp, v); }
    /* 00703a66: call 0x7067e4 */ r_esp -= 4; W32(r_esp, 0x703a6bu); f_007067e4();
    /* 00703a6b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00703a6e: jmp 0x703a89 */ goto L_00703a89;
L_00703a70:; BB(0x00703a70);
    /* 00703a70: mov eax, dword ptr [0xa96ed4] */ r_eax = R32((u32)(0xa96ed4u));
    /* 00703a75: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 00703a79: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00703a7a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00703a7b: push dword ptr [eax + 0x177c] */ { u32 v = R32((u32)(r_eax+0x177cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00703a81: call 0x7067e4 */ r_esp -= 4; W32(r_esp, 0x703a86u); f_007067e4();
    /* 00703a86: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00703a89:; BB(0x00703a89);
    /* 00703a89: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 00703a8d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00703a8e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00703a8f: call 0x7068fc */ r_esp -= 4; W32(r_esp, 0x703a94u); f_007068fc();
    /* 00703a94: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00703a97:; BB(0x00703a97);
    /* 00703a97: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00703a99: cmp ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00703a9c: je 0x703cc2 */ if (fZ) goto L_00703cc2;
L_00703aa2:; BB(0x00703aa2);
    /* 00703aa2: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 00703aa6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00703aa7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00703aa8: mov ebp, dword ptr [esp + 0x44] */ r_ebp = R32((u32)(r_esp+0x44u));
    /* 00703aac: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00703aad: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00703aae: call 0x7064d8 */ r_esp -= 4; W32(r_esp, 0x703ab3u); f_007064d8();
    /* 00703ab3: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00703ab6:; BB(0x00703ab6);
    /* 00703ab6: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00703ab9: jle 0x703ace */ if ((fZ||fS!=fO)) goto L_00703ace;
L_00703abb:; BB(0x00703abb);
    /* 00703abb: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 00703abf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00703ac0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00703ac1: movsx ecx, word ptr [esi + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_esi+0x8u));
    /* 00703ac5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00703ac6: call 0x706b60 */ r_esp -= 4; W32(r_esp, 0x703acbu); f_00706b60();
    /* 00703acb: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00703ace:; BB(0x00703ace);
    /* 00703ace: movzx eax, word ptr [edi] */ r_eax = (u32)R16((u32)(r_edi));
    /* 00703ad1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00703ad2: call 0x815e78 */ r_esp -= 4; W32(r_esp, 0x703ad7u); f_00815e78();
    /* 00703ad7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00703ad8: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 00703adc: mov word ptr [edi], ax */ W16((u32)(r_edi), (u16)r_eax);
    /* 00703adf: jmp 0x703c9d */ goto L_00703c9d;
L_00703ae4:; BB(0x00703ae4);
    /* 00703ae4: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00703ae7: jne 0x703c9d */ if (!fZ) goto L_00703c9d;
L_00703aed:; BB(0x00703aed);
    /* 00703aed: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 00703af1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00703af2: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00703af3: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00703af4: call 0x7069fc */ r_esp -= 4; W32(r_esp, 0x703af9u); f_007069fc();
    /* 00703af9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00703afc: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 00703b00: jmp 0x703c9d */ goto L_00703c9d;
L_00703b05:; BB(0x00703b05);
    /* 00703b05: movsx ebp, word ptr [esi + 4] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_esi+0x4u));
    /* 00703b09: cmp ebp, 0x2c8 */ {  u32 a = r_ebp; u32 b = 0x2c8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00703b0f: je 0x703b20 */ if (fZ) goto L_00703b20;
L_00703b11:; BB(0x00703b11);
    /* 00703b11: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 00703b15: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00703b16: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00703b17: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00703b18: call 0x706b60 */ r_esp -= 4; W32(r_esp, 0x703b1du); f_00706b60();
    /* 00703b1d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00703b20:; BB(0x00703b20);
    /* 00703b20: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00703b22: mov dword ptr [esp + 0x3c], ecx */ W32((u32)(r_esp+0x3cu), r_ecx);
    /* 00703b26: cmp ebp, 0x2c7 */ {  u32 a = r_ebp; u32 b = 0x2c7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00703b2c: je 0x703db4 */ if (fZ) goto L_00703db4;
L_00703b32:; BB(0x00703b32);
    /* 00703b32: cmp ebp, 0x68c */ {  u32 a = r_ebp; u32 b = 0x68cu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00703b38: jl 0x703b74 */ if ((fS!=fO)) goto L_00703b74;
L_00703b3a:; BB(0x00703b3a);
    /* 00703b3a: cmp ebp, 0x697 */ {  u32 a = r_ebp; u32 b = 0x697u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00703b40: jg 0x703b74 */ if ((!fZ&&fS==fO)) goto L_00703b74;
L_00703b42:; BB(0x00703b42);
    /* 00703b42: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 00703b46: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00703b47: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00703b48: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 00703b4a: call 0x70625c */ r_esp -= 4; W32(r_esp, 0x703b4fu); f_0070625c();
    /* 00703b4f: mov ebp, dword ptr [0xa96ed4] */ r_ebp = R32((u32)(0xa96ed4u));
    /* 00703b55: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 00703b59: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00703b5a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00703b5b: push dword ptr [ebp + 0xa54] */ { u32 v = R32((u32)(r_ebp+0xa54u)); r_esp -= 4; W32(r_esp, v); }
    /* 00703b61: call 0x7067e4 */ r_esp -= 4; W32(r_esp, 0x703b66u); f_007067e4();
    /* 00703b66: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00703b69: mov ecx, 2 */ r_ecx = 0x2u;
    /* 00703b6e: mov dword ptr [esp + 0x3c], ecx */ W32((u32)(r_esp+0x3cu), r_ecx);
    /* 00703b72: jmp 0x703b80 */ goto L_00703b80;
L_00703b74:; BB(0x00703b74);
    /* 00703b74: cmp ebp, 0x698 */ {  u32 a = r_ebp; u32 b = 0x698u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00703b7a: je 0x703d8c */ if (fZ) goto L_00703d8c;
L_00703b80:; BB(0x00703b80);
    /* 00703b80: cmp ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00703b83: jle 0x703c8c */ if ((fZ||fS!=fO)) goto L_00703c8c;
L_00703b89:; BB(0x00703b89);
    /* 00703b89: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 00703b8d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00703b8e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00703b8f: movsx ebp, word ptr [esi + 6] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_esi+0x6u));
    /* 00703b93: call 0x7068fc */ r_esp -= 4; W32(r_esp, 0x703b98u); f_007068fc();
    /* 00703b98: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00703b9b: mov ecx, dword ptr [esp + 0x3c] */ r_ecx = R32((u32)(r_esp+0x3cu));
    /* 00703b9f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00703ba1: jne 0x703bb4 */ if (!fZ) goto L_00703bb4;
L_00703ba3:; BB(0x00703ba3);
    /* 00703ba3: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 00703ba7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00703ba8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00703ba9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00703baa: call 0x706b60 */ r_esp -= 4; W32(r_esp, 0x703bafu); f_00706b60();
    /* 00703baf: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00703bb2: jmp 0x703bdb */ goto L_00703bdb;
L_00703bb4:; BB(0x00703bb4);
    /* 00703bb4: mov ecx, dword ptr [0xa96ebc] */ r_ecx = R32((u32)(0xa96ebcu));
    /* 00703bba: mov ecx, dword ptr [ecx] */ r_ecx = R32((u32)(r_ecx));
    /* 00703bbc: movsx eax, word ptr [ecx + ebp*2 - 0xb58] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+r_ebp*2+0xfffff4a8u));
    /* 00703bc4: mov ecx, dword ptr [0xa96ed4] */ r_ecx = R32((u32)(0xa96ed4u));
    /* 00703bca: lea ebp, [esp + 0xc] */ r_ebp = (u32)(r_esp+0xcu);
    /* 00703bce: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00703bcf: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00703bd0: push dword ptr [ecx + eax*4] */ { u32 v = R32((u32)(r_ecx+r_eax*4)); r_esp -= 4; W32(r_esp, v); }
    /* 00703bd3: call 0x7067e4 */ r_esp -= 4; W32(r_esp, 0x703bd8u); f_007067e4();
    /* 00703bd8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00703bdb:; BB(0x00703bdb);
    /* 00703bdb: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00703bde: jle 0x703c8c */ if ((fZ||fS!=fO)) goto L_00703c8c;
L_00703be4:; BB(0x00703be4);
    /* 00703be4: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 00703be8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00703be9: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00703bea: call 0x7068fc */ r_esp -= 4; W32(r_esp, 0x703befu); f_007068fc();
    /* 00703bef: movsx ecx, word ptr [esi + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_esi+0x8u));
    /* 00703bf3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00703bf4: call 0x706320 */ r_esp -= 4; W32(r_esp, 0x703bf9u); f_00706320();
    /* 00703bf9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00703bfc: mov ecx, dword ptr [0xa96eb4] */ r_ecx = R32((u32)(0xa96eb4u));
    /* 00703c02: movzx ecx, byte ptr [eax + ecx] */ r_ecx = (u32)R8((u32)(r_eax+r_ecx));
    /* 00703c06: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00703c09: jne 0x703c34 */ if (!fZ) goto L_00703c34;
L_00703c0b:; BB(0x00703c0b);
    /* 00703c0b: mov ebp, dword ptr [0xa96ed4] */ r_ebp = R32((u32)(0xa96ed4u));
    /* 00703c11: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 00703c15: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00703c16: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00703c17: push dword ptr [ebp + 0x19e4] */ { u32 v = R32((u32)(r_ebp+0x19e4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00703c1d: call 0x7067e4 */ r_esp -= 4; W32(r_esp, 0x703c22u); f_007067e4();
    /* 00703c22: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 00703c26: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00703c27: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00703c28: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00703c2a: call 0x70625c */ r_esp -= 4; W32(r_esp, 0x703c2fu); f_0070625c();
    /* 00703c2f: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00703c32: jmp 0x703c60 */ goto L_00703c60;
L_00703c34:; BB(0x00703c34);
    /* 00703c34: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00703c37: jne 0x703c60 */ if (!fZ) goto L_00703c60;
L_00703c39:; BB(0x00703c39);
    /* 00703c39: mov ebp, dword ptr [0xa96ed4] */ r_ebp = R32((u32)(0xa96ed4u));
    /* 00703c3f: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 00703c43: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00703c44: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00703c45: push dword ptr [ebp + 0x19e8] */ { u32 v = R32((u32)(r_ebp+0x19e8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00703c4b: call 0x7067e4 */ r_esp -= 4; W32(r_esp, 0x703c50u); f_007067e4();
    /* 00703c50: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 00703c54: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00703c55: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00703c56: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00703c58: call 0x70625c */ r_esp -= 4; W32(r_esp, 0x703c5du); f_0070625c();
    /* 00703c5d: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00703c60:; BB(0x00703c60);
    /* 00703c60: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 00703c64: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00703c65: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00703c66: movsx ebp, word ptr [esi + 8] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_esi+0x8u));
    /* 00703c6a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00703c6b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00703c6c: call 0x7064d8 */ r_esp -= 4; W32(r_esp, 0x703c71u); f_007064d8();
    /* 00703c71: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00703c74: cmp ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00703c77: jle 0x703c8c */ if ((fZ||fS!=fO)) goto L_00703c8c;
L_00703c79:; BB(0x00703c79);
    /* 00703c79: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 00703c7d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00703c7e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00703c7f: movsx ecx, word ptr [esi + 0xa] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_esi+0xau));
    /* 00703c83: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00703c84: call 0x706b60 */ r_esp -= 4; W32(r_esp, 0x703c89u); f_00706b60();
    /* 00703c89: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00703c8c:; BB(0x00703c8c);
    /* 00703c8c: movzx eax, word ptr [edi] */ r_eax = (u32)R16((u32)(r_edi));
    /* 00703c8f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00703c90: call 0x815e78 */ r_esp -= 4; W32(r_esp, 0x703c95u); f_00815e78();
    /* 00703c95: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00703c96: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 00703c9a: mov word ptr [edi], ax */ W16((u32)(r_edi), (u16)r_eax);
L_00703c9d:; BB(0x00703c9d);
    /* 00703c9d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00703c9f: mov word ptr [edi + edx*2], cx */ W16((u32)(r_edi+r_edx*2), (u16)r_ecx);
    /* 00703ca3: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00703ca6: mov eax, edx */ r_eax = r_edx;
    /* 00703ca8: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00703cab: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00703cac: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00703cad: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00703cae: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00703caf: ret  */ FN_RET(0x007038f0); r_esp += 4; return;
L_00703cb0:; BB(0x00703cb0);
    /* 00703cb0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00703cb2: mov word ptr [edi], cx */ W16((u32)(r_edi), (u16)r_ecx);
    /* 00703cb5: mov eax, 1 */ r_eax = 0x1u;
    /* 00703cba: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00703cbd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00703cbe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00703cbf: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00703cc0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00703cc1: ret  */ FN_RET(0x007038f0); r_esp += 4; return;
L_00703cc2:; BB(0x00703cc2);
    /* 00703cc2: mov eax, dword ptr [0xa96eb8] */ r_eax = R32((u32)(0xa96eb8u));
    /* 00703cc7: mov ebp, dword ptr [eax + 0xc] */ r_ebp = R32((u32)(r_eax+0xcu));
    /* 00703cca: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00703ccc: mov dword ptr [esp + 0x38], ecx */ W32((u32)(r_esp+0x38u), r_ecx);
    /* 00703cd0: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00703cd2: jle 0x703aa2 */ if ((fZ||fS!=fO)) goto L_00703aa2;
L_00703cd8:; BB(0x00703cd8);
    /* 00703cd8: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00703cdb: mov dword ptr [esp + 0x34], edx */ W32((u32)(r_esp+0x34u), r_edx);
    /* 00703cdf: mov dword ptr [esp + 0x30], esi */ W32((u32)(r_esp+0x30u), r_esi);
    /* 00703ce3: mov esi, dword ptr [esp + 0x3c] */ r_esi = R32((u32)(r_esp+0x3cu));
    /* 00703ce7: mov dword ptr [esp + 0x2c], edi */ W32((u32)(r_esp+0x2cu), r_edi);
    /* 00703ceb: mov edi, dword ptr [esp + 0x38] */ r_edi = R32((u32)(r_esp+0x38u));
L_00703cef:; BB(0x00703cef);
    /* 00703cef: cmp si, word ptr [ecx + edi*2] */ {  u32 a = (u16)r_esi; u32 b = R16((u32)(r_ecx+r_edi*2)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 00703cf3: lea edx, [edi + edi] */ r_edx = (u32)(r_edi+r_edi);
    /* 00703cf6: je 0x703d2d */ if (fZ) goto L_00703d2d;
L_00703cf8:; BB(0x00703cf8);
    /* 00703cf8: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00703cfb: cmp edi, ebp */ {  u32 a = r_edi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00703cfd: jl 0x703cef */ if ((fS!=fO)) goto L_00703cef;
L_00703cff:; BB(0x00703cff);
    /* 00703cff: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 00703d03: mov esi, dword ptr [esp + 0x30] */ r_esi = R32((u32)(r_esp+0x30u));
    /* 00703d07: mov edi, dword ptr [esp + 0x2c] */ r_edi = R32((u32)(r_esp+0x2cu));
L_00703d0b:; BB(0x00703d0b);
    /* 00703d0b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00703d0d: je 0x703aa2 */ if (fZ) goto L_00703aa2;
L_00703d13:; BB(0x00703d13);
    /* 00703d13: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 00703d17: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00703d18: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00703d19: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00703d1a: mov ebp, dword ptr [esp + 0x48] */ r_ebp = R32((u32)(r_esp+0x48u));
    /* 00703d1e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00703d1f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00703d20: call 0x70655c */ r_esp -= 4; W32(r_esp, 0x703d25u); f_0070655c();
    /* 00703d25: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00703d28: jmp 0x703ab6 */ goto L_00703ab6;
L_00703d2d:; BB(0x00703d2d);
    /* 00703d2d: mov esi, dword ptr [esp + 0x30] */ r_esi = R32((u32)(r_esp+0x30u));
    /* 00703d31: mov edi, dword ptr [esp + 0x2c] */ r_edi = R32((u32)(r_esp+0x2cu));
    /* 00703d35: mov ebp, dword ptr [0xa96ed4] */ r_ebp = R32((u32)(0xa96ed4u));
    /* 00703d3b: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 00703d3e: movsx ecx, word ptr [ecx + edx] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ecx+r_edx));
    /* 00703d42: mov edx, dword ptr [ebp + ecx*4] */ r_edx = R32((u32)(r_ebp+r_ecx*4));
    /* 00703d46: jmp 0x703d0b */ goto L_00703d0b;
L_00703d48:; BB(0x00703d48);
    /* 00703d48: mov esi, dword ptr [esp + 0x30] */ r_esi = R32((u32)(r_esp+0x30u));
    /* 00703d4c: mov edi, dword ptr [esp + 0x2c] */ r_edi = R32((u32)(r_esp+0x2cu));
    /* 00703d50: jmp 0x703a97 */ goto L_00703a97;
L_00703d55:; BB(0x00703d55);
    /* 00703d55: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 00703d59: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00703d5a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00703d5b: mov ebp, 2 */ r_ebp = 0x2u;
    /* 00703d60: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 00703d62: call 0x70625c */ r_esp -= 4; W32(r_esp, 0x703d67u); f_0070625c();
    /* 00703d67: mov eax, dword ptr [0xa96ed4] */ r_eax = R32((u32)(0xa96ed4u));
    /* 00703d6c: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 00703d70: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00703d71: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00703d72: push dword ptr [eax + 0xa60] */ { u32 v = R32((u32)(r_eax+0xa60u)); r_esp -= 4; W32(r_esp, v); }
    /* 00703d78: call 0x7067e4 */ r_esp -= 4; W32(r_esp, 0x703d7du); f_007067e4();
    /* 00703d7d: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00703d80: jmp 0x7039cb */ goto L_007039cb;
L_00703d85:; BB(0x00703d85);
    /* 00703d85: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00703d87: jmp 0x7039cb */ goto L_007039cb;
L_00703d8c:; BB(0x00703d8c);
    /* 00703d8c: mov ebp, dword ptr [0xa96ed4] */ r_ebp = R32((u32)(0xa96ed4u));
    /* 00703d92: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 00703d96: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00703d97: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00703d98: push dword ptr [ebp + 0xa54] */ { u32 v = R32((u32)(r_ebp+0xa54u)); r_esp -= 4; W32(r_esp, v); }
    /* 00703d9e: call 0x7067e4 */ r_esp -= 4; W32(r_esp, 0x703da3u); f_007067e4();
    /* 00703da3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00703da6: mov ecx, 2 */ r_ecx = 0x2u;
    /* 00703dab: mov dword ptr [esp + 0x3c], ecx */ W32((u32)(r_esp+0x3cu), r_ecx);
    /* 00703daf: jmp 0x703b80 */ goto L_00703b80;
L_00703db4:; BB(0x00703db4);
    /* 00703db4: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 00703db8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00703db9: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00703dba: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 00703dbc: call 0x70625c */ r_esp -= 4; W32(r_esp, 0x703dc1u); f_0070625c();
    /* 00703dc1: mov ebp, dword ptr [0xa96ed4] */ r_ebp = R32((u32)(0xa96ed4u));
    /* 00703dc7: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 00703dcb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00703dcc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00703dcd: push dword ptr [ebp + 0xa60] */ { u32 v = R32((u32)(r_ebp+0xa60u)); r_esp -= 4; W32(r_esp, v); }
    /* 00703dd3: call 0x7067e4 */ r_esp -= 4; W32(r_esp, 0x703dd8u); f_007067e4();
    /* 00703dd8: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00703ddb: mov ecx, 2 */ r_ecx = 0x2u;
    /* 00703de0: mov dword ptr [esp + 0x3c], ecx */ W32((u32)(r_esp+0x3cu), r_ecx);
    /* 00703de4: jmp 0x703b80 */ goto L_00703b80;
L_00703de9:; BB(0x00703de9);
    /* 00703de9: cmp ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00703dec: jle 0x703e10 */ if ((fZ||fS!=fO)) goto L_00703e10;
L_00703dee:; BB(0x00703dee);
    /* 00703dee: lea ebx, [esp + 0x10] */ r_ebx = (u32)(r_esp+0x10u);
    /* 00703df2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00703df3: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00703df4: call 0x706360 */ r_esp -= 4; W32(r_esp, 0x703df9u); f_00706360();
    /* 00703df9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00703dfc: lea eax, [esp + 0x10] */ r_eax = (u32)(r_esp+0x10u);
    /* 00703e00: mov edx, edi */ r_edx = r_edi;
    /* 00703e02: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00703e04: call 0x7038fd */ r_esp -= 4; W32(r_esp, 0x703e09u); f_007038fd();
    /* 00703e09: mov edx, eax */ r_edx = r_eax;
    /* 00703e0b: jmp 0x703c9d */ goto L_00703c9d;
L_00703e10:; BB(0x00703e10);
    /* 00703e10: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 00703e14: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00703e15: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00703e16: movsx ecx, word ptr [esi + 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_esi+0x4u));
    /* 00703e1a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00703e1b: call 0x706b60 */ r_esp -= 4; W32(r_esp, 0x703e20u); f_00706b60();
    /* 00703e20: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00703e23: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 00703e27: jmp 0x703c9d */ goto L_00703c9d;
L_00703e2c:; BB(0x00703e2c);
    /* 00703e2c: mov ecx, 2 */ r_ecx = 0x2u;
    /* 00703e31: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00703e34: mov ebp, 0 */ r_ebp = 0x0u;
    /* 00703e39: jle 0x703e3d */ if ((fZ||fS!=fO)) goto L_00703e3d;
L_00703e3b:; BB(0x00703e3b);
    /* 00703e3b: mov ebx, ecx */ r_ebx = r_ecx;
L_00703e3d:; BB(0x00703e3d);
    /* 00703e3d: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00703e3f: jle 0x703e73 */ if ((fZ||fS!=fO)) goto L_00703e73;
L_00703e41:; BB(0x00703e41);
    /* 00703e41: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 00703e45: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00703e46: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00703e47: movsx eax, word ptr [esi + ebp*2 + 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+r_ebp*2+0x4u));
    /* 00703e4c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00703e4d: call 0x706b60 */ r_esp -= 4; W32(r_esp, 0x703e52u); f_00706b60();
    /* 00703e52: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00703e55: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00703e58: cmp ebp, ebx */ {  u32 a = r_ebp; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00703e5a: jge 0x703e73 */ if ((fS==fO)) goto L_00703e73;
L_00703e5c:; BB(0x00703e5c);
    /* 00703e5c: cmp ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00703e5f: jne 0x703e41 */ if (!fZ) goto L_00703e41;
L_00703e61:; BB(0x00703e61);
    /* 00703e61: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 00703e65: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00703e66: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00703e67: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00703e69: call 0x70625c */ r_esp -= 4; W32(r_esp, 0x703e6eu); f_0070625c();
    /* 00703e6e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00703e71: jmp 0x703e41 */ goto L_00703e41;
L_00703e73:; BB(0x00703e73);
    /* 00703e73: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 00703e77: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00703e78: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00703e79: push 0x3f */ { u32 v = 0x3fu; r_esp -= 4; W32(r_esp, v); }
    /* 00703e7b: call 0x70625c */ r_esp -= 4; W32(r_esp, 0x703e80u); f_0070625c();
    /* 00703e80: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00703e83: movsx ecx, word ptr [esi] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_esi));
    /* 00703e86: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00703e89: jg 0x703e94 */ if ((!fZ&&fS==fO)) goto L_00703e94;
L_00703e8b:; BB(0x00703e8b);
    /* 00703e8b: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 00703e8f: jmp 0x703c9d */ goto L_00703c9d;
L_00703e94:; BB(0x00703e94);
    /* 00703e94: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 00703e98: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00703e99: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00703e9a: call 0x7069b8 */ r_esp -= 4; W32(r_esp, 0x703e9fu); f_007069b8();
    /* 00703e9f: lea eax, [esp + 0x14] */ r_eax = (u32)(r_esp+0x14u);
    /* 00703ea3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00703ea4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00703ea5: movsx ecx, word ptr [esi + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_esi+0x8u));
    /* 00703ea9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00703eaa: call 0x706b60 */ r_esp -= 4; W32(r_esp, 0x703eafu); f_00706b60();
    /* 00703eaf: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00703eb2: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 00703eb6: jmp 0x703c9d */ goto L_00703c9d;
L_00703ebb:; BB(0x00703ebb);
    /* 00703ebb: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 00703ebf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00703ec0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00703ec1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00703ec2: call 0x706490 */ r_esp -= 4; W32(r_esp, 0x703ec7u); f_00706490();
    /* 00703ec7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00703eca: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 00703ece: jmp 0x703c9d */ goto L_00703c9d;
}

void f_007038fd(void) /* sub_7038FD */
{
    FN_ENTER(0x007038fd);
    /* 007038fd: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007038fe: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007038ff: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00703900: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00703901: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00703904: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00703906: mov edi, edx */ r_edi = r_edx;
    /* 00703908: mov esi, eax */ r_esi = r_eax;
    /* 0070390a: mov dword ptr [esp + 0xc], 0 */ W32((u32)(r_esp+0xcu), 0x0u);
    /* 00703912: movsx ebx, word ptr [esi] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_esi));
    /* 00703915: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00703917: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00703919: je 0x703cb0 */ if (fZ) goto L_00703cb0;
L_0070391f:; BB(0x0070391f);
    /* 0070391f: movsx eax, word ptr [esi + 2] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x2u));
    /* 00703923: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00703926: je 0x703ebb */ if (fZ) goto L_00703ebb;
L_0070392c:; BB(0x0070392c);
    /* 0070392c: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070392f: je 0x703e2c */ if (fZ) goto L_00703e2c;
L_00703935:; BB(0x00703935);
    /* 00703935: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00703938: je 0x703de9 */ if (fZ) goto L_00703de9;
L_0070393e:; BB(0x0070393e);
    /* 0070393e: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00703941: je 0x703b05 */ if (fZ) goto L_00703b05;
L_00703947:; BB(0x00703947);
    /* 00703947: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070394a: jne 0x703ae4 */ if (!fZ) goto L_00703ae4;
L_00703950:; BB(0x00703950);
    /* 00703950: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 00703954: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00703955: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00703956: movsx ebp, word ptr [esi + 4] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_esi+0x4u));
    /* 0070395a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0070395b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0070395c: call 0x7064d8 */ r_esp -= 4; W32(r_esp, 0x703961u); f_007064d8();
    /* 00703961: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00703964: cmp ebp, 0x2c4 */ {  u32 a = r_ebp; u32 b = 0x2c4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070396a: je 0x703d85 */ if (fZ) goto L_00703d85;
L_00703970:; BB(0x00703970);
    /* 00703970: cmp ebp, 0x2c7 */ {  u32 a = r_ebp; u32 b = 0x2c7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00703976: je 0x703d55 */ if (fZ) goto L_00703d55;
L_0070397c:; BB(0x0070397c);
    /* 0070397c: cmp ebp, 0x68c */ {  u32 a = r_ebp; u32 b = 0x68cu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00703982: jl 0x7039b9 */ if ((fS!=fO)) goto L_007039b9;
L_00703984:; BB(0x00703984);
    /* 00703984: cmp ebp, 0x697 */ {  u32 a = r_ebp; u32 b = 0x697u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0070398a: jg 0x7039b9 */ if ((!fZ&&fS==fO)) goto L_007039b9;
L_0070398c:; BB(0x0070398c);
    /* 0070398c: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 00703990: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00703991: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00703992: mov ebp, 1 */ r_ebp = 0x1u;
    /* 00703997: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 00703999: call 0x70625c */ r_esp -= 4; W32(r_esp, 0x70399eu); f_0070625c();
    /* 0070399e: mov eax, dword ptr [0xa96ed4] */ r_eax = R32((u32)(0xa96ed4u));
    /* 007039a3: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 007039a7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007039a8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007039a9: push dword ptr [eax + 0xa54] */ { u32 v = R32((u32)(r_eax+0xa54u)); r_esp -= 4; W32(r_esp, v); }
    /* 007039af: call 0x7067e4 */ r_esp -= 4; W32(r_esp, 0x7039b4u); f_007067e4();
    /* 007039b4: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007039b7: jmp 0x7039cb */ goto L_007039cb;
L_007039b9:; BB(0x007039b9);
    /* 007039b9: movzx ecx, word ptr [edi] */ r_ecx = (u32)R16((u32)(r_edi));
    /* 007039bc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007039bd: mov ebp, 3 */ r_ebp = 0x3u;
    /* 007039c2: call 0x815e78 */ r_esp -= 4; W32(r_esp, 0x7039c7u); f_00815e78();
    /* 007039c7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007039c8: mov word ptr [edi], ax */ W16((u32)(r_edi), (u16)r_eax);
L_007039cb:; BB(0x007039cb);
    /* 007039cb: cmp ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007039ce: jle 0x703ace */ if ((fZ||fS!=fO)) goto L_00703ace;
L_007039d4:; BB(0x007039d4);
    /* 007039d4: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 007039d8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007039d9: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007039da: call 0x7068fc */ r_esp -= 4; W32(r_esp, 0x7039dfu); f_007068fc();
    /* 007039df: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007039e2: mov ecx, dword ptr [0xa96eb8] */ r_ecx = R32((u32)(0xa96eb8u));
    /* 007039e8: movsx eax, word ptr [esi + 6] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x6u));
    /* 007039ec: mov dword ptr [esp + 0x3c], eax */ W32((u32)(r_esp+0x3cu), r_eax);
    /* 007039f0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007039f2: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 007039f6: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 007039f9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 007039fb: jle 0x703a2a */ if ((fZ||fS!=fO)) goto L_00703a2a;
L_007039fd:; BB(0x007039fd);
    /* 007039fd: mov edx, dword ptr [esp + 0x3c] */ r_edx = R32((u32)(r_esp+0x3cu));
    /* 00703a01: mov ecx, dword ptr [ecx] */ r_ecx = R32((u32)(r_ecx));
    /* 00703a03: mov dword ptr [esp + 0x30], esi */ W32((u32)(r_esp+0x30u), r_esi);
    /* 00703a07: mov dword ptr [esp + 0x2c], edi */ W32((u32)(r_esp+0x2cu), r_edi);
    /* 00703a0b: mov edi, dword ptr [esp + 0x38] */ r_edi = R32((u32)(r_esp+0x38u));
L_00703a0f:; BB(0x00703a0f);
    /* 00703a0f: movsx esi, word ptr [ecx + edi*2] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ecx+r_edi*2));
    /* 00703a13: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00703a16: cmp edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00703a18: je 0x703d48 */ if (fZ) goto L_00703d48;
L_00703a1e:; BB(0x00703a1e);
    /* 00703a1e: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00703a20: jl 0x703a0f */ if ((fS!=fO)) goto L_00703a0f;
L_00703a22:; BB(0x00703a22);
    /* 00703a22: mov esi, dword ptr [esp + 0x30] */ r_esi = R32((u32)(r_esp+0x30u));
    /* 00703a26: mov edi, dword ptr [esp + 0x2c] */ r_edi = R32((u32)(r_esp+0x2cu));
L_00703a2a:; BB(0x00703a2a);
    /* 00703a2a: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00703a2c: je 0x703a70 */ if (fZ) goto L_00703a70;
L_00703a2e:; BB(0x00703a2e);
    /* 00703a2e: jle 0x703a89 */ if ((fZ||fS!=fO)) goto L_00703a89;
L_00703a30:; BB(0x00703a30);
    /* 00703a30: cmp ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00703a33: jle 0x703a55 */ if ((fZ||fS!=fO)) goto L_00703a55;
L_00703a35:; BB(0x00703a35);
    /* 00703a35: cmp ebp, 3 */ {  u32 a = r_ebp; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00703a38: jne 0x703a89 */ if (!fZ) goto L_00703a89;
L_00703a3a:; BB(0x00703a3a);
    /* 00703a3a: mov eax, dword ptr [0xa96ed4] */ r_eax = R32((u32)(0xa96ed4u));
    /* 00703a3f: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 00703a43: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00703a44: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00703a45: push dword ptr [eax + 0x1784] */ { u32 v = R32((u32)(r_eax+0x1784u)); r_esp -= 4; W32(r_esp, v); }
    /* 00703a4b: call 0x7067e4 */ r_esp -= 4; W32(r_esp, 0x703a50u); f_007067e4();
    /* 00703a50: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00703a53: jmp 0x703a89 */ goto L_00703a89;
L_00703a55:; BB(0x00703a55);
    /* 00703a55: mov eax, dword ptr [0xa96ed4] */ r_eax = R32((u32)(0xa96ed4u));
    /* 00703a5a: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 00703a5e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00703a5f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00703a60: push dword ptr [eax + 0x1780] */ { u32 v = R32((u32)(r_eax+0x1780u)); r_esp -= 4; W32(r_esp, v); }
    /* 00703a66: call 0x7067e4 */ r_esp -= 4; W32(r_esp, 0x703a6bu); f_007067e4();
    /* 00703a6b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00703a6e: jmp 0x703a89 */ goto L_00703a89;
L_00703a70:; BB(0x00703a70);
    /* 00703a70: mov eax, dword ptr [0xa96ed4] */ r_eax = R32((u32)(0xa96ed4u));
    /* 00703a75: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 00703a79: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00703a7a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00703a7b: push dword ptr [eax + 0x177c] */ { u32 v = R32((u32)(r_eax+0x177cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00703a81: call 0x7067e4 */ r_esp -= 4; W32(r_esp, 0x703a86u); f_007067e4();
    /* 00703a86: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00703a89:; BB(0x00703a89);
    /* 00703a89: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 00703a8d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00703a8e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00703a8f: call 0x7068fc */ r_esp -= 4; W32(r_esp, 0x703a94u); f_007068fc();
    /* 00703a94: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00703a97:; BB(0x00703a97);
    /* 00703a97: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00703a99: cmp ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00703a9c: je 0x703cc2 */ if (fZ) goto L_00703cc2;
L_00703aa2:; BB(0x00703aa2);
    /* 00703aa2: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 00703aa6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00703aa7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00703aa8: mov ebp, dword ptr [esp + 0x44] */ r_ebp = R32((u32)(r_esp+0x44u));
    /* 00703aac: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00703aad: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00703aae: call 0x7064d8 */ r_esp -= 4; W32(r_esp, 0x703ab3u); f_007064d8();
    /* 00703ab3: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00703ab6:; BB(0x00703ab6);
    /* 00703ab6: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00703ab9: jle 0x703ace */ if ((fZ||fS!=fO)) goto L_00703ace;
L_00703abb:; BB(0x00703abb);
    /* 00703abb: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 00703abf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00703ac0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00703ac1: movsx ecx, word ptr [esi + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_esi+0x8u));
    /* 00703ac5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00703ac6: call 0x706b60 */ r_esp -= 4; W32(r_esp, 0x703acbu); f_00706b60();
    /* 00703acb: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00703ace:; BB(0x00703ace);
    /* 00703ace: movzx eax, word ptr [edi] */ r_eax = (u32)R16((u32)(r_edi));
    /* 00703ad1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00703ad2: call 0x815e78 */ r_esp -= 4; W32(r_esp, 0x703ad7u); f_00815e78();
    /* 00703ad7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00703ad8: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 00703adc: mov word ptr [edi], ax */ W16((u32)(r_edi), (u16)r_eax);
    /* 00703adf: jmp 0x703c9d */ goto L_00703c9d;
L_00703ae4:; BB(0x00703ae4);
    /* 00703ae4: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00703ae7: jne 0x703c9d */ if (!fZ) goto L_00703c9d;
L_00703aed:; BB(0x00703aed);
    /* 00703aed: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 00703af1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00703af2: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00703af3: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00703af4: call 0x7069fc */ r_esp -= 4; W32(r_esp, 0x703af9u); f_007069fc();
    /* 00703af9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00703afc: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 00703b00: jmp 0x703c9d */ goto L_00703c9d;
L_00703b05:; BB(0x00703b05);
    /* 00703b05: movsx ebp, word ptr [esi + 4] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_esi+0x4u));
    /* 00703b09: cmp ebp, 0x2c8 */ {  u32 a = r_ebp; u32 b = 0x2c8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00703b0f: je 0x703b20 */ if (fZ) goto L_00703b20;
L_00703b11:; BB(0x00703b11);
    /* 00703b11: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 00703b15: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00703b16: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00703b17: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00703b18: call 0x706b60 */ r_esp -= 4; W32(r_esp, 0x703b1du); f_00706b60();
    /* 00703b1d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00703b20:; BB(0x00703b20);
    /* 00703b20: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00703b22: mov dword ptr [esp + 0x3c], ecx */ W32((u32)(r_esp+0x3cu), r_ecx);
    /* 00703b26: cmp ebp, 0x2c7 */ {  u32 a = r_ebp; u32 b = 0x2c7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00703b2c: je 0x703db4 */ if (fZ) goto L_00703db4;
L_00703b32:; BB(0x00703b32);
    /* 00703b32: cmp ebp, 0x68c */ {  u32 a = r_ebp; u32 b = 0x68cu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00703b38: jl 0x703b74 */ if ((fS!=fO)) goto L_00703b74;
L_00703b3a:; BB(0x00703b3a);
    /* 00703b3a: cmp ebp, 0x697 */ {  u32 a = r_ebp; u32 b = 0x697u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00703b40: jg 0x703b74 */ if ((!fZ&&fS==fO)) goto L_00703b74;
L_00703b42:; BB(0x00703b42);
    /* 00703b42: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 00703b46: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00703b47: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00703b48: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 00703b4a: call 0x70625c */ r_esp -= 4; W32(r_esp, 0x703b4fu); f_0070625c();
    /* 00703b4f: mov ebp, dword ptr [0xa96ed4] */ r_ebp = R32((u32)(0xa96ed4u));
    /* 00703b55: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 00703b59: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00703b5a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00703b5b: push dword ptr [ebp + 0xa54] */ { u32 v = R32((u32)(r_ebp+0xa54u)); r_esp -= 4; W32(r_esp, v); }
    /* 00703b61: call 0x7067e4 */ r_esp -= 4; W32(r_esp, 0x703b66u); f_007067e4();
    /* 00703b66: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00703b69: mov ecx, 2 */ r_ecx = 0x2u;
    /* 00703b6e: mov dword ptr [esp + 0x3c], ecx */ W32((u32)(r_esp+0x3cu), r_ecx);
    /* 00703b72: jmp 0x703b80 */ goto L_00703b80;
L_00703b74:; BB(0x00703b74);
    /* 00703b74: cmp ebp, 0x698 */ {  u32 a = r_ebp; u32 b = 0x698u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00703b7a: je 0x703d8c */ if (fZ) goto L_00703d8c;
L_00703b80:; BB(0x00703b80);
    /* 00703b80: cmp ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00703b83: jle 0x703c8c */ if ((fZ||fS!=fO)) goto L_00703c8c;
L_00703b89:; BB(0x00703b89);
    /* 00703b89: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 00703b8d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00703b8e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00703b8f: movsx ebp, word ptr [esi + 6] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_esi+0x6u));
    /* 00703b93: call 0x7068fc */ r_esp -= 4; W32(r_esp, 0x703b98u); f_007068fc();
    /* 00703b98: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00703b9b: mov ecx, dword ptr [esp + 0x3c] */ r_ecx = R32((u32)(r_esp+0x3cu));
    /* 00703b9f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00703ba1: jne 0x703bb4 */ if (!fZ) goto L_00703bb4;
L_00703ba3:; BB(0x00703ba3);
    /* 00703ba3: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 00703ba7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00703ba8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00703ba9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00703baa: call 0x706b60 */ r_esp -= 4; W32(r_esp, 0x703bafu); f_00706b60();
    /* 00703baf: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00703bb2: jmp 0x703bdb */ goto L_00703bdb;
L_00703bb4:; BB(0x00703bb4);
    /* 00703bb4: mov ecx, dword ptr [0xa96ebc] */ r_ecx = R32((u32)(0xa96ebcu));
    /* 00703bba: mov ecx, dword ptr [ecx] */ r_ecx = R32((u32)(r_ecx));
    /* 00703bbc: movsx eax, word ptr [ecx + ebp*2 - 0xb58] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+r_ebp*2+0xfffff4a8u));
    /* 00703bc4: mov ecx, dword ptr [0xa96ed4] */ r_ecx = R32((u32)(0xa96ed4u));
    /* 00703bca: lea ebp, [esp + 0xc] */ r_ebp = (u32)(r_esp+0xcu);
    /* 00703bce: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00703bcf: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00703bd0: push dword ptr [ecx + eax*4] */ { u32 v = R32((u32)(r_ecx+r_eax*4)); r_esp -= 4; W32(r_esp, v); }
    /* 00703bd3: call 0x7067e4 */ r_esp -= 4; W32(r_esp, 0x703bd8u); f_007067e4();
    /* 00703bd8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00703bdb:; BB(0x00703bdb);
    /* 00703bdb: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00703bde: jle 0x703c8c */ if ((fZ||fS!=fO)) goto L_00703c8c;
L_00703be4:; BB(0x00703be4);
    /* 00703be4: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 00703be8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00703be9: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00703bea: call 0x7068fc */ r_esp -= 4; W32(r_esp, 0x703befu); f_007068fc();
    /* 00703bef: movsx ecx, word ptr [esi + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_esi+0x8u));
    /* 00703bf3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00703bf4: call 0x706320 */ r_esp -= 4; W32(r_esp, 0x703bf9u); f_00706320();
    /* 00703bf9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00703bfc: mov ecx, dword ptr [0xa96eb4] */ r_ecx = R32((u32)(0xa96eb4u));
    /* 00703c02: movzx ecx, byte ptr [eax + ecx] */ r_ecx = (u32)R8((u32)(r_eax+r_ecx));
    /* 00703c06: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00703c09: jne 0x703c34 */ if (!fZ) goto L_00703c34;
L_00703c0b:; BB(0x00703c0b);
    /* 00703c0b: mov ebp, dword ptr [0xa96ed4] */ r_ebp = R32((u32)(0xa96ed4u));
    /* 00703c11: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 00703c15: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00703c16: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00703c17: push dword ptr [ebp + 0x19e4] */ { u32 v = R32((u32)(r_ebp+0x19e4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00703c1d: call 0x7067e4 */ r_esp -= 4; W32(r_esp, 0x703c22u); f_007067e4();
    /* 00703c22: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 00703c26: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00703c27: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00703c28: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00703c2a: call 0x70625c */ r_esp -= 4; W32(r_esp, 0x703c2fu); f_0070625c();
    /* 00703c2f: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00703c32: jmp 0x703c60 */ goto L_00703c60;
L_00703c34:; BB(0x00703c34);
    /* 00703c34: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00703c37: jne 0x703c60 */ if (!fZ) goto L_00703c60;
L_00703c39:; BB(0x00703c39);
    /* 00703c39: mov ebp, dword ptr [0xa96ed4] */ r_ebp = R32((u32)(0xa96ed4u));
    /* 00703c3f: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 00703c43: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00703c44: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00703c45: push dword ptr [ebp + 0x19e8] */ { u32 v = R32((u32)(r_ebp+0x19e8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00703c4b: call 0x7067e4 */ r_esp -= 4; W32(r_esp, 0x703c50u); f_007067e4();
    /* 00703c50: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 00703c54: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00703c55: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00703c56: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00703c58: call 0x70625c */ r_esp -= 4; W32(r_esp, 0x703c5du); f_0070625c();
    /* 00703c5d: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00703c60:; BB(0x00703c60);
    /* 00703c60: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 00703c64: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00703c65: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00703c66: movsx ebp, word ptr [esi + 8] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_esi+0x8u));
    /* 00703c6a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00703c6b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00703c6c: call 0x7064d8 */ r_esp -= 4; W32(r_esp, 0x703c71u); f_007064d8();
    /* 00703c71: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00703c74: cmp ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00703c77: jle 0x703c8c */ if ((fZ||fS!=fO)) goto L_00703c8c;
L_00703c79:; BB(0x00703c79);
    /* 00703c79: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 00703c7d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00703c7e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00703c7f: movsx ecx, word ptr [esi + 0xa] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_esi+0xau));
    /* 00703c83: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00703c84: call 0x706b60 */ r_esp -= 4; W32(r_esp, 0x703c89u); f_00706b60();
    /* 00703c89: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00703c8c:; BB(0x00703c8c);
    /* 00703c8c: movzx eax, word ptr [edi] */ r_eax = (u32)R16((u32)(r_edi));
    /* 00703c8f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00703c90: call 0x815e78 */ r_esp -= 4; W32(r_esp, 0x703c95u); f_00815e78();
    /* 00703c95: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00703c96: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 00703c9a: mov word ptr [edi], ax */ W16((u32)(r_edi), (u16)r_eax);
L_00703c9d:; BB(0x00703c9d);
    /* 00703c9d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00703c9f: mov word ptr [edi + edx*2], cx */ W16((u32)(r_edi+r_edx*2), (u16)r_ecx);
    /* 00703ca3: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00703ca6: mov eax, edx */ r_eax = r_edx;
    /* 00703ca8: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00703cab: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00703cac: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00703cad: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00703cae: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00703caf: ret  */ FN_RET(0x007038fd); r_esp += 4; return;
L_00703cb0:; BB(0x00703cb0);
    /* 00703cb0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00703cb2: mov word ptr [edi], cx */ W16((u32)(r_edi), (u16)r_ecx);
    /* 00703cb5: mov eax, 1 */ r_eax = 0x1u;
    /* 00703cba: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00703cbd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00703cbe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00703cbf: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00703cc0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00703cc1: ret  */ FN_RET(0x007038fd); r_esp += 4; return;
L_00703cc2:; BB(0x00703cc2);
    /* 00703cc2: mov eax, dword ptr [0xa96eb8] */ r_eax = R32((u32)(0xa96eb8u));
    /* 00703cc7: mov ebp, dword ptr [eax + 0xc] */ r_ebp = R32((u32)(r_eax+0xcu));
    /* 00703cca: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00703ccc: mov dword ptr [esp + 0x38], ecx */ W32((u32)(r_esp+0x38u), r_ecx);
    /* 00703cd0: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00703cd2: jle 0x703aa2 */ if ((fZ||fS!=fO)) goto L_00703aa2;
L_00703cd8:; BB(0x00703cd8);
    /* 00703cd8: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00703cdb: mov dword ptr [esp + 0x34], edx */ W32((u32)(r_esp+0x34u), r_edx);
    /* 00703cdf: mov dword ptr [esp + 0x30], esi */ W32((u32)(r_esp+0x30u), r_esi);
    /* 00703ce3: mov esi, dword ptr [esp + 0x3c] */ r_esi = R32((u32)(r_esp+0x3cu));
    /* 00703ce7: mov dword ptr [esp + 0x2c], edi */ W32((u32)(r_esp+0x2cu), r_edi);
    /* 00703ceb: mov edi, dword ptr [esp + 0x38] */ r_edi = R32((u32)(r_esp+0x38u));
L_00703cef:; BB(0x00703cef);
    /* 00703cef: cmp si, word ptr [ecx + edi*2] */ {  u32 a = (u16)r_esi; u32 b = R16((u32)(r_ecx+r_edi*2)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 00703cf3: lea edx, [edi + edi] */ r_edx = (u32)(r_edi+r_edi);
    /* 00703cf6: je 0x703d2d */ if (fZ) goto L_00703d2d;
L_00703cf8:; BB(0x00703cf8);
    /* 00703cf8: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00703cfb: cmp edi, ebp */ {  u32 a = r_edi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00703cfd: jl 0x703cef */ if ((fS!=fO)) goto L_00703cef;
L_00703cff:; BB(0x00703cff);
    /* 00703cff: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 00703d03: mov esi, dword ptr [esp + 0x30] */ r_esi = R32((u32)(r_esp+0x30u));
    /* 00703d07: mov edi, dword ptr [esp + 0x2c] */ r_edi = R32((u32)(r_esp+0x2cu));
L_00703d0b:; BB(0x00703d0b);
    /* 00703d0b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00703d0d: je 0x703aa2 */ if (fZ) goto L_00703aa2;
L_00703d13:; BB(0x00703d13);
    /* 00703d13: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 00703d17: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00703d18: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00703d19: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00703d1a: mov ebp, dword ptr [esp + 0x48] */ r_ebp = R32((u32)(r_esp+0x48u));
    /* 00703d1e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00703d1f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00703d20: call 0x70655c */ r_esp -= 4; W32(r_esp, 0x703d25u); f_0070655c();
    /* 00703d25: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00703d28: jmp 0x703ab6 */ goto L_00703ab6;
L_00703d2d:; BB(0x00703d2d);
    /* 00703d2d: mov esi, dword ptr [esp + 0x30] */ r_esi = R32((u32)(r_esp+0x30u));
    /* 00703d31: mov edi, dword ptr [esp + 0x2c] */ r_edi = R32((u32)(r_esp+0x2cu));
    /* 00703d35: mov ebp, dword ptr [0xa96ed4] */ r_ebp = R32((u32)(0xa96ed4u));
    /* 00703d3b: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 00703d3e: movsx ecx, word ptr [ecx + edx] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ecx+r_edx));
    /* 00703d42: mov edx, dword ptr [ebp + ecx*4] */ r_edx = R32((u32)(r_ebp+r_ecx*4));
    /* 00703d46: jmp 0x703d0b */ goto L_00703d0b;
L_00703d48:; BB(0x00703d48);
    /* 00703d48: mov esi, dword ptr [esp + 0x30] */ r_esi = R32((u32)(r_esp+0x30u));
    /* 00703d4c: mov edi, dword ptr [esp + 0x2c] */ r_edi = R32((u32)(r_esp+0x2cu));
    /* 00703d50: jmp 0x703a97 */ goto L_00703a97;
L_00703d55:; BB(0x00703d55);
    /* 00703d55: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 00703d59: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00703d5a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00703d5b: mov ebp, 2 */ r_ebp = 0x2u;
    /* 00703d60: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 00703d62: call 0x70625c */ r_esp -= 4; W32(r_esp, 0x703d67u); f_0070625c();
    /* 00703d67: mov eax, dword ptr [0xa96ed4] */ r_eax = R32((u32)(0xa96ed4u));
    /* 00703d6c: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 00703d70: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00703d71: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00703d72: push dword ptr [eax + 0xa60] */ { u32 v = R32((u32)(r_eax+0xa60u)); r_esp -= 4; W32(r_esp, v); }
    /* 00703d78: call 0x7067e4 */ r_esp -= 4; W32(r_esp, 0x703d7du); f_007067e4();
    /* 00703d7d: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00703d80: jmp 0x7039cb */ goto L_007039cb;
L_00703d85:; BB(0x00703d85);
    /* 00703d85: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00703d87: jmp 0x7039cb */ goto L_007039cb;
L_00703d8c:; BB(0x00703d8c);
    /* 00703d8c: mov ebp, dword ptr [0xa96ed4] */ r_ebp = R32((u32)(0xa96ed4u));
    /* 00703d92: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 00703d96: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00703d97: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00703d98: push dword ptr [ebp + 0xa54] */ { u32 v = R32((u32)(r_ebp+0xa54u)); r_esp -= 4; W32(r_esp, v); }
    /* 00703d9e: call 0x7067e4 */ r_esp -= 4; W32(r_esp, 0x703da3u); f_007067e4();
    /* 00703da3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00703da6: mov ecx, 2 */ r_ecx = 0x2u;
    /* 00703dab: mov dword ptr [esp + 0x3c], ecx */ W32((u32)(r_esp+0x3cu), r_ecx);
    /* 00703daf: jmp 0x703b80 */ goto L_00703b80;
L_00703db4:; BB(0x00703db4);
    /* 00703db4: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 00703db8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00703db9: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00703dba: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 00703dbc: call 0x70625c */ r_esp -= 4; W32(r_esp, 0x703dc1u); f_0070625c();
    /* 00703dc1: mov ebp, dword ptr [0xa96ed4] */ r_ebp = R32((u32)(0xa96ed4u));
    /* 00703dc7: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 00703dcb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00703dcc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00703dcd: push dword ptr [ebp + 0xa60] */ { u32 v = R32((u32)(r_ebp+0xa60u)); r_esp -= 4; W32(r_esp, v); }
    /* 00703dd3: call 0x7067e4 */ r_esp -= 4; W32(r_esp, 0x703dd8u); f_007067e4();
    /* 00703dd8: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00703ddb: mov ecx, 2 */ r_ecx = 0x2u;
    /* 00703de0: mov dword ptr [esp + 0x3c], ecx */ W32((u32)(r_esp+0x3cu), r_ecx);
    /* 00703de4: jmp 0x703b80 */ goto L_00703b80;
L_00703de9:; BB(0x00703de9);
    /* 00703de9: cmp ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00703dec: jle 0x703e10 */ if ((fZ||fS!=fO)) goto L_00703e10;
L_00703dee:; BB(0x00703dee);
    /* 00703dee: lea ebx, [esp + 0x10] */ r_ebx = (u32)(r_esp+0x10u);
    /* 00703df2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00703df3: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00703df4: call 0x706360 */ r_esp -= 4; W32(r_esp, 0x703df9u); f_00706360();
    /* 00703df9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00703dfc: lea eax, [esp + 0x10] */ r_eax = (u32)(r_esp+0x10u);
    /* 00703e00: mov edx, edi */ r_edx = r_edi;
    /* 00703e02: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00703e04: call 0x7038fd */ r_esp -= 4; W32(r_esp, 0x703e09u); f_007038fd();
    /* 00703e09: mov edx, eax */ r_edx = r_eax;
    /* 00703e0b: jmp 0x703c9d */ goto L_00703c9d;
L_00703e10:; BB(0x00703e10);
    /* 00703e10: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 00703e14: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00703e15: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00703e16: movsx ecx, word ptr [esi + 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_esi+0x4u));
    /* 00703e1a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00703e1b: call 0x706b60 */ r_esp -= 4; W32(r_esp, 0x703e20u); f_00706b60();
    /* 00703e20: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00703e23: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 00703e27: jmp 0x703c9d */ goto L_00703c9d;
L_00703e2c:; BB(0x00703e2c);
    /* 00703e2c: mov ecx, 2 */ r_ecx = 0x2u;
    /* 00703e31: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00703e34: mov ebp, 0 */ r_ebp = 0x0u;
    /* 00703e39: jle 0x703e3d */ if ((fZ||fS!=fO)) goto L_00703e3d;
L_00703e3b:; BB(0x00703e3b);
    /* 00703e3b: mov ebx, ecx */ r_ebx = r_ecx;
L_00703e3d:; BB(0x00703e3d);
    /* 00703e3d: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00703e3f: jle 0x703e73 */ if ((fZ||fS!=fO)) goto L_00703e73;
L_00703e41:; BB(0x00703e41);
    /* 00703e41: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 00703e45: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00703e46: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00703e47: movsx eax, word ptr [esi + ebp*2 + 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+r_ebp*2+0x4u));
    /* 00703e4c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00703e4d: call 0x706b60 */ r_esp -= 4; W32(r_esp, 0x703e52u); f_00706b60();
    /* 00703e52: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00703e55: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00703e58: cmp ebp, ebx */ {  u32 a = r_ebp; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00703e5a: jge 0x703e73 */ if ((fS==fO)) goto L_00703e73;
L_00703e5c:; BB(0x00703e5c);
    /* 00703e5c: cmp ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00703e5f: jne 0x703e41 */ if (!fZ) goto L_00703e41;
L_00703e61:; BB(0x00703e61);
    /* 00703e61: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 00703e65: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00703e66: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00703e67: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00703e69: call 0x70625c */ r_esp -= 4; W32(r_esp, 0x703e6eu); f_0070625c();
    /* 00703e6e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00703e71: jmp 0x703e41 */ goto L_00703e41;
L_00703e73:; BB(0x00703e73);
    /* 00703e73: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 00703e77: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00703e78: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00703e79: push 0x3f */ { u32 v = 0x3fu; r_esp -= 4; W32(r_esp, v); }
    /* 00703e7b: call 0x70625c */ r_esp -= 4; W32(r_esp, 0x703e80u); f_0070625c();
    /* 00703e80: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00703e83: movsx ecx, word ptr [esi] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_esi));
    /* 00703e86: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00703e89: jg 0x703e94 */ if ((!fZ&&fS==fO)) goto L_00703e94;
L_00703e8b:; BB(0x00703e8b);
    /* 00703e8b: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 00703e8f: jmp 0x703c9d */ goto L_00703c9d;
L_00703e94:; BB(0x00703e94);
    /* 00703e94: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 00703e98: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00703e99: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00703e9a: call 0x7069b8 */ r_esp -= 4; W32(r_esp, 0x703e9fu); f_007069b8();
    /* 00703e9f: lea eax, [esp + 0x14] */ r_eax = (u32)(r_esp+0x14u);
    /* 00703ea3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00703ea4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00703ea5: movsx ecx, word ptr [esi + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_esi+0x8u));
    /* 00703ea9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00703eaa: call 0x706b60 */ r_esp -= 4; W32(r_esp, 0x703eafu); f_00706b60();
    /* 00703eaf: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00703eb2: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 00703eb6: jmp 0x703c9d */ goto L_00703c9d;
L_00703ebb:; BB(0x00703ebb);
    /* 00703ebb: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 00703ebf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00703ec0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00703ec1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00703ec2: call 0x706490 */ r_esp -= 4; W32(r_esp, 0x703ec7u); f_00706490();
    /* 00703ec7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00703eca: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 00703ece: jmp 0x703c9d */ goto L_00703c9d;
}

void f_00703ed4(void) /* sub_703ED4 */
{
    FN_ENTER(0x00703ed4);
    /* 00703ed4: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00703ed8: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 00703edc: movzx ecx, word ptr [esp + 0xc] */ r_ecx = (u32)R16((u32)(r_esp+0xcu));
    /* 00703ee1: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00703ee2: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00703ee3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00703ee4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00703ee5: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00703ee8: mov edi, ecx */ r_edi = r_ecx;
    /* 00703eea: mov esi, edx */ r_esi = r_edx;
    /* 00703eec: mov ebp, eax */ r_ebp = r_eax;
    /* 00703eee: mov dword ptr [esp + 0xc], 0 */ W32((u32)(r_esp+0xcu), 0x0u);
    /* 00703ef6: movsx ebx, word ptr [ebp] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_ebp));
    /* 00703efa: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00703efc: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00703efe: je 0x704329 */ if (fZ) goto L_00704329;
L_00703f04:; BB(0x00703f04);
    /* 00703f04: movsx eax, word ptr [ebp + 2] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x2u));
    /* 00703f08: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00703f0b: je 0x70457f */ if (fZ) goto L_0070457f;
L_00703f11:; BB(0x00703f11);
    /* 00703f11: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00703f14: je 0x7044ef */ if (fZ) goto L_007044ef;
L_00703f1a:; BB(0x00703f1a);
    /* 00703f1a: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00703f1d: je 0x7044ac */ if (fZ) goto L_007044ac;
L_00703f23:; BB(0x00703f23);
    /* 00703f23: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00703f26: je 0x7041ca */ if (fZ) goto L_007041ca;
L_00703f2c:; BB(0x00703f2c);
    /* 00703f2c: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00703f2f: jne 0x7041a9 */ if (!fZ) goto L_007041a9;
L_00703f35:; BB(0x00703f35);
    /* 00703f35: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00703f37: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 00703f3b: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00703f3e: jle 0x703f5a */ if ((fZ||fS!=fO)) goto L_00703f5a;
L_00703f40:; BB(0x00703f40);
    /* 00703f40: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 00703f44: cmp eax, 0x685 */ {  u32 a = r_eax; u32 b = 0x685u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00703f49: je 0x704353 */ if (fZ) goto L_00704353;
L_00703f4f:; BB(0x00703f4f);
    /* 00703f4f: cmp eax, 0x686 */ {  u32 a = r_eax; u32 b = 0x686u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00703f54: je 0x70433b */ if (fZ) goto L_0070433b;
L_00703f5a:; BB(0x00703f5a);
    /* 00703f5a: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 00703f5e: movsx edx, word ptr [ebp + 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x4u));
    /* 00703f62: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 00703f66: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00703f67: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00703f68: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00703f69: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00703f6a: call 0x7064d8 */ r_esp -= 4; W32(r_esp, 0x703f6fu); f_007064d8();
    /* 00703f6f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00703f72: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 00703f76: cmp eax, 0x2c4 */ {  u32 a = r_eax; u32 b = 0x2c4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00703f7b: je 0x7043ff */ if (fZ) goto L_007043ff;
L_00703f81:; BB(0x00703f81);
    /* 00703f81: cmp eax, 0x2c7 */ {  u32 a = r_eax; u32 b = 0x2c7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00703f86: je 0x7043a8 */ if (fZ) goto L_007043a8;
L_00703f8c:; BB(0x00703f8c);
    /* 00703f8c: mov ecx, eax */ r_ecx = r_eax;
    /* 00703f8e: cmp ecx, 0x68c */ {  u32 a = r_ecx; u32 b = 0x68cu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00703f94: jl 0x703fe7 */ if ((fS!=fO)) goto L_00703fe7;
L_00703f96:; BB(0x00703f96);
    /* 00703f96: cmp ecx, 0x697 */ {  u32 a = r_ecx; u32 b = 0x697u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00703f9c: jg 0x703fe7 */ if ((!fZ&&fS==fO)) goto L_00703fe7;
L_00703f9e:; BB(0x00703f9e);
    /* 00703f9e: lea edi, [esp + 0xc] */ r_edi = (u32)(r_esp+0xcu);
    /* 00703fa2: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00703fa7: mov dword ptr [esp + 0x30], ecx */ W32((u32)(r_esp+0x30u), r_ecx);
    /* 00703fab: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00703fac: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00703fad: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 00703faf: call 0x70625c */ r_esp -= 4; W32(r_esp, 0x703fb4u); f_0070625c();
    /* 00703fb4: mov edi, dword ptr [0xa96ed4] */ r_edi = R32((u32)(0xa96ed4u));
    /* 00703fba: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 00703fbe: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00703fbf: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00703fc0: push dword ptr [edi + 0xa80] */ { u32 v = R32((u32)(r_edi+0xa80u)); r_esp -= 4; W32(r_esp, v); }
    /* 00703fc6: call 0x7067e4 */ r_esp -= 4; W32(r_esp, 0x703fcbu); f_007067e4();
    /* 00703fcb: mov ecx, dword ptr [esp + 0x44] */ r_ecx = R32((u32)(r_esp+0x44u));
    /* 00703fcf: add ecx, 0xfffff974 */ {  u32 a = r_ecx; u32 b = 0xfffff974u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00703fd5: movzx edi, cx */ r_edi = (u32)(u16)r_ecx;
    /* 00703fd8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00703fd9: call 0x706b8c */ r_esp -= 4; W32(r_esp, 0x703fdeu); f_00706b8c();
    /* 00703fde: mov dword ptr [esp + 0x50], eax */ W32((u32)(r_esp+0x50u), r_eax);
    /* 00703fe2: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00703fe5: jmp 0x70405a */ goto L_0070405a;
L_00703fe7:; BB(0x00703fe7);
    /* 00703fe7: mov edi, eax */ r_edi = r_eax;
    /* 00703fe9: mov ecx, 3 */ r_ecx = 0x3u;
    /* 00703fee: mov dword ptr [esp + 0x30], ecx */ W32((u32)(r_esp+0x30u), r_ecx);
    /* 00703ff2: cmp edi, 0x2c5 */ {  u32 a = r_edi; u32 b = 0x2c5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00703ff8: je 0x70439d */ if (fZ) goto L_0070439d;
L_00703ffe:; BB(0x00703ffe);
    /* 00703ffe: mov ecx, eax */ r_ecx = r_eax;
    /* 00704000: cmp ecx, 0x2c6 */ {  u32 a = r_ecx; u32 b = 0x2c6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00704006: jne 0x704013 */ if (!fZ) goto L_00704013;
L_00704008:; BB(0x00704008);
    /* 00704008: mov ecx, 2 */ r_ecx = 0x2u;
    /* 0070400d: mov dword ptr [esp + 0x34], ecx */ W32((u32)(r_esp+0x34u), r_ecx);
    /* 00704011: jmp 0x70405a */ goto L_0070405a;
L_00704013:; BB(0x00704013);
    /* 00704013: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00704014: call 0x706320 */ r_esp -= 4; W32(r_esp, 0x704019u); f_00706320();
    /* 00704019: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0070401a: mov ecx, dword ptr [0xa96eb4] */ r_ecx = R32((u32)(0xa96eb4u));
    /* 00704020: movzx ecx, byte ptr [eax + ecx] */ r_ecx = (u32)R8((u32)(r_eax+r_ecx));
    /* 00704024: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00704026: je 0x704392 */ if (fZ) goto L_00704392;
L_0070402c:; BB(0x0070402c);
    /* 0070402c: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070402f: je 0x704051 */ if (fZ) goto L_00704051;
L_00704031:; BB(0x00704031);
    /* 00704031: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00704034: jne 0x704041 */ if (!fZ) goto L_00704041;
L_00704036:; BB(0x00704036);
    /* 00704036: mov ecx, 2 */ r_ecx = 0x2u;
    /* 0070403b: mov dword ptr [esp + 0x34], ecx */ W32((u32)(r_esp+0x34u), r_ecx);
    /* 0070403f: jmp 0x70405a */ goto L_0070405a;
L_00704041:; BB(0x00704041);
    /* 00704041: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00704044: jne 0x70405a */ if (!fZ) goto L_0070405a;
L_00704046:; BB(0x00704046);
    /* 00704046: mov ecx, 3 */ r_ecx = 0x3u;
    /* 0070404b: mov dword ptr [esp + 0x34], ecx */ W32((u32)(r_esp+0x34u), r_ecx);
    /* 0070404f: jmp 0x70405a */ goto L_0070405a;
L_00704051:; BB(0x00704051);
    /* 00704051: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00704056: mov dword ptr [esp + 0x34], ecx */ W32((u32)(r_esp+0x34u), r_ecx);
L_0070405a:; BB(0x0070405a);
    /* 0070405a: cmp ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0070405d: jle 0x704193 */ if ((fZ||fS!=fO)) goto L_00704193;
L_00704063:; BB(0x00704063);
    /* 00704063: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 00704067: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00704068: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00704069: call 0x7068fc */ r_esp -= 4; W32(r_esp, 0x70406eu); f_007068fc();
    /* 0070406e: movsx ecx, word ptr [ebp + 6] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x6u));
    /* 00704072: mov dword ptr [esp + 0x34], ecx */ W32((u32)(r_esp+0x34u), r_ecx);
    /* 00704076: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00704077: call 0x706340 */ r_esp -= 4; W32(r_esp, 0x70407cu); f_00706340();
    /* 0070407c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0070407f: mov ecx, dword ptr [0xa96eb0] */ r_ecx = R32((u32)(0xa96eb0u));
    /* 00704085: movzx ecx, byte ptr [eax + ecx] */ r_ecx = (u32)R8((u32)(r_eax+r_ecx));
    /* 00704089: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070408b: jne 0x7040bf */ if (!fZ) goto L_007040bf;
L_0070408d:; BB(0x0070408d);
    /* 0070408d: mov ecx, dword ptr [esp + 0x30] */ r_ecx = R32((u32)(r_esp+0x30u));
    /* 00704091: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00704093: je 0x70436b */ if (fZ) goto L_0070436b;
L_00704099:; BB(0x00704099);
    /* 00704099: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070409c: je 0x7040b8 */ if (fZ) goto L_007040b8;
L_0070409e:; BB(0x0070409e);
    /* 0070409e: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007040a1: jne 0x7040aa */ if (!fZ) goto L_007040aa;
L_007040a3:; BB(0x007040a3);
    /* 007040a3: mov ecx, 0x698 */ r_ecx = 0x698u;
    /* 007040a8: jmp 0x7040f4 */ goto L_007040f4;
L_007040aa:; BB(0x007040aa);
    /* 007040aa: mov edi, ecx */ r_edi = r_ecx;
    /* 007040ac: cmp edi, 3 */ {  u32 a = r_edi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007040af: jne 0x7040f4 */ if (!fZ) goto L_007040f4;
L_007040b1:; BB(0x007040b1);
    /* 007040b1: mov ecx, 0x69a */ r_ecx = 0x69au;
    /* 007040b6: jmp 0x7040f4 */ goto L_007040f4;
L_007040b8:; BB(0x007040b8);
    /* 007040b8: mov ecx, 0x699 */ r_ecx = 0x699u;
    /* 007040bd: jmp 0x7040f4 */ goto L_007040f4;
L_007040bf:; BB(0x007040bf);
    /* 007040bf: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007040c2: jne 0x704115 */ if (!fZ) goto L_00704115;
L_007040c4:; BB(0x007040c4);
    /* 007040c4: mov ecx, dword ptr [esp + 0x30] */ r_ecx = R32((u32)(r_esp+0x30u));
    /* 007040c8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007040ca: je 0x704375 */ if (fZ) goto L_00704375;
L_007040d0:; BB(0x007040d0);
    /* 007040d0: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007040d3: je 0x7040ef */ if (fZ) goto L_007040ef;
L_007040d5:; BB(0x007040d5);
    /* 007040d5: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007040d8: jne 0x7040e1 */ if (!fZ) goto L_007040e1;
L_007040da:; BB(0x007040da);
    /* 007040da: mov ecx, 0x69c */ r_ecx = 0x69cu;
    /* 007040df: jmp 0x7040f4 */ goto L_007040f4;
L_007040e1:; BB(0x007040e1);
    /* 007040e1: mov edi, ecx */ r_edi = r_ecx;
    /* 007040e3: cmp edi, 3 */ {  u32 a = r_edi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007040e6: jne 0x7040f4 */ if (!fZ) goto L_007040f4;
L_007040e8:; BB(0x007040e8);
    /* 007040e8: mov ecx, 0x69d */ r_ecx = 0x69du;
    /* 007040ed: jmp 0x7040f4 */ goto L_007040f4;
L_007040ef:; BB(0x007040ef);
    /* 007040ef: mov ecx, 0x279 */ r_ecx = 0x279u;
L_007040f4:; BB(0x007040f4);
    /* 007040f4: mov eax, dword ptr [0xa96ed4] */ r_eax = R32((u32)(0xa96ed4u));
    /* 007040f9: lea edi, [esp + 0xc] */ r_edi = (u32)(r_esp+0xcu);
    /* 007040fd: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007040fe: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007040ff: push dword ptr [eax + ecx*4] */ { u32 v = R32((u32)(r_eax+r_ecx*4)); r_esp -= 4; W32(r_esp, v); }
    /* 00704102: call 0x7067e4 */ r_esp -= 4; W32(r_esp, 0x704107u); f_007067e4();
    /* 00704107: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 0070410b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0070410c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0070410d: call 0x7068fc */ r_esp -= 4; W32(r_esp, 0x704112u); f_007068fc();
    /* 00704112: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00704115:; BB(0x00704115);
    /* 00704115: mov ecx, dword ptr [esp + 0x34] */ r_ecx = R32((u32)(r_esp+0x34u));
    /* 00704119: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070411b: je 0x704167 */ if (fZ) goto L_00704167;
L_0070411d:; BB(0x0070411d);
    /* 0070411d: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00704120: je 0x704387 */ if (fZ) goto L_00704387;
L_00704126:; BB(0x00704126);
    /* 00704126: mov edi, dword ptr [0xa96eb8] */ r_edi = R32((u32)(0xa96eb8u));
    /* 0070412c: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070412f: je 0x70437f */ if (fZ) goto L_0070437f;
L_00704135:; BB(0x00704135);
    /* 00704135: add edi, 0x10 */ {  u32 a = r_edi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
L_00704138:; BB(0x00704138);
    /* 00704138: mov ecx, dword ptr [esp + 0x2c] */ r_ecx = R32((u32)(r_esp+0x2cu));
    /* 0070413c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0070413d: call 0x706340 */ r_esp -= 4; W32(r_esp, 0x704142u); f_00706340();
    /* 00704142: mov ecx, dword ptr [edi] */ r_ecx = R32((u32)(r_edi));
    /* 00704144: lea edi, [esp + 0x10] */ r_edi = (u32)(r_esp+0x10u);
    /* 00704148: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00704149: movsx eax, word ptr [ecx + eax*2] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+r_eax*2));
    /* 0070414d: mov ecx, dword ptr [0xa96ed4] */ r_ecx = R32((u32)(0xa96ed4u));
    /* 00704153: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00704154: push dword ptr [ecx + eax*4] */ { u32 v = R32((u32)(r_ecx+r_eax*4)); r_esp -= 4; W32(r_esp, v); }
    /* 00704157: mov ecx, dword ptr [esp + 0x3c] */ r_ecx = R32((u32)(r_esp+0x3cu));
    /* 0070415b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0070415c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0070415d: call 0x70655c */ r_esp -= 4; W32(r_esp, 0x704162u); f_0070655c();
    /* 00704162: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00704165: jmp 0x70417b */ goto L_0070417b;
L_00704167:; BB(0x00704167);
    /* 00704167: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 0070416b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0070416c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0070416d: mov edi, dword ptr [esp + 0x34] */ r_edi = R32((u32)(r_esp+0x34u));
    /* 00704171: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00704172: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00704173: call 0x7064d8 */ r_esp -= 4; W32(r_esp, 0x704178u); f_007064d8();
    /* 00704178: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0070417b:; BB(0x0070417b);
    /* 0070417b: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0070417e: jle 0x704193 */ if ((fZ||fS!=fO)) goto L_00704193;
L_00704180:; BB(0x00704180);
    /* 00704180: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 00704184: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00704185: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00704186: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0070418a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0070418b: call 0x706b60 */ r_esp -= 4; W32(r_esp, 0x704190u); f_00706b60();
    /* 00704190: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00704193:; BB(0x00704193);
    /* 00704193: movzx eax, word ptr [esi] */ r_eax = (u32)R16((u32)(r_esi));
    /* 00704196: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00704197: call 0x815e78 */ r_esp -= 4; W32(r_esp, 0x70419cu); f_00815e78();
    /* 0070419c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0070419d: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 007041a1: mov word ptr [esi], ax */ W16((u32)(r_esi), (u16)r_eax);
    /* 007041a4: jmp 0x704316 */ goto L_00704316;
L_007041a9:; BB(0x007041a9);
    /* 007041a9: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007041ac: jne 0x704316 */ if (!fZ) goto L_00704316;
L_007041b2:; BB(0x007041b2);
    /* 007041b2: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 007041b6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007041b7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007041b8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007041b9: call 0x7069fc */ r_esp -= 4; W32(r_esp, 0x7041beu); f_007069fc();
    /* 007041be: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007041c1: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 007041c5: jmp 0x704316 */ goto L_00704316;
L_007041ca:; BB(0x007041ca);
    /* 007041ca: cmp ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007041cd: jle 0x7041eb */ if ((fZ||fS!=fO)) goto L_007041eb;
L_007041cf:; BB(0x007041cf);
    /* 007041cf: movsx ecx, word ptr [ebp + 0xa] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xau));
    /* 007041d3: cmp ecx, 0x685 */ {  u32 a = r_ecx; u32 b = 0x685u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007041d9: je 0x70442f */ if (fZ) goto L_0070442f;
L_007041df:; BB(0x007041df);
    /* 007041df: cmp ecx, 0x686 */ {  u32 a = r_ecx; u32 b = 0x686u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007041e5: je 0x704417 */ if (fZ) goto L_00704417;
L_007041eb:; BB(0x007041eb);
    /* 007041eb: movsx edi, word ptr [ebp + 4] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ebp+0x4u));
    /* 007041ef: cmp edi, 0x2c8 */ {  u32 a = r_edi; u32 b = 0x2c8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007041f5: je 0x704206 */ if (fZ) goto L_00704206;
L_007041f7:; BB(0x007041f7);
    /* 007041f7: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 007041fb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007041fc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007041fd: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007041fe: call 0x706b60 */ r_esp -= 4; W32(r_esp, 0x704203u); f_00706b60();
    /* 00704203: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00704206:; BB(0x00704206);
    /* 00704206: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00704208: mov dword ptr [esp + 0x30], ecx */ W32((u32)(r_esp+0x30u), r_ecx);
    /* 0070420c: cmp edi, 0x2c7 */ {  u32 a = r_edi; u32 b = 0x2c7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00704212: je 0x704477 */ if (fZ) goto L_00704477;
L_00704218:; BB(0x00704218);
    /* 00704218: cmp edi, 0x68c */ {  u32 a = r_edi; u32 b = 0x68cu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0070421e: jl 0x70425a */ if ((fS!=fO)) goto L_0070425a;
L_00704220:; BB(0x00704220);
    /* 00704220: cmp edi, 0x697 */ {  u32 a = r_edi; u32 b = 0x697u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00704226: jg 0x70425a */ if ((!fZ&&fS==fO)) goto L_0070425a;
L_00704228:; BB(0x00704228);
    /* 00704228: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 0070422c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0070422d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0070422e: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 00704230: call 0x70625c */ r_esp -= 4; W32(r_esp, 0x704235u); f_0070625c();
    /* 00704235: mov edi, dword ptr [0xa96ed4] */ r_edi = R32((u32)(0xa96ed4u));
    /* 0070423b: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 0070423f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00704240: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00704241: push dword ptr [edi + 0xa80] */ { u32 v = R32((u32)(r_edi+0xa80u)); r_esp -= 4; W32(r_esp, v); }
    /* 00704247: call 0x7067e4 */ r_esp -= 4; W32(r_esp, 0x70424cu); f_007067e4();
    /* 0070424c: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0070424f: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00704254: mov dword ptr [esp + 0x30], ecx */ W32((u32)(r_esp+0x30u), r_ecx);
    /* 00704258: jmp 0x704266 */ goto L_00704266;
L_0070425a:; BB(0x0070425a);
    /* 0070425a: cmp edi, 0x698 */ {  u32 a = r_edi; u32 b = 0x698u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00704260: je 0x70444f */ if (fZ) goto L_0070444f;
L_00704266:; BB(0x00704266);
    /* 00704266: cmp ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00704269: jle 0x704305 */ if ((fZ||fS!=fO)) goto L_00704305;
L_0070426f:; BB(0x0070426f);
    /* 0070426f: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 00704273: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00704274: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00704275: movsx edi, word ptr [ebp + 6] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ebp+0x6u));
    /* 00704279: call 0x7068fc */ r_esp -= 4; W32(r_esp, 0x70427eu); f_007068fc();
    /* 0070427e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00704281: mov ecx, dword ptr [esp + 0x30] */ r_ecx = R32((u32)(r_esp+0x30u));
    /* 00704285: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00704287: je 0x7042ba */ if (fZ) goto L_007042ba;
L_00704289:; BB(0x00704289);
    /* 00704289: mov eax, dword ptr [0xa96ebc] */ r_eax = R32((u32)(0xa96ebcu));
    /* 0070428e: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00704291: je 0x704447 */ if (fZ) goto L_00704447;
L_00704297:; BB(0x00704297);
    /* 00704297: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00704299: movsx eax, word ptr [ecx + edi*2 - 0xb58] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+r_edi*2+0xfffff4a8u));
    /* 007042a1: mov ecx, dword ptr [0xa96ed4] */ r_ecx = R32((u32)(0xa96ed4u));
    /* 007042a7: lea edi, [esp + 0xc] */ r_edi = (u32)(r_esp+0xcu);
    /* 007042ab: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007042ac: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007042ad: push dword ptr [ecx + eax*4] */ { u32 v = R32((u32)(r_ecx+r_eax*4)); r_esp -= 4; W32(r_esp, v); }
    /* 007042b0: call 0x7067e4 */ r_esp -= 4; W32(r_esp, 0x7042b5u); f_007067e4();
    /* 007042b5: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007042b8: jmp 0x7042c9 */ goto L_007042c9;
L_007042ba:; BB(0x007042ba);
    /* 007042ba: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 007042be: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007042bf: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007042c0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007042c1: call 0x706b60 */ r_esp -= 4; W32(r_esp, 0x7042c6u); f_00706b60();
    /* 007042c6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_007042c9:; BB(0x007042c9);
    /* 007042c9: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007042cc: jle 0x704305 */ if ((fZ||fS!=fO)) goto L_00704305;
L_007042ce:; BB(0x007042ce);
    /* 007042ce: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 007042d2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007042d3: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007042d4: call 0x7068fc */ r_esp -= 4; W32(r_esp, 0x7042d9u); f_007068fc();
    /* 007042d9: lea ecx, [esp + 0x14] */ r_ecx = (u32)(r_esp+0x14u);
    /* 007042dd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007042de: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007042df: movsx edi, word ptr [ebp + 8] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 007042e3: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007042e4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007042e5: call 0x7064d8 */ r_esp -= 4; W32(r_esp, 0x7042eau); f_007064d8();
    /* 007042ea: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007042ed: cmp ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007042f0: jle 0x704305 */ if ((fZ||fS!=fO)) goto L_00704305;
L_007042f2:; BB(0x007042f2);
    /* 007042f2: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 007042f6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007042f7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007042f8: movsx ecx, word ptr [ebp + 0xa] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xau));
    /* 007042fc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007042fd: call 0x706b60 */ r_esp -= 4; W32(r_esp, 0x704302u); f_00706b60();
    /* 00704302: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00704305:; BB(0x00704305);
    /* 00704305: movzx eax, word ptr [esi] */ r_eax = (u32)R16((u32)(r_esi));
    /* 00704308: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00704309: call 0x815e78 */ r_esp -= 4; W32(r_esp, 0x70430eu); f_00815e78();
    /* 0070430e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0070430f: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 00704313: mov word ptr [esi], ax */ W16((u32)(r_esi), (u16)r_eax);
L_00704316:; BB(0x00704316);
    /* 00704316: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00704318: mov word ptr [esi + edx*2], cx */ W16((u32)(r_esi+r_edx*2), (u16)r_ecx);
    /* 0070431c: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0070431f: mov eax, edx */ r_eax = r_edx;
    /* 00704321: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00704324: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00704325: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00704326: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00704327: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00704328: ret  */ FN_RET(0x00703ed4); r_esp += 4; return;
L_00704329:; BB(0x00704329);
    /* 00704329: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0070432b: mov word ptr [esi], cx */ W16((u32)(r_esi), (u16)r_ecx);
    /* 0070432e: mov eax, 1 */ r_eax = 0x1u;
    /* 00704333: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00704336: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00704337: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00704338: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00704339: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0070433a: ret  */ FN_RET(0x00703ed4); r_esp += 4; return;
L_0070433b:; BB(0x0070433b);
    /* 0070433b: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 0070433f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00704340: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00704341: push 0x96e944 */ { u32 v = 0x96e944u; r_esp -= 4; W32(r_esp, v); }
    /* 00704346: call 0x7067e4 */ r_esp -= 4; W32(r_esp, 0x70434bu); f_007067e4();
    /* 0070434b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0070434e: jmp 0x703f5a */ goto L_00703f5a;
L_00704353:; BB(0x00704353);
    /* 00704353: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 00704357: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00704358: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00704359: push 0x96e940 */ { u32 v = 0x96e940u; r_esp -= 4; W32(r_esp, v); }
    /* 0070435e: call 0x7067e4 */ r_esp -= 4; W32(r_esp, 0x704363u); f_007067e4();
    /* 00704363: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00704366: jmp 0x703f5a */ goto L_00703f5a;
L_0070436b:; BB(0x0070436b);
    /* 0070436b: mov ecx, 0x697 */ r_ecx = 0x697u;
    /* 00704370: jmp 0x7040f4 */ goto L_007040f4;
L_00704375:; BB(0x00704375);
    /* 00704375: mov ecx, 0x69b */ r_ecx = 0x69bu;
    /* 0070437a: jmp 0x7040f4 */ goto L_007040f4;
L_0070437f:; BB(0x0070437f);
    /* 0070437f: add edi, 8 */ {  u32 a = r_edi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00704382: jmp 0x704138 */ goto L_00704138;
L_00704387:; BB(0x00704387);
    /* 00704387: mov edi, dword ptr [0xa96eb8] */ r_edi = R32((u32)(0xa96eb8u));
    /* 0070438d: jmp 0x704138 */ goto L_00704138;
L_00704392:; BB(0x00704392);
    /* 00704392: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00704394: mov dword ptr [esp + 0x34], ecx */ W32((u32)(r_esp+0x34u), r_ecx);
    /* 00704398: jmp 0x70405a */ goto L_0070405a;
L_0070439d:; BB(0x0070439d);
    /* 0070439d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0070439f: mov dword ptr [esp + 0x34], ecx */ W32((u32)(r_esp+0x34u), r_ecx);
    /* 007043a3: jmp 0x70405a */ goto L_0070405a;
L_007043a8:; BB(0x007043a8);
    /* 007043a8: mov eax, 2 */ r_eax = 0x2u;
    /* 007043ad: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 007043b1: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 007043b5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007043b6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007043b7: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 007043b9: call 0x70625c */ r_esp -= 4; W32(r_esp, 0x7043beu); f_0070625c();
    /* 007043be: mov edx, dword ptr [0xa96ed4] */ r_edx = R32((u32)(0xa96ed4u));
    /* 007043c4: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 007043c8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007043c9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007043ca: push dword ptr [edx + 0xa8c] */ { u32 v = R32((u32)(r_edx+0xa8cu)); r_esp -= 4; W32(r_esp, v); }
    /* 007043d0: call 0x7067e4 */ r_esp -= 4; W32(r_esp, 0x7043d5u); f_007067e4();
    /* 007043d5: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007043d6: call 0x706b8c */ r_esp -= 4; W32(r_esp, 0x7043dbu); f_00706b8c();
    /* 007043db: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007043de: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007043e1: je 0x7043f1 */ if (fZ) goto L_007043f1;
L_007043e3:; BB(0x007043e3);
    /* 007043e3: mov ecx, 1 */ r_ecx = 0x1u;
    /* 007043e8: mov dword ptr [esp + 0x34], ecx */ W32((u32)(r_esp+0x34u), r_ecx);
    /* 007043ec: jmp 0x70405a */ goto L_0070405a;
L_007043f1:; BB(0x007043f1);
    /* 007043f1: mov ecx, 3 */ r_ecx = 0x3u;
    /* 007043f6: mov dword ptr [esp + 0x34], ecx */ W32((u32)(r_esp+0x34u), r_ecx);
    /* 007043fa: jmp 0x70405a */ goto L_0070405a;
L_007043ff:; BB(0x007043ff);
    /* 007043ff: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00704401: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 00704405: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00704406: call 0x706b8c */ r_esp -= 4; W32(r_esp, 0x70440bu); f_00706b8c();
    /* 0070440b: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 0070440f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00704412: jmp 0x70405a */ goto L_0070405a;
L_00704417:; BB(0x00704417);
    /* 00704417: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 0070441b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0070441c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0070441d: push 0x96e944 */ { u32 v = 0x96e944u; r_esp -= 4; W32(r_esp, v); }
    /* 00704422: call 0x7067e4 */ r_esp -= 4; W32(r_esp, 0x704427u); f_007067e4();
    /* 00704427: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0070442a: jmp 0x7041eb */ goto L_007041eb;
L_0070442f:; BB(0x0070442f);
    /* 0070442f: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 00704433: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00704434: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00704435: push 0x96e940 */ { u32 v = 0x96e940u; r_esp -= 4; W32(r_esp, v); }
    /* 0070443a: call 0x7067e4 */ r_esp -= 4; W32(r_esp, 0x70443fu); f_007067e4();
    /* 0070443f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00704442: jmp 0x7041eb */ goto L_007041eb;
L_00704447:; BB(0x00704447);
    /* 00704447: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0070444a: jmp 0x704297 */ goto L_00704297;
L_0070444f:; BB(0x0070444f);
    /* 0070444f: mov edi, dword ptr [0xa96ed4] */ r_edi = R32((u32)(0xa96ed4u));
    /* 00704455: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 00704459: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0070445a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0070445b: push dword ptr [edi + 0xa80] */ { u32 v = R32((u32)(r_edi+0xa80u)); r_esp -= 4; W32(r_esp, v); }
    /* 00704461: call 0x7067e4 */ r_esp -= 4; W32(r_esp, 0x704466u); f_007067e4();
    /* 00704466: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00704469: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0070446e: mov dword ptr [esp + 0x30], ecx */ W32((u32)(r_esp+0x30u), r_ecx);
    /* 00704472: jmp 0x704266 */ goto L_00704266;
L_00704477:; BB(0x00704477);
    /* 00704477: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 0070447b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0070447c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0070447d: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 0070447f: call 0x70625c */ r_esp -= 4; W32(r_esp, 0x704484u); f_0070625c();
    /* 00704484: mov edi, dword ptr [0xa96ed4] */ r_edi = R32((u32)(0xa96ed4u));
    /* 0070448a: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 0070448e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0070448f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00704490: push dword ptr [edi + 0xa8c] */ { u32 v = R32((u32)(r_edi+0xa8cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00704496: call 0x7067e4 */ r_esp -= 4; W32(r_esp, 0x70449bu); f_007067e4();
    /* 0070449b: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0070449e: mov ecx, 2 */ r_ecx = 0x2u;
    /* 007044a3: mov dword ptr [esp + 0x30], ecx */ W32((u32)(r_esp+0x30u), r_ecx);
    /* 007044a7: jmp 0x704266 */ goto L_00704266;
L_007044ac:; BB(0x007044ac);
    /* 007044ac: cmp ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007044af: jle 0x7044d3 */ if ((fZ||fS!=fO)) goto L_007044d3;
L_007044b1:; BB(0x007044b1);
    /* 007044b1: lea ebx, [esp + 0x10] */ r_ebx = (u32)(r_esp+0x10u);
    /* 007044b5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007044b6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007044b7: call 0x706360 */ r_esp -= 4; W32(r_esp, 0x7044bcu); f_00706360();
    /* 007044bc: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007044bf: lea eax, [esp + 0x10] */ r_eax = (u32)(r_esp+0x10u);
    /* 007044c3: mov edx, esi */ r_edx = r_esi;
    /* 007044c5: mov ecx, edi */ r_ecx = r_edi;
    /* 007044c7: call 0x703ee1 */ r_esp -= 4; W32(r_esp, 0x7044ccu); f_00703ee1();
    /* 007044cc: mov edx, eax */ r_edx = r_eax;
    /* 007044ce: jmp 0x704316 */ goto L_00704316;
L_007044d3:; BB(0x007044d3);
    /* 007044d3: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 007044d7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007044d8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007044d9: movsx ecx, word ptr [ebp + 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x4u));
    /* 007044dd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007044de: call 0x706b60 */ r_esp -= 4; W32(r_esp, 0x7044e3u); f_00706b60();
    /* 007044e3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007044e6: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 007044ea: jmp 0x704316 */ goto L_00704316;
L_007044ef:; BB(0x007044ef);
    /* 007044ef: mov ecx, 2 */ r_ecx = 0x2u;
    /* 007044f4: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007044f7: mov edi, 0 */ r_edi = 0x0u;
    /* 007044fc: jle 0x704500 */ if ((fZ||fS!=fO)) goto L_00704500;
L_007044fe:; BB(0x007044fe);
    /* 007044fe: mov ebx, ecx */ r_ebx = r_ecx;
L_00704500:; BB(0x00704500);
    /* 00704500: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00704502: jle 0x704536 */ if ((fZ||fS!=fO)) goto L_00704536;
L_00704504:; BB(0x00704504);
    /* 00704504: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 00704508: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00704509: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0070450a: movsx eax, word ptr [ebp + edi*2 + 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+r_edi*2+0x4u));
    /* 0070450f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00704510: call 0x706b60 */ r_esp -= 4; W32(r_esp, 0x704515u); f_00706b60();
    /* 00704515: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00704518: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0070451b: cmp edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0070451d: jge 0x704536 */ if ((fS==fO)) goto L_00704536;
L_0070451f:; BB(0x0070451f);
    /* 0070451f: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00704522: jne 0x704504 */ if (!fZ) goto L_00704504;
L_00704524:; BB(0x00704524);
    /* 00704524: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 00704528: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00704529: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0070452a: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0070452c: call 0x70625c */ r_esp -= 4; W32(r_esp, 0x704531u); f_0070625c();
    /* 00704531: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00704534: jmp 0x704504 */ goto L_00704504;
L_00704536:; BB(0x00704536);
    /* 00704536: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 0070453a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0070453b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0070453c: push 0x3f */ { u32 v = 0x3fu; r_esp -= 4; W32(r_esp, v); }
    /* 0070453e: call 0x70625c */ r_esp -= 4; W32(r_esp, 0x704543u); f_0070625c();
    /* 00704543: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00704546: movsx ecx, word ptr [ebp] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp));
    /* 0070454a: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0070454d: jg 0x704558 */ if ((!fZ&&fS==fO)) goto L_00704558;
L_0070454f:; BB(0x0070454f);
    /* 0070454f: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 00704553: jmp 0x704316 */ goto L_00704316;
L_00704558:; BB(0x00704558);
    /* 00704558: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 0070455c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0070455d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0070455e: call 0x7069b8 */ r_esp -= 4; W32(r_esp, 0x704563u); f_007069b8();
    /* 00704563: lea eax, [esp + 0x14] */ r_eax = (u32)(r_esp+0x14u);
    /* 00704567: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00704568: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00704569: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0070456d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0070456e: call 0x706b60 */ r_esp -= 4; W32(r_esp, 0x704573u); f_00706b60();
    /* 00704573: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00704576: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0070457a: jmp 0x704316 */ goto L_00704316;
L_0070457f:; BB(0x0070457f);
    /* 0070457f: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 00704583: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00704584: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00704585: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00704586: call 0x706490 */ r_esp -= 4; W32(r_esp, 0x70458bu); f_00706490();
    /* 0070458b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0070458e: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 00704592: jmp 0x704316 */ goto L_00704316;
}

void f_00703ee1(void) /* sub_703EE1 */
{
    FN_ENTER(0x00703ee1);
    /* 00703ee1: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00703ee2: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00703ee3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00703ee4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00703ee5: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00703ee8: mov edi, ecx */ r_edi = r_ecx;
    /* 00703eea: mov esi, edx */ r_esi = r_edx;
    /* 00703eec: mov ebp, eax */ r_ebp = r_eax;
    /* 00703eee: mov dword ptr [esp + 0xc], 0 */ W32((u32)(r_esp+0xcu), 0x0u);
    /* 00703ef6: movsx ebx, word ptr [ebp] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_ebp));
    /* 00703efa: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00703efc: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00703efe: je 0x704329 */ if (fZ) goto L_00704329;
L_00703f04:; BB(0x00703f04);
    /* 00703f04: movsx eax, word ptr [ebp + 2] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x2u));
    /* 00703f08: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00703f0b: je 0x70457f */ if (fZ) goto L_0070457f;
L_00703f11:; BB(0x00703f11);
    /* 00703f11: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00703f14: je 0x7044ef */ if (fZ) goto L_007044ef;
L_00703f1a:; BB(0x00703f1a);
    /* 00703f1a: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00703f1d: je 0x7044ac */ if (fZ) goto L_007044ac;
L_00703f23:; BB(0x00703f23);
    /* 00703f23: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00703f26: je 0x7041ca */ if (fZ) goto L_007041ca;
L_00703f2c:; BB(0x00703f2c);
    /* 00703f2c: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00703f2f: jne 0x7041a9 */ if (!fZ) goto L_007041a9;
L_00703f35:; BB(0x00703f35);
    /* 00703f35: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00703f37: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 00703f3b: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00703f3e: jle 0x703f5a */ if ((fZ||fS!=fO)) goto L_00703f5a;
L_00703f40:; BB(0x00703f40);
    /* 00703f40: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 00703f44: cmp eax, 0x685 */ {  u32 a = r_eax; u32 b = 0x685u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00703f49: je 0x704353 */ if (fZ) goto L_00704353;
L_00703f4f:; BB(0x00703f4f);
    /* 00703f4f: cmp eax, 0x686 */ {  u32 a = r_eax; u32 b = 0x686u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00703f54: je 0x70433b */ if (fZ) goto L_0070433b;
L_00703f5a:; BB(0x00703f5a);
    /* 00703f5a: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 00703f5e: movsx edx, word ptr [ebp + 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x4u));
    /* 00703f62: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 00703f66: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00703f67: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00703f68: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00703f69: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00703f6a: call 0x7064d8 */ r_esp -= 4; W32(r_esp, 0x703f6fu); f_007064d8();
    /* 00703f6f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00703f72: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 00703f76: cmp eax, 0x2c4 */ {  u32 a = r_eax; u32 b = 0x2c4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00703f7b: je 0x7043ff */ if (fZ) goto L_007043ff;
L_00703f81:; BB(0x00703f81);
    /* 00703f81: cmp eax, 0x2c7 */ {  u32 a = r_eax; u32 b = 0x2c7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00703f86: je 0x7043a8 */ if (fZ) goto L_007043a8;
L_00703f8c:; BB(0x00703f8c);
    /* 00703f8c: mov ecx, eax */ r_ecx = r_eax;
    /* 00703f8e: cmp ecx, 0x68c */ {  u32 a = r_ecx; u32 b = 0x68cu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00703f94: jl 0x703fe7 */ if ((fS!=fO)) goto L_00703fe7;
L_00703f96:; BB(0x00703f96);
    /* 00703f96: cmp ecx, 0x697 */ {  u32 a = r_ecx; u32 b = 0x697u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00703f9c: jg 0x703fe7 */ if ((!fZ&&fS==fO)) goto L_00703fe7;
L_00703f9e:; BB(0x00703f9e);
    /* 00703f9e: lea edi, [esp + 0xc] */ r_edi = (u32)(r_esp+0xcu);
    /* 00703fa2: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00703fa7: mov dword ptr [esp + 0x30], ecx */ W32((u32)(r_esp+0x30u), r_ecx);
    /* 00703fab: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00703fac: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00703fad: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 00703faf: call 0x70625c */ r_esp -= 4; W32(r_esp, 0x703fb4u); f_0070625c();
    /* 00703fb4: mov edi, dword ptr [0xa96ed4] */ r_edi = R32((u32)(0xa96ed4u));
    /* 00703fba: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 00703fbe: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00703fbf: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00703fc0: push dword ptr [edi + 0xa80] */ { u32 v = R32((u32)(r_edi+0xa80u)); r_esp -= 4; W32(r_esp, v); }
    /* 00703fc6: call 0x7067e4 */ r_esp -= 4; W32(r_esp, 0x703fcbu); f_007067e4();
    /* 00703fcb: mov ecx, dword ptr [esp + 0x44] */ r_ecx = R32((u32)(r_esp+0x44u));
    /* 00703fcf: add ecx, 0xfffff974 */ {  u32 a = r_ecx; u32 b = 0xfffff974u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00703fd5: movzx edi, cx */ r_edi = (u32)(u16)r_ecx;
    /* 00703fd8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00703fd9: call 0x706b8c */ r_esp -= 4; W32(r_esp, 0x703fdeu); f_00706b8c();
    /* 00703fde: mov dword ptr [esp + 0x50], eax */ W32((u32)(r_esp+0x50u), r_eax);
    /* 00703fe2: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00703fe5: jmp 0x70405a */ goto L_0070405a;
L_00703fe7:; BB(0x00703fe7);
    /* 00703fe7: mov edi, eax */ r_edi = r_eax;
    /* 00703fe9: mov ecx, 3 */ r_ecx = 0x3u;
    /* 00703fee: mov dword ptr [esp + 0x30], ecx */ W32((u32)(r_esp+0x30u), r_ecx);
    /* 00703ff2: cmp edi, 0x2c5 */ {  u32 a = r_edi; u32 b = 0x2c5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00703ff8: je 0x70439d */ if (fZ) goto L_0070439d;
L_00703ffe:; BB(0x00703ffe);
    /* 00703ffe: mov ecx, eax */ r_ecx = r_eax;
    /* 00704000: cmp ecx, 0x2c6 */ {  u32 a = r_ecx; u32 b = 0x2c6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00704006: jne 0x704013 */ if (!fZ) goto L_00704013;
L_00704008:; BB(0x00704008);
    /* 00704008: mov ecx, 2 */ r_ecx = 0x2u;
    /* 0070400d: mov dword ptr [esp + 0x34], ecx */ W32((u32)(r_esp+0x34u), r_ecx);
    /* 00704011: jmp 0x70405a */ goto L_0070405a;
L_00704013:; BB(0x00704013);
    /* 00704013: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00704014: call 0x706320 */ r_esp -= 4; W32(r_esp, 0x704019u); f_00706320();
    /* 00704019: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0070401a: mov ecx, dword ptr [0xa96eb4] */ r_ecx = R32((u32)(0xa96eb4u));
    /* 00704020: movzx ecx, byte ptr [eax + ecx] */ r_ecx = (u32)R8((u32)(r_eax+r_ecx));
    /* 00704024: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00704026: je 0x704392 */ if (fZ) goto L_00704392;
L_0070402c:; BB(0x0070402c);
    /* 0070402c: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070402f: je 0x704051 */ if (fZ) goto L_00704051;
L_00704031:; BB(0x00704031);
    /* 00704031: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00704034: jne 0x704041 */ if (!fZ) goto L_00704041;
L_00704036:; BB(0x00704036);
    /* 00704036: mov ecx, 2 */ r_ecx = 0x2u;
    /* 0070403b: mov dword ptr [esp + 0x34], ecx */ W32((u32)(r_esp+0x34u), r_ecx);
    /* 0070403f: jmp 0x70405a */ goto L_0070405a;
L_00704041:; BB(0x00704041);
    /* 00704041: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00704044: jne 0x70405a */ if (!fZ) goto L_0070405a;
L_00704046:; BB(0x00704046);
    /* 00704046: mov ecx, 3 */ r_ecx = 0x3u;
    /* 0070404b: mov dword ptr [esp + 0x34], ecx */ W32((u32)(r_esp+0x34u), r_ecx);
    /* 0070404f: jmp 0x70405a */ goto L_0070405a;
L_00704051:; BB(0x00704051);
    /* 00704051: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00704056: mov dword ptr [esp + 0x34], ecx */ W32((u32)(r_esp+0x34u), r_ecx);
L_0070405a:; BB(0x0070405a);
    /* 0070405a: cmp ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0070405d: jle 0x704193 */ if ((fZ||fS!=fO)) goto L_00704193;
L_00704063:; BB(0x00704063);
    /* 00704063: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 00704067: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00704068: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00704069: call 0x7068fc */ r_esp -= 4; W32(r_esp, 0x70406eu); f_007068fc();
    /* 0070406e: movsx ecx, word ptr [ebp + 6] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x6u));
    /* 00704072: mov dword ptr [esp + 0x34], ecx */ W32((u32)(r_esp+0x34u), r_ecx);
    /* 00704076: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00704077: call 0x706340 */ r_esp -= 4; W32(r_esp, 0x70407cu); f_00706340();
    /* 0070407c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0070407f: mov ecx, dword ptr [0xa96eb0] */ r_ecx = R32((u32)(0xa96eb0u));
    /* 00704085: movzx ecx, byte ptr [eax + ecx] */ r_ecx = (u32)R8((u32)(r_eax+r_ecx));
    /* 00704089: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070408b: jne 0x7040bf */ if (!fZ) goto L_007040bf;
L_0070408d:; BB(0x0070408d);
    /* 0070408d: mov ecx, dword ptr [esp + 0x30] */ r_ecx = R32((u32)(r_esp+0x30u));
    /* 00704091: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00704093: je 0x70436b */ if (fZ) goto L_0070436b;
L_00704099:; BB(0x00704099);
    /* 00704099: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070409c: je 0x7040b8 */ if (fZ) goto L_007040b8;
L_0070409e:; BB(0x0070409e);
    /* 0070409e: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007040a1: jne 0x7040aa */ if (!fZ) goto L_007040aa;
L_007040a3:; BB(0x007040a3);
    /* 007040a3: mov ecx, 0x698 */ r_ecx = 0x698u;
    /* 007040a8: jmp 0x7040f4 */ goto L_007040f4;
L_007040aa:; BB(0x007040aa);
    /* 007040aa: mov edi, ecx */ r_edi = r_ecx;
    /* 007040ac: cmp edi, 3 */ {  u32 a = r_edi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007040af: jne 0x7040f4 */ if (!fZ) goto L_007040f4;
L_007040b1:; BB(0x007040b1);
    /* 007040b1: mov ecx, 0x69a */ r_ecx = 0x69au;
    /* 007040b6: jmp 0x7040f4 */ goto L_007040f4;
L_007040b8:; BB(0x007040b8);
    /* 007040b8: mov ecx, 0x699 */ r_ecx = 0x699u;
    /* 007040bd: jmp 0x7040f4 */ goto L_007040f4;
L_007040bf:; BB(0x007040bf);
    /* 007040bf: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007040c2: jne 0x704115 */ if (!fZ) goto L_00704115;
L_007040c4:; BB(0x007040c4);
    /* 007040c4: mov ecx, dword ptr [esp + 0x30] */ r_ecx = R32((u32)(r_esp+0x30u));
    /* 007040c8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007040ca: je 0x704375 */ if (fZ) goto L_00704375;
L_007040d0:; BB(0x007040d0);
    /* 007040d0: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007040d3: je 0x7040ef */ if (fZ) goto L_007040ef;
L_007040d5:; BB(0x007040d5);
    /* 007040d5: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007040d8: jne 0x7040e1 */ if (!fZ) goto L_007040e1;
L_007040da:; BB(0x007040da);
    /* 007040da: mov ecx, 0x69c */ r_ecx = 0x69cu;
    /* 007040df: jmp 0x7040f4 */ goto L_007040f4;
L_007040e1:; BB(0x007040e1);
    /* 007040e1: mov edi, ecx */ r_edi = r_ecx;
    /* 007040e3: cmp edi, 3 */ {  u32 a = r_edi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007040e6: jne 0x7040f4 */ if (!fZ) goto L_007040f4;
L_007040e8:; BB(0x007040e8);
    /* 007040e8: mov ecx, 0x69d */ r_ecx = 0x69du;
    /* 007040ed: jmp 0x7040f4 */ goto L_007040f4;
L_007040ef:; BB(0x007040ef);
    /* 007040ef: mov ecx, 0x279 */ r_ecx = 0x279u;
L_007040f4:; BB(0x007040f4);
    /* 007040f4: mov eax, dword ptr [0xa96ed4] */ r_eax = R32((u32)(0xa96ed4u));
    /* 007040f9: lea edi, [esp + 0xc] */ r_edi = (u32)(r_esp+0xcu);
    /* 007040fd: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007040fe: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007040ff: push dword ptr [eax + ecx*4] */ { u32 v = R32((u32)(r_eax+r_ecx*4)); r_esp -= 4; W32(r_esp, v); }
    /* 00704102: call 0x7067e4 */ r_esp -= 4; W32(r_esp, 0x704107u); f_007067e4();
    /* 00704107: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 0070410b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0070410c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0070410d: call 0x7068fc */ r_esp -= 4; W32(r_esp, 0x704112u); f_007068fc();
    /* 00704112: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00704115:; BB(0x00704115);
    /* 00704115: mov ecx, dword ptr [esp + 0x34] */ r_ecx = R32((u32)(r_esp+0x34u));
    /* 00704119: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070411b: je 0x704167 */ if (fZ) goto L_00704167;
L_0070411d:; BB(0x0070411d);
    /* 0070411d: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00704120: je 0x704387 */ if (fZ) goto L_00704387;
L_00704126:; BB(0x00704126);
    /* 00704126: mov edi, dword ptr [0xa96eb8] */ r_edi = R32((u32)(0xa96eb8u));
    /* 0070412c: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070412f: je 0x70437f */ if (fZ) goto L_0070437f;
L_00704135:; BB(0x00704135);
    /* 00704135: add edi, 0x10 */ {  u32 a = r_edi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
L_00704138:; BB(0x00704138);
    /* 00704138: mov ecx, dword ptr [esp + 0x2c] */ r_ecx = R32((u32)(r_esp+0x2cu));
    /* 0070413c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0070413d: call 0x706340 */ r_esp -= 4; W32(r_esp, 0x704142u); f_00706340();
    /* 00704142: mov ecx, dword ptr [edi] */ r_ecx = R32((u32)(r_edi));
    /* 00704144: lea edi, [esp + 0x10] */ r_edi = (u32)(r_esp+0x10u);
    /* 00704148: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00704149: movsx eax, word ptr [ecx + eax*2] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+r_eax*2));
    /* 0070414d: mov ecx, dword ptr [0xa96ed4] */ r_ecx = R32((u32)(0xa96ed4u));
    /* 00704153: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00704154: push dword ptr [ecx + eax*4] */ { u32 v = R32((u32)(r_ecx+r_eax*4)); r_esp -= 4; W32(r_esp, v); }
    /* 00704157: mov ecx, dword ptr [esp + 0x3c] */ r_ecx = R32((u32)(r_esp+0x3cu));
    /* 0070415b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0070415c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0070415d: call 0x70655c */ r_esp -= 4; W32(r_esp, 0x704162u); f_0070655c();
    /* 00704162: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00704165: jmp 0x70417b */ goto L_0070417b;
L_00704167:; BB(0x00704167);
    /* 00704167: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 0070416b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0070416c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0070416d: mov edi, dword ptr [esp + 0x34] */ r_edi = R32((u32)(r_esp+0x34u));
    /* 00704171: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00704172: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00704173: call 0x7064d8 */ r_esp -= 4; W32(r_esp, 0x704178u); f_007064d8();
    /* 00704178: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0070417b:; BB(0x0070417b);
    /* 0070417b: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0070417e: jle 0x704193 */ if ((fZ||fS!=fO)) goto L_00704193;
L_00704180:; BB(0x00704180);
    /* 00704180: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 00704184: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00704185: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00704186: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0070418a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0070418b: call 0x706b60 */ r_esp -= 4; W32(r_esp, 0x704190u); f_00706b60();
    /* 00704190: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00704193:; BB(0x00704193);
    /* 00704193: movzx eax, word ptr [esi] */ r_eax = (u32)R16((u32)(r_esi));
    /* 00704196: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00704197: call 0x815e78 */ r_esp -= 4; W32(r_esp, 0x70419cu); f_00815e78();
    /* 0070419c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0070419d: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 007041a1: mov word ptr [esi], ax */ W16((u32)(r_esi), (u16)r_eax);
    /* 007041a4: jmp 0x704316 */ goto L_00704316;
L_007041a9:; BB(0x007041a9);
    /* 007041a9: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007041ac: jne 0x704316 */ if (!fZ) goto L_00704316;
L_007041b2:; BB(0x007041b2);
    /* 007041b2: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 007041b6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007041b7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007041b8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007041b9: call 0x7069fc */ r_esp -= 4; W32(r_esp, 0x7041beu); f_007069fc();
    /* 007041be: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007041c1: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 007041c5: jmp 0x704316 */ goto L_00704316;
L_007041ca:; BB(0x007041ca);
    /* 007041ca: cmp ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007041cd: jle 0x7041eb */ if ((fZ||fS!=fO)) goto L_007041eb;
L_007041cf:; BB(0x007041cf);
    /* 007041cf: movsx ecx, word ptr [ebp + 0xa] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xau));
    /* 007041d3: cmp ecx, 0x685 */ {  u32 a = r_ecx; u32 b = 0x685u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007041d9: je 0x70442f */ if (fZ) goto L_0070442f;
L_007041df:; BB(0x007041df);
    /* 007041df: cmp ecx, 0x686 */ {  u32 a = r_ecx; u32 b = 0x686u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007041e5: je 0x704417 */ if (fZ) goto L_00704417;
L_007041eb:; BB(0x007041eb);
    /* 007041eb: movsx edi, word ptr [ebp + 4] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ebp+0x4u));
    /* 007041ef: cmp edi, 0x2c8 */ {  u32 a = r_edi; u32 b = 0x2c8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007041f5: je 0x704206 */ if (fZ) goto L_00704206;
L_007041f7:; BB(0x007041f7);
    /* 007041f7: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 007041fb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007041fc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007041fd: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007041fe: call 0x706b60 */ r_esp -= 4; W32(r_esp, 0x704203u); f_00706b60();
    /* 00704203: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00704206:; BB(0x00704206);
    /* 00704206: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00704208: mov dword ptr [esp + 0x30], ecx */ W32((u32)(r_esp+0x30u), r_ecx);
    /* 0070420c: cmp edi, 0x2c7 */ {  u32 a = r_edi; u32 b = 0x2c7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00704212: je 0x704477 */ if (fZ) goto L_00704477;
L_00704218:; BB(0x00704218);
    /* 00704218: cmp edi, 0x68c */ {  u32 a = r_edi; u32 b = 0x68cu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0070421e: jl 0x70425a */ if ((fS!=fO)) goto L_0070425a;
L_00704220:; BB(0x00704220);
    /* 00704220: cmp edi, 0x697 */ {  u32 a = r_edi; u32 b = 0x697u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00704226: jg 0x70425a */ if ((!fZ&&fS==fO)) goto L_0070425a;
L_00704228:; BB(0x00704228);
    /* 00704228: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 0070422c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0070422d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0070422e: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 00704230: call 0x70625c */ r_esp -= 4; W32(r_esp, 0x704235u); f_0070625c();
    /* 00704235: mov edi, dword ptr [0xa96ed4] */ r_edi = R32((u32)(0xa96ed4u));
    /* 0070423b: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 0070423f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00704240: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00704241: push dword ptr [edi + 0xa80] */ { u32 v = R32((u32)(r_edi+0xa80u)); r_esp -= 4; W32(r_esp, v); }
    /* 00704247: call 0x7067e4 */ r_esp -= 4; W32(r_esp, 0x70424cu); f_007067e4();
    /* 0070424c: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0070424f: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00704254: mov dword ptr [esp + 0x30], ecx */ W32((u32)(r_esp+0x30u), r_ecx);
    /* 00704258: jmp 0x704266 */ goto L_00704266;
L_0070425a:; BB(0x0070425a);
    /* 0070425a: cmp edi, 0x698 */ {  u32 a = r_edi; u32 b = 0x698u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00704260: je 0x70444f */ if (fZ) goto L_0070444f;
L_00704266:; BB(0x00704266);
    /* 00704266: cmp ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00704269: jle 0x704305 */ if ((fZ||fS!=fO)) goto L_00704305;
L_0070426f:; BB(0x0070426f);
    /* 0070426f: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 00704273: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00704274: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00704275: movsx edi, word ptr [ebp + 6] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ebp+0x6u));
    /* 00704279: call 0x7068fc */ r_esp -= 4; W32(r_esp, 0x70427eu); f_007068fc();
    /* 0070427e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00704281: mov ecx, dword ptr [esp + 0x30] */ r_ecx = R32((u32)(r_esp+0x30u));
    /* 00704285: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00704287: je 0x7042ba */ if (fZ) goto L_007042ba;
L_00704289:; BB(0x00704289);
    /* 00704289: mov eax, dword ptr [0xa96ebc] */ r_eax = R32((u32)(0xa96ebcu));
    /* 0070428e: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00704291: je 0x704447 */ if (fZ) goto L_00704447;
L_00704297:; BB(0x00704297);
    /* 00704297: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00704299: movsx eax, word ptr [ecx + edi*2 - 0xb58] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+r_edi*2+0xfffff4a8u));
    /* 007042a1: mov ecx, dword ptr [0xa96ed4] */ r_ecx = R32((u32)(0xa96ed4u));
    /* 007042a7: lea edi, [esp + 0xc] */ r_edi = (u32)(r_esp+0xcu);
    /* 007042ab: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007042ac: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007042ad: push dword ptr [ecx + eax*4] */ { u32 v = R32((u32)(r_ecx+r_eax*4)); r_esp -= 4; W32(r_esp, v); }
    /* 007042b0: call 0x7067e4 */ r_esp -= 4; W32(r_esp, 0x7042b5u); f_007067e4();
    /* 007042b5: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007042b8: jmp 0x7042c9 */ goto L_007042c9;
L_007042ba:; BB(0x007042ba);
    /* 007042ba: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 007042be: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007042bf: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007042c0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007042c1: call 0x706b60 */ r_esp -= 4; W32(r_esp, 0x7042c6u); f_00706b60();
    /* 007042c6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_007042c9:; BB(0x007042c9);
    /* 007042c9: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007042cc: jle 0x704305 */ if ((fZ||fS!=fO)) goto L_00704305;
L_007042ce:; BB(0x007042ce);
    /* 007042ce: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 007042d2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007042d3: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007042d4: call 0x7068fc */ r_esp -= 4; W32(r_esp, 0x7042d9u); f_007068fc();
    /* 007042d9: lea ecx, [esp + 0x14] */ r_ecx = (u32)(r_esp+0x14u);
    /* 007042dd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007042de: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007042df: movsx edi, word ptr [ebp + 8] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 007042e3: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007042e4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007042e5: call 0x7064d8 */ r_esp -= 4; W32(r_esp, 0x7042eau); f_007064d8();
    /* 007042ea: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007042ed: cmp ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007042f0: jle 0x704305 */ if ((fZ||fS!=fO)) goto L_00704305;
L_007042f2:; BB(0x007042f2);
    /* 007042f2: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 007042f6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007042f7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007042f8: movsx ecx, word ptr [ebp + 0xa] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xau));
    /* 007042fc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007042fd: call 0x706b60 */ r_esp -= 4; W32(r_esp, 0x704302u); f_00706b60();
    /* 00704302: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00704305:; BB(0x00704305);
    /* 00704305: movzx eax, word ptr [esi] */ r_eax = (u32)R16((u32)(r_esi));
    /* 00704308: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00704309: call 0x815e78 */ r_esp -= 4; W32(r_esp, 0x70430eu); f_00815e78();
    /* 0070430e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0070430f: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 00704313: mov word ptr [esi], ax */ W16((u32)(r_esi), (u16)r_eax);
L_00704316:; BB(0x00704316);
    /* 00704316: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00704318: mov word ptr [esi + edx*2], cx */ W16((u32)(r_esi+r_edx*2), (u16)r_ecx);
    /* 0070431c: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0070431f: mov eax, edx */ r_eax = r_edx;
    /* 00704321: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00704324: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00704325: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00704326: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00704327: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00704328: ret  */ FN_RET(0x00703ee1); r_esp += 4; return;
L_00704329:; BB(0x00704329);
    /* 00704329: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0070432b: mov word ptr [esi], cx */ W16((u32)(r_esi), (u16)r_ecx);
    /* 0070432e: mov eax, 1 */ r_eax = 0x1u;
    /* 00704333: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00704336: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00704337: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00704338: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00704339: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0070433a: ret  */ FN_RET(0x00703ee1); r_esp += 4; return;
L_0070433b:; BB(0x0070433b);
    /* 0070433b: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 0070433f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00704340: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00704341: push 0x96e944 */ { u32 v = 0x96e944u; r_esp -= 4; W32(r_esp, v); }
    /* 00704346: call 0x7067e4 */ r_esp -= 4; W32(r_esp, 0x70434bu); f_007067e4();
    /* 0070434b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0070434e: jmp 0x703f5a */ goto L_00703f5a;
L_00704353:; BB(0x00704353);
    /* 00704353: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 00704357: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00704358: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00704359: push 0x96e940 */ { u32 v = 0x96e940u; r_esp -= 4; W32(r_esp, v); }
    /* 0070435e: call 0x7067e4 */ r_esp -= 4; W32(r_esp, 0x704363u); f_007067e4();
    /* 00704363: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00704366: jmp 0x703f5a */ goto L_00703f5a;
L_0070436b:; BB(0x0070436b);
    /* 0070436b: mov ecx, 0x697 */ r_ecx = 0x697u;
    /* 00704370: jmp 0x7040f4 */ goto L_007040f4;
L_00704375:; BB(0x00704375);
    /* 00704375: mov ecx, 0x69b */ r_ecx = 0x69bu;
    /* 0070437a: jmp 0x7040f4 */ goto L_007040f4;
L_0070437f:; BB(0x0070437f);
    /* 0070437f: add edi, 8 */ {  u32 a = r_edi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00704382: jmp 0x704138 */ goto L_00704138;
L_00704387:; BB(0x00704387);
    /* 00704387: mov edi, dword ptr [0xa96eb8] */ r_edi = R32((u32)(0xa96eb8u));
    /* 0070438d: jmp 0x704138 */ goto L_00704138;
L_00704392:; BB(0x00704392);
    /* 00704392: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00704394: mov dword ptr [esp + 0x34], ecx */ W32((u32)(r_esp+0x34u), r_ecx);
    /* 00704398: jmp 0x70405a */ goto L_0070405a;
L_0070439d:; BB(0x0070439d);
    /* 0070439d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0070439f: mov dword ptr [esp + 0x34], ecx */ W32((u32)(r_esp+0x34u), r_ecx);
    /* 007043a3: jmp 0x70405a */ goto L_0070405a;
L_007043a8:; BB(0x007043a8);
    /* 007043a8: mov eax, 2 */ r_eax = 0x2u;
    /* 007043ad: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 007043b1: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 007043b5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007043b6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007043b7: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 007043b9: call 0x70625c */ r_esp -= 4; W32(r_esp, 0x7043beu); f_0070625c();
    /* 007043be: mov edx, dword ptr [0xa96ed4] */ r_edx = R32((u32)(0xa96ed4u));
    /* 007043c4: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 007043c8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007043c9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007043ca: push dword ptr [edx + 0xa8c] */ { u32 v = R32((u32)(r_edx+0xa8cu)); r_esp -= 4; W32(r_esp, v); }
    /* 007043d0: call 0x7067e4 */ r_esp -= 4; W32(r_esp, 0x7043d5u); f_007067e4();
    /* 007043d5: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007043d6: call 0x706b8c */ r_esp -= 4; W32(r_esp, 0x7043dbu); f_00706b8c();
    /* 007043db: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007043de: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007043e1: je 0x7043f1 */ if (fZ) goto L_007043f1;
L_007043e3:; BB(0x007043e3);
    /* 007043e3: mov ecx, 1 */ r_ecx = 0x1u;
    /* 007043e8: mov dword ptr [esp + 0x34], ecx */ W32((u32)(r_esp+0x34u), r_ecx);
    /* 007043ec: jmp 0x70405a */ goto L_0070405a;
L_007043f1:; BB(0x007043f1);
    /* 007043f1: mov ecx, 3 */ r_ecx = 0x3u;
    /* 007043f6: mov dword ptr [esp + 0x34], ecx */ W32((u32)(r_esp+0x34u), r_ecx);
    /* 007043fa: jmp 0x70405a */ goto L_0070405a;
L_007043ff:; BB(0x007043ff);
    /* 007043ff: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00704401: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 00704405: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00704406: call 0x706b8c */ r_esp -= 4; W32(r_esp, 0x70440bu); f_00706b8c();
    /* 0070440b: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 0070440f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00704412: jmp 0x70405a */ goto L_0070405a;
L_00704417:; BB(0x00704417);
    /* 00704417: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 0070441b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0070441c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0070441d: push 0x96e944 */ { u32 v = 0x96e944u; r_esp -= 4; W32(r_esp, v); }
    /* 00704422: call 0x7067e4 */ r_esp -= 4; W32(r_esp, 0x704427u); f_007067e4();
    /* 00704427: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0070442a: jmp 0x7041eb */ goto L_007041eb;
L_0070442f:; BB(0x0070442f);
    /* 0070442f: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 00704433: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00704434: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00704435: push 0x96e940 */ { u32 v = 0x96e940u; r_esp -= 4; W32(r_esp, v); }
    /* 0070443a: call 0x7067e4 */ r_esp -= 4; W32(r_esp, 0x70443fu); f_007067e4();
    /* 0070443f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00704442: jmp 0x7041eb */ goto L_007041eb;
L_00704447:; BB(0x00704447);
    /* 00704447: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0070444a: jmp 0x704297 */ goto L_00704297;
L_0070444f:; BB(0x0070444f);
    /* 0070444f: mov edi, dword ptr [0xa96ed4] */ r_edi = R32((u32)(0xa96ed4u));
    /* 00704455: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 00704459: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0070445a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0070445b: push dword ptr [edi + 0xa80] */ { u32 v = R32((u32)(r_edi+0xa80u)); r_esp -= 4; W32(r_esp, v); }
    /* 00704461: call 0x7067e4 */ r_esp -= 4; W32(r_esp, 0x704466u); f_007067e4();
    /* 00704466: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00704469: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0070446e: mov dword ptr [esp + 0x30], ecx */ W32((u32)(r_esp+0x30u), r_ecx);
    /* 00704472: jmp 0x704266 */ goto L_00704266;
L_00704477:; BB(0x00704477);
    /* 00704477: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 0070447b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0070447c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0070447d: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 0070447f: call 0x70625c */ r_esp -= 4; W32(r_esp, 0x704484u); f_0070625c();
    /* 00704484: mov edi, dword ptr [0xa96ed4] */ r_edi = R32((u32)(0xa96ed4u));
    /* 0070448a: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 0070448e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0070448f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00704490: push dword ptr [edi + 0xa8c] */ { u32 v = R32((u32)(r_edi+0xa8cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00704496: call 0x7067e4 */ r_esp -= 4; W32(r_esp, 0x70449bu); f_007067e4();
    /* 0070449b: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0070449e: mov ecx, 2 */ r_ecx = 0x2u;
    /* 007044a3: mov dword ptr [esp + 0x30], ecx */ W32((u32)(r_esp+0x30u), r_ecx);
    /* 007044a7: jmp 0x704266 */ goto L_00704266;
L_007044ac:; BB(0x007044ac);
    /* 007044ac: cmp ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007044af: jle 0x7044d3 */ if ((fZ||fS!=fO)) goto L_007044d3;
L_007044b1:; BB(0x007044b1);
    /* 007044b1: lea ebx, [esp + 0x10] */ r_ebx = (u32)(r_esp+0x10u);
    /* 007044b5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007044b6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007044b7: call 0x706360 */ r_esp -= 4; W32(r_esp, 0x7044bcu); f_00706360();
    /* 007044bc: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007044bf: lea eax, [esp + 0x10] */ r_eax = (u32)(r_esp+0x10u);
    /* 007044c3: mov edx, esi */ r_edx = r_esi;
    /* 007044c5: mov ecx, edi */ r_ecx = r_edi;
    /* 007044c7: call 0x703ee1 */ r_esp -= 4; W32(r_esp, 0x7044ccu); f_00703ee1();
    /* 007044cc: mov edx, eax */ r_edx = r_eax;
    /* 007044ce: jmp 0x704316 */ goto L_00704316;
L_007044d3:; BB(0x007044d3);
    /* 007044d3: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 007044d7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007044d8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007044d9: movsx ecx, word ptr [ebp + 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x4u));
    /* 007044dd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007044de: call 0x706b60 */ r_esp -= 4; W32(r_esp, 0x7044e3u); f_00706b60();
    /* 007044e3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007044e6: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 007044ea: jmp 0x704316 */ goto L_00704316;
L_007044ef:; BB(0x007044ef);
    /* 007044ef: mov ecx, 2 */ r_ecx = 0x2u;
    /* 007044f4: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007044f7: mov edi, 0 */ r_edi = 0x0u;
    /* 007044fc: jle 0x704500 */ if ((fZ||fS!=fO)) goto L_00704500;
L_007044fe:; BB(0x007044fe);
    /* 007044fe: mov ebx, ecx */ r_ebx = r_ecx;
L_00704500:; BB(0x00704500);
    /* 00704500: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00704502: jle 0x704536 */ if ((fZ||fS!=fO)) goto L_00704536;
L_00704504:; BB(0x00704504);
    /* 00704504: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 00704508: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00704509: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0070450a: movsx eax, word ptr [ebp + edi*2 + 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+r_edi*2+0x4u));
    /* 0070450f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00704510: call 0x706b60 */ r_esp -= 4; W32(r_esp, 0x704515u); f_00706b60();
    /* 00704515: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00704518: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0070451b: cmp edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0070451d: jge 0x704536 */ if ((fS==fO)) goto L_00704536;
L_0070451f:; BB(0x0070451f);
    /* 0070451f: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00704522: jne 0x704504 */ if (!fZ) goto L_00704504;
L_00704524:; BB(0x00704524);
    /* 00704524: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 00704528: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00704529: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0070452a: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0070452c: call 0x70625c */ r_esp -= 4; W32(r_esp, 0x704531u); f_0070625c();
    /* 00704531: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00704534: jmp 0x704504 */ goto L_00704504;
L_00704536:; BB(0x00704536);
    /* 00704536: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 0070453a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0070453b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0070453c: push 0x3f */ { u32 v = 0x3fu; r_esp -= 4; W32(r_esp, v); }
    /* 0070453e: call 0x70625c */ r_esp -= 4; W32(r_esp, 0x704543u); f_0070625c();
    /* 00704543: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00704546: movsx ecx, word ptr [ebp] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp));
    /* 0070454a: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0070454d: jg 0x704558 */ if ((!fZ&&fS==fO)) goto L_00704558;
L_0070454f:; BB(0x0070454f);
    /* 0070454f: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 00704553: jmp 0x704316 */ goto L_00704316;
L_00704558:; BB(0x00704558);
    /* 00704558: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 0070455c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0070455d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0070455e: call 0x7069b8 */ r_esp -= 4; W32(r_esp, 0x704563u); f_007069b8();
    /* 00704563: lea eax, [esp + 0x14] */ r_eax = (u32)(r_esp+0x14u);
    /* 00704567: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00704568: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00704569: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0070456d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0070456e: call 0x706b60 */ r_esp -= 4; W32(r_esp, 0x704573u); f_00706b60();
    /* 00704573: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00704576: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0070457a: jmp 0x704316 */ goto L_00704316;
L_0070457f:; BB(0x0070457f);
    /* 0070457f: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 00704583: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00704584: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00704585: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00704586: call 0x706490 */ r_esp -= 4; W32(r_esp, 0x70458bu); f_00706490();
    /* 0070458b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0070458e: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 00704592: jmp 0x704316 */ goto L_00704316;
}

