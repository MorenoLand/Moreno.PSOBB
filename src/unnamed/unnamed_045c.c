#include "protos.h"

void f_0045c140(void) /* sub_45C140 */
{
    FN_ENTER(0x0045c140);
    /* 0045c140: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0045c141: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0045c142: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045c145: mov edi, ecx */ r_edi = r_ecx;
    /* 0045c147: mov eax, dword ptr [edi + 0x3a0] */ r_eax = R32((u32)(r_edi+0x3a0u));
    /* 0045c14d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045c14f: jne 0x45c195 */ if (!fZ) goto L_0045c195;
L_0045c151:; BB(0x0045c151);
    /* 0045c151: mov ecx, edi */ r_ecx = r_edi;
    /* 0045c153: call 0x45e284 */ r_esp -= 4; W32(r_esp, 0x45c158u); f_0045e284();
    /* 0045c158: mov ebx, eax */ r_ebx = r_eax;
    /* 0045c15a: mov ecx, edi */ r_ecx = r_edi;
    /* 0045c15c: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x45c161u); f_007751b0();
    /* 0045c161: fld dword ptr [0x900444] */ FPUSH(R_F32((u32)(0x900444u)));
    /* 0045c167: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0045c169: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0045c16c: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0045c170: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045c175: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0045c179: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0045c17d: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 0045c181: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0045c184: mov ecx, edi */ r_ecx = r_edi;
    /* 0045c186: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 0045c18a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0045c18b: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0045c18e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0045c18f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045c190: call 0x45e338 */ r_esp -= 4; W32(r_esp, 0x45c195u); f_0045e338();
L_0045c195:; BB(0x0045c195);
    /* 0045c195: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0045c198: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0045c199: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0045c19a: ret  */ FN_RET(0x0045c140); r_esp += 4; return;
}

