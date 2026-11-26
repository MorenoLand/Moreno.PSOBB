#include "protos.h"

void f_00543094(void) /* sub_543094 */
{
    FN_ENTER(0x00543094);
    /* 00543094: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00543095: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00543096: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
    /* 0054309a: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 0054309e: mov eax, dword ptr [ecx + 0x20] */ r_eax = R32((u32)(r_ecx+0x20u));
    /* 005430a1: mov edi, dword ptr [ecx + 0x2c] */ r_edi = R32((u32)(r_ecx+0x2cu));
    /* 005430a4: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 005430a7: mov dword ptr [edi + eax*4], ebx */ W32((u32)(r_edi+r_eax*4), r_ebx);
    /* 005430aa: mov ebx, dword ptr [ecx + 0x2c] */ r_ebx = R32((u32)(r_ecx+0x2cu));
    /* 005430ad: mov dword ptr [ebx + eax*4 + 4], edx */ W32((u32)(r_ebx+r_eax*4+0x4u), r_edx);
    /* 005430b1: mov edi, dword ptr [ecx + 0x2c] */ r_edi = R32((u32)(r_ecx+0x2cu));
    /* 005430b4: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 005430b8: mov ebx, dword ptr [edx] */ r_ebx = R32((u32)(r_edx));
    /* 005430ba: mov dword ptr [edi + eax*4 + 8], ebx */ W32((u32)(r_edi+r_eax*4+0x8u), r_ebx);
    /* 005430be: mov ebx, dword ptr [edx + 4] */ r_ebx = R32((u32)(r_edx+0x4u));
    /* 005430c1: mov dword ptr [edi + eax*4 + 0xc], ebx */ W32((u32)(r_edi+r_eax*4+0xcu), r_ebx);
    /* 005430c5: mov edx, dword ptr [edx + 8] */ r_edx = R32((u32)(r_edx+0x8u));
    /* 005430c8: mov dword ptr [edi + eax*4 + 0x10], edx */ W32((u32)(r_edi+r_eax*4+0x10u), r_edx);
    /* 005430cc: mov eax, dword ptr [ecx + 0x20] */ r_eax = R32((u32)(r_ecx+0x20u));
    /* 005430cf: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005430d2: cmp eax, dword ptr [ecx + 0x1c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x1cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005430d5: jl 0x5430e3 */ if ((fS!=fO)) goto L_005430e3;
L_005430d7:; BB(0x005430d7);
    /* 005430d7: mov dword ptr [ecx + 0x20], 0 */ W32((u32)(r_ecx+0x20u), 0x0u);
    /* 005430de: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005430df: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005430e0: ret 0xc */ FN_RET(0x00543094); r_esp += 16; return;
L_005430e3:; BB(0x005430e3);
    /* 005430e3: mov dword ptr [ecx + 0x20], eax */ W32((u32)(r_ecx+0x20u), r_eax);
    /* 005430e6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005430e7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005430e8: ret 0xc */ FN_RET(0x00543094); r_esp += 16; return;
}

