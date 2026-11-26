#include "protos.h"

void f_0051a1fc(void) /* sub_51A1FC */
{
    FN_ENTER(0x0051a1fc);
    /* 0051a1fc: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0051a1ff: fld dword ptr [ecx + 0x360] */ FPUSH(R_F32((u32)(r_ecx+0x360u)));
    /* 0051a205: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0051a208: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0051a20c: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0051a211: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0051a215: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0051a219: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 0051a21d: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0051a220: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 0051a224: fld dword ptr [ecx + 0x364] */ FPUSH(R_F32((u32)(r_ecx+0x364u)));
    /* 0051a22a: mov eax, 6 */ r_eax = 0x6u;
    /* 0051a22f: cmp edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0051a232: jl 0x51a236 */ if ((fS!=fO)) goto L_0051a236;
L_0051a234:; BB(0x0051a234);
    /* 0051a234: mov edx, eax */ r_edx = r_eax;
L_0051a236:; BB(0x0051a236);
    /* 0051a236: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0051a238: mov dword ptr [ecx + 0x394], 2 */ W32((u32)(r_ecx+0x394u), 0x2u);
    /* 0051a242: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0051a244: jg 0x51a248 */ if ((!fZ&&fS==fO)) goto L_0051a248;
L_0051a246:; BB(0x0051a246);
    /* 0051a246: mov edx, eax */ r_edx = r_eax;
L_0051a248:; BB(0x0051a248);
    /* 0051a248: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0051a24b: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0051a24f: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0051a254: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0051a258: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0051a25c: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 0051a260: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0051a263: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0051a267: mov dword ptr [ecx + 0x398], edx */ W32((u32)(r_ecx+0x398u), r_edx);
    /* 0051a26d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0051a26f: jl 0x51a28e */ if ((fS!=fO)) goto L_0051a28e;
L_0051a271:; BB(0x0051a271);
    /* 0051a271: cmp eax, 0x1e */ {  u32 a = r_eax; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0051a274: jg 0x51a280 */ if ((!fZ&&fS==fO)) goto L_0051a280;
L_0051a276:; BB(0x0051a276);
    /* 0051a276: mov dword ptr [ecx + 0x39c], eax */ W32((u32)(r_ecx+0x39cu), r_eax);
    /* 0051a27c: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0051a27f: ret  */ FN_RET(0x0051a1fc); r_esp += 4; return;
L_0051a280:; BB(0x0051a280);
    /* 0051a280: mov dword ptr [ecx + 0x39c], 0x1e */ W32((u32)(r_ecx+0x39cu), 0x1eu);
    /* 0051a28a: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0051a28d: ret  */ FN_RET(0x0051a1fc); r_esp += 4; return;
L_0051a28e:; BB(0x0051a28e);
    /* 0051a28e: mov dword ptr [ecx + 0x39c], 0 */ W32((u32)(r_ecx+0x39cu), 0x0u);
    /* 0051a298: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0051a29b: ret  */ FN_RET(0x0051a1fc); r_esp += 4; return;
}

void f_0051a29c(void) /* sub_51A29C */
{
    FN_ENTER(0x0051a29c);
    /* 0051a29c: mov eax, dword ptr [0xa72dcc] */ r_eax = R32((u32)(0xa72dccu));
    /* 0051a2a1: ret  */ FN_RET(0x0051a29c); r_esp += 4; return;
}

void f_0051a2a4(void) /* sub_51A2A4 */
{
    FN_ENTER(0x0051a2a4);
    /* 0051a2a4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0051a2a5: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0051a2a7: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x51a2acu); f_004f7c84();
    /* 0051a2ac: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051a2ae: je 0x51a2bd */ if (fZ) goto L_0051a2bd;
L_0051a2b0:; BB(0x0051a2b0);
    /* 0051a2b0: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0051a2b3: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051a2b5: call dword ptr [eax + 0x1a8] */ { u32 t = R32((u32)(r_eax+0x1a8u)); r_esp -= 4; W32(r_esp, 0x51a2bbu); call_ind(t); }
    /* 0051a2bb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051a2bc: ret  */ FN_RET(0x0051a2a4); r_esp += 4; return;
L_0051a2bd:; BB(0x0051a2bd);
    /* 0051a2bd: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0051a2c0: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051a2c2: call dword ptr [eax + 0x154] */ { u32 t = R32((u32)(r_eax+0x154u)); r_esp -= 4; W32(r_esp, 0x51a2c8u); call_ind(t); }
    /* 0051a2c8: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051a2cb: je 0x51a2da */ if (fZ) goto L_0051a2da;
L_0051a2cd:; BB(0x0051a2cd);
    /* 0051a2cd: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0051a2d0: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051a2d2: call dword ptr [eax + 0x15c] */ { u32 t = R32((u32)(r_eax+0x15cu)); r_esp -= 4; W32(r_esp, 0x51a2d8u); call_ind(t); }
    /* 0051a2d8: jmp 0x51a2ee */ goto L_0051a2ee;
L_0051a2da:; BB(0x0051a2da);
    /* 0051a2da: movsx eax, word ptr [ebp + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32eu));
    /* 0051a2e1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051a2e3: jne 0x51a2ee */ if (!fZ) goto L_0051a2ee;
L_0051a2e5:; BB(0x0051a2e5);
    /* 0051a2e5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a2e7: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051a2e9: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x51a2eeu); f_0051f62c();
L_0051a2ee:; BB(0x0051a2ee);
    /* 0051a2ee: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0051a2f1: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051a2f3: call dword ptr [eax + 0x168] */ { u32 t = R32((u32)(r_eax+0x168u)); r_esp -= 4; W32(r_esp, 0x51a2f9u); call_ind(t); }
    /* 0051a2f9: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051a2fb: call 0x590294 */ r_esp -= 4; W32(r_esp, 0x51a300u); f_00590294();
    /* 0051a300: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051a302: call 0x6401f0 */ r_esp -= 4; W32(r_esp, 0x51a307u); f_006401f0();
    /* 0051a307: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0051a30a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051a30c: call dword ptr [eax + 0x198] */ { u32 t = R32((u32)(r_eax+0x198u)); r_esp -= 4; W32(r_esp, 0x51a312u); call_ind(t); }
    /* 0051a312: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051a313: ret  */ FN_RET(0x0051a2a4); r_esp += 4; return;
}

void f_0051a314(void) /* sub_51A314 */
{
    FN_ENTER(0x0051a314);
    /* 0051a314: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0051a315: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0051a316: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0051a317: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0051a318: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0051a31b: mov edi, ecx */ r_edi = r_ecx;
    /* 0051a31d: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x51a322u); f_004f7c84();
    /* 0051a322: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051a324: je 0x51a338 */ if (fZ) goto L_0051a338;
L_0051a326:; BB(0x0051a326);
    /* 0051a326: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0051a328: mov ecx, edi */ r_ecx = r_edi;
    /* 0051a32a: call dword ptr [eax + 0x1ac] */ { u32 t = R32((u32)(r_eax+0x1acu)); r_esp -= 4; W32(r_esp, 0x51a330u); call_ind(t); }
    /* 0051a330: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0051a333: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0051a334: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051a335: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0051a336: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0051a337: ret  */ FN_RET(0x0051a314); r_esp += 4; return;
L_0051a338:; BB(0x0051a338);
    /* 0051a338: movsx eax, word ptr [edi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32eu));
    /* 0051a33f: mov dword ptr [edi + 0x3b4], 0 */ W32((u32)(r_edi+0x3b4u), 0x0u);
    /* 0051a349: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051a34c: je 0x51a5be */ if (fZ) goto L_0051a5be;
L_0051a352:; BB(0x0051a352);
    /* 0051a352: call 0x694cc8 */ r_esp -= 4; W32(r_esp, 0x51a357u); f_00694cc8();
    /* 0051a357: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051a359: je 0x51a39a */ if (fZ) goto L_0051a39a;
L_0051a35b:; BB(0x0051a35b);
    /* 0051a35b: fld dword ptr [0x920de0] */ FPUSH(R_F32((u32)(0x920de0u)));
    /* 0051a361: fadd dword ptr [0xa72eb0] */ ST(0) = ST(0) + R_F32((u32)(0xa72eb0u));
    /* 0051a367: fld dword ptr [0x920de4] */ FPUSH(R_F32((u32)(0x920de4u)));
    /* 0051a36d: fadd dword ptr [0x921684] */ ST(0) = ST(0) + R_F32((u32)(0x921684u));
    /* 0051a373: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0051a375: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051a378: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0051a37a: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0051a37d: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0051a381: mov dword ptr [esp + 8], 0x42f00000 */ W32((u32)(r_esp+0x8u), 0x42f00000u);
    /* 0051a389: mov ecx, edi */ r_ecx = r_edi;
    /* 0051a38b: call dword ptr [eax + 0x20] */ { u32 t = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, 0x51a38eu); call_ind(t); }
    /* 0051a38e: mov esi, eax */ r_esi = r_eax;
    /* 0051a390: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051a392: je 0x51a5be */ if (fZ) goto L_0051a5be;
L_0051a398:; BB(0x0051a398);
    /* 0051a398: jmp 0x51a3b8 */ goto L_0051a3b8;
L_0051a39a:; BB(0x0051a39a);
    /* 0051a39a: push 0x42f00000 */ { u32 v = 0x42f00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a39f: mov ecx, edi */ r_ecx = r_edi;
    /* 0051a3a1: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0051a3a3: push 0x43fa0000 */ { u32 v = 0x43fa0000u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a3a8: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x51a3abu); call_ind(t); }
    /* 0051a3ab: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051a3ad: je 0x51a5be */ if (fZ) goto L_0051a5be;
L_0051a3b3:; BB(0x0051a3b3);
    /* 0051a3b3: mov esi, 1 */ r_esi = 0x1u;
L_0051a3b8:; BB(0x0051a3b8);
    /* 0051a3b8: mov edx, dword ptr [0xaf034c] */ r_edx = R32((u32)(0xaf034cu));
    /* 0051a3be: mov ebx, dword ptr [0xaf0360] */ r_ebx = R32((u32)(0xaf0360u));
    /* 0051a3c4: mov ebp, dword ptr [0xaf0364] */ r_ebp = R32((u32)(0xaf0364u));
    /* 0051a3ca: mov dword ptr [0xaab518], edx */ W32((u32)(0xaab518u), r_edx);
    /* 0051a3d0: mov dword ptr [0xaab504], ebx */ W32((u32)(0xaab504u), r_ebx);
    /* 0051a3d6: mov dword ptr [edi + 0x3b4], 1 */ W32((u32)(r_edi+0x3b4u), 0x1u);
    /* 0051a3e0: lea ebx, [edi + 0x448] */ r_ebx = (u32)(r_edi+0x448u);
    /* 0051a3e6: mov dword ptr [0xaab500], ebp */ W32((u32)(0xaab500u), r_ebp);
    /* 0051a3ec: mov ebp, 1 */ r_ebp = 0x1u;
    /* 0051a3f1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0051a3f3: call 0x5771a4 */ r_esp -= 4; W32(r_esp, 0x51a3f8u); f_005771a4();
    /* 0051a3f8: lea edx, [edi + 0x300] */ r_edx = (u32)(r_edi+0x300u);
    /* 0051a3fe: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 0051a402: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051a403: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0051a405: call 0x57725c */ r_esp -= 4; W32(r_esp, 0x51a40au); f_0057725c();
    /* 0051a40a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051a40c: je 0x51a426 */ if (fZ) goto L_0051a426;
L_0051a40e:; BB(0x0051a40e);
    /* 0051a40e: mov edx, dword ptr [edi + 0x448] */ r_edx = R32((u32)(r_edi+0x448u));
    /* 0051a414: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0051a416: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x51a419u); call_ind(t); }
    /* 0051a419: mov ecx, edi */ r_ecx = r_edi;
    /* 0051a41b: call 0x8173d0 */ r_esp -= 4; W32(r_esp, 0x51a420u); f_008173d0();
    /* 0051a420: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051a422: je 0x51a426 */ if (fZ) goto L_0051a426;
L_0051a424:; BB(0x0051a424);
    /* 0051a424: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
L_0051a426:; BB(0x0051a426);
    /* 0051a426: movsx edx, word ptr [edi + 0x32e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x32eu));
    /* 0051a42d: cmp edx, 9 */ {  u32 a = r_edx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051a430: je 0x51a4c3 */ if (fZ) goto L_0051a4c3;
L_0051a436:; BB(0x0051a436);
    /* 0051a436: mov dword ptr [esp + 4], 0x3f800000 */ W32((u32)(r_esp+0x4u), 0x3f800000u);
    /* 0051a43e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051a440: jne 0x51a4a5 */ if (!fZ) goto L_0051a4a5;
L_0051a442:; BB(0x0051a442);
    /* 0051a442: fld dword ptr [0x920dd8] */ FPUSH(R_F32((u32)(0x920dd8u)));
    /* 0051a448: fadd dword ptr [edi + 0x4b8] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x4b8u));
    /* 0051a44e: fdivr dword ptr [0x920ddc] */ ST(0) = R_F32((u32)(0x920ddcu)) / ST(0);
    /* 0051a454: fcom dword ptr [0x920dd4] */ fx_compare(ST(0), R_F32((u32)(0x920dd4u))); 
    /* 0051a45a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0051a45c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0051a45d: jae 0x51a490 */ if (!fC) goto L_0051a490;
L_0051a45f:; BB(0x0051a45f);
    /* 0051a45f: fcom dword ptr [0x920dd0] */ fx_compare(ST(0), R_F32((u32)(0x920dd0u))); 
    /* 0051a465: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0051a467: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0051a468: jbe 0x51a47b */ if ((fC||fZ)) goto L_0051a47b;
L_0051a46a:; BB(0x0051a46a);
    /* 0051a46a: fld dword ptr [0x920dcc] */ FPUSH(R_F32((u32)(0x920dccu)));
    /* 0051a470: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0051a472: fst dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0));
    /* 0051a476: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0051a479: jmp 0x51a4b6 */ goto L_0051a4b6;
L_0051a47b:; BB(0x0051a47b);
    /* 0051a47b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0051a47d: mov edx, 0x40a00000 */ r_edx = 0x40a00000u;
    /* 0051a482: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0051a486: mov edx, 0x40a00000 */ r_edx = 0x40a00000u;
    /* 0051a48b: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0051a48e: jmp 0x51a4b6 */ goto L_0051a4b6;
L_0051a490:; BB(0x0051a490);
    /* 0051a490: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0051a492: mov edx, 0x40a00000 */ r_edx = 0x40a00000u;
    /* 0051a497: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0051a49b: mov edx, 0x40a00000 */ r_edx = 0x40a00000u;
    /* 0051a4a0: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0051a4a3: jmp 0x51a4b6 */ goto L_0051a4b6;
L_0051a4a5:; BB(0x0051a4a5);
    /* 0051a4a5: mov edx, 0x40a00000 */ r_edx = 0x40a00000u;
    /* 0051a4aa: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0051a4ae: mov edx, 0x40a00000 */ r_edx = 0x40a00000u;
    /* 0051a4b3: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
L_0051a4b6:; BB(0x0051a4b6);
    /* 0051a4b6: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0051a4b9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a4bb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051a4bc: mov ecx, edi */ r_ecx = r_edi;
    /* 0051a4be: call 0x520cf8 */ r_esp -= 4; W32(r_esp, 0x51a4c3u); f_00520cf8();
L_0051a4c3:; BB(0x0051a4c3);
    /* 0051a4c3: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051a4c5: je 0x51a57a */ if (fZ) goto L_0051a57a;
L_0051a4cb:; BB(0x0051a4cb);
    /* 0051a4cb: mov ecx, edi */ r_ecx = r_edi;
    /* 0051a4cd: call 0x520608 */ r_esp -= 4; W32(r_esp, 0x51a4d2u); f_00520608();
    /* 0051a4d2: mov ecx, dword ptr [edi + 0x24] */ r_ecx = R32((u32)(r_edi+0x24u));
    /* 0051a4d5: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x51a4dau); f_00829cc8();
    /* 0051a4da: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x51a4dfu); f_0082d7b0();
    /* 0051a4df: mov dword ptr [0xa72dec], 0 */ W32((u32)(0xa72decu), 0x0u);
    /* 0051a4e9: lea edx, [edi + 0x3d0] */ r_edx = (u32)(r_edi+0x3d0u);
    /* 0051a4ef: lea ecx, [edi + 0x38] */ r_ecx = (u32)(r_edi+0x38u);
    /* 0051a4f2: mov dword ptr [0xa72de8], edx */ W32((u32)(0xa72de8u), r_edx);
    /* 0051a4f8: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x51a4fdu); f_0082d838();
    /* 0051a4fd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a4ff: push dword ptr [edi + 0x4b8] */ { u32 v = R32((u32)(r_edi+0x4b8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0051a505: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0051a507: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a509: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x51a50eu); f_00830b74();
    /* 0051a50e: movsx edx, word ptr [edi + 0x32e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x32eu));
    /* 0051a515: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051a517: jne 0x51a53b */ if (!fZ) goto L_0051a53b;
L_0051a519:; BB(0x0051a519);
    /* 0051a519: mov dword ptr [0xa72de0], 0 */ W32((u32)(0xa72de0u), 0x0u);
    /* 0051a523: lea edx, [edi + 0x3e8] */ r_edx = (u32)(r_edi+0x3e8u);
    /* 0051a529: mov ecx, 0x519098 */ r_ecx = 0x519098u;
    /* 0051a52e: mov dword ptr [0xa72de4], edx */ W32((u32)(0xa72de4u), r_edx);
    /* 0051a534: call 0x82fac4 */ r_esp -= 4; W32(r_esp, 0x51a539u); f_0082fac4();
    /* 0051a539: jmp 0x51a545 */ goto L_0051a545;
L_0051a53b:; BB(0x0051a53b);
    /* 0051a53b: mov ecx, 0x5190e0 */ r_ecx = 0x5190e0u;
    /* 0051a540: call 0x82fac4 */ r_esp -= 4; W32(r_esp, 0x51a545u); f_0082fac4();
L_0051a545:; BB(0x0051a545);
    /* 0051a545: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 0051a548: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0051a54a: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x51a54fu); f_0082d8bc();
    /* 0051a54f: call 0x520d08 */ r_esp -= 4; W32(r_esp, 0x51a554u); f_00520d08();
    /* 0051a554: call 0x578b38 */ r_esp -= 4; W32(r_esp, 0x51a559u); f_00578b38();
    /* 0051a559: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051a55c: je 0x51a5ea */ if (fZ) goto L_0051a5ea;
L_0051a562:; BB(0x0051a562);
    /* 0051a562: mov ecx, edi */ r_ecx = r_edi;
    /* 0051a564: call 0x7aa7b8 */ r_esp -= 4; W32(r_esp, 0x51a569u); f_007aa7b8();
L_0051a569:; BB(0x0051a569);
    /* 0051a569: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x51a56eu); f_0082dab0();
    /* 0051a56e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0051a570: call 0x82fac4 */ r_esp -= 4; W32(r_esp, 0x51a575u); f_0082fac4();
    /* 0051a575: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x51a57au); f_0082da80();
L_0051a57a:; BB(0x0051a57a);
    /* 0051a57a: mov ecx, edi */ r_ecx = r_edi;
    /* 0051a57c: call 0x520610 */ r_esp -= 4; W32(r_esp, 0x51a581u); f_00520610();
    /* 0051a581: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0051a585: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051a586: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0051a588: call 0x57725c */ r_esp -= 4; W32(r_esp, 0x51a58du); f_0057725c();
    /* 0051a58d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051a58f: je 0x51a59c */ if (fZ) goto L_0051a59c;
L_0051a591:; BB(0x0051a591);
    /* 0051a591: mov eax, dword ptr [edi + 0x448] */ r_eax = R32((u32)(r_edi+0x448u));
    /* 0051a597: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0051a599: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x51a59cu); call_ind(t); }
L_0051a59c:; BB(0x0051a59c);
    /* 0051a59c: mov eax, dword ptr [0xaab518] */ r_eax = R32((u32)(0xaab518u));
    /* 0051a5a1: mov edx, dword ptr [0xaab504] */ r_edx = R32((u32)(0xaab504u));
    /* 0051a5a7: mov ebx, dword ptr [0xaab500] */ r_ebx = R32((u32)(0xaab500u));
    /* 0051a5ad: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 0051a5b2: mov dword ptr [0xaf0360], edx */ W32((u32)(0xaf0360u), r_edx);
    /* 0051a5b8: mov dword ptr [0xaf0364], ebx */ W32((u32)(0xaf0364u), r_ebx);
L_0051a5be:; BB(0x0051a5be);
    /* 0051a5be: mov eax, dword ptr [edi + 0x3d0] */ r_eax = R32((u32)(r_edi+0x3d0u));
    /* 0051a5c4: mov edx, dword ptr [edi + 0x3d4] */ r_edx = R32((u32)(r_edi+0x3d4u));
    /* 0051a5ca: mov ebx, dword ptr [edi + 0x3d8] */ r_ebx = R32((u32)(r_edi+0x3d8u));
    /* 0051a5d0: mov dword ptr [edi + 0x300], eax */ W32((u32)(r_edi+0x300u), r_eax);
    /* 0051a5d6: mov dword ptr [edi + 0x304], edx */ W32((u32)(r_edi+0x304u), r_edx);
    /* 0051a5dc: mov dword ptr [edi + 0x308], ebx */ W32((u32)(r_edi+0x308u), r_ebx);
    /* 0051a5e2: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0051a5e5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0051a5e6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051a5e7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0051a5e8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0051a5e9: ret  */ FN_RET(0x0051a314); r_esp += 4; return;
L_0051a5ea:; BB(0x0051a5ea);
    /* 0051a5ea: mov ecx, edi */ r_ecx = r_edi;
    /* 0051a5ec: call 0x7aa668 */ r_esp -= 4; W32(r_esp, 0x51a5f1u); f_007aa668();
    /* 0051a5f1: jmp 0x51a569 */ goto L_0051a569;
}

void f_0051a5f8(void) /* sub_51A5F8 */
{
    FN_ENTER(0x0051a5f8);
    /* 0051a5f8: call 0x51a1fc */ r_esp -= 4; W32(r_esp, 0x51a5fdu); f_0051a1fc();
    /* 0051a5fd: ret  */ FN_RET(0x0051a5f8); r_esp += 4; return;
}

void f_0051a600(void) /* sub_51A600 */
{
    FN_ENTER(0x0051a600);
    /* 0051a600: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0051a601: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0051a602: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0051a603: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0051a606: mov edi, ecx */ r_edi = r_ecx;
    /* 0051a608: mov ecx, edi */ r_ecx = r_edi;
    /* 0051a60a: call 0x51f814 */ r_esp -= 4; W32(r_esp, 0x51a60fu); f_0051f814();
    /* 0051a60f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051a611: je 0x51a6a7 */ if (fZ) goto L_0051a6a7;
L_0051a617:; BB(0x0051a617);
    /* 0051a617: mov eax, dword ptr [edi + 0x394] */ r_eax = R32((u32)(r_edi+0x394u));
    /* 0051a61d: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051a620: jne 0x51a63b */ if (!fZ) goto L_0051a63b;
L_0051a622:; BB(0x0051a622);
    /* 0051a622: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0051a624: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051a625: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051a626: call 0x51f7fc */ r_esp -= 4; W32(r_esp, 0x51a62bu); f_0051f7fc();
    /* 0051a62b: push 0x92104c */ { u32 v = 0x92104cu; r_esp -= 4; W32(r_esp, v); }
    /* 0051a630: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051a631: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x51a636u); f_0061cdb0();
    /* 0051a636: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051a639: jmp 0x51a670 */ goto L_0051a670;
L_0051a63b:; BB(0x0051a63b);
    /* 0051a63b: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051a63e: jne 0x51a659 */ if (!fZ) goto L_0051a659;
L_0051a640:; BB(0x0051a640);
    /* 0051a640: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0051a642: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051a643: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051a644: call 0x51f7fc */ r_esp -= 4; W32(r_esp, 0x51a649u); f_0051f7fc();
    /* 0051a649: push 0x92105c */ { u32 v = 0x92105cu; r_esp -= 4; W32(r_esp, v); }
    /* 0051a64e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051a64f: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x51a654u); f_0061cdb0();
    /* 0051a654: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051a657: jmp 0x51a670 */ goto L_0051a670;
L_0051a659:; BB(0x0051a659);
    /* 0051a659: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0051a65b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051a65c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051a65d: call 0x51f7fc */ r_esp -= 4; W32(r_esp, 0x51a662u); f_0051f7fc();
    /* 0051a662: push 0x92103c */ { u32 v = 0x92103cu; r_esp -= 4; W32(r_esp, v); }
    /* 0051a667: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051a668: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x51a66du); f_0061cdb0();
    /* 0051a66d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0051a670:; BB(0x0051a670);
    /* 0051a670: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a672: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a674: call 0x51f7fc */ r_esp -= 4; W32(r_esp, 0x51a679u); f_0051f7fc();
    /* 0051a679: push dword ptr [edi + 0x398] */ { u32 v = R32((u32)(r_edi+0x398u)); r_esp -= 4; W32(r_esp, v); }
    /* 0051a67f: push 0x92106c */ { u32 v = 0x92106cu; r_esp -= 4; W32(r_esp, v); }
    /* 0051a684: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051a685: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x51a68au); f_0061cdb0();
    /* 0051a68a: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a68c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a68e: call 0x51f7fc */ r_esp -= 4; W32(r_esp, 0x51a693u); f_0051f7fc();
    /* 0051a693: push dword ptr [edi + 0x39c] */ { u32 v = R32((u32)(r_edi+0x39cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0051a699: push 0x92107c */ { u32 v = 0x92107cu; r_esp -= 4; W32(r_esp, v); }
    /* 0051a69e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051a69f: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x51a6a4u); f_0061cdb0();
    /* 0051a6a4: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0051a6a7:; BB(0x0051a6a7);
    /* 0051a6a7: mov eax, dword ptr [edi + 0x394] */ r_eax = R32((u32)(r_edi+0x394u));
    /* 0051a6ad: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051a6b0: jne 0x51a6e3 */ if (!fZ) goto L_0051a6e3;
L_0051a6b2:; BB(0x0051a6b2);
    /* 0051a6b2: mov eax, dword ptr [edi + 0xdc] */ r_eax = R32((u32)(r_edi+0xdcu));
    /* 0051a6b8: mov esi, dword ptr [edi + 0xd8] */ r_esi = R32((u32)(r_edi+0xd8u));
    /* 0051a6be: mov edx, dword ptr [esi + 0x74] */ r_edx = R32((u32)(r_esi+0x74u));
    /* 0051a6c1: mov esi, dword ptr [eax + edx*8 + 4] */ r_esi = R32((u32)(r_eax+r_edx*8+0x4u));
    /* 0051a6c5: mov ebx, dword ptr [esi + 4] */ r_ebx = R32((u32)(r_esi+0x4u));
    /* 0051a6c8: add ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0051a6cb: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 0051a6cf: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 0051a6d3: shr ebx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 0051a6d6: fadd dword ptr [ebx*4 + 0x920d50] */ ST(0) = ST(0) + R_F32((u32)(r_ebx*4+0x920d50u));
    /* 0051a6dd: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 0051a6e1: jmp 0x51a72a */ goto L_0051a72a;
L_0051a6e3:; BB(0x0051a6e3);
    /* 0051a6e3: mov ebx, dword ptr [edi + 0xdc] */ r_ebx = R32((u32)(r_edi+0xdcu));
    /* 0051a6e9: mov edx, dword ptr [edi + 0xd8] */ r_edx = R32((u32)(r_edi+0xd8u));
    /* 0051a6ef: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051a6f2: jne 0x51a719 */ if (!fZ) goto L_0051a719;
L_0051a6f4:; BB(0x0051a6f4);
    /* 0051a6f4: mov esi, dword ptr [edx + 0x34] */ r_esi = R32((u32)(r_edx+0x34u));
    /* 0051a6f7: mov esi, dword ptr [ebx + esi*8 + 4] */ r_esi = R32((u32)(r_ebx+r_esi*8+0x4u));
    /* 0051a6fb: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 0051a6fe: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0051a701: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0051a705: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 0051a709: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0051a70c: fadd dword ptr [eax*4 + 0x920d50] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x920d50u));
    /* 0051a713: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 0051a717: jmp 0x51a72a */ goto L_0051a72a;
L_0051a719:; BB(0x0051a719);
    /* 0051a719: fld dword ptr [0x920dc8] */ FPUSH(R_F32((u32)(0x920dc8u)));
    /* 0051a71f: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0051a722: mov esi, dword ptr [ebx + eax*8 + 4] */ r_esi = R32((u32)(r_ebx+r_eax*8+0x4u));
    /* 0051a726: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
L_0051a72a:; BB(0x0051a72a);
    /* 0051a72a: push 0x42f00000 */ { u32 v = 0x42f00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a72f: mov ecx, edi */ r_ecx = r_edi;
    /* 0051a731: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0051a733: push 0x43fa0000 */ { u32 v = 0x43fa0000u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a738: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x51a73bu); call_ind(t); }
    /* 0051a73b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051a73d: jne 0x51a747 */ if (!fZ) goto L_0051a747;
L_0051a73f:; BB(0x0051a73f);
    /* 0051a73f: lea ebx, [edi + 0x38] */ r_ebx = (u32)(r_edi+0x38u);
    /* 0051a742: jmp 0x51a7d3 */ goto L_0051a7d3;
L_0051a747:; BB(0x0051a747);
    /* 0051a747: mov dword ptr [esp + 0xc], 0x40a00000 */ W32((u32)(r_esp+0xcu), 0x40a00000u);
    /* 0051a74f: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 0051a753: mov ecx, edi */ r_ecx = r_edi;
    /* 0051a755: mov dword ptr [esp + 0x10], 0x3f800000 */ W32((u32)(r_esp+0x10u), 0x3f800000u);
    /* 0051a75d: mov dword ptr [esp + 0x14], 0x40a00000 */ W32((u32)(r_esp+0x14u), 0x40a00000u);
    /* 0051a765: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a767: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051a768: call 0x520cf8 */ r_esp -= 4; W32(r_esp, 0x51a76du); f_00520cf8();
    /* 0051a76d: mov ecx, dword ptr [edi + 0x24] */ r_ecx = R32((u32)(r_edi+0x24u));
    /* 0051a770: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x51a775u); f_00829cc8();
    /* 0051a775: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x51a77au); f_0082d7b0();
    /* 0051a77a: lea ebx, [edi + 0x38] */ r_ebx = (u32)(r_edi+0x38u);
    /* 0051a77d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0051a77f: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x51a784u); f_0082d838();
    /* 0051a784: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a786: push 0xc0a00000 */ { u32 v = 0xc0a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a78b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0051a78d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a78f: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x51a794u); f_00830b74();
    /* 0051a794: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 0051a797: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0051a799: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x51a79eu); f_0082d8bc();
    /* 0051a79e: call 0x520d08 */ r_esp -= 4; W32(r_esp, 0x51a7a3u); f_00520d08();
    /* 0051a7a3: call 0x578b38 */ r_esp -= 4; W32(r_esp, 0x51a7a8u); f_00578b38();
    /* 0051a7a8: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x51a7adu); f_0082fa9c();
    /* 0051a7ad: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 0051a7b1: mov eax, dword ptr [edi + 0x34] */ r_eax = R32((u32)(r_edi+0x34u));
    /* 0051a7b4: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0051a7b8: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0051a7bb: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 0051a7bf: call 0x83046c */ r_esp -= 4; W32(r_esp, 0x51a7c4u); f_0083046c();
    /* 0051a7c4: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x51a7c9u); f_0082faac();
    /* 0051a7c9: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x51a7ceu); f_0082dab0();
    /* 0051a7ce: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x51a7d3u); f_0082da80();
L_0051a7d3:; BB(0x0051a7d3);
    /* 0051a7d3: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x51a7d8u); f_0082d7b0();
    /* 0051a7d8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0051a7da: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x51a7dfu); f_0082d838();
    /* 0051a7df: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 0051a7e2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0051a7e4: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x51a7e9u); f_0082d8bc();
    /* 0051a7e9: push dword ptr [edi + 0x36c] */ { u32 v = R32((u32)(r_edi+0x36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0051a7ef: push dword ptr [edi + 0x368] */ { u32 v = R32((u32)(r_edi+0x368u)); r_esp -= 4; W32(r_esp, v); }
    /* 0051a7f5: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0051a7f7: push dword ptr [edi + 0x364] */ { u32 v = R32((u32)(r_edi+0x364u)); r_esp -= 4; W32(r_esp, v); }
    /* 0051a7fd: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x51a802u); f_00830b74();
    /* 0051a802: push dword ptr [0x9f982c] */ { u32 v = R32((u32)(0x9f982cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0051a808: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x51a80du); f_0082e1e8();
    /* 0051a80d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0051a80e: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x51a813u); f_0082da80();
    /* 0051a813: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0051a816: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0051a817: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0051a818: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0051a819: ret  */ FN_RET(0x0051a600); r_esp += 4; return;
}

void f_0051a81c(void) /* sub_51A81C */
{
    FN_ENTER(0x0051a81c);
    /* 0051a81c: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0051a820: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0051a823: ja 0x51a8a8 */ if ((!fC&&!fZ)) goto L_0051a8a8;
L_0051a829:; BB(0x0051a829);
    /* 0051a829: mov eax, dword ptr [eax*4 + 0x920cfc] */ r_eax = R32((u32)(r_eax*4+0x920cfcu));
    /* 0051a830: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0051a8a8:; BB(0x0051a8a8);
    /* 0051a8a8: ret 8 */ FN_RET(0x0051a81c); r_esp += 12; return;
}

void f_0051a832(void)
{
    FN_ENTER(0x0051a832);
    /* 0051a832: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0051a836: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051a837: call 0x51950c */ r_esp -= 4; W32(r_esp, 0x51a83cu); f_0051950c();
    /* 0051a83c: jmp 0x51a8a8 */ goto L_0051a8a8;
L_0051a8a8:; BB(0x0051a8a8);
    /* 0051a8a8: ret 8 */ FN_RET(0x0051a832); r_esp += 12; return;
}

void f_0051a83e(void)
{
    FN_ENTER(0x0051a83e);
    /* 0051a83e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0051a842: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051a843: call 0x519550 */ r_esp -= 4; W32(r_esp, 0x51a848u); f_00519550();
    /* 0051a848: jmp 0x51a8a8 */ goto L_0051a8a8;
L_0051a8a8:; BB(0x0051a8a8);
    /* 0051a8a8: ret 8 */ FN_RET(0x0051a83e); r_esp += 12; return;
}

void f_0051a84a(void)
{
    FN_ENTER(0x0051a84a);
    /* 0051a84a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0051a84e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051a84f: call 0x5197a0 */ r_esp -= 4; W32(r_esp, 0x51a854u); f_005197a0();
    /* 0051a854: jmp 0x51a8a8 */ goto L_0051a8a8;
L_0051a8a8:; BB(0x0051a8a8);
    /* 0051a8a8: ret 8 */ FN_RET(0x0051a84a); r_esp += 12; return;
}

void f_0051a856(void)
{
    FN_ENTER(0x0051a856);
    /* 0051a856: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0051a85a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051a85b: call 0x5198b4 */ r_esp -= 4; W32(r_esp, 0x51a860u); f_005198b4();
    /* 0051a860: jmp 0x51a8a8 */ goto L_0051a8a8;
L_0051a8a8:; BB(0x0051a8a8);
    /* 0051a8a8: ret 8 */ FN_RET(0x0051a856); r_esp += 12; return;
}

void f_0051a862(void)
{
    FN_ENTER(0x0051a862);
    /* 0051a862: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0051a866: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051a867: call 0x519a30 */ r_esp -= 4; W32(r_esp, 0x51a86cu); f_00519a30();
    /* 0051a86c: jmp 0x51a8a8 */ goto L_0051a8a8;
L_0051a8a8:; BB(0x0051a8a8);
    /* 0051a8a8: ret 8 */ FN_RET(0x0051a862); r_esp += 12; return;
}

void f_0051a86e(void)
{
    FN_ENTER(0x0051a86e);
    /* 0051a86e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0051a872: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051a873: call 0x519b6c */ r_esp -= 4; W32(r_esp, 0x51a878u); f_00519b6c();
    /* 0051a878: jmp 0x51a8a8 */ goto L_0051a8a8;
L_0051a8a8:; BB(0x0051a8a8);
    /* 0051a8a8: ret 8 */ FN_RET(0x0051a86e); r_esp += 12; return;
}

void f_0051a87a(void)
{
    FN_ENTER(0x0051a87a);
    /* 0051a87a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0051a87e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051a87f: call 0x519d08 */ r_esp -= 4; W32(r_esp, 0x51a884u); f_00519d08();
    /* 0051a884: jmp 0x51a8a8 */ goto L_0051a8a8;
L_0051a8a8:; BB(0x0051a8a8);
    /* 0051a8a8: ret 8 */ FN_RET(0x0051a87a); r_esp += 12; return;
}

void f_0051a886(void)
{
    FN_ENTER(0x0051a886);
    /* 0051a886: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0051a88a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051a88b: call 0x519d98 */ r_esp -= 4; W32(r_esp, 0x51a890u); f_00519d98();
    /* 0051a890: jmp 0x51a8a8 */ goto L_0051a8a8;
L_0051a8a8:; BB(0x0051a8a8);
    /* 0051a8a8: ret 8 */ FN_RET(0x0051a886); r_esp += 12; return;
}

void f_0051a892(void)
{
    FN_ENTER(0x0051a892);
    /* 0051a892: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0051a896: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051a897: call 0x51ae9c */ r_esp -= 4; W32(r_esp, 0x51a89cu); f_0051ae9c();
    /* 0051a89c: jmp 0x51a8a8 */ goto L_0051a8a8;
L_0051a8a8:; BB(0x0051a8a8);
    /* 0051a8a8: ret 8 */ FN_RET(0x0051a892); r_esp += 12; return;
}

void f_0051a89e(void)
{
    FN_ENTER(0x0051a89e);
    /* 0051a89e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0051a8a2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051a8a3: call 0x519e20 */ r_esp -= 4; W32(r_esp, 0x51a8a8u); f_00519e20();
    /* 0051a8a8: ret 8 */ FN_RET(0x0051a89e); r_esp += 12; return;
}

void f_0051a8ac(void) /* sub_51A8AC */
{
    FN_ENTER(0x0051a8ac);
    /* 0051a8ac: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 0051a8b3: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0051a8b6: je 0x51a8db */ if (fZ) goto L_0051a8db;
L_0051a8b8:; BB(0x0051a8b8);
    /* 0051a8b8: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0051a8bb: je 0x51a8db */ if (fZ) goto L_0051a8db;
L_0051a8bd:; BB(0x0051a8bd);
    /* 0051a8bd: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0051a8c0: je 0x51a8db */ if (fZ) goto L_0051a8db;
L_0051a8c2:; BB(0x0051a8c2);
    /* 0051a8c2: mov eax, dword ptr [ecx + 0x3b0] */ r_eax = R32((u32)(r_ecx+0x3b0u));
    /* 0051a8c8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051a8ca: jne 0x51a8d4 */ if (!fZ) goto L_0051a8d4;
L_0051a8cc:; BB(0x0051a8cc);
    /* 0051a8cc: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a8ce: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x51a8d3u); f_0051f62c();
    /* 0051a8d3: ret  */ FN_RET(0x0051a8ac); r_esp += 4; return;
L_0051a8d4:; BB(0x0051a8d4);
    /* 0051a8d4: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a8d6: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x51a8dbu); f_0051f62c();
L_0051a8db:; BB(0x0051a8db);
    /* 0051a8db: ret  */ FN_RET(0x0051a8ac); r_esp += 4; return;
}

void f_0051a8dc(void) /* sub_51A8DC */
{
    FN_ENTER(0x0051a8dc);
    /* 0051a8dc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0051a8dd: mov esi, ecx */ r_esi = r_ecx;
    /* 0051a8df: movsx eax, word ptr [esi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x32eu));
    /* 0051a8e6: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051a8e9: je 0x51a909 */ if (fZ) goto L_0051a909;
L_0051a8eb:; BB(0x0051a8eb);
    /* 0051a8eb: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051a8ee: je 0x51a900 */ if (fZ) goto L_0051a900;
L_0051a8f0:; BB(0x0051a8f0);
    /* 0051a8f0: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0051a8f3: je 0x51a8fe */ if (fZ) goto L_0051a8fe;
L_0051a8f5:; BB(0x0051a8f5);
    /* 0051a8f5: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a8f7: mov ecx, esi */ r_ecx = r_esi;
    /* 0051a8f9: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x51a8feu); f_0051f62c();
L_0051a8fe:; BB(0x0051a8fe);
    /* 0051a8fe: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0051a8ff: ret  */ FN_RET(0x0051a8dc); r_esp += 4; return;
L_0051a900:; BB(0x0051a900);
    /* 0051a900: mov ecx, esi */ r_ecx = r_esi;
    /* 0051a902: call 0x51f81c */ r_esp -= 4; W32(r_esp, 0x51a907u); f_0051f81c();
    /* 0051a907: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0051a908: ret  */ FN_RET(0x0051a8dc); r_esp += 4; return;
L_0051a909:; BB(0x0051a909);
    /* 0051a909: call 0x520e6c */ r_esp -= 4; W32(r_esp, 0x51a90eu); f_00520e6c();
    /* 0051a90e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051a910: jne 0x51a91b */ if (!fZ) goto L_0051a91b;
L_0051a912:; BB(0x0051a912);
    /* 0051a912: movsx eax, word ptr [esi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x32eu));
    /* 0051a919: jmp 0x51a8eb */ goto L_0051a8eb;
L_0051a91b:; BB(0x0051a91b);
    /* 0051a91b: mov ecx, esi */ r_ecx = r_esi;
    /* 0051a91d: call 0x51f81c */ r_esp -= 4; W32(r_esp, 0x51a922u); f_0051f81c();
    /* 0051a922: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0051a923: ret  */ FN_RET(0x0051a8dc); r_esp += 4; return;
}

void f_0051a924(void) /* sub_51A924 */
{
    FN_ENTER(0x0051a924);
    /* 0051a924: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0051a925: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0051a928: mov edx, ecx */ r_edx = r_ecx;
    /* 0051a92a: mov ecx, dword ptr [edx + 0x3b8] */ r_ecx = R32((u32)(r_edx+0x3b8u));
    /* 0051a930: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0051a932: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0051a934: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0051a936: jle 0x51a986 */ if ((fZ||fS!=fO)) goto L_0051a986;
L_0051a938:; BB(0x0051a938);
    /* 0051a938: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 0051a93c: mov esi, edx */ r_esi = r_edx;
    /* 0051a93e: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 0051a942: movzx edi, word ptr [esp + 0x14] */ r_edi = (u32)R16((u32)(r_esp+0x14u));
    /* 0051a947: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 0051a94a: mov ebp, eax */ r_ebp = r_eax;
L_0051a94c:; BB(0x0051a94c);
    /* 0051a94c: movzx ecx, word ptr [esi + ebp*2 + 0x3c0] */ r_ecx = (u32)R16((u32)(r_esi+r_ebp*2+0x3c0u));
    /* 0051a954: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051a955: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x51a95au); f_007b4d18();
    /* 0051a95a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0051a95b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051a95d: je 0x51a970 */ if (fZ) goto L_0051a970;
L_0051a95f:; BB(0x0051a95f);
    /* 0051a95f: mov ecx, eax */ r_ecx = r_eax;
    /* 0051a961: call 0x5187dc */ r_esp -= 4; W32(r_esp, 0x51a966u); f_005187dc();
    /* 0051a966: movzx ecx, ax */ r_ecx = (u32)(u16)r_eax;
    /* 0051a969: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051a96b: jne 0x51a970 */ if (!fZ) goto L_0051a970;
L_0051a96d:; BB(0x0051a96d);
    /* 0051a96d: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_0051a970:; BB(0x0051a970);
    /* 0051a970: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0051a973: cmp ebp, dword ptr [esi + 0x3b8] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esi+0x3b8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0051a979: jl 0x51a94c */ if ((fS!=fO)) goto L_0051a94c;
L_0051a97b:; BB(0x0051a97b);
    /* 0051a97b: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 0051a97f: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 0051a983: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
L_0051a986:; BB(0x0051a986);
    /* 0051a986: call 0x520e6c */ r_esp -= 4; W32(r_esp, 0x51a98bu); f_00520e6c();
    /* 0051a98b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051a98d: je 0x51a9a1 */ if (fZ) goto L_0051a9a1;
L_0051a98f:; BB(0x0051a98f);
    /* 0051a98f: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0051a992: mov eax, 0 */ r_eax = 0x0u;
    /* 0051a997: setl al */ r_eax = (r_eax & 0xffffff00u) | ((((fS!=fO)) ? 1 : 0) & 0xffu);
    /* 0051a99a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0051a99d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0051a99e: ret 4 */ FN_RET(0x0051a924); r_esp += 8; return;
L_0051a9a1:; BB(0x0051a9a1);
    /* 0051a9a1: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0051a9a4: mov eax, 0 */ r_eax = 0x0u;
    /* 0051a9a9: setl al */ r_eax = (r_eax & 0xffffff00u) | ((((fS!=fO)) ? 1 : 0) & 0xffu);
    /* 0051a9ac: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0051a9af: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0051a9b0: ret 4 */ FN_RET(0x0051a924); r_esp += 8; return;
}

void f_0051a9b4(void) /* sub_51A9B4 */
{
    FN_ENTER(0x0051a9b4);
    /* 0051a9b4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0051a9b5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0051a9b6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0051a9b7: mov edx, ecx */ r_edx = r_ecx;
    /* 0051a9b9: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0051a9bb: mov edi, edx */ r_edi = r_edx;
L_0051a9bd:; BB(0x0051a9bd);
    /* 0051a9bd: movzx eax, word ptr [edi + ebx*2 + 0x3c0] */ r_eax = (u32)R16((u32)(r_edi+r_ebx*2+0x3c0u));
    /* 0051a9c5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051a9c6: lea esi, [ebx + ebx] */ r_esi = (u32)(r_ebx+r_ebx);
    /* 0051a9c9: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x51a9ceu); f_007b4d18();
    /* 0051a9ce: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0051a9cf: cmp eax, dword ptr [esp + 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x10u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0051a9d3: je 0x51a9e3 */ if (fZ) goto L_0051a9e3;
L_0051a9d5:; BB(0x0051a9d5);
    /* 0051a9d5: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0051a9d8: cmp ebx, 6 */ {  u32 a = r_ebx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0051a9db: jl 0x51a9bd */ if ((fS!=fO)) goto L_0051a9bd;
L_0051a9dd:; BB(0x0051a9dd);
    /* 0051a9dd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0051a9de: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0051a9df: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0051a9e0: ret 4 */ FN_RET(0x0051a9b4); r_esp += 8; return;
L_0051a9e3:; BB(0x0051a9e3);
    /* 0051a9e3: mov eax, esi */ r_eax = r_esi;
    /* 0051a9e5: mov edx, edi */ r_edx = r_edi;
    /* 0051a9e7: mov ecx, dword ptr [edx + 0x3b8] */ r_ecx = R32((u32)(r_edx+0x3b8u));
    /* 0051a9ed: lea ebx, [ecx - 1] */ r_ebx = (u32)(r_ecx+0xffffffffu);
    /* 0051a9f0: mov dword ptr [edx + 0x3b8], ebx */ W32((u32)(r_edx+0x3b8u), r_ebx);
    /* 0051a9f6: movzx ebx, word ptr [edx + ecx*2 + 0x3be] */ r_ebx = (u32)R16((u32)(r_edx+r_ecx*2+0x3beu));
    /* 0051a9fe: mov word ptr [edx + eax + 0x3c0], bx */ W16((u32)(r_edx+r_eax+0x3c0u), (u16)r_ebx);
    /* 0051aa06: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 0051aa0b: mov ebx, dword ptr [edx + 0x3b8] */ r_ebx = R32((u32)(r_edx+0x3b8u));
    /* 0051aa11: mov word ptr [edx + ebx*2 + 0x3c0], ax */ W16((u32)(r_edx+r_ebx*2+0x3c0u), (u16)r_eax);
    /* 0051aa19: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0051aa1a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0051aa1b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0051aa1c: ret 4 */ FN_RET(0x0051a9b4); r_esp += 8; return;
}

void f_0051aa20(void) /* sub_51AA20 */
{
    FN_ENTER(0x0051aa20);
    /* 0051aa20: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0051aa21: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0051aa22: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0051aa25: mov edi, ecx */ r_edi = r_ecx;
    /* 0051aa27: fld dword ptr [0x920d94] */ FPUSH(R_F32((u32)(0x920d94u)));
    /* 0051aa2d: fadd dword ptr [edi + 0x4c] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x4cu));
    /* 0051aa30: mov edx, dword ptr [edi + 0x48] */ r_edx = R32((u32)(r_edi+0x48u));
    /* 0051aa33: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0051aa36: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0051aa39: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0051aa3d: fild dword ptr [esp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_esp+0xcu)));
    /* 0051aa41: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0051aa44: fadd dword ptr [eax*4 + 0x920d38] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x920d38u));
    /* 0051aa4b: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0051aa4d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0051aa4f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0051aa50: jae 0x51aa59 */ if (!fC) goto L_0051aa59;
L_0051aa52:; BB(0x0051aa52);
    /* 0051aa52: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0051aa54: fstp dword ptr [edi + 0x4c] */ W_F32((u32)(r_edi+0x4cu), ST(0)); FPOP();
    /* 0051aa57: jmp 0x51aa5e */ goto L_0051aa5e;
L_0051aa59:; BB(0x0051aa59);
    /* 0051aa59: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0051aa5b: fstp dword ptr [edi + 0x4c] */ W_F32((u32)(r_edi+0x4cu), ST(0)); FPOP();
L_0051aa5e:; BB(0x0051aa5e);
    /* 0051aa5e: mov eax, dword ptr [edi + 0x2c] */ r_eax = R32((u32)(r_edi+0x2cu));
    /* 0051aa61: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051aa63: je 0x51ab9c */ if (fZ) goto L_0051ab9c;
L_0051aa69:; BB(0x0051aa69);
    /* 0051aa69: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051aa6c: jne 0x51aac6 */ if (!fZ) goto L_0051aac6;
L_0051aa6e:; BB(0x0051aa6e);
    /* 0051aa6e: fld dword ptr [0x920da8] */ FPUSH(R_F32((u32)(0x920da8u)));
    /* 0051aa74: fadd dword ptr [edi + 0x20] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x20u));
    /* 0051aa77: fcom dword ptr [0x920da4] */ fx_compare(ST(0), R_F32((u32)(0x920da4u))); 
    /* 0051aa7d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0051aa7f: fstp dword ptr [edi + 0x20] */ W_F32((u32)(r_edi+0x20u), ST(0)); FPOP();
    /* 0051aa82: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0051aa83: jbe 0x51aa98 */ if ((fC||fZ)) goto L_0051aa98;
L_0051aa85:; BB(0x0051aa85);
    /* 0051aa85: fld dword ptr [edi + 0x5c] */ FPUSH(R_F32((u32)(r_edi+0x5cu)));
    /* 0051aa88: fmul dword ptr [0x920dac] */ ST(0) = ST(0) * R_F32((u32)(0x920dacu));
    /* 0051aa8e: fstp dword ptr [edi + 0x54] */ W_F32((u32)(r_edi+0x54u), ST(0)); FPOP();
    /* 0051aa91: mov dword ptr [edi + 0x2c], 2 */ W32((u32)(r_edi+0x2cu), 0x2u);
L_0051aa98:; BB(0x0051aa98);
    /* 0051aa98: push 0xe1 */ { u32 v = 0xe1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051aa9d: mov ecx, dword ptr [edi + 0x14] */ r_ecx = R32((u32)(r_edi+0x14u));
    /* 0051aaa0: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x51aaa5u); f_007879b8();
    /* 0051aaa5: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0051aaa7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051aaa8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051aaa9: push dword ptr [edi + 0x30] */ { u32 v = R32((u32)(r_edi+0x30u)); r_esp -= 4; W32(r_esp, v); }
    /* 0051aaac: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0051aaad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051aaae: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x51aab3u); f_008144b0();
    /* 0051aab3: push 0xfffffc00 */ { u32 v = 0xfffffc00u; r_esp -= 4; W32(r_esp, v); }
    /* 0051aab8: call 0x814680 */ r_esp -= 4; W32(r_esp, 0x51aabdu); f_00814680();
    /* 0051aabd: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051aac0: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0051aac3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0051aac4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0051aac5: ret  */ FN_RET(0x0051aa20); r_esp += 4; return;
L_0051aac6:; BB(0x0051aac6);
    /* 0051aac6: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051aac9: jne 0x51ac72 */ if (!fZ) goto L_0051ac72;
L_0051aacf:; BB(0x0051aacf);
    /* 0051aacf: fld dword ptr [0x920db0] */ FPUSH(R_F32((u32)(0x920db0u)));
    /* 0051aad5: fld dword ptr [0x920dac] */ FPUSH(R_F32((u32)(0x920dacu)));
    /* 0051aadb: fld dword ptr [edi + 0x5c] */ FPUSH(R_F32((u32)(r_edi+0x5cu)));
    /* 0051aade: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 0051aae0: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0051aae2: fadd dword ptr [edi + 0x54] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x54u));
    /* 0051aae5: fld dword ptr [edi + 0x5c] */ FPUSH(R_F32((u32)(r_edi+0x5cu)));
    /* 0051aae8: fchs  */ ST(0) = -ST(0);
    /* 0051aaea: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0051aaec: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 0051aaee: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0051aaf0: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0051aaf1: jbe 0x51ab40 */ if ((fC||fZ)) goto L_0051ab40;
L_0051aaf3:; BB(0x0051aaf3);
    /* 0051aaf3: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0051aaf5: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0051aaf7: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0051aaf9: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 0051aafe: push dword ptr [edi + 0x34] */ { u32 v = R32((u32)(r_edi+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 0051ab01: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x51ab06u); f_0050b510();
    /* 0051ab06: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051ab09: push 0xe0 */ { u32 v = 0xe0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051ab0e: mov ecx, dword ptr [edi + 0x14] */ r_ecx = R32((u32)(r_edi+0x14u));
    /* 0051ab11: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x51ab16u); f_007879b8();
    /* 0051ab16: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0051ab18: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051ab19: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051ab1a: push dword ptr [edi + 0x34] */ { u32 v = R32((u32)(r_edi+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 0051ab1d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051ab1e: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x51ab23u); f_00814298();
    /* 0051ab23: push 0xfffffc00 */ { u32 v = 0xfffffc00u; r_esp -= 4; W32(r_esp, v); }
    /* 0051ab28: call 0x814680 */ r_esp -= 4; W32(r_esp, 0x51ab2du); f_00814680();
    /* 0051ab2d: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 0051ab31: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0051ab36: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 0051ab3a: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0051ab3d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0051ab3e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0051ab3f: ret  */ FN_RET(0x0051aa20); r_esp += 4; return;
L_0051ab40:; BB(0x0051ab40);
    /* 0051ab40: mov ecx, dword ptr [edi + 0x14] */ r_ecx = R32((u32)(r_edi+0x14u));
    /* 0051ab43: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0051ab45: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0051ab47: fld dword ptr [edi + 0x50] */ FPUSH(R_F32((u32)(r_edi+0x50u)));
    /* 0051ab4a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0051ab4c: fst dword ptr [edi + 0x54] */ W_F32((u32)(r_edi+0x54u), ST(0));
    /* 0051ab4f: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0051ab51: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0051ab53: fmul dword ptr [edi + 0x60] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0x60u));
    /* 0051ab56: fadd dword ptr [edi + 0x64] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x64u));
    /* 0051ab59: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0051ab5b: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0051ab5d: fld dword ptr [edi + 0x58] */ FPUSH(R_F32((u32)(r_edi+0x58u)));
    /* 0051ab60: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0051ab62: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 0051ab64: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0051ab66: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0051ab68: fstp dword ptr [edi + 0x20] */ W_F32((u32)(r_edi+0x20u), ST(0)); FPOP();
    /* 0051ab6b: fstp dword ptr [edi + 0x1c] */ W_F32((u32)(r_edi+0x1cu), ST(0)); FPOP();
    /* 0051ab6e: fstp dword ptr [edi + 0x24] */ W_F32((u32)(r_edi+0x24u), ST(0)); FPOP();
    /* 0051ab71: push 0xe1 */ { u32 v = 0xe1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051ab76: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x51ab7bu); f_007879b8();
    /* 0051ab7b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0051ab7d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051ab7e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051ab7f: push dword ptr [edi + 0x34] */ { u32 v = R32((u32)(r_edi+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 0051ab82: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0051ab83: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051ab84: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x51ab89u); f_008144b0();
    /* 0051ab89: push 0xfffffc00 */ { u32 v = 0xfffffc00u; r_esp -= 4; W32(r_esp, v); }
    /* 0051ab8e: call 0x814680 */ r_esp -= 4; W32(r_esp, 0x51ab93u); f_00814680();
    /* 0051ab93: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051ab96: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0051ab99: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0051ab9a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0051ab9b: ret  */ FN_RET(0x0051aa20); r_esp += 4; return;
L_0051ab9c:; BB(0x0051ab9c);
    /* 0051ab9c: mov eax, dword ptr [edi + 0x38] */ r_eax = R32((u32)(r_edi+0x38u));
    /* 0051ab9f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0051aba1: cmp edx, dword ptr [edi + 0x28] */ {  u32 a = r_edx; u32 b = R32((u32)(r_edi+0x28u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051aba4: jne 0x51ac4a */ if (!fZ) goto L_0051ac4a;
L_0051abaa:; BB(0x0051abaa);
    /* 0051abaa: mov eax, dword ptr [edi + 0x1c] */ r_eax = R32((u32)(r_edi+0x1cu));
    /* 0051abad: mov esi, dword ptr [edi + 0x20] */ r_esi = R32((u32)(r_edi+0x20u));
    /* 0051abb0: mov edx, dword ptr [edi + 0x30] */ r_edx = R32((u32)(r_edi+0x30u));
    /* 0051abb3: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0051abb6: mov eax, dword ptr [edi + 0x24] */ r_eax = R32((u32)(r_edi+0x24u));
    /* 0051abb9: mov dword ptr [edi + 0x2c], 1 */ W32((u32)(r_edi+0x2cu), 0x1u);
    /* 0051abc0: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 0051abc4: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0051abc8: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0051abcb: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x51abd0u); f_0082ebac();
    /* 0051abd0: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 0051abd3: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 0051abd7: mov edx, dword ptr [edi + 0x34] */ r_edx = R32((u32)(r_edi+0x34u));
    /* 0051abda: mov dword ptr [edi + 0x50], eax */ W32((u32)(r_edi+0x50u), r_eax);
    /* 0051abdd: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0051abe1: mov dword ptr [edi + 0x54], esi */ W32((u32)(r_edi+0x54u), r_esi);
    /* 0051abe4: mov dword ptr [edi + 0x58], eax */ W32((u32)(r_edi+0x58u), r_eax);
    /* 0051abe7: lea esi, [edi + 0x50] */ r_esi = (u32)(r_edi+0x50u);
    /* 0051abea: mov ecx, esi */ r_ecx = r_esi;
    /* 0051abec: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x51abf1u); f_0082f9c4();
    /* 0051abf1: fld dword ptr [0x920da0] */ FPUSH(R_F32((u32)(0x920da0u)));
    /* 0051abf7: fadd dword ptr [edi + 0x54] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x54u));
    /* 0051abfa: mov eax, dword ptr [edi + 0x50] */ r_eax = R32((u32)(r_edi+0x50u));
    /* 0051abfd: mov edx, dword ptr [edi + 0x58] */ r_edx = R32((u32)(r_edi+0x58u));
    /* 0051ac00: fst dword ptr [edi + 0x54] */ W_F32((u32)(r_edi+0x54u), ST(0));
    /* 0051ac03: fstp dword ptr [edi + 0x20] */ W_F32((u32)(r_edi+0x20u), ST(0)); FPOP();
    /* 0051ac06: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0051ac07: mov dword ptr [edi + 0x1c], eax */ W32((u32)(r_edi+0x1cu), r_eax);
    /* 0051ac0a: mov dword ptr [edi + 0x24], edx */ W32((u32)(r_edi+0x24u), r_edx);
    /* 0051ac0d: call 0x7828e4 */ r_esp -= 4; W32(r_esp, 0x51ac12u); f_007828e4();
    /* 0051ac12: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0051ac13: fcom dword ptr [0x920d9c] */ fx_compare(ST(0), R_F32((u32)(0x920d9cu))); 
    /* 0051ac19: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0051ac1b: fst dword ptr [edi + 0x5c] */ W_F32((u32)(r_edi+0x5cu), ST(0));
    /* 0051ac1e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0051ac1f: jbe 0x51ac35 */ if ((fC||fZ)) goto L_0051ac35;
L_0051ac21:; BB(0x0051ac21);
    /* 0051ac21: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0051ac23: fdivr dword ptr [0x920d98] */ ST(0) = R_F32((u32)(0x920d98u)) / ST(0);
    /* 0051ac29: fstp dword ptr [edi + 0x60] */ W_F32((u32)(r_edi+0x60u), ST(0)); FPOP();
    /* 0051ac2c: mov dword ptr [edi + 0x64], 0x41f00000 */ W32((u32)(r_edi+0x64u), 0x41f00000u);
    /* 0051ac33: jmp 0x51ac4a */ goto L_0051ac4a;
L_0051ac35:; BB(0x0051ac35);
    /* 0051ac35: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0051ac37: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 0051ac3b: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0051ac40: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 0051ac44: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0051ac47: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0051ac48: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0051ac49: ret  */ FN_RET(0x0051aa20); r_esp += 4; return;
L_0051ac4a:; BB(0x0051ac4a);
    /* 0051ac4a: push 0xe1 */ { u32 v = 0xe1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051ac4f: mov ecx, dword ptr [edi + 0x14] */ r_ecx = R32((u32)(r_edi+0x14u));
    /* 0051ac52: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x51ac57u); f_007879b8();
    /* 0051ac57: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0051ac59: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051ac5a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051ac5b: push dword ptr [edi + 0x30] */ { u32 v = R32((u32)(r_edi+0x30u)); r_esp -= 4; W32(r_esp, v); }
    /* 0051ac5e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0051ac5f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051ac60: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x51ac65u); f_008144b0();
    /* 0051ac65: push 0xfffffc00 */ { u32 v = 0xfffffc00u; r_esp -= 4; W32(r_esp, v); }
    /* 0051ac6a: call 0x814680 */ r_esp -= 4; W32(r_esp, 0x51ac6fu); f_00814680();
    /* 0051ac6f: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0051ac72:; BB(0x0051ac72);
    /* 0051ac72: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0051ac75: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0051ac76: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0051ac77: ret  */ FN_RET(0x0051aa20); r_esp += 4; return;
}

void f_0051ac78(void) /* sub_51AC78 */
{
    FN_ENTER(0x0051ac78);
    /* 0051ac78: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0051ac79: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0051ac7b: mov eax, dword ptr [0xa72dcc] */ r_eax = R32((u32)(0xa72dccu));
    /* 0051ac80: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 0051ac86: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 0051ac89: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x51ac8eu); f_00829cc8();
    /* 0051ac8e: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x51ac93u); f_0082d7b0();
    /* 0051ac93: mov eax, dword ptr [ebp + 0x2c] */ r_eax = R32((u32)(r_ebp+0x2cu));
    /* 0051ac96: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051ac98: jne 0x51aca4 */ if (!fZ) goto L_0051aca4;
L_0051ac9a:; BB(0x0051ac9a);
    /* 0051ac9a: mov ecx, dword ptr [ebp + 0x30] */ r_ecx = R32((u32)(r_ebp+0x30u));
    /* 0051ac9d: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x51aca2u); f_0082d838();
    /* 0051aca2: jmp 0x51acac */ goto L_0051acac;
L_0051aca4:; BB(0x0051aca4);
    /* 0051aca4: mov ecx, dword ptr [ebp + 0x34] */ r_ecx = R32((u32)(r_ebp+0x34u));
    /* 0051aca7: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x51acacu); f_0082d838();
L_0051acac:; BB(0x0051acac);
    /* 0051acac: lea ecx, [ebp + 0x1c] */ r_ecx = (u32)(r_ebp+0x1cu);
    /* 0051acaf: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x51acb4u); f_0082d838();
    /* 0051acb4: mov edx, dword ptr [ebp + 0x40] */ r_edx = R32((u32)(r_ebp+0x40u));
    /* 0051acb7: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0051acb9: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x51acbeu); f_0082d8bc();
    /* 0051acbe: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x51acc3u); f_0082fa9c();
    /* 0051acc3: mov eax, dword ptr [0xa72dcc] */ r_eax = R32((u32)(0xa72dccu));
    /* 0051acc8: push dword ptr [ebp + 0x4c] */ { u32 v = R32((u32)(r_ebp+0x4cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0051accb: push dword ptr [ebp + 0x48] */ { u32 v = R32((u32)(r_ebp+0x48u)); r_esp -= 4; W32(r_esp, v); }
    /* 0051acce: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 0051acd4: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0051acd7: call 0x83046c */ r_esp -= 4; W32(r_esp, 0x51acdcu); f_0083046c();
    /* 0051acdc: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051acdf: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x51ace4u); f_0082faac();
    /* 0051ace4: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x51ace9u); f_0082da80();
    /* 0051ace9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051acea: ret  */ FN_RET(0x0051ac78); r_esp += 4; return;
}

void f_0051ad20(void) /* sub_51AD20 */
{
    FN_ENTER(0x0051ad20);
    /* 0051ad20: mov dword ptr [0xa72d9c], 0 */ W32((u32)(0xa72d9cu), 0x0u);
    /* 0051ad2a: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0051ad2f: mov dword ptr [0xa72da0], 0 */ W32((u32)(0xa72da0u), 0x0u);
    /* 0051ad39: mov dword ptr [0xa72db4], eax */ W32((u32)(0xa72db4u), r_eax);
    /* 0051ad3e: mov dword ptr [0xa72db8], eax */ W32((u32)(0xa72db8u), r_eax);
    /* 0051ad43: mov dword ptr [0xa72da4], 0 */ W32((u32)(0xa72da4u), 0x0u);
    /* 0051ad4d: mov dword ptr [0xa72da8], 0 */ W32((u32)(0xa72da8u), 0x0u);
    /* 0051ad57: mov dword ptr [0xa72dac], 0x40c00000 */ W32((u32)(0xa72dacu), 0x40c00000u);
    /* 0051ad61: mov dword ptr [0xa72db0], 0x40c00000 */ W32((u32)(0xa72db0u), 0x40c00000u);
    /* 0051ad6b: mov dword ptr [0xa72dbc], 0xa72d9c */ W32((u32)(0xa72dbcu), 0xa72d9cu);
    /* 0051ad75: mov dword ptr [0xa72dc0], 0xa72db4 */ W32((u32)(0xa72dc0u), 0xa72db4u);
    /* 0051ad7f: mov dword ptr [0xa72dc4], 0 */ W32((u32)(0xa72dc4u), 0x0u);
    /* 0051ad89: mov dword ptr [0xa72dc8], 2 */ W32((u32)(0xa72dc8u), 0x2u);
    /* 0051ad93: ret  */ FN_RET(0x0051ad20); r_esp += 4; return;
}

void f_0051ad94(void) /* sub_51AD94 */
{
    FN_ENTER(0x0051ad94);
    /* 0051ad94: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0051ad97: mov dword ptr [0xa72d80], 0 */ W32((u32)(0xa72d80u), 0x0u);
    /* 0051ada1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0051ada3: mov dword ptr [0xa72d84], 0 */ W32((u32)(0xa72d84u), 0x0u);
    /* 0051adad: mov dword ptr [0xa72dec], eax */ W32((u32)(0xa72decu), r_eax);
    /* 0051adb2: mov dword ptr [0xa72de8], eax */ W32((u32)(0xa72de8u), r_eax);
    /* 0051adb7: mov dword ptr [0xa72d88], 0 */ W32((u32)(0xa72d88u), 0x0u);
    /* 0051adc1: mov dword ptr [0xa72de4], eax */ W32((u32)(0xa72de4u), r_eax);
    /* 0051adc6: mov dword ptr [0xa72de0], eax */ W32((u32)(0xa72de0u), r_eax);
    /* 0051adcb: call 0x520e6c */ r_esp -= 4; W32(r_esp, 0x51add0u); f_00520e6c();
    /* 0051add0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051add2: je 0x51aded */ if (fZ) goto L_0051aded;
L_0051add4:; BB(0x0051add4);
    /* 0051add4: push 0x921024 */ { u32 v = 0x921024u; r_esp -= 4; W32(r_esp, v); }
    /* 0051add9: push 0x9bb74c */ { u32 v = 0x9bb74cu; r_esp -= 4; W32(r_esp, v); }
    /* 0051adde: call 0x51f674 */ r_esp -= 4; W32(r_esp, 0x51ade3u); f_0051f674();
    /* 0051ade3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051ade6: mov dword ptr [0xa72dcc], eax */ W32((u32)(0xa72dccu), r_eax);
    /* 0051adeb: jmp 0x51adfd */ goto L_0051adfd;
L_0051aded:; BB(0x0051aded);
    /* 0051aded: push 0x9bb74c */ { u32 v = 0x9bb74cu; r_esp -= 4; W32(r_esp, v); }
    /* 0051adf2: call 0x51f6b0 */ r_esp -= 4; W32(r_esp, 0x51adf7u); f_0051f6b0();
    /* 0051adf7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0051adf8: mov dword ptr [0xa72dcc], eax */ W32((u32)(0xa72dccu), r_eax);
L_0051adfd:; BB(0x0051adfd);
    /* 0051adfd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051adff: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x51ae04u); f_0077a684();
    /* 0051ae04: mov dword ptr [0xa72ddc], eax */ W32((u32)(0xa72ddcu), r_eax);
    /* 0051ae09: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051ae0b: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x51ae10u); f_0077a698();
    /* 0051ae10: mov dword ptr [0xa72dd8], eax */ W32((u32)(0xa72dd8u), r_eax);
    /* 0051ae15: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051ae17: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x51ae1cu); f_0077a6b4();
    /* 0051ae1c: mov dword ptr [0xa72dd4], eax */ W32((u32)(0xa72dd4u), r_eax);
    /* 0051ae21: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051ae23: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x51ae28u); f_0077a6cc();
    /* 0051ae28: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051ae2b: mov dword ptr [0xa72dd0], eax */ W32((u32)(0xa72dd0u), r_eax);
    /* 0051ae30: call 0x518e20 */ r_esp -= 4; W32(r_esp, 0x51ae35u); f_00518e20();
    /* 0051ae35: call 0x51ad20 */ r_esp -= 4; W32(r_esp, 0x51ae3au); f_0051ad20();
    /* 0051ae3a: mov eax, dword ptr [0x920d28] */ r_eax = R32((u32)(0x920d28u));
    /* 0051ae3f: movzx edx, word ptr [0x920d2c] */ r_edx = (u32)R16((u32)(0x920d2cu));
    /* 0051ae46: movzx ecx, word ptr [0x920d2e] */ r_ecx = (u32)R16((u32)(0x920d2eu));
    /* 0051ae4d: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0051ae51: movzx eax, word ptr [0x920d30] */ r_eax = (u32)R16((u32)(0x920d30u));
    /* 0051ae58: mov word ptr [esp + 8], dx */ W16((u32)(r_esp+0x8u), (u16)r_edx);
    /* 0051ae5d: mov edx, dword ptr [0xa72dcc] */ r_edx = R32((u32)(0xa72dccu));
    /* 0051ae63: mov word ptr [esp + 0xa], cx */ W16((u32)(r_esp+0xau), (u16)r_ecx);
    /* 0051ae68: mov word ptr [esp + 0xc], ax */ W16((u32)(r_esp+0xcu), (u16)r_eax);
    /* 0051ae6d: mov eax, dword ptr [edx + 0x430] */ r_eax = R32((u32)(r_edx+0x430u));
    /* 0051ae73: mov edx, dword ptr [edx + 0x42c] */ r_edx = R32((u32)(r_edx+0x42cu));
    /* 0051ae79: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0051ae7c: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0051ae7f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051ae80: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051ae82: push dword ptr [0x9bb78c] */ { u32 v = R32((u32)(0x9bb78cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0051ae88: push dword ptr [edx + 0xc] */ { u32 v = R32((u32)(r_edx+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0051ae8b: push dword ptr [edx + 0x18] */ { u32 v = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 0051ae8e: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0051ae90: call 0x608470 */ r_esp -= 4; W32(r_esp, 0x51ae95u); f_00608470();
    /* 0051ae95: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0051ae98: ret  */ FN_RET(0x0051ad94); r_esp += 4; return;
}

void f_0051ae9c(void) /* sub_51AE9C */
{
    FN_ENTER(0x0051ae9c);
    /* 0051ae9c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0051ae9d: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0051ae9f: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0051aea3: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051aea6: je 0x51b036 */ if (fZ) goto L_0051b036;
L_0051aeac:; BB(0x0051aeac);
    /* 0051aeac: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051aeaf: je 0x51af97 */ if (fZ) goto L_0051af97;
L_0051aeb5:; BB(0x0051aeb5);
    /* 0051aeb5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0051aeb7: jne 0x51afa9 */ if (!fZ) goto L_0051afa9;
L_0051aebd:; BB(0x0051aebd);
    /* 0051aebd: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051aebf: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x51aec4u); f_007aa094();
    /* 0051aec4: mov ecx, dword ptr [ebp + 0x4d0] */ r_ecx = R32((u32)(r_ebp+0x4d0u));
    /* 0051aeca: mov eax, dword ptr [ebp + 0x4d8] */ r_eax = R32((u32)(r_ebp+0x4d8u));
    /* 0051aed0: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0051aed3: mov dword ptr [ebp + 0x4d0], ecx */ W32((u32)(r_ebp+0x4d0u), r_ecx);
    /* 0051aed9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051aedb: je 0x51af78 */ if (fZ) goto L_0051af78;
L_0051aee1:; BB(0x0051aee1);
    /* 0051aee1: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051aee4: jne 0x51af08 */ if (!fZ) goto L_0051af08;
L_0051aee6:; BB(0x0051aee6);
    /* 0051aee6: push 0x41700000 */ { u32 v = 0x41700000u; r_esp -= 4; W32(r_esp, v); }
    /* 0051aeeb: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051aeed: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x51aef2u); f_007aaa30();
    /* 0051aef2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0051aef4: je 0x51afa9 */ if (fZ) goto L_0051afa9;
L_0051aefa:; BB(0x0051aefa);
    /* 0051aefa: mov dword ptr [ebp + 0x4d8], 2 */ W32((u32)(r_ebp+0x4d8u), 0x2u);
    /* 0051af04: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051af05: ret 4 */ FN_RET(0x0051ae9c); r_esp += 8; return;
L_0051af08:; BB(0x0051af08);
    /* 0051af08: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0051af0b: jne 0x51afa9 */ if (!fZ) goto L_0051afa9;
L_0051af11:; BB(0x0051af11);
    /* 0051af11: mov eax, dword ptr [ebp + 0xb0] */ r_eax = R32((u32)(r_ebp+0xb0u));
    /* 0051af17: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0051af19: je 0x51af2a */ if (fZ) goto L_0051af2a;
L_0051af1b:; BB(0x0051af1b);
    /* 0051af1b: mov ecx, dword ptr [ebp + 0x4d0] */ r_ecx = R32((u32)(r_ebp+0x4d0u));
    /* 0051af21: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0051af23: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
L_0051af2a:; BB(0x0051af2a);
    /* 0051af2a: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 0051af2f: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0051af31: mov eax, ecx */ r_eax = r_ecx;
    /* 0051af33: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0051af36: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0051af39: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0051af3b: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 0051af3e: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0051af40: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0051af42: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0051af44: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0051af46: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0051af48: jne 0x51afa9 */ if (!fZ) goto L_0051afa9;
L_0051af4a:; BB(0x0051af4a);
    /* 0051af4a: mov eax, dword ptr [ebp + 0x4d4] */ r_eax = R32((u32)(r_ebp+0x4d4u));
    /* 0051af50: cmp eax, dword ptr [ebp + 0x398] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x398u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0051af56: jl 0x51af66 */ if ((fS!=fO)) goto L_0051af66;
L_0051af58:; BB(0x0051af58);
    /* 0051af58: mov dword ptr [ebp + 0x4d8], 3 */ W32((u32)(r_ebp+0x4d8u), 0x3u);
    /* 0051af62: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051af63: ret 4 */ FN_RET(0x0051ae9c); r_esp += 8; return;
L_0051af66:; BB(0x0051af66);
    /* 0051af66: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051af68: call 0x519948 */ r_esp -= 4; W32(r_esp, 0x51af6du); f_00519948();
    /* 0051af6d: add dword ptr [ebp + 0x4d4], 1 */ { u32 ad = (u32)(r_ebp+0x4d4u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0051af74: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051af75: ret 4 */ FN_RET(0x0051ae9c); r_esp += 8; return;
L_0051af78:; BB(0x0051af78);
    /* 0051af78: cmp ecx, 0x3c */ {  u32 a = r_ecx; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0051af7b: jle 0x51afa9 */ if ((fZ||fS!=fO)) goto L_0051afa9;
L_0051af7d:; BB(0x0051af7d);
    /* 0051af7d: mov dword ptr [ebp + 0x4d8], 2 */ W32((u32)(r_ebp+0x4d8u), 0x2u);
    /* 0051af87: mov eax, 1 */ r_eax = 0x1u;
    /* 0051af8c: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 0051af93: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051af94: ret 4 */ FN_RET(0x0051ae9c); r_esp += 8; return;
L_0051af97:; BB(0x0051af97);
    /* 0051af97: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051af99: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x51af9eu); f_007aa094();
    /* 0051af9e: mov eax, dword ptr [ebp + 0x4d8] */ r_eax = R32((u32)(r_ebp+0x4d8u));
    /* 0051afa4: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0051afa7: je 0x51afad */ if (fZ) goto L_0051afad;
L_0051afa9:; BB(0x0051afa9);
    /* 0051afa9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051afaa: ret 4 */ FN_RET(0x0051ae9c); r_esp += 8; return;
L_0051afad:; BB(0x0051afad);
    /* 0051afad: mov eax, dword ptr [ebp + 0x394] */ r_eax = R32((u32)(r_ebp+0x394u));
    /* 0051afb3: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051afb6: je 0x51b02a */ if (fZ) goto L_0051b02a;
L_0051afb8:; BB(0x0051afb8);
    /* 0051afb8: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051afbb: jne 0x51afc9 */ if (!fZ) goto L_0051afc9;
L_0051afbd:; BB(0x0051afbd);
    /* 0051afbd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051afbe: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051afc0: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x51afc5u); f_0051f62c();
    /* 0051afc5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051afc6: ret 4 */ FN_RET(0x0051ae9c); r_esp += 8; return;
L_0051afc9:; BB(0x0051afc9);
    /* 0051afc9: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0051afcc: jne 0x51afa9 */ if (!fZ) goto L_0051afa9;
L_0051afce:; BB(0x0051afce);
    /* 0051afce: mov eax, 7 */ r_eax = 0x7u;
    /* 0051afd3: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 0051afda: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051afdc: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x51afe1u); f_007aa094();
    /* 0051afe1: mov dword ptr [ebp + 0xc0], 0x40000000 */ W32((u32)(r_ebp+0xc0u), 0x40000000u);
    /* 0051afeb: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051afed: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x51aff2u); f_007aa094();
    /* 0051aff2: fld dword ptr [0x920d68] */ FPUSH(R_F32((u32)(0x920d68u)));
    /* 0051aff8: fadd dword ptr [ebp + 0xc4] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xc4u));
    /* 0051affe: push dword ptr [ebp + 0x394] */ { u32 v = R32((u32)(r_ebp+0x394u)); r_esp -= 4; W32(r_esp, v); }
    /* 0051b004: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 0051b007: fstp dword ptr [ebp + 0xc0] */ W_F32((u32)(r_ebp+0xc0u), ST(0)); FPOP();
    /* 0051b00d: mov dword ptr [ebp + 0x3b0], 1 */ W32((u32)(r_ebp+0x3b0u), 0x1u);
    /* 0051b017: or eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0051b01c: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 0051b01f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051b021: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x51b026u); f_0051f62c();
    /* 0051b026: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051b027: ret 4 */ FN_RET(0x0051ae9c); r_esp += 8; return;
L_0051b02a:; BB(0x0051b02a);
    /* 0051b02a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051b02b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051b02d: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x51b032u); f_0051f62c();
    /* 0051b032: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051b033: ret 4 */ FN_RET(0x0051ae9c); r_esp += 8; return;
L_0051b036:; BB(0x0051b036);
    /* 0051b036: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 0051b039: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0051b03b: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 0051b042: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051b044: call dword ptr [edx + 0x184] */ { u32 t = R32((u32)(r_edx+0x184u)); r_esp -= 4; W32(r_esp, 0x51b04au); call_ind(t); }
    /* 0051b04a: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b04c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051b04e: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x51b053u); f_0051f664();
    /* 0051b053: mov dword ptr [ebp + 0x4b8], 0xc0a00000 */ W32((u32)(r_ebp+0x4b8u), 0xc0a00000u);
    /* 0051b05d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0051b05f: mov dword ptr [ebp + 0x4d0], eax */ W32((u32)(r_ebp+0x4d0u), r_eax);
    /* 0051b065: mov dword ptr [ebp + 0x4d4], eax */ W32((u32)(r_ebp+0x4d4u), r_eax);
    /* 0051b06b: mov dword ptr [ebp + 0x4d8], eax */ W32((u32)(r_ebp+0x4d8u), r_eax);
    /* 0051b071: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051b072: ret 4 */ FN_RET(0x0051ae9c); r_esp += 8; return;
}

