#include "protos.h"

void f_0056212c(void) /* sub_56212C */
{
    FN_ENTER(0x0056212c);
    /* 0056212c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0056212d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0056212e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056212f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00562130: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00562133: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00562135: mov eax, dword ptr [esp + 0x54] */ r_eax = R32((u32)(r_esp+0x54u));
    /* 00562139: cmp eax, 0x35 */ {  u32 a = r_eax; u32 b = 0x35u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056213c: je 0x562399 */ if (fZ) goto L_00562399;
L_00562142:; BB(0x00562142);
    /* 00562142: cmp eax, 0x1f */ {  u32 a = r_eax; u32 b = 0x1fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00562145: je 0x562151 */ if (fZ) goto L_00562151;
L_00562147:; BB(0x00562147);
    /* 00562147: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0056214a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0056214b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056214c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0056214d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0056214e: ret 4 */ FN_RET(0x0056212c); r_esp += 8; return;
L_00562151:; BB(0x00562151);
    /* 00562151: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x562156u); f_0082fa9c();
    /* 00562156: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 0056215b: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x562160u); f_0082d990();
    /* 00562160: lea ecx, [ebx + 0x38] */ r_ecx = (u32)(r_ebx+0x38u);
    /* 00562163: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x562168u); f_0082d838();
    /* 00562168: mov edx, dword ptr [ebx + 0x60] */ r_edx = R32((u32)(r_ebx+0x60u));
    /* 0056216b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0056216d: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x562172u); f_0082d8bc();
    /* 00562172: lea edx, [ebx + 0x68] */ r_edx = (u32)(r_ebx+0x68u);
    /* 00562175: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00562177: call 0x83c0a0 */ r_esp -= 4; W32(r_esp, 0x56217cu); f_0083c0a0();
    /* 0056217c: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x562181u); f_0082fa9c();
    /* 00562181: push dword ptr [ebx + 0xc0] */ { u32 v = R32((u32)(r_ebx+0xc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00562187: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00562189: call 0x7aaab8 */ r_esp -= 4; W32(r_esp, 0x56218eu); f_007aaab8();
    /* 0056218e: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x562193u); f_0082faac();
    /* 00562193: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x562198u); f_0082da80();
    /* 00562198: mov ecx, dword ptr [0xaab540] */ r_ecx = R32((u32)(0xaab540u));
    /* 0056219e: add ecx, 0x7c0 */ {  u32 a = r_ecx; u32 b = 0x7c0u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005621a4: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x5621a9u); f_0082d990();
    /* 005621a9: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 005621b0: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 005621b4: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005621b6: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 005621be: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 005621c6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005621c7: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 005621cb: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x5621d0u); f_00830aa0();
    /* 005621d0: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x5621d5u); f_0082da80();
    /* 005621d5: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x5621dau); f_0082faac();
L_005621da:; BB(0x005621da);
    /* 005621da: fld dword ptr [0x925a74] */ FPUSH(R_F32((u32)(0x925a74u)));
    /* 005621e0: fadd dword ptr [esp + 0x10] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x10u));
    /* 005621e4: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 005621e8: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 005621ec: push 0x16ef */ { u32 v = 0x16efu; r_esp -= 4; W32(r_esp, v); }
    /* 005621f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005621f2: call 0x780630 */ r_esp -= 4; W32(r_esp, 0x5621f7u); f_00780630();
    /* 005621f7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005621fa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005621fc: je 0x56238f */ if (fZ) goto L_0056238f;
L_00562202:; BB(0x00562202);
    /* 00562202: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 00562206: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 0056220a: mov ebp, dword ptr [esp + 0x14] */ r_ebp = R32((u32)(r_esp+0x14u));
    /* 0056220e: fld dword ptr [0x925a70] */ FPUSH(R_F32((u32)(0x925a70u)));
    /* 00562214: lea esi, [ebx + 0x128] */ r_esi = (u32)(r_ebx+0x128u);
    /* 0056221a: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 0056221e: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 00562222: fadd dword ptr [esp + 0x28] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x28u));
    /* 00562226: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 0056222a: mov dword ptr [esp + 0x2c], ebp */ W32((u32)(r_esp+0x2cu), r_ebp);
    /* 0056222e: lea edi, [esp + 0x24] */ r_edi = (u32)(r_esp+0x24u);
    /* 00562232: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00562234: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00562235: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00562236: call 0x7806dc */ r_esp -= 4; W32(r_esp, 0x56223bu); f_007806dc();
    /* 0056223b: mov edi, eax */ r_edi = r_eax;
    /* 0056223d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00562240: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00562242: je 0x5622d3 */ if (fZ) goto L_005622d3;
L_00562248:; BB(0x00562248);
    /* 00562248: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 0056224a: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0056224d: je 0x5622d3 */ if (fZ) goto L_005622d3;
L_00562253:; BB(0x00562253);
    /* 00562253: push 0x49 */ { u32 v = 0x49u; r_esp -= 4; W32(r_esp, v); }
    /* 00562255: mov edx, dword ptr [edi + 4] */ r_edx = R32((u32)(r_edi+0x4u));
    /* 00562258: add edx, 0x38 */ {  u32 a = r_edx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0056225b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056225c: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x562261u); f_0050b510();
    /* 00562261: mov esi, eax */ r_esi = r_eax;
    /* 00562263: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00562266: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00562268: je 0x5622ab */ if (fZ) goto L_005622ab;
L_0056226a:; BB(0x0056226a);
    /* 0056226a: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0056226c: call 0x50c094 */ r_esp -= 4; W32(r_esp, 0x562271u); f_0050c094();
    /* 00562271: mov ebp, eax */ r_ebp = r_eax;
    /* 00562273: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00562276: call 0x50c08c */ r_esp -= 4; W32(r_esp, 0x56227bu); f_0050c08c();
    /* 0056227b: movzx edx, word ptr [esi + 0x2c] */ r_edx = (u32)R16((u32)(r_esi+0x2cu));
    /* 0056227f: mov dword ptr [esi + 0x58], 0 */ W32((u32)(r_esi+0x58u), 0x0u);
    /* 00562286: mov dword ptr [esi + 0x50], ebp */ W32((u32)(r_esi+0x50u), r_ebp);
    /* 00562289: mov dword ptr [esi + 0x54], eax */ W32((u32)(r_esi+0x54u), r_eax);
    /* 0056228c: mov dword ptr [esi + 0x60], 0x3f800000 */ W32((u32)(r_esi+0x60u), 0x3f800000u);
    /* 00562293: or edx, 0xffff0600 */ {  u32 a = r_edx; u32 b = 0xffff0600u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00562299: mov word ptr [esi + 0x2c], dx */ W16((u32)(r_esi+0x2cu), (u16)r_edx);
    /* 0056229d: mov dword ptr [esi + 0x44], 0x40000000 */ W32((u32)(r_esi+0x44u), 0x40000000u);
    /* 005622a4: mov dword ptr [esi + 0x48], 0x3f800000 */ W32((u32)(r_esi+0x48u), 0x3f800000u);
L_005622ab:; BB(0x005622ab);
    /* 005622ab: push 0xa4 */ { u32 v = 0xa4u; r_esp -= 4; W32(r_esp, v); }
    /* 005622b0: mov eax, dword ptr [edi + 4] */ r_eax = R32((u32)(r_edi+0x4u));
    /* 005622b3: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005622b6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005622b7: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5622bcu); f_0050b510();
    /* 005622bc: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005622bf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005622c1: je 0x5622f0 */ if (fZ) goto L_005622f0;
L_005622c3:; BB(0x005622c3);
    /* 005622c3: mov dword ptr [eax + 0x44], 0x40000000 */ W32((u32)(r_eax+0x44u), 0x40000000u);
    /* 005622ca: mov dword ptr [eax + 0x48], 0x3fc00000 */ W32((u32)(r_eax+0x48u), 0x3fc00000u);
    /* 005622d1: jmp 0x5622f0 */ goto L_005622f0;
L_005622d3:; BB(0x005622d3);
    /* 005622d3: fld dword ptr [0x925a60] */ FPUSH(R_F32((u32)(0x925a60u)));
    /* 005622d9: fadd dword ptr [esp + 0x10] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x10u));
    /* 005622dd: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 005622e1: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 005622e5: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 005622e7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005622e8: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5622edu); f_0050b510();
    /* 005622ed: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005622f0:; BB(0x005622f0);
    /* 005622f0: mov eax, dword ptr [0xaae16c] */ r_eax = R32((u32)(0xaae16cu));
    /* 005622f5: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 005622f7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005622f9: jle 0x56238f */ if ((fZ||fS!=fO)) goto L_0056238f;
L_005622ff:; BB(0x005622ff);
    /* 005622ff: mov esi, dword ptr [ebp*4 + 0xaad720] */ r_esi = R32((u32)(r_ebp*4+0xaad720u));
    /* 00562306: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00562307: call 0x6ea71c */ r_esp -= 4; W32(r_esp, 0x56230cu); f_006ea71c();
    /* 0056230c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0056230d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056230f: je 0x562380 */ if (fZ) goto L_00562380;
L_00562311:; BB(0x00562311);
    /* 00562311: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 00562315: cmp eax, 0x1000 */ {  u32 a = r_eax; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056231a: jge 0x562380 */ if ((fS==fO)) goto L_00562380;
L_0056231c:; BB(0x0056231c);
    /* 0056231c: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 00562320: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00562321: lea edx, [esi + 0x300] */ r_edx = (u32)(r_esi+0x300u);
    /* 00562327: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00562328: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x56232du); f_007a9180();
    /* 0056232d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00562330: mov edx, dword ptr [0xa73cec] */ r_edx = R32((u32)(0xa73cecu));
    /* 00562336: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00562338: fld dword ptr [edx + 0x10] */ FPUSH(R_F32((u32)(r_edx+0x10u)));
    /* 0056233b: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0056233d: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0056233f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00562341: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00562342: jb 0x562380 */ if (fC) goto L_00562380;
L_00562344:; BB(0x00562344);
    /* 00562344: movsx edx, word ptr [edx] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edx));
    /* 00562347: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
    /* 0056234b: fild dword ptr [esp + 0x38] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x38u)));
    /* 0056234f: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 00562351: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 00562355: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00562357: mov edi, 0xffffffff */ r_edi = 0xffffffffu;
    /* 0056235c: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 00562360: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00562361: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00562362: mov ecx, esi */ r_ecx = r_esi;
    /* 00562364: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00562365: push dword ptr [esp + 0x40] */ { u32 v = R32((u32)(r_esp+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 00562369: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056236b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0056236c: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x56236fu); call_ind(t); }
    /* 0056236f: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00562371: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00562374: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00562378: mov ecx, esi */ r_ecx = r_esi;
    /* 0056237a: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 0056237d: call dword ptr [eax + 0x68] */ { u32 t = R32((u32)(r_eax+0x68u)); r_esp -= 4; W32(r_esp, 0x562380u); call_ind(t); }
L_00562380:; BB(0x00562380);
    /* 00562380: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00562383: cmp ebp, dword ptr [0xaae16c] */ {  u32 a = r_ebp; u32 b = R32((u32)(0xaae16cu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00562389: jl 0x5622ff */ if ((fS!=fO)) goto L_005622ff;
L_0056238f:; BB(0x0056238f);
    /* 0056238f: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00562392: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00562393: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00562394: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00562395: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00562396: ret 4 */ FN_RET(0x0056212c); r_esp += 8; return;
L_00562399:; BB(0x00562399);
    /* 00562399: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x56239eu); f_0082fa9c();
    /* 0056239e: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 005623a3: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x5623a8u); f_0082d990();
    /* 005623a8: lea ecx, [ebx + 0x38] */ r_ecx = (u32)(r_ebx+0x38u);
    /* 005623ab: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x5623b0u); f_0082d838();
    /* 005623b0: mov edx, dword ptr [ebx + 0x60] */ r_edx = R32((u32)(r_ebx+0x60u));
    /* 005623b3: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005623b5: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x5623bau); f_0082d8bc();
    /* 005623ba: lea edx, [ebx + 0x68] */ r_edx = (u32)(r_ebx+0x68u);
    /* 005623bd: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005623bf: call 0x83c0a0 */ r_esp -= 4; W32(r_esp, 0x5623c4u); f_0083c0a0();
    /* 005623c4: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x5623c9u); f_0082fa9c();
    /* 005623c9: push dword ptr [ebx + 0xc0] */ { u32 v = R32((u32)(r_ebx+0xc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 005623cf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005623d1: call 0x7aaab8 */ r_esp -= 4; W32(r_esp, 0x5623d6u); f_007aaab8();
    /* 005623d6: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x5623dbu); f_0082faac();
    /* 005623db: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x5623e0u); f_0082da80();
    /* 005623e0: mov ecx, dword ptr [0xaab540] */ r_ecx = R32((u32)(0xaab540u));
    /* 005623e6: add ecx, 0xd40 */ {  u32 a = r_ecx; u32 b = 0xd40u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005623ec: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x5623f1u); f_0082d990();
    /* 005623f1: mov dword ptr [esp + 0x18], 0 */ W32((u32)(r_esp+0x18u), 0x0u);
    /* 005623f9: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 005623fd: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005623ff: mov dword ptr [esp + 0x1c], 0 */ W32((u32)(r_esp+0x1cu), 0x0u);
    /* 00562407: mov dword ptr [esp + 0x20], 0 */ W32((u32)(r_esp+0x20u), 0x0u);
    /* 0056240f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00562410: lea edx, [esp + 0x1c] */ r_edx = (u32)(r_esp+0x1cu);
    /* 00562414: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x562419u); f_00830aa0();
    /* 00562419: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x56241eu); f_0082da80();
    /* 0056241e: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x562423u); f_0082faac();
    /* 00562423: jmp 0x5621da */ goto L_005621da;
}

void f_00562428(void) /* sub_562428 */
{
    FN_ENTER(0x00562428);
    /* 00562428: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00562429: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0056242a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056242b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0056242c: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0056242f: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00562431: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00562433: push 0x41000000 */ { u32 v = 0x41000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00562438: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x56243du); f_007aaa30();
    /* 0056243d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056243f: je 0x56253d */ if (fZ) goto L_0056253d;
L_00562445:; BB(0x00562445);
    /* 00562445: fld dword ptr [0x925a50] */ FPUSH(R_F32((u32)(0x925a50u)));
    /* 0056244b: lea edi, [esp + 0x18] */ r_edi = (u32)(r_esp+0x18u);
    /* 0056244f: mov eax, dword ptr [ebp + 0x38] */ r_eax = R32((u32)(r_ebp+0x38u));
    /* 00562452: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00562456: mov edx, dword ptr [ebp + 0x3c] */ r_edx = R32((u32)(r_ebp+0x3cu));
    /* 00562459: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 0056245d: fadd dword ptr [esp + 0x1c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x1cu));
    /* 00562461: mov esi, dword ptr [ebp + 0x40] */ r_esi = R32((u32)(r_ebp+0x40u));
    /* 00562464: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 00562468: mov dword ptr [esp + 0x20], esi */ W32((u32)(r_esp+0x20u), r_esi);
    /* 0056246c: lea ebx, [ebp + 0x38] */ r_ebx = (u32)(r_ebp+0x38u);
    /* 0056246f: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00562471: add ebp, 0x128 */ {  u32 a = r_ebp; u32 b = 0x128u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00562477: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00562478: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00562479: call 0x7806dc */ r_esp -= 4; W32(r_esp, 0x56247eu); f_007806dc();
    /* 0056247e: mov edi, eax */ r_edi = r_eax;
    /* 00562480: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00562483: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00562485: je 0x562523 */ if (fZ) goto L_00562523;
L_0056248b:; BB(0x0056248b);
    /* 0056248b: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 0056248d: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00562490: je 0x562523 */ if (fZ) goto L_00562523;
L_00562496:; BB(0x00562496);
    /* 00562496: push 0x49 */ { u32 v = 0x49u; r_esp -= 4; W32(r_esp, v); }
    /* 00562498: mov edx, dword ptr [edi + 4] */ r_edx = R32((u32)(r_edi+0x4u));
    /* 0056249b: add edx, 0x38 */ {  u32 a = r_edx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0056249e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056249f: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5624a4u); f_0050b510();
    /* 005624a4: mov esi, eax */ r_esi = r_eax;
    /* 005624a6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005624a9: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005624ab: je 0x5624ee */ if (fZ) goto L_005624ee;
L_005624ad:; BB(0x005624ad);
    /* 005624ad: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005624af: call 0x50c094 */ r_esp -= 4; W32(r_esp, 0x5624b4u); f_0050c094();
    /* 005624b4: mov ebp, eax */ r_ebp = r_eax;
    /* 005624b6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005624b9: call 0x50c08c */ r_esp -= 4; W32(r_esp, 0x5624beu); f_0050c08c();
    /* 005624be: movzx edx, word ptr [esi + 0x2c] */ r_edx = (u32)R16((u32)(r_esi+0x2cu));
    /* 005624c2: mov dword ptr [esi + 0x58], 0 */ W32((u32)(r_esi+0x58u), 0x0u);
    /* 005624c9: mov dword ptr [esi + 0x50], ebp */ W32((u32)(r_esi+0x50u), r_ebp);
    /* 005624cc: mov dword ptr [esi + 0x54], eax */ W32((u32)(r_esi+0x54u), r_eax);
    /* 005624cf: mov dword ptr [esi + 0x60], 0x3f800000 */ W32((u32)(r_esi+0x60u), 0x3f800000u);
    /* 005624d6: or edx, 0xffff0600 */ {  u32 a = r_edx; u32 b = 0xffff0600u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 005624dc: mov word ptr [esi + 0x2c], dx */ W16((u32)(r_esi+0x2cu), (u16)r_edx);
    /* 005624e0: mov dword ptr [esi + 0x44], 0x40400000 */ W32((u32)(r_esi+0x44u), 0x40400000u);
    /* 005624e7: mov dword ptr [esi + 0x48], 0x3f800000 */ W32((u32)(r_esi+0x48u), 0x3f800000u);
L_005624ee:; BB(0x005624ee);
    /* 005624ee: push 0xa4 */ { u32 v = 0xa4u; r_esp -= 4; W32(r_esp, v); }
    /* 005624f3: mov eax, dword ptr [edi + 4] */ r_eax = R32((u32)(r_edi+0x4u));
    /* 005624f6: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005624f9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005624fa: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5624ffu); f_0050b510();
    /* 005624ff: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00562502: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00562504: je 0x562514 */ if (fZ) goto L_00562514;
L_00562506:; BB(0x00562506);
    /* 00562506: mov dword ptr [eax + 0x44], 0x40400000 */ W32((u32)(r_eax+0x44u), 0x40400000u);
    /* 0056250d: mov dword ptr [eax + 0x48], 0x3fc00000 */ W32((u32)(r_eax+0x48u), 0x3fc00000u);
L_00562514:; BB(0x00562514);
    /* 00562514: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00562515: call 0x578bac */ r_esp -= 4; W32(r_esp, 0x56251au); f_00578bac();
    /* 0056251a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0056251b: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0056251e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0056251f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00562520: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00562521: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00562522: ret  */ FN_RET(0x00562428); r_esp += 4; return;
L_00562523:; BB(0x00562523);
    /* 00562523: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00562525: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00562526: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00562527: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00562528: push 0x24a */ { u32 v = 0x24au; r_esp -= 4; W32(r_esp, v); }
    /* 0056252d: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x562532u); f_00814298();
    /* 00562532: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00562535: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00562538: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00562539: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056253a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0056253b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0056253c: ret  */ FN_RET(0x00562428); r_esp += 4; return;
L_0056253d:; BB(0x0056253d);
    /* 0056253d: push 0x41b80000 */ { u32 v = 0x41b80000u; r_esp -= 4; W32(r_esp, v); }
    /* 00562542: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00562544: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x562549u); f_007aaa30();
    /* 00562549: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056254b: je 0x562649 */ if (fZ) goto L_00562649;
L_00562551:; BB(0x00562551);
    /* 00562551: fld dword ptr [0x925a50] */ FPUSH(R_F32((u32)(0x925a50u)));
    /* 00562557: lea edi, [esp + 0xc] */ r_edi = (u32)(r_esp+0xcu);
    /* 0056255b: mov eax, dword ptr [ebp + 0x38] */ r_eax = R32((u32)(r_ebp+0x38u));
    /* 0056255e: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 00562562: mov edx, dword ptr [ebp + 0x3c] */ r_edx = R32((u32)(r_ebp+0x3cu));
    /* 00562565: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 00562569: fadd dword ptr [esp + 0x10] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x10u));
    /* 0056256d: mov esi, dword ptr [ebp + 0x40] */ r_esi = R32((u32)(r_ebp+0x40u));
    /* 00562570: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00562574: mov dword ptr [esp + 0x14], esi */ W32((u32)(r_esp+0x14u), r_esi);
    /* 00562578: lea ebx, [ebp + 0x38] */ r_ebx = (u32)(r_ebp+0x38u);
    /* 0056257b: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0056257d: add ebp, 0x128 */ {  u32 a = r_ebp; u32 b = 0x128u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00562583: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00562584: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00562585: call 0x7806dc */ r_esp -= 4; W32(r_esp, 0x56258au); f_007806dc();
    /* 0056258a: mov edi, eax */ r_edi = r_eax;
    /* 0056258c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056258f: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00562591: je 0x56262f */ if (fZ) goto L_0056262f;
L_00562597:; BB(0x00562597);
    /* 00562597: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 00562599: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0056259c: je 0x56262f */ if (fZ) goto L_0056262f;
L_005625a2:; BB(0x005625a2);
    /* 005625a2: push 0x49 */ { u32 v = 0x49u; r_esp -= 4; W32(r_esp, v); }
    /* 005625a4: mov edx, dword ptr [edi + 4] */ r_edx = R32((u32)(r_edi+0x4u));
    /* 005625a7: add edx, 0x38 */ {  u32 a = r_edx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005625aa: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005625ab: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5625b0u); f_0050b510();
    /* 005625b0: mov esi, eax */ r_esi = r_eax;
    /* 005625b2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005625b5: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005625b7: je 0x5625fa */ if (fZ) goto L_005625fa;
L_005625b9:; BB(0x005625b9);
    /* 005625b9: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005625bb: call 0x50c094 */ r_esp -= 4; W32(r_esp, 0x5625c0u); f_0050c094();
    /* 005625c0: mov ebp, eax */ r_ebp = r_eax;
    /* 005625c2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005625c5: call 0x50c08c */ r_esp -= 4; W32(r_esp, 0x5625cau); f_0050c08c();
    /* 005625ca: movzx edx, word ptr [esi + 0x2c] */ r_edx = (u32)R16((u32)(r_esi+0x2cu));
    /* 005625ce: mov dword ptr [esi + 0x58], 0 */ W32((u32)(r_esi+0x58u), 0x0u);
    /* 005625d5: mov dword ptr [esi + 0x50], ebp */ W32((u32)(r_esi+0x50u), r_ebp);
    /* 005625d8: mov dword ptr [esi + 0x54], eax */ W32((u32)(r_esi+0x54u), r_eax);
    /* 005625db: mov dword ptr [esi + 0x60], 0x3f800000 */ W32((u32)(r_esi+0x60u), 0x3f800000u);
    /* 005625e2: or edx, 0xffff0600 */ {  u32 a = r_edx; u32 b = 0xffff0600u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 005625e8: mov word ptr [esi + 0x2c], dx */ W16((u32)(r_esi+0x2cu), (u16)r_edx);
    /* 005625ec: mov dword ptr [esi + 0x44], 0x40400000 */ W32((u32)(r_esi+0x44u), 0x40400000u);
    /* 005625f3: mov dword ptr [esi + 0x48], 0x3f800000 */ W32((u32)(r_esi+0x48u), 0x3f800000u);
L_005625fa:; BB(0x005625fa);
    /* 005625fa: push 0xa4 */ { u32 v = 0xa4u; r_esp -= 4; W32(r_esp, v); }
    /* 005625ff: mov eax, dword ptr [edi + 4] */ r_eax = R32((u32)(r_edi+0x4u));
    /* 00562602: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00562605: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00562606: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x56260bu); f_0050b510();
    /* 0056260b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056260e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00562610: je 0x562620 */ if (fZ) goto L_00562620;
L_00562612:; BB(0x00562612);
    /* 00562612: mov dword ptr [eax + 0x44], 0x40400000 */ W32((u32)(r_eax+0x44u), 0x40400000u);
    /* 00562619: mov dword ptr [eax + 0x48], 0x3fc00000 */ W32((u32)(r_eax+0x48u), 0x3fc00000u);
L_00562620:; BB(0x00562620);
    /* 00562620: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00562621: call 0x578bac */ r_esp -= 4; W32(r_esp, 0x562626u); f_00578bac();
    /* 00562626: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00562627: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0056262a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0056262b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056262c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0056262d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0056262e: ret  */ FN_RET(0x00562428); r_esp += 4; return;
L_0056262f:; BB(0x0056262f);
    /* 0056262f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00562631: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00562632: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00562633: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00562634: push 0x24b */ { u32 v = 0x24bu; r_esp -= 4; W32(r_esp, v); }
    /* 00562639: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x56263eu); f_00814298();
    /* 0056263e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00562641: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00562644: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00562645: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00562646: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00562647: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00562648: ret  */ FN_RET(0x00562428); r_esp += 4; return;
L_00562649:; BB(0x00562649);
    /* 00562649: push 0x42200000 */ { u32 v = 0x42200000u; r_esp -= 4; W32(r_esp, v); }
    /* 0056264e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00562650: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x562655u); f_007aaa30();
    /* 00562655: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00562657: je 0x56274b */ if (fZ) goto L_0056274b;
L_0056265d:; BB(0x0056265d);
    /* 0056265d: fld dword ptr [0x925a50] */ FPUSH(R_F32((u32)(0x925a50u)));
    /* 00562663: lea edi, [esp] */ r_edi = (u32)(r_esp);
    /* 00562666: mov eax, dword ptr [ebp + 0x38] */ r_eax = R32((u32)(r_ebp+0x38u));
    /* 00562669: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0056266c: mov edx, dword ptr [ebp + 0x3c] */ r_edx = R32((u32)(r_ebp+0x3cu));
    /* 0056266f: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00562673: fadd dword ptr [esp + 4] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x4u));
    /* 00562677: mov esi, dword ptr [ebp + 0x40] */ r_esi = R32((u32)(r_ebp+0x40u));
    /* 0056267a: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0056267e: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 00562682: lea ebx, [ebp + 0x38] */ r_ebx = (u32)(r_ebp+0x38u);
    /* 00562685: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00562687: add ebp, 0x128 */ {  u32 a = r_ebp; u32 b = 0x128u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0056268d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056268e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0056268f: call 0x7806dc */ r_esp -= 4; W32(r_esp, 0x562694u); f_007806dc();
    /* 00562694: mov edi, eax */ r_edi = r_eax;
    /* 00562696: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00562699: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056269b: je 0x562739 */ if (fZ) goto L_00562739;
L_005626a1:; BB(0x005626a1);
    /* 005626a1: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 005626a3: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005626a6: je 0x562739 */ if (fZ) goto L_00562739;
L_005626ac:; BB(0x005626ac);
    /* 005626ac: push 0x49 */ { u32 v = 0x49u; r_esp -= 4; W32(r_esp, v); }
    /* 005626ae: mov edx, dword ptr [edi + 4] */ r_edx = R32((u32)(r_edi+0x4u));
    /* 005626b1: add edx, 0x38 */ {  u32 a = r_edx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005626b4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005626b5: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5626bau); f_0050b510();
    /* 005626ba: mov esi, eax */ r_esi = r_eax;
    /* 005626bc: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005626bf: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005626c1: je 0x562704 */ if (fZ) goto L_00562704;
L_005626c3:; BB(0x005626c3);
    /* 005626c3: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005626c5: call 0x50c094 */ r_esp -= 4; W32(r_esp, 0x5626cau); f_0050c094();
    /* 005626ca: mov ebp, eax */ r_ebp = r_eax;
    /* 005626cc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005626cf: call 0x50c08c */ r_esp -= 4; W32(r_esp, 0x5626d4u); f_0050c08c();
    /* 005626d4: movzx edx, word ptr [esi + 0x2c] */ r_edx = (u32)R16((u32)(r_esi+0x2cu));
    /* 005626d8: mov dword ptr [esi + 0x58], 0 */ W32((u32)(r_esi+0x58u), 0x0u);
    /* 005626df: mov dword ptr [esi + 0x50], ebp */ W32((u32)(r_esi+0x50u), r_ebp);
    /* 005626e2: mov dword ptr [esi + 0x54], eax */ W32((u32)(r_esi+0x54u), r_eax);
    /* 005626e5: mov dword ptr [esi + 0x60], 0x3f800000 */ W32((u32)(r_esi+0x60u), 0x3f800000u);
    /* 005626ec: or edx, 0xffff0600 */ {  u32 a = r_edx; u32 b = 0xffff0600u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 005626f2: mov word ptr [esi + 0x2c], dx */ W16((u32)(r_esi+0x2cu), (u16)r_edx);
    /* 005626f6: mov dword ptr [esi + 0x44], 0x40400000 */ W32((u32)(r_esi+0x44u), 0x40400000u);
    /* 005626fd: mov dword ptr [esi + 0x48], 0x3f800000 */ W32((u32)(r_esi+0x48u), 0x3f800000u);
L_00562704:; BB(0x00562704);
    /* 00562704: push 0xa4 */ { u32 v = 0xa4u; r_esp -= 4; W32(r_esp, v); }
    /* 00562709: mov eax, dword ptr [edi + 4] */ r_eax = R32((u32)(r_edi+0x4u));
    /* 0056270c: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0056270f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00562710: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x562715u); f_0050b510();
    /* 00562715: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00562718: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056271a: je 0x56272a */ if (fZ) goto L_0056272a;
L_0056271c:; BB(0x0056271c);
    /* 0056271c: mov dword ptr [eax + 0x44], 0x40400000 */ W32((u32)(r_eax+0x44u), 0x40400000u);
    /* 00562723: mov dword ptr [eax + 0x48], 0x3fc00000 */ W32((u32)(r_eax+0x48u), 0x3fc00000u);
L_0056272a:; BB(0x0056272a);
    /* 0056272a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0056272b: call 0x578bac */ r_esp -= 4; W32(r_esp, 0x562730u); f_00578bac();
    /* 00562730: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00562731: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00562734: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00562735: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00562736: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00562737: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00562738: ret  */ FN_RET(0x00562428); r_esp += 4; return;
L_00562739:; BB(0x00562739);
    /* 00562739: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0056273b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056273c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056273d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0056273e: push 0x24c */ { u32 v = 0x24cu; r_esp -= 4; W32(r_esp, v); }
    /* 00562743: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x562748u); f_00814298();
    /* 00562748: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0056274b:; BB(0x0056274b);
    /* 0056274b: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0056274e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0056274f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00562750: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00562751: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00562752: ret  */ FN_RET(0x00562428); r_esp += 4; return;
}

void f_00562754(void) /* sub_562754 */
{
    FN_ENTER(0x00562754);
    /* 00562754: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00562755: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00562756: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00562757: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00562758: mov edi, ecx */ r_edi = r_ecx;
    /* 0056275a: mov edx, dword ptr [edi + 0xa4] */ r_edx = R32((u32)(r_edi+0xa4u));
    /* 00562760: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 00562763: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00562766: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 00562769: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0056276c: and eax, 0xf9dbffff */ {  u32 a = r_eax; u32 b = 0xf9dbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00562771: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 00562774: mov ecx, edi */ r_ecx = r_edi;
    /* 00562776: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x56277bu); f_00770738();
    /* 0056277b: mov esi, eax */ r_esi = r_eax;
    /* 0056277d: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0056277f: je 0x5629c7 */ if (fZ) goto L_005629c7;
L_00562785:; BB(0x00562785);
    /* 00562785: movsx edx, word ptr [edi + 0x330] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x330u));
    /* 0056278c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056278e: je 0x5628f5 */ if (fZ) goto L_005628f5;
L_00562794:; BB(0x00562794);
    /* 00562794: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00562797: jne 0x5628c8 */ if (!fZ) goto L_005628c8;
L_0056279d:; BB(0x0056279d);
    /* 0056279d: mov edx, dword ptr [0xa73ce4] */ r_edx = R32((u32)(0xa73ce4u));
    /* 005627a3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005627a5: fld dword ptr [edx + 8] */ FPUSH(R_F32((u32)(r_edx+0x8u)));
    /* 005627a8: fadd dword ptr [edi + 0x3a8] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x3a8u));
    /* 005627ae: mov edx, dword ptr [edx + 8] */ r_edx = R32((u32)(r_edx+0x8u));
    /* 005627b1: mov ebx, dword ptr [edi + 0x358] */ r_ebx = R32((u32)(r_edi+0x358u));
    /* 005627b7: fstp dword ptr [edi + 0x3a8] */ W_F32((u32)(r_edi+0x3a8u), ST(0)); FPOP();
    /* 005627bd: push dword ptr [esi + 0x308] */ { u32 v = R32((u32)(r_esi+0x308u)); r_esp -= 4; W32(r_esp, v); }
    /* 005627c3: mov ecx, edi */ r_ecx = r_edi;
    /* 005627c5: push dword ptr [esi + 0x304] */ { u32 v = R32((u32)(r_esi+0x304u)); r_esp -= 4; W32(r_esp, v); }
    /* 005627cb: push dword ptr [esi + 0x300] */ { u32 v = R32((u32)(r_esi+0x300u)); r_esp -= 4; W32(r_esp, v); }
    /* 005627d1: push dword ptr [ebx + 8] */ { u32 v = R32((u32)(r_ebx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005627d4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005627d5: call 0x772aa0 */ r_esp -= 4; W32(r_esp, 0x5627dau); f_00772aa0();
    /* 005627da: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005627dc: lea ebx, [edi + 0x38] */ r_ebx = (u32)(r_edi+0x38u);
    /* 005627df: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005627e0: lea edx, [edi + 0x2a4] */ r_edx = (u32)(r_edi+0x2a4u);
    /* 005627e6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005627e7: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x5627ecu); f_007a9180();
    /* 005627ec: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 005627f0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005627f3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005627f5: push dword ptr [esi + 0x308] */ { u32 v = R32((u32)(r_esi+0x308u)); r_esp -= 4; W32(r_esp, v); }
    /* 005627fb: mov ecx, edi */ r_ecx = r_edi;
    /* 005627fd: push dword ptr [esi + 0x304] */ { u32 v = R32((u32)(r_esi+0x304u)); r_esp -= 4; W32(r_esp, v); }
    /* 00562803: push dword ptr [esi + 0x300] */ { u32 v = R32((u32)(r_esi+0x300u)); r_esp -= 4; W32(r_esp, v); }
    /* 00562809: call 0x771c8c */ r_esp -= 4; W32(r_esp, 0x56280eu); f_00771c8c();
    /* 0056280e: mov esi, eax */ r_esi = r_eax;
    /* 00562810: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00562813: fcomp dword ptr [0xa73cbc] */ fx_compare(ST(0), R_F32((u32)(0xa73cbcu))); FPOP();
    /* 00562819: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0056281b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0056281c: jb 0x562833 */ if (fC) goto L_00562833;
L_0056281e:; BB(0x0056281e);
    /* 0056281e: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00562820: je 0x562833 */ if (fZ) goto L_00562833;
L_00562822:; BB(0x00562822);
    /* 00562822: mov eax, dword ptr [edi + 0x37c] */ r_eax = R32((u32)(r_edi+0x37cu));
    /* 00562828: or eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0056282b: mov dword ptr [edi + 0x37c], eax */ W32((u32)(r_edi+0x37cu), r_eax);
    /* 00562831: jmp 0x562895 */ goto L_00562895;
L_00562833:; BB(0x00562833);
    /* 00562833: fld dword ptr [edi + 0x3a8] */ FPUSH(R_F32((u32)(r_edi+0x3a8u)));
    /* 00562839: fcomp dword ptr [0x925a3c] */ fx_compare(ST(0), R_F32((u32)(0x925a3cu))); FPOP();
    /* 0056283f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00562841: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00562842: jae 0x562855 */ if (!fC) goto L_00562855;
L_00562844:; BB(0x00562844);
    /* 00562844: mov eax, dword ptr [edi + 0x37c] */ r_eax = R32((u32)(r_edi+0x37cu));
    /* 0056284a: and eax, 0xffffffef */ {  u32 a = r_eax; u32 b = 0xffffffefu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0056284d: mov dword ptr [edi + 0x37c], eax */ W32((u32)(r_edi+0x37cu), r_eax);
    /* 00562853: jmp 0x562895 */ goto L_00562895;
L_00562855:; BB(0x00562855);
    /* 00562855: mov dword ptr [edi + 0x3a8], 0 */ W32((u32)(r_edi+0x3a8u), 0x0u);
    /* 0056285f: mov ecx, edi */ r_ecx = r_edi;
    /* 00562861: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x562866u); f_007751b0();
    /* 00562866: fcomp dword ptr [edi + 0x39c] */ fx_compare(ST(0), R_F32((u32)(r_edi+0x39cu))); FPOP();
    /* 0056286c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0056286e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0056286f: jae 0x562886 */ if (!fC) goto L_00562886;
L_00562871:; BB(0x00562871);
    /* 00562871: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00562873: je 0x562886 */ if (fZ) goto L_00562886;
L_00562875:; BB(0x00562875);
    /* 00562875: mov eax, dword ptr [edi + 0x37c] */ r_eax = R32((u32)(r_edi+0x37cu));
    /* 0056287b: or eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0056287e: mov dword ptr [edi + 0x37c], eax */ W32((u32)(r_edi+0x37cu), r_eax);
    /* 00562884: jmp 0x562895 */ goto L_00562895;
L_00562886:; BB(0x00562886);
    /* 00562886: mov eax, dword ptr [edi + 0x37c] */ r_eax = R32((u32)(r_edi+0x37cu));
    /* 0056288c: and eax, 0xffffffef */ {  u32 a = r_eax; u32 b = 0xffffffefu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0056288f: mov dword ptr [edi + 0x37c], eax */ W32((u32)(r_edi+0x37cu), r_eax);
L_00562895:; BB(0x00562895);
    /* 00562895: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00562898: mov esi, dword ptr [edi + 0xa4] */ r_esi = R32((u32)(r_edi+0xa4u));
    /* 0056289e: mov edx, dword ptr [edi + 0x358] */ r_edx = R32((u32)(r_edi+0x358u));
    /* 005628a4: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 005628a7: fadd dword ptr [esi + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0xcu));
    /* 005628aa: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 005628ac: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 005628ae: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005628b0: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005628b1: jbe 0x562983 */ if ((fC||fZ)) goto L_00562983;
L_005628b7:; BB(0x005628b7);
    /* 005628b7: mov eax, 3 */ r_eax = 0x3u;
    /* 005628bc: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 005628c3: jmp 0x562983 */ goto L_00562983;
L_005628c8:; BB(0x005628c8);
    /* 005628c8: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005628cb: jne 0x5628ed */ if (!fZ) goto L_005628ed;
L_005628cd:; BB(0x005628cd);
    /* 005628cd: mov eax, dword ptr [edi + 0x37c] */ r_eax = R32((u32)(r_edi+0x37cu));
    /* 005628d3: and eax, 0xffffffef */ {  u32 a = r_eax; u32 b = 0xffffffefu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005628d6: mov dword ptr [edi + 0x37c], eax */ W32((u32)(r_edi+0x37cu), r_eax);
    /* 005628dc: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005628de: mov word ptr [edi + 0x330], dx */ W16((u32)(r_edi+0x330u), (u16)r_edx);
    /* 005628e5: lea ebx, [edi + 0x38] */ r_ebx = (u32)(r_edi+0x38u);
    /* 005628e8: jmp 0x562983 */ goto L_00562983;
L_005628ed:; BB(0x005628ed);
    /* 005628ed: lea ebx, [edi + 0x38] */ r_ebx = (u32)(r_edi+0x38u);
    /* 005628f0: jmp 0x562983 */ goto L_00562983;
L_005628f5:; BB(0x005628f5);
    /* 005628f5: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 005628f7: push dword ptr [esi + 0x308] */ { u32 v = R32((u32)(r_esi+0x308u)); r_esp -= 4; W32(r_esp, v); }
    /* 005628fd: mov ecx, edi */ r_ecx = r_edi;
    /* 005628ff: push dword ptr [esi + 0x304] */ { u32 v = R32((u32)(r_esi+0x304u)); r_esp -= 4; W32(r_esp, v); }
    /* 00562905: push dword ptr [esi + 0x300] */ { u32 v = R32((u32)(r_esi+0x300u)); r_esp -= 4; W32(r_esp, v); }
    /* 0056290b: call 0x771c8c */ r_esp -= 4; W32(r_esp, 0x562910u); f_00771c8c();
    /* 00562910: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00562912: jne 0x562946 */ if (!fZ) goto L_00562946;
L_00562914:; BB(0x00562914);
    /* 00562914: mov esi, dword ptr [edi + 0x30] */ r_esi = R32((u32)(r_edi+0x30u));
    /* 00562917: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00562919: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 00562920: mov edx, 0xb */ r_edx = 0xbu;
    /* 00562925: mov word ptr [edi + 0x32e], dx */ W16((u32)(r_edi+0x32eu), (u16)r_edx);
    /* 0056292c: mov ebx, 1 */ r_ebx = 0x1u;
    /* 00562931: mov word ptr [edi + 0xb8], bx */ W16((u32)(r_edi+0xb8u), (u16)r_ebx);
    /* 00562938: and esi, 0xf99bffff */ {  u32 a = r_esi; u32 b = 0xf99bffffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 0056293e: mov dword ptr [edi + 0x30], esi */ W32((u32)(r_edi+0x30u), r_esi);
    /* 00562941: lea ebx, [edi + 0x38] */ r_ebx = (u32)(r_edi+0x38u);
    /* 00562944: jmp 0x562983 */ goto L_00562983;
L_00562946:; BB(0x00562946);
    /* 00562946: push dword ptr [edi + 0x308] */ { u32 v = R32((u32)(r_edi+0x308u)); r_esp -= 4; W32(r_esp, v); }
    /* 0056294c: push dword ptr [edi + 0x304] */ { u32 v = R32((u32)(r_edi+0x304u)); r_esp -= 4; W32(r_esp, v); }
    /* 00562952: mov eax, 1 */ r_eax = 0x1u;
    /* 00562957: push dword ptr [edi + 0x300] */ { u32 v = R32((u32)(r_edi+0x300u)); r_esp -= 4; W32(r_esp, v); }
    /* 0056295d: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 00562964: mov ecx, edi */ r_ecx = r_edi;
    /* 00562966: call 0x771f1c */ r_esp -= 4; W32(r_esp, 0x56296bu); f_00771f1c();
    /* 0056296b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056296d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056296f: mov ecx, edi */ r_ecx = r_edi;
    /* 00562971: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x562976u); f_00772b44();
    /* 00562976: mov dword ptr [edi + 0x3a8], 0 */ W32((u32)(r_edi+0x3a8u), 0x0u);
    /* 00562980: lea ebx, [edi + 0x38] */ r_ebx = (u32)(r_edi+0x38u);
L_00562983:; BB(0x00562983);
    /* 00562983: mov ecx, edi */ r_ecx = r_edi;
    /* 00562985: call 0x560410 */ r_esp -= 4; W32(r_esp, 0x56298au); f_00560410();
    /* 0056298a: mov ecx, edi */ r_ecx = r_edi;
    /* 0056298c: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x562991u); f_007aa094();
    /* 00562991: mov ecx, edi */ r_ecx = r_edi;
    /* 00562993: call 0x5629cc */ r_esp -= 4; W32(r_esp, 0x562998u); f_005629cc();
    /* 00562998: mov ecx, edi */ r_ecx = r_edi;
    /* 0056299a: call 0x7b6894 */ r_esp -= 4; W32(r_esp, 0x56299fu); f_007b6894();
    /* 0056299f: mov ecx, edi */ r_ecx = r_edi;
    /* 005629a1: call 0x7b798c */ r_esp -= 4; W32(r_esp, 0x5629a6u); f_007b798c();
    /* 005629a6: mov ecx, edi */ r_ecx = r_edi;
    /* 005629a8: call 0x7b7e9c */ r_esp -= 4; W32(r_esp, 0x5629adu); f_007b7e9c();
    /* 005629ad: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005629af: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005629b1: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 005629b6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005629b7: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x5629bcu); f_00805608();
    /* 005629bc: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005629be: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005629bf: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x5629c4u); f_006946a8();
    /* 005629c4: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_005629c7:; BB(0x005629c7);
    /* 005629c7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005629c8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005629c9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005629ca: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005629cb: ret  */ FN_RET(0x00562754); r_esp += 4; return;
}

void f_005629cc(void) /* sub_5629CC */
{
    FN_ENTER(0x005629cc);
    /* 005629cc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005629cd: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005629d0: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005629d2: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005629d4: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x5629d9u); f_00770738();
    /* 005629d9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005629db: je 0x562a53 */ if (fZ) goto L_00562a53;
L_005629dd:; BB(0x005629dd);
    /* 005629dd: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 005629e0: mov edx, dword ptr [eax + 0x300] */ r_edx = R32((u32)(r_eax+0x300u));
    /* 005629e6: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 005629e9: mov edx, dword ptr [eax + 0x304] */ r_edx = R32((u32)(r_eax+0x304u));
    /* 005629ef: mov eax, dword ptr [eax + 0x308] */ r_eax = R32((u32)(r_eax+0x308u));
    /* 005629f5: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 005629f9: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 005629fd: lea edx, [ebp + 0x300] */ r_edx = (u32)(r_ebp+0x300u);
    /* 00562a03: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x562a08u); f_0082f9c4();
    /* 00562a08: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00562a0b: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 00562a0f: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 00562a11: fmul qword ptr [0x9259b8] */ ST(0) = ST(0) * R_F64((u32)(0x9259b8u));
    /* 00562a17: fdiv qword ptr [0x9259b0] */ ST(0) = ST(0) / R_F64((u32)(0x9259b0u));
    /* 00562a1d: fnstcw word ptr [esp + 0xc] */ W16((u32)(r_esp+0xcu), fcw);
    /* 00562a21: movzx eax, word ptr [esp + 0xc] */ r_eax = (u32)R16((u32)(r_esp+0xcu));
    /* 00562a26: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00562a2b: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00562a2f: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 00562a33: fistp dword ptr [esp + 0x1c] */ W32((u32)(r_esp+0x1cu), (u32)fx_int32(ST(0))); FPOP();
    /* 00562a37: fldcw word ptr [esp + 0xc] */ fcw = R16((u32)(r_esp+0xcu));
    /* 00562a3b: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 00562a3f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00562a40: push dword ptr [ebp + 0x60] */ { u32 v = R32((u32)(r_ebp+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 00562a43: call 0x7a900c */ r_esp -= 4; W32(r_esp, 0x562a48u); f_007a900c();
    /* 00562a48: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00562a4b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00562a4c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00562a4e: call 0x562a58 */ r_esp -= 4; W32(r_esp, 0x562a53u); f_00562a58();
L_00562a53:; BB(0x00562a53);
    /* 00562a53: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00562a56: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00562a57: ret  */ FN_RET(0x005629cc); r_esp += 4; return;
}

void f_00562a58(void) /* sub_562A58 */
{
    FN_ENTER(0x00562a58);
    /* 00562a58: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00562a59: mov edi, ecx */ r_edi = r_ecx;
    /* 00562a5b: mov ecx, 0x238e */ r_ecx = 0x238eu;
    /* 00562a60: mov edx, 0xffffdc72 */ r_edx = 0xffffdc72u;
    /* 00562a65: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00562a69: cmp eax, 0x238e */ {  u32 a = r_eax; u32 b = 0x238eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00562a6e: jg 0x562a72 */ if ((!fZ&&fS==fO)) goto L_00562a72;
L_00562a70:; BB(0x00562a70);
    /* 00562a70: mov ecx, eax */ r_ecx = r_eax;
L_00562a72:; BB(0x00562a72);
    /* 00562a72: cmp ecx, 0xffffdc72 */ {  u32 a = r_ecx; u32 b = 0xffffdc72u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00562a78: jg 0x562a7c */ if ((!fZ&&fS==fO)) goto L_00562a7c;
L_00562a7a:; BB(0x00562a7a);
    /* 00562a7a: mov ecx, edx */ r_ecx = r_edx;
L_00562a7c:; BB(0x00562a7c);
    /* 00562a7c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00562a7d: push dword ptr [edi + 0x3c4] */ { u32 v = R32((u32)(r_edi+0x3c4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00562a83: call 0x7a8cb8 */ r_esp -= 4; W32(r_esp, 0x562a88u); f_007a8cb8();
    /* 00562a88: mov dword ptr [edi + 0x3c4], eax */ W32((u32)(r_edi+0x3c4u), r_eax);
    /* 00562a8e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00562a91: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00562a92: ret 4 */ FN_RET(0x00562a58); r_esp += 8; return;
}

void f_00562a98(void) /* sub_562A98 */
{
    FN_ENTER(0x00562a98);
    /* 00562a98: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00562a99: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00562a9a: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00562a9d: mov esi, ecx */ r_esi = r_ecx;
    /* 00562a9f: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 00562aa2: and eax, 0xffdfffff */ {  u32 a = r_eax; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00562aa7: or eax, 0x6040000 */ {  u32 a = r_eax; u32 b = 0x6040000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00562aac: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 00562aaf: mov eax, dword ptr [esi + 0xa4] */ r_eax = R32((u32)(r_esi+0xa4u));
    /* 00562ab5: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 00562ab8: and edx, 0xfffffffe */ {  u32 a = r_edx; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00562abb: mov dword ptr [eax + 0x18], edx */ W32((u32)(r_eax+0x18u), r_edx);
    /* 00562abe: mov ecx, esi */ r_ecx = r_esi;
    /* 00562ac0: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x562ac5u); f_007aa094();
    /* 00562ac5: movsx eax, word ptr [esi + 0x330] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x330u));
    /* 00562acc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00562ace: je 0x562cbf */ if (fZ) goto L_00562cbf;
L_00562ad4:; BB(0x00562ad4);
    /* 00562ad4: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00562ad7: jne 0x562c76 */ if (!fZ) goto L_00562c76;
L_00562add:; BB(0x00562add);
    /* 00562add: mov eax, dword ptr [esi + 0x3c8] */ r_eax = R32((u32)(r_esi+0x3c8u));
    /* 00562ae3: lea ecx, [esi + 0x3c8] */ r_ecx = (u32)(r_esi+0x3c8u);
    /* 00562ae9: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x562aecu); call_ind(t); }
    /* 00562aec: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00562aee: je 0x562b14 */ if (fZ) goto L_00562b14;
L_00562af0:; BB(0x00562af0);
    /* 00562af0: fld dword ptr [0x925b0c] */ FPUSH(R_F32((u32)(0x925b0cu)));
    /* 00562af6: fld dword ptr [esi + 0x398] */ FPUSH(R_F32((u32)(r_esi+0x398u)));
    /* 00562afc: fld dword ptr [esi + 0x394] */ FPUSH(R_F32((u32)(r_esi+0x394u)));
    /* 00562b02: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 00562b04: fstp dword ptr [esi + 0x394] */ W_F32((u32)(r_esi+0x394u), ST(0)); FPOP();
    /* 00562b0a: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00562b0c: fstp dword ptr [esi + 0x398] */ W_F32((u32)(r_esi+0x398u), ST(0)); FPOP();
    /* 00562b12: jmp 0x562b1f */ goto L_00562b1f;
L_00562b14:; BB(0x00562b14);
    /* 00562b14: mov eax, dword ptr [0xa73cc0] */ r_eax = R32((u32)(0xa73cc0u));
    /* 00562b19: mov dword ptr [esi + 0xc0], eax */ W32((u32)(r_esi+0xc0u), r_eax);
L_00562b1f:; BB(0x00562b1f);
    /* 00562b1f: fld dword ptr [0x925a38] */ FPUSH(R_F32((u32)(0x925a38u)));
    /* 00562b25: fadd dword ptr [esi + 0xc4] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0xc4u));
    /* 00562b2b: fsub dword ptr [esi + 0xc8] */ ST(0) = ST(0) - R_F32((u32)(r_esi+0xc8u));
    /* 00562b31: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00562b32: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00562b35: mov ecx, esi */ r_ecx = r_esi;
    /* 00562b37: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x562b3cu); f_007aaa30();
    /* 00562b3c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00562b3e: jne 0x562b48 */ if (!fZ) goto L_00562b48;
L_00562b40:; BB(0x00562b40);
    /* 00562b40: lea ebx, [esi + 0x38] */ r_ebx = (u32)(r_esi+0x38u);
    /* 00562b43: jmp 0x562d05 */ goto L_00562d05;
L_00562b48:; BB(0x00562b48);
    /* 00562b48: mov edx, dword ptr [0xaae16c] */ r_edx = R32((u32)(0xaae16cu));
    /* 00562b4e: mov dword ptr [esi + 0x394], 0 */ W32((u32)(r_esi+0x394u), 0x0u);
    /* 00562b58: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00562b5a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00562b5c: mov dword ptr [esi + 0x398], 0 */ W32((u32)(r_esi+0x398u), 0x0u);
    /* 00562b66: jle 0x562d1a */ if ((fZ||fS!=fO)) goto L_00562d1a;
L_00562b6c:; BB(0x00562b6c);
    /* 00562b6c: mov dword ptr [esp + 0xc], edi */ W32((u32)(r_esp+0xcu), r_edi);
    /* 00562b70: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
    /* 00562b74: lea ebx, [esi + 0x38] */ r_ebx = (u32)(r_esi+0x38u);
    /* 00562b77: mov ebp, eax */ r_ebp = r_eax;
L_00562b79:; BB(0x00562b79);
    /* 00562b79: mov edi, dword ptr [ebp*4 + 0xaad720] */ r_edi = R32((u32)(r_ebp*4+0xaad720u));
    /* 00562b80: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00562b81: call 0x6ea71c */ r_esp -= 4; W32(r_esp, 0x562b86u); f_006ea71c();
    /* 00562b86: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00562b87: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00562b89: je 0x562c21 */ if (fZ) goto L_00562c21;
L_00562b8f:; BB(0x00562b8f);
    /* 00562b8f: movzx edx, word ptr [edi + 0x1c] */ r_edx = (u32)R16((u32)(r_edi+0x1cu));
    /* 00562b93: cmp edx, 0x1000 */ {  u32 a = r_edx; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00562b99: jge 0x562c21 */ if ((fS==fO)) goto L_00562c21;
L_00562b9f:; BB(0x00562b9f);
    /* 00562b9f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00562ba0: lea edx, [edi + 0x300] */ r_edx = (u32)(r_edi+0x300u);
    /* 00562ba6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00562ba7: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x562bacu); f_007a9180();
    /* 00562bac: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00562baf: mov edx, dword ptr [0xa73cec] */ r_edx = R32((u32)(0xa73cecu));
    /* 00562bb5: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 00562bb8: fld dword ptr [ecx + 0x10] */ FPUSH(R_F32((u32)(r_ecx+0x10u)));
    /* 00562bbb: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00562bbd: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00562bbf: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00562bc1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00562bc2: jb 0x562c21 */ if (fC) goto L_00562c21;
L_00562bc4:; BB(0x00562bc4);
    /* 00562bc4: movsx eax, word ptr [ecx] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx));
    /* 00562bc7: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00562bca: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 00562bcd: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00562bcf: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 00562bd3: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00562bd5: mov ecx, 0xffffffff */ r_ecx = 0xffffffffu;
    /* 00562bda: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 00562bde: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00562bdf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00562be0: mov ecx, edi */ r_ecx = r_edi;
    /* 00562be2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00562be3: push dword ptr [esp + 0x24] */ { u32 v = R32((u32)(r_esp+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 00562be7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00562be9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00562bea: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x562bedu); call_ind(t); }
    /* 00562bed: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00562bf1: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 00562bf3: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00562bf6: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 00562bfa: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00562bfe: mov ecx, edi */ r_ecx = r_edi;
    /* 00562c00: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 00562c03: call dword ptr [edx + 0x68] */ { u32 t = R32((u32)(r_edx+0x68u)); r_esp -= 4; W32(r_esp, 0x562c06u); call_ind(t); }
    /* 00562c06: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 00562c0a: fcomp dword ptr [0x925a34] */ fx_compare(ST(0), R_F32((u32)(0x925a34u))); FPOP();
    /* 00562c10: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00562c12: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00562c13: jbe 0x562c21 */ if ((fC||fZ)) goto L_00562c21;
L_00562c15:; BB(0x00562c15);
    /* 00562c15: mov edx, dword ptr [edi + 0x30] */ r_edx = R32((u32)(r_edi+0x30u));
    /* 00562c18: or edx, 0x600 */ {  u32 a = r_edx; u32 b = 0x600u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00562c1e: mov dword ptr [edi + 0x30], edx */ W32((u32)(r_edi+0x30u), r_edx);
L_00562c21:; BB(0x00562c21);
    /* 00562c21: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00562c24: cmp ebp, dword ptr [0xaae16c] */ {  u32 a = r_ebp; u32 b = R32((u32)(0xaae16cu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00562c2a: jl 0x562b79 */ if ((fS!=fO)) goto L_00562b79;
L_00562c30:; BB(0x00562c30);
    /* 00562c30: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
    /* 00562c34: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
L_00562c38:; BB(0x00562c38);
    /* 00562c38: mov ecx, esi */ r_ecx = r_esi;
    /* 00562c3a: call 0x561214 */ r_esp -= 4; W32(r_esp, 0x562c3fu); f_00561214();
    /* 00562c3f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00562c41: jne 0x562c4c */ if (!fZ) goto L_00562c4c;
L_00562c43:; BB(0x00562c43);
    /* 00562c43: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00562c44: call 0x578bac */ r_esp -= 4; W32(r_esp, 0x562c49u); f_00578bac();
    /* 00562c49: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00562c4a: jmp 0x562c5e */ goto L_00562c5e;
L_00562c4c:; BB(0x00562c4c);
    /* 00562c4c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00562c4e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00562c4f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00562c50: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00562c51: push 0x23f */ { u32 v = 0x23fu; r_esp -= 4; W32(r_esp, v); }
    /* 00562c56: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x562c5bu); f_00814298();
    /* 00562c5b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00562c5e:; BB(0x00562c5e);
    /* 00562c5e: mov ecx, esi */ r_ecx = r_esi;
    /* 00562c60: call 0x5611c8 */ r_esp -= 4; W32(r_esp, 0x562c65u); f_005611c8();
    /* 00562c65: mov eax, 3 */ r_eax = 0x3u;
    /* 00562c6a: mov word ptr [esi + 0x330], ax */ W16((u32)(r_esi+0x330u), (u16)r_eax);
    /* 00562c71: jmp 0x562d05 */ goto L_00562d05;
L_00562c76:; BB(0x00562c76);
    /* 00562c76: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00562c79: jne 0x562cba */ if (!fZ) goto L_00562cba;
L_00562c7b:; BB(0x00562c7b);
    /* 00562c7b: fld dword ptr [0x925a38] */ FPUSH(R_F32((u32)(0x925a38u)));
    /* 00562c81: fadd dword ptr [esi + 0xc4] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0xc4u));
    /* 00562c87: fsub dword ptr [esi + 0xc8] */ ST(0) = ST(0) - R_F32((u32)(r_esi+0xc8u));
    /* 00562c8d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00562c8e: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00562c91: mov ecx, esi */ r_ecx = r_esi;
    /* 00562c93: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x562c98u); f_007aaa30();
    /* 00562c98: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00562c9a: je 0x562cb5 */ if (fZ) goto L_00562cb5;
L_00562c9c:; BB(0x00562c9c);
    /* 00562c9c: mov eax, dword ptr [esi + 0x37c] */ r_eax = R32((u32)(r_esi+0x37cu));
    /* 00562ca2: and eax, 0xffff0000 */ {  u32 a = r_eax; u32 b = 0xffff0000u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00562ca7: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00562caa: mov dword ptr [esi + 0x37c], eax */ W32((u32)(r_esi+0x37cu), r_eax);
    /* 00562cb0: lea ebx, [esi + 0x38] */ r_ebx = (u32)(r_esi+0x38u);
    /* 00562cb3: jmp 0x562d05 */ goto L_00562d05;
L_00562cb5:; BB(0x00562cb5);
    /* 00562cb5: lea ebx, [esi + 0x38] */ r_ebx = (u32)(r_esi+0x38u);
    /* 00562cb8: jmp 0x562d05 */ goto L_00562d05;
L_00562cba:; BB(0x00562cba);
    /* 00562cba: lea ebx, [esi + 0x38] */ r_ebx = (u32)(r_esi+0x38u);
    /* 00562cbd: jmp 0x562d05 */ goto L_00562d05;
L_00562cbf:; BB(0x00562cbf);
    /* 00562cbf: mov eax, 1 */ r_eax = 0x1u;
    /* 00562cc4: mov word ptr [esi + 0x330], ax */ W16((u32)(r_esi+0x330u), (u16)r_eax);
    /* 00562ccb: mov edx, 5 */ r_edx = 0x5u;
    /* 00562cd0: mov word ptr [esi + 0xb8], dx */ W16((u32)(r_esi+0xb8u), (u16)r_edx);
    /* 00562cd7: lea ecx, [esi + 0x3c8] */ r_ecx = (u32)(r_esi+0x3c8u);
    /* 00562cdd: call 0x576c48 */ r_esp -= 4; W32(r_esp, 0x562ce2u); f_00576c48();
    /* 00562ce2: mov eax, dword ptr [0xa73cc4] */ r_eax = R32((u32)(0xa73cc4u));
    /* 00562ce7: mov dword ptr [esi + 0x398], 0x3f8ca8cb */ W32((u32)(r_esi+0x398u), 0x3f8ca8cbu);
    /* 00562cf1: mov dword ptr [esi + 0x394], eax */ W32((u32)(r_esi+0x394u), r_eax);
    /* 00562cf7: mov ecx, esi */ r_ecx = r_esi;
    /* 00562cf9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00562cfb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00562cfd: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x562d02u); f_00772b44();
    /* 00562d02: lea ebx, [esi + 0x38] */ r_ebx = (u32)(r_esi+0x38u);
L_00562d05:; BB(0x00562d05);
    /* 00562d05: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00562d07: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00562d09: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 00562d0e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00562d0f: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x562d14u); f_00805608();
    /* 00562d14: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00562d17: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00562d18: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00562d19: ret  */ FN_RET(0x00562a98); r_esp += 4; return;
L_00562d1a:; BB(0x00562d1a);
    /* 00562d1a: lea ebx, [esi + 0x38] */ r_ebx = (u32)(r_esi+0x38u);
    /* 00562d1d: jmp 0x562c38 */ goto L_00562c38;
}

void f_00562d24(void) /* sub_562D24 */
{
    FN_ENTER(0x00562d24);
    /* 00562d24: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00562d25: mov esi, ecx */ r_esi = r_ecx;
    /* 00562d27: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 00562d2a: and eax, 0xffdfffff */ {  u32 a = r_eax; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00562d2f: or eax, 0x6040000 */ {  u32 a = r_eax; u32 b = 0x6040000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00562d34: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 00562d37: mov eax, dword ptr [esi + 0xa4] */ r_eax = R32((u32)(r_esi+0xa4u));
    /* 00562d3d: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 00562d40: and edx, 0xfffffffe */ {  u32 a = r_edx; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00562d43: mov dword ptr [eax + 0x18], edx */ W32((u32)(r_eax+0x18u), r_edx);
    /* 00562d46: mov ecx, esi */ r_ecx = r_esi;
    /* 00562d48: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x562d4du); f_00770738();
    /* 00562d4d: movsx edx, word ptr [esi + 0x330] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x330u));
    /* 00562d54: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00562d56: je 0x562daa */ if (fZ) goto L_00562daa;
L_00562d58:; BB(0x00562d58);
    /* 00562d58: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00562d5b: jne 0x562d8f */ if (!fZ) goto L_00562d8f;
L_00562d5d:; BB(0x00562d5d);
    /* 00562d5d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00562d5f: je 0x562dc1 */ if (fZ) goto L_00562dc1;
L_00562d61:; BB(0x00562d61);
    /* 00562d61: add eax, 0x300 */ {  u32 a = r_eax; u32 b = 0x300u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00562d66: lea edx, [esi + 0x300] */ r_edx = (u32)(r_esi+0x300u);
    /* 00562d6c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00562d6d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00562d6e: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x562d73u); f_007a9180();
    /* 00562d73: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 00562d76: fcomp dword ptr [0x925a2c] */ fx_compare(ST(0), R_F32((u32)(0x925a2cu))); FPOP();
    /* 00562d7c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00562d7e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00562d7f: jae 0x562dc1 */ if (!fC) goto L_00562dc1;
L_00562d81:; BB(0x00562d81);
    /* 00562d81: mov eax, 3 */ r_eax = 0x3u;
    /* 00562d86: mov word ptr [esi + 0x330], ax */ W16((u32)(r_esi+0x330u), (u16)r_eax);
    /* 00562d8d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00562d8e: ret  */ FN_RET(0x00562d24); r_esp += 4; return;
L_00562d8f:; BB(0x00562d8f);
    /* 00562d8f: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00562d92: jne 0x562dc1 */ if (!fZ) goto L_00562dc1;
L_00562d94:; BB(0x00562d94);
    /* 00562d94: mov eax, dword ptr [esi + 0x37c] */ r_eax = R32((u32)(r_esi+0x37cu));
    /* 00562d9a: and eax, 0xffff0000 */ {  u32 a = r_eax; u32 b = 0xffff0000u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00562d9f: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00562da2: mov dword ptr [esi + 0x37c], eax */ W32((u32)(r_esi+0x37cu), r_eax);
    /* 00562da8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00562da9: ret  */ FN_RET(0x00562d24); r_esp += 4; return;
L_00562daa:; BB(0x00562daa);
    /* 00562daa: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00562dac: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00562dae: mov eax, 1 */ r_eax = 0x1u;
    /* 00562db3: mov word ptr [esi + 0x330], ax */ W16((u32)(r_esi+0x330u), (u16)r_eax);
    /* 00562dba: mov ecx, esi */ r_ecx = r_esi;
    /* 00562dbc: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x562dc1u); f_00772b44();
L_00562dc1:; BB(0x00562dc1);
    /* 00562dc1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00562dc2: ret  */ FN_RET(0x00562d24); r_esp += 4; return;
}

void f_00562dc4(void) /* sub_562DC4 */
{
    FN_ENTER(0x00562dc4);
    /* 00562dc4: fld dword ptr [0x925a28] */ FPUSH(R_F32((u32)(0x925a28u)));
    /* 00562dca: fadd dword ptr [ecx + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x3cu));
    /* 00562dcd: mov eax, dword ptr [ecx + 0x38] */ r_eax = R32((u32)(r_ecx+0x38u));
    /* 00562dd0: mov edx, dword ptr [ecx + 0x40] */ r_edx = R32((u32)(r_ecx+0x40u));
    /* 00562dd3: mov dword ptr [ecx + 0x300], eax */ W32((u32)(r_ecx+0x300u), r_eax);
    /* 00562dd9: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 00562de0: mov dword ptr [ecx + 0x308], edx */ W32((u32)(r_ecx+0x308u), r_edx);
    /* 00562de6: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00562de9: je 0x562dfc */ if (fZ) goto L_00562dfc;
L_00562deb:; BB(0x00562deb);
    /* 00562deb: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00562dee: je 0x562dfc */ if (fZ) goto L_00562dfc;
L_00562df0:; BB(0x00562df0);
    /* 00562df0: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00562df3: je 0x562dfc */ if (fZ) goto L_00562dfc;
L_00562df5:; BB(0x00562df5);
    /* 00562df5: fstp dword ptr [ecx + 0x304] */ W_F32((u32)(r_ecx+0x304u), ST(0)); FPOP();
    /* 00562dfb: ret  */ FN_RET(0x00562dc4); r_esp += 4; return;
L_00562dfc:; BB(0x00562dfc);
    /* 00562dfc: fld dword ptr [ecx + 0x394] */ FPUSH(R_F32((u32)(r_ecx+0x394u)));
    /* 00562e02: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00562e04: fstp dword ptr [ecx + 0x304] */ W_F32((u32)(r_ecx+0x304u), ST(0)); FPOP();
    /* 00562e0a: ret  */ FN_RET(0x00562dc4); r_esp += 4; return;
}

void f_00562e0c(void) /* sub_562E0C */
{
    FN_ENTER(0x00562e0c);
    /* 00562e0c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00562e0d: mov edi, ecx */ r_edi = r_ecx;
    /* 00562e0f: mov eax, dword ptr [edi + 0x388] */ r_eax = R32((u32)(r_edi+0x388u));
    /* 00562e15: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00562e17: je 0x562e4c */ if (fZ) goto L_00562e4c;
L_00562e19:; BB(0x00562e19);
    /* 00562e19: cmp eax, 0x107 */ {  u32 a = r_eax; u32 b = 0x107u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00562e1e: je 0x562e2e */ if (fZ) goto L_00562e2e;
L_00562e20:; BB(0x00562e20);
    /* 00562e20: cmp eax, 0x10e */ {  u32 a = r_eax; u32 b = 0x10eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00562e25: je 0x562e2e */ if (fZ) goto L_00562e2e;
L_00562e27:; BB(0x00562e27);
    /* 00562e27: mov ecx, edi */ r_ecx = r_edi;
    /* 00562e29: call 0x560b7c */ r_esp -= 4; W32(r_esp, 0x562e2eu); f_00560b7c();
L_00562e2e:; BB(0x00562e2e);
    /* 00562e2e: mov eax, dword ptr [edi + 0x37c] */ r_eax = R32((u32)(r_edi+0x37cu));
    /* 00562e34: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00562e36: je 0x562e4c */ if (fZ) goto L_00562e4c;
L_00562e38:; BB(0x00562e38);
    /* 00562e38: mov eax, dword ptr [edi + 0x388] */ r_eax = R32((u32)(r_edi+0x388u));
    /* 00562e3e: cmp eax, dword ptr [edi + 0x38c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edi+0x38cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00562e44: je 0x562e4c */ if (fZ) goto L_00562e4c;
L_00562e46:; BB(0x00562e46);
    /* 00562e46: mov dword ptr [edi + 0x38c], eax */ W32((u32)(r_edi+0x38cu), r_eax);
L_00562e4c:; BB(0x00562e4c);
    /* 00562e4c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00562e4d: ret  */ FN_RET(0x00562e0c); r_esp += 4; return;
}

void f_00562e50(void) /* sub_562E50 */
{
    FN_ENTER(0x00562e50);
    /* 00562e50: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00562e51: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00562e52: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00562e53: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00562e54: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00562e57: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00562e59: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x562e5eu); f_00807ac0();
    /* 00562e5e: cmp eax, 0x23 */ {  u32 a = r_eax; u32 b = 0x23u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00562e61: je 0x5630dc */ if (fZ) goto L_005630dc;
L_00562e67:; BB(0x00562e67);
    /* 00562e67: push 0x41f00000 */ { u32 v = 0x41f00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00562e6c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00562e6e: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00562e70: push 0x44160000 */ { u32 v = 0x44160000u; r_esp -= 4; W32(r_esp, v); }
    /* 00562e75: push 0x43960000 */ { u32 v = 0x43960000u; r_esp -= 4; W32(r_esp, v); }
    /* 00562e7a: call dword ptr [eax + 0x20] */ { u32 t = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, 0x562e7du); call_ind(t); }
    /* 00562e7d: mov edi, eax */ r_edi = r_eax;
L_00562e7f:; BB(0x00562e7f);
    /* 00562e7f: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00562e81: je 0x56302d */ if (fZ) goto L_0056302d;
L_00562e87:; BB(0x00562e87);
    /* 00562e87: lea esi, [ebx + 0x3e4] */ r_esi = (u32)(r_ebx+0x3e4u);
    /* 00562e8d: mov ecx, esi */ r_ecx = r_esi;
    /* 00562e8f: call 0x5771a4 */ r_esp -= 4; W32(r_esp, 0x562e94u); f_005771a4();
    /* 00562e94: lea edx, [ebx + 0x300] */ r_edx = (u32)(r_ebx+0x300u);
    /* 00562e9a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00562e9b: mov ecx, esi */ r_ecx = r_esi;
    /* 00562e9d: call 0x57725c */ r_esp -= 4; W32(r_esp, 0x562ea2u); f_0057725c();
    /* 00562ea2: mov ebp, eax */ r_ebp = r_eax;
    /* 00562ea4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00562ea5: call 0x794548 */ r_esp -= 4; W32(r_esp, 0x562eaau); f_00794548();
    /* 00562eaa: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00562eab: mov ecx, dword ptr [ebx + 0x24] */ r_ecx = R32((u32)(r_ebx+0x24u));
    /* 00562eae: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x562eb3u); f_00829cc8();
    /* 00562eb3: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00562eb5: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x562ebau); f_0082d990();
    /* 00562eba: mov edx, dword ptr [ebx + 0x38] */ r_edx = R32((u32)(r_ebx+0x38u));
    /* 00562ebd: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 00562ec0: mov edx, dword ptr [ebx + 0x3c] */ r_edx = R32((u32)(r_ebx+0x3cu));
    /* 00562ec3: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00562ec7: mov edx, dword ptr [ebx + 0x40] */ r_edx = R32((u32)(r_ebx+0x40u));
    /* 00562eca: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00562ece: movsx edx, word ptr [ebx + 0x32e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x32eu));
    /* 00562ed5: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00562ed8: je 0x562ee4 */ if (fZ) goto L_00562ee4;
L_00562eda:; BB(0x00562eda);
    /* 00562eda: cmp edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00562edd: je 0x562ee4 */ if (fZ) goto L_00562ee4;
L_00562edf:; BB(0x00562edf);
    /* 00562edf: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00562ee2: jne 0x562ef2 */ if (!fZ) goto L_00562ef2;
L_00562ee4:; BB(0x00562ee4);
    /* 00562ee4: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00562ee8: fadd dword ptr [ebx + 0x394] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x394u));
    /* 00562eee: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
L_00562ef2:; BB(0x00562ef2);
    /* 00562ef2: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 00562ef5: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00562ef7: call 0x8316b4 */ r_esp -= 4; W32(r_esp, 0x562efcu); f_008316b4();
    /* 00562efc: mov edx, dword ptr [ebx + 0x60] */ r_edx = R32((u32)(r_ebx+0x60u));
    /* 00562eff: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00562f01: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x562f06u); f_0082d8bc();
    /* 00562f06: lea edx, [ebx + 0x68] */ r_edx = (u32)(r_ebx+0x68u);
    /* 00562f09: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00562f0b: call 0x83c0a0 */ r_esp -= 4; W32(r_esp, 0x562f10u); f_0083c0a0();
    /* 00562f10: mov edx, dword ptr [ebx + 0x3c4] */ r_edx = R32((u32)(r_ebx+0x3c4u));
    /* 00562f16: mov dword ptr [0xa73cf8], 0 */ W32((u32)(0xa73cf8u), 0x0u);
    /* 00562f20: mov ecx, 0x5601f4 */ r_ecx = 0x5601f4u;
    /* 00562f25: mov dword ptr [0xa73cf4], edx */ W32((u32)(0xa73cf4u), r_edx);
    /* 00562f2b: call 0x82fac4 */ r_esp -= 4; W32(r_esp, 0x562f30u); f_0082fac4();
    /* 00562f30: call 0x578b38 */ r_esp -= 4; W32(r_esp, 0x562f35u); f_00578b38();
    /* 00562f35: movsx edx, word ptr [ebx + 0x32e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x32eu));
    /* 00562f3c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00562f3e: je 0x562ffa */ if (fZ) goto L_00562ffa;
L_00562f44:; BB(0x00562f44);
    /* 00562f44: jle 0x562f6d */ if ((fZ||fS!=fO)) goto L_00562f6d;
L_00562f46:; BB(0x00562f46);
    /* 00562f46: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00562f49: jg 0x5630b6 */ if ((!fZ&&fS==fO)) goto L_005630b6;
L_00562f4f:; BB(0x00562f4f);
    /* 00562f4f: mov eax, dword ptr [ebx + 0x3c8] */ r_eax = R32((u32)(r_ebx+0x3c8u));
    /* 00562f55: lea ebp, [ebx + 0x3c8] */ r_ebp = (u32)(r_ebx+0x3c8u);
    /* 00562f5b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00562f5d: call dword ptr [eax + 0x20] */ { u32 t = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, 0x562f60u); call_ind(t); }
    /* 00562f60: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00562f62: jne 0x56303c */ if (!fZ) goto L_0056303c;
L_00562f68:; BB(0x00562f68);
    /* 00562f68: jmp 0x562ffa */ goto L_00562ffa;
L_00562f6d:; BB(0x00562f6d);
    /* 00562f6d: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00562f6f: jne 0x562f83 */ if (!fZ) goto L_00562f83;
L_00562f71:; BB(0x00562f71);
    /* 00562f71: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00562f74: je 0x5630c4 */ if (fZ) goto L_005630c4;
L_00562f7a:; BB(0x00562f7a);
    /* 00562f7a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00562f7c: call 0x7aa7b8 */ r_esp -= 4; W32(r_esp, 0x562f81u); f_007aa7b8();
    /* 00562f81: jmp 0x562ffa */ goto L_00562ffa;
L_00562f83:; BB(0x00562f83);
    /* 00562f83: mov edx, dword ptr [0xaf034c] */ r_edx = R32((u32)(0xaf034cu));
    /* 00562f89: mov ebp, dword ptr [0xaf0360] */ r_ebp = R32((u32)(0xaf0360u));
    /* 00562f8f: mov dword ptr [0xaab518], edx */ W32((u32)(0xaab518u), r_edx);
    /* 00562f95: mov edx, dword ptr [0xaf0364] */ r_edx = R32((u32)(0xaf0364u));
    /* 00562f9b: mov dword ptr [0xaab504], ebp */ W32((u32)(0xaab504u), r_ebp);
    /* 00562fa1: mov ecx, esi */ r_ecx = r_esi;
    /* 00562fa3: mov dword ptr [0xaab500], edx */ W32((u32)(0xaab500u), r_edx);
    /* 00562fa9: mov edx, dword ptr [ebx + 0x3e4] */ r_edx = R32((u32)(r_ebx+0x3e4u));
    /* 00562faf: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x562fb2u); call_ind(t); }
    /* 00562fb2: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00562fb4: call 0x8173d0 */ r_esp -= 4; W32(r_esp, 0x562fb9u); f_008173d0();
    /* 00562fb9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00562fbb: jne 0x562fcd */ if (!fZ) goto L_00562fcd;
L_00562fbd:; BB(0x00562fbd);
    /* 00562fbd: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00562fc0: je 0x5630d0 */ if (fZ) goto L_005630d0;
L_00562fc6:; BB(0x00562fc6);
    /* 00562fc6: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00562fc8: call 0x7aa7b8 */ r_esp -= 4; W32(r_esp, 0x562fcdu); f_007aa7b8();
L_00562fcd:; BB(0x00562fcd);
    /* 00562fcd: mov eax, dword ptr [ebx + 0x3e4] */ r_eax = R32((u32)(r_ebx+0x3e4u));
    /* 00562fd3: mov ecx, esi */ r_ecx = r_esi;
    /* 00562fd5: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x562fd8u); call_ind(t); }
    /* 00562fd8: mov eax, dword ptr [0xaab504] */ r_eax = R32((u32)(0xaab504u));
    /* 00562fdd: mov edx, dword ptr [0xaab500] */ r_edx = R32((u32)(0xaab500u));
    /* 00562fe3: mov ebp, dword ptr [0xaab518] */ r_ebp = R32((u32)(0xaab518u));
    /* 00562fe9: mov dword ptr [0xaf0360], eax */ W32((u32)(0xaf0360u), r_eax);
    /* 00562fee: mov dword ptr [0xaf0364], edx */ W32((u32)(0xaf0364u), r_edx);
    /* 00562ff4: mov dword ptr [0xaf034c], ebp */ W32((u32)(0xaf034cu), r_ebp);
L_00562ffa:; BB(0x00562ffa);
    /* 00562ffa: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x562fffu); f_0082dab0();
    /* 00562fff: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00563001: call 0x82fac4 */ r_esp -= 4; W32(r_esp, 0x563006u); f_0082fac4();
    /* 00563006: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x56300bu); f_0082da80();
    /* 0056300b: call 0x794750 */ r_esp -= 4; W32(r_esp, 0x563010u); f_00794750();
    /* 00563010: mov eax, dword ptr [ebx + 0x37c] */ r_eax = R32((u32)(r_ebx+0x37cu));
    /* 00563016: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00563018: jne 0x563034 */ if (!fZ) goto L_00563034;
L_0056301a:; BB(0x0056301a);
    /* 0056301a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0056301c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056301d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056301e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00563020: call 0x779d4c */ r_esp -= 4; W32(r_esp, 0x563025u); f_00779d4c();
    /* 00563025: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00563028: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00563029: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056302a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0056302b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0056302c: ret  */ FN_RET(0x00562e50); r_esp += 4; return;
L_0056302d:; BB(0x0056302d);
    /* 0056302d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0056302f: call 0x562dc4 */ r_esp -= 4; W32(r_esp, 0x563034u); f_00562dc4();
L_00563034:; BB(0x00563034);
    /* 00563034: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00563037: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00563038: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00563039: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0056303a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0056303b: ret  */ FN_RET(0x00562e50); r_esp += 4; return;
L_0056303c:; BB(0x0056303c);
    /* 0056303c: mov esi, dword ptr [0xaf034c] */ r_esi = R32((u32)(0xaf034cu));
    /* 00563042: mov eax, dword ptr [0xaf0360] */ r_eax = R32((u32)(0xaf0360u));
    /* 00563047: mov edx, dword ptr [0xaf0364] */ r_edx = R32((u32)(0xaf0364u));
    /* 0056304d: mov dword ptr [0xaab518], esi */ W32((u32)(0xaab518u), r_esi);
    /* 00563053: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00563055: or esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00563058: mov dword ptr [0xaab504], eax */ W32((u32)(0xaab504u), r_eax);
    /* 0056305d: mov dword ptr [0xaab500], edx */ W32((u32)(0xaab500u), r_edx);
    /* 00563063: mov dword ptr [0xaf034c], esi */ W32((u32)(0xaf034cu), r_esi);
    /* 00563069: mov edi, dword ptr [ebx + 0x3c8] */ r_edi = R32((u32)(r_ebx+0x3c8u));
    /* 0056306f: call dword ptr [edi + 0x18] */ { u32 t = R32((u32)(r_edi+0x18u)); r_esp -= 4; W32(r_esp, 0x563072u); call_ind(t); }
    /* 00563072: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00563074: call 0x8173d0 */ r_esp -= 4; W32(r_esp, 0x563079u); f_008173d0();
    /* 00563079: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056307b: jne 0x563084 */ if (!fZ) goto L_00563084;
L_0056307d:; BB(0x0056307d);
    /* 0056307d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0056307f: call 0x7aa668 */ r_esp -= 4; W32(r_esp, 0x563084u); f_007aa668();
L_00563084:; BB(0x00563084);
    /* 00563084: mov eax, dword ptr [ebx + 0x3c8] */ r_eax = R32((u32)(r_ebx+0x3c8u));
    /* 0056308a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0056308c: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x56308fu); call_ind(t); }
    /* 0056308f: mov eax, dword ptr [0xaab504] */ r_eax = R32((u32)(0xaab504u));
    /* 00563094: mov edx, dword ptr [0xaab500] */ r_edx = R32((u32)(0xaab500u));
    /* 0056309a: mov ebp, dword ptr [0xaab518] */ r_ebp = R32((u32)(0xaab518u));
    /* 005630a0: mov dword ptr [0xaf0360], eax */ W32((u32)(0xaf0360u), r_eax);
    /* 005630a5: mov dword ptr [0xaf0364], edx */ W32((u32)(0xaf0364u), r_edx);
    /* 005630ab: mov dword ptr [0xaf034c], ebp */ W32((u32)(0xaf034cu), r_ebp);
    /* 005630b1: jmp 0x562ffa */ goto L_00562ffa;
L_005630b6:; BB(0x005630b6);
    /* 005630b6: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005630b9: jne 0x562f6d */ if (!fZ) goto L_00562f6d;
L_005630bf:; BB(0x005630bf);
    /* 005630bf: jmp 0x562f4f */ goto L_00562f4f;
L_005630c4:; BB(0x005630c4);
    /* 005630c4: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005630c6: call 0x7aa668 */ r_esp -= 4; W32(r_esp, 0x5630cbu); f_007aa668();
    /* 005630cb: jmp 0x562ffa */ goto L_00562ffa;
L_005630d0:; BB(0x005630d0);
    /* 005630d0: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005630d2: call 0x7aa668 */ r_esp -= 4; W32(r_esp, 0x5630d7u); f_007aa668();
    /* 005630d7: jmp 0x562fcd */ goto L_00562fcd;
L_005630dc:; BB(0x005630dc);
    /* 005630dc: push 0x41f00000 */ { u32 v = 0x41f00000u; r_esp -= 4; W32(r_esp, v); }
    /* 005630e1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005630e3: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 005630e5: push 0x44160000 */ { u32 v = 0x44160000u; r_esp -= 4; W32(r_esp, v); }
    /* 005630ea: push 0x44160000 */ { u32 v = 0x44160000u; r_esp -= 4; W32(r_esp, v); }
    /* 005630ef: call dword ptr [eax + 0x20] */ { u32 t = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, 0x5630f2u); call_ind(t); }
    /* 005630f2: mov edi, eax */ r_edi = r_eax;
    /* 005630f4: jmp 0x562e7f */ goto L_00562e7f;
}

