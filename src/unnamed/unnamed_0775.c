#include "protos.h"

void f_00775170(void) /* sub_775170 */
{
    FN_ENTER(0x00775170);
    /* 00775170: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00775173: fld dword ptr [0x978240] */ FPUSH(R_F32((u32)(0x978240u)));
    /* 00775179: mov eax, dword ptr [ecx + 0x324] */ r_eax = R32((u32)(r_ecx+0x324u));
    /* 0077517f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00775181: je 0x7751ac */ if (fZ) goto L_007751ac;
L_00775183:; BB(0x00775183);
    /* 00775183: movsx eax, word ptr [eax + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x8u));
    /* 00775187: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00775189: jle 0x7751ac */ if ((fZ||fS!=fO)) goto L_007751ac;
L_0077518b:; BB(0x0077518b);
    /* 0077518b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0077518d: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00775190: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 00775193: fmul dword ptr [0x97823c] */ ST(0) = ST(0) * R_F32((u32)(0x97823cu));
    /* 00775199: fcom dword ptr [0x978238] */ fx_compare(ST(0), R_F32((u32)(0x978238u))); 
    /* 0077519f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007751a1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007751a2: jbe 0x7751ac */ if ((fC||fZ)) goto L_007751ac;
L_007751a4:; BB(0x007751a4);
    /* 007751a4: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007751a6: fld dword ptr [0x978238] */ FPUSH(R_F32((u32)(0x978238u)));
L_007751ac:; BB(0x007751ac);
    /* 007751ac: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007751af: ret  */ FN_RET(0x00775170); r_esp += 4; return;
}

