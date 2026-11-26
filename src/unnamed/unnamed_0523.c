#include "protos.h"

void f_00523024(void) /* sub_523024 */
{
    FN_ENTER(0x00523024);
    /* 00523024: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00523025: mov ebx, esp */ r_ebx = r_esp;
    /* 00523027: and esp, 0xfffffff8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 0052302a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0052302b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0052302c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0052302d: sub esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00523030: mov esi, ecx */ r_esi = r_ecx;
    /* 00523032: movzx eax, word ptr [esi + 0x340] */ r_eax = (u32)R16((u32)(r_esi+0x340u));
    /* 00523039: cmp eax, 0x1000 */ {  u32 a = r_eax; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052303e: jge 0x52306e */ if ((fS==fO)) goto L_0052306e;
L_00523040:; BB(0x00523040);
    /* 00523040: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00523041: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x523046u); f_0068d5a8();
    /* 00523046: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00523047: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00523049: je 0x523063 */ if (fZ) goto L_00523063;
L_0052304b:; BB(0x0052304b);
    /* 0052304b: mov edx, dword ptr [eax + 0x3f0] */ r_edx = R32((u32)(r_eax+0x3f0u));
    /* 00523051: cmp edx, dword ptr [0xaafca0] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaafca0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00523057: jne 0x523063 */ if (!fZ) goto L_00523063;
L_00523059:; BB(0x00523059);
    /* 00523059: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052305a: mov ecx, esi */ r_ecx = r_esi;
    /* 0052305c: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x523061u); f_007706b0();
    /* 00523061: jmp 0x523083 */ goto L_00523083;
L_00523063:; BB(0x00523063);
    /* 00523063: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00523065: mov ecx, esi */ r_ecx = r_esi;
    /* 00523067: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x52306cu); f_007706b0();
    /* 0052306c: jmp 0x523083 */ goto L_00523083;
L_0052306e:; BB(0x0052306e);
    /* 0052306e: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 00523073: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00523075: mov word ptr [esi + 0x340], ax */ W16((u32)(r_esi+0x340u), (u16)r_eax);
    /* 0052307c: mov ecx, esi */ r_ecx = r_esi;
    /* 0052307e: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x523083u); f_007706b0();
L_00523083:; BB(0x00523083);
    /* 00523083: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 00523086: and eax, 0xfffbffff */ {  u32 a = r_eax; u32 b = 0xfffbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0052308b: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 0052308e: mov ecx, esi */ r_ecx = r_esi;
    /* 00523090: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x523095u); f_00770738();
    /* 00523095: mov edi, eax */ r_edi = r_eax;
    /* 00523097: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00523099: je 0x5238b4 */ if (fZ) goto L_005238b4;
L_0052309f:; BB(0x0052309f);
    /* 0052309f: movsx edx, word ptr [esi + 0x330] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x330u));
    /* 005230a6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005230a8: je 0x523423 */ if (fZ) goto L_00523423;
L_005230ae:; BB(0x005230ae);
    /* 005230ae: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005230b1: je 0x523715 */ if (fZ) goto L_00523715;
L_005230b7:; BB(0x005230b7);
    /* 005230b7: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005230ba: jne 0x5233a7 */ if (!fZ) goto L_005233a7;
L_005230c0:; BB(0x005230c0);
    /* 005230c0: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 005230c5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005230c7: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 005230ca: and eax, 0xfbffffff */ {  u32 a = r_eax; u32 b = 0xfbffffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005230cf: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 005230d2: mov ecx, esi */ r_ecx = r_esi;
    /* 005230d4: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x5230d9u); f_007b52ec();
    /* 005230d9: movsx edx, word ptr [esi + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0xb8u));
    /* 005230e0: mov eax, dword ptr [esi + 0xd8] */ r_eax = R32((u32)(r_esi+0xd8u));
    /* 005230e6: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005230e8: fld dword ptr [eax + edx*8 + 8] */ FPUSH(R_F32((u32)(r_eax+r_edx*8+0x8u)));
    /* 005230ec: fmul dword ptr [0x921840] */ ST(0) = ST(0) * R_F32((u32)(0x921840u));
    /* 005230f2: fstp dword ptr [esi + 0xc8] */ W_F32((u32)(r_esi+0xc8u), ST(0)); FPOP();
    /* 005230f8: mov ecx, esi */ r_ecx = r_esi;
    /* 005230fa: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x5230ffu); f_007aa094();
    /* 005230ff: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_00523101:; BB(0x00523101);
    /* 00523101: mov eax, dword ptr [esi + edi*4 + 0x3dc] */ r_eax = R32((u32)(r_esi+r_edi*4+0x3dcu));
    /* 00523108: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0052310b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052310d: je 0x5237ca */ if (fZ) goto L_005237ca;
L_00523113:; BB(0x00523113);
    /* 00523113: cmp edi, 0xc */ {  u32 a = r_edi; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00523116: jl 0x523101 */ if ((fS!=fO)) goto L_00523101;
L_00523118:; BB(0x00523118);
    /* 00523118: mov ecx, esi */ r_ecx = r_esi;
    /* 0052311a: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x52311fu); f_00770738();
    /* 0052311f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00523121: je 0x523281 */ if (fZ) goto L_00523281;
L_00523127:; BB(0x00523127);
    /* 00523127: fld dword ptr [0x921840] */ FPUSH(R_F32((u32)(0x921840u)));
    /* 0052312d: mov eax, dword ptr [0x9f9860] */ r_eax = R32((u32)(0x9f9860u));
    /* 00523132: mov edx, dword ptr [esi + 0x358] */ r_edx = R32((u32)(r_esi+0x358u));
    /* 00523138: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 0052313b: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0052313d: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
    /* 00523141: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00523144: je 0x5237ad */ if (fZ) goto L_005237ad;
L_0052314a:; BB(0x0052314a);
    /* 0052314a: fild dword ptr [edx + 8] */ FPUSH((long double)(i32)R32((u32)(r_edx+0x8u)));
    /* 0052314d: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0052314f: fnstcw word ptr [esp + 0x28] */ W16((u32)(r_esp+0x28u), fcw);
    /* 00523153: movzx eax, word ptr [esp + 0x28] */ r_eax = (u32)R16((u32)(r_esp+0x28u));
    /* 00523158: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0052315d: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 00523161: fldcw word ptr [esp + 0x30] */ fcw = R16((u32)(r_esp+0x30u));
    /* 00523165: fistp dword ptr [esp + 0x38] */ W32((u32)(r_esp+0x38u), (u32)fx_int32(ST(0))); FPOP();
    /* 00523169: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 0052316d: mov ecx, esi */ r_ecx = r_esi;
    /* 0052316f: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 00523173: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00523174: call 0x772358 */ r_esp -= 4; W32(r_esp, 0x523179u); f_00772358();
    /* 00523179: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 0052317b: mov eax, dword ptr [esi + 0x60] */ r_eax = R32((u32)(r_esi+0x60u));
    /* 0052317e: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00523181: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 00523185: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00523188: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0052318c: mov ecx, esi */ r_ecx = r_esi;
    /* 0052318e: call dword ptr [edx + 0x48] */ { u32 t = R32((u32)(r_edx+0x48u)); r_esp -= 4; W32(r_esp, 0x523191u); call_ind(t); }
    /* 00523191: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00523193: mov ecx, esi */ r_ecx = r_esi;
    /* 00523195: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x523198u); call_ind(t); }
    /* 00523198: lea edx, [esi + 0x2a4] */ r_edx = (u32)(r_esi+0x2a4u);
    /* 0052319e: lea eax, [esi + 0x300] */ r_eax = (u32)(r_esi+0x300u);
    /* 005231a4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005231a5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005231a6: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x5231abu); f_007a9180();
    /* 005231ab: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005231ae: movzx ebp, word ptr [esi + 0x340] */ r_ebp = (u32)R16((u32)(r_esi+0x340u));
    /* 005231b5: cmp ebp, 0xffff */ {  u32 a = r_ebp; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005231bb: jne 0x5231c4 */ if (!fZ) goto L_005231c4;
L_005231bd:; BB(0x005231bd);
    /* 005231bd: add dword ptr [esi + 0x3ac], 1 */ { u32 ad = (u32)(r_esi+0x3acu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_005231c4:; BB(0x005231c4);
    /* 005231c4: fld dword ptr [esp + 0x44] */ FPUSH(R_F32((u32)(r_esp+0x44u)));
    /* 005231c8: mov edx, dword ptr [esi + 0xa4] */ r_edx = R32((u32)(r_esi+0xa4u));
    /* 005231ce: fadd dword ptr [edx + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0xcu));
    /* 005231d1: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 005231d3: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 005231d5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005231d7: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005231d8: ja 0x523202 */ if ((!fC&&!fZ)) goto L_00523202;
L_005231da:; BB(0x005231da);
    /* 005231da: mov edx, dword ptr [esi + 0x358] */ r_edx = R32((u32)(r_esi+0x358u));
    /* 005231e0: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 005231e2: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 005231e4: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 005231e6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005231e8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005231e9: jb 0x523202 */ if (fC) goto L_00523202;
L_005231eb:; BB(0x005231eb);
    /* 005231eb: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005231ed: fild dword ptr [esi + 0x3ac] */ FPUSH((long double)(i32)R32((u32)(r_esi+0x3acu)));
    /* 005231f3: fcom dword ptr [0x921848] */ fx_compare(ST(0), R_F32((u32)(0x921848u))); 
    /* 005231f9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005231fb: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005231fc: jbe 0x5238df */ if ((fC||fZ)) goto L_005238df;
L_00523202:; BB(0x00523202);
    /* 00523202: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00523204: cmp ebp, 0xffff */ {  u32 a = r_ebp; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052320a: je 0x52379f */ if (fZ) goto L_0052379f;
L_00523210:; BB(0x00523210);
    /* 00523210: mov eax, 2 */ r_eax = 0x2u;
    /* 00523215: mov word ptr [esi + 0x330], ax */ W16((u32)(r_esi+0x330u), (u16)r_eax);
    /* 0052321c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0052321e: mov word ptr [esi + 0xb8], dx */ W16((u32)(r_esi+0xb8u), (u16)r_edx);
    /* 00523225: mov ebp, 0x5a */ r_ebp = 0x5au;
    /* 0052322a: mov word ptr [esi + 0x344], bp */ W16((u32)(r_esi+0x344u), (u16)r_ebp);
L_00523231:; BB(0x00523231);
    /* 00523231: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00523233: mov dword ptr [esi + 0x3dc], eax */ W32((u32)(r_esi+0x3dcu), r_eax);
    /* 00523239: mov dword ptr [esi + 0x3e0], eax */ W32((u32)(r_esi+0x3e0u), r_eax);
    /* 0052323f: mov dword ptr [esi + 0x3e4], eax */ W32((u32)(r_esi+0x3e4u), r_eax);
    /* 00523245: mov dword ptr [esi + 0x3e8], eax */ W32((u32)(r_esi+0x3e8u), r_eax);
    /* 0052324b: mov dword ptr [esi + 0x3ec], eax */ W32((u32)(r_esi+0x3ecu), r_eax);
    /* 00523251: mov dword ptr [esi + 0x3f0], eax */ W32((u32)(r_esi+0x3f0u), r_eax);
    /* 00523257: mov dword ptr [esi + 0x3f4], eax */ W32((u32)(r_esi+0x3f4u), r_eax);
    /* 0052325d: mov dword ptr [esi + 0x3f8], eax */ W32((u32)(r_esi+0x3f8u), r_eax);
    /* 00523263: mov dword ptr [esi + 0x3fc], eax */ W32((u32)(r_esi+0x3fcu), r_eax);
    /* 00523269: mov dword ptr [esi + 0x400], eax */ W32((u32)(r_esi+0x400u), r_eax);
    /* 0052326f: mov dword ptr [esi + 0x404], eax */ W32((u32)(r_esi+0x404u), r_eax);
    /* 00523275: mov dword ptr [esi + 0x408], eax */ W32((u32)(r_esi+0x408u), r_eax);
    /* 0052327b: mov dword ptr [esi + 0x3ac], eax */ W32((u32)(r_esi+0x3acu), r_eax);
L_00523281:; BB(0x00523281);
    /* 00523281: push 0xed */ { u32 v = 0xedu; r_esp -= 4; W32(r_esp, v); }
    /* 00523286: mov ecx, esi */ r_ecx = r_esi;
    /* 00523288: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x52328du); f_007879b8();
    /* 0052328d: lea ebp, [esi + 0x38] */ r_ebp = (u32)(r_esi+0x38u);
    /* 00523290: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00523292: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00523293: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00523294: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00523295: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00523296: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00523297: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x52329cu); f_008144b0();
    /* 0052329c: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052329f: mov eax, dword ptr [esi + 0x3b0] */ r_eax = R32((u32)(r_esi+0x3b0u));
    /* 005232a5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005232a7: je 0x523780 */ if (fZ) goto L_00523780;
L_005232ad:; BB(0x005232ad);
    /* 005232ad: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 005232b5: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 005232ba: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 005232c1: mov dword ptr [esp + 8], 0x40800000 */ W32((u32)(r_esp+0x8u), 0x40800000u);
    /* 005232c9: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x5232ceu); f_0082d990();
    /* 005232ce: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 005232d1: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005232d3: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x5232d8u); f_0082d8bc();
    /* 005232d8: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005232db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005232dc: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 005232e0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005232e2: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x5232e7u); f_0082eab8();
    /* 005232e7: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x5232ecu); f_0082da80();
    /* 005232ec: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 005232ef: lea edi, [esi + 0x37c] */ r_edi = (u32)(r_esi+0x37cu);
    /* 005232f5: mov ecx, edi */ r_ecx = r_edi;
    /* 005232f7: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x5232fcu); f_0082ebac();
    /* 005232fc: fld dword ptr [esi + 0x30c] */ FPUSH(R_F32((u32)(r_esi+0x30cu)));
    /* 00523302: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00523304: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00523305: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00523308: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x52330du); f_0082dc9c();
    /* 0052330d: fld dword ptr [esi + 0x314] */ FPUSH(R_F32((u32)(r_esi+0x314u)));
    /* 00523313: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00523315: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 00523317: fld qword ptr [0x921788] */ FPUSH(R_F64((u32)(0x921788u)));
    /* 0052331d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0052331f: fmul qword ptr [0x921798] */ ST(0) = ST(0) * R_F64((u32)(0x921798u));
    /* 00523325: fdiv qword ptr [0x921790] */ ST(0) = ST(0) / R_F64((u32)(0x921790u));
    /* 0052332b: fnstcw word ptr [esp + 0x28] */ W16((u32)(r_esp+0x28u), fcw);
    /* 0052332f: movzx eax, word ptr [esp + 0x28] */ r_eax = (u32)R16((u32)(r_esp+0x28u));
    /* 00523334: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00523339: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 0052333d: fldcw word ptr [esp + 0x30] */ fcw = R16((u32)(r_esp+0x30u));
    /* 00523341: fistp dword ptr [esp + 0x38] */ W32((u32)(r_esp+0x38u), (u32)fx_int32(ST(0))); FPOP();
    /* 00523345: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 00523349: fld dword ptr [esi + 0x30c] */ FPUSH(R_F32((u32)(r_esi+0x30cu)));
    /* 0052334f: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 00523353: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 0052335b: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0052335d: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 00523361: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00523363: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 00523365: fmul qword ptr [0x921798] */ ST(0) = ST(0) * R_F64((u32)(0x921798u));
    /* 0052336b: fdiv qword ptr [0x921790] */ ST(0) = ST(0) / R_F64((u32)(0x921790u));
    /* 00523371: fnstcw word ptr [esp + 0x28] */ W16((u32)(r_esp+0x28u), fcw);
    /* 00523375: movzx eax, word ptr [esp + 0x28] */ r_eax = (u32)R16((u32)(r_esp+0x28u));
    /* 0052337a: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0052337f: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 00523383: fldcw word ptr [esp + 0x30] */ fcw = R16((u32)(r_esp+0x30u));
    /* 00523387: fistp dword ptr [esp + 0x14] */ W32((u32)(r_esp+0x14u), (u32)fx_int32(ST(0))); FPOP();
    /* 0052338b: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 0052338f: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 00523393: push 0x150 */ { u32 v = 0x150u; r_esp -= 4; W32(r_esp, v); }
    /* 00523398: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00523399: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0052339a: call 0x50bab4 */ r_esp -= 4; W32(r_esp, 0x52339fu); f_0050bab4();
    /* 0052339f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005233a2: jmp 0x523780 */ goto L_00523780;
L_005233a7:; BB(0x005233a7);
    /* 005233a7: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005233aa: jne 0x52341a */ if (!fZ) goto L_0052341a;
L_005233ac:; BB(0x005233ac);
    /* 005233ac: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 005233b1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005233b3: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 005233b6: and eax, 0xfbffffff */ {  u32 a = r_eax; u32 b = 0xfbffffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005233bb: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 005233be: mov ecx, esi */ r_ecx = r_esi;
    /* 005233c0: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x5233c5u); f_007b52ec();
    /* 005233c5: movsx edx, word ptr [esi + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0xb8u));
    /* 005233cc: mov eax, dword ptr [esi + 0xd8] */ r_eax = R32((u32)(r_esi+0xd8u));
    /* 005233d2: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005233d4: fld dword ptr [eax + edx*8 + 8] */ FPUSH(R_F32((u32)(r_eax+r_edx*8+0x8u)));
    /* 005233d8: fmul dword ptr [0x921840] */ ST(0) = ST(0) * R_F32((u32)(0x921840u));
    /* 005233de: fstp dword ptr [esi + 0xc8] */ W_F32((u32)(r_esi+0xc8u), ST(0)); FPOP();
    /* 005233e4: mov ecx, esi */ r_ecx = r_esi;
    /* 005233e6: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x5233ebu); f_007aa094();
    /* 005233eb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005233ed: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005233ef: mov ecx, esi */ r_ecx = r_esi;
    /* 005233f1: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x5233f6u); f_00772b44();
    /* 005233f6: movsx edx, word ptr [esi + 0x344] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x344u));
    /* 005233fd: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00523400: movsx eax, dx */ r_eax = (u32)(i32)(i16)(u16)r_edx;
    /* 00523403: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00523405: jl 0x523876 */ if ((fS!=fO)) goto L_00523876;
L_0052340b:; BB(0x0052340b);
    /* 0052340b: mov word ptr [esi + 0x344], dx */ W16((u32)(r_esi+0x344u), (u16)r_edx);
    /* 00523412: lea ebp, [esi + 0x38] */ r_ebp = (u32)(r_esi+0x38u);
    /* 00523415: jmp 0x523780 */ goto L_00523780;
L_0052341a:; BB(0x0052341a);
    /* 0052341a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0052341c: mov word ptr [esi + 0x330], dx */ W16((u32)(r_esi+0x330u), (u16)r_edx);
L_00523423:; BB(0x00523423);
    /* 00523423: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 00523428: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052342a: mov edx, dword ptr [esi + 0x30] */ r_edx = R32((u32)(r_esi+0x30u));
    /* 0052342d: and edx, 0xfbffffff */ {  u32 a = r_edx; u32 b = 0xfbffffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00523433: mov dword ptr [esi + 0x30], edx */ W32((u32)(r_esi+0x30u), r_edx);
    /* 00523436: mov ecx, esi */ r_ecx = r_esi;
    /* 00523438: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x52343du); f_007b52ec();
    /* 0052343d: push 0xee */ { u32 v = 0xeeu; r_esp -= 4; W32(r_esp, v); }
    /* 00523442: mov ecx, esi */ r_ecx = r_esi;
    /* 00523444: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x523449u); f_007879b8();
    /* 00523449: lea ebp, [esi + 0x38] */ r_ebp = (u32)(r_esi+0x38u);
    /* 0052344c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0052344e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0052344f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00523450: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00523451: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00523452: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00523453: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x523458u); f_008144b0();
    /* 00523458: push 0xfffffe00 */ { u32 v = 0xfffffe00u; r_esp -= 4; W32(r_esp, v); }
    /* 0052345d: call 0x814680 */ r_esp -= 4; W32(r_esp, 0x523462u); f_00814680();
    /* 00523462: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00523465: movsx eax, word ptr [esi + 0xb8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0xb8u));
    /* 0052346c: mov edx, dword ptr [esi + 0xd8] */ r_edx = R32((u32)(r_esi+0xd8u));
    /* 00523472: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00523474: fld dword ptr [edx + eax*8 + 8] */ FPUSH(R_F32((u32)(r_edx+r_eax*8+0x8u)));
    /* 00523478: fmul dword ptr [0x921840] */ ST(0) = ST(0) * R_F32((u32)(0x921840u));
    /* 0052347e: fstp dword ptr [esi + 0xc8] */ W_F32((u32)(r_esi+0xc8u), ST(0)); FPOP();
    /* 00523484: mov ecx, esi */ r_ecx = r_esi;
    /* 00523486: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x52348bu); f_007aa094();
    /* 0052348b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052348d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052348f: mov ecx, esi */ r_ecx = r_esi;
    /* 00523491: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x523496u); f_00772b44();
    /* 00523496: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 0052349a: mov edx, dword ptr [edi + 0x300] */ r_edx = R32((u32)(r_edi+0x300u));
    /* 005234a0: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 005234a4: mov edx, dword ptr [edi + 0x304] */ r_edx = R32((u32)(r_edi+0x304u));
    /* 005234aa: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 005234ae: mov edx, dword ptr [edi + 0x308] */ r_edx = R32((u32)(r_edi+0x308u));
    /* 005234b4: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 005234b8: lea edx, [esi + 0x300] */ r_edx = (u32)(r_esi+0x300u);
    /* 005234be: mov dword ptr [esp + 0x48], edx */ W32((u32)(r_esp+0x48u), r_edx);
    /* 005234c2: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x5234c7u); f_0082f9c4();
    /* 005234c7: mov edx, dword ptr [esi + 0x358] */ r_edx = R32((u32)(r_esi+0x358u));
    /* 005234cd: fild dword ptr [edx + 8] */ FPUSH((long double)(i32)R32((u32)(r_edx+0x8u)));
    /* 005234d0: fmul dword ptr [0x921840] */ ST(0) = ST(0) * R_F32((u32)(0x921840u));
    /* 005234d6: fnstcw word ptr [esp + 0x28] */ W16((u32)(r_esp+0x28u), fcw);
    /* 005234da: movzx eax, word ptr [esp + 0x28] */ r_eax = (u32)R16((u32)(r_esp+0x28u));
    /* 005234df: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005234e4: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 005234e8: fldcw word ptr [esp + 0x30] */ fcw = R16((u32)(r_esp+0x30u));
    /* 005234ec: fistp dword ptr [esp + 0x38] */ W32((u32)(r_esp+0x38u), (u32)fx_int32(ST(0))); FPOP();
    /* 005234f0: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 005234f4: lea edx, [esp + 0x18] */ r_edx = (u32)(r_esp+0x18u);
    /* 005234f8: mov ecx, esi */ r_ecx = r_esi;
    /* 005234fa: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 005234fe: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005234ff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00523500: call 0x771858 */ r_esp -= 4; W32(r_esp, 0x523505u); f_00771858();
    /* 00523505: mov edx, dword ptr [esi + 0x31c] */ r_edx = R32((u32)(r_esi+0x31cu));
    /* 0052350b: cmp eax, dword ptr [edx + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0xcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052350e: jge 0x523780 */ if ((fS==fO)) goto L_00523780;
L_00523514:; BB(0x00523514);
    /* 00523514: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 00523518: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 0052351c: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0052351e: fmul qword ptr [0x921798] */ ST(0) = ST(0) * R_F64((u32)(0x921798u));
    /* 00523524: fdiv qword ptr [0x921790] */ ST(0) = ST(0) / R_F64((u32)(0x921790u));
    /* 0052352a: fnstcw word ptr [esp + 0x28] */ W16((u32)(r_esp+0x28u), fcw);
    /* 0052352e: movzx eax, word ptr [esp + 0x28] */ r_eax = (u32)R16((u32)(r_esp+0x28u));
    /* 00523533: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00523538: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 0052353c: fldcw word ptr [esp + 0x30] */ fcw = R16((u32)(r_esp+0x30u));
    /* 00523540: fistp dword ptr [esp + 0x38] */ W32((u32)(r_esp+0x38u), (u32)fx_int32(ST(0))); FPOP();
    /* 00523544: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 00523548: mov ecx, esi */ r_ecx = r_esi;
    /* 0052354a: mov edx, dword ptr [esp + 0x38] */ r_edx = R32((u32)(r_esp+0x38u));
    /* 0052354e: mov dword ptr [esp + 0x40], edx */ W32((u32)(r_esp+0x40u), r_edx);
    /* 00523552: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00523554: movzx edx, word ptr [esi + 0x340] */ r_edx = (u32)R16((u32)(r_esi+0x340u));
    /* 0052355b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0052355c: call 0x7713d4 */ r_esp -= 4; W32(r_esp, 0x523561u); f_007713d4();
    /* 00523561: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00523562: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00523565: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x52356au); f_0082dc9c();
    /* 0052356a: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
    /* 0052356e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00523570: mov ecx, esi */ r_ecx = r_esi;
    /* 00523572: call 0x7b5264 */ r_esp -= 4; W32(r_esp, 0x523577u); f_007b5264();
    /* 00523577: fld dword ptr [esp + 0x44] */ FPUSH(R_F32((u32)(r_esp+0x44u)));
    /* 0052357b: fadd dword ptr [0x92183c] */ ST(0) = ST(0) + R_F32((u32)(0x92183cu));
    /* 00523581: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00523583: fld dword ptr [0x921838] */ FPUSH(R_F32((u32)(0x921838u)));
    /* 00523589: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0052358b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0052358d: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 00523592: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00523593: mov dword ptr [esp + 0x18], 0 */ W32((u32)(r_esp+0x18u), 0x0u);
    /* 0052359b: jb 0x52359f */ if (fC) goto L_0052359f;
L_0052359d:; BB(0x0052359d);
    /* 0052359d: fst st(1) */ ST(1) = ST(0);
L_0052359f:; BB(0x0052359f);
    /* 0052359f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005235a1: fst dword ptr [esi + 0x3a0] */ W_F32((u32)(r_esi+0x3a0u), ST(0));
    /* 005235a7: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 005235ab: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x5235b0u); f_0082d990();
    /* 005235b0: mov edx, dword ptr [esp + 0x40] */ r_edx = R32((u32)(r_esp+0x40u));
    /* 005235b4: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005235b6: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x5235bbu); f_0082d8bc();
    /* 005235bb: lea edx, [esp + 0x18] */ r_edx = (u32)(r_esp+0x18u);
    /* 005235bf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005235c0: lea edx, [esp + 0x1c] */ r_edx = (u32)(r_esp+0x1cu);
    /* 005235c4: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005235c6: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x5235cbu); f_0082eab8();
    /* 005235cb: mov ecx, 1 */ r_ecx = 0x1u;
    /* 005235d0: call 0x82eb80 */ r_esp -= 4; W32(r_esp, 0x5235d5u); f_0082eb80();
    /* 005235d5: mov edx, dword ptr [esp + 0x48] */ r_edx = R32((u32)(r_esp+0x48u));
    /* 005235d9: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 005235dd: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x5235e2u); f_0082ebac();
    /* 005235e2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005235e4: push dword ptr [esp + 0x24] */ { u32 v = R32((u32)(r_esp+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 005235e8: mov ecx, esi */ r_ecx = r_esi;
    /* 005235ea: push dword ptr [esp + 0x24] */ { u32 v = R32((u32)(r_esp+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 005235ee: push dword ptr [esp + 0x24] */ { u32 v = R32((u32)(r_esp+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 005235f2: call 0x771c8c */ r_esp -= 4; W32(r_esp, 0x5235f7u); f_00771c8c();
    /* 005235f7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005235f9: jne 0x5236a4 */ if (!fZ) goto L_005236a4;
L_005235ff:; BB(0x005235ff);
    /* 005235ff: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00523601: push dword ptr [edi + 0x308] */ { u32 v = R32((u32)(r_edi+0x308u)); r_esp -= 4; W32(r_esp, v); }
    /* 00523607: mov ecx, esi */ r_ecx = r_esi;
    /* 00523609: push dword ptr [edi + 0x304] */ { u32 v = R32((u32)(r_edi+0x304u)); r_esp -= 4; W32(r_esp, v); }
    /* 0052360f: push dword ptr [edi + 0x300] */ { u32 v = R32((u32)(r_edi+0x300u)); r_esp -= 4; W32(r_esp, v); }
    /* 00523615: call 0x771c8c */ r_esp -= 4; W32(r_esp, 0x52361au); f_00771c8c();
    /* 0052361a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052361c: jne 0x5236a4 */ if (!fZ) goto L_005236a4;
L_00523622:; BB(0x00523622);
    /* 00523622: movzx eax, word ptr [esi + 0x340] */ r_eax = (u32)R16((u32)(r_esi+0x340u));
    /* 00523629: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052362e: je 0x5238a6 */ if (fZ) goto L_005238a6;
L_00523634:; BB(0x00523634);
    /* 00523634: mov eax, 2 */ r_eax = 0x2u;
    /* 00523639: mov word ptr [esi + 0x330], ax */ W16((u32)(r_esi+0x330u), (u16)r_eax);
    /* 00523640: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00523642: mov word ptr [esi + 0xb8], dx */ W16((u32)(r_esi+0xb8u), (u16)r_edx);
    /* 00523649: mov edi, 0x5a */ r_edi = 0x5au;
    /* 0052364e: mov word ptr [esi + 0x344], di */ W16((u32)(r_esi+0x344u), (u16)r_edi);
L_00523655:; BB(0x00523655);
    /* 00523655: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00523657: mov dword ptr [esi + 0x3dc], eax */ W32((u32)(r_esi+0x3dcu), r_eax);
    /* 0052365d: mov dword ptr [esi + 0x3e0], eax */ W32((u32)(r_esi+0x3e0u), r_eax);
    /* 00523663: mov dword ptr [esi + 0x3e4], eax */ W32((u32)(r_esi+0x3e4u), r_eax);
    /* 00523669: mov dword ptr [esi + 0x3e8], eax */ W32((u32)(r_esi+0x3e8u), r_eax);
    /* 0052366f: mov dword ptr [esi + 0x3ec], eax */ W32((u32)(r_esi+0x3ecu), r_eax);
    /* 00523675: mov dword ptr [esi + 0x3f0], eax */ W32((u32)(r_esi+0x3f0u), r_eax);
    /* 0052367b: mov dword ptr [esi + 0x3f4], eax */ W32((u32)(r_esi+0x3f4u), r_eax);
    /* 00523681: mov dword ptr [esi + 0x3f8], eax */ W32((u32)(r_esi+0x3f8u), r_eax);
    /* 00523687: mov dword ptr [esi + 0x3fc], eax */ W32((u32)(r_esi+0x3fcu), r_eax);
    /* 0052368d: mov dword ptr [esi + 0x400], eax */ W32((u32)(r_esi+0x400u), r_eax);
    /* 00523693: mov dword ptr [esi + 0x404], eax */ W32((u32)(r_esi+0x404u), r_eax);
    /* 00523699: mov dword ptr [esi + 0x408], eax */ W32((u32)(r_esi+0x408u), r_eax);
    /* 0052369f: jmp 0x523780 */ goto L_00523780;
L_005236a4:; BB(0x005236a4);
    /* 005236a4: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 005236a9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005236ab: mov edi, dword ptr [esi + 0x30] */ r_edi = R32((u32)(r_esi+0x30u));
    /* 005236ae: mov eax, 3 */ r_eax = 0x3u;
    /* 005236b3: or edi, 0x4000000 */ {  u32 a = r_edi; u32 b = 0x4000000u; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 005236b9: mov word ptr [esi + 0x330], ax */ W16((u32)(r_esi+0x330u), (u16)r_eax);
    /* 005236c0: mov edx, 7 */ r_edx = 0x7u;
    /* 005236c5: mov word ptr [esi + 0xb8], dx */ W16((u32)(r_esi+0xb8u), (u16)r_edx);
    /* 005236cc: mov dword ptr [esi + 0x30], edi */ W32((u32)(r_esi+0x30u), r_edi);
    /* 005236cf: mov ecx, esi */ r_ecx = r_esi;
    /* 005236d1: call 0x7b52c4 */ r_esp -= 4; W32(r_esp, 0x5236d6u); f_007b52c4();
    /* 005236d6: push dword ptr [esi + 0x308] */ { u32 v = R32((u32)(r_esi+0x308u)); r_esp -= 4; W32(r_esp, v); }
    /* 005236dc: push dword ptr [esi + 0x304] */ { u32 v = R32((u32)(r_esi+0x304u)); r_esp -= 4; W32(r_esp, v); }
    /* 005236e2: mov ecx, esi */ r_ecx = r_esi;
    /* 005236e4: push dword ptr [esi + 0x300] */ { u32 v = R32((u32)(r_esi+0x300u)); r_esp -= 4; W32(r_esp, v); }
    /* 005236ea: call 0x771f1c */ r_esp -= 4; W32(r_esp, 0x5236efu); f_00771f1c();
    /* 005236ef: push 0xf3 */ { u32 v = 0xf3u; r_esp -= 4; W32(r_esp, v); }
    /* 005236f4: mov ecx, esi */ r_ecx = r_esi;
    /* 005236f6: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x5236fbu); f_007879b8();
    /* 005236fb: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005236fd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005236fe: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005236ff: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00523700: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00523701: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x523706u); f_00814298();
    /* 00523706: push 0xfffffe00 */ { u32 v = 0xfffffe00u; r_esp -= 4; W32(r_esp, v); }
    /* 0052370b: call 0x814680 */ r_esp -= 4; W32(r_esp, 0x523710u); f_00814680();
    /* 00523710: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00523713: jmp 0x523780 */ goto L_00523780;
L_00523715:; BB(0x00523715);
    /* 00523715: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 0052371a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052371c: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 0052371f: mov ecx, esi */ r_ecx = r_esi;
    /* 00523721: or eax, 0x4000000 */ {  u32 a = r_eax; u32 b = 0x4000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00523726: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 00523729: call 0x7b52c4 */ r_esp -= 4; W32(r_esp, 0x52372eu); f_007b52c4();
    /* 0052372e: mov ecx, esi */ r_ecx = r_esi;
    /* 00523730: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x523735u); f_007aa094();
    /* 00523735: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00523737: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00523739: mov ecx, esi */ r_ecx = r_esi;
    /* 0052373b: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x523740u); f_00772b44();
    /* 00523740: mov eax, dword ptr [esi + 0xb4] */ r_eax = R32((u32)(r_esi+0xb4u));
    /* 00523746: cmp eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00523749: jne 0x523750 */ if (!fZ) goto L_00523750;
L_0052374b:; BB(0x0052374b);
    /* 0052374b: lea ebp, [esi + 0x38] */ r_ebp = (u32)(r_esi+0x38u);
    /* 0052374e: jmp 0x523780 */ goto L_00523780;
L_00523750:; BB(0x00523750);
    /* 00523750: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 00523755: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00523757: mov edx, dword ptr [esi + 0x30] */ r_edx = R32((u32)(r_esi+0x30u));
    /* 0052375a: mov eax, 1 */ r_eax = 0x1u;
    /* 0052375f: mov word ptr [esi + 0x330], ax */ W16((u32)(r_esi+0x330u), (u16)r_eax);
    /* 00523766: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
    /* 0052376d: and edx, 0xfbffffff */ {  u32 a = r_edx; u32 b = 0xfbffffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00523773: mov dword ptr [esi + 0x30], edx */ W32((u32)(r_esi+0x30u), r_edx);
    /* 00523776: mov ecx, esi */ r_ecx = r_esi;
    /* 00523778: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x52377du); f_007b52ec();
    /* 0052377d: lea ebp, [esi + 0x38] */ r_ebp = (u32)(r_esi+0x38u);
L_00523780:; BB(0x00523780);
    /* 00523780: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00523781: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x523786u); f_007b999c();
    /* 00523786: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00523788: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0052378a: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 0052378f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00523790: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x523795u); f_00805608();
    /* 00523795: add esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00523798: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00523799: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0052379a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0052379b: mov esp, ebx */ r_esp = r_ebx;
    /* 0052379d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0052379e: ret  */ FN_RET(0x00523024); r_esp += 4; return;
L_0052379f:; BB(0x0052379f);
    /* 0052379f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005237a1: mov ecx, esi */ r_ecx = r_esi;
    /* 005237a3: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x5237a8u); f_007706b0();
    /* 005237a8: jmp 0x523231 */ goto L_00523231;
L_005237ad:; BB(0x005237ad);
    /* 005237ad: mov eax, dword ptr [0xa9cd68] */ r_eax = R32((u32)(0xa9cd68u));
    /* 005237b2: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005237b5: jne 0x52314a */ if (!fZ) goto L_0052314a;
L_005237bb:; BB(0x005237bb);
    /* 005237bb: fld dword ptr [esp + 0x44] */ FPUSH(R_F32((u32)(r_esp+0x44u)));
    /* 005237bf: fadd st(0) */ ST(0) = ST(0) + ST(0);
    /* 005237c1: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
    /* 005237c5: jmp 0x52314a */ goto L_0052314a;
L_005237ca:; BB(0x005237ca);
    /* 005237ca: mov ebp, dword ptr [edi*4 + 0xaad71c] */ r_ebp = R32((u32)(r_edi*4+0xaad71cu));
    /* 005237d1: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005237d3: je 0x523118 */ if (fZ) goto L_00523118;
L_005237d9:; BB(0x005237d9);
    /* 005237d9: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 005237dd: cmp eax, 0x1000 */ {  u32 a = r_eax; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005237e2: jge 0x523118 */ if ((fS==fO)) goto L_00523118;
L_005237e8:; BB(0x005237e8);
    /* 005237e8: movzx eax, word ptr [ebp + 0x96] */ r_eax = (u32)R16((u32)(r_ebp+0x96u));
    /* 005237ef: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005237f2: jne 0x523113 */ if (!fZ) goto L_00523113;
L_005237f8:; BB(0x005237f8);
    /* 005237f8: push 0x461c4000 */ { u32 v = 0x461c4000u; r_esp -= 4; W32(r_esp, v); }
    /* 005237fd: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005237fe: mov ecx, esi */ r_ecx = r_esi;
    /* 00523800: call 0x7b65b4 */ r_esp -= 4; W32(r_esp, 0x523805u); f_007b65b4();
    /* 00523805: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00523807: je 0x523113 */ if (fZ) goto L_00523113;
L_0052380d:; BB(0x0052380d);
    /* 0052380d: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00523812: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00523813: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00523816: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00523818: call dword ptr [eax + 0x50] */ { u32 t = R32((u32)(r_eax+0x50u)); r_esp -= 4; W32(r_esp, 0x52381bu); call_ind(t); }
    /* 0052381b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052381d: je 0x523113 */ if (fZ) goto L_00523113;
L_00523823:; BB(0x00523823);
    /* 00523823: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00523828: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00523829: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0052382c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0052382e: call dword ptr [eax + 0x5c] */ { u32 t = R32((u32)(r_eax+0x5cu)); r_esp -= 4; W32(r_esp, 0x523831u); call_ind(t); }
    /* 00523831: fld dword ptr [0x921840] */ FPUSH(R_F32((u32)(0x921840u)));
    /* 00523837: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00523839: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 0052383c: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 0052383f: or eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00523844: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 00523847: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052384a: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0052384e: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 00523851: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00523853: call dword ptr [edx + 0x68] */ { u32 t = R32((u32)(r_edx+0x68u)); r_esp -= 4; W32(r_esp, 0x523856u); call_ind(t); }
    /* 00523856: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0052385a: cmp eax, dword ptr [0xa9c4f4] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa9c4f4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00523860: jne 0x52386a */ if (!fZ) goto L_0052386a;
L_00523862:; BB(0x00523862);
    /* 00523862: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00523864: call 0x4d4288 */ r_esp -= 4; W32(r_esp, 0x523869u); f_004d4288();
    /* 00523869: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0052386a:; BB(0x0052386a);
    /* 0052386a: mov dword ptr [esi + edi*4 + 0x3d8], ebp */ W32((u32)(r_esi+r_edi*4+0x3d8u), r_ebp);
    /* 00523871: jmp 0x523113 */ goto L_00523113;
L_00523876:; BB(0x00523876);
    /* 00523876: mov edx, 0xffff */ r_edx = 0xffffu;
    /* 0052387b: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 0052387e: and eax, 0xffdfffff */ {  u32 a = r_eax; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00523883: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 00523886: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00523888: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00523889: mov word ptr [esi + 0x344], bp */ W16((u32)(r_esi+0x344u), (u16)r_ebp);
    /* 00523890: mov word ptr [esi + 0x340], dx */ W16((u32)(r_esi+0x340u), (u16)r_edx);
    /* 00523897: mov ecx, esi */ r_ecx = r_esi;
    /* 00523899: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x52389eu); f_007706b0();
    /* 0052389e: lea ebp, [esi + 0x38] */ r_ebp = (u32)(r_esi+0x38u);
    /* 005238a1: jmp 0x523780 */ goto L_00523780;
L_005238a6:; BB(0x005238a6);
    /* 005238a6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005238a8: mov ecx, esi */ r_ecx = r_esi;
    /* 005238aa: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x5238afu); f_007706b0();
    /* 005238af: jmp 0x523655 */ goto L_00523655;
L_005238b4:; BB(0x005238b4);
    /* 005238b4: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 005238b9: mov edx, dword ptr [esi + 0x30] */ r_edx = R32((u32)(r_esi+0x30u));
    /* 005238bc: mov word ptr [esi + 0x340], ax */ W16((u32)(r_esi+0x340u), (u16)r_eax);
    /* 005238c3: and edx, 0xfbdfdfff */ {  u32 a = r_edx; u32 b = 0xfbdfdfffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005238c9: mov dword ptr [esi + 0x30], edx */ W32((u32)(r_esi+0x30u), r_edx);
    /* 005238cc: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 005238ce: mov word ptr [esi + 0x344], bp */ W16((u32)(r_esi+0x344u), (u16)r_ebp);
    /* 005238d5: add esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005238d8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005238d9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005238da: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005238db: mov esp, ebx */ r_esp = r_ebx;
    /* 005238dd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005238de: ret  */ FN_RET(0x00523024); r_esp += 4; return;
L_005238df:; BB(0x005238df);
    /* 005238df: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005238e1: jmp 0x523281 */ goto L_00523281;
}

void f_005238e8(void) /* sub_5238E8 */
{
    FN_ENTER(0x005238e8);
    /* 005238e8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005238e9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005238ea: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005238eb: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005238ec: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005238ef: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005238f1: movzx eax, word ptr [ebx + 0x340] */ r_eax = (u32)R16((u32)(r_ebx+0x340u));
    /* 005238f8: cmp eax, 0x1000 */ {  u32 a = r_eax; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005238fd: jl 0x52392e */ if ((fS!=fO)) goto L_0052392e;
L_005238ff:; BB(0x005238ff);
    /* 005238ff: cmp eax, 0x4000 */ {  u32 a = r_eax; u32 b = 0x4000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00523904: jge 0x523917 */ if ((fS==fO)) goto L_00523917;
L_00523906:; BB(0x00523906);
    /* 00523906: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00523907: call 0x786b3c */ r_esp -= 4; W32(r_esp, 0x52390cu); f_00786b3c();
    /* 0052390c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0052390d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052390e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00523910: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x523915u); f_007706b0();
    /* 00523915: jmp 0x52395a */ goto L_0052395a;
L_00523917:; BB(0x00523917);
    /* 00523917: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 0052391c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052391e: mov word ptr [ebx + 0x340], ax */ W16((u32)(r_ebx+0x340u), (u16)r_eax);
    /* 00523925: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00523927: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x52392cu); f_007706b0();
    /* 0052392c: jmp 0x52395a */ goto L_0052395a;
L_0052392e:; BB(0x0052392e);
    /* 0052392e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052392f: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x523934u); f_0068d5a8();
    /* 00523934: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00523935: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00523937: je 0x523951 */ if (fZ) goto L_00523951;
L_00523939:; BB(0x00523939);
    /* 00523939: mov edx, dword ptr [eax + 0x3f0] */ r_edx = R32((u32)(r_eax+0x3f0u));
    /* 0052393f: cmp edx, dword ptr [0xaafca0] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaafca0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00523945: jne 0x523951 */ if (!fZ) goto L_00523951;
L_00523947:; BB(0x00523947);
    /* 00523947: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00523948: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0052394a: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x52394fu); f_007706b0();
    /* 0052394f: jmp 0x52395a */ goto L_0052395a;
L_00523951:; BB(0x00523951);
    /* 00523951: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00523953: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00523955: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x52395au); f_007706b0();
L_0052395a:; BB(0x0052395a);
    /* 0052395a: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 0052395d: and eax, 0xfbfbffff */ {  u32 a = r_eax; u32 b = 0xfbfbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00523962: mov dword ptr [ebx + 0x30], eax */ W32((u32)(r_ebx+0x30u), r_eax);
    /* 00523965: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00523967: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x52396cu); f_007aa094();
    /* 0052396c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0052396e: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x523973u); f_00770738();
    /* 00523973: mov ebp, eax */ r_ebp = r_eax;
    /* 00523975: movsx edx, word ptr [ebx + 0x330] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x330u));
    /* 0052397c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052397e: je 0x523b70 */ if (fZ) goto L_00523b70;
L_00523984:; BB(0x00523984);
    /* 00523984: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00523987: jne 0x523b33 */ if (!fZ) goto L_00523b33;
L_0052398d:; BB(0x0052398d);
    /* 0052398d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052398f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00523991: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00523993: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x523998u); f_00772b44();
    /* 00523998: push 0x41600000 */ { u32 v = 0x41600000u; r_esp -= 4; W32(r_esp, v); }
    /* 0052399d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0052399f: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x5239a4u); f_007aaa30();
    /* 005239a4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005239a6: je 0x523a46 */ if (fZ) goto L_00523a46;
L_005239ac:; BB(0x005239ac);
    /* 005239ac: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005239ae: je 0x5239e2 */ if (fZ) goto L_005239e2;
L_005239b0:; BB(0x005239b0);
    /* 005239b0: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 005239b5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005239b6: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 005239b9: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005239bb: call dword ptr [edx + 0x50] */ { u32 t = R32((u32)(r_edx+0x50u)); r_esp -= 4; W32(r_esp, 0x5239beu); call_ind(t); }
    /* 005239be: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005239c0: je 0x5239e2 */ if (fZ) goto L_005239e2;
L_005239c2:; BB(0x005239c2);
    /* 005239c2: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 005239c7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005239c8: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 005239cb: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005239cd: call dword ptr [edx + 0x5c] */ { u32 t = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, 0x5239d0u); call_ind(t); }
    /* 005239d0: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 005239d3: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005239d6: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 005239da: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005239dc: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 005239df: call dword ptr [edx + 0x68] */ { u32 t = R32((u32)(r_edx+0x68u)); r_esp -= 4; W32(r_esp, 0x5239e2u); call_ind(t); }
L_005239e2:; BB(0x005239e2);
    /* 005239e2: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x5239e7u); f_00807ac0();
    /* 005239e7: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005239ea: jge 0x5239f1 */ if ((fS==fO)) goto L_005239f1;
L_005239ec:; BB(0x005239ec);
    /* 005239ec: lea edi, [ebx + 0x38] */ r_edi = (u32)(r_ebx+0x38u);
    /* 005239ef: jmp 0x523a49 */ goto L_00523a49;
L_005239f1:; BB(0x005239f1);
    /* 005239f1: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005239f4: jle 0x523a2f */ if ((fZ||fS!=fO)) goto L_00523a2f;
L_005239f6:; BB(0x005239f6);
    /* 005239f6: cmp eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005239f9: jl 0x523a2a */ if ((fS!=fO)) goto L_00523a2a;
L_005239fb:; BB(0x005239fb);
    /* 005239fb: cmp eax, 0x11 */ {  u32 a = r_eax; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005239fe: jle 0x523c6d */ if ((fZ||fS!=fO)) goto L_00523c6d;
L_00523a04:; BB(0x00523a04);
    /* 00523a04: cmp eax, 0x13 */ {  u32 a = r_eax; u32 b = 0x13u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00523a07: jl 0x523a25 */ if ((fS!=fO)) goto L_00523a25;
L_00523a09:; BB(0x00523a09);
    /* 00523a09: lea edi, [ebx + 0x38] */ r_edi = (u32)(r_ebx+0x38u);
    /* 00523a0c: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00523a0f: jg 0x523a49 */ if ((!fZ&&fS==fO)) goto L_00523a49;
L_00523a11:; BB(0x00523a11);
    /* 00523a11: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00523a13: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00523a14: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00523a15: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00523a16: push 0x19c */ { u32 v = 0x19cu; r_esp -= 4; W32(r_esp, v); }
    /* 00523a1b: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x523a20u); f_00814298();
    /* 00523a20: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00523a23: jmp 0x523a49 */ goto L_00523a49;
L_00523a25:; BB(0x00523a25);
    /* 00523a25: lea edi, [ebx + 0x38] */ r_edi = (u32)(r_ebx+0x38u);
    /* 00523a28: jmp 0x523a49 */ goto L_00523a49;
L_00523a2a:; BB(0x00523a2a);
    /* 00523a2a: lea edi, [ebx + 0x38] */ r_edi = (u32)(r_ebx+0x38u);
    /* 00523a2d: jmp 0x523a49 */ goto L_00523a49;
L_00523a2f:; BB(0x00523a2f);
    /* 00523a2f: lea edi, [ebx + 0x38] */ r_edi = (u32)(r_ebx+0x38u);
    /* 00523a32: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00523a34: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00523a35: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00523a36: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00523a37: push 0xfa */ { u32 v = 0xfau; r_esp -= 4; W32(r_esp, v); }
    /* 00523a3c: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x523a41u); f_00814298();
    /* 00523a41: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00523a44: jmp 0x523a49 */ goto L_00523a49;
L_00523a46:; BB(0x00523a46);
    /* 00523a46: lea edi, [ebx + 0x38] */ r_edi = (u32)(r_ebx+0x38u);
L_00523a49:; BB(0x00523a49);
    /* 00523a49: fld dword ptr [ebx + 0xc0] */ FPUSH(R_F32((u32)(r_ebx+0xc0u)));
    /* 00523a4f: fcomp dword ptr [0x921820] */ fx_compare(ST(0), R_F32((u32)(0x921820u))); FPOP();
    /* 00523a55: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00523a57: mov edx, dword ptr [ebx + 0xc0] */ r_edx = R32((u32)(r_ebx+0xc0u));
    /* 00523a5d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00523a5e: jae 0x523afe */ if (!fC) goto L_00523afe;
L_00523a64:; BB(0x00523a64);
    /* 00523a64: movsx eax, word ptr [ebx + 0xb8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0xb8u));
    /* 00523a6b: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00523a6e: jne 0x523a82 */ if (!fZ) goto L_00523a82;
L_00523a70:; BB(0x00523a70);
    /* 00523a70: mov ecx, dword ptr [0xa72f18] */ r_ecx = R32((u32)(0xa72f18u));
    /* 00523a76: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00523a77: call 0x579de0 */ r_esp -= 4; W32(r_esp, 0x523a7cu); f_00579de0();
    /* 00523a7c: mov ebp, eax */ r_ebp = r_eax;
    /* 00523a7e: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00523a80: jmp 0x523a9a */ goto L_00523a9a;
L_00523a82:; BB(0x00523a82);
    /* 00523a82: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00523a85: jne 0x523afe */ if (!fZ) goto L_00523afe;
L_00523a87:; BB(0x00523a87);
    /* 00523a87: mov ecx, dword ptr [0xa72f1c] */ r_ecx = R32((u32)(0xa72f1cu));
    /* 00523a8d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00523a8e: call 0x579de0 */ r_esp -= 4; W32(r_esp, 0x523a93u); f_00579de0();
    /* 00523a93: mov ebp, eax */ r_ebp = r_eax;
    /* 00523a95: mov esi, 1 */ r_esi = 0x1u;
L_00523a9a:; BB(0x00523a9a);
    /* 00523a9a: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00523a9c: je 0x523afe */ if (fZ) goto L_00523afe;
L_00523a9e:; BB(0x00523a9e);
    /* 00523a9e: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x523aa3u); f_0082d7b0();
    /* 00523aa3: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00523aa5: call 0x830cd8 */ r_esp -= 4; W32(r_esp, 0x523aaau); f_00830cd8();
    /* 00523aaa: mov ecx, edi */ r_ecx = r_edi;
    /* 00523aac: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x523ab1u); f_0082d838();
    /* 00523ab1: mov edx, dword ptr [ebx + 0x60] */ r_edx = R32((u32)(r_ebx+0x60u));
    /* 00523ab4: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00523ab6: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x523abbu); f_0082d8bc();
    /* 00523abb: push 0x3fa66666 */ { u32 v = 0x3fa66666u; r_esp -= 4; W32(r_esp, v); }
    /* 00523ac0: push 0x3fa66666 */ { u32 v = 0x3fa66666u; r_esp -= 4; W32(r_esp, v); }
    /* 00523ac5: push 0x3fa66666 */ { u32 v = 0x3fa66666u; r_esp -= 4; W32(r_esp, v); }
    /* 00523aca: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00523acc: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x523ad1u); f_0082fa0c();
    /* 00523ad1: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00523ad4: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00523ad6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00523ad7: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00523ad9: mov edx, ebp */ r_edx = r_ebp;
    /* 00523adb: call 0x82f940 */ r_esp -= 4; W32(r_esp, 0x523ae0u); f_0082f940();
    /* 00523ae0: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x523ae5u); f_0082da80();
    /* 00523ae5: mov ecx, dword ptr [ebx + esi*4 + 0x3d4] */ r_ecx = R32((u32)(r_ebx+r_esi*4+0x3d4u));
    /* 00523aec: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00523aee: je 0x523afe */ if (fZ) goto L_00523afe;
L_00523af0:; BB(0x00523af0);
    /* 00523af0: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 00523af3: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 00523af7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00523af8: mov ebp, dword ptr [ecx] */ r_ebp = R32((u32)(r_ecx));
    /* 00523afa: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00523afb: call dword ptr [ebp + 0x10] */ { u32 t = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, 0x523afeu); call_ind(t); }
L_00523afe:; BB(0x00523afe);
    /* 00523afe: mov eax, dword ptr [ebx + 0xb4] */ r_eax = R32((u32)(r_ebx+0xb4u));
    /* 00523b04: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00523b07: je 0x523c2d */ if (fZ) goto L_00523c2d;
L_00523b0d:; BB(0x00523b0d);
    /* 00523b0d: mov eax, 2 */ r_eax = 0x2u;
    /* 00523b12: mov word ptr [ebx + 0x330], ax */ W16((u32)(r_ebx+0x330u), (u16)r_eax);
    /* 00523b19: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00523b1b: mov word ptr [ebx + 0xb8], dx */ W16((u32)(r_ebx+0xb8u), (u16)r_edx);
    /* 00523b22: mov ebp, 0xf */ r_ebp = 0xfu;
    /* 00523b27: mov word ptr [ebx + 0x344], bp */ W16((u32)(r_ebx+0x344u), (u16)r_ebp);
    /* 00523b2e: jmp 0x523c2d */ goto L_00523c2d;
L_00523b33:; BB(0x00523b33);
    /* 00523b33: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00523b36: jne 0x523b67 */ if (!fZ) goto L_00523b67;
L_00523b38:; BB(0x00523b38);
    /* 00523b38: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00523b3a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00523b3c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00523b3e: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x523b43u); f_00772b44();
    /* 00523b43: movsx edx, word ptr [ebx + 0x344] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x344u));
    /* 00523b4a: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00523b4d: movsx eax, dx */ r_eax = (u32)(i32)(i16)(u16)r_edx;
    /* 00523b50: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00523b52: jl 0x523c95 */ if ((fS!=fO)) goto L_00523c95;
L_00523b58:; BB(0x00523b58);
    /* 00523b58: mov word ptr [ebx + 0x344], dx */ W16((u32)(r_ebx+0x344u), (u16)r_edx);
    /* 00523b5f: lea edi, [ebx + 0x38] */ r_edi = (u32)(r_ebx+0x38u);
    /* 00523b62: jmp 0x523c2d */ goto L_00523c2d;
L_00523b67:; BB(0x00523b67);
    /* 00523b67: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00523b69: mov word ptr [ebx + 0x330], dx */ W16((u32)(r_ebx+0x330u), (u16)r_edx);
L_00523b70:; BB(0x00523b70);
    /* 00523b70: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00523b72: jne 0x523b90 */ if (!fZ) goto L_00523b90;
L_00523b74:; BB(0x00523b74);
    /* 00523b74: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 00523b77: and eax, 0xffdfffff */ {  u32 a = r_eax; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00523b7c: mov dword ptr [ebx + 0x30], eax */ W32((u32)(r_ebx+0x30u), r_eax);
    /* 00523b7f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00523b81: mov word ptr [ebx + 0x344], dx */ W16((u32)(r_ebx+0x344u), (u16)r_edx);
    /* 00523b88: lea edi, [ebx + 0x38] */ r_edi = (u32)(r_ebx+0x38u);
    /* 00523b8b: jmp 0x523c2d */ goto L_00523c2d;
L_00523b90:; BB(0x00523b90);
    /* 00523b90: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 00523b94: mov esi, dword ptr [ebp + 0x300] */ r_esi = R32((u32)(r_ebp+0x300u));
    /* 00523b9a: mov edi, dword ptr [ebp + 0x304] */ r_edi = R32((u32)(r_ebp+0x304u));
    /* 00523ba0: mov eax, dword ptr [ebp + 0x308] */ r_eax = R32((u32)(r_ebp+0x308u));
    /* 00523ba6: lea edx, [ebx + 0x300] */ r_edx = (u32)(r_ebx+0x300u);
    /* 00523bac: mov dword ptr [esp + 0x18], esi */ W32((u32)(r_esp+0x18u), r_esi);
    /* 00523bb0: mov dword ptr [esp + 0x1c], edi */ W32((u32)(r_esp+0x1cu), r_edi);
    /* 00523bb4: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 00523bb8: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x523bbdu); f_0082f9c4();
    /* 00523bbd: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 00523bc1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00523bc2: mov edx, dword ptr [ebx + 0x358] */ r_edx = R32((u32)(r_ebx+0x358u));
    /* 00523bc8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00523bca: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00523bcd: call 0x771858 */ r_esp -= 4; W32(r_esp, 0x523bd2u); f_00771858();
    /* 00523bd2: mov ebp, eax */ r_ebp = r_eax;
    /* 00523bd4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00523bd6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00523bd8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00523bda: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x523bdfu); f_00772b44();
    /* 00523bdf: mov edx, dword ptr [ebx + 0x31c] */ r_edx = R32((u32)(r_ebx+0x31cu));
    /* 00523be5: cmp ebp, dword ptr [edx + 0xc] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_edx+0xcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00523be8: jl 0x523bef */ if ((fS!=fO)) goto L_00523bef;
L_00523bea:; BB(0x00523bea);
    /* 00523bea: lea edi, [ebx + 0x38] */ r_edi = (u32)(r_ebx+0x38u);
    /* 00523bed: jmp 0x523c2d */ goto L_00523c2d;
L_00523bef:; BB(0x00523bef);
    /* 00523bef: mov eax, 1 */ r_eax = 0x1u;
    /* 00523bf4: mov word ptr [ebx + 0x330], ax */ W16((u32)(r_ebx+0x330u), (u16)r_eax);
    /* 00523bfb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00523bfd: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x523c02u); f_007751b0();
    /* 00523c02: fcomp dword ptr [0x921824] */ fx_compare(ST(0), R_F32((u32)(0x921824u))); FPOP();
    /* 00523c08: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00523c0a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00523c0b: jbe 0x523c1e */ if ((fC||fZ)) goto L_00523c1e;
L_00523c0d:; BB(0x00523c0d);
    /* 00523c0d: mov eax, 2 */ r_eax = 0x2u;
    /* 00523c12: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
    /* 00523c19: lea edi, [ebx + 0x38] */ r_edi = (u32)(r_ebx+0x38u);
    /* 00523c1c: jmp 0x523c2d */ goto L_00523c2d;
L_00523c1e:; BB(0x00523c1e);
    /* 00523c1e: mov eax, 3 */ r_eax = 0x3u;
    /* 00523c23: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
    /* 00523c2a: lea edi, [ebx + 0x38] */ r_edi = (u32)(r_ebx+0x38u);
L_00523c2d:; BB(0x00523c2d);
    /* 00523c2d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00523c2f: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x523c34u); f_007b6880();
    /* 00523c34: push 0xee */ { u32 v = 0xeeu; r_esp -= 4; W32(r_esp, v); }
    /* 00523c39: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00523c3b: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x523c40u); f_007879b8();
    /* 00523c40: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00523c42: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00523c43: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00523c44: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00523c45: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00523c46: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00523c47: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x523c4cu); f_008144b0();
    /* 00523c4c: push 0xfffffe00 */ { u32 v = 0xfffffe00u; r_esp -= 4; W32(r_esp, v); }
    /* 00523c51: call 0x814680 */ r_esp -= 4; W32(r_esp, 0x523c56u); f_00814680();
    /* 00523c56: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00523c58: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00523c5a: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 00523c5f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00523c60: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x523c65u); f_00805608();
    /* 00523c65: add esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00523c68: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00523c69: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00523c6a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00523c6b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00523c6c: ret  */ FN_RET(0x005238e8); r_esp += 4; return;
L_00523c6d:; BB(0x00523c6d);
    /* 00523c6d: mov eax, dword ptr [0x9f9860] */ r_eax = R32((u32)(0x9f9860u));
    /* 00523c72: lea edi, [ebx + 0x38] */ r_edi = (u32)(r_ebx+0x38u);
    /* 00523c75: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00523c78: jne 0x523a49 */ if (!fZ) goto L_00523a49;
L_00523c7e:; BB(0x00523c7e);
    /* 00523c7e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00523c80: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00523c81: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00523c82: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00523c83: push 0x30022 */ { u32 v = 0x30022u; r_esp -= 4; W32(r_esp, v); }
    /* 00523c88: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x523c8du); f_00814298();
    /* 00523c8d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00523c90: jmp 0x523a49 */ goto L_00523a49;
L_00523c95:; BB(0x00523c95);
    /* 00523c95: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 00523c98: and eax, 0xffdfffff */ {  u32 a = r_eax; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00523c9d: mov dword ptr [ebx + 0x30], eax */ W32((u32)(r_ebx+0x30u), r_eax);
    /* 00523ca0: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00523ca2: mov word ptr [ebx + 0x344], dx */ W16((u32)(r_ebx+0x344u), (u16)r_edx);
    /* 00523ca9: lea edi, [ebx + 0x38] */ r_edi = (u32)(r_ebx+0x38u);
    /* 00523cac: jmp 0x523c2d */ goto L_00523c2d;
}

void f_00523cb4(void) /* sub_523CB4 */
{
    FN_ENTER(0x00523cb4);
    /* 00523cb4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00523cb5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00523cb6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00523cb7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00523cb8: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00523cbb: mov edi, ecx */ r_edi = r_ecx;
    /* 00523cbd: mov edx, dword ptr [edi + 0x30] */ r_edx = R32((u32)(r_edi+0x30u));
    /* 00523cc0: mov eax, dword ptr [edi + 0x358] */ r_eax = R32((u32)(r_edi+0x358u));
    /* 00523cc6: and edx, 0xfbfbffff */ {  u32 a = r_edx; u32 b = 0xfbfbffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00523ccc: mov dword ptr [edi + 0x30], edx */ W32((u32)(r_edi+0x30u), r_edx);
    /* 00523ccf: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 00523cd2: mov esi, dword ptr [eax + 8] */ r_esi = R32((u32)(r_eax+0x8u));
    /* 00523cd5: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 00523cd9: test edx, 0x2000 */ {  u32 a = r_edx; u32 b = 0x2000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00523cdf: je 0x523d58 */ if (fZ) goto L_00523d58;
L_00523ce1:; BB(0x00523ce1);
    /* 00523ce1: fld dword ptr [0x921840] */ FPUSH(R_F32((u32)(0x921840u)));
    /* 00523ce7: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 00523ceb: movsx ebx, word ptr [edi + 0xb8] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_edi+0xb8u));
    /* 00523cf2: mov edx, dword ptr [edi + 0xd8] */ r_edx = R32((u32)(r_edi+0xd8u));
    /* 00523cf8: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00523cfa: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 00523cfe: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00523d00: fld dword ptr [edx + ebx*8 + 8] */ FPUSH(R_F32((u32)(r_edx+r_ebx*8+0x8u)));
    /* 00523d04: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00523d06: fstp dword ptr [edi + 0xc8] */ W_F32((u32)(r_edi+0xc8u), ST(0)); FPOP();
    /* 00523d0c: mov dword ptr [esp + 0xc], esi */ W32((u32)(r_esp+0xcu), r_esi);
    /* 00523d10: fild dword ptr [esp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_esp+0xcu)));
    /* 00523d14: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00523d16: fnstcw word ptr [esp + 0x14] */ W16((u32)(r_esp+0x14u), fcw);
    /* 00523d1a: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 00523d1f: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00523d24: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 00523d28: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 00523d2c: fistp dword ptr [esp + 0x24] */ W32((u32)(r_esp+0x24u), (u32)fx_int32(ST(0))); FPOP();
    /* 00523d30: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 00523d34: mov ecx, edi */ r_ecx = r_edi;
    /* 00523d36: mov esi, dword ptr [esp + 0x24] */ r_esi = R32((u32)(r_esp+0x24u));
    /* 00523d3a: push 0xed */ { u32 v = 0xedu; r_esp -= 4; W32(r_esp, v); }
    /* 00523d3f: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x523d44u); f_007879b8();
    /* 00523d44: lea ebp, [edi + 0x38] */ r_ebp = (u32)(r_edi+0x38u);
    /* 00523d47: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00523d49: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00523d4a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00523d4b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00523d4c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00523d4d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00523d4e: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x523d53u); f_008144b0();
    /* 00523d53: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00523d56: jmp 0x523d80 */ goto L_00523d80;
L_00523d58:; BB(0x00523d58);
    /* 00523d58: push 0xee */ { u32 v = 0xeeu; r_esp -= 4; W32(r_esp, v); }
    /* 00523d5d: mov ecx, edi */ r_ecx = r_edi;
    /* 00523d5f: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x523d64u); f_007879b8();
    /* 00523d64: lea ebp, [edi + 0x38] */ r_ebp = (u32)(r_edi+0x38u);
    /* 00523d67: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00523d69: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00523d6a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00523d6b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00523d6c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00523d6d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00523d6e: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x523d73u); f_008144b0();
    /* 00523d73: push 0xfffffe00 */ { u32 v = 0xfffffe00u; r_esp -= 4; W32(r_esp, v); }
    /* 00523d78: call 0x814680 */ r_esp -= 4; W32(r_esp, 0x523d7du); f_00814680();
    /* 00523d7d: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00523d80:; BB(0x00523d80);
    /* 00523d80: mov ecx, edi */ r_ecx = r_edi;
    /* 00523d82: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x523d87u); f_007aa094();
    /* 00523d87: mov ecx, edi */ r_ecx = r_edi;
    /* 00523d89: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x523d8eu); f_00770738();
    /* 00523d8e: mov ebx, eax */ r_ebx = r_eax;
    /* 00523d90: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00523d92: je 0x523f36 */ if (fZ) goto L_00523f36;
L_00523d98:; BB(0x00523d98);
    /* 00523d98: movsx edx, word ptr [edi + 0x330] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x330u));
    /* 00523d9f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00523da1: je 0x523e50 */ if (fZ) goto L_00523e50;
L_00523da7:; BB(0x00523da7);
    /* 00523da7: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00523daa: jne 0x523e47 */ if (!fZ) goto L_00523e47;
L_00523db0:; BB(0x00523db0);
    /* 00523db0: mov edx, dword ptr [ebx + 0x300] */ r_edx = R32((u32)(r_ebx+0x300u));
    /* 00523db6: add esp, -0x18 */ {  u32 a = r_esp; u32 b = 0xffffffe8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00523db9: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
    /* 00523dbd: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00523dc0: mov ecx, edi */ r_ecx = r_edi;
    /* 00523dc2: mov dword ptr [esp + 4], 0x42200000 */ W32((u32)(r_esp+0x4u), 0x42200000u);
    /* 00523dca: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 00523dce: mov esi, dword ptr [ebx + 0x304] */ r_esi = R32((u32)(r_ebx+0x304u));
    /* 00523dd4: mov ebx, dword ptr [ebx + 0x308] */ r_ebx = R32((u32)(r_ebx+0x308u));
    /* 00523dda: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 00523dde: mov dword ptr [esp + 0x10], esi */ W32((u32)(r_esp+0x10u), r_esi);
    /* 00523de2: mov dword ptr [esp + 0x14], ebx */ W32((u32)(r_esp+0x14u), r_ebx);
    /* 00523de6: call 0x7726d0 */ r_esp -= 4; W32(r_esp, 0x523debu); f_007726d0();
    /* 00523deb: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00523ded: lea eax, [edi + 0x300] */ r_eax = (u32)(r_edi+0x300u);
    /* 00523df3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00523df4: lea edx, [edi + 0x2a4] */ r_edx = (u32)(r_edi+0x2a4u);
    /* 00523dfa: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00523dfb: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x523e00u); f_007a9180();
    /* 00523e00: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 00523e04: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00523e07: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 00523e0b: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 00523e0f: mov edx, dword ptr [edi + 0xa4] */ r_edx = R32((u32)(r_edi+0xa4u));
    /* 00523e15: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00523e17: fadd dword ptr [edx + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0xcu));
    /* 00523e1a: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00523e1c: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00523e1e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00523e20: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00523e21: jbe 0x523f1a */ if ((fC||fZ)) goto L_00523f1a;
L_00523e27:; BB(0x00523e27);
    /* 00523e27: movzx eax, word ptr [edi + 0x340] */ r_eax = (u32)R16((u32)(r_edi+0x340u));
    /* 00523e2e: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00523e33: je 0x523f54 */ if (fZ) goto L_00523f54;
L_00523e39:; BB(0x00523e39);
    /* 00523e39: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00523e3b: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 00523e42: jmp 0x523f1a */ goto L_00523f1a;
L_00523e47:; BB(0x00523e47);
    /* 00523e47: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00523e49: mov word ptr [edi + 0x330], dx */ W16((u32)(r_edi+0x330u), (u16)r_edx);
L_00523e50:; BB(0x00523e50);
    /* 00523e50: mov edx, dword ptr [ebx + 0x300] */ r_edx = R32((u32)(r_ebx+0x300u));
    /* 00523e56: add esp, -0x18 */ {  u32 a = r_esp; u32 b = 0xffffffe8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00523e59: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
    /* 00523e5d: fmul dword ptr [0x921818] */ ST(0) = ST(0) * R_F32((u32)(0x921818u));
    /* 00523e63: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00523e66: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 00523e6e: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 00523e72: mov esi, dword ptr [ebx + 0x304] */ r_esi = R32((u32)(r_ebx+0x304u));
    /* 00523e78: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00523e7c: mov edx, dword ptr [ebx + 0x308] */ r_edx = R32((u32)(r_ebx+0x308u));
    /* 00523e82: mov dword ptr [esp + 0xc], esi */ W32((u32)(r_esp+0xcu), r_esi);
    /* 00523e86: mov ecx, edi */ r_ecx = r_edi;
    /* 00523e88: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 00523e8c: call 0x772aa0 */ r_esp -= 4; W32(r_esp, 0x523e91u); f_00772aa0();
    /* 00523e91: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 00523e95: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00523e98: mov esi, dword ptr [ebx + 0x300] */ r_esi = R32((u32)(r_ebx+0x300u));
    /* 00523e9e: mov edx, dword ptr [ebx + 0x304] */ r_edx = R32((u32)(r_ebx+0x304u));
    /* 00523ea4: mov eax, dword ptr [ebx + 0x308] */ r_eax = R32((u32)(r_ebx+0x308u));
    /* 00523eaa: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 00523ead: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00523eb1: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00523eb5: lea edx, [edi + 0x300] */ r_edx = (u32)(r_edi+0x300u);
    /* 00523ebb: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x523ec0u); f_0082f9c4();
    /* 00523ec0: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00523ec3: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 00523ec7: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 00523ec9: fmul qword ptr [0x921780] */ ST(0) = ST(0) * R_F64((u32)(0x921780u));
    /* 00523ecf: fdiv qword ptr [0x921778] */ ST(0) = ST(0) / R_F64((u32)(0x921778u));
    /* 00523ed5: fnstcw word ptr [esp + 0x14] */ W16((u32)(r_esp+0x14u), fcw);
    /* 00523ed9: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 00523ede: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00523ee3: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 00523ee7: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 00523eeb: fistp dword ptr [esp + 0x24] */ W32((u32)(r_esp+0x24u), (u32)fx_int32(ST(0))); FPOP();
    /* 00523eef: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 00523ef3: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 00523ef7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00523ef8: push dword ptr [edi + 0x60] */ { u32 v = R32((u32)(r_edi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 00523efb: call 0x7a9018 */ r_esp -= 4; W32(r_esp, 0x523f00u); f_007a9018();
    /* 00523f00: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00523f03: mov edx, dword ptr [edi + 0x31c] */ r_edx = R32((u32)(r_edi+0x31cu));
    /* 00523f09: cmp eax, dword ptr [edx + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0xcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00523f0c: jge 0x523f1a */ if ((fS==fO)) goto L_00523f1a;
L_00523f0e:; BB(0x00523f0e);
    /* 00523f0e: mov eax, 1 */ r_eax = 0x1u;
    /* 00523f13: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
L_00523f1a:; BB(0x00523f1a);
    /* 00523f1a: mov edx, dword ptr [edi + 0x358] */ r_edx = R32((u32)(r_edi+0x358u));
    /* 00523f20: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 00523f22: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00523f24: fcomp dword ptr [esp + 0x2c] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x2cu))); FPOP();
    /* 00523f28: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00523f2a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00523f2b: jae 0x523f36 */ if (!fC) goto L_00523f36;
L_00523f2d:; BB(0x00523f2d);
    /* 00523f2d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00523f2f: mov ecx, edi */ r_ecx = r_edi;
    /* 00523f31: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x523f36u); f_007706b0();
L_00523f36:; BB(0x00523f36);
    /* 00523f36: mov ecx, edi */ r_ecx = r_edi;
    /* 00523f38: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x523f3du); f_007b6880();
    /* 00523f3d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00523f3f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00523f41: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 00523f46: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00523f47: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x523f4cu); f_00805608();
    /* 00523f4c: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00523f4f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00523f50: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00523f51: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00523f52: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00523f53: ret  */ FN_RET(0x00523cb4); r_esp += 4; return;
L_00523f54:; BB(0x00523f54);
    /* 00523f54: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00523f56: mov ecx, edi */ r_ecx = r_edi;
    /* 00523f58: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x523f5du); f_007706b0();
    /* 00523f5d: jmp 0x523f1a */ goto L_00523f1a;
}

void f_00523f60(void) /* sub_523F60 */
{
    FN_ENTER(0x00523f60);
    /* 00523f60: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00523f61: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00523f62: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00523f65: mov esi, ecx */ r_esi = r_ecx;
    /* 00523f67: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 00523f6a: or eax, 0x4040000 */ {  u32 a = r_eax; u32 b = 0x4040000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00523f6f: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 00523f72: mov ecx, esi */ r_ecx = r_esi;
    /* 00523f74: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x523f79u); f_007aa094();
    /* 00523f79: mov eax, dword ptr [esi + 0x360] */ r_eax = R32((u32)(r_esi+0x360u));
    /* 00523f7f: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 00523f87: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 00523f8c: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 00523f93: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00523f97: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x523f9cu); f_0082d990();
    /* 00523f9c: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 00523f9f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00523fa1: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x523fa6u); f_0082d8bc();
    /* 00523fa6: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00523fa9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00523faa: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 00523fae: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00523fb0: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x523fb5u); f_0082eab8();
    /* 00523fb5: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00523fba: call 0x82eb80 */ r_esp -= 4; W32(r_esp, 0x523fbfu); f_0082eb80();
    /* 00523fbf: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00523fc2: lea edx, [esi + 0x50] */ r_edx = (u32)(r_esi+0x50u);
    /* 00523fc5: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x523fcau); f_0082ebac();
    /* 00523fca: mov eax, dword ptr [esi + 0x358] */ r_eax = R32((u32)(r_esi+0x358u));
    /* 00523fd0: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 00523fd3: fmul dword ptr [0x921810] */ ST(0) = ST(0) * R_F32((u32)(0x921810u));
    /* 00523fd9: add esp, -0x10 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00523fdc: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 00523fe0: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
    /* 00523fe4: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 00523fe8: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00523feb: mov ecx, esi */ r_ecx = r_esi;
    /* 00523fed: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00523ff1: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 00523ff5: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 00523ff9: call 0x772a14 */ r_esp -= 4; W32(r_esp, 0x523ffeu); f_00772a14();
    /* 00523ffe: mov edx, dword ptr [esi + 0x358] */ r_edx = R32((u32)(r_esi+0x358u));
    /* 00524004: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 00524007: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00524009: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 0052400b: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0052400d: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 0052400f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00524011: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00524012: jb 0x524021 */ if (fC) goto L_00524021;
L_00524014:; BB(0x00524014);
    /* 00524014: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00524016: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00524018: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00524019: ja 0x524021 */ if ((!fC&&!fZ)) goto L_00524021;
L_0052401b:; BB(0x0052401b);
    /* 0052401b: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0052401d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0052401f: jmp 0x524037 */ goto L_00524037;
L_00524021:; BB(0x00524021);
    /* 00524021: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00524023: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00524025: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00524027: mov ecx, esi */ r_ecx = r_esi;
    /* 00524029: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x52402eu); f_007706b0();
    /* 0052402e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00524030: mov word ptr [esi + 0x3a4], ax */ W16((u32)(r_esi+0x3a4u), (u16)r_eax);
L_00524037:; BB(0x00524037);
    /* 00524037: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00524039: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052403b: mov ecx, esi */ r_ecx = r_esi;
    /* 0052403d: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x524042u); f_00772b44();
    /* 00524042: push 0xee */ { u32 v = 0xeeu; r_esp -= 4; W32(r_esp, v); }
    /* 00524047: mov ecx, esi */ r_ecx = r_esi;
    /* 00524049: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x52404eu); f_007879b8();
    /* 0052404e: lea ebx, [esi + 0x38] */ r_ebx = (u32)(r_esi+0x38u);
    /* 00524051: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00524053: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00524054: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00524055: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00524056: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00524057: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00524058: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x52405du); f_008144b0();
    /* 0052405d: push 0xfffffe00 */ { u32 v = 0xfffffe00u; r_esp -= 4; W32(r_esp, v); }
    /* 00524062: call 0x814680 */ r_esp -= 4; W32(r_esp, 0x524067u); f_00814680();
    /* 00524067: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00524069: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0052406b: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 00524070: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00524071: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x524076u); f_00805608();
    /* 00524076: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00524079: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0052407a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0052407b: ret  */ FN_RET(0x00523f60); r_esp += 4; return;
}

