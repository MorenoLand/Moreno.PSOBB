#include "protos.h"

void f_0070e168(void) /* sub_70E168 */
{
    FN_ENTER(0x0070e168);
    /* 0070e168: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0070e169: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0070e16a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0070e16b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0070e16d: je 0x70e1f8 */ if (fZ) goto L_0070e1f8;
L_0070e173:; BB(0x0070e173);
    /* 0070e173: fld dword ptr [0x96f394] */ FPUSH(R_F32((u32)(0x96f394u)));
    /* 0070e179: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0070e17b: mov ebp, edx */ r_ebp = r_edx;
    /* 0070e17d: mov edx, eax */ r_edx = r_eax;
    /* 0070e17f: jmp 0x70e188 */ goto L_0070e188;
L_0070e181:; BB(0x0070e181);
    /* 0070e181: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0070e183: mov edi, ecx */ r_edi = r_ecx;
    /* 0070e185: add ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
L_0070e188:; BB(0x0070e188);
    /* 0070e188: fld dword ptr [ecx] */ FPUSH(R_F32((u32)(r_ecx)));
    /* 0070e18a: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0070e18c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0070e18e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0070e18f: jb 0x70e1dc */ if (fC) goto L_0070e1dc;
L_0070e191:; BB(0x0070e191);
    /* 0070e191: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 0070e193: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0070e195: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0070e196: jb 0x70e181 */ if (fC) goto L_0070e181;
L_0070e198:; BB(0x0070e198);
    /* 0070e198: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0070e19a: mov eax, edx */ r_eax = r_edx;
    /* 0070e19c: mov edx, ebp */ r_edx = r_ebp;
    /* 0070e19e: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0070e1a0: je 0x70e1ca */ if (fZ) goto L_0070e1ca;
L_0070e1a2:; BB(0x0070e1a2);
    /* 0070e1a2: fld dword ptr [edi] */ FPUSH(R_F32((u32)(r_edi)));
    /* 0070e1a4: fsub st(2), st(0) */ ST(2) = ST(2) - ST(0);
    /* 0070e1a6: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0070e1a8: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 0070e1aa: fld dword ptr [edi + 4] */ FPUSH(R_F32((u32)(r_edi+0x4u)));
    /* 0070e1ad: fld dword ptr [ecx + 4] */ FPUSH(R_F32((u32)(r_ecx+0x4u)));
    /* 0070e1b0: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 0070e1b2: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0070e1b4: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0070e1b6: fstp dword ptr [eax] */ W_F32((u32)(r_eax), ST(0)); FPOP();
    /* 0070e1b8: fld dword ptr [edi + 8] */ FPUSH(R_F32((u32)(r_edi+0x8u)));
    /* 0070e1bb: fld dword ptr [ecx + 8] */ FPUSH(R_F32((u32)(r_ecx+0x8u)));
    /* 0070e1be: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 0070e1c0: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0070e1c2: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0070e1c4: fstp dword ptr [edx] */ W_F32((u32)(r_edx), ST(0)); FPOP();
L_0070e1c6:; BB(0x0070e1c6);
    /* 0070e1c6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0070e1c7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0070e1c8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0070e1c9: ret  */ FN_RET(0x0070e168); r_esp += 4; return;
L_0070e1ca:; BB(0x0070e1ca);
    /* 0070e1ca: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0070e1cc: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0070e1ce: mov edi, dword ptr [ecx + 4] */ r_edi = R32((u32)(r_ecx+0x4u));
    /* 0070e1d1: mov dword ptr [eax], edi */ W32((u32)(r_eax), r_edi);
    /* 0070e1d3: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 0070e1d6: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0070e1d8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0070e1d9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0070e1da: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0070e1db: ret  */ FN_RET(0x0070e168); r_esp += 4; return;
L_0070e1dc:; BB(0x0070e1dc);
    /* 0070e1dc: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0070e1de: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0070e1e0: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0070e1e2: mov eax, edx */ r_eax = r_edx;
    /* 0070e1e4: mov edx, ebp */ r_edx = r_ebp;
    /* 0070e1e6: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0070e1e8: je 0x70e1c6 */ if (fZ) goto L_0070e1c6;
L_0070e1ea:; BB(0x0070e1ea);
    /* 0070e1ea: mov ecx, dword ptr [edi + 4] */ r_ecx = R32((u32)(r_edi+0x4u));
    /* 0070e1ed: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 0070e1ef: mov eax, dword ptr [edi + 8] */ r_eax = R32((u32)(r_edi+0x8u));
    /* 0070e1f2: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0070e1f4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0070e1f5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0070e1f6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0070e1f7: ret  */ FN_RET(0x0070e168); r_esp += 4; return;
L_0070e1f8:; BB(0x0070e1f8);
    /* 0070e1f8: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0070e1fa: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0070e1fb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0070e1fc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0070e1fd: ret  */ FN_RET(0x0070e168); r_esp += 4; return;
}

void f_0070e200(void) /* sub_70E200 */
{
    FN_ENTER(0x0070e200);
    /* 0070e200: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0070e201: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0070e204: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070e206: je 0x70e272 */ if (fZ) goto L_0070e272;
L_0070e208:; BB(0x0070e208);
    /* 0070e208: fld dword ptr [0x96f390] */ FPUSH(R_F32((u32)(0x96f390u)));
    /* 0070e20e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0070e210: mov ebp, eax */ r_ebp = r_eax;
    /* 0070e212: jmp 0x70e21b */ goto L_0070e21b;
L_0070e214:; BB(0x0070e214);
    /* 0070e214: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0070e216: mov ecx, edx */ r_ecx = r_edx;
    /* 0070e218: add edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
L_0070e21b:; BB(0x0070e21b);
    /* 0070e21b: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 0070e21d: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0070e21f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0070e221: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0070e222: jb 0x70e25c */ if (fC) goto L_0070e25c;
L_0070e224:; BB(0x0070e224);
    /* 0070e224: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 0070e226: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0070e228: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0070e229: jb 0x70e214 */ if (fC) goto L_0070e214;
L_0070e22b:; BB(0x0070e22b);
    /* 0070e22b: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0070e22d: mov eax, ebp */ r_eax = r_ebp;
    /* 0070e22f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070e231: je 0x70e24e */ if (fZ) goto L_0070e24e;
L_0070e233:; BB(0x0070e233);
    /* 0070e233: fld dword ptr [ecx] */ FPUSH(R_F32((u32)(r_ecx)));
    /* 0070e235: fsub st(2), st(0) */ ST(2) = ST(2) - ST(0);
    /* 0070e237: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0070e239: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 0070e23b: fld dword ptr [ecx + 4] */ FPUSH(R_F32((u32)(r_ecx+0x4u)));
    /* 0070e23e: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 0070e241: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 0070e243: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0070e245: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0070e247: fstp dword ptr [eax] */ W_F32((u32)(r_eax), ST(0)); FPOP();
L_0070e249:; BB(0x0070e249);
    /* 0070e249: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0070e24c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0070e24d: ret  */ FN_RET(0x0070e200); r_esp += 4; return;
L_0070e24e:; BB(0x0070e24e);
    /* 0070e24e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0070e250: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0070e252: mov edx, dword ptr [edx + 4] */ r_edx = R32((u32)(r_edx+0x4u));
    /* 0070e255: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 0070e257: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0070e25a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0070e25b: ret  */ FN_RET(0x0070e200); r_esp += 4; return;
L_0070e25c:; BB(0x0070e25c);
    /* 0070e25c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0070e25e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0070e260: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0070e262: mov eax, ebp */ r_eax = r_ebp;
    /* 0070e264: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070e266: je 0x70e249 */ if (fZ) goto L_0070e249;
L_0070e268:; BB(0x0070e268);
    /* 0070e268: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0070e26b: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 0070e26d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0070e270: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0070e271: ret  */ FN_RET(0x0070e200); r_esp += 4; return;
L_0070e272:; BB(0x0070e272);
    /* 0070e272: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0070e274: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0070e277: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0070e278: ret  */ FN_RET(0x0070e200); r_esp += 4; return;
}

