#include "protos.h"

void f_005ab164(void) /* sub_5AB164 */
{
    FN_ENTER(0x005ab164);
    /* 005ab164: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005ab165: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ab166: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005ab167: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ab16a: mov edi, ecx */ r_edi = r_ecx;
    /* 005ab16c: push dword ptr [edi + 0xc0] */ { u32 v = R32((u32)(r_edi+0xc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 005ab172: mov ecx, dword ptr [0xa7486c] */ r_ecx = R32((u32)(0xa7486cu));
    /* 005ab178: call 0x579de0 */ r_esp -= 4; W32(r_esp, 0x5ab17du); f_00579de0();
    /* 005ab17d: mov ebp, eax */ r_ebp = r_eax;
    /* 005ab17f: push dword ptr [edi + 0xc0] */ { u32 v = R32((u32)(r_edi+0xc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 005ab185: mov ecx, dword ptr [0xa74870] */ r_ecx = R32((u32)(0xa74870u));
    /* 005ab18b: call 0x579de0 */ r_esp -= 4; W32(r_esp, 0x5ab190u); f_00579de0();
    /* 005ab190: mov ebx, eax */ r_ebx = r_eax;
    /* 005ab192: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x5ab197u); f_0082d7b0();
    /* 005ab197: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005ab199: call 0x830cd8 */ r_esp -= 4; W32(r_esp, 0x5ab19eu); f_00830cd8();
    /* 005ab19e: lea ecx, [edi + 0x38] */ r_ecx = (u32)(r_edi+0x38u);
    /* 005ab1a1: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x5ab1a6u); f_0082d838();
    /* 005ab1a6: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 005ab1a9: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005ab1ab: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x5ab1b0u); f_0082d8bc();
    /* 005ab1b0: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005ab1b3: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005ab1b5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ab1b6: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005ab1b8: mov edx, ebp */ r_edx = r_ebp;
    /* 005ab1ba: call 0x82f940 */ r_esp -= 4; W32(r_esp, 0x5ab1bfu); f_0082f940();
    /* 005ab1bf: lea ebp, [esp + 0x18] */ r_ebp = (u32)(r_esp+0x18u);
    /* 005ab1c3: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005ab1c5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ab1c6: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005ab1c8: mov edx, ebx */ r_edx = r_ebx;
    /* 005ab1ca: call 0x82f940 */ r_esp -= 4; W32(r_esp, 0x5ab1cfu); f_0082f940();
    /* 005ab1cf: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x5ab1d4u); f_0082da80();
    /* 005ab1d4: mov ecx, dword ptr [edi + 0x484] */ r_ecx = R32((u32)(r_edi+0x484u));
    /* 005ab1da: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ab1dc: je 0x5ab1ec */ if (fZ) goto L_005ab1ec;
L_005ab1de:; BB(0x005ab1de);
    /* 005ab1de: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 005ab1e1: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 005ab1e5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ab1e6: mov ebx, dword ptr [ecx] */ r_ebx = R32((u32)(r_ecx));
    /* 005ab1e8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ab1e9: call dword ptr [ebx + 0x10] */ { u32 t = R32((u32)(r_ebx+0x10u)); r_esp -= 4; W32(r_esp, 0x5ab1ecu); call_ind(t); }
L_005ab1ec:; BB(0x005ab1ec);
    /* 005ab1ec: mov ecx, dword ptr [edi + 0x488] */ r_ecx = R32((u32)(r_edi+0x488u));
    /* 005ab1f2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ab1f4: je 0x5ab205 */ if (fZ) goto L_005ab205;
L_005ab1f6:; BB(0x005ab1f6);
    /* 005ab1f6: lea edx, [esp + 0x18] */ r_edx = (u32)(r_esp+0x18u);
    /* 005ab1fa: lea eax, [esp + 0x24] */ r_eax = (u32)(r_esp+0x24u);
    /* 005ab1fe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ab1ff: mov ebx, dword ptr [ecx] */ r_ebx = R32((u32)(r_ecx));
    /* 005ab201: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ab202: call dword ptr [ebx + 0x10] */ { u32 t = R32((u32)(r_ebx+0x10u)); r_esp -= 4; W32(r_esp, 0x5ab205u); call_ind(t); }
L_005ab205:; BB(0x005ab205);
    /* 005ab205: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005ab208: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005ab209: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ab20a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005ab20b: ret  */ FN_RET(0x005ab164); r_esp += 4; return;
}

void f_005ab20c(void) /* sub_5AB20C */
{
    FN_ENTER(0x005ab20c);
    /* 005ab20c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005ab20d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005ab20f: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005ab213: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ab216: je 0x5ab2e1 */ if (fZ) goto L_005ab2e1;
L_005ab21c:; BB(0x005ab21c);
    /* 005ab21c: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ab21f: je 0x5ab2d6 */ if (fZ) goto L_005ab2d6;
L_005ab225:; BB(0x005ab225);
    /* 005ab225: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ab227: jne 0x5ab2dd */ if (!fZ) goto L_005ab2dd;
L_005ab22d:; BB(0x005ab22d);
    /* 005ab22d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005ab22f: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x5ab234u); f_007aa094();
    /* 005ab234: mov eax, dword ptr [ebx + 0x4ac] */ r_eax = R32((u32)(r_ebx+0x4acu));
    /* 005ab23a: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ab23d: jl 0x5ab293 */ if ((fS!=fO)) goto L_005ab293;
L_005ab23f:; BB(0x005ab23f);
    /* 005ab23f: fld dword ptr [ebx + 0x3b4] */ FPUSH(R_F32((u32)(r_ebx+0x3b4u)));
    /* 005ab245: fcomp dword ptr [0x92a5f4] */ fx_compare(ST(0), R_F32((u32)(0x92a5f4u))); FPOP();
    /* 005ab24b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005ab24d: mov dword ptr [ebx + 0x4ac], 0 */ W32((u32)(r_ebx+0x4acu), 0x0u);
    /* 005ab257: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005ab258: jbe 0x5ab29c */ if ((fC||fZ)) goto L_005ab29c;
L_005ab25a:; BB(0x005ab25a);
    /* 005ab25a: push 0x442f0000 */ { u32 v = 0x442f0000u; r_esp -= 4; W32(r_esp, v); }
    /* 005ab25f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005ab261: call 0x5ab314 */ r_esp -= 4; W32(r_esp, 0x5ab266u); f_005ab314();
    /* 005ab266: movzx edx, ax */ r_edx = (u32)(u16)r_eax;
    /* 005ab269: cmp edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ab26f: je 0x5ab279 */ if (fZ) goto L_005ab279;
L_005ab271:; BB(0x005ab271);
    /* 005ab271: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ab272: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005ab274: call 0x520fcc */ r_esp -= 4; W32(r_esp, 0x5ab279u); f_00520fcc();
L_005ab279:; BB(0x005ab279);
    /* 005ab279: push dword ptr [ebx + 0x398] */ { u32 v = R32((u32)(r_ebx+0x398u)); r_esp -= 4; W32(r_esp, v); }
    /* 005ab27f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005ab281: call 0x786598 */ r_esp -= 4; W32(r_esp, 0x5ab286u); f_00786598();
    /* 005ab286: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ab288: jne 0x5ab29c */ if (!fZ) goto L_005ab29c;
L_005ab28a:; BB(0x005ab28a);
    /* 005ab28a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005ab28c: call 0x520f68 */ r_esp -= 4; W32(r_esp, 0x5ab291u); f_00520f68();
    /* 005ab291: jmp 0x5ab29c */ goto L_005ab29c;
L_005ab293:; BB(0x005ab293);
    /* 005ab293: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ab296: mov dword ptr [ebx + 0x4ac], eax */ W32((u32)(r_ebx+0x4acu), r_eax);
L_005ab29c:; BB(0x005ab29c);
    /* 005ab29c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005ab29e: call 0x5213d8 */ r_esp -= 4; W32(r_esp, 0x5ab2a3u); f_005213d8();
    /* 005ab2a3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005ab2a5: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x5ab2aau); f_00521410();
    /* 005ab2aa: push dword ptr [ebx + 0x48c] */ { u32 v = R32((u32)(r_ebx+0x48cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005ab2b0: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005ab2b2: call 0x772358 */ r_esp -= 4; W32(r_esp, 0x5ab2b7u); f_00772358();
    /* 005ab2b7: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 005ab2b9: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005ab2bb: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x5ab2c1u); call_ind(t); }
    /* 005ab2c1: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 005ab2c3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005ab2c5: call dword ptr [eax + 0x168] */ { u32 t = R32((u32)(r_eax+0x168u)); r_esp -= 4; W32(r_esp, 0x5ab2cbu); call_ind(t); }
    /* 005ab2cb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005ab2cd: call 0x5aa4d0 */ r_esp -= 4; W32(r_esp, 0x5ab2d2u); f_005aa4d0();
    /* 005ab2d2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005ab2d3: ret 4 */ FN_RET(0x005ab20c); r_esp += 8; return;
L_005ab2d6:; BB(0x005ab2d6);
    /* 005ab2d6: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005ab2d8: call 0x5ab340 */ r_esp -= 4; W32(r_esp, 0x5ab2ddu); f_005ab340();
L_005ab2dd:; BB(0x005ab2dd);
    /* 005ab2dd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005ab2de: ret 4 */ FN_RET(0x005ab20c); r_esp += 8; return;
L_005ab2e1:; BB(0x005ab2e1);
    /* 005ab2e1: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 005ab2e3: mov eax, 1 */ r_eax = 0x1u;
    /* 005ab2e8: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
    /* 005ab2ef: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005ab2f1: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x5ab2f7u); call_ind(t); }
    /* 005ab2f7: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005ab2f9: mov eax, dword ptr [ebx + 0x44c] */ r_eax = R32((u32)(r_ebx+0x44cu));
    /* 005ab2ff: and eax, 0xffffffee */ {  u32 a = r_eax; u32 b = 0xffffffeeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005ab302: mov dword ptr [ebx + 0x44c], eax */ W32((u32)(r_ebx+0x44cu), r_eax);
    /* 005ab308: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005ab30a: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x5ab30fu); f_0051f664();
    /* 005ab30f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005ab310: ret 4 */ FN_RET(0x005ab20c); r_esp += 8; return;
}

void f_005ab314(void) /* sub_5AB314 */
{
    FN_ENTER(0x005ab314);
    /* 005ab314: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ab315: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005ab316: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005ab318: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005ab31c: mov ebx, dword ptr [ebp + 0x304] */ r_ebx = R32((u32)(r_ebp+0x304u));
    /* 005ab322: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005ab324: mov dword ptr [ebp + 0x304], 0x43960000 */ W32((u32)(r_ebp+0x304u), 0x43960000u);
    /* 005ab32e: call 0x521160 */ r_esp -= 4; W32(r_esp, 0x5ab333u); f_00521160();
    /* 005ab333: mov dword ptr [ebp + 0x304], ebx */ W32((u32)(r_ebp+0x304u), r_ebx);
    /* 005ab339: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005ab33a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ab33b: ret 4 */ FN_RET(0x005ab314); r_esp += 8; return;
}

void f_005ab340(void) /* sub_5AB340 */
{
    FN_ENTER(0x005ab340);
    /* 005ab340: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005ab341: mov esi, ecx */ r_esi = r_ecx;
    /* 005ab343: mov edx, dword ptr [esi + 0x44c] */ r_edx = R32((u32)(r_esi+0x44cu));
    /* 005ab349: test dl, 8 */ {  u32 a = (u8)r_edx; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005ab34c: je 0x5ab355 */ if (fZ) goto L_005ab355;
L_005ab34e:; BB(0x005ab34e);
    /* 005ab34e: mov eax, 1 */ r_eax = 0x1u;
    /* 005ab353: jmp 0x5ab357 */ goto L_005ab357;
L_005ab355:; BB(0x005ab355);
    /* 005ab355: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005ab357:; BB(0x005ab357);
    /* 005ab357: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ab359: jne 0x5ab48a */ if (!fZ) goto L_005ab48a;
L_005ab35f:; BB(0x005ab35f);
    /* 005ab35f: mov eax, dword ptr [esi + 0x398] */ r_eax = R32((u32)(r_esi+0x398u));
    /* 005ab365: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fO = 0; }
    /* 005ab367: je 0x5ab4f7 */ if (fZ) goto L_005ab4f7;
L_005ab36d:; BB(0x005ab36d);
    /* 005ab36d: fld dword ptr [esi + 0x3b4] */ FPUSH(R_F32((u32)(r_esi+0x3b4u)));
    /* 005ab373: fcom dword ptr [0x92a5ec] */ fx_compare(ST(0), R_F32((u32)(0x92a5ecu))); 
    /* 005ab379: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005ab37b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005ab37c: jb 0x5ab45c */ if (fC) goto L_005ab45c;
L_005ab382:; BB(0x005ab382);
    /* 005ab382: fcom dword ptr [0x92a5e8] */ fx_compare(ST(0), R_F32((u32)(0x92a5e8u))); 
    /* 005ab388: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005ab38a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005ab38b: jb 0x5ab42e */ if (fC) goto L_005ab42e;
L_005ab391:; BB(0x005ab391);
    /* 005ab391: fcom dword ptr [0x92a5e4] */ fx_compare(ST(0), R_F32((u32)(0x92a5e4u))); 
    /* 005ab397: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005ab399: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005ab39a: jb 0x5ab400 */ if (fC) goto L_005ab400;
L_005ab39c:; BB(0x005ab39c);
    /* 005ab39c: fcom dword ptr [esi + 0x460] */ fx_compare(ST(0), R_F32((u32)(r_esi+0x460u))); 
    /* 005ab3a2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005ab3a4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005ab3a5: jb 0x5ab3bb */ if (fC) goto L_005ab3bb;
L_005ab3a7:; BB(0x005ab3a7);
    /* 005ab3a7: fcomp dword ptr [0x92a5e0] */ fx_compare(ST(0), R_F32((u32)(0x92a5e0u))); FPOP();
    /* 005ab3ad: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005ab3af: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005ab3b0: ja 0x5ab4b4 */ if ((!fC&&!fZ)) goto L_005ab4b4;
L_005ab3b6:; BB(0x005ab3b6);
    /* 005ab3b6: jmp 0x5ab488 */ goto L_005ab488;
L_005ab3bb:; BB(0x005ab3bb);
    /* 005ab3bb: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005ab3bd: and edx, 0xfffffffb */ {  u32 a = r_edx; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005ab3c0: mov dword ptr [esi + 0x44c], edx */ W32((u32)(r_esi+0x44cu), r_edx);
    /* 005ab3c6: mov ecx, esi */ r_ecx = r_esi;
    /* 005ab3c8: call 0x5ab53c */ r_esp -= 4; W32(r_esp, 0x5ab3cdu); f_005ab53c();
    /* 005ab3cd: mov ecx, dword ptr [0xa74860] */ r_ecx = R32((u32)(0xa74860u));
    /* 005ab3d3: mov dword ptr [esi + 0x3c8], 3 */ W32((u32)(r_esi+0x3c8u), 0x3u);
    /* 005ab3dd: movzx eax, word ptr [ecx + 4] */ r_eax = (u32)R16((u32)(r_ecx+0x4u));
    /* 005ab3e1: mov word ptr [esi + 0x2f6], ax */ W16((u32)(r_esi+0x2f6u), (u16)r_eax);
    /* 005ab3e8: movzx edx, word ptr [ecx + 4] */ r_edx = (u32)R16((u32)(r_ecx+0x4u));
    /* 005ab3ec: mov word ptr [esi + 0x2fa], dx */ W16((u32)(r_esi+0x2fau), (u16)r_edx);
    /* 005ab3f3: movzx eax, word ptr [ecx + 4] */ r_eax = (u32)R16((u32)(r_ecx+0x4u));
    /* 005ab3f7: mov word ptr [esi + 0x2f8], ax */ W16((u32)(r_esi+0x2f8u), (u16)r_eax);
    /* 005ab3fe: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005ab3ff: ret  */ FN_RET(0x005ab340); r_esp += 4; return;
L_005ab400:; BB(0x005ab400);
    /* 005ab400: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005ab402: mov ecx, esi */ r_ecx = r_esi;
    /* 005ab404: call 0x5ab5e0 */ r_esp -= 4; W32(r_esp, 0x5ab409u); f_005ab5e0();
    /* 005ab409: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ab40b: je 0x5ab488 */ if (fZ) goto L_005ab488;
L_005ab40d:; BB(0x005ab40d);
    /* 005ab40d: mov eax, dword ptr [esi + 0x44c] */ r_eax = R32((u32)(r_esi+0x44cu));
    /* 005ab413: and eax, 0xfffffffb */ {  u32 a = r_eax; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005ab416: mov dword ptr [esi + 0x44c], eax */ W32((u32)(r_esi+0x44cu), r_eax);
    /* 005ab41c: mov ecx, esi */ r_ecx = r_esi;
    /* 005ab41e: call 0x5ab638 */ r_esp -= 4; W32(r_esp, 0x5ab423u); f_005ab638();
    /* 005ab423: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 005ab425: mov ecx, esi */ r_ecx = r_esi;
    /* 005ab427: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5ab42cu); f_0051f62c();
    /* 005ab42c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005ab42d: ret  */ FN_RET(0x005ab340); r_esp += 4; return;
L_005ab42e:; BB(0x005ab42e);
    /* 005ab42e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005ab430: mov ecx, esi */ r_ecx = r_esi;
    /* 005ab432: call 0x5ab5e0 */ r_esp -= 4; W32(r_esp, 0x5ab437u); f_005ab5e0();
    /* 005ab437: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ab439: je 0x5ab488 */ if (fZ) goto L_005ab488;
L_005ab43b:; BB(0x005ab43b);
    /* 005ab43b: mov eax, dword ptr [esi + 0x44c] */ r_eax = R32((u32)(r_esi+0x44cu));
    /* 005ab441: and eax, 0xfffffffb */ {  u32 a = r_eax; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005ab444: mov dword ptr [esi + 0x44c], eax */ W32((u32)(r_esi+0x44cu), r_eax);
    /* 005ab44a: mov ecx, esi */ r_ecx = r_esi;
    /* 005ab44c: call 0x5ab638 */ r_esp -= 4; W32(r_esp, 0x5ab451u); f_005ab638();
    /* 005ab451: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005ab453: mov ecx, esi */ r_ecx = r_esi;
    /* 005ab455: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5ab45au); f_0051f62c();
    /* 005ab45a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005ab45b: ret  */ FN_RET(0x005ab340); r_esp += 4; return;
L_005ab45c:; BB(0x005ab45c);
    /* 005ab45c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005ab45e: mov ecx, esi */ r_ecx = r_esi;
    /* 005ab460: call 0x5ab5e0 */ r_esp -= 4; W32(r_esp, 0x5ab465u); f_005ab5e0();
    /* 005ab465: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ab467: je 0x5ab488 */ if (fZ) goto L_005ab488;
L_005ab469:; BB(0x005ab469);
    /* 005ab469: mov eax, dword ptr [esi + 0x44c] */ r_eax = R32((u32)(r_esi+0x44cu));
    /* 005ab46f: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005ab472: mov dword ptr [esi + 0x44c], eax */ W32((u32)(r_esi+0x44cu), r_eax);
    /* 005ab478: mov ecx, esi */ r_ecx = r_esi;
    /* 005ab47a: call 0x5ab638 */ r_esp -= 4; W32(r_esp, 0x5ab47fu); f_005ab638();
    /* 005ab47f: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 005ab481: mov ecx, esi */ r_ecx = r_esi;
    /* 005ab483: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5ab488u); f_0051f62c();
L_005ab488:; BB(0x005ab488);
    /* 005ab488: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005ab489: ret  */ FN_RET(0x005ab340); r_esp += 4; return;
L_005ab48a:; BB(0x005ab48a);
    /* 005ab48a: and edx, 0xfffffff3 */ {  u32 a = r_edx; u32 b = 0xfffffff3u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005ab48d: mov dword ptr [esi + 0x44c], edx */ W32((u32)(r_esi+0x44cu), r_edx);
    /* 005ab493: mov ecx, esi */ r_ecx = r_esi;
    /* 005ab495: call 0x5ab638 */ r_esp -= 4; W32(r_esp, 0x5ab49au); f_005ab638();
    /* 005ab49a: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005ab49c: mov ecx, esi */ r_ecx = r_esi;
    /* 005ab49e: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5ab4a3u); f_0051f62c();
    /* 005ab4a3: mov eax, dword ptr [esi + 0x44c] */ r_eax = R32((u32)(r_esi+0x44cu));
    /* 005ab4a9: or eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ab4ac: mov dword ptr [esi + 0x44c], eax */ W32((u32)(r_esi+0x44cu), r_eax);
    /* 005ab4b2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005ab4b3: ret  */ FN_RET(0x005ab340); r_esp += 4; return;
L_005ab4b4:; BB(0x005ab4b4);
    /* 005ab4b4: mov ecx, esi */ r_ecx = r_esi;
    /* 005ab4b6: call 0x5ac90c */ r_esp -= 4; W32(r_esp, 0x5ab4bbu); f_005ac90c();
    /* 005ab4bb: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005ab4bd: mov ecx, esi */ r_ecx = r_esi;
    /* 005ab4bf: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5ab4c4u); f_0051f62c();
    /* 005ab4c4: mov ecx, dword ptr [0xa74860] */ r_ecx = R32((u32)(0xa74860u));
    /* 005ab4ca: mov dword ptr [esi + 0x3c8], 4 */ W32((u32)(r_esi+0x3c8u), 0x4u);
    /* 005ab4d4: movzx eax, word ptr [ecx + 2] */ r_eax = (u32)R16((u32)(r_ecx+0x2u));
    /* 005ab4d8: mov word ptr [esi + 0x2f6], ax */ W16((u32)(r_esi+0x2f6u), (u16)r_eax);
    /* 005ab4df: movzx edx, word ptr [ecx + 2] */ r_edx = (u32)R16((u32)(r_ecx+0x2u));
    /* 005ab4e3: mov word ptr [esi + 0x2fa], dx */ W16((u32)(r_esi+0x2fau), (u16)r_edx);
    /* 005ab4ea: movzx eax, word ptr [ecx + 2] */ r_eax = (u32)R16((u32)(r_ecx+0x2u));
    /* 005ab4ee: mov word ptr [esi + 0x2f8], ax */ W16((u32)(r_esi+0x2f8u), (u16)r_eax);
    /* 005ab4f5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005ab4f6: ret  */ FN_RET(0x005ab340); r_esp += 4; return;
L_005ab4f7:; BB(0x005ab4f7);
    /* 005ab4f7: mov ecx, esi */ r_ecx = r_esi;
    /* 005ab4f9: call 0x5ac90c */ r_esp -= 4; W32(r_esp, 0x5ab4feu); f_005ac90c();
    /* 005ab4fe: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005ab500: mov ecx, esi */ r_ecx = r_esi;
    /* 005ab502: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5ab507u); f_0051f62c();
    /* 005ab507: mov ecx, dword ptr [0xa74860] */ r_ecx = R32((u32)(0xa74860u));
    /* 005ab50d: mov dword ptr [esi + 0x3c8], 4 */ W32((u32)(r_esi+0x3c8u), 0x4u);
    /* 005ab517: movzx eax, word ptr [ecx + 2] */ r_eax = (u32)R16((u32)(r_ecx+0x2u));
    /* 005ab51b: mov word ptr [esi + 0x2f6], ax */ W16((u32)(r_esi+0x2f6u), (u16)r_eax);
    /* 005ab522: movzx edx, word ptr [ecx + 2] */ r_edx = (u32)R16((u32)(r_ecx+0x2u));
    /* 005ab526: mov word ptr [esi + 0x2fa], dx */ W16((u32)(r_esi+0x2fau), (u16)r_edx);
    /* 005ab52d: movzx eax, word ptr [ecx + 2] */ r_eax = (u32)R16((u32)(r_ecx+0x2u));
    /* 005ab531: mov word ptr [esi + 0x2f8], ax */ W16((u32)(r_esi+0x2f8u), (u16)r_eax);
    /* 005ab538: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005ab539: ret  */ FN_RET(0x005ab340); r_esp += 4; return;
}

void f_005ab53c(void) /* sub_5AB53C */
{
    FN_ENTER(0x005ab53c);
    /* 005ab53c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ab53d: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005ab53f: mov eax, dword ptr [ebp + 0x44c] */ r_eax = R32((u32)(r_ebp+0x44cu));
    /* 005ab545: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005ab547: je 0x5ab550 */ if (fZ) goto L_005ab550;
L_005ab549:; BB(0x005ab549);
    /* 005ab549: mov edx, 1 */ r_edx = 0x1u;
    /* 005ab54e: jmp 0x5ab552 */ goto L_005ab552;
L_005ab550:; BB(0x005ab550);
    /* 005ab550: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_005ab552:; BB(0x005ab552);
    /* 005ab552: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ab554: je 0x5ab558 */ if (fZ) goto L_005ab558;
L_005ab556:; BB(0x005ab556);
    /* 005ab556: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ab557: ret  */ FN_RET(0x005ab53c); r_esp += 4; return;
L_005ab558:; BB(0x005ab558);
    /* 005ab558: mov dword ptr [ebp + 0x470], 0 */ W32((u32)(r_ebp+0x470u), 0x0u);
    /* 005ab562: mov edx, 5 */ r_edx = 0x5u;
    /* 005ab567: mov word ptr [ebp + 0xb8], dx */ W16((u32)(r_ebp+0xb8u), (u16)r_edx);
    /* 005ab56e: mov edx, dword ptr [ebp + 0x468] */ r_edx = R32((u32)(r_ebp+0x468u));
    /* 005ab574: mov dword ptr [ebp + 0x478], edx */ W32((u32)(r_ebp+0x478u), r_edx);
    /* 005ab57a: mov edx, dword ptr [ebp + 0x47c] */ r_edx = R32((u32)(r_ebp+0x47cu));
    /* 005ab580: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ab582: je 0x5ab58f */ if (fZ) goto L_005ab58f;
L_005ab584:; BB(0x005ab584);
    /* 005ab584: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ab587: mov dword ptr [ebp + 0x44c], eax */ W32((u32)(r_ebp+0x44cu), r_eax);
    /* 005ab58d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ab58e: ret  */ FN_RET(0x005ab53c); r_esp += 4; return;
L_005ab58f:; BB(0x005ab58f);
    /* 005ab58f: push 0x58 */ { u32 v = 0x58u; r_esp -= 4; W32(r_esp, v); }
    /* 005ab591: lea eax, [ebp + 0x38] */ r_eax = (u32)(r_ebp+0x38u);
    /* 005ab594: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ab595: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x5ab59au); f_00509590();
    /* 005ab59a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ab59d: mov dword ptr [ebp + 0x47c], eax */ W32((u32)(r_ebp+0x47cu), r_eax);
    /* 005ab5a3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ab5a5: je 0x5ab5d8 */ if (fZ) goto L_005ab5d8;
L_005ab5a7:; BB(0x005ab5a7);
    /* 005ab5a7: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005ab5a9: mov ecx, eax */ r_ecx = r_eax;
    /* 005ab5ab: call 0x508f08 */ r_esp -= 4; W32(r_esp, 0x5ab5b0u); f_00508f08();
    /* 005ab5b0: push 0x3fdfbf6f */ { u32 v = 0x3fdfbf6fu; r_esp -= 4; W32(r_esp, v); }
    /* 005ab5b5: mov ecx, dword ptr [ebp + 0x47c] */ r_ecx = R32((u32)(r_ebp+0x47cu));
    /* 005ab5bb: call 0x508ee4 */ r_esp -= 4; W32(r_esp, 0x5ab5c0u); f_00508ee4();
    /* 005ab5c0: push 0x40f00000 */ { u32 v = 0x40f00000u; r_esp -= 4; W32(r_esp, v); }
    /* 005ab5c5: mov ecx, dword ptr [ebp + 0x47c] */ r_ecx = R32((u32)(r_ebp+0x47cu));
    /* 005ab5cb: call 0x508dac */ r_esp -= 4; W32(r_esp, 0x5ab5d0u); f_00508dac();
    /* 005ab5d0: mov eax, dword ptr [ebp + 0x44c] */ r_eax = R32((u32)(r_ebp+0x44cu));
    /* 005ab5d6: jmp 0x5ab584 */ goto L_005ab584;
L_005ab5d8:; BB(0x005ab5d8);
    /* 005ab5d8: mov eax, dword ptr [ebp + 0x44c] */ r_eax = R32((u32)(r_ebp+0x44cu));
    /* 005ab5de: jmp 0x5ab584 */ goto L_005ab584;
}

void f_005ab5e0(void) /* sub_5AB5E0 */
{
    FN_ENTER(0x005ab5e0);
    /* 005ab5e0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ab5e3: fld dword ptr [ecx + 0x3a8] */ FPUSH(R_F32((u32)(r_ecx+0x3a8u)));
    /* 005ab5e9: fld dword ptr [ecx + 0x3b0] */ FPUSH(R_F32((u32)(r_ecx+0x3b0u)));
    /* 005ab5ef: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 005ab5f1: fmul qword ptr [0x92a560] */ ST(0) = ST(0) * R_F64((u32)(0x92a560u));
    /* 005ab5f7: fdiv qword ptr [0x92a558] */ ST(0) = ST(0) / R_F64((u32)(0x92a558u));
    /* 005ab5fd: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 005ab600: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 005ab604: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005ab609: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 005ab60d: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 005ab611: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 005ab615: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 005ab618: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 005ab61c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ab61d: push dword ptr [ecx + 0x60] */ { u32 v = R32((u32)(r_ecx+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 005ab620: call 0x7a9018 */ r_esp -= 4; W32(r_esp, 0x5ab625u); f_007a9018();
    /* 005ab625: cmp eax, 0x2000 */ {  u32 a = r_eax; u32 b = 0x2000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ab62a: mov eax, 0 */ r_eax = 0x0u;
    /* 005ab62f: setl al */ r_eax = (r_eax & 0xffffff00u) | ((((fS!=fO)) ? 1 : 0) & 0xffu);
    /* 005ab632: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005ab635: ret  */ FN_RET(0x005ab5e0); r_esp += 4; return;
}

void f_005ab638(void) /* sub_5AB638 */
{
    FN_ENTER(0x005ab638);
    /* 005ab638: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005ab639: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ab63c: mov edi, ecx */ r_edi = r_ecx;
    /* 005ab63e: lea ecx, [edi + 0x168] */ r_ecx = (u32)(r_edi+0x168u);
    /* 005ab644: call 0x763498 */ r_esp -= 4; W32(r_esp, 0x5ab649u); f_00763498();
    /* 005ab649: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 005ab64c: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 005ab64f: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 005ab652: fadd dword ptr [eax*4 + 0x92a550] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x92a550u));
    /* 005ab659: mov edx, 3 */ r_edx = 0x3u;
    /* 005ab65e: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 005ab662: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 005ab666: fadd dword ptr [0x92a550] */ ST(0) = ST(0) + R_F32((u32)(0x92a550u));
    /* 005ab66c: mov ecx, edi */ r_ecx = r_edi;
    /* 005ab66e: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 005ab670: fdiv dword ptr [0x92a5d4] */ ST(0) = ST(0) / R_F32((u32)(0x92a5d4u));
    /* 005ab676: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 005ab67a: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 005ab67f: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005ab684: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 005ab688: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 005ab68c: fistp qword ptr [esp + 0x20] */ W64((u32)(r_esp+0x20u), (u64)fx_int64(ST(0))); FPOP();
    /* 005ab690: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 005ab694: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 005ab698: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ab699: call 0x5ab6a4 */ r_esp -= 4; W32(r_esp, 0x5ab69eu); f_005ab6a4();
    /* 005ab69e: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005ab6a1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005ab6a2: ret  */ FN_RET(0x005ab638); r_esp += 4; return;
}

void f_005ab6a4(void) /* sub_5AB6A4 */
{
    FN_ENTER(0x005ab6a4);
    /* 005ab6a4: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 005ab6a8: mov eax, dword ptr [0xa74860] */ r_eax = R32((u32)(0xa74860u));
    /* 005ab6ad: mov dword ptr [ecx + 0x3c8], edx */ W32((u32)(r_ecx+0x3c8u), r_edx);
    /* 005ab6b3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ab6b5: je 0x5ab75a */ if (fZ) goto L_005ab75a;
L_005ab6bb:; BB(0x005ab6bb);
    /* 005ab6bb: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005ab6be: je 0x5ab736 */ if (fZ) goto L_005ab736;
L_005ab6c0:; BB(0x005ab6c0);
    /* 005ab6c0: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005ab6c3: jne 0x5ab6e9 */ if (!fZ) goto L_005ab6e9;
L_005ab6c5:; BB(0x005ab6c5);
    /* 005ab6c5: movzx edx, word ptr [eax + 4] */ r_edx = (u32)R16((u32)(r_eax+0x4u));
    /* 005ab6c9: mov word ptr [ecx + 0x2f6], dx */ W16((u32)(r_ecx+0x2f6u), (u16)r_edx);
    /* 005ab6d0: movzx edx, word ptr [eax + 4] */ r_edx = (u32)R16((u32)(r_eax+0x4u));
    /* 005ab6d4: mov word ptr [ecx + 0x2fa], dx */ W16((u32)(r_ecx+0x2fau), (u16)r_edx);
    /* 005ab6db: movzx eax, word ptr [eax + 6] */ r_eax = (u32)R16((u32)(r_eax+0x6u));
    /* 005ab6df: mov word ptr [ecx + 0x2f8], ax */ W16((u32)(r_ecx+0x2f8u), (u16)r_eax);
    /* 005ab6e6: ret 4 */ FN_RET(0x005ab6a4); r_esp += 8; return;
L_005ab6e9:; BB(0x005ab6e9);
    /* 005ab6e9: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005ab6ec: jne 0x5ab712 */ if (!fZ) goto L_005ab712;
L_005ab6ee:; BB(0x005ab6ee);
    /* 005ab6ee: movzx edx, word ptr [eax + 4] */ r_edx = (u32)R16((u32)(r_eax+0x4u));
    /* 005ab6f2: mov word ptr [ecx + 0x2f6], dx */ W16((u32)(r_ecx+0x2f6u), (u16)r_edx);
    /* 005ab6f9: movzx edx, word ptr [eax + 4] */ r_edx = (u32)R16((u32)(r_eax+0x4u));
    /* 005ab6fd: mov word ptr [ecx + 0x2fa], dx */ W16((u32)(r_ecx+0x2fau), (u16)r_edx);
    /* 005ab704: movzx eax, word ptr [eax + 4] */ r_eax = (u32)R16((u32)(r_eax+0x4u));
    /* 005ab708: mov word ptr [ecx + 0x2f8], ax */ W16((u32)(r_ecx+0x2f8u), (u16)r_eax);
    /* 005ab70f: ret 4 */ FN_RET(0x005ab6a4); r_esp += 8; return;
L_005ab712:; BB(0x005ab712);
    /* 005ab712: movzx edx, word ptr [eax + 2] */ r_edx = (u32)R16((u32)(r_eax+0x2u));
    /* 005ab716: mov word ptr [ecx + 0x2f6], dx */ W16((u32)(r_ecx+0x2f6u), (u16)r_edx);
    /* 005ab71d: movzx edx, word ptr [eax + 2] */ r_edx = (u32)R16((u32)(r_eax+0x2u));
    /* 005ab721: mov word ptr [ecx + 0x2fa], dx */ W16((u32)(r_ecx+0x2fau), (u16)r_edx);
    /* 005ab728: movzx eax, word ptr [eax + 2] */ r_eax = (u32)R16((u32)(r_eax+0x2u));
    /* 005ab72c: mov word ptr [ecx + 0x2f8], ax */ W16((u32)(r_ecx+0x2f8u), (u16)r_eax);
    /* 005ab733: ret 4 */ FN_RET(0x005ab6a4); r_esp += 8; return;
L_005ab736:; BB(0x005ab736);
    /* 005ab736: movzx edx, word ptr [eax + 4] */ r_edx = (u32)R16((u32)(r_eax+0x4u));
    /* 005ab73a: mov word ptr [ecx + 0x2f6], dx */ W16((u32)(r_ecx+0x2f6u), (u16)r_edx);
    /* 005ab741: movzx edx, word ptr [eax + 6] */ r_edx = (u32)R16((u32)(r_eax+0x6u));
    /* 005ab745: mov word ptr [ecx + 0x2fa], dx */ W16((u32)(r_ecx+0x2fau), (u16)r_edx);
    /* 005ab74c: movzx eax, word ptr [eax + 4] */ r_eax = (u32)R16((u32)(r_eax+0x4u));
    /* 005ab750: mov word ptr [ecx + 0x2f8], ax */ W16((u32)(r_ecx+0x2f8u), (u16)r_eax);
    /* 005ab757: ret 4 */ FN_RET(0x005ab6a4); r_esp += 8; return;
L_005ab75a:; BB(0x005ab75a);
    /* 005ab75a: movzx edx, word ptr [eax + 6] */ r_edx = (u32)R16((u32)(r_eax+0x6u));
    /* 005ab75e: mov word ptr [ecx + 0x2f6], dx */ W16((u32)(r_ecx+0x2f6u), (u16)r_edx);
    /* 005ab765: movzx edx, word ptr [eax + 4] */ r_edx = (u32)R16((u32)(r_eax+0x4u));
    /* 005ab769: mov word ptr [ecx + 0x2fa], dx */ W16((u32)(r_ecx+0x2fau), (u16)r_edx);
    /* 005ab770: movzx eax, word ptr [eax + 4] */ r_eax = (u32)R16((u32)(r_eax+0x4u));
    /* 005ab774: mov word ptr [ecx + 0x2f8], ax */ W16((u32)(r_ecx+0x2f8u), (u16)r_eax);
    /* 005ab77b: ret 4 */ FN_RET(0x005ab6a4); r_esp += 8; return;
}

void f_005ab780(void) /* sub_5AB780 */
{
    FN_ENTER(0x005ab780);
    /* 005ab780: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ab781: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005ab783: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005ab787: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ab78a: je 0x5ab7f3 */ if (fZ) goto L_005ab7f3;
L_005ab78c:; BB(0x005ab78c);
    /* 005ab78c: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005ab78f: je 0x5ab7ef */ if (fZ) goto L_005ab7ef;
L_005ab791:; BB(0x005ab791);
    /* 005ab791: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ab794: je 0x5ab7d6 */ if (fZ) goto L_005ab7d6;
L_005ab796:; BB(0x005ab796);
    /* 005ab796: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ab798: jne 0x5ab7ef */ if (!fZ) goto L_005ab7ef;
L_005ab79a:; BB(0x005ab79a);
    /* 005ab79a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005ab79c: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x5ab7a1u); f_007aa094();
    /* 005ab7a1: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005ab7a3: call 0x5213d8 */ r_esp -= 4; W32(r_esp, 0x5ab7a8u); f_005213d8();
    /* 005ab7a8: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005ab7aa: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x5ab7afu); f_00521410();
    /* 005ab7af: push dword ptr [ebp + 0x48c] */ { u32 v = R32((u32)(r_ebp+0x48cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005ab7b5: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005ab7b7: call 0x772358 */ r_esp -= 4; W32(r_esp, 0x5ab7bcu); f_00772358();
    /* 005ab7bc: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 005ab7bf: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005ab7c1: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x5ab7c7u); call_ind(t); }
    /* 005ab7c7: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 005ab7ca: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005ab7cc: call dword ptr [eax + 0x168] */ { u32 t = R32((u32)(r_eax+0x168u)); r_esp -= 4; W32(r_esp, 0x5ab7d2u); call_ind(t); }
    /* 005ab7d2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ab7d3: ret 4 */ FN_RET(0x005ab780); r_esp += 8; return;
L_005ab7d6:; BB(0x005ab7d6);
    /* 005ab7d6: push 0x442f0000 */ { u32 v = 0x442f0000u; r_esp -= 4; W32(r_esp, v); }
    /* 005ab7db: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005ab7dd: call 0x5ab830 */ r_esp -= 4; W32(r_esp, 0x5ab7e2u); f_005ab830();
    /* 005ab7e2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ab7e4: je 0x5ab7ef */ if (fZ) goto L_005ab7ef;
L_005ab7e6:; BB(0x005ab7e6);
    /* 005ab7e6: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005ab7e8: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005ab7ea: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5ab7efu); f_0051f62c();
L_005ab7ef:; BB(0x005ab7ef);
    /* 005ab7ef: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ab7f0: ret 4 */ FN_RET(0x005ab780); r_esp += 8; return;
L_005ab7f3:; BB(0x005ab7f3);
    /* 005ab7f3: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 005ab7f6: mov eax, 2 */ r_eax = 0x2u;
    /* 005ab7fb: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 005ab802: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005ab804: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x5ab80au); call_ind(t); }
    /* 005ab80a: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005ab80c: mov eax, dword ptr [ebp + 0x44c] */ r_eax = R32((u32)(r_ebp+0x44cu));
    /* 005ab812: and eax, 0xffffffee */ {  u32 a = r_eax; u32 b = 0xffffffeeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005ab815: mov dword ptr [ebp + 0x44c], eax */ W32((u32)(r_ebp+0x44cu), r_eax);
    /* 005ab81b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005ab81d: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x5ab822u); f_0051f664();
    /* 005ab822: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005ab824: call 0x520f68 */ r_esp -= 4; W32(r_esp, 0x5ab829u); f_00520f68();
    /* 005ab829: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ab82a: ret 4 */ FN_RET(0x005ab780); r_esp += 8; return;
}

void f_005ab830(void) /* sub_5AB830 */
{
    FN_ENTER(0x005ab830);
    /* 005ab830: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005ab831: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005ab832: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005ab833: mov esi, ecx */ r_esi = r_ecx;
    /* 005ab835: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 005ab839: mov edi, dword ptr [esi + 0x304] */ r_edi = R32((u32)(r_esi+0x304u));
    /* 005ab83f: mov dword ptr [esi + 0x304], 0x43960000 */ W32((u32)(r_esi+0x304u), 0x43960000u);
    /* 005ab849: mov ecx, esi */ r_ecx = r_esi;
    /* 005ab84b: call 0x520ea0 */ r_esp -= 4; W32(r_esp, 0x5ab850u); f_00520ea0();
    /* 005ab850: mov ebx, eax */ r_ebx = r_eax;
    /* 005ab852: push dword ptr [esi + 0x398] */ { u32 v = R32((u32)(r_esi+0x398u)); r_esp -= 4; W32(r_esp, v); }
    /* 005ab858: mov dword ptr [esi + 0x304], edi */ W32((u32)(r_esi+0x304u), r_edi);
    /* 005ab85e: mov ecx, esi */ r_ecx = r_esi;
    /* 005ab860: call 0x786598 */ r_esp -= 4; W32(r_esp, 0x5ab865u); f_00786598();
    /* 005ab865: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ab867: jne 0x5ab872 */ if (!fZ) goto L_005ab872;
L_005ab869:; BB(0x005ab869);
    /* 005ab869: mov ecx, esi */ r_ecx = r_esi;
    /* 005ab86b: call 0x520f68 */ r_esp -= 4; W32(r_esp, 0x5ab870u); f_00520f68();
    /* 005ab870: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_005ab872:; BB(0x005ab872);
    /* 005ab872: mov eax, ebx */ r_eax = r_ebx;
    /* 005ab874: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005ab875: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005ab876: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005ab877: ret 4 */ FN_RET(0x005ab830); r_esp += 8; return;
}

void f_005ab87c(void) /* sub_5AB87C */
{
    FN_ENTER(0x005ab87c);
    /* 005ab87c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005ab87d: mov esi, ecx */ r_esi = r_ecx;
    /* 005ab87f: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005ab883: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ab886: je 0x5ab8fb */ if (fZ) goto L_005ab8fb;
L_005ab888:; BB(0x005ab888);
    /* 005ab888: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005ab88b: je 0x5ab8f7 */ if (fZ) goto L_005ab8f7;
L_005ab88d:; BB(0x005ab88d);
    /* 005ab88d: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ab890: je 0x5ab8db */ if (fZ) goto L_005ab8db;
L_005ab892:; BB(0x005ab892);
    /* 005ab892: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ab894: jne 0x5ab8c3 */ if (!fZ) goto L_005ab8c3;
L_005ab896:; BB(0x005ab896);
    /* 005ab896: mov ecx, esi */ r_ecx = r_esi;
    /* 005ab898: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x5ab89du); f_007aa094();
    /* 005ab89d: mov ecx, esi */ r_ecx = r_esi;
    /* 005ab89f: call 0x5213d8 */ r_esp -= 4; W32(r_esp, 0x5ab8a4u); f_005213d8();
    /* 005ab8a4: mov ecx, esi */ r_ecx = r_esi;
    /* 005ab8a6: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x5ab8abu); f_00521410();
    /* 005ab8ab: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 005ab8ad: mov ecx, esi */ r_ecx = r_esi;
    /* 005ab8af: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x5ab8b5u); call_ind(t); }
    /* 005ab8b5: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 005ab8b7: mov ecx, esi */ r_ecx = r_esi;
    /* 005ab8b9: call dword ptr [eax + 0x168] */ { u32 t = R32((u32)(r_eax+0x168u)); r_esp -= 4; W32(r_esp, 0x5ab8bfu); call_ind(t); }
    /* 005ab8bf: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005ab8c0: ret 4 */ FN_RET(0x005ab87c); r_esp += 8; return;
L_005ab8c3:; BB(0x005ab8c3);
    /* 005ab8c3: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005ab8c6: jne 0x5ab8f7 */ if (!fZ) goto L_005ab8f7;
L_005ab8c8:; BB(0x005ab8c8);
    /* 005ab8c8: mov eax, dword ptr [esi + 0x44c] */ r_eax = R32((u32)(r_esi+0x44cu));
    /* 005ab8ce: and eax, 0xffffffee */ {  u32 a = r_eax; u32 b = 0xffffffeeu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ab8d1: mov dword ptr [esi + 0x44c], eax */ W32((u32)(r_esi+0x44cu), r_eax);
    /* 005ab8d7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005ab8d8: ret 4 */ FN_RET(0x005ab87c); r_esp += 8; return;
L_005ab8db:; BB(0x005ab8db);
    /* 005ab8db: mov eax, dword ptr [esi + 0x490] */ r_eax = R32((u32)(r_esi+0x490u));
    /* 005ab8e1: lea ecx, [esi + 0x490] */ r_ecx = (u32)(r_esi+0x490u);
    /* 005ab8e7: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x5ab8eau); call_ind(t); }
    /* 005ab8ea: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ab8ec: je 0x5ab8f7 */ if (fZ) goto L_005ab8f7;
L_005ab8ee:; BB(0x005ab8ee);
    /* 005ab8ee: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005ab8f0: mov ecx, esi */ r_ecx = r_esi;
    /* 005ab8f2: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5ab8f7u); f_0051f62c();
L_005ab8f7:; BB(0x005ab8f7);
    /* 005ab8f7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005ab8f8: ret 4 */ FN_RET(0x005ab87c); r_esp += 8; return;
L_005ab8fb:; BB(0x005ab8fb);
    /* 005ab8fb: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 005ab8fd: mov eax, 2 */ r_eax = 0x2u;
    /* 005ab902: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
    /* 005ab909: mov ecx, esi */ r_ecx = r_esi;
    /* 005ab90b: call dword ptr [edx + 0x184] */ { u32 t = R32((u32)(r_edx+0x184u)); r_esp -= 4; W32(r_esp, 0x5ab911u); call_ind(t); }
    /* 005ab911: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005ab913: mov eax, dword ptr [esi + 0x44c] */ r_eax = R32((u32)(r_esi+0x44cu));
    /* 005ab919: or eax, 0x11 */ {  u32 a = r_eax; u32 b = 0x11u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005ab91c: mov dword ptr [esi + 0x44c], eax */ W32((u32)(r_esi+0x44cu), r_eax);
    /* 005ab922: mov ecx, esi */ r_ecx = r_esi;
    /* 005ab924: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x5ab929u); f_0051f664();
    /* 005ab929: mov ecx, esi */ r_ecx = r_esi;
    /* 005ab92b: call 0x520f68 */ r_esp -= 4; W32(r_esp, 0x5ab930u); f_00520f68();
    /* 005ab930: lea ecx, [esi + 0x490] */ r_ecx = (u32)(r_esi+0x490u);
    /* 005ab936: call 0x576c48 */ r_esp -= 4; W32(r_esp, 0x5ab93bu); f_00576c48();
    /* 005ab93b: add esi, 0x38 */ {  u32 a = r_esi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005ab93e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005ab93f: call 0x578a20 */ r_esp -= 4; W32(r_esp, 0x5ab944u); f_00578a20();
    /* 005ab944: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005ab945: call 0x578a68 */ r_esp -= 4; W32(r_esp, 0x5ab94au); f_00578a68();
    /* 005ab94a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005ab94d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005ab94e: ret 4 */ FN_RET(0x005ab87c); r_esp += 8; return;
}

void f_005ab954(void) /* sub_5AB954 */
{
    FN_ENTER(0x005ab954);
    /* 005ab954: mov ecx, dword ptr [0xa74870] */ r_ecx = R32((u32)(0xa74870u));
    /* 005ab95a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ab95c: je 0x5ab971 */ if (fZ) goto L_005ab971;
L_005ab95e:; BB(0x005ab95e);
    /* 005ab95e: je 0x5ab967 */ if (fZ) goto L_005ab967;
L_005ab960:; BB(0x005ab960);
    /* 005ab960: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005ab962: call 0x45a950 */ r_esp -= 4; W32(r_esp, 0x5ab967u); f_0045a950();
L_005ab967:; BB(0x005ab967);
    /* 005ab967: mov dword ptr [0xa74870], 0 */ W32((u32)(0xa74870u), 0x0u);
L_005ab971:; BB(0x005ab971);
    /* 005ab971: mov ecx, dword ptr [0xa7486c] */ r_ecx = R32((u32)(0xa7486cu));
    /* 005ab977: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ab979: je 0x5ab98e */ if (fZ) goto L_005ab98e;
L_005ab97b:; BB(0x005ab97b);
    /* 005ab97b: je 0x5ab984 */ if (fZ) goto L_005ab984;
L_005ab97d:; BB(0x005ab97d);
    /* 005ab97d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005ab97f: call 0x45a950 */ r_esp -= 4; W32(r_esp, 0x5ab984u); f_0045a950();
L_005ab984:; BB(0x005ab984);
    /* 005ab984: mov dword ptr [0xa7486c], 0 */ W32((u32)(0xa7486cu), 0x0u);
L_005ab98e:; BB(0x005ab98e);
    /* 005ab98e: mov ecx, dword ptr [0xa74858] */ r_ecx = R32((u32)(0xa74858u));
    /* 005ab994: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ab996: je 0x5ab9ab */ if (fZ) goto L_005ab9ab;
L_005ab998:; BB(0x005ab998);
    /* 005ab998: je 0x5ab9a1 */ if (fZ) goto L_005ab9a1;
L_005ab99a:; BB(0x005ab99a);
    /* 005ab99a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005ab99c: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x5ab9a1u); f_004066a8();
L_005ab9a1:; BB(0x005ab9a1);
    /* 005ab9a1: mov dword ptr [0xa74858], 0 */ W32((u32)(0xa74858u), 0x0u);
L_005ab9ab:; BB(0x005ab9ab);
    /* 005ab9ab: ret  */ FN_RET(0x005ab954); r_esp += 4; return;
}

void f_005ab9ac(void)
{
    FN_ENTER(0x005ab9ac);
    /* 005ab9ac: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ab9ad: mov ebp, esp */ r_ebp = r_esp;
    /* 005ab9af: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ab9b1: push 0x8d8d40 */ { u32 v = 0x8d8d40u; r_esp -= 4; W32(r_esp, v); }
    /* 005ab9b6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005ab9bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ab9bd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005ab9c4: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ab9c7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005ab9ca: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005ab9cd: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005ab9d0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005ab9d3: push 0x4cc */ { u32 v = 0x4ccu; r_esp -= 4; W32(r_esp, v); }
    /* 005ab9d8: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005ab9df: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5ab9e4u); f_005caba4();
    /* 005ab9e4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005ab9e5: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005ab9e8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ab9ea: je 0x5aba23 */ if (fZ) goto L_005aba23;
L_005ab9ec:; BB(0x005ab9ec);
    /* 005ab9ec: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005ab9f3: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005ab9fa: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005ab9fd: push dword ptr [0xaca364] */ { u32 v = R32((u32)(0xaca364u)); r_esp -= 4; W32(r_esp, v); }
    /* 005aba03: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005aba06: call 0x5aba28 */ r_esp -= 4; W32(r_esp, 0x5aba0bu); f_005aba28();
    /* 005aba0b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005aba0e: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005aba15:; BB(0x005aba15);
    /* 005aba15: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005aba18: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005aba1f: mov esp, ebp */ r_esp = r_ebp;
    /* 005aba21: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005aba22: ret  */ FN_RET(0x005ab9ac); r_esp += 4; return;
L_005aba23:; BB(0x005aba23);
    /* 005aba23: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005aba25: jmp 0x5aba15 */ goto L_005aba15;
}

void f_005ab9fd(void)
{
    FN_ENTER(0x005ab9fd);
    /* 005ab9fd: push dword ptr [0xaca364] */ { u32 v = R32((u32)(0xaca364u)); r_esp -= 4; W32(r_esp, v); }
    /* 005aba03: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005aba06: call 0x5aba28 */ r_esp -= 4; W32(r_esp, 0x5aba0bu); f_005aba28();
    /* 005aba0b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005aba0e: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005aba15: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005aba18: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005aba1f: mov esp, ebp */ r_esp = r_ebp;
    /* 005aba21: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005aba22: ret  */ FN_RET(0x005ab9fd); r_esp += 4; return;
}

void f_005aba28(void) /* sub_5ABA28 */
{
    FN_ENTER(0x005aba28);
    /* 005aba28: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005aba29: mov ebp, esp */ r_ebp = r_esp;
    /* 005aba2b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005aba2d: push 0x8d8d90 */ { u32 v = 0x8d8d90u; r_esp -= 4; W32(r_esp, v); }
    /* 005aba32: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005aba38: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005aba39: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005aba40: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005aba43: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005aba46: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005aba49: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005aba4c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005aba4f: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005aba52: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005aba55: mov dword ptr [ebp - 0x44], ecx */ W32((u32)(r_ebp+0xffffffbcu), r_ecx);
    /* 005aba58: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005aba5b: call 0x5216f4 */ r_esp -= 4; W32(r_esp, 0x5aba60u); f_005216f4();
    /* 005aba60: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005aba67: push 0x5770ec */ { u32 v = 0x5770ecu; r_esp -= 4; W32(r_esp, v); }
    /* 005aba6c: push 0x57713c */ { u32 v = 0x57713cu; r_esp -= 4; W32(r_esp, v); }
    /* 005aba71: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 005aba74: mov dword ptr [eax], 0xb0aca0 */ W32((u32)(r_eax), 0xb0aca0u);
    /* 005aba7a: add eax, 0x3dc */ {  u32 a = r_eax; u32 b = 0x3dcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005aba7f: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005aba81: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 005aba83: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005aba84: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x5aba89u); f_00858736();
    /* 005aba89: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005aba90: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005aba93: add ecx, 0x490 */ {  u32 a = r_ecx; u32 b = 0x490u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005aba99: call 0x576a48 */ r_esp -= 4; W32(r_esp, 0x5aba9eu); f_00576a48();
    /* 005aba9e: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 005abaa5: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005abaa8: mov eax, dword ptr [0x9c0fa4] */ r_eax = R32((u32)(0x9c0fa4u));
    /* 005abaad: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005abab0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005abab1: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 005abab4: call 0x51f750 */ r_esp -= 4; W32(r_esp, 0x5abab9u); f_0051f750();
    /* 005abab9: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005ababc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005ababe: mov dword ptr [ecx + 0x370], eax */ W32((u32)(r_ecx+0x370u), r_eax);
    /* 005abac4: mov dword ptr [ecx + 0x44c], eax */ W32((u32)(r_ecx+0x44cu), r_eax);
    /* 005abaca: call 0x521840 */ r_esp -= 4; W32(r_esp, 0x5abacfu); f_00521840();
    /* 005abacf: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005abad2: mov ebx, dword ptr [0xa74858] */ r_ebx = R32((u32)(0xa74858u));
    /* 005abad8: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005abada: mov eax, dword ptr [ebx + 0x42c] */ r_eax = R32((u32)(r_ebx+0x42cu));
    /* 005abae0: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 005abae3: push 0x9c0ca0 */ { u32 v = 0x9c0ca0u; r_esp -= 4; W32(r_esp, v); }
    /* 005abae8: mov dword ptr [ecx + 0x34], edx */ W32((u32)(r_ecx+0x34u), r_edx);
    /* 005abaeb: mov esi, dword ptr [ebx + 0x42c] */ r_esi = R32((u32)(r_ebx+0x42cu));
    /* 005abaf1: mov edi, dword ptr [esi + 0xc] */ r_edi = R32((u32)(r_esi+0xcu));
    /* 005abaf4: mov dword ptr [ecx + 0x24], edi */ W32((u32)(r_ecx+0x24u), r_edi);
    /* 005abaf7: mov dword ptr [0x9c0d4c], 0x43160000 */ W32((u32)(0x9c0d4cu), 0x43160000u);
    /* 005abb01: mov dword ptr [0x9c0d78], 0x43160000 */ W32((u32)(0x9c0d78u), 0x43160000u);
    /* 005abb0b: call 0x51ff3c */ r_esp -= 4; W32(r_esp, 0x5abb10u); f_0051ff3c();
    /* 005abb10: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005abb13: mov eax, dword ptr [0xa74858] */ r_eax = R32((u32)(0xa74858u));
    /* 005abb18: mov dword ptr [ecx + 0xd8], 0x9c0d80 */ W32((u32)(r_ecx+0xd8u), 0x9c0d80u);
    /* 005abb22: mov edx, dword ptr [eax + 0x430] */ r_edx = R32((u32)(r_eax+0x430u));
    /* 005abb28: mov dword ptr [ecx + 0xdc], edx */ W32((u32)(r_ecx+0xdcu), r_edx);
    /* 005abb2e: mov ebx, 2 */ r_ebx = 0x2u;
    /* 005abb33: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005abb34: mov word ptr [ecx + 0xb8], bx */ W16((u32)(r_ecx+0xb8u), (u16)r_ebx);
    /* 005abb3b: call 0x7aa4c8 */ r_esp -= 4; W32(r_esp, 0x5abb40u); f_007aa4c8();
    /* 005abb40: push dword ptr [0xa74860] */ { u32 v = R32((u32)(0xa74860u)); r_esp -= 4; W32(r_esp, v); }
    /* 005abb46: push dword ptr [0xa74864] */ { u32 v = R32((u32)(0xa74864u)); r_esp -= 4; W32(r_esp, v); }
    /* 005abb4c: push dword ptr [0xa74868] */ { u32 v = R32((u32)(0xa74868u)); r_esp -= 4; W32(r_esp, v); }
    /* 005abb52: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005abb55: movzx eax, word ptr [ecx + 0xb8] */ r_eax = (u32)R16((u32)(r_ecx+0xb8u));
    /* 005abb5c: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 005abb63: call 0x520c70 */ r_esp -= 4; W32(r_esp, 0x5abb68u); f_00520c70();
    /* 005abb68: mov ecx, dword ptr [0xa74860] */ r_ecx = R32((u32)(0xa74860u));
    /* 005abb6e: mov esi, dword ptr [ebp - 0x44] */ r_esi = R32((u32)(r_ebp+0xffffffbcu));
    /* 005abb71: mov dword ptr [esi + 0x3c8], 4 */ W32((u32)(r_esi+0x3c8u), 0x4u);
    /* 005abb7b: movzx eax, word ptr [ecx + 2] */ r_eax = (u32)R16((u32)(r_ecx+0x2u));
    /* 005abb7f: push 0xff808080 */ { u32 v = 0xff808080u; r_esp -= 4; W32(r_esp, v); }
    /* 005abb84: push 0xa0303030 */ { u32 v = 0xa0303030u; r_esp -= 4; W32(r_esp, v); }
    /* 005abb89: mov word ptr [esi + 0x2f6], ax */ W16((u32)(r_esi+0x2f6u), (u16)r_eax);
    /* 005abb90: movzx edx, word ptr [ecx + 2] */ r_edx = (u32)R16((u32)(r_ecx+0x2u));
    /* 005abb94: mov word ptr [esi + 0x2fa], dx */ W16((u32)(r_esi+0x2fau), (u16)r_edx);
    /* 005abb9b: movzx ebx, word ptr [ecx + 2] */ r_ebx = (u32)R16((u32)(r_ecx+0x2u));
    /* 005abb9f: mov word ptr [esi + 0x2f8], bx */ W16((u32)(r_esi+0x2f8u), (u16)r_ebx);
    /* 005abba6: call 0x578cc4 */ r_esp -= 4; W32(r_esp, 0x5abbabu); f_00578cc4();
    /* 005abbab: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005abbae: mov dword ptr [edx + 0x484], eax */ W32((u32)(r_edx+0x484u), r_eax);
    /* 005abbb4: mov eax, dword ptr [edx + 0x3c8] */ r_eax = R32((u32)(r_edx+0x3c8u));
    /* 005abbba: push dword ptr [eax*4 + 0x92a5fc] */ { u32 v = R32((u32)(r_eax*4+0x92a5fcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005abbc1: push 0xa0303030 */ { u32 v = 0xa0303030u; r_esp -= 4; W32(r_esp, v); }
    /* 005abbc6: call 0x578cc4 */ r_esp -= 4; W32(r_esp, 0x5abbcbu); f_00578cc4();
    /* 005abbcb: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005abbce: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005abbd1: mov esi, dword ptr [ecx + 0x3c8] */ r_esi = R32((u32)(r_ecx+0x3c8u));
    /* 005abbd7: push 0x5d */ { u32 v = 0x5du; r_esp -= 4; W32(r_esp, v); }
    /* 005abbd9: mov dword ptr [ecx + 0x488], eax */ W32((u32)(r_ecx+0x488u), r_eax);
    /* 005abbdf: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005abbe1: mov eax, dword ptr [esi*8 + 0x92a500] */ r_eax = R32((u32)(r_esi*8+0x92a500u));
    /* 005abbe8: mov edx, dword ptr [esi*8 + 0x92a504] */ r_edx = R32((u32)(r_esi*8+0x92a504u));
    /* 005abbef: mov ebx, dword ptr [esi*8 + 0x92a508] */ r_ebx = R32((u32)(r_esi*8+0x92a508u));
    /* 005abbf6: mov edi, dword ptr [esi*8 + 0x92a50c] */ r_edi = R32((u32)(r_esi*8+0x92a50cu));
    /* 005abbfd: mov dword ptr [ecx + 0x3cc], eax */ W32((u32)(r_ecx+0x3ccu), r_eax);
    /* 005abc03: mov eax, dword ptr [ecx + 0x2e8] */ r_eax = R32((u32)(r_ecx+0x2e8u));
    /* 005abc09: mov dword ptr [ecx + 0x3d0], edx */ W32((u32)(r_ecx+0x3d0u), r_edx);
    /* 005abc0f: mov dword ptr [ecx + 0x3d4], ebx */ W32((u32)(r_ecx+0x3d4u), r_ebx);
    /* 005abc15: mov dword ptr [ecx + 0x3d8], edi */ W32((u32)(r_ecx+0x3d8u), r_edi);
    /* 005abc1b: or eax, 0x18 */ {  u32 a = r_eax; u32 b = 0x18u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005abc1e: mov dword ptr [ecx + 0x2e8], eax */ W32((u32)(r_ecx+0x2e8u), r_eax);
    /* 005abc24: call 0x520390 */ r_esp -= 4; W32(r_esp, 0x5abc29u); f_00520390();
    /* 005abc29: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005abc2c: mov dword ptr [ecx + 0x384], 0x40a00000 */ W32((u32)(r_ecx+0x384u), 0x40a00000u);
    /* 005abc36: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 005abc38: call 0x521820 */ r_esp -= 4; W32(r_esp, 0x5abc3du); f_00521820();
    /* 005abc3d: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005abc40: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 005abc42: call 0x5217fc */ r_esp -= 4; W32(r_esp, 0x5abc47u); f_005217fc();
    /* 005abc47: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 005abc4a: mov edx, dword ptr [eax + 0x490] */ r_edx = R32((u32)(r_eax+0x490u));
    /* 005abc50: mov dword ptr [eax + 0x4ac], 0 */ W32((u32)(r_eax+0x4acu), 0x0u);
    /* 005abc5a: lea ecx, [eax + 0x490] */ r_ecx = (u32)(r_eax+0x490u);
    /* 005abc60: call dword ptr [edx + 0xc] */ { u32 t = R32((u32)(r_edx+0xcu)); r_esp -= 4; W32(r_esp, 0x5abc63u); call_ind(t); }
    /* 005abc63: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005abc66: mov dword ptr [ecx + 0x4c4], 0 */ W32((u32)(r_ecx+0x4c4u), 0x0u);
    /* 005abc70: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005abc72: mov dword ptr [ecx + 0x4b0], eax */ W32((u32)(r_ecx+0x4b0u), r_eax);
    /* 005abc78: mov dword ptr [ecx + 0x4b4], eax */ W32((u32)(r_ecx+0x4b4u), r_eax);
    /* 005abc7e: mov dword ptr [ecx + 0x4b8], eax */ W32((u32)(r_ecx+0x4b8u), r_eax);
    /* 005abc84: mov dword ptr [ecx + 0x4bc], eax */ W32((u32)(r_ecx+0x4bcu), r_eax);
    /* 005abc8a: mov dword ptr [ecx + 0x4c0], eax */ W32((u32)(r_ecx+0x4c0u), r_eax);
    /* 005abc90: call 0x5abdd8 */ r_esp -= 4; W32(r_esp, 0x5abc95u); f_005abdd8();
    /* 005abc95: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005abc98: call 0x5abe04 */ r_esp -= 4; W32(r_esp, 0x5abc9du); f_005abe04();
    /* 005abc9d: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005abca0: call 0x51ffdc */ r_esp -= 4; W32(r_esp, 0x5abca5u); f_0051ffdc();
    /* 005abca5: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005abca8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005abcaa: mov word ptr [ecx + 0x32e], ax */ W16((u32)(r_ecx+0x32eu), (u16)r_eax);
    /* 005abcb1: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005abcb3: call 0x5738b0 */ r_esp -= 4; W32(r_esp, 0x5abcb8u); f_005738b0();
    /* 005abcb8: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005abcbb: mov eax, dword ptr [ecx + 0xb0] */ r_eax = R32((u32)(r_ecx+0xb0u));
    /* 005abcc1: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005abcc4: mov dword ptr [ecx + 0xb0], eax */ W32((u32)(r_ecx+0xb0u), r_eax);
    /* 005abcca: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_005abccc:; BB(0x005abccc);
    /* 005abccc: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 005abccf: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005abcd1: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 005abcd4: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005abcd6: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005abcd8: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005abcda: lea ecx, [ecx + edx + 0x3dc] */ r_ecx = (u32)(r_ecx+r_edx+0x3dcu);
    /* 005abce1: call 0x57739c */ r_esp -= 4; W32(r_esp, 0x5abce6u); f_0057739c();
    /* 005abce6: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005abce9: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005abcec: jge 0x5abcf3 */ if ((fS==fO)) goto L_005abcf3;
L_005abcee:; BB(0x005abcee);
    /* 005abcee: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005abcf1: jmp 0x5abccc */ goto L_005abccc;
L_005abcf3:; BB(0x005abcf3);
    /* 005abcf3: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005abcf6: mov edx, dword ptr [0xa7485c] */ r_edx = R32((u32)(0xa7485cu));
    /* 005abcfc: fld dword ptr [0x92a5b0] */ FPUSH(R_F32((u32)(0x92a5b0u)));
    /* 005abd02: fld dword ptr [0x92a5ac] */ FPUSH(R_F32((u32)(0x92a5acu)));
    /* 005abd08: fld dword ptr [edx + 0x14] */ FPUSH(R_F32((u32)(r_edx+0x14u)));
    /* 005abd0b: fmul dword ptr [0x92a5c0] */ ST(0) = ST(0) * R_F32((u32)(0x92a5c0u));
    /* 005abd11: fdiv dword ptr [0x92a5bc] */ ST(0) = ST(0) / R_F32((u32)(0x92a5bcu));
    /* 005abd17: fnstcw word ptr [ebp - 0x40] */ W16((u32)(r_ebp+0xffffffc0u), fcw);
    /* 005abd1a: movzx eax, word ptr [ebp - 0x40] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc0u));
    /* 005abd1e: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005abd23: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 005abd26: fldcw word ptr [ebp - 0x38] */ fcw = R16((u32)(r_ebp+0xffffffc8u));
    /* 005abd29: fistp dword ptr [ecx + 0x48c] */ W32((u32)(r_ecx+0x48cu), (u32)fx_int32(ST(0))); FPOP();
    /* 005abd2f: fldcw word ptr [ebp - 0x40] */ fcw = R16((u32)(r_ebp+0xffffffc0u));
    /* 005abd32: mov dword ptr [ecx + 0x460], 0x442f0000 */ W32((u32)(r_ecx+0x460u), 0x442f0000u);
    /* 005abd3c: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 005abd3f: mov dword ptr [ecx + 0x464], eax */ W32((u32)(r_ecx+0x464u), r_eax);
    /* 005abd45: fld dword ptr [edx + 0x10] */ FPUSH(R_F32((u32)(r_edx+0x10u)));
    /* 005abd48: fnstcw word ptr [ebp - 0x40] */ W16((u32)(r_ebp+0xffffffc0u), fcw);
    /* 005abd4b: movzx eax, word ptr [ebp - 0x40] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc0u));
    /* 005abd4f: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005abd54: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 005abd57: fldcw word ptr [ebp - 0x38] */ fcw = R16((u32)(r_ebp+0xffffffc8u));
    /* 005abd5a: fistp dword ptr [ebp - 0x30] */ W32((u32)(r_ebp+0xffffffd0u), (u32)fx_int32(ST(0))); FPOP();
    /* 005abd5d: fldcw word ptr [ebp - 0x40] */ fcw = R16((u32)(r_ebp+0xffffffc0u));
    /* 005abd60: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 005abd63: mov dword ptr [ecx + 0x468], edi */ W32((u32)(r_ecx+0x468u), r_edi);
    /* 005abd69: mov esi, edi */ r_esi = r_edi;
    /* 005abd6b: mov dword ptr [ecx + 0x470], 0 */ W32((u32)(r_ecx+0x470u), 0x0u);
    /* 005abd75: sar esi, 1 */ { u32 c = (1u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 005abd77: shr esi, 0x1e */ { u32 c = (30u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 005abd7a: add esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005abd7c: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 005abd7f: mov dword ptr [ecx + 0x474], 0 */ W32((u32)(r_ecx+0x474u), 0x0u);
    /* 005abd89: sar esi, 2 */ { u32 c = (2u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 005abd8c: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005abd8e: mov dword ptr [ebp - 0x28], esi */ W32((u32)(r_ebp+0xffffffd8u), r_esi);
    /* 005abd91: fild dword ptr [ebp - 0x28] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd8u)));
    /* 005abd94: fdivr dword ptr [0x92a5b4] */ ST(0) = R_F32((u32)(0x92a5b4u)) / ST(0);
    /* 005abd9a: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 005abd9d: fstp dword ptr [ecx + 0x46c] */ W_F32((u32)(r_ecx+0x46cu), ST(0)); FPOP();
    /* 005abda3: mov dword ptr [ecx + 0x478], ebx */ W32((u32)(r_ecx+0x478u), r_ebx);
    /* 005abda9: mov dword ptr [ecx + 0x47c], ebx */ W32((u32)(r_ecx+0x47cu), r_ebx);
    /* 005abdaf: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005abdb1: fmul dword ptr [edx + 4] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x4u));
    /* 005abdb4: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005abdb7: fstp dword ptr [ecx + 0x480] */ W_F32((u32)(r_ecx+0x480u), ST(0)); FPOP();
    /* 005abdbd: fmul dword ptr [edx] */ ST(0) = ST(0) * R_F32((u32)(r_edx));
    /* 005abdbf: fstp dword ptr [ecx + 0x450] */ W_F32((u32)(r_ecx+0x450u), ST(0)); FPOP();
    /* 005abdc5: mov eax, ecx */ r_eax = r_ecx;
    /* 005abdc7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005abdca: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005abdd1: mov esp, ebp */ r_esp = r_ebp;
    /* 005abdd3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005abdd4: ret 8 */ FN_RET(0x005aba28); r_esp += 12; return;
}

void f_005abdd8(void) /* sub_5ABDD8 */
{
    FN_ENTER(0x005abdd8);
    /* 005abdd8: fld dword ptr [0x92a5a8] */ FPUSH(R_F32((u32)(0x92a5a8u)));
    /* 005abdde: fadd dword ptr [ecx + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x3cu));
    /* 005abde1: mov eax, dword ptr [ecx + 0x38] */ r_eax = R32((u32)(r_ecx+0x38u));
    /* 005abde4: mov edx, dword ptr [ecx + 0x40] */ r_edx = R32((u32)(r_ecx+0x40u));
    /* 005abde7: fst dword ptr [ecx + 0x304] */ W_F32((u32)(r_ecx+0x304u), ST(0));
    /* 005abded: fstp dword ptr [ecx + 0x78] */ W_F32((u32)(r_ecx+0x78u), ST(0)); FPOP();
    /* 005abdf0: mov dword ptr [ecx + 0x300], eax */ W32((u32)(r_ecx+0x300u), r_eax);
    /* 005abdf6: mov dword ptr [ecx + 0x308], edx */ W32((u32)(r_ecx+0x308u), r_edx);
    /* 005abdfc: mov dword ptr [ecx + 0x74], eax */ W32((u32)(r_ecx+0x74u), r_eax);
    /* 005abdff: mov dword ptr [ecx + 0x7c], edx */ W32((u32)(r_ecx+0x7cu), r_edx);
    /* 005abe02: ret  */ FN_RET(0x005abdd8); r_esp += 4; return;
}

void f_005abe04(void) /* sub_5ABE04 */
{
    FN_ENTER(0x005abe04);
    /* 005abe04: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005abe05: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005abe08: mov edi, ecx */ r_edi = r_ecx;
    /* 005abe0a: fld dword ptr [edi + 0x304] */ FPUSH(R_F32((u32)(r_edi+0x304u)));
    /* 005abe10: fsub dword ptr [edi + 0x3c] */ ST(0) = ST(0) - R_F32((u32)(r_edi+0x3cu));
    /* 005abe13: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 005abe16: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005abe17: push 0x41 */ { u32 v = 0x41u; r_esp -= 4; W32(r_esp, v); }
    /* 005abe19: mov eax, dword ptr [edi + 0xa4] */ r_eax = R32((u32)(r_edi+0xa4u));
    /* 005abe1f: fstp dword ptr [eax + 4] */ W_F32((u32)(r_eax+0x4u), ST(0)); FPOP();
    /* 005abe22: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005abe24: mov ecx, edi */ r_ecx = r_edi;
    /* 005abe26: call dword ptr [eax + 0x10c] */ { u32 t = R32((u32)(r_eax+0x10cu)); r_esp -= 4; W32(r_esp, 0x5abe2cu); call_ind(t); }
    /* 005abe2c: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005abe2f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005abe31: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005abe32: mov ecx, edi */ r_ecx = r_edi;
    /* 005abe34: call 0x520068 */ r_esp -= 4; W32(r_esp, 0x5abe39u); f_00520068();
    /* 005abe39: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 005abe3d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005abe3e: push 0x21 */ { u32 v = 0x21u; r_esp -= 4; W32(r_esp, v); }
    /* 005abe40: fld dword ptr [edi + 0x304] */ FPUSH(R_F32((u32)(r_edi+0x304u)));
    /* 005abe46: fsub dword ptr [edi + 0x3c] */ ST(0) = ST(0) - R_F32((u32)(r_edi+0x3cu));
    /* 005abe49: mov eax, dword ptr [edi + 0xa4] */ r_eax = R32((u32)(r_edi+0xa4u));
    /* 005abe4f: fstp dword ptr [eax + 0x5c] */ W_F32((u32)(r_eax+0x5cu), ST(0)); FPOP();
    /* 005abe52: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005abe54: mov ecx, edi */ r_ecx = r_edi;
    /* 005abe56: call dword ptr [eax + 0x10c] */ { u32 t = R32((u32)(r_eax+0x10cu)); r_esp -= 4; W32(r_esp, 0x5abe5cu); call_ind(t); }
    /* 005abe5c: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 005abe60: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005abe62: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005abe63: mov ecx, edi */ r_ecx = r_edi;
    /* 005abe65: call 0x520068 */ r_esp -= 4; W32(r_esp, 0x5abe6au); f_00520068();
    /* 005abe6a: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 005abe6e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005abe6f: push 0x2b */ { u32 v = 0x2bu; r_esp -= 4; W32(r_esp, v); }
    /* 005abe71: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 005abe73: mov ecx, edi */ r_ecx = r_edi;
    /* 005abe75: call dword ptr [edx + 0x10c] */ { u32 t = R32((u32)(r_edx+0x10cu)); r_esp -= 4; W32(r_esp, 0x5abe7bu); call_ind(t); }
    /* 005abe7b: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 005abe7f: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005abe81: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005abe82: mov ecx, edi */ r_ecx = r_edi;
    /* 005abe84: call 0x520068 */ r_esp -= 4; W32(r_esp, 0x5abe89u); f_00520068();
    /* 005abe89: mov eax, dword ptr [edi + 0x44c] */ r_eax = R32((u32)(r_edi+0x44cu));
    /* 005abe8f: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005abe91: je 0x5abe9a */ if (fZ) goto L_005abe9a;
L_005abe93:; BB(0x005abe93);
    /* 005abe93: mov edx, 1 */ r_edx = 0x1u;
    /* 005abe98: jmp 0x5abe9c */ goto L_005abe9c;
L_005abe9a:; BB(0x005abe9a);
    /* 005abe9a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_005abe9c:; BB(0x005abe9c);
    /* 005abe9c: mov eax, dword ptr [edi + 0xa4] */ r_eax = R32((u32)(r_edi+0xa4u));
    /* 005abea2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005abea4: je 0x5abeed */ if (fZ) goto L_005abeed;
L_005abea6:; BB(0x005abea6);
    /* 005abea6: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 005abea9: or edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 005abeac: mov dword ptr [eax + 0x44], edx */ W32((u32)(r_eax+0x44u), r_edx);
    /* 005abeaf: mov edx, dword ptr [edi + 0xa4] */ r_edx = R32((u32)(r_edi+0xa4u));
    /* 005abeb5: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 005abeb8: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005abebb: mov dword ptr [edx + 0x70], eax */ W32((u32)(r_edx+0x70u), r_eax);
    /* 005abebe: mov edx, dword ptr [edi + 0xa4] */ r_edx = R32((u32)(r_edi+0xa4u));
    /* 005abec4: mov eax, dword ptr [edx + 0x9c] */ r_eax = R32((u32)(r_edx+0x9cu));
    /* 005abeca: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005abecd: mov dword ptr [edx + 0x9c], eax */ W32((u32)(r_edx+0x9cu), r_eax);
    /* 005abed3: mov edi, dword ptr [edi + 0xa4] */ r_edi = R32((u32)(r_edi+0xa4u));
    /* 005abed9: mov ecx, dword ptr [edi + 0xc8] */ r_ecx = R32((u32)(r_edi+0xc8u));
    /* 005abedf: and ecx, 0xfffffffe */ {  u32 a = r_ecx; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 005abee2: mov dword ptr [edi + 0xc8], ecx */ W32((u32)(r_edi+0xc8u), r_ecx);
    /* 005abee8: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005abeeb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005abeec: ret  */ FN_RET(0x005abe04); r_esp += 4; return;
L_005abeed:; BB(0x005abeed);
    /* 005abeed: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 005abef0: and edx, 0xfffffffe */ {  u32 a = r_edx; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005abef3: mov dword ptr [eax + 0x44], edx */ W32((u32)(r_eax+0x44u), r_edx);
    /* 005abef6: mov edx, dword ptr [edi + 0xa4] */ r_edx = R32((u32)(r_edi+0xa4u));
    /* 005abefc: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 005abeff: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005abf02: mov dword ptr [edx + 0x70], eax */ W32((u32)(r_edx+0x70u), r_eax);
    /* 005abf05: mov edx, dword ptr [edi + 0xa4] */ r_edx = R32((u32)(r_edi+0xa4u));
    /* 005abf0b: mov eax, dword ptr [edx + 0x9c] */ r_eax = R32((u32)(r_edx+0x9cu));
    /* 005abf11: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005abf14: mov dword ptr [edx + 0x9c], eax */ W32((u32)(r_edx+0x9cu), r_eax);
    /* 005abf1a: mov edi, dword ptr [edi + 0xa4] */ r_edi = R32((u32)(r_edi+0xa4u));
    /* 005abf20: mov ecx, dword ptr [edi + 0xc8] */ r_ecx = R32((u32)(r_edi+0xc8u));
    /* 005abf26: or ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 005abf29: mov dword ptr [edi + 0xc8], ecx */ W32((u32)(r_edi+0xc8u), r_ecx);
    /* 005abf2f: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005abf32: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005abf33: ret  */ FN_RET(0x005abe04); r_esp += 4; return;
}

void f_005abf34(void) /* sub_5ABF34 */
{
    FN_ENTER(0x005abf34);
    /* 005abf34: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005abf35: mov esi, ecx */ r_esi = r_ecx;
    /* 005abf37: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x5abf3cu); f_004f7c84();
    /* 005abf3c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005abf3e: je 0x5abf4c */ if (fZ) goto L_005abf4c;
L_005abf40:; BB(0x005abf40);
    /* 005abf40: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 005abf42: mov ecx, esi */ r_ecx = r_esi;
    /* 005abf44: call dword ptr [eax + 0x1ac] */ { u32 t = R32((u32)(r_eax+0x1acu)); r_esp -= 4; W32(r_esp, 0x5abf4au); call_ind(t); }
    /* 005abf4a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005abf4b: ret  */ FN_RET(0x005abf34); r_esp += 4; return;
L_005abf4c:; BB(0x005abf4c);
    /* 005abf4c: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 005abf4e: mov ecx, esi */ r_ecx = r_esi;
    /* 005abf50: call dword ptr [eax + 0x154] */ { u32 t = R32((u32)(r_eax+0x154u)); r_esp -= 4; W32(r_esp, 0x5abf56u); call_ind(t); }
    /* 005abf56: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005abf59: je 0x5abf67 */ if (fZ) goto L_005abf67;
L_005abf5b:; BB(0x005abf5b);
    /* 005abf5b: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 005abf5d: mov ecx, esi */ r_ecx = r_esi;
    /* 005abf5f: call dword ptr [eax + 0x15c] */ { u32 t = R32((u32)(r_eax+0x15cu)); r_esp -= 4; W32(r_esp, 0x5abf65u); call_ind(t); }
    /* 005abf65: jmp 0x5abf8f */ goto L_005abf8f;
L_005abf67:; BB(0x005abf67);
    /* 005abf67: movsx eax, word ptr [esi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x32eu));
    /* 005abf6e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005abf70: je 0x5abf77 */ if (fZ) goto L_005abf77;
L_005abf72:; BB(0x005abf72);
    /* 005abf72: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005abf75: jne 0x5abf8f */ if (!fZ) goto L_005abf8f;
L_005abf77:; BB(0x005abf77);
    /* 005abf77: mov eax, dword ptr [esi + 0x490] */ r_eax = R32((u32)(r_esi+0x490u));
    /* 005abf7d: lea ecx, [esi + 0x490] */ r_ecx = (u32)(r_esi+0x490u);
    /* 005abf83: call dword ptr [eax + 8] */ { u32 t = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, 0x5abf86u); call_ind(t); }
    /* 005abf86: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005abf88: mov ecx, esi */ r_ecx = r_esi;
    /* 005abf8a: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5abf8fu); f_0051f62c();
L_005abf8f:; BB(0x005abf8f);
    /* 005abf8f: mov ecx, esi */ r_ecx = r_esi;
    /* 005abf91: call 0x5abdd8 */ r_esp -= 4; W32(r_esp, 0x5abf96u); f_005abdd8();
    /* 005abf96: mov ecx, esi */ r_ecx = r_esi;
    /* 005abf98: call 0x6401f0 */ r_esp -= 4; W32(r_esp, 0x5abf9du); f_006401f0();
    /* 005abf9d: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 005abf9f: mov ecx, esi */ r_ecx = r_esi;
    /* 005abfa1: call dword ptr [eax + 0x198] */ { u32 t = R32((u32)(r_eax+0x198u)); r_esp -= 4; W32(r_esp, 0x5abfa7u); call_ind(t); }
    /* 005abfa7: mov ecx, esi */ r_ecx = r_esi;
    /* 005abfa9: call 0x5abfd8 */ r_esp -= 4; W32(r_esp, 0x5abfaeu); f_005abfd8();
    /* 005abfae: mov ecx, esi */ r_ecx = r_esi;
    /* 005abfb0: call 0x5ac0b8 */ r_esp -= 4; W32(r_esp, 0x5abfb5u); f_005ac0b8();
    /* 005abfb5: mov eax, dword ptr [esi + 0x44c] */ r_eax = R32((u32)(r_esi+0x44cu));
    /* 005abfbb: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005abfbd: je 0x5abfc6 */ if (fZ) goto L_005abfc6;
L_005abfbf:; BB(0x005abfbf);
    /* 005abfbf: mov eax, 1 */ r_eax = 0x1u;
    /* 005abfc4: jmp 0x5abfc8 */ goto L_005abfc8;
L_005abfc6:; BB(0x005abfc6);
    /* 005abfc6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005abfc8:; BB(0x005abfc8);
    /* 005abfc8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005abfca: je 0x5abfd3 */ if (fZ) goto L_005abfd3;
L_005abfcc:; BB(0x005abfcc);
    /* 005abfcc: mov ecx, esi */ r_ecx = r_esi;
    /* 005abfce: call 0x5ac0e0 */ r_esp -= 4; W32(r_esp, 0x5abfd3u); f_005ac0e0();
L_005abfd3:; BB(0x005abfd3);
    /* 005abfd3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005abfd4: ret  */ FN_RET(0x005abf34); r_esp += 4; return;
}

void f_005abfd8(void) /* sub_5ABFD8 */
{
    FN_ENTER(0x005abfd8);
    /* 005abfd8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005abfd9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005abfda: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005abfdb: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005abfdc: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005abfde: mov eax, dword ptr [ebx + 0x3c8] */ r_eax = R32((u32)(r_ebx+0x3c8u));
    /* 005abfe4: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005abfe6: push dword ptr [eax*8 + 0x92a500] */ { u32 v = R32((u32)(r_eax*8+0x92a500u)); r_esp -= 4; W32(r_esp, v); }
    /* 005abfed: mov ebp, dword ptr [eax*8 + 0x92a504] */ r_ebp = R32((u32)(r_eax*8+0x92a504u));
    /* 005abff4: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005abff6: mov esi, dword ptr [eax*8 + 0x92a508] */ r_esi = R32((u32)(r_eax*8+0x92a508u));
    /* 005abffd: mov edi, dword ptr [eax*8 + 0x92a50c] */ r_edi = R32((u32)(r_eax*8+0x92a50cu));
    /* 005ac004: push dword ptr [ebx + 0x3cc] */ { u32 v = R32((u32)(r_ebx+0x3ccu)); r_esp -= 4; W32(r_esp, v); }
    /* 005ac00a: call 0x5ac058 */ r_esp -= 4; W32(r_esp, 0x5ac00fu); f_005ac058();
    /* 005ac00f: fstp dword ptr [ebx + 0x3cc] */ W_F32((u32)(r_ebx+0x3ccu), ST(0)); FPOP();
    /* 005ac015: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ac016: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005ac018: push dword ptr [ebx + 0x3d0] */ { u32 v = R32((u32)(r_ebx+0x3d0u)); r_esp -= 4; W32(r_esp, v); }
    /* 005ac01e: call 0x5ac058 */ r_esp -= 4; W32(r_esp, 0x5ac023u); f_005ac058();
    /* 005ac023: fstp dword ptr [ebx + 0x3d0] */ W_F32((u32)(r_ebx+0x3d0u), ST(0)); FPOP();
    /* 005ac029: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005ac02a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005ac02c: push dword ptr [ebx + 0x3d4] */ { u32 v = R32((u32)(r_ebx+0x3d4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005ac032: call 0x5ac058 */ r_esp -= 4; W32(r_esp, 0x5ac037u); f_005ac058();
    /* 005ac037: fstp dword ptr [ebx + 0x3d4] */ W_F32((u32)(r_ebx+0x3d4u), ST(0)); FPOP();
    /* 005ac03d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005ac03e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005ac040: push dword ptr [ebx + 0x3d8] */ { u32 v = R32((u32)(r_ebx+0x3d8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005ac046: call 0x5ac058 */ r_esp -= 4; W32(r_esp, 0x5ac04bu); f_005ac058();
    /* 005ac04b: fstp dword ptr [ebx + 0x3d8] */ W_F32((u32)(r_ebx+0x3d8u), ST(0)); FPOP();
    /* 005ac051: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005ac052: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ac053: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005ac054: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005ac055: ret  */ FN_RET(0x005abfd8); r_esp += 4; return;
}

