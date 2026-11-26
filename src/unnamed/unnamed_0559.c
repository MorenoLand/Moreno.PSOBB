#include "protos.h"

void f_005592a0(void) /* sub_5592A0 */
{
    FN_ENTER(0x005592a0);
    /* 005592a0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005592a1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005592a3: mov eax, dword ptr [ebx + 0x440] */ r_eax = R32((u32)(r_ebx+0x440u));
    /* 005592a9: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005592ab: je 0x5592ed */ if (fZ) goto L_005592ed;
L_005592ad:; BB(0x005592ad);
    /* 005592ad: mov ecx, dword ptr [0xa73b90] */ r_ecx = R32((u32)(0xa73b90u));
    /* 005592b3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005592b5: mov eax, 1 */ r_eax = 0x1u;
    /* 005592ba: mov word ptr [ebx + 0x444], ax */ W16((u32)(r_ebx+0x444u), (u16)r_eax);
    /* 005592c1: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x5592c6u); f_005b8610();
    /* 005592c6: mov dword ptr [ebx + 0x34], eax */ W32((u32)(r_ebx+0x34u), r_eax);
    /* 005592c9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005592cb: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
    /* 005592d2: mov edx, 1 */ r_edx = 0x1u;
    /* 005592d7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005592d9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005592da: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005592db: call 0x7b52c4 */ r_esp -= 4; W32(r_esp, 0x5592e0u); f_007b52c4();
    /* 005592e0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005592e2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005592e4: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005592e6: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x5592ebu); f_007b52ec();
    /* 005592eb: jmp 0x55932a */ goto L_0055932a;
L_005592ed:; BB(0x005592ed);
    /* 005592ed: mov ecx, dword ptr [0xa73b90] */ r_ecx = R32((u32)(0xa73b90u));
    /* 005592f3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005592f5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005592f7: mov word ptr [ebx + 0x444], ax */ W16((u32)(r_ebx+0x444u), (u16)r_eax);
    /* 005592fe: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x559303u); f_005b8610();
    /* 00559303: mov dword ptr [ebx + 0x34], eax */ W32((u32)(r_ebx+0x34u), r_eax);
    /* 00559306: mov eax, 1 */ r_eax = 0x1u;
    /* 0055930b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055930c: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
    /* 00559313: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00559315: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00559317: call 0x7b52c4 */ r_esp -= 4; W32(r_esp, 0x55931cu); f_007b52c4();
    /* 0055931c: mov eax, 1 */ r_eax = 0x1u;
    /* 00559321: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00559322: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00559323: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00559325: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x55932au); f_007b52ec();
L_0055932a:; BB(0x0055932a);
    /* 0055932a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0055932c: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x559331u); f_007aa094();
    /* 00559331: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00559332: ret  */ FN_RET(0x005592a0); r_esp += 4; return;
}

