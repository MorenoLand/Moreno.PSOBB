#include "protos.h"

void f_00556240(void) /* sub_556240 */
{
    FN_ENTER(0x00556240);
    /* 00556240: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00556241: mov edi, ecx */ r_edi = r_ecx;
    /* 00556243: mov eax, dword ptr [edi + 0x384] */ r_eax = R32((u32)(r_edi+0x384u));
    /* 00556249: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055624b: je 0x556276 */ if (fZ) goto L_00556276;
L_0055624d:; BB(0x0055624d);
    /* 0055624d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00556250: je 0x5562aa */ if (fZ) goto L_005562aa;
L_00556252:; BB(0x00556252);
    /* 00556252: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00556255: jne 0x5562e8 */ if (!fZ) goto L_005562e8;
L_0055625b:; BB(0x0055625b);
    /* 0055625b: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0055625e: movzx edx, word ptr [edi + 0x342] */ r_edx = (u32)R16((u32)(r_edi+0x342u));
    /* 00556265: and eax, 0xfffbffff */ {  u32 a = r_eax; u32 b = 0xfffbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0055626a: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0055626d: mov word ptr [edi + 0x344], dx */ W16((u32)(r_edi+0x344u), (u16)r_edx);
    /* 00556274: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00556275: ret  */ FN_RET(0x00556240); r_esp += 4; return;
L_00556276:; BB(0x00556276);
    /* 00556276: mov edx, dword ptr [edi + 0x390] */ r_edx = R32((u32)(r_edi+0x390u));
    /* 0055627c: test edx, 0x1000000 */ {  u32 a = r_edx; u32 b = 0x1000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00556282: je 0x556288 */ if (fZ) goto L_00556288;
L_00556284:; BB(0x00556284);
    /* 00556284: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00556286: jmp 0x55628d */ goto L_0055628d;
L_00556288:; BB(0x00556288);
    /* 00556288: mov eax, 5 */ r_eax = 0x5u;
L_0055628d:; BB(0x0055628d);
    /* 0055628d: mov dword ptr [edi + 0x384], 1 */ W32((u32)(r_edi+0x384u), 0x1u);
    /* 00556297: or edx, 0x800000 */ {  u32 a = r_edx; u32 b = 0x800000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0055629d: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 005562a4: mov dword ptr [edi + 0x390], edx */ W32((u32)(r_edi+0x390u), r_edx);
L_005562aa:; BB(0x005562aa);
    /* 005562aa: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 005562ad: test eax, 0x800000 */ {  u32 a = r_eax; u32 b = 0x800000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005562b2: jne 0x5562c2 */ if (!fZ) goto L_005562c2;
L_005562b4:; BB(0x005562b4);
    /* 005562b4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005562b6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005562b8: mov ecx, edi */ r_ecx = r_edi;
    /* 005562ba: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x5562bfu); f_00772b44();
    /* 005562bf: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
L_005562c2:; BB(0x005562c2);
    /* 005562c2: test eax, 0x40000 */ {  u32 a = r_eax; u32 b = 0x40000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005562c7: je 0x5562e8 */ if (fZ) goto L_005562e8;
L_005562c9:; BB(0x005562c9);
    /* 005562c9: movsx edx, word ptr [edi + 0x344] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x344u));
    /* 005562d0: lea eax, [edx - 1] */ r_eax = (u32)(r_edx+0xffffffffu);
    /* 005562d3: mov word ptr [edi + 0x344], ax */ W16((u32)(r_edi+0x344u), (u16)r_eax);
    /* 005562da: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005562dc: jge 0x5562e8 */ if ((fS==fO)) goto L_005562e8;
L_005562de:; BB(0x005562de);
    /* 005562de: mov dword ptr [edi + 0x384], 0xffffffff */ W32((u32)(r_edi+0x384u), 0xffffffffu);
L_005562e8:; BB(0x005562e8);
    /* 005562e8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005562e9: ret  */ FN_RET(0x00556240); r_esp += 4; return;
}

void f_005562ec(void) /* sub_5562EC */
{
    FN_ENTER(0x005562ec);
    /* 005562ec: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005562ed: mov edi, ecx */ r_edi = r_ecx;
    /* 005562ef: movsx eax, word ptr [edi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32eu));
    /* 005562f6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005562f8: je 0x55641b */ if (fZ) goto L_0055641b;
L_005562fe:; BB(0x005562fe);
    /* 005562fe: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00556301: je 0x55641b */ if (fZ) goto L_0055641b;
L_00556307:; BB(0x00556307);
    /* 00556307: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0055630a: jne 0x55645f */ if (!fZ) goto L_0055645f;
L_00556310:; BB(0x00556310);
    /* 00556310: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 00556312: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00556314: mov ecx, edi */ r_ecx = r_edi;
    /* 00556316: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x556319u); call_ind(t); }
    /* 00556319: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055631b: je 0x556334 */ if (fZ) goto L_00556334;
L_0055631d:; BB(0x0055631d);
    /* 0055631d: fld dword ptr [0x924c18] */ FPUSH(R_F32((u32)(0x924c18u)));
    /* 00556323: fadd dword ptr [edi + 0x3d8] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x3d8u));
    /* 00556329: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0055632a: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0055632d: mov ecx, edi */ r_ecx = r_edi;
    /* 0055632f: call 0x52ccd8 */ r_esp -= 4; W32(r_esp, 0x556334u); f_0052ccd8();
L_00556334:; BB(0x00556334);
    /* 00556334: mov ecx, edi */ r_ecx = r_edi;
    /* 00556336: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x55633bu); f_00770738();
    /* 0055633b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fO = 0; }
    /* 0055633d: je 0x5564f5 */ if (fZ) goto L_005564f5;
L_00556343:; BB(0x00556343);
    /* 00556343: fld dword ptr [edi + 0x3ac] */ FPUSH(R_F32((u32)(r_edi+0x3acu)));
    /* 00556349: fcomp dword ptr [0x924c08] */ fx_compare(ST(0), R_F32((u32)(0x924c08u))); FPOP();
    /* 0055634f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00556351: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00556352: jb 0x55638e */ if (fC) goto L_0055638e;
L_00556354:; BB(0x00556354);
    /* 00556354: fld dword ptr [edi + 0x35c] */ FPUSH(R_F32((u32)(r_edi+0x35cu)));
    /* 0055635a: fcomp dword ptr [0x924c10] */ fx_compare(ST(0), R_F32((u32)(0x924c10u))); FPOP();
    /* 00556360: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00556362: mov dword ptr [edi + 0x3ac], 0 */ W32((u32)(r_edi+0x3acu), 0x0u);
    /* 0055636c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0055636d: jb 0x55645f */ if (fC) goto L_0055645f;
L_00556373:; BB(0x00556373);
    /* 00556373: mov ecx, edi */ r_ecx = r_edi;
    /* 00556375: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x55637au); f_007751b0();
    /* 0055637a: fcomp dword ptr [0x924c04] */ fx_compare(ST(0), R_F32((u32)(0x924c04u))); FPOP();
    /* 00556380: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00556382: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00556383: jb 0x556461 */ if (fC) goto L_00556461;
L_00556389:; BB(0x00556389);
    /* 00556389: jmp 0x55645f */ goto L_0055645f;
L_0055638e:; BB(0x0055638e);
    /* 0055638e: mov ecx, edi */ r_ecx = r_edi;
    /* 00556390: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x556395u); f_00770738();
    /* 00556395: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00556397: je 0x5564cf */ if (fZ) goto L_005564cf;
L_0055639d:; BB(0x0055639d);
    /* 0055639d: lea edx, [edi + 0x38] */ r_edx = (u32)(r_edi+0x38u);
    /* 005563a0: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005563a3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005563a4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005563a5: call 0x78ea50 */ r_esp -= 4; W32(r_esp, 0x5563aau); f_0078ea50();
    /* 005563aa: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 005563ad: mov edx, dword ptr [edi + 0x31c] */ r_edx = R32((u32)(r_edi+0x31cu));
    /* 005563b3: fld dword ptr [edx + 8] */ FPUSH(R_F32((u32)(r_edx+0x8u)));
    /* 005563b6: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 005563b8: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 005563ba: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005563bc: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005563bd: jbe 0x55645f */ if ((fC||fZ)) goto L_0055645f;
L_005563c3:; BB(0x005563c3);
    /* 005563c3: movsx edx, word ptr [edi + 0x398] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x398u));
    /* 005563ca: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005563cd: movsx eax, dx */ r_eax = (u32)(i32)(i16)(u16)r_edx;
    /* 005563d0: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005563d3: jg 0x5563de */ if ((!fZ&&fS==fO)) goto L_005563de;
L_005563d5:; BB(0x005563d5);
    /* 005563d5: mov word ptr [edi + 0x398], dx */ W16((u32)(r_edi+0x398u), (u16)r_edx);
    /* 005563dc: jmp 0x5563f3 */ goto L_005563f3;
L_005563de:; BB(0x005563de);
    /* 005563de: push 0x42200000 */ { u32 v = 0x42200000u; r_esp -= 4; W32(r_esp, v); }
    /* 005563e3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005563e5: mov word ptr [edi + 0x398], ax */ W16((u32)(r_edi+0x398u), (u16)r_eax);
    /* 005563ec: mov ecx, edi */ r_ecx = r_edi;
    /* 005563ee: call 0x52ce88 */ r_esp -= 4; W32(r_esp, 0x5563f3u); f_0052ce88();
L_005563f3:; BB(0x005563f3);
    /* 005563f3: mov eax, dword ptr [edi + 0x390] */ r_eax = R32((u32)(r_edi+0x390u));
    /* 005563f9: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005563fb: jne 0x55645f */ if (!fZ) goto L_0055645f;
L_005563fd:; BB(0x005563fd);
    /* 005563fd: movsx eax, word ptr [edi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32eu));
    /* 00556404: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00556407: je 0x55645f */ if (fZ) goto L_0055645f;
L_00556409:; BB(0x00556409);
    /* 00556409: mov dword ptr [edi + 0x37c], 2 */ W32((u32)(r_edi+0x37cu), 0x2u);
    /* 00556413: mov dword ptr [edi + 0x388], eax */ W32((u32)(r_edi+0x388u), r_eax);
    /* 00556419: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0055641a: ret  */ FN_RET(0x005562ec); r_esp += 4; return;
L_0055641b:; BB(0x0055641b);
    /* 0055641b: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 0055641d: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0055641f: mov ecx, edi */ r_ecx = r_edi;
    /* 00556421: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x556424u); call_ind(t); }
    /* 00556424: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00556426: je 0x55645f */ if (fZ) goto L_0055645f;
L_00556428:; BB(0x00556428);
    /* 00556428: push dword ptr [edi + 0x3d8] */ { u32 v = R32((u32)(r_edi+0x3d8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0055642e: mov ecx, edi */ r_ecx = r_edi;
    /* 00556430: call 0x52ccd8 */ r_esp -= 4; W32(r_esp, 0x556435u); f_0052ccd8();
    /* 00556435: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00556437: je 0x55645f */ if (fZ) goto L_0055645f;
L_00556439:; BB(0x00556439);
    /* 00556439: mov eax, dword ptr [edi + 0x390] */ r_eax = R32((u32)(r_edi+0x390u));
    /* 0055643f: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00556441: jne 0x55645f */ if (!fZ) goto L_0055645f;
L_00556443:; BB(0x00556443);
    /* 00556443: movsx eax, word ptr [edi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32eu));
    /* 0055644a: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0055644d: je 0x55645f */ if (fZ) goto L_0055645f;
L_0055644f:; BB(0x0055644f);
    /* 0055644f: mov dword ptr [edi + 0x37c], 1 */ W32((u32)(r_edi+0x37cu), 0x1u);
    /* 00556459: mov dword ptr [edi + 0x388], eax */ W32((u32)(r_edi+0x388u), r_eax);
L_0055645f:; BB(0x0055645f);
    /* 0055645f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00556460: ret  */ FN_RET(0x005562ec); r_esp += 4; return;
L_00556461:; BB(0x00556461);
    /* 00556461: push 0x43160000 */ { u32 v = 0x43160000u; r_esp -= 4; W32(r_esp, v); }
    /* 00556466: mov ecx, edi */ r_ecx = r_edi;
    /* 00556468: call 0x52d05c */ r_esp -= 4; W32(r_esp, 0x55646du); f_0052d05c();
    /* 0055646d: mov word ptr [edi + 0x340], ax */ W16((u32)(r_edi+0x340u), (u16)r_eax);
    /* 00556474: movzx edx, ax */ r_edx = (u32)(u16)r_eax;
    /* 00556477: cmp edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055647d: je 0x5564b6 */ if (fZ) goto L_005564b6;
L_0055647f:; BB(0x0055647f);
    /* 0055647f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00556480: call 0x578c74 */ r_esp -= 4; W32(r_esp, 0x556485u); f_00578c74();
    /* 00556485: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00556486: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00556487: mov ecx, edi */ r_ecx = r_edi;
    /* 00556489: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x55648eu); f_007706b0();
    /* 0055648e: mov eax, dword ptr [edi + 0x390] */ r_eax = R32((u32)(r_edi+0x390u));
    /* 00556494: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00556496: jne 0x55645f */ if (!fZ) goto L_0055645f;
L_00556498:; BB(0x00556498);
    /* 00556498: movsx eax, word ptr [edi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32eu));
    /* 0055649f: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005564a2: je 0x55645f */ if (fZ) goto L_0055645f;
L_005564a4:; BB(0x005564a4);
    /* 005564a4: mov dword ptr [edi + 0x37c], 9 */ W32((u32)(r_edi+0x37cu), 0x9u);
    /* 005564ae: mov dword ptr [edi + 0x388], eax */ W32((u32)(r_edi+0x388u), r_eax);
    /* 005564b4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005564b5: ret  */ FN_RET(0x005562ec); r_esp += 4; return;
L_005564b6:; BB(0x005564b6);
    /* 005564b6: fld dword ptr [0x924c18] */ FPUSH(R_F32((u32)(0x924c18u)));
    /* 005564bc: fadd dword ptr [edi + 0x3d8] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x3d8u));
    /* 005564c2: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005564c3: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005564c6: mov ecx, edi */ r_ecx = r_edi;
    /* 005564c8: call 0x52ccd8 */ r_esp -= 4; W32(r_esp, 0x5564cdu); f_0052ccd8();
    /* 005564cd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005564ce: ret  */ FN_RET(0x005562ec); r_esp += 4; return;
L_005564cf:; BB(0x005564cf);
    /* 005564cf: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 005564d1: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005564d3: mov ecx, edi */ r_ecx = r_edi;
    /* 005564d5: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x5564d8u); call_ind(t); }
    /* 005564d8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005564da: je 0x55645f */ if (fZ) goto L_0055645f;
L_005564dc:; BB(0x005564dc);
    /* 005564dc: fld dword ptr [0x924c18] */ FPUSH(R_F32((u32)(0x924c18u)));
    /* 005564e2: fadd dword ptr [edi + 0x3d8] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x3d8u));
    /* 005564e8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005564e9: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005564ec: mov ecx, edi */ r_ecx = r_edi;
    /* 005564ee: call 0x52ccd8 */ r_esp -= 4; W32(r_esp, 0x5564f3u); f_0052ccd8();
    /* 005564f3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005564f4: ret  */ FN_RET(0x005562ec); r_esp += 4; return;
L_005564f5:; BB(0x005564f5);
    /* 005564f5: mov eax, dword ptr [edi + 0x390] */ r_eax = R32((u32)(r_edi+0x390u));
    /* 005564fb: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005564fd: jne 0x55645f */ if (!fZ) goto L_0055645f;
L_00556503:; BB(0x00556503);
    /* 00556503: movsx eax, word ptr [edi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32eu));
    /* 0055650a: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0055650d: je 0x55645f */ if (fZ) goto L_0055645f;
L_00556513:; BB(0x00556513);
    /* 00556513: mov dword ptr [edi + 0x37c], 8 */ W32((u32)(r_edi+0x37cu), 0x8u);
    /* 0055651d: mov dword ptr [edi + 0x388], eax */ W32((u32)(r_edi+0x388u), r_eax);
    /* 00556523: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00556524: ret  */ FN_RET(0x005562ec); r_esp += 4; return;
}

void f_00556528(void)
{
    FN_ENTER(0x00556528);
    /* 00556528: mov ecx, dword ptr [0xa73b20] */ r_ecx = R32((u32)(0xa73b20u));
    /* 0055652e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00556530: je 0x556544 */ if (fZ) goto L_00556544;
L_00556532:; BB(0x00556532);
    /* 00556532: je 0x55653a */ if (fZ) goto L_0055653a;
L_00556534:; BB(0x00556534);
    /* 00556534: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00556536: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00556538: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x55653au); call_ind(t); }
L_0055653a:; BB(0x0055653a);
    /* 0055653a: mov dword ptr [0xa73b20], 0 */ W32((u32)(0xa73b20u), 0x0u);
L_00556544:; BB(0x00556544);
    /* 00556544: mov ecx, dword ptr [0xa73b18] */ r_ecx = R32((u32)(0xa73b18u));
    /* 0055654a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055654c: je 0x556561 */ if (fZ) goto L_00556561;
L_0055654e:; BB(0x0055654e);
    /* 0055654e: je 0x556557 */ if (fZ) goto L_00556557;
L_00556550:; BB(0x00556550);
    /* 00556550: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00556552: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x556557u); f_004066a8();
L_00556557:; BB(0x00556557);
    /* 00556557: mov dword ptr [0xa73b18], 0 */ W32((u32)(0xa73b18u), 0x0u);
L_00556561:; BB(0x00556561);
    /* 00556561: mov eax, dword ptr [0xa73b1c] */ r_eax = R32((u32)(0xa73b1cu));
    /* 00556566: mov dword ptr [0xa73b14], 0 */ W32((u32)(0xa73b14u), 0x0u);
    /* 00556570: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00556572: je 0x556585 */ if (fZ) goto L_00556585;
L_00556574:; BB(0x00556574);
    /* 00556574: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00556575: call 0x800b5c */ r_esp -= 4; W32(r_esp, 0x55657au); f_00800b5c();
    /* 0055657a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0055657b: mov dword ptr [0xa73b1c], 0 */ W32((u32)(0xa73b1cu), 0x0u);
L_00556585:; BB(0x00556585);
    /* 00556585: call 0x546bb0 */ r_esp -= 4; W32(r_esp, 0x55658au); f_00546bb0();
    /* 0055658a: mov ecx, dword ptr [0xa73ac8] */ r_ecx = R32((u32)(0xa73ac8u));
    /* 00556590: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00556592: je 0x5565a7 */ if (fZ) goto L_005565a7;
L_00556594:; BB(0x00556594);
    /* 00556594: je 0x55659d */ if (fZ) goto L_0055659d;
L_00556596:; BB(0x00556596);
    /* 00556596: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00556598: call 0x45a950 */ r_esp -= 4; W32(r_esp, 0x55659du); f_0045a950();
L_0055659d:; BB(0x0055659d);
    /* 0055659d: mov dword ptr [0xa73ac8], 0 */ W32((u32)(0xa73ac8u), 0x0u);
L_005565a7:; BB(0x005565a7);
    /* 005565a7: mov ecx, dword ptr [0xa73ad0] */ r_ecx = R32((u32)(0xa73ad0u));
    /* 005565ad: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005565af: je 0x5565c4 */ if (fZ) goto L_005565c4;
L_005565b1:; BB(0x005565b1);
    /* 005565b1: je 0x5565ba */ if (fZ) goto L_005565ba;
L_005565b3:; BB(0x005565b3);
    /* 005565b3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005565b5: call 0x45a950 */ r_esp -= 4; W32(r_esp, 0x5565bau); f_0045a950();
L_005565ba:; BB(0x005565ba);
    /* 005565ba: mov dword ptr [0xa73ad0], 0 */ W32((u32)(0xa73ad0u), 0x0u);
L_005565c4:; BB(0x005565c4);
    /* 005565c4: mov ecx, dword ptr [0xa73acc] */ r_ecx = R32((u32)(0xa73accu));
    /* 005565ca: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005565cc: je 0x5565e1 */ if (fZ) goto L_005565e1;
L_005565ce:; BB(0x005565ce);
    /* 005565ce: je 0x5565d7 */ if (fZ) goto L_005565d7;
L_005565d0:; BB(0x005565d0);
    /* 005565d0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005565d2: call 0x45a950 */ r_esp -= 4; W32(r_esp, 0x5565d7u); f_0045a950();
L_005565d7:; BB(0x005565d7);
    /* 005565d7: mov dword ptr [0xa73acc], 0 */ W32((u32)(0xa73accu), 0x0u);
L_005565e1:; BB(0x005565e1);
    /* 005565e1: mov ecx, dword ptr [0xa73ad4] */ r_ecx = R32((u32)(0xa73ad4u));
    /* 005565e7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005565e9: je 0x5565fe */ if (fZ) goto L_005565fe;
L_005565eb:; BB(0x005565eb);
    /* 005565eb: je 0x5565f4 */ if (fZ) goto L_005565f4;
L_005565ed:; BB(0x005565ed);
    /* 005565ed: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005565ef: call 0x45a950 */ r_esp -= 4; W32(r_esp, 0x5565f4u); f_0045a950();
L_005565f4:; BB(0x005565f4);
    /* 005565f4: mov dword ptr [0xa73ad4], 0 */ W32((u32)(0xa73ad4u), 0x0u);
L_005565fe:; BB(0x005565fe);
    /* 005565fe: ret  */ FN_RET(0x00556528); r_esp += 4; return;
}

void f_00556600(void)
{
    FN_ENTER(0x00556600);
    /* 00556600: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00556601: mov ebp, esp */ r_ebp = r_esp;
    /* 00556603: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00556605: push 0x8d6242 */ { u32 v = 0x8d6242u; r_esp -= 4; W32(r_esp, v); }
    /* 0055660a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00556610: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00556611: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00556618: sub esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0055661b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0055661e: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 00556621: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 00556624: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 00556627: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00556629: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
    /* 00556630: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x556635u); f_005caba4();
    /* 00556635: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00556638: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055663b: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 0055663e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00556640: je 0x556921 */ if (fZ) goto L_00556921;
L_00556646:; BB(0x00556646);
    /* 00556646: mov dword ptr [ebp - 0x4c], 1 */ W32((u32)(r_ebp+0xffffffb4u), 0x1u);
    /* 0055664d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00556654: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 0055665a: mov ecx, eax */ r_ecx = r_eax;
    /* 0055665c: call 0x787a4c */ r_esp -= 4; W32(r_esp, 0x556661u); f_00787a4c();
    /* 00556661: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
    /* 00556668: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0055666f: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
    /* 00556676: push 0x424 */ { u32 v = 0x424u; r_esp -= 4; W32(r_esp, v); }
    /* 0055667b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x556680u); f_005caba4();
    /* 00556680: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00556683: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00556686: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00556689: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055668b: je 0x55691a */ if (fZ) goto L_0055691a;
L_00556691:; BB(0x00556691);
    /* 00556691: mov dword ptr [ebp - 0x44], 1 */ W32((u32)(r_ebp+0xffffffbcu), 0x1u);
    /* 00556698: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0055669f: mov ecx, eax */ r_ecx = r_eax;
    /* 005566a1: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005566a4: mov dword ptr [ebp - 0x58], ecx */ W32((u32)(r_ebp+0xffffffa8u), r_ecx);
    /* 005566a7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005566a8: call 0x52c3fc */ r_esp -= 4; W32(r_esp, 0x5566adu); f_0052c3fc();
    /* 005566ad: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 005566b4: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005566b7: mov dword ptr [eax], 0xb04760 */ W32((u32)(r_eax), 0xb04760u);
    /* 005566bd: lea ecx, [eax + 0x3b8] */ r_ecx = (u32)(r_eax+0x3b8u);
    /* 005566c3: call 0x576a48 */ r_esp -= 4; W32(r_esp, 0x5566c8u); f_00576a48();
    /* 005566c8: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 005566cf: mov eax, dword ptr [0x9bdd3c] */ r_eax = R32((u32)(0x9bdd3cu));
    /* 005566d4: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005566d7: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005566da: mov ebx, dword ptr [ecx] */ r_ebx = R32((u32)(r_ecx));
    /* 005566dc: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 005566df: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005566e0: call dword ptr [ebx + 0x14c] */ { u32 t = R32((u32)(r_ebx+0x14cu)); r_esp -= 4; W32(r_esp, 0x5566e6u); call_ind(t); }
    /* 005566e6: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 005566e9: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 005566ec: mov ecx, dword ptr [esi + 0x38] */ r_ecx = R32((u32)(r_esi+0x38u));
    /* 005566ef: mov eax, dword ptr [esi + 0x3c] */ r_eax = R32((u32)(r_esi+0x3cu));
    /* 005566f2: mov edx, dword ptr [esi + 0x40] */ r_edx = R32((u32)(r_esi+0x40u));
    /* 005566f5: mov dword ptr [esi + 0x44], ecx */ W32((u32)(r_esi+0x44u), r_ecx);
    /* 005566f8: mov dword ptr [esi + 0x48], eax */ W32((u32)(r_esi+0x48u), r_eax);
    /* 005566fb: mov dword ptr [esi + 0x4c], edx */ W32((u32)(r_esi+0x4cu), r_edx);
    /* 005566fe: mov dword ptr [esi + 0x2a4], ecx */ W32((u32)(r_esi+0x2a4u), r_ecx);
    /* 00556704: mov dword ptr [esi + 0x2a8], eax */ W32((u32)(r_esi+0x2a8u), r_eax);
    /* 0055670a: mov dword ptr [esi + 0x2ac], edx */ W32((u32)(r_esi+0x2acu), r_edx);
    /* 00556710: mov dword ptr [esi + 0x298], ecx */ W32((u32)(r_esi+0x298u), r_ecx);
    /* 00556716: mov ecx, dword ptr [0xa73b18] */ r_ecx = R32((u32)(0xa73b18u));
    /* 0055671c: mov dword ptr [esi + 0x29c], eax */ W32((u32)(r_esi+0x29cu), r_eax);
    /* 00556722: mov dword ptr [esi + 0x2a0], edx */ W32((u32)(r_esi+0x2a0u), r_edx);
    /* 00556728: mov ebx, dword ptr [ecx + 0x430] */ r_ebx = R32((u32)(r_ecx+0x430u));
    /* 0055672e: mov dword ptr [esi + 0xdc], ebx */ W32((u32)(r_esi+0xdcu), r_ebx);
    /* 00556734: movsx eax, word ptr [edi + 0x3c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x3cu));
    /* 00556738: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055673a: je 0x556743 */ if (fZ) goto L_00556743;
L_0055673c:; BB(0x0055673c);
    /* 0055673c: mov edx, 1 */ r_edx = 0x1u;
    /* 00556741: jmp 0x556745 */ goto L_00556745;
L_00556743:; BB(0x00556743);
    /* 00556743: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_00556745:; BB(0x00556745);
    /* 00556745: mov eax, esi */ r_eax = r_esi;
    /* 00556747: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 0055674a: mov dword ptr [eax + 0x370], edx */ W32((u32)(r_eax+0x370u), r_edx);
    /* 00556750: movsx esi, word ptr [ebx + 0x3e] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebx+0x3eu));
    /* 00556754: mov dword ptr [eax + 0x374], esi */ W32((u32)(r_eax+0x374u), r_esi);
    /* 0055675a: mov edi, dword ptr [ecx + 0x42c] */ r_edi = R32((u32)(r_ecx+0x42cu));
    /* 00556760: mov ebx, dword ptr [edi + 8] */ r_ebx = R32((u32)(r_edi+0x8u));
    /* 00556763: mov dword ptr [eax + 0x34], ebx */ W32((u32)(r_eax+0x34u), r_ebx);
    /* 00556766: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00556768: jne 0x556775 */ if (!fZ) goto L_00556775;
L_0055676a:; BB(0x0055676a);
    /* 0055676a: mov eax, dword ptr [ecx + 0x42c] */ r_eax = R32((u32)(r_ecx+0x42cu));
    /* 00556770: mov eax, dword ptr [eax + 0xc] */ r_eax = R32((u32)(r_eax+0xcu));
    /* 00556773: jmp 0x55677a */ goto L_0055677a;
L_00556775:; BB(0x00556775);
    /* 00556775: mov eax, dword ptr [0xa73b1c] */ r_eax = R32((u32)(0xa73b1cu));
L_0055677a:; BB(0x0055677a);
    /* 0055677a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0055677d: mov dword ptr [ecx + 0xd8], 0x9bdbe0 */ W32((u32)(r_ecx+0xd8u), 0x9bdbe0u);
    /* 00556787: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 0055678a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0055678c: push 0x9bdd5c */ { u32 v = 0x9bdd5cu; r_esp -= 4; W32(r_esp, v); }
    /* 00556791: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x556796u); f_007b9a88();
    /* 00556796: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00556799: mov eax, dword ptr [ecx + 0x370] */ r_eax = R32((u32)(r_ecx+0x370u));
    /* 0055679f: push dword ptr [eax*4 + 0xa73afc] */ { u32 v = R32((u32)(r_eax*4+0xa73afcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005567a6: push dword ptr [eax*4 + 0xa73b04] */ { u32 v = R32((u32)(r_eax*4+0xa73b04u)); r_esp -= 4; W32(r_esp, v); }
    /* 005567ad: push dword ptr [eax*4 + 0xa73b0c] */ { u32 v = R32((u32)(r_eax*4+0xa73b0cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005567b4: mov dword ptr [ecx + 0x358], 0x9bdd40 */ W32((u32)(r_ecx+0x358u), 0x9bdd40u);
    /* 005567be: call 0x7868f8 */ r_esp -= 4; W32(r_esp, 0x5567c3u); f_007868f8();
    /* 005567c3: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005567c6: call 0x55468c */ r_esp -= 4; W32(r_esp, 0x5567cbu); f_0055468c();
    /* 005567cb: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005567ce: mov eax, 5 */ r_eax = 0x5u;
    /* 005567d3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005567d4: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 005567db: call 0x7aa4c8 */ r_esp -= 4; W32(r_esp, 0x5567e0u); f_007aa4c8();
    /* 005567e0: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005567e3: movzx eax, word ptr [ecx + 0xb8] */ r_eax = (u32)R16((u32)(r_ecx+0xb8u));
    /* 005567ea: movsx ebx, word ptr [ecx + 0x2bc] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_ecx+0x2bcu));
    /* 005567f1: movzx edx, word ptr [ecx + 0x2be] */ r_edx = (u32)R16((u32)(r_ecx+0x2beu));
    /* 005567f8: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 005567ff: mov word ptr [ecx + 0x334], bx */ W16((u32)(r_ecx+0x334u), (u16)r_ebx);
    /* 00556806: mov word ptr [ecx + 0x336], dx */ W16((u32)(r_ecx+0x336u), (u16)r_edx);
    /* 0055680d: mov word ptr [ecx + 0x346], bx */ W16((u32)(r_ecx+0x346u), (u16)r_ebx);
    /* 00556814: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00556816: mov word ptr [ecx + 0x39a], si */ W16((u32)(r_ecx+0x39au), (u16)r_esi);
    /* 0055681d: mov dword ptr [ecx + 0x39c], esi */ W32((u32)(r_ecx+0x39cu), r_esi);
    /* 00556823: mov dword ptr [ecx + 0x3a0], esi */ W32((u32)(r_ecx+0x3a0u), r_esi);
    /* 00556829: mov dword ptr [ecx + 0x3a4], esi */ W32((u32)(r_ecx+0x3a4u), r_esi);
    /* 0055682f: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x556834u); f_0078730c();
    /* 00556834: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00556837: call 0x786bbc */ r_esp -= 4; W32(r_esp, 0x55683cu); f_00786bbc();
    /* 0055683c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0055683f: mov eax, dword ptr [ecx + 0x2e8] */ r_eax = R32((u32)(r_ecx+0x2e8u));
    /* 00556845: mov ebx, dword ptr [ecx + 0x370] */ r_ebx = R32((u32)(r_ecx+0x370u));
    /* 0055684b: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0055684e: mov dword ptr [ecx + 0x2e8], eax */ W32((u32)(r_ecx+0x2e8u), r_eax);
    /* 00556854: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00556856: mov dword ptr [ecx + 0x3ac], 0 */ W32((u32)(r_ecx+0x3acu), 0x0u);
    /* 00556860: mov word ptr [ecx + 0x398], dx */ W16((u32)(r_ecx+0x398u), (u16)r_edx);
    /* 00556867: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00556869: je 0x556874 */ if (fZ) goto L_00556874;
L_0055686b:; BB(0x0055686b);
    /* 0055686b: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 0055686d: call 0x787550 */ r_esp -= 4; W32(r_esp, 0x556872u); f_00787550();
    /* 00556872: jmp 0x55687b */ goto L_0055687b;
L_00556874:; BB(0x00556874);
    /* 00556874: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 00556876: call 0x787550 */ r_esp -= 4; W32(r_esp, 0x55687bu); f_00787550();
L_0055687b:; BB(0x0055687b);
    /* 0055687b: push 0xa0707070 */ { u32 v = 0xa0707070u; r_esp -= 4; W32(r_esp, v); }
    /* 00556880: push 0xffffff */ { u32 v = 0xffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00556885: call 0x578cc4 */ r_esp -= 4; W32(r_esp, 0x55688au); f_00578cc4();
    /* 0055688a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055688d: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00556890: mov dword ptr [edx + 0x3b4], eax */ W32((u32)(r_edx+0x3b4u), r_eax);
    /* 00556896: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00556899: movsx ecx, word ptr [eax + 0xa] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0xau));
    /* 0055689d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055689f: je 0x5568a8 */ if (fZ) goto L_005568a8;
L_005568a1:; BB(0x005568a1);
    /* 005568a1: mov ecx, edx */ r_ecx = r_edx;
    /* 005568a3: call 0x52ca40 */ r_esp -= 4; W32(r_esp, 0x5568a8u); f_0052ca40();
L_005568a8:; BB(0x005568a8);
    /* 005568a8: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005568ab: fld dword ptr [ecx + 0x35c] */ FPUSH(R_F32((u32)(r_ecx+0x35cu)));
    /* 005568b1: fnstcw word ptr [ebp - 0x3c] */ W16((u32)(r_ebp+0xffffffc4u), fcw);
    /* 005568b4: movzx eax, word ptr [ebp - 0x3c] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc4u));
    /* 005568b8: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005568bd: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 005568c0: fldcw word ptr [ebp - 0x34] */ fcw = R16((u32)(r_ebp+0xffffffccu));
    /* 005568c3: fistp dword ptr [ebp - 0x2c] */ W32((u32)(r_ebp+0xffffffd4u), (u32)fx_int32(ST(0))); FPOP();
    /* 005568c6: fldcw word ptr [ebp - 0x3c] */ fcw = R16((u32)(r_ebp+0xffffffc4u));
    /* 005568c9: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005568cb: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 005568ce: mov dword ptr [ecx + 0x3b0], edx */ W32((u32)(r_ecx+0x3b0u), r_edx);
    /* 005568d4: mov word ptr [ecx + 0x394], dx */ W16((u32)(r_ecx+0x394u), (u16)r_edx);
    /* 005568db: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005568dd: je 0x5568e6 */ if (fZ) goto L_005568e6;
L_005568df:; BB(0x005568df);
    /* 005568df: mov eax, 0x435c0000 */ r_eax = 0x435c0000u;
    /* 005568e4: jmp 0x5568eb */ goto L_005568eb;
L_005568e6:; BB(0x005568e6);
    /* 005568e6: mov eax, 0x432a0000 */ r_eax = 0x432a0000u;
L_005568eb:; BB(0x005568eb);
    /* 005568eb: mov dword ptr [ecx + 0x3d8], eax */ W32((u32)(r_ecx+0x3d8u), r_eax);
    /* 005568f1: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005568f3: call dword ptr [eax + 0x150] */ { u32 t = R32((u32)(r_eax+0x150u)); r_esp -= 4; W32(r_esp, 0x5568f9u); call_ind(t); }
    /* 005568f9: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
L_00556900:; BB(0x00556900);
    /* 00556900: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00556903: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00556906: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00556909: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0055690c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055690f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00556916: mov esp, ebp */ r_esp = r_ebp;
    /* 00556918: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00556919: ret  */ FN_RET(0x00556600); r_esp += 4; return;
L_0055691a:; BB(0x0055691a);
    /* 0055691a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0055691c: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0055691f: jmp 0x556900 */ goto L_00556900;
L_00556921:; BB(0x00556921);
    /* 00556921: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00556923: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00556926: jmp 0x556668 */ f_00556668(); return;
}

void f_0055692c(void) /* sub_55692C */
{
    FN_ENTER(0x0055692c);
    /* 0055692c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0055692d: mov esi, ecx */ r_esi = r_ecx;
    /* 0055692f: mov ecx, esi */ r_ecx = r_esi;
    /* 00556931: call 0x77818c */ r_esp -= 4; W32(r_esp, 0x556936u); f_0077818c();
    /* 00556936: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00556938: je 0x556948 */ if (fZ) goto L_00556948;
L_0055693a:; BB(0x0055693a);
    /* 0055693a: mov ecx, esi */ r_ecx = r_esi;
    /* 0055693c: call 0x56f87c */ r_esp -= 4; W32(r_esp, 0x556941u); f_0056f87c();
    /* 00556941: mov eax, 1 */ r_eax = 0x1u;
    /* 00556946: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00556947: ret  */ FN_RET(0x0055692c); r_esp += 4; return;
L_00556948:; BB(0x00556948);
    /* 00556948: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0055694a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0055694b: ret  */ FN_RET(0x0055692c); r_esp += 4; return;
}

void f_005569bc(void)
{
    FN_ENTER(0x005569bc);
    /* 005569bc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005569bd: mov ebp, esp */ r_ebp = r_esp;
    /* 005569bf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005569c1: push 0x8d62ee */ { u32 v = 0x8d62eeu; r_esp -= 4; W32(r_esp, v); }
    /* 005569c6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005569cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005569cd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005569d4: sub esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005569d7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005569da: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005569dd: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005569e0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005569e3: call 0x520e6c */ r_esp -= 4; W32(r_esp, 0x5569e8u); f_00520e6c();
    /* 005569e8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005569ea: je 0x556a05 */ if (fZ) goto L_00556a05;
L_005569ec:; BB(0x005569ec);
    /* 005569ec: push 0x924e3c */ { u32 v = 0x924e3cu; r_esp -= 4; W32(r_esp, v); }
    /* 005569f1: push 0x9bdd2c */ { u32 v = 0x9bdd2cu; r_esp -= 4; W32(r_esp, v); }
    /* 005569f6: call 0x51f674 */ r_esp -= 4; W32(r_esp, 0x5569fbu); f_0051f674();
    /* 005569fb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005569fe: mov dword ptr [0xa73b18], eax */ W32((u32)(0xa73b18u), r_eax);
    /* 00556a03: jmp 0x556a5a */ goto L_00556a5a;
L_00556a05:; BB(0x00556a05);
    /* 00556a05: mov dword ptr [ebp - 0x60], 0 */ W32((u32)(r_ebp+0xffffffa0u), 0x0u);
    /* 00556a0c: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 00556a11: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x556a16u); f_008581c5();
    /* 00556a16: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00556a17: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 00556a1a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00556a1c: je 0x556ec7 */ if (fZ) goto L_00556ec7;
L_00556a22:; BB(0x00556a22);
    /* 00556a22: mov dword ptr [ebp - 0x60], 1 */ W32((u32)(r_ebp+0xffffffa0u), 0x1u);
    /* 00556a29: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00556a30: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 00556a33: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00556a35: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00556a36: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00556a37: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00556a38: push 0x9bdd2c */ { u32 v = 0x9bdd2cu; r_esp -= 4; W32(r_esp, v); }
    /* 00556a3d: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00556a3f: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x556a44u); f_005b7a84();
    /* 00556a44: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 00556a47: mov dword ptr [ebp - 0x60], 0 */ W32((u32)(r_ebp+0xffffffa0u), 0x0u);
    /* 00556a4e: mov dword ptr [0xa73b18], eax */ W32((u32)(0xa73b18u), r_eax);
    /* 00556a53: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
L_00556a5a:; BB(0x00556a5a);
    /* 00556a5a: mov eax, dword ptr [eax + 0x42c] */ r_eax = R32((u32)(r_eax+0x42cu));
    /* 00556a60: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 00556a63: mov dword ptr [0xa73b14], edx */ W32((u32)(0xa73b14u), r_edx);
    /* 00556a69: call 0x520e6c */ r_esp -= 4; W32(r_esp, 0x556a6eu); f_00520e6c();
    /* 00556a6e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00556a70: je 0x556a84 */ if (fZ) goto L_00556a84;
L_00556a72:; BB(0x00556a72);
    /* 00556a72: push 0x924e54 */ { u32 v = 0x924e54u; r_esp -= 4; W32(r_esp, v); }
    /* 00556a77: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x556a7cu); f_008009dc();
    /* 00556a7c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00556a7d: mov dword ptr [0xa73b1c], eax */ W32((u32)(0xa73b1cu), r_eax);
    /* 00556a82: jmp 0x556a94 */ goto L_00556a94;
L_00556a84:; BB(0x00556a84);
    /* 00556a84: push 0x924e68 */ { u32 v = 0x924e68u; r_esp -= 4; W32(r_esp, v); }
    /* 00556a89: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x556a8eu); f_008009dc();
    /* 00556a8e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00556a8f: mov dword ptr [0xa73b1c], eax */ W32((u32)(0xa73b1cu), r_eax);
L_00556a94:; BB(0x00556a94);
    /* 00556a94: mov eax, dword ptr [0xa73b18] */ r_eax = R32((u32)(0xa73b18u));
    /* 00556a99: push 0x17 */ { u32 v = 0x17u; r_esp -= 4; W32(r_esp, v); }
    /* 00556a9b: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 00556aa1: push dword ptr [edx + 0x18] */ { u32 v = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 00556aa4: call 0x78e934 */ r_esp -= 4; W32(r_esp, 0x556aa9u); f_0078e934();
    /* 00556aa9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00556aac: mov dword ptr [eax + 0x30], 0 */ W32((u32)(r_eax+0x30u), 0x0u);
    /* 00556ab3: call 0x54752c */ r_esp -= 4; W32(r_esp, 0x556ab8u); f_0054752c();
    /* 00556ab8: mov eax, dword ptr [0xa73b18] */ r_eax = R32((u32)(0xa73b18u));
    /* 00556abd: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 00556abf: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 00556ac5: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00556ac8: call 0x78e934 */ r_esp -= 4; W32(r_esp, 0x556acdu); f_0078e934();
    /* 00556acd: mov dword ptr [0xa73aec], eax */ W32((u32)(0xa73aecu), r_eax);
    /* 00556ad2: mov eax, dword ptr [0xa73b18] */ r_eax = R32((u32)(0xa73b18u));
    /* 00556ad7: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 00556ad9: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 00556adf: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00556ae2: call 0x78e934 */ r_esp -= 4; W32(r_esp, 0x556ae7u); f_0078e934();
    /* 00556ae7: mov dword ptr [0xa73af0], eax */ W32((u32)(0xa73af0u), r_eax);
    /* 00556aec: mov eax, dword ptr [0xa73b18] */ r_eax = R32((u32)(0xa73b18u));
    /* 00556af1: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 00556af3: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 00556af9: push dword ptr [edx + 0x18] */ { u32 v = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 00556afc: call 0x78e934 */ r_esp -= 4; W32(r_esp, 0x556b01u); f_0078e934();
    /* 00556b01: or dword ptr [eax], 8 */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 00556b04: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00556b06: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
    /* 00556b0d: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x556b12u); f_008581c5();
    /* 00556b12: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00556b15: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 00556b18: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00556b1a: je 0x556ec0 */ if (fZ) goto L_00556ec0;
L_00556b20:; BB(0x00556b20);
    /* 00556b20: mov dword ptr [ebp - 0x58], 1 */ W32((u32)(r_ebp+0xffffffa8u), 0x1u);
    /* 00556b27: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00556b2e: mov eax, dword ptr [0xa73b18] */ r_eax = R32((u32)(0xa73b18u));
    /* 00556b33: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 00556b36: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 00556b3c: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00556b3f: call 0x511b74 */ r_esp -= 4; W32(r_esp, 0x556b44u); f_00511b74();
    /* 00556b44: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 00556b47: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
    /* 00556b4e: mov dword ptr [0xa73b20], eax */ W32((u32)(0xa73b20u), r_eax);
    /* 00556b53: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00556b5a: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
    /* 00556b61: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 00556b63: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x556b68u); f_008581c5();
    /* 00556b68: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00556b69: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 00556b6c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00556b6e: je 0x556eb9 */ if (fZ) goto L_00556eb9;
L_00556b74:; BB(0x00556b74);
    /* 00556b74: mov dword ptr [ebp - 0x50], 1 */ W32((u32)(r_ebp+0xffffffb0u), 0x1u);
    /* 00556b7b: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 00556b82: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00556b85: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00556b87: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00556b8c: push 0x420c0000 */ { u32 v = 0x420c0000u; r_esp -= 4; W32(r_esp, v); }
    /* 00556b91: push 0x41e00000 */ { u32 v = 0x41e00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00556b96: call 0x5795a0 */ r_esp -= 4; W32(r_esp, 0x556b9bu); f_005795a0();
    /* 00556b9b: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00556b9e: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
    /* 00556ba5: mov dword ptr [0xa73ac8], eax */ W32((u32)(0xa73ac8u), r_eax);
    /* 00556baa: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00556bb1: mov ecx, dword ptr [0xa73b18] */ r_ecx = R32((u32)(0xa73b18u));
    /* 00556bb7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00556bb9: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x556bbeu); f_005b8610();
    /* 00556bbe: mov ebx, eax */ r_ebx = r_eax;
    /* 00556bc0: mov ecx, dword ptr [0xa73b18] */ r_ecx = R32((u32)(0xa73b18u));
    /* 00556bc6: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00556bc8: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x556bcdu); f_005b8638();
    /* 00556bcd: mov ecx, dword ptr [0xa73ac8] */ r_ecx = R32((u32)(0xa73ac8u));
    /* 00556bd3: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 00556bd5: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 00556bd7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00556bd8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00556bd9: call 0x579a28 */ r_esp -= 4; W32(r_esp, 0x556bdeu); f_00579a28();
    /* 00556bde: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
    /* 00556be5: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 00556be7: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x556becu); f_008581c5();
    /* 00556bec: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00556bed: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 00556bf0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00556bf2: je 0x556eb2 */ if (fZ) goto L_00556eb2;
L_00556bf8:; BB(0x00556bf8);
    /* 00556bf8: mov dword ptr [ebp - 0x48], 1 */ W32((u32)(r_ebp+0xffffffb8u), 0x1u);
    /* 00556bff: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 00556c06: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00556c09: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00556c0b: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00556c10: push 0x42200000 */ { u32 v = 0x42200000u; r_esp -= 4; W32(r_esp, v); }
    /* 00556c15: push 0x42100000 */ { u32 v = 0x42100000u; r_esp -= 4; W32(r_esp, v); }
    /* 00556c1a: call 0x5795a0 */ r_esp -= 4; W32(r_esp, 0x556c1fu); f_005795a0();
    /* 00556c1f: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00556c22: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
    /* 00556c29: mov dword ptr [0xa73ad0], eax */ W32((u32)(0xa73ad0u), r_eax);
    /* 00556c2e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00556c35: mov ecx, dword ptr [0xa73b18] */ r_ecx = R32((u32)(0xa73b18u));
    /* 00556c3b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00556c3d: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x556c42u); f_005b8610();
    /* 00556c42: mov ebx, eax */ r_ebx = r_eax;
    /* 00556c44: mov ecx, dword ptr [0xa73b18] */ r_ecx = R32((u32)(0xa73b18u));
    /* 00556c4a: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00556c4c: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x556c51u); f_005b8638();
    /* 00556c51: mov ecx, dword ptr [0xa73ad0] */ r_ecx = R32((u32)(0xa73ad0u));
    /* 00556c57: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 00556c59: push 0x2e */ { u32 v = 0x2eu; r_esp -= 4; W32(r_esp, v); }
    /* 00556c5b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00556c5c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00556c5d: call 0x579a28 */ r_esp -= 4; W32(r_esp, 0x556c62u); f_00579a28();
    /* 00556c62: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
    /* 00556c69: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 00556c6b: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x556c70u); f_008581c5();
    /* 00556c70: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00556c71: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 00556c74: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00556c76: je 0x556eab */ if (fZ) goto L_00556eab;
L_00556c7c:; BB(0x00556c7c);
    /* 00556c7c: mov dword ptr [ebp - 0x44], 1 */ W32((u32)(r_ebp+0xffffffbcu), 0x1u);
    /* 00556c83: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 00556c8a: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00556c8d: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00556c8f: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00556c94: push 0x42180000 */ { u32 v = 0x42180000u; r_esp -= 4; W32(r_esp, v); }
    /* 00556c99: push 0x41f00000 */ { u32 v = 0x41f00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00556c9e: call 0x5795a0 */ r_esp -= 4; W32(r_esp, 0x556ca3u); f_005795a0();
    /* 00556ca3: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00556ca6: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
    /* 00556cad: mov dword ptr [0xa73acc], eax */ W32((u32)(0xa73accu), r_eax);
    /* 00556cb2: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00556cb9: mov ecx, dword ptr [0xa73b18] */ r_ecx = R32((u32)(0xa73b18u));
    /* 00556cbf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00556cc1: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x556cc6u); f_005b8610();
    /* 00556cc6: mov ebx, eax */ r_ebx = r_eax;
    /* 00556cc8: mov ecx, dword ptr [0xa73b18] */ r_ecx = R32((u32)(0xa73b18u));
    /* 00556cce: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00556cd0: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x556cd5u); f_005b8638();
    /* 00556cd5: mov ecx, dword ptr [0xa73acc] */ r_ecx = R32((u32)(0xa73accu));
    /* 00556cdb: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 00556cdd: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 00556cdf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00556ce0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00556ce1: call 0x579a28 */ r_esp -= 4; W32(r_esp, 0x556ce6u); f_00579a28();
    /* 00556ce6: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
    /* 00556ced: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 00556cef: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x556cf4u); f_008581c5();
    /* 00556cf4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00556cf5: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 00556cf8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00556cfa: je 0x556ea4 */ if (fZ) goto L_00556ea4;
L_00556d00:; BB(0x00556d00);
    /* 00556d00: mov dword ptr [ebp - 0x40], 1 */ W32((u32)(r_ebp+0xffffffc0u), 0x1u);
    /* 00556d07: mov dword ptr [ebp - 4], 5 */ W32((u32)(r_ebp+0xfffffffcu), 0x5u);
    /* 00556d0e: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00556d11: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00556d13: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00556d18: push 0x42680000 */ { u32 v = 0x42680000u; r_esp -= 4; W32(r_esp, v); }
    /* 00556d1d: push 0x42480000 */ { u32 v = 0x42480000u; r_esp -= 4; W32(r_esp, v); }
    /* 00556d22: call 0x5795a0 */ r_esp -= 4; W32(r_esp, 0x556d27u); f_005795a0();
    /* 00556d27: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00556d2a: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
    /* 00556d31: mov dword ptr [0xa73ad4], eax */ W32((u32)(0xa73ad4u), r_eax);
    /* 00556d36: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00556d3d: mov ecx, dword ptr [0xa73b18] */ r_ecx = R32((u32)(0xa73b18u));
    /* 00556d43: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00556d45: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x556d4au); f_005b8610();
    /* 00556d4a: mov ebx, eax */ r_ebx = r_eax;
    /* 00556d4c: mov ecx, dword ptr [0xa73b18] */ r_ecx = R32((u32)(0xa73b18u));
    /* 00556d52: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00556d54: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x556d59u); f_005b8638();
    /* 00556d59: mov ecx, dword ptr [0xa73ad4] */ r_ecx = R32((u32)(0xa73ad4u));
    /* 00556d5f: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 00556d61: push 0x2e */ { u32 v = 0x2eu; r_esp -= 4; W32(r_esp, v); }
    /* 00556d63: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00556d64: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00556d65: call 0x579a28 */ r_esp -= 4; W32(r_esp, 0x556d6au); f_00579a28();
    /* 00556d6a: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_00556d6c:; BB(0x00556d6c);
    /* 00556d6c: lea ebx, [esi + 0x1b] */ r_ebx = (u32)(r_esi+0x1bu);
    /* 00556d6f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00556d70: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x556d75u); f_0077a684();
    /* 00556d75: mov dword ptr [esi*4 + 0xa73b0c], eax */ W32((u32)(r_esi*4+0xa73b0cu), r_eax);
    /* 00556d7c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00556d7d: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x556d82u); f_0077a698();
    /* 00556d82: mov dword ptr [esi*4 + 0xa73b04], eax */ W32((u32)(r_esi*4+0xa73b04u), r_eax);
    /* 00556d89: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00556d8a: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x556d8fu); f_0077a6b4();
    /* 00556d8f: mov dword ptr [esi*4 + 0xa73afc], eax */ W32((u32)(r_esi*4+0xa73afcu), r_eax);
    /* 00556d96: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00556d97: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x556d9cu); f_0077a6cc();
    /* 00556d9c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00556d9f: mov dword ptr [esi*4 + 0xa73af4], eax */ W32((u32)(r_esi*4+0xa73af4u), r_eax);
    /* 00556da6: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00556da9: cmp esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00556dac: jl 0x556d6c */ if ((fS!=fO)) goto L_00556d6c;
L_00556dae:; BB(0x00556dae);
    /* 00556dae: mov eax, dword ptr [0xa73b18] */ r_eax = R32((u32)(0xa73b18u));
    /* 00556db3: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 00556db9: mov esi, dword ptr [edx + 8] */ r_esi = R32((u32)(r_edx+0x8u));
    /* 00556dbc: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_00556dbe:; BB(0x00556dbe);
    /* 00556dbe: movsx eax, word ptr [ebx*2 + 0x9bdb80] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx*2+0x9bdb80u));
    /* 00556dc6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00556dc7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00556dc8: call 0x78e934 */ r_esp -= 4; W32(r_esp, 0x556dcdu); f_0078e934();
    /* 00556dcd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00556dd0: mov dword ptr [ebp + ebx*4 - 0x3c], eax */ W32((u32)(r_ebp+r_ebx*4+0xffffffc4u), r_eax);
    /* 00556dd4: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00556dd7: cmp ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00556dda: jl 0x556dbe */ if ((fS!=fO)) goto L_00556dbe;
L_00556ddc:; BB(0x00556ddc);
    /* 00556ddc: push 0xa73a38 */ { u32 v = 0xa73a38u; r_esp -= 4; W32(r_esp, v); }
    /* 00556de1: push dword ptr [ebp - 0x3c] */ { u32 v = R32((u32)(r_ebp+0xffffffc4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00556de4: call 0x52cb44 */ r_esp -= 4; W32(r_esp, 0x556de9u); f_0052cb44();
    /* 00556de9: push 0xa73a48 */ { u32 v = 0xa73a48u; r_esp -= 4; W32(r_esp, v); }
    /* 00556dee: push dword ptr [ebp - 0x38] */ { u32 v = R32((u32)(r_ebp+0xffffffc8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00556df1: call 0x52cb44 */ r_esp -= 4; W32(r_esp, 0x556df6u); f_0052cb44();
    /* 00556df6: push 0xa73a78 */ { u32 v = 0xa73a78u; r_esp -= 4; W32(r_esp, v); }
    /* 00556dfb: push dword ptr [ebp - 0x34] */ { u32 v = R32((u32)(r_ebp+0xffffffccu)); r_esp -= 4; W32(r_esp, v); }
    /* 00556dfe: call 0x52cb44 */ r_esp -= 4; W32(r_esp, 0x556e03u); f_0052cb44();
    /* 00556e03: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00556e06: mov ecx, dword ptr [0x924ba0] */ r_ecx = R32((u32)(0x924ba0u));
    /* 00556e0c: movzx ebx, word ptr [0x924ba4] */ r_ebx = (u32)R16((u32)(0x924ba4u));
    /* 00556e13: movzx esi, word ptr [0x924ba6] */ r_esi = (u32)R16((u32)(0x924ba6u));
    /* 00556e1a: movzx edi, word ptr [0x924ba8] */ r_edi = (u32)R16((u32)(0x924ba8u));
    /* 00556e21: mov eax, 0x1e */ r_eax = 0x1eu;
    /* 00556e26: mov edx, 0x1f */ r_edx = 0x1fu;
    /* 00556e2b: mov word ptr [ebp - 0x30], ax */ W16((u32)(r_ebp+0xffffffd0u), (u16)r_eax);
    /* 00556e2f: mov word ptr [ebp - 0x2e], dx */ W16((u32)(r_ebp+0xffffffd2u), (u16)r_edx);
    /* 00556e33: mov edx, dword ptr [0xa73b18] */ r_edx = R32((u32)(0xa73b18u));
    /* 00556e39: mov eax, dword ptr [edx + 0x430] */ r_eax = R32((u32)(r_edx+0x430u));
    /* 00556e3f: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 00556e42: mov word ptr [ebp - 0x24], bx */ W16((u32)(r_ebp+0xffffffdcu), (u16)r_ebx);
    /* 00556e46: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00556e48: mov word ptr [ebp - 0x22], si */ W16((u32)(r_ebp+0xffffffdeu), (u16)r_esi);
    /* 00556e4c: mov word ptr [ebp - 0x20], di */ W16((u32)(r_ebp+0xffffffe0u), (u16)r_edi);
    /* 00556e50: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
L_00556e53:; BB(0x00556e53);
    /* 00556e53: lea eax, [ebp - 0x2c] */ r_eax = (u32)(r_ebp+0xffffffd4u);
    /* 00556e56: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00556e57: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00556e59: mov edx, dword ptr [edx + 0x42c] */ r_edx = R32((u32)(r_edx+0x42cu));
    /* 00556e5f: push 0x40a00000 */ { u32 v = 0x40a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00556e64: lea ecx, [ebx + ebx] */ r_ecx = (u32)(r_ebx+r_ebx);
    /* 00556e67: movsx esi, word ptr [ebp + ecx - 0x30] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+r_ecx+0xffffffd0u));
    /* 00556e6c: push dword ptr [edx + ecx*8 + 0xc] */ { u32 v = R32((u32)(r_edx+r_ecx*8+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00556e70: push dword ptr [edx + ecx*8 + 8] */ { u32 v = R32((u32)(r_edx+r_ecx*8+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00556e74: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00556e75: call 0x608470 */ r_esp -= 4; W32(r_esp, 0x556e7au); f_00608470();
    /* 00556e7a: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00556e7d: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00556e80: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00556e83: jge 0x556e8d */ if ((fS==fO)) goto L_00556e8d;
L_00556e85:; BB(0x00556e85);
    /* 00556e85: mov edx, dword ptr [0xa73b18] */ r_edx = R32((u32)(0xa73b18u));
    /* 00556e8b: jmp 0x556e53 */ goto L_00556e53;
L_00556e8d:; BB(0x00556e8d);
    /* 00556e8d: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00556e90: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 00556e93: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00556e96: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00556e99: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00556ea0: mov esp, ebp */ r_esp = r_ebp;
    /* 00556ea2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00556ea3: ret  */ FN_RET(0x005569bc); r_esp += 4; return;
L_00556ea4:; BB(0x00556ea4);
    /* 00556ea4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00556ea6: jmp 0x556d31 */ f_00556d31(); return;
L_00556eab:; BB(0x00556eab);
    /* 00556eab: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00556ead: jmp 0x556cad */ f_00556cad(); return;
L_00556eb2:; BB(0x00556eb2);
    /* 00556eb2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00556eb4: jmp 0x556c29 */ f_00556c29(); return;
L_00556eb9:; BB(0x00556eb9);
    /* 00556eb9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00556ebb: jmp 0x556ba5 */ f_00556ba5(); return;
L_00556ec0:; BB(0x00556ec0);
    /* 00556ec0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00556ec2: jmp 0x556b4e */ f_00556b4e(); return;
L_00556ec7:; BB(0x00556ec7);
    /* 00556ec7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00556ec9: jmp 0x556a4e */ f_00556a4e(); return;
}

void f_00556ed0(void) /* sub_556ED0 */
{
    FN_ENTER(0x00556ed0);
    /* 00556ed0: mov eax, dword ptr [ecx + 0x390] */ r_eax = R32((u32)(r_ecx+0x390u));
    /* 00556ed6: test eax, 0x4000000 */ {  u32 a = r_eax; u32 b = 0x4000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00556edb: jne 0x556f0e */ if (!fZ) goto L_00556f0e;
L_00556edd:; BB(0x00556edd);
    /* 00556edd: push 0x40000000 */ { u32 v = 0x40000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00556ee2: or eax, 0x4000001 */ {  u32 a = r_eax; u32 b = 0x4000001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00556ee7: and eax, 0xff7fffff */ {  u32 a = r_eax; u32 b = 0xff7fffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00556eec: mov dword ptr [ecx + 0x390], eax */ W32((u32)(r_ecx+0x390u), r_eax);
    /* 00556ef2: mov eax, 0x1e */ r_eax = 0x1eu;
    /* 00556ef7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00556ef8: mov word ptr [ecx + 0x344], ax */ W16((u32)(r_ecx+0x344u), (u16)r_eax);
    /* 00556eff: add ecx, 0x300 */ {  u32 a = r_ecx; u32 b = 0x300u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00556f05: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00556f06: call 0x5788d0 */ r_esp -= 4; W32(r_esp, 0x556f0bu); f_005788d0();
    /* 00556f0b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_00556f0e:; BB(0x00556f0e);
    /* 00556f0e: ret  */ FN_RET(0x00556ed0); r_esp += 4; return;
}

void f_00556f10(void) /* sub_556F10 */
{
    FN_ENTER(0x00556f10);
    /* 00556f10: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00556f11: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00556f13: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00556f15: call 0x556f34 */ r_esp -= 4; W32(r_esp, 0x556f1au); f_00556f34();
    /* 00556f1a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00556f1e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00556f20: jne 0x556f26 */ if (!fZ) goto L_00556f26;
L_00556f22:; BB(0x00556f22);
    /* 00556f22: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00556f23: ret 4 */ FN_RET(0x00556f10); r_esp += 8; return;
L_00556f26:; BB(0x00556f26);
    /* 00556f26: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00556f27: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x556f2cu); f_005c2f74();
    /* 00556f2c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00556f2d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00556f2e: ret 4 */ FN_RET(0x00556f10); r_esp += 8; return;
}

void f_00556f34(void) /* sub_556F34 */
{
    FN_ENTER(0x00556f34);
    /* 00556f34: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00556f35: mov ebp, esp */ r_ebp = r_esp;
    /* 00556f37: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00556f39: push 0x8d6308 */ { u32 v = 0x8d6308u; r_esp -= 4; W32(r_esp, v); }
    /* 00556f3e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00556f44: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00556f45: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00556f4c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00556f4f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00556f52: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00556f55: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00556f58: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00556f5b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00556f5e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00556f61: mov edx, dword ptr [ecx + 0x5c] */ r_edx = R32((u32)(r_ecx+0x5cu));
    /* 00556f64: mov dword ptr [ecx], 0xb04910 */ W32((u32)(r_ecx), 0xb04910u);
    /* 00556f6a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00556f6c: je 0x556f85 */ if (fZ) goto L_00556f85;
L_00556f6e:; BB(0x00556f6e);
    /* 00556f6e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00556f71: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00556f75: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00556f7a: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00556f7e: mov dword ptr [ecx + 0x5c], 0 */ W32((u32)(r_ecx+0x5cu), 0x0u);
L_00556f85:; BB(0x00556f85);
    /* 00556f85: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00556f8c: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x556f91u); f_008171e8();
    /* 00556f91: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00556f94: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00556f9b: mov esp, ebp */ r_esp = r_ebp;
    /* 00556f9d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00556f9e: ret  */ FN_RET(0x00556f34); r_esp += 4; return;
}

void f_00556fa0(void) /* sub_556FA0 */
{
    FN_ENTER(0x00556fa0);
    /* 00556fa0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00556fa1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00556fa2: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00556fa5: mov esi, ecx */ r_esi = r_ecx;
    /* 00556fa7: lea ebx, [esi + 0x1c] */ r_ebx = (u32)(r_esi+0x1cu);
    /* 00556faa: lea edx, [esi + 0x34] */ r_edx = (u32)(r_esi+0x34u);
    /* 00556fad: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00556faf: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x556fb4u); f_0082ebac();
    /* 00556fb4: mov eax, dword ptr [esi + 0x60] */ r_eax = R32((u32)(r_esi+0x60u));
    /* 00556fb7: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00556fba: mov dword ptr [esi + 0x60], eax */ W32((u32)(r_esi+0x60u), r_eax);
    /* 00556fbd: test al, 3 */ {  u32 a = (u8)r_eax; u32 b = 0x3u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00556fbf: jne 0x556ff9 */ if (!fZ) goto L_00556ff9;
L_00556fc1:; BB(0x00556fc1);
    /* 00556fc1: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00556fc3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00556fc4: lea eax, [esi + 0x28] */ r_eax = (u32)(r_esi+0x28u);
    /* 00556fc7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00556fc8: call 0x77fffc */ r_esp -= 4; W32(r_esp, 0x556fcdu); f_0077fffc();
    /* 00556fcd: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00556fd0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00556fd2: je 0x556fe7 */ if (fZ) goto L_00556fe7;
L_00556fd4:; BB(0x00556fd4);
    /* 00556fd4: movzx eax, word ptr [esi + 8] */ r_eax = (u32)R16((u32)(r_esi+0x8u));
    /* 00556fd8: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00556fdd: mov word ptr [esi + 8], ax */ W16((u32)(r_esi+0x8u), (u16)r_eax);
    /* 00556fe1: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00556fe4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00556fe5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00556fe6: ret  */ FN_RET(0x00556fa0); r_esp += 4; return;
L_00556fe7:; BB(0x00556fe7);
    /* 00556fe7: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 00556fea: mov edx, dword ptr [esi + 0x20] */ r_edx = R32((u32)(r_esi+0x20u));
    /* 00556fed: mov dword ptr [esi + 0x28], eax */ W32((u32)(r_esi+0x28u), r_eax);
    /* 00556ff0: mov eax, dword ptr [esi + 0x24] */ r_eax = R32((u32)(r_esi+0x24u));
    /* 00556ff3: mov dword ptr [esi + 0x2c], edx */ W32((u32)(r_esi+0x2cu), r_edx);
    /* 00556ff6: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
L_00556ff9:; BB(0x00556ff9);
    /* 00556ff9: mov ecx, dword ptr [esi + 0x5c] */ r_ecx = R32((u32)(r_esi+0x5cu));
    /* 00556ffc: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00556ffe: je 0x557006 */ if (fZ) goto L_00557006;
L_00557000:; BB(0x00557000);
    /* 00557000: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00557001: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x557006u); f_00508db8();
L_00557006:; BB(0x00557006);
    /* 00557006: fld dword ptr [0x924ea8] */ FPUSH(R_F32((u32)(0x924ea8u)));
    /* 0055700c: fadd dword ptr [esi + 0x58] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x58u));
    /* 0055700f: fcom dword ptr [0x924ea4] */ fx_compare(ST(0), R_F32((u32)(0x924ea4u))); 
    /* 00557015: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00557017: fstp dword ptr [esi + 0x58] */ W_F32((u32)(r_esi+0x58u), ST(0)); FPOP();
    /* 0055701a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0055701b: jb 0x557030 */ if (fC) goto L_00557030;
L_0055701d:; BB(0x0055701d);
    /* 0055701d: movzx eax, word ptr [esi + 8] */ r_eax = (u32)R16((u32)(r_esi+0x8u));
    /* 00557021: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00557026: mov word ptr [esi + 8], ax */ W16((u32)(r_esi+0x8u), (u16)r_eax);
    /* 0055702a: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0055702d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0055702e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0055702f: ret  */ FN_RET(0x00556fa0); r_esp += 4; return;
L_00557030:; BB(0x00557030);
    /* 00557030: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 00557034: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 00557038: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 0055703b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0055703d: mov ebp, ebx */ r_ebp = r_ebx;
    /* 0055703f: mov ebx, eax */ r_ebx = r_eax;
L_00557041:; BB(0x00557041);
    /* 00557041: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00557042: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x557047u); f_0068d5a8();
    /* 00557047: mov esi, eax */ r_esi = r_eax;
    /* 00557049: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055704c: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055704e: je 0x5570d4 */ if (fZ) goto L_005570d4;
L_00557054:; BB(0x00557054);
    /* 00557054: mov edx, dword ptr [esi + 0x30] */ r_edx = R32((u32)(r_esi+0x30u));
    /* 00557057: test edx, 0xa00 */ {  u32 a = r_edx; u32 b = 0xa00u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055705d: jne 0x5570d4 */ if (!fZ) goto L_005570d4;
L_0055705f:; BB(0x0055705f);
    /* 0055705f: lea edi, [esi + 0x300] */ r_edi = (u32)(r_esi+0x300u);
    /* 00557065: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00557066: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00557067: call 0x78ea50 */ r_esp -= 4; W32(r_esp, 0x55706cu); f_0078ea50();
    /* 0055706c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055706f: fld dword ptr [0xa73b28] */ FPUSH(R_F32((u32)(0xa73b28u)));
    /* 00557075: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00557077: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00557079: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0055707b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0055707c: jb 0x5570d4 */ if (fC) goto L_005570d4;
L_0055707e:; BB(0x0055707e);
    /* 0055707e: mov eax, dword ptr [0x924e78] */ r_eax = R32((u32)(0x924e78u));
    /* 00557083: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 00557087: fild dword ptr [ecx + 0x68] */ FPUSH((long double)(i32)R32((u32)(r_ecx+0x68u)));
    /* 0055708a: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 0055708c: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 00557090: mov dword ptr [esp + 0xc], edi */ W32((u32)(r_esp+0xcu), r_edi);
    /* 00557094: mov edi, 0xffffffff */ r_edi = 0xffffffffu;
    /* 00557099: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0055709d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0055709e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0055709f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005570a1: push dword ptr [esp + 0x20] */ { u32 v = R32((u32)(r_esp+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 005570a5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005570a6: push dword ptr [ecx + 0x64] */ { u32 v = R32((u32)(r_ecx+0x64u)); r_esp -= 4; W32(r_esp, v); }
    /* 005570a9: mov edi, dword ptr [esp + 0x24] */ r_edi = R32((u32)(r_esp+0x24u));
    /* 005570ad: mov ecx, esi */ r_ecx = r_esi;
    /* 005570af: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x5570b2u); call_ind(t); }
    /* 005570b2: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005570b4: push 0xfb */ { u32 v = 0xfbu; r_esp -= 4; W32(r_esp, v); }
    /* 005570b9: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005570ba: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5570bfu); f_0050b510();
    /* 005570bf: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005570c2: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 005570c6: movzx edx, word ptr [esi + 8] */ r_edx = (u32)R16((u32)(r_esi+0x8u));
    /* 005570ca: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 005570d0: mov word ptr [esi + 8], dx */ W16((u32)(r_esi+0x8u), (u16)r_edx);
L_005570d4:; BB(0x005570d4);
    /* 005570d4: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005570d7: cmp ebx, 0xc */ {  u32 a = r_ebx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005570da: jl 0x557041 */ if ((fS!=fO)) goto L_00557041;
L_005570e0:; BB(0x005570e0);
    /* 005570e0: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 005570e4: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
    /* 005570e7: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005570ea: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005570eb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005570ec: ret  */ FN_RET(0x00556fa0); r_esp += 4; return;
}

