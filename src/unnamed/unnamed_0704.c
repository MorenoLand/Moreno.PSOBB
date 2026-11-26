#include "protos.h"

void f_00704598(void) /* sub_704598 */
{
    FN_ENTER(0x00704598);
    /* 00704598: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0070459c: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 007045a0: movzx ecx, word ptr [esp + 0xc] */ r_ecx = (u32)R16((u32)(r_esp+0xcu));
    /* 007045a5: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007045a6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007045a7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007045a8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007045a9: sub esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007045ac: mov edi, ecx */ r_edi = r_ecx;
    /* 007045ae: mov esi, edx */ r_esi = r_edx;
    /* 007045b0: mov ebp, eax */ r_ebp = r_eax;
    /* 007045b2: mov dword ptr [esp + 0x18], 0 */ W32((u32)(r_esp+0x18u), 0x0u);
    /* 007045ba: movsx ebx, word ptr [ebp] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_ebp));
    /* 007045be: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007045c0: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007045c2: je 0x704a81 */ if (fZ) goto L_00704a81;
L_007045c8:; BB(0x007045c8);
    /* 007045c8: movsx eax, word ptr [ebp + 2] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x2u));
    /* 007045cc: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007045cf: je 0x704cb8 */ if (fZ) goto L_00704cb8;
L_007045d5:; BB(0x007045d5);
    /* 007045d5: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007045d8: je 0x704c28 */ if (fZ) goto L_00704c28;
L_007045de:; BB(0x007045de);
    /* 007045de: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007045e1: je 0x704be5 */ if (fZ) goto L_00704be5;
L_007045e7:; BB(0x007045e7);
    /* 007045e7: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007045ea: je 0x7048e1 */ if (fZ) goto L_007048e1;
L_007045f0:; BB(0x007045f0);
    /* 007045f0: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007045f3: jne 0x7048c0 */ if (!fZ) goto L_007048c0;
L_007045f9:; BB(0x007045f9);
    /* 007045f9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007045fb: mov dword ptr [esp + 0x54], eax */ W32((u32)(r_esp+0x54u), r_eax);
    /* 007045ff: movsx eax, word ptr [ebp + 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x4u));
    /* 00704603: cmp eax, 0x2c4 */ {  u32 a = r_eax; u32 b = 0x2c4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00704608: mov dword ptr [esp + 0x4c], eax */ W32((u32)(r_esp+0x4cu), r_eax);
    /* 0070460c: je 0x704b6f */ if (fZ) goto L_00704b6f;
L_00704612:; BB(0x00704612);
    /* 00704612: cmp eax, 0x2c7 */ {  u32 a = r_eax; u32 b = 0x2c7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00704617: je 0x704b1e */ if (fZ) goto L_00704b1e;
L_0070461d:; BB(0x0070461d);
    /* 0070461d: mov ecx, eax */ r_ecx = r_eax;
    /* 0070461f: cmp ecx, 0x68c */ {  u32 a = r_ecx; u32 b = 0x68cu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00704625: jl 0x704675 */ if ((fS!=fO)) goto L_00704675;
L_00704627:; BB(0x00704627);
    /* 00704627: cmp ecx, 0x697 */ {  u32 a = r_ecx; u32 b = 0x697u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0070462d: jg 0x704675 */ if ((!fZ&&fS==fO)) goto L_00704675;
L_0070462f:; BB(0x0070462f);
    /* 0070462f: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 00704633: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00704634: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00704635: mov edi, eax */ r_edi = r_eax;
    /* 00704637: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00704638: call 0x706b60 */ r_esp -= 4; W32(r_esp, 0x70463du); f_00706b60();
    /* 0070463d: lea ecx, [esp + 0x24] */ r_ecx = (u32)(r_esp+0x24u);
    /* 00704641: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00704642: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00704643: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 00704645: call 0x70625c */ r_esp -= 4; W32(r_esp, 0x70464au); f_0070625c();
    /* 0070464a: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0070464f: mov dword ptr [esp + 0x68], ecx */ W32((u32)(r_esp+0x68u), r_ecx);
    /* 00704653: add edi, 0xfffff974 */ {  u32 a = r_edi; u32 b = 0xfffff974u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00704659: movzx ecx, di */ r_ecx = (u32)(u16)r_edi;
    /* 0070465c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0070465d: call 0x706b8c */ r_esp -= 4; W32(r_esp, 0x704662u); f_00706b8c();
    /* 00704662: mov edi, eax */ r_edi = r_eax;
    /* 00704664: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00704667: mov ecx, dword ptr [0xa96ed4] */ r_ecx = R32((u32)(0xa96ed4u));
    /* 0070466d: mov ecx, dword ptr [ecx + 0xa8c] */ r_ecx = R32((u32)(r_ecx+0xa8cu));
    /* 00704673: jmp 0x7046d7 */ goto L_007046d7;
L_00704675:; BB(0x00704675);
    /* 00704675: mov edi, eax */ r_edi = r_eax;
    /* 00704677: mov ecx, 3 */ r_ecx = 0x3u;
    /* 0070467c: mov dword ptr [esp + 0x50], ecx */ W32((u32)(r_esp+0x50u), r_ecx);
    /* 00704680: cmp edi, 0x2c5 */ {  u32 a = r_edi; u32 b = 0x2c5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00704686: je 0x704b17 */ if (fZ) goto L_00704b17;
L_0070468c:; BB(0x0070468c);
    /* 0070468c: mov ecx, eax */ r_ecx = r_eax;
    /* 0070468e: cmp ecx, 0x2c6 */ {  u32 a = r_ecx; u32 b = 0x2c6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00704694: jne 0x70469d */ if (!fZ) goto L_0070469d;
L_00704696:; BB(0x00704696);
    /* 00704696: mov edi, 2 */ r_edi = 0x2u;
    /* 0070469b: jmp 0x7046c8 */ goto L_007046c8;
L_0070469d:; BB(0x0070469d);
    /* 0070469d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0070469e: call 0x706320 */ r_esp -= 4; W32(r_esp, 0x7046a3u); f_00706320();
    /* 007046a3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007046a4: mov ecx, dword ptr [0xa96eb4] */ r_ecx = R32((u32)(0xa96eb4u));
    /* 007046aa: movzx ecx, byte ptr [eax + ecx] */ r_ecx = (u32)R8((u32)(r_eax+r_ecx));
    /* 007046ae: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007046b1: jne 0x7046ba */ if (!fZ) goto L_007046ba;
L_007046b3:; BB(0x007046b3);
    /* 007046b3: mov edi, 2 */ r_edi = 0x2u;
    /* 007046b8: jmp 0x7046c8 */ goto L_007046c8;
L_007046ba:; BB(0x007046ba);
    /* 007046ba: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007046bd: jne 0x7046c6 */ if (!fZ) goto L_007046c6;
L_007046bf:; BB(0x007046bf);
    /* 007046bf: mov edi, 4 */ r_edi = 0x4u;
    /* 007046c4: jmp 0x7046c8 */ goto L_007046c8;
L_007046c6:; BB(0x007046c6);
    /* 007046c6: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_007046c8:; BB(0x007046c8);
    /* 007046c8: mov ecx, dword ptr [esp + 0x4c] */ r_ecx = R32((u32)(r_esp+0x4cu));
    /* 007046cc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007046cd: call 0x706518 */ r_esp -= 4; W32(r_esp, 0x7046d2u); f_00706518();
    /* 007046d2: mov ecx, eax */ r_ecx = r_eax;
    /* 007046d4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_007046d7:; BB(0x007046d7);
    /* 007046d7: cmp ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007046da: jle 0x70488a */ if ((fZ||fS!=fO)) goto L_0070488a;
L_007046e0:; BB(0x007046e0);
    /* 007046e0: mov eax, dword ptr [0xa96eb8] */ r_eax = R32((u32)(0xa96eb8u));
    /* 007046e5: movsx edx, word ptr [ebp + 6] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x6u));
    /* 007046e9: mov dword ptr [esp + 0x4c], edx */ W32((u32)(r_esp+0x4cu), r_edx);
    /* 007046ed: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007046ef: mov dword ptr [esp + 0x44], edx */ W32((u32)(r_esp+0x44u), r_edx);
    /* 007046f3: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 007046f6: mov dword ptr [esp + 0x48], edx */ W32((u32)(r_esp+0x48u), r_edx);
    /* 007046fa: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 007046fc: jle 0x704738 */ if ((fZ||fS!=fO)) goto L_00704738;
L_007046fe:; BB(0x007046fe);
    /* 007046fe: mov edx, dword ptr [esp + 0x4c] */ r_edx = R32((u32)(r_esp+0x4cu));
    /* 00704702: mov eax, dword ptr [eax + 0x20] */ r_eax = R32((u32)(r_eax+0x20u));
    /* 00704705: mov dword ptr [esp + 0x40], edi */ W32((u32)(r_esp+0x40u), r_edi);
    /* 00704709: mov edi, dword ptr [esp + 0x48] */ r_edi = R32((u32)(r_esp+0x48u));
    /* 0070470d: mov dword ptr [esp + 0x3c], ebp */ W32((u32)(r_esp+0x3cu), r_ebp);
    /* 00704711: mov dword ptr [esp + 0x38], esi */ W32((u32)(r_esp+0x38u), r_esi);
    /* 00704715: mov esi, dword ptr [esp + 0x44] */ r_esi = R32((u32)(r_esp+0x44u));
L_00704719:; BB(0x00704719);
    /* 00704719: movsx ebp, word ptr [eax + esi*2] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_eax+r_esi*2));
    /* 0070471d: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00704720: cmp edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00704722: je 0x704ad2 */ if (fZ) goto L_00704ad2;
L_00704728:; BB(0x00704728);
    /* 00704728: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0070472a: jl 0x704719 */ if ((fS!=fO)) goto L_00704719;
L_0070472c:; BB(0x0070472c);
    /* 0070472c: mov edi, dword ptr [esp + 0x40] */ r_edi = R32((u32)(r_esp+0x40u));
    /* 00704730: mov ebp, dword ptr [esp + 0x3c] */ r_ebp = R32((u32)(r_esp+0x3cu));
    /* 00704734: mov esi, dword ptr [esp + 0x38] */ r_esi = R32((u32)(r_esp+0x38u));
L_00704738:; BB(0x00704738);
    /* 00704738: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 0070473c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070473e: je 0x704abe */ if (fZ) goto L_00704abe;
L_00704744:; BB(0x00704744);
    /* 00704744: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00704747: je 0x704775 */ if (fZ) goto L_00704775;
L_00704749:; BB(0x00704749);
    /* 00704749: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070474c: jne 0x70475f */ if (!fZ) goto L_0070475f;
L_0070474e:; BB(0x0070474e);
    /* 0070474e: mov eax, dword ptr [0xa96ed4] */ r_eax = R32((u32)(0xa96ed4u));
    /* 00704753: mov eax, dword ptr [eax + 0x1a9c] */ r_eax = R32((u32)(r_eax+0x1a9cu));
    /* 00704759: mov dword ptr [esp + 0x54], eax */ W32((u32)(r_esp+0x54u), r_eax);
    /* 0070475d: jmp 0x704784 */ goto L_00704784;
L_0070475f:; BB(0x0070475f);
    /* 0070475f: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00704762: jne 0x704784 */ if (!fZ) goto L_00704784;
L_00704764:; BB(0x00704764);
    /* 00704764: mov eax, dword ptr [0xa96ed4] */ r_eax = R32((u32)(0xa96ed4u));
    /* 00704769: mov eax, dword ptr [eax + 0x1aa4] */ r_eax = R32((u32)(r_eax+0x1aa4u));
    /* 0070476f: mov dword ptr [esp + 0x54], eax */ W32((u32)(r_esp+0x54u), r_eax);
    /* 00704773: jmp 0x704784 */ goto L_00704784;
L_00704775:; BB(0x00704775);
    /* 00704775: mov eax, dword ptr [0xa96ed4] */ r_eax = R32((u32)(0xa96ed4u));
    /* 0070477a: mov eax, dword ptr [eax + 0x1aa0] */ r_eax = R32((u32)(r_eax+0x1aa0u));
    /* 00704780: mov dword ptr [esp + 0x54], eax */ W32((u32)(r_esp+0x54u), r_eax);
L_00704784:; BB(0x00704784);
    /* 00704784: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00704787: jle 0x7047bd */ if ((fZ||fS!=fO)) goto L_007047bd;
L_00704789:; BB(0x00704789);
    /* 00704789: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0070478d: cmp eax, 0x685 */ {  u32 a = r_eax; u32 b = 0x685u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00704792: jne 0x7047bd */ if (!fZ) goto L_007047bd;
L_00704794:; BB(0x00704794);
    /* 00704794: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00704796: je 0x7047ed */ if (fZ) goto L_007047ed;
L_00704798:; BB(0x00704798);
    /* 00704798: mov eax, dword ptr [esp + 0x54] */ r_eax = R32((u32)(r_esp+0x54u));
    /* 0070479c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070479e: je 0x7047ed */ if (fZ) goto L_007047ed;
L_007047a0:; BB(0x007047a0);
    /* 007047a0: movsx edx, word ptr [ebp + 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x4u));
    /* 007047a4: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 007047a8: mov dword ptr [esp + 0x10], esi */ W32((u32)(r_esp+0x10u), r_esi);
    /* 007047ac: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 007047b0: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 007047b4: mov eax, ebp */ r_eax = r_ebp;
    /* 007047b6: call 0x704cdd */ r_esp -= 4; W32(r_esp, 0x7047bbu); f_00704cdd();
    /* 007047bb: jmp 0x7047ed */ goto L_007047ed;
L_007047bd:; BB(0x007047bd);
    /* 007047bd: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 007047c1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007047c2: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007047c3: movsx edx, word ptr [ebp + 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x4u));
    /* 007047c7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007047c8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007047c9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007047ca: call 0x70655c */ r_esp -= 4; W32(r_esp, 0x7047cfu); f_0070655c();
    /* 007047cf: lea ecx, [esp + 0x2c] */ r_ecx = (u32)(r_esp+0x2cu);
    /* 007047d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007047d4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007047d5: call 0x7068fc */ r_esp -= 4; W32(r_esp, 0x7047dau); f_007068fc();
    /* 007047da: lea ecx, [esp + 0x34] */ r_ecx = (u32)(r_esp+0x34u);
    /* 007047de: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007047df: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007047e0: mov ecx, dword ptr [esp + 0x78] */ r_ecx = R32((u32)(r_esp+0x78u));
    /* 007047e4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007047e5: call 0x7067e4 */ r_esp -= 4; W32(r_esp, 0x7047eau); f_007067e4();
    /* 007047ea: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_007047ed:; BB(0x007047ed);
    /* 007047ed: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 007047f1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007047f2: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007047f3: call 0x7068fc */ r_esp -= 4; W32(r_esp, 0x7047f8u); f_007068fc();
    /* 007047f8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_007047fb:; BB(0x007047fb);
    /* 007047fb: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007047fd: je 0x70485c */ if (fZ) goto L_0070485c;
L_007047ff:; BB(0x007047ff);
    /* 007047ff: cmp edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00704802: je 0x704aaf */ if (fZ) goto L_00704aaf;
L_00704808:; BB(0x00704808);
    /* 00704808: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070480b: je 0x704a9d */ if (fZ) goto L_00704a9d;
L_00704811:; BB(0x00704811);
    /* 00704811: mov ecx, dword ptr [0xa96eb8] */ r_ecx = R32((u32)(0xa96eb8u));
    /* 00704817: mov dword ptr [esp + 0x50], ecx */ W32((u32)(r_esp+0x50u), r_ecx);
    /* 0070481b: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070481e: je 0x704a93 */ if (fZ) goto L_00704a93;
L_00704824:; BB(0x00704824);
    /* 00704824: add dword ptr [esp + 0x50], 0x18 */ { u32 ad = (u32)(r_esp+0x50u);  u32 a = R32(ad); u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_00704829:; BB(0x00704829);
    /* 00704829: mov ecx, dword ptr [esp + 0x4c] */ r_ecx = R32((u32)(r_esp+0x4cu));
    /* 0070482d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0070482e: call 0x706340 */ r_esp -= 4; W32(r_esp, 0x704833u); f_00706340();
    /* 00704833: mov ecx, dword ptr [esp + 0x54] */ r_ecx = R32((u32)(r_esp+0x54u));
    /* 00704837: mov edi, dword ptr [ecx] */ r_edi = R32((u32)(r_ecx));
    /* 00704839: lea ecx, [esp + 0x1c] */ r_ecx = (u32)(r_esp+0x1cu);
    /* 0070483d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0070483e: movsx eax, word ptr [edi + eax*2] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+r_eax*2));
    /* 00704842: mov edi, dword ptr [0xa96ed4] */ r_edi = R32((u32)(0xa96ed4u));
    /* 00704848: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00704849: push dword ptr [edi + eax*4] */ { u32 v = R32((u32)(r_edi+r_eax*4)); r_esp -= 4; W32(r_esp, v); }
    /* 0070484c: mov ecx, dword ptr [esp + 0x5c] */ r_ecx = R32((u32)(r_esp+0x5cu));
    /* 00704850: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00704851: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00704852: call 0x70655c */ r_esp -= 4; W32(r_esp, 0x704857u); f_0070655c();
    /* 00704857: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0070485a: jmp 0x704870 */ goto L_00704870;
L_0070485c:; BB(0x0070485c);
    /* 0070485c: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 00704860: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00704861: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00704862: mov edi, dword ptr [esp + 0x54] */ r_edi = R32((u32)(r_esp+0x54u));
    /* 00704866: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00704867: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00704868: call 0x7064d8 */ r_esp -= 4; W32(r_esp, 0x70486du); f_007064d8();
    /* 0070486d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00704870:; BB(0x00704870);
    /* 00704870: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00704873: jle 0x7048aa */ if ((fZ||fS!=fO)) goto L_007048aa;
L_00704875:; BB(0x00704875);
    /* 00704875: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 00704879: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0070487a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0070487b: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0070487f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00704880: call 0x706b60 */ r_esp -= 4; W32(r_esp, 0x704885u); f_00706b60();
    /* 00704885: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00704888: jmp 0x7048aa */ goto L_007048aa;
L_0070488a:; BB(0x0070488a);
    /* 0070488a: movsx ebx, word ptr [ebp + 4] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_ebp+0x4u));
    /* 0070488e: cmp ebx, 0x2c7 */ {  u32 a = r_ebx; u32 b = 0x2c7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00704894: je 0x704b03 */ if (fZ) goto L_00704b03;
L_0070489a:; BB(0x0070489a);
    /* 0070489a: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 0070489e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0070489f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007048a0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007048a1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007048a2: call 0x7064d8 */ r_esp -= 4; W32(r_esp, 0x7048a7u); f_007064d8();
    /* 007048a7: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_007048aa:; BB(0x007048aa);
    /* 007048aa: movzx eax, word ptr [esi] */ r_eax = (u32)R16((u32)(r_esi));
    /* 007048ad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007048ae: call 0x815e78 */ r_esp -= 4; W32(r_esp, 0x7048b3u); f_00815e78();
    /* 007048b3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007048b4: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 007048b8: mov word ptr [esi], ax */ W16((u32)(r_esi), (u16)r_eax);
    /* 007048bb: jmp 0x704a6e */ goto L_00704a6e;
L_007048c0:; BB(0x007048c0);
    /* 007048c0: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007048c3: jne 0x704a6e */ if (!fZ) goto L_00704a6e;
L_007048c9:; BB(0x007048c9);
    /* 007048c9: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 007048cd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007048ce: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007048cf: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007048d0: call 0x7069fc */ r_esp -= 4; W32(r_esp, 0x7048d5u); f_007069fc();
    /* 007048d5: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007048d8: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 007048dc: jmp 0x704a6e */ goto L_00704a6e;
L_007048e1:; BB(0x007048e1);
    /* 007048e1: movsx eax, word ptr [ebp + 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x4u));
    /* 007048e5: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007048e7: mov dword ptr [esp + 0x54], ecx */ W32((u32)(r_esp+0x54u), r_ecx);
    /* 007048eb: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 007048ed: cmp eax, 0x2c4 */ {  u32 a = r_eax; u32 b = 0x2c4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007048f2: je 0x704bcf */ if (fZ) goto L_00704bcf;
L_007048f8:; BB(0x007048f8);
    /* 007048f8: cmp eax, 0x2c7 */ {  u32 a = r_eax; u32 b = 0x2c7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007048fd: je 0x704b99 */ if (fZ) goto L_00704b99;
L_00704903:; BB(0x00704903);
    /* 00704903: cmp eax, 0x68c */ {  u32 a = r_eax; u32 b = 0x68cu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00704908: jl 0x704944 */ if ((fS!=fO)) goto L_00704944;
L_0070490a:; BB(0x0070490a);
    /* 0070490a: cmp eax, 0x697 */ {  u32 a = r_eax; u32 b = 0x697u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0070490f: jg 0x704944 */ if ((!fZ&&fS==fO)) goto L_00704944;
L_00704911:; BB(0x00704911);
    /* 00704911: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 00704915: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00704916: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00704917: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00704918: call 0x706b60 */ r_esp -= 4; W32(r_esp, 0x70491du); f_00706b60();
    /* 0070491d: lea ecx, [esp + 0x24] */ r_ecx = (u32)(r_esp+0x24u);
    /* 00704921: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00704922: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00704923: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 00704925: call 0x70625c */ r_esp -= 4; W32(r_esp, 0x70492au); f_0070625c();
    /* 0070492a: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0070492d: mov ecx, dword ptr [0xa96ed4] */ r_ecx = R32((u32)(0xa96ed4u));
    /* 00704933: mov edi, dword ptr [ecx + 0xa8c] */ r_edi = R32((u32)(r_ecx+0xa8cu));
    /* 00704939: mov dword ptr [esp + 0x54], edi */ W32((u32)(r_esp+0x54u), r_edi);
    /* 0070493d: mov edi, 1 */ r_edi = 0x1u;
    /* 00704942: jmp 0x704960 */ goto L_00704960;
L_00704944:; BB(0x00704944);
    /* 00704944: cmp eax, 0x698 */ {  u32 a = r_eax; u32 b = 0x698u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00704949: jne 0x704960 */ if (!fZ) goto L_00704960;
L_0070494b:; BB(0x0070494b);
    /* 0070494b: mov ecx, dword ptr [0xa96ed4] */ r_ecx = R32((u32)(0xa96ed4u));
    /* 00704951: mov edi, dword ptr [ecx + 0xa8c] */ r_edi = R32((u32)(r_ecx+0xa8cu));
    /* 00704957: mov dword ptr [esp + 0x54], edi */ W32((u32)(r_esp+0x54u), r_edi);
    /* 0070495b: mov edi, 1 */ r_edi = 0x1u;
L_00704960:; BB(0x00704960);
    /* 00704960: cmp ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00704963: jle 0x704a4a */ if ((fZ||fS!=fO)) goto L_00704a4a;
L_00704969:; BB(0x00704969);
    /* 00704969: movsx ecx, word ptr [ebp + 6] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x6u));
    /* 0070496d: mov dword ptr [esp + 0x50], ecx */ W32((u32)(r_esp+0x50u), r_ecx);
    /* 00704971: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00704973: je 0x70499d */ if (fZ) goto L_0070499d;
L_00704975:; BB(0x00704975);
    /* 00704975: mov ecx, dword ptr [0xa96ebc] */ r_ecx = R32((u32)(0xa96ebcu));
    /* 0070497b: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070497e: je 0x704b91 */ if (fZ) goto L_00704b91;
L_00704984:; BB(0x00704984);
    /* 00704984: mov edi, dword ptr [esp + 0x50] */ r_edi = R32((u32)(r_esp+0x50u));
    /* 00704988: mov ecx, dword ptr [ecx] */ r_ecx = R32((u32)(r_ecx));
    /* 0070498a: movsx edi, word ptr [ecx + edi*2 - 0xb58] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ecx+r_edi*2+0xfffff4a8u));
    /* 00704992: mov ecx, dword ptr [0xa96ed4] */ r_ecx = R32((u32)(0xa96ed4u));
    /* 00704998: mov edi, dword ptr [ecx + edi*4] */ r_edi = R32((u32)(r_ecx+r_edi*4));
    /* 0070499b: jmp 0x7049a8 */ goto L_007049a8;
L_0070499d:; BB(0x0070499d);
    /* 0070499d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0070499e: call 0x706518 */ r_esp -= 4; W32(r_esp, 0x7049a3u); f_00706518();
    /* 007049a3: mov edi, eax */ r_edi = r_eax;
    /* 007049a5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_007049a8:; BB(0x007049a8);
    /* 007049a8: cmp ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007049ab: jle 0x7049e2 */ if ((fZ||fS!=fO)) goto L_007049e2;
L_007049ad:; BB(0x007049ad);
    /* 007049ad: movsx ecx, word ptr [ebp + 0xa] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xau));
    /* 007049b1: cmp ecx, 0x685 */ {  u32 a = r_ecx; u32 b = 0x685u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007049b7: jne 0x7049e2 */ if (!fZ) goto L_007049e2;
L_007049b9:; BB(0x007049b9);
    /* 007049b9: mov ecx, dword ptr [esp + 0x54] */ r_ecx = R32((u32)(r_esp+0x54u));
    /* 007049bd: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007049bf: je 0x704a11 */ if (fZ) goto L_00704a11;
L_007049c1:; BB(0x007049c1);
    /* 007049c1: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007049c3: je 0x704a11 */ if (fZ) goto L_00704a11;
L_007049c5:; BB(0x007049c5);
    /* 007049c5: mov edx, dword ptr [esp + 0x50] */ r_edx = R32((u32)(r_esp+0x50u));
    /* 007049c9: mov dword ptr [esp + 0xc], edi */ W32((u32)(r_esp+0xcu), r_edi);
    /* 007049cd: mov eax, ebp */ r_eax = r_ebp;
    /* 007049cf: mov dword ptr [esp + 0x10], esi */ W32((u32)(r_esp+0x10u), r_esi);
    /* 007049d3: lea edi, [esp + 0x18] */ r_edi = (u32)(r_esp+0x18u);
    /* 007049d7: mov dword ptr [esp + 0x14], edi */ W32((u32)(r_esp+0x14u), r_edi);
    /* 007049db: call 0x704cdd */ r_esp -= 4; W32(r_esp, 0x7049e0u); f_00704cdd();
    /* 007049e0: jmp 0x704a11 */ goto L_00704a11;
L_007049e2:; BB(0x007049e2);
    /* 007049e2: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 007049e6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007049e7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007049e8: mov ecx, dword ptr [esp + 0x5c] */ r_ecx = R32((u32)(r_esp+0x5cu));
    /* 007049ec: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007049ed: call 0x7067e4 */ r_esp -= 4; W32(r_esp, 0x7049f2u); f_007067e4();
    /* 007049f2: lea ecx, [esp + 0x24] */ r_ecx = (u32)(r_esp+0x24u);
    /* 007049f6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007049f7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007049f8: call 0x7068fc */ r_esp -= 4; W32(r_esp, 0x7049fdu); f_007068fc();
    /* 007049fd: lea ecx, [esp + 0x2c] */ r_ecx = (u32)(r_esp+0x2cu);
    /* 00704a01: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00704a02: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00704a03: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00704a04: call 0x7067e4 */ r_esp -= 4; W32(r_esp, 0x704a09u); f_007067e4();
    /* 00704a09: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00704a0c: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00704a0f: jle 0x704a5d */ if ((fZ||fS!=fO)) goto L_00704a5d;
L_00704a11:; BB(0x00704a11);
    /* 00704a11: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 00704a15: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00704a16: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00704a17: call 0x7068fc */ r_esp -= 4; W32(r_esp, 0x704a1cu); f_007068fc();
    /* 00704a1c: lea ecx, [esp + 0x20] */ r_ecx = (u32)(r_esp+0x20u);
    /* 00704a20: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00704a21: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00704a22: movsx edi, word ptr [ebp + 8] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 00704a26: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00704a27: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00704a28: call 0x7064d8 */ r_esp -= 4; W32(r_esp, 0x704a2du); f_007064d8();
    /* 00704a2d: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00704a30: cmp ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00704a33: jle 0x704a5d */ if ((fZ||fS!=fO)) goto L_00704a5d;
L_00704a35:; BB(0x00704a35);
    /* 00704a35: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 00704a39: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00704a3a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00704a3b: movsx ecx, word ptr [ebp + 0xa] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xau));
    /* 00704a3f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00704a40: call 0x706b60 */ r_esp -= 4; W32(r_esp, 0x704a45u); f_00706b60();
    /* 00704a45: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00704a48: jmp 0x704a5d */ goto L_00704a5d;
L_00704a4a:; BB(0x00704a4a);
    /* 00704a4a: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 00704a4e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00704a4f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00704a50: mov ecx, dword ptr [esp + 0x5c] */ r_ecx = R32((u32)(r_esp+0x5cu));
    /* 00704a54: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00704a55: call 0x7067e4 */ r_esp -= 4; W32(r_esp, 0x704a5au); f_007067e4();
    /* 00704a5a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00704a5d:; BB(0x00704a5d);
    /* 00704a5d: movzx eax, word ptr [esi] */ r_eax = (u32)R16((u32)(r_esi));
    /* 00704a60: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00704a61: call 0x815e78 */ r_esp -= 4; W32(r_esp, 0x704a66u); f_00815e78();
    /* 00704a66: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00704a67: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 00704a6b: mov word ptr [esi], ax */ W16((u32)(r_esi), (u16)r_eax);
L_00704a6e:; BB(0x00704a6e);
    /* 00704a6e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00704a70: mov word ptr [esi + edx*2], cx */ W16((u32)(r_esi+r_edx*2), (u16)r_ecx);
    /* 00704a74: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00704a77: mov eax, edx */ r_eax = r_edx;
    /* 00704a79: add esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00704a7c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00704a7d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00704a7e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00704a7f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00704a80: ret  */ FN_RET(0x00704598); r_esp += 4; return;
L_00704a81:; BB(0x00704a81);
    /* 00704a81: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00704a83: mov word ptr [esi], cx */ W16((u32)(r_esi), (u16)r_ecx);
    /* 00704a86: mov eax, 1 */ r_eax = 0x1u;
    /* 00704a8b: add esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00704a8e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00704a8f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00704a90: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00704a91: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00704a92: ret  */ FN_RET(0x00704598); r_esp += 4; return;
L_00704a93:; BB(0x00704a93);
    /* 00704a93: add dword ptr [esp + 0x50], 0x10 */ { u32 ad = (u32)(r_esp+0x50u);  u32 a = R32(ad); u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00704a98: jmp 0x704829 */ goto L_00704829;
L_00704a9d:; BB(0x00704a9d);
    /* 00704a9d: mov ecx, dword ptr [0xa96eb8] */ r_ecx = R32((u32)(0xa96eb8u));
    /* 00704aa3: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00704aa6: mov dword ptr [esp + 0x50], ecx */ W32((u32)(r_esp+0x50u), r_ecx);
    /* 00704aaa: jmp 0x704829 */ goto L_00704829;
L_00704aaf:; BB(0x00704aaf);
    /* 00704aaf: mov ecx, dword ptr [0xa96eb8] */ r_ecx = R32((u32)(0xa96eb8u));
    /* 00704ab5: mov dword ptr [esp + 0x50], ecx */ W32((u32)(r_esp+0x50u), r_ecx);
    /* 00704ab9: jmp 0x704829 */ goto L_00704829;
L_00704abe:; BB(0x00704abe);
    /* 00704abe: mov eax, dword ptr [0xa96ed4] */ r_eax = R32((u32)(0xa96ed4u));
    /* 00704ac3: mov eax, dword ptr [eax + 0x1a98] */ r_eax = R32((u32)(r_eax+0x1a98u));
    /* 00704ac9: mov dword ptr [esp + 0x54], eax */ W32((u32)(r_esp+0x54u), r_eax);
    /* 00704acd: jmp 0x704784 */ goto L_00704784;
L_00704ad2:; BB(0x00704ad2);
    /* 00704ad2: mov edi, dword ptr [esp + 0x40] */ r_edi = R32((u32)(r_esp+0x40u));
    /* 00704ad6: mov ebp, dword ptr [esp + 0x3c] */ r_ebp = R32((u32)(r_esp+0x3cu));
    /* 00704ada: mov esi, dword ptr [esp + 0x38] */ r_esi = R32((u32)(r_esp+0x38u));
    /* 00704ade: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 00704ae2: movsx edx, word ptr [ebp + 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x4u));
    /* 00704ae6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00704ae7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00704ae8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00704ae9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00704aea: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00704aeb: call 0x70655c */ r_esp -= 4; W32(r_esp, 0x704af0u); f_0070655c();
    /* 00704af0: lea ecx, [esp + 0x2c] */ r_ecx = (u32)(r_esp+0x2cu);
    /* 00704af4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00704af5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00704af6: call 0x7068fc */ r_esp -= 4; W32(r_esp, 0x704afbu); f_007068fc();
    /* 00704afb: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00704afe: jmp 0x7047fb */ goto L_007047fb;
L_00704b03:; BB(0x00704b03);
    /* 00704b03: lea ebx, [esp + 0x18] */ r_ebx = (u32)(r_esp+0x18u);
    /* 00704b07: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00704b08: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00704b09: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00704b0a: call 0x7067e4 */ r_esp -= 4; W32(r_esp, 0x704b0fu); f_007067e4();
    /* 00704b0f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00704b12: jmp 0x7048aa */ goto L_007048aa;
L_00704b17:; BB(0x00704b17);
    /* 00704b17: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00704b19: jmp 0x7046c8 */ goto L_007046c8;
L_00704b1e:; BB(0x00704b1e);
    /* 00704b1e: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 00704b22: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00704b23: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00704b24: mov eax, dword ptr [esp + 0x54] */ r_eax = R32((u32)(r_esp+0x54u));
    /* 00704b28: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00704b29: call 0x706b60 */ r_esp -= 4; W32(r_esp, 0x704b2eu); f_00706b60();
    /* 00704b2e: lea eax, [esp + 0x24] */ r_eax = (u32)(r_esp+0x24u);
    /* 00704b32: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00704b33: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00704b34: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 00704b36: call 0x70625c */ r_esp -= 4; W32(r_esp, 0x704b3bu); f_0070625c();
    /* 00704b3b: mov eax, 2 */ r_eax = 0x2u;
    /* 00704b40: mov dword ptr [esp + 0x68], eax */ W32((u32)(r_esp+0x68u), r_eax);
    /* 00704b44: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00704b45: call 0x706b8c */ r_esp -= 4; W32(r_esp, 0x704b4au); f_00706b8c();
    /* 00704b4a: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00704b4d: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00704b50: je 0x704b68 */ if (fZ) goto L_00704b68;
L_00704b52:; BB(0x00704b52);
    /* 00704b52: mov edi, 1 */ r_edi = 0x1u;
L_00704b57:; BB(0x00704b57);
    /* 00704b57: mov ecx, dword ptr [0xa96ed4] */ r_ecx = R32((u32)(0xa96ed4u));
    /* 00704b5d: mov ecx, dword ptr [ecx + 0xa98] */ r_ecx = R32((u32)(r_ecx+0xa98u));
    /* 00704b63: jmp 0x7046d7 */ goto L_007046d7;
L_00704b68:; BB(0x00704b68);
    /* 00704b68: mov edi, 3 */ r_edi = 0x3u;
    /* 00704b6d: jmp 0x704b57 */ goto L_00704b57;
L_00704b6f:; BB(0x00704b6f);
    /* 00704b6f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00704b71: mov dword ptr [esp + 0x50], eax */ W32((u32)(r_esp+0x50u), r_eax);
    /* 00704b75: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00704b76: call 0x706b8c */ r_esp -= 4; W32(r_esp, 0x704b7bu); f_00706b8c();
    /* 00704b7b: mov edi, eax */ r_edi = r_eax;
    /* 00704b7d: mov ecx, dword ptr [esp + 0x50] */ r_ecx = R32((u32)(r_esp+0x50u));
    /* 00704b81: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00704b82: call 0x706518 */ r_esp -= 4; W32(r_esp, 0x704b87u); f_00706518();
    /* 00704b87: mov ecx, eax */ r_ecx = r_eax;
    /* 00704b89: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00704b8c: jmp 0x7046d7 */ goto L_007046d7;
L_00704b91:; BB(0x00704b91);
    /* 00704b91: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00704b94: jmp 0x704984 */ goto L_00704984;
L_00704b99:; BB(0x00704b99);
    /* 00704b99: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 00704b9d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00704b9e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00704b9f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00704ba0: call 0x706b60 */ r_esp -= 4; W32(r_esp, 0x704ba5u); f_00706b60();
    /* 00704ba5: lea ecx, [esp + 0x24] */ r_ecx = (u32)(r_esp+0x24u);
    /* 00704ba9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00704baa: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00704bab: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 00704bad: call 0x70625c */ r_esp -= 4; W32(r_esp, 0x704bb2u); f_0070625c();
    /* 00704bb2: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00704bb5: mov ecx, dword ptr [0xa96ed4] */ r_ecx = R32((u32)(0xa96ed4u));
    /* 00704bbb: mov edi, dword ptr [ecx + 0xa98] */ r_edi = R32((u32)(r_ecx+0xa98u));
    /* 00704bc1: mov dword ptr [esp + 0x54], edi */ W32((u32)(r_esp+0x54u), r_edi);
    /* 00704bc5: mov edi, 2 */ r_edi = 0x2u;
    /* 00704bca: jmp 0x704960 */ goto L_00704960;
L_00704bcf:; BB(0x00704bcf);
    /* 00704bcf: push 0x2c4 */ { u32 v = 0x2c4u; r_esp -= 4; W32(r_esp, v); }
    /* 00704bd4: call 0x706518 */ r_esp -= 4; W32(r_esp, 0x704bd9u); f_00706518();
    /* 00704bd9: mov dword ptr [esp + 0x58], eax */ W32((u32)(r_esp+0x58u), r_eax);
    /* 00704bdd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00704be0: jmp 0x704960 */ goto L_00704960;
L_00704be5:; BB(0x00704be5);
    /* 00704be5: cmp ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00704be8: jle 0x704c0c */ if ((fZ||fS!=fO)) goto L_00704c0c;
L_00704bea:; BB(0x00704bea);
    /* 00704bea: lea ebx, [esp + 0x1c] */ r_ebx = (u32)(r_esp+0x1cu);
    /* 00704bee: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00704bef: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00704bf0: call 0x706360 */ r_esp -= 4; W32(r_esp, 0x704bf5u); f_00706360();
    /* 00704bf5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00704bf8: lea eax, [esp + 0x1c] */ r_eax = (u32)(r_esp+0x1cu);
    /* 00704bfc: mov edx, esi */ r_edx = r_esi;
    /* 00704bfe: mov ecx, edi */ r_ecx = r_edi;
    /* 00704c00: call 0x7045a5 */ r_esp -= 4; W32(r_esp, 0x704c05u); f_007045a5();
    /* 00704c05: mov edx, eax */ r_edx = r_eax;
    /* 00704c07: jmp 0x704a6e */ goto L_00704a6e;
L_00704c0c:; BB(0x00704c0c);
    /* 00704c0c: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 00704c10: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00704c11: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00704c12: movsx ecx, word ptr [ebp + 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x4u));
    /* 00704c16: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00704c17: call 0x706b60 */ r_esp -= 4; W32(r_esp, 0x704c1cu); f_00706b60();
    /* 00704c1c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00704c1f: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 00704c23: jmp 0x704a6e */ goto L_00704a6e;
L_00704c28:; BB(0x00704c28);
    /* 00704c28: mov ecx, 2 */ r_ecx = 0x2u;
    /* 00704c2d: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00704c30: mov edi, 0 */ r_edi = 0x0u;
    /* 00704c35: jle 0x704c39 */ if ((fZ||fS!=fO)) goto L_00704c39;
L_00704c37:; BB(0x00704c37);
    /* 00704c37: mov ebx, ecx */ r_ebx = r_ecx;
L_00704c39:; BB(0x00704c39);
    /* 00704c39: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00704c3b: jle 0x704c6f */ if ((fZ||fS!=fO)) goto L_00704c6f;
L_00704c3d:; BB(0x00704c3d);
    /* 00704c3d: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 00704c41: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00704c42: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00704c43: movsx eax, word ptr [ebp + edi*2 + 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+r_edi*2+0x4u));
    /* 00704c48: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00704c49: call 0x706b60 */ r_esp -= 4; W32(r_esp, 0x704c4eu); f_00706b60();
    /* 00704c4e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00704c51: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00704c54: cmp edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00704c56: jge 0x704c6f */ if ((fS==fO)) goto L_00704c6f;
L_00704c58:; BB(0x00704c58);
    /* 00704c58: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00704c5b: jne 0x704c3d */ if (!fZ) goto L_00704c3d;
L_00704c5d:; BB(0x00704c5d);
    /* 00704c5d: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 00704c61: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00704c62: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00704c63: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00704c65: call 0x70625c */ r_esp -= 4; W32(r_esp, 0x704c6au); f_0070625c();
    /* 00704c6a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00704c6d: jmp 0x704c3d */ goto L_00704c3d;
L_00704c6f:; BB(0x00704c6f);
    /* 00704c6f: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 00704c73: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00704c74: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00704c75: push 0x3f */ { u32 v = 0x3fu; r_esp -= 4; W32(r_esp, v); }
    /* 00704c77: call 0x70625c */ r_esp -= 4; W32(r_esp, 0x704c7cu); f_0070625c();
    /* 00704c7c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00704c7f: movsx ecx, word ptr [ebp] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp));
    /* 00704c83: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00704c86: jg 0x704c91 */ if ((!fZ&&fS==fO)) goto L_00704c91;
L_00704c88:; BB(0x00704c88);
    /* 00704c88: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 00704c8c: jmp 0x704a6e */ goto L_00704a6e;
L_00704c91:; BB(0x00704c91);
    /* 00704c91: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 00704c95: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00704c96: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00704c97: call 0x7069b8 */ r_esp -= 4; W32(r_esp, 0x704c9cu); f_007069b8();
    /* 00704c9c: lea eax, [esp + 0x20] */ r_eax = (u32)(r_esp+0x20u);
    /* 00704ca0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00704ca1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00704ca2: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 00704ca6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00704ca7: call 0x706b60 */ r_esp -= 4; W32(r_esp, 0x704cacu); f_00706b60();
    /* 00704cac: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00704caf: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 00704cb3: jmp 0x704a6e */ goto L_00704a6e;
L_00704cb8:; BB(0x00704cb8);
    /* 00704cb8: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 00704cbc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00704cbd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00704cbe: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00704cbf: call 0x706490 */ r_esp -= 4; W32(r_esp, 0x704cc4u); f_00706490();
    /* 00704cc4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00704cc7: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 00704ccb: jmp 0x704a6e */ goto L_00704a6e;
}

void f_007045a5(void) /* sub_7045A5 */
{
    FN_ENTER(0x007045a5);
    /* 007045a5: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007045a6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007045a7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007045a8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007045a9: sub esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007045ac: mov edi, ecx */ r_edi = r_ecx;
    /* 007045ae: mov esi, edx */ r_esi = r_edx;
    /* 007045b0: mov ebp, eax */ r_ebp = r_eax;
    /* 007045b2: mov dword ptr [esp + 0x18], 0 */ W32((u32)(r_esp+0x18u), 0x0u);
    /* 007045ba: movsx ebx, word ptr [ebp] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_ebp));
    /* 007045be: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007045c0: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007045c2: je 0x704a81 */ if (fZ) goto L_00704a81;
L_007045c8:; BB(0x007045c8);
    /* 007045c8: movsx eax, word ptr [ebp + 2] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x2u));
    /* 007045cc: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007045cf: je 0x704cb8 */ if (fZ) goto L_00704cb8;
L_007045d5:; BB(0x007045d5);
    /* 007045d5: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007045d8: je 0x704c28 */ if (fZ) goto L_00704c28;
L_007045de:; BB(0x007045de);
    /* 007045de: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007045e1: je 0x704be5 */ if (fZ) goto L_00704be5;
L_007045e7:; BB(0x007045e7);
    /* 007045e7: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007045ea: je 0x7048e1 */ if (fZ) goto L_007048e1;
L_007045f0:; BB(0x007045f0);
    /* 007045f0: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007045f3: jne 0x7048c0 */ if (!fZ) goto L_007048c0;
L_007045f9:; BB(0x007045f9);
    /* 007045f9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007045fb: mov dword ptr [esp + 0x54], eax */ W32((u32)(r_esp+0x54u), r_eax);
    /* 007045ff: movsx eax, word ptr [ebp + 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x4u));
    /* 00704603: cmp eax, 0x2c4 */ {  u32 a = r_eax; u32 b = 0x2c4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00704608: mov dword ptr [esp + 0x4c], eax */ W32((u32)(r_esp+0x4cu), r_eax);
    /* 0070460c: je 0x704b6f */ if (fZ) goto L_00704b6f;
L_00704612:; BB(0x00704612);
    /* 00704612: cmp eax, 0x2c7 */ {  u32 a = r_eax; u32 b = 0x2c7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00704617: je 0x704b1e */ if (fZ) goto L_00704b1e;
L_0070461d:; BB(0x0070461d);
    /* 0070461d: mov ecx, eax */ r_ecx = r_eax;
    /* 0070461f: cmp ecx, 0x68c */ {  u32 a = r_ecx; u32 b = 0x68cu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00704625: jl 0x704675 */ if ((fS!=fO)) goto L_00704675;
L_00704627:; BB(0x00704627);
    /* 00704627: cmp ecx, 0x697 */ {  u32 a = r_ecx; u32 b = 0x697u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0070462d: jg 0x704675 */ if ((!fZ&&fS==fO)) goto L_00704675;
L_0070462f:; BB(0x0070462f);
    /* 0070462f: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 00704633: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00704634: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00704635: mov edi, eax */ r_edi = r_eax;
    /* 00704637: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00704638: call 0x706b60 */ r_esp -= 4; W32(r_esp, 0x70463du); f_00706b60();
    /* 0070463d: lea ecx, [esp + 0x24] */ r_ecx = (u32)(r_esp+0x24u);
    /* 00704641: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00704642: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00704643: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 00704645: call 0x70625c */ r_esp -= 4; W32(r_esp, 0x70464au); f_0070625c();
    /* 0070464a: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0070464f: mov dword ptr [esp + 0x68], ecx */ W32((u32)(r_esp+0x68u), r_ecx);
    /* 00704653: add edi, 0xfffff974 */ {  u32 a = r_edi; u32 b = 0xfffff974u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00704659: movzx ecx, di */ r_ecx = (u32)(u16)r_edi;
    /* 0070465c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0070465d: call 0x706b8c */ r_esp -= 4; W32(r_esp, 0x704662u); f_00706b8c();
    /* 00704662: mov edi, eax */ r_edi = r_eax;
    /* 00704664: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00704667: mov ecx, dword ptr [0xa96ed4] */ r_ecx = R32((u32)(0xa96ed4u));
    /* 0070466d: mov ecx, dword ptr [ecx + 0xa8c] */ r_ecx = R32((u32)(r_ecx+0xa8cu));
    /* 00704673: jmp 0x7046d7 */ goto L_007046d7;
L_00704675:; BB(0x00704675);
    /* 00704675: mov edi, eax */ r_edi = r_eax;
    /* 00704677: mov ecx, 3 */ r_ecx = 0x3u;
    /* 0070467c: mov dword ptr [esp + 0x50], ecx */ W32((u32)(r_esp+0x50u), r_ecx);
    /* 00704680: cmp edi, 0x2c5 */ {  u32 a = r_edi; u32 b = 0x2c5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00704686: je 0x704b17 */ if (fZ) goto L_00704b17;
L_0070468c:; BB(0x0070468c);
    /* 0070468c: mov ecx, eax */ r_ecx = r_eax;
    /* 0070468e: cmp ecx, 0x2c6 */ {  u32 a = r_ecx; u32 b = 0x2c6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00704694: jne 0x70469d */ if (!fZ) goto L_0070469d;
L_00704696:; BB(0x00704696);
    /* 00704696: mov edi, 2 */ r_edi = 0x2u;
    /* 0070469b: jmp 0x7046c8 */ goto L_007046c8;
L_0070469d:; BB(0x0070469d);
    /* 0070469d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0070469e: call 0x706320 */ r_esp -= 4; W32(r_esp, 0x7046a3u); f_00706320();
    /* 007046a3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007046a4: mov ecx, dword ptr [0xa96eb4] */ r_ecx = R32((u32)(0xa96eb4u));
    /* 007046aa: movzx ecx, byte ptr [eax + ecx] */ r_ecx = (u32)R8((u32)(r_eax+r_ecx));
    /* 007046ae: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007046b1: jne 0x7046ba */ if (!fZ) goto L_007046ba;
L_007046b3:; BB(0x007046b3);
    /* 007046b3: mov edi, 2 */ r_edi = 0x2u;
    /* 007046b8: jmp 0x7046c8 */ goto L_007046c8;
L_007046ba:; BB(0x007046ba);
    /* 007046ba: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007046bd: jne 0x7046c6 */ if (!fZ) goto L_007046c6;
L_007046bf:; BB(0x007046bf);
    /* 007046bf: mov edi, 4 */ r_edi = 0x4u;
    /* 007046c4: jmp 0x7046c8 */ goto L_007046c8;
L_007046c6:; BB(0x007046c6);
    /* 007046c6: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_007046c8:; BB(0x007046c8);
    /* 007046c8: mov ecx, dword ptr [esp + 0x4c] */ r_ecx = R32((u32)(r_esp+0x4cu));
    /* 007046cc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007046cd: call 0x706518 */ r_esp -= 4; W32(r_esp, 0x7046d2u); f_00706518();
    /* 007046d2: mov ecx, eax */ r_ecx = r_eax;
    /* 007046d4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_007046d7:; BB(0x007046d7);
    /* 007046d7: cmp ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007046da: jle 0x70488a */ if ((fZ||fS!=fO)) goto L_0070488a;
L_007046e0:; BB(0x007046e0);
    /* 007046e0: mov eax, dword ptr [0xa96eb8] */ r_eax = R32((u32)(0xa96eb8u));
    /* 007046e5: movsx edx, word ptr [ebp + 6] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x6u));
    /* 007046e9: mov dword ptr [esp + 0x4c], edx */ W32((u32)(r_esp+0x4cu), r_edx);
    /* 007046ed: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007046ef: mov dword ptr [esp + 0x44], edx */ W32((u32)(r_esp+0x44u), r_edx);
    /* 007046f3: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 007046f6: mov dword ptr [esp + 0x48], edx */ W32((u32)(r_esp+0x48u), r_edx);
    /* 007046fa: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 007046fc: jle 0x704738 */ if ((fZ||fS!=fO)) goto L_00704738;
L_007046fe:; BB(0x007046fe);
    /* 007046fe: mov edx, dword ptr [esp + 0x4c] */ r_edx = R32((u32)(r_esp+0x4cu));
    /* 00704702: mov eax, dword ptr [eax + 0x20] */ r_eax = R32((u32)(r_eax+0x20u));
    /* 00704705: mov dword ptr [esp + 0x40], edi */ W32((u32)(r_esp+0x40u), r_edi);
    /* 00704709: mov edi, dword ptr [esp + 0x48] */ r_edi = R32((u32)(r_esp+0x48u));
    /* 0070470d: mov dword ptr [esp + 0x3c], ebp */ W32((u32)(r_esp+0x3cu), r_ebp);
    /* 00704711: mov dword ptr [esp + 0x38], esi */ W32((u32)(r_esp+0x38u), r_esi);
    /* 00704715: mov esi, dword ptr [esp + 0x44] */ r_esi = R32((u32)(r_esp+0x44u));
L_00704719:; BB(0x00704719);
    /* 00704719: movsx ebp, word ptr [eax + esi*2] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_eax+r_esi*2));
    /* 0070471d: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00704720: cmp edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00704722: je 0x704ad2 */ if (fZ) goto L_00704ad2;
L_00704728:; BB(0x00704728);
    /* 00704728: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0070472a: jl 0x704719 */ if ((fS!=fO)) goto L_00704719;
L_0070472c:; BB(0x0070472c);
    /* 0070472c: mov edi, dword ptr [esp + 0x40] */ r_edi = R32((u32)(r_esp+0x40u));
    /* 00704730: mov ebp, dword ptr [esp + 0x3c] */ r_ebp = R32((u32)(r_esp+0x3cu));
    /* 00704734: mov esi, dword ptr [esp + 0x38] */ r_esi = R32((u32)(r_esp+0x38u));
L_00704738:; BB(0x00704738);
    /* 00704738: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 0070473c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070473e: je 0x704abe */ if (fZ) goto L_00704abe;
L_00704744:; BB(0x00704744);
    /* 00704744: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00704747: je 0x704775 */ if (fZ) goto L_00704775;
L_00704749:; BB(0x00704749);
    /* 00704749: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070474c: jne 0x70475f */ if (!fZ) goto L_0070475f;
L_0070474e:; BB(0x0070474e);
    /* 0070474e: mov eax, dword ptr [0xa96ed4] */ r_eax = R32((u32)(0xa96ed4u));
    /* 00704753: mov eax, dword ptr [eax + 0x1a9c] */ r_eax = R32((u32)(r_eax+0x1a9cu));
    /* 00704759: mov dword ptr [esp + 0x54], eax */ W32((u32)(r_esp+0x54u), r_eax);
    /* 0070475d: jmp 0x704784 */ goto L_00704784;
L_0070475f:; BB(0x0070475f);
    /* 0070475f: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00704762: jne 0x704784 */ if (!fZ) goto L_00704784;
L_00704764:; BB(0x00704764);
    /* 00704764: mov eax, dword ptr [0xa96ed4] */ r_eax = R32((u32)(0xa96ed4u));
    /* 00704769: mov eax, dword ptr [eax + 0x1aa4] */ r_eax = R32((u32)(r_eax+0x1aa4u));
    /* 0070476f: mov dword ptr [esp + 0x54], eax */ W32((u32)(r_esp+0x54u), r_eax);
    /* 00704773: jmp 0x704784 */ goto L_00704784;
L_00704775:; BB(0x00704775);
    /* 00704775: mov eax, dword ptr [0xa96ed4] */ r_eax = R32((u32)(0xa96ed4u));
    /* 0070477a: mov eax, dword ptr [eax + 0x1aa0] */ r_eax = R32((u32)(r_eax+0x1aa0u));
    /* 00704780: mov dword ptr [esp + 0x54], eax */ W32((u32)(r_esp+0x54u), r_eax);
L_00704784:; BB(0x00704784);
    /* 00704784: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00704787: jle 0x7047bd */ if ((fZ||fS!=fO)) goto L_007047bd;
L_00704789:; BB(0x00704789);
    /* 00704789: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0070478d: cmp eax, 0x685 */ {  u32 a = r_eax; u32 b = 0x685u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00704792: jne 0x7047bd */ if (!fZ) goto L_007047bd;
L_00704794:; BB(0x00704794);
    /* 00704794: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00704796: je 0x7047ed */ if (fZ) goto L_007047ed;
L_00704798:; BB(0x00704798);
    /* 00704798: mov eax, dword ptr [esp + 0x54] */ r_eax = R32((u32)(r_esp+0x54u));
    /* 0070479c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070479e: je 0x7047ed */ if (fZ) goto L_007047ed;
L_007047a0:; BB(0x007047a0);
    /* 007047a0: movsx edx, word ptr [ebp + 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x4u));
    /* 007047a4: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 007047a8: mov dword ptr [esp + 0x10], esi */ W32((u32)(r_esp+0x10u), r_esi);
    /* 007047ac: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 007047b0: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 007047b4: mov eax, ebp */ r_eax = r_ebp;
    /* 007047b6: call 0x704cdd */ r_esp -= 4; W32(r_esp, 0x7047bbu); f_00704cdd();
    /* 007047bb: jmp 0x7047ed */ goto L_007047ed;
L_007047bd:; BB(0x007047bd);
    /* 007047bd: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 007047c1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007047c2: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007047c3: movsx edx, word ptr [ebp + 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x4u));
    /* 007047c7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007047c8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007047c9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007047ca: call 0x70655c */ r_esp -= 4; W32(r_esp, 0x7047cfu); f_0070655c();
    /* 007047cf: lea ecx, [esp + 0x2c] */ r_ecx = (u32)(r_esp+0x2cu);
    /* 007047d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007047d4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007047d5: call 0x7068fc */ r_esp -= 4; W32(r_esp, 0x7047dau); f_007068fc();
    /* 007047da: lea ecx, [esp + 0x34] */ r_ecx = (u32)(r_esp+0x34u);
    /* 007047de: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007047df: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007047e0: mov ecx, dword ptr [esp + 0x78] */ r_ecx = R32((u32)(r_esp+0x78u));
    /* 007047e4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007047e5: call 0x7067e4 */ r_esp -= 4; W32(r_esp, 0x7047eau); f_007067e4();
    /* 007047ea: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_007047ed:; BB(0x007047ed);
    /* 007047ed: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 007047f1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007047f2: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007047f3: call 0x7068fc */ r_esp -= 4; W32(r_esp, 0x7047f8u); f_007068fc();
    /* 007047f8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_007047fb:; BB(0x007047fb);
    /* 007047fb: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007047fd: je 0x70485c */ if (fZ) goto L_0070485c;
L_007047ff:; BB(0x007047ff);
    /* 007047ff: cmp edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00704802: je 0x704aaf */ if (fZ) goto L_00704aaf;
L_00704808:; BB(0x00704808);
    /* 00704808: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070480b: je 0x704a9d */ if (fZ) goto L_00704a9d;
L_00704811:; BB(0x00704811);
    /* 00704811: mov ecx, dword ptr [0xa96eb8] */ r_ecx = R32((u32)(0xa96eb8u));
    /* 00704817: mov dword ptr [esp + 0x50], ecx */ W32((u32)(r_esp+0x50u), r_ecx);
    /* 0070481b: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070481e: je 0x704a93 */ if (fZ) goto L_00704a93;
L_00704824:; BB(0x00704824);
    /* 00704824: add dword ptr [esp + 0x50], 0x18 */ { u32 ad = (u32)(r_esp+0x50u);  u32 a = R32(ad); u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_00704829:; BB(0x00704829);
    /* 00704829: mov ecx, dword ptr [esp + 0x4c] */ r_ecx = R32((u32)(r_esp+0x4cu));
    /* 0070482d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0070482e: call 0x706340 */ r_esp -= 4; W32(r_esp, 0x704833u); f_00706340();
    /* 00704833: mov ecx, dword ptr [esp + 0x54] */ r_ecx = R32((u32)(r_esp+0x54u));
    /* 00704837: mov edi, dword ptr [ecx] */ r_edi = R32((u32)(r_ecx));
    /* 00704839: lea ecx, [esp + 0x1c] */ r_ecx = (u32)(r_esp+0x1cu);
    /* 0070483d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0070483e: movsx eax, word ptr [edi + eax*2] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+r_eax*2));
    /* 00704842: mov edi, dword ptr [0xa96ed4] */ r_edi = R32((u32)(0xa96ed4u));
    /* 00704848: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00704849: push dword ptr [edi + eax*4] */ { u32 v = R32((u32)(r_edi+r_eax*4)); r_esp -= 4; W32(r_esp, v); }
    /* 0070484c: mov ecx, dword ptr [esp + 0x5c] */ r_ecx = R32((u32)(r_esp+0x5cu));
    /* 00704850: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00704851: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00704852: call 0x70655c */ r_esp -= 4; W32(r_esp, 0x704857u); f_0070655c();
    /* 00704857: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0070485a: jmp 0x704870 */ goto L_00704870;
L_0070485c:; BB(0x0070485c);
    /* 0070485c: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 00704860: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00704861: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00704862: mov edi, dword ptr [esp + 0x54] */ r_edi = R32((u32)(r_esp+0x54u));
    /* 00704866: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00704867: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00704868: call 0x7064d8 */ r_esp -= 4; W32(r_esp, 0x70486du); f_007064d8();
    /* 0070486d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00704870:; BB(0x00704870);
    /* 00704870: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00704873: jle 0x7048aa */ if ((fZ||fS!=fO)) goto L_007048aa;
L_00704875:; BB(0x00704875);
    /* 00704875: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 00704879: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0070487a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0070487b: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0070487f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00704880: call 0x706b60 */ r_esp -= 4; W32(r_esp, 0x704885u); f_00706b60();
    /* 00704885: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00704888: jmp 0x7048aa */ goto L_007048aa;
L_0070488a:; BB(0x0070488a);
    /* 0070488a: movsx ebx, word ptr [ebp + 4] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_ebp+0x4u));
    /* 0070488e: cmp ebx, 0x2c7 */ {  u32 a = r_ebx; u32 b = 0x2c7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00704894: je 0x704b03 */ if (fZ) goto L_00704b03;
L_0070489a:; BB(0x0070489a);
    /* 0070489a: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 0070489e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0070489f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007048a0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007048a1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007048a2: call 0x7064d8 */ r_esp -= 4; W32(r_esp, 0x7048a7u); f_007064d8();
    /* 007048a7: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_007048aa:; BB(0x007048aa);
    /* 007048aa: movzx eax, word ptr [esi] */ r_eax = (u32)R16((u32)(r_esi));
    /* 007048ad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007048ae: call 0x815e78 */ r_esp -= 4; W32(r_esp, 0x7048b3u); f_00815e78();
    /* 007048b3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007048b4: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 007048b8: mov word ptr [esi], ax */ W16((u32)(r_esi), (u16)r_eax);
    /* 007048bb: jmp 0x704a6e */ goto L_00704a6e;
L_007048c0:; BB(0x007048c0);
    /* 007048c0: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007048c3: jne 0x704a6e */ if (!fZ) goto L_00704a6e;
L_007048c9:; BB(0x007048c9);
    /* 007048c9: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 007048cd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007048ce: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007048cf: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007048d0: call 0x7069fc */ r_esp -= 4; W32(r_esp, 0x7048d5u); f_007069fc();
    /* 007048d5: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007048d8: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 007048dc: jmp 0x704a6e */ goto L_00704a6e;
L_007048e1:; BB(0x007048e1);
    /* 007048e1: movsx eax, word ptr [ebp + 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x4u));
    /* 007048e5: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007048e7: mov dword ptr [esp + 0x54], ecx */ W32((u32)(r_esp+0x54u), r_ecx);
    /* 007048eb: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 007048ed: cmp eax, 0x2c4 */ {  u32 a = r_eax; u32 b = 0x2c4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007048f2: je 0x704bcf */ if (fZ) goto L_00704bcf;
L_007048f8:; BB(0x007048f8);
    /* 007048f8: cmp eax, 0x2c7 */ {  u32 a = r_eax; u32 b = 0x2c7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007048fd: je 0x704b99 */ if (fZ) goto L_00704b99;
L_00704903:; BB(0x00704903);
    /* 00704903: cmp eax, 0x68c */ {  u32 a = r_eax; u32 b = 0x68cu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00704908: jl 0x704944 */ if ((fS!=fO)) goto L_00704944;
L_0070490a:; BB(0x0070490a);
    /* 0070490a: cmp eax, 0x697 */ {  u32 a = r_eax; u32 b = 0x697u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0070490f: jg 0x704944 */ if ((!fZ&&fS==fO)) goto L_00704944;
L_00704911:; BB(0x00704911);
    /* 00704911: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 00704915: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00704916: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00704917: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00704918: call 0x706b60 */ r_esp -= 4; W32(r_esp, 0x70491du); f_00706b60();
    /* 0070491d: lea ecx, [esp + 0x24] */ r_ecx = (u32)(r_esp+0x24u);
    /* 00704921: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00704922: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00704923: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 00704925: call 0x70625c */ r_esp -= 4; W32(r_esp, 0x70492au); f_0070625c();
    /* 0070492a: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0070492d: mov ecx, dword ptr [0xa96ed4] */ r_ecx = R32((u32)(0xa96ed4u));
    /* 00704933: mov edi, dword ptr [ecx + 0xa8c] */ r_edi = R32((u32)(r_ecx+0xa8cu));
    /* 00704939: mov dword ptr [esp + 0x54], edi */ W32((u32)(r_esp+0x54u), r_edi);
    /* 0070493d: mov edi, 1 */ r_edi = 0x1u;
    /* 00704942: jmp 0x704960 */ goto L_00704960;
L_00704944:; BB(0x00704944);
    /* 00704944: cmp eax, 0x698 */ {  u32 a = r_eax; u32 b = 0x698u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00704949: jne 0x704960 */ if (!fZ) goto L_00704960;
L_0070494b:; BB(0x0070494b);
    /* 0070494b: mov ecx, dword ptr [0xa96ed4] */ r_ecx = R32((u32)(0xa96ed4u));
    /* 00704951: mov edi, dword ptr [ecx + 0xa8c] */ r_edi = R32((u32)(r_ecx+0xa8cu));
    /* 00704957: mov dword ptr [esp + 0x54], edi */ W32((u32)(r_esp+0x54u), r_edi);
    /* 0070495b: mov edi, 1 */ r_edi = 0x1u;
L_00704960:; BB(0x00704960);
    /* 00704960: cmp ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00704963: jle 0x704a4a */ if ((fZ||fS!=fO)) goto L_00704a4a;
L_00704969:; BB(0x00704969);
    /* 00704969: movsx ecx, word ptr [ebp + 6] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x6u));
    /* 0070496d: mov dword ptr [esp + 0x50], ecx */ W32((u32)(r_esp+0x50u), r_ecx);
    /* 00704971: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00704973: je 0x70499d */ if (fZ) goto L_0070499d;
L_00704975:; BB(0x00704975);
    /* 00704975: mov ecx, dword ptr [0xa96ebc] */ r_ecx = R32((u32)(0xa96ebcu));
    /* 0070497b: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070497e: je 0x704b91 */ if (fZ) goto L_00704b91;
L_00704984:; BB(0x00704984);
    /* 00704984: mov edi, dword ptr [esp + 0x50] */ r_edi = R32((u32)(r_esp+0x50u));
    /* 00704988: mov ecx, dword ptr [ecx] */ r_ecx = R32((u32)(r_ecx));
    /* 0070498a: movsx edi, word ptr [ecx + edi*2 - 0xb58] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ecx+r_edi*2+0xfffff4a8u));
    /* 00704992: mov ecx, dword ptr [0xa96ed4] */ r_ecx = R32((u32)(0xa96ed4u));
    /* 00704998: mov edi, dword ptr [ecx + edi*4] */ r_edi = R32((u32)(r_ecx+r_edi*4));
    /* 0070499b: jmp 0x7049a8 */ goto L_007049a8;
L_0070499d:; BB(0x0070499d);
    /* 0070499d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0070499e: call 0x706518 */ r_esp -= 4; W32(r_esp, 0x7049a3u); f_00706518();
    /* 007049a3: mov edi, eax */ r_edi = r_eax;
    /* 007049a5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_007049a8:; BB(0x007049a8);
    /* 007049a8: cmp ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007049ab: jle 0x7049e2 */ if ((fZ||fS!=fO)) goto L_007049e2;
L_007049ad:; BB(0x007049ad);
    /* 007049ad: movsx ecx, word ptr [ebp + 0xa] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xau));
    /* 007049b1: cmp ecx, 0x685 */ {  u32 a = r_ecx; u32 b = 0x685u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007049b7: jne 0x7049e2 */ if (!fZ) goto L_007049e2;
L_007049b9:; BB(0x007049b9);
    /* 007049b9: mov ecx, dword ptr [esp + 0x54] */ r_ecx = R32((u32)(r_esp+0x54u));
    /* 007049bd: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007049bf: je 0x704a11 */ if (fZ) goto L_00704a11;
L_007049c1:; BB(0x007049c1);
    /* 007049c1: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007049c3: je 0x704a11 */ if (fZ) goto L_00704a11;
L_007049c5:; BB(0x007049c5);
    /* 007049c5: mov edx, dword ptr [esp + 0x50] */ r_edx = R32((u32)(r_esp+0x50u));
    /* 007049c9: mov dword ptr [esp + 0xc], edi */ W32((u32)(r_esp+0xcu), r_edi);
    /* 007049cd: mov eax, ebp */ r_eax = r_ebp;
    /* 007049cf: mov dword ptr [esp + 0x10], esi */ W32((u32)(r_esp+0x10u), r_esi);
    /* 007049d3: lea edi, [esp + 0x18] */ r_edi = (u32)(r_esp+0x18u);
    /* 007049d7: mov dword ptr [esp + 0x14], edi */ W32((u32)(r_esp+0x14u), r_edi);
    /* 007049db: call 0x704cdd */ r_esp -= 4; W32(r_esp, 0x7049e0u); f_00704cdd();
    /* 007049e0: jmp 0x704a11 */ goto L_00704a11;
L_007049e2:; BB(0x007049e2);
    /* 007049e2: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 007049e6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007049e7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007049e8: mov ecx, dword ptr [esp + 0x5c] */ r_ecx = R32((u32)(r_esp+0x5cu));
    /* 007049ec: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007049ed: call 0x7067e4 */ r_esp -= 4; W32(r_esp, 0x7049f2u); f_007067e4();
    /* 007049f2: lea ecx, [esp + 0x24] */ r_ecx = (u32)(r_esp+0x24u);
    /* 007049f6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007049f7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007049f8: call 0x7068fc */ r_esp -= 4; W32(r_esp, 0x7049fdu); f_007068fc();
    /* 007049fd: lea ecx, [esp + 0x2c] */ r_ecx = (u32)(r_esp+0x2cu);
    /* 00704a01: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00704a02: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00704a03: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00704a04: call 0x7067e4 */ r_esp -= 4; W32(r_esp, 0x704a09u); f_007067e4();
    /* 00704a09: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00704a0c: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00704a0f: jle 0x704a5d */ if ((fZ||fS!=fO)) goto L_00704a5d;
L_00704a11:; BB(0x00704a11);
    /* 00704a11: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 00704a15: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00704a16: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00704a17: call 0x7068fc */ r_esp -= 4; W32(r_esp, 0x704a1cu); f_007068fc();
    /* 00704a1c: lea ecx, [esp + 0x20] */ r_ecx = (u32)(r_esp+0x20u);
    /* 00704a20: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00704a21: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00704a22: movsx edi, word ptr [ebp + 8] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 00704a26: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00704a27: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00704a28: call 0x7064d8 */ r_esp -= 4; W32(r_esp, 0x704a2du); f_007064d8();
    /* 00704a2d: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00704a30: cmp ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00704a33: jle 0x704a5d */ if ((fZ||fS!=fO)) goto L_00704a5d;
L_00704a35:; BB(0x00704a35);
    /* 00704a35: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 00704a39: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00704a3a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00704a3b: movsx ecx, word ptr [ebp + 0xa] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xau));
    /* 00704a3f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00704a40: call 0x706b60 */ r_esp -= 4; W32(r_esp, 0x704a45u); f_00706b60();
    /* 00704a45: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00704a48: jmp 0x704a5d */ goto L_00704a5d;
L_00704a4a:; BB(0x00704a4a);
    /* 00704a4a: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 00704a4e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00704a4f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00704a50: mov ecx, dword ptr [esp + 0x5c] */ r_ecx = R32((u32)(r_esp+0x5cu));
    /* 00704a54: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00704a55: call 0x7067e4 */ r_esp -= 4; W32(r_esp, 0x704a5au); f_007067e4();
    /* 00704a5a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00704a5d:; BB(0x00704a5d);
    /* 00704a5d: movzx eax, word ptr [esi] */ r_eax = (u32)R16((u32)(r_esi));
    /* 00704a60: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00704a61: call 0x815e78 */ r_esp -= 4; W32(r_esp, 0x704a66u); f_00815e78();
    /* 00704a66: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00704a67: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 00704a6b: mov word ptr [esi], ax */ W16((u32)(r_esi), (u16)r_eax);
L_00704a6e:; BB(0x00704a6e);
    /* 00704a6e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00704a70: mov word ptr [esi + edx*2], cx */ W16((u32)(r_esi+r_edx*2), (u16)r_ecx);
    /* 00704a74: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00704a77: mov eax, edx */ r_eax = r_edx;
    /* 00704a79: add esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00704a7c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00704a7d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00704a7e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00704a7f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00704a80: ret  */ FN_RET(0x007045a5); r_esp += 4; return;
L_00704a81:; BB(0x00704a81);
    /* 00704a81: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00704a83: mov word ptr [esi], cx */ W16((u32)(r_esi), (u16)r_ecx);
    /* 00704a86: mov eax, 1 */ r_eax = 0x1u;
    /* 00704a8b: add esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00704a8e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00704a8f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00704a90: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00704a91: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00704a92: ret  */ FN_RET(0x007045a5); r_esp += 4; return;
L_00704a93:; BB(0x00704a93);
    /* 00704a93: add dword ptr [esp + 0x50], 0x10 */ { u32 ad = (u32)(r_esp+0x50u);  u32 a = R32(ad); u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00704a98: jmp 0x704829 */ goto L_00704829;
L_00704a9d:; BB(0x00704a9d);
    /* 00704a9d: mov ecx, dword ptr [0xa96eb8] */ r_ecx = R32((u32)(0xa96eb8u));
    /* 00704aa3: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00704aa6: mov dword ptr [esp + 0x50], ecx */ W32((u32)(r_esp+0x50u), r_ecx);
    /* 00704aaa: jmp 0x704829 */ goto L_00704829;
L_00704aaf:; BB(0x00704aaf);
    /* 00704aaf: mov ecx, dword ptr [0xa96eb8] */ r_ecx = R32((u32)(0xa96eb8u));
    /* 00704ab5: mov dword ptr [esp + 0x50], ecx */ W32((u32)(r_esp+0x50u), r_ecx);
    /* 00704ab9: jmp 0x704829 */ goto L_00704829;
L_00704abe:; BB(0x00704abe);
    /* 00704abe: mov eax, dword ptr [0xa96ed4] */ r_eax = R32((u32)(0xa96ed4u));
    /* 00704ac3: mov eax, dword ptr [eax + 0x1a98] */ r_eax = R32((u32)(r_eax+0x1a98u));
    /* 00704ac9: mov dword ptr [esp + 0x54], eax */ W32((u32)(r_esp+0x54u), r_eax);
    /* 00704acd: jmp 0x704784 */ goto L_00704784;
L_00704ad2:; BB(0x00704ad2);
    /* 00704ad2: mov edi, dword ptr [esp + 0x40] */ r_edi = R32((u32)(r_esp+0x40u));
    /* 00704ad6: mov ebp, dword ptr [esp + 0x3c] */ r_ebp = R32((u32)(r_esp+0x3cu));
    /* 00704ada: mov esi, dword ptr [esp + 0x38] */ r_esi = R32((u32)(r_esp+0x38u));
    /* 00704ade: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 00704ae2: movsx edx, word ptr [ebp + 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x4u));
    /* 00704ae6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00704ae7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00704ae8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00704ae9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00704aea: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00704aeb: call 0x70655c */ r_esp -= 4; W32(r_esp, 0x704af0u); f_0070655c();
    /* 00704af0: lea ecx, [esp + 0x2c] */ r_ecx = (u32)(r_esp+0x2cu);
    /* 00704af4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00704af5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00704af6: call 0x7068fc */ r_esp -= 4; W32(r_esp, 0x704afbu); f_007068fc();
    /* 00704afb: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00704afe: jmp 0x7047fb */ goto L_007047fb;
L_00704b03:; BB(0x00704b03);
    /* 00704b03: lea ebx, [esp + 0x18] */ r_ebx = (u32)(r_esp+0x18u);
    /* 00704b07: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00704b08: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00704b09: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00704b0a: call 0x7067e4 */ r_esp -= 4; W32(r_esp, 0x704b0fu); f_007067e4();
    /* 00704b0f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00704b12: jmp 0x7048aa */ goto L_007048aa;
L_00704b17:; BB(0x00704b17);
    /* 00704b17: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00704b19: jmp 0x7046c8 */ goto L_007046c8;
L_00704b1e:; BB(0x00704b1e);
    /* 00704b1e: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 00704b22: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00704b23: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00704b24: mov eax, dword ptr [esp + 0x54] */ r_eax = R32((u32)(r_esp+0x54u));
    /* 00704b28: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00704b29: call 0x706b60 */ r_esp -= 4; W32(r_esp, 0x704b2eu); f_00706b60();
    /* 00704b2e: lea eax, [esp + 0x24] */ r_eax = (u32)(r_esp+0x24u);
    /* 00704b32: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00704b33: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00704b34: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 00704b36: call 0x70625c */ r_esp -= 4; W32(r_esp, 0x704b3bu); f_0070625c();
    /* 00704b3b: mov eax, 2 */ r_eax = 0x2u;
    /* 00704b40: mov dword ptr [esp + 0x68], eax */ W32((u32)(r_esp+0x68u), r_eax);
    /* 00704b44: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00704b45: call 0x706b8c */ r_esp -= 4; W32(r_esp, 0x704b4au); f_00706b8c();
    /* 00704b4a: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00704b4d: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00704b50: je 0x704b68 */ if (fZ) goto L_00704b68;
L_00704b52:; BB(0x00704b52);
    /* 00704b52: mov edi, 1 */ r_edi = 0x1u;
L_00704b57:; BB(0x00704b57);
    /* 00704b57: mov ecx, dword ptr [0xa96ed4] */ r_ecx = R32((u32)(0xa96ed4u));
    /* 00704b5d: mov ecx, dword ptr [ecx + 0xa98] */ r_ecx = R32((u32)(r_ecx+0xa98u));
    /* 00704b63: jmp 0x7046d7 */ goto L_007046d7;
L_00704b68:; BB(0x00704b68);
    /* 00704b68: mov edi, 3 */ r_edi = 0x3u;
    /* 00704b6d: jmp 0x704b57 */ goto L_00704b57;
L_00704b6f:; BB(0x00704b6f);
    /* 00704b6f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00704b71: mov dword ptr [esp + 0x50], eax */ W32((u32)(r_esp+0x50u), r_eax);
    /* 00704b75: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00704b76: call 0x706b8c */ r_esp -= 4; W32(r_esp, 0x704b7bu); f_00706b8c();
    /* 00704b7b: mov edi, eax */ r_edi = r_eax;
    /* 00704b7d: mov ecx, dword ptr [esp + 0x50] */ r_ecx = R32((u32)(r_esp+0x50u));
    /* 00704b81: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00704b82: call 0x706518 */ r_esp -= 4; W32(r_esp, 0x704b87u); f_00706518();
    /* 00704b87: mov ecx, eax */ r_ecx = r_eax;
    /* 00704b89: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00704b8c: jmp 0x7046d7 */ goto L_007046d7;
L_00704b91:; BB(0x00704b91);
    /* 00704b91: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00704b94: jmp 0x704984 */ goto L_00704984;
L_00704b99:; BB(0x00704b99);
    /* 00704b99: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 00704b9d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00704b9e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00704b9f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00704ba0: call 0x706b60 */ r_esp -= 4; W32(r_esp, 0x704ba5u); f_00706b60();
    /* 00704ba5: lea ecx, [esp + 0x24] */ r_ecx = (u32)(r_esp+0x24u);
    /* 00704ba9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00704baa: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00704bab: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 00704bad: call 0x70625c */ r_esp -= 4; W32(r_esp, 0x704bb2u); f_0070625c();
    /* 00704bb2: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00704bb5: mov ecx, dword ptr [0xa96ed4] */ r_ecx = R32((u32)(0xa96ed4u));
    /* 00704bbb: mov edi, dword ptr [ecx + 0xa98] */ r_edi = R32((u32)(r_ecx+0xa98u));
    /* 00704bc1: mov dword ptr [esp + 0x54], edi */ W32((u32)(r_esp+0x54u), r_edi);
    /* 00704bc5: mov edi, 2 */ r_edi = 0x2u;
    /* 00704bca: jmp 0x704960 */ goto L_00704960;
L_00704bcf:; BB(0x00704bcf);
    /* 00704bcf: push 0x2c4 */ { u32 v = 0x2c4u; r_esp -= 4; W32(r_esp, v); }
    /* 00704bd4: call 0x706518 */ r_esp -= 4; W32(r_esp, 0x704bd9u); f_00706518();
    /* 00704bd9: mov dword ptr [esp + 0x58], eax */ W32((u32)(r_esp+0x58u), r_eax);
    /* 00704bdd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00704be0: jmp 0x704960 */ goto L_00704960;
L_00704be5:; BB(0x00704be5);
    /* 00704be5: cmp ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00704be8: jle 0x704c0c */ if ((fZ||fS!=fO)) goto L_00704c0c;
L_00704bea:; BB(0x00704bea);
    /* 00704bea: lea ebx, [esp + 0x1c] */ r_ebx = (u32)(r_esp+0x1cu);
    /* 00704bee: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00704bef: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00704bf0: call 0x706360 */ r_esp -= 4; W32(r_esp, 0x704bf5u); f_00706360();
    /* 00704bf5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00704bf8: lea eax, [esp + 0x1c] */ r_eax = (u32)(r_esp+0x1cu);
    /* 00704bfc: mov edx, esi */ r_edx = r_esi;
    /* 00704bfe: mov ecx, edi */ r_ecx = r_edi;
    /* 00704c00: call 0x7045a5 */ r_esp -= 4; W32(r_esp, 0x704c05u); f_007045a5();
    /* 00704c05: mov edx, eax */ r_edx = r_eax;
    /* 00704c07: jmp 0x704a6e */ goto L_00704a6e;
L_00704c0c:; BB(0x00704c0c);
    /* 00704c0c: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 00704c10: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00704c11: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00704c12: movsx ecx, word ptr [ebp + 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x4u));
    /* 00704c16: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00704c17: call 0x706b60 */ r_esp -= 4; W32(r_esp, 0x704c1cu); f_00706b60();
    /* 00704c1c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00704c1f: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 00704c23: jmp 0x704a6e */ goto L_00704a6e;
L_00704c28:; BB(0x00704c28);
    /* 00704c28: mov ecx, 2 */ r_ecx = 0x2u;
    /* 00704c2d: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00704c30: mov edi, 0 */ r_edi = 0x0u;
    /* 00704c35: jle 0x704c39 */ if ((fZ||fS!=fO)) goto L_00704c39;
L_00704c37:; BB(0x00704c37);
    /* 00704c37: mov ebx, ecx */ r_ebx = r_ecx;
L_00704c39:; BB(0x00704c39);
    /* 00704c39: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00704c3b: jle 0x704c6f */ if ((fZ||fS!=fO)) goto L_00704c6f;
L_00704c3d:; BB(0x00704c3d);
    /* 00704c3d: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 00704c41: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00704c42: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00704c43: movsx eax, word ptr [ebp + edi*2 + 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+r_edi*2+0x4u));
    /* 00704c48: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00704c49: call 0x706b60 */ r_esp -= 4; W32(r_esp, 0x704c4eu); f_00706b60();
    /* 00704c4e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00704c51: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00704c54: cmp edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00704c56: jge 0x704c6f */ if ((fS==fO)) goto L_00704c6f;
L_00704c58:; BB(0x00704c58);
    /* 00704c58: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00704c5b: jne 0x704c3d */ if (!fZ) goto L_00704c3d;
L_00704c5d:; BB(0x00704c5d);
    /* 00704c5d: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 00704c61: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00704c62: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00704c63: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00704c65: call 0x70625c */ r_esp -= 4; W32(r_esp, 0x704c6au); f_0070625c();
    /* 00704c6a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00704c6d: jmp 0x704c3d */ goto L_00704c3d;
L_00704c6f:; BB(0x00704c6f);
    /* 00704c6f: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 00704c73: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00704c74: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00704c75: push 0x3f */ { u32 v = 0x3fu; r_esp -= 4; W32(r_esp, v); }
    /* 00704c77: call 0x70625c */ r_esp -= 4; W32(r_esp, 0x704c7cu); f_0070625c();
    /* 00704c7c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00704c7f: movsx ecx, word ptr [ebp] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp));
    /* 00704c83: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00704c86: jg 0x704c91 */ if ((!fZ&&fS==fO)) goto L_00704c91;
L_00704c88:; BB(0x00704c88);
    /* 00704c88: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 00704c8c: jmp 0x704a6e */ goto L_00704a6e;
L_00704c91:; BB(0x00704c91);
    /* 00704c91: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 00704c95: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00704c96: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00704c97: call 0x7069b8 */ r_esp -= 4; W32(r_esp, 0x704c9cu); f_007069b8();
    /* 00704c9c: lea eax, [esp + 0x20] */ r_eax = (u32)(r_esp+0x20u);
    /* 00704ca0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00704ca1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00704ca2: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 00704ca6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00704ca7: call 0x706b60 */ r_esp -= 4; W32(r_esp, 0x704cacu); f_00706b60();
    /* 00704cac: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00704caf: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 00704cb3: jmp 0x704a6e */ goto L_00704a6e;
L_00704cb8:; BB(0x00704cb8);
    /* 00704cb8: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 00704cbc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00704cbd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00704cbe: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00704cbf: call 0x706490 */ r_esp -= 4; W32(r_esp, 0x704cc4u); f_00706490();
    /* 00704cc4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00704cc7: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 00704ccb: jmp 0x704a6e */ goto L_00704a6e;
}

void f_00704cdd(void) /* sub_704CDD */
{
    FN_ENTER(0x00704cdd);
    /* 00704cdd: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00704cde: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00704cdf: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00704ce0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00704ce1: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00704ce4: mov edi, ecx */ r_edi = r_ecx;
    /* 00704ce6: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 00704ce9: mov esi, eax */ r_esi = r_eax;
    /* 00704ceb: mov edx, dword ptr [esp + 0x28] */ r_edx = R32((u32)(r_esp+0x28u));
    /* 00704cef: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00704cf0: call 0x858009 */ r_esp -= 4; W32(r_esp, 0x704cf5u); f_00858009();
    /* 00704cf5: mov ebx, eax */ r_ebx = r_eax;
    /* 00704cf7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00704cf8: call 0x858009 */ r_esp -= 4; W32(r_esp, 0x704cfdu); f_00858009();
    /* 00704cfd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00704d00: mov ebp, ebx */ r_ebp = r_ebx;
    /* 00704d02: mov edx, 1 */ r_edx = 0x1u;
    /* 00704d07: cmp ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00704d0a: jle 0x704d24 */ if ((fZ||fS!=fO)) goto L_00704d24;
L_00704d0c:; BB(0x00704d0c);
    /* 00704d0c: mov ecx, dword ptr [esp + 0x28] */ r_ecx = R32((u32)(r_esp+0x28u));
L_00704d10:; BB(0x00704d10);
    /* 00704d10: movzx eax, word ptr [ecx + edx*2] */ r_eax = (u32)R16((u32)(r_ecx+r_edx*2));
    /* 00704d14: cmp eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00704d17: je 0x704ded */ if (fZ) goto L_00704ded;
L_00704d1d:; BB(0x00704d1d);
    /* 00704d1d: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00704d20: cmp edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00704d22: jl 0x704d10 */ if ((fS!=fO)) goto L_00704d10;
L_00704d24:; BB(0x00704d24);
    /* 00704d24: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 00704d28: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00704d29: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00704d2a: call 0x706240 */ r_esp -= 4; W32(r_esp, 0x704d2fu); f_00706240();
    /* 00704d2f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00704d32: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00704d34: jne 0x704d3e */ if (!fZ) goto L_00704d3e;
L_00704d36:; BB(0x00704d36);
    /* 00704d36: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00704d39: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00704d3a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00704d3b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00704d3c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00704d3d: ret  */ FN_RET(0x00704cdd); r_esp += 4; return;
L_00704d3e:; BB(0x00704d3e);
    /* 00704d3e: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 00704d42: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00704d44: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00704d46: add eax, dword ptr [esp + 0x2c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x2cu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00704d4a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00704d4b: mov edx, dword ptr [esp + 0x2c] */ r_edx = R32((u32)(r_esp+0x2cu));
    /* 00704d4f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00704d50: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00704d51: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x704d56u); f_00857dec();
    /* 00704d56: mov edx, dword ptr [esp + 0x3c] */ r_edx = R32((u32)(r_esp+0x3cu));
    /* 00704d5a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00704d5c: mov edx, dword ptr [esp + 0x38] */ r_edx = R32((u32)(r_esp+0x38u));
    /* 00704d60: movzx edx, word ptr [edx + eax*2] */ r_edx = (u32)R16((u32)(r_edx+r_eax*2));
    /* 00704d64: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00704d65: call 0x815e78 */ r_esp -= 4; W32(r_esp, 0x704d6au); f_00815e78();
    /* 00704d6a: mov ecx, dword ptr [esp + 0x3c] */ r_ecx = R32((u32)(r_esp+0x3cu));
    /* 00704d6e: mov dword ptr [esp + 0x14], ebx */ W32((u32)(r_esp+0x14u), r_ebx);
    /* 00704d72: mov ebx, dword ptr [esp + 0x40] */ r_ebx = R32((u32)(r_esp+0x40u));
    /* 00704d76: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 00704d78: mov word ptr [ecx + edx*2], ax */ W16((u32)(r_ecx+r_edx*2), (u16)r_eax);
    /* 00704d7c: add dword ptr [ebx], ebp */ { u32 ad = (u32)(r_ebx);  u32 a = R32(ad); u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00704d7e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00704d7f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00704d80: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
    /* 00704d84: call 0x7068fc */ r_esp -= 4; W32(r_esp, 0x704d89u); f_007068fc();
    /* 00704d89: mov edx, dword ptr [esp + 0x48] */ r_edx = R32((u32)(r_esp+0x48u));
    /* 00704d8d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00704d8e: mov edx, dword ptr [esp + 0x48] */ r_edx = R32((u32)(r_esp+0x48u));
    /* 00704d92: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00704d93: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00704d94: mov ecx, dword ptr [esp + 0x24] */ r_ecx = R32((u32)(r_esp+0x24u));
    /* 00704d98: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00704d99: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00704d9a: call 0x70655c */ r_esp -= 4; W32(r_esp, 0x704d9fu); f_0070655c();
    /* 00704d9f: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00704da2: sub ebx, ebp */ {  u32 a = r_ebx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 00704da4: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00704da6: jle 0x704de5 */ if ((fZ||fS!=fO)) goto L_00704de5;
L_00704da8:; BB(0x00704da8);
    /* 00704da8: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 00704dac: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00704dad: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00704dae: call 0x706240 */ r_esp -= 4; W32(r_esp, 0x704db3u); f_00706240();
    /* 00704db3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00704db6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00704db8: jne 0x704dc2 */ if (!fZ) goto L_00704dc2;
L_00704dba:; BB(0x00704dba);
    /* 00704dba: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00704dbd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00704dbe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00704dbf: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00704dc0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00704dc1: ret  */ FN_RET(0x00704cdd); r_esp += 4; return;
L_00704dc2:; BB(0x00704dc2);
    /* 00704dc2: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 00704dc6: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 00704dc8: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00704dca: add ecx, dword ptr [esp + 0x2c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esp+0x2cu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00704dce: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00704dd0: add ebp, dword ptr [esp + 0x28] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esp+0x28u)); u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00704dd4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00704dd5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00704dd6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00704dd7: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x704ddcu); f_00857dec();
    /* 00704ddc: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00704ddf: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 00704de3: add dword ptr [edx], ebx */ { u32 ad = (u32)(r_edx);  u32 a = R32(ad); u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_00704de5:; BB(0x00704de5);
    /* 00704de5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00704de8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00704de9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00704dea: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00704deb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00704dec: ret  */ FN_RET(0x00704cdd); r_esp += 4; return;
L_00704ded:; BB(0x00704ded);
    /* 00704ded: mov ebp, edx */ r_ebp = r_edx;
    /* 00704def: jmp 0x704d24 */ goto L_00704d24;
}

void f_00704d69(void)
{
    FN_ENTER(0x00704d69);
    /* 00704d69: add byte ptr [ebx - 0x76c3dbb4], cl */ { u32 ad = (u32)(r_ebx+0x893c244cu);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00704d6f: pop esp */ { u32 v = R32(r_esp); r_esp += 4; r_esp = v; }
    /* 00704d70: and al, 0x14 */ {  u32 a = (u8)r_eax; u32 b = 0x14u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00704d72: mov ebx, dword ptr [esp + 0x40] */ r_ebx = R32((u32)(r_esp+0x40u));
    /* 00704d76: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 00704d78: mov word ptr [ecx + edx*2], ax */ W16((u32)(r_ecx+r_edx*2), (u16)r_eax);
    /* 00704d7c: add dword ptr [ebx], ebp */ { u32 ad = (u32)(r_ebx);  u32 a = R32(ad); u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00704d7e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00704d7f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00704d80: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
    /* 00704d84: call 0x7068fc */ r_esp -= 4; W32(r_esp, 0x704d89u); f_007068fc();
    /* 00704d89: mov edx, dword ptr [esp + 0x48] */ r_edx = R32((u32)(r_esp+0x48u));
    /* 00704d8d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00704d8e: mov edx, dword ptr [esp + 0x48] */ r_edx = R32((u32)(r_esp+0x48u));
    /* 00704d92: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00704d93: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00704d94: mov ecx, dword ptr [esp + 0x24] */ r_ecx = R32((u32)(r_esp+0x24u));
    /* 00704d98: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00704d99: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00704d9a: call 0x70655c */ r_esp -= 4; W32(r_esp, 0x704d9fu); f_0070655c();
    /* 00704d9f: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00704da2: sub ebx, ebp */ {  u32 a = r_ebx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 00704da4: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00704da6: jle 0x704de5 */ if ((fZ||fS!=fO)) goto L_00704de5;
L_00704da8:; BB(0x00704da8);
    /* 00704da8: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 00704dac: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00704dad: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00704dae: call 0x706240 */ r_esp -= 4; W32(r_esp, 0x704db3u); f_00706240();
    /* 00704db3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00704db6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00704db8: jne 0x704dc2 */ if (!fZ) goto L_00704dc2;
L_00704dba:; BB(0x00704dba);
    /* 00704dba: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00704dbd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00704dbe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00704dbf: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00704dc0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00704dc1: ret  */ FN_RET(0x00704d69); r_esp += 4; return;
L_00704dc2:; BB(0x00704dc2);
    /* 00704dc2: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 00704dc6: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 00704dc8: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00704dca: add ecx, dword ptr [esp + 0x2c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esp+0x2cu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00704dce: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00704dd0: add ebp, dword ptr [esp + 0x28] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esp+0x28u)); u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00704dd4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00704dd5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00704dd6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00704dd7: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x704ddcu); f_00857dec();
    /* 00704ddc: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00704ddf: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 00704de3: add dword ptr [edx], ebx */ { u32 ad = (u32)(r_edx);  u32 a = R32(ad); u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_00704de5:; BB(0x00704de5);
    /* 00704de5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00704de8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00704de9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00704dea: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00704deb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00704dec: ret  */ FN_RET(0x00704d69); r_esp += 4; return;
}

void f_00704df4(void) /* sub_704DF4 */
{
    FN_ENTER(0x00704df4);
    /* 00704df4: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00704df8: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 00704dfc: movzx ecx, word ptr [esp + 0xc] */ r_ecx = (u32)R16((u32)(r_esp+0xcu));
    /* 00704e01: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00704e02: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00704e03: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00704e04: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00704e05: sub esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00704e08: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00704e0a: mov edi, edx */ r_edi = r_edx;
    /* 00704e0c: mov esi, eax */ r_esi = r_eax;
    /* 00704e0e: mov dword ptr [esp + 0xc], 0 */ W32((u32)(r_esp+0xcu), 0x0u);
    /* 00704e16: movsx ebp, word ptr [esi] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_esi));
    /* 00704e19: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00704e1b: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00704e1d: je 0x70521a */ if (fZ) goto L_0070521a;
L_00704e23:; BB(0x00704e23);
    /* 00704e23: movsx eax, word ptr [esi + 2] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x2u));
    /* 00704e27: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00704e2a: je 0x70543b */ if (fZ) goto L_0070543b;
L_00704e30:; BB(0x00704e30);
    /* 00704e30: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00704e33: je 0x7053ac */ if (fZ) goto L_007053ac;
L_00704e39:; BB(0x00704e39);
    /* 00704e39: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00704e3c: je 0x705369 */ if (fZ) goto L_00705369;
L_00704e42:; BB(0x00704e42);
    /* 00704e42: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00704e45: je 0x7050da */ if (fZ) goto L_007050da;
L_00704e4b:; BB(0x00704e4b);
    /* 00704e4b: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00704e4e: jne 0x7050b9 */ if (!fZ) goto L_007050b9;
L_00704e54:; BB(0x00704e54);
    /* 00704e54: movsx edx, word ptr [esi + 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x4u));
    /* 00704e58: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
    /* 00704e5c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00704e5e: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 00704e62: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 00704e66: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00704e67: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00704e68: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00704e69: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00704e6a: call 0x7064d8 */ r_esp -= 4; W32(r_esp, 0x704e6fu); f_007064d8();
    /* 00704e6f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00704e72: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 00704e76: cmp eax, 0x2c4 */ {  u32 a = r_eax; u32 b = 0x2c4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00704e7b: je 0x7052d4 */ if (fZ) goto L_007052d4;
L_00704e81:; BB(0x00704e81);
    /* 00704e81: cmp eax, 0x2c7 */ {  u32 a = r_eax; u32 b = 0x2c7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00704e86: je 0x70527d */ if (fZ) goto L_0070527d;
L_00704e8c:; BB(0x00704e8c);
    /* 00704e8c: mov ecx, eax */ r_ecx = r_eax;
    /* 00704e8e: cmp ecx, 0x68c */ {  u32 a = r_ecx; u32 b = 0x68cu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00704e94: jl 0x704ee7 */ if ((fS!=fO)) goto L_00704ee7;
L_00704e96:; BB(0x00704e96);
    /* 00704e96: cmp ecx, 0x697 */ {  u32 a = r_ecx; u32 b = 0x697u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00704e9c: jg 0x704ee7 */ if ((!fZ&&fS==fO)) goto L_00704ee7;
L_00704e9e:; BB(0x00704e9e);
    /* 00704e9e: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 00704ea2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00704ea3: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00704ea4: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 00704ea6: call 0x70625c */ r_esp -= 4; W32(r_esp, 0x704eabu); f_0070625c();
    /* 00704eab: mov ebx, dword ptr [0xa96ed4] */ r_ebx = R32((u32)(0xa96ed4u));
    /* 00704eb1: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 00704eb5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00704eb6: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00704eb7: push dword ptr [ebx + 0xa4c] */ { u32 v = R32((u32)(r_ebx+0xa4cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00704ebd: call 0x7067e4 */ r_esp -= 4; W32(r_esp, 0x704ec2u); f_007067e4();
    /* 00704ec2: mov ebx, dword ptr [esp + 0x48] */ r_ebx = R32((u32)(r_esp+0x48u));
    /* 00704ec6: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00704ecb: mov dword ptr [esp + 0x4c], ecx */ W32((u32)(r_esp+0x4cu), r_ecx);
    /* 00704ecf: add ebx, 0xfffff974 */ {  u32 a = r_ebx; u32 b = 0xfffff974u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00704ed5: movzx ecx, bx */ r_ecx = (u32)(u16)r_ebx;
    /* 00704ed8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00704ed9: call 0x706b8c */ r_esp -= 4; W32(r_esp, 0x704edeu); f_00706b8c();
    /* 00704ede: mov dword ptr [esp + 0x54], eax */ W32((u32)(r_esp+0x54u), r_eax);
    /* 00704ee2: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00704ee5: jmp 0x704f5a */ goto L_00704f5a;
L_00704ee7:; BB(0x00704ee7);
    /* 00704ee7: mov ebx, eax */ r_ebx = r_eax;
    /* 00704ee9: mov ecx, 3 */ r_ecx = 0x3u;
    /* 00704eee: mov dword ptr [esp + 0x34], ecx */ W32((u32)(r_esp+0x34u), r_ecx);
    /* 00704ef2: cmp ebx, 0x2c5 */ {  u32 a = r_ebx; u32 b = 0x2c5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00704ef8: je 0x705272 */ if (fZ) goto L_00705272;
L_00704efe:; BB(0x00704efe);
    /* 00704efe: mov ecx, eax */ r_ecx = r_eax;
    /* 00704f00: cmp ecx, 0x2c6 */ {  u32 a = r_ecx; u32 b = 0x2c6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00704f06: jne 0x704f13 */ if (!fZ) goto L_00704f13;
L_00704f08:; BB(0x00704f08);
    /* 00704f08: mov ecx, 2 */ r_ecx = 0x2u;
    /* 00704f0d: mov dword ptr [esp + 0x38], ecx */ W32((u32)(r_esp+0x38u), r_ecx);
    /* 00704f11: jmp 0x704f5a */ goto L_00704f5a;
L_00704f13:; BB(0x00704f13);
    /* 00704f13: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00704f14: call 0x706320 */ r_esp -= 4; W32(r_esp, 0x704f19u); f_00706320();
    /* 00704f19: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00704f1a: mov ecx, dword ptr [0xa96eb4] */ r_ecx = R32((u32)(0xa96eb4u));
    /* 00704f20: movzx ecx, byte ptr [eax + ecx] */ r_ecx = (u32)R8((u32)(r_eax+r_ecx));
    /* 00704f24: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00704f26: je 0x705267 */ if (fZ) goto L_00705267;
L_00704f2c:; BB(0x00704f2c);
    /* 00704f2c: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00704f2f: je 0x704f51 */ if (fZ) goto L_00704f51;
L_00704f31:; BB(0x00704f31);
    /* 00704f31: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00704f34: jne 0x704f41 */ if (!fZ) goto L_00704f41;
L_00704f36:; BB(0x00704f36);
    /* 00704f36: mov ecx, 2 */ r_ecx = 0x2u;
    /* 00704f3b: mov dword ptr [esp + 0x38], ecx */ W32((u32)(r_esp+0x38u), r_ecx);
    /* 00704f3f: jmp 0x704f5a */ goto L_00704f5a;
L_00704f41:; BB(0x00704f41);
    /* 00704f41: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00704f44: jne 0x704f5a */ if (!fZ) goto L_00704f5a;
L_00704f46:; BB(0x00704f46);
    /* 00704f46: mov ecx, 3 */ r_ecx = 0x3u;
    /* 00704f4b: mov dword ptr [esp + 0x38], ecx */ W32((u32)(r_esp+0x38u), r_ecx);
    /* 00704f4f: jmp 0x704f5a */ goto L_00704f5a;
L_00704f51:; BB(0x00704f51);
    /* 00704f51: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00704f56: mov dword ptr [esp + 0x38], ecx */ W32((u32)(r_esp+0x38u), r_ecx);
L_00704f5a:; BB(0x00704f5a);
    /* 00704f5a: cmp ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00704f5d: jle 0x7050a3 */ if ((fZ||fS!=fO)) goto L_007050a3;
L_00704f63:; BB(0x00704f63);
    /* 00704f63: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 00704f67: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00704f68: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00704f69: call 0x7068fc */ r_esp -= 4; W32(r_esp, 0x704f6eu); f_007068fc();
    /* 00704f6e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00704f71: mov edx, dword ptr [0xa96eb8] */ r_edx = R32((u32)(0xa96eb8u));
    /* 00704f77: movsx ecx, word ptr [esi + 6] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_esi+0x6u));
    /* 00704f7b: mov ebx, dword ptr [edx + 0x1c] */ r_ebx = R32((u32)(r_edx+0x1cu));
    /* 00704f7e: mov dword ptr [esp + 0x30], ecx */ W32((u32)(r_esp+0x30u), r_ecx);
    /* 00704f82: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00704f84: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00704f86: jle 0x704faa */ if ((fZ||fS!=fO)) goto L_00704faa;
L_00704f88:; BB(0x00704f88);
    /* 00704f88: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 00704f8b: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 00704f8f: mov dword ptr [esp + 0x2c], edi */ W32((u32)(r_esp+0x2cu), r_edi);
L_00704f93:; BB(0x00704f93);
    /* 00704f93: movsx edi, word ptr [ecx + eax*2] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ecx+r_eax*2));
    /* 00704f97: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00704f9a: cmp edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00704f9c: je 0x70525e */ if (fZ) goto L_0070525e;
L_00704fa2:; BB(0x00704fa2);
    /* 00704fa2: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00704fa4: jl 0x704f93 */ if ((fS!=fO)) goto L_00704f93;
L_00704fa6:; BB(0x00704fa6);
    /* 00704fa6: mov edi, dword ptr [esp + 0x2c] */ r_edi = R32((u32)(r_esp+0x2cu));
L_00704faa:; BB(0x00704faa);
    /* 00704faa: mov ecx, dword ptr [esp + 0x34] */ r_ecx = R32((u32)(r_esp+0x34u));
    /* 00704fae: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00704fb0: je 0x70523f */ if (fZ) goto L_0070523f;
L_00704fb6:; BB(0x00704fb6);
    /* 00704fb6: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00704fb9: je 0x704ffd */ if (fZ) goto L_00704ffd;
L_00704fbb:; BB(0x00704fbb);
    /* 00704fbb: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00704fbe: jne 0x704fdc */ if (!fZ) goto L_00704fdc;
L_00704fc0:; BB(0x00704fc0);
    /* 00704fc0: mov ebx, dword ptr [0xa96ed4] */ r_ebx = R32((u32)(0xa96ed4u));
    /* 00704fc6: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 00704fca: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00704fcb: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00704fcc: push dword ptr [ebx + 0x1a90] */ { u32 v = R32((u32)(r_ebx+0x1a90u)); r_esp -= 4; W32(r_esp, v); }
    /* 00704fd2: call 0x7067e4 */ r_esp -= 4; W32(r_esp, 0x704fd7u); f_007067e4();
    /* 00704fd7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00704fda: jmp 0x705017 */ goto L_00705017;
L_00704fdc:; BB(0x00704fdc);
    /* 00704fdc: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00704fdf: jne 0x705017 */ if (!fZ) goto L_00705017;
L_00704fe1:; BB(0x00704fe1);
    /* 00704fe1: mov ebx, dword ptr [0xa96ed4] */ r_ebx = R32((u32)(0xa96ed4u));
    /* 00704fe7: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 00704feb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00704fec: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00704fed: push dword ptr [ebx + 0x1a98] */ { u32 v = R32((u32)(r_ebx+0x1a98u)); r_esp -= 4; W32(r_esp, v); }
    /* 00704ff3: call 0x7067e4 */ r_esp -= 4; W32(r_esp, 0x704ff8u); f_007067e4();
    /* 00704ff8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00704ffb: jmp 0x705017 */ goto L_00705017;
L_00704ffd:; BB(0x00704ffd);
    /* 00704ffd: mov ebx, dword ptr [0xa96ed4] */ r_ebx = R32((u32)(0xa96ed4u));
    /* 00705003: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 00705007: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00705008: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00705009: push dword ptr [ebx + 0x1a94] */ { u32 v = R32((u32)(r_ebx+0x1a94u)); r_esp -= 4; W32(r_esp, v); }
    /* 0070500f: call 0x7067e4 */ r_esp -= 4; W32(r_esp, 0x705014u); f_007067e4();
    /* 00705014: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00705017:; BB(0x00705017);
    /* 00705017: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 0070501b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0070501c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0070501d: call 0x7068fc */ r_esp -= 4; W32(r_esp, 0x705022u); f_007068fc();
    /* 00705022: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00705025:; BB(0x00705025);
    /* 00705025: mov ecx, dword ptr [esp + 0x38] */ r_ecx = R32((u32)(r_esp+0x38u));
    /* 00705029: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070502b: je 0x705077 */ if (fZ) goto L_00705077;
L_0070502d:; BB(0x0070502d);
    /* 0070502d: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00705030: je 0x705234 */ if (fZ) goto L_00705234;
L_00705036:; BB(0x00705036);
    /* 00705036: mov ebx, dword ptr [0xa96eb8] */ r_ebx = R32((u32)(0xa96eb8u));
    /* 0070503c: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070503f: je 0x70522c */ if (fZ) goto L_0070522c;
L_00705045:; BB(0x00705045);
    /* 00705045: add ebx, 0x10 */ {  u32 a = r_ebx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_00705048:; BB(0x00705048);
    /* 00705048: mov ecx, dword ptr [esp + 0x30] */ r_ecx = R32((u32)(r_esp+0x30u));
    /* 0070504c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0070504d: call 0x706340 */ r_esp -= 4; W32(r_esp, 0x705052u); f_00706340();
    /* 00705052: mov ecx, dword ptr [ebx] */ r_ecx = R32((u32)(r_ebx));
    /* 00705054: lea ebx, [esp + 0x10] */ r_ebx = (u32)(r_esp+0x10u);
    /* 00705058: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00705059: movsx eax, word ptr [ecx + eax*2] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+r_eax*2));
    /* 0070505d: mov ecx, dword ptr [0xa96ed4] */ r_ecx = R32((u32)(0xa96ed4u));
    /* 00705063: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00705064: push dword ptr [ecx + eax*4] */ { u32 v = R32((u32)(r_ecx+r_eax*4)); r_esp -= 4; W32(r_esp, v); }
    /* 00705067: mov ecx, dword ptr [esp + 0x40] */ r_ecx = R32((u32)(r_esp+0x40u));
    /* 0070506b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0070506c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0070506d: call 0x70655c */ r_esp -= 4; W32(r_esp, 0x705072u); f_0070655c();
    /* 00705072: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00705075: jmp 0x70508b */ goto L_0070508b;
L_00705077:; BB(0x00705077);
    /* 00705077: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 0070507b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0070507c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0070507d: mov ebx, dword ptr [esp + 0x38] */ r_ebx = R32((u32)(r_esp+0x38u));
    /* 00705081: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00705082: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00705083: call 0x7064d8 */ r_esp -= 4; W32(r_esp, 0x705088u); f_007064d8();
    /* 00705088: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0070508b:; BB(0x0070508b);
    /* 0070508b: cmp ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0070508e: jle 0x7050a3 */ if ((fZ||fS!=fO)) goto L_007050a3;
L_00705090:; BB(0x00705090);
    /* 00705090: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 00705094: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00705095: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00705096: movsx ecx, word ptr [esi + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_esi+0x8u));
    /* 0070509a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0070509b: call 0x706b60 */ r_esp -= 4; W32(r_esp, 0x7050a0u); f_00706b60();
    /* 007050a0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_007050a3:; BB(0x007050a3);
    /* 007050a3: movzx eax, word ptr [edi] */ r_eax = (u32)R16((u32)(r_edi));
    /* 007050a6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007050a7: call 0x815e78 */ r_esp -= 4; W32(r_esp, 0x7050acu); f_00815e78();
    /* 007050ac: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007050ad: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 007050b1: mov word ptr [edi], ax */ W16((u32)(r_edi), (u16)r_eax);
    /* 007050b4: jmp 0x705207 */ goto L_00705207;
L_007050b9:; BB(0x007050b9);
    /* 007050b9: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007050bc: jne 0x705207 */ if (!fZ) goto L_00705207;
L_007050c2:; BB(0x007050c2);
    /* 007050c2: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 007050c6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007050c7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007050c8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007050c9: call 0x7069fc */ r_esp -= 4; W32(r_esp, 0x7050ceu); f_007069fc();
    /* 007050ce: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007050d1: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 007050d5: jmp 0x705207 */ goto L_00705207;
L_007050da:; BB(0x007050da);
    /* 007050da: movsx ecx, word ptr [esi + 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_esi+0x4u));
    /* 007050de: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 007050e0: cmp ecx, 0x2c4 */ {  u32 a = r_ecx; u32 b = 0x2c4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007050e6: je 0x705355 */ if (fZ) goto L_00705355;
L_007050ec:; BB(0x007050ec);
    /* 007050ec: cmp ecx, 0x2c7 */ {  u32 a = r_ecx; u32 b = 0x2c7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007050f2: je 0x705318 */ if (fZ) goto L_00705318;
L_007050f8:; BB(0x007050f8);
    /* 007050f8: cmp ecx, 0x68c */ {  u32 a = r_ecx; u32 b = 0x68cu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007050fe: jl 0x705142 */ if ((fS!=fO)) goto L_00705142;
L_00705100:; BB(0x00705100);
    /* 00705100: cmp ecx, 0x697 */ {  u32 a = r_ecx; u32 b = 0x697u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00705106: jg 0x705142 */ if ((!fZ&&fS==fO)) goto L_00705142;
L_00705108:; BB(0x00705108);
    /* 00705108: lea ebx, [esp + 0xc] */ r_ebx = (u32)(r_esp+0xcu);
    /* 0070510c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0070510d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0070510e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0070510f: call 0x706b60 */ r_esp -= 4; W32(r_esp, 0x705114u); f_00706b60();
    /* 00705114: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 00705118: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00705119: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0070511a: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 0070511c: call 0x70625c */ r_esp -= 4; W32(r_esp, 0x705121u); f_0070625c();
    /* 00705121: mov ebx, dword ptr [0xa96ed4] */ r_ebx = R32((u32)(0xa96ed4u));
    /* 00705127: lea ecx, [esp + 0x24] */ r_ecx = (u32)(r_esp+0x24u);
    /* 0070512b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0070512c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0070512d: push dword ptr [ebx + 0xa4c] */ { u32 v = R32((u32)(r_ebx+0xa4cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00705133: call 0x7067e4 */ r_esp -= 4; W32(r_esp, 0x705138u); f_007067e4();
    /* 00705138: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0070513b: mov ebx, 1 */ r_ebx = 0x1u;
    /* 00705140: jmp 0x70514e */ goto L_0070514e;
L_00705142:; BB(0x00705142);
    /* 00705142: cmp ecx, 0x698 */ {  u32 a = r_ecx; u32 b = 0x698u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00705148: je 0x7052f4 */ if (fZ) goto L_007052f4;
L_0070514e:; BB(0x0070514e);
    /* 0070514e: cmp ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00705151: jle 0x7051f6 */ if ((fZ||fS!=fO)) goto L_007051f6;
L_00705157:; BB(0x00705157);
    /* 00705157: movsx ecx, word ptr [esi + 6] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_esi+0x6u));
    /* 0070515b: mov dword ptr [esp + 0x30], ecx */ W32((u32)(r_esp+0x30u), r_ecx);
    /* 0070515f: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 00705163: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00705164: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00705165: call 0x7068fc */ r_esp -= 4; W32(r_esp, 0x70516au); f_007068fc();
    /* 0070516a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0070516d: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070516f: je 0x7051a7 */ if (fZ) goto L_007051a7;
L_00705171:; BB(0x00705171);
    /* 00705171: mov ecx, dword ptr [0xa96ebc] */ r_ecx = R32((u32)(0xa96ebcu));
    /* 00705177: cmp ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070517a: je 0x7052ec */ if (fZ) goto L_007052ec;
L_00705180:; BB(0x00705180);
    /* 00705180: mov ebx, dword ptr [esp + 0x30] */ r_ebx = R32((u32)(r_esp+0x30u));
    /* 00705184: mov ecx, dword ptr [ecx] */ r_ecx = R32((u32)(r_ecx));
    /* 00705186: movsx eax, word ptr [ecx + ebx*2 - 0xb58] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+r_ebx*2+0xfffff4a8u));
    /* 0070518e: mov ebx, dword ptr [0xa96ed4] */ r_ebx = R32((u32)(0xa96ed4u));
    /* 00705194: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 00705198: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00705199: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0070519a: push dword ptr [ebx + eax*4] */ { u32 v = R32((u32)(r_ebx+r_eax*4)); r_esp -= 4; W32(r_esp, v); }
    /* 0070519d: call 0x7067e4 */ r_esp -= 4; W32(r_esp, 0x7051a2u); f_007067e4();
    /* 007051a2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007051a5: jmp 0x7051ba */ goto L_007051ba;
L_007051a7:; BB(0x007051a7);
    /* 007051a7: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 007051ab: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007051ac: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007051ad: mov ebx, dword ptr [esp + 0x38] */ r_ebx = R32((u32)(r_esp+0x38u));
    /* 007051b1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007051b2: call 0x706b60 */ r_esp -= 4; W32(r_esp, 0x7051b7u); f_00706b60();
    /* 007051b7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_007051ba:; BB(0x007051ba);
    /* 007051ba: cmp ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007051bd: jle 0x7051f6 */ if ((fZ||fS!=fO)) goto L_007051f6;
L_007051bf:; BB(0x007051bf);
    /* 007051bf: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 007051c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007051c4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007051c5: call 0x7068fc */ r_esp -= 4; W32(r_esp, 0x7051cau); f_007068fc();
    /* 007051ca: lea ecx, [esp + 0x14] */ r_ecx = (u32)(r_esp+0x14u);
    /* 007051ce: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007051cf: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007051d0: movsx ebx, word ptr [esi + 8] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_esi+0x8u));
    /* 007051d4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007051d5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007051d6: call 0x7064d8 */ r_esp -= 4; W32(r_esp, 0x7051dbu); f_007064d8();
    /* 007051db: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007051de: cmp ebp, 3 */ {  u32 a = r_ebp; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007051e1: jle 0x7051f6 */ if ((fZ||fS!=fO)) goto L_007051f6;
L_007051e3:; BB(0x007051e3);
    /* 007051e3: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 007051e7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007051e8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007051e9: movsx ecx, word ptr [esi + 0xa] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_esi+0xau));
    /* 007051ed: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007051ee: call 0x706b60 */ r_esp -= 4; W32(r_esp, 0x7051f3u); f_00706b60();
    /* 007051f3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_007051f6:; BB(0x007051f6);
    /* 007051f6: movzx eax, word ptr [edi] */ r_eax = (u32)R16((u32)(r_edi));
    /* 007051f9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007051fa: call 0x815e78 */ r_esp -= 4; W32(r_esp, 0x7051ffu); f_00815e78();
    /* 007051ff: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00705200: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 00705204: mov word ptr [edi], ax */ W16((u32)(r_edi), (u16)r_eax);
L_00705207:; BB(0x00705207);
    /* 00705207: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00705209: mov word ptr [edi + edx*2], cx */ W16((u32)(r_edi+r_edx*2), (u16)r_ecx);
    /* 0070520d: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00705210: mov eax, edx */ r_eax = r_edx;
    /* 00705212: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00705215: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00705216: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00705217: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00705218: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00705219: ret  */ FN_RET(0x00704df4); r_esp += 4; return;
L_0070521a:; BB(0x0070521a);
    /* 0070521a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0070521c: mov word ptr [edi], cx */ W16((u32)(r_edi), (u16)r_ecx);
    /* 0070521f: mov eax, 1 */ r_eax = 0x1u;
    /* 00705224: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00705227: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00705228: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00705229: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0070522a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0070522b: ret  */ FN_RET(0x00704df4); r_esp += 4; return;
L_0070522c:; BB(0x0070522c);
    /* 0070522c: add ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0070522f: jmp 0x705048 */ goto L_00705048;
L_00705234:; BB(0x00705234);
    /* 00705234: mov ebx, dword ptr [0xa96eb8] */ r_ebx = R32((u32)(0xa96eb8u));
    /* 0070523a: jmp 0x705048 */ goto L_00705048;
L_0070523f:; BB(0x0070523f);
    /* 0070523f: mov ebx, dword ptr [0xa96ed4] */ r_ebx = R32((u32)(0xa96ed4u));
    /* 00705245: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 00705249: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0070524a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0070524b: push dword ptr [ebx + 0x1a8c] */ { u32 v = R32((u32)(r_ebx+0x1a8cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00705251: call 0x7067e4 */ r_esp -= 4; W32(r_esp, 0x705256u); f_007067e4();
    /* 00705256: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00705259: jmp 0x705017 */ goto L_00705017;
L_0070525e:; BB(0x0070525e);
    /* 0070525e: mov edi, dword ptr [esp + 0x2c] */ r_edi = R32((u32)(r_esp+0x2cu));
    /* 00705262: jmp 0x705025 */ goto L_00705025;
L_00705267:; BB(0x00705267);
    /* 00705267: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00705269: mov dword ptr [esp + 0x38], ecx */ W32((u32)(r_esp+0x38u), r_ecx);
    /* 0070526d: jmp 0x704f5a */ goto L_00704f5a;
L_00705272:; BB(0x00705272);
    /* 00705272: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00705274: mov dword ptr [esp + 0x38], ecx */ W32((u32)(r_esp+0x38u), r_ecx);
    /* 00705278: jmp 0x704f5a */ goto L_00704f5a;
L_0070527d:; BB(0x0070527d);
    /* 0070527d: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 00705281: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00705282: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00705283: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 00705285: call 0x70625c */ r_esp -= 4; W32(r_esp, 0x70528au); f_0070625c();
    /* 0070528a: mov edx, dword ptr [0xa96ed4] */ r_edx = R32((u32)(0xa96ed4u));
    /* 00705290: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 00705294: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00705295: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00705296: push dword ptr [edx + 0xa58] */ { u32 v = R32((u32)(r_edx+0xa58u)); r_esp -= 4; W32(r_esp, v); }
    /* 0070529c: call 0x7067e4 */ r_esp -= 4; W32(r_esp, 0x7052a1u); f_007067e4();
    /* 007052a1: mov eax, 2 */ r_eax = 0x2u;
    /* 007052a6: mov dword ptr [esp + 0x4c], eax */ W32((u32)(r_esp+0x4cu), r_eax);
    /* 007052aa: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007052ab: call 0x706b8c */ r_esp -= 4; W32(r_esp, 0x7052b0u); f_00706b8c();
    /* 007052b0: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007052b3: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007052b6: je 0x7052c6 */ if (fZ) goto L_007052c6;
L_007052b8:; BB(0x007052b8);
    /* 007052b8: mov ecx, 1 */ r_ecx = 0x1u;
    /* 007052bd: mov dword ptr [esp + 0x38], ecx */ W32((u32)(r_esp+0x38u), r_ecx);
    /* 007052c1: jmp 0x704f5a */ goto L_00704f5a;
L_007052c6:; BB(0x007052c6);
    /* 007052c6: mov ecx, 3 */ r_ecx = 0x3u;
    /* 007052cb: mov dword ptr [esp + 0x38], ecx */ W32((u32)(r_esp+0x38u), r_ecx);
    /* 007052cf: jmp 0x704f5a */ goto L_00704f5a;
L_007052d4:; BB(0x007052d4);
    /* 007052d4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007052d6: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 007052da: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007052db: call 0x706b8c */ r_esp -= 4; W32(r_esp, 0x7052e0u); f_00706b8c();
    /* 007052e0: mov dword ptr [esp + 0x3c], eax */ W32((u32)(r_esp+0x3cu), r_eax);
    /* 007052e4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007052e7: jmp 0x704f5a */ goto L_00704f5a;
L_007052ec:; BB(0x007052ec);
    /* 007052ec: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007052ef: jmp 0x705180 */ goto L_00705180;
L_007052f4:; BB(0x007052f4);
    /* 007052f4: mov ebx, dword ptr [0xa96ed4] */ r_ebx = R32((u32)(0xa96ed4u));
    /* 007052fa: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 007052fe: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007052ff: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00705300: push dword ptr [ebx + 0xa4c] */ { u32 v = R32((u32)(r_ebx+0xa4cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00705306: call 0x7067e4 */ r_esp -= 4; W32(r_esp, 0x70530bu); f_007067e4();
    /* 0070530b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0070530e: mov ebx, 1 */ r_ebx = 0x1u;
    /* 00705313: jmp 0x70514e */ goto L_0070514e;
L_00705318:; BB(0x00705318);
    /* 00705318: lea ebx, [esp + 0xc] */ r_ebx = (u32)(r_esp+0xcu);
    /* 0070531c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0070531d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0070531e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0070531f: call 0x706b60 */ r_esp -= 4; W32(r_esp, 0x705324u); f_00706b60();
    /* 00705324: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 00705328: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00705329: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0070532a: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 0070532c: call 0x70625c */ r_esp -= 4; W32(r_esp, 0x705331u); f_0070625c();
    /* 00705331: mov ebx, dword ptr [0xa96ed4] */ r_ebx = R32((u32)(0xa96ed4u));
    /* 00705337: lea ecx, [esp + 0x24] */ r_ecx = (u32)(r_esp+0x24u);
    /* 0070533b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0070533c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0070533d: push dword ptr [ebx + 0xa58] */ { u32 v = R32((u32)(r_ebx+0xa58u)); r_esp -= 4; W32(r_esp, v); }
    /* 00705343: call 0x7067e4 */ r_esp -= 4; W32(r_esp, 0x705348u); f_007067e4();
    /* 00705348: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0070534b: mov ebx, 2 */ r_ebx = 0x2u;
    /* 00705350: jmp 0x70514e */ goto L_0070514e;
L_00705355:; BB(0x00705355);
    /* 00705355: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 00705359: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0070535a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0070535b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0070535c: call 0x706b60 */ r_esp -= 4; W32(r_esp, 0x705361u); f_00706b60();
    /* 00705361: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00705364: jmp 0x70514e */ goto L_0070514e;
L_00705369:; BB(0x00705369);
    /* 00705369: cmp ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0070536c: jle 0x705390 */ if ((fZ||fS!=fO)) goto L_00705390;
L_0070536e:; BB(0x0070536e);
    /* 0070536e: lea ebp, [esp + 0x10] */ r_ebp = (u32)(r_esp+0x10u);
    /* 00705372: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00705373: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00705374: call 0x706360 */ r_esp -= 4; W32(r_esp, 0x705379u); f_00706360();
    /* 00705379: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0070537c: lea eax, [esp + 0x10] */ r_eax = (u32)(r_esp+0x10u);
    /* 00705380: mov edx, edi */ r_edx = r_edi;
    /* 00705382: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00705384: call 0x704e01 */ r_esp -= 4; W32(r_esp, 0x705389u); f_00704e01();
    /* 00705389: mov edx, eax */ r_edx = r_eax;
    /* 0070538b: jmp 0x705207 */ goto L_00705207;
L_00705390:; BB(0x00705390);
    /* 00705390: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 00705394: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00705395: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00705396: movsx ecx, word ptr [esi + 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_esi+0x4u));
    /* 0070539a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0070539b: call 0x706b60 */ r_esp -= 4; W32(r_esp, 0x7053a0u); f_00706b60();
    /* 007053a0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007053a3: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 007053a7: jmp 0x705207 */ goto L_00705207;
L_007053ac:; BB(0x007053ac);
    /* 007053ac: mov ecx, 2 */ r_ecx = 0x2u;
    /* 007053b1: cmp ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007053b4: mov ebx, 0 */ r_ebx = 0x0u;
    /* 007053b9: jle 0x7053bd */ if ((fZ||fS!=fO)) goto L_007053bd;
L_007053bb:; BB(0x007053bb);
    /* 007053bb: mov ebp, ecx */ r_ebp = r_ecx;
L_007053bd:; BB(0x007053bd);
    /* 007053bd: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 007053bf: jle 0x7053f3 */ if ((fZ||fS!=fO)) goto L_007053f3;
L_007053c1:; BB(0x007053c1);
    /* 007053c1: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 007053c5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007053c6: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007053c7: movsx eax, word ptr [esi + ebx*2 + 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+r_ebx*2+0x4u));
    /* 007053cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007053cd: call 0x706b60 */ r_esp -= 4; W32(r_esp, 0x7053d2u); f_00706b60();
    /* 007053d2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007053d5: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007053d8: cmp ebx, ebp */ {  u32 a = r_ebx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007053da: jge 0x7053f3 */ if ((fS==fO)) goto L_007053f3;
L_007053dc:; BB(0x007053dc);
    /* 007053dc: cmp ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007053df: jne 0x7053c1 */ if (!fZ) goto L_007053c1;
L_007053e1:; BB(0x007053e1);
    /* 007053e1: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 007053e5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007053e6: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007053e7: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 007053e9: call 0x70625c */ r_esp -= 4; W32(r_esp, 0x7053eeu); f_0070625c();
    /* 007053ee: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007053f1: jmp 0x7053c1 */ goto L_007053c1;
L_007053f3:; BB(0x007053f3);
    /* 007053f3: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 007053f7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007053f8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007053f9: push 0x3f */ { u32 v = 0x3fu; r_esp -= 4; W32(r_esp, v); }
    /* 007053fb: call 0x70625c */ r_esp -= 4; W32(r_esp, 0x705400u); f_0070625c();
    /* 00705400: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00705403: movsx ecx, word ptr [esi] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_esi));
    /* 00705406: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00705409: jg 0x705414 */ if ((!fZ&&fS==fO)) goto L_00705414;
L_0070540b:; BB(0x0070540b);
    /* 0070540b: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0070540f: jmp 0x705207 */ goto L_00705207;
L_00705414:; BB(0x00705414);
    /* 00705414: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 00705418: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00705419: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0070541a: call 0x7069b8 */ r_esp -= 4; W32(r_esp, 0x70541fu); f_007069b8();
    /* 0070541f: lea eax, [esp + 0x14] */ r_eax = (u32)(r_esp+0x14u);
    /* 00705423: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00705424: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00705425: movsx ecx, word ptr [esi + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_esi+0x8u));
    /* 00705429: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0070542a: call 0x706b60 */ r_esp -= 4; W32(r_esp, 0x70542fu); f_00706b60();
    /* 0070542f: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00705432: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 00705436: jmp 0x705207 */ goto L_00705207;
L_0070543b:; BB(0x0070543b);
    /* 0070543b: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 0070543f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00705440: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00705441: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00705442: call 0x706490 */ r_esp -= 4; W32(r_esp, 0x705447u); f_00706490();
    /* 00705447: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0070544a: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0070544e: jmp 0x705207 */ goto L_00705207;
}

void f_00704e01(void) /* sub_704E01 */
{
    FN_ENTER(0x00704e01);
    /* 00704e01: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00704e02: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00704e03: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00704e04: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00704e05: sub esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00704e08: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00704e0a: mov edi, edx */ r_edi = r_edx;
    /* 00704e0c: mov esi, eax */ r_esi = r_eax;
    /* 00704e0e: mov dword ptr [esp + 0xc], 0 */ W32((u32)(r_esp+0xcu), 0x0u);
    /* 00704e16: movsx ebp, word ptr [esi] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_esi));
    /* 00704e19: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00704e1b: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00704e1d: je 0x70521a */ if (fZ) goto L_0070521a;
L_00704e23:; BB(0x00704e23);
    /* 00704e23: movsx eax, word ptr [esi + 2] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x2u));
    /* 00704e27: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00704e2a: je 0x70543b */ if (fZ) goto L_0070543b;
L_00704e30:; BB(0x00704e30);
    /* 00704e30: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00704e33: je 0x7053ac */ if (fZ) goto L_007053ac;
L_00704e39:; BB(0x00704e39);
    /* 00704e39: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00704e3c: je 0x705369 */ if (fZ) goto L_00705369;
L_00704e42:; BB(0x00704e42);
    /* 00704e42: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00704e45: je 0x7050da */ if (fZ) goto L_007050da;
L_00704e4b:; BB(0x00704e4b);
    /* 00704e4b: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00704e4e: jne 0x7050b9 */ if (!fZ) goto L_007050b9;
L_00704e54:; BB(0x00704e54);
    /* 00704e54: movsx edx, word ptr [esi + 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x4u));
    /* 00704e58: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
    /* 00704e5c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00704e5e: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 00704e62: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 00704e66: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00704e67: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00704e68: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00704e69: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00704e6a: call 0x7064d8 */ r_esp -= 4; W32(r_esp, 0x704e6fu); f_007064d8();
    /* 00704e6f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00704e72: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 00704e76: cmp eax, 0x2c4 */ {  u32 a = r_eax; u32 b = 0x2c4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00704e7b: je 0x7052d4 */ if (fZ) goto L_007052d4;
L_00704e81:; BB(0x00704e81);
    /* 00704e81: cmp eax, 0x2c7 */ {  u32 a = r_eax; u32 b = 0x2c7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00704e86: je 0x70527d */ if (fZ) goto L_0070527d;
L_00704e8c:; BB(0x00704e8c);
    /* 00704e8c: mov ecx, eax */ r_ecx = r_eax;
    /* 00704e8e: cmp ecx, 0x68c */ {  u32 a = r_ecx; u32 b = 0x68cu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00704e94: jl 0x704ee7 */ if ((fS!=fO)) goto L_00704ee7;
L_00704e96:; BB(0x00704e96);
    /* 00704e96: cmp ecx, 0x697 */ {  u32 a = r_ecx; u32 b = 0x697u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00704e9c: jg 0x704ee7 */ if ((!fZ&&fS==fO)) goto L_00704ee7;
L_00704e9e:; BB(0x00704e9e);
    /* 00704e9e: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 00704ea2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00704ea3: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00704ea4: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 00704ea6: call 0x70625c */ r_esp -= 4; W32(r_esp, 0x704eabu); f_0070625c();
    /* 00704eab: mov ebx, dword ptr [0xa96ed4] */ r_ebx = R32((u32)(0xa96ed4u));
    /* 00704eb1: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 00704eb5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00704eb6: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00704eb7: push dword ptr [ebx + 0xa4c] */ { u32 v = R32((u32)(r_ebx+0xa4cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00704ebd: call 0x7067e4 */ r_esp -= 4; W32(r_esp, 0x704ec2u); f_007067e4();
    /* 00704ec2: mov ebx, dword ptr [esp + 0x48] */ r_ebx = R32((u32)(r_esp+0x48u));
    /* 00704ec6: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00704ecb: mov dword ptr [esp + 0x4c], ecx */ W32((u32)(r_esp+0x4cu), r_ecx);
    /* 00704ecf: add ebx, 0xfffff974 */ {  u32 a = r_ebx; u32 b = 0xfffff974u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00704ed5: movzx ecx, bx */ r_ecx = (u32)(u16)r_ebx;
    /* 00704ed8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00704ed9: call 0x706b8c */ r_esp -= 4; W32(r_esp, 0x704edeu); f_00706b8c();
    /* 00704ede: mov dword ptr [esp + 0x54], eax */ W32((u32)(r_esp+0x54u), r_eax);
    /* 00704ee2: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00704ee5: jmp 0x704f5a */ goto L_00704f5a;
L_00704ee7:; BB(0x00704ee7);
    /* 00704ee7: mov ebx, eax */ r_ebx = r_eax;
    /* 00704ee9: mov ecx, 3 */ r_ecx = 0x3u;
    /* 00704eee: mov dword ptr [esp + 0x34], ecx */ W32((u32)(r_esp+0x34u), r_ecx);
    /* 00704ef2: cmp ebx, 0x2c5 */ {  u32 a = r_ebx; u32 b = 0x2c5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00704ef8: je 0x705272 */ if (fZ) goto L_00705272;
L_00704efe:; BB(0x00704efe);
    /* 00704efe: mov ecx, eax */ r_ecx = r_eax;
    /* 00704f00: cmp ecx, 0x2c6 */ {  u32 a = r_ecx; u32 b = 0x2c6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00704f06: jne 0x704f13 */ if (!fZ) goto L_00704f13;
L_00704f08:; BB(0x00704f08);
    /* 00704f08: mov ecx, 2 */ r_ecx = 0x2u;
    /* 00704f0d: mov dword ptr [esp + 0x38], ecx */ W32((u32)(r_esp+0x38u), r_ecx);
    /* 00704f11: jmp 0x704f5a */ goto L_00704f5a;
L_00704f13:; BB(0x00704f13);
    /* 00704f13: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00704f14: call 0x706320 */ r_esp -= 4; W32(r_esp, 0x704f19u); f_00706320();
    /* 00704f19: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00704f1a: mov ecx, dword ptr [0xa96eb4] */ r_ecx = R32((u32)(0xa96eb4u));
    /* 00704f20: movzx ecx, byte ptr [eax + ecx] */ r_ecx = (u32)R8((u32)(r_eax+r_ecx));
    /* 00704f24: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00704f26: je 0x705267 */ if (fZ) goto L_00705267;
L_00704f2c:; BB(0x00704f2c);
    /* 00704f2c: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00704f2f: je 0x704f51 */ if (fZ) goto L_00704f51;
L_00704f31:; BB(0x00704f31);
    /* 00704f31: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00704f34: jne 0x704f41 */ if (!fZ) goto L_00704f41;
L_00704f36:; BB(0x00704f36);
    /* 00704f36: mov ecx, 2 */ r_ecx = 0x2u;
    /* 00704f3b: mov dword ptr [esp + 0x38], ecx */ W32((u32)(r_esp+0x38u), r_ecx);
    /* 00704f3f: jmp 0x704f5a */ goto L_00704f5a;
L_00704f41:; BB(0x00704f41);
    /* 00704f41: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00704f44: jne 0x704f5a */ if (!fZ) goto L_00704f5a;
L_00704f46:; BB(0x00704f46);
    /* 00704f46: mov ecx, 3 */ r_ecx = 0x3u;
    /* 00704f4b: mov dword ptr [esp + 0x38], ecx */ W32((u32)(r_esp+0x38u), r_ecx);
    /* 00704f4f: jmp 0x704f5a */ goto L_00704f5a;
L_00704f51:; BB(0x00704f51);
    /* 00704f51: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00704f56: mov dword ptr [esp + 0x38], ecx */ W32((u32)(r_esp+0x38u), r_ecx);
L_00704f5a:; BB(0x00704f5a);
    /* 00704f5a: cmp ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00704f5d: jle 0x7050a3 */ if ((fZ||fS!=fO)) goto L_007050a3;
L_00704f63:; BB(0x00704f63);
    /* 00704f63: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 00704f67: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00704f68: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00704f69: call 0x7068fc */ r_esp -= 4; W32(r_esp, 0x704f6eu); f_007068fc();
    /* 00704f6e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00704f71: mov edx, dword ptr [0xa96eb8] */ r_edx = R32((u32)(0xa96eb8u));
    /* 00704f77: movsx ecx, word ptr [esi + 6] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_esi+0x6u));
    /* 00704f7b: mov ebx, dword ptr [edx + 0x1c] */ r_ebx = R32((u32)(r_edx+0x1cu));
    /* 00704f7e: mov dword ptr [esp + 0x30], ecx */ W32((u32)(r_esp+0x30u), r_ecx);
    /* 00704f82: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00704f84: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00704f86: jle 0x704faa */ if ((fZ||fS!=fO)) goto L_00704faa;
L_00704f88:; BB(0x00704f88);
    /* 00704f88: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 00704f8b: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 00704f8f: mov dword ptr [esp + 0x2c], edi */ W32((u32)(r_esp+0x2cu), r_edi);
L_00704f93:; BB(0x00704f93);
    /* 00704f93: movsx edi, word ptr [ecx + eax*2] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ecx+r_eax*2));
    /* 00704f97: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00704f9a: cmp edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00704f9c: je 0x70525e */ if (fZ) goto L_0070525e;
L_00704fa2:; BB(0x00704fa2);
    /* 00704fa2: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00704fa4: jl 0x704f93 */ if ((fS!=fO)) goto L_00704f93;
L_00704fa6:; BB(0x00704fa6);
    /* 00704fa6: mov edi, dword ptr [esp + 0x2c] */ r_edi = R32((u32)(r_esp+0x2cu));
L_00704faa:; BB(0x00704faa);
    /* 00704faa: mov ecx, dword ptr [esp + 0x34] */ r_ecx = R32((u32)(r_esp+0x34u));
    /* 00704fae: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00704fb0: je 0x70523f */ if (fZ) goto L_0070523f;
L_00704fb6:; BB(0x00704fb6);
    /* 00704fb6: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00704fb9: je 0x704ffd */ if (fZ) goto L_00704ffd;
L_00704fbb:; BB(0x00704fbb);
    /* 00704fbb: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00704fbe: jne 0x704fdc */ if (!fZ) goto L_00704fdc;
L_00704fc0:; BB(0x00704fc0);
    /* 00704fc0: mov ebx, dword ptr [0xa96ed4] */ r_ebx = R32((u32)(0xa96ed4u));
    /* 00704fc6: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 00704fca: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00704fcb: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00704fcc: push dword ptr [ebx + 0x1a90] */ { u32 v = R32((u32)(r_ebx+0x1a90u)); r_esp -= 4; W32(r_esp, v); }
    /* 00704fd2: call 0x7067e4 */ r_esp -= 4; W32(r_esp, 0x704fd7u); f_007067e4();
    /* 00704fd7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00704fda: jmp 0x705017 */ goto L_00705017;
L_00704fdc:; BB(0x00704fdc);
    /* 00704fdc: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00704fdf: jne 0x705017 */ if (!fZ) goto L_00705017;
L_00704fe1:; BB(0x00704fe1);
    /* 00704fe1: mov ebx, dword ptr [0xa96ed4] */ r_ebx = R32((u32)(0xa96ed4u));
    /* 00704fe7: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 00704feb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00704fec: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00704fed: push dword ptr [ebx + 0x1a98] */ { u32 v = R32((u32)(r_ebx+0x1a98u)); r_esp -= 4; W32(r_esp, v); }
    /* 00704ff3: call 0x7067e4 */ r_esp -= 4; W32(r_esp, 0x704ff8u); f_007067e4();
    /* 00704ff8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00704ffb: jmp 0x705017 */ goto L_00705017;
L_00704ffd:; BB(0x00704ffd);
    /* 00704ffd: mov ebx, dword ptr [0xa96ed4] */ r_ebx = R32((u32)(0xa96ed4u));
    /* 00705003: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 00705007: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00705008: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00705009: push dword ptr [ebx + 0x1a94] */ { u32 v = R32((u32)(r_ebx+0x1a94u)); r_esp -= 4; W32(r_esp, v); }
    /* 0070500f: call 0x7067e4 */ r_esp -= 4; W32(r_esp, 0x705014u); f_007067e4();
    /* 00705014: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00705017:; BB(0x00705017);
    /* 00705017: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 0070501b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0070501c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0070501d: call 0x7068fc */ r_esp -= 4; W32(r_esp, 0x705022u); f_007068fc();
    /* 00705022: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00705025:; BB(0x00705025);
    /* 00705025: mov ecx, dword ptr [esp + 0x38] */ r_ecx = R32((u32)(r_esp+0x38u));
    /* 00705029: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070502b: je 0x705077 */ if (fZ) goto L_00705077;
L_0070502d:; BB(0x0070502d);
    /* 0070502d: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00705030: je 0x705234 */ if (fZ) goto L_00705234;
L_00705036:; BB(0x00705036);
    /* 00705036: mov ebx, dword ptr [0xa96eb8] */ r_ebx = R32((u32)(0xa96eb8u));
    /* 0070503c: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070503f: je 0x70522c */ if (fZ) goto L_0070522c;
L_00705045:; BB(0x00705045);
    /* 00705045: add ebx, 0x10 */ {  u32 a = r_ebx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_00705048:; BB(0x00705048);
    /* 00705048: mov ecx, dword ptr [esp + 0x30] */ r_ecx = R32((u32)(r_esp+0x30u));
    /* 0070504c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0070504d: call 0x706340 */ r_esp -= 4; W32(r_esp, 0x705052u); f_00706340();
    /* 00705052: mov ecx, dword ptr [ebx] */ r_ecx = R32((u32)(r_ebx));
    /* 00705054: lea ebx, [esp + 0x10] */ r_ebx = (u32)(r_esp+0x10u);
    /* 00705058: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00705059: movsx eax, word ptr [ecx + eax*2] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+r_eax*2));
    /* 0070505d: mov ecx, dword ptr [0xa96ed4] */ r_ecx = R32((u32)(0xa96ed4u));
    /* 00705063: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00705064: push dword ptr [ecx + eax*4] */ { u32 v = R32((u32)(r_ecx+r_eax*4)); r_esp -= 4; W32(r_esp, v); }
    /* 00705067: mov ecx, dword ptr [esp + 0x40] */ r_ecx = R32((u32)(r_esp+0x40u));
    /* 0070506b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0070506c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0070506d: call 0x70655c */ r_esp -= 4; W32(r_esp, 0x705072u); f_0070655c();
    /* 00705072: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00705075: jmp 0x70508b */ goto L_0070508b;
L_00705077:; BB(0x00705077);
    /* 00705077: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 0070507b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0070507c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0070507d: mov ebx, dword ptr [esp + 0x38] */ r_ebx = R32((u32)(r_esp+0x38u));
    /* 00705081: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00705082: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00705083: call 0x7064d8 */ r_esp -= 4; W32(r_esp, 0x705088u); f_007064d8();
    /* 00705088: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0070508b:; BB(0x0070508b);
    /* 0070508b: cmp ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0070508e: jle 0x7050a3 */ if ((fZ||fS!=fO)) goto L_007050a3;
L_00705090:; BB(0x00705090);
    /* 00705090: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 00705094: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00705095: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00705096: movsx ecx, word ptr [esi + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_esi+0x8u));
    /* 0070509a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0070509b: call 0x706b60 */ r_esp -= 4; W32(r_esp, 0x7050a0u); f_00706b60();
    /* 007050a0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_007050a3:; BB(0x007050a3);
    /* 007050a3: movzx eax, word ptr [edi] */ r_eax = (u32)R16((u32)(r_edi));
    /* 007050a6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007050a7: call 0x815e78 */ r_esp -= 4; W32(r_esp, 0x7050acu); f_00815e78();
    /* 007050ac: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007050ad: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 007050b1: mov word ptr [edi], ax */ W16((u32)(r_edi), (u16)r_eax);
    /* 007050b4: jmp 0x705207 */ goto L_00705207;
L_007050b9:; BB(0x007050b9);
    /* 007050b9: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007050bc: jne 0x705207 */ if (!fZ) goto L_00705207;
L_007050c2:; BB(0x007050c2);
    /* 007050c2: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 007050c6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007050c7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007050c8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007050c9: call 0x7069fc */ r_esp -= 4; W32(r_esp, 0x7050ceu); f_007069fc();
    /* 007050ce: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007050d1: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 007050d5: jmp 0x705207 */ goto L_00705207;
L_007050da:; BB(0x007050da);
    /* 007050da: movsx ecx, word ptr [esi + 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_esi+0x4u));
    /* 007050de: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 007050e0: cmp ecx, 0x2c4 */ {  u32 a = r_ecx; u32 b = 0x2c4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007050e6: je 0x705355 */ if (fZ) goto L_00705355;
L_007050ec:; BB(0x007050ec);
    /* 007050ec: cmp ecx, 0x2c7 */ {  u32 a = r_ecx; u32 b = 0x2c7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007050f2: je 0x705318 */ if (fZ) goto L_00705318;
L_007050f8:; BB(0x007050f8);
    /* 007050f8: cmp ecx, 0x68c */ {  u32 a = r_ecx; u32 b = 0x68cu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007050fe: jl 0x705142 */ if ((fS!=fO)) goto L_00705142;
L_00705100:; BB(0x00705100);
    /* 00705100: cmp ecx, 0x697 */ {  u32 a = r_ecx; u32 b = 0x697u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00705106: jg 0x705142 */ if ((!fZ&&fS==fO)) goto L_00705142;
L_00705108:; BB(0x00705108);
    /* 00705108: lea ebx, [esp + 0xc] */ r_ebx = (u32)(r_esp+0xcu);
    /* 0070510c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0070510d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0070510e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0070510f: call 0x706b60 */ r_esp -= 4; W32(r_esp, 0x705114u); f_00706b60();
    /* 00705114: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 00705118: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00705119: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0070511a: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 0070511c: call 0x70625c */ r_esp -= 4; W32(r_esp, 0x705121u); f_0070625c();
    /* 00705121: mov ebx, dword ptr [0xa96ed4] */ r_ebx = R32((u32)(0xa96ed4u));
    /* 00705127: lea ecx, [esp + 0x24] */ r_ecx = (u32)(r_esp+0x24u);
    /* 0070512b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0070512c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0070512d: push dword ptr [ebx + 0xa4c] */ { u32 v = R32((u32)(r_ebx+0xa4cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00705133: call 0x7067e4 */ r_esp -= 4; W32(r_esp, 0x705138u); f_007067e4();
    /* 00705138: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0070513b: mov ebx, 1 */ r_ebx = 0x1u;
    /* 00705140: jmp 0x70514e */ goto L_0070514e;
L_00705142:; BB(0x00705142);
    /* 00705142: cmp ecx, 0x698 */ {  u32 a = r_ecx; u32 b = 0x698u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00705148: je 0x7052f4 */ if (fZ) goto L_007052f4;
L_0070514e:; BB(0x0070514e);
    /* 0070514e: cmp ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00705151: jle 0x7051f6 */ if ((fZ||fS!=fO)) goto L_007051f6;
L_00705157:; BB(0x00705157);
    /* 00705157: movsx ecx, word ptr [esi + 6] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_esi+0x6u));
    /* 0070515b: mov dword ptr [esp + 0x30], ecx */ W32((u32)(r_esp+0x30u), r_ecx);
    /* 0070515f: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 00705163: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00705164: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00705165: call 0x7068fc */ r_esp -= 4; W32(r_esp, 0x70516au); f_007068fc();
    /* 0070516a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0070516d: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070516f: je 0x7051a7 */ if (fZ) goto L_007051a7;
L_00705171:; BB(0x00705171);
    /* 00705171: mov ecx, dword ptr [0xa96ebc] */ r_ecx = R32((u32)(0xa96ebcu));
    /* 00705177: cmp ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070517a: je 0x7052ec */ if (fZ) goto L_007052ec;
L_00705180:; BB(0x00705180);
    /* 00705180: mov ebx, dword ptr [esp + 0x30] */ r_ebx = R32((u32)(r_esp+0x30u));
    /* 00705184: mov ecx, dword ptr [ecx] */ r_ecx = R32((u32)(r_ecx));
    /* 00705186: movsx eax, word ptr [ecx + ebx*2 - 0xb58] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+r_ebx*2+0xfffff4a8u));
    /* 0070518e: mov ebx, dword ptr [0xa96ed4] */ r_ebx = R32((u32)(0xa96ed4u));
    /* 00705194: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 00705198: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00705199: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0070519a: push dword ptr [ebx + eax*4] */ { u32 v = R32((u32)(r_ebx+r_eax*4)); r_esp -= 4; W32(r_esp, v); }
    /* 0070519d: call 0x7067e4 */ r_esp -= 4; W32(r_esp, 0x7051a2u); f_007067e4();
    /* 007051a2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007051a5: jmp 0x7051ba */ goto L_007051ba;
L_007051a7:; BB(0x007051a7);
    /* 007051a7: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 007051ab: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007051ac: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007051ad: mov ebx, dword ptr [esp + 0x38] */ r_ebx = R32((u32)(r_esp+0x38u));
    /* 007051b1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007051b2: call 0x706b60 */ r_esp -= 4; W32(r_esp, 0x7051b7u); f_00706b60();
    /* 007051b7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_007051ba:; BB(0x007051ba);
    /* 007051ba: cmp ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007051bd: jle 0x7051f6 */ if ((fZ||fS!=fO)) goto L_007051f6;
L_007051bf:; BB(0x007051bf);
    /* 007051bf: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 007051c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007051c4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007051c5: call 0x7068fc */ r_esp -= 4; W32(r_esp, 0x7051cau); f_007068fc();
    /* 007051ca: lea ecx, [esp + 0x14] */ r_ecx = (u32)(r_esp+0x14u);
    /* 007051ce: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007051cf: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007051d0: movsx ebx, word ptr [esi + 8] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_esi+0x8u));
    /* 007051d4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007051d5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007051d6: call 0x7064d8 */ r_esp -= 4; W32(r_esp, 0x7051dbu); f_007064d8();
    /* 007051db: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007051de: cmp ebp, 3 */ {  u32 a = r_ebp; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007051e1: jle 0x7051f6 */ if ((fZ||fS!=fO)) goto L_007051f6;
L_007051e3:; BB(0x007051e3);
    /* 007051e3: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 007051e7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007051e8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007051e9: movsx ecx, word ptr [esi + 0xa] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_esi+0xau));
    /* 007051ed: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007051ee: call 0x706b60 */ r_esp -= 4; W32(r_esp, 0x7051f3u); f_00706b60();
    /* 007051f3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_007051f6:; BB(0x007051f6);
    /* 007051f6: movzx eax, word ptr [edi] */ r_eax = (u32)R16((u32)(r_edi));
    /* 007051f9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007051fa: call 0x815e78 */ r_esp -= 4; W32(r_esp, 0x7051ffu); f_00815e78();
    /* 007051ff: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00705200: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 00705204: mov word ptr [edi], ax */ W16((u32)(r_edi), (u16)r_eax);
L_00705207:; BB(0x00705207);
    /* 00705207: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00705209: mov word ptr [edi + edx*2], cx */ W16((u32)(r_edi+r_edx*2), (u16)r_ecx);
    /* 0070520d: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00705210: mov eax, edx */ r_eax = r_edx;
    /* 00705212: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00705215: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00705216: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00705217: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00705218: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00705219: ret  */ FN_RET(0x00704e01); r_esp += 4; return;
L_0070521a:; BB(0x0070521a);
    /* 0070521a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0070521c: mov word ptr [edi], cx */ W16((u32)(r_edi), (u16)r_ecx);
    /* 0070521f: mov eax, 1 */ r_eax = 0x1u;
    /* 00705224: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00705227: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00705228: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00705229: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0070522a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0070522b: ret  */ FN_RET(0x00704e01); r_esp += 4; return;
L_0070522c:; BB(0x0070522c);
    /* 0070522c: add ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0070522f: jmp 0x705048 */ goto L_00705048;
L_00705234:; BB(0x00705234);
    /* 00705234: mov ebx, dword ptr [0xa96eb8] */ r_ebx = R32((u32)(0xa96eb8u));
    /* 0070523a: jmp 0x705048 */ goto L_00705048;
L_0070523f:; BB(0x0070523f);
    /* 0070523f: mov ebx, dword ptr [0xa96ed4] */ r_ebx = R32((u32)(0xa96ed4u));
    /* 00705245: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 00705249: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0070524a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0070524b: push dword ptr [ebx + 0x1a8c] */ { u32 v = R32((u32)(r_ebx+0x1a8cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00705251: call 0x7067e4 */ r_esp -= 4; W32(r_esp, 0x705256u); f_007067e4();
    /* 00705256: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00705259: jmp 0x705017 */ goto L_00705017;
L_0070525e:; BB(0x0070525e);
    /* 0070525e: mov edi, dword ptr [esp + 0x2c] */ r_edi = R32((u32)(r_esp+0x2cu));
    /* 00705262: jmp 0x705025 */ goto L_00705025;
L_00705267:; BB(0x00705267);
    /* 00705267: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00705269: mov dword ptr [esp + 0x38], ecx */ W32((u32)(r_esp+0x38u), r_ecx);
    /* 0070526d: jmp 0x704f5a */ goto L_00704f5a;
L_00705272:; BB(0x00705272);
    /* 00705272: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00705274: mov dword ptr [esp + 0x38], ecx */ W32((u32)(r_esp+0x38u), r_ecx);
    /* 00705278: jmp 0x704f5a */ goto L_00704f5a;
L_0070527d:; BB(0x0070527d);
    /* 0070527d: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 00705281: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00705282: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00705283: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 00705285: call 0x70625c */ r_esp -= 4; W32(r_esp, 0x70528au); f_0070625c();
    /* 0070528a: mov edx, dword ptr [0xa96ed4] */ r_edx = R32((u32)(0xa96ed4u));
    /* 00705290: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 00705294: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00705295: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00705296: push dword ptr [edx + 0xa58] */ { u32 v = R32((u32)(r_edx+0xa58u)); r_esp -= 4; W32(r_esp, v); }
    /* 0070529c: call 0x7067e4 */ r_esp -= 4; W32(r_esp, 0x7052a1u); f_007067e4();
    /* 007052a1: mov eax, 2 */ r_eax = 0x2u;
    /* 007052a6: mov dword ptr [esp + 0x4c], eax */ W32((u32)(r_esp+0x4cu), r_eax);
    /* 007052aa: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007052ab: call 0x706b8c */ r_esp -= 4; W32(r_esp, 0x7052b0u); f_00706b8c();
    /* 007052b0: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007052b3: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007052b6: je 0x7052c6 */ if (fZ) goto L_007052c6;
L_007052b8:; BB(0x007052b8);
    /* 007052b8: mov ecx, 1 */ r_ecx = 0x1u;
    /* 007052bd: mov dword ptr [esp + 0x38], ecx */ W32((u32)(r_esp+0x38u), r_ecx);
    /* 007052c1: jmp 0x704f5a */ goto L_00704f5a;
L_007052c6:; BB(0x007052c6);
    /* 007052c6: mov ecx, 3 */ r_ecx = 0x3u;
    /* 007052cb: mov dword ptr [esp + 0x38], ecx */ W32((u32)(r_esp+0x38u), r_ecx);
    /* 007052cf: jmp 0x704f5a */ goto L_00704f5a;
L_007052d4:; BB(0x007052d4);
    /* 007052d4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007052d6: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 007052da: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007052db: call 0x706b8c */ r_esp -= 4; W32(r_esp, 0x7052e0u); f_00706b8c();
    /* 007052e0: mov dword ptr [esp + 0x3c], eax */ W32((u32)(r_esp+0x3cu), r_eax);
    /* 007052e4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007052e7: jmp 0x704f5a */ goto L_00704f5a;
L_007052ec:; BB(0x007052ec);
    /* 007052ec: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007052ef: jmp 0x705180 */ goto L_00705180;
L_007052f4:; BB(0x007052f4);
    /* 007052f4: mov ebx, dword ptr [0xa96ed4] */ r_ebx = R32((u32)(0xa96ed4u));
    /* 007052fa: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 007052fe: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007052ff: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00705300: push dword ptr [ebx + 0xa4c] */ { u32 v = R32((u32)(r_ebx+0xa4cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00705306: call 0x7067e4 */ r_esp -= 4; W32(r_esp, 0x70530bu); f_007067e4();
    /* 0070530b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0070530e: mov ebx, 1 */ r_ebx = 0x1u;
    /* 00705313: jmp 0x70514e */ goto L_0070514e;
L_00705318:; BB(0x00705318);
    /* 00705318: lea ebx, [esp + 0xc] */ r_ebx = (u32)(r_esp+0xcu);
    /* 0070531c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0070531d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0070531e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0070531f: call 0x706b60 */ r_esp -= 4; W32(r_esp, 0x705324u); f_00706b60();
    /* 00705324: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 00705328: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00705329: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0070532a: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 0070532c: call 0x70625c */ r_esp -= 4; W32(r_esp, 0x705331u); f_0070625c();
    /* 00705331: mov ebx, dword ptr [0xa96ed4] */ r_ebx = R32((u32)(0xa96ed4u));
    /* 00705337: lea ecx, [esp + 0x24] */ r_ecx = (u32)(r_esp+0x24u);
    /* 0070533b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0070533c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0070533d: push dword ptr [ebx + 0xa58] */ { u32 v = R32((u32)(r_ebx+0xa58u)); r_esp -= 4; W32(r_esp, v); }
    /* 00705343: call 0x7067e4 */ r_esp -= 4; W32(r_esp, 0x705348u); f_007067e4();
    /* 00705348: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0070534b: mov ebx, 2 */ r_ebx = 0x2u;
    /* 00705350: jmp 0x70514e */ goto L_0070514e;
L_00705355:; BB(0x00705355);
    /* 00705355: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 00705359: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0070535a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0070535b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0070535c: call 0x706b60 */ r_esp -= 4; W32(r_esp, 0x705361u); f_00706b60();
    /* 00705361: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00705364: jmp 0x70514e */ goto L_0070514e;
L_00705369:; BB(0x00705369);
    /* 00705369: cmp ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0070536c: jle 0x705390 */ if ((fZ||fS!=fO)) goto L_00705390;
L_0070536e:; BB(0x0070536e);
    /* 0070536e: lea ebp, [esp + 0x10] */ r_ebp = (u32)(r_esp+0x10u);
    /* 00705372: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00705373: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00705374: call 0x706360 */ r_esp -= 4; W32(r_esp, 0x705379u); f_00706360();
    /* 00705379: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0070537c: lea eax, [esp + 0x10] */ r_eax = (u32)(r_esp+0x10u);
    /* 00705380: mov edx, edi */ r_edx = r_edi;
    /* 00705382: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00705384: call 0x704e01 */ r_esp -= 4; W32(r_esp, 0x705389u); f_00704e01();
    /* 00705389: mov edx, eax */ r_edx = r_eax;
    /* 0070538b: jmp 0x705207 */ goto L_00705207;
L_00705390:; BB(0x00705390);
    /* 00705390: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 00705394: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00705395: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00705396: movsx ecx, word ptr [esi + 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_esi+0x4u));
    /* 0070539a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0070539b: call 0x706b60 */ r_esp -= 4; W32(r_esp, 0x7053a0u); f_00706b60();
    /* 007053a0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007053a3: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 007053a7: jmp 0x705207 */ goto L_00705207;
L_007053ac:; BB(0x007053ac);
    /* 007053ac: mov ecx, 2 */ r_ecx = 0x2u;
    /* 007053b1: cmp ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007053b4: mov ebx, 0 */ r_ebx = 0x0u;
    /* 007053b9: jle 0x7053bd */ if ((fZ||fS!=fO)) goto L_007053bd;
L_007053bb:; BB(0x007053bb);
    /* 007053bb: mov ebp, ecx */ r_ebp = r_ecx;
L_007053bd:; BB(0x007053bd);
    /* 007053bd: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 007053bf: jle 0x7053f3 */ if ((fZ||fS!=fO)) goto L_007053f3;
L_007053c1:; BB(0x007053c1);
    /* 007053c1: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 007053c5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007053c6: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007053c7: movsx eax, word ptr [esi + ebx*2 + 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+r_ebx*2+0x4u));
    /* 007053cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007053cd: call 0x706b60 */ r_esp -= 4; W32(r_esp, 0x7053d2u); f_00706b60();
    /* 007053d2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007053d5: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007053d8: cmp ebx, ebp */ {  u32 a = r_ebx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007053da: jge 0x7053f3 */ if ((fS==fO)) goto L_007053f3;
L_007053dc:; BB(0x007053dc);
    /* 007053dc: cmp ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007053df: jne 0x7053c1 */ if (!fZ) goto L_007053c1;
L_007053e1:; BB(0x007053e1);
    /* 007053e1: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 007053e5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007053e6: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007053e7: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 007053e9: call 0x70625c */ r_esp -= 4; W32(r_esp, 0x7053eeu); f_0070625c();
    /* 007053ee: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007053f1: jmp 0x7053c1 */ goto L_007053c1;
L_007053f3:; BB(0x007053f3);
    /* 007053f3: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 007053f7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007053f8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007053f9: push 0x3f */ { u32 v = 0x3fu; r_esp -= 4; W32(r_esp, v); }
    /* 007053fb: call 0x70625c */ r_esp -= 4; W32(r_esp, 0x705400u); f_0070625c();
    /* 00705400: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00705403: movsx ecx, word ptr [esi] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_esi));
    /* 00705406: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00705409: jg 0x705414 */ if ((!fZ&&fS==fO)) goto L_00705414;
L_0070540b:; BB(0x0070540b);
    /* 0070540b: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0070540f: jmp 0x705207 */ goto L_00705207;
L_00705414:; BB(0x00705414);
    /* 00705414: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 00705418: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00705419: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0070541a: call 0x7069b8 */ r_esp -= 4; W32(r_esp, 0x70541fu); f_007069b8();
    /* 0070541f: lea eax, [esp + 0x14] */ r_eax = (u32)(r_esp+0x14u);
    /* 00705423: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00705424: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00705425: movsx ecx, word ptr [esi + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_esi+0x8u));
    /* 00705429: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0070542a: call 0x706b60 */ r_esp -= 4; W32(r_esp, 0x70542fu); f_00706b60();
    /* 0070542f: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00705432: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 00705436: jmp 0x705207 */ goto L_00705207;
L_0070543b:; BB(0x0070543b);
    /* 0070543b: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 0070543f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00705440: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00705441: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00705442: call 0x706490 */ r_esp -= 4; W32(r_esp, 0x705447u); f_00706490();
    /* 00705447: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0070544a: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0070544e: jmp 0x705207 */ goto L_00705207;
}