void f_00559334(void) /* sub_559334 */
{
    FN_ENTER(0x00559334);
    /* 00559334: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00559335: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00559336: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00559337: sub esp, 0x15c */ {  u32 a = r_esp; u32 b = 0x15cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0055933d: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0055933f: mov eax, dword ptr [esp + 0x16c] */ r_eax = R32((u32)(r_esp+0x16cu));
    /* 00559346: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00559349: je 0x5595a9 */ if (fZ) goto L_005595a9;
L_0055934f:; BB(0x0055934f);
    /* 0055934f: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00559352: je 0x5594c4 */ if (fZ) goto L_005594c4;
L_00559358:; BB(0x00559358);
    /* 00559358: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055935a: jne 0x5594d8 */ if (!fZ) goto L_005594d8;
L_00559360:; BB(0x00559360);
    /* 00559360: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00559362: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x559367u); f_007aa094();
    /* 00559367: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00559369: call 0x5595ec */ r_esp -= 4; W32(r_esp, 0x55936eu); f_005595ec();
    /* 0055936e: mov eax, dword ptr [ebp + 0x4ec] */ r_eax = R32((u32)(r_ebp+0x4ecu));
    /* 00559374: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00559376: jne 0x559486 */ if (!fZ) goto L_00559486;
L_0055937c:; BB(0x0055937c);
    /* 0055937c: mov eax, dword ptr [ebp + 0x440] */ r_eax = R32((u32)(r_ebp+0x440u));
    /* 00559382: test eax, 0x84 */ {  u32 a = r_eax; u32 b = 0x84u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00559387: jne 0x559446 */ if (!fZ) goto L_00559446;
L_0055938d:; BB(0x0055938d);
    /* 0055938d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055938f: call 0x55ace0 */ r_esp -= 4; W32(r_esp, 0x559394u); f_0055ace0();
    /* 00559394: lea edi, [esp + 0x1c] */ r_edi = (u32)(r_esp+0x1cu);
    /* 00559398: mov esi, 0x925160 */ r_esi = 0x925160u;
    /* 0055939d: mov ecx, 0x140 */ r_ecx = 0x140u;
    /* 005593a2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005593a3: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 005593a6: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 005593a8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005593a9: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 005593ac: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 005593ae: mov esi, dword ptr [ebp + 0x440] */ r_esi = R32((u32)(r_ebp+0x440u));
    /* 005593b4: test esi, 0x400 */ {  u32 a = r_esi; u32 b = 0x400u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005593ba: je 0x5593d4 */ if (fZ) goto L_005593d4;
L_005593bc:; BB(0x005593bc);
    /* 005593bc: mov eax, dword ptr [ebp + 0x450] */ r_eax = R32((u32)(r_ebp+0x450u));
    /* 005593c2: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005593c5: mov dword ptr [ebp + 0x450], eax */ W32((u32)(r_ebp+0x450u), r_eax);
    /* 005593cb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005593cd: jg 0x559420 */ if ((!fZ&&fS==fO)) goto L_00559420;
L_005593cf:; BB(0x005593cf);
    /* 005593cf: jmp 0x5594e4 */ goto L_005594e4;
L_005593d4:; BB(0x005593d4);
    /* 005593d4: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_005593d6:; BB(0x005593d6);
    /* 005593d6: movzx eax, word ptr [ebp + esi*2 + 0x4e4] */ r_eax = (u32)R16((u32)(r_ebp+r_esi*2+0x4e4u));
    /* 005593de: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005593df: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x5593e4u); f_007b4d18();
    /* 005593e4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005593e5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005593e7: je 0x5593f8 */ if (fZ) goto L_005593f8;
L_005593e9:; BB(0x005593e9);
    /* 005593e9: mov ecx, eax */ r_ecx = r_eax;
    /* 005593eb: call 0x55c0b8 */ r_esp -= 4; W32(r_esp, 0x5593f0u); f_0055c0b8();
    /* 005593f0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005593f2: je 0x55959e */ if (fZ) goto L_0055959e;
L_005593f8:; BB(0x005593f8);
    /* 005593f8: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005593fb: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005593fe: jl 0x5593d6 */ if ((fS!=fO)) goto L_005593d6;
L_00559400:; BB(0x00559400);
    /* 00559400: mov eax, dword ptr [0xa73bcc] */ r_eax = R32((u32)(0xa73bccu));
    /* 00559405: mov esi, dword ptr [ebp + 0x440] */ r_esi = R32((u32)(r_ebp+0x440u));
    /* 0055940b: or esi, 0x400 */ {  u32 a = r_esi; u32 b = 0x400u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00559411: mov dword ptr [ebp + 0x440], esi */ W32((u32)(r_ebp+0x440u), r_esi);
    /* 00559417: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 0055941a: mov dword ptr [ebp + 0x450], edx */ W32((u32)(r_ebp+0x450u), r_edx);
L_00559420:; BB(0x00559420);
    /* 00559420: test esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00559426: je 0x5594b7 */ if (fZ) goto L_005594b7;
L_0055942c:; BB(0x0055942c);
    /* 0055942c: mov dword ptr [ebp + 0x4ec], 1 */ W32((u32)(r_ebp+0x4ecu), 0x1u);
    /* 00559436: mov eax, dword ptr [0xa73bcc] */ r_eax = R32((u32)(0xa73bccu));
    /* 0055943b: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 0055943e: mov dword ptr [ebp + 0x4f0], edx */ W32((u32)(r_ebp+0x4f0u), r_edx);
    /* 00559444: jmp 0x5594b7 */ goto L_005594b7;
L_00559446:; BB(0x00559446);
    /* 00559446: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_00559448:; BB(0x00559448);
    /* 00559448: movzx eax, word ptr [ebp + esi*2 + 0x4e4] */ r_eax = (u32)R16((u32)(r_ebp+r_esi*2+0x4e4u));
    /* 00559450: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00559451: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x559456u); f_007b4d18();
    /* 00559456: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00559457: mov ecx, eax */ r_ecx = r_eax;
    /* 00559459: call 0x55c0b8 */ r_esp -= 4; W32(r_esp, 0x55945eu); f_0055c0b8();
    /* 0055945e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00559460: je 0x55938d */ if (fZ) goto L_0055938d;
L_00559466:; BB(0x00559466);
    /* 00559466: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00559469: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055946c: jl 0x559448 */ if ((fS!=fO)) goto L_00559448;
L_0055946e:; BB(0x0055946e);
    /* 0055946e: mov eax, dword ptr [ebp + 0x45c] */ r_eax = R32((u32)(r_ebp+0x45cu));
    /* 00559474: mov dword ptr [ebp + 0x4ec], 2 */ W32((u32)(r_ebp+0x4ecu), 0x2u);
    /* 0055947e: mov dword ptr [ebp + 0x44c], eax */ W32((u32)(r_ebp+0x44cu), r_eax);
    /* 00559484: jmp 0x5594b7 */ goto L_005594b7;
L_00559486:; BB(0x00559486);
    /* 00559486: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00559489: jne 0x5594b7 */ if (!fZ) goto L_005594b7;
L_0055948b:; BB(0x0055948b);
    /* 0055948b: mov eax, dword ptr [ebp + 0x4f0] */ r_eax = R32((u32)(r_ebp+0x4f0u));
    /* 00559491: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00559494: mov dword ptr [ebp + 0x4f0], eax */ W32((u32)(r_ebp+0x4f0u), r_eax);
    /* 0055949a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0055949c: jg 0x5594b7 */ if ((!fZ&&fS==fO)) goto L_005594b7;
L_0055949e:; BB(0x0055949e);
    /* 0055949e: mov eax, dword ptr [ebp + 0x440] */ r_eax = R32((u32)(r_ebp+0x440u));
    /* 005594a4: mov dword ptr [ebp + 0x4ec], 0 */ W32((u32)(r_ebp+0x4ecu), 0x0u);
    /* 005594ae: and eax, 0xffffffef */ {  u32 a = r_eax; u32 b = 0xffffffefu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005594b1: mov dword ptr [ebp + 0x440], eax */ W32((u32)(r_ebp+0x440u), r_eax);
L_005594b7:; BB(0x005594b7);
    /* 005594b7: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 005594ba: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005594bc: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x5594c2u); call_ind(t); }
    /* 005594c2: jmp 0x5594d8 */ goto L_005594d8;
L_005594c4:; BB(0x005594c4);
    /* 005594c4: mov eax, dword ptr [ebp + 0x4ec] */ r_eax = R32((u32)(r_ebp+0x4ecu));
    /* 005594ca: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005594cd: jne 0x5594d8 */ if (!fZ) goto L_005594d8;
L_005594cf:; BB(0x005594cf);
    /* 005594cf: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005594d1: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005594d3: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5594d8u); f_0051f62c();
L_005594d8:; BB(0x005594d8);
    /* 005594d8: add esp, 0x15c */ {  u32 a = r_esp; u32 b = 0x15cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005594de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005594df: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005594e0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005594e1: ret 4 */ FN_RET(0x00559334); r_esp += 8; return;
L_005594e4:; BB(0x005594e4);
    /* 005594e4: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005594e6: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x5594ebu); f_007751b0();
    /* 005594eb: fld dword ptr [0x925408] */ FPUSH(R_F32((u32)(0x925408u)));
    /* 005594f1: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 005594f3: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 005594f6: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 005594fa: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005594ff: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00559503: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00559507: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 0055950b: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0055950e: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 00559512: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 00559517: imul esi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_esi; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00559519: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 0055951d: mov edi, esi */ r_edi = r_esi;
    /* 0055951f: sar edx, 3 */ { u32 c = (3u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 00559522: sar edi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 00559525: sub edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00559527: lea eax, [edx + edx*4] */ r_eax = (u32)(r_edx+r_edx*4);
    /* 0055952a: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0055952c: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0055952e: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00559530: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00559532: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00559534: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00559536: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00559538: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_0055953a:; BB(0x0055953a);
    /* 0055953a: mov eax, dword ptr [esp + esi + 0x1c] */ r_eax = R32((u32)(r_esp+r_esi+0x1cu));
    /* 0055953e: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00559541: je 0x559569 */ if (fZ) goto L_00559569;
L_00559543:; BB(0x00559543);
    /* 00559543: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00559546: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00559549: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055954c: jl 0x55953a */ if ((fS!=fO)) goto L_0055953a;
L_0055954e:; BB(0x0055954e);
    /* 0055954e: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 00559552: mov esi, dword ptr [ebp + 0x440] */ r_esi = R32((u32)(r_ebp+0x440u));
    /* 00559558: and esi, 0xfffffbff */ {  u32 a = r_esi; u32 b = 0xfffffbffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 0055955e: mov dword ptr [ebp + 0x440], esi */ W32((u32)(r_ebp+0x440u), r_esi);
    /* 00559564: jmp 0x559420 */ goto L_00559420;
L_00559569:; BB(0x00559569);
    /* 00559569: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0055956b: jl 0x559543 */ if ((fS!=fO)) goto L_00559543;
L_0055956d:; BB(0x0055956d);
    /* 0055956d: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00559570: jge 0x559543 */ if ((fS==fO)) goto L_00559543;
L_00559572:; BB(0x00559572);
    /* 00559572: movzx eax, word ptr [ebp + edi*2 + 0x4e4] */ r_eax = (u32)R16((u32)(r_ebp+r_edi*2+0x4e4u));
    /* 0055957a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055957b: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x559580u); f_007b4d18();
    /* 00559580: mov ebx, eax */ r_ebx = r_eax;
    /* 00559582: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00559585: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00559587: je 0x559543 */ if (fZ) goto L_00559543;
L_00559589:; BB(0x00559589);
    /* 00559589: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0055958b: call 0x55c0b8 */ r_esp -= 4; W32(r_esp, 0x559590u); f_0055c0b8();
    /* 00559590: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00559593: jne 0x559543 */ if (!fZ) goto L_00559543;
L_00559595:; BB(0x00559595);
    /* 00559595: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00559597: call 0x55c094 */ r_esp -= 4; W32(r_esp, 0x55959cu); f_0055c094();
    /* 0055959c: jmp 0x559543 */ goto L_00559543;
L_0055959e:; BB(0x0055959e);
    /* 0055959e: mov esi, dword ptr [ebp + 0x440] */ r_esi = R32((u32)(r_ebp+0x440u));
    /* 005595a4: jmp 0x559420 */ goto L_00559420;
L_005595a9:; BB(0x005595a9);
    /* 005595a9: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005595ab: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005595ad: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x5595b2u); f_0051f664();
    /* 005595b2: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 005595b5: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005595b7: call dword ptr [eax + 0x188] */ { u32 t = R32((u32)(r_eax+0x188u)); r_esp -= 4; W32(r_esp, 0x5595bdu); call_ind(t); }
    /* 005595bd: mov eax, dword ptr [ebp + 0x440] */ r_eax = R32((u32)(r_ebp+0x440u));
    /* 005595c3: or eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005595c8: and eax, 0xfffffdb8 */ {  u32 a = r_eax; u32 b = 0xfffffdb8u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005595cd: mov dword ptr [ebp + 0x440], eax */ W32((u32)(r_ebp+0x440u), r_eax);
    /* 005595d3: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005595d5: call 0x5592a0 */ r_esp -= 4; W32(r_esp, 0x5595dau); f_005592a0();
    /* 005595da: mov dword ptr [ebp + 0x4ec], 0 */ W32((u32)(r_ebp+0x4ecu), 0x0u);
    /* 005595e4: jmp 0x5594d8 */ goto L_005594d8;
}

void f_005595ec(void) /* sub_5595EC */
{
    FN_ENTER(0x005595ec);
    /* 005595ec: mov eax, dword ptr [ecx + 0x44c] */ r_eax = R32((u32)(r_ecx+0x44cu));
    /* 005595f2: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005595f5: mov dword ptr [ecx + 0x44c], eax */ W32((u32)(r_ecx+0x44cu), r_eax);
    /* 005595fb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005595fd: jg 0x55960e */ if ((!fZ&&fS==fO)) goto L_0055960e;
L_005595ff:; BB(0x005595ff);
    /* 005595ff: mov eax, dword ptr [ecx + 0x440] */ r_eax = R32((u32)(r_ecx+0x440u));
    /* 00559605: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00559608: mov dword ptr [ecx + 0x440], eax */ W32((u32)(r_ecx+0x440u), r_eax);
L_0055960e:; BB(0x0055960e);
    /* 0055960e: ret  */ FN_RET(0x005595ec); r_esp += 4; return;
}

void f_00559610(void) /* sub_559610 */
{
    FN_ENTER(0x00559610);
    /* 00559610: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00559611: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00559614: mov edi, ecx */ r_edi = r_ecx;
    /* 00559616: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0055961a: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055961d: je 0x559831 */ if (fZ) goto L_00559831;
L_00559623:; BB(0x00559623);
    /* 00559623: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00559626: je 0x559783 */ if (fZ) goto L_00559783;
L_0055962c:; BB(0x0055962c);
    /* 0055962c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055962e: jne 0x55979c */ if (!fZ) goto L_0055979c;
L_00559634:; BB(0x00559634);
    /* 00559634: mov ecx, edi */ r_ecx = r_edi;
    /* 00559636: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x55963bu); f_007aa094();
    /* 0055963b: mov eax, dword ptr [edi + 0x4ec] */ r_eax = R32((u32)(r_edi+0x4ecu));
    /* 00559641: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00559643: je 0x5596a5 */ if (fZ) goto L_005596a5;
L_00559645:; BB(0x00559645);
    /* 00559645: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00559648: jne 0x559777 */ if (!fZ) goto L_00559777;
L_0055964e:; BB(0x0055964e);
    /* 0055964e: mov eax, dword ptr [edi + 0x4f0] */ r_eax = R32((u32)(r_edi+0x4f0u));
    /* 00559654: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00559657: mov dword ptr [edi + 0x4f0], eax */ W32((u32)(r_edi+0x4f0u), r_eax);
    /* 0055965d: cmp eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00559660: je 0x5597b5 */ if (fZ) goto L_005597b5;
L_00559666:; BB(0x00559666);
    /* 00559666: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 00559669: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0055966b: mov ebx, eax */ r_ebx = r_eax;
L_0055966d:; BB(0x0055966d);
    /* 0055966d: movzx edx, word ptr [edi + ebx*2 + 0x4e4] */ r_edx = (u32)R16((u32)(r_edi+r_ebx*2+0x4e4u));
    /* 00559675: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00559676: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x55967bu); f_007b4d18();
    /* 0055967b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0055967c: mov ecx, eax */ r_ecx = r_eax;
    /* 0055967e: call 0x55c0e0 */ r_esp -= 4; W32(r_esp, 0x559683u); f_0055c0e0();
    /* 00559683: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00559685: je 0x5597a3 */ if (fZ) goto L_005597a3;
L_0055968b:; BB(0x0055968b);
    /* 0055968b: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0055968e: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00559691: jl 0x55966d */ if ((fS!=fO)) goto L_0055966d;
L_00559693:; BB(0x00559693);
    /* 00559693: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
L_00559696:; BB(0x00559696);
    /* 00559696: mov dword ptr [edi + 0x4ec], 3 */ W32((u32)(r_edi+0x4ecu), 0x3u);
    /* 005596a0: jmp 0x559777 */ goto L_00559777;
L_005596a5:; BB(0x005596a5);
    /* 005596a5: add dword ptr [edi + 0x4f0], -1 */ { u32 ad = (u32)(r_edi+0x4f0u);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 005596ac: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 005596af: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005596b1: mov ebx, eax */ r_ebx = r_eax;
L_005596b3:; BB(0x005596b3);
    /* 005596b3: movzx edx, word ptr [edi + ebx*2 + 0x4e4] */ r_edx = (u32)R16((u32)(r_edi+r_ebx*2+0x4e4u));
    /* 005596bb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005596bc: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x5596c1u); f_007b4d18();
    /* 005596c1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005596c2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005596c4: je 0x5596d5 */ if (fZ) goto L_005596d5;
L_005596c6:; BB(0x005596c6);
    /* 005596c6: mov ecx, eax */ r_ecx = r_eax;
    /* 005596c8: call 0x55c110 */ r_esp -= 4; W32(r_esp, 0x5596cdu); f_0055c110();
    /* 005596cd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005596cf: je 0x5597cf */ if (fZ) goto L_005597cf;
L_005596d5:; BB(0x005596d5);
    /* 005596d5: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005596d8: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005596db: jl 0x5596b3 */ if ((fS!=fO)) goto L_005596b3;
L_005596dd:; BB(0x005596dd);
    /* 005596dd: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 005596e0: mov ecx, edi */ r_ecx = r_edi;
    /* 005596e2: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x5596e7u); f_007751b0();
    /* 005596e7: fcomp qword ptr [0x925370] */ fx_compare(ST(0), R_F64((u32)(0x925370u))); FPOP();
    /* 005596ed: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005596ef: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005596f0: jae 0x5596f9 */ if (!fC) goto L_005596f9;
L_005596f2:; BB(0x005596f2);
    /* 005596f2: mov ecx, 1 */ r_ecx = 0x1u;
    /* 005596f7: jmp 0x5596fb */ goto L_005596fb;
L_005596f9:; BB(0x005596f9);
    /* 005596f9: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_005596fb:; BB(0x005596fb);
    /* 005596fb: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 005596fe: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 00559702: mov esi, ecx */ r_esi = r_ecx;
    /* 00559704: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00559706: lea eax, [edi + 0x478] */ r_eax = (u32)(r_edi+0x478u);
    /* 0055970c: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 00559710: mov ebx, eax */ r_ebx = r_eax;
    /* 00559712: mov ebp, edx */ r_ebp = r_edx;
L_00559714:; BB(0x00559714);
    /* 00559714: movzx eax, word ptr [edi + ebp*2 + 0x4e4] */ r_eax = (u32)R16((u32)(r_edi+r_ebp*2+0x4e4u));
    /* 0055971c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055971d: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x559722u); f_007b4d18();
    /* 00559722: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00559723: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00559725: je 0x559737 */ if (fZ) goto L_00559737;
L_00559727:; BB(0x00559727);
    /* 00559727: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00559728: push dword ptr [edi + ebp*4 + 0x468] */ { u32 v = R32((u32)(r_edi+r_ebp*4+0x468u)); r_esp -= 4; W32(r_esp, v); }
    /* 0055972f: mov ecx, eax */ r_ecx = r_eax;
    /* 00559731: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00559732: call 0x55c014 */ r_esp -= 4; W32(r_esp, 0x559737u); f_0055c014();
L_00559737:; BB(0x00559737);
    /* 00559737: add ebx, 0xc */ {  u32 a = r_ebx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0055973a: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0055973d: cmp ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00559740: jl 0x559714 */ if ((fS!=fO)) goto L_00559714;
L_00559742:; BB(0x00559742);
    /* 00559742: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 00559745: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 00559749: mov ebp, dword ptr [esp + 4] */ r_ebp = R32((u32)(r_esp+0x4u));
    /* 0055974d: mov eax, dword ptr [edi + 0x440] */ r_eax = R32((u32)(r_edi+0x440u));
    /* 00559753: and eax, 0xfffffffd */ {  u32 a = r_eax; u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00559756: mov dword ptr [edi + 0x440], eax */ W32((u32)(r_edi+0x440u), r_eax);
    /* 0055975c: mov ecx, edi */ r_ecx = r_edi;
    /* 0055975e: call 0x5592a0 */ r_esp -= 4; W32(r_esp, 0x559763u); f_005592a0();
    /* 00559763: mov dword ptr [edi + 0x4ec], 1 */ W32((u32)(r_edi+0x4ecu), 0x1u);
    /* 0055976d: mov dword ptr [edi + 0x4f0], 0x3c */ W32((u32)(r_edi+0x4f0u), 0x3cu);
L_00559777:; BB(0x00559777);
    /* 00559777: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00559779: mov ecx, edi */ r_ecx = r_edi;
    /* 0055977b: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x559781u); call_ind(t); }
    /* 00559781: jmp 0x55979c */ goto L_0055979c;
L_00559783:; BB(0x00559783);
    /* 00559783: mov eax, dword ptr [edi + 0x4ec] */ r_eax = R32((u32)(r_edi+0x4ecu));
    /* 00559789: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055978c: je 0x5597e8 */ if (fZ) goto L_005597e8;
L_0055978e:; BB(0x0055978e);
    /* 0055978e: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00559791: jne 0x55979c */ if (!fZ) goto L_0055979c;
L_00559793:; BB(0x00559793);
    /* 00559793: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00559795: mov ecx, edi */ r_ecx = r_edi;
    /* 00559797: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x55979cu); f_0051f62c();
L_0055979c:; BB(0x0055979c);
    /* 0055979c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0055979f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005597a0: ret 4 */ FN_RET(0x00559610); r_esp += 8; return;
L_005597a3:; BB(0x005597a3);
    /* 005597a3: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 005597a6: mov eax, dword ptr [edi + 0x4f0] */ r_eax = R32((u32)(r_edi+0x4f0u));
    /* 005597ac: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005597ae: jg 0x559777 */ if ((!fZ&&fS==fO)) goto L_00559777;
L_005597b0:; BB(0x005597b0);
    /* 005597b0: jmp 0x559696 */ goto L_00559696;
L_005597b5:; BB(0x005597b5);
    /* 005597b5: lea edx, [edi + 0x38] */ r_edx = (u32)(r_edi+0x38u);
    /* 005597b8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005597ba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005597bb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005597bc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005597bd: push 0x2d0 */ { u32 v = 0x2d0u; r_esp -= 4; W32(r_esp, v); }
    /* 005597c2: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5597c7u); f_00814298();
    /* 005597c7: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005597ca: jmp 0x559666 */ goto L_00559666;
L_005597cf:; BB(0x005597cf);
    /* 005597cf: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 005597d2: mov eax, dword ptr [edi + 0x4f0] */ r_eax = R32((u32)(r_edi+0x4f0u));
    /* 005597d8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005597da: jg 0x559777 */ if ((!fZ&&fS==fO)) goto L_00559777;
L_005597dc:; BB(0x005597dc);
    /* 005597dc: mov dword ptr [edi + 0x4ec], 2 */ W32((u32)(r_edi+0x4ecu), 0x2u);
    /* 005597e6: jmp 0x559777 */ goto L_00559777;
L_005597e8:; BB(0x005597e8);
    /* 005597e8: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 005597eb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005597ed: mov ebx, eax */ r_ebx = r_eax;
L_005597ef:; BB(0x005597ef);
    /* 005597ef: movzx edx, word ptr [edi + ebx*2 + 0x4e4] */ r_edx = (u32)R16((u32)(r_edi+r_ebx*2+0x4e4u));
    /* 005597f7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005597f8: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x5597fdu); f_007b4d18();
    /* 005597fd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005597fe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00559800: je 0x559809 */ if (fZ) goto L_00559809;
L_00559802:; BB(0x00559802);
    /* 00559802: mov ecx, eax */ r_ecx = r_eax;
    /* 00559804: call 0x55c064 */ r_esp -= 4; W32(r_esp, 0x559809u); f_0055c064();
L_00559809:; BB(0x00559809);
    /* 00559809: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0055980c: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055980f: jl 0x5597ef */ if ((fS!=fO)) goto L_005597ef;
L_00559811:; BB(0x00559811);
    /* 00559811: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 00559814: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00559816: mov eax, dword ptr [edi + 0x440] */ r_eax = R32((u32)(r_edi+0x440u));
    /* 0055981c: and eax, 0xffffffef */ {  u32 a = r_eax; u32 b = 0xffffffefu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0055981f: mov dword ptr [edi + 0x440], eax */ W32((u32)(r_edi+0x440u), r_eax);
    /* 00559825: mov ecx, edi */ r_ecx = r_edi;
    /* 00559827: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x55982cu); f_0051f62c();
    /* 0055982c: jmp 0x55979c */ goto L_0055979c;
L_00559831:; BB(0x00559831);
    /* 00559831: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00559833: mov ecx, edi */ r_ecx = r_edi;
    /* 00559835: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x55983au); f_0051f664();
    /* 0055983a: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0055983c: mov ecx, edi */ r_ecx = r_edi;
    /* 0055983e: call dword ptr [eax + 0x188] */ { u32 t = R32((u32)(r_eax+0x188u)); r_esp -= 4; W32(r_esp, 0x559844u); call_ind(t); }
    /* 00559844: mov eax, dword ptr [edi + 0x440] */ r_eax = R32((u32)(r_edi+0x440u));
    /* 0055984a: or eax, 0x42 */ {  u32 a = r_eax; u32 b = 0x42u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0055984d: and eax, 0xfffffdfe */ {  u32 a = r_eax; u32 b = 0xfffffdfeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00559852: mov dword ptr [edi + 0x440], eax */ W32((u32)(r_edi+0x440u), r_eax);
    /* 00559858: mov ecx, edi */ r_ecx = r_edi;
    /* 0055985a: call 0x5592a0 */ r_esp -= 4; W32(r_esp, 0x55985fu); f_005592a0();
    /* 0055985f: mov dword ptr [edi + 0x4f0], 0xf */ W32((u32)(r_edi+0x4f0u), 0xfu);
    /* 00559869: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0055986b: mov dword ptr [edi + 0x4ec], eax */ W32((u32)(r_edi+0x4ecu), r_eax);
    /* 00559871: add edi, 0x38 */ {  u32 a = r_edi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00559874: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00559875: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00559876: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00559877: push 0x2d6 */ { u32 v = 0x2d6u; r_esp -= 4; W32(r_esp, v); }
    /* 0055987c: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x559881u); f_00814298();
    /* 00559881: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00559884: jmp 0x55979c */ goto L_0055979c;
}

void f_0055988c(void) /* sub_55988C */
{
    FN_ENTER(0x0055988c);
    /* 0055988c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0055988d: mov ebp, esp */ r_ebp = r_esp;
    /* 0055988f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00559891: push 0x8d64ea */ { u32 v = 0x8d64eau; r_esp -= 4; W32(r_esp, v); }
    /* 00559896: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0055989c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055989d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005598a4: sub esp, 0x94 */ {  u32 a = r_esp; u32 b = 0x94u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005598aa: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005598ad: mov dword ptr [ebp - 0x3c], edi */ W32((u32)(r_ebp+0xffffffc4u), r_edi);
    /* 005598b0: mov dword ptr [ebp - 0x38], esi */ W32((u32)(r_ebp+0xffffffc8u), r_esi);
    /* 005598b3: mov dword ptr [ebp - 0x34], ebx */ W32((u32)(r_ebp+0xffffffccu), r_ebx);
    /* 005598b6: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005598b9: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005598bc: lea eax, [ecx + 0x504] */ r_eax = (u32)(r_ecx+0x504u);
    /* 005598c2: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005598c5: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005598c8: je 0x55a0c8 */ if (fZ) goto L_0055a0c8;
L_005598ce:; BB(0x005598ce);
    /* 005598ce: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005598d1: je 0x559c34 */ if (fZ) goto L_00559c34;
L_005598d7:; BB(0x005598d7);
    /* 005598d7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005598d9: jne 0x559c5c */ if (!fZ) goto L_00559c5c;
L_005598df:; BB(0x005598df);
    /* 005598df: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x5598e4u); f_007aa094();
    /* 005598e4: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005598e7: call 0x55a124 */ r_esp -= 4; W32(r_esp, 0x5598ecu); f_0055a124();
    /* 005598ec: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005598ef: mov edx, dword ptr [eax + 0x440] */ r_edx = R32((u32)(r_eax+0x440u));
    /* 005598f5: test edx, 0x80 */ {  u32 a = r_edx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005598fb: je 0x55990e */ if (fZ) goto L_0055990e;
L_005598fd:; BB(0x005598fd);
    /* 005598fd: mov dword ptr [eax + 0x4f0], 0 */ W32((u32)(r_eax+0x4f0u), 0x0u);
    /* 00559907: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00559909: jmp 0x559a21 */ goto L_00559a21;
L_0055990e:; BB(0x0055990e);
    /* 0055990e: mov ecx, eax */ r_ecx = r_eax;
    /* 00559910: call 0x5213d8 */ r_esp -= 4; W32(r_esp, 0x559915u); f_005213d8();
    /* 00559915: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00559918: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x55991du); f_00521410();
    /* 0055991d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00559920: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 00559923: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x559928u); f_0082dcbc();
    /* 00559928: fstp dword ptr [ebp - 0x20] */ W_F32((u32)(r_ebp+0xffffffe0u), ST(0)); FPOP();
    /* 0055992b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0055992e: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 00559931: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x559936u); f_0082ddd8();
    /* 00559936: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00559939: fld dword ptr [eax + 0x3a8] */ FPUSH(R_F32((u32)(r_eax+0x3a8u)));
    /* 0055993f: fmul dword ptr [ebp - 0x20] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffe0u));
    /* 00559942: fld dword ptr [eax + 0x3b0] */ FPUSH(R_F32((u32)(r_eax+0x3b0u)));
    /* 00559948: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0055994a: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0055994c: fstp dword ptr [eax + 0x500] */ W_F32((u32)(r_eax+0x500u), ST(0)); FPOP();
    /* 00559952: mov ecx, 0x1000 */ r_ecx = 0x1000u;
    /* 00559957: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x55995cu); f_0082ddd8();
    /* 0055995c: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0055995f: fcomp dword ptr [edx + 0x500] */ fx_compare(ST(0), R_F32((u32)(r_edx+0x500u))); FPOP();
    /* 00559965: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00559967: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00559968: jbe 0x559984 */ if ((fC||fZ)) goto L_00559984;
L_0055996a:; BB(0x0055996a);
    /* 0055996a: mov ecx, edx */ r_ecx = r_edx;
    /* 0055996c: push dword ptr [ecx + 0x464] */ { u32 v = R32((u32)(r_ecx+0x464u)); r_esp -= 4; W32(r_esp, v); }
    /* 00559972: call 0x5214cc */ r_esp -= 4; W32(r_esp, 0x559977u); f_005214cc();
    /* 00559977: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0055997a: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0055997c: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x559982u); call_ind(t); }
    /* 00559982: jmp 0x559997 */ goto L_00559997;
L_00559984:; BB(0x00559984);
    /* 00559984: mov ecx, edx */ r_ecx = r_edx;
    /* 00559986: push dword ptr [ecx + 0x460] */ { u32 v = R32((u32)(r_ecx+0x460u)); r_esp -= 4; W32(r_esp, v); }
    /* 0055998c: push dword ptr [ecx + 0x464] */ { u32 v = R32((u32)(r_ecx+0x464u)); r_esp -= 4; W32(r_esp, v); }
    /* 00559992: call 0x521528 */ r_esp -= 4; W32(r_esp, 0x559997u); f_00521528();
L_00559997:; BB(0x00559997);
    /* 00559997: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0055999a: mov eax, dword ptr [eax + 0x4f8] */ r_eax = R32((u32)(r_eax+0x4f8u));
    /* 005599a0: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005599a5: je 0x559a12 */ if (fZ) goto L_00559a12;
L_005599a7:; BB(0x005599a7);
    /* 005599a7: mov ebx, dword ptr [eax*4 + 0xaad720] */ r_ebx = R32((u32)(r_eax*4+0xaad720u));
    /* 005599ae: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005599af: call 0x6ea71c */ r_esp -= 4; W32(r_esp, 0x5599b4u); f_006ea71c();
    /* 005599b4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005599b5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005599b7: jne 0x5599d4 */ if (!fZ) goto L_005599d4;
L_005599b9:; BB(0x005599b9);
    /* 005599b9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005599bc: mov dword ptr [eax + 0x4f0], 0 */ W32((u32)(r_eax+0x4f0u), 0x0u);
    /* 005599c6: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005599c8: mov dword ptr [eax + 0x4f8], 0xffff */ W32((u32)(r_eax+0x4f8u), 0xffffu);
    /* 005599d2: jmp 0x559a21 */ goto L_00559a21;
L_005599d4:; BB(0x005599d4);
    /* 005599d4: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005599d7: lea eax, [ebx + 0x300] */ r_eax = (u32)(r_ebx+0x300u);
    /* 005599dd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005599de: call 0x771e14 */ r_esp -= 4; W32(r_esp, 0x5599e3u); f_00771e14();
    /* 005599e3: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005599e6: je 0x559c75 */ if (fZ) goto L_00559c75;
L_005599ec:; BB(0x005599ec);
    /* 005599ec: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005599ef: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 005599f2: mov dword ptr [ecx + 0x510], eax */ W32((u32)(r_ecx+0x510u), r_eax);
    /* 005599f8: mov edx, dword ptr [ebx + 0x3c] */ r_edx = R32((u32)(r_ebx+0x3cu));
    /* 005599fb: mov dword ptr [ecx + 0x514], edx */ W32((u32)(r_ecx+0x514u), r_edx);
    /* 00559a01: mov ebx, dword ptr [ebx + 0x40] */ r_ebx = R32((u32)(r_ebx+0x40u));
    /* 00559a04: mov edx, dword ptr [ecx + 0x4f0] */ r_edx = R32((u32)(r_ecx+0x4f0u));
    /* 00559a0a: mov dword ptr [ecx + 0x518], ebx */ W32((u32)(r_ecx+0x518u), r_ebx);
    /* 00559a10: jmp 0x559a21 */ goto L_00559a21;
L_00559a12:; BB(0x00559a12);
    /* 00559a12: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00559a15: mov dword ptr [eax + 0x4f0], 0 */ W32((u32)(r_eax+0x4f0u), 0x0u);
    /* 00559a1f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_00559a21:; BB(0x00559a21);
    /* 00559a21: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00559a23: je 0x559dae */ if (fZ) goto L_00559dae;
L_00559a29:; BB(0x00559a29);
    /* 00559a29: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00559a2c: je 0x559adf */ if (fZ) goto L_00559adf;
L_00559a32:; BB(0x00559a32);
    /* 00559a32: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00559a35: jne 0x559a67 */ if (!fZ) goto L_00559a67;
L_00559a37:; BB(0x00559a37);
    /* 00559a37: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00559a3a: mov eax, dword ptr [edx + 0x440] */ r_eax = R32((u32)(r_edx+0x440u));
    /* 00559a40: mov ecx, dword ptr [edx + 0x4f4] */ r_ecx = R32((u32)(r_edx+0x4f4u));
    /* 00559a46: or eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00559a4b: mov dword ptr [edx + 0x440], eax */ W32((u32)(r_edx+0x440u), r_eax);
    /* 00559a51: add ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00559a54: mov dword ptr [edx + 0x4f4], ecx */ W32((u32)(r_edx+0x4f4u), r_ecx);
    /* 00559a5a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00559a5c: jle 0x559c93 */ if ((fZ||fS!=fO)) goto L_00559c93;
L_00559a62:; BB(0x00559a62);
    /* 00559a62: jmp 0x559c27 */ goto L_00559c27;
L_00559a67:; BB(0x00559a67);
    /* 00559a67: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00559a6a: jne 0x559ab2 */ if (!fZ) goto L_00559ab2;
L_00559a6c:; BB(0x00559a6c);
    /* 00559a6c: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00559a6f: mov eax, dword ptr [edx + 0x440] */ r_eax = R32((u32)(r_edx+0x440u));
    /* 00559a75: mov ecx, dword ptr [edx + 0x4f4] */ r_ecx = R32((u32)(r_edx+0x4f4u));
    /* 00559a7b: and eax, 0xfffffeff */ {  u32 a = r_eax; u32 b = 0xfffffeffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00559a80: mov dword ptr [edx + 0x440], eax */ W32((u32)(r_edx+0x440u), r_eax);
    /* 00559a86: add ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00559a89: mov dword ptr [edx + 0x4f4], ecx */ W32((u32)(r_edx+0x4f4u), r_ecx);
    /* 00559a8f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00559a91: jg 0x559c27 */ if ((!fZ&&fS==fO)) goto L_00559c27;
L_00559a97:; BB(0x00559a97);
    /* 00559a97: mov eax, edx */ r_eax = r_edx;
    /* 00559a99: mov dword ptr [eax + 0x4f0], 0 */ W32((u32)(r_eax+0x4f0u), 0x0u);
    /* 00559aa3: mov dword ptr [eax + 0x4f8], 0xffff */ W32((u32)(r_eax+0x4f8u), 0xffffu);
    /* 00559aad: jmp 0x559c27 */ goto L_00559c27;
L_00559ab2:; BB(0x00559ab2);
    /* 00559ab2: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00559ab5: mov eax, dword ptr [edx + 0x440] */ r_eax = R32((u32)(r_edx+0x440u));
    /* 00559abb: mov dword ptr [edx + 0x4f0], 0 */ W32((u32)(r_edx+0x4f0u), 0x0u);
    /* 00559ac5: and eax, 0xfffffeff */ {  u32 a = r_eax; u32 b = 0xfffffeffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00559aca: mov dword ptr [edx + 0x4f8], 0xffff */ W32((u32)(r_edx+0x4f8u), 0xffffu);
    /* 00559ad4: mov dword ptr [edx + 0x440], eax */ W32((u32)(r_edx+0x440u), r_eax);
    /* 00559ada: jmp 0x559c27 */ goto L_00559c27;
L_00559adf:; BB(0x00559adf);
    /* 00559adf: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00559ae2: lea ecx, [ebp - 0x90] */ r_ecx = (u32)(r_ebp+0xffffff70u);
    /* 00559ae8: mov ebx, dword ptr [eax + 0x440] */ r_ebx = R32((u32)(r_eax+0x440u));
    /* 00559aee: mov esi, dword ptr [eax + 0x510] */ r_esi = R32((u32)(r_eax+0x510u));
    /* 00559af4: or ebx, 0x100 */ {  u32 a = r_ebx; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 00559afa: mov dword ptr [eax + 0x440], ebx */ W32((u32)(r_eax+0x440u), r_ebx);
    /* 00559b00: mov dword ptr [ebp - 0x90], esi */ W32((u32)(r_ebp+0xffffff70u), r_esi);
    /* 00559b06: mov edi, dword ptr [eax + 0x514] */ r_edi = R32((u32)(r_eax+0x514u));
    /* 00559b0c: mov dword ptr [ebp - 0x8c], edi */ W32((u32)(r_ebp+0xffffff74u), r_edi);
    /* 00559b12: mov edx, dword ptr [eax + 0x518] */ r_edx = R32((u32)(r_eax+0x518u));
    /* 00559b18: mov dword ptr [ebp - 0x88], edx */ W32((u32)(r_ebp+0xffffff78u), r_edx);
    /* 00559b1e: mov edx, dword ptr [eax + 0x504] */ r_edx = R32((u32)(r_eax+0x504u));
    /* 00559b24: mov dword ptr [ebp - 0x84], edx */ W32((u32)(r_ebp+0xffffff7cu), r_edx);
    /* 00559b2a: mov edx, dword ptr [eax + 0x508] */ r_edx = R32((u32)(r_eax+0x508u));
    /* 00559b30: mov dword ptr [ebp - 0x80], edx */ W32((u32)(r_ebp+0xffffff80u), r_edx);
    /* 00559b33: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00559b36: mov eax, dword ptr [eax + 0x50c] */ r_eax = R32((u32)(r_eax+0x50cu));
    /* 00559b3c: mov dword ptr [ebp - 0x7c], eax */ W32((u32)(r_ebp+0xffffff84u), r_eax);
    /* 00559b3f: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x559b44u); f_0082f9c4();
    /* 00559b44: lea edx, [ebp - 0x90] */ r_edx = (u32)(r_ebp+0xffffff70u);
    /* 00559b4a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00559b4b: call 0x7828e4 */ r_esp -= 4; W32(r_esp, 0x559b50u); f_007828e4();
    /* 00559b50: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00559b52: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00559b55: mov eax, dword ptr [0xa73bcc] */ r_eax = R32((u32)(0xa73bccu));
    /* 00559b5a: fld dword ptr [ebp - 0x90] */ FPUSH(R_F32((u32)(r_ebp+0xffffff70u)));
    /* 00559b60: fmul dword ptr [eax + 4] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x4u));
    /* 00559b63: fadd dword ptr [ebp - 0x84] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xffffff7cu));
    /* 00559b69: fld dword ptr [0x9253fc] */ FPUSH(R_F32((u32)(0x9253fcu)));
    /* 00559b6f: fadd dword ptr [ebp - 0x80] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xffffff80u));
    /* 00559b72: fld dword ptr [ebp - 0x88] */ FPUSH(R_F32((u32)(r_ebp+0xffffff78u)));
    /* 00559b78: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00559b7b: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00559b7d: fstp dword ptr [ebp - 0x84] */ W_F32((u32)(r_ebp+0xffffff7cu), ST(0)); FPOP();
    /* 00559b83: fstp dword ptr [ebp - 0x80] */ W_F32((u32)(r_ebp+0xffffff80u), ST(0)); FPOP();
    /* 00559b86: fmul dword ptr [eax + 4] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x4u));
    /* 00559b89: fadd dword ptr [ebp - 0x7c] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xffffff84u));
    /* 00559b8c: fstp dword ptr [ebp - 0x7c] */ W_F32((u32)(r_ebp+0xffffff84u), ST(0)); FPOP();
    /* 00559b8f: lea edx, [ebp - 0x84] */ r_edx = (u32)(r_ebp+0xffffff7cu);
    /* 00559b95: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00559b97: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00559b98: call 0x7b4c58 */ r_esp -= 4; W32(r_esp, 0x559b9du); f_007b4c58();
    /* 00559b9d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00559b9f: je 0x559bde */ if (fZ) goto L_00559bde;
L_00559ba1:; BB(0x00559ba1);
    /* 00559ba1: push 0x88e0 */ { u32 v = 0x88e0u; r_esp -= 4; W32(r_esp, v); }
    /* 00559ba6: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00559ba9: lea eax, [ebp - 0x84] */ r_eax = (u32)(r_ebp+0xffffff7cu);
    /* 00559baf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00559bb0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00559bb1: call 0x77fffc */ r_esp -= 4; W32(r_esp, 0x559bb6u); f_0077fffc();
    /* 00559bb6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00559bb9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00559bbb: jne 0x559bde */ if (!fZ) goto L_00559bde;
L_00559bbd:; BB(0x00559bbd);
    /* 00559bbd: mov eax, dword ptr [ebp - 0x84] */ r_eax = R32((u32)(r_ebp+0xffffff7cu));
    /* 00559bc3: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00559bc6: mov dword ptr [ebx + 0x504], eax */ W32((u32)(r_ebx+0x504u), r_eax);
    /* 00559bcc: mov edx, dword ptr [ebp - 0x80] */ r_edx = R32((u32)(r_ebp+0xffffff80u));
    /* 00559bcf: mov dword ptr [ebx + 0x508], edx */ W32((u32)(r_ebx+0x508u), r_edx);
    /* 00559bd5: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 00559bd8: mov dword ptr [ebx + 0x50c], ecx */ W32((u32)(r_ebx+0x50cu), r_ecx);
L_00559bde:; BB(0x00559bde);
    /* 00559bde: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00559be1: mov edx, dword ptr [eax + 0x4f4] */ r_edx = R32((u32)(r_eax+0x4f4u));
    /* 00559be7: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00559bea: mov dword ptr [eax + 0x4f4], edx */ W32((u32)(r_eax+0x4f4u), r_edx);
    /* 00559bf0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00559bf2: jg 0x559c0e */ if ((!fZ&&fS==fO)) goto L_00559c0e;
L_00559bf4:; BB(0x00559bf4);
    /* 00559bf4: mov ecx, eax */ r_ecx = r_eax;
    /* 00559bf6: mov dword ptr [ecx + 0x4f0], 2 */ W32((u32)(r_ecx+0x4f0u), 0x2u);
    /* 00559c00: mov eax, dword ptr [0xa73bcc] */ r_eax = R32((u32)(0xa73bccu));
    /* 00559c05: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 00559c08: mov dword ptr [ecx + 0x4f4], edx */ W32((u32)(r_ecx+0x4f4u), r_edx);
L_00559c0e:; BB(0x00559c0e);
    /* 00559c0e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00559c11: lea edx, [ecx + 0x38] */ r_edx = (u32)(r_ecx+0x38u);
    /* 00559c14: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00559c16: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00559c17: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00559c18: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00559c19: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00559c1a: push 0x2d2 */ { u32 v = 0x2d2u; r_esp -= 4; W32(r_esp, v); }
    /* 00559c1f: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x559c24u); f_008144b0();
    /* 00559c24: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00559c27:; BB(0x00559c27);
    /* 00559c27: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00559c2a: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00559c2c: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x559c32u); call_ind(t); }
    /* 00559c32: jmp 0x559c5c */ goto L_00559c5c;
L_00559c34:; BB(0x00559c34);
    /* 00559c34: mov eax, ecx */ r_eax = r_ecx;
    /* 00559c36: mov edx, dword ptr [eax + 0x440] */ r_edx = R32((u32)(r_eax+0x440u));
    /* 00559c3c: test edx, 0x80 */ {  u32 a = r_edx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00559c42: jne 0x559c55 */ if (!fZ) goto L_00559c55;
L_00559c44:; BB(0x00559c44);
    /* 00559c44: mov edx, dword ptr [eax + 0x4ec] */ r_edx = R32((u32)(r_eax+0x4ecu));
    /* 00559c4a: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00559c4d: je 0x55a0b0 */ if (fZ) goto L_0055a0b0;
L_00559c53:; BB(0x00559c53);
    /* 00559c53: jmp 0x559c5c */ goto L_00559c5c;
L_00559c55:; BB(0x00559c55);
    /* 00559c55: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00559c57: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x559c5cu); f_0051f62c();
L_00559c5c:; BB(0x00559c5c);
    /* 00559c5c: mov edi, dword ptr [ebp - 0x3c] */ r_edi = R32((u32)(r_ebp+0xffffffc4u));
    /* 00559c5f: mov esi, dword ptr [ebp - 0x38] */ r_esi = R32((u32)(r_ebp+0xffffffc8u));
    /* 00559c62: mov ebx, dword ptr [ebp - 0x34] */ r_ebx = R32((u32)(r_ebp+0xffffffccu));
    /* 00559c65: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00559c68: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00559c6f: mov esp, ebp */ r_esp = r_ebp;
    /* 00559c71: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00559c72: ret 4 */ FN_RET(0x0055988c); r_esp += 8; return;
L_00559c75:; BB(0x00559c75);
    /* 00559c75: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00559c78: mov dword ptr [eax + 0x4f0], 0 */ W32((u32)(r_eax+0x4f0u), 0x0u);
    /* 00559c82: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00559c84: mov dword ptr [eax + 0x4f8], 0xffff */ W32((u32)(r_eax+0x4f8u), 0xffffu);
    /* 00559c8e: jmp 0x559a21 */ goto L_00559a21;
L_00559c93:; BB(0x00559c93);
    /* 00559c93: mov dword ptr [ebp - 0xa0], 0 */ W32((u32)(r_ebp+0xffffff60u), 0x0u);
    /* 00559c9d: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 00559c9f: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x559ca4u); f_005caba4();
    /* 00559ca4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00559ca5: mov dword ptr [ebp - 0x9c], eax */ W32((u32)(r_ebp+0xffffff64u), r_eax);
    /* 00559cab: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00559cad: je 0x559ce2 */ if (fZ) goto L_00559ce2;
L_00559caf:; BB(0x00559caf);
    /* 00559caf: mov dword ptr [ebp - 0xa0], 1 */ W32((u32)(r_ebp+0xffffff60u), 0x1u);
    /* 00559cb9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00559cc0: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 00559cc6: mov ecx, eax */ r_ecx = r_eax;
    /* 00559cc8: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00559ccb: push 0x42200000 */ { u32 v = 0x42200000u; r_esp -= 4; W32(r_esp, v); }
    /* 00559cd0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00559cd2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00559cd3: call 0x6ee0d0 */ r_esp -= 4; W32(r_esp, 0x559cd8u); f_006ee0d0();
    /* 00559cd8: mov dword ptr [ebp - 0xa0], 0 */ W32((u32)(r_ebp+0xffffff60u), 0x0u);
L_00559ce2:; BB(0x00559ce2);
    /* 00559ce2: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00559ce9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00559cec: lea ecx, [eax + 0x38] */ r_ecx = (u32)(r_eax+0x38u);
    /* 00559cef: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00559cf1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00559cf2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00559cf3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00559cf4: push 0x2d3 */ { u32 v = 0x2d3u; r_esp -= 4; W32(r_esp, v); }
    /* 00559cf9: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x559cfeu); f_00814298();
    /* 00559cfe: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00559d01: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_00559d03:; BB(0x00559d03);
    /* 00559d03: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00559d04: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x559d09u); f_0068d5a8();
    /* 00559d09: mov ebx, eax */ r_ebx = r_eax;
    /* 00559d0b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00559d0e: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00559d10: je 0x559d86 */ if (fZ) goto L_00559d86;
L_00559d12:; BB(0x00559d12);
    /* 00559d12: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00559d15: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00559d16: lea esi, [ebx + 0x38] */ r_esi = (u32)(r_ebx+0x38u);
    /* 00559d19: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00559d1a: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x559d1fu); f_007a9180();
    /* 00559d1f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00559d22: fcomp dword ptr [0xa73bbc] */ fx_compare(ST(0), R_F32((u32)(0xa73bbcu))); FPOP();
    /* 00559d28: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00559d2a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00559d2b: ja 0x559d86 */ if ((!fC&&!fZ)) goto L_00559d86;
L_00559d2d:; BB(0x00559d2d);
    /* 00559d2d: mov edx, dword ptr [0xa73bcc] */ r_edx = R32((u32)(0xa73bccu));
    /* 00559d33: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 00559d36: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 00559d38: mov dword ptr [ebp - 0x94], ecx */ W32((u32)(r_ebp+0xffffff6cu), r_ecx);
    /* 00559d3e: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 00559d43: mov dword ptr [ebp - 0x98], 1 */ W32((u32)(r_ebp+0xffffff68u), 0x1u);
    /* 00559d4d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00559d4e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00559d4f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00559d52: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00559d54: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00559d55: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00559d57: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00559d59: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00559d5a: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x559d5du); call_ind(t); }
    /* 00559d5d: fcomp dword ptr [0x925400] */ fx_compare(ST(0), R_F32((u32)(0x925400u))); FPOP();
    /* 00559d63: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00559d65: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00559d66: jbe 0x559d74 */ if ((fC||fZ)) goto L_00559d74;
L_00559d68:; BB(0x00559d68);
    /* 00559d68: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
    /* 00559d6b: or edx, 0x600 */ {  u32 a = r_edx; u32 b = 0x600u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00559d71: mov dword ptr [ebx + 0x30], edx */ W32((u32)(r_ebx+0x30u), r_edx);
L_00559d74:; BB(0x00559d74);
    /* 00559d74: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00559d76: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00559d77: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00559d78: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00559d79: push 0xaf */ { u32 v = 0xafu; r_esp -= 4; W32(r_esp, v); }
    /* 00559d7e: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x559d83u); f_00814298();
    /* 00559d83: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00559d86:; BB(0x00559d86);
    /* 00559d86: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00559d89: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00559d8c: jl 0x559d03 */ if ((fS!=fO)) goto L_00559d03;
L_00559d92:; BB(0x00559d92);
    /* 00559d92: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00559d95: mov dword ptr [eax + 0x4f4], 0x1e */ W32((u32)(r_eax+0x4f4u), 0x1eu);
    /* 00559d9f: mov dword ptr [eax + 0x4f0], 3 */ W32((u32)(r_eax+0x4f0u), 0x3u);
    /* 00559da9: jmp 0x559c27 */ goto L_00559c27;
L_00559dae:; BB(0x00559dae);
    /* 00559dae: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00559db1: mov edx, dword ptr [eax + 0x440] */ r_edx = R32((u32)(r_eax+0x440u));
    /* 00559db7: and edx, 0xfffffeff */ {  u32 a = r_edx; u32 b = 0xfffffeffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00559dbd: mov dword ptr [eax + 0x440], edx */ W32((u32)(r_eax+0x440u), r_edx);
    /* 00559dc3: test dl, 8 */ {  u32 a = (u8)r_edx; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00559dc6: je 0x559dd7 */ if (fZ) goto L_00559dd7;
L_00559dc8:; BB(0x00559dc8);
    /* 00559dc8: mov dword ptr [eax + 0x4ec], 1 */ W32((u32)(r_eax+0x4ecu), 0x1u);
    /* 00559dd2: jmp 0x559c27 */ goto L_00559c27;
L_00559dd7:; BB(0x00559dd7);
    /* 00559dd7: mov ecx, eax */ r_ecx = r_eax;
    /* 00559dd9: mov eax, dword ptr [ecx + 0x4fc] */ r_eax = R32((u32)(r_ecx+0x4fcu));
    /* 00559ddf: mov ebx, dword ptr [ecx] */ r_ebx = R32((u32)(r_ecx));
    /* 00559de1: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00559de4: mov dword ptr [ecx + 0x4fc], eax */ W32((u32)(r_ecx+0x4fcu), r_eax);
    /* 00559dea: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00559dec: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00559def: mov dword ptr [ebp - 0x78], 2 */ W32((u32)(r_ebp+0xffffff88u), 0x2u);
    /* 00559df6: mov dword ptr [ebp - 0x74], 0 */ W32((u32)(r_ebp+0xffffff8cu), 0x0u);
    /* 00559dfd: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 00559e00: mov dword ptr [ebp - 0x70], 1 */ W32((u32)(r_ebp+0xffffff90u), 0x1u);
    /* 00559e07: mov dword ptr [ebp - 0x6c], 3 */ W32((u32)(r_ebp+0xffffff94u), 0x3u);
    /* 00559e0e: mov dword ptr [ebp - 0x68], 0xffff */ W32((u32)(r_ebp+0xffffff98u), 0xffffu);
    /* 00559e15: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
    /* 00559e1c: call dword ptr [ebx + 0x194] */ { u32 t = R32((u32)(r_ebx+0x194u)); r_esp -= 4; W32(r_esp, 0x559e22u); call_ind(t); }
    /* 00559e22: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
    /* 00559e28: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 00559e2b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00559e2d: je 0x559e3a */ if (fZ) goto L_00559e3a;
L_00559e2f:; BB(0x00559e2f);
    /* 00559e2f: mov eax, edx */ r_eax = r_edx;
    /* 00559e31: add eax, dword ptr [0xaae164] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaae164u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00559e37: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
L_00559e3a:; BB(0x00559e3a);
    /* 00559e3a: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00559e3d: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00559e3f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00559e41: jle 0x559ee8 */ if ((fZ||fS!=fO)) goto L_00559ee8;
L_00559e47:; BB(0x00559e47);
    /* 00559e47: mov ebx, dword ptr [esi*4 + 0xaad720] */ r_ebx = R32((u32)(r_esi*4+0xaad720u));
    /* 00559e4e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00559e4f: call 0x6ea71c */ r_esp -= 4; W32(r_esp, 0x559e54u); f_006ea71c();
    /* 00559e54: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00559e55: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00559e57: je 0x559eda */ if (fZ) goto L_00559eda;
L_00559e5d:; BB(0x00559e5d);
    /* 00559e5d: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 00559e60: test eax, 0x2000800 */ {  u32 a = r_eax; u32 b = 0x2000800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00559e65: jne 0x559eda */ if (!fZ) goto L_00559eda;
L_00559e67:; BB(0x00559e67);
    /* 00559e67: lea ecx, [ebp - 0x48] */ r_ecx = (u32)(r_ebp+0xffffffb8u);
    /* 00559e6a: mov eax, dword ptr [ebx + 0x300] */ r_eax = R32((u32)(r_ebx+0x300u));
    /* 00559e70: mov edi, dword ptr [ebx + 0x304] */ r_edi = R32((u32)(r_ebx+0x304u));
    /* 00559e76: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 00559e79: mov eax, dword ptr [ebx + 0x308] */ r_eax = R32((u32)(r_ebx+0x308u));
    /* 00559e7f: mov dword ptr [ebp - 0x44], edi */ W32((u32)(r_ebp+0xffffffbcu), r_edi);
    /* 00559e82: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00559e85: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00559e88: lea edx, [eax + 0x300] */ r_edx = (u32)(r_eax+0x300u);
    /* 00559e8e: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x559e93u); f_0082f9c4();
    /* 00559e93: fld dword ptr [ebp - 0x48] */ FPUSH(R_F32((u32)(r_ebp+0xffffffb8u)));
    /* 00559e96: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00559e98: fld dword ptr [ebp - 0x40] */ FPUSH(R_F32((u32)(r_ebp+0xffffffc0u)));
    /* 00559e9b: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00559e9d: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00559e9f: fcom dword ptr [0x9253f8] */ fx_compare(ST(0), R_F32((u32)(0x9253f8u))); 
    /* 00559ea5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00559ea7: fstp dword ptr [ebp - 0x20] */ W_F32((u32)(r_ebp+0xffffffe0u), ST(0)); FPOP();
    /* 00559eaa: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00559eab: jae 0x559eda */ if (!fC) goto L_00559eda;
L_00559ead:; BB(0x00559ead);
    /* 00559ead: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00559eb0: add ebx, 0x300 */ {  u32 a = r_ebx; u32 b = 0x300u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00559eb6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00559eb7: call 0x771e14 */ r_esp -= 4; W32(r_esp, 0x559ebcu); f_00771e14();
    /* 00559ebc: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00559ebf: je 0x559eda */ if (fZ) goto L_00559eda;
L_00559ec1:; BB(0x00559ec1);
    /* 00559ec1: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00559ec4: fld dword ptr [ebp - 0x20] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe0u)));
    /* 00559ec7: fstp dword ptr [ebp + eax*8 - 0x64] */ W_F32((u32)(r_ebp+r_eax*8+0xffffff9cu), ST(0)); FPOP();
    /* 00559ecb: mov dword ptr [ebp + eax*8 - 0x68], esi */ W32((u32)(r_ebp+r_eax*8+0xffffff98u), r_esi);
    /* 00559ecf: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00559ed2: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00559ed5: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00559ed8: jge 0x559ee8 */ if ((fS==fO)) goto L_00559ee8;
L_00559eda:; BB(0x00559eda);
    /* 00559eda: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00559edd: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00559ee0: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00559ee2: jl 0x559e47 */ if ((fS!=fO)) goto L_00559e47;
L_00559ee8:; BB(0x00559ee8);
    /* 00559ee8: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00559eeb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00559eed: jle 0x55a0a6 */ if ((fZ||fS!=fO)) goto L_0055a0a6;
L_00559ef3:; BB(0x00559ef3);
    /* 00559ef3: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00559ef6: jl 0x559f6b */ if ((fS!=fO)) goto L_00559f6b;
L_00559ef8:; BB(0x00559ef8);
    /* 00559ef8: mov edx, eax */ r_edx = r_eax;
    /* 00559efa: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00559efc: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00559eff: lea ecx, [edx - 1] */ r_ecx = (u32)(r_edx+0xffffffffu);
    /* 00559f02: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00559f04: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 00559f07: jle 0x559f6b */ if ((fZ||fS!=fO)) goto L_00559f6b;
L_00559f09:; BB(0x00559f09);
    /* 00559f09: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00559f0c: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00559f0f: lea esi, [esi + 1] */ r_esi = (u32)(r_esi+0x1u);
    /* 00559f12: mov dword ptr [ebp - 0x28], esi */ W32((u32)(r_ebp+0xffffffd8u), r_esi);
    /* 00559f15: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00559f17: jge 0x559f5e */ if ((fS==fO)) goto L_00559f5e;
L_00559f19:; BB(0x00559f19);
    /* 00559f19: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00559f1c: fld dword ptr [ebp + ecx*8 - 0x64] */ FPUSH(R_F32((u32)(r_ebp+r_ecx*8+0xffffff9cu)));
    /* 00559f20: mov ebx, dword ptr [ebp + ecx*8 - 0x64] */ r_ebx = R32((u32)(r_ebp+r_ecx*8+0xffffff9cu));
    /* 00559f24: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 00559f27: lea edx, [ecx + ecx] */ r_edx = (u32)(r_ecx+r_ecx);
    /* 00559f2a: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00559f2c: fcomp dword ptr [ebp + edx - 0x64] */ fx_compare(ST(0), R_F32((u32)(r_ebp+r_edx+0xffffff9cu))); FPOP();
    /* 00559f30: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00559f32: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00559f33: jbe 0x559f54 */ if ((fC||fZ)) goto L_00559f54;
L_00559f35:; BB(0x00559f35);
    /* 00559f35: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00559f38: mov edx, dword ptr [ebp + eax*8 - 0x68] */ r_edx = R32((u32)(r_ebp+r_eax*8+0xffffff98u));
    /* 00559f3c: mov edi, dword ptr [ebp + ecx*4 - 0x68] */ r_edi = R32((u32)(r_ebp+r_ecx*4+0xffffff98u));
    /* 00559f40: mov dword ptr [ebp + eax*8 - 0x68], edi */ W32((u32)(r_ebp+r_eax*8+0xffffff98u), r_edi);
    /* 00559f44: mov edi, dword ptr [ebp + esi*8 - 0x64] */ r_edi = R32((u32)(r_ebp+r_esi*8+0xffffff9cu));
    /* 00559f48: mov dword ptr [ebp + eax*8 - 0x64], edi */ W32((u32)(r_ebp+r_eax*8+0xffffff9cu), r_edi);
    /* 00559f4c: mov dword ptr [ebp + ecx*4 - 0x68], edx */ W32((u32)(r_ebp+r_ecx*4+0xffffff98u), r_edx);
    /* 00559f50: mov dword ptr [ebp + esi*8 - 0x64], ebx */ W32((u32)(r_ebp+r_esi*8+0xffffff9cu), r_ebx);
L_00559f54:; BB(0x00559f54);
    /* 00559f54: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00559f57: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00559f5a: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00559f5c: jl 0x559f19 */ if ((fS!=fO)) goto L_00559f19;
L_00559f5e:; BB(0x00559f5e);
    /* 00559f5e: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00559f61: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00559f64: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00559f67: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00559f69: jl 0x559f09 */ if ((fS!=fO)) goto L_00559f09;
L_00559f6b:; BB(0x00559f6b);
    /* 00559f6b: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00559f6e: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00559f71: jge 0x55a005 */ if ((fS==fO)) goto L_0055a005;
L_00559f77:; BB(0x00559f77);
    /* 00559f77: mov edx, ebx */ r_edx = r_ebx;
    /* 00559f79: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00559f7b: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00559f7e: cmp edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00559f81: jl 0x559fe5 */ if ((fS!=fO)) goto L_00559fe5;
L_00559f83:; BB(0x00559f83);
    /* 00559f83: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00559f86: mov eax, ebx */ r_eax = r_ebx;
    /* 00559f88: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00559f89: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00559f89, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00559f89, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00559f8b: lea eax, [ebx + 1] */ r_eax = (u32)(r_ebx+0x1u);
    /* 00559f8e: mov esi, dword ptr [ebp + edx*8 - 0x68] */ r_esi = R32((u32)(r_ebp+r_edx*8+0xffffff98u));
    /* 00559f92: mov dword ptr [ebp + ebx*8 - 0x68], esi */ W32((u32)(r_ebp+r_ebx*8+0xffffff98u), r_esi);
    /* 00559f96: mov edi, dword ptr [ebp + edx*8 - 0x64] */ r_edi = R32((u32)(r_ebp+r_edx*8+0xffffff9cu));
    /* 00559f9a: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00559f9b: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00559f9b, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00559f9b, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00559f9d: lea eax, [ebx + 2] */ r_eax = (u32)(r_ebx+0x2u);
    /* 00559fa0: mov dword ptr [ebp + ebx*8 - 0x64], edi */ W32((u32)(r_ebp+r_ebx*8+0xffffff9cu), r_edi);
    /* 00559fa4: mov esi, dword ptr [ebp + edx*8 - 0x68] */ r_esi = R32((u32)(r_ebp+r_edx*8+0xffffff98u));
    /* 00559fa8: mov dword ptr [ebp + ebx*8 - 0x60], esi */ W32((u32)(r_ebp+r_ebx*8+0xffffffa0u), r_esi);
    /* 00559fac: mov edx, dword ptr [ebp + edx*8 - 0x64] */ r_edx = R32((u32)(r_ebp+r_edx*8+0xffffff9cu));
    /* 00559fb0: mov dword ptr [ebp + ebx*8 - 0x5c], edx */ W32((u32)(r_ebp+r_ebx*8+0xffffffa4u), r_edx);
    /* 00559fb4: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00559fb5: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00559fb5, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00559fb5, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00559fb7: lea eax, [ebx + 3] */ r_eax = (u32)(r_ebx+0x3u);
    /* 00559fba: mov esi, dword ptr [ebp + edx*8 - 0x68] */ r_esi = R32((u32)(r_ebp+r_edx*8+0xffffff98u));
    /* 00559fbe: mov dword ptr [ebp + ebx*8 - 0x58], esi */ W32((u32)(r_ebp+r_ebx*8+0xffffffa8u), r_esi);
    /* 00559fc2: mov edx, dword ptr [ebp + edx*8 - 0x64] */ r_edx = R32((u32)(r_ebp+r_edx*8+0xffffff9cu));
    /* 00559fc6: mov dword ptr [ebp + ebx*8 - 0x54], edx */ W32((u32)(r_ebp+r_ebx*8+0xffffffacu), r_edx);
    /* 00559fca: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00559fcb: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00559fcb, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00559fcb, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00559fcd: mov ecx, dword ptr [ebp + edx*8 - 0x68] */ r_ecx = R32((u32)(r_ebp+r_edx*8+0xffffff98u));
    /* 00559fd1: mov dword ptr [ebp + ebx*8 - 0x50], ecx */ W32((u32)(r_ebp+r_ebx*8+0xffffffb0u), r_ecx);
    /* 00559fd5: mov edx, dword ptr [ebp + edx*8 - 0x64] */ r_edx = R32((u32)(r_ebp+r_edx*8+0xffffff9cu));
    /* 00559fd9: mov dword ptr [ebp + ebx*8 - 0x4c], edx */ W32((u32)(r_ebp+r_ebx*8+0xffffffb4u), r_edx);
    /* 00559fdd: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00559fe0: cmp ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00559fe3: jl 0x559f83 */ if ((fS!=fO)) goto L_00559f83;
L_00559fe5:; BB(0x00559fe5);
    /* 00559fe5: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00559fe8: mov eax, ebx */ r_eax = r_ebx;
    /* 00559fea: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00559feb: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00559feb, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00559feb, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00559fed: mov esi, dword ptr [ebp + edx*8 - 0x68] */ r_esi = R32((u32)(r_ebp+r_edx*8+0xffffff98u));
    /* 00559ff1: mov dword ptr [ebp + ebx*8 - 0x68], esi */ W32((u32)(r_ebp+r_ebx*8+0xffffff98u), r_esi);
    /* 00559ff5: mov edi, dword ptr [ebp + edx*8 - 0x64] */ r_edi = R32((u32)(r_ebp+r_edx*8+0xffffff9cu));
    /* 00559ff9: mov dword ptr [ebp + ebx*8 - 0x64], edi */ W32((u32)(r_ebp+r_ebx*8+0xffffff9cu), r_edi);
    /* 00559ffd: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0055a000: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055a003: jl 0x559fe5 */ if ((fS!=fO)) goto L_00559fe5;
L_0055a005:; BB(0x0055a005);
    /* 0055a005: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0055a008: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0055a009: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0055a00b: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0055a00d: and eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0055a010: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0055a012: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0055a014: mov ecx, dword ptr [ebp + eax*4 - 0x78] */ r_ecx = R32((u32)(r_ebp+r_eax*4+0xffffff88u));
    /* 0055a018: mov edx, dword ptr [ebp + ecx*8 - 0x68] */ r_edx = R32((u32)(r_ebp+r_ecx*8+0xffffff98u));
L_0055a01c:; BB(0x0055a01c);
    /* 0055a01c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0055a01f: cmp edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055a025: mov dword ptr [eax + 0x4f8], edx */ W32((u32)(r_eax+0x4f8u), r_edx);
    /* 0055a02b: je 0x559c27 */ if (fZ) goto L_00559c27;
L_0055a031:; BB(0x0055a031);
    /* 0055a031: push dword ptr [edx*4 + 0xaad720] */ { u32 v = R32((u32)(r_edx*4+0xaad720u)); r_esp -= 4; W32(r_esp, v); }
    /* 0055a038: call 0x6ea71c */ r_esp -= 4; W32(r_esp, 0x55a03du); f_006ea71c();
    /* 0055a03d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0055a03e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055a040: je 0x559c27 */ if (fZ) goto L_00559c27;
L_0055a046:; BB(0x0055a046);
    /* 0055a046: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0055a049: fld dword ptr [0x9253fc] */ FPUSH(R_F32((u32)(0x9253fcu)));
    /* 0055a04f: fadd dword ptr [ecx + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x3cu));
    /* 0055a052: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0055a055: mov eax, dword ptr [ecx + 0x38] */ r_eax = R32((u32)(r_ecx+0x38u));
    /* 0055a058: mov edx, dword ptr [ecx + 0x3c] */ r_edx = R32((u32)(r_ecx+0x3cu));
    /* 0055a05b: mov ebx, dword ptr [ecx + 0x40] */ r_ebx = R32((u32)(r_ecx+0x40u));
    /* 0055a05e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0055a060: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0055a061: mov dword ptr [ecx + 0x504], eax */ W32((u32)(r_ecx+0x504u), r_eax);
    /* 0055a067: mov dword ptr [ecx + 0x508], edx */ W32((u32)(r_ecx+0x508u), r_edx);
    /* 0055a06d: fstp dword ptr [ecx + 0x508] */ W_F32((u32)(r_ecx+0x508u), ST(0)); FPOP();
    /* 0055a073: mov dword ptr [ecx + 0x50c], ebx */ W32((u32)(r_ecx+0x50cu), r_ebx);
    /* 0055a079: call 0x7b4c58 */ r_esp -= 4; W32(r_esp, 0x55a07eu); f_007b4c58();
    /* 0055a07e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055a080: je 0x559c27 */ if (fZ) goto L_00559c27;
L_0055a086:; BB(0x0055a086);
    /* 0055a086: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0055a089: mov dword ptr [ecx + 0x4f0], 1 */ W32((u32)(r_ecx+0x4f0u), 0x1u);
    /* 0055a093: mov eax, dword ptr [0xa73bcc] */ r_eax = R32((u32)(0xa73bccu));
    /* 0055a098: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 0055a09b: mov dword ptr [ecx + 0x4f4], edx */ W32((u32)(r_ecx+0x4f4u), r_edx);
    /* 0055a0a1: jmp 0x559c27 */ goto L_00559c27;
L_0055a0a6:; BB(0x0055a0a6);
    /* 0055a0a6: mov edx, 0xffff */ r_edx = 0xffffu;
    /* 0055a0ab: jmp 0x55a01c */ goto L_0055a01c;
L_0055a0b0:; BB(0x0055a0b0);
    /* 0055a0b0: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0055a0b2: mov eax, dword ptr [ecx + 0x458] */ r_eax = R32((u32)(r_ecx+0x458u));
    /* 0055a0b8: mov dword ptr [ecx + 0x448], eax */ W32((u32)(r_ecx+0x448u), r_eax);
    /* 0055a0be: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x55a0c3u); f_0051f62c();
    /* 0055a0c3: jmp 0x559c5c */ goto L_00559c5c;
L_0055a0c8:; BB(0x0055a0c8);
    /* 0055a0c8: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0055a0ca: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x55a0cfu); f_0051f664();
    /* 0055a0cf: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0055a0d2: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0055a0d4: call dword ptr [eax + 0x188] */ { u32 t = R32((u32)(r_eax+0x188u)); r_esp -= 4; W32(r_esp, 0x55a0dau); call_ind(t); }
    /* 0055a0da: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0055a0dd: mov eax, dword ptr [ecx + 0x440] */ r_eax = R32((u32)(r_ecx+0x440u));
    /* 0055a0e3: or eax, 0x42 */ {  u32 a = r_eax; u32 b = 0x42u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0055a0e6: and eax, 0xfffffcf6 */ {  u32 a = r_eax; u32 b = 0xfffffcf6u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0055a0eb: mov dword ptr [ecx + 0x440], eax */ W32((u32)(r_ecx+0x440u), r_eax);
    /* 0055a0f1: call 0x5592a0 */ r_esp -= 4; W32(r_esp, 0x55a0f6u); f_005592a0();
    /* 0055a0f6: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0055a0f9: mov dword ptr [edx + 0x4f8], 0xffff */ W32((u32)(r_edx+0x4f8u), 0xffffu);
    /* 0055a103: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0055a105: mov dword ptr [edx + 0x4ec], eax */ W32((u32)(r_edx+0x4ecu), r_eax);
    /* 0055a10b: mov dword ptr [edx + 0x4f0], eax */ W32((u32)(r_edx+0x4f0u), r_eax);
    /* 0055a111: mov dword ptr [edx + 0x4f4], eax */ W32((u32)(r_edx+0x4f4u), r_eax);
    /* 0055a117: mov dword ptr [edx + 0x4fc], eax */ W32((u32)(r_edx+0x4fcu), r_eax);
    /* 0055a11d: jmp 0x559c5c */ goto L_00559c5c;
}