void f_005430ec(void) /* sub_5430EC */
{
    FN_ENTER(0x005430ec);
    /* 005430ec: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005430ed: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005430ee: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005430ef: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005430f0: mov ebx, dword ptr [ecx + 0x20] */ r_ebx = R32((u32)(r_ecx+0x20u));
    /* 005430f3: lea edx, [ebx - 1] */ r_edx = (u32)(r_ebx+0xffffffffu);
    /* 005430f6: mov dword ptr [ecx + 0x24], edx */ W32((u32)(r_ecx+0x24u), r_edx);
    /* 005430f9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005430fb: jl 0x54316e */ if ((fS!=fO)) goto L_0054316e;
L_005430fd:; BB(0x005430fd);
    /* 005430fd: fld dword ptr [0x9238c0] */ FPUSH(R_F32((u32)(0x9238c0u)));
    /* 00543103: lea ebx, [edx + edx*4] */ r_ebx = (u32)(r_edx+r_edx*4);
    /* 00543106: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00543108: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_0054310a:; BB(0x0054310a);
    /* 0054310a: mov esi, dword ptr [ecx + 0x2c] */ r_esi = R32((u32)(r_ecx+0x2cu));
    /* 0054310d: fld dword ptr [ecx + 0x34] */ FPUSH(R_F32((u32)(r_ecx+0x34u)));
    /* 00543110: mov ebp, dword ptr [ecx + 0x30] */ r_ebp = R32((u32)(r_ecx+0x30u));
    /* 00543113: fld dword ptr [esi + ebx] */ FPUSH(R_F32((u32)(r_esi+r_ebx)));
    /* 00543116: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 00543118: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0054311a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0054311b: je 0x5431fe */ if (fZ) goto L_005431fe;
L_00543121:; BB(0x00543121);
    /* 00543121: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00543123: fcom dword ptr [0x9238bc] */ fx_compare(ST(0), R_F32((u32)(0x9238bcu))); 
    /* 00543129: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0054312b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0054312c: jb 0x543158 */ if (fC) goto L_00543158;
L_0054312e:; BB(0x0054312e);
    /* 0054312e: mov edi, dword ptr [esi + ebx + 4] */ r_edi = R32((u32)(r_esi+r_ebx+0x4u));
    /* 00543132: fstp dword ptr [esi + ebx] */ W_F32((u32)(r_esi+r_ebx), ST(0)); FPOP();
    /* 00543135: mov eax, edi */ r_eax = r_edi;
    /* 00543137: shr eax, 0x18 */ { u32 c = (24u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0054313a: sub eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0054313c: and edi, 0xffffff */ {  u32 a = r_edi; u32 b = 0xffffffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 00543142: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00543144: jle 0x5431ec */ if ((fZ||fS!=fO)) goto L_005431ec;
L_0054314a:; BB(0x0054314a);
    /* 0054314a: shl eax, 0x18 */ { u32 c = (24u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0054314d: or edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 0054314f: mov dword ptr [esi + ebx + 4], edi */ W32((u32)(r_esi+r_ebx+0x4u), r_edi);
    /* 00543153: mov dword ptr [ecx + 0x24], edx */ W32((u32)(r_ecx+0x24u), r_edx);
    /* 00543156: jmp 0x54315f */ goto L_0054315f;
L_00543158:; BB(0x00543158);
    /* 00543158: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0054315a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0054315c: mov dword ptr [esi + ebx], eax */ W32((u32)(r_esi+r_ebx), r_eax);
L_0054315f:; BB(0x0054315f);
    /* 0054315f: add ebx, -0x14 */ {  u32 a = r_ebx; u32 b = 0xffffffecu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00543162: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00543165: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00543167: jge 0x54310a */ if ((fS==fO)) goto L_0054310a;
L_00543169:; BB(0x00543169);
    /* 00543169: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0054316b: mov ebx, dword ptr [ecx + 0x20] */ r_ebx = R32((u32)(r_ecx+0x20u));
L_0054316e:; BB(0x0054316e);
    /* 0054316e: mov eax, dword ptr [ecx + 0x1c] */ r_eax = R32((u32)(r_ecx+0x1cu));
    /* 00543171: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00543174: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00543176: jl 0x5431e7 */ if ((fS!=fO)) goto L_005431e7;
L_00543178:; BB(0x00543178);
    /* 00543178: fld dword ptr [0x9238c0] */ FPUSH(R_F32((u32)(0x9238c0u)));
    /* 0054317e: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 00543181: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00543183: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00543185: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00543187: mov ecx, eax */ r_ecx = r_eax;
L_00543189:; BB(0x00543189);
    /* 00543189: mov edi, dword ptr [ebp + 0x2c] */ r_edi = R32((u32)(r_ebp+0x2cu));
    /* 0054318c: fld dword ptr [ebp + 0x34] */ FPUSH(R_F32((u32)(r_ebp+0x34u)));
    /* 0054318f: mov esi, dword ptr [ebp + 0x30] */ r_esi = R32((u32)(r_ebp+0x30u));
    /* 00543192: fld dword ptr [edi + edx] */ FPUSH(R_F32((u32)(r_edi+r_edx)));
    /* 00543195: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 00543197: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00543199: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0054319a: je 0x543207 */ if (fZ) goto L_00543207;
L_0054319c:; BB(0x0054319c);
    /* 0054319c: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0054319e: fcom dword ptr [0x9238bc] */ fx_compare(ST(0), R_F32((u32)(0x9238bcu))); 
    /* 005431a4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005431a6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005431a7: jb 0x5431d1 */ if (fC) goto L_005431d1;
L_005431a9:; BB(0x005431a9);
    /* 005431a9: mov eax, dword ptr [edi + edx + 4] */ r_eax = R32((u32)(r_edi+r_edx+0x4u));
    /* 005431ad: fstp dword ptr [edi + edx] */ W_F32((u32)(r_edi+r_edx), ST(0)); FPOP();
    /* 005431b0: mov ebx, eax */ r_ebx = r_eax;
    /* 005431b2: shr ebx, 0x18 */ { u32 c = (24u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 005431b5: sub ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 005431b7: and eax, 0xffffff */ {  u32 a = r_eax; u32 b = 0xffffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005431bc: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005431be: jle 0x5431f5 */ if ((fZ||fS!=fO)) goto L_005431f5;
L_005431c0:; BB(0x005431c0);
    /* 005431c0: shl ebx, 0x18 */ { u32 c = (24u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 005431c3: or eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005431c5: mov dword ptr [edi + edx + 4], eax */ W32((u32)(r_edi+r_edx+0x4u), r_eax);
    /* 005431c9: mov ebx, dword ptr [ebp + 0x20] */ r_ebx = R32((u32)(r_ebp+0x20u));
    /* 005431cc: mov dword ptr [ebp + 0x24], ecx */ W32((u32)(r_ebp+0x24u), r_ecx);
    /* 005431cf: jmp 0x5431db */ goto L_005431db;
L_005431d1:; BB(0x005431d1);
    /* 005431d1: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005431d3: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 005431d5: mov dword ptr [edi + edx], ebx */ W32((u32)(r_edi+r_edx), r_ebx);
    /* 005431d8: mov ebx, dword ptr [ebp + 0x20] */ r_ebx = R32((u32)(r_ebp+0x20u));
L_005431db:; BB(0x005431db);
    /* 005431db: add edx, -0x14 */ {  u32 a = r_edx; u32 b = 0xffffffecu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005431de: add ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005431e1: cmp ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005431e3: jge 0x543189 */ if ((fS==fO)) goto L_00543189;
L_005431e5:; BB(0x005431e5);
    /* 005431e5: fstp st(0) */ ST(0) = ST(0); FPOP();
L_005431e7:; BB(0x005431e7);
    /* 005431e7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005431e8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005431e9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005431ea: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005431eb: ret  */ FN_RET(0x005430ec); r_esp += 4; return;
L_005431ec:; BB(0x005431ec);
    /* 005431ec: mov dword ptr [esi + ebx + 4], edi */ W32((u32)(r_esi+r_ebx+0x4u), r_edi);
    /* 005431f0: jmp 0x54315f */ goto L_0054315f;
L_005431f5:; BB(0x005431f5);
    /* 005431f5: mov dword ptr [edi + edx + 4], eax */ W32((u32)(r_edi+r_edx+0x4u), r_eax);
    /* 005431f9: mov ebx, dword ptr [ebp + 0x20] */ r_ebx = R32((u32)(r_ebp+0x20u));
    /* 005431fc: jmp 0x5431db */ goto L_005431db;
L_005431fe:; BB(0x005431fe);
    /* 005431fe: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00543200: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00543202: jmp 0x54315f */ goto L_0054315f;
L_00543207:; BB(0x00543207);
    /* 00543207: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00543209: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0054320b: jmp 0x5431db */ goto L_005431db;
}

void f_00543210(void) /* sub_543210 */
{
    FN_ENTER(0x00543210);
    /* 00543210: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00543211: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00543212: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00543213: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00543214: mov esi, ecx */ r_esi = r_ecx;
    /* 00543216: mov ebp, dword ptr [esi + 0x20] */ r_ebp = R32((u32)(r_esi+0x20u));
    /* 00543219: mov edi, dword ptr [esi + 0x24] */ r_edi = R32((u32)(r_esi+0x24u));
    /* 0054321c: lea eax, [ebp - 1] */ r_eax = (u32)(r_ebp+0xffffffffu);
    /* 0054321f: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00543221: je 0x5433e8 */ if (fZ) goto L_005433e8;
L_00543227:; BB(0x00543227);
    /* 00543227: fld dword ptr [0xa489dc] */ FPUSH(R_F32((u32)(0xa489dcu)));
    /* 0054322d: fld dword ptr [0xa489e0] */ FPUSH(R_F32((u32)(0xa489e0u)));
    /* 00543233: fld dword ptr [0xa489e4] */ FPUSH(R_F32((u32)(0xa489e4u)));
    /* 00543239: mov edx, dword ptr [esi + 0x28] */ r_edx = R32((u32)(r_esi+0x28u));
    /* 0054323c: jle 0x543351 */ if ((fZ||fS!=fO)) goto L_00543351;
L_00543242:; BB(0x00543242);
    /* 00543242: mov ecx, dword ptr [esi + 0x1c] */ r_ecx = R32((u32)(r_esi+0x1cu));
    /* 00543245: add ebp, ecx */ {  u32 a = r_ebp; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00543247: sub ebp, edi */ {  u32 a = r_ebp; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 00543249: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0054324b: jl 0x5432c9 */ if ((fS!=fO)) goto L_005432c9;
L_0054324d:; BB(0x0054324d);
    /* 0054324d: lea ecx, [eax + eax*4] */ r_ecx = (u32)(r_eax+r_eax*4);
    /* 00543250: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00543252: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00543254: jmp 0x543259 */ goto L_00543259;
L_00543256:; BB(0x00543256);
    /* 00543256: fstp dword ptr [edx - 8] */ W_F32((u32)(r_edx+0xfffffff8u), ST(0)); FPOP();
L_00543259:; BB(0x00543259);
    /* 00543259: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 0054325b: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 0054325d: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 0054325f: fld st(5) */ { long double v = ST(5); FPUSH(v); }
    /* 00543261: mov ebx, dword ptr [esi + 0x2c] */ r_ebx = R32((u32)(r_esi+0x2cu));
    /* 00543264: fld dword ptr [ecx + ebx] */ FPUSH(R_F32((u32)(r_ecx+r_ebx)));
    /* 00543267: fmul st(4), st(0) */ ST(4) = ST(4) * ST(0);
    /* 00543269: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 0054326b: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 0054326d: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0054326f: fadd dword ptr [ecx + ebx + 8] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+r_ebx+0x8u));
    /* 00543273: mov edi, dword ptr [ecx + ebx + 4] */ r_edi = R32((u32)(r_ecx+r_ebx+0x4u));
    /* 00543277: fstp dword ptr [edx] */ W_F32((u32)(r_edx), ST(0)); FPOP();
    /* 00543279: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0054327b: fadd dword ptr [ecx + ebx + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+r_ebx+0xcu));
    /* 0054327f: fstp dword ptr [edx + 4] */ W_F32((u32)(r_edx+0x4u), ST(0)); FPOP();
    /* 00543282: fadd dword ptr [ecx + ebx + 0x10] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+r_ebx+0x10u));
    /* 00543286: fld st(4) */ { long double v = ST(4); FPUSH(v); }
    /* 00543288: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0054328a: fstp dword ptr [edx + 8] */ W_F32((u32)(r_edx+0x8u), ST(0)); FPOP();
    /* 0054328d: mov dword ptr [edx + 0xc], edi */ W32((u32)(r_edx+0xcu), r_edi);
    /* 00543290: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00543292: fchs  */ ST(0) = -ST(0);
    /* 00543294: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 00543296: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 00543298: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0054329a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0054329c: fadd dword ptr [ecx + ebx + 8] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+r_ebx+0x8u));
    /* 005432a0: fstp dword ptr [edx + 0x10] */ W_F32((u32)(r_edx+0x10u), ST(0)); FPOP();
    /* 005432a3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005432a5: fadd dword ptr [ecx + ebx + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+r_ebx+0xcu));
    /* 005432a9: fstp dword ptr [edx + 0x14] */ W_F32((u32)(r_edx+0x14u), ST(0)); FPOP();
    /* 005432ac: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005432af: fadd dword ptr [ecx + ebx + 0x10] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+r_ebx+0x10u));
    /* 005432b3: mov dword ptr [edx + 0x1c], edi */ W32((u32)(r_edx+0x1cu), r_edi);
    /* 005432b6: add edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005432b9: add ecx, -0x14 */ {  u32 a = r_ecx; u32 b = 0xffffffecu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005432bc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005432be: jge 0x543256 */ if ((fS==fO)) goto L_00543256;
L_005432c0:; BB(0x005432c0);
    /* 005432c0: fstp dword ptr [edx - 8] */ W_F32((u32)(r_edx+0xfffffff8u), ST(0)); FPOP();
    /* 005432c3: mov edi, dword ptr [esi + 0x24] */ r_edi = R32((u32)(r_esi+0x24u));
    /* 005432c6: mov ecx, dword ptr [esi + 0x1c] */ r_ecx = R32((u32)(r_esi+0x1cu));
L_005432c9:; BB(0x005432c9);
    /* 005432c9: add ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005432cc: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005432ce: jl 0x5433ed */ if ((fS!=fO)) goto L_005433ed;
L_005432d4:; BB(0x005432d4);
    /* 005432d4: lea eax, [ecx + ecx*4] */ r_eax = (u32)(r_ecx+r_ecx*4);
    /* 005432d7: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005432d9: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_005432db:; BB(0x005432db);
    /* 005432db: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 005432dd: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 005432df: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 005432e1: fld st(5) */ { long double v = ST(5); FPUSH(v); }
    /* 005432e3: mov ebx, dword ptr [esi + 0x2c] */ r_ebx = R32((u32)(r_esi+0x2cu));
    /* 005432e6: fld dword ptr [eax + ebx] */ FPUSH(R_F32((u32)(r_eax+r_ebx)));
    /* 005432e9: fmul st(4), st(0) */ ST(4) = ST(4) * ST(0);
    /* 005432eb: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 005432ed: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 005432ef: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 005432f1: fadd dword ptr [eax + ebx + 8] */ ST(0) = ST(0) + R_F32((u32)(r_eax+r_ebx+0x8u));
    /* 005432f5: mov edi, dword ptr [eax + ebx + 4] */ r_edi = R32((u32)(r_eax+r_ebx+0x4u));
    /* 005432f9: fstp dword ptr [edx] */ W_F32((u32)(r_edx), ST(0)); FPOP();
    /* 005432fb: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 005432fd: fadd dword ptr [eax + ebx + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_eax+r_ebx+0xcu));
    /* 00543301: fstp dword ptr [edx + 4] */ W_F32((u32)(r_edx+0x4u), ST(0)); FPOP();
    /* 00543304: fadd dword ptr [eax + ebx + 0x10] */ ST(0) = ST(0) + R_F32((u32)(r_eax+r_ebx+0x10u));
    /* 00543308: fld st(4) */ { long double v = ST(4); FPUSH(v); }
    /* 0054330a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0054330c: fstp dword ptr [edx + 8] */ W_F32((u32)(r_edx+0x8u), ST(0)); FPOP();
    /* 0054330f: mov dword ptr [edx + 0xc], edi */ W32((u32)(r_edx+0xcu), r_edi);
    /* 00543312: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00543314: fchs  */ ST(0) = -ST(0);
    /* 00543316: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 00543318: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 0054331a: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0054331c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0054331e: fadd dword ptr [eax + ebx + 8] */ ST(0) = ST(0) + R_F32((u32)(r_eax+r_ebx+0x8u));
    /* 00543322: fstp dword ptr [edx + 0x10] */ W_F32((u32)(r_edx+0x10u), ST(0)); FPOP();
    /* 00543325: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00543327: fadd dword ptr [eax + ebx + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_eax+r_ebx+0xcu));
    /* 0054332b: fstp dword ptr [edx + 0x14] */ W_F32((u32)(r_edx+0x14u), ST(0)); FPOP();
    /* 0054332e: add ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00543331: fadd dword ptr [eax + ebx + 0x10] */ ST(0) = ST(0) + R_F32((u32)(r_eax+r_ebx+0x10u));
    /* 00543335: fstp dword ptr [edx + 0x18] */ W_F32((u32)(r_edx+0x18u), ST(0)); FPOP();
    /* 00543338: mov dword ptr [edx + 0x1c], edi */ W32((u32)(r_edx+0x1cu), r_edi);
    /* 0054333b: add edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0054333e: add eax, -0x14 */ {  u32 a = r_eax; u32 b = 0xffffffecu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00543341: cmp ecx, dword ptr [esi + 0x24] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esi+0x24u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00543344: jge 0x5432db */ if ((fS==fO)) goto L_005432db;
L_00543346:; BB(0x00543346);
    /* 00543346: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00543348: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0054334a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0054334c: jmp 0x5433d3 */ goto L_005433d3;
L_00543351:; BB(0x00543351);
    /* 00543351: sub ebp, edi */ {  u32 a = r_ebp; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 00543353: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00543355: jl 0x5433f5 */ if ((fS!=fO)) goto L_005433f5;
L_0054335b:; BB(0x0054335b);
    /* 0054335b: lea ecx, [eax + eax*4] */ r_ecx = (u32)(r_eax+r_eax*4);
    /* 0054335e: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00543360: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
L_00543362:; BB(0x00543362);
    /* 00543362: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 00543364: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 00543366: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 00543368: fld st(5) */ { long double v = ST(5); FPUSH(v); }
    /* 0054336a: mov ebx, dword ptr [esi + 0x2c] */ r_ebx = R32((u32)(r_esi+0x2cu));
    /* 0054336d: fld dword ptr [ecx + ebx] */ FPUSH(R_F32((u32)(r_ecx+r_ebx)));
    /* 00543370: fmul st(4), st(0) */ ST(4) = ST(4) * ST(0);
    /* 00543372: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 00543374: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 00543376: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00543378: fadd dword ptr [ecx + ebx + 8] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+r_ebx+0x8u));
    /* 0054337c: mov edi, dword ptr [ecx + ebx + 4] */ r_edi = R32((u32)(r_ecx+r_ebx+0x4u));
    /* 00543380: fstp dword ptr [edx] */ W_F32((u32)(r_edx), ST(0)); FPOP();
    /* 00543382: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00543384: fadd dword ptr [ecx + ebx + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+r_ebx+0xcu));
    /* 00543388: fstp dword ptr [edx + 4] */ W_F32((u32)(r_edx+0x4u), ST(0)); FPOP();
    /* 0054338b: fadd dword ptr [ecx + ebx + 0x10] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+r_ebx+0x10u));
    /* 0054338f: fld st(4) */ { long double v = ST(4); FPUSH(v); }
    /* 00543391: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00543393: fstp dword ptr [edx + 8] */ W_F32((u32)(r_edx+0x8u), ST(0)); FPOP();
    /* 00543396: mov dword ptr [edx + 0xc], edi */ W32((u32)(r_edx+0xcu), r_edi);
    /* 00543399: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0054339b: fchs  */ ST(0) = -ST(0);
    /* 0054339d: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 0054339f: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 005433a1: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 005433a3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005433a5: fadd dword ptr [ecx + ebx + 8] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+r_ebx+0x8u));
    /* 005433a9: fstp dword ptr [edx + 0x10] */ W_F32((u32)(r_edx+0x10u), ST(0)); FPOP();
    /* 005433ac: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005433ae: fadd dword ptr [ecx + ebx + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+r_ebx+0xcu));
    /* 005433b2: fstp dword ptr [edx + 0x14] */ W_F32((u32)(r_edx+0x14u), ST(0)); FPOP();
    /* 005433b5: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005433b8: fadd dword ptr [ecx + ebx + 0x10] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+r_ebx+0x10u));
    /* 005433bc: fstp dword ptr [edx + 0x18] */ W_F32((u32)(r_edx+0x18u), ST(0)); FPOP();
    /* 005433bf: mov dword ptr [edx + 0x1c], edi */ W32((u32)(r_edx+0x1cu), r_edi);
    /* 005433c2: add edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005433c5: add ecx, -0x14 */ {  u32 a = r_ecx; u32 b = 0xffffffecu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005433c8: cmp eax, dword ptr [esi + 0x24] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+0x24u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005433cb: jge 0x543362 */ if ((fS==fO)) goto L_00543362;
L_005433cd:; BB(0x005433cd);
    /* 005433cd: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005433cf: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005433d1: fstp st(0) */ ST(0) = ST(0); FPOP();
L_005433d3:; BB(0x005433d3);
    /* 005433d3: call 0x7a902c */ r_esp -= 4; W32(r_esp, 0x5433d8u); f_007a902c();
    /* 005433d8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005433da: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005433dc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005433dd: push dword ptr [esi + 0x28] */ { u32 v = R32((u32)(r_esi+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 005433e0: call 0x82b1c8 */ r_esp -= 4; W32(r_esp, 0x5433e5u); f_0082b1c8();
    /* 005433e5: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_005433e8:; BB(0x005433e8);
    /* 005433e8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005433e9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005433ea: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005433eb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005433ec: ret  */ FN_RET(0x00543210); r_esp += 4; return;
L_005433ed:; BB(0x005433ed);
    /* 005433ed: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005433ef: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005433f1: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005433f3: jmp 0x5433d3 */ goto L_005433d3;
L_005433f5:; BB(0x005433f5);
    /* 005433f5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005433f7: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005433f9: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005433fb: jmp 0x5433d3 */ goto L_005433d3;
}

void f_00543400(void) /* sub_543400 */
{
    FN_ENTER(0x00543400);
    /* 00543400: mov dword ptr [0xa73780], 0x3f800000 */ W32((u32)(0xa73780u), 0x3f800000u);
    /* 0054340a: mov dword ptr [0xa73784], 0x41000000 */ W32((u32)(0xa73784u), 0x41000000u);
    /* 00543414: mov dword ptr [0xa73788], 0x3fc00000 */ W32((u32)(0xa73788u), 0x3fc00000u);
    /* 0054341e: ret  */ FN_RET(0x00543400); r_esp += 4; return;
}

void f_00543420(void) /* sub_543420 */
{
    FN_ENTER(0x00543420);
    /* 00543420: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00543421: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00543423: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00543425: call 0x543444 */ r_esp -= 4; W32(r_esp, 0x54342au); f_00543444();
    /* 0054342a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0054342e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00543430: jne 0x543436 */ if (!fZ) goto L_00543436;
L_00543432:; BB(0x00543432);
    /* 00543432: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00543433: ret 4 */ FN_RET(0x00543420); r_esp += 8; return;
L_00543436:; BB(0x00543436);
    /* 00543436: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00543437: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x54343cu); f_005c2f74();
    /* 0054343c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0054343d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0054343e: ret 4 */ FN_RET(0x00543420); r_esp += 8; return;
}

void f_00543444(void) /* sub_543444 */
{
    FN_ENTER(0x00543444);
    /* 00543444: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00543445: mov ebp, esp */ r_ebp = r_esp;
    /* 00543447: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00543449: push 0x8d57a8 */ { u32 v = 0x8d57a8u; r_esp -= 4; W32(r_esp, v); }
    /* 0054344e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00543454: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00543455: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0054345c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0054345f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00543462: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00543465: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00543468: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0054346b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0054346e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00543471: mov dword ptr [ecx], 0xb03180 */ W32((u32)(r_ecx), 0xb03180u);
    /* 00543477: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0054347e: call 0x78638c */ r_esp -= 4; W32(r_esp, 0x543483u); f_0078638c();
    /* 00543483: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00543486: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0054348d: mov esp, ebp */ r_esp = r_ebp;
    /* 0054348f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00543490: ret  */ FN_RET(0x00543444); r_esp += 4; return;
}

void f_00543494(void) /* sub_543494 */
{
    FN_ENTER(0x00543494);
    /* 00543494: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00543495: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00543496: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00543497: sub esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0054349a: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0054349c: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x5434a1u); f_004f7c84();
    /* 005434a1: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005434a4: je 0x5436a2 */ if (fZ) goto L_005436a2;
L_005434aa:; BB(0x005434aa);
    /* 005434aa: mov edi, dword ptr [0xaae168] */ r_edi = R32((u32)(0xaae168u));
    /* 005434b0: mov ecx, dword ptr [0xaae164] */ r_ecx = R32((u32)(0xaae164u));
    /* 005434b6: mov dword ptr [ebp + 0x384], 0 */ W32((u32)(r_ebp+0x384u), 0x0u);
    /* 005434c0: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005434c2: add ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005434c4: cmp edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005434c6: jge 0x5434fa */ if ((fS==fO)) goto L_005434fa;
L_005434c8:; BB(0x005434c8);
    /* 005434c8: mov esi, dword ptr [edi*4 + 0xaad720] */ r_esi = R32((u32)(r_edi*4+0xaad720u));
    /* 005434cf: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005434d1: je 0x5434f3 */ if (fZ) goto L_005434f3;
L_005434d3:; BB(0x005434d3);
    /* 005434d3: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 005434d6: cmp eax, dword ptr [0x9bd0a0] */ {  u32 a = r_eax; u32 b = R32((u32)(0x9bd0a0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005434dc: jne 0x5434f3 */ if (!fZ) goto L_005434f3;
L_005434de:; BB(0x005434de);
    /* 005434de: fld dword ptr [ebp + 0x35c] */ FPUSH(R_F32((u32)(r_ebp+0x35cu)));
    /* 005434e4: fcomp dword ptr [esi + 0x35c] */ fx_compare(ST(0), R_F32((u32)(r_esi+0x35cu))); FPOP();
    /* 005434ea: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005434ec: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005434ed: je 0x5436a9 */ if (fZ) goto L_005436a9;
L_005434f3:; BB(0x005434f3);
    /* 005434f3: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005434f6: cmp edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005434f8: jl 0x5434c8 */ if ((fS!=fO)) goto L_005434c8;
L_005434fa:; BB(0x005434fa);
    /* 005434fa: cmp edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005434fd: jge 0x54355b */ if ((fS==fO)) goto L_0054355b;
L_005434ff:; BB(0x005434ff);
    /* 005434ff: mov eax, edx */ r_eax = r_edx;
    /* 00543501: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00543503: add eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00543506: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00543509: jl 0x543540 */ if ((fS!=fO)) goto L_00543540;
L_0054350b:; BB(0x0054350b);
    /* 0054350b: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 00543510: mov word ptr [ebp + edx*2 + 0x38c], ax */ W16((u32)(r_ebp+r_edx*2+0x38cu), (u16)r_eax);
    /* 00543518: mov word ptr [ebp + edx*2 + 0x38e], ax */ W16((u32)(r_ebp+r_edx*2+0x38eu), (u16)r_eax);
    /* 00543520: mov word ptr [ebp + edx*2 + 0x390], ax */ W16((u32)(r_ebp+r_edx*2+0x390u), (u16)r_eax);
    /* 00543528: mov word ptr [ebp + edx*2 + 0x392], ax */ W16((u32)(r_ebp+r_edx*2+0x392u), (u16)r_eax);
    /* 00543530: mov word ptr [ebp + edx*2 + 0x394], ax */ W16((u32)(r_ebp+r_edx*2+0x394u), (u16)r_eax);
    /* 00543538: add edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0054353b: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054353e: jl 0x54350b */ if ((fS!=fO)) goto L_0054350b;
L_00543540:; BB(0x00543540);
    /* 00543540: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 00543545: mov word ptr [ebp + edx*2 + 0x38c], ax */ W16((u32)(r_ebp+r_edx*2+0x38cu), (u16)r_eax);
    /* 0054354d: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00543550: cmp edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00543553: jl 0x543540 */ if ((fS!=fO)) goto L_00543540;
L_00543555:; BB(0x00543555);
    /* 00543555: mov edx, dword ptr [ebp + 0x384] */ r_edx = R32((u32)(r_ebp+0x384u));
L_0054355b:; BB(0x0054355b);
    /* 0054355b: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0054355d: lea eax, [edx - 1] */ r_eax = (u32)(r_edx+0xffffffffu);
    /* 00543560: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00543562: jle 0x5435f9 */ if ((fZ||fS!=fO)) goto L_005435f9;
L_00543568:; BB(0x00543568);
    /* 00543568: mov dword ptr [esp + 0x5c], ebx */ W32((u32)(r_esp+0x5cu), r_ebx);
L_0054356c:; BB(0x0054356c);
    /* 0054356c: lea esi, [edi + 1] */ r_esi = (u32)(r_edi+0x1u);
    /* 0054356f: mov ebx, esi */ r_ebx = r_esi;
    /* 00543571: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00543573: jge 0x5435eb */ if ((fS==fO)) goto L_005435eb;
L_00543575:; BB(0x00543575);
    /* 00543575: mov dword ptr [esp + 0x58], esi */ W32((u32)(r_esp+0x58u), r_esi);
    /* 00543579: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
L_0054357b:; BB(0x0054357b);
    /* 0054357b: movzx eax, word ptr [ebp + edi + 0x38c] */ r_eax = (u32)R16((u32)(r_ebp+r_edi+0x38cu));
    /* 00543583: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00543584: call 0x786b3c */ r_esp -= 4; W32(r_esp, 0x543589u); f_00786b3c();
    /* 00543589: mov esi, eax */ r_esi = r_eax;
    /* 0054358b: movzx edx, word ptr [ebp + ebx*2 + 0x38c] */ r_edx = (u32)R16((u32)(r_ebp+r_ebx*2+0x38cu));
    /* 00543593: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00543594: call 0x786b3c */ r_esp -= 4; W32(r_esp, 0x543599u); f_00786b3c();
    /* 00543599: mov edx, eax */ r_edx = r_eax;
    /* 0054359b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054359e: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005435a0: je 0x5435d7 */ if (fZ) goto L_005435d7;
L_005435a2:; BB(0x005435a2);
    /* 005435a2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005435a4: je 0x5435d7 */ if (fZ) goto L_005435d7;
L_005435a6:; BB(0x005435a6);
    /* 005435a6: fld dword ptr [esi + 0x360] */ FPUSH(R_F32((u32)(r_esi+0x360u)));
    /* 005435ac: fcomp dword ptr [edx + 0x360] */ fx_compare(ST(0), R_F32((u32)(r_edx+0x360u))); FPOP();
    /* 005435b2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005435b4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005435b5: jbe 0x5435d7 */ if ((fC||fZ)) goto L_005435d7;
L_005435b7:; BB(0x005435b7);
    /* 005435b7: movzx edx, word ptr [ebp + edi + 0x38c] */ r_edx = (u32)R16((u32)(r_ebp+r_edi+0x38cu));
    /* 005435bf: movzx eax, word ptr [ebp + ebx*2 + 0x38c] */ r_eax = (u32)R16((u32)(r_ebp+r_ebx*2+0x38cu));
    /* 005435c7: mov word ptr [ebp + edi + 0x38c], ax */ W16((u32)(r_ebp+r_edi+0x38cu), (u16)r_eax);
    /* 005435cf: mov word ptr [ebp + ebx*2 + 0x38c], dx */ W16((u32)(r_ebp+r_ebx*2+0x38cu), (u16)r_edx);
L_005435d7:; BB(0x005435d7);
    /* 005435d7: mov edx, dword ptr [ebp + 0x384] */ r_edx = R32((u32)(r_ebp+0x384u));
    /* 005435dd: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005435e0: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005435e2: jl 0x54357b */ if ((fS!=fO)) goto L_0054357b;
L_005435e4:; BB(0x005435e4);
    /* 005435e4: mov esi, dword ptr [esp + 0x58] */ r_esi = R32((u32)(r_esp+0x58u));
    /* 005435e8: lea eax, [edx - 1] */ r_eax = (u32)(r_edx+0xffffffffu);
L_005435eb:; BB(0x005435eb);
    /* 005435eb: mov edi, esi */ r_edi = r_esi;
    /* 005435ed: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005435ef: jl 0x54356c */ if ((fS!=fO)) goto L_0054356c;
L_005435f5:; BB(0x005435f5);
    /* 005435f5: mov ebx, dword ptr [esp + 0x5c] */ r_ebx = R32((u32)(r_esp+0x5cu));
L_005435f9:; BB(0x005435f9);
    /* 005435f9: mov eax, dword ptr [ebp + 0x37c] */ r_eax = R32((u32)(r_ebp+0x37cu));
    /* 005435ff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00543601: je 0x54397a */ if (fZ) goto L_0054397a;
L_00543607:; BB(0x00543607);
    /* 00543607: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054360a: je 0x543916 */ if (fZ) goto L_00543916;
L_00543610:; BB(0x00543610);
    /* 00543610: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00543613: je 0x5438b2 */ if (fZ) goto L_005438b2;
L_00543619:; BB(0x00543619);
    /* 00543619: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054361c: je 0x543779 */ if (fZ) goto L_00543779;
L_00543622:; BB(0x00543622);
    /* 00543622: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00543625: je 0x54366f */ if (fZ) goto L_0054366f;
L_00543627:; BB(0x00543627);
    /* 00543627: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054362a: jne 0x54364b */ if (!fZ) goto L_0054364b;
L_0054362c:; BB(0x0054362c);
    /* 0054362c: mov eax, dword ptr [ebp + 0x380] */ r_eax = R32((u32)(r_ebp+0x380u));
    /* 00543632: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00543635: mov dword ptr [ebp + 0x380], eax */ W32((u32)(r_ebp+0x380u), r_eax);
    /* 0054363b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0054363d: jg 0x543686 */ if ((!fZ&&fS==fO)) goto L_00543686;
L_0054363f:; BB(0x0054363f);
    /* 0054363f: mov dword ptr [ebp + 0x37c], 3 */ W32((u32)(r_ebp+0x37cu), 0x3u);
    /* 00543649: jmp 0x543686 */ goto L_00543686;
L_0054364b:; BB(0x0054364b);
    /* 0054364b: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054364e: jne 0x543686 */ if (!fZ) goto L_00543686;
L_00543650:; BB(0x00543650);
    /* 00543650: mov eax, dword ptr [ebp + 0x380] */ r_eax = R32((u32)(r_ebp+0x380u));
    /* 00543656: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00543659: mov dword ptr [ebp + 0x380], eax */ W32((u32)(r_ebp+0x380u), r_eax);
    /* 0054365f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00543661: jg 0x543686 */ if ((!fZ&&fS==fO)) goto L_00543686;
L_00543663:; BB(0x00543663);
    /* 00543663: mov dword ptr [ebp + 0x37c], 3 */ W32((u32)(r_ebp+0x37cu), 0x3u);
    /* 0054366d: jmp 0x543686 */ goto L_00543686;
L_0054366f:; BB(0x0054366f);
    /* 0054366f: mov eax, dword ptr [ebp + 0x380] */ r_eax = R32((u32)(r_ebp+0x380u));
    /* 00543675: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00543678: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0054367a: jle 0x54372c */ if ((fZ||fS!=fO)) goto L_0054372c;
L_00543680:; BB(0x00543680);
    /* 00543680: mov dword ptr [ebp + 0x380], eax */ W32((u32)(r_ebp+0x380u), r_eax);
L_00543686:; BB(0x00543686);
    /* 00543686: mov eax, dword ptr [ebp + 0x3ac] */ r_eax = R32((u32)(r_ebp+0x3acu));
    /* 0054368c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0054368e: jl 0x5436fd */ if ((fS!=fO)) goto L_005436fd;
L_00543690:; BB(0x00543690);
    /* 00543690: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00543692: jle 0x543a8b */ if ((fZ||fS!=fO)) goto L_00543a8b;
L_00543698:; BB(0x00543698);
    /* 00543698: mov dword ptr [ebp + 0x3ac], 0x5a */ W32((u32)(r_ebp+0x3acu), 0x5au);
L_005436a2:; BB(0x005436a2);
    /* 005436a2: add esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005436a5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005436a6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005436a7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005436a8: ret  */ FN_RET(0x00543494); r_esp += 4; return;
L_005436a9:; BB(0x005436a9);
    /* 005436a9: movsx eax, word ptr [ebp + 0x28] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x28u));
    /* 005436ad: cmp ax, word ptr [esi + 0x28] */ {  u32 a = (u16)r_eax; u32 b = R16((u32)(r_esi+0x28u)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 005436b1: jne 0x5434f3 */ if (!fZ) goto L_005434f3;
L_005436b7:; BB(0x005436b7);
    /* 005436b7: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 005436bb: mov word ptr [esi + 0x430], ax */ W16((u32)(r_esi+0x430u), (u16)r_eax);
    /* 005436c2: movzx esi, word ptr [esi + 0x1c] */ r_esi = (u32)R16((u32)(r_esi+0x1cu));
    /* 005436c6: mov eax, dword ptr [ebp + 0x384] */ r_eax = R32((u32)(r_ebp+0x384u));
    /* 005436cc: lea edx, [eax + 1] */ r_edx = (u32)(r_eax+0x1u);
    /* 005436cf: mov dword ptr [ebp + 0x384], edx */ W32((u32)(r_ebp+0x384u), r_edx);
    /* 005436d5: mov word ptr [ebp + eax*2 + 0x38c], si */ W16((u32)(r_ebp+r_eax*2+0x38cu), (u16)r_esi);
    /* 005436dd: mov edx, dword ptr [ebp + 0x384] */ r_edx = R32((u32)(r_ebp+0x384u));
    /* 005436e3: cmp edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005436e6: jge 0x5434fa */ if ((fS==fO)) goto L_005434fa;
L_005436ec:; BB(0x005436ec);
    /* 005436ec: mov ecx, dword ptr [0xaae168] */ r_ecx = R32((u32)(0xaae168u));
    /* 005436f2: add ecx, dword ptr [0xaae164] */ {  u32 a = r_ecx; u32 b = R32((u32)(0xaae164u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005436f8: jmp 0x5434f3 */ goto L_005434f3;
L_005436fd:; BB(0x005436fd);
    /* 005436fd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005436ff: jle 0x54370d */ if ((fZ||fS!=fO)) goto L_0054370d;
L_00543701:; BB(0x00543701);
    /* 00543701: mov dword ptr [ebp + 0x3ac], 0x5a */ W32((u32)(r_ebp+0x3acu), 0x5au);
    /* 0054370b: jmp 0x5436a2 */ goto L_005436a2;
L_0054370d:; BB(0x0054370d);
    /* 0054370d: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00543710: cmp eax, -0x1e */ {  u32 a = r_eax; u32 b = 0xffffffe2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00543713: jle 0x54371d */ if ((fZ||fS!=fO)) goto L_0054371d;
L_00543715:; BB(0x00543715);
    /* 00543715: mov dword ptr [ebp + 0x3ac], eax */ W32((u32)(r_ebp+0x3acu), r_eax);
    /* 0054371b: jmp 0x5436a2 */ goto L_005436a2;
L_0054371d:; BB(0x0054371d);
    /* 0054371d: mov dword ptr [ebp + 0x3ac], 0x5a */ W32((u32)(r_ebp+0x3acu), 0x5au);
    /* 00543727: jmp 0x5436a2 */ goto L_005436a2;
L_0054372c:; BB(0x0054372c);
    /* 0054372c: mov dword ptr [ebp + 0x380], 0x1a4 */ W32((u32)(r_ebp+0x380u), 0x1a4u);
    /* 00543736: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00543738: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0054373a: mov dword ptr [ebp + 0x37c], 5 */ W32((u32)(r_ebp+0x37cu), 0x5u);
    /* 00543744: jle 0x543686 */ if ((fZ||fS!=fO)) goto L_00543686;
L_0054374a:; BB(0x0054374a);
    /* 0054374a: movzx eax, word ptr [ebp + edi*2 + 0x38c] */ r_eax = (u32)R16((u32)(r_ebp+r_edi*2+0x38cu));
    /* 00543752: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00543753: call 0x786b3c */ r_esp -= 4; W32(r_esp, 0x543758u); f_00786b3c();
    /* 00543758: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00543759: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054375b: je 0x543767 */ if (fZ) goto L_00543767;
L_0054375d:; BB(0x0054375d);
    /* 0054375d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0054375f: mov ecx, eax */ r_ecx = r_eax;
    /* 00543761: call dword ptr [edx + 0xf8] */ { u32 t = R32((u32)(r_edx+0xf8u)); r_esp -= 4; W32(r_esp, 0x543767u); call_ind(t); }
L_00543767:; BB(0x00543767);
    /* 00543767: mov edx, dword ptr [ebp + 0x384] */ r_edx = R32((u32)(r_ebp+0x384u));
    /* 0054376d: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00543770: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00543772: jl 0x54374a */ if ((fS!=fO)) goto L_0054374a;
L_00543774:; BB(0x00543774);
    /* 00543774: jmp 0x543686 */ goto L_00543686;
L_00543779:; BB(0x00543779);
    /* 00543779: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054377b: push 0x447a0000 */ { u32 v = 0x447a0000u; r_esp -= 4; W32(r_esp, v); }
    /* 00543780: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00543782: call 0x7714cc */ r_esp -= 4; W32(r_esp, 0x543787u); f_007714cc();
    /* 00543787: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 0054378a: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054378f: je 0x54389d */ if (fZ) goto L_0054389d;
L_00543795:; BB(0x00543795);
    /* 00543795: mov edx, dword ptr [ebp + 0x384] */ r_edx = R32((u32)(r_ebp+0x384u));
    /* 0054379b: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0054379d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0054379f: jle 0x5437c8 */ if ((fZ||fS!=fO)) goto L_005437c8;
L_005437a1:; BB(0x005437a1);
    /* 005437a1: movzx eax, word ptr [ebp + edi*2 + 0x38c] */ r_eax = (u32)R16((u32)(r_ebp+r_edi*2+0x38cu));
    /* 005437a9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005437aa: call 0x786b3c */ r_esp -= 4; W32(r_esp, 0x5437afu); f_00786b3c();
    /* 005437af: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005437b0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005437b2: je 0x5437bb */ if (fZ) goto L_005437bb;
L_005437b4:; BB(0x005437b4);
    /* 005437b4: mov ecx, eax */ r_ecx = r_eax;
    /* 005437b6: call 0x5445f4 */ r_esp -= 4; W32(r_esp, 0x5437bbu); f_005445f4();
L_005437bb:; BB(0x005437bb);
    /* 005437bb: mov edx, dword ptr [ebp + 0x384] */ r_edx = R32((u32)(r_ebp+0x384u));
    /* 005437c1: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005437c4: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005437c6: jl 0x5437a1 */ if ((fS!=fO)) goto L_005437a1;
L_005437c8:; BB(0x005437c8);
    /* 005437c8: mov dword ptr [ebp + 0x380], 0x78 */ W32((u32)(r_ebp+0x380u), 0x78u);
    /* 005437d2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005437d4: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 005437d6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005437d8: mov dword ptr [ebp + 0x37c], 4 */ W32((u32)(r_ebp+0x37cu), 0x4u);
    /* 005437e2: jle 0x543686 */ if ((fZ||fS!=fO)) goto L_00543686;
L_005437e8:; BB(0x005437e8);
    /* 005437e8: mov esi, eax */ r_esi = r_eax;
L_005437ea:; BB(0x005437ea);
    /* 005437ea: movzx edx, word ptr [ebp + edi*2 + 0x38c] */ r_edx = (u32)R16((u32)(r_ebp+r_edi*2+0x38cu));
    /* 005437f2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005437f3: call 0x786b3c */ r_esp -= 4; W32(r_esp, 0x5437f8u); f_00786b3c();
    /* 005437f8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005437f9: mov dword ptr [esp + edi*4], eax */ W32((u32)(r_esp+r_edi*4), r_eax);
    /* 005437fc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005437fe: je 0x543803 */ if (fZ) goto L_00543803;
L_00543800:; BB(0x00543800);
    /* 00543800: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_00543803:; BB(0x00543803);
    /* 00543803: mov edx, dword ptr [ebp + 0x384] */ r_edx = R32((u32)(r_ebp+0x384u));
    /* 00543809: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0054380c: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054380e: jl 0x5437ea */ if ((fS!=fO)) goto L_005437ea;
L_00543810:; BB(0x00543810);
    /* 00543810: mov eax, esi */ r_eax = r_esi;
    /* 00543812: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00543814: je 0x543686 */ if (fZ) goto L_00543686;
L_0054381a:; BB(0x0054381a);
    /* 0054381a: mov eax, dword ptr [ebp + 0x388] */ r_eax = R32((u32)(r_ebp+0x388u));
L_00543820:; BB(0x00543820);
    /* 00543820: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00543823: mov edi, eax */ r_edi = r_eax;
    /* 00543825: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00543827: jl 0x54382d */ if ((fS!=fO)) goto L_0054382d;
L_00543829:; BB(0x00543829);
    /* 00543829: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0054382b: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_0054382d:; BB(0x0054382d);
    /* 0054382d: mov ecx, dword ptr [esp + eax*4] */ r_ecx = R32((u32)(r_esp+r_eax*4));
    /* 00543830: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00543832: je 0x543820 */ if (fZ) goto L_00543820;
L_00543834:; BB(0x00543834);
    /* 00543834: mov dword ptr [ebp + 0x388], edi */ W32((u32)(r_ebp+0x388u), r_edi);
    /* 0054383a: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0054383c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0054383e: jle 0x543686 */ if ((fZ||fS!=fO)) goto L_00543686;
L_00543844:; BB(0x00543844);
    /* 00543844: mov ecx, dword ptr [esp + edi*4] */ r_ecx = R32((u32)(r_esp+r_edi*4));
    /* 00543847: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00543849: je 0x543891 */ if (fZ) goto L_00543891;
L_0054384b:; BB(0x0054384b);
    /* 0054384b: cmp edi, dword ptr [ebp + 0x388] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebp+0x388u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00543851: jne 0x543873 */ if (!fZ) goto L_00543873;
L_00543853:; BB(0x00543853);
    /* 00543853: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 00543855: mov eax, dword ptr [ecx + 0x390] */ r_eax = R32((u32)(r_ecx+0x390u));
    /* 0054385b: or eax, 0x4000000 */ {  u32 a = r_eax; u32 b = 0x4000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00543860: mov dword ptr [ecx + 0x390], eax */ W32((u32)(r_ecx+0x390u), r_eax);
    /* 00543866: call 0x787550 */ r_esp -= 4; W32(r_esp, 0x54386bu); f_00787550();
    /* 0054386b: mov edx, dword ptr [ebp + 0x384] */ r_edx = R32((u32)(r_ebp+0x384u));
    /* 00543871: jmp 0x543891 */ goto L_00543891;
L_00543873:; BB(0x00543873);
    /* 00543873: push 0x22 */ { u32 v = 0x22u; r_esp -= 4; W32(r_esp, v); }
    /* 00543875: mov eax, dword ptr [ecx + 0x390] */ r_eax = R32((u32)(r_ecx+0x390u));
    /* 0054387b: and eax, 0xfbffffff */ {  u32 a = r_eax; u32 b = 0xfbffffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00543880: mov dword ptr [ecx + 0x390], eax */ W32((u32)(r_ecx+0x390u), r_eax);
    /* 00543886: call 0x787550 */ r_esp -= 4; W32(r_esp, 0x54388bu); f_00787550();
    /* 0054388b: mov edx, dword ptr [ebp + 0x384] */ r_edx = R32((u32)(r_ebp+0x384u));
L_00543891:; BB(0x00543891);
    /* 00543891: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00543894: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00543896: jl 0x543844 */ if ((fS!=fO)) goto L_00543844;
L_00543898:; BB(0x00543898);
    /* 00543898: jmp 0x543686 */ goto L_00543686;
L_0054389d:; BB(0x0054389d);
    /* 0054389d: mov edx, dword ptr [ebp + 0x384] */ r_edx = R32((u32)(r_ebp+0x384u));
    /* 005438a3: mov dword ptr [ebp + 0x37c], 0 */ W32((u32)(r_ebp+0x37cu), 0x0u);
    /* 005438ad: jmp 0x543686 */ goto L_00543686;
L_005438b2:; BB(0x005438b2);
    /* 005438b2: add dword ptr [ebp + 0x380], -1 */ { u32 ad = (u32)(r_ebp+0x380u);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 005438b9: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 005438bb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005438bd: jle 0x5438ea */ if ((fZ||fS!=fO)) goto L_005438ea;
L_005438bf:; BB(0x005438bf);
    /* 005438bf: movzx eax, word ptr [ebp + edi*2 + 0x38c] */ r_eax = (u32)R16((u32)(r_ebp+r_edi*2+0x38cu));
    /* 005438c7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005438c8: call 0x786b3c */ r_esp -= 4; W32(r_esp, 0x5438cdu); f_00786b3c();
    /* 005438cd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005438ce: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005438d0: je 0x5438dd */ if (fZ) goto L_005438dd;
L_005438d2:; BB(0x005438d2);
    /* 005438d2: mov ecx, eax */ r_ecx = r_eax;
    /* 005438d4: call 0x54622c */ r_esp -= 4; W32(r_esp, 0x5438d9u); f_0054622c();
    /* 005438d9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005438db: je 0x5438f9 */ if (fZ) goto L_005438f9;
L_005438dd:; BB(0x005438dd);
    /* 005438dd: mov edx, dword ptr [ebp + 0x384] */ r_edx = R32((u32)(r_ebp+0x384u));
    /* 005438e3: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005438e6: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005438e8: jl 0x5438bf */ if ((fS!=fO)) goto L_005438bf;
L_005438ea:; BB(0x005438ea);
    /* 005438ea: mov dword ptr [ebp + 0x37c], 3 */ W32((u32)(r_ebp+0x37cu), 0x3u);
    /* 005438f4: jmp 0x543686 */ goto L_00543686;
L_005438f9:; BB(0x005438f9);
    /* 005438f9: mov eax, dword ptr [ebp + 0x380] */ r_eax = R32((u32)(r_ebp+0x380u));
    /* 005438ff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00543901: jle 0x54390e */ if ((fZ||fS!=fO)) goto L_0054390e;
L_00543903:; BB(0x00543903);
    /* 00543903: mov edx, dword ptr [ebp + 0x384] */ r_edx = R32((u32)(r_ebp+0x384u));
    /* 00543909: jmp 0x543686 */ goto L_00543686;
L_0054390e:; BB(0x0054390e);
    /* 0054390e: mov edx, dword ptr [ebp + 0x384] */ r_edx = R32((u32)(r_ebp+0x384u));
    /* 00543914: jmp 0x5438ea */ goto L_005438ea;
L_00543916:; BB(0x00543916);
    /* 00543916: mov eax, dword ptr [ebp + 0x380] */ r_eax = R32((u32)(r_ebp+0x380u));
    /* 0054391c: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0054391f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00543921: jle 0x54392e */ if ((fZ||fS!=fO)) goto L_0054392e;
L_00543923:; BB(0x00543923);
    /* 00543923: mov dword ptr [ebp + 0x380], eax */ W32((u32)(r_ebp+0x380u), r_eax);
    /* 00543929: jmp 0x543686 */ goto L_00543686;
L_0054392e:; BB(0x0054392e);
    /* 0054392e: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00543930: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00543932: jle 0x543961 */ if ((fZ||fS!=fO)) goto L_00543961;
L_00543934:; BB(0x00543934);
    /* 00543934: mov dword ptr [ebp + 0x380], eax */ W32((u32)(r_ebp+0x380u), r_eax);
L_0054393a:; BB(0x0054393a);
    /* 0054393a: movzx eax, word ptr [ebp + edi*2 + 0x38c] */ r_eax = (u32)R16((u32)(r_ebp+r_edi*2+0x38cu));
    /* 00543942: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00543943: call 0x786b3c */ r_esp -= 4; W32(r_esp, 0x543948u); f_00786b3c();
    /* 00543948: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00543949: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054394b: je 0x543954 */ if (fZ) goto L_00543954;
L_0054394d:; BB(0x0054394d);
    /* 0054394d: mov ecx, eax */ r_ecx = r_eax;
    /* 0054394f: call 0x5445f4 */ r_esp -= 4; W32(r_esp, 0x543954u); f_005445f4();
L_00543954:; BB(0x00543954);
    /* 00543954: mov edx, dword ptr [ebp + 0x384] */ r_edx = R32((u32)(r_ebp+0x384u));
    /* 0054395a: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0054395d: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054395f: jl 0x54393a */ if ((fS!=fO)) goto L_0054393a;
L_00543961:; BB(0x00543961);
    /* 00543961: mov dword ptr [ebp + 0x380], 0xd2 */ W32((u32)(r_ebp+0x380u), 0xd2u);
    /* 0054396b: mov dword ptr [ebp + 0x37c], 2 */ W32((u32)(r_ebp+0x37cu), 0x2u);
    /* 00543975: jmp 0x543686 */ goto L_00543686;
L_0054397a:; BB(0x0054397a);
    /* 0054397a: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 0054397c: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0054397f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00543981: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x543984u); call_ind(t); }
    /* 00543984: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00543986: jne 0x543993 */ if (!fZ) goto L_00543993;
L_00543988:; BB(0x00543988);
    /* 00543988: mov edx, dword ptr [ebp + 0x384] */ r_edx = R32((u32)(r_ebp+0x384u));
    /* 0054398e: jmp 0x543686 */ goto L_00543686;
L_00543993:; BB(0x00543993);
    /* 00543993: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00543995: push 0x447a0000 */ { u32 v = 0x447a0000u; r_esp -= 4; W32(r_esp, v); }
    /* 0054399a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0054399c: call 0x7714cc */ r_esp -= 4; W32(r_esp, 0x5439a1u); f_007714cc();
    /* 005439a1: movzx edi, ax */ r_edi = (u32)(u16)r_eax;
    /* 005439a4: cmp edi, 0xffff */ {  u32 a = r_edi; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005439aa: je 0x543a4f */ if (fZ) goto L_00543a4f;
L_005439b0:; BB(0x005439b0);
    /* 005439b0: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005439b2: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x5439b7u); f_00770738();
    /* 005439b7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005439b8: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x5439bdu); f_0068d5a8();
    /* 005439bd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005439be: fld dword ptr [eax + 0x40] */ FPUSH(R_F32((u32)(r_eax+0x40u)));
    /* 005439c1: fsub dword ptr [ebp + 0x40] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0x40u));
    /* 005439c4: fld dword ptr [eax + 0x38] */ FPUSH(R_F32((u32)(r_eax+0x38u)));
    /* 005439c7: fsub dword ptr [ebp + 0x38] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0x38u));
    /* 005439ca: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 005439cc: fmul qword ptr [0x9238f8] */ ST(0) = ST(0) * R_F64((u32)(0x9238f8u));
    /* 005439d2: fdiv qword ptr [0x9238f0] */ ST(0) = ST(0) / R_F64((u32)(0x9238f0u));
    /* 005439d8: mov edx, dword ptr [ebp + 0x384] */ r_edx = R32((u32)(r_ebp+0x384u));
    /* 005439de: fnstcw word ptr [esp + 0x40] */ W16((u32)(r_esp+0x40u), fcw);
    /* 005439e2: movzx eax, word ptr [esp + 0x40] */ r_eax = (u32)R16((u32)(r_esp+0x40u));
    /* 005439e7: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005439ec: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 005439f0: fldcw word ptr [esp + 0x48] */ fcw = R16((u32)(r_esp+0x48u));
    /* 005439f4: fistp dword ptr [esp + 0x50] */ W32((u32)(r_esp+0x50u), (u32)fx_int32(ST(0))); FPOP();
    /* 005439f8: fldcw word ptr [esp + 0x40] */ fcw = R16((u32)(r_esp+0x40u));
    /* 005439fc: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 00543a00: add eax, 0x4000 */ {  u32 a = r_eax; u32 b = 0x4000u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00543a05: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00543a07: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00543a09: jle 0x543a36 */ if ((fZ||fS!=fO)) goto L_00543a36;
L_00543a0b:; BB(0x00543a0b);
    /* 00543a0b: mov esi, eax */ r_esi = r_eax;
L_00543a0d:; BB(0x00543a0d);
    /* 00543a0d: movzx edx, word ptr [ebp + edi*2 + 0x38c] */ r_edx = (u32)R16((u32)(r_ebp+r_edi*2+0x38cu));
    /* 00543a15: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00543a16: call 0x786b3c */ r_esp -= 4; W32(r_esp, 0x543a1bu); f_00786b3c();
    /* 00543a1b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00543a1c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00543a1e: je 0x543a23 */ if (fZ) goto L_00543a23;
L_00543a20:; BB(0x00543a20);
    /* 00543a20: mov dword ptr [eax + 0x60], esi */ W32((u32)(r_eax+0x60u), r_esi);
L_00543a23:; BB(0x00543a23);
    /* 00543a23: mov edx, dword ptr [ebp + 0x384] */ r_edx = R32((u32)(r_ebp+0x384u));
    /* 00543a29: add esi, 0x1555 */ {  u32 a = r_esi; u32 b = 0x1555u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00543a2f: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00543a32: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00543a34: jl 0x543a0d */ if ((fS!=fO)) goto L_00543a0d;
L_00543a36:; BB(0x00543a36);
    /* 00543a36: mov dword ptr [ebp + 0x380], 0x5a */ W32((u32)(r_ebp+0x380u), 0x5au);
    /* 00543a40: mov dword ptr [ebp + 0x37c], 1 */ W32((u32)(r_ebp+0x37cu), 0x1u);
    /* 00543a4a: jmp 0x543686 */ goto L_00543686;
L_00543a4f:; BB(0x00543a4f);
    /* 00543a4f: mov edx, dword ptr [ebp + 0x384] */ r_edx = R32((u32)(r_ebp+0x384u));
    /* 00543a55: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00543a57: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00543a59: jle 0x543686 */ if ((fZ||fS!=fO)) goto L_00543686;
L_00543a5f:; BB(0x00543a5f);
    /* 00543a5f: movzx eax, word ptr [ebp + edi*2 + 0x38c] */ r_eax = (u32)R16((u32)(r_ebp+r_edi*2+0x38cu));
    /* 00543a67: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00543a68: call 0x786b3c */ r_esp -= 4; W32(r_esp, 0x543a6du); f_00786b3c();
    /* 00543a6d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00543a6e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00543a70: je 0x543a79 */ if (fZ) goto L_00543a79;
L_00543a72:; BB(0x00543a72);
    /* 00543a72: mov ecx, eax */ r_ecx = r_eax;
    /* 00543a74: call 0x5444cc */ r_esp -= 4; W32(r_esp, 0x543a79u); f_005444cc();
L_00543a79:; BB(0x00543a79);
    /* 00543a79: mov edx, dword ptr [ebp + 0x384] */ r_edx = R32((u32)(r_ebp+0x384u));
    /* 00543a7f: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00543a82: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00543a84: jl 0x543a5f */ if ((fS!=fO)) goto L_00543a5f;
L_00543a86:; BB(0x00543a86);
    /* 00543a86: jmp 0x543686 */ goto L_00543686;
L_00543a8b:; BB(0x00543a8b);
    /* 00543a8b: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00543a8e: mov dword ptr [ebp + 0x3ac], eax */ W32((u32)(r_ebp+0x3acu), r_eax);
    /* 00543a94: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00543a96: jg 0x5436a2 */ if ((!fZ&&fS==fO)) goto L_005436a2;
L_00543a9c:; BB(0x00543a9c);
    /* 00543a9c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00543a9d: call 0x8113e4 */ r_esp -= 4; W32(r_esp, 0x543aa2u); f_008113e4();
    /* 00543aa2: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 00543aa6: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00543aab: mov word ptr [ebp + 8], ax */ W16((u32)(r_ebp+0x8u), (u16)r_eax);
    /* 00543aaf: add esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00543ab2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00543ab3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00543ab4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00543ab5: ret  */ FN_RET(0x00543494); r_esp += 4; return;
}

void f_00543ab8(void)
{
    FN_ENTER(0x00543ab8);
    /* 00543ab8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00543ab9: mov ebp, esp */ r_ebp = r_esp;
    /* 00543abb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00543abd: push 0x8d57fa */ { u32 v = 0x8d57fau; r_esp -= 4; W32(r_esp, v); }
    /* 00543ac2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00543ac8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00543ac9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00543ad0: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00543ad3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00543ad6: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 00543ad9: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 00543adc: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 00543adf: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00543ae1: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 00543ae8: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x543aedu); f_005caba4();
    /* 00543aed: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00543af0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00543af3: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00543af6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00543af8: je 0x543c7b */ if (fZ) goto L_00543c7b;
L_00543afe:; BB(0x00543afe);
    /* 00543afe: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 00543b05: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00543b0c: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 00543b12: mov ecx, eax */ r_ecx = r_eax;
    /* 00543b14: call 0x787a4c */ r_esp -= 4; W32(r_esp, 0x543b19u); f_00787a4c();
    /* 00543b19: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 00543b20: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00543b27: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 00543b2e: push 0x3b0 */ { u32 v = 0x3b0u; r_esp -= 4; W32(r_esp, v); }
    /* 00543b33: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x543b38u); f_005caba4();
    /* 00543b38: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00543b3b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00543b3e: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00543b41: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00543b43: je 0x543c74 */ if (fZ) goto L_00543c74;
L_00543b49:; BB(0x00543b49);
    /* 00543b49: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 00543b50: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00543b57: mov ecx, eax */ r_ecx = r_eax;
    /* 00543b59: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00543b5c: mov dword ptr [ebp - 0x40], ecx */ W32((u32)(r_ebp+0xffffffc0u), r_ecx);
    /* 00543b5f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00543b60: call 0x7865e8 */ r_esp -= 4; W32(r_esp, 0x543b65u); f_007865e8();
    /* 00543b65: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 00543b6c: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00543b6f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00543b72: mov dword ptr [ecx], 0xb03180 */ W32((u32)(r_ecx), 0xb03180u);
    /* 00543b78: mov eax, dword ptr [0x9bcf58] */ r_eax = R32((u32)(0x9bcf58u));
    /* 00543b7d: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00543b80: call dword ptr [0xb032cc] */ { u32 t = R32((u32)(0xb032ccu)); r_esp -= 4; W32(r_esp, 0x543b86u); call_ind(t); }
    /* 00543b86: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00543b89: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x543b8eu); f_007b4f54();
    /* 00543b8e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00543b91: mov eax, dword ptr [ecx + 0x38] */ r_eax = R32((u32)(r_ecx+0x38u));
    /* 00543b94: mov edx, dword ptr [ecx + 0x3c] */ r_edx = R32((u32)(r_ecx+0x3cu));
    /* 00543b97: mov ebx, dword ptr [ecx + 0x40] */ r_ebx = R32((u32)(r_ecx+0x40u));
    /* 00543b9a: mov esi, dword ptr [ecx + 0x30] */ r_esi = R32((u32)(r_ecx+0x30u));
    /* 00543b9d: mov dword ptr [ecx + 0x300], eax */ W32((u32)(r_ecx+0x300u), r_eax);
    /* 00543ba3: mov dword ptr [ecx + 0x37c], 0 */ W32((u32)(r_ecx+0x37cu), 0x0u);
    /* 00543bad: or esi, 0x6000800 */ {  u32 a = r_esi; u32 b = 0x6000800u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00543bb3: mov dword ptr [ecx + 0x304], edx */ W32((u32)(r_ecx+0x304u), r_edx);
    /* 00543bb9: push 0x22 */ { u32 v = 0x22u; r_esp -= 4; W32(r_esp, v); }
    /* 00543bbb: mov dword ptr [ecx + 0x308], ebx */ W32((u32)(r_ecx+0x308u), r_ebx);
    /* 00543bc1: mov dword ptr [ecx + 0x30], esi */ W32((u32)(r_ecx+0x30u), r_esi);
    /* 00543bc4: call 0x787550 */ r_esp -= 4; W32(r_esp, 0x543bc9u); f_00787550();
    /* 00543bc9: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00543bcc: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 00543bd1: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 00543bd6: mov dword ptr [ecx + 0x388], edx */ W32((u32)(r_ecx+0x388u), r_edx);
    /* 00543bdc: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00543bde: mov dword ptr [ecx + 0x384], ebx */ W32((u32)(r_ecx+0x384u), r_ebx);
    /* 00543be4: mov word ptr [ecx + 0x38c], ax */ W16((u32)(r_ecx+0x38cu), (u16)r_eax);
    /* 00543beb: mov word ptr [ecx + 0x38e], ax */ W16((u32)(r_ecx+0x38eu), (u16)r_eax);
    /* 00543bf2: mov word ptr [ecx + 0x390], ax */ W16((u32)(r_ecx+0x390u), (u16)r_eax);
    /* 00543bf9: mov word ptr [ecx + 0x392], ax */ W16((u32)(r_ecx+0x392u), (u16)r_eax);
    /* 00543c00: mov word ptr [ecx + 0x394], ax */ W16((u32)(r_ecx+0x394u), (u16)r_eax);
    /* 00543c07: mov word ptr [ecx + 0x396], ax */ W16((u32)(r_ecx+0x396u), (u16)r_eax);
    /* 00543c0e: mov word ptr [ecx + 0x398], ax */ W16((u32)(r_ecx+0x398u), (u16)r_eax);
    /* 00543c15: mov word ptr [ecx + 0x39a], ax */ W16((u32)(r_ecx+0x39au), (u16)r_eax);
    /* 00543c1c: mov word ptr [ecx + 0x39c], ax */ W16((u32)(r_ecx+0x39cu), (u16)r_eax);
    /* 00543c23: mov word ptr [ecx + 0x39e], ax */ W16((u32)(r_ecx+0x39eu), (u16)r_eax);
    /* 00543c2a: mov word ptr [ecx + 0x3a0], ax */ W16((u32)(r_ecx+0x3a0u), (u16)r_eax);
    /* 00543c31: mov word ptr [ecx + 0x3a2], ax */ W16((u32)(r_ecx+0x3a2u), (u16)r_eax);
    /* 00543c38: mov word ptr [ecx + 0x3a4], ax */ W16((u32)(r_ecx+0x3a4u), (u16)r_eax);
    /* 00543c3f: mov word ptr [ecx + 0x3a6], ax */ W16((u32)(r_ecx+0x3a6u), (u16)r_eax);
    /* 00543c46: mov word ptr [ecx + 0x3a8], ax */ W16((u32)(r_ecx+0x3a8u), (u16)r_eax);
    /* 00543c4d: mov word ptr [ecx + 0x3aa], ax */ W16((u32)(r_ecx+0x3aau), (u16)r_eax);
    /* 00543c54: mov dword ptr [ecx + 0x3ac], edx */ W32((u32)(r_ecx+0x3acu), r_edx);
    /* 00543c5a: mov dword ptr [ebp - 0x2c], ebx */ W32((u32)(r_ebp+0xffffffd4u), r_ebx);
L_00543c5d:; BB(0x00543c5d);
    /* 00543c5d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00543c60: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00543c63: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00543c66: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00543c69: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00543c70: mov esp, ebp */ r_esp = r_ebp;
    /* 00543c72: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00543c73: ret  */ FN_RET(0x00543ab8); r_esp += 4; return;
L_00543c74:; BB(0x00543c74);
    /* 00543c74: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00543c76: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00543c79: jmp 0x543c5d */ goto L_00543c5d;
L_00543c7b:; BB(0x00543c7b);
    /* 00543c7b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00543c7d: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00543c80: jmp 0x543b20 */ f_00543b20(); return;
}

void f_00543c88(void) /* sub_543C88 */
{
    FN_ENTER(0x00543c88);
    /* 00543c88: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00543c8b: mov edx, ecx */ r_edx = r_ecx;
    /* 00543c8d: mov ecx, dword ptr [edx + 0x384] */ r_ecx = R32((u32)(r_edx+0x384u));
    /* 00543c93: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00543c95: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00543c97: mov dword ptr [edx + 0x380], 0x78 */ W32((u32)(r_edx+0x380u), 0x78u);
    /* 00543ca1: mov dword ptr [edx + 0x37c], 6 */ W32((u32)(r_edx+0x37cu), 0x6u);
    /* 00543cab: jle 0x543ce4 */ if ((fZ||fS!=fO)) goto L_00543ce4;
L_00543cad:; BB(0x00543cad);
    /* 00543cad: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 00543cb1: mov ebx, eax */ r_ebx = r_eax;
    /* 00543cb3: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 00543cb6: mov esi, edx */ r_esi = r_edx;
L_00543cb8:; BB(0x00543cb8);
    /* 00543cb8: movzx ecx, word ptr [esi + ebx*2 + 0x38c] */ r_ecx = (u32)R16((u32)(r_esi+r_ebx*2+0x38cu));
    /* 00543cc0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00543cc1: call 0x786b3c */ r_esp -= 4; W32(r_esp, 0x543cc6u); f_00786b3c();
    /* 00543cc6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00543cc7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00543cc9: je 0x543cd2 */ if (fZ) goto L_00543cd2;
L_00543ccb:; BB(0x00543ccb);
    /* 00543ccb: mov ecx, eax */ r_ecx = r_eax;
    /* 00543ccd: call 0x5461f0 */ r_esp -= 4; W32(r_esp, 0x543cd2u); f_005461f0();
L_00543cd2:; BB(0x00543cd2);
    /* 00543cd2: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00543cd5: cmp ebx, dword ptr [esi + 0x384] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esi+0x384u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00543cdb: jl 0x543cb8 */ if ((fS!=fO)) goto L_00543cb8;
L_00543cdd:; BB(0x00543cdd);
    /* 00543cdd: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 00543ce1: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
L_00543ce4:; BB(0x00543ce4);
    /* 00543ce4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00543ce7: ret  */ FN_RET(0x00543c88); r_esp += 4; return;
}

void f_00543ce8(void) /* sub_543CE8 */
{
    FN_ENTER(0x00543ce8);
    /* 00543ce8: mov dword ptr [0xa737a4], 0x3f800000 */ W32((u32)(0xa737a4u), 0x3f800000u);
    /* 00543cf2: mov dword ptr [0xa737a8], 0x41000000 */ W32((u32)(0xa737a8u), 0x41000000u);
    /* 00543cfc: mov dword ptr [0xa737ac], 0x3fc00000 */ W32((u32)(0xa737acu), 0x3fc00000u);
    /* 00543d06: ret  */ FN_RET(0x00543ce8); r_esp += 4; return;
}

void f_00543d08(void) /* sub_543D08 */
{
    FN_ENTER(0x00543d08);
    /* 00543d08: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00543d09: mov ebp, esp */ r_ebp = r_esp;
    /* 00543d0b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00543d0d: push 0x8d5838 */ { u32 v = 0x8d5838u; r_esp -= 4; W32(r_esp, v); }
    /* 00543d12: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00543d18: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00543d19: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00543d20: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00543d23: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00543d26: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00543d29: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00543d2c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00543d2f: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00543d32: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00543d35: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00543d3c: mov dword ptr [ecx], 0xb03400 */ W32((u32)(r_ecx), 0xb03400u);
    /* 00543d42: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x543d47u); f_007b9c8c();
    /* 00543d47: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00543d4a: mov edx, dword ptr [eax + 0x3f8] */ r_edx = R32((u32)(r_eax+0x3f8u));
    /* 00543d50: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00543d52: je 0x543d6e */ if (fZ) goto L_00543d6e;
L_00543d54:; BB(0x00543d54);
    /* 00543d54: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00543d58: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00543d5d: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00543d61: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00543d64: mov dword ptr [edx + 0x3f8], 0 */ W32((u32)(r_edx+0x3f8u), 0x0u);
L_00543d6e:; BB(0x00543d6e);
    /* 00543d6e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00543d71: mov edx, dword ptr [eax + 0x3fc] */ r_edx = R32((u32)(r_eax+0x3fcu));
    /* 00543d77: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00543d79: je 0x543d95 */ if (fZ) goto L_00543d95;
L_00543d7b:; BB(0x00543d7b);
    /* 00543d7b: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00543d7f: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00543d84: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00543d88: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00543d8b: mov dword ptr [edx + 0x3fc], 0 */ W32((u32)(r_edx+0x3fcu), 0x0u);
L_00543d95:; BB(0x00543d95);
    /* 00543d95: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00543d98: mov edx, dword ptr [eax + 0x400] */ r_edx = R32((u32)(r_eax+0x400u));
    /* 00543d9e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00543da0: je 0x543dbc */ if (fZ) goto L_00543dbc;
L_00543da2:; BB(0x00543da2);
    /* 00543da2: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00543da6: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00543dab: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00543daf: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00543db2: mov dword ptr [edx + 0x400], 0 */ W32((u32)(r_edx+0x400u), 0x0u);
L_00543dbc:; BB(0x00543dbc);
    /* 00543dbc: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00543dbf: mov edx, dword ptr [eax + 0x404] */ r_edx = R32((u32)(r_eax+0x404u));
    /* 00543dc5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00543dc7: je 0x543de3 */ if (fZ) goto L_00543de3;
L_00543dc9:; BB(0x00543dc9);
    /* 00543dc9: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00543dcd: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00543dd2: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00543dd6: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00543dd9: mov dword ptr [edx + 0x404], 0 */ W32((u32)(r_edx+0x404u), 0x0u);
L_00543de3:; BB(0x00543de3);
    /* 00543de3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00543de6: mov edx, dword ptr [eax + 0x408] */ r_edx = R32((u32)(r_eax+0x408u));
    /* 00543dec: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00543dee: je 0x543e0a */ if (fZ) goto L_00543e0a;
L_00543df0:; BB(0x00543df0);
    /* 00543df0: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00543df4: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00543df9: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00543dfd: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00543e00: mov dword ptr [edx + 0x408], 0 */ W32((u32)(r_edx+0x408u), 0x0u);
L_00543e0a:; BB(0x00543e0a);
    /* 00543e0a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00543e0d: mov edx, dword ptr [eax + 0x40c] */ r_edx = R32((u32)(r_eax+0x40cu));
    /* 00543e13: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00543e15: je 0x543e35 */ if (fZ) goto L_00543e35;
L_00543e1b:; BB(0x00543e1b);
    /* 00543e1b: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00543e1f: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00543e24: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00543e28: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00543e2b: mov dword ptr [edx + 0x40c], 0 */ W32((u32)(r_edx+0x40cu), 0x0u);
L_00543e35:; BB(0x00543e35);
    /* 00543e35: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 00543e3c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00543e3f: lea ecx, [eax + 0x410] */ r_ecx = (u32)(r_eax+0x410u);
    /* 00543e45: call 0x5122a8 */ r_esp -= 4; W32(r_esp, 0x543e4au); f_005122a8();
    /* 00543e4a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00543e51: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00543e54: call 0x52bf84 */ r_esp -= 4; W32(r_esp, 0x543e59u); f_0052bf84();
    /* 00543e59: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00543e5c: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00543e5e: jne 0x543e70 */ if (!fZ) goto L_00543e70;
L_00543e60:; BB(0x00543e60);
    /* 00543e60: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00543e63: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00543e6a: mov esp, ebp */ r_esp = r_ebp;
    /* 00543e6c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00543e6d: ret 4 */ FN_RET(0x00543d08); r_esp += 8; return;
L_00543e70:; BB(0x00543e70);
    /* 00543e70: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00543e73: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00543e74: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x543e79u); f_005c2f74();
    /* 00543e79: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00543e7a: jmp 0x543e60 */ goto L_00543e60;
}

void f_00543e7c(void) /* sub_543E7C */
{
    FN_ENTER(0x00543e7c);
    /* 00543e7c: mov eax, dword ptr [0xa73824] */ r_eax = R32((u32)(0xa73824u));
    /* 00543e81: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 00543e84: mov dword ptr [0xa73820], edx */ W32((u32)(0xa73820u), r_edx);
    /* 00543e8a: ret  */ FN_RET(0x00543e7c); r_esp += 4; return;
}

void f_00543e8c(void) /* sub_543E8C */
{
    FN_ENTER(0x00543e8c);
    /* 00543e8c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00543e8d: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00543e90: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00543e92: mov eax, dword ptr [0xa9c4ec] */ r_eax = R32((u32)(0xa9c4ecu));
    /* 00543e97: cmp eax, dword ptr [0xa737f8] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa737f8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00543e9d: je 0x543ec9 */ if (fZ) goto L_00543ec9;
L_00543e9f:; BB(0x00543e9f);
    /* 00543e9f: mov dword ptr [0xa737f8], eax */ W32((u32)(0xa737f8u), r_eax);
    /* 00543ea4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00543ea6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00543ea8: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00543eaa: push dword ptr [0xa737fc] */ { u32 v = R32((u32)(0xa737fcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00543eb0: call 0x81a2b0 */ r_esp -= 4; W32(r_esp, 0x543eb5u); f_0081a2b0();
    /* 00543eb5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00543eb7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00543eb8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00543eb9: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00543ebb: push dword ptr [0xa73800] */ { u32 v = R32((u32)(0xa73800u)); r_esp -= 4; W32(r_esp, v); }
    /* 00543ec1: call 0x81a2b0 */ r_esp -= 4; W32(r_esp, 0x543ec6u); f_0081a2b0();
    /* 00543ec6: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00543ec9:; BB(0x00543ec9);
    /* 00543ec9: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x543eceu); f_004f7c84();
    /* 00543ece: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00543ed1: je 0x5443b8 */ if (fZ) goto L_005443b8;
L_00543ed7:; BB(0x00543ed7);
    /* 00543ed7: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00543ed9: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00543edb: call dword ptr [eax + 0x8c] */ { u32 t = R32((u32)(r_eax+0x8cu)); r_esp -= 4; W32(r_esp, 0x543ee1u); call_ind(t); }
    /* 00543ee1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00543ee3: je 0x543ef1 */ if (fZ) goto L_00543ef1;
L_00543ee5:; BB(0x00543ee5);
    /* 00543ee5: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00543ee7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00543ee9: call dword ptr [eax + 0x104] */ { u32 t = R32((u32)(r_eax+0x104u)); r_esp -= 4; W32(r_esp, 0x543eefu); call_ind(t); }
    /* 00543eef: jmp 0x543f1f */ goto L_00543f1f;
L_00543ef1:; BB(0x00543ef1);
    /* 00543ef1: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00543ef3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00543ef5: call dword ptr [eax + 0x88] */ { u32 t = R32((u32)(r_eax+0x88u)); r_esp -= 4; W32(r_esp, 0x543efbu); call_ind(t); }
    /* 00543efb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00543efd: je 0x543f0b */ if (fZ) goto L_00543f0b;
L_00543eff:; BB(0x00543eff);
    /* 00543eff: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00543f01: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00543f03: call dword ptr [eax + 0x100] */ { u32 t = R32((u32)(r_eax+0x100u)); r_esp -= 4; W32(r_esp, 0x543f09u); call_ind(t); }
    /* 00543f09: jmp 0x543f1f */ goto L_00543f1f;
L_00543f0b:; BB(0x00543f0b);
    /* 00543f0b: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 00543f0e: test eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00543f13: je 0x543f1f */ if (fZ) goto L_00543f1f;
L_00543f15:; BB(0x00543f15);
    /* 00543f15: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00543f17: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00543f19: call dword ptr [eax + 0xfc] */ { u32 t = R32((u32)(r_eax+0xfcu)); r_esp -= 4; W32(r_esp, 0x543f1fu); call_ind(t); }
L_00543f1f:; BB(0x00543f1f);
    /* 00543f1f: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00543f21: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00543f23: call dword ptr [eax + 0xac] */ { u32 t = R32((u32)(r_eax+0xacu)); r_esp -= 4; W32(r_esp, 0x543f29u); call_ind(t); }
    /* 00543f29: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00543f2b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00543f2d: call dword ptr [eax + 0xb0] */ { u32 t = R32((u32)(r_eax+0xb0u)); r_esp -= 4; W32(r_esp, 0x543f33u); call_ind(t); }
    /* 00543f33: mov eax, dword ptr [ebx + 0x390] */ r_eax = R32((u32)(r_ebx+0x390u));
    /* 00543f39: test eax, 0x400000 */ {  u32 a = r_eax; u32 b = 0x400000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00543f3e: jne 0x544385 */ if (!fZ) goto L_00544385;
L_00543f44:; BB(0x00543f44);
    /* 00543f44: mov eax, dword ptr [ebx + 0xa4] */ r_eax = R32((u32)(r_ebx+0xa4u));
    /* 00543f4a: mov dword ptr [eax + 0x28], 0 */ W32((u32)(r_eax+0x28u), 0x0u);
L_00543f51:; BB(0x00543f51);
    /* 00543f51: mov eax, dword ptr [ebx + 0x390] */ r_eax = R32((u32)(r_ebx+0x390u));
    /* 00543f57: test eax, 0x800000 */ {  u32 a = r_eax; u32 b = 0x800000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00543f5c: jne 0x544333 */ if (!fZ) goto L_00544333;
L_00543f62:; BB(0x00543f62);
    /* 00543f62: mov edx, dword ptr [ebx + 0x40c] */ r_edx = R32((u32)(r_ebx+0x40cu));
    /* 00543f68: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00543f6a: je 0x543f89 */ if (fZ) goto L_00543f89;
L_00543f6c:; BB(0x00543f6c);
    /* 00543f6c: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00543f70: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00543f75: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00543f79: mov eax, dword ptr [ebx + 0x390] */ r_eax = R32((u32)(r_ebx+0x390u));
    /* 00543f7f: mov dword ptr [ebx + 0x40c], 0 */ W32((u32)(r_ebx+0x40cu), 0x0u);
L_00543f89:; BB(0x00543f89);
    /* 00543f89: test eax, 0x200000 */ {  u32 a = r_eax; u32 b = 0x200000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00543f8e: jne 0x5442c7 */ if (!fZ) goto L_005442c7;
L_00543f94:; BB(0x00543f94);
    /* 00543f94: mov edx, dword ptr [ebx + 0x408] */ r_edx = R32((u32)(r_ebx+0x408u));
    /* 00543f9a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00543f9c: je 0x543fb5 */ if (fZ) goto L_00543fb5;
L_00543f9e:; BB(0x00543f9e);
    /* 00543f9e: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00543fa2: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00543fa7: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00543fab: mov dword ptr [ebx + 0x408], 0 */ W32((u32)(r_ebx+0x408u), 0x0u);
L_00543fb5:; BB(0x00543fb5);
    /* 00543fb5: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00543fb7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00543fb9: call dword ptr [eax + 0x98] */ { u32 t = R32((u32)(r_eax+0x98u)); r_esp -= 4; W32(r_esp, 0x543fbfu); call_ind(t); }
    /* 00543fbf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00543fc1: jne 0x5441b1 */ if (!fZ) goto L_005441b1;
L_00543fc7:; BB(0x00543fc7);
    /* 00543fc7: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00543fc9: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00543fcb: call dword ptr [eax + 0xa8] */ { u32 t = R32((u32)(r_eax+0xa8u)); r_esp -= 4; W32(r_esp, 0x543fd1u); call_ind(t); }
    /* 00543fd1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00543fd3: jne 0x5441b1 */ if (!fZ) goto L_005441b1;
L_00543fd9:; BB(0x00543fd9);
    /* 00543fd9: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00543fdb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00543fdd: call dword ptr [eax + 0xa4] */ { u32 t = R32((u32)(r_eax+0xa4u)); r_esp -= 4; W32(r_esp, 0x543fe3u); call_ind(t); }
    /* 00543fe3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00543fe5: jne 0x5441b1 */ if (!fZ) goto L_005441b1;
L_00543feb:; BB(0x00543feb);
    /* 00543feb: movsx eax, word ptr [ebx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32eu));
    /* 00543ff2: mov edx, dword ptr [ebx + 0x37c] */ r_edx = R32((u32)(r_ebx+0x37cu));
    /* 00543ff8: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00543ffa: je 0x54402f */ if (fZ) goto L_0054402f;
L_00543ffc:; BB(0x00543ffc);
    /* 00543ffc: mov eax, dword ptr [ebx + 0x384] */ r_eax = R32((u32)(r_ebx+0x384u));
    /* 00544002: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00544005: je 0x54401e */ if (fZ) goto L_0054401e;
L_00544007:; BB(0x00544007);
    /* 00544007: mov dword ptr [ebx + 0x384], 0xffffffff */ W32((u32)(r_ebx+0x384u), 0xffffffffu);
    /* 00544011: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00544013: call 0x5443c4 */ r_esp -= 4; W32(r_esp, 0x544018u); f_005443c4();
    /* 00544018: mov edx, dword ptr [ebx + 0x37c] */ r_edx = R32((u32)(r_ebx+0x37cu));
L_0054401e:; BB(0x0054401e);
    /* 0054401e: mov dword ptr [ebx + 0x384], 0 */ W32((u32)(r_ebx+0x384u), 0x0u);
    /* 00544028: mov word ptr [ebx + 0x32e], dx */ W16((u32)(r_ebx+0x32eu), (u16)r_edx);
L_0054402f:; BB(0x0054402f);
    /* 0054402f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00544031: call 0x5443c4 */ r_esp -= 4; W32(r_esp, 0x544036u); f_005443c4();
    /* 00544036: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00544038: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x54403du); f_0078730c();
    /* 0054403d: fld dword ptr [ebx + 0x394] */ FPUSH(R_F32((u32)(r_ebx+0x394u)));
    /* 00544043: fld dword ptr [ebx + 0x304] */ FPUSH(R_F32((u32)(r_ebx+0x304u)));
    /* 00544049: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0054404b: mov eax, dword ptr [ebx + 0x3bc] */ r_eax = R32((u32)(r_ebx+0x3bcu));
    /* 00544051: mov edx, dword ptr [ebx + 0x3c0] */ r_edx = R32((u32)(r_ebx+0x3c0u));
    /* 00544057: fstp dword ptr [ebx + 0x304] */ W_F32((u32)(r_ebx+0x304u), ST(0)); FPOP();
    /* 0054405d: mov dword ptr [ebx + 0x74], eax */ W32((u32)(r_ebx+0x74u), r_eax);
    /* 00544060: mov eax, dword ptr [ebx + 0x3c4] */ r_eax = R32((u32)(r_ebx+0x3c4u));
    /* 00544066: mov dword ptr [ebx + 0x78], edx */ W32((u32)(r_ebx+0x78u), r_edx);
    /* 00544069: mov dword ptr [ebx + 0x7c], eax */ W32((u32)(r_ebx+0x7cu), r_eax);
    /* 0054406c: mov eax, dword ptr [ebx + 0x390] */ r_eax = R32((u32)(r_ebx+0x390u));
    /* 00544072: test eax, 0x80000 */ {  u32 a = r_eax; u32 b = 0x80000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00544077: je 0x5440a4 */ if (fZ) goto L_005440a4;
L_00544079:; BB(0x00544079);
    /* 00544079: fld dword ptr [0x923a54] */ FPUSH(R_F32((u32)(0x923a54u)));
    /* 0054407f: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00544081: fcom dword ptr [0x923a50] */ fx_compare(ST(0), R_F32((u32)(0x923a50u))); 
    /* 00544087: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00544089: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0054408a: jb 0x544094 */ if (fC) goto L_00544094;
L_0054408c:; BB(0x0054408c);
    /* 0054408c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0054408e: fld dword ptr [0x923a7c] */ FPUSH(R_F32((u32)(0x923a7cu)));
L_00544094:; BB(0x00544094);
    /* 00544094: fld dword ptr [0x923a80] */ FPUSH(R_F32((u32)(0x923a80u)));
    /* 0054409a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0054409c: fstp dword ptr [ebx + 0x394] */ W_F32((u32)(r_ebx+0x394u), ST(0)); FPOP();
    /* 005440a2: jmp 0x5440cb */ goto L_005440cb;
L_005440a4:; BB(0x005440a4);
    /* 005440a4: fld dword ptr [0x923a80] */ FPUSH(R_F32((u32)(0x923a80u)));
    /* 005440aa: fld dword ptr [0x923a54] */ FPUSH(R_F32((u32)(0x923a54u)));
    /* 005440b0: fsubp st(2) */ ST(2) = ST(2) - ST(0); FPOP();
    /* 005440b2: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 005440b4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005440b6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005440b7: jae 0x5440bd */ if (!fC) goto L_005440bd;
L_005440b9:; BB(0x005440b9);
    /* 005440b9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005440bb: jmp 0x5440c5 */ goto L_005440c5;
L_005440bd:; BB(0x005440bd);
    /* 005440bd: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 005440bf: fld dword ptr [0x923a80] */ FPUSH(R_F32((u32)(0x923a80u)));
L_005440c5:; BB(0x005440c5);
    /* 005440c5: fstp dword ptr [ebx + 0x394] */ W_F32((u32)(r_ebx+0x394u), ST(0)); FPOP();
L_005440cb:; BB(0x005440cb);
    /* 005440cb: fld dword ptr [0x923a78] */ FPUSH(R_F32((u32)(0x923a78u)));
    /* 005440d1: fadd dword ptr [ebx + 0x39c] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x39cu));
    /* 005440d7: fld dword ptr [ebx + 0x398] */ FPUSH(R_F32((u32)(r_ebx+0x398u)));
    /* 005440dd: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005440df: fst dword ptr [ebx + 0x39c] */ W_F32((u32)(r_ebx+0x39cu), ST(0));
    /* 005440e5: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 005440e7: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 005440e9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005440eb: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005440ec: jae 0x5440f2 */ if (!fC) goto L_005440f2;
L_005440ee:; BB(0x005440ee);
    /* 005440ee: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005440f0: jmp 0x544107 */ goto L_00544107;
L_005440f2:; BB(0x005440f2);
    /* 005440f2: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 005440f4: fld dword ptr [0x923a74] */ FPUSH(R_F32((u32)(0x923a74u)));
    /* 005440fa: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 005440fc: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005440fe: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005440ff: jbe 0x544105 */ if ((fC||fZ)) goto L_00544105;
L_00544101:; BB(0x00544101);
    /* 00544101: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00544103: jmp 0x544107 */ goto L_00544107;
L_00544105:; BB(0x00544105);
    /* 00544105: fstp st(1) */ ST(1) = ST(0); FPOP();
L_00544107:; BB(0x00544107);
    /* 00544107: fstp dword ptr [ebx + 0x398] */ W_F32((u32)(r_ebx+0x398u), ST(0)); FPOP();
    /* 0054410d: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 00544112: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x544117u); f_0082d990();
    /* 00544117: lea ecx, [ebx + 0x38] */ r_ecx = (u32)(r_ebx+0x38u);
    /* 0054411a: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x54411fu); f_0082d838();
    /* 0054411f: mov edx, dword ptr [ebx + 0x64] */ r_edx = R32((u32)(r_ebx+0x64u));
    /* 00544122: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00544124: call 0x830c04 */ r_esp -= 4; W32(r_esp, 0x544129u); f_00830c04();
    /* 00544129: mov edx, dword ptr [ebx + 0x60] */ r_edx = R32((u32)(r_ebx+0x60u));
    /* 0054412c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0054412e: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x544133u); f_0082d8bc();
    /* 00544133: fld dword ptr [0x923a70] */ FPUSH(R_F32((u32)(0x923a70u)));
    /* 00544139: fadd dword ptr [ebx + 0x398] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x398u));
    /* 0054413f: fadd dword ptr [ebx + 0x394] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x394u));
    /* 00544145: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00544149: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 00544150: lea eax, [ebx + 0x3bc] */ r_eax = (u32)(r_ebx+0x3bcu);
    /* 00544156: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00544158: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 00544160: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00544161: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 00544165: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x54416au); f_00830aa0();
    /* 0054416a: movsx eax, word ptr [ebx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32eu));
    /* 00544171: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00544174: je 0x544228 */ if (fZ) goto L_00544228;
L_0054417a:; BB(0x0054417a);
    /* 0054417a: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x54417fu); f_0082da80();
    /* 0054417f: fld dword ptr [0x923a64] */ FPUSH(R_F32((u32)(0x923a64u)));
    /* 00544185: fadd dword ptr [ebx + 0x394] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x394u));
    /* 0054418b: mov edx, dword ptr [0xa9c4ec] */ r_edx = R32((u32)(0xa9c4ecu));
    /* 00544191: mov eax, dword ptr [ebx + 0xa4] */ r_eax = R32((u32)(r_ebx+0xa4u));
    /* 00544197: fstp dword ptr [eax + 4] */ W_F32((u32)(r_eax+0x4u), ST(0)); FPOP();
    /* 0054419a: test dl, 3 */ {  u32 a = (u8)r_edx; u32 b = 0x3u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0054419d: jne 0x5441ac */ if (!fZ) goto L_005441ac;
L_0054419f:; BB(0x0054419f);
    /* 0054419f: mov eax, dword ptr [ebx + 0x390] */ r_eax = R32((u32)(r_ebx+0x390u));
    /* 005441a5: test eax, 0x400000 */ {  u32 a = r_eax; u32 b = 0x400000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005441aa: jne 0x5441d0 */ if (!fZ) goto L_005441d0;
L_005441ac:; BB(0x005441ac);
    /* 005441ac: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005441af: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005441b0: ret  */ FN_RET(0x00543e8c); r_esp += 4; return;
L_005441b1:; BB(0x005441b1);
    /* 005441b1: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005441b3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005441b4: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x5441b9u); f_006946a8();
    /* 005441b9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005441bb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005441bd: add ebx, 0x38 */ {  u32 a = r_ebx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005441c0: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 005441c5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005441c6: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x5441cbu); f_00805608();
    /* 005441cb: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005441ce: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005441cf: ret  */ FN_RET(0x00543e8c); r_esp += 4; return;
L_005441d0:; BB(0x005441d0);
    /* 005441d0: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 005441d3: test al, 0x22 */ {  u32 a = (u8)r_eax; u32 b = 0x22u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005441d5: jne 0x5441ac */ if (!fZ) goto L_005441ac;
L_005441d7:; BB(0x005441d7);
    /* 005441d7: push 0x41700000 */ { u32 v = 0x41700000u; r_esp -= 4; W32(r_esp, v); }
    /* 005441dc: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005441de: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 005441e0: push 0x43c80000 */ { u32 v = 0x43c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 005441e5: push 0x43160000 */ { u32 v = 0x43160000u; r_esp -= 4; W32(r_esp, v); }
    /* 005441ea: call dword ptr [eax + 0x20] */ { u32 t = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, 0x5441edu); call_ind(t); }
    /* 005441ed: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005441ef: je 0x5441ac */ if (fZ) goto L_005441ac;
L_005441f1:; BB(0x005441f1);
    /* 005441f1: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 005441f5: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 005441f8: mov edx, dword ptr [ebx + 0x3c] */ r_edx = R32((u32)(r_ebx+0x3cu));
    /* 005441fb: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 005441ff: mov eax, dword ptr [ebx + 0x40] */ r_eax = R32((u32)(r_ebx+0x40u));
    /* 00544202: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 00544206: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 0054420a: fadd dword ptr [ebx + 0x394] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x394u));
    /* 00544210: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00544214: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00544218: push 0xd6 */ { u32 v = 0xd6u; r_esp -= 4; W32(r_esp, v); }
    /* 0054421d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054421e: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x544223u); f_0050b510();
    /* 00544223: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00544226: jmp 0x5441ac */ goto L_005441ac;
L_00544228:; BB(0x00544228);
    /* 00544228: movzx eax, byte ptr [0xa737c4] */ r_eax = (u32)R8((u32)(0xa737c4u));
    /* 0054422f: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00544231: jne 0x54428d */ if (!fZ) goto L_0054428d;
L_00544233:; BB(0x00544233);
    /* 00544233: mov dword ptr [0xa737cc], 0x41200000 */ W32((u32)(0xa737ccu), 0x41200000u);
    /* 0054423d: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00544242: mov byte ptr [0xa737c4], al */ W8((u32)(0xa737c4u), (u8)r_eax);
    /* 00544247: mov dword ptr [0xa737d0], 0x40000000 */ W32((u32)(0xa737d0u), 0x40000000u);
    /* 00544251: mov dword ptr [0xa737d8], 0x41200000 */ W32((u32)(0xa737d8u), 0x41200000u);
    /* 0054425b: mov dword ptr [0xa737dc], 0xc0000000 */ W32((u32)(0xa737dcu), 0xc0000000u);
    /* 00544265: mov dword ptr [0xa737e0], 0x40000000 */ W32((u32)(0xa737e0u), 0x40000000u);
    /* 0054426f: mov dword ptr [0xa737e4], 0x41200000 */ W32((u32)(0xa737e4u), 0x41200000u);
    /* 00544279: mov dword ptr [0xa737ec], 0xc0000000 */ W32((u32)(0xa737ecu), 0xc0000000u);
    /* 00544283: mov dword ptr [0xa737f0], 0x41200000 */ W32((u32)(0xa737f0u), 0x41200000u);
L_0054428d:; BB(0x0054428d);
    /* 0054428d: mov dword ptr [esp + 0x18], edi */ W32((u32)(r_esp+0x18u), r_edi);
    /* 00544291: mov dword ptr [esp + 0x1c], ebp */ W32((u32)(r_esp+0x1cu), r_ebp);
    /* 00544295: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00544297: lea eax, [ebx + 0x3c8] */ r_eax = (u32)(r_ebx+0x3c8u);
    /* 0054429d: mov ebp, eax */ r_ebp = r_eax;
    /* 0054429f: mov edi, edx */ r_edi = r_edx;
L_005442a1:; BB(0x005442a1);
    /* 005442a1: lea edx, [edi + 0xa737c8] */ r_edx = (u32)(r_edi+0xa737c8u);
    /* 005442a7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005442a8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005442aa: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x5442afu); f_00830aa0();
    /* 005442af: add edi, 0xc */ {  u32 a = r_edi; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005442b2: add ebp, 0xc */ {  u32 a = r_ebp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005442b5: cmp edi, 0x30 */ {  u32 a = r_edi; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005442b8: jl 0x5442a1 */ if ((fS!=fO)) goto L_005442a1;
L_005442ba:; BB(0x005442ba);
    /* 005442ba: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
    /* 005442be: mov ebp, dword ptr [esp + 0x1c] */ r_ebp = R32((u32)(r_esp+0x1cu));
    /* 005442c2: jmp 0x54417a */ goto L_0054417a;
L_005442c7:; BB(0x005442c7);
    /* 005442c7: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
    /* 005442ca: test dl, 0x22 */ {  u32 a = (u8)r_edx; u32 b = 0x22u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005442cd: jne 0x543f94 */ if (!fZ) goto L_00543f94;
L_005442d3:; BB(0x005442d3);
    /* 005442d3: mov ecx, dword ptr [ebx + 0x408] */ r_ecx = R32((u32)(r_ebx+0x408u));
    /* 005442d9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005442db: je 0x5442ee */ if (fZ) goto L_005442ee;
L_005442dd:; BB(0x005442dd);
    /* 005442dd: lea eax, [ebx + 0x3bc] */ r_eax = (u32)(r_ebx+0x3bcu);
    /* 005442e3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005442e4: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x5442e9u); f_00508db8();
    /* 005442e9: jmp 0x543fb5 */ goto L_00543fb5;
L_005442ee:; BB(0x005442ee);
    /* 005442ee: test eax, 0x4000000 */ {  u32 a = r_eax; u32 b = 0x4000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005442f3: je 0x544314 */ if (fZ) goto L_00544314;
L_005442f5:; BB(0x005442f5);
    /* 005442f5: push 0xd9 */ { u32 v = 0xd9u; r_esp -= 4; W32(r_esp, v); }
    /* 005442fa: lea eax, [ebx + 0x3bc] */ r_eax = (u32)(r_ebx+0x3bcu);
    /* 00544300: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00544301: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x544306u); f_00509590();
    /* 00544306: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00544309: mov dword ptr [ebx + 0x408], eax */ W32((u32)(r_ebx+0x408u), r_eax);
    /* 0054430f: jmp 0x543fb5 */ goto L_00543fb5;
L_00544314:; BB(0x00544314);
    /* 00544314: push 0xd4 */ { u32 v = 0xd4u; r_esp -= 4; W32(r_esp, v); }
    /* 00544319: lea eax, [ebx + 0x3bc] */ r_eax = (u32)(r_ebx+0x3bcu);
    /* 0054431f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00544320: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x544325u); f_00509590();
    /* 00544325: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00544328: mov dword ptr [ebx + 0x408], eax */ W32((u32)(r_ebx+0x408u), r_eax);
    /* 0054432e: jmp 0x543fb5 */ goto L_00543fb5;
L_00544333:; BB(0x00544333);
    /* 00544333: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
    /* 00544336: test dl, 0x22 */ {  u32 a = (u8)r_edx; u32 b = 0x22u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00544339: jne 0x543f62 */ if (!fZ) goto L_00543f62;
L_0054433f:; BB(0x0054433f);
    /* 0054433f: mov ecx, dword ptr [ebx + 0x40c] */ r_ecx = R32((u32)(r_ebx+0x40cu));
    /* 00544345: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00544347: je 0x544360 */ if (fZ) goto L_00544360;
L_00544349:; BB(0x00544349);
    /* 00544349: lea eax, [ebx + 0x300] */ r_eax = (u32)(r_ebx+0x300u);
    /* 0054434f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00544350: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x544355u); f_00508db8();
    /* 00544355: mov eax, dword ptr [ebx + 0x390] */ r_eax = R32((u32)(r_ebx+0x390u));
    /* 0054435b: jmp 0x543f89 */ goto L_00543f89;
L_00544360:; BB(0x00544360);
    /* 00544360: push 0xdb */ { u32 v = 0xdbu; r_esp -= 4; W32(r_esp, v); }
    /* 00544365: lea eax, [ebx + 0x300] */ r_eax = (u32)(r_ebx+0x300u);
    /* 0054436b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054436c: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x544371u); f_00509590();
    /* 00544371: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00544374: mov dword ptr [ebx + 0x40c], eax */ W32((u32)(r_ebx+0x40cu), r_eax);
    /* 0054437a: mov eax, dword ptr [ebx + 0x390] */ r_eax = R32((u32)(r_ebx+0x390u));
    /* 00544380: jmp 0x543f89 */ goto L_00543f89;
L_00544385:; BB(0x00544385);
    /* 00544385: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 00544388: test al, 0x22 */ {  u32 a = (u8)r_eax; u32 b = 0x22u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0054438a: jne 0x543f44 */ if (!fZ) goto L_00543f44;
L_00544390:; BB(0x00544390);
    /* 00544390: mov edx, dword ptr [0xa73824] */ r_edx = R32((u32)(0xa73824u));
    /* 00544396: mov eax, dword ptr [ebx + 0x42c] */ r_eax = R32((u32)(r_ebx+0x42cu));
    /* 0054439c: add eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005443a1: mov dword ptr [ebx + 0x42c], eax */ W32((u32)(r_ebx+0x42cu), r_eax);
    /* 005443a7: fild dword ptr [edx + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_edx+0x20u)));
    /* 005443aa: mov eax, dword ptr [ebx + 0xa4] */ r_eax = R32((u32)(r_ebx+0xa4u));
    /* 005443b0: fstp dword ptr [eax + 0x28] */ W_F32((u32)(r_eax+0x28u), ST(0)); FPOP();
    /* 005443b3: jmp 0x543f51 */ goto L_00543f51;
L_005443b8:; BB(0x005443b8);
    /* 005443b8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005443ba: call 0x543e7c */ r_esp -= 4; W32(r_esp, 0x5443bfu); f_00543e7c();
    /* 005443bf: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005443c2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005443c3: ret  */ FN_RET(0x00543e8c); r_esp += 4; return;
}

