#include "protos.h"

void f_00535070(void) /* sub_535070 */
{
    FN_ENTER(0x00535070);
    /* 00535070: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00535071: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00535072: mov edi, ecx */ r_edi = r_ecx;
    /* 00535074: mov ecx, edi */ r_ecx = r_edi;
    /* 00535076: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x53507bu); f_00770738();
    /* 0053507b: mov esi, eax */ r_esi = r_eax;
    /* 0053507d: mov edx, dword ptr [edi + 0x384] */ r_edx = R32((u32)(r_edi+0x384u));
    /* 00535083: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00535085: je 0x53524a */ if (fZ) goto L_0053524a;
L_0053508b:; BB(0x0053508b);
    /* 0053508b: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053508e: je 0x5351d2 */ if (fZ) goto L_005351d2;
L_00535094:; BB(0x00535094);
    /* 00535094: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00535097: je 0x5350c3 */ if (fZ) goto L_005350c3;
L_00535099:; BB(0x00535099);
    /* 00535099: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053509c: jne 0x5351a3 */ if (!fZ) goto L_005351a3;
L_005350a2:; BB(0x005350a2);
    /* 005350a2: movsx eax, word ptr [edi + 0x344] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x344u));
    /* 005350a9: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005350ac: mov word ptr [edi + 0x344], ax */ W16((u32)(r_edi+0x344u), (u16)r_eax);
    /* 005350b3: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 005350b6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005350b8: jle 0x5351bf */ if ((fZ||fS!=fO)) goto L_005351bf;
L_005350be:; BB(0x005350be);
    /* 005350be: jmp 0x5351a3 */ goto L_005351a3;
L_005350c3:; BB(0x005350c3);
    /* 005350c3: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005350c5: je 0x5351c8 */ if (fZ) goto L_005351c8;
L_005350cb:; BB(0x005350cb);
    /* 005350cb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005350cd: push dword ptr [esi + 0x308] */ { u32 v = R32((u32)(r_esi+0x308u)); r_esp -= 4; W32(r_esp, v); }
    /* 005350d3: mov ecx, edi */ r_ecx = r_edi;
    /* 005350d5: push dword ptr [esi + 0x304] */ { u32 v = R32((u32)(r_esi+0x304u)); r_esp -= 4; W32(r_esp, v); }
    /* 005350db: push dword ptr [esi + 0x300] */ { u32 v = R32((u32)(r_esi+0x300u)); r_esp -= 4; W32(r_esp, v); }
    /* 005350e1: push 0x3f333333 */ { u32 v = 0x3f333333u; r_esp -= 4; W32(r_esp, v); }
    /* 005350e6: call 0x771bf4 */ r_esp -= 4; W32(r_esp, 0x5350ebu); f_00771bf4();
    /* 005350eb: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005350ed: mov eax, dword ptr [edi + 0x358] */ r_eax = R32((u32)(r_edi+0x358u));
    /* 005350f3: lea edx, [edi + 0x30c] */ r_edx = (u32)(r_edi+0x30cu);
    /* 005350f9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005350fa: mov ecx, edi */ r_ecx = r_edi;
    /* 005350fc: push dword ptr [eax + 8] */ { u32 v = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005350ff: call 0x771858 */ r_esp -= 4; W32(r_esp, 0x535104u); f_00771858();
    /* 00535104: push 0x41000000 */ { u32 v = 0x41000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00535109: mov ecx, edi */ r_ecx = r_edi;
    /* 0053510b: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x535110u); f_007aaa30();
    /* 00535110: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00535112: je 0x535165 */ if (fZ) goto L_00535165;
L_00535114:; BB(0x00535114);
    /* 00535114: lea eax, [edi + 0x38] */ r_eax = (u32)(r_edi+0x38u);
    /* 00535117: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00535119: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053511a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053511b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053511c: push 0x1fd */ { u32 v = 0x1fdu; r_esp -= 4; W32(r_esp, v); }
    /* 00535121: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x535126u); f_00814298();
    /* 00535126: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00535129: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 0053512e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0053512f: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 00535131: mov ecx, esi */ r_ecx = r_esi;
    /* 00535133: call dword ptr [edx + 0x50] */ { u32 t = R32((u32)(r_edx+0x50u)); r_esp -= 4; W32(r_esp, 0x535136u); call_ind(t); }
    /* 00535136: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00535138: je 0x535165 */ if (fZ) goto L_00535165;
L_0053513a:; BB(0x0053513a);
    /* 0053513a: push 0x40400000 */ { u32 v = 0x40400000u; r_esp -= 4; W32(r_esp, v); }
    /* 0053513f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00535140: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 00535142: mov ecx, esi */ r_ecx = r_esi;
    /* 00535144: call dword ptr [edx + 0x68] */ { u32 t = R32((u32)(r_edx+0x68u)); r_esp -= 4; W32(r_esp, 0x535147u); call_ind(t); }
    /* 00535147: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 0053514c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0053514d: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 0053514f: mov ecx, esi */ r_ecx = r_esi;
    /* 00535151: call dword ptr [edx + 0x5c] */ { u32 t = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, 0x535154u); call_ind(t); }
    /* 00535154: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00535156: mov eax, dword ptr [edi + 0x390] */ r_eax = R32((u32)(r_edi+0x390u));
    /* 0053515c: or eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0053515f: mov dword ptr [edi + 0x390], eax */ W32((u32)(r_edi+0x390u), r_eax);
L_00535165:; BB(0x00535165);
    /* 00535165: mov eax, dword ptr [edi + 0xb4] */ r_eax = R32((u32)(r_edi+0xb4u));
    /* 0053516b: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053516e: je 0x5351a3 */ if (fZ) goto L_005351a3;
L_00535170:; BB(0x00535170);
    /* 00535170: mov edx, dword ptr [edi + 0x390] */ r_edx = R32((u32)(r_edi+0x390u));
    /* 00535176: mov eax, 0x5a */ r_eax = 0x5au;
    /* 0053517b: mov word ptr [edi + 0x344], ax */ W16((u32)(r_edi+0x344u), (u16)r_eax);
    /* 00535182: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00535185: jne 0x5351a3 */ if (!fZ) goto L_005351a3;
L_00535187:; BB(0x00535187);
    /* 00535187: movsx eax, word ptr [edi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32eu));
    /* 0053518e: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00535191: je 0x5351a3 */ if (fZ) goto L_005351a3;
L_00535193:; BB(0x00535193);
    /* 00535193: mov dword ptr [edi + 0x37c], 0xc */ W32((u32)(r_edi+0x37cu), 0xcu);
    /* 0053519d: mov dword ptr [edi + 0x388], eax */ W32((u32)(r_edi+0x388u), r_eax);
L_005351a3:; BB(0x005351a3);
    /* 005351a3: mov ecx, edi */ r_ecx = r_edi;
    /* 005351a5: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x5351aau); f_007aa094();
    /* 005351aa: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005351ac: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005351ae: mov ecx, edi */ r_ecx = r_edi;
    /* 005351b0: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x5351b5u); f_00772b44();
    /* 005351b5: mov ecx, edi */ r_ecx = r_edi;
    /* 005351b7: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x5351bcu); f_007b6880();
    /* 005351bc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005351bd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005351be: ret  */ FN_RET(0x00535070); r_esp += 4; return;
L_005351bf:; BB(0x005351bf);
    /* 005351bf: mov ecx, edi */ r_ecx = r_edi;
    /* 005351c1: call 0x533078 */ r_esp -= 4; W32(r_esp, 0x5351c6u); f_00533078();
    /* 005351c6: jmp 0x5351a3 */ goto L_005351a3;
L_005351c8:; BB(0x005351c8);
    /* 005351c8: mov ecx, edi */ r_ecx = r_edi;
    /* 005351ca: call 0x533078 */ r_esp -= 4; W32(r_esp, 0x5351cfu); f_00533078();
    /* 005351cf: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005351d0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005351d1: ret  */ FN_RET(0x00535070); r_esp += 4; return;
L_005351d2:; BB(0x005351d2);
    /* 005351d2: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005351d4: je 0x535240 */ if (fZ) goto L_00535240;
L_005351d6:; BB(0x005351d6);
    /* 005351d6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005351d8: push dword ptr [esi + 0x308] */ { u32 v = R32((u32)(r_esi+0x308u)); r_esp -= 4; W32(r_esp, v); }
    /* 005351de: mov ecx, edi */ r_ecx = r_edi;
    /* 005351e0: push dword ptr [esi + 0x304] */ { u32 v = R32((u32)(r_esi+0x304u)); r_esp -= 4; W32(r_esp, v); }
    /* 005351e6: push dword ptr [esi + 0x300] */ { u32 v = R32((u32)(r_esi+0x300u)); r_esp -= 4; W32(r_esp, v); }
    /* 005351ec: push 0x3f333333 */ { u32 v = 0x3f333333u; r_esp -= 4; W32(r_esp, v); }
    /* 005351f1: call 0x771bf4 */ r_esp -= 4; W32(r_esp, 0x5351f6u); f_00771bf4();
    /* 005351f6: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005351f8: mov edx, dword ptr [edi + 0x358] */ r_edx = R32((u32)(r_edi+0x358u));
    /* 005351fe: lea eax, [edi + 0x30c] */ r_eax = (u32)(r_edi+0x30cu);
    /* 00535204: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00535205: mov ecx, edi */ r_ecx = r_edi;
    /* 00535207: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0053520a: call 0x771858 */ r_esp -= 4; W32(r_esp, 0x53520fu); f_00771858();
    /* 0053520f: mov edx, dword ptr [edi + 0x31c] */ r_edx = R32((u32)(r_edi+0x31cu));
    /* 00535215: fld dword ptr [edx + 8] */ FPUSH(R_F32((u32)(r_edx+0x8u)));
    /* 00535218: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0053521a: fcomp dword ptr [edi + 0x3c8] */ fx_compare(ST(0), R_F32((u32)(r_edi+0x3c8u))); FPOP();
    /* 00535220: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00535222: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00535223: jb 0x5351a3 */ if (fC) goto L_005351a3;
L_00535229:; BB(0x00535229);
    /* 00535229: mov eax, 2 */ r_eax = 0x2u;
    /* 0053522e: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 00535235: mov dword ptr [edi + 0x384], eax */ W32((u32)(r_edi+0x384u), r_eax);
    /* 0053523b: jmp 0x5351a3 */ goto L_005351a3;
L_00535240:; BB(0x00535240);
    /* 00535240: mov ecx, edi */ r_ecx = r_edi;
    /* 00535242: call 0x533078 */ r_esp -= 4; W32(r_esp, 0x535247u); f_00533078();
    /* 00535247: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00535248: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00535249: ret  */ FN_RET(0x00535070); r_esp += 4; return;
L_0053524a:; BB(0x0053524a);
    /* 0053524a: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053524c: je 0x535276 */ if (fZ) goto L_00535276;
L_0053524e:; BB(0x0053524e);
    /* 0053524e: mov eax, dword ptr [edi + 0x390] */ r_eax = R32((u32)(r_edi+0x390u));
    /* 00535254: and eax, 0xfffefff7 */ {  u32 a = r_eax; u32 b = 0xfffefff7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00535259: mov dword ptr [edi + 0x390], eax */ W32((u32)(r_edi+0x390u), r_eax);
    /* 0053525f: mov edx, 1 */ r_edx = 0x1u;
    /* 00535264: mov word ptr [edi + 0xb8], dx */ W16((u32)(r_edi+0xb8u), (u16)r_edx);
    /* 0053526b: mov dword ptr [edi + 0x384], edx */ W32((u32)(r_edi+0x384u), r_edx);
    /* 00535271: jmp 0x5351a3 */ goto L_005351a3;
L_00535276:; BB(0x00535276);
    /* 00535276: mov ecx, edi */ r_ecx = r_edi;
    /* 00535278: call 0x533078 */ r_esp -= 4; W32(r_esp, 0x53527du); f_00533078();
    /* 0053527d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0053527e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0053527f: ret  */ FN_RET(0x00535070); r_esp += 4; return;
}

void f_00535246(void)
{
    FN_ENTER(0x00535246);
    /* 00535246: call ptr [esi + 0x5f] */ { u32 t = R32((u32)(r_esi+0x5fu)); r_esp -= 4; W32(r_esp, 0x535249u); call_ind(t); }
    /* 00535249: ret  */ FN_RET(0x00535246); r_esp += 4; return;
}

void f_00535280(void) /* sub_535280 */
{
    FN_ENTER(0x00535280);
    /* 00535280: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00535281: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00535282: mov edi, ecx */ r_edi = r_ecx;
    /* 00535284: mov ecx, edi */ r_ecx = r_edi;
    /* 00535286: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x53528bu); f_00770738();
    /* 0053528b: mov esi, eax */ r_esi = r_eax;
    /* 0053528d: mov edx, dword ptr [edi + 0x384] */ r_edx = R32((u32)(r_edi+0x384u));
    /* 00535293: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00535295: je 0x53531b */ if (fZ) goto L_0053531b;
L_0053529b:; BB(0x0053529b);
    /* 0053529b: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0053529e: jne 0x535391 */ if (!fZ) goto L_00535391;
L_005352a4:; BB(0x005352a4);
    /* 005352a4: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005352a6: je 0x535394 */ if (fZ) goto L_00535394;
L_005352ac:; BB(0x005352ac);
    /* 005352ac: lea eax, [edi + 0x38] */ r_eax = (u32)(r_edi+0x38u);
    /* 005352af: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005352b1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005352b2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005352b3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005352b4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005352b5: push 0x200 */ { u32 v = 0x200u; r_esp -= 4; W32(r_esp, v); }
    /* 005352ba: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x5352bfu); f_008144b0();
    /* 005352bf: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005352c2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005352c4: push dword ptr [esi + 0x308] */ { u32 v = R32((u32)(r_esi+0x308u)); r_esp -= 4; W32(r_esp, v); }
    /* 005352ca: mov edx, dword ptr [edi + 0x358] */ r_edx = R32((u32)(r_edi+0x358u));
    /* 005352d0: mov ecx, edi */ r_ecx = r_edi;
    /* 005352d2: push dword ptr [esi + 0x304] */ { u32 v = R32((u32)(r_esi+0x304u)); r_esp -= 4; W32(r_esp, v); }
    /* 005352d8: push dword ptr [esi + 0x300] */ { u32 v = R32((u32)(r_esi+0x300u)); r_esp -= 4; W32(r_esp, v); }
    /* 005352de: push dword ptr [edx + 4] */ { u32 v = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005352e1: call 0x771bf4 */ r_esp -= 4; W32(r_esp, 0x5352e6u); f_00771bf4();
    /* 005352e6: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005352e8: mov edx, dword ptr [edi + 0x358] */ r_edx = R32((u32)(r_edi+0x358u));
    /* 005352ee: lea eax, [edi + 0x30c] */ r_eax = (u32)(r_edi+0x30cu);
    /* 005352f4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005352f5: mov ecx, edi */ r_ecx = r_edi;
    /* 005352f7: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005352fa: call 0x771858 */ r_esp -= 4; W32(r_esp, 0x5352ffu); f_00771858();
    /* 005352ff: mov ecx, edi */ r_ecx = r_edi;
    /* 00535301: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x535306u); f_007aa094();
    /* 00535306: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00535308: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053530a: mov ecx, edi */ r_ecx = r_edi;
    /* 0053530c: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x535311u); f_00772b44();
    /* 00535311: mov ecx, edi */ r_ecx = r_edi;
    /* 00535313: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x535318u); f_007b6880();
    /* 00535318: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00535319: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0053531a: ret  */ FN_RET(0x00535280); r_esp += 4; return;
L_0053531b:; BB(0x0053531b);
    /* 0053531b: push 0x437a0000 */ { u32 v = 0x437a0000u; r_esp -= 4; W32(r_esp, v); }
    /* 00535320: mov ecx, edi */ r_ecx = r_edi;
    /* 00535322: call 0x52ccd8 */ r_esp -= 4; W32(r_esp, 0x535327u); f_0052ccd8();
    /* 00535327: movzx esi, word ptr [edi + 0x340] */ r_esi = (u32)R16((u32)(r_edi+0x340u));
    /* 0053532e: cmp esi, 0xffff */ {  u32 a = r_esi; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00535334: je 0x53539e */ if (fZ) goto L_0053539e;
L_00535336:; BB(0x00535336);
    /* 00535336: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 00535339: and eax, 0xfbfbfeff */ {  u32 a = r_eax; u32 b = 0xfbfbfeffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0053533e: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 00535341: mov edx, 1 */ r_edx = 0x1u;
    /* 00535346: mov word ptr [edi + 0xb8], dx */ W16((u32)(r_edi+0xb8u), (u16)r_edx);
    /* 0053534d: mov dword ptr [edi + 0x384], edx */ W32((u32)(r_edi+0x384u), r_edx);
L_00535353:; BB(0x00535353);
    /* 00535353: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00535354: call 0x578c74 */ r_esp -= 4; W32(r_esp, 0x535359u); f_00578c74();
    /* 00535359: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0053535a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053535b: mov ecx, edi */ r_ecx = r_edi;
    /* 0053535d: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x535362u); f_007706b0();
    /* 00535362: mov ecx, edi */ r_ecx = r_edi;
    /* 00535364: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x535369u); f_00770738();
    /* 00535369: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0053536b: je 0x535391 */ if (fZ) goto L_00535391;
L_0053536d:; BB(0x0053536d);
    /* 0053536d: mov edx, dword ptr [eax + 0x300] */ r_edx = R32((u32)(r_eax+0x300u));
    /* 00535373: mov dword ptr [edi + 0x2a4], edx */ W32((u32)(r_edi+0x2a4u), r_edx);
    /* 00535379: mov esi, dword ptr [eax + 0x304] */ r_esi = R32((u32)(r_eax+0x304u));
    /* 0053537f: mov dword ptr [edi + 0x2a8], esi */ W32((u32)(r_edi+0x2a8u), r_esi);
    /* 00535385: mov eax, dword ptr [eax + 0x308] */ r_eax = R32((u32)(r_eax+0x308u));
    /* 0053538b: mov dword ptr [edi + 0x2ac], eax */ W32((u32)(r_edi+0x2acu), r_eax);
L_00535391:; BB(0x00535391);
    /* 00535391: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00535392: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00535393: ret  */ FN_RET(0x00535280); r_esp += 4; return;
L_00535394:; BB(0x00535394);
    /* 00535394: mov ecx, edi */ r_ecx = r_edi;
    /* 00535396: call 0x533078 */ r_esp -= 4; W32(r_esp, 0x53539bu); f_00533078();
    /* 0053539b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0053539c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0053539d: ret  */ FN_RET(0x00535280); r_esp += 4; return;
L_0053539e:; BB(0x0053539e);
    /* 0053539e: mov ecx, edi */ r_ecx = r_edi;
    /* 005353a0: call 0x533078 */ r_esp -= 4; W32(r_esp, 0x5353a5u); f_00533078();
    /* 005353a5: movzx esi, word ptr [edi + 0x340] */ r_esi = (u32)R16((u32)(r_edi+0x340u));
    /* 005353ac: jmp 0x535353 */ goto L_00535353;
}

void f_00535345(void)
{
    FN_ENTER(0x00535345);
    /* 00535345: add byte ptr [esi - 0x77], ah */ { u32 ad = (u32)(r_esi+0xffffff89u);  u32 a = R8(ad); u32 b = (u8)(r_eax>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00535348: xchg edi, eax */ { u32 x = r_edi; u32 y = r_eax; r_edi = y; r_eax = x; }
    /* 00535349: mov eax, 0x89000000 */ r_eax = 0x89000000u;
    /* 0053534e: xchg edi, eax */ { u32 x = r_edi; u32 y = r_eax; r_edi = y; r_eax = x; }
    /* 0053534f: test byte ptr [ebx], al */ {  u32 a = R8((u32)(r_ebx)); u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;   }
    /* 00535351: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00535353: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00535354: call 0x578c74 */ r_esp -= 4; W32(r_esp, 0x535359u); f_00578c74();
    /* 00535359: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0053535a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053535b: mov ecx, edi */ r_ecx = r_edi;
    /* 0053535d: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x535362u); f_007706b0();
    /* 00535362: mov ecx, edi */ r_ecx = r_edi;
    /* 00535364: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x535369u); f_00770738();
    /* 00535369: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0053536b: je 0x535391 */ if (fZ) goto L_00535391;
L_0053536d:; BB(0x0053536d);
    /* 0053536d: mov edx, dword ptr [eax + 0x300] */ r_edx = R32((u32)(r_eax+0x300u));
    /* 00535373: mov dword ptr [edi + 0x2a4], edx */ W32((u32)(r_edi+0x2a4u), r_edx);
    /* 00535379: mov esi, dword ptr [eax + 0x304] */ r_esi = R32((u32)(r_eax+0x304u));
    /* 0053537f: mov dword ptr [edi + 0x2a8], esi */ W32((u32)(r_edi+0x2a8u), r_esi);
    /* 00535385: mov eax, dword ptr [eax + 0x308] */ r_eax = R32((u32)(r_eax+0x308u));
    /* 0053538b: mov dword ptr [edi + 0x2ac], eax */ W32((u32)(r_edi+0x2acu), r_eax);
L_00535391:; BB(0x00535391);
    /* 00535391: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00535392: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00535393: ret  */ FN_RET(0x00535345); r_esp += 4; return;
}

void f_005353b0(void) /* sub_5353B0 */
{
    FN_ENTER(0x005353b0);
    /* 005353b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005353b1: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005353b3: mov eax, dword ptr [ebp + 0x384] */ r_eax = R32((u32)(r_ebp+0x384u));
    /* 005353b9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005353bb: je 0x5353d4 */ if (fZ) goto L_005353d4;
L_005353bd:; BB(0x005353bd);
    /* 005353bd: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005353c0: je 0x5353f2 */ if (fZ) goto L_005353f2;
L_005353c2:; BB(0x005353c2);
    /* 005353c2: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005353c5: jne 0x535404 */ if (!fZ) goto L_00535404;
L_005353c7:; BB(0x005353c7);
    /* 005353c7: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 005353ca: and eax, 0xfffbffff */ {  u32 a = r_eax; u32 b = 0xfffbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005353cf: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 005353d2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005353d3: ret  */ FN_RET(0x005353b0); r_esp += 4; return;
L_005353d4:; BB(0x005353d4);
    /* 005353d4: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 005353d7: mov dword ptr [ebp + 0x384], 1 */ W32((u32)(r_ebp+0x384u), 0x1u);
    /* 005353e1: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005353e3: mov word ptr [ebp + 0xb8], dx */ W16((u32)(r_ebp+0xb8u), (u16)r_edx);
    /* 005353ea: or eax, 0x40000 */ {  u32 a = r_eax; u32 b = 0x40000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005353ef: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
L_005353f2:; BB(0x005353f2);
    /* 005353f2: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005353f4: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x5353f9u); f_007aa094();
    /* 005353f9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005353fb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005353fd: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005353ff: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x535404u); f_00772b44();
L_00535404:; BB(0x00535404);
    /* 00535404: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00535405: ret  */ FN_RET(0x005353b0); r_esp += 4; return;
}

void f_00535408(void)
{
    FN_ENTER(0x00535408);
    /* 00535408: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00535409: mov ebp, esp */ r_ebp = r_esp;
    /* 0053540b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0053540d: push 0x8d4e12 */ { u32 v = 0x8d4e12u; r_esp -= 4; W32(r_esp, v); }
    /* 00535412: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00535418: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00535419: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00535420: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00535423: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00535426: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00535429: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0053542c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0053542f: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00535431: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 00535438: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x53543du); f_005caba4();
    /* 0053543d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0053543e: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00535441: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00535443: je 0x5354cb */ if (fZ) goto L_005354cb;
L_00535449:; BB(0x00535449);
    /* 00535449: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 00535450: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00535457: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 0053545d: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00535460: call 0x787a4c */ r_esp -= 4; W32(r_esp, 0x535465u); f_00787a4c();
    /* 00535465: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00535468: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0053546f: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_00535472:; BB(0x00535472);
    /* 00535472: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00535479: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 00535480: push 0x430 */ { u32 v = 0x430u; r_esp -= 4; W32(r_esp, v); }
    /* 00535485: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x53548au); f_005caba4();
    /* 0053548a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0053548b: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0053548e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00535490: je 0x5354c7 */ if (fZ) goto L_005354c7;
L_00535492:; BB(0x00535492);
    /* 00535492: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 00535499: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005354a0: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005354a3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005354a6: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005354a9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005354aa: call 0x5354d4 */ r_esp -= 4; W32(r_esp, 0x5354afu); f_005354d4();
    /* 005354af: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005354b2: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_005354b9:; BB(0x005354b9);
    /* 005354b9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005354bc: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005354c3: mov esp, ebp */ r_esp = r_ebp;
    /* 005354c5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005354c6: ret  */ FN_RET(0x00535408); r_esp += 4; return;
L_005354c7:; BB(0x005354c7);
    /* 005354c7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005354c9: jmp 0x5354b9 */ goto L_005354b9;
L_005354cb:; BB(0x005354cb);
    /* 005354cb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005354cd: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005354d0: jmp 0x535472 */ goto L_00535472;
}

void f_00535449(void)
{
    FN_ENTER(0x00535449);
    /* 00535449: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 00535450: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00535457: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 0053545d: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00535460: call 0x787a4c */ r_esp -= 4; W32(r_esp, 0x535465u); f_00787a4c();
    /* 00535465: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00535468: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0053546f: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00535472: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00535479: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 00535480: push 0x430 */ { u32 v = 0x430u; r_esp -= 4; W32(r_esp, v); }
    /* 00535485: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x53548au); f_005caba4();
    /* 0053548a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0053548b: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0053548e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00535490: je 0x5354c7 */ if (fZ) goto L_005354c7;
L_00535492:; BB(0x00535492);
    /* 00535492: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 00535499: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005354a0: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005354a3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005354a6: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005354a9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005354aa: call 0x5354d4 */ r_esp -= 4; W32(r_esp, 0x5354afu); f_005354d4();
    /* 005354af: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005354b2: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_005354b9:; BB(0x005354b9);
    /* 005354b9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005354bc: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005354c3: mov esp, ebp */ r_esp = r_ebp;
    /* 005354c5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005354c6: ret  */ FN_RET(0x00535449); r_esp += 4; return;
L_005354c7:; BB(0x005354c7);
    /* 005354c7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005354c9: jmp 0x5354b9 */ goto L_005354b9;
}

void f_005354d4(void) /* sub_5354D4 */
{
    FN_ENTER(0x005354d4);
    /* 005354d4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005354d5: mov ebp, esp */ r_ebp = r_esp;
    /* 005354d7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005354d9: push 0x8d4e2c */ { u32 v = 0x8d4e2cu; r_esp -= 4; W32(r_esp, v); }
    /* 005354de: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005354e4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005354e5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005354ec: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005354ef: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005354f2: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005354f5: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005354f8: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005354fb: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005354fe: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00535501: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00535504: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00535507: call 0x5316a4 */ r_esp -= 4; W32(r_esp, 0x53550cu); f_005316a4();
    /* 0053550c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00535513: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00535516: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00535519: mov dword ptr [ecx], 0xb01d80 */ W32((u32)(r_ecx), 0xb01d80u);
    /* 0053551f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00535520: call dword ptr [0xb01ecc] */ { u32 t = R32((u32)(0xb01eccu)); r_esp -= 4; W32(r_esp, 0x535526u); call_ind(t); }
    /* 00535526: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00535529: call 0x535818 */ r_esp -= 4; W32(r_esp, 0x53552eu); f_00535818();
    /* 0053552e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00535531: movsx edx, word ptr [eax + 0xa] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0xau));
    /* 00535535: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00535537: je 0x535541 */ if (fZ) goto L_00535541;
L_00535539:; BB(0x00535539);
    /* 00535539: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0053553c: call 0x52ca40 */ r_esp -= 4; W32(r_esp, 0x535541u); f_0052ca40();
L_00535541:; BB(0x00535541);
    /* 00535541: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00535544: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00535547: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0053554e: mov esp, ebp */ r_esp = r_ebp;
    /* 00535550: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00535551: ret 8 */ FN_RET(0x005354d4); r_esp += 12; return;
}

void f_00535541(void)
{
    FN_ENTER(0x00535541);
    /* 00535541: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00535544: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00535547: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0053554e: mov esp, ebp */ r_esp = r_ebp;
    /* 00535550: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00535551: ret 8 */ FN_RET(0x00535541); r_esp += 12; return;
}

void f_00535554(void) /* sub_535554 */
{
    FN_ENTER(0x00535554);
    /* 00535554: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00535555: mov ebp, esp */ r_ebp = r_esp;
    /* 00535557: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00535559: push 0x8d4e6e */ { u32 v = 0x8d4e6eu; r_esp -= 4; W32(r_esp, v); }
    /* 0053555e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00535564: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00535565: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0053556c: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0053556f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00535572: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00535575: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00535578: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0053557b: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0053557d: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 00535584: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x535589u); f_005caba4();
    /* 00535589: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0053558a: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0053558d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053558f: je 0x535628 */ if (fZ) goto L_00535628;
L_00535595:; BB(0x00535595);
    /* 00535595: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 0053559c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005355a3: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 005355a9: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005355ac: call 0x787a4c */ r_esp -= 4; W32(r_esp, 0x5355b1u); f_00787a4c();
    /* 005355b1: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 005355b4: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 005355bb: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_005355be:; BB(0x005355be);
    /* 005355be: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005355c5: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 005355cc: push 0x430 */ { u32 v = 0x430u; r_esp -= 4; W32(r_esp, v); }
    /* 005355d1: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5355d6u); f_005caba4();
    /* 005355d6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005355d7: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005355da: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005355dc: je 0x535624 */ if (fZ) goto L_00535624;
L_005355de:; BB(0x005355de);
    /* 005355de: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 005355e5: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005355ec: push dword ptr [ebp + 0x1c] */ { u32 v = R32((u32)(r_ebp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005355ef: push dword ptr [ebp + 0x18] */ { u32 v = R32((u32)(r_ebp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 005355f2: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 005355f5: movzx eax, word ptr [ebp + 0xc] */ r_eax = (u32)R16((u32)(r_ebp+0xcu));
    /* 005355f9: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 005355fc: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005355ff: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00535602: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00535603: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00535606: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00535607: call 0x535630 */ r_esp -= 4; W32(r_esp, 0x53560cu); f_00535630();
    /* 0053560c: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0053560f: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_00535616:; BB(0x00535616);
    /* 00535616: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00535619: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00535620: mov esp, ebp */ r_esp = r_ebp;
    /* 00535622: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00535623: ret  */ FN_RET(0x00535554); r_esp += 4; return;
L_00535624:; BB(0x00535624);
    /* 00535624: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00535626: jmp 0x535616 */ goto L_00535616;
L_00535628:; BB(0x00535628);
    /* 00535628: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0053562a: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0053562d: jmp 0x5355be */ goto L_005355be;
}

void f_00535630(void) /* sub_535630 */
{
    FN_ENTER(0x00535630);
    /* 00535630: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00535631: mov ebp, esp */ r_ebp = r_esp;
    /* 00535633: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00535635: push 0x8d4e88 */ { u32 v = 0x8d4e88u; r_esp -= 4; W32(r_esp, v); }
    /* 0053563a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00535640: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00535641: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00535648: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0053564b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0053564e: mov dword ptr [ebp - 0x30], edi */ W32((u32)(r_ebp+0xffffffd0u), r_edi);
    /* 00535651: mov dword ptr [ebp - 0x2c], esi */ W32((u32)(r_ebp+0xffffffd4u), r_esi);
    /* 00535654: mov dword ptr [ebp - 0x28], ebx */ W32((u32)(r_ebp+0xffffffd8u), r_ebx);
    /* 00535657: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0053565a: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0053565d: movzx edx, word ptr [ebp + 0x10] */ r_edx = (u32)R16((u32)(r_ebp+0x10u));
    /* 00535661: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 00535664: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00535667: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0053566a: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 0053566d: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00535670: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 00535673: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00535676: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 00535679: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0053567c: call 0x5316a4 */ r_esp -= 4; W32(r_esp, 0x535681u); f_005316a4();
    /* 00535681: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00535688: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0053568b: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0053568e: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00535691: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00535694: mov word ptr [ecx + 0x1c], dx */ W16((u32)(r_ecx+0x1cu), (u16)r_edx);
    /* 00535698: mov word ptr [ecx + 0x2c], bx */ W16((u32)(r_ecx+0x2cu), (u16)r_ebx);
    /* 0053569c: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0053569f: mov dword ptr [ecx], 0xb01d80 */ W32((u32)(r_ecx), 0xb01d80u);
    /* 005356a5: movzx esi, word ptr [eax + 0x28] */ r_esi = (u32)R16((u32)(r_eax+0x28u));
    /* 005356a9: mov word ptr [ecx + 0x28], si */ W16((u32)(r_ecx+0x28u), (u16)r_esi);
    /* 005356ad: movzx edi, word ptr [eax + 0x2a] */ r_edi = (u32)R16((u32)(r_eax+0x2au));
    /* 005356b1: mov word ptr [ecx + 0x2a], di */ W16((u32)(r_ecx+0x2au), (u16)r_edi);
    /* 005356b5: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 005356b7: mov dword ptr [ecx + 0x38], edx */ W32((u32)(r_ecx+0x38u), r_edx);
    /* 005356ba: mov edx, dword ptr [ebx + 4] */ r_edx = R32((u32)(r_ebx+0x4u));
    /* 005356bd: mov dword ptr [ecx + 0x3c], edx */ W32((u32)(r_ecx+0x3cu), r_edx);
    /* 005356c0: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 005356c3: mov dword ptr [ecx + 0x40], edx */ W32((u32)(r_ecx+0x40u), r_edx);
    /* 005356c6: mov edx, dword ptr [eax + 0x50] */ r_edx = R32((u32)(r_eax+0x50u));
    /* 005356c9: mov dword ptr [ecx + 0x50], edx */ W32((u32)(r_ecx+0x50u), r_edx);
    /* 005356cc: mov edx, dword ptr [eax + 0x54] */ r_edx = R32((u32)(r_eax+0x54u));
    /* 005356cf: mov dword ptr [ecx + 0x54], edx */ W32((u32)(r_ecx+0x54u), r_edx);
    /* 005356d2: mov eax, dword ptr [eax + 0x58] */ r_eax = R32((u32)(r_eax+0x58u));
    /* 005356d5: mov dword ptr [ecx + 0x58], eax */ W32((u32)(r_ecx+0x58u), r_eax);
    /* 005356d8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005356da: mov dword ptr [ecx + 0x64], eax */ W32((u32)(r_ecx+0x64u), r_eax);
    /* 005356dd: mov dword ptr [ecx + 0x5c], eax */ W32((u32)(r_ecx+0x5cu), r_eax);
    /* 005356e0: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005356e3: mov dword ptr [ecx + 0x60], eax */ W32((u32)(r_ecx+0x60u), r_eax);
    /* 005356e6: call 0x535818 */ r_esp -= 4; W32(r_esp, 0x5356ebu); f_00535818();
    /* 005356eb: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005356ee: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 005356f1: mov dword ptr [ecx + 0x80], 0 */ W32((u32)(r_ecx+0x80u), 0x0u);
    /* 005356fb: mov eax, dword ptr [ebx + 0x3c0] */ r_eax = R32((u32)(r_ebx+0x3c0u));
    /* 00535701: mov dword ptr [ecx + 0x3c0], eax */ W32((u32)(r_ecx+0x3c0u), r_eax);
    /* 00535707: mov edx, dword ptr [ebx + 0x3c4] */ r_edx = R32((u32)(r_ebx+0x3c4u));
    /* 0053570d: mov dword ptr [ecx + 0x3c4], edx */ W32((u32)(r_ecx+0x3c4u), r_edx);
    /* 00535713: mov esi, dword ptr [ebx + 0x3bc] */ r_esi = R32((u32)(r_ebx+0x3bcu));
    /* 00535719: mov dword ptr [ecx + 0x3bc], esi */ W32((u32)(r_ecx+0x3bcu), r_esi);
    /* 0053571f: call 0x53436c */ r_esp -= 4; W32(r_esp, 0x535724u); f_0053436c();
    /* 00535724: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00535727: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 0053572a: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 0053572d: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00535730: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00535733: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0053573a: mov esp, ebp */ r_esp = r_ebp;
    /* 0053573c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053573d: ret 0x1c */ FN_RET(0x00535630); r_esp += 32; return;
}

void f_00535740(void) /* sub_535740 */
{
    FN_ENTER(0x00535740);
    /* 00535740: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 00535743: or eax, 0x4040000 */ {  u32 a = r_eax; u32 b = 0x4040000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00535748: mov edx, dword ptr [ecx + 0x390] */ r_edx = R32((u32)(r_ecx+0x390u));
    /* 0053574e: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 00535751: and edx, 0xdfffffff */ {  u32 a = r_edx; u32 b = 0xdfffffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00535757: or edx, 0x10000000 */ {  u32 a = r_edx; u32 b = 0x10000000u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0053575d: mov dword ptr [ecx + 0x390], edx */ W32((u32)(r_ecx+0x390u), r_edx);
    /* 00535763: ret  */ FN_RET(0x00535740); r_esp += 4; return;
}

void f_00535764(void) /* sub_535764 */
{
    FN_ENTER(0x00535764);
    /* 00535764: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 00535767: test eax, 0xa00 */ {  u32 a = r_eax; u32 b = 0xa00u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053576c: jne 0x53577b */ if (!fZ) goto L_0053577b;
L_0053576e:; BB(0x0053576e);
    /* 0053576e: mov eax, dword ptr [ecx + 0x390] */ r_eax = R32((u32)(r_ecx+0x390u));
    /* 00535774: test eax, 0x10000000 */ {  u32 a = r_eax; u32 b = 0x10000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00535779: je 0x53577e */ if (fZ) goto L_0053577e;
L_0053577b:; BB(0x0053577b);
    /* 0053577b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0053577d: ret  */ FN_RET(0x00535764); r_esp += 4; return;
L_0053577e:; BB(0x0053577e);
    /* 0053577e: mov eax, 1 */ r_eax = 0x1u;
    /* 00535783: ret  */ FN_RET(0x00535764); r_esp += 4; return;
}

void f_005357b0(void) /* sub_5357B0 */
{
    FN_ENTER(0x005357b0);
    /* 005357b0: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005357b3: mov eax, dword ptr [0x922af0] */ r_eax = R32((u32)(0x922af0u));
    /* 005357b8: movzx edx, word ptr [0x922af4] */ r_edx = (u32)R16((u32)(0x922af4u));
    /* 005357bf: movzx ecx, word ptr [0x922af6] */ r_ecx = (u32)R16((u32)(0x922af6u));
    /* 005357c6: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 005357ca: movzx eax, word ptr [0x922af8] */ r_eax = (u32)R16((u32)(0x922af8u));
    /* 005357d1: mov word ptr [esp + 8], dx */ W16((u32)(r_esp+0x8u), (u16)r_edx);
    /* 005357d6: mov edx, dword ptr [0xa73480] */ r_edx = R32((u32)(0xa73480u));
    /* 005357dc: mov word ptr [esp + 0xa], cx */ W16((u32)(r_esp+0xau), (u16)r_ecx);
    /* 005357e1: mov word ptr [esp + 0xc], ax */ W16((u32)(r_esp+0xcu), (u16)r_eax);
    /* 005357e6: mov eax, dword ptr [edx + 0x430] */ r_eax = R32((u32)(r_edx+0x430u));
    /* 005357ec: mov edx, dword ptr [edx + 0x42c] */ r_edx = R32((u32)(r_edx+0x42cu));
    /* 005357f2: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 005357f5: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005357f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005357f9: push 0x41700000 */ { u32 v = 0x41700000u; r_esp -= 4; W32(r_esp, v); }
    /* 005357fe: push dword ptr [0x9bc85c] */ { u32 v = R32((u32)(0x9bc85cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00535804: push dword ptr [edx + 0x2c] */ { u32 v = R32((u32)(r_edx+0x2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00535807: push dword ptr [edx + 0x28] */ { u32 v = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 0053580a: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0053580c: call 0x608470 */ r_esp -= 4; W32(r_esp, 0x535811u); f_00608470();
    /* 00535811: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00535814: ret  */ FN_RET(0x005357b0); r_esp += 4; return;
}

void f_00535818(void) /* sub_535818 */
{
    FN_ENTER(0x00535818);
    /* 00535818: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00535819: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0053581b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0053581d: mov eax, dword ptr [0x9bc830] */ r_eax = R32((u32)(0x9bc830u));
    /* 00535822: mov edx, dword ptr [0xa73480] */ r_edx = R32((u32)(0xa73480u));
    /* 00535828: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0053582a: mov dword ptr [ebx + 4], eax */ W32((u32)(r_ebx+0x4u), r_eax);
    /* 0053582d: mov eax, dword ptr [edx + 0x430] */ r_eax = R32((u32)(r_edx+0x430u));
    /* 00535833: mov dword ptr [ebx + 0xd8], 0x9bc7c0 */ W32((u32)(r_ebx+0xd8u), 0x9bc7c0u);
    /* 0053583d: mov dword ptr [ebx + 0xdc], eax */ W32((u32)(r_ebx+0xdcu), r_eax);
    /* 00535843: push 0x9bc850 */ { u32 v = 0x9bc850u; r_esp -= 4; W32(r_esp, v); }
    /* 00535848: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x53584du); f_007b9a88();
    /* 0053584d: push dword ptr [0xa734e0] */ { u32 v = R32((u32)(0xa734e0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00535853: push dword ptr [0xa734e4] */ { u32 v = R32((u32)(0xa734e4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00535859: push dword ptr [0xa734e8] */ { u32 v = R32((u32)(0xa734e8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0053585f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00535861: mov dword ptr [ebx + 0x370], 0 */ W32((u32)(r_ebx+0x370u), 0x0u);
    /* 0053586b: mov dword ptr [ebx + 0x358], 0x9bc834 */ W32((u32)(r_ebx+0x358u), 0x9bc834u);
    /* 00535875: call 0x7868f8 */ r_esp -= 4; W32(r_esp, 0x53587au); f_007868f8();
    /* 0053587a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0053587c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053587d: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
    /* 00535884: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00535886: call 0x7aa4c8 */ r_esp -= 4; W32(r_esp, 0x53588bu); f_007aa4c8();
    /* 0053588b: push 0x26 */ { u32 v = 0x26u; r_esp -= 4; W32(r_esp, v); }
    /* 0053588d: movzx eax, word ptr [ebx + 0xb8] */ r_eax = (u32)R16((u32)(r_ebx+0xb8u));
    /* 00535894: movzx edx, word ptr [ebx + 0x2be] */ r_edx = (u32)R16((u32)(r_ebx+0x2beu));
    /* 0053589b: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
    /* 005358a2: movsx eax, word ptr [ebx + 0x2bc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x2bcu));
    /* 005358a9: mov word ptr [ebx + 0x334], ax */ W16((u32)(r_ebx+0x334u), (u16)r_eax);
    /* 005358b0: mov word ptr [ebx + 0x336], dx */ W16((u32)(r_ebx+0x336u), (u16)r_edx);
    /* 005358b7: mov word ptr [ebx + 0x346], ax */ W16((u32)(r_ebx+0x346u), (u16)r_eax);
    /* 005358be: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005358c0: call 0x787550 */ r_esp -= 4; W32(r_esp, 0x5358c5u); f_00787550();
    /* 005358c5: fld dword ptr [0x922b04] */ FPUSH(R_F32((u32)(0x922b04u)));
    /* 005358cb: fadd dword ptr [ebx + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x3cu));
    /* 005358ce: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 005358d1: mov edx, dword ptr [ebx + 0x40] */ r_edx = R32((u32)(r_ebx+0x40u));
    /* 005358d4: fstp dword ptr [ebx + 0x304] */ W_F32((u32)(r_ebx+0x304u), ST(0)); FPOP();
    /* 005358da: mov dword ptr [ebx + 0x300], eax */ W32((u32)(r_ebx+0x300u), r_eax);
    /* 005358e0: mov dword ptr [ebx + 0x308], edx */ W32((u32)(r_ebx+0x308u), r_edx);
    /* 005358e6: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005358e8: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x5358edu); f_007b4f54();
    /* 005358ed: mov ecx, dword ptr [0xa73480] */ r_ecx = R32((u32)(0xa73480u));
    /* 005358f3: mov eax, dword ptr [ecx + 0x42c] */ r_eax = R32((u32)(r_ecx+0x42cu));
    /* 005358f9: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 005358fc: mov dword ptr [ebx + 0x34], edx */ W32((u32)(r_ebx+0x34u), r_edx);
    /* 005358ff: mov eax, dword ptr [ecx + 0x42c] */ r_eax = R32((u32)(r_ecx+0x42cu));
    /* 00535905: mov eax, dword ptr [eax + 0x2c] */ r_eax = R32((u32)(r_eax+0x2cu));
    /* 00535908: mov edx, dword ptr [ebx + 0x3c] */ r_edx = R32((u32)(r_ebx+0x3cu));
    /* 0053590b: mov ecx, dword ptr [ebx + 0x40] */ r_ecx = R32((u32)(r_ebx+0x40u));
    /* 0053590e: mov dword ptr [ebx + 0x3c0], 0 */ W32((u32)(r_ebx+0x3c0u), 0x0u);
    /* 00535918: mov dword ptr [ebx + 0x24], eax */ W32((u32)(r_ebx+0x24u), r_eax);
    /* 0053591b: mov eax, dword ptr [ebx + 0x390] */ r_eax = R32((u32)(r_ebx+0x390u));
    /* 00535921: mov dword ptr [ebx + 0x3c4], 0 */ W32((u32)(r_ebx+0x3c4u), 0x0u);
    /* 0053592b: and eax, 0xfffeffff */ {  u32 a = r_eax; u32 b = 0xfffeffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00535930: mov dword ptr [ebx + 0x390], eax */ W32((u32)(r_ebx+0x390u), r_eax);
    /* 00535936: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 00535939: mov dword ptr [ebx + 0x3b4], 0x41700000 */ W32((u32)(r_ebx+0x3b4u), 0x41700000u);
    /* 00535943: mov dword ptr [ebx + 0x2a4], eax */ W32((u32)(r_ebx+0x2a4u), r_eax);
    /* 00535949: mov dword ptr [ebx + 0x2a8], edx */ W32((u32)(r_ebx+0x2a8u), r_edx);
    /* 0053594f: mov dword ptr [ebx + 0x3b8], 0x42200000 */ W32((u32)(r_ebx+0x3b8u), 0x42200000u);
    /* 00535959: mov dword ptr [ebx + 0x2ac], ecx */ W32((u32)(r_ebx+0x2acu), r_ecx);
    /* 0053595f: mov dword ptr [ebx + 0x298], eax */ W32((u32)(r_ebx+0x298u), r_eax);
    /* 00535965: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00535967: mov dword ptr [ebx + 0x3bc], 0x41700000 */ W32((u32)(r_ebx+0x3bcu), 0x41700000u);
    /* 00535971: mov dword ptr [ebx + 0x29c], edx */ W32((u32)(r_ebx+0x29cu), r_edx);
    /* 00535977: mov dword ptr [ebx + 0x2a0], ecx */ W32((u32)(r_ebx+0x2a0u), r_ecx);
    /* 0053597d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0053597f: call dword ptr [eax + 0x150] */ { u32 t = R32((u32)(r_eax+0x150u)); r_esp -= 4; W32(r_esp, 0x535985u); call_ind(t); }
    /* 00535985: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00535986: ret  */ FN_RET(0x00535818); r_esp += 4; return;
}

void f_00535988(void) /* sub_535988 */
{
    FN_ENTER(0x00535988);
    /* 00535988: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00535989: mov ebp, esp */ r_ebp = r_esp;
    /* 0053598b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0053598d: push 0x8d4ed2 */ { u32 v = 0x8d4ed2u; r_esp -= 4; W32(r_esp, v); }
    /* 00535992: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00535998: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00535999: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005359a0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005359a3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005359a6: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005359a9: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005359ac: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005359af: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005359b2: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005359b5: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005359bc: mov eax, ecx */ r_eax = r_ecx;
    /* 005359be: mov edx, dword ptr [eax + 0x3b0] */ r_edx = R32((u32)(r_eax+0x3b0u));
    /* 005359c4: mov dword ptr [eax], 0xb01fc0 */ W32((u32)(r_eax), 0xb01fc0u);
    /* 005359ca: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005359cc: je 0x5359e7 */ if (fZ) goto L_005359e7;
L_005359ce:; BB(0x005359ce);
    /* 005359ce: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 005359d2: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005359d7: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 005359db: mov edx, ecx */ r_edx = r_ecx;
    /* 005359dd: mov dword ptr [edx + 0x3b0], 0 */ W32((u32)(r_edx+0x3b0u), 0x0u);
L_005359e7:; BB(0x005359e7);
    /* 005359e7: mov eax, ecx */ r_eax = r_ecx;
    /* 005359e9: mov edx, dword ptr [eax + 0x3b4] */ r_edx = R32((u32)(r_eax+0x3b4u));
    /* 005359ef: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005359f1: je 0x535a0c */ if (fZ) goto L_00535a0c;
L_005359f3:; BB(0x005359f3);
    /* 005359f3: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 005359f7: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005359fc: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00535a00: mov edx, ecx */ r_edx = r_ecx;
    /* 00535a02: mov dword ptr [edx + 0x3b4], 0 */ W32((u32)(r_edx+0x3b4u), 0x0u);
L_00535a0c:; BB(0x00535a0c);
    /* 00535a0c: call 0x786f64 */ r_esp -= 4; W32(r_esp, 0x535a11u); f_00786f64();
    /* 00535a11: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00535a14: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x535a19u); f_007b9c8c();
    /* 00535a19: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 00535a20: push 0x5770ec */ { u32 v = 0x5770ecu; r_esp -= 4; W32(r_esp, v); }
    /* 00535a25: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00535a28: lea edx, [eax + 0x3b8] */ r_edx = (u32)(r_eax+0x3b8u);
    /* 00535a2e: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00535a30: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 00535a32: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00535a33: call 0x8586d6 */ r_esp -= 4; W32(r_esp, 0x535a38u); f_008586d6();
    /* 00535a38: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00535a3f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00535a42: call 0x52a684 */ r_esp -= 4; W32(r_esp, 0x535a47u); f_0052a684();
    /* 00535a47: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00535a4a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00535a4c: jne 0x535a5e */ if (!fZ) goto L_00535a5e;
L_00535a4e:; BB(0x00535a4e);
    /* 00535a4e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00535a51: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00535a58: mov esp, ebp */ r_esp = r_ebp;
    /* 00535a5a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00535a5b: ret 4 */ FN_RET(0x00535988); r_esp += 8; return;
L_00535a5e:; BB(0x00535a5e);
    /* 00535a5e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00535a61: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00535a62: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x535a67u); f_005c2f74();
    /* 00535a67: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00535a68: jmp 0x535a4e */ goto L_00535a4e;
}

void f_00535a6c(void) /* sub_535A6C */
{
    FN_ENTER(0x00535a6c);
    /* 00535a6c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00535a6d: mov esi, ecx */ r_esi = r_ecx;
    /* 00535a6f: movsx eax, word ptr [esi + 0x330] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x330u));
    /* 00535a76: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00535a79: jne 0x535abb */ if (!fZ) goto L_00535abb;
L_00535a7b:; BB(0x00535a7b);
    /* 00535a7b: mov eax, dword ptr [esi + 0xb4] */ r_eax = R32((u32)(r_esi+0xb4u));
    /* 00535a81: cmp eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00535a84: je 0x535ae5 */ if (fZ) goto L_00535ae5;
L_00535a86:; BB(0x00535a86);
    /* 00535a86: push 0xa000000 */ { u32 v = 0xa000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00535a8b: mov eax, 2 */ r_eax = 0x2u;
    /* 00535a90: mov word ptr [esi + 0x330], ax */ W16((u32)(r_esi+0x330u), (u16)r_eax);
    /* 00535a97: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00535a99: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00535a9a: mov dword ptr [esi + 0x398], edx */ W32((u32)(r_esi+0x398u), r_edx);
    /* 00535aa0: mov word ptr [esi + 0xb8], dx */ W16((u32)(r_esi+0xb8u), (u16)r_edx);
    /* 00535aa7: mov ecx, esi */ r_ecx = r_esi;
    /* 00535aa9: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x535aaeu); f_007b52ec();
    /* 00535aae: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 00535ab1: and eax, 0xfbffffff */ {  u32 a = r_eax; u32 b = 0xfbffffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00535ab6: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 00535ab9: jmp 0x535ae5 */ goto L_00535ae5;
L_00535abb:; BB(0x00535abb);
    /* 00535abb: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00535abe: jne 0x535ace */ if (!fZ) goto L_00535ace;
L_00535ac0:; BB(0x00535ac0);
    /* 00535ac0: mov eax, 1 */ r_eax = 0x1u;
    /* 00535ac5: mov word ptr [esi + 0x32e], ax */ W16((u32)(r_esi+0x32eu), (u16)r_eax);
    /* 00535acc: jmp 0x535ae5 */ goto L_00535ae5;
L_00535ace:; BB(0x00535ace);
    /* 00535ace: mov eax, dword ptr [esi + 0x398] */ r_eax = R32((u32)(r_esi+0x398u));
    /* 00535ad4: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00535ad7: je 0x535aee */ if (fZ) goto L_00535aee;
L_00535ad9:; BB(0x00535ad9);
    /* 00535ad9: mov eax, 2 */ r_eax = 0x2u;
    /* 00535ade: mov word ptr [esi + 0x330], ax */ W16((u32)(r_esi+0x330u), (u16)r_eax);
L_00535ae5:; BB(0x00535ae5);
    /* 00535ae5: mov ecx, esi */ r_ecx = r_esi;
    /* 00535ae7: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x535aecu); f_007aa094();
    /* 00535aec: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00535aed: ret  */ FN_RET(0x00535a6c); r_esp += 4; return;
L_00535aee:; BB(0x00535aee);
    /* 00535aee: push 0xa000000 */ { u32 v = 0xa000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00535af3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00535af5: mov eax, 1 */ r_eax = 0x1u;
    /* 00535afa: mov word ptr [esi + 0x330], ax */ W16((u32)(r_esi+0x330u), (u16)r_eax);
    /* 00535b01: mov edx, 0xb */ r_edx = 0xbu;
    /* 00535b06: mov word ptr [esi + 0xb8], dx */ W16((u32)(r_esi+0xb8u), (u16)r_edx);
    /* 00535b0d: mov ecx, esi */ r_ecx = r_esi;
    /* 00535b0f: call 0x7b52c4 */ r_esp -= 4; W32(r_esp, 0x535b14u); f_007b52c4();
    /* 00535b14: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 00535b17: or eax, 0x4000000 */ {  u32 a = r_eax; u32 b = 0x4000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00535b1c: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 00535b1f: lea eax, [esi + 0x38] */ r_eax = (u32)(r_esi+0x38u);
    /* 00535b22: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00535b24: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00535b25: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00535b26: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00535b27: push 0xeb */ { u32 v = 0xebu; r_esp -= 4; W32(r_esp, v); }
    /* 00535b2c: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x535b31u); f_00814298();
    /* 00535b31: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00535b34: jmp 0x535ae5 */ goto L_00535ae5;
}

void f_00535b38(void) /* sub_535B38 */
{
    FN_ENTER(0x00535b38);
    /* 00535b38: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00535b39: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00535b3c: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00535b3e: mov eax, dword ptr [ebp + 0x2b4] */ r_eax = R32((u32)(r_ebp+0x2b4u));
    /* 00535b44: fld dword ptr [eax + 0x10] */ FPUSH(R_F32((u32)(r_eax+0x10u)));
    /* 00535b47: fmul dword ptr [0x922c04] */ ST(0) = ST(0) * R_F32((u32)(0x922c04u));
    /* 00535b4d: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 00535b54: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00535b58: mov dword ptr [esp + 4], 0x41200000 */ W32((u32)(r_esp+0x4u), 0x41200000u);
    /* 00535b60: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 00535b65: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x535b6au); f_0082d990();
    /* 00535b6a: mov edx, dword ptr [ebp + 0x60] */ r_edx = R32((u32)(r_ebp+0x60u));
    /* 00535b6d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00535b6f: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x535b74u); f_0082d8bc();
    /* 00535b74: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00535b77: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00535b78: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 00535b7c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00535b7e: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x535b83u); f_0082eab8();
    /* 00535b83: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x535b88u); f_0082da80();
    /* 00535b88: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00535b8b: add ebp, 0x38 */ {  u32 a = r_ebp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00535b8e: mov edx, ebp */ r_edx = r_ebp;
    /* 00535b90: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x535b95u); f_0082ebac();
    /* 00535b95: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00535b98: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 00535b9a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00535b9b: call 0x578778 */ r_esp -= 4; W32(r_esp, 0x535ba0u); f_00578778();
    /* 00535ba0: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 00535ba4: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 00535ba6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00535ba7: call 0x5782f8 */ r_esp -= 4; W32(r_esp, 0x535bacu); f_005782f8();
    /* 00535bac: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00535baf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00535bb0: ret  */ FN_RET(0x00535b38); r_esp += 4; return;
}

void f_00535bb4(void) /* sub_535BB4 */
{
    FN_ENTER(0x00535bb4);
    /* 00535bb4: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00535bb7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00535bb9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00535bba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00535bbb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00535bbc: push 0xe5 */ { u32 v = 0xe5u; r_esp -= 4; W32(r_esp, v); }
    /* 00535bc1: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x535bc6u); f_00814298();
    /* 00535bc6: push 0xfffffe00 */ { u32 v = 0xfffffe00u; r_esp -= 4; W32(r_esp, v); }
    /* 00535bcb: call 0x814680 */ r_esp -= 4; W32(r_esp, 0x535bd0u); f_00814680();
    /* 00535bd0: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00535bd3: ret  */ FN_RET(0x00535bb4); r_esp += 4; return;
}

void f_00535bd4(void) /* sub_535BD4 */
{
    FN_ENTER(0x00535bd4);
    /* 00535bd4: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00535bd7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00535bd9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00535bda: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00535bdb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00535bdc: push 0xe8 */ { u32 v = 0xe8u; r_esp -= 4; W32(r_esp, v); }
    /* 00535be1: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x535be6u); f_00814298();
    /* 00535be6: push 0xffffff00 */ { u32 v = 0xffffff00u; r_esp -= 4; W32(r_esp, v); }
    /* 00535beb: call 0x814680 */ r_esp -= 4; W32(r_esp, 0x535bf0u); f_00814680();
    /* 00535bf0: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00535bf3: ret  */ FN_RET(0x00535bd4); r_esp += 4; return;
}

void f_00535bf4(void) /* sub_535BF4 */
{
    FN_ENTER(0x00535bf4);
    /* 00535bf4: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00535bf7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00535bf9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00535bfa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00535bfb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00535bfc: push 0xe7 */ { u32 v = 0xe7u; r_esp -= 4; W32(r_esp, v); }
    /* 00535c01: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x535c06u); f_00814298();
    /* 00535c06: push 0xffffff00 */ { u32 v = 0xffffff00u; r_esp -= 4; W32(r_esp, v); }
    /* 00535c0b: call 0x814680 */ r_esp -= 4; W32(r_esp, 0x535c10u); f_00814680();
    /* 00535c10: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00535c13: ret  */ FN_RET(0x00535bf4); r_esp += 4; return;
}

void f_00535c14(void) /* sub_535C14 */
{
    FN_ENTER(0x00535c14);
    /* 00535c14: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00535c17: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00535c19: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00535c1a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00535c1b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00535c1c: push 0xe6 */ { u32 v = 0xe6u; r_esp -= 4; W32(r_esp, v); }
    /* 00535c21: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x535c26u); f_00814298();
    /* 00535c26: push 0xfffffe00 */ { u32 v = 0xfffffe00u; r_esp -= 4; W32(r_esp, v); }
    /* 00535c2b: call 0x814680 */ r_esp -= 4; W32(r_esp, 0x535c30u); f_00814680();
    /* 00535c30: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00535c33: ret  */ FN_RET(0x00535c14); r_esp += 4; return;
}

void f_00535c34(void) /* sub_535C34 */
{
    FN_ENTER(0x00535c34);
    /* 00535c34: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00535c37: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00535c39: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00535c3a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00535c3b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00535c3c: push 0xea */ { u32 v = 0xeau; r_esp -= 4; W32(r_esp, v); }
    /* 00535c41: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x535c46u); f_00814298();
    /* 00535c46: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00535c49: ret  */ FN_RET(0x00535c34); r_esp += 4; return;
}

void f_00535c4c(void) /* sub_535C4C */
{
    FN_ENTER(0x00535c4c);
    /* 00535c4c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00535c4d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00535c4e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00535c4f: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00535c52: mov esi, ecx */ r_esi = r_ecx;
    /* 00535c54: push 0x41f00000 */ { u32 v = 0x41f00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00535c59: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00535c5b: push 0x43c80000 */ { u32 v = 0x43c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 00535c60: mov ecx, esi */ r_ecx = r_esi;
    /* 00535c62: push 0x43480000 */ { u32 v = 0x43480000u; r_esp -= 4; W32(r_esp, v); }
    /* 00535c67: call dword ptr [eax + 0x20] */ { u32 t = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, 0x535c6au); call_ind(t); }
    /* 00535c6a: mov ebp, eax */ r_ebp = r_eax;
    /* 00535c6c: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00535c6e: je 0x535d73 */ if (fZ) goto L_00535d73;
L_00535c74:; BB(0x00535c74);
    /* 00535c74: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00535c76: call 0x520e6c */ r_esp -= 4; W32(r_esp, 0x535c7bu); f_00520e6c();
    /* 00535c7b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00535c7d: je 0x535c9c */ if (fZ) goto L_00535c9c;
L_00535c7f:; BB(0x00535c7f);
    /* 00535c7f: lea edi, [esi + 0x3b8] */ r_edi = (u32)(r_esi+0x3b8u);
    /* 00535c85: mov ecx, edi */ r_ecx = r_edi;
    /* 00535c87: call 0x5771a4 */ r_esp -= 4; W32(r_esp, 0x535c8cu); f_005771a4();
    /* 00535c8c: lea edx, [esi + 0x300] */ r_edx = (u32)(r_esi+0x300u);
    /* 00535c92: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00535c93: mov ecx, edi */ r_ecx = r_edi;
    /* 00535c95: call 0x57725c */ r_esp -= 4; W32(r_esp, 0x535c9au); f_0057725c();
    /* 00535c9a: mov edi, eax */ r_edi = r_eax;
L_00535c9c:; BB(0x00535c9c);
    /* 00535c9c: mov edx, dword ptr [0xaf034c] */ r_edx = R32((u32)(0xaf034cu));
    /* 00535ca2: mov dword ptr [0xaab518], edx */ W32((u32)(0xaab518u), r_edx);
    /* 00535ca8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00535ca9: call 0x794548 */ r_esp -= 4; W32(r_esp, 0x535caeu); f_00794548();
    /* 00535cae: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00535caf: mov ecx, dword ptr [esi + 0x24] */ r_ecx = R32((u32)(r_esi+0x24u));
    /* 00535cb2: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x535cb7u); f_00829cc8();
    /* 00535cb7: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x535cbcu); f_0082d7b0();
    /* 00535cbc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00535cbe: push dword ptr [esi + 0x388] */ { u32 v = R32((u32)(r_esi+0x388u)); r_esp -= 4; W32(r_esp, v); }
    /* 00535cc4: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00535cc6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00535cc8: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x535ccdu); f_00830b74();
    /* 00535ccd: lea ecx, [esi + 0x38] */ r_ecx = (u32)(r_esi+0x38u);
    /* 00535cd0: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x535cd5u); f_0082d838();
    /* 00535cd5: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 00535cd8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00535cda: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x535cdfu); f_0082d8bc();
    /* 00535cdf: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x535ce4u); f_004f7c84();
    /* 00535ce4: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00535ce7: je 0x535d83 */ if (fZ) goto L_00535d83;
L_00535ced:; BB(0x00535ced);
    /* 00535ced: call 0x578b38 */ r_esp -= 4; W32(r_esp, 0x535cf2u); f_00578b38();
    /* 00535cf2: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00535cf4: je 0x535d10 */ if (fZ) goto L_00535d10;
L_00535cf6:; BB(0x00535cf6);
    /* 00535cf6: mov edx, dword ptr [esi + 0x3b8] */ r_edx = R32((u32)(r_esi+0x3b8u));
    /* 00535cfc: lea ecx, [esi + 0x3b8] */ r_ecx = (u32)(r_esi+0x3b8u);
    /* 00535d02: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x535d05u); call_ind(t); }
    /* 00535d05: mov ecx, esi */ r_ecx = r_esi;
    /* 00535d07: call 0x8173d0 */ r_esp -= 4; W32(r_esp, 0x535d0cu); f_008173d0();
    /* 00535d0c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00535d0e: jne 0x535d1c */ if (!fZ) goto L_00535d1c;
L_00535d10:; BB(0x00535d10);
    /* 00535d10: cmp ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00535d13: je 0x535d7a */ if (fZ) goto L_00535d7a;
L_00535d15:; BB(0x00535d15);
    /* 00535d15: mov ecx, esi */ r_ecx = r_esi;
    /* 00535d17: call 0x7aa7b8 */ r_esp -= 4; W32(r_esp, 0x535d1cu); f_007aa7b8();
L_00535d1c:; BB(0x00535d1c);
    /* 00535d1c: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x535d21u); f_0082dab0();
    /* 00535d21: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00535d23: je 0x535d34 */ if (fZ) goto L_00535d34;
L_00535d25:; BB(0x00535d25);
    /* 00535d25: mov eax, dword ptr [esi + 0x3b8] */ r_eax = R32((u32)(r_esi+0x3b8u));
    /* 00535d2b: lea ecx, [esi + 0x3b8] */ r_ecx = (u32)(r_esi+0x3b8u);
    /* 00535d31: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x535d34u); call_ind(t); }
L_00535d34:; BB(0x00535d34);
    /* 00535d34: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x535d39u); f_0082da80();
    /* 00535d39: call 0x794750 */ r_esp -= 4; W32(r_esp, 0x535d3eu); f_00794750();
    /* 00535d3e: movsx eax, word ptr [esi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x32eu));
    /* 00535d45: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00535d48: jl 0x535d4f */ if ((fS!=fO)) goto L_00535d4f;
L_00535d4a:; BB(0x00535d4a);
    /* 00535d4a: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00535d4d: jle 0x535d73 */ if ((fZ||fS!=fO)) goto L_00535d73;
L_00535d4f:; BB(0x00535d4f);
    /* 00535d4f: mov dword ptr [esp], 0x3fc00000 */ W32((u32)(r_esp), 0x3fc00000u);
    /* 00535d56: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00535d59: mov ecx, esi */ r_ecx = r_esi;
    /* 00535d5b: mov dword ptr [esp + 4], 0x3f800000 */ W32((u32)(r_esp+0x4u), 0x3f800000u);
    /* 00535d63: mov dword ptr [esp + 8], 0x40000000 */ W32((u32)(r_esp+0x8u), 0x40000000u);
    /* 00535d6b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00535d6d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00535d6e: call 0x779d4c */ r_esp -= 4; W32(r_esp, 0x535d73u); f_00779d4c();
L_00535d73:; BB(0x00535d73);
    /* 00535d73: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00535d76: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00535d77: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00535d78: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00535d79: ret  */ FN_RET(0x00535c4c); r_esp += 4; return;
L_00535d7a:; BB(0x00535d7a);
    /* 00535d7a: mov ecx, esi */ r_ecx = r_esi;
    /* 00535d7c: call 0x7aa668 */ r_esp -= 4; W32(r_esp, 0x535d81u); f_007aa668();
    /* 00535d81: jmp 0x535d1c */ goto L_00535d1c;
L_00535d83:; BB(0x00535d83);
    /* 00535d83: push dword ptr [esi + 0x34] */ { u32 v = R32((u32)(r_esi+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 00535d86: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x535d8bu); f_0082e1e8();
    /* 00535d8b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00535d8c: jmp 0x535d34 */ goto L_00535d34;
}

void f_00535d90(void)
{
    FN_ENTER(0x00535d90);
    /* 00535d90: mov eax, dword ptr [0xa73508] */ r_eax = R32((u32)(0xa73508u));
    /* 00535d95: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00535d97: je 0x535daa */ if (fZ) goto L_00535daa;
L_00535d99:; BB(0x00535d99);
    /* 00535d99: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00535d9a: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x535d9fu); f_00857e98();
    /* 00535d9f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00535da0: mov dword ptr [0xa73508], 0 */ W32((u32)(0xa73508u), 0x0u);
L_00535daa:; BB(0x00535daa);
    /* 00535daa: mov eax, dword ptr [0xa73504] */ r_eax = R32((u32)(0xa73504u));
    /* 00535daf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00535db1: je 0x535dc4 */ if (fZ) goto L_00535dc4;
L_00535db3:; BB(0x00535db3);
    /* 00535db3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00535db4: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x535db9u); f_00857e98();
    /* 00535db9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00535dba: mov dword ptr [0xa73504], 0 */ W32((u32)(0xa73504u), 0x0u);
L_00535dc4:; BB(0x00535dc4);
    /* 00535dc4: mov eax, dword ptr [0xa73500] */ r_eax = R32((u32)(0xa73500u));
    /* 00535dc9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00535dcb: je 0x535dde */ if (fZ) goto L_00535dde;
L_00535dcd:; BB(0x00535dcd);
    /* 00535dcd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00535dce: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x535dd3u); f_00857e98();
    /* 00535dd3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00535dd4: mov dword ptr [0xa73500], 0 */ W32((u32)(0xa73500u), 0x0u);
L_00535dde:; BB(0x00535dde);
    /* 00535dde: mov eax, dword ptr [0xa734fc] */ r_eax = R32((u32)(0xa734fcu));
    /* 00535de3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00535de5: je 0x535df8 */ if (fZ) goto L_00535df8;
L_00535de7:; BB(0x00535de7);
    /* 00535de7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00535de8: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x535dedu); f_00857e98();
    /* 00535ded: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00535dee: mov dword ptr [0xa734fc], 0 */ W32((u32)(0xa734fcu), 0x0u);
L_00535df8:; BB(0x00535df8);
    /* 00535df8: mov ecx, dword ptr [0xa73514] */ r_ecx = R32((u32)(0xa73514u));
    /* 00535dfe: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00535e00: je 0x535e15 */ if (fZ) goto L_00535e15;
L_00535e02:; BB(0x00535e02);
    /* 00535e02: je 0x535e0b */ if (fZ) goto L_00535e0b;
L_00535e04:; BB(0x00535e04);
    /* 00535e04: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00535e06: call 0x45a950 */ r_esp -= 4; W32(r_esp, 0x535e0bu); f_0045a950();
L_00535e0b:; BB(0x00535e0b);
    /* 00535e0b: mov dword ptr [0xa73514], 0 */ W32((u32)(0xa73514u), 0x0u);
L_00535e15:; BB(0x00535e15);
    /* 00535e15: mov ecx, dword ptr [0xa73510] */ r_ecx = R32((u32)(0xa73510u));
    /* 00535e1b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00535e1d: je 0x535e32 */ if (fZ) goto L_00535e32;
L_00535e1f:; BB(0x00535e1f);
    /* 00535e1f: je 0x535e28 */ if (fZ) goto L_00535e28;
L_00535e21:; BB(0x00535e21);
    /* 00535e21: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00535e23: call 0x45a950 */ r_esp -= 4; W32(r_esp, 0x535e28u); f_0045a950();
L_00535e28:; BB(0x00535e28);
    /* 00535e28: mov dword ptr [0xa73510], 0 */ W32((u32)(0xa73510u), 0x0u);
L_00535e32:; BB(0x00535e32);
    /* 00535e32: mov ecx, dword ptr [0xa7350c] */ r_ecx = R32((u32)(0xa7350cu));
    /* 00535e38: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00535e3a: je 0x535e4f */ if (fZ) goto L_00535e4f;
L_00535e3c:; BB(0x00535e3c);
    /* 00535e3c: je 0x535e45 */ if (fZ) goto L_00535e45;
L_00535e3e:; BB(0x00535e3e);
    /* 00535e3e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00535e40: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x535e45u); f_004066a8();
L_00535e45:; BB(0x00535e45);
    /* 00535e45: mov dword ptr [0xa7350c], 0 */ W32((u32)(0xa7350cu), 0x0u);
L_00535e4f:; BB(0x00535e4f);
    /* 00535e4f: ret  */ FN_RET(0x00535d90); r_esp += 4; return;
}

void f_00535e50(void)
{
    FN_ENTER(0x00535e50);
    /* 00535e50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00535e51: mov ebp, esp */ r_ebp = r_esp;
    /* 00535e53: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00535e55: push 0x8d4f12 */ { u32 v = 0x8d4f12u; r_esp -= 4; W32(r_esp, v); }
    /* 00535e5a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00535e60: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00535e61: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00535e68: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00535e6b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00535e6e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00535e71: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00535e74: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00535e77: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00535e79: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 00535e80: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x535e85u); f_005caba4();
    /* 00535e85: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00535e86: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00535e89: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00535e8b: je 0x535f13 */ if (fZ) goto L_00535f13;
L_00535e91:; BB(0x00535e91);
    /* 00535e91: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 00535e98: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00535e9f: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 00535ea5: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00535ea8: call 0x787a4c */ r_esp -= 4; W32(r_esp, 0x535eadu); f_00787a4c();
    /* 00535ead: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00535eb0: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 00535eb7: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_00535eba:; BB(0x00535eba);
    /* 00535eba: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00535ec1: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 00535ec8: push 0x428 */ { u32 v = 0x428u; r_esp -= 4; W32(r_esp, v); }
    /* 00535ecd: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x535ed2u); f_005caba4();
    /* 00535ed2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00535ed3: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00535ed6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00535ed8: je 0x535f0f */ if (fZ) goto L_00535f0f;
L_00535eda:; BB(0x00535eda);
    /* 00535eda: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 00535ee1: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00535ee8: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00535eeb: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00535eee: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00535ef1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00535ef2: call 0x535f1c */ r_esp -= 4; W32(r_esp, 0x535ef7u); f_00535f1c();
    /* 00535ef7: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00535efa: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_00535f01:; BB(0x00535f01);
    /* 00535f01: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00535f04: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00535f0b: mov esp, ebp */ r_esp = r_ebp;
    /* 00535f0d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00535f0e: ret  */ FN_RET(0x00535e50); r_esp += 4; return;
L_00535f0f:; BB(0x00535f0f);
    /* 00535f0f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00535f11: jmp 0x535f01 */ goto L_00535f01;
L_00535f13:; BB(0x00535f13);
    /* 00535f13: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00535f15: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00535f18: jmp 0x535eba */ goto L_00535eba;
}

void f_00535f1c(void) /* sub_535F1C */
{
    FN_ENTER(0x00535f1c);
    /* 00535f1c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00535f1d: mov ebp, esp */ r_ebp = r_esp;
    /* 00535f1f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00535f21: push 0x8d4f4a */ { u32 v = 0x8d4f4au; r_esp -= 4; W32(r_esp, v); }
    /* 00535f26: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00535f2c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00535f2d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00535f34: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00535f37: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00535f3a: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00535f3d: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00535f40: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00535f43: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00535f46: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00535f49: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 00535f4c: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00535f4f: call 0x52b6ec */ r_esp -= 4; W32(r_esp, 0x535f54u); f_0052b6ec();
    /* 00535f54: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00535f5b: push 0x5770ec */ { u32 v = 0x5770ecu; r_esp -= 4; W32(r_esp, v); }
    /* 00535f60: push 0x57713c */ { u32 v = 0x57713cu; r_esp -= 4; W32(r_esp, v); }
    /* 00535f65: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00535f68: mov dword ptr [eax], 0xb01fc0 */ W32((u32)(r_eax), 0xb01fc0u);
    /* 00535f6e: add eax, 0x3b8 */ {  u32 a = r_eax; u32 b = 0x3b8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00535f73: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00535f75: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 00535f77: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00535f78: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x535f7du); f_00858736();
    /* 00535f7d: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00535f84: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00535f87: mov eax, dword ptr [0x9bca94] */ r_eax = R32((u32)(0x9bca94u));
    /* 00535f8c: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00535f8f: mov ebx, dword ptr [ecx] */ r_ebx = R32((u32)(r_ecx));
    /* 00535f91: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00535f94: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00535f95: call dword ptr [ebx + 0x14c] */ { u32 t = R32((u32)(r_ebx+0x14cu)); r_esp -= 4; W32(r_esp, 0x535f9bu); call_ind(t); }
    /* 00535f9b: mov esi, dword ptr [ebp - 0x30] */ r_esi = R32((u32)(r_ebp+0xffffffd0u));
    /* 00535f9e: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 00535fa1: mov edx, dword ptr [esi + 0x3c] */ r_edx = R32((u32)(r_esi+0x3cu));
    /* 00535fa4: mov ebx, dword ptr [esi + 0x40] */ r_ebx = R32((u32)(r_esi+0x40u));
    /* 00535fa7: mov dword ptr [esi + 0x2a4], eax */ W32((u32)(r_esi+0x2a4u), r_eax);
    /* 00535fad: mov dword ptr [esi + 0x2a8], edx */ W32((u32)(r_esi+0x2a8u), r_edx);
    /* 00535fb3: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00535fb6: mov dword ptr [esi + 0x2ac], ebx */ W32((u32)(r_esi+0x2acu), r_ebx);
    /* 00535fbc: mov edi, dword ptr [edx + 0x2a4] */ r_edi = R32((u32)(r_edx+0x2a4u));
    /* 00535fc2: mov ecx, dword ptr [edx + 0x2a8] */ r_ecx = R32((u32)(r_edx+0x2a8u));
    /* 00535fc8: mov eax, dword ptr [edx + 0x2ac] */ r_eax = R32((u32)(r_edx+0x2acu));
    /* 00535fce: mov dword ptr [edx + 0x298], edi */ W32((u32)(r_edx+0x298u), r_edi);
    /* 00535fd4: mov dword ptr [edx + 0x29c], ecx */ W32((u32)(r_edx+0x29cu), r_ecx);
    /* 00535fda: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00535fdd: mov dword ptr [edx + 0x2a0], eax */ W32((u32)(r_edx+0x2a0u), r_eax);
    /* 00535fe3: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00535fe6: mov eax, dword ptr [edx + 0x298] */ r_eax = R32((u32)(r_edx+0x298u));
    /* 00535fec: mov dword ptr [edx + 0x44], eax */ W32((u32)(r_edx+0x44u), r_eax);
    /* 00535fef: mov eax, dword ptr [edx + 0x29c] */ r_eax = R32((u32)(r_edx+0x29cu));
    /* 00535ff5: mov dword ptr [edx + 0x48], eax */ W32((u32)(r_edx+0x48u), r_eax);
    /* 00535ff8: mov eax, dword ptr [edx + 0x2a0] */ r_eax = R32((u32)(r_edx+0x2a0u));
    /* 00535ffe: mov dword ptr [edx + 0x4c], eax */ W32((u32)(r_edx+0x4cu), r_eax);
    /* 00536001: mov eax, dword ptr [ecx + 0x370] */ r_eax = R32((u32)(r_ecx+0x370u));
    /* 00536007: mov dword ptr [ecx + 0x33c], eax */ W32((u32)(r_ecx+0x33cu), r_eax);
    /* 0053600d: call 0x536274 */ r_esp -= 4; W32(r_esp, 0x536012u); f_00536274();
    /* 00536012: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00536015: mov eax, dword ptr [0xa7350c] */ r_eax = R32((u32)(0xa7350cu));
    /* 0053601a: mov edi, dword ptr [ecx + 0x370] */ r_edi = R32((u32)(r_ecx+0x370u));
    /* 00536020: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 00536026: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00536028: mov ebx, dword ptr [edx + edi*8 + 8] */ r_ebx = R32((u32)(r_edx+r_edi*8+0x8u));
    /* 0053602c: mov dword ptr [ecx + 0x34], ebx */ W32((u32)(r_ecx+0x34u), r_ebx);
    /* 0053602f: mov esi, dword ptr [eax + 0x42c] */ r_esi = R32((u32)(r_eax+0x42cu));
    /* 00536035: mov edx, dword ptr [esi + edi*8 + 0xc] */ r_edx = R32((u32)(r_esi+r_edi*8+0xcu));
    /* 00536039: mov dword ptr [ecx + 0x24], edx */ W32((u32)(r_ecx+0x24u), r_edx);
    /* 0053603c: mov dword ptr [ecx + 0xd8], 0x9bc980 */ W32((u32)(r_ecx+0xd8u), 0x9bc980u);
    /* 00536046: mov eax, dword ptr [eax + 0x430] */ r_eax = R32((u32)(r_eax+0x430u));
    /* 0053604c: mov dword ptr [ecx + 0xdc], eax */ W32((u32)(r_ecx+0xdcu), r_eax);
    /* 00536052: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00536054: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00536055: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 0053605c: call 0x7aa4c8 */ r_esp -= 4; W32(r_esp, 0x536061u); f_007aa4c8();
    /* 00536061: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00536064: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00536066: movzx eax, word ptr [ecx + 0xb8] */ r_eax = (u32)R16((u32)(r_ecx+0xb8u));
    /* 0053606d: mov edx, dword ptr [ecx + 0x33c] */ r_edx = R32((u32)(r_ecx+0x33cu));
    /* 00536073: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 0053607a: lea ebx, [edx + edx] */ r_ebx = (u32)(r_edx+r_edx);
    /* 0053607d: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0053607f: sub ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 00536081: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00536083: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00536085: sub ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 00536087: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00536089: lea esi, [ebx + ebx + 0x9bc8e0] */ r_esi = (u32)(r_ebx+r_ebx+0x9bc8e0u);
    /* 00536090: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00536091: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x536096u); f_007b9a88();
    /* 00536096: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00536099: mov ebx, dword ptr [0xa73508] */ r_ebx = R32((u32)(0xa73508u));
    /* 0053609f: mov edx, dword ptr [0xa73504] */ r_edx = R32((u32)(0xa73504u));
    /* 005360a5: mov eax, dword ptr [0xa73500] */ r_eax = R32((u32)(0xa73500u));
    /* 005360aa: mov esi, dword ptr [ecx + 0x33c] */ r_esi = R32((u32)(r_ecx+0x33cu));
    /* 005360b0: push dword ptr [eax + esi*4] */ { u32 v = R32((u32)(r_eax+r_esi*4)); r_esp -= 4; W32(r_esp, v); }
    /* 005360b3: push dword ptr [edx + esi*4] */ { u32 v = R32((u32)(r_edx+r_esi*4)); r_esp -= 4; W32(r_esp, v); }
    /* 005360b6: push dword ptr [ebx + esi*4] */ { u32 v = R32((u32)(r_ebx+r_esi*4)); r_esp -= 4; W32(r_esp, v); }
    /* 005360b9: call 0x7868f8 */ r_esp -= 4; W32(r_esp, 0x5360beu); f_007868f8();
    /* 005360be: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005360c1: mov eax, dword ptr [ecx + 0x33c] */ r_eax = R32((u32)(r_ecx+0x33cu));
    /* 005360c7: movzx esi, word ptr [ecx + 0x334] */ r_esi = (u32)R16((u32)(r_ecx+0x334u));
    /* 005360ce: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005360d0: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005360d2: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 005360d5: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005360d7: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005360d9: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005360db: lea ebx, [edx + 0x9bc880] */ r_ebx = (u32)(r_edx+0x9bc880u);
    /* 005360e1: mov dword ptr [ecx + 0x358], ebx */ W32((u32)(r_ecx+0x358u), r_ebx);
    /* 005360e7: mov word ptr [ecx + 0x346], si */ W16((u32)(r_ecx+0x346u), (u16)r_esi);
    /* 005360ee: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x5360f3u); f_0078730c();
    /* 005360f3: mov esi, dword ptr [ebp - 0x30] */ r_esi = R32((u32)(r_ebp+0xffffffd0u));
    /* 005360f6: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005360f9: mov eax, dword ptr [esi + 0x300] */ r_eax = R32((u32)(r_esi+0x300u));
    /* 005360ff: mov edx, dword ptr [esi + 0x304] */ r_edx = R32((u32)(r_esi+0x304u));
    /* 00536105: mov ebx, dword ptr [esi + 0x308] */ r_ebx = R32((u32)(r_esi+0x308u));
    /* 0053610b: mov dword ptr [esi + 0x74], eax */ W32((u32)(r_esi+0x74u), r_eax);
    /* 0053610e: mov dword ptr [esi + 0x78], edx */ W32((u32)(r_esi+0x78u), r_edx);
    /* 00536111: mov dword ptr [esi + 0x7c], ebx */ W32((u32)(r_esi+0x7cu), r_ebx);
    /* 00536114: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x536119u); f_007b4f54();
    /* 00536119: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0053611c: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x536121u); f_007751b0();
    /* 00536121: mov esi, dword ptr [ebp - 0x30] */ r_esi = R32((u32)(r_ebp+0xffffffd0u));
    /* 00536124: fld dword ptr [0x922be4] */ FPUSH(R_F32((u32)(0x922be4u)));
    /* 0053612a: mov ecx, dword ptr [esi + 0x2e8] */ r_ecx = R32((u32)(r_esi+0x2e8u));
    /* 00536130: mov ebx, dword ptr [esi + 0x30] */ r_ebx = R32((u32)(r_esi+0x30u));
    /* 00536133: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 00536135: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00536137: fmul dword ptr [0x922be0] */ ST(0) = ST(0) * R_F32((u32)(0x922be0u));
    /* 0053613d: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 0053613f: fnstcw word ptr [ebp - 0x2c] */ W16((u32)(r_ebp+0xffffffd4u), fcw);
    /* 00536142: movzx eax, word ptr [ebp - 0x2c] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffd4u));
    /* 00536146: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0053614b: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0053614e: fldcw word ptr [ebp - 0x24] */ fcw = R16((u32)(r_ebp+0xffffffdcu));
    /* 00536151: fistp dword ptr [esi + 0x2b0] */ W32((u32)(r_esi+0x2b0u), (u32)fx_int32(ST(0))); FPOP();
    /* 00536157: fldcw word ptr [ebp - 0x2c] */ fcw = R16((u32)(r_ebp+0xffffffd4u));
    /* 0053615a: mov eax, 0xf */ r_eax = 0xfu;
    /* 0053615f: mov dword ptr [esi + 0x388], 0 */ W32((u32)(r_esi+0x388u), 0x0u);
    /* 00536169: or ebx, 0x40000 */ {  u32 a = r_ebx; u32 b = 0x40000u; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 0053616f: mov word ptr [esi + 0x342], ax */ W16((u32)(r_esi+0x342u), (u16)r_eax);
    /* 00536176: push 0xff303030 */ { u32 v = 0xff303030u; r_esp -= 4; W32(r_esp, v); }
    /* 0053617b: push 0xa0303030 */ { u32 v = 0xa0303030u; r_esp -= 4; W32(r_esp, v); }
    /* 00536180: mov word ptr [esi + 0x344], ax */ W16((u32)(r_esi+0x344u), (u16)r_eax);
    /* 00536187: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00536189: mov word ptr [esi + 0x330], dx */ W16((u32)(r_esi+0x330u), (u16)r_edx);
    /* 00536190: mov word ptr [esi + 0x37c], dx */ W16((u32)(r_esi+0x37cu), (u16)r_edx);
    /* 00536197: mov word ptr [esi + 0x37e], dx */ W16((u32)(r_esi+0x37eu), (u16)r_edx);
    /* 0053619e: mov dword ptr [esi + 0x380], edx */ W32((u32)(r_esi+0x380u), r_edx);
    /* 005361a4: mov dword ptr [esi + 0x384], edx */ W32((u32)(r_esi+0x384u), r_edx);
    /* 005361aa: or ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 005361ad: mov dword ptr [esi + 0x2e8], ecx */ W32((u32)(r_esi+0x2e8u), r_ecx);
    /* 005361b3: mov dword ptr [esi + 0x30], ebx */ W32((u32)(r_esi+0x30u), r_ebx);
    /* 005361b6: call 0x578cc4 */ r_esp -= 4; W32(r_esp, 0x5361bbu); f_00578cc4();
    /* 005361bb: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005361be: push 0xff303030 */ { u32 v = 0xff303030u; r_esp -= 4; W32(r_esp, v); }
    /* 005361c3: push 0xa0303030 */ { u32 v = 0xa0303030u; r_esp -= 4; W32(r_esp, v); }
    /* 005361c8: mov dword ptr [edx + 0x3b0], eax */ W32((u32)(r_edx+0x3b0u), r_eax);
    /* 005361ce: call 0x578cc4 */ r_esp -= 4; W32(r_esp, 0x5361d3u); f_00578cc4();
    /* 005361d3: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005361d6: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005361d9: mov edx, dword ptr [ecx + 0x33c] */ r_edx = R32((u32)(r_ecx+0x33cu));
    /* 005361df: mov dword ptr [ecx + 0x3b4], eax */ W32((u32)(r_ecx+0x3b4u), r_eax);
    /* 005361e5: mov eax, dword ptr [0xa734fc] */ r_eax = R32((u32)(0xa734fcu));
    /* 005361ea: mov ebx, dword ptr [eax + edx*4] */ r_ebx = R32((u32)(r_eax+r_edx*4));
    /* 005361ed: mov esi, dword ptr [ebx] */ r_esi = R32((u32)(r_ebx));
    /* 005361ef: mov dword ptr [ecx + 0x3a0], esi */ W32((u32)(r_ecx+0x3a0u), r_esi);
    /* 005361f5: mov edi, dword ptr [eax + edx*4] */ r_edi = R32((u32)(r_eax+r_edx*4));
    /* 005361f8: mov ebx, dword ptr [edi + 4] */ r_ebx = R32((u32)(r_edi+0x4u));
    /* 005361fb: mov dword ptr [ecx + 0x3a8], ebx */ W32((u32)(r_ecx+0x3a8u), r_ebx);
    /* 00536201: mov ebx, dword ptr [eax + edx*4] */ r_ebx = R32((u32)(r_eax+r_edx*4));
    /* 00536204: mov ebx, dword ptr [ebx + 8] */ r_ebx = R32((u32)(r_ebx+0x8u));
    /* 00536207: mov dword ptr [ecx + 0x3a4], ebx */ W32((u32)(r_ecx+0x3a4u), r_ebx);
    /* 0053620d: mov eax, dword ptr [eax + edx*4] */ r_eax = R32((u32)(r_eax+r_edx*4));
    /* 00536210: mov eax, dword ptr [eax + 0xc] */ r_eax = R32((u32)(r_eax+0xcu));
    /* 00536213: mov dword ptr [ecx + 0x3ac], eax */ W32((u32)(r_ecx+0x3acu), r_eax);
    /* 00536219: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0053621b: mov dword ptr [ecx + 0x398], 1 */ W32((u32)(r_ecx+0x398u), 0x1u);
L_00536225:; BB(0x00536225);
    /* 00536225: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 00536228: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0053622a: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0053622d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0053622f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00536231: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00536233: lea ecx, [ecx + edx + 0x3b8] */ r_ecx = (u32)(r_ecx+r_edx+0x3b8u);
    /* 0053623a: call 0x57739c */ r_esp -= 4; W32(r_esp, 0x53623fu); f_0057739c();
    /* 0053623f: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00536242: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00536245: jge 0x53624c */ if ((fS==fO)) goto L_0053624c;
L_00536247:; BB(0x00536247);
    /* 00536247: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0053624a: jmp 0x536225 */ goto L_00536225;
L_0053624c:; BB(0x0053624c);
    /* 0053624c: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0053624f: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00536251: call dword ptr [eax + 0x150] */ { u32 t = R32((u32)(r_eax+0x150u)); r_esp -= 4; W32(r_esp, 0x536257u); call_ind(t); }
    /* 00536257: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0053625a: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0053625d: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00536260: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00536263: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00536266: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0053626d: mov esp, ebp */ r_esp = r_ebp;
    /* 0053626f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00536270: ret 8 */ FN_RET(0x00535f1c); r_esp += 12; return;
}