void f_0070e27c(void) /* sub_70E27C */
{
    FN_ENTER(0x0070e27c);
    /* 0070e27c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0070e27d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0070e27e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0070e27f: mov ebp, dword ptr [esp + 0x1c] */ r_ebp = R32((u32)(r_esp+0x1cu));
    /* 0070e283: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0070e285: je 0x70e329 */ if (fZ) goto L_0070e329;
L_0070e28b:; BB(0x0070e28b);
    /* 0070e28b: fld dword ptr [0x96f38c] */ FPUSH(R_F32((u32)(0x96f38cu)));
    /* 0070e291: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0070e293: mov edi, edx */ r_edi = r_edx;
    /* 0070e295: mov edx, eax */ r_edx = r_eax;
    /* 0070e297: jmp 0x70e2a0 */ goto L_0070e2a0;
L_0070e299:; BB(0x0070e299);
    /* 0070e299: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0070e29b: mov esi, ebp */ r_esi = r_ebp;
    /* 0070e29d: add ebp, 0x10 */ {  u32 a = r_ebp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
L_0070e2a0:; BB(0x0070e2a0);
    /* 0070e2a0: fld dword ptr [ebp] */ FPUSH(R_F32((u32)(r_ebp)));
    /* 0070e2a3: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0070e2a5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0070e2a7: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0070e2a8: jb 0x70e308 */ if (fC) goto L_0070e308;
L_0070e2aa:; BB(0x0070e2aa);
    /* 0070e2aa: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 0070e2ac: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0070e2ae: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0070e2af: jb 0x70e299 */ if (fC) goto L_0070e299;
L_0070e2b1:; BB(0x0070e2b1);
    /* 0070e2b1: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0070e2b3: mov eax, edx */ r_eax = r_edx;
    /* 0070e2b5: mov edx, edi */ r_edx = r_edi;
    /* 0070e2b7: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0070e2b9: je 0x70e2f1 */ if (fZ) goto L_0070e2f1;
L_0070e2bb:; BB(0x0070e2bb);
    /* 0070e2bb: fld dword ptr [esi] */ FPUSH(R_F32((u32)(r_esi)));
    /* 0070e2bd: fsub st(2), st(0) */ ST(2) = ST(2) - ST(0);
    /* 0070e2bf: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0070e2c1: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 0070e2c3: fld dword ptr [esi + 4] */ FPUSH(R_F32((u32)(r_esi+0x4u)));
    /* 0070e2c6: fld dword ptr [ebp + 4] */ FPUSH(R_F32((u32)(r_ebp+0x4u)));
    /* 0070e2c9: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 0070e2cb: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0070e2cd: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0070e2cf: fstp dword ptr [eax] */ W_F32((u32)(r_eax), ST(0)); FPOP();
    /* 0070e2d1: fld dword ptr [esi + 8] */ FPUSH(R_F32((u32)(r_esi+0x8u)));
    /* 0070e2d4: fld dword ptr [ebp + 8] */ FPUSH(R_F32((u32)(r_ebp+0x8u)));
    /* 0070e2d7: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 0070e2d9: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0070e2db: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0070e2dd: fstp dword ptr [edx] */ W_F32((u32)(r_edx), ST(0)); FPOP();
    /* 0070e2df: fld dword ptr [esi + 0xc] */ FPUSH(R_F32((u32)(r_esi+0xcu)));
    /* 0070e2e2: fld dword ptr [ebp + 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xcu)));
    /* 0070e2e5: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 0070e2e7: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0070e2e9: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0070e2eb: fstp dword ptr [ecx] */ W_F32((u32)(r_ecx), ST(0)); FPOP();
L_0070e2ed:; BB(0x0070e2ed);
    /* 0070e2ed: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0070e2ee: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0070e2ef: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0070e2f0: ret  */ FN_RET(0x0070e27c); r_esp += 4; return;
L_0070e2f1:; BB(0x0070e2f1);
    /* 0070e2f1: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0070e2f3: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0070e2f5: mov esi, dword ptr [ebp + 4] */ r_esi = R32((u32)(r_ebp+0x4u));
    /* 0070e2f8: mov dword ptr [eax], esi */ W32((u32)(r_eax), r_esi);
    /* 0070e2fa: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0070e2fd: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0070e2ff: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0070e302: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 0070e304: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0070e305: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0070e306: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0070e307: ret  */ FN_RET(0x0070e27c); r_esp += 4; return;
L_0070e308:; BB(0x0070e308);
    /* 0070e308: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 0070e30a: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0070e30c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0070e30e: mov eax, edx */ r_eax = r_edx;
    /* 0070e310: mov edx, edi */ r_edx = r_edi;
    /* 0070e312: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0070e314: je 0x70e2ed */ if (fZ) goto L_0070e2ed;
L_0070e316:; BB(0x0070e316);
    /* 0070e316: mov ebp, dword ptr [esi + 4] */ r_ebp = R32((u32)(r_esi+0x4u));
    /* 0070e319: mov dword ptr [eax], ebp */ W32((u32)(r_eax), r_ebp);
    /* 0070e31b: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 0070e31e: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0070e320: mov edx, dword ptr [esi + 0xc] */ r_edx = R32((u32)(r_esi+0xcu));
    /* 0070e323: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 0070e325: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0070e326: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0070e327: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0070e328: ret  */ FN_RET(0x0070e27c); r_esp += 4; return;
L_0070e329:; BB(0x0070e329);
    /* 0070e329: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0070e32b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0070e32c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0070e32d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0070e32e: ret  */ FN_RET(0x0070e27c); r_esp += 4; return;
}

void f_0070e330(void) /* sub_70E330 */
{
    FN_ENTER(0x0070e330);
    /* 0070e330: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0070e331: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0070e334: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070e336: je 0x70e4c1 */ if (fZ) goto L_0070e4c1;
L_0070e33c:; BB(0x0070e33c);
    /* 0070e33c: fld dword ptr [0x96f388] */ FPUSH(R_F32((u32)(0x96f388u)));
    /* 0070e342: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0070e344: mov ebp, eax */ r_ebp = r_eax;
    /* 0070e346: jmp 0x70e34f */ goto L_0070e34f;
L_0070e348:; BB(0x0070e348);
    /* 0070e348: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0070e34a: mov ecx, edx */ r_ecx = r_edx;
    /* 0070e34c: add edx, 0x24 */ {  u32 a = r_edx; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
L_0070e34f:; BB(0x0070e34f);
    /* 0070e34f: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 0070e351: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0070e353: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0070e355: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0070e356: jb 0x70e465 */ if (fC) goto L_0070e465;
L_0070e35c:; BB(0x0070e35c);
    /* 0070e35c: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 0070e35e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0070e360: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0070e361: jb 0x70e348 */ if (fC) goto L_0070e348;
L_0070e363:; BB(0x0070e363);
    /* 0070e363: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0070e365: mov eax, ebp */ r_eax = r_ebp;
    /* 0070e367: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070e369: je 0x70e414 */ if (fZ) goto L_0070e414;
L_0070e36f:; BB(0x0070e36f);
    /* 0070e36f: fld dword ptr [ecx] */ FPUSH(R_F32((u32)(r_ecx)));
    /* 0070e371: fsub st(2), st(0) */ ST(2) = ST(2) - ST(0);
    /* 0070e373: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0070e375: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 0070e377: fld dword ptr [ecx + 4] */ FPUSH(R_F32((u32)(r_ecx+0x4u)));
    /* 0070e37a: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 0070e37d: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 0070e37f: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0070e381: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0070e383: fstp dword ptr [eax] */ W_F32((u32)(r_eax), ST(0)); FPOP();
    /* 0070e385: fld dword ptr [ecx + 8] */ FPUSH(R_F32((u32)(r_ecx+0x8u)));
    /* 0070e388: fld dword ptr [edx + 8] */ FPUSH(R_F32((u32)(r_edx+0x8u)));
    /* 0070e38b: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 0070e38d: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0070e38f: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0070e391: mov dword ptr [eax + 8], 0 */ W32((u32)(r_eax+0x8u), 0x0u);
    /* 0070e398: fstp dword ptr [eax + 4] */ W_F32((u32)(r_eax+0x4u), ST(0)); FPOP();
    /* 0070e39b: fld dword ptr [ecx + 0xc] */ FPUSH(R_F32((u32)(r_ecx+0xcu)));
    /* 0070e39e: fld dword ptr [edx + 0xc] */ FPUSH(R_F32((u32)(r_edx+0xcu)));
    /* 0070e3a1: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 0070e3a3: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0070e3a5: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0070e3a7: fstp dword ptr [eax + 0xc] */ W_F32((u32)(r_eax+0xcu), ST(0)); FPOP();
    /* 0070e3aa: fld dword ptr [ecx + 0x10] */ FPUSH(R_F32((u32)(r_ecx+0x10u)));
    /* 0070e3ad: fld dword ptr [edx + 0x10] */ FPUSH(R_F32((u32)(r_edx+0x10u)));
    /* 0070e3b0: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 0070e3b2: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0070e3b4: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0070e3b6: mov dword ptr [eax + 0x14], 0 */ W32((u32)(r_eax+0x14u), 0x0u);
    /* 0070e3bd: fstp dword ptr [eax + 0x10] */ W_F32((u32)(r_eax+0x10u), ST(0)); FPOP();
    /* 0070e3c0: fld dword ptr [ecx + 0x14] */ FPUSH(R_F32((u32)(r_ecx+0x14u)));
    /* 0070e3c3: fld dword ptr [edx + 0x14] */ FPUSH(R_F32((u32)(r_edx+0x14u)));
    /* 0070e3c6: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 0070e3c8: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0070e3ca: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0070e3cc: fstp dword ptr [eax + 0x18] */ W_F32((u32)(r_eax+0x18u), ST(0)); FPOP();
    /* 0070e3cf: fld dword ptr [ecx + 0x18] */ FPUSH(R_F32((u32)(r_ecx+0x18u)));
    /* 0070e3d2: fld dword ptr [edx + 0x18] */ FPUSH(R_F32((u32)(r_edx+0x18u)));
    /* 0070e3d5: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 0070e3d7: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0070e3d9: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0070e3db: mov dword ptr [eax + 0x20], 0 */ W32((u32)(r_eax+0x20u), 0x0u);
    /* 0070e3e2: fstp dword ptr [eax + 0x1c] */ W_F32((u32)(r_eax+0x1cu), ST(0)); FPOP();
    /* 0070e3e5: fld dword ptr [ecx + 0x1c] */ FPUSH(R_F32((u32)(r_ecx+0x1cu)));
    /* 0070e3e8: fld dword ptr [edx + 0x1c] */ FPUSH(R_F32((u32)(r_edx+0x1cu)));
    /* 0070e3eb: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 0070e3ed: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0070e3ef: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0070e3f1: fstp dword ptr [eax + 0x24] */ W_F32((u32)(r_eax+0x24u), ST(0)); FPOP();
    /* 0070e3f4: fld dword ptr [ecx + 0x20] */ FPUSH(R_F32((u32)(r_ecx+0x20u)));
    /* 0070e3f7: fld dword ptr [edx + 0x20] */ FPUSH(R_F32((u32)(r_edx+0x20u)));
    /* 0070e3fa: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 0070e3fc: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0070e3fe: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0070e400: mov dword ptr [eax + 0x2c], 0 */ W32((u32)(r_eax+0x2cu), 0x0u);
    /* 0070e407: fstp dword ptr [eax + 0x28] */ W_F32((u32)(r_eax+0x28u), ST(0)); FPOP();
L_0070e40a:; BB(0x0070e40a);
    /* 0070e40a: mov eax, 1 */ r_eax = 0x1u;
    /* 0070e40f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0070e412: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0070e413: ret  */ FN_RET(0x0070e330); r_esp += 4; return;
L_0070e414:; BB(0x0070e414);
    /* 0070e414: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0070e416: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0070e418: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 0070e41b: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 0070e41d: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 0070e420: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 0070e423: mov dword ptr [eax + 8], 0 */ W32((u32)(r_eax+0x8u), 0x0u);
    /* 0070e42a: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 0070e42d: mov dword ptr [eax + 0xc], ecx */ W32((u32)(r_eax+0xcu), r_ecx);
    /* 0070e430: mov ecx, dword ptr [edx + 0x10] */ r_ecx = R32((u32)(r_edx+0x10u));
    /* 0070e433: mov dword ptr [eax + 0x14], 0 */ W32((u32)(r_eax+0x14u), 0x0u);
    /* 0070e43a: mov dword ptr [eax + 0x10], ecx */ W32((u32)(r_eax+0x10u), r_ecx);
    /* 0070e43d: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 0070e440: mov dword ptr [eax + 0x18], ecx */ W32((u32)(r_eax+0x18u), r_ecx);
    /* 0070e443: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 0070e446: mov dword ptr [eax + 0x20], 0 */ W32((u32)(r_eax+0x20u), 0x0u);
    /* 0070e44d: mov dword ptr [eax + 0x1c], ecx */ W32((u32)(r_eax+0x1cu), r_ecx);
    /* 0070e450: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 0070e453: mov dword ptr [eax + 0x24], ecx */ W32((u32)(r_eax+0x24u), r_ecx);
    /* 0070e456: mov edx, dword ptr [edx + 0x20] */ r_edx = R32((u32)(r_edx+0x20u));
    /* 0070e459: mov dword ptr [eax + 0x2c], 0 */ W32((u32)(r_eax+0x2cu), 0x0u);
    /* 0070e460: mov dword ptr [eax + 0x28], edx */ W32((u32)(r_eax+0x28u), r_edx);
    /* 0070e463: jmp 0x70e40a */ goto L_0070e40a;
L_0070e465:; BB(0x0070e465);
    /* 0070e465: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 0070e467: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0070e469: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0070e46b: mov eax, ebp */ r_eax = r_ebp;
    /* 0070e46d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070e46f: je 0x70e40a */ if (fZ) goto L_0070e40a;
L_0070e471:; BB(0x0070e471);
    /* 0070e471: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0070e474: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 0070e476: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 0070e479: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 0070e47c: mov dword ptr [eax + 8], 0 */ W32((u32)(r_eax+0x8u), 0x0u);
    /* 0070e483: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 0070e486: mov dword ptr [eax + 0xc], edx */ W32((u32)(r_eax+0xcu), r_edx);
    /* 0070e489: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 0070e48c: mov dword ptr [eax + 0x14], 0 */ W32((u32)(r_eax+0x14u), 0x0u);
    /* 0070e493: mov dword ptr [eax + 0x10], edx */ W32((u32)(r_eax+0x10u), r_edx);
    /* 0070e496: mov edx, dword ptr [ecx + 0x14] */ r_edx = R32((u32)(r_ecx+0x14u));
    /* 0070e499: mov dword ptr [eax + 0x18], edx */ W32((u32)(r_eax+0x18u), r_edx);
    /* 0070e49c: mov edx, dword ptr [ecx + 0x18] */ r_edx = R32((u32)(r_ecx+0x18u));
    /* 0070e49f: mov dword ptr [eax + 0x20], 0 */ W32((u32)(r_eax+0x20u), 0x0u);
    /* 0070e4a6: mov dword ptr [eax + 0x1c], edx */ W32((u32)(r_eax+0x1cu), r_edx);
    /* 0070e4a9: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 0070e4ac: mov dword ptr [eax + 0x24], edx */ W32((u32)(r_eax+0x24u), r_edx);
    /* 0070e4af: mov ecx, dword ptr [ecx + 0x20] */ r_ecx = R32((u32)(r_ecx+0x20u));
    /* 0070e4b2: mov dword ptr [eax + 0x2c], 0 */ W32((u32)(r_eax+0x2cu), 0x0u);
    /* 0070e4b9: mov dword ptr [eax + 0x28], ecx */ W32((u32)(r_eax+0x28u), r_ecx);
    /* 0070e4bc: jmp 0x70e40a */ goto L_0070e40a;
L_0070e4c1:; BB(0x0070e4c1);
    /* 0070e4c1: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0070e4c3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0070e4c5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0070e4c8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0070e4c9: ret  */ FN_RET(0x0070e330); r_esp += 4; return;
}

void f_0070e4cc(void) /* sub_70E4CC */
{
    FN_ENTER(0x0070e4cc);
    /* 0070e4cc: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0070e4d0: movzx edx, word ptr [esp + 8] */ r_edx = (u32)R16((u32)(r_esp+0x8u));
    /* 0070e4d5: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0070e4d9: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0070e4da: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0070e4db: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0070e4dc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0070e4dd: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0070e4e0: mov esi, edx */ r_esi = r_edx;
    /* 0070e4e2: mov edx, eax */ r_edx = r_eax;
    /* 0070e4e4: mov edi, dword ptr [esp + 0x40] */ r_edi = R32((u32)(r_esp+0x40u));
    /* 0070e4e8: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 0070e4ec: movsx eax, si */ r_eax = (u32)(i32)(i16)(u16)r_esi;
    /* 0070e4ef: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0070e4f1: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0070e4f3: lea ebx, [eax + eax] */ r_ebx = (u32)(r_eax+r_eax);
    /* 0070e4f6: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0070e4f8: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0070e4fa: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0070e4fc: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0070e4fe: add ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0070e500: mov ebp, ecx */ r_ebp = r_ecx;
L_0070e502:; BB(0x0070e502);
    /* 0070e502: movzx eax, word ptr [ebx] */ r_eax = (u32)R16((u32)(r_ebx));
    /* 0070e505: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070e507: je 0x70e5c2 */ if (fZ) goto L_0070e5c2;
L_0070e50d:; BB(0x0070e50d);
    /* 0070e50d: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070e510: jne 0x70e532 */ if (!fZ) goto L_0070e532;
L_0070e512:; BB(0x0070e512);
    /* 0070e512: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 0070e516: movsx edx, word ptr [ebx + 2] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x2u));
    /* 0070e51a: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0070e51e: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0070e522: mov dword ptr [esp + 0x10], edi */ W32((u32)(r_esp+0x10u), r_edi);
    /* 0070e526: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0070e528: call 0x70e4d9 */ r_esp -= 4; W32(r_esp, 0x70e52du); f_0070e4d9();
    /* 0070e52d: jmp 0x70e5a6 */ goto L_0070e5a6;
L_0070e532:; BB(0x0070e532);
    /* 0070e532: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070e535: jne 0x70e5a6 */ if (!fZ) goto L_0070e5a6;
L_0070e537:; BB(0x0070e537);
    /* 0070e537: mov ecx, dword ptr [edi] */ r_ecx = R32((u32)(r_edi));
    /* 0070e539: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0070e53b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0070e53d: jle 0x70e59a */ if ((fZ||fS!=fO)) goto L_0070e59a;
L_0070e53f:; BB(0x0070e53f);
    /* 0070e53f: cmp ecx, 6 */ {  u32 a = r_ecx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0070e542: jl 0x70e5b7 */ if ((fS!=fO)) goto L_0070e5b7;
L_0070e544:; BB(0x0070e544);
    /* 0070e544: mov dword ptr [esp + 0x14], esi */ W32((u32)(r_esp+0x14u), r_esi);
    /* 0070e548: movsx eax, si */ r_eax = (u32)(i32)(i16)(u16)r_esi;
L_0070e54b:; BB(0x0070e54b);
    /* 0070e54b: cmp ax, word ptr [ebp + edx*2] */ {  u32 a = (u16)r_eax; u32 b = R16((u32)(r_ebp+r_edx*2)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0070e550: je 0x70e5b1 */ if (fZ) goto L_0070e5b1;
L_0070e552:; BB(0x0070e552);
    /* 0070e552: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0070e555: cmp ax, word ptr [ebp + edx*2] */ {  u32 a = (u16)r_eax; u32 b = R16((u32)(r_ebp+r_edx*2)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0070e55a: je 0x70e5d6 */ if (fZ) goto L_0070e5d6;
L_0070e560:; BB(0x0070e560);
    /* 0070e560: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0070e563: cmp ax, word ptr [ebp + edx*2] */ {  u32 a = (u16)r_eax; u32 b = R16((u32)(r_ebp+r_edx*2)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0070e568: je 0x70e5d0 */ if (fZ) goto L_0070e5d0;
L_0070e56a:; BB(0x0070e56a);
    /* 0070e56a: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0070e56d: cmp ax, word ptr [ebp + edx*2] */ {  u32 a = (u16)r_eax; u32 b = R16((u32)(r_ebp+r_edx*2)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0070e572: je 0x70e5ca */ if (fZ) goto L_0070e5ca;
L_0070e574:; BB(0x0070e574);
    /* 0070e574: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0070e577: cmp ax, word ptr [ebp + edx*2] */ {  u32 a = (u16)r_eax; u32 b = R16((u32)(r_ebp+r_edx*2)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0070e57c: je 0x70e5bc */ if (fZ) goto L_0070e5bc;
L_0070e57e:; BB(0x0070e57e);
    /* 0070e57e: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0070e581: lea esi, [ecx - 6] */ r_esi = (u32)(r_ecx+0xfffffffau);
    /* 0070e584: cmp edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0070e586: jle 0x70e54b */ if ((fZ||fS!=fO)) goto L_0070e54b;
L_0070e588:; BB(0x0070e588);
    /* 0070e588: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
L_0070e58c:; BB(0x0070e58c);
    /* 0070e58c: cmp ax, word ptr [ebp + edx*2] */ {  u32 a = (u16)r_eax; u32 b = R16((u32)(r_ebp+r_edx*2)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0070e591: je 0x70e59a */ if (fZ) goto L_0070e59a;
L_0070e593:; BB(0x0070e593);
    /* 0070e593: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0070e596: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0070e598: jl 0x70e58c */ if ((fS!=fO)) goto L_0070e58c;
L_0070e59a:; BB(0x0070e59a);
    /* 0070e59a: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070e59c: jne 0x70e5a6 */ if (!fZ) goto L_0070e5a6;
L_0070e59e:; BB(0x0070e59e);
    /* 0070e59e: mov word ptr [ebp + ecx*2], si */ W16((u32)(r_ebp+r_ecx*2), (u16)r_esi);
    /* 0070e5a3: add dword ptr [edi], 1 */ { u32 ad = (u32)(r_edi);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_0070e5a6:; BB(0x0070e5a6);
    /* 0070e5a6: add ebx, 0x3c */ {  u32 a = r_ebx; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0070e5a9: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0070e5ac: jmp 0x70e502 */ goto L_0070e502;
L_0070e5b1:; BB(0x0070e5b1);
    /* 0070e5b1: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
    /* 0070e5b5: jmp 0x70e59a */ goto L_0070e59a;
L_0070e5b7:; BB(0x0070e5b7);
    /* 0070e5b7: movsx eax, si */ r_eax = (u32)(i32)(i16)(u16)r_esi;
    /* 0070e5ba: jmp 0x70e58c */ goto L_0070e58c;
L_0070e5bc:; BB(0x0070e5bc);
    /* 0070e5bc: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
    /* 0070e5c0: jmp 0x70e59a */ goto L_0070e59a;
L_0070e5c2:; BB(0x0070e5c2);
    /* 0070e5c2: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0070e5c5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0070e5c6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0070e5c7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0070e5c8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0070e5c9: ret  */ FN_RET(0x0070e4cc); r_esp += 4; return;
L_0070e5ca:; BB(0x0070e5ca);
    /* 0070e5ca: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
    /* 0070e5ce: jmp 0x70e59a */ goto L_0070e59a;
L_0070e5d0:; BB(0x0070e5d0);
    /* 0070e5d0: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
    /* 0070e5d4: jmp 0x70e59a */ goto L_0070e59a;
L_0070e5d6:; BB(0x0070e5d6);
    /* 0070e5d6: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
    /* 0070e5da: jmp 0x70e59a */ goto L_0070e59a;
}

void f_0070e4d9(void) /* sub_70E4D9 */
{
    FN_ENTER(0x0070e4d9);
    /* 0070e4d9: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0070e4da: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0070e4db: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0070e4dc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0070e4dd: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0070e4e0: mov esi, edx */ r_esi = r_edx;
    /* 0070e4e2: mov edx, eax */ r_edx = r_eax;
    /* 0070e4e4: mov edi, dword ptr [esp + 0x40] */ r_edi = R32((u32)(r_esp+0x40u));
    /* 0070e4e8: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 0070e4ec: movsx eax, si */ r_eax = (u32)(i32)(i16)(u16)r_esi;
    /* 0070e4ef: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0070e4f1: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0070e4f3: lea ebx, [eax + eax] */ r_ebx = (u32)(r_eax+r_eax);
    /* 0070e4f6: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0070e4f8: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0070e4fa: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0070e4fc: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0070e4fe: add ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0070e500: mov ebp, ecx */ r_ebp = r_ecx;
L_0070e502:; BB(0x0070e502);
    /* 0070e502: movzx eax, word ptr [ebx] */ r_eax = (u32)R16((u32)(r_ebx));
    /* 0070e505: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070e507: je 0x70e5c2 */ if (fZ) goto L_0070e5c2;
L_0070e50d:; BB(0x0070e50d);
    /* 0070e50d: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070e510: jne 0x70e532 */ if (!fZ) goto L_0070e532;
L_0070e512:; BB(0x0070e512);
    /* 0070e512: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 0070e516: movsx edx, word ptr [ebx + 2] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x2u));
    /* 0070e51a: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0070e51e: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0070e522: mov dword ptr [esp + 0x10], edi */ W32((u32)(r_esp+0x10u), r_edi);
    /* 0070e526: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0070e528: call 0x70e4d9 */ r_esp -= 4; W32(r_esp, 0x70e52du); f_0070e4d9();
    /* 0070e52d: jmp 0x70e5a6 */ goto L_0070e5a6;
L_0070e532:; BB(0x0070e532);
    /* 0070e532: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070e535: jne 0x70e5a6 */ if (!fZ) goto L_0070e5a6;
L_0070e537:; BB(0x0070e537);
    /* 0070e537: mov ecx, dword ptr [edi] */ r_ecx = R32((u32)(r_edi));
    /* 0070e539: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0070e53b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0070e53d: jle 0x70e59a */ if ((fZ||fS!=fO)) goto L_0070e59a;
L_0070e53f:; BB(0x0070e53f);
    /* 0070e53f: cmp ecx, 6 */ {  u32 a = r_ecx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0070e542: jl 0x70e5b7 */ if ((fS!=fO)) goto L_0070e5b7;
L_0070e544:; BB(0x0070e544);
    /* 0070e544: mov dword ptr [esp + 0x14], esi */ W32((u32)(r_esp+0x14u), r_esi);
    /* 0070e548: movsx eax, si */ r_eax = (u32)(i32)(i16)(u16)r_esi;
L_0070e54b:; BB(0x0070e54b);
    /* 0070e54b: cmp ax, word ptr [ebp + edx*2] */ {  u32 a = (u16)r_eax; u32 b = R16((u32)(r_ebp+r_edx*2)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0070e550: je 0x70e5b1 */ if (fZ) goto L_0070e5b1;
L_0070e552:; BB(0x0070e552);
    /* 0070e552: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0070e555: cmp ax, word ptr [ebp + edx*2] */ {  u32 a = (u16)r_eax; u32 b = R16((u32)(r_ebp+r_edx*2)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0070e55a: je 0x70e5d6 */ if (fZ) goto L_0070e5d6;
L_0070e560:; BB(0x0070e560);
    /* 0070e560: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0070e563: cmp ax, word ptr [ebp + edx*2] */ {  u32 a = (u16)r_eax; u32 b = R16((u32)(r_ebp+r_edx*2)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0070e568: je 0x70e5d0 */ if (fZ) goto L_0070e5d0;
L_0070e56a:; BB(0x0070e56a);
    /* 0070e56a: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0070e56d: cmp ax, word ptr [ebp + edx*2] */ {  u32 a = (u16)r_eax; u32 b = R16((u32)(r_ebp+r_edx*2)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0070e572: je 0x70e5ca */ if (fZ) goto L_0070e5ca;
L_0070e574:; BB(0x0070e574);
    /* 0070e574: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0070e577: cmp ax, word ptr [ebp + edx*2] */ {  u32 a = (u16)r_eax; u32 b = R16((u32)(r_ebp+r_edx*2)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0070e57c: je 0x70e5bc */ if (fZ) goto L_0070e5bc;
L_0070e57e:; BB(0x0070e57e);
    /* 0070e57e: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0070e581: lea esi, [ecx - 6] */ r_esi = (u32)(r_ecx+0xfffffffau);
    /* 0070e584: cmp edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0070e586: jle 0x70e54b */ if ((fZ||fS!=fO)) goto L_0070e54b;
L_0070e588:; BB(0x0070e588);
    /* 0070e588: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
L_0070e58c:; BB(0x0070e58c);
    /* 0070e58c: cmp ax, word ptr [ebp + edx*2] */ {  u32 a = (u16)r_eax; u32 b = R16((u32)(r_ebp+r_edx*2)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0070e591: je 0x70e59a */ if (fZ) goto L_0070e59a;
L_0070e593:; BB(0x0070e593);
    /* 0070e593: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0070e596: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0070e598: jl 0x70e58c */ if ((fS!=fO)) goto L_0070e58c;
L_0070e59a:; BB(0x0070e59a);
    /* 0070e59a: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070e59c: jne 0x70e5a6 */ if (!fZ) goto L_0070e5a6;
L_0070e59e:; BB(0x0070e59e);
    /* 0070e59e: mov word ptr [ebp + ecx*2], si */ W16((u32)(r_ebp+r_ecx*2), (u16)r_esi);
    /* 0070e5a3: add dword ptr [edi], 1 */ { u32 ad = (u32)(r_edi);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_0070e5a6:; BB(0x0070e5a6);
    /* 0070e5a6: add ebx, 0x3c */ {  u32 a = r_ebx; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0070e5a9: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0070e5ac: jmp 0x70e502 */ goto L_0070e502;
L_0070e5b1:; BB(0x0070e5b1);
    /* 0070e5b1: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
    /* 0070e5b5: jmp 0x70e59a */ goto L_0070e59a;
L_0070e5b7:; BB(0x0070e5b7);
    /* 0070e5b7: movsx eax, si */ r_eax = (u32)(i32)(i16)(u16)r_esi;
    /* 0070e5ba: jmp 0x70e58c */ goto L_0070e58c;
L_0070e5bc:; BB(0x0070e5bc);
    /* 0070e5bc: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
    /* 0070e5c0: jmp 0x70e59a */ goto L_0070e59a;
L_0070e5c2:; BB(0x0070e5c2);
    /* 0070e5c2: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0070e5c5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0070e5c6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0070e5c7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0070e5c8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0070e5c9: ret  */ FN_RET(0x0070e4d9); r_esp += 4; return;
L_0070e5ca:; BB(0x0070e5ca);
    /* 0070e5ca: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
    /* 0070e5ce: jmp 0x70e59a */ goto L_0070e59a;
L_0070e5d0:; BB(0x0070e5d0);
    /* 0070e5d0: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
    /* 0070e5d4: jmp 0x70e59a */ goto L_0070e59a;
L_0070e5d6:; BB(0x0070e5d6);
    /* 0070e5d6: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
    /* 0070e5da: jmp 0x70e59a */ goto L_0070e59a;
}

void f_0070e5dc(void) /* sub_70E5DC */
{
    FN_ENTER(0x0070e5dc);
    /* 0070e5dc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0070e5dd: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0070e5de: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0070e5df: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0070e5e3: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
    /* 0070e5e7: mov ecx, dword ptr [eax + 0x5c] */ r_ecx = R32((u32)(r_eax+0x5cu));
    /* 0070e5ea: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070e5ec: je 0x70e661 */ if (fZ) goto L_0070e661;
L_0070e5ee:; BB(0x0070e5ee);
    /* 0070e5ee: mov eax, dword ptr [eax + 0x58] */ r_eax = R32((u32)(r_eax+0x58u));
    /* 0070e5f1: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0070e5f3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0070e5f5: jle 0x70e655 */ if ((fZ||fS!=fO)) goto L_0070e655;
L_0070e5f7:; BB(0x0070e5f7);
    /* 0070e5f7: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0070e5fa: jl 0x70e644 */ if ((fS!=fO)) goto L_0070e644;
L_0070e5fc:; BB(0x0070e5fc);
    /* 0070e5fc: movzx esi, word ptr [ecx] */ r_esi = (u32)R16((u32)(r_ecx));
    /* 0070e5ff: cmp esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070e601: je 0x70e655 */ if (fZ) goto L_0070e655;
L_0070e603:; BB(0x0070e603);
    /* 0070e603: add ecx, 0x18 */ {  u32 a = r_ecx; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0070e606: movzx esi, word ptr [ecx] */ r_esi = (u32)R16((u32)(r_ecx));
    /* 0070e609: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0070e60c: cmp esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070e60e: je 0x70e655 */ if (fZ) goto L_0070e655;
L_0070e610:; BB(0x0070e610);
    /* 0070e610: add ecx, 0x18 */ {  u32 a = r_ecx; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0070e613: movzx esi, word ptr [ecx] */ r_esi = (u32)R16((u32)(r_ecx));
    /* 0070e616: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0070e619: cmp esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070e61b: je 0x70e655 */ if (fZ) goto L_0070e655;
L_0070e61d:; BB(0x0070e61d);
    /* 0070e61d: add ecx, 0x18 */ {  u32 a = r_ecx; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0070e620: movzx esi, word ptr [ecx] */ r_esi = (u32)R16((u32)(r_ecx));
    /* 0070e623: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0070e626: cmp esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070e628: je 0x70e655 */ if (fZ) goto L_0070e655;
L_0070e62a:; BB(0x0070e62a);
    /* 0070e62a: add ecx, 0x18 */ {  u32 a = r_ecx; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0070e62d: movzx esi, word ptr [ecx] */ r_esi = (u32)R16((u32)(r_ecx));
    /* 0070e630: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0070e633: cmp esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070e635: je 0x70e655 */ if (fZ) goto L_0070e655;
L_0070e637:; BB(0x0070e637);
    /* 0070e637: add ecx, 0x18 */ {  u32 a = r_ecx; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0070e63a: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0070e63d: lea esi, [eax - 6] */ r_esi = (u32)(r_eax+0xfffffffau);
    /* 0070e640: cmp edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0070e642: jle 0x70e5fc */ if ((fZ||fS!=fO)) goto L_0070e5fc;
L_0070e644:; BB(0x0070e644);
    /* 0070e644: movzx esi, word ptr [ecx] */ r_esi = (u32)R16((u32)(r_ecx));
    /* 0070e647: cmp esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070e649: je 0x70e655 */ if (fZ) goto L_0070e655;
L_0070e64b:; BB(0x0070e64b);
    /* 0070e64b: add ecx, 0x18 */ {  u32 a = r_ecx; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0070e64e: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0070e651: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0070e653: jl 0x70e644 */ if ((fS!=fO)) goto L_0070e644;
L_0070e655:; BB(0x0070e655);
    /* 0070e655: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070e657: je 0x70e661 */ if (fZ) goto L_0070e661;
L_0070e659:; BB(0x0070e659);
    /* 0070e659: movzx eax, word ptr [ecx + 2] */ r_eax = (u32)R16((u32)(r_ecx+0x2u));
    /* 0070e65d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0070e65f: jne 0x70e667 */ if (!fZ) goto L_0070e667;
L_0070e661:; BB(0x0070e661);
    /* 0070e661: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0070e663: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0070e664: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0070e665: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0070e666: ret  */ FN_RET(0x0070e5dc); r_esp += 4; return;
L_0070e667:; BB(0x0070e667);
    /* 0070e667: mov eax, ecx */ r_eax = r_ecx;
    /* 0070e669: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0070e66a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0070e66b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0070e66c: ret  */ FN_RET(0x0070e5dc); r_esp += 4; return;
}

void f_0070e670(void) /* sub_70E670 */
{
    FN_ENTER(0x0070e670);
    /* 0070e670: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0070e671: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0070e673: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0070e675: call 0x70e694 */ r_esp -= 4; W32(r_esp, 0x70e67au); f_0070e694();
    /* 0070e67a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0070e67e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0070e680: jne 0x70e686 */ if (!fZ) goto L_0070e686;
L_0070e682:; BB(0x0070e682);
    /* 0070e682: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0070e683: ret 4 */ FN_RET(0x0070e670); r_esp += 8; return;
L_0070e686:; BB(0x0070e686);
    /* 0070e686: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0070e687: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x70e68cu); f_005c2f74();
    /* 0070e68c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0070e68d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0070e68e: ret 4 */ FN_RET(0x0070e670); r_esp += 8; return;
}

void f_0070e694(void) /* sub_70E694 */
{
    FN_ENTER(0x0070e694);
    /* 0070e694: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0070e695: mov ebp, esp */ r_ebp = r_esp;
    /* 0070e697: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0070e699: push 0x8f02b8 */ { u32 v = 0x8f02b8u; r_esp -= 4; W32(r_esp, v); }
    /* 0070e69e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0070e6a4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0070e6a5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0070e6ac: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0070e6af: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0070e6b2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0070e6b5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0070e6b8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0070e6bb: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0070e6be: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0070e6c5: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0070e6c8: mov dword ptr [ecx], 0xb3efb0 */ W32((u32)(r_ecx), 0xb3efb0u);
    /* 0070e6ce: call 0x70f348 */ r_esp -= 4; W32(r_esp, 0x70e6d3u); f_0070f348();
    /* 0070e6d3: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0070e6d6: mov ecx, dword ptr [ebx + 0x24] */ r_ecx = R32((u32)(r_ebx+0x24u));
    /* 0070e6d9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070e6db: je 0x70e6ff */ if (fZ) goto L_0070e6ff;
L_0070e6dd:; BB(0x0070e6dd);
    /* 0070e6dd: call 0x829de0 */ r_esp -= 4; W32(r_esp, 0x70e6e2u); f_00829de0();
    /* 0070e6e2: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0070e6e5: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 0070e6e8: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0070e6ea: je 0x70e6f8 */ if (fZ) goto L_0070e6f8;
L_0070e6ec:; BB(0x0070e6ec);
    /* 0070e6ec: push dword ptr [ebx + 0x24] */ { u32 v = R32((u32)(r_ebx+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 0070e6ef: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x70e6f4u); f_0082e960();
    /* 0070e6f4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0070e6f5: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
L_0070e6f8:; BB(0x0070e6f8);
    /* 0070e6f8: mov dword ptr [ebx + 0x24], 0 */ W32((u32)(r_ebx+0x24u), 0x0u);
L_0070e6ff:; BB(0x0070e6ff);
    /* 0070e6ff: mov edx, dword ptr [ebx + 0x20] */ r_edx = R32((u32)(r_ebx+0x20u));
    /* 0070e702: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070e704: je 0x70e71e */ if (fZ) goto L_0070e71e;
L_0070e706:; BB(0x0070e706);
    /* 0070e706: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 0070e709: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0070e70b: je 0x70e71e */ if (fZ) goto L_0070e71e;
L_0070e70d:; BB(0x0070e70d);
    /* 0070e70d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0070e70e: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x70e713u); f_0082e960();
    /* 0070e713: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0070e714: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0070e717: mov dword ptr [ebx + 0x20], 0 */ W32((u32)(r_ebx+0x20u), 0x0u);
L_0070e71e:; BB(0x0070e71e);
    /* 0070e71e: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
    /* 0070e721: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0070e723: jle 0x70e733 */ if ((fZ||fS!=fO)) goto L_0070e733;
L_0070e725:; BB(0x0070e725);
    /* 0070e725: push 0x96f470 */ { u32 v = 0x96f470u; r_esp -= 4; W32(r_esp, v); }
    /* 0070e72a: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x70e72fu); f_0061cdb0();
    /* 0070e72f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0070e730: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
L_0070e733:; BB(0x0070e733);
    /* 0070e733: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0070e73a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0070e73c: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x70e741u); f_008171e8();
    /* 0070e741: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0070e744: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0070e747: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0070e74e: mov esp, ebp */ r_esp = r_ebp;
    /* 0070e750: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0070e751: ret  */ FN_RET(0x0070e694); r_esp += 4; return;
}

void f_0070e754(void) /* sub_70E754 */
{
    FN_ENTER(0x0070e754);
    /* 0070e754: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0070e755: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0070e757: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0070e759: call 0x70e804 */ r_esp -= 4; W32(r_esp, 0x70e75eu); f_0070e804();
    /* 0070e75e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0070e762: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0070e764: jne 0x70e76a */ if (!fZ) goto L_0070e76a;
L_0070e766:; BB(0x0070e766);
    /* 0070e766: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0070e767: ret 4 */ FN_RET(0x0070e754); r_esp += 8; return;
L_0070e76a:; BB(0x0070e76a);
    /* 0070e76a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0070e76b: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x70e770u); f_00857e98();
    /* 0070e770: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0070e771: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0070e772: ret 4 */ FN_RET(0x0070e754); r_esp += 8; return;
}

void f_0070e778(void) /* sub_70E778 */
{
    FN_ENTER(0x0070e778);
    /* 0070e778: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0070e779: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0070e77b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0070e77d: call 0x70e79c */ r_esp -= 4; W32(r_esp, 0x70e782u); f_0070e79c();
    /* 0070e782: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0070e786: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0070e788: jne 0x70e78e */ if (!fZ) goto L_0070e78e;
L_0070e78a:; BB(0x0070e78a);
    /* 0070e78a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0070e78b: ret 4 */ FN_RET(0x0070e778); r_esp += 8; return;
L_0070e78e:; BB(0x0070e78e);
    /* 0070e78e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0070e78f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x70e794u); f_005c2f74();
    /* 0070e794: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0070e795: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0070e796: ret 4 */ FN_RET(0x0070e778); r_esp += 8; return;
}

void f_0070e79c(void) /* sub_70E79C */
{
    FN_ENTER(0x0070e79c);
    /* 0070e79c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0070e79d: mov ebp, esp */ r_ebp = r_esp;
    /* 0070e79f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0070e7a1: push 0x8f02d4 */ { u32 v = 0x8f02d4u; r_esp -= 4; W32(r_esp, v); }
    /* 0070e7a6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0070e7ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0070e7ad: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0070e7b4: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0070e7b7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0070e7ba: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0070e7bd: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0070e7c0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0070e7c3: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0070e7c6: mov dword ptr [ecx], 0xb3efc0 */ W32((u32)(r_ecx), 0xb3efc0u);
    /* 0070e7cc: mov dword ptr [ecx + 0x1c], 0xb3efd0 */ W32((u32)(r_ecx+0x1cu), 0xb3efd0u);
    /* 0070e7d3: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0070e7da: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0070e7dd: add ecx, 0x1c */ {  u32 a = r_ecx; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0070e7e0: call 0x70e804 */ r_esp -= 4; W32(r_esp, 0x70e7e5u); f_0070e804();
    /* 0070e7e5: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0070e7ec: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0070e7ef: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x70e7f4u); f_008171e8();
    /* 0070e7f4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0070e7f7: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0070e7fe: mov esp, ebp */ r_esp = r_ebp;
    /* 0070e800: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0070e801: ret  */ FN_RET(0x0070e79c); r_esp += 4; return;
}

void f_0070e804(void) /* sub_70E804 */
{
    FN_ENTER(0x0070e804);
    /* 0070e804: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0070e805: mov edi, ecx */ r_edi = r_ecx;
    /* 0070e807: mov ecx, dword ptr [edi + 0x84] */ r_ecx = R32((u32)(r_edi+0x84u));
    /* 0070e80d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070e80f: mov dword ptr [edi], 0xb3efa0 */ W32((u32)(r_edi), 0xb3efa0u);
    /* 0070e815: je 0x70e831 */ if (fZ) goto L_0070e831;
L_0070e817:; BB(0x0070e817);
    /* 0070e817: mov eax, dword ptr [edi + 0x80] */ r_eax = R32((u32)(r_edi+0x80u));
    /* 0070e81d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070e81f: je 0x70e827 */ if (fZ) goto L_0070e827;
L_0070e821:; BB(0x0070e821);
    /* 0070e821: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0070e822: call 0x70e848 */ r_esp -= 4; W32(r_esp, 0x70e827u); f_0070e848();
L_0070e827:; BB(0x0070e827);
    /* 0070e827: mov dword ptr [edi + 0x84], 0 */ W32((u32)(r_edi+0x84u), 0x0u);
L_0070e831:; BB(0x0070e831);
    /* 0070e831: mov eax, dword ptr [edi + 0x7c] */ r_eax = R32((u32)(r_edi+0x7cu));
    /* 0070e834: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0070e836: je 0x70e846 */ if (fZ) goto L_0070e846;
L_0070e838:; BB(0x0070e838);
    /* 0070e838: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0070e839: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x70e83eu); f_0082e960();
    /* 0070e83e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0070e83f: mov dword ptr [edi + 0x7c], 0 */ W32((u32)(r_edi+0x7cu), 0x0u);
L_0070e846:; BB(0x0070e846);
    /* 0070e846: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0070e847: ret  */ FN_RET(0x0070e804); r_esp += 4; return;
}

void f_0070e848(void) /* sub_70E848 */
{
    FN_ENTER(0x0070e848);
    /* 0070e848: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 0070e84b: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0070e84e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0070e850: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0070e852: jg 0x70e856 */ if ((!fZ&&fS==fO)) goto L_0070e856;
L_0070e854:; BB(0x0070e854);
    /* 0070e854: mov edx, eax */ r_edx = r_eax;
L_0070e856:; BB(0x0070e856);
    /* 0070e856: mov dword ptr [ecx + 0x1c], edx */ W32((u32)(r_ecx+0x1cu), r_edx);
    /* 0070e859: ret 4 */ FN_RET(0x0070e848); r_esp += 8; return;
}

void f_0070e85c(void) /* sub_70E85C */
{
    FN_ENTER(0x0070e85c);
    /* 0070e85c: add ecx, -0x1c */ {  u32 a = r_ecx; u32 b = 0xffffffe4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0070e85f: jmp 0x70e778 */ f_0070e778(); return;
}

void f_0070e864(void) /* sub_70E864 */
{
    FN_ENTER(0x0070e864);
    /* 0070e864: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0070e865: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0070e866: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0070e867: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0070e868: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0070e86b: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 0070e86f: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0070e871: mov edi, dword ptr [esp + 0x28] */ r_edi = R32((u32)(r_esp+0x28u));
    /* 0070e875: movzx edx, word ptr [edi + 2] */ r_edx = (u32)R16((u32)(r_edi+0x2u));
    /* 0070e879: and edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 0070e87c: jne 0x70e9e7 */ if (!fZ) goto L_0070e9e7;
L_0070e882:; BB(0x0070e882);
    /* 0070e882: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070e884: je 0x70e88a */ if (fZ) goto L_0070e88a;
L_0070e886:; BB(0x0070e886);
    /* 0070e886: mov ecx, esi */ r_ecx = r_esi;
    /* 0070e888: jmp 0x70e88d */ goto L_0070e88d;
L_0070e88a:; BB(0x0070e88a);
    /* 0070e88a: lea ecx, [edi + 0x20] */ r_ecx = (u32)(r_edi+0x20u);
L_0070e88d:; BB(0x0070e88d);
    /* 0070e88d: mov ebx, dword ptr [edi + 0xc] */ r_ebx = R32((u32)(r_edi+0xcu));
    /* 0070e890: mov edx, dword ptr [edi + 0x14] */ r_edx = R32((u32)(r_edi+0x14u));
    /* 0070e893: mov ebp, dword ptr [edi + 0x1c] */ r_ebp = R32((u32)(r_edi+0x1cu));
    /* 0070e896: add ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0070e898: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0070e89a: add ebp, ecx */ {  u32 a = r_ebp; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0070e89c: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 0070e8a0: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
    /* 0070e8a4: push dword ptr [edi + 0x10] */ { u32 v = R32((u32)(r_edi+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0070e8a7: call 0x82e940 */ r_esp -= 4; W32(r_esp, 0x70e8acu); f_0082e940();
    /* 0070e8ac: mov ebp, eax */ r_ebp = r_eax;
    /* 0070e8ae: push dword ptr [edi + 0x10] */ { u32 v = R32((u32)(r_edi+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0070e8b1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0070e8b2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0070e8b3: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x70e8b8u); f_0086b6b8();
    /* 0070e8b8: push dword ptr [edi + 0x18] */ { u32 v = R32((u32)(r_edi+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 0070e8bb: call 0x82e940 */ r_esp -= 4; W32(r_esp, 0x70e8c0u); f_0082e940();
    /* 0070e8c0: mov ebx, eax */ r_ebx = r_eax;
    /* 0070e8c2: push dword ptr [edi + 0x18] */ { u32 v = R32((u32)(r_edi+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 0070e8c5: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 0070e8c9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0070e8ca: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0070e8cb: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x70e8d0u); f_0086b6b8();
    /* 0070e8d0: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0070e8d3: mov edx, dword ptr [ebp + 4] */ r_edx = R32((u32)(r_ebp+0x4u));
    /* 0070e8d6: add dword ptr [ebp], ebp */ { u32 ad = (u32)(r_ebp);  u32 a = R32(ad); u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0070e8d9: add edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0070e8db: mov dword ptr [ebp + 4], edx */ W32((u32)(r_ebp+0x4u), r_edx);
    /* 0070e8de: movzx ecx, word ptr [edx] */ r_ecx = (u32)R16((u32)(r_edx));
    /* 0070e8e1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070e8e3: je 0x70e956 */ if (fZ) goto L_0070e956;
L_0070e8e5:; BB(0x0070e8e5);
    /* 0070e8e5: movzx ecx, word ptr [edx] */ r_ecx = (u32)R16((u32)(r_edx));
L_0070e8e8:; BB(0x0070e8e8);
    /* 0070e8e8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070e8ea: je 0x70e94b */ if (fZ) goto L_0070e94b;
L_0070e8ec:; BB(0x0070e8ec);
    /* 0070e8ec: mov ecx, dword ptr [edx + 0x20] */ r_ecx = R32((u32)(r_edx+0x20u));
    /* 0070e8ef: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070e8f1: je 0x70e8f8 */ if (fZ) goto L_0070e8f8;
L_0070e8f3:; BB(0x0070e8f3);
    /* 0070e8f3: add ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0070e8f5: mov dword ptr [edx + 0x20], ecx */ W32((u32)(r_edx+0x20u), r_ecx);
L_0070e8f8:; BB(0x0070e8f8);
    /* 0070e8f8: mov ecx, dword ptr [edx + 0x24] */ r_ecx = R32((u32)(r_edx+0x24u));
    /* 0070e8fb: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070e8fd: je 0x70e904 */ if (fZ) goto L_0070e904;
L_0070e8ff:; BB(0x0070e8ff);
    /* 0070e8ff: add ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0070e901: mov dword ptr [edx + 0x24], ecx */ W32((u32)(r_edx+0x24u), r_ecx);
L_0070e904:; BB(0x0070e904);
    /* 0070e904: mov ecx, dword ptr [edx + 0x28] */ r_ecx = R32((u32)(r_edx+0x28u));
    /* 0070e907: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070e909: je 0x70e910 */ if (fZ) goto L_0070e910;
L_0070e90b:; BB(0x0070e90b);
    /* 0070e90b: add ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0070e90d: mov dword ptr [edx + 0x28], ecx */ W32((u32)(r_edx+0x28u), r_ecx);
L_0070e910:; BB(0x0070e910);
    /* 0070e910: mov ecx, dword ptr [edx + 0x2c] */ r_ecx = R32((u32)(r_edx+0x2cu));
    /* 0070e913: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070e915: je 0x70e91c */ if (fZ) goto L_0070e91c;
L_0070e917:; BB(0x0070e917);
    /* 0070e917: add ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0070e919: mov dword ptr [edx + 0x2c], ecx */ W32((u32)(r_edx+0x2cu), r_ecx);
L_0070e91c:; BB(0x0070e91c);
    /* 0070e91c: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 0070e91f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070e921: je 0x70e928 */ if (fZ) goto L_0070e928;
L_0070e923:; BB(0x0070e923);
    /* 0070e923: add ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0070e925: mov dword ptr [edx + 0x30], ecx */ W32((u32)(r_edx+0x30u), r_ecx);
L_0070e928:; BB(0x0070e928);
    /* 0070e928: mov ecx, dword ptr [edx + 0x34] */ r_ecx = R32((u32)(r_edx+0x34u));
    /* 0070e92b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070e92d: je 0x70e934 */ if (fZ) goto L_0070e934;
L_0070e92f:; BB(0x0070e92f);
    /* 0070e92f: add ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0070e931: mov dword ptr [edx + 0x34], ecx */ W32((u32)(r_edx+0x34u), r_ecx);
L_0070e934:; BB(0x0070e934);
    /* 0070e934: mov ecx, dword ptr [edx + 0x38] */ r_ecx = R32((u32)(r_edx+0x38u));
    /* 0070e937: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070e939: je 0x70e940 */ if (fZ) goto L_0070e940;
L_0070e93b:; BB(0x0070e93b);
    /* 0070e93b: add ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0070e93d: mov dword ptr [edx + 0x38], ecx */ W32((u32)(r_edx+0x38u), r_ecx);
L_0070e940:; BB(0x0070e940);
    /* 0070e940: movzx ecx, word ptr [edx + 0x3c] */ r_ecx = (u32)R16((u32)(r_edx+0x3cu));
    /* 0070e944: add edx, 0x3c */ {  u32 a = r_edx; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0070e947: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070e949: jne 0x70e8ec */ if (!fZ) goto L_0070e8ec;
L_0070e94b:; BB(0x0070e94b);
    /* 0070e94b: movzx ecx, word ptr [edx + 0x3c] */ r_ecx = (u32)R16((u32)(r_edx+0x3cu));
    /* 0070e94f: add edx, 0x3c */ {  u32 a = r_edx; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0070e952: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070e954: jne 0x70e8e8 */ if (!fZ) goto L_0070e8e8;
L_0070e956:; BB(0x0070e956);
    /* 0070e956: mov ecx, dword ptr [ebx] */ r_ecx = R32((u32)(r_ebx));
    /* 0070e958: mov edi, dword ptr [ebx + 4] */ r_edi = R32((u32)(r_ebx+0x4u));
    /* 0070e95b: add ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0070e95d: mov dword ptr [ebx], ecx */ W32((u32)(r_ebx), r_ecx);
    /* 0070e95f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0070e961: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 0070e963: jbe 0x70e972 */ if ((fC||fZ)) goto L_0070e972;
L_0070e965:; BB(0x0070e965);
    /* 0070e965: add dword ptr [ecx], ebx */ { u32 ad = (u32)(r_ecx);  u32 a = R32(ad); u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0070e967: add ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0070e96a: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0070e96d: cmp edx, dword ptr [ebx + 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebx+0x4u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0070e970: jb 0x70e965 */ if (fC) goto L_0070e965;
L_0070e972:; BB(0x0070e972);
    /* 0070e972: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 0070e976: mov edx, dword ptr [edi + 0x28] */ r_edx = R32((u32)(r_edi+0x28u));
    /* 0070e979: or edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0070e97c: mov dword ptr [edi + 0x28], edx */ W32((u32)(r_edi+0x28u), r_edx);
    /* 0070e97f: mov dword ptr [edi + 0x20], ebp */ W32((u32)(r_edi+0x20u), r_ebp);
    /* 0070e982: mov dword ptr [edi + 0x24], ebx */ W32((u32)(r_edi+0x24u), r_ebx);
    /* 0070e985: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0070e98a: call 0x82aab8 */ r_esp -= 4; W32(r_esp, 0x70e98fu); f_0082aab8();
    /* 0070e98f: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 0070e993: mov ebx, edi */ r_ebx = r_edi;
    /* 0070e995: mov edx, dword ptr [ebx + 0x24] */ r_edx = R32((u32)(r_ebx+0x24u));
    /* 0070e998: call 0x82a7d8 */ r_esp -= 4; W32(r_esp, 0x70e99du); f_0082a7d8();
    /* 0070e99d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0070e99f: jl 0x70e9bb */ if ((fS!=fO)) goto L_0070e9bb;
L_0070e9a1:; BB(0x0070e9a1);
    /* 0070e9a1: call 0x82aac0 */ r_esp -= 4; W32(r_esp, 0x70e9a6u); f_0082aac0();
    /* 0070e9a6: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070e9a8: je 0x70e9b1 */ if (fZ) goto L_0070e9b1;
L_0070e9aa:; BB(0x0070e9aa);
    /* 0070e9aa: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0070e9ab: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x70e9b0u); f_0082e960();
    /* 0070e9b0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0070e9b1:; BB(0x0070e9b1);
    /* 0070e9b1: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0070e9b4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0070e9b5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0070e9b6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0070e9b7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0070e9b8: ret 4 */ FN_RET(0x0070e864); r_esp += 8; return;
L_0070e9bb:; BB(0x0070e9bb);
    /* 0070e9bb: lea ebx, [esp] */ r_ebx = (u32)(r_esp);
    /* 0070e9be: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 0070e9c2: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0070e9c4: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0070e9c7: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0070e9cb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0070e9cc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0070e9cd: call 0x82e930 */ r_esp -= 4; W32(r_esp, 0x70e9d2u); f_0082e930();
    /* 0070e9d2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0070e9d5: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0070e9d7: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x70e9dcu); f_006dc358();
    /* 0070e9dc: mov edx, edi */ r_edx = r_edi;
    /* 0070e9de: mov dword ptr [edx + 0x24], 0 */ W32((u32)(r_edx+0x24u), 0x0u);
    /* 0070e9e5: jmp 0x70e9a1 */ goto L_0070e9a1;
L_0070e9e7:; BB(0x0070e9e7);
    /* 0070e9e7: push dword ptr [edi + 4] */ { u32 v = R32((u32)(r_edi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0070e9ea: lea ebx, [edi + 0x20] */ r_ebx = (u32)(r_edi+0x20u);
    /* 0070e9ed: call 0x82e940 */ r_esp -= 4; W32(r_esp, 0x70e9f2u); f_0082e940();
    /* 0070e9f2: mov esi, eax */ r_esi = r_eax;
    /* 0070e9f4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0070e9f5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0070e9f6: call 0x788154 */ r_esp -= 4; W32(r_esp, 0x70e9fbu); f_00788154();
    /* 0070e9fb: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0070e9fe: movzx edx, word ptr [edi + 2] */ r_edx = (u32)R16((u32)(r_edi+0x2u));
    /* 0070ea02: and edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0070ea05: jmp 0x70e882 */ goto L_0070e882;
}

void f_0070ea0c(void) /* sub_70EA0C */
{
    FN_ENTER(0x0070ea0c);
    /* 0070ea0c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0070ea0d: mov ebp, esp */ r_ebp = r_esp;
    /* 0070ea0f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0070ea11: push 0x8f02f0 */ { u32 v = 0x8f02f0u; r_esp -= 4; W32(r_esp, v); }
    /* 0070ea16: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0070ea1c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0070ea1d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0070ea24: sub esp, 0x9c */ {  u32 a = r_esp; u32 b = 0x9cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0070ea2a: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0070ea2d: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 0070ea30: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 0070ea33: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 0070ea36: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0070ea39: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0070ea3c: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0070ea3f: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 0070ea42: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0070ea45: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0070ea48: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x70ea4du); f_008193cc();
    /* 0070ea4d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0070ea54: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0070ea57: mov dword ptr [ecx], 0xb3efb0 */ W32((u32)(r_ecx), 0xb3efb0u);
    /* 0070ea5d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0070ea5f: mov eax, dword ptr [0x9f0b7c] */ r_eax = R32((u32)(0x9f0b7cu));
    /* 0070ea64: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0070ea67: mov dword ptr [ecx + 0x1c], edx */ W32((u32)(r_ecx+0x1cu), r_edx);
    /* 0070ea6a: mov dword ptr [ecx + 0x28], edx */ W32((u32)(r_ecx+0x28u), r_edx);
    /* 0070ea6d: call 0x70f390 */ r_esp -= 4; W32(r_esp, 0x70ea72u); f_0070f390();
    /* 0070ea72: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0070ea75: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0070ea78: lea ebx, [ebp - 0xa8] */ r_ebx = (u32)(r_ebp+0xffffff58u);
    /* 0070ea7e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0070ea7f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0070ea81: push 0x96f468 */ { u32 v = 0x96f468u; r_esp -= 4; W32(r_esp, v); }
    /* 0070ea86: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0070ea87: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 0070ea8a: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 0070ea8d: call 0x858bf5 */ r_esp -= 4; W32(r_esp, 0x70ea92u); f_00858bf5();
    /* 0070ea92: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0070ea95: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0070ea98: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070ea9a: je 0x70eaad */ if (fZ) goto L_0070eaad;
L_0070ea9c:; BB(0x0070ea9c);
    /* 0070ea9c: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0070ea9f: lea eax, [ebp - 0xa8] */ r_eax = (u32)(r_ebp+0xffffff58u);
    /* 0070eaa5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0070eaa6: call 0x70eafc */ r_esp -= 4; W32(r_esp, 0x70eaabu); f_0070eafc();
    /* 0070eaab: jmp 0x70eabc */ goto L_0070eabc;
L_0070eaad:; BB(0x0070eaad);
    /* 0070eaad: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0070eab0: lea eax, [ebp - 0xa8] */ r_eax = (u32)(r_ebp+0xffffff58u);
    /* 0070eab6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0070eab7: call 0x70ead4 */ r_esp -= 4; W32(r_esp, 0x70eabcu); f_0070ead4();
L_0070eabc:; BB(0x0070eabc);
    /* 0070eabc: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0070eabf: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0070eac2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0070eac5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0070eacc: mov esp, ebp */ r_esp = r_ebp;
    /* 0070eace: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0070eacf: ret 0xc */ FN_RET(0x0070ea0c); r_esp += 16; return;
}

void f_0070ead4(void) /* sub_70EAD4 */
{
    FN_ENTER(0x0070ead4);
    /* 0070ead4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0070ead5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0070ead6: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
    /* 0070eada: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0070eadc: mov dword ptr [ecx + 0x2c], eax */ W32((u32)(r_ecx+0x2cu), r_eax);
    /* 0070eadf: mov dword ptr [ecx + 0x34], eax */ W32((u32)(r_ecx+0x34u), r_eax);
    /* 0070eae2: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0070eae5: mov esi, ecx */ r_esi = r_ecx;
L_0070eae7:; BB(0x0070eae7);
    /* 0070eae7: mov dl, byte ptr [edi] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 0070eae9: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0070eaec: mov byte ptr [esi], dl */ W8((u32)(r_esi), (u8)r_edx);
    /* 0070eaee: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0070eaf1: test dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0070eaf3: jne 0x70eae7 */ if (!fZ) goto L_0070eae7;
L_0070eaf5:; BB(0x0070eaf5);
    /* 0070eaf5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0070eaf6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0070eaf7: ret 4 */ FN_RET(0x0070ead4); r_esp += 8; return;
}

void f_0070eafc(void) /* sub_70EAFC */
{
    FN_ENTER(0x0070eafc);
    /* 0070eafc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0070eafd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0070eafe: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0070eb01: mov esi, ecx */ r_esi = r_ecx;
    /* 0070eb03: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 0070eb07: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0070eb08: mov eax, dword ptr [esi + 0x28] */ r_eax = R32((u32)(r_esi+0x28u));
    /* 0070eb0b: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0070eb0e: mov dword ptr [esi + 0x28], eax */ W32((u32)(r_esi+0x28u), r_eax);
    /* 0070eb11: call 0x5b9328 */ r_esp -= 4; W32(r_esp, 0x70eb16u); f_005b9328();
    /* 0070eb16: mov edi, eax */ r_edi = r_eax;
    /* 0070eb18: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0070eb1b: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0070eb1d: jg 0x70eb30 */ if ((!fZ&&fS==fO)) goto L_0070eb30;
L_0070eb1f:; BB(0x0070eb1f);
    /* 0070eb1f: mov eax, dword ptr [esi + 0x28] */ r_eax = R32((u32)(r_esi+0x28u));
    /* 0070eb22: and eax, 0xfffffffd */ {  u32 a = r_eax; u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0070eb25: mov dword ptr [esi + 0x28], eax */ W32((u32)(r_esi+0x28u), r_eax);
    /* 0070eb28: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0070eb2b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0070eb2c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0070eb2d: ret 4 */ FN_RET(0x0070eafc); r_esp += 8; return;
L_0070eb30:; BB(0x0070eb30);
    /* 0070eb30: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0070eb32: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 0070eb36: mov eax, 0x96f3c0 */ r_eax = 0x96f3c0u;
    /* 0070eb3b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0070eb3d: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0070eb40: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0070eb43: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0070eb47: movzx edx, word ptr [eax + 8] */ r_edx = (u32)R16((u32)(r_eax+0x8u));
    /* 0070eb4b: mov word ptr [esp + 8], dx */ W16((u32)(r_esp+0x8u), (u16)r_edx);
    /* 0070eb50: call 0x5b7a28 */ r_esp -= 4; W32(r_esp, 0x70eb55u); f_005b7a28();
    /* 0070eb55: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070eb57: je 0x70eb61 */ if (fZ) goto L_0070eb61;
L_0070eb59:; BB(0x0070eb59);
    /* 0070eb59: cmp edi, 0x90000 */ {  u32 a = r_edi; u32 b = 0x90000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0070eb5f: jle 0x70eb99 */ if ((fZ||fS!=fO)) goto L_0070eb99;
L_0070eb61:; BB(0x0070eb61);
    /* 0070eb61: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0070eb62: call 0x82e940 */ r_esp -= 4; W32(r_esp, 0x70eb67u); f_0082e940();
    /* 0070eb67: mov edi, eax */ r_edi = r_eax;
    /* 0070eb69: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0070eb6c:; BB(0x0070eb6c);
    /* 0070eb6c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0070eb6d: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 0070eb71: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0070eb72: call 0x5b9910 */ r_esp -= 4; W32(r_esp, 0x70eb77u); f_005b9910();
    /* 0070eb77: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0070eb7a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0070eb7b: mov ecx, esi */ r_ecx = r_esi;
    /* 0070eb7d: call 0x70e864 */ r_esp -= 4; W32(r_esp, 0x70eb82u); f_0070e864();
    /* 0070eb82: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0070eb86: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070eb88: jne 0x70ebb2 */ if (!fZ) goto L_0070ebb2;
L_0070eb8a:; BB(0x0070eb8a);
    /* 0070eb8a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0070eb8b: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x70eb90u); f_0082e960();
    /* 0070eb90: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0070eb91: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0070eb94: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0070eb95: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0070eb96: ret 4 */ FN_RET(0x0070eafc); r_esp += 8; return;
L_0070eb99:; BB(0x0070eb99);
    /* 0070eb99: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0070eb9c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0070eb9d: call 0x5b7a44 */ r_esp -= 4; W32(r_esp, 0x70eba2u); f_005b7a44();
    /* 0070eba2: mov edi, eax */ r_edi = r_eax;
    /* 0070eba4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0070eba7: mov edx, 1 */ r_edx = 0x1u;
    /* 0070ebac: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 0070ebb0: jmp 0x70eb6c */ goto L_0070eb6c;
L_0070ebb2:; BB(0x0070ebb2);
    /* 0070ebb2: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0070ebb5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0070ebb6: call 0x5b9008 */ r_esp -= 4; W32(r_esp, 0x70ebbbu); f_005b9008();
    /* 0070ebbb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0070ebbc: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0070ebbf: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0070ebc0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0070ebc1: ret 4 */ FN_RET(0x0070eafc); r_esp += 8; return;
}

void f_0070ebc4(void) /* sub_70EBC4 */
{
    FN_ENTER(0x0070ebc4);
    /* 0070ebc4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0070ebc5: mov ebp, esp */ r_ebp = r_esp;
    /* 0070ebc7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0070ebc9: push 0x8f0318 */ { u32 v = 0x8f0318u; r_esp -= 4; W32(r_esp, v); }
    /* 0070ebce: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0070ebd4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0070ebd5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0070ebdc: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0070ebdf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0070ebe2: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0070ebe5: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0070ebe8: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0070ebeb: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0070ebee: call 0x70ec6c */ r_esp -= 4; W32(r_esp, 0x70ebf3u); f_0070ec6c();
    /* 0070ebf3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070ebf5: je 0x70ebfe */ if (fZ) goto L_0070ebfe;
L_0070ebf7:; BB(0x0070ebf7);
    /* 0070ebf7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0070ebfa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fC = 0; }
    /* 0070ebfc: jae 0x70ec10 */ if (!fC) goto L_0070ec10;
L_0070ebfe:; BB(0x0070ebfe);
    /* 0070ebfe: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0070ec00: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0070ec03: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0070ec0a: mov esp, ebp */ r_esp = r_ebp;
    /* 0070ec0c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0070ec0d: ret 8 */ FN_RET(0x0070ebc4); r_esp += 12; return;
L_0070ec10:; BB(0x0070ec10);
    /* 0070ec10: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0070ec17: push 0xa4 */ { u32 v = 0xa4u; r_esp -= 4; W32(r_esp, v); }
    /* 0070ec1c: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x70ec21u); f_005caba4();
    /* 0070ec21: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0070ec22: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0070ec25: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070ec27: je 0x70ec65 */ if (fZ) goto L_0070ec65;
L_0070ec29:; BB(0x0070ec29);
    /* 0070ec29: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 0070ec30: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0070ec37: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0070ec3a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0070ec3d: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0070ec40: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0070ec43: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0070ec44: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0070ec45: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0070ec46: call 0x70ec7c */ r_esp -= 4; W32(r_esp, 0x70ec4bu); f_0070ec7c();
    /* 0070ec4b: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0070ec4e: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0070ec55:; BB(0x0070ec55);
    /* 0070ec55: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0070ec58: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0070ec5f: mov esp, ebp */ r_esp = r_ebp;
    /* 0070ec61: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0070ec62: ret 8 */ FN_RET(0x0070ebc4); r_esp += 12; return;
L_0070ec65:; BB(0x0070ec65);
    /* 0070ec65: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0070ec67: jmp 0x70ec55 */ goto L_0070ec55;
}

void f_0070ec6c(void) /* sub_70EC6C */
{
    FN_ENTER(0x0070ec6c);
    /* 0070ec6c: mov eax, dword ptr [ecx + 0x28] */ r_eax = R32((u32)(r_ecx+0x28u));
    /* 0070ec6f: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0070ec71: je 0x70ec79 */ if (fZ) goto L_0070ec79;
L_0070ec73:; BB(0x0070ec73);
    /* 0070ec73: mov eax, 1 */ r_eax = 0x1u;
    /* 0070ec78: ret  */ FN_RET(0x0070ec6c); r_esp += 4; return;
L_0070ec79:; BB(0x0070ec79);
    /* 0070ec79: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0070ec7b: ret  */ FN_RET(0x0070ec6c); r_esp += 4; return;
}

void f_0070ec7c(void) /* sub_70EC7C */
{
    FN_ENTER(0x0070ec7c);
    /* 0070ec7c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0070ec7d: mov edi, ecx */ r_edi = r_ecx;
    /* 0070ec7f: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0070ec83: mov ecx, edi */ r_ecx = r_edi;
    /* 0070ec85: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x70ec8au); f_008193cc();
    /* 0070ec8a: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 0070ec8e: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 0070ec92: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 0070ec96: lea ecx, [edi + 0x1c] */ r_ecx = (u32)(r_edi+0x1cu);
    /* 0070ec99: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0070ec9b: mov dword ptr [edi + 0x1c], 0xb3efa0 */ W32((u32)(r_edi+0x1cu), 0xb3efa0u);
    /* 0070eca2: mov dword ptr [edi + 0x98], eax */ W32((u32)(r_edi+0x98u), r_eax);
    /* 0070eca8: mov dword ptr [edi + 0x9c], eax */ W32((u32)(r_edi+0x9cu), r_eax);
    /* 0070ecae: mov dword ptr [edi + 0xa0], eax */ W32((u32)(r_edi+0xa0u), r_eax);
    /* 0070ecb4: call 0x70f1c4 */ r_esp -= 4; W32(r_esp, 0x70ecb9u); f_0070f1c4();
    /* 0070ecb9: mov dword ptr [edi], 0xb3efc0 */ W32((u32)(r_edi), 0xb3efc0u);
    /* 0070ecbf: mov edx, dword ptr [0x9f0b80] */ r_edx = R32((u32)(0x9f0b80u));
    /* 0070ecc5: mov dword ptr [edi + 4], edx */ W32((u32)(r_edi+0x4u), r_edx);
    /* 0070ecc8: mov eax, edi */ r_eax = r_edi;
    /* 0070ecca: mov dword ptr [edi + 0x1c], 0xb3efd0 */ W32((u32)(r_edi+0x1cu), 0xb3efd0u);
    /* 0070ecd1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0070ecd2: ret 0x10 */ FN_RET(0x0070ec7c); r_esp += 20; return;
}

void f_0070ecd8(void) /* sub_70ECD8 */
{
    FN_ENTER(0x0070ecd8);
    /* 0070ecd8: call 0x70ece0 */ r_esp -= 4; W32(r_esp, 0x70ecddu); f_0070ece0();
    /* 0070ecdd: ret  */ FN_RET(0x0070ecd8); r_esp += 4; return;
}

void f_0070ece0(void) /* sub_70ECE0 */
{
    FN_ENTER(0x0070ece0);
    /* 0070ece0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0070ece1: mov edi, ecx */ r_edi = r_ecx;
    /* 0070ece3: mov eax, dword ptr [edi + 0x2c] */ r_eax = R32((u32)(r_edi+0x2cu));
    /* 0070ece6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070ece8: je 0x70ed4f */ if (fZ) goto L_0070ed4f;
L_0070ecea:; BB(0x0070ecea);
    /* 0070ecea: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070eced: jne 0x70ed16 */ if (!fZ) goto L_0070ed16;
L_0070ecef:; BB(0x0070ecef);
    /* 0070ecef: lea ecx, [edi + 0x38] */ r_ecx = (u32)(r_edi+0x38u);
    /* 0070ecf2: lea edx, [edi + 0x34] */ r_edx = (u32)(r_edi+0x34u);
    /* 0070ecf5: lea eax, [edi + 0x30] */ r_eax = (u32)(r_edi+0x30u);
    /* 0070ecf8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0070ecf9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0070ecfa: push dword ptr [edi + 0x58] */ { u32 v = R32((u32)(r_edi+0x58u)); r_esp -= 4; W32(r_esp, v); }
    /* 0070ecfd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0070ecfe: call 0x5ba3f4 */ r_esp -= 4; W32(r_esp, 0x70ed03u); f_005ba3f4();
    /* 0070ed03: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0070ed06: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0070ed09: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0070ed0b: je 0x70ed7e */ if (fZ) goto L_0070ed7e;
L_0070ed0d:; BB(0x0070ed0d);
    /* 0070ed0d: mov dword ptr [edi + 0x2c], 2 */ W32((u32)(r_edi+0x2cu), 0x2u);
    /* 0070ed14: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0070ed15: ret  */ FN_RET(0x0070ece0); r_esp += 4; return;
L_0070ed16:; BB(0x0070ed16);
    /* 0070ed16: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0070ed19: jne 0x70ed7e */ if (!fZ) goto L_0070ed7e;
L_0070ed1b:; BB(0x0070ed1b);
    /* 0070ed1b: mov eax, dword ptr [edi + 0x34] */ r_eax = R32((u32)(r_edi+0x34u));
    /* 0070ed1e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0070ed20: je 0x70ed7e */ if (fZ) goto L_0070ed7e;
L_0070ed22:; BB(0x0070ed22);
    /* 0070ed22: push dword ptr [edi + 0x58] */ { u32 v = R32((u32)(r_edi+0x58u)); r_esp -= 4; W32(r_esp, v); }
    /* 0070ed25: mov ecx, edi */ r_ecx = r_edi;
    /* 0070ed27: call 0x70e864 */ r_esp -= 4; W32(r_esp, 0x70ed2cu); f_0070e864();
    /* 0070ed2c: push dword ptr [edi + 0x58] */ { u32 v = R32((u32)(r_edi+0x58u)); r_esp -= 4; W32(r_esp, v); }
    /* 0070ed2f: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x70ed34u); f_0082e960();
    /* 0070ed34: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0070ed35: mov edx, dword ptr [edi + 0x28] */ r_edx = R32((u32)(r_edi+0x28u));
    /* 0070ed38: mov dword ptr [edi + 0x2c], 3 */ W32((u32)(r_edi+0x2cu), 0x3u);
    /* 0070ed3f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0070ed41: mov dword ptr [edi + 0x58], eax */ W32((u32)(r_edi+0x58u), r_eax);
    /* 0070ed44: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0070ed47: or edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0070ed4a: mov dword ptr [edi + 0x28], edx */ W32((u32)(r_edi+0x28u), r_edx);
    /* 0070ed4d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0070ed4e: ret  */ FN_RET(0x0070ece0); r_esp += 4; return;
L_0070ed4f:; BB(0x0070ed4f);
    /* 0070ed4f: lea eax, [edi + 0x38] */ r_eax = (u32)(r_edi+0x38u);
    /* 0070ed52: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0070ed53: call 0x5b9328 */ r_esp -= 4; W32(r_esp, 0x70ed58u); f_005b9328();
    /* 0070ed58: lea edx, [eax + 3] */ r_edx = (u32)(r_eax+0x3u);
    /* 0070ed5b: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0070ed5d: shr edx, 0x1e */ { u32 c = (30u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0070ed60: lea eax, [edx + eax + 3] */ r_eax = (u32)(r_edx+r_eax+0x3u);
    /* 0070ed64: sar eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0070ed67: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0070ed69: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0070ed6b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0070ed6c: call 0x82e940 */ r_esp -= 4; W32(r_esp, 0x70ed71u); f_0082e940();
    /* 0070ed71: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0070ed74: mov dword ptr [edi + 0x2c], 1 */ W32((u32)(r_edi+0x2cu), 0x1u);
    /* 0070ed7b: mov dword ptr [edi + 0x58], eax */ W32((u32)(r_edi+0x58u), r_eax);
L_0070ed7e:; BB(0x0070ed7e);
    /* 0070ed7e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0070ed7f: ret  */ FN_RET(0x0070ece0); r_esp += 4; return;
}

void f_0070ed80(void) /* sub_70ED80 */
{
    FN_ENTER(0x0070ed80);
    /* 0070ed80: mov edx, dword ptr [ecx + 0x84] */ r_edx = R32((u32)(r_ecx+0x84u));
    /* 0070ed86: mov eax, dword ptr [edx + 0x24] */ r_eax = R32((u32)(r_edx+0x24u));
    /* 0070ed89: ret  */ FN_RET(0x0070ed80); r_esp += 4; return;
}

void f_0070ed8c(void) /* sub_70ED8C */
{
    FN_ENTER(0x0070ed8c);
    /* 0070ed8c: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0070ed90: mov edx, dword ptr [ecx + 0x84] */ r_edx = R32((u32)(r_ecx+0x84u));
    /* 0070ed96: mov edx, dword ptr [edx + 0x20] */ r_edx = R32((u32)(r_edx+0x20u));
    /* 0070ed99: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0070ed9b: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 0070ed9d: mov edx, dword ptr [ecx + 0x84] */ r_edx = R32((u32)(r_ecx+0x84u));
    /* 0070eda3: mov edx, dword ptr [edx + 0x20] */ r_edx = R32((u32)(r_edx+0x20u));
    /* 0070eda6: mov edx, dword ptr [edx + 4] */ r_edx = R32((u32)(r_edx+0x4u));
    /* 0070eda9: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 0070edac: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 0070edaf: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
    /* 0070edb2: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 0070edb5: mov dword ptr [eax + 0xc], edx */ W32((u32)(r_eax+0xcu), r_edx);
    /* 0070edb8: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0070edba: mov word ptr [eax + 0x10], dx */ W16((u32)(r_eax+0x10u), (u16)r_edx);
    /* 0070edbe: mov edx, dword ptr [ecx + 0x34] */ r_edx = R32((u32)(r_ecx+0x34u));
    /* 0070edc1: mov dword ptr [eax + 0x14], edx */ W32((u32)(r_eax+0x14u), r_edx);
    /* 0070edc4: mov edx, dword ptr [ecx + 0x38] */ r_edx = R32((u32)(r_ecx+0x38u));
    /* 0070edc7: mov dword ptr [eax + 0x18], edx */ W32((u32)(r_eax+0x18u), r_edx);
    /* 0070edca: mov edx, dword ptr [ecx + 0x3c] */ r_edx = R32((u32)(r_ecx+0x3cu));
    /* 0070edcd: mov dword ptr [eax + 0x1c], edx */ W32((u32)(r_eax+0x1cu), r_edx);
    /* 0070edd0: mov edx, dword ptr [ecx + 0x40] */ r_edx = R32((u32)(r_ecx+0x40u));
    /* 0070edd3: mov dword ptr [eax + 0x20], edx */ W32((u32)(r_eax+0x20u), r_edx);
    /* 0070edd6: mov edx, dword ptr [ecx + 0x78] */ r_edx = R32((u32)(r_ecx+0x78u));
    /* 0070edd9: mov dword ptr [eax + 0x58], edx */ W32((u32)(r_eax+0x58u), r_edx);
    /* 0070eddc: mov edx, dword ptr [ecx + 0x7c] */ r_edx = R32((u32)(r_ecx+0x7cu));
    /* 0070eddf: mov dword ptr [eax + 0x5c], edx */ W32((u32)(r_eax+0x5cu), r_edx);
    /* 0070ede2: mov edx, dword ptr [ecx + 0x44] */ r_edx = R32((u32)(r_ecx+0x44u));
    /* 0070ede5: mov dword ptr [eax + 0x24], edx */ W32((u32)(r_eax+0x24u), r_edx);
    /* 0070ede8: mov edx, dword ptr [ecx + 0x44] */ r_edx = R32((u32)(r_ecx+0x44u));
    /* 0070edeb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0070eded: je 0x70ee37 */ if (fZ) goto L_0070ee37;
L_0070edef:; BB(0x0070edef);
    /* 0070edef: mov edx, dword ptr [ecx + 0x48] */ r_edx = R32((u32)(r_ecx+0x48u));
    /* 0070edf2: mov dword ptr [eax + 0x28], edx */ W32((u32)(r_eax+0x28u), r_edx);
    /* 0070edf5: mov edx, dword ptr [ecx + 0x4c] */ r_edx = R32((u32)(r_ecx+0x4cu));
    /* 0070edf8: mov dword ptr [eax + 0x2c], edx */ W32((u32)(r_eax+0x2cu), r_edx);
    /* 0070edfb: mov edx, dword ptr [ecx + 0x50] */ r_edx = R32((u32)(r_ecx+0x50u));
    /* 0070edfe: mov dword ptr [eax + 0x30], edx */ W32((u32)(r_eax+0x30u), r_edx);
    /* 0070ee01: mov edx, dword ptr [ecx + 0x54] */ r_edx = R32((u32)(r_ecx+0x54u));
    /* 0070ee04: mov dword ptr [eax + 0x34], edx */ W32((u32)(r_eax+0x34u), r_edx);
    /* 0070ee07: mov edx, dword ptr [ecx + 0x58] */ r_edx = R32((u32)(r_ecx+0x58u));
    /* 0070ee0a: mov dword ptr [eax + 0x38], edx */ W32((u32)(r_eax+0x38u), r_edx);
    /* 0070ee0d: mov edx, dword ptr [ecx + 0x5c] */ r_edx = R32((u32)(r_ecx+0x5cu));
    /* 0070ee10: mov dword ptr [eax + 0x3c], edx */ W32((u32)(r_eax+0x3cu), r_edx);
    /* 0070ee13: mov edx, dword ptr [ecx + 0x60] */ r_edx = R32((u32)(r_ecx+0x60u));
    /* 0070ee16: mov dword ptr [eax + 0x40], edx */ W32((u32)(r_eax+0x40u), r_edx);
    /* 0070ee19: mov edx, dword ptr [ecx + 0x64] */ r_edx = R32((u32)(r_ecx+0x64u));
    /* 0070ee1c: mov dword ptr [eax + 0x44], edx */ W32((u32)(r_eax+0x44u), r_edx);
    /* 0070ee1f: mov edx, dword ptr [ecx + 0x68] */ r_edx = R32((u32)(r_ecx+0x68u));
    /* 0070ee22: mov dword ptr [eax + 0x48], edx */ W32((u32)(r_eax+0x48u), r_edx);
    /* 0070ee25: mov edx, dword ptr [ecx + 0x6c] */ r_edx = R32((u32)(r_ecx+0x6cu));
    /* 0070ee28: mov dword ptr [eax + 0x4c], edx */ W32((u32)(r_eax+0x4cu), r_edx);
    /* 0070ee2b: mov edx, dword ptr [ecx + 0x70] */ r_edx = R32((u32)(r_ecx+0x70u));
    /* 0070ee2e: mov dword ptr [eax + 0x50], edx */ W32((u32)(r_eax+0x50u), r_edx);
    /* 0070ee31: mov ecx, dword ptr [ecx + 0x74] */ r_ecx = R32((u32)(r_ecx+0x74u));
    /* 0070ee34: mov dword ptr [eax + 0x54], ecx */ W32((u32)(r_eax+0x54u), r_ecx);
L_0070ee37:; BB(0x0070ee37);
    /* 0070ee37: ret 4 */ FN_RET(0x0070ed8c); r_esp += 8; return;
}

void f_0070ee3c(void) /* sub_70EE3C */
{
    FN_ENTER(0x0070ee3c);
    /* 0070ee3c: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0070ee3f: test dl, 0x60 */ {  u32 a = (u8)r_edx; u32 b = 0x60u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0070ee42: jne 0x70ef04 */ if (!fZ) goto L_0070ef04;
L_0070ee48:; BB(0x0070ee48);
    /* 0070ee48: fld dword ptr [0x9f0b84] */ FPUSH(R_F32((u32)(0x9f0b84u)));
    /* 0070ee4e: fld dword ptr [ecx + 0x30] */ FPUSH(R_F32((u32)(r_ecx+0x30u)));
    /* 0070ee51: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 0070ee53: fld dword ptr [ecx + 0xc] */ FPUSH(R_F32((u32)(r_ecx+0xcu)));
    /* 0070ee56: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0070ee58: fld dword ptr [ecx + 0x14] */ FPUSH(R_F32((u32)(r_ecx+0x14u)));
    /* 0070ee5b: test edx, 0x200 */ {  u32 a = r_edx; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fO = 0; }
    /* 0070ee61: je 0x70ee65 */ if (fZ) goto L_0070ee65;
L_0070ee63:; BB(0x0070ee63);
    /* 0070ee63: fsub st(3) */ ST(0) = ST(0) - ST(3);
L_0070ee65:; BB(0x0070ee65);
    /* 0070ee65: fld dword ptr [0x96f440] */ FPUSH(R_F32((u32)(0x96f440u)));
    /* 0070ee6b: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0070ee6d: fld dword ptr [0x96f43c] */ FPUSH(R_F32((u32)(0x96f43cu)));
    /* 0070ee73: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0070ee75: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0070ee77: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0070ee78: ja 0x70ee85 */ if ((!fC&&!fZ)) goto L_0070ee85;
L_0070ee7a:; BB(0x0070ee7a);
    /* 0070ee7a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0070ee7c: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 0070ee7e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0070ee80: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0070ee81: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0070ee83: jb 0x70eef7 */ if (fC) goto L_0070eef7;
L_0070ee85:; BB(0x0070ee85);
    /* 0070ee85: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 0070ee87: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0070ee89: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0070ee8c: je 0x70eea5 */ if (fZ) goto L_0070eea5;
L_0070ee8e:; BB(0x0070ee8e);
    /* 0070ee8e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0070ee90: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0070ee92: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0070ee94: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0070ee96: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0070ee98: mov dword ptr [ecx + 0xc], eax */ W32((u32)(r_ecx+0xcu), r_eax);
    /* 0070ee9b: or edx, 0x100 */ {  u32 a = r_edx; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0070eea1: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 0070eea4: ret  */ FN_RET(0x0070ee3c); r_esp += 4; return;
L_0070eea5:; BB(0x0070eea5);
    /* 0070eea5: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fO = 0; }
    /* 0070eea8: je 0x70eecf */ if (fZ) goto L_0070eecf;
L_0070eeaa:; BB(0x0070eeaa);
    /* 0070eeaa: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 0070eeac: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0070eeae: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0070eeaf: jbe 0x70eeba */ if ((fC||fZ)) goto L_0070eeba;
L_0070eeb1:; BB(0x0070eeb1);
    /* 0070eeb1: or edx, 0x100 */ {  u32 a = r_edx; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0070eeb7: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
L_0070eeba:; BB(0x0070eeba);
    /* 0070eeba: fld dword ptr [0x96f438] */ FPUSH(R_F32((u32)(0x96f438u)));
    /* 0070eec0: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 0070eec2: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0070eec4: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0070eec6: fstp dword ptr [ecx + 0xc] */ W_F32((u32)(r_ecx+0xcu), ST(0)); FPOP();
    /* 0070eec9: fchs  */ ST(0) = -ST(0);
    /* 0070eecb: fstp dword ptr [ecx + 0x30] */ W_F32((u32)(r_ecx+0x30u), ST(0)); FPOP();
    /* 0070eece: ret  */ FN_RET(0x0070ee3c); r_esp += 4; return;
L_0070eecf:; BB(0x0070eecf);
    /* 0070eecf: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0070eed1: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0070eed3: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0070eed6: jne 0x70eee3 */ if (!fZ) goto L_0070eee3;
L_0070eed8:; BB(0x0070eed8);
    /* 0070eed8: test dl, 0x18 */ {  u32 a = (u8)r_edx; u32 b = 0x18u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0070eedb: jne 0x70ef05 */ if (!fZ) goto L_0070ef05;
L_0070eedd:; BB(0x0070eedd);
    /* 0070eedd: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0070eedf: fstp dword ptr [ecx + 0xc] */ W_F32((u32)(r_ecx+0xcu), ST(0)); FPOP();
    /* 0070eee2: ret  */ FN_RET(0x0070ee3c); r_esp += 4; return;
L_0070eee3:; BB(0x0070eee3);
    /* 0070eee3: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0070eee5: fstp dword ptr [ecx + 0xc] */ W_F32((u32)(r_ecx+0xcu), ST(0)); FPOP();
    /* 0070eee8: or edx, 0x100 */ {  u32 a = r_edx; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0070eeee: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 0070eef1: call 0x70ef1c */ r_esp -= 4; W32(r_esp, 0x70eef6u); f_0070ef1c();
    /* 0070eef6: ret  */ FN_RET(0x0070ee3c); r_esp += 4; return;
L_0070eef7:; BB(0x0070eef7);
    /* 0070eef7: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0070eef9: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0070eefb: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0070eefd: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0070eeff: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0070ef01: fstp dword ptr [ecx + 0xc] */ W_F32((u32)(r_ecx+0xcu), ST(0)); FPOP();
L_0070ef04:; BB(0x0070ef04);
    /* 0070ef04: ret  */ FN_RET(0x0070ee3c); r_esp += 4; return;
L_0070ef05:; BB(0x0070ef05);
    /* 0070ef05: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 0070ef07: fstp dword ptr [ecx + 0xc] */ W_F32((u32)(r_ecx+0xcu), ST(0)); FPOP();
    /* 0070ef0a: or edx, 0x100 */ {  u32 a = r_edx; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0070ef10: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 0070ef13: call 0x70f33c */ r_esp -= 4; W32(r_esp, 0x70ef18u); f_0070f33c();
    /* 0070ef18: ret  */ FN_RET(0x0070ee3c); r_esp += 4; return;
}

void f_0070ef1c(void) /* sub_70EF1C */
{
    FN_ENTER(0x0070ef1c);
    /* 0070ef1c: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 0070ef1f: or eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0070ef22: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0070ef25: ret  */ FN_RET(0x0070ef1c); r_esp += 4; return;
}

void f_0070ef28(void) /* sub_70EF28 */
{
    FN_ENTER(0x0070ef28);
    /* 0070ef28: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0070ef29: sub esp, 0x78 */ {  u32 a = r_esp; u32 b = 0x78u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0070ef2c: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0070ef2e: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 0070ef31: test eax, 0xa0 */ {  u32 a = r_eax; u32 b = 0xa0u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070ef36: jne 0x70f0b8 */ if (!fZ) goto L_0070f0b8;
L_0070ef3c:; BB(0x0070ef3c);
    /* 0070ef3c: fld dword ptr [0x96f434] */ FPUSH(R_F32((u32)(0x96f434u)));
    /* 0070ef42: fadd dword ptr [ebx + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0xcu));
    /* 0070ef45: fcom dword ptr [ebx + 0x10] */ fx_compare(ST(0), R_F32((u32)(r_ebx+0x10u))); 
    /* 0070ef48: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0070ef4a: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 0070ef4d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0070ef4e: jb 0x70ef58 */ if (fC) goto L_0070ef58;
L_0070ef50:; BB(0x0070ef50);
    /* 0070ef50: fcom dword ptr [ebx + 0x14] */ fx_compare(ST(0), R_F32((u32)(r_ebx+0x14u))); 
    /* 0070ef53: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0070ef55: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0070ef56: jb 0x70ef5f */ if (fC) goto L_0070ef5f;
L_0070ef58:; BB(0x0070ef58);
    /* 0070ef58: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0070ef5a: add esp, 0x78 */ {  u32 a = r_esp; u32 b = 0x78u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0070ef5d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0070ef5e: ret  */ FN_RET(0x0070ef28); r_esp += 4; return;
L_0070ef5f:; BB(0x0070ef5f);
    /* 0070ef5f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0070ef61: mov eax, dword ptr [ebx + 0x84] */ r_eax = R32((u32)(r_ebx+0x84u));
    /* 0070ef67: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 0070ef6a: mov ecx, dword ptr [ecx] */ r_ecx = R32((u32)(r_ecx));
    /* 0070ef6c: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 0070ef6f: mov eax, dword ptr [eax + 0x20] */ r_eax = R32((u32)(r_eax+0x20u));
    /* 0070ef72: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 0070ef75: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0070ef79: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0070ef7d: mov edx, dword ptr [ebx + 0x20] */ r_edx = R32((u32)(r_ebx+0x20u));
    /* 0070ef80: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 0070ef84: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0070ef86: mov word ptr [esp + 0x10], ax */ W16((u32)(r_esp+0x10u), (u16)r_eax);
    /* 0070ef8b: mov eax, dword ptr [ebx + 0x34] */ r_eax = R32((u32)(r_ebx+0x34u));
    /* 0070ef8e: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0070ef92: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 0070ef95: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0070ef99: mov eax, dword ptr [ebx + 0x3c] */ r_eax = R32((u32)(r_ebx+0x3cu));
    /* 0070ef9c: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 0070efa0: mov eax, dword ptr [ebx + 0x40] */ r_eax = R32((u32)(r_ebx+0x40u));
    /* 0070efa3: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0070efa7: mov eax, dword ptr [ebx + 0x78] */ r_eax = R32((u32)(r_ebx+0x78u));
    /* 0070efaa: mov dword ptr [esp + 0x58], eax */ W32((u32)(r_esp+0x58u), r_eax);
    /* 0070efae: mov eax, dword ptr [ebx + 0x7c] */ r_eax = R32((u32)(r_ebx+0x7cu));
    /* 0070efb1: mov dword ptr [esp + 0x5c], eax */ W32((u32)(r_esp+0x5cu), r_eax);
    /* 0070efb5: mov eax, dword ptr [ebx + 0x44] */ r_eax = R32((u32)(r_ebx+0x44u));
    /* 0070efb8: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 0070efbc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070efbe: je 0x70f014 */ if (fZ) goto L_0070f014;
L_0070efc0:; BB(0x0070efc0);
    /* 0070efc0: mov eax, dword ptr [ebx + 0x48] */ r_eax = R32((u32)(r_ebx+0x48u));
    /* 0070efc3: mov edx, dword ptr [ebx + 0x4c] */ r_edx = R32((u32)(r_ebx+0x4cu));
    /* 0070efc6: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 0070efca: mov eax, dword ptr [ebx + 0x50] */ r_eax = R32((u32)(r_ebx+0x50u));
    /* 0070efcd: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 0070efd1: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 0070efd5: mov eax, dword ptr [ebx + 0x54] */ r_eax = R32((u32)(r_ebx+0x54u));
    /* 0070efd8: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 0070efdc: mov eax, dword ptr [ebx + 0x58] */ r_eax = R32((u32)(r_ebx+0x58u));
    /* 0070efdf: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 0070efe3: mov eax, dword ptr [ebx + 0x5c] */ r_eax = R32((u32)(r_ebx+0x5cu));
    /* 0070efe6: mov dword ptr [esp + 0x3c], eax */ W32((u32)(r_esp+0x3cu), r_eax);
    /* 0070efea: mov eax, dword ptr [ebx + 0x60] */ r_eax = R32((u32)(r_ebx+0x60u));
    /* 0070efed: mov dword ptr [esp + 0x40], eax */ W32((u32)(r_esp+0x40u), r_eax);
    /* 0070eff1: mov eax, dword ptr [ebx + 0x64] */ r_eax = R32((u32)(r_ebx+0x64u));
    /* 0070eff4: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 0070eff8: mov eax, dword ptr [ebx + 0x68] */ r_eax = R32((u32)(r_ebx+0x68u));
    /* 0070effb: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 0070efff: mov eax, dword ptr [ebx + 0x6c] */ r_eax = R32((u32)(r_ebx+0x6cu));
    /* 0070f002: mov dword ptr [esp + 0x4c], eax */ W32((u32)(r_esp+0x4cu), r_eax);
    /* 0070f006: mov eax, dword ptr [ebx + 0x70] */ r_eax = R32((u32)(r_ebx+0x70u));
    /* 0070f009: mov dword ptr [esp + 0x50], eax */ W32((u32)(r_esp+0x50u), r_eax);
    /* 0070f00d: mov eax, dword ptr [ebx + 0x74] */ r_eax = R32((u32)(r_ebx+0x74u));
    /* 0070f010: mov dword ptr [esp + 0x54], eax */ W32((u32)(r_esp+0x54u), r_eax);
L_0070f014:; BB(0x0070f014);
    /* 0070f014: call 0x7a93d8 */ r_esp -= 4; W32(r_esp, 0x70f019u); f_007a93d8();
    /* 0070f019: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x70f01eu); f_0082dbac();
    /* 0070f01e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0070f020: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x70f025u); f_0082d990();
    /* 0070f025: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0070f027: call 0x830cd8 */ r_esp -= 4; W32(r_esp, 0x70f02cu); f_00830cd8();
    /* 0070f02c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0070f02e: push dword ptr [ebx + 0x1c] */ { u32 v = R32((u32)(r_ebx+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0070f031: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0070f033: push dword ptr [ebx + 0x18] */ { u32 v = R32((u32)(r_ebx+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 0070f036: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x70f03bu); f_00830b74();
    /* 0070f03b: fld dword ptr [ebx + 0x24] */ FPUSH(R_F32((u32)(r_ebx+0x24u)));
    /* 0070f03e: fmul dword ptr [0x96f42c] */ ST(0) = ST(0) * R_F32((u32)(0x96f42cu));
    /* 0070f044: fdiv dword ptr [0x96f428] */ ST(0) = ST(0) / R_F32((u32)(0x96f428u));
    /* 0070f04a: fnstcw word ptr [esp + 0x60] */ W16((u32)(r_esp+0x60u), fcw);
    /* 0070f04e: movzx eax, word ptr [esp + 0x60] */ r_eax = (u32)R16((u32)(r_esp+0x60u));
    /* 0070f053: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0070f058: mov dword ptr [esp + 0x68], eax */ W32((u32)(r_esp+0x68u), r_eax);
    /* 0070f05c: fldcw word ptr [esp + 0x68] */ fcw = R16((u32)(r_esp+0x68u));
    /* 0070f060: fistp dword ptr [esp + 0x70] */ W32((u32)(r_esp+0x70u), (u32)fx_int32(ST(0))); FPOP();
    /* 0070f064: fldcw word ptr [esp + 0x60] */ fcw = R16((u32)(r_esp+0x60u));
    /* 0070f068: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0070f06a: mov edx, dword ptr [esp + 0x70] */ r_edx = R32((u32)(r_esp+0x70u));
    /* 0070f06e: call 0x830c04 */ r_esp -= 4; W32(r_esp, 0x70f073u); f_00830c04();
    /* 0070f073: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 0070f078: push dword ptr [ebx + 0x2c] */ { u32 v = R32((u32)(r_ebx+0x2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0070f07b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0070f07d: push dword ptr [ebx + 0x28] */ { u32 v = R32((u32)(r_ebx+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 0070f080: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x70f085u); f_0082fa0c();
    /* 0070f085: mov eax, dword ptr [ebx + 0x84] */ r_eax = R32((u32)(r_ebx+0x84u));
    /* 0070f08b: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 0070f08e: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x70f093u); f_00829cc8();
    /* 0070f093: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0070f096: movsx ebx, word ptr [ebx + 8] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_ebx+0x8u));
    /* 0070f09a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0070f09b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0070f09c: call 0x70dbe0 */ r_esp -= 4; W32(r_esp, 0x70f0a1u); f_0070dbe0();
    /* 0070f0a1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0070f0a4: call 0x7a9318 */ r_esp -= 4; W32(r_esp, 0x70f0a9u); f_007a9318();
    /* 0070f0a9: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x70f0aeu); f_0082dab0();
    /* 0070f0ae: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0070f0b3: call 0x82eb80 */ r_esp -= 4; W32(r_esp, 0x70f0b8u); f_0082eb80();
L_0070f0b8:; BB(0x0070f0b8);
    /* 0070f0b8: add esp, 0x78 */ {  u32 a = r_esp; u32 b = 0x78u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0070f0bb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0070f0bc: ret  */ FN_RET(0x0070ef28); r_esp += 4; return;
}

