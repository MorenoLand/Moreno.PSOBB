#include "protos.h"

void f_00701024(void) /* sub_701024 */
{
    FN_ENTER(0x00701024);
    /* 00701024: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00701025: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00701026: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00701027: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00701028: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0070102b: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0070102d: mov eax, dword ptr [ebp + 0x60] */ r_eax = R32((u32)(r_ebp+0x60u));
    /* 00701030: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00701032: jne 0x701274 */ if (!fZ) goto L_00701274;
L_00701038:; BB(0x00701038);
    /* 00701038: push dword ptr [0xa0f668] */ { u32 v = R32((u32)(0xa0f668u)); r_esp -= 4; W32(r_esp, v); }
    /* 0070103e: lea ebx, [ebp + 0x60] */ r_ebx = (u32)(r_ebp+0x60u);
    /* 00701041: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00701043: call 0x6ffb40 */ r_esp -= 4; W32(r_esp, 0x701048u); f_006ffb40();
    /* 00701048: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070104a: je 0x7010e8 */ if (fZ) goto L_007010e8;
L_00701050:; BB(0x00701050);
    /* 00701050: mov eax, dword ptr [ebp + 0x68] */ r_eax = R32((u32)(r_ebp+0x68u));
    /* 00701053: mov edi, dword ptr [ebp + 0x74] */ r_edi = R32((u32)(r_ebp+0x74u));
    /* 00701056: lea edx, [edi - 1] */ r_edx = (u32)(r_edi+0xffffffffu);
    /* 00701059: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0070105b: jge 0x7010c8 */ if ((fS==fO)) goto L_007010c8;
L_0070105d:; BB(0x0070105d);
    /* 0070105d: mov esi, dword ptr [ebp + 0x78] */ r_esi = R32((u32)(r_ebp+0x78u));
    /* 00701060: cmp edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00701062: jle 0x70108b */ if ((fZ||fS!=fO)) goto L_0070108b;
L_00701064:; BB(0x00701064);
    /* 00701064: mov ebx, dword ptr [ebp + 0x6c] */ r_ebx = R32((u32)(r_ebp+0x6cu));
    /* 00701067: mov edx, esi */ r_edx = r_esi;
    /* 00701069: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0070106c: add edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0070106e: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 00701070: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00701072: jl 0x701087 */ if ((fS!=fO)) goto L_00701087;
L_00701074:; BB(0x00701074);
    /* 00701074: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00701076: sub esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00701078: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0070107a: jl 0x701080 */ if ((fS!=fO)) goto L_00701080;
L_0070107c:; BB(0x0070107c);
    /* 0070107c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0070107e: jmp 0x70108d */ goto L_0070108d;
L_00701080:; BB(0x00701080);
    /* 00701080: mov edx, 1 */ r_edx = 0x1u;
    /* 00701085: jmp 0x70108d */ goto L_0070108d;
L_00701087:; BB(0x00701087);
    /* 00701087: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00701089: jmp 0x70108d */ goto L_0070108d;
L_0070108b:; BB(0x0070108b);
    /* 0070108b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_0070108d:; BB(0x0070108d);
    /* 0070108d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070108f: jne 0x701097 */ if (!fZ) goto L_00701097;
L_00701091:; BB(0x00701091);
    /* 00701091: add dword ptr [ebp + 0x6c], 1 */ { u32 ad = (u32)(r_ebp+0x6cu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00701095: jmp 0x7010ae */ goto L_007010ae;
L_00701097:; BB(0x00701097);
    /* 00701097: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070109a: jne 0x7010ae */ if (!fZ) goto L_007010ae;
L_0070109c:; BB(0x0070109c);
    /* 0070109c: fld dword ptr [0x96e4ac] */ FPUSH(R_F32((u32)(0x96e4acu)));
    /* 007010a2: fadd dword ptr [ebp + 0x88] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x88u));
    /* 007010a8: fstp dword ptr [ebp + 0x88] */ W_F32((u32)(r_ebp+0x88u), ST(0)); FPOP();
L_007010ae:; BB(0x007010ae);
    /* 007010ae: mov dword ptr [ebp + 0x8c], 1 */ W32((u32)(r_ebp+0x8cu), 0x1u);
    /* 007010b8: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007010bb: mov dword ptr [ebp + 0x68], eax */ W32((u32)(r_ebp+0x68u), r_eax);
    /* 007010be: call 0x70768c */ r_esp -= 4; W32(r_esp, 0x7010c3u); f_0070768c();
    /* 007010c3: jmp 0x701274 */ goto L_00701274;
L_007010c8:; BB(0x007010c8);
    /* 007010c8: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007010ca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007010cb: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007010cd: call 0x701300 */ r_esp -= 4; W32(r_esp, 0x7010d2u); f_00701300();
    /* 007010d2: mov dword ptr [ebp + 0x6c], 0 */ W32((u32)(r_ebp+0x6cu), 0x0u);
    /* 007010d9: mov dword ptr [ebp + 0x88], 0 */ W32((u32)(r_ebp+0x88u), 0x0u);
    /* 007010e3: jmp 0x701274 */ goto L_00701274;
L_007010e8:; BB(0x007010e8);
    /* 007010e8: push dword ptr [0xa0f664] */ { u32 v = R32((u32)(0xa0f664u)); r_esp -= 4; W32(r_esp, v); }
    /* 007010ee: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007010f0: call 0x6ffb40 */ r_esp -= 4; W32(r_esp, 0x7010f5u); f_006ffb40();
    /* 007010f5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007010f7: je 0x701173 */ if (fZ) goto L_00701173;
L_007010f9:; BB(0x007010f9);
    /* 007010f9: mov eax, dword ptr [ebp + 0x68] */ r_eax = R32((u32)(r_ebp+0x68u));
    /* 007010fc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 007010fe: jle 0x70129c */ if ((fZ||fS!=fO)) goto L_0070129c;
L_00701104:; BB(0x00701104);
    /* 00701104: mov ebx, dword ptr [ebp + 0x78] */ r_ebx = R32((u32)(r_ebp+0x78u));
    /* 00701107: cmp ebx, dword ptr [ebp + 0x74] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp+0x74u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0070110a: jge 0x701136 */ if ((fS==fO)) goto L_00701136;
L_0070110c:; BB(0x0070110c);
    /* 0070110c: mov edx, ebx */ r_edx = r_ebx;
    /* 0070110e: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00701111: add ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00701113: mov edx, dword ptr [ebp + 0x6c] */ r_edx = R32((u32)(r_ebp+0x6cu));
    /* 00701116: sar ebx, 1 */ { u32 c = (1u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 00701118: cmp edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0070111a: jge 0x701132 */ if ((fS==fO)) goto L_00701132;
L_0070111c:; BB(0x0070111c);
    /* 0070111c: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0070111e: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00701120: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00701123: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00701125: jl 0x701295 */ if ((fS!=fO)) goto L_00701295;
L_0070112b:; BB(0x0070112b);
    /* 0070112b: mov edx, 1 */ r_edx = 0x1u;
    /* 00701130: jmp 0x701138 */ goto L_00701138;
L_00701132:; BB(0x00701132);
    /* 00701132: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00701134: jmp 0x701138 */ goto L_00701138;
L_00701136:; BB(0x00701136);
    /* 00701136: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_00701138:; BB(0x00701138);
    /* 00701138: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070113a: jne 0x701142 */ if (!fZ) goto L_00701142;
L_0070113c:; BB(0x0070113c);
    /* 0070113c: add dword ptr [ebp + 0x6c], -1 */ { u32 ad = (u32)(r_ebp+0x6cu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00701140: jmp 0x701159 */ goto L_00701159;
L_00701142:; BB(0x00701142);
    /* 00701142: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00701145: jne 0x701159 */ if (!fZ) goto L_00701159;
L_00701147:; BB(0x00701147);
    /* 00701147: fld dword ptr [ebp + 0x88] */ FPUSH(R_F32((u32)(r_ebp+0x88u)));
    /* 0070114d: fsub dword ptr [0x96e4ac] */ ST(0) = ST(0) - R_F32((u32)(0x96e4acu));
    /* 00701153: fstp dword ptr [ebp + 0x88] */ W_F32((u32)(r_ebp+0x88u), ST(0)); FPOP();
L_00701159:; BB(0x00701159);
    /* 00701159: mov dword ptr [ebp + 0x8c], 1 */ W32((u32)(r_ebp+0x8cu), 0x1u);
    /* 00701163: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00701166: mov dword ptr [ebp + 0x68], eax */ W32((u32)(r_ebp+0x68u), r_eax);
    /* 00701169: call 0x70768c */ r_esp -= 4; W32(r_esp, 0x70116eu); f_0070768c();
    /* 0070116e: jmp 0x701274 */ goto L_00701274;
L_00701173:; BB(0x00701173);
    /* 00701173: push dword ptr [0xa0f688] */ { u32 v = R32((u32)(0xa0f688u)); r_esp -= 4; W32(r_esp, v); }
    /* 00701179: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0070117b: call 0x6ffb40 */ r_esp -= 4; W32(r_esp, 0x701180u); f_006ffb40();
    /* 00701180: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00701182: je 0x7011f9 */ if (fZ) goto L_007011f9;
L_00701184:; BB(0x00701184);
    /* 00701184: mov esi, dword ptr [ebp + 0x68] */ r_esi = R32((u32)(r_ebp+0x68u));
    /* 00701187: mov edx, dword ptr [ebp + 0x74] */ r_edx = R32((u32)(r_ebp+0x74u));
    /* 0070118a: lea edi, [edx - 1] */ r_edi = (u32)(r_edx+0xffffffffu);
    /* 0070118d: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0070118f: jge 0x7011f9 */ if ((fS==fO)) goto L_007011f9;
L_00701191:; BB(0x00701191);
    /* 00701191: mov eax, dword ptr [ebp + 0x78] */ r_eax = R32((u32)(r_ebp+0x78u));
    /* 00701194: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00701196: jle 0x7011e7 */ if ((fZ||fS!=fO)) goto L_007011e7;
L_00701198:; BB(0x00701198);
    /* 00701198: mov ecx, dword ptr [ebp + 0x6c] */ r_ecx = R32((u32)(r_ebp+0x6cu));
    /* 0070119b: lea ebx, [eax - 1] */ r_ebx = (u32)(r_eax+0xffffffffu);
    /* 0070119e: mov dword ptr [esp + 0x10], ebx */ W32((u32)(r_esp+0x10u), r_ebx);
    /* 007011a2: lea edi, [esi + eax] */ r_edi = (u32)(r_esi+r_eax);
    /* 007011a5: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 007011a7: lea edi, [edi + ecx - 1] */ r_edi = (u32)(r_edi+r_ecx+0xffffffffu);
    /* 007011ab: lea eax, [edi + eax - 1] */ r_eax = (u32)(r_edi+r_eax+0xffffffffu);
    /* 007011af: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007011b1: jl 0x7011ba */ if ((fS!=fO)) goto L_007011ba;
L_007011b3:; BB(0x007011b3);
    /* 007011b3: neg edi */ { u32 x = r_edi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 007011b5: add edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 007011b7: lea ebx, [edi - 1] */ r_ebx = (u32)(r_edi+0xffffffffu);
L_007011ba:; BB(0x007011ba);
    /* 007011ba: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 007011bc: jle 0x7012d3 */ if ((fZ||fS!=fO)) goto L_007012d3;
L_007011c2:; BB(0x007011c2);
    /* 007011c2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007011c3: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007011c5: call 0x701300 */ r_esp -= 4; W32(r_esp, 0x7011cau); f_00701300();
    /* 007011ca: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 007011cd: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 007011d0: fmul dword ptr [0x96e4ac] */ ST(0) = ST(0) * R_F32((u32)(0x96e4acu));
    /* 007011d6: fadd dword ptr [ebp + 0x88] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x88u));
    /* 007011dc: fstp dword ptr [ebp + 0x88] */ W_F32((u32)(r_ebp+0x88u), ST(0)); FPOP();
    /* 007011e2: jmp 0x701274 */ goto L_00701274;
L_007011e7:; BB(0x007011e7);
    /* 007011e7: mov dword ptr [ebp + 0x6c], edi */ W32((u32)(r_ebp+0x6cu), r_edi);
    /* 007011ea: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007011ec: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007011ef: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007011f0: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007011f2: call 0x701300 */ r_esp -= 4; W32(r_esp, 0x7011f7u); f_00701300();
    /* 007011f7: jmp 0x701274 */ goto L_00701274;
L_007011f9:; BB(0x007011f9);
    /* 007011f9: push dword ptr [0xa0f684] */ { u32 v = R32((u32)(0xa0f684u)); r_esp -= 4; W32(r_esp, v); }
    /* 007011ff: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00701201: call 0x6ffb40 */ r_esp -= 4; W32(r_esp, 0x701206u); f_006ffb40();
    /* 00701206: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00701208: je 0x701274 */ if (fZ) goto L_00701274;
L_0070120a:; BB(0x0070120a);
    /* 0070120a: mov esi, dword ptr [ebp + 0x68] */ r_esi = R32((u32)(r_ebp+0x68u));
    /* 0070120d: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0070120f: jle 0x701274 */ if ((fZ||fS!=fO)) goto L_00701274;
L_00701211:; BB(0x00701211);
    /* 00701211: mov ebx, dword ptr [ebp + 0x78] */ r_ebx = R32((u32)(r_ebp+0x78u));
    /* 00701214: cmp ebx, dword ptr [ebp + 0x74] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp+0x74u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00701217: jge 0x701263 */ if ((fS==fO)) goto L_00701263;
L_00701219:; BB(0x00701219);
    /* 00701219: mov edx, dword ptr [ebp + 0x6c] */ r_edx = R32((u32)(r_ebp+0x6cu));
    /* 0070121c: add ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0070121f: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00701221: add edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00701223: mov eax, edx */ r_eax = r_edx;
    /* 00701225: sub eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00701227: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00701229: jge 0x70122d */ if ((fS==fO)) goto L_0070122d;
L_0070122b:; BB(0x0070122b);
    /* 0070122b: mov ebx, edx */ r_ebx = r_edx;
L_0070122d:; BB(0x0070122d);
    /* 0070122d: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0070122f: jle 0x7012e9 */ if ((fZ||fS!=fO)) goto L_007012e9;
L_00701235:; BB(0x00701235);
    /* 00701235: mov eax, ebx */ r_eax = r_ebx;
    /* 00701237: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00701239: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0070123a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0070123c: call 0x701300 */ r_esp -= 4; W32(r_esp, 0x701241u); f_00701300();
    /* 00701241: fld dword ptr [0x96e4ac] */ FPUSH(R_F32((u32)(0x96e4acu)));
    /* 00701247: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 0070124b: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0070124f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00701251: fchs  */ ST(0) = -ST(0);
    /* 00701253: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00701255: fadd dword ptr [ebp + 0x88] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x88u));
    /* 0070125b: fstp dword ptr [ebp + 0x88] */ W_F32((u32)(r_ebp+0x88u), ST(0)); FPOP();
    /* 00701261: jmp 0x701274 */ goto L_00701274;
L_00701263:; BB(0x00701263);
    /* 00701263: mov dword ptr [ebp + 0x6c], 0 */ W32((u32)(r_ebp+0x6cu), 0x0u);
    /* 0070126a: neg esi */ { u32 x = r_esi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0070126c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0070126e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0070126f: call 0x701300 */ r_esp -= 4; W32(r_esp, 0x701274u); f_00701300();
L_00701274:; BB(0x00701274);
    /* 00701274: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00701276: call 0x710db4 */ r_esp -= 4; W32(r_esp, 0x70127bu); f_00710db4();
    /* 0070127b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0070127d: call 0x710ee4 */ r_esp -= 4; W32(r_esp, 0x701282u); f_00710ee4();
    /* 00701282: lea eax, [ebp + 0x24] */ r_eax = (u32)(r_ebp+0x24u);
    /* 00701285: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00701286: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00701288: call 0x72a5ec */ r_esp -= 4; W32(r_esp, 0x70128du); f_0072a5ec();
    /* 0070128d: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00701290: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00701291: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00701292: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00701293: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00701294: ret  */ FN_RET(0x00701024); r_esp += 4; return;
L_00701295:; BB(0x00701295);
    /* 00701295: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00701297: jmp 0x701138 */ goto L_00701138;
L_0070129c:; BB(0x0070129c);
    /* 0070129c: mov edx, dword ptr [ebp + 0x7c] */ r_edx = R32((u32)(r_ebp+0x7cu));
    /* 0070129f: mov ebx, dword ptr [ebp + 0x74] */ r_ebx = R32((u32)(r_ebp+0x74u));
    /* 007012a2: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007012a5: mov dword ptr [ebp + 0x6c], edx */ W32((u32)(r_ebp+0x6cu), r_edx);
    /* 007012a8: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 007012aa: add ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007012ad: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007012ae: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007012b0: call 0x701300 */ r_esp -= 4; W32(r_esp, 0x7012b5u); f_00701300();
    /* 007012b5: mov eax, dword ptr [ebp + 0x68] */ r_eax = R32((u32)(r_ebp+0x68u));
    /* 007012b8: sub eax, dword ptr [ebp + 0x6c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x6cu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007012bb: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007012bd: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 007012c1: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 007012c5: fmul dword ptr [0x96e4ac] */ ST(0) = ST(0) * R_F32((u32)(0x96e4acu));
    /* 007012cb: fstp dword ptr [ebp + 0x88] */ W_F32((u32)(r_ebp+0x88u), ST(0)); FPOP();
    /* 007012d1: jmp 0x701274 */ goto L_00701274;
L_007012d3:; BB(0x007012d3);
    /* 007012d3: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 007012d7: mov dword ptr [ebp + 0x6c], eax */ W32((u32)(r_ebp+0x6cu), r_eax);
    /* 007012da: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007012dc: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007012df: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007012e1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007012e2: call 0x701300 */ r_esp -= 4; W32(r_esp, 0x7012e7u); f_00701300();
    /* 007012e7: jmp 0x701274 */ goto L_00701274;
L_007012e9:; BB(0x007012e9);
    /* 007012e9: mov dword ptr [ebp + 0x6c], 0 */ W32((u32)(r_ebp+0x6cu), 0x0u);
    /* 007012f0: neg esi */ { u32 x = r_esi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 007012f2: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007012f4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007012f5: call 0x701300 */ r_esp -= 4; W32(r_esp, 0x7012fau); f_00701300();
    /* 007012fa: jmp 0x701274 */ goto L_00701274;
}

void f_00701300(void) /* sub_701300 */
{
    FN_ENTER(0x00701300);
    /* 00701300: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00701304: add dword ptr [ecx + 0x68], eax */ { u32 ad = (u32)(r_ecx+0x68u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00701307: mov dword ptr [ecx + 0x8c], 1 */ W32((u32)(r_ecx+0x8cu), 0x1u);
    /* 00701311: call 0x70768c */ r_esp -= 4; W32(r_esp, 0x701316u); f_0070768c();
    /* 00701316: ret 4 */ FN_RET(0x00701300); r_esp += 8; return;
}

void f_0070131c(void) /* sub_70131C */
{
    FN_ENTER(0x0070131c);
    /* 0070131c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0070131d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0070131e: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00701321: mov edi, ecx */ r_edi = r_ecx;
    /* 00701323: mov ecx, edi */ r_ecx = r_edi;
    /* 00701325: call 0x712644 */ r_esp -= 4; W32(r_esp, 0x70132au); f_00712644();
    /* 0070132a: mov ebp, eax */ r_ebp = r_eax;
    /* 0070132c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0070132d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0070132e: call 0x707918 */ r_esp -= 4; W32(r_esp, 0x701333u); f_00707918();
    /* 00701333: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00701336: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00701337: mov ecx, edi */ r_ecx = r_edi;
    /* 00701339: call 0x70143c */ r_esp -= 4; W32(r_esp, 0x70133eu); f_0070143c();
    /* 0070133e: mov edx, dword ptr [edi + 0x8c] */ r_edx = R32((u32)(r_edi+0x8cu));
    /* 00701344: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00701346: je 0x70141d */ if (fZ) goto L_0070141d;
L_0070134c:; BB(0x0070134c);
    /* 0070134c: mov ecx, dword ptr [edi + 0x68] */ r_ecx = R32((u32)(r_edi+0x68u));
    /* 0070134f: sub ecx, dword ptr [edi + 0x6c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edi+0x6cu)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00701352: mov edx, dword ptr [edi + 0x7c] */ r_edx = R32((u32)(r_edi+0x7cu));
    /* 00701355: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00701357: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00701359: mov dword ptr [edi + 0x8c], 0 */ W32((u32)(r_edi+0x8cu), 0x0u);
    /* 00701363: jle 0x7013f2 */ if ((fZ||fS!=fO)) goto L_007013f2;
L_00701369:; BB(0x00701369);
    /* 00701369: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
    /* 0070136d: mov ebp, eax */ r_ebp = r_eax;
    /* 0070136f: mov dword ptr [esp + 0x14], edi */ W32((u32)(r_esp+0x14u), r_edi);
    /* 00701373: mov dword ptr [esp + 0xc], ebx */ W32((u32)(r_esp+0xcu), r_ebx);
    /* 00701377: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 0070137a: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0070137c: mov dword ptr [esp + 0x10], esi */ W32((u32)(r_esp+0x10u), r_esi);
    /* 00701380: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00701382: mov ebx, edx */ r_ebx = r_edx;
    /* 00701384: mov esi, ecx */ r_esi = r_ecx;
L_00701386:; BB(0x00701386);
    /* 00701386: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0070138a: mov edi, dword ptr [eax + 0x28] */ r_edi = R32((u32)(r_eax+0x28u));
    /* 0070138d: mov edi, dword ptr [edi + ebp*4] */ r_edi = R32((u32)(r_edi+r_ebp*4));
    /* 00701390: mov eax, dword ptr [eax + 0x80] */ r_eax = R32((u32)(r_eax+0x80u));
    /* 00701396: movsx eax, word ptr [eax + esi*2] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+r_esi*2));
    /* 0070139a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0070139b: call 0x706518 */ r_esp -= 4; W32(r_esp, 0x7013a0u); f_00706518();
    /* 007013a0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007013a1: push 0xc0 */ { u32 v = 0xc0u; r_esp -= 4; W32(r_esp, v); }
    /* 007013a6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007013a7: mov ecx, edi */ r_ecx = r_edi;
    /* 007013a9: call 0x72db60 */ r_esp -= 4; W32(r_esp, 0x7013aeu); f_0072db60();
    /* 007013ae: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 007013b1: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 007013b4: fstp dword ptr [edi + 0xc] */ W_F32((u32)(r_edi+0xcu), ST(0)); FPOP();
    /* 007013b7: push 0x49742400 */ { u32 v = 0x49742400u; r_esp -= 4; W32(r_esp, v); }
    /* 007013bc: mov ecx, edi */ r_ecx = r_edi;
    /* 007013be: call 0x72ddf4 */ r_esp -= 4; W32(r_esp, 0x7013c3u); f_0072ddf4();
    /* 007013c3: mov ecx, edi */ r_ecx = r_edi;
    /* 007013c5: call 0x72e0e4 */ r_esp -= 4; W32(r_esp, 0x7013cau); f_0072e0e4();
    /* 007013ca: mov eax, dword ptr [0x96e590] */ r_eax = R32((u32)(0x96e590u));
    /* 007013cf: mov dword ptr [edi + 0x24], eax */ W32((u32)(r_edi+0x24u), r_eax);
    /* 007013d2: mov edi, dword ptr [esp + 0x14] */ r_edi = R32((u32)(r_esp+0x14u));
    /* 007013d6: mov edx, dword ptr [edi + 0x7c] */ r_edx = R32((u32)(r_edi+0x7cu));
    /* 007013d9: add ebx, 0x14 */ {  u32 a = r_ebx; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007013dc: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007013df: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007013e2: cmp ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007013e4: jl 0x701386 */ if ((fS!=fO)) goto L_00701386;
L_007013e6:; BB(0x007013e6);
    /* 007013e6: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
    /* 007013ea: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 007013ee: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
L_007013f2:; BB(0x007013f2);
    /* 007013f2: mov eax, dword ptr [edi + 0x60] */ r_eax = R32((u32)(r_edi+0x60u));
    /* 007013f5: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007013f7: jne 0x70141d */ if (!fZ) goto L_0070141d;
L_007013f9:; BB(0x007013f9);
    /* 007013f9: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007013fb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 007013fd: jle 0x70141d */ if ((fZ||fS!=fO)) goto L_0070141d;
L_007013ff:; BB(0x007013ff);
    /* 007013ff: mov eax, dword ptr [edi + 0x28] */ r_eax = R32((u32)(r_edi+0x28u));
    /* 00701402: mov eax, dword ptr [eax + ecx*4] */ r_eax = R32((u32)(r_eax+r_ecx*4));
    /* 00701405: cmp ecx, dword ptr [edi + 0x6c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edi+0x6cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00701408: jne 0x701416 */ if (!fZ) goto L_00701416;
L_0070140a:; BB(0x0070140a);
    /* 0070140a: mov edx, dword ptr [0x96e594] */ r_edx = R32((u32)(0x96e594u));
    /* 00701410: mov dword ptr [eax + 0x24], edx */ W32((u32)(r_eax+0x24u), r_edx);
    /* 00701413: mov edx, dword ptr [edi + 0x7c] */ r_edx = R32((u32)(r_edi+0x7cu));
L_00701416:; BB(0x00701416);
    /* 00701416: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00701419: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0070141b: jl 0x7013ff */ if ((fS!=fO)) goto L_007013ff;
L_0070141d:; BB(0x0070141d);
    /* 0070141d: fld dword ptr [0x96e69c] */ FPUSH(R_F32((u32)(0x96e69cu)));
    /* 00701423: fadd dword ptr [ebp + 0x14] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x14u));
    /* 00701426: fstp dword ptr [ebp + 0x14] */ W_F32((u32)(r_ebp+0x14u), ST(0)); FPOP();
    /* 00701429: lea edx, [edi + 0x24] */ r_edx = (u32)(r_edi+0x24u);
    /* 0070142c: mov ecx, edi */ r_ecx = r_edi;
    /* 0070142e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0070142f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00701430: call 0x72a648 */ r_esp -= 4; W32(r_esp, 0x701435u); f_0072a648();
    /* 00701435: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00701438: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00701439: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0070143a: ret  */ FN_RET(0x0070131c); r_esp += 4; return;
}

void f_0070143c(void) /* sub_70143C */
{
    FN_ENTER(0x0070143c);
    /* 0070143c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0070143d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0070143e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0070143f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00701440: sub esp, 0xf0 */ {  u32 a = r_esp; u32 b = 0xf0u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00701446: mov esi, ecx */ r_esi = r_ecx;
    /* 00701448: mov ebp, dword ptr [esp + 0x104] */ r_ebp = R32((u32)(r_esp+0x104u));
    /* 0070144f: mov eax, dword ptr [0xa983d8] */ r_eax = R32((u32)(0xa983d8u));
    /* 00701454: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00701456: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 00701459: mov eax, dword ptr [eax + 0xc] */ r_eax = R32((u32)(r_eax+0xcu));
    /* 0070145c: mov ebx, dword ptr [eax] */ r_ebx = R32((u32)(r_eax));
    /* 0070145e: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 00701461: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00701463: jl 0x701896 */ if ((fS!=fO)) goto L_00701896;
L_00701469:; BB(0x00701469);
    /* 00701469: fld dword ptr [esi + 0x4c] */ FPUSH(R_F32((u32)(r_esi+0x4cu)));
    /* 0070146c: fmul dword ptr [0x96e698] */ ST(0) = ST(0) * R_F32((u32)(0x96e698u));
    /* 00701472: fadd dword ptr [esi + 0x44] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x44u));
    /* 00701475: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00701479: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0070147b: push dword ptr [esi + 0x54] */ { u32 v = R32((u32)(r_esi+0x54u)); r_esp -= 4; W32(r_esp, v); }
    /* 0070147e: call 0x7079b4 */ r_esp -= 4; W32(r_esp, 0x701483u); f_007079b4();
    /* 00701483: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00701486: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0070148a: mov dword ptr [esp + 8], 0xffffffff */ W32((u32)(r_esp+0x8u), 0xffffffffu);
    /* 00701492: lea eax, [esp + 0x30] */ r_eax = (u32)(r_esp+0x30u);
    /* 00701496: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00701499: call 0x6ffdd4 */ r_esp -= 4; W32(r_esp, 0x70149eu); f_006ffdd4();
    /* 0070149e: lea eax, [esp + 0x30] */ r_eax = (u32)(r_esp+0x30u);
    /* 007014a2: push dword ptr [esi + 0x64] */ { u32 v = R32((u32)(r_esi+0x64u)); r_esp -= 4; W32(r_esp, v); }
    /* 007014a5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007014a6: call 0x7079cc */ r_esp -= 4; W32(r_esp, 0x7014abu); f_007079cc();
    /* 007014ab: lea eax, [esp + 0x38] */ r_eax = (u32)(r_esp+0x38u);
    /* 007014af: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007014b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007014b1: call 0x707c94 */ r_esp -= 4; W32(r_esp, 0x7014b6u); f_00707c94();
    /* 007014b6: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007014b9: fld dword ptr [0x96e4ac] */ FPUSH(R_F32((u32)(0x96e4acu)));
    /* 007014bf: fld dword ptr [0x96e4ac] */ FPUSH(R_F32((u32)(0x96e4acu)));
    /* 007014c5: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 007014c9: fld dword ptr [ebp + 0x2c] */ FPUSH(R_F32((u32)(r_ebp+0x2cu)));
    /* 007014cc: mov edi, dword ptr [esi + 0x78] */ r_edi = R32((u32)(r_esi+0x78u));
    /* 007014cf: fld dword ptr [esi + 0x4c] */ FPUSH(R_F32((u32)(r_esi+0x4cu)));
    /* 007014d2: fmul dword ptr [0x96e690] */ ST(0) = ST(0) * R_F32((u32)(0x96e690u));
    /* 007014d8: mov eax, dword ptr [esi + 0x64] */ r_eax = R32((u32)(r_esi+0x64u));
    /* 007014db: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007014dd: fst dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0));
    /* 007014e1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007014e3: fadd st(3), st(0) */ ST(3) = ST(3) + ST(0);
    /* 007014e5: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 007014e7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007014e9: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 007014eb: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 007014ed: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 007014f1: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 007014f3: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 007014f7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007014f9: jne 0x70150f */ if (!fZ) goto L_0070150f;
L_007014fb:; BB(0x007014fb);
    /* 007014fb: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 007014fd: fld dword ptr [0x96e4d8] */ FPUSH(R_F32((u32)(0x96e4d8u)));
    /* 00701503: fst dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0));
    /* 00701507: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00701509: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 0070150d: jmp 0x701521 */ goto L_00701521;
L_0070150f:; BB(0x0070150f);
    /* 0070150f: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00701511: fld dword ptr [0x96e4e8] */ FPUSH(R_F32((u32)(0x96e4e8u)));
    /* 00701517: fst dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0));
    /* 0070151b: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0070151d: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
L_00701521:; BB(0x00701521);
    /* 00701521: fld dword ptr [0xa96e30] */ FPUSH(R_F32((u32)(0xa96e30u)));
    /* 00701527: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 0070152b: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0070152d: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 00701531: fld dword ptr [esi + 0x88] */ FPUSH(R_F32((u32)(r_esi+0x88u)));
    /* 00701537: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00701539: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0070153b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0070153d: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 00701541: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 00701545: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00701546: fchs  */ ST(0) = -ST(0);
    /* 00701548: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 0070154a: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0070154d: call 0x83e0b8 */ r_esp -= 4; W32(r_esp, 0x701552u); f_0083e0b8();
    /* 00701552: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 00701556: fld dword ptr [0x96e4ac] */ FPUSH(R_F32((u32)(0x96e4acu)));
    /* 0070155c: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 00701560: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00701562: fld dword ptr [0x96e694] */ FPUSH(R_F32((u32)(0x96e694u)));
    /* 00701568: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0070156a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0070156c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0070156e: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 00701572: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00701573: je 0x7018a3 */ if (fZ) goto L_007018a3;
L_00701579:; BB(0x00701579);
    /* 00701579: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 0070157d: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0070157f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00701581: mov edi, dword ptr [esi + 0x78] */ r_edi = R32((u32)(r_esi+0x78u));
    /* 00701584: add edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00701587: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00701588: jae 0x701590 */ if (!fC) goto L_00701590;
L_0070158a:; BB(0x0070158a);
    /* 0070158a: fadd dword ptr [esp + 0x1c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x1cu));
    /* 0070158e: jmp 0x7015a0 */ goto L_007015a0;
L_00701590:; BB(0x00701590);
    /* 00701590: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 00701594: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 00701598: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0070159a: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0070159c: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
L_007015a0:; BB(0x007015a0);
    /* 007015a0: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 007015a2: fmul dword ptr [esp + 0x14] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x14u));
    /* 007015a6: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 007015aa: fld dword ptr [0xa96e30] */ FPUSH(R_F32((u32)(0xa96e30u)));
    /* 007015b0: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 007015b4: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007015b6: fst dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0));
    /* 007015ba: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007015bc: fst dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0));
    /* 007015c0: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007015c2: fst dword ptr [esp + 0x64] */ W_F32((u32)(r_esp+0x64u), ST(0));
    /* 007015c6: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007015c8: fst dword ptr [esp + 0x88] */ W_F32((u32)(r_esp+0x88u), ST(0));
    /* 007015cf: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007015d1: fst dword ptr [esp + 0x94] */ W_F32((u32)(r_esp+0x94u), ST(0));
    /* 007015d8: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007015da: fst dword ptr [esp + 0xb8] */ W_F32((u32)(r_esp+0xb8u), ST(0));
    /* 007015e1: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007015e3: fst dword ptr [esp + 0xc4] */ W_F32((u32)(r_esp+0xc4u), ST(0));
    /* 007015ea: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007015ec: fst dword ptr [esp + 0xe8] */ W_F32((u32)(r_esp+0xe8u), ST(0));
    /* 007015f3: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007015f5: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 007015f7: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007015f9: fst dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0));
    /* 007015fd: fst dword ptr [esp + 0x4c] */ W_F32((u32)(r_esp+0x4cu), ST(0));
    /* 00701601: fst dword ptr [esp + 0x7c] */ W_F32((u32)(r_esp+0x7cu), ST(0));
    /* 00701605: fst dword ptr [esp + 0xac] */ W_F32((u32)(r_esp+0xacu), ST(0));
    /* 0070160c: fstp dword ptr [esp + 0xdc] */ W_F32((u32)(r_esp+0xdcu), ST(0)); FPOP();
    /* 00701613: lea eax, [esp + 0x30] */ r_eax = (u32)(r_esp+0x30u);
    /* 00701617: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00701619: fchs  */ ST(0) = -ST(0);
    /* 0070161b: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0070161d: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0070161f: fst dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0));
    /* 00701623: fst dword ptr [esp + 0x70] */ W_F32((u32)(r_esp+0x70u), ST(0));
    /* 00701627: fst dword ptr [esp + 0xa0] */ W_F32((u32)(r_esp+0xa0u), ST(0));
    /* 0070162e: fstp dword ptr [esp + 0xd0] */ W_F32((u32)(r_esp+0xd0u), ST(0)); FPOP();
    /* 00701635: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00701637: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00701638: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0070163a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0070163b: call 0x82b158 */ r_esp -= 4; W32(r_esp, 0x701640u); f_0082b158();
    /* 00701640: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00701643: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 00701647: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
L_0070164b:; BB(0x0070164b);
    /* 0070164b: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0070164d: jle 0x701716 */ if ((fZ||fS!=fO)) goto L_00701716;
L_00701653:; BB(0x00701653);
    /* 00701653: fld dword ptr [0x96e4ac] */ FPUSH(R_F32((u32)(0x96e4acu)));
    /* 00701659: fmul dword ptr [esp + 0x14] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x14u));
    /* 0070165d: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 00701661: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 00701665: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00701667: fst dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0));
    /* 0070166b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0070166d: fst dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0));
    /* 00701671: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00701673: fst dword ptr [esp + 0x70] */ W_F32((u32)(r_esp+0x70u), ST(0));
    /* 00701677: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00701679: fst dword ptr [esp + 0x88] */ W_F32((u32)(r_esp+0x88u), ST(0));
    /* 00701680: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00701682: fst dword ptr [esp + 0xa0] */ W_F32((u32)(r_esp+0xa0u), ST(0));
    /* 00701689: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0070168b: fst dword ptr [esp + 0xb8] */ W_F32((u32)(r_esp+0xb8u), ST(0));
    /* 00701692: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00701694: fstp dword ptr [esp + 0xd0] */ W_F32((u32)(r_esp+0xd0u), ST(0)); FPOP();
    /* 0070169b: fstp dword ptr [esp + 0xe8] */ W_F32((u32)(r_esp+0xe8u), ST(0)); FPOP();
    /* 007016a2: mov eax, 0 */ r_eax = 0x0u;
    /* 007016a7: jle 0x7018ac */ if ((fZ||fS!=fO)) goto L_007018ac;
L_007016ad:; BB(0x007016ad);
    /* 007016ad: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 007016b1: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 007016b5: mov dword ptr [esp + 0xc], esi */ W32((u32)(r_esp+0xcu), r_esi);
    /* 007016b9: mov esi, eax */ r_esi = r_eax;
L_007016bb:; BB(0x007016bb);
    /* 007016bb: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 007016bf: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007016c1: fst dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0));
    /* 007016c5: fst dword ptr [esp + 0x64] */ W_F32((u32)(r_esp+0x64u), ST(0));
    /* 007016c9: fst dword ptr [esp + 0x94] */ W_F32((u32)(r_esp+0x94u), ST(0));
    /* 007016d0: fst dword ptr [esp + 0xc4] */ W_F32((u32)(r_esp+0xc4u), ST(0));
    /* 007016d7: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 007016d9: fst dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0));
    /* 007016dd: fst dword ptr [esp + 0x4c] */ W_F32((u32)(r_esp+0x4cu), ST(0));
    /* 007016e1: fst dword ptr [esp + 0x7c] */ W_F32((u32)(r_esp+0x7cu), ST(0));
    /* 007016e5: fst dword ptr [esp + 0xac] */ W_F32((u32)(r_esp+0xacu), ST(0));
    /* 007016ec: fstp dword ptr [esp + 0xdc] */ W_F32((u32)(r_esp+0xdcu), ST(0)); FPOP();
    /* 007016f3: lea edx, [esp + 0x30] */ r_edx = (u32)(r_esp+0x30u);
    /* 007016f7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007016f9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007016fa: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 007016fc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007016fd: call 0x82b158 */ r_esp -= 4; W32(r_esp, 0x701702u); f_0082b158();
    /* 00701702: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00701705: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 00701709: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0070170c: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0070170e: jl 0x7016bb */ if ((fS!=fO)) goto L_007016bb;
L_00701710:; BB(0x00701710);
    /* 00701710: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00701712: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
L_00701716:; BB(0x00701716);
    /* 00701716: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 0070171a: fcomp dword ptr [0x96e694] */ fx_compare(ST(0), R_F32((u32)(0x96e694u))); FPOP();
    /* 00701720: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00701722: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00701723: je 0x7017d7 */ if (fZ) goto L_007017d7;
L_00701729:; BB(0x00701729);
    /* 00701729: fld dword ptr [0xa96e30] */ FPUSH(R_F32((u32)(0xa96e30u)));
    /* 0070172f: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 00701733: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 00701737: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 0070173b: fld dword ptr [esi + 0x4c] */ FPUSH(R_F32((u32)(r_esi+0x4cu)));
    /* 0070173e: fmul dword ptr [0x96e698] */ ST(0) = ST(0) * R_F32((u32)(0x96e698u));
    /* 00701744: fmul dword ptr [esp + 0x14] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x14u));
    /* 00701748: fadd dword ptr [esp + 0x10] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x10u));
    /* 0070174c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0070174e: fst dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0));
    /* 00701752: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00701754: fst dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0));
    /* 00701758: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0070175a: fst dword ptr [esp + 0x4c] */ W_F32((u32)(r_esp+0x4cu), ST(0));
    /* 0070175e: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00701760: fst dword ptr [esp + 0x64] */ W_F32((u32)(r_esp+0x64u), ST(0));
    /* 00701764: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00701766: fst dword ptr [esp + 0x70] */ W_F32((u32)(r_esp+0x70u), ST(0));
    /* 0070176a: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0070176c: fst dword ptr [esp + 0x7c] */ W_F32((u32)(r_esp+0x7cu), ST(0));
    /* 00701770: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00701772: fst dword ptr [esp + 0x94] */ W_F32((u32)(r_esp+0x94u), ST(0));
    /* 00701779: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0070177b: fst dword ptr [esp + 0xa0] */ W_F32((u32)(r_esp+0xa0u), ST(0));
    /* 00701782: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00701784: fst dword ptr [esp + 0xac] */ W_F32((u32)(r_esp+0xacu), ST(0));
    /* 0070178b: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0070178d: fstp dword ptr [esp + 0xc4] */ W_F32((u32)(r_esp+0xc4u), ST(0)); FPOP();
    /* 00701794: fst dword ptr [esp + 0xd0] */ W_F32((u32)(r_esp+0xd0u), ST(0));
    /* 0070179b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0070179d: fstp dword ptr [esp + 0xdc] */ W_F32((u32)(r_esp+0xdcu), ST(0)); FPOP();
    /* 007017a4: lea eax, [esp + 0x30] */ r_eax = (u32)(r_esp+0x30u);
    /* 007017a8: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007017aa: fchs  */ ST(0) = -ST(0);
    /* 007017ac: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 007017ae: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 007017b0: fst dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0));
    /* 007017b4: fst dword ptr [esp + 0x88] */ W_F32((u32)(r_esp+0x88u), ST(0));
    /* 007017bb: fst dword ptr [esp + 0xb8] */ W_F32((u32)(r_esp+0xb8u), ST(0));
    /* 007017c2: fstp dword ptr [esp + 0xe8] */ W_F32((u32)(r_esp+0xe8u), ST(0)); FPOP();
    /* 007017c9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007017cb: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007017cc: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 007017ce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007017cf: call 0x82b158 */ r_esp -= 4; W32(r_esp, 0x7017d4u); f_0082b158();
    /* 007017d4: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_007017d7:; BB(0x007017d7);
    /* 007017d7: mov eax, dword ptr [esi + 0x74] */ r_eax = R32((u32)(r_esi+0x74u));
    /* 007017da: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 007017dc: jle 0x701896 */ if ((fZ||fS!=fO)) goto L_00701896;
L_007017e2:; BB(0x007017e2);
    /* 007017e2: mov eax, dword ptr [esi + 0x60] */ r_eax = R32((u32)(r_esi+0x60u));
    /* 007017e5: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007017e7: jne 0x701896 */ if (!fZ) goto L_00701896;
L_007017ed:; BB(0x007017ed);
    /* 007017ed: push 0x3dcccccd */ { u32 v = 0x3dcccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 007017f2: push dword ptr [esi + 0x54] */ { u32 v = R32((u32)(r_esi+0x54u)); r_esp -= 4; W32(r_esp, v); }
    /* 007017f5: call 0x7079b4 */ r_esp -= 4; W32(r_esp, 0x7017fau); f_007079b4();
    /* 007017fa: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007017fd: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00701801: mov dword ptr [esp + 8], 0xffffffff */ W32((u32)(r_esp+0x8u), 0xffffffffu);
    /* 00701809: lea eax, [esp + 0x30] */ r_eax = (u32)(r_esp+0x30u);
    /* 0070180d: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00701810: call 0x6ffdd4 */ r_esp -= 4; W32(r_esp, 0x701815u); f_006ffdd4();
    /* 00701815: lea eax, [esp + 0x30] */ r_eax = (u32)(r_esp+0x30u);
    /* 00701819: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0070181b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0070181c: call 0x7079cc */ r_esp -= 4; W32(r_esp, 0x701821u); f_007079cc();
    /* 00701821: lea eax, [esp + 0x38] */ r_eax = (u32)(r_esp+0x38u);
    /* 00701825: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00701826: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00701827: call 0x707c94 */ r_esp -= 4; W32(r_esp, 0x70182cu); f_00707c94();
    /* 0070182c: fild dword ptr [esi + 0x6c] */ FPUSH((long double)(i32)R32((u32)(r_esi+0x6cu)));
    /* 0070182f: fld dword ptr [0x96e4ac] */ FPUSH(R_F32((u32)(0x96e4acu)));
    /* 00701835: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 00701837: fld dword ptr [esi + 0x4c] */ FPUSH(R_F32((u32)(r_esi+0x4cu)));
    /* 0070183a: fmul dword ptr [0x96e690] */ ST(0) = ST(0) * R_F32((u32)(0x96e690u));
    /* 00701840: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00701842: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00701844: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 00701848: fld dword ptr [ebp + 0x2c] */ FPUSH(R_F32((u32)(r_ebp+0x2cu)));
    /* 0070184b: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 0070184d: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0070184f: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 00701851: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00701853: fst dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0));
    /* 00701857: fst dword ptr [esp + 0x74] */ W_F32((u32)(r_esp+0x74u), ST(0));
    /* 0070185b: fst dword ptr [esp + 0xa4] */ W_F32((u32)(r_esp+0xa4u), ST(0));
    /* 00701862: fstp dword ptr [esp + 0xd4] */ W_F32((u32)(r_esp+0xd4u), ST(0)); FPOP();
    /* 00701869: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0070186b: fst dword ptr [esp + 0x5c] */ W_F32((u32)(r_esp+0x5cu), ST(0));
    /* 0070186f: fst dword ptr [esp + 0x8c] */ W_F32((u32)(r_esp+0x8cu), ST(0));
    /* 00701876: fst dword ptr [esp + 0xbc] */ W_F32((u32)(r_esp+0xbcu), ST(0));
    /* 0070187d: fstp dword ptr [esp + 0xec] */ W_F32((u32)(r_esp+0xecu), ST(0)); FPOP();
    /* 00701884: lea eax, [esp + 0x40] */ r_eax = (u32)(r_esp+0x40u);
    /* 00701888: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0070188a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0070188b: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0070188d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0070188e: call 0x82b158 */ r_esp -= 4; W32(r_esp, 0x701893u); f_0082b158();
    /* 00701893: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00701896:; BB(0x00701896);
    /* 00701896: add esp, 0xf0 */ {  u32 a = r_esp; u32 b = 0xf0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0070189c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0070189d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0070189e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0070189f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007018a0: ret 4 */ FN_RET(0x0070143c); r_esp += 8; return;
L_007018a3:; BB(0x007018a3);
    /* 007018a3: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007018a5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007018a7: jmp 0x70164b */ goto L_0070164b;
L_007018ac:; BB(0x007018ac);
    /* 007018ac: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007018ae: jmp 0x701716 */ goto L_00701716;
}

void f_007018b4(void) /* sub_7018B4 */
{
    FN_ENTER(0x007018b4);
    /* 007018b4: mov eax, dword ptr [ecx + 0x78] */ r_eax = R32((u32)(r_ecx+0x78u));
    /* 007018b7: mov dword ptr [0x9d0588], eax */ W32((u32)(0x9d0588u), r_eax);
    /* 007018bc: movsx edx, word ptr [ecx + 0x20] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x20u));
    /* 007018c0: lea eax, [ecx + 0x24] */ r_eax = (u32)(r_ecx+0x24u);
    /* 007018c3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007018c4: push 0x9d0584 */ { u32 v = 0x9d0584u; r_esp -= 4; W32(r_esp, v); }
    /* 007018c9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007018ca: call 0x72a68c */ r_esp -= 4; W32(r_esp, 0x7018cfu); f_0072a68c();
    /* 007018cf: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007018d2: ret  */ FN_RET(0x007018b4); r_esp += 4; return;
}

void f_007018d4(void) /* sub_7018D4 */
{
    FN_ENTER(0x007018d4);
    /* 007018d4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007018d5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007018d6: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007018d9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 007018db: push dword ptr [ebx + 0x70] */ { u32 v = R32((u32)(r_ebx+0x70u)); r_esp -= 4; W32(r_esp, v); }
    /* 007018de: call 0x705540 */ r_esp -= 4; W32(r_esp, 0x7018e3u); f_00705540();
    /* 007018e3: mov esi, eax */ r_esi = r_eax;
    /* 007018e5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007018e8: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007018ea: je 0x701928 */ if (fZ) goto L_00701928;
L_007018ec:; BB(0x007018ec);
    /* 007018ec: mov edx, dword ptr [esi + 4] */ r_edx = R32((u32)(r_esi+0x4u));
    /* 007018ef: mov dword ptr [ebx + 0x74], edx */ W32((u32)(r_ebx+0x74u), r_edx);
    /* 007018f2: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007018f4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007018f5: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x7018fau); f_008581c5();
    /* 007018fa: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007018fb: mov edx, dword ptr [ebx + 0x74] */ r_edx = R32((u32)(r_ebx+0x74u));
    /* 007018fe: mov dword ptr [ebx + 0x80], eax */ W32((u32)(r_ebx+0x80u), r_eax);
    /* 00701904: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00701906: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00701908: jg 0x701912 */ if ((!fZ&&fS==fO)) goto L_00701912;
L_0070190a:; BB(0x0070190a);
    /* 0070190a: jmp 0x701935 */ goto L_00701935;
L_0070190c:; BB(0x0070190c);
    /* 0070190c: mov eax, dword ptr [ebx + 0x80] */ r_eax = R32((u32)(r_ebx+0x80u));
L_00701912:; BB(0x00701912);
    /* 00701912: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 00701914: movzx edx, word ptr [edx + ecx*2] */ r_edx = (u32)R16((u32)(r_edx+r_ecx*2));
    /* 00701918: mov word ptr [eax + ecx*2], dx */ W16((u32)(r_eax+r_ecx*2), (u16)r_edx);
    /* 0070191c: mov edx, dword ptr [ebx + 0x74] */ r_edx = R32((u32)(r_ebx+0x74u));
    /* 0070191f: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00701922: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00701924: jl 0x70190c */ if ((fS!=fO)) goto L_0070190c;
L_00701926:; BB(0x00701926);
    /* 00701926: jmp 0x701935 */ goto L_00701935;
L_00701928:; BB(0x00701928);
    /* 00701928: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0070192a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0070192c: mov dword ptr [ebx + 0x74], eax */ W32((u32)(r_ebx+0x74u), r_eax);
    /* 0070192f: mov dword ptr [ebx + 0x80], eax */ W32((u32)(r_ebx+0x80u), r_eax);
L_00701935:; BB(0x00701935);
    /* 00701935: mov esi, dword ptr [ebx + 0x78] */ r_esi = R32((u32)(r_ebx+0x78u));
    /* 00701938: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0070193a: mov eax, 0 */ r_eax = 0x0u;
    /* 0070193f: jl 0x701943 */ if ((fS!=fO)) goto L_00701943;
L_00701941:; BB(0x00701941);
    /* 00701941: mov esi, edx */ r_esi = r_edx;
L_00701943:; BB(0x00701943);
    /* 00701943: mov dword ptr [ebx + 0x7c], esi */ W32((u32)(r_ebx+0x7cu), r_esi);
    /* 00701946: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00701948: jle 0x7019a9 */ if ((fZ||fS!=fO)) goto L_007019a9;
L_0070194a:; BB(0x0070194a);
    /* 0070194a: mov dword ptr [esp + 0xc], edi */ W32((u32)(r_esp+0xcu), r_edi);
    /* 0070194e: mov edi, ebx */ r_edi = r_ebx;
    /* 00701950: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
    /* 00701954: lea esi, [eax + eax*4] */ r_esi = (u32)(r_eax+r_eax*4);
    /* 00701957: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00701959: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0070195b: mov ebp, eax */ r_ebp = r_eax;
L_0070195d:; BB(0x0070195d);
    /* 0070195d: mov edx, dword ptr [edi + 0x28] */ r_edx = R32((u32)(r_edi+0x28u));
    /* 00701960: mov ebx, dword ptr [edx + ebp*4] */ r_ebx = R32((u32)(r_edx+r_ebp*4));
    /* 00701963: mov edx, dword ptr [edi + 0x80] */ r_edx = R32((u32)(r_edi+0x80u));
    /* 00701969: movsx edx, word ptr [edx + ebp*2] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edx+r_ebp*2));
    /* 0070196d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0070196e: call 0x706518 */ r_esp -= 4; W32(r_esp, 0x701973u); f_00706518();
    /* 00701973: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00701974: push 0xc0 */ { u32 v = 0xc0u; r_esp -= 4; W32(r_esp, v); }
    /* 00701979: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0070197a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0070197c: call 0x72db60 */ r_esp -= 4; W32(r_esp, 0x701981u); f_0072db60();
    /* 00701981: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 00701984: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 00701987: fstp dword ptr [ebx + 0xc] */ W_F32((u32)(r_ebx+0xcu), ST(0)); FPOP();
    /* 0070198a: push 0x49742400 */ { u32 v = 0x49742400u; r_esp -= 4; W32(r_esp, v); }
    /* 0070198f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00701991: call 0x72ddf4 */ r_esp -= 4; W32(r_esp, 0x701996u); f_0072ddf4();
    /* 00701996: add esi, 0x14 */ {  u32 a = r_esi; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00701999: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0070199c: cmp ebp, dword ptr [edi + 0x7c] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_edi+0x7cu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0070199f: jl 0x70195d */ if ((fS!=fO)) goto L_0070195d;
L_007019a1:; BB(0x007019a1);
    /* 007019a1: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
    /* 007019a5: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
L_007019a9:; BB(0x007019a9);
    /* 007019a9: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007019ac: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007019ad: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007019ae: ret  */ FN_RET(0x007018d4); r_esp += 4; return;
}

void f_007019b0(void) /* sub_7019B0 */
{
    FN_ENTER(0x007019b0);
    /* 007019b0: mov dword ptr [ecx + 0x88], 0 */ W32((u32)(r_ecx+0x88u), 0x0u);
    /* 007019ba: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007019bc: mov dword ptr [ecx + 0x84], 0 */ W32((u32)(r_ecx+0x84u), 0x0u);
    /* 007019c6: mov dword ptr [ecx + 0x68], eax */ W32((u32)(r_ecx+0x68u), r_eax);
    /* 007019c9: mov dword ptr [ecx + 0x6c], eax */ W32((u32)(r_ecx+0x6cu), r_eax);
    /* 007019cc: mov dword ptr [ecx + 0x8c], 1 */ W32((u32)(r_ecx+0x8cu), 0x1u);
    /* 007019d6: ret  */ FN_RET(0x007019b0); r_esp += 4; return;
}

void f_007019d8(void) /* sub_7019D8 */
{
    FN_ENTER(0x007019d8);
    /* 007019d8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007019d9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 007019db: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007019dd: call 0x7019fc */ r_esp -= 4; W32(r_esp, 0x7019e2u); f_007019fc();
    /* 007019e2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 007019e6: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007019e8: jne 0x7019ee */ if (!fZ) goto L_007019ee;
L_007019ea:; BB(0x007019ea);
    /* 007019ea: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007019eb: ret 4 */ FN_RET(0x007019d8); r_esp += 8; return;
L_007019ee:; BB(0x007019ee);
    /* 007019ee: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007019ef: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x7019f4u); f_005c2f74();
    /* 007019f4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007019f5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007019f6: ret 4 */ FN_RET(0x007019d8); r_esp += 8; return;
}

void f_007019fc(void) /* sub_7019FC */
{
    FN_ENTER(0x007019fc);
    /* 007019fc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007019fd: mov ebp, esp */ r_ebp = r_esp;
    /* 007019ff: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00701a01: push 0x8f0120 */ { u32 v = 0x8f0120u; r_esp -= 4; W32(r_esp, v); }
    /* 00701a06: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00701a0c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00701a0d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00701a14: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00701a17: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00701a1a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00701a1d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00701a20: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00701a23: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00701a26: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00701a2d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00701a30: mov dword ptr [ecx], 0xb3ed50 */ W32((u32)(r_ecx), 0xb3ed50u);
    /* 00701a36: call 0x7074d8 */ r_esp -= 4; W32(r_esp, 0x701a3bu); f_007074d8();
    /* 00701a3b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00701a42: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00701a45: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x701a4au); f_008171e8();
    /* 00701a4a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00701a4d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00701a54: mov esp, ebp */ r_esp = r_ebp;
    /* 00701a56: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00701a57: ret  */ FN_RET(0x007019fc); r_esp += 4; return;
}

void f_00701a58(void) /* sub_701A58 */
{
    FN_ENTER(0x00701a58);
    /* 00701a58: call 0x707e10 */ r_esp -= 4; W32(r_esp, 0x701a5du); f_00707e10();
    /* 00701a5d: mov eax, dword ptr [0xa96ee0] */ r_eax = R32((u32)(0xa96ee0u));
    /* 00701a62: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00701a64: je 0x701a77 */ if (fZ) goto L_00701a77;
L_00701a66:; BB(0x00701a66);
    /* 00701a66: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00701a67: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x701a6cu); f_00857e98();
    /* 00701a6c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00701a6d: mov dword ptr [0xa96ee0], 0 */ W32((u32)(0xa96ee0u), 0x0u);
L_00701a77:; BB(0x00701a77);
    /* 00701a77: mov eax, dword ptr [0xa96edc] */ r_eax = R32((u32)(0xa96edcu));
    /* 00701a7c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00701a7e: je 0x701a91 */ if (fZ) goto L_00701a91;
L_00701a80:; BB(0x00701a80);
    /* 00701a80: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00701a81: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x701a86u); f_00857e98();
    /* 00701a86: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00701a87: mov dword ptr [0xa96edc], 0 */ W32((u32)(0xa96edcu), 0x0u);
L_00701a91:; BB(0x00701a91);
    /* 00701a91: mov eax, dword ptr [0xa96ee4] */ r_eax = R32((u32)(0xa96ee4u));
    /* 00701a96: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00701a98: je 0x701aab */ if (fZ) goto L_00701aab;
L_00701a9a:; BB(0x00701a9a);
    /* 00701a9a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00701a9b: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x701aa0u); f_00857e98();
    /* 00701aa0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00701aa1: mov dword ptr [0xa96ee4], 0 */ W32((u32)(0xa96ee4u), 0x0u);
L_00701aab:; BB(0x00701aab);
    /* 00701aab: mov eax, dword ptr [0xa96ee8] */ r_eax = R32((u32)(0xa96ee8u));
    /* 00701ab0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00701ab2: je 0x701ac5 */ if (fZ) goto L_00701ac5;
L_00701ab4:; BB(0x00701ab4);
    /* 00701ab4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00701ab5: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x701abau); f_00857e98();
    /* 00701aba: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00701abb: mov dword ptr [0xa96ee8], 0 */ W32((u32)(0xa96ee8u), 0x0u);
L_00701ac5:; BB(0x00701ac5);
    /* 00701ac5: mov eax, dword ptr [0xa96eec] */ r_eax = R32((u32)(0xa96eecu));
    /* 00701aca: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00701acc: je 0x701adf */ if (fZ) goto L_00701adf;
L_00701ace:; BB(0x00701ace);
    /* 00701ace: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00701acf: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x701ad4u); f_00857e98();
    /* 00701ad4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00701ad5: mov dword ptr [0xa96eec], 0 */ W32((u32)(0xa96eecu), 0x0u);
L_00701adf:; BB(0x00701adf);
    /* 00701adf: mov eax, dword ptr [0xa96ef0] */ r_eax = R32((u32)(0xa96ef0u));
    /* 00701ae4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00701ae6: je 0x701af9 */ if (fZ) goto L_00701af9;
L_00701ae8:; BB(0x00701ae8);
    /* 00701ae8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00701ae9: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x701aeeu); f_00857e98();
    /* 00701aee: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00701aef: mov dword ptr [0xa96ef0], 0 */ W32((u32)(0xa96ef0u), 0x0u);
L_00701af9:; BB(0x00701af9);
    /* 00701af9: mov eax, dword ptr [0xa96e9c] */ r_eax = R32((u32)(0xa96e9cu));
    /* 00701afe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00701b00: je 0x701b13 */ if (fZ) goto L_00701b13;
L_00701b02:; BB(0x00701b02);
    /* 00701b02: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00701b03: call 0x5b9bac */ r_esp -= 4; W32(r_esp, 0x701b08u); f_005b9bac();
    /* 00701b08: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00701b09: mov dword ptr [0xa96e9c], 0 */ W32((u32)(0xa96e9cu), 0x0u);
L_00701b13:; BB(0x00701b13);
    /* 00701b13: mov eax, dword ptr [0xa96ea0] */ r_eax = R32((u32)(0xa96ea0u));
    /* 00701b18: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00701b1a: je 0x701b2d */ if (fZ) goto L_00701b2d;
L_00701b1c:; BB(0x00701b1c);
    /* 00701b1c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00701b1d: call 0x5b9bac */ r_esp -= 4; W32(r_esp, 0x701b22u); f_005b9bac();
    /* 00701b22: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00701b23: mov dword ptr [0xa96ea0], 0 */ W32((u32)(0xa96ea0u), 0x0u);
L_00701b2d:; BB(0x00701b2d);
    /* 00701b2d: mov eax, dword ptr [0xa96ea4] */ r_eax = R32((u32)(0xa96ea4u));
    /* 00701b32: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00701b34: je 0x701b47 */ if (fZ) goto L_00701b47;
L_00701b36:; BB(0x00701b36);
    /* 00701b36: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00701b37: call 0x5b9bac */ r_esp -= 4; W32(r_esp, 0x701b3cu); f_005b9bac();
    /* 00701b3c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00701b3d: mov dword ptr [0xa96ea4], 0 */ W32((u32)(0xa96ea4u), 0x0u);
L_00701b47:; BB(0x00701b47);
    /* 00701b47: mov eax, dword ptr [0xa96ea8] */ r_eax = R32((u32)(0xa96ea8u));
    /* 00701b4c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00701b4e: je 0x701b61 */ if (fZ) goto L_00701b61;
L_00701b50:; BB(0x00701b50);
    /* 00701b50: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00701b51: call 0x5b9bac */ r_esp -= 4; W32(r_esp, 0x701b56u); f_005b9bac();
    /* 00701b56: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00701b57: mov dword ptr [0xa96ea8], 0 */ W32((u32)(0xa96ea8u), 0x0u);
L_00701b61:; BB(0x00701b61);
    /* 00701b61: mov eax, dword ptr [0xa96eac] */ r_eax = R32((u32)(0xa96eacu));
    /* 00701b66: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00701b68: je 0x701b7b */ if (fZ) goto L_00701b7b;
L_00701b6a:; BB(0x00701b6a);
    /* 00701b6a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00701b6b: call 0x5b9bac */ r_esp -= 4; W32(r_esp, 0x701b70u); f_005b9bac();
    /* 00701b70: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00701b71: mov dword ptr [0xa96eac], 0 */ W32((u32)(0xa96eacu), 0x0u);
L_00701b7b:; BB(0x00701b7b);
    /* 00701b7b: mov ecx, dword ptr [0xa96e98] */ r_ecx = R32((u32)(0xa96e98u));
    /* 00701b81: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00701b83: je 0x701b98 */ if (fZ) goto L_00701b98;
L_00701b85:; BB(0x00701b85);
    /* 00701b85: je 0x701b8e */ if (fZ) goto L_00701b8e;
L_00701b87:; BB(0x00701b87);
    /* 00701b87: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00701b89: call 0x6dbd5c */ r_esp -= 4; W32(r_esp, 0x701b8eu); f_006dbd5c();
L_00701b8e:; BB(0x00701b8e);
    /* 00701b8e: mov dword ptr [0xa96e98], 0 */ W32((u32)(0xa96e98u), 0x0u);
L_00701b98:; BB(0x00701b98);
    /* 00701b98: ret  */ FN_RET(0x00701a58); r_esp += 4; return;
}

void f_00701b9c(void) /* sub_701B9C */
{
    FN_ENTER(0x00701b9c);
    /* 00701b9c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00701b9d: mov ebp, esp */ r_ebp = r_esp;
    /* 00701b9f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00701ba1: push 0x8f013c */ { u32 v = 0x8f013cu; r_esp -= 4; W32(r_esp, v); }
    /* 00701ba6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00701bac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00701bad: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00701bb4: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00701bb7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00701bba: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00701bbd: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00701bc0: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00701bc3: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00701bc6: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00701bc9: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
    /* 00701bcc: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00701bcf: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x701bd4u); f_008193cc();
    /* 00701bd4: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00701bdb: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00701bde: movzx edx, word ptr [0xa96ed8] */ r_edx = (u32)R16((u32)(0xa96ed8u));
    /* 00701be5: mov dword ptr [ecx], 0xb3ed50 */ W32((u32)(r_ecx), 0xb3ed50u);
    /* 00701beb: mov eax, dword ptr [0x9d0688] */ r_eax = R32((u32)(0x9d0688u));
    /* 00701bf0: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00701bf3: mov word ptr [ecx + 0x1c], dx */ W16((u32)(r_ecx+0x1cu), (u16)r_edx);
    /* 00701bf7: call 0x705454 */ r_esp -= 4; W32(r_esp, 0x701bfcu); f_00705454();
    /* 00701bfc: mov eax, dword ptr [0xa96ef0] */ r_eax = R32((u32)(0xa96ef0u));
    /* 00701c01: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00701c03: mov word ptr [eax], dx */ W16((u32)(r_eax), (u16)r_edx);
    /* 00701c06: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00701c09: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00701c0f: mov dword ptr [ecx + 0xa0], edx */ W32((u32)(r_ecx+0xa0u), r_edx);
    /* 00701c15: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x701c1au); f_0068d5a8();
    /* 00701c1a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00701c1b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00701c1d: je 0x701c5c */ if (fZ) goto L_00701c5c;
L_00701c1f:; BB(0x00701c1f);
    /* 00701c1f: mov ebx, dword ptr [0xaafca0] */ r_ebx = R32((u32)(0xaafca0u));
    /* 00701c25: mov ecx, eax */ r_ecx = r_eax;
    /* 00701c27: call 0x7ba980 */ r_esp -= 4; W32(r_esp, 0x701c2cu); f_007ba980();
    /* 00701c2c: movsx esi, ax */ r_esi = (u32)(i32)(i16)(u16)r_eax;
    /* 00701c2f: call 0x807db8 */ r_esp -= 4; W32(r_esp, 0x701c34u); f_00807db8();
    /* 00701c34: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00701c36: je 0x701c41 */ if (fZ) goto L_00701c41;
L_00701c38:; BB(0x00701c38);
    /* 00701c38: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00701c39: call 0x811554 */ r_esp -= 4; W32(r_esp, 0x701c3eu); f_00811554();
    /* 00701c3e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00701c3f: jmp 0x701c4b */ goto L_00701c4b;
L_00701c41:; BB(0x00701c41);
    /* 00701c41: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00701c42: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00701c43: call 0x8114b0 */ r_esp -= 4; W32(r_esp, 0x701c48u); f_008114b0();
    /* 00701c48: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00701c4b:; BB(0x00701c4b);
    /* 00701c4b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00701c4d: jne 0x701c5c */ if (!fZ) goto L_00701c5c;
L_00701c4f:; BB(0x00701c4f);
    /* 00701c4f: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 00701c52: mov dword ptr [eax + 0xa0], 1 */ W32((u32)(r_eax+0xa0u), 0x1u);
L_00701c5c:; BB(0x00701c5c);
    /* 00701c5c: call 0x7060ec */ r_esp -= 4; W32(r_esp, 0x701c61u); f_007060ec();
    /* 00701c61: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00701c64: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00701c67: mov dword ptr [ecx + 0xc0], eax */ W32((u32)(r_ecx+0xc0u), r_eax);
    /* 00701c6d: add ecx, 0xc4 */ {  u32 a = r_ecx; u32 b = 0xc4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00701c73: call 0x708134 */ r_esp -= 4; W32(r_esp, 0x701c78u); f_00708134();
    /* 00701c78: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00701c7b: add ecx, 0xe0 */ {  u32 a = r_ecx; u32 b = 0xe0u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00701c81: call 0x708134 */ r_esp -= 4; W32(r_esp, 0x701c86u); f_00708134();
    /* 00701c86: call 0x7004c4 */ r_esp -= 4; W32(r_esp, 0x701c8bu); f_007004c4();
    /* 00701c8b: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00701c8e: mov dword ptr [ecx + 0x7c], eax */ W32((u32)(r_ecx+0x7cu), r_eax);
    /* 00701c91: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00701c93: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 00701c96: mov dword ptr [ecx + 0x44], eax */ W32((u32)(r_ecx+0x44u), r_eax);
    /* 00701c99: mov dword ptr [ecx + 0x28], eax */ W32((u32)(r_ecx+0x28u), r_eax);
    /* 00701c9c: mov dword ptr [ecx + 0x48], eax */ W32((u32)(r_ecx+0x48u), r_eax);
    /* 00701c9f: mov dword ptr [ecx + 0x2c], eax */ W32((u32)(r_ecx+0x2cu), r_eax);
    /* 00701ca2: mov dword ptr [ecx + 0x4c], eax */ W32((u32)(r_ecx+0x4cu), r_eax);
    /* 00701ca5: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 00701ca8: mov dword ptr [ecx + 0x50], eax */ W32((u32)(r_ecx+0x50u), r_eax);
    /* 00701cab: mov dword ptr [ecx + 0x34], eax */ W32((u32)(r_ecx+0x34u), r_eax);
    /* 00701cae: mov dword ptr [ecx + 0x54], eax */ W32((u32)(r_ecx+0x54u), r_eax);
    /* 00701cb1: mov dword ptr [ecx + 0x38], eax */ W32((u32)(r_ecx+0x38u), r_eax);
    /* 00701cb4: mov dword ptr [ecx + 0x58], eax */ W32((u32)(r_ecx+0x58u), r_eax);
    /* 00701cb7: mov dword ptr [ecx + 0x3c], eax */ W32((u32)(r_ecx+0x3cu), r_eax);
    /* 00701cba: mov dword ptr [ecx + 0x5c], eax */ W32((u32)(r_ecx+0x5cu), r_eax);
    /* 00701cbd: mov dword ptr [ecx + 0x40], eax */ W32((u32)(r_ecx+0x40u), r_eax);
    /* 00701cc0: mov dword ptr [ecx + 0x60], eax */ W32((u32)(r_ecx+0x60u), r_eax);
    /* 00701cc3: mov dword ptr [ecx + 0x20], eax */ W32((u32)(r_ecx+0x20u), r_eax);
    /* 00701cc6: call 0x70756c */ r_esp -= 4; W32(r_esp, 0x701ccbu); f_0070756c();
    /* 00701ccb: mov esi, eax */ r_esi = r_eax;
    /* 00701ccd: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00701cd0: fld dword ptr [0x96e51c] */ FPUSH(R_F32((u32)(0x96e51cu)));
    /* 00701cd6: fnstcw word ptr [ebp - 0x38] */ W16((u32)(r_ebp+0xffffffc8u), fcw);
    /* 00701cd9: movzx eax, word ptr [ebp - 0x38] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc8u));
    /* 00701cdd: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00701ce2: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00701ce5: fldcw word ptr [ebp - 0x30] */ fcw = R16((u32)(r_ebp+0xffffffd0u));
    /* 00701ce8: fistp dword ptr [ebp - 0x28] */ W32((u32)(r_ebp+0xffffffd8u), (u32)fx_int32(ST(0))); FPOP();
    /* 00701ceb: fldcw word ptr [ebp - 0x38] */ fcw = R16((u32)(r_ebp+0xffffffc8u));
    /* 00701cee: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00701cf1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00701cf2: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00701cf3: mov dword ptr [ecx + 0x88], esi */ W32((u32)(r_ecx+0x88u), r_esi);
    /* 00701cf9: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 00701cfe: mov dword ptr [ecx + 0x8c], edx */ W32((u32)(r_ecx+0x8cu), r_edx);
    /* 00701d04: mov dword ptr [ecx + 0x90], edx */ W32((u32)(r_ecx+0x90u), r_edx);
    /* 00701d0a: call 0x700db8 */ r_esp -= 4; W32(r_esp, 0x701d0fu); f_00700db8();
    /* 00701d0f: mov ebx, eax */ r_ebx = r_eax;
    /* 00701d11: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00701d14: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00701d16: jne 0x701d1d */ if (!fZ) goto L_00701d1d;
L_00701d18:; BB(0x00701d18);
    /* 00701d18: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00701d1b: jmp 0x701d2c */ goto L_00701d2c;
L_00701d1d:; BB(0x00701d1d);
    /* 00701d1d: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00701d20: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00701d21: call 0x707dd0 */ r_esp -= 4; W32(r_esp, 0x701d26u); f_00707dd0();
    /* 00701d26: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00701d29: mov dword ptr [edx + 0x24], ebx */ W32((u32)(r_edx+0x24u), r_ebx);
L_00701d2c:; BB(0x00701d2c);
    /* 00701d2c: fld dword ptr [0x96e51c] */ FPUSH(R_F32((u32)(0x96e51cu)));
    /* 00701d32: fnstcw word ptr [ebp - 0x38] */ W16((u32)(r_ebp+0xffffffc8u), fcw);
    /* 00701d35: movzx eax, word ptr [ebp - 0x38] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc8u));
    /* 00701d39: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00701d3e: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00701d41: fldcw word ptr [ebp - 0x30] */ fcw = R16((u32)(r_ebp+0xffffffd0u));
    /* 00701d44: fistp dword ptr [ebp - 0x28] */ W32((u32)(r_ebp+0xffffffd8u), (u32)fx_int32(ST(0))); FPOP();
    /* 00701d47: fldcw word ptr [ebp - 0x38] */ fcw = R16((u32)(r_ebp+0xffffffc8u));
    /* 00701d4a: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00701d4d: mov dword ptr [edx + 0x44], 0 */ W32((u32)(r_edx+0x44u), 0x0u);
    /* 00701d54: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00701d55: push dword ptr [edx + 0x8c] */ { u32 v = R32((u32)(r_edx+0x8cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00701d5b: call 0x700db8 */ r_esp -= 4; W32(r_esp, 0x701d60u); f_00700db8();
    /* 00701d60: mov ebx, eax */ r_ebx = r_eax;
    /* 00701d62: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00701d65: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00701d67: jne 0x701d6e */ if (!fZ) goto L_00701d6e;
L_00701d69:; BB(0x00701d69);
    /* 00701d69: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00701d6c: jmp 0x701d7d */ goto L_00701d7d;
L_00701d6e:; BB(0x00701d6e);
    /* 00701d6e: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00701d71: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00701d72: call 0x707d90 */ r_esp -= 4; W32(r_esp, 0x701d77u); f_00707d90();
    /* 00701d77: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00701d7a: mov dword ptr [edx + 0x28], ebx */ W32((u32)(r_edx+0x28u), r_ebx);
L_00701d7d:; BB(0x00701d7d);
    /* 00701d7d: mov ebx, dword ptr [0xa96da4] */ r_ebx = R32((u32)(0xa96da4u));
    /* 00701d83: mov ecx, dword ptr [0x96e528] */ r_ecx = R32((u32)(0x96e528u));
    /* 00701d89: mov dword ptr [ebp - 0x48], ebx */ W32((u32)(r_ebp+0xffffffb8u), r_ebx);
    /* 00701d8c: mov dword ptr [ebp - 0x44], ecx */ W32((u32)(r_ebp+0xffffffbcu), r_ecx);
    /* 00701d8f: mov dword ptr [ebp - 0x40], ebx */ W32((u32)(r_ebp+0xffffffc0u), r_ebx);
    /* 00701d92: lea edi, [ebp - 0x4c] */ r_edi = (u32)(r_ebp+0xffffffb4u);
    /* 00701d95: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00701d97: mov dword ptr [edx + 0x64], eax */ W32((u32)(r_edx+0x64u), r_eax);
    /* 00701d9a: lea esi, [ebp - 0x44] */ r_esi = (u32)(r_ebp+0xffffffbcu);
    /* 00701d9d: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00701d9f: push dword ptr [0x9d05c4] */ { u32 v = R32((u32)(0x9d05c4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00701da5: push dword ptr [0x96e558] */ { u32 v = R32((u32)(0x96e558u)); r_esp -= 4; W32(r_esp, v); }
    /* 00701dab: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00701dac: mov dword ptr [edx + 0x68], eax */ W32((u32)(r_edx+0x68u), r_eax);
    /* 00701daf: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00701db0: mov dword ptr [edx + 0x6c], eax */ W32((u32)(r_edx+0x6cu), r_eax);
    /* 00701db3: mov dword ptr [edx + 0x70], eax */ W32((u32)(r_edx+0x70u), r_eax);
    /* 00701db6: mov dword ptr [edx + 0x74], eax */ W32((u32)(r_edx+0x74u), r_eax);
    /* 00701db9: mov dword ptr [edx + 0x78], eax */ W32((u32)(r_edx+0x78u), r_eax);
    /* 00701dbc: mov edx, dword ptr [0xa96da8] */ r_edx = R32((u32)(0xa96da8u));
    /* 00701dc2: mov dword ptr [ebp - 0x4c], edx */ W32((u32)(r_ebp+0xffffffb4u), r_edx);
    /* 00701dc5: call 0x700a80 */ r_esp -= 4; W32(r_esp, 0x701dcau); f_00700a80();
    /* 00701dca: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00701dcd: mov ebx, dword ptr [0xa96d9c] */ r_ebx = R32((u32)(0xa96d9cu));
    /* 00701dd3: mov ecx, dword ptr [0x96e52c] */ r_ecx = R32((u32)(0x96e52cu));
    /* 00701dd9: mov dword ptr [ebp - 0x48], ebx */ W32((u32)(r_ebp+0xffffffb8u), r_ebx);
    /* 00701ddc: mov dword ptr [edx + 0x64], eax */ W32((u32)(r_edx+0x64u), r_eax);
    /* 00701ddf: mov eax, dword ptr [0xa96da0] */ r_eax = R32((u32)(0xa96da0u));
    /* 00701de4: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 00701de7: mov dword ptr [ebp - 0x44], ecx */ W32((u32)(r_ebp+0xffffffbcu), r_ecx);
    /* 00701dea: mov dword ptr [ebp - 0x40], ebx */ W32((u32)(r_ebp+0xffffffc0u), r_ebx);
    /* 00701ded: lea edi, [ebp - 0x4c] */ r_edi = (u32)(r_ebp+0xffffffb4u);
    /* 00701df0: lea esi, [ebp - 0x44] */ r_esi = (u32)(r_ebp+0xffffffbcu);
    /* 00701df3: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00701df5: push dword ptr [0x9d05c0] */ { u32 v = R32((u32)(0x9d05c0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00701dfb: push dword ptr [0x96e55c] */ { u32 v = R32((u32)(0x96e55cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00701e01: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00701e02: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00701e03: call 0x700a80 */ r_esp -= 4; W32(r_esp, 0x701e08u); f_00700a80();
    /* 00701e08: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00701e0b: mov ecx, dword ptr [0x96e568] */ r_ecx = R32((u32)(0x96e568u));
    /* 00701e11: mov ebx, dword ptr [0x96e534] */ r_ebx = R32((u32)(0x96e534u));
    /* 00701e17: mov dword ptr [ebp - 0x4c], ecx */ W32((u32)(r_ebp+0xffffffb4u), r_ecx);
    /* 00701e1a: mov dword ptr [edx + 0x68], eax */ W32((u32)(r_edx+0x68u), r_eax);
    /* 00701e1d: mov eax, dword ptr [0xa96d88] */ r_eax = R32((u32)(0xa96d88u));
    /* 00701e22: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 00701e25: mov dword ptr [ebp - 0x44], ecx */ W32((u32)(r_ebp+0xffffffbcu), r_ecx);
    /* 00701e28: mov dword ptr [ebp - 0x40], ebx */ W32((u32)(r_ebp+0xffffffc0u), r_ebx);
    /* 00701e2b: push 0x687 */ { u32 v = 0x687u; r_esp -= 4; W32(r_esp, v); }
    /* 00701e30: call 0x706518 */ r_esp -= 4; W32(r_esp, 0x701e35u); f_00706518();
    /* 00701e35: lea ecx, [ebp - 0x4c] */ r_ecx = (u32)(r_ebp+0xffffffb4u);
    /* 00701e38: lea edx, [ebp - 0x44] */ r_edx = (u32)(r_ebp+0xffffffbcu);
    /* 00701e3b: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00701e3d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00701e3e: push dword ptr [0x96e56c] */ { u32 v = R32((u32)(0x96e56cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00701e44: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00701e45: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00701e46: call 0x700a80 */ r_esp -= 4; W32(r_esp, 0x701e4bu); f_00700a80();
    /* 00701e4b: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00701e4e: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00701e51: mov dword ptr [edx + 0x6c], eax */ W32((u32)(r_edx+0x6cu), r_eax);
    /* 00701e54: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00701e56: je 0x701e62 */ if (fZ) goto L_00701e62;
L_00701e58:; BB(0x00701e58);
    /* 00701e58: mov ecx, eax */ r_ecx = r_eax;
    /* 00701e5a: call 0x700c30 */ r_esp -= 4; W32(r_esp, 0x701e5fu); f_00700c30();
    /* 00701e5f: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
L_00701e62:; BB(0x00701e62);
    /* 00701e62: movzx eax, word ptr [0xa9c4f4] */ r_eax = (u32)R16((u32)(0xa9c4f4u));
    /* 00701e69: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00701e6a: add edx, 0xc4 */ {  u32 a = r_edx; u32 b = 0xc4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00701e70: push dword ptr [0xa96ef0] */ { u32 v = R32((u32)(0xa96ef0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00701e76: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00701e77: call 0x707170 */ r_esp -= 4; W32(r_esp, 0x701e7cu); f_00707170();
    /* 00701e7c: mov eax, dword ptr [0x96e57c] */ r_eax = R32((u32)(0x96e57cu));
    /* 00701e81: mov ecx, dword ptr [0xa96d70] */ r_ecx = R32((u32)(0xa96d70u));
    /* 00701e87: mov edx, dword ptr [0x96e528] */ r_edx = R32((u32)(0x96e528u));
    /* 00701e8d: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 00701e90: mov dword ptr [ebp - 0x48], ecx */ W32((u32)(r_ebp+0xffffffb8u), r_ecx);
    /* 00701e93: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 00701e96: mov dword ptr [ebp - 0x40], ecx */ W32((u32)(r_ebp+0xffffffc0u), r_ecx);
    /* 00701e99: lea esi, [ebp - 0x4c] */ r_esi = (u32)(r_ebp+0xffffffb4u);
    /* 00701e9c: lea ebx, [ebp - 0x44] */ r_ebx = (u32)(r_ebp+0xffffffbcu);
    /* 00701e9f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00701ea1: push dword ptr [0xa96ef0] */ { u32 v = R32((u32)(0xa96ef0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00701ea7: push dword ptr [0xa96d6c] */ { u32 v = R32((u32)(0xa96d6cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00701ead: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00701eae: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00701eaf: call 0x700a80 */ r_esp -= 4; W32(r_esp, 0x701eb4u); f_00700a80();
    /* 00701eb4: mov ebx, eax */ r_ebx = r_eax;
    /* 00701eb6: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00701eb9: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00701ebc: mov dword ptr [edx + 0x70], ebx */ W32((u32)(r_edx+0x70u), r_ebx);
    /* 00701ebf: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00701ec1: je 0x701ef9 */ if (fZ) goto L_00701ef9;
L_00701ec3:; BB(0x00701ec3);
    /* 00701ec3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00701ec5: call 0x700c30 */ r_esp -= 4; W32(r_esp, 0x701ecau); f_00700c30();
    /* 00701eca: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00701ecc: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00701ece: call 0x700c5c */ r_esp -= 4; W32(r_esp, 0x701ed3u); f_00700c5c();
    /* 00701ed3: mov edx, dword ptr [0x96e528] */ r_edx = R32((u32)(0x96e528u));
    /* 00701ed9: mov esi, dword ptr [0xa96d70] */ r_esi = R32((u32)(0xa96d70u));
    /* 00701edf: mov dword ptr [ebx + 0x38], 0x40000000 */ W32((u32)(r_ebx+0x38u), 0x40000000u);
    /* 00701ee6: mov dword ptr [ebx + 0x30], edx */ W32((u32)(r_ebx+0x30u), r_edx);
    /* 00701ee9: mov dword ptr [ebx + 0x48], 0x40000000 */ W32((u32)(r_ebx+0x48u), 0x40000000u);
    /* 00701ef0: mov dword ptr [ebx + 0x40], edx */ W32((u32)(r_ebx+0x40u), r_edx);
    /* 00701ef3: mov dword ptr [ebx + 0x34], esi */ W32((u32)(r_ebx+0x34u), r_esi);
    /* 00701ef6: mov dword ptr [ebx + 0x44], esi */ W32((u32)(r_ebx+0x44u), r_esi);
L_00701ef9:; BB(0x00701ef9);
    /* 00701ef9: call 0x700028 */ r_esp -= 4; W32(r_esp, 0x701efeu); f_00700028();
    /* 00701efe: mov ebx, dword ptr [ebp - 0x3c] */ r_ebx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00701f01: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00701f04: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00701f07: mov dword ptr [ebx + 0x80], eax */ W32((u32)(r_ebx+0x80u), r_eax);
    /* 00701f0d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00701f0f: mov dword ptr [ebx + 0x84], ecx */ W32((u32)(r_ebx+0x84u), r_ecx);
    /* 00701f15: mov dword ptr [ebx + 0x9c], 0xffffffff */ W32((u32)(r_ebx+0x9cu), 0xffffffffu);
    /* 00701f1f: mov dword ptr [ebx + 0xa8], ecx */ W32((u32)(r_ebx+0xa8u), r_ecx);
    /* 00701f25: mov dword ptr [ebx + 0xac], ecx */ W32((u32)(r_ebx+0xacu), r_ecx);
    /* 00701f2b: mov dword ptr [ebx + 0xb0], ecx */ W32((u32)(r_ebx+0xb0u), r_ecx);
    /* 00701f31: mov dword ptr [ebx + 0xb4], ecx */ W32((u32)(r_ebx+0xb4u), r_ecx);
    /* 00701f37: mov dword ptr [ebx + 0xb8], ecx */ W32((u32)(r_ebx+0xb8u), r_ecx);
    /* 00701f3d: mov dword ptr [ebx + 0xbc], ecx */ W32((u32)(r_ebx+0xbcu), r_ecx);
    /* 00701f43: mov edx, 0x37 */ r_edx = 0x37u;
    /* 00701f48: mov word ptr [ebx + 0xfc], dx */ W16((u32)(r_ebx+0xfcu), (u16)r_edx);
    /* 00701f4f: mov dword ptr [ebx + 0x100], ecx */ W32((u32)(r_ebx+0x100u), r_ecx);
    /* 00701f55: mov dword ptr [ebx + 0x94], ecx */ W32((u32)(r_ebx+0x94u), r_ecx);
    /* 00701f5b: mov dword ptr [ebx + 0x98], ecx */ W32((u32)(r_ebx+0x98u), r_ecx);
    /* 00701f61: mov dword ptr [ebx + 0xa4], ecx */ W32((u32)(r_ebx+0xa4u), r_ecx);
    /* 00701f67: mov dword ptr [ebx + 0x104], ecx */ W32((u32)(r_ebx+0x104u), r_ecx);
    /* 00701f6d: mov eax, ebx */ r_eax = r_ebx;
    /* 00701f6f: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00701f72: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00701f75: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00701f7c: mov esp, ebp */ r_esp = r_ebp;
    /* 00701f7e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00701f7f: ret 8 */ FN_RET(0x00701b9c); r_esp += 12; return;
}

void f_00701f84(void) /* sub_701F84 */
{
    FN_ENTER(0x00701f84);
    /* 00701f84: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00701f85: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00701f86: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00701f88: mov ecx, dword ptr [ebx + 0x80] */ r_ecx = R32((u32)(r_ebx+0x80u));
    /* 00701f8e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00701f90: je 0x701fc1 */ if (fZ) goto L_00701fc1;
L_00701f92:; BB(0x00701f92);
    /* 00701f92: mov eax, dword ptr [ebx + 0xb0] */ r_eax = R32((u32)(r_ebx+0xb0u));
    /* 00701f98: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00701f9a: je 0x701fba */ if (fZ) goto L_00701fba;
L_00701f9c:; BB(0x00701f9c);
    /* 00701f9c: movsx eax, word ptr [ebx + 0xc4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0xc4u));
    /* 00701fa3: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00701fa6: jle 0x701fb1 */ if ((fZ||fS!=fO)) goto L_00701fb1;
L_00701fa8:; BB(0x00701fa8);
    /* 00701fa8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00701faa: call 0x7001b8 */ r_esp -= 4; W32(r_esp, 0x701fafu); f_007001b8();
    /* 00701faf: jmp 0x701fc1 */ goto L_00701fc1;
L_00701fb1:; BB(0x00701fb1);
    /* 00701fb1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00701fb3: call 0x7001b8 */ r_esp -= 4; W32(r_esp, 0x701fb8u); f_007001b8();
    /* 00701fb8: jmp 0x701fc1 */ goto L_00701fc1;
L_00701fba:; BB(0x00701fba);
    /* 00701fba: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00701fbc: call 0x7001b8 */ r_esp -= 4; W32(r_esp, 0x701fc1u); f_007001b8();
L_00701fc1:; BB(0x00701fc1);
    /* 00701fc1: mov ebp, dword ptr [ebx + 0x20] */ r_ebp = R32((u32)(r_ebx+0x20u));
    /* 00701fc4: mov ebp, dword ptr [ebx + ebp*4 + 0x24] */ r_ebp = R32((u32)(r_ebx+r_ebp*4+0x24u));
    /* 00701fc8: mov eax, dword ptr [ebx + 0x7c] */ r_eax = R32((u32)(r_ebx+0x7cu));
    /* 00701fcb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00701fcd: je 0x701fe3 */ if (fZ) goto L_00701fe3;
L_00701fcf:; BB(0x00701fcf);
    /* 00701fcf: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00701fd1: je 0x701fe3 */ if (fZ) goto L_00701fe3;
L_00701fd3:; BB(0x00701fd3);
    /* 00701fd3: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00701fd5: call 0x700f90 */ r_esp -= 4; W32(r_esp, 0x701fdau); f_00700f90();
    /* 00701fda: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00701fdb: mov ecx, dword ptr [ebx + 0x7c] */ r_ecx = R32((u32)(r_ebx+0x7cu));
    /* 00701fde: call 0x700968 */ r_esp -= 4; W32(r_esp, 0x701fe3u); f_00700968();
L_00701fe3:; BB(0x00701fe3);
    /* 00701fe3: mov eax, dword ptr [ebx + 0xa8] */ r_eax = R32((u32)(r_ebx+0xa8u));
    /* 00701fe9: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00701fec: je 0x702147 */ if (fZ) goto L_00702147;
L_00701ff2:; BB(0x00701ff2);
    /* 00701ff2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00701ff4: jne 0x702266 */ if (!fZ) goto L_00702266;
L_00701ffa:; BB(0x00701ffa);
    /* 00701ffa: mov eax, dword ptr [ebx + 0xac] */ r_eax = R32((u32)(r_ebx+0xacu));
    /* 00702000: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00702002: je 0x702066 */ if (fZ) goto L_00702066;
L_00702004:; BB(0x00702004);
    /* 00702004: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00702007: jne 0x702037 */ if (!fZ) goto L_00702037;
L_00702009:; BB(0x00702009);
    /* 00702009: mov eax, dword ptr [ebx + 0x20] */ r_eax = R32((u32)(r_ebx+0x20u));
    /* 0070200c: mov eax, dword ptr [ebx + eax*4 + 0x28] */ r_eax = R32((u32)(r_ebx+r_eax*4+0x28u));
    /* 00702010: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00702012: je 0x702266 */ if (fZ) goto L_00702266;
L_00702018:; BB(0x00702018);
    /* 00702018: mov eax, dword ptr [eax + 0x50] */ r_eax = R32((u32)(r_eax+0x50u));
    /* 0070201b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0070201d: jne 0x702266 */ if (!fZ) goto L_00702266;
L_00702023:; BB(0x00702023);
    /* 00702023: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00702025: call 0x702358 */ r_esp -= 4; W32(r_esp, 0x70202au); f_00702358();
    /* 0070202a: mov dword ptr [ebx + 0xac], 0 */ W32((u32)(r_ebx+0xacu), 0x0u);
    /* 00702034: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00702035: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00702036: ret  */ FN_RET(0x00701f84); r_esp += 4; return;
L_00702037:; BB(0x00702037);
    /* 00702037: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0070203a: jne 0x702266 */ if (!fZ) goto L_00702266;
L_00702040:; BB(0x00702040);
    /* 00702040: mov eax, dword ptr [ebx + 0x20] */ r_eax = R32((u32)(r_ebx+0x20u));
    /* 00702043: mov edx, dword ptr [ebx + eax*4 + 0x24] */ r_edx = R32((u32)(r_ebx+r_eax*4+0x24u));
    /* 00702047: mov ebp, dword ptr [edx + 0x50] */ r_ebp = R32((u32)(r_edx+0x50u));
    /* 0070204a: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0070204c: jne 0x702266 */ if (!fZ) goto L_00702266;
L_00702052:; BB(0x00702052);
    /* 00702052: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00702054: call 0x70226c */ r_esp -= 4; W32(r_esp, 0x702059u); f_0070226c();
    /* 00702059: mov dword ptr [ebx + 0xac], 0 */ W32((u32)(r_ebx+0xacu), 0x0u);
    /* 00702063: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00702064: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00702065: ret  */ FN_RET(0x00701f84); r_esp += 4; return;
L_00702066:; BB(0x00702066);
    /* 00702066: mov eax, dword ptr [ebx + 0xb8] */ r_eax = R32((u32)(r_ebx+0xb8u));
    /* 0070206c: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070206f: je 0x702133 */ if (fZ) goto L_00702133;
L_00702075:; BB(0x00702075);
    /* 00702075: push dword ptr [0xa0f670] */ { u32 v = R32((u32)(0xa0f670u)); r_esp -= 4; W32(r_esp, v); }
    /* 0070207b: lea ecx, [ebx + 0x1c] */ r_ecx = (u32)(r_ebx+0x1cu);
    /* 0070207e: call 0x6ffb1c */ r_esp -= 4; W32(r_esp, 0x702083u); f_006ffb1c();
    /* 00702083: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00702085: je 0x702133 */ if (fZ) goto L_00702133;
L_0070208b:; BB(0x0070208b);
    /* 0070208b: call 0x70768c */ r_esp -= 4; W32(r_esp, 0x702090u); f_0070768c();
    /* 00702090: mov eax, dword ptr [ebx + 0x20] */ r_eax = R32((u32)(r_ebx+0x20u));
    /* 00702093: mov dword ptr [ebx + 0xa8], 1 */ W32((u32)(r_ebx+0xa8u), 0x1u);
    /* 0070209d: mov ecx, dword ptr [ebx + eax*4 + 0x24] */ r_ecx = R32((u32)(r_ebx+r_eax*4+0x24u));
    /* 007020a1: call 0x700f8c */ r_esp -= 4; W32(r_esp, 0x7020a6u); f_00700f8c();
    /* 007020a6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007020a7: mov ecx, dword ptr [ebx + 0x80] */ r_ecx = R32((u32)(r_ebx+0x80u));
    /* 007020ad: call 0x7000d4 */ r_esp -= 4; W32(r_esp, 0x7020b2u); f_007000d4();
    /* 007020b2: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007020b4: call 0x700f14 */ r_esp -= 4; W32(r_esp, 0x7020b9u); f_00700f14();
    /* 007020b9: mov eax, dword ptr [ebx + 0xc4] */ r_eax = R32((u32)(r_ebx+0xc4u));
    /* 007020bf: mov edx, dword ptr [ebx + 0xc8] */ r_edx = R32((u32)(r_ebx+0xc8u));
    /* 007020c5: mov ebp, dword ptr [ebx + 0xcc] */ r_ebp = R32((u32)(r_ebx+0xccu));
    /* 007020cb: mov dword ptr [ebx + 0xe0], eax */ W32((u32)(r_ebx+0xe0u), r_eax);
    /* 007020d1: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 007020d4: mov dword ptr [ebx + 0xe4], edx */ W32((u32)(r_ebx+0xe4u), r_edx);
    /* 007020da: mov edx, dword ptr [ebx + 0xd0] */ r_edx = R32((u32)(r_ebx+0xd0u));
    /* 007020e0: mov dword ptr [ebx + 0xe8], ebp */ W32((u32)(r_ebx+0xe8u), r_ebp);
    /* 007020e6: mov dword ptr [ebx + 0xec], edx */ W32((u32)(r_ebx+0xecu), r_edx);
    /* 007020ec: mov edx, dword ptr [ebx + 0xd4] */ r_edx = R32((u32)(r_ebx+0xd4u));
    /* 007020f2: mov dword ptr [ebx + 0xf0], edx */ W32((u32)(r_ebx+0xf0u), r_edx);
    /* 007020f8: mov edx, dword ptr [ebx + 0xd8] */ r_edx = R32((u32)(r_ebx+0xd8u));
    /* 007020fe: mov dword ptr [ebx + 0xf4], edx */ W32((u32)(r_ebx+0xf4u), r_edx);
    /* 00702104: mov edx, dword ptr [ebx + 0xdc] */ r_edx = R32((u32)(r_ebx+0xdcu));
    /* 0070210a: mov dword ptr [ebx + 0xf8], edx */ W32((u32)(r_ebx+0xf8u), r_edx);
    /* 00702110: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00702112: jle 0x702266 */ if ((fZ||fS!=fO)) goto L_00702266;
L_00702118:; BB(0x00702118);
    /* 00702118: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0070211b: mov word ptr [ebx + 0xe0], ax */ W16((u32)(r_ebx+0xe0u), (u16)r_eax);
    /* 00702122: lea eax, [ebx + 0xe0] */ r_eax = (u32)(r_ebx+0xe0u);
    /* 00702128: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00702129: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0070212b: call 0x7070ac */ r_esp -= 4; W32(r_esp, 0x702130u); f_007070ac();
    /* 00702130: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00702131: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00702132: ret  */ FN_RET(0x00701f84); r_esp += 4; return;
L_00702133:; BB(0x00702133);
    /* 00702133: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00702135: call 0x7023c8 */ r_esp -= 4; W32(r_esp, 0x70213au); f_007023c8();
    /* 0070213a: mov dword ptr [ebx + 0x94], 0 */ W32((u32)(r_ebx+0x94u), 0x0u);
    /* 00702144: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00702145: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00702146: ret  */ FN_RET(0x00701f84); r_esp += 4; return;
L_00702147:; BB(0x00702147);
    /* 00702147: mov ecx, dword ptr [ebx + 0x80] */ r_ecx = R32((u32)(r_ebx+0x80u));
    /* 0070214d: call 0x700104 */ r_esp -= 4; W32(r_esp, 0x702152u); f_00700104();
    /* 00702152: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00702154: call 0x706e54 */ r_esp -= 4; W32(r_esp, 0x702159u); f_00706e54();
    /* 00702159: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070215b: je 0x7021fd */ if (fZ) goto L_007021fd;
L_00702161:; BB(0x00702161);
    /* 00702161: mov ecx, dword ptr [ebx + 0x80] */ r_ecx = R32((u32)(r_ebx+0x80u));
    /* 00702167: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00702169: je 0x702266 */ if (fZ) goto L_00702266;
L_0070216f:; BB(0x0070216f);
    /* 0070216f: call 0x7001b4 */ r_esp -= 4; W32(r_esp, 0x702174u); f_007001b4();
    /* 00702174: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00702176: je 0x7021aa */ if (fZ) goto L_007021aa;
L_00702178:; BB(0x00702178);
    /* 00702178: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070217b: jne 0x702192 */ if (!fZ) goto L_00702192;
L_0070217d:; BB(0x0070217d);
    /* 0070217d: call 0x707678 */ r_esp -= 4; W32(r_esp, 0x702182u); f_00707678();
    /* 00702182: mov eax, dword ptr [0xa0f678] */ r_eax = R32((u32)(0xa0f678u));
    /* 00702187: or dword ptr [ebx + 0x94], eax */ { u32 ad = (u32)(r_ebx+0x94u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 0070218d: jmp 0x702231 */ goto L_00702231;
L_00702192:; BB(0x00702192);
    /* 00702192: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00702195: jne 0x702266 */ if (!fZ) goto L_00702266;
L_0070219b:; BB(0x0070219b);
    /* 0070219b: call 0x707678 */ r_esp -= 4; W32(r_esp, 0x7021a0u); f_00707678();
    /* 007021a0: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007021a2: call 0x706da4 */ r_esp -= 4; W32(r_esp, 0x7021a7u); f_00706da4();
    /* 007021a7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007021a8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007021a9: ret  */ FN_RET(0x00701f84); r_esp += 4; return;
L_007021aa:; BB(0x007021aa);
    /* 007021aa: call 0x707664 */ r_esp -= 4; W32(r_esp, 0x7021afu); f_00707664();
    /* 007021af: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007021b1: call 0x706c94 */ r_esp -= 4; W32(r_esp, 0x7021b6u); f_00706c94();
    /* 007021b6: mov eax, dword ptr [ebx + 0xc0] */ r_eax = R32((u32)(r_ebx+0xc0u));
    /* 007021bc: mov edx, dword ptr [ebx + 0xe0] */ r_edx = R32((u32)(r_ebx+0xe0u));
    /* 007021c2: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 007021c4: mov ebp, dword ptr [ebx + 0xe4] */ r_ebp = R32((u32)(r_ebx+0xe4u));
    /* 007021ca: mov dword ptr [eax + 4], ebp */ W32((u32)(r_eax+0x4u), r_ebp);
    /* 007021cd: mov edx, dword ptr [ebx + 0xe8] */ r_edx = R32((u32)(r_ebx+0xe8u));
    /* 007021d3: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
    /* 007021d6: mov edx, dword ptr [ebx + 0xec] */ r_edx = R32((u32)(r_ebx+0xecu));
    /* 007021dc: mov dword ptr [eax + 0xc], edx */ W32((u32)(r_eax+0xcu), r_edx);
    /* 007021df: mov edx, dword ptr [ebx + 0xf0] */ r_edx = R32((u32)(r_ebx+0xf0u));
    /* 007021e5: mov dword ptr [eax + 0x10], edx */ W32((u32)(r_eax+0x10u), r_edx);
    /* 007021e8: mov edx, dword ptr [ebx + 0xf4] */ r_edx = R32((u32)(r_ebx+0xf4u));
    /* 007021ee: mov dword ptr [eax + 0x14], edx */ W32((u32)(r_eax+0x14u), r_edx);
    /* 007021f1: mov ecx, dword ptr [ebx + 0xf8] */ r_ecx = R32((u32)(r_ebx+0xf8u));
    /* 007021f7: mov dword ptr [eax + 0x18], ecx */ W32((u32)(r_eax+0x18u), r_ecx);
    /* 007021fa: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007021fb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007021fc: ret  */ FN_RET(0x00701f84); r_esp += 4; return;
L_007021fd:; BB(0x007021fd);
    /* 007021fd: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007021ff: call 0x706e6c */ r_esp -= 4; W32(r_esp, 0x702204u); f_00706e6c();
    /* 00702204: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00702206: je 0x70221a */ if (fZ) goto L_0070221a;
L_00702208:; BB(0x00702208);
    /* 00702208: call 0x707678 */ r_esp -= 4; W32(r_esp, 0x70220du); f_00707678();
    /* 0070220d: mov eax, dword ptr [0xa0f678] */ r_eax = R32((u32)(0xa0f678u));
    /* 00702212: or dword ptr [ebx + 0x94], eax */ { u32 ad = (u32)(r_ebx+0x94u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 00702218: jmp 0x702231 */ goto L_00702231;
L_0070221a:; BB(0x0070221a);
    /* 0070221a: push dword ptr [0xa0f66c] */ { u32 v = R32((u32)(0xa0f66cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00702220: lea ecx, [ebx + 0x1c] */ r_ecx = (u32)(r_ebx+0x1cu);
    /* 00702223: call 0x6ffb40 */ r_esp -= 4; W32(r_esp, 0x702228u); f_006ffb40();
    /* 00702228: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0070222a: je 0x702266 */ if (fZ) goto L_00702266;
L_0070222c:; BB(0x0070222c);
    /* 0070222c: call 0x70768c */ r_esp -= 4; W32(r_esp, 0x702231u); f_0070768c();
L_00702231:; BB(0x00702231);
    /* 00702231: mov ecx, dword ptr [ebx + 0x80] */ r_ecx = R32((u32)(r_ebx+0x80u));
    /* 00702237: mov dword ptr [ebx + 0xa8], 0 */ W32((u32)(r_ebx+0xa8u), 0x0u);
    /* 00702241: call 0x7000fc */ r_esp -= 4; W32(r_esp, 0x702246u); f_007000fc();
    /* 00702246: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00702248: call 0x700f00 */ r_esp -= 4; W32(r_esp, 0x70224du); f_00700f00();
    /* 0070224d: movsx eax, word ptr [ebx + 0xc4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0xc4u));
    /* 00702254: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00702256: jle 0x702266 */ if ((fZ||fS!=fO)) goto L_00702266;
L_00702258:; BB(0x00702258);
    /* 00702258: lea eax, [ebx + 0xc4] */ r_eax = (u32)(r_ebx+0xc4u);
    /* 0070225e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0070225f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00702261: call 0x7070ac */ r_esp -= 4; W32(r_esp, 0x702266u); f_007070ac();
L_00702266:; BB(0x00702266);
    /* 00702266: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00702267: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00702268: ret  */ FN_RET(0x00701f84); r_esp += 4; return;
}

