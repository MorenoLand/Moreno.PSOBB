#include "protos.h"

void f_0087227c(void) /* sub_87227C */
{
    FN_ENTER(0x0087227c);
    /* 0087227c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0087227d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0087227e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0087227f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00872280: sub esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00872283: mov ebp, eax */ r_ebp = r_eax;
    /* 00872285: mov eax, dword ptr [ebp + 0x58] */ r_eax = R32((u32)(r_ebp+0x58u));
    /* 00872288: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0087228b: jne 0x872727 */ if (!fZ) goto L_00872727;
L_00872291:; BB(0x00872291);
    /* 00872291: lea ebx, [ebp + 0x78] */ r_ebx = (u32)(r_ebp+0x78u);
    /* 00872294: mov dword ptr [esp + 0x54], ebp */ W32((u32)(r_esp+0x54u), r_ebp);
L_00872298:; BB(0x00872298);
    /* 00872298: lea eax, [esp + 0x14] */ r_eax = (u32)(r_esp+0x14u);
    /* 0087229c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0087229d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0087229e: call 0x8769d4 */ r_esp -= 4; W32(r_esp, 0x8722a3u); f_008769d4();
    /* 008722a3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008722a6: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008722a9: je 0x872752 */ if (fZ) goto L_00872752;
L_008722af:; BB(0x008722af);
    /* 008722af: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 008722b1: jle 0x87243f */ if ((fZ||fS!=fO)) goto L_0087243f;
L_008722b7:; BB(0x008722b7);
    /* 008722b7: mov edi, dword ptr [esp + 0x24] */ r_edi = R32((u32)(r_esp+0x24u));
    /* 008722bb: mov esi, dword ptr [esp + 0x28] */ r_esi = R32((u32)(r_esp+0x28u));
    /* 008722bf: mov ebp, dword ptr [esp + 0x54] */ r_ebp = R32((u32)(r_esp+0x54u));
    /* 008722c3: lea ebp, [ebp + 0x250] */ r_ebp = (u32)(r_ebp+0x250u);
    /* 008722c9: lea eax, [esp + 0x14] */ r_eax = (u32)(r_esp+0x14u);
    /* 008722cd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008722ce: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008722cf: call 0x87775c */ r_esp -= 4; W32(r_esp, 0x8722d4u); f_0087775c();
    /* 008722d4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008722d7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008722d9: jne 0x872298 */ if (!fZ) goto L_00872298;
L_008722db:; BB(0x008722db);
    /* 008722db: mov dword ptr [esp + 0x58], ebp */ W32((u32)(r_esp+0x58u), r_ebp);
    /* 008722df: mov ebp, dword ptr [esp + 0x54] */ r_ebp = R32((u32)(r_esp+0x54u));
    /* 008722e3: lea ebx, [ebp + 0x1e0] */ r_ebx = (u32)(r_ebp+0x1e0u);
    /* 008722e9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008722eb: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008722ec: call 0x875a30 */ r_esp -= 4; W32(r_esp, 0x8722f1u); f_00875a30();
    /* 008722f1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008722f4: mov edx, dword ptr [esp + 0x58] */ r_edx = R32((u32)(r_esp+0x58u));
    /* 008722f8: mov dword ptr [esp + 0x5c], ebx */ W32((u32)(r_esp+0x5cu), r_ebx);
    /* 008722fc: mov ebx, eax */ r_ebx = r_eax;
    /* 008722fe: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00872300: je 0x87230f */ if (fZ) goto L_0087230f;
L_00872302:; BB(0x00872302);
    /* 00872302: mov eax, 0xffffff7f */ r_eax = 0xffffff7fu;
    /* 00872307: add esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0087230a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0087230b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0087230c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0087230d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0087230e: ret  */ FN_RET(0x0087227c); r_esp += 4; return;
L_0087230f:; BB(0x0087230f);
    /* 0087230f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00872310: mov edx, dword ptr [esp + 0x60] */ r_edx = R32((u32)(r_esp+0x60u));
    /* 00872314: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00872315: call 0x874280 */ r_esp -= 4; W32(r_esp, 0x87231au); f_00874280();
    /* 0087231a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0087231c: mov edx, dword ptr [esp + 0x68] */ r_edx = R32((u32)(r_esp+0x68u));
    /* 00872320: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00872321: call 0x875a30 */ r_esp -= 4; W32(r_esp, 0x872326u); f_00875a30();
    /* 00872326: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00872329: sub eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0087232b: lea ebx, [edi + 1] */ r_ebx = (u32)(r_edi+0x1u);
    /* 0087232e: lea ecx, [esi + 1] */ r_ecx = (u32)(r_esi+0x1u);
    /* 00872331: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 00872335: fild dword ptr [esp + 0x44] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x44u)));
    /* 00872339: fadd qword ptr [ebp + 0x70] */ ST(0) = ST(0) + R_F64((u32)(r_ebp+0x70u));
    /* 0087233c: fstp qword ptr [ebp + 0x70] */ W_F64((u32)(r_ebp+0x70u), ST(0)); FPOP();
    /* 0087233f: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 00872343: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00872345: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00872347: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00872349: or ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); }
    /* 0087234b: mov dword ptr [esp + 0x4c], edx */ W32((u32)(r_esp+0x4cu), r_edx);
    /* 0087234f: fild dword ptr [esp + 0x4c] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x4cu)));
    /* 00872353: fadd qword ptr [ebp + 0x68] */ ST(0) = ST(0) + R_F64((u32)(r_ebp+0x68u));
    /* 00872356: fstp qword ptr [ebp + 0x68] */ W_F64((u32)(r_ebp+0x68u), ST(0)); FPOP();
    /* 00872359: je 0x87242d */ if (fZ) goto L_0087242d;
L_0087235f:; BB(0x0087235f);
    /* 0087235f: cmp dword ptr [esp + 0x20], 0 */ {  u32 a = R32((u32)(r_esp+0x20u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00872364: jne 0x87242d */ if (!fZ) goto L_0087242d;
L_0087236a:; BB(0x0087236a);
    /* 0087236a: mov edx, dword ptr [ebp + 4] */ r_edx = R32((u32)(r_ebp+0x4u));
    /* 0087236d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0087236f: je 0x872376 */ if (fZ) goto L_00872376;
L_00872371:; BB(0x00872371);
    /* 00872371: mov ebx, dword ptr [ebp + 0x60] */ r_ebx = R32((u32)(r_ebp+0x60u));
    /* 00872374: jmp 0x87237b */ goto L_0087237b;
L_00872376:; BB(0x00872376);
    /* 00872376: mov ebx, 0 */ r_ebx = 0x0u;
L_0087237b:; BB(0x0087237b);
    /* 0087237b: je 0x87238e */ if (fZ) goto L_0087238e;
L_0087237d:; BB(0x0087237d);
    /* 0087237d: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0087237f: jle 0x87238e */ if ((fZ||fS!=fO)) goto L_0087238e;
L_00872381:; BB(0x00872381);
    /* 00872381: lea ecx, [ebx + ebx] */ r_ecx = (u32)(r_ebx+r_ebx);
    /* 00872384: mov edx, dword ptr [ebp + 0x44] */ r_edx = R32((u32)(r_ebp+0x44u));
    /* 00872387: sub edi, dword ptr [edx + ecx*8] */ {  u32 a = r_edi; u32 b = R32((u32)(r_edx+r_ecx*8)); u32 r = (a - b) & 0xffffffffu; r_edi = r; fC = (a < b); }
    /* 0087238a: sbb esi, dword ptr [edx + ecx*8 + 4] */ { u32 c = fC; u32 a = r_esi; u32 b = R32((u32)(r_edx+r_ecx*8+0x4u)); u32 r = (a - b - c) & 0xffffffffu; r_esi = r;  }
L_0087238e:; BB(0x0087238e);
    /* 0087238e: mov edx, esi */ r_edx = r_esi;
    /* 00872390: sub edx, 0 */ {  u32 a = r_edx; u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu; r_edx = r; fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00872393: jge 0x872399 */ if ((fS==fO)) goto L_00872399;
L_00872395:; BB(0x00872395);
    /* 00872395: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00872397: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_00872399:; BB(0x00872399);
    /* 00872399: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0087239b: mov edx, dword ptr [esp + 0x60] */ r_edx = R32((u32)(r_esp+0x60u));
    /* 0087239f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008723a0: call 0x875a30 */ r_esp -= 4; W32(r_esp, 0x8723a5u); f_00875a30();
    /* 008723a5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008723a8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008723aa: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008723ab: sub edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edi = r; fC = (a < b); }
    /* 008723ad: sbb esi, edx */ { u32 c = fC; u32 a = r_esi; u32 b = r_edx; u32 r = (a - b - c) & 0xffffffffu; r_esi = r;  }
    /* 008723af: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 008723b1: jle 0x872427 */ if ((fZ||fS!=fO)) goto L_00872427;
L_008723b3:; BB(0x008723b3);
    /* 008723b3: cmp ebx, 6 */ {  u32 a = r_ebx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008723b6: jl 0x87243a */ if ((fS!=fO)) goto L_0087243a;
L_008723bc:; BB(0x008723bc);
    /* 008723bc: mov edx, dword ptr [ebp + 0x44] */ r_edx = R32((u32)(r_ebp+0x44u));
    /* 008723bf: lea eax, [ebx - 6] */ r_eax = (u32)(r_ebx+0xfffffffau);
    /* 008723c2: mov dword ptr [esp + 0x58], eax */ W32((u32)(r_esp+0x58u), r_eax);
    /* 008723c6: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 008723c9: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008723cb: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008723cd: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008723cf: mov dword ptr [esp + 0x54], ebp */ W32((u32)(r_esp+0x54u), r_ebp);
    /* 008723d3: mov ebp, dword ptr [esp + 0x58] */ r_ebp = R32((u32)(r_esp+0x58u));
L_008723d7:; BB(0x008723d7);
    /* 008723d7: add edi, dword ptr [eax + edx + 8] */ {  u32 a = r_edi; u32 b = R32((u32)(r_eax+r_edx+0x8u)); u32 r = (a + b) & 0xffffffffu; r_edi = r; fC = (r < a); }
    /* 008723db: adc esi, dword ptr [eax + edx + 0xc] */ { u32 c = fC; u32 a = r_esi; u32 b = R32((u32)(r_eax+r_edx+0xcu)); u32 r = (a + b + c) & 0xffffffffu; r_esi = r;  }
    /* 008723df: add edi, dword ptr [eax + edx + 0x18] */ {  u32 a = r_edi; u32 b = R32((u32)(r_eax+r_edx+0x18u)); u32 r = (a + b) & 0xffffffffu; r_edi = r; fC = (r < a); }
    /* 008723e3: adc esi, dword ptr [eax + edx + 0x1c] */ { u32 c = fC; u32 a = r_esi; u32 b = R32((u32)(r_eax+r_edx+0x1cu)); u32 r = (a + b + c) & 0xffffffffu; r_esi = r;  }
    /* 008723e7: add edi, dword ptr [eax + edx + 0x28] */ {  u32 a = r_edi; u32 b = R32((u32)(r_eax+r_edx+0x28u)); u32 r = (a + b) & 0xffffffffu; r_edi = r; fC = (r < a); }
    /* 008723eb: adc esi, dword ptr [eax + edx + 0x2c] */ { u32 c = fC; u32 a = r_esi; u32 b = R32((u32)(r_eax+r_edx+0x2cu)); u32 r = (a + b + c) & 0xffffffffu; r_esi = r;  }
    /* 008723ef: add edi, dword ptr [eax + edx + 0x38] */ {  u32 a = r_edi; u32 b = R32((u32)(r_eax+r_edx+0x38u)); u32 r = (a + b) & 0xffffffffu; r_edi = r; fC = (r < a); }
    /* 008723f3: adc esi, dword ptr [eax + edx + 0x3c] */ { u32 c = fC; u32 a = r_esi; u32 b = R32((u32)(r_eax+r_edx+0x3cu)); u32 r = (a + b + c) & 0xffffffffu; r_esi = r;  }
    /* 008723f7: add edi, dword ptr [eax + edx + 0x48] */ {  u32 a = r_edi; u32 b = R32((u32)(r_eax+r_edx+0x48u)); u32 r = (a + b) & 0xffffffffu; r_edi = r; fC = (r < a); }
    /* 008723fb: adc esi, dword ptr [eax + edx + 0x4c] */ { u32 c = fC; u32 a = r_esi; u32 b = R32((u32)(r_eax+r_edx+0x4cu)); u32 r = (a + b + c) & 0xffffffffu; r_esi = r;  }
    /* 008723ff: add eax, 0x50 */ {  u32 a = r_eax; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00872402: add ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00872405: cmp ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00872407: jle 0x8723d7 */ if ((fZ||fS!=fO)) goto L_008723d7;
L_00872409:; BB(0x00872409);
    /* 00872409: mov ebp, dword ptr [esp + 0x54] */ r_ebp = R32((u32)(r_esp+0x54u));
L_0087240d:; BB(0x0087240d);
    /* 0087240d: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 00872410: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00872412: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00872414: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00872416: lea eax, [edx + eax + 8] */ r_eax = (u32)(r_edx+r_eax+0x8u);
L_0087241a:; BB(0x0087241a);
    /* 0087241a: add edi, dword ptr [eax] */ {  u32 a = r_edi; u32 b = R32((u32)(r_eax)); u32 r = (a + b) & 0xffffffffu; r_edi = r; fC = (r < a); }
    /* 0087241c: adc esi, dword ptr [eax + 4] */ { u32 c = fC; u32 a = r_esi; u32 b = R32((u32)(r_eax+0x4u)); u32 r = (a + b + c) & 0xffffffffu; r_esi = r;  }
    /* 0087241f: add eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00872422: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00872423: cmp ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00872425: jl 0x87241a */ if ((fS!=fO)) goto L_0087241a;
L_00872427:; BB(0x00872427);
    /* 00872427: mov dword ptr [ebp + 0x50], edi */ W32((u32)(r_ebp+0x50u), r_edi);
    /* 0087242a: mov dword ptr [ebp + 0x54], esi */ W32((u32)(r_ebp+0x54u), r_esi);
L_0087242d:; BB(0x0087242d);
    /* 0087242d: mov eax, 1 */ r_eax = 0x1u;
    /* 00872432: add esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00872435: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00872436: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00872437: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00872438: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00872439: ret  */ FN_RET(0x0087227c); r_esp += 4; return;
L_0087243a:; BB(0x0087243a);
    /* 0087243a: mov edx, dword ptr [ebp + 0x44] */ r_edx = R32((u32)(r_ebp+0x44u));
    /* 0087243d: jmp 0x87240d */ goto L_0087240d;
L_0087243f:; BB(0x0087243f);
    /* 0087243f: mov eax, dword ptr [esp + 0x54] */ r_eax = R32((u32)(r_esp+0x54u));
    /* 00872443: mov eax, dword ptr [eax + 0x58] */ r_eax = R32((u32)(r_eax+0x58u));
L_00872446:; BB(0x00872446);
    /* 00872446: mov esi, dword ptr [esp + 0x54] */ r_esi = R32((u32)(r_esp+0x54u));
L_0087244a:; BB(0x0087244a);
    /* 0087244a: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087244d: jge 0x872572 */ if ((fS==fO)) goto L_00872572;
L_00872453:; BB(0x00872453);
    /* 00872453: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00872456: je 0x872550 */ if (fZ) goto L_00872550;
L_0087245c:; BB(0x0087245c);
    /* 0087245c: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087245f: jge 0x87250d */ if ((fS==fO)) goto L_0087250d;
L_00872465:; BB(0x00872465);
    /* 00872465: cmp dword ptr [esi + 4], 0 */ {  u32 a = R32((u32)(r_esi+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00872469: je 0x8724e3 */ if (fZ) goto L_008724e3;
L_0087246b:; BB(0x0087246b);
    /* 0087246b: lea edx, [esp + 0x34] */ r_edx = (u32)(r_esp+0x34u);
    /* 0087246f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00872470: call 0x875ffc */ r_esp -= 4; W32(r_esp, 0x872475u); f_00875ffc();
    /* 00872475: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00872476: mov dword ptr [esi + 0x5c], eax */ W32((u32)(r_esi+0x5cu), r_eax);
    /* 00872479: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0087247b: mov ebx, dword ptr [esi + 0x34] */ r_ebx = R32((u32)(r_esi+0x34u));
    /* 0087247e: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00872480: jle 0x8724bd */ if ((fZ||fS!=fO)) goto L_008724bd;
L_00872482:; BB(0x00872482);
    /* 00872482: cmp ebx, 6 */ {  u32 a = r_ebx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00872485: jl 0x872693 */ if ((fS!=fO)) goto L_00872693;
L_0087248b:; BB(0x0087248b);
    /* 0087248b: mov edx, dword ptr [esi + 0x40] */ r_edx = R32((u32)(r_esi+0x40u));
L_0087248e:; BB(0x0087248e);
    /* 0087248e: cmp eax, dword ptr [edx + ecx*4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+r_ecx*4)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00872491: je 0x8724bd */ if (fZ) goto L_008724bd;
L_00872493:; BB(0x00872493);
    /* 00872493: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00872494: cmp eax, dword ptr [edx + ecx*4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+r_ecx*4)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00872497: je 0x8724bd */ if (fZ) goto L_008724bd;
L_00872499:; BB(0x00872499);
    /* 00872499: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0087249a: cmp eax, dword ptr [edx + ecx*4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+r_ecx*4)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0087249d: je 0x8724bd */ if (fZ) goto L_008724bd;
L_0087249f:; BB(0x0087249f);
    /* 0087249f: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008724a0: cmp eax, dword ptr [edx + ecx*4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+r_ecx*4)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008724a3: je 0x8724bd */ if (fZ) goto L_008724bd;
L_008724a5:; BB(0x008724a5);
    /* 008724a5: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008724a6: cmp eax, dword ptr [edx + ecx*4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+r_ecx*4)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008724a9: je 0x8724bd */ if (fZ) goto L_008724bd;
L_008724ab:; BB(0x008724ab);
    /* 008724ab: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008724ac: lea ebp, [ebx - 6] */ r_ebp = (u32)(r_ebx+0xfffffffau);
    /* 008724af: cmp ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008724b1: jle 0x87248e */ if ((fZ||fS!=fO)) goto L_0087248e;
L_008724b3:; BB(0x008724b3);
    /* 008724b3: cmp eax, dword ptr [edx + ecx*4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+r_ecx*4)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008724b6: je 0x8724bd */ if (fZ) goto L_008724bd;
L_008724b8:; BB(0x008724b8);
    /* 008724b8: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008724b9: cmp ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008724bb: jl 0x8724b3 */ if ((fS!=fO)) goto L_008724b3;
L_008724bd:; BB(0x008724bd);
    /* 008724bd: cmp ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008724bf: je 0x872767 */ if (fZ) goto L_00872767;
L_008724c5:; BB(0x008724c5);
    /* 008724c5: mov dword ptr [esi + 0x60], ecx */ W32((u32)(r_esi+0x60u), r_ecx);
    /* 008724c8: lea edx, [esi + 0x78] */ r_edx = (u32)(r_esi+0x78u);
    /* 008724cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008724cc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008724cd: call 0x87696c */ r_esp -= 4; W32(r_esp, 0x8724d2u); f_0087696c();
    /* 008724d2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008724d5: mov eax, 3 */ r_eax = 0x3u;
    /* 008724da: mov dword ptr [esi + 0x58], 3 */ W32((u32)(r_esi+0x58u), 0x3u);
    /* 008724e1: jmp 0x87250d */ goto L_0087250d;
L_008724e3:; BB(0x008724e3);
    /* 008724e3: lea ebx, [esi + 0x5c] */ r_ebx = (u32)(r_esi+0x5cu);
    /* 008724e6: lea ebp, [esp + 0x34] */ r_ebp = (u32)(r_esp+0x34u);
    /* 008724ea: mov eax, esi */ r_eax = r_esi;
    /* 008724ec: mov dword ptr [esp + 0xc], ebx */ W32((u32)(r_esp+0xcu), r_ebx);
    /* 008724f0: mov edx, dword ptr [esi + 0x48] */ r_edx = R32((u32)(r_esi+0x48u));
    /* 008724f3: mov ecx, dword ptr [esi + 0x4c] */ r_ecx = R32((u32)(r_esi+0x4cu));
    /* 008724f6: mov dword ptr [esp + 0x10], ebp */ W32((u32)(r_esp+0x10u), r_ebp);
    /* 008724fa: call 0x871058 */ r_esp -= 4; W32(r_esp, 0x8724ffu); f_00871058();
    /* 008724ff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00872501: jne 0x87275f */ if (!fZ) goto L_0087275f;
L_00872507:; BB(0x00872507);
    /* 00872507: inc dword ptr [esi + 0x60] */ { u32 ad = (u32)(r_esi+0x60u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0087250a: mov eax, dword ptr [esi + 0x58] */ r_eax = R32((u32)(r_esi+0x58u));
L_0087250d:; BB(0x0087250d);
    /* 0087250d: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00872510: jg 0x872546 */ if ((!fZ&&fS==fO)) goto L_00872546;
L_00872512:; BB(0x00872512);
    /* 00872512: jl 0x87253f */ if ((fS!=fO)) goto L_0087253f;
L_00872514:; BB(0x00872514);
    /* 00872514: cmp dword ptr [esi + 4], 0 */ {  u32 a = R32((u32)(r_esi+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00872518: jne 0x8726c5 */ if (!fZ) goto L_008726c5;
L_0087251e:; BB(0x0087251e);
    /* 0087251e: lea ebx, [esi + 0x1e0] */ r_ebx = (u32)(r_esi+0x1e0u);
    /* 00872524: push dword ptr [esi + 0x48] */ { u32 v = R32((u32)(r_esi+0x48u)); r_esp -= 4; W32(r_esp, v); }
    /* 00872527: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00872528: call 0x875b2c */ r_esp -= 4; W32(r_esp, 0x87252du); f_00875b2c();
    /* 0087252d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00872530: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00872532: je 0x87269b */ if (fZ) goto L_0087269b;
L_00872538:; BB(0x00872538);
    /* 00872538: mov eax, 0xffffff77 */ r_eax = 0xffffff77u;
    /* 0087253d: jmp 0x872548 */ goto L_00872548;
L_0087253f:; BB(0x0087253f);
    /* 0087253f: mov eax, 0xffffff7f */ r_eax = 0xffffff7fu;
    /* 00872544: jmp 0x872548 */ goto L_00872548;
L_00872546:; BB(0x00872546);
    /* 00872546: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00872548:; BB(0x00872548);
    /* 00872548: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0087254a: jl 0x87274a */ if ((fS!=fO)) goto L_0087274a;
L_00872550:; BB(0x00872550);
    /* 00872550: lea ebx, [esi + 0x78] */ r_ebx = (u32)(r_esi+0x78u);
    /* 00872553: lea edx, [esp + 0x34] */ r_edx = (u32)(r_esp+0x34u);
    /* 00872557: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00872558: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00872559: call 0x87658c */ r_esp -= 4; W32(r_esp, 0x87255eu); f_0087658c();
    /* 0087255e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00872561: mov eax, dword ptr [esi + 0x58] */ r_eax = R32((u32)(r_esi+0x58u));
    /* 00872564: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00872567: jne 0x87244a */ if (!fZ) goto L_0087244a;
L_0087256d:; BB(0x0087256d);
    /* 0087256d: jmp 0x872298 */ goto L_00872298;
L_00872572:; BB(0x00872572);
    /* 00872572: lea ebp, [esp + 0x34] */ r_ebp = (u32)(r_esp+0x34u);
    /* 00872576: lea ebx, [esi + 0x18] */ r_ebx = (u32)(r_esi+0x18u);
L_00872579:; BB(0x00872579);
    /* 00872579: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0087257a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0087257b: call 0x876198 */ r_esp -= 4; W32(r_esp, 0x872580u); f_00876198();
    /* 00872580: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00872583: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00872585: jl 0x872711 */ if ((fS!=fO)) goto L_00872711;
L_0087258b:; BB(0x0087258b);
    /* 0087258b: jne 0x8726fd */ if (!fZ) goto L_008726fd;
L_00872591:; BB(0x00872591);
    /* 00872591: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x872596u); f_00859dd6();
    /* 00872596: mov dword ptr [eax], 0 */ W32((u32)(r_eax), 0x0u);
    /* 0087259c: cmp dword ptr [esi], 0 */ {  u32 a = R32((u32)(r_esi)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0087259f: je 0x8725e4 */ if (fZ) goto L_008725e4;
L_008725a1:; BB(0x008725a1);
    /* 008725a1: push 0x2134 */ { u32 v = 0x2134u; r_esp -= 4; W32(r_esp, v); }
    /* 008725a6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008725a7: call 0x8760f8 */ r_esp -= 4; W32(r_esp, 0x8725acu); f_008760f8();
    /* 008725ac: push dword ptr [esi] */ { u32 v = R32((u32)(r_esi)); r_esp -= 4; W32(r_esp, v); }
    /* 008725ae: push 0x2134 */ { u32 v = 0x2134u; r_esp -= 4; W32(r_esp, v); }
    /* 008725b3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008725b5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008725b6: call dword ptr [esi + 0x2c0] */ { u32 t = R32((u32)(r_esi+0x2c0u)); r_esp -= 4; W32(r_esp, 0x8725bcu); call_ind(t); }
    /* 008725bc: mov edi, eax */ r_edi = r_eax;
    /* 008725be: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008725c1: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 008725c3: jle 0x8725d1 */ if ((fZ||fS!=fO)) goto L_008725d1;
L_008725c5:; BB(0x008725c5);
    /* 008725c5: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008725c6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008725c7: call 0x87617c */ r_esp -= 4; W32(r_esp, 0x8725ccu); f_0087617c();
    /* 008725cc: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008725cf: jmp 0x8725e6 */ goto L_008725e6;
L_008725d1:; BB(0x008725d1);
    /* 008725d1: jne 0x8725e6 */ if (!fZ) goto L_008725e6;
L_008725d3:; BB(0x008725d3);
    /* 008725d3: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x8725d8u); f_00859dd6();
    /* 008725d8: cmp dword ptr [eax], 0 */ {  u32 a = R32((u32)(r_eax)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008725db: je 0x8725e6 */ if (fZ) goto L_008725e6;
L_008725dd:; BB(0x008725dd);
    /* 008725dd: mov edi, 0xffffffff */ r_edi = 0xffffffffu;
    /* 008725e2: jmp 0x8725e6 */ goto L_008725e6;
L_008725e4:; BB(0x008725e4);
    /* 008725e4: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_008725e6:; BB(0x008725e6);
    /* 008725e6: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 008725e8: je 0x8726f3 */ if (fZ) goto L_008726f3;
L_008725ee:; BB(0x008725ee);
    /* 008725ee: jge 0x872579 */ if ((fS==fO)) goto L_00872579;
L_008725f0:; BB(0x008725f0);
    /* 008725f0: mov ecx, 0xffffff80 */ r_ecx = 0xffffff80u;
L_008725f5:; BB(0x008725f5);
    /* 008725f5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 008725f7: jl 0x87273d */ if ((fS!=fO)) goto L_0087273d;
L_008725fd:; BB(0x008725fd);
    /* 008725fd: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 00872601: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00872603: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00872605: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00872607: mov dword ptr [esp + 0x4c], eax */ W32((u32)(r_esp+0x4cu), r_eax);
    /* 0087260b: fild dword ptr [esp + 0x4c] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x4cu)));
    /* 0087260f: mov eax, dword ptr [esi + 0x58] */ r_eax = R32((u32)(r_esi+0x58u));
    /* 00872612: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00872615: fadd qword ptr [esi + 0x68] */ ST(0) = ST(0) + R_F64((u32)(r_esi+0x68u));
    /* 00872618: fstp qword ptr [esi + 0x68] */ W_F64((u32)(r_esi+0x68u), ST(0)); FPOP();
    /* 0087261b: jne 0x872453 */ if (!fZ) goto L_00872453;
L_00872621:; BB(0x00872621);
    /* 00872621: lea eax, [esp + 0x34] */ r_eax = (u32)(r_esp+0x34u);
    /* 00872625: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00872626: call 0x875ffc */ r_esp -= 4; W32(r_esp, 0x87262bu); f_00875ffc();
    /* 0087262b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0087262c: cmp eax, dword ptr [esi + 0x5c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+0x5cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0087262f: je 0x87268b */ if (fZ) goto L_0087268b;
L_00872631:; BB(0x00872631);
    /* 00872631: cmp dword ptr [esp + 0x80], 0 */ {  u32 a = R32((u32)(r_esp+0x80u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00872639: je 0x872730 */ if (fZ) goto L_00872730;
L_0087263f:; BB(0x0087263f);
    /* 0087263f: lea eax, [esi + 0x1e0] */ r_eax = (u32)(r_esi+0x1e0u);
    /* 00872645: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00872646: call 0x873fc4 */ r_esp -= 4; W32(r_esp, 0x87264bu); f_00873fc4();
    /* 0087264b: lea eax, [esi + 0x250] */ r_eax = (u32)(r_esi+0x250u);
    /* 00872651: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00872652: call 0x873ec4 */ r_esp -= 4; W32(r_esp, 0x872657u); f_00873ec4();
    /* 00872657: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0087265a: mov eax, 2 */ r_eax = 0x2u;
    /* 0087265f: cmp dword ptr [esi + 4], 0 */ {  u32 a = R32((u32)(r_esi+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00872663: mov dword ptr [esi + 0x58], 2 */ W32((u32)(r_esi+0x58u), 0x2u);
    /* 0087266a: jne 0x872453 */ if (!fZ) goto L_00872453;
L_00872670:; BB(0x00872670);
    /* 00872670: push dword ptr [esi + 0x48] */ { u32 v = R32((u32)(r_esi+0x48u)); r_esp -= 4; W32(r_esp, v); }
    /* 00872673: call 0x876cd8 */ r_esp -= 4; W32(r_esp, 0x872678u); f_00876cd8();
    /* 00872678: push dword ptr [esi + 0x4c] */ { u32 v = R32((u32)(r_esi+0x4cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0087267b: call 0x876c4c */ r_esp -= 4; W32(r_esp, 0x872680u); f_00876c4c();
    /* 00872680: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00872683: mov eax, dword ptr [esi + 0x58] */ r_eax = R32((u32)(r_esi+0x58u));
    /* 00872686: jmp 0x872453 */ goto L_00872453;
L_0087268b:; BB(0x0087268b);
    /* 0087268b: mov eax, dword ptr [esi + 0x58] */ r_eax = R32((u32)(r_esi+0x58u));
    /* 0087268e: jmp 0x872453 */ goto L_00872453;
L_00872693:; BB(0x00872693);
    /* 00872693: mov edx, dword ptr [esi + 0x40] */ r_edx = R32((u32)(r_esi+0x40u));
    /* 00872696: jmp 0x8724b3 */ goto L_008724b3;
L_0087269b:; BB(0x0087269b);
    /* 0087269b: lea edx, [esi + 0x250] */ r_edx = (u32)(r_esi+0x250u);
    /* 008726a1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008726a2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008726a3: call 0x875f44 */ r_esp -= 4; W32(r_esp, 0x8726a8u); f_00875f44();
    /* 008726a8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008726ab: mov dword ptr [esi + 0x58], 4 */ W32((u32)(r_esi+0x58u), 0x4u);
    /* 008726b2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008726b4: fld qword ptr [0x99a5f8] */ FPUSH(R_F64((u32)(0x99a5f8u)));
    /* 008726ba: fst qword ptr [esi + 0x68] */ W_F64((u32)(r_esi+0x68u), ST(0));
    /* 008726bd: fstp qword ptr [esi + 0x70] */ W_F64((u32)(r_esi+0x70u), ST(0)); FPOP();
    /* 008726c0: jmp 0x872548 */ goto L_00872548;
L_008726c5:; BB(0x008726c5);
    /* 008726c5: lea ebx, [esi + 0x1e0] */ r_ebx = (u32)(r_esi+0x1e0u);
    /* 008726cb: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 008726ce: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008726d0: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008726d2: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008726d4: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008726d6: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008726d8: add edx, dword ptr [esi + 0x48] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esi+0x48u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008726db: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008726dc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008726dd: call 0x875b2c */ r_esp -= 4; W32(r_esp, 0x8726e2u); f_00875b2c();
    /* 008726e2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008726e5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008726e7: je 0x87269b */ if (fZ) goto L_0087269b;
L_008726e9:; BB(0x008726e9);
    /* 008726e9: mov eax, 0xffffff77 */ r_eax = 0xffffff77u;
    /* 008726ee: jmp 0x872548 */ goto L_00872548;
L_008726f3:; BB(0x008726f3);
    /* 008726f3: mov ecx, 0xfffffffe */ r_ecx = 0xfffffffeu;
    /* 008726f8: jmp 0x8725f5 */ goto L_008725f5;
L_008726fd:; BB(0x008726fd);
    /* 008726fd: mov ecx, dword ptr [esi + 8] */ r_ecx = R32((u32)(r_esi+0x8u));
    /* 00872700: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00872701: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r; fC = (r < a); }
    /* 00872703: adc edx, dword ptr [esi + 0xc] */ { u32 c = fC; u32 a = r_edx; u32 b = R32((u32)(r_esi+0xcu)); u32 r = (a + b + c) & 0xffffffffu; r_edx = r;  }
    /* 00872706: mov dword ptr [esi + 8], eax */ W32((u32)(r_esi+0x8u), r_eax);
    /* 00872709: mov dword ptr [esi + 0xc], edx */ W32((u32)(r_esi+0xcu), r_edx);
    /* 0087270c: jmp 0x8725f5 */ goto L_008725f5;
L_00872711:; BB(0x00872711);
    /* 00872711: mov ecx, dword ptr [esi + 8] */ r_ecx = R32((u32)(r_esi+0x8u));
    /* 00872714: mov edi, dword ptr [esi + 0xc] */ r_edi = R32((u32)(r_esi+0xcu));
    /* 00872717: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00872718: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); }
    /* 0087271a: sbb edi, edx */ { u32 c = fC; u32 a = r_edi; u32 b = r_edx; u32 r = (a - b - c) & 0xffffffffu; r_edi = r;  }
    /* 0087271c: mov dword ptr [esi + 8], ecx */ W32((u32)(r_esi+0x8u), r_ecx);
    /* 0087271f: mov dword ptr [esi + 0xc], edi */ W32((u32)(r_esi+0xcu), r_edi);
    /* 00872722: jmp 0x872579 */ goto L_00872579;
L_00872727:; BB(0x00872727);
    /* 00872727: mov dword ptr [esp + 0x54], ebp */ W32((u32)(r_esp+0x54u), r_ebp);
    /* 0087272b: jmp 0x872446 */ goto L_00872446;
L_00872730:; BB(0x00872730);
    /* 00872730: mov eax, 0xfffffffe */ r_eax = 0xfffffffeu;
    /* 00872735: add esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00872738: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00872739: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0087273a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0087273b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0087273c: ret  */ FN_RET(0x0087227c); r_esp += 4; return;
L_0087273d:; BB(0x0087273d);
    /* 0087273d: mov eax, 0xfffffffe */ r_eax = 0xfffffffeu;
    /* 00872742: add esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00872745: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00872746: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00872747: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00872748: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00872749: ret  */ FN_RET(0x0087227c); r_esp += 4; return;
L_0087274a:; BB(0x0087274a);
    /* 0087274a: add esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0087274d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0087274e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0087274f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00872750: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00872751: ret  */ FN_RET(0x0087227c); r_esp += 4; return;
L_00872752:; BB(0x00872752);
    /* 00872752: mov eax, 0xfffffffd */ r_eax = 0xfffffffdu;
    /* 00872757: add esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0087275a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0087275b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0087275c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0087275d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0087275e: ret  */ FN_RET(0x0087227c); r_esp += 4; return;
L_0087275f:; BB(0x0087275f);
    /* 0087275f: add esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00872762: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00872763: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00872764: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00872765: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00872766: ret  */ FN_RET(0x0087227c); r_esp += 4; return;
L_00872767:; BB(0x00872767);
    /* 00872767: mov eax, 0xffffff77 */ r_eax = 0xffffff77u;
    /* 0087276c: add esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0087276f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00872770: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00872771: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00872772: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00872773: ret  */ FN_RET(0x0087227c); r_esp += 4; return;
}

void f_00872778(void) /* sub_872778 */
{
    FN_ENTER(0x00872778);
    /* 00872778: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00872779: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0087277a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0087277b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0087277c: sub esp, 0xa4 */ {  u32 a = r_esp; u32 b = 0xa4u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00872782: mov ebp, eax */ r_ebp = r_eax;
    /* 00872784: mov ecx, dword ptr [ebp + 0x58] */ r_ecx = R32((u32)(r_ebp+0x58u));
    /* 00872787: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087278a: jl 0x8727fa */ if ((fS!=fO)) goto L_008727fa;
L_0087278c:; BB(0x0087278c);
    /* 0087278c: cmp dword ptr [ebp + 4], 0 */ {  u32 a = R32((u32)(r_ebp+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00872790: je 0x8727e6 */ if (fZ) goto L_008727e6;
L_00872792:; BB(0x00872792);
    /* 00872792: mov esi, dword ptr [ebp + 0x34] */ r_esi = R32((u32)(r_ebp+0x34u));
    /* 00872795: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00872797: jl 0x8727e6 */ if ((fS!=fO)) goto L_008727e6;
L_00872799:; BB(0x00872799);
    /* 00872799: mov edx, 0 */ r_edx = 0x0u;
    /* 0087279e: mov ebx, 0 */ r_ebx = 0x0u;
    /* 008727a3: mov dword ptr [esp + 0x4c], edx */ W32((u32)(r_esp+0x4cu), r_edx);
    /* 008727a7: mov dword ptr [esp + 0x50], ebx */ W32((u32)(r_esp+0x50u), r_ebx);
    /* 008727ab: mov ebx, 0 */ r_ebx = 0x0u;
    /* 008727b0: jle 0x87280c */ if ((fZ||fS!=fO)) goto L_0087280c;
L_008727b2:; BB(0x008727b2);
    /* 008727b2: mov dword ptr [esp + 0x5c], ecx */ W32((u32)(r_esp+0x5cu), r_ecx);
    /* 008727b6: mov edi, dword ptr [esp + 0x50] */ r_edi = R32((u32)(r_esp+0x50u));
    /* 008727ba: mov dword ptr [esp + 0xc], ebp */ W32((u32)(r_esp+0xcu), r_ebp);
    /* 008727be: mov ebp, edx */ r_ebp = r_edx;
L_008727c0:; BB(0x008727c0);
    /* 008727c0: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 008727c4: mov edx, ebx */ r_edx = r_ebx;
    /* 008727c6: call 0x873318 */ r_esp -= 4; W32(r_esp, 0x8727cbu); f_00873318();
    /* 008727cb: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008727cc: add ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebp = r; fC = (r < a); }
    /* 008727ce: adc edi, edx */ { u32 c = fC; u32 a = r_edi; u32 b = r_edx; u32 r = (a + b + c) & 0xffffffffu; r_edi = r;  }
    /* 008727d0: cmp ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008727d2: jl 0x8727c0 */ if ((fS!=fO)) goto L_008727c0;
L_008727d4:; BB(0x008727d4);
    /* 008727d4: mov dword ptr [esp + 0x50], edi */ W32((u32)(r_esp+0x50u), r_edi);
    /* 008727d8: mov ecx, dword ptr [esp + 0x5c] */ r_ecx = R32((u32)(r_esp+0x5cu));
    /* 008727dc: mov dword ptr [esp + 0x4c], ebp */ W32((u32)(r_esp+0x4cu), r_ebp);
    /* 008727e0: mov ebp, dword ptr [esp + 0xc] */ r_ebp = R32((u32)(r_esp+0xcu));
    /* 008727e4: jmp 0x87280c */ goto L_0087280c;
L_008727e6:; BB(0x008727e6);
    /* 008727e6: mov edx, 0xffffff7d */ r_edx = 0xffffff7du;
    /* 008727eb: mov ebx, 0xffffffff */ r_ebx = 0xffffffffu;
    /* 008727f0: mov dword ptr [esp + 0x4c], edx */ W32((u32)(r_esp+0x4cu), r_edx);
    /* 008727f4: mov dword ptr [esp + 0x50], ebx */ W32((u32)(r_esp+0x50u), r_ebx);
    /* 008727f8: jmp 0x87280c */ goto L_0087280c;
L_008727fa:; BB(0x008727fa);
    /* 008727fa: mov edx, 0xffffff7d */ r_edx = 0xffffff7du;
    /* 008727ff: mov ebx, 0xffffffff */ r_ebx = 0xffffffffu;
    /* 00872804: mov dword ptr [esp + 0x4c], edx */ W32((u32)(r_esp+0x4cu), r_edx);
    /* 00872808: mov dword ptr [esp + 0x50], ebx */ W32((u32)(r_esp+0x50u), r_ebx);
L_0087280c:; BB(0x0087280c);
    /* 0087280c: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087280f: jl 0x872f01 */ if ((fS!=fO)) goto L_00872f01;
L_00872815:; BB(0x00872815);
    /* 00872815: cmp dword ptr [ebp + 4], 0 */ {  u32 a = R32((u32)(r_ebp+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00872819: je 0x872ef1 */ if (fZ) goto L_00872ef1;
L_0087281f:; BB(0x0087281f);
    /* 0087281f: mov edx, dword ptr [esp + 0xc0] */ r_edx = R32((u32)(r_esp+0xc0u));
    /* 00872826: sub edx, 0 */ {  u32 a = r_edx; u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu; r_edx = r; fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00872829: jl 0x872f01 */ if ((fS!=fO)) goto L_00872f01;
L_0087282f:; BB(0x0087282f);
    /* 0087282f: mov edx, dword ptr [esp + 0xbc] */ r_edx = R32((u32)(r_esp+0xbcu));
    /* 00872836: mov ecx, dword ptr [esp + 0x4c] */ r_ecx = R32((u32)(r_esp+0x4cu));
    /* 0087283a: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r; fC = (a < b); }
    /* 0087283c: mov ebx, dword ptr [esp + 0xc0] */ r_ebx = R32((u32)(r_esp+0xc0u));
    /* 00872843: mov esi, dword ptr [esp + 0x50] */ r_esi = R32((u32)(r_esp+0x50u));
    /* 00872847: sbb ebx, esi */ { u32 c = fC; u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b - c) & 0xffffffffu; r_ebx = r; fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00872849: jl 0x872853 */ if ((fS!=fO)) goto L_00872853;
L_0087284b:; BB(0x0087284b);
    /* 0087284b: or edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 0087284d: jne 0x872f01 */ if (!fZ) goto L_00872f01;
L_00872853:; BB(0x00872853);
    /* 00872853: mov ecx, dword ptr [ebp + 0x34] */ r_ecx = R32((u32)(r_ebp+0x34u));
    /* 00872856: lea edx, [ecx - 1] */ r_edx = (u32)(r_ecx+0xffffffffu);
    /* 00872859: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0087285b: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 0087285f: jl 0x8732a8 */ if ((fS!=fO)) goto L_008732a8;
L_00872865:; BB(0x00872865);
    /* 00872865: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00872866: cmp ecx, 6 */ {  u32 a = r_ecx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00872869: jl 0x8732a0 */ if ((fS!=fO)) goto L_008732a0;
L_0087286f:; BB(0x0087286f);
    /* 0087286f: mov esi, dword ptr [ebp + 0x44] */ r_esi = R32((u32)(r_ebp+0x44u));
    /* 00872872: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 00872876: mov edx, dword ptr [esp + 0x4c] */ r_edx = R32((u32)(r_esp+0x4cu));
    /* 0087287a: mov dword ptr [esp + 0xc], ebp */ W32((u32)(r_esp+0xcu), r_ebp);
    /* 0087287e: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
    /* 00872882: mov ebp, dword ptr [esp + 0xbc] */ r_ebp = R32((u32)(r_esp+0xbcu));
L_00872889:; BB(0x00872889);
    /* 00872889: lea ecx, [ebx + ebx] */ r_ecx = (u32)(r_ebx+r_ebx);
    /* 0087288c: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0087288e: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00872890: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00872892: mov edi, ebp */ r_edi = r_ebp;
    /* 00872894: sub edx, dword ptr [ecx + esi + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+r_esi+0x8u)); u32 r = (a - b) & 0xffffffffu; r_edx = r; fC = (a < b); }
    /* 00872898: sbb eax, dword ptr [ecx + esi + 0xc] */ { u32 c = fC; u32 a = r_eax; u32 b = R32((u32)(r_ecx+r_esi+0xcu)); u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 0087289c: sub edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_edi = r; fC = (a < b); }
    /* 0087289e: mov edi, dword ptr [esp + 0xc0] */ r_edi = R32((u32)(r_esp+0xc0u));
    /* 008728a5: sbb edi, eax */ { u32 c = fC; u32 a = r_edi; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_edi = r; fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008728a7: jge 0x87328b */ if ((fS==fO)) goto L_0087328b;
L_008728ad:; BB(0x008728ad);
    /* 008728ad: dec ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 008728ae: lea ecx, [ebx + ebx] */ r_ecx = (u32)(r_ebx+r_ebx);
    /* 008728b1: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008728b3: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008728b5: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008728b7: mov edi, ebp */ r_edi = r_ebp;
    /* 008728b9: sub edx, dword ptr [ecx + esi + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+r_esi+0x8u)); u32 r = (a - b) & 0xffffffffu; r_edx = r; fC = (a < b); }
    /* 008728bd: sbb eax, dword ptr [ecx + esi + 0xc] */ { u32 c = fC; u32 a = r_eax; u32 b = R32((u32)(r_ecx+r_esi+0xcu)); u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 008728c1: sub edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_edi = r; fC = (a < b); }
    /* 008728c3: mov edi, dword ptr [esp + 0xc0] */ r_edi = R32((u32)(r_esp+0xc0u));
    /* 008728ca: sbb edi, eax */ { u32 c = fC; u32 a = r_edi; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_edi = r; fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008728cc: jge 0x8732f9 */ if ((fS==fO)) goto L_008732f9;
L_008728d2:; BB(0x008728d2);
    /* 008728d2: dec ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 008728d3: lea ecx, [ebx + ebx] */ r_ecx = (u32)(r_ebx+r_ebx);
    /* 008728d6: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008728d8: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008728da: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008728dc: mov edi, ebp */ r_edi = r_ebp;
    /* 008728de: sub edx, dword ptr [ecx + esi + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+r_esi+0x8u)); u32 r = (a - b) & 0xffffffffu; r_edx = r; fC = (a < b); }
    /* 008728e2: sbb eax, dword ptr [ecx + esi + 0xc] */ { u32 c = fC; u32 a = r_eax; u32 b = R32((u32)(r_ecx+r_esi+0xcu)); u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 008728e6: sub edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_edi = r; fC = (a < b); }
    /* 008728e8: mov edi, dword ptr [esp + 0xc0] */ r_edi = R32((u32)(r_esp+0xc0u));
    /* 008728ef: sbb edi, eax */ { u32 c = fC; u32 a = r_edi; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_edi = r; fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008728f1: jge 0x8732e4 */ if ((fS==fO)) goto L_008732e4;
L_008728f7:; BB(0x008728f7);
    /* 008728f7: dec ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 008728f8: lea ecx, [ebx + ebx] */ r_ecx = (u32)(r_ebx+r_ebx);
    /* 008728fb: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008728fd: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008728ff: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00872901: mov edi, ebp */ r_edi = r_ebp;
    /* 00872903: sub edx, dword ptr [ecx + esi + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+r_esi+0x8u)); u32 r = (a - b) & 0xffffffffu; r_edx = r; fC = (a < b); }
    /* 00872907: sbb eax, dword ptr [ecx + esi + 0xc] */ { u32 c = fC; u32 a = r_eax; u32 b = R32((u32)(r_ecx+r_esi+0xcu)); u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 0087290b: sub edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_edi = r; fC = (a < b); }
    /* 0087290d: mov edi, dword ptr [esp + 0xc0] */ r_edi = R32((u32)(r_esp+0xc0u));
    /* 00872914: sbb edi, eax */ { u32 c = fC; u32 a = r_edi; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_edi = r; fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00872916: jge 0x8732cf */ if ((fS==fO)) goto L_008732cf;
L_0087291c:; BB(0x0087291c);
    /* 0087291c: dec ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0087291d: lea ecx, [ebx + ebx] */ r_ecx = (u32)(r_ebx+r_ebx);
    /* 00872920: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00872922: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00872924: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00872926: mov edi, ebp */ r_edi = r_ebp;
    /* 00872928: sub edx, dword ptr [ecx + esi + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+r_esi+0x8u)); u32 r = (a - b) & 0xffffffffu; r_edx = r; fC = (a < b); }
    /* 0087292c: sbb eax, dword ptr [ecx + esi + 0xc] */ { u32 c = fC; u32 a = r_eax; u32 b = R32((u32)(r_ecx+r_esi+0xcu)); u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 00872930: sub edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_edi = r; fC = (a < b); }
    /* 00872932: mov edi, dword ptr [esp + 0xc0] */ r_edi = R32((u32)(r_esp+0xc0u));
    /* 00872939: sbb edi, eax */ { u32 c = fC; u32 a = r_edi; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_edi = r; fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087293b: jge 0x8732ba */ if ((fS==fO)) goto L_008732ba;
L_00872941:; BB(0x00872941);
    /* 00872941: dec ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 00872942: cmp ebx, 6 */ {  u32 a = r_ebx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00872945: jge 0x872889 */ if ((fS==fO)) goto L_00872889;
L_0087294b:; BB(0x0087294b);
    /* 0087294b: mov dword ptr [esp + 0x50], eax */ W32((u32)(r_esp+0x50u), r_eax);
    /* 0087294f: mov ebp, dword ptr [esp + 0xc] */ r_ebp = R32((u32)(r_esp+0xcu));
    /* 00872953: mov dword ptr [esp + 0x4c], edx */ W32((u32)(r_esp+0x4cu), r_edx);
    /* 00872957: mov dword ptr [esp + 0x10], ebx */ W32((u32)(r_esp+0x10u), r_ebx);
L_0087295b:; BB(0x0087295b);
    /* 0087295b: mov dword ptr [esp + 0xc], ebp */ W32((u32)(r_esp+0xcu), r_ebp);
    /* 0087295f: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 00872963: mov edx, dword ptr [esp + 0x4c] */ r_edx = R32((u32)(r_esp+0x4cu));
    /* 00872967: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
    /* 0087296b: mov ebp, dword ptr [esp + 0xbc] */ r_ebp = R32((u32)(r_esp+0xbcu));
L_00872972:; BB(0x00872972);
    /* 00872972: lea ecx, [ebx + ebx] */ r_ecx = (u32)(r_ebx+r_ebx);
    /* 00872975: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00872977: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00872979: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0087297b: mov edi, ebp */ r_edi = r_ebp;
    /* 0087297d: sub edx, dword ptr [ecx + esi + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+r_esi+0x8u)); u32 r = (a - b) & 0xffffffffu; r_edx = r; fC = (a < b); }
    /* 00872981: sbb eax, dword ptr [ecx + esi + 0xc] */ { u32 c = fC; u32 a = r_eax; u32 b = R32((u32)(r_ecx+r_esi+0xcu)); u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 00872985: sub edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_edi = r; fC = (a < b); }
    /* 00872987: mov edi, dword ptr [esp + 0xc0] */ r_edi = R32((u32)(r_esp+0xc0u));
    /* 0087298e: sbb edi, eax */ { u32 c = fC; u32 a = r_edi; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_edi = r; fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00872990: jge 0x873276 */ if ((fS==fO)) goto L_00873276;
L_00872996:; BB(0x00872996);
    /* 00872996: dec ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 00872997: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00872999: jge 0x872972 */ if ((fS==fO)) goto L_00872972;
L_0087299b:; BB(0x0087299b);
    /* 0087299b: mov dword ptr [esp + 0x50], eax */ W32((u32)(r_esp+0x50u), r_eax);
    /* 0087299f: mov ebp, dword ptr [esp + 0xc] */ r_ebp = R32((u32)(r_esp+0xcu));
    /* 008729a3: mov dword ptr [esp + 0x4c], edx */ W32((u32)(r_esp+0x4cu), r_edx);
    /* 008729a7: mov dword ptr [esp + 0x10], ebx */ W32((u32)(r_esp+0x10u), r_ebx);
    /* 008729ab: mov edx, ebx */ r_edx = r_ebx;
    /* 008729ad: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 008729b0: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008729b2: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008729b4: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
L_008729b6:; BB(0x008729b6);
    /* 008729b6: mov dword ptr [esp + 0xc], ebp */ W32((u32)(r_esp+0xcu), r_ebp);
    /* 008729ba: mov edx, dword ptr [ebp + 0x38] */ r_edx = R32((u32)(r_ebp+0x38u));
    /* 008729bd: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 008729c1: mov eax, dword ptr [edx + ebp*8 + 8] */ r_eax = R32((u32)(r_edx+r_ebp*8+0x8u));
    /* 008729c5: mov ebx, dword ptr [edx + ebp*8] */ r_ebx = R32((u32)(r_edx+r_ebp*8));
    /* 008729c8: mov edi, dword ptr [edx + ebp*8 + 4] */ r_edi = R32((u32)(r_edx+r_ebp*8+0x4u));
    /* 008729cc: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 008729d0: mov eax, dword ptr [edx + ebp*8 + 0xc] */ r_eax = R32((u32)(r_edx+r_ebp*8+0xcu));
    /* 008729d4: mov edx, dword ptr [ecx + esi + 4] */ r_edx = R32((u32)(r_ecx+r_esi+0x4u));
    /* 008729d8: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 008729dc: mov eax, dword ptr [ecx + esi] */ r_eax = R32((u32)(r_ecx+r_esi));
    /* 008729df: mov ebp, dword ptr [ecx + esi + 8] */ r_ebp = R32((u32)(r_ecx+r_esi+0x8u));
    /* 008729e3: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 008729e7: mov esi, dword ptr [ecx + esi + 0xc] */ r_esi = R32((u32)(r_ecx+r_esi+0xcu));
    /* 008729eb: mov ecx, dword ptr [esp + 0xbc] */ r_ecx = R32((u32)(r_esp+0xbcu));
    /* 008729f2: mov dword ptr [esp + 0x30], edi */ W32((u32)(r_esp+0x30u), r_edi);
    /* 008729f6: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
    /* 008729fa: add ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebp = r; fC = (r < a); }
    /* 008729fc: mov dword ptr [esp + 0x20], ebp */ W32((u32)(r_esp+0x20u), r_ebp);
    /* 00872a00: adc esi, edx */ { u32 c = fC; u32 a = r_esi; u32 b = r_edx; u32 r = (a + b + c) & 0xffffffffu; r_esi = r;  }
    /* 00872a02: mov ebp, dword ptr [esp + 0x4c] */ r_ebp = R32((u32)(r_esp+0x4cu));
    /* 00872a06: mov dword ptr [esp + 0x3c], esi */ W32((u32)(r_esp+0x3cu), r_esi);
    /* 00872a0a: mov esi, dword ptr [esp + 0x50] */ r_esi = R32((u32)(r_esp+0x50u));
    /* 00872a0e: sub ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); }
    /* 00872a10: mov ebp, dword ptr [esp + 0xc0] */ r_ebp = R32((u32)(r_esp+0xc0u));
    /* 00872a17: sbb ebp, esi */ { u32 c = fC; u32 a = r_ebp; u32 b = r_esi; u32 r = (a - b - c) & 0xffffffffu; r_ebp = r;  }
    /* 00872a19: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fC = (r < a); }
    /* 00872a1b: mov dword ptr [esp + 0x24], ecx */ W32((u32)(r_esp+0x24u), r_ecx);
    /* 00872a1f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00872a21: adc ebp, edx */ { u32 c = fC; u32 a = r_ebp; u32 b = r_edx; u32 r = (a + b + c) & 0xffffffffu; r_ebp = r;  }
    /* 00872a23: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 00872a27: mov dword ptr [esp + 0x28], ebp */ W32((u32)(r_esp+0x28u), r_ebp);
    /* 00872a2b: mov ebp, dword ptr [esp + 0xc] */ r_ebp = R32((u32)(r_esp+0xcu));
    /* 00872a2f: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); }
    /* 00872a31: mov ecx, edi */ r_ecx = r_edi;
    /* 00872a33: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 00872a37: sbb ecx, edx */ { u32 c = fC; u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r; fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00872a39: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 00872a3d: jge 0x87326e */ if ((fS==fO)) goto L_0087326e;
L_00872a43:; BB(0x00872a43);
    /* 00872a43: lea esi, [ebp + 0x18] */ r_esi = (u32)(r_ebp+0x18u);
    /* 00872a46: mov dword ptr [esp + 0x54], esi */ W32((u32)(r_esp+0x54u), r_esi);
    /* 00872a4a: mov dword ptr [esp + 0x48], edi */ W32((u32)(r_esp+0x48u), r_edi);
    /* 00872a4e: mov dword ptr [esp + 0x2c], ebx */ W32((u32)(r_esp+0x2cu), r_ebx);
    /* 00872a52: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 00872a56: mov ebx, eax */ r_ebx = r_eax;
L_00872a58:; BB(0x00872a58);
    /* 00872a58: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
    /* 00872a5c: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 00872a60: sub esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_esi = r; fC = (a < b); }
    /* 00872a62: mov ecx, dword ptr [esp + 0x34] */ r_ecx = R32((u32)(r_esp+0x34u));
    /* 00872a66: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 00872a6a: mov edi, esi */ r_edi = r_esi;
    /* 00872a6c: sbb ecx, edx */ { u32 c = fC; u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r;  }
    /* 00872a6e: mov edx, ecx */ r_edx = r_ecx;
    /* 00872a70: sub edi, 0x2134 */ {  u32 a = r_edi; u32 b = 0x2134u; u32 r = (a - b) & 0xffffffffu; r_edi = r; fC = (a < b); }
    /* 00872a76: sbb edx, 0 */ { u32 c = fC; u32 a = r_edx; u32 b = 0x0u; u32 r = (a - b - c) & 0xffffffffu; r_edx = r; fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00872a79: jge 0x872a85 */ if ((fS==fO)) goto L_00872a85;
L_00872a7b:; BB(0x00872a7b);
    /* 00872a7b: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 00872a7f: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
    /* 00872a83: jmp 0x872aea */ goto L_00872aea;
L_00872a85:; BB(0x00872a85);
    /* 00872a85: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 00872a89: mov edi, dword ptr [esp + 0x28] */ r_edi = R32((u32)(r_esp+0x28u));
    /* 00872a8d: sub edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edx = r; fC = (a < b); }
    /* 00872a8f: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 00872a93: sbb edi, eax */ { u32 c = fC; u32 a = r_edi; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_edi = r;  }
    /* 00872a95: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00872a96: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00872a97: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00872a98: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00872a99: call 0x85ada0 */ r_esp -= 4; W32(r_esp, 0x872a9eu); f_0085ada0();
    /* 00872a9e: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 00872aa2: mov esi, dword ptr [esp + 0x3c] */ r_esi = R32((u32)(r_esp+0x3cu));
    /* 00872aa6: sub ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); }
    /* 00872aa8: mov edi, dword ptr [esp + 0x38] */ r_edi = R32((u32)(r_esp+0x38u));
    /* 00872aac: sbb esi, edi */ { u32 c = fC; u32 a = r_esi; u32 b = r_edi; u32 r = (a - b - c) & 0xffffffffu; r_esi = r;  }
    /* 00872aae: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00872aaf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00872ab0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00872ab1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00872ab2: call 0x85ade0 */ r_esp -= 4; W32(r_esp, 0x872ab7u); f_0085ade0();
    /* 00872ab7: mov edi, edx */ r_edi = r_edx;
    /* 00872ab9: mov esi, eax */ r_esi = r_eax;
    /* 00872abb: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 00872abf: add esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_esi = r; fC = (r < a); }
    /* 00872ac1: mov ecx, dword ptr [esp + 0x30] */ r_ecx = R32((u32)(r_esp+0x30u));
    /* 00872ac5: adc edi, ecx */ { u32 c = fC; u32 a = r_edi; u32 b = r_ecx; u32 r = (a + b + c) & 0xffffffffu; r_edi = r;  }
    /* 00872ac7: add esi, 0xffffdecc */ {  u32 a = r_esi; u32 b = 0xffffdeccu; u32 r = (a + b) & 0xffffffffu; r_esi = r; fC = (r < a); }
    /* 00872acd: adc edi, -1 */ { u32 c = fC; u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a + b + c) & 0xffffffffu; r_edi = r;  }
    /* 00872ad0: mov eax, esi */ r_eax = r_esi;
    /* 00872ad2: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); }
    /* 00872ad4: mov edx, edi */ r_edx = r_edi;
    /* 00872ad6: sbb edx, ecx */ { u32 c = fC; u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b - c) & 0xffffffffu; r_edx = r; fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00872ad8: jl 0x872ade */ if ((fS!=fO)) goto L_00872ade;
L_00872ada:; BB(0x00872ada);
    /* 00872ada: or eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00872adc: jne 0x872aea */ if (!fZ) goto L_00872aea;
L_00872ade:; BB(0x00872ade);
    /* 00872ade: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 00872ae2: mov edi, ecx */ r_edi = r_ecx;
    /* 00872ae4: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r; fC = (r < a); }
    /* 00872ae7: adc edi, 0 */ { u32 c = fC; u32 a = r_edi; u32 b = 0x0u; u32 r = (a + b + c) & 0xffffffffu; r_edi = r;  }
L_00872aea:; BB(0x00872aea);
    /* 00872aea: mov ecx, dword ptr [ebp] */ r_ecx = R32((u32)(r_ebp));
    /* 00872aed: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00872aef: je 0x872b0f */ if (fZ) goto L_00872b0f;
L_00872af1:; BB(0x00872af1);
    /* 00872af1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00872af3: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00872af4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00872af5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00872af6: call dword ptr [ebp + 0x2c4] */ { u32 t = R32((u32)(r_ebp+0x2c4u)); r_esp -= 4; W32(r_esp, 0x872afcu); call_ind(t); }
    /* 00872afc: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
    /* 00872aff: mov ecx, dword ptr [esp + 0x64] */ r_ecx = R32((u32)(r_esp+0x64u));
    /* 00872b03: mov dword ptr [ebp + 0xc], edi */ W32((u32)(r_ebp+0xcu), r_edi);
    /* 00872b06: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00872b07: call 0x876954 */ r_esp -= 4; W32(r_esp, 0x872b0cu); f_00876954();
    /* 00872b0c: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00872b0f:; BB(0x00872b0f);
    /* 00872b0f: mov dword ptr [esp + 0x44], edi */ W32((u32)(r_esp+0x44u), r_edi);
    /* 00872b13: mov dword ptr [esp + 0x40], esi */ W32((u32)(r_esp+0x40u), r_esi);
    /* 00872b17: mov dword ptr [esp + 0x1c], ebx */ W32((u32)(r_esp+0x1cu), r_ebx);
L_00872b1b:; BB(0x00872b1b);
    /* 00872b1b: lea edi, [esp + 0x84] */ r_edi = (u32)(r_esp+0x84u);
    /* 00872b22: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00872b25: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00872b28: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
    /* 00872b2c: mov ebx, dword ptr [esp + 0x34] */ r_ebx = R32((u32)(r_esp+0x34u));
    /* 00872b30: sub esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_esi = r; fC = (a < b); }
    /* 00872b32: sbb ebx, edx */ { u32 c = fC; u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b - c) & 0xffffffffu; r_ebx = r;  }
    /* 00872b34: mov eax, ebx */ r_eax = r_ebx;
    /* 00872b36: sub eax, 0 */ {  u32 a = r_eax; u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00872b39: jl 0x872b43 */ if ((fS!=fO)) goto L_00872b43;
L_00872b3b:; BB(0x00872b3b);
    /* 00872b3b: or eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00872b3d: je 0x872b43 */ if (fZ) goto L_00872b43;
L_00872b3f:; BB(0x00872b3f);
    /* 00872b3f: add esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_esi = r; fC = (r < a); }
    /* 00872b41: adc ebx, edx */ { u32 c = fC; u32 a = r_ebx; u32 b = r_edx; u32 r = (a + b + c) & 0xffffffffu; r_ebx = r;  }
L_00872b43:; BB(0x00872b43);
    /* 00872b43: mov edx, ebx */ r_edx = r_ebx;
    /* 00872b45: sub edx, 0 */ {  u32 a = r_edx; u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu; r_edx = r; fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00872b48: jl 0x872b5e */ if ((fS!=fO)) goto L_00872b5e;
L_00872b4a:; BB(0x00872b4a);
    /* 00872b4a: or edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 00872b4c: je 0x872b5e */ if (fZ) goto L_00872b5e;
L_00872b4e:; BB(0x00872b4e);
    /* 00872b4e: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00872b51: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00872b54: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r; fC = (a < b); }
    /* 00872b56: sbb ecx, ebx */ { u32 c = fC; u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r; fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00872b58: jge 0x87325f */ if ((fS==fO)) goto L_0087325f;
L_00872b5e:; BB(0x00872b5e);
    /* 00872b5e: lea edx, [esp + 0x84] */ r_edx = (u32)(r_esp+0x84u);
    /* 00872b65: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00872b66: mov ecx, dword ptr [esp + 0x58] */ r_ecx = R32((u32)(r_esp+0x58u));
    /* 00872b6a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00872b6b: call 0x876198 */ r_esp -= 4; W32(r_esp, 0x872b70u); f_00876198();
    /* 00872b70: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00872b73: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00872b75: jl 0x873249 */ if ((fS!=fO)) goto L_00873249;
L_00872b7b:; BB(0x00872b7b);
    /* 00872b7b: jne 0x873233 */ if (!fZ) goto L_00873233;
L_00872b81:; BB(0x00872b81);
    /* 00872b81: mov edx, esi */ r_edx = r_esi;
    /* 00872b83: or edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 00872b85: je 0x872bf9 */ if (fZ) goto L_00872bf9;
L_00872b87:; BB(0x00872b87);
    /* 00872b87: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x872b8cu); f_00859dd6();
    /* 00872b8c: mov dword ptr [eax], 0 */ W32((u32)(r_eax), 0x0u);
    /* 00872b92: cmp dword ptr [ebp], 0 */ {  u32 a = R32((u32)(r_ebp)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00872b96: je 0x872be4 */ if (fZ) goto L_00872be4;
L_00872b98:; BB(0x00872b98);
    /* 00872b98: push 0x2134 */ { u32 v = 0x2134u; r_esp -= 4; W32(r_esp, v); }
    /* 00872b9d: mov edx, dword ptr [esp + 0x58] */ r_edx = R32((u32)(r_esp+0x58u));
    /* 00872ba1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00872ba2: call 0x8760f8 */ r_esp -= 4; W32(r_esp, 0x872ba7u); f_008760f8();
    /* 00872ba7: push dword ptr [ebp] */ { u32 v = R32((u32)(r_ebp)); r_esp -= 4; W32(r_esp, v); }
    /* 00872baa: push 0x2134 */ { u32 v = 0x2134u; r_esp -= 4; W32(r_esp, v); }
    /* 00872baf: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00872bb1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00872bb2: call dword ptr [ebp + 0x2c0] */ { u32 t = R32((u32)(r_ebp+0x2c0u)); r_esp -= 4; W32(r_esp, 0x872bb8u); call_ind(t); }
    /* 00872bb8: mov edi, eax */ r_edi = r_eax;
    /* 00872bba: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00872bbd: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00872bbf: jle 0x872bd1 */ if ((fZ||fS!=fO)) goto L_00872bd1;
L_00872bc1:; BB(0x00872bc1);
    /* 00872bc1: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00872bc2: mov edx, dword ptr [esp + 0x58] */ r_edx = R32((u32)(r_esp+0x58u));
    /* 00872bc6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00872bc7: call 0x87617c */ r_esp -= 4; W32(r_esp, 0x872bccu); f_0087617c();
    /* 00872bcc: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00872bcf: jmp 0x872be6 */ goto L_00872be6;
L_00872bd1:; BB(0x00872bd1);
    /* 00872bd1: jne 0x872be6 */ if (!fZ) goto L_00872be6;
L_00872bd3:; BB(0x00872bd3);
    /* 00872bd3: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x872bd8u); f_00859dd6();
    /* 00872bd8: cmp dword ptr [eax], 0 */ {  u32 a = R32((u32)(r_eax)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00872bdb: je 0x872be6 */ if (fZ) goto L_00872be6;
L_00872bdd:; BB(0x00872bdd);
    /* 00872bdd: mov edi, 0xffffffff */ r_edi = 0xffffffffu;
    /* 00872be2: jmp 0x872be6 */ goto L_00872be6;
L_00872be4:; BB(0x00872be4);
    /* 00872be4: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_00872be6:; BB(0x00872be6);
    /* 00872be6: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00872be8: je 0x872f20 */ if (fZ) goto L_00872f20;
L_00872bee:; BB(0x00872bee);
    /* 00872bee: jge 0x872b43 */ if ((fS==fO)) goto L_00872b43;
L_00872bf4:; BB(0x00872bf4);
    /* 00872bf4: jmp 0x872f11 */ goto L_00872f11;
L_00872bf9:; BB(0x00872bf9);
    /* 00872bf9: mov esi, 0xffffffff */ r_esi = 0xffffffffu;
    /* 00872bfe: mov edi, 0xffffffff */ r_edi = 0xffffffffu;
L_00872c03:; BB(0x00872c03);
    /* 00872c03: lea ecx, [esi + 0x80] */ r_ecx = (u32)(r_esi+0x80u);
    /* 00872c09: lea edx, [edi + 1] */ r_edx = (u32)(r_edi+0x1u);
    /* 00872c0c: or ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00872c0e: je 0x872f2f */ if (fZ) goto L_00872f2f;
L_00872c14:; BB(0x00872c14);
    /* 00872c14: mov edx, edi */ r_edx = r_edi;
    /* 00872c16: sub edx, 0 */ {  u32 a = r_edx; u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu; r_edx = r; fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00872c19: jge 0x872cd3 */ if ((fS==fO)) goto L_00872cd3;
L_00872c1f:; BB(0x00872c1f);
    /* 00872c1f: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 00872c23: mov ecx, dword ptr [esp + 0x30] */ r_ecx = R32((u32)(r_esp+0x30u));
    /* 00872c27: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r; fC = (r < a); }
    /* 00872c2a: mov edx, dword ptr [esp + 0x40] */ r_edx = R32((u32)(r_esp+0x40u));
    /* 00872c2e: adc ecx, 0 */ { u32 c = fC; u32 a = r_ecx; u32 b = 0x0u; u32 r = (a + b + c) & 0xffffffffu; r_ecx = r;  }
    /* 00872c31: mov edi, dword ptr [esp + 0x44] */ r_edi = R32((u32)(r_esp+0x44u));
    /* 00872c35: sub edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edx = r; fC = (a < b); }
    /* 00872c37: sbb edi, ecx */ { u32 c = fC; u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b - c) & 0xffffffffu; r_edi = r; fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00872c39: jl 0x872c3f */ if ((fS!=fO)) goto L_00872c3f;
L_00872c3b:; BB(0x00872c3b);
    /* 00872c3b: or edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 00872c3d: jne 0x872c54 */ if (!fZ) goto L_00872c54;
L_00872c3f:; BB(0x00872c3f);
    /* 00872c3f: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 00872c43: mov ecx, dword ptr [esp + 0x30] */ r_ecx = R32((u32)(r_esp+0x30u));
    /* 00872c47: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 00872c4b: mov dword ptr [esp + 0x34], ecx */ W32((u32)(r_esp+0x34u), r_ecx);
    /* 00872c4f: jmp 0x872e22 */ goto L_00872e22;
L_00872c54:; BB(0x00872c54);
    /* 00872c54: mov edx, dword ptr [esp + 0x40] */ r_edx = R32((u32)(r_esp+0x40u));
    /* 00872c58: or edx, dword ptr [esp + 0x44] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x44u)); u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 00872c5c: je 0x872f2f */ if (fZ) goto L_00872f2f;
L_00872c62:; BB(0x00872c62);
    /* 00872c62: mov edx, dword ptr [esp + 0x40] */ r_edx = R32((u32)(r_esp+0x40u));
    /* 00872c66: mov edi, dword ptr [esp + 0x44] */ r_edi = R32((u32)(r_esp+0x44u));
    /* 00872c6a: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 00872c6e: add edx, 0xffffdecc */ {  u32 a = r_edx; u32 b = 0xffffdeccu; u32 r = (a + b) & 0xffffffffu; r_edx = r; fC = (r < a); }
    /* 00872c74: mov dword ptr [esp + 0x40], edx */ W32((u32)(r_esp+0x40u), r_edx);
    /* 00872c78: adc edi, -1 */ { u32 c = fC; u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a + b + c) & 0xffffffffu; r_edi = r;  }
    /* 00872c7b: mov dword ptr [esp + 0x44], edi */ W32((u32)(r_esp+0x44u), r_edi);
    /* 00872c7f: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r; fC = (a < b); }
    /* 00872c81: mov esi, dword ptr [esp + 0x30] */ r_esi = R32((u32)(r_esp+0x30u));
    /* 00872c85: sbb edi, esi */ { u32 c = fC; u32 a = r_edi; u32 b = r_esi; u32 r = (a - b - c) & 0xffffffffu; r_edi = r; fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00872c87: jl 0x872c8d */ if ((fS!=fO)) goto L_00872c8d;
L_00872c89:; BB(0x00872c89);
    /* 00872c89: or edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 00872c8b: jne 0x872c95 */ if (!fZ) goto L_00872c95;
L_00872c8d:; BB(0x00872c8d);
    /* 00872c8d: mov dword ptr [esp + 0x40], ebx */ W32((u32)(r_esp+0x40u), r_ebx);
    /* 00872c91: mov dword ptr [esp + 0x44], ecx */ W32((u32)(r_esp+0x44u), r_ecx);
L_00872c95:; BB(0x00872c95);
    /* 00872c95: mov ebx, dword ptr [ebp] */ r_ebx = R32((u32)(r_ebp));
    /* 00872c98: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00872c9a: je 0x872e22 */ if (fZ) goto L_00872e22;
L_00872ca0:; BB(0x00872ca0);
    /* 00872ca0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00872ca2: mov edx, dword ptr [esp + 0x48] */ r_edx = R32((u32)(r_esp+0x48u));
    /* 00872ca6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00872ca7: mov ecx, dword ptr [esp + 0x48] */ r_ecx = R32((u32)(r_esp+0x48u));
    /* 00872cab: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00872cac: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00872cad: call dword ptr [ebp + 0x2c4] */ { u32 t = R32((u32)(r_ebp+0x2c4u)); r_esp -= 4; W32(r_esp, 0x872cb3u); call_ind(t); }
    /* 00872cb3: mov edx, dword ptr [esp + 0x50] */ r_edx = R32((u32)(r_esp+0x50u));
    /* 00872cb7: mov ecx, dword ptr [esp + 0x54] */ r_ecx = R32((u32)(r_esp+0x54u));
    /* 00872cbb: mov ebx, dword ptr [esp + 0x64] */ r_ebx = R32((u32)(r_esp+0x64u));
    /* 00872cbf: mov dword ptr [ebp + 8], edx */ W32((u32)(r_ebp+0x8u), r_edx);
    /* 00872cc2: mov dword ptr [ebp + 0xc], ecx */ W32((u32)(r_ebp+0xcu), r_ecx);
    /* 00872cc5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00872cc6: call 0x876954 */ r_esp -= 4; W32(r_esp, 0x872ccbu); f_00876954();
    /* 00872ccb: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00872cce: jmp 0x872e22 */ goto L_00872e22;
L_00872cd3:; BB(0x00872cd3);
    /* 00872cd3: lea edx, [esp + 0x84] */ r_edx = (u32)(r_esp+0x84u);
    /* 00872cda: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00872cdb: call 0x8768e8 */ r_esp -= 4; W32(r_esp, 0x872ce0u); f_008768e8();
    /* 00872ce0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00872ce1: lea ebx, [eax + 1] */ r_ebx = (u32)(r_eax+0x1u);
    /* 00872ce4: lea ecx, [edx + 1] */ r_ecx = (u32)(r_edx+0x1u);
    /* 00872ce7: or ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); }
    /* 00872ce9: je 0x872e22 */ if (fZ) goto L_00872e22;
L_00872cef:; BB(0x00872cef);
    /* 00872cef: mov ebx, eax */ r_ebx = r_eax;
    /* 00872cf1: mov ecx, dword ptr [esp + 0x24] */ r_ecx = R32((u32)(r_esp+0x24u));
    /* 00872cf5: sub ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_ebx = r; fC = (a < b); }
    /* 00872cf7: mov ebx, edx */ r_ebx = r_edx;
    /* 00872cf9: mov ecx, dword ptr [esp + 0x28] */ r_ecx = R32((u32)(r_esp+0x28u));
    /* 00872cfd: sbb ebx, ecx */ { u32 c = fC; u32 a = r_ebx; u32 b = r_ecx; u32 r = (a - b - c) & 0xffffffffu; r_ebx = r; fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00872cff: jge 0x872d4f */ if ((fS==fO)) goto L_00872d4f;
L_00872d01:; BB(0x00872d01);
    /* 00872d01: mov dword ptr [esp + 0x2c], esi */ W32((u32)(r_esp+0x2cu), r_esi);
    /* 00872d05: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00872d08: mov ebx, dword ptr [ebp + 0xc] */ r_ebx = R32((u32)(r_ebp+0xcu));
    /* 00872d0b: mov dword ptr [esp + 0x48], edi */ W32((u32)(r_esp+0x48u), r_edi);
    /* 00872d0f: mov esi, dword ptr [esp + 0x24] */ r_esi = R32((u32)(r_esp+0x24u));
    /* 00872d13: mov dword ptr [esp + 0x18], ecx */ W32((u32)(r_esp+0x18u), r_ecx);
    /* 00872d17: mov edi, dword ptr [esp + 0x28] */ r_edi = R32((u32)(r_esp+0x28u));
    /* 00872d1b: mov dword ptr [esp + 0x30], ebx */ W32((u32)(r_esp+0x30u), r_ebx);
    /* 00872d1f: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 00872d23: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
    /* 00872d27: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r; fC = (a < b); }
    /* 00872d29: sbb edi, edx */ { u32 c = fC; u32 a = r_edi; u32 b = r_edx; u32 r = (a - b - c) & 0xffffffffu; r_edi = r;  }
    /* 00872d2b: sub esi, 0xac44 */ {  u32 a = r_esi; u32 b = 0xac44u; u32 r = (a - b) & 0xffffffffu; r_esi = r; fC = (a < b); }
    /* 00872d31: sbb edi, 0 */ { u32 c = fC; u32 a = r_edi; u32 b = 0x0u; u32 r = (a - b - c) & 0xffffffffu; r_edi = r; fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00872d34: jl 0x872d3e */ if ((fS!=fO)) goto L_00872d3e;
L_00872d36:; BB(0x00872d36);
    /* 00872d36: or esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a | b) & 0xffffffffu; r_esi = r; fZ = (r == 0); }
    /* 00872d38: jne 0x872f4e */ if (!fZ) goto L_00872f4e;
L_00872d3e:; BB(0x00872d3e);
    /* 00872d3e: mov edx, ecx */ r_edx = r_ecx;
    /* 00872d40: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00872d42: mov dword ptr [esp + 0x40], edx */ W32((u32)(r_esp+0x40u), r_edx);
    /* 00872d46: mov dword ptr [esp + 0x44], ecx */ W32((u32)(r_esp+0x44u), r_ecx);
    /* 00872d4a: jmp 0x872e22 */ goto L_00872e22;
L_00872d4f:; BB(0x00872d4f);
    /* 00872d4f: mov dword ptr [esp + 0x60], edx */ W32((u32)(r_esp+0x60u), r_edx);
    /* 00872d53: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 00872d57: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r; fC = (r < a); }
    /* 00872d5a: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 00872d5e: mov dword ptr [esp + 0x5c], ebx */ W32((u32)(r_esp+0x5cu), r_ebx);
    /* 00872d62: mov ecx, dword ptr [esp + 0x40] */ r_ecx = R32((u32)(r_esp+0x40u));
    /* 00872d66: adc edx, 0 */ { u32 c = fC; u32 a = r_edx; u32 b = 0x0u; u32 r = (a + b + c) & 0xffffffffu; r_edx = r;  }
    /* 00872d69: mov dword ptr [esp + 0x58], edx */ W32((u32)(r_esp+0x58u), r_edx);
    /* 00872d6d: sub ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); }
    /* 00872d6f: mov ebx, dword ptr [esp + 0x44] */ r_ebx = R32((u32)(r_esp+0x44u));
    /* 00872d73: sbb ebx, edx */ { u32 c = fC; u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b - c) & 0xffffffffu; r_ebx = r; fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00872d75: mov edx, dword ptr [esp + 0x60] */ r_edx = R32((u32)(r_esp+0x60u));
    /* 00872d79: jl 0x872d7f */ if ((fS!=fO)) goto L_00872d7f;
L_00872d7b:; BB(0x00872d7b);
    /* 00872d7b: or ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00872d7d: jne 0x872d94 */ if (!fZ) goto L_00872d94;
L_00872d7f:; BB(0x00872d7f);
    /* 00872d7f: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 00872d83: mov ecx, dword ptr [esp + 0x30] */ r_ecx = R32((u32)(r_esp+0x30u));
    /* 00872d87: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 00872d8b: mov dword ptr [esp + 0x34], ecx */ W32((u32)(r_esp+0x34u), r_ecx);
    /* 00872d8f: jmp 0x872e22 */ goto L_00872e22;
L_00872d94:; BB(0x00872d94);
    /* 00872d94: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
    /* 00872d98: mov ecx, dword ptr [esp + 0x34] */ r_ecx = R32((u32)(r_esp+0x34u));
    /* 00872d9c: sub ebx, dword ptr [ebp + 8] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 00872d9f: sub ecx, dword ptr [ebp + 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00872da2: or ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); }
    /* 00872da4: jne 0x87321a */ if (!fZ) goto L_0087321a;
L_00872daa:; BB(0x00872daa);
    /* 00872daa: mov dword ptr [esp + 0x14], esi */ W32((u32)(r_esp+0x14u), r_esi);
    /* 00872dae: mov edx, dword ptr [esp + 0x40] */ r_edx = R32((u32)(r_esp+0x40u));
    /* 00872db2: mov ebx, dword ptr [esp + 0x44] */ r_ebx = R32((u32)(r_esp+0x44u));
    /* 00872db6: mov dword ptr [esp + 0x34], edi */ W32((u32)(r_esp+0x34u), r_edi);
    /* 00872dba: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 00872dbe: mov esi, dword ptr [esp + 0x30] */ r_esi = R32((u32)(r_esp+0x30u));
    /* 00872dc2: add edx, 0xffffdecc */ {  u32 a = r_edx; u32 b = 0xffffdeccu; u32 r = (a + b) & 0xffffffffu; r_edx = r; fC = (r < a); }
    /* 00872dc8: mov dword ptr [esp + 0x40], edx */ W32((u32)(r_esp+0x40u), r_edx);
    /* 00872dcc: adc ebx, -1 */ { u32 c = fC; u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a + b + c) & 0xffffffffu; r_ebx = r;  }
    /* 00872dcf: mov dword ptr [esp + 0x44], ebx */ W32((u32)(r_esp+0x44u), r_ebx);
    /* 00872dd3: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r; fC = (a < b); }
    /* 00872dd5: sbb ebx, esi */ { u32 c = fC; u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b - c) & 0xffffffffu; r_ebx = r; fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00872dd7: jl 0x872ddd */ if ((fS!=fO)) goto L_00872ddd;
L_00872dd9:; BB(0x00872dd9);
    /* 00872dd9: or edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 00872ddb: jne 0x872ded */ if (!fZ) goto L_00872ded;
L_00872ddd:; BB(0x00872ddd);
    /* 00872ddd: mov edx, dword ptr [esp + 0x5c] */ r_edx = R32((u32)(r_esp+0x5cu));
    /* 00872de1: mov ecx, dword ptr [esp + 0x58] */ r_ecx = R32((u32)(r_esp+0x58u));
    /* 00872de5: mov dword ptr [esp + 0x40], edx */ W32((u32)(r_esp+0x40u), r_edx);
    /* 00872de9: mov dword ptr [esp + 0x44], ecx */ W32((u32)(r_esp+0x44u), r_ecx);
L_00872ded:; BB(0x00872ded);
    /* 00872ded: mov ebx, dword ptr [ebp] */ r_ebx = R32((u32)(r_ebp));
    /* 00872df0: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00872df2: je 0x872e22 */ if (fZ) goto L_00872e22;
L_00872df4:; BB(0x00872df4);
    /* 00872df4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00872df6: mov edx, dword ptr [esp + 0x48] */ r_edx = R32((u32)(r_esp+0x48u));
    /* 00872dfa: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00872dfb: mov ecx, dword ptr [esp + 0x48] */ r_ecx = R32((u32)(r_esp+0x48u));
    /* 00872dff: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00872e00: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00872e01: call dword ptr [ebp + 0x2c4] */ { u32 t = R32((u32)(r_ebp+0x2c4u)); r_esp -= 4; W32(r_esp, 0x872e07u); call_ind(t); }
    /* 00872e07: mov edx, dword ptr [esp + 0x50] */ r_edx = R32((u32)(r_esp+0x50u));
    /* 00872e0b: mov ecx, dword ptr [esp + 0x54] */ r_ecx = R32((u32)(r_esp+0x54u));
    /* 00872e0f: mov ebx, dword ptr [esp + 0x64] */ r_ebx = R32((u32)(r_esp+0x64u));
    /* 00872e13: mov dword ptr [ebp + 8], edx */ W32((u32)(r_ebp+0x8u), r_edx);
    /* 00872e16: mov dword ptr [ebp + 0xc], ecx */ W32((u32)(r_ebp+0xcu), r_ecx);
    /* 00872e19: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00872e1a: call 0x876954 */ r_esp -= 4; W32(r_esp, 0x872e1fu); f_00876954();
    /* 00872e1f: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00872e22:; BB(0x00872e22);
    /* 00872e22: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 00872e26: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 00872e2a: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r; fC = (a < b); }
    /* 00872e2c: mov ebx, dword ptr [esp + 0x30] */ r_ebx = R32((u32)(r_esp+0x30u));
    /* 00872e30: mov esi, dword ptr [esp + 0x34] */ r_esi = R32((u32)(r_esp+0x34u));
    /* 00872e34: sbb ebx, esi */ { u32 c = fC; u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b - c) & 0xffffffffu; r_ebx = r; fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00872e36: jl 0x872b1b */ if ((fS!=fO)) goto L_00872b1b;
L_00872e3c:; BB(0x00872e3c);
    /* 00872e3c: mov esi, dword ptr [esp + 0x54] */ r_esi = R32((u32)(r_esp+0x54u));
    /* 00872e40: mov edi, dword ptr [esp + 0x48] */ r_edi = R32((u32)(r_esp+0x48u));
    /* 00872e44: mov ebx, dword ptr [esp + 0x2c] */ r_ebx = R32((u32)(r_esp+0x2cu));
L_00872e48:; BB(0x00872e48);
    /* 00872e48: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 00872e4c: mov eax, ebp */ r_eax = r_ebp;
    /* 00872e4e: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
    /* 00872e52: call 0x870b50 */ r_esp -= 4; W32(r_esp, 0x872e57u); f_00870b50();
    /* 00872e57: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 00872e5c: lea eax, [esp + 0x94] */ r_eax = (u32)(r_esp+0x94u);
    /* 00872e63: mov dword ptr [ebp + 0x50], edx */ W32((u32)(r_ebp+0x50u), r_edx);
    /* 00872e66: mov dword ptr [ebp + 0x54], edx */ W32((u32)(r_ebp+0x54u), r_edx);
    /* 00872e69: mov dword ptr [esp + 0x48], edi */ W32((u32)(r_esp+0x48u), r_edi);
    /* 00872e6d: mov dword ptr [esp + 0x2c], ebx */ W32((u32)(r_esp+0x2cu), r_ebx);
    /* 00872e71: mov ebx, eax */ r_ebx = r_eax;
L_00872e73:; BB(0x00872e73);
    /* 00872e73: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00872e74: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00872e75: call 0x876198 */ r_esp -= 4; W32(r_esp, 0x872e7au); f_00876198();
    /* 00872e7a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00872e7d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00872e7f: jl 0x873204 */ if ((fS!=fO)) goto L_00873204;
L_00872e85:; BB(0x00872e85);
    /* 00872e85: jne 0x872f8b */ if (!fZ) goto L_00872f8b;
L_00872e8b:; BB(0x00872e8b);
    /* 00872e8b: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x872e90u); f_00859dd6();
    /* 00872e90: mov dword ptr [eax], 0 */ W32((u32)(r_eax), 0x0u);
    /* 00872e96: cmp dword ptr [ebp], 0 */ {  u32 a = R32((u32)(r_ebp)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00872e9a: je 0x872ee0 */ if (fZ) goto L_00872ee0;
L_00872e9c:; BB(0x00872e9c);
    /* 00872e9c: push 0x2134 */ { u32 v = 0x2134u; r_esp -= 4; W32(r_esp, v); }
    /* 00872ea1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00872ea2: call 0x8760f8 */ r_esp -= 4; W32(r_esp, 0x872ea7u); f_008760f8();
    /* 00872ea7: push dword ptr [ebp] */ { u32 v = R32((u32)(r_ebp)); r_esp -= 4; W32(r_esp, v); }
    /* 00872eaa: push 0x2134 */ { u32 v = 0x2134u; r_esp -= 4; W32(r_esp, v); }
    /* 00872eaf: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00872eb1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00872eb2: call dword ptr [ebp + 0x2c0] */ { u32 t = R32((u32)(r_ebp+0x2c0u)); r_esp -= 4; W32(r_esp, 0x872eb8u); call_ind(t); }
    /* 00872eb8: mov edi, eax */ r_edi = r_eax;
    /* 00872eba: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00872ebd: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00872ebf: jle 0x872ecd */ if ((fZ||fS!=fO)) goto L_00872ecd;
L_00872ec1:; BB(0x00872ec1);
    /* 00872ec1: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00872ec2: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00872ec3: call 0x87617c */ r_esp -= 4; W32(r_esp, 0x872ec8u); f_0087617c();
    /* 00872ec8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00872ecb: jmp 0x872ee2 */ goto L_00872ee2;
L_00872ecd:; BB(0x00872ecd);
    /* 00872ecd: jne 0x872ee2 */ if (!fZ) goto L_00872ee2;
L_00872ecf:; BB(0x00872ecf);
    /* 00872ecf: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x872ed4u); f_00859dd6();
    /* 00872ed4: cmp dword ptr [eax], 0 */ {  u32 a = R32((u32)(r_eax)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00872ed7: je 0x872ee2 */ if (fZ) goto L_00872ee2;
L_00872ed9:; BB(0x00872ed9);
    /* 00872ed9: mov edi, 0xffffffff */ r_edi = 0xffffffffu;
    /* 00872ede: jmp 0x872ee2 */ goto L_00872ee2;
L_00872ee0:; BB(0x00872ee0);
    /* 00872ee0: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_00872ee2:; BB(0x00872ee2);
    /* 00872ee2: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00872ee4: je 0x872f7b */ if (fZ) goto L_00872f7b;
L_00872eea:; BB(0x00872eea);
    /* 00872eea: jge 0x872e73 */ if ((fS==fO)) goto L_00872e73;
L_00872eec:; BB(0x00872eec);
    /* 00872eec: jmp 0x872f7b */ goto L_00872f7b;
L_00872ef1:; BB(0x00872ef1);
    /* 00872ef1: mov eax, 0xffffff76 */ r_eax = 0xffffff76u;
    /* 00872ef6: add esp, 0xa4 */ {  u32 a = r_esp; u32 b = 0xa4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00872efc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00872efd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00872efe: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00872eff: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00872f00: ret  */ FN_RET(0x00872778); r_esp += 4; return;
L_00872f01:; BB(0x00872f01);
    /* 00872f01: mov eax, 0xffffff7d */ r_eax = 0xffffff7du;
    /* 00872f06: add esp, 0xa4 */ {  u32 a = r_esp; u32 b = 0xa4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00872f0c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00872f0d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00872f0e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00872f0f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00872f10: ret  */ FN_RET(0x00872778); r_esp += 4; return;
L_00872f11:; BB(0x00872f11);
    /* 00872f11: mov esi, 0xffffff80 */ r_esi = 0xffffff80u;
    /* 00872f16: mov edi, 0xffffffff */ r_edi = 0xffffffffu;
    /* 00872f1b: jmp 0x872c03 */ goto L_00872c03;
L_00872f20:; BB(0x00872f20);
    /* 00872f20: mov esi, 0xfffffffe */ r_esi = 0xfffffffeu;
    /* 00872f25: mov edi, 0xffffffff */ r_edi = 0xffffffffu;
    /* 00872f2a: jmp 0x872c03 */ goto L_00872c03;
L_00872f2f:; BB(0x00872f2f);
    /* 00872f2f: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 00872f34: mov eax, ebp */ r_eax = r_ebp;
    /* 00872f36: mov dword ptr [ebp + 0x50], edx */ W32((u32)(r_ebp+0x50u), r_edx);
    /* 00872f39: mov dword ptr [ebp + 0x54], edx */ W32((u32)(r_ebp+0x54u), r_edx);
    /* 00872f3c: call 0x8733b0 */ r_esp -= 4; W32(r_esp, 0x872f41u); f_008733b0();
    /* 00872f41: mov eax, esi */ r_eax = r_esi;
    /* 00872f43: add esp, 0xa4 */ {  u32 a = r_esp; u32 b = 0xa4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00872f49: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00872f4a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00872f4b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00872f4c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00872f4d: ret  */ FN_RET(0x00872778); r_esp += 4; return;
L_00872f4e:; BB(0x00872f4e);
    /* 00872f4e: mov ebx, eax */ r_ebx = r_eax;
L_00872f50:; BB(0x00872f50);
    /* 00872f50: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 00872f54: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 00872f58: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r; fC = (a < b); }
    /* 00872f5a: mov esi, dword ptr [esp + 0x30] */ r_esi = R32((u32)(r_esp+0x30u));
    /* 00872f5e: mov edi, dword ptr [esp + 0x34] */ r_edi = R32((u32)(r_esp+0x34u));
    /* 00872f62: sbb esi, edi */ { u32 c = fC; u32 a = r_esi; u32 b = r_edi; u32 r = (a - b - c) & 0xffffffffu; r_esi = r; fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00872f64: jl 0x872a58 */ if ((fS!=fO)) goto L_00872a58;
L_00872f6a:; BB(0x00872f6a);
    /* 00872f6a: mov esi, dword ptr [esp + 0x54] */ r_esi = R32((u32)(r_esp+0x54u));
    /* 00872f6e: mov edi, dword ptr [esp + 0x48] */ r_edi = R32((u32)(r_esp+0x48u));
    /* 00872f72: mov ebx, dword ptr [esp + 0x2c] */ r_ebx = R32((u32)(r_esp+0x2cu));
    /* 00872f76: jmp 0x872e48 */ goto L_00872e48;
L_00872f7b:; BB(0x00872f7b);
    /* 00872f7b: mov eax, 0xfffffffe */ r_eax = 0xfffffffeu;
    /* 00872f80: add esp, 0xa4 */ {  u32 a = r_esp; u32 b = 0xa4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00872f86: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00872f87: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00872f88: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00872f89: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00872f8a: ret  */ FN_RET(0x00872778); r_esp += 4; return;
L_00872f8b:; BB(0x00872f8b);
    /* 00872f8b: mov dword ptr [esp + 0x5c], eax */ W32((u32)(r_esp+0x5cu), r_eax);
    /* 00872f8f: mov edi, dword ptr [esp + 0x48] */ r_edi = R32((u32)(r_esp+0x48u));
    /* 00872f93: mov ebx, dword ptr [esp + 0x2c] */ r_ebx = R32((u32)(r_esp+0x2cu));
    /* 00872f97: mov dword ptr [esp + 0x54], esi */ W32((u32)(r_esp+0x54u), r_esi);
    /* 00872f9b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00872f9e: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
    /* 00872fa1: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00872fa2: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r; fC = (r < a); }
    /* 00872fa4: adc edx, esi */ { u32 c = fC; u32 a = r_edx; u32 b = r_esi; u32 r = (a + b + c) & 0xffffffffu; r_edx = r;  }
    /* 00872fa6: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 00872fa9: mov dword ptr [ebp + 0xc], edx */ W32((u32)(r_ebp+0xcu), r_edx);
    /* 00872fac: sub esi, 0 */ {  u32 a = r_esi; u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu; r_esi = r; fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00872faf: mov esi, dword ptr [esp + 0x54] */ r_esi = R32((u32)(r_esp+0x54u));
    /* 00872fb3: jl 0x872f7b */ if ((fS!=fO)) goto L_00872f7b;
L_00872fb5:; BB(0x00872fb5);
    /* 00872fb5: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 00872fb9: cmp edx, dword ptr [ebp + 0x60] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x60u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00872fbc: je 0x872fe6 */ if (fZ) goto L_00872fe6;
L_00872fbe:; BB(0x00872fbe);
    /* 00872fbe: mov eax, ebp */ r_eax = r_ebp;
    /* 00872fc0: call 0x8733b0 */ r_esp -= 4; W32(r_esp, 0x872fc5u); f_008733b0();
    /* 00872fc5: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 00872fc9: mov dword ptr [ebp + 0x60], edx */ W32((u32)(r_ebp+0x60u), r_edx);
    /* 00872fcc: lea edx, [esp + 0x94] */ r_edx = (u32)(r_esp+0x94u);
    /* 00872fd3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00872fd4: call 0x875ffc */ r_esp -= 4; W32(r_esp, 0x872fd9u); f_00875ffc();
    /* 00872fd9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00872fda: mov dword ptr [ebp + 0x5c], eax */ W32((u32)(r_ebp+0x5cu), r_eax);
    /* 00872fdd: mov dword ptr [ebp + 0x58], 3 */ W32((u32)(r_ebp+0x58u), 0x3u);
    /* 00872fe4: jmp 0x872ff6 */ goto L_00872ff6;
L_00872fe6:; BB(0x00872fe6);
    /* 00872fe6: lea edx, [ebp + 0x1e0] */ r_edx = (u32)(r_ebp+0x1e0u);
    /* 00872fec: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00872fed: call 0x875ac0 */ r_esp -= 4; W32(r_esp, 0x872ff2u); f_00875ac0();
    /* 00872ff2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00872ff3: mov eax, dword ptr [ebp + 0x5c] */ r_eax = R32((u32)(r_ebp+0x5cu));
L_00872ff6:; BB(0x00872ff6);
    /* 00872ff6: lea edx, [ebp + 0x78] */ r_edx = (u32)(r_ebp+0x78u);
    /* 00872ff9: mov dword ptr [esp + 0x5c], edx */ W32((u32)(r_esp+0x5cu), r_edx);
    /* 00872ffd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00872ffe: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00872fff: call 0x87696c */ r_esp -= 4; W32(r_esp, 0x873004u); f_0087696c();
    /* 00873004: lea edx, [esp + 0x9c] */ r_edx = (u32)(r_esp+0x9cu);
    /* 0087300b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0087300c: mov edx, dword ptr [esp + 0x68] */ r_edx = R32((u32)(r_esp+0x68u));
    /* 00873010: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00873011: call 0x87658c */ r_esp -= 4; W32(r_esp, 0x873016u); f_0087658c();
    /* 00873016: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00873019: mov dword ptr [esp + 0x2c], ebx */ W32((u32)(r_esp+0x2cu), r_ebx);
    /* 0087301d: mov ebx, dword ptr [esp + 0x5c] */ r_ebx = R32((u32)(r_esp+0x5cu));
    /* 00873021: mov dword ptr [esp + 0xc], ebp */ W32((u32)(r_esp+0xcu), r_ebp);
L_00873025:; BB(0x00873025);
    /* 00873025: lea eax, [esp + 0x64] */ r_eax = (u32)(r_esp+0x64u);
    /* 00873029: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0087302a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0087302b: call 0x876ad0 */ r_esp -= 4; W32(r_esp, 0x873030u); f_00876ad0();
    /* 00873030: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00873033: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00873034: or eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00873036: je 0x873162 */ if (fZ) goto L_00873162;
L_0087303c:; BB(0x0087303c);
    /* 0087303c: sub edx, 0 */ {  u32 a = r_edx; u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu; r_edx = r; fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087303f: jl 0x8731f6 */ if ((fS!=fO)) goto L_008731f6;
L_00873045:; BB(0x00873045);
    /* 00873045: mov ecx, dword ptr [esp + 0x74] */ r_ecx = R32((u32)(r_esp+0x74u));
    /* 00873049: mov edx, dword ptr [esp + 0x78] */ r_edx = R32((u32)(r_esp+0x78u));
    /* 0087304d: lea ebp, [ecx + 1] */ r_ebp = (u32)(r_ecx+0x1u);
    /* 00873050: lea eax, [edx + 1] */ r_eax = (u32)(r_edx+0x1u);
    /* 00873053: or ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); }
    /* 00873055: je 0x873152 */ if (fZ) goto L_00873152;
L_0087305b:; BB(0x0087305b);
    /* 0087305b: mov ebp, dword ptr [esp + 0xc] */ r_ebp = R32((u32)(r_esp+0xcu));
    /* 0087305f: mov ebx, dword ptr [ebp + 0x44] */ r_ebx = R32((u32)(r_ebp+0x44u));
    /* 00873062: mov esi, dword ptr [ebp + 0x60] */ r_esi = R32((u32)(r_ebp+0x60u));
    /* 00873065: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00873067: mov edi, dword ptr [ebx + esi*8] */ r_edi = R32((u32)(r_ebx+r_esi*8));
    /* 0087306a: mov ebx, dword ptr [ebx + esi*8 + 4] */ r_ebx = R32((u32)(r_ebx+r_esi*8+0x4u));
    /* 0087306e: sub ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); }
    /* 00873070: sbb edx, ebx */ { u32 c = fC; u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b - c) & 0xffffffffu; r_edx = r;  }
    /* 00873072: mov ebx, edx */ r_ebx = r_edx;
    /* 00873074: sub ebx, 0 */ {  u32 a = r_ebx; u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu; r_ebx = r; fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00873077: jge 0x87307d */ if ((fS==fO)) goto L_0087307d;
L_00873079:; BB(0x00873079);
    /* 00873079: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0087307b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_0087307d:; BB(0x0087307d);
    /* 0087307d: mov ebx, dword ptr [esp + 0x4c] */ r_ebx = R32((u32)(r_esp+0x4cu));
    /* 00873081: mov esi, dword ptr [esp + 0xc0] */ r_esi = R32((u32)(r_esp+0xc0u));
    /* 00873088: add ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ebx = r; fC = (r < a); }
    /* 0087308a: mov ecx, dword ptr [esp + 0x50] */ r_ecx = R32((u32)(r_esp+0x50u));
    /* 0087308e: mov dword ptr [esp + 0x4c], ebx */ W32((u32)(r_esp+0x4cu), r_ebx);
    /* 00873092: adc ecx, edx */ { u32 c = fC; u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b + c) & 0xffffffffu; r_ecx = r;  }
    /* 00873094: mov edx, dword ptr [esp + 0xbc] */ r_edx = R32((u32)(r_esp+0xbcu));
    /* 0087309b: mov dword ptr [esp + 0x50], ecx */ W32((u32)(r_esp+0x50u), r_ecx);
    /* 0087309f: sub ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ebx = r; fC = (a < b); }
    /* 008730a1: sbb ecx, esi */ { u32 c = fC; u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r; fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008730a3: jl 0x8730ad */ if ((fS!=fO)) goto L_008730ad;
L_008730a5:; BB(0x008730a5);
    /* 008730a5: or ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); }
    /* 008730a7: jne 0x87312f */ if (!fZ) goto L_0087312f;
L_008730ad:; BB(0x008730ad);
    /* 008730ad: mov edx, dword ptr [esp + 0x4c] */ r_edx = R32((u32)(r_esp+0x4cu));
    /* 008730b1: mov ecx, dword ptr [esp + 0x50] */ r_ecx = R32((u32)(r_esp+0x50u));
    /* 008730b5: mov ebx, dword ptr [ebp + 0x58] */ r_ebx = R32((u32)(r_ebp+0x58u));
    /* 008730b8: mov dword ptr [ebp + 0x50], edx */ W32((u32)(r_ebp+0x50u), r_edx);
    /* 008730bb: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008730be: mov dword ptr [ebp + 0x54], ecx */ W32((u32)(r_ebp+0x54u), r_ecx);
    /* 008730c1: jl 0x87310d */ if ((fS!=fO)) goto L_0087310d;
L_008730c3:; BB(0x008730c3);
    /* 008730c3: cmp dword ptr [ebp + 4], 0 */ {  u32 a = R32((u32)(r_ebp+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008730c7: je 0x873101 */ if (fZ) goto L_00873101;
L_008730c9:; BB(0x008730c9);
    /* 008730c9: mov eax, dword ptr [ebp + 0x34] */ r_eax = R32((u32)(r_ebp+0x34u));
    /* 008730cc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 008730ce: jl 0x873101 */ if ((fS!=fO)) goto L_00873101;
L_008730d0:; BB(0x008730d0);
    /* 008730d0: mov esi, 0 */ r_esi = 0x0u;
    /* 008730d5: mov ebx, 0 */ r_ebx = 0x0u;
    /* 008730da: mov edi, 0 */ r_edi = 0x0u;
    /* 008730df: jle 0x873117 */ if ((fZ||fS!=fO)) goto L_00873117;
L_008730e1:; BB(0x008730e1);
    /* 008730e1: mov dword ptr [esp + 0xc], ebp */ W32((u32)(r_esp+0xcu), r_ebp);
    /* 008730e5: mov ebp, eax */ r_ebp = r_eax;
L_008730e7:; BB(0x008730e7);
    /* 008730e7: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 008730eb: mov edx, edi */ r_edx = r_edi;
    /* 008730ed: call 0x873318 */ r_esp -= 4; W32(r_esp, 0x8730f2u); f_00873318();
    /* 008730f2: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008730f3: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r; fC = (r < a); }
    /* 008730f5: adc ebx, edx */ { u32 c = fC; u32 a = r_ebx; u32 b = r_edx; u32 r = (a + b + c) & 0xffffffffu; r_ebx = r;  }
    /* 008730f7: cmp edi, ebp */ {  u32 a = r_edi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008730f9: jl 0x8730e7 */ if ((fS!=fO)) goto L_008730e7;
L_008730fb:; BB(0x008730fb);
    /* 008730fb: mov ebp, dword ptr [esp + 0xc] */ r_ebp = R32((u32)(r_esp+0xcu));
    /* 008730ff: jmp 0x873117 */ goto L_00873117;
L_00873101:; BB(0x00873101);
    /* 00873101: mov esi, 0xffffff7d */ r_esi = 0xffffff7du;
    /* 00873106: mov ebx, 0xffffffff */ r_ebx = 0xffffffffu;
    /* 0087310b: jmp 0x873117 */ goto L_00873117;
L_0087310d:; BB(0x0087310d);
    /* 0087310d: mov esi, 0xffffff7d */ r_esi = 0xffffff7du;
    /* 00873112: mov ebx, 0xffffffff */ r_ebx = 0xffffffffu;
L_00873117:; BB(0x00873117);
    /* 00873117: mov edx, dword ptr [esp + 0xbc] */ r_edx = R32((u32)(r_esp+0xbcu));
    /* 0087311e: mov ecx, dword ptr [esp + 0xc0] */ r_ecx = R32((u32)(r_esp+0xc0u));
    /* 00873125: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r; fC = (a < b); }
    /* 00873127: sbb ecx, ebx */ { u32 c = fC; u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r; fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00873129: jl 0x873139 */ if ((fS!=fO)) goto L_00873139;
L_0087312b:; BB(0x0087312b);
    /* 0087312b: or edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 0087312d: je 0x873139 */ if (fZ) goto L_00873139;
L_0087312f:; BB(0x0087312f);
    /* 0087312f: mov esi, 0xffffff7f */ r_esi = 0xffffff7fu;
    /* 00873134: jmp 0x872f2f */ goto L_00872f2f;
L_00873139:; BB(0x00873139);
    /* 00873139: fld qword ptr [0x99a5f0] */ FPUSH(R_F64((u32)(0x99a5f0u)));
    /* 0087313f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00873141: fst qword ptr [ebp + 0x68] */ W_F64((u32)(r_ebp+0x68u), ST(0));
    /* 00873144: fstp qword ptr [ebp + 0x70] */ W_F64((u32)(r_ebp+0x70u), ST(0)); FPOP();
    /* 00873147: add esp, 0xa4 */ {  u32 a = r_esp; u32 b = 0xa4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0087314d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0087314e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0087314f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00873150: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00873151: ret  */ FN_RET(0x00872778); r_esp += 4; return;
L_00873152:; BB(0x00873152);
    /* 00873152: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00873154: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00873155: call 0x8769d4 */ r_esp -= 4; W32(r_esp, 0x87315au); f_008769d4();
    /* 0087315a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0087315d: jmp 0x873025 */ goto L_00873025;
L_00873162:; BB(0x00873162);
    /* 00873162: mov ebx, dword ptr [esp + 0x2c] */ r_ebx = R32((u32)(r_esp+0x2cu));
    /* 00873166: mov ebp, dword ptr [esp + 0xc] */ r_ebp = R32((u32)(r_esp+0xcu));
    /* 0087316a: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 0087316d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0087316f: je 0x873193 */ if (fZ) goto L_00873193;
L_00873171:; BB(0x00873171);
    /* 00873171: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00873173: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00873174: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00873175: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00873176: call dword ptr [ebp + 0x2c4] */ { u32 t = R32((u32)(r_ebp+0x2c4u)); r_esp -= 4; W32(r_esp, 0x87317cu); call_ind(t); }
    /* 0087317c: mov dword ptr [ebp + 8], ebx */ W32((u32)(r_ebp+0x8u), r_ebx);
    /* 0087317f: mov dword ptr [ebp + 0xc], edi */ W32((u32)(r_ebp+0xcu), r_edi);
    /* 00873182: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00873183: call 0x876954 */ r_esp -= 4; W32(r_esp, 0x873188u); f_00876954();
    /* 00873188: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0087318b: jmp 0x873193 */ goto L_00873193;
L_0087318d:; BB(0x0087318d);
    /* 0087318d: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
    /* 00873190: mov dword ptr [ebp + 0xc], ebx */ W32((u32)(r_ebp+0xcu), r_ebx);
L_00873193:; BB(0x00873193);
    /* 00873193: mov eax, ebp */ r_eax = r_ebp;
    /* 00873195: lea edx, [esp + 0x94] */ r_edx = (u32)(r_esp+0x94u);
    /* 0087319c: call 0x8713c8 */ r_esp -= 4; W32(r_esp, 0x8731a1u); f_008713c8();
    /* 008731a1: mov ebx, edx */ r_ebx = r_edx;
    /* 008731a3: mov esi, eax */ r_esi = r_eax;
    /* 008731a5: mov ecx, ebx */ r_ecx = r_ebx;
    /* 008731a7: sub ecx, 0 */ {  u32 a = r_ecx; u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008731aa: jl 0x872f2f */ if ((fS!=fO)) goto L_00872f2f;
L_008731b0:; BB(0x008731b0);
    /* 008731b0: lea ecx, [esp + 0x94] */ r_ecx = (u32)(r_esp+0x94u);
    /* 008731b7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008731b8: call 0x8768e8 */ r_esp -= 4; W32(r_esp, 0x8731bdu); f_008768e8();
    /* 008731bd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008731be: sub eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); }
    /* 008731c1: sbb edx, -1 */ { u32 c = fC; u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b - c) & 0xffffffffu; r_edx = r; fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008731c4: jl 0x8731ca */ if ((fS!=fO)) goto L_008731ca;
L_008731c6:; BB(0x008731c6);
    /* 008731c6: or eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 008731c8: jne 0x8731dc */ if (!fZ) goto L_008731dc;
L_008731ca:; BB(0x008731ca);
    /* 008731ca: lea ecx, [esp + 0x94] */ r_ecx = (u32)(r_esp+0x94u);
    /* 008731d1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008731d2: call 0x875fdc */ r_esp -= 4; W32(r_esp, 0x8731d7u); f_00875fdc();
    /* 008731d7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008731d8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008731da: jne 0x87318d */ if (!fZ) goto L_0087318d;
L_008731dc:; BB(0x008731dc);
    /* 008731dc: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 008731e0: mov eax, ebp */ r_eax = r_ebp;
    /* 008731e2: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 008731e6: call 0x87177c */ r_esp -= 4; W32(r_esp, 0x8731ebu); f_0087177c();
    /* 008731eb: add esp, 0xa4 */ {  u32 a = r_esp; u32 b = 0xa4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008731f1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008731f2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008731f3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008731f4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008731f5: ret  */ FN_RET(0x00872778); r_esp += 4; return;
L_008731f6:; BB(0x008731f6);
    /* 008731f6: mov ebp, dword ptr [esp + 0xc] */ r_ebp = R32((u32)(r_esp+0xcu));
    /* 008731fa: mov esi, 0xffffff78 */ r_esi = 0xffffff78u;
    /* 008731ff: jmp 0x872f2f */ goto L_00872f2f;
L_00873204:; BB(0x00873204);
    /* 00873204: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00873207: mov edi, dword ptr [ebp + 0xc] */ r_edi = R32((u32)(r_ebp+0xcu));
    /* 0087320a: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0087320b: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); }
    /* 0087320d: sbb edi, edx */ { u32 c = fC; u32 a = r_edi; u32 b = r_edx; u32 r = (a - b - c) & 0xffffffffu; r_edi = r;  }
    /* 0087320f: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
    /* 00873212: mov dword ptr [ebp + 0xc], edi */ W32((u32)(r_ebp+0xcu), r_edi);
    /* 00873215: jmp 0x872e73 */ goto L_00872e73;
L_0087321a:; BB(0x0087321a);
    /* 0087321a: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
    /* 0087321e: mov dword ptr [esp + 0x14], esi */ W32((u32)(r_esp+0x14u), r_esi);
    /* 00873222: mov dword ptr [esp + 0x34], edi */ W32((u32)(r_esp+0x34u), r_edi);
    /* 00873226: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0087322a: mov dword ptr [esp + 0x3c], edx */ W32((u32)(r_esp+0x3cu), r_edx);
    /* 0087322e: jmp 0x872f50 */ goto L_00872f50;
L_00873233:; BB(0x00873233);
    /* 00873233: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 00873236: mov edi, dword ptr [ebp + 0xc] */ r_edi = R32((u32)(r_ebp+0xcu));
    /* 00873239: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0087323a: add eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_eax = r; fC = (r < a); }
    /* 0087323c: adc edx, edi */ { u32 c = fC; u32 a = r_edx; u32 b = r_edi; u32 r = (a + b + c) & 0xffffffffu; r_edx = r;  }
    /* 0087323e: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 00873241: mov dword ptr [ebp + 0xc], edx */ W32((u32)(r_ebp+0xcu), r_edx);
    /* 00873244: jmp 0x872c03 */ goto L_00872c03;
L_00873249:; BB(0x00873249);
    /* 00873249: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0087324c: mov edi, dword ptr [ebp + 0xc] */ r_edi = R32((u32)(r_ebp+0xcu));
    /* 0087324f: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00873250: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); }
    /* 00873252: sbb edi, edx */ { u32 c = fC; u32 a = r_edi; u32 b = r_edx; u32 r = (a - b - c) & 0xffffffffu; r_edi = r;  }
    /* 00873254: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
    /* 00873257: mov dword ptr [ebp + 0xc], edi */ W32((u32)(r_ebp+0xcu), r_edi);
    /* 0087325a: jmp 0x872b43 */ goto L_00872b43;
L_0087325f:; BB(0x0087325f);
    /* 0087325f: mov esi, 0xffffffff */ r_esi = 0xffffffffu;
    /* 00873264: mov edi, 0xffffffff */ r_edi = 0xffffffffu;
    /* 00873269: jmp 0x872c03 */ goto L_00872c03;
L_0087326e:; BB(0x0087326e);
    /* 0087326e: lea esi, [ebp + 0x18] */ r_esi = (u32)(r_ebp+0x18u);
    /* 00873271: jmp 0x872e48 */ goto L_00872e48;
L_00873276:; BB(0x00873276);
    /* 00873276: mov dword ptr [esp + 0x50], eax */ W32((u32)(r_esp+0x50u), r_eax);
    /* 0087327a: mov ebp, dword ptr [esp + 0xc] */ r_ebp = R32((u32)(r_esp+0xcu));
    /* 0087327e: mov dword ptr [esp + 0x4c], edx */ W32((u32)(r_esp+0x4cu), r_edx);
    /* 00873282: mov dword ptr [esp + 0x10], ebx */ W32((u32)(r_esp+0x10u), r_ebx);
    /* 00873286: jmp 0x8729b6 */ goto L_008729b6;
L_0087328b:; BB(0x0087328b);
    /* 0087328b: mov dword ptr [esp + 0x50], eax */ W32((u32)(r_esp+0x50u), r_eax);
    /* 0087328f: mov ebp, dword ptr [esp + 0xc] */ r_ebp = R32((u32)(r_esp+0xcu));
    /* 00873293: mov dword ptr [esp + 0x4c], edx */ W32((u32)(r_esp+0x4cu), r_edx);
    /* 00873297: mov dword ptr [esp + 0x10], ebx */ W32((u32)(r_esp+0x10u), r_ebx);
    /* 0087329b: jmp 0x8729b6 */ goto L_008729b6;
L_008732a0:; BB(0x008732a0);
    /* 008732a0: mov esi, dword ptr [ebp + 0x44] */ r_esi = R32((u32)(r_ebp+0x44u));
    /* 008732a3: jmp 0x87295b */ goto L_0087295b;
L_008732a8:; BB(0x008732a8);
    /* 008732a8: lea ecx, [ecx + ecx - 2] */ r_ecx = (u32)(r_ecx+r_ecx+0xfffffffeu);
    /* 008732ac: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008732ae: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008732b0: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008732b2: mov esi, dword ptr [ebp + 0x44] */ r_esi = R32((u32)(r_ebp+0x44u));
    /* 008732b5: jmp 0x8729b6 */ goto L_008729b6;
L_008732ba:; BB(0x008732ba);
    /* 008732ba: mov dword ptr [esp + 0x50], eax */ W32((u32)(r_esp+0x50u), r_eax);
    /* 008732be: mov ebp, dword ptr [esp + 0xc] */ r_ebp = R32((u32)(r_esp+0xcu));
    /* 008732c2: mov dword ptr [esp + 0x4c], edx */ W32((u32)(r_esp+0x4cu), r_edx);
    /* 008732c6: mov dword ptr [esp + 0x10], ebx */ W32((u32)(r_esp+0x10u), r_ebx);
    /* 008732ca: jmp 0x8729b6 */ goto L_008729b6;
L_008732cf:; BB(0x008732cf);
    /* 008732cf: mov dword ptr [esp + 0x50], eax */ W32((u32)(r_esp+0x50u), r_eax);
    /* 008732d3: mov ebp, dword ptr [esp + 0xc] */ r_ebp = R32((u32)(r_esp+0xcu));
    /* 008732d7: mov dword ptr [esp + 0x4c], edx */ W32((u32)(r_esp+0x4cu), r_edx);
    /* 008732db: mov dword ptr [esp + 0x10], ebx */ W32((u32)(r_esp+0x10u), r_ebx);
    /* 008732df: jmp 0x8729b6 */ goto L_008729b6;
L_008732e4:; BB(0x008732e4);
    /* 008732e4: mov dword ptr [esp + 0x50], eax */ W32((u32)(r_esp+0x50u), r_eax);
    /* 008732e8: mov ebp, dword ptr [esp + 0xc] */ r_ebp = R32((u32)(r_esp+0xcu));
    /* 008732ec: mov dword ptr [esp + 0x4c], edx */ W32((u32)(r_esp+0x4cu), r_edx);
    /* 008732f0: mov dword ptr [esp + 0x10], ebx */ W32((u32)(r_esp+0x10u), r_ebx);
    /* 008732f4: jmp 0x8729b6 */ goto L_008729b6;
L_008732f9:; BB(0x008732f9);
    /* 008732f9: mov dword ptr [esp + 0x50], eax */ W32((u32)(r_esp+0x50u), r_eax);
    /* 008732fd: mov ebp, dword ptr [esp + 0xc] */ r_ebp = R32((u32)(r_esp+0xcu));
    /* 00873301: mov dword ptr [esp + 0x4c], edx */ W32((u32)(r_esp+0x4cu), r_edx);
    /* 00873305: mov dword ptr [esp + 0x10], ebx */ W32((u32)(r_esp+0x10u), r_ebx);
    /* 00873309: jmp 0x8729b6 */ goto L_008729b6;
}