void f_0045c19c(void) /* sub_45C19C */
{
    FN_ENTER(0x0045c19c);
    /* 0045c19c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0045c19d: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045c1a0: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0045c1a2: mov eax, dword ptr [ebx + 0x3a0] */ r_eax = R32((u32)(r_ebx+0x3a0u));
    /* 0045c1a8: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045c1ab: mov dword ptr [ebx + 0x3a0], eax */ W32((u32)(r_ebx+0x3a0u), r_eax);
    /* 0045c1b1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0045c1b3: jl 0x45c1ba */ if ((fS!=fO)) goto L_0045c1ba;
L_0045c1b5:; BB(0x0045c1b5);
    /* 0045c1b5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0045c1b8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0045c1b9: ret  */ FN_RET(0x0045c19c); r_esp += 4; return;
L_0045c1ba:; BB(0x0045c1ba);
    /* 0045c1ba: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 0045c1bd: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 0045c1c1: lea edx, [ebx + 0x42c] */ r_edx = (u32)(r_ebx+0x42cu);
    /* 0045c1c7: lea eax, [ebx + 0x440] */ r_eax = (u32)(r_ebx+0x440u);
    /* 0045c1cd: mov ebp, eax */ r_ebp = r_eax;
    /* 0045c1cf: mov edi, edx */ r_edi = r_edx;
L_0045c1d1:; BB(0x0045c1d1);
    /* 0045c1d1: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0045c1d3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045c1d5: je 0x45c1e4 */ if (fZ) goto L_0045c1e4;
L_0045c1d7:; BB(0x0045c1d7);
    /* 0045c1d7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045c1d8: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x45c1ddu); f_005cdcc0();
    /* 0045c1dd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0045c1de: mov dword ptr [edi], 0 */ W32((u32)(r_edi), 0x0u);
L_0045c1e4:; BB(0x0045c1e4);
    /* 0045c1e4: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0045c1e7: cmp ebp, edi */ {  u32 a = r_ebp; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0045c1e9: ja 0x45c1d1 */ if ((!fC&&!fZ)) goto L_0045c1d1;
L_0045c1eb:; BB(0x0045c1eb);
    /* 0045c1eb: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 0045c1ee: mov ebp, dword ptr [esp + 4] */ r_ebp = R32((u32)(r_esp+0x4u));
    /* 0045c1f2: push dword ptr [0x9a6538] */ { u32 v = R32((u32)(0x9a6538u)); r_esp -= 4; W32(r_esp, v); }
    /* 0045c1f8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0045c1fa: mov dword ptr [ebx + 0x37c], 1 */ W32((u32)(r_ebx+0x37cu), 0x1u);
    /* 0045c204: call 0x45d43c */ r_esp -= 4; W32(r_esp, 0x45c209u); f_0045d43c();
    /* 0045c209: mov eax, dword ptr [ebx + 0x37c] */ r_eax = R32((u32)(r_ebx+0x37cu));
    /* 0045c20f: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 0045c212: mov eax, dword ptr [edx*4 + 0x9a6528] */ r_eax = R32((u32)(r_edx*4+0x9a6528u));
    /* 0045c219: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045c21b: je 0x45c221 */ if (fZ) goto L_0045c221;
L_0045c21d:; BB(0x0045c21d);
    /* 0045c21d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0045c21f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x45c221u); call_ind(t); }
L_0045c221:; BB(0x0045c221);
    /* 0045c221: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0045c224: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0045c225: ret  */ FN_RET(0x0045c19c); r_esp += 4; return;
}

void f_0045c228(void) /* sub_45C228 */
{
    FN_ENTER(0x0045c228);
    /* 0045c228: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0045c229: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0045c22a: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0045c22c: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 0045c22f: test eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045c234: je 0x45c292 */ if (fZ) goto L_0045c292;
L_0045c236:; BB(0x0045c236);
    /* 0045c236: mov ecx, dword ptr [ebx + 0x394] */ r_ecx = R32((u32)(r_ebx+0x394u));
    /* 0045c23c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0045c23e: je 0x45c28f */ if (fZ) goto L_0045c28f;
L_0045c240:; BB(0x0045c240);
    /* 0045c240: mov esi, dword ptr [ebx + 0x3a8] */ r_esi = R32((u32)(r_ebx+0x3a8u));
    /* 0045c246: mov edx, dword ptr [ebx + 0x3b0] */ r_edx = R32((u32)(r_ebx+0x3b0u));
    /* 0045c24c: and esi, 0x1f */ {  u32 a = r_esi; u32 b = 0x1fu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 0045c24f: and edx, 0xf */ {  u32 a = r_edx; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0045c252: mov eax, esi */ r_eax = r_esi;
    /* 0045c254: shl eax, 5 */ { u32 c = (5u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0045c257: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045c25a: shl esi, 0xa */ { u32 c = (10u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 0045c25d: or eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045c25f: mov esi, edx */ r_esi = r_edx;
    /* 0045c261: shl esi, 0xf */ { u32 c = (15u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 0045c264: or eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045c266: shl edx, 0x13 */ { u32 c = (19u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0045c269: or eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045c26b: movzx edx, word ptr [ebx + 0x3c0] */ r_edx = (u32)R16((u32)(r_ebx+0x3c0u));
    /* 0045c272: movzx ebx, word ptr [ebx + 0x3c2] */ r_ebx = (u32)R16((u32)(r_ebx+0x3c2u));
    /* 0045c279: and edx, 0xf */ {  u32 a = r_edx; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0045c27c: shl edx, 0x17 */ { u32 c = (23u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0045c27f: or eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045c281: and ebx, 0xf */ {  u32 a = r_ebx; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 0045c284: shl ebx, 0x1b */ { u32 c = (27u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 0045c287: or eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045c289: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045c28a: call 0x44cf88 */ r_esp -= 4; W32(r_esp, 0x45c28fu); f_0044cf88();
L_0045c28f:; BB(0x0045c28f);
    /* 0045c28f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0045c290: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0045c291: ret  */ FN_RET(0x0045c228); r_esp += 4; return;
L_0045c292:; BB(0x0045c292);
    /* 0045c292: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 0045c297: mov ecx, dword ptr [ebx + 0x394] */ r_ecx = R32((u32)(r_ebx+0x394u));
    /* 0045c29d: mov word ptr [ebx + 0x3c0], ax */ W16((u32)(r_ebx+0x3c0u), (u16)r_eax);
    /* 0045c2a4: mov word ptr [ebx + 0x3c2], ax */ W16((u32)(r_ebx+0x3c2u), (u16)r_eax);
    /* 0045c2ab: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0045c2ad: je 0x45c2e6 */ if (fZ) goto L_0045c2e6;
L_0045c2af:; BB(0x0045c2af);
    /* 0045c2af: mov eax, dword ptr [ebx + 0x3a8] */ r_eax = R32((u32)(r_ebx+0x3a8u));
    /* 0045c2b5: mov ebx, dword ptr [ebx + 0x3b0] */ r_ebx = R32((u32)(r_ebx+0x3b0u));
    /* 0045c2bb: and eax, 0x1f */ {  u32 a = r_eax; u32 b = 0x1fu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0045c2be: and ebx, 0xf */ {  u32 a = r_ebx; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 0045c2c1: mov esi, eax */ r_esi = r_eax;
    /* 0045c2c3: shl esi, 5 */ { u32 c = (5u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 0045c2c6: or esi, 0xa */ {  u32 a = r_esi; u32 b = 0xau; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 0045c2c9: shl eax, 0xa */ { u32 c = (10u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0045c2cc: or esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 0045c2ce: mov edx, ebx */ r_edx = r_ebx;
    /* 0045c2d0: shl edx, 0xf */ { u32 c = (15u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0045c2d3: or esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 0045c2d5: shl ebx, 0x13 */ { u32 c = (19u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 0045c2d8: or esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 0045c2da: or esi, 0x7f800000 */ {  u32 a = r_esi; u32 b = 0x7f800000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 0045c2e0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0045c2e1: call 0x44cf88 */ r_esp -= 4; W32(r_esp, 0x45c2e6u); f_0044cf88();
L_0045c2e6:; BB(0x0045c2e6);
    /* 0045c2e6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0045c2e7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0045c2e8: ret  */ FN_RET(0x0045c228); r_esp += 4; return;
}

void f_0045c2ec(void) /* sub_45C2EC */
{
    FN_ENTER(0x0045c2ec);
    /* 0045c2ec: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0045c2ed: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045c2f0: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0045c2f2: mov eax, dword ptr [ebx + 0x3a0] */ r_eax = R32((u32)(r_ebx+0x3a0u));
    /* 0045c2f8: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045c2fb: mov dword ptr [ebx + 0x3a0], eax */ W32((u32)(r_ebx+0x3a0u), r_eax);
    /* 0045c301: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0045c303: jl 0x45c30a */ if ((fS!=fO)) goto L_0045c30a;
L_0045c305:; BB(0x0045c305);
    /* 0045c305: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0045c308: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0045c309: ret  */ FN_RET(0x0045c2ec); r_esp += 4; return;
L_0045c30a:; BB(0x0045c30a);
    /* 0045c30a: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 0045c30d: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 0045c311: lea edx, [ebx + 0x42c] */ r_edx = (u32)(r_ebx+0x42cu);
    /* 0045c317: lea eax, [ebx + 0x440] */ r_eax = (u32)(r_ebx+0x440u);
    /* 0045c31d: mov ebp, eax */ r_ebp = r_eax;
    /* 0045c31f: mov edi, edx */ r_edi = r_edx;
L_0045c321:; BB(0x0045c321);
    /* 0045c321: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0045c323: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045c325: je 0x45c334 */ if (fZ) goto L_0045c334;
L_0045c327:; BB(0x0045c327);
    /* 0045c327: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045c328: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x45c32du); f_005cdcc0();
    /* 0045c32d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0045c32e: mov dword ptr [edi], 0 */ W32((u32)(r_edi), 0x0u);
L_0045c334:; BB(0x0045c334);
    /* 0045c334: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0045c337: cmp ebp, edi */ {  u32 a = r_ebp; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0045c339: ja 0x45c321 */ if ((!fC&&!fZ)) goto L_0045c321;
L_0045c33b:; BB(0x0045c33b);
    /* 0045c33b: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 0045c33e: mov ebp, dword ptr [esp + 4] */ r_ebp = R32((u32)(r_esp+0x4u));
    /* 0045c342: push dword ptr [0x9a654c] */ { u32 v = R32((u32)(0x9a654cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0045c348: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0045c34a: mov dword ptr [ebx + 0x37c], 2 */ W32((u32)(r_ebx+0x37cu), 0x2u);
    /* 0045c354: call 0x45d43c */ r_esp -= 4; W32(r_esp, 0x45c359u); f_0045d43c();
    /* 0045c359: mov eax, dword ptr [ebx + 0x37c] */ r_eax = R32((u32)(r_ebx+0x37cu));
    /* 0045c35f: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 0045c362: mov eax, dword ptr [edx*4 + 0x9a6528] */ r_eax = R32((u32)(r_edx*4+0x9a6528u));
    /* 0045c369: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045c36b: je 0x45c371 */ if (fZ) goto L_0045c371;
L_0045c36d:; BB(0x0045c36d);
    /* 0045c36d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0045c36f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x45c371u); call_ind(t); }
L_0045c371:; BB(0x0045c371);
    /* 0045c371: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0045c374: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0045c375: ret  */ FN_RET(0x0045c2ec); r_esp += 4; return;
}

void f_0045c378(void) /* sub_45C378 */
{
    FN_ENTER(0x0045c378);
    /* 0045c378: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045c379: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045c37c: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0045c37e: mov eax, dword ptr [ebp + 0x3a0] */ r_eax = R32((u32)(r_ebp+0x3a0u));
    /* 0045c384: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045c386: jne 0x45c3d4 */ if (!fZ) goto L_0045c3d4;
L_0045c388:; BB(0x0045c388);
    /* 0045c388: mov eax, dword ptr [ebp + 0x37c] */ r_eax = R32((u32)(r_ebp+0x37cu));
    /* 0045c38e: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045c391: je 0x45c3d9 */ if (fZ) goto L_0045c3d9;
L_0045c393:; BB(0x0045c393);
    /* 0045c393: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0045c395: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x45c39au); f_007751b0();
    /* 0045c39a: fld dword ptr [0x90030c] */ FPUSH(R_F32((u32)(0x90030cu)));
    /* 0045c3a0: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0045c3a2: mov edx, dword ptr [ebp + 0x37c] */ r_edx = R32((u32)(r_ebp+0x37cu));
    /* 0045c3a8: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0045c3ab: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0045c3af: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045c3b4: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0045c3b8: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0045c3bc: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 0045c3c0: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0045c3c3: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0045c3c7: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0045c3ca: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0045c3cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045c3cd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045c3ce: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045c3cf: call 0x45e338 */ r_esp -= 4; W32(r_esp, 0x45c3d4u); f_0045e338();
L_0045c3d4:; BB(0x0045c3d4);
    /* 0045c3d4: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0045c3d7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045c3d8: ret  */ FN_RET(0x0045c378); r_esp += 4; return;
L_0045c3d9:; BB(0x0045c3d9);
    /* 0045c3d9: mov dword ptr [ebp + 0x3c4], 0 */ W32((u32)(r_ebp+0x3c4u), 0x0u);
    /* 0045c3e3: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0045c3e5: call 0x45c3f0 */ r_esp -= 4; W32(r_esp, 0x45c3eau); f_0045c3f0();
    /* 0045c3ea: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0045c3ed: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045c3ee: ret  */ FN_RET(0x0045c378); r_esp += 4; return;
}

void f_0045c3f0(void) /* sub_45C3F0 */
{
    FN_ENTER(0x0045c3f0);
    /* 0045c3f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045c3f1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0045c3f2: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045c3f5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0045c3f7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0045c3f9: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x45c3feu); f_007751b0();
    /* 0045c3fe: fld dword ptr [0x900310] */ FPUSH(R_F32((u32)(0x900310u)));
    /* 0045c404: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0045c406: mov ecx, dword ptr [ebx + 0x394] */ r_ecx = R32((u32)(r_ebx+0x394u));
    /* 0045c40c: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0045c40f: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0045c413: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045c418: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0045c41c: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0045c420: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 0045c424: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0045c427: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 0045c42b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045c42d: je 0x45c482 */ if (fZ) goto L_0045c482;
L_0045c42f:; BB(0x0045c42f);
    /* 0045c42f: mov eax, dword ptr [ebx + 0x3a8] */ r_eax = R32((u32)(r_ebx+0x3a8u));
    /* 0045c435: and eax, 0x1f */ {  u32 a = r_eax; u32 b = 0x1fu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0045c438: shl eax, 5 */ { u32 c = (5u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0045c43b: or eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045c43e: mov ebp, edx */ r_ebp = r_edx;
    /* 0045c440: and ebp, 0x1f */ {  u32 a = r_ebp; u32 b = 0x1fu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 0045c443: shl ebp, 0xa */ { u32 c = (10u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebp = r;  } }
    /* 0045c446: or eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045c448: mov ebp, dword ptr [ebx + 0x3b0] */ r_ebp = R32((u32)(r_ebx+0x3b0u));
    /* 0045c44e: and ebp, 0xf */ {  u32 a = r_ebp; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 0045c451: shl ebp, 0xf */ { u32 c = (15u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebp = r;  } }
    /* 0045c454: or eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045c456: and edx, 0xf */ {  u32 a = r_edx; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0045c459: shl edx, 0x13 */ { u32 c = (19u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0045c45c: or eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045c45e: movzx edx, word ptr [ebx + 0x3c0] */ r_edx = (u32)R16((u32)(r_ebx+0x3c0u));
    /* 0045c465: movzx ebx, word ptr [ebx + 0x3c2] */ r_ebx = (u32)R16((u32)(r_ebx+0x3c2u));
    /* 0045c46c: and edx, 0xf */ {  u32 a = r_edx; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0045c46f: shl edx, 0x17 */ { u32 c = (23u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0045c472: or eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045c474: and ebx, 0xf */ {  u32 a = r_ebx; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 0045c477: shl ebx, 0x1b */ { u32 c = (27u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 0045c47a: or eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045c47c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045c47d: call 0x44cf88 */ r_esp -= 4; W32(r_esp, 0x45c482u); f_0044cf88();
L_0045c482:; BB(0x0045c482);
    /* 0045c482: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0045c485: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0045c486: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045c487: ret  */ FN_RET(0x0045c3f0); r_esp += 4; return;
}

void f_0045c488(void) /* sub_45C488 */
{
    FN_ENTER(0x0045c488);
    /* 0045c488: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0045c489: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0045c48a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045c48b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0045c48c: sub esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045c48f: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0045c491: mov edx, dword ptr [ebx + 0x3a0] */ r_edx = R32((u32)(r_ebx+0x3a0u));
    /* 0045c497: mov eax, dword ptr [0xa4587c] */ r_eax = R32((u32)(0xa4587cu));
    /* 0045c49c: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045c49e: jle 0x45c4c0 */ if ((fZ||fS!=fO)) goto L_0045c4c0;
L_0045c4a0:; BB(0x0045c4a0);
    /* 0045c4a0: fld dword ptr [0x900440] */ FPUSH(R_F32((u32)(0x900440u)));
    /* 0045c4a6: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0045c4a8: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
    /* 0045c4ac: fild dword ptr [esp + 0x38] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x38u)));
    /* 0045c4b0: fdiv dword ptr [0x90043c] */ ST(0) = ST(0) / R_F32((u32)(0x90043cu));
    /* 0045c4b6: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0045c4b8: fstp dword ptr [ebx + 0x3a4] */ W_F32((u32)(r_ebx+0x3a4u), ST(0)); FPOP();
    /* 0045c4be: jmp 0x45c4cb */ goto L_0045c4cb;
L_0045c4c0:; BB(0x0045c4c0);
    /* 0045c4c0: mov eax, 0x3f800000 */ r_eax = 0x3f800000u;
    /* 0045c4c5: mov dword ptr [ebx + 0x3a4], eax */ W32((u32)(r_ebx+0x3a4u), r_eax);
L_0045c4cb:; BB(0x0045c4cb);
    /* 0045c4cb: movzx eax, byte ptr [0xa45880] */ r_eax = (u32)R8((u32)(0xa45880u));
    /* 0045c4d2: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0045c4d4: jne 0x45c4ea */ if (!fZ) goto L_0045c4ea;
L_0045c4d6:; BB(0x0045c4d6);
    /* 0045c4d6: mov dword ptr [0xa45884], 0x42c80000 */ W32((u32)(0xa45884u), 0x42c80000u);
    /* 0045c4e0: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045c4e5: mov byte ptr [0xa45880], al */ W8((u32)(0xa45880u), (u8)r_eax);
L_0045c4ea:; BB(0x0045c4ea);
    /* 0045c4ea: mov ebp, dword ptr [ebx + 0x3b4] */ r_ebp = R32((u32)(r_ebx+0x3b4u));
    /* 0045c4f0: mov eax, dword ptr [ebx + 0x3b0] */ r_eax = R32((u32)(r_ebx+0x3b0u));
    /* 0045c4f6: shl ebp, 0xc */ { u32 c = (12u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebp = r;  } }
    /* 0045c4f9: shl eax, 0xc */ { u32 c = (12u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0045c4fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045c4fd: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045c4fe: call 0x7a900c */ r_esp -= 4; W32(r_esp, 0x45c503u); f_007a900c();
    /* 0045c503: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 0045c507: fild dword ptr [esp + 0x48] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x48u)));
    /* 0045c50b: fmul dword ptr [ebx + 0x3a4] */ ST(0) = ST(0) * R_F32((u32)(r_ebx+0x3a4u));
    /* 0045c511: fnstcw word ptr [esp + 0x50] */ W16((u32)(r_esp+0x50u), fcw);
    /* 0045c515: movzx eax, word ptr [esp + 0x50] */ r_eax = (u32)R16((u32)(r_esp+0x50u));
    /* 0045c51a: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045c51f: mov dword ptr [esp + 0x58], eax */ W32((u32)(r_esp+0x58u), r_eax);
    /* 0045c523: fldcw word ptr [esp + 0x58] */ fcw = R16((u32)(r_esp+0x58u));
    /* 0045c527: fistp dword ptr [esp + 0x60] */ W32((u32)(r_esp+0x60u), (u32)fx_int32(ST(0))); FPOP();
    /* 0045c52b: fldcw word ptr [esp + 0x50] */ fcw = R16((u32)(r_esp+0x50u));
    /* 0045c52f: mov eax, dword ptr [esp + 0x60] */ r_eax = R32((u32)(r_esp+0x60u));
    /* 0045c533: add ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0045c535: neg ebp */ { u32 x = r_ebp; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 0045c537: push 0x888 */ { u32 v = 0x888u; r_esp -= 4; W32(r_esp, v); }
    /* 0045c53c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045c53d: push dword ptr [ebx + 0x60] */ { u32 v = R32((u32)(r_ebx+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 0045c540: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x45c545u); f_007a8c74();
    /* 0045c545: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045c548: mov dword ptr [ebx + 0x60], eax */ W32((u32)(r_ebx+0x60u), r_eax);
    /* 0045c54b: movzx eax, byte ptr [0xa45880] */ r_eax = (u32)R8((u32)(0xa45880u));
    /* 0045c552: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0045c554: jne 0x45c582 */ if (!fZ) goto L_0045c582;
L_0045c556:; BB(0x0045c556);
    /* 0045c556: mov edx, dword ptr [0xa45860] */ r_edx = R32((u32)(0xa45860u));
    /* 0045c55c: mov ebp, dword ptr [0xa45894] */ r_ebp = R32((u32)(0xa45894u));
    /* 0045c562: mov esi, dword ptr [0xa45864] */ r_esi = R32((u32)(0xa45864u));
    /* 0045c568: mov dword ptr [0xa45888], edx */ W32((u32)(0xa45888u), r_edx);
    /* 0045c56e: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045c571: mov dword ptr [0xa4588c], ebp */ W32((u32)(0xa4588cu), r_ebp);
    /* 0045c577: mov dword ptr [0xa45890], esi */ W32((u32)(0xa45890u), r_esi);
    /* 0045c57d: mov byte ptr [0xa45880], al */ W8((u32)(0xa45880u), (u8)r_eax);
L_0045c582:; BB(0x0045c582);
    /* 0045c582: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0045c584: jne 0x45c5b4 */ if (!fZ) goto L_0045c5b4;
L_0045c586:; BB(0x0045c586);
    /* 0045c586: mov edx, dword ptr [0xa45860] */ r_edx = R32((u32)(0xa45860u));
    /* 0045c58c: mov ebp, dword ptr [0xa458a4] */ r_ebp = R32((u32)(0xa458a4u));
    /* 0045c592: mov esi, dword ptr [0xa45864] */ r_esi = R32((u32)(0xa45864u));
    /* 0045c598: mov dword ptr [0xa45898], edx */ W32((u32)(0xa45898u), r_edx);
    /* 0045c59e: or eax, 0xffffff04 */ {  u32 a = r_eax; u32 b = 0xffffff04u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045c5a3: mov dword ptr [0xa4589c], ebp */ W32((u32)(0xa4589cu), r_ebp);
    /* 0045c5a9: mov dword ptr [0xa458a0], esi */ W32((u32)(0xa458a0u), r_esi);
    /* 0045c5af: mov byte ptr [0xa45880], al */ W8((u32)(0xa45880u), (u8)r_eax);
L_0045c5b4:; BB(0x0045c5b4);
    /* 0045c5b4: mov eax, dword ptr [ebx + 0x3ac] */ r_eax = R32((u32)(r_ebx+0x3acu));
    /* 0045c5ba: mov edx, dword ptr [ebx + 0x3a8] */ r_edx = R32((u32)(r_ebx+0x3a8u));
    /* 0045c5c0: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0045c5c3: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0045c5c7: mov dword ptr [esp + 0x60], ebx */ W32((u32)(r_esp+0x60u), r_ebx);
    /* 0045c5cb: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 0045c5cd: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_0045c5cf:; BB(0x0045c5cf);
    /* 0045c5cf: mov ebx, dword ptr [esp + ebp*4] */ r_ebx = R32((u32)(r_esp+r_ebp*4));
    /* 0045c5d2: cmp ebx, 0x10 */ {  u32 a = r_ebx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045c5d5: jne 0x45c5f9 */ if (!fZ) goto L_0045c5f9;
L_0045c5d7:; BB(0x0045c5d7);
    /* 0045c5d7: mov eax, dword ptr [0xa45888] */ r_eax = R32((u32)(0xa45888u));
    /* 0045c5dc: mov edx, dword ptr [0xa4588c] */ r_edx = R32((u32)(0xa4588cu));
    /* 0045c5e2: mov ecx, dword ptr [0xa45890] */ r_ecx = R32((u32)(0xa45890u));
    /* 0045c5e8: mov dword ptr [esp + esi + 8], eax */ W32((u32)(r_esp+r_esi+0x8u), r_eax);
    /* 0045c5ec: mov dword ptr [esp + esi + 0xc], edx */ W32((u32)(r_esp+r_esi+0xcu), r_edx);
    /* 0045c5f0: mov dword ptr [esp + esi + 0x10], ecx */ W32((u32)(r_esp+r_esi+0x10u), r_ecx);
    /* 0045c5f4: jmp 0x45c677 */ goto L_0045c677;
L_0045c5f9:; BB(0x0045c5f9);
    /* 0045c5f9: cmp ebx, 0x11 */ {  u32 a = r_ebx; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045c5fc: jne 0x45c61d */ if (!fZ) goto L_0045c61d;
L_0045c5fe:; BB(0x0045c5fe);
    /* 0045c5fe: mov eax, dword ptr [0xa45898] */ r_eax = R32((u32)(0xa45898u));
    /* 0045c603: mov edx, dword ptr [0xa4589c] */ r_edx = R32((u32)(0xa4589cu));
    /* 0045c609: mov ecx, dword ptr [0xa458a0] */ r_ecx = R32((u32)(0xa458a0u));
    /* 0045c60f: mov dword ptr [esp + esi + 8], eax */ W32((u32)(r_esp+r_esi+0x8u), r_eax);
    /* 0045c613: mov dword ptr [esp + esi + 0xc], edx */ W32((u32)(r_esp+r_esi+0xcu), r_edx);
    /* 0045c617: mov dword ptr [esp + esi + 0x10], ecx */ W32((u32)(r_esp+r_esi+0x10u), r_ecx);
    /* 0045c61b: jmp 0x45c677 */ goto L_0045c677;
L_0045c61d:; BB(0x0045c61d);
    /* 0045c61d: mov edx, dword ptr [0xa45888] */ r_edx = R32((u32)(0xa45888u));
    /* 0045c623: lea eax, [ebp + ebp] */ r_eax = (u32)(r_ebp+r_ebp);
    /* 0045c627: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045c629: lea edi, [eax + eax] */ r_edi = (u32)(r_eax+r_eax);
    /* 0045c62c: add edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0045c62e: mov eax, dword ptr [0xa4588c] */ r_eax = R32((u32)(0xa4588cu));
    /* 0045c633: mov dword ptr [esp + edi + 8], edx */ W32((u32)(r_esp+r_edi+0x8u), r_edx);
    /* 0045c637: shl ebx, 0xc */ { u32 c = (12u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 0045c63a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0045c63c: mov dword ptr [esp + edi + 0xc], eax */ W32((u32)(r_esp+r_edi+0xcu), r_eax);
    /* 0045c640: mov eax, dword ptr [0xa45890] */ r_eax = R32((u32)(0xa45890u));
    /* 0045c645: mov dword ptr [esp + edi + 0x10], eax */ W32((u32)(r_esp+r_edi+0x10u), r_eax);
    /* 0045c649: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x45c64eu); f_0082dcbc();
    /* 0045c64e: fld dword ptr [0xa45884] */ FPUSH(R_F32((u32)(0xa45884u)));
    /* 0045c654: fchs  */ ST(0) = -ST(0);
    /* 0045c656: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0045c658: fadd dword ptr [esp + edi + 8] */ ST(0) = ST(0) + R_F32((u32)(r_esp+r_edi+0x8u));
    /* 0045c65c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0045c65e: fstp dword ptr [esp + edi + 8] */ W_F32((u32)(r_esp+r_edi+0x8u), ST(0)); FPOP();
    /* 0045c662: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x45c667u); f_0082ddd8();
    /* 0045c667: fld dword ptr [0xa45884] */ FPUSH(R_F32((u32)(0xa45884u)));
    /* 0045c66d: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0045c66f: fadd dword ptr [esp + edi + 0x10] */ ST(0) = ST(0) + R_F32((u32)(r_esp+r_edi+0x10u));
    /* 0045c673: fstp dword ptr [esp + edi + 0x10] */ W_F32((u32)(r_esp+r_edi+0x10u), ST(0)); FPOP();
L_0045c677:; BB(0x0045c677);
    /* 0045c677: add esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0045c67a: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0045c67d: cmp ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045c680: jl 0x45c5cf */ if ((fS!=fO)) goto L_0045c5cf;
L_0045c686:; BB(0x0045c686);
    /* 0045c686: mov ebx, dword ptr [esp + 0x60] */ r_ebx = R32((u32)(r_esp+0x60u));
    /* 0045c68a: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0045c68e: mov ebp, dword ptr [esp + 0x18] */ r_ebp = R32((u32)(r_esp+0x18u));
    /* 0045c692: mov esi, dword ptr [esp + 0x1c] */ r_esi = R32((u32)(r_esp+0x1cu));
    /* 0045c696: mov dword ptr [ebx + 0x38], eax */ W32((u32)(r_ebx+0x38u), r_eax);
    /* 0045c699: mov dword ptr [ebx + 0x3c], ebp */ W32((u32)(r_ebx+0x3cu), r_ebp);
    /* 0045c69c: lea edx, [esp + 8] */ r_edx = (u32)(r_esp+0x8u);
    /* 0045c6a0: mov dword ptr [ebx + 0x40], esi */ W32((u32)(r_ebx+0x40u), r_esi);
    /* 0045c6a3: lea edi, [ebx + 0x38] */ r_edi = (u32)(r_ebx+0x38u);
    /* 0045c6a6: mov ecx, edi */ r_ecx = r_edi;
    /* 0045c6a8: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x45c6adu); f_0082f9c4();
    /* 0045c6ad: lea edx, [esp + 8] */ r_edx = (u32)(r_esp+0x8u);
    /* 0045c6b1: fld dword ptr [ebx + 0x3a4] */ FPUSH(R_F32((u32)(r_ebx+0x3a4u)));
    /* 0045c6b7: fld dword ptr [ebx + 0x38] */ FPUSH(R_F32((u32)(r_ebx+0x38u)));
    /* 0045c6ba: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0045c6bc: fld dword ptr [ebx + 0x3c] */ FPUSH(R_F32((u32)(r_ebx+0x3cu)));
    /* 0045c6bf: fld dword ptr [ebx + 0x40] */ FPUSH(R_F32((u32)(r_ebx+0x40u)));
    /* 0045c6c2: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0045c6c4: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0045c6c6: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0045c6c8: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0045c6ca: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0045c6cc: fstp dword ptr [ebx + 0x38] */ W_F32((u32)(r_ebx+0x38u), ST(0)); FPOP();
    /* 0045c6cf: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0045c6d1: fstp dword ptr [ebx + 0x3c] */ W_F32((u32)(r_ebx+0x3cu), ST(0)); FPOP();
    /* 0045c6d4: fstp dword ptr [ebx + 0x40] */ W_F32((u32)(r_ebx+0x40u), ST(0)); FPOP();
    /* 0045c6d7: mov ecx, edi */ r_ecx = r_edi;
    /* 0045c6d9: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x45c6deu); f_0082ebac();
    /* 0045c6de: mov eax, dword ptr [ebx + 0x3a0] */ r_eax = R32((u32)(r_ebx+0x3a0u));
    /* 0045c6e4: cmp eax, dword ptr [0xa458a8] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa458a8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045c6ea: jne 0x45c717 */ if (!fZ) goto L_0045c717;
L_0045c6ec:; BB(0x0045c6ec);
    /* 0045c6ec: mov eax, dword ptr [ebx + 0x37c] */ r_eax = R32((u32)(r_ebx+0x37cu));
    /* 0045c6f2: add eax, -4 */ {  u32 a = r_eax; u32 b = 0xfffffffcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045c6f5: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0045c6f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045c6f9: push dword ptr [ebx + 0x3b0] */ { u32 v = R32((u32)(r_ebx+0x3b0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0045c6ff: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0045c700: call 0x45c860 */ r_esp -= 4; W32(r_esp, 0x45c705u); f_0045c860();
    /* 0045c705: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0045c707: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045c709: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0045c70a: push 0x385 */ { u32 v = 0x385u; r_esp -= 4; W32(r_esp, v); }
    /* 0045c70f: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x45c714u); f_00814298();
    /* 0045c714: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0045c717:; BB(0x0045c717);
    /* 0045c717: movzx eax, byte ptr [0xa4583c] */ r_eax = (u32)R8((u32)(0xa4583cu));
    /* 0045c71e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0045c720: jne 0x45c734 */ if (!fZ) goto L_0045c734;
L_0045c722:; BB(0x0045c722);
    /* 0045c722: mov dword ptr [0xa45840], 0x40400000 */ W32((u32)(0xa45840u), 0x40400000u);
    /* 0045c72c: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045c72f: mov byte ptr [0xa4583c], al */ W8((u32)(0xa4583cu), (u8)r_eax);
L_0045c734:; BB(0x0045c734);
    /* 0045c734: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0045c736: jne 0x45c74c */ if (!fZ) goto L_0045c74c;
L_0045c738:; BB(0x0045c738);
    /* 0045c738: mov dword ptr [0xa45844], 0x41100000 */ W32((u32)(0xa45844u), 0x41100000u);
    /* 0045c742: or eax, 0xffffff02 */ {  u32 a = r_eax; u32 b = 0xffffff02u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045c747: mov byte ptr [0xa4583c], al */ W8((u32)(0xa4583cu), (u8)r_eax);
L_0045c74c:; BB(0x0045c74c);
    /* 0045c74c: fld dword ptr [ebx + 0x3fc] */ FPUSH(R_F32((u32)(r_ebx+0x3fcu)));
    /* 0045c752: fcom dword ptr [0xa45840] */ fx_compare(ST(0), R_F32((u32)(0xa45840u))); 
    /* 0045c758: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0045c75a: mov edx, dword ptr [ebx + 0x3fc] */ r_edx = R32((u32)(r_ebx+0x3fcu));
    /* 0045c760: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0045c761: jb 0x45c7e6 */ if (fC) goto L_0045c7e6;
L_0045c767:; BB(0x0045c767);
    /* 0045c767: fcomp dword ptr [0xa45844] */ fx_compare(ST(0), R_F32((u32)(0xa45844u))); FPOP();
    /* 0045c76d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0045c76f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0045c770: ja 0x45c7e8 */ if ((!fC&&!fZ)) goto L_0045c7e8;
L_0045c772:; BB(0x0045c772);
    /* 0045c772: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045c773: mov ebp, dword ptr [ebx + 0x37c] */ r_ebp = R32((u32)(r_ebx+0x37cu));
    /* 0045c779: add ebp, -4 */ {  u32 a = r_ebp; u32 b = 0xfffffffcu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0045c77c: and ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 0045c77f: mov ecx, dword ptr [ebx + ebp*4 + 0x524] */ r_ecx = R32((u32)(r_ebx+r_ebp*4+0x524u));
    /* 0045c786: call 0x579de0 */ r_esp -= 4; W32(r_esp, 0x45c78bu); f_00579de0();
    /* 0045c78b: mov esi, eax */ r_esi = r_eax;
    /* 0045c78d: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045c78f: je 0x45c7e8 */ if (fZ) goto L_0045c7e8;
L_0045c791:; BB(0x0045c791);
    /* 0045c791: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x45c796u); f_0082d7b0();
    /* 0045c796: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0045c798: call 0x830cd8 */ r_esp -= 4; W32(r_esp, 0x45c79du); f_00830cd8();
    /* 0045c79d: mov ecx, edi */ r_ecx = r_edi;
    /* 0045c79f: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x45c7a4u); f_0082d838();
    /* 0045c7a4: mov edx, dword ptr [ebx + 0x60] */ r_edx = R32((u32)(r_ebx+0x60u));
    /* 0045c7a7: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0045c7a9: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x45c7aeu); f_0082d8bc();
    /* 0045c7ae: lea edi, [esp + 0x20] */ r_edi = (u32)(r_esp+0x20u);
    /* 0045c7b2: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0045c7b3: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0045c7b5: mov edx, esi */ r_edx = r_esi;
    /* 0045c7b7: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x45c7bcu); f_00830aa0();
    /* 0045c7bc: lea edi, [esp + 0x2c] */ r_edi = (u32)(r_esp+0x2cu);
    /* 0045c7c0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0045c7c1: add esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0045c7c4: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0045c7c6: mov edx, esi */ r_edx = r_esi;
    /* 0045c7c8: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x45c7cdu); f_00830aa0();
    /* 0045c7cd: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x45c7d2u); f_0082da80();
    /* 0045c7d2: lea eax, [esp + 0x20] */ r_eax = (u32)(r_esp+0x20u);
    /* 0045c7d6: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0045c7d7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045c7d8: mov ecx, dword ptr [ebx + ebp*4 + 0x52c] */ r_ecx = R32((u32)(r_ebx+r_ebp*4+0x52cu));
    /* 0045c7df: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0045c7e1: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x45c7e4u); call_ind(t); }
    /* 0045c7e4: jmp 0x45c7e8 */ goto L_0045c7e8;
L_0045c7e6:; BB(0x0045c7e6);
    /* 0045c7e6: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0045c7e8:; BB(0x0045c7e8);
    /* 0045c7e8: mov eax, dword ptr [ebx + 0x3a0] */ r_eax = R32((u32)(r_ebx+0x3a0u));
    /* 0045c7ee: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045c7f1: mov dword ptr [ebx + 0x3a0], eax */ W32((u32)(r_ebx+0x3a0u), r_eax);
    /* 0045c7f7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0045c7f9: jl 0x45c803 */ if ((fS!=fO)) goto L_0045c803;
L_0045c7fb:; BB(0x0045c7fb);
    /* 0045c7fb: add esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0045c7fe: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0045c7ff: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045c800: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0045c801: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0045c802: ret  */ FN_RET(0x0045c488); r_esp += 4; return;
L_0045c803:; BB(0x0045c803);
    /* 0045c803: lea esi, [ebx + 0x42c] */ r_esi = (u32)(r_ebx+0x42cu);
    /* 0045c809: lea ebp, [ebx + 0x440] */ r_ebp = (u32)(r_ebx+0x440u);
L_0045c80f:; BB(0x0045c80f);
    /* 0045c80f: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0045c811: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045c813: je 0x45c822 */ if (fZ) goto L_0045c822;
L_0045c815:; BB(0x0045c815);
    /* 0045c815: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045c816: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x45c81bu); f_005cdcc0();
    /* 0045c81b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0045c81c: mov dword ptr [esi], 0 */ W32((u32)(r_esi), 0x0u);
L_0045c822:; BB(0x0045c822);
    /* 0045c822: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0045c825: cmp ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0045c827: ja 0x45c80f */ if ((!fC&&!fZ)) goto L_0045c80f;
L_0045c829:; BB(0x0045c829);
    /* 0045c829: push dword ptr [0x9a6538] */ { u32 v = R32((u32)(0x9a6538u)); r_esp -= 4; W32(r_esp, v); }
    /* 0045c82f: mov dword ptr [ebx + 0x37c], 1 */ W32((u32)(r_ebx+0x37cu), 0x1u);
    /* 0045c839: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0045c83b: call 0x45d43c */ r_esp -= 4; W32(r_esp, 0x45c840u); f_0045d43c();
    /* 0045c840: mov eax, dword ptr [ebx + 0x37c] */ r_eax = R32((u32)(r_ebx+0x37cu));
    /* 0045c846: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 0045c849: mov eax, dword ptr [edx*4 + 0x9a6528] */ r_eax = R32((u32)(r_edx*4+0x9a6528u));
    /* 0045c850: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045c852: je 0x45c858 */ if (fZ) goto L_0045c858;
L_0045c854:; BB(0x0045c854);
    /* 0045c854: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0045c856: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x45c858u); call_ind(t); }
L_0045c858:; BB(0x0045c858);
    /* 0045c858: add esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0045c85b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0045c85c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045c85d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0045c85e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0045c85f: ret  */ FN_RET(0x0045c488); r_esp += 4; return;
}

void f_0045c860(void) /* sub_45C860 */
{
    FN_ENTER(0x0045c860);
    /* 0045c860: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045c861: mov ebp, esp */ r_ebp = r_esp;
    /* 0045c863: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0045c865: push 0x8cf45c */ { u32 v = 0x8cf45cu; r_esp -= 4; W32(r_esp, v); }
    /* 0045c86a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0045c870: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045c871: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0045c878: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045c87b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0045c87e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0045c881: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0045c884: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0045c887: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 0045c889: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0045c890: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x45c895u); f_005caba4();
    /* 0045c895: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0045c896: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0045c899: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045c89b: je 0x45c8d4 */ if (fZ) goto L_0045c8d4;
L_0045c89d:; BB(0x0045c89d);
    /* 0045c89d: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0045c8a4: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0045c8ab: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0045c8ae: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0045c8b1: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0045c8b4: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0045c8b7: call 0x45c8d8 */ r_esp -= 4; W32(r_esp, 0x45c8bcu); f_0045c8d8();
    /* 0045c8bc: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0045c8bf: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0045c8c6:; BB(0x0045c8c6);
    /* 0045c8c6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045c8c9: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0045c8d0: mov esp, ebp */ r_esp = r_ebp;
    /* 0045c8d2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045c8d3: ret  */ FN_RET(0x0045c860); r_esp += 4; return;
L_0045c8d4:; BB(0x0045c8d4);
    /* 0045c8d4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0045c8d6: jmp 0x45c8c6 */ goto L_0045c8c6;
}

void f_0045c8d8(void) /* sub_45C8D8 */
{
    FN_ENTER(0x0045c8d8);
    /* 0045c8d8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0045c8d9: mov edi, ecx */ r_edi = r_ecx;
    /* 0045c8db: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0045c8df: mov ecx, edi */ r_ecx = r_edi;
    /* 0045c8e1: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x45c8e6u); f_008193cc();
    /* 0045c8e6: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 0045c8ea: mov dword ptr [edi], 0xaf7bc0 */ W32((u32)(r_edi), 0xaf7bc0u);
    /* 0045c8f0: mov eax, dword ptr [0x9a66f0] */ r_eax = R32((u32)(0x9a66f0u));
    /* 0045c8f5: mov dword ptr [edi + 4], eax */ W32((u32)(r_edi+0x4u), r_eax);
    /* 0045c8f8: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0045c8fc: shl eax, 0xc */ { u32 c = (12u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0045c8ff: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045c901: jne 0x45c914 */ if (!fZ) goto L_0045c914;
L_0045c903:; BB(0x0045c903);
    /* 0045c903: mov dword ptr [edi + 0x24], 0x71c */ W32((u32)(r_edi+0x24u), 0x71cu);
    /* 0045c90a: add eax, 0xffffeaac */ {  u32 a = r_eax; u32 b = 0xffffeaacu; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0045c90f: mov dword ptr [edi + 0x20], eax */ W32((u32)(r_edi+0x20u), r_eax);
    /* 0045c912: jmp 0x45c923 */ goto L_0045c923;
L_0045c914:; BB(0x0045c914);
    /* 0045c914: mov dword ptr [edi + 0x24], 0xfffff8e4 */ W32((u32)(r_edi+0x24u), 0xfffff8e4u);
    /* 0045c91b: add eax, 0xe38 */ {  u32 a = r_eax; u32 b = 0xe38u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0045c920: mov dword ptr [edi + 0x20], eax */ W32((u32)(r_edi+0x20u), r_eax);
L_0045c923:; BB(0x0045c923);
    /* 0045c923: mov dword ptr [edi + 0x28], 0 */ W32((u32)(r_edi+0x28u), 0x0u);
    /* 0045c92a: mov eax, edi */ r_eax = r_edi;
    /* 0045c92c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0045c92d: ret 0xc */ FN_RET(0x0045c8d8); r_esp += 16; return;
}

void f_0045c930(void) /* sub_45C930 */
{
    FN_ENTER(0x0045c930);
    /* 0045c930: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0045c931: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045c932: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0045c933: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0045c935: mov eax, dword ptr [ebx + 0x3a0] */ r_eax = R32((u32)(r_ebx+0x3a0u));
    /* 0045c93b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0045c93d: jne 0x45ca6b */ if (!fZ) goto L_0045ca6b;
L_0045c943:; BB(0x0045c943);
    /* 0045c943: movzx ecx, word ptr [ebx + 0x3c2] */ r_ecx = (u32)R16((u32)(r_ebx+0x3c2u));
    /* 0045c94a: cmp ecx, 0xffff */ {  u32 a = r_ecx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045c950: je 0x45c9aa */ if (fZ) goto L_0045c9aa;
L_0045c952:; BB(0x0045c952);
    /* 0045c952: mov ebp, dword ptr [ebx + 0x394] */ r_ebp = R32((u32)(r_ebx+0x394u));
    /* 0045c958: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0045c95a: je 0x45c9a6 */ if (fZ) goto L_0045c9a6;
L_0045c95c:; BB(0x0045c95c);
    /* 0045c95c: mov edi, dword ptr [ebx + 0x3a8] */ r_edi = R32((u32)(r_ebx+0x3a8u));
    /* 0045c962: mov edx, dword ptr [ebx + 0x3b0] */ r_edx = R32((u32)(r_ebx+0x3b0u));
    /* 0045c968: movzx ebx, word ptr [ebx + 0x3c0] */ r_ebx = (u32)R16((u32)(r_ebx+0x3c0u));
    /* 0045c96f: and edi, 0x1f */ {  u32 a = r_edi; u32 b = 0x1fu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0045c972: and edx, 0xf */ {  u32 a = r_edx; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0045c975: mov eax, edi */ r_eax = r_edi;
    /* 0045c977: shl eax, 5 */ { u32 c = (5u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0045c97a: or eax, 0xd */ {  u32 a = r_eax; u32 b = 0xdu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045c97d: shl edi, 0xa */ { u32 c = (10u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 0045c980: or eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045c982: mov edi, edx */ r_edi = r_edx;
    /* 0045c984: shl edi, 0xf */ { u32 c = (15u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 0045c987: or eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045c989: shl edx, 0x13 */ { u32 c = (19u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0045c98c: or eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045c98e: and ebx, 0xf */ {  u32 a = r_ebx; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 0045c991: shl ebx, 0x17 */ { u32 c = (23u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 0045c994: or eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045c996: and ecx, 0xf */ {  u32 a = r_ecx; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0045c999: shl ecx, 0x1b */ { u32 c = (27u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0045c99c: or eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045c99e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045c99f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0045c9a1: call 0x44cf88 */ r_esp -= 4; W32(r_esp, 0x45c9a6u); f_0044cf88();
L_0045c9a6:; BB(0x0045c9a6);
    /* 0045c9a6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0045c9a7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045c9a8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0045c9a9: ret  */ FN_RET(0x0045c930); r_esp += 4; return;
L_0045c9aa:; BB(0x0045c9aa);
    /* 0045c9aa: call 0x44d084 */ r_esp -= 4; W32(r_esp, 0x45c9afu); f_0044d084();
    /* 0045c9af: movzx ecx, ax */ r_ecx = (u32)(u16)r_eax;
    /* 0045c9b2: cmp ecx, 0xffff */ {  u32 a = r_ecx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045c9b8: je 0x45ca12 */ if (fZ) goto L_0045ca12;
L_0045c9ba:; BB(0x0045c9ba);
    /* 0045c9ba: mov ebp, dword ptr [ebx + 0x394] */ r_ebp = R32((u32)(r_ebx+0x394u));
    /* 0045c9c0: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0045c9c2: je 0x45ca0e */ if (fZ) goto L_0045ca0e;
L_0045c9c4:; BB(0x0045c9c4);
    /* 0045c9c4: mov edi, dword ptr [ebx + 0x3a8] */ r_edi = R32((u32)(r_ebx+0x3a8u));
    /* 0045c9ca: mov edx, dword ptr [ebx + 0x3b0] */ r_edx = R32((u32)(r_ebx+0x3b0u));
    /* 0045c9d0: movzx ebx, word ptr [ebx + 0x3c2] */ r_ebx = (u32)R16((u32)(r_ebx+0x3c2u));
    /* 0045c9d7: and edi, 0x1f */ {  u32 a = r_edi; u32 b = 0x1fu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0045c9da: and edx, 0xf */ {  u32 a = r_edx; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0045c9dd: mov eax, edi */ r_eax = r_edi;
    /* 0045c9df: shl eax, 5 */ { u32 c = (5u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0045c9e2: or eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045c9e5: shl edi, 0xa */ { u32 c = (10u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 0045c9e8: or eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045c9ea: mov edi, edx */ r_edi = r_edx;
    /* 0045c9ec: shl edi, 0xf */ { u32 c = (15u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 0045c9ef: or eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045c9f1: shl edx, 0x13 */ { u32 c = (19u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0045c9f4: or eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045c9f6: and ecx, 0xf */ {  u32 a = r_ecx; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0045c9f9: shl ecx, 0x17 */ { u32 c = (23u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0045c9fc: or eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045c9fe: and ebx, 0xf */ {  u32 a = r_ebx; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 0045ca01: shl ebx, 0x1b */ { u32 c = (27u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 0045ca04: or eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045ca06: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045ca07: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0045ca09: call 0x44cf88 */ r_esp -= 4; W32(r_esp, 0x45ca0eu); f_0044cf88();
L_0045ca0e:; BB(0x0045ca0e);
    /* 0045ca0e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0045ca0f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045ca10: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0045ca11: ret  */ FN_RET(0x0045c930); r_esp += 4; return;
L_0045ca12:; BB(0x0045ca12);
    /* 0045ca12: mov ecx, dword ptr [ebx + 0x394] */ r_ecx = R32((u32)(r_ebx+0x394u));
    /* 0045ca18: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0045ca1a: je 0x45ca6b */ if (fZ) goto L_0045ca6b;
L_0045ca1c:; BB(0x0045ca1c);
    /* 0045ca1c: mov edx, dword ptr [ebx + 0x3a8] */ r_edx = R32((u32)(r_ebx+0x3a8u));
    /* 0045ca22: mov edi, dword ptr [ebx + 0x3b0] */ r_edi = R32((u32)(r_ebx+0x3b0u));
    /* 0045ca28: and edx, 0x1f */ {  u32 a = r_edx; u32 b = 0x1fu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0045ca2b: and edi, 0xf */ {  u32 a = r_edi; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0045ca2e: mov eax, edx */ r_eax = r_edx;
    /* 0045ca30: shl eax, 5 */ { u32 c = (5u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0045ca33: or eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045ca36: shl edx, 0xa */ { u32 c = (10u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0045ca39: or eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045ca3b: movzx edx, word ptr [ebx + 0x3c0] */ r_edx = (u32)R16((u32)(r_ebx+0x3c0u));
    /* 0045ca42: movzx ebx, word ptr [ebx + 0x3c2] */ r_ebx = (u32)R16((u32)(r_ebx+0x3c2u));
    /* 0045ca49: mov ebp, edi */ r_ebp = r_edi;
    /* 0045ca4b: shl ebp, 0xf */ { u32 c = (15u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebp = r;  } }
    /* 0045ca4e: or eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045ca50: shl edi, 0x13 */ { u32 c = (19u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 0045ca53: or eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045ca55: and edx, 0xf */ {  u32 a = r_edx; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0045ca58: shl edx, 0x17 */ { u32 c = (23u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0045ca5b: or eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045ca5d: and ebx, 0xf */ {  u32 a = r_ebx; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 0045ca60: shl ebx, 0x1b */ { u32 c = (27u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 0045ca63: or eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045ca65: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045ca66: call 0x44cf88 */ r_esp -= 4; W32(r_esp, 0x45ca6bu); f_0044cf88();
L_0045ca6b:; BB(0x0045ca6b);
    /* 0045ca6b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0045ca6c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045ca6d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0045ca6e: ret  */ FN_RET(0x0045c930); r_esp += 4; return;
}

void f_0045ca70(void) /* sub_45CA70 */
{
    FN_ENTER(0x0045ca70);
    /* 0045ca70: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0045ca71: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0045ca72: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045ca73: sub esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045ca76: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0045ca78: fild dword ptr [0xa458ac] */ FPUSH((long double)(i32)R32((u32)(0xa458acu)));
    /* 0045ca7e: fild dword ptr [ebp + 0x3a0] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x3a0u)));
    /* 0045ca84: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0045ca86: fchs  */ ST(0) = -ST(0);
    /* 0045ca88: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 0045ca8a: fadd dword ptr [0x90042c] */ ST(0) = ST(0) + R_F32((u32)(0x90042cu));
    /* 0045ca90: fst dword ptr [ebp + 0x3a4] */ W_F32((u32)(r_ebp+0x3a4u), ST(0));
    /* 0045ca96: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0045ca99: call 0x453a10 */ r_esp -= 4; W32(r_esp, 0x45ca9eu); f_00453a10();
    /* 0045ca9e: movzx eax, byte ptr [0xa45880] */ r_eax = (u32)R8((u32)(0xa45880u));
    /* 0045caa5: fstp dword ptr [ebp + 0x3a4] */ W_F32((u32)(r_ebp+0x3a4u), ST(0)); FPOP();
    /* 0045caab: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0045caad: jne 0x45cac3 */ if (!fZ) goto L_0045cac3;
L_0045caaf:; BB(0x0045caaf);
    /* 0045caaf: mov dword ptr [0xa45884], 0x42c80000 */ W32((u32)(0xa45884u), 0x42c80000u);
    /* 0045cab9: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045cabe: mov byte ptr [0xa45880], al */ W8((u32)(0xa45880u), (u8)r_eax);
L_0045cac3:; BB(0x0045cac3);
    /* 0045cac3: mov edi, dword ptr [ebp + 0x3b4] */ r_edi = R32((u32)(r_ebp+0x3b4u));
    /* 0045cac9: mov eax, dword ptr [ebp + 0x3b0] */ r_eax = R32((u32)(r_ebp+0x3b0u));
    /* 0045cacf: shl edi, 0xc */ { u32 c = (12u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 0045cad2: shl eax, 0xc */ { u32 c = (12u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0045cad5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045cad6: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0045cad7: call 0x7a900c */ r_esp -= 4; W32(r_esp, 0x45cadcu); f_007a900c();
    /* 0045cadc: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 0045cae0: fild dword ptr [esp + 0x2c] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x2cu)));
    /* 0045cae4: fmul dword ptr [ebp + 0x3a4] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x3a4u));
    /* 0045caea: fnstcw word ptr [esp + 0x34] */ W16((u32)(r_esp+0x34u), fcw);
    /* 0045caee: movzx eax, word ptr [esp + 0x34] */ r_eax = (u32)R16((u32)(r_esp+0x34u));
    /* 0045caf3: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045caf8: mov dword ptr [esp + 0x3c], eax */ W32((u32)(r_esp+0x3cu), r_eax);
    /* 0045cafc: fldcw word ptr [esp + 0x3c] */ fcw = R16((u32)(r_esp+0x3cu));
    /* 0045cb00: fistp dword ptr [esp + 0x44] */ W32((u32)(r_esp+0x44u), (u32)fx_int32(ST(0))); FPOP();
    /* 0045cb04: fldcw word ptr [esp + 0x34] */ fcw = R16((u32)(r_esp+0x34u));
    /* 0045cb08: mov eax, dword ptr [esp + 0x44] */ r_eax = R32((u32)(r_esp+0x44u));
    /* 0045cb0c: add edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0045cb0e: neg edi */ { u32 x = r_edi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0045cb10: push 0x888 */ { u32 v = 0x888u; r_esp -= 4; W32(r_esp, v); }
    /* 0045cb15: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0045cb16: push dword ptr [ebp + 0x60] */ { u32 v = R32((u32)(r_ebp+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 0045cb19: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x45cb1eu); f_007a8c74();
    /* 0045cb1e: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045cb21: mov dword ptr [ebp + 0x60], eax */ W32((u32)(r_ebp+0x60u), r_eax);
    /* 0045cb24: movzx eax, byte ptr [0xa45880] */ r_eax = (u32)R8((u32)(0xa45880u));
    /* 0045cb2b: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0045cb2d: jne 0x45cb5b */ if (!fZ) goto L_0045cb5b;
L_0045cb2f:; BB(0x0045cb2f);
    /* 0045cb2f: mov edx, dword ptr [0xa45860] */ r_edx = R32((u32)(0xa45860u));
    /* 0045cb35: mov edi, dword ptr [0xa45894] */ r_edi = R32((u32)(0xa45894u));
    /* 0045cb3b: mov dword ptr [0xa45888], edx */ W32((u32)(0xa45888u), r_edx);
    /* 0045cb41: mov edx, dword ptr [0xa45864] */ r_edx = R32((u32)(0xa45864u));
    /* 0045cb47: mov dword ptr [0xa4588c], edi */ W32((u32)(0xa4588cu), r_edi);
    /* 0045cb4d: mov dword ptr [0xa45890], edx */ W32((u32)(0xa45890u), r_edx);
    /* 0045cb53: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045cb56: mov byte ptr [0xa45880], al */ W8((u32)(0xa45880u), (u8)r_eax);
L_0045cb5b:; BB(0x0045cb5b);
    /* 0045cb5b: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0045cb5d: jne 0x45cb8d */ if (!fZ) goto L_0045cb8d;
L_0045cb5f:; BB(0x0045cb5f);
    /* 0045cb5f: mov edx, dword ptr [0xa45860] */ r_edx = R32((u32)(0xa45860u));
    /* 0045cb65: mov edi, dword ptr [0xa458a4] */ r_edi = R32((u32)(0xa458a4u));
    /* 0045cb6b: mov dword ptr [0xa45898], edx */ W32((u32)(0xa45898u), r_edx);
    /* 0045cb71: mov edx, dword ptr [0xa45864] */ r_edx = R32((u32)(0xa45864u));
    /* 0045cb77: mov dword ptr [0xa4589c], edi */ W32((u32)(0xa4589cu), r_edi);
    /* 0045cb7d: mov dword ptr [0xa458a0], edx */ W32((u32)(0xa458a0u), r_edx);
    /* 0045cb83: or eax, 0xffffff04 */ {  u32 a = r_eax; u32 b = 0xffffff04u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045cb88: mov byte ptr [0xa45880], al */ W8((u32)(0xa45880u), (u8)r_eax);
L_0045cb8d:; BB(0x0045cb8d);
    /* 0045cb8d: mov eax, dword ptr [ebp + 0x3ac] */ r_eax = R32((u32)(r_ebp+0x3acu));
    /* 0045cb93: mov edx, dword ptr [ebp + 0x3a8] */ r_edx = R32((u32)(r_ebp+0x3a8u));
    /* 0045cb99: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0045cb9d: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0045cba1: mov dword ptr [esp + 0x44], ebp */ W32((u32)(r_esp+0x44u), r_ebp);
    /* 0045cba5: mov dword ptr [esp + 0x48], ebx */ W32((u32)(r_esp+0x48u), r_ebx);
    /* 0045cba9: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0045cbab: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0045cbad: mov ebx, eax */ r_ebx = r_eax;
L_0045cbaf:; BB(0x0045cbaf);
    /* 0045cbaf: mov ebp, dword ptr [esp + edi*4 + 4] */ r_ebp = R32((u32)(r_esp+r_edi*4+0x4u));
    /* 0045cbb3: cmp ebp, 0x10 */ {  u32 a = r_ebp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045cbb6: jne 0x45cbdb */ if (!fZ) goto L_0045cbdb;
L_0045cbb8:; BB(0x0045cbb8);
    /* 0045cbb8: mov edx, dword ptr [0xa45888] */ r_edx = R32((u32)(0xa45888u));
    /* 0045cbbe: mov ecx, dword ptr [0xa4588c] */ r_ecx = R32((u32)(0xa4588cu));
    /* 0045cbc4: mov ebp, dword ptr [0xa45890] */ r_ebp = R32((u32)(0xa45890u));
    /* 0045cbca: mov dword ptr [esp + ebx + 0xc], edx */ W32((u32)(r_esp+r_ebx+0xcu), r_edx);
    /* 0045cbce: mov dword ptr [esp + ebx + 0x10], ecx */ W32((u32)(r_esp+r_ebx+0x10u), r_ecx);
    /* 0045cbd2: mov dword ptr [esp + ebx + 0x14], ebp */ W32((u32)(r_esp+r_ebx+0x14u), r_ebp);
    /* 0045cbd6: jmp 0x45cc5b */ goto L_0045cc5b;
L_0045cbdb:; BB(0x0045cbdb);
    /* 0045cbdb: cmp ebp, 0x11 */ {  u32 a = r_ebp; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045cbde: jne 0x45cc00 */ if (!fZ) goto L_0045cc00;
L_0045cbe0:; BB(0x0045cbe0);
    /* 0045cbe0: mov edx, dword ptr [0xa45898] */ r_edx = R32((u32)(0xa45898u));
    /* 0045cbe6: mov ecx, dword ptr [0xa4589c] */ r_ecx = R32((u32)(0xa4589cu));
    /* 0045cbec: mov ebp, dword ptr [0xa458a0] */ r_ebp = R32((u32)(0xa458a0u));
    /* 0045cbf2: mov dword ptr [esp + ebx + 0xc], edx */ W32((u32)(r_esp+r_ebx+0xcu), r_edx);
    /* 0045cbf6: mov dword ptr [esp + ebx + 0x10], ecx */ W32((u32)(r_esp+r_ebx+0x10u), r_ecx);
    /* 0045cbfa: mov dword ptr [esp + ebx + 0x14], ebp */ W32((u32)(r_esp+r_ebx+0x14u), r_ebp);
    /* 0045cbfe: jmp 0x45cc5b */ goto L_0045cc5b;
L_0045cc00:; BB(0x0045cc00);
    /* 0045cc00: lea edx, [edi + edi] */ r_edx = (u32)(r_edi+r_edi);
    /* 0045cc03: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0045cc05: lea esi, [edx + edx] */ r_esi = (u32)(r_edx+r_edx);
    /* 0045cc08: add esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0045cc0a: shl ebp, 0xc */ { u32 c = (12u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebp = r;  } }
    /* 0045cc0d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0045cc0f: mov edx, dword ptr [0xa45888] */ r_edx = R32((u32)(0xa45888u));
    /* 0045cc15: mov dword ptr [esp + esi + 0xc], edx */ W32((u32)(r_esp+r_esi+0xcu), r_edx);
    /* 0045cc19: mov edx, dword ptr [0xa4588c] */ r_edx = R32((u32)(0xa4588cu));
    /* 0045cc1f: mov dword ptr [esp + esi + 0x10], edx */ W32((u32)(r_esp+r_esi+0x10u), r_edx);
    /* 0045cc23: mov edx, dword ptr [0xa45890] */ r_edx = R32((u32)(0xa45890u));
    /* 0045cc29: mov dword ptr [esp + esi + 0x14], edx */ W32((u32)(r_esp+r_esi+0x14u), r_edx);
    /* 0045cc2d: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x45cc32u); f_0082dcbc();
    /* 0045cc32: fld dword ptr [0xa45884] */ FPUSH(R_F32((u32)(0xa45884u)));
    /* 0045cc38: fchs  */ ST(0) = -ST(0);
    /* 0045cc3a: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0045cc3c: fadd dword ptr [esp + esi + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_esp+r_esi+0xcu));
    /* 0045cc40: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0045cc42: fstp dword ptr [esp + esi + 0xc] */ W_F32((u32)(r_esp+r_esi+0xcu), ST(0)); FPOP();
    /* 0045cc46: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x45cc4bu); f_0082ddd8();
    /* 0045cc4b: fld dword ptr [0xa45884] */ FPUSH(R_F32((u32)(0xa45884u)));
    /* 0045cc51: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0045cc53: fadd dword ptr [esp + esi + 0x14] */ ST(0) = ST(0) + R_F32((u32)(r_esp+r_esi+0x14u));
    /* 0045cc57: fstp dword ptr [esp + esi + 0x14] */ W_F32((u32)(r_esp+r_esi+0x14u), ST(0)); FPOP();
L_0045cc5b:; BB(0x0045cc5b);
    /* 0045cc5b: add ebx, 0xc */ {  u32 a = r_ebx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0045cc5e: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0045cc61: cmp edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045cc64: jl 0x45cbaf */ if ((fS!=fO)) goto L_0045cbaf;
L_0045cc6a:; BB(0x0045cc6a);
    /* 0045cc6a: mov ebp, dword ptr [esp + 0x44] */ r_ebp = R32((u32)(r_esp+0x44u));
    /* 0045cc6e: mov ebx, dword ptr [esp + 0x48] */ r_ebx = R32((u32)(r_esp+0x48u));
    /* 0045cc72: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0045cc76: mov edi, dword ptr [esp + 0x1c] */ r_edi = R32((u32)(r_esp+0x1cu));
    /* 0045cc7a: mov dword ptr [ebp + 0x38], eax */ W32((u32)(r_ebp+0x38u), r_eax);
    /* 0045cc7d: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 0045cc81: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 0045cc85: mov dword ptr [ebp + 0x3c], edi */ W32((u32)(r_ebp+0x3cu), r_edi);
    /* 0045cc88: mov dword ptr [ebp + 0x40], eax */ W32((u32)(r_ebp+0x40u), r_eax);
    /* 0045cc8b: lea edi, [ebp + 0x38] */ r_edi = (u32)(r_ebp+0x38u);
    /* 0045cc8e: mov ecx, edi */ r_ecx = r_edi;
    /* 0045cc90: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x45cc95u); f_0082f9c4();
    /* 0045cc95: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 0045cc99: fld dword ptr [ebp + 0x3a4] */ FPUSH(R_F32((u32)(r_ebp+0x3a4u)));
    /* 0045cc9f: fld dword ptr [ebp + 0x38] */ FPUSH(R_F32((u32)(r_ebp+0x38u)));
    /* 0045cca2: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0045cca4: fld dword ptr [ebp + 0x3c] */ FPUSH(R_F32((u32)(r_ebp+0x3cu)));
    /* 0045cca7: fld dword ptr [ebp + 0x40] */ FPUSH(R_F32((u32)(r_ebp+0x40u)));
    /* 0045ccaa: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0045ccac: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0045ccae: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0045ccb0: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0045ccb2: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0045ccb4: fstp dword ptr [ebp + 0x38] */ W_F32((u32)(r_ebp+0x38u), ST(0)); FPOP();
    /* 0045ccb7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0045ccb9: fstp dword ptr [ebp + 0x3c] */ W_F32((u32)(r_ebp+0x3cu), ST(0)); FPOP();
    /* 0045ccbc: fstp dword ptr [ebp + 0x40] */ W_F32((u32)(r_ebp+0x40u), ST(0)); FPOP();
    /* 0045ccbf: mov ecx, edi */ r_ecx = r_edi;
    /* 0045ccc1: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x45ccc6u); f_0082ebac();
    /* 0045ccc6: mov eax, dword ptr [ebp + 0x3a0] */ r_eax = R32((u32)(r_ebp+0x3a0u));
    /* 0045cccc: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045cccf: mov dword ptr [ebp + 0x3a0], eax */ W32((u32)(r_ebp+0x3a0u), r_eax);
    /* 0045ccd5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0045ccd7: jl 0x45cce0 */ if ((fS!=fO)) goto L_0045cce0;
L_0045ccd9:; BB(0x0045ccd9);
    /* 0045ccd9: add esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0045ccdc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045ccdd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0045ccde: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0045ccdf: ret  */ FN_RET(0x0045ca70); r_esp += 4; return;
L_0045cce0:; BB(0x0045cce0);
    /* 0045cce0: lea eax, [ebp + 0x42c] */ r_eax = (u32)(r_ebp+0x42cu);
    /* 0045cce6: lea edi, [ebp + 0x440] */ r_edi = (u32)(r_ebp+0x440u);
    /* 0045ccec: mov esi, eax */ r_esi = r_eax;
L_0045ccee:; BB(0x0045ccee);
    /* 0045ccee: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 0045ccf0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045ccf2: je 0x45cd01 */ if (fZ) goto L_0045cd01;
L_0045ccf4:; BB(0x0045ccf4);
    /* 0045ccf4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045ccf5: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x45ccfau); f_005cdcc0();
    /* 0045ccfa: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0045ccfb: mov dword ptr [esi], 0 */ W32((u32)(r_esi), 0x0u);
L_0045cd01:; BB(0x0045cd01);
    /* 0045cd01: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0045cd04: cmp edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0045cd06: ja 0x45ccee */ if ((!fC&&!fZ)) goto L_0045ccee;
L_0045cd08:; BB(0x0045cd08);
    /* 0045cd08: push dword ptr [0x9a6538] */ { u32 v = R32((u32)(0x9a6538u)); r_esp -= 4; W32(r_esp, v); }
    /* 0045cd0e: mov dword ptr [ebp + 0x37c], 1 */ W32((u32)(r_ebp+0x37cu), 0x1u);
    /* 0045cd18: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0045cd1a: call 0x45d43c */ r_esp -= 4; W32(r_esp, 0x45cd1fu); f_0045d43c();
    /* 0045cd1f: mov eax, dword ptr [ebp + 0x37c] */ r_eax = R32((u32)(r_ebp+0x37cu));
    /* 0045cd25: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 0045cd28: mov eax, dword ptr [edx*4 + 0x9a6528] */ r_eax = R32((u32)(r_edx*4+0x9a6528u));
    /* 0045cd2f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045cd31: je 0x45cd37 */ if (fZ) goto L_0045cd37;
L_0045cd33:; BB(0x0045cd33);
    /* 0045cd33: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0045cd35: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x45cd37u); call_ind(t); }
L_0045cd37:; BB(0x0045cd37);
    /* 0045cd37: add esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0045cd3a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045cd3b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0045cd3c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0045cd3d: ret  */ FN_RET(0x0045ca70); r_esp += 4; return;
}

void f_0045cd40(void) /* sub_45CD40 */
{
    FN_ENTER(0x0045cd40);
    /* 0045cd40: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0045cd41: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045cd42: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0045cd43: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045cd46: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0045cd48: mov eax, dword ptr [ebx + 0x3a0] */ r_eax = R32((u32)(r_ebx+0x3a0u));
    /* 0045cd4e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045cd50: jne 0x45ce7a */ if (!fZ) goto L_0045ce7a;
L_0045cd56:; BB(0x0045cd56);
    /* 0045cd56: movzx ebp, word ptr [ebx + 0x3c2] */ r_ebp = (u32)R16((u32)(r_ebx+0x3c2u));
    /* 0045cd5d: cmp ebp, 0xffff */ {  u32 a = r_ebp; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045cd63: je 0x45cdbe */ if (fZ) goto L_0045cdbe;
L_0045cd65:; BB(0x0045cd65);
    /* 0045cd65: mov ecx, dword ptr [ebx + 0x394] */ r_ecx = R32((u32)(r_ebx+0x394u));
    /* 0045cd6b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045cd6d: je 0x45cdb7 */ if (fZ) goto L_0045cdb7;
L_0045cd6f:; BB(0x0045cd6f);
    /* 0045cd6f: mov esi, dword ptr [ebx + 0x3a8] */ r_esi = R32((u32)(r_ebx+0x3a8u));
    /* 0045cd75: mov edx, dword ptr [ebx + 0x3b0] */ r_edx = R32((u32)(r_ebx+0x3b0u));
    /* 0045cd7b: movzx ebx, word ptr [ebx + 0x3c0] */ r_ebx = (u32)R16((u32)(r_ebx+0x3c0u));
    /* 0045cd82: and esi, 0x1f */ {  u32 a = r_esi; u32 b = 0x1fu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 0045cd85: and edx, 0xf */ {  u32 a = r_edx; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0045cd88: mov eax, esi */ r_eax = r_esi;
    /* 0045cd8a: shl eax, 5 */ { u32 c = (5u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0045cd8d: or eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045cd90: shl esi, 0xa */ { u32 c = (10u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 0045cd93: or eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045cd95: mov esi, edx */ r_esi = r_edx;
    /* 0045cd97: shl esi, 0xf */ { u32 c = (15u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 0045cd9a: or eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045cd9c: shl edx, 0x13 */ { u32 c = (19u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0045cd9f: or eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045cda1: and ebx, 0xf */ {  u32 a = r_ebx; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 0045cda4: shl ebx, 0x17 */ { u32 c = (23u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 0045cda7: or eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045cda9: and ebp, 0xf */ {  u32 a = r_ebp; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 0045cdac: shl ebp, 0x1b */ { u32 c = (27u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebp = r;  } }
    /* 0045cdaf: or eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045cdb1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045cdb2: call 0x44cf88 */ r_esp -= 4; W32(r_esp, 0x45cdb7u); f_0044cf88();
L_0045cdb7:; BB(0x0045cdb7);
    /* 0045cdb7: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0045cdba: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0045cdbb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045cdbc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0045cdbd: ret  */ FN_RET(0x0045cd40); r_esp += 4; return;
L_0045cdbe:; BB(0x0045cdbe);
    /* 0045cdbe: call 0x44d084 */ r_esp -= 4; W32(r_esp, 0x45cdc3u); f_0044d084();
    /* 0045cdc3: movsx edx, word ptr [ebx + 0x334] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x334u));
    /* 0045cdca: cmp edx, dword ptr [ebx + 0x3e8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebx+0x3e8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045cdd0: jg 0x45ce36 */ if ((!fZ&&fS==fO)) goto L_0045ce36;
L_0045cdd2:; BB(0x0045cdd2);
    /* 0045cdd2: movzx ebp, ax */ r_ebp = (u32)(u16)r_eax;
    /* 0045cdd5: cmp ebp, 0xffff */ {  u32 a = r_ebp; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045cddb: je 0x45ce36 */ if (fZ) goto L_0045ce36;
L_0045cddd:; BB(0x0045cddd);
    /* 0045cddd: mov ecx, dword ptr [ebx + 0x394] */ r_ecx = R32((u32)(r_ebx+0x394u));
    /* 0045cde3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045cde5: je 0x45ce2f */ if (fZ) goto L_0045ce2f;
L_0045cde7:; BB(0x0045cde7);
    /* 0045cde7: mov esi, dword ptr [ebx + 0x3a8] */ r_esi = R32((u32)(r_ebx+0x3a8u));
    /* 0045cded: mov edx, dword ptr [ebx + 0x3b0] */ r_edx = R32((u32)(r_ebx+0x3b0u));
    /* 0045cdf3: movzx ebx, word ptr [ebx + 0x3c2] */ r_ebx = (u32)R16((u32)(r_ebx+0x3c2u));
    /* 0045cdfa: and esi, 0x1f */ {  u32 a = r_esi; u32 b = 0x1fu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 0045cdfd: and edx, 0xf */ {  u32 a = r_edx; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0045ce00: mov eax, esi */ r_eax = r_esi;
    /* 0045ce02: shl eax, 5 */ { u32 c = (5u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0045ce05: or eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045ce08: shl esi, 0xa */ { u32 c = (10u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 0045ce0b: or eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045ce0d: mov esi, edx */ r_esi = r_edx;
    /* 0045ce0f: shl esi, 0xf */ { u32 c = (15u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 0045ce12: or eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045ce14: shl edx, 0x13 */ { u32 c = (19u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0045ce17: or eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045ce19: and ebp, 0xf */ {  u32 a = r_ebp; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 0045ce1c: shl ebp, 0x17 */ { u32 c = (23u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebp = r;  } }
    /* 0045ce1f: or eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045ce21: and ebx, 0xf */ {  u32 a = r_ebx; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 0045ce24: shl ebx, 0x1b */ { u32 c = (27u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 0045ce27: or eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045ce29: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045ce2a: call 0x44cf88 */ r_esp -= 4; W32(r_esp, 0x45ce2fu); f_0044cf88();
L_0045ce2f:; BB(0x0045ce2f);
    /* 0045ce2f: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0045ce32: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0045ce33: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045ce34: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0045ce35: ret  */ FN_RET(0x0045cd40); r_esp += 4; return;
L_0045ce36:; BB(0x0045ce36);
    /* 0045ce36: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0045ce38: call 0x45e284 */ r_esp -= 4; W32(r_esp, 0x45ce3du); f_0045e284();
    /* 0045ce3d: mov ebp, eax */ r_ebp = r_eax;
    /* 0045ce3f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0045ce41: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x45ce46u); f_007751b0();
    /* 0045ce46: fld dword ptr [0x900424] */ FPUSH(R_F32((u32)(0x900424u)));
    /* 0045ce4c: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0045ce4e: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0045ce51: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0045ce55: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045ce5a: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0045ce5e: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0045ce62: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 0045ce66: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0045ce69: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0045ce6b: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 0045ce6f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045ce70: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0045ce73: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045ce74: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045ce75: call 0x45e338 */ r_esp -= 4; W32(r_esp, 0x45ce7au); f_0045e338();
L_0045ce7a:; BB(0x0045ce7a);
    /* 0045ce7a: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0045ce7d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0045ce7e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045ce7f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0045ce80: ret  */ FN_RET(0x0045cd40); r_esp += 4; return;
}

void f_0045ce84(void) /* sub_45CE84 */
{
    FN_ENTER(0x0045ce84);
    /* 0045ce84: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0045ce85: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0045ce86: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045ce87: sub esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045ce8a: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0045ce8c: fild dword ptr [0xa458b0] */ FPUSH((long double)(i32)R32((u32)(0xa458b0u)));
    /* 0045ce92: fild dword ptr [ebp + 0x3a0] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x3a0u)));
    /* 0045ce98: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0045ce9a: fchs  */ ST(0) = -ST(0);
    /* 0045ce9c: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 0045ce9e: fadd dword ptr [0x900420] */ ST(0) = ST(0) + R_F32((u32)(0x900420u));
    /* 0045cea4: fst dword ptr [ebp + 0x3a4] */ W_F32((u32)(r_ebp+0x3a4u), ST(0));
    /* 0045ceaa: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0045cead: call 0x453a10 */ r_esp -= 4; W32(r_esp, 0x45ceb2u); f_00453a10();
    /* 0045ceb2: movzx eax, byte ptr [0xa45880] */ r_eax = (u32)R8((u32)(0xa45880u));
    /* 0045ceb9: fstp dword ptr [ebp + 0x3a4] */ W_F32((u32)(r_ebp+0x3a4u), ST(0)); FPOP();
    /* 0045cebf: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0045cec1: jne 0x45ced7 */ if (!fZ) goto L_0045ced7;
L_0045cec3:; BB(0x0045cec3);
    /* 0045cec3: mov dword ptr [0xa45884], 0x42c80000 */ W32((u32)(0xa45884u), 0x42c80000u);
    /* 0045cecd: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045ced2: mov byte ptr [0xa45880], al */ W8((u32)(0xa45880u), (u8)r_eax);
L_0045ced7:; BB(0x0045ced7);
    /* 0045ced7: mov edi, dword ptr [ebp + 0x3b4] */ r_edi = R32((u32)(r_ebp+0x3b4u));
    /* 0045cedd: mov eax, dword ptr [ebp + 0x3b0] */ r_eax = R32((u32)(r_ebp+0x3b0u));
    /* 0045cee3: shl edi, 0xc */ { u32 c = (12u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 0045cee6: shl eax, 0xc */ { u32 c = (12u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0045cee9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045ceea: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0045ceeb: call 0x7a900c */ r_esp -= 4; W32(r_esp, 0x45cef0u); f_007a900c();
    /* 0045cef0: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 0045cef4: fild dword ptr [esp + 0x2c] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x2cu)));
    /* 0045cef8: fmul dword ptr [ebp + 0x3a4] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x3a4u));
    /* 0045cefe: fnstcw word ptr [esp + 0x34] */ W16((u32)(r_esp+0x34u), fcw);
    /* 0045cf02: movzx eax, word ptr [esp + 0x34] */ r_eax = (u32)R16((u32)(r_esp+0x34u));
    /* 0045cf07: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045cf0c: mov dword ptr [esp + 0x3c], eax */ W32((u32)(r_esp+0x3cu), r_eax);
    /* 0045cf10: fldcw word ptr [esp + 0x3c] */ fcw = R16((u32)(r_esp+0x3cu));
    /* 0045cf14: fistp dword ptr [esp + 0x44] */ W32((u32)(r_esp+0x44u), (u32)fx_int32(ST(0))); FPOP();
    /* 0045cf18: fldcw word ptr [esp + 0x34] */ fcw = R16((u32)(r_esp+0x34u));
    /* 0045cf1c: mov eax, dword ptr [esp + 0x44] */ r_eax = R32((u32)(r_esp+0x44u));
    /* 0045cf20: add edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0045cf22: neg edi */ { u32 x = r_edi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0045cf24: push 0x888 */ { u32 v = 0x888u; r_esp -= 4; W32(r_esp, v); }
    /* 0045cf29: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0045cf2a: push dword ptr [ebp + 0x60] */ { u32 v = R32((u32)(r_ebp+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 0045cf2d: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x45cf32u); f_007a8c74();
    /* 0045cf32: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045cf35: mov dword ptr [ebp + 0x60], eax */ W32((u32)(r_ebp+0x60u), r_eax);
    /* 0045cf38: movzx eax, byte ptr [0xa45880] */ r_eax = (u32)R8((u32)(0xa45880u));
    /* 0045cf3f: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0045cf41: jne 0x45cf6f */ if (!fZ) goto L_0045cf6f;
L_0045cf43:; BB(0x0045cf43);
    /* 0045cf43: mov edx, dword ptr [0xa45860] */ r_edx = R32((u32)(0xa45860u));
    /* 0045cf49: mov edi, dword ptr [0xa45894] */ r_edi = R32((u32)(0xa45894u));
    /* 0045cf4f: mov dword ptr [0xa45888], edx */ W32((u32)(0xa45888u), r_edx);
    /* 0045cf55: mov edx, dword ptr [0xa45864] */ r_edx = R32((u32)(0xa45864u));
    /* 0045cf5b: mov dword ptr [0xa4588c], edi */ W32((u32)(0xa4588cu), r_edi);
    /* 0045cf61: mov dword ptr [0xa45890], edx */ W32((u32)(0xa45890u), r_edx);
    /* 0045cf67: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045cf6a: mov byte ptr [0xa45880], al */ W8((u32)(0xa45880u), (u8)r_eax);
L_0045cf6f:; BB(0x0045cf6f);
    /* 0045cf6f: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0045cf71: jne 0x45cfa1 */ if (!fZ) goto L_0045cfa1;
L_0045cf73:; BB(0x0045cf73);
    /* 0045cf73: mov edx, dword ptr [0xa45860] */ r_edx = R32((u32)(0xa45860u));
    /* 0045cf79: mov edi, dword ptr [0xa458a4] */ r_edi = R32((u32)(0xa458a4u));
    /* 0045cf7f: mov dword ptr [0xa45898], edx */ W32((u32)(0xa45898u), r_edx);
    /* 0045cf85: mov edx, dword ptr [0xa45864] */ r_edx = R32((u32)(0xa45864u));
    /* 0045cf8b: mov dword ptr [0xa4589c], edi */ W32((u32)(0xa4589cu), r_edi);
    /* 0045cf91: mov dword ptr [0xa458a0], edx */ W32((u32)(0xa458a0u), r_edx);
    /* 0045cf97: or eax, 0xffffff04 */ {  u32 a = r_eax; u32 b = 0xffffff04u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045cf9c: mov byte ptr [0xa45880], al */ W8((u32)(0xa45880u), (u8)r_eax);
L_0045cfa1:; BB(0x0045cfa1);
    /* 0045cfa1: mov eax, dword ptr [ebp + 0x3ac] */ r_eax = R32((u32)(r_ebp+0x3acu));
    /* 0045cfa7: mov edx, dword ptr [ebp + 0x3a8] */ r_edx = R32((u32)(r_ebp+0x3a8u));
    /* 0045cfad: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0045cfb1: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0045cfb5: mov dword ptr [esp + 0x44], ebp */ W32((u32)(r_esp+0x44u), r_ebp);
    /* 0045cfb9: mov dword ptr [esp + 0x48], ebx */ W32((u32)(r_esp+0x48u), r_ebx);
    /* 0045cfbd: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0045cfbf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0045cfc1: mov ebx, eax */ r_ebx = r_eax;
L_0045cfc3:; BB(0x0045cfc3);
    /* 0045cfc3: mov ebp, dword ptr [esp + edi*4 + 4] */ r_ebp = R32((u32)(r_esp+r_edi*4+0x4u));
    /* 0045cfc7: cmp ebp, 0x10 */ {  u32 a = r_ebp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045cfca: jne 0x45cfef */ if (!fZ) goto L_0045cfef;
L_0045cfcc:; BB(0x0045cfcc);
    /* 0045cfcc: mov edx, dword ptr [0xa45888] */ r_edx = R32((u32)(0xa45888u));
    /* 0045cfd2: mov ecx, dword ptr [0xa4588c] */ r_ecx = R32((u32)(0xa4588cu));
    /* 0045cfd8: mov ebp, dword ptr [0xa45890] */ r_ebp = R32((u32)(0xa45890u));
    /* 0045cfde: mov dword ptr [esp + ebx + 0xc], edx */ W32((u32)(r_esp+r_ebx+0xcu), r_edx);
    /* 0045cfe2: mov dword ptr [esp + ebx + 0x10], ecx */ W32((u32)(r_esp+r_ebx+0x10u), r_ecx);
    /* 0045cfe6: mov dword ptr [esp + ebx + 0x14], ebp */ W32((u32)(r_esp+r_ebx+0x14u), r_ebp);
    /* 0045cfea: jmp 0x45d06f */ goto L_0045d06f;
L_0045cfef:; BB(0x0045cfef);
    /* 0045cfef: cmp ebp, 0x11 */ {  u32 a = r_ebp; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045cff2: jne 0x45d014 */ if (!fZ) goto L_0045d014;
L_0045cff4:; BB(0x0045cff4);
    /* 0045cff4: mov edx, dword ptr [0xa45898] */ r_edx = R32((u32)(0xa45898u));
    /* 0045cffa: mov ecx, dword ptr [0xa4589c] */ r_ecx = R32((u32)(0xa4589cu));
    /* 0045d000: mov ebp, dword ptr [0xa458a0] */ r_ebp = R32((u32)(0xa458a0u));
    /* 0045d006: mov dword ptr [esp + ebx + 0xc], edx */ W32((u32)(r_esp+r_ebx+0xcu), r_edx);
    /* 0045d00a: mov dword ptr [esp + ebx + 0x10], ecx */ W32((u32)(r_esp+r_ebx+0x10u), r_ecx);
    /* 0045d00e: mov dword ptr [esp + ebx + 0x14], ebp */ W32((u32)(r_esp+r_ebx+0x14u), r_ebp);
    /* 0045d012: jmp 0x45d06f */ goto L_0045d06f;
L_0045d014:; BB(0x0045d014);
    /* 0045d014: lea edx, [edi + edi] */ r_edx = (u32)(r_edi+r_edi);
    /* 0045d017: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0045d019: lea esi, [edx + edx] */ r_esi = (u32)(r_edx+r_edx);
    /* 0045d01c: add esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0045d01e: shl ebp, 0xc */ { u32 c = (12u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebp = r;  } }
    /* 0045d021: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0045d023: mov edx, dword ptr [0xa45888] */ r_edx = R32((u32)(0xa45888u));
    /* 0045d029: mov dword ptr [esp + esi + 0xc], edx */ W32((u32)(r_esp+r_esi+0xcu), r_edx);
    /* 0045d02d: mov edx, dword ptr [0xa4588c] */ r_edx = R32((u32)(0xa4588cu));
    /* 0045d033: mov dword ptr [esp + esi + 0x10], edx */ W32((u32)(r_esp+r_esi+0x10u), r_edx);
    /* 0045d037: mov edx, dword ptr [0xa45890] */ r_edx = R32((u32)(0xa45890u));
    /* 0045d03d: mov dword ptr [esp + esi + 0x14], edx */ W32((u32)(r_esp+r_esi+0x14u), r_edx);
    /* 0045d041: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x45d046u); f_0082dcbc();
    /* 0045d046: fld dword ptr [0xa45884] */ FPUSH(R_F32((u32)(0xa45884u)));
    /* 0045d04c: fchs  */ ST(0) = -ST(0);
    /* 0045d04e: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0045d050: fadd dword ptr [esp + esi + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_esp+r_esi+0xcu));
    /* 0045d054: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0045d056: fstp dword ptr [esp + esi + 0xc] */ W_F32((u32)(r_esp+r_esi+0xcu), ST(0)); FPOP();
    /* 0045d05a: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x45d05fu); f_0082ddd8();
    /* 0045d05f: fld dword ptr [0xa45884] */ FPUSH(R_F32((u32)(0xa45884u)));
    /* 0045d065: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0045d067: fadd dword ptr [esp + esi + 0x14] */ ST(0) = ST(0) + R_F32((u32)(r_esp+r_esi+0x14u));
    /* 0045d06b: fstp dword ptr [esp + esi + 0x14] */ W_F32((u32)(r_esp+r_esi+0x14u), ST(0)); FPOP();
L_0045d06f:; BB(0x0045d06f);
    /* 0045d06f: add ebx, 0xc */ {  u32 a = r_ebx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0045d072: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0045d075: cmp edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045d078: jl 0x45cfc3 */ if ((fS!=fO)) goto L_0045cfc3;
L_0045d07e:; BB(0x0045d07e);
    /* 0045d07e: mov ebp, dword ptr [esp + 0x44] */ r_ebp = R32((u32)(r_esp+0x44u));
    /* 0045d082: mov ebx, dword ptr [esp + 0x48] */ r_ebx = R32((u32)(r_esp+0x48u));
    /* 0045d086: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0045d08a: mov edi, dword ptr [esp + 0x1c] */ r_edi = R32((u32)(r_esp+0x1cu));
    /* 0045d08e: mov dword ptr [ebp + 0x38], eax */ W32((u32)(r_ebp+0x38u), r_eax);
    /* 0045d091: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 0045d095: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 0045d099: mov dword ptr [ebp + 0x3c], edi */ W32((u32)(r_ebp+0x3cu), r_edi);
    /* 0045d09c: mov dword ptr [ebp + 0x40], eax */ W32((u32)(r_ebp+0x40u), r_eax);
    /* 0045d09f: lea edi, [ebp + 0x38] */ r_edi = (u32)(r_ebp+0x38u);
    /* 0045d0a2: mov ecx, edi */ r_ecx = r_edi;
    /* 0045d0a4: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x45d0a9u); f_0082f9c4();
    /* 0045d0a9: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 0045d0ad: fld dword ptr [ebp + 0x3a4] */ FPUSH(R_F32((u32)(r_ebp+0x3a4u)));
    /* 0045d0b3: fld dword ptr [ebp + 0x38] */ FPUSH(R_F32((u32)(r_ebp+0x38u)));
    /* 0045d0b6: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0045d0b8: fld dword ptr [ebp + 0x3c] */ FPUSH(R_F32((u32)(r_ebp+0x3cu)));
    /* 0045d0bb: fld dword ptr [ebp + 0x40] */ FPUSH(R_F32((u32)(r_ebp+0x40u)));
    /* 0045d0be: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0045d0c0: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0045d0c2: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0045d0c4: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0045d0c6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0045d0c8: fstp dword ptr [ebp + 0x38] */ W_F32((u32)(r_ebp+0x38u), ST(0)); FPOP();
    /* 0045d0cb: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0045d0cd: fstp dword ptr [ebp + 0x3c] */ W_F32((u32)(r_ebp+0x3cu), ST(0)); FPOP();
    /* 0045d0d0: fstp dword ptr [ebp + 0x40] */ W_F32((u32)(r_ebp+0x40u), ST(0)); FPOP();
    /* 0045d0d3: mov ecx, edi */ r_ecx = r_edi;
    /* 0045d0d5: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x45d0dau); f_0082ebac();
    /* 0045d0da: mov eax, dword ptr [ebp + 0x3a0] */ r_eax = R32((u32)(r_ebp+0x3a0u));
    /* 0045d0e0: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045d0e3: mov dword ptr [ebp + 0x3a0], eax */ W32((u32)(r_ebp+0x3a0u), r_eax);
    /* 0045d0e9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0045d0eb: jl 0x45d0f4 */ if ((fS!=fO)) goto L_0045d0f4;
L_0045d0ed:; BB(0x0045d0ed);
    /* 0045d0ed: add esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0045d0f0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045d0f1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0045d0f2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0045d0f3: ret  */ FN_RET(0x0045ce84); r_esp += 4; return;
L_0045d0f4:; BB(0x0045d0f4);
    /* 0045d0f4: lea eax, [ebp + 0x42c] */ r_eax = (u32)(r_ebp+0x42cu);
    /* 0045d0fa: lea edi, [ebp + 0x440] */ r_edi = (u32)(r_ebp+0x440u);
    /* 0045d100: mov esi, eax */ r_esi = r_eax;
L_0045d102:; BB(0x0045d102);
    /* 0045d102: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 0045d104: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045d106: je 0x45d115 */ if (fZ) goto L_0045d115;
L_0045d108:; BB(0x0045d108);
    /* 0045d108: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045d109: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x45d10eu); f_005cdcc0();
    /* 0045d10e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0045d10f: mov dword ptr [esi], 0 */ W32((u32)(r_esi), 0x0u);
L_0045d115:; BB(0x0045d115);
    /* 0045d115: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0045d118: cmp edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0045d11a: ja 0x45d102 */ if ((!fC&&!fZ)) goto L_0045d102;
L_0045d11c:; BB(0x0045d11c);
    /* 0045d11c: push dword ptr [0x9a6538] */ { u32 v = R32((u32)(0x9a6538u)); r_esp -= 4; W32(r_esp, v); }
    /* 0045d122: mov dword ptr [ebp + 0x37c], 1 */ W32((u32)(r_ebp+0x37cu), 0x1u);
    /* 0045d12c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0045d12e: call 0x45d43c */ r_esp -= 4; W32(r_esp, 0x45d133u); f_0045d43c();
    /* 0045d133: mov eax, dword ptr [ebp + 0x37c] */ r_eax = R32((u32)(r_ebp+0x37cu));
    /* 0045d139: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 0045d13c: mov eax, dword ptr [edx*4 + 0x9a6528] */ r_eax = R32((u32)(r_edx*4+0x9a6528u));
    /* 0045d143: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045d145: je 0x45d14b */ if (fZ) goto L_0045d14b;
L_0045d147:; BB(0x0045d147);
    /* 0045d147: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0045d149: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x45d14bu); call_ind(t); }
L_0045d14b:; BB(0x0045d14b);
    /* 0045d14b: add esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0045d14e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045d14f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0045d150: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0045d151: ret  */ FN_RET(0x0045ce84); r_esp += 4; return;
}

