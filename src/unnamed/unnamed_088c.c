#include "protos.h"

void f_0088c034(void) /* sub_88C034 */
{
    FN_ENTER(0x0088c034);
    /* 0088c034: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0088c035: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0088c036: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0088c037: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0088c038: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0088c03b: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 0088c03f: mov ebx, dword ptr [esp + 0x48] */ r_ebx = R32((u32)(r_esp+0x48u));
    /* 0088c043: mov esi, dword ptr [esp + 0x50] */ r_esi = R32((u32)(r_esp+0x50u));
    /* 0088c047: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0088c049: mov ebp, dword ptr [eax + 0x24] */ r_ebp = R32((u32)(r_eax+0x24u));
    /* 0088c04c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0088c04e: shr ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0088c051: add ebp, ecx */ {  u32 a = r_ebp; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0088c053: sar ebp, 1 */ { u32 c = (1u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebp = r;  } }
    /* 0088c055: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0088c057: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0088c059: jle 0x88c237 */ if ((fZ||fS!=fO)) goto L_0088c237;
L_0088c05f:; BB(0x0088c05f);
    /* 0088c05f: lea edi, [ebp - 5] */ r_edi = (u32)(r_ebp+0xfffffffbu);
    /* 0088c062: mov dword ptr [esp + 0x24], edi */ W32((u32)(r_esp+0x24u), r_edi);
    /* 0088c066: mov edi, dword ptr [esp + 0x44] */ r_edi = R32((u32)(r_esp+0x44u));
L_0088c06a:; BB(0x0088c06a);
    /* 0088c06a: mov eax, dword ptr [esp + 0x4c] */ r_eax = R32((u32)(r_esp+0x4cu));
    /* 0088c06e: cmp dword ptr [eax + ecx*4], 0 */ {  u32 a = R32((u32)(r_eax+r_ecx*4)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088c072: je 0x88c116 */ if (fZ) goto L_0088c116;
L_0088c078:; BB(0x0088c078);
    /* 0088c078: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088c07a: je 0x88c10d */ if (fZ) goto L_0088c10d;
L_0088c080:; BB(0x0088c080);
    /* 0088c080: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0088c082: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0088c084: jle 0x88c10d */ if ((fZ||fS!=fO)) goto L_0088c10d;
L_0088c08a:; BB(0x0088c08a);
    /* 0088c08a: cmp ebp, 5 */ {  u32 a = r_ebp; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088c08d: jl 0x88c0f1 */ if ((fS!=fO)) goto L_0088c0f1;
L_0088c08f:; BB(0x0088c08f);
    /* 0088c08f: mov dword ptr [esp + 0x18], ebp */ W32((u32)(r_esp+0x18u), r_ebp);
    /* 0088c093: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 0088c097: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
L_0088c09b:; BB(0x0088c09b);
    /* 0088c09b: mov ebp, dword ptr [ebx + ecx*4] */ r_ebp = R32((u32)(r_ebx+r_ecx*4));
    /* 0088c09e: mov edx, dword ptr [edi + ecx*4] */ r_edx = R32((u32)(r_edi+r_ecx*4));
    /* 0088c0a1: fld dword ptr [ebp + esi*4] */ FPUSH(R_F32((u32)(r_ebp+r_esi*4)));
    /* 0088c0a5: fadd dword ptr [edx + esi*4] */ ST(0) = ST(0) + R_F32((u32)(r_edx+r_esi*4));
    /* 0088c0a8: fstp dword ptr [ebp + esi*4] */ W_F32((u32)(r_ebp+r_esi*4), ST(0)); FPOP();
    /* 0088c0ac: mov ebp, dword ptr [ebx + ecx*4] */ r_ebp = R32((u32)(r_ebx+r_ecx*4));
    /* 0088c0af: mov edx, dword ptr [edi + ecx*4] */ r_edx = R32((u32)(r_edi+r_ecx*4));
    /* 0088c0b2: fld dword ptr [ebp + esi*4 + 4] */ FPUSH(R_F32((u32)(r_ebp+r_esi*4+0x4u)));
    /* 0088c0b6: fadd dword ptr [edx + esi*4 + 4] */ ST(0) = ST(0) + R_F32((u32)(r_edx+r_esi*4+0x4u));
    /* 0088c0ba: fstp dword ptr [ebp + esi*4 + 4] */ W_F32((u32)(r_ebp+r_esi*4+0x4u), ST(0)); FPOP();
    /* 0088c0be: mov ebp, dword ptr [ebx + ecx*4] */ r_ebp = R32((u32)(r_ebx+r_ecx*4));
    /* 0088c0c1: mov edx, dword ptr [edi + ecx*4] */ r_edx = R32((u32)(r_edi+r_ecx*4));
    /* 0088c0c4: fld dword ptr [ebp + esi*4 + 8] */ FPUSH(R_F32((u32)(r_ebp+r_esi*4+0x8u)));
    /* 0088c0c8: fadd dword ptr [edx + esi*4 + 8] */ ST(0) = ST(0) + R_F32((u32)(r_edx+r_esi*4+0x8u));
    /* 0088c0cc: fstp dword ptr [ebp + esi*4 + 8] */ W_F32((u32)(r_ebp+r_esi*4+0x8u), ST(0)); FPOP();
    /* 0088c0d0: mov ebp, dword ptr [ebx + ecx*4] */ r_ebp = R32((u32)(r_ebx+r_ecx*4));
    /* 0088c0d3: mov edx, dword ptr [edi + ecx*4] */ r_edx = R32((u32)(r_edi+r_ecx*4));
    /* 0088c0d6: fld dword ptr [ebp + esi*4 + 0xc] */ FPUSH(R_F32((u32)(r_ebp+r_esi*4+0xcu)));
    /* 0088c0da: fadd dword ptr [edx + esi*4 + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_edx+r_esi*4+0xcu));
    /* 0088c0de: fstp dword ptr [ebp + esi*4 + 0xc] */ W_F32((u32)(r_ebp+r_esi*4+0xcu), ST(0)); FPOP();
    /* 0088c0e2: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0088c0e5: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088c0e7: jle 0x88c09b */ if ((fZ||fS!=fO)) goto L_0088c09b;
L_0088c0e9:; BB(0x0088c0e9);
    /* 0088c0e9: mov ebp, dword ptr [esp + 0x18] */ r_ebp = R32((u32)(r_esp+0x18u));
    /* 0088c0ed: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
L_0088c0f1:; BB(0x0088c0f1);
    /* 0088c0f1: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
L_0088c0f5:; BB(0x0088c0f5);
    /* 0088c0f5: mov edx, dword ptr [ebx + ecx*4] */ r_edx = R32((u32)(r_ebx+r_ecx*4));
    /* 0088c0f8: mov eax, dword ptr [edi + ecx*4] */ r_eax = R32((u32)(r_edi+r_ecx*4));
    /* 0088c0fb: fld dword ptr [edx + esi*4] */ FPUSH(R_F32((u32)(r_edx+r_esi*4)));
    /* 0088c0fe: fadd dword ptr [eax + esi*4] */ ST(0) = ST(0) + R_F32((u32)(r_eax+r_esi*4));
    /* 0088c101: fstp dword ptr [edx + esi*4] */ W_F32((u32)(r_edx+r_esi*4), ST(0)); FPOP();
    /* 0088c104: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0088c105: cmp esi, ebp */ {  u32 a = r_esi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088c107: jl 0x88c0f5 */ if ((fS!=fO)) goto L_0088c0f5;
L_0088c109:; BB(0x0088c109);
    /* 0088c109: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
L_0088c10d:; BB(0x0088c10d);
    /* 0088c10d: mov eax, dword ptr [edi + ecx*4] */ r_eax = R32((u32)(r_edi+r_ecx*4));
    /* 0088c110: mov esi, edx */ r_esi = r_edx;
    /* 0088c112: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0088c113: mov dword ptr [edi + esi*4], eax */ W32((u32)(r_edi+r_esi*4), r_eax);
L_0088c116:; BB(0x0088c116);
    /* 0088c116: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0088c117: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 0088c11b: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088c11d: jl 0x88c06a */ if ((fS!=fO)) goto L_0088c06a;
L_0088c123:; BB(0x0088c123);
    /* 0088c123: mov esi, dword ptr [esp + 0x50] */ r_esi = R32((u32)(r_esp+0x50u));
    /* 0088c127: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 0088c12b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088c12d: je 0x88c237 */ if (fZ) goto L_0088c237;
L_0088c133:; BB(0x0088c133);
    /* 0088c133: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 0088c137: mov edi, dword ptr [esp + 0x54] */ r_edi = R32((u32)(r_esp+0x54u));
    /* 0088c13b: mov dword ptr [esp + 0x10], edi */ W32((u32)(r_esp+0x10u), r_edi);
    /* 0088c13f: mov edx, dword ptr [esp + 0x40] */ r_edx = R32((u32)(r_esp+0x40u));
    /* 0088c143: mov ecx, dword ptr [esp + 0x44] */ r_ecx = R32((u32)(r_esp+0x44u));
    /* 0088c147: mov dword ptr [esp + 0x14], 0x88bd40 */ W32((u32)(r_esp+0x14u), 0x88bd40u);
    /* 0088c14f: call 0x88c24c */ r_esp -= 4; W32(r_esp, 0x88c154u); f_0088c24c();
    /* 0088c154: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088c156: je 0x88c237 */ if (fZ) goto L_0088c237;
L_0088c15c:; BB(0x0088c15c);
    /* 0088c15c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0088c15e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0088c160: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0088c162: jle 0x88c237 */ if ((fZ||fS!=fO)) goto L_0088c237;
L_0088c168:; BB(0x0088c168);
    /* 0088c168: mov edi, dword ptr [esp + 0x4c] */ r_edi = R32((u32)(r_esp+0x4cu));
L_0088c16c:; BB(0x0088c16c);
    /* 0088c16c: cmp dword ptr [edi + edx*4], 0 */ {  u32 a = R32((u32)(r_edi+r_edx*4)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088c170: je 0x88c22e */ if (fZ) goto L_0088c22e;
L_0088c176:; BB(0x0088c176);
    /* 0088c176: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0088c178: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0088c17a: jle 0x88c22d */ if ((fZ||fS!=fO)) goto L_0088c22d;
L_0088c180:; BB(0x0088c180);
    /* 0088c180: cmp ebp, 5 */ {  u32 a = r_ebp; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088c183: jl 0x88c241 */ if ((fS!=fO)) goto L_0088c241;
L_0088c189:; BB(0x0088c189);
    /* 0088c189: lea ebx, [ecx + ecx] */ r_ebx = (u32)(r_ecx+r_ecx);
    /* 0088c18c: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0088c18e: add ebx, dword ptr [esp + 0x44] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esp+0x44u)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0088c192: mov dword ptr [esp + 0x1c], ebx */ W32((u32)(r_esp+0x1cu), r_ebx);
    /* 0088c196: mov dword ptr [esp + 0x18], ebp */ W32((u32)(r_esp+0x18u), r_ebp);
    /* 0088c19a: mov ebx, dword ptr [esp + 0x48] */ r_ebx = R32((u32)(r_esp+0x48u));
    /* 0088c19e: mov ebp, dword ptr [esp + 0x44] */ r_ebp = R32((u32)(r_esp+0x44u));
L_0088c1a2:; BB(0x0088c1a2);
    /* 0088c1a2: mov edi, dword ptr [ebx + edx*4] */ r_edi = R32((u32)(r_ebx+r_edx*4));
    /* 0088c1a5: mov esi, dword ptr [ebp + ecx*4] */ r_esi = R32((u32)(r_ebp+r_ecx*4));
    /* 0088c1a9: fld dword ptr [edi + eax*4] */ FPUSH(R_F32((u32)(r_edi+r_eax*4)));
    /* 0088c1ac: fsub dword ptr [esi + eax*4] */ ST(0) = ST(0) - R_F32((u32)(r_esi+r_eax*4));
    /* 0088c1af: fstp dword ptr [edi + eax*4] */ W_F32((u32)(r_edi+r_eax*4), ST(0)); FPOP();
    /* 0088c1b2: mov edi, dword ptr [ebx + edx*4] */ r_edi = R32((u32)(r_ebx+r_edx*4));
    /* 0088c1b5: mov esi, dword ptr [ebp + ecx*4] */ r_esi = R32((u32)(r_ebp+r_ecx*4));
    /* 0088c1b9: fld dword ptr [edi + eax*4 + 4] */ FPUSH(R_F32((u32)(r_edi+r_eax*4+0x4u)));
    /* 0088c1bd: fsub dword ptr [esi + eax*4 + 4] */ ST(0) = ST(0) - R_F32((u32)(r_esi+r_eax*4+0x4u));
    /* 0088c1c1: fstp dword ptr [edi + eax*4 + 4] */ W_F32((u32)(r_edi+r_eax*4+0x4u), ST(0)); FPOP();
    /* 0088c1c5: mov edi, dword ptr [ebx + edx*4] */ r_edi = R32((u32)(r_ebx+r_edx*4));
    /* 0088c1c8: mov esi, dword ptr [ebp + ecx*4] */ r_esi = R32((u32)(r_ebp+r_ecx*4));
    /* 0088c1cc: fld dword ptr [edi + eax*4 + 8] */ FPUSH(R_F32((u32)(r_edi+r_eax*4+0x8u)));
    /* 0088c1d0: fsub dword ptr [esi + eax*4 + 8] */ ST(0) = ST(0) - R_F32((u32)(r_esi+r_eax*4+0x8u));
    /* 0088c1d4: fstp dword ptr [edi + eax*4 + 8] */ W_F32((u32)(r_edi+r_eax*4+0x8u), ST(0)); FPOP();
    /* 0088c1d8: mov edi, dword ptr [ebx + edx*4] */ r_edi = R32((u32)(r_ebx+r_edx*4));
    /* 0088c1db: mov esi, dword ptr [ebp + ecx*4] */ r_esi = R32((u32)(r_ebp+r_ecx*4));
    /* 0088c1df: fld dword ptr [edi + eax*4 + 0xc] */ FPUSH(R_F32((u32)(r_edi+r_eax*4+0xcu)));
    /* 0088c1e3: fsub dword ptr [esi + eax*4 + 0xc] */ ST(0) = ST(0) - R_F32((u32)(r_esi+r_eax*4+0xcu));
    /* 0088c1e7: fstp dword ptr [edi + eax*4 + 0xc] */ W_F32((u32)(r_edi+r_eax*4+0xcu), ST(0)); FPOP();
    /* 0088c1eb: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0088c1ee: mov esi, dword ptr [esp + 0x24] */ r_esi = R32((u32)(r_esp+0x24u));
    /* 0088c1f2: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088c1f4: jle 0x88c1a2 */ if ((fZ||fS!=fO)) goto L_0088c1a2;
L_0088c1f6:; BB(0x0088c1f6);
    /* 0088c1f6: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
    /* 0088c1fa: mov ebp, dword ptr [esp + 0x18] */ r_ebp = R32((u32)(r_esp+0x18u));
    /* 0088c1fe: mov esi, dword ptr [esp + 0x50] */ r_esi = R32((u32)(r_esp+0x50u));
    /* 0088c202: mov edi, dword ptr [esp + 0x4c] */ r_edi = R32((u32)(r_esp+0x4cu));
L_0088c206:; BB(0x0088c206);
    /* 0088c206: mov dword ptr [esp + 0x20], ecx */ W32((u32)(r_esp+0x20u), r_ecx);
    /* 0088c20a: mov edi, dword ptr [esp + 0x48] */ r_edi = R32((u32)(r_esp+0x48u));
L_0088c20e:; BB(0x0088c20e);
    /* 0088c20e: mov esi, dword ptr [edi + edx*4] */ r_esi = R32((u32)(r_edi+r_edx*4));
    /* 0088c211: mov ecx, dword ptr [ebx] */ r_ecx = R32((u32)(r_ebx));
    /* 0088c213: fld dword ptr [esi + eax*4] */ FPUSH(R_F32((u32)(r_esi+r_eax*4)));
    /* 0088c216: fsub dword ptr [ecx + eax*4] */ ST(0) = ST(0) - R_F32((u32)(r_ecx+r_eax*4));
    /* 0088c219: fstp dword ptr [esi + eax*4] */ W_F32((u32)(r_esi+r_eax*4), ST(0)); FPOP();
    /* 0088c21c: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0088c21d: cmp eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088c21f: jl 0x88c20e */ if ((fS!=fO)) goto L_0088c20e;
L_0088c221:; BB(0x0088c221);
    /* 0088c221: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 0088c225: mov esi, dword ptr [esp + 0x50] */ r_esi = R32((u32)(r_esp+0x50u));
    /* 0088c229: mov edi, dword ptr [esp + 0x4c] */ r_edi = R32((u32)(r_esp+0x4cu));
L_0088c22d:; BB(0x0088c22d);
    /* 0088c22d: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
L_0088c22e:; BB(0x0088c22e);
    /* 0088c22e: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0088c22f: cmp edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088c231: jl 0x88c16c */ if ((fS!=fO)) goto L_0088c16c;
L_0088c237:; BB(0x0088c237);
    /* 0088c237: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0088c239: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0088c23c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0088c23d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0088c23e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0088c23f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0088c240: ret  */ FN_RET(0x0088c034); r_esp += 4; return;
L_0088c241:; BB(0x0088c241);
    /* 0088c241: lea ebx, [ecx + ecx] */ r_ebx = (u32)(r_ecx+r_ecx);
    /* 0088c244: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0088c246: add ebx, dword ptr [esp + 0x44] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esp+0x44u)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0088c24a: jmp 0x88c206 */ goto L_0088c206;
}

void f_0088c24c(void) /* sub_88C24C */
{
    FN_ENTER(0x0088c24c);
    /* 0088c24c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0088c24d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0088c24e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0088c24f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0088c250: sub esp, 0x43c */ {  u32 a = r_esp; u32 b = 0x43cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0088c256: mov dword ptr [esp + 0x38], ecx */ W32((u32)(r_esp+0x38u), r_ecx);
    /* 0088c25a: mov edi, edx */ r_edi = r_edx;
    /* 0088c25c: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0088c260: mov esi, dword ptr [edi] */ r_esi = R32((u32)(r_edi));
    /* 0088c262: mov ebp, dword ptr [esi + 8] */ r_ebp = R32((u32)(r_esi+0x8u));
    /* 0088c265: mov ebx, dword ptr [esi + 0xc] */ r_ebx = R32((u32)(r_esi+0xcu));
    /* 0088c268: mov eax, dword ptr [edi + 0x10] */ r_eax = R32((u32)(r_edi+0x10u));
    /* 0088c26b: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0088c26d: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 0088c271: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 0088c274: sub eax, dword ptr [esi] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0088c276: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0088c277: idiv ebp */ { i32 d = (i32)r_ebp; if (!d) UNSUP(0x0088c277, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0088c277, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0088c279: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 0088c27d: lea eax, [esp + 0x3c] */ r_eax = (u32)(r_esp+0x3cu);
    /* 0088c281: push 0x200 */ { u32 v = 0x200u; r_esp -= 4; W32(r_esp, v); }
    /* 0088c286: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0088c288: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0088c289: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x88c28eu); f_0086b688();
    /* 0088c28e: lea eax, [esp + 0x248] */ r_eax = (u32)(r_esp+0x248u);
    /* 0088c295: push 0x200 */ { u32 v = 0x200u; r_esp -= 4; W32(r_esp, v); }
    /* 0088c29a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0088c29c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0088c29d: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x88c2a2u); f_0086b688();
    /* 0088c2a2: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0088c2a5: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0088c2a7: mov eax, dword ptr [edi + 8] */ r_eax = R32((u32)(r_edi+0x8u));
    /* 0088c2aa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0088c2ac: jle 0x88c4cd */ if ((fZ||fS!=fO)) goto L_0088c4cd;
L_0088c2b2:; BB(0x0088c2b2);
    /* 0088c2b2: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0088c2b4: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 0088c2b8: mov edx, dword ptr [esp + 0x2c] */ r_edx = R32((u32)(r_esp+0x2cu));
    /* 0088c2bc: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0088c2be: jle 0x88c4e6 */ if ((fZ||fS!=fO)) goto L_0088c4e6;
L_0088c2c4:; BB(0x0088c2c4);
    /* 0088c2c4: mov dword ptr [esp + 0x24], ebx */ W32((u32)(r_esp+0x24u), r_ebx);
    /* 0088c2c8: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0088c2cc: mov dword ptr [esp + 0xc], ebp */ W32((u32)(r_esp+0xcu), r_ebp);
    /* 0088c2d0: mov ebp, dword ptr [esp + 0x45c] */ r_ebp = R32((u32)(r_esp+0x45cu));
    /* 0088c2d7: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 0088c2db: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 0088c2de: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
L_0088c2e2:; BB(0x0088c2e2);
    /* 0088c2e2: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0088c2e4: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0088c2e6: jle 0x88c388 */ if ((fZ||fS!=fO)) goto L_0088c388;
L_0088c2ec:; BB(0x0088c2ec);
    /* 0088c2ec: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0088c2ef: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0088c2f1: lea ebx, [edi + 4] */ r_ebx = (u32)(r_edi+0x4u);
    /* 0088c2f4: mov dword ptr [esp + 0x20], ebx */ W32((u32)(r_esp+0x20u), r_ebx);
    /* 0088c2f8: mov ebx, dword ptr [esp + 0x28] */ r_ebx = R32((u32)(r_esp+0x28u));
    /* 0088c2fc: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
    /* 0088c2ff: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 0088c303: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0088c307: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
L_0088c30b:; BB(0x0088c30b);
    /* 0088c30b: mov eax, dword ptr [esp + 0x460] */ r_eax = R32((u32)(r_esp+0x460u));
    /* 0088c312: mov ecx, dword ptr [eax + esi*4] */ r_ecx = R32((u32)(r_eax+r_esi*4));
    /* 0088c315: mov edx, 1 */ r_edx = 0x1u;
    /* 0088c31a: add ecx, dword ptr [esp + 0x1c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esp+0x1cu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0088c31e: mov edi, dword ptr [ecx] */ r_edi = R32((u32)(r_ecx));
    /* 0088c320: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0088c321: cmp ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088c324: jle 0x88c350 */ if ((fZ||fS!=fO)) goto L_0088c350;
L_0088c326:; BB(0x0088c326);
    /* 0088c326: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0088c32a: lea eax, [edx + eax] */ r_eax = (u32)(r_edx+r_eax);
    /* 0088c32d: mov ebp, dword ptr [esp + 0x2c] */ r_ebp = R32((u32)(r_esp+0x2cu));
    /* 0088c331: mov dword ptr [esp + 0x18], esi */ W32((u32)(r_esp+0x18u), r_esi);
    /* 0088c335: mov esi, dword ptr [esp + 0x24] */ r_esi = R32((u32)(r_esp+0x24u));
L_0088c339:; BB(0x0088c339);
    /* 0088c339: imul edi, esi */ { i64 t = (i64)(i32)r_edi * (i64)(i32)r_esi; r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0088c33c: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088c33e: jle 0x88c343 */ if ((fZ||fS!=fO)) goto L_0088c343;
L_0088c340:; BB(0x0088c340);
    /* 0088c340: add edi, dword ptr [ecx + edx*4] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ecx+r_edx*4)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
L_0088c343:; BB(0x0088c343);
    /* 0088c343: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0088c344: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0088c345: cmp edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088c347: jl 0x88c339 */ if ((fS!=fO)) goto L_0088c339;
L_0088c349:; BB(0x0088c349);
    /* 0088c349: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 0088c34d: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
L_0088c350:; BB(0x0088c350);
    /* 0088c350: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0088c353: cmp edi, dword ptr [edx + 4] */ {  u32 a = r_edi; u32 b = R32((u32)(r_edx+0x4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088c356: jge 0x88c36a */ if ((fS==fO)) goto L_0088c36a;
L_0088c358:; BB(0x0088c358);
    /* 0088c358: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 0088c35c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0088c35d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0088c35e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0088c35f: call 0x885fd4 */ r_esp -= 4; W32(r_esp, 0x88c364u); f_00885fd4();
    /* 0088c364: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0088c367: add dword ptr [ebp + 0x24], eax */ { u32 ad = (u32)(r_ebp+0x24u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_0088c36a:; BB(0x0088c36a);
    /* 0088c36a: mov eax, dword ptr [esp + 0x45c] */ r_eax = R32((u32)(r_esp+0x45cu));
    /* 0088c371: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088c373: jl 0x88c30b */ if ((fS!=fO)) goto L_0088c30b;
L_0088c375:; BB(0x0088c375);
    /* 0088c375: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0088c379: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 0088c37d: mov ebp, dword ptr [esp + 0x45c] */ r_ebp = R32((u32)(r_esp+0x45cu));
    /* 0088c384: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
L_0088c388:; BB(0x0088c388);
    /* 0088c388: mov edx, dword ptr [esp + 0x2c] */ r_edx = R32((u32)(r_esp+0x2cu));
    /* 0088c38c: mov esi, dword ptr [esp + 0x28] */ r_esi = R32((u32)(r_esp+0x28u));
L_0088c390:; BB(0x0088c390);
    /* 0088c390: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0088c392: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 0088c394: jle 0x88c49b */ if ((fZ||fS!=fO)) goto L_0088c49b;
L_0088c39a:; BB(0x0088c39a);
    /* 0088c39a: mov ebx, 1 */ r_ebx = 0x1u;
    /* 0088c39f: lea ebp, [ecx + ecx] */ r_ebp = (u32)(r_ecx+r_ecx);
    /* 0088c3a2: shl ebx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 0088c3a4: mov dword ptr [esp + 0x20], ebp */ W32((u32)(r_esp+0x20u), r_ebp);
    /* 0088c3a8: mov ebp, dword ptr [esp + 4] */ r_ebp = R32((u32)(r_esp+0x4u));
    /* 0088c3ac: lea ebp, [ebp + 4] */ r_ebp = (u32)(r_ebp+0x4u);
    /* 0088c3af: mov dword ptr [esp + 0x30], ebp */ W32((u32)(r_esp+0x30u), r_ebp);
    /* 0088c3b3: mov dword ptr [esp + 0x34], ebx */ W32((u32)(r_esp+0x34u), r_ebx);
    /* 0088c3b7: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
L_0088c3bb:; BB(0x0088c3bb);
    /* 0088c3bb: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088c3bd: jge 0x88c4da */ if ((fS==fO)) goto L_0088c4da;
L_0088c3c3:; BB(0x0088c3c3);
    /* 0088c3c3: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0088c3c7: imul ecx, eax */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)r_eax; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0088c3ca: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 0088c3ce: mov ebp, dword ptr [esp + 0x45c] */ r_ebp = R32((u32)(r_esp+0x45cu));
    /* 0088c3d5: add ecx, dword ptr [ebx] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebx)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0088c3d7: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0088c3d9: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0088c3db: jle 0x88c48d */ if ((fZ||fS!=fO)) goto L_0088c48d;
L_0088c3e1:; BB(0x0088c3e1);
    /* 0088c3e1: lea ebp, [eax + eax] */ r_ebp = (u32)(r_eax+r_eax);
    /* 0088c3e4: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0088c3e6: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0088c3e8: mov dword ptr [esp + 0x18], ecx */ W32((u32)(r_esp+0x18u), r_ecx);
    /* 0088c3ec: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 0088c3f0: mov dword ptr [esp + 0x1c], edi */ W32((u32)(r_esp+0x1cu), r_edi);
    /* 0088c3f4: mov edi, dword ptr [esp + 0x460] */ r_edi = R32((u32)(r_esp+0x460u));
    /* 0088c3fb: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
L_0088c3ff:; BB(0x0088c3ff);
    /* 0088c3ff: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0088c400: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088c402: jne 0x88c416 */ if (!fZ) goto L_0088c416;
L_0088c404:; BB(0x0088c404);
    /* 0088c404: mov eax, dword ptr [edi + ebx*4 - 4] */ r_eax = R32((u32)(r_edi+r_ebx*4+0xfffffffcu));
    /* 0088c408: mov ecx, dword ptr [eax + ebp*2] */ r_ecx = R32((u32)(r_eax+r_ebp*2));
    /* 0088c40b: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0088c40f: add dword ptr [esp + ecx*4 + 0x23c], edx */ { u32 ad = (u32)(r_esp+r_ecx*4+0x23cu);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_0088c416:; BB(0x0088c416);
    /* 0088c416: mov eax, dword ptr [edi + ebx*4 - 4] */ r_eax = R32((u32)(r_edi+r_ebx*4+0xfffffffcu));
    /* 0088c41a: mov eax, dword ptr [eax + ebp*2] */ r_eax = R32((u32)(r_eax+r_ebp*2));
    /* 0088c41d: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 0088c421: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 0088c425: test dword ptr [ecx + eax*4 + 0x14], edx */ {  u32 a = R32((u32)(r_ecx+r_eax*4+0x14u)); u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088c429: je 0x88c472 */ if (fZ) goto L_0088c472;
L_0088c42b:; BB(0x0088c42b);
    /* 0088c42b: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 0088c42e: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 0088c431: mov eax, dword ptr [ecx + eax*4] */ r_eax = R32((u32)(r_ecx+r_eax*4));
    /* 0088c434: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 0088c438: mov edx, dword ptr [eax + edx*2] */ r_edx = R32((u32)(r_eax+r_edx*2));
    /* 0088c43b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088c43d: je 0x88c472 */ if (fZ) goto L_0088c472;
L_0088c43f:; BB(0x0088c43f);
    /* 0088c43f: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 0088c443: mov ecx, dword ptr [eax + ebx*4 - 4] */ r_ecx = R32((u32)(r_eax+r_ebx*4+0xfffffffcu));
    /* 0088c447: add ecx, dword ptr [esp + 0x18] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esp+0x18u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0088c44b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0088c44d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0088c44e: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 0088c452: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0088c453: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0088c454: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 0088c458: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0088c459: call 0x88bd40 */ r_esp -= 4; W32(r_esp, 0x88c45eu); f_0088bd40();
    /* 0088c45e: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0088c461: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 0088c464: add dword ptr [edx + 0x20], eax */ { u32 ad = (u32)(r_edx+0x20u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0088c467: mov ecx, dword ptr [edi + ebx*4 - 4] */ r_ecx = R32((u32)(r_edi+r_ebx*4+0xfffffffcu));
    /* 0088c46b: mov edx, dword ptr [ecx + ebp*2] */ r_edx = R32((u32)(r_ecx+r_ebp*2));
    /* 0088c46e: add dword ptr [esp + edx*4 + 0x3c], eax */ { u32 ad = (u32)(r_esp+r_edx*4+0x3cu);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_0088c472:; BB(0x0088c472);
    /* 0088c472: mov eax, dword ptr [esp + 0x45c] */ r_eax = R32((u32)(r_esp+0x45cu));
    /* 0088c479: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088c47b: jl 0x88c3ff */ if ((fS!=fO)) goto L_0088c3ff;
L_0088c47d:; BB(0x0088c47d);
    /* 0088c47d: mov edi, dword ptr [esp + 0x1c] */ r_edi = R32((u32)(r_esp+0x1cu));
    /* 0088c481: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0088c485: mov edx, dword ptr [esp + 0x2c] */ r_edx = R32((u32)(r_esp+0x2cu));
    /* 0088c489: mov esi, dword ptr [esp + 0x28] */ r_esi = R32((u32)(r_esp+0x28u));
L_0088c48d:; BB(0x0088c48d);
    /* 0088c48d: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0088c48e: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0088c48f: cmp edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088c491: jl 0x88c3bb */ if ((fS!=fO)) goto L_0088c3bb;
L_0088c497:; BB(0x0088c497);
    /* 0088c497: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
L_0088c49b:; BB(0x0088c49b);
    /* 0088c49b: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088c49d: jge 0x88c4b7 */ if ((fS==fO)) goto L_0088c4b7;
L_0088c49f:; BB(0x0088c49f);
    /* 0088c49f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088c4a1: jne 0x88c390 */ if (!fZ) goto L_0088c390;
L_0088c4a7:; BB(0x0088c4a7);
    /* 0088c4a7: mov ebp, dword ptr [esp + 0x45c] */ r_ebp = R32((u32)(r_esp+0x45cu));
    /* 0088c4ae: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 0088c4b2: jmp 0x88c2e2 */ goto L_0088c2e2;
L_0088c4b7:; BB(0x0088c4b7);
    /* 0088c4b7: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 0088c4ba: mov ebx, dword ptr [eax + 8] */ r_ebx = R32((u32)(r_eax+0x8u));
L_0088c4bd:; BB(0x0088c4bd);
    /* 0088c4bd: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0088c4be: cmp ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088c4c0: jge 0x88c4cd */ if ((fS==fO)) goto L_0088c4cd;
L_0088c4c2:; BB(0x0088c4c2);
    /* 0088c4c2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0088c4c4:; BB(0x0088c4c4);
    /* 0088c4c4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0088c4c6: jg 0x88c49f */ if ((!fZ&&fS==fO)) goto L_0088c49f;
L_0088c4c8:; BB(0x0088c4c8);
    /* 0088c4c8: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0088c4c9: cmp ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088c4cb: jl 0x88c4c4 */ if ((fS!=fO)) goto L_0088c4c4;
L_0088c4cd:; BB(0x0088c4cd);
    /* 0088c4cd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0088c4cf: add esp, 0x43c */ {  u32 a = r_esp; u32 b = 0x43cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0088c4d5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0088c4d6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0088c4d7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0088c4d8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0088c4d9: ret  */ FN_RET(0x0088c24c); r_esp += 4; return;
L_0088c4da:; BB(0x0088c4da);
    /* 0088c4da: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 0088c4de: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 0088c4e1: mov ebx, dword ptr [eax + 8] */ r_ebx = R32((u32)(r_eax+0x8u));
    /* 0088c4e4: jmp 0x88c4bd */ goto L_0088c4bd;
L_0088c4e6:; BB(0x0088c4e6);
    /* 0088c4e6: mov dword ptr [esp + 0x24], ebx */ W32((u32)(r_esp+0x24u), r_ebx);
    /* 0088c4ea: mov ebx, eax */ r_ebx = r_eax;
    /* 0088c4ec: mov dword ptr [esp + 0xc], ebp */ W32((u32)(r_esp+0xcu), r_ebp);
    /* 0088c4f0: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 0088c4f4: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 0088c4f7: mov esi, dword ptr [esp + 0x28] */ r_esi = R32((u32)(r_esp+0x28u));
    /* 0088c4fb: jmp 0x88c4bd */ goto L_0088c4bd;
}

void f_0088c500(void) /* sub_88C500 */
{
    FN_ENTER(0x0088c500);
L_0088c500:; BB(0x0088c500);
    /* 0088c500: test dword ptr [0xae7f00], 0xffffff80 */ {  u32 a = R32((u32)(0xae7f00u)); u32 b = 0xffffff80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088c50a: jne 0x88c528 */ if (!fZ) goto L_0088c528;
L_0088c510:; BB(0x0088c510);
    /* 0088c510: test dword ptr [0xae7f00], 0xffffffff */ {  u32 a = R32((u32)(0xae7f00u)); u32 b = 0xffffffffu; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088c51a: jne 0x88c7fc */ if (!fZ) goto L_0088c7fc;
L_0088c520:; BB(0x0088c520);
    /* 0088c520: call 0x86b8a0 */ r_esp -= 4; W32(r_esp, 0x88c525u); f_0086b8a0();
    /* 0088c525: jmp 0x88c500 */ goto L_0088c500;
L_0088c528:; BB(0x0088c528);
    /* 0088c528: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0088c529: mov ebx, esp */ r_ebx = r_esp;
    /* 0088c52b: and esp, 0xffffffe0 */ {  u32 a = r_esp; u32 b = 0xffffffe0u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 0088c52e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0088c52f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0088c530: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0088c531: sub esp, 0x74 */ {  u32 a = r_esp; u32 b = 0x74u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0088c534: mov edx, dword ptr [ebx + 0x14] */ r_edx = R32((u32)(r_ebx+0x14u));
    /* 0088c537: mov ecx, dword ptr [ebx + 0x18] */ r_ecx = R32((u32)(r_ebx+0x18u));
    /* 0088c53a: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 0088c53c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0088c53e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0088c540: jle 0x88c77f */ if ((fZ||fS!=fO)) goto L_0088c77f;
L_0088c546:; BB(0x0088c546);
    /* 0088c546: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 0088c549: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0088c54a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088c54c: je 0x88c55b */ if (fZ) goto L_0088c55b;
L_0088c54e:; BB(0x0088c54e);
    /* 0088c54e: mov esi, dword ptr [ebx + 0x10] */ r_esi = R32((u32)(r_ebx+0x10u));
    /* 0088c551: mov ecx, dword ptr [esi + eax*4 - 4] */ r_ecx = R32((u32)(r_esi+r_eax*4+0xfffffffcu));
    /* 0088c555: mov edi, ebp */ r_edi = r_ebp;
    /* 0088c557: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0088c558: mov dword ptr [esi + edi*4], ecx */ W32((u32)(r_esi+r_edi*4), r_ecx);
L_0088c55b:; BB(0x0088c55b);
    /* 0088c55b: mov ecx, dword ptr [ebx + 0x18] */ r_ecx = R32((u32)(r_ebx+0x18u));
    /* 0088c55e: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088c560: jl 0x88c546 */ if ((fS!=fO)) goto L_0088c546;
L_0088c562:; BB(0x0088c562);
    /* 0088c562: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088c564: je 0x88c77f */ if (fZ) goto L_0088c77f;
L_0088c56a:; BB(0x0088c56a);
    /* 0088c56a: mov esi, dword ptr [ebx + 0xc] */ r_esi = R32((u32)(r_ebx+0xcu));
    /* 0088c56d: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 0088c56f: mov esi, dword ptr [ecx + 8] */ r_esi = R32((u32)(r_ecx+0x8u));
    /* 0088c572: mov dword ptr [esp + 0x5c], ecx */ W32((u32)(r_esp+0x5cu), r_ecx);
    /* 0088c576: mov edi, dword ptr [ecx + 0xc] */ r_edi = R32((u32)(r_ecx+0xcu));
    /* 0088c579: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 0088c57c: sub eax, dword ptr [ecx] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0088c57e: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0088c57f: idiv esi */ { i32 d = (i32)r_esi; if (!d) UNSUP(0x0088c57f, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0088c57f, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0088c581: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 0088c585: lea eax, [ebp + ebp] */ r_eax = (u32)(r_ebp+r_ebp);
    /* 0088c589: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0088c58b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0088c58c: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 0088c58f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0088c590: call 0x87421c */ r_esp -= 4; W32(r_esp, 0x88c595u); f_0087421c();
    /* 0088c595: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 0088c599: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0088c59c: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 0088c5a0: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0088c5a2: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0088c5a4: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0088c5a8: fdivr qword ptr [0x99b018] */ ST(0) = R_F64((u32)(0x99b018u)) / ST(0);
    /* 0088c5ae: jle 0x88c7da */ if ((fZ||fS!=fO)) goto L_0088c7da;
L_0088c5b4:; BB(0x0088c5b4);
    /* 0088c5b4: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 0088c5b8: lea eax, [eax + eax] */ r_eax = (u32)(r_eax+r_eax);
    /* 0088c5bb: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0088c5bd: mov dword ptr [esp + 0x30], edi */ W32((u32)(r_esp+0x30u), r_edi);
    /* 0088c5c1: mov edi, edx */ r_edi = r_edx;
    /* 0088c5c3: mov dword ptr [esp + 0x58], esi */ W32((u32)(r_esp+0x58u), r_esi);
    /* 0088c5c7: mov esi, eax */ r_esi = r_eax;
    /* 0088c5c9: fstp qword ptr [esp + 0x48] */ W_F64((u32)(r_esp+0x48u), ST(0)); FPOP();
L_0088c5cd:; BB(0x0088c5cd);
    /* 0088c5cd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0088c5ce: mov ecx, dword ptr [ebx + 8] */ r_ecx = R32((u32)(r_ebx+0x8u));
    /* 0088c5d1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0088c5d2: call 0x87421c */ r_esp -= 4; W32(r_esp, 0x88c5d7u); f_0087421c();
    /* 0088c5d7: mov ecx, dword ptr [esp + 0x30] */ r_ecx = R32((u32)(r_esp+0x30u));
    /* 0088c5db: mov dword ptr [ecx + edi*4], eax */ W32((u32)(r_ecx+r_edi*4), r_eax);
    /* 0088c5de: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0088c5df: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0088c5e1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0088c5e2: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x88c5e7u); f_0086b688();
    /* 0088c5e7: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0088c5ea: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0088c5eb: cmp edi, ebp */ {  u32 a = r_edi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088c5ed: jl 0x88c5cd */ if ((fS!=fO)) goto L_0088c5cd;
L_0088c5ef:; BB(0x0088c5ef);
    /* 0088c5ef: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
    /* 0088c5f3: mov esi, dword ptr [esp + 0x58] */ r_esi = R32((u32)(r_esp+0x58u));
    /* 0088c5f7: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 0088c5fb: fld qword ptr [esp + 0x48] */ FPUSH(R_F64((u32)(r_esp+0x48u)));
    /* 0088c5ff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0088c601: jle 0x88c7e8 */ if ((fZ||fS!=fO)) goto L_0088c7e8;
L_0088c607:; BB(0x0088c607);
    /* 0088c607: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0088c609: mov eax, dword ptr [esp + 0x5c] */ r_eax = R32((u32)(r_esp+0x5cu));
    /* 0088c60d: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0088c60f: fld dword ptr [0x99b054] */ FPUSH(R_F32((u32)(0x99b054u)));
    /* 0088c615: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0088c616: fld dword ptr [0x99b050] */ FPUSH(R_F32((u32)(0x99b050u)));
    /* 0088c61c: mov dword ptr [esp + 0x30], edi */ W32((u32)(r_esp+0x30u), r_edi);
    /* 0088c620: mov dword ptr [esp + 0x58], esi */ W32((u32)(r_esp+0x58u), r_esi);
    /* 0088c624: mov edi, dword ptr [esp + 0x24] */ r_edi = R32((u32)(r_esp+0x24u));
    /* 0088c628: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0088c62a:; BB(0x0088c62a);
    /* 0088c62a: mov esi, dword ptr [esp + 0x58] */ r_esi = R32((u32)(r_esp+0x58u));
    /* 0088c62e: imul esi, ecx */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_ecx; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0088c631: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0088c633: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0088c635: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0088c637: jle 0x88c7cb */ if ((fZ||fS!=fO)) goto L_0088c7cb;
L_0088c63d:; BB(0x0088c63d);
    /* 0088c63d: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 0088c640: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0088c642: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0088c644: mov dword ptr [esp + 0x3c], esi */ W32((u32)(r_esp+0x3cu), r_esi);
    /* 0088c648: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
    /* 0088c64c: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 0088c650: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 0088c654: mov dword ptr [esp + 0x2c], ecx */ W32((u32)(r_esp+0x2cu), r_ecx);
    /* 0088c658: mov dword ptr [esp + 0x20], ebp */ W32((u32)(r_esp+0x20u), r_ebp);
L_0088c65c:; BB(0x0088c65c);
    /* 0088c65c: fld dword ptr [0x99b054] */ FPUSH(R_F32((u32)(0x99b054u)));
    /* 0088c662: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0088c664: mov ecx, dword ptr [esp + 0x58] */ r_ecx = R32((u32)(r_esp+0x58u));
    /* 0088c668: fld dword ptr [0x99b054] */ FPUSH(R_F32((u32)(0x99b054u)));
    /* 0088c66e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0088c670: jle 0x88c7b9 */ if ((fZ||fS!=fO)) goto L_0088c7b9;
L_0088c676:; BB(0x0088c676);
    /* 0088c676: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 0088c679: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0088c67b: mov ebp, dword ptr [ebx + 0x10] */ r_ebp = R32((u32)(r_ebx+0x10u));
    /* 0088c67e: mov ebp, dword ptr [ebp + ecx] */ r_ebp = R32((u32)(r_ebp+r_ecx));
    /* 0088c682: mov edi, dword ptr [esp + 0x58] */ r_edi = R32((u32)(r_esp+0x58u));
    /* 0088c686: add ebp, dword ptr [esp + 0x3c] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esp+0x3cu)); u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0088c68a: mov dword ptr [esp + 0x40], ecx */ W32((u32)(r_esp+0x40u), r_ecx);
    /* 0088c68e: mov dword ptr [esp + 0x34], edx */ W32((u32)(r_esp+0x34u), r_edx);
    /* 0088c692: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 0088c696: fstp dword ptr [esp + 0x50] */ W_F32((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 0088c69a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0088c69c: fstp qword ptr [esp + 0x48] */ W_F64((u32)(r_esp+0x48u), ST(0)); FPOP();
L_0088c6a0:; BB(0x0088c6a0);
    /* 0088c6a0: fld dword ptr [ebp + esi*4] */ FPUSH(R_F32((u32)(r_ebp+r_esi*4)));
    /* 0088c6a4: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0088c6a6: fabs  */ ST(0) = fabsl(ST(0));
    /* 0088c6a8: fcomp dword ptr [esp + 0x50] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x50u))); FPOP();
    /* 0088c6ac: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0088c6ae: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0088c6af: jbe 0x88c6b9 */ if ((fC||fZ)) goto L_0088c6b9;
L_0088c6b1:; BB(0x0088c6b1);
    /* 0088c6b1: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0088c6b3: fabs  */ ST(0) = fabsl(ST(0));
    /* 0088c6b5: fstp dword ptr [esp + 0x50] */ W_F32((u32)(r_esp+0x50u), ST(0)); FPOP();
L_0088c6b9:; BB(0x0088c6b9);
    /* 0088c6b9: fadd dword ptr [0x99b050] */ ST(0) = ST(0) + R_F32((u32)(0x99b050u));
    /* 0088c6bf: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 0088c6c2: call 0x8c9b50 */ r_esp -= 4; W32(r_esp, 0x88c6c7u); f_008c9b50();
    /* 0088c6c7: fabs  */ ST(0) = fabsl(ST(0));
    /* 0088c6c9: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0088c6ca: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 0088c6ce: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0088c6d0: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088c6d2: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 0088c6d6: jl 0x88c6a0 */ if ((fS!=fO)) goto L_0088c6a0;
L_0088c6d8:; BB(0x0088c6d8);
    /* 0088c6d8: mov ecx, dword ptr [esp + 0x40] */ r_ecx = R32((u32)(r_esp+0x40u));
    /* 0088c6dc: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 0088c6e0: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
    /* 0088c6e4: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 0088c6e8: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 0088c6ec: fld dword ptr [esp + 0x50] */ FPUSH(R_F32((u32)(r_esp+0x50u)));
    /* 0088c6f0: fld dword ptr [0x99b054] */ FPUSH(R_F32((u32)(0x99b054u)));
    /* 0088c6f6: fld qword ptr [esp + 0x48] */ FPUSH(R_F64((u32)(r_esp+0x48u)));
L_0088c6fa:; BB(0x0088c6fa);
    /* 0088c6fa: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 0088c6fc: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 0088c6fe: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0088c700: jle 0x88c7ec */ if ((fZ||fS!=fO)) goto L_0088c7ec;
L_0088c706:; BB(0x0088c706);
    /* 0088c706: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0088c708: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 0088c70c: cvttss2si esi, dword ptr [esp + 0x10] */ { XMM s; s.d[0] = R32((u32)(r_esp+0x10u)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; double v = (double)s.fs[0]; double r = trunc(v); r_esi = (r >= -2147483648.0 && r < 2147483648.0) ? (u32)(i32)r : 0x80000000u; }
    /* 0088c712: mov dword ptr [esp + 0x18], esi */ W32((u32)(r_esp+0x18u), r_esi);
    /* 0088c716: mov esi, dword ptr [esp + 0x5c] */ r_esi = R32((u32)(r_esp+0x5cu));
    /* 0088c71a: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
L_0088c71e:; BB(0x0088c71e);
    /* 0088c71e: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0088c720: fcom dword ptr [esi + ebp*4 + 0x514] */ fx_compare(ST(0), R_F32((u32)(r_esi+r_ebp*4+0x514u))); 
    /* 0088c727: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0088c729: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0088c72a: ja 0x88c741 */ if ((!fC&&!fZ)) goto L_0088c741;
L_0088c72c:; BB(0x0088c72c);
    /* 0088c72c: fld dword ptr [esi + ebp*4 + 0x614] */ FPUSH(R_F32((u32)(r_esi+r_ebp*4+0x614u)));
    /* 0088c733: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 0088c735: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0088c737: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0088c738: jb 0x88c7ad */ if (fC) goto L_0088c7ad;
L_0088c73a:; BB(0x0088c73a);
    /* 0088c73a: fcomp st(3) */ fx_compare(ST(0), ST(3)); FPOP();
    /* 0088c73c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0088c73e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0088c73f: ja 0x88c78b */ if ((!fC&&!fZ)) goto L_0088c78b;
L_0088c741:; BB(0x0088c741);
    /* 0088c741: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0088c742: cmp ebp, edi */ {  u32 a = r_ebp; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088c744: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0088c746: jl 0x88c71e */ if ((fS!=fO)) goto L_0088c71e;
L_0088c748:; BB(0x0088c748);
    /* 0088c748: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0088c74a: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0088c74c: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
L_0088c750:; BB(0x0088c750);
    /* 0088c750: mov ecx, dword ptr [ecx + eax] */ r_ecx = R32((u32)(r_ecx+r_eax));
    /* 0088c753: mov esi, dword ptr [esp + 0x38] */ r_esi = R32((u32)(r_esp+0x38u));
    /* 0088c757: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0088c758: mov dword ptr [ecx + esi*2], ebp */ W32((u32)(r_ecx+r_esi*2), r_ebp);
    /* 0088c75b: mov ebp, dword ptr [esp + 0x20] */ r_ebp = R32((u32)(r_esp+0x20u));
    /* 0088c75f: cmp edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088c761: jl 0x88c65c */ if ((fS!=fO)) goto L_0088c65c;
L_0088c767:; BB(0x0088c767);
    /* 0088c767: mov ecx, dword ptr [esp + 0x2c] */ r_ecx = R32((u32)(r_esp+0x2cu));
    /* 0088c76b: mov edi, dword ptr [esp + 0x24] */ r_edi = R32((u32)(r_esp+0x24u));
    /* 0088c76f: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0088c770: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088c772: jge 0x88c795 */ if ((fS==fO)) goto L_0088c795;
L_0088c774:; BB(0x0088c774);
    /* 0088c774: mov eax, dword ptr [esp + 0x5c] */ r_eax = R32((u32)(r_esp+0x5cu));
    /* 0088c778: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0088c77a: jmp 0x88c62a */ goto L_0088c62a;
L_0088c77f:; BB(0x0088c77f);
    /* 0088c77f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0088c781: add esp, 0x74 */ {  u32 a = r_esp; u32 b = 0x74u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0088c784: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0088c785: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0088c786: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0088c787: mov esp, ebx */ r_esp = r_ebx;
    /* 0088c789: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0088c78a: ret  */ FN_RET(0x0088c500); r_esp += 4; return;
L_0088c78b:; BB(0x0088c78b);
    /* 0088c78b: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 0088c78d: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0088c78f: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 0088c793: jmp 0x88c750 */ goto L_0088c750;
L_0088c795:; BB(0x0088c795);
    /* 0088c795: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0088c797: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0088c799:; BB(0x0088c799);
    /* 0088c799: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 0088c79c: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 0088c7a0: inc dword ptr [edx + 0x28] */ { u32 ad = (u32)(r_edx+0x28u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0088c7a3: add esp, 0x74 */ {  u32 a = r_esp; u32 b = 0x74u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0088c7a6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0088c7a7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0088c7a8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0088c7a9: mov esp, ebx */ r_esp = r_ebx;
    /* 0088c7ab: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0088c7ac: ret  */ FN_RET(0x0088c500); r_esp += 4; return;
L_0088c7ad:; BB(0x0088c7ad);
    /* 0088c7ad: fstp st(3) */ ST(3) = ST(0); FPOP();
    /* 0088c7af: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0088c7b1: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0088c7b3: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 0088c7b7: jmp 0x88c750 */ goto L_0088c750;
L_0088c7b9:; BB(0x0088c7b9);
    /* 0088c7b9: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 0088c7bc: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0088c7be: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0088c7c0: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0088c7c2: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0088c7c4: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0088c7c6: jmp 0x88c6fa */ goto L_0088c6fa;
L_0088c7cb:; BB(0x0088c7cb);
    /* 0088c7cb: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0088c7cc: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088c7ce: jl 0x88c62a */ if ((fS!=fO)) goto L_0088c62a;
L_0088c7d4:; BB(0x0088c7d4);
    /* 0088c7d4: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0088c7d6: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0088c7d8: jmp 0x88c799 */ goto L_0088c799;
L_0088c7da:; BB(0x0088c7da);
    /* 0088c7da: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 0088c7de: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0088c7e0: jg 0x88c607 */ if ((!fZ&&fS==fO)) goto L_0088c607;
L_0088c7e6:; BB(0x0088c7e6);
    /* 0088c7e6: jmp 0x88c7f5 */ goto L_0088c7f5;
L_0088c7e8:; BB(0x0088c7e8);
    /* 0088c7e8: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0088c7ea: jmp 0x88c799 */ goto L_0088c799;
L_0088c7ec:; BB(0x0088c7ec);
    /* 0088c7ec: fstp st(3) */ ST(3) = ST(0); FPOP();
    /* 0088c7ee: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0088c7f0: jmp 0x88c750 */ goto L_0088c750;
L_0088c7f5:; BB(0x0088c7f5);
    /* 0088c7f5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0088c7f7: jmp 0x88c799 */ goto L_0088c799;
L_0088c7fc:; BB(0x0088c7fc);
    /* 0088c7fc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0088c7fd: mov ebx, esp */ r_ebx = r_esp;
    /* 0088c7ff: and esp, 0xfffffff8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 0088c802: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0088c803: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0088c804: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0088c805: sub esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0088c808: mov edx, dword ptr [ebx + 0x14] */ r_edx = R32((u32)(r_ebx+0x14u));
    /* 0088c80b: mov ecx, dword ptr [ebx + 0x18] */ r_ecx = R32((u32)(r_ebx+0x18u));
    /* 0088c80e: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 0088c810: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0088c812: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0088c814: jle 0x88ca48 */ if ((fZ||fS!=fO)) goto L_0088ca48;
L_0088c81a:; BB(0x0088c81a);
    /* 0088c81a: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 0088c81d: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0088c81e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088c820: je 0x88c82f */ if (fZ) goto L_0088c82f;
L_0088c822:; BB(0x0088c822);
    /* 0088c822: mov esi, dword ptr [ebx + 0x10] */ r_esi = R32((u32)(r_ebx+0x10u));
    /* 0088c825: mov ecx, dword ptr [esi + eax*4 - 4] */ r_ecx = R32((u32)(r_esi+r_eax*4+0xfffffffcu));
    /* 0088c829: mov edi, ebp */ r_edi = r_ebp;
    /* 0088c82b: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0088c82c: mov dword ptr [esi + edi*4], ecx */ W32((u32)(r_esi+r_edi*4), r_ecx);
L_0088c82f:; BB(0x0088c82f);
    /* 0088c82f: mov ecx, dword ptr [ebx + 0x18] */ r_ecx = R32((u32)(r_ebx+0x18u));
    /* 0088c832: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088c834: jl 0x88c81a */ if ((fS!=fO)) goto L_0088c81a;
L_0088c836:; BB(0x0088c836);
    /* 0088c836: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088c838: je 0x88ca48 */ if (fZ) goto L_0088ca48;
L_0088c83e:; BB(0x0088c83e);
    /* 0088c83e: mov esi, dword ptr [ebx + 0xc] */ r_esi = R32((u32)(r_ebx+0xcu));
    /* 0088c841: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 0088c843: mov dword ptr [esp + 0x20], ecx */ W32((u32)(r_esp+0x20u), r_ecx);
    /* 0088c847: mov edi, dword ptr [ecx + 8] */ r_edi = R32((u32)(r_ecx+0x8u));
    /* 0088c84a: mov esi, dword ptr [ecx + 0xc] */ r_esi = R32((u32)(r_ecx+0xcu));
    /* 0088c84d: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 0088c850: sub eax, dword ptr [ecx] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0088c852: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0088c853: idiv edi */ { i32 d = (i32)r_edi; if (!d) UNSUP(0x0088c853, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0088c853, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0088c855: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 0088c859: lea eax, [ebp + ebp] */ r_eax = (u32)(r_ebp+r_ebp);
    /* 0088c85d: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0088c85f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0088c860: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 0088c863: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0088c864: call 0x87421c */ r_esp -= 4; W32(r_esp, 0x88c869u); f_0087421c();
    /* 0088c869: mov dword ptr [esp + 0x40], eax */ W32((u32)(r_esp+0x40u), r_eax);
    /* 0088c86d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0088c870: mov dword ptr [esp + 0x10], edi */ W32((u32)(r_esp+0x10u), r_edi);
    /* 0088c874: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0088c878: fdivr qword ptr [0x99b010] */ ST(0) = R_F64((u32)(0x99b010u)) / ST(0);
    /* 0088c87e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0088c880: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0088c882: jle 0x88c8cb */ if ((fZ||fS!=fO)) goto L_0088c8cb;
L_0088c884:; BB(0x0088c884);
    /* 0088c884: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 0088c888: lea eax, [eax + eax] */ r_eax = (u32)(r_eax+r_eax);
    /* 0088c88b: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0088c88d: mov dword ptr [esp + 0x2c], esi */ W32((u32)(r_esp+0x2cu), r_esi);
    /* 0088c891: mov dword ptr [esp + 0x24], edi */ W32((u32)(r_esp+0x24u), r_edi);
    /* 0088c895: fstp qword ptr [esp + 0x30] */ W_F64((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0088c899: mov esi, eax */ r_esi = r_eax;
    /* 0088c89b: mov edi, edx */ r_edi = r_edx;
L_0088c89d:; BB(0x0088c89d);
    /* 0088c89d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0088c89e: mov ecx, dword ptr [ebx + 8] */ r_ecx = R32((u32)(r_ebx+0x8u));
    /* 0088c8a1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0088c8a2: call 0x87421c */ r_esp -= 4; W32(r_esp, 0x88c8a7u); f_0087421c();
    /* 0088c8a7: mov ecx, dword ptr [esp + 0x40] */ r_ecx = R32((u32)(r_esp+0x40u));
    /* 0088c8ab: mov dword ptr [ecx + edi*4], eax */ W32((u32)(r_ecx+r_edi*4), r_eax);
    /* 0088c8ae: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0088c8af: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0088c8b1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0088c8b2: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x88c8b7u); f_0086b688();
    /* 0088c8b7: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0088c8ba: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0088c8bb: cmp edi, ebp */ {  u32 a = r_edi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088c8bd: jl 0x88c89d */ if ((fS!=fO)) goto L_0088c89d;
L_0088c8bf:; BB(0x0088c8bf);
    /* 0088c8bf: mov esi, dword ptr [esp + 0x2c] */ r_esi = R32((u32)(r_esp+0x2cu));
    /* 0088c8c3: mov edi, dword ptr [esp + 0x24] */ r_edi = R32((u32)(r_esp+0x24u));
    /* 0088c8c7: fld qword ptr [esp + 0x30] */ FPUSH(R_F64((u32)(r_esp+0x30u)));
L_0088c8cb:; BB(0x0088c8cb);
    /* 0088c8cb: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0088c8cd: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 0088c8d1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0088c8d3: jle 0x88ca66 */ if ((fZ||fS!=fO)) goto L_0088ca66;
L_0088c8d9:; BB(0x0088c8d9);
    /* 0088c8d9: fld dword ptr [0x99b04c] */ FPUSH(R_F32((u32)(0x99b04cu)));
    /* 0088c8df: dec esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0088c8e0: fld dword ptr [0x99b048] */ FPUSH(R_F32((u32)(0x99b048u)));
    /* 0088c8e6: mov eax, edx */ r_eax = r_edx;
    /* 0088c8e8: imul eax, edi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_edi; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0088c8eb: mov dword ptr [esp + 0x2c], esi */ W32((u32)(r_esp+0x2cu), r_esi);
    /* 0088c8ef: mov dword ptr [esp + 0x24], edi */ W32((u32)(r_esp+0x24u), r_edi);
    /* 0088c8f3: mov dword ptr [esp + 0x3c], ebp */ W32((u32)(r_esp+0x3cu), r_ebp);
    /* 0088c8f7: mov ebp, dword ptr [esp + 0x20] */ r_ebp = R32((u32)(r_esp+0x20u));
L_0088c8fb:; BB(0x0088c8fb);
    /* 0088c8fb: mov esi, eax */ r_esi = r_eax;
    /* 0088c8fd: add esi, dword ptr [ebp] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0088c900: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0088c902: mov edi, dword ptr [esp + 0x3c] */ r_edi = R32((u32)(r_esp+0x3cu));
    /* 0088c906: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0088c908: jle 0x88ca1d */ if ((fZ||fS!=fO)) goto L_0088ca1d;
L_0088c90e:; BB(0x0088c90e);
    /* 0088c90e: lea edi, [edx + edx] */ r_edi = (u32)(r_edx+r_edx);
    /* 0088c911: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0088c913: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0088c915: mov dword ptr [esp + 0x48], esi */ W32((u32)(r_esp+0x48u), r_esi);
    /* 0088c919: mov dword ptr [esp + 0x4c], edi */ W32((u32)(r_esp+0x4cu), r_edi);
    /* 0088c91d: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 0088c921: mov dword ptr [esp + 0x40], edx */ W32((u32)(r_esp+0x40u), r_edx);
    /* 0088c925: mov edi, dword ptr [esp + 0x2c] */ r_edi = R32((u32)(r_esp+0x2cu));
L_0088c929:; BB(0x0088c929);
    /* 0088c929: fld dword ptr [0x99b04c] */ FPUSH(R_F32((u32)(0x99b04cu)));
    /* 0088c92f: fld dword ptr [0x99b04c] */ FPUSH(R_F32((u32)(0x99b04cu)));
    /* 0088c935: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0088c937: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 0088c93b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0088c93d: jle 0x88ca5c */ if ((fZ||fS!=fO)) goto L_0088ca5c;
L_0088c943:; BB(0x0088c943);
    /* 0088c943: lea esi, [ecx + ecx] */ r_esi = (u32)(r_ecx+r_ecx);
    /* 0088c946: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0088c948: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 0088c94b: mov edx, dword ptr [edx + esi] */ r_edx = R32((u32)(r_edx+r_esi));
    /* 0088c94e: add edx, dword ptr [esp + 0x48] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x48u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0088c952: mov ebp, eax */ r_ebp = r_eax;
    /* 0088c954: mov edi, dword ptr [esp + 0x24] */ r_edi = R32((u32)(r_esp+0x24u));
L_0088c958:; BB(0x0088c958);
    /* 0088c958: fld dword ptr [edx + ebp*4] */ FPUSH(R_F32((u32)(r_edx+r_ebp*4)));
    /* 0088c95b: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0088c95d: fabs  */ ST(0) = fabsl(ST(0));
    /* 0088c95f: fcomp st(3) */ fx_compare(ST(0), ST(3)); FPOP();
    /* 0088c961: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0088c963: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0088c964: jbe 0x88c96e */ if ((fC||fZ)) goto L_0088c96e;
L_0088c966:; BB(0x0088c966);
    /* 0088c966: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 0088c968: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 0088c96a: fabs  */ ST(0) = fabsl(ST(0));
    /* 0088c96c: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
L_0088c96e:; BB(0x0088c96e);
    /* 0088c96e: fadd st(3) */ ST(0) = ST(0) + ST(3);
    /* 0088c970: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0088c973: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0088c977: and eax, 0xfffff3ff */ {  u32 a = r_eax; u32 b = 0xfffff3ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0088c97c: or eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0088c981: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0088c985: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0088c989: frndint  */ ST(0) = fx_rint(ST(0));
    /* 0088c98b: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0088c98e: fabs  */ ST(0) = fabsl(ST(0));
    /* 0088c990: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0088c992: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0088c993: cmp ebp, edi */ {  u32 a = r_ebp; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088c995: jl 0x88c958 */ if ((fS!=fO)) goto L_0088c958;
L_0088c997:; BB(0x0088c997);
    /* 0088c997: mov edi, dword ptr [esp + 0x2c] */ r_edi = R32((u32)(r_esp+0x2cu));
    /* 0088c99b: mov ebp, dword ptr [esp + 0x20] */ r_ebp = R32((u32)(r_esp+0x20u));
L_0088c99f:; BB(0x0088c99f);
    /* 0088c99f: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 0088c9a1: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0088c9a3: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0088c9a5: jle 0x88ca6a */ if ((fZ||fS!=fO)) goto L_0088ca6a;
L_0088c9ab:; BB(0x0088c9ab);
    /* 0088c9ab: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0088c9ae: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0088c9b2: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0088c9b7: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0088c9bb: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0088c9bf: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 0088c9c3: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0088c9c6: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
L_0088c9ca:; BB(0x0088c9ca);
    /* 0088c9ca: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0088c9cc: fcom dword ptr [ebp + edx*4 + 0x514] */ fx_compare(ST(0), R_F32((u32)(r_ebp+r_edx*4+0x514u))); 
    /* 0088c9d3: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0088c9d5: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0088c9d6: ja 0x88c9ef */ if ((!fC&&!fZ)) goto L_0088c9ef;
L_0088c9d8:; BB(0x0088c9d8);
    /* 0088c9d8: fld dword ptr [ebp + edx*4 + 0x614] */ FPUSH(R_F32((u32)(r_ebp+r_edx*4+0x614u)));
    /* 0088c9df: fcom st(4) */ fx_compare(ST(0), ST(4)); 
    /* 0088c9e1: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0088c9e3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0088c9e4: jb 0x88ca54 */ if (fC) goto L_0088ca54;
L_0088c9e6:; BB(0x0088c9e6);
    /* 0088c9e6: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 0088c9e8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0088c9ea: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0088c9eb: ja 0x88ca54 */ if ((!fC&&!fZ)) goto L_0088ca54;
L_0088c9ed:; BB(0x0088c9ed);
    /* 0088c9ed: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0088c9ef:; BB(0x0088c9ef);
    /* 0088c9ef: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0088c9f0: cmp edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088c9f2: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0088c9f4: jl 0x88c9ca */ if ((fS!=fO)) goto L_0088c9ca;
L_0088c9f6:; BB(0x0088c9f6);
    /* 0088c9f6: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0088c9f8: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0088c9fa:; BB(0x0088c9fa);
    /* 0088c9fa: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 0088c9fe: mov esi, dword ptr [esi + eax] */ r_esi = R32((u32)(r_esi+r_eax));
    /* 0088ca01: mov eax, dword ptr [esp + 0x4c] */ r_eax = R32((u32)(r_esp+0x4cu));
    /* 0088ca05: mov dword ptr [esi + eax*2], edx */ W32((u32)(r_esi+r_eax*2), r_edx);
    /* 0088ca08: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0088ca09: mov edx, dword ptr [esp + 0x3c] */ r_edx = R32((u32)(r_esp+0x3cu));
    /* 0088ca0d: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088ca0f: jl 0x88c929 */ if ((fS!=fO)) goto L_0088c929;
L_0088ca15:; BB(0x0088ca15);
    /* 0088ca15: mov eax, dword ptr [esp + 0x44] */ r_eax = R32((u32)(r_esp+0x44u));
    /* 0088ca19: mov edx, dword ptr [esp + 0x40] */ r_edx = R32((u32)(r_esp+0x40u));
L_0088ca1d:; BB(0x0088ca1d);
    /* 0088ca1d: add eax, dword ptr [esp + 0x24] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x24u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0088ca21: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0088ca22: mov ecx, dword ptr [esp + 0x28] */ r_ecx = R32((u32)(r_esp+0x28u));
    /* 0088ca26: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088ca28: jl 0x88c8fb */ if ((fS!=fO)) goto L_0088c8fb;
L_0088ca2e:; BB(0x0088ca2e);
    /* 0088ca2e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0088ca30: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0088ca32: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0088ca34:; BB(0x0088ca34);
    /* 0088ca34: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 0088ca37: inc dword ptr [edx + 0x28] */ { u32 ad = (u32)(r_edx+0x28u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0088ca3a: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 0088ca3e: add esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0088ca41: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0088ca42: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0088ca43: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0088ca44: mov esp, ebx */ r_esp = r_ebx;
    /* 0088ca46: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0088ca47: ret  */ FN_RET(0x0088c500); r_esp += 4; return;
L_0088ca48:; BB(0x0088ca48);
    /* 0088ca48: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0088ca4a: add esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0088ca4d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0088ca4e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0088ca4f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0088ca50: mov esp, ebx */ r_esp = r_ebx;
    /* 0088ca52: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0088ca53: ret  */ FN_RET(0x0088c500); r_esp += 4; return;
L_0088ca54:; BB(0x0088ca54);
    /* 0088ca54: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 0088ca56: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0088ca58: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0088ca5a: jmp 0x88c9fa */ goto L_0088c9fa;
L_0088ca5c:; BB(0x0088ca5c);
    /* 0088ca5c: lea esi, [ecx + ecx] */ r_esi = (u32)(r_ecx+r_ecx);
    /* 0088ca5f: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0088ca61: jmp 0x88c99f */ goto L_0088c99f;
L_0088ca66:; BB(0x0088ca66);
    /* 0088ca66: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0088ca68: jmp 0x88ca34 */ goto L_0088ca34;
L_0088ca6a:; BB(0x0088ca6a);
    /* 0088ca6a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0088ca6c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0088ca6e: jmp 0x88c9fa */ goto L_0088c9fa;
}

void f_0088c508(void)
{
    FN_ENTER(0x0088c508);
}

void f_0088ca70(void) /* sub_88CA70 */
{
    FN_ENTER(0x0088ca70);
    /* 0088ca70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0088ca71: mov ebp, esp */ r_ebp = r_esp;
    /* 0088ca73: sub esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0088ca76: mov dword ptr [ebp - 0x2c], edi */ W32((u32)(r_ebp+0xffffffd4u), r_edi);
    /* 0088ca79: mov dword ptr [ebp - 0x30], esi */ W32((u32)(r_ebp+0xffffffd0u), r_esi);
    /* 0088ca7c: mov dword ptr [ebp - 0x34], ebx */ W32((u32)(r_ebp+0xffffffccu), r_ebx);
    /* 0088ca7f: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 0088ca82: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 0088ca85: mov ecx, dword ptr [ebp + 0x18] */ r_ecx = R32((u32)(r_ebp+0x18u));
    /* 0088ca88: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0088ca8a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0088ca8c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0088ca8e: jle 0x88ccb4 */ if ((fZ||fS!=fO)) goto L_0088ccb4;
L_0088ca94:; BB(0x0088ca94);
    /* 0088ca94: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 0088ca97: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0088ca98: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088ca9a: je 0x88caa9 */ if (fZ) goto L_0088caa9;
L_0088ca9c:; BB(0x0088ca9c);
    /* 0088ca9c: mov ebx, dword ptr [ebp + 0x10] */ r_ebx = R32((u32)(r_ebp+0x10u));
    /* 0088ca9f: mov ecx, dword ptr [ebx + eax*4 - 4] */ r_ecx = R32((u32)(r_ebx+r_eax*4+0xfffffffcu));
    /* 0088caa3: mov edi, esi */ r_edi = r_esi;
    /* 0088caa5: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0088caa6: mov dword ptr [ebx + edi*4], ecx */ W32((u32)(r_ebx+r_edi*4), r_ecx);
L_0088caa9:; BB(0x0088caa9);
    /* 0088caa9: mov ecx, dword ptr [ebp + 0x18] */ r_ecx = R32((u32)(r_ebp+0x18u));
    /* 0088caac: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088caae: jl 0x88ca94 */ if ((fS!=fO)) goto L_0088ca94;
L_0088cab0:; BB(0x0088cab0);
    /* 0088cab0: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 0088cab3: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088cab5: je 0x88ccb4 */ if (fZ) goto L_0088ccb4;
L_0088cabb:; BB(0x0088cabb);
    /* 0088cabb: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0088cabe: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0088cac0: mov dword ptr [ebp - 0x4c], esp */ W32((u32)(r_ebp+0xffffffb4u), r_esp);
    /* 0088cac3: mov edi, dword ptr [edx + 8] */ r_edi = R32((u32)(r_edx+0x8u));
    /* 0088cac6: mov eax, dword ptr [eax + 0x10] */ r_eax = R32((u32)(r_eax+0x10u));
    /* 0088cac9: mov dword ptr [ebp - 0x48], edx */ W32((u32)(r_ebp+0xffffffb8u), r_edx);
    /* 0088cacc: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0088cace: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0088cad1: mov dword ptr [ebp - 0x44], edi */ W32((u32)(r_ebp+0xffffffbcu), r_edi);
    /* 0088cad4: mov dword ptr [ebp - 0x40], ecx */ W32((u32)(r_ebp+0xffffffc0u), r_ecx);
    /* 0088cad7: sub eax, dword ptr [edx] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0088cad9: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0088cada: idiv edi */ { i32 d = (i32)r_edi; if (!d) UNSUP(0x0088cada, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0088cada, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0088cadc: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0088cadf: lea eax, [ecx + eax - 1] */ r_eax = (u32)(r_ecx+r_eax+0xffffffffu);
    /* 0088cae3: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0088cae4: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0088cae4, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0088cae4, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0088cae6: mov edi, eax */ r_edi = r_eax;
    /* 0088cae8: lea eax, [esi + esi] */ r_eax = (u32)(r_esi+r_esi);
    /* 0088caeb: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0088caed: call 0x858020 */ r_esp -= 4; W32(r_esp, 0x88caf2u); f_00858020();
    /* 0088caf2: and esp, 0xfffffff0 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 0088caf5: mov eax, esp */ r_eax = r_esp;
    /* 0088caf7: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0088caf9: jle 0x88cb2b */ if ((fZ||fS!=fO)) goto L_0088cb2b;
L_0088cafb:; BB(0x0088cafb);
    /* 0088cafb: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0088cafd: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0088caff: mov edx, eax */ r_edx = r_eax;
    /* 0088cb01: lea ecx, [eax + esi*4] */ r_ecx = (u32)(r_eax+r_esi*4);
    /* 0088cb04: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 0088cb07: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0088cb0a: mov dword ptr [ebp - 0x50], esi */ W32((u32)(r_ebp+0xffffffb0u), r_esi);
    /* 0088cb0d: mov esi, edx */ r_esi = r_edx;
L_0088cb0f:; BB(0x0088cb0f);
    /* 0088cb0f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0088cb10: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0088cb11: call 0x87421c */ r_esp -= 4; W32(r_esp, 0x88cb16u); f_0087421c();
    /* 0088cb16: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0088cb19: mov dword ptr [esi], eax */ W32((u32)(r_esi), r_eax);
    /* 0088cb1b: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0088cb1e: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0088cb21: cmp esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0088cb23: jb 0x88cb0f */ if (fC) goto L_0088cb0f;
L_0088cb25:; BB(0x0088cb25);
    /* 0088cb25: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0088cb28: mov esi, dword ptr [ebp - 0x50] */ r_esi = R32((u32)(r_ebp+0xffffffb0u));
L_0088cb2b:; BB(0x0088cb2b);
    /* 0088cb2b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0088cb2d: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0088cb30: mov edx, dword ptr [edx + 8] */ r_edx = R32((u32)(r_edx+0x8u));
    /* 0088cb33: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0088cb35: jle 0x88ccc3 */ if ((fZ||fS!=fO)) goto L_0088ccc3;
L_0088cb3b:; BB(0x0088cb3b);
    /* 0088cb3b: lea ebx, [ebx + 4] */ r_ebx = (u32)(r_ebx+0x4u);
    /* 0088cb3e: mov dword ptr [ebp - 0x28], ebx */ W32((u32)(r_ebp+0xffffffd8u), r_ebx);
    /* 0088cb41: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0088cb44: mov ebx, dword ptr [ebp + 0xc] */ r_ebx = R32((u32)(r_ebp+0xcu));
    /* 0088cb47: mov dword ptr [ebp - 0x50], esi */ W32((u32)(r_ebp+0xffffffb0u), r_esi);
L_0088cb4a:; BB(0x0088cb4a);
    /* 0088cb4a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0088cb4c: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0088cb4e: mov edi, dword ptr [ebp - 0x3c] */ r_edi = R32((u32)(r_ebp+0xffffffc4u));
    /* 0088cb51: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 0088cb53: jle 0x88cce2 */ if ((fZ||fS!=fO)) goto L_0088cce2;
L_0088cb59:; BB(0x0088cb59);
    /* 0088cb59: mov edx, 1 */ r_edx = 0x1u;
    /* 0088cb5e: lea edi, [ecx + ecx] */ r_edi = (u32)(r_ecx+r_ecx);
    /* 0088cb61: shl edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0088cb63: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0088cb66: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 0088cb69: mov edi, dword ptr [ebp - 0x40] */ r_edi = R32((u32)(r_ebp+0xffffffc0u));
L_0088cb6c:; BB(0x0088cb6c);
    /* 0088cb6c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088cb6e: jne 0x88cbd6 */ if (!fZ) goto L_0088cbd6;
L_0088cb70:; BB(0x0088cb70);
    /* 0088cb70: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0088cb72: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0088cb75: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0088cb77: jle 0x88cbd6 */ if ((fZ||fS!=fO)) goto L_0088cbd6;
L_0088cb79:; BB(0x0088cb79);
    /* 0088cb79: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 0088cb7c: mov edi, dword ptr [ebp + 0xc] */ r_edi = R32((u32)(r_ebp+0xcu));
    /* 0088cb7f: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0088cb82: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0088cb85: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0088cb88: mov esi, dword ptr [ebp - 0x38] */ r_esi = R32((u32)(r_ebp+0xffffffc8u));
    /* 0088cb8b: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
L_0088cb8e:; BB(0x0088cb8e);
    /* 0088cb8e: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0088cb91: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0088cb92: push dword ptr [edi + 0x10] */ { u32 v = R32((u32)(r_edi+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0088cb95: call 0x88600c */ r_esp -= 4; W32(r_esp, 0x88cb9au); f_0088600c();
    /* 0088cb9a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0088cb9d: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088cba0: je 0x88ccc3 */ if (fZ) goto L_0088ccc3;
L_0088cba6:; BB(0x0088cba6);
    /* 0088cba6: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 0088cba9: mov edx, dword ptr [esi + ebx*4] */ r_edx = R32((u32)(r_esi+r_ebx*4));
    /* 0088cbac: mov ecx, dword ptr [ecx + eax*4] */ r_ecx = R32((u32)(r_ecx+r_eax*4));
    /* 0088cbaf: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0088cbb2: mov dword ptr [edx + eax*2], ecx */ W32((u32)(r_edx+r_eax*2), r_ecx);
    /* 0088cbb5: mov edx, dword ptr [esi + ebx*4] */ r_edx = R32((u32)(r_esi+r_ebx*4));
    /* 0088cbb8: cmp dword ptr [edx + eax*2], 0 */ {  u32 a = R32((u32)(r_edx+r_eax*2)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088cbbc: je 0x88ccc3 */ if (fZ) goto L_0088ccc3;
L_0088cbc2:; BB(0x0088cbc2);
    /* 0088cbc2: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0088cbc3: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 0088cbc6: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088cbc8: jl 0x88cb8e */ if ((fS!=fO)) goto L_0088cb8e;
L_0088cbca:; BB(0x0088cbca);
    /* 0088cbca: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0088cbcd: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0088cbd0: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0088cbd3: mov edi, dword ptr [ebp - 0x40] */ r_edi = R32((u32)(r_ebp+0xffffffc0u));
L_0088cbd6:; BB(0x0088cbd6);
    /* 0088cbd6: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0088cbd8: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0088cbda: jle 0x88cc97 */ if ((fZ||fS!=fO)) goto L_0088cc97;
L_0088cbe0:; BB(0x0088cbe0);
    /* 0088cbe0: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0088cbe3: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
L_0088cbe6:; BB(0x0088cbe6);
    /* 0088cbe6: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0088cbe9: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088cbeb: jge 0x88ccd7 */ if ((fS==fO)) goto L_0088ccd7;
L_0088cbf1:; BB(0x0088cbf1);
    /* 0088cbf1: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0088cbf3: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0088cbf6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0088cbf8: jle 0x88cc81 */ if ((fZ||fS!=fO)) goto L_0088cc81;
L_0088cbfe:; BB(0x0088cbfe);
    /* 0088cbfe: mov esi, eax */ r_esi = r_eax;
    /* 0088cc00: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 0088cc03: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0088cc06: imul esi, dword ptr [ebp - 0x44] */ { i64 t = (i64)(i32)r_esi * (i64)(i32)R32((u32)(r_ebp+0xffffffbcu)); r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0088cc0a: lea edi, [edi + edi] */ r_edi = (u32)(r_edi+r_edi);
    /* 0088cc0d: mov dword ptr [ebp - 8], edi */ W32((u32)(r_ebp+0xfffffff8u), r_edi);
    /* 0088cc10: mov edi, dword ptr [ebp - 0x48] */ r_edi = R32((u32)(r_ebp+0xffffffb8u));
    /* 0088cc13: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0088cc16: mov dword ptr [ebp - 0xc], esi */ W32((u32)(r_ebp+0xfffffff4u), r_esi);
    /* 0088cc19: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 0088cc1c: mov esi, dword ptr [ebp - 0x38] */ r_esi = R32((u32)(r_ebp+0xffffffc8u));
    /* 0088cc1f: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_0088cc22:; BB(0x0088cc22);
    /* 0088cc22: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 0088cc24: mov eax, dword ptr [esi + ebx*4] */ r_eax = R32((u32)(r_esi+r_ebx*4));
    /* 0088cc27: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0088cc2a: add edx, dword ptr [ebp - 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0088cc2d: mov eax, dword ptr [eax + ecx*2] */ r_eax = R32((u32)(r_eax+r_ecx*2));
    /* 0088cc30: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0088cc33: mov eax, dword ptr [eax + ecx*2] */ r_eax = R32((u32)(r_eax+r_ecx*2));
    /* 0088cc36: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0088cc39: test dword ptr [edi + eax*4 + 0x14], ecx */ {  u32 a = R32((u32)(r_edi+r_eax*4+0x14u)); u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088cc3d: je 0x88cc73 */ if (fZ) goto L_0088cc73;
L_0088cc3f:; BB(0x0088cc3f);
    /* 0088cc3f: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0088cc42: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 0088cc45: mov eax, dword ptr [ecx + eax*4] */ r_eax = R32((u32)(r_ecx+r_eax*4));
    /* 0088cc48: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0088cc4b: mov eax, dword ptr [eax + ecx*2] */ r_eax = R32((u32)(r_eax+r_ecx*2));
    /* 0088cc4e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088cc50: je 0x88cc73 */ if (fZ) goto L_0088cc73;
L_0088cc52:; BB(0x0088cc52);
    /* 0088cc52: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0088cc54: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0088cc56: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0088cc59: add edx, dword ptr [ecx + ebx*4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+r_ebx*4)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0088cc5c: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0088cc5f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0088cc60: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0088cc63: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0088cc64: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0088cc65: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0088cc66: call 0x88641c */ r_esp -= 4; W32(r_esp, 0x88cc6bu); f_0088641c();
    /* 0088cc6b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0088cc6e: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088cc71: je 0x88ccc3 */ if (fZ) goto L_0088ccc3;
L_0088cc73:; BB(0x0088cc73);
    /* 0088cc73: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0088cc74: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 0088cc77: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088cc79: jl 0x88cc22 */ if ((fS!=fO)) goto L_0088cc22;
L_0088cc7b:; BB(0x0088cc7b);
    /* 0088cc7b: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0088cc7e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
L_0088cc81:; BB(0x0088cc81);
    /* 0088cc81: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0088cc82: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0088cc83: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0088cc86: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088cc88: jl 0x88cbe6 */ if ((fS!=fO)) goto L_0088cbe6;
L_0088cc8e:; BB(0x0088cc8e);
    /* 0088cc8e: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0088cc91: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0088cc94: mov edi, dword ptr [ebp - 0x40] */ r_edi = R32((u32)(r_ebp+0xffffffc0u));
L_0088cc97:; BB(0x0088cc97);
    /* 0088cc97: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0088cc98: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0088cc9b: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088cc9d: jl 0x88cb6c */ if ((fS!=fO)) goto L_0088cb6c;
L_0088cca3:; BB(0x0088cca3);
    /* 0088cca3: mov ebx, dword ptr [ebp + 0xc] */ r_ebx = R32((u32)(r_ebp+0xcu));
    /* 0088cca6: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0088cca7: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 0088ccaa: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088ccac: jl 0x88cb4a */ if ((fS!=fO)) goto L_0088cb4a;
L_0088ccb2:; BB(0x0088ccb2);
    /* 0088ccb2: jmp 0x88ccc3 */ goto L_0088ccc3;
L_0088ccb4:; BB(0x0088ccb4);
    /* 0088ccb4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0088ccb6: mov ebx, dword ptr [ebp - 0x34] */ r_ebx = R32((u32)(r_ebp+0xffffffccu));
    /* 0088ccb9: mov esi, dword ptr [ebp - 0x30] */ r_esi = R32((u32)(r_ebp+0xffffffd0u));
    /* 0088ccbc: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 0088ccbf: mov esp, ebp */ r_esp = r_ebp;
    /* 0088ccc1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0088ccc2: ret  */ FN_RET(0x0088ca70); r_esp += 4; return;
L_0088ccc3:; BB(0x0088ccc3);
    /* 0088ccc3: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0088ccc6: mov esp, eax */ r_esp = r_eax;
    /* 0088ccc8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0088ccca: mov ebx, dword ptr [ebp - 0x34] */ r_ebx = R32((u32)(r_ebp+0xffffffccu));
    /* 0088cccd: mov esi, dword ptr [ebp - 0x30] */ r_esi = R32((u32)(r_ebp+0xffffffd0u));
    /* 0088ccd0: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 0088ccd3: mov esp, ebp */ r_esp = r_ebp;
    /* 0088ccd5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0088ccd6: ret  */ FN_RET(0x0088ca70); r_esp += 4; return;
L_0088ccd7:; BB(0x0088ccd7);
    /* 0088ccd7: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0088ccda: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0088ccdd: mov edi, dword ptr [ebp - 0x40] */ r_edi = R32((u32)(r_ebp+0xffffffc0u));
    /* 0088cce0: jmp 0x88cc97 */ goto L_0088cc97;
L_0088cce2:; BB(0x0088cce2);
    /* 0088cce2: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0088cce3: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088cce5: jl 0x88cb4a */ if ((fS!=fO)) goto L_0088cb4a;
L_0088cceb:; BB(0x0088cceb);
    /* 0088cceb: jmp 0x88ccc3 */ goto L_0088ccc3;
}

void f_0088ccf0(void) /* sub_88CCF0 */
{
    FN_ENTER(0x0088ccf0);
L_0088ccf0:; BB(0x0088ccf0);
    /* 0088ccf0: test dword ptr [0xae7f00], 0xffffff80 */ {  u32 a = R32((u32)(0xae7f00u)); u32 b = 0xffffff80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088ccfa: jne 0x88cd18 */ if (!fZ) goto L_0088cd18;
L_0088cd00:; BB(0x0088cd00);
    /* 0088cd00: test dword ptr [0xae7f00], 0xffffffff */ {  u32 a = R32((u32)(0xae7f00u)); u32 b = 0xffffffffu; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088cd0a: jne 0x88cf94 */ if (!fZ) goto L_0088cf94;
L_0088cd10:; BB(0x0088cd10);
    /* 0088cd10: call 0x86b8a0 */ r_esp -= 4; W32(r_esp, 0x88cd15u); f_0086b8a0();
    /* 0088cd15: jmp 0x88ccf0 */ goto L_0088ccf0;
L_0088cd18:; BB(0x0088cd18);
    /* 0088cd18: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0088cd19: mov ebx, esp */ r_ebx = r_esp;
    /* 0088cd1b: and esp, 0xfffffff8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 0088cd1e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0088cd1f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0088cd20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0088cd21: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0088cd24: mov ecx, dword ptr [ebx + 0x14] */ r_ecx = R32((u32)(r_ebx+0x14u));
    /* 0088cd27: mov esi, dword ptr [ebx + 0x18] */ r_esi = R32((u32)(r_ebx+0x18u));
    /* 0088cd2a: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 0088cd2c: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0088cd2e: jle 0x88cf81 */ if ((fZ||fS!=fO)) goto L_0088cf81;
L_0088cd34:; BB(0x0088cd34);
    /* 0088cd34: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0088cd36: cmp esi, 9 */ {  u32 a = r_esi; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0088cd39: jb 0x88cde7 */ if (fC) goto L_0088cde7;
L_0088cd3f:; BB(0x0088cd3f);
    /* 0088cd3f: mov eax, esi */ r_eax = r_esi;
    /* 0088cd41: mov edi, ecx */ r_edi = r_ecx;
    /* 0088cd43: and edi, 7 */ {  u32 a = r_edi; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_edi = r; fZ = (r == 0); }
    /* 0088cd46: je 0x88cd6c */ if (fZ) goto L_0088cd6c;
L_0088cd48:; BB(0x0088cd48);
    /* 0088cd48: test edi, 3 */ {  u32 a = r_edi; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088cd4e: jne 0x88cde7 */ if (!fZ) goto L_0088cde7;
L_0088cd54:; BB(0x0088cd54);
    /* 0088cd54: lea eax, [esi - 1] */ r_eax = (u32)(r_esi+0xffffffffu);
    /* 0088cd57: mov edx, 1 */ r_edx = 0x1u;
    /* 0088cd5c: cmp dword ptr [ecx], 0 */ {  u32 a = R32((u32)(r_ecx)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088cd5f: mov ebp, 0 */ r_ebp = 0x0u;
    /* 0088cd64: cmovne ebp, edx */ if (!fZ) { r_ebp = r_edx; }
    /* 0088cd67: mov edx, 1 */ r_edx = 0x1u;
L_0088cd6c:; BB(0x0088cd6c);
    /* 0088cd6c: and eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0088cd6f: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0088cd71: add eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0088cd73: movd mm0, ebp */ { u64 v = r_ebp; fpr[0] = (long double)(i64)v; }
    /* 0088cd76: movq qword ptr [esp + 0x20], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_esp+0x20u), r.q); }
L_0088cd7b:; BB(0x0088cd7b);
    /* 0088cd7b: prefetchnta byte ptr [ecx + edx*4 + 0x40] */ ;
    /* 0088cd80: movq mm4, qword ptr [0x99b000] */ { MM64 r; r.q = R64((u32)(0x99b000u)); fpr[4] = (long double)(i64)(r.q); }
    /* 0088cd87: movq mm5, qword ptr [esp + 0x20] */ { MM64 r; r.q = R64((u32)(r_esp+0x20u)); fpr[5] = (long double)(i64)(r.q); }
    /* 0088cd8c: pxor mm3, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.q = a.q ^ b.q; fpr[3] = (long double)(i64)(r.q); }
    /* 0088cd8f: movq mm0, mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; fpr[0] = (long double)(i64)(r.q); }
    /* 0088cd92: pcmpeqd mm0, qword ptr [ecx + edx*4] */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = R64((u32)(r_ecx+r_edx*4)); MM64 r; r.d[0] = (a.d[0] == b.d[0]) ? ~0u : 0; r.d[1] = (a.d[1] == b.d[1]) ? ~0u : 0; fpr[0] = (long double)(i64)(r.q); }
    /* 0088cd96: pandn mm0, mm4 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[4]; MM64 r; r.q = ~a.q & b.q; fpr[0] = (long double)(i64)(r.q); }
    /* 0088cd99: paddd mm5, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0] + b.d[0]; r.d[1] = a.d[1] + b.d[1]; fpr[5] = (long double)(i64)(r.q); }
    /* 0088cd9c: movq mm1, mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; fpr[1] = (long double)(i64)(r.q); }
    /* 0088cd9f: pcmpeqd mm1, qword ptr [ecx + edx*4 + 8] */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = R64((u32)(r_ecx+r_edx*4+0x8u)); MM64 r; r.d[0] = (a.d[0] == b.d[0]) ? ~0u : 0; r.d[1] = (a.d[1] == b.d[1]) ? ~0u : 0; fpr[1] = (long double)(i64)(r.q); }
    /* 0088cda4: pandn mm1, mm4 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[4]; MM64 r; r.q = ~a.q & b.q; fpr[1] = (long double)(i64)(r.q); }
    /* 0088cda7: paddd mm5, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0] + b.d[0]; r.d[1] = a.d[1] + b.d[1]; fpr[5] = (long double)(i64)(r.q); }
    /* 0088cdaa: movq mm2, mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; fpr[2] = (long double)(i64)(r.q); }
    /* 0088cdad: pcmpeqd mm2, qword ptr [ecx + edx*4 + 0x10] */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = R64((u32)(r_ecx+r_edx*4+0x10u)); MM64 r; r.d[0] = (a.d[0] == b.d[0]) ? ~0u : 0; r.d[1] = (a.d[1] == b.d[1]) ? ~0u : 0; fpr[2] = (long double)(i64)(r.q); }
    /* 0088cdb2: pandn mm2, mm4 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[4]; MM64 r; r.q = ~a.q & b.q; fpr[2] = (long double)(i64)(r.q); }
    /* 0088cdb5: paddd mm5, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[0] + b.d[0]; r.d[1] = a.d[1] + b.d[1]; fpr[5] = (long double)(i64)(r.q); }
    /* 0088cdb8: pcmpeqd mm3, qword ptr [ecx + edx*4 + 0x18] */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = R64((u32)(r_ecx+r_edx*4+0x18u)); MM64 r; r.d[0] = (a.d[0] == b.d[0]) ? ~0u : 0; r.d[1] = (a.d[1] == b.d[1]) ? ~0u : 0; fpr[3] = (long double)(i64)(r.q); }
    /* 0088cdbd: pandn mm3, mm4 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[4]; MM64 r; r.q = ~a.q & b.q; fpr[3] = (long double)(i64)(r.q); }
    /* 0088cdc0: paddd mm5, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[0] + b.d[0]; r.d[1] = a.d[1] + b.d[1]; fpr[5] = (long double)(i64)(r.q); }
    /* 0088cdc3: movq qword ptr [esp + 0x20], mm5 */ { MM64 r; r.q = (u64)(i64)fpr[5]; W64((u32)(r_esp+0x20u), r.q); }
    /* 0088cdc8: add edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0088cdcb: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0088cdcd: jb 0x88cd7b */ if (fC) goto L_0088cd7b;
L_0088cdcf:; BB(0x0088cdcf);
    /* 0088cdcf: movq mm1, qword ptr [esp + 0x20] */ { MM64 r; r.q = R64((u32)(r_esp+0x20u)); fpr[1] = (long double)(i64)(r.q); }
    /* 0088cdd4: movq mm0, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[0] = (long double)(i64)(r.q); }
    /* 0088cdd7: psrlq mm0, 0x20 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = R64((u32)(TEB)); MM64 r; u32 c = 0x20u; r.q = c > 63 ? 0 : (a.q >> c); fpr[0] = (long double)(i64)(r.q); }
    /* 0088cddb: paddd mm1, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0] + b.d[0]; r.d[1] = a.d[1] + b.d[1]; fpr[1] = (long double)(i64)(r.q); }
    /* 0088cdde: movd ebp, mm1 */ r_ebp = (u32)(u64)(i64)fpr[1];
    /* 0088cde1: emms  */ ; /* the MMX tag state is not modelled */
    /* 0088cde3: cmp edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0088cde5: jae 0x88cdfb */ if (!fC) goto L_0088cdfb;
L_0088cde7:; BB(0x0088cde7);
    /* 0088cde7: lea eax, [ebp + 1] */ r_eax = (u32)(r_ebp+0x1u);
    /* 0088cdea: cmp dword ptr [ecx + edx*4], 0 */ {  u32 a = R32((u32)(r_ecx+r_edx*4)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088cdee: mov edi, ebp */ r_edi = r_ebp;
    /* 0088cdf0: mov ebp, eax */ r_ebp = r_eax;
    /* 0088cdf2: jne 0x88cdf6 */ if (!fZ) goto L_0088cdf6;
L_0088cdf4:; BB(0x0088cdf4);
    /* 0088cdf4: mov ebp, edi */ r_ebp = r_edi;
L_0088cdf6:; BB(0x0088cdf6);
    /* 0088cdf6: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0088cdf7: cmp edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0088cdf9: jb 0x88cde7 */ if (fC) goto L_0088cde7;
L_0088cdfb:; BB(0x0088cdfb);
    /* 0088cdfb: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088cdfd: je 0x88cf81 */ if (fZ) goto L_0088cf81;
L_0088ce03:; BB(0x0088ce03);
    /* 0088ce03: mov ebp, dword ptr [ebx + 0xc] */ r_ebp = R32((u32)(r_ebx+0xcu));
    /* 0088ce06: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 0088ce09: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 0088ce0c: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 0088ce10: mov ebp, dword ptr [edx + 0xc] */ r_ebp = R32((u32)(r_edx+0xcu));
    /* 0088ce13: mov edi, dword ptr [edx + 4] */ r_edi = R32((u32)(r_edx+0x4u));
    /* 0088ce16: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 0088ce19: sub edi, dword ptr [edx] */ {  u32 a = r_edi; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0088ce1b: mov eax, edi */ r_eax = r_edi;
    /* 0088ce1d: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0088ce1e: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0088ce1e, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0088ce1e, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0088ce20: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 0088ce23: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0088ce27: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0088ce29: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0088ce2a: call 0x87421c */ r_esp -= 4; W32(r_esp, 0x88ce2fu); f_0087421c();
    /* 0088ce2f: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0088ce33: imul edi, esi */ { i64 t = (i64)(i32)r_edi * (i64)(i32)r_esi; r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0088ce36: mov eax, edi */ r_eax = r_edi;
    /* 0088ce38: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 0088ce3c: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0088ce3d: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0088ce3d, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0088ce3d, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0088ce3f: mov edi, eax */ r_edi = r_eax;
    /* 0088ce41: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0088ce43: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0088ce45: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0088ce46: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 0088ce49: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0088ce4a: call 0x87421c */ r_esp -= 4; W32(r_esp, 0x88ce4fu); f_0087421c();
    /* 0088ce4f: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 0088ce53: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0088ce55: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0088ce56: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0088ce58: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0088ce59: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x88ce5eu); f_0086b688();
    /* 0088ce5e: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0088ce61: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0088ce63: mov edi, dword ptr [esp + 0x1c] */ r_edi = R32((u32)(r_esp+0x1cu));
    /* 0088ce67: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0088ce69: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0088ce6a: idiv esi */ { i32 d = (i32)r_esi; if (!d) UNSUP(0x0088ce6a, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0088ce6a, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0088ce6c: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 0088ce70: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0088ce72: jle 0x88cf6d */ if ((fZ||fS!=fO)) goto L_0088cf6d;
L_0088ce78:; BB(0x0088ce78);
    /* 0088ce78: dec ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 0088ce79: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 0088ce7d: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 0088ce80: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
L_0088ce84:; BB(0x0088ce84);
    /* 0088ce84: fld dword ptr [0x99b040] */ FPUSH(R_F32((u32)(0x99b040u)));
    /* 0088ce8a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0088ce8c: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0088ce8e: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 0088ce92: fld dword ptr [0x99b040] */ FPUSH(R_F32((u32)(0x99b040u)));
    /* 0088ce98: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 0088ce9c: jle 0x88cf29 */ if ((fZ||fS!=fO)) goto L_0088cf29;
L_0088cea2:; BB(0x0088cea2);
    /* 0088cea2: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 0088cea5: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0088cea7: mov edi, eax */ r_edi = r_eax;
    /* 0088cea9: mov dword ptr [esp + 0xc], ebp */ W32((u32)(r_esp+0xcu), r_ebp);
    /* 0088cead: mov ebp, dword ptr [ebx + 0x18] */ r_ebp = R32((u32)(r_ebx+0x18u));
    /* 0088ceb0: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 0088ceb4: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
L_0088ceb8:; BB(0x0088ceb8);
    /* 0088ceb8: fld dword ptr [edx + ecx*4] */ FPUSH(R_F32((u32)(r_edx+r_ecx*4)));
    /* 0088cebb: fst dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0));
    /* 0088cebf: fabs  */ ST(0) = fabsl(ST(0));
    /* 0088cec1: fcomp dword ptr [esp + 0x20] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x20u))); FPOP();
    /* 0088cec5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0088cec7: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0088cec8: jbe 0x88ced4 */ if ((fC||fZ)) goto L_0088ced4;
L_0088ceca:; BB(0x0088ceca);
    /* 0088ceca: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 0088cece: fabs  */ ST(0) = fabsl(ST(0));
    /* 0088ced0: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
L_0088ced4:; BB(0x0088ced4);
    /* 0088ced4: mov eax, 1 */ r_eax = 0x1u;
    /* 0088ced9: cmp ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088cedc: jle 0x88cf12 */ if ((fZ||fS!=fO)) goto L_0088cf12;
L_0088cede:; BB(0x0088cede);
    /* 0088cede: mov dword ptr [esp + 0x10], edi */ W32((u32)(r_esp+0x10u), r_edi);
    /* 0088cee2: mov edi, eax */ r_edi = r_eax;
    /* 0088cee4: mov esi, dword ptr [ebx + 0x10] */ r_esi = R32((u32)(r_ebx+0x10u));
L_0088cee7:; BB(0x0088cee7);
    /* 0088cee7: mov eax, dword ptr [esi + edi*4] */ r_eax = R32((u32)(r_esi+r_edi*4));
    /* 0088ceea: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0088ceeb: fld dword ptr [eax + ecx*4] */ FPUSH(R_F32((u32)(r_eax+r_ecx*4)));
    /* 0088ceee: fst dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0));
    /* 0088cef2: fabs  */ ST(0) = fabsl(ST(0));
    /* 0088cef4: fcomp dword ptr [esp + 0x28] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x28u))); FPOP();
    /* 0088cef8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0088cefa: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0088cefb: jbe 0x88cf07 */ if ((fC||fZ)) goto L_0088cf07;
L_0088cefd:; BB(0x0088cefd);
    /* 0088cefd: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 0088cf01: fabs  */ ST(0) = fabsl(ST(0));
    /* 0088cf03: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
L_0088cf07:; BB(0x0088cf07);
    /* 0088cf07: cmp edi, ebp */ {  u32 a = r_edi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088cf09: jl 0x88cee7 */ if ((fS!=fO)) goto L_0088cee7;
L_0088cf0b:; BB(0x0088cf0b);
    /* 0088cf0b: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 0088cf0f: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
L_0088cf12:; BB(0x0088cf12);
    /* 0088cf12: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0088cf13: add edi, ebp */ {  u32 a = r_edi; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0088cf15: cmp edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088cf17: jl 0x88ceb8 */ if ((fS!=fO)) goto L_0088ceb8;
L_0088cf19:; BB(0x0088cf19);
    /* 0088cf19: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
    /* 0088cf1d: mov ebp, dword ptr [esp + 0xc] */ r_ebp = R32((u32)(r_esp+0xcu));
    /* 0088cf21: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 0088cf25: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
L_0088cf29:; BB(0x0088cf29);
    /* 0088cf29: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0088cf2b: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0088cf2d: jle 0x88cf5b */ if ((fZ||fS!=fO)) goto L_0088cf5b;
L_0088cf2f:; BB(0x0088cf2f);
    /* 0088cf2f: mov esi, dword ptr [esp + 0x1c] */ r_esi = R32((u32)(r_esp+0x1cu));
L_0088cf33:; BB(0x0088cf33);
    /* 0088cf33: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 0088cf37: fcomp dword ptr [esi + edx*4 + 0x514] */ fx_compare(ST(0), R_F32((u32)(r_esi+r_edx*4+0x514u))); FPOP();
    /* 0088cf3e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0088cf40: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0088cf41: ja 0x88cf53 */ if ((!fC&&!fZ)) goto L_0088cf53;
L_0088cf43:; BB(0x0088cf43);
    /* 0088cf43: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 0088cf47: fcomp dword ptr [esi + edx*4 + 0x614] */ fx_compare(ST(0), R_F32((u32)(r_esi+r_edx*4+0x614u))); FPOP();
    /* 0088cf4e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0088cf50: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0088cf51: jbe 0x88cf8d */ if ((fC||fZ)) goto L_0088cf8d;
L_0088cf53:; BB(0x0088cf53);
    /* 0088cf53: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0088cf54: cmp edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088cf56: jl 0x88cf33 */ if ((fS!=fO)) goto L_0088cf33;
L_0088cf58:; BB(0x0088cf58);
    /* 0088cf58: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
L_0088cf5b:; BB(0x0088cf5b);
    /* 0088cf5b: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0088cf5d: mov dword ptr [eax + ecx*4], edx */ W32((u32)(r_eax+r_ecx*4), r_edx);
    /* 0088cf60: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0088cf61: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 0088cf65: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088cf67: jl 0x88ce84 */ if ((fS!=fO)) goto L_0088ce84;
L_0088cf6d:; BB(0x0088cf6d);
    /* 0088cf6d: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 0088cf70: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0088cf74: inc dword ptr [edx + 0x28] */ { u32 ad = (u32)(r_edx+0x28u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0088cf77: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0088cf7a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0088cf7b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0088cf7c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0088cf7d: mov esp, ebx */ r_esp = r_ebx;
    /* 0088cf7f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0088cf80: ret  */ FN_RET(0x0088ccf0); r_esp += 4; return;
L_0088cf81:; BB(0x0088cf81);
    /* 0088cf81: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0088cf83: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0088cf86: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0088cf87: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0088cf88: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0088cf89: mov esp, ebx */ r_esp = r_ebx;
    /* 0088cf8b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0088cf8c: ret  */ FN_RET(0x0088ccf0); r_esp += 4; return;
L_0088cf8d:; BB(0x0088cf8d);
    /* 0088cf8d: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 0088cf90: jmp 0x88cf5b */ goto L_0088cf5b;
L_0088cf94:; BB(0x0088cf94);
    /* 0088cf94: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0088cf95: mov ebx, esp */ r_ebx = r_esp;
    /* 0088cf97: and esp, 0xfffffff8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 0088cf9a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0088cf9b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0088cf9c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0088cf9d: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0088cfa0: mov ecx, dword ptr [ebx + 0x14] */ r_ecx = R32((u32)(r_ebx+0x14u));
    /* 0088cfa3: mov esi, dword ptr [ebx + 0x18] */ r_esi = R32((u32)(r_ebx+0x18u));
    /* 0088cfa6: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0088cfa8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0088cfaa: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0088cfac: jle 0x88d139 */ if ((fZ||fS!=fO)) goto L_0088d139;
L_0088cfb2:; BB(0x0088cfb2);
    /* 0088cfb2: mov ebp, dword ptr [ecx + eax*4] */ r_ebp = R32((u32)(r_ecx+r_eax*4));
    /* 0088cfb5: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0088cfb6: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088cfb8: je 0x88cfbb */ if (fZ) goto L_0088cfbb;
L_0088cfba:; BB(0x0088cfba);
    /* 0088cfba: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
L_0088cfbb:; BB(0x0088cfbb);
    /* 0088cfbb: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088cfbd: jl 0x88cfb2 */ if ((fS!=fO)) goto L_0088cfb2;
L_0088cfbf:; BB(0x0088cfbf);
    /* 0088cfbf: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088cfc1: je 0x88d139 */ if (fZ) goto L_0088d139;
L_0088cfc7:; BB(0x0088cfc7);
    /* 0088cfc7: mov ebp, dword ptr [ebx + 0xc] */ r_ebp = R32((u32)(r_ebx+0xcu));
    /* 0088cfca: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 0088cfcd: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 0088cfd1: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 0088cfd4: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 0088cfd7: mov ebp, dword ptr [edx + 0xc] */ r_ebp = R32((u32)(r_edx+0xcu));
    /* 0088cfda: mov edi, dword ptr [edx + 4] */ r_edi = R32((u32)(r_edx+0x4u));
    /* 0088cfdd: sub edi, dword ptr [edx] */ {  u32 a = r_edi; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0088cfdf: mov eax, edi */ r_eax = r_edi;
    /* 0088cfe1: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0088cfe2: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0088cfe2, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0088cfe2, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0088cfe4: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0088cfe8: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0088cfea: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 0088cfed: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0088cfee: call 0x87421c */ r_esp -= 4; W32(r_esp, 0x88cff3u); f_0087421c();
    /* 0088cff3: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0088cff7: imul edi, esi */ { i64 t = (i64)(i32)r_edi * (i64)(i32)r_esi; r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0088cffa: mov eax, edi */ r_eax = r_edi;
    /* 0088cffc: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0088cffd: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 0088d001: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0088d001, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0088d001, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0088d003: mov edi, eax */ r_edi = r_eax;
    /* 0088d005: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0088d007: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0088d009: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0088d00a: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 0088d00d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0088d00e: call 0x87421c */ r_esp -= 4; W32(r_esp, 0x88d013u); f_0087421c();
    /* 0088d013: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 0088d017: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0088d019: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0088d01a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0088d01c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0088d01d: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x88d022u); f_0086b688();
    /* 0088d022: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0088d025: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0088d027: mov edi, dword ptr [esp + 0x1c] */ r_edi = R32((u32)(r_esp+0x1cu));
    /* 0088d02b: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0088d02d: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0088d02e: idiv esi */ { i32 d = (i32)r_esi; if (!d) UNSUP(0x0088d02e, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0088d02e, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0088d030: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 0088d034: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0088d036: jle 0x88d125 */ if ((fZ||fS!=fO)) goto L_0088d125;
L_0088d03c:; BB(0x0088d03c);
    /* 0088d03c: dec ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 0088d03d: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0088d041: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 0088d045: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
L_0088d048:; BB(0x0088d048);
    /* 0088d048: fld dword ptr [0x99b03c] */ FPUSH(R_F32((u32)(0x99b03cu)));
    /* 0088d04e: fld dword ptr [0x99b03c] */ FPUSH(R_F32((u32)(0x99b03cu)));
    /* 0088d054: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0088d056: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0088d058: jle 0x88d0dd */ if ((fZ||fS!=fO)) goto L_0088d0dd;
L_0088d05e:; BB(0x0088d05e);
    /* 0088d05e: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 0088d061: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0088d063: mov dword ptr [esp + 0xc], ebp */ W32((u32)(r_esp+0xcu), r_ebp);
    /* 0088d067: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 0088d06b: mov edi, eax */ r_edi = r_eax;
    /* 0088d06d: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 0088d071: mov ebp, dword ptr [ebx + 0x18] */ r_ebp = R32((u32)(r_ebx+0x18u));
L_0088d074:; BB(0x0088d074);
    /* 0088d074: fld dword ptr [edx + ecx*4] */ FPUSH(R_F32((u32)(r_edx+r_ecx*4)));
    /* 0088d077: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0088d079: fabs  */ ST(0) = fabsl(ST(0));
    /* 0088d07b: fcomp st(3) */ fx_compare(ST(0), ST(3)); FPOP();
    /* 0088d07d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0088d07f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0088d080: jbe 0x88d08a */ if ((fC||fZ)) goto L_0088d08a;
L_0088d082:; BB(0x0088d082);
    /* 0088d082: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 0088d084: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 0088d086: fabs  */ ST(0) = fabsl(ST(0));
    /* 0088d088: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
L_0088d08a:; BB(0x0088d08a);
    /* 0088d08a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0088d08c: mov eax, 1 */ r_eax = 0x1u;
    /* 0088d091: cmp ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088d094: jle 0x88d0c6 */ if ((fZ||fS!=fO)) goto L_0088d0c6;
L_0088d096:; BB(0x0088d096);
    /* 0088d096: mov dword ptr [esp + 0x10], edi */ W32((u32)(r_esp+0x10u), r_edi);
    /* 0088d09a: mov edi, eax */ r_edi = r_eax;
    /* 0088d09c: mov esi, dword ptr [ebx + 0x10] */ r_esi = R32((u32)(r_ebx+0x10u));
L_0088d09f:; BB(0x0088d09f);
    /* 0088d09f: mov eax, dword ptr [esi + edi*4] */ r_eax = R32((u32)(r_esi+r_edi*4));
    /* 0088d0a2: fld dword ptr [eax + ecx*4] */ FPUSH(R_F32((u32)(r_eax+r_ecx*4)));
    /* 0088d0a5: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0088d0a7: fabs  */ ST(0) = fabsl(ST(0));
    /* 0088d0a9: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0088d0aa: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 0088d0ac: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0088d0ae: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0088d0af: jbe 0x88d0b9 */ if ((fC||fZ)) goto L_0088d0b9;
L_0088d0b1:; BB(0x0088d0b1);
    /* 0088d0b1: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0088d0b3: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0088d0b5: fabs  */ ST(0) = fabsl(ST(0));
    /* 0088d0b7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
L_0088d0b9:; BB(0x0088d0b9);
    /* 0088d0b9: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0088d0bb: cmp edi, ebp */ {  u32 a = r_edi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088d0bd: jl 0x88d09f */ if ((fS!=fO)) goto L_0088d09f;
L_0088d0bf:; BB(0x0088d0bf);
    /* 0088d0bf: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 0088d0c3: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
L_0088d0c6:; BB(0x0088d0c6);
    /* 0088d0c6: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0088d0c7: add edi, ebp */ {  u32 a = r_edi; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0088d0c9: cmp edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088d0cb: jl 0x88d074 */ if ((fS!=fO)) goto L_0088d074;
L_0088d0cd:; BB(0x0088d0cd);
    /* 0088d0cd: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
    /* 0088d0d1: mov ebp, dword ptr [esp + 0xc] */ r_ebp = R32((u32)(r_esp+0xcu));
    /* 0088d0d5: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 0088d0d9: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
L_0088d0dd:; BB(0x0088d0dd);
    /* 0088d0dd: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0088d0df: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0088d0e1: jle 0x88d14e */ if ((fZ||fS!=fO)) goto L_0088d14e;
L_0088d0e3:; BB(0x0088d0e3);
    /* 0088d0e3: mov esi, dword ptr [esp + 0x1c] */ r_esi = R32((u32)(r_esp+0x1cu));
L_0088d0e7:; BB(0x0088d0e7);
    /* 0088d0e7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0088d0e9: fcom dword ptr [esi + edx*4 + 0x514] */ fx_compare(ST(0), R_F32((u32)(r_esi+r_edx*4+0x514u))); 
    /* 0088d0f0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0088d0f2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0088d0f3: ja 0x88d105 */ if ((!fC&&!fZ)) goto L_0088d105;
L_0088d0f5:; BB(0x0088d0f5);
    /* 0088d0f5: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0088d0f7: fcom dword ptr [esi + edx*4 + 0x614] */ fx_compare(ST(0), R_F32((u32)(r_esi+r_edx*4+0x614u))); 
    /* 0088d0fe: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0088d100: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0088d101: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0088d103: jbe 0x88d145 */ if ((fC||fZ)) goto L_0088d145;
L_0088d105:; BB(0x0088d105);
    /* 0088d105: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0088d106: cmp edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088d108: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0088d10a: jl 0x88d0e7 */ if ((fS!=fO)) goto L_0088d0e7;
L_0088d10c:; BB(0x0088d10c);
    /* 0088d10c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0088d10e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0088d110: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
L_0088d113:; BB(0x0088d113);
    /* 0088d113: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0088d115: mov dword ptr [eax + ecx*4], edx */ W32((u32)(r_eax+r_ecx*4), r_edx);
    /* 0088d118: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0088d119: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 0088d11d: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088d11f: jl 0x88d048 */ if ((fS!=fO)) goto L_0088d048;
L_0088d125:; BB(0x0088d125);
    /* 0088d125: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 0088d128: inc dword ptr [edx + 0x28] */ { u32 ad = (u32)(r_edx+0x28u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0088d12b: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0088d12f: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0088d132: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0088d133: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0088d134: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0088d135: mov esp, ebx */ r_esp = r_ebx;
    /* 0088d137: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0088d138: ret  */ FN_RET(0x0088ccf0); r_esp += 4; return;
L_0088d139:; BB(0x0088d139);
    /* 0088d139: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0088d13b: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0088d13e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0088d13f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0088d140: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0088d141: mov esp, ebx */ r_esp = r_ebx;
    /* 0088d143: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0088d144: ret  */ FN_RET(0x0088ccf0); r_esp += 4; return;
L_0088d145:; BB(0x0088d145);
    /* 0088d145: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0088d147: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0088d149: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 0088d14c: jmp 0x88d113 */ goto L_0088d113;
L_0088d14e:; BB(0x0088d14e);
    /* 0088d14e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0088d150: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0088d152: jmp 0x88d113 */ goto L_0088d113;
}

