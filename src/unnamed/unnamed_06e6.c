#include "protos.h"

void f_006e614a(void)
{
    FN_ENTER(0x006e614a);
    goto L_006e614a;
L_006e6011:; BB(0x006e6011);
    /* 006e6011: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 006e6014: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006e6017: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006e6019: jge 0x6e69ba */ if ((fS==fO)) goto L_006e69ba;
L_006e601f:; BB(0x006e601f);
    /* 006e601f: mov ecx, eax */ r_ecx = r_eax;
    /* 006e6021: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006e6024: movzx ebx, word ptr [edx + ecx*8 + 0x134] */ r_ebx = (u32)R16((u32)(r_edx+r_ecx*8+0x134u));
    /* 006e602c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006e602d: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 006e6030: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006e6033: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x6e6038u); f_007b4d18();
    /* 006e6038: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006e603b: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006e603e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006e6041: movzx ecx, word ptr [eax + edx*8 + 0x13c] */ r_ecx = (u32)R16((u32)(r_eax+r_edx*8+0x13cu));
    /* 006e6049: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006e604a: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x6e604fu); f_007b4d18();
    /* 006e604f: mov ebx, eax */ r_ebx = r_eax;
    /* 006e6051: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e6054: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e6055: call 0x6ea700 */ r_esp -= 4; W32(r_esp, 0x6e605au); f_006ea700();
    /* 006e605a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e605d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e605f: je 0x6e66b3 */ if (fZ) goto L_006e66b3;
L_006e6065:; BB(0x006e6065);
    /* 006e6065: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006e6066: call 0x6ea700 */ r_esp -= 4; W32(r_esp, 0x6e606bu); f_006ea700();
    /* 006e606b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e606c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e606e: je 0x6e66b3 */ if (fZ) goto L_006e66b3;
L_006e6074:; BB(0x006e6074);
    /* 006e6074: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e6077: mov esi, dword ptr [edx + 0x30] */ r_esi = R32((u32)(r_edx+0x30u));
    /* 006e607a: test esi, 0x20000000 */ {  u32 a = r_esi; u32 b = 0x20000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e6080: je 0x6e60c7 */ if (fZ) goto L_006e60c7;
L_006e6082:; BB(0x006e6082);
    /* 006e6082: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
    /* 006e6085: test edx, 0x20000000 */ {  u32 a = r_edx; u32 b = 0x20000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e608b: je 0x6e60c7 */ if (fZ) goto L_006e60c7;
L_006e608d:; BB(0x006e608d);
    /* 006e608d: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e6090: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e6091: call 0x6ea71c */ r_esp -= 4; W32(r_esp, 0x6e6096u); f_006ea71c();
    /* 006e6096: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e6097: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e6099: je 0x6e60c7 */ if (fZ) goto L_006e60c7;
L_006e609b:; BB(0x006e609b);
    /* 006e609b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006e609c: call 0x6ea71c */ r_esp -= 4; W32(r_esp, 0x6e60a1u); f_006ea71c();
    /* 006e60a1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e60a2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e60a4: je 0x6e60c7 */ if (fZ) goto L_006e60c7;
L_006e60a6:; BB(0x006e60a6);
    /* 006e60a6: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e60a9: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006e60ab: call dword ptr [edx + 0x8c] */ { u32 t = R32((u32)(r_edx+0x8cu)); r_esp -= 4; W32(r_esp, 0x6e60b1u); call_ind(t); }
    /* 006e60b1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e60b3: je 0x6e60c7 */ if (fZ) goto L_006e60c7;
L_006e60b5:; BB(0x006e60b5);
    /* 006e60b5: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 006e60b7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006e60b9: call dword ptr [edx + 0x8c] */ { u32 t = R32((u32)(r_edx+0x8cu)); r_esp -= 4; W32(r_esp, 0x6e60bfu); call_ind(t); }
    /* 006e60bf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e60c1: jne 0x6e66b3 */ if (!fZ) goto L_006e66b3;
L_006e60c7:; BB(0x006e60c7);
    /* 006e60c7: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e60ca: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 006e60cd: lea ecx, [ebp - 0x60] */ r_ecx = (u32)(r_ebp+0xffffffa0u);
    /* 006e60d0: movsx esi, word ptr [edi + eax*4 + 0x136] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edi+r_eax*4+0x136u));
    /* 006e60d8: mov ebx, dword ptr [ebx + 0xa4] */ r_ebx = R32((u32)(r_ebx+0xa4u));
    /* 006e60de: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 006e60e1: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006e60e3: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006e60e5: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006e60e7: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006e60e9: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006e60eb: movsx esi, word ptr [edi + eax*4 + 0x13e] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edi+r_eax*4+0x13eu));
    /* 006e60f3: fld dword ptr [ebx + edx*4 + 0x1c] */ FPUSH(R_F32((u32)(r_ebx+r_edx*4+0x1cu)));
    /* 006e60f7: fld dword ptr [ebx + edx*4 + 0x20] */ FPUSH(R_F32((u32)(r_ebx+r_edx*4+0x20u)));
    /* 006e60fb: fld dword ptr [ebx + edx*4 + 0x24] */ FPUSH(R_F32((u32)(r_ebx+r_edx*4+0x24u)));
    /* 006e60ff: lea eax, [esi + esi] */ r_eax = (u32)(r_esi+r_esi);
    /* 006e6102: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006e6104: sub eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006e6106: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006e6108: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006e610a: sub eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006e610c: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e610f: mov esi, dword ptr [esi + 0xa4] */ r_esi = R32((u32)(r_esi+0xa4u));
    /* 006e6115: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 006e6117: fsub dword ptr [esi + eax*4 + 0x1c] */ ST(0) = ST(0) - R_F32((u32)(r_esi+r_eax*4+0x1cu));
    /* 006e611b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006e611d: fsub dword ptr [esi + eax*4 + 0x20] */ ST(0) = ST(0) - R_F32((u32)(r_esi+r_eax*4+0x20u));
    /* 006e6121: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 006e6123: fsub dword ptr [esi + eax*4 + 0x24] */ ST(0) = ST(0) - R_F32((u32)(r_esi+r_eax*4+0x24u));
    /* 006e6127: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006e6129: fstp dword ptr [ebp - 0x60] */ W_F32((u32)(r_ebp+0xffffffa0u), ST(0)); FPOP();
    /* 006e612c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006e612e: fstp dword ptr [ebp - 0x5c] */ W_F32((u32)(r_ebp+0xffffffa4u), ST(0)); FPOP();
    /* 006e6131: fstp dword ptr [ebp - 0x58] */ W_F32((u32)(r_ebp+0xffffffa8u), ST(0)); FPOP();
    /* 006e6134: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x6e6139u); f_0083173c();
    /* 006e6139: fstp dword ptr [ebp - 0x24] */ W_F32((u32)(r_ebp+0xffffffdcu), ST(0)); FPOP();
    /* 006e613c: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 006e613f: fcomp dword ptr [0x96d480] */ fx_compare(ST(0), R_F32((u32)(0x96d480u))); FPOP();
    /* 006e6145: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006e6147: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006e6148: je 0x6e66b3 */ if (fZ) goto L_006e66b3;
L_006e614a:; BB(0x006e614a);
    /* 006e614a: add eax, 0x4d8d0000 */ {  u32 a = r_eax; u32 b = 0x4d8d0000u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_006e614e:; BB(0x006e614e);
    /* 006e614e: lea ecx, [ebp - 0x60] */ r_ecx = (u32)(r_ebp+0xffffffa0u);
    /* 006e6150: mov al, byte ptr [0x147db2e8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(0x147db2e8u))) & 0xffu);
    /* 006e6151: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x6e6156u); f_0082df08();
    /* 006e6155: add ch, bl */ {  u32 a = (u8)(r_ecx>>8); u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; r_ecx = (r_ecx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 006e6156: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006e6157: fmul dword ptr [ebx - 0x7f40f039] */ ST(0) = ST(0) * R_F32((u32)(r_ebx+0x80bf0fc7u));
    /* 006e6158: mov eax, edi */ r_eax = r_edi;
    /* 006e615a: movsx eax, word ptr [eax + 0xc6] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0xc6u));
    /* 006e615d: mov byte ptr [eax], 0 */ W8((u32)(r_eax), 0x0u);
    /* 006e6160: add byte ptr [ebp - 0x577bf040], al */ { u32 ad = (u32)(r_ebp+0xa8840fc0u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 006e6161: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e6163: je 0x6e6611 */ if (fZ) goto L_006e6611;
    /* 006e6166: add al, 0 */ {  u32 a = (u8)r_eax; u32 b = 0x0u; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 006e6168: add byte ptr [ebx - 0x7bf0fe08], al */ { u32 ad = (u32)(r_ebx+0x840f01f8u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
L_006e6169:; BB(0x006e6169);
    /* 006e6169: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e616c: je 0x6e656f */ if (fZ) goto L_006e656f;
    /* 006e616e: std  */ rt_df = 1;
    /* 006e616f: add eax, dword ptr [eax] */ {  u32 a = r_eax; u32 b = R32((u32)(r_eax)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006e6171: add byte ptr [ebx - 0x7bf0fd08], al */ { u32 ad = (u32)(r_ebx+0x840f02f8u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
L_006e6172:; BB(0x006e6172);
    /* 006e6172: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e6175: je 0x6e64cd */ if (fZ) goto L_006e64cd;
    /* 006e6177: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e6178: add eax, dword ptr [eax] */ {  u32 a = r_eax; u32 b = R32((u32)(r_eax)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006e617a: add byte ptr [ebx - 0x7bf0fc08], al */ { u32 ad = (u32)(r_ebx+0x840f03f8u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r); fZ = (r == 0); }
L_006e617b:; BB(0x006e617b);
    /* 006e617b: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e617e: je 0x6e641e */ if (fZ) goto L_006e641e;
    /* 006e6180: lcall 0x4f8, 0x83000002 */ UNSUP(0x006e6180, "lcall 0x4f8, 0x83000002");
L_006e6184:; BB(0x006e6184);
    /* 006e6184: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e6187: jne 0x6e622f */ if (!fZ) goto L_006e622f;
L_006e618d:; BB(0x006e618d);
    /* 006e618d: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
    /* 006e6194: push 0x260 */ { u32 v = 0x260u; r_esp -= 4; W32(r_esp, v); }
    /* 006e6199: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e619eu); f_005caba4();
    /* 006e619e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e619f: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 006e61a2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e61a4: je 0x6e6223 */ if (fZ) goto L_006e6223;
L_006e61a6:; BB(0x006e61a6);
    /* 006e61a6: mov dword ptr [ebp - 0x44], 1 */ W32((u32)(r_ebp+0xffffffbcu), 0x1u);
    /* 006e61ad: mov dword ptr [ebp - 4], 0x14 */ W32((u32)(r_ebp+0xfffffffcu), 0x14u);
    /* 006e61b4: mov eax, dword ptr [0xaca344] */ r_eax = R32((u32)(0xaca344u));
    /* 006e61b9: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e61bc: mov edx, edi */ r_edx = r_edi;
    /* 006e61be: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e61c1: movsx esi, word ptr [edx + ebx*4 + 0x136] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+r_ebx*4+0x136u));
    /* 006e61c9: add esp, -0x1c */ {  u32 a = r_esp; u32 b = 0xffffffe4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e61cc: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 006e61cf: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 006e61d3: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 006e61d6: mov eax, dword ptr [edi + 0xa4] */ r_eax = R32((u32)(r_edi+0xa4u));
    /* 006e61dc: mov dword ptr [esp + 0x10], 0x3f333333 */ W32((u32)(r_esp+0x10u), 0x3f333333u);
    /* 006e61e4: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 006e61e7: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e61e9: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e61eb: mov dword ptr [esp + 0x14], 0x14000000 */ W32((u32)(r_esp+0x14u), 0x14000000u);
    /* 006e61f3: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e61f5: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e61f7: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e61f9: mov dword ptr [esp + 0x18], 0x14 */ W32((u32)(r_esp+0x18u), 0x14u);
    /* 006e6201: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6203: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6205: lea eax, [ecx + eax + 0x1c] */ r_eax = (u32)(r_ecx+r_eax+0x1cu);
    /* 006e6209: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 006e620c: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 006e6210: lea eax, [ebp - 0x60] */ r_eax = (u32)(r_ebp+0xffffffa0u);
    /* 006e6213: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 006e6217: call 0x6f3ba4 */ r_esp -= 4; W32(r_esp, 0x6e621cu); f_006f3ba4();
    /* 006e621c: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
L_006e6223:; BB(0x006e6223);
    /* 006e6223: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006e622a: jmp 0x6e64bb */ goto L_006e64bb;
L_006e622f:; BB(0x006e622f);
    /* 006e622f: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e6232: jne 0x6e64bb */ if (!fZ) goto L_006e64bb;
L_006e6238:; BB(0x006e6238);
    /* 006e6238: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
    /* 006e623f: push 0x260 */ { u32 v = 0x260u; r_esp -= 4; W32(r_esp, v); }
    /* 006e6244: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e6249u); f_005caba4();
    /* 006e6249: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e624a: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 006e624d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e624f: je 0x6e62ce */ if (fZ) goto L_006e62ce;
L_006e6251:; BB(0x006e6251);
    /* 006e6251: mov dword ptr [ebp - 0x54], 1 */ W32((u32)(r_ebp+0xffffffacu), 0x1u);
    /* 006e6258: mov dword ptr [ebp - 4], 0x11 */ W32((u32)(r_ebp+0xfffffffcu), 0x11u);
    /* 006e625f: mov eax, dword ptr [0xaca344] */ r_eax = R32((u32)(0xaca344u));
    /* 006e6264: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e6267: mov edx, edi */ r_edx = r_edi;
    /* 006e6269: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e626c: movsx esi, word ptr [edx + ebx*4 + 0x136] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+r_ebx*4+0x136u));
    /* 006e6274: add esp, -0x1c */ {  u32 a = r_esp; u32 b = 0xffffffe4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e6277: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 006e627a: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 006e627e: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 006e6281: mov eax, dword ptr [edi + 0xa4] */ r_eax = R32((u32)(r_edi+0xa4u));
    /* 006e6287: mov dword ptr [esp + 0x10], 0x40a00000 */ W32((u32)(r_esp+0x10u), 0x40a00000u);
    /* 006e628f: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 006e6292: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6294: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6296: mov dword ptr [esp + 0x14], 0x14000000 */ W32((u32)(r_esp+0x14u), 0x14000000u);
    /* 006e629e: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e62a0: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e62a2: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e62a4: mov dword ptr [esp + 0x18], 0x14 */ W32((u32)(r_esp+0x18u), 0x14u);
    /* 006e62ac: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e62ae: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e62b0: lea eax, [ecx + eax + 0x1c] */ r_eax = (u32)(r_ecx+r_eax+0x1cu);
    /* 006e62b4: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 006e62b7: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 006e62bb: lea eax, [ebp - 0x60] */ r_eax = (u32)(r_ebp+0xffffffa0u);
    /* 006e62be: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 006e62c2: call 0x6f3ba4 */ r_esp -= 4; W32(r_esp, 0x6e62c7u); f_006f3ba4();
    /* 006e62c7: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
L_006e62ce:; BB(0x006e62ce);
    /* 006e62ce: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006e62d5: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
    /* 006e62dc: push 0x260 */ { u32 v = 0x260u; r_esp -= 4; W32(r_esp, v); }
    /* 006e62e1: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e62e6u); f_005caba4();
    /* 006e62e6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e62e7: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 006e62ea: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e62ec: je 0x6e6370 */ if (fZ) goto L_006e6370;
L_006e62f2:; BB(0x006e62f2);
    /* 006e62f2: mov dword ptr [ebp - 0x4c], 1 */ W32((u32)(r_ebp+0xffffffb4u), 0x1u);
    /* 006e62f9: mov dword ptr [ebp - 4], 0x12 */ W32((u32)(r_ebp+0xfffffffcu), 0x12u);
    /* 006e6300: mov eax, dword ptr [0xaca344] */ r_eax = R32((u32)(0xaca344u));
    /* 006e6305: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e6308: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006e630b: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e630e: movsx esi, word ptr [edx + ebx*4 + 0x136] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+r_ebx*4+0x136u));
    /* 006e6316: add esp, -0x1c */ {  u32 a = r_esp; u32 b = 0xffffffe4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e6319: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 006e631c: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 006e6320: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 006e6323: mov eax, dword ptr [edi + 0xa4] */ r_eax = R32((u32)(r_edi+0xa4u));
    /* 006e6329: mov dword ptr [esp + 0x10], 0x3f000000 */ W32((u32)(r_esp+0x10u), 0x3f000000u);
    /* 006e6331: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 006e6334: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6336: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6338: mov dword ptr [esp + 0x14], 0x14000000 */ W32((u32)(r_esp+0x14u), 0x14000000u);
    /* 006e6340: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6342: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6344: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6346: mov dword ptr [esp + 0x18], 0x14 */ W32((u32)(r_esp+0x18u), 0x14u);
    /* 006e634e: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6350: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6352: lea eax, [ecx + eax + 0x1c] */ r_eax = (u32)(r_ecx+r_eax+0x1cu);
    /* 006e6356: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 006e6359: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 006e635d: lea eax, [ebp - 0x60] */ r_eax = (u32)(r_ebp+0xffffffa0u);
    /* 006e6360: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 006e6364: call 0x6f3ba4 */ r_esp -= 4; W32(r_esp, 0x6e6369u); f_006f3ba4();
    /* 006e6369: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
L_006e6370:; BB(0x006e6370);
    /* 006e6370: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006e6377: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
    /* 006e637e: push 0x260 */ { u32 v = 0x260u; r_esp -= 4; W32(r_esp, v); }
    /* 006e6383: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e6388u); f_005caba4();
    /* 006e6388: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e6389: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 006e638c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e638e: je 0x6e6412 */ if (fZ) goto L_006e6412;
L_006e6394:; BB(0x006e6394);
    /* 006e6394: mov dword ptr [ebp - 0x48], 1 */ W32((u32)(r_ebp+0xffffffb8u), 0x1u);
    /* 006e639b: mov dword ptr [ebp - 4], 0x13 */ W32((u32)(r_ebp+0xfffffffcu), 0x13u);
    /* 006e63a2: mov eax, dword ptr [0xaca344] */ r_eax = R32((u32)(0xaca344u));
    /* 006e63a7: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e63aa: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006e63ad: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e63b0: movsx esi, word ptr [edx + ebx*4 + 0x136] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+r_ebx*4+0x136u));
    /* 006e63b8: add esp, -0x1c */ {  u32 a = r_esp; u32 b = 0xffffffe4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e63bb: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 006e63be: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 006e63c2: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 006e63c5: mov eax, dword ptr [edi + 0xa4] */ r_eax = R32((u32)(r_edi+0xa4u));
    /* 006e63cb: mov dword ptr [esp + 0x10], 0x3f000000 */ W32((u32)(r_esp+0x10u), 0x3f000000u);
    /* 006e63d3: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 006e63d6: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e63d8: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e63da: mov dword ptr [esp + 0x14], 0x14000000 */ W32((u32)(r_esp+0x14u), 0x14000000u);
    /* 006e63e2: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e63e4: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e63e6: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e63e8: mov dword ptr [esp + 0x18], 0x14 */ W32((u32)(r_esp+0x18u), 0x14u);
    /* 006e63f0: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e63f2: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e63f4: lea eax, [ecx + eax + 0x1c] */ r_eax = (u32)(r_ecx+r_eax+0x1cu);
    /* 006e63f8: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 006e63fb: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 006e63ff: lea eax, [ebp - 0x60] */ r_eax = (u32)(r_ebp+0xffffffa0u);
    /* 006e6402: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 006e6406: call 0x6f3ba4 */ r_esp -= 4; W32(r_esp, 0x6e640bu); f_006f3ba4();
    /* 006e640b: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
L_006e6412:; BB(0x006e6412);
    /* 006e6412: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006e6419: jmp 0x6e64bb */ goto L_006e64bb;
L_006e641e:; BB(0x006e641e);
    /* 006e641e: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
    /* 006e6425: push 0x260 */ { u32 v = 0x260u; r_esp -= 4; W32(r_esp, v); }
    /* 006e642a: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e642fu); f_005caba4();
    /* 006e642f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e6430: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 006e6433: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e6435: je 0x6e64b4 */ if (fZ) goto L_006e64b4;
L_006e6437:; BB(0x006e6437);
    /* 006e6437: mov dword ptr [ebp - 0x40], 1 */ W32((u32)(r_ebp+0xffffffc0u), 0x1u);
    /* 006e643e: mov dword ptr [ebp - 4], 0x15 */ W32((u32)(r_ebp+0xfffffffcu), 0x15u);
    /* 006e6445: mov eax, dword ptr [0xaca344] */ r_eax = R32((u32)(0xaca344u));
    /* 006e644a: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e644d: mov edx, edi */ r_edx = r_edi;
    /* 006e644f: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e6452: movsx esi, word ptr [edx + ebx*4 + 0x136] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+r_ebx*4+0x136u));
    /* 006e645a: add esp, -0x1c */ {  u32 a = r_esp; u32 b = 0xffffffe4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e645d: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 006e6460: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 006e6464: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 006e6467: mov eax, dword ptr [edi + 0xa4] */ r_eax = R32((u32)(r_edi+0xa4u));
    /* 006e646d: mov dword ptr [esp + 0x10], 0x3f19999a */ W32((u32)(r_esp+0x10u), 0x3f19999au);
    /* 006e6475: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 006e6478: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e647a: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e647c: mov dword ptr [esp + 0x14], 0x14000000 */ W32((u32)(r_esp+0x14u), 0x14000000u);
    /* 006e6484: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6486: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6488: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e648a: mov dword ptr [esp + 0x18], 0x14 */ W32((u32)(r_esp+0x18u), 0x14u);
    /* 006e6492: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6494: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6496: lea eax, [ecx + eax + 0x1c] */ r_eax = (u32)(r_ecx+r_eax+0x1cu);
    /* 006e649a: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 006e649d: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 006e64a1: lea eax, [ebp - 0x60] */ r_eax = (u32)(r_ebp+0xffffffa0u);
    /* 006e64a4: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 006e64a8: call 0x6f3ba4 */ r_esp -= 4; W32(r_esp, 0x6e64adu); f_006f3ba4();
    /* 006e64ad: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
L_006e64b4:; BB(0x006e64b4);
    /* 006e64b4: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
L_006e64bb:; BB(0x006e64bb);
    /* 006e64bb: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006e64be: mov edx, dword ptr [eax + 0x130] */ r_edx = R32((u32)(r_eax+0x130u));
    /* 006e64c4: add dword ptr [ebp - 0x1c], 1 */ { u32 ad = (u32)(r_ebp+0xffffffe4u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 006e64c8: jmp 0x6e6011 */ goto L_006e6011;
L_006e64cd:; BB(0x006e64cd);
    /* 006e64cd: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 006e64d4: push 0x260 */ { u32 v = 0x260u; r_esp -= 4; W32(r_esp, v); }
    /* 006e64d9: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e64deu); f_005caba4();
    /* 006e64de: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e64df: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 006e64e2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e64e4: je 0x6e6563 */ if (fZ) goto L_006e6563;
L_006e64e6:; BB(0x006e64e6);
    /* 006e64e6: mov dword ptr [ebp - 0x3c], 1 */ W32((u32)(r_ebp+0xffffffc4u), 0x1u);
    /* 006e64ed: mov dword ptr [ebp - 4], 0x16 */ W32((u32)(r_ebp+0xfffffffcu), 0x16u);
    /* 006e64f4: mov eax, dword ptr [0xaca344] */ r_eax = R32((u32)(0xaca344u));
    /* 006e64f9: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e64fc: mov edx, edi */ r_edx = r_edi;
    /* 006e64fe: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e6501: movsx esi, word ptr [edx + ebx*4 + 0x136] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+r_ebx*4+0x136u));
    /* 006e6509: add esp, -0x1c */ {  u32 a = r_esp; u32 b = 0xffffffe4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e650c: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 006e650f: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 006e6513: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 006e6516: mov eax, dword ptr [edi + 0xa4] */ r_eax = R32((u32)(r_edi+0xa4u));
    /* 006e651c: mov dword ptr [esp + 0x10], 0x3f333333 */ W32((u32)(r_esp+0x10u), 0x3f333333u);
    /* 006e6524: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 006e6527: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6529: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e652b: mov dword ptr [esp + 0x14], 0x14000000 */ W32((u32)(r_esp+0x14u), 0x14000000u);
    /* 006e6533: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6535: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6537: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6539: mov dword ptr [esp + 0x18], 0x14 */ W32((u32)(r_esp+0x18u), 0x14u);
    /* 006e6541: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6543: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6545: lea eax, [ecx + eax + 0x1c] */ r_eax = (u32)(r_ecx+r_eax+0x1cu);
    /* 006e6549: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 006e654c: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 006e6550: lea eax, [ebp - 0x60] */ r_eax = (u32)(r_ebp+0xffffffa0u);
    /* 006e6553: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 006e6557: call 0x6f3ba4 */ r_esp -= 4; W32(r_esp, 0x6e655cu); f_006f3ba4();
    /* 006e655c: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_006e6563:; BB(0x006e6563);
    /* 006e6563: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006e656a: jmp 0x6e64bb */ goto L_006e64bb;
L_006e656f:; BB(0x006e656f);
    /* 006e656f: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 006e6576: push 0x260 */ { u32 v = 0x260u; r_esp -= 4; W32(r_esp, v); }
    /* 006e657b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e6580u); f_005caba4();
    /* 006e6580: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e6581: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 006e6584: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e6586: je 0x6e6605 */ if (fZ) goto L_006e6605;
L_006e6588:; BB(0x006e6588);
    /* 006e6588: mov dword ptr [ebp - 0x38], 1 */ W32((u32)(r_ebp+0xffffffc8u), 0x1u);
    /* 006e658f: mov dword ptr [ebp - 4], 0x17 */ W32((u32)(r_ebp+0xfffffffcu), 0x17u);
    /* 006e6596: mov eax, dword ptr [0xaca344] */ r_eax = R32((u32)(0xaca344u));
    /* 006e659b: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e659e: mov edx, edi */ r_edx = r_edi;
    /* 006e65a0: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e65a3: movsx esi, word ptr [edx + ebx*4 + 0x136] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+r_ebx*4+0x136u));
    /* 006e65ab: add esp, -0x1c */ {  u32 a = r_esp; u32 b = 0xffffffe4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e65ae: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 006e65b1: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 006e65b5: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 006e65b8: mov eax, dword ptr [edi + 0xa4] */ r_eax = R32((u32)(r_edi+0xa4u));
    /* 006e65be: mov dword ptr [esp + 0x10], 0x3f19999a */ W32((u32)(r_esp+0x10u), 0x3f19999au);
    /* 006e65c6: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 006e65c9: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e65cb: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e65cd: mov dword ptr [esp + 0x14], 0x14000000 */ W32((u32)(r_esp+0x14u), 0x14000000u);
    /* 006e65d5: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e65d7: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e65d9: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e65db: mov dword ptr [esp + 0x18], 0x14 */ W32((u32)(r_esp+0x18u), 0x14u);
    /* 006e65e3: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e65e5: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e65e7: lea eax, [ecx + eax + 0x1c] */ r_eax = (u32)(r_ecx+r_eax+0x1cu);
    /* 006e65eb: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 006e65ee: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 006e65f2: lea eax, [ebp - 0x60] */ r_eax = (u32)(r_ebp+0xffffffa0u);
    /* 006e65f5: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 006e65f9: call 0x6f3ba4 */ r_esp -= 4; W32(r_esp, 0x6e65feu); f_006f3ba4();
    /* 006e65fe: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_006e6605:; BB(0x006e6605);
    /* 006e6605: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006e660c: jmp 0x6e64bb */ goto L_006e64bb;
L_006e6611:; BB(0x006e6611);
    /* 006e6611: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 006e6618: push 0x260 */ { u32 v = 0x260u; r_esp -= 4; W32(r_esp, v); }
    /* 006e661d: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e6622u); f_005caba4();
    /* 006e6622: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e6623: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 006e6626: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e6628: je 0x6e66a7 */ if (fZ) goto L_006e66a7;
L_006e662a:; BB(0x006e662a);
    /* 006e662a: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 006e6631: mov dword ptr [ebp - 4], 0x18 */ W32((u32)(r_ebp+0xfffffffcu), 0x18u);
    /* 006e6638: mov eax, dword ptr [0xaca344] */ r_eax = R32((u32)(0xaca344u));
    /* 006e663d: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e6640: mov edx, edi */ r_edx = r_edi;
    /* 006e6642: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e6645: movsx esi, word ptr [edx + ebx*4 + 0x136] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+r_ebx*4+0x136u));
    /* 006e664d: add esp, -0x1c */ {  u32 a = r_esp; u32 b = 0xffffffe4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e6650: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 006e6653: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 006e6657: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 006e665a: mov eax, dword ptr [edi + 0xa4] */ r_eax = R32((u32)(r_edi+0xa4u));
    /* 006e6660: mov dword ptr [esp + 0x10], 0x3f000000 */ W32((u32)(r_esp+0x10u), 0x3f000000u);
    /* 006e6668: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 006e666b: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e666d: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e666f: mov dword ptr [esp + 0x14], 0x14000000 */ W32((u32)(r_esp+0x14u), 0x14000000u);
    /* 006e6677: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6679: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e667b: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e667d: mov dword ptr [esp + 0x18], 0x14 */ W32((u32)(r_esp+0x18u), 0x14u);
    /* 006e6685: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6687: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6689: lea eax, [ecx + eax + 0x1c] */ r_eax = (u32)(r_ecx+r_eax+0x1cu);
    /* 006e668d: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 006e6690: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 006e6694: lea eax, [ebp - 0x60] */ r_eax = (u32)(r_ebp+0xffffffa0u);
    /* 006e6697: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 006e669b: call 0x6f3ba4 */ r_esp -= 4; W32(r_esp, 0x6e66a0u); f_006f3ba4();
    /* 006e66a0: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_006e66a7:; BB(0x006e66a7);
    /* 006e66a7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006e66ae: jmp 0x6e64bb */ goto L_006e64bb;
L_006e66b3:; BB(0x006e66b3);
    /* 006e66b3: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 006e66b6: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 006e66b9: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006e66bc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006e66be: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006e66c1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006e66c8: mov esp, ebp */ r_esp = r_ebp;
    /* 006e66ca: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e66cb: ret  */ FN_RET(0x006e614a); r_esp += 4; return;
L_006e69ba:; BB(0x006e69ba);
    /* 006e69ba: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 006e69bd: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 006e69c0: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006e69c3: mov eax, 1 */ r_eax = 0x1u;
    /* 006e69c8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006e69cb: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006e69d2: mov esp, ebp */ r_esp = r_ebp;
    /* 006e69d4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e69d5: ret  */ FN_RET(0x006e614a); r_esp += 4; return;
}

void f_006e6163(void)
{
    FN_ENTER(0x006e6163);
    goto L_006e6163;
L_006e6011:; BB(0x006e6011);
    /* 006e6011: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 006e6014: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006e6017: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006e6019: jge 0x6e69ba */ if ((fS==fO)) goto L_006e69ba;
L_006e601f:; BB(0x006e601f);
    /* 006e601f: mov ecx, eax */ r_ecx = r_eax;
    /* 006e6021: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006e6024: movzx ebx, word ptr [edx + ecx*8 + 0x134] */ r_ebx = (u32)R16((u32)(r_edx+r_ecx*8+0x134u));
    /* 006e602c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006e602d: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 006e6030: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006e6033: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x6e6038u); f_007b4d18();
    /* 006e6038: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006e603b: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006e603e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006e6041: movzx ecx, word ptr [eax + edx*8 + 0x13c] */ r_ecx = (u32)R16((u32)(r_eax+r_edx*8+0x13cu));
    /* 006e6049: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006e604a: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x6e604fu); f_007b4d18();
    /* 006e604f: mov ebx, eax */ r_ebx = r_eax;
    /* 006e6051: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e6054: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e6055: call 0x6ea700 */ r_esp -= 4; W32(r_esp, 0x6e605au); f_006ea700();
    /* 006e605a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e605d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e605f: je 0x6e66b3 */ if (fZ) goto L_006e66b3;
L_006e6065:; BB(0x006e6065);
    /* 006e6065: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006e6066: call 0x6ea700 */ r_esp -= 4; W32(r_esp, 0x6e606bu); f_006ea700();
    /* 006e606b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e606c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e606e: je 0x6e66b3 */ if (fZ) goto L_006e66b3;
L_006e6074:; BB(0x006e6074);
    /* 006e6074: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e6077: mov esi, dword ptr [edx + 0x30] */ r_esi = R32((u32)(r_edx+0x30u));
    /* 006e607a: test esi, 0x20000000 */ {  u32 a = r_esi; u32 b = 0x20000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e6080: je 0x6e60c7 */ if (fZ) goto L_006e60c7;
L_006e6082:; BB(0x006e6082);
    /* 006e6082: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
    /* 006e6085: test edx, 0x20000000 */ {  u32 a = r_edx; u32 b = 0x20000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e608b: je 0x6e60c7 */ if (fZ) goto L_006e60c7;
L_006e608d:; BB(0x006e608d);
    /* 006e608d: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e6090: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e6091: call 0x6ea71c */ r_esp -= 4; W32(r_esp, 0x6e6096u); f_006ea71c();
    /* 006e6096: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e6097: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e6099: je 0x6e60c7 */ if (fZ) goto L_006e60c7;
L_006e609b:; BB(0x006e609b);
    /* 006e609b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006e609c: call 0x6ea71c */ r_esp -= 4; W32(r_esp, 0x6e60a1u); f_006ea71c();
    /* 006e60a1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e60a2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e60a4: je 0x6e60c7 */ if (fZ) goto L_006e60c7;
L_006e60a6:; BB(0x006e60a6);
    /* 006e60a6: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e60a9: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006e60ab: call dword ptr [edx + 0x8c] */ { u32 t = R32((u32)(r_edx+0x8cu)); r_esp -= 4; W32(r_esp, 0x6e60b1u); call_ind(t); }
    /* 006e60b1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e60b3: je 0x6e60c7 */ if (fZ) goto L_006e60c7;
L_006e60b5:; BB(0x006e60b5);
    /* 006e60b5: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 006e60b7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006e60b9: call dword ptr [edx + 0x8c] */ { u32 t = R32((u32)(r_edx+0x8cu)); r_esp -= 4; W32(r_esp, 0x6e60bfu); call_ind(t); }
    /* 006e60bf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e60c1: jne 0x6e66b3 */ if (!fZ) goto L_006e66b3;
L_006e60c7:; BB(0x006e60c7);
    /* 006e60c7: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e60ca: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 006e60cd: lea ecx, [ebp - 0x60] */ r_ecx = (u32)(r_ebp+0xffffffa0u);
    /* 006e60d0: movsx esi, word ptr [edi + eax*4 + 0x136] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edi+r_eax*4+0x136u));
    /* 006e60d8: mov ebx, dword ptr [ebx + 0xa4] */ r_ebx = R32((u32)(r_ebx+0xa4u));
    /* 006e60de: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 006e60e1: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006e60e3: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006e60e5: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006e60e7: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006e60e9: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006e60eb: movsx esi, word ptr [edi + eax*4 + 0x13e] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edi+r_eax*4+0x13eu));
    /* 006e60f3: fld dword ptr [ebx + edx*4 + 0x1c] */ FPUSH(R_F32((u32)(r_ebx+r_edx*4+0x1cu)));
    /* 006e60f7: fld dword ptr [ebx + edx*4 + 0x20] */ FPUSH(R_F32((u32)(r_ebx+r_edx*4+0x20u)));
    /* 006e60fb: fld dword ptr [ebx + edx*4 + 0x24] */ FPUSH(R_F32((u32)(r_ebx+r_edx*4+0x24u)));
    /* 006e60ff: lea eax, [esi + esi] */ r_eax = (u32)(r_esi+r_esi);
    /* 006e6102: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006e6104: sub eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006e6106: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006e6108: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006e610a: sub eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006e610c: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e610f: mov esi, dword ptr [esi + 0xa4] */ r_esi = R32((u32)(r_esi+0xa4u));
    /* 006e6115: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 006e6117: fsub dword ptr [esi + eax*4 + 0x1c] */ ST(0) = ST(0) - R_F32((u32)(r_esi+r_eax*4+0x1cu));
    /* 006e611b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006e611d: fsub dword ptr [esi + eax*4 + 0x20] */ ST(0) = ST(0) - R_F32((u32)(r_esi+r_eax*4+0x20u));
    /* 006e6121: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 006e6123: fsub dword ptr [esi + eax*4 + 0x24] */ ST(0) = ST(0) - R_F32((u32)(r_esi+r_eax*4+0x24u));
    /* 006e6127: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006e6129: fstp dword ptr [ebp - 0x60] */ W_F32((u32)(r_ebp+0xffffffa0u), ST(0)); FPOP();
    /* 006e612c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006e612e: fstp dword ptr [ebp - 0x5c] */ W_F32((u32)(r_ebp+0xffffffa4u), ST(0)); FPOP();
    /* 006e6131: fstp dword ptr [ebp - 0x58] */ W_F32((u32)(r_ebp+0xffffffa8u), ST(0)); FPOP();
    /* 006e6134: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x6e6139u); f_0083173c();
    /* 006e6139: fstp dword ptr [ebp - 0x24] */ W_F32((u32)(r_ebp+0xffffffdcu), ST(0)); FPOP();
    /* 006e613c: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 006e613f: fcomp dword ptr [0x96d480] */ fx_compare(ST(0), R_F32((u32)(0x96d480u))); FPOP();
    /* 006e6145: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006e6147: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006e6148: je 0x6e66b3 */ if (fZ) goto L_006e66b3;
L_006e614e:; BB(0x006e614e);
    /* 006e614e: lea ecx, [ebp - 0x60] */ r_ecx = (u32)(r_ebp+0xffffffa0u);
    /* 006e6151: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x6e6156u); f_0082df08();
    /* 006e6156: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006e6158: mov eax, edi */ r_eax = r_edi;
    /* 006e615a: movsx eax, word ptr [eax + 0xc6] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0xc6u));
    /* 006e6161: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
L_006e6163:; BB(0x006e6163);
    /* 006e6163: je 0x6e6611 */ if (fZ) goto L_006e6611;
L_006e6169:; BB(0x006e6169);
    /* 006e6169: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e616c: je 0x6e656f */ if (fZ) goto L_006e656f;
L_006e6172:; BB(0x006e6172);
    /* 006e6172: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e6175: je 0x6e64cd */ if (fZ) goto L_006e64cd;
L_006e617b:; BB(0x006e617b);
    /* 006e617b: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e617e: je 0x6e641e */ if (fZ) goto L_006e641e;
L_006e6184:; BB(0x006e6184);
    /* 006e6184: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e6187: jne 0x6e622f */ if (!fZ) goto L_006e622f;
L_006e618d:; BB(0x006e618d);
    /* 006e618d: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
    /* 006e6194: push 0x260 */ { u32 v = 0x260u; r_esp -= 4; W32(r_esp, v); }
    /* 006e6199: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e619eu); f_005caba4();
    /* 006e619e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e619f: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 006e61a2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e61a4: je 0x6e6223 */ if (fZ) goto L_006e6223;
L_006e61a6:; BB(0x006e61a6);
    /* 006e61a6: mov dword ptr [ebp - 0x44], 1 */ W32((u32)(r_ebp+0xffffffbcu), 0x1u);
    /* 006e61ad: mov dword ptr [ebp - 4], 0x14 */ W32((u32)(r_ebp+0xfffffffcu), 0x14u);
    /* 006e61b4: mov eax, dword ptr [0xaca344] */ r_eax = R32((u32)(0xaca344u));
    /* 006e61b9: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e61bc: mov edx, edi */ r_edx = r_edi;
    /* 006e61be: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e61c1: movsx esi, word ptr [edx + ebx*4 + 0x136] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+r_ebx*4+0x136u));
    /* 006e61c9: add esp, -0x1c */ {  u32 a = r_esp; u32 b = 0xffffffe4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e61cc: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 006e61cf: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 006e61d3: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 006e61d6: mov eax, dword ptr [edi + 0xa4] */ r_eax = R32((u32)(r_edi+0xa4u));
    /* 006e61dc: mov dword ptr [esp + 0x10], 0x3f333333 */ W32((u32)(r_esp+0x10u), 0x3f333333u);
    /* 006e61e4: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 006e61e7: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e61e9: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e61eb: mov dword ptr [esp + 0x14], 0x14000000 */ W32((u32)(r_esp+0x14u), 0x14000000u);
    /* 006e61f3: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e61f5: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e61f7: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e61f9: mov dword ptr [esp + 0x18], 0x14 */ W32((u32)(r_esp+0x18u), 0x14u);
    /* 006e6201: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6203: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6205: lea eax, [ecx + eax + 0x1c] */ r_eax = (u32)(r_ecx+r_eax+0x1cu);
    /* 006e6209: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 006e620c: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 006e6210: lea eax, [ebp - 0x60] */ r_eax = (u32)(r_ebp+0xffffffa0u);
    /* 006e6213: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 006e6217: call 0x6f3ba4 */ r_esp -= 4; W32(r_esp, 0x6e621cu); f_006f3ba4();
    /* 006e621c: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
L_006e6223:; BB(0x006e6223);
    /* 006e6223: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006e622a: jmp 0x6e64bb */ goto L_006e64bb;
L_006e622f:; BB(0x006e622f);
    /* 006e622f: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e6232: jne 0x6e64bb */ if (!fZ) goto L_006e64bb;
L_006e6238:; BB(0x006e6238);
    /* 006e6238: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
    /* 006e623f: push 0x260 */ { u32 v = 0x260u; r_esp -= 4; W32(r_esp, v); }
    /* 006e6244: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e6249u); f_005caba4();
    /* 006e6249: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e624a: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 006e624d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e624f: je 0x6e62ce */ if (fZ) goto L_006e62ce;
L_006e6251:; BB(0x006e6251);
    /* 006e6251: mov dword ptr [ebp - 0x54], 1 */ W32((u32)(r_ebp+0xffffffacu), 0x1u);
    /* 006e6258: mov dword ptr [ebp - 4], 0x11 */ W32((u32)(r_ebp+0xfffffffcu), 0x11u);
    /* 006e625f: mov eax, dword ptr [0xaca344] */ r_eax = R32((u32)(0xaca344u));
    /* 006e6264: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e6267: mov edx, edi */ r_edx = r_edi;
    /* 006e6269: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e626c: movsx esi, word ptr [edx + ebx*4 + 0x136] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+r_ebx*4+0x136u));
    /* 006e6274: add esp, -0x1c */ {  u32 a = r_esp; u32 b = 0xffffffe4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e6277: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 006e627a: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 006e627e: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 006e6281: mov eax, dword ptr [edi + 0xa4] */ r_eax = R32((u32)(r_edi+0xa4u));
    /* 006e6287: mov dword ptr [esp + 0x10], 0x40a00000 */ W32((u32)(r_esp+0x10u), 0x40a00000u);
    /* 006e628f: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 006e6292: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6294: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6296: mov dword ptr [esp + 0x14], 0x14000000 */ W32((u32)(r_esp+0x14u), 0x14000000u);
    /* 006e629e: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e62a0: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e62a2: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e62a4: mov dword ptr [esp + 0x18], 0x14 */ W32((u32)(r_esp+0x18u), 0x14u);
    /* 006e62ac: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e62ae: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e62b0: lea eax, [ecx + eax + 0x1c] */ r_eax = (u32)(r_ecx+r_eax+0x1cu);
    /* 006e62b4: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 006e62b7: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 006e62bb: lea eax, [ebp - 0x60] */ r_eax = (u32)(r_ebp+0xffffffa0u);
    /* 006e62be: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 006e62c2: call 0x6f3ba4 */ r_esp -= 4; W32(r_esp, 0x6e62c7u); f_006f3ba4();
    /* 006e62c7: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
L_006e62ce:; BB(0x006e62ce);
    /* 006e62ce: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006e62d5: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
    /* 006e62dc: push 0x260 */ { u32 v = 0x260u; r_esp -= 4; W32(r_esp, v); }
    /* 006e62e1: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e62e6u); f_005caba4();
    /* 006e62e6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e62e7: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 006e62ea: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e62ec: je 0x6e6370 */ if (fZ) goto L_006e6370;
L_006e62f2:; BB(0x006e62f2);
    /* 006e62f2: mov dword ptr [ebp - 0x4c], 1 */ W32((u32)(r_ebp+0xffffffb4u), 0x1u);
    /* 006e62f9: mov dword ptr [ebp - 4], 0x12 */ W32((u32)(r_ebp+0xfffffffcu), 0x12u);
    /* 006e6300: mov eax, dword ptr [0xaca344] */ r_eax = R32((u32)(0xaca344u));
    /* 006e6305: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e6308: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006e630b: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e630e: movsx esi, word ptr [edx + ebx*4 + 0x136] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+r_ebx*4+0x136u));
    /* 006e6316: add esp, -0x1c */ {  u32 a = r_esp; u32 b = 0xffffffe4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e6319: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 006e631c: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 006e6320: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 006e6323: mov eax, dword ptr [edi + 0xa4] */ r_eax = R32((u32)(r_edi+0xa4u));
    /* 006e6329: mov dword ptr [esp + 0x10], 0x3f000000 */ W32((u32)(r_esp+0x10u), 0x3f000000u);
    /* 006e6331: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 006e6334: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6336: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6338: mov dword ptr [esp + 0x14], 0x14000000 */ W32((u32)(r_esp+0x14u), 0x14000000u);
    /* 006e6340: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6342: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6344: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6346: mov dword ptr [esp + 0x18], 0x14 */ W32((u32)(r_esp+0x18u), 0x14u);
    /* 006e634e: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6350: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6352: lea eax, [ecx + eax + 0x1c] */ r_eax = (u32)(r_ecx+r_eax+0x1cu);
    /* 006e6356: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 006e6359: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 006e635d: lea eax, [ebp - 0x60] */ r_eax = (u32)(r_ebp+0xffffffa0u);
    /* 006e6360: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 006e6364: call 0x6f3ba4 */ r_esp -= 4; W32(r_esp, 0x6e6369u); f_006f3ba4();
    /* 006e6369: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
L_006e6370:; BB(0x006e6370);
    /* 006e6370: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006e6377: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
    /* 006e637e: push 0x260 */ { u32 v = 0x260u; r_esp -= 4; W32(r_esp, v); }
    /* 006e6383: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e6388u); f_005caba4();
    /* 006e6388: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e6389: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 006e638c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e638e: je 0x6e6412 */ if (fZ) goto L_006e6412;
L_006e6394:; BB(0x006e6394);
    /* 006e6394: mov dword ptr [ebp - 0x48], 1 */ W32((u32)(r_ebp+0xffffffb8u), 0x1u);
    /* 006e639b: mov dword ptr [ebp - 4], 0x13 */ W32((u32)(r_ebp+0xfffffffcu), 0x13u);
    /* 006e63a2: mov eax, dword ptr [0xaca344] */ r_eax = R32((u32)(0xaca344u));
    /* 006e63a7: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e63aa: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006e63ad: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e63b0: movsx esi, word ptr [edx + ebx*4 + 0x136] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+r_ebx*4+0x136u));
    /* 006e63b8: add esp, -0x1c */ {  u32 a = r_esp; u32 b = 0xffffffe4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e63bb: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 006e63be: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 006e63c2: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 006e63c5: mov eax, dword ptr [edi + 0xa4] */ r_eax = R32((u32)(r_edi+0xa4u));
    /* 006e63cb: mov dword ptr [esp + 0x10], 0x3f000000 */ W32((u32)(r_esp+0x10u), 0x3f000000u);
    /* 006e63d3: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 006e63d6: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e63d8: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e63da: mov dword ptr [esp + 0x14], 0x14000000 */ W32((u32)(r_esp+0x14u), 0x14000000u);
    /* 006e63e2: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e63e4: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e63e6: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e63e8: mov dword ptr [esp + 0x18], 0x14 */ W32((u32)(r_esp+0x18u), 0x14u);
    /* 006e63f0: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e63f2: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e63f4: lea eax, [ecx + eax + 0x1c] */ r_eax = (u32)(r_ecx+r_eax+0x1cu);
    /* 006e63f8: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 006e63fb: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 006e63ff: lea eax, [ebp - 0x60] */ r_eax = (u32)(r_ebp+0xffffffa0u);
    /* 006e6402: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 006e6406: call 0x6f3ba4 */ r_esp -= 4; W32(r_esp, 0x6e640bu); f_006f3ba4();
    /* 006e640b: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
L_006e6412:; BB(0x006e6412);
    /* 006e6412: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006e6419: jmp 0x6e64bb */ goto L_006e64bb;
L_006e641e:; BB(0x006e641e);
    /* 006e641e: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
    /* 006e6425: push 0x260 */ { u32 v = 0x260u; r_esp -= 4; W32(r_esp, v); }
    /* 006e642a: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e642fu); f_005caba4();
    /* 006e642f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e6430: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 006e6433: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e6435: je 0x6e64b4 */ if (fZ) goto L_006e64b4;
L_006e6437:; BB(0x006e6437);
    /* 006e6437: mov dword ptr [ebp - 0x40], 1 */ W32((u32)(r_ebp+0xffffffc0u), 0x1u);
    /* 006e643e: mov dword ptr [ebp - 4], 0x15 */ W32((u32)(r_ebp+0xfffffffcu), 0x15u);
    /* 006e6445: mov eax, dword ptr [0xaca344] */ r_eax = R32((u32)(0xaca344u));
    /* 006e644a: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e644d: mov edx, edi */ r_edx = r_edi;
    /* 006e644f: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e6452: movsx esi, word ptr [edx + ebx*4 + 0x136] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+r_ebx*4+0x136u));
    /* 006e645a: add esp, -0x1c */ {  u32 a = r_esp; u32 b = 0xffffffe4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e645d: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 006e6460: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 006e6464: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 006e6467: mov eax, dword ptr [edi + 0xa4] */ r_eax = R32((u32)(r_edi+0xa4u));
    /* 006e646d: mov dword ptr [esp + 0x10], 0x3f19999a */ W32((u32)(r_esp+0x10u), 0x3f19999au);
    /* 006e6475: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 006e6478: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e647a: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e647c: mov dword ptr [esp + 0x14], 0x14000000 */ W32((u32)(r_esp+0x14u), 0x14000000u);
    /* 006e6484: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6486: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6488: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e648a: mov dword ptr [esp + 0x18], 0x14 */ W32((u32)(r_esp+0x18u), 0x14u);
    /* 006e6492: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6494: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6496: lea eax, [ecx + eax + 0x1c] */ r_eax = (u32)(r_ecx+r_eax+0x1cu);
    /* 006e649a: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 006e649d: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 006e64a1: lea eax, [ebp - 0x60] */ r_eax = (u32)(r_ebp+0xffffffa0u);
    /* 006e64a4: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 006e64a8: call 0x6f3ba4 */ r_esp -= 4; W32(r_esp, 0x6e64adu); f_006f3ba4();
    /* 006e64ad: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
L_006e64b4:; BB(0x006e64b4);
    /* 006e64b4: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
L_006e64bb:; BB(0x006e64bb);
    /* 006e64bb: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006e64be: mov edx, dword ptr [eax + 0x130] */ r_edx = R32((u32)(r_eax+0x130u));
    /* 006e64c4: add dword ptr [ebp - 0x1c], 1 */ { u32 ad = (u32)(r_ebp+0xffffffe4u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 006e64c8: jmp 0x6e6011 */ goto L_006e6011;
L_006e64cd:; BB(0x006e64cd);
    /* 006e64cd: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 006e64d4: push 0x260 */ { u32 v = 0x260u; r_esp -= 4; W32(r_esp, v); }
    /* 006e64d9: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e64deu); f_005caba4();
    /* 006e64de: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e64df: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 006e64e2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e64e4: je 0x6e6563 */ if (fZ) goto L_006e6563;
L_006e64e6:; BB(0x006e64e6);
    /* 006e64e6: mov dword ptr [ebp - 0x3c], 1 */ W32((u32)(r_ebp+0xffffffc4u), 0x1u);
    /* 006e64ed: mov dword ptr [ebp - 4], 0x16 */ W32((u32)(r_ebp+0xfffffffcu), 0x16u);
    /* 006e64f4: mov eax, dword ptr [0xaca344] */ r_eax = R32((u32)(0xaca344u));
    /* 006e64f9: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e64fc: mov edx, edi */ r_edx = r_edi;
    /* 006e64fe: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e6501: movsx esi, word ptr [edx + ebx*4 + 0x136] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+r_ebx*4+0x136u));
    /* 006e6509: add esp, -0x1c */ {  u32 a = r_esp; u32 b = 0xffffffe4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e650c: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 006e650f: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 006e6513: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 006e6516: mov eax, dword ptr [edi + 0xa4] */ r_eax = R32((u32)(r_edi+0xa4u));
    /* 006e651c: mov dword ptr [esp + 0x10], 0x3f333333 */ W32((u32)(r_esp+0x10u), 0x3f333333u);
    /* 006e6524: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 006e6527: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6529: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e652b: mov dword ptr [esp + 0x14], 0x14000000 */ W32((u32)(r_esp+0x14u), 0x14000000u);
    /* 006e6533: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6535: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6537: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6539: mov dword ptr [esp + 0x18], 0x14 */ W32((u32)(r_esp+0x18u), 0x14u);
    /* 006e6541: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6543: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6545: lea eax, [ecx + eax + 0x1c] */ r_eax = (u32)(r_ecx+r_eax+0x1cu);
    /* 006e6549: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 006e654c: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 006e6550: lea eax, [ebp - 0x60] */ r_eax = (u32)(r_ebp+0xffffffa0u);
    /* 006e6553: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 006e6557: call 0x6f3ba4 */ r_esp -= 4; W32(r_esp, 0x6e655cu); f_006f3ba4();
    /* 006e655c: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_006e6563:; BB(0x006e6563);
    /* 006e6563: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006e656a: jmp 0x6e64bb */ goto L_006e64bb;
L_006e656f:; BB(0x006e656f);
    /* 006e656f: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 006e6576: push 0x260 */ { u32 v = 0x260u; r_esp -= 4; W32(r_esp, v); }
    /* 006e657b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e6580u); f_005caba4();
    /* 006e6580: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e6581: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 006e6584: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e6586: je 0x6e6605 */ if (fZ) goto L_006e6605;
L_006e6588:; BB(0x006e6588);
    /* 006e6588: mov dword ptr [ebp - 0x38], 1 */ W32((u32)(r_ebp+0xffffffc8u), 0x1u);
    /* 006e658f: mov dword ptr [ebp - 4], 0x17 */ W32((u32)(r_ebp+0xfffffffcu), 0x17u);
    /* 006e6596: mov eax, dword ptr [0xaca344] */ r_eax = R32((u32)(0xaca344u));
    /* 006e659b: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e659e: mov edx, edi */ r_edx = r_edi;
    /* 006e65a0: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e65a3: movsx esi, word ptr [edx + ebx*4 + 0x136] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+r_ebx*4+0x136u));
    /* 006e65ab: add esp, -0x1c */ {  u32 a = r_esp; u32 b = 0xffffffe4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e65ae: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 006e65b1: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 006e65b5: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 006e65b8: mov eax, dword ptr [edi + 0xa4] */ r_eax = R32((u32)(r_edi+0xa4u));
    /* 006e65be: mov dword ptr [esp + 0x10], 0x3f19999a */ W32((u32)(r_esp+0x10u), 0x3f19999au);
    /* 006e65c6: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 006e65c9: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e65cb: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e65cd: mov dword ptr [esp + 0x14], 0x14000000 */ W32((u32)(r_esp+0x14u), 0x14000000u);
    /* 006e65d5: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e65d7: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e65d9: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e65db: mov dword ptr [esp + 0x18], 0x14 */ W32((u32)(r_esp+0x18u), 0x14u);
    /* 006e65e3: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e65e5: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e65e7: lea eax, [ecx + eax + 0x1c] */ r_eax = (u32)(r_ecx+r_eax+0x1cu);
    /* 006e65eb: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 006e65ee: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 006e65f2: lea eax, [ebp - 0x60] */ r_eax = (u32)(r_ebp+0xffffffa0u);
    /* 006e65f5: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 006e65f9: call 0x6f3ba4 */ r_esp -= 4; W32(r_esp, 0x6e65feu); f_006f3ba4();
    /* 006e65fe: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_006e6605:; BB(0x006e6605);
    /* 006e6605: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006e660c: jmp 0x6e64bb */ goto L_006e64bb;
L_006e6611:; BB(0x006e6611);
    /* 006e6611: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 006e6618: push 0x260 */ { u32 v = 0x260u; r_esp -= 4; W32(r_esp, v); }
    /* 006e661d: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e6622u); f_005caba4();
    /* 006e6622: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e6623: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 006e6626: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e6628: je 0x6e66a7 */ if (fZ) goto L_006e66a7;
L_006e662a:; BB(0x006e662a);
    /* 006e662a: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 006e6631: mov dword ptr [ebp - 4], 0x18 */ W32((u32)(r_ebp+0xfffffffcu), 0x18u);
    /* 006e6638: mov eax, dword ptr [0xaca344] */ r_eax = R32((u32)(0xaca344u));
    /* 006e663d: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e6640: mov edx, edi */ r_edx = r_edi;
    /* 006e6642: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e6645: movsx esi, word ptr [edx + ebx*4 + 0x136] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+r_ebx*4+0x136u));
    /* 006e664d: add esp, -0x1c */ {  u32 a = r_esp; u32 b = 0xffffffe4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e6650: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 006e6653: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 006e6657: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 006e665a: mov eax, dword ptr [edi + 0xa4] */ r_eax = R32((u32)(r_edi+0xa4u));
    /* 006e6660: mov dword ptr [esp + 0x10], 0x3f000000 */ W32((u32)(r_esp+0x10u), 0x3f000000u);
    /* 006e6668: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 006e666b: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e666d: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e666f: mov dword ptr [esp + 0x14], 0x14000000 */ W32((u32)(r_esp+0x14u), 0x14000000u);
    /* 006e6677: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6679: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e667b: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e667d: mov dword ptr [esp + 0x18], 0x14 */ W32((u32)(r_esp+0x18u), 0x14u);
    /* 006e6685: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6687: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6689: lea eax, [ecx + eax + 0x1c] */ r_eax = (u32)(r_ecx+r_eax+0x1cu);
    /* 006e668d: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 006e6690: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 006e6694: lea eax, [ebp - 0x60] */ r_eax = (u32)(r_ebp+0xffffffa0u);
    /* 006e6697: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 006e669b: call 0x6f3ba4 */ r_esp -= 4; W32(r_esp, 0x6e66a0u); f_006f3ba4();
    /* 006e66a0: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_006e66a7:; BB(0x006e66a7);
    /* 006e66a7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006e66ae: jmp 0x6e64bb */ goto L_006e64bb;
L_006e66b3:; BB(0x006e66b3);
    /* 006e66b3: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 006e66b6: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 006e66b9: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006e66bc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006e66be: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006e66c1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006e66c8: mov esp, ebp */ r_esp = r_ebp;
    /* 006e66ca: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e66cb: ret  */ FN_RET(0x006e6163); r_esp += 4; return;
L_006e69ba:; BB(0x006e69ba);
    /* 006e69ba: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 006e69bd: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 006e69c0: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006e69c3: mov eax, 1 */ r_eax = 0x1u;
    /* 006e69c8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006e69cb: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006e69d2: mov esp, ebp */ r_esp = r_ebp;
    /* 006e69d4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e69d5: ret  */ FN_RET(0x006e6163); r_esp += 4; return;
}

void f_006e6169(void)
{
    FN_ENTER(0x006e6169);
    goto L_006e6169;
L_006e6011:; BB(0x006e6011);
    /* 006e6011: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 006e6014: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006e6017: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006e6019: jge 0x6e69ba */ if ((fS==fO)) goto L_006e69ba;
L_006e601f:; BB(0x006e601f);
    /* 006e601f: mov ecx, eax */ r_ecx = r_eax;
    /* 006e6021: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006e6024: movzx ebx, word ptr [edx + ecx*8 + 0x134] */ r_ebx = (u32)R16((u32)(r_edx+r_ecx*8+0x134u));
    /* 006e602c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006e602d: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 006e6030: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006e6033: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x6e6038u); f_007b4d18();
    /* 006e6038: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006e603b: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006e603e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006e6041: movzx ecx, word ptr [eax + edx*8 + 0x13c] */ r_ecx = (u32)R16((u32)(r_eax+r_edx*8+0x13cu));
    /* 006e6049: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006e604a: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x6e604fu); f_007b4d18();
    /* 006e604f: mov ebx, eax */ r_ebx = r_eax;
    /* 006e6051: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e6054: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e6055: call 0x6ea700 */ r_esp -= 4; W32(r_esp, 0x6e605au); f_006ea700();
    /* 006e605a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e605d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e605f: je 0x6e66b3 */ if (fZ) goto L_006e66b3;
L_006e6065:; BB(0x006e6065);
    /* 006e6065: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006e6066: call 0x6ea700 */ r_esp -= 4; W32(r_esp, 0x6e606bu); f_006ea700();
    /* 006e606b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e606c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e606e: je 0x6e66b3 */ if (fZ) goto L_006e66b3;
L_006e6074:; BB(0x006e6074);
    /* 006e6074: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e6077: mov esi, dword ptr [edx + 0x30] */ r_esi = R32((u32)(r_edx+0x30u));
    /* 006e607a: test esi, 0x20000000 */ {  u32 a = r_esi; u32 b = 0x20000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e6080: je 0x6e60c7 */ if (fZ) goto L_006e60c7;
L_006e6082:; BB(0x006e6082);
    /* 006e6082: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
    /* 006e6085: test edx, 0x20000000 */ {  u32 a = r_edx; u32 b = 0x20000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e608b: je 0x6e60c7 */ if (fZ) goto L_006e60c7;
L_006e608d:; BB(0x006e608d);
    /* 006e608d: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e6090: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e6091: call 0x6ea71c */ r_esp -= 4; W32(r_esp, 0x6e6096u); f_006ea71c();
    /* 006e6096: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e6097: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e6099: je 0x6e60c7 */ if (fZ) goto L_006e60c7;
L_006e609b:; BB(0x006e609b);
    /* 006e609b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006e609c: call 0x6ea71c */ r_esp -= 4; W32(r_esp, 0x6e60a1u); f_006ea71c();
    /* 006e60a1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e60a2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e60a4: je 0x6e60c7 */ if (fZ) goto L_006e60c7;
L_006e60a6:; BB(0x006e60a6);
    /* 006e60a6: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e60a9: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006e60ab: call dword ptr [edx + 0x8c] */ { u32 t = R32((u32)(r_edx+0x8cu)); r_esp -= 4; W32(r_esp, 0x6e60b1u); call_ind(t); }
    /* 006e60b1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e60b3: je 0x6e60c7 */ if (fZ) goto L_006e60c7;
L_006e60b5:; BB(0x006e60b5);
    /* 006e60b5: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 006e60b7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006e60b9: call dword ptr [edx + 0x8c] */ { u32 t = R32((u32)(r_edx+0x8cu)); r_esp -= 4; W32(r_esp, 0x6e60bfu); call_ind(t); }
    /* 006e60bf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e60c1: jne 0x6e66b3 */ if (!fZ) goto L_006e66b3;
L_006e60c7:; BB(0x006e60c7);
    /* 006e60c7: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e60ca: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 006e60cd: lea ecx, [ebp - 0x60] */ r_ecx = (u32)(r_ebp+0xffffffa0u);
    /* 006e60d0: movsx esi, word ptr [edi + eax*4 + 0x136] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edi+r_eax*4+0x136u));
    /* 006e60d8: mov ebx, dword ptr [ebx + 0xa4] */ r_ebx = R32((u32)(r_ebx+0xa4u));
    /* 006e60de: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 006e60e1: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006e60e3: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006e60e5: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006e60e7: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006e60e9: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006e60eb: movsx esi, word ptr [edi + eax*4 + 0x13e] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edi+r_eax*4+0x13eu));
    /* 006e60f3: fld dword ptr [ebx + edx*4 + 0x1c] */ FPUSH(R_F32((u32)(r_ebx+r_edx*4+0x1cu)));
    /* 006e60f7: fld dword ptr [ebx + edx*4 + 0x20] */ FPUSH(R_F32((u32)(r_ebx+r_edx*4+0x20u)));
    /* 006e60fb: fld dword ptr [ebx + edx*4 + 0x24] */ FPUSH(R_F32((u32)(r_ebx+r_edx*4+0x24u)));
    /* 006e60ff: lea eax, [esi + esi] */ r_eax = (u32)(r_esi+r_esi);
    /* 006e6102: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006e6104: sub eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006e6106: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006e6108: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006e610a: sub eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006e610c: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e610f: mov esi, dword ptr [esi + 0xa4] */ r_esi = R32((u32)(r_esi+0xa4u));
    /* 006e6115: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 006e6117: fsub dword ptr [esi + eax*4 + 0x1c] */ ST(0) = ST(0) - R_F32((u32)(r_esi+r_eax*4+0x1cu));
    /* 006e611b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006e611d: fsub dword ptr [esi + eax*4 + 0x20] */ ST(0) = ST(0) - R_F32((u32)(r_esi+r_eax*4+0x20u));
    /* 006e6121: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 006e6123: fsub dword ptr [esi + eax*4 + 0x24] */ ST(0) = ST(0) - R_F32((u32)(r_esi+r_eax*4+0x24u));
    /* 006e6127: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006e6129: fstp dword ptr [ebp - 0x60] */ W_F32((u32)(r_ebp+0xffffffa0u), ST(0)); FPOP();
    /* 006e612c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006e612e: fstp dword ptr [ebp - 0x5c] */ W_F32((u32)(r_ebp+0xffffffa4u), ST(0)); FPOP();
    /* 006e6131: fstp dword ptr [ebp - 0x58] */ W_F32((u32)(r_ebp+0xffffffa8u), ST(0)); FPOP();
    /* 006e6134: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x6e6139u); f_0083173c();
    /* 006e6139: fstp dword ptr [ebp - 0x24] */ W_F32((u32)(r_ebp+0xffffffdcu), ST(0)); FPOP();
    /* 006e613c: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 006e613f: fcomp dword ptr [0x96d480] */ fx_compare(ST(0), R_F32((u32)(0x96d480u))); FPOP();
    /* 006e6145: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006e6147: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006e6148: je 0x6e66b3 */ if (fZ) goto L_006e66b3;
L_006e614e:; BB(0x006e614e);
    /* 006e614e: lea ecx, [ebp - 0x60] */ r_ecx = (u32)(r_ebp+0xffffffa0u);
    /* 006e6151: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x6e6156u); f_0082df08();
    /* 006e6156: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006e6158: mov eax, edi */ r_eax = r_edi;
    /* 006e615a: movsx eax, word ptr [eax + 0xc6] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0xc6u));
    /* 006e6161: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e6163: je 0x6e6611 */ if (fZ) goto L_006e6611;
L_006e6169:; BB(0x006e6169);
    /* 006e6169: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e616c: je 0x6e656f */ if (fZ) goto L_006e656f;
L_006e6172:; BB(0x006e6172);
    /* 006e6172: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e6175: je 0x6e64cd */ if (fZ) goto L_006e64cd;
L_006e617b:; BB(0x006e617b);
    /* 006e617b: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e617e: je 0x6e641e */ if (fZ) goto L_006e641e;
L_006e6184:; BB(0x006e6184);
    /* 006e6184: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e6187: jne 0x6e622f */ if (!fZ) goto L_006e622f;
L_006e618d:; BB(0x006e618d);
    /* 006e618d: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
    /* 006e6194: push 0x260 */ { u32 v = 0x260u; r_esp -= 4; W32(r_esp, v); }
    /* 006e6199: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e619eu); f_005caba4();
    /* 006e619e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e619f: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 006e61a2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e61a4: je 0x6e6223 */ if (fZ) goto L_006e6223;
L_006e61a6:; BB(0x006e61a6);
    /* 006e61a6: mov dword ptr [ebp - 0x44], 1 */ W32((u32)(r_ebp+0xffffffbcu), 0x1u);
    /* 006e61ad: mov dword ptr [ebp - 4], 0x14 */ W32((u32)(r_ebp+0xfffffffcu), 0x14u);
    /* 006e61b4: mov eax, dword ptr [0xaca344] */ r_eax = R32((u32)(0xaca344u));
    /* 006e61b9: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e61bc: mov edx, edi */ r_edx = r_edi;
    /* 006e61be: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e61c1: movsx esi, word ptr [edx + ebx*4 + 0x136] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+r_ebx*4+0x136u));
    /* 006e61c9: add esp, -0x1c */ {  u32 a = r_esp; u32 b = 0xffffffe4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e61cc: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 006e61cf: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 006e61d3: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 006e61d6: mov eax, dword ptr [edi + 0xa4] */ r_eax = R32((u32)(r_edi+0xa4u));
    /* 006e61dc: mov dword ptr [esp + 0x10], 0x3f333333 */ W32((u32)(r_esp+0x10u), 0x3f333333u);
    /* 006e61e4: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 006e61e7: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e61e9: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e61eb: mov dword ptr [esp + 0x14], 0x14000000 */ W32((u32)(r_esp+0x14u), 0x14000000u);
    /* 006e61f3: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e61f5: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e61f7: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e61f9: mov dword ptr [esp + 0x18], 0x14 */ W32((u32)(r_esp+0x18u), 0x14u);
    /* 006e6201: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6203: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6205: lea eax, [ecx + eax + 0x1c] */ r_eax = (u32)(r_ecx+r_eax+0x1cu);
    /* 006e6209: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 006e620c: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 006e6210: lea eax, [ebp - 0x60] */ r_eax = (u32)(r_ebp+0xffffffa0u);
    /* 006e6213: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 006e6217: call 0x6f3ba4 */ r_esp -= 4; W32(r_esp, 0x6e621cu); f_006f3ba4();
    /* 006e621c: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
L_006e6223:; BB(0x006e6223);
    /* 006e6223: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006e622a: jmp 0x6e64bb */ goto L_006e64bb;
L_006e622f:; BB(0x006e622f);
    /* 006e622f: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e6232: jne 0x6e64bb */ if (!fZ) goto L_006e64bb;
L_006e6238:; BB(0x006e6238);
    /* 006e6238: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
    /* 006e623f: push 0x260 */ { u32 v = 0x260u; r_esp -= 4; W32(r_esp, v); }
    /* 006e6244: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e6249u); f_005caba4();
    /* 006e6249: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e624a: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 006e624d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e624f: je 0x6e62ce */ if (fZ) goto L_006e62ce;
L_006e6251:; BB(0x006e6251);
    /* 006e6251: mov dword ptr [ebp - 0x54], 1 */ W32((u32)(r_ebp+0xffffffacu), 0x1u);
    /* 006e6258: mov dword ptr [ebp - 4], 0x11 */ W32((u32)(r_ebp+0xfffffffcu), 0x11u);
    /* 006e625f: mov eax, dword ptr [0xaca344] */ r_eax = R32((u32)(0xaca344u));
    /* 006e6264: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e6267: mov edx, edi */ r_edx = r_edi;
    /* 006e6269: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e626c: movsx esi, word ptr [edx + ebx*4 + 0x136] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+r_ebx*4+0x136u));
    /* 006e6274: add esp, -0x1c */ {  u32 a = r_esp; u32 b = 0xffffffe4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e6277: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 006e627a: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 006e627e: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 006e6281: mov eax, dword ptr [edi + 0xa4] */ r_eax = R32((u32)(r_edi+0xa4u));
    /* 006e6287: mov dword ptr [esp + 0x10], 0x40a00000 */ W32((u32)(r_esp+0x10u), 0x40a00000u);
    /* 006e628f: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 006e6292: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6294: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6296: mov dword ptr [esp + 0x14], 0x14000000 */ W32((u32)(r_esp+0x14u), 0x14000000u);
    /* 006e629e: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e62a0: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e62a2: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e62a4: mov dword ptr [esp + 0x18], 0x14 */ W32((u32)(r_esp+0x18u), 0x14u);
    /* 006e62ac: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e62ae: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e62b0: lea eax, [ecx + eax + 0x1c] */ r_eax = (u32)(r_ecx+r_eax+0x1cu);
    /* 006e62b4: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 006e62b7: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 006e62bb: lea eax, [ebp - 0x60] */ r_eax = (u32)(r_ebp+0xffffffa0u);
    /* 006e62be: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 006e62c2: call 0x6f3ba4 */ r_esp -= 4; W32(r_esp, 0x6e62c7u); f_006f3ba4();
    /* 006e62c7: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
L_006e62ce:; BB(0x006e62ce);
    /* 006e62ce: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006e62d5: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
    /* 006e62dc: push 0x260 */ { u32 v = 0x260u; r_esp -= 4; W32(r_esp, v); }
    /* 006e62e1: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e62e6u); f_005caba4();
    /* 006e62e6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e62e7: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 006e62ea: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e62ec: je 0x6e6370 */ if (fZ) goto L_006e6370;
L_006e62f2:; BB(0x006e62f2);
    /* 006e62f2: mov dword ptr [ebp - 0x4c], 1 */ W32((u32)(r_ebp+0xffffffb4u), 0x1u);
    /* 006e62f9: mov dword ptr [ebp - 4], 0x12 */ W32((u32)(r_ebp+0xfffffffcu), 0x12u);
    /* 006e6300: mov eax, dword ptr [0xaca344] */ r_eax = R32((u32)(0xaca344u));
    /* 006e6305: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e6308: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006e630b: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e630e: movsx esi, word ptr [edx + ebx*4 + 0x136] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+r_ebx*4+0x136u));
    /* 006e6316: add esp, -0x1c */ {  u32 a = r_esp; u32 b = 0xffffffe4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e6319: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 006e631c: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 006e6320: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 006e6323: mov eax, dword ptr [edi + 0xa4] */ r_eax = R32((u32)(r_edi+0xa4u));
    /* 006e6329: mov dword ptr [esp + 0x10], 0x3f000000 */ W32((u32)(r_esp+0x10u), 0x3f000000u);
    /* 006e6331: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 006e6334: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6336: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6338: mov dword ptr [esp + 0x14], 0x14000000 */ W32((u32)(r_esp+0x14u), 0x14000000u);
    /* 006e6340: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6342: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6344: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6346: mov dword ptr [esp + 0x18], 0x14 */ W32((u32)(r_esp+0x18u), 0x14u);
    /* 006e634e: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6350: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6352: lea eax, [ecx + eax + 0x1c] */ r_eax = (u32)(r_ecx+r_eax+0x1cu);
    /* 006e6356: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 006e6359: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 006e635d: lea eax, [ebp - 0x60] */ r_eax = (u32)(r_ebp+0xffffffa0u);
    /* 006e6360: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 006e6364: call 0x6f3ba4 */ r_esp -= 4; W32(r_esp, 0x6e6369u); f_006f3ba4();
    /* 006e6369: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
L_006e6370:; BB(0x006e6370);
    /* 006e6370: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006e6377: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
    /* 006e637e: push 0x260 */ { u32 v = 0x260u; r_esp -= 4; W32(r_esp, v); }
    /* 006e6383: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e6388u); f_005caba4();
    /* 006e6388: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e6389: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 006e638c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e638e: je 0x6e6412 */ if (fZ) goto L_006e6412;
L_006e6394:; BB(0x006e6394);
    /* 006e6394: mov dword ptr [ebp - 0x48], 1 */ W32((u32)(r_ebp+0xffffffb8u), 0x1u);
    /* 006e639b: mov dword ptr [ebp - 4], 0x13 */ W32((u32)(r_ebp+0xfffffffcu), 0x13u);
    /* 006e63a2: mov eax, dword ptr [0xaca344] */ r_eax = R32((u32)(0xaca344u));
    /* 006e63a7: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e63aa: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006e63ad: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e63b0: movsx esi, word ptr [edx + ebx*4 + 0x136] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+r_ebx*4+0x136u));
    /* 006e63b8: add esp, -0x1c */ {  u32 a = r_esp; u32 b = 0xffffffe4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e63bb: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 006e63be: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 006e63c2: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 006e63c5: mov eax, dword ptr [edi + 0xa4] */ r_eax = R32((u32)(r_edi+0xa4u));
    /* 006e63cb: mov dword ptr [esp + 0x10], 0x3f000000 */ W32((u32)(r_esp+0x10u), 0x3f000000u);
    /* 006e63d3: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 006e63d6: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e63d8: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e63da: mov dword ptr [esp + 0x14], 0x14000000 */ W32((u32)(r_esp+0x14u), 0x14000000u);
    /* 006e63e2: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e63e4: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e63e6: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e63e8: mov dword ptr [esp + 0x18], 0x14 */ W32((u32)(r_esp+0x18u), 0x14u);
    /* 006e63f0: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e63f2: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e63f4: lea eax, [ecx + eax + 0x1c] */ r_eax = (u32)(r_ecx+r_eax+0x1cu);
    /* 006e63f8: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 006e63fb: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 006e63ff: lea eax, [ebp - 0x60] */ r_eax = (u32)(r_ebp+0xffffffa0u);
    /* 006e6402: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 006e6406: call 0x6f3ba4 */ r_esp -= 4; W32(r_esp, 0x6e640bu); f_006f3ba4();
    /* 006e640b: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
L_006e6412:; BB(0x006e6412);
    /* 006e6412: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006e6419: jmp 0x6e64bb */ goto L_006e64bb;
L_006e641e:; BB(0x006e641e);
    /* 006e641e: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
    /* 006e6425: push 0x260 */ { u32 v = 0x260u; r_esp -= 4; W32(r_esp, v); }
    /* 006e642a: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e642fu); f_005caba4();
    /* 006e642f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e6430: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 006e6433: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e6435: je 0x6e64b4 */ if (fZ) goto L_006e64b4;
L_006e6437:; BB(0x006e6437);
    /* 006e6437: mov dword ptr [ebp - 0x40], 1 */ W32((u32)(r_ebp+0xffffffc0u), 0x1u);
    /* 006e643e: mov dword ptr [ebp - 4], 0x15 */ W32((u32)(r_ebp+0xfffffffcu), 0x15u);
    /* 006e6445: mov eax, dword ptr [0xaca344] */ r_eax = R32((u32)(0xaca344u));
    /* 006e644a: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e644d: mov edx, edi */ r_edx = r_edi;
    /* 006e644f: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e6452: movsx esi, word ptr [edx + ebx*4 + 0x136] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+r_ebx*4+0x136u));
    /* 006e645a: add esp, -0x1c */ {  u32 a = r_esp; u32 b = 0xffffffe4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e645d: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 006e6460: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 006e6464: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 006e6467: mov eax, dword ptr [edi + 0xa4] */ r_eax = R32((u32)(r_edi+0xa4u));
    /* 006e646d: mov dword ptr [esp + 0x10], 0x3f19999a */ W32((u32)(r_esp+0x10u), 0x3f19999au);
    /* 006e6475: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 006e6478: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e647a: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e647c: mov dword ptr [esp + 0x14], 0x14000000 */ W32((u32)(r_esp+0x14u), 0x14000000u);
    /* 006e6484: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6486: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6488: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e648a: mov dword ptr [esp + 0x18], 0x14 */ W32((u32)(r_esp+0x18u), 0x14u);
    /* 006e6492: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6494: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6496: lea eax, [ecx + eax + 0x1c] */ r_eax = (u32)(r_ecx+r_eax+0x1cu);
    /* 006e649a: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 006e649d: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 006e64a1: lea eax, [ebp - 0x60] */ r_eax = (u32)(r_ebp+0xffffffa0u);
    /* 006e64a4: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 006e64a8: call 0x6f3ba4 */ r_esp -= 4; W32(r_esp, 0x6e64adu); f_006f3ba4();
    /* 006e64ad: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
L_006e64b4:; BB(0x006e64b4);
    /* 006e64b4: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
L_006e64bb:; BB(0x006e64bb);
    /* 006e64bb: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006e64be: mov edx, dword ptr [eax + 0x130] */ r_edx = R32((u32)(r_eax+0x130u));
    /* 006e64c4: add dword ptr [ebp - 0x1c], 1 */ { u32 ad = (u32)(r_ebp+0xffffffe4u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 006e64c8: jmp 0x6e6011 */ goto L_006e6011;
L_006e64cd:; BB(0x006e64cd);
    /* 006e64cd: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 006e64d4: push 0x260 */ { u32 v = 0x260u; r_esp -= 4; W32(r_esp, v); }
    /* 006e64d9: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e64deu); f_005caba4();
    /* 006e64de: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e64df: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 006e64e2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e64e4: je 0x6e6563 */ if (fZ) goto L_006e6563;
L_006e64e6:; BB(0x006e64e6);
    /* 006e64e6: mov dword ptr [ebp - 0x3c], 1 */ W32((u32)(r_ebp+0xffffffc4u), 0x1u);
    /* 006e64ed: mov dword ptr [ebp - 4], 0x16 */ W32((u32)(r_ebp+0xfffffffcu), 0x16u);
    /* 006e64f4: mov eax, dword ptr [0xaca344] */ r_eax = R32((u32)(0xaca344u));
    /* 006e64f9: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e64fc: mov edx, edi */ r_edx = r_edi;
    /* 006e64fe: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e6501: movsx esi, word ptr [edx + ebx*4 + 0x136] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+r_ebx*4+0x136u));
    /* 006e6509: add esp, -0x1c */ {  u32 a = r_esp; u32 b = 0xffffffe4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e650c: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 006e650f: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 006e6513: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 006e6516: mov eax, dword ptr [edi + 0xa4] */ r_eax = R32((u32)(r_edi+0xa4u));
    /* 006e651c: mov dword ptr [esp + 0x10], 0x3f333333 */ W32((u32)(r_esp+0x10u), 0x3f333333u);
    /* 006e6524: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 006e6527: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6529: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e652b: mov dword ptr [esp + 0x14], 0x14000000 */ W32((u32)(r_esp+0x14u), 0x14000000u);
    /* 006e6533: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6535: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6537: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6539: mov dword ptr [esp + 0x18], 0x14 */ W32((u32)(r_esp+0x18u), 0x14u);
    /* 006e6541: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6543: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6545: lea eax, [ecx + eax + 0x1c] */ r_eax = (u32)(r_ecx+r_eax+0x1cu);
    /* 006e6549: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 006e654c: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 006e6550: lea eax, [ebp - 0x60] */ r_eax = (u32)(r_ebp+0xffffffa0u);
    /* 006e6553: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 006e6557: call 0x6f3ba4 */ r_esp -= 4; W32(r_esp, 0x6e655cu); f_006f3ba4();
    /* 006e655c: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_006e6563:; BB(0x006e6563);
    /* 006e6563: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006e656a: jmp 0x6e64bb */ goto L_006e64bb;
L_006e656f:; BB(0x006e656f);
    /* 006e656f: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 006e6576: push 0x260 */ { u32 v = 0x260u; r_esp -= 4; W32(r_esp, v); }
    /* 006e657b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e6580u); f_005caba4();
    /* 006e6580: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e6581: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 006e6584: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e6586: je 0x6e6605 */ if (fZ) goto L_006e6605;
L_006e6588:; BB(0x006e6588);
    /* 006e6588: mov dword ptr [ebp - 0x38], 1 */ W32((u32)(r_ebp+0xffffffc8u), 0x1u);
    /* 006e658f: mov dword ptr [ebp - 4], 0x17 */ W32((u32)(r_ebp+0xfffffffcu), 0x17u);
    /* 006e6596: mov eax, dword ptr [0xaca344] */ r_eax = R32((u32)(0xaca344u));
    /* 006e659b: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e659e: mov edx, edi */ r_edx = r_edi;
    /* 006e65a0: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e65a3: movsx esi, word ptr [edx + ebx*4 + 0x136] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+r_ebx*4+0x136u));
    /* 006e65ab: add esp, -0x1c */ {  u32 a = r_esp; u32 b = 0xffffffe4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e65ae: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 006e65b1: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 006e65b5: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 006e65b8: mov eax, dword ptr [edi + 0xa4] */ r_eax = R32((u32)(r_edi+0xa4u));
    /* 006e65be: mov dword ptr [esp + 0x10], 0x3f19999a */ W32((u32)(r_esp+0x10u), 0x3f19999au);
    /* 006e65c6: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 006e65c9: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e65cb: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e65cd: mov dword ptr [esp + 0x14], 0x14000000 */ W32((u32)(r_esp+0x14u), 0x14000000u);
    /* 006e65d5: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e65d7: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e65d9: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e65db: mov dword ptr [esp + 0x18], 0x14 */ W32((u32)(r_esp+0x18u), 0x14u);
    /* 006e65e3: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e65e5: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e65e7: lea eax, [ecx + eax + 0x1c] */ r_eax = (u32)(r_ecx+r_eax+0x1cu);
    /* 006e65eb: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 006e65ee: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 006e65f2: lea eax, [ebp - 0x60] */ r_eax = (u32)(r_ebp+0xffffffa0u);
    /* 006e65f5: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 006e65f9: call 0x6f3ba4 */ r_esp -= 4; W32(r_esp, 0x6e65feu); f_006f3ba4();
    /* 006e65fe: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_006e6605:; BB(0x006e6605);
    /* 006e6605: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006e660c: jmp 0x6e64bb */ goto L_006e64bb;
L_006e6611:; BB(0x006e6611);
    /* 006e6611: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 006e6618: push 0x260 */ { u32 v = 0x260u; r_esp -= 4; W32(r_esp, v); }
    /* 006e661d: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e6622u); f_005caba4();
    /* 006e6622: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e6623: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 006e6626: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e6628: je 0x6e66a7 */ if (fZ) goto L_006e66a7;
L_006e662a:; BB(0x006e662a);
    /* 006e662a: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 006e6631: mov dword ptr [ebp - 4], 0x18 */ W32((u32)(r_ebp+0xfffffffcu), 0x18u);
    /* 006e6638: mov eax, dword ptr [0xaca344] */ r_eax = R32((u32)(0xaca344u));
    /* 006e663d: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e6640: mov edx, edi */ r_edx = r_edi;
    /* 006e6642: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e6645: movsx esi, word ptr [edx + ebx*4 + 0x136] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+r_ebx*4+0x136u));
    /* 006e664d: add esp, -0x1c */ {  u32 a = r_esp; u32 b = 0xffffffe4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e6650: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 006e6653: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 006e6657: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 006e665a: mov eax, dword ptr [edi + 0xa4] */ r_eax = R32((u32)(r_edi+0xa4u));
    /* 006e6660: mov dword ptr [esp + 0x10], 0x3f000000 */ W32((u32)(r_esp+0x10u), 0x3f000000u);
    /* 006e6668: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 006e666b: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e666d: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e666f: mov dword ptr [esp + 0x14], 0x14000000 */ W32((u32)(r_esp+0x14u), 0x14000000u);
    /* 006e6677: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6679: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e667b: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e667d: mov dword ptr [esp + 0x18], 0x14 */ W32((u32)(r_esp+0x18u), 0x14u);
    /* 006e6685: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6687: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6689: lea eax, [ecx + eax + 0x1c] */ r_eax = (u32)(r_ecx+r_eax+0x1cu);
    /* 006e668d: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 006e6690: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 006e6694: lea eax, [ebp - 0x60] */ r_eax = (u32)(r_ebp+0xffffffa0u);
    /* 006e6697: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 006e669b: call 0x6f3ba4 */ r_esp -= 4; W32(r_esp, 0x6e66a0u); f_006f3ba4();
    /* 006e66a0: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_006e66a7:; BB(0x006e66a7);
    /* 006e66a7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006e66ae: jmp 0x6e64bb */ goto L_006e64bb;
L_006e66b3:; BB(0x006e66b3);
    /* 006e66b3: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 006e66b6: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 006e66b9: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006e66bc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006e66be: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006e66c1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006e66c8: mov esp, ebp */ r_esp = r_ebp;
    /* 006e66ca: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e66cb: ret  */ FN_RET(0x006e6169); r_esp += 4; return;
L_006e69ba:; BB(0x006e69ba);
    /* 006e69ba: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 006e69bd: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 006e69c0: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006e69c3: mov eax, 1 */ r_eax = 0x1u;
    /* 006e69c8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006e69cb: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006e69d2: mov esp, ebp */ r_esp = r_ebp;
    /* 006e69d4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e69d5: ret  */ FN_RET(0x006e6169); r_esp += 4; return;
}

void f_006e6174(void)
{
    FN_ENTER(0x006e6174);
    goto L_006e6174;
L_006e6011:; BB(0x006e6011);
    /* 006e6011: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 006e6014: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006e6017: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006e6019: jge 0x6e69ba */ if ((fS==fO)) goto L_006e69ba;
L_006e601f:; BB(0x006e601f);
    /* 006e601f: mov ecx, eax */ r_ecx = r_eax;
    /* 006e6021: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006e6024: movzx ebx, word ptr [edx + ecx*8 + 0x134] */ r_ebx = (u32)R16((u32)(r_edx+r_ecx*8+0x134u));
    /* 006e602c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006e602d: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 006e6030: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006e6033: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x6e6038u); f_007b4d18();
    /* 006e6038: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006e603b: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006e603e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006e6041: movzx ecx, word ptr [eax + edx*8 + 0x13c] */ r_ecx = (u32)R16((u32)(r_eax+r_edx*8+0x13cu));
    /* 006e6049: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006e604a: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x6e604fu); f_007b4d18();
    /* 006e604f: mov ebx, eax */ r_ebx = r_eax;
    /* 006e6051: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e6054: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e6055: call 0x6ea700 */ r_esp -= 4; W32(r_esp, 0x6e605au); f_006ea700();
    /* 006e605a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e605d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e605f: je 0x6e66b3 */ if (fZ) goto L_006e66b3;
L_006e6065:; BB(0x006e6065);
    /* 006e6065: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006e6066: call 0x6ea700 */ r_esp -= 4; W32(r_esp, 0x6e606bu); f_006ea700();
    /* 006e606b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e606c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e606e: je 0x6e66b3 */ if (fZ) goto L_006e66b3;
L_006e6074:; BB(0x006e6074);
    /* 006e6074: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e6077: mov esi, dword ptr [edx + 0x30] */ r_esi = R32((u32)(r_edx+0x30u));
    /* 006e607a: test esi, 0x20000000 */ {  u32 a = r_esi; u32 b = 0x20000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e6080: je 0x6e60c7 */ if (fZ) goto L_006e60c7;
L_006e6082:; BB(0x006e6082);
    /* 006e6082: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
    /* 006e6085: test edx, 0x20000000 */ {  u32 a = r_edx; u32 b = 0x20000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e608b: je 0x6e60c7 */ if (fZ) goto L_006e60c7;
L_006e608d:; BB(0x006e608d);
    /* 006e608d: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e6090: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e6091: call 0x6ea71c */ r_esp -= 4; W32(r_esp, 0x6e6096u); f_006ea71c();
    /* 006e6096: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e6097: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e6099: je 0x6e60c7 */ if (fZ) goto L_006e60c7;
L_006e609b:; BB(0x006e609b);
    /* 006e609b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006e609c: call 0x6ea71c */ r_esp -= 4; W32(r_esp, 0x6e60a1u); f_006ea71c();
    /* 006e60a1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e60a2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e60a4: je 0x6e60c7 */ if (fZ) goto L_006e60c7;
L_006e60a6:; BB(0x006e60a6);
    /* 006e60a6: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e60a9: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006e60ab: call dword ptr [edx + 0x8c] */ { u32 t = R32((u32)(r_edx+0x8cu)); r_esp -= 4; W32(r_esp, 0x6e60b1u); call_ind(t); }
    /* 006e60b1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e60b3: je 0x6e60c7 */ if (fZ) goto L_006e60c7;
L_006e60b5:; BB(0x006e60b5);
    /* 006e60b5: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 006e60b7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006e60b9: call dword ptr [edx + 0x8c] */ { u32 t = R32((u32)(r_edx+0x8cu)); r_esp -= 4; W32(r_esp, 0x6e60bfu); call_ind(t); }
    /* 006e60bf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e60c1: jne 0x6e66b3 */ if (!fZ) goto L_006e66b3;
L_006e60c7:; BB(0x006e60c7);
    /* 006e60c7: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e60ca: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 006e60cd: lea ecx, [ebp - 0x60] */ r_ecx = (u32)(r_ebp+0xffffffa0u);
    /* 006e60d0: movsx esi, word ptr [edi + eax*4 + 0x136] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edi+r_eax*4+0x136u));
    /* 006e60d8: mov ebx, dword ptr [ebx + 0xa4] */ r_ebx = R32((u32)(r_ebx+0xa4u));
    /* 006e60de: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 006e60e1: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006e60e3: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006e60e5: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006e60e7: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006e60e9: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006e60eb: movsx esi, word ptr [edi + eax*4 + 0x13e] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edi+r_eax*4+0x13eu));
    /* 006e60f3: fld dword ptr [ebx + edx*4 + 0x1c] */ FPUSH(R_F32((u32)(r_ebx+r_edx*4+0x1cu)));
    /* 006e60f7: fld dword ptr [ebx + edx*4 + 0x20] */ FPUSH(R_F32((u32)(r_ebx+r_edx*4+0x20u)));
    /* 006e60fb: fld dword ptr [ebx + edx*4 + 0x24] */ FPUSH(R_F32((u32)(r_ebx+r_edx*4+0x24u)));
    /* 006e60ff: lea eax, [esi + esi] */ r_eax = (u32)(r_esi+r_esi);
    /* 006e6102: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006e6104: sub eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006e6106: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006e6108: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006e610a: sub eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006e610c: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e610f: mov esi, dword ptr [esi + 0xa4] */ r_esi = R32((u32)(r_esi+0xa4u));
    /* 006e6115: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 006e6117: fsub dword ptr [esi + eax*4 + 0x1c] */ ST(0) = ST(0) - R_F32((u32)(r_esi+r_eax*4+0x1cu));
    /* 006e611b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006e611d: fsub dword ptr [esi + eax*4 + 0x20] */ ST(0) = ST(0) - R_F32((u32)(r_esi+r_eax*4+0x20u));
    /* 006e6121: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 006e6123: fsub dword ptr [esi + eax*4 + 0x24] */ ST(0) = ST(0) - R_F32((u32)(r_esi+r_eax*4+0x24u));
    /* 006e6127: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006e6129: fstp dword ptr [ebp - 0x60] */ W_F32((u32)(r_ebp+0xffffffa0u), ST(0)); FPOP();
    /* 006e612c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006e612e: fstp dword ptr [ebp - 0x5c] */ W_F32((u32)(r_ebp+0xffffffa4u), ST(0)); FPOP();
    /* 006e6131: fstp dword ptr [ebp - 0x58] */ W_F32((u32)(r_ebp+0xffffffa8u), ST(0)); FPOP();
    /* 006e6134: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x6e6139u); f_0083173c();
    /* 006e6139: fstp dword ptr [ebp - 0x24] */ W_F32((u32)(r_ebp+0xffffffdcu), ST(0)); FPOP();
    /* 006e613c: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 006e613f: fcomp dword ptr [0x96d480] */ fx_compare(ST(0), R_F32((u32)(0x96d480u))); FPOP();
    /* 006e6145: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006e6147: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006e6148: je 0x6e66b3 */ if (fZ) goto L_006e66b3;
L_006e614e:; BB(0x006e614e);
    /* 006e614e: lea ecx, [ebp - 0x60] */ r_ecx = (u32)(r_ebp+0xffffffa0u);
    /* 006e6151: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x6e6156u); f_0082df08();
    /* 006e6156: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006e6158: mov eax, edi */ r_eax = r_edi;
    /* 006e615a: movsx eax, word ptr [eax + 0xc6] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0xc6u));
    /* 006e6161: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e6163: je 0x6e6611 */ if (fZ) goto L_006e6611;
L_006e6169:; BB(0x006e6169);
    /* 006e6169: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e616c: je 0x6e656f */ if (fZ) goto L_006e656f;
L_006e6172:; BB(0x006e6172);
    /* 006e6172: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
L_006e6174:; BB(0x006e6174);
    /* 006e6174: add cl, byte ptr [edi] */ {  u32 a = (u8)r_ecx; u32 b = R8((u32)(r_edi)); u32 r = (a + b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 006e6175: je 0x6e64cd */ if (fZ) goto L_006e64cd;
    /* 006e6176: test byte ptr [edx + 3], dl */ {  u32 a = R8((u32)(r_edx+0x3u)); u32 b = (u8)r_edx; u32 r = (a & b) & 0xffu;   }
    /* 006e6179: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
L_006e617b:; BB(0x006e617b);
    /* 006e617b: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e617e: je 0x6e641e */ if (fZ) goto L_006e641e;
L_006e6184:; BB(0x006e6184);
    /* 006e6184: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e6187: jne 0x6e622f */ if (!fZ) goto L_006e622f;
L_006e618d:; BB(0x006e618d);
    /* 006e618d: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
    /* 006e6194: push 0x260 */ { u32 v = 0x260u; r_esp -= 4; W32(r_esp, v); }
    /* 006e6199: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e619eu); f_005caba4();
    /* 006e619e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e619f: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 006e61a2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e61a4: je 0x6e6223 */ if (fZ) goto L_006e6223;
L_006e61a6:; BB(0x006e61a6);
    /* 006e61a6: mov dword ptr [ebp - 0x44], 1 */ W32((u32)(r_ebp+0xffffffbcu), 0x1u);
    /* 006e61ad: mov dword ptr [ebp - 4], 0x14 */ W32((u32)(r_ebp+0xfffffffcu), 0x14u);
    /* 006e61b4: mov eax, dword ptr [0xaca344] */ r_eax = R32((u32)(0xaca344u));
    /* 006e61b9: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e61bc: mov edx, edi */ r_edx = r_edi;
    /* 006e61be: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e61c1: movsx esi, word ptr [edx + ebx*4 + 0x136] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+r_ebx*4+0x136u));
    /* 006e61c9: add esp, -0x1c */ {  u32 a = r_esp; u32 b = 0xffffffe4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e61cc: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 006e61cf: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 006e61d3: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 006e61d6: mov eax, dword ptr [edi + 0xa4] */ r_eax = R32((u32)(r_edi+0xa4u));
    /* 006e61dc: mov dword ptr [esp + 0x10], 0x3f333333 */ W32((u32)(r_esp+0x10u), 0x3f333333u);
    /* 006e61e4: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 006e61e7: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e61e9: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e61eb: mov dword ptr [esp + 0x14], 0x14000000 */ W32((u32)(r_esp+0x14u), 0x14000000u);
    /* 006e61f3: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e61f5: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e61f7: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e61f9: mov dword ptr [esp + 0x18], 0x14 */ W32((u32)(r_esp+0x18u), 0x14u);
    /* 006e6201: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6203: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6205: lea eax, [ecx + eax + 0x1c] */ r_eax = (u32)(r_ecx+r_eax+0x1cu);
    /* 006e6209: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 006e620c: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 006e6210: lea eax, [ebp - 0x60] */ r_eax = (u32)(r_ebp+0xffffffa0u);
    /* 006e6213: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 006e6217: call 0x6f3ba4 */ r_esp -= 4; W32(r_esp, 0x6e621cu); f_006f3ba4();
    /* 006e621c: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
L_006e6223:; BB(0x006e6223);
    /* 006e6223: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006e622a: jmp 0x6e64bb */ goto L_006e64bb;
L_006e622f:; BB(0x006e622f);
    /* 006e622f: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e6232: jne 0x6e64bb */ if (!fZ) goto L_006e64bb;
L_006e6238:; BB(0x006e6238);
    /* 006e6238: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
    /* 006e623f: push 0x260 */ { u32 v = 0x260u; r_esp -= 4; W32(r_esp, v); }
    /* 006e6244: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e6249u); f_005caba4();
    /* 006e6249: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e624a: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 006e624d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e624f: je 0x6e62ce */ if (fZ) goto L_006e62ce;
L_006e6251:; BB(0x006e6251);
    /* 006e6251: mov dword ptr [ebp - 0x54], 1 */ W32((u32)(r_ebp+0xffffffacu), 0x1u);
    /* 006e6258: mov dword ptr [ebp - 4], 0x11 */ W32((u32)(r_ebp+0xfffffffcu), 0x11u);
    /* 006e625f: mov eax, dword ptr [0xaca344] */ r_eax = R32((u32)(0xaca344u));
    /* 006e6264: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e6267: mov edx, edi */ r_edx = r_edi;
    /* 006e6269: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e626c: movsx esi, word ptr [edx + ebx*4 + 0x136] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+r_ebx*4+0x136u));
    /* 006e6274: add esp, -0x1c */ {  u32 a = r_esp; u32 b = 0xffffffe4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e6277: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 006e627a: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 006e627e: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 006e6281: mov eax, dword ptr [edi + 0xa4] */ r_eax = R32((u32)(r_edi+0xa4u));
    /* 006e6287: mov dword ptr [esp + 0x10], 0x40a00000 */ W32((u32)(r_esp+0x10u), 0x40a00000u);
    /* 006e628f: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 006e6292: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6294: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6296: mov dword ptr [esp + 0x14], 0x14000000 */ W32((u32)(r_esp+0x14u), 0x14000000u);
    /* 006e629e: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e62a0: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e62a2: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e62a4: mov dword ptr [esp + 0x18], 0x14 */ W32((u32)(r_esp+0x18u), 0x14u);
    /* 006e62ac: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e62ae: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e62b0: lea eax, [ecx + eax + 0x1c] */ r_eax = (u32)(r_ecx+r_eax+0x1cu);
    /* 006e62b4: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 006e62b7: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 006e62bb: lea eax, [ebp - 0x60] */ r_eax = (u32)(r_ebp+0xffffffa0u);
    /* 006e62be: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 006e62c2: call 0x6f3ba4 */ r_esp -= 4; W32(r_esp, 0x6e62c7u); f_006f3ba4();
    /* 006e62c7: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
L_006e62ce:; BB(0x006e62ce);
    /* 006e62ce: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006e62d5: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
    /* 006e62dc: push 0x260 */ { u32 v = 0x260u; r_esp -= 4; W32(r_esp, v); }
    /* 006e62e1: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e62e6u); f_005caba4();
    /* 006e62e6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e62e7: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 006e62ea: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e62ec: je 0x6e6370 */ if (fZ) goto L_006e6370;
L_006e62f2:; BB(0x006e62f2);
    /* 006e62f2: mov dword ptr [ebp - 0x4c], 1 */ W32((u32)(r_ebp+0xffffffb4u), 0x1u);
    /* 006e62f9: mov dword ptr [ebp - 4], 0x12 */ W32((u32)(r_ebp+0xfffffffcu), 0x12u);
    /* 006e6300: mov eax, dword ptr [0xaca344] */ r_eax = R32((u32)(0xaca344u));
    /* 006e6305: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e6308: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006e630b: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e630e: movsx esi, word ptr [edx + ebx*4 + 0x136] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+r_ebx*4+0x136u));
    /* 006e6316: add esp, -0x1c */ {  u32 a = r_esp; u32 b = 0xffffffe4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e6319: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 006e631c: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 006e6320: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 006e6323: mov eax, dword ptr [edi + 0xa4] */ r_eax = R32((u32)(r_edi+0xa4u));
    /* 006e6329: mov dword ptr [esp + 0x10], 0x3f000000 */ W32((u32)(r_esp+0x10u), 0x3f000000u);
    /* 006e6331: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 006e6334: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6336: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6338: mov dword ptr [esp + 0x14], 0x14000000 */ W32((u32)(r_esp+0x14u), 0x14000000u);
    /* 006e6340: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6342: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6344: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6346: mov dword ptr [esp + 0x18], 0x14 */ W32((u32)(r_esp+0x18u), 0x14u);
    /* 006e634e: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6350: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6352: lea eax, [ecx + eax + 0x1c] */ r_eax = (u32)(r_ecx+r_eax+0x1cu);
    /* 006e6356: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 006e6359: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 006e635d: lea eax, [ebp - 0x60] */ r_eax = (u32)(r_ebp+0xffffffa0u);
    /* 006e6360: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 006e6364: call 0x6f3ba4 */ r_esp -= 4; W32(r_esp, 0x6e6369u); f_006f3ba4();
    /* 006e6369: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
L_006e6370:; BB(0x006e6370);
    /* 006e6370: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006e6377: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
    /* 006e637e: push 0x260 */ { u32 v = 0x260u; r_esp -= 4; W32(r_esp, v); }
    /* 006e6383: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e6388u); f_005caba4();
    /* 006e6388: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e6389: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 006e638c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e638e: je 0x6e6412 */ if (fZ) goto L_006e6412;
L_006e6394:; BB(0x006e6394);
    /* 006e6394: mov dword ptr [ebp - 0x48], 1 */ W32((u32)(r_ebp+0xffffffb8u), 0x1u);
    /* 006e639b: mov dword ptr [ebp - 4], 0x13 */ W32((u32)(r_ebp+0xfffffffcu), 0x13u);
    /* 006e63a2: mov eax, dword ptr [0xaca344] */ r_eax = R32((u32)(0xaca344u));
    /* 006e63a7: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e63aa: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006e63ad: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e63b0: movsx esi, word ptr [edx + ebx*4 + 0x136] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+r_ebx*4+0x136u));
    /* 006e63b8: add esp, -0x1c */ {  u32 a = r_esp; u32 b = 0xffffffe4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e63bb: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 006e63be: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 006e63c2: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 006e63c5: mov eax, dword ptr [edi + 0xa4] */ r_eax = R32((u32)(r_edi+0xa4u));
    /* 006e63cb: mov dword ptr [esp + 0x10], 0x3f000000 */ W32((u32)(r_esp+0x10u), 0x3f000000u);
    /* 006e63d3: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 006e63d6: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e63d8: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e63da: mov dword ptr [esp + 0x14], 0x14000000 */ W32((u32)(r_esp+0x14u), 0x14000000u);
    /* 006e63e2: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e63e4: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e63e6: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e63e8: mov dword ptr [esp + 0x18], 0x14 */ W32((u32)(r_esp+0x18u), 0x14u);
    /* 006e63f0: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e63f2: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e63f4: lea eax, [ecx + eax + 0x1c] */ r_eax = (u32)(r_ecx+r_eax+0x1cu);
    /* 006e63f8: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 006e63fb: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 006e63ff: lea eax, [ebp - 0x60] */ r_eax = (u32)(r_ebp+0xffffffa0u);
    /* 006e6402: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 006e6406: call 0x6f3ba4 */ r_esp -= 4; W32(r_esp, 0x6e640bu); f_006f3ba4();
    /* 006e640b: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
L_006e6412:; BB(0x006e6412);
    /* 006e6412: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006e6419: jmp 0x6e64bb */ goto L_006e64bb;
L_006e641e:; BB(0x006e641e);
    /* 006e641e: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
    /* 006e6425: push 0x260 */ { u32 v = 0x260u; r_esp -= 4; W32(r_esp, v); }
    /* 006e642a: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e642fu); f_005caba4();
    /* 006e642f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e6430: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 006e6433: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e6435: je 0x6e64b4 */ if (fZ) goto L_006e64b4;
L_006e6437:; BB(0x006e6437);
    /* 006e6437: mov dword ptr [ebp - 0x40], 1 */ W32((u32)(r_ebp+0xffffffc0u), 0x1u);
    /* 006e643e: mov dword ptr [ebp - 4], 0x15 */ W32((u32)(r_ebp+0xfffffffcu), 0x15u);
    /* 006e6445: mov eax, dword ptr [0xaca344] */ r_eax = R32((u32)(0xaca344u));
    /* 006e644a: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e644d: mov edx, edi */ r_edx = r_edi;
    /* 006e644f: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e6452: movsx esi, word ptr [edx + ebx*4 + 0x136] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+r_ebx*4+0x136u));
    /* 006e645a: add esp, -0x1c */ {  u32 a = r_esp; u32 b = 0xffffffe4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e645d: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 006e6460: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 006e6464: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 006e6467: mov eax, dword ptr [edi + 0xa4] */ r_eax = R32((u32)(r_edi+0xa4u));
    /* 006e646d: mov dword ptr [esp + 0x10], 0x3f19999a */ W32((u32)(r_esp+0x10u), 0x3f19999au);
    /* 006e6475: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 006e6478: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e647a: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e647c: mov dword ptr [esp + 0x14], 0x14000000 */ W32((u32)(r_esp+0x14u), 0x14000000u);
    /* 006e6484: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6486: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6488: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e648a: mov dword ptr [esp + 0x18], 0x14 */ W32((u32)(r_esp+0x18u), 0x14u);
    /* 006e6492: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6494: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6496: lea eax, [ecx + eax + 0x1c] */ r_eax = (u32)(r_ecx+r_eax+0x1cu);
    /* 006e649a: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 006e649d: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 006e64a1: lea eax, [ebp - 0x60] */ r_eax = (u32)(r_ebp+0xffffffa0u);
    /* 006e64a4: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 006e64a8: call 0x6f3ba4 */ r_esp -= 4; W32(r_esp, 0x6e64adu); f_006f3ba4();
    /* 006e64ad: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
L_006e64b4:; BB(0x006e64b4);
    /* 006e64b4: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
L_006e64bb:; BB(0x006e64bb);
    /* 006e64bb: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006e64be: mov edx, dword ptr [eax + 0x130] */ r_edx = R32((u32)(r_eax+0x130u));
    /* 006e64c4: add dword ptr [ebp - 0x1c], 1 */ { u32 ad = (u32)(r_ebp+0xffffffe4u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 006e64c8: jmp 0x6e6011 */ goto L_006e6011;
L_006e64cd:; BB(0x006e64cd);
    /* 006e64cd: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 006e64d4: push 0x260 */ { u32 v = 0x260u; r_esp -= 4; W32(r_esp, v); }
    /* 006e64d9: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e64deu); f_005caba4();
    /* 006e64de: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e64df: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 006e64e2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e64e4: je 0x6e6563 */ if (fZ) goto L_006e6563;
L_006e64e6:; BB(0x006e64e6);
    /* 006e64e6: mov dword ptr [ebp - 0x3c], 1 */ W32((u32)(r_ebp+0xffffffc4u), 0x1u);
    /* 006e64ed: mov dword ptr [ebp - 4], 0x16 */ W32((u32)(r_ebp+0xfffffffcu), 0x16u);
    /* 006e64f4: mov eax, dword ptr [0xaca344] */ r_eax = R32((u32)(0xaca344u));
    /* 006e64f9: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e64fc: mov edx, edi */ r_edx = r_edi;
    /* 006e64fe: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e6501: movsx esi, word ptr [edx + ebx*4 + 0x136] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+r_ebx*4+0x136u));
    /* 006e6509: add esp, -0x1c */ {  u32 a = r_esp; u32 b = 0xffffffe4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e650c: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 006e650f: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 006e6513: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 006e6516: mov eax, dword ptr [edi + 0xa4] */ r_eax = R32((u32)(r_edi+0xa4u));
    /* 006e651c: mov dword ptr [esp + 0x10], 0x3f333333 */ W32((u32)(r_esp+0x10u), 0x3f333333u);
    /* 006e6524: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 006e6527: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6529: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e652b: mov dword ptr [esp + 0x14], 0x14000000 */ W32((u32)(r_esp+0x14u), 0x14000000u);
    /* 006e6533: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6535: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6537: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6539: mov dword ptr [esp + 0x18], 0x14 */ W32((u32)(r_esp+0x18u), 0x14u);
    /* 006e6541: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6543: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6545: lea eax, [ecx + eax + 0x1c] */ r_eax = (u32)(r_ecx+r_eax+0x1cu);
    /* 006e6549: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 006e654c: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 006e6550: lea eax, [ebp - 0x60] */ r_eax = (u32)(r_ebp+0xffffffa0u);
    /* 006e6553: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 006e6557: call 0x6f3ba4 */ r_esp -= 4; W32(r_esp, 0x6e655cu); f_006f3ba4();
    /* 006e655c: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_006e6563:; BB(0x006e6563);
    /* 006e6563: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006e656a: jmp 0x6e64bb */ goto L_006e64bb;
L_006e656f:; BB(0x006e656f);
    /* 006e656f: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 006e6576: push 0x260 */ { u32 v = 0x260u; r_esp -= 4; W32(r_esp, v); }
    /* 006e657b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e6580u); f_005caba4();
    /* 006e6580: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e6581: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 006e6584: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e6586: je 0x6e6605 */ if (fZ) goto L_006e6605;
L_006e6588:; BB(0x006e6588);
    /* 006e6588: mov dword ptr [ebp - 0x38], 1 */ W32((u32)(r_ebp+0xffffffc8u), 0x1u);
    /* 006e658f: mov dword ptr [ebp - 4], 0x17 */ W32((u32)(r_ebp+0xfffffffcu), 0x17u);
    /* 006e6596: mov eax, dword ptr [0xaca344] */ r_eax = R32((u32)(0xaca344u));
    /* 006e659b: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e659e: mov edx, edi */ r_edx = r_edi;
    /* 006e65a0: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e65a3: movsx esi, word ptr [edx + ebx*4 + 0x136] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+r_ebx*4+0x136u));
    /* 006e65ab: add esp, -0x1c */ {  u32 a = r_esp; u32 b = 0xffffffe4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e65ae: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 006e65b1: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 006e65b5: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 006e65b8: mov eax, dword ptr [edi + 0xa4] */ r_eax = R32((u32)(r_edi+0xa4u));
    /* 006e65be: mov dword ptr [esp + 0x10], 0x3f19999a */ W32((u32)(r_esp+0x10u), 0x3f19999au);
    /* 006e65c6: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 006e65c9: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e65cb: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e65cd: mov dword ptr [esp + 0x14], 0x14000000 */ W32((u32)(r_esp+0x14u), 0x14000000u);
    /* 006e65d5: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e65d7: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e65d9: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e65db: mov dword ptr [esp + 0x18], 0x14 */ W32((u32)(r_esp+0x18u), 0x14u);
    /* 006e65e3: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e65e5: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e65e7: lea eax, [ecx + eax + 0x1c] */ r_eax = (u32)(r_ecx+r_eax+0x1cu);
    /* 006e65eb: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 006e65ee: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 006e65f2: lea eax, [ebp - 0x60] */ r_eax = (u32)(r_ebp+0xffffffa0u);
    /* 006e65f5: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 006e65f9: call 0x6f3ba4 */ r_esp -= 4; W32(r_esp, 0x6e65feu); f_006f3ba4();
    /* 006e65fe: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_006e6605:; BB(0x006e6605);
    /* 006e6605: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006e660c: jmp 0x6e64bb */ goto L_006e64bb;
L_006e6611:; BB(0x006e6611);
    /* 006e6611: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 006e6618: push 0x260 */ { u32 v = 0x260u; r_esp -= 4; W32(r_esp, v); }
    /* 006e661d: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e6622u); f_005caba4();
    /* 006e6622: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e6623: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 006e6626: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e6628: je 0x6e66a7 */ if (fZ) goto L_006e66a7;
L_006e662a:; BB(0x006e662a);
    /* 006e662a: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 006e6631: mov dword ptr [ebp - 4], 0x18 */ W32((u32)(r_ebp+0xfffffffcu), 0x18u);
    /* 006e6638: mov eax, dword ptr [0xaca344] */ r_eax = R32((u32)(0xaca344u));
    /* 006e663d: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e6640: mov edx, edi */ r_edx = r_edi;
    /* 006e6642: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e6645: movsx esi, word ptr [edx + ebx*4 + 0x136] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+r_ebx*4+0x136u));
    /* 006e664d: add esp, -0x1c */ {  u32 a = r_esp; u32 b = 0xffffffe4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e6650: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 006e6653: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 006e6657: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 006e665a: mov eax, dword ptr [edi + 0xa4] */ r_eax = R32((u32)(r_edi+0xa4u));
    /* 006e6660: mov dword ptr [esp + 0x10], 0x3f000000 */ W32((u32)(r_esp+0x10u), 0x3f000000u);
    /* 006e6668: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 006e666b: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e666d: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e666f: mov dword ptr [esp + 0x14], 0x14000000 */ W32((u32)(r_esp+0x14u), 0x14000000u);
    /* 006e6677: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6679: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e667b: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e667d: mov dword ptr [esp + 0x18], 0x14 */ W32((u32)(r_esp+0x18u), 0x14u);
    /* 006e6685: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6687: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6689: lea eax, [ecx + eax + 0x1c] */ r_eax = (u32)(r_ecx+r_eax+0x1cu);
    /* 006e668d: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 006e6690: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 006e6694: lea eax, [ebp - 0x60] */ r_eax = (u32)(r_ebp+0xffffffa0u);
    /* 006e6697: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 006e669b: call 0x6f3ba4 */ r_esp -= 4; W32(r_esp, 0x6e66a0u); f_006f3ba4();
    /* 006e66a0: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_006e66a7:; BB(0x006e66a7);
    /* 006e66a7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006e66ae: jmp 0x6e64bb */ goto L_006e64bb;
L_006e66b3:; BB(0x006e66b3);
    /* 006e66b3: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 006e66b6: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 006e66b9: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006e66bc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006e66be: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006e66c1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006e66c8: mov esp, ebp */ r_esp = r_ebp;
    /* 006e66ca: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e66cb: ret  */ FN_RET(0x006e6174); r_esp += 4; return;
L_006e69ba:; BB(0x006e69ba);
    /* 006e69ba: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 006e69bd: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 006e69c0: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006e69c3: mov eax, 1 */ r_eax = 0x1u;
    /* 006e69c8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006e69cb: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006e69d2: mov esp, ebp */ r_esp = r_ebp;
    /* 006e69d4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e69d5: ret  */ FN_RET(0x006e6174); r_esp += 4; return;
}

void f_006e632e(void)
{
    FN_ENTER(0x006e632e);
    goto L_006e632e;
L_006e6011:; BB(0x006e6011);
    /* 006e6011: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 006e6014: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006e6017: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006e6019: jge 0x6e69ba */ if ((fS==fO)) goto L_006e69ba;
L_006e601f:; BB(0x006e601f);
    /* 006e601f: mov ecx, eax */ r_ecx = r_eax;
    /* 006e6021: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006e6024: movzx ebx, word ptr [edx + ecx*8 + 0x134] */ r_ebx = (u32)R16((u32)(r_edx+r_ecx*8+0x134u));
    /* 006e602c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006e602d: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 006e6030: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006e6033: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x6e6038u); f_007b4d18();
    /* 006e6038: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006e603b: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006e603e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006e6041: movzx ecx, word ptr [eax + edx*8 + 0x13c] */ r_ecx = (u32)R16((u32)(r_eax+r_edx*8+0x13cu));
    /* 006e6049: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006e604a: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x6e604fu); f_007b4d18();
    /* 006e604f: mov ebx, eax */ r_ebx = r_eax;
    /* 006e6051: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e6054: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e6055: call 0x6ea700 */ r_esp -= 4; W32(r_esp, 0x6e605au); f_006ea700();
    /* 006e605a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e605d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e605f: je 0x6e66b3 */ if (fZ) goto L_006e66b3;
L_006e6065:; BB(0x006e6065);
    /* 006e6065: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006e6066: call 0x6ea700 */ r_esp -= 4; W32(r_esp, 0x6e606bu); f_006ea700();
    /* 006e606b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e606c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e606e: je 0x6e66b3 */ if (fZ) goto L_006e66b3;
L_006e6074:; BB(0x006e6074);
    /* 006e6074: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e6077: mov esi, dword ptr [edx + 0x30] */ r_esi = R32((u32)(r_edx+0x30u));
    /* 006e607a: test esi, 0x20000000 */ {  u32 a = r_esi; u32 b = 0x20000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e6080: je 0x6e60c7 */ if (fZ) goto L_006e60c7;
L_006e6082:; BB(0x006e6082);
    /* 006e6082: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
    /* 006e6085: test edx, 0x20000000 */ {  u32 a = r_edx; u32 b = 0x20000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e608b: je 0x6e60c7 */ if (fZ) goto L_006e60c7;
L_006e608d:; BB(0x006e608d);
    /* 006e608d: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e6090: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e6091: call 0x6ea71c */ r_esp -= 4; W32(r_esp, 0x6e6096u); f_006ea71c();
    /* 006e6096: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e6097: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e6099: je 0x6e60c7 */ if (fZ) goto L_006e60c7;
L_006e609b:; BB(0x006e609b);
    /* 006e609b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006e609c: call 0x6ea71c */ r_esp -= 4; W32(r_esp, 0x6e60a1u); f_006ea71c();
    /* 006e60a1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e60a2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e60a4: je 0x6e60c7 */ if (fZ) goto L_006e60c7;
L_006e60a6:; BB(0x006e60a6);
    /* 006e60a6: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e60a9: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006e60ab: call dword ptr [edx + 0x8c] */ { u32 t = R32((u32)(r_edx+0x8cu)); r_esp -= 4; W32(r_esp, 0x6e60b1u); call_ind(t); }
    /* 006e60b1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e60b3: je 0x6e60c7 */ if (fZ) goto L_006e60c7;
L_006e60b5:; BB(0x006e60b5);
    /* 006e60b5: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 006e60b7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006e60b9: call dword ptr [edx + 0x8c] */ { u32 t = R32((u32)(r_edx+0x8cu)); r_esp -= 4; W32(r_esp, 0x6e60bfu); call_ind(t); }
    /* 006e60bf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e60c1: jne 0x6e66b3 */ if (!fZ) goto L_006e66b3;
L_006e60c7:; BB(0x006e60c7);
    /* 006e60c7: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e60ca: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 006e60cd: lea ecx, [ebp - 0x60] */ r_ecx = (u32)(r_ebp+0xffffffa0u);
    /* 006e60d0: movsx esi, word ptr [edi + eax*4 + 0x136] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edi+r_eax*4+0x136u));
    /* 006e60d8: mov ebx, dword ptr [ebx + 0xa4] */ r_ebx = R32((u32)(r_ebx+0xa4u));
    /* 006e60de: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 006e60e1: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006e60e3: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006e60e5: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006e60e7: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006e60e9: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006e60eb: movsx esi, word ptr [edi + eax*4 + 0x13e] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edi+r_eax*4+0x13eu));
    /* 006e60f3: fld dword ptr [ebx + edx*4 + 0x1c] */ FPUSH(R_F32((u32)(r_ebx+r_edx*4+0x1cu)));
    /* 006e60f7: fld dword ptr [ebx + edx*4 + 0x20] */ FPUSH(R_F32((u32)(r_ebx+r_edx*4+0x20u)));
    /* 006e60fb: fld dword ptr [ebx + edx*4 + 0x24] */ FPUSH(R_F32((u32)(r_ebx+r_edx*4+0x24u)));
    /* 006e60ff: lea eax, [esi + esi] */ r_eax = (u32)(r_esi+r_esi);
    /* 006e6102: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006e6104: sub eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006e6106: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006e6108: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006e610a: sub eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006e610c: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e610f: mov esi, dword ptr [esi + 0xa4] */ r_esi = R32((u32)(r_esi+0xa4u));
    /* 006e6115: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 006e6117: fsub dword ptr [esi + eax*4 + 0x1c] */ ST(0) = ST(0) - R_F32((u32)(r_esi+r_eax*4+0x1cu));
    /* 006e611b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006e611d: fsub dword ptr [esi + eax*4 + 0x20] */ ST(0) = ST(0) - R_F32((u32)(r_esi+r_eax*4+0x20u));
    /* 006e6121: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 006e6123: fsub dword ptr [esi + eax*4 + 0x24] */ ST(0) = ST(0) - R_F32((u32)(r_esi+r_eax*4+0x24u));
    /* 006e6127: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006e6129: fstp dword ptr [ebp - 0x60] */ W_F32((u32)(r_ebp+0xffffffa0u), ST(0)); FPOP();
    /* 006e612c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006e612e: fstp dword ptr [ebp - 0x5c] */ W_F32((u32)(r_ebp+0xffffffa4u), ST(0)); FPOP();
    /* 006e6131: fstp dword ptr [ebp - 0x58] */ W_F32((u32)(r_ebp+0xffffffa8u), ST(0)); FPOP();
    /* 006e6134: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x6e6139u); f_0083173c();
    /* 006e6139: fstp dword ptr [ebp - 0x24] */ W_F32((u32)(r_ebp+0xffffffdcu), ST(0)); FPOP();
    /* 006e613c: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 006e613f: fcomp dword ptr [0x96d480] */ fx_compare(ST(0), R_F32((u32)(0x96d480u))); FPOP();
    /* 006e6145: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006e6147: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006e6148: je 0x6e66b3 */ if (fZ) goto L_006e66b3;
L_006e614e:; BB(0x006e614e);
    /* 006e614e: lea ecx, [ebp - 0x60] */ r_ecx = (u32)(r_ebp+0xffffffa0u);
    /* 006e6151: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x6e6156u); f_0082df08();
    /* 006e6156: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006e6158: mov eax, edi */ r_eax = r_edi;
    /* 006e615a: movsx eax, word ptr [eax + 0xc6] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0xc6u));
    /* 006e6161: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e6163: je 0x6e6611 */ if (fZ) goto L_006e6611;
L_006e6169:; BB(0x006e6169);
    /* 006e6169: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e616c: je 0x6e656f */ if (fZ) goto L_006e656f;
L_006e6172:; BB(0x006e6172);
    /* 006e6172: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e6175: je 0x6e64cd */ if (fZ) goto L_006e64cd;
L_006e617b:; BB(0x006e617b);
    /* 006e617b: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e617e: je 0x6e641e */ if (fZ) goto L_006e641e;
L_006e6184:; BB(0x006e6184);
    /* 006e6184: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e6187: jne 0x6e622f */ if (!fZ) goto L_006e622f;
L_006e618d:; BB(0x006e618d);
    /* 006e618d: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
    /* 006e6194: push 0x260 */ { u32 v = 0x260u; r_esp -= 4; W32(r_esp, v); }
    /* 006e6199: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e619eu); f_005caba4();
    /* 006e619e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e619f: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 006e61a2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e61a4: je 0x6e6223 */ if (fZ) goto L_006e6223;
L_006e61a6:; BB(0x006e61a6);
    /* 006e61a6: mov dword ptr [ebp - 0x44], 1 */ W32((u32)(r_ebp+0xffffffbcu), 0x1u);
    /* 006e61ad: mov dword ptr [ebp - 4], 0x14 */ W32((u32)(r_ebp+0xfffffffcu), 0x14u);
    /* 006e61b4: mov eax, dword ptr [0xaca344] */ r_eax = R32((u32)(0xaca344u));
    /* 006e61b9: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e61bc: mov edx, edi */ r_edx = r_edi;
    /* 006e61be: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e61c1: movsx esi, word ptr [edx + ebx*4 + 0x136] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+r_ebx*4+0x136u));
    /* 006e61c9: add esp, -0x1c */ {  u32 a = r_esp; u32 b = 0xffffffe4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e61cc: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 006e61cf: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 006e61d3: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 006e61d6: mov eax, dword ptr [edi + 0xa4] */ r_eax = R32((u32)(r_edi+0xa4u));
    /* 006e61dc: mov dword ptr [esp + 0x10], 0x3f333333 */ W32((u32)(r_esp+0x10u), 0x3f333333u);
    /* 006e61e4: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 006e61e7: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e61e9: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e61eb: mov dword ptr [esp + 0x14], 0x14000000 */ W32((u32)(r_esp+0x14u), 0x14000000u);
    /* 006e61f3: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e61f5: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e61f7: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e61f9: mov dword ptr [esp + 0x18], 0x14 */ W32((u32)(r_esp+0x18u), 0x14u);
    /* 006e6201: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6203: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6205: lea eax, [ecx + eax + 0x1c] */ r_eax = (u32)(r_ecx+r_eax+0x1cu);
    /* 006e6209: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 006e620c: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 006e6210: lea eax, [ebp - 0x60] */ r_eax = (u32)(r_ebp+0xffffffa0u);
    /* 006e6213: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 006e6217: call 0x6f3ba4 */ r_esp -= 4; W32(r_esp, 0x6e621cu); f_006f3ba4();
    /* 006e621c: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
L_006e6223:; BB(0x006e6223);
    /* 006e6223: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006e622a: jmp 0x6e64bb */ goto L_006e64bb;
L_006e622f:; BB(0x006e622f);
    /* 006e622f: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e6232: jne 0x6e64bb */ if (!fZ) goto L_006e64bb;
L_006e6238:; BB(0x006e6238);
    /* 006e6238: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
    /* 006e623f: push 0x260 */ { u32 v = 0x260u; r_esp -= 4; W32(r_esp, v); }
    /* 006e6244: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e6249u); f_005caba4();
    /* 006e6249: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e624a: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 006e624d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e624f: je 0x6e62ce */ if (fZ) goto L_006e62ce;
L_006e6251:; BB(0x006e6251);
    /* 006e6251: mov dword ptr [ebp - 0x54], 1 */ W32((u32)(r_ebp+0xffffffacu), 0x1u);
    /* 006e6258: mov dword ptr [ebp - 4], 0x11 */ W32((u32)(r_ebp+0xfffffffcu), 0x11u);
    /* 006e625f: mov eax, dword ptr [0xaca344] */ r_eax = R32((u32)(0xaca344u));
    /* 006e6264: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e6267: mov edx, edi */ r_edx = r_edi;
    /* 006e6269: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e626c: movsx esi, word ptr [edx + ebx*4 + 0x136] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+r_ebx*4+0x136u));
    /* 006e6274: add esp, -0x1c */ {  u32 a = r_esp; u32 b = 0xffffffe4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e6277: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 006e627a: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 006e627e: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 006e6281: mov eax, dword ptr [edi + 0xa4] */ r_eax = R32((u32)(r_edi+0xa4u));
    /* 006e6287: mov dword ptr [esp + 0x10], 0x40a00000 */ W32((u32)(r_esp+0x10u), 0x40a00000u);
    /* 006e628f: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 006e6292: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6294: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6296: mov dword ptr [esp + 0x14], 0x14000000 */ W32((u32)(r_esp+0x14u), 0x14000000u);
    /* 006e629e: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e62a0: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e62a2: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e62a4: mov dword ptr [esp + 0x18], 0x14 */ W32((u32)(r_esp+0x18u), 0x14u);
    /* 006e62ac: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e62ae: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e62b0: lea eax, [ecx + eax + 0x1c] */ r_eax = (u32)(r_ecx+r_eax+0x1cu);
    /* 006e62b4: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 006e62b7: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 006e62bb: lea eax, [ebp - 0x60] */ r_eax = (u32)(r_ebp+0xffffffa0u);
    /* 006e62be: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 006e62c2: call 0x6f3ba4 */ r_esp -= 4; W32(r_esp, 0x6e62c7u); f_006f3ba4();
    /* 006e62c7: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
L_006e62ce:; BB(0x006e62ce);
    /* 006e62ce: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006e62d5: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
    /* 006e62dc: push 0x260 */ { u32 v = 0x260u; r_esp -= 4; W32(r_esp, v); }
    /* 006e62e1: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e62e6u); f_005caba4();
    /* 006e62e6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e62e7: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 006e62ea: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e62ec: je 0x6e6370 */ if (fZ) goto L_006e6370;
L_006e62f2:; BB(0x006e62f2);
    /* 006e62f2: mov dword ptr [ebp - 0x4c], 1 */ W32((u32)(r_ebp+0xffffffb4u), 0x1u);
    /* 006e62f9: mov dword ptr [ebp - 4], 0x12 */ W32((u32)(r_ebp+0xfffffffcu), 0x12u);
    /* 006e6300: mov eax, dword ptr [0xaca344] */ r_eax = R32((u32)(0xaca344u));
    /* 006e6305: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e6308: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006e630b: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e630e: movsx esi, word ptr [edx + ebx*4 + 0x136] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+r_ebx*4+0x136u));
    /* 006e6316: add esp, -0x1c */ {  u32 a = r_esp; u32 b = 0xffffffe4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e6319: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 006e631c: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 006e6320: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 006e6323: mov eax, dword ptr [edi + 0xa4] */ r_eax = R32((u32)(r_edi+0xa4u));
    /* 006e6329: mov dword ptr [esp + 0x10], 0x3f000000 */ W32((u32)(r_esp+0x10u), 0x3f000000u);
L_006e632e:; BB(0x006e632e);
    /* 006e632e: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 006e6330: aas  */ UNSUP(0x006e6330, "aas ");
    /* 006e6331: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 006e6334: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6336: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6338: mov dword ptr [esp + 0x14], 0x14000000 */ W32((u32)(r_esp+0x14u), 0x14000000u);
    /* 006e6340: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6342: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6344: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6346: mov dword ptr [esp + 0x18], 0x14 */ W32((u32)(r_esp+0x18u), 0x14u);
    /* 006e634e: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6350: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6352: lea eax, [ecx + eax + 0x1c] */ r_eax = (u32)(r_ecx+r_eax+0x1cu);
    /* 006e6356: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 006e6359: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 006e635d: lea eax, [ebp - 0x60] */ r_eax = (u32)(r_ebp+0xffffffa0u);
    /* 006e6360: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 006e6364: call 0x6f3ba4 */ r_esp -= 4; W32(r_esp, 0x6e6369u); f_006f3ba4();
    /* 006e6369: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
L_006e6370:; BB(0x006e6370);
    /* 006e6370: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006e6377: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
    /* 006e637e: push 0x260 */ { u32 v = 0x260u; r_esp -= 4; W32(r_esp, v); }
    /* 006e6383: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e6388u); f_005caba4();
    /* 006e6388: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e6389: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 006e638c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e638e: je 0x6e6412 */ if (fZ) goto L_006e6412;
L_006e6394:; BB(0x006e6394);
    /* 006e6394: mov dword ptr [ebp - 0x48], 1 */ W32((u32)(r_ebp+0xffffffb8u), 0x1u);
    /* 006e639b: mov dword ptr [ebp - 4], 0x13 */ W32((u32)(r_ebp+0xfffffffcu), 0x13u);
    /* 006e63a2: mov eax, dword ptr [0xaca344] */ r_eax = R32((u32)(0xaca344u));
    /* 006e63a7: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e63aa: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006e63ad: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e63b0: movsx esi, word ptr [edx + ebx*4 + 0x136] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+r_ebx*4+0x136u));
    /* 006e63b8: add esp, -0x1c */ {  u32 a = r_esp; u32 b = 0xffffffe4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e63bb: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 006e63be: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 006e63c2: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 006e63c5: mov eax, dword ptr [edi + 0xa4] */ r_eax = R32((u32)(r_edi+0xa4u));
    /* 006e63cb: mov dword ptr [esp + 0x10], 0x3f000000 */ W32((u32)(r_esp+0x10u), 0x3f000000u);
    /* 006e63d3: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 006e63d6: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e63d8: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e63da: mov dword ptr [esp + 0x14], 0x14000000 */ W32((u32)(r_esp+0x14u), 0x14000000u);
    /* 006e63e2: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e63e4: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e63e6: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e63e8: mov dword ptr [esp + 0x18], 0x14 */ W32((u32)(r_esp+0x18u), 0x14u);
    /* 006e63f0: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e63f2: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e63f4: lea eax, [ecx + eax + 0x1c] */ r_eax = (u32)(r_ecx+r_eax+0x1cu);
    /* 006e63f8: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 006e63fb: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 006e63ff: lea eax, [ebp - 0x60] */ r_eax = (u32)(r_ebp+0xffffffa0u);
    /* 006e6402: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 006e6406: call 0x6f3ba4 */ r_esp -= 4; W32(r_esp, 0x6e640bu); f_006f3ba4();
    /* 006e640b: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
L_006e6412:; BB(0x006e6412);
    /* 006e6412: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006e6419: jmp 0x6e64bb */ goto L_006e64bb;
L_006e641e:; BB(0x006e641e);
    /* 006e641e: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
    /* 006e6425: push 0x260 */ { u32 v = 0x260u; r_esp -= 4; W32(r_esp, v); }
    /* 006e642a: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e642fu); f_005caba4();
    /* 006e642f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e6430: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 006e6433: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e6435: je 0x6e64b4 */ if (fZ) goto L_006e64b4;
L_006e6437:; BB(0x006e6437);
    /* 006e6437: mov dword ptr [ebp - 0x40], 1 */ W32((u32)(r_ebp+0xffffffc0u), 0x1u);
    /* 006e643e: mov dword ptr [ebp - 4], 0x15 */ W32((u32)(r_ebp+0xfffffffcu), 0x15u);
    /* 006e6445: mov eax, dword ptr [0xaca344] */ r_eax = R32((u32)(0xaca344u));
    /* 006e644a: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e644d: mov edx, edi */ r_edx = r_edi;
    /* 006e644f: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e6452: movsx esi, word ptr [edx + ebx*4 + 0x136] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+r_ebx*4+0x136u));
    /* 006e645a: add esp, -0x1c */ {  u32 a = r_esp; u32 b = 0xffffffe4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e645d: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 006e6460: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 006e6464: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 006e6467: mov eax, dword ptr [edi + 0xa4] */ r_eax = R32((u32)(r_edi+0xa4u));
    /* 006e646d: mov dword ptr [esp + 0x10], 0x3f19999a */ W32((u32)(r_esp+0x10u), 0x3f19999au);
    /* 006e6475: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 006e6478: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e647a: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e647c: mov dword ptr [esp + 0x14], 0x14000000 */ W32((u32)(r_esp+0x14u), 0x14000000u);
    /* 006e6484: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6486: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6488: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e648a: mov dword ptr [esp + 0x18], 0x14 */ W32((u32)(r_esp+0x18u), 0x14u);
    /* 006e6492: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6494: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6496: lea eax, [ecx + eax + 0x1c] */ r_eax = (u32)(r_ecx+r_eax+0x1cu);
    /* 006e649a: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 006e649d: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 006e64a1: lea eax, [ebp - 0x60] */ r_eax = (u32)(r_ebp+0xffffffa0u);
    /* 006e64a4: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 006e64a8: call 0x6f3ba4 */ r_esp -= 4; W32(r_esp, 0x6e64adu); f_006f3ba4();
    /* 006e64ad: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
L_006e64b4:; BB(0x006e64b4);
    /* 006e64b4: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
L_006e64bb:; BB(0x006e64bb);
    /* 006e64bb: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006e64be: mov edx, dword ptr [eax + 0x130] */ r_edx = R32((u32)(r_eax+0x130u));
    /* 006e64c4: add dword ptr [ebp - 0x1c], 1 */ { u32 ad = (u32)(r_ebp+0xffffffe4u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 006e64c8: jmp 0x6e6011 */ goto L_006e6011;
L_006e64cd:; BB(0x006e64cd);
    /* 006e64cd: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 006e64d4: push 0x260 */ { u32 v = 0x260u; r_esp -= 4; W32(r_esp, v); }
    /* 006e64d9: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e64deu); f_005caba4();
    /* 006e64de: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e64df: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 006e64e2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e64e4: je 0x6e6563 */ if (fZ) goto L_006e6563;
L_006e64e6:; BB(0x006e64e6);
    /* 006e64e6: mov dword ptr [ebp - 0x3c], 1 */ W32((u32)(r_ebp+0xffffffc4u), 0x1u);
    /* 006e64ed: mov dword ptr [ebp - 4], 0x16 */ W32((u32)(r_ebp+0xfffffffcu), 0x16u);
    /* 006e64f4: mov eax, dword ptr [0xaca344] */ r_eax = R32((u32)(0xaca344u));
    /* 006e64f9: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e64fc: mov edx, edi */ r_edx = r_edi;
    /* 006e64fe: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e6501: movsx esi, word ptr [edx + ebx*4 + 0x136] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+r_ebx*4+0x136u));
    /* 006e6509: add esp, -0x1c */ {  u32 a = r_esp; u32 b = 0xffffffe4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e650c: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 006e650f: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 006e6513: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 006e6516: mov eax, dword ptr [edi + 0xa4] */ r_eax = R32((u32)(r_edi+0xa4u));
    /* 006e651c: mov dword ptr [esp + 0x10], 0x3f333333 */ W32((u32)(r_esp+0x10u), 0x3f333333u);
    /* 006e6524: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 006e6527: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6529: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e652b: mov dword ptr [esp + 0x14], 0x14000000 */ W32((u32)(r_esp+0x14u), 0x14000000u);
    /* 006e6533: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6535: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6537: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6539: mov dword ptr [esp + 0x18], 0x14 */ W32((u32)(r_esp+0x18u), 0x14u);
    /* 006e6541: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6543: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6545: lea eax, [ecx + eax + 0x1c] */ r_eax = (u32)(r_ecx+r_eax+0x1cu);
    /* 006e6549: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 006e654c: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 006e6550: lea eax, [ebp - 0x60] */ r_eax = (u32)(r_ebp+0xffffffa0u);
    /* 006e6553: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 006e6557: call 0x6f3ba4 */ r_esp -= 4; W32(r_esp, 0x6e655cu); f_006f3ba4();
    /* 006e655c: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_006e6563:; BB(0x006e6563);
    /* 006e6563: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006e656a: jmp 0x6e64bb */ goto L_006e64bb;
L_006e656f:; BB(0x006e656f);
    /* 006e656f: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 006e6576: push 0x260 */ { u32 v = 0x260u; r_esp -= 4; W32(r_esp, v); }
    /* 006e657b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e6580u); f_005caba4();
    /* 006e6580: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e6581: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 006e6584: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e6586: je 0x6e6605 */ if (fZ) goto L_006e6605;
L_006e6588:; BB(0x006e6588);
    /* 006e6588: mov dword ptr [ebp - 0x38], 1 */ W32((u32)(r_ebp+0xffffffc8u), 0x1u);
    /* 006e658f: mov dword ptr [ebp - 4], 0x17 */ W32((u32)(r_ebp+0xfffffffcu), 0x17u);
    /* 006e6596: mov eax, dword ptr [0xaca344] */ r_eax = R32((u32)(0xaca344u));
    /* 006e659b: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e659e: mov edx, edi */ r_edx = r_edi;
    /* 006e65a0: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e65a3: movsx esi, word ptr [edx + ebx*4 + 0x136] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+r_ebx*4+0x136u));
    /* 006e65ab: add esp, -0x1c */ {  u32 a = r_esp; u32 b = 0xffffffe4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e65ae: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 006e65b1: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 006e65b5: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 006e65b8: mov eax, dword ptr [edi + 0xa4] */ r_eax = R32((u32)(r_edi+0xa4u));
    /* 006e65be: mov dword ptr [esp + 0x10], 0x3f19999a */ W32((u32)(r_esp+0x10u), 0x3f19999au);
    /* 006e65c6: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 006e65c9: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e65cb: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e65cd: mov dword ptr [esp + 0x14], 0x14000000 */ W32((u32)(r_esp+0x14u), 0x14000000u);
    /* 006e65d5: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e65d7: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e65d9: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e65db: mov dword ptr [esp + 0x18], 0x14 */ W32((u32)(r_esp+0x18u), 0x14u);
    /* 006e65e3: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e65e5: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e65e7: lea eax, [ecx + eax + 0x1c] */ r_eax = (u32)(r_ecx+r_eax+0x1cu);
    /* 006e65eb: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 006e65ee: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 006e65f2: lea eax, [ebp - 0x60] */ r_eax = (u32)(r_ebp+0xffffffa0u);
    /* 006e65f5: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 006e65f9: call 0x6f3ba4 */ r_esp -= 4; W32(r_esp, 0x6e65feu); f_006f3ba4();
    /* 006e65fe: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_006e6605:; BB(0x006e6605);
    /* 006e6605: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006e660c: jmp 0x6e64bb */ goto L_006e64bb;
L_006e6611:; BB(0x006e6611);
    /* 006e6611: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 006e6618: push 0x260 */ { u32 v = 0x260u; r_esp -= 4; W32(r_esp, v); }
    /* 006e661d: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e6622u); f_005caba4();
    /* 006e6622: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e6623: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 006e6626: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e6628: je 0x6e66a7 */ if (fZ) goto L_006e66a7;
L_006e662a:; BB(0x006e662a);
    /* 006e662a: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 006e6631: mov dword ptr [ebp - 4], 0x18 */ W32((u32)(r_ebp+0xfffffffcu), 0x18u);
    /* 006e6638: mov eax, dword ptr [0xaca344] */ r_eax = R32((u32)(0xaca344u));
    /* 006e663d: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e6640: mov edx, edi */ r_edx = r_edi;
    /* 006e6642: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e6645: movsx esi, word ptr [edx + ebx*4 + 0x136] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+r_ebx*4+0x136u));
    /* 006e664d: add esp, -0x1c */ {  u32 a = r_esp; u32 b = 0xffffffe4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e6650: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 006e6653: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 006e6657: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 006e665a: mov eax, dword ptr [edi + 0xa4] */ r_eax = R32((u32)(r_edi+0xa4u));
    /* 006e6660: mov dword ptr [esp + 0x10], 0x3f000000 */ W32((u32)(r_esp+0x10u), 0x3f000000u);
    /* 006e6668: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 006e666b: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e666d: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e666f: mov dword ptr [esp + 0x14], 0x14000000 */ W32((u32)(r_esp+0x14u), 0x14000000u);
    /* 006e6677: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6679: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e667b: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e667d: mov dword ptr [esp + 0x18], 0x14 */ W32((u32)(r_esp+0x18u), 0x14u);
    /* 006e6685: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6687: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6689: lea eax, [ecx + eax + 0x1c] */ r_eax = (u32)(r_ecx+r_eax+0x1cu);
    /* 006e668d: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 006e6690: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 006e6694: lea eax, [ebp - 0x60] */ r_eax = (u32)(r_ebp+0xffffffa0u);
    /* 006e6697: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 006e669b: call 0x6f3ba4 */ r_esp -= 4; W32(r_esp, 0x6e66a0u); f_006f3ba4();
    /* 006e66a0: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_006e66a7:; BB(0x006e66a7);
    /* 006e66a7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006e66ae: jmp 0x6e64bb */ goto L_006e64bb;
L_006e66b3:; BB(0x006e66b3);
    /* 006e66b3: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 006e66b6: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 006e66b9: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006e66bc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006e66be: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006e66c1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006e66c8: mov esp, ebp */ r_esp = r_ebp;
    /* 006e66ca: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e66cb: ret  */ FN_RET(0x006e632e); r_esp += 4; return;
L_006e69ba:; BB(0x006e69ba);
    /* 006e69ba: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 006e69bd: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 006e69c0: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006e69c3: mov eax, 1 */ r_eax = 0x1u;
    /* 006e69c8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006e69cb: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006e69d2: mov esp, ebp */ r_esp = r_ebp;
    /* 006e69d4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e69d5: ret  */ FN_RET(0x006e632e); r_esp += 4; return;
}

void f_006e63eb(void)
{
    FN_ENTER(0x006e63eb);
    goto L_006e63eb;
L_006e6011:; BB(0x006e6011);
    /* 006e6011: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 006e6014: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006e6017: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006e6019: jge 0x6e69ba */ if ((fS==fO)) goto L_006e69ba;
L_006e601f:; BB(0x006e601f);
    /* 006e601f: mov ecx, eax */ r_ecx = r_eax;
    /* 006e6021: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006e6024: movzx ebx, word ptr [edx + ecx*8 + 0x134] */ r_ebx = (u32)R16((u32)(r_edx+r_ecx*8+0x134u));
    /* 006e602c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006e602d: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 006e6030: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006e6033: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x6e6038u); f_007b4d18();
    /* 006e6038: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006e603b: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006e603e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006e6041: movzx ecx, word ptr [eax + edx*8 + 0x13c] */ r_ecx = (u32)R16((u32)(r_eax+r_edx*8+0x13cu));
    /* 006e6049: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006e604a: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x6e604fu); f_007b4d18();
    /* 006e604f: mov ebx, eax */ r_ebx = r_eax;
    /* 006e6051: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e6054: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e6055: call 0x6ea700 */ r_esp -= 4; W32(r_esp, 0x6e605au); f_006ea700();
    /* 006e605a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e605d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e605f: je 0x6e66b3 */ if (fZ) goto L_006e66b3;
L_006e6065:; BB(0x006e6065);
    /* 006e6065: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006e6066: call 0x6ea700 */ r_esp -= 4; W32(r_esp, 0x6e606bu); f_006ea700();
    /* 006e606b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e606c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e606e: je 0x6e66b3 */ if (fZ) goto L_006e66b3;
L_006e6074:; BB(0x006e6074);
    /* 006e6074: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e6077: mov esi, dword ptr [edx + 0x30] */ r_esi = R32((u32)(r_edx+0x30u));
    /* 006e607a: test esi, 0x20000000 */ {  u32 a = r_esi; u32 b = 0x20000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e6080: je 0x6e60c7 */ if (fZ) goto L_006e60c7;
L_006e6082:; BB(0x006e6082);
    /* 006e6082: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
    /* 006e6085: test edx, 0x20000000 */ {  u32 a = r_edx; u32 b = 0x20000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e608b: je 0x6e60c7 */ if (fZ) goto L_006e60c7;
L_006e608d:; BB(0x006e608d);
    /* 006e608d: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e6090: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e6091: call 0x6ea71c */ r_esp -= 4; W32(r_esp, 0x6e6096u); f_006ea71c();
    /* 006e6096: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e6097: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e6099: je 0x6e60c7 */ if (fZ) goto L_006e60c7;
L_006e609b:; BB(0x006e609b);
    /* 006e609b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006e609c: call 0x6ea71c */ r_esp -= 4; W32(r_esp, 0x6e60a1u); f_006ea71c();
    /* 006e60a1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e60a2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e60a4: je 0x6e60c7 */ if (fZ) goto L_006e60c7;
L_006e60a6:; BB(0x006e60a6);
    /* 006e60a6: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e60a9: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006e60ab: call dword ptr [edx + 0x8c] */ { u32 t = R32((u32)(r_edx+0x8cu)); r_esp -= 4; W32(r_esp, 0x6e60b1u); call_ind(t); }
    /* 006e60b1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e60b3: je 0x6e60c7 */ if (fZ) goto L_006e60c7;
L_006e60b5:; BB(0x006e60b5);
    /* 006e60b5: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 006e60b7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006e60b9: call dword ptr [edx + 0x8c] */ { u32 t = R32((u32)(r_edx+0x8cu)); r_esp -= 4; W32(r_esp, 0x6e60bfu); call_ind(t); }
    /* 006e60bf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e60c1: jne 0x6e66b3 */ if (!fZ) goto L_006e66b3;
L_006e60c7:; BB(0x006e60c7);
    /* 006e60c7: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e60ca: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 006e60cd: lea ecx, [ebp - 0x60] */ r_ecx = (u32)(r_ebp+0xffffffa0u);
    /* 006e60d0: movsx esi, word ptr [edi + eax*4 + 0x136] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edi+r_eax*4+0x136u));
    /* 006e60d8: mov ebx, dword ptr [ebx + 0xa4] */ r_ebx = R32((u32)(r_ebx+0xa4u));
    /* 006e60de: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 006e60e1: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006e60e3: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006e60e5: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006e60e7: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006e60e9: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006e60eb: movsx esi, word ptr [edi + eax*4 + 0x13e] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edi+r_eax*4+0x13eu));
    /* 006e60f3: fld dword ptr [ebx + edx*4 + 0x1c] */ FPUSH(R_F32((u32)(r_ebx+r_edx*4+0x1cu)));
    /* 006e60f7: fld dword ptr [ebx + edx*4 + 0x20] */ FPUSH(R_F32((u32)(r_ebx+r_edx*4+0x20u)));
    /* 006e60fb: fld dword ptr [ebx + edx*4 + 0x24] */ FPUSH(R_F32((u32)(r_ebx+r_edx*4+0x24u)));
    /* 006e60ff: lea eax, [esi + esi] */ r_eax = (u32)(r_esi+r_esi);
    /* 006e6102: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006e6104: sub eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006e6106: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006e6108: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006e610a: sub eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006e610c: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e610f: mov esi, dword ptr [esi + 0xa4] */ r_esi = R32((u32)(r_esi+0xa4u));
    /* 006e6115: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 006e6117: fsub dword ptr [esi + eax*4 + 0x1c] */ ST(0) = ST(0) - R_F32((u32)(r_esi+r_eax*4+0x1cu));
    /* 006e611b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006e611d: fsub dword ptr [esi + eax*4 + 0x20] */ ST(0) = ST(0) - R_F32((u32)(r_esi+r_eax*4+0x20u));
    /* 006e6121: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 006e6123: fsub dword ptr [esi + eax*4 + 0x24] */ ST(0) = ST(0) - R_F32((u32)(r_esi+r_eax*4+0x24u));
    /* 006e6127: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006e6129: fstp dword ptr [ebp - 0x60] */ W_F32((u32)(r_ebp+0xffffffa0u), ST(0)); FPOP();
    /* 006e612c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006e612e: fstp dword ptr [ebp - 0x5c] */ W_F32((u32)(r_ebp+0xffffffa4u), ST(0)); FPOP();
    /* 006e6131: fstp dword ptr [ebp - 0x58] */ W_F32((u32)(r_ebp+0xffffffa8u), ST(0)); FPOP();
    /* 006e6134: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x6e6139u); f_0083173c();
    /* 006e6139: fstp dword ptr [ebp - 0x24] */ W_F32((u32)(r_ebp+0xffffffdcu), ST(0)); FPOP();
    /* 006e613c: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 006e613f: fcomp dword ptr [0x96d480] */ fx_compare(ST(0), R_F32((u32)(0x96d480u))); FPOP();
    /* 006e6145: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006e6147: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006e6148: je 0x6e66b3 */ if (fZ) goto L_006e66b3;
L_006e614e:; BB(0x006e614e);
    /* 006e614e: lea ecx, [ebp - 0x60] */ r_ecx = (u32)(r_ebp+0xffffffa0u);
    /* 006e6151: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x6e6156u); f_0082df08();
    /* 006e6156: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006e6158: mov eax, edi */ r_eax = r_edi;
    /* 006e615a: movsx eax, word ptr [eax + 0xc6] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0xc6u));
    /* 006e6161: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e6163: je 0x6e6611 */ if (fZ) goto L_006e6611;
L_006e6169:; BB(0x006e6169);
    /* 006e6169: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e616c: je 0x6e656f */ if (fZ) goto L_006e656f;
L_006e6172:; BB(0x006e6172);
    /* 006e6172: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e6175: je 0x6e64cd */ if (fZ) goto L_006e64cd;
L_006e617b:; BB(0x006e617b);
    /* 006e617b: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e617e: je 0x6e641e */ if (fZ) goto L_006e641e;
L_006e6184:; BB(0x006e6184);
    /* 006e6184: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e6187: jne 0x6e622f */ if (!fZ) goto L_006e622f;
L_006e618d:; BB(0x006e618d);
    /* 006e618d: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
    /* 006e6194: push 0x260 */ { u32 v = 0x260u; r_esp -= 4; W32(r_esp, v); }
    /* 006e6199: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e619eu); f_005caba4();
    /* 006e619e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e619f: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 006e61a2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e61a4: je 0x6e6223 */ if (fZ) goto L_006e6223;
L_006e61a6:; BB(0x006e61a6);
    /* 006e61a6: mov dword ptr [ebp - 0x44], 1 */ W32((u32)(r_ebp+0xffffffbcu), 0x1u);
    /* 006e61ad: mov dword ptr [ebp - 4], 0x14 */ W32((u32)(r_ebp+0xfffffffcu), 0x14u);
    /* 006e61b4: mov eax, dword ptr [0xaca344] */ r_eax = R32((u32)(0xaca344u));
    /* 006e61b9: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e61bc: mov edx, edi */ r_edx = r_edi;
    /* 006e61be: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e61c1: movsx esi, word ptr [edx + ebx*4 + 0x136] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+r_ebx*4+0x136u));
    /* 006e61c9: add esp, -0x1c */ {  u32 a = r_esp; u32 b = 0xffffffe4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e61cc: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 006e61cf: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 006e61d3: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 006e61d6: mov eax, dword ptr [edi + 0xa4] */ r_eax = R32((u32)(r_edi+0xa4u));
    /* 006e61dc: mov dword ptr [esp + 0x10], 0x3f333333 */ W32((u32)(r_esp+0x10u), 0x3f333333u);
    /* 006e61e4: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 006e61e7: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e61e9: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e61eb: mov dword ptr [esp + 0x14], 0x14000000 */ W32((u32)(r_esp+0x14u), 0x14000000u);
    /* 006e61f3: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e61f5: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e61f7: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e61f9: mov dword ptr [esp + 0x18], 0x14 */ W32((u32)(r_esp+0x18u), 0x14u);
    /* 006e6201: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6203: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6205: lea eax, [ecx + eax + 0x1c] */ r_eax = (u32)(r_ecx+r_eax+0x1cu);
    /* 006e6209: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 006e620c: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 006e6210: lea eax, [ebp - 0x60] */ r_eax = (u32)(r_ebp+0xffffffa0u);
    /* 006e6213: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 006e6217: call 0x6f3ba4 */ r_esp -= 4; W32(r_esp, 0x6e621cu); f_006f3ba4();
    /* 006e621c: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
L_006e6223:; BB(0x006e6223);
    /* 006e6223: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006e622a: jmp 0x6e64bb */ goto L_006e64bb;
L_006e622f:; BB(0x006e622f);
    /* 006e622f: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e6232: jne 0x6e64bb */ if (!fZ) goto L_006e64bb;
L_006e6238:; BB(0x006e6238);
    /* 006e6238: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
    /* 006e623f: push 0x260 */ { u32 v = 0x260u; r_esp -= 4; W32(r_esp, v); }
    /* 006e6244: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e6249u); f_005caba4();
    /* 006e6249: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e624a: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 006e624d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e624f: je 0x6e62ce */ if (fZ) goto L_006e62ce;
L_006e6251:; BB(0x006e6251);
    /* 006e6251: mov dword ptr [ebp - 0x54], 1 */ W32((u32)(r_ebp+0xffffffacu), 0x1u);
    /* 006e6258: mov dword ptr [ebp - 4], 0x11 */ W32((u32)(r_ebp+0xfffffffcu), 0x11u);
    /* 006e625f: mov eax, dword ptr [0xaca344] */ r_eax = R32((u32)(0xaca344u));
    /* 006e6264: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e6267: mov edx, edi */ r_edx = r_edi;
    /* 006e6269: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e626c: movsx esi, word ptr [edx + ebx*4 + 0x136] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+r_ebx*4+0x136u));
    /* 006e6274: add esp, -0x1c */ {  u32 a = r_esp; u32 b = 0xffffffe4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e6277: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 006e627a: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 006e627e: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 006e6281: mov eax, dword ptr [edi + 0xa4] */ r_eax = R32((u32)(r_edi+0xa4u));
    /* 006e6287: mov dword ptr [esp + 0x10], 0x40a00000 */ W32((u32)(r_esp+0x10u), 0x40a00000u);
    /* 006e628f: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 006e6292: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6294: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6296: mov dword ptr [esp + 0x14], 0x14000000 */ W32((u32)(r_esp+0x14u), 0x14000000u);
    /* 006e629e: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e62a0: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e62a2: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e62a4: mov dword ptr [esp + 0x18], 0x14 */ W32((u32)(r_esp+0x18u), 0x14u);
    /* 006e62ac: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e62ae: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e62b0: lea eax, [ecx + eax + 0x1c] */ r_eax = (u32)(r_ecx+r_eax+0x1cu);
    /* 006e62b4: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 006e62b7: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 006e62bb: lea eax, [ebp - 0x60] */ r_eax = (u32)(r_ebp+0xffffffa0u);
    /* 006e62be: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 006e62c2: call 0x6f3ba4 */ r_esp -= 4; W32(r_esp, 0x6e62c7u); f_006f3ba4();
    /* 006e62c7: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
L_006e62ce:; BB(0x006e62ce);
    /* 006e62ce: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006e62d5: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
    /* 006e62dc: push 0x260 */ { u32 v = 0x260u; r_esp -= 4; W32(r_esp, v); }
    /* 006e62e1: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e62e6u); f_005caba4();
    /* 006e62e6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e62e7: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 006e62ea: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e62ec: je 0x6e6370 */ if (fZ) goto L_006e6370;
L_006e62f2:; BB(0x006e62f2);
    /* 006e62f2: mov dword ptr [ebp - 0x4c], 1 */ W32((u32)(r_ebp+0xffffffb4u), 0x1u);
    /* 006e62f9: mov dword ptr [ebp - 4], 0x12 */ W32((u32)(r_ebp+0xfffffffcu), 0x12u);
    /* 006e6300: mov eax, dword ptr [0xaca344] */ r_eax = R32((u32)(0xaca344u));
    /* 006e6305: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e6308: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006e630b: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e630e: movsx esi, word ptr [edx + ebx*4 + 0x136] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+r_ebx*4+0x136u));
    /* 006e6316: add esp, -0x1c */ {  u32 a = r_esp; u32 b = 0xffffffe4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e6319: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 006e631c: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 006e6320: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 006e6323: mov eax, dword ptr [edi + 0xa4] */ r_eax = R32((u32)(r_edi+0xa4u));
    /* 006e6329: mov dword ptr [esp + 0x10], 0x3f000000 */ W32((u32)(r_esp+0x10u), 0x3f000000u);
    /* 006e6331: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 006e6334: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6336: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6338: mov dword ptr [esp + 0x14], 0x14000000 */ W32((u32)(r_esp+0x14u), 0x14000000u);
    /* 006e6340: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6342: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6344: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6346: mov dword ptr [esp + 0x18], 0x14 */ W32((u32)(r_esp+0x18u), 0x14u);
    /* 006e634e: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6350: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6352: lea eax, [ecx + eax + 0x1c] */ r_eax = (u32)(r_ecx+r_eax+0x1cu);
    /* 006e6356: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 006e6359: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 006e635d: lea eax, [ebp - 0x60] */ r_eax = (u32)(r_ebp+0xffffffa0u);
    /* 006e6360: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 006e6364: call 0x6f3ba4 */ r_esp -= 4; W32(r_esp, 0x6e6369u); f_006f3ba4();
    /* 006e6369: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
L_006e6370:; BB(0x006e6370);
    /* 006e6370: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006e6377: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
    /* 006e637e: push 0x260 */ { u32 v = 0x260u; r_esp -= 4; W32(r_esp, v); }
    /* 006e6383: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e6388u); f_005caba4();
    /* 006e6388: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e6389: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 006e638c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e638e: je 0x6e6412 */ if (fZ) goto L_006e6412;
L_006e6394:; BB(0x006e6394);
    /* 006e6394: mov dword ptr [ebp - 0x48], 1 */ W32((u32)(r_ebp+0xffffffb8u), 0x1u);
    /* 006e639b: mov dword ptr [ebp - 4], 0x13 */ W32((u32)(r_ebp+0xfffffffcu), 0x13u);
    /* 006e63a2: mov eax, dword ptr [0xaca344] */ r_eax = R32((u32)(0xaca344u));
    /* 006e63a7: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e63aa: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006e63ad: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e63b0: movsx esi, word ptr [edx + ebx*4 + 0x136] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+r_ebx*4+0x136u));
    /* 006e63b8: add esp, -0x1c */ {  u32 a = r_esp; u32 b = 0xffffffe4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e63bb: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 006e63be: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 006e63c2: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 006e63c5: mov eax, dword ptr [edi + 0xa4] */ r_eax = R32((u32)(r_edi+0xa4u));
    /* 006e63cb: mov dword ptr [esp + 0x10], 0x3f000000 */ W32((u32)(r_esp+0x10u), 0x3f000000u);
    /* 006e63d3: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 006e63d6: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e63d8: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e63da: mov dword ptr [esp + 0x14], 0x14000000 */ W32((u32)(r_esp+0x14u), 0x14000000u);
    /* 006e63e2: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e63e4: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e63e6: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e63e8: mov dword ptr [esp + 0x18], 0x14 */ W32((u32)(r_esp+0x18u), 0x14u);
L_006e63eb:; BB(0x006e63eb);
    /* 006e63eb: sbb byte ptr [eax + eax], dl */ { u32 ad = (u32)(r_eax+r_eax); u32 c = fC; u32 a = R8(ad); u32 b = (u8)r_edx; u32 r = (a - b - c) & 0xffu; W8(ad, r);  }
    /* 006e63ee: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 006e63f0: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e63f2: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e63f4: lea eax, [ecx + eax + 0x1c] */ r_eax = (u32)(r_ecx+r_eax+0x1cu);
    /* 006e63f8: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 006e63fb: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 006e63ff: lea eax, [ebp - 0x60] */ r_eax = (u32)(r_ebp+0xffffffa0u);
    /* 006e6402: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 006e6406: call 0x6f3ba4 */ r_esp -= 4; W32(r_esp, 0x6e640bu); f_006f3ba4();
    /* 006e640b: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
L_006e6412:; BB(0x006e6412);
    /* 006e6412: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006e6419: jmp 0x6e64bb */ goto L_006e64bb;
L_006e641e:; BB(0x006e641e);
    /* 006e641e: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
    /* 006e6425: push 0x260 */ { u32 v = 0x260u; r_esp -= 4; W32(r_esp, v); }
    /* 006e642a: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e642fu); f_005caba4();
    /* 006e642f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e6430: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 006e6433: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e6435: je 0x6e64b4 */ if (fZ) goto L_006e64b4;
L_006e6437:; BB(0x006e6437);
    /* 006e6437: mov dword ptr [ebp - 0x40], 1 */ W32((u32)(r_ebp+0xffffffc0u), 0x1u);
    /* 006e643e: mov dword ptr [ebp - 4], 0x15 */ W32((u32)(r_ebp+0xfffffffcu), 0x15u);
    /* 006e6445: mov eax, dword ptr [0xaca344] */ r_eax = R32((u32)(0xaca344u));
    /* 006e644a: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e644d: mov edx, edi */ r_edx = r_edi;
    /* 006e644f: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e6452: movsx esi, word ptr [edx + ebx*4 + 0x136] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+r_ebx*4+0x136u));
    /* 006e645a: add esp, -0x1c */ {  u32 a = r_esp; u32 b = 0xffffffe4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e645d: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 006e6460: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 006e6464: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 006e6467: mov eax, dword ptr [edi + 0xa4] */ r_eax = R32((u32)(r_edi+0xa4u));
    /* 006e646d: mov dword ptr [esp + 0x10], 0x3f19999a */ W32((u32)(r_esp+0x10u), 0x3f19999au);
    /* 006e6475: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 006e6478: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e647a: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e647c: mov dword ptr [esp + 0x14], 0x14000000 */ W32((u32)(r_esp+0x14u), 0x14000000u);
    /* 006e6484: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6486: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6488: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e648a: mov dword ptr [esp + 0x18], 0x14 */ W32((u32)(r_esp+0x18u), 0x14u);
    /* 006e6492: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6494: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6496: lea eax, [ecx + eax + 0x1c] */ r_eax = (u32)(r_ecx+r_eax+0x1cu);
    /* 006e649a: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 006e649d: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 006e64a1: lea eax, [ebp - 0x60] */ r_eax = (u32)(r_ebp+0xffffffa0u);
    /* 006e64a4: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 006e64a8: call 0x6f3ba4 */ r_esp -= 4; W32(r_esp, 0x6e64adu); f_006f3ba4();
    /* 006e64ad: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
L_006e64b4:; BB(0x006e64b4);
    /* 006e64b4: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
L_006e64bb:; BB(0x006e64bb);
    /* 006e64bb: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006e64be: mov edx, dword ptr [eax + 0x130] */ r_edx = R32((u32)(r_eax+0x130u));
    /* 006e64c4: add dword ptr [ebp - 0x1c], 1 */ { u32 ad = (u32)(r_ebp+0xffffffe4u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 006e64c8: jmp 0x6e6011 */ goto L_006e6011;
L_006e64cd:; BB(0x006e64cd);
    /* 006e64cd: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 006e64d4: push 0x260 */ { u32 v = 0x260u; r_esp -= 4; W32(r_esp, v); }
    /* 006e64d9: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e64deu); f_005caba4();
    /* 006e64de: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e64df: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 006e64e2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e64e4: je 0x6e6563 */ if (fZ) goto L_006e6563;
L_006e64e6:; BB(0x006e64e6);
    /* 006e64e6: mov dword ptr [ebp - 0x3c], 1 */ W32((u32)(r_ebp+0xffffffc4u), 0x1u);
    /* 006e64ed: mov dword ptr [ebp - 4], 0x16 */ W32((u32)(r_ebp+0xfffffffcu), 0x16u);
    /* 006e64f4: mov eax, dword ptr [0xaca344] */ r_eax = R32((u32)(0xaca344u));
    /* 006e64f9: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e64fc: mov edx, edi */ r_edx = r_edi;
    /* 006e64fe: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e6501: movsx esi, word ptr [edx + ebx*4 + 0x136] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+r_ebx*4+0x136u));
    /* 006e6509: add esp, -0x1c */ {  u32 a = r_esp; u32 b = 0xffffffe4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e650c: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 006e650f: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 006e6513: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 006e6516: mov eax, dword ptr [edi + 0xa4] */ r_eax = R32((u32)(r_edi+0xa4u));
    /* 006e651c: mov dword ptr [esp + 0x10], 0x3f333333 */ W32((u32)(r_esp+0x10u), 0x3f333333u);
    /* 006e6524: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 006e6527: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6529: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e652b: mov dword ptr [esp + 0x14], 0x14000000 */ W32((u32)(r_esp+0x14u), 0x14000000u);
    /* 006e6533: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6535: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6537: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6539: mov dword ptr [esp + 0x18], 0x14 */ W32((u32)(r_esp+0x18u), 0x14u);
    /* 006e6541: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6543: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6545: lea eax, [ecx + eax + 0x1c] */ r_eax = (u32)(r_ecx+r_eax+0x1cu);
    /* 006e6549: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 006e654c: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 006e6550: lea eax, [ebp - 0x60] */ r_eax = (u32)(r_ebp+0xffffffa0u);
    /* 006e6553: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 006e6557: call 0x6f3ba4 */ r_esp -= 4; W32(r_esp, 0x6e655cu); f_006f3ba4();
    /* 006e655c: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_006e6563:; BB(0x006e6563);
    /* 006e6563: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006e656a: jmp 0x6e64bb */ goto L_006e64bb;
L_006e656f:; BB(0x006e656f);
    /* 006e656f: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 006e6576: push 0x260 */ { u32 v = 0x260u; r_esp -= 4; W32(r_esp, v); }
    /* 006e657b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e6580u); f_005caba4();
    /* 006e6580: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e6581: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 006e6584: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e6586: je 0x6e6605 */ if (fZ) goto L_006e6605;
L_006e6588:; BB(0x006e6588);
    /* 006e6588: mov dword ptr [ebp - 0x38], 1 */ W32((u32)(r_ebp+0xffffffc8u), 0x1u);
    /* 006e658f: mov dword ptr [ebp - 4], 0x17 */ W32((u32)(r_ebp+0xfffffffcu), 0x17u);
    /* 006e6596: mov eax, dword ptr [0xaca344] */ r_eax = R32((u32)(0xaca344u));
    /* 006e659b: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e659e: mov edx, edi */ r_edx = r_edi;
    /* 006e65a0: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e65a3: movsx esi, word ptr [edx + ebx*4 + 0x136] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+r_ebx*4+0x136u));
    /* 006e65ab: add esp, -0x1c */ {  u32 a = r_esp; u32 b = 0xffffffe4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e65ae: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 006e65b1: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 006e65b5: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 006e65b8: mov eax, dword ptr [edi + 0xa4] */ r_eax = R32((u32)(r_edi+0xa4u));
    /* 006e65be: mov dword ptr [esp + 0x10], 0x3f19999a */ W32((u32)(r_esp+0x10u), 0x3f19999au);
    /* 006e65c6: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 006e65c9: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e65cb: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e65cd: mov dword ptr [esp + 0x14], 0x14000000 */ W32((u32)(r_esp+0x14u), 0x14000000u);
    /* 006e65d5: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e65d7: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e65d9: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e65db: mov dword ptr [esp + 0x18], 0x14 */ W32((u32)(r_esp+0x18u), 0x14u);
    /* 006e65e3: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e65e5: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e65e7: lea eax, [ecx + eax + 0x1c] */ r_eax = (u32)(r_ecx+r_eax+0x1cu);
    /* 006e65eb: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 006e65ee: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 006e65f2: lea eax, [ebp - 0x60] */ r_eax = (u32)(r_ebp+0xffffffa0u);
    /* 006e65f5: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 006e65f9: call 0x6f3ba4 */ r_esp -= 4; W32(r_esp, 0x6e65feu); f_006f3ba4();
    /* 006e65fe: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_006e6605:; BB(0x006e6605);
    /* 006e6605: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006e660c: jmp 0x6e64bb */ goto L_006e64bb;
L_006e6611:; BB(0x006e6611);
    /* 006e6611: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 006e6618: push 0x260 */ { u32 v = 0x260u; r_esp -= 4; W32(r_esp, v); }
    /* 006e661d: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e6622u); f_005caba4();
    /* 006e6622: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e6623: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 006e6626: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e6628: je 0x6e66a7 */ if (fZ) goto L_006e66a7;
L_006e662a:; BB(0x006e662a);
    /* 006e662a: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 006e6631: mov dword ptr [ebp - 4], 0x18 */ W32((u32)(r_ebp+0xfffffffcu), 0x18u);
    /* 006e6638: mov eax, dword ptr [0xaca344] */ r_eax = R32((u32)(0xaca344u));
    /* 006e663d: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e6640: mov edx, edi */ r_edx = r_edi;
    /* 006e6642: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e6645: movsx esi, word ptr [edx + ebx*4 + 0x136] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+r_ebx*4+0x136u));
    /* 006e664d: add esp, -0x1c */ {  u32 a = r_esp; u32 b = 0xffffffe4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e6650: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 006e6653: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 006e6657: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 006e665a: mov eax, dword ptr [edi + 0xa4] */ r_eax = R32((u32)(r_edi+0xa4u));
    /* 006e6660: mov dword ptr [esp + 0x10], 0x3f000000 */ W32((u32)(r_esp+0x10u), 0x3f000000u);
    /* 006e6668: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 006e666b: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e666d: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e666f: mov dword ptr [esp + 0x14], 0x14000000 */ W32((u32)(r_esp+0x14u), 0x14000000u);
    /* 006e6677: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6679: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e667b: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e667d: mov dword ptr [esp + 0x18], 0x14 */ W32((u32)(r_esp+0x18u), 0x14u);
    /* 006e6685: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6687: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6689: lea eax, [ecx + eax + 0x1c] */ r_eax = (u32)(r_ecx+r_eax+0x1cu);
    /* 006e668d: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 006e6690: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 006e6694: lea eax, [ebp - 0x60] */ r_eax = (u32)(r_ebp+0xffffffa0u);
    /* 006e6697: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 006e669b: call 0x6f3ba4 */ r_esp -= 4; W32(r_esp, 0x6e66a0u); f_006f3ba4();
    /* 006e66a0: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_006e66a7:; BB(0x006e66a7);
    /* 006e66a7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006e66ae: jmp 0x6e64bb */ goto L_006e64bb;
L_006e66b3:; BB(0x006e66b3);
    /* 006e66b3: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 006e66b6: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 006e66b9: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006e66bc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006e66be: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006e66c1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006e66c8: mov esp, ebp */ r_esp = r_ebp;
    /* 006e66ca: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e66cb: ret  */ FN_RET(0x006e63eb); r_esp += 4; return;
L_006e69ba:; BB(0x006e69ba);
    /* 006e69ba: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 006e69bd: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 006e69c0: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006e69c3: mov eax, 1 */ r_eax = 0x1u;
    /* 006e69c8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006e69cb: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006e69d2: mov esp, ebp */ r_esp = r_ebp;
    /* 006e69d4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e69d5: ret  */ FN_RET(0x006e63eb); r_esp += 4; return;
}

void f_006e6961(void)
{
    FN_ENTER(0x006e6961);
    goto L_006e6961;
L_006e5ffb:; BB(0x006e5ffb);
    /* 006e5ffb: mov eax, edi */ r_eax = r_edi;
    /* 006e5ffd: mov edx, dword ptr [eax + 0x130] */ r_edx = R32((u32)(r_eax+0x130u));
    /* 006e6003: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006e6006: je 0x6e69ba */ if (fZ) goto L_006e69ba;
L_006e600c:; BB(0x006e600c);
    /* 006e600c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006e600e: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
L_006e6011:; BB(0x006e6011);
    /* 006e6011: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 006e6014: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006e6017: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006e6019: jge 0x6e69ba */ if ((fS==fO)) goto L_006e69ba;
L_006e601f:; BB(0x006e601f);
    /* 006e601f: mov ecx, eax */ r_ecx = r_eax;
    /* 006e6021: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006e6024: movzx ebx, word ptr [edx + ecx*8 + 0x134] */ r_ebx = (u32)R16((u32)(r_edx+r_ecx*8+0x134u));
    /* 006e602c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006e602d: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 006e6030: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006e6033: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x6e6038u); f_007b4d18();
    /* 006e6038: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006e603b: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006e603e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006e6041: movzx ecx, word ptr [eax + edx*8 + 0x13c] */ r_ecx = (u32)R16((u32)(r_eax+r_edx*8+0x13cu));
    /* 006e6049: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006e604a: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x6e604fu); f_007b4d18();
    /* 006e604f: mov ebx, eax */ r_ebx = r_eax;
    /* 006e6051: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e6054: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e6055: call 0x6ea700 */ r_esp -= 4; W32(r_esp, 0x6e605au); f_006ea700();
    /* 006e605a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e605d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e605f: je 0x6e66b3 */ if (fZ) goto L_006e66b3;
L_006e6065:; BB(0x006e6065);
    /* 006e6065: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006e6066: call 0x6ea700 */ r_esp -= 4; W32(r_esp, 0x6e606bu); f_006ea700();
    /* 006e606b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e606c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e606e: je 0x6e66b3 */ if (fZ) goto L_006e66b3;
L_006e6074:; BB(0x006e6074);
    /* 006e6074: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e6077: mov esi, dword ptr [edx + 0x30] */ r_esi = R32((u32)(r_edx+0x30u));
    /* 006e607a: test esi, 0x20000000 */ {  u32 a = r_esi; u32 b = 0x20000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e6080: je 0x6e60c7 */ if (fZ) goto L_006e60c7;
L_006e6082:; BB(0x006e6082);
    /* 006e6082: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
    /* 006e6085: test edx, 0x20000000 */ {  u32 a = r_edx; u32 b = 0x20000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e608b: je 0x6e60c7 */ if (fZ) goto L_006e60c7;
L_006e608d:; BB(0x006e608d);
    /* 006e608d: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e6090: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e6091: call 0x6ea71c */ r_esp -= 4; W32(r_esp, 0x6e6096u); f_006ea71c();
    /* 006e6096: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e6097: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e6099: je 0x6e60c7 */ if (fZ) goto L_006e60c7;
L_006e609b:; BB(0x006e609b);
    /* 006e609b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006e609c: call 0x6ea71c */ r_esp -= 4; W32(r_esp, 0x6e60a1u); f_006ea71c();
    /* 006e60a1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e60a2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e60a4: je 0x6e60c7 */ if (fZ) goto L_006e60c7;
L_006e60a6:; BB(0x006e60a6);
    /* 006e60a6: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e60a9: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006e60ab: call dword ptr [edx + 0x8c] */ { u32 t = R32((u32)(r_edx+0x8cu)); r_esp -= 4; W32(r_esp, 0x6e60b1u); call_ind(t); }
    /* 006e60b1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e60b3: je 0x6e60c7 */ if (fZ) goto L_006e60c7;
L_006e60b5:; BB(0x006e60b5);
    /* 006e60b5: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 006e60b7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006e60b9: call dword ptr [edx + 0x8c] */ { u32 t = R32((u32)(r_edx+0x8cu)); r_esp -= 4; W32(r_esp, 0x6e60bfu); call_ind(t); }
    /* 006e60bf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e60c1: jne 0x6e66b3 */ if (!fZ) goto L_006e66b3;
L_006e60c7:; BB(0x006e60c7);
    /* 006e60c7: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e60ca: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 006e60cd: lea ecx, [ebp - 0x60] */ r_ecx = (u32)(r_ebp+0xffffffa0u);
    /* 006e60d0: movsx esi, word ptr [edi + eax*4 + 0x136] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edi+r_eax*4+0x136u));
    /* 006e60d8: mov ebx, dword ptr [ebx + 0xa4] */ r_ebx = R32((u32)(r_ebx+0xa4u));
    /* 006e60de: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 006e60e1: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006e60e3: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006e60e5: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006e60e7: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006e60e9: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006e60eb: movsx esi, word ptr [edi + eax*4 + 0x13e] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edi+r_eax*4+0x13eu));
    /* 006e60f3: fld dword ptr [ebx + edx*4 + 0x1c] */ FPUSH(R_F32((u32)(r_ebx+r_edx*4+0x1cu)));
    /* 006e60f7: fld dword ptr [ebx + edx*4 + 0x20] */ FPUSH(R_F32((u32)(r_ebx+r_edx*4+0x20u)));
    /* 006e60fb: fld dword ptr [ebx + edx*4 + 0x24] */ FPUSH(R_F32((u32)(r_ebx+r_edx*4+0x24u)));
    /* 006e60ff: lea eax, [esi + esi] */ r_eax = (u32)(r_esi+r_esi);
    /* 006e6102: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006e6104: sub eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006e6106: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006e6108: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006e610a: sub eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006e610c: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e610f: mov esi, dword ptr [esi + 0xa4] */ r_esi = R32((u32)(r_esi+0xa4u));
    /* 006e6115: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 006e6117: fsub dword ptr [esi + eax*4 + 0x1c] */ ST(0) = ST(0) - R_F32((u32)(r_esi+r_eax*4+0x1cu));
    /* 006e611b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006e611d: fsub dword ptr [esi + eax*4 + 0x20] */ ST(0) = ST(0) - R_F32((u32)(r_esi+r_eax*4+0x20u));
    /* 006e6121: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 006e6123: fsub dword ptr [esi + eax*4 + 0x24] */ ST(0) = ST(0) - R_F32((u32)(r_esi+r_eax*4+0x24u));
    /* 006e6127: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006e6129: fstp dword ptr [ebp - 0x60] */ W_F32((u32)(r_ebp+0xffffffa0u), ST(0)); FPOP();
    /* 006e612c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006e612e: fstp dword ptr [ebp - 0x5c] */ W_F32((u32)(r_ebp+0xffffffa4u), ST(0)); FPOP();
    /* 006e6131: fstp dword ptr [ebp - 0x58] */ W_F32((u32)(r_ebp+0xffffffa8u), ST(0)); FPOP();
    /* 006e6134: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x6e6139u); f_0083173c();
    /* 006e6139: fstp dword ptr [ebp - 0x24] */ W_F32((u32)(r_ebp+0xffffffdcu), ST(0)); FPOP();
    /* 006e613c: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 006e613f: fcomp dword ptr [0x96d480] */ fx_compare(ST(0), R_F32((u32)(0x96d480u))); FPOP();
    /* 006e6145: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006e6147: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006e6148: je 0x6e66b3 */ if (fZ) goto L_006e66b3;
L_006e614e:; BB(0x006e614e);
    /* 006e614e: lea ecx, [ebp - 0x60] */ r_ecx = (u32)(r_ebp+0xffffffa0u);
    /* 006e6151: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x6e6156u); f_0082df08();
    /* 006e6156: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006e6158: mov eax, edi */ r_eax = r_edi;
    /* 006e615a: movsx eax, word ptr [eax + 0xc6] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0xc6u));
    /* 006e6161: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e6163: je 0x6e6611 */ if (fZ) goto L_006e6611;
L_006e6169:; BB(0x006e6169);
    /* 006e6169: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e616c: je 0x6e656f */ if (fZ) goto L_006e656f;
L_006e6172:; BB(0x006e6172);
    /* 006e6172: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e6175: je 0x6e64cd */ if (fZ) goto L_006e64cd;
L_006e617b:; BB(0x006e617b);
    /* 006e617b: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e617e: je 0x6e641e */ if (fZ) goto L_006e641e;
L_006e6184:; BB(0x006e6184);
    /* 006e6184: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e6187: jne 0x6e622f */ if (!fZ) goto L_006e622f;
L_006e618d:; BB(0x006e618d);
    /* 006e618d: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
    /* 006e6194: push 0x260 */ { u32 v = 0x260u; r_esp -= 4; W32(r_esp, v); }
    /* 006e6199: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e619eu); f_005caba4();
    /* 006e619e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e619f: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 006e61a2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e61a4: je 0x6e6223 */ if (fZ) goto L_006e6223;
L_006e61a6:; BB(0x006e61a6);
    /* 006e61a6: mov dword ptr [ebp - 0x44], 1 */ W32((u32)(r_ebp+0xffffffbcu), 0x1u);
    /* 006e61ad: mov dword ptr [ebp - 4], 0x14 */ W32((u32)(r_ebp+0xfffffffcu), 0x14u);
    /* 006e61b4: mov eax, dword ptr [0xaca344] */ r_eax = R32((u32)(0xaca344u));
    /* 006e61b9: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e61bc: mov edx, edi */ r_edx = r_edi;
    /* 006e61be: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e61c1: movsx esi, word ptr [edx + ebx*4 + 0x136] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+r_ebx*4+0x136u));
    /* 006e61c9: add esp, -0x1c */ {  u32 a = r_esp; u32 b = 0xffffffe4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e61cc: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 006e61cf: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 006e61d3: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 006e61d6: mov eax, dword ptr [edi + 0xa4] */ r_eax = R32((u32)(r_edi+0xa4u));
    /* 006e61dc: mov dword ptr [esp + 0x10], 0x3f333333 */ W32((u32)(r_esp+0x10u), 0x3f333333u);
    /* 006e61e4: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 006e61e7: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e61e9: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e61eb: mov dword ptr [esp + 0x14], 0x14000000 */ W32((u32)(r_esp+0x14u), 0x14000000u);
    /* 006e61f3: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e61f5: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e61f7: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e61f9: mov dword ptr [esp + 0x18], 0x14 */ W32((u32)(r_esp+0x18u), 0x14u);
    /* 006e6201: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6203: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6205: lea eax, [ecx + eax + 0x1c] */ r_eax = (u32)(r_ecx+r_eax+0x1cu);
    /* 006e6209: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 006e620c: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 006e6210: lea eax, [ebp - 0x60] */ r_eax = (u32)(r_ebp+0xffffffa0u);
    /* 006e6213: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 006e6217: call 0x6f3ba4 */ r_esp -= 4; W32(r_esp, 0x6e621cu); f_006f3ba4();
    /* 006e621c: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
L_006e6223:; BB(0x006e6223);
    /* 006e6223: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006e622a: jmp 0x6e64bb */ goto L_006e64bb;
L_006e622f:; BB(0x006e622f);
    /* 006e622f: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e6232: jne 0x6e64bb */ if (!fZ) goto L_006e64bb;
L_006e6238:; BB(0x006e6238);
    /* 006e6238: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
    /* 006e623f: push 0x260 */ { u32 v = 0x260u; r_esp -= 4; W32(r_esp, v); }
    /* 006e6244: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e6249u); f_005caba4();
    /* 006e6249: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e624a: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 006e624d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e624f: je 0x6e62ce */ if (fZ) goto L_006e62ce;
L_006e6251:; BB(0x006e6251);
    /* 006e6251: mov dword ptr [ebp - 0x54], 1 */ W32((u32)(r_ebp+0xffffffacu), 0x1u);
    /* 006e6258: mov dword ptr [ebp - 4], 0x11 */ W32((u32)(r_ebp+0xfffffffcu), 0x11u);
    /* 006e625f: mov eax, dword ptr [0xaca344] */ r_eax = R32((u32)(0xaca344u));
    /* 006e6264: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e6267: mov edx, edi */ r_edx = r_edi;
    /* 006e6269: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e626c: movsx esi, word ptr [edx + ebx*4 + 0x136] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+r_ebx*4+0x136u));
    /* 006e6274: add esp, -0x1c */ {  u32 a = r_esp; u32 b = 0xffffffe4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e6277: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 006e627a: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 006e627e: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 006e6281: mov eax, dword ptr [edi + 0xa4] */ r_eax = R32((u32)(r_edi+0xa4u));
    /* 006e6287: mov dword ptr [esp + 0x10], 0x40a00000 */ W32((u32)(r_esp+0x10u), 0x40a00000u);
    /* 006e628f: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 006e6292: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6294: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6296: mov dword ptr [esp + 0x14], 0x14000000 */ W32((u32)(r_esp+0x14u), 0x14000000u);
    /* 006e629e: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e62a0: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e62a2: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e62a4: mov dword ptr [esp + 0x18], 0x14 */ W32((u32)(r_esp+0x18u), 0x14u);
    /* 006e62ac: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e62ae: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e62b0: lea eax, [ecx + eax + 0x1c] */ r_eax = (u32)(r_ecx+r_eax+0x1cu);
    /* 006e62b4: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 006e62b7: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 006e62bb: lea eax, [ebp - 0x60] */ r_eax = (u32)(r_ebp+0xffffffa0u);
    /* 006e62be: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 006e62c2: call 0x6f3ba4 */ r_esp -= 4; W32(r_esp, 0x6e62c7u); f_006f3ba4();
    /* 006e62c7: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
L_006e62ce:; BB(0x006e62ce);
    /* 006e62ce: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006e62d5: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
    /* 006e62dc: push 0x260 */ { u32 v = 0x260u; r_esp -= 4; W32(r_esp, v); }
    /* 006e62e1: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e62e6u); f_005caba4();
    /* 006e62e6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e62e7: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 006e62ea: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e62ec: je 0x6e6370 */ if (fZ) goto L_006e6370;
L_006e62f2:; BB(0x006e62f2);
    /* 006e62f2: mov dword ptr [ebp - 0x4c], 1 */ W32((u32)(r_ebp+0xffffffb4u), 0x1u);
    /* 006e62f9: mov dword ptr [ebp - 4], 0x12 */ W32((u32)(r_ebp+0xfffffffcu), 0x12u);
    /* 006e6300: mov eax, dword ptr [0xaca344] */ r_eax = R32((u32)(0xaca344u));
    /* 006e6305: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e6308: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006e630b: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e630e: movsx esi, word ptr [edx + ebx*4 + 0x136] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+r_ebx*4+0x136u));
    /* 006e6316: add esp, -0x1c */ {  u32 a = r_esp; u32 b = 0xffffffe4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e6319: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 006e631c: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 006e6320: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 006e6323: mov eax, dword ptr [edi + 0xa4] */ r_eax = R32((u32)(r_edi+0xa4u));
    /* 006e6329: mov dword ptr [esp + 0x10], 0x3f000000 */ W32((u32)(r_esp+0x10u), 0x3f000000u);
    /* 006e6331: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 006e6334: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6336: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6338: mov dword ptr [esp + 0x14], 0x14000000 */ W32((u32)(r_esp+0x14u), 0x14000000u);
    /* 006e6340: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6342: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6344: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6346: mov dword ptr [esp + 0x18], 0x14 */ W32((u32)(r_esp+0x18u), 0x14u);
    /* 006e634e: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6350: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6352: lea eax, [ecx + eax + 0x1c] */ r_eax = (u32)(r_ecx+r_eax+0x1cu);
    /* 006e6356: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 006e6359: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 006e635d: lea eax, [ebp - 0x60] */ r_eax = (u32)(r_ebp+0xffffffa0u);
    /* 006e6360: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 006e6364: call 0x6f3ba4 */ r_esp -= 4; W32(r_esp, 0x6e6369u); f_006f3ba4();
    /* 006e6369: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
L_006e6370:; BB(0x006e6370);
    /* 006e6370: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006e6377: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
    /* 006e637e: push 0x260 */ { u32 v = 0x260u; r_esp -= 4; W32(r_esp, v); }
    /* 006e6383: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e6388u); f_005caba4();
    /* 006e6388: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e6389: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 006e638c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e638e: je 0x6e6412 */ if (fZ) goto L_006e6412;
L_006e6394:; BB(0x006e6394);
    /* 006e6394: mov dword ptr [ebp - 0x48], 1 */ W32((u32)(r_ebp+0xffffffb8u), 0x1u);
    /* 006e639b: mov dword ptr [ebp - 4], 0x13 */ W32((u32)(r_ebp+0xfffffffcu), 0x13u);
    /* 006e63a2: mov eax, dword ptr [0xaca344] */ r_eax = R32((u32)(0xaca344u));
    /* 006e63a7: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e63aa: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006e63ad: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e63b0: movsx esi, word ptr [edx + ebx*4 + 0x136] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+r_ebx*4+0x136u));
    /* 006e63b8: add esp, -0x1c */ {  u32 a = r_esp; u32 b = 0xffffffe4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e63bb: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 006e63be: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 006e63c2: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 006e63c5: mov eax, dword ptr [edi + 0xa4] */ r_eax = R32((u32)(r_edi+0xa4u));
    /* 006e63cb: mov dword ptr [esp + 0x10], 0x3f000000 */ W32((u32)(r_esp+0x10u), 0x3f000000u);
    /* 006e63d3: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 006e63d6: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e63d8: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e63da: mov dword ptr [esp + 0x14], 0x14000000 */ W32((u32)(r_esp+0x14u), 0x14000000u);
    /* 006e63e2: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e63e4: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e63e6: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e63e8: mov dword ptr [esp + 0x18], 0x14 */ W32((u32)(r_esp+0x18u), 0x14u);
    /* 006e63f0: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e63f2: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e63f4: lea eax, [ecx + eax + 0x1c] */ r_eax = (u32)(r_ecx+r_eax+0x1cu);
    /* 006e63f8: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 006e63fb: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 006e63ff: lea eax, [ebp - 0x60] */ r_eax = (u32)(r_ebp+0xffffffa0u);
    /* 006e6402: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 006e6406: call 0x6f3ba4 */ r_esp -= 4; W32(r_esp, 0x6e640bu); f_006f3ba4();
    /* 006e640b: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
L_006e6412:; BB(0x006e6412);
    /* 006e6412: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006e6419: jmp 0x6e64bb */ goto L_006e64bb;
L_006e641e:; BB(0x006e641e);
    /* 006e641e: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
    /* 006e6425: push 0x260 */ { u32 v = 0x260u; r_esp -= 4; W32(r_esp, v); }
    /* 006e642a: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e642fu); f_005caba4();
    /* 006e642f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e6430: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 006e6433: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e6435: je 0x6e64b4 */ if (fZ) goto L_006e64b4;
L_006e6437:; BB(0x006e6437);
    /* 006e6437: mov dword ptr [ebp - 0x40], 1 */ W32((u32)(r_ebp+0xffffffc0u), 0x1u);
    /* 006e643e: mov dword ptr [ebp - 4], 0x15 */ W32((u32)(r_ebp+0xfffffffcu), 0x15u);
    /* 006e6445: mov eax, dword ptr [0xaca344] */ r_eax = R32((u32)(0xaca344u));
    /* 006e644a: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e644d: mov edx, edi */ r_edx = r_edi;
    /* 006e644f: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e6452: movsx esi, word ptr [edx + ebx*4 + 0x136] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+r_ebx*4+0x136u));
    /* 006e645a: add esp, -0x1c */ {  u32 a = r_esp; u32 b = 0xffffffe4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e645d: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 006e6460: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 006e6464: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 006e6467: mov eax, dword ptr [edi + 0xa4] */ r_eax = R32((u32)(r_edi+0xa4u));
    /* 006e646d: mov dword ptr [esp + 0x10], 0x3f19999a */ W32((u32)(r_esp+0x10u), 0x3f19999au);
    /* 006e6475: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 006e6478: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e647a: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e647c: mov dword ptr [esp + 0x14], 0x14000000 */ W32((u32)(r_esp+0x14u), 0x14000000u);
    /* 006e6484: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6486: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6488: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e648a: mov dword ptr [esp + 0x18], 0x14 */ W32((u32)(r_esp+0x18u), 0x14u);
    /* 006e6492: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6494: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6496: lea eax, [ecx + eax + 0x1c] */ r_eax = (u32)(r_ecx+r_eax+0x1cu);
    /* 006e649a: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 006e649d: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 006e64a1: lea eax, [ebp - 0x60] */ r_eax = (u32)(r_ebp+0xffffffa0u);
    /* 006e64a4: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 006e64a8: call 0x6f3ba4 */ r_esp -= 4; W32(r_esp, 0x6e64adu); f_006f3ba4();
    /* 006e64ad: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
L_006e64b4:; BB(0x006e64b4);
    /* 006e64b4: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
L_006e64bb:; BB(0x006e64bb);
    /* 006e64bb: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006e64be: mov edx, dword ptr [eax + 0x130] */ r_edx = R32((u32)(r_eax+0x130u));
    /* 006e64c4: add dword ptr [ebp - 0x1c], 1 */ { u32 ad = (u32)(r_ebp+0xffffffe4u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 006e64c8: jmp 0x6e6011 */ goto L_006e6011;
L_006e64cd:; BB(0x006e64cd);
    /* 006e64cd: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 006e64d4: push 0x260 */ { u32 v = 0x260u; r_esp -= 4; W32(r_esp, v); }
    /* 006e64d9: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e64deu); f_005caba4();
    /* 006e64de: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e64df: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 006e64e2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e64e4: je 0x6e6563 */ if (fZ) goto L_006e6563;
L_006e64e6:; BB(0x006e64e6);
    /* 006e64e6: mov dword ptr [ebp - 0x3c], 1 */ W32((u32)(r_ebp+0xffffffc4u), 0x1u);
    /* 006e64ed: mov dword ptr [ebp - 4], 0x16 */ W32((u32)(r_ebp+0xfffffffcu), 0x16u);
    /* 006e64f4: mov eax, dword ptr [0xaca344] */ r_eax = R32((u32)(0xaca344u));
    /* 006e64f9: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e64fc: mov edx, edi */ r_edx = r_edi;
    /* 006e64fe: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e6501: movsx esi, word ptr [edx + ebx*4 + 0x136] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+r_ebx*4+0x136u));
    /* 006e6509: add esp, -0x1c */ {  u32 a = r_esp; u32 b = 0xffffffe4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e650c: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 006e650f: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 006e6513: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 006e6516: mov eax, dword ptr [edi + 0xa4] */ r_eax = R32((u32)(r_edi+0xa4u));
    /* 006e651c: mov dword ptr [esp + 0x10], 0x3f333333 */ W32((u32)(r_esp+0x10u), 0x3f333333u);
    /* 006e6524: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 006e6527: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6529: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e652b: mov dword ptr [esp + 0x14], 0x14000000 */ W32((u32)(r_esp+0x14u), 0x14000000u);
    /* 006e6533: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6535: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6537: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6539: mov dword ptr [esp + 0x18], 0x14 */ W32((u32)(r_esp+0x18u), 0x14u);
    /* 006e6541: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6543: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6545: lea eax, [ecx + eax + 0x1c] */ r_eax = (u32)(r_ecx+r_eax+0x1cu);
    /* 006e6549: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 006e654c: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 006e6550: lea eax, [ebp - 0x60] */ r_eax = (u32)(r_ebp+0xffffffa0u);
    /* 006e6553: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 006e6557: call 0x6f3ba4 */ r_esp -= 4; W32(r_esp, 0x6e655cu); f_006f3ba4();
    /* 006e655c: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_006e6563:; BB(0x006e6563);
    /* 006e6563: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006e656a: jmp 0x6e64bb */ goto L_006e64bb;
L_006e656f:; BB(0x006e656f);
    /* 006e656f: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 006e6576: push 0x260 */ { u32 v = 0x260u; r_esp -= 4; W32(r_esp, v); }
    /* 006e657b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e6580u); f_005caba4();
    /* 006e6580: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e6581: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 006e6584: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e6586: je 0x6e6605 */ if (fZ) goto L_006e6605;
L_006e6588:; BB(0x006e6588);
    /* 006e6588: mov dword ptr [ebp - 0x38], 1 */ W32((u32)(r_ebp+0xffffffc8u), 0x1u);
    /* 006e658f: mov dword ptr [ebp - 4], 0x17 */ W32((u32)(r_ebp+0xfffffffcu), 0x17u);
    /* 006e6596: mov eax, dword ptr [0xaca344] */ r_eax = R32((u32)(0xaca344u));
    /* 006e659b: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e659e: mov edx, edi */ r_edx = r_edi;
    /* 006e65a0: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e65a3: movsx esi, word ptr [edx + ebx*4 + 0x136] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+r_ebx*4+0x136u));
    /* 006e65ab: add esp, -0x1c */ {  u32 a = r_esp; u32 b = 0xffffffe4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e65ae: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 006e65b1: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 006e65b5: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 006e65b8: mov eax, dword ptr [edi + 0xa4] */ r_eax = R32((u32)(r_edi+0xa4u));
    /* 006e65be: mov dword ptr [esp + 0x10], 0x3f19999a */ W32((u32)(r_esp+0x10u), 0x3f19999au);
    /* 006e65c6: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 006e65c9: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e65cb: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e65cd: mov dword ptr [esp + 0x14], 0x14000000 */ W32((u32)(r_esp+0x14u), 0x14000000u);
    /* 006e65d5: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e65d7: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e65d9: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e65db: mov dword ptr [esp + 0x18], 0x14 */ W32((u32)(r_esp+0x18u), 0x14u);
    /* 006e65e3: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e65e5: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e65e7: lea eax, [ecx + eax + 0x1c] */ r_eax = (u32)(r_ecx+r_eax+0x1cu);
    /* 006e65eb: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 006e65ee: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 006e65f2: lea eax, [ebp - 0x60] */ r_eax = (u32)(r_ebp+0xffffffa0u);
    /* 006e65f5: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 006e65f9: call 0x6f3ba4 */ r_esp -= 4; W32(r_esp, 0x6e65feu); f_006f3ba4();
    /* 006e65fe: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_006e6605:; BB(0x006e6605);
    /* 006e6605: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006e660c: jmp 0x6e64bb */ goto L_006e64bb;
L_006e6611:; BB(0x006e6611);
    /* 006e6611: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 006e6618: push 0x260 */ { u32 v = 0x260u; r_esp -= 4; W32(r_esp, v); }
    /* 006e661d: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e6622u); f_005caba4();
    /* 006e6622: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e6623: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 006e6626: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e6628: je 0x6e66a7 */ if (fZ) goto L_006e66a7;
L_006e662a:; BB(0x006e662a);
    /* 006e662a: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 006e6631: mov dword ptr [ebp - 4], 0x18 */ W32((u32)(r_ebp+0xfffffffcu), 0x18u);
    /* 006e6638: mov eax, dword ptr [0xaca344] */ r_eax = R32((u32)(0xaca344u));
    /* 006e663d: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e6640: mov edx, edi */ r_edx = r_edi;
    /* 006e6642: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e6645: movsx esi, word ptr [edx + ebx*4 + 0x136] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+r_ebx*4+0x136u));
    /* 006e664d: add esp, -0x1c */ {  u32 a = r_esp; u32 b = 0xffffffe4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e6650: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 006e6653: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 006e6657: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 006e665a: mov eax, dword ptr [edi + 0xa4] */ r_eax = R32((u32)(r_edi+0xa4u));
    /* 006e6660: mov dword ptr [esp + 0x10], 0x3f000000 */ W32((u32)(r_esp+0x10u), 0x3f000000u);
    /* 006e6668: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 006e666b: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e666d: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e666f: mov dword ptr [esp + 0x14], 0x14000000 */ W32((u32)(r_esp+0x14u), 0x14000000u);
    /* 006e6677: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6679: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e667b: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e667d: mov dword ptr [esp + 0x18], 0x14 */ W32((u32)(r_esp+0x18u), 0x14u);
    /* 006e6685: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6687: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6689: lea eax, [ecx + eax + 0x1c] */ r_eax = (u32)(r_ecx+r_eax+0x1cu);
    /* 006e668d: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 006e6690: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 006e6694: lea eax, [ebp - 0x60] */ r_eax = (u32)(r_ebp+0xffffffa0u);
    /* 006e6697: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 006e669b: call 0x6f3ba4 */ r_esp -= 4; W32(r_esp, 0x6e66a0u); f_006f3ba4();
    /* 006e66a0: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_006e66a7:; BB(0x006e66a7);
    /* 006e66a7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006e66ae: jmp 0x6e64bb */ goto L_006e64bb;
L_006e66b3:; BB(0x006e66b3);
    /* 006e66b3: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 006e66b6: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 006e66b9: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006e66bc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006e66be: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006e66c1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006e66c8: mov esp, ebp */ r_esp = r_ebp;
    /* 006e66ca: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e66cb: ret  */ FN_RET(0x006e6961); r_esp += 4; return;
L_006e6961:; BB(0x006e6961);
    /* 006e6961: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 006e6962: cld  */ rt_df = 0;
    /* 006e6963: adc byte ptr [eax], al */ { u32 ad = (u32)(r_eax); u32 c = fC; u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b + c) & 0xffu; W8(ad, r);  }
    /* 006e6965: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 006e6967: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e696a: push 0x19f */ { u32 v = 0x19fu; r_esp -= 4; W32(r_esp, v); }
    /* 006e696f: movsx eax, word ptr [edi + 0x136] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x136u));
    /* 006e6976: mov esi, dword ptr [edx + 0xa4] */ r_esi = R32((u32)(r_edx+0xa4u));
    /* 006e697c: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 006e6982: lea ebx, [eax + eax] */ r_ebx = (u32)(r_eax+r_eax);
    /* 006e6985: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006e6987: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 006e6989: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006e698b: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006e698d: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 006e698f: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006e6991: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006e6993: lea eax, [ebx + esi + 0x1c] */ r_eax = (u32)(r_ebx+r_esi+0x1cu);
    /* 006e6997: lea ecx, [edi + 0x20] */ r_ecx = (u32)(r_edi+0x20u);
    /* 006e699a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006e699b: mov ecx, dword ptr [ebp - 0x98] */ r_ecx = R32((u32)(r_ebp+0xffffff68u));
    /* 006e69a1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e69a2: call 0x6f4554 */ r_esp -= 4; W32(r_esp, 0x6e69a7u); f_006f4554();
    /* 006e69a7: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
    /* 006e69ae: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006e69b5: jmp 0x6e5ffb */ goto L_006e5ffb;
L_006e69ba:; BB(0x006e69ba);
    /* 006e69ba: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 006e69bd: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 006e69c0: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006e69c3: mov eax, 1 */ r_eax = 0x1u;
    /* 006e69c8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006e69cb: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006e69d2: mov esp, ebp */ r_esp = r_ebp;
    /* 006e69d4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e69d5: ret  */ FN_RET(0x006e6961); r_esp += 4; return;
}

void f_006e6962(void)
{
    FN_ENTER(0x006e6962);
    goto L_006e6962;
L_006e5ffb:; BB(0x006e5ffb);
    /* 006e5ffb: mov eax, edi */ r_eax = r_edi;
    /* 006e5ffd: mov edx, dword ptr [eax + 0x130] */ r_edx = R32((u32)(r_eax+0x130u));
    /* 006e6003: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006e6006: je 0x6e69ba */ if (fZ) goto L_006e69ba;
L_006e600c:; BB(0x006e600c);
    /* 006e600c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006e600e: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
L_006e6011:; BB(0x006e6011);
    /* 006e6011: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 006e6014: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006e6017: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006e6019: jge 0x6e69ba */ if ((fS==fO)) goto L_006e69ba;
L_006e601f:; BB(0x006e601f);
    /* 006e601f: mov ecx, eax */ r_ecx = r_eax;
    /* 006e6021: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006e6024: movzx ebx, word ptr [edx + ecx*8 + 0x134] */ r_ebx = (u32)R16((u32)(r_edx+r_ecx*8+0x134u));
    /* 006e602c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006e602d: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 006e6030: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006e6033: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x6e6038u); f_007b4d18();
    /* 006e6038: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006e603b: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006e603e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006e6041: movzx ecx, word ptr [eax + edx*8 + 0x13c] */ r_ecx = (u32)R16((u32)(r_eax+r_edx*8+0x13cu));
    /* 006e6049: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006e604a: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x6e604fu); f_007b4d18();
    /* 006e604f: mov ebx, eax */ r_ebx = r_eax;
    /* 006e6051: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e6054: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e6055: call 0x6ea700 */ r_esp -= 4; W32(r_esp, 0x6e605au); f_006ea700();
    /* 006e605a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e605d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e605f: je 0x6e66b3 */ if (fZ) goto L_006e66b3;
L_006e6065:; BB(0x006e6065);
    /* 006e6065: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006e6066: call 0x6ea700 */ r_esp -= 4; W32(r_esp, 0x6e606bu); f_006ea700();
    /* 006e606b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e606c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e606e: je 0x6e66b3 */ if (fZ) goto L_006e66b3;
L_006e6074:; BB(0x006e6074);
    /* 006e6074: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e6077: mov esi, dword ptr [edx + 0x30] */ r_esi = R32((u32)(r_edx+0x30u));
    /* 006e607a: test esi, 0x20000000 */ {  u32 a = r_esi; u32 b = 0x20000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e6080: je 0x6e60c7 */ if (fZ) goto L_006e60c7;
L_006e6082:; BB(0x006e6082);
    /* 006e6082: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
    /* 006e6085: test edx, 0x20000000 */ {  u32 a = r_edx; u32 b = 0x20000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e608b: je 0x6e60c7 */ if (fZ) goto L_006e60c7;
L_006e608d:; BB(0x006e608d);
    /* 006e608d: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e6090: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e6091: call 0x6ea71c */ r_esp -= 4; W32(r_esp, 0x6e6096u); f_006ea71c();
    /* 006e6096: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e6097: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e6099: je 0x6e60c7 */ if (fZ) goto L_006e60c7;
L_006e609b:; BB(0x006e609b);
    /* 006e609b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006e609c: call 0x6ea71c */ r_esp -= 4; W32(r_esp, 0x6e60a1u); f_006ea71c();
    /* 006e60a1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e60a2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e60a4: je 0x6e60c7 */ if (fZ) goto L_006e60c7;
L_006e60a6:; BB(0x006e60a6);
    /* 006e60a6: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e60a9: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006e60ab: call dword ptr [edx + 0x8c] */ { u32 t = R32((u32)(r_edx+0x8cu)); r_esp -= 4; W32(r_esp, 0x6e60b1u); call_ind(t); }
    /* 006e60b1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e60b3: je 0x6e60c7 */ if (fZ) goto L_006e60c7;
L_006e60b5:; BB(0x006e60b5);
    /* 006e60b5: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 006e60b7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006e60b9: call dword ptr [edx + 0x8c] */ { u32 t = R32((u32)(r_edx+0x8cu)); r_esp -= 4; W32(r_esp, 0x6e60bfu); call_ind(t); }
    /* 006e60bf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e60c1: jne 0x6e66b3 */ if (!fZ) goto L_006e66b3;
L_006e60c7:; BB(0x006e60c7);
    /* 006e60c7: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e60ca: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 006e60cd: lea ecx, [ebp - 0x60] */ r_ecx = (u32)(r_ebp+0xffffffa0u);
    /* 006e60d0: movsx esi, word ptr [edi + eax*4 + 0x136] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edi+r_eax*4+0x136u));
    /* 006e60d8: mov ebx, dword ptr [ebx + 0xa4] */ r_ebx = R32((u32)(r_ebx+0xa4u));
    /* 006e60de: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 006e60e1: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006e60e3: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006e60e5: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006e60e7: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006e60e9: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006e60eb: movsx esi, word ptr [edi + eax*4 + 0x13e] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edi+r_eax*4+0x13eu));
    /* 006e60f3: fld dword ptr [ebx + edx*4 + 0x1c] */ FPUSH(R_F32((u32)(r_ebx+r_edx*4+0x1cu)));
    /* 006e60f7: fld dword ptr [ebx + edx*4 + 0x20] */ FPUSH(R_F32((u32)(r_ebx+r_edx*4+0x20u)));
    /* 006e60fb: fld dword ptr [ebx + edx*4 + 0x24] */ FPUSH(R_F32((u32)(r_ebx+r_edx*4+0x24u)));
    /* 006e60ff: lea eax, [esi + esi] */ r_eax = (u32)(r_esi+r_esi);
    /* 006e6102: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006e6104: sub eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006e6106: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006e6108: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006e610a: sub eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006e610c: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e610f: mov esi, dword ptr [esi + 0xa4] */ r_esi = R32((u32)(r_esi+0xa4u));
    /* 006e6115: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 006e6117: fsub dword ptr [esi + eax*4 + 0x1c] */ ST(0) = ST(0) - R_F32((u32)(r_esi+r_eax*4+0x1cu));
    /* 006e611b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006e611d: fsub dword ptr [esi + eax*4 + 0x20] */ ST(0) = ST(0) - R_F32((u32)(r_esi+r_eax*4+0x20u));
    /* 006e6121: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 006e6123: fsub dword ptr [esi + eax*4 + 0x24] */ ST(0) = ST(0) - R_F32((u32)(r_esi+r_eax*4+0x24u));
    /* 006e6127: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006e6129: fstp dword ptr [ebp - 0x60] */ W_F32((u32)(r_ebp+0xffffffa0u), ST(0)); FPOP();
    /* 006e612c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006e612e: fstp dword ptr [ebp - 0x5c] */ W_F32((u32)(r_ebp+0xffffffa4u), ST(0)); FPOP();
    /* 006e6131: fstp dword ptr [ebp - 0x58] */ W_F32((u32)(r_ebp+0xffffffa8u), ST(0)); FPOP();
    /* 006e6134: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x6e6139u); f_0083173c();
    /* 006e6139: fstp dword ptr [ebp - 0x24] */ W_F32((u32)(r_ebp+0xffffffdcu), ST(0)); FPOP();
    /* 006e613c: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 006e613f: fcomp dword ptr [0x96d480] */ fx_compare(ST(0), R_F32((u32)(0x96d480u))); FPOP();
    /* 006e6145: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006e6147: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006e6148: je 0x6e66b3 */ if (fZ) goto L_006e66b3;
L_006e614e:; BB(0x006e614e);
    /* 006e614e: lea ecx, [ebp - 0x60] */ r_ecx = (u32)(r_ebp+0xffffffa0u);
    /* 006e6151: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x6e6156u); f_0082df08();
    /* 006e6156: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006e6158: mov eax, edi */ r_eax = r_edi;
    /* 006e615a: movsx eax, word ptr [eax + 0xc6] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0xc6u));
    /* 006e6161: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e6163: je 0x6e6611 */ if (fZ) goto L_006e6611;
L_006e6169:; BB(0x006e6169);
    /* 006e6169: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e616c: je 0x6e656f */ if (fZ) goto L_006e656f;
L_006e6172:; BB(0x006e6172);
    /* 006e6172: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e6175: je 0x6e64cd */ if (fZ) goto L_006e64cd;
L_006e617b:; BB(0x006e617b);
    /* 006e617b: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e617e: je 0x6e641e */ if (fZ) goto L_006e641e;
L_006e6184:; BB(0x006e6184);
    /* 006e6184: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e6187: jne 0x6e622f */ if (!fZ) goto L_006e622f;
L_006e618d:; BB(0x006e618d);
    /* 006e618d: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
    /* 006e6194: push 0x260 */ { u32 v = 0x260u; r_esp -= 4; W32(r_esp, v); }
    /* 006e6199: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e619eu); f_005caba4();
    /* 006e619e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e619f: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 006e61a2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e61a4: je 0x6e6223 */ if (fZ) goto L_006e6223;
L_006e61a6:; BB(0x006e61a6);
    /* 006e61a6: mov dword ptr [ebp - 0x44], 1 */ W32((u32)(r_ebp+0xffffffbcu), 0x1u);
    /* 006e61ad: mov dword ptr [ebp - 4], 0x14 */ W32((u32)(r_ebp+0xfffffffcu), 0x14u);
    /* 006e61b4: mov eax, dword ptr [0xaca344] */ r_eax = R32((u32)(0xaca344u));
    /* 006e61b9: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e61bc: mov edx, edi */ r_edx = r_edi;
    /* 006e61be: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e61c1: movsx esi, word ptr [edx + ebx*4 + 0x136] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+r_ebx*4+0x136u));
    /* 006e61c9: add esp, -0x1c */ {  u32 a = r_esp; u32 b = 0xffffffe4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e61cc: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 006e61cf: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 006e61d3: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 006e61d6: mov eax, dword ptr [edi + 0xa4] */ r_eax = R32((u32)(r_edi+0xa4u));
    /* 006e61dc: mov dword ptr [esp + 0x10], 0x3f333333 */ W32((u32)(r_esp+0x10u), 0x3f333333u);
    /* 006e61e4: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 006e61e7: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e61e9: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e61eb: mov dword ptr [esp + 0x14], 0x14000000 */ W32((u32)(r_esp+0x14u), 0x14000000u);
    /* 006e61f3: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e61f5: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e61f7: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e61f9: mov dword ptr [esp + 0x18], 0x14 */ W32((u32)(r_esp+0x18u), 0x14u);
    /* 006e6201: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6203: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6205: lea eax, [ecx + eax + 0x1c] */ r_eax = (u32)(r_ecx+r_eax+0x1cu);
    /* 006e6209: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 006e620c: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 006e6210: lea eax, [ebp - 0x60] */ r_eax = (u32)(r_ebp+0xffffffa0u);
    /* 006e6213: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 006e6217: call 0x6f3ba4 */ r_esp -= 4; W32(r_esp, 0x6e621cu); f_006f3ba4();
    /* 006e621c: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
L_006e6223:; BB(0x006e6223);
    /* 006e6223: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006e622a: jmp 0x6e64bb */ goto L_006e64bb;
L_006e622f:; BB(0x006e622f);
    /* 006e622f: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e6232: jne 0x6e64bb */ if (!fZ) goto L_006e64bb;
L_006e6238:; BB(0x006e6238);
    /* 006e6238: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
    /* 006e623f: push 0x260 */ { u32 v = 0x260u; r_esp -= 4; W32(r_esp, v); }
    /* 006e6244: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e6249u); f_005caba4();
    /* 006e6249: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e624a: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 006e624d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e624f: je 0x6e62ce */ if (fZ) goto L_006e62ce;
L_006e6251:; BB(0x006e6251);
    /* 006e6251: mov dword ptr [ebp - 0x54], 1 */ W32((u32)(r_ebp+0xffffffacu), 0x1u);
    /* 006e6258: mov dword ptr [ebp - 4], 0x11 */ W32((u32)(r_ebp+0xfffffffcu), 0x11u);
    /* 006e625f: mov eax, dword ptr [0xaca344] */ r_eax = R32((u32)(0xaca344u));
    /* 006e6264: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e6267: mov edx, edi */ r_edx = r_edi;
    /* 006e6269: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e626c: movsx esi, word ptr [edx + ebx*4 + 0x136] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+r_ebx*4+0x136u));
    /* 006e6274: add esp, -0x1c */ {  u32 a = r_esp; u32 b = 0xffffffe4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e6277: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 006e627a: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 006e627e: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 006e6281: mov eax, dword ptr [edi + 0xa4] */ r_eax = R32((u32)(r_edi+0xa4u));
    /* 006e6287: mov dword ptr [esp + 0x10], 0x40a00000 */ W32((u32)(r_esp+0x10u), 0x40a00000u);
    /* 006e628f: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 006e6292: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6294: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6296: mov dword ptr [esp + 0x14], 0x14000000 */ W32((u32)(r_esp+0x14u), 0x14000000u);
    /* 006e629e: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e62a0: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e62a2: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e62a4: mov dword ptr [esp + 0x18], 0x14 */ W32((u32)(r_esp+0x18u), 0x14u);
    /* 006e62ac: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e62ae: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e62b0: lea eax, [ecx + eax + 0x1c] */ r_eax = (u32)(r_ecx+r_eax+0x1cu);
    /* 006e62b4: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 006e62b7: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 006e62bb: lea eax, [ebp - 0x60] */ r_eax = (u32)(r_ebp+0xffffffa0u);
    /* 006e62be: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 006e62c2: call 0x6f3ba4 */ r_esp -= 4; W32(r_esp, 0x6e62c7u); f_006f3ba4();
    /* 006e62c7: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
L_006e62ce:; BB(0x006e62ce);
    /* 006e62ce: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006e62d5: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
    /* 006e62dc: push 0x260 */ { u32 v = 0x260u; r_esp -= 4; W32(r_esp, v); }
    /* 006e62e1: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e62e6u); f_005caba4();
    /* 006e62e6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e62e7: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 006e62ea: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e62ec: je 0x6e6370 */ if (fZ) goto L_006e6370;
L_006e62f2:; BB(0x006e62f2);
    /* 006e62f2: mov dword ptr [ebp - 0x4c], 1 */ W32((u32)(r_ebp+0xffffffb4u), 0x1u);
    /* 006e62f9: mov dword ptr [ebp - 4], 0x12 */ W32((u32)(r_ebp+0xfffffffcu), 0x12u);
    /* 006e6300: mov eax, dword ptr [0xaca344] */ r_eax = R32((u32)(0xaca344u));
    /* 006e6305: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e6308: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006e630b: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e630e: movsx esi, word ptr [edx + ebx*4 + 0x136] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+r_ebx*4+0x136u));
    /* 006e6316: add esp, -0x1c */ {  u32 a = r_esp; u32 b = 0xffffffe4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e6319: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 006e631c: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 006e6320: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 006e6323: mov eax, dword ptr [edi + 0xa4] */ r_eax = R32((u32)(r_edi+0xa4u));
    /* 006e6329: mov dword ptr [esp + 0x10], 0x3f000000 */ W32((u32)(r_esp+0x10u), 0x3f000000u);
    /* 006e6331: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 006e6334: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6336: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6338: mov dword ptr [esp + 0x14], 0x14000000 */ W32((u32)(r_esp+0x14u), 0x14000000u);
    /* 006e6340: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6342: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6344: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6346: mov dword ptr [esp + 0x18], 0x14 */ W32((u32)(r_esp+0x18u), 0x14u);
    /* 006e634e: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6350: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6352: lea eax, [ecx + eax + 0x1c] */ r_eax = (u32)(r_ecx+r_eax+0x1cu);
    /* 006e6356: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 006e6359: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 006e635d: lea eax, [ebp - 0x60] */ r_eax = (u32)(r_ebp+0xffffffa0u);
    /* 006e6360: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 006e6364: call 0x6f3ba4 */ r_esp -= 4; W32(r_esp, 0x6e6369u); f_006f3ba4();
    /* 006e6369: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
L_006e6370:; BB(0x006e6370);
    /* 006e6370: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006e6377: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
    /* 006e637e: push 0x260 */ { u32 v = 0x260u; r_esp -= 4; W32(r_esp, v); }
    /* 006e6383: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e6388u); f_005caba4();
    /* 006e6388: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e6389: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 006e638c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e638e: je 0x6e6412 */ if (fZ) goto L_006e6412;
L_006e6394:; BB(0x006e6394);
    /* 006e6394: mov dword ptr [ebp - 0x48], 1 */ W32((u32)(r_ebp+0xffffffb8u), 0x1u);
    /* 006e639b: mov dword ptr [ebp - 4], 0x13 */ W32((u32)(r_ebp+0xfffffffcu), 0x13u);
    /* 006e63a2: mov eax, dword ptr [0xaca344] */ r_eax = R32((u32)(0xaca344u));
    /* 006e63a7: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e63aa: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006e63ad: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e63b0: movsx esi, word ptr [edx + ebx*4 + 0x136] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+r_ebx*4+0x136u));
    /* 006e63b8: add esp, -0x1c */ {  u32 a = r_esp; u32 b = 0xffffffe4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e63bb: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 006e63be: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 006e63c2: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 006e63c5: mov eax, dword ptr [edi + 0xa4] */ r_eax = R32((u32)(r_edi+0xa4u));
    /* 006e63cb: mov dword ptr [esp + 0x10], 0x3f000000 */ W32((u32)(r_esp+0x10u), 0x3f000000u);
    /* 006e63d3: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 006e63d6: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e63d8: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e63da: mov dword ptr [esp + 0x14], 0x14000000 */ W32((u32)(r_esp+0x14u), 0x14000000u);
    /* 006e63e2: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e63e4: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e63e6: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e63e8: mov dword ptr [esp + 0x18], 0x14 */ W32((u32)(r_esp+0x18u), 0x14u);
    /* 006e63f0: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e63f2: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e63f4: lea eax, [ecx + eax + 0x1c] */ r_eax = (u32)(r_ecx+r_eax+0x1cu);
    /* 006e63f8: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 006e63fb: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 006e63ff: lea eax, [ebp - 0x60] */ r_eax = (u32)(r_ebp+0xffffffa0u);
    /* 006e6402: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 006e6406: call 0x6f3ba4 */ r_esp -= 4; W32(r_esp, 0x6e640bu); f_006f3ba4();
    /* 006e640b: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
L_006e6412:; BB(0x006e6412);
    /* 006e6412: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006e6419: jmp 0x6e64bb */ goto L_006e64bb;
L_006e641e:; BB(0x006e641e);
    /* 006e641e: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
    /* 006e6425: push 0x260 */ { u32 v = 0x260u; r_esp -= 4; W32(r_esp, v); }
    /* 006e642a: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e642fu); f_005caba4();
    /* 006e642f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e6430: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 006e6433: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e6435: je 0x6e64b4 */ if (fZ) goto L_006e64b4;
L_006e6437:; BB(0x006e6437);
    /* 006e6437: mov dword ptr [ebp - 0x40], 1 */ W32((u32)(r_ebp+0xffffffc0u), 0x1u);
    /* 006e643e: mov dword ptr [ebp - 4], 0x15 */ W32((u32)(r_ebp+0xfffffffcu), 0x15u);
    /* 006e6445: mov eax, dword ptr [0xaca344] */ r_eax = R32((u32)(0xaca344u));
    /* 006e644a: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e644d: mov edx, edi */ r_edx = r_edi;
    /* 006e644f: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e6452: movsx esi, word ptr [edx + ebx*4 + 0x136] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+r_ebx*4+0x136u));
    /* 006e645a: add esp, -0x1c */ {  u32 a = r_esp; u32 b = 0xffffffe4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e645d: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 006e6460: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 006e6464: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 006e6467: mov eax, dword ptr [edi + 0xa4] */ r_eax = R32((u32)(r_edi+0xa4u));
    /* 006e646d: mov dword ptr [esp + 0x10], 0x3f19999a */ W32((u32)(r_esp+0x10u), 0x3f19999au);
    /* 006e6475: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 006e6478: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e647a: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e647c: mov dword ptr [esp + 0x14], 0x14000000 */ W32((u32)(r_esp+0x14u), 0x14000000u);
    /* 006e6484: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6486: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6488: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e648a: mov dword ptr [esp + 0x18], 0x14 */ W32((u32)(r_esp+0x18u), 0x14u);
    /* 006e6492: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6494: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6496: lea eax, [ecx + eax + 0x1c] */ r_eax = (u32)(r_ecx+r_eax+0x1cu);
    /* 006e649a: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 006e649d: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 006e64a1: lea eax, [ebp - 0x60] */ r_eax = (u32)(r_ebp+0xffffffa0u);
    /* 006e64a4: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 006e64a8: call 0x6f3ba4 */ r_esp -= 4; W32(r_esp, 0x6e64adu); f_006f3ba4();
    /* 006e64ad: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
L_006e64b4:; BB(0x006e64b4);
    /* 006e64b4: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
L_006e64bb:; BB(0x006e64bb);
    /* 006e64bb: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006e64be: mov edx, dword ptr [eax + 0x130] */ r_edx = R32((u32)(r_eax+0x130u));
    /* 006e64c4: add dword ptr [ebp - 0x1c], 1 */ { u32 ad = (u32)(r_ebp+0xffffffe4u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 006e64c8: jmp 0x6e6011 */ goto L_006e6011;
L_006e64cd:; BB(0x006e64cd);
    /* 006e64cd: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 006e64d4: push 0x260 */ { u32 v = 0x260u; r_esp -= 4; W32(r_esp, v); }
    /* 006e64d9: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e64deu); f_005caba4();
    /* 006e64de: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e64df: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 006e64e2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e64e4: je 0x6e6563 */ if (fZ) goto L_006e6563;
L_006e64e6:; BB(0x006e64e6);
    /* 006e64e6: mov dword ptr [ebp - 0x3c], 1 */ W32((u32)(r_ebp+0xffffffc4u), 0x1u);
    /* 006e64ed: mov dword ptr [ebp - 4], 0x16 */ W32((u32)(r_ebp+0xfffffffcu), 0x16u);
    /* 006e64f4: mov eax, dword ptr [0xaca344] */ r_eax = R32((u32)(0xaca344u));
    /* 006e64f9: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e64fc: mov edx, edi */ r_edx = r_edi;
    /* 006e64fe: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e6501: movsx esi, word ptr [edx + ebx*4 + 0x136] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+r_ebx*4+0x136u));
    /* 006e6509: add esp, -0x1c */ {  u32 a = r_esp; u32 b = 0xffffffe4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e650c: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 006e650f: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 006e6513: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 006e6516: mov eax, dword ptr [edi + 0xa4] */ r_eax = R32((u32)(r_edi+0xa4u));
    /* 006e651c: mov dword ptr [esp + 0x10], 0x3f333333 */ W32((u32)(r_esp+0x10u), 0x3f333333u);
    /* 006e6524: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 006e6527: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6529: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e652b: mov dword ptr [esp + 0x14], 0x14000000 */ W32((u32)(r_esp+0x14u), 0x14000000u);
    /* 006e6533: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6535: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6537: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6539: mov dword ptr [esp + 0x18], 0x14 */ W32((u32)(r_esp+0x18u), 0x14u);
    /* 006e6541: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6543: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6545: lea eax, [ecx + eax + 0x1c] */ r_eax = (u32)(r_ecx+r_eax+0x1cu);
    /* 006e6549: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 006e654c: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 006e6550: lea eax, [ebp - 0x60] */ r_eax = (u32)(r_ebp+0xffffffa0u);
    /* 006e6553: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 006e6557: call 0x6f3ba4 */ r_esp -= 4; W32(r_esp, 0x6e655cu); f_006f3ba4();
    /* 006e655c: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_006e6563:; BB(0x006e6563);
    /* 006e6563: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006e656a: jmp 0x6e64bb */ goto L_006e64bb;
L_006e656f:; BB(0x006e656f);
    /* 006e656f: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 006e6576: push 0x260 */ { u32 v = 0x260u; r_esp -= 4; W32(r_esp, v); }
    /* 006e657b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e6580u); f_005caba4();
    /* 006e6580: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e6581: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 006e6584: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e6586: je 0x6e6605 */ if (fZ) goto L_006e6605;
L_006e6588:; BB(0x006e6588);
    /* 006e6588: mov dword ptr [ebp - 0x38], 1 */ W32((u32)(r_ebp+0xffffffc8u), 0x1u);
    /* 006e658f: mov dword ptr [ebp - 4], 0x17 */ W32((u32)(r_ebp+0xfffffffcu), 0x17u);
    /* 006e6596: mov eax, dword ptr [0xaca344] */ r_eax = R32((u32)(0xaca344u));
    /* 006e659b: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e659e: mov edx, edi */ r_edx = r_edi;
    /* 006e65a0: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e65a3: movsx esi, word ptr [edx + ebx*4 + 0x136] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+r_ebx*4+0x136u));
    /* 006e65ab: add esp, -0x1c */ {  u32 a = r_esp; u32 b = 0xffffffe4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e65ae: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 006e65b1: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 006e65b5: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 006e65b8: mov eax, dword ptr [edi + 0xa4] */ r_eax = R32((u32)(r_edi+0xa4u));
    /* 006e65be: mov dword ptr [esp + 0x10], 0x3f19999a */ W32((u32)(r_esp+0x10u), 0x3f19999au);
    /* 006e65c6: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 006e65c9: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e65cb: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e65cd: mov dword ptr [esp + 0x14], 0x14000000 */ W32((u32)(r_esp+0x14u), 0x14000000u);
    /* 006e65d5: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e65d7: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e65d9: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e65db: mov dword ptr [esp + 0x18], 0x14 */ W32((u32)(r_esp+0x18u), 0x14u);
    /* 006e65e3: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e65e5: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e65e7: lea eax, [ecx + eax + 0x1c] */ r_eax = (u32)(r_ecx+r_eax+0x1cu);
    /* 006e65eb: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 006e65ee: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 006e65f2: lea eax, [ebp - 0x60] */ r_eax = (u32)(r_ebp+0xffffffa0u);
    /* 006e65f5: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 006e65f9: call 0x6f3ba4 */ r_esp -= 4; W32(r_esp, 0x6e65feu); f_006f3ba4();
    /* 006e65fe: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_006e6605:; BB(0x006e6605);
    /* 006e6605: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006e660c: jmp 0x6e64bb */ goto L_006e64bb;
L_006e6611:; BB(0x006e6611);
    /* 006e6611: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 006e6618: push 0x260 */ { u32 v = 0x260u; r_esp -= 4; W32(r_esp, v); }
    /* 006e661d: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e6622u); f_005caba4();
    /* 006e6622: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e6623: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 006e6626: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e6628: je 0x6e66a7 */ if (fZ) goto L_006e66a7;
L_006e662a:; BB(0x006e662a);
    /* 006e662a: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 006e6631: mov dword ptr [ebp - 4], 0x18 */ W32((u32)(r_ebp+0xfffffffcu), 0x18u);
    /* 006e6638: mov eax, dword ptr [0xaca344] */ r_eax = R32((u32)(0xaca344u));
    /* 006e663d: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e6640: mov edx, edi */ r_edx = r_edi;
    /* 006e6642: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e6645: movsx esi, word ptr [edx + ebx*4 + 0x136] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+r_ebx*4+0x136u));
    /* 006e664d: add esp, -0x1c */ {  u32 a = r_esp; u32 b = 0xffffffe4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e6650: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 006e6653: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 006e6657: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 006e665a: mov eax, dword ptr [edi + 0xa4] */ r_eax = R32((u32)(r_edi+0xa4u));
    /* 006e6660: mov dword ptr [esp + 0x10], 0x3f000000 */ W32((u32)(r_esp+0x10u), 0x3f000000u);
    /* 006e6668: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 006e666b: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e666d: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e666f: mov dword ptr [esp + 0x14], 0x14000000 */ W32((u32)(r_esp+0x14u), 0x14000000u);
    /* 006e6677: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6679: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e667b: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e667d: mov dword ptr [esp + 0x18], 0x14 */ W32((u32)(r_esp+0x18u), 0x14u);
    /* 006e6685: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6687: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6689: lea eax, [ecx + eax + 0x1c] */ r_eax = (u32)(r_ecx+r_eax+0x1cu);
    /* 006e668d: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 006e6690: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 006e6694: lea eax, [ebp - 0x60] */ r_eax = (u32)(r_ebp+0xffffffa0u);
    /* 006e6697: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 006e669b: call 0x6f3ba4 */ r_esp -= 4; W32(r_esp, 0x6e66a0u); f_006f3ba4();
    /* 006e66a0: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_006e66a7:; BB(0x006e66a7);
    /* 006e66a7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006e66ae: jmp 0x6e64bb */ goto L_006e64bb;
L_006e66b3:; BB(0x006e66b3);
    /* 006e66b3: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 006e66b6: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 006e66b9: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006e66bc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006e66be: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006e66c1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006e66c8: mov esp, ebp */ r_esp = r_ebp;
    /* 006e66ca: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e66cb: ret  */ FN_RET(0x006e6962); r_esp += 4; return;
L_006e6962:; BB(0x006e6962);
    /* 006e6962: cld  */ rt_df = 0;
    /* 006e6963: adc byte ptr [eax], al */ { u32 ad = (u32)(r_eax); u32 c = fC; u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b + c) & 0xffu; W8(ad, r);  }
    /* 006e6965: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 006e6967: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e696a: push 0x19f */ { u32 v = 0x19fu; r_esp -= 4; W32(r_esp, v); }
    /* 006e696f: movsx eax, word ptr [edi + 0x136] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x136u));
    /* 006e6976: mov esi, dword ptr [edx + 0xa4] */ r_esi = R32((u32)(r_edx+0xa4u));
    /* 006e697c: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 006e6982: lea ebx, [eax + eax] */ r_ebx = (u32)(r_eax+r_eax);
    /* 006e6985: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006e6987: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 006e6989: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006e698b: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006e698d: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 006e698f: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006e6991: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006e6993: lea eax, [ebx + esi + 0x1c] */ r_eax = (u32)(r_ebx+r_esi+0x1cu);
    /* 006e6997: lea ecx, [edi + 0x20] */ r_ecx = (u32)(r_edi+0x20u);
    /* 006e699a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006e699b: mov ecx, dword ptr [ebp - 0x98] */ r_ecx = R32((u32)(r_ebp+0xffffff68u));
    /* 006e69a1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e69a2: call 0x6f4554 */ r_esp -= 4; W32(r_esp, 0x6e69a7u); f_006f4554();
    /* 006e69a7: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
    /* 006e69ae: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006e69b5: jmp 0x6e5ffb */ goto L_006e5ffb;
L_006e69ba:; BB(0x006e69ba);
    /* 006e69ba: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 006e69bd: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 006e69c0: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006e69c3: mov eax, 1 */ r_eax = 0x1u;
    /* 006e69c8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006e69cb: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006e69d2: mov esp, ebp */ r_esp = r_ebp;
    /* 006e69d4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e69d5: ret  */ FN_RET(0x006e6962); r_esp += 4; return;
}

void f_006e6965(void)
{
    FN_ENTER(0x006e6965);
    goto L_006e6965;
L_006e5ffb:; BB(0x006e5ffb);
    /* 006e5ffb: mov eax, edi */ r_eax = r_edi;
    /* 006e5ffd: mov edx, dword ptr [eax + 0x130] */ r_edx = R32((u32)(r_eax+0x130u));
    /* 006e6003: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006e6006: je 0x6e69ba */ if (fZ) goto L_006e69ba;
L_006e600c:; BB(0x006e600c);
    /* 006e600c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006e600e: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
L_006e6011:; BB(0x006e6011);
    /* 006e6011: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 006e6014: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006e6017: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006e6019: jge 0x6e69ba */ if ((fS==fO)) goto L_006e69ba;
L_006e601f:; BB(0x006e601f);
    /* 006e601f: mov ecx, eax */ r_ecx = r_eax;
    /* 006e6021: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006e6024: movzx ebx, word ptr [edx + ecx*8 + 0x134] */ r_ebx = (u32)R16((u32)(r_edx+r_ecx*8+0x134u));
    /* 006e602c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006e602d: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 006e6030: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006e6033: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x6e6038u); f_007b4d18();
    /* 006e6038: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006e603b: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006e603e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006e6041: movzx ecx, word ptr [eax + edx*8 + 0x13c] */ r_ecx = (u32)R16((u32)(r_eax+r_edx*8+0x13cu));
    /* 006e6049: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006e604a: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x6e604fu); f_007b4d18();
    /* 006e604f: mov ebx, eax */ r_ebx = r_eax;
    /* 006e6051: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e6054: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e6055: call 0x6ea700 */ r_esp -= 4; W32(r_esp, 0x6e605au); f_006ea700();
    /* 006e605a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e605d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e605f: je 0x6e66b3 */ if (fZ) goto L_006e66b3;
L_006e6065:; BB(0x006e6065);
    /* 006e6065: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006e6066: call 0x6ea700 */ r_esp -= 4; W32(r_esp, 0x6e606bu); f_006ea700();
    /* 006e606b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e606c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e606e: je 0x6e66b3 */ if (fZ) goto L_006e66b3;
L_006e6074:; BB(0x006e6074);
    /* 006e6074: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e6077: mov esi, dword ptr [edx + 0x30] */ r_esi = R32((u32)(r_edx+0x30u));
    /* 006e607a: test esi, 0x20000000 */ {  u32 a = r_esi; u32 b = 0x20000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e6080: je 0x6e60c7 */ if (fZ) goto L_006e60c7;
L_006e6082:; BB(0x006e6082);
    /* 006e6082: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
    /* 006e6085: test edx, 0x20000000 */ {  u32 a = r_edx; u32 b = 0x20000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e608b: je 0x6e60c7 */ if (fZ) goto L_006e60c7;
L_006e608d:; BB(0x006e608d);
    /* 006e608d: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e6090: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e6091: call 0x6ea71c */ r_esp -= 4; W32(r_esp, 0x6e6096u); f_006ea71c();
    /* 006e6096: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e6097: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e6099: je 0x6e60c7 */ if (fZ) goto L_006e60c7;
L_006e609b:; BB(0x006e609b);
    /* 006e609b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006e609c: call 0x6ea71c */ r_esp -= 4; W32(r_esp, 0x6e60a1u); f_006ea71c();
    /* 006e60a1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e60a2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e60a4: je 0x6e60c7 */ if (fZ) goto L_006e60c7;
L_006e60a6:; BB(0x006e60a6);
    /* 006e60a6: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e60a9: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006e60ab: call dword ptr [edx + 0x8c] */ { u32 t = R32((u32)(r_edx+0x8cu)); r_esp -= 4; W32(r_esp, 0x6e60b1u); call_ind(t); }
    /* 006e60b1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e60b3: je 0x6e60c7 */ if (fZ) goto L_006e60c7;
L_006e60b5:; BB(0x006e60b5);
    /* 006e60b5: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 006e60b7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006e60b9: call dword ptr [edx + 0x8c] */ { u32 t = R32((u32)(r_edx+0x8cu)); r_esp -= 4; W32(r_esp, 0x6e60bfu); call_ind(t); }
    /* 006e60bf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e60c1: jne 0x6e66b3 */ if (!fZ) goto L_006e66b3;
L_006e60c7:; BB(0x006e60c7);
    /* 006e60c7: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e60ca: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 006e60cd: lea ecx, [ebp - 0x60] */ r_ecx = (u32)(r_ebp+0xffffffa0u);
    /* 006e60d0: movsx esi, word ptr [edi + eax*4 + 0x136] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edi+r_eax*4+0x136u));
    /* 006e60d8: mov ebx, dword ptr [ebx + 0xa4] */ r_ebx = R32((u32)(r_ebx+0xa4u));
    /* 006e60de: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 006e60e1: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006e60e3: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006e60e5: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006e60e7: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006e60e9: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006e60eb: movsx esi, word ptr [edi + eax*4 + 0x13e] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edi+r_eax*4+0x13eu));
    /* 006e60f3: fld dword ptr [ebx + edx*4 + 0x1c] */ FPUSH(R_F32((u32)(r_ebx+r_edx*4+0x1cu)));
    /* 006e60f7: fld dword ptr [ebx + edx*4 + 0x20] */ FPUSH(R_F32((u32)(r_ebx+r_edx*4+0x20u)));
    /* 006e60fb: fld dword ptr [ebx + edx*4 + 0x24] */ FPUSH(R_F32((u32)(r_ebx+r_edx*4+0x24u)));
    /* 006e60ff: lea eax, [esi + esi] */ r_eax = (u32)(r_esi+r_esi);
    /* 006e6102: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006e6104: sub eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006e6106: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006e6108: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006e610a: sub eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006e610c: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e610f: mov esi, dword ptr [esi + 0xa4] */ r_esi = R32((u32)(r_esi+0xa4u));
    /* 006e6115: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 006e6117: fsub dword ptr [esi + eax*4 + 0x1c] */ ST(0) = ST(0) - R_F32((u32)(r_esi+r_eax*4+0x1cu));
    /* 006e611b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006e611d: fsub dword ptr [esi + eax*4 + 0x20] */ ST(0) = ST(0) - R_F32((u32)(r_esi+r_eax*4+0x20u));
    /* 006e6121: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 006e6123: fsub dword ptr [esi + eax*4 + 0x24] */ ST(0) = ST(0) - R_F32((u32)(r_esi+r_eax*4+0x24u));
    /* 006e6127: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006e6129: fstp dword ptr [ebp - 0x60] */ W_F32((u32)(r_ebp+0xffffffa0u), ST(0)); FPOP();
    /* 006e612c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006e612e: fstp dword ptr [ebp - 0x5c] */ W_F32((u32)(r_ebp+0xffffffa4u), ST(0)); FPOP();
    /* 006e6131: fstp dword ptr [ebp - 0x58] */ W_F32((u32)(r_ebp+0xffffffa8u), ST(0)); FPOP();
    /* 006e6134: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x6e6139u); f_0083173c();
    /* 006e6139: fstp dword ptr [ebp - 0x24] */ W_F32((u32)(r_ebp+0xffffffdcu), ST(0)); FPOP();
    /* 006e613c: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 006e613f: fcomp dword ptr [0x96d480] */ fx_compare(ST(0), R_F32((u32)(0x96d480u))); FPOP();
    /* 006e6145: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006e6147: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006e6148: je 0x6e66b3 */ if (fZ) goto L_006e66b3;
L_006e614e:; BB(0x006e614e);
    /* 006e614e: lea ecx, [ebp - 0x60] */ r_ecx = (u32)(r_ebp+0xffffffa0u);
    /* 006e6151: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x6e6156u); f_0082df08();
    /* 006e6156: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006e6158: mov eax, edi */ r_eax = r_edi;
    /* 006e615a: movsx eax, word ptr [eax + 0xc6] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0xc6u));
    /* 006e6161: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e6163: je 0x6e6611 */ if (fZ) goto L_006e6611;
L_006e6169:; BB(0x006e6169);
    /* 006e6169: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e616c: je 0x6e656f */ if (fZ) goto L_006e656f;
L_006e6172:; BB(0x006e6172);
    /* 006e6172: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e6175: je 0x6e64cd */ if (fZ) goto L_006e64cd;
L_006e617b:; BB(0x006e617b);
    /* 006e617b: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e617e: je 0x6e641e */ if (fZ) goto L_006e641e;
L_006e6184:; BB(0x006e6184);
    /* 006e6184: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e6187: jne 0x6e622f */ if (!fZ) goto L_006e622f;
L_006e618d:; BB(0x006e618d);
    /* 006e618d: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
    /* 006e6194: push 0x260 */ { u32 v = 0x260u; r_esp -= 4; W32(r_esp, v); }
    /* 006e6199: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e619eu); f_005caba4();
    /* 006e619e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e619f: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 006e61a2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e61a4: je 0x6e6223 */ if (fZ) goto L_006e6223;
L_006e61a6:; BB(0x006e61a6);
    /* 006e61a6: mov dword ptr [ebp - 0x44], 1 */ W32((u32)(r_ebp+0xffffffbcu), 0x1u);
    /* 006e61ad: mov dword ptr [ebp - 4], 0x14 */ W32((u32)(r_ebp+0xfffffffcu), 0x14u);
    /* 006e61b4: mov eax, dword ptr [0xaca344] */ r_eax = R32((u32)(0xaca344u));
    /* 006e61b9: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e61bc: mov edx, edi */ r_edx = r_edi;
    /* 006e61be: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e61c1: movsx esi, word ptr [edx + ebx*4 + 0x136] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+r_ebx*4+0x136u));
    /* 006e61c9: add esp, -0x1c */ {  u32 a = r_esp; u32 b = 0xffffffe4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e61cc: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 006e61cf: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 006e61d3: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 006e61d6: mov eax, dword ptr [edi + 0xa4] */ r_eax = R32((u32)(r_edi+0xa4u));
    /* 006e61dc: mov dword ptr [esp + 0x10], 0x3f333333 */ W32((u32)(r_esp+0x10u), 0x3f333333u);
    /* 006e61e4: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 006e61e7: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e61e9: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e61eb: mov dword ptr [esp + 0x14], 0x14000000 */ W32((u32)(r_esp+0x14u), 0x14000000u);
    /* 006e61f3: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e61f5: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e61f7: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e61f9: mov dword ptr [esp + 0x18], 0x14 */ W32((u32)(r_esp+0x18u), 0x14u);
    /* 006e6201: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6203: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6205: lea eax, [ecx + eax + 0x1c] */ r_eax = (u32)(r_ecx+r_eax+0x1cu);
    /* 006e6209: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 006e620c: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 006e6210: lea eax, [ebp - 0x60] */ r_eax = (u32)(r_ebp+0xffffffa0u);
    /* 006e6213: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 006e6217: call 0x6f3ba4 */ r_esp -= 4; W32(r_esp, 0x6e621cu); f_006f3ba4();
    /* 006e621c: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
L_006e6223:; BB(0x006e6223);
    /* 006e6223: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006e622a: jmp 0x6e64bb */ goto L_006e64bb;
L_006e622f:; BB(0x006e622f);
    /* 006e622f: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e6232: jne 0x6e64bb */ if (!fZ) goto L_006e64bb;
L_006e6238:; BB(0x006e6238);
    /* 006e6238: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
    /* 006e623f: push 0x260 */ { u32 v = 0x260u; r_esp -= 4; W32(r_esp, v); }
    /* 006e6244: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e6249u); f_005caba4();
    /* 006e6249: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e624a: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 006e624d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e624f: je 0x6e62ce */ if (fZ) goto L_006e62ce;
L_006e6251:; BB(0x006e6251);
    /* 006e6251: mov dword ptr [ebp - 0x54], 1 */ W32((u32)(r_ebp+0xffffffacu), 0x1u);
    /* 006e6258: mov dword ptr [ebp - 4], 0x11 */ W32((u32)(r_ebp+0xfffffffcu), 0x11u);
    /* 006e625f: mov eax, dword ptr [0xaca344] */ r_eax = R32((u32)(0xaca344u));
    /* 006e6264: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e6267: mov edx, edi */ r_edx = r_edi;
    /* 006e6269: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e626c: movsx esi, word ptr [edx + ebx*4 + 0x136] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+r_ebx*4+0x136u));
    /* 006e6274: add esp, -0x1c */ {  u32 a = r_esp; u32 b = 0xffffffe4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e6277: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 006e627a: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 006e627e: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 006e6281: mov eax, dword ptr [edi + 0xa4] */ r_eax = R32((u32)(r_edi+0xa4u));
    /* 006e6287: mov dword ptr [esp + 0x10], 0x40a00000 */ W32((u32)(r_esp+0x10u), 0x40a00000u);
    /* 006e628f: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 006e6292: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6294: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6296: mov dword ptr [esp + 0x14], 0x14000000 */ W32((u32)(r_esp+0x14u), 0x14000000u);
    /* 006e629e: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e62a0: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e62a2: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e62a4: mov dword ptr [esp + 0x18], 0x14 */ W32((u32)(r_esp+0x18u), 0x14u);
    /* 006e62ac: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e62ae: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e62b0: lea eax, [ecx + eax + 0x1c] */ r_eax = (u32)(r_ecx+r_eax+0x1cu);
    /* 006e62b4: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 006e62b7: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 006e62bb: lea eax, [ebp - 0x60] */ r_eax = (u32)(r_ebp+0xffffffa0u);
    /* 006e62be: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 006e62c2: call 0x6f3ba4 */ r_esp -= 4; W32(r_esp, 0x6e62c7u); f_006f3ba4();
    /* 006e62c7: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
L_006e62ce:; BB(0x006e62ce);
    /* 006e62ce: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006e62d5: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
    /* 006e62dc: push 0x260 */ { u32 v = 0x260u; r_esp -= 4; W32(r_esp, v); }
    /* 006e62e1: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e62e6u); f_005caba4();
    /* 006e62e6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e62e7: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 006e62ea: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e62ec: je 0x6e6370 */ if (fZ) goto L_006e6370;
L_006e62f2:; BB(0x006e62f2);
    /* 006e62f2: mov dword ptr [ebp - 0x4c], 1 */ W32((u32)(r_ebp+0xffffffb4u), 0x1u);
    /* 006e62f9: mov dword ptr [ebp - 4], 0x12 */ W32((u32)(r_ebp+0xfffffffcu), 0x12u);
    /* 006e6300: mov eax, dword ptr [0xaca344] */ r_eax = R32((u32)(0xaca344u));
    /* 006e6305: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e6308: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006e630b: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e630e: movsx esi, word ptr [edx + ebx*4 + 0x136] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+r_ebx*4+0x136u));
    /* 006e6316: add esp, -0x1c */ {  u32 a = r_esp; u32 b = 0xffffffe4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e6319: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 006e631c: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 006e6320: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 006e6323: mov eax, dword ptr [edi + 0xa4] */ r_eax = R32((u32)(r_edi+0xa4u));
    /* 006e6329: mov dword ptr [esp + 0x10], 0x3f000000 */ W32((u32)(r_esp+0x10u), 0x3f000000u);
    /* 006e6331: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 006e6334: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6336: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6338: mov dword ptr [esp + 0x14], 0x14000000 */ W32((u32)(r_esp+0x14u), 0x14000000u);
    /* 006e6340: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6342: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6344: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6346: mov dword ptr [esp + 0x18], 0x14 */ W32((u32)(r_esp+0x18u), 0x14u);
    /* 006e634e: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6350: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6352: lea eax, [ecx + eax + 0x1c] */ r_eax = (u32)(r_ecx+r_eax+0x1cu);
    /* 006e6356: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 006e6359: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 006e635d: lea eax, [ebp - 0x60] */ r_eax = (u32)(r_ebp+0xffffffa0u);
    /* 006e6360: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 006e6364: call 0x6f3ba4 */ r_esp -= 4; W32(r_esp, 0x6e6369u); f_006f3ba4();
    /* 006e6369: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
L_006e6370:; BB(0x006e6370);
    /* 006e6370: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006e6377: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
    /* 006e637e: push 0x260 */ { u32 v = 0x260u; r_esp -= 4; W32(r_esp, v); }
    /* 006e6383: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e6388u); f_005caba4();
    /* 006e6388: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e6389: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 006e638c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e638e: je 0x6e6412 */ if (fZ) goto L_006e6412;
L_006e6394:; BB(0x006e6394);
    /* 006e6394: mov dword ptr [ebp - 0x48], 1 */ W32((u32)(r_ebp+0xffffffb8u), 0x1u);
    /* 006e639b: mov dword ptr [ebp - 4], 0x13 */ W32((u32)(r_ebp+0xfffffffcu), 0x13u);
    /* 006e63a2: mov eax, dword ptr [0xaca344] */ r_eax = R32((u32)(0xaca344u));
    /* 006e63a7: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e63aa: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006e63ad: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e63b0: movsx esi, word ptr [edx + ebx*4 + 0x136] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+r_ebx*4+0x136u));
    /* 006e63b8: add esp, -0x1c */ {  u32 a = r_esp; u32 b = 0xffffffe4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e63bb: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 006e63be: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 006e63c2: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 006e63c5: mov eax, dword ptr [edi + 0xa4] */ r_eax = R32((u32)(r_edi+0xa4u));
    /* 006e63cb: mov dword ptr [esp + 0x10], 0x3f000000 */ W32((u32)(r_esp+0x10u), 0x3f000000u);
    /* 006e63d3: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 006e63d6: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e63d8: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e63da: mov dword ptr [esp + 0x14], 0x14000000 */ W32((u32)(r_esp+0x14u), 0x14000000u);
    /* 006e63e2: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e63e4: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e63e6: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e63e8: mov dword ptr [esp + 0x18], 0x14 */ W32((u32)(r_esp+0x18u), 0x14u);
    /* 006e63f0: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e63f2: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e63f4: lea eax, [ecx + eax + 0x1c] */ r_eax = (u32)(r_ecx+r_eax+0x1cu);
    /* 006e63f8: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 006e63fb: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 006e63ff: lea eax, [ebp - 0x60] */ r_eax = (u32)(r_ebp+0xffffffa0u);
    /* 006e6402: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 006e6406: call 0x6f3ba4 */ r_esp -= 4; W32(r_esp, 0x6e640bu); f_006f3ba4();
    /* 006e640b: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
L_006e6412:; BB(0x006e6412);
    /* 006e6412: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006e6419: jmp 0x6e64bb */ goto L_006e64bb;
L_006e641e:; BB(0x006e641e);
    /* 006e641e: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
    /* 006e6425: push 0x260 */ { u32 v = 0x260u; r_esp -= 4; W32(r_esp, v); }
    /* 006e642a: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e642fu); f_005caba4();
    /* 006e642f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e6430: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 006e6433: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e6435: je 0x6e64b4 */ if (fZ) goto L_006e64b4;
L_006e6437:; BB(0x006e6437);
    /* 006e6437: mov dword ptr [ebp - 0x40], 1 */ W32((u32)(r_ebp+0xffffffc0u), 0x1u);
    /* 006e643e: mov dword ptr [ebp - 4], 0x15 */ W32((u32)(r_ebp+0xfffffffcu), 0x15u);
    /* 006e6445: mov eax, dword ptr [0xaca344] */ r_eax = R32((u32)(0xaca344u));
    /* 006e644a: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e644d: mov edx, edi */ r_edx = r_edi;
    /* 006e644f: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e6452: movsx esi, word ptr [edx + ebx*4 + 0x136] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+r_ebx*4+0x136u));
    /* 006e645a: add esp, -0x1c */ {  u32 a = r_esp; u32 b = 0xffffffe4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e645d: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 006e6460: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 006e6464: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 006e6467: mov eax, dword ptr [edi + 0xa4] */ r_eax = R32((u32)(r_edi+0xa4u));
    /* 006e646d: mov dword ptr [esp + 0x10], 0x3f19999a */ W32((u32)(r_esp+0x10u), 0x3f19999au);
    /* 006e6475: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 006e6478: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e647a: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e647c: mov dword ptr [esp + 0x14], 0x14000000 */ W32((u32)(r_esp+0x14u), 0x14000000u);
    /* 006e6484: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6486: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6488: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e648a: mov dword ptr [esp + 0x18], 0x14 */ W32((u32)(r_esp+0x18u), 0x14u);
    /* 006e6492: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6494: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6496: lea eax, [ecx + eax + 0x1c] */ r_eax = (u32)(r_ecx+r_eax+0x1cu);
    /* 006e649a: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 006e649d: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 006e64a1: lea eax, [ebp - 0x60] */ r_eax = (u32)(r_ebp+0xffffffa0u);
    /* 006e64a4: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 006e64a8: call 0x6f3ba4 */ r_esp -= 4; W32(r_esp, 0x6e64adu); f_006f3ba4();
    /* 006e64ad: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
L_006e64b4:; BB(0x006e64b4);
    /* 006e64b4: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
L_006e64bb:; BB(0x006e64bb);
    /* 006e64bb: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006e64be: mov edx, dword ptr [eax + 0x130] */ r_edx = R32((u32)(r_eax+0x130u));
    /* 006e64c4: add dword ptr [ebp - 0x1c], 1 */ { u32 ad = (u32)(r_ebp+0xffffffe4u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 006e64c8: jmp 0x6e6011 */ goto L_006e6011;
L_006e64cd:; BB(0x006e64cd);
    /* 006e64cd: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 006e64d4: push 0x260 */ { u32 v = 0x260u; r_esp -= 4; W32(r_esp, v); }
    /* 006e64d9: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e64deu); f_005caba4();
    /* 006e64de: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e64df: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 006e64e2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e64e4: je 0x6e6563 */ if (fZ) goto L_006e6563;
L_006e64e6:; BB(0x006e64e6);
    /* 006e64e6: mov dword ptr [ebp - 0x3c], 1 */ W32((u32)(r_ebp+0xffffffc4u), 0x1u);
    /* 006e64ed: mov dword ptr [ebp - 4], 0x16 */ W32((u32)(r_ebp+0xfffffffcu), 0x16u);
    /* 006e64f4: mov eax, dword ptr [0xaca344] */ r_eax = R32((u32)(0xaca344u));
    /* 006e64f9: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e64fc: mov edx, edi */ r_edx = r_edi;
    /* 006e64fe: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e6501: movsx esi, word ptr [edx + ebx*4 + 0x136] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+r_ebx*4+0x136u));
    /* 006e6509: add esp, -0x1c */ {  u32 a = r_esp; u32 b = 0xffffffe4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e650c: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 006e650f: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 006e6513: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 006e6516: mov eax, dword ptr [edi + 0xa4] */ r_eax = R32((u32)(r_edi+0xa4u));
    /* 006e651c: mov dword ptr [esp + 0x10], 0x3f333333 */ W32((u32)(r_esp+0x10u), 0x3f333333u);
    /* 006e6524: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 006e6527: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6529: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e652b: mov dword ptr [esp + 0x14], 0x14000000 */ W32((u32)(r_esp+0x14u), 0x14000000u);
    /* 006e6533: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6535: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6537: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6539: mov dword ptr [esp + 0x18], 0x14 */ W32((u32)(r_esp+0x18u), 0x14u);
    /* 006e6541: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6543: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6545: lea eax, [ecx + eax + 0x1c] */ r_eax = (u32)(r_ecx+r_eax+0x1cu);
    /* 006e6549: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 006e654c: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 006e6550: lea eax, [ebp - 0x60] */ r_eax = (u32)(r_ebp+0xffffffa0u);
    /* 006e6553: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 006e6557: call 0x6f3ba4 */ r_esp -= 4; W32(r_esp, 0x6e655cu); f_006f3ba4();
    /* 006e655c: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_006e6563:; BB(0x006e6563);
    /* 006e6563: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006e656a: jmp 0x6e64bb */ goto L_006e64bb;
L_006e656f:; BB(0x006e656f);
    /* 006e656f: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 006e6576: push 0x260 */ { u32 v = 0x260u; r_esp -= 4; W32(r_esp, v); }
    /* 006e657b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e6580u); f_005caba4();
    /* 006e6580: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e6581: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 006e6584: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e6586: je 0x6e6605 */ if (fZ) goto L_006e6605;
L_006e6588:; BB(0x006e6588);
    /* 006e6588: mov dword ptr [ebp - 0x38], 1 */ W32((u32)(r_ebp+0xffffffc8u), 0x1u);
    /* 006e658f: mov dword ptr [ebp - 4], 0x17 */ W32((u32)(r_ebp+0xfffffffcu), 0x17u);
    /* 006e6596: mov eax, dword ptr [0xaca344] */ r_eax = R32((u32)(0xaca344u));
    /* 006e659b: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e659e: mov edx, edi */ r_edx = r_edi;
    /* 006e65a0: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e65a3: movsx esi, word ptr [edx + ebx*4 + 0x136] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+r_ebx*4+0x136u));
    /* 006e65ab: add esp, -0x1c */ {  u32 a = r_esp; u32 b = 0xffffffe4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e65ae: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 006e65b1: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 006e65b5: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 006e65b8: mov eax, dword ptr [edi + 0xa4] */ r_eax = R32((u32)(r_edi+0xa4u));
    /* 006e65be: mov dword ptr [esp + 0x10], 0x3f19999a */ W32((u32)(r_esp+0x10u), 0x3f19999au);
    /* 006e65c6: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 006e65c9: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e65cb: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e65cd: mov dword ptr [esp + 0x14], 0x14000000 */ W32((u32)(r_esp+0x14u), 0x14000000u);
    /* 006e65d5: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e65d7: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e65d9: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e65db: mov dword ptr [esp + 0x18], 0x14 */ W32((u32)(r_esp+0x18u), 0x14u);
    /* 006e65e3: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e65e5: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e65e7: lea eax, [ecx + eax + 0x1c] */ r_eax = (u32)(r_ecx+r_eax+0x1cu);
    /* 006e65eb: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 006e65ee: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 006e65f2: lea eax, [ebp - 0x60] */ r_eax = (u32)(r_ebp+0xffffffa0u);
    /* 006e65f5: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 006e65f9: call 0x6f3ba4 */ r_esp -= 4; W32(r_esp, 0x6e65feu); f_006f3ba4();
    /* 006e65fe: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_006e6605:; BB(0x006e6605);
    /* 006e6605: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006e660c: jmp 0x6e64bb */ goto L_006e64bb;
L_006e6611:; BB(0x006e6611);
    /* 006e6611: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 006e6618: push 0x260 */ { u32 v = 0x260u; r_esp -= 4; W32(r_esp, v); }
    /* 006e661d: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e6622u); f_005caba4();
    /* 006e6622: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e6623: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 006e6626: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e6628: je 0x6e66a7 */ if (fZ) goto L_006e66a7;
L_006e662a:; BB(0x006e662a);
    /* 006e662a: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 006e6631: mov dword ptr [ebp - 4], 0x18 */ W32((u32)(r_ebp+0xfffffffcu), 0x18u);
    /* 006e6638: mov eax, dword ptr [0xaca344] */ r_eax = R32((u32)(0xaca344u));
    /* 006e663d: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e6640: mov edx, edi */ r_edx = r_edi;
    /* 006e6642: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e6645: movsx esi, word ptr [edx + ebx*4 + 0x136] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+r_ebx*4+0x136u));
    /* 006e664d: add esp, -0x1c */ {  u32 a = r_esp; u32 b = 0xffffffe4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e6650: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 006e6653: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 006e6657: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 006e665a: mov eax, dword ptr [edi + 0xa4] */ r_eax = R32((u32)(r_edi+0xa4u));
    /* 006e6660: mov dword ptr [esp + 0x10], 0x3f000000 */ W32((u32)(r_esp+0x10u), 0x3f000000u);
    /* 006e6668: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 006e666b: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e666d: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e666f: mov dword ptr [esp + 0x14], 0x14000000 */ W32((u32)(r_esp+0x14u), 0x14000000u);
    /* 006e6677: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6679: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e667b: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e667d: mov dword ptr [esp + 0x18], 0x14 */ W32((u32)(r_esp+0x18u), 0x14u);
    /* 006e6685: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6687: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6689: lea eax, [ecx + eax + 0x1c] */ r_eax = (u32)(r_ecx+r_eax+0x1cu);
    /* 006e668d: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 006e6690: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 006e6694: lea eax, [ebp - 0x60] */ r_eax = (u32)(r_ebp+0xffffffa0u);
    /* 006e6697: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 006e669b: call 0x6f3ba4 */ r_esp -= 4; W32(r_esp, 0x6e66a0u); f_006f3ba4();
    /* 006e66a0: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_006e66a7:; BB(0x006e66a7);
    /* 006e66a7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006e66ae: jmp 0x6e64bb */ goto L_006e64bb;
L_006e66b3:; BB(0x006e66b3);
    /* 006e66b3: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 006e66b6: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 006e66b9: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006e66bc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006e66be: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006e66c1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006e66c8: mov esp, ebp */ r_esp = r_ebp;
    /* 006e66ca: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e66cb: ret  */ FN_RET(0x006e6965); r_esp += 4; return;
L_006e6965:; BB(0x006e6965);
    /* 006e6965: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 006e6967: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e696a: push 0x19f */ { u32 v = 0x19fu; r_esp -= 4; W32(r_esp, v); }
    /* 006e696f: movsx eax, word ptr [edi + 0x136] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x136u));
    /* 006e6976: mov esi, dword ptr [edx + 0xa4] */ r_esi = R32((u32)(r_edx+0xa4u));
    /* 006e697c: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 006e6982: lea ebx, [eax + eax] */ r_ebx = (u32)(r_eax+r_eax);
    /* 006e6985: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006e6987: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 006e6989: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006e698b: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006e698d: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 006e698f: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006e6991: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006e6993: lea eax, [ebx + esi + 0x1c] */ r_eax = (u32)(r_ebx+r_esi+0x1cu);
    /* 006e6997: lea ecx, [edi + 0x20] */ r_ecx = (u32)(r_edi+0x20u);
    /* 006e699a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006e699b: mov ecx, dword ptr [ebp - 0x98] */ r_ecx = R32((u32)(r_ebp+0xffffff68u));
    /* 006e69a1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e69a2: call 0x6f4554 */ r_esp -= 4; W32(r_esp, 0x6e69a7u); f_006f4554();
    /* 006e69a7: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
    /* 006e69ae: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006e69b5: jmp 0x6e5ffb */ goto L_006e5ffb;
L_006e69ba:; BB(0x006e69ba);
    /* 006e69ba: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 006e69bd: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 006e69c0: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006e69c3: mov eax, 1 */ r_eax = 0x1u;
    /* 006e69c8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006e69cb: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006e69d2: mov esp, ebp */ r_esp = r_ebp;
    /* 006e69d4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e69d5: ret  */ FN_RET(0x006e6965); r_esp += 4; return;
}

void f_006e696d(void)
{
    FN_ENTER(0x006e696d);
    goto L_006e696d;
L_006e5ffb:; BB(0x006e5ffb);
    /* 006e5ffb: mov eax, edi */ r_eax = r_edi;
    /* 006e5ffd: mov edx, dword ptr [eax + 0x130] */ r_edx = R32((u32)(r_eax+0x130u));
    /* 006e6003: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006e6006: je 0x6e69ba */ if (fZ) goto L_006e69ba;
L_006e600c:; BB(0x006e600c);
    /* 006e600c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006e600e: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
L_006e6011:; BB(0x006e6011);
    /* 006e6011: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 006e6014: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006e6017: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006e6019: jge 0x6e69ba */ if ((fS==fO)) goto L_006e69ba;
L_006e601f:; BB(0x006e601f);
    /* 006e601f: mov ecx, eax */ r_ecx = r_eax;
    /* 006e6021: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006e6024: movzx ebx, word ptr [edx + ecx*8 + 0x134] */ r_ebx = (u32)R16((u32)(r_edx+r_ecx*8+0x134u));
    /* 006e602c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006e602d: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 006e6030: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006e6033: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x6e6038u); f_007b4d18();
    /* 006e6038: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006e603b: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006e603e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006e6041: movzx ecx, word ptr [eax + edx*8 + 0x13c] */ r_ecx = (u32)R16((u32)(r_eax+r_edx*8+0x13cu));
    /* 006e6049: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006e604a: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x6e604fu); f_007b4d18();
    /* 006e604f: mov ebx, eax */ r_ebx = r_eax;
    /* 006e6051: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e6054: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e6055: call 0x6ea700 */ r_esp -= 4; W32(r_esp, 0x6e605au); f_006ea700();
    /* 006e605a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e605d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e605f: je 0x6e66b3 */ if (fZ) goto L_006e66b3;
L_006e6065:; BB(0x006e6065);
    /* 006e6065: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006e6066: call 0x6ea700 */ r_esp -= 4; W32(r_esp, 0x6e606bu); f_006ea700();
    /* 006e606b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e606c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e606e: je 0x6e66b3 */ if (fZ) goto L_006e66b3;
L_006e6074:; BB(0x006e6074);
    /* 006e6074: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e6077: mov esi, dword ptr [edx + 0x30] */ r_esi = R32((u32)(r_edx+0x30u));
    /* 006e607a: test esi, 0x20000000 */ {  u32 a = r_esi; u32 b = 0x20000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e6080: je 0x6e60c7 */ if (fZ) goto L_006e60c7;
L_006e6082:; BB(0x006e6082);
    /* 006e6082: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
    /* 006e6085: test edx, 0x20000000 */ {  u32 a = r_edx; u32 b = 0x20000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e608b: je 0x6e60c7 */ if (fZ) goto L_006e60c7;
L_006e608d:; BB(0x006e608d);
    /* 006e608d: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e6090: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e6091: call 0x6ea71c */ r_esp -= 4; W32(r_esp, 0x6e6096u); f_006ea71c();
    /* 006e6096: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e6097: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e6099: je 0x6e60c7 */ if (fZ) goto L_006e60c7;
L_006e609b:; BB(0x006e609b);
    /* 006e609b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006e609c: call 0x6ea71c */ r_esp -= 4; W32(r_esp, 0x6e60a1u); f_006ea71c();
    /* 006e60a1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e60a2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e60a4: je 0x6e60c7 */ if (fZ) goto L_006e60c7;
L_006e60a6:; BB(0x006e60a6);
    /* 006e60a6: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e60a9: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006e60ab: call dword ptr [edx + 0x8c] */ { u32 t = R32((u32)(r_edx+0x8cu)); r_esp -= 4; W32(r_esp, 0x6e60b1u); call_ind(t); }
    /* 006e60b1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e60b3: je 0x6e60c7 */ if (fZ) goto L_006e60c7;
L_006e60b5:; BB(0x006e60b5);
    /* 006e60b5: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 006e60b7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006e60b9: call dword ptr [edx + 0x8c] */ { u32 t = R32((u32)(r_edx+0x8cu)); r_esp -= 4; W32(r_esp, 0x6e60bfu); call_ind(t); }
    /* 006e60bf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e60c1: jne 0x6e66b3 */ if (!fZ) goto L_006e66b3;
L_006e60c7:; BB(0x006e60c7);
    /* 006e60c7: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e60ca: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 006e60cd: lea ecx, [ebp - 0x60] */ r_ecx = (u32)(r_ebp+0xffffffa0u);
    /* 006e60d0: movsx esi, word ptr [edi + eax*4 + 0x136] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edi+r_eax*4+0x136u));
    /* 006e60d8: mov ebx, dword ptr [ebx + 0xa4] */ r_ebx = R32((u32)(r_ebx+0xa4u));
    /* 006e60de: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 006e60e1: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006e60e3: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006e60e5: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006e60e7: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006e60e9: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006e60eb: movsx esi, word ptr [edi + eax*4 + 0x13e] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edi+r_eax*4+0x13eu));
    /* 006e60f3: fld dword ptr [ebx + edx*4 + 0x1c] */ FPUSH(R_F32((u32)(r_ebx+r_edx*4+0x1cu)));
    /* 006e60f7: fld dword ptr [ebx + edx*4 + 0x20] */ FPUSH(R_F32((u32)(r_ebx+r_edx*4+0x20u)));
    /* 006e60fb: fld dword ptr [ebx + edx*4 + 0x24] */ FPUSH(R_F32((u32)(r_ebx+r_edx*4+0x24u)));
    /* 006e60ff: lea eax, [esi + esi] */ r_eax = (u32)(r_esi+r_esi);
    /* 006e6102: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006e6104: sub eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006e6106: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006e6108: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006e610a: sub eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006e610c: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e610f: mov esi, dword ptr [esi + 0xa4] */ r_esi = R32((u32)(r_esi+0xa4u));
    /* 006e6115: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 006e6117: fsub dword ptr [esi + eax*4 + 0x1c] */ ST(0) = ST(0) - R_F32((u32)(r_esi+r_eax*4+0x1cu));
    /* 006e611b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006e611d: fsub dword ptr [esi + eax*4 + 0x20] */ ST(0) = ST(0) - R_F32((u32)(r_esi+r_eax*4+0x20u));
    /* 006e6121: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 006e6123: fsub dword ptr [esi + eax*4 + 0x24] */ ST(0) = ST(0) - R_F32((u32)(r_esi+r_eax*4+0x24u));
    /* 006e6127: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006e6129: fstp dword ptr [ebp - 0x60] */ W_F32((u32)(r_ebp+0xffffffa0u), ST(0)); FPOP();
    /* 006e612c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006e612e: fstp dword ptr [ebp - 0x5c] */ W_F32((u32)(r_ebp+0xffffffa4u), ST(0)); FPOP();
    /* 006e6131: fstp dword ptr [ebp - 0x58] */ W_F32((u32)(r_ebp+0xffffffa8u), ST(0)); FPOP();
    /* 006e6134: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x6e6139u); f_0083173c();
    /* 006e6139: fstp dword ptr [ebp - 0x24] */ W_F32((u32)(r_ebp+0xffffffdcu), ST(0)); FPOP();
    /* 006e613c: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 006e613f: fcomp dword ptr [0x96d480] */ fx_compare(ST(0), R_F32((u32)(0x96d480u))); FPOP();
    /* 006e6145: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006e6147: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006e6148: je 0x6e66b3 */ if (fZ) goto L_006e66b3;
L_006e614e:; BB(0x006e614e);
    /* 006e614e: lea ecx, [ebp - 0x60] */ r_ecx = (u32)(r_ebp+0xffffffa0u);
    /* 006e6151: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x6e6156u); f_0082df08();
    /* 006e6156: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006e6158: mov eax, edi */ r_eax = r_edi;
    /* 006e615a: movsx eax, word ptr [eax + 0xc6] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0xc6u));
    /* 006e6161: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e6163: je 0x6e6611 */ if (fZ) goto L_006e6611;
L_006e6169:; BB(0x006e6169);
    /* 006e6169: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e616c: je 0x6e656f */ if (fZ) goto L_006e656f;
L_006e6172:; BB(0x006e6172);
    /* 006e6172: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e6175: je 0x6e64cd */ if (fZ) goto L_006e64cd;
L_006e617b:; BB(0x006e617b);
    /* 006e617b: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e617e: je 0x6e641e */ if (fZ) goto L_006e641e;
L_006e6184:; BB(0x006e6184);
    /* 006e6184: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e6187: jne 0x6e622f */ if (!fZ) goto L_006e622f;
L_006e618d:; BB(0x006e618d);
    /* 006e618d: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
    /* 006e6194: push 0x260 */ { u32 v = 0x260u; r_esp -= 4; W32(r_esp, v); }
    /* 006e6199: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e619eu); f_005caba4();
    /* 006e619e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e619f: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 006e61a2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e61a4: je 0x6e6223 */ if (fZ) goto L_006e6223;
L_006e61a6:; BB(0x006e61a6);
    /* 006e61a6: mov dword ptr [ebp - 0x44], 1 */ W32((u32)(r_ebp+0xffffffbcu), 0x1u);
    /* 006e61ad: mov dword ptr [ebp - 4], 0x14 */ W32((u32)(r_ebp+0xfffffffcu), 0x14u);
    /* 006e61b4: mov eax, dword ptr [0xaca344] */ r_eax = R32((u32)(0xaca344u));
    /* 006e61b9: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e61bc: mov edx, edi */ r_edx = r_edi;
    /* 006e61be: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e61c1: movsx esi, word ptr [edx + ebx*4 + 0x136] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+r_ebx*4+0x136u));
    /* 006e61c9: add esp, -0x1c */ {  u32 a = r_esp; u32 b = 0xffffffe4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e61cc: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 006e61cf: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 006e61d3: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 006e61d6: mov eax, dword ptr [edi + 0xa4] */ r_eax = R32((u32)(r_edi+0xa4u));
    /* 006e61dc: mov dword ptr [esp + 0x10], 0x3f333333 */ W32((u32)(r_esp+0x10u), 0x3f333333u);
    /* 006e61e4: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 006e61e7: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e61e9: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e61eb: mov dword ptr [esp + 0x14], 0x14000000 */ W32((u32)(r_esp+0x14u), 0x14000000u);
    /* 006e61f3: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e61f5: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e61f7: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e61f9: mov dword ptr [esp + 0x18], 0x14 */ W32((u32)(r_esp+0x18u), 0x14u);
    /* 006e6201: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6203: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6205: lea eax, [ecx + eax + 0x1c] */ r_eax = (u32)(r_ecx+r_eax+0x1cu);
    /* 006e6209: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 006e620c: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 006e6210: lea eax, [ebp - 0x60] */ r_eax = (u32)(r_ebp+0xffffffa0u);
    /* 006e6213: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 006e6217: call 0x6f3ba4 */ r_esp -= 4; W32(r_esp, 0x6e621cu); f_006f3ba4();
    /* 006e621c: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
L_006e6223:; BB(0x006e6223);
    /* 006e6223: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006e622a: jmp 0x6e64bb */ goto L_006e64bb;
L_006e622f:; BB(0x006e622f);
    /* 006e622f: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e6232: jne 0x6e64bb */ if (!fZ) goto L_006e64bb;
L_006e6238:; BB(0x006e6238);
    /* 006e6238: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
    /* 006e623f: push 0x260 */ { u32 v = 0x260u; r_esp -= 4; W32(r_esp, v); }
    /* 006e6244: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e6249u); f_005caba4();
    /* 006e6249: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e624a: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 006e624d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e624f: je 0x6e62ce */ if (fZ) goto L_006e62ce;
L_006e6251:; BB(0x006e6251);
    /* 006e6251: mov dword ptr [ebp - 0x54], 1 */ W32((u32)(r_ebp+0xffffffacu), 0x1u);
    /* 006e6258: mov dword ptr [ebp - 4], 0x11 */ W32((u32)(r_ebp+0xfffffffcu), 0x11u);
    /* 006e625f: mov eax, dword ptr [0xaca344] */ r_eax = R32((u32)(0xaca344u));
    /* 006e6264: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e6267: mov edx, edi */ r_edx = r_edi;
    /* 006e6269: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e626c: movsx esi, word ptr [edx + ebx*4 + 0x136] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+r_ebx*4+0x136u));
    /* 006e6274: add esp, -0x1c */ {  u32 a = r_esp; u32 b = 0xffffffe4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e6277: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 006e627a: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 006e627e: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 006e6281: mov eax, dword ptr [edi + 0xa4] */ r_eax = R32((u32)(r_edi+0xa4u));
    /* 006e6287: mov dword ptr [esp + 0x10], 0x40a00000 */ W32((u32)(r_esp+0x10u), 0x40a00000u);
    /* 006e628f: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 006e6292: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6294: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6296: mov dword ptr [esp + 0x14], 0x14000000 */ W32((u32)(r_esp+0x14u), 0x14000000u);
    /* 006e629e: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e62a0: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e62a2: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e62a4: mov dword ptr [esp + 0x18], 0x14 */ W32((u32)(r_esp+0x18u), 0x14u);
    /* 006e62ac: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e62ae: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e62b0: lea eax, [ecx + eax + 0x1c] */ r_eax = (u32)(r_ecx+r_eax+0x1cu);
    /* 006e62b4: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 006e62b7: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 006e62bb: lea eax, [ebp - 0x60] */ r_eax = (u32)(r_ebp+0xffffffa0u);
    /* 006e62be: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 006e62c2: call 0x6f3ba4 */ r_esp -= 4; W32(r_esp, 0x6e62c7u); f_006f3ba4();
    /* 006e62c7: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
L_006e62ce:; BB(0x006e62ce);
    /* 006e62ce: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006e62d5: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
    /* 006e62dc: push 0x260 */ { u32 v = 0x260u; r_esp -= 4; W32(r_esp, v); }
    /* 006e62e1: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e62e6u); f_005caba4();
    /* 006e62e6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e62e7: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 006e62ea: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e62ec: je 0x6e6370 */ if (fZ) goto L_006e6370;
L_006e62f2:; BB(0x006e62f2);
    /* 006e62f2: mov dword ptr [ebp - 0x4c], 1 */ W32((u32)(r_ebp+0xffffffb4u), 0x1u);
    /* 006e62f9: mov dword ptr [ebp - 4], 0x12 */ W32((u32)(r_ebp+0xfffffffcu), 0x12u);
    /* 006e6300: mov eax, dword ptr [0xaca344] */ r_eax = R32((u32)(0xaca344u));
    /* 006e6305: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e6308: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006e630b: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e630e: movsx esi, word ptr [edx + ebx*4 + 0x136] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+r_ebx*4+0x136u));
    /* 006e6316: add esp, -0x1c */ {  u32 a = r_esp; u32 b = 0xffffffe4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e6319: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 006e631c: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 006e6320: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 006e6323: mov eax, dword ptr [edi + 0xa4] */ r_eax = R32((u32)(r_edi+0xa4u));
    /* 006e6329: mov dword ptr [esp + 0x10], 0x3f000000 */ W32((u32)(r_esp+0x10u), 0x3f000000u);
    /* 006e6331: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 006e6334: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6336: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6338: mov dword ptr [esp + 0x14], 0x14000000 */ W32((u32)(r_esp+0x14u), 0x14000000u);
    /* 006e6340: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6342: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6344: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6346: mov dword ptr [esp + 0x18], 0x14 */ W32((u32)(r_esp+0x18u), 0x14u);
    /* 006e634e: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6350: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6352: lea eax, [ecx + eax + 0x1c] */ r_eax = (u32)(r_ecx+r_eax+0x1cu);
    /* 006e6356: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 006e6359: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 006e635d: lea eax, [ebp - 0x60] */ r_eax = (u32)(r_ebp+0xffffffa0u);
    /* 006e6360: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 006e6364: call 0x6f3ba4 */ r_esp -= 4; W32(r_esp, 0x6e6369u); f_006f3ba4();
    /* 006e6369: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
L_006e6370:; BB(0x006e6370);
    /* 006e6370: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006e6377: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
    /* 006e637e: push 0x260 */ { u32 v = 0x260u; r_esp -= 4; W32(r_esp, v); }
    /* 006e6383: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e6388u); f_005caba4();
    /* 006e6388: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e6389: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 006e638c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e638e: je 0x6e6412 */ if (fZ) goto L_006e6412;
L_006e6394:; BB(0x006e6394);
    /* 006e6394: mov dword ptr [ebp - 0x48], 1 */ W32((u32)(r_ebp+0xffffffb8u), 0x1u);
    /* 006e639b: mov dword ptr [ebp - 4], 0x13 */ W32((u32)(r_ebp+0xfffffffcu), 0x13u);
    /* 006e63a2: mov eax, dword ptr [0xaca344] */ r_eax = R32((u32)(0xaca344u));
    /* 006e63a7: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e63aa: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006e63ad: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e63b0: movsx esi, word ptr [edx + ebx*4 + 0x136] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+r_ebx*4+0x136u));
    /* 006e63b8: add esp, -0x1c */ {  u32 a = r_esp; u32 b = 0xffffffe4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e63bb: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 006e63be: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 006e63c2: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 006e63c5: mov eax, dword ptr [edi + 0xa4] */ r_eax = R32((u32)(r_edi+0xa4u));
    /* 006e63cb: mov dword ptr [esp + 0x10], 0x3f000000 */ W32((u32)(r_esp+0x10u), 0x3f000000u);
    /* 006e63d3: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 006e63d6: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e63d8: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e63da: mov dword ptr [esp + 0x14], 0x14000000 */ W32((u32)(r_esp+0x14u), 0x14000000u);
    /* 006e63e2: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e63e4: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e63e6: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e63e8: mov dword ptr [esp + 0x18], 0x14 */ W32((u32)(r_esp+0x18u), 0x14u);
    /* 006e63f0: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e63f2: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e63f4: lea eax, [ecx + eax + 0x1c] */ r_eax = (u32)(r_ecx+r_eax+0x1cu);
    /* 006e63f8: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 006e63fb: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 006e63ff: lea eax, [ebp - 0x60] */ r_eax = (u32)(r_ebp+0xffffffa0u);
    /* 006e6402: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 006e6406: call 0x6f3ba4 */ r_esp -= 4; W32(r_esp, 0x6e640bu); f_006f3ba4();
    /* 006e640b: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
L_006e6412:; BB(0x006e6412);
    /* 006e6412: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006e6419: jmp 0x6e64bb */ goto L_006e64bb;
L_006e641e:; BB(0x006e641e);
    /* 006e641e: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
    /* 006e6425: push 0x260 */ { u32 v = 0x260u; r_esp -= 4; W32(r_esp, v); }
    /* 006e642a: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e642fu); f_005caba4();
    /* 006e642f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e6430: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 006e6433: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e6435: je 0x6e64b4 */ if (fZ) goto L_006e64b4;
L_006e6437:; BB(0x006e6437);
    /* 006e6437: mov dword ptr [ebp - 0x40], 1 */ W32((u32)(r_ebp+0xffffffc0u), 0x1u);
    /* 006e643e: mov dword ptr [ebp - 4], 0x15 */ W32((u32)(r_ebp+0xfffffffcu), 0x15u);
    /* 006e6445: mov eax, dword ptr [0xaca344] */ r_eax = R32((u32)(0xaca344u));
    /* 006e644a: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e644d: mov edx, edi */ r_edx = r_edi;
    /* 006e644f: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e6452: movsx esi, word ptr [edx + ebx*4 + 0x136] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+r_ebx*4+0x136u));
    /* 006e645a: add esp, -0x1c */ {  u32 a = r_esp; u32 b = 0xffffffe4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e645d: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 006e6460: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 006e6464: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 006e6467: mov eax, dword ptr [edi + 0xa4] */ r_eax = R32((u32)(r_edi+0xa4u));
    /* 006e646d: mov dword ptr [esp + 0x10], 0x3f19999a */ W32((u32)(r_esp+0x10u), 0x3f19999au);
    /* 006e6475: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 006e6478: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e647a: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e647c: mov dword ptr [esp + 0x14], 0x14000000 */ W32((u32)(r_esp+0x14u), 0x14000000u);
    /* 006e6484: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6486: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6488: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e648a: mov dword ptr [esp + 0x18], 0x14 */ W32((u32)(r_esp+0x18u), 0x14u);
    /* 006e6492: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6494: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6496: lea eax, [ecx + eax + 0x1c] */ r_eax = (u32)(r_ecx+r_eax+0x1cu);
    /* 006e649a: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 006e649d: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 006e64a1: lea eax, [ebp - 0x60] */ r_eax = (u32)(r_ebp+0xffffffa0u);
    /* 006e64a4: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 006e64a8: call 0x6f3ba4 */ r_esp -= 4; W32(r_esp, 0x6e64adu); f_006f3ba4();
    /* 006e64ad: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
L_006e64b4:; BB(0x006e64b4);
    /* 006e64b4: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
L_006e64bb:; BB(0x006e64bb);
    /* 006e64bb: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006e64be: mov edx, dword ptr [eax + 0x130] */ r_edx = R32((u32)(r_eax+0x130u));
    /* 006e64c4: add dword ptr [ebp - 0x1c], 1 */ { u32 ad = (u32)(r_ebp+0xffffffe4u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 006e64c8: jmp 0x6e6011 */ goto L_006e6011;
L_006e64cd:; BB(0x006e64cd);
    /* 006e64cd: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 006e64d4: push 0x260 */ { u32 v = 0x260u; r_esp -= 4; W32(r_esp, v); }
    /* 006e64d9: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e64deu); f_005caba4();
    /* 006e64de: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e64df: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 006e64e2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e64e4: je 0x6e6563 */ if (fZ) goto L_006e6563;
L_006e64e6:; BB(0x006e64e6);
    /* 006e64e6: mov dword ptr [ebp - 0x3c], 1 */ W32((u32)(r_ebp+0xffffffc4u), 0x1u);
    /* 006e64ed: mov dword ptr [ebp - 4], 0x16 */ W32((u32)(r_ebp+0xfffffffcu), 0x16u);
    /* 006e64f4: mov eax, dword ptr [0xaca344] */ r_eax = R32((u32)(0xaca344u));
    /* 006e64f9: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e64fc: mov edx, edi */ r_edx = r_edi;
    /* 006e64fe: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e6501: movsx esi, word ptr [edx + ebx*4 + 0x136] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+r_ebx*4+0x136u));
    /* 006e6509: add esp, -0x1c */ {  u32 a = r_esp; u32 b = 0xffffffe4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e650c: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 006e650f: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 006e6513: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 006e6516: mov eax, dword ptr [edi + 0xa4] */ r_eax = R32((u32)(r_edi+0xa4u));
    /* 006e651c: mov dword ptr [esp + 0x10], 0x3f333333 */ W32((u32)(r_esp+0x10u), 0x3f333333u);
    /* 006e6524: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 006e6527: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6529: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e652b: mov dword ptr [esp + 0x14], 0x14000000 */ W32((u32)(r_esp+0x14u), 0x14000000u);
    /* 006e6533: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6535: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6537: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6539: mov dword ptr [esp + 0x18], 0x14 */ W32((u32)(r_esp+0x18u), 0x14u);
    /* 006e6541: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6543: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6545: lea eax, [ecx + eax + 0x1c] */ r_eax = (u32)(r_ecx+r_eax+0x1cu);
    /* 006e6549: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 006e654c: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 006e6550: lea eax, [ebp - 0x60] */ r_eax = (u32)(r_ebp+0xffffffa0u);
    /* 006e6553: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 006e6557: call 0x6f3ba4 */ r_esp -= 4; W32(r_esp, 0x6e655cu); f_006f3ba4();
    /* 006e655c: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_006e6563:; BB(0x006e6563);
    /* 006e6563: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006e656a: jmp 0x6e64bb */ goto L_006e64bb;
L_006e656f:; BB(0x006e656f);
    /* 006e656f: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 006e6576: push 0x260 */ { u32 v = 0x260u; r_esp -= 4; W32(r_esp, v); }
    /* 006e657b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e6580u); f_005caba4();
    /* 006e6580: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e6581: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 006e6584: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e6586: je 0x6e6605 */ if (fZ) goto L_006e6605;
L_006e6588:; BB(0x006e6588);
    /* 006e6588: mov dword ptr [ebp - 0x38], 1 */ W32((u32)(r_ebp+0xffffffc8u), 0x1u);
    /* 006e658f: mov dword ptr [ebp - 4], 0x17 */ W32((u32)(r_ebp+0xfffffffcu), 0x17u);
    /* 006e6596: mov eax, dword ptr [0xaca344] */ r_eax = R32((u32)(0xaca344u));
    /* 006e659b: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e659e: mov edx, edi */ r_edx = r_edi;
    /* 006e65a0: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e65a3: movsx esi, word ptr [edx + ebx*4 + 0x136] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+r_ebx*4+0x136u));
    /* 006e65ab: add esp, -0x1c */ {  u32 a = r_esp; u32 b = 0xffffffe4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e65ae: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 006e65b1: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 006e65b5: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 006e65b8: mov eax, dword ptr [edi + 0xa4] */ r_eax = R32((u32)(r_edi+0xa4u));
    /* 006e65be: mov dword ptr [esp + 0x10], 0x3f19999a */ W32((u32)(r_esp+0x10u), 0x3f19999au);
    /* 006e65c6: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 006e65c9: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e65cb: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e65cd: mov dword ptr [esp + 0x14], 0x14000000 */ W32((u32)(r_esp+0x14u), 0x14000000u);
    /* 006e65d5: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e65d7: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e65d9: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e65db: mov dword ptr [esp + 0x18], 0x14 */ W32((u32)(r_esp+0x18u), 0x14u);
    /* 006e65e3: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e65e5: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e65e7: lea eax, [ecx + eax + 0x1c] */ r_eax = (u32)(r_ecx+r_eax+0x1cu);
    /* 006e65eb: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 006e65ee: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 006e65f2: lea eax, [ebp - 0x60] */ r_eax = (u32)(r_ebp+0xffffffa0u);
    /* 006e65f5: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 006e65f9: call 0x6f3ba4 */ r_esp -= 4; W32(r_esp, 0x6e65feu); f_006f3ba4();
    /* 006e65fe: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_006e6605:; BB(0x006e6605);
    /* 006e6605: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006e660c: jmp 0x6e64bb */ goto L_006e64bb;
L_006e6611:; BB(0x006e6611);
    /* 006e6611: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 006e6618: push 0x260 */ { u32 v = 0x260u; r_esp -= 4; W32(r_esp, v); }
    /* 006e661d: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e6622u); f_005caba4();
    /* 006e6622: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e6623: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 006e6626: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e6628: je 0x6e66a7 */ if (fZ) goto L_006e66a7;
L_006e662a:; BB(0x006e662a);
    /* 006e662a: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 006e6631: mov dword ptr [ebp - 4], 0x18 */ W32((u32)(r_ebp+0xfffffffcu), 0x18u);
    /* 006e6638: mov eax, dword ptr [0xaca344] */ r_eax = R32((u32)(0xaca344u));
    /* 006e663d: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e6640: mov edx, edi */ r_edx = r_edi;
    /* 006e6642: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e6645: movsx esi, word ptr [edx + ebx*4 + 0x136] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+r_ebx*4+0x136u));
    /* 006e664d: add esp, -0x1c */ {  u32 a = r_esp; u32 b = 0xffffffe4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e6650: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 006e6653: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 006e6657: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 006e665a: mov eax, dword ptr [edi + 0xa4] */ r_eax = R32((u32)(r_edi+0xa4u));
    /* 006e6660: mov dword ptr [esp + 0x10], 0x3f000000 */ W32((u32)(r_esp+0x10u), 0x3f000000u);
    /* 006e6668: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 006e666b: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e666d: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e666f: mov dword ptr [esp + 0x14], 0x14000000 */ W32((u32)(r_esp+0x14u), 0x14000000u);
    /* 006e6677: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6679: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e667b: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e667d: mov dword ptr [esp + 0x18], 0x14 */ W32((u32)(r_esp+0x18u), 0x14u);
    /* 006e6685: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6687: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6689: lea eax, [ecx + eax + 0x1c] */ r_eax = (u32)(r_ecx+r_eax+0x1cu);
    /* 006e668d: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 006e6690: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 006e6694: lea eax, [ebp - 0x60] */ r_eax = (u32)(r_ebp+0xffffffa0u);
    /* 006e6697: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 006e669b: call 0x6f3ba4 */ r_esp -= 4; W32(r_esp, 0x6e66a0u); f_006f3ba4();
    /* 006e66a0: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_006e66a7:; BB(0x006e66a7);
    /* 006e66a7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006e66ae: jmp 0x6e64bb */ goto L_006e64bb;
L_006e66b3:; BB(0x006e66b3);
    /* 006e66b3: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 006e66b6: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 006e66b9: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006e66bc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006e66be: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006e66c1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006e66c8: mov esp, ebp */ r_esp = r_ebp;
    /* 006e66ca: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e66cb: ret  */ FN_RET(0x006e696d); r_esp += 4; return;
L_006e696d:; BB(0x006e696d);
    /* 006e696d: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 006e696f: movsx eax, word ptr [edi + 0x136] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x136u));
    /* 006e6976: mov esi, dword ptr [edx + 0xa4] */ r_esi = R32((u32)(r_edx+0xa4u));
    /* 006e697c: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 006e6982: lea ebx, [eax + eax] */ r_ebx = (u32)(r_eax+r_eax);
    /* 006e6985: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006e6987: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 006e6989: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006e698b: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006e698d: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 006e698f: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006e6991: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006e6993: lea eax, [ebx + esi + 0x1c] */ r_eax = (u32)(r_ebx+r_esi+0x1cu);
    /* 006e6997: lea ecx, [edi + 0x20] */ r_ecx = (u32)(r_edi+0x20u);
    /* 006e699a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006e699b: mov ecx, dword ptr [ebp - 0x98] */ r_ecx = R32((u32)(r_ebp+0xffffff68u));
    /* 006e69a1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e69a2: call 0x6f4554 */ r_esp -= 4; W32(r_esp, 0x6e69a7u); f_006f4554();
    /* 006e69a7: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
    /* 006e69ae: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006e69b5: jmp 0x6e5ffb */ goto L_006e5ffb;
L_006e69ba:; BB(0x006e69ba);
    /* 006e69ba: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 006e69bd: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 006e69c0: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006e69c3: mov eax, 1 */ r_eax = 0x1u;
    /* 006e69c8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006e69cb: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006e69d2: mov esp, ebp */ r_esp = r_ebp;
    /* 006e69d4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e69d5: ret  */ FN_RET(0x006e696d); r_esp += 4; return;
}

void f_006e6973(void)
{
    FN_ENTER(0x006e6973);
    goto L_006e6973;
L_006e5ffb:; BB(0x006e5ffb);
    /* 006e5ffb: mov eax, edi */ r_eax = r_edi;
    /* 006e5ffd: mov edx, dword ptr [eax + 0x130] */ r_edx = R32((u32)(r_eax+0x130u));
    /* 006e6003: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006e6006: je 0x6e69ba */ if (fZ) goto L_006e69ba;
L_006e600c:; BB(0x006e600c);
    /* 006e600c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006e600e: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
L_006e6011:; BB(0x006e6011);
    /* 006e6011: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 006e6014: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006e6017: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006e6019: jge 0x6e69ba */ if ((fS==fO)) goto L_006e69ba;
L_006e601f:; BB(0x006e601f);
    /* 006e601f: mov ecx, eax */ r_ecx = r_eax;
    /* 006e6021: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006e6024: movzx ebx, word ptr [edx + ecx*8 + 0x134] */ r_ebx = (u32)R16((u32)(r_edx+r_ecx*8+0x134u));
    /* 006e602c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006e602d: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 006e6030: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006e6033: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x6e6038u); f_007b4d18();
    /* 006e6038: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006e603b: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006e603e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006e6041: movzx ecx, word ptr [eax + edx*8 + 0x13c] */ r_ecx = (u32)R16((u32)(r_eax+r_edx*8+0x13cu));
    /* 006e6049: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006e604a: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x6e604fu); f_007b4d18();
    /* 006e604f: mov ebx, eax */ r_ebx = r_eax;
    /* 006e6051: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e6054: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e6055: call 0x6ea700 */ r_esp -= 4; W32(r_esp, 0x6e605au); f_006ea700();
    /* 006e605a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e605d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e605f: je 0x6e66b3 */ if (fZ) goto L_006e66b3;
L_006e6065:; BB(0x006e6065);
    /* 006e6065: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006e6066: call 0x6ea700 */ r_esp -= 4; W32(r_esp, 0x6e606bu); f_006ea700();
    /* 006e606b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e606c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e606e: je 0x6e66b3 */ if (fZ) goto L_006e66b3;
L_006e6074:; BB(0x006e6074);
    /* 006e6074: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e6077: mov esi, dword ptr [edx + 0x30] */ r_esi = R32((u32)(r_edx+0x30u));
    /* 006e607a: test esi, 0x20000000 */ {  u32 a = r_esi; u32 b = 0x20000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e6080: je 0x6e60c7 */ if (fZ) goto L_006e60c7;
L_006e6082:; BB(0x006e6082);
    /* 006e6082: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
    /* 006e6085: test edx, 0x20000000 */ {  u32 a = r_edx; u32 b = 0x20000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e608b: je 0x6e60c7 */ if (fZ) goto L_006e60c7;
L_006e608d:; BB(0x006e608d);
    /* 006e608d: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e6090: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e6091: call 0x6ea71c */ r_esp -= 4; W32(r_esp, 0x6e6096u); f_006ea71c();
    /* 006e6096: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e6097: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e6099: je 0x6e60c7 */ if (fZ) goto L_006e60c7;
L_006e609b:; BB(0x006e609b);
    /* 006e609b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006e609c: call 0x6ea71c */ r_esp -= 4; W32(r_esp, 0x6e60a1u); f_006ea71c();
    /* 006e60a1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e60a2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e60a4: je 0x6e60c7 */ if (fZ) goto L_006e60c7;
L_006e60a6:; BB(0x006e60a6);
    /* 006e60a6: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e60a9: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006e60ab: call dword ptr [edx + 0x8c] */ { u32 t = R32((u32)(r_edx+0x8cu)); r_esp -= 4; W32(r_esp, 0x6e60b1u); call_ind(t); }
    /* 006e60b1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e60b3: je 0x6e60c7 */ if (fZ) goto L_006e60c7;
L_006e60b5:; BB(0x006e60b5);
    /* 006e60b5: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 006e60b7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006e60b9: call dword ptr [edx + 0x8c] */ { u32 t = R32((u32)(r_edx+0x8cu)); r_esp -= 4; W32(r_esp, 0x6e60bfu); call_ind(t); }
    /* 006e60bf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e60c1: jne 0x6e66b3 */ if (!fZ) goto L_006e66b3;
L_006e60c7:; BB(0x006e60c7);
    /* 006e60c7: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e60ca: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 006e60cd: lea ecx, [ebp - 0x60] */ r_ecx = (u32)(r_ebp+0xffffffa0u);
    /* 006e60d0: movsx esi, word ptr [edi + eax*4 + 0x136] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edi+r_eax*4+0x136u));
    /* 006e60d8: mov ebx, dword ptr [ebx + 0xa4] */ r_ebx = R32((u32)(r_ebx+0xa4u));
    /* 006e60de: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 006e60e1: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006e60e3: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006e60e5: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006e60e7: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006e60e9: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006e60eb: movsx esi, word ptr [edi + eax*4 + 0x13e] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edi+r_eax*4+0x13eu));
    /* 006e60f3: fld dword ptr [ebx + edx*4 + 0x1c] */ FPUSH(R_F32((u32)(r_ebx+r_edx*4+0x1cu)));
    /* 006e60f7: fld dword ptr [ebx + edx*4 + 0x20] */ FPUSH(R_F32((u32)(r_ebx+r_edx*4+0x20u)));
    /* 006e60fb: fld dword ptr [ebx + edx*4 + 0x24] */ FPUSH(R_F32((u32)(r_ebx+r_edx*4+0x24u)));
    /* 006e60ff: lea eax, [esi + esi] */ r_eax = (u32)(r_esi+r_esi);
    /* 006e6102: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006e6104: sub eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006e6106: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006e6108: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006e610a: sub eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006e610c: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e610f: mov esi, dword ptr [esi + 0xa4] */ r_esi = R32((u32)(r_esi+0xa4u));
    /* 006e6115: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 006e6117: fsub dword ptr [esi + eax*4 + 0x1c] */ ST(0) = ST(0) - R_F32((u32)(r_esi+r_eax*4+0x1cu));
    /* 006e611b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006e611d: fsub dword ptr [esi + eax*4 + 0x20] */ ST(0) = ST(0) - R_F32((u32)(r_esi+r_eax*4+0x20u));
    /* 006e6121: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 006e6123: fsub dword ptr [esi + eax*4 + 0x24] */ ST(0) = ST(0) - R_F32((u32)(r_esi+r_eax*4+0x24u));
    /* 006e6127: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006e6129: fstp dword ptr [ebp - 0x60] */ W_F32((u32)(r_ebp+0xffffffa0u), ST(0)); FPOP();
    /* 006e612c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006e612e: fstp dword ptr [ebp - 0x5c] */ W_F32((u32)(r_ebp+0xffffffa4u), ST(0)); FPOP();
    /* 006e6131: fstp dword ptr [ebp - 0x58] */ W_F32((u32)(r_ebp+0xffffffa8u), ST(0)); FPOP();
    /* 006e6134: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x6e6139u); f_0083173c();
    /* 006e6139: fstp dword ptr [ebp - 0x24] */ W_F32((u32)(r_ebp+0xffffffdcu), ST(0)); FPOP();
    /* 006e613c: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 006e613f: fcomp dword ptr [0x96d480] */ fx_compare(ST(0), R_F32((u32)(0x96d480u))); FPOP();
    /* 006e6145: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006e6147: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006e6148: je 0x6e66b3 */ if (fZ) goto L_006e66b3;
L_006e614e:; BB(0x006e614e);
    /* 006e614e: lea ecx, [ebp - 0x60] */ r_ecx = (u32)(r_ebp+0xffffffa0u);
    /* 006e6151: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x6e6156u); f_0082df08();
    /* 006e6156: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006e6158: mov eax, edi */ r_eax = r_edi;
    /* 006e615a: movsx eax, word ptr [eax + 0xc6] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0xc6u));
    /* 006e6161: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e6163: je 0x6e6611 */ if (fZ) goto L_006e6611;
L_006e6169:; BB(0x006e6169);
    /* 006e6169: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e616c: je 0x6e656f */ if (fZ) goto L_006e656f;
L_006e6172:; BB(0x006e6172);
    /* 006e6172: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e6175: je 0x6e64cd */ if (fZ) goto L_006e64cd;
L_006e617b:; BB(0x006e617b);
    /* 006e617b: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e617e: je 0x6e641e */ if (fZ) goto L_006e641e;
L_006e6184:; BB(0x006e6184);
    /* 006e6184: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e6187: jne 0x6e622f */ if (!fZ) goto L_006e622f;
L_006e618d:; BB(0x006e618d);
    /* 006e618d: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
    /* 006e6194: push 0x260 */ { u32 v = 0x260u; r_esp -= 4; W32(r_esp, v); }
    /* 006e6199: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e619eu); f_005caba4();
    /* 006e619e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e619f: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 006e61a2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e61a4: je 0x6e6223 */ if (fZ) goto L_006e6223;
L_006e61a6:; BB(0x006e61a6);
    /* 006e61a6: mov dword ptr [ebp - 0x44], 1 */ W32((u32)(r_ebp+0xffffffbcu), 0x1u);
    /* 006e61ad: mov dword ptr [ebp - 4], 0x14 */ W32((u32)(r_ebp+0xfffffffcu), 0x14u);
    /* 006e61b4: mov eax, dword ptr [0xaca344] */ r_eax = R32((u32)(0xaca344u));
    /* 006e61b9: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e61bc: mov edx, edi */ r_edx = r_edi;
    /* 006e61be: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e61c1: movsx esi, word ptr [edx + ebx*4 + 0x136] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+r_ebx*4+0x136u));
    /* 006e61c9: add esp, -0x1c */ {  u32 a = r_esp; u32 b = 0xffffffe4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e61cc: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 006e61cf: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 006e61d3: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 006e61d6: mov eax, dword ptr [edi + 0xa4] */ r_eax = R32((u32)(r_edi+0xa4u));
    /* 006e61dc: mov dword ptr [esp + 0x10], 0x3f333333 */ W32((u32)(r_esp+0x10u), 0x3f333333u);
    /* 006e61e4: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 006e61e7: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e61e9: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e61eb: mov dword ptr [esp + 0x14], 0x14000000 */ W32((u32)(r_esp+0x14u), 0x14000000u);
    /* 006e61f3: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e61f5: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e61f7: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e61f9: mov dword ptr [esp + 0x18], 0x14 */ W32((u32)(r_esp+0x18u), 0x14u);
    /* 006e6201: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6203: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6205: lea eax, [ecx + eax + 0x1c] */ r_eax = (u32)(r_ecx+r_eax+0x1cu);
    /* 006e6209: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 006e620c: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 006e6210: lea eax, [ebp - 0x60] */ r_eax = (u32)(r_ebp+0xffffffa0u);
    /* 006e6213: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 006e6217: call 0x6f3ba4 */ r_esp -= 4; W32(r_esp, 0x6e621cu); f_006f3ba4();
    /* 006e621c: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
L_006e6223:; BB(0x006e6223);
    /* 006e6223: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006e622a: jmp 0x6e64bb */ goto L_006e64bb;
L_006e622f:; BB(0x006e622f);
    /* 006e622f: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e6232: jne 0x6e64bb */ if (!fZ) goto L_006e64bb;
L_006e6238:; BB(0x006e6238);
    /* 006e6238: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
    /* 006e623f: push 0x260 */ { u32 v = 0x260u; r_esp -= 4; W32(r_esp, v); }
    /* 006e6244: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e6249u); f_005caba4();
    /* 006e6249: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e624a: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 006e624d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e624f: je 0x6e62ce */ if (fZ) goto L_006e62ce;
L_006e6251:; BB(0x006e6251);
    /* 006e6251: mov dword ptr [ebp - 0x54], 1 */ W32((u32)(r_ebp+0xffffffacu), 0x1u);
    /* 006e6258: mov dword ptr [ebp - 4], 0x11 */ W32((u32)(r_ebp+0xfffffffcu), 0x11u);
    /* 006e625f: mov eax, dword ptr [0xaca344] */ r_eax = R32((u32)(0xaca344u));
    /* 006e6264: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e6267: mov edx, edi */ r_edx = r_edi;
    /* 006e6269: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e626c: movsx esi, word ptr [edx + ebx*4 + 0x136] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+r_ebx*4+0x136u));
    /* 006e6274: add esp, -0x1c */ {  u32 a = r_esp; u32 b = 0xffffffe4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e6277: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 006e627a: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 006e627e: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 006e6281: mov eax, dword ptr [edi + 0xa4] */ r_eax = R32((u32)(r_edi+0xa4u));
    /* 006e6287: mov dword ptr [esp + 0x10], 0x40a00000 */ W32((u32)(r_esp+0x10u), 0x40a00000u);
    /* 006e628f: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 006e6292: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6294: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6296: mov dword ptr [esp + 0x14], 0x14000000 */ W32((u32)(r_esp+0x14u), 0x14000000u);
    /* 006e629e: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e62a0: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e62a2: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e62a4: mov dword ptr [esp + 0x18], 0x14 */ W32((u32)(r_esp+0x18u), 0x14u);
    /* 006e62ac: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e62ae: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e62b0: lea eax, [ecx + eax + 0x1c] */ r_eax = (u32)(r_ecx+r_eax+0x1cu);
    /* 006e62b4: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 006e62b7: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 006e62bb: lea eax, [ebp - 0x60] */ r_eax = (u32)(r_ebp+0xffffffa0u);
    /* 006e62be: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 006e62c2: call 0x6f3ba4 */ r_esp -= 4; W32(r_esp, 0x6e62c7u); f_006f3ba4();
    /* 006e62c7: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
L_006e62ce:; BB(0x006e62ce);
    /* 006e62ce: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006e62d5: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
    /* 006e62dc: push 0x260 */ { u32 v = 0x260u; r_esp -= 4; W32(r_esp, v); }
    /* 006e62e1: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e62e6u); f_005caba4();
    /* 006e62e6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e62e7: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 006e62ea: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e62ec: je 0x6e6370 */ if (fZ) goto L_006e6370;
L_006e62f2:; BB(0x006e62f2);
    /* 006e62f2: mov dword ptr [ebp - 0x4c], 1 */ W32((u32)(r_ebp+0xffffffb4u), 0x1u);
    /* 006e62f9: mov dword ptr [ebp - 4], 0x12 */ W32((u32)(r_ebp+0xfffffffcu), 0x12u);
    /* 006e6300: mov eax, dword ptr [0xaca344] */ r_eax = R32((u32)(0xaca344u));
    /* 006e6305: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e6308: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006e630b: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e630e: movsx esi, word ptr [edx + ebx*4 + 0x136] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+r_ebx*4+0x136u));
    /* 006e6316: add esp, -0x1c */ {  u32 a = r_esp; u32 b = 0xffffffe4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e6319: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 006e631c: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 006e6320: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 006e6323: mov eax, dword ptr [edi + 0xa4] */ r_eax = R32((u32)(r_edi+0xa4u));
    /* 006e6329: mov dword ptr [esp + 0x10], 0x3f000000 */ W32((u32)(r_esp+0x10u), 0x3f000000u);
    /* 006e6331: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 006e6334: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6336: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6338: mov dword ptr [esp + 0x14], 0x14000000 */ W32((u32)(r_esp+0x14u), 0x14000000u);
    /* 006e6340: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6342: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6344: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6346: mov dword ptr [esp + 0x18], 0x14 */ W32((u32)(r_esp+0x18u), 0x14u);
    /* 006e634e: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6350: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6352: lea eax, [ecx + eax + 0x1c] */ r_eax = (u32)(r_ecx+r_eax+0x1cu);
    /* 006e6356: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 006e6359: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 006e635d: lea eax, [ebp - 0x60] */ r_eax = (u32)(r_ebp+0xffffffa0u);
    /* 006e6360: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 006e6364: call 0x6f3ba4 */ r_esp -= 4; W32(r_esp, 0x6e6369u); f_006f3ba4();
    /* 006e6369: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
L_006e6370:; BB(0x006e6370);
    /* 006e6370: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006e6377: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
    /* 006e637e: push 0x260 */ { u32 v = 0x260u; r_esp -= 4; W32(r_esp, v); }
    /* 006e6383: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e6388u); f_005caba4();
    /* 006e6388: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e6389: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 006e638c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e638e: je 0x6e6412 */ if (fZ) goto L_006e6412;
L_006e6394:; BB(0x006e6394);
    /* 006e6394: mov dword ptr [ebp - 0x48], 1 */ W32((u32)(r_ebp+0xffffffb8u), 0x1u);
    /* 006e639b: mov dword ptr [ebp - 4], 0x13 */ W32((u32)(r_ebp+0xfffffffcu), 0x13u);
    /* 006e63a2: mov eax, dword ptr [0xaca344] */ r_eax = R32((u32)(0xaca344u));
    /* 006e63a7: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e63aa: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006e63ad: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e63b0: movsx esi, word ptr [edx + ebx*4 + 0x136] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+r_ebx*4+0x136u));
    /* 006e63b8: add esp, -0x1c */ {  u32 a = r_esp; u32 b = 0xffffffe4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e63bb: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 006e63be: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 006e63c2: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 006e63c5: mov eax, dword ptr [edi + 0xa4] */ r_eax = R32((u32)(r_edi+0xa4u));
    /* 006e63cb: mov dword ptr [esp + 0x10], 0x3f000000 */ W32((u32)(r_esp+0x10u), 0x3f000000u);
    /* 006e63d3: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 006e63d6: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e63d8: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e63da: mov dword ptr [esp + 0x14], 0x14000000 */ W32((u32)(r_esp+0x14u), 0x14000000u);
    /* 006e63e2: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e63e4: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e63e6: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e63e8: mov dword ptr [esp + 0x18], 0x14 */ W32((u32)(r_esp+0x18u), 0x14u);
    /* 006e63f0: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e63f2: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e63f4: lea eax, [ecx + eax + 0x1c] */ r_eax = (u32)(r_ecx+r_eax+0x1cu);
    /* 006e63f8: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 006e63fb: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 006e63ff: lea eax, [ebp - 0x60] */ r_eax = (u32)(r_ebp+0xffffffa0u);
    /* 006e6402: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 006e6406: call 0x6f3ba4 */ r_esp -= 4; W32(r_esp, 0x6e640bu); f_006f3ba4();
    /* 006e640b: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
L_006e6412:; BB(0x006e6412);
    /* 006e6412: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006e6419: jmp 0x6e64bb */ goto L_006e64bb;
L_006e641e:; BB(0x006e641e);
    /* 006e641e: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
    /* 006e6425: push 0x260 */ { u32 v = 0x260u; r_esp -= 4; W32(r_esp, v); }
    /* 006e642a: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e642fu); f_005caba4();
    /* 006e642f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e6430: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 006e6433: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e6435: je 0x6e64b4 */ if (fZ) goto L_006e64b4;
L_006e6437:; BB(0x006e6437);
    /* 006e6437: mov dword ptr [ebp - 0x40], 1 */ W32((u32)(r_ebp+0xffffffc0u), 0x1u);
    /* 006e643e: mov dword ptr [ebp - 4], 0x15 */ W32((u32)(r_ebp+0xfffffffcu), 0x15u);
    /* 006e6445: mov eax, dword ptr [0xaca344] */ r_eax = R32((u32)(0xaca344u));
    /* 006e644a: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e644d: mov edx, edi */ r_edx = r_edi;
    /* 006e644f: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e6452: movsx esi, word ptr [edx + ebx*4 + 0x136] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+r_ebx*4+0x136u));
    /* 006e645a: add esp, -0x1c */ {  u32 a = r_esp; u32 b = 0xffffffe4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e645d: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 006e6460: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 006e6464: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 006e6467: mov eax, dword ptr [edi + 0xa4] */ r_eax = R32((u32)(r_edi+0xa4u));
    /* 006e646d: mov dword ptr [esp + 0x10], 0x3f19999a */ W32((u32)(r_esp+0x10u), 0x3f19999au);
    /* 006e6475: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 006e6478: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e647a: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e647c: mov dword ptr [esp + 0x14], 0x14000000 */ W32((u32)(r_esp+0x14u), 0x14000000u);
    /* 006e6484: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6486: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6488: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e648a: mov dword ptr [esp + 0x18], 0x14 */ W32((u32)(r_esp+0x18u), 0x14u);
    /* 006e6492: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6494: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6496: lea eax, [ecx + eax + 0x1c] */ r_eax = (u32)(r_ecx+r_eax+0x1cu);
    /* 006e649a: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 006e649d: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 006e64a1: lea eax, [ebp - 0x60] */ r_eax = (u32)(r_ebp+0xffffffa0u);
    /* 006e64a4: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 006e64a8: call 0x6f3ba4 */ r_esp -= 4; W32(r_esp, 0x6e64adu); f_006f3ba4();
    /* 006e64ad: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
L_006e64b4:; BB(0x006e64b4);
    /* 006e64b4: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
L_006e64bb:; BB(0x006e64bb);
    /* 006e64bb: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006e64be: mov edx, dword ptr [eax + 0x130] */ r_edx = R32((u32)(r_eax+0x130u));
    /* 006e64c4: add dword ptr [ebp - 0x1c], 1 */ { u32 ad = (u32)(r_ebp+0xffffffe4u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 006e64c8: jmp 0x6e6011 */ goto L_006e6011;
L_006e64cd:; BB(0x006e64cd);
    /* 006e64cd: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 006e64d4: push 0x260 */ { u32 v = 0x260u; r_esp -= 4; W32(r_esp, v); }
    /* 006e64d9: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e64deu); f_005caba4();
    /* 006e64de: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e64df: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 006e64e2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e64e4: je 0x6e6563 */ if (fZ) goto L_006e6563;
L_006e64e6:; BB(0x006e64e6);
    /* 006e64e6: mov dword ptr [ebp - 0x3c], 1 */ W32((u32)(r_ebp+0xffffffc4u), 0x1u);
    /* 006e64ed: mov dword ptr [ebp - 4], 0x16 */ W32((u32)(r_ebp+0xfffffffcu), 0x16u);
    /* 006e64f4: mov eax, dword ptr [0xaca344] */ r_eax = R32((u32)(0xaca344u));
    /* 006e64f9: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e64fc: mov edx, edi */ r_edx = r_edi;
    /* 006e64fe: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e6501: movsx esi, word ptr [edx + ebx*4 + 0x136] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+r_ebx*4+0x136u));
    /* 006e6509: add esp, -0x1c */ {  u32 a = r_esp; u32 b = 0xffffffe4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e650c: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 006e650f: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 006e6513: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 006e6516: mov eax, dword ptr [edi + 0xa4] */ r_eax = R32((u32)(r_edi+0xa4u));
    /* 006e651c: mov dword ptr [esp + 0x10], 0x3f333333 */ W32((u32)(r_esp+0x10u), 0x3f333333u);
    /* 006e6524: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 006e6527: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6529: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e652b: mov dword ptr [esp + 0x14], 0x14000000 */ W32((u32)(r_esp+0x14u), 0x14000000u);
    /* 006e6533: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6535: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6537: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6539: mov dword ptr [esp + 0x18], 0x14 */ W32((u32)(r_esp+0x18u), 0x14u);
    /* 006e6541: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6543: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6545: lea eax, [ecx + eax + 0x1c] */ r_eax = (u32)(r_ecx+r_eax+0x1cu);
    /* 006e6549: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 006e654c: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 006e6550: lea eax, [ebp - 0x60] */ r_eax = (u32)(r_ebp+0xffffffa0u);
    /* 006e6553: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 006e6557: call 0x6f3ba4 */ r_esp -= 4; W32(r_esp, 0x6e655cu); f_006f3ba4();
    /* 006e655c: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_006e6563:; BB(0x006e6563);
    /* 006e6563: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006e656a: jmp 0x6e64bb */ goto L_006e64bb;
L_006e656f:; BB(0x006e656f);
    /* 006e656f: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 006e6576: push 0x260 */ { u32 v = 0x260u; r_esp -= 4; W32(r_esp, v); }
    /* 006e657b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e6580u); f_005caba4();
    /* 006e6580: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e6581: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 006e6584: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e6586: je 0x6e6605 */ if (fZ) goto L_006e6605;
L_006e6588:; BB(0x006e6588);
    /* 006e6588: mov dword ptr [ebp - 0x38], 1 */ W32((u32)(r_ebp+0xffffffc8u), 0x1u);
    /* 006e658f: mov dword ptr [ebp - 4], 0x17 */ W32((u32)(r_ebp+0xfffffffcu), 0x17u);
    /* 006e6596: mov eax, dword ptr [0xaca344] */ r_eax = R32((u32)(0xaca344u));
    /* 006e659b: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e659e: mov edx, edi */ r_edx = r_edi;
    /* 006e65a0: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e65a3: movsx esi, word ptr [edx + ebx*4 + 0x136] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+r_ebx*4+0x136u));
    /* 006e65ab: add esp, -0x1c */ {  u32 a = r_esp; u32 b = 0xffffffe4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e65ae: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 006e65b1: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 006e65b5: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 006e65b8: mov eax, dword ptr [edi + 0xa4] */ r_eax = R32((u32)(r_edi+0xa4u));
    /* 006e65be: mov dword ptr [esp + 0x10], 0x3f19999a */ W32((u32)(r_esp+0x10u), 0x3f19999au);
    /* 006e65c6: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 006e65c9: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e65cb: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e65cd: mov dword ptr [esp + 0x14], 0x14000000 */ W32((u32)(r_esp+0x14u), 0x14000000u);
    /* 006e65d5: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e65d7: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e65d9: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e65db: mov dword ptr [esp + 0x18], 0x14 */ W32((u32)(r_esp+0x18u), 0x14u);
    /* 006e65e3: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e65e5: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e65e7: lea eax, [ecx + eax + 0x1c] */ r_eax = (u32)(r_ecx+r_eax+0x1cu);
    /* 006e65eb: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 006e65ee: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 006e65f2: lea eax, [ebp - 0x60] */ r_eax = (u32)(r_ebp+0xffffffa0u);
    /* 006e65f5: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 006e65f9: call 0x6f3ba4 */ r_esp -= 4; W32(r_esp, 0x6e65feu); f_006f3ba4();
    /* 006e65fe: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_006e6605:; BB(0x006e6605);
    /* 006e6605: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006e660c: jmp 0x6e64bb */ goto L_006e64bb;
L_006e6611:; BB(0x006e6611);
    /* 006e6611: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 006e6618: push 0x260 */ { u32 v = 0x260u; r_esp -= 4; W32(r_esp, v); }
    /* 006e661d: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e6622u); f_005caba4();
    /* 006e6622: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e6623: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 006e6626: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e6628: je 0x6e66a7 */ if (fZ) goto L_006e66a7;
L_006e662a:; BB(0x006e662a);
    /* 006e662a: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 006e6631: mov dword ptr [ebp - 4], 0x18 */ W32((u32)(r_ebp+0xfffffffcu), 0x18u);
    /* 006e6638: mov eax, dword ptr [0xaca344] */ r_eax = R32((u32)(0xaca344u));
    /* 006e663d: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e6640: mov edx, edi */ r_edx = r_edi;
    /* 006e6642: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e6645: movsx esi, word ptr [edx + ebx*4 + 0x136] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+r_ebx*4+0x136u));
    /* 006e664d: add esp, -0x1c */ {  u32 a = r_esp; u32 b = 0xffffffe4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e6650: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 006e6653: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 006e6657: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 006e665a: mov eax, dword ptr [edi + 0xa4] */ r_eax = R32((u32)(r_edi+0xa4u));
    /* 006e6660: mov dword ptr [esp + 0x10], 0x3f000000 */ W32((u32)(r_esp+0x10u), 0x3f000000u);
    /* 006e6668: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 006e666b: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e666d: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e666f: mov dword ptr [esp + 0x14], 0x14000000 */ W32((u32)(r_esp+0x14u), 0x14000000u);
    /* 006e6677: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6679: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e667b: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e667d: mov dword ptr [esp + 0x18], 0x14 */ W32((u32)(r_esp+0x18u), 0x14u);
    /* 006e6685: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6687: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6689: lea eax, [ecx + eax + 0x1c] */ r_eax = (u32)(r_ecx+r_eax+0x1cu);
    /* 006e668d: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 006e6690: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 006e6694: lea eax, [ebp - 0x60] */ r_eax = (u32)(r_ebp+0xffffffa0u);
    /* 006e6697: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 006e669b: call 0x6f3ba4 */ r_esp -= 4; W32(r_esp, 0x6e66a0u); f_006f3ba4();
    /* 006e66a0: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_006e66a7:; BB(0x006e66a7);
    /* 006e66a7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006e66ae: jmp 0x6e64bb */ goto L_006e64bb;
L_006e66b3:; BB(0x006e66b3);
    /* 006e66b3: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 006e66b6: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 006e66b9: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006e66bc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006e66be: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006e66c1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006e66c8: mov esp, ebp */ r_esp = r_ebp;
    /* 006e66ca: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e66cb: ret  */ FN_RET(0x006e6973); r_esp += 4; return;
L_006e6973:; BB(0x006e6973);
    /* 006e6973: add dword ptr [eax], eax */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 006e6975: add byte ptr [ebx + 0xa4b2], cl */ { u32 ad = (u32)(r_ebx+0xa4b2u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 006e697b: add bh, bh */ {  u32 a = (u8)(r_ebx>>8); u32 b = (u8)(r_ebx>>8); u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 006e697d: xor eax, 0xaca344 */ {  u32 a = r_eax; u32 b = 0xaca344u; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006e6982: lea ebx, [eax + eax] */ r_ebx = (u32)(r_eax+r_eax);
    /* 006e6985: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006e6987: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 006e6989: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006e698b: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006e698d: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 006e698f: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006e6991: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006e6993: lea eax, [ebx + esi + 0x1c] */ r_eax = (u32)(r_ebx+r_esi+0x1cu);
    /* 006e6997: lea ecx, [edi + 0x20] */ r_ecx = (u32)(r_edi+0x20u);
    /* 006e699a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006e699b: mov ecx, dword ptr [ebp - 0x98] */ r_ecx = R32((u32)(r_ebp+0xffffff68u));
    /* 006e69a1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e69a2: call 0x6f4554 */ r_esp -= 4; W32(r_esp, 0x6e69a7u); f_006f4554();
    /* 006e69a7: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
    /* 006e69ae: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006e69b5: jmp 0x6e5ffb */ goto L_006e5ffb;
L_006e69ba:; BB(0x006e69ba);
    /* 006e69ba: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 006e69bd: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 006e69c0: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006e69c3: mov eax, 1 */ r_eax = 0x1u;
    /* 006e69c8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006e69cb: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006e69d2: mov esp, ebp */ r_esp = r_ebp;
    /* 006e69d4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e69d5: ret  */ FN_RET(0x006e6973); r_esp += 4; return;
}

void f_006e69d8(void) /* sub_6E69D8 */
{
    FN_ENTER(0x006e69d8);
    /* 006e69d8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006e69d9: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006e69dc: mov eax, dword ptr [ecx + 0xcc] */ r_eax = R32((u32)(r_ecx+0xccu));
    /* 006e69e2: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 006e69e6: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 006e69e9: mov dword ptr [esp], 3 */ W32((u32)(r_esp), 0x3u);
    /* 006e69f0: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 006e69f4: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006e69f6: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 006e69f8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006e69fa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e69fb: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 006e69fd: push dword ptr [ecx + 0x1c] */ { u32 v = R32((u32)(r_ecx+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006e6a00: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006e6a02: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x6e6a05u); call_ind(t); }
    /* 006e6a05: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006e6a07: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e6a0a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e6a0b: ret 4 */ FN_RET(0x006e69d8); r_esp += 8; return;
}

void f_006e6a10(void) /* sub_6E6A10 */
{
    FN_ENTER(0x006e6a10);
    /* 006e6a10: mov dword ptr [0xa966f8], 0x3f800000 */ W32((u32)(0xa966f8u), 0x3f800000u);
    /* 006e6a1a: mov dword ptr [0xa966fc], 0x41000000 */ W32((u32)(0xa966fcu), 0x41000000u);
    /* 006e6a24: mov dword ptr [0xa96700], 0x3fc00000 */ W32((u32)(0xa96700u), 0x3fc00000u);
    /* 006e6a2e: ret  */ FN_RET(0x006e6a10); r_esp += 4; return;
}

void f_006e6a30(void) /* sub_6E6A30 */
{
    FN_ENTER(0x006e6a30);
    /* 006e6a30: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006e6a31: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006e6a33: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006e6a35: call 0x6e6a54 */ r_esp -= 4; W32(r_esp, 0x6e6a3au); f_006e6a54();
    /* 006e6a3a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006e6a3e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006e6a40: jne 0x6e6a46 */ if (!fZ) goto L_006e6a46;
L_006e6a42:; BB(0x006e6a42);
    /* 006e6a42: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006e6a43: ret 4 */ FN_RET(0x006e6a30); r_esp += 8; return;
L_006e6a46:; BB(0x006e6a46);
    /* 006e6a46: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006e6a47: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6e6a4cu); f_005c2f74();
    /* 006e6a4c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e6a4d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006e6a4e: ret 4 */ FN_RET(0x006e6a30); r_esp += 8; return;
}

void f_006e6a54(void) /* sub_6E6A54 */
{
    FN_ENTER(0x006e6a54);
    /* 006e6a54: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006e6a55: mov ebp, esp */ r_ebp = r_esp;
    /* 006e6a57: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006e6a59: push 0x8eef8c */ { u32 v = 0x8eef8cu; r_esp -= 4; W32(r_esp, v); }
    /* 006e6a5e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006e6a64: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e6a65: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006e6a6c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006e6a6f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006e6a72: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006e6a75: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006e6a78: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006e6a7b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006e6a7e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e6a81: mov dword ptr [ecx], 0xb3d6e8 */ W32((u32)(r_ecx), 0xb3d6e8u);
    /* 006e6a87: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006e6a8e: call 0x6de56c */ r_esp -= 4; W32(r_esp, 0x6e6a93u); f_006de56c();
    /* 006e6a93: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006e6a96: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006e6a9d: mov esp, ebp */ r_esp = r_ebp;
    /* 006e6a9f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e6aa0: ret  */ FN_RET(0x006e6a54); r_esp += 4; return;
}

void f_006e6aa4(void) /* sub_6E6AA4 */
{
    FN_ENTER(0x006e6aa4);
    /* 006e6aa4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006e6aa5: mov ebp, esp */ r_ebp = r_esp;
    /* 006e6aa7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006e6aa9: push 0x8eefa8 */ { u32 v = 0x8eefa8u; r_esp -= 4; W32(r_esp, v); }
    /* 006e6aae: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006e6ab4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e6ab5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006e6abc: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006e6abf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006e6ac2: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 006e6ac5: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 006e6ac8: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 006e6acb: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 006e6ace: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 006e6ad1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006e6ad8: mov eax, ecx */ r_eax = r_ecx;
    /* 006e6ada: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 006e6add: mov esi, dword ptr [ecx*8 + 0x96d6d0] */ r_esi = R32((u32)(r_ecx*8+0x96d6d0u));
    /* 006e6ae4: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006e6ae6: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 006e6ae8: mov dword ptr [eax], 0xb3d708 */ W32((u32)(r_eax), 0xb3d708u);
    /* 006e6aee: jbe 0x6e6b2c */ if ((fC||fZ)) goto L_006e6b2c;
L_006e6af0:; BB(0x006e6af0);
    /* 006e6af0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006e6af3: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 006e6af6: mov ebx, dword ptr [ecx + edx*4] */ r_ebx = R32((u32)(r_ecx+r_edx*4));
    /* 006e6af9: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 006e6afc: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e6afe: je 0x6e6b25 */ if (fZ) goto L_006e6b25;
L_006e6b00:; BB(0x006e6b00);
    /* 006e6b00: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 006e6b03: movzx ecx, word ptr [ebx + 8] */ r_ecx = (u32)R16((u32)(r_ebx+0x8u));
    /* 006e6b07: or ecx, 0xffff0001 */ {  u32 a = r_ecx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6b0d: mov word ptr [ebx + 8], cx */ W16((u32)(r_ebx+0x8u), (u16)r_ecx);
    /* 006e6b11: mov ebx, dword ptr [esi + 0x1c] */ r_ebx = R32((u32)(r_esi+0x1cu));
    /* 006e6b14: mov dword ptr [ebx + eax*2], 0 */ W32((u32)(r_ebx+r_eax*2), 0x0u);
    /* 006e6b1b: mov eax, dword ptr [esi + 0x24] */ r_eax = R32((u32)(r_esi+0x24u));
    /* 006e6b1e: mov esi, dword ptr [eax*8 + 0x96d6d0] */ r_esi = R32((u32)(r_eax*8+0x96d6d0u));
L_006e6b25:; BB(0x006e6b25);
    /* 006e6b25: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006e6b28: cmp edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 006e6b2a: jb 0x6e6af0 */ if (fC) goto L_006e6af0;
L_006e6b2c:; BB(0x006e6b2c);
    /* 006e6b2c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006e6b2f: push dword ptr [eax + 0x20] */ { u32 v = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 006e6b32: call 0x8148d4 */ r_esp -= 4; W32(r_esp, 0x6e6b37u); f_008148d4();
    /* 006e6b37: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006e6b3a: push dword ptr [eax + 0x1c] */ { u32 v = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006e6b3d: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x6e6b42u); f_00857e98();
    /* 006e6b42: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e6b45: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006e6b4c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006e6b4f: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x6e6b54u); f_008171e8();
    /* 006e6b54: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006e6b57: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006e6b59: jne 0x6e6b74 */ if (!fZ) goto L_006e6b74;
L_006e6b5b:; BB(0x006e6b5b);
    /* 006e6b5b: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e6b5e: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 006e6b61: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e6b64: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006e6b67: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006e6b6e: mov esp, ebp */ r_esp = r_ebp;
    /* 006e6b70: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e6b71: ret 4 */ FN_RET(0x006e6aa4); r_esp += 8; return;
L_006e6b74:; BB(0x006e6b74);
    /* 006e6b74: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006e6b77: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e6b78: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6e6b7du); f_005c2f74();
    /* 006e6b7d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e6b7e: jmp 0x6e6b5b */ goto L_006e6b5b;
}

void f_006e6b80(void) /* sub_6E6B80 */
{
    FN_ENTER(0x006e6b80);
    /* 006e6b80: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006e6b81: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006e6b83: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006e6b85: call 0x6e6ba4 */ r_esp -= 4; W32(r_esp, 0x6e6b8au); f_006e6ba4();
    /* 006e6b8a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006e6b8e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006e6b90: jne 0x6e6b96 */ if (!fZ) goto L_006e6b96;
L_006e6b92:; BB(0x006e6b92);
    /* 006e6b92: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006e6b93: ret 4 */ FN_RET(0x006e6b80); r_esp += 8; return;
L_006e6b96:; BB(0x006e6b96);
    /* 006e6b96: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006e6b97: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6e6b9cu); f_005c2f74();
    /* 006e6b9c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e6b9d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006e6b9e: ret 4 */ FN_RET(0x006e6b80); r_esp += 8; return;
}

void f_006e6ba4(void) /* sub_6E6BA4 */
{
    FN_ENTER(0x006e6ba4);
    /* 006e6ba4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006e6ba5: mov ebp, esp */ r_ebp = r_esp;
    /* 006e6ba7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006e6ba9: push 0x8eefc4 */ { u32 v = 0x8eefc4u; r_esp -= 4; W32(r_esp, v); }
    /* 006e6bae: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006e6bb4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e6bb5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006e6bbc: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006e6bbf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006e6bc2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006e6bc5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006e6bc8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006e6bcb: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006e6bce: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e6bd1: mov dword ptr [ecx], 0xb3d718 */ W32((u32)(r_ecx), 0xb3d718u);
    /* 006e6bd7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006e6bde: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x6e6be3u); f_008171e8();
    /* 006e6be3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006e6be6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006e6bed: mov esp, ebp */ r_esp = r_ebp;
    /* 006e6bef: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e6bf0: ret  */ FN_RET(0x006e6ba4); r_esp += 4; return;
}

void f_006e6bf4(void) /* sub_6E6BF4 */
{
    FN_ENTER(0x006e6bf4);
    /* 006e6bf4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006e6bf5: mov ebp, esp */ r_ebp = r_esp;
    /* 006e6bf7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006e6bf9: push 0x8eefec */ { u32 v = 0x8eefecu; r_esp -= 4; W32(r_esp, v); }
    /* 006e6bfe: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006e6c04: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e6c05: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006e6c0c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006e6c0f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006e6c12: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006e6c15: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006e6c18: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006e6c1b: push 0x14c */ { u32 v = 0x14cu; r_esp -= 4; W32(r_esp, v); }
    /* 006e6c20: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 006e6c27: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e6c2cu); f_005caba4();
    /* 006e6c2c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e6c2d: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006e6c30: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006e6c32: je 0x6e6c5d */ if (fZ) goto L_006e6c5d;
L_006e6c34:; BB(0x006e6c34);
    /* 006e6c34: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 006e6c3b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006e6c42: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 006e6c45: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 006e6c48: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006e6c4b: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e6c4e: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006e6c51: call 0x6e6c6c */ r_esp -= 4; W32(r_esp, 0x6e6c56u); f_006e6c6c();
    /* 006e6c56: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_006e6c5d:; BB(0x006e6c5d);
    /* 006e6c5d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006e6c60: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006e6c67: mov esp, ebp */ r_esp = r_ebp;
    /* 006e6c69: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e6c6a: ret  */ FN_RET(0x006e6bf4); r_esp += 4; return;
}

void f_006e6c6c(void) /* sub_6E6C6C */
{
    FN_ENTER(0x006e6c6c);
    /* 006e6c6c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006e6c6d: mov ebp, esp */ r_ebp = r_esp;
    /* 006e6c6f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006e6c71: push 0x8ef008 */ { u32 v = 0x8ef008u; r_esp -= 4; W32(r_esp, v); }
    /* 006e6c76: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006e6c7c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e6c7d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006e6c84: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006e6c87: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006e6c8a: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 006e6c8d: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 006e6c90: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 006e6c93: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 006e6c96: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 006e6c99: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006e6c9c: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006e6c9f: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 006e6ca2: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006e6ca5: call 0x6de7fc */ r_esp -= 4; W32(r_esp, 0x6e6caau); f_006de7fc();
    /* 006e6caa: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006e6cb1: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 006e6cb4: mov dword ptr [edi], 0xb3d6e8 */ W32((u32)(r_edi), 0xb3d6e8u);
    /* 006e6cba: lea ebx, [edi + 0xf0] */ r_ebx = (u32)(r_edi+0xf0u);
    /* 006e6cc0: mov esi, 0xb */ r_esi = 0xbu;
    /* 006e6cc5: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_006e6cc7:; BB(0x006e6cc7);
    /* 006e6cc7: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 006e6ccc: mov word ptr [ebx], ax */ W16((u32)(r_ebx), (u16)r_eax);
    /* 006e6ccf: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006e6cd1: mov word ptr [ebx + 2], dx */ W16((u32)(r_ebx+0x2u), (u16)r_edx);
    /* 006e6cd5: mov dword ptr [ebx + 4], ecx */ W32((u32)(r_ebx+0x4u), r_ecx);
    /* 006e6cd8: add ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006e6cdb: add esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_esi = r; fZ = (r == 0); }
    /* 006e6cde: jne 0x6e6cc7 */ if (!fZ) goto L_006e6cc7;
L_006e6ce0:; BB(0x006e6ce0);
    /* 006e6ce0: mov dword ptr [edi + 0xec], 0 */ W32((u32)(r_edi+0xecu), 0x0u);
    /* 006e6cea: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006e6ced: mov eax, dword ptr [0x9cf8ac] */ r_eax = R32((u32)(0x9cf8acu));
    /* 006e6cf2: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 006e6cf5: call 0x6e6dc8 */ r_esp -= 4; W32(r_esp, 0x6e6cfau); f_006e6dc8();
    /* 006e6cfa: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006e6cfd: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006e6d00: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 006e6d02: mov ebx, dword ptr [eax + 4] */ r_ebx = R32((u32)(r_eax+0x4u));
    /* 006e6d05: mov esi, dword ptr [eax + 8] */ r_esi = R32((u32)(r_eax+0x8u));
    /* 006e6d08: mov edi, dword ptr [eax + 0xc] */ r_edi = R32((u32)(r_eax+0xcu));
    /* 006e6d0b: add edx, 0xec */ {  u32 a = r_edx; u32 b = 0xecu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006e6d11: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 006e6d13: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 006e6d16: mov dword ptr [edx + 4], ebx */ W32((u32)(r_edx+0x4u), r_ebx);
    /* 006e6d19: mov dword ptr [edx + 8], esi */ W32((u32)(r_edx+0x8u), r_esi);
    /* 006e6d1c: mov dword ptr [edx + 0xc], edi */ W32((u32)(r_edx+0xcu), r_edi);
    /* 006e6d1f: mov dword ptr [edx + 0x10], ecx */ W32((u32)(r_edx+0x10u), r_ecx);
    /* 006e6d22: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 006e6d25: mov dword ptr [edx + 0x14], ecx */ W32((u32)(r_edx+0x14u), r_ecx);
    /* 006e6d28: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 006e6d2b: mov dword ptr [edx + 0x18], ecx */ W32((u32)(r_edx+0x18u), r_ecx);
    /* 006e6d2e: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 006e6d31: mov dword ptr [edx + 0x1c], ecx */ W32((u32)(r_edx+0x1cu), r_ecx);
    /* 006e6d34: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 006e6d37: mov dword ptr [edx + 0x20], ecx */ W32((u32)(r_edx+0x20u), r_ecx);
    /* 006e6d3a: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 006e6d3d: mov dword ptr [edx + 0x24], ecx */ W32((u32)(r_edx+0x24u), r_ecx);
    /* 006e6d40: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 006e6d43: mov dword ptr [edx + 0x28], ecx */ W32((u32)(r_edx+0x28u), r_ecx);
    /* 006e6d46: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 006e6d49: mov dword ptr [edx + 0x2c], ecx */ W32((u32)(r_edx+0x2cu), r_ecx);
    /* 006e6d4c: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 006e6d4f: mov dword ptr [edx + 0x30], ecx */ W32((u32)(r_edx+0x30u), r_ecx);
    /* 006e6d52: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 006e6d55: mov dword ptr [edx + 0x34], ecx */ W32((u32)(r_edx+0x34u), r_ecx);
    /* 006e6d58: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 006e6d5b: mov dword ptr [edx + 0x38], ecx */ W32((u32)(r_edx+0x38u), r_ecx);
    /* 006e6d5e: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 006e6d61: mov dword ptr [edx + 0x3c], ecx */ W32((u32)(r_edx+0x3cu), r_ecx);
    /* 006e6d64: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 006e6d67: mov dword ptr [edx + 0x40], ecx */ W32((u32)(r_edx+0x40u), r_ecx);
    /* 006e6d6a: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 006e6d6d: mov dword ptr [edx + 0x44], ecx */ W32((u32)(r_edx+0x44u), r_ecx);
    /* 006e6d70: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 006e6d73: mov dword ptr [edx + 0x48], ecx */ W32((u32)(r_edx+0x48u), r_ecx);
    /* 006e6d76: mov ecx, dword ptr [eax + 0x4c] */ r_ecx = R32((u32)(r_eax+0x4cu));
    /* 006e6d79: mov dword ptr [edx + 0x4c], ecx */ W32((u32)(r_edx+0x4cu), r_ecx);
    /* 006e6d7c: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 006e6d7f: mov dword ptr [edx + 0x50], ecx */ W32((u32)(r_edx+0x50u), r_ecx);
    /* 006e6d82: mov ecx, dword ptr [eax + 0x54] */ r_ecx = R32((u32)(r_eax+0x54u));
    /* 006e6d85: mov eax, dword ptr [eax + 0x58] */ r_eax = R32((u32)(r_eax+0x58u));
    /* 006e6d88: mov dword ptr [edx + 0x54], ecx */ W32((u32)(r_edx+0x54u), r_ecx);
    /* 006e6d8b: mov dword ptr [edx + 0x58], eax */ W32((u32)(r_edx+0x58u), r_eax);
    /* 006e6d8e: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006e6d91: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 006e6d94: mov dword ptr [edx + 0x148], 0 */ W32((u32)(r_edx+0x148u), 0x0u);
    /* 006e6d9e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006e6da0: je 0x6e6dad */ if (fZ) goto L_006e6dad;
L_006e6da2:; BB(0x006e6da2);
    /* 006e6da2: movzx eax, word ptr [eax + 0x1c] */ r_eax = (u32)R16((u32)(r_eax+0x1cu));
    /* 006e6da6: mov word ptr [edx + 0xb4], ax */ W16((u32)(r_edx+0xb4u), (u16)r_eax);
L_006e6dad:; BB(0x006e6dad);
    /* 006e6dad: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e6db0: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 006e6db3: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e6db6: mov eax, edx */ r_eax = r_edx;
    /* 006e6db8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006e6dbb: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006e6dc2: mov esp, ebp */ r_esp = r_ebp;
    /* 006e6dc4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e6dc5: ret 0x10 */ FN_RET(0x006e6c6c); r_esp += 20; return;
}

void f_006e6dc8(void) /* sub_6E6DC8 */
{
    FN_ENTER(0x006e6dc8);
    /* 006e6dc8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006e6dc9: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006e6dcc: mov edi, ecx */ r_edi = r_ecx;
    /* 006e6dce: movsx eax, word ptr [edi + 0x78] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x78u));
    /* 006e6dd2: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006e6dd7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e6dd8: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 006e6dda: call 0x6ded14 */ r_esp -= 4; W32(r_esp, 0x6e6ddfu); f_006ded14();
    /* 006e6ddf: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e6de2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006e6de4: mov dword ptr [edi + 0x88], edx */ W32((u32)(r_edi+0x88u), r_edx);
    /* 006e6dea: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 006e6ded: mov dword ptr [edi + 0x8c], edx */ W32((u32)(r_edi+0x8cu), r_edx);
    /* 006e6df3: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 006e6df6: mov dword ptr [edi + 0x90], edx */ W32((u32)(r_edi+0x90u), r_edx);
    /* 006e6dfc: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 006e6dff: mov dword ptr [edi + 0x94], edx */ W32((u32)(r_edi+0x94u), r_edx);
    /* 006e6e05: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 006e6e08: mov dword ptr [edi + 0x98], edx */ W32((u32)(r_edi+0x98u), r_edx);
    /* 006e6e0e: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 006e6e11: mov dword ptr [edi + 0x9c], edx */ W32((u32)(r_edi+0x9cu), r_edx);
    /* 006e6e17: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 006e6e1a: mov dword ptr [edi + 0xa0], edx */ W32((u32)(r_edi+0xa0u), r_edx);
    /* 006e6e20: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 006e6e23: mov dword ptr [edi + 0xa4], edx */ W32((u32)(r_edi+0xa4u), r_edx);
    /* 006e6e29: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 006e6e2c: mov dword ptr [edi + 0xa8], edx */ W32((u32)(r_edi+0xa8u), r_edx);
    /* 006e6e32: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 006e6e35: mov dword ptr [edi + 0xac], edx */ W32((u32)(r_edi+0xacu), r_edx);
    /* 006e6e3b: mov eax, dword ptr [eax + 0x28] */ r_eax = R32((u32)(r_eax+0x28u));
    /* 006e6e3e: mov dword ptr [edi + 0xb0], eax */ W32((u32)(r_edi+0xb0u), r_eax);
    /* 006e6e44: movsx eax, word ptr [edi + 0x78] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x78u));
    /* 006e6e48: cmp eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006e6e4b: jl 0x6e6e82 */ if ((fS!=fO)) goto L_006e6e82;
L_006e6e4d:; BB(0x006e6e4d);
    /* 006e6e4d: call 0x687c48 */ r_esp -= 4; W32(r_esp, 0x6e6e52u); f_00687c48();
    /* 006e6e52: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e6e54: jne 0x6e6e7e */ if (!fZ) goto L_006e6e7e;
L_006e6e56:; BB(0x006e6e56);
    /* 006e6e56: movsx ecx, word ptr [0x9cf744] */ r_ecx = (u32)(i32)(i16)R16((u32)(0x9cf744u));
    /* 006e6e5d: movsx edx, word ptr [0x9cf746] */ r_edx = (u32)(i32)(i16)R16((u32)(0x9cf746u));
    /* 006e6e64: movsx eax, word ptr [edi + 0x78] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x78u));
    /* 006e6e68: imul edx, eax */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_eax; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006e6e6b: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6e6d: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 006e6e70: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 006e6e73: fstp dword ptr [edi + 0x88] */ W_F32((u32)(r_edi+0x88u), ST(0)); FPOP();
    /* 006e6e79: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e6e7c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006e6e7d: ret  */ FN_RET(0x006e6dc8); r_esp += 4; return;
L_006e6e7e:; BB(0x006e6e7e);
    /* 006e6e7e: movsx eax, word ptr [edi + 0x78] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x78u));
L_006e6e82:; BB(0x006e6e82);
    /* 006e6e82: movsx edx, word ptr [edi + 0xac] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0xacu));
    /* 006e6e89: imul edx, eax */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_eax; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006e6e8c: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 006e6e90: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 006e6e94: fadd dword ptr [edi + 0x88] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x88u));
    /* 006e6e9a: fstp dword ptr [edi + 0x88] */ W_F32((u32)(r_edi+0x88u), ST(0)); FPOP();
    /* 006e6ea0: call 0x687c48 */ r_esp -= 4; W32(r_esp, 0x6e6ea5u); f_00687c48();
    /* 006e6ea5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e6ea7: je 0x6e6ebb */ if (fZ) goto L_006e6ebb;
L_006e6ea9:; BB(0x006e6ea9);
    /* 006e6ea9: fld dword ptr [edi + 0x88] */ FPUSH(R_F32((u32)(r_edi+0x88u)));
    /* 006e6eaf: fmul dword ptr [0x9cf7c8] */ ST(0) = ST(0) * R_F32((u32)(0x9cf7c8u));
    /* 006e6eb5: fstp dword ptr [edi + 0x88] */ W_F32((u32)(r_edi+0x88u), ST(0)); FPOP();
L_006e6ebb:; BB(0x006e6ebb);
    /* 006e6ebb: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e6ebe: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006e6ebf: ret  */ FN_RET(0x006e6dc8); r_esp += 4; return;
}

void f_006e6ec0(void) /* sub_6E6EC0 */
{
    FN_ENTER(0x006e6ec0);
    /* 006e6ec0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006e6ec1: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006e6ec4: mov eax, dword ptr [ecx + 0x88] */ r_eax = R32((u32)(r_ecx+0x88u));
    /* 006e6eca: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 006e6ece: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 006e6ed1: mov dword ptr [esp], 4 */ W32((u32)(r_esp), 0x4u);
    /* 006e6ed8: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 006e6edc: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006e6ede: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 006e6ee0: push dword ptr [ecx + 0xb8] */ { u32 v = R32((u32)(r_ecx+0xb8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006e6ee6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e6ee7: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006e6ee9: push dword ptr [ecx + 0x1c] */ { u32 v = R32((u32)(r_ecx+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006e6eec: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006e6eee: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x6e6ef1u); call_ind(t); }
    /* 006e6ef1: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006e6ef3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e6ef6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e6ef7: ret 4 */ FN_RET(0x006e6ec0); r_esp += 8; return;
}

void f_006e6efc(void) /* sub_6E6EFC */
{
    FN_ENTER(0x006e6efc);
    /* 006e6efc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006e6efd: mov ebp, esp */ r_ebp = r_esp;
    /* 006e6eff: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006e6f01: push 0x8ef03e */ { u32 v = 0x8ef03eu; r_esp -= 4; W32(r_esp, v); }
    /* 006e6f06: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006e6f0c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e6f0d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006e6f14: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006e6f17: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006e6f1a: mov dword ptr [ebp - 0x2c], edi */ W32((u32)(r_ebp+0xffffffd4u), r_edi);
    /* 006e6f1d: mov dword ptr [ebp - 0x28], esi */ W32((u32)(r_ebp+0xffffffd8u), r_esi);
    /* 006e6f20: mov dword ptr [ebp - 0x24], ebx */ W32((u32)(r_ebp+0xffffffdcu), r_ebx);
    /* 006e6f23: movzx eax, word ptr [ecx + 0xb4] */ r_eax = (u32)R16((u32)(r_ecx+0xb4u));
    /* 006e6f2a: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 006e6f2d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e6f2e: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x6e6f33u); f_007b4d18();
    /* 006e6f33: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e6f34: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006e6f37: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 006e6f3a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e6f3c: je 0x6e72a0 */ if (fZ) goto L_006e72a0;
L_006e6f42:; BB(0x006e6f42);
    /* 006e6f42: mov eax, edx */ r_eax = r_edx;
    /* 006e6f44: mov edx, dword ptr [eax + 0xec] */ r_edx = R32((u32)(r_eax+0xecu));
    /* 006e6f4a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e6f4c: jne 0x6e6f6b */ if (!fZ) goto L_006e6f6b;
L_006e6f4e:; BB(0x006e6f4e);
    /* 006e6f4e: mov edx, eax */ r_edx = r_eax;
    /* 006e6f50: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 006e6f54: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006e6f59: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 006e6f5d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006e6f60: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006e6f67: mov esp, ebp */ r_esp = r_ebp;
    /* 006e6f69: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e6f6a: ret  */ FN_RET(0x006e6efc); r_esp += 4; return;
L_006e6f6b:; BB(0x006e6f6b);
    /* 006e6f6b: movzx edx, word ptr [eax + 0xf0] */ r_edx = (u32)R16((u32)(r_eax+0xf0u));
    /* 006e6f72: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e6f73: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x6e6f78u); f_007b4d18();
    /* 006e6f78: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006e6f7b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e6f7c: call 0x6ea700 */ r_esp -= 4; W32(r_esp, 0x6e6f81u); f_006ea700();
    /* 006e6f81: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e6f84: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e6f86: jne 0x6e6f96 */ if (!fZ) goto L_006e6f96;
L_006e6f88:; BB(0x006e6f88);
    /* 006e6f88: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006e6f8b: mov edx, dword ptr [eax + 0x148] */ r_edx = R32((u32)(r_eax+0x148u));
    /* 006e6f91: jmp 0x6e70f7 */ goto L_006e70f7;
L_006e6f96:; BB(0x006e6f96);
    /* 006e6f96: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e6f99: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e6f9a: call 0x6ea71c */ r_esp -= 4; W32(r_esp, 0x6e6f9fu); f_006ea71c();
    /* 006e6f9f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e6fa0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e6fa2: je 0x6e70ee */ if (fZ) goto L_006e70ee;
L_006e6fa8:; BB(0x006e6fa8);
    /* 006e6fa8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006e6fab: mov edx, dword ptr [eax + 0x148] */ r_edx = R32((u32)(r_eax+0x148u));
    /* 006e6fb1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e6fb3: jne 0x6e70f7 */ if (!fZ) goto L_006e70f7;
L_006e6fb9:; BB(0x006e6fb9);
    /* 006e6fb9: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 006e6fc0: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 006e6fc2: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e6fc7u); f_005caba4();
    /* 006e6fc7: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 006e6fca: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e6fcd: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 006e6fd0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e6fd2: je 0x6e71e9 */ if (fZ) goto L_006e71e9;
L_006e6fd8:; BB(0x006e6fd8);
    /* 006e6fd8: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 006e6fdf: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006e6fe6: mov ecx, eax */ r_ecx = r_eax;
    /* 006e6fe8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006e6feb: mov ebx, dword ptr [0xaca344] */ r_ebx = R32((u32)(0xaca344u));
    /* 006e6ff1: movsx edx, word ptr [eax + 0x78] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x78u));
    /* 006e6ff5: mov dword ptr [ebp - 0x44], ecx */ W32((u32)(r_ebp+0xffffffbcu), r_ecx);
    /* 006e6ff8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006e6ff9: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 006e6ffc: mov dword ptr [ebp - 0x38], ebx */ W32((u32)(r_ebp+0xffffffc8u), r_ebx);
    /* 006e6fff: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x6e7004u); f_008193cc();
    /* 006e7004: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 006e700b: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 006e700e: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e7011: mov dword ptr [eax], 0xb3d708 */ W32((u32)(r_eax), 0xb3d708u);
    /* 006e7017: mov edx, dword ptr [edi + 0x38] */ r_edx = R32((u32)(r_edi+0x38u));
    /* 006e701a: mov dword ptr [eax + 0x30], edx */ W32((u32)(r_eax+0x30u), r_edx);
    /* 006e701d: mov ecx, dword ptr [edi + 0x3c] */ r_ecx = R32((u32)(r_edi+0x3cu));
    /* 006e7020: mov dword ptr [eax + 0x34], ecx */ W32((u32)(r_eax+0x34u), r_ecx);
    /* 006e7023: mov ebx, dword ptr [edi + 0x40] */ r_ebx = R32((u32)(r_edi+0x40u));
    /* 006e7026: mov dword ptr [eax + 0x38], ebx */ W32((u32)(r_eax+0x38u), r_ebx);
    /* 006e7029: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 006e702b: mov word ptr [eax + 0x2c], si */ W16((u32)(r_eax+0x2cu), (u16)r_esi);
    /* 006e702f: movzx edx, word ptr [edi + 0x1c] */ r_edx = (u32)R16((u32)(r_edi+0x1cu));
    /* 006e7033: mov word ptr [eax + 0x2e], dx */ W16((u32)(r_eax+0x2eu), (u16)r_edx);
    /* 006e7037: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 006e703a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006e703c: jl 0x6e7292 */ if ((fS!=fO)) goto L_006e7292;
L_006e7042:; BB(0x006e7042);
    /* 006e7042: cmp edx, 0x1e */ {  u32 a = r_edx; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006e7045: jl 0x6e7055 */ if ((fS!=fO)) goto L_006e7055;
L_006e7047:; BB(0x006e7047);
    /* 006e7047: mov dword ptr [eax + 0x28], 0x1e */ W32((u32)(r_eax+0x28u), 0x1eu);
    /* 006e704e: mov edx, 0x1e */ r_edx = 0x1eu;
    /* 006e7053: jmp 0x6e7058 */ goto L_006e7058;
L_006e7055:; BB(0x006e7055);
    /* 006e7055: mov dword ptr [eax + 0x28], edx */ W32((u32)(r_eax+0x28u), r_edx);
L_006e7058:; BB(0x006e7058);
    /* 006e7058: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e7059: call 0x6e1cec */ r_esp -= 4; W32(r_esp, 0x6e705eu); f_006e1cec();
    /* 006e705e: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006e7061: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 006e7064: mov eax, dword ptr [eax*8 + 0x96d6d0] */ r_eax = R32((u32)(r_eax*8+0x96d6d0u));
    /* 006e706b: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006e706d: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006e706f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e7070: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6e7075u); f_008581c5();
    /* 006e7075: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e7078: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006e707b: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 006e707e: mov eax, dword ptr [edx + 0x24] */ r_eax = R32((u32)(r_edx+0x24u));
    /* 006e7081: mov ecx, dword ptr [eax*8 + 0x96d6d0] */ r_ecx = R32((u32)(r_eax*8+0x96d6d0u));
    /* 006e7088: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 006e708a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 006e708c: jbe 0x6e7158 */ if ((fC||fZ)) goto L_006e7158;
L_006e7092:; BB(0x006e7092);
    /* 006e7092: lea ecx, [edx + 0x30] */ r_ecx = (u32)(r_edx+0x30u);
    /* 006e7095: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
L_006e7098:; BB(0x006e7098);
    /* 006e7098: mov eax, dword ptr [eax*8 + 0x96d6cc] */ r_eax = R32((u32)(r_eax*8+0x96d6ccu));
    /* 006e709f: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e70a2: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 006e70a4: lea edx, [ebx + ebx] */ r_edx = (u32)(r_ebx+r_ebx);
    /* 006e70a7: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006e70a9: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 006e70ac: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e70ae: push dword ptr [eax + ecx] */ { u32 v = R32((u32)(r_eax+r_ecx)); r_esp -= 4; W32(r_esp, v); }
    /* 006e70b1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006e70b2: call 0x50981c */ r_esp -= 4; W32(r_esp, 0x6e70b7u); f_0050981c();
    /* 006e70b7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e70ba: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006e70bd: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 006e70c0: mov dword ptr [edx + ebx*4], eax */ W32((u32)(r_edx+r_ebx*4), r_eax);
    /* 006e70c3: mov eax, dword ptr [ecx + 0x1c] */ r_eax = R32((u32)(r_ecx+0x1cu));
    /* 006e70c6: mov ecx, dword ptr [eax + ebx*4] */ r_ecx = R32((u32)(r_eax+r_ebx*4));
    /* 006e70c9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e70cb: je 0x6e70da */ if (fZ) goto L_006e70da;
L_006e70cd:; BB(0x006e70cd);
    /* 006e70cd: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 006e70d0: movzx edx, word ptr [eax + 0x2e] */ r_edx = (u32)R16((u32)(r_eax+0x2eu));
    /* 006e70d4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e70d5: call 0x508f14 */ r_esp -= 4; W32(r_esp, 0x6e70dau); f_00508f14();
L_006e70da:; BB(0x006e70da);
    /* 006e70da: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 006e70dd: mov eax, dword ptr [eax + 0x24] */ r_eax = R32((u32)(r_eax+0x24u));
    /* 006e70e0: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006e70e3: cmp ebx, dword ptr [eax*8 + 0x96d6d0] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_eax*8+0x96d6d0u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 006e70ea: jb 0x6e7098 */ if (fC) goto L_006e7098;
L_006e70ec:; BB(0x006e70ec);
    /* 006e70ec: jmp 0x6e7158 */ goto L_006e7158;
L_006e70ee:; BB(0x006e70ee);
    /* 006e70ee: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006e70f1: mov edx, dword ptr [eax + 0x148] */ r_edx = R32((u32)(r_eax+0x148u));
L_006e70f7:; BB(0x006e70f7);
    /* 006e70f7: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006e70fa: mov dword ptr [eax + 0x148], edx */ W32((u32)(r_eax+0x148u), r_edx);
    /* 006e7100: cmp edx, 0x1e */ {  u32 a = r_edx; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006e7103: jle 0x6e7141 */ if ((fZ||fS!=fO)) goto L_006e7141;
L_006e7105:; BB(0x006e7105);
    /* 006e7105: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e7108: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e710a: je 0x6e7131 */ if (fZ) goto L_006e7131;
L_006e710c:; BB(0x006e710c);
    /* 006e710c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e710d: call 0x6ea700 */ r_esp -= 4; W32(r_esp, 0x6e7112u); f_006ea700();
    /* 006e7112: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e7113: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e7115: je 0x6e7131 */ if (fZ) goto L_006e7131;
L_006e7117:; BB(0x006e7117);
    /* 006e7117: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e711a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e711b: call 0x6ea71c */ r_esp -= 4; W32(r_esp, 0x6e7120u); f_006ea71c();
    /* 006e7120: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e7121: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e7123: je 0x6e7131 */ if (fZ) goto L_006e7131;
L_006e7125:; BB(0x006e7125);
    /* 006e7125: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006e7128: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e712b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e712c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006e712e: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x6e7131u); call_ind(t); }
L_006e7131:; BB(0x006e7131);
    /* 006e7131: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006e7134: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 006e7138: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006e713d: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_006e7141:; BB(0x006e7141);
    /* 006e7141: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 006e7144: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 006e7147: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006e714a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006e714d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006e7154: mov esp, ebp */ r_esp = r_ebp;
    /* 006e7156: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e7157: ret  */ FN_RET(0x006e6efc); r_esp += 4; return;
L_006e7158:; BB(0x006e7158);
    /* 006e7158: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e715a: je 0x6e7257 */ if (fZ) goto L_006e7257;
L_006e7160:; BB(0x006e7160);
    /* 006e7160: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e7163: je 0x6e7237 */ if (fZ) goto L_006e7237;
L_006e7169:; BB(0x006e7169);
    /* 006e7169: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006e716c: jl 0x6e71e2 */ if ((fS!=fO)) goto L_006e71e2;
L_006e716e:; BB(0x006e716e);
    /* 006e716e: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006e7171: jle 0x6e71b0 */ if ((fZ||fS!=fO)) goto L_006e71b0;
L_006e7173:; BB(0x006e7173);
    /* 006e7173: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e7176: jne 0x6e71fe */ if (!fZ) goto L_006e71fe;
L_006e717c:; BB(0x006e717c);
    /* 006e717c: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 006e717f: lea ecx, [eax + 0x30] */ r_ecx = (u32)(r_eax+0x30u);
    /* 006e7182: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006e7184: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e7185: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e7186: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006e7187: push 0x93 */ { u32 v = 0x93u; r_esp -= 4; W32(r_esp, v); }
    /* 006e718c: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x6e7191u); f_00814298();
    /* 006e7191: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e7194: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006e7197: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 006e719a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006e719c: jl 0x6e71e2 */ if ((fS!=fO)) goto L_006e71e2;
L_006e719e:; BB(0x006e719e);
    /* 006e719e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006e71a0: push 0xfffffdb0 */ { u32 v = 0xfffffdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 006e71a5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e71a6: call 0x814664 */ r_esp -= 4; W32(r_esp, 0x6e71abu); f_00814664();
    /* 006e71ab: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e71ae: jmp 0x6e71e2 */ goto L_006e71e2;
L_006e71b0:; BB(0x006e71b0);
    /* 006e71b0: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 006e71b3: lea ecx, [eax + 0x30] */ r_ecx = (u32)(r_eax+0x30u);
    /* 006e71b6: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006e71b8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e71b9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e71ba: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006e71bb: push 0x93 */ { u32 v = 0x93u; r_esp -= 4; W32(r_esp, v); }
    /* 006e71c0: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x6e71c5u); f_00814298();
    /* 006e71c5: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e71c8: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006e71cb: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 006e71ce: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006e71d0: jl 0x6e71e2 */ if ((fS!=fO)) goto L_006e71e2;
L_006e71d2:; BB(0x006e71d2);
    /* 006e71d2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006e71d4: push 0xfffffe80 */ { u32 v = 0xfffffe80u; r_esp -= 4; W32(r_esp, v); }
    /* 006e71d9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e71da: call 0x814664 */ r_esp -= 4; W32(r_esp, 0x6e71dfu); f_00814664();
    /* 006e71df: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006e71e2:; BB(0x006e71e2);
    /* 006e71e2: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_006e71e9:; BB(0x006e71e9);
    /* 006e71e9: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006e71f0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006e71f3: mov edx, dword ptr [eax + 0x148] */ r_edx = R32((u32)(r_eax+0x148u));
    /* 006e71f9: jmp 0x6e70f7 */ goto L_006e70f7;
L_006e71fe:; BB(0x006e71fe);
    /* 006e71fe: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e7201: jne 0x6e71e2 */ if (!fZ) goto L_006e71e2;
L_006e7203:; BB(0x006e7203);
    /* 006e7203: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 006e7206: lea ecx, [eax + 0x30] */ r_ecx = (u32)(r_eax+0x30u);
    /* 006e7209: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006e720b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e720c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e720d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006e720e: push 0x93 */ { u32 v = 0x93u; r_esp -= 4; W32(r_esp, v); }
    /* 006e7213: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x6e7218u); f_00814298();
    /* 006e7218: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e721b: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006e721e: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 006e7221: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006e7223: jl 0x6e71e2 */ if ((fS!=fO)) goto L_006e71e2;
L_006e7225:; BB(0x006e7225);
    /* 006e7225: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006e7227: push 0xffffff00 */ { u32 v = 0xffffff00u; r_esp -= 4; W32(r_esp, v); }
    /* 006e722c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e722d: call 0x814664 */ r_esp -= 4; W32(r_esp, 0x6e7232u); f_00814664();
    /* 006e7232: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e7235: jmp 0x6e71e2 */ goto L_006e71e2;
L_006e7237:; BB(0x006e7237);
    /* 006e7237: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 006e723a: lea ecx, [eax + 0x30] */ r_ecx = (u32)(r_eax+0x30u);
    /* 006e723d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006e723f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e7240: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e7241: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006e7242: push 0x93 */ { u32 v = 0x93u; r_esp -= 4; W32(r_esp, v); }
    /* 006e7247: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x6e724cu); f_00814298();
    /* 006e724c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e724f: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006e7252: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 006e7255: jmp 0x6e71e2 */ goto L_006e71e2;
L_006e7257:; BB(0x006e7257);
    /* 006e7257: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 006e725a: lea ecx, [eax + 0x30] */ r_ecx = (u32)(r_eax+0x30u);
    /* 006e725d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006e725f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e7260: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e7261: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006e7262: push 0x93 */ { u32 v = 0x93u; r_esp -= 4; W32(r_esp, v); }
    /* 006e7267: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x6e726cu); f_00814298();
    /* 006e726c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e726f: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006e7272: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 006e7275: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006e7277: jl 0x6e71e2 */ if ((fS!=fO)) goto L_006e71e2;
L_006e727d:; BB(0x006e727d);
    /* 006e727d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006e727f: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 006e7284: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e7285: call 0x814664 */ r_esp -= 4; W32(r_esp, 0x6e728au); f_00814664();
    /* 006e728a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e728d: jmp 0x6e71e2 */ goto L_006e71e2;
L_006e7292:; BB(0x006e7292);
    /* 006e7292: mov dword ptr [eax + 0x28], 0 */ W32((u32)(r_eax+0x28u), 0x0u);
    /* 006e7299: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006e729b: jmp 0x6e7058 */ goto L_006e7058;
L_006e72a0:; BB(0x006e72a0);
    /* 006e72a0: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 006e72a4: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006e72a9: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 006e72ad: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006e72b0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006e72b7: mov esp, ebp */ r_esp = r_ebp;
    /* 006e72b9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e72ba: ret  */ FN_RET(0x006e6efc); r_esp += 4; return;
}

void f_006e6f4d(void)
{
    FN_ENTER(0x006e6f4d);
    /* 006e6f4d: sbb eax, 0xb70fd08b */ { u32 c = fC; u32 a = r_eax; u32 b = 0xb70fd08bu; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 006e6f52: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006e6f53: or byte ptr [0xffff0001], cl */ { u32 ad = (u32)(0xffff0001u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a | b) & 0xffu; W8(ad, r); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006e6f59: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 006e6f5d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006e6f60: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006e6f67: mov esp, ebp */ r_esp = r_ebp;
    /* 006e6f69: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e6f6a: ret  */ FN_RET(0x006e6f4d); r_esp += 4; return;
}

void f_006e6f67(void)
{
    FN_ENTER(0x006e6f67);
    /* 006e6f67: mov esp, ebp */ r_esp = r_ebp;
    /* 006e6f69: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e6f6a: ret  */ FN_RET(0x006e6f67); r_esp += 4; return;
}

void f_006e6f68(void)
{
    FN_ENTER(0x006e6f68);
    /* 006e6f68: in eax, 0x5d */ UNSUP(0x006e6f68, "in eax, 0x5d");
    /* 006e6f6a: ret  */ FN_RET(0x006e6f68); r_esp += 4; return;
}

void f_006e6f69(void)
{
    FN_ENTER(0x006e6f69);
    /* 006e6f69: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e6f6a: ret  */ FN_RET(0x006e6f69); r_esp += 4; return;
}

void f_006e6f6c(void)
{
    FN_ENTER(0x006e6f6c);
    /* 006e6f6c: mov bh, 0x90 */ r_ebx = (r_ebx & 0xffff00ffu) | (((0x90u) & 0xffu) << 8);
    /* 006e6f6e: lock add byte ptr [eax], al */ UNSUP(0x006e6f6e, "lock add byte ptr [eax], al");
    /* 006e6f71: add byte ptr [edx - 0x18], dl */ { u32 ad = (u32)(r_edx+0xffffffe8u);  u32 a = R8(ad); u32 b = (u8)r_edx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 006e6f74: mov al, byte ptr [0x89000cdd] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(0x89000cddu))) & 0xffu);
    /* 006e6f79: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 006e6f7a: call 0x37ee57cf */ r_esp -= 4; W32(r_esp, 0x6e6f7fu); f_37ee57cf();
    /* 006e6f7f: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 006e6f81: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e6f84: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e6f86: jne 0x6e6f96 */ if (!fZ) goto L_006e6f96;
L_006e6f88:; BB(0x006e6f88);
    /* 006e6f88: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006e6f8b: mov edx, dword ptr [eax + 0x148] */ r_edx = R32((u32)(r_eax+0x148u));
    /* 006e6f91: jmp 0x6e70f7 */ goto L_006e70f7;
L_006e6f96:; BB(0x006e6f96);
    /* 006e6f96: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e6f99: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e6f9a: call 0x6ea71c */ r_esp -= 4; W32(r_esp, 0x6e6f9fu); f_006ea71c();
    /* 006e6f9f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e6fa0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e6fa2: je 0x6e70ee */ if (fZ) goto L_006e70ee;
L_006e6fa8:; BB(0x006e6fa8);
    /* 006e6fa8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006e6fab: mov edx, dword ptr [eax + 0x148] */ r_edx = R32((u32)(r_eax+0x148u));
    /* 006e6fb1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e6fb3: jne 0x6e70f7 */ if (!fZ) goto L_006e70f7;
L_006e6fb9:; BB(0x006e6fb9);
    /* 006e6fb9: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 006e6fc0: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 006e6fc2: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e6fc7u); f_005caba4();
    /* 006e6fc7: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 006e6fca: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e6fcd: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 006e6fd0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e6fd2: je 0x6e71e9 */ if (fZ) goto L_006e71e9;
L_006e6fd8:; BB(0x006e6fd8);
    /* 006e6fd8: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 006e6fdf: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006e6fe6: mov ecx, eax */ r_ecx = r_eax;
    /* 006e6fe8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006e6feb: mov ebx, dword ptr [0xaca344] */ r_ebx = R32((u32)(0xaca344u));
    /* 006e6ff1: movsx edx, word ptr [eax + 0x78] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x78u));
    /* 006e6ff5: mov dword ptr [ebp - 0x44], ecx */ W32((u32)(r_ebp+0xffffffbcu), r_ecx);
    /* 006e6ff8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006e6ff9: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 006e6ffc: mov dword ptr [ebp - 0x38], ebx */ W32((u32)(r_ebp+0xffffffc8u), r_ebx);
    /* 006e6fff: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x6e7004u); f_008193cc();
    /* 006e7004: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 006e700b: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 006e700e: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e7011: mov dword ptr [eax], 0xb3d708 */ W32((u32)(r_eax), 0xb3d708u);
    /* 006e7017: mov edx, dword ptr [edi + 0x38] */ r_edx = R32((u32)(r_edi+0x38u));
    /* 006e701a: mov dword ptr [eax + 0x30], edx */ W32((u32)(r_eax+0x30u), r_edx);
    /* 006e701d: mov ecx, dword ptr [edi + 0x3c] */ r_ecx = R32((u32)(r_edi+0x3cu));
    /* 006e7020: mov dword ptr [eax + 0x34], ecx */ W32((u32)(r_eax+0x34u), r_ecx);
    /* 006e7023: mov ebx, dword ptr [edi + 0x40] */ r_ebx = R32((u32)(r_edi+0x40u));
    /* 006e7026: mov dword ptr [eax + 0x38], ebx */ W32((u32)(r_eax+0x38u), r_ebx);
    /* 006e7029: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 006e702b: mov word ptr [eax + 0x2c], si */ W16((u32)(r_eax+0x2cu), (u16)r_esi);
    /* 006e702f: movzx edx, word ptr [edi + 0x1c] */ r_edx = (u32)R16((u32)(r_edi+0x1cu));
    /* 006e7033: mov word ptr [eax + 0x2e], dx */ W16((u32)(r_eax+0x2eu), (u16)r_edx);
    /* 006e7037: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 006e703a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006e703c: jl 0x6e7292 */ if ((fS!=fO)) goto L_006e7292;
L_006e7042:; BB(0x006e7042);
    /* 006e7042: cmp edx, 0x1e */ {  u32 a = r_edx; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006e7045: jl 0x6e7055 */ if ((fS!=fO)) goto L_006e7055;
L_006e7047:; BB(0x006e7047);
    /* 006e7047: mov dword ptr [eax + 0x28], 0x1e */ W32((u32)(r_eax+0x28u), 0x1eu);
    /* 006e704e: mov edx, 0x1e */ r_edx = 0x1eu;
    /* 006e7053: jmp 0x6e7058 */ goto L_006e7058;
L_006e7055:; BB(0x006e7055);
    /* 006e7055: mov dword ptr [eax + 0x28], edx */ W32((u32)(r_eax+0x28u), r_edx);
L_006e7058:; BB(0x006e7058);
    /* 006e7058: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e7059: call 0x6e1cec */ r_esp -= 4; W32(r_esp, 0x6e705eu); f_006e1cec();
    /* 006e705e: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006e7061: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 006e7064: mov eax, dword ptr [eax*8 + 0x96d6d0] */ r_eax = R32((u32)(r_eax*8+0x96d6d0u));
    /* 006e706b: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006e706d: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006e706f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e7070: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6e7075u); f_008581c5();
    /* 006e7075: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e7078: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006e707b: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 006e707e: mov eax, dword ptr [edx + 0x24] */ r_eax = R32((u32)(r_edx+0x24u));
    /* 006e7081: mov ecx, dword ptr [eax*8 + 0x96d6d0] */ r_ecx = R32((u32)(r_eax*8+0x96d6d0u));
    /* 006e7088: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 006e708a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 006e708c: jbe 0x6e7158 */ if ((fC||fZ)) goto L_006e7158;
L_006e7092:; BB(0x006e7092);
    /* 006e7092: lea ecx, [edx + 0x30] */ r_ecx = (u32)(r_edx+0x30u);
    /* 006e7095: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
L_006e7098:; BB(0x006e7098);
    /* 006e7098: mov eax, dword ptr [eax*8 + 0x96d6cc] */ r_eax = R32((u32)(r_eax*8+0x96d6ccu));
    /* 006e709f: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e70a2: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 006e70a4: lea edx, [ebx + ebx] */ r_edx = (u32)(r_ebx+r_ebx);
    /* 006e70a7: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006e70a9: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 006e70ac: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e70ae: push dword ptr [eax + ecx] */ { u32 v = R32((u32)(r_eax+r_ecx)); r_esp -= 4; W32(r_esp, v); }
    /* 006e70b1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006e70b2: call 0x50981c */ r_esp -= 4; W32(r_esp, 0x6e70b7u); f_0050981c();
    /* 006e70b7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e70ba: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006e70bd: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 006e70c0: mov dword ptr [edx + ebx*4], eax */ W32((u32)(r_edx+r_ebx*4), r_eax);
    /* 006e70c3: mov eax, dword ptr [ecx + 0x1c] */ r_eax = R32((u32)(r_ecx+0x1cu));
    /* 006e70c6: mov ecx, dword ptr [eax + ebx*4] */ r_ecx = R32((u32)(r_eax+r_ebx*4));
    /* 006e70c9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e70cb: je 0x6e70da */ if (fZ) goto L_006e70da;
L_006e70cd:; BB(0x006e70cd);
    /* 006e70cd: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 006e70d0: movzx edx, word ptr [eax + 0x2e] */ r_edx = (u32)R16((u32)(r_eax+0x2eu));
    /* 006e70d4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e70d5: call 0x508f14 */ r_esp -= 4; W32(r_esp, 0x6e70dau); f_00508f14();
L_006e70da:; BB(0x006e70da);
    /* 006e70da: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 006e70dd: mov eax, dword ptr [eax + 0x24] */ r_eax = R32((u32)(r_eax+0x24u));
    /* 006e70e0: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006e70e3: cmp ebx, dword ptr [eax*8 + 0x96d6d0] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_eax*8+0x96d6d0u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 006e70ea: jb 0x6e7098 */ if (fC) goto L_006e7098;
L_006e70ec:; BB(0x006e70ec);
    /* 006e70ec: jmp 0x6e7158 */ goto L_006e7158;
L_006e70ee:; BB(0x006e70ee);
    /* 006e70ee: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006e70f1: mov edx, dword ptr [eax + 0x148] */ r_edx = R32((u32)(r_eax+0x148u));
L_006e70f7:; BB(0x006e70f7);
    /* 006e70f7: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006e70fa: mov dword ptr [eax + 0x148], edx */ W32((u32)(r_eax+0x148u), r_edx);
    /* 006e7100: cmp edx, 0x1e */ {  u32 a = r_edx; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006e7103: jle 0x6e7141 */ if ((fZ||fS!=fO)) goto L_006e7141;
L_006e7105:; BB(0x006e7105);
    /* 006e7105: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e7108: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e710a: je 0x6e7131 */ if (fZ) goto L_006e7131;
L_006e710c:; BB(0x006e710c);
    /* 006e710c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e710d: call 0x6ea700 */ r_esp -= 4; W32(r_esp, 0x6e7112u); f_006ea700();
    /* 006e7112: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e7113: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e7115: je 0x6e7131 */ if (fZ) goto L_006e7131;
L_006e7117:; BB(0x006e7117);
    /* 006e7117: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e711a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e711b: call 0x6ea71c */ r_esp -= 4; W32(r_esp, 0x6e7120u); f_006ea71c();
    /* 006e7120: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e7121: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e7123: je 0x6e7131 */ if (fZ) goto L_006e7131;
L_006e7125:; BB(0x006e7125);
    /* 006e7125: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006e7128: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e712b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e712c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006e712e: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x6e7131u); call_ind(t); }
L_006e7131:; BB(0x006e7131);
    /* 006e7131: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006e7134: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 006e7138: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006e713d: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_006e7141:; BB(0x006e7141);
    /* 006e7141: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 006e7144: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 006e7147: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006e714a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006e714d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006e7154: mov esp, ebp */ r_esp = r_ebp;
    /* 006e7156: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e7157: ret  */ FN_RET(0x006e6f6c); r_esp += 4; return;
L_006e7158:; BB(0x006e7158);
    /* 006e7158: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e715a: je 0x6e7257 */ if (fZ) goto L_006e7257;
L_006e7160:; BB(0x006e7160);
    /* 006e7160: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e7163: je 0x6e7237 */ if (fZ) goto L_006e7237;
L_006e7169:; BB(0x006e7169);
    /* 006e7169: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006e716c: jl 0x6e71e2 */ if ((fS!=fO)) goto L_006e71e2;
L_006e716e:; BB(0x006e716e);
    /* 006e716e: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006e7171: jle 0x6e71b0 */ if ((fZ||fS!=fO)) goto L_006e71b0;
L_006e7173:; BB(0x006e7173);
    /* 006e7173: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e7176: jne 0x6e71fe */ if (!fZ) goto L_006e71fe;
L_006e717c:; BB(0x006e717c);
    /* 006e717c: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 006e717f: lea ecx, [eax + 0x30] */ r_ecx = (u32)(r_eax+0x30u);
    /* 006e7182: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006e7184: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e7185: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e7186: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006e7187: push 0x93 */ { u32 v = 0x93u; r_esp -= 4; W32(r_esp, v); }
    /* 006e718c: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x6e7191u); f_00814298();
    /* 006e7191: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e7194: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006e7197: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 006e719a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006e719c: jl 0x6e71e2 */ if ((fS!=fO)) goto L_006e71e2;
L_006e719e:; BB(0x006e719e);
    /* 006e719e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006e71a0: push 0xfffffdb0 */ { u32 v = 0xfffffdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 006e71a5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e71a6: call 0x814664 */ r_esp -= 4; W32(r_esp, 0x6e71abu); f_00814664();
    /* 006e71ab: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e71ae: jmp 0x6e71e2 */ goto L_006e71e2;
L_006e71b0:; BB(0x006e71b0);
    /* 006e71b0: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 006e71b3: lea ecx, [eax + 0x30] */ r_ecx = (u32)(r_eax+0x30u);
    /* 006e71b6: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006e71b8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e71b9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e71ba: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006e71bb: push 0x93 */ { u32 v = 0x93u; r_esp -= 4; W32(r_esp, v); }
    /* 006e71c0: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x6e71c5u); f_00814298();
    /* 006e71c5: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e71c8: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006e71cb: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 006e71ce: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006e71d0: jl 0x6e71e2 */ if ((fS!=fO)) goto L_006e71e2;
L_006e71d2:; BB(0x006e71d2);
    /* 006e71d2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006e71d4: push 0xfffffe80 */ { u32 v = 0xfffffe80u; r_esp -= 4; W32(r_esp, v); }
    /* 006e71d9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e71da: call 0x814664 */ r_esp -= 4; W32(r_esp, 0x6e71dfu); f_00814664();
    /* 006e71df: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006e71e2:; BB(0x006e71e2);
    /* 006e71e2: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_006e71e9:; BB(0x006e71e9);
    /* 006e71e9: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006e71f0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006e71f3: mov edx, dword ptr [eax + 0x148] */ r_edx = R32((u32)(r_eax+0x148u));
    /* 006e71f9: jmp 0x6e70f7 */ goto L_006e70f7;
L_006e71fe:; BB(0x006e71fe);
    /* 006e71fe: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e7201: jne 0x6e71e2 */ if (!fZ) goto L_006e71e2;
L_006e7203:; BB(0x006e7203);
    /* 006e7203: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 006e7206: lea ecx, [eax + 0x30] */ r_ecx = (u32)(r_eax+0x30u);
    /* 006e7209: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006e720b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e720c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e720d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006e720e: push 0x93 */ { u32 v = 0x93u; r_esp -= 4; W32(r_esp, v); }
    /* 006e7213: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x6e7218u); f_00814298();
    /* 006e7218: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e721b: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006e721e: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 006e7221: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006e7223: jl 0x6e71e2 */ if ((fS!=fO)) goto L_006e71e2;
L_006e7225:; BB(0x006e7225);
    /* 006e7225: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006e7227: push 0xffffff00 */ { u32 v = 0xffffff00u; r_esp -= 4; W32(r_esp, v); }
    /* 006e722c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e722d: call 0x814664 */ r_esp -= 4; W32(r_esp, 0x6e7232u); f_00814664();
    /* 006e7232: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e7235: jmp 0x6e71e2 */ goto L_006e71e2;
L_006e7237:; BB(0x006e7237);
    /* 006e7237: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 006e723a: lea ecx, [eax + 0x30] */ r_ecx = (u32)(r_eax+0x30u);
    /* 006e723d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006e723f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e7240: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e7241: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006e7242: push 0x93 */ { u32 v = 0x93u; r_esp -= 4; W32(r_esp, v); }
    /* 006e7247: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x6e724cu); f_00814298();
    /* 006e724c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e724f: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006e7252: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 006e7255: jmp 0x6e71e2 */ goto L_006e71e2;
L_006e7257:; BB(0x006e7257);
    /* 006e7257: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 006e725a: lea ecx, [eax + 0x30] */ r_ecx = (u32)(r_eax+0x30u);
    /* 006e725d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006e725f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e7260: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e7261: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006e7262: push 0x93 */ { u32 v = 0x93u; r_esp -= 4; W32(r_esp, v); }
    /* 006e7267: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x6e726cu); f_00814298();
    /* 006e726c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e726f: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006e7272: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 006e7275: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006e7277: jl 0x6e71e2 */ if ((fS!=fO)) goto L_006e71e2;
L_006e727d:; BB(0x006e727d);
    /* 006e727d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006e727f: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 006e7284: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e7285: call 0x814664 */ r_esp -= 4; W32(r_esp, 0x6e728au); f_00814664();
    /* 006e728a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e728d: jmp 0x6e71e2 */ goto L_006e71e2;
L_006e7292:; BB(0x006e7292);
    /* 006e7292: mov dword ptr [eax + 0x28], 0 */ W32((u32)(r_eax+0x28u), 0x0u);
    /* 006e7299: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006e729b: jmp 0x6e7058 */ goto L_006e7058;
}