void f_007751b0(void) /* sub_7751B0 */
{
    FN_ENTER(0x007751b0);
    /* 007751b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007751b1: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007751b4: mov ebp, ecx */ r_ebp = r_ecx;
    /* 007751b6: call 0x7a61a4 */ r_esp -= 4; W32(r_esp, 0x7751bbu); f_007a61a4();
    /* 007751bb: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007751be: je 0x7751eb */ if (fZ) goto L_007751eb;
L_007751c0:; BB(0x007751c0);
    /* 007751c0: add ebp, 0x168 */ {  u32 a = r_ebp; u32 b = 0x168u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007751c6: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007751c8: call 0x763498 */ r_esp -= 4; W32(r_esp, 0x7751cdu); f_00763498();
    /* 007751cd: shr eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 007751d0: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 007751d3: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 007751d6: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 007751d9: fadd dword ptr [eax*4 + 0x977f98] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x977f98u));
    /* 007751e0: fdiv dword ptr [0x978234] */ ST(0) = ST(0) / R_F32((u32)(0x978234u));
    /* 007751e6: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007751e9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007751ea: ret  */ FN_RET(0x007751b0); r_esp += 4; return;
L_007751eb:; BB(0x007751eb);
    /* 007751eb: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x7751f0u); f_008587a5();
    /* 007751f0: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 007751f4: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 007751f8: fdiv dword ptr [0x978230] */ ST(0) = ST(0) / R_F32((u32)(0x978230u));
    /* 007751fe: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00775201: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00775202: ret  */ FN_RET(0x007751b0); r_esp += 4; return;
}

void f_00775204(void) /* sub_775204 */
{
    FN_ENTER(0x00775204);
    /* 00775204: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00775205: mov esi, ecx */ r_esi = r_ecx;
    /* 00775207: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 0077520a: test eax, 0x2000000 */ {  u32 a = r_eax; u32 b = 0x2000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077520f: jne 0x775242 */ if (!fZ) goto L_00775242;
L_00775211:; BB(0x00775211);
    /* 00775211: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00775213: push 0xb9 */ { u32 v = 0xb9u; r_esp -= 4; W32(r_esp, v); }
    /* 00775218: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0077521c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0077521d: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x775222u); f_0050b7a4();
    /* 00775222: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00775224: push 0xba */ { u32 v = 0xbau; r_esp -= 4; W32(r_esp, v); }
    /* 00775229: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0077522d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0077522e: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x775233u); f_0050b7a4();
    /* 00775233: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00775236: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0077523a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0077523b: mov ecx, esi */ r_ecx = r_esi;
    /* 0077523d: call 0x7752dc */ r_esp -= 4; W32(r_esp, 0x775242u); f_007752dc();
L_00775242:; BB(0x00775242);
    /* 00775242: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00775243: ret 4 */ FN_RET(0x00775204); r_esp += 8; return;
}

void f_0077524c(void) /* sub_77524C */
{
    FN_ENTER(0x0077524c);
    /* 0077524c: movzx edx, word ptr [eax + 0x1c] */ r_edx = (u32)R16((u32)(r_eax+0x1cu));
    /* 00775250: cmp edx, 0x1000 */ {  u32 a = r_edx; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00775256: jge 0x77526d */ if ((fS==fO)) goto L_0077526d;
L_00775258:; BB(0x00775258);
    /* 00775258: movsx eax, word ptr [eax + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x32cu));
    /* 0077525f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00775262: jne 0x77526a */ if (!fZ) goto L_0077526a;
L_00775264:; BB(0x00775264);
    /* 00775264: mov eax, 1 */ r_eax = 0x1u;
    /* 00775269: ret  */ FN_RET(0x0077524c); r_esp += 4; return;
L_0077526a:; BB(0x0077526a);
    /* 0077526a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077526c: ret  */ FN_RET(0x0077524c); r_esp += 4; return;
L_0077526d:; BB(0x0077526d);
    /* 0077526d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077526f: ret  */ FN_RET(0x0077524c); r_esp += 4; return;
}

void f_00775270(void) /* sub_775270 */
{
    FN_ENTER(0x00775270);
    /* 00775270: movsx eax, word ptr [ecx + 0x334] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x334u));
    /* 00775277: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00775279: jl 0x775290 */ if ((fS!=fO)) goto L_00775290;
L_0077527b:; BB(0x0077527b);
    /* 0077527b: movsx edx, word ptr [ecx + 0x2bc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x2bcu));
    /* 00775282: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00775284: jge 0x77528f */ if ((fS==fO)) goto L_0077528f;
L_00775286:; BB(0x00775286);
    /* 00775286: mov eax, edx */ r_eax = r_edx;
    /* 00775288: mov word ptr [ecx + 0x334], dx */ W16((u32)(r_ecx+0x334u), (u16)r_edx);
L_0077528f:; BB(0x0077528f);
    /* 0077528f: ret  */ FN_RET(0x00775270); r_esp += 4; return;
L_00775290:; BB(0x00775290);
    /* 00775290: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00775292: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00775294: mov word ptr [ecx + 0x334], dx */ W16((u32)(r_ecx+0x334u), (u16)r_edx);
    /* 0077529b: ret  */ FN_RET(0x00775270); r_esp += 4; return;
}

void f_0077529c(void) /* sub_77529C */
{
    FN_ENTER(0x0077529c);
    /* 0077529c: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0077529f: movsx edx, word ptr [ecx + 0x2bc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x2bcu));
    /* 007752a6: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 007752a9: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 007752ac: fmul dword ptr [0x97822c] */ ST(0) = ST(0) * R_F32((u32)(0x97822cu));
    /* 007752b2: fcomp dword ptr [esp + 0xc] */ fx_compare(ST(0), R_F32((u32)(r_esp+0xcu))); FPOP();
    /* 007752b6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007752b8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007752b9: jae 0x7752d2 */ if (!fC) goto L_007752d2;
L_007752bb:; BB(0x007752bb);
    /* 007752bb: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 007752be: or edx, 0x400 */ {  u32 a = r_edx; u32 b = 0x400u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 007752c4: mov dword ptr [ecx + 0x30], edx */ W32((u32)(r_ecx+0x30u), r_edx);
    /* 007752c7: mov eax, 1 */ r_eax = 0x1u;
    /* 007752cc: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007752cf: ret 4 */ FN_RET(0x0077529c); r_esp += 8; return;
L_007752d2:; BB(0x007752d2);
    /* 007752d2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007752d4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007752d7: ret 4 */ FN_RET(0x0077529c); r_esp += 8; return;
}

void f_007752dc(void) /* sub_7752DC */
{
    FN_ENTER(0x007752dc);
    /* 007752dc: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 007752df: test eax, 0x2000000 */ {  u32 a = r_eax; u32 b = 0x2000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007752e4: jne 0x775342 */ if (!fZ) goto L_00775342;
L_007752e6:; BB(0x007752e6);
    /* 007752e6: mov eax, dword ptr [ecx + 0x2e8] */ r_eax = R32((u32)(r_ecx+0x2e8u));
    /* 007752ec: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007752ef: je 0x775345 */ if (fZ) goto L_00775345;
L_007752f1:; BB(0x007752f1);
    /* 007752f1: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007752f4: je 0x77532e */ if (fZ) goto L_0077532e;
L_007752f6:; BB(0x007752f6);
    /* 007752f6: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007752f9: jne 0x775312 */ if (!fZ) goto L_00775312;
L_007752fb:; BB(0x007752fb);
    /* 007752fb: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 007752fd: push 0xe3 */ { u32 v = 0xe3u; r_esp -= 4; W32(r_esp, v); }
    /* 00775302: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 00775306: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00775307: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x77530cu); f_0050b7a4();
    /* 0077530c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0077530f: ret 4 */ FN_RET(0x007752dc); r_esp += 8; return;
L_00775312:; BB(0x00775312);
    /* 00775312: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00775315: jne 0x775342 */ if (!fZ) goto L_00775342;
L_00775317:; BB(0x00775317);
    /* 00775317: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00775319: push 0x10d */ { u32 v = 0x10du; r_esp -= 4; W32(r_esp, v); }
    /* 0077531e: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 00775322: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00775323: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x775328u); f_0050b7a4();
    /* 00775328: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0077532b: ret 4 */ FN_RET(0x007752dc); r_esp += 8; return;
L_0077532e:; BB(0x0077532e);
    /* 0077532e: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00775330: push 0xf2 */ { u32 v = 0xf2u; r_esp -= 4; W32(r_esp, v); }
    /* 00775335: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 00775339: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0077533a: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x77533fu); f_0050b7a4();
    /* 0077533f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_00775342:; BB(0x00775342);
    /* 00775342: ret 4 */ FN_RET(0x007752dc); r_esp += 8; return;
L_00775345:; BB(0x00775345);
    /* 00775345: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00775347: push 0xf1 */ { u32 v = 0xf1u; r_esp -= 4; W32(r_esp, v); }
    /* 0077534c: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 00775350: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00775351: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x775356u); f_0050b7a4();
    /* 00775356: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00775359: ret 4 */ FN_RET(0x007752dc); r_esp += 8; return;
}

void f_0077535c(void) /* sub_77535C */
{
    FN_ENTER(0x0077535c);
    /* 0077535c: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 0077535f: test eax, 0x2000000 */ {  u32 a = r_eax; u32 b = 0x2000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00775364: jne 0x7753ae */ if (!fZ) goto L_007753ae;
L_00775366:; BB(0x00775366);
    /* 00775366: movsx eax, word ptr [ecx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32cu));
    /* 0077536d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00775370: je 0x7753ae */ if (fZ) goto L_007753ae;
L_00775372:; BB(0x00775372);
    /* 00775372: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00775376: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00775378: je 0x7753ae */ if (fZ) goto L_007753ae;
L_0077537a:; BB(0x0077537a);
    /* 0077537a: movsx eax, word ptr [esp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x8u));
    /* 0077537f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00775381: jl 0x7753ae */ if ((fS!=fO)) goto L_007753ae;
L_00775383:; BB(0x00775383);
    /* 00775383: mov eax, dword ptr [0xa942c0] */ r_eax = R32((u32)(0xa942c0u));
    /* 00775388: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077538a: je 0x775397 */ if (fZ) goto L_00775397;
L_0077538c:; BB(0x0077538c);
    /* 0077538c: movzx eax, word ptr [ecx + 0x1c] */ r_eax = (u32)R16((u32)(r_ecx+0x1cu));
    /* 00775390: cmp eax, 0x1000 */ {  u32 a = r_eax; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00775395: jl 0x7753ae */ if ((fS!=fO)) goto L_007753ae;
L_00775397:; BB(0x00775397);
    /* 00775397: movsx eax, word ptr [esp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x8u));
    /* 0077539c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0077539d: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0077539f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007753a1: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 007753a5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007753a6: call 0x78a5e8 */ r_esp -= 4; W32(r_esp, 0x7753abu); f_0078a5e8();
    /* 007753ab: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_007753ae:; BB(0x007753ae);
    /* 007753ae: ret 8 */ FN_RET(0x0077535c); r_esp += 12; return;
}

void f_007753b4(void) /* sub_7753B4 */
{
    FN_ENTER(0x007753b4);
    /* 007753b4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007753b5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007753b6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007753b7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007753b8: sub esp, 0xb0 */ {  u32 a = r_esp; u32 b = 0xb0u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007753be: mov ebp, ecx */ r_ebp = r_ecx;
    /* 007753c0: mov ebx, dword ptr [esp + 0xc4] */ r_ebx = R32((u32)(r_esp+0xc4u));
    /* 007753c7: mov edi, dword ptr [esp + 0xc8] */ r_edi = R32((u32)(r_esp+0xc8u));
    /* 007753ce: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007753d0: je 0x777057 */ if (fZ) goto L_00777057;
L_007753d6:; BB(0x007753d6);
    /* 007753d6: fld dword ptr [edi + 0x1c] */ FPUSH(R_F32((u32)(r_edi+0x1cu)));
    /* 007753d9: fld dword ptr [edi + 0x20] */ FPUSH(R_F32((u32)(r_edi+0x20u)));
    /* 007753dc: fld dword ptr [edi + 0x24] */ FPUSH(R_F32((u32)(r_edi+0x24u)));
L_007753df:; BB(0x007753df);
    /* 007753df: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007753e1: je 0x77706e */ if (fZ) goto L_0077706e;
L_007753e7:; BB(0x007753e7);
    /* 007753e7: movzx edx, word ptr [ebx + 0x1c] */ r_edx = (u32)R16((u32)(r_ebx+0x1cu));
    /* 007753eb: cmp edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007753f1: je 0x777087 */ if (fZ) goto L_00777087;
L_007753f7:; BB(0x007753f7);
    /* 007753f7: movsx esi, word ptr [ebx + 0x116] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebx+0x116u));
    /* 007753fe: movsx edx, word ptr [ebx + 0x118] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x118u));
    /* 00775405: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 00775409: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 0077540c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0077540e: test edx, 0x4000000 */ {  u32 a = r_edx; u32 b = 0x4000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00775414: je 0x77541b */ if (fZ) goto L_0077541b;
L_00775416:; BB(0x00775416);
    /* 00775416: mov ecx, 1 */ r_ecx = 0x1u;
L_0077541b:; BB(0x0077541b);
    /* 0077541b: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077541d: je 0x775429 */ if (fZ) goto L_00775429;
L_0077541f:; BB(0x0077541f);
    /* 0077541f: mov eax, dword ptr [edi + 0x18] */ r_eax = R32((u32)(r_edi+0x18u));
    /* 00775422: test eax, 0x2000000 */ {  u32 a = r_eax; u32 b = 0x2000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00775427: jne 0x775431 */ if (!fZ) goto L_00775431;
L_00775429:; BB(0x00775429);
    /* 00775429: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077542b: je 0x775545 */ if (fZ) goto L_00775545;
L_00775431:; BB(0x00775431);
    /* 00775431: cmp esi, 0xd */ {  u32 a = r_esi; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00775434: ja 0x77551d */ if ((!fC&&!fZ)) goto L_0077551d;
L_0077543a:; BB(0x0077543a);
    /* 0077543a: mov eax, dword ptr [esi*4 + 0x977ef8] */ r_eax = R32((u32)(r_esi*4+0x977ef8u));
    /* 00775441: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0077551d:; BB(0x0077551d);
    /* 0077551d: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0077551f: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00775521: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00775523: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00775525: je 0x775532 */ if (fZ) goto L_00775532;
L_00775527:; BB(0x00775527);
    /* 00775527: mov eax, dword ptr [edi + 0x18] */ r_eax = R32((u32)(r_edi+0x18u));
    /* 0077552a: and eax, 0xfbffffff */ {  u32 a = r_eax; u32 b = 0xfbffffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0077552f: mov dword ptr [edi + 0x18], eax */ W32((u32)(r_edi+0x18u), r_eax);
L_00775532:; BB(0x00775532);
    /* 00775532: fld dword ptr [0x978228] */ FPUSH(R_F32((u32)(0x978228u)));
    /* 00775538: add esp, 0xb0 */ {  u32 a = r_esp; u32 b = 0xb0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0077553e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0077553f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00775540: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00775541: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00775542: ret 8 */ FN_RET(0x007753b4); r_esp += 12; return;
L_00775545:; BB(0x00775545);
    /* 00775545: fstp dword ptr [esp + 0x4c] */ W_F32((u32)(r_esp+0x4cu), ST(0)); FPOP();
    /* 00775549: fstp dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 0077554d: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
    /* 00775551: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00775552: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00775554: call 0x773264 */ r_esp -= 4; W32(r_esp, 0x775559u); f_00773264();
    /* 00775559: movsx eax, word ptr [ebp + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32cu));
    /* 00775560: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00775563: jne 0x775570 */ if (!fZ) goto L_00775570;
L_00775565:; BB(0x00775565);
    /* 00775565: mov edx, 1 */ r_edx = 0x1u;
    /* 0077556a: mov dword ptr [esp + 0x40], edx */ W32((u32)(r_esp+0x40u), r_edx);
    /* 0077556e: jmp 0x7755a4 */ goto L_007755a4;
L_00775570:; BB(0x00775570);
    /* 00775570: movsx edx, word ptr [ebx + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x32cu));
    /* 00775577: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077557a: jne 0x77559e */ if (!fZ) goto L_0077559e;
L_0077557c:; BB(0x0077557c);
    /* 0077557c: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077557f: jne 0x775593 */ if (!fZ) goto L_00775593;
L_00775581:; BB(0x00775581);
    /* 00775581: mov edx, dword ptr [ebx + 0x8fc] */ r_edx = R32((u32)(r_ebx+0x8fcu));
    /* 00775587: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00775589: je 0x775593 */ if (fZ) goto L_00775593;
L_0077558b:; BB(0x0077558b);
    /* 0077558b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0077558d: mov dword ptr [esp + 0x40], edx */ W32((u32)(r_esp+0x40u), r_edx);
    /* 00775591: jmp 0x7755a4 */ goto L_007755a4;
L_00775593:; BB(0x00775593);
    /* 00775593: mov edx, 1 */ r_edx = 0x1u;
    /* 00775598: mov dword ptr [esp + 0x40], edx */ W32((u32)(r_esp+0x40u), r_edx);
    /* 0077559c: jmp 0x7755a4 */ goto L_007755a4;
L_0077559e:; BB(0x0077559e);
    /* 0077559e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007755a0: mov dword ptr [esp + 0x40], edx */ W32((u32)(r_esp+0x40u), r_edx);
L_007755a4:; BB(0x007755a4);
    /* 007755a4: mov edx, dword ptr [0xa9cd68] */ r_edx = R32((u32)(0xa9cd68u));
    /* 007755aa: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007755ad: je 0x777007 */ if (fZ) goto L_00777007;
L_007755b3:; BB(0x007755b3);
    /* 007755b3: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007755b5: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x7755bau); f_007751b0();
    /* 007755ba: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 007755be: fld dword ptr [0x978228] */ FPUSH(R_F32((u32)(0x978228u)));
    /* 007755c4: movzx edx, word ptr [ebp + 0x2d8] */ r_edx = (u32)R16((u32)(r_ebp+0x2d8u));
    /* 007755cb: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 007755cf: cmp edx, 0x1000 */ {  u32 a = r_edx; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007755d5: jl 0x7755e3 */ if ((fS!=fO)) goto L_007755e3;
L_007755d7:; BB(0x007755d7);
    /* 007755d7: fld dword ptr [0x978224] */ FPUSH(R_F32((u32)(0x978224u)));
    /* 007755dd: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 007755e1: jmp 0x775642 */ goto L_00775642;
L_007755e3:; BB(0x007755e3);
    /* 007755e3: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 007755e5: lea ecx, [ebx + 0xdf8] */ r_ecx = (u32)(r_ebx+0xdf8u);
    /* 007755eb: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x7755f0u); f_0069792c();
    /* 007755f0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007755f2: je 0x775638 */ if (fZ) goto L_00775638;
L_007755f4:; BB(0x007755f4);
    /* 007755f4: movzx edx, byte ptr [eax + 0xf3] */ r_edx = (u32)R8((u32)(r_eax+0xf3u));
    /* 007755fb: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007755fe: jl 0x775620 */ if ((fS!=fO)) goto L_00775620;
L_00775600:; BB(0x00775600);
    /* 00775600: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00775603: jg 0x775611 */ if ((!fZ&&fS==fO)) goto L_00775611;
L_00775605:; BB(0x00775605);
    /* 00775605: fld dword ptr [0x978220] */ FPUSH(R_F32((u32)(0x978220u)));
    /* 0077560b: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 0077560f: jmp 0x775642 */ goto L_00775642;
L_00775611:; BB(0x00775611);
    /* 00775611: cmp edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00775614: je 0x77562c */ if (fZ) goto L_0077562c;
L_00775616:; BB(0x00775616);
    /* 00775616: cmp edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00775619: jl 0x775620 */ if ((fS!=fO)) goto L_00775620;
L_0077561b:; BB(0x0077561b);
    /* 0077561b: cmp edx, 9 */ {  u32 a = r_edx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0077561e: jle 0x77562c */ if ((fZ||fS!=fO)) goto L_0077562c;
L_00775620:; BB(0x00775620);
    /* 00775620: fld dword ptr [0x978224] */ FPUSH(R_F32((u32)(0x978224u)));
    /* 00775626: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 0077562a: jmp 0x775642 */ goto L_00775642;
L_0077562c:; BB(0x0077562c);
    /* 0077562c: fld dword ptr [0x97821c] */ FPUSH(R_F32((u32)(0x97821cu)));
    /* 00775632: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 00775636: jmp 0x775642 */ goto L_00775642;
L_00775638:; BB(0x00775638);
    /* 00775638: fld dword ptr [0x978224] */ FPUSH(R_F32((u32)(0x978224u)));
    /* 0077563e: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
L_00775642:; BB(0x00775642);
    /* 00775642: add esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00775645: cmp esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00775648: ja 0x776ee1 */ if ((!fC&&!fZ)) goto L_00776ee1;
L_0077564e:; BB(0x0077564e);
    /* 0077564e: mov edx, dword ptr [esi*4 + 0x977f30] */ r_edx = R32((u32)(r_esi*4+0x977f30u));
    /* 00775655: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
L_00776ee1:; BB(0x00776ee1);
    /* 00776ee1: fld dword ptr [0x978228] */ FPUSH(R_F32((u32)(0x978228u)));
    /* 00776ee7: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 00776eeb: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00776eed: mov edx, dword ptr [esp + 0x40] */ r_edx = R32((u32)(r_esp+0x40u));
    /* 00776ef1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00776ef3: jne 0x776f02 */ if (!fZ) goto L_00776f02;
L_00776ef5:; BB(0x00776ef5);
    /* 00776ef5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00776ef7: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00776efa: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00776efc: call dword ptr [edx + 0x130] */ { u32 t = R32((u32)(r_edx+0x130u)); r_esp -= 4; W32(r_esp, 0x776f02u); call_ind(t); }
L_00776f02:; BB(0x00776f02);
    /* 00776f02: movsx edx, word ptr [ebp + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x32cu));
    /* 00776f09: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00776f0c: jne 0x776f51 */ if (!fZ) goto L_00776f51;
L_00776f0e:; BB(0x00776f0e);
    /* 00776f0e: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 00776f12: fmul dword ptr [0x978208] */ ST(0) = ST(0) * R_F32((u32)(0x978208u));
    /* 00776f18: fnstcw word ptr [esp + 0x14] */ W16((u32)(r_esp+0x14u), fcw);
    /* 00776f1c: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 00776f21: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00776f26: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 00776f2a: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 00776f2e: fistp dword ptr [esp + 0x24] */ W32((u32)(r_esp+0x24u), (u32)fx_int32(ST(0))); FPOP();
    /* 00776f32: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 00776f36: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00776f38: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 00776f3c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00776f3d: call 0x69b4f0 */ r_esp -= 4; W32(r_esp, 0x776f42u); f_0069b4f0();
    /* 00776f42: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00776f45: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00776f46: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00776f49: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00776f4b: call dword ptr [edx + 0x134] */ { u32 t = R32((u32)(r_edx+0x134u)); r_esp -= 4; W32(r_esp, 0x776f51u); call_ind(t); }
L_00776f51:; BB(0x00776f51);
    /* 00776f51: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00776f52: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00776f53: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00776f55: call 0x773ab0 */ r_esp -= 4; W32(r_esp, 0x776f5au); f_00773ab0();
    /* 00776f5a: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 00776f5e: add esp, 0xb0 */ {  u32 a = r_esp; u32 b = 0xb0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00776f64: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00776f65: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00776f66: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00776f67: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00776f68: ret 8 */ FN_RET(0x007753b4); r_esp += 12; return;
L_00777007:; BB(0x00777007);
    /* 00777007: movzx edx, word ptr [ebp + 0x2d8] */ r_edx = (u32)R16((u32)(r_ebp+0x2d8u));
    /* 0077700e: cmp edx, 0x1000 */ {  u32 a = r_edx; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00777014: jge 0x7755b3 */ if ((fS==fO)) goto L_007755b3;
L_0077701a:; BB(0x0077701a);
    /* 0077701a: mov edx, dword ptr [ebx + 0x2e8] */ r_edx = R32((u32)(r_ebx+0x2e8u));
    /* 00777020: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00777023: je 0x7755b3 */ if (fZ) goto L_007755b3;
L_00777029:; BB(0x00777029);
    /* 00777029: cmp esi, 0xb */ {  u32 a = r_esi; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077702c: je 0x7755b3 */ if (fZ) goto L_007755b3;
L_00777032:; BB(0x00777032);
    /* 00777032: cmp esi, 9 */ {  u32 a = r_esi; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00777035: je 0x7755b3 */ if (fZ) goto L_007755b3;
L_0077703b:; BB(0x0077703b);
    /* 0077703b: cmp esi, 0xa */ {  u32 a = r_esi; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077703e: je 0x7755b3 */ if (fZ) goto L_007755b3;
L_00777044:; BB(0x00777044);
    /* 00777044: mov edx, dword ptr [esp + 0x2c] */ r_edx = R32((u32)(r_esp+0x2cu));
    /* 00777048: add edx, 0x1e */ {  u32 a = r_edx; u32 b = 0x1eu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0077704b: movsx edx, dx */ r_edx = (u32)(i32)(i16)(u16)r_edx;
    /* 0077704e: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 00777052: jmp 0x7755b3 */ goto L_007755b3;
L_00777057:; BB(0x00777057);
    /* 00777057: fld dword ptr [ebp + 0x300] */ FPUSH(R_F32((u32)(r_ebp+0x300u)));
    /* 0077705d: fld dword ptr [ebp + 0x304] */ FPUSH(R_F32((u32)(r_ebp+0x304u)));
    /* 00777063: fld dword ptr [ebp + 0x308] */ FPUSH(R_F32((u32)(r_ebp+0x308u)));
    /* 00777069: jmp 0x7753df */ goto L_007753df;
L_0077706e:; BB(0x0077706e);
    /* 0077706e: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00777070: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00777072: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00777074: fld dword ptr [0x978228] */ FPUSH(R_F32((u32)(0x978228u)));
    /* 0077707a: add esp, 0xb0 */ {  u32 a = r_esp; u32 b = 0xb0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00777080: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00777081: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00777082: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00777083: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00777084: ret 8 */ FN_RET(0x007753b4); r_esp += 12; return;
L_00777087:; BB(0x00777087);
    /* 00777087: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00777089: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0077708b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0077708d: fld dword ptr [0x978228] */ FPUSH(R_F32((u32)(0x978228u)));
    /* 00777093: add esp, 0xb0 */ {  u32 a = r_esp; u32 b = 0xb0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00777099: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0077709a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0077709b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0077709c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0077709d: ret 8 */ FN_RET(0x007753b4); r_esp += 12; return;
}

void f_00775443(void)
{
    FN_ENTER(0x00775443);
    /* 00775443: fstp dword ptr [esp + 0x4c] */ W_F32((u32)(r_esp+0x4cu), ST(0)); FPOP();
    /* 00775447: fstp dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 0077544b: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
    /* 0077544f: jmp 0x775495 */ goto L_00775495;
L_00775495:; BB(0x00775495);
    /* 00775495: lea eax, [esp + 0x44] */ r_eax = (u32)(r_esp+0x44u);
    /* 00775499: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0077549a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0077549c: call 0x777450 */ r_esp -= 4; W32(r_esp, 0x7754a1u); f_00777450();
    /* 007754a1: jmp 0x775523 */ goto L_00775523;
L_00775523:; BB(0x00775523);
    /* 00775523: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00775525: je 0x775532 */ if (fZ) goto L_00775532;
L_00775527:; BB(0x00775527);
    /* 00775527: mov eax, dword ptr [edi + 0x18] */ r_eax = R32((u32)(r_edi+0x18u));
    /* 0077552a: and eax, 0xfbffffff */ {  u32 a = r_eax; u32 b = 0xfbffffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0077552f: mov dword ptr [edi + 0x18], eax */ W32((u32)(r_edi+0x18u), r_eax);
L_00775532:; BB(0x00775532);
    /* 00775532: fld dword ptr [0x978228] */ FPUSH(R_F32((u32)(0x978228u)));
    /* 00775538: add esp, 0xb0 */ {  u32 a = r_esp; u32 b = 0xb0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0077553e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0077553f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00775540: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00775541: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00775542: ret 8 */ FN_RET(0x00775443); r_esp += 12; return;
}

void f_00775451(void)
{
    FN_ENTER(0x00775451);
    /* 00775451: fstp dword ptr [esp + 0x4c] */ W_F32((u32)(r_esp+0x4cu), ST(0)); FPOP();
    /* 00775455: fstp dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 00775459: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
    /* 0077545d: jmp 0x775495 */ goto L_00775495;
L_00775495:; BB(0x00775495);
    /* 00775495: lea eax, [esp + 0x44] */ r_eax = (u32)(r_esp+0x44u);
    /* 00775499: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0077549a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0077549c: call 0x777450 */ r_esp -= 4; W32(r_esp, 0x7754a1u); f_00777450();
    /* 007754a1: jmp 0x775523 */ goto L_00775523;
L_00775523:; BB(0x00775523);
    /* 00775523: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00775525: je 0x775532 */ if (fZ) goto L_00775532;
L_00775527:; BB(0x00775527);
    /* 00775527: mov eax, dword ptr [edi + 0x18] */ r_eax = R32((u32)(r_edi+0x18u));
    /* 0077552a: and eax, 0xfbffffff */ {  u32 a = r_eax; u32 b = 0xfbffffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0077552f: mov dword ptr [edi + 0x18], eax */ W32((u32)(r_edi+0x18u), r_eax);
L_00775532:; BB(0x00775532);
    /* 00775532: fld dword ptr [0x978228] */ FPUSH(R_F32((u32)(0x978228u)));
    /* 00775538: add esp, 0xb0 */ {  u32 a = r_esp; u32 b = 0xb0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0077553e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0077553f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00775540: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00775541: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00775542: ret 8 */ FN_RET(0x00775451); r_esp += 12; return;
}

void f_0077545f(void)
{
    FN_ENTER(0x0077545f);
    /* 0077545f: fstp dword ptr [esp + 0x4c] */ W_F32((u32)(r_esp+0x4cu), ST(0)); FPOP();
    /* 00775463: fstp dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 00775467: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
    /* 0077546b: jmp 0x775495 */ goto L_00775495;
L_00775495:; BB(0x00775495);
    /* 00775495: lea eax, [esp + 0x44] */ r_eax = (u32)(r_esp+0x44u);
    /* 00775499: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0077549a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0077549c: call 0x777450 */ r_esp -= 4; W32(r_esp, 0x7754a1u); f_00777450();
    /* 007754a1: jmp 0x775523 */ goto L_00775523;
L_00775523:; BB(0x00775523);
    /* 00775523: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00775525: je 0x775532 */ if (fZ) goto L_00775532;
L_00775527:; BB(0x00775527);
    /* 00775527: mov eax, dword ptr [edi + 0x18] */ r_eax = R32((u32)(r_edi+0x18u));
    /* 0077552a: and eax, 0xfbffffff */ {  u32 a = r_eax; u32 b = 0xfbffffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0077552f: mov dword ptr [edi + 0x18], eax */ W32((u32)(r_edi+0x18u), r_eax);
L_00775532:; BB(0x00775532);
    /* 00775532: fld dword ptr [0x978228] */ FPUSH(R_F32((u32)(0x978228u)));
    /* 00775538: add esp, 0xb0 */ {  u32 a = r_esp; u32 b = 0xb0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0077553e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0077553f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00775540: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00775541: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00775542: ret 8 */ FN_RET(0x0077545f); r_esp += 12; return;
}

void f_0077546d(void)
{
    FN_ENTER(0x0077546d);
    /* 0077546d: fstp dword ptr [esp + 0x4c] */ W_F32((u32)(r_esp+0x4cu), ST(0)); FPOP();
    /* 00775471: fstp dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 00775475: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
    /* 00775479: jmp 0x775495 */ goto L_00775495;
L_00775495:; BB(0x00775495);
    /* 00775495: lea eax, [esp + 0x44] */ r_eax = (u32)(r_esp+0x44u);
    /* 00775499: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0077549a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0077549c: call 0x777450 */ r_esp -= 4; W32(r_esp, 0x7754a1u); f_00777450();
    /* 007754a1: jmp 0x775523 */ goto L_00775523;
L_00775523:; BB(0x00775523);
    /* 00775523: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00775525: je 0x775532 */ if (fZ) goto L_00775532;
L_00775527:; BB(0x00775527);
    /* 00775527: mov eax, dword ptr [edi + 0x18] */ r_eax = R32((u32)(r_edi+0x18u));
    /* 0077552a: and eax, 0xfbffffff */ {  u32 a = r_eax; u32 b = 0xfbffffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0077552f: mov dword ptr [edi + 0x18], eax */ W32((u32)(r_edi+0x18u), r_eax);
L_00775532:; BB(0x00775532);
    /* 00775532: fld dword ptr [0x978228] */ FPUSH(R_F32((u32)(0x978228u)));
    /* 00775538: add esp, 0xb0 */ {  u32 a = r_esp; u32 b = 0xb0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0077553e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0077553f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00775540: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00775541: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00775542: ret 8 */ FN_RET(0x0077546d); r_esp += 12; return;
}

void f_0077547b(void)
{
    FN_ENTER(0x0077547b);
    /* 0077547b: fstp dword ptr [esp + 0x4c] */ W_F32((u32)(r_esp+0x4cu), ST(0)); FPOP();
    /* 0077547f: fstp dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 00775483: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
    /* 00775487: jmp 0x775495 */ goto L_00775495;
L_00775495:; BB(0x00775495);
    /* 00775495: lea eax, [esp + 0x44] */ r_eax = (u32)(r_esp+0x44u);
    /* 00775499: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0077549a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0077549c: call 0x777450 */ r_esp -= 4; W32(r_esp, 0x7754a1u); f_00777450();
    /* 007754a1: jmp 0x775523 */ goto L_00775523;
L_00775523:; BB(0x00775523);
    /* 00775523: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00775525: je 0x775532 */ if (fZ) goto L_00775532;
L_00775527:; BB(0x00775527);
    /* 00775527: mov eax, dword ptr [edi + 0x18] */ r_eax = R32((u32)(r_edi+0x18u));
    /* 0077552a: and eax, 0xfbffffff */ {  u32 a = r_eax; u32 b = 0xfbffffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0077552f: mov dword ptr [edi + 0x18], eax */ W32((u32)(r_edi+0x18u), r_eax);
L_00775532:; BB(0x00775532);
    /* 00775532: fld dword ptr [0x978228] */ FPUSH(R_F32((u32)(0x978228u)));
    /* 00775538: add esp, 0xb0 */ {  u32 a = r_esp; u32 b = 0xb0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0077553e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0077553f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00775540: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00775541: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00775542: ret 8 */ FN_RET(0x0077547b); r_esp += 12; return;
}

void f_00775489(void)
{
    FN_ENTER(0x00775489);
    /* 00775489: fstp dword ptr [esp + 0x4c] */ W_F32((u32)(r_esp+0x4cu), ST(0)); FPOP();
    /* 0077548d: fstp dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 00775491: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
    /* 00775495: lea eax, [esp + 0x44] */ r_eax = (u32)(r_esp+0x44u);
    /* 00775499: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0077549a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0077549c: call 0x777450 */ r_esp -= 4; W32(r_esp, 0x7754a1u); f_00777450();
    /* 007754a1: jmp 0x775523 */ goto L_00775523;
L_00775523:; BB(0x00775523);
    /* 00775523: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00775525: je 0x775532 */ if (fZ) goto L_00775532;
L_00775527:; BB(0x00775527);
    /* 00775527: mov eax, dword ptr [edi + 0x18] */ r_eax = R32((u32)(r_edi+0x18u));
    /* 0077552a: and eax, 0xfbffffff */ {  u32 a = r_eax; u32 b = 0xfbffffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0077552f: mov dword ptr [edi + 0x18], eax */ W32((u32)(r_edi+0x18u), r_eax);
L_00775532:; BB(0x00775532);
    /* 00775532: fld dword ptr [0x978228] */ FPUSH(R_F32((u32)(0x978228u)));
    /* 00775538: add esp, 0xb0 */ {  u32 a = r_esp; u32 b = 0xb0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0077553e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0077553f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00775540: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00775541: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00775542: ret 8 */ FN_RET(0x00775489); r_esp += 12; return;
}

void f_007754a6(void)
{
    FN_ENTER(0x007754a6);
    /* 007754a6: test edx, 0x2000000 */ {  u32 a = r_edx; u32 b = 0x2000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007754ac: je 0x7754b6 */ if (fZ) goto L_007754b6;
L_007754ae:; BB(0x007754ae);
    /* 007754ae: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 007754b0: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 007754b2: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007754b4: jmp 0x775523 */ goto L_00775523;
L_007754b6:; BB(0x007754b6);
    /* 007754b6: movsx eax, word ptr [ebp + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32cu));
    /* 007754bd: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007754c0: jne 0x7754ca */ if (!fZ) goto L_007754ca;
L_007754c2:; BB(0x007754c2);
    /* 007754c2: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 007754c4: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 007754c6: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007754c8: jmp 0x775523 */ goto L_00775523;
L_007754ca:; BB(0x007754ca);
    /* 007754ca: mov eax, dword ptr [0xa942c0] */ r_eax = R32((u32)(0xa942c0u));
    /* 007754cf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007754d1: je 0x7754f4 */ if (fZ) goto L_007754f4;
L_007754d3:; BB(0x007754d3);
    /* 007754d3: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 007754d7: cmp eax, 0x1000 */ {  u32 a = r_eax; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007754dc: jge 0x7754e6 */ if ((fS==fO)) goto L_007754e6;
L_007754de:; BB(0x007754de);
    /* 007754de: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 007754e0: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 007754e2: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007754e4: jmp 0x775523 */ goto L_00775523;
L_007754e6:; BB(0x007754e6);
    /* 007754e6: fstp dword ptr [esp + 0x4c] */ W_F32((u32)(r_esp+0x4cu), ST(0)); FPOP();
    /* 007754ea: fstp dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 007754ee: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
    /* 007754f2: jmp 0x775500 */ goto L_00775500;
L_007754f4:; BB(0x007754f4);
    /* 007754f4: fstp dword ptr [esp + 0x4c] */ W_F32((u32)(r_esp+0x4cu), ST(0)); FPOP();
    /* 007754f8: fstp dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 007754fc: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
L_00775500:; BB(0x00775500);
    /* 00775500: lea eax, [esp + 0x44] */ r_eax = (u32)(r_esp+0x44u);
    /* 00775504: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00775506: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00775508: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0077550a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0077550b: call 0x78a5e8 */ r_esp -= 4; W32(r_esp, 0x775510u); f_0078a5e8();
    /* 00775510: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00775513: jmp 0x775523 */ goto L_00775523;
L_00775523:; BB(0x00775523);
    /* 00775523: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00775525: je 0x775532 */ if (fZ) goto L_00775532;
L_00775527:; BB(0x00775527);
    /* 00775527: mov eax, dword ptr [edi + 0x18] */ r_eax = R32((u32)(r_edi+0x18u));
    /* 0077552a: and eax, 0xfbffffff */ {  u32 a = r_eax; u32 b = 0xfbffffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0077552f: mov dword ptr [edi + 0x18], eax */ W32((u32)(r_edi+0x18u), r_eax);
L_00775532:; BB(0x00775532);
    /* 00775532: fld dword ptr [0x978228] */ FPUSH(R_F32((u32)(0x978228u)));
    /* 00775538: add esp, 0xb0 */ {  u32 a = r_esp; u32 b = 0xb0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0077553e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0077553f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00775540: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00775541: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00775542: ret 8 */ FN_RET(0x007754a6); r_esp += 12; return;
}

void f_00775515(void)
{
    FN_ENTER(0x00775515);
    /* 00775515: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00775517: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00775519: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0077551b: jmp 0x775523 */ goto L_00775523;
L_00775523:; BB(0x00775523);
    /* 00775523: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00775525: je 0x775532 */ if (fZ) goto L_00775532;
L_00775527:; BB(0x00775527);
    /* 00775527: mov eax, dword ptr [edi + 0x18] */ r_eax = R32((u32)(r_edi+0x18u));
    /* 0077552a: and eax, 0xfbffffff */ {  u32 a = r_eax; u32 b = 0xfbffffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0077552f: mov dword ptr [edi + 0x18], eax */ W32((u32)(r_edi+0x18u), r_eax);
L_00775532:; BB(0x00775532);
    /* 00775532: fld dword ptr [0x978228] */ FPUSH(R_F32((u32)(0x978228u)));
    /* 00775538: add esp, 0xb0 */ {  u32 a = r_esp; u32 b = 0xb0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0077553e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0077553f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00775540: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00775541: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00775542: ret 8 */ FN_RET(0x00775515); r_esp += 12; return;
}

void f_00775657(void)
{
    FN_ENTER(0x00775657);
    /* 00775657: call 0x807db8 */ r_esp -= 4; W32(r_esp, 0x77565cu); f_00807db8();
    /* 0077565c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077565e: jne 0x7757cd */ if (!fZ) goto L_007757cd;
L_00775664:; BB(0x00775664);
    /* 00775664: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 00775668: cmp edx, 0x1000 */ {  u32 a = r_edx; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0077566e: jl 0x77579c */ if ((fS!=fO)) goto L_0077579c;
L_00775674:; BB(0x00775674);
    /* 00775674: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 00775678: fcomp dword ptr [0x978220] */ fx_compare(ST(0), R_F32((u32)(0x978220u))); FPOP();
    /* 0077567e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00775680: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00775681: jae 0x77576b */ if (!fC) goto L_0077576b;
L_00775687:; BB(0x00775687);
    /* 00775687: fld dword ptr [0x978224] */ FPUSH(R_F32((u32)(0x978224u)));
    /* 0077568d: mov esi, dword ptr [esp + 0x2c] */ r_esi = R32((u32)(r_esp+0x2cu));
    /* 00775691: mov edi, dword ptr [esp + 0x40] */ r_edi = R32((u32)(r_esp+0x40u));
    /* 00775695: movsx edx, word ptr [ebp + 0x334] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x334u));
    /* 0077569c: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 007756a0: fild dword ptr [esp + 4] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x4u)));
    /* 007756a4: mov dword ptr [esp + 0xc], esi */ W32((u32)(r_esp+0xcu), r_esi);
    /* 007756a8: fild dword ptr [esp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_esp+0xcu)));
    /* 007756ac: fmul dword ptr [0x978218] */ ST(0) = ST(0) * R_F32((u32)(0x978218u));
    /* 007756b2: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 007756b4: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 007756b6: fmul dword ptr [esp + 0x38] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x38u));
    /* 007756ba: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 007756bc: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007756be: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007756bf: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007756c1: jae 0x7756c5 */ if (!fC) goto L_007756c5;
L_007756c3:; BB(0x007756c3);
    /* 007756c3: fst st(1) */ ST(1) = ST(0);
L_007756c5:; BB(0x007756c5);
    /* 007756c5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007756c7: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 007756cb: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007756cd: je 0x7756fa */ if (fZ) goto L_007756fa;
L_007756cf:; BB(0x007756cf);
    /* 007756cf: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 007756d3: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 007756d6: fnstcw word ptr [esp + 0x14] */ W16((u32)(r_esp+0x14u), fcw);
    /* 007756da: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 007756df: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007756e4: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 007756e8: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 007756ec: fistp dword ptr [esp + 0x24] */ W32((u32)(r_esp+0x24u), (u32)fx_int32(ST(0))); FPOP();
    /* 007756f0: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 007756f4: mov esi, dword ptr [esp + 0x24] */ r_esi = R32((u32)(r_esp+0x24u));
    /* 007756f8: jmp 0x775740 */ goto L_00775740;
L_007756fa:; BB(0x007756fa);
    /* 007756fa: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 007756fe: fnstcw word ptr [esp + 0x14] */ W16((u32)(r_esp+0x14u), fcw);
    /* 00775702: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 00775707: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0077570c: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 00775710: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 00775714: fistp dword ptr [esp + 0x24] */ W32((u32)(r_esp+0x24u), (u32)fx_int32(ST(0))); FPOP();
    /* 00775718: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 0077571c: mov esi, dword ptr [esp + 0x24] */ r_esi = R32((u32)(r_esp+0x24u));
    /* 00775720: movsx edx, si */ r_edx = (u32)(i32)(i16)(u16)r_esi;
    /* 00775723: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00775724: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00775726: call 0x777414 */ r_esp -= 4; W32(r_esp, 0x77572bu); f_00777414();
    /* 0077572b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0077572d: call 0x775270 */ r_esp -= 4; W32(r_esp, 0x775732u); f_00775270();
    /* 00775732: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 00775735: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00775737: jle 0x776f6b */ if ((fZ||fS!=fO)) goto L_00776f6b;
L_0077573d:; BB(0x0077573d);
    /* 0077573d: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
L_00775740:; BB(0x00775740);
    /* 00775740: or edx, 0x200 */ {  u32 a = r_edx; u32 b = 0x200u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00775746: test edx, 0x2000000 */ {  u32 a = r_edx; u32 b = 0x2000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077574c: mov dword ptr [ebp + 0x30], edx */ W32((u32)(r_ebp+0x30u), r_edx);
    /* 0077574f: jne 0x776eed */ if (!fZ) goto L_00776eed;
L_00775755:; BB(0x00775755);
    /* 00775755: lea edx, [esp + 0x44] */ r_edx = (u32)(r_esp+0x44u);
    /* 00775759: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0077575b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0077575c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0077575d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0077575e: call 0x5ce89c */ r_esp -= 4; W32(r_esp, 0x775763u); f_005ce89c();
    /* 00775763: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00775766: jmp 0x776eed */ goto L_00776eed;
L_0077576b:; BB(0x0077576b);
    /* 0077576b: fld dword ptr [0x978228] */ FPUSH(R_F32((u32)(0x978228u)));
    /* 00775771: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 00775775: lea edx, [esp + 0x44] */ r_edx = (u32)(r_esp+0x44u);
    /* 00775779: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0077577a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0077577c: call 0x777450 */ r_esp -= 4; W32(r_esp, 0x775781u); f_00777450();
    /* 00775781: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00775783: je 0x776f79 */ if (fZ) goto L_00776f79;
L_00775789:; BB(0x00775789);
    /* 00775789: mov edx, dword ptr [edi + 0x18] */ r_edx = R32((u32)(r_edi+0x18u));
    /* 0077578c: and edx, 0xfbffffff */ {  u32 a = r_edx; u32 b = 0xfbffffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00775792: mov dword ptr [edi + 0x18], edx */ W32((u32)(r_edi+0x18u), r_edx);
    /* 00775795: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00775797: jmp 0x776eed */ goto L_00776eed;
L_0077579c:; BB(0x0077579c);
    /* 0077579c: fld dword ptr [0x978228] */ FPUSH(R_F32((u32)(0x978228u)));
    /* 007757a2: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 007757a6: lea edx, [esp + 0x44] */ r_edx = (u32)(r_esp+0x44u);
    /* 007757aa: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007757ab: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007757ad: call 0x777450 */ r_esp -= 4; W32(r_esp, 0x7757b2u); f_00777450();
    /* 007757b2: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007757b4: je 0x776f80 */ if (fZ) goto L_00776f80;
L_007757ba:; BB(0x007757ba);
    /* 007757ba: mov edx, dword ptr [edi + 0x18] */ r_edx = R32((u32)(r_edi+0x18u));
    /* 007757bd: and edx, 0xfbffffff */ {  u32 a = r_edx; u32 b = 0xfbffffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 007757c3: mov dword ptr [edi + 0x18], edx */ W32((u32)(r_edi+0x18u), r_edx);
    /* 007757c6: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 007757c8: jmp 0x776eed */ goto L_00776eed;
L_007757cd:; BB(0x007757cd);
    /* 007757cd: fld dword ptr [0x978228] */ FPUSH(R_F32((u32)(0x978228u)));
    /* 007757d3: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 007757d7: lea edx, [esp + 0x44] */ r_edx = (u32)(r_esp+0x44u);
    /* 007757db: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007757dc: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007757de: call 0x777450 */ r_esp -= 4; W32(r_esp, 0x7757e3u); f_00777450();
    /* 007757e3: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007757e5: je 0x776f87 */ if (fZ) goto L_00776f87;
L_007757eb:; BB(0x007757eb);
    /* 007757eb: mov edx, dword ptr [edi + 0x18] */ r_edx = R32((u32)(r_edi+0x18u));
    /* 007757ee: and edx, 0xfbffffff */ {  u32 a = r_edx; u32 b = 0xfbffffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 007757f4: mov dword ptr [edi + 0x18], edx */ W32((u32)(r_edi+0x18u), r_edx);
    /* 007757f7: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 007757f9: jmp 0x776eed */ goto L_00776eed;
L_00776eed:; BB(0x00776eed);
    /* 00776eed: mov edx, dword ptr [esp + 0x40] */ r_edx = R32((u32)(r_esp+0x40u));
    /* 00776ef1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00776ef3: jne 0x776f02 */ if (!fZ) goto L_00776f02;
L_00776ef5:; BB(0x00776ef5);
    /* 00776ef5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00776ef7: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00776efa: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00776efc: call dword ptr [edx + 0x130] */ { u32 t = R32((u32)(r_edx+0x130u)); r_esp -= 4; W32(r_esp, 0x776f02u); call_ind(t); }
L_00776f02:; BB(0x00776f02);
    /* 00776f02: movsx edx, word ptr [ebp + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x32cu));
    /* 00776f09: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00776f0c: jne 0x776f51 */ if (!fZ) goto L_00776f51;
L_00776f0e:; BB(0x00776f0e);
    /* 00776f0e: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 00776f12: fmul dword ptr [0x978208] */ ST(0) = ST(0) * R_F32((u32)(0x978208u));
    /* 00776f18: fnstcw word ptr [esp + 0x14] */ W16((u32)(r_esp+0x14u), fcw);
    /* 00776f1c: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 00776f21: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00776f26: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 00776f2a: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 00776f2e: fistp dword ptr [esp + 0x24] */ W32((u32)(r_esp+0x24u), (u32)fx_int32(ST(0))); FPOP();
    /* 00776f32: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 00776f36: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00776f38: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 00776f3c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00776f3d: call 0x69b4f0 */ r_esp -= 4; W32(r_esp, 0x776f42u); f_0069b4f0();
    /* 00776f42: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00776f45: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00776f46: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00776f49: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00776f4b: call dword ptr [edx + 0x134] */ { u32 t = R32((u32)(r_edx+0x134u)); r_esp -= 4; W32(r_esp, 0x776f51u); call_ind(t); }
L_00776f51:; BB(0x00776f51);
    /* 00776f51: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00776f52: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00776f53: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00776f55: call 0x773ab0 */ r_esp -= 4; W32(r_esp, 0x776f5au); f_00773ab0();
    /* 00776f5a: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 00776f5e: add esp, 0xb0 */ {  u32 a = r_esp; u32 b = 0xb0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00776f64: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00776f65: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00776f66: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00776f67: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00776f68: ret 8 */ FN_RET(0x00775657); r_esp += 12; return;
L_00776f6b:; BB(0x00776f6b);
    /* 00776f6b: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 00776f6e: or edx, 0x800 */ {  u32 a = r_edx; u32 b = 0x800u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00776f74: jmp 0x775740 */ goto L_00775740;
L_00776f79:; BB(0x00776f79);
    /* 00776f79: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00776f7b: jmp 0x776eed */ goto L_00776eed;
L_00776f80:; BB(0x00776f80);
    /* 00776f80: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00776f82: jmp 0x776eed */ goto L_00776eed;
L_00776f87:; BB(0x00776f87);
    /* 00776f87: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00776f89: jmp 0x776eed */ goto L_00776eed;
}

void f_007757fe(void)
{
    FN_ENTER(0x007757fe);
    /* 007757fe: fld dword ptr [0x978228] */ FPUSH(R_F32((u32)(0x978228u)));
    /* 00775804: mov edx, dword ptr [ebp + 0x2b4] */ r_edx = R32((u32)(r_ebp+0x2b4u));
    /* 0077580a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077580c: je 0x776f8e */ if (fZ) goto L_00776f8e;
L_00775812:; BB(0x00775812);
    /* 00775812: mov esi, dword ptr [esp + 0x2c] */ r_esi = R32((u32)(r_esp+0x2cu));
    /* 00775816: movsx edx, word ptr [edx + 0xe] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edx+0xeu));
    /* 0077581a: sub esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0077581c: mov dword ptr [esp + 0xc], esi */ W32((u32)(r_esp+0xcu), r_esi);
    /* 00775820: fild dword ptr [esp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_esp+0xcu)));
    /* 00775824: fmul dword ptr [0x978214] */ ST(0) = ST(0) * R_F32((u32)(0x978214u));
    /* 0077582a: fmul dword ptr [esp + 0x38] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x38u));
    /* 0077582e: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
L_00775832:; BB(0x00775832);
    /* 00775832: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 00775836: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00775838: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0077583a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0077583c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0077583d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0077583f: jae 0x775843 */ if (!fC) goto L_00775843;
L_00775841:; BB(0x00775841);
    /* 00775841: fst st(1) */ ST(1) = ST(0);
L_00775843:; BB(0x00775843);
    /* 00775843: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00775845: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 00775849: call 0x777174 */ r_esp -= 4; W32(r_esp, 0x77584eu); f_00777174();
    /* 0077584e: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 00775852: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00775854: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 00775858: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0077585a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0077585c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0077585d: jae 0x7758a0 */ if (!fC) goto L_007758a0;
L_0077585f:; BB(0x0077585f);
    /* 0077585f: mov dword ptr [esp + 0x50], 0x12 */ W32((u32)(r_esp+0x50u), 0x12u);
    /* 00775867: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00775869: mov dword ptr [esp + 0x54], edx */ W32((u32)(r_esp+0x54u), r_edx);
    /* 0077586d: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00775870: mov esi, 0xffffffff */ r_esi = 0xffffffffu;
    /* 00775875: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00775876: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00775878: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00775879: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0077587a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0077587c: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 0077587e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0077587f: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x775882u); call_ind(t); }
    /* 00775882: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00775884: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 00775887: test edx, 0x2000000 */ {  u32 a = r_edx; u32 b = 0x2000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077588d: jne 0x7758a0 */ if (!fZ) goto L_007758a0;
L_0077588f:; BB(0x0077588f);
    /* 0077588f: lea edx, [esp + 0x44] */ r_edx = (u32)(r_esp+0x44u);
    /* 00775893: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00775895: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00775896: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00775897: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00775898: call 0x5ce89c */ r_esp -= 4; W32(r_esp, 0x77589du); f_005ce89c();
    /* 0077589d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_007758a0:; BB(0x007758a0);
    /* 007758a0: push 0x3f19999a */ { u32 v = 0x3f19999au; r_esp -= 4; W32(r_esp, v); }
    /* 007758a5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007758a6: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 007758a9: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007758ab: call dword ptr [edx + 0x5c] */ { u32 t = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, 0x7758aeu); call_ind(t); }
    /* 007758ae: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007758b0: fld dword ptr [0x978228] */ FPUSH(R_F32((u32)(0x978228u)));
    /* 007758b6: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 007758ba: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 007758bc: jmp 0x776eed */ goto L_00776eed;
L_00776eed:; BB(0x00776eed);
    /* 00776eed: mov edx, dword ptr [esp + 0x40] */ r_edx = R32((u32)(r_esp+0x40u));
    /* 00776ef1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00776ef3: jne 0x776f02 */ if (!fZ) goto L_00776f02;
L_00776ef5:; BB(0x00776ef5);
    /* 00776ef5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00776ef7: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00776efa: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00776efc: call dword ptr [edx + 0x130] */ { u32 t = R32((u32)(r_edx+0x130u)); r_esp -= 4; W32(r_esp, 0x776f02u); call_ind(t); }
L_00776f02:; BB(0x00776f02);
    /* 00776f02: movsx edx, word ptr [ebp + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x32cu));
    /* 00776f09: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00776f0c: jne 0x776f51 */ if (!fZ) goto L_00776f51;
L_00776f0e:; BB(0x00776f0e);
    /* 00776f0e: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 00776f12: fmul dword ptr [0x978208] */ ST(0) = ST(0) * R_F32((u32)(0x978208u));
    /* 00776f18: fnstcw word ptr [esp + 0x14] */ W16((u32)(r_esp+0x14u), fcw);
    /* 00776f1c: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 00776f21: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00776f26: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 00776f2a: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 00776f2e: fistp dword ptr [esp + 0x24] */ W32((u32)(r_esp+0x24u), (u32)fx_int32(ST(0))); FPOP();
    /* 00776f32: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 00776f36: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00776f38: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 00776f3c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00776f3d: call 0x69b4f0 */ r_esp -= 4; W32(r_esp, 0x776f42u); f_0069b4f0();
    /* 00776f42: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00776f45: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00776f46: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00776f49: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00776f4b: call dword ptr [edx + 0x134] */ { u32 t = R32((u32)(r_edx+0x134u)); r_esp -= 4; W32(r_esp, 0x776f51u); call_ind(t); }
L_00776f51:; BB(0x00776f51);
    /* 00776f51: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00776f52: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00776f53: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00776f55: call 0x773ab0 */ r_esp -= 4; W32(r_esp, 0x776f5au); f_00773ab0();
    /* 00776f5a: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 00776f5e: add esp, 0xb0 */ {  u32 a = r_esp; u32 b = 0xb0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00776f64: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00776f65: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00776f66: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00776f67: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00776f68: ret 8 */ FN_RET(0x007757fe); r_esp += 12; return;
L_00776f8e:; BB(0x00776f8e);
    /* 00776f8e: fld dword ptr [0x978228] */ FPUSH(R_F32((u32)(0x978228u)));
    /* 00776f94: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 00776f98: jmp 0x775832 */ goto L_00775832;
}

void f_007758c1(void)
{
    FN_ENTER(0x007758c1);
    /* 007758c1: mov esi, dword ptr [esp + 0x2c] */ r_esi = R32((u32)(r_esp+0x2cu));
    /* 007758c5: movsx edx, word ptr [ebp + 0x2fc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x2fcu));
    /* 007758cc: sub esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 007758ce: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 007758d2: cmp edx, 0x1000 */ {  u32 a = r_edx; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007758d8: mov dword ptr [esp + 0xc], esi */ W32((u32)(r_esp+0xcu), r_esi);
    /* 007758dc: fild dword ptr [esp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_esp+0xcu)));
    /* 007758e0: fmul dword ptr [0x978214] */ ST(0) = ST(0) * R_F32((u32)(0x978214u));
    /* 007758e6: fmul dword ptr [esp + 0x38] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x38u));
    /* 007758ea: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 007758ee: jge 0x7758fe */ if ((fS==fO)) goto L_007758fe;
L_007758f0:; BB(0x007758f0);
    /* 007758f0: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 007758f4: fadd dword ptr [0x97820c] */ ST(0) = ST(0) + R_F32((u32)(0x97820cu));
    /* 007758fa: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
L_007758fe:; BB(0x007758fe);
    /* 007758fe: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00775900: call 0x777174 */ r_esp -= 4; W32(r_esp, 0x775905u); f_00777174();
    /* 00775905: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 00775909: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0077590b: call 0x7770a0 */ r_esp -= 4; W32(r_esp, 0x775910u); f_007770a0();
    /* 00775910: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 00775914: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00775916: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 0077591a: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0077591c: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 00775920: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00775922: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00775924: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00775925: jae 0x775979 */ if (!fC) goto L_00775979;
L_00775927:; BB(0x00775927);
    /* 00775927: call 0x807db8 */ r_esp -= 4; W32(r_esp, 0x77592cu); f_00807db8();
    /* 0077592c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077592e: jne 0x775979 */ if (!fZ) goto L_00775979;
L_00775930:; BB(0x00775930);
    /* 00775930: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 00775933: test edx, 0x2000000 */ {  u32 a = r_edx; u32 b = 0x2000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00775939: jne 0x77594c */ if (!fZ) goto L_0077594c;
L_0077593b:; BB(0x0077593b);
    /* 0077593b: lea edx, [esp + 0x44] */ r_edx = (u32)(r_esp+0x44u);
    /* 0077593f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00775941: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00775942: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00775943: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00775944: call 0x5ce89c */ r_esp -= 4; W32(r_esp, 0x775949u); f_005ce89c();
    /* 00775949: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0077594c:; BB(0x0077594c);
    /* 0077594c: mov edx, dword ptr [esp + 0x40] */ r_edx = R32((u32)(r_esp+0x40u));
    /* 00775950: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00775952: jne 0x775995 */ if (!fZ) goto L_00775995;
L_00775954:; BB(0x00775954);
    /* 00775954: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00775956: mov word ptr [ebp + 0x334], dx */ W16((u32)(r_ebp+0x334u), (u16)r_edx);
    /* 0077595d: lea esi, [ebp + 0x334] */ r_esi = (u32)(r_ebp+0x334u);
    /* 00775963: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00775964: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00775966: call 0x770b74 */ r_esp -= 4; W32(r_esp, 0x77596bu); f_00770b74();
    /* 0077596b: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 0077596e: or edx, 0xa00 */ {  u32 a = r_edx; u32 b = 0xa00u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00775974: mov dword ptr [ebp + 0x30], edx */ W32((u32)(r_ebp+0x30u), r_edx);
    /* 00775977: jmp 0x775995 */ goto L_00775995;
L_00775979:; BB(0x00775979);
    /* 00775979: lea edx, [esp + 0x44] */ r_edx = (u32)(r_esp+0x44u);
    /* 0077597d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0077597e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00775980: call 0x777450 */ r_esp -= 4; W32(r_esp, 0x775985u); f_00777450();
    /* 00775985: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00775987: je 0x775995 */ if (fZ) goto L_00775995;
L_00775989:; BB(0x00775989);
    /* 00775989: mov edx, dword ptr [edi + 0x18] */ r_edx = R32((u32)(r_edi+0x18u));
    /* 0077598c: and edx, 0xfbffffff */ {  u32 a = r_edx; u32 b = 0xfbffffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00775992: mov dword ptr [edi + 0x18], edx */ W32((u32)(r_edi+0x18u), r_edx);
L_00775995:; BB(0x00775995);
    /* 00775995: fld dword ptr [0x978228] */ FPUSH(R_F32((u32)(0x978228u)));
    /* 0077599b: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 0077599f: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 007759a1: jmp 0x776eed */ goto L_00776eed;
L_00776eed:; BB(0x00776eed);
    /* 00776eed: mov edx, dword ptr [esp + 0x40] */ r_edx = R32((u32)(r_esp+0x40u));
    /* 00776ef1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00776ef3: jne 0x776f02 */ if (!fZ) goto L_00776f02;
L_00776ef5:; BB(0x00776ef5);
    /* 00776ef5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00776ef7: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00776efa: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00776efc: call dword ptr [edx + 0x130] */ { u32 t = R32((u32)(r_edx+0x130u)); r_esp -= 4; W32(r_esp, 0x776f02u); call_ind(t); }
L_00776f02:; BB(0x00776f02);
    /* 00776f02: movsx edx, word ptr [ebp + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x32cu));
    /* 00776f09: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00776f0c: jne 0x776f51 */ if (!fZ) goto L_00776f51;
L_00776f0e:; BB(0x00776f0e);
    /* 00776f0e: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 00776f12: fmul dword ptr [0x978208] */ ST(0) = ST(0) * R_F32((u32)(0x978208u));
    /* 00776f18: fnstcw word ptr [esp + 0x14] */ W16((u32)(r_esp+0x14u), fcw);
    /* 00776f1c: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 00776f21: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00776f26: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 00776f2a: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 00776f2e: fistp dword ptr [esp + 0x24] */ W32((u32)(r_esp+0x24u), (u32)fx_int32(ST(0))); FPOP();
    /* 00776f32: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 00776f36: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00776f38: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 00776f3c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00776f3d: call 0x69b4f0 */ r_esp -= 4; W32(r_esp, 0x776f42u); f_0069b4f0();
    /* 00776f42: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00776f45: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00776f46: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00776f49: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00776f4b: call dword ptr [edx + 0x134] */ { u32 t = R32((u32)(r_edx+0x134u)); r_esp -= 4; W32(r_esp, 0x776f51u); call_ind(t); }
L_00776f51:; BB(0x00776f51);
    /* 00776f51: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00776f52: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00776f53: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00776f55: call 0x773ab0 */ r_esp -= 4; W32(r_esp, 0x776f5au); f_00773ab0();
    /* 00776f5a: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 00776f5e: add esp, 0xb0 */ {  u32 a = r_esp; u32 b = 0xb0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00776f64: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00776f65: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00776f66: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00776f67: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00776f68: ret 8 */ FN_RET(0x007758c1); r_esp += 12; return;
}

void f_007759a6(void)
{
    FN_ENTER(0x007759a6);
    /* 007759a6: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 007759a8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007759aa: call dword ptr [edx + 0x38] */ { u32 t = R32((u32)(r_edx+0x38u)); r_esp -= 4; W32(r_esp, 0x7759adu); call_ind(t); }
    /* 007759ad: mov edx, dword ptr [esp + 0x2c] */ r_edx = R32((u32)(r_esp+0x2cu));
    /* 007759b1: fld dword ptr [0x978204] */ FPUSH(R_F32((u32)(0x978204u)));
    /* 007759b7: fld dword ptr [0x978224] */ FPUSH(R_F32((u32)(0x978224u)));
    /* 007759bd: mov edi, dword ptr [esp + 0x40] */ r_edi = R32((u32)(r_esp+0x40u));
    /* 007759c1: movsx esi, word ptr [ebp + 0x2f8] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0x2f8u));
    /* 007759c8: neg esi */ { u32 x = r_esi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 007759ca: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 007759ce: fild dword ptr [esp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_esp+0xcu)));
    /* 007759d2: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 007759d4: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007759d6: fmul dword ptr [0x978208] */ ST(0) = ST(0) * R_F32((u32)(0x978208u));
    /* 007759dc: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007759de: fsubr st(2) */ ST(0) = ST(2) - ST(0);
    /* 007759e0: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 007759e4: fild dword ptr [esp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_esp+0xcu)));
    /* 007759e8: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 007759ea: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 007759ec: add esi, 0x64 */ {  u32 a = r_esi; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007759ef: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 007759f1: mov dword ptr [esp + 0xc], esi */ W32((u32)(r_esp+0xcu), r_esi);
    /* 007759f5: fild dword ptr [esp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_esp+0xcu)));
    /* 007759f9: fmul dword ptr [0x978200] */ ST(0) = ST(0) * R_F32((u32)(0x978200u));
    /* 007759ff: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00775a01: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00775a03: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 00775a07: je 0x775a34 */ if (fZ) goto L_00775a34;
L_00775a09:; BB(0x00775a09);
    /* 00775a09: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 00775a0d: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 00775a10: fnstcw word ptr [esp + 0x14] */ W16((u32)(r_esp+0x14u), fcw);
    /* 00775a14: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 00775a19: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00775a1e: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 00775a22: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 00775a26: fistp dword ptr [esp + 0x24] */ W32((u32)(r_esp+0x24u), (u32)fx_int32(ST(0))); FPOP();
    /* 00775a2a: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 00775a2e: mov esi, dword ptr [esp + 0x24] */ r_esi = R32((u32)(r_esp+0x24u));
    /* 00775a32: jmp 0x775a7a */ goto L_00775a7a;
L_00775a34:; BB(0x00775a34);
    /* 00775a34: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 00775a38: fnstcw word ptr [esp + 0x14] */ W16((u32)(r_esp+0x14u), fcw);
    /* 00775a3c: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 00775a41: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00775a46: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 00775a4a: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 00775a4e: fistp dword ptr [esp + 0x24] */ W32((u32)(r_esp+0x24u), (u32)fx_int32(ST(0))); FPOP();
    /* 00775a52: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 00775a56: mov esi, dword ptr [esp + 0x24] */ r_esi = R32((u32)(r_esp+0x24u));
    /* 00775a5a: movsx edx, si */ r_edx = (u32)(i32)(i16)(u16)r_esi;
    /* 00775a5d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00775a5e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00775a60: call 0x777414 */ r_esp -= 4; W32(r_esp, 0x775a65u); f_00777414();
    /* 00775a65: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00775a67: call 0x775270 */ r_esp -= 4; W32(r_esp, 0x775a6cu); f_00775270();
    /* 00775a6c: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 00775a6f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00775a71: jle 0x776f9d */ if ((fZ||fS!=fO)) goto L_00776f9d;
L_00775a77:; BB(0x00775a77);
    /* 00775a77: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
L_00775a7a:; BB(0x00775a7a);
    /* 00775a7a: or edx, 0x200 */ {  u32 a = r_edx; u32 b = 0x200u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00775a80: mov dword ptr [ebp + 0x30], edx */ W32((u32)(r_ebp+0x30u), r_edx);
    /* 00775a83: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00775a84: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 00775a88: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00775a8b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00775a8d: call 0x77529c */ r_esp -= 4; W32(r_esp, 0x775a92u); f_0077529c();
    /* 00775a92: mov edx, dword ptr [ebp + 0x2e0] */ r_edx = R32((u32)(r_ebp+0x2e0u));
    /* 00775a98: movsx edi, word ptr [ebp + 0x32c] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ebp+0x32cu));
    /* 00775a9f: or edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00775aa2: mov dword ptr [ebp + 0x2e0], edx */ W32((u32)(r_ebp+0x2e0u), r_edx);
    /* 00775aa8: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00775aab: je 0x775ab8 */ if (fZ) goto L_00775ab8;
L_00775aad:; BB(0x00775aad);
    /* 00775aad: mov eax, ebx */ r_eax = r_ebx;
    /* 00775aaf: call 0x77524c */ r_esp -= 4; W32(r_esp, 0x775ab4u); f_0077524c();
    /* 00775ab4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00775ab6: je 0x775aeb */ if (fZ) goto L_00775aeb;
L_00775ab8:; BB(0x00775ab8);
    /* 00775ab8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00775aba: call 0x777174 */ r_esp -= 4; W32(r_esp, 0x775abfu); f_00777174();
    /* 00775abf: add esp, -0x10 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00775ac2: fld dword ptr [esp + 0x44] */ FPUSH(R_F32((u32)(r_esp+0x44u)));
    /* 00775ac6: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00775aca: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00775ace: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 00775ad1: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00775ad3: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 00775ad7: call 0x7770d0 */ r_esp -= 4; W32(r_esp, 0x775adcu); f_007770d0();
    /* 00775adc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00775ade: je 0x775aeb */ if (fZ) goto L_00775aeb;
L_00775ae0:; BB(0x00775ae0);
    /* 00775ae0: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00775ae3: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00775ae5: call dword ptr [edx + 0xcc] */ { u32 t = R32((u32)(r_edx+0xccu)); r_esp -= 4; W32(r_esp, 0x775aebu); call_ind(t); }
L_00775aeb:; BB(0x00775aeb);
    /* 00775aeb: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 00775aee: test edx, 0x2000000 */ {  u32 a = r_edx; u32 b = 0x2000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00775af4: jne 0x776eed */ if (!fZ) goto L_00776eed;
L_00775afa:; BB(0x00775afa);
    /* 00775afa: lea edx, [esp + 0x44] */ r_edx = (u32)(r_esp+0x44u);
    /* 00775afe: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00775b00: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00775b01: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00775b02: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00775b03: call 0x5ce89c */ r_esp -= 4; W32(r_esp, 0x775b08u); f_005ce89c();
    /* 00775b08: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00775b0b: lea edx, [esp + 0x44] */ r_edx = (u32)(r_esp+0x44u);
    /* 00775b0f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00775b10: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00775b12: call 0x775204 */ r_esp -= 4; W32(r_esp, 0x775b17u); f_00775204();
    /* 00775b17: lea edi, [esp + 0x44] */ r_edi = (u32)(r_esp+0x44u);
    /* 00775b1b: movsx edx, si */ r_edx = (u32)(i32)(i16)(u16)r_esi;
    /* 00775b1e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00775b1f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00775b21: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00775b22: call 0x77535c */ r_esp -= 4; W32(r_esp, 0x775b27u); f_0077535c();
    /* 00775b27: jmp 0x776eed */ goto L_00776eed;
L_00776eed:; BB(0x00776eed);
    /* 00776eed: mov edx, dword ptr [esp + 0x40] */ r_edx = R32((u32)(r_esp+0x40u));
    /* 00776ef1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00776ef3: jne 0x776f02 */ if (!fZ) goto L_00776f02;
L_00776ef5:; BB(0x00776ef5);
    /* 00776ef5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00776ef7: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00776efa: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00776efc: call dword ptr [edx + 0x130] */ { u32 t = R32((u32)(r_edx+0x130u)); r_esp -= 4; W32(r_esp, 0x776f02u); call_ind(t); }
L_00776f02:; BB(0x00776f02);
    /* 00776f02: movsx edx, word ptr [ebp + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x32cu));
    /* 00776f09: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00776f0c: jne 0x776f51 */ if (!fZ) goto L_00776f51;
L_00776f0e:; BB(0x00776f0e);
    /* 00776f0e: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 00776f12: fmul dword ptr [0x978208] */ ST(0) = ST(0) * R_F32((u32)(0x978208u));
    /* 00776f18: fnstcw word ptr [esp + 0x14] */ W16((u32)(r_esp+0x14u), fcw);
    /* 00776f1c: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 00776f21: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00776f26: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 00776f2a: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 00776f2e: fistp dword ptr [esp + 0x24] */ W32((u32)(r_esp+0x24u), (u32)fx_int32(ST(0))); FPOP();
    /* 00776f32: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 00776f36: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00776f38: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 00776f3c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00776f3d: call 0x69b4f0 */ r_esp -= 4; W32(r_esp, 0x776f42u); f_0069b4f0();
    /* 00776f42: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00776f45: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00776f46: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00776f49: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00776f4b: call dword ptr [edx + 0x134] */ { u32 t = R32((u32)(r_edx+0x134u)); r_esp -= 4; W32(r_esp, 0x776f51u); call_ind(t); }
L_00776f51:; BB(0x00776f51);
    /* 00776f51: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00776f52: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00776f53: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00776f55: call 0x773ab0 */ r_esp -= 4; W32(r_esp, 0x776f5au); f_00773ab0();
    /* 00776f5a: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 00776f5e: add esp, 0xb0 */ {  u32 a = r_esp; u32 b = 0xb0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00776f64: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00776f65: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00776f66: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00776f67: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00776f68: ret 8 */ FN_RET(0x007759a6); r_esp += 12; return;
L_00776f9d:; BB(0x00776f9d);
    /* 00776f9d: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 00776fa0: or edx, 0x800 */ {  u32 a = r_edx; u32 b = 0x800u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00776fa6: jmp 0x775a7a */ goto L_00775a7a;
}

void f_00775b2c(void)
{
    FN_ENTER(0x00775b2c);
    /* 00775b2c: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 00775b2e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00775b30: call dword ptr [edx + 0x38] */ { u32 t = R32((u32)(r_edx+0x38u)); r_esp -= 4; W32(r_esp, 0x775b33u); call_ind(t); }
    /* 00775b33: mov edx, dword ptr [esp + 0x2c] */ r_edx = R32((u32)(r_esp+0x2cu));
    /* 00775b37: fld dword ptr [0x978204] */ FPUSH(R_F32((u32)(0x978204u)));
    /* 00775b3d: fld dword ptr [0x978224] */ FPUSH(R_F32((u32)(0x978224u)));
    /* 00775b43: mov edi, dword ptr [esp + 0x40] */ r_edi = R32((u32)(r_esp+0x40u));
    /* 00775b47: movsx esi, word ptr [ebp + 0x2f6] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0x2f6u));
    /* 00775b4e: neg esi */ { u32 x = r_esi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00775b50: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 00775b54: fild dword ptr [esp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_esp+0xcu)));
    /* 00775b58: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 00775b5a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00775b5c: fmul dword ptr [0x978208] */ ST(0) = ST(0) * R_F32((u32)(0x978208u));
    /* 00775b62: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00775b64: fsubr st(2) */ ST(0) = ST(2) - ST(0);
    /* 00775b66: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 00775b6a: fild dword ptr [esp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_esp+0xcu)));
    /* 00775b6e: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 00775b70: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00775b72: add esi, 0x64 */ {  u32 a = r_esi; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00775b75: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00775b77: mov dword ptr [esp + 0xc], esi */ W32((u32)(r_esp+0xcu), r_esi);
    /* 00775b7b: fild dword ptr [esp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_esp+0xcu)));
    /* 00775b7f: fmul dword ptr [0x978200] */ ST(0) = ST(0) * R_F32((u32)(0x978200u));
    /* 00775b85: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00775b87: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00775b89: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 00775b8d: je 0x775bba */ if (fZ) goto L_00775bba;
L_00775b8f:; BB(0x00775b8f);
    /* 00775b8f: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 00775b93: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 00775b96: fnstcw word ptr [esp + 0x14] */ W16((u32)(r_esp+0x14u), fcw);
    /* 00775b9a: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 00775b9f: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00775ba4: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 00775ba8: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 00775bac: fistp dword ptr [esp + 0x24] */ W32((u32)(r_esp+0x24u), (u32)fx_int32(ST(0))); FPOP();
    /* 00775bb0: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 00775bb4: mov esi, dword ptr [esp + 0x24] */ r_esi = R32((u32)(r_esp+0x24u));
    /* 00775bb8: jmp 0x775c00 */ goto L_00775c00;
L_00775bba:; BB(0x00775bba);
    /* 00775bba: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 00775bbe: fnstcw word ptr [esp + 0x14] */ W16((u32)(r_esp+0x14u), fcw);
    /* 00775bc2: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 00775bc7: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00775bcc: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 00775bd0: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 00775bd4: fistp dword ptr [esp + 0x24] */ W32((u32)(r_esp+0x24u), (u32)fx_int32(ST(0))); FPOP();
    /* 00775bd8: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 00775bdc: mov esi, dword ptr [esp + 0x24] */ r_esi = R32((u32)(r_esp+0x24u));
    /* 00775be0: movsx edx, si */ r_edx = (u32)(i32)(i16)(u16)r_esi;
    /* 00775be3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00775be4: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00775be6: call 0x777414 */ r_esp -= 4; W32(r_esp, 0x775bebu); f_00777414();
    /* 00775beb: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00775bed: call 0x775270 */ r_esp -= 4; W32(r_esp, 0x775bf2u); f_00775270();
    /* 00775bf2: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 00775bf5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00775bf7: jle 0x776fab */ if ((fZ||fS!=fO)) goto L_00776fab;
L_00775bfd:; BB(0x00775bfd);
    /* 00775bfd: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
L_00775c00:; BB(0x00775c00);
    /* 00775c00: or edx, 0x200 */ {  u32 a = r_edx; u32 b = 0x200u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00775c06: mov dword ptr [ebp + 0x30], edx */ W32((u32)(r_ebp+0x30u), r_edx);
    /* 00775c09: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00775c0a: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 00775c0e: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00775c11: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00775c13: call 0x77529c */ r_esp -= 4; W32(r_esp, 0x775c18u); f_0077529c();
    /* 00775c18: mov edx, dword ptr [ebp + 0x2e0] */ r_edx = R32((u32)(r_ebp+0x2e0u));
    /* 00775c1e: mov edi, dword ptr [ebp + 0x30] */ r_edi = R32((u32)(r_ebp+0x30u));
    /* 00775c21: or edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00775c24: test edi, 0x2000000 */ {  u32 a = r_edi; u32 b = 0x2000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00775c2a: mov dword ptr [ebp + 0x2e0], edx */ W32((u32)(r_ebp+0x2e0u), r_edx);
    /* 00775c30: jne 0x776eed */ if (!fZ) goto L_00776eed;
L_00775c36:; BB(0x00775c36);
    /* 00775c36: lea edx, [esp + 0x44] */ r_edx = (u32)(r_esp+0x44u);
    /* 00775c3a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00775c3b: call 0x50325c */ r_esp -= 4; W32(r_esp, 0x775c40u); f_0050325c();
    /* 00775c40: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00775c41: lea edx, [esp + 0x44] */ r_edx = (u32)(r_esp+0x44u);
    /* 00775c45: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00775c46: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00775c48: call 0x7752dc */ r_esp -= 4; W32(r_esp, 0x775c4du); f_007752dc();
    /* 00775c4d: lea edi, [esp + 0x44] */ r_edi = (u32)(r_esp+0x44u);
    /* 00775c51: movsx edx, si */ r_edx = (u32)(i32)(i16)(u16)r_esi;
    /* 00775c54: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00775c55: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00775c57: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00775c58: call 0x77535c */ r_esp -= 4; W32(r_esp, 0x775c5du); f_0077535c();
    /* 00775c5d: lea edx, [esp + 0x44] */ r_edx = (u32)(r_esp+0x44u);
    /* 00775c61: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00775c63: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00775c64: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00775c65: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00775c66: call 0x5ce89c */ r_esp -= 4; W32(r_esp, 0x775c6bu); f_005ce89c();
    /* 00775c6b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00775c6e: jmp 0x776eed */ goto L_00776eed;
L_00776eed:; BB(0x00776eed);
    /* 00776eed: mov edx, dword ptr [esp + 0x40] */ r_edx = R32((u32)(r_esp+0x40u));
    /* 00776ef1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00776ef3: jne 0x776f02 */ if (!fZ) goto L_00776f02;
L_00776ef5:; BB(0x00776ef5);
    /* 00776ef5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00776ef7: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00776efa: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00776efc: call dword ptr [edx + 0x130] */ { u32 t = R32((u32)(r_edx+0x130u)); r_esp -= 4; W32(r_esp, 0x776f02u); call_ind(t); }
L_00776f02:; BB(0x00776f02);
    /* 00776f02: movsx edx, word ptr [ebp + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x32cu));
    /* 00776f09: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00776f0c: jne 0x776f51 */ if (!fZ) goto L_00776f51;
L_00776f0e:; BB(0x00776f0e);
    /* 00776f0e: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 00776f12: fmul dword ptr [0x978208] */ ST(0) = ST(0) * R_F32((u32)(0x978208u));
    /* 00776f18: fnstcw word ptr [esp + 0x14] */ W16((u32)(r_esp+0x14u), fcw);
    /* 00776f1c: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 00776f21: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00776f26: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 00776f2a: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 00776f2e: fistp dword ptr [esp + 0x24] */ W32((u32)(r_esp+0x24u), (u32)fx_int32(ST(0))); FPOP();
    /* 00776f32: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 00776f36: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00776f38: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 00776f3c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00776f3d: call 0x69b4f0 */ r_esp -= 4; W32(r_esp, 0x776f42u); f_0069b4f0();
    /* 00776f42: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00776f45: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00776f46: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00776f49: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00776f4b: call dword ptr [edx + 0x134] */ { u32 t = R32((u32)(r_edx+0x134u)); r_esp -= 4; W32(r_esp, 0x776f51u); call_ind(t); }
L_00776f51:; BB(0x00776f51);
    /* 00776f51: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00776f52: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00776f53: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00776f55: call 0x773ab0 */ r_esp -= 4; W32(r_esp, 0x776f5au); f_00773ab0();
    /* 00776f5a: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 00776f5e: add esp, 0xb0 */ {  u32 a = r_esp; u32 b = 0xb0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00776f64: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00776f65: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00776f66: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00776f67: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00776f68: ret 8 */ FN_RET(0x00775b2c); r_esp += 12; return;
L_00776fab:; BB(0x00776fab);
    /* 00776fab: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 00776fae: or edx, 0x800 */ {  u32 a = r_edx; u32 b = 0x800u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00776fb4: jmp 0x775c00 */ goto L_00775c00;
}

void f_00775c73(void)
{
    FN_ENTER(0x00775c73);
    /* 00775c73: fld dword ptr [0x978228] */ FPUSH(R_F32((u32)(0x978228u)));
    /* 00775c79: mov edx, dword ptr [ebp + 0x2b4] */ r_edx = R32((u32)(r_ebp+0x2b4u));
    /* 00775c7f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00775c81: je 0x776fb9 */ if (fZ) goto L_00776fb9;
L_00775c87:; BB(0x00775c87);
    /* 00775c87: mov esi, dword ptr [esp + 0x2c] */ r_esi = R32((u32)(r_esp+0x2cu));
    /* 00775c8b: movsx edx, word ptr [edx + 0xe] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edx+0xeu));
    /* 00775c8f: sub esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00775c91: mov dword ptr [esp + 0xc], esi */ W32((u32)(r_esp+0xcu), r_esi);
    /* 00775c95: fild dword ptr [esp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_esp+0xcu)));
    /* 00775c99: fmul dword ptr [0x978214] */ ST(0) = ST(0) * R_F32((u32)(0x978214u));
    /* 00775c9f: fmul dword ptr [esp + 0x38] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x38u));
    /* 00775ca3: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
L_00775ca7:; BB(0x00775ca7);
    /* 00775ca7: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 00775cab: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00775cad: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00775caf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00775cb1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00775cb2: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00775cb4: jae 0x775cb8 */ if (!fC) goto L_00775cb8;
L_00775cb6:; BB(0x00775cb6);
    /* 00775cb6: fst st(1) */ ST(1) = ST(0);
L_00775cb8:; BB(0x00775cb8);
    /* 00775cb8: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00775cba: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 00775cbe: call 0x777174 */ r_esp -= 4; W32(r_esp, 0x775cc3u); f_00777174();
    /* 00775cc3: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 00775cc7: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00775cc9: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 00775ccd: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00775ccf: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00775cd1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00775cd2: jae 0x775d2b */ if (!fC) goto L_00775d2b;
L_00775cd4:; BB(0x00775cd4);
    /* 00775cd4: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 00775cd7: test edx, 0x2000000 */ {  u32 a = r_edx; u32 b = 0x2000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00775cdd: jne 0x775cfa */ if (!fZ) goto L_00775cfa;
L_00775cdf:; BB(0x00775cdf);
    /* 00775cdf: lea edx, [esp + 0x44] */ r_edx = (u32)(r_esp+0x44u);
    /* 00775ce3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00775ce4: call 0x50325c */ r_esp -= 4; W32(r_esp, 0x775ce9u); f_0050325c();
    /* 00775ce9: lea edx, [esp + 0x48] */ r_edx = (u32)(r_esp+0x48u);
    /* 00775ced: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00775cef: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00775cf0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00775cf1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00775cf2: call 0x5ce89c */ r_esp -= 4; W32(r_esp, 0x775cf7u); f_005ce89c();
    /* 00775cf7: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00775cfa:; BB(0x00775cfa);
    /* 00775cfa: mov edx, dword ptr [esp + 0x40] */ r_edx = R32((u32)(r_esp+0x40u));
    /* 00775cfe: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00775d00: jne 0x775d47 */ if (!fZ) goto L_00775d47;
L_00775d02:; BB(0x00775d02);
    /* 00775d02: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 00775d06: cmp edx, 0x1000 */ {  u32 a = r_edx; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00775d0c: jl 0x775d19 */ if ((fS!=fO)) goto L_00775d19;
L_00775d0e:; BB(0x00775d0e);
    /* 00775d0e: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00775d11: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00775d13: call dword ptr [edx + 0xbc] */ { u32 t = R32((u32)(r_edx+0xbcu)); r_esp -= 4; W32(r_esp, 0x775d19u); call_ind(t); }
L_00775d19:; BB(0x00775d19);
    /* 00775d19: push 0x3f19999a */ { u32 v = 0x3f19999au; r_esp -= 4; W32(r_esp, v); }
    /* 00775d1e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00775d1f: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00775d22: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00775d24: call dword ptr [edx + 0x5c] */ { u32 t = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, 0x775d27u); call_ind(t); }
    /* 00775d27: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00775d29: jmp 0x775d47 */ goto L_00775d47;
L_00775d2b:; BB(0x00775d2b);
    /* 00775d2b: lea edx, [esp + 0x44] */ r_edx = (u32)(r_esp+0x44u);
    /* 00775d2f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00775d30: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00775d32: call 0x777450 */ r_esp -= 4; W32(r_esp, 0x775d37u); f_00777450();
    /* 00775d37: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00775d39: je 0x775d47 */ if (fZ) goto L_00775d47;
L_00775d3b:; BB(0x00775d3b);
    /* 00775d3b: mov edx, dword ptr [edi + 0x18] */ r_edx = R32((u32)(r_edi+0x18u));
    /* 00775d3e: and edx, 0xfbffffff */ {  u32 a = r_edx; u32 b = 0xfbffffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00775d44: mov dword ptr [edi + 0x18], edx */ W32((u32)(r_edi+0x18u), r_edx);
L_00775d47:; BB(0x00775d47);
    /* 00775d47: fld dword ptr [0x978228] */ FPUSH(R_F32((u32)(0x978228u)));
    /* 00775d4d: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 00775d51: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00775d53: jmp 0x776eed */ goto L_00776eed;
L_00776eed:; BB(0x00776eed);
    /* 00776eed: mov edx, dword ptr [esp + 0x40] */ r_edx = R32((u32)(r_esp+0x40u));
    /* 00776ef1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00776ef3: jne 0x776f02 */ if (!fZ) goto L_00776f02;
L_00776ef5:; BB(0x00776ef5);
    /* 00776ef5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00776ef7: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00776efa: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00776efc: call dword ptr [edx + 0x130] */ { u32 t = R32((u32)(r_edx+0x130u)); r_esp -= 4; W32(r_esp, 0x776f02u); call_ind(t); }
L_00776f02:; BB(0x00776f02);
    /* 00776f02: movsx edx, word ptr [ebp + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x32cu));
    /* 00776f09: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00776f0c: jne 0x776f51 */ if (!fZ) goto L_00776f51;
L_00776f0e:; BB(0x00776f0e);
    /* 00776f0e: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 00776f12: fmul dword ptr [0x978208] */ ST(0) = ST(0) * R_F32((u32)(0x978208u));
    /* 00776f18: fnstcw word ptr [esp + 0x14] */ W16((u32)(r_esp+0x14u), fcw);
    /* 00776f1c: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 00776f21: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00776f26: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 00776f2a: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 00776f2e: fistp dword ptr [esp + 0x24] */ W32((u32)(r_esp+0x24u), (u32)fx_int32(ST(0))); FPOP();
    /* 00776f32: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 00776f36: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00776f38: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 00776f3c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00776f3d: call 0x69b4f0 */ r_esp -= 4; W32(r_esp, 0x776f42u); f_0069b4f0();
    /* 00776f42: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00776f45: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00776f46: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00776f49: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00776f4b: call dword ptr [edx + 0x134] */ { u32 t = R32((u32)(r_edx+0x134u)); r_esp -= 4; W32(r_esp, 0x776f51u); call_ind(t); }
L_00776f51:; BB(0x00776f51);
    /* 00776f51: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00776f52: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00776f53: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00776f55: call 0x773ab0 */ r_esp -= 4; W32(r_esp, 0x776f5au); f_00773ab0();
    /* 00776f5a: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 00776f5e: add esp, 0xb0 */ {  u32 a = r_esp; u32 b = 0xb0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00776f64: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00776f65: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00776f66: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00776f67: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00776f68: ret 8 */ FN_RET(0x00775c73); r_esp += 12; return;
L_00776fb9:; BB(0x00776fb9);
    /* 00776fb9: fld dword ptr [0x978228] */ FPUSH(R_F32((u32)(0x978228u)));
    /* 00776fbf: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 00776fc3: jmp 0x775ca7 */ goto L_00775ca7;
}

void f_00775d58(void)
{
    FN_ENTER(0x00775d58);
    /* 00775d58: fld dword ptr [0x978228] */ FPUSH(R_F32((u32)(0x978228u)));
    /* 00775d5e: mov edx, dword ptr [ebp + 0x2b4] */ r_edx = R32((u32)(r_ebp+0x2b4u));
    /* 00775d64: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00775d66: je 0x776fc8 */ if (fZ) goto L_00776fc8;
L_00775d6c:; BB(0x00775d6c);
    /* 00775d6c: mov esi, dword ptr [esp + 0x2c] */ r_esi = R32((u32)(r_esp+0x2cu));
    /* 00775d70: movsx edx, word ptr [edx + 0xe] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edx+0xeu));
    /* 00775d74: sub esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00775d76: mov dword ptr [esp + 0xc], esi */ W32((u32)(r_esp+0xcu), r_esi);
    /* 00775d7a: fild dword ptr [esp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_esp+0xcu)));
    /* 00775d7e: fmul dword ptr [0x978214] */ ST(0) = ST(0) * R_F32((u32)(0x978214u));
    /* 00775d84: fmul dword ptr [esp + 0x38] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x38u));
    /* 00775d88: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
L_00775d8c:; BB(0x00775d8c);
    /* 00775d8c: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 00775d90: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00775d92: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00775d94: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00775d96: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00775d97: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00775d99: jae 0x775d9d */ if (!fC) goto L_00775d9d;
L_00775d9b:; BB(0x00775d9b);
    /* 00775d9b: fst st(1) */ ST(1) = ST(0);
L_00775d9d:; BB(0x00775d9d);
    /* 00775d9d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00775d9f: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 00775da3: call 0x777174 */ r_esp -= 4; W32(r_esp, 0x775da8u); f_00777174();
    /* 00775da8: add esp, -0x10 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00775dab: fld dword ptr [esp + 0x44] */ FPUSH(R_F32((u32)(r_esp+0x44u)));
    /* 00775daf: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00775db3: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00775db7: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 00775dba: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00775dbc: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 00775dc0: call 0x7771a0 */ r_esp -= 4; W32(r_esp, 0x775dc5u); f_007771a0();
    /* 00775dc5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00775dc7: je 0x775e16 */ if (fZ) goto L_00775e16;
L_00775dc9:; BB(0x00775dc9);
    /* 00775dc9: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 00775dcc: test edx, 0x2000000 */ {  u32 a = r_edx; u32 b = 0x2000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00775dd2: jne 0x775def */ if (!fZ) goto L_00775def;
L_00775dd4:; BB(0x00775dd4);
    /* 00775dd4: lea edx, [esp + 0x44] */ r_edx = (u32)(r_esp+0x44u);
    /* 00775dd8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00775dd9: call 0x50325c */ r_esp -= 4; W32(r_esp, 0x775ddeu); f_0050325c();
    /* 00775dde: lea edx, [esp + 0x48] */ r_edx = (u32)(r_esp+0x48u);
    /* 00775de2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00775de4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00775de5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00775de6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00775de7: call 0x5ce89c */ r_esp -= 4; W32(r_esp, 0x775decu); f_005ce89c();
    /* 00775dec: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00775def:; BB(0x00775def);
    /* 00775def: mov edx, dword ptr [esp + 0x40] */ r_edx = R32((u32)(r_esp+0x40u));
    /* 00775df3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00775df5: jne 0x775e32 */ if (!fZ) goto L_00775e32;
L_00775df7:; BB(0x00775df7);
    /* 00775df7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00775df9: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00775dfc: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00775dfe: call dword ptr [edx + 0xc8] */ { u32 t = R32((u32)(r_edx+0xc8u)); r_esp -= 4; W32(r_esp, 0x775e04u); call_ind(t); }
    /* 00775e04: push 0x3f19999a */ { u32 v = 0x3f19999au; r_esp -= 4; W32(r_esp, v); }
    /* 00775e09: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00775e0a: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00775e0d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00775e0f: call dword ptr [edx + 0x5c] */ { u32 t = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, 0x775e12u); call_ind(t); }
    /* 00775e12: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00775e14: jmp 0x775e32 */ goto L_00775e32;
L_00775e16:; BB(0x00775e16);
    /* 00775e16: lea edx, [esp + 0x44] */ r_edx = (u32)(r_esp+0x44u);
    /* 00775e1a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00775e1b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00775e1d: call 0x777450 */ r_esp -= 4; W32(r_esp, 0x775e22u); f_00777450();
    /* 00775e22: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00775e24: je 0x775e32 */ if (fZ) goto L_00775e32;
L_00775e26:; BB(0x00775e26);
    /* 00775e26: mov edx, dword ptr [edi + 0x18] */ r_edx = R32((u32)(r_edi+0x18u));
    /* 00775e29: and edx, 0xfbffffff */ {  u32 a = r_edx; u32 b = 0xfbffffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00775e2f: mov dword ptr [edi + 0x18], edx */ W32((u32)(r_edi+0x18u), r_edx);
L_00775e32:; BB(0x00775e32);
    /* 00775e32: fld dword ptr [0x978228] */ FPUSH(R_F32((u32)(0x978228u)));
    /* 00775e38: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 00775e3c: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00775e3e: jmp 0x776eed */ goto L_00776eed;
L_00776eed:; BB(0x00776eed);
    /* 00776eed: mov edx, dword ptr [esp + 0x40] */ r_edx = R32((u32)(r_esp+0x40u));
    /* 00776ef1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00776ef3: jne 0x776f02 */ if (!fZ) goto L_00776f02;
L_00776ef5:; BB(0x00776ef5);
    /* 00776ef5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00776ef7: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00776efa: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00776efc: call dword ptr [edx + 0x130] */ { u32 t = R32((u32)(r_edx+0x130u)); r_esp -= 4; W32(r_esp, 0x776f02u); call_ind(t); }
L_00776f02:; BB(0x00776f02);
    /* 00776f02: movsx edx, word ptr [ebp + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x32cu));
    /* 00776f09: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00776f0c: jne 0x776f51 */ if (!fZ) goto L_00776f51;
L_00776f0e:; BB(0x00776f0e);
    /* 00776f0e: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 00776f12: fmul dword ptr [0x978208] */ ST(0) = ST(0) * R_F32((u32)(0x978208u));
    /* 00776f18: fnstcw word ptr [esp + 0x14] */ W16((u32)(r_esp+0x14u), fcw);
    /* 00776f1c: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 00776f21: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00776f26: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 00776f2a: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 00776f2e: fistp dword ptr [esp + 0x24] */ W32((u32)(r_esp+0x24u), (u32)fx_int32(ST(0))); FPOP();
    /* 00776f32: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 00776f36: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00776f38: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 00776f3c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00776f3d: call 0x69b4f0 */ r_esp -= 4; W32(r_esp, 0x776f42u); f_0069b4f0();
    /* 00776f42: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00776f45: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00776f46: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00776f49: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00776f4b: call dword ptr [edx + 0x134] */ { u32 t = R32((u32)(r_edx+0x134u)); r_esp -= 4; W32(r_esp, 0x776f51u); call_ind(t); }
L_00776f51:; BB(0x00776f51);
    /* 00776f51: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00776f52: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00776f53: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00776f55: call 0x773ab0 */ r_esp -= 4; W32(r_esp, 0x776f5au); f_00773ab0();
    /* 00776f5a: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 00776f5e: add esp, 0xb0 */ {  u32 a = r_esp; u32 b = 0xb0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00776f64: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00776f65: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00776f66: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00776f67: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00776f68: ret 8 */ FN_RET(0x00775d58); r_esp += 12; return;
L_00776fc8:; BB(0x00776fc8);
    /* 00776fc8: fld dword ptr [0x978228] */ FPUSH(R_F32((u32)(0x978228u)));
    /* 00776fce: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 00776fd2: jmp 0x775d8c */ goto L_00775d8c;
}

void f_00775e43(void)
{
    FN_ENTER(0x00775e43);
    /* 00775e43: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 00775e46: test edx, 0x2000000 */ {  u32 a = r_edx; u32 b = 0x2000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00775e4c: jne 0x775e5f */ if (!fZ) goto L_00775e5f;
L_00775e4e:; BB(0x00775e4e);
    /* 00775e4e: lea edx, [esp + 0x44] */ r_edx = (u32)(r_esp+0x44u);
    /* 00775e52: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00775e54: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00775e55: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00775e56: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00775e57: call 0x5ce89c */ r_esp -= 4; W32(r_esp, 0x775e5cu); f_005ce89c();
    /* 00775e5c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00775e5f:; BB(0x00775e5f);
    /* 00775e5f: fld dword ptr [0x9781fc] */ FPUSH(R_F32((u32)(0x9781fcu)));
    /* 00775e65: movsx edx, word ptr [ebx + 0x334] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x334u));
    /* 00775e6c: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 00775e70: fild dword ptr [esp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_esp+0xcu)));
    /* 00775e74: fcom dword ptr [0x978224] */ fx_compare(ST(0), R_F32((u32)(0x978224u))); 
    /* 00775e7a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00775e7c: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00775e7e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00775e7f: jbe 0x775fca */ if ((fC||fZ)) goto L_00775fca;
L_00775e85:; BB(0x00775e85);
    /* 00775e85: mov edx, dword ptr [0xa942c0] */ r_edx = R32((u32)(0xa942c0u));
    /* 00775e8b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00775e8d: je 0x775f6b */ if (fZ) goto L_00775f6b;
L_00775e93:; BB(0x00775e93);
    /* 00775e93: movsx esi, word ptr [ebp + 0x32c] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0x32cu));
    /* 00775e9a: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00775e9d: jne 0x775f13 */ if (!fZ) goto L_00775f13;
L_00775e9f:; BB(0x00775e9f);
    /* 00775e9f: movsx edx, word ptr [ebx + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x32cu));
    /* 00775ea6: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00775ea9: jne 0x775f13 */ if (!fZ) goto L_00775f13;
L_00775eab:; BB(0x00775eab);
    /* 00775eab: movzx edi, word ptr [ebp + 0x2d8] */ r_edi = (u32)R16((u32)(r_ebp+0x2d8u));
    /* 00775eb2: movzx esi, word ptr [ebx + 0x1c] */ r_esi = (u32)R16((u32)(r_ebx+0x1cu));
    /* 00775eb6: fnstcw word ptr [esp + 0x14] */ W16((u32)(r_esp+0x14u), fcw);
    /* 00775eba: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 00775ebf: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00775ec4: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 00775ec8: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 00775ecc: fistp qword ptr [esp + 0x24] */ W64((u32)(r_esp+0x24u), (u64)fx_int64(ST(0))); FPOP();
    /* 00775ed0: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 00775ed4: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 00775ed8: mov byte ptr [esp + 0x58], 0x9a */ W8((u32)(r_esp+0x58u), 0x9au);
    /* 00775edd: mov byte ptr [esp + 0x59], 2 */ W8((u32)(r_esp+0x59u), 0x2u);
    /* 00775ee2: mov word ptr [esp + 0x5a], si */ W16((u32)(r_esp+0x5au), (u16)r_esi);
    /* 00775ee7: mov word ptr [esp + 0x5c], di */ W16((u32)(r_esp+0x5cu), (u16)r_edi);
    /* 00775eec: mov byte ptr [esp + 0x5e], 0 */ W8((u32)(r_esp+0x5eu), 0x0u);
    /* 00775ef1: mov byte ptr [esp + 0x5f], dl */ W8((u32)(r_esp+0x5fu), (u8)r_edx);
    /* 00775ef5: lea ecx, [esp + 0x58] */ r_ecx = (u32)(r_esp+0x58u);
    /* 00775ef9: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x775efeu); f_008003e0();
    /* 00775efe: push 0x40400000 */ { u32 v = 0x40400000u; r_esp -= 4; W32(r_esp, v); }
    /* 00775f03: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00775f04: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00775f07: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00775f09: call dword ptr [edx + 0x5c] */ { u32 t = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, 0x775f0cu); call_ind(t); }
    /* 00775f0c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00775f0e: jmp 0x775ff4 */ goto L_00775ff4;
L_00775f13:; BB(0x00775f13);
    /* 00775f13: cmp esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00775f16: jne 0x775f2b */ if (!fZ) goto L_00775f2b;
L_00775f18:; BB(0x00775f18);
    /* 00775f18: movzx edx, word ptr [ebx + 0x1c] */ r_edx = (u32)R16((u32)(r_ebx+0x1cu));
    /* 00775f1c: cmp edx, 0x1000 */ {  u32 a = r_edx; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00775f22: jge 0x775f2b */ if ((fS==fO)) goto L_00775f2b;
L_00775f24:; BB(0x00775f24);
    /* 00775f24: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00775f26: jmp 0x775ff4 */ goto L_00775ff4;
L_00775f2b:; BB(0x00775f2b);
    /* 00775f2b: fnstcw word ptr [esp + 0x14] */ W16((u32)(r_esp+0x14u), fcw);
    /* 00775f2f: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 00775f34: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00775f39: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 00775f3d: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 00775f41: fistp dword ptr [esp + 0x24] */ W32((u32)(r_esp+0x24u), (u32)fx_int32(ST(0))); FPOP();
    /* 00775f45: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 00775f49: movsx edx, word ptr [esp + 0x24] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esp+0x24u));
    /* 00775f4e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00775f4f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00775f51: call 0x777414 */ r_esp -= 4; W32(r_esp, 0x775f56u); f_00777414();
    /* 00775f56: push 0x40400000 */ { u32 v = 0x40400000u; r_esp -= 4; W32(r_esp, v); }
    /* 00775f5b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00775f5c: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00775f5f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00775f61: call dword ptr [edx + 0x5c] */ { u32 t = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, 0x775f64u); call_ind(t); }
    /* 00775f64: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00775f66: jmp 0x775ff4 */ goto L_00775ff4;
L_00775f6b:; BB(0x00775f6b);
    /* 00775f6b: fnstcw word ptr [esp + 0x14] */ W16((u32)(r_esp+0x14u), fcw);
    /* 00775f6f: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 00775f74: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00775f79: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 00775f7d: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 00775f81: fistp dword ptr [esp + 0x24] */ W32((u32)(r_esp+0x24u), (u32)fx_int32(ST(0))); FPOP();
    /* 00775f85: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 00775f89: movsx edx, word ptr [esp + 0x24] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esp+0x24u));
    /* 00775f8e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00775f8f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00775f91: call 0x777270 */ r_esp -= 4; W32(r_esp, 0x775f96u); f_00777270();
    /* 00775f96: movsx edx, word ptr [ebx + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x32cu));
    /* 00775f9d: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00775fa0: jne 0x775fb8 */ if (!fZ) goto L_00775fb8;
L_00775fa2:; BB(0x00775fa2);
    /* 00775fa2: movzx esi, word ptr [ebx + 0x1c] */ r_esi = (u32)R16((u32)(r_ebx+0x1cu));
    /* 00775fa6: movsx edx, word ptr [ebx + 0x334] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x334u));
    /* 00775fad: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00775fae: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00775faf: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00775fb0: call 0x693348 */ r_esp -= 4; W32(r_esp, 0x775fb5u); f_00693348();
    /* 00775fb5: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00775fb8:; BB(0x00775fb8);
    /* 00775fb8: push 0x40400000 */ { u32 v = 0x40400000u; r_esp -= 4; W32(r_esp, v); }
    /* 00775fbd: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00775fbe: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00775fc1: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00775fc3: call dword ptr [edx + 0x5c] */ { u32 t = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, 0x775fc6u); call_ind(t); }
    /* 00775fc6: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00775fc8: jmp 0x775ff4 */ goto L_00775ff4;
L_00775fca:; BB(0x00775fca);
    /* 00775fca: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00775fcc: lea esi, [esp + 0x44] */ r_esi = (u32)(r_esp+0x44u);
    /* 00775fd0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00775fd1: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 00775fd4: or edx, 0x100 */ {  u32 a = r_edx; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00775fda: mov dword ptr [ebp + 0x30], edx */ W32((u32)(r_ebp+0x30u), r_edx);
    /* 00775fdd: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00775fdf: call 0x777450 */ r_esp -= 4; W32(r_esp, 0x775fe4u); f_00777450();
    /* 00775fe4: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00775fe6: je 0x775ff4 */ if (fZ) goto L_00775ff4;
L_00775fe8:; BB(0x00775fe8);
    /* 00775fe8: mov edx, dword ptr [edi + 0x18] */ r_edx = R32((u32)(r_edi+0x18u));
    /* 00775feb: and edx, 0xfbffffff */ {  u32 a = r_edx; u32 b = 0xfbffffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00775ff1: mov dword ptr [edi + 0x18], edx */ W32((u32)(r_edi+0x18u), r_edx);
L_00775ff4:; BB(0x00775ff4);
    /* 00775ff4: fld dword ptr [0x978228] */ FPUSH(R_F32((u32)(0x978228u)));
    /* 00775ffa: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 00775ffe: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00776000: jmp 0x776eed */ goto L_00776eed;
L_00776eed:; BB(0x00776eed);
    /* 00776eed: mov edx, dword ptr [esp + 0x40] */ r_edx = R32((u32)(r_esp+0x40u));
    /* 00776ef1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00776ef3: jne 0x776f02 */ if (!fZ) goto L_00776f02;
L_00776ef5:; BB(0x00776ef5);
    /* 00776ef5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00776ef7: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00776efa: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00776efc: call dword ptr [edx + 0x130] */ { u32 t = R32((u32)(r_edx+0x130u)); r_esp -= 4; W32(r_esp, 0x776f02u); call_ind(t); }
L_00776f02:; BB(0x00776f02);
    /* 00776f02: movsx edx, word ptr [ebp + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x32cu));
    /* 00776f09: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00776f0c: jne 0x776f51 */ if (!fZ) goto L_00776f51;
L_00776f0e:; BB(0x00776f0e);
    /* 00776f0e: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 00776f12: fmul dword ptr [0x978208] */ ST(0) = ST(0) * R_F32((u32)(0x978208u));
    /* 00776f18: fnstcw word ptr [esp + 0x14] */ W16((u32)(r_esp+0x14u), fcw);
    /* 00776f1c: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 00776f21: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00776f26: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 00776f2a: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 00776f2e: fistp dword ptr [esp + 0x24] */ W32((u32)(r_esp+0x24u), (u32)fx_int32(ST(0))); FPOP();
    /* 00776f32: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 00776f36: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00776f38: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 00776f3c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00776f3d: call 0x69b4f0 */ r_esp -= 4; W32(r_esp, 0x776f42u); f_0069b4f0();
    /* 00776f42: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00776f45: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00776f46: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00776f49: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00776f4b: call dword ptr [edx + 0x134] */ { u32 t = R32((u32)(r_edx+0x134u)); r_esp -= 4; W32(r_esp, 0x776f51u); call_ind(t); }
L_00776f51:; BB(0x00776f51);
    /* 00776f51: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00776f52: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00776f53: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00776f55: call 0x773ab0 */ r_esp -= 4; W32(r_esp, 0x776f5au); f_00773ab0();
    /* 00776f5a: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 00776f5e: add esp, 0xb0 */ {  u32 a = r_esp; u32 b = 0xb0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00776f64: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00776f65: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00776f66: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00776f67: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00776f68: ret 8 */ FN_RET(0x00775e43); r_esp += 12; return;
}

