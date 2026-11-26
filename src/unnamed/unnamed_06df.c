#include "protos.h"

void f_006df192(void)
{
    FN_ENTER(0x006df192);
    /* 006df192: fld dword ptr [0x96ce78] */ FPUSH(R_F32((u32)(0x96ce78u)));
    /* 006df198: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 006df19c: movzx eax, di */ r_eax = (u32)(u16)r_edi;
    /* 006df19f: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006df1a2: jge 0x6df2cc */ if ((fS==fO)) goto L_006df2cc;
L_006df1a8:; BB(0x006df1a8);
    /* 006df1a8: lea ecx, [eax + eax*8] */ r_ecx = (u32)(r_eax+r_eax*8);
    /* 006df1ab: lea edx, [ecx + ecx] */ r_edx = (u32)(r_ecx+r_ecx);
    /* 006df1ae: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006df1b0: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006df1b2: movsx edx, word ptr [edx + 0xa96520] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edx+0xa96520u));
    /* 006df1b9: cmp edx, 0xf */ {  u32 a = r_edx; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006df1bc: jne 0x6df1cd */ if (!fZ) goto L_006df1cd;
L_006df1be:; BB(0x006df1be);
    /* 006df1be: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 006df1c2: fadd dword ptr [ecx*8 + 0xa96524] */ ST(0) = ST(0) + R_F32((u32)(r_ecx*8+0xa96524u));
    /* 006df1c9: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
L_006df1cd:; BB(0x006df1cd);
    /* 006df1cd: movsx edx, word ptr [ecx*8 + 0xa96528] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx*8+0xa96528u));
    /* 006df1d5: cmp edx, 0xf */ {  u32 a = r_edx; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006df1d8: jne 0x6df1e9 */ if (!fZ) goto L_006df1e9;
L_006df1da:; BB(0x006df1da);
    /* 006df1da: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 006df1de: fadd dword ptr [ecx*8 + 0xa9652c] */ ST(0) = ST(0) + R_F32((u32)(r_ecx*8+0xa9652cu));
    /* 006df1e5: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
L_006df1e9:; BB(0x006df1e9);
    /* 006df1e9: movsx edx, word ptr [ecx*8 + 0xa96530] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx*8+0xa96530u));
    /* 006df1f1: cmp edx, 0xf */ {  u32 a = r_edx; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006df1f4: jne 0x6df205 */ if (!fZ) goto L_006df205;
L_006df1f6:; BB(0x006df1f6);
    /* 006df1f6: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 006df1fa: fadd dword ptr [ecx*8 + 0xa96534] */ ST(0) = ST(0) + R_F32((u32)(r_ecx*8+0xa96534u));
    /* 006df201: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
L_006df205:; BB(0x006df205);
    /* 006df205: movsx edx, word ptr [ecx*8 + 0xa96538] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx*8+0xa96538u));
    /* 006df20d: cmp edx, 0xf */ {  u32 a = r_edx; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006df210: jne 0x6df221 */ if (!fZ) goto L_006df221;
L_006df212:; BB(0x006df212);
    /* 006df212: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 006df216: fadd dword ptr [ecx*8 + 0xa9653c] */ ST(0) = ST(0) + R_F32((u32)(r_ecx*8+0xa9653cu));
    /* 006df21d: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
L_006df221:; BB(0x006df221);
    /* 006df221: movsx edx, word ptr [ecx*8 + 0xa96540] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx*8+0xa96540u));
    /* 006df229: cmp edx, 0xf */ {  u32 a = r_edx; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006df22c: jne 0x6df23d */ if (!fZ) goto L_006df23d;
L_006df22e:; BB(0x006df22e);
    /* 006df22e: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 006df232: fadd dword ptr [ecx*8 + 0xa96544] */ ST(0) = ST(0) + R_F32((u32)(r_ecx*8+0xa96544u));
    /* 006df239: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
L_006df23d:; BB(0x006df23d);
    /* 006df23d: movsx edx, word ptr [ecx*8 + 0xa96548] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx*8+0xa96548u));
    /* 006df245: cmp edx, 0xf */ {  u32 a = r_edx; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006df248: jne 0x6df259 */ if (!fZ) goto L_006df259;
L_006df24a:; BB(0x006df24a);
    /* 006df24a: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 006df24e: fadd dword ptr [ecx*8 + 0xa9654c] */ ST(0) = ST(0) + R_F32((u32)(r_ecx*8+0xa9654cu));
    /* 006df255: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
L_006df259:; BB(0x006df259);
    /* 006df259: movsx edx, word ptr [ecx*8 + 0xa96550] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx*8+0xa96550u));
    /* 006df261: cmp edx, 0xf */ {  u32 a = r_edx; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006df264: jne 0x6df275 */ if (!fZ) goto L_006df275;
L_006df266:; BB(0x006df266);
    /* 006df266: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 006df26a: fadd dword ptr [ecx*8 + 0xa96554] */ ST(0) = ST(0) + R_F32((u32)(r_ecx*8+0xa96554u));
    /* 006df271: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
L_006df275:; BB(0x006df275);
    /* 006df275: movsx edx, word ptr [ecx*8 + 0xa96558] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx*8+0xa96558u));
    /* 006df27d: cmp edx, 0xf */ {  u32 a = r_edx; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006df280: jne 0x6df291 */ if (!fZ) goto L_006df291;
L_006df282:; BB(0x006df282);
    /* 006df282: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 006df286: fadd dword ptr [ecx*8 + 0xa9655c] */ ST(0) = ST(0) + R_F32((u32)(r_ecx*8+0xa9655cu));
    /* 006df28d: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
L_006df291:; BB(0x006df291);
    /* 006df291: movsx edx, word ptr [ecx*8 + 0xa96560] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx*8+0xa96560u));
    /* 006df299: cmp edx, 0xf */ {  u32 a = r_edx; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006df29c: jne 0x6df2ad */ if (!fZ) goto L_006df2ad;
L_006df29e:; BB(0x006df29e);
    /* 006df29e: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 006df2a2: fadd dword ptr [ecx*8 + 0xa96564] */ ST(0) = ST(0) + R_F32((u32)(r_ecx*8+0xa96564u));
    /* 006df2a9: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
L_006df2ad:; BB(0x006df2ad);
    /* 006df2ad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006df2ae: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6df2b3u); f_0068d5a8();
    /* 006df2b3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006df2b4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006df2b6: je 0x6df2cc */ if (fZ) goto L_006df2cc;
L_006df2b8:; BB(0x006df2b8);
    /* 006df2b8: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 006df2ba: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006df2bb: mov ecx, eax */ r_ecx = r_eax;
    /* 006df2bd: call 0x68c3dc */ r_esp -= 4; W32(r_esp, 0x6df2c2u); f_0068c3dc();
    /* 006df2c2: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 006df2c6: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 006df2c8: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
L_006df2cc:; BB(0x006df2cc);
    /* 006df2cc: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 006df2d0: fadd dword ptr [0x96ce74] */ ST(0) = ST(0) + R_F32((u32)(0x96ce74u));
    /* 006df2d6: fmul dword ptr [0xa96658] */ ST(0) = ST(0) * R_F32((u32)(0xa96658u));
    /* 006df2dc: fstp dword ptr [0xa96658] */ W_F32((u32)(0xa96658u), ST(0)); FPOP();
    /* 006df2e2: call 0x687c48 */ r_esp -= 4; W32(r_esp, 0x6df2e7u); f_00687c48();
    /* 006df2e7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006df2e9: je 0x6df329 */ if (fZ) goto L_006df329;
L_006df2eb:; BB(0x006df2eb);
    /* 006df2eb: movsx ecx, word ptr [0xa96660] */ r_ecx = (u32)(i32)(i16)R16((u32)(0xa96660u));
    /* 006df2f2: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 006df2f6: fild dword ptr [esp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_esp+0xcu)));
    /* 006df2fa: fmul dword ptr [ebp*8 + 0x9cf784] */ ST(0) = ST(0) * R_F32((u32)(r_ebp*8+0x9cf784u));
    /* 006df301: fnstcw word ptr [esp + 0x14] */ W16((u32)(r_esp+0x14u), fcw);
    /* 006df305: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 006df30a: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006df30f: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 006df313: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 006df317: fistp dword ptr [esp + 0x24] */ W32((u32)(r_esp+0x24u), (u32)fx_int32(ST(0))); FPOP();
    /* 006df31b: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 006df31f: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 006df323: mov word ptr [0xa96660], ax */ W16((u32)(0xa96660u), (u16)r_eax);
L_006df329:; BB(0x006df329);
    /* 006df329: lea eax, [ebx - 4] */ r_eax = (u32)(r_ebx+0xfffffffcu);
    /* 006df32c: call 0x6e06d0 */ r_esp -= 4; W32(r_esp, 0x6df331u); f_006e06d0();
    /* 006df331: movsx edx, word ptr [0xa96662] */ r_edx = (u32)(i32)(i16)R16((u32)(0xa96662u));
    /* 006df338: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006df33a: mov eax, edx */ r_eax = r_edx;
    /* 006df33c: call 0x6e06d0 */ r_esp -= 4; W32(r_esp, 0x6df341u); f_006e06d0();
    /* 006df341: movzx edi, word ptr [0xa96678] */ r_edi = (u32)R16((u32)(0xa96678u));
    /* 006df348: imul edi, ebx */ { i64 t = (i64)(i32)r_edi * (i64)(i32)r_ebx; r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006df34b: movzx ebp, word ptr [0xa96670] */ r_ebp = (u32)R16((u32)(0xa96670u));
    /* 006df352: add word ptr [0xa96664], di */ { u32 ad = (u32)(0xa96664u);  u32 a = R16(ad); u32 b = (u16)r_edi; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 006df359: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 006df35c: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 006df361: imul esi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_esi; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006df363: sar esi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 006df366: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 006df368: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006df36a: lea esi, [edx + edx*4] */ r_esi = (u32)(r_edx+r_edx*4);
    /* 006df36d: neg esi */ { u32 x = r_esi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 006df36f: add ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 006df371: movsx ebp, bp */ r_ebp = (u32)(i32)(i16)(u16)r_ebp;
    /* 006df374: mov word ptr [0xa96670], bp */ W16((u32)(0xa96670u), (u16)r_ebp);
    /* 006df37b: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006df37e: jge 0x6df392 */ if ((fS==fO)) goto L_006df392;
L_006df380:; BB(0x006df380);
    /* 006df380: mov edx, dword ptr [0xa96668] */ r_edx = R32((u32)(0xa96668u));
    /* 006df386: mov byte ptr [0xa96672], 0 */ W8((u32)(0xa96672u), 0x0u);
    /* 006df38d: jmp 0x6e0691 */ goto L_006e0691;
L_006df392:; BB(0x006df392);
    /* 006df392: mov edx, dword ptr [0xa96668] */ r_edx = R32((u32)(0xa96668u));
    /* 006df398: jmp 0x6e0691 */ goto L_006e0691;
L_006e0691:; BB(0x006e0691);
    /* 006e0691: mov eax, edx */ r_eax = r_edx;
    /* 006e0693: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 006e0696: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006e0698: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 006e069a: mov dword ptr [0xa96668], edx */ W32((u32)(0xa96668u), r_edx);
    /* 006e06a0: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006e06a2: jg 0x6e06af */ if ((!fZ&&fS==fO)) goto L_006e06af;
L_006e06a4:; BB(0x006e06a4);
    /* 006e06a4: mov eax, 0xa */ r_eax = 0xau;
    /* 006e06a9: mov word ptr [0xa96670], ax */ W16((u32)(0xa96670u), (u16)r_eax);
L_006e06af:; BB(0x006e06af);
    /* 006e06af: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006e06b1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006e06b3: mov eax, 0xa96650 */ r_eax = 0xa96650u;
    /* 006e06b8: jg 0x6e06bc */ if ((!fZ&&fS==fO)) goto L_006e06bc;
L_006e06ba:; BB(0x006e06ba);
    /* 006e06ba: mov ecx, edx */ r_ecx = r_edx;
L_006e06bc:; BB(0x006e06bc);
    /* 006e06bc: mov word ptr [0xa96662], cx */ W16((u32)(0xa96662u), (u16)r_ecx);
    /* 006e06c3: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e06c6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006e06c7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e06c8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006e06c9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006e06ca: ret  */ FN_RET(0x006df192); r_esp += 4; return;
}

void f_006df39d(void)
{
    FN_ENTER(0x006df39d);
    /* 006df39d: mov edx, dword ptr [0xa96668] */ r_edx = R32((u32)(0xa96668u));
    /* 006df3a3: movsx ebp, word ptr [0xa96670] */ r_ebp = (u32)(i32)(i16)R16((u32)(0xa96670u));
    /* 006df3aa: movsx ecx, word ptr [0xa96662] */ r_ecx = (u32)(i32)(i16)R16((u32)(0xa96662u));
    /* 006df3b1: jmp 0x6e0691 */ goto L_006e0691;
L_006e0691:; BB(0x006e0691);
    /* 006e0691: mov eax, edx */ r_eax = r_edx;
    /* 006e0693: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 006e0696: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006e0698: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 006e069a: mov dword ptr [0xa96668], edx */ W32((u32)(0xa96668u), r_edx);
    /* 006e06a0: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006e06a2: jg 0x6e06af */ if ((!fZ&&fS==fO)) goto L_006e06af;
L_006e06a4:; BB(0x006e06a4);
    /* 006e06a4: mov eax, 0xa */ r_eax = 0xau;
    /* 006e06a9: mov word ptr [0xa96670], ax */ W16((u32)(0xa96670u), (u16)r_eax);
L_006e06af:; BB(0x006e06af);
    /* 006e06af: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006e06b1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006e06b3: mov eax, 0xa96650 */ r_eax = 0xa96650u;
    /* 006e06b8: jg 0x6e06bc */ if ((!fZ&&fS==fO)) goto L_006e06bc;
L_006e06ba:; BB(0x006e06ba);
    /* 006e06ba: mov ecx, edx */ r_ecx = r_edx;
L_006e06bc:; BB(0x006e06bc);
    /* 006e06bc: mov word ptr [0xa96662], cx */ W16((u32)(0xa96662u), (u16)r_ecx);
    /* 006e06c3: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e06c6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006e06c7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e06c8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006e06c9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006e06ca: ret  */ FN_RET(0x006df39d); r_esp += 4; return;
}

void f_006df3b6(void)
{
    FN_ENTER(0x006df3b6);
    /* 006df3b6: fld dword ptr [0x96ce78] */ FPUSH(R_F32((u32)(0x96ce78u)));
    /* 006df3bc: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 006df3c0: movzx eax, di */ r_eax = (u32)(u16)r_edi;
    /* 006df3c3: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006df3c6: jge 0x6df4f0 */ if ((fS==fO)) goto L_006df4f0;
L_006df3cc:; BB(0x006df3cc);
    /* 006df3cc: lea ecx, [eax + eax*8] */ r_ecx = (u32)(r_eax+r_eax*8);
    /* 006df3cf: lea edx, [ecx + ecx] */ r_edx = (u32)(r_ecx+r_ecx);
    /* 006df3d2: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006df3d4: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006df3d6: movsx edx, word ptr [edx + 0xa96520] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edx+0xa96520u));
    /* 006df3dd: cmp edx, 0xd */ {  u32 a = r_edx; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006df3e0: jne 0x6df3f1 */ if (!fZ) goto L_006df3f1;
L_006df3e2:; BB(0x006df3e2);
    /* 006df3e2: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 006df3e6: fadd dword ptr [ecx*8 + 0xa96524] */ ST(0) = ST(0) + R_F32((u32)(r_ecx*8+0xa96524u));
    /* 006df3ed: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
L_006df3f1:; BB(0x006df3f1);
    /* 006df3f1: movsx edx, word ptr [ecx*8 + 0xa96528] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx*8+0xa96528u));
    /* 006df3f9: cmp edx, 0xd */ {  u32 a = r_edx; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006df3fc: jne 0x6df40d */ if (!fZ) goto L_006df40d;
L_006df3fe:; BB(0x006df3fe);
    /* 006df3fe: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 006df402: fadd dword ptr [ecx*8 + 0xa9652c] */ ST(0) = ST(0) + R_F32((u32)(r_ecx*8+0xa9652cu));
    /* 006df409: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
L_006df40d:; BB(0x006df40d);
    /* 006df40d: movsx edx, word ptr [ecx*8 + 0xa96530] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx*8+0xa96530u));
    /* 006df415: cmp edx, 0xd */ {  u32 a = r_edx; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006df418: jne 0x6df429 */ if (!fZ) goto L_006df429;
L_006df41a:; BB(0x006df41a);
    /* 006df41a: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 006df41e: fadd dword ptr [ecx*8 + 0xa96534] */ ST(0) = ST(0) + R_F32((u32)(r_ecx*8+0xa96534u));
    /* 006df425: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
L_006df429:; BB(0x006df429);
    /* 006df429: movsx edx, word ptr [ecx*8 + 0xa96538] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx*8+0xa96538u));
    /* 006df431: cmp edx, 0xd */ {  u32 a = r_edx; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006df434: jne 0x6df445 */ if (!fZ) goto L_006df445;
L_006df436:; BB(0x006df436);
    /* 006df436: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 006df43a: fadd dword ptr [ecx*8 + 0xa9653c] */ ST(0) = ST(0) + R_F32((u32)(r_ecx*8+0xa9653cu));
    /* 006df441: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
L_006df445:; BB(0x006df445);
    /* 006df445: movsx edx, word ptr [ecx*8 + 0xa96540] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx*8+0xa96540u));
    /* 006df44d: cmp edx, 0xd */ {  u32 a = r_edx; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006df450: jne 0x6df461 */ if (!fZ) goto L_006df461;
L_006df452:; BB(0x006df452);
    /* 006df452: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 006df456: fadd dword ptr [ecx*8 + 0xa96544] */ ST(0) = ST(0) + R_F32((u32)(r_ecx*8+0xa96544u));
    /* 006df45d: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
L_006df461:; BB(0x006df461);
    /* 006df461: movsx edx, word ptr [ecx*8 + 0xa96548] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx*8+0xa96548u));
    /* 006df469: cmp edx, 0xd */ {  u32 a = r_edx; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006df46c: jne 0x6df47d */ if (!fZ) goto L_006df47d;
L_006df46e:; BB(0x006df46e);
    /* 006df46e: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 006df472: fadd dword ptr [ecx*8 + 0xa9654c] */ ST(0) = ST(0) + R_F32((u32)(r_ecx*8+0xa9654cu));
    /* 006df479: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
L_006df47d:; BB(0x006df47d);
    /* 006df47d: movsx edx, word ptr [ecx*8 + 0xa96550] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx*8+0xa96550u));
    /* 006df485: cmp edx, 0xd */ {  u32 a = r_edx; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006df488: jne 0x6df499 */ if (!fZ) goto L_006df499;
L_006df48a:; BB(0x006df48a);
    /* 006df48a: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 006df48e: fadd dword ptr [ecx*8 + 0xa96554] */ ST(0) = ST(0) + R_F32((u32)(r_ecx*8+0xa96554u));
    /* 006df495: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
L_006df499:; BB(0x006df499);
    /* 006df499: movsx edx, word ptr [ecx*8 + 0xa96558] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx*8+0xa96558u));
    /* 006df4a1: cmp edx, 0xd */ {  u32 a = r_edx; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006df4a4: jne 0x6df4b5 */ if (!fZ) goto L_006df4b5;
L_006df4a6:; BB(0x006df4a6);
    /* 006df4a6: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 006df4aa: fadd dword ptr [ecx*8 + 0xa9655c] */ ST(0) = ST(0) + R_F32((u32)(r_ecx*8+0xa9655cu));
    /* 006df4b1: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
L_006df4b5:; BB(0x006df4b5);
    /* 006df4b5: movsx edx, word ptr [ecx*8 + 0xa96560] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx*8+0xa96560u));
    /* 006df4bd: cmp edx, 0xd */ {  u32 a = r_edx; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006df4c0: jne 0x6df4d1 */ if (!fZ) goto L_006df4d1;
L_006df4c2:; BB(0x006df4c2);
    /* 006df4c2: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 006df4c6: fadd dword ptr [ecx*8 + 0xa96564] */ ST(0) = ST(0) + R_F32((u32)(r_ecx*8+0xa96564u));
    /* 006df4cd: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
L_006df4d1:; BB(0x006df4d1);
    /* 006df4d1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006df4d2: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6df4d7u); f_0068d5a8();
    /* 006df4d7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006df4d8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006df4da: je 0x6df4f0 */ if (fZ) goto L_006df4f0;
L_006df4dc:; BB(0x006df4dc);
    /* 006df4dc: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 006df4de: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006df4df: mov ecx, eax */ r_ecx = r_eax;
    /* 006df4e1: call 0x68c3dc */ r_esp -= 4; W32(r_esp, 0x6df4e6u); f_0068c3dc();
    /* 006df4e6: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 006df4ea: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 006df4ec: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
L_006df4f0:; BB(0x006df4f0);
    /* 006df4f0: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 006df4f4: fadd dword ptr [0x96ce74] */ ST(0) = ST(0) + R_F32((u32)(0x96ce74u));
    /* 006df4fa: fmul dword ptr [0xa96658] */ ST(0) = ST(0) * R_F32((u32)(0xa96658u));
    /* 006df500: fstp dword ptr [0xa96658] */ W_F32((u32)(0xa96658u), ST(0)); FPOP();
    /* 006df506: call 0x687c48 */ r_esp -= 4; W32(r_esp, 0x6df50bu); f_00687c48();
    /* 006df50b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006df50d: je 0x6df54d */ if (fZ) goto L_006df54d;
L_006df50f:; BB(0x006df50f);
    /* 006df50f: movsx ecx, word ptr [0xa96660] */ r_ecx = (u32)(i32)(i16)R16((u32)(0xa96660u));
    /* 006df516: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 006df51a: fild dword ptr [esp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_esp+0xcu)));
    /* 006df51e: fmul dword ptr [ebp*8 + 0x9cf784] */ ST(0) = ST(0) * R_F32((u32)(r_ebp*8+0x9cf784u));
    /* 006df525: fnstcw word ptr [esp + 0x14] */ W16((u32)(r_esp+0x14u), fcw);
    /* 006df529: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 006df52e: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006df533: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 006df537: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 006df53b: fistp dword ptr [esp + 0x24] */ W32((u32)(r_esp+0x24u), (u32)fx_int32(ST(0))); FPOP();
    /* 006df53f: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 006df543: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 006df547: mov word ptr [0xa96660], ax */ W16((u32)(0xa96660u), (u16)r_eax);
L_006df54d:; BB(0x006df54d);
    /* 006df54d: lea eax, [ebx - 4] */ r_eax = (u32)(r_ebx+0xfffffffcu);
    /* 006df550: call 0x6e06d0 */ r_esp -= 4; W32(r_esp, 0x6df555u); f_006e06d0();
    /* 006df555: movsx edx, word ptr [0xa96662] */ r_edx = (u32)(i32)(i16)R16((u32)(0xa96662u));
    /* 006df55c: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006df55e: mov eax, edx */ r_eax = r_edx;
    /* 006df560: call 0x6e06d0 */ r_esp -= 4; W32(r_esp, 0x6df565u); f_006e06d0();
    /* 006df565: movzx edi, word ptr [0xa96678] */ r_edi = (u32)R16((u32)(0xa96678u));
    /* 006df56c: imul edi, ebx */ { i64 t = (i64)(i32)r_edi * (i64)(i32)r_ebx; r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006df56f: movzx ebp, word ptr [0xa96670] */ r_ebp = (u32)R16((u32)(0xa96670u));
    /* 006df576: add word ptr [0xa96664], di */ { u32 ad = (u32)(0xa96664u);  u32 a = R16(ad); u32 b = (u16)r_edi; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 006df57d: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 006df580: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 006df585: imul esi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_esi; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006df587: sar esi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 006df58a: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 006df58c: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006df58e: lea esi, [edx + edx*4] */ r_esi = (u32)(r_edx+r_edx*4);
    /* 006df591: neg esi */ { u32 x = r_esi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 006df593: add ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 006df595: movsx ebp, bp */ r_ebp = (u32)(i32)(i16)(u16)r_ebp;
    /* 006df598: mov word ptr [0xa96670], bp */ W16((u32)(0xa96670u), (u16)r_ebp);
    /* 006df59f: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006df5a2: jge 0x6df5b6 */ if ((fS==fO)) goto L_006df5b6;
L_006df5a4:; BB(0x006df5a4);
    /* 006df5a4: mov edx, dword ptr [0xa96668] */ r_edx = R32((u32)(0xa96668u));
    /* 006df5aa: mov byte ptr [0xa96672], 0 */ W8((u32)(0xa96672u), 0x0u);
    /* 006df5b1: jmp 0x6e0691 */ goto L_006e0691;
L_006df5b6:; BB(0x006df5b6);
    /* 006df5b6: mov edx, dword ptr [0xa96668] */ r_edx = R32((u32)(0xa96668u));
    /* 006df5bc: jmp 0x6e0691 */ goto L_006e0691;
L_006e0691:; BB(0x006e0691);
    /* 006e0691: mov eax, edx */ r_eax = r_edx;
    /* 006e0693: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 006e0696: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006e0698: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 006e069a: mov dword ptr [0xa96668], edx */ W32((u32)(0xa96668u), r_edx);
    /* 006e06a0: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006e06a2: jg 0x6e06af */ if ((!fZ&&fS==fO)) goto L_006e06af;
L_006e06a4:; BB(0x006e06a4);
    /* 006e06a4: mov eax, 0xa */ r_eax = 0xau;
    /* 006e06a9: mov word ptr [0xa96670], ax */ W16((u32)(0xa96670u), (u16)r_eax);
L_006e06af:; BB(0x006e06af);
    /* 006e06af: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006e06b1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006e06b3: mov eax, 0xa96650 */ r_eax = 0xa96650u;
    /* 006e06b8: jg 0x6e06bc */ if ((!fZ&&fS==fO)) goto L_006e06bc;
L_006e06ba:; BB(0x006e06ba);
    /* 006e06ba: mov ecx, edx */ r_ecx = r_edx;
L_006e06bc:; BB(0x006e06bc);
    /* 006e06bc: mov word ptr [0xa96662], cx */ W16((u32)(0xa96662u), (u16)r_ecx);
    /* 006e06c3: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e06c6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006e06c7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e06c8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006e06c9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006e06ca: ret  */ FN_RET(0x006df3b6); r_esp += 4; return;
}

void f_006df5c1(void)
{
    FN_ENTER(0x006df5c1);
    /* 006df5c1: lea eax, [ebx - 4] */ r_eax = (u32)(r_ebx+0xfffffffcu);
    /* 006df5c4: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 006df5c8: call 0x6e06d0 */ r_esp -= 4; W32(r_esp, 0x6df5cdu); f_006e06d0();
    /* 006df5cd: movsx edx, word ptr [0xa96676] */ r_edx = (u32)(i32)(i16)R16((u32)(0xa96676u));
    /* 006df5d4: fld dword ptr [0x96ce78] */ FPUSH(R_F32((u32)(0x96ce78u)));
    /* 006df5da: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 006df5de: imul edx, eax */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_eax; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006df5e1: movzx eax, di */ r_eax = (u32)(u16)r_edi;
    /* 006df5e4: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006df5e7: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 006df5eb: fild dword ptr [esp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_esp+0xcu)));
    /* 006df5ef: fadd dword ptr [0xa96658] */ ST(0) = ST(0) + R_F32((u32)(0xa96658u));
    /* 006df5f5: jge 0x6df72b */ if ((fS==fO)) goto L_006df72b;
L_006df5fb:; BB(0x006df5fb);
    /* 006df5fb: fstp dword ptr [0xa96658] */ W_F32((u32)(0xa96658u), ST(0)); FPOP();
    /* 006df601: lea ecx, [eax + eax*8] */ r_ecx = (u32)(r_eax+r_eax*8);
    /* 006df604: lea edx, [ecx + ecx] */ r_edx = (u32)(r_ecx+r_ecx);
    /* 006df607: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006df609: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006df60b: movsx edx, word ptr [edx + 0xa96520] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edx+0xa96520u));
    /* 006df612: cmp edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006df615: jne 0x6df626 */ if (!fZ) goto L_006df626;
L_006df617:; BB(0x006df617);
    /* 006df617: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 006df61b: fadd dword ptr [ecx*8 + 0xa96524] */ ST(0) = ST(0) + R_F32((u32)(r_ecx*8+0xa96524u));
    /* 006df622: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
L_006df626:; BB(0x006df626);
    /* 006df626: movsx edx, word ptr [ecx*8 + 0xa96528] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx*8+0xa96528u));
    /* 006df62e: cmp edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006df631: jne 0x6df642 */ if (!fZ) goto L_006df642;
L_006df633:; BB(0x006df633);
    /* 006df633: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 006df637: fadd dword ptr [ecx*8 + 0xa9652c] */ ST(0) = ST(0) + R_F32((u32)(r_ecx*8+0xa9652cu));
    /* 006df63e: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
L_006df642:; BB(0x006df642);
    /* 006df642: movsx edx, word ptr [ecx*8 + 0xa96530] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx*8+0xa96530u));
    /* 006df64a: cmp edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006df64d: jne 0x6df65e */ if (!fZ) goto L_006df65e;
L_006df64f:; BB(0x006df64f);
    /* 006df64f: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 006df653: fadd dword ptr [ecx*8 + 0xa96534] */ ST(0) = ST(0) + R_F32((u32)(r_ecx*8+0xa96534u));
    /* 006df65a: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
L_006df65e:; BB(0x006df65e);
    /* 006df65e: movsx edx, word ptr [ecx*8 + 0xa96538] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx*8+0xa96538u));
    /* 006df666: cmp edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006df669: jne 0x6df67a */ if (!fZ) goto L_006df67a;
L_006df66b:; BB(0x006df66b);
    /* 006df66b: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 006df66f: fadd dword ptr [ecx*8 + 0xa9653c] */ ST(0) = ST(0) + R_F32((u32)(r_ecx*8+0xa9653cu));
    /* 006df676: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
L_006df67a:; BB(0x006df67a);
    /* 006df67a: movsx edx, word ptr [ecx*8 + 0xa96540] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx*8+0xa96540u));
    /* 006df682: cmp edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006df685: jne 0x6df696 */ if (!fZ) goto L_006df696;
L_006df687:; BB(0x006df687);
    /* 006df687: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 006df68b: fadd dword ptr [ecx*8 + 0xa96544] */ ST(0) = ST(0) + R_F32((u32)(r_ecx*8+0xa96544u));
    /* 006df692: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
L_006df696:; BB(0x006df696);
    /* 006df696: movsx edx, word ptr [ecx*8 + 0xa96548] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx*8+0xa96548u));
    /* 006df69e: cmp edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006df6a1: jne 0x6df6b2 */ if (!fZ) goto L_006df6b2;
L_006df6a3:; BB(0x006df6a3);
    /* 006df6a3: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 006df6a7: fadd dword ptr [ecx*8 + 0xa9654c] */ ST(0) = ST(0) + R_F32((u32)(r_ecx*8+0xa9654cu));
    /* 006df6ae: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
L_006df6b2:; BB(0x006df6b2);
    /* 006df6b2: movsx edx, word ptr [ecx*8 + 0xa96550] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx*8+0xa96550u));
    /* 006df6ba: cmp edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006df6bd: jne 0x6df6ce */ if (!fZ) goto L_006df6ce;
L_006df6bf:; BB(0x006df6bf);
    /* 006df6bf: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 006df6c3: fadd dword ptr [ecx*8 + 0xa96554] */ ST(0) = ST(0) + R_F32((u32)(r_ecx*8+0xa96554u));
    /* 006df6ca: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
L_006df6ce:; BB(0x006df6ce);
    /* 006df6ce: movsx edx, word ptr [ecx*8 + 0xa96558] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx*8+0xa96558u));
    /* 006df6d6: cmp edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006df6d9: jne 0x6df6ea */ if (!fZ) goto L_006df6ea;
L_006df6db:; BB(0x006df6db);
    /* 006df6db: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 006df6df: fadd dword ptr [ecx*8 + 0xa9655c] */ ST(0) = ST(0) + R_F32((u32)(r_ecx*8+0xa9655cu));
    /* 006df6e6: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
L_006df6ea:; BB(0x006df6ea);
    /* 006df6ea: movsx edx, word ptr [ecx*8 + 0xa96560] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx*8+0xa96560u));
    /* 006df6f2: cmp edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006df6f5: jne 0x6df706 */ if (!fZ) goto L_006df706;
L_006df6f7:; BB(0x006df6f7);
    /* 006df6f7: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 006df6fb: fadd dword ptr [ecx*8 + 0xa96564] */ ST(0) = ST(0) + R_F32((u32)(r_ecx*8+0xa96564u));
    /* 006df702: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
L_006df706:; BB(0x006df706);
    /* 006df706: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006df707: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6df70cu); f_0068d5a8();
    /* 006df70c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006df70d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006df70f: je 0x6df725 */ if (fZ) goto L_006df725;
L_006df711:; BB(0x006df711);
    /* 006df711: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 006df713: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006df714: mov ecx, eax */ r_ecx = r_eax;
    /* 006df716: call 0x68c3dc */ r_esp -= 4; W32(r_esp, 0x6df71bu); f_0068c3dc();
    /* 006df71b: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 006df71f: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 006df721: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
L_006df725:; BB(0x006df725);
    /* 006df725: fld dword ptr [0xa96658] */ FPUSH(R_F32((u32)(0xa96658u)));
L_006df72b:; BB(0x006df72b);
    /* 006df72b: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 006df72f: fadd dword ptr [0x96ce74] */ ST(0) = ST(0) + R_F32((u32)(0x96ce74u));
    /* 006df735: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 006df737: fstp dword ptr [0xa96658] */ W_F32((u32)(0xa96658u), ST(0)); FPOP();
    /* 006df73d: call 0x687c48 */ r_esp -= 4; W32(r_esp, 0x6df742u); f_00687c48();
    /* 006df742: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006df744: je 0x6df784 */ if (fZ) goto L_006df784;
L_006df746:; BB(0x006df746);
    /* 006df746: movsx ecx, word ptr [0xa96660] */ r_ecx = (u32)(i32)(i16)R16((u32)(0xa96660u));
    /* 006df74d: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 006df751: fild dword ptr [esp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_esp+0xcu)));
    /* 006df755: fmul dword ptr [ebp*8 + 0x9cf784] */ ST(0) = ST(0) * R_F32((u32)(r_ebp*8+0x9cf784u));
    /* 006df75c: fnstcw word ptr [esp + 0x14] */ W16((u32)(r_esp+0x14u), fcw);
    /* 006df760: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 006df765: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006df76a: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 006df76e: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 006df772: fistp dword ptr [esp + 0x24] */ W32((u32)(r_esp+0x24u), (u32)fx_int32(ST(0))); FPOP();
    /* 006df776: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 006df77a: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 006df77e: mov word ptr [0xa96660], ax */ W16((u32)(0xa96660u), (u16)r_eax);
L_006df784:; BB(0x006df784);
    /* 006df784: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 006df788: call 0x6e06d0 */ r_esp -= 4; W32(r_esp, 0x6df78du); f_006e06d0();
    /* 006df78d: movsx edx, word ptr [0xa96662] */ r_edx = (u32)(i32)(i16)R16((u32)(0xa96662u));
    /* 006df794: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006df796: mov eax, edx */ r_eax = r_edx;
    /* 006df798: call 0x6e06d0 */ r_esp -= 4; W32(r_esp, 0x6df79du); f_006e06d0();
    /* 006df79d: movzx ebp, word ptr [0xa96678] */ r_ebp = (u32)R16((u32)(0xa96678u));
    /* 006df7a4: imul ebp, ebx */ { i64 t = (i64)(i32)r_ebp * (i64)(i32)r_ebx; r_ebp = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006df7a7: movzx ebx, word ptr [0xa96670] */ r_ebx = (u32)R16((u32)(0xa96670u));
    /* 006df7ae: add word ptr [0xa96664], bp */ { u32 ad = (u32)(0xa96664u);  u32 a = R16(ad); u32 b = (u16)r_ebp; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 006df7b5: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 006df7b8: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 006df7bd: imul esi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_esi; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006df7bf: sar esi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 006df7c2: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 006df7c5: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006df7c7: lea esi, [edx + edx*4] */ r_esi = (u32)(r_edx+r_edx*4);
    /* 006df7ca: neg esi */ { u32 x = r_esi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 006df7cc: add ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006df7ce: mov edx, dword ptr [0xa96668] */ r_edx = R32((u32)(0xa96668u));
    /* 006df7d4: movsx ebp, bx */ r_ebp = (u32)(i32)(i16)(u16)r_ebx;
    /* 006df7d7: mov word ptr [0xa96670], bp */ W16((u32)(0xa96670u), (u16)r_ebp);
    /* 006df7de: jmp 0x6e0691 */ goto L_006e0691;
L_006e0691:; BB(0x006e0691);
    /* 006e0691: mov eax, edx */ r_eax = r_edx;
    /* 006e0693: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 006e0696: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006e0698: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 006e069a: mov dword ptr [0xa96668], edx */ W32((u32)(0xa96668u), r_edx);
    /* 006e06a0: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006e06a2: jg 0x6e06af */ if ((!fZ&&fS==fO)) goto L_006e06af;
L_006e06a4:; BB(0x006e06a4);
    /* 006e06a4: mov eax, 0xa */ r_eax = 0xau;
    /* 006e06a9: mov word ptr [0xa96670], ax */ W16((u32)(0xa96670u), (u16)r_eax);
L_006e06af:; BB(0x006e06af);
    /* 006e06af: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006e06b1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006e06b3: mov eax, 0xa96650 */ r_eax = 0xa96650u;
    /* 006e06b8: jg 0x6e06bc */ if ((!fZ&&fS==fO)) goto L_006e06bc;
L_006e06ba:; BB(0x006e06ba);
    /* 006e06ba: mov ecx, edx */ r_ecx = r_edx;
L_006e06bc:; BB(0x006e06bc);
    /* 006e06bc: mov word ptr [0xa96662], cx */ W16((u32)(0xa96662u), (u16)r_ecx);
    /* 006e06c3: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e06c6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006e06c7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e06c8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006e06c9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006e06ca: ret  */ FN_RET(0x006df5c1); r_esp += 4; return;
}

void f_006df7e3(void)
{
    FN_ENTER(0x006df7e3);
    /* 006df7e3: lea eax, [ebx - 4] */ r_eax = (u32)(r_ebx+0xfffffffcu);
    /* 006df7e6: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 006df7ea: call 0x6e06d0 */ r_esp -= 4; W32(r_esp, 0x6df7efu); f_006e06d0();
    /* 006df7ef: movsx edx, word ptr [0xa96676] */ r_edx = (u32)(i32)(i16)R16((u32)(0xa96676u));
    /* 006df7f6: fld dword ptr [0x96ce78] */ FPUSH(R_F32((u32)(0x96ce78u)));
    /* 006df7fc: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 006df800: imul edx, eax */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_eax; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006df803: movzx eax, di */ r_eax = (u32)(u16)r_edi;
    /* 006df806: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006df809: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 006df80d: fild dword ptr [esp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_esp+0xcu)));
    /* 006df811: fadd dword ptr [0xa96658] */ ST(0) = ST(0) + R_F32((u32)(0xa96658u));
    /* 006df817: jge 0x6df94d */ if ((fS==fO)) goto L_006df94d;
L_006df81d:; BB(0x006df81d);
    /* 006df81d: fstp dword ptr [0xa96658] */ W_F32((u32)(0xa96658u), ST(0)); FPOP();
    /* 006df823: lea ecx, [eax + eax*8] */ r_ecx = (u32)(r_eax+r_eax*8);
    /* 006df826: lea edx, [ecx + ecx] */ r_edx = (u32)(r_ecx+r_ecx);
    /* 006df829: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006df82b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006df82d: movsx edx, word ptr [edx + 0xa96520] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edx+0xa96520u));
    /* 006df834: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006df837: jne 0x6df848 */ if (!fZ) goto L_006df848;
L_006df839:; BB(0x006df839);
    /* 006df839: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 006df83d: fadd dword ptr [ecx*8 + 0xa96524] */ ST(0) = ST(0) + R_F32((u32)(r_ecx*8+0xa96524u));
    /* 006df844: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
L_006df848:; BB(0x006df848);
    /* 006df848: movsx edx, word ptr [ecx*8 + 0xa96528] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx*8+0xa96528u));
    /* 006df850: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006df853: jne 0x6df864 */ if (!fZ) goto L_006df864;
L_006df855:; BB(0x006df855);
    /* 006df855: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 006df859: fadd dword ptr [ecx*8 + 0xa9652c] */ ST(0) = ST(0) + R_F32((u32)(r_ecx*8+0xa9652cu));
    /* 006df860: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
L_006df864:; BB(0x006df864);
    /* 006df864: movsx edx, word ptr [ecx*8 + 0xa96530] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx*8+0xa96530u));
    /* 006df86c: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006df86f: jne 0x6df880 */ if (!fZ) goto L_006df880;
L_006df871:; BB(0x006df871);
    /* 006df871: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 006df875: fadd dword ptr [ecx*8 + 0xa96534] */ ST(0) = ST(0) + R_F32((u32)(r_ecx*8+0xa96534u));
    /* 006df87c: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
L_006df880:; BB(0x006df880);
    /* 006df880: movsx edx, word ptr [ecx*8 + 0xa96538] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx*8+0xa96538u));
    /* 006df888: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006df88b: jne 0x6df89c */ if (!fZ) goto L_006df89c;
L_006df88d:; BB(0x006df88d);
    /* 006df88d: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 006df891: fadd dword ptr [ecx*8 + 0xa9653c] */ ST(0) = ST(0) + R_F32((u32)(r_ecx*8+0xa9653cu));
    /* 006df898: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
L_006df89c:; BB(0x006df89c);
    /* 006df89c: movsx edx, word ptr [ecx*8 + 0xa96540] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx*8+0xa96540u));
    /* 006df8a4: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006df8a7: jne 0x6df8b8 */ if (!fZ) goto L_006df8b8;
L_006df8a9:; BB(0x006df8a9);
    /* 006df8a9: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 006df8ad: fadd dword ptr [ecx*8 + 0xa96544] */ ST(0) = ST(0) + R_F32((u32)(r_ecx*8+0xa96544u));
    /* 006df8b4: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
L_006df8b8:; BB(0x006df8b8);
    /* 006df8b8: movsx edx, word ptr [ecx*8 + 0xa96548] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx*8+0xa96548u));
    /* 006df8c0: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006df8c3: jne 0x6df8d4 */ if (!fZ) goto L_006df8d4;
L_006df8c5:; BB(0x006df8c5);
    /* 006df8c5: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 006df8c9: fadd dword ptr [ecx*8 + 0xa9654c] */ ST(0) = ST(0) + R_F32((u32)(r_ecx*8+0xa9654cu));
    /* 006df8d0: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
L_006df8d4:; BB(0x006df8d4);
    /* 006df8d4: movsx edx, word ptr [ecx*8 + 0xa96550] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx*8+0xa96550u));
    /* 006df8dc: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006df8df: jne 0x6df8f0 */ if (!fZ) goto L_006df8f0;
L_006df8e1:; BB(0x006df8e1);
    /* 006df8e1: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 006df8e5: fadd dword ptr [ecx*8 + 0xa96554] */ ST(0) = ST(0) + R_F32((u32)(r_ecx*8+0xa96554u));
    /* 006df8ec: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
L_006df8f0:; BB(0x006df8f0);
    /* 006df8f0: movsx edx, word ptr [ecx*8 + 0xa96558] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx*8+0xa96558u));
    /* 006df8f8: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006df8fb: jne 0x6df90c */ if (!fZ) goto L_006df90c;
L_006df8fd:; BB(0x006df8fd);
    /* 006df8fd: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 006df901: fadd dword ptr [ecx*8 + 0xa9655c] */ ST(0) = ST(0) + R_F32((u32)(r_ecx*8+0xa9655cu));
    /* 006df908: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
L_006df90c:; BB(0x006df90c);
    /* 006df90c: movsx edx, word ptr [ecx*8 + 0xa96560] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx*8+0xa96560u));
    /* 006df914: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006df917: jne 0x6df928 */ if (!fZ) goto L_006df928;
L_006df919:; BB(0x006df919);
    /* 006df919: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 006df91d: fadd dword ptr [ecx*8 + 0xa96564] */ ST(0) = ST(0) + R_F32((u32)(r_ecx*8+0xa96564u));
    /* 006df924: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
L_006df928:; BB(0x006df928);
    /* 006df928: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006df929: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6df92eu); f_0068d5a8();
    /* 006df92e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006df92f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006df931: je 0x6df947 */ if (fZ) goto L_006df947;
L_006df933:; BB(0x006df933);
    /* 006df933: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 006df935: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006df936: mov ecx, eax */ r_ecx = r_eax;
    /* 006df938: call 0x68c3dc */ r_esp -= 4; W32(r_esp, 0x6df93du); f_0068c3dc();
    /* 006df93d: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 006df941: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 006df943: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
L_006df947:; BB(0x006df947);
    /* 006df947: fld dword ptr [0xa96658] */ FPUSH(R_F32((u32)(0xa96658u)));
L_006df94d:; BB(0x006df94d);
    /* 006df94d: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 006df951: fadd dword ptr [0x96ce74] */ ST(0) = ST(0) + R_F32((u32)(0x96ce74u));
    /* 006df957: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 006df959: fstp dword ptr [0xa96658] */ W_F32((u32)(0xa96658u), ST(0)); FPOP();
    /* 006df95f: call 0x687c48 */ r_esp -= 4; W32(r_esp, 0x6df964u); f_00687c48();
    /* 006df964: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006df966: je 0x6df9a6 */ if (fZ) goto L_006df9a6;
L_006df968:; BB(0x006df968);
    /* 006df968: movsx ecx, word ptr [0xa96660] */ r_ecx = (u32)(i32)(i16)R16((u32)(0xa96660u));
    /* 006df96f: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 006df973: fild dword ptr [esp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_esp+0xcu)));
    /* 006df977: fmul dword ptr [ebp*8 + 0x9cf784] */ ST(0) = ST(0) * R_F32((u32)(r_ebp*8+0x9cf784u));
    /* 006df97e: fnstcw word ptr [esp + 0x14] */ W16((u32)(r_esp+0x14u), fcw);
    /* 006df982: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 006df987: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006df98c: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 006df990: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 006df994: fistp dword ptr [esp + 0x24] */ W32((u32)(r_esp+0x24u), (u32)fx_int32(ST(0))); FPOP();
    /* 006df998: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 006df99c: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 006df9a0: mov word ptr [0xa96660], ax */ W16((u32)(0xa96660u), (u16)r_eax);
L_006df9a6:; BB(0x006df9a6);
    /* 006df9a6: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 006df9aa: call 0x6e06d0 */ r_esp -= 4; W32(r_esp, 0x6df9afu); f_006e06d0();
    /* 006df9af: movsx edx, word ptr [0xa96662] */ r_edx = (u32)(i32)(i16)R16((u32)(0xa96662u));
    /* 006df9b6: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006df9b8: mov eax, edx */ r_eax = r_edx;
    /* 006df9ba: call 0x6e06d0 */ r_esp -= 4; W32(r_esp, 0x6df9bfu); f_006e06d0();
    /* 006df9bf: movzx ebp, word ptr [0xa96678] */ r_ebp = (u32)R16((u32)(0xa96678u));
    /* 006df9c6: imul ebp, ebx */ { i64 t = (i64)(i32)r_ebp * (i64)(i32)r_ebx; r_ebp = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006df9c9: movzx ebx, word ptr [0xa96670] */ r_ebx = (u32)R16((u32)(0xa96670u));
    /* 006df9d0: add word ptr [0xa96664], bp */ { u32 ad = (u32)(0xa96664u);  u32 a = R16(ad); u32 b = (u16)r_ebp; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 006df9d7: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 006df9da: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 006df9df: imul esi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_esi; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006df9e1: sar esi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 006df9e4: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 006df9e7: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006df9e9: lea esi, [edx + edx*4] */ r_esi = (u32)(r_edx+r_edx*4);
    /* 006df9ec: neg esi */ { u32 x = r_esi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 006df9ee: add ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006df9f0: mov edx, dword ptr [0xa96668] */ r_edx = R32((u32)(0xa96668u));
    /* 006df9f6: movsx ebp, bx */ r_ebp = (u32)(i32)(i16)(u16)r_ebx;
    /* 006df9f9: mov word ptr [0xa96670], bp */ W16((u32)(0xa96670u), (u16)r_ebp);
    /* 006dfa00: jmp 0x6e0691 */ goto L_006e0691;
L_006e0691:; BB(0x006e0691);
    /* 006e0691: mov eax, edx */ r_eax = r_edx;
    /* 006e0693: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 006e0696: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006e0698: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 006e069a: mov dword ptr [0xa96668], edx */ W32((u32)(0xa96668u), r_edx);
    /* 006e06a0: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006e06a2: jg 0x6e06af */ if ((!fZ&&fS==fO)) goto L_006e06af;
L_006e06a4:; BB(0x006e06a4);
    /* 006e06a4: mov eax, 0xa */ r_eax = 0xau;
    /* 006e06a9: mov word ptr [0xa96670], ax */ W16((u32)(0xa96670u), (u16)r_eax);
L_006e06af:; BB(0x006e06af);
    /* 006e06af: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006e06b1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006e06b3: mov eax, 0xa96650 */ r_eax = 0xa96650u;
    /* 006e06b8: jg 0x6e06bc */ if ((!fZ&&fS==fO)) goto L_006e06bc;
L_006e06ba:; BB(0x006e06ba);
    /* 006e06ba: mov ecx, edx */ r_ecx = r_edx;
L_006e06bc:; BB(0x006e06bc);
    /* 006e06bc: mov word ptr [0xa96662], cx */ W16((u32)(0xa96662u), (u16)r_ecx);
    /* 006e06c3: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e06c6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006e06c7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e06c8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006e06c9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006e06ca: ret  */ FN_RET(0x006df7e3); r_esp += 4; return;
}

void f_006dfa05(void)
{
    FN_ENTER(0x006dfa05);
    /* 006dfa05: fld dword ptr [0x96ce78] */ FPUSH(R_F32((u32)(0x96ce78u)));
    /* 006dfa0b: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 006dfa0f: movzx eax, di */ r_eax = (u32)(u16)r_edi;
    /* 006dfa12: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006dfa15: jge 0x6dfb3f */ if ((fS==fO)) goto L_006dfb3f;
L_006dfa1b:; BB(0x006dfa1b);
    /* 006dfa1b: lea ecx, [eax + eax*8] */ r_ecx = (u32)(r_eax+r_eax*8);
    /* 006dfa1e: lea edx, [ecx + ecx] */ r_edx = (u32)(r_ecx+r_ecx);
    /* 006dfa21: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006dfa23: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006dfa25: movsx edx, word ptr [edx + 0xa96520] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edx+0xa96520u));
    /* 006dfa2c: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006dfa2f: jne 0x6dfa40 */ if (!fZ) goto L_006dfa40;
L_006dfa31:; BB(0x006dfa31);
    /* 006dfa31: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 006dfa35: fadd dword ptr [ecx*8 + 0xa96524] */ ST(0) = ST(0) + R_F32((u32)(r_ecx*8+0xa96524u));
    /* 006dfa3c: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
L_006dfa40:; BB(0x006dfa40);
    /* 006dfa40: movsx edx, word ptr [ecx*8 + 0xa96528] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx*8+0xa96528u));
    /* 006dfa48: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006dfa4b: jne 0x6dfa5c */ if (!fZ) goto L_006dfa5c;
L_006dfa4d:; BB(0x006dfa4d);
    /* 006dfa4d: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 006dfa51: fadd dword ptr [ecx*8 + 0xa9652c] */ ST(0) = ST(0) + R_F32((u32)(r_ecx*8+0xa9652cu));
    /* 006dfa58: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
L_006dfa5c:; BB(0x006dfa5c);
    /* 006dfa5c: movsx edx, word ptr [ecx*8 + 0xa96530] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx*8+0xa96530u));
    /* 006dfa64: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006dfa67: jne 0x6dfa78 */ if (!fZ) goto L_006dfa78;
L_006dfa69:; BB(0x006dfa69);
    /* 006dfa69: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 006dfa6d: fadd dword ptr [ecx*8 + 0xa96534] */ ST(0) = ST(0) + R_F32((u32)(r_ecx*8+0xa96534u));
    /* 006dfa74: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
L_006dfa78:; BB(0x006dfa78);
    /* 006dfa78: movsx edx, word ptr [ecx*8 + 0xa96538] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx*8+0xa96538u));
    /* 006dfa80: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006dfa83: jne 0x6dfa94 */ if (!fZ) goto L_006dfa94;
L_006dfa85:; BB(0x006dfa85);
    /* 006dfa85: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 006dfa89: fadd dword ptr [ecx*8 + 0xa9653c] */ ST(0) = ST(0) + R_F32((u32)(r_ecx*8+0xa9653cu));
    /* 006dfa90: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
L_006dfa94:; BB(0x006dfa94);
    /* 006dfa94: movsx edx, word ptr [ecx*8 + 0xa96540] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx*8+0xa96540u));
    /* 006dfa9c: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006dfa9f: jne 0x6dfab0 */ if (!fZ) goto L_006dfab0;
L_006dfaa1:; BB(0x006dfaa1);
    /* 006dfaa1: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 006dfaa5: fadd dword ptr [ecx*8 + 0xa96544] */ ST(0) = ST(0) + R_F32((u32)(r_ecx*8+0xa96544u));
    /* 006dfaac: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
L_006dfab0:; BB(0x006dfab0);
    /* 006dfab0: movsx edx, word ptr [ecx*8 + 0xa96548] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx*8+0xa96548u));
    /* 006dfab8: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006dfabb: jne 0x6dfacc */ if (!fZ) goto L_006dfacc;
L_006dfabd:; BB(0x006dfabd);
    /* 006dfabd: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 006dfac1: fadd dword ptr [ecx*8 + 0xa9654c] */ ST(0) = ST(0) + R_F32((u32)(r_ecx*8+0xa9654cu));
    /* 006dfac8: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
L_006dfacc:; BB(0x006dfacc);
    /* 006dfacc: movsx edx, word ptr [ecx*8 + 0xa96550] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx*8+0xa96550u));
    /* 006dfad4: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006dfad7: jne 0x6dfae8 */ if (!fZ) goto L_006dfae8;
L_006dfad9:; BB(0x006dfad9);
    /* 006dfad9: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 006dfadd: fadd dword ptr [ecx*8 + 0xa96554] */ ST(0) = ST(0) + R_F32((u32)(r_ecx*8+0xa96554u));
    /* 006dfae4: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
L_006dfae8:; BB(0x006dfae8);
    /* 006dfae8: movsx edx, word ptr [ecx*8 + 0xa96558] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx*8+0xa96558u));
    /* 006dfaf0: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006dfaf3: jne 0x6dfb04 */ if (!fZ) goto L_006dfb04;
L_006dfaf5:; BB(0x006dfaf5);
    /* 006dfaf5: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 006dfaf9: fadd dword ptr [ecx*8 + 0xa9655c] */ ST(0) = ST(0) + R_F32((u32)(r_ecx*8+0xa9655cu));
    /* 006dfb00: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
L_006dfb04:; BB(0x006dfb04);
    /* 006dfb04: movsx edx, word ptr [ecx*8 + 0xa96560] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx*8+0xa96560u));
    /* 006dfb0c: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006dfb0f: jne 0x6dfb20 */ if (!fZ) goto L_006dfb20;
L_006dfb11:; BB(0x006dfb11);
    /* 006dfb11: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 006dfb15: fadd dword ptr [ecx*8 + 0xa96564] */ ST(0) = ST(0) + R_F32((u32)(r_ecx*8+0xa96564u));
    /* 006dfb1c: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
L_006dfb20:; BB(0x006dfb20);
    /* 006dfb20: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006dfb21: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6dfb26u); f_0068d5a8();
    /* 006dfb26: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006dfb27: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006dfb29: je 0x6dfb3f */ if (fZ) goto L_006dfb3f;
L_006dfb2b:; BB(0x006dfb2b);
    /* 006dfb2b: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 006dfb2d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006dfb2e: mov ecx, eax */ r_ecx = r_eax;
    /* 006dfb30: call 0x68c3dc */ r_esp -= 4; W32(r_esp, 0x6dfb35u); f_0068c3dc();
    /* 006dfb35: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 006dfb39: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 006dfb3b: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
L_006dfb3f:; BB(0x006dfb3f);
    /* 006dfb3f: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 006dfb43: fadd dword ptr [0x96ce74] */ ST(0) = ST(0) + R_F32((u32)(0x96ce74u));
    /* 006dfb49: fmul dword ptr [0xa96658] */ ST(0) = ST(0) * R_F32((u32)(0xa96658u));
    /* 006dfb4f: fstp dword ptr [0xa96658] */ W_F32((u32)(0xa96658u), ST(0)); FPOP();
    /* 006dfb55: call 0x687c48 */ r_esp -= 4; W32(r_esp, 0x6dfb5au); f_00687c48();
    /* 006dfb5a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006dfb5c: je 0x6dfb9c */ if (fZ) goto L_006dfb9c;
L_006dfb5e:; BB(0x006dfb5e);
    /* 006dfb5e: movsx ecx, word ptr [0xa96660] */ r_ecx = (u32)(i32)(i16)R16((u32)(0xa96660u));
    /* 006dfb65: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 006dfb69: fild dword ptr [esp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_esp+0xcu)));
    /* 006dfb6d: fmul dword ptr [ebp*8 + 0x9cf784] */ ST(0) = ST(0) * R_F32((u32)(r_ebp*8+0x9cf784u));
    /* 006dfb74: fnstcw word ptr [esp + 0x14] */ W16((u32)(r_esp+0x14u), fcw);
    /* 006dfb78: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 006dfb7d: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006dfb82: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 006dfb86: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 006dfb8a: fistp dword ptr [esp + 0x24] */ W32((u32)(r_esp+0x24u), (u32)fx_int32(ST(0))); FPOP();
    /* 006dfb8e: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 006dfb92: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 006dfb96: mov word ptr [0xa96660], ax */ W16((u32)(0xa96660u), (u16)r_eax);
L_006dfb9c:; BB(0x006dfb9c);
    /* 006dfb9c: lea eax, [ebx - 4] */ r_eax = (u32)(r_ebx+0xfffffffcu);
    /* 006dfb9f: call 0x6e06d0 */ r_esp -= 4; W32(r_esp, 0x6dfba4u); f_006e06d0();
    /* 006dfba4: movsx edx, word ptr [0xa96662] */ r_edx = (u32)(i32)(i16)R16((u32)(0xa96662u));
    /* 006dfbab: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006dfbad: mov eax, edx */ r_eax = r_edx;
    /* 006dfbaf: call 0x6e06d0 */ r_esp -= 4; W32(r_esp, 0x6dfbb4u); f_006e06d0();
    /* 006dfbb4: movzx edi, word ptr [0xa96678] */ r_edi = (u32)R16((u32)(0xa96678u));
    /* 006dfbbb: imul edi, ebx */ { i64 t = (i64)(i32)r_edi * (i64)(i32)r_ebx; r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006dfbbe: movzx ebp, word ptr [0xa96670] */ r_ebp = (u32)R16((u32)(0xa96670u));
    /* 006dfbc5: add word ptr [0xa96664], di */ { u32 ad = (u32)(0xa96664u);  u32 a = R16(ad); u32 b = (u16)r_edi; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 006dfbcc: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 006dfbcf: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 006dfbd4: imul esi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_esi; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006dfbd6: sar esi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 006dfbd9: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 006dfbdb: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006dfbdd: lea esi, [edx + edx*4] */ r_esi = (u32)(r_edx+r_edx*4);
    /* 006dfbe0: neg esi */ { u32 x = r_esi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 006dfbe2: add ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 006dfbe4: movsx ebp, bp */ r_ebp = (u32)(i32)(i16)(u16)r_ebp;
    /* 006dfbe7: mov word ptr [0xa96670], bp */ W16((u32)(0xa96670u), (u16)r_ebp);
    /* 006dfbee: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006dfbf1: jge 0x6dfc05 */ if ((fS==fO)) goto L_006dfc05;
L_006dfbf3:; BB(0x006dfbf3);
    /* 006dfbf3: mov edx, dword ptr [0xa96668] */ r_edx = R32((u32)(0xa96668u));
    /* 006dfbf9: mov byte ptr [0xa96672], 0 */ W8((u32)(0xa96672u), 0x0u);
    /* 006dfc00: jmp 0x6e0691 */ goto L_006e0691;
L_006dfc05:; BB(0x006dfc05);
    /* 006dfc05: mov edx, dword ptr [0xa96668] */ r_edx = R32((u32)(0xa96668u));
    /* 006dfc0b: jmp 0x6e0691 */ goto L_006e0691;
L_006e0691:; BB(0x006e0691);
    /* 006e0691: mov eax, edx */ r_eax = r_edx;
    /* 006e0693: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 006e0696: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006e0698: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 006e069a: mov dword ptr [0xa96668], edx */ W32((u32)(0xa96668u), r_edx);
    /* 006e06a0: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006e06a2: jg 0x6e06af */ if ((!fZ&&fS==fO)) goto L_006e06af;
L_006e06a4:; BB(0x006e06a4);
    /* 006e06a4: mov eax, 0xa */ r_eax = 0xau;
    /* 006e06a9: mov word ptr [0xa96670], ax */ W16((u32)(0xa96670u), (u16)r_eax);
L_006e06af:; BB(0x006e06af);
    /* 006e06af: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006e06b1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006e06b3: mov eax, 0xa96650 */ r_eax = 0xa96650u;
    /* 006e06b8: jg 0x6e06bc */ if ((!fZ&&fS==fO)) goto L_006e06bc;
L_006e06ba:; BB(0x006e06ba);
    /* 006e06ba: mov ecx, edx */ r_ecx = r_edx;
L_006e06bc:; BB(0x006e06bc);
    /* 006e06bc: mov word ptr [0xa96662], cx */ W16((u32)(0xa96662u), (u16)r_ecx);
    /* 006e06c3: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e06c6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006e06c7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e06c8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006e06c9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006e06ca: ret  */ FN_RET(0x006dfa05); r_esp += 4; return;
}

void f_006dfc10(void)
{
    FN_ENTER(0x006dfc10);
    /* 006dfc10: fld dword ptr [0x96ce78] */ FPUSH(R_F32((u32)(0x96ce78u)));
    /* 006dfc16: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 006dfc1a: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 006dfc1f: imul ebx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006dfc21: mov eax, ebx */ r_eax = r_ebx;
    /* 006dfc23: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 006dfc26: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 006dfc28: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006dfc2a: movsx eax, word ptr [0xa96676] */ r_eax = (u32)(i32)(i16)R16((u32)(0xa96676u));
    /* 006dfc31: imul eax, edx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_edx; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006dfc34: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 006dfc38: fild dword ptr [esp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_esp+0xcu)));
    /* 006dfc3c: movzx eax, di */ r_eax = (u32)(u16)r_edi;
    /* 006dfc3f: fadd dword ptr [0xa96658] */ ST(0) = ST(0) + R_F32((u32)(0xa96658u));
    /* 006dfc45: fstp dword ptr [0xa96658] */ W_F32((u32)(0xa96658u), ST(0)); FPOP();
    /* 006dfc4b: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006dfc4e: jge 0x6dfd78 */ if ((fS==fO)) goto L_006dfd78;
L_006dfc54:; BB(0x006dfc54);
    /* 006dfc54: lea ecx, [eax + eax*8] */ r_ecx = (u32)(r_eax+r_eax*8);
    /* 006dfc57: lea edx, [ecx + ecx] */ r_edx = (u32)(r_ecx+r_ecx);
    /* 006dfc5a: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006dfc5c: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006dfc5e: movsx edx, word ptr [edx + 0xa96520] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edx+0xa96520u));
    /* 006dfc65: cmp edx, 9 */ {  u32 a = r_edx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006dfc68: jne 0x6dfc79 */ if (!fZ) goto L_006dfc79;
L_006dfc6a:; BB(0x006dfc6a);
    /* 006dfc6a: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 006dfc6e: fadd dword ptr [ecx*8 + 0xa96524] */ ST(0) = ST(0) + R_F32((u32)(r_ecx*8+0xa96524u));
    /* 006dfc75: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
L_006dfc79:; BB(0x006dfc79);
    /* 006dfc79: movsx edx, word ptr [ecx*8 + 0xa96528] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx*8+0xa96528u));
    /* 006dfc81: cmp edx, 9 */ {  u32 a = r_edx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006dfc84: jne 0x6dfc95 */ if (!fZ) goto L_006dfc95;
L_006dfc86:; BB(0x006dfc86);
    /* 006dfc86: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 006dfc8a: fadd dword ptr [ecx*8 + 0xa9652c] */ ST(0) = ST(0) + R_F32((u32)(r_ecx*8+0xa9652cu));
    /* 006dfc91: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
L_006dfc95:; BB(0x006dfc95);
    /* 006dfc95: movsx edx, word ptr [ecx*8 + 0xa96530] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx*8+0xa96530u));
    /* 006dfc9d: cmp edx, 9 */ {  u32 a = r_edx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006dfca0: jne 0x6dfcb1 */ if (!fZ) goto L_006dfcb1;
L_006dfca2:; BB(0x006dfca2);
    /* 006dfca2: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 006dfca6: fadd dword ptr [ecx*8 + 0xa96534] */ ST(0) = ST(0) + R_F32((u32)(r_ecx*8+0xa96534u));
    /* 006dfcad: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
L_006dfcb1:; BB(0x006dfcb1);
    /* 006dfcb1: movsx edx, word ptr [ecx*8 + 0xa96538] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx*8+0xa96538u));
    /* 006dfcb9: cmp edx, 9 */ {  u32 a = r_edx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006dfcbc: jne 0x6dfccd */ if (!fZ) goto L_006dfccd;
L_006dfcbe:; BB(0x006dfcbe);
    /* 006dfcbe: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 006dfcc2: fadd dword ptr [ecx*8 + 0xa9653c] */ ST(0) = ST(0) + R_F32((u32)(r_ecx*8+0xa9653cu));
    /* 006dfcc9: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
L_006dfccd:; BB(0x006dfccd);
    /* 006dfccd: movsx edx, word ptr [ecx*8 + 0xa96540] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx*8+0xa96540u));
    /* 006dfcd5: cmp edx, 9 */ {  u32 a = r_edx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006dfcd8: jne 0x6dfce9 */ if (!fZ) goto L_006dfce9;
L_006dfcda:; BB(0x006dfcda);
    /* 006dfcda: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 006dfcde: fadd dword ptr [ecx*8 + 0xa96544] */ ST(0) = ST(0) + R_F32((u32)(r_ecx*8+0xa96544u));
    /* 006dfce5: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
L_006dfce9:; BB(0x006dfce9);
    /* 006dfce9: movsx edx, word ptr [ecx*8 + 0xa96548] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx*8+0xa96548u));
    /* 006dfcf1: cmp edx, 9 */ {  u32 a = r_edx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006dfcf4: jne 0x6dfd05 */ if (!fZ) goto L_006dfd05;
L_006dfcf6:; BB(0x006dfcf6);
    /* 006dfcf6: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 006dfcfa: fadd dword ptr [ecx*8 + 0xa9654c] */ ST(0) = ST(0) + R_F32((u32)(r_ecx*8+0xa9654cu));
    /* 006dfd01: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
L_006dfd05:; BB(0x006dfd05);
    /* 006dfd05: movsx edx, word ptr [ecx*8 + 0xa96550] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx*8+0xa96550u));
    /* 006dfd0d: cmp edx, 9 */ {  u32 a = r_edx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006dfd10: jne 0x6dfd21 */ if (!fZ) goto L_006dfd21;
L_006dfd12:; BB(0x006dfd12);
    /* 006dfd12: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 006dfd16: fadd dword ptr [ecx*8 + 0xa96554] */ ST(0) = ST(0) + R_F32((u32)(r_ecx*8+0xa96554u));
    /* 006dfd1d: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
L_006dfd21:; BB(0x006dfd21);
    /* 006dfd21: movsx edx, word ptr [ecx*8 + 0xa96558] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx*8+0xa96558u));
    /* 006dfd29: cmp edx, 9 */ {  u32 a = r_edx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006dfd2c: jne 0x6dfd3d */ if (!fZ) goto L_006dfd3d;
L_006dfd2e:; BB(0x006dfd2e);
    /* 006dfd2e: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 006dfd32: fadd dword ptr [ecx*8 + 0xa9655c] */ ST(0) = ST(0) + R_F32((u32)(r_ecx*8+0xa9655cu));
    /* 006dfd39: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
L_006dfd3d:; BB(0x006dfd3d);
    /* 006dfd3d: movsx edx, word ptr [ecx*8 + 0xa96560] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx*8+0xa96560u));
    /* 006dfd45: cmp edx, 9 */ {  u32 a = r_edx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006dfd48: jne 0x6dfd59 */ if (!fZ) goto L_006dfd59;
L_006dfd4a:; BB(0x006dfd4a);
    /* 006dfd4a: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 006dfd4e: fadd dword ptr [ecx*8 + 0xa96564] */ ST(0) = ST(0) + R_F32((u32)(r_ecx*8+0xa96564u));
    /* 006dfd55: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
L_006dfd59:; BB(0x006dfd59);
    /* 006dfd59: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006dfd5a: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6dfd5fu); f_0068d5a8();
    /* 006dfd5f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006dfd60: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006dfd62: je 0x6dfd78 */ if (fZ) goto L_006dfd78;
L_006dfd64:; BB(0x006dfd64);
    /* 006dfd64: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 006dfd66: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006dfd67: mov ecx, eax */ r_ecx = r_eax;
    /* 006dfd69: call 0x68c3dc */ r_esp -= 4; W32(r_esp, 0x6dfd6eu); f_0068c3dc();
    /* 006dfd6e: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 006dfd72: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 006dfd74: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
L_006dfd78:; BB(0x006dfd78);
    /* 006dfd78: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 006dfd7c: fadd dword ptr [0x96ce74] */ ST(0) = ST(0) + R_F32((u32)(0x96ce74u));
    /* 006dfd82: fmul dword ptr [0xa96650] */ ST(0) = ST(0) * R_F32((u32)(0xa96650u));
    /* 006dfd88: fstp dword ptr [0xa96650] */ W_F32((u32)(0xa96650u), ST(0)); FPOP();
    /* 006dfd8e: call 0x687c48 */ r_esp -= 4; W32(r_esp, 0x6dfd93u); f_00687c48();
    /* 006dfd93: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006dfd95: je 0x6dfdd5 */ if (fZ) goto L_006dfdd5;
L_006dfd97:; BB(0x006dfd97);
    /* 006dfd97: movsx ecx, word ptr [0xa96660] */ r_ecx = (u32)(i32)(i16)R16((u32)(0xa96660u));
    /* 006dfd9e: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 006dfda2: fild dword ptr [esp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_esp+0xcu)));
    /* 006dfda6: fmul dword ptr [ebp*8 + 0x9cf784] */ ST(0) = ST(0) * R_F32((u32)(r_ebp*8+0x9cf784u));
    /* 006dfdad: fnstcw word ptr [esp + 0x14] */ W16((u32)(r_esp+0x14u), fcw);
    /* 006dfdb1: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 006dfdb6: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006dfdbb: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 006dfdbf: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 006dfdc3: fistp dword ptr [esp + 0x24] */ W32((u32)(r_esp+0x24u), (u32)fx_int32(ST(0))); FPOP();
    /* 006dfdc7: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 006dfdcb: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 006dfdcf: mov word ptr [0xa96660], ax */ W16((u32)(0xa96660u), (u16)r_eax);
L_006dfdd5:; BB(0x006dfdd5);
    /* 006dfdd5: lea eax, [ebx - 4] */ r_eax = (u32)(r_ebx+0xfffffffcu);
    /* 006dfdd8: call 0x6e06d0 */ r_esp -= 4; W32(r_esp, 0x6dfdddu); f_006e06d0();
    /* 006dfddd: movsx edx, word ptr [0xa96662] */ r_edx = (u32)(i32)(i16)R16((u32)(0xa96662u));
    /* 006dfde4: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006dfde6: mov eax, edx */ r_eax = r_edx;
    /* 006dfde8: call 0x6e06d0 */ r_esp -= 4; W32(r_esp, 0x6dfdedu); f_006e06d0();
    /* 006dfded: movzx ebp, word ptr [0xa96678] */ r_ebp = (u32)R16((u32)(0xa96678u));
    /* 006dfdf4: imul ebp, ebx */ { i64 t = (i64)(i32)r_ebp * (i64)(i32)r_ebx; r_ebp = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006dfdf7: movzx ebx, word ptr [0xa96670] */ r_ebx = (u32)R16((u32)(0xa96670u));
    /* 006dfdfe: add word ptr [0xa96664], bp */ { u32 ad = (u32)(0xa96664u);  u32 a = R16(ad); u32 b = (u16)r_ebp; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 006dfe05: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 006dfe08: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 006dfe0d: imul esi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_esi; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006dfe0f: sar esi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 006dfe12: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 006dfe14: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006dfe16: lea esi, [edx + edx*4] */ r_esi = (u32)(r_edx+r_edx*4);
    /* 006dfe19: neg esi */ { u32 x = r_esi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 006dfe1b: add ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006dfe1d: mov edx, dword ptr [0xa96668] */ r_edx = R32((u32)(0xa96668u));
    /* 006dfe23: movsx ebp, bx */ r_ebp = (u32)(i32)(i16)(u16)r_ebx;
    /* 006dfe26: mov word ptr [0xa96670], bp */ W16((u32)(0xa96670u), (u16)r_ebp);
    /* 006dfe2d: jmp 0x6e0691 */ goto L_006e0691;
L_006e0691:; BB(0x006e0691);
    /* 006e0691: mov eax, edx */ r_eax = r_edx;
    /* 006e0693: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 006e0696: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006e0698: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 006e069a: mov dword ptr [0xa96668], edx */ W32((u32)(0xa96668u), r_edx);
    /* 006e06a0: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006e06a2: jg 0x6e06af */ if ((!fZ&&fS==fO)) goto L_006e06af;
L_006e06a4:; BB(0x006e06a4);
    /* 006e06a4: mov eax, 0xa */ r_eax = 0xau;
    /* 006e06a9: mov word ptr [0xa96670], ax */ W16((u32)(0xa96670u), (u16)r_eax);
L_006e06af:; BB(0x006e06af);
    /* 006e06af: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006e06b1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006e06b3: mov eax, 0xa96650 */ r_eax = 0xa96650u;
    /* 006e06b8: jg 0x6e06bc */ if ((!fZ&&fS==fO)) goto L_006e06bc;
L_006e06ba:; BB(0x006e06ba);
    /* 006e06ba: mov ecx, edx */ r_ecx = r_edx;
L_006e06bc:; BB(0x006e06bc);
    /* 006e06bc: mov word ptr [0xa96662], cx */ W16((u32)(0xa96662u), (u16)r_ecx);
    /* 006e06c3: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e06c6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006e06c7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e06c8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006e06c9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006e06ca: ret  */ FN_RET(0x006dfc10); r_esp += 4; return;
}

void f_006dfe32(void)
{
    FN_ENTER(0x006dfe32);
    /* 006dfe32: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 006dfe37: imul ebx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006dfe39: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006dfe3b: movsx edi, word ptr [0xa96676] */ r_edi = (u32)(i32)(i16)R16((u32)(0xa96676u));
    /* 006dfe42: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 006dfe44: sar ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 006dfe47: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006dfe49: imul edi, edx */ { i64 t = (i64)(i32)r_edi * (i64)(i32)r_edx; r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006dfe4c: mov dword ptr [esp + 0xc], edi */ W32((u32)(r_esp+0xcu), r_edi);
    /* 006dfe50: fild dword ptr [esp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_esp+0xcu)));
    /* 006dfe54: fadd dword ptr [0xa96658] */ ST(0) = ST(0) + R_F32((u32)(0xa96658u));
    /* 006dfe5a: fstp dword ptr [0xa96658] */ W_F32((u32)(0xa96658u), ST(0)); FPOP();
    /* 006dfe60: call 0x687c48 */ r_esp -= 4; W32(r_esp, 0x6dfe65u); f_00687c48();
    /* 006dfe65: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006dfe67: je 0x6dfea7 */ if (fZ) goto L_006dfea7;
L_006dfe69:; BB(0x006dfe69);
    /* 006dfe69: movsx ecx, word ptr [0xa96660] */ r_ecx = (u32)(i32)(i16)R16((u32)(0xa96660u));
    /* 006dfe70: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 006dfe74: fild dword ptr [esp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_esp+0xcu)));
    /* 006dfe78: fmul dword ptr [ebp*8 + 0x9cf784] */ ST(0) = ST(0) * R_F32((u32)(r_ebp*8+0x9cf784u));
    /* 006dfe7f: fnstcw word ptr [esp + 0x14] */ W16((u32)(r_esp+0x14u), fcw);
    /* 006dfe83: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 006dfe88: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006dfe8d: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 006dfe91: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 006dfe95: fistp dword ptr [esp + 0x24] */ W32((u32)(r_esp+0x24u), (u32)fx_int32(ST(0))); FPOP();
    /* 006dfe99: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 006dfe9d: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 006dfea1: mov word ptr [0xa96660], ax */ W16((u32)(0xa96660u), (u16)r_eax);
L_006dfea7:; BB(0x006dfea7);
    /* 006dfea7: lea eax, [ebx - 4] */ r_eax = (u32)(r_ebx+0xfffffffcu);
    /* 006dfeaa: call 0x6e06d0 */ r_esp -= 4; W32(r_esp, 0x6dfeafu); f_006e06d0();
    /* 006dfeaf: movsx edx, word ptr [0xa96662] */ r_edx = (u32)(i32)(i16)R16((u32)(0xa96662u));
    /* 006dfeb6: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006dfeb8: mov eax, edx */ r_eax = r_edx;
    /* 006dfeba: call 0x6e06d0 */ r_esp -= 4; W32(r_esp, 0x6dfebfu); f_006e06d0();
    /* 006dfebf: movzx ebp, word ptr [0xa96678] */ r_ebp = (u32)R16((u32)(0xa96678u));
    /* 006dfec6: imul ebp, ebx */ { i64 t = (i64)(i32)r_ebp * (i64)(i32)r_ebx; r_ebp = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006dfec9: movzx ebx, word ptr [0xa96670] */ r_ebx = (u32)R16((u32)(0xa96670u));
    /* 006dfed0: add word ptr [0xa96664], bp */ { u32 ad = (u32)(0xa96664u);  u32 a = R16(ad); u32 b = (u16)r_ebp; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 006dfed7: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 006dfeda: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 006dfedf: imul esi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_esi; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006dfee1: sar esi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 006dfee4: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 006dfee6: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006dfee8: lea esi, [edx + edx*4] */ r_esi = (u32)(r_edx+r_edx*4);
    /* 006dfeeb: neg esi */ { u32 x = r_esi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 006dfeed: add ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006dfeef: mov edx, dword ptr [0xa96668] */ r_edx = R32((u32)(0xa96668u));
    /* 006dfef5: movsx ebp, bx */ r_ebp = (u32)(i32)(i16)(u16)r_ebx;
    /* 006dfef8: mov word ptr [0xa96670], bp */ W16((u32)(0xa96670u), (u16)r_ebp);
    /* 006dfeff: jmp 0x6e0691 */ goto L_006e0691;
L_006e0691:; BB(0x006e0691);
    /* 006e0691: mov eax, edx */ r_eax = r_edx;
    /* 006e0693: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 006e0696: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006e0698: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 006e069a: mov dword ptr [0xa96668], edx */ W32((u32)(0xa96668u), r_edx);
    /* 006e06a0: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006e06a2: jg 0x6e06af */ if ((!fZ&&fS==fO)) goto L_006e06af;
L_006e06a4:; BB(0x006e06a4);
    /* 006e06a4: mov eax, 0xa */ r_eax = 0xau;
    /* 006e06a9: mov word ptr [0xa96670], ax */ W16((u32)(0xa96670u), (u16)r_eax);
L_006e06af:; BB(0x006e06af);
    /* 006e06af: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006e06b1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006e06b3: mov eax, 0xa96650 */ r_eax = 0xa96650u;
    /* 006e06b8: jg 0x6e06bc */ if ((!fZ&&fS==fO)) goto L_006e06bc;
L_006e06ba:; BB(0x006e06ba);
    /* 006e06ba: mov ecx, edx */ r_ecx = r_edx;
L_006e06bc:; BB(0x006e06bc);
    /* 006e06bc: mov word ptr [0xa96662], cx */ W16((u32)(0xa96662u), (u16)r_ecx);
    /* 006e06c3: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e06c6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006e06c7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e06c8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006e06c9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006e06ca: ret  */ FN_RET(0x006dfe32); r_esp += 4; return;
}

void f_006dff04(void)
{
    FN_ENTER(0x006dff04);
    /* 006dff04: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 006dff09: imul ebx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006dff0b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006dff0d: movsx edi, word ptr [0xa96676] */ r_edi = (u32)(i32)(i16)R16((u32)(0xa96676u));
    /* 006dff14: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 006dff16: sar ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 006dff19: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006dff1b: imul edi, edx */ { i64 t = (i64)(i32)r_edi * (i64)(i32)r_edx; r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006dff1e: mov dword ptr [esp + 0xc], edi */ W32((u32)(r_esp+0xcu), r_edi);
    /* 006dff22: fild dword ptr [esp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_esp+0xcu)));
    /* 006dff26: fadd dword ptr [0xa96658] */ ST(0) = ST(0) + R_F32((u32)(0xa96658u));
    /* 006dff2c: fstp dword ptr [0xa96658] */ W_F32((u32)(0xa96658u), ST(0)); FPOP();
    /* 006dff32: call 0x687c48 */ r_esp -= 4; W32(r_esp, 0x6dff37u); f_00687c48();
    /* 006dff37: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006dff39: je 0x6dff79 */ if (fZ) goto L_006dff79;
L_006dff3b:; BB(0x006dff3b);
    /* 006dff3b: movsx ecx, word ptr [0xa96660] */ r_ecx = (u32)(i32)(i16)R16((u32)(0xa96660u));
    /* 006dff42: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 006dff46: fild dword ptr [esp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_esp+0xcu)));
    /* 006dff4a: fmul dword ptr [ebp*8 + 0x9cf784] */ ST(0) = ST(0) * R_F32((u32)(r_ebp*8+0x9cf784u));
    /* 006dff51: fnstcw word ptr [esp + 0x14] */ W16((u32)(r_esp+0x14u), fcw);
    /* 006dff55: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 006dff5a: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006dff5f: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 006dff63: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 006dff67: fistp dword ptr [esp + 0x24] */ W32((u32)(r_esp+0x24u), (u32)fx_int32(ST(0))); FPOP();
    /* 006dff6b: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 006dff6f: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 006dff73: mov word ptr [0xa96660], ax */ W16((u32)(0xa96660u), (u16)r_eax);
L_006dff79:; BB(0x006dff79);
    /* 006dff79: lea eax, [ebx - 4] */ r_eax = (u32)(r_ebx+0xfffffffcu);
    /* 006dff7c: call 0x6e06d0 */ r_esp -= 4; W32(r_esp, 0x6dff81u); f_006e06d0();
    /* 006dff81: movsx edx, word ptr [0xa96662] */ r_edx = (u32)(i32)(i16)R16((u32)(0xa96662u));
    /* 006dff88: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006dff8a: mov eax, edx */ r_eax = r_edx;
    /* 006dff8c: call 0x6e06d0 */ r_esp -= 4; W32(r_esp, 0x6dff91u); f_006e06d0();
    /* 006dff91: movzx ebp, word ptr [0xa96678] */ r_ebp = (u32)R16((u32)(0xa96678u));
    /* 006dff98: imul ebp, ebx */ { i64 t = (i64)(i32)r_ebp * (i64)(i32)r_ebx; r_ebp = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006dff9b: movzx ebx, word ptr [0xa96670] */ r_ebx = (u32)R16((u32)(0xa96670u));
    /* 006dffa2: add word ptr [0xa96664], bp */ { u32 ad = (u32)(0xa96664u);  u32 a = R16(ad); u32 b = (u16)r_ebp; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 006dffa9: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 006dffac: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 006dffb1: imul esi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_esi; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006dffb3: sar esi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 006dffb6: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 006dffb8: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006dffba: lea esi, [edx + edx*4] */ r_esi = (u32)(r_edx+r_edx*4);
    /* 006dffbd: neg esi */ { u32 x = r_esi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 006dffbf: add ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006dffc1: mov edx, dword ptr [0xa96668] */ r_edx = R32((u32)(0xa96668u));
    /* 006dffc7: movsx ebp, bx */ r_ebp = (u32)(i32)(i16)(u16)r_ebx;
    /* 006dffca: mov word ptr [0xa96670], bp */ W16((u32)(0xa96670u), (u16)r_ebp);
    /* 006dffd1: jmp 0x6e0691 */ goto L_006e0691;
L_006e0691:; BB(0x006e0691);
    /* 006e0691: mov eax, edx */ r_eax = r_edx;
    /* 006e0693: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 006e0696: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006e0698: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 006e069a: mov dword ptr [0xa96668], edx */ W32((u32)(0xa96668u), r_edx);
    /* 006e06a0: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006e06a2: jg 0x6e06af */ if ((!fZ&&fS==fO)) goto L_006e06af;
L_006e06a4:; BB(0x006e06a4);
    /* 006e06a4: mov eax, 0xa */ r_eax = 0xau;
    /* 006e06a9: mov word ptr [0xa96670], ax */ W16((u32)(0xa96670u), (u16)r_eax);
L_006e06af:; BB(0x006e06af);
    /* 006e06af: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006e06b1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006e06b3: mov eax, 0xa96650 */ r_eax = 0xa96650u;
    /* 006e06b8: jg 0x6e06bc */ if ((!fZ&&fS==fO)) goto L_006e06bc;
L_006e06ba:; BB(0x006e06ba);
    /* 006e06ba: mov ecx, edx */ r_ecx = r_edx;
L_006e06bc:; BB(0x006e06bc);
    /* 006e06bc: mov word ptr [0xa96662], cx */ W16((u32)(0xa96662u), (u16)r_ecx);
    /* 006e06c3: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e06c6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006e06c7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e06c8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006e06c9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006e06ca: ret  */ FN_RET(0x006dff04); r_esp += 4; return;
}

void f_006dffd6(void)
{
    FN_ENTER(0x006dffd6);
    /* 006dffd6: lea edi, [ebx - 4] */ r_edi = (u32)(r_ebx+0xfffffffcu);
    /* 006dffd9: mov eax, edi */ r_eax = r_edi;
    /* 006dffdb: call 0x6e06d0 */ r_esp -= 4; W32(r_esp, 0x6dffe0u); f_006e06d0();
    /* 006dffe0: movsx ecx, word ptr [0xa96676] */ r_ecx = (u32)(i32)(i16)R16((u32)(0xa96676u));
    /* 006dffe7: imul ecx, eax */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)r_eax; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006dffea: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 006dffee: fild dword ptr [esp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_esp+0xcu)));
    /* 006dfff2: fadd dword ptr [0xa96658] */ ST(0) = ST(0) + R_F32((u32)(0xa96658u));
    /* 006dfff8: fstp dword ptr [0xa96658] */ W_F32((u32)(0xa96658u), ST(0)); FPOP();
    /* 006dfffe: call 0x687c48 */ r_esp -= 4; W32(r_esp, 0x6e0003u); f_00687c48();
    /* 006e0003: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e0005: je 0x6e0046 */ if (fZ) goto L_006e0046;
L_006e0007:; BB(0x006e0007);
    /* 006e0007: movsx ecx, word ptr [0xa96660] */ r_ecx = (u32)(i32)(i16)R16((u32)(0xa96660u));
    /* 006e000e: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 006e0012: fild dword ptr [esp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_esp+0xcu)));
    /* 006e0016: fmul dword ptr [ebp*8 + 0x9cf784] */ ST(0) = ST(0) * R_F32((u32)(r_ebp*8+0x9cf784u));
    /* 006e001d: fnstcw word ptr [esp + 0x14] */ W16((u32)(r_esp+0x14u), fcw);
    /* 006e0021: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 006e0026: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006e002b: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 006e002f: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 006e0033: fistp dword ptr [esp + 0x24] */ W32((u32)(r_esp+0x24u), (u32)fx_int32(ST(0))); FPOP();
    /* 006e0037: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 006e003b: mov ebp, dword ptr [esp + 0x24] */ r_ebp = R32((u32)(r_esp+0x24u));
    /* 006e003f: mov word ptr [0xa96660], bp */ W16((u32)(0xa96660u), (u16)r_ebp);
L_006e0046:; BB(0x006e0046);
    /* 006e0046: mov eax, edi */ r_eax = r_edi;
    /* 006e0048: call 0x6e06d0 */ r_esp -= 4; W32(r_esp, 0x6e004du); f_006e06d0();
    /* 006e004d: movsx edx, word ptr [0xa96662] */ r_edx = (u32)(i32)(i16)R16((u32)(0xa96662u));
    /* 006e0054: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006e0056: mov eax, edx */ r_eax = r_edx;
    /* 006e0058: call 0x6e06d0 */ r_esp -= 4; W32(r_esp, 0x6e005du); f_006e06d0();
    /* 006e005d: movzx ebp, word ptr [0xa96678] */ r_ebp = (u32)R16((u32)(0xa96678u));
    /* 006e0064: imul ebp, ebx */ { i64 t = (i64)(i32)r_ebp * (i64)(i32)r_ebx; r_ebp = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006e0067: movzx ebx, word ptr [0xa96670] */ r_ebx = (u32)R16((u32)(0xa96670u));
    /* 006e006e: add word ptr [0xa96664], bp */ { u32 ad = (u32)(0xa96664u);  u32 a = R16(ad); u32 b = (u16)r_ebp; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 006e0075: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 006e0078: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 006e007d: imul esi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_esi; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006e007f: sar esi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 006e0082: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 006e0085: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006e0087: lea esi, [edx + edx*4] */ r_esi = (u32)(r_edx+r_edx*4);
    /* 006e008a: neg esi */ { u32 x = r_esi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 006e008c: add ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006e008e: mov edx, dword ptr [0xa96668] */ r_edx = R32((u32)(0xa96668u));
    /* 006e0094: movsx ebp, bx */ r_ebp = (u32)(i32)(i16)(u16)r_ebx;
    /* 006e0097: mov word ptr [0xa96670], bp */ W16((u32)(0xa96670u), (u16)r_ebp);
    /* 006e009e: jmp 0x6e0691 */ goto L_006e0691;
L_006e0691:; BB(0x006e0691);
    /* 006e0691: mov eax, edx */ r_eax = r_edx;
    /* 006e0693: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 006e0696: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006e0698: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 006e069a: mov dword ptr [0xa96668], edx */ W32((u32)(0xa96668u), r_edx);
    /* 006e06a0: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006e06a2: jg 0x6e06af */ if ((!fZ&&fS==fO)) goto L_006e06af;
L_006e06a4:; BB(0x006e06a4);
    /* 006e06a4: mov eax, 0xa */ r_eax = 0xau;
    /* 006e06a9: mov word ptr [0xa96670], ax */ W16((u32)(0xa96670u), (u16)r_eax);
L_006e06af:; BB(0x006e06af);
    /* 006e06af: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006e06b1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006e06b3: mov eax, 0xa96650 */ r_eax = 0xa96650u;
    /* 006e06b8: jg 0x6e06bc */ if ((!fZ&&fS==fO)) goto L_006e06bc;
L_006e06ba:; BB(0x006e06ba);
    /* 006e06ba: mov ecx, edx */ r_ecx = r_edx;
L_006e06bc:; BB(0x006e06bc);
    /* 006e06bc: mov word ptr [0xa96662], cx */ W16((u32)(0xa96662u), (u16)r_ecx);
    /* 006e06c3: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e06c6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006e06c7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e06c8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006e06c9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006e06ca: ret  */ FN_RET(0x006dffd6); r_esp += 4; return;
}

