#include "protos.h"

void f_0058d09c(void) /* sub_58D09C */
{
    FN_ENTER(0x0058d09c);
    /* 0058d09c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0058d09d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0058d09e: mov esi, ecx */ r_esi = r_ecx;
    /* 0058d0a0: mov eax, dword ptr [esi + 0x3cc] */ r_eax = R32((u32)(r_esi+0x3ccu));
    /* 0058d0a6: test eax, 0x10000 */ {  u32 a = r_eax; u32 b = 0x10000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058d0ab: jne 0x58d114 */ if (!fZ) goto L_0058d114;
L_0058d0ad:; BB(0x0058d0ad);
    /* 0058d0ad: fld dword ptr [esi + 0x3b4] */ FPUSH(R_F32((u32)(r_esi+0x3b4u)));
    /* 0058d0b3: fcom dword ptr [0x928d40] */ fx_compare(ST(0), R_F32((u32)(0x928d40u))); 
    /* 0058d0b9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0058d0bb: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0058d0bc: jbe 0x58d119 */ if ((fC||fZ)) goto L_0058d119;
L_0058d0be:; BB(0x0058d0be);
    /* 0058d0be: fcomp dword ptr [0x928d3c] */ fx_compare(ST(0), R_F32((u32)(0x928d3cu))); FPOP();
    /* 0058d0c4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0058d0c6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0058d0c7: jae 0x58d114 */ if (!fC) goto L_0058d114;
L_0058d0c9:; BB(0x0058d0c9);
    /* 0058d0c9: mov ecx, dword ptr [esi + 0x398] */ r_ecx = R32((u32)(r_esi+0x398u));
    /* 0058d0cf: call 0x7ba980 */ r_esp -= 4; W32(r_esp, 0x58d0d4u); f_007ba980();
    /* 0058d0d4: mov ebp, eax */ r_ebp = r_eax;
    /* 0058d0d6: mov ecx, esi */ r_ecx = r_esi;
    /* 0058d0d8: call 0x7ba980 */ r_esp -= 4; W32(r_esp, 0x58d0ddu); f_007ba980();
    /* 0058d0dd: movsx edx, bp */ r_edx = (u32)(i32)(i16)(u16)r_ebp;
    /* 0058d0e0: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0058d0e3: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058d0e5: jne 0x58d114 */ if (!fZ) goto L_0058d114;
L_0058d0e7:; BB(0x0058d0e7);
    /* 0058d0e7: mov eax, dword ptr [esi + 0x60] */ r_eax = R32((u32)(r_esi+0x60u));
    /* 0058d0ea: fld dword ptr [esi + 0x3b4] */ FPUSH(R_F32((u32)(r_esi+0x3b4u)));
    /* 0058d0f0: fsub dword ptr [0x928d38] */ ST(0) = ST(0) - R_F32((u32)(0x928d38u));
    /* 0058d0f6: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058d0f9: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0058d0fd: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0058d100: mov ecx, esi */ r_ecx = r_esi;
    /* 0058d102: call 0x58d120 */ r_esp -= 4; W32(r_esp, 0x58d107u); f_0058d120();
    /* 0058d107: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0058d109: mov eax, 0 */ r_eax = 0x0u;
    /* 0058d10e: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0058d111: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0058d112: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0058d113: ret  */ FN_RET(0x0058d09c); r_esp += 4; return;
L_0058d114:; BB(0x0058d114);
    /* 0058d114: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0058d116: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0058d117: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0058d118: ret  */ FN_RET(0x0058d09c); r_esp += 4; return;
L_0058d119:; BB(0x0058d119);
    /* 0058d119: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0058d11b: jmp 0x58d114 */ goto L_0058d114;
}

void f_0058d120(void) /* sub_58D120 */
{
    FN_ENTER(0x0058d120);
    /* 0058d120: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0058d121: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0058d122: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0058d123: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0058d124: mov edi, ecx */ r_edi = r_ecx;
    /* 0058d126: mov esi, dword ptr [edi + 0x60] */ r_esi = R32((u32)(r_edi+0x60u));
    /* 0058d129: mov ebp, dword ptr [edi + 0xa4] */ r_ebp = R32((u32)(r_edi+0xa4u));
    /* 0058d12f: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0058d133: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 0058d137: fmul dword ptr [0x928d34] */ ST(0) = ST(0) * R_F32((u32)(0x928d34u));
    /* 0058d13d: mov ebx, dword ptr [ebp + 0x18] */ r_ebx = R32((u32)(r_ebp+0x18u));
    /* 0058d140: fst dword ptr [ebp + 8] */ W_F32((u32)(r_ebp+0x8u), ST(0));
    /* 0058d143: fstp dword ptr [ebp + 0xc] */ W_F32((u32)(r_ebp+0xcu), ST(0)); FPOP();
    /* 0058d146: mov ecx, edi */ r_ecx = r_edi;
    /* 0058d148: mov dword ptr [ebp], 0 */ W32((u32)(r_ebp), 0x0u);
    /* 0058d14f: mov dword ptr [ebp + 0x10], 0x41000000 */ W32((u32)(r_ebp+0x10u), 0x41000000u);
    /* 0058d156: mov dword ptr [ebp + 0x14], 1 */ W32((u32)(r_ebp+0x14u), 0x1u);
    /* 0058d15d: mov dword ptr [ebp + 0x18], 0x9d01 */ W32((u32)(r_ebp+0x18u), 0x9d01u);
    /* 0058d164: mov dword ptr [edi + 0x60], eax */ W32((u32)(r_edi+0x60u), r_eax);
    /* 0058d167: call 0x7b798c */ r_esp -= 4; W32(r_esp, 0x58d16cu); f_007b798c();
    /* 0058d16c: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 0058d16f: test eax, 0x380000 */ {  u32 a = r_eax; u32 b = 0x380000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0058d174: je 0x58d17d */ if (fZ) goto L_0058d17d;
L_0058d176:; BB(0x0058d176);
    /* 0058d176: mov eax, 1 */ r_eax = 0x1u;
    /* 0058d17b: jmp 0x58d17f */ goto L_0058d17f;
L_0058d17d:; BB(0x0058d17d);
    /* 0058d17d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_0058d17f:; BB(0x0058d17f);
    /* 0058d17f: mov edx, dword ptr [0x9bf9bc] */ r_edx = R32((u32)(0x9bf9bcu));
    /* 0058d185: mov dword ptr [ebp], edx */ W32((u32)(r_ebp), r_edx);
    /* 0058d188: mov edx, dword ptr [0x9bf9c0] */ r_edx = R32((u32)(0x9bf9c0u));
    /* 0058d18e: mov dword ptr [ebp + 4], edx */ W32((u32)(r_ebp+0x4u), r_edx);
    /* 0058d191: mov edx, dword ptr [0x9bf9c4] */ r_edx = R32((u32)(0x9bf9c4u));
    /* 0058d197: mov dword ptr [ebp + 8], edx */ W32((u32)(r_ebp+0x8u), r_edx);
    /* 0058d19a: mov edx, dword ptr [0x9bf9c8] */ r_edx = R32((u32)(0x9bf9c8u));
    /* 0058d1a0: mov dword ptr [ebp + 0xc], edx */ W32((u32)(r_ebp+0xcu), r_edx);
    /* 0058d1a3: mov edx, dword ptr [0x9bf9cc] */ r_edx = R32((u32)(0x9bf9ccu));
    /* 0058d1a9: mov dword ptr [ebp + 0x10], edx */ W32((u32)(r_ebp+0x10u), r_edx);
    /* 0058d1ac: mov edx, dword ptr [0x9bf9d0] */ r_edx = R32((u32)(0x9bf9d0u));
    /* 0058d1b2: mov dword ptr [ebp + 0x14], edx */ W32((u32)(r_ebp+0x14u), r_edx);
    /* 0058d1b5: mov edx, dword ptr [0x9bf9d4] */ r_edx = R32((u32)(0x9bf9d4u));
    /* 0058d1bb: mov dword ptr [ebp + 0x18], edx */ W32((u32)(r_ebp+0x18u), r_edx);
    /* 0058d1be: mov edx, dword ptr [0x9bf9d8] */ r_edx = R32((u32)(0x9bf9d8u));
    /* 0058d1c4: mov dword ptr [ebp + 0x1c], edx */ W32((u32)(r_ebp+0x1cu), r_edx);
    /* 0058d1c7: mov edx, dword ptr [0x9bf9dc] */ r_edx = R32((u32)(0x9bf9dcu));
    /* 0058d1cd: mov dword ptr [ebp + 0x20], edx */ W32((u32)(r_ebp+0x20u), r_edx);
    /* 0058d1d0: mov edx, dword ptr [0x9bf9e0] */ r_edx = R32((u32)(0x9bf9e0u));
    /* 0058d1d6: mov dword ptr [ebp + 0x24], edx */ W32((u32)(r_ebp+0x24u), r_edx);
    /* 0058d1d9: mov edx, dword ptr [0x9bf9e4] */ r_edx = R32((u32)(0x9bf9e4u));
    /* 0058d1df: mov dword ptr [ebp + 0x28], edx */ W32((u32)(r_ebp+0x28u), r_edx);
    /* 0058d1e2: mov dword ptr [ebp + 0x18], ebx */ W32((u32)(r_ebp+0x18u), r_ebx);
    /* 0058d1e5: mov dword ptr [edi + 0x60], esi */ W32((u32)(r_edi+0x60u), r_esi);
    /* 0058d1e8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0058d1e9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0058d1ea: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0058d1eb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0058d1ec: ret 8 */ FN_RET(0x0058d120); r_esp += 12; return;
}

void f_0058d1f0(void) /* sub_58D1F0 */
{
    FN_ENTER(0x0058d1f0);
    /* 0058d1f0: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0058d1f3: mov eax, dword ptr [ecx + 0x3cc] */ r_eax = R32((u32)(r_ecx+0x3ccu));
    /* 0058d1f9: test eax, 0x80000 */ {  u32 a = r_eax; u32 b = 0x80000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058d1fe: jne 0x58d222 */ if (!fZ) goto L_0058d222;
L_0058d200:; BB(0x0058d200);
    /* 0058d200: mov dword ptr [esp], 0x40200000 */ W32((u32)(r_esp), 0x40200000u);
    /* 0058d207: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0058d20a: mov dword ptr [esp + 4], 0x3f800000 */ W32((u32)(r_esp+0x4u), 0x3f800000u);
    /* 0058d212: mov dword ptr [esp + 8], 0x3fc00000 */ W32((u32)(r_esp+0x8u), 0x3fc00000u);
    /* 0058d21a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0058d21c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058d21d: call 0x520cf8 */ r_esp -= 4; W32(r_esp, 0x58d222u); f_00520cf8();
L_0058d222:; BB(0x0058d222);
    /* 0058d222: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0058d225: ret  */ FN_RET(0x0058d1f0); r_esp += 4; return;
}

void f_0058d228(void) /* sub_58D228 */
{
    FN_ENTER(0x0058d228);
    /* 0058d228: mov eax, ecx */ r_eax = r_ecx;
    /* 0058d22a: movsx edx, word ptr [eax + 0x32e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x32eu));
    /* 0058d231: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058d234: je 0x58d249 */ if (fZ) goto L_0058d249;
L_0058d236:; BB(0x0058d236);
    /* 0058d236: cmp edx, 9 */ {  u32 a = r_edx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058d239: je 0x58d249 */ if (fZ) goto L_0058d249;
L_0058d23b:; BB(0x0058d23b);
    /* 0058d23b: mov edx, dword ptr [eax + 0x3cc] */ r_edx = R32((u32)(r_eax+0x3ccu));
    /* 0058d241: test edx, 0x80000 */ {  u32 a = r_edx; u32 b = 0x80000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0058d247: je 0x58d258 */ if (fZ) goto L_0058d258;
L_0058d249:; BB(0x0058d249);
    /* 0058d249: lea ecx, [eax + 0x3f0] */ r_ecx = (u32)(r_eax+0x3f0u);
    /* 0058d24f: mov eax, dword ptr [eax + 0x3f0] */ r_eax = R32((u32)(r_eax+0x3f0u));
    /* 0058d255: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x58d258u); call_ind(t); }
L_0058d258:; BB(0x0058d258);
    /* 0058d258: ret  */ FN_RET(0x0058d228); r_esp += 4; return;
}

void f_0058d268(void)
{
    FN_ENTER(0x0058d268);
    /* 0058d268: mov ecx, dword ptr [0xa7447c] */ r_ecx = R32((u32)(0xa7447cu));
    /* 0058d26e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058d270: je 0x58d285 */ if (fZ) goto L_0058d285;
L_0058d272:; BB(0x0058d272);
    /* 0058d272: je 0x58d27b */ if (fZ) goto L_0058d27b;
L_0058d274:; BB(0x0058d274);
    /* 0058d274: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0058d276: call 0x45a950 */ r_esp -= 4; W32(r_esp, 0x58d27bu); f_0045a950();
L_0058d27b:; BB(0x0058d27b);
    /* 0058d27b: mov dword ptr [0xa7447c], 0 */ W32((u32)(0xa7447cu), 0x0u);
L_0058d285:; BB(0x0058d285);
    /* 0058d285: mov ecx, dword ptr [0xa74480] */ r_ecx = R32((u32)(0xa74480u));
    /* 0058d28b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058d28d: je 0x58d2a2 */ if (fZ) goto L_0058d2a2;
L_0058d28f:; BB(0x0058d28f);
    /* 0058d28f: je 0x58d298 */ if (fZ) goto L_0058d298;
L_0058d291:; BB(0x0058d291);
    /* 0058d291: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0058d293: call 0x45a950 */ r_esp -= 4; W32(r_esp, 0x58d298u); f_0045a950();
L_0058d298:; BB(0x0058d298);
    /* 0058d298: mov dword ptr [0xa74480], 0 */ W32((u32)(0xa74480u), 0x0u);
L_0058d2a2:; BB(0x0058d2a2);
    /* 0058d2a2: mov ecx, dword ptr [0xa74478] */ r_ecx = R32((u32)(0xa74478u));
    /* 0058d2a8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058d2aa: je 0x58d2bf */ if (fZ) goto L_0058d2bf;
L_0058d2ac:; BB(0x0058d2ac);
    /* 0058d2ac: je 0x58d2b5 */ if (fZ) goto L_0058d2b5;
L_0058d2ae:; BB(0x0058d2ae);
    /* 0058d2ae: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0058d2b0: call 0x45a950 */ r_esp -= 4; W32(r_esp, 0x58d2b5u); f_0045a950();
L_0058d2b5:; BB(0x0058d2b5);
    /* 0058d2b5: mov dword ptr [0xa74478], 0 */ W32((u32)(0xa74478u), 0x0u);
L_0058d2bf:; BB(0x0058d2bf);
    /* 0058d2bf: mov ecx, dword ptr [0xa74484] */ r_ecx = R32((u32)(0xa74484u));
    /* 0058d2c5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058d2c7: je 0x58d2db */ if (fZ) goto L_0058d2db;
L_0058d2c9:; BB(0x0058d2c9);
    /* 0058d2c9: je 0x58d2d1 */ if (fZ) goto L_0058d2d1;
L_0058d2cb:; BB(0x0058d2cb);
    /* 0058d2cb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0058d2cd: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0058d2cf: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x58d2d1u); call_ind(t); }
L_0058d2d1:; BB(0x0058d2d1);
    /* 0058d2d1: mov dword ptr [0xa74484], 0 */ W32((u32)(0xa74484u), 0x0u);
L_0058d2db:; BB(0x0058d2db);
    /* 0058d2db: mov eax, dword ptr [0xa7444c] */ r_eax = R32((u32)(0xa7444cu));
    /* 0058d2e0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058d2e2: je 0x58d2f5 */ if (fZ) goto L_0058d2f5;
L_0058d2e4:; BB(0x0058d2e4);
    /* 0058d2e4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058d2e5: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x58d2eau); f_00857e98();
    /* 0058d2ea: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0058d2eb: mov dword ptr [0xa7444c], 0 */ W32((u32)(0xa7444cu), 0x0u);
L_0058d2f5:; BB(0x0058d2f5);
    /* 0058d2f5: mov ecx, dword ptr [0xa74454] */ r_ecx = R32((u32)(0xa74454u));
    /* 0058d2fb: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0058d2fd: je 0x58d312 */ if (fZ) goto L_0058d312;
L_0058d2ff:; BB(0x0058d2ff);
    /* 0058d2ff: je 0x58d308 */ if (fZ) goto L_0058d308;
L_0058d301:; BB(0x0058d301);
    /* 0058d301: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0058d303: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x58d308u); f_004066a8();
L_0058d308:; BB(0x0058d308);
    /* 0058d308: mov dword ptr [0xa74454], 0 */ W32((u32)(0xa74454u), 0x0u);
L_0058d312:; BB(0x0058d312);
    /* 0058d312: ret  */ FN_RET(0x0058d268); r_esp += 4; return;
}

void f_0058d314(void)
{
    FN_ENTER(0x0058d314);
    /* 0058d314: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0058d318: call 0x58d320 */ r_esp -= 4; W32(r_esp, 0x58d31du); f_0058d320();
    /* 0058d31d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0058d31e: ret  */ FN_RET(0x0058d314); r_esp += 4; return;
}

void f_0058d320(void) /* sub_58D320 */
{
    FN_ENTER(0x0058d320);
    /* 0058d320: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0058d321: mov ebp, esp */ r_ebp = r_esp;
    /* 0058d323: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0058d325: push 0x8d80ea */ { u32 v = 0x8d80eau; r_esp -= 4; W32(r_esp, v); }
    /* 0058d32a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0058d330: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058d331: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0058d338: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0058d33b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0058d33e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0058d341: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0058d344: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0058d347: push 0x43c */ { u32 v = 0x43cu; r_esp -= 4; W32(r_esp, v); }
    /* 0058d34c: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0058d353: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x58d358u); f_005caba4();
    /* 0058d358: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0058d35b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058d35e: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0058d361: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058d363: je 0x58d41f */ if (fZ) goto L_0058d41f;
L_0058d369:; BB(0x0058d369);
    /* 0058d369: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 0058d370: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0058d377: mov ecx, eax */ r_ecx = r_eax;
    /* 0058d379: mov eax, dword ptr [0xaca360] */ r_eax = R32((u32)(0xaca360u));
    /* 0058d37e: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 0058d381: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058d382: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0058d385: call 0x58d428 */ r_esp -= 4; W32(r_esp, 0x58d38au); f_0058d428();
    /* 0058d38a: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0058d391: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0058d394: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0058d397: mov dword ptr [ecx], 0xb08820 */ W32((u32)(r_ecx), 0xb08820u);
    /* 0058d39d: mov eax, dword ptr [0x9bf998] */ r_eax = R32((u32)(0x9bf998u));
    /* 0058d3a2: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0058d3a5: call 0x51f750 */ r_esp -= 4; W32(r_esp, 0x58d3aau); f_0051f750();
    /* 0058d3aa: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0058d3ad: call 0x590d74 */ r_esp -= 4; W32(r_esp, 0x58d3b2u); f_00590d74();
    /* 0058d3b2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0058d3b5: mov edx, 0xffff */ r_edx = 0xffffu;
    /* 0058d3ba: mov eax, dword ptr [ecx + 0x3cc] */ r_eax = R32((u32)(r_ecx+0x3ccu));
    /* 0058d3c0: mov esi, dword ptr [ecx] */ r_esi = R32((u32)(r_ecx));
    /* 0058d3c2: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0058d3c4: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0058d3c6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0058d3c7: mov dword ptr [ecx + 0x3dc], ebx */ W32((u32)(r_ecx+0x3dcu), r_ebx);
    /* 0058d3cd: and eax, 0xffffefff */ {  u32 a = r_eax; u32 b = 0xffffefffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0058d3d2: mov dword ptr [ecx + 0x3cc], eax */ W32((u32)(r_ecx+0x3ccu), r_eax);
    /* 0058d3d8: mov word ptr [ecx + 0x434], dx */ W16((u32)(r_ecx+0x434u), (u16)r_edx);
    /* 0058d3df: mov word ptr [ecx + 0x436], dx */ W16((u32)(r_ecx+0x436u), (u16)r_edx);
    /* 0058d3e6: mov word ptr [ecx + 0x438], dx */ W16((u32)(r_ecx+0x438u), (u16)r_edx);
    /* 0058d3ed: mov word ptr [ecx + 0x43a], dx */ W16((u32)(r_ecx+0x43au), (u16)r_edx);
    /* 0058d3f4: mov word ptr [ecx + 0x32e], bx */ W16((u32)(r_ecx+0x32eu), (u16)r_ebx);
    /* 0058d3fb: call dword ptr [esi + 0x164] */ { u32 t = R32((u32)(r_esi+0x164u)); r_esp -= 4; W32(r_esp, 0x58d401u); call_ind(t); }
    /* 0058d401: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0058d408:; BB(0x0058d408);
    /* 0058d408: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0058d40b: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0058d40e: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0058d411: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0058d414: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0058d41b: mov esp, ebp */ r_esp = r_ebp;
    /* 0058d41d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0058d41e: ret  */ FN_RET(0x0058d320); r_esp += 4; return;
L_0058d41f:; BB(0x0058d41f);
    /* 0058d41f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0058d421: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0058d424: jmp 0x58d408 */ goto L_0058d408;
}

void f_0058d428(void) /* sub_58D428 */
{
    FN_ENTER(0x0058d428);
    /* 0058d428: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0058d429: mov ebp, esp */ r_ebp = r_esp;
    /* 0058d42b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0058d42d: push 0x8d8104 */ { u32 v = 0x8d8104u; r_esp -= 4; W32(r_esp, v); }
    /* 0058d432: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0058d438: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058d439: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0058d440: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0058d443: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0058d446: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0058d449: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0058d44c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0058d44f: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0058d452: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0058d455: call 0x5216f4 */ r_esp -= 4; W32(r_esp, 0x58d45au); f_005216f4();
    /* 0058d45a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0058d461: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0058d464: mov dword ptr [ecx], 0xb08620 */ W32((u32)(r_ecx), 0xb08620u);
    /* 0058d46a: add ecx, 0x3f0 */ {  u32 a = r_ecx; u32 b = 0x3f0u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0058d470: call 0x576a48 */ r_esp -= 4; W32(r_esp, 0x58d475u); f_00576a48();
    /* 0058d475: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0058d478: mov edx, dword ptr [0x9bf994] */ r_edx = R32((u32)(0x9bf994u));
    /* 0058d47e: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 0058d481: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0058d484: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0058d48b: mov esp, ebp */ r_esp = r_ebp;
    /* 0058d48d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0058d48e: ret 4 */ FN_RET(0x0058d428); r_esp += 8; return;
}

void f_0058d494(void) /* sub_58D494 */
{
    FN_ENTER(0x0058d494);
    /* 0058d494: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0058d495: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0058d496: mov esi, ecx */ r_esi = r_ecx;
    /* 0058d498: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x58d49du); f_004f7c84();
    /* 0058d49d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058d49f: je 0x58d4ae */ if (fZ) goto L_0058d4ae;
L_0058d4a1:; BB(0x0058d4a1);
    /* 0058d4a1: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0058d4a3: mov ecx, esi */ r_ecx = r_esi;
    /* 0058d4a5: call dword ptr [eax + 0x1e0] */ { u32 t = R32((u32)(r_eax+0x1e0u)); r_esp -= 4; W32(r_esp, 0x58d4abu); call_ind(t); }
    /* 0058d4ab: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0058d4ac: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0058d4ad: ret  */ FN_RET(0x0058d494); r_esp += 4; return;
L_0058d4ae:; BB(0x0058d4ae);
    /* 0058d4ae: mov eax, dword ptr [esi + 0x3cc] */ r_eax = R32((u32)(r_esi+0x3ccu));
    /* 0058d4b4: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0058d4b6: jne 0x58d615 */ if (!fZ) goto L_0058d615;
L_0058d4bc:; BB(0x0058d4bc);
    /* 0058d4bc: call 0x694cc8 */ r_esp -= 4; W32(r_esp, 0x58d4c1u); f_00694cc8();
    /* 0058d4c1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058d4c3: je 0x58d4e8 */ if (fZ) goto L_0058d4e8;
L_0058d4c5:; BB(0x0058d4c5);
    /* 0058d4c5: push 0x41700000 */ { u32 v = 0x41700000u; r_esp -= 4; W32(r_esp, v); }
    /* 0058d4ca: mov ecx, esi */ r_ecx = r_esi;
    /* 0058d4cc: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0058d4ce: push dword ptr [0x921684] */ { u32 v = R32((u32)(0x921684u)); r_esp -= 4; W32(r_esp, v); }
    /* 0058d4d4: push dword ptr [0xa72eb0] */ { u32 v = R32((u32)(0xa72eb0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0058d4da: call dword ptr [eax + 0x20] */ { u32 t = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, 0x58d4ddu); call_ind(t); }
    /* 0058d4dd: mov ebx, eax */ r_ebx = r_eax;
    /* 0058d4df: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058d4e1: jne 0x58d506 */ if (!fZ) goto L_0058d506;
L_0058d4e3:; BB(0x0058d4e3);
    /* 0058d4e3: jmp 0x58d615 */ goto L_0058d615;
L_0058d4e8:; BB(0x0058d4e8);
    /* 0058d4e8: push 0x41700000 */ { u32 v = 0x41700000u; r_esp -= 4; W32(r_esp, v); }
    /* 0058d4ed: mov ecx, esi */ r_ecx = r_esi;
    /* 0058d4ef: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0058d4f1: push 0x43c80000 */ { u32 v = 0x43c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 0058d4f6: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x58d4f9u); call_ind(t); }
    /* 0058d4f9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058d4fb: je 0x58d615 */ if (fZ) goto L_0058d615;
L_0058d501:; BB(0x0058d501);
    /* 0058d501: mov ebx, 1 */ r_ebx = 0x1u;
L_0058d506:; BB(0x0058d506);
    /* 0058d506: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 0058d508: mov ecx, esi */ r_ecx = r_esi;
    /* 0058d50a: call dword ptr [edx + 0x1b8] */ { u32 t = R32((u32)(r_edx+0x1b8u)); r_esp -= 4; W32(r_esp, 0x58d510u); call_ind(t); }
    /* 0058d510: mov ecx, dword ptr [esi + 0x24] */ r_ecx = R32((u32)(r_esi+0x24u));
    /* 0058d513: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x58d518u); f_00829cc8();
    /* 0058d518: mov ecx, esi */ r_ecx = r_esi;
    /* 0058d51a: call 0x520608 */ r_esp -= 4; W32(r_esp, 0x58d51fu); f_00520608();
    /* 0058d51f: mov edx, dword ptr [0xaf034c] */ r_edx = R32((u32)(0xaf034cu));
    /* 0058d525: mov dword ptr [0xaab518], edx */ W32((u32)(0xaab518u), r_edx);
    /* 0058d52b: call 0x520d08 */ r_esp -= 4; W32(r_esp, 0x58d530u); f_00520d08();
    /* 0058d530: call 0x578b38 */ r_esp -= 4; W32(r_esp, 0x58d535u); f_00578b38();
    /* 0058d535: mov eax, dword ptr [0xa74488] */ r_eax = R32((u32)(0xa74488u));
    /* 0058d53a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058d53c: je 0x58d546 */ if (fZ) goto L_0058d546;
L_0058d53e:; BB(0x0058d53e);
    /* 0058d53e: mov edx, dword ptr [esi + 0x3d8] */ r_edx = R32((u32)(r_esi+0x3d8u));
    /* 0058d544: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
L_0058d546:; BB(0x0058d546);
    /* 0058d546: mov eax, dword ptr [0xa7448c] */ r_eax = R32((u32)(0xa7448cu));
    /* 0058d54b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058d54d: je 0x58d557 */ if (fZ) goto L_0058d557;
L_0058d54f:; BB(0x0058d54f);
    /* 0058d54f: mov edx, dword ptr [esi + 0x3d8] */ r_edx = R32((u32)(r_esi+0x3d8u));
    /* 0058d555: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
L_0058d557:; BB(0x0058d557);
    /* 0058d557: mov eax, dword ptr [0xa74490] */ r_eax = R32((u32)(0xa74490u));
    /* 0058d55c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058d55e: je 0x58d568 */ if (fZ) goto L_0058d568;
L_0058d560:; BB(0x0058d560);
    /* 0058d560: mov edx, dword ptr [esi + 0x3d8] */ r_edx = R32((u32)(r_esi+0x3d8u));
    /* 0058d566: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
L_0058d568:; BB(0x0058d568);
    /* 0058d568: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 0058d56a: mov ecx, esi */ r_ecx = r_esi;
    /* 0058d56c: call dword ptr [edx + 0x1bc] */ { u32 t = R32((u32)(r_edx+0x1bcu)); r_esp -= 4; W32(r_esp, 0x58d572u); call_ind(t); }
    /* 0058d572: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058d574: je 0x58d581 */ if (fZ) goto L_0058d581;
L_0058d576:; BB(0x0058d576);
    /* 0058d576: mov ecx, esi */ r_ecx = r_esi;
    /* 0058d578: call 0x8173d0 */ r_esp -= 4; W32(r_esp, 0x58d57du); f_008173d0();
    /* 0058d57d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058d57f: jne 0x58d5d5 */ if (!fZ) goto L_0058d5d5;
L_0058d581:; BB(0x0058d581);
    /* 0058d581: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x58d586u); f_0082d7b0();
    /* 0058d586: lea ecx, [esi + 0x38] */ r_ecx = (u32)(r_esi+0x38u);
    /* 0058d589: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x58d58eu); f_0082d838();
    /* 0058d58e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0058d590: push dword ptr [esi + 0x3d4] */ { u32 v = R32((u32)(r_esi+0x3d4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0058d596: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0058d598: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0058d59a: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x58d59fu); f_00830b74();
    /* 0058d59f: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 0058d5a2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0058d5a4: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x58d5a9u); f_0082d8bc();
    /* 0058d5a9: mov dword ptr [0xa744a0], 0 */ W32((u32)(0xa744a0u), 0x0u);
    /* 0058d5b3: mov ecx, 0x58cfa0 */ r_ecx = 0x58cfa0u;
    /* 0058d5b8: call 0x82fac4 */ r_esp -= 4; W32(r_esp, 0x58d5bdu); f_0082fac4();
    /* 0058d5bd: cmp ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058d5c0: je 0x58d63d */ if (fZ) goto L_0058d63d;
L_0058d5c2:; BB(0x0058d5c2);
    /* 0058d5c2: mov ecx, esi */ r_ecx = r_esi;
    /* 0058d5c4: call 0x7aa7b8 */ r_esp -= 4; W32(r_esp, 0x58d5c9u); f_007aa7b8();
L_0058d5c9:; BB(0x0058d5c9);
    /* 0058d5c9: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0058d5cb: call 0x82fac4 */ r_esp -= 4; W32(r_esp, 0x58d5d0u); f_0082fac4();
    /* 0058d5d0: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x58d5d5u); f_0082da80();
L_0058d5d5:; BB(0x0058d5d5);
    /* 0058d5d5: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0058d5d7: mov ecx, esi */ r_ecx = r_esi;
    /* 0058d5d9: call dword ptr [eax + 0x1c0] */ { u32 t = R32((u32)(r_eax+0x1c0u)); r_esp -= 4; W32(r_esp, 0x58d5dfu); call_ind(t); }
    /* 0058d5df: mov eax, dword ptr [0xaab518] */ r_eax = R32((u32)(0xaab518u));
    /* 0058d5e4: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 0058d5e9: mov ecx, esi */ r_ecx = r_esi;
    /* 0058d5eb: call 0x520610 */ r_esp -= 4; W32(r_esp, 0x58d5f0u); f_00520610();
    /* 0058d5f0: mov eax, dword ptr [0xa74494] */ r_eax = R32((u32)(0xa74494u));
    /* 0058d5f5: mov edx, dword ptr [0xa74498] */ r_edx = R32((u32)(0xa74498u));
    /* 0058d5fb: mov ebx, dword ptr [0xa7449c] */ r_ebx = R32((u32)(0xa7449cu));
    /* 0058d601: mov dword ptr [esi + 0x300], eax */ W32((u32)(r_esi+0x300u), r_eax);
    /* 0058d607: mov dword ptr [esi + 0x304], edx */ W32((u32)(r_esi+0x304u), r_edx);
    /* 0058d60d: mov dword ptr [esi + 0x308], ebx */ W32((u32)(r_esi+0x308u), r_ebx);
    /* 0058d613: jmp 0x58d635 */ goto L_0058d635;
L_0058d615:; BB(0x0058d615);
    /* 0058d615: call 0x7a61a4 */ r_esp -= 4; W32(r_esp, 0x58d61au); f_007a61a4();
    /* 0058d61a: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 0058d61d: mov edx, dword ptr [esi + 0x3c] */ r_edx = R32((u32)(r_esi+0x3cu));
    /* 0058d620: mov ebx, dword ptr [esi + 0x40] */ r_ebx = R32((u32)(r_esi+0x40u));
    /* 0058d623: mov dword ptr [esi + 0x300], eax */ W32((u32)(r_esi+0x300u), r_eax);
    /* 0058d629: mov dword ptr [esi + 0x304], edx */ W32((u32)(r_esi+0x304u), r_edx);
    /* 0058d62f: mov dword ptr [esi + 0x308], ebx */ W32((u32)(r_esi+0x308u), r_ebx);
L_0058d635:; BB(0x0058d635);
    /* 0058d635: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x58d63au); f_0082dab0();
    /* 0058d63a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0058d63b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0058d63c: ret  */ FN_RET(0x0058d494); r_esp += 4; return;
L_0058d63d:; BB(0x0058d63d);
    /* 0058d63d: mov ecx, esi */ r_ecx = r_esi;
    /* 0058d63f: call 0x7aa668 */ r_esp -= 4; W32(r_esp, 0x58d644u); f_007aa668();
    /* 0058d644: jmp 0x58d5c9 */ goto L_0058d5c9;
}

void f_0058d648(void) /* sub_58D648 */
{
    FN_ENTER(0x0058d648);
    /* 0058d648: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0058d649: mov edi, ecx */ r_edi = r_ecx;
    /* 0058d64b: mov ecx, edi */ r_ecx = r_edi;
    /* 0058d64d: call 0x51f814 */ r_esp -= 4; W32(r_esp, 0x58d652u); f_0051f814();
    /* 0058d652: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0058d654: je 0x58d65d */ if (fZ) goto L_0058d65d;
L_0058d656:; BB(0x0058d656);
    /* 0058d656: mov ecx, edi */ r_ecx = r_edi;
    /* 0058d658: call 0x58d660 */ r_esp -= 4; W32(r_esp, 0x58d65du); f_0058d660();
L_0058d65d:; BB(0x0058d65d);
    /* 0058d65d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0058d65e: ret  */ FN_RET(0x0058d648); r_esp += 4; return;
}

void f_0058d660(void) /* sub_58D660 */
{
    FN_ENTER(0x0058d660);
    /* 0058d660: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0058d661: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0058d663: fld dword ptr [ebp + 0x360] */ FPUSH(R_F32((u32)(r_ebp+0x360u)));
    /* 0058d669: fcomp dword ptr [0x928d1c] */ fx_compare(ST(0), R_F32((u32)(0x928d1cu))); FPOP();
    /* 0058d66f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0058d671: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0058d672: jb 0x58d690 */ if (fC) goto L_0058d690;
L_0058d674:; BB(0x0058d674);
    /* 0058d674: mov dword ptr [ebp + 0x24], 0xa7444c */ W32((u32)(r_ebp+0x24u), 0xa7444cu);
    /* 0058d67b: push 0x1b */ { u32 v = 0x1bu; r_esp -= 4; W32(r_esp, v); }
    /* 0058d67d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0058d67f: call 0x520390 */ r_esp -= 4; W32(r_esp, 0x58d684u); f_00520390();
    /* 0058d684: mov dword ptr [ebp + 0x3c8], 1 */ W32((u32)(r_ebp+0x3c8u), 0x1u);
    /* 0058d68e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0058d68f: ret  */ FN_RET(0x0058d660); r_esp += 4; return;
L_0058d690:; BB(0x0058d690);
    /* 0058d690: mov eax, dword ptr [0xa74454] */ r_eax = R32((u32)(0xa74454u));
    /* 0058d695: push 0x1a */ { u32 v = 0x1au; r_esp -= 4; W32(r_esp, v); }
    /* 0058d697: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 0058d69d: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 0058d6a0: mov dword ptr [ebp + 0x24], eax */ W32((u32)(r_ebp+0x24u), r_eax);
    /* 0058d6a3: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0058d6a5: call 0x520390 */ r_esp -= 4; W32(r_esp, 0x58d6aau); f_00520390();
    /* 0058d6aa: mov dword ptr [ebp + 0x3c8], 0 */ W32((u32)(r_ebp+0x3c8u), 0x0u);
    /* 0058d6b4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0058d6b5: ret  */ FN_RET(0x0058d660); r_esp += 4; return;
}

void f_0058d6b8(void) /* sub_58D6B8 */
{
    FN_ENTER(0x0058d6b8);
    /* 0058d6b8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0058d6b9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0058d6ba: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0058d6bb: sub esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0058d6be: mov esi, ecx */ r_esi = r_ecx;
    /* 0058d6c0: mov ecx, esi */ r_ecx = r_esi;
    /* 0058d6c2: call 0x51f814 */ r_esp -= 4; W32(r_esp, 0x58d6c7u); f_0051f814();
    /* 0058d6c7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058d6c9: je 0x58d751 */ if (fZ) goto L_0058d751;
L_0058d6cf:; BB(0x0058d6cf);
    /* 0058d6cf: fld dword ptr [esi + 0x35c] */ FPUSH(R_F32((u32)(r_esi+0x35cu)));
    /* 0058d6d5: fcomp dword ptr [0x928d18] */ fx_compare(ST(0), R_F32((u32)(0x928d18u))); FPOP();
    /* 0058d6db: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0058d6dd: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0058d6de: jae 0x58d6f9 */ if (!fC) goto L_0058d6f9;
L_0058d6e0:; BB(0x0058d6e0);
    /* 0058d6e0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0058d6e2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058d6e3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058d6e4: call 0x51f7fc */ r_esp -= 4; W32(r_esp, 0x58d6e9u); f_0051f7fc();
    /* 0058d6e9: push 0x928ea0 */ { u32 v = 0x928ea0u; r_esp -= 4; W32(r_esp, v); }
    /* 0058d6ee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058d6ef: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x58d6f4u); f_0061cdb0();
    /* 0058d6f4: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058d6f7: jmp 0x58d710 */ goto L_0058d710;
L_0058d6f9:; BB(0x0058d6f9);
    /* 0058d6f9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0058d6fb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058d6fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058d6fd: call 0x51f7fc */ r_esp -= 4; W32(r_esp, 0x58d702u); f_0051f7fc();
    /* 0058d702: push 0x928eb0 */ { u32 v = 0x928eb0u; r_esp -= 4; W32(r_esp, v); }
    /* 0058d707: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058d708: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x58d70du); f_0061cdb0();
    /* 0058d70d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0058d710:; BB(0x0058d710);
    /* 0058d710: fld dword ptr [esi + 0x360] */ FPUSH(R_F32((u32)(r_esi+0x360u)));
    /* 0058d716: fcomp dword ptr [0x928d18] */ fx_compare(ST(0), R_F32((u32)(0x928d18u))); FPOP();
    /* 0058d71c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0058d71e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0058d71f: jb 0x58d73a */ if (fC) goto L_0058d73a;
L_0058d721:; BB(0x0058d721);
    /* 0058d721: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0058d723: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0058d725: call 0x51f7fc */ r_esp -= 4; W32(r_esp, 0x58d72au); f_0051f7fc();
    /* 0058d72a: push 0x928ec0 */ { u32 v = 0x928ec0u; r_esp -= 4; W32(r_esp, v); }
    /* 0058d72f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058d730: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x58d735u); f_0061cdb0();
    /* 0058d735: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058d738: jmp 0x58d751 */ goto L_0058d751;
L_0058d73a:; BB(0x0058d73a);
    /* 0058d73a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0058d73c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0058d73e: call 0x51f7fc */ r_esp -= 4; W32(r_esp, 0x58d743u); f_0051f7fc();
    /* 0058d743: push 0x928ecc */ { u32 v = 0x928eccu; r_esp -= 4; W32(r_esp, v); }
    /* 0058d748: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058d749: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x58d74eu); f_0061cdb0();
    /* 0058d74e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0058d751:; BB(0x0058d751);
    /* 0058d751: fld dword ptr [esi + 0x360] */ FPUSH(R_F32((u32)(r_esi+0x360u)));
    /* 0058d757: fcomp dword ptr [0x928d18] */ fx_compare(ST(0), R_F32((u32)(0x928d18u))); FPOP();
    /* 0058d75d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0058d75f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0058d760: jb 0x58d769 */ if (fC) goto L_0058d769;
L_0058d762:; BB(0x0058d762);
    /* 0058d762: mov ebp, 1 */ r_ebp = 0x1u;
    /* 0058d767: jmp 0x58d76b */ goto L_0058d76b;
L_0058d769:; BB(0x0058d769);
    /* 0058d769: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
L_0058d76b:; BB(0x0058d76b);
    /* 0058d76b: push 0x41700000 */ { u32 v = 0x41700000u; r_esp -= 4; W32(r_esp, v); }
    /* 0058d770: mov ecx, esi */ r_ecx = r_esi;
    /* 0058d772: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0058d774: push 0x43c80000 */ { u32 v = 0x43c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 0058d779: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x58d77cu); call_ind(t); }
    /* 0058d77c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058d77e: je 0x58d933 */ if (fZ) goto L_0058d933;
L_0058d784:; BB(0x0058d784);
    /* 0058d784: mov ecx, dword ptr [esi + 0x24] */ r_ecx = R32((u32)(r_esi+0x24u));
    /* 0058d787: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x58d78cu); f_00829cc8();
    /* 0058d78c: call 0x578b38 */ r_esp -= 4; W32(r_esp, 0x58d791u); f_00578b38();
    /* 0058d791: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058d793: je 0x58d7c1 */ if (fZ) goto L_0058d7c1;
L_0058d795:; BB(0x0058d795);
    /* 0058d795: mov edx, dword ptr [esi + 0x24] */ r_edx = R32((u32)(r_esi+0x24u));
    /* 0058d798: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0058d79a: mov edi, dword ptr [eax + 0x2c] */ r_edi = R32((u32)(r_eax+0x2cu));
    /* 0058d79d: mov dword ptr [esp + 0xc], edi */ W32((u32)(r_esp+0xcu), r_edi);
    /* 0058d7a1: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 0058d7a4: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 0058d7a8: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0058d7ab: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 0058d7af: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 0058d7b2: mov dword ptr [eax + 0x2c], edx */ W32((u32)(r_eax+0x2cu), r_edx);
    /* 0058d7b5: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 0058d7b8: mov dword ptr [eax + 0x38], edx */ W32((u32)(r_eax+0x38u), r_edx);
    /* 0058d7bb: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 0058d7be: mov dword ptr [eax + 0x44], edx */ W32((u32)(r_eax+0x44u), r_edx);
L_0058d7c1:; BB(0x0058d7c1);
    /* 0058d7c1: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x58d7c6u); f_0082d7b0();
    /* 0058d7c6: lea ecx, [esi + 0x38] */ r_ecx = (u32)(r_esi+0x38u);
    /* 0058d7c9: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x58d7ceu); f_0082d838();
    /* 0058d7ce: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 0058d7d1: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0058d7d3: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x58d7d8u); f_0082d8bc();
    /* 0058d7d8: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 0058d7dd: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 0058d7e2: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 0058d7e7: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0058d7e9: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x58d7eeu); f_0082fa0c();
    /* 0058d7ee: mov eax, dword ptr [0xa74488] */ r_eax = R32((u32)(0xa74488u));
    /* 0058d7f3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058d7f5: je 0x58d7fd */ if (fZ) goto L_0058d7fd;
L_0058d7f7:; BB(0x0058d7f7);
    /* 0058d7f7: mov dword ptr [eax], 0xffb0b000 */ W32((u32)(r_eax), 0xffb0b000u);
L_0058d7fd:; BB(0x0058d7fd);
    /* 0058d7fd: mov eax, dword ptr [0xa7448c] */ r_eax = R32((u32)(0xa7448cu));
    /* 0058d802: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058d804: je 0x58d80c */ if (fZ) goto L_0058d80c;
L_0058d806:; BB(0x0058d806);
    /* 0058d806: mov dword ptr [eax], 0xffb0b000 */ W32((u32)(r_eax), 0xffb0b000u);
L_0058d80c:; BB(0x0058d80c);
    /* 0058d80c: mov eax, dword ptr [0xa74490] */ r_eax = R32((u32)(0xa74490u));
    /* 0058d811: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058d813: je 0x58d81b */ if (fZ) goto L_0058d81b;
L_0058d815:; BB(0x0058d815);
    /* 0058d815: mov dword ptr [eax], 0xffb0b000 */ W32((u32)(r_eax), 0xffb0b000u);
L_0058d81b:; BB(0x0058d81b);
    /* 0058d81b: movsx eax, word ptr [esi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x32eu));
    /* 0058d822: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058d824: jne 0x58d8f3 */ if (!fZ) goto L_0058d8f3;
L_0058d82a:; BB(0x0058d82a);
    /* 0058d82a: fld dword ptr [esi + 0x364] */ FPUSH(R_F32((u32)(r_esi+0x364u)));
    /* 0058d830: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 0058d834: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 0058d839: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0058d83e: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0058d842: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 0058d846: fistp dword ptr [esp + 0x28] */ W32((u32)(r_esp+0x28u), (u32)fx_int32(ST(0))); FPOP();
    /* 0058d84a: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 0058d84e: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 0058d852: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0058d854: jl 0x58d862 */ if ((fS!=fO)) goto L_0058d862;
L_0058d856:; BB(0x0058d856);
    /* 0058d856: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0058d859: jl 0x58d864 */ if ((fS!=fO)) goto L_0058d864;
L_0058d85b:; BB(0x0058d85b);
    /* 0058d85b: mov eax, 0xa */ r_eax = 0xau;
    /* 0058d860: jmp 0x58d864 */ goto L_0058d864;
L_0058d862:; BB(0x0058d862);
    /* 0058d862: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0058d864:; BB(0x0058d864);
    /* 0058d864: fld dword ptr [0x928d0c] */ FPUSH(R_F32((u32)(0x928d0cu)));
    /* 0058d86a: mov edx, dword ptr [esi + 0xd8] */ r_edx = R32((u32)(r_esi+0xd8u));
    /* 0058d870: mov edi, dword ptr [esi + 0xdc] */ r_edi = R32((u32)(r_esi+0xdcu));
    /* 0058d876: fld dword ptr [esi + 0x368] */ FPUSH(R_F32((u32)(r_esi+0x368u)));
    /* 0058d87c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0058d87e: fst dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0));
    /* 0058d882: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0058d884: mov eax, dword ptr [edx + eax*8 + 4] */ r_eax = R32((u32)(r_edx+r_eax*8+0x4u));
    /* 0058d888: mov edi, dword ptr [edi + eax*8 + 4] */ r_edi = R32((u32)(r_edi+r_eax*8+0x4u));
    /* 0058d88c: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 0058d88e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0058d890: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0058d891: jbe 0x58d897 */ if ((fC||fZ)) goto L_0058d897;
L_0058d893:; BB(0x0058d893);
    /* 0058d893: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0058d895: jmp 0x58d8c0 */ goto L_0058d8c0;
L_0058d897:; BB(0x0058d897);
    /* 0058d897: mov edx, dword ptr [edi + 4] */ r_edx = R32((u32)(r_edi+0x4u));
    /* 0058d89a: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0058d89d: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
    /* 0058d8a1: fild dword ptr [esp + 0x30] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x30u)));
    /* 0058d8a5: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0058d8a8: fadd dword ptr [edx*4 + 0x928b68] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x928b68u));
    /* 0058d8af: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0058d8b1: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0058d8b3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0058d8b4: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0058d8b6: jb 0x58d8ba */ if (fC) goto L_0058d8ba;
L_0058d8b8:; BB(0x0058d8b8);
    /* 0058d8b8: fst st(1) */ ST(1) = ST(0);
L_0058d8ba:; BB(0x0058d8ba);
    /* 0058d8ba: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0058d8bc: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
L_0058d8c0:; BB(0x0058d8c0);
    /* 0058d8c0: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x58d8c5u); f_0082fa9c();
    /* 0058d8c5: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 0058d8c9: mov eax, dword ptr [esi + 0x34] */ r_eax = R32((u32)(r_esi+0x34u));
    /* 0058d8cc: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0058d8d0: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0058d8d3: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 0058d8d7: call 0x83046c */ r_esp -= 4; W32(r_esp, 0x58d8dcu); f_0083046c();
    /* 0058d8dc: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x58d8e1u); f_0082faac();
    /* 0058d8e1: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 0058d8e5: fstp dword ptr [esi + 0xc0] */ W_F32((u32)(r_esi+0xc0u), ST(0)); FPOP();
    /* 0058d8eb: mov dword ptr [esi + 0xf8], edi */ W32((u32)(r_esi+0xf8u), r_edi);
    /* 0058d8f1: jmp 0x58d90b */ goto L_0058d90b;
L_0058d8f3:; BB(0x0058d8f3);
    /* 0058d8f3: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 0058d8f8: push dword ptr [esi + 0x34] */ { u32 v = R32((u32)(r_esi+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 0058d8fb: and eax, 0xfffffbff */ {  u32 a = r_eax; u32 b = 0xfffffbffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0058d900: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 0058d905: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x58d90au); f_0082e1e8();
    /* 0058d90a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0058d90b:; BB(0x0058d90b);
    /* 0058d90b: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x58d910u); f_0082da80();
    /* 0058d910: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058d912: je 0x58d92e */ if (fZ) goto L_0058d92e;
L_0058d914:; BB(0x0058d914);
    /* 0058d914: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0058d918: mov eax, dword ptr [esi + 0x24] */ r_eax = R32((u32)(r_esi+0x24u));
    /* 0058d91b: mov esi, dword ptr [eax] */ r_esi = R32((u32)(r_eax));
    /* 0058d91d: mov dword ptr [esi + 0x2c], edx */ W32((u32)(r_esi+0x2cu), r_edx);
    /* 0058d920: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 0058d924: mov dword ptr [esi + 0x38], ecx */ W32((u32)(r_esi+0x38u), r_ecx);
    /* 0058d927: mov ebp, dword ptr [esp + 0x14] */ r_ebp = R32((u32)(r_esp+0x14u));
    /* 0058d92b: mov dword ptr [esi + 0x44], ebp */ W32((u32)(r_esi+0x44u), r_ebp);
L_0058d92e:; BB(0x0058d92e);
    /* 0058d92e: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x58d933u); f_0082dab0();
L_0058d933:; BB(0x0058d933);
    /* 0058d933: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0058d936: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0058d937: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0058d938: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0058d939: ret  */ FN_RET(0x0058d6b8); r_esp += 4; return;
}

void f_0058d93c(void) /* sub_58D93C */
{
    FN_ENTER(0x0058d93c);
    /* 0058d93c: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0058d940: cmp eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0058d943: ja 0x58da3a */ if ((!fC&&!fZ)) goto L_0058da3a;
L_0058d949:; BB(0x0058d949);
    /* 0058d949: mov eax, dword ptr [eax*4 + 0x928aa0] */ r_eax = R32((u32)(r_eax*4+0x928aa0u));
    /* 0058d950: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0058da3a:; BB(0x0058da3a);
    /* 0058da3a: ret 8 */ FN_RET(0x0058d93c); r_esp += 12; return;
}

void f_0058d952(void)
{
    FN_ENTER(0x0058d952);
    /* 0058d952: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 0058d956: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0058d957: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0058d959: call dword ptr [eax + 0x1d8] */ { u32 t = R32((u32)(r_eax+0x1d8u)); r_esp -= 4; W32(r_esp, 0x58d95fu); call_ind(t); }
    /* 0058d95f: jmp 0x58da3a */ goto L_0058da3a;
L_0058da3a:; BB(0x0058da3a);
    /* 0058da3a: ret 8 */ FN_RET(0x0058d952); r_esp += 12; return;
}

void f_0058d964(void)
{
    FN_ENTER(0x0058d964);
    /* 0058d964: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 0058d968: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0058d969: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0058d96b: call dword ptr [eax + 0x1d4] */ { u32 t = R32((u32)(r_eax+0x1d4u)); r_esp -= 4; W32(r_esp, 0x58d971u); call_ind(t); }
    /* 0058d971: jmp 0x58da3a */ goto L_0058da3a;
L_0058da3a:; BB(0x0058da3a);
    /* 0058da3a: ret 8 */ FN_RET(0x0058d964); r_esp += 12; return;
}

void f_0058d976(void)
{
    FN_ENTER(0x0058d976);
    /* 0058d976: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 0058d97a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0058d97b: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0058d97d: call dword ptr [eax + 0x1d0] */ { u32 t = R32((u32)(r_eax+0x1d0u)); r_esp -= 4; W32(r_esp, 0x58d983u); call_ind(t); }
    /* 0058d983: jmp 0x58da3a */ goto L_0058da3a;
L_0058da3a:; BB(0x0058da3a);
    /* 0058da3a: ret 8 */ FN_RET(0x0058d976); r_esp += 12; return;
}

void f_0058d988(void)
{
    FN_ENTER(0x0058d988);
    /* 0058d988: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0058d98c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058d98d: call 0x58da40 */ r_esp -= 4; W32(r_esp, 0x58d992u); f_0058da40();
    /* 0058d992: jmp 0x58da3a */ goto L_0058da3a;
L_0058da3a:; BB(0x0058da3a);
    /* 0058da3a: ret 8 */ FN_RET(0x0058d988); r_esp += 12; return;
}

void f_0058d997(void)
{
    FN_ENTER(0x0058d997);
    /* 0058d997: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0058d99b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058d99c: call 0x58dc40 */ r_esp -= 4; W32(r_esp, 0x58d9a1u); f_0058dc40();
    /* 0058d9a1: jmp 0x58da3a */ goto L_0058da3a;
L_0058da3a:; BB(0x0058da3a);
    /* 0058da3a: ret 8 */ FN_RET(0x0058d997); r_esp += 12; return;
}

void f_0058d9a6(void)
{
    FN_ENTER(0x0058d9a6);
    /* 0058d9a6: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0058d9aa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058d9ab: call 0x58dd3c */ r_esp -= 4; W32(r_esp, 0x58d9b0u); f_0058dd3c();
    /* 0058d9b0: jmp 0x58da3a */ goto L_0058da3a;
L_0058da3a:; BB(0x0058da3a);
    /* 0058da3a: ret 8 */ FN_RET(0x0058d9a6); r_esp += 12; return;
}

void f_0058d9b5(void)
{
    FN_ENTER(0x0058d9b5);
    /* 0058d9b5: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0058d9b9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058d9ba: call 0x58dde4 */ r_esp -= 4; W32(r_esp, 0x58d9bfu); f_0058dde4();
    /* 0058d9bf: jmp 0x58da3a */ goto L_0058da3a;
L_0058da3a:; BB(0x0058da3a);
    /* 0058da3a: ret 8 */ FN_RET(0x0058d9b5); r_esp += 12; return;
}

void f_0058d9c1(void)
{
    FN_ENTER(0x0058d9c1);
    /* 0058d9c1: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0058d9c5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058d9c6: call 0x58df80 */ r_esp -= 4; W32(r_esp, 0x58d9cbu); f_0058df80();
    /* 0058d9cb: jmp 0x58da3a */ goto L_0058da3a;
L_0058da3a:; BB(0x0058da3a);
    /* 0058da3a: ret 8 */ FN_RET(0x0058d9c1); r_esp += 12; return;
}

void f_0058d9cd(void)
{
    FN_ENTER(0x0058d9cd);
    /* 0058d9cd: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0058d9d1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058d9d2: call 0x58e074 */ r_esp -= 4; W32(r_esp, 0x58d9d7u); f_0058e074();
    /* 0058d9d7: jmp 0x58da3a */ goto L_0058da3a;
L_0058da3a:; BB(0x0058da3a);
    /* 0058da3a: ret 8 */ FN_RET(0x0058d9cd); r_esp += 12; return;
}

void f_0058d9d9(void)
{
    FN_ENTER(0x0058d9d9);
    /* 0058d9d9: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0058d9dd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058d9de: call 0x58e598 */ r_esp -= 4; W32(r_esp, 0x58d9e3u); f_0058e598();
    /* 0058d9e3: jmp 0x58da3a */ goto L_0058da3a;
L_0058da3a:; BB(0x0058da3a);
    /* 0058da3a: ret 8 */ FN_RET(0x0058d9d9); r_esp += 12; return;
}

void f_0058d9e5(void)
{
    FN_ENTER(0x0058d9e5);
    /* 0058d9e5: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0058d9e9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058d9ea: call 0x58e8f0 */ r_esp -= 4; W32(r_esp, 0x58d9efu); f_0058e8f0();
    /* 0058d9ef: jmp 0x58da3a */ goto L_0058da3a;
L_0058da3a:; BB(0x0058da3a);
    /* 0058da3a: ret 8 */ FN_RET(0x0058d9e5); r_esp += 12; return;
}

void f_0058d9f1(void)
{
    FN_ENTER(0x0058d9f1);
    /* 0058d9f1: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0058d9f5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058d9f6: call 0x58eb18 */ r_esp -= 4; W32(r_esp, 0x58d9fbu); f_0058eb18();
    /* 0058d9fb: jmp 0x58da3a */ goto L_0058da3a;
L_0058da3a:; BB(0x0058da3a);
    /* 0058da3a: ret 8 */ FN_RET(0x0058d9f1); r_esp += 12; return;
}

void f_0058d9fd(void)
{
    FN_ENTER(0x0058d9fd);
    /* 0058d9fd: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0058da01: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058da02: call 0x58f040 */ r_esp -= 4; W32(r_esp, 0x58da07u); f_0058f040();
    /* 0058da07: jmp 0x58da3a */ goto L_0058da3a;
L_0058da3a:; BB(0x0058da3a);
    /* 0058da3a: ret 8 */ FN_RET(0x0058d9fd); r_esp += 12; return;
}

void f_0058da09(void)
{
    FN_ENTER(0x0058da09);
    /* 0058da09: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0058da0d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058da0e: call 0x58f250 */ r_esp -= 4; W32(r_esp, 0x58da13u); f_0058f250();
    /* 0058da13: jmp 0x58da3a */ goto L_0058da3a;
L_0058da3a:; BB(0x0058da3a);
    /* 0058da3a: ret 8 */ FN_RET(0x0058da09); r_esp += 12; return;
}

void f_0058da15(void)
{
    FN_ENTER(0x0058da15);
    /* 0058da15: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0058da19: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058da1a: call 0x58f550 */ r_esp -= 4; W32(r_esp, 0x58da1fu); f_0058f550();
    /* 0058da1f: jmp 0x58da3a */ goto L_0058da3a;
L_0058da3a:; BB(0x0058da3a);
    /* 0058da3a: ret 8 */ FN_RET(0x0058da15); r_esp += 12; return;
}

void f_0058da21(void)
{
    FN_ENTER(0x0058da21);
    /* 0058da21: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0058da25: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058da26: call 0x58f6e4 */ r_esp -= 4; W32(r_esp, 0x58da2bu); f_0058f6e4();
    /* 0058da2b: jmp 0x58da3a */ goto L_0058da3a;
L_0058da3a:; BB(0x0058da3a);
    /* 0058da3a: ret 8 */ FN_RET(0x0058da21); r_esp += 12; return;
}

void f_0058da2d(void)
{
    FN_ENTER(0x0058da2d);
    /* 0058da2d: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 0058da31: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0058da32: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0058da34: call dword ptr [eax + 0x1cc] */ { u32 t = R32((u32)(r_eax+0x1ccu)); r_esp -= 4; W32(r_esp, 0x58da3au); call_ind(t); }
    /* 0058da3a: ret 8 */ FN_RET(0x0058da2d); r_esp += 12; return;
}

void f_0058da40(void) /* sub_58DA40 */
{
    FN_ENTER(0x0058da40);
    /* 0058da40: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0058da41: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0058da42: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0058da45: mov esi, ecx */ r_esi = r_ecx;
    /* 0058da47: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 0058da4b: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058da4e: je 0x58dc02 */ if (fZ) goto L_0058dc02;
L_0058da54:; BB(0x0058da54);
    /* 0058da54: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058da57: je 0x58dbfa */ if (fZ) goto L_0058dbfa;
L_0058da5d:; BB(0x0058da5d);
    /* 0058da5d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058da5f: jne 0x58dbfa */ if (!fZ) goto L_0058dbfa;
L_0058da65:; BB(0x0058da65);
    /* 0058da65: mov eax, dword ptr [esi + 0x40c] */ r_eax = R32((u32)(r_esi+0x40cu));
    /* 0058da6b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058da6d: je 0x58db60 */ if (fZ) goto L_0058db60;
L_0058da73:; BB(0x0058da73);
    /* 0058da73: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058da76: jne 0x58db42 */ if (!fZ) goto L_0058db42;
L_0058da7c:; BB(0x0058da7c);
    /* 0058da7c: mov eax, dword ptr [esi + 0x410] */ r_eax = R32((u32)(r_esi+0x410u));
    /* 0058da82: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0058da85: mov dword ptr [esi + 0x410], eax */ W32((u32)(r_esi+0x410u), r_eax);
    /* 0058da8b: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0058da8e: jl 0x58db30 */ if ((fS!=fO)) goto L_0058db30;
L_0058da94:; BB(0x0058da94);
    /* 0058da94: push dword ptr [esi + 0x60] */ { u32 v = R32((u32)(r_esi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 0058da97: mov eax, dword ptr [esi + 0x3cc] */ r_eax = R32((u32)(r_esi+0x3ccu));
    /* 0058da9d: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0058daa0: mov dword ptr [esi + 0x3cc], eax */ W32((u32)(r_esi+0x3ccu), r_eax);
    /* 0058daa6: lea ebp, [esi + 0x38] */ r_ebp = (u32)(r_esi+0x38u);
    /* 0058daa9: mov dword ptr [esi + 0x40c], 2 */ W32((u32)(r_esi+0x40cu), 0x2u);
    /* 0058dab3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0058dab4: push dword ptr [esi + 0x24] */ { u32 v = R32((u32)(r_esi+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 0058dab7: push 0x928ce0 */ { u32 v = 0x928ce0u; r_esp -= 4; W32(r_esp, v); }
    /* 0058dabc: push dword ptr [0xa74484] */ { u32 v = R32((u32)(0xa74484u)); r_esp -= 4; W32(r_esp, v); }
    /* 0058dac2: call 0x578aa0 */ r_esp -= 4; W32(r_esp, 0x58dac7u); f_00578aa0();
    /* 0058dac7: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058daca: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 0058dacd: mov edx, dword ptr [esi + 0x3c] */ r_edx = R32((u32)(r_esi+0x3cu));
    /* 0058dad0: mov ecx, dword ptr [esi + 0x60] */ r_ecx = R32((u32)(r_esi+0x60u));
    /* 0058dad3: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0058dad6: mov eax, dword ptr [esi + 0x40] */ r_eax = R32((u32)(r_esi+0x40u));
    /* 0058dad9: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0058dadd: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0058dae1: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x58dae6u); f_0082dcbc();
    /* 0058dae6: fld dword ptr [0x928d08] */ FPUSH(R_F32((u32)(0x928d08u)));
    /* 0058daec: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0058daee: fadd dword ptr [esp] */ ST(0) = ST(0) + R_F32((u32)(r_esp));
    /* 0058daf1: mov ecx, dword ptr [esi + 0x60] */ r_ecx = R32((u32)(r_esi+0x60u));
    /* 0058daf4: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0058daf7: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x58dafcu); f_0082ddd8();
    /* 0058dafc: fld dword ptr [0x928d08] */ FPUSH(R_F32((u32)(0x928d08u)));
    /* 0058db02: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0058db04: fadd dword ptr [esp + 8] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x8u));
    /* 0058db08: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0058db0c: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0058db0f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058db10: call 0x5787d0 */ r_esp -= 4; W32(r_esp, 0x58db15u); f_005787d0();
    /* 0058db15: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0058db16: push 0x13b */ { u32 v = 0x13bu; r_esp -= 4; W32(r_esp, v); }
    /* 0058db1b: mov ecx, esi */ r_ecx = r_esi;
    /* 0058db1d: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x58db22u); f_007879b8();
    /* 0058db22: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0058db24: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0058db25: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0058db26: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0058db27: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058db28: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x58db2du); f_00814298();
    /* 0058db2d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0058db30:; BB(0x0058db30);
    /* 0058db30: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0058db32: mov ecx, esi */ r_ecx = r_esi;
    /* 0058db34: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x58db3au); call_ind(t); }
    /* 0058db3a: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0058db3d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0058db3e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0058db3f: ret 4 */ FN_RET(0x0058da40); r_esp += 8; return;
L_0058db42:; BB(0x0058db42);
    /* 0058db42: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058db45: jne 0x58dbfa */ if (!fZ) goto L_0058dbfa;
L_0058db4b:; BB(0x0058db4b);
    /* 0058db4b: movzx eax, word ptr [esi + 8] */ r_eax = (u32)R16((u32)(r_esi+0x8u));
    /* 0058db4f: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0058db54: mov word ptr [esi + 8], ax */ W16((u32)(r_esi+0x8u), (u16)r_eax);
    /* 0058db58: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0058db5b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0058db5c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0058db5d: ret 4 */ FN_RET(0x0058da40); r_esp += 8; return;
L_0058db60:; BB(0x0058db60);
    /* 0058db60: mov ecx, esi */ r_ecx = r_esi;
    /* 0058db62: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x58db67u); f_007aa094();
    /* 0058db67: push 0x41500000 */ { u32 v = 0x41500000u; r_esp -= 4; W32(r_esp, v); }
    /* 0058db6c: mov ecx, esi */ r_ecx = r_esi;
    /* 0058db6e: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x58db73u); f_007aaa30();
    /* 0058db73: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058db75: jne 0x58db87 */ if (!fZ) goto L_0058db87;
L_0058db77:; BB(0x0058db77);
    /* 0058db77: push 0x41c80000 */ { u32 v = 0x41c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 0058db7c: mov ecx, esi */ r_ecx = r_esi;
    /* 0058db7e: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x58db83u); f_007aaa30();
    /* 0058db83: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058db85: je 0x58dba4 */ if (fZ) goto L_0058dba4;
L_0058db87:; BB(0x0058db87);
    /* 0058db87: push 0x137 */ { u32 v = 0x137u; r_esp -= 4; W32(r_esp, v); }
    /* 0058db8c: mov ecx, esi */ r_ecx = r_esi;
    /* 0058db8e: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x58db93u); f_007879b8();
    /* 0058db93: lea ebp, [esi + 0x38] */ r_ebp = (u32)(r_esi+0x38u);
    /* 0058db96: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0058db98: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0058db99: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0058db9a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0058db9b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058db9c: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x58dba1u); f_00814298();
    /* 0058dba1: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0058dba4:; BB(0x0058dba4);
    /* 0058dba4: mov eax, dword ptr [esi + 0xb0] */ r_eax = R32((u32)(r_esi+0xb0u));
    /* 0058dbaa: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0058dbac: je 0x58dbfa */ if (fZ) goto L_0058dbfa;
L_0058dbae:; BB(0x0058dbae);
    /* 0058dbae: mov dword ptr [esi + 0x40c], 1 */ W32((u32)(r_esi+0x40cu), 0x1u);
    /* 0058dbb8: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 0058dbbc: lea eax, [esi + 0x38] */ r_eax = (u32)(r_esi+0x38u);
    /* 0058dbbf: mov dword ptr [esi + 0x410], 0 */ W32((u32)(r_esi+0x410u), 0x0u);
    /* 0058dbc9: mov dword ptr [esp + 0xc], 0 */ W32((u32)(r_esp+0xcu), 0x0u);
    /* 0058dbd1: mov dword ptr [esp + 0x10], 0x41200000 */ W32((u32)(r_esp+0x10u), 0x41200000u);
    /* 0058dbd9: mov dword ptr [esp + 0x14], 0x41a00000 */ W32((u32)(r_esp+0x14u), 0x41a00000u);
    /* 0058dbe1: push dword ptr [esi + 0x60] */ { u32 v = R32((u32)(r_esi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 0058dbe4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058dbe5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0058dbe6: call 0x782b3c */ r_esp -= 4; W32(r_esp, 0x58dbebu); f_00782b3c();
    /* 0058dbeb: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 0058dbef: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0058dbf1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058dbf2: call 0x5788b8 */ r_esp -= 4; W32(r_esp, 0x58dbf7u); f_005788b8();
    /* 0058dbf7: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0058dbfa:; BB(0x0058dbfa);
    /* 0058dbfa: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0058dbfd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0058dbfe: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0058dbff: ret 4 */ FN_RET(0x0058da40); r_esp += 8; return;
L_0058dc02:; BB(0x0058dc02);
    /* 0058dc02: mov eax, 4 */ r_eax = 0x4u;
    /* 0058dc07: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
    /* 0058dc0e: mov ecx, esi */ r_ecx = r_esi;
    /* 0058dc10: call 0x51f894 */ r_esp -= 4; W32(r_esp, 0x58dc15u); f_0051f894();
    /* 0058dc15: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0058dc17: mov ecx, esi */ r_ecx = r_esi;
    /* 0058dc19: call dword ptr [eax + 0x180] */ { u32 t = R32((u32)(r_eax+0x180u)); r_esp -= 4; W32(r_esp, 0x58dc1fu); call_ind(t); }
    /* 0058dc1f: mov eax, dword ptr [esi + 0x3cc] */ r_eax = R32((u32)(r_esi+0x3ccu));
    /* 0058dc25: mov dword ptr [esi + 0x40c], 0 */ W32((u32)(r_esi+0x40cu), 0x0u);
    /* 0058dc2f: and eax, 0xfffffffc */ {  u32 a = r_eax; u32 b = 0xfffffffcu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0058dc32: mov dword ptr [esi + 0x3cc], eax */ W32((u32)(r_esi+0x3ccu), r_eax);
    /* 0058dc38: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0058dc3b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0058dc3c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0058dc3d: ret 4 */ FN_RET(0x0058da40); r_esp += 8; return;
}

void f_0058dc40(void) /* sub_58DC40 */
{
    FN_ENTER(0x0058dc40);
    /* 0058dc40: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0058dc41: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0058dc44: mov esi, ecx */ r_esi = r_ecx;
    /* 0058dc46: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0058dc4a: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058dc4d: je 0x58dd1a */ if (fZ) goto L_0058dd1a;
L_0058dc53:; BB(0x0058dc53);
    /* 0058dc53: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058dc56: je 0x58dcfc */ if (fZ) goto L_0058dcfc;
L_0058dc5c:; BB(0x0058dc5c);
    /* 0058dc5c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058dc5e: jne 0x58dce2 */ if (!fZ) goto L_0058dce2;
L_0058dc64:; BB(0x0058dc64);
    /* 0058dc64: mov ecx, esi */ r_ecx = r_esi;
    /* 0058dc66: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x58dc6bu); f_007aa094();
    /* 0058dc6b: mov eax, dword ptr [esi + 0x30c] */ r_eax = R32((u32)(r_esi+0x30cu));
    /* 0058dc71: mov edx, dword ptr [esi + 0x310] */ r_edx = R32((u32)(r_esi+0x310u));
    /* 0058dc77: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0058dc7a: mov eax, dword ptr [esi + 0x314] */ r_eax = R32((u32)(r_esi+0x314u));
    /* 0058dc80: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0058dc84: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0058dc88: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0058dc8b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058dc8c: call 0x7828e4 */ r_esp -= 4; W32(r_esp, 0x58dc91u); f_007828e4();
    /* 0058dc91: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0058dc92: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058dc95: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0058dc99: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 0058dc9d: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0058dca1: mov ecx, esi */ r_ecx = r_esi;
    /* 0058dca3: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0058dca6: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0058dcaa: call 0x5209d4 */ r_esp -= 4; W32(r_esp, 0x58dcafu); f_005209d4();
    /* 0058dcaf: fld dword ptr [0x928cd4] */ FPUSH(R_F32((u32)(0x928cd4u)));
    /* 0058dcb5: fld dword ptr [esi + 0x30c] */ FPUSH(R_F32((u32)(r_esi+0x30cu)));
    /* 0058dcbb: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0058dcbd: fld dword ptr [esi + 0x314] */ FPUSH(R_F32((u32)(r_esi+0x314u)));
    /* 0058dcc3: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0058dcc5: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0058dcc7: fstp dword ptr [esi + 0x30c] */ W_F32((u32)(r_esi+0x30cu), ST(0)); FPOP();
    /* 0058dccd: fstp dword ptr [esi + 0x314] */ W_F32((u32)(r_esi+0x314u), ST(0)); FPOP();
    /* 0058dcd3: mov ecx, esi */ r_ecx = r_esi;
    /* 0058dcd5: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x58dcdbu); call_ind(t); }
    /* 0058dcdb: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0058dcde: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0058dcdf: ret 4 */ FN_RET(0x0058dc40); r_esp += 8; return;
L_0058dce2:; BB(0x0058dce2);
    /* 0058dce2: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058dce5: jne 0x58dd13 */ if (!fZ) goto L_0058dd13;
L_0058dce7:; BB(0x0058dce7);
    /* 0058dce7: mov ecx, esi */ r_ecx = r_esi;
    /* 0058dce9: call 0x51f81c */ r_esp -= 4; W32(r_esp, 0x58dceeu); f_0051f81c();
    /* 0058dcee: mov ecx, esi */ r_ecx = r_esi;
    /* 0058dcf0: call 0x520be8 */ r_esp -= 4; W32(r_esp, 0x58dcf5u); f_00520be8();
    /* 0058dcf5: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0058dcf8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0058dcf9: ret 4 */ FN_RET(0x0058dc40); r_esp += 8; return;
L_0058dcfc:; BB(0x0058dcfc);
    /* 0058dcfc: mov eax, dword ptr [esi + 0xb0] */ r_eax = R32((u32)(r_esi+0xb0u));
    /* 0058dd02: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0058dd04: je 0x58dd13 */ if (fZ) goto L_0058dd13;
L_0058dd06:; BB(0x0058dd06);
    /* 0058dd06: push dword ptr [esi + 0x380] */ { u32 v = R32((u32)(r_esi+0x380u)); r_esp -= 4; W32(r_esp, v); }
    /* 0058dd0c: mov ecx, esi */ r_ecx = r_esi;
    /* 0058dd0e: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x58dd13u); f_0051f62c();
L_0058dd13:; BB(0x0058dd13);
    /* 0058dd13: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0058dd16: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0058dd17: ret 4 */ FN_RET(0x0058dc40); r_esp += 8; return;
L_0058dd1a:; BB(0x0058dd1a);
    /* 0058dd1a: mov eax, 3 */ r_eax = 0x3u;
    /* 0058dd1f: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
    /* 0058dd26: mov ecx, esi */ r_ecx = r_esi;
    /* 0058dd28: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x58dd2du); f_007aa094();
    /* 0058dd2d: mov ecx, esi */ r_ecx = r_esi;
    /* 0058dd2f: call 0x520bdc */ r_esp -= 4; W32(r_esp, 0x58dd34u); f_00520bdc();
    /* 0058dd34: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0058dd37: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0058dd38: ret 4 */ FN_RET(0x0058dc40); r_esp += 8; return;
}

void f_0058dd3c(void) /* sub_58DD3C */
{
    FN_ENTER(0x0058dd3c);
    /* 0058dd3c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0058dd3d: mov edi, ecx */ r_edi = r_ecx;
    /* 0058dd3f: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0058dd43: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058dd46: je 0x58dda2 */ if (fZ) goto L_0058dda2;
L_0058dd48:; BB(0x0058dd48);
    /* 0058dd48: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058dd4b: je 0x58dd6d */ if (fZ) goto L_0058dd6d;
L_0058dd4d:; BB(0x0058dd4d);
    /* 0058dd4d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0058dd4f: jne 0x58dd9e */ if (!fZ) goto L_0058dd9e;
L_0058dd51:; BB(0x0058dd51);
    /* 0058dd51: add dword ptr [edi + 0x40c], 1 */ { u32 ad = (u32)(r_edi+0x40cu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0058dd58: mov ecx, edi */ r_ecx = r_edi;
    /* 0058dd5a: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x58dd5fu); f_007aa094();
    /* 0058dd5f: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0058dd61: mov ecx, edi */ r_ecx = r_edi;
    /* 0058dd63: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x58dd69u); call_ind(t); }
    /* 0058dd69: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0058dd6a: ret 4 */ FN_RET(0x0058dd3c); r_esp += 8; return;
L_0058dd6d:; BB(0x0058dd6d);
    /* 0058dd6d: push 0x43480000 */ { u32 v = 0x43480000u; r_esp -= 4; W32(r_esp, v); }
    /* 0058dd72: mov ecx, edi */ r_ecx = r_edi;
    /* 0058dd74: call 0x520ea0 */ r_esp -= 4; W32(r_esp, 0x58dd79u); f_00520ea0();
    /* 0058dd79: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058dd7b: jne 0x58dd95 */ if (!fZ) goto L_0058dd95;
L_0058dd7d:; BB(0x0058dd7d);
    /* 0058dd7d: mov eax, dword ptr [edi + 0x40c] */ r_eax = R32((u32)(r_edi+0x40cu));
    /* 0058dd83: cmp eax, 0x5a */ {  u32 a = r_eax; u32 b = 0x5au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0058dd86: jl 0x58dd9e */ if ((fS!=fO)) goto L_0058dd9e;
L_0058dd88:; BB(0x0058dd88);
    /* 0058dd88: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0058dd8a: mov ecx, edi */ r_ecx = r_edi;
    /* 0058dd8c: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x58dd91u); f_0051f62c();
    /* 0058dd91: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0058dd92: ret 4 */ FN_RET(0x0058dd3c); r_esp += 8; return;
L_0058dd95:; BB(0x0058dd95);
    /* 0058dd95: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0058dd97: mov ecx, edi */ r_ecx = r_edi;
    /* 0058dd99: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x58dd9eu); f_0051f62c();
L_0058dd9e:; BB(0x0058dd9e);
    /* 0058dd9e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0058dd9f: ret 4 */ FN_RET(0x0058dd3c); r_esp += 8; return;
L_0058dda2:; BB(0x0058dda2);
    /* 0058dda2: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0058dda4: mov eax, 8 */ r_eax = 0x8u;
    /* 0058dda9: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 0058ddb0: mov ecx, edi */ r_ecx = r_edi;
    /* 0058ddb2: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x58ddb7u); f_0051f664();
    /* 0058ddb7: mov eax, dword ptr [edi + 0x3cc] */ r_eax = R32((u32)(r_edi+0x3ccu));
    /* 0058ddbd: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 0058ddbf: and eax, 0xfffffffc */ {  u32 a = r_eax; u32 b = 0xfffffffcu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0058ddc2: mov dword ptr [edi + 0x3cc], eax */ W32((u32)(r_edi+0x3ccu), r_eax);
    /* 0058ddc8: mov ecx, edi */ r_ecx = r_edi;
    /* 0058ddca: call dword ptr [edx + 0x184] */ { u32 t = R32((u32)(r_edx+0x184u)); r_esp -= 4; W32(r_esp, 0x58ddd0u); call_ind(t); }
    /* 0058ddd0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0058ddd2: mov dword ptr [edi + 0x3e0], eax */ W32((u32)(r_edi+0x3e0u), r_eax);
    /* 0058ddd8: mov dword ptr [edi + 0x40c], eax */ W32((u32)(r_edi+0x40cu), r_eax);
    /* 0058ddde: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0058dddf: ret 4 */ FN_RET(0x0058dd3c); r_esp += 8; return;
}

void f_0058dde4(void) /* sub_58DDE4 */
{
    FN_ENTER(0x0058dde4);
    /* 0058dde4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0058dde5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0058dde7: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0058ddeb: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058ddee: je 0x58df16 */ if (fZ) goto L_0058df16;
L_0058ddf4:; BB(0x0058ddf4);
    /* 0058ddf4: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058ddf7: je 0x58de90 */ if (fZ) goto L_0058de90;
L_0058ddfd:; BB(0x0058ddfd);
    /* 0058ddfd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0058ddff: jne 0x58deb1 */ if (!fZ) goto L_0058deb1;
L_0058de05:; BB(0x0058de05);
    /* 0058de05: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0058de07: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x58de0cu); f_007aa094();
    /* 0058de0c: mov eax, dword ptr [ebx + 0x40c] */ r_eax = R32((u32)(r_ebx+0x40cu));
    /* 0058de12: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058de14: je 0x58de48 */ if (fZ) goto L_0058de48;
L_0058de16:; BB(0x0058de16);
    /* 0058de16: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058de19: jne 0x58de24 */ if (!fZ) goto L_0058de24;
L_0058de1b:; BB(0x0058de1b);
    /* 0058de1b: add dword ptr [ebx + 0x410], 1 */ { u32 ad = (u32)(r_ebx+0x410u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0058de22: jmp 0x58de82 */ goto L_0058de82;
L_0058de24:; BB(0x0058de24);
    /* 0058de24: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058de27: jne 0x58de82 */ if (!fZ) goto L_0058de82;
L_0058de29:; BB(0x0058de29);
    /* 0058de29: mov eax, dword ptr [ebx + 0x410] */ r_eax = R32((u32)(r_ebx+0x410u));
    /* 0058de2f: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0058de32: mov dword ptr [ebx + 0x410], eax */ W32((u32)(r_ebx+0x410u), r_eax);
    /* 0058de38: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058de3b: je 0x58deee */ if (fZ) goto L_0058deee;
L_0058de41:; BB(0x0058de41);
    /* 0058de41: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058de44: je 0x58deb5 */ if (fZ) goto L_0058deb5;
L_0058de46:; BB(0x0058de46);
    /* 0058de46: jmp 0x58de82 */ goto L_0058de82;
L_0058de48:; BB(0x0058de48);
    /* 0058de48: mov eax, dword ptr [ebx + 0xb0] */ r_eax = R32((u32)(r_ebx+0xb0u));
    /* 0058de4e: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0058de50: je 0x58de82 */ if (fZ) goto L_0058de82;
L_0058de52:; BB(0x0058de52);
    /* 0058de52: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0058de54: call 0x58df58 */ r_esp -= 4; W32(r_esp, 0x58de59u); f_0058df58();
    /* 0058de59: call 0x520e6c */ r_esp -= 4; W32(r_esp, 0x58de5eu); f_00520e6c();
    /* 0058de5e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058de60: je 0x58de6e */ if (fZ) goto L_0058de6e;
L_0058de62:; BB(0x0058de62);
    /* 0058de62: mov dword ptr [ebx + 0x40c], 2 */ W32((u32)(r_ebx+0x40cu), 0x2u);
    /* 0058de6c: jmp 0x58de78 */ goto L_0058de78;
L_0058de6e:; BB(0x0058de6e);
    /* 0058de6e: mov dword ptr [ebx + 0x40c], 1 */ W32((u32)(r_ebx+0x40cu), 0x1u);
L_0058de78:; BB(0x0058de78);
    /* 0058de78: mov dword ptr [ebx + 0x410], 0 */ W32((u32)(r_ebx+0x410u), 0x0u);
L_0058de82:; BB(0x0058de82);
    /* 0058de82: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0058de84: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0058de86: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x58de8cu); call_ind(t); }
    /* 0058de8c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0058de8d: ret 4 */ FN_RET(0x0058dde4); r_esp += 8; return;
L_0058de90:; BB(0x0058de90);
    /* 0058de90: mov eax, dword ptr [ebx + 0x3c8] */ r_eax = R32((u32)(r_ebx+0x3c8u));
    /* 0058de96: mov eax, dword ptr [eax*4 + 0xa74458] */ r_eax = R32((u32)(r_eax*4+0xa74458u));
    /* 0058de9d: mov edx, dword ptr [ebx + 0x410] */ r_edx = R32((u32)(r_ebx+0x410u));
    /* 0058dea3: cmp edx, dword ptr [eax + 0x1c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0x1cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0058dea6: jle 0x58deb1 */ if ((fZ||fS!=fO)) goto L_0058deb1;
L_0058dea8:; BB(0x0058dea8);
    /* 0058dea8: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0058deaa: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0058deac: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x58deb1u); f_0051f62c();
L_0058deb1:; BB(0x0058deb1);
    /* 0058deb1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0058deb2: ret 4 */ FN_RET(0x0058dde4); r_esp += 8; return;
L_0058deb5:; BB(0x0058deb5);
    /* 0058deb5: mov eax, dword ptr [ebx + 0x3c8] */ r_eax = R32((u32)(r_ebx+0x3c8u));
    /* 0058debb: mov edx, dword ptr [eax*4 + 0xa74458] */ r_edx = R32((u32)(r_eax*4+0xa74458u));
    /* 0058dec2: push dword ptr [edx + 0x18] */ { u32 v = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 0058dec5: call 0x520e3c */ r_esp -= 4; W32(r_esp, 0x58decau); f_00520e3c();
    /* 0058deca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058decb: lea edx, [ebx + 0x38] */ r_edx = (u32)(r_ebx+0x38u);
    /* 0058dece: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0058decf: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0058ded0: call 0x6e2634 */ r_esp -= 4; W32(r_esp, 0x58ded5u); f_006e2634();
    /* 0058ded5: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058ded8: mov dword ptr [ebx + 0x40c], 1 */ W32((u32)(r_ebx+0x40cu), 0x1u);
    /* 0058dee2: mov dword ptr [ebx + 0x410], 0 */ W32((u32)(r_ebx+0x410u), 0x0u);
    /* 0058deec: jmp 0x58de82 */ goto L_0058de82;
L_0058deee:; BB(0x0058deee);
    /* 0058deee: mov eax, dword ptr [ebx + 0x3c8] */ r_eax = R32((u32)(r_ebx+0x3c8u));
    /* 0058def4: mov edx, dword ptr [eax*4 + 0xa74458] */ r_edx = R32((u32)(r_eax*4+0xa74458u));
    /* 0058defb: push dword ptr [edx + 0x18] */ { u32 v = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 0058defe: call 0x520e3c */ r_esp -= 4; W32(r_esp, 0x58df03u); f_00520e3c();
    /* 0058df03: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058df04: lea edx, [ebx + 0x38] */ r_edx = (u32)(r_ebx+0x38u);
    /* 0058df07: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0058df08: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0058df09: call 0x6f0984 */ r_esp -= 4; W32(r_esp, 0x58df0eu); f_006f0984();
    /* 0058df0e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058df11: jmp 0x58de82 */ goto L_0058de82;
L_0058df16:; BB(0x0058df16);
    /* 0058df16: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0058df18: mov eax, 7 */ r_eax = 0x7u;
    /* 0058df1d: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
    /* 0058df24: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0058df26: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x58df2bu); f_0051f664();
    /* 0058df2b: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0058df2d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0058df2f: call dword ptr [eax + 0x188] */ { u32 t = R32((u32)(r_eax+0x188u)); r_esp -= 4; W32(r_esp, 0x58df35u); call_ind(t); }
    /* 0058df35: mov eax, dword ptr [ebx + 0x3cc] */ r_eax = R32((u32)(r_ebx+0x3ccu));
    /* 0058df3b: and eax, 0xfffffffc */ {  u32 a = r_eax; u32 b = 0xfffffffcu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0058df3e: mov dword ptr [ebx + 0x3cc], eax */ W32((u32)(r_ebx+0x3ccu), r_eax);
    /* 0058df44: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0058df46: mov dword ptr [ebx + 0x40c], edx */ W32((u32)(r_ebx+0x40cu), r_edx);
    /* 0058df4c: mov dword ptr [ebx + 0x410], edx */ W32((u32)(r_ebx+0x410u), r_edx);
    /* 0058df52: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0058df53: ret 4 */ FN_RET(0x0058dde4); r_esp += 8; return;
}

void f_0058df58(void) /* sub_58DF58 */
{
    FN_ENTER(0x0058df58);
    /* 0058df58: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0058df59: mov edi, ecx */ r_edi = r_ecx;
    /* 0058df5b: mov eax, dword ptr [edi + 0x3c8] */ r_eax = R32((u32)(r_edi+0x3c8u));
    /* 0058df61: mov edx, dword ptr [eax*4 + 0xa74458] */ r_edx = R32((u32)(r_eax*4+0xa74458u));
    /* 0058df68: push dword ptr [edx + 0x18] */ { u32 v = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 0058df6b: call 0x520e3c */ r_esp -= 4; W32(r_esp, 0x58df70u); f_00520e3c();
    /* 0058df70: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058df71: lea edx, [edi + 0x38] */ r_edx = (u32)(r_edi+0x38u);
    /* 0058df74: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0058df75: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0058df76: call 0x6eeeb4 */ r_esp -= 4; W32(r_esp, 0x58df7bu); f_006eeeb4();
    /* 0058df7b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0058df7e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0058df7f: ret  */ FN_RET(0x0058df58); r_esp += 4; return;
}

void f_0058df80(void) /* sub_58DF80 */
{
    FN_ENTER(0x0058df80);
    /* 0058df80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0058df81: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0058df83: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0058df87: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058df8a: je 0x58e005 */ if (fZ) goto L_0058e005;
L_0058df8c:; BB(0x0058df8c);
    /* 0058df8c: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058df8f: je 0x58dfed */ if (fZ) goto L_0058dfed;
L_0058df91:; BB(0x0058df91);
    /* 0058df91: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0058df93: jne 0x58e001 */ if (!fZ) goto L_0058e001;
L_0058df95:; BB(0x0058df95);
    /* 0058df95: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0058df97: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x58df9cu); f_007aa094();
    /* 0058df9c: mov eax, dword ptr [ebp + 0x40c] */ r_eax = R32((u32)(r_ebp+0x40cu));
    /* 0058dfa2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058dfa4: jne 0x58dfbc */ if (!fZ) goto L_0058dfbc;
L_0058dfa6:; BB(0x0058dfa6);
    /* 0058dfa6: mov eax, dword ptr [ebp + 0xb0] */ r_eax = R32((u32)(r_ebp+0xb0u));
    /* 0058dfac: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0058dfae: je 0x58dfde */ if (fZ) goto L_0058dfde;
L_0058dfb0:; BB(0x0058dfb0);
    /* 0058dfb0: mov dword ptr [ebp + 0x40c], 1 */ W32((u32)(r_ebp+0x40cu), 0x1u);
    /* 0058dfba: jmp 0x58dfde */ goto L_0058dfde;
L_0058dfbc:; BB(0x0058dfbc);
    /* 0058dfbc: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058dfbf: jne 0x58dfde */ if (!fZ) goto L_0058dfde;
L_0058dfc1:; BB(0x0058dfc1);
    /* 0058dfc1: mov eax, dword ptr [ebp + 0x3f0] */ r_eax = R32((u32)(r_ebp+0x3f0u));
    /* 0058dfc7: lea ecx, [ebp + 0x3f0] */ r_ecx = (u32)(r_ebp+0x3f0u);
    /* 0058dfcd: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x58dfd0u); call_ind(t); }
    /* 0058dfd0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058dfd2: je 0x58dfde */ if (fZ) goto L_0058dfde;
L_0058dfd4:; BB(0x0058dfd4);
    /* 0058dfd4: mov dword ptr [ebp + 0x40c], 2 */ W32((u32)(r_ebp+0x40cu), 0x2u);
L_0058dfde:; BB(0x0058dfde);
    /* 0058dfde: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0058dfe1: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0058dfe3: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x58dfe9u); call_ind(t); }
    /* 0058dfe9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0058dfea: ret 4 */ FN_RET(0x0058df80); r_esp += 8; return;
L_0058dfed:; BB(0x0058dfed);
    /* 0058dfed: mov eax, dword ptr [ebp + 0x40c] */ r_eax = R32((u32)(r_ebp+0x40cu));
    /* 0058dff3: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0058dff6: jne 0x58e001 */ if (!fZ) goto L_0058e001;
L_0058dff8:; BB(0x0058dff8);
    /* 0058dff8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0058dffa: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0058dffc: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x58e001u); f_0051f62c();
L_0058e001:; BB(0x0058e001);
    /* 0058e001: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0058e002: ret 4 */ FN_RET(0x0058df80); r_esp += 8; return;
L_0058e005:; BB(0x0058e005);
    /* 0058e005: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0058e007: mov eax, 7 */ r_eax = 0x7u;
    /* 0058e00c: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 0058e013: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0058e015: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x58e01au); f_0051f664();
    /* 0058e01a: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0058e01d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0058e01f: call dword ptr [eax + 0x184] */ { u32 t = R32((u32)(r_eax+0x184u)); r_esp -= 4; W32(r_esp, 0x58e025u); call_ind(t); }
    /* 0058e025: mov eax, dword ptr [ebp + 0x3cc] */ r_eax = R32((u32)(r_ebp+0x3ccu));
    /* 0058e02b: and eax, 0xfffffffc */ {  u32 a = r_eax; u32 b = 0xfffffffcu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0058e02e: test eax, 0x80000 */ {  u32 a = r_eax; u32 b = 0x80000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058e033: je 0x58e04e */ if (fZ) goto L_0058e04e;
L_0058e035:; BB(0x0058e035);
    /* 0058e035: mov dword ptr [ebp + 0x40c], 2 */ W32((u32)(r_ebp+0x40cu), 0x2u);
    /* 0058e03f: and eax, 0xfff7ffff */ {  u32 a = r_eax; u32 b = 0xfff7ffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0058e044: mov dword ptr [ebp + 0x3cc], eax */ W32((u32)(r_ebp+0x3ccu), r_eax);
    /* 0058e04a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0058e04b: ret 4 */ FN_RET(0x0058df80); r_esp += 8; return;
L_0058e04e:; BB(0x0058e04e);
    /* 0058e04e: mov dword ptr [ebp + 0x3cc], eax */ W32((u32)(r_ebp+0x3ccu), r_eax);
    /* 0058e054: mov eax, dword ptr [ebp + 0x3f0] */ r_eax = R32((u32)(r_ebp+0x3f0u));
    /* 0058e05a: lea ecx, [ebp + 0x3f0] */ r_ecx = (u32)(r_ebp+0x3f0u);
    /* 0058e060: call dword ptr [eax + 8] */ { u32 t = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, 0x58e063u); call_ind(t); }
    /* 0058e063: mov dword ptr [ebp + 0x40c], 1 */ W32((u32)(r_ebp+0x40cu), 0x1u);
    /* 0058e06d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0058e06e: ret 4 */ FN_RET(0x0058df80); r_esp += 8; return;
}

