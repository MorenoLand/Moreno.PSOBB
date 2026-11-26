#include "protos.h"

void f_00878214(void) /* sub_878214 */
{
    FN_ENTER(0x00878214);
    /* 00878214: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00878215: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00878216: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00878217: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00878218: sub esp, 0xa8 */ {  u32 a = r_esp; u32 b = 0xa8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0087821e: mov edi, dword ptr [eax + 8] */ r_edi = R32((u32)(r_eax+0x8u));
    /* 00878221: mov ebp, dword ptr [eax + 4] */ r_ebp = R32((u32)(r_eax+0x4u));
    /* 00878224: lea eax, [ebp - 6] */ r_eax = (u32)(r_ebp+0xfffffffau);
    /* 00878227: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00878229: jle 0x87835e */ if ((fZ||fS!=fO)) goto L_0087835e;
L_0087822f:; BB(0x0087822f);
    /* 0087822f: mov ebx, edi */ r_ebx = r_edi;
    /* 00878231: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 00878234: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00878236: lea eax, [eax + edx - 0x20] */ r_eax = (u32)(r_eax+r_edx+0xffffffe0u);
    /* 0087823a: mov esi, ecx */ r_esi = r_ecx;
    /* 0087823c: sar esi, 1 */ { u32 c = (1u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 0087823e: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00878240: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00878242: lea esi, [esi + edx - 0x20] */ r_esi = (u32)(r_esi+r_edx+0xffffffe0u);
    /* 00878246: jmp 0x87824b */ goto L_0087824b;
L_00878248:; BB(0x00878248);
    /* 00878248: fstp dword ptr [esi + 0x24] */ W_F32((u32)(r_esi+0x24u), ST(0)); FPOP();
L_0087824b:; BB(0x0087824b);
    /* 0087824b: fld dword ptr [eax + 0x18] */ FPUSH(R_F32((u32)(r_eax+0x18u)));
    /* 0087824e: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00878250: fld dword ptr [esi + 0x18] */ FPUSH(R_F32((u32)(r_esi+0x18u)));
    /* 00878253: fsub st(1), st(0) */ ST(1) = ST(1) - ST(0);
    /* 00878255: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00878257: fld dword ptr [eax + 0x1c] */ FPUSH(R_F32((u32)(r_eax+0x1cu)));
    /* 0087825a: fld dword ptr [esi + 0x1c] */ FPUSH(R_F32((u32)(r_esi+0x1cu)));
    /* 0087825d: fsubr st(1) */ ST(0) = ST(1) - ST(0);
    /* 0087825f: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00878261: fstp dword ptr [eax + 0x18] */ W_F32((u32)(r_eax+0x18u), ST(0)); FPOP();
    /* 00878264: fld dword ptr [esi + 0x1c] */ FPUSH(R_F32((u32)(r_esi+0x1cu)));
    /* 00878267: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00878269: fstp dword ptr [eax + 0x1c] */ W_F32((u32)(r_eax+0x1cu), ST(0)); FPOP();
    /* 0087826c: fld dword ptr [ebx + 4] */ FPUSH(R_F32((u32)(r_ebx+0x4u)));
    /* 0087826f: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00878271: fld dword ptr [ebx] */ FPUSH(R_F32((u32)(r_ebx)));
    /* 00878273: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00878275: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00878277: fstp dword ptr [esi + 0x18] */ W_F32((u32)(r_esi+0x18u), ST(0)); FPOP();
    /* 0087827a: fld dword ptr [ebx] */ FPUSH(R_F32((u32)(r_ebx)));
    /* 0087827c: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0087827e: fld dword ptr [ebx + 4] */ FPUSH(R_F32((u32)(r_ebx+0x4u)));
    /* 00878281: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00878283: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00878285: fstp dword ptr [esi + 0x1c] */ W_F32((u32)(r_esi+0x1cu), ST(0)); FPOP();
    /* 00878288: fld dword ptr [eax + 0x10] */ FPUSH(R_F32((u32)(r_eax+0x10u)));
    /* 0087828b: fld dword ptr [esi + 0x10] */ FPUSH(R_F32((u32)(r_esi+0x10u)));
    /* 0087828e: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00878290: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 00878292: fld dword ptr [eax + 0x14] */ FPUSH(R_F32((u32)(r_eax+0x14u)));
    /* 00878295: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00878297: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 00878299: fld dword ptr [esi + 0x14] */ FPUSH(R_F32((u32)(r_esi+0x14u)));
    /* 0087829c: fsubr st(2) */ ST(0) = ST(2) - ST(0);
    /* 0087829e: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 008782a0: fstp dword ptr [eax + 0x10] */ W_F32((u32)(r_eax+0x10u), ST(0)); FPOP();
    /* 008782a3: fld dword ptr [esi + 0x14] */ FPUSH(R_F32((u32)(r_esi+0x14u)));
    /* 008782a6: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 008782a8: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 008782aa: fstp dword ptr [eax + 0x14] */ W_F32((u32)(r_eax+0x14u), ST(0)); FPOP();
    /* 008782ad: fld dword ptr [ebx + 0x14] */ FPUSH(R_F32((u32)(r_ebx+0x14u)));
    /* 008782b0: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 008782b2: fld dword ptr [ebx + 0x10] */ FPUSH(R_F32((u32)(r_ebx+0x10u)));
    /* 008782b5: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 008782b7: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008782b9: fstp dword ptr [esi + 0x10] */ W_F32((u32)(r_esi+0x10u), ST(0)); FPOP();
    /* 008782bc: fld dword ptr [ebx + 0x10] */ FPUSH(R_F32((u32)(r_ebx+0x10u)));
    /* 008782bf: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 008782c1: fld dword ptr [ebx + 0x14] */ FPUSH(R_F32((u32)(r_ebx+0x14u)));
    /* 008782c4: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 008782c6: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 008782c8: fstp dword ptr [esi + 0x14] */ W_F32((u32)(r_esi+0x14u), ST(0)); FPOP();
    /* 008782cb: fld dword ptr [eax + 8] */ FPUSH(R_F32((u32)(r_eax+0x8u)));
    /* 008782ce: fld dword ptr [esi + 8] */ FPUSH(R_F32((u32)(r_esi+0x8u)));
    /* 008782d1: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 008782d3: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 008782d5: fld dword ptr [eax + 0xc] */ FPUSH(R_F32((u32)(r_eax+0xcu)));
    /* 008782d8: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 008782da: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 008782dc: fld dword ptr [esi + 0xc] */ FPUSH(R_F32((u32)(r_esi+0xcu)));
    /* 008782df: fsubr st(2) */ ST(0) = ST(2) - ST(0);
    /* 008782e1: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 008782e3: fstp dword ptr [eax + 8] */ W_F32((u32)(r_eax+0x8u), ST(0)); FPOP();
    /* 008782e6: fld dword ptr [esi + 0xc] */ FPUSH(R_F32((u32)(r_esi+0xcu)));
    /* 008782e9: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 008782eb: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 008782ed: fstp dword ptr [eax + 0xc] */ W_F32((u32)(r_eax+0xcu), ST(0)); FPOP();
    /* 008782f0: fld dword ptr [ebx + 0x24] */ FPUSH(R_F32((u32)(r_ebx+0x24u)));
    /* 008782f3: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 008782f5: fld dword ptr [ebx + 0x20] */ FPUSH(R_F32((u32)(r_ebx+0x20u)));
    /* 008782f8: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 008782fa: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008782fc: fstp dword ptr [esi + 8] */ W_F32((u32)(r_esi+0x8u), ST(0)); FPOP();
    /* 008782ff: fld dword ptr [ebx + 0x20] */ FPUSH(R_F32((u32)(r_ebx+0x20u)));
    /* 00878302: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00878304: fld dword ptr [ebx + 0x24] */ FPUSH(R_F32((u32)(r_ebx+0x24u)));
    /* 00878307: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00878309: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0087830b: fstp dword ptr [esi + 0xc] */ W_F32((u32)(r_esi+0xcu), ST(0)); FPOP();
    /* 0087830e: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 00878310: fld dword ptr [esi] */ FPUSH(R_F32((u32)(r_esi)));
    /* 00878312: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00878314: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 00878316: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 00878319: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0087831b: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 0087831d: fld dword ptr [esi + 4] */ FPUSH(R_F32((u32)(r_esi+0x4u)));
    /* 00878320: fsubr st(2) */ ST(0) = ST(2) - ST(0);
    /* 00878322: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00878324: fstp dword ptr [eax] */ W_F32((u32)(r_eax), ST(0)); FPOP();
    /* 00878326: fld dword ptr [esi + 4] */ FPUSH(R_F32((u32)(r_esi+0x4u)));
    /* 00878329: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0087832b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0087832d: fstp dword ptr [eax + 4] */ W_F32((u32)(r_eax+0x4u), ST(0)); FPOP();
    /* 00878330: fld dword ptr [ebx + 0x30] */ FPUSH(R_F32((u32)(r_ebx+0x30u)));
    /* 00878333: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00878335: add eax, -0x20 */ {  u32 a = r_eax; u32 b = 0xffffffe0u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00878338: fld dword ptr [ebx + 0x34] */ FPUSH(R_F32((u32)(r_ebx+0x34u)));
    /* 0087833b: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0087833d: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0087833f: fstp dword ptr [esi] */ W_F32((u32)(r_esi), ST(0)); FPOP();
    /* 00878341: fld dword ptr [ebx + 0x34] */ FPUSH(R_F32((u32)(r_ebx+0x34u)));
    /* 00878344: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00878346: fld dword ptr [ebx + 0x30] */ FPUSH(R_F32((u32)(r_ebx+0x30u)));
    /* 00878349: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0087834b: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0087834d: add ebx, 0x40 */ {  u32 a = r_ebx; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00878350: add esi, -0x20 */ {  u32 a = r_esi; u32 b = 0xffffffe0u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00878353: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00878355: jae 0x878248 */ if (!fC) goto L_00878248;
L_0087835b:; BB(0x0087835b);
    /* 0087835b: fstp dword ptr [esi + 0x24] */ W_F32((u32)(r_esi+0x24u), ST(0)); FPOP();
L_0087835e:; BB(0x0087835e);
    /* 0087835e: mov esi, 1 */ r_esi = 0x1u;
    /* 00878363: add ebp, -7 */ {  u32 a = r_ebp; u32 b = 0xfffffff9u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00878366: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00878368: jle 0x878532 */ if ((fZ||fS!=fO)) goto L_00878532;
L_0087836e:; BB(0x0087836e);
    /* 0087836e: mov dword ptr [esp + 0x10], ebp */ W32((u32)(r_esp+0x10u), r_ebp);
    /* 00878372: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
    /* 00878376: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0087837a: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
L_0087837d:; BB(0x0087837d);
    /* 0087837d: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 0087837f: mov ecx, esi */ r_ecx = r_esi;
    /* 00878381: mov eax, 1 */ r_eax = 0x1u;
    /* 00878386: shl eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00878388: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 0087838a: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0087838e: jle 0x878519 */ if ((fZ||fS!=fO)) goto L_00878519;
L_00878394:; BB(0x00878394);
    /* 00878394: mov ecx, esi */ r_ecx = r_esi;
    /* 00878396: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 00878399: sar edi, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 0087839b: lea ebx, [edi + edi] */ r_ebx = (u32)(r_edi+r_edi);
    /* 0087839e: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008783a0: mov ecx, esi */ r_ecx = r_esi;
    /* 008783a2: mov edx, 4 */ r_edx = 0x4u;
    /* 008783a7: sar edi, 1 */ { u32 c = (1u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r; fC = ((i32)a >> ((c > 31 ? 31 : c - 1))) & 1; fO = 0; fZ = (r == 0); fS = (r >> 31) & 1; fP = !__builtin_parity(r & 0xffu); } }
    /* 008783a9: shl edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 008783ab: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008783ad: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008783af: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008783b1: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008783b3: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 008783b7: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 008783bb: mov edx, ebp */ r_edx = r_ebp;
    /* 008783bd: imul edx, ebx */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_ebx; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008783c0: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008783c2: mov ecx, ebp */ r_ecx = r_ebp;
    /* 008783c4: imul ecx, ebx */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)r_ebx; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008783c7: lea eax, [eax + ecx - 0x20] */ r_eax = (u32)(r_eax+r_ecx+0xffffffe0u);
    /* 008783cb: mov dword ptr [esp + 0x18], edi */ W32((u32)(r_esp+0x18u), r_edi);
    /* 008783cf: mov dword ptr [esp + 0xc], esi */ W32((u32)(r_esp+0xcu), r_esi);
L_008783d3:; BB(0x008783d3);
    /* 008783d3: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
    /* 008783d7: lea esi, [ebx + eax] */ r_esi = (u32)(r_ebx+r_eax);
    /* 008783da: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 008783de: lea ecx, [eax + ecx] */ r_ecx = (u32)(r_eax+r_ecx);
    /* 008783e1: mov dword ptr [esp + 0x14], ebp */ W32((u32)(r_esp+0x14u), r_ebp);
    /* 008783e5: mov ebp, dword ptr [esp + 0x1c] */ r_ebp = R32((u32)(r_esp+0x1cu));
    /* 008783e9: jmp 0x8783ee */ goto L_008783ee;
L_008783eb:; BB(0x008783eb);
    /* 008783eb: fstp dword ptr [ecx + 0x24] */ W_F32((u32)(r_ecx+0x24u), ST(0)); FPOP();
L_008783ee:; BB(0x008783ee);
    /* 008783ee: fld dword ptr [esi + 0x18] */ FPUSH(R_F32((u32)(r_esi+0x18u)));
    /* 008783f1: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 008783f3: fld dword ptr [ecx + 0x18] */ FPUSH(R_F32((u32)(r_ecx+0x18u)));
    /* 008783f6: fsub st(1), st(0) */ ST(1) = ST(1) - ST(0);
    /* 008783f8: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 008783fa: fld dword ptr [esi + 0x1c] */ FPUSH(R_F32((u32)(r_esi+0x1cu)));
    /* 008783fd: fld dword ptr [ecx + 0x1c] */ FPUSH(R_F32((u32)(r_ecx+0x1cu)));
    /* 00878400: fsubr st(1) */ ST(0) = ST(1) - ST(0);
    /* 00878402: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00878404: fstp dword ptr [esi + 0x18] */ W_F32((u32)(r_esi+0x18u), ST(0)); FPOP();
    /* 00878407: fld dword ptr [ecx + 0x1c] */ FPUSH(R_F32((u32)(r_ecx+0x1cu)));
    /* 0087840a: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0087840c: fstp dword ptr [esi + 0x1c] */ W_F32((u32)(r_esi+0x1cu), ST(0)); FPOP();
    /* 0087840f: fld dword ptr [edi + 4] */ FPUSH(R_F32((u32)(r_edi+0x4u)));
    /* 00878412: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00878414: fld dword ptr [edi] */ FPUSH(R_F32((u32)(r_edi)));
    /* 00878416: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00878418: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0087841a: fstp dword ptr [ecx + 0x18] */ W_F32((u32)(r_ecx+0x18u), ST(0)); FPOP();
    /* 0087841d: fld dword ptr [edi] */ FPUSH(R_F32((u32)(r_edi)));
    /* 0087841f: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00878421: fld dword ptr [edi + 4] */ FPUSH(R_F32((u32)(r_edi+0x4u)));
    /* 00878424: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00878426: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00878428: add edi, ebp */ {  u32 a = r_edi; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0087842a: fstp dword ptr [ecx + 0x1c] */ W_F32((u32)(r_ecx+0x1cu), ST(0)); FPOP();
    /* 0087842d: fld dword ptr [esi + 0x10] */ FPUSH(R_F32((u32)(r_esi+0x10u)));
    /* 00878430: fld dword ptr [ecx + 0x10] */ FPUSH(R_F32((u32)(r_ecx+0x10u)));
    /* 00878433: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00878435: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 00878437: fld dword ptr [esi + 0x14] */ FPUSH(R_F32((u32)(r_esi+0x14u)));
    /* 0087843a: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0087843c: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 0087843e: fld dword ptr [ecx + 0x14] */ FPUSH(R_F32((u32)(r_ecx+0x14u)));
    /* 00878441: fsubr st(2) */ ST(0) = ST(2) - ST(0);
    /* 00878443: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00878445: fstp dword ptr [esi + 0x10] */ W_F32((u32)(r_esi+0x10u), ST(0)); FPOP();
    /* 00878448: fld dword ptr [ecx + 0x14] */ FPUSH(R_F32((u32)(r_ecx+0x14u)));
    /* 0087844b: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0087844d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0087844f: fstp dword ptr [esi + 0x14] */ W_F32((u32)(r_esi+0x14u), ST(0)); FPOP();
    /* 00878452: fld dword ptr [edi] */ FPUSH(R_F32((u32)(r_edi)));
    /* 00878454: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00878456: fld dword ptr [edi + 4] */ FPUSH(R_F32((u32)(r_edi+0x4u)));
    /* 00878459: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0087845b: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0087845d: fstp dword ptr [ecx + 0x10] */ W_F32((u32)(r_ecx+0x10u), ST(0)); FPOP();
    /* 00878460: fld dword ptr [edi + 4] */ FPUSH(R_F32((u32)(r_edi+0x4u)));
    /* 00878463: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00878465: fld dword ptr [edi] */ FPUSH(R_F32((u32)(r_edi)));
    /* 00878467: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00878469: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0087846b: add edi, ebp */ {  u32 a = r_edi; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0087846d: fstp dword ptr [ecx + 0x14] */ W_F32((u32)(r_ecx+0x14u), ST(0)); FPOP();
    /* 00878470: fld dword ptr [esi + 8] */ FPUSH(R_F32((u32)(r_esi+0x8u)));
    /* 00878473: fld dword ptr [ecx + 8] */ FPUSH(R_F32((u32)(r_ecx+0x8u)));
    /* 00878476: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00878478: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 0087847a: fld dword ptr [esi + 0xc] */ FPUSH(R_F32((u32)(r_esi+0xcu)));
    /* 0087847d: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0087847f: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 00878481: fld dword ptr [ecx + 0xc] */ FPUSH(R_F32((u32)(r_ecx+0xcu)));
    /* 00878484: fsubr st(2) */ ST(0) = ST(2) - ST(0);
    /* 00878486: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00878488: fstp dword ptr [esi + 8] */ W_F32((u32)(r_esi+0x8u), ST(0)); FPOP();
    /* 0087848b: fld dword ptr [ecx + 0xc] */ FPUSH(R_F32((u32)(r_ecx+0xcu)));
    /* 0087848e: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00878490: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00878492: fstp dword ptr [esi + 0xc] */ W_F32((u32)(r_esi+0xcu), ST(0)); FPOP();
    /* 00878495: fld dword ptr [edi] */ FPUSH(R_F32((u32)(r_edi)));
    /* 00878497: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00878499: fld dword ptr [edi + 4] */ FPUSH(R_F32((u32)(r_edi+0x4u)));
    /* 0087849c: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0087849e: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008784a0: fstp dword ptr [ecx + 8] */ W_F32((u32)(r_ecx+0x8u), ST(0)); FPOP();
    /* 008784a3: fld dword ptr [edi + 4] */ FPUSH(R_F32((u32)(r_edi+0x4u)));
    /* 008784a6: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 008784a8: fld dword ptr [edi] */ FPUSH(R_F32((u32)(r_edi)));
    /* 008784aa: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 008784ac: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 008784ae: add edi, ebp */ {  u32 a = r_edi; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008784b0: fstp dword ptr [ecx + 0xc] */ W_F32((u32)(r_ecx+0xcu), ST(0)); FPOP();
    /* 008784b3: fld dword ptr [esi] */ FPUSH(R_F32((u32)(r_esi)));
    /* 008784b5: fld dword ptr [ecx] */ FPUSH(R_F32((u32)(r_ecx)));
    /* 008784b7: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 008784b9: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 008784bb: fld dword ptr [esi + 4] */ FPUSH(R_F32((u32)(r_esi+0x4u)));
    /* 008784be: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 008784c0: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 008784c2: fld dword ptr [ecx + 4] */ FPUSH(R_F32((u32)(r_ecx+0x4u)));
    /* 008784c5: fsubr st(2) */ ST(0) = ST(2) - ST(0);
    /* 008784c7: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 008784c9: fstp dword ptr [esi] */ W_F32((u32)(r_esi), ST(0)); FPOP();
    /* 008784cb: fld dword ptr [ecx + 4] */ FPUSH(R_F32((u32)(r_ecx+0x4u)));
    /* 008784ce: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 008784d0: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 008784d2: fstp dword ptr [esi + 4] */ W_F32((u32)(r_esi+0x4u), ST(0)); FPOP();
    /* 008784d5: fld dword ptr [edi] */ FPUSH(R_F32((u32)(r_edi)));
    /* 008784d7: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008784d9: add esi, -0x20 */ {  u32 a = r_esi; u32 b = 0xffffffe0u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008784dc: fld dword ptr [edi + 4] */ FPUSH(R_F32((u32)(r_edi+0x4u)));
    /* 008784df: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 008784e1: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008784e3: fstp dword ptr [ecx] */ W_F32((u32)(r_ecx), ST(0)); FPOP();
    /* 008784e5: fld dword ptr [edi + 4] */ FPUSH(R_F32((u32)(r_edi+0x4u)));
    /* 008784e8: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 008784ea: fld dword ptr [edi] */ FPUSH(R_F32((u32)(r_edi)));
    /* 008784ec: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 008784ee: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 008784f0: add edi, ebp */ {  u32 a = r_edi; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008784f2: add ecx, -0x20 */ {  u32 a = r_ecx; u32 b = 0xffffffe0u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008784f5: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008784f7: jae 0x8783eb */ if (!fC) goto L_008783eb;
L_008784fd:; BB(0x008784fd);
    /* 008784fd: fstp dword ptr [ecx + 0x24] */ W_F32((u32)(r_ecx+0x24u), ST(0)); FPOP();
    /* 00878500: mov ebp, dword ptr [esp + 0x14] */ r_ebp = R32((u32)(r_esp+0x14u));
    /* 00878504: add edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00878506: add eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00878508: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00878509: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 0087850d: cmp ebp, ecx */ {  u32 a = r_ebp; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087850f: jl 0x8783d3 */ if ((fS!=fO)) goto L_008783d3;
L_00878515:; BB(0x00878515);
    /* 00878515: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
L_00878519:; BB(0x00878519);
    /* 00878519: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0087851a: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0087851e: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0087851f: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00878523: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00878525: jg 0x87837d */ if ((!fZ&&fS==fO)) goto L_0087837d;
L_0087852b:; BB(0x0087852b);
    /* 0087852b: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0087852f: mov ecx, dword ptr [esp] */ r_ecx = R32((u32)(r_esp));
L_00878532:; BB(0x00878532);
    /* 00878532: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00878534: jle 0x878b35 */ if ((fZ||fS!=fO)) goto L_00878b35;
L_0087853a:; BB(0x0087853a);
    /* 0087853a: fld dword ptr [0x99a818] */ FPUSH(R_F32((u32)(0x99a818u)));
    /* 00878540: lea eax, [edx + ecx*4] */ r_eax = (u32)(r_edx+r_ecx*4);
    /* 00878543: fld dword ptr [0x99a814] */ FPUSH(R_F32((u32)(0x99a814u)));
    /* 00878549: fld dword ptr [0x99a810] */ FPUSH(R_F32((u32)(0x99a810u)));
    /* 0087854f: fld dword ptr [0x99a80c] */ FPUSH(R_F32((u32)(0x99a80cu)));
    /* 00878555: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00878557: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00878559: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087855b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087855d: jmp 0x878565 */ goto L_00878565;
L_0087855f:; BB(0x0087855f);
    /* 0087855f: fstp dword ptr [edx - 4] */ W_F32((u32)(r_edx+0xfffffffcu), ST(0)); FPOP();
    /* 00878562: fstp dword ptr [edx - 0xc] */ W_F32((u32)(r_edx+0xfffffff4u), ST(0)); FPOP();
L_00878565:; BB(0x00878565);
    /* 00878565: fld dword ptr [edx + 0x78] */ FPUSH(R_F32((u32)(r_edx+0x78u)));
    /* 00878568: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0087856a: fld dword ptr [edx + 0x38] */ FPUSH(R_F32((u32)(r_edx+0x38u)));
    /* 0087856d: fsub st(1), st(0) */ ST(1) = ST(1) - ST(0);
    /* 0087856f: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00878571: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 00878575: fld dword ptr [edx + 0x7c] */ FPUSH(R_F32((u32)(r_edx+0x7cu)));
    /* 00878578: fld dword ptr [edx + 0x3c] */ FPUSH(R_F32((u32)(r_edx+0x3cu)));
    /* 0087857b: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 0087857d: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 0087857f: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 00878583: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00878585: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00878587: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 0087858b: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0087858f: fld dword ptr [edx + 0x70] */ FPUSH(R_F32((u32)(r_edx+0x70u)));
    /* 00878592: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00878594: fld dword ptr [edx + 0x30] */ FPUSH(R_F32((u32)(r_edx+0x30u)));
    /* 00878597: fsub st(1), st(0) */ ST(1) = ST(1) - ST(0);
    /* 00878599: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0087859b: fld dword ptr [edx + 0x74] */ FPUSH(R_F32((u32)(r_edx+0x74u)));
    /* 0087859e: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 008785a0: fld dword ptr [edx + 0x34] */ FPUSH(R_F32((u32)(r_edx+0x34u)));
    /* 008785a3: fsub st(1), st(0) */ ST(1) = ST(1) - ST(0);
    /* 008785a5: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 008785a7: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 008785a9: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 008785ad: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 008785b1: fld dword ptr [0x99a818] */ FPUSH(R_F32((u32)(0x99a818u)));
    /* 008785b7: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 008785b9: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 008785bb: fld dword ptr [0x99a814] */ FPUSH(R_F32((u32)(0x99a814u)));
    /* 008785c1: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 008785c3: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 008785c5: fsubp st(2) */ ST(2) = ST(2) - ST(0); FPOP();
    /* 008785c7: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 008785c9: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 008785cb: fmul st(4), st(0) */ ST(4) = ST(4) * ST(0);
    /* 008785cd: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 008785cf: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 008785d3: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 008785d5: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 008785d7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 008785d9: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
    /* 008785dd: fld dword ptr [edx + 0x68] */ FPUSH(R_F32((u32)(r_edx+0x68u)));
    /* 008785e0: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 008785e2: fld dword ptr [edx + 0x28] */ FPUSH(R_F32((u32)(r_edx+0x28u)));
    /* 008785e5: fsub st(1), st(0) */ ST(1) = ST(1) - ST(0);
    /* 008785e7: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 008785e9: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 008785eb: fld dword ptr [edx + 0x6c] */ FPUSH(R_F32((u32)(r_edx+0x6cu)));
    /* 008785ee: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 008785f0: fld dword ptr [edx + 0x2c] */ FPUSH(R_F32((u32)(r_edx+0x2cu)));
    /* 008785f3: fsub st(1), st(0) */ ST(1) = ST(1) - ST(0);
    /* 008785f5: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 008785f7: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 008785f9: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
    /* 008785fd: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 008785ff: fsub st(3) */ ST(0) = ST(0) - ST(3);
    /* 00878601: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00878603: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00878605: fstp dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 00878609: fld dword ptr [0x99a810] */ FPUSH(R_F32((u32)(0x99a810u)));
    /* 0087860f: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 00878611: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00878613: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00878615: fstp dword ptr [esp + 0x4c] */ W_F32((u32)(r_esp+0x4cu), ST(0)); FPOP();
    /* 00878619: fstp dword ptr [esp + 0x50] */ W_F32((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 0087861d: fld dword ptr [edx + 0x60] */ FPUSH(R_F32((u32)(r_edx+0x60u)));
    /* 00878620: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00878622: fld dword ptr [edx + 0x20] */ FPUSH(R_F32((u32)(r_edx+0x20u)));
    /* 00878625: fsub st(1), st(0) */ ST(1) = ST(1) - ST(0);
    /* 00878627: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00878629: fld dword ptr [edx + 0x64] */ FPUSH(R_F32((u32)(r_edx+0x64u)));
    /* 0087862c: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0087862e: fld st(5) */ { long double v = ST(5); FPUSH(v); }
    /* 00878630: fld dword ptr [edx + 0x24] */ FPUSH(R_F32((u32)(r_edx+0x24u)));
    /* 00878633: fsub st(2), st(0) */ ST(2) = ST(2) - ST(0);
    /* 00878635: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 00878637: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00878639: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 0087863d: fld st(4) */ { long double v = ST(4); FPUSH(v); }
    /* 0087863f: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00878641: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00878643: fstp dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 00878647: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 00878649: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0087864b: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0087864d: fstp dword ptr [esp + 0x5c] */ W_F32((u32)(r_esp+0x5cu), ST(0)); FPOP();
    /* 00878651: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00878653: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00878655: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00878657: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00878659: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 0087865d: fld dword ptr [edx + 0x58] */ FPUSH(R_F32((u32)(r_edx+0x58u)));
    /* 00878660: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00878662: fld dword ptr [edx + 0x18] */ FPUSH(R_F32((u32)(r_edx+0x18u)));
    /* 00878665: fsub st(1), st(0) */ ST(1) = ST(1) - ST(0);
    /* 00878667: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00878669: fstp dword ptr [esp + 0x64] */ W_F32((u32)(r_esp+0x64u), ST(0)); FPOP();
    /* 0087866d: fld dword ptr [edx + 0x1c] */ FPUSH(R_F32((u32)(r_edx+0x1cu)));
    /* 00878670: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00878672: fld dword ptr [edx + 0x5c] */ FPUSH(R_F32((u32)(r_edx+0x5cu)));
    /* 00878675: fsub st(1), st(0) */ ST(1) = ST(1) - ST(0);
    /* 00878677: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00878679: fstp dword ptr [esp + 0x68] */ W_F32((u32)(r_esp+0x68u), ST(0)); FPOP();
    /* 0087867d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0087867f: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
    /* 00878683: fstp dword ptr [esp + 0x70] */ W_F32((u32)(r_esp+0x70u), ST(0)); FPOP();
    /* 00878687: fld dword ptr [edx + 0x10] */ FPUSH(R_F32((u32)(r_edx+0x10u)));
    /* 0087868a: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0087868c: fld dword ptr [edx + 0x50] */ FPUSH(R_F32((u32)(r_edx+0x50u)));
    /* 0087868f: fsub st(1), st(0) */ ST(1) = ST(1) - ST(0);
    /* 00878691: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00878693: fld st(3) */ { long double v = ST(3); FPUSH(v); }
    /* 00878695: fld dword ptr [edx + 0x14] */ FPUSH(R_F32((u32)(r_edx+0x14u)));
    /* 00878698: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0087869a: fld dword ptr [edx + 0x54] */ FPUSH(R_F32((u32)(r_edx+0x54u)));
    /* 0087869d: fsub st(1), st(0) */ ST(1) = ST(1) - ST(0);
    /* 0087869f: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 008786a1: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 008786a3: fstp dword ptr [esp + 0x74] */ W_F32((u32)(r_esp+0x74u), ST(0)); FPOP();
    /* 008786a7: fld st(4) */ { long double v = ST(4); FPUSH(v); }
    /* 008786a9: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 008786ab: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 008786ad: fstp dword ptr [esp + 0x78] */ W_F32((u32)(r_esp+0x78u), ST(0)); FPOP();
    /* 008786b1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 008786b3: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 008786b5: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008786b7: fstp dword ptr [esp + 0x7c] */ W_F32((u32)(r_esp+0x7cu), ST(0)); FPOP();
    /* 008786bb: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 008786bd: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 008786bf: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 008786c1: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 008786c3: fstp dword ptr [esp + 0x80] */ W_F32((u32)(r_esp+0x80u), ST(0)); FPOP();
    /* 008786ca: fld dword ptr [edx + 8] */ FPUSH(R_F32((u32)(r_edx+0x8u)));
    /* 008786cd: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 008786cf: fld dword ptr [edx + 0x48] */ FPUSH(R_F32((u32)(r_edx+0x48u)));
    /* 008786d2: fsub st(1), st(0) */ ST(1) = ST(1) - ST(0);
    /* 008786d4: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 008786d6: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 008786d8: fld dword ptr [edx + 0xc] */ FPUSH(R_F32((u32)(r_edx+0xcu)));
    /* 008786db: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 008786dd: fld dword ptr [edx + 0x4c] */ FPUSH(R_F32((u32)(r_edx+0x4cu)));
    /* 008786e0: fsub st(1), st(0) */ ST(1) = ST(1) - ST(0);
    /* 008786e2: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 008786e4: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 008786e6: fstp dword ptr [esp + 0x84] */ W_F32((u32)(r_esp+0x84u), ST(0)); FPOP();
    /* 008786ed: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 008786ef: fadd st(3) */ ST(0) = ST(0) + ST(3);
    /* 008786f1: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 008786f3: fsubp st(3) */ ST(3) = ST(3) - ST(0); FPOP();
    /* 008786f5: fstp dword ptr [esp + 0x88] */ W_F32((u32)(r_esp+0x88u), ST(0)); FPOP();
    /* 008786fc: fld dword ptr [0x99a810] */ FPUSH(R_F32((u32)(0x99a810u)));
    /* 00878702: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 00878704: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00878706: fstp dword ptr [esp + 0x8c] */ W_F32((u32)(r_esp+0x8cu), ST(0)); FPOP();
    /* 0087870d: fstp dword ptr [esp + 0x90] */ W_F32((u32)(r_esp+0x90u), ST(0)); FPOP();
    /* 00878714: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 00878716: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00878718: fld dword ptr [edx + 0x40] */ FPUSH(R_F32((u32)(r_edx+0x40u)));
    /* 0087871b: fsub st(1), st(0) */ ST(1) = ST(1) - ST(0);
    /* 0087871d: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0087871f: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 00878722: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00878724: fld st(5) */ { long double v = ST(5); FPUSH(v); }
    /* 00878726: fld dword ptr [edx + 0x44] */ FPUSH(R_F32((u32)(r_edx+0x44u)));
    /* 00878729: fsub st(2), st(0) */ ST(2) = ST(2) - ST(0);
    /* 0087872b: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 0087872d: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0087872f: fstp dword ptr [esp + 0x94] */ W_F32((u32)(r_esp+0x94u), ST(0)); FPOP();
    /* 00878736: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00878738: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 0087873a: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0087873c: fmul st(4), st(0) */ ST(4) = ST(4) * ST(0);
    /* 0087873e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00878740: fstp dword ptr [esp + 0x98] */ W_F32((u32)(r_esp+0x98u), ST(0)); FPOP();
    /* 00878747: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00878749: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0087874b: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0087874d: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0087874f: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00878751: fmul dword ptr [0x99a80c] */ ST(0) = ST(0) * R_F32((u32)(0x99a80cu));
    /* 00878757: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00878759: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0087875b: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 0087875f: fsub st(1), st(0) */ ST(1) = ST(1) - ST(0);
    /* 00878761: fld st(3) */ { long double v = ST(3); FPUSH(v); }
    /* 00878763: fld dword ptr [esp + 0x5c] */ FPUSH(R_F32((u32)(r_esp+0x5cu)));
    /* 00878767: fsub st(1), st(0) */ ST(1) = ST(1) - ST(0);
    /* 00878769: faddp st(5) */ ST(5) = ST(5) + ST(0); FPOP();
    /* 0087876b: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0087876d: fstp dword ptr [esp + 0x5c] */ W_F32((u32)(r_esp+0x5cu), ST(0)); FPOP();
    /* 00878771: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00878773: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00878775: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00878777: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 0087877b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0087877d: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0087877f: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00878781: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00878783: fld dword ptr [0x99a810] */ FPUSH(R_F32((u32)(0x99a810u)));
    /* 00878789: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 0087878b: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 0087878d: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0087878f: fstp dword ptr [esp + 0x9c] */ W_F32((u32)(r_esp+0x9cu), ST(0)); FPOP();
    /* 00878796: fstp dword ptr [esp + 0xa0] */ W_F32((u32)(r_esp+0xa0u), ST(0)); FPOP();
    /* 0087879d: fld dword ptr [esp + 0x90] */ FPUSH(R_F32((u32)(r_esp+0x90u)));
    /* 008787a4: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 008787a6: fld dword ptr [esp + 0x50] */ FPUSH(R_F32((u32)(r_esp+0x50u)));
    /* 008787aa: fsub st(1), st(0) */ ST(1) = ST(1) - ST(0);
    /* 008787ac: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 008787ae: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 008787b2: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 008787b4: fld dword ptr [esp + 0x8c] */ FPUSH(R_F32((u32)(r_esp+0x8cu)));
    /* 008787bb: fsub st(1), st(0) */ ST(1) = ST(1) - ST(0);
    /* 008787bd: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 008787bf: fstp dword ptr [esp + 0xa4] */ W_F32((u32)(r_esp+0xa4u), ST(0)); FPOP();
    /* 008787c6: fstp dword ptr [esp + 0x4c] */ W_F32((u32)(r_esp+0x4cu), ST(0)); FPOP();
    /* 008787ca: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 008787cc: fstp dword ptr [esp + 0x50] */ W_F32((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 008787d0: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 008787d4: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 008787d6: fld dword ptr [esp + 0x7c] */ FPUSH(R_F32((u32)(r_esp+0x7cu)));
    /* 008787da: fsub st(1), st(0) */ ST(1) = ST(1) - ST(0);
    /* 008787dc: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 008787de: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 008787e0: fld dword ptr [esp + 0x40] */ FPUSH(R_F32((u32)(r_esp+0x40u)));
    /* 008787e4: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 008787e6: fld dword ptr [esp + 0x80] */ FPUSH(R_F32((u32)(r_esp+0x80u)));
    /* 008787ed: fsub st(1), st(0) */ ST(1) = ST(1) - ST(0);
    /* 008787ef: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 008787f1: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 008787f3: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 008787f7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 008787f9: fsub st(3) */ ST(0) = ST(0) - ST(3);
    /* 008787fb: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 008787fd: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 008787ff: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
    /* 00878803: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00878805: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00878807: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 00878809: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0087880b: fstp dword ptr [esp + 0x90] */ W_F32((u32)(r_esp+0x90u), ST(0)); FPOP();
    /* 00878812: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 00878816: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00878818: fld dword ptr [esp + 0x68] */ FPUSH(R_F32((u32)(r_esp+0x68u)));
    /* 0087881c: fsub st(1), st(0) */ ST(1) = ST(1) - ST(0);
    /* 0087881e: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00878820: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 00878824: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00878826: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
    /* 0087882a: fsub st(1), st(0) */ ST(1) = ST(1) - ST(0);
    /* 0087882c: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0087882e: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00878830: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 00878834: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00878836: fadd st(4) */ ST(0) = ST(0) + ST(4);
    /* 00878838: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0087883a: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 0087883e: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00878840: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00878842: fld st(3) */ { long double v = ST(3); FPUSH(v); }
    /* 00878844: fld dword ptr [esp + 0x9c] */ FPUSH(R_F32((u32)(r_esp+0x9cu)));
    /* 0087884b: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 0087884d: fsubp st(5) */ ST(5) = ST(5) - ST(0); FPOP();
    /* 0087884f: fld st(3) */ { long double v = ST(3); FPUSH(v); }
    /* 00878851: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00878853: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00878855: fsubp st(4) */ ST(4) = ST(4) - ST(0); FPOP();
    /* 00878857: fstp dword ptr [edx + 0x18] */ W_F32((u32)(r_edx+0x18u), ST(0)); FPOP();
    /* 0087885a: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 0087885c: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0087885e: fstp dword ptr [edx + 0x10] */ W_F32((u32)(r_edx+0x10u), ST(0)); FPOP();
    /* 00878861: fld dword ptr [esp + 0x90] */ FPUSH(R_F32((u32)(r_esp+0x90u)));
    /* 00878868: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0087886a: fld dword ptr [esp + 0xa0] */ FPUSH(R_F32((u32)(r_esp+0xa0u)));
    /* 00878871: fsub st(1), st(0) */ ST(1) = ST(1) - ST(0);
    /* 00878873: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00878875: fld dword ptr [esp + 0xa4] */ FPUSH(R_F32((u32)(r_esp+0xa4u)));
    /* 0087887c: fsub st(5), st(0) */ ST(5) = ST(5) - ST(0);
    /* 0087887e: faddp st(4) */ ST(4) = ST(4) + ST(0); FPOP();
    /* 00878880: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00878882: fstp dword ptr [esp + 0x9c] */ W_F32((u32)(r_esp+0x9cu), ST(0)); FPOP();
    /* 00878889: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 0087888b: fadd st(4) */ ST(0) = ST(0) + ST(4);
    /* 0087888d: fstp dword ptr [edx] */ W_F32((u32)(r_edx), ST(0)); FPOP();
    /* 0087888f: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00878891: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00878893: fld st(3) */ { long double v = ST(3); FPUSH(v); }
    /* 00878895: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00878897: fstp dword ptr [edx + 8] */ W_F32((u32)(r_edx+0x8u), ST(0)); FPOP();
    /* 0087889a: fld dword ptr [esp + 0x9c] */ FPUSH(R_F32((u32)(r_esp+0x9cu)));
    /* 008788a1: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 008788a3: fsubrp st(4) */ ST(4) = ST(0) - ST(4); FPOP();
    /* 008788a5: fstp dword ptr [edx + 0xc] */ W_F32((u32)(r_edx+0xcu), ST(0)); FPOP();
    /* 008788a8: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 008788aa: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 008788ac: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 008788ae: fstp dword ptr [edx + 4] */ W_F32((u32)(r_edx+0x4u), ST(0)); FPOP();
    /* 008788b1: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 008788b3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 008788b5: fstp dword ptr [edx + 0x1c] */ W_F32((u32)(r_edx+0x1cu), ST(0)); FPOP();
    /* 008788b8: fstp dword ptr [edx + 0x14] */ W_F32((u32)(r_edx+0x14u), ST(0)); FPOP();
    /* 008788bb: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 008788bf: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 008788c1: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 008788c5: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 008788c7: fsubp st(2) */ ST(2) = ST(2) - ST(0); FPOP();
    /* 008788c9: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 008788cd: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 008788cf: fld dword ptr [esp + 0x5c] */ FPUSH(R_F32((u32)(r_esp+0x5cu)));
    /* 008788d3: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 008788d5: fsubp st(2) */ ST(2) = ST(2) - ST(0); FPOP();
    /* 008788d7: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 008788d9: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 008788db: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 008788dd: fsubp st(3) */ ST(3) = ST(3) - ST(0); FPOP();
    /* 008788df: fstp dword ptr [edx + 0x38] */ W_F32((u32)(r_edx+0x38u), ST(0)); FPOP();
    /* 008788e2: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 008788e4: fstp dword ptr [edx + 0x30] */ W_F32((u32)(r_edx+0x30u), ST(0)); FPOP();
    /* 008788e7: fld dword ptr [esp + 0x40] */ FPUSH(R_F32((u32)(r_esp+0x40u)));
    /* 008788eb: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 008788ed: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 008788f1: fsub st(1), st(0) */ ST(1) = ST(1) - ST(0);
    /* 008788f3: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 008788f5: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 008788f9: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 008788fb: fld dword ptr [esp + 0x50] */ FPUSH(R_F32((u32)(r_esp+0x50u)));
    /* 008788ff: fsub st(1), st(0) */ ST(1) = ST(1) - ST(0);
    /* 00878901: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00878903: fstp dword ptr [esp + 0xa4] */ W_F32((u32)(r_esp+0xa4u), ST(0)); FPOP();
    /* 0087890a: fld st(4) */ { long double v = ST(4); FPUSH(v); }
    /* 0087890c: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0087890e: fstp dword ptr [edx + 0x20] */ W_F32((u32)(r_edx+0x20u), ST(0)); FPOP();
    /* 00878911: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00878913: fsubp st(4) */ ST(4) = ST(4) - ST(0); FPOP();
    /* 00878915: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 00878917: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00878919: fstp dword ptr [edx + 0x28] */ W_F32((u32)(r_edx+0x28u), ST(0)); FPOP();
    /* 0087891c: fld dword ptr [esp + 0xa4] */ FPUSH(R_F32((u32)(r_esp+0xa4u)));
    /* 00878923: fadd st(4), st(0) */ ST(4) = ST(4) + ST(0);
    /* 00878925: fsubrp st(3) */ ST(3) = ST(0) - ST(3); FPOP();
    /* 00878927: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00878929: fstp dword ptr [edx + 0x2c] */ W_F32((u32)(r_edx+0x2cu), ST(0)); FPOP();
    /* 0087892c: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0087892e: fadd st(3) */ ST(0) = ST(0) + ST(3);
    /* 00878930: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00878932: fstp dword ptr [edx + 0x24] */ W_F32((u32)(r_edx+0x24u), ST(0)); FPOP();
    /* 00878935: fsubp st(2) */ ST(2) = ST(2) - ST(0); FPOP();
    /* 00878937: fstp dword ptr [edx + 0x3c] */ W_F32((u32)(r_edx+0x3cu), ST(0)); FPOP();
    /* 0087893a: fstp dword ptr [edx + 0x34] */ W_F32((u32)(r_edx+0x34u), ST(0)); FPOP();
    /* 0087893d: fld dword ptr [esp + 0x98] */ FPUSH(R_F32((u32)(r_esp+0x98u)));
    /* 00878944: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00878946: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 0087894a: fsub st(1), st(0) */ ST(1) = ST(1) - ST(0);
    /* 0087894c: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0087894e: fld dword ptr [esp + 0x94] */ FPUSH(R_F32((u32)(r_esp+0x94u)));
    /* 00878955: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00878957: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 0087895b: fsub st(1), st(0) */ ST(1) = ST(1) - ST(0);
    /* 0087895d: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0087895f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00878961: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 00878965: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00878967: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00878969: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0087896b: fstp dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 0087896f: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00878971: fld dword ptr [0x99a810] */ FPUSH(R_F32((u32)(0x99a810u)));
    /* 00878977: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 00878979: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 0087897b: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0087897d: fstp dword ptr [esp + 0xa4] */ W_F32((u32)(r_esp+0xa4u), ST(0)); FPOP();
    /* 00878984: fstp dword ptr [esp + 0xa0] */ W_F32((u32)(r_esp+0xa0u), ST(0)); FPOP();
    /* 0087898b: fld dword ptr [esp + 0x88] */ FPUSH(R_F32((u32)(r_esp+0x88u)));
    /* 00878992: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00878994: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
    /* 00878998: fsub st(1), st(0) */ ST(1) = ST(1) - ST(0);
    /* 0087899a: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0087899c: fld dword ptr [esp + 0x44] */ FPUSH(R_F32((u32)(r_esp+0x44u)));
    /* 008789a0: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 008789a2: fld dword ptr [esp + 0x84] */ FPUSH(R_F32((u32)(r_esp+0x84u)));
    /* 008789a9: fsub st(1), st(0) */ ST(1) = ST(1) - ST(0);
    /* 008789ab: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 008789ad: fstp dword ptr [esp + 0x9c] */ W_F32((u32)(r_esp+0x9cu), ST(0)); FPOP();
    /* 008789b4: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
    /* 008789b8: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 008789ba: fstp dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 008789be: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 008789c2: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 008789c4: fld dword ptr [esp + 0x74] */ FPUSH(R_F32((u32)(r_esp+0x74u)));
    /* 008789c8: fsub st(1), st(0) */ ST(1) = ST(1) - ST(0);
    /* 008789ca: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 008789cc: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 008789ce: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 008789d2: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 008789d4: fld dword ptr [esp + 0x78] */ FPUSH(R_F32((u32)(r_esp+0x78u)));
    /* 008789d8: fsub st(1), st(0) */ ST(1) = ST(1) - ST(0);
    /* 008789da: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 008789dc: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 008789de: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 008789e2: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 008789e4: fsub st(3) */ ST(0) = ST(0) - ST(3);
    /* 008789e6: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 008789e8: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 008789ea: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 008789ee: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 008789f0: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008789f2: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 008789f4: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 008789f6: fstp dword ptr [esp + 0x98] */ W_F32((u32)(r_esp+0x98u), ST(0)); FPOP();
    /* 008789fd: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 00878a01: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00878a03: fld dword ptr [esp + 0x6c] */ FPUSH(R_F32((u32)(r_esp+0x6cu)));
    /* 00878a07: fsub st(1), st(0) */ ST(1) = ST(1) - ST(0);
    /* 00878a09: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00878a0b: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 00878a0f: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00878a11: fld dword ptr [esp + 0x70] */ FPUSH(R_F32((u32)(r_esp+0x70u)));
    /* 00878a15: fsub st(1), st(0) */ ST(1) = ST(1) - ST(0);
    /* 00878a17: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00878a19: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00878a1b: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 00878a1f: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00878a21: fadd st(4) */ ST(0) = ST(0) + ST(4);
    /* 00878a23: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00878a25: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 00878a29: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00878a2b: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00878a2d: fld st(3) */ { long double v = ST(3); FPUSH(v); }
    /* 00878a2f: fld dword ptr [esp + 0xa4] */ FPUSH(R_F32((u32)(r_esp+0xa4u)));
    /* 00878a36: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 00878a38: fsubp st(5) */ ST(5) = ST(5) - ST(0); FPOP();
    /* 00878a3a: fld st(3) */ { long double v = ST(3); FPUSH(v); }
    /* 00878a3c: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00878a3e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00878a40: fsubp st(4) */ ST(4) = ST(4) - ST(0); FPOP();
    /* 00878a42: fstp dword ptr [edx + 0x58] */ W_F32((u32)(r_edx+0x58u), ST(0)); FPOP();
    /* 00878a45: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00878a47: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00878a49: fstp dword ptr [edx + 0x50] */ W_F32((u32)(r_edx+0x50u), ST(0)); FPOP();
    /* 00878a4c: fld dword ptr [esp + 0x98] */ FPUSH(R_F32((u32)(r_esp+0x98u)));
    /* 00878a53: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00878a55: fld dword ptr [esp + 0xa0] */ FPUSH(R_F32((u32)(r_esp+0xa0u)));
    /* 00878a5c: fsub st(1), st(0) */ ST(1) = ST(1) - ST(0);
    /* 00878a5e: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00878a60: fld dword ptr [esp + 0x9c] */ FPUSH(R_F32((u32)(r_esp+0x9cu)));
    /* 00878a67: fsub st(5), st(0) */ ST(5) = ST(5) - ST(0);
    /* 00878a69: faddp st(4) */ ST(4) = ST(4) + ST(0); FPOP();
    /* 00878a6b: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00878a6d: fstp dword ptr [esp + 0xa4] */ W_F32((u32)(r_esp+0xa4u), ST(0)); FPOP();
    /* 00878a74: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00878a76: fadd st(4) */ ST(0) = ST(0) + ST(4);
    /* 00878a78: fstp dword ptr [edx + 0x40] */ W_F32((u32)(r_edx+0x40u), ST(0)); FPOP();
    /* 00878a7b: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00878a7d: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00878a7f: fld st(3) */ { long double v = ST(3); FPUSH(v); }
    /* 00878a81: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00878a83: fstp dword ptr [edx + 0x48] */ W_F32((u32)(r_edx+0x48u), ST(0)); FPOP();
    /* 00878a86: fld dword ptr [esp + 0xa4] */ FPUSH(R_F32((u32)(r_esp+0xa4u)));
    /* 00878a8d: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 00878a8f: fsubrp st(4) */ ST(4) = ST(0) - ST(4); FPOP();
    /* 00878a91: fstp dword ptr [edx + 0x4c] */ W_F32((u32)(r_edx+0x4cu), ST(0)); FPOP();
    /* 00878a94: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00878a96: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00878a98: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00878a9a: fstp dword ptr [edx + 0x44] */ W_F32((u32)(r_edx+0x44u), ST(0)); FPOP();
    /* 00878a9d: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 00878a9f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00878aa1: fstp dword ptr [edx + 0x5c] */ W_F32((u32)(r_edx+0x5cu), ST(0)); FPOP();
    /* 00878aa4: fstp dword ptr [edx + 0x54] */ W_F32((u32)(r_edx+0x54u), ST(0)); FPOP();
    /* 00878aa7: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 00878aab: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00878aad: fld dword ptr [esp + 0x44] */ FPUSH(R_F32((u32)(r_esp+0x44u)));
    /* 00878ab1: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 00878ab3: fsubp st(2) */ ST(2) = ST(2) - ST(0); FPOP();
    /* 00878ab5: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 00878ab9: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00878abb: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 00878abf: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 00878ac1: fsubp st(2) */ ST(2) = ST(2) - ST(0); FPOP();
    /* 00878ac3: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 00878ac5: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00878ac7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00878ac9: fsubp st(3) */ ST(3) = ST(3) - ST(0); FPOP();
    /* 00878acb: fstp dword ptr [edx + 0x78] */ W_F32((u32)(r_edx+0x78u), ST(0)); FPOP();
    /* 00878ace: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00878ad0: fstp dword ptr [edx + 0x70] */ W_F32((u32)(r_edx+0x70u), ST(0)); FPOP();
    /* 00878ad3: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 00878ad7: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00878ad9: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 00878add: fsub st(1), st(0) */ ST(1) = ST(1) - ST(0);
    /* 00878adf: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00878ae1: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 00878ae5: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00878ae7: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
    /* 00878aeb: fsub st(1), st(0) */ ST(1) = ST(1) - ST(0);
    /* 00878aed: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00878aef: fstp dword ptr [esp + 0xa4] */ W_F32((u32)(r_esp+0xa4u), ST(0)); FPOP();
    /* 00878af6: fld st(4) */ { long double v = ST(4); FPUSH(v); }
    /* 00878af8: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 00878afa: fstp dword ptr [edx + 0x60] */ W_F32((u32)(r_edx+0x60u), ST(0)); FPOP();
    /* 00878afd: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00878aff: fsubp st(4) */ ST(4) = ST(4) - ST(0); FPOP();
    /* 00878b01: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00878b03: fstp dword ptr [edx + 0x68] */ W_F32((u32)(r_edx+0x68u), ST(0)); FPOP();
    /* 00878b06: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00878b08: fld dword ptr [esp + 0xa4] */ FPUSH(R_F32((u32)(r_esp+0xa4u)));
    /* 00878b0f: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 00878b11: fsubrp st(3) */ ST(3) = ST(0) - ST(3); FPOP();
    /* 00878b13: fstp dword ptr [edx + 0x6c] */ W_F32((u32)(r_edx+0x6cu), ST(0)); FPOP();
    /* 00878b16: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00878b18: fadd st(3) */ ST(0) = ST(0) + ST(3);
    /* 00878b1a: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00878b1c: fstp dword ptr [edx + 0x64] */ W_F32((u32)(r_edx+0x64u), ST(0)); FPOP();
    /* 00878b1f: fsubp st(2) */ ST(2) = ST(2) - ST(0); FPOP();
    /* 00878b21: add edx, 0x80 */ {  u32 a = r_edx; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00878b27: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00878b29: jb 0x87855f */ if (fC) goto L_0087855f;
L_00878b2f:; BB(0x00878b2f);
    /* 00878b2f: fstp dword ptr [edx - 4] */ W_F32((u32)(r_edx+0xfffffffcu), ST(0)); FPOP();
    /* 00878b32: fstp dword ptr [edx - 0xc] */ W_F32((u32)(r_edx+0xfffffff4u), ST(0)); FPOP();
L_00878b35:; BB(0x00878b35);
    /* 00878b35: add esp, 0xa8 */ {  u32 a = r_esp; u32 b = 0xa8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00878b3b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00878b3c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00878b3d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00878b3e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00878b3f: ret  */ FN_RET(0x00878214); r_esp += 4; return;
}

void f_00878b40(void) /* sub_878B40 */
{
    FN_ENTER(0x00878b40);
    /* 00878b40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00878b41: mov ebp, esp */ r_ebp = r_esp;
    /* 00878b43: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00878b46: mov dword ptr [ebp - 0x18], edi */ W32((u32)(r_ebp+0xffffffe8u), r_edi);
    /* 00878b49: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00878b4c: mov dword ptr [ebp - 0x20], ebx */ W32((u32)(r_ebp+0xffffffe0u), r_ebx);
    /* 00878b4f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00878b52: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00878b55: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 00878b58: mov ebx, dword ptr [ecx] */ r_ebx = R32((u32)(r_ecx));
    /* 00878b5a: mov edi, ebx */ r_edi = r_ebx;
    /* 00878b5c: sar edi, 1 */ { u32 c = (1u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 00878b5e: mov eax, ebx */ r_eax = r_ebx;
    /* 00878b60: sar eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00878b63: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00878b66: mov esi, ebx */ r_esi = r_ebx;
    /* 00878b68: sar esi, 3 */ { u32 c = (3u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 00878b6b: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 00878b6e: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00878b70: call 0x858020 */ r_esp -= 4; W32(r_esp, 0x878b75u); f_00858020();
    /* 00878b75: and esp, 0xfffffff0 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 00878b78: mov eax, esp */ r_eax = r_esp;
    /* 00878b7a: mov dword ptr [ebp - 0x28], ebx */ W32((u32)(r_ebp+0xffffffd8u), r_ebx);
    /* 00878b7d: lea edx, [edi + edi] */ r_edx = (u32)(r_edi+r_edi);
    /* 00878b80: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00878b83: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00878b85: lea ecx, [edx + eax] */ r_ecx = (u32)(r_edx+r_eax);
    /* 00878b88: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 00878b8b: mov ebx, dword ptr [ebp + 0xc] */ r_ebx = R32((u32)(r_ebp+0xcu));
    /* 00878b8e: lea eax, [ebx + edx] */ r_eax = (u32)(r_ebx+r_edx);
    /* 00878b91: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00878b94: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00878b97: lea ebx, [ecx + ecx] */ r_ebx = (u32)(r_ecx+r_ecx);
    /* 00878b9a: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00878b9c: lea ecx, [ebx + eax] */ r_ecx = (u32)(r_ebx+r_eax);
    /* 00878b9f: lea eax, [eax + ebx + 4] */ r_eax = (u32)(r_eax+r_ebx+0x4u);
    /* 00878ba3: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00878ba6: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00878ba9: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 00878bac: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00878bae: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00878bb0: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00878bb2: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00878bb5: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00878bb8: jle 0x878c0f */ if ((fZ||fS!=fO)) goto L_00878c0f;
L_00878bba:; BB(0x00878bba);
    /* 00878bba: mov dword ptr [ebp - 0x28], ebx */ W32((u32)(r_ebp+0xffffffd8u), r_ebx);
    /* 00878bbd: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00878bc0: mov dword ptr [ebp - 0x34], edi */ W32((u32)(r_ebp+0xffffffccu), r_edi);
    /* 00878bc3: mov edi, dword ptr [ebp - 0x10] */ r_edi = R32((u32)(r_ebp+0xfffffff0u));
    /* 00878bc6: jmp 0x878bcc */ goto L_00878bcc;
L_00878bc8:; BB(0x00878bc8);
    /* 00878bc8: fstp dword ptr [edi + edx*4 - 4] */ W_F32((u32)(r_edi+r_edx*4+0xfffffffcu), ST(0)); FPOP();
L_00878bcc:; BB(0x00878bcc);
    /* 00878bcc: add ebx, -0x10 */ {  u32 a = r_ebx; u32 b = 0xfffffff0u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00878bcf: add ecx, -8 */ {  u32 a = r_ecx; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00878bd2: fld dword ptr [ebx + 8] */ FPUSH(R_F32((u32)(r_ebx+0x8u)));
    /* 00878bd5: fadd dword ptr [eax] */ ST(0) = ST(0) + R_F32((u32)(r_eax));
    /* 00878bd7: fld dword ptr [ebx] */ FPUSH(R_F32((u32)(r_ebx)));
    /* 00878bd9: fadd dword ptr [eax + 8] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x8u));
    /* 00878bdc: fld dword ptr [ecx] */ FPUSH(R_F32((u32)(r_ecx)));
    /* 00878bde: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00878be0: add eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00878be3: fld dword ptr [ecx + 4] */ FPUSH(R_F32((u32)(r_ecx+0x4u)));
    /* 00878be6: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00878be8: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00878bea: fstp dword ptr [edi + edx*4] */ W_F32((u32)(r_edi+r_edx*4), ST(0)); FPOP();
    /* 00878bed: fld dword ptr [ecx + 4] */ FPUSH(R_F32((u32)(r_ecx+0x4u)));
    /* 00878bf0: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00878bf2: fld dword ptr [ecx] */ FPUSH(R_F32((u32)(r_ecx)));
    /* 00878bf4: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00878bf6: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 00878bf8: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00878bfb: cmp edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00878bfd: jl 0x878bc8 */ if ((fS!=fO)) goto L_00878bc8;
L_00878bff:; BB(0x00878bff);
    /* 00878bff: fstp dword ptr [edi + edx*4 - 4] */ W_F32((u32)(r_edi+r_edx*4+0xfffffffcu), ST(0)); FPOP();
    /* 00878c03: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00878c06: mov edi, dword ptr [ebp - 0x34] */ r_edi = R32((u32)(r_ebp+0xffffffccu));
    /* 00878c09: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00878c0c: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
L_00878c0f:; BB(0x00878c0f);
    /* 00878c0f: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00878c12: lea eax, [eax + 4] */ r_eax = (u32)(r_eax+0x4u);
    /* 00878c15: neg esi */ { u32 x = r_esi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00878c17: add esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00878c19: cmp edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00878c1b: jge 0x878c6f */ if ((fS==fO)) goto L_00878c6f;
L_00878c1d:; BB(0x00878c1d);
    /* 00878c1d: mov dword ptr [ebp - 0x28], ebx */ W32((u32)(r_ebp+0xffffffd8u), r_ebx);
    /* 00878c20: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00878c23: mov dword ptr [ebp - 0x34], edi */ W32((u32)(r_ebp+0xffffffccu), r_edi);
    /* 00878c26: mov edi, dword ptr [ebp - 0x10] */ r_edi = R32((u32)(r_ebp+0xfffffff0u));
    /* 00878c29: jmp 0x878c2f */ goto L_00878c2f;
L_00878c2b:; BB(0x00878c2b);
    /* 00878c2b: fstp dword ptr [edi + edx*4 - 4] */ W_F32((u32)(r_edi+r_edx*4+0xfffffffcu), ST(0)); FPOP();
L_00878c2f:; BB(0x00878c2f);
    /* 00878c2f: add ecx, -8 */ {  u32 a = r_ecx; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00878c32: add ebx, -0x10 */ {  u32 a = r_ebx; u32 b = 0xfffffff0u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00878c35: fld dword ptr [ebx + 8] */ FPUSH(R_F32((u32)(r_ebx+0x8u)));
    /* 00878c38: fsub dword ptr [eax] */ ST(0) = ST(0) - R_F32((u32)(r_eax));
    /* 00878c3a: fld dword ptr [ebx] */ FPUSH(R_F32((u32)(r_ebx)));
    /* 00878c3c: fsub dword ptr [eax + 8] */ ST(0) = ST(0) - R_F32((u32)(r_eax+0x8u));
    /* 00878c3f: fld dword ptr [ecx] */ FPUSH(R_F32((u32)(r_ecx)));
    /* 00878c41: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00878c43: add eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00878c46: fld dword ptr [ecx + 4] */ FPUSH(R_F32((u32)(r_ecx+0x4u)));
    /* 00878c49: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00878c4b: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00878c4d: fstp dword ptr [edi + edx*4] */ W_F32((u32)(r_edi+r_edx*4), ST(0)); FPOP();
    /* 00878c50: fld dword ptr [ecx + 4] */ FPUSH(R_F32((u32)(r_ecx+0x4u)));
    /* 00878c53: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00878c55: fld dword ptr [ecx] */ FPUSH(R_F32((u32)(r_ecx)));
    /* 00878c57: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00878c59: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 00878c5b: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00878c5e: cmp edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00878c60: jl 0x878c2b */ if ((fS!=fO)) goto L_00878c2b;
L_00878c62:; BB(0x00878c62);
    /* 00878c62: fstp dword ptr [edi + edx*4 - 4] */ W_F32((u32)(r_edi+r_edx*4+0xfffffffcu), ST(0)); FPOP();
    /* 00878c66: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00878c69: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00878c6c: mov edi, dword ptr [ebp - 0x34] */ r_edi = R32((u32)(r_ebp+0xffffffccu));
L_00878c6f:; BB(0x00878c6f);
    /* 00878c6f: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00878c71: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00878c73: add ebx, dword ptr [ebp + 0xc] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00878c76: cmp edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00878c78: jge 0x878cbe */ if ((fS==fO)) goto L_00878cbe;
L_00878c7a:; BB(0x00878c7a);
    /* 00878c7a: mov esi, dword ptr [ebp - 0x10] */ r_esi = R32((u32)(r_ebp+0xfffffff0u));
    /* 00878c7d: jmp 0x878c83 */ goto L_00878c83;
L_00878c7f:; BB(0x00878c7f);
    /* 00878c7f: fstp dword ptr [esi + edx*4 - 4] */ W_F32((u32)(r_esi+r_edx*4+0xfffffffcu), ST(0)); FPOP();
L_00878c83:; BB(0x00878c83);
    /* 00878c83: add ecx, -8 */ {  u32 a = r_ecx; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00878c86: add ebx, -0x10 */ {  u32 a = r_ebx; u32 b = 0xfffffff0u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00878c89: fld dword ptr [ebx + 8] */ FPUSH(R_F32((u32)(r_ebx+0x8u)));
    /* 00878c8c: fadd dword ptr [eax] */ ST(0) = ST(0) + R_F32((u32)(r_eax));
    /* 00878c8e: fchs  */ ST(0) = -ST(0);
    /* 00878c90: fld dword ptr [ebx] */ FPUSH(R_F32((u32)(r_ebx)));
    /* 00878c92: fadd dword ptr [eax + 8] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x8u));
    /* 00878c95: fchs  */ ST(0) = -ST(0);
    /* 00878c97: add eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00878c9a: fld dword ptr [ecx] */ FPUSH(R_F32((u32)(r_ecx)));
    /* 00878c9c: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00878c9e: fld dword ptr [ecx + 4] */ FPUSH(R_F32((u32)(r_ecx+0x4u)));
    /* 00878ca1: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00878ca3: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00878ca5: fstp dword ptr [esi + edx*4] */ W_F32((u32)(r_esi+r_edx*4), ST(0)); FPOP();
    /* 00878ca8: fld dword ptr [ecx + 4] */ FPUSH(R_F32((u32)(r_ecx+0x4u)));
    /* 00878cab: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00878cad: fld dword ptr [ecx] */ FPUSH(R_F32((u32)(r_ecx)));
    /* 00878caf: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00878cb1: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 00878cb3: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00878cb6: cmp edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00878cb8: jl 0x878c7f */ if ((fS!=fO)) goto L_00878c7f;
L_00878cba:; BB(0x00878cba);
    /* 00878cba: fstp dword ptr [esi + edx*4 - 4] */ W_F32((u32)(r_esi+r_edx*4+0xfffffffcu), ST(0)); FPOP();
L_00878cbe:; BB(0x00878cbe);
    /* 00878cbe: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00878cc1: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00878cc4: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00878cc7: mov ecx, edi */ r_ecx = r_edi;
    /* 00878cc9: call 0x878214 */ r_esp -= 4; W32(r_esp, 0x878cceu); f_00878214();
    /* 00878cce: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00878cd1: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 00878cd4: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 00878cd6: mov eax, dword ptr [esi + 0xc] */ r_eax = R32((u32)(r_esi+0xcu));
    /* 00878cd9: mov ebx, dword ptr [ebp - 0x2c] */ r_ebx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00878cdc: mov edi, edx */ r_edi = r_edx;
    /* 00878cde: sar edi, 1 */ { u32 c = (1u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 00878ce0: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00878ce2: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00878ce4: add edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00878ce6: mov ecx, edi */ r_ecx = r_edi;
    /* 00878ce8: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00878cea: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00878cec: add edx, dword ptr [esi + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esi+0x8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00878cef: fld dword ptr [0x99a808] */ FPUSH(R_F32((u32)(0x99a808u)));
    /* 00878cf5: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 00878cf8: fstp st(0) */ ST(0) = ST(0); FPOP();
L_00878cfa:; BB(0x00878cfa);
    /* 00878cfa: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00878cfd: mov esi, dword ptr [eax] */ r_esi = R32((u32)(r_eax));
    /* 00878cff: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 00878d02: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 00878d05: add ecx, -0x10 */ {  u32 a = r_ecx; u32 b = 0xfffffff0u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00878d08: fld dword ptr [edi + esi*4 + 4] */ FPUSH(R_F32((u32)(r_edi+r_esi*4+0x4u)));
    /* 00878d0c: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00878d0e: fld dword ptr [edi + eax*4 + 4] */ FPUSH(R_F32((u32)(r_edi+r_eax*4+0x4u)));
    /* 00878d12: fsub st(1), st(0) */ ST(1) = ST(1) - ST(0);
    /* 00878d14: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00878d16: fld dword ptr [edi + esi*4] */ FPUSH(R_F32((u32)(r_edi+r_esi*4)));
    /* 00878d19: mov esi, dword ptr [ebp - 0xc] */ r_esi = R32((u32)(r_ebp+0xfffffff4u));
    /* 00878d1c: fst dword ptr [ebp - 8] */ W_F32((u32)(r_ebp+0xfffffff8u), ST(0));
    /* 00878d1f: fld dword ptr [edi + eax*4] */ FPUSH(R_F32((u32)(r_edi+r_eax*4)));
    /* 00878d22: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 00878d24: fstp dword ptr [ebp - 4] */ W_F32((u32)(r_ebp+0xfffffffcu), ST(0)); FPOP();
    /* 00878d27: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 00878d29: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00878d2b: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00878d2d: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 00878d30: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00878d32: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 00878d34: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00878d36: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 00878d38: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00878d3a: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 00878d3c: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00878d3e: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00878d40: fld dword ptr [0x99a808] */ FPUSH(R_F32((u32)(0x99a808u)));
    /* 00878d46: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 00878d48: fld dword ptr [ebp - 8] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff8u)));
    /* 00878d4b: fsub dword ptr [ebp - 4] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0xfffffffcu));
    /* 00878d4e: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00878d50: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 00878d52: fadd st(4) */ ST(0) = ST(0) + ST(4);
    /* 00878d54: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00878d56: fsubp st(4) */ ST(4) = ST(4) - ST(0); FPOP();
    /* 00878d58: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00878d5a: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00878d5c: fstp dword ptr [ebx] */ W_F32((u32)(r_ebx), ST(0)); FPOP();
    /* 00878d5e: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 00878d60: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00878d62: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00878d64: fstp dword ptr [ecx + 8] */ W_F32((u32)(r_ecx+0x8u), ST(0)); FPOP();
    /* 00878d67: fstp dword ptr [ebx + 4] */ W_F32((u32)(r_ebx+0x4u), ST(0)); FPOP();
    /* 00878d6a: fstp dword ptr [ecx + 0xc] */ W_F32((u32)(r_ecx+0xcu), ST(0)); FPOP();
    /* 00878d6d: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 00878d70: mov esi, dword ptr [esi + 0xc] */ r_esi = R32((u32)(r_esi+0xcu));
    /* 00878d73: fld dword ptr [edi + eax*4 + 4] */ FPUSH(R_F32((u32)(r_edi+r_eax*4+0x4u)));
    /* 00878d77: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00878d79: fld dword ptr [edi + esi*4 + 4] */ FPUSH(R_F32((u32)(r_edi+r_esi*4+0x4u)));
    /* 00878d7d: fsub st(1), st(0) */ ST(1) = ST(1) - ST(0);
    /* 00878d7f: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00878d81: fld dword ptr [edi + eax*4] */ FPUSH(R_F32((u32)(r_edi+r_eax*4)));
    /* 00878d84: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00878d87: add eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00878d8a: fst dword ptr [ebp - 4] */ W_F32((u32)(r_ebp+0xfffffffcu), ST(0));
    /* 00878d8d: fld dword ptr [edi + esi*4] */ FPUSH(R_F32((u32)(r_edi+r_esi*4)));
    /* 00878d90: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 00878d92: fstp dword ptr [ebp - 8] */ W_F32((u32)(r_ebp+0xfffffff8u), ST(0)); FPOP();
    /* 00878d95: fld dword ptr [edx + 8] */ FPUSH(R_F32((u32)(r_edx+0x8u)));
    /* 00878d98: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00878d9a: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00878d9c: fld dword ptr [edx + 0xc] */ FPUSH(R_F32((u32)(r_edx+0xcu)));
    /* 00878d9f: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00878da1: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 00878da3: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00878da5: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 00878da7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00878da9: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 00878dab: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00878dad: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00878daf: add edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00878db2: fld dword ptr [0x99a808] */ FPUSH(R_F32((u32)(0x99a808u)));
    /* 00878db8: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 00878dba: fld dword ptr [ebp - 4] */ FPUSH(R_F32((u32)(r_ebp+0xfffffffcu)));
    /* 00878dbd: fsub dword ptr [ebp - 8] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0xfffffff8u));
    /* 00878dc0: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00878dc2: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 00878dc4: fadd st(4) */ ST(0) = ST(0) + ST(4);
    /* 00878dc6: fstp dword ptr [ebx + 8] */ W_F32((u32)(r_ebx+0x8u), ST(0)); FPOP();
    /* 00878dc9: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00878dcb: fsubp st(3) */ ST(3) = ST(3) - ST(0); FPOP();
    /* 00878dcd: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00878dcf: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00878dd1: fstp dword ptr [ecx] */ W_F32((u32)(r_ecx), ST(0)); FPOP();
    /* 00878dd3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00878dd5: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 00878dd7: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00878dd9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00878ddb: fstp dword ptr [ebx + 0xc] */ W_F32((u32)(r_ebx+0xcu), ST(0)); FPOP();
    /* 00878dde: add ebx, 0x10 */ {  u32 a = r_ebx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00878de1: cmp ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00878de3: fstp dword ptr [ecx + 4] */ W_F32((u32)(r_ecx+0x4u), ST(0)); FPOP();
    /* 00878de6: jb 0x878cfa */ if (fC) goto L_00878cfa;
L_00878dec:; BB(0x00878dec);
    /* 00878dec: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00878def: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 00878df2: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00878df5: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00878df7: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00878dfa: add edx, dword ptr [ebp - 0x38] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffc8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00878dfd: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00878dff: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 00878e02: jle 0x878e48 */ if ((fZ||fS!=fO)) goto L_00878e48;
L_00878e04:; BB(0x00878e04);
    /* 00878e04: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00878e07: lea edx, [edx + ecx*4] */ r_edx = (u32)(r_edx+r_ecx*4);
    /* 00878e0a: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00878e0d: mov ebx, dword ptr [ebp - 0x2c] */ r_ebx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00878e10: mov edi, dword ptr [ebp - 0x38] */ r_edi = R32((u32)(r_ebp+0xffffffc8u));
    /* 00878e13: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
L_00878e16:; BB(0x00878e16);
    /* 00878e16: add ecx, -4 */ {  u32 a = r_ecx; u32 b = 0xfffffffcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00878e19: fld dword ptr [ebx] */ FPUSH(R_F32((u32)(r_ebx)));
    /* 00878e1b: fmul dword ptr [eax] */ ST(0) = ST(0) * R_F32((u32)(r_eax));
    /* 00878e1d: fld dword ptr [ebx + 4] */ FPUSH(R_F32((u32)(r_ebx+0x4u)));
    /* 00878e20: fmul dword ptr [eax + 4] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x4u));
    /* 00878e23: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00878e25: fmul dword ptr [esi + 0x10] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0x10u));
    /* 00878e28: fstp dword ptr [edi] */ W_F32((u32)(r_edi), ST(0)); FPOP();
    /* 00878e2a: fld dword ptr [ebx] */ FPUSH(R_F32((u32)(r_ebx)));
    /* 00878e2c: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00878e2f: fmul dword ptr [eax + 4] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x4u));
    /* 00878e32: fld dword ptr [ebx + 4] */ FPUSH(R_F32((u32)(r_ebx+0x4u)));
    /* 00878e35: fmul dword ptr [eax] */ ST(0) = ST(0) * R_F32((u32)(r_eax));
    /* 00878e37: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00878e39: add ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00878e3c: fmul dword ptr [esi + 0x10] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0x10u));
    /* 00878e3f: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00878e42: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00878e44: fstp dword ptr [ecx] */ W_F32((u32)(r_ecx), ST(0)); FPOP();
    /* 00878e46: jb 0x878e16 */ if (fC) goto L_00878e16;
L_00878e48:; BB(0x00878e48);
    /* 00878e48: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00878e4b: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00878e4e: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 00878e51: mov esp, ebp */ r_esp = r_ebp;
    /* 00878e53: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00878e54: ret  */ FN_RET(0x00878b40); r_esp += 4; return;
}

void f_00878e58(void) /* sub_878E58 */
{
    FN_ENTER(0x00878e58);
    /* 00878e58: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00878e59: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00878e5a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00878e5b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00878e5c: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00878e5f: mov ebp, dword ptr [esp + 0x58] */ r_ebp = R32((u32)(r_esp+0x58u));
    /* 00878e63: mov esi, ebp */ r_esi = r_ebp;
    /* 00878e65: sar esi, 1 */ { u32 c = (1u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 00878e67: mov edi, esi */ r_edi = r_esi;
    /* 00878e69: shr edi, 0x1e */ { u32 c = (30u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 00878e6c: add edi, ebp */ {  u32 a = r_edi; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00878e6e: sar edi, 2 */ { u32 c = (2u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 00878e71: lea eax, [edi + edi] */ r_eax = (u32)(r_edi+r_edi);
    /* 00878e74: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00878e76: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00878e77: call 0x859c55 */ r_esp -= 4; W32(r_esp, 0x878e7cu); f_00859c55();
    /* 00878e7c: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 00878e80: lea eax, [ebp + edi] */ r_eax = (u32)(r_ebp+r_edi);
    /* 00878e84: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00878e86: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00878e88: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00878e89: call 0x859c55 */ r_esp -= 4; W32(r_esp, 0x878e8eu); f_00859c55();
    /* 00878e8e: mov ebx, eax */ r_ebx = r_eax;
    /* 00878e90: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00878e93: mov dword ptr [esp + 0x18], ebp */ W32((u32)(r_esp+0x18u), r_ebp);
    /* 00878e97: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 00878e9b: fst dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0));
    /* 00878e9f: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 00878ea2: call 0x84d1ac */ r_esp -= 4; W32(r_esp, 0x878ea7u); f_0084d1ac();
    /* 00878ea7: fstp qword ptr [esp + 0x30] */ W_F64((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 00878eab: fld qword ptr [0x99a7f8] */ FPUSH(R_F64((u32)(0x99a7f8u)));
    /* 00878eb1: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 00878eb4: call 0x84d1ac */ r_esp -= 4; W32(r_esp, 0x878eb9u); f_0084d1ac();
    /* 00878eb9: mov ecx, dword ptr [esp + 0x54] */ r_ecx = R32((u32)(r_esp+0x54u));
    /* 00878ebd: mov edx, dword ptr [esp + 0x28] */ r_edx = R32((u32)(r_esp+0x28u));
    /* 00878ec1: fld qword ptr [0x99a7f0] */ FPUSH(R_F64((u32)(0x99a7f0u)));
    /* 00878ec7: fld qword ptr [esp + 0x30] */ FPUSH(R_F64((u32)(r_esp+0x30u)));
    /* 00878ecb: fdivrp st(2) */ ST(2) = ST(0) / ST(2); FPOP();
    /* 00878ecd: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 00878ecf: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00878ed1: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 00878ed5: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 00878eda: and eax, 0xfffff3ff */ {  u32 a = r_eax; u32 b = 0xfffff3ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00878edf: or eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00878ee4: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00878ee8: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00878eec: fistp dword ptr [esp + 0x20] */ W32((u32)(r_esp+0x20u), (u32)fx_int32(ST(0))); FPOP();
    /* 00878ef0: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00878ef4: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 00878ef8: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00878efa: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00878efd: mov dword ptr [ecx], ebp */ W32((u32)(r_ecx), r_ebp);
    /* 00878eff: mov dword ptr [ecx + 8], ebx */ W32((u32)(r_ecx+0x8u), r_ebx);
    /* 00878f02: mov dword ptr [ecx + 0xc], edx */ W32((u32)(r_ecx+0xcu), r_edx);
    /* 00878f05: mov edx, 0 */ r_edx = 0x0u;
    /* 00878f0a: jle 0x878f91 */ if ((fZ||fS!=fO)) goto L_00878f91;
L_00878f10:; BB(0x00878f10);
    /* 00878f10: fld dword ptr [0x99a804] */ FPUSH(R_F32((u32)(0x99a804u)));
    /* 00878f16: lea ecx, [ebp + ebp] */ r_ecx = (u32)(r_ebp+r_ebp);
    /* 00878f1a: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00878f1c: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 00878f20: fdivr st(1) */ ST(0) = ST(1) / ST(0);
    /* 00878f22: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00878f24: mov dword ptr [esp + 0x18], ecx */ W32((u32)(r_esp+0x18u), r_ecx);
    /* 00878f28: add esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00878f2a: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 00878f2d: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 00878f31: fdivp st(2) */ ST(2) = ST(2) / ST(0); FPOP();
    /* 00878f33: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00878f35: mov dword ptr [esp + 0x3c], ecx */ W32((u32)(r_esp+0x3cu), r_ecx);
    /* 00878f39: lea ecx, [edx + edx + 1] */ r_ecx = (u32)(r_edx+r_edx+0x1u);
    /* 00878f3d: mov dword ptr [esp + 0x2c], ecx */ W32((u32)(r_esp+0x2cu), r_ecx);
    /* 00878f41: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00878f43: mov ecx, dword ptr [esp + 0x3c] */ r_ecx = R32((u32)(r_esp+0x3cu));
    /* 00878f47: jmp 0x878f51 */ goto L_00878f51;
L_00878f49:; BB(0x00878f49);
    /* 00878f49: fstp dword ptr [esi + edx*8 - 8] */ W_F32((u32)(r_esi+r_edx*8+0xfffffff8u), ST(0)); FPOP();
    /* 00878f4d: fstp dword ptr [esi + edx*8 - 4] */ W_F32((u32)(r_esi+r_edx*8+0xfffffffcu), ST(0)); FPOP();
L_00878f51:; BB(0x00878f51);
    /* 00878f51: mov dword ptr [esp + 0x18], ecx */ W32((u32)(r_esp+0x18u), r_ecx);
    /* 00878f55: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00878f58: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 00878f5c: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00878f5e: fsincos  */ { long double v = ST(0); ST(0) = cosl(v); FPUSH(sinl(v)); }
    /* 00878f60: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00878f62: fchs  */ ST(0) = -ST(0);
    /* 00878f64: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00878f66: fstp dword ptr [ebx + edx*8] */ W_F32((u32)(r_ebx+r_edx*8), ST(0)); FPOP();
    /* 00878f69: fstp dword ptr [ebx + edx*8 + 4] */ W_F32((u32)(r_ebx+r_edx*8+0x4u), ST(0)); FPOP();
    /* 00878f6d: mov dword ptr [esp + 0x18], ebp */ W32((u32)(r_esp+0x18u), r_ebp);
    /* 00878f71: add ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00878f74: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 00878f78: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00878f7a: fsincos  */ { long double v = ST(0); ST(0) = cosl(v); FPUSH(sinl(v)); }
    /* 00878f7c: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00878f7d: cmp edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00878f7f: jl 0x878f49 */ if ((fS!=fO)) goto L_00878f49;
L_00878f81:; BB(0x00878f81);
    /* 00878f81: fstp dword ptr [esi + edx*8 - 8] */ W_F32((u32)(r_esi+r_edx*8+0xfffffff8u), ST(0)); FPOP();
    /* 00878f85: fstp dword ptr [esi + edx*8 - 4] */ W_F32((u32)(r_esi+r_edx*8+0xfffffffcu), ST(0)); FPOP();
    /* 00878f89: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00878f8b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00878f8d: mov ebp, dword ptr [esp + 0x58] */ r_ebp = R32((u32)(r_esp+0x58u));
L_00878f91:; BB(0x00878f91);
    /* 00878f91: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00878f93: mov edx, ebp */ r_edx = r_ebp;
    /* 00878f95: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 00878f98: shr edx, 0x1d */ { u32 c = (29u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00878f9b: add edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00878f9d: sar edx, 3 */ { u32 c = (3u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 00878fa0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 00878fa2: jle 0x879068 */ if ((fZ||fS!=fO)) goto L_00879068;
L_00878fa8:; BB(0x00878fa8);
    /* 00878fa8: fld dword ptr [0x99a804] */ FPUSH(R_F32((u32)(0x99a804u)));
    /* 00878fae: lea ebp, [ebp + ebp] */ r_ebp = (u32)(r_ebp+r_ebp);
    /* 00878fb2: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00878fb4: fdiv dword ptr [esp + 0x38] */ ST(0) = ST(0) / R_F32((u32)(r_esp+0x38u));
    /* 00878fb8: add ebp, ebx */ {  u32 a = r_ebp; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00878fba: lea ebx, [esi + esi] */ r_ebx = (u32)(r_esi+r_esi);
    /* 00878fbd: lea ebx, [ebx + ebx + 2] */ r_ebx = (u32)(r_ebx+r_ebx+0x2u);
    /* 00878fc1: jmp 0x878fc7 */ goto L_00878fc7;
L_00878fc3:; BB(0x00878fc3);
    /* 00878fc3: fstp dword ptr [ebp + esi*8 - 4] */ W_F32((u32)(r_ebp+r_esi*8+0xfffffffcu), ST(0)); FPOP();
L_00878fc7:; BB(0x00878fc7);
    /* 00878fc7: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 00878fcb: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00878fce: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 00878fd2: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00878fd4: fsincos  */ { long double v = ST(0); ST(0) = cosl(v); FPUSH(sinl(v)); }
    /* 00878fd6: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00878fd8: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00878fda: fchs  */ ST(0) = -ST(0);
    /* 00878fdc: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00878fde: fstp dword ptr [ebp + esi*8] */ W_F32((u32)(r_ebp+r_esi*8), ST(0)); FPOP();
    /* 00878fe2: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00878fe4: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00878fe5: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00878fe7: jl 0x878fc3 */ if ((fS!=fO)) goto L_00878fc3;
L_00878fe9:; BB(0x00878fe9);
    /* 00878fe9: fstp dword ptr [ebp + esi*8 - 4] */ W_F32((u32)(r_ebp+r_esi*8+0xfffffffcu), ST(0)); FPOP();
    /* 00878fed: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00878fef: fstp st(0) */ ST(0) = ST(0); FPOP();
L_00878ff1:; BB(0x00878ff1);
    /* 00878ff1: lea ecx, [eax - 1] */ r_ecx = (u32)(r_eax+0xffffffffu);
    /* 00878ff4: mov ebp, 1 */ r_ebp = 0x1u;
    /* 00878ff9: shl ebp, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebp = r;  } }
    /* 00878ffb: dec ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 00878ffc: add eax, -2 */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00878fff: mov ecx, eax */ r_ecx = r_eax;
    /* 00879001: mov ebx, 1 */ r_ebx = 0x1u;
    /* 00879006: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 00879008: shl ebx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 0087900a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0087900c: jle 0x87904f */ if ((fZ||fS!=fO)) goto L_0087904f;
L_0087900e:; BB(0x0087900e);
    /* 0087900e: mov dword ptr [esp + 0x2c], ebp */ W32((u32)(r_esp+0x2cu), r_ebp);
    /* 00879012: mov edi, dword ptr [esp + 0x28] */ r_edi = R32((u32)(r_esp+0x28u));
L_00879016:; BB(0x00879016);
    /* 00879016: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00879018: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0087901a: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0087901c: je 0x87903a */ if (fZ) goto L_0087903a;
L_0087901e:; BB(0x0087901e);
    /* 0087901e: mov ebp, ebx */ r_ebp = r_ebx;
L_00879020:; BB(0x00879020);
    /* 00879020: test ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 00879022: je 0x87902d */ if (fZ) goto L_0087902d;
L_00879024:; BB(0x00879024);
    /* 00879024: mov ebp, 1 */ r_ebp = 0x1u;
    /* 00879029: shl ebp, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebp = r;  } }
    /* 0087902b: or esi, ebp */ {  u32 a = r_esi; u32 b = r_ebp; u32 r = (a | b) & 0xffffffffu; r_esi = r; fC = 0; }
L_0087902d:; BB(0x0087902d);
    /* 0087902d: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 0087902e: mov ebp, ebx */ r_ebp = r_ebx;
    /* 00879030: sar ebp, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebp = r;  } }
    /* 00879032: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00879034: jne 0x879020 */ if (!fZ) goto L_00879020;
L_00879036:; BB(0x00879036);
    /* 00879036: mov edi, dword ptr [esp + 0x28] */ r_edi = R32((u32)(r_esp+0x28u));
L_0087903a:; BB(0x0087903a);
    /* 0087903a: mov ecx, esi */ r_ecx = r_esi;
    /* 0087903c: not ecx */ r_ecx = ~r_ecx;
    /* 0087903e: and ecx, dword ptr [esp + 0x2c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esp+0x2cu)); u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00879042: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00879043: mov dword ptr [edi + eax*8], ecx */ W32((u32)(r_edi+r_eax*8), r_ecx);
    /* 00879046: mov dword ptr [edi + eax*8 + 4], esi */ W32((u32)(r_edi+r_eax*8+0x4u), r_esi);
    /* 0087904a: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0087904b: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087904d: jl 0x879016 */ if ((fS!=fO)) goto L_00879016;
L_0087904f:; BB(0x0087904f);
    /* 0087904f: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 00879053: mov eax, dword ptr [esp + 0x54] */ r_eax = R32((u32)(r_esp+0x54u));
    /* 00879057: fdivr dword ptr [0x99a800] */ ST(0) = R_F32((u32)(0x99a800u)) / ST(0);
    /* 0087905d: fstp dword ptr [eax + 0x10] */ W_F32((u32)(r_eax+0x10u), ST(0)); FPOP();
    /* 00879060: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00879063: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00879064: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00879065: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00879066: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00879067: ret  */ FN_RET(0x00878e58); r_esp += 4; return;
L_00879068:; BB(0x00879068);
    /* 00879068: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087906a: jmp 0x878ff1 */ goto L_00878ff1;
}

void f_00878e93(void)
{
    FN_ENTER(0x00878e93);
    /* 00878e93: mov dword ptr [esp + 0x18], ebp */ W32((u32)(r_esp+0x18u), r_ebp);
    /* 00878e97: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 00878e9b: fst dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0));
    /* 00878e9f: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 00878ea2: call 0x84d1ac */ r_esp -= 4; W32(r_esp, 0x878ea7u); f_0084d1ac();
    /* 00878ea7: fstp qword ptr [esp + 0x30] */ W_F64((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 00878eab: fld qword ptr [0x99a7f8] */ FPUSH(R_F64((u32)(0x99a7f8u)));
    /* 00878eb1: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 00878eb4: call 0x84d1ac */ r_esp -= 4; W32(r_esp, 0x878eb9u); f_0084d1ac();
    /* 00878eb9: mov ecx, dword ptr [esp + 0x54] */ r_ecx = R32((u32)(r_esp+0x54u));
    /* 00878ebd: mov edx, dword ptr [esp + 0x28] */ r_edx = R32((u32)(r_esp+0x28u));
    /* 00878ec1: fld qword ptr [0x99a7f0] */ FPUSH(R_F64((u32)(0x99a7f0u)));
    /* 00878ec7: fld qword ptr [esp + 0x30] */ FPUSH(R_F64((u32)(r_esp+0x30u)));
    /* 00878ecb: fdivrp st(2) */ ST(2) = ST(0) / ST(2); FPOP();
    /* 00878ecd: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 00878ecf: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00878ed1: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 00878ed5: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 00878eda: and eax, 0xfffff3ff */ {  u32 a = r_eax; u32 b = 0xfffff3ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00878edf: or eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00878ee4: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00878ee8: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00878eec: fistp dword ptr [esp + 0x20] */ W32((u32)(r_esp+0x20u), (u32)fx_int32(ST(0))); FPOP();
    /* 00878ef0: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00878ef4: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 00878ef8: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00878efa: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00878efd: mov dword ptr [ecx], ebp */ W32((u32)(r_ecx), r_ebp);
    /* 00878eff: mov dword ptr [ecx + 8], ebx */ W32((u32)(r_ecx+0x8u), r_ebx);
    /* 00878f02: mov dword ptr [ecx + 0xc], edx */ W32((u32)(r_ecx+0xcu), r_edx);
    /* 00878f05: mov edx, 0 */ r_edx = 0x0u;
    /* 00878f0a: jle 0x878f91 */ if ((fZ||fS!=fO)) goto L_00878f91;
L_00878f10:; BB(0x00878f10);
    /* 00878f10: fld dword ptr [0x99a804] */ FPUSH(R_F32((u32)(0x99a804u)));
    /* 00878f16: lea ecx, [ebp + ebp] */ r_ecx = (u32)(r_ebp+r_ebp);
    /* 00878f1a: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00878f1c: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 00878f20: fdivr st(1) */ ST(0) = ST(1) / ST(0);
    /* 00878f22: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00878f24: mov dword ptr [esp + 0x18], ecx */ W32((u32)(r_esp+0x18u), r_ecx);
    /* 00878f28: add esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00878f2a: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 00878f2d: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 00878f31: fdivp st(2) */ ST(2) = ST(2) / ST(0); FPOP();
    /* 00878f33: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00878f35: mov dword ptr [esp + 0x3c], ecx */ W32((u32)(r_esp+0x3cu), r_ecx);
    /* 00878f39: lea ecx, [edx + edx + 1] */ r_ecx = (u32)(r_edx+r_edx+0x1u);
    /* 00878f3d: mov dword ptr [esp + 0x2c], ecx */ W32((u32)(r_esp+0x2cu), r_ecx);
    /* 00878f41: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00878f43: mov ecx, dword ptr [esp + 0x3c] */ r_ecx = R32((u32)(r_esp+0x3cu));
    /* 00878f47: jmp 0x878f51 */ goto L_00878f51;
L_00878f49:; BB(0x00878f49);
    /* 00878f49: fstp dword ptr [esi + edx*8 - 8] */ W_F32((u32)(r_esi+r_edx*8+0xfffffff8u), ST(0)); FPOP();
    /* 00878f4d: fstp dword ptr [esi + edx*8 - 4] */ W_F32((u32)(r_esi+r_edx*8+0xfffffffcu), ST(0)); FPOP();
L_00878f51:; BB(0x00878f51);
    /* 00878f51: mov dword ptr [esp + 0x18], ecx */ W32((u32)(r_esp+0x18u), r_ecx);
    /* 00878f55: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00878f58: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 00878f5c: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00878f5e: fsincos  */ { long double v = ST(0); ST(0) = cosl(v); FPUSH(sinl(v)); }
    /* 00878f60: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00878f62: fchs  */ ST(0) = -ST(0);
    /* 00878f64: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00878f66: fstp dword ptr [ebx + edx*8] */ W_F32((u32)(r_ebx+r_edx*8), ST(0)); FPOP();
    /* 00878f69: fstp dword ptr [ebx + edx*8 + 4] */ W_F32((u32)(r_ebx+r_edx*8+0x4u), ST(0)); FPOP();
    /* 00878f6d: mov dword ptr [esp + 0x18], ebp */ W32((u32)(r_esp+0x18u), r_ebp);
    /* 00878f71: add ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00878f74: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 00878f78: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00878f7a: fsincos  */ { long double v = ST(0); ST(0) = cosl(v); FPUSH(sinl(v)); }
    /* 00878f7c: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00878f7d: cmp edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00878f7f: jl 0x878f49 */ if ((fS!=fO)) goto L_00878f49;
L_00878f81:; BB(0x00878f81);
    /* 00878f81: fstp dword ptr [esi + edx*8 - 8] */ W_F32((u32)(r_esi+r_edx*8+0xfffffff8u), ST(0)); FPOP();
    /* 00878f85: fstp dword ptr [esi + edx*8 - 4] */ W_F32((u32)(r_esi+r_edx*8+0xfffffffcu), ST(0)); FPOP();
    /* 00878f89: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00878f8b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00878f8d: mov ebp, dword ptr [esp + 0x58] */ r_ebp = R32((u32)(r_esp+0x58u));
L_00878f91:; BB(0x00878f91);
    /* 00878f91: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00878f93: mov edx, ebp */ r_edx = r_ebp;
    /* 00878f95: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 00878f98: shr edx, 0x1d */ { u32 c = (29u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00878f9b: add edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00878f9d: sar edx, 3 */ { u32 c = (3u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 00878fa0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 00878fa2: jle 0x879068 */ if ((fZ||fS!=fO)) goto L_00879068;
L_00878fa8:; BB(0x00878fa8);
    /* 00878fa8: fld dword ptr [0x99a804] */ FPUSH(R_F32((u32)(0x99a804u)));
    /* 00878fae: lea ebp, [ebp + ebp] */ r_ebp = (u32)(r_ebp+r_ebp);
    /* 00878fb2: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00878fb4: fdiv dword ptr [esp + 0x38] */ ST(0) = ST(0) / R_F32((u32)(r_esp+0x38u));
    /* 00878fb8: add ebp, ebx */ {  u32 a = r_ebp; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00878fba: lea ebx, [esi + esi] */ r_ebx = (u32)(r_esi+r_esi);
    /* 00878fbd: lea ebx, [ebx + ebx + 2] */ r_ebx = (u32)(r_ebx+r_ebx+0x2u);
    /* 00878fc1: jmp 0x878fc7 */ goto L_00878fc7;
L_00878fc3:; BB(0x00878fc3);
    /* 00878fc3: fstp dword ptr [ebp + esi*8 - 4] */ W_F32((u32)(r_ebp+r_esi*8+0xfffffffcu), ST(0)); FPOP();
L_00878fc7:; BB(0x00878fc7);
    /* 00878fc7: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 00878fcb: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00878fce: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 00878fd2: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00878fd4: fsincos  */ { long double v = ST(0); ST(0) = cosl(v); FPUSH(sinl(v)); }
    /* 00878fd6: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00878fd8: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00878fda: fchs  */ ST(0) = -ST(0);
    /* 00878fdc: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00878fde: fstp dword ptr [ebp + esi*8] */ W_F32((u32)(r_ebp+r_esi*8), ST(0)); FPOP();
    /* 00878fe2: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00878fe4: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00878fe5: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00878fe7: jl 0x878fc3 */ if ((fS!=fO)) goto L_00878fc3;
L_00878fe9:; BB(0x00878fe9);
    /* 00878fe9: fstp dword ptr [ebp + esi*8 - 4] */ W_F32((u32)(r_ebp+r_esi*8+0xfffffffcu), ST(0)); FPOP();
    /* 00878fed: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00878fef: fstp st(0) */ ST(0) = ST(0); FPOP();
L_00878ff1:; BB(0x00878ff1);
    /* 00878ff1: lea ecx, [eax - 1] */ r_ecx = (u32)(r_eax+0xffffffffu);
    /* 00878ff4: mov ebp, 1 */ r_ebp = 0x1u;
    /* 00878ff9: shl ebp, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebp = r;  } }
    /* 00878ffb: dec ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 00878ffc: add eax, -2 */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00878fff: mov ecx, eax */ r_ecx = r_eax;
    /* 00879001: mov ebx, 1 */ r_ebx = 0x1u;
    /* 00879006: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 00879008: shl ebx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 0087900a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0087900c: jle 0x87904f */ if ((fZ||fS!=fO)) goto L_0087904f;
L_0087900e:; BB(0x0087900e);
    /* 0087900e: mov dword ptr [esp + 0x2c], ebp */ W32((u32)(r_esp+0x2cu), r_ebp);
    /* 00879012: mov edi, dword ptr [esp + 0x28] */ r_edi = R32((u32)(r_esp+0x28u));
L_00879016:; BB(0x00879016);
    /* 00879016: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00879018: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0087901a: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0087901c: je 0x87903a */ if (fZ) goto L_0087903a;
L_0087901e:; BB(0x0087901e);
    /* 0087901e: mov ebp, ebx */ r_ebp = r_ebx;
L_00879020:; BB(0x00879020);
    /* 00879020: test ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 00879022: je 0x87902d */ if (fZ) goto L_0087902d;
L_00879024:; BB(0x00879024);
    /* 00879024: mov ebp, 1 */ r_ebp = 0x1u;
    /* 00879029: shl ebp, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebp = r;  } }
    /* 0087902b: or esi, ebp */ {  u32 a = r_esi; u32 b = r_ebp; u32 r = (a | b) & 0xffffffffu; r_esi = r; fC = 0; }
L_0087902d:; BB(0x0087902d);
    /* 0087902d: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 0087902e: mov ebp, ebx */ r_ebp = r_ebx;
    /* 00879030: sar ebp, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebp = r;  } }
    /* 00879032: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00879034: jne 0x879020 */ if (!fZ) goto L_00879020;
L_00879036:; BB(0x00879036);
    /* 00879036: mov edi, dword ptr [esp + 0x28] */ r_edi = R32((u32)(r_esp+0x28u));
L_0087903a:; BB(0x0087903a);
    /* 0087903a: mov ecx, esi */ r_ecx = r_esi;
    /* 0087903c: not ecx */ r_ecx = ~r_ecx;
    /* 0087903e: and ecx, dword ptr [esp + 0x2c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esp+0x2cu)); u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00879042: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00879043: mov dword ptr [edi + eax*8], ecx */ W32((u32)(r_edi+r_eax*8), r_ecx);
    /* 00879046: mov dword ptr [edi + eax*8 + 4], esi */ W32((u32)(r_edi+r_eax*8+0x4u), r_esi);
    /* 0087904a: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0087904b: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087904d: jl 0x879016 */ if ((fS!=fO)) goto L_00879016;
L_0087904f:; BB(0x0087904f);
    /* 0087904f: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 00879053: mov eax, dword ptr [esp + 0x54] */ r_eax = R32((u32)(r_esp+0x54u));
    /* 00879057: fdivr dword ptr [0x99a800] */ ST(0) = R_F32((u32)(0x99a800u)) / ST(0);
    /* 0087905d: fstp dword ptr [eax + 0x10] */ W_F32((u32)(r_eax+0x10u), ST(0)); FPOP();
    /* 00879060: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00879063: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00879064: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00879065: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00879066: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00879067: ret  */ FN_RET(0x00878e93); r_esp += 4; return;
L_00879068:; BB(0x00879068);
    /* 00879068: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087906a: jmp 0x878ff1 */ goto L_00878ff1;
}

