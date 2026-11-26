#include "protos.h"

void f_0056a2a0(void) /* sub_56A2A0 */
{
    FN_ENTER(0x0056a2a0);
    /* 0056a2a0: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0056a2a2: add ecx, 0x128 */ {  u32 a = r_ecx; u32 b = 0x128u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0056a2a8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056a2a9: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0056a2ad: call 0x7806dc */ r_esp -= 4; W32(r_esp, 0x56a2b2u); f_007806dc();
    /* 0056a2b2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056a2b5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056a2b7: je 0x56a2bf */ if (fZ) goto L_0056a2bf;
L_0056a2b9:; BB(0x0056a2b9);
    /* 0056a2b9: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0056a2bb: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0056a2bd: je 0x56a2c4 */ if (fZ) goto L_0056a2c4;
L_0056a2bf:; BB(0x0056a2bf);
    /* 0056a2bf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0056a2c1: ret 4 */ FN_RET(0x0056a2a0); r_esp += 8; return;
L_0056a2c4:; BB(0x0056a2c4);
    /* 0056a2c4: mov eax, 1 */ r_eax = 0x1u;
    /* 0056a2c9: ret 4 */ FN_RET(0x0056a2a0); r_esp += 8; return;
}

void f_0056a2cc(void) /* sub_56A2CC */
{
    FN_ENTER(0x0056a2cc);
    /* 0056a2cc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056a2cd: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0056a2cf: mov eax, dword ptr [ebp + 0x384] */ r_eax = R32((u32)(r_ebp+0x384u));
    /* 0056a2d5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056a2d7: je 0x56a39b */ if (fZ) goto L_0056a39b;
L_0056a2dd:; BB(0x0056a2dd);
    /* 0056a2dd: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056a2e0: je 0x56a33b */ if (fZ) goto L_0056a33b;
L_0056a2e2:; BB(0x0056a2e2);
    /* 0056a2e2: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0056a2e5: jne 0x56a372 */ if (!fZ) goto L_0056a372;
L_0056a2eb:; BB(0x0056a2eb);
    /* 0056a2eb: mov edx, dword ptr [ebp + 0x358] */ r_edx = R32((u32)(r_ebp+0x358u));
    /* 0056a2f1: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0056a2f4: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0056a2f6: push 0x42c80000 */ { u32 v = 0x42c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 0056a2fb: push 0x42c80000 */ { u32 v = 0x42c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 0056a300: push dword ptr [ebp + 0x3ec] */ { u32 v = R32((u32)(r_ebp+0x3ecu)); r_esp -= 4; W32(r_esp, v); }
    /* 0056a306: call 0x772054 */ r_esp -= 4; W32(r_esp, 0x56a30bu); f_00772054();
    /* 0056a30b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0056a30d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0056a30f: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x56a314u); f_007aa094();
    /* 0056a314: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056a316: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056a318: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0056a31a: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x56a31fu); f_00772b44();
    /* 0056a31f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0056a321: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x56a326u); f_007b6880();
    /* 0056a326: mov eax, dword ptr [ebp + 0x38c] */ r_eax = R32((u32)(r_ebp+0x38cu));
    /* 0056a32c: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0056a32f: mov dword ptr [ebp + 0x38c], eax */ W32((u32)(r_ebp+0x38cu), r_eax);
    /* 0056a335: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0056a337: jg 0x56a372 */ if ((!fZ&&fS==fO)) goto L_0056a372;
L_0056a339:; BB(0x0056a339);
    /* 0056a339: jmp 0x56a374 */ goto L_0056a374;
L_0056a33b:; BB(0x0056a33b);
    /* 0056a33b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056a33c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056a33d: call 0x56c564 */ r_esp -= 4; W32(r_esp, 0x56a342u); f_0056c564();
    /* 0056a342: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056a345: mov dword ptr [ebp + 0x384], 2 */ W32((u32)(r_ebp+0x384u), 0x2u);
    /* 0056a34f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0056a351: mov dword ptr [ebp + 0x38c], 0x2d */ W32((u32)(r_ebp+0x38cu), 0x2du);
    /* 0056a35b: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x56a360u); f_007aa094();
    /* 0056a360: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056a362: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056a364: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0056a366: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x56a36bu); f_00772b44();
    /* 0056a36b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0056a36d: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x56a372u); f_007b6880();
L_0056a372:; BB(0x0056a372);
    /* 0056a372: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056a373: ret  */ FN_RET(0x0056a2cc); r_esp += 4; return;
L_0056a374:; BB(0x0056a374);
    /* 0056a374: mov eax, dword ptr [ebp + 0x390] */ r_eax = R32((u32)(r_ebp+0x390u));
    /* 0056a37a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0056a37c: jne 0x56a372 */ if (!fZ) goto L_0056a372;
L_0056a37e:; BB(0x0056a37e);
    /* 0056a37e: movsx eax, word ptr [ebp + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32eu));
    /* 0056a385: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0056a387: je 0x56a372 */ if (fZ) goto L_0056a372;
L_0056a389:; BB(0x0056a389);
    /* 0056a389: mov dword ptr [ebp + 0x37c], 0 */ W32((u32)(r_ebp+0x37cu), 0x0u);
    /* 0056a393: mov dword ptr [ebp + 0x388], eax */ W32((u32)(r_ebp+0x388u), r_eax);
    /* 0056a399: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056a39a: ret  */ FN_RET(0x0056a2cc); r_esp += 4; return;
L_0056a39b:; BB(0x0056a39b);
    /* 0056a39b: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 0056a39e: mov edx, dword ptr [ebp + 0x390] */ r_edx = R32((u32)(r_ebp+0x390u));
    /* 0056a3a4: and eax, 0xfbfbffff */ {  u32 a = r_eax; u32 b = 0xfbfbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0056a3a9: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 0056a3ac: and edx, 0xfffbffff */ {  u32 a = r_edx; u32 b = 0xfffbffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0056a3b2: mov dword ptr [ebp + 0x390], edx */ W32((u32)(r_ebp+0x390u), r_edx);
    /* 0056a3b8: mov eax, 1 */ r_eax = 0x1u;
    /* 0056a3bd: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 0056a3c4: mov dword ptr [ebp + 0x384], eax */ W32((u32)(r_ebp+0x384u), r_eax);
    /* 0056a3ca: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056a3cb: ret  */ FN_RET(0x0056a2cc); r_esp += 4; return;
}

void f_0056a3cc(void) /* sub_56A3CC */
{
    FN_ENTER(0x0056a3cc);
    /* 0056a3cc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0056a3cd: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0056a3ce: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0056a3d1: mov edi, ecx */ r_edi = r_ecx;
    /* 0056a3d3: mov eax, dword ptr [edi + 0x384] */ r_eax = R32((u32)(r_edi+0x384u));
    /* 0056a3d9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0056a3db: je 0x56a501 */ if (fZ) goto L_0056a501;
L_0056a3e1:; BB(0x0056a3e1);
    /* 0056a3e1: jle 0x56a6ee */ if ((fZ||fS!=fO)) goto L_0056a6ee;
L_0056a3e7:; BB(0x0056a3e7);
    /* 0056a3e7: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056a3ea: jg 0x56a6ee */ if ((!fZ&&fS==fO)) goto L_0056a6ee;
L_0056a3f0:; BB(0x0056a3f0);
    /* 0056a3f0: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056a3f3: jne 0x56a431 */ if (!fZ) goto L_0056a431;
L_0056a3f5:; BB(0x0056a3f5);
    /* 0056a3f5: fld dword ptr [edi + 0xc0] */ FPUSH(R_F32((u32)(r_edi+0xc0u)));
    /* 0056a3fb: fcomp dword ptr [0x926320] */ fx_compare(ST(0), R_F32((u32)(0x926320u))); FPOP();
    /* 0056a401: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0056a403: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0056a404: jb 0x56a4a5 */ if (fC) goto L_0056a4a5;
L_0056a40a:; BB(0x0056a40a);
    /* 0056a40a: mov ecx, edi */ r_ecx = r_edi;
    /* 0056a40c: call 0x56a70c */ r_esp -= 4; W32(r_esp, 0x56a411u); f_0056a70c();
    /* 0056a411: push 0x204 */ { u32 v = 0x204u; r_esp -= 4; W32(r_esp, v); }
    /* 0056a416: lea eax, [edi + 0x3b0] */ r_eax = (u32)(r_edi+0x3b0u);
    /* 0056a41c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056a41d: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x56a422u); f_0050b510();
    /* 0056a422: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056a425: mov dword ptr [edi + 0x384], 2 */ W32((u32)(r_edi+0x384u), 0x2u);
    /* 0056a42f: jmp 0x56a4a5 */ goto L_0056a4a5;
L_0056a431:; BB(0x0056a431);
    /* 0056a431: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056a434: jne 0x56a4a5 */ if (!fZ) goto L_0056a4a5;
L_0056a436:; BB(0x0056a436);
    /* 0056a436: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x56a43bu); f_00807ac0();
    /* 0056a43b: cmp eax, 0x23 */ {  u32 a = r_eax; u32 b = 0x23u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056a43e: je 0x56a6f4 */ if (fZ) goto L_0056a6f4;
L_0056a444:; BB(0x0056a444);
    /* 0056a444: mov ebx, 0x251 */ r_ebx = 0x251u;
L_0056a449:; BB(0x0056a449);
    /* 0056a449: lea edx, [edi + 0x38] */ r_edx = (u32)(r_edi+0x38u);
    /* 0056a44c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0056a44e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056a44f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056a450: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056a451: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0056a452: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x56a457u); f_00814298();
    /* 0056a457: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056a45a: fld dword ptr [edi + 0xc0] */ FPUSH(R_F32((u32)(r_edi+0xc0u)));
    /* 0056a460: fcomp dword ptr [0x926324] */ fx_compare(ST(0), R_F32((u32)(0x926324u))); FPOP();
    /* 0056a466: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0056a468: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0056a469: jb 0x56a4a5 */ if (fC) goto L_0056a4a5;
L_0056a46b:; BB(0x0056a46b);
    /* 0056a46b: mov ecx, edi */ r_ecx = r_edi;
    /* 0056a46d: call 0x56a70c */ r_esp -= 4; W32(r_esp, 0x56a472u); f_0056a70c();
    /* 0056a472: mov eax, dword ptr [0xa73d9c] */ r_eax = R32((u32)(0xa73d9cu));
    /* 0056a477: mov dword ptr [edi + 0x384], 3 */ W32((u32)(r_edi+0x384u), 0x3u);
    /* 0056a481: lea ebx, [edi + 0x300] */ r_ebx = (u32)(r_edi+0x300u);
    /* 0056a487: push dword ptr [eax + 0x20] */ { u32 v = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0056a48a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0056a48b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0056a48c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0056a48d: call 0x6f1eb0 */ r_esp -= 4; W32(r_esp, 0x56a492u); f_006f1eb0();
    /* 0056a492: mov eax, dword ptr [0xa73d9c] */ r_eax = R32((u32)(0xa73d9cu));
    /* 0056a497: push dword ptr [eax + 0x20] */ { u32 v = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0056a49a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0056a49b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0056a49c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0056a49d: call 0x6e7998 */ r_esp -= 4; W32(r_esp, 0x56a4a2u); f_006e7998();
    /* 0056a4a2: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0056a4a5:; BB(0x0056a4a5);
    /* 0056a4a5: mov ecx, edi */ r_ecx = r_edi;
    /* 0056a4a7: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x56a4acu); f_007aa094();
    /* 0056a4ac: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056a4ae: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056a4b0: mov ecx, edi */ r_ecx = r_edi;
    /* 0056a4b2: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x56a4b7u); f_00772b44();
    /* 0056a4b7: mov ecx, edi */ r_ecx = r_edi;
    /* 0056a4b9: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x56a4beu); f_007b6880();
    /* 0056a4be: movsx eax, word ptr [edi + 0xb8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0xb8u));
    /* 0056a4c5: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056a4c8: je 0x56a6ee */ if (fZ) goto L_0056a6ee;
L_0056a4ce:; BB(0x0056a4ce);
    /* 0056a4ce: mov eax, dword ptr [edi + 0x390] */ r_eax = R32((u32)(r_edi+0x390u));
    /* 0056a4d4: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0056a4d6: jne 0x56a6ee */ if (!fZ) goto L_0056a6ee;
L_0056a4dc:; BB(0x0056a4dc);
    /* 0056a4dc: movsx eax, word ptr [edi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32eu));
    /* 0056a4e3: cmp eax, 0xd */ {  u32 a = r_eax; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056a4e6: je 0x56a6ee */ if (fZ) goto L_0056a6ee;
L_0056a4ec:; BB(0x0056a4ec);
    /* 0056a4ec: mov dword ptr [edi + 0x37c], 0xd */ W32((u32)(r_edi+0x37cu), 0xdu);
    /* 0056a4f6: mov dword ptr [edi + 0x388], eax */ W32((u32)(r_edi+0x388u), r_eax);
    /* 0056a4fc: jmp 0x56a6ee */ goto L_0056a6ee;
L_0056a501:; BB(0x0056a501);
    /* 0056a501: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0056a504: and eax, 0xfbfbffff */ {  u32 a = r_eax; u32 b = 0xfbfbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0056a509: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0056a50c: and eax, 0x1000000 */ {  u32 a = r_eax; u32 b = 0x1000000u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0056a511: je 0x56a57e */ if (fZ) goto L_0056a57e;
L_0056a513:; BB(0x0056a513);
    /* 0056a513: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056a515: je 0x56a54b */ if (fZ) goto L_0056a54b;
L_0056a517:; BB(0x0056a517);
    /* 0056a517: mov edx, dword ptr [edi + 0x390] */ r_edx = R32((u32)(r_edi+0x390u));
    /* 0056a51d: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0056a520: jne 0x56a6e2 */ if (!fZ) goto L_0056a6e2;
L_0056a526:; BB(0x0056a526);
    /* 0056a526: movsx eax, word ptr [edi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32eu));
    /* 0056a52d: cmp eax, 0xd */ {  u32 a = r_eax; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056a530: je 0x56a6e2 */ if (fZ) goto L_0056a6e2;
L_0056a536:; BB(0x0056a536);
    /* 0056a536: mov dword ptr [edi + 0x37c], 0xd */ W32((u32)(r_edi+0x37cu), 0xdu);
    /* 0056a540: mov dword ptr [edi + 0x388], eax */ W32((u32)(r_edi+0x388u), r_eax);
    /* 0056a546: jmp 0x56a6e2 */ goto L_0056a6e2;
L_0056a54b:; BB(0x0056a54b);
    /* 0056a54b: mov edx, dword ptr [edi + 0x390] */ r_edx = R32((u32)(r_edi+0x390u));
    /* 0056a551: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0056a554: jne 0x56a6e2 */ if (!fZ) goto L_0056a6e2;
L_0056a55a:; BB(0x0056a55a);
    /* 0056a55a: movsx eax, word ptr [edi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32eu));
    /* 0056a561: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056a563: je 0x56a6e2 */ if (fZ) goto L_0056a6e2;
L_0056a569:; BB(0x0056a569);
    /* 0056a569: mov dword ptr [edi + 0x37c], 0 */ W32((u32)(r_edi+0x37cu), 0x0u);
    /* 0056a573: mov dword ptr [edi + 0x388], eax */ W32((u32)(r_edi+0x388u), r_eax);
    /* 0056a579: jmp 0x56a6e2 */ goto L_0056a6e2;
L_0056a57e:; BB(0x0056a57e);
    /* 0056a57e: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 0056a583: mov dword ptr [edi + 0x3c8], 0 */ W32((u32)(r_edi+0x3c8u), 0x0u);
    /* 0056a58d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0056a58f: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0056a591: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0056a593: jle 0x56a6c2 */ if ((fZ||fS!=fO)) goto L_0056a6c2;
L_0056a599:; BB(0x0056a599);
    /* 0056a599: mov dword ptr [esp + 0x24], esi */ W32((u32)(r_esp+0x24u), r_esi);
L_0056a59d:; BB(0x0056a59d);
    /* 0056a59d: mov esi, dword ptr [ebx*4 + 0xaad720] */ r_esi = R32((u32)(r_ebx*4+0xaad720u));
    /* 0056a5a4: cmp edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056a5a7: jge 0x56a6b3 */ if ((fS==fO)) goto L_0056a6b3;
L_0056a5ad:; BB(0x0056a5ad);
    /* 0056a5ad: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056a5af: je 0x56a6b3 */ if (fZ) goto L_0056a6b3;
L_0056a5b5:; BB(0x0056a5b5);
    /* 0056a5b5: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056a5b7: je 0x56a6b3 */ if (fZ) goto L_0056a6b3;
L_0056a5bd:; BB(0x0056a5bd);
    /* 0056a5bd: mov ecx, dword ptr [esi + 0x30] */ r_ecx = R32((u32)(r_esi+0x30u));
    /* 0056a5c0: test ecx, 0x6000800 */ {  u32 a = r_ecx; u32 b = 0x6000800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056a5c6: jne 0x56a6b3 */ if (!fZ) goto L_0056a6b3;
L_0056a5cc:; BB(0x0056a5cc);
    /* 0056a5cc: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0056a5cf: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 0056a5d2: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0056a5d5: mov eax, dword ptr [esi + 0x3c] */ r_eax = R32((u32)(r_esi+0x3cu));
    /* 0056a5d8: lea edx, [edi + 0x38] */ r_edx = (u32)(r_edi+0x38u);
    /* 0056a5db: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0056a5df: mov eax, dword ptr [esi + 0x40] */ r_eax = R32((u32)(r_esi+0x40u));
    /* 0056a5e2: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0056a5e6: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x56a5ebu); f_0082f9c4();
    /* 0056a5eb: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0056a5ee: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0056a5f1: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0056a5f3: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 0056a5f7: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 0056a5fb: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0056a5fd: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0056a5ff: fld dword ptr [edi + 0x440] */ FPUSH(R_F32((u32)(r_edi+0x440u)));
    /* 0056a605: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0056a607: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 0056a609: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0056a60b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0056a60d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0056a60f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0056a610: jae 0x56a626 */ if (!fC) goto L_0056a626;
L_0056a612:; BB(0x0056a612);
    /* 0056a612: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0056a614: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0056a616: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 0056a61b: mov edx, dword ptr [edi + 0x3c8] */ r_edx = R32((u32)(r_edi+0x3c8u));
    /* 0056a621: jmp 0x56a6b3 */ goto L_0056a6b3;
L_0056a626:; BB(0x0056a626);
    /* 0056a626: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0056a628: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0056a62a: fmul qword ptr [0x926248] */ ST(0) = ST(0) * R_F64((u32)(0x926248u));
    /* 0056a630: fdiv qword ptr [0x926240] */ ST(0) = ST(0) / R_F64((u32)(0x926240u));
    /* 0056a636: fnstcw word ptr [esp + 0xc] */ W16((u32)(r_esp+0xcu), fcw);
    /* 0056a63a: movzx eax, word ptr [esp + 0xc] */ r_eax = (u32)R16((u32)(r_esp+0xcu));
    /* 0056a63f: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0056a644: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0056a648: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 0056a64c: fistp dword ptr [esp + 0x1c] */ W32((u32)(r_esp+0x1cu), (u32)fx_int32(ST(0))); FPOP();
    /* 0056a650: fldcw word ptr [esp + 0xc] */ fcw = R16((u32)(r_esp+0xcu));
    /* 0056a654: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0056a658: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0056a65a: add eax, 0x4000 */ {  u32 a = r_eax; u32 b = 0x4000u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0056a65f: push dword ptr [edi + 0x60] */ { u32 v = R32((u32)(r_edi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 0056a662: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056a663: call 0x7a9018 */ r_esp -= 4; W32(r_esp, 0x56a668u); f_007a9018();
    /* 0056a668: mov ecx, eax */ r_ecx = r_eax;
    /* 0056a66a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056a66d: mov eax, dword ptr [edi + 0x43c] */ r_eax = R32((u32)(r_edi+0x43cu));
    /* 0056a673: mov edx, eax */ r_edx = r_eax;
    /* 0056a675: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0056a678: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0056a67a: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0056a67c: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056a67e: jle 0x56a68d */ if ((fZ||fS!=fO)) goto L_0056a68d;
L_0056a680:; BB(0x0056a680);
    /* 0056a680: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 0056a685: mov edx, dword ptr [edi + 0x3c8] */ r_edx = R32((u32)(r_edi+0x3c8u));
    /* 0056a68b: jmp 0x56a6b3 */ goto L_0056a6b3;
L_0056a68d:; BB(0x0056a68d);
    /* 0056a68d: movzx edx, word ptr [esi + 0x1c] */ r_edx = (u32)R16((u32)(r_esi+0x1cu));
    /* 0056a691: mov esi, dword ptr [edi + 0x3c8] */ r_esi = R32((u32)(r_edi+0x3c8u));
    /* 0056a697: lea eax, [esi + 1] */ r_eax = (u32)(r_esi+0x1u);
    /* 0056a69a: mov dword ptr [edi + 0x3c8], eax */ W32((u32)(r_edi+0x3c8u), r_eax);
    /* 0056a6a0: mov word ptr [edi + esi*2 + 0x3cc], dx */ W16((u32)(r_edi+r_esi*2+0x3ccu), (u16)r_edx);
    /* 0056a6a8: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 0056a6ad: mov edx, dword ptr [edi + 0x3c8] */ r_edx = R32((u32)(r_edi+0x3c8u));
L_0056a6b3:; BB(0x0056a6b3);
    /* 0056a6b3: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0056a6b6: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056a6b8: jl 0x56a59d */ if ((fS!=fO)) goto L_0056a59d;
L_0056a6be:; BB(0x0056a6be);
    /* 0056a6be: mov esi, dword ptr [esp + 0x24] */ r_esi = R32((u32)(r_esp+0x24u));
L_0056a6c2:; BB(0x0056a6c2);
    /* 0056a6c2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0056a6c4: jle 0x56a6fe */ if ((fZ||fS!=fO)) goto L_0056a6fe;
L_0056a6c6:; BB(0x0056a6c6);
    /* 0056a6c6: mov edx, dword ptr [edi + 0x390] */ r_edx = R32((u32)(r_edi+0x390u));
    /* 0056a6cc: mov dword ptr [edi + 0x384], 1 */ W32((u32)(r_edi+0x384u), 0x1u);
    /* 0056a6d6: mov eax, 3 */ r_eax = 0x3u;
    /* 0056a6db: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
L_0056a6e2:; BB(0x0056a6e2);
    /* 0056a6e2: and edx, 0xfffbffff */ {  u32 a = r_edx; u32 b = 0xfffbffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0056a6e8: mov dword ptr [edi + 0x390], edx */ W32((u32)(r_edi+0x390u), r_edx);
L_0056a6ee:; BB(0x0056a6ee);
    /* 0056a6ee: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0056a6f1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0056a6f2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0056a6f3: ret  */ FN_RET(0x0056a3cc); r_esp += 4; return;
L_0056a6f4:; BB(0x0056a6f4);
    /* 0056a6f4: mov ebx, 0x29f */ r_ebx = 0x29fu;
    /* 0056a6f9: jmp 0x56a449 */ goto L_0056a449;
L_0056a6fe:; BB(0x0056a6fe);
    /* 0056a6fe: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0056a701: and eax, 0x1000000 */ {  u32 a = r_eax; u32 b = 0x1000000u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0056a706: jmp 0x56a513 */ goto L_0056a513;
}

void f_0056a70c(void) /* sub_56A70C */
{
    FN_ENTER(0x0056a70c);
    /* 0056a70c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0056a70d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0056a70f: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 0056a714: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x56a719u); f_0082d990();
    /* 0056a719: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 0056a71c: fld dword ptr [ebx + 0x3c] */ FPUSH(R_F32((u32)(r_ebx+0x3cu)));
    /* 0056a71f: fadd dword ptr [ebx + 0x3f0] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x3f0u));
    /* 0056a725: fadd dword ptr [ebx + 0x3f4] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x3f4u));
    /* 0056a72b: mov edx, dword ptr [ebx + 0x40] */ r_edx = R32((u32)(r_ebx+0x40u));
    /* 0056a72e: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056a731: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0056a735: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0056a738: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0056a73a: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0056a73e: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x56a743u); f_00830b74();
    /* 0056a743: mov edx, dword ptr [ebx + 0x60] */ r_edx = R32((u32)(r_ebx+0x60u));
    /* 0056a746: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0056a748: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x56a74du); f_0082d8bc();
    /* 0056a74d: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x56a752u); f_0082fa9c();
    /* 0056a752: push dword ptr [ebx + 0xc0] */ { u32 v = R32((u32)(r_ebx+0xc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0056a758: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0056a75a: call 0x7aaab8 */ r_esp -= 4; W32(r_esp, 0x56a75fu); f_007aaab8();
    /* 0056a75f: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x56a764u); f_0082faac();
    /* 0056a764: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x56a769u); f_0082da80();
    /* 0056a769: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0056a76b: lea eax, [ebx + 0x3bc] */ r_eax = (u32)(r_ebx+0x3bcu);
    /* 0056a771: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056a772: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0056a774: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056a776: call dword ptr [edx + 0x10c] */ { u32 t = R32((u32)(r_edx+0x10cu)); r_esp -= 4; W32(r_esp, 0x56a77cu); call_ind(t); }
    /* 0056a77c: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0056a77e: lea eax, [ebx + 0x3a4] */ r_eax = (u32)(r_ebx+0x3a4u);
    /* 0056a784: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056a785: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0056a787: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 0056a789: call dword ptr [edx + 0x10c] */ { u32 t = R32((u32)(r_edx+0x10cu)); r_esp -= 4; W32(r_esp, 0x56a78fu); call_ind(t); }
    /* 0056a78f: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0056a791: lea eax, [ebx + 0x3b0] */ r_eax = (u32)(r_ebx+0x3b0u);
    /* 0056a797: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056a798: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0056a79a: push 0x16 */ { u32 v = 0x16u; r_esp -= 4; W32(r_esp, v); }
    /* 0056a79c: call dword ptr [edx + 0x10c] */ { u32 t = R32((u32)(r_edx+0x10cu)); r_esp -= 4; W32(r_esp, 0x56a7a2u); call_ind(t); }
    /* 0056a7a2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0056a7a3: ret  */ FN_RET(0x0056a70c); r_esp += 4; return;
}

void f_0056a7a4(void) /* sub_56A7A4 */
{
    FN_ENTER(0x0056a7a4);
    /* 0056a7a4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0056a7a5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0056a7a6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056a7a7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0056a7a8: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0056a7ab: mov edi, ecx */ r_edi = r_ecx;
    /* 0056a7ad: mov ecx, edi */ r_ecx = r_edi;
    /* 0056a7af: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x56a7b4u); f_00770738();
    /* 0056a7b4: mov esi, eax */ r_esi = r_eax;
    /* 0056a7b6: mov edx, dword ptr [edi + 0x384] */ r_edx = R32((u32)(r_edi+0x384u));
    /* 0056a7bc: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0056a7be: je 0x56aa3e */ if (fZ) goto L_0056aa3e;
L_0056a7c4:; BB(0x0056a7c4);
    /* 0056a7c4: jle 0x56aa24 */ if ((fZ||fS!=fO)) goto L_0056aa24;
L_0056a7ca:; BB(0x0056a7ca);
    /* 0056a7ca: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056a7cd: jg 0x56a95f */ if ((!fZ&&fS==fO)) goto L_0056a95f;
L_0056a7d3:; BB(0x0056a7d3);
    /* 0056a7d3: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056a7d5: je 0x56aa2c */ if (fZ) goto L_0056aa2c;
L_0056a7db:; BB(0x0056a7db);
    /* 0056a7db: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056a7de: jne 0x56a80b */ if (!fZ) goto L_0056a80b;
L_0056a7e0:; BB(0x0056a7e0);
    /* 0056a7e0: fld dword ptr [edi + 0xc0] */ FPUSH(R_F32((u32)(r_edi+0xc0u)));
    /* 0056a7e6: fcomp dword ptr [0x926314] */ fx_compare(ST(0), R_F32((u32)(0x926314u))); FPOP();
    /* 0056a7ec: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0056a7ee: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0056a7ef: jb 0x56a8e8 */ if (fC) goto L_0056a8e8;
L_0056a7f5:; BB(0x0056a7f5);
    /* 0056a7f5: mov ecx, edi */ r_ecx = r_edi;
    /* 0056a7f7: call 0x56a70c */ r_esp -= 4; W32(r_esp, 0x56a7fcu); f_0056a70c();
    /* 0056a7fc: mov dword ptr [edi + 0x384], 2 */ W32((u32)(r_edi+0x384u), 0x2u);
    /* 0056a806: jmp 0x56a8e8 */ goto L_0056a8e8;
L_0056a80b:; BB(0x0056a80b);
    /* 0056a80b: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056a80e: jne 0x56a8e8 */ if (!fZ) goto L_0056a8e8;
L_0056a814:; BB(0x0056a814);
    /* 0056a814: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x56a819u); f_00807ac0();
    /* 0056a819: push 0x22a */ { u32 v = 0x22au; r_esp -= 4; W32(r_esp, v); }
    /* 0056a81e: mov ecx, edi */ r_ecx = r_edi;
    /* 0056a820: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x56a825u); f_007879b8();
    /* 0056a825: lea ebp, [edi + 0x38] */ r_ebp = (u32)(r_edi+0x38u);
    /* 0056a828: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0056a82a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056a82b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056a82c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056a82d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0056a82e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056a82f: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x56a834u); f_008144b0();
    /* 0056a834: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056a837: fld dword ptr [edi + 0xc0] */ FPUSH(R_F32((u32)(r_edi+0xc0u)));
    /* 0056a83d: fcomp dword ptr [0x926318] */ fx_compare(ST(0), R_F32((u32)(0x926318u))); FPOP();
    /* 0056a843: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0056a845: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0056a846: jb 0x56a8e8 */ if (fC) goto L_0056a8e8;
L_0056a84c:; BB(0x0056a84c);
    /* 0056a84c: mov ecx, edi */ r_ecx = r_edi;
    /* 0056a84e: call 0x56a70c */ r_esp -= 4; W32(r_esp, 0x56a853u); f_0056a70c();
    /* 0056a853: push 0x203 */ { u32 v = 0x203u; r_esp -= 4; W32(r_esp, v); }
    /* 0056a858: lea ebx, [edi + 0x3a4] */ r_ebx = (u32)(r_edi+0x3a4u);
    /* 0056a85e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0056a85f: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x56a864u); f_0050b510();
    /* 0056a864: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056a867: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056a869: je 0x56a895 */ if (fZ) goto L_0056a895;
L_0056a86b:; BB(0x0056a86b);
    /* 0056a86b: mov edx, dword ptr [0x926204] */ r_edx = R32((u32)(0x926204u));
    /* 0056a871: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 0056a875: mov edx, dword ptr [0x926208] */ r_edx = R32((u32)(0x926208u));
    /* 0056a87b: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 0056a87f: mov edx, dword ptr [0x92620c] */ r_edx = R32((u32)(0x92620cu));
    /* 0056a885: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 0056a889: lea edx, [esp + 0x14] */ r_edx = (u32)(r_esp+0x14u);
    /* 0056a88d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056a88e: mov ecx, eax */ r_ecx = r_eax;
    /* 0056a890: call 0x508dd0 */ r_esp -= 4; W32(r_esp, 0x56a895u); f_00508dd0();
L_0056a895:; BB(0x0056a895);
    /* 0056a895: fild dword ptr [0xa73d88] */ FPUSH((long double)(i32)R32((u32)(0xa73d88u)));
    /* 0056a89b: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 0056a89f: lea edx, [esi + 0x300] */ r_edx = (u32)(r_esi+0x300u);
    /* 0056a8a5: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 0056a8a8: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 0056a8ac: mov ebx, dword ptr [0xa73d98] */ r_ebx = R32((u32)(0xa73d98u));
    /* 0056a8b2: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0056a8b6: mov dword ptr [esp + 0xc], ebx */ W32((u32)(r_esp+0xcu), r_ebx);
    /* 0056a8ba: call 0x56d0f8 */ r_esp -= 4; W32(r_esp, 0x56a8bfu); f_0056d0f8();
    /* 0056a8bf: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x56a8c4u); f_00807ac0();
    /* 0056a8c4: push 0x22b */ { u32 v = 0x22bu; r_esp -= 4; W32(r_esp, v); }
    /* 0056a8c9: mov ecx, edi */ r_ecx = r_edi;
    /* 0056a8cb: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x56a8d0u); f_007879b8();
    /* 0056a8d0: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0056a8d2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056a8d3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056a8d4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056a8d5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056a8d6: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x56a8dbu); f_00814298();
    /* 0056a8db: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056a8de: mov dword ptr [edi + 0x384], 3 */ W32((u32)(r_edi+0x384u), 0x3u);
L_0056a8e8:; BB(0x0056a8e8);
    /* 0056a8e8: mov edx, dword ptr [esi + 0x300] */ r_edx = R32((u32)(r_esi+0x300u));
    /* 0056a8ee: mov dword ptr [edi + 0x2a4], edx */ W32((u32)(r_edi+0x2a4u), r_edx);
    /* 0056a8f4: mov ebx, dword ptr [esi + 0x304] */ r_ebx = R32((u32)(r_esi+0x304u));
    /* 0056a8fa: mov dword ptr [edi + 0x2a8], ebx */ W32((u32)(r_edi+0x2a8u), r_ebx);
    /* 0056a900: mov eax, dword ptr [esi + 0x308] */ r_eax = R32((u32)(r_esi+0x308u));
    /* 0056a906: mov dword ptr [edi + 0x2ac], eax */ W32((u32)(r_edi+0x2acu), r_eax);
    /* 0056a90c: mov ecx, edi */ r_ecx = r_edi;
    /* 0056a90e: call 0x7718b4 */ r_esp -= 4; W32(r_esp, 0x56a913u); f_007718b4();
    /* 0056a913: mov ecx, edi */ r_ecx = r_edi;
    /* 0056a915: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x56a91au); f_007aa094();
    /* 0056a91a: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0056a91d: test eax, 0x1000000 */ {  u32 a = r_eax; u32 b = 0x1000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056a922: jne 0x56a92f */ if (!fZ) goto L_0056a92f;
L_0056a924:; BB(0x0056a924);
    /* 0056a924: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056a926: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056a928: mov ecx, edi */ r_ecx = r_edi;
    /* 0056a92a: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x56a92fu); f_00772b44();
L_0056a92f:; BB(0x0056a92f);
    /* 0056a92f: mov ecx, edi */ r_ecx = r_edi;
    /* 0056a931: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x56a936u); f_007b6880();
    /* 0056a936: mov eax, dword ptr [edi + 0x38c] */ r_eax = R32((u32)(r_edi+0x38cu));
    /* 0056a93c: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0056a93f: mov dword ptr [edi + 0x38c], eax */ W32((u32)(r_edi+0x38cu), r_eax);
    /* 0056a945: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0056a947: jg 0x56aa24 */ if ((!fZ&&fS==fO)) goto L_0056aa24;
L_0056a94d:; BB(0x0056a94d);
    /* 0056a94d: mov dword ptr [edi + 0x384], 4 */ W32((u32)(r_edi+0x384u), 0x4u);
    /* 0056a957: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0056a95a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0056a95b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056a95c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0056a95d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0056a95e: ret  */ FN_RET(0x0056a7a4); r_esp += 4; return;
L_0056a95f:; BB(0x0056a95f);
    /* 0056a95f: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056a962: jne 0x56aa24 */ if (!fZ) goto L_0056aa24;
L_0056a968:; BB(0x0056a968);
    /* 0056a968: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0056a96b: test eax, 0x1000000 */ {  u32 a = r_eax; u32 b = 0x1000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056a970: jne 0x56a9f4 */ if (!fZ) goto L_0056a9f4;
L_0056a976:; BB(0x0056a976);
    /* 0056a976: mov eax, dword ptr [edi + 0x390] */ r_eax = R32((u32)(r_edi+0x390u));
    /* 0056a97c: test eax, 0x80000 */ {  u32 a = r_eax; u32 b = 0x80000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056a981: jne 0x56a9cd */ if (!fZ) goto L_0056a9cd;
L_0056a983:; BB(0x0056a983);
    /* 0056a983: mov ecx, edi */ r_ecx = r_edi;
    /* 0056a985: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x56a98au); f_007751b0();
    /* 0056a98a: fcomp dword ptr [edi + 0x448] */ fx_compare(ST(0), R_F32((u32)(r_edi+0x448u))); FPOP();
    /* 0056a990: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0056a992: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0056a993: ja 0x56a9c7 */ if ((!fC&&!fZ)) goto L_0056a9c7;
L_0056a995:; BB(0x0056a995);
    /* 0056a995: mov eax, dword ptr [edi + 0x390] */ r_eax = R32((u32)(r_edi+0x390u));
    /* 0056a99b: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0056a99d: jne 0x56aa24 */ if (!fZ) goto L_0056aa24;
L_0056a9a3:; BB(0x0056a9a3);
    /* 0056a9a3: movsx eax, word ptr [edi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32eu));
    /* 0056a9aa: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056a9ad: je 0x56aa24 */ if (fZ) goto L_0056aa24;
L_0056a9af:; BB(0x0056a9af);
    /* 0056a9af: mov dword ptr [edi + 0x37c], 0xc */ W32((u32)(r_edi+0x37cu), 0xcu);
    /* 0056a9b9: mov dword ptr [edi + 0x388], eax */ W32((u32)(r_edi+0x388u), r_eax);
    /* 0056a9bf: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0056a9c2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0056a9c3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056a9c4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0056a9c5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0056a9c6: ret  */ FN_RET(0x0056a7a4); r_esp += 4; return;
L_0056a9c7:; BB(0x0056a9c7);
    /* 0056a9c7: mov eax, dword ptr [edi + 0x390] */ r_eax = R32((u32)(r_edi+0x390u));
L_0056a9cd:; BB(0x0056a9cd);
    /* 0056a9cd: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0056a9cf: jne 0x56aa24 */ if (!fZ) goto L_0056aa24;
L_0056a9d1:; BB(0x0056a9d1);
    /* 0056a9d1: movsx eax, word ptr [edi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32eu));
    /* 0056a9d8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056a9da: je 0x56aa24 */ if (fZ) goto L_0056aa24;
L_0056a9dc:; BB(0x0056a9dc);
    /* 0056a9dc: mov dword ptr [edi + 0x37c], 0 */ W32((u32)(r_edi+0x37cu), 0x0u);
    /* 0056a9e6: mov dword ptr [edi + 0x388], eax */ W32((u32)(r_edi+0x388u), r_eax);
    /* 0056a9ec: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0056a9ef: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0056a9f0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056a9f1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0056a9f2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0056a9f3: ret  */ FN_RET(0x0056a7a4); r_esp += 4; return;
L_0056a9f4:; BB(0x0056a9f4);
    /* 0056a9f4: mov eax, dword ptr [edi + 0x390] */ r_eax = R32((u32)(r_edi+0x390u));
    /* 0056a9fa: mov dword ptr [edi + 0x380], 0 */ W32((u32)(r_edi+0x380u), 0x0u);
    /* 0056aa04: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0056aa06: jne 0x56aa24 */ if (!fZ) goto L_0056aa24;
L_0056aa08:; BB(0x0056aa08);
    /* 0056aa08: movsx eax, word ptr [edi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32eu));
    /* 0056aa0f: cmp eax, 0xd */ {  u32 a = r_eax; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056aa12: je 0x56aa24 */ if (fZ) goto L_0056aa24;
L_0056aa14:; BB(0x0056aa14);
    /* 0056aa14: mov dword ptr [edi + 0x37c], 0xd */ W32((u32)(r_edi+0x37cu), 0xdu);
    /* 0056aa1e: mov dword ptr [edi + 0x388], eax */ W32((u32)(r_edi+0x388u), r_eax);
L_0056aa24:; BB(0x0056aa24);
    /* 0056aa24: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0056aa27: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0056aa28: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056aa29: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0056aa2a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0056aa2b: ret  */ FN_RET(0x0056a7a4); r_esp += 4; return;
L_0056aa2c:; BB(0x0056aa2c);
    /* 0056aa2c: mov dword ptr [edi + 0x384], 4 */ W32((u32)(r_edi+0x384u), 0x4u);
    /* 0056aa36: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0056aa39: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0056aa3a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056aa3b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0056aa3c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0056aa3d: ret  */ FN_RET(0x0056a7a4); r_esp += 4; return;
L_0056aa3e:; BB(0x0056aa3e);
    /* 0056aa3e: mov ebx, dword ptr [edi + 0x30] */ r_ebx = R32((u32)(r_edi+0x30u));
    /* 0056aa41: mov edx, dword ptr [edi + 0x458] */ r_edx = R32((u32)(r_edi+0x458u));
    /* 0056aa47: and ebx, 0xfbfbffff */ {  u32 a = r_ebx; u32 b = 0xfbfbffffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 0056aa4d: mov dword ptr [edi + 0x30], ebx */ W32((u32)(r_edi+0x30u), r_ebx);
    /* 0056aa50: mov eax, 0x28 */ r_eax = 0x28u;
    /* 0056aa55: cmp edx, 0x28 */ {  u32 a = r_edx; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056aa58: jg 0x56aa5c */ if ((!fZ&&fS==fO)) goto L_0056aa5c;
L_0056aa5a:; BB(0x0056aa5a);
    /* 0056aa5a: mov edx, eax */ r_edx = r_eax;
L_0056aa5c:; BB(0x0056aa5c);
    /* 0056aa5c: test ebx, 0x1000000 */ {  u32 a = r_ebx; u32 b = 0x1000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056aa62: mov dword ptr [edi + 0x38c], edx */ W32((u32)(r_edi+0x38cu), r_edx);
    /* 0056aa68: jne 0x56aaa0 */ if (!fZ) goto L_0056aaa0;
L_0056aa6a:; BB(0x0056aa6a);
    /* 0056aa6a: mov dword ptr [edi + 0x384], 1 */ W32((u32)(r_edi+0x384u), 0x1u);
    /* 0056aa74: mov eax, 2 */ r_eax = 0x2u;
    /* 0056aa79: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 0056aa80: mov ecx, edi */ r_ecx = r_edi;
    /* 0056aa82: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x56aa87u); f_007aa094();
    /* 0056aa87: mov eax, dword ptr [edi + 0x390] */ r_eax = R32((u32)(r_edi+0x390u));
    /* 0056aa8d: and eax, 0xfffbffff */ {  u32 a = r_eax; u32 b = 0xfffbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0056aa92: mov dword ptr [edi + 0x390], eax */ W32((u32)(r_edi+0x390u), r_eax);
    /* 0056aa98: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0056aa9b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0056aa9c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056aa9d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0056aa9e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0056aa9f: ret  */ FN_RET(0x0056a7a4); r_esp += 4; return;
L_0056aaa0:; BB(0x0056aaa0);
    /* 0056aaa0: mov edx, dword ptr [edi + 0x390] */ r_edx = R32((u32)(r_edi+0x390u));
    /* 0056aaa6: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0056aaa9: jne 0x56aac7 */ if (!fZ) goto L_0056aac7;
L_0056aaab:; BB(0x0056aaab);
    /* 0056aaab: movsx eax, word ptr [edi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32eu));
    /* 0056aab2: cmp eax, 0xd */ {  u32 a = r_eax; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056aab5: je 0x56aac7 */ if (fZ) goto L_0056aac7;
L_0056aab7:; BB(0x0056aab7);
    /* 0056aab7: mov dword ptr [edi + 0x37c], 0xd */ W32((u32)(r_edi+0x37cu), 0xdu);
    /* 0056aac1: mov dword ptr [edi + 0x388], eax */ W32((u32)(r_edi+0x388u), r_eax);
L_0056aac7:; BB(0x0056aac7);
    /* 0056aac7: and edx, 0xfffbffff */ {  u32 a = r_edx; u32 b = 0xfffbffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0056aacd: mov dword ptr [edi + 0x390], edx */ W32((u32)(r_edi+0x390u), r_edx);
    /* 0056aad3: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0056aad6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0056aad7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056aad8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0056aad9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0056aada: ret  */ FN_RET(0x0056a7a4); r_esp += 4; return;
}

void f_0056aadc(void) /* sub_56AADC */
{
    FN_ENTER(0x0056aadc);
    /* 0056aadc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0056aadd: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0056aae0: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0056aae2: mov eax, dword ptr [ebx + 0x384] */ r_eax = R32((u32)(r_ebx+0x384u));
    /* 0056aae8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0056aaea: je 0x56ad19 */ if (fZ) goto L_0056ad19;
L_0056aaf0:; BB(0x0056aaf0);
    /* 0056aaf0: jle 0x56ac42 */ if ((fZ||fS!=fO)) goto L_0056ac42;
L_0056aaf6:; BB(0x0056aaf6);
    /* 0056aaf6: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056aaf9: jg 0x56abef */ if ((!fZ&&fS==fO)) goto L_0056abef;
L_0056aaff:; BB(0x0056aaff);
    /* 0056aaff: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056ab02: jne 0x56ab2f */ if (!fZ) goto L_0056ab2f;
L_0056ab04:; BB(0x0056ab04);
    /* 0056ab04: fld dword ptr [ebx + 0xc0] */ FPUSH(R_F32((u32)(r_ebx+0xc0u)));
    /* 0056ab0a: fcomp dword ptr [0x926308] */ fx_compare(ST(0), R_F32((u32)(0x926308u))); FPOP();
    /* 0056ab10: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0056ab12: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0056ab13: jb 0x56abc1 */ if (fC) goto L_0056abc1;
L_0056ab19:; BB(0x0056ab19);
    /* 0056ab19: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0056ab1b: call 0x56a70c */ r_esp -= 4; W32(r_esp, 0x56ab20u); f_0056a70c();
    /* 0056ab20: mov dword ptr [ebx + 0x384], 2 */ W32((u32)(r_ebx+0x384u), 0x2u);
    /* 0056ab2a: jmp 0x56abc1 */ goto L_0056abc1;
L_0056ab2f:; BB(0x0056ab2f);
    /* 0056ab2f: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056ab32: jne 0x56abc1 */ if (!fZ) goto L_0056abc1;
L_0056ab38:; BB(0x0056ab38);
    /* 0056ab38: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x56ab3du); f_00807ac0();
    /* 0056ab3d: push 0x22d */ { u32 v = 0x22du; r_esp -= 4; W32(r_esp, v); }
    /* 0056ab42: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0056ab44: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x56ab49u); f_007879b8();
    /* 0056ab49: mov ecx, eax */ r_ecx = r_eax;
    /* 0056ab4b: lea eax, [ebx + 0x38] */ r_eax = (u32)(r_ebx+0x38u);
    /* 0056ab4e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0056ab50: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056ab51: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056ab52: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056ab53: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0056ab54: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056ab55: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x56ab5au); f_008144b0();
    /* 0056ab5a: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056ab5d: fld dword ptr [ebx + 0xc0] */ FPUSH(R_F32((u32)(r_ebx+0xc0u)));
    /* 0056ab63: fcomp dword ptr [0x92630c] */ fx_compare(ST(0), R_F32((u32)(0x92630cu))); FPOP();
    /* 0056ab69: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0056ab6b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0056ab6c: jb 0x56abc1 */ if (fC) goto L_0056abc1;
L_0056ab6e:; BB(0x0056ab6e);
    /* 0056ab6e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0056ab70: call 0x56a70c */ r_esp -= 4; W32(r_esp, 0x56ab75u); f_0056a70c();
    /* 0056ab75: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0056ab77: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x56ab7cu); f_007751b0();
    /* 0056ab7c: fild dword ptr [ebx + 0x3c8] */ FPUSH((long double)(i32)R32((u32)(r_ebx+0x3c8u)));
    /* 0056ab82: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0056ab84: mov ecx, dword ptr [ebx + 0x3c8] */ r_ecx = R32((u32)(r_ebx+0x3c8u));
    /* 0056ab8a: fnstcw word ptr [esp + 0xc] */ W16((u32)(r_esp+0xcu), fcw);
    /* 0056ab8e: movzx eax, word ptr [esp + 0xc] */ r_eax = (u32)R16((u32)(r_esp+0xcu));
    /* 0056ab93: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0056ab98: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0056ab9c: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 0056aba0: fistp dword ptr [esp + 0x1c] */ W32((u32)(r_esp+0x1cu), (u32)fx_int32(ST(0))); FPOP();
    /* 0056aba4: fldcw word ptr [esp + 0xc] */ fcw = R16((u32)(r_esp+0xcu));
    /* 0056aba8: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0056abac: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0056abad: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0056abad, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0056abad, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0056abaf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0056abb1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056abb2: call 0x56af98 */ r_esp -= 4; W32(r_esp, 0x56abb7u); f_0056af98();
    /* 0056abb7: mov dword ptr [ebx + 0x384], 3 */ W32((u32)(r_ebx+0x384u), 0x3u);
L_0056abc1:; BB(0x0056abc1);
    /* 0056abc1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0056abc3: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x56abc8u); f_007aa094();
    /* 0056abc8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056abca: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056abcc: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0056abce: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x56abd3u); f_00772b44();
    /* 0056abd3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0056abd5: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x56abdau); f_007b6880();
    /* 0056abda: mov edx, dword ptr [ebx + 0x38c] */ r_edx = R32((u32)(r_ebx+0x38cu));
    /* 0056abe0: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0056abe3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0056abe5: jle 0x56ac47 */ if ((fZ||fS!=fO)) goto L_0056ac47;
L_0056abe7:; BB(0x0056abe7);
    /* 0056abe7: mov dword ptr [ebx + 0x38c], edx */ W32((u32)(r_ebx+0x38cu), r_edx);
    /* 0056abed: jmp 0x56ac42 */ goto L_0056ac42;
L_0056abef:; BB(0x0056abef);
    /* 0056abef: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056abf2: jne 0x56ac42 */ if (!fZ) goto L_0056ac42;
L_0056abf4:; BB(0x0056abf4);
    /* 0056abf4: mov edx, dword ptr [ebx + 0x358] */ r_edx = R32((u32)(r_ebx+0x358u));
    /* 0056abfa: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0056abfd: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0056abff: push 0x42c80000 */ { u32 v = 0x42c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 0056ac04: push 0x42c80000 */ { u32 v = 0x42c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 0056ac09: push dword ptr [ebx + 0x3ec] */ { u32 v = R32((u32)(r_ebx+0x3ecu)); r_esp -= 4; W32(r_esp, v); }
    /* 0056ac0f: call 0x772054 */ r_esp -= 4; W32(r_esp, 0x56ac14u); f_00772054();
    /* 0056ac14: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0056ac16: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0056ac18: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x56ac1du); f_007aa094();
    /* 0056ac1d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056ac1f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056ac21: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0056ac23: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x56ac28u); f_00772b44();
    /* 0056ac28: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0056ac2a: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x56ac2fu); f_007b6880();
    /* 0056ac2f: mov eax, dword ptr [ebx + 0x38c] */ r_eax = R32((u32)(r_ebx+0x38cu));
    /* 0056ac35: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0056ac38: mov dword ptr [ebx + 0x38c], eax */ W32((u32)(r_ebx+0x38cu), r_eax);
    /* 0056ac3e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0056ac40: jle 0x56ac99 */ if ((fZ||fS!=fO)) goto L_0056ac99;
L_0056ac42:; BB(0x0056ac42);
    /* 0056ac42: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0056ac45: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0056ac46: ret  */ FN_RET(0x0056aadc); r_esp += 4; return;
L_0056ac47:; BB(0x0056ac47);
    /* 0056ac47: mov eax, dword ptr [ebx + 0x450] */ r_eax = R32((u32)(r_ebx+0x450u));
    /* 0056ac4d: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0056ac50: mov dword ptr [ebx + 0x450], eax */ W32((u32)(r_ebx+0x450u), r_eax);
    /* 0056ac56: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056ac59: jl 0x56ac7d */ if ((fS!=fO)) goto L_0056ac7d;
L_0056ac5b:; BB(0x0056ac5b);
    /* 0056ac5b: mov dword ptr [ebx + 0x38c], 0x2d */ W32((u32)(r_ebx+0x38cu), 0x2du);
    /* 0056ac65: mov eax, 1 */ r_eax = 0x1u;
    /* 0056ac6a: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
    /* 0056ac71: mov dword ptr [ebx + 0x384], 4 */ W32((u32)(r_ebx+0x384u), 0x4u);
    /* 0056ac7b: jmp 0x56ac42 */ goto L_0056ac42;
L_0056ac7d:; BB(0x0056ac7d);
    /* 0056ac7d: mov dword ptr [ebx + 0x384], 0 */ W32((u32)(r_ebx+0x384u), 0x0u);
    /* 0056ac87: mov dword ptr [ebx + 0x38c], edx */ W32((u32)(r_ebx+0x38cu), r_edx);
    /* 0056ac8d: mov dword ptr [ebx + 0xc0], 0 */ W32((u32)(r_ebx+0xc0u), 0x0u);
    /* 0056ac97: jmp 0x56ac42 */ goto L_0056ac42;
L_0056ac99:; BB(0x0056ac99);
    /* 0056ac99: mov eax, dword ptr [ebx + 0x390] */ r_eax = R32((u32)(r_ebx+0x390u));
    /* 0056ac9f: test eax, 0x80000 */ {  u32 a = r_eax; u32 b = 0x80000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056aca4: jne 0x56aced */ if (!fZ) goto L_0056aced;
L_0056aca6:; BB(0x0056aca6);
    /* 0056aca6: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0056aca8: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x56acadu); f_007751b0();
    /* 0056acad: fcomp dword ptr [ebx + 0x448] */ fx_compare(ST(0), R_F32((u32)(r_ebx+0x448u))); FPOP();
    /* 0056acb3: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0056acb5: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0056acb6: ja 0x56ace7 */ if ((!fC&&!fZ)) goto L_0056ace7;
L_0056acb8:; BB(0x0056acb8);
    /* 0056acb8: mov eax, dword ptr [ebx + 0x390] */ r_eax = R32((u32)(r_ebx+0x390u));
    /* 0056acbe: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0056acc0: jne 0x56ac42 */ if (!fZ) goto L_0056ac42;
L_0056acc2:; BB(0x0056acc2);
    /* 0056acc2: movsx eax, word ptr [ebx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32eu));
    /* 0056acc9: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056accc: je 0x56ac42 */ if (fZ) goto L_0056ac42;
L_0056acd2:; BB(0x0056acd2);
    /* 0056acd2: mov dword ptr [ebx + 0x37c], 0xc */ W32((u32)(r_ebx+0x37cu), 0xcu);
    /* 0056acdc: mov dword ptr [ebx + 0x388], eax */ W32((u32)(r_ebx+0x388u), r_eax);
    /* 0056ace2: jmp 0x56ac42 */ goto L_0056ac42;
L_0056ace7:; BB(0x0056ace7);
    /* 0056ace7: mov eax, dword ptr [ebx + 0x390] */ r_eax = R32((u32)(r_ebx+0x390u));
L_0056aced:; BB(0x0056aced);
    /* 0056aced: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0056acef: jne 0x56ac42 */ if (!fZ) goto L_0056ac42;
L_0056acf5:; BB(0x0056acf5);
    /* 0056acf5: movsx eax, word ptr [ebx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32eu));
    /* 0056acfc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056acfe: je 0x56ac42 */ if (fZ) goto L_0056ac42;
L_0056ad04:; BB(0x0056ad04);
    /* 0056ad04: mov dword ptr [ebx + 0x37c], 0 */ W32((u32)(r_ebx+0x37cu), 0x0u);
    /* 0056ad0e: mov dword ptr [ebx + 0x388], eax */ W32((u32)(r_ebx+0x388u), r_eax);
    /* 0056ad14: jmp 0x56ac42 */ goto L_0056ac42;
L_0056ad19:; BB(0x0056ad19);
    /* 0056ad19: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 0056ad1c: and eax, 0xfbfbffff */ {  u32 a = r_eax; u32 b = 0xfbfbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0056ad21: mov dword ptr [ebx + 0x30], eax */ W32((u32)(r_ebx+0x30u), r_eax);
    /* 0056ad24: and eax, 0x1000000 */ {  u32 a = r_eax; u32 b = 0x1000000u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0056ad29: je 0x56adee */ if (fZ) goto L_0056adee;
L_0056ad2f:; BB(0x0056ad2f);
    /* 0056ad2f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056ad31: jne 0x56adbb */ if (!fZ) goto L_0056adbb;
L_0056ad37:; BB(0x0056ad37);
    /* 0056ad37: mov eax, dword ptr [ebx + 0x390] */ r_eax = R32((u32)(r_ebx+0x390u));
    /* 0056ad3d: test eax, 0x80000 */ {  u32 a = r_eax; u32 b = 0x80000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056ad42: jne 0x56ad8f */ if (!fZ) goto L_0056ad8f;
L_0056ad44:; BB(0x0056ad44);
    /* 0056ad44: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0056ad46: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x56ad4bu); f_007751b0();
    /* 0056ad4b: fcomp dword ptr [ebx + 0x448] */ fx_compare(ST(0), R_F32((u32)(r_ebx+0x448u))); FPOP();
    /* 0056ad51: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0056ad53: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0056ad54: ja 0x56ad89 */ if ((!fC&&!fZ)) goto L_0056ad89;
L_0056ad56:; BB(0x0056ad56);
    /* 0056ad56: mov eax, dword ptr [ebx + 0x390] */ r_eax = R32((u32)(r_ebx+0x390u));
    /* 0056ad5c: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0056ad5e: jne 0x56af78 */ if (!fZ) goto L_0056af78;
L_0056ad64:; BB(0x0056ad64);
    /* 0056ad64: movsx edx, word ptr [ebx + 0x32e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x32eu));
    /* 0056ad6b: cmp edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056ad6e: je 0x56af78 */ if (fZ) goto L_0056af78;
L_0056ad74:; BB(0x0056ad74);
    /* 0056ad74: mov dword ptr [ebx + 0x37c], 0xc */ W32((u32)(r_ebx+0x37cu), 0xcu);
    /* 0056ad7e: mov dword ptr [ebx + 0x388], edx */ W32((u32)(r_ebx+0x388u), r_edx);
    /* 0056ad84: jmp 0x56af78 */ goto L_0056af78;
L_0056ad89:; BB(0x0056ad89);
    /* 0056ad89: mov eax, dword ptr [ebx + 0x390] */ r_eax = R32((u32)(r_ebx+0x390u));
L_0056ad8f:; BB(0x0056ad8f);
    /* 0056ad8f: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0056ad91: jne 0x56af78 */ if (!fZ) goto L_0056af78;
L_0056ad97:; BB(0x0056ad97);
    /* 0056ad97: movsx edx, word ptr [ebx + 0x32e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x32eu));
    /* 0056ad9e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056ada0: je 0x56af78 */ if (fZ) goto L_0056af78;
L_0056ada6:; BB(0x0056ada6);
    /* 0056ada6: mov dword ptr [ebx + 0x37c], 0 */ W32((u32)(r_ebx+0x37cu), 0x0u);
    /* 0056adb0: mov dword ptr [ebx + 0x388], edx */ W32((u32)(r_ebx+0x388u), r_edx);
    /* 0056adb6: jmp 0x56af78 */ goto L_0056af78;
L_0056adbb:; BB(0x0056adbb);
    /* 0056adbb: mov eax, dword ptr [ebx + 0x390] */ r_eax = R32((u32)(r_ebx+0x390u));
    /* 0056adc1: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0056adc3: jne 0x56af78 */ if (!fZ) goto L_0056af78;
L_0056adc9:; BB(0x0056adc9);
    /* 0056adc9: movsx edx, word ptr [ebx + 0x32e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x32eu));
    /* 0056add0: cmp edx, 0xd */ {  u32 a = r_edx; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056add3: je 0x56af78 */ if (fZ) goto L_0056af78;
L_0056add9:; BB(0x0056add9);
    /* 0056add9: mov dword ptr [ebx + 0x37c], 0xd */ W32((u32)(r_ebx+0x37cu), 0xdu);
    /* 0056ade3: mov dword ptr [ebx + 0x388], edx */ W32((u32)(r_ebx+0x388u), r_edx);
    /* 0056ade9: jmp 0x56af78 */ goto L_0056af78;
L_0056adee:; BB(0x0056adee);
    /* 0056adee: mov ecx, dword ptr [0xaae168] */ r_ecx = R32((u32)(0xaae168u));
    /* 0056adf4: mov dword ptr [ebx + 0x3c8], 0 */ W32((u32)(r_ebx+0x3c8u), 0x0u);
    /* 0056adfe: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0056ae00: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0056ae02: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0056ae04: jle 0x56af40 */ if ((fZ||fS!=fO)) goto L_0056af40;
L_0056ae0a:; BB(0x0056ae0a);
    /* 0056ae0a: mov dword ptr [esp + 0x28], esi */ W32((u32)(r_esp+0x28u), r_esi);
    /* 0056ae0e: mov esi, edx */ r_esi = r_edx;
    /* 0056ae10: mov dword ptr [esp + 0x24], edi */ W32((u32)(r_esp+0x24u), r_edi);
L_0056ae14:; BB(0x0056ae14);
    /* 0056ae14: mov edi, dword ptr [esi*4 + 0xaad720] */ r_edi = R32((u32)(r_esi*4+0xaad720u));
    /* 0056ae1b: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056ae1e: jge 0x56af2d */ if ((fS==fO)) goto L_0056af2d;
L_0056ae24:; BB(0x0056ae24);
    /* 0056ae24: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056ae26: je 0x56af2d */ if (fZ) goto L_0056af2d;
L_0056ae2c:; BB(0x0056ae2c);
    /* 0056ae2c: cmp edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056ae2e: je 0x56af2d */ if (fZ) goto L_0056af2d;
L_0056ae34:; BB(0x0056ae34);
    /* 0056ae34: mov edx, dword ptr [edi + 0x30] */ r_edx = R32((u32)(r_edi+0x30u));
    /* 0056ae37: test edx, 0x6000800 */ {  u32 a = r_edx; u32 b = 0x6000800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056ae3d: jne 0x56af2d */ if (!fZ) goto L_0056af2d;
L_0056ae43:; BB(0x0056ae43);
    /* 0056ae43: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0056ae46: mov eax, dword ptr [edi + 0x38] */ r_eax = R32((u32)(r_edi+0x38u));
    /* 0056ae49: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0056ae4c: mov eax, dword ptr [edi + 0x3c] */ r_eax = R32((u32)(r_edi+0x3cu));
    /* 0056ae4f: lea edx, [ebx + 0x38] */ r_edx = (u32)(r_ebx+0x38u);
    /* 0056ae52: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0056ae56: mov eax, dword ptr [edi + 0x40] */ r_eax = R32((u32)(r_edi+0x40u));
    /* 0056ae59: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0056ae5d: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x56ae62u); f_0082f9c4();
    /* 0056ae62: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0056ae65: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0056ae68: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0056ae6a: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 0056ae6e: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 0056ae72: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0056ae74: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0056ae76: fld dword ptr [ebx + 0x440] */ FPUSH(R_F32((u32)(r_ebx+0x440u)));
    /* 0056ae7c: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0056ae7e: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 0056ae80: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0056ae82: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0056ae84: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0056ae86: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0056ae87: jae 0x56ae9e */ if (!fC) goto L_0056ae9e;
L_0056ae89:; BB(0x0056ae89);
    /* 0056ae89: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0056ae8b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0056ae8d: mov ecx, dword ptr [0xaae168] */ r_ecx = R32((u32)(0xaae168u));
    /* 0056ae93: mov eax, dword ptr [ebx + 0x3c8] */ r_eax = R32((u32)(r_ebx+0x3c8u));
    /* 0056ae99: jmp 0x56af2d */ goto L_0056af2d;
L_0056ae9e:; BB(0x0056ae9e);
    /* 0056ae9e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0056aea0: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0056aea2: fmul qword ptr [0x926238] */ ST(0) = ST(0) * R_F64((u32)(0x926238u));
    /* 0056aea8: fdiv qword ptr [0x926230] */ ST(0) = ST(0) / R_F64((u32)(0x926230u));
    /* 0056aeae: fnstcw word ptr [esp + 0xc] */ W16((u32)(r_esp+0xcu), fcw);
    /* 0056aeb2: movzx eax, word ptr [esp + 0xc] */ r_eax = (u32)R16((u32)(r_esp+0xcu));
    /* 0056aeb7: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0056aebc: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0056aec0: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 0056aec4: fistp dword ptr [esp + 0x1c] */ W32((u32)(r_esp+0x1cu), (u32)fx_int32(ST(0))); FPOP();
    /* 0056aec8: fldcw word ptr [esp + 0xc] */ fcw = R16((u32)(r_esp+0xcu));
    /* 0056aecc: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0056aed0: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0056aed2: add eax, 0x4000 */ {  u32 a = r_eax; u32 b = 0x4000u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0056aed7: push dword ptr [ebx + 0x60] */ { u32 v = R32((u32)(r_ebx+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 0056aeda: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056aedb: call 0x7a9018 */ r_esp -= 4; W32(r_esp, 0x56aee0u); f_007a9018();
    /* 0056aee0: mov edx, eax */ r_edx = r_eax;
    /* 0056aee2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056aee5: mov eax, dword ptr [ebx + 0x43c] */ r_eax = R32((u32)(r_ebx+0x43cu));
    /* 0056aeeb: mov ecx, eax */ r_ecx = r_eax;
    /* 0056aeed: shr ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0056aef0: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0056aef2: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0056aef4: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056aef6: jle 0x56af06 */ if ((fZ||fS!=fO)) goto L_0056af06;
L_0056aef8:; BB(0x0056aef8);
    /* 0056aef8: mov ecx, dword ptr [0xaae168] */ r_ecx = R32((u32)(0xaae168u));
    /* 0056aefe: mov eax, dword ptr [ebx + 0x3c8] */ r_eax = R32((u32)(r_ebx+0x3c8u));
    /* 0056af04: jmp 0x56af2d */ goto L_0056af2d;
L_0056af06:; BB(0x0056af06);
    /* 0056af06: movzx ecx, word ptr [edi + 0x1c] */ r_ecx = (u32)R16((u32)(r_edi+0x1cu));
    /* 0056af0a: mov edi, dword ptr [ebx + 0x3c8] */ r_edi = R32((u32)(r_ebx+0x3c8u));
    /* 0056af10: lea eax, [edi + 1] */ r_eax = (u32)(r_edi+0x1u);
    /* 0056af13: mov dword ptr [ebx + 0x3c8], eax */ W32((u32)(r_ebx+0x3c8u), r_eax);
    /* 0056af19: mov word ptr [ebx + edi*2 + 0x3cc], cx */ W16((u32)(r_ebx+r_edi*2+0x3ccu), (u16)r_ecx);
    /* 0056af21: mov ecx, dword ptr [0xaae168] */ r_ecx = R32((u32)(0xaae168u));
    /* 0056af27: mov eax, dword ptr [ebx + 0x3c8] */ r_eax = R32((u32)(r_ebx+0x3c8u));
L_0056af2d:; BB(0x0056af2d);
    /* 0056af2d: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0056af30: cmp esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056af32: jl 0x56ae14 */ if ((fS!=fO)) goto L_0056ae14;
L_0056af38:; BB(0x0056af38);
    /* 0056af38: mov esi, dword ptr [esp + 0x28] */ r_esi = R32((u32)(r_esp+0x28u));
    /* 0056af3c: mov edi, dword ptr [esp + 0x24] */ r_edi = R32((u32)(r_esp+0x24u));
L_0056af40:; BB(0x0056af40);
    /* 0056af40: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0056af42: jle 0x56af88 */ if ((fZ||fS!=fO)) goto L_0056af88;
L_0056af44:; BB(0x0056af44);
    /* 0056af44: mov dword ptr [ebx + 0x384], 1 */ W32((u32)(r_ebx+0x384u), 0x1u);
    /* 0056af4e: mov eax, 3 */ r_eax = 0x3u;
    /* 0056af53: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
    /* 0056af5a: mov eax, dword ptr [ebx + 0x458] */ r_eax = R32((u32)(r_ebx+0x458u));
    /* 0056af60: mov edx, 0x14 */ r_edx = 0x14u;
    /* 0056af65: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056af68: jg 0x56af6c */ if ((!fZ&&fS==fO)) goto L_0056af6c;
L_0056af6a:; BB(0x0056af6a);
    /* 0056af6a: mov eax, edx */ r_eax = r_edx;
L_0056af6c:; BB(0x0056af6c);
    /* 0056af6c: mov dword ptr [ebx + 0x38c], eax */ W32((u32)(r_ebx+0x38cu), r_eax);
    /* 0056af72: mov eax, dword ptr [ebx + 0x390] */ r_eax = R32((u32)(r_ebx+0x390u));
L_0056af78:; BB(0x0056af78);
    /* 0056af78: and eax, 0xfffbffff */ {  u32 a = r_eax; u32 b = 0xfffbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0056af7d: mov dword ptr [ebx + 0x390], eax */ W32((u32)(r_ebx+0x390u), r_eax);
    /* 0056af83: jmp 0x56ac42 */ goto L_0056ac42;
L_0056af88:; BB(0x0056af88);
    /* 0056af88: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 0056af8b: and eax, 0x1000000 */ {  u32 a = r_eax; u32 b = 0x1000000u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0056af90: jmp 0x56ad2f */ goto L_0056ad2f;
}

void f_0056af98(void) /* sub_56AF98 */
{
    FN_ENTER(0x0056af98);
    /* 0056af98: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056af99: mov ebp, esp */ r_ebp = r_esp;
    /* 0056af9b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0056af9d: push 0x8d69b8 */ { u32 v = 0x8d69b8u; r_esp -= 4; W32(r_esp, v); }
    /* 0056afa2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0056afa8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056afa9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0056afb0: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0056afb3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0056afb6: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 0056afb9: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 0056afbc: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 0056afbf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0056afc2: movzx edx, word ptr [ecx + eax*2 + 0x3cc] */ r_edx = (u32)R16((u32)(r_ecx+r_eax*2+0x3ccu));
    /* 0056afca: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0056afcd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056afce: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x56afd3u); f_007b4d18();
    /* 0056afd3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0056afd4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0056afd6: je 0x56b083 */ if (fZ) goto L_0056b083;
L_0056afdc:; BB(0x0056afdc);
    /* 0056afdc: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0056afdf: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 0056afe6: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0056afe8: je 0x56aff1 */ if (fZ) goto L_0056aff1;
L_0056afea:; BB(0x0056afea);
    /* 0056afea: mov edx, 0xffffe000 */ r_edx = 0xffffe000u;
    /* 0056afef: jmp 0x56aff6 */ goto L_0056aff6;
L_0056aff1:; BB(0x0056aff1);
    /* 0056aff1: mov edx, 0x2000 */ r_edx = 0x2000u;
L_0056aff6:; BB(0x0056aff6);
    /* 0056aff6: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0056aff9: add edx, dword ptr [eax + 0x60] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0x60u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0056affc: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 0056afff: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0056b001: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 0056b004: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 0056b007: push 0x10c */ { u32 v = 0x10cu; r_esp -= 4; W32(r_esp, v); }
    /* 0056b00c: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x56b011u); f_005caba4();
    /* 0056b011: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0056b014: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056b017: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0056b01a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0056b01c: je 0x56b083 */ if (fZ) goto L_0056b083;
L_0056b01e:; BB(0x0056b01e);
    /* 0056b01e: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 0056b025: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0056b02c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0056b02f: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x56b034u); f_007751b0();
    /* 0056b034: mov ecx, dword ptr [0xa73d9c] */ r_ecx = R32((u32)(0xa73d9cu));
    /* 0056b03a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0056b03d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0056b040: movzx esi, word ptr [edx + eax*2 + 0x3cc] */ r_esi = (u32)R16((u32)(r_edx+r_eax*2+0x3ccu));
    /* 0056b048: lea ebx, [edx + 0x3b0] */ r_ebx = (u32)(r_edx+0x3b0u);
    /* 0056b04e: lea edi, [eax + eax] */ r_edi = (u32)(r_eax+r_eax);
    /* 0056b051: add edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0056b053: fcomp dword ptr [ecx + 0x14] */ fx_compare(ST(0), R_F32((u32)(r_ecx+0x14u))); FPOP();
    /* 0056b056: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0056b058: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0056b05d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0056b05e: mov eax, 0 */ r_eax = 0x0u;
    /* 0056b063: jbe 0x56b067 */ if ((fC||fZ)) goto L_0056b067;
L_0056b065:; BB(0x0056b065);
    /* 0056b065: mov ecx, eax */ r_ecx = r_eax;
L_0056b067:; BB(0x0056b067);
    /* 0056b067: movzx eax, word ptr [edx + 0x1c] */ r_eax = (u32)R16((u32)(r_edx+0x1cu));
    /* 0056b06b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056b06c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056b06d: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0056b070: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0056b071: lea eax, [ebp - 0x38] */ r_eax = (u32)(r_ebp+0xffffffc8u);
    /* 0056b074: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056b075: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0056b076: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0056b077: call 0x56cca4 */ r_esp -= 4; W32(r_esp, 0x56b07cu); f_0056cca4();
    /* 0056b07c: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_0056b083:; BB(0x0056b083);
    /* 0056b083: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0056b086: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0056b089: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0056b08c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0056b08f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0056b096: mov esp, ebp */ r_esp = r_ebp;
    /* 0056b098: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056b099: ret 4 */ FN_RET(0x0056af98); r_esp += 8; return;
}

