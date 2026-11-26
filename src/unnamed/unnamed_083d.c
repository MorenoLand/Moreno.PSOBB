#include "protos.h"

void f_0083d2fc(void) /* sub_83D2FC */
{
    FN_ENTER(0x0083d2fc);
    /* 0083d2fc: sub esp, 0x190 */ {  u32 a = r_esp; u32 b = 0x190u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0083d302: mov ecx, dword ptr [esp + 0x194] */ r_ecx = R32((u32)(r_esp+0x194u));
    /* 0083d309: lea eax, [esp + 0x44] */ r_eax = (u32)(r_esp+0x44u);
    /* 0083d30d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083d30e: lea edx, [esp + 0x54] */ r_edx = (u32)(r_esp+0x54u);
    /* 0083d312: call 0x84a90c */ r_esp -= 4; W32(r_esp, 0x83d317u); f_0084a90c();
    /* 0083d317: lea eax, [esp + 0x5c] */ r_eax = (u32)(r_esp+0x5cu);
    /* 0083d31b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083d31c: mov ecx, dword ptr [esp + 0x19c] */ r_ecx = R32((u32)(r_esp+0x19cu));
    /* 0083d323: lea edx, [esp + 0x6c] */ r_edx = (u32)(r_esp+0x6cu);
    /* 0083d327: call 0x84a9dc */ r_esp -= 4; W32(r_esp, 0x83d32cu); f_0084a9dc();
    /* 0083d32c: lea ecx, [esp + 0x68] */ r_ecx = (u32)(r_esp+0x68u);
    /* 0083d330: lea eax, [esp + 0x5c] */ r_eax = (u32)(r_esp+0x5cu);
    /* 0083d334: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083d335: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0083d336: lea ecx, [esp + 0x58] */ r_ecx = (u32)(r_esp+0x58u);
    /* 0083d33a: lea edx, [esp + 0x4c] */ r_edx = (u32)(r_esp+0x4cu);
    /* 0083d33e: call 0x84aa18 */ r_esp -= 4; W32(r_esp, 0x83d343u); f_0084aa18();
    /* 0083d343: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083d345: je 0x83db8e */ if (fZ) goto L_0083db8e;
L_0083d34b:; BB(0x0083d34b);
    /* 0083d34b: mov eax, 0x98afe0 */ r_eax = 0x98afe0u;
    /* 0083d350: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0083d352: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0083d355: mov dword ptr [esp + 0x74], edx */ W32((u32)(r_esp+0x74u), r_edx);
    /* 0083d359: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 0083d35c: mov dword ptr [esp + 0x78], ecx */ W32((u32)(r_esp+0x78u), r_ecx);
    /* 0083d360: mov dword ptr [esp + 0x7c], edx */ W32((u32)(r_esp+0x7cu), r_edx);
    /* 0083d364: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 0083d367: mov dword ptr [esp + 0x80], edx */ W32((u32)(r_esp+0x80u), r_edx);
    /* 0083d36e: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 0083d371: mov dword ptr [esp + 0x84], edx */ W32((u32)(r_esp+0x84u), r_edx);
    /* 0083d378: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 0083d37b: mov dword ptr [esp + 0x88], edx */ W32((u32)(r_esp+0x88u), r_edx);
    /* 0083d382: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 0083d385: mov dword ptr [esp + 0x8c], edx */ W32((u32)(r_esp+0x8cu), r_edx);
    /* 0083d38c: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 0083d38f: mov dword ptr [esp + 0x90], edx */ W32((u32)(r_esp+0x90u), r_edx);
    /* 0083d396: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 0083d399: mov dword ptr [esp + 0x94], edx */ W32((u32)(r_esp+0x94u), r_edx);
    /* 0083d3a0: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 0083d3a3: mov dword ptr [esp + 0x98], edx */ W32((u32)(r_esp+0x98u), r_edx);
    /* 0083d3aa: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 0083d3ad: mov dword ptr [esp + 0x9c], edx */ W32((u32)(r_esp+0x9cu), r_edx);
    /* 0083d3b4: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 0083d3b7: mov dword ptr [esp + 0xa0], edx */ W32((u32)(r_esp+0xa0u), r_edx);
    /* 0083d3be: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 0083d3c1: mov dword ptr [esp + 0xa4], edx */ W32((u32)(r_esp+0xa4u), r_edx);
    /* 0083d3c8: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 0083d3cb: mov dword ptr [esp + 0xa8], edx */ W32((u32)(r_esp+0xa8u), r_edx);
    /* 0083d3d2: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 0083d3d5: mov dword ptr [esp + 0xac], edx */ W32((u32)(r_esp+0xacu), r_edx);
    /* 0083d3dc: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 0083d3df: mov dword ptr [esp + 0xb0], edx */ W32((u32)(r_esp+0xb0u), r_edx);
    /* 0083d3e6: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 0083d3e9: mov dword ptr [esp + 0xb4], edx */ W32((u32)(r_esp+0xb4u), r_edx);
    /* 0083d3f0: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0083d3f3: mov dword ptr [esp + 0xb8], edx */ W32((u32)(r_esp+0xb8u), r_edx);
    /* 0083d3fa: mov edx, dword ptr [eax + 0x48] */ r_edx = R32((u32)(r_eax+0x48u));
    /* 0083d3fd: mov dword ptr [esp + 0xbc], edx */ W32((u32)(r_esp+0xbcu), r_edx);
    /* 0083d404: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 0083d407: mov dword ptr [esp + 0xc0], edx */ W32((u32)(r_esp+0xc0u), r_edx);
    /* 0083d40e: mov edx, dword ptr [eax + 0x50] */ r_edx = R32((u32)(r_eax+0x50u));
    /* 0083d411: mov dword ptr [esp + 0xc4], edx */ W32((u32)(r_esp+0xc4u), r_edx);
    /* 0083d418: mov edx, dword ptr [eax + 0x54] */ r_edx = R32((u32)(r_eax+0x54u));
    /* 0083d41b: mov dword ptr [esp + 0xc8], edx */ W32((u32)(r_esp+0xc8u), r_edx);
    /* 0083d422: mov edx, dword ptr [eax + 0x58] */ r_edx = R32((u32)(r_eax+0x58u));
    /* 0083d425: mov eax, dword ptr [eax + 0x5c] */ r_eax = R32((u32)(r_eax+0x5cu));
    /* 0083d428: mov dword ptr [esp + 0xcc], edx */ W32((u32)(r_esp+0xccu), r_edx);
    /* 0083d42f: mov dword ptr [esp + 0xd0], eax */ W32((u32)(r_esp+0xd0u), r_eax);
    /* 0083d436: mov eax, 0x98af80 */ r_eax = 0x98af80u;
    /* 0083d43b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0083d43d: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0083d440: mov dword ptr [esp + 0xd4], edx */ W32((u32)(r_esp+0xd4u), r_edx);
    /* 0083d447: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 0083d44a: mov dword ptr [esp + 0xd8], ecx */ W32((u32)(r_esp+0xd8u), r_ecx);
    /* 0083d451: mov dword ptr [esp + 0xdc], edx */ W32((u32)(r_esp+0xdcu), r_edx);
    /* 0083d458: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 0083d45b: mov dword ptr [esp + 0xe0], edx */ W32((u32)(r_esp+0xe0u), r_edx);
    /* 0083d462: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 0083d465: mov dword ptr [esp + 0xe4], edx */ W32((u32)(r_esp+0xe4u), r_edx);
    /* 0083d46c: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 0083d46f: mov dword ptr [esp + 0xe8], edx */ W32((u32)(r_esp+0xe8u), r_edx);
    /* 0083d476: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 0083d479: mov dword ptr [esp + 0xec], edx */ W32((u32)(r_esp+0xecu), r_edx);
    /* 0083d480: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 0083d483: mov dword ptr [esp + 0xf0], edx */ W32((u32)(r_esp+0xf0u), r_edx);
    /* 0083d48a: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 0083d48d: mov dword ptr [esp + 0xf4], edx */ W32((u32)(r_esp+0xf4u), r_edx);
    /* 0083d494: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 0083d497: mov dword ptr [esp + 0xf8], edx */ W32((u32)(r_esp+0xf8u), r_edx);
    /* 0083d49e: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 0083d4a1: mov dword ptr [esp + 0xfc], edx */ W32((u32)(r_esp+0xfcu), r_edx);
    /* 0083d4a8: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 0083d4ab: mov dword ptr [esp + 0x100], edx */ W32((u32)(r_esp+0x100u), r_edx);
    /* 0083d4b2: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 0083d4b5: mov dword ptr [esp + 0x104], edx */ W32((u32)(r_esp+0x104u), r_edx);
    /* 0083d4bc: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 0083d4bf: mov dword ptr [esp + 0x108], edx */ W32((u32)(r_esp+0x108u), r_edx);
    /* 0083d4c6: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 0083d4c9: mov dword ptr [esp + 0x10c], edx */ W32((u32)(r_esp+0x10cu), r_edx);
    /* 0083d4d0: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 0083d4d3: mov dword ptr [esp + 0x110], edx */ W32((u32)(r_esp+0x110u), r_edx);
    /* 0083d4da: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 0083d4dd: mov dword ptr [esp + 0x114], edx */ W32((u32)(r_esp+0x114u), r_edx);
    /* 0083d4e4: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0083d4e7: mov dword ptr [esp + 0x118], edx */ W32((u32)(r_esp+0x118u), r_edx);
    /* 0083d4ee: mov edx, dword ptr [eax + 0x48] */ r_edx = R32((u32)(r_eax+0x48u));
    /* 0083d4f1: mov dword ptr [esp + 0x11c], edx */ W32((u32)(r_esp+0x11cu), r_edx);
    /* 0083d4f8: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 0083d4fb: mov dword ptr [esp + 0x120], edx */ W32((u32)(r_esp+0x120u), r_edx);
    /* 0083d502: mov edx, dword ptr [eax + 0x50] */ r_edx = R32((u32)(r_eax+0x50u));
    /* 0083d505: mov dword ptr [esp + 0x124], edx */ W32((u32)(r_esp+0x124u), r_edx);
    /* 0083d50c: mov edx, dword ptr [eax + 0x54] */ r_edx = R32((u32)(r_eax+0x54u));
    /* 0083d50f: mov dword ptr [esp + 0x128], edx */ W32((u32)(r_esp+0x128u), r_edx);
    /* 0083d516: mov edx, dword ptr [eax + 0x58] */ r_edx = R32((u32)(r_eax+0x58u));
    /* 0083d519: mov eax, dword ptr [eax + 0x5c] */ r_eax = R32((u32)(r_eax+0x5cu));
    /* 0083d51c: mov dword ptr [esp + 0x12c], edx */ W32((u32)(r_esp+0x12cu), r_edx);
    /* 0083d523: mov dword ptr [esp + 0x130], eax */ W32((u32)(r_esp+0x130u), r_eax);
    /* 0083d52a: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 0083d52e: mov dword ptr [esp + 0xc], esi */ W32((u32)(r_esp+0xcu), r_esi);
    /* 0083d532: mov esi, dword ptr [esp + 0x194] */ r_esi = R32((u32)(r_esp+0x194u));
    /* 0083d539: mov dword ptr [esp + 0x10], edi */ W32((u32)(r_esp+0x10u), r_edi);
    /* 0083d53d: mov dword ptr [esp + 0x14], ebp */ W32((u32)(r_esp+0x14u), r_ebp);
    /* 0083d541: mov eax, 1 */ r_eax = 0x1u;
    /* 0083d546: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0083d548: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0083d54b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0083d54d: mov ebx, edx */ r_ebx = r_edx;
    /* 0083d54f: mov ebp, ecx */ r_ebp = r_ecx;
L_0083d551:; BB(0x0083d551);
    /* 0083d551: mov edi, dword ptr [esp + ebx + 0x78] */ r_edi = R32((u32)(r_esp+r_ebx+0x78u));
    /* 0083d555: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0083d557: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0083d559: lea edx, [edi + edi] */ r_edx = (u32)(r_edi+r_edi);
    /* 0083d55c: add edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0083d55e: fld dword ptr [edx + esi + 4] */ FPUSH(R_F32((u32)(r_edx+r_esi+0x4u)));
    /* 0083d562: mov edi, dword ptr [esp + ebx + 0x7c] */ r_edi = R32((u32)(r_esp+r_ebx+0x7cu));
    /* 0083d566: fld dword ptr [edx + esi + 8] */ FPUSH(R_F32((u32)(r_edx+r_esi+0x8u)));
    /* 0083d56a: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0083d56c: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0083d56e: lea eax, [edi + edi] */ r_eax = (u32)(r_edi+r_edi);
    /* 0083d571: add eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0083d573: mov edi, dword ptr [esp + ebx + 0x74] */ r_edi = R32((u32)(r_esp+r_ebx+0x74u));
    /* 0083d577: fld dword ptr [eax + esi + 8] */ FPUSH(R_F32((u32)(r_eax+r_esi+0x8u)));
    /* 0083d57b: fld dword ptr [eax + esi + 4] */ FPUSH(R_F32((u32)(r_eax+r_esi+0x4u)));
    /* 0083d57f: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0083d581: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0083d583: lea ecx, [edi + edi] */ r_ecx = (u32)(r_edi+r_edi);
    /* 0083d586: add ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0083d588: fld dword ptr [ecx + esi + 4] */ FPUSH(R_F32((u32)(r_ecx+r_esi+0x4u)));
    /* 0083d58c: fsub st(4), st(0) */ ST(4) = ST(4) - ST(0);
    /* 0083d58e: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0083d590: fld dword ptr [ecx + esi + 8] */ FPUSH(R_F32((u32)(r_ecx+r_esi+0x8u)));
    /* 0083d594: fsub st(2), st(0) */ ST(2) = ST(2) - ST(0);
    /* 0083d596: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0083d598: fmulp st(4) */ ST(4) = ST(4) * ST(0); FPOP();
    /* 0083d59a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0083d59c: fsubp st(2) */ ST(2) = ST(2) - ST(0); FPOP();
    /* 0083d59e: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0083d5a0: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0083d5a2: fchs  */ ST(0) = -ST(0);
    /* 0083d5a4: fst dword ptr [esp + ebp + 0x134] */ W_F32((u32)(r_esp+r_ebp+0x134u), ST(0));
    /* 0083d5ab: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0083d5ad: fld dword ptr [ecx + esi] */ FPUSH(R_F32((u32)(r_ecx+r_esi)));
    /* 0083d5b0: fld dword ptr [ecx + esi + 8] */ FPUSH(R_F32((u32)(r_ecx+r_esi+0x8u)));
    /* 0083d5b4: fld dword ptr [edx + esi + 8] */ FPUSH(R_F32((u32)(r_edx+r_esi+0x8u)));
    /* 0083d5b8: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 0083d5ba: fld dword ptr [eax + esi] */ FPUSH(R_F32((u32)(r_eax+r_esi)));
    /* 0083d5bd: fsub st(3) */ ST(0) = ST(0) - ST(3);
    /* 0083d5bf: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0083d5c1: fld dword ptr [edx + esi] */ FPUSH(R_F32((u32)(r_edx+r_esi)));
    /* 0083d5c4: fsubrp st(3) */ ST(3) = ST(0) - ST(3); FPOP();
    /* 0083d5c6: fld dword ptr [eax + esi + 8] */ FPUSH(R_F32((u32)(r_eax+r_esi+0x8u)));
    /* 0083d5ca: fsubrp st(2) */ ST(2) = ST(0) - ST(2); FPOP();
    /* 0083d5cc: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0083d5ce: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0083d5d0: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 0083d5d2: fchs  */ ST(0) = -ST(0);
    /* 0083d5d4: fst dword ptr [esp + ebp + 0x138] */ W_F32((u32)(r_esp+r_ebp+0x138u), ST(0));
    /* 0083d5db: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0083d5dd: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083d5df: fld dword ptr [ecx + esi] */ FPUSH(R_F32((u32)(r_ecx+r_esi)));
    /* 0083d5e2: fld dword ptr [ecx + esi + 4] */ FPUSH(R_F32((u32)(r_ecx+r_esi+0x4u)));
    /* 0083d5e6: fld dword ptr [edx + esi] */ FPUSH(R_F32((u32)(r_edx+r_esi)));
    /* 0083d5e9: fsub st(2) */ ST(0) = ST(0) - ST(2);
    /* 0083d5eb: fld dword ptr [eax + esi + 4] */ FPUSH(R_F32((u32)(r_eax+r_esi+0x4u)));
    /* 0083d5ef: fsub st(2) */ ST(0) = ST(0) - ST(2);
    /* 0083d5f1: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0083d5f3: fld dword ptr [edx + esi + 4] */ FPUSH(R_F32((u32)(r_edx+r_esi+0x4u)));
    /* 0083d5f7: fsubrp st(2) */ ST(2) = ST(0) - ST(2); FPOP();
    /* 0083d5f9: fld dword ptr [eax + esi] */ FPUSH(R_F32((u32)(r_eax+r_esi)));
    /* 0083d5fc: fsubrp st(3) */ ST(3) = ST(0) - ST(3); FPOP();
    /* 0083d5fe: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0083d600: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0083d602: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0083d604: fchs  */ ST(0) = -ST(0);
    /* 0083d606: fst dword ptr [esp + ebp + 0x13c] */ W_F32((u32)(r_esp+r_ebp+0x13cu), ST(0));
    /* 0083d60d: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0083d60f: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083d611: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0083d612: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0083d615: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x83d61au); f_0082dc9c();
    /* 0083d61a: fld dword ptr [0x98b044] */ FPUSH(R_F32((u32)(0x98b044u)));
    /* 0083d620: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 0083d622: fld dword ptr [esp + ebp + 0x134] */ FPUSH(R_F32((u32)(r_esp+r_ebp+0x134u)));
    /* 0083d629: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0083d62b: fld dword ptr [esp + ebp + 0x138] */ FPUSH(R_F32((u32)(r_esp+r_ebp+0x138u)));
    /* 0083d632: fld dword ptr [esp + ebp + 0x13c] */ FPUSH(R_F32((u32)(r_esp+r_ebp+0x13cu)));
    /* 0083d639: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0083d63b: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0083d63d: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0083d63f: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0083d641: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0083d643: fstp dword ptr [esp + ebp + 0x134] */ W_F32((u32)(r_esp+r_ebp+0x134u), ST(0)); FPOP();
    /* 0083d64a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0083d64c: fstp dword ptr [esp + ebp + 0x138] */ W_F32((u32)(r_esp+r_ebp+0x138u), ST(0)); FPOP();
    /* 0083d653: fstp dword ptr [esp + ebp + 0x13c] */ W_F32((u32)(r_esp+r_ebp+0x13cu), ST(0)); FPOP();
    /* 0083d65a: add ebp, 0xc */ {  u32 a = r_ebp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0083d65d: add ebx, 0x10 */ {  u32 a = r_ebx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0083d660: cmp ebx, 0x60 */ {  u32 a = r_ebx; u32 b = 0x60u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0083d663: jl 0x83d551 */ if ((fS!=fO)) goto L_0083d551;
L_0083d669:; BB(0x0083d669);
    /* 0083d669: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 0083d66c: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 0083d670: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 0083d674: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 0083d678: mov ebp, dword ptr [esp + 0x14] */ r_ebp = R32((u32)(r_esp+0x14u));
    /* 0083d67c: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 0083d680: mov dword ptr [esp + 0xc], esi */ W32((u32)(r_esp+0xcu), r_esi);
    /* 0083d684: mov esi, eax */ r_esi = r_eax;
    /* 0083d686: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0083d688: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0083d68a: mov dword ptr [esp + 0x10], edi */ W32((u32)(r_esp+0x10u), r_edi);
    /* 0083d68e: mov edi, ecx */ r_edi = r_ecx;
    /* 0083d690: mov dword ptr [esp + 0x14], ebp */ W32((u32)(r_esp+0x14u), r_ebp);
    /* 0083d694: mov ebp, edx */ r_ebp = r_edx;
L_0083d696:; BB(0x0083d696);
    /* 0083d696: fld dword ptr [esp + edi + 0x134] */ FPUSH(R_F32((u32)(r_esp+r_edi+0x134u)));
    /* 0083d69d: fld dword ptr [esp + edi + 0x134] */ FPUSH(R_F32((u32)(r_esp+r_edi+0x134u)));
    /* 0083d6a4: fld dword ptr [esp + edi + 0x138] */ FPUSH(R_F32((u32)(r_esp+r_edi+0x138u)));
    /* 0083d6ab: fld dword ptr [esp + edi + 0x13c] */ FPUSH(R_F32((u32)(r_esp+r_edi+0x13cu)));
    /* 0083d6b2: mov ebx, 1 */ r_ebx = 0x1u;
    /* 0083d6b7: mov eax, dword ptr [esp + ebp + 0x74] */ r_eax = R32((u32)(r_esp+r_ebp+0x74u));
    /* 0083d6bb: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0083d6bd: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0083d6bf: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0083d6c2: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0083d6c4: mov eax, dword ptr [esp + 0x194] */ r_eax = R32((u32)(r_esp+0x194u));
    /* 0083d6cb: fld dword ptr [edx + eax] */ FPUSH(R_F32((u32)(r_edx+r_eax)));
    /* 0083d6ce: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 0083d6d0: fld dword ptr [edx + eax + 4] */ FPUSH(R_F32((u32)(r_edx+r_eax+0x4u)));
    /* 0083d6d4: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0083d6d6: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083d6d8: fld dword ptr [edx + eax + 8] */ FPUSH(R_F32((u32)(r_edx+r_eax+0x8u)));
    /* 0083d6dc: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0083d6de: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083d6e0: mov eax, dword ptr [esp + 0x198] */ r_eax = R32((u32)(r_esp+0x198u));
    /* 0083d6e7: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 0083d6e9: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 0083d6ec: fld dword ptr [eax + 8] */ FPUSH(R_F32((u32)(r_eax+0x8u)));
    /* 0083d6ef: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0083d6f1: fmul st(6), st(0) */ ST(6) = ST(6) * ST(0);
    /* 0083d6f3: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
    /* 0083d6f7: fld dword ptr [esp + edi + 0x138] */ FPUSH(R_F32((u32)(r_esp+r_edi+0x138u)));
    /* 0083d6fe: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0083d700: faddp st(6) */ ST(6) = ST(6) + ST(0); FPOP();
    /* 0083d702: fld dword ptr [esp + edi + 0x13c] */ FPUSH(R_F32((u32)(r_esp+r_edi+0x13cu)));
    /* 0083d709: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0083d70b: faddp st(6) */ ST(6) = ST(6) + ST(0); FPOP();
    /* 0083d70d: fld dword ptr [esp + edi + 0x134] */ FPUSH(R_F32((u32)(r_esp+r_edi+0x134u)));
    /* 0083d714: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0083d716: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0083d718: fchs  */ ST(0) = -ST(0);
    /* 0083d71a: faddp st(6) */ ST(6) = ST(6) + ST(0); FPOP();
    /* 0083d71c: fld dword ptr [esp + edi + 0x138] */ FPUSH(R_F32((u32)(r_esp+r_edi+0x138u)));
    /* 0083d723: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0083d725: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 0083d727: fld dword ptr [esp + edi + 0x13c] */ FPUSH(R_F32((u32)(r_esp+r_edi+0x13cu)));
    /* 0083d72e: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0083d730: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 0083d732: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0083d734: fchs  */ ST(0) = -ST(0);
    /* 0083d736: fdivrp st(2) */ ST(2) = ST(0) / ST(2); FPOP();
    /* 0083d738: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0083d73a: fmul st(5), st(0) */ ST(5) = ST(5) * ST(0);
    /* 0083d73c: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 0083d73e: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0083d740: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0083d742: fadd st(3) */ ST(0) = ST(0) + ST(3);
    /* 0083d744: fld dword ptr [esp + 0x40] */ FPUSH(R_F32((u32)(r_esp+0x40u)));
    /* 0083d748: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0083d74a: fst dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0));
    /* 0083d74e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0083d750: fadd st(5), st(0) */ ST(5) = ST(5) + ST(0);
    /* 0083d752: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0083d754: fst dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0));
    /* 0083d758: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0083d75a: fadd st(3) */ ST(0) = ST(0) + ST(3);
    /* 0083d75c: fst dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0));
    /* 0083d760: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0083d762: fsubrp st(5) */ ST(5) = ST(0) - ST(5); FPOP();
    /* 0083d764: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0083d766: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0083d768: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0083d76a: fsubrp st(3) */ ST(3) = ST(0) - ST(3); FPOP();
    /* 0083d76c: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0083d76e: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0083d770: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0083d772: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 0083d774: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0083d776: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0083d778: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0083d77a: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083d77c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0083d77d: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0083d780: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x83d785u); f_0082dc9c();
    /* 0083d785: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 0083d789: mov dword ptr [esp + 0x28], ebp */ W32((u32)(r_esp+0x28u), r_ebp);
    /* 0083d78d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0083d78f: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 0083d793: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 0083d796: mov esi, eax */ r_esi = r_eax;
L_0083d798:; BB(0x0083d798);
    /* 0083d798: mov edi, dword ptr [esp + 0x28] */ r_edi = R32((u32)(r_esp+0x28u));
    /* 0083d79c: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 0083d7a0: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 0083d7a4: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 0083d7a6: mov dword ptr [esp + 0x17c], ebp */ W32((u32)(r_esp+0x17cu), r_ebp);
    /* 0083d7ad: mov dword ptr [esp + 0x180], 1 */ W32((u32)(r_esp+0x180u), 0x1u);
    /* 0083d7b8: mov dword ptr [esp + 0x18c], ebp */ W32((u32)(r_esp+0x18cu), r_ebp);
    /* 0083d7bf: mov dword ptr [esp + 0x184], 2 */ W32((u32)(r_esp+0x184u), 0x2u);
    /* 0083d7ca: mov dword ptr [esp + 0x188], 3 */ W32((u32)(r_esp+0x188u), 0x3u);
    /* 0083d7d5: mov ebp, dword ptr [esp + esi*4 + 0x17c] */ r_ebp = R32((u32)(r_esp+r_esi*4+0x17cu));
    /* 0083d7dc: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0083d7de: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0083d7e0: mov edx, dword ptr [esp + esi*4 + 0x180] */ r_edx = R32((u32)(r_esp+r_esi*4+0x180u));
    /* 0083d7e7: add ebp, edi */ {  u32 a = r_ebp; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0083d7e9: mov eax, dword ptr [esp + ebp + 0x74] */ r_eax = R32((u32)(r_esp+r_ebp+0x74u));
    /* 0083d7ed: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0083d7ef: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0083d7f1: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 0083d7f4: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0083d7f6: mov eax, dword ptr [esp + 0x194] */ r_eax = R32((u32)(r_esp+0x194u));
    /* 0083d7fd: fld dword ptr [ecx + eax] */ FPUSH(R_F32((u32)(r_ecx+r_eax)));
    /* 0083d800: fsub st(2), st(0) */ ST(2) = ST(2) - ST(0);
    /* 0083d802: fld dword ptr [ecx + eax + 4] */ FPUSH(R_F32((u32)(r_ecx+r_eax+0x4u)));
    /* 0083d806: fsub st(2), st(0) */ ST(2) = ST(2) - ST(0);
    /* 0083d808: fld dword ptr [ecx + eax + 8] */ FPUSH(R_F32((u32)(r_ecx+r_eax+0x8u)));
    /* 0083d80c: fst dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0));
    /* 0083d810: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0083d812: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0083d814: add edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0083d816: mov edx, dword ptr [esp + edx + 0x74] */ r_edx = R32((u32)(r_esp+r_edx+0x74u));
    /* 0083d81a: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0083d81c: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0083d81e: lea edi, [edx + edx] */ r_edi = (u32)(r_edx+r_edx);
    /* 0083d821: add edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0083d823: fld dword ptr [edi + eax] */ FPUSH(R_F32((u32)(r_edi+r_eax)));
    /* 0083d826: fsubr st(3) */ ST(0) = ST(3) - ST(0);
    /* 0083d828: fld dword ptr [edi + eax + 4] */ FPUSH(R_F32((u32)(r_edi+r_eax+0x4u)));
    /* 0083d82c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0083d82e: fmul st(6), st(0) */ ST(6) = ST(6) * ST(0);
    /* 0083d830: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0083d832: fsubr st(3) */ ST(0) = ST(3) - ST(0);
    /* 0083d834: fmul st(5), st(0) */ ST(5) = ST(5) * ST(0);
    /* 0083d836: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0083d838: faddp st(6) */ ST(6) = ST(6) + ST(0); FPOP();
    /* 0083d83a: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 0083d83e: fsub st(2) */ ST(0) = ST(0) - ST(2);
    /* 0083d840: fld dword ptr [edi + eax + 8] */ FPUSH(R_F32((u32)(r_edi+r_eax+0x8u)));
    /* 0083d844: fsubp st(3) */ ST(3) = ST(3) - ST(0); FPOP();
    /* 0083d846: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0083d848: fld st(5) */ { long double v = ST(5); FPUSH(v); }
    /* 0083d84a: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0083d84c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0083d84e: faddp st(7) */ ST(7) = ST(7) + ST(0); FPOP();
    /* 0083d850: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 0083d852: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0083d854: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083d856: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 0083d858: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0083d85a: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083d85c: fdivp st(6) */ ST(6) = ST(6) / ST(0); FPOP();
    /* 0083d85e: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 0083d862: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0083d864: fmul st(6) */ ST(0) = ST(0) * ST(6);
    /* 0083d866: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0083d868: fmul st(6) */ ST(0) = ST(0) * ST(6);
    /* 0083d86a: fxch st(6) */ { long double t = ST(0); ST(0) = ST(6); ST(6) = t; }
    /* 0083d86c: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0083d86e: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0083d870: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 0083d872: fld dword ptr [esp + 0x40] */ FPUSH(R_F32((u32)(r_esp+0x40u)));
    /* 0083d876: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0083d878: fst dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0));
    /* 0083d87c: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0083d87e: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0083d880: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 0083d884: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0083d886: fst dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0));
    /* 0083d88a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0083d88c: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 0083d88e: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0083d890: fst dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0));
    /* 0083d894: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0083d896: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 0083d898: fst dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0));
    /* 0083d89c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0083d89e: fsubrp st(2) */ ST(2) = ST(0) - ST(2); FPOP();
    /* 0083d8a0: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 0083d8a4: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0083d8a6: fst dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0));
    /* 0083d8aa: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0083d8ac: fsubrp st(2) */ ST(2) = ST(0) - ST(2); FPOP();
    /* 0083d8ae: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0083d8b0: fst dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0));
    /* 0083d8b4: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0083d8b6: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0083d8b8: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0083d8ba: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0083d8bc: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0083d8be: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0083d8c0: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0083d8c2: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0083d8c4: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083d8c6: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0083d8c7: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0083d8ca: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x83d8cfu); f_0082dc9c();
    /* 0083d8cf: fdivr dword ptr [0x98b044] */ ST(0) = R_F32((u32)(0x98b044u)) / ST(0);
    /* 0083d8d5: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 0083d8d9: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0083d8db: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 0083d8df: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0083d8e1: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 0083d8e5: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 0083d8e7: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0083d8eb: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0083d8ed: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 0083d8f1: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0083d8f2: mov edx, dword ptr [esp + ebp + 0xd8] */ r_edx = R32((u32)(r_esp+r_ebp+0xd8u));
    /* 0083d8f9: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0083d8fb: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0083d8fd: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 0083d900: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0083d902: fsubr dword ptr [esp + ecx + 0x138] */ ST(0) = R_F32((u32)(r_esp+r_ecx+0x138u)) - ST(0);
    /* 0083d909: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0083d90c: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x83d911u); f_0082e900();
    /* 0083d911: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 0083d915: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0083d916: mov edx, dword ptr [esp + ebp + 0xd8] */ r_edx = R32((u32)(r_esp+r_ebp+0xd8u));
    /* 0083d91d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0083d91f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0083d921: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 0083d924: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0083d926: fld dword ptr [esp + ecx + 0x13c] */ FPUSH(R_F32((u32)(r_esp+r_ecx+0x13cu)));
    /* 0083d92d: fsub dword ptr [esp + 0x34] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x34u));
    /* 0083d931: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0083d934: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x83d939u); f_0082e900();
    /* 0083d939: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0083d93d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0083d93e: mov edx, dword ptr [esp + ebp + 0xd8] */ r_edx = R32((u32)(r_esp+r_ebp+0xd8u));
    /* 0083d945: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0083d947: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0083d949: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 0083d94c: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0083d94e: fld dword ptr [esp + ecx + 0x140] */ FPUSH(R_F32((u32)(r_esp+r_ecx+0x140u)));
    /* 0083d955: fsub dword ptr [esp + 0x40] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x40u));
    /* 0083d959: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0083d95c: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x83d961u); f_0082e900();
    /* 0083d961: mov ecx, dword ptr [esp + 0x198] */ r_ecx = R32((u32)(r_esp+0x198u));
    /* 0083d968: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 0083d96c: fcomp dword ptr [0x98b040] */ fx_compare(ST(0), R_F32((u32)(0x98b040u))); FPOP();
    /* 0083d972: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0083d974: fld dword ptr [ecx + 0xc] */ FPUSH(R_F32((u32)(r_ecx+0xcu)));
    /* 0083d977: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 0083d979: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 0083d97d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0083d97e: fcomp dword ptr [0x98b040] */ fx_compare(ST(0), R_F32((u32)(0x98b040u))); FPOP();
    /* 0083d984: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0083d986: mov edx, 1 */ r_edx = 0x1u;
    /* 0083d98b: jbe 0x83d98f */ if ((fC||fZ)) goto L_0083d98f;
L_0083d98d:; BB(0x0083d98d);
    /* 0083d98d: mov edx, ebp */ r_edx = r_ebp;
L_0083d98f:; BB(0x0083d98f);
    /* 0083d98f: mov edi, 0 */ r_edi = 0x0u;
    /* 0083d994: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0083d995: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0083d997: fcomp dword ptr [0x98b040] */ fx_compare(ST(0), R_F32((u32)(0x98b040u))); FPOP();
    /* 0083d99d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0083d99f: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0083d9a4: mov ebp, 1 */ r_ebp = 0x1u;
    /* 0083d9a9: jbe 0x83d9ad */ if ((fC||fZ)) goto L_0083d9ad;
L_0083d9ab:; BB(0x0083d9ab);
    /* 0083d9ab: mov ecx, edi */ r_ecx = r_edi;
L_0083d9ad:; BB(0x0083d9ad);
    /* 0083d9ad: and edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0083d9af: mov ecx, 0 */ r_ecx = 0x0u;
    /* 0083d9b4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0083d9b5: fcom dword ptr [esp + 0x18] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x18u))); 
    /* 0083d9b9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0083d9bb: jbe 0x83d9bf */ if ((fC||fZ)) goto L_0083d9bf;
L_0083d9bd:; BB(0x0083d9bd);
    /* 0083d9bd: mov ebp, ecx */ r_ebp = r_ecx;
L_0083d9bf:; BB(0x0083d9bf);
    /* 0083d9bf: and edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0083d9c1: mov ecx, 0 */ r_ecx = 0x0u;
    /* 0083d9c6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0083d9c7: mov ebp, 1 */ r_ebp = 0x1u;
    /* 0083d9cc: jae 0x83d9d0 */ if (!fC) goto L_0083d9d0;
L_0083d9ce:; BB(0x0083d9ce);
    /* 0083d9ce: mov ebp, ecx */ r_ebp = r_ecx;
L_0083d9d0:; BB(0x0083d9d0);
    /* 0083d9d0: test ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083d9d2: je 0x83d9db */ if (fZ) goto L_0083d9db;
L_0083d9d4:; BB(0x0083d9d4);
    /* 0083d9d4: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0083d9d6: and ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 0083d9d9: jmp 0x83da24 */ goto L_0083da24;
L_0083d9db:; BB(0x0083d9db);
    /* 0083d9db: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 0083d9df: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 0083d9e1: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0083d9e3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0083d9e4: ja 0x83db7c */ if ((!fC&&!fZ)) goto L_0083db7c;
L_0083d9ea:; BB(0x0083d9ea);
    /* 0083d9ea: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0083d9ec: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 0083d9f0: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0083d9f2: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0083d9f4: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 0083d9f8: fsubr dword ptr [esp + 0x1c] */ ST(0) = R_F32((u32)(r_esp+0x1cu)) - ST(0);
    /* 0083d9fc: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0083d9fe: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 0083da02: fsubr dword ptr [esp + 0x20] */ ST(0) = R_F32((u32)(r_esp+0x20u)) - ST(0);
    /* 0083da06: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0083da08: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083da0a: fld dword ptr [esp + 0x40] */ FPUSH(R_F32((u32)(r_esp+0x40u)));
    /* 0083da0e: fsubr dword ptr [esp + 0x24] */ ST(0) = R_F32((u32)(r_esp+0x24u)) - ST(0);
    /* 0083da12: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0083da14: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083da16: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0083da18: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0083da1a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0083da1b: ja 0x83db6c */ if ((!fC&&!fZ)) goto L_0083db6c;
L_0083da21:; BB(0x0083da21);
    /* 0083da21: and ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
L_0083da24:; BB(0x0083da24);
    /* 0083da24: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0083da27: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0083da2a: jl 0x83d798 */ if ((fS!=fO)) goto L_0083d798;
L_0083da30:; BB(0x0083da30);
    /* 0083da30: mov ebp, dword ptr [esp + 0x28] */ r_ebp = R32((u32)(r_esp+0x28u));
    /* 0083da34: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 0083da38: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 0083da3b: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083da3d: jne 0x83dba7 */ if (!fZ) goto L_0083dba7;
L_0083da43:; BB(0x0083da43);
    /* 0083da43: mov ebx, dword ptr [esp + 0x198] */ r_ebx = R32((u32)(r_esp+0x198u));
    /* 0083da4a: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 0083da4e: fsub dword ptr [ebx] */ ST(0) = ST(0) - R_F32((u32)(r_ebx));
    /* 0083da50: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 0083da54: fsub dword ptr [ebx + 4] */ ST(0) = ST(0) - R_F32((u32)(r_ebx+0x4u));
    /* 0083da57: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 0083da5b: fsub dword ptr [ebx + 8] */ ST(0) = ST(0) - R_F32((u32)(r_ebx+0x8u));
    /* 0083da5e: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0083da60: fst dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0));
    /* 0083da64: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0083da66: fst dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0));
    /* 0083da6a: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0083da6c: fst dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0));
    /* 0083da70: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0083da72: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0083da74: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0083da76: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0083da78: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0083da7a: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0083da7c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0083da7e: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0083da80: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083da82: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0083da83: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0083da86: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x83da8bu); f_0082dc9c();
    /* 0083da8b: fdivr dword ptr [0x98b044] */ ST(0) = R_F32((u32)(0x98b044u)) / ST(0);
    /* 0083da91: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 0083da95: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0083da97: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 0083da9b: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0083da9d: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 0083daa1: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 0083daa3: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 0083daa7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0083daa9: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 0083daad: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0083daae: fsubr dword ptr [esp + edi + 0x138] */ ST(0) = R_F32((u32)(r_esp+r_edi+0x138u)) - ST(0);
    /* 0083dab5: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0083dab8: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x83dabdu); f_0082e900();
    /* 0083dabd: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
    /* 0083dac1: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0083dac2: fld dword ptr [esp + edi + 0x13c] */ FPUSH(R_F32((u32)(r_esp+r_edi+0x13cu)));
    /* 0083dac9: fsub dword ptr [esp + 0x24] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x24u));
    /* 0083dacd: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0083dad0: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x83dad5u); f_0082e900();
    /* 0083dad5: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 0083dad9: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0083dada: fld dword ptr [esp + edi + 0x140] */ FPUSH(R_F32((u32)(r_esp+r_edi+0x140u)));
    /* 0083dae1: fsub dword ptr [esp + 0x28] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x28u));
    /* 0083dae5: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0083dae8: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x83daedu); f_0082e900();
    /* 0083daed: fld dword ptr [0x98b040] */ FPUSH(R_F32((u32)(0x98b040u)));
    /* 0083daf3: fld dword ptr [esp + 0x40] */ FPUSH(R_F32((u32)(r_esp+0x40u)));
    /* 0083daf7: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 0083daf9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0083dafb: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0083dafd: mov edx, 1 */ r_edx = 0x1u;
    /* 0083db02: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 0083db06: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0083db07: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 0083db09: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0083db0b: jbe 0x83db0f */ if ((fC||fZ)) goto L_0083db0f;
L_0083db0d:; BB(0x0083db0d);
    /* 0083db0d: mov edx, ebx */ r_edx = r_ebx;
L_0083db0f:; BB(0x0083db0f);
    /* 0083db0f: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0083db11: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0083db12: mov eax, 1 */ r_eax = 0x1u;
    /* 0083db17: jbe 0x83db1b */ if ((fC||fZ)) goto L_0083db1b;
L_0083db19:; BB(0x0083db19);
    /* 0083db19: mov eax, ebx */ r_eax = r_ebx;
L_0083db1b:; BB(0x0083db1b);
    /* 0083db1b: and edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0083db1d: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0083db1f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0083db21: mov ebx, 0 */ r_ebx = 0x0u;
    /* 0083db26: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0083db27: mov eax, 1 */ r_eax = 0x1u;
    /* 0083db2c: jae 0x83db30 */ if (!fC) goto L_0083db30;
L_0083db2e:; BB(0x0083db2e);
    /* 0083db2e: mov eax, ebx */ r_eax = r_ebx;
L_0083db30:; BB(0x0083db30);
    /* 0083db30: test eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083db32: je 0x83db39 */ if (fZ) goto L_0083db39;
L_0083db34:; BB(0x0083db34);
    /* 0083db34: and esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 0083db37: jmp 0x83db3b */ goto L_0083db3b;
L_0083db39:; BB(0x0083db39);
    /* 0083db39: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_0083db3b:; BB(0x0083db3b);
    /* 0083db3b: add edi, 0xc */ {  u32 a = r_edi; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0083db3e: add ebp, 0x10 */ {  u32 a = r_ebp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0083db41: cmp ebp, 0x60 */ {  u32 a = r_ebp; u32 b = 0x60u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0083db44: jl 0x83d696 */ if ((fS!=fO)) goto L_0083d696;
L_0083db4a:; BB(0x0083db4a);
    /* 0083db4a: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 0083db4e: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 0083db52: mov ebp, dword ptr [esp + 0x14] */ r_ebp = R32((u32)(r_esp+0x14u));
    /* 0083db56: mov eax, esi */ r_eax = r_esi;
    /* 0083db58: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083db5a: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 0083db5e: je 0x83db8e */ if (fZ) goto L_0083db8e;
L_0083db60:; BB(0x0083db60);
    /* 0083db60: mov eax, 1 */ r_eax = 0x1u;
    /* 0083db65: add esp, 0x190 */ {  u32 a = r_esp; u32 b = 0x190u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0083db6b: ret  */ FN_RET(0x0083d2fc); r_esp += 4; return;
L_0083db6c:; BB(0x0083db6c);
    /* 0083db6c: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0083db6e: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0083db71: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0083db74: jl 0x83d798 */ if ((fS!=fO)) goto L_0083d798;
L_0083db7a:; BB(0x0083db7a);
    /* 0083db7a: jmp 0x83dbc3 */ goto L_0083dbc3;
L_0083db7c:; BB(0x0083db7c);
    /* 0083db7c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0083db7e: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0083db80: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0083db83: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0083db86: jl 0x83d798 */ if ((fS!=fO)) goto L_0083d798;
L_0083db8c:; BB(0x0083db8c);
    /* 0083db8c: jmp 0x83db97 */ goto L_0083db97;
L_0083db8e:; BB(0x0083db8e);
    /* 0083db8e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0083db90: add esp, 0x190 */ {  u32 a = r_esp; u32 b = 0x190u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0083db96: ret  */ FN_RET(0x0083d2fc); r_esp += 4; return;
L_0083db97:; BB(0x0083db97);
    /* 0083db97: mov ebp, dword ptr [esp + 0x28] */ r_ebp = R32((u32)(r_esp+0x28u));
    /* 0083db9b: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 0083db9f: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 0083dba2: jmp 0x83da43 */ goto L_0083da43;
L_0083dba7:; BB(0x0083dba7);
    /* 0083dba7: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 0083dbab: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 0083dbaf: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 0083dbb3: mov ebp, dword ptr [esp + 0x14] */ r_ebp = R32((u32)(r_esp+0x14u));
    /* 0083dbb7: mov eax, 1 */ r_eax = 0x1u;
    /* 0083dbbc: add esp, 0x190 */ {  u32 a = r_esp; u32 b = 0x190u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0083dbc2: ret  */ FN_RET(0x0083d2fc); r_esp += 4; return;
L_0083dbc3:; BB(0x0083dbc3);
    /* 0083dbc3: mov ebp, dword ptr [esp + 0x28] */ r_ebp = R32((u32)(r_esp+0x28u));
    /* 0083dbc7: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 0083dbcb: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 0083dbce: jmp 0x83da43 */ goto L_0083da43;
}

void f_0083dbd4(void) /* sub_83DBD4 */
{
    FN_ENTER(0x0083dbd4);
    /* 0083dbd4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0083dbd5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0083dbd6: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 0083dbda: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 0083dbde: fld dword ptr [esi] */ FPUSH(R_F32((u32)(r_esi)));
    /* 0083dbe0: fsub dword ptr [edi] */ ST(0) = ST(0) - R_F32((u32)(r_edi));
    /* 0083dbe2: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0083dbe4: fld dword ptr [esi + 4] */ FPUSH(R_F32((u32)(r_esi+0x4u)));
    /* 0083dbe7: fsub dword ptr [edi + 4] */ ST(0) = ST(0) - R_F32((u32)(r_edi+0x4u));
    /* 0083dbea: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0083dbec: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083dbee: fld dword ptr [esi + 8] */ FPUSH(R_F32((u32)(r_esi+0x8u)));
    /* 0083dbf1: fsub dword ptr [edi + 8] */ ST(0) = ST(0) - R_F32((u32)(r_edi+0x8u));
    /* 0083dbf4: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0083dbf6: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083dbf8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0083dbf9: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0083dbfc: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x83dc01u); f_0082dc9c();
    /* 0083dc01: fld dword ptr [esi + 0xc] */ FPUSH(R_F32((u32)(r_esi+0xcu)));
    /* 0083dc04: fadd dword ptr [edi + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0xcu));
    /* 0083dc07: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0083dc09: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0083dc0b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0083dc0c: jbe 0x83dc16 */ if ((fC||fZ)) goto L_0083dc16;
L_0083dc0e:; BB(0x0083dc0e);
    /* 0083dc0e: mov eax, 1 */ r_eax = 0x1u;
    /* 0083dc13: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0083dc14: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0083dc15: ret  */ FN_RET(0x0083dbd4); r_esp += 4; return;
L_0083dc16:; BB(0x0083dc16);
    /* 0083dc16: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0083dc18: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0083dc19: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0083dc1a: ret  */ FN_RET(0x0083dbd4); r_esp += 4; return;
}

void f_0083dc1c(void) /* sub_83DC1C */
{
    FN_ENTER(0x0083dc1c);
    /* 0083dc1c: mov dword ptr [0xad9804], ecx */ W32((u32)(0xad9804u), r_ecx);
    /* 0083dc22: ret  */ FN_RET(0x0083dc1c); r_esp += 4; return;
}

void f_0083dc24(void) /* sub_83DC24 */
{
    FN_ENTER(0x0083dc24);
    /* 0083dc24: mov eax, dword ptr [0xad9804] */ r_eax = R32((u32)(0xad9804u));
    /* 0083dc29: ret  */ FN_RET(0x0083dc24); r_esp += 4; return;
}

void f_0083dc2c(void) /* sub_83DC2C */
{
    FN_ENTER(0x0083dc2c);
    /* 0083dc2c: mov dword ptr [0xad9808], ecx */ W32((u32)(0xad9808u), r_ecx);
    /* 0083dc32: ret  */ FN_RET(0x0083dc2c); r_esp += 4; return;
}

void f_0083dc34(void) /* sub_83DC34 */
{
    FN_ENTER(0x0083dc34);
    /* 0083dc34: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0083dc35: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0083dc36: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0083dc37: mov edi, dword ptr [0xaf034c] */ r_edi = R32((u32)(0xaf034cu));
    /* 0083dc3d: mov esi, edi */ r_esi = r_edi;
    /* 0083dc3f: and esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a & b) & 0xffffffffu; r_esi = r; fZ = (r == 0); }
    /* 0083dc42: jne 0x83dc52 */ if (!fZ) goto L_0083dc52;
L_0083dc44:; BB(0x0083dc44);
    /* 0083dc44: mov ebx, edi */ r_ebx = r_edi;
    /* 0083dc46: and ebx, 0x20 */ {  u32 a = r_ebx; u32 b = 0x20u; u32 r = (a & b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); }
    /* 0083dc49: je 0x83dc5c */ if (fZ) goto L_0083dc5c;
L_0083dc4b:; BB(0x0083dc4b);
    /* 0083dc4b: call 0x84a614 */ r_esp -= 4; W32(r_esp, 0x83dc50u); f_0084a614();
    /* 0083dc50: jmp 0x83dc5c */ goto L_0083dc5c;
L_0083dc52:; BB(0x0083dc52);
    /* 0083dc52: call 0x84a544 */ r_esp -= 4; W32(r_esp, 0x83dc57u); f_0084a544();
    /* 0083dc57: mov ebx, edi */ r_ebx = r_edi;
    /* 0083dc59: and ebx, 0x20 */ {  u32 a = r_ebx; u32 b = 0x20u; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
L_0083dc5c:; BB(0x0083dc5c);
    /* 0083dc5c: test edi, 0x8000 */ {  u32 a = r_edi; u32 b = 0x8000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083dc62: je 0x83dc79 */ if (fZ) goto L_0083dc79;
L_0083dc64:; BB(0x0083dc64);
    /* 0083dc64: mov edx, dword ptr [0xaccaa8] */ r_edx = R32((u32)(0xaccaa8u));
    /* 0083dc6a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0083dc6c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0083dc6e: push dword ptr [0xaccaa4] */ { u32 v = R32((u32)(0xaccaa4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0083dc74: call 0x836248 */ r_esp -= 4; W32(r_esp, 0x83dc79u); f_00836248();
L_0083dc79:; BB(0x0083dc79);
    /* 0083dc79: test edi, 0x800 */ {  u32 a = r_edi; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083dc7f: je 0x83dc8f */ if (fZ) goto L_0083dc8f;
L_0083dc81:; BB(0x0083dc81);
    /* 0083dc81: mov edx, dword ptr [0xaf0360] */ r_edx = R32((u32)(0xaf0360u));
    /* 0083dc87: mov ecx, dword ptr [0xaf0364] */ r_ecx = R32((u32)(0xaf0364u));
    /* 0083dc8d: jmp 0x83dc96 */ goto L_0083dc96;
L_0083dc8f:; BB(0x0083dc8f);
    /* 0083dc8f: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 0083dc94: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_0083dc96:; BB(0x0083dc96);
    /* 0083dc96: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083dc98: je 0x83dcb1 */ if (fZ) goto L_0083dcb1;
L_0083dc9a:; BB(0x0083dc9a);
    /* 0083dc9a: fld dword ptr [0xaf0370] */ FPUSH(R_F32((u32)(0xaf0370u)));
    /* 0083dca0: fcomp qword ptr [0x98b068] */ fx_compare(ST(0), R_F64((u32)(0x98b068u))); FPOP();
    /* 0083dca6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0083dca8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0083dca9: je 0x83dcb1 */ if (fZ) goto L_0083dcb1;
L_0083dcab:; BB(0x0083dcab);
    /* 0083dcab: or ecx, 0x800 */ {  u32 a = r_ecx; u32 b = 0x800u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
L_0083dcb1:; BB(0x0083dcb1);
    /* 0083dcb1: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083dcb3: je 0x83dccc */ if (fZ) goto L_0083dccc;
L_0083dcb5:; BB(0x0083dcb5);
    /* 0083dcb5: fld dword ptr [0xaf0370] */ FPUSH(R_F32((u32)(0xaf0370u)));
    /* 0083dcbb: fcomp qword ptr [0x98b060] */ fx_compare(ST(0), R_F64((u32)(0x98b060u))); FPOP();
    /* 0083dcc1: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0083dcc3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0083dcc4: je 0x83dccc */ if (fZ) goto L_0083dccc;
L_0083dcc6:; BB(0x0083dcc6);
    /* 0083dcc6: or ecx, 0x800 */ {  u32 a = r_ecx; u32 b = 0x800u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
L_0083dccc:; BB(0x0083dccc);
    /* 0083dccc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0083dccd: mov ecx, edi */ r_ecx = r_edi;
    /* 0083dccf: call 0x8376fc */ r_esp -= 4; W32(r_esp, 0x83dcd4u); f_008376fc();
    /* 0083dcd4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0083dcd5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0083dcd6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0083dcd7: ret  */ FN_RET(0x0083dc34); r_esp += 4; return;
}

void f_0083dcd8(void) /* sub_83DCD8 */
{
    FN_ENTER(0x0083dcd8);
    /* 0083dcd8: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 0083dcdd: test al, 0x30 */ {  u32 a = (u8)r_eax; u32 b = 0x30u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0083dcdf: je 0x83dce6 */ if (fZ) goto L_0083dce6;
L_0083dce1:; BB(0x0083dce1);
    /* 0083dce1: call 0x84a624 */ r_esp -= 4; W32(r_esp, 0x83dce6u); f_0084a624();
L_0083dce6:; BB(0x0083dce6);
    /* 0083dce6: mov eax, dword ptr [0xacd538] */ r_eax = R32((u32)(0xacd538u));
    /* 0083dceb: and eax, 0xfffffbff */ {  u32 a = r_eax; u32 b = 0xfffffbffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0083dcf0: mov dword ptr [0xacd538], eax */ W32((u32)(0xacd538u), r_eax);
    /* 0083dcf5: ret  */ FN_RET(0x0083dcd8); r_esp += 4; return;
}

void f_0083dcf8(void) /* sub_83DCF8 */
{
    FN_ENTER(0x0083dcf8);
    /* 0083dcf8: mov eax, dword ptr [0xad9804] */ r_eax = R32((u32)(0xad9804u));
    /* 0083dcfd: mov edx, dword ptr [0xaf034c] */ r_edx = R32((u32)(0xaf034cu));
    /* 0083dd03: mov dword ptr [0xad9800], eax */ W32((u32)(0xad9800u), r_eax);
    /* 0083dd08: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0083dd0b: je 0x83dd17 */ if (fZ) goto L_0083dd17;
L_0083dd0d:; BB(0x0083dd0d);
    /* 0083dd0d: mov dword ptr [0xad9804], 3 */ W32((u32)(0xad9804u), 0x3u);
L_0083dd17:; BB(0x0083dd17);
    /* 0083dd17: ret  */ FN_RET(0x0083dcf8); r_esp += 4; return;
}

void f_0083dd18(void) /* sub_83DD18 */
{
    FN_ENTER(0x0083dd18);
    /* 0083dd18: mov eax, dword ptr [0xad9800] */ r_eax = R32((u32)(0xad9800u));
    /* 0083dd1d: mov dword ptr [0xad9804], eax */ W32((u32)(0xad9804u), r_eax);
    /* 0083dd22: ret  */ FN_RET(0x0083dd18); r_esp += 4; return;
}

void f_0083dd38(void) /* sub_83DD38 */
{
    FN_ENTER(0x0083dd38);
    /* 0083dd38: mov eax, dword ptr [0xa21c60] */ r_eax = R32((u32)(0xa21c60u));
    /* 0083dd3d: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0083dd40: je 0x83dd49 */ if (fZ) goto L_0083dd49;
L_0083dd42:; BB(0x0083dd42);
    /* 0083dd42: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083dd43: call dword ptr [0x8f8194] */ { u32 t = R32((u32)(0x8f8194u)); r_esp -= 4; W32(r_esp, 0x83dd49u); call_ind(t); }
L_0083dd49:; BB(0x0083dd49);
    /* 0083dd49: mov dword ptr [0xa21c60], 0xffffffff */ W32((u32)(0xa21c60u), 0xffffffffu);
    /* 0083dd53: ret  */ FN_RET(0x0083dd38); r_esp += 4; return;
}

void f_0083dd54(void) /* sub_83DD54 */
{
    FN_ENTER(0x0083dd54);
    /* 0083dd54: mov eax, dword ptr [0xa21c60] */ r_eax = R32((u32)(0xa21c60u));
    /* 0083dd59: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083dd5c: je 0x83dd61 */ if (fZ) goto L_0083dd61;
L_0083dd5e:; BB(0x0083dd5e);
    /* 0083dd5e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0083dd60: ret  */ FN_RET(0x0083dd54); r_esp += 4; return;
L_0083dd61:; BB(0x0083dd61);
    /* 0083dd61: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0083dd63: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083dd64: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083dd65: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083dd66: call dword ptr [0x8f8198] */ { u32 t = R32((u32)(0x8f8198u)); r_esp -= 4; W32(r_esp, 0x83dd6cu); call_ind(t); }
    /* 0083dd6c: mov dword ptr [0xa21c60], eax */ W32((u32)(0xa21c60u), r_eax);
    /* 0083dd71: jmp 0x83dd5e */ goto L_0083dd5e;
}

void f_0083dd74(void) /* sub_83DD74 */
{
    FN_ENTER(0x0083dd74);
    /* 0083dd74: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0083dd77: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0083dd7a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083dd7b: call dword ptr [0x8f8170] */ { u32 t = R32((u32)(0x8f8170u)); r_esp -= 4; W32(r_esp, 0x83dd81u); call_ind(t); }
    /* 0083dd81: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0083dd85: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0083dd89: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0083dd8b: push 0xf4240 */ { u32 v = 0xf4240u; r_esp -= 4; W32(r_esp, v); }
    /* 0083dd90: call 0x85ada0 */ r_esp -= 4; W32(r_esp, 0x83dd95u); f_0085ada0();
    /* 0083dd95: push dword ptr [0xaf022c] */ { u32 v = R32((u32)(0xaf022cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0083dd9b: push dword ptr [0xaf0228] */ { u32 v = R32((u32)(0xaf0228u)); r_esp -= 4; W32(r_esp, v); }
    /* 0083dda1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0083dda2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083dda3: call 0x85ade0 */ r_esp -= 4; W32(r_esp, 0x83dda8u); f_0085ade0();
    /* 0083dda8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0083ddab: ret  */ FN_RET(0x0083dd74); r_esp += 4; return;
}

void f_0083ddac(void) /* sub_83DDAC */
{
    FN_ENTER(0x0083ddac);
    /* 0083ddac: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0083ddb0: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 0083ddb4: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0083ddb6: jae 0x83ddbd */ if (!fC) goto L_0083ddbd;
L_0083ddb8:; BB(0x0083ddb8);
    /* 0083ddb8: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0083ddba: mov eax, edx */ r_eax = r_edx;
    /* 0083ddbc: ret  */ FN_RET(0x0083ddac); r_esp += 4; return;
L_0083ddbd:; BB(0x0083ddbd);
    /* 0083ddbd: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0083ddbf: mov eax, edx */ r_eax = r_edx;
    /* 0083ddc1: ret  */ FN_RET(0x0083ddac); r_esp += 4; return;
}

void f_0083ddc4(void) /* sub_83DDC4 */
{
    FN_ENTER(0x0083ddc4);
    /* 0083ddc4: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0083ddc8: ret  */ FN_RET(0x0083ddc4); r_esp += 4; return;
}

void f_0083ddcc(void) /* sub_83DDCC */
{
    FN_ENTER(0x0083ddcc);
    /* 0083ddcc: mov dword ptr [0xaf0218], 1 */ W32((u32)(0xaf0218u), 0x1u);
    /* 0083ddd6: push 0xaf0220 */ { u32 v = 0xaf0220u; r_esp -= 4; W32(r_esp, v); }
    /* 0083dddb: call dword ptr [0x8f8170] */ { u32 t = R32((u32)(0x8f8170u)); r_esp -= 4; W32(r_esp, 0x83dde1u); call_ind(t); }
    /* 0083dde1: ret  */ FN_RET(0x0083ddcc); r_esp += 4; return;
}

void f_0083dde4(void) /* sub_83DDE4 */
{
    FN_ENTER(0x0083dde4);
    /* 0083dde4: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0083dde7: mov eax, dword ptr [0xaf0218] */ r_eax = R32((u32)(0xaf0218u));
    /* 0083ddec: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083ddee: jne 0x83ddfd */ if (!fZ) goto L_0083ddfd;
L_0083ddf0:; BB(0x0083ddf0);
    /* 0083ddf0: mov edx, dword ptr [0xaf0208] */ r_edx = R32((u32)(0xaf0208u));
    /* 0083ddf6: mov eax, dword ptr [0xaf020c] */ r_eax = R32((u32)(0xaf020cu));
    /* 0083ddfb: jmp 0x83de0e */ goto L_0083de0e;
L_0083ddfd:; BB(0x0083ddfd);
    /* 0083ddfd: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0083de00: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083de01: call dword ptr [0x8f8170] */ { u32 t = R32((u32)(0x8f8170u)); r_esp -= 4; W32(r_esp, 0x83de07u); call_ind(t); }
    /* 0083de07: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 0083de0a: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
L_0083de0e:; BB(0x0083de0e);
    /* 0083de0e: sub edx, dword ptr [0xaf0220] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaf0220u)); u32 r = (a - b) & 0xffffffffu; r_edx = r; fC = (a < b); }
    /* 0083de14: sbb eax, dword ptr [0xaf0224] */ { u32 c = fC; u32 a = r_eax; u32 b = R32((u32)(0xaf0224u)); u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 0083de1a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083de1b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0083de1c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0083de1e: push 0xf4240 */ { u32 v = 0xf4240u; r_esp -= 4; W32(r_esp, v); }
    /* 0083de23: call 0x85ada0 */ r_esp -= 4; W32(r_esp, 0x83de28u); f_0085ada0();
    /* 0083de28: push dword ptr [0xaf022c] */ { u32 v = R32((u32)(0xaf022cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0083de2e: push dword ptr [0xaf0228] */ { u32 v = R32((u32)(0xaf0228u)); r_esp -= 4; W32(r_esp, v); }
    /* 0083de34: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0083de35: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083de36: call 0x85ade0 */ r_esp -= 4; W32(r_esp, 0x83de3bu); f_0085ade0();
    /* 0083de3b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0083de3e: ret  */ FN_RET(0x0083dde4); r_esp += 4; return;
}

void f_0083de40(void) /* sub_83DE40 */
{
    FN_ENTER(0x0083de40);
    /* 0083de40: push 0xaf0228 */ { u32 v = 0xaf0228u; r_esp -= 4; W32(r_esp, v); }
    /* 0083de45: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0083de47: mov dword ptr [0xaf0218], eax */ W32((u32)(0xaf0218u), r_eax);
    /* 0083de4c: mov dword ptr [0xaf0220], eax */ W32((u32)(0xaf0220u), r_eax);
    /* 0083de51: mov dword ptr [0xaf0224], eax */ W32((u32)(0xaf0224u), r_eax);
    /* 0083de56: mov dword ptr [0xaf0208], eax */ W32((u32)(0xaf0208u), r_eax);
    /* 0083de5b: mov dword ptr [0xaf020c], eax */ W32((u32)(0xaf020cu), r_eax);
    /* 0083de60: call dword ptr [0x8f8180] */ { u32 t = R32((u32)(0x8f8180u)); r_esp -= 4; W32(r_esp, 0x83de66u); call_ind(t); }
    /* 0083de66: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0083de68: mov dword ptr [0xaf0210], eax */ W32((u32)(0xaf0210u), r_eax);
    /* 0083de6d: mov dword ptr [0xaf0214], eax */ W32((u32)(0xaf0214u), r_eax);
    /* 0083de72: ret  */ FN_RET(0x0083de40); r_esp += 4; return;
}

void f_0083de74(void) /* sub_83DE74 */
{
    FN_ENTER(0x0083de74);
    /* 0083de74: push 0x83de80 */ { u32 v = 0x83de80u; r_esp -= 4; W32(r_esp, v); }
    /* 0083de79: call 0x82d758 */ r_esp -= 4; W32(r_esp, 0x83de7eu); f_0082d758();
    /* 0083de7e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0083de7f: ret  */ FN_RET(0x0083de74); r_esp += 4; return;
}

void f_0083de80(void) /* sub_83DE80 */
{
    FN_ENTER(0x0083de80);
    /* 0083de80: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0083de81: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0083de82: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0083de85: mov edx, 0xad9820 */ r_edx = 0xad9820u;
    /* 0083de8a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0083de8c: mov ebx, eax */ r_ebx = r_eax;
    /* 0083de8e: mov esi, edx */ r_esi = r_edx;
L_0083de90:; BB(0x0083de90);
    /* 0083de90: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 0083de92: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083de95: je 0x83de9c */ if (fZ) goto L_0083de9c;
L_0083de97:; BB(0x0083de97);
    /* 0083de97: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083de9a: jne 0x83decf */ if (!fZ) goto L_0083decf;
L_0083de9c:; BB(0x0083de9c);
    /* 0083de9c: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0083de9f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0083dea0: call 0x83ace8 */ r_esp -= 4; W32(r_esp, 0x83dea5u); f_0083ace8();
    /* 0083dea5: lea eax, [esp + 4] */ r_eax = (u32)(r_esp+0x4u);
    /* 0083dea9: lea ecx, [esp + 0x10] */ r_ecx = (u32)(r_esp+0x10u);
    /* 0083dead: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0083deae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083deaf: call 0x83ad44 */ r_esp -= 4; W32(r_esp, 0x83deb4u); f_0083ad44();
    /* 0083deb4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0083deb7: mov ecx, dword ptr [esi + 0xc] */ r_ecx = R32((u32)(r_esi+0xcu));
    /* 0083deba: cmp ecx, dword ptr [esp + 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0083debe: ja 0x83decd */ if ((!fC&&!fZ)) goto L_0083decd;
L_0083dec0:; BB(0x0083dec0);
    /* 0083dec0: mov dword ptr [esi], 3 */ W32((u32)(r_esi), 0x3u);
    /* 0083dec6: mov ecx, 3 */ r_ecx = 0x3u;
    /* 0083decb: jmp 0x83decf */ goto L_0083decf;
L_0083decd:; BB(0x0083decd);
    /* 0083decd: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
L_0083decf:; BB(0x0083decf);
    /* 0083decf: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083ded2: jne 0x83df22 */ if (!fZ) goto L_0083df22;
L_0083ded4:; BB(0x0083ded4);
    /* 0083ded4: movsx eax, byte ptr [esi + 6] */ r_eax = (u32)(i32)(i8)R8((u32)(r_esi+0x6u));
    /* 0083ded8: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0083ded9: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0083dedb: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0083dedd: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 0083dee0: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0083dee2: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0083dee4: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0083dee6: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0083dee8: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 0083deeb: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0083deed: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0083deef: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0083def1: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0083def4: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0083def6: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0083def8: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0083defa: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0083defc: mov ecx, 0x2710 */ r_ecx = 0x2710u;
    /* 0083df01: cmp edx, 0x2710 */ {  u32 a = r_edx; u32 b = 0x2710u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0083df07: jbe 0x83df0b */ if ((fC||fZ)) goto L_0083df0b;
L_0083df09:; BB(0x0083df09);
    /* 0083df09: mov edx, ecx */ r_edx = r_ecx;
L_0083df0b:; BB(0x0083df0b);
    /* 0083df0b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0083df0c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0083df0d: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x83df12u); f_0061cdb0();
    /* 0083df12: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0083df15: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 0083df17: add dword ptr [esi + 0x14], 1 */ { u32 ad = (u32)(r_esi+0x14u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0083df1b: mov dword ptr [esi + 0x18], 0 */ W32((u32)(r_esi+0x18u), 0x0u);
L_0083df22:; BB(0x0083df22);
    /* 0083df22: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083df25: je 0x83df3c */ if (fZ) goto L_0083df3c;
L_0083df27:; BB(0x0083df27);
    /* 0083df27: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0083df2a: add esi, 0x1c */ {  u32 a = r_esi; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0083df2d: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0083df30: jl 0x83de90 */ if ((fS!=fO)) goto L_0083de90;
L_0083df36:; BB(0x0083df36);
    /* 0083df36: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0083df39: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0083df3a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0083df3b: ret  */ FN_RET(0x0083de80); r_esp += 4; return;
L_0083df3c:; BB(0x0083df3c);
    /* 0083df3c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0083df3d: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x83df42u); f_0061cdb0();
    /* 0083df42: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0083df43: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0083df45: mov dword ptr [esi + 0x18], ecx */ W32((u32)(r_esi+0x18u), r_ecx);
    /* 0083df48: mov dword ptr [esi], ecx */ W32((u32)(r_esi), r_ecx);
    /* 0083df4a: jmp 0x83df27 */ goto L_0083df27;
}

void f_0083df4c(void) /* sub_83DF4C */
{
    FN_ENTER(0x0083df4c);
    /* 0083df4c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0083df4d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0083df4e: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0083df51: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0083df53: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0083df57: mov ebp, dword ptr [esp + 0x20] */ r_ebp = R32((u32)(r_esp+0x20u));
    /* 0083df5b: cmp eax, dword ptr [0xa21ba0] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa21ba0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083df61: je 0x83df8c */ if (fZ) goto L_0083df8c;
L_0083df63:; BB(0x0083df63);
    /* 0083df63: cmp eax, dword ptr [0xa21ba4] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa21ba4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083df69: mov edx, 1 */ r_edx = 0x1u;
    /* 0083df6e: je 0x83df8c */ if (fZ) goto L_0083df8c;
L_0083df70:; BB(0x0083df70);
    /* 0083df70: cmp eax, dword ptr [0xa21ba8] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa21ba8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083df76: mov edx, 2 */ r_edx = 0x2u;
    /* 0083df7b: je 0x83df8c */ if (fZ) goto L_0083df8c;
L_0083df7d:; BB(0x0083df7d);
    /* 0083df7d: cmp eax, dword ptr [0xa21bac] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa21bacu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083df83: mov edx, 3 */ r_edx = 0x3u;
    /* 0083df88: je 0x83df8c */ if (fZ) goto L_0083df8c;
L_0083df8a:; BB(0x0083df8a);
    /* 0083df8a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_0083df8c:; BB(0x0083df8c);
    /* 0083df8c: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083df8e: je 0x83e023 */ if (fZ) goto L_0083e023;
L_0083df94:; BB(0x0083df94);
    /* 0083df94: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0083df97: jae 0x83e023 */ if (!fC) goto L_0083e023;
L_0083df9d:; BB(0x0083df9d);
    /* 0083df9d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0083df9f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0083dfa1: lea ebx, [edx + edx] */ r_ebx = (u32)(r_edx+r_edx);
    /* 0083dfa4: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0083dfa6: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0083dfa8: sub ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0083dfaa: mov eax, dword ptr [ebx + 0xad9820] */ r_eax = R32((u32)(r_ebx+0xad9820u));
    /* 0083dfb0: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0083dfb3: jae 0x83e018 */ if (!fC) goto L_0083e018;
L_0083dfb5:; BB(0x0083dfb5);
    /* 0083dfb5: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0083dfb8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083dfb9: call 0x83ace8 */ r_esp -= 4; W32(r_esp, 0x83dfbeu); f_0083ace8();
    /* 0083dfbe: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 0083dfc2: lea eax, [esp + 0x10] */ r_eax = (u32)(r_esp+0x10u);
    /* 0083dfc6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083dfc7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0083dfc8: call 0x83ad44 */ r_esp -= 4; W32(r_esp, 0x83dfcdu); f_0083ad44();
    /* 0083dfcd: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0083dfd0: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0083dfd4: movzx eax, byte ptr [ebp + 1] */ r_eax = (u32)R8((u32)(r_ebp+0x1u));
    /* 0083dfd8: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0083dfda: je 0x83dfe7 */ if (fZ) goto L_0083dfe7;
L_0083dfdc:; BB(0x0083dfdc);
    /* 0083dfdc: add edx, 0x64 */ {  u32 a = r_edx; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0083dfdf: mov dword ptr [ebx + 0xad982c], edx */ W32((u32)(r_ebx+0xad982cu), r_edx);
    /* 0083dfe5: jmp 0x83dff0 */ goto L_0083dff0;
L_0083dfe7:; BB(0x0083dfe7);
    /* 0083dfe7: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0083dfea: mov dword ptr [ebx + 0xad982c], edx */ W32((u32)(r_ebx+0xad982cu), r_edx);
L_0083dff0:; BB(0x0083dff0);
    /* 0083dff0: mov dword ptr [ebx + 0xad9820], 1 */ W32((u32)(r_ebx+0xad9820u), 0x1u);
    /* 0083dffa: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0083dffd: mov dword ptr [ebx + 0xad9824], eax */ W32((u32)(r_ebx+0xad9824u), r_eax);
    /* 0083e003: mov edx, dword ptr [ebp + 4] */ r_edx = R32((u32)(r_ebp+0x4u));
    /* 0083e006: mov dword ptr [ebx + 0xad9834], 0 */ W32((u32)(r_ebx+0xad9834u), 0x0u);
    /* 0083e010: mov dword ptr [ebx + 0xad9828], edx */ W32((u32)(r_ebx+0xad9828u), r_edx);
    /* 0083e016: jmp 0x83e023 */ goto L_0083e023;
L_0083e018:; BB(0x0083e018);
    /* 0083e018: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0083e01d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0083e020: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0083e021: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0083e022: ret  */ FN_RET(0x0083df4c); r_esp += 4; return;
L_0083e023:; BB(0x0083e023);
    /* 0083e023: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0083e025: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0083e028: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0083e029: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0083e02a: ret  */ FN_RET(0x0083df4c); r_esp += 4; return;
}

