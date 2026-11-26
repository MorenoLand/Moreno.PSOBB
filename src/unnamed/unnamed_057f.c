#include "protos.h"

void f_0057f18c(void) /* sub_57F18C */
{
    FN_ENTER(0x0057f18c);
    /* 0057f18c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0057f18d: mov esi, ecx */ r_esi = r_ecx;
    /* 0057f18f: mov eax, dword ptr [esi + 0x390] */ r_eax = R32((u32)(r_esi+0x390u));
    /* 0057f195: test eax, 0x40000 */ {  u32 a = r_eax; u32 b = 0x40000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0057f19a: jne 0x57f25f */ if (!fZ) goto L_0057f25f;
L_0057f1a0:; BB(0x0057f1a0);
    /* 0057f1a0: mov eax, dword ptr [esi + 0x384] */ r_eax = R32((u32)(r_esi+0x384u));
    /* 0057f1a6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057f1a8: je 0x57f280 */ if (fZ) goto L_0057f280;
L_0057f1ae:; BB(0x0057f1ae);
    /* 0057f1ae: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057f1b1: je 0x57f1ed */ if (fZ) goto L_0057f1ed;
L_0057f1b3:; BB(0x0057f1b3);
    /* 0057f1b3: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0057f1b6: jne 0x57f25f */ if (!fZ) goto L_0057f25f;
L_0057f1bc:; BB(0x0057f1bc);
    /* 0057f1bc: mov ecx, esi */ r_ecx = r_esi;
    /* 0057f1be: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x57f1c3u); f_007aa094();
    /* 0057f1c3: mov ecx, esi */ r_ecx = r_esi;
    /* 0057f1c5: call 0x7b6894 */ r_esp -= 4; W32(r_esp, 0x57f1cau); f_007b6894();
    /* 0057f1ca: mov eax, dword ptr [esi + 0x38c] */ r_eax = R32((u32)(r_esi+0x38cu));
    /* 0057f1d0: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0057f1d3: mov dword ptr [esi + 0x38c], eax */ W32((u32)(r_esi+0x38cu), r_eax);
    /* 0057f1d9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0057f1db: jg 0x57f25f */ if ((!fZ&&fS==fO)) goto L_0057f25f;
L_0057f1e1:; BB(0x0057f1e1);
    /* 0057f1e1: mov dword ptr [esi + 0x384], 0 */ W32((u32)(r_esi+0x384u), 0x0u);
    /* 0057f1eb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0057f1ec: ret  */ FN_RET(0x0057f18c); r_esp += 4; return;
L_0057f1ed:; BB(0x0057f1ed);
    /* 0057f1ed: mov ecx, esi */ r_ecx = r_esi;
    /* 0057f1ef: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x57f1f4u); f_007aa094();
    /* 0057f1f4: push dword ptr [esi + 0x360] */ { u32 v = R32((u32)(r_esi+0x360u)); r_esp -= 4; W32(r_esp, v); }
    /* 0057f1fa: lea eax, [esi + 0x50] */ r_eax = (u32)(r_esi+0x50u);
    /* 0057f1fd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057f1fe: mov ecx, esi */ r_ecx = r_esi;
    /* 0057f200: call 0x57f2b0 */ r_esp -= 4; W32(r_esp, 0x57f205u); f_0057f2b0();
    /* 0057f205: push 0x40800000 */ { u32 v = 0x40800000u; r_esp -= 4; W32(r_esp, v); }
    /* 0057f20a: mov ecx, esi */ r_ecx = r_esi;
    /* 0057f20c: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x57f211u); f_007aaa30();
    /* 0057f211: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057f213: jne 0x57f225 */ if (!fZ) goto L_0057f225;
L_0057f215:; BB(0x0057f215);
    /* 0057f215: push 0x41a00000 */ { u32 v = 0x41a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0057f21a: mov ecx, esi */ r_ecx = r_esi;
    /* 0057f21c: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x57f221u); f_007aaa30();
    /* 0057f221: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057f223: je 0x57f23a */ if (fZ) goto L_0057f23a;
L_0057f225:; BB(0x0057f225);
    /* 0057f225: lea edx, [esi + 0x38] */ r_edx = (u32)(r_esi+0x38u);
    /* 0057f228: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0057f22a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057f22b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057f22c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0057f22d: push 0x110 */ { u32 v = 0x110u; r_esp -= 4; W32(r_esp, v); }
    /* 0057f232: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x57f237u); f_00814298();
    /* 0057f237: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0057f23a:; BB(0x0057f23a);
    /* 0057f23a: mov eax, dword ptr [esi + 0x38c] */ r_eax = R32((u32)(r_esi+0x38cu));
    /* 0057f240: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0057f243: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0057f245: jle 0x57f261 */ if ((fZ||fS!=fO)) goto L_0057f261;
L_0057f247:; BB(0x0057f247);
    /* 0057f247: mov dword ptr [esi + 0x38c], eax */ W32((u32)(r_esi+0x38cu), r_eax);
L_0057f24d:; BB(0x0057f24d);
    /* 0057f24d: mov ecx, esi */ r_ecx = r_esi;
    /* 0057f24f: call 0x7b6894 */ r_esp -= 4; W32(r_esp, 0x57f254u); f_007b6894();
    /* 0057f254: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057f256: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057f258: mov ecx, esi */ r_ecx = r_esi;
    /* 0057f25a: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x57f25fu); f_00772b44();
L_0057f25f:; BB(0x0057f25f);
    /* 0057f25f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0057f260: ret  */ FN_RET(0x0057f18c); r_esp += 4; return;
L_0057f261:; BB(0x0057f261);
    /* 0057f261: mov dword ptr [esi + 0x384], 2 */ W32((u32)(r_esi+0x384u), 0x2u);
    /* 0057f26b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0057f26d: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
    /* 0057f274: mov dword ptr [esi + 0x38c], 0x5a */ W32((u32)(r_esi+0x38cu), 0x5au);
    /* 0057f27e: jmp 0x57f24d */ goto L_0057f24d;
L_0057f280:; BB(0x0057f280);
    /* 0057f280: mov edx, dword ptr [esi + 0x30] */ r_edx = R32((u32)(r_esi+0x30u));
    /* 0057f283: mov dword ptr [esi + 0x38c], 0x96 */ W32((u32)(r_esi+0x38cu), 0x96u);
    /* 0057f28d: mov eax, 1 */ r_eax = 0x1u;
    /* 0057f292: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
    /* 0057f299: mov dword ptr [esi + 0x384], eax */ W32((u32)(r_esi+0x384u), r_eax);
    /* 0057f29f: and edx, 0xfbfbffff */ {  u32 a = r_edx; u32 b = 0xfbfbffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0057f2a5: mov dword ptr [esi + 0x30], edx */ W32((u32)(r_esi+0x30u), r_edx);
    /* 0057f2a8: jmp 0x57f1ed */ goto L_0057f1ed;
}

void f_0057f2b0(void) /* sub_57F2B0 */
{
    FN_ENTER(0x0057f2b0);
    /* 0057f2b0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0057f2b1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0057f2b2: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0057f2b5: mov edi, ecx */ r_edi = r_ecx;
    /* 0057f2b7: lea edx, [edi + 0x38] */ r_edx = (u32)(r_edi+0x38u);
    /* 0057f2ba: lea eax, [edi + 0x398] */ r_eax = (u32)(r_edi+0x398u);
    /* 0057f2c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057f2c1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0057f2c2: call 0x78ea50 */ r_esp -= 4; W32(r_esp, 0x57f2c7u); f_0078ea50();
    /* 0057f2c7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057f2ca: fcomp dword ptr [0x92790c] */ fx_compare(ST(0), R_F32((u32)(0x92790cu))); FPOP();
    /* 0057f2d0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0057f2d2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0057f2d3: jb 0x57f2e0 */ if (fC) goto L_0057f2e0;
L_0057f2d5:; BB(0x0057f2d5);
    /* 0057f2d5: fld dword ptr [edi + 0x3a0] */ FPUSH(R_F32((u32)(r_edi+0x3a0u)));
    /* 0057f2db: jmp 0x57f36a */ goto L_0057f36a;
L_0057f2e0:; BB(0x0057f2e0);
    /* 0057f2e0: mov ecx, edi */ r_ecx = r_edi;
    /* 0057f2e2: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x57f2e7u); f_007751b0();
    /* 0057f2e7: fld dword ptr [0x927908] */ FPUSH(R_F32((u32)(0x927908u)));
    /* 0057f2ed: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 0057f2ef: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0057f2f1: fmul dword ptr [0x927904] */ ST(0) = ST(0) * R_F32((u32)(0x927904u));
    /* 0057f2f7: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 0057f2f9: mov ecx, edi */ r_ecx = r_edi;
    /* 0057f2fb: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0057f2fe: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0057f302: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0057f307: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0057f30b: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0057f30f: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 0057f313: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0057f316: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
    /* 0057f31a: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x57f31fu); f_007751b0();
    /* 0057f31f: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 0057f323: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 0057f327: fadd dword ptr [0x927900] */ ST(0) = ST(0) + R_F32((u32)(0x927900u));
    /* 0057f32d: fmul dword ptr [esp + 0x2c] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x2cu));
    /* 0057f331: fmul dword ptr [0x9278fc] */ ST(0) = ST(0) * R_F32((u32)(0x9278fcu));
    /* 0057f337: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0057f339: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 0057f33d: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x57f342u); f_0082ddd8();
    /* 0057f342: fmul dword ptr [esp + 0x18] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x18u));
    /* 0057f346: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 0057f34a: fadd dword ptr [eax] */ ST(0) = ST(0) + R_F32((u32)(r_eax));
    /* 0057f34c: fstp dword ptr [edi + 0x398] */ W_F32((u32)(r_edi+0x398u), ST(0)); FPOP();
    /* 0057f352: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0057f354: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x57f359u); f_0082dcbc();
    /* 0057f359: fmul dword ptr [esp + 0x18] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x18u));
    /* 0057f35d: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 0057f361: fadd dword ptr [eax + 8] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x8u));
    /* 0057f364: fst dword ptr [edi + 0x3a0] */ W_F32((u32)(r_edi+0x3a0u), ST(0));
L_0057f36a:; BB(0x0057f36a);
    /* 0057f36a: mov eax, dword ptr [edi + 0x398] */ r_eax = R32((u32)(r_edi+0x398u));
    /* 0057f370: mov edx, dword ptr [edi + 0x39c] */ r_edx = R32((u32)(r_edi+0x39cu));
    /* 0057f376: mov ebx, dword ptr [edi + 0x358] */ r_ebx = R32((u32)(r_edi+0x358u));
    /* 0057f37c: fstp dword ptr [edi + 0x2ac] */ W_F32((u32)(r_edi+0x2acu), ST(0)); FPOP();
    /* 0057f382: mov dword ptr [edi + 0x2a4], eax */ W32((u32)(r_edi+0x2a4u), r_eax);
    /* 0057f388: mov dword ptr [edi + 0x2a8], edx */ W32((u32)(r_edi+0x2a8u), r_edx);
    /* 0057f38e: push dword ptr [ebx + 8] */ { u32 v = R32((u32)(r_ebx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0057f391: mov ecx, edi */ r_ecx = r_edi;
    /* 0057f393: call 0x772358 */ r_esp -= 4; W32(r_esp, 0x57f398u); f_00772358();
    /* 0057f398: push dword ptr [edi + 0x60] */ { u32 v = R32((u32)(r_edi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 0057f39b: push dword ptr [edi + 0x3e0] */ { u32 v = R32((u32)(r_edi+0x3e0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0057f3a1: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0057f3a3: mov ecx, edi */ r_ecx = r_edi;
    /* 0057f3a5: call dword ptr [eax + 0x48] */ { u32 t = R32((u32)(r_eax+0x48u)); r_esp -= 4; W32(r_esp, 0x57f3a8u); call_ind(t); }
    /* 0057f3a8: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0057f3aa: mov ecx, edi */ r_ecx = r_edi;
    /* 0057f3ac: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x57f3afu); call_ind(t); }
    /* 0057f3af: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0057f3b2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0057f3b3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0057f3b4: ret 8 */ FN_RET(0x0057f2b0); r_esp += 12; return;
}

void f_0057f3b8(void) /* sub_57F3B8 */
{
    FN_ENTER(0x0057f3b8);
    /* 0057f3b8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0057f3b9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0057f3bb: movsx eax, word ptr [ebx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32eu));
    /* 0057f3c2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057f3c4: je 0x57f41d */ if (fZ) goto L_0057f41d;
L_0057f3c6:; BB(0x0057f3c6);
    /* 0057f3c6: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0057f3c9: jne 0x57f48a */ if (!fZ) goto L_0057f48a;
L_0057f3cf:; BB(0x0057f3cf);
    /* 0057f3cf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057f3d1: push 0x42480000 */ { u32 v = 0x42480000u; r_esp -= 4; W32(r_esp, v); }
    /* 0057f3d6: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0057f3d8: call 0x7714cc */ r_esp -= 4; W32(r_esp, 0x57f3ddu); f_007714cc();
    /* 0057f3dd: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 0057f3e0: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057f3e5: je 0x57f48c */ if (fZ) goto L_0057f48c;
L_0057f3eb:; BB(0x0057f3eb);
    /* 0057f3eb: mov eax, dword ptr [ebx + 0x390] */ r_eax = R32((u32)(r_ebx+0x390u));
    /* 0057f3f1: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0057f3f3: jne 0x57f411 */ if (!fZ) goto L_0057f411;
L_0057f3f5:; BB(0x0057f3f5);
    /* 0057f3f5: movsx eax, word ptr [ebx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32eu));
    /* 0057f3fc: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0057f3ff: je 0x57f411 */ if (fZ) goto L_0057f411;
L_0057f401:; BB(0x0057f401);
    /* 0057f401: mov dword ptr [ebx + 0x37c], 0xb */ W32((u32)(r_ebx+0x37cu), 0xbu);
    /* 0057f40b: mov dword ptr [ebx + 0x388], eax */ W32((u32)(r_ebx+0x388u), r_eax);
L_0057f411:; BB(0x0057f411);
    /* 0057f411: mov dword ptr [ebx + 0x380], 1 */ W32((u32)(r_ebx+0x380u), 0x1u);
    /* 0057f41b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0057f41c: ret  */ FN_RET(0x0057f3b8); r_esp += 4; return;
L_0057f41d:; BB(0x0057f41d);
    /* 0057f41d: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 0057f41f: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0057f421: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0057f423: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x57f426u); call_ind(t); }
    /* 0057f426: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0057f428: je 0x57f48a */ if (fZ) goto L_0057f48a;
L_0057f42a:; BB(0x0057f42a);
    /* 0057f42a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057f42c: mov eax, dword ptr [ebx + 0x358] */ r_eax = R32((u32)(r_ebx+0x358u));
    /* 0057f432: push dword ptr [eax] */ { u32 v = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, v); }
    /* 0057f434: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0057f436: call 0x7714cc */ r_esp -= 4; W32(r_esp, 0x57f43bu); f_007714cc();
    /* 0057f43b: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 0057f43e: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0057f443: je 0x57f48a */ if (fZ) goto L_0057f48a;
L_0057f445:; BB(0x0057f445);
    /* 0057f445: mov eax, dword ptr [ebx + 0x358] */ r_eax = R32((u32)(r_ebx+0x358u));
    /* 0057f44b: push dword ptr [eax] */ { u32 v = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, v); }
    /* 0057f44d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0057f44f: call 0x52cd2c */ r_esp -= 4; W32(r_esp, 0x57f454u); f_0052cd2c();
    /* 0057f454: mov eax, dword ptr [ebx + 0x390] */ r_eax = R32((u32)(r_ebx+0x390u));
    /* 0057f45a: test eax, 0x40000 */ {  u32 a = r_eax; u32 b = 0x40000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057f45f: je 0x57f46a */ if (fZ) goto L_0057f46a;
L_0057f461:; BB(0x0057f461);
    /* 0057f461: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0057f463: call 0x57f4e0 */ r_esp -= 4; W32(r_esp, 0x57f468u); f_0057f4e0();
    /* 0057f468: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0057f469: ret  */ FN_RET(0x0057f3b8); r_esp += 4; return;
L_0057f46a:; BB(0x0057f46a);
    /* 0057f46a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0057f46c: jne 0x57f48a */ if (!fZ) goto L_0057f48a;
L_0057f46e:; BB(0x0057f46e);
    /* 0057f46e: movsx eax, word ptr [ebx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32eu));
    /* 0057f475: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0057f478: je 0x57f48a */ if (fZ) goto L_0057f48a;
L_0057f47a:; BB(0x0057f47a);
    /* 0057f47a: mov dword ptr [ebx + 0x37c], 1 */ W32((u32)(r_ebx+0x37cu), 0x1u);
    /* 0057f484: mov dword ptr [ebx + 0x388], eax */ W32((u32)(r_ebx+0x388u), r_eax);
L_0057f48a:; BB(0x0057f48a);
    /* 0057f48a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0057f48b: ret  */ FN_RET(0x0057f3b8); r_esp += 4; return;
L_0057f48c:; BB(0x0057f48c);
    /* 0057f48c: fld dword ptr [0x9278f8] */ FPUSH(R_F32((u32)(0x9278f8u)));
    /* 0057f492: mov eax, dword ptr [ebx + 0x358] */ r_eax = R32((u32)(r_ebx+0x358u));
    /* 0057f498: fadd dword ptr [eax] */ ST(0) = ST(0) + R_F32((u32)(r_eax));
    /* 0057f49a: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057f49d: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0057f4a0: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 0057f4a8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0057f4aa: call 0x7714cc */ r_esp -= 4; W32(r_esp, 0x57f4afu); f_007714cc();
    /* 0057f4af: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 0057f4b2: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0057f4b7: jne 0x57f48a */ if (!fZ) goto L_0057f48a;
L_0057f4b9:; BB(0x0057f4b9);
    /* 0057f4b9: mov eax, dword ptr [ebx + 0x390] */ r_eax = R32((u32)(r_ebx+0x390u));
    /* 0057f4bf: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0057f4c1: jne 0x57f48a */ if (!fZ) goto L_0057f48a;
L_0057f4c3:; BB(0x0057f4c3);
    /* 0057f4c3: movsx eax, word ptr [ebx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32eu));
    /* 0057f4ca: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0057f4cc: je 0x57f48a */ if (fZ) goto L_0057f48a;
L_0057f4ce:; BB(0x0057f4ce);
    /* 0057f4ce: mov dword ptr [ebx + 0x37c], 0 */ W32((u32)(r_ebx+0x37cu), 0x0u);
    /* 0057f4d8: mov dword ptr [ebx + 0x388], eax */ W32((u32)(r_ebx+0x388u), r_eax);
    /* 0057f4de: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0057f4df: ret  */ FN_RET(0x0057f3b8); r_esp += 4; return;
}

void f_0057f4e0(void) /* sub_57F4E0 */
{
    FN_ENTER(0x0057f4e0);
    /* 0057f4e0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0057f4e1: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0057f4e4: mov edi, ecx */ r_edi = r_ecx;
    /* 0057f4e6: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 0057f4eb: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 0057f4f3: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 0057f4fa: mov dword ptr [esp + 8], 0xc3160000 */ W32((u32)(r_esp+0x8u), 0xc3160000u);
    /* 0057f502: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x57f507u); f_0082d990();
    /* 0057f507: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 0057f50a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0057f50c: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x57f511u); f_0082d8bc();
    /* 0057f511: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0057f514: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057f515: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 0057f519: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0057f51b: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x57f520u); f_0082eab8();
    /* 0057f520: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x57f525u); f_0082da80();
    /* 0057f525: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0057f528: lea ecx, [edi + 0x38] */ r_ecx = (u32)(r_edi+0x38u);
    /* 0057f52b: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x57f530u); f_0082ebac();
    /* 0057f530: mov eax, dword ptr [edi + 0x38] */ r_eax = R32((u32)(r_edi+0x38u));
    /* 0057f533: mov edx, dword ptr [edi + 0x3c] */ r_edx = R32((u32)(r_edi+0x3cu));
    /* 0057f536: mov dword ptr [edi + 0x44], eax */ W32((u32)(r_edi+0x44u), r_eax);
    /* 0057f539: mov eax, dword ptr [edi + 0x40] */ r_eax = R32((u32)(r_edi+0x40u));
    /* 0057f53c: mov dword ptr [edi + 0x48], edx */ W32((u32)(r_edi+0x48u), r_edx);
    /* 0057f53f: mov dword ptr [edi + 0x4c], eax */ W32((u32)(r_edi+0x4cu), r_eax);
    /* 0057f542: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0057f545: or eax, 0x1000000 */ {  u32 a = r_eax; u32 b = 0x1000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0057f54a: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0057f54d: mov eax, dword ptr [edi + 0x390] */ r_eax = R32((u32)(r_edi+0x390u));
    /* 0057f553: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0057f555: jne 0x57f573 */ if (!fZ) goto L_0057f573;
L_0057f557:; BB(0x0057f557);
    /* 0057f557: movsx eax, word ptr [edi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32eu));
    /* 0057f55e: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057f561: je 0x57f573 */ if (fZ) goto L_0057f573;
L_0057f563:; BB(0x0057f563);
    /* 0057f563: mov dword ptr [edi + 0x37c], 0xb */ W32((u32)(r_edi+0x37cu), 0xbu);
    /* 0057f56d: mov dword ptr [edi + 0x388], eax */ W32((u32)(r_edi+0x388u), r_eax);
L_0057f573:; BB(0x0057f573);
    /* 0057f573: mov dword ptr [edi + 0x380], 1 */ W32((u32)(r_edi+0x380u), 0x1u);
    /* 0057f57d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0057f57e: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x57f583u); f_007b999c();
    /* 0057f583: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0057f586: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0057f587: ret  */ FN_RET(0x0057f4e0); r_esp += 4; return;
}

void f_0057f588(void) /* sub_57F588 */
{
    FN_ENTER(0x0057f588);
    /* 0057f588: mov eax, dword ptr [0xa74184] */ r_eax = R32((u32)(0xa74184u));
    /* 0057f58d: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0057f590: mov dword ptr [0xa74180], edx */ W32((u32)(0xa74180u), r_edx);
    /* 0057f596: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 0057f599: mov dword ptr [0xa7417c], edx */ W32((u32)(0xa7417cu), r_edx);
    /* 0057f59f: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 0057f5a2: mov dword ptr [0xa74178], edx */ W32((u32)(0xa74178u), r_edx);
    /* 0057f5a8: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 0057f5ab: mov dword ptr [0xa74174], edx */ W32((u32)(0xa74174u), r_edx);
    /* 0057f5b1: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 0057f5b4: mov dword ptr [0xa74170], edx */ W32((u32)(0xa74170u), r_edx);
    /* 0057f5ba: mov eax, dword ptr [eax + 0x1c] */ r_eax = R32((u32)(r_eax+0x1cu));
    /* 0057f5bd: mov dword ptr [0xa7416c], eax */ W32((u32)(0xa7416cu), r_eax);
    /* 0057f5c2: ret  */ FN_RET(0x0057f588); r_esp += 4; return;
}

void f_0057f5c4(void)
{
    FN_ENTER(0x0057f5c4);
    /* 0057f5c4: mov ecx, dword ptr [0xa74194] */ r_ecx = R32((u32)(0xa74194u));
    /* 0057f5ca: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0057f5cc: je 0x57f5e1 */ if (fZ) goto L_0057f5e1;
L_0057f5ce:; BB(0x0057f5ce);
    /* 0057f5ce: je 0x57f5d7 */ if (fZ) goto L_0057f5d7;
L_0057f5d0:; BB(0x0057f5d0);
    /* 0057f5d0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0057f5d2: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x57f5d7u); f_004066a8();
L_0057f5d7:; BB(0x0057f5d7);
    /* 0057f5d7: mov dword ptr [0xa74194], 0 */ W32((u32)(0xa74194u), 0x0u);
L_0057f5e1:; BB(0x0057f5e1);
    /* 0057f5e1: ret  */ FN_RET(0x0057f5c4); r_esp += 4; return;
}

void f_0057f5e4(void)
{
    FN_ENTER(0x0057f5e4);
    /* 0057f5e4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0057f5e5: mov ebp, esp */ r_ebp = r_esp;
    /* 0057f5e7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0057f5e9: push 0x8d7aa6 */ { u32 v = 0x8d7aa6u; r_esp -= 4; W32(r_esp, v); }
    /* 0057f5ee: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0057f5f4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057f5f5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0057f5fc: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0057f5ff: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0057f602: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0057f605: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0057f608: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0057f60b: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0057f60d: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0057f614: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x57f619u); f_005caba4();
    /* 0057f619: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0057f61a: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0057f61d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057f61f: je 0x57f6a7 */ if (fZ) goto L_0057f6a7;
L_0057f625:; BB(0x0057f625);
    /* 0057f625: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 0057f62c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0057f633: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 0057f639: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0057f63c: call 0x787a4c */ r_esp -= 4; W32(r_esp, 0x57f641u); f_00787a4c();
    /* 0057f641: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0057f644: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0057f64b: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_0057f64e:; BB(0x0057f64e);
    /* 0057f64e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0057f655: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0057f65c: push 0x484 */ { u32 v = 0x484u; r_esp -= 4; W32(r_esp, v); }
    /* 0057f661: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x57f666u); f_005caba4();
    /* 0057f666: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0057f667: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0057f66a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057f66c: je 0x57f6a3 */ if (fZ) goto L_0057f6a3;
L_0057f66e:; BB(0x0057f66e);
    /* 0057f66e: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 0057f675: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0057f67c: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0057f67f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0057f682: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0057f685: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057f686: call 0x57f6b0 */ r_esp -= 4; W32(r_esp, 0x57f68bu); f_0057f6b0();
    /* 0057f68b: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0057f68e: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0057f695:; BB(0x0057f695);
    /* 0057f695: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0057f698: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0057f69f: mov esp, ebp */ r_esp = r_ebp;
    /* 0057f6a1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057f6a2: ret  */ FN_RET(0x0057f5e4); r_esp += 4; return;
L_0057f6a3:; BB(0x0057f6a3);
    /* 0057f6a3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0057f6a5: jmp 0x57f695 */ goto L_0057f695;
L_0057f6a7:; BB(0x0057f6a7);
    /* 0057f6a7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0057f6a9: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0057f6ac: jmp 0x57f64e */ goto L_0057f64e;
}

void f_0057f6b0(void) /* sub_57F6B0 */
{
    FN_ENTER(0x0057f6b0);
    /* 0057f6b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0057f6b1: mov ebp, esp */ r_ebp = r_esp;
    /* 0057f6b3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0057f6b5: push 0x8d7af4 */ { u32 v = 0x8d7af4u; r_esp -= 4; W32(r_esp, v); }
    /* 0057f6ba: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0057f6c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057f6c1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0057f6c8: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0057f6cb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0057f6ce: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0057f6d1: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0057f6d4: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0057f6d7: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0057f6da: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0057f6dd: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
    /* 0057f6e0: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0057f6e3: call 0x52c3fc */ r_esp -= 4; W32(r_esp, 0x57f6e8u); f_0052c3fc();
    /* 0057f6e8: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0057f6ef: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0057f6f2: mov dword ptr [ecx], 0xb074e0 */ W32((u32)(r_ecx), 0xb074e0u);
    /* 0057f6f8: add ecx, 0x3f0 */ {  u32 a = r_ecx; u32 b = 0x3f0u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0057f6fe: call 0x576a48 */ r_esp -= 4; W32(r_esp, 0x57f703u); f_00576a48();
    /* 0057f703: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0057f70a: push 0x5770ec */ { u32 v = 0x5770ecu; r_esp -= 4; W32(r_esp, v); }
    /* 0057f70f: push 0x57713c */ { u32 v = 0x57713cu; r_esp -= 4; W32(r_esp, v); }
    /* 0057f714: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0057f717: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0057f719: add eax, 0x414 */ {  u32 a = r_eax; u32 b = 0x414u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0057f71e: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 0057f720: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057f721: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x57f726u); f_00858736();
    /* 0057f726: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0057f72d: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0057f730: mov eax, dword ptr [0x9bf0cc] */ r_eax = R32((u32)(0x9bf0ccu));
    /* 0057f735: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0057f738: mov ebx, dword ptr [ecx] */ r_ebx = R32((u32)(r_ecx));
    /* 0057f73a: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0057f73d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0057f73e: call dword ptr [ebx + 0x14c] */ { u32 t = R32((u32)(r_ebx+0x14cu)); r_esp -= 4; W32(r_esp, 0x57f744u); call_ind(t); }
    /* 0057f744: mov edi, dword ptr [ebp - 0x3c] */ r_edi = R32((u32)(r_ebp+0xffffffc4u));
    /* 0057f747: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0057f74a: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0057f74c: mov edx, dword ptr [edi + 0x38] */ r_edx = R32((u32)(r_edi+0x38u));
    /* 0057f74f: mov ebx, dword ptr [edi + 0x3c] */ r_ebx = R32((u32)(r_edi+0x3cu));
    /* 0057f752: mov esi, dword ptr [edi + 0x40] */ r_esi = R32((u32)(r_edi+0x40u));
    /* 0057f755: push 0x9bef60 */ { u32 v = 0x9bef60u; r_esp -= 4; W32(r_esp, v); }
    /* 0057f75a: mov dword ptr [edi + 0x2a4], edx */ W32((u32)(r_edi+0x2a4u), r_edx);
    /* 0057f760: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0057f763: mov dword ptr [edi + 0x2a8], ebx */ W32((u32)(r_edi+0x2a8u), r_ebx);
    /* 0057f769: mov dword ptr [edi + 0x2ac], esi */ W32((u32)(r_edi+0x2acu), r_esi);
    /* 0057f76f: mov eax, dword ptr [edx + 0x2a4] */ r_eax = R32((u32)(r_edx+0x2a4u));
    /* 0057f775: mov dword ptr [edx + 0x298], eax */ W32((u32)(r_edx+0x298u), r_eax);
    /* 0057f77b: mov eax, dword ptr [edx + 0x2a8] */ r_eax = R32((u32)(r_edx+0x2a8u));
    /* 0057f781: mov dword ptr [edx + 0x29c], eax */ W32((u32)(r_edx+0x29cu), r_eax);
    /* 0057f787: mov eax, dword ptr [edx + 0x2ac] */ r_eax = R32((u32)(r_edx+0x2acu));
    /* 0057f78d: mov dword ptr [edx + 0x2a0], eax */ W32((u32)(r_edx+0x2a0u), r_eax);
    /* 0057f793: mov eax, dword ptr [0xa74194] */ r_eax = R32((u32)(0xa74194u));
    /* 0057f798: mov edx, dword ptr [eax + 0x430] */ r_edx = R32((u32)(r_eax+0x430u));
    /* 0057f79e: mov dword ptr [ecx + 0xdc], edx */ W32((u32)(r_ecx+0xdcu), r_edx);
    /* 0057f7a4: mov edx, dword ptr [ecx + 0x2e8] */ r_edx = R32((u32)(r_ecx+0x2e8u));
    /* 0057f7aa: mov dword ptr [ecx + 0x370], 0 */ W32((u32)(r_ecx+0x370u), 0x0u);
    /* 0057f7b4: or edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0057f7b7: mov dword ptr [ecx + 0x2e8], edx */ W32((u32)(r_ecx+0x2e8u), r_edx);
    /* 0057f7bd: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0057f7c0: movsx edx, word ptr [edx + 0x3e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edx+0x3eu));
    /* 0057f7c4: mov dword ptr [ecx + 0x374], edx */ W32((u32)(r_ecx+0x374u), r_edx);
    /* 0057f7ca: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 0057f7d0: mov edx, dword ptr [edx + 8] */ r_edx = R32((u32)(r_edx+0x8u));
    /* 0057f7d3: mov dword ptr [ecx + 0x34], edx */ W32((u32)(r_ecx+0x34u), r_edx);
    /* 0057f7d6: mov eax, dword ptr [eax + 0x42c] */ r_eax = R32((u32)(r_eax+0x42cu));
    /* 0057f7dc: mov eax, dword ptr [eax + 0xc] */ r_eax = R32((u32)(r_eax+0xcu));
    /* 0057f7df: mov dword ptr [ecx + 0xd8], 0x9befc0 */ W32((u32)(r_ecx+0xd8u), 0x9befc0u);
    /* 0057f7e9: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 0057f7ec: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x57f7f1u); f_007b9a88();
    /* 0057f7f1: push dword ptr [0xa74188] */ { u32 v = R32((u32)(0xa74188u)); r_esp -= 4; W32(r_esp, v); }
    /* 0057f7f7: push dword ptr [0xa7418c] */ { u32 v = R32((u32)(0xa7418cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0057f7fd: push dword ptr [0xa74190] */ { u32 v = R32((u32)(0xa74190u)); r_esp -= 4; W32(r_esp, v); }
    /* 0057f803: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0057f806: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0057f809: mov ebx, dword ptr [eax + 0xa4] */ r_ebx = R32((u32)(r_eax+0xa4u));
    /* 0057f80f: mov edx, dword ptr [ebx + 0x44] */ r_edx = R32((u32)(r_ebx+0x44u));
    /* 0057f812: and edx, 0xfffffffe */ {  u32 a = r_edx; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0057f815: mov dword ptr [ebx + 0x44], edx */ W32((u32)(r_ebx+0x44u), r_edx);
    /* 0057f818: mov dword ptr [ecx + 0x358], 0x9bf0d0 */ W32((u32)(r_ecx+0x358u), 0x9bf0d0u);
    /* 0057f822: call 0x7868f8 */ r_esp -= 4; W32(r_esp, 0x57f827u); f_007868f8();
    /* 0057f827: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0057f82a: call 0x57f588 */ r_esp -= 4; W32(r_esp, 0x57f82fu); f_0057f588();
    /* 0057f82f: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0057f832: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0057f834: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057f835: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 0057f83c: call 0x7aa4c8 */ r_esp -= 4; W32(r_esp, 0x57f841u); f_007aa4c8();
    /* 0057f841: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0057f844: movzx eax, word ptr [ecx + 0xb8] */ r_eax = (u32)R16((u32)(r_ecx+0xb8u));
    /* 0057f84b: movsx ebx, word ptr [ecx + 0x2bc] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_ecx+0x2bcu));
    /* 0057f852: movzx edx, word ptr [ecx + 0x2be] */ r_edx = (u32)R16((u32)(r_ecx+0x2beu));
    /* 0057f859: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 0057f860: mov word ptr [ecx + 0x334], bx */ W16((u32)(r_ecx+0x334u), (u16)r_ebx);
    /* 0057f867: mov word ptr [ecx + 0x336], dx */ W16((u32)(r_ecx+0x336u), (u16)r_edx);
    /* 0057f86e: mov word ptr [ecx + 0x346], bx */ W16((u32)(r_ecx+0x346u), (u16)r_ebx);
    /* 0057f875: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x57f87au); f_0078730c();
    /* 0057f87a: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0057f87d: call 0x786bbc */ r_esp -= 4; W32(r_esp, 0x57f882u); f_00786bbc();
    /* 0057f882: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0057f885: mov ebx, dword ptr [ecx + 0x358] */ r_ebx = R32((u32)(r_ecx+0x358u));
    /* 0057f88b: mov esi, dword ptr [ecx + 0x38] */ r_esi = R32((u32)(r_ecx+0x38u));
    /* 0057f88e: mov edi, dword ptr [ecx + 0x3c] */ r_edi = R32((u32)(r_ecx+0x3cu));
    /* 0057f891: mov eax, dword ptr [ecx + 0x40] */ r_eax = R32((u32)(r_ecx+0x40u));
    /* 0057f894: fld dword ptr [ecx + 0x35c] */ FPUSH(R_F32((u32)(r_ecx+0x35cu)));
    /* 0057f89a: mov dword ptr [ecx + 0x68], 0x3f19999a */ W32((u32)(r_ecx+0x68u), 0x3f19999au);
    /* 0057f8a1: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0057f8a3: mov word ptr [ecx + 0x394], dx */ W16((u32)(r_ecx+0x394u), (u16)r_edx);
    /* 0057f8aa: fld dword ptr [ebx + 4] */ FPUSH(R_F32((u32)(r_ebx+0x4u)));
    /* 0057f8ad: fmul dword ptr [0x9278ec] */ ST(0) = ST(0) * R_F32((u32)(0x9278ecu));
    /* 0057f8b3: mov dword ptr [ecx + 0x50], esi */ W32((u32)(r_ecx+0x50u), r_esi);
    /* 0057f8b6: fstp dword ptr [ecx + 0x3e0] */ W_F32((u32)(r_ecx+0x3e0u), ST(0)); FPOP();
    /* 0057f8bc: mov dword ptr [ecx + 0x54], edi */ W32((u32)(r_ecx+0x54u), r_edi);
    /* 0057f8bf: mov dword ptr [ecx + 0x58], eax */ W32((u32)(r_ecx+0x58u), r_eax);
    /* 0057f8c2: mov dword ptr [ecx + 0x398], esi */ W32((u32)(r_ecx+0x398u), r_esi);
    /* 0057f8c8: mov dword ptr [ecx + 0x39c], edi */ W32((u32)(r_ecx+0x39cu), r_edi);
    /* 0057f8ce: mov dword ptr [ecx + 0x3a0], eax */ W32((u32)(r_ecx+0x3a0u), r_eax);
    /* 0057f8d4: fnstcw word ptr [ebp - 0x38] */ W16((u32)(r_ebp+0xffffffc8u), fcw);
    /* 0057f8d7: movzx eax, word ptr [ebp - 0x38] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc8u));
    /* 0057f8db: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0057f8e0: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0057f8e3: fldcw word ptr [ebp - 0x30] */ fcw = R16((u32)(r_ebp+0xffffffd0u));
    /* 0057f8e6: fistp dword ptr [ebp - 0x28] */ W32((u32)(r_ebp+0xffffffd8u), (u32)fx_int32(ST(0))); FPOP();
    /* 0057f8e9: fldcw word ptr [ebp - 0x38] */ fcw = R16((u32)(r_ebp+0xffffffc8u));
    /* 0057f8ec: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0057f8ef: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057f8f2: je 0x57f9b4 */ if (fZ) goto L_0057f9b4;
L_0057f8f8:; BB(0x0057f8f8);
    /* 0057f8f8: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0057f8fa: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0057f8fc: mov dword ptr [ecx + 0x3e4], eax */ W32((u32)(r_ecx+0x3e4u), r_eax);
    /* 0057f902: mov dword ptr [ecx + 0x3e8], eax */ W32((u32)(r_ecx+0x3e8u), r_eax);
    /* 0057f908: call 0x787550 */ r_esp -= 4; W32(r_esp, 0x57f90du); f_00787550();
    /* 0057f90d: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0057f910: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0057f913: mov dword ptr [ecx + 0x3ec], 0 */ W32((u32)(r_ecx+0x3ecu), 0x0u);
    /* 0057f91d: movsx edx, word ptr [eax + 0xa] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0xau));
    /* 0057f921: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0057f923: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057f925: je 0x57f93e */ if (fZ) goto L_0057f93e;
L_0057f927:; BB(0x0057f927);
    /* 0057f927: mov eax, dword ptr [ecx + 0x390] */ r_eax = R32((u32)(r_ecx+0x390u));
    /* 0057f92d: test eax, 0x40000 */ {  u32 a = r_eax; u32 b = 0x40000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057f932: jne 0x57f93e */ if (!fZ) goto L_0057f93e;
L_0057f934:; BB(0x0057f934);
    /* 0057f934: call 0x52ca40 */ r_esp -= 4; W32(r_esp, 0x57f939u); f_0052ca40();
    /* 0057f939: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0057f93c: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_0057f93e:; BB(0x0057f93e);
    /* 0057f93e: mov dword ptr [ecx + 0x40c], ebx */ W32((u32)(r_ecx+0x40cu), r_ebx);
    /* 0057f944: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_0057f946:; BB(0x0057f946);
    /* 0057f946: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 0057f949: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0057f94b: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0057f94e: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0057f950: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0057f952: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0057f954: lea ecx, [ecx + edx + 0x414] */ r_ecx = (u32)(r_ecx+r_edx+0x414u);
    /* 0057f95b: call 0x57739c */ r_esp -= 4; W32(r_esp, 0x57f960u); f_0057739c();
    /* 0057f960: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0057f963: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0057f966: jge 0x57f96d */ if ((fS==fO)) goto L_0057f96d;
L_0057f968:; BB(0x0057f968);
    /* 0057f968: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0057f96b: jmp 0x57f946 */ goto L_0057f946;
L_0057f96d:; BB(0x0057f96d);
    /* 0057f96d: mov edi, dword ptr [ebp - 0x3c] */ r_edi = R32((u32)(r_ebp+0xffffffc4u));
    /* 0057f970: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0057f973: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0057f976: or eax, 0x1000000 */ {  u32 a = r_eax; u32 b = 0x1000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0057f97b: mov edx, dword ptr [edi + 0x38] */ r_edx = R32((u32)(r_edi+0x38u));
    /* 0057f97e: mov ebx, dword ptr [edi + 0x3c] */ r_ebx = R32((u32)(r_edi+0x3cu));
    /* 0057f981: mov esi, dword ptr [edi + 0x40] */ r_esi = R32((u32)(r_edi+0x40u));
    /* 0057f984: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0057f987: mov dword ptr [edi + 0x44], edx */ W32((u32)(r_edi+0x44u), r_edx);
    /* 0057f98a: mov dword ptr [edi + 0x48], ebx */ W32((u32)(r_edi+0x48u), r_ebx);
    /* 0057f98d: mov dword ptr [edi + 0x4c], esi */ W32((u32)(r_edi+0x4cu), r_esi);
    /* 0057f990: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0057f992: call dword ptr [eax + 0x150] */ { u32 t = R32((u32)(r_eax+0x150u)); r_esp -= 4; W32(r_esp, 0x57f998u); call_ind(t); }
    /* 0057f998: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0057f99b: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0057f99e: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0057f9a1: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0057f9a4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0057f9a7: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0057f9ae: mov esp, ebp */ r_esp = r_ebp;
    /* 0057f9b0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057f9b1: ret 8 */ FN_RET(0x0057f6b0); r_esp += 12; return;
L_0057f9b4:; BB(0x0057f9b4);
    /* 0057f9b4: mov edx, dword ptr [ecx + 0x390] */ r_edx = R32((u32)(r_ecx+0x390u));
    /* 0057f9ba: or edx, 0x40000 */ {  u32 a = r_edx; u32 b = 0x40000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0057f9c0: fld dword ptr [ecx + 0x360] */ FPUSH(R_F32((u32)(r_ecx+0x360u)));
    /* 0057f9c6: fcomp dword ptr [0x9278e8] */ fx_compare(ST(0), R_F32((u32)(0x9278e8u))); FPOP();
    /* 0057f9cc: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0057f9ce: mov dword ptr [ecx + 0x390], edx */ W32((u32)(r_ecx+0x390u), r_edx);
    /* 0057f9d4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0057f9d5: jae 0x57f9e1 */ if (!fC) goto L_0057f9e1;
L_0057f9d7:; BB(0x0057f9d7);
    /* 0057f9d7: mov dword ptr [ecx + 0x360], 0x42480000 */ W32((u32)(r_ecx+0x360u), 0x42480000u);
L_0057f9e1:; BB(0x0057f9e1);
    /* 0057f9e1: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 0057f9e4: or eax, 0x4040000 */ {  u32 a = r_eax; u32 b = 0x4040000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0057f9e9: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 0057f9ec: jmp 0x57f8f8 */ goto L_0057f8f8;
}

void f_0057f9f4(void) /* sub_57F9F4 */
{
    FN_ENTER(0x0057f9f4);
    /* 0057f9f4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0057f9f5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0057f9f7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057f9f9: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x57f9feu); f_0068d5a8();
    /* 0057f9fe: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0057f9ff: cmp eax, dword ptr [esp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0057fa03: je 0x57fa09 */ if (fZ) goto L_0057fa09;
L_0057fa05:; BB(0x0057fa05);
    /* 0057fa05: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0057fa06: ret 4 */ FN_RET(0x0057f9f4); r_esp += 8; return;
L_0057fa09:; BB(0x0057fa09);
    /* 0057fa09: mov eax, dword ptr [ebx + 0x3e4] */ r_eax = R32((u32)(r_ebx+0x3e4u));
    /* 0057fa0f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0057fa11: jle 0x57fa17 */ if ((fZ||fS!=fO)) goto L_0057fa17;
L_0057fa13:; BB(0x0057fa13);
    /* 0057fa13: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0057fa14: ret 4 */ FN_RET(0x0057f9f4); r_esp += 8; return;
L_0057fa17:; BB(0x0057fa17);
    /* 0057fa17: mov dword ptr [ebx + 0x3e4], 0x1e */ W32((u32)(r_ebx+0x3e4u), 0x1eu);
    /* 0057fa21: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0057fa23: call 0x4d4288 */ r_esp -= 4; W32(r_esp, 0x57fa28u); f_004d4288();
    /* 0057fa28: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0057fa29: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0057fa2a: ret 4 */ FN_RET(0x0057f9f4); r_esp += 8; return;
}

void f_0057fa30(void) /* sub_57FA30 */
{
    FN_ENTER(0x0057fa30);
    /* 0057fa30: mov edx, dword ptr [ecx + 0x390] */ r_edx = R32((u32)(r_ecx+0x390u));
    /* 0057fa36: test edx, 0x40000 */ {  u32 a = r_edx; u32 b = 0x40000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057fa3c: jne 0x57fa74 */ if (!fZ) goto L_0057fa74;
L_0057fa3e:; BB(0x0057fa3e);
    /* 0057fa3e: mov eax, dword ptr [ecx + 0x37c] */ r_eax = R32((u32)(r_ecx+0x37cu));
    /* 0057fa44: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0057fa47: je 0x57fa4a */ if (fZ) goto L_0057fa4a;
L_0057fa49:; BB(0x0057fa49);
    /* 0057fa49: ret  */ FN_RET(0x0057fa30); r_esp += 4; return;
L_0057fa4a:; BB(0x0057fa4a);
    /* 0057fa4a: and edx, 0xfffffffe */ {  u32 a = r_edx; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0057fa4d: mov dword ptr [ecx + 0x390], edx */ W32((u32)(r_ecx+0x390u), r_edx);
    /* 0057fa53: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0057fa56: jne 0x57fa49 */ if (!fZ) goto L_0057fa49;
L_0057fa58:; BB(0x0057fa58);
    /* 0057fa58: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 0057fa5f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0057fa61: je 0x57fa49 */ if (fZ) goto L_0057fa49;
L_0057fa63:; BB(0x0057fa63);
    /* 0057fa63: mov dword ptr [ecx + 0x37c], 0 */ W32((u32)(r_ecx+0x37cu), 0x0u);
    /* 0057fa6d: mov dword ptr [ecx + 0x388], eax */ W32((u32)(r_ecx+0x388u), r_eax);
    /* 0057fa73: ret  */ FN_RET(0x0057fa30); r_esp += 4; return;
L_0057fa74:; BB(0x0057fa74);
    /* 0057fa74: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057fa76: mov eax, dword ptr [ecx + 0x50] */ r_eax = R32((u32)(r_ecx+0x50u));
    /* 0057fa79: and edx, 0xfffbffff */ {  u32 a = r_edx; u32 b = 0xfffbffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0057fa7f: mov dword ptr [ecx + 0x390], edx */ W32((u32)(r_ecx+0x390u), r_edx);
    /* 0057fa85: mov edx, dword ptr [ecx + 0x54] */ r_edx = R32((u32)(r_ecx+0x54u));
    /* 0057fa88: mov dword ptr [ecx + 0x38], eax */ W32((u32)(r_ecx+0x38u), r_eax);
    /* 0057fa8b: mov eax, dword ptr [ecx + 0x58] */ r_eax = R32((u32)(r_ecx+0x58u));
    /* 0057fa8e: mov dword ptr [ecx + 0x3c], edx */ W32((u32)(r_ecx+0x3cu), r_edx);
    /* 0057fa91: mov dword ptr [ecx + 0x40], eax */ W32((u32)(r_ecx+0x40u), r_eax);
    /* 0057fa94: lea eax, [ecx + 0x38] */ r_eax = (u32)(r_ecx+0x38u);
    /* 0057fa97: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057fa98: call 0x7b4c58 */ r_esp -= 4; W32(r_esp, 0x57fa9du); f_007b4c58();
    /* 0057fa9d: ret  */ FN_RET(0x0057fa30); r_esp += 4; return;
}

void f_0057fae0(void)
{
    FN_ENTER(0x0057fae0);
    /* 0057fae0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0057fae1: mov ebp, esp */ r_ebp = r_esp;
    /* 0057fae3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0057fae5: push 0x8d7b1c */ { u32 v = 0x8d7b1cu; r_esp -= 4; W32(r_esp, v); }
    /* 0057faea: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0057faf0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057faf1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0057faf8: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0057fafb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0057fafe: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0057fb01: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0057fb04: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0057fb07: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 0057fb0c: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 0057fb13: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x57fb18u); f_008581c5();
    /* 0057fb18: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0057fb19: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0057fb1c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057fb1e: je 0x57fbfc */ if (fZ) goto L_0057fbfc;
L_0057fb24:; BB(0x0057fb24);
    /* 0057fb24: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 0057fb2b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0057fb32: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0057fb35: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0057fb37: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057fb38: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057fb39: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057fb3a: push 0x9bf0bc */ { u32 v = 0x9bf0bcu; r_esp -= 4; W32(r_esp, v); }
    /* 0057fb3f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0057fb41: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x57fb46u); f_005b7a84();
    /* 0057fb46: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0057fb49: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 0057fb50: mov dword ptr [0xa74194], eax */ W32((u32)(0xa74194u), r_eax);
    /* 0057fb55: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0057fb5c: push 0x1a */ { u32 v = 0x1au; r_esp -= 4; W32(r_esp, v); }
    /* 0057fb5e: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x57fb63u); f_0077a684();
    /* 0057fb63: mov dword ptr [0xa74190], eax */ W32((u32)(0xa74190u), r_eax);
    /* 0057fb68: push 0x1a */ { u32 v = 0x1au; r_esp -= 4; W32(r_esp, v); }
    /* 0057fb6a: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x57fb6fu); f_0077a698();
    /* 0057fb6f: mov dword ptr [0xa7418c], eax */ W32((u32)(0xa7418cu), r_eax);
    /* 0057fb74: push 0x1a */ { u32 v = 0x1au; r_esp -= 4; W32(r_esp, v); }
    /* 0057fb76: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x57fb7bu); f_0077a6b4();
    /* 0057fb7b: mov dword ptr [0xa74188], eax */ W32((u32)(0xa74188u), r_eax);
    /* 0057fb80: push 0x1a */ { u32 v = 0x1au; r_esp -= 4; W32(r_esp, v); }
    /* 0057fb82: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x57fb87u); f_0077a6cc();
    /* 0057fb87: movzx edx, word ptr [0x927854] */ r_edx = (u32)R16((u32)(0x927854u));
    /* 0057fb8e: movzx ecx, word ptr [0x927856] */ r_ecx = (u32)R16((u32)(0x927856u));
    /* 0057fb95: movzx ebx, word ptr [0x927858] */ r_ebx = (u32)R16((u32)(0x927858u));
    /* 0057fb9c: mov edi, dword ptr [0xa74194] */ r_edi = R32((u32)(0xa74194u));
    /* 0057fba2: mov esi, dword ptr [edi + 0x430] */ r_esi = R32((u32)(r_edi+0x430u));
    /* 0057fba8: mov dword ptr [0xa74184], eax */ W32((u32)(0xa74184u), r_eax);
    /* 0057fbad: mov eax, dword ptr [0x927850] */ r_eax = R32((u32)(0x927850u));
    /* 0057fbb2: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0057fbb5: mov word ptr [ebp - 0x24], dx */ W16((u32)(r_ebp+0xffffffdcu), (u16)r_edx);
    /* 0057fbb9: mov edx, dword ptr [edi + 0x42c] */ r_edx = R32((u32)(r_edi+0x42cu));
    /* 0057fbbf: mov word ptr [ebp - 0x22], cx */ W16((u32)(r_ebp+0xffffffdeu), (u16)r_ecx);
    /* 0057fbc3: mov word ptr [ebp - 0x20], bx */ W16((u32)(r_ebp+0xffffffe0u), (u16)r_ebx);
    /* 0057fbc7: mov dword ptr [ebp - 0x2c], esi */ W32((u32)(r_ebp+0xffffffd4u), r_esi);
    /* 0057fbca: lea eax, [ebp - 0x2c] */ r_eax = (u32)(r_ebp+0xffffffd4u);
    /* 0057fbcd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057fbce: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057fbd0: push 0x41700000 */ { u32 v = 0x41700000u; r_esp -= 4; W32(r_esp, v); }
    /* 0057fbd5: push dword ptr [edx + 0xc] */ { u32 v = R32((u32)(r_edx+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0057fbd8: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0057fbdb: push 0x22 */ { u32 v = 0x22u; r_esp -= 4; W32(r_esp, v); }
    /* 0057fbdd: call 0x608470 */ r_esp -= 4; W32(r_esp, 0x57fbe2u); f_00608470();
    /* 0057fbe2: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0057fbe5: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0057fbe8: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0057fbeb: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0057fbee: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0057fbf1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0057fbf8: mov esp, ebp */ r_esp = r_ebp;
    /* 0057fbfa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057fbfb: ret  */ FN_RET(0x0057fae0); r_esp += 4; return;
L_0057fbfc:; BB(0x0057fbfc);
    /* 0057fbfc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0057fbfe: jmp 0x57fb50 */ f_0057fb50(); return;
}

void f_0057fc04(void) /* sub_57FC04 */
{
    FN_ENTER(0x0057fc04);
    /* 0057fc04: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0057fc05: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0057fc07: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0057fc09: call 0x57fc28 */ r_esp -= 4; W32(r_esp, 0x57fc0eu); f_0057fc28();
    /* 0057fc0e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0057fc12: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0057fc14: jne 0x57fc1a */ if (!fZ) goto L_0057fc1a;
L_0057fc16:; BB(0x0057fc16);
    /* 0057fc16: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0057fc17: ret 4 */ FN_RET(0x0057fc04); r_esp += 8; return;
L_0057fc1a:; BB(0x0057fc1a);
    /* 0057fc1a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0057fc1b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x57fc20u); f_005c2f74();
    /* 0057fc20: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0057fc21: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0057fc22: ret 4 */ FN_RET(0x0057fc04); r_esp += 8; return;
}

void f_0057fc28(void) /* sub_57FC28 */
{
    FN_ENTER(0x0057fc28);
    /* 0057fc28: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0057fc29: mov ebp, esp */ r_ebp = r_esp;
    /* 0057fc2b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0057fc2d: push 0x8d7b38 */ { u32 v = 0x8d7b38u; r_esp -= 4; W32(r_esp, v); }
    /* 0057fc32: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0057fc38: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057fc39: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0057fc40: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0057fc43: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0057fc46: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0057fc49: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0057fc4c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0057fc4f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0057fc52: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0057fc55: mov edx, dword ptr [ecx + 0xe0] */ r_edx = R32((u32)(r_ecx+0xe0u));
    /* 0057fc5b: mov dword ptr [ecx], 0xb07690 */ W32((u32)(r_ecx), 0xb07690u);
    /* 0057fc61: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057fc63: je 0x57fc7f */ if (fZ) goto L_0057fc7f;
L_0057fc65:; BB(0x0057fc65);
    /* 0057fc65: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0057fc68: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0057fc6c: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0057fc71: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0057fc75: mov dword ptr [ecx + 0xe0], 0 */ W32((u32)(r_ecx+0xe0u), 0x0u);
L_0057fc7f:; BB(0x0057fc7f);
    /* 0057fc7f: mov edx, dword ptr [ecx + 0xe4] */ r_edx = R32((u32)(r_ecx+0xe4u));
    /* 0057fc85: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057fc87: je 0x57fca3 */ if (fZ) goto L_0057fca3;
L_0057fc89:; BB(0x0057fc89);
    /* 0057fc89: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0057fc8c: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0057fc90: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0057fc95: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0057fc99: mov dword ptr [ecx + 0xe4], 0 */ W32((u32)(r_ecx+0xe4u), 0x0u);
L_0057fca3:; BB(0x0057fca3);
    /* 0057fca3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0057fcaa: call 0x7b4aec */ r_esp -= 4; W32(r_esp, 0x57fcafu); f_007b4aec();
    /* 0057fcaf: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0057fcb2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0057fcb9: mov esp, ebp */ r_esp = r_ebp;
    /* 0057fcbb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057fcbc: ret  */ FN_RET(0x0057fc28); r_esp += 4; return;
}

void f_0057fcc0(void) /* sub_57FCC0 */
{
    FN_ENTER(0x0057fcc0);
    /* 0057fcc0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0057fcc1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0057fcc2: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0057fcc5: mov esi, ecx */ r_esi = r_ecx;
    /* 0057fcc7: mov eax, dword ptr [esi + 0xac] */ r_eax = R32((u32)(r_esi+0xacu));
    /* 0057fccd: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0057fcd0: mov eax, dword ptr [esi + 0xb0] */ r_eax = R32((u32)(r_esi+0xb0u));
    /* 0057fcd6: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0057fcda: mov eax, dword ptr [esi + 0xb4] */ r_eax = R32((u32)(r_esi+0xb4u));
    /* 0057fce0: lea edi, [esi + 0xac] */ r_edi = (u32)(r_esi+0xacu);
    /* 0057fce6: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0057fcea: lea edx, [esi + 0xb8] */ r_edx = (u32)(r_esi+0xb8u);
    /* 0057fcf0: mov ecx, edi */ r_ecx = r_edi;
    /* 0057fcf2: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x57fcf7u); f_0082ebac();
    /* 0057fcf7: mov ecx, dword ptr [esi + 0xe0] */ r_ecx = R32((u32)(r_esi+0xe0u));
    /* 0057fcfd: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057fcff: je 0x57fd07 */ if (fZ) goto L_0057fd07;
L_0057fd01:; BB(0x0057fd01);
    /* 0057fd01: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0057fd02: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x57fd07u); f_00508db8();
L_0057fd07:; BB(0x0057fd07);
    /* 0057fd07: fld dword ptr [0xa74180] */ FPUSH(R_F32((u32)(0xa74180u)));
    /* 0057fd0d: fadd dword ptr [esi + 0xdc] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0xdcu));
    /* 0057fd13: mov eax, dword ptr [esi + 0xf4] */ r_eax = R32((u32)(r_esi+0xf4u));
    /* 0057fd19: fst dword ptr [esi + 0xdc] */ W_F32((u32)(r_esi+0xdcu), ST(0));
    /* 0057fd1f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057fd21: je 0x57fd9b */ if (fZ) goto L_0057fd9b;
L_0057fd23:; BB(0x0057fd23);
    /* 0057fd23: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0057fd25: mov eax, dword ptr [esi + 0xac] */ r_eax = R32((u32)(r_esi+0xacu));
    /* 0057fd2b: mov edx, dword ptr [esi + 0xb0] */ r_edx = R32((u32)(r_esi+0xb0u));
    /* 0057fd31: mov dword ptr [esi + 0xe8], eax */ W32((u32)(r_esi+0xe8u), r_eax);
    /* 0057fd37: mov eax, dword ptr [esi + 0xb4] */ r_eax = R32((u32)(r_esi+0xb4u));
    /* 0057fd3d: mov dword ptr [esi + 0xec], edx */ W32((u32)(r_esi+0xecu), r_edx);
    /* 0057fd43: mov dword ptr [esi + 0xf0], eax */ W32((u32)(r_esi+0xf0u), r_eax);
    /* 0057fd49: mov eax, dword ptr [esi + 0xf8] */ r_eax = R32((u32)(r_esi+0xf8u));
    /* 0057fd4f: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0057fd52: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0057fd55: jg 0x57fd5f */ if ((!fZ&&fS==fO)) goto L_0057fd5f;
L_0057fd57:; BB(0x0057fd57);
    /* 0057fd57: mov dword ptr [esi + 0xf8], eax */ W32((u32)(r_esi+0xf8u), r_eax);
    /* 0057fd5d: jmp 0x57fd77 */ goto L_0057fd77;
L_0057fd5f:; BB(0x0057fd5f);
    /* 0057fd5f: mov dword ptr [esi + 0xf8], 0 */ W32((u32)(r_esi+0xf8u), 0x0u);
    /* 0057fd69: lea eax, [esi + 0xe8] */ r_eax = (u32)(r_esi+0xe8u);
    /* 0057fd6f: mov ecx, esi */ r_ecx = r_esi;
    /* 0057fd71: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057fd72: call 0x57d0b8 */ r_esp -= 4; W32(r_esp, 0x57fd77u); f_0057d0b8();
L_0057fd77:; BB(0x0057fd77);
    /* 0057fd77: mov ecx, dword ptr [esi + 0xe4] */ r_ecx = R32((u32)(r_esi+0xe4u));
    /* 0057fd7d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057fd7f: je 0x57fd95 */ if (fZ) goto L_0057fd95;
L_0057fd81:; BB(0x0057fd81);
    /* 0057fd81: lea eax, [esi + 0xe8] */ r_eax = (u32)(r_esi+0xe8u);
    /* 0057fd87: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057fd88: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x57fd8du); f_00508db8();
    /* 0057fd8d: fld dword ptr [esi + 0xdc] */ FPUSH(R_F32((u32)(r_esi+0xdcu)));
    /* 0057fd93: jmp 0x57fd9b */ goto L_0057fd9b;
L_0057fd95:; BB(0x0057fd95);
    /* 0057fd95: fld dword ptr [esi + 0xdc] */ FPUSH(R_F32((u32)(r_esi+0xdcu)));
L_0057fd9b:; BB(0x0057fd9b);
    /* 0057fd9b: fcomp dword ptr [0x927b8c] */ fx_compare(ST(0), R_F32((u32)(0x927b8cu))); FPOP();
    /* 0057fda1: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0057fda3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0057fda4: jb 0x57fdb9 */ if (fC) goto L_0057fdb9;
L_0057fda6:; BB(0x0057fda6);
    /* 0057fda6: movzx eax, word ptr [esi + 8] */ r_eax = (u32)R16((u32)(r_esi+0x8u));
    /* 0057fdaa: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0057fdaf: mov word ptr [esi + 8], ax */ W16((u32)(r_esi+0x8u), (u16)r_eax);
    /* 0057fdb3: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0057fdb6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0057fdb7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0057fdb8: ret  */ FN_RET(0x0057fcc0); r_esp += 4; return;
L_0057fdb9:; BB(0x0057fdb9);
    /* 0057fdb9: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0057fdbc: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0057fdbe: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0057fdbf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057fdc0: call 0x77fffc */ r_esp -= 4; W32(r_esp, 0x57fdc5u); f_0077fffc();
    /* 0057fdc5: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057fdc8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057fdca: je 0x57fddf */ if (fZ) goto L_0057fddf;
L_0057fdcc:; BB(0x0057fdcc);
    /* 0057fdcc: movzx eax, word ptr [esi + 8] */ r_eax = (u32)R16((u32)(r_esi+0x8u));
    /* 0057fdd0: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0057fdd5: mov word ptr [esi + 8], ax */ W16((u32)(r_esi+0x8u), (u16)r_eax);
    /* 0057fdd9: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0057fddc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0057fddd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0057fdde: ret  */ FN_RET(0x0057fcc0); r_esp += 4; return;
L_0057fddf:; BB(0x0057fddf);
    /* 0057fddf: movzx eax, word ptr [esi + 0xfc] */ r_eax = (u32)R16((u32)(r_esi+0xfcu));
    /* 0057fde6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057fde7: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x57fdecu); f_007b4d18();
    /* 0057fdec: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0057fded: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057fdef: je 0x57ff2f */ if (fZ) goto L_0057ff2f;
L_0057fdf5:; BB(0x0057fdf5);
    /* 0057fdf5: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
    /* 0057fdfb: add edx, dword ptr [0xaae164] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaae164u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0057fe01: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0057fe03: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0057fe05: jle 0x57ff2f */ if ((fZ||fS!=fO)) goto L_0057ff2f;
L_0057fe0b:; BB(0x0057fe0b);
    /* 0057fe0b: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 0057fe0f: mov ebx, eax */ r_ebx = r_eax;
    /* 0057fe11: mov dword ptr [esp + 0x14], ebp */ W32((u32)(r_esp+0x14u), r_ebp);
L_0057fe15:; BB(0x0057fe15);
    /* 0057fe15: mov ebp, dword ptr [esi*4 + 0xaad720] */ r_ebp = R32((u32)(r_esi*4+0xaad720u));
    /* 0057fe1c: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057fe1e: je 0x57ff1c */ if (fZ) goto L_0057ff1c;
L_0057fe24:; BB(0x0057fe24);
    /* 0057fe24: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0057fe25: call 0x6ea71c */ r_esp -= 4; W32(r_esp, 0x57fe2au); f_006ea71c();
    /* 0057fe2a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0057fe2b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057fe2d: jne 0x57fe40 */ if (!fZ) goto L_0057fe40;
L_0057fe2f:; BB(0x0057fe2f);
    /* 0057fe2f: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
    /* 0057fe35: add edx, dword ptr [0xaae164] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaae164u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0057fe3b: jmp 0x57ff1c */ goto L_0057ff1c;
L_0057fe40:; BB(0x0057fe40);
    /* 0057fe40: cmp ebp, ebx */ {  u32 a = r_ebp; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057fe42: je 0x57ff35 */ if (fZ) goto L_0057ff35;
L_0057fe48:; BB(0x0057fe48);
    /* 0057fe48: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 0057fe4b: test edx, 0x4000a00 */ {  u32 a = r_edx; u32 b = 0x4000a00u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057fe51: je 0x57fe64 */ if (fZ) goto L_0057fe64;
L_0057fe53:; BB(0x0057fe53);
    /* 0057fe53: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
    /* 0057fe59: add edx, dword ptr [0xaae164] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaae164u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0057fe5f: jmp 0x57ff1c */ goto L_0057ff1c;
L_0057fe64:; BB(0x0057fe64);
    /* 0057fe64: lea edx, [ebp + 0x300] */ r_edx = (u32)(r_ebp+0x300u);
    /* 0057fe6a: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 0057fe6e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0057fe6f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0057fe70: call 0x78ea2c */ r_esp -= 4; W32(r_esp, 0x57fe75u); f_0078ea2c();
    /* 0057fe75: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057fe78: fld dword ptr [0xa74180] */ FPUSH(R_F32((u32)(0xa74180u)));
    /* 0057fe7e: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0057fe80: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0057fe82: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0057fe84: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0057fe85: jae 0x57fe98 */ if (!fC) goto L_0057fe98;
L_0057fe87:; BB(0x0057fe87);
    /* 0057fe87: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
    /* 0057fe8d: add edx, dword ptr [0xaae164] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaae164u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0057fe93: jmp 0x57ff1c */ goto L_0057ff1c;
L_0057fe98:; BB(0x0057fe98);
    /* 0057fe98: fild dword ptr [0xa74170] */ FPUSH((long double)(i32)R32((u32)(0xa74170u)));
    /* 0057fe9e: mov ecx, dword ptr [0x927b58] */ r_ecx = R32((u32)(0x927b58u));
    /* 0057fea4: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 0057fea7: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 0057feab: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 0057feaf: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0057feb4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057feb5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057feb6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057feb8: push dword ptr [esp + 0x1c] */ { u32 v = R32((u32)(r_esp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0057febc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0057febd: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0057febf: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0057fec0: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x57fec3u); call_ind(t); }
    /* 0057fec3: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0057fec5: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057fec7: je 0x57feef */ if (fZ) goto L_0057feef;
L_0057fec9:; BB(0x0057fec9);
    /* 0057fec9: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 0057fecc: test edx, 0x800 */ {  u32 a = r_edx; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057fed2: je 0x57fedb */ if (fZ) goto L_0057fedb;
L_0057fed4:; BB(0x0057fed4);
    /* 0057fed4: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0057fed6: call 0x57d31c */ r_esp -= 4; W32(r_esp, 0x57fedbu); f_0057d31c();
L_0057fedb:; BB(0x0057fedb);
    /* 0057fedb: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0057fedf: cmp edx, dword ptr [0xa9c4f4] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa9c4f4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057fee5: jne 0x57feef */ if (!fZ) goto L_0057feef;
L_0057fee7:; BB(0x0057fee7);
    /* 0057fee7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0057fee8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0057feea: call 0x57f9f4 */ r_esp -= 4; W32(r_esp, 0x57feefu); f_0057f9f4();
L_0057feef:; BB(0x0057feef);
    /* 0057feef: push 0xfb */ { u32 v = 0xfbu; r_esp -= 4; W32(r_esp, v); }
    /* 0057fef4: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 0057fef8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0057fef9: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x57fefeu); f_0050b510();
    /* 0057fefe: push 0xfc */ { u32 v = 0xfcu; r_esp -= 4; W32(r_esp, v); }
    /* 0057ff03: mov edx, dword ptr [esp + 0x28] */ r_edx = R32((u32)(r_esp+0x28u));
    /* 0057ff07: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0057ff08: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x57ff0du); f_0050b510();
    /* 0057ff0d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057ff10: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
    /* 0057ff16: add edx, dword ptr [0xaae164] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaae164u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
L_0057ff1c:; BB(0x0057ff1c);
    /* 0057ff1c: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0057ff1f: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0057ff21: jl 0x57fe15 */ if ((fS!=fO)) goto L_0057fe15;
L_0057ff27:; BB(0x0057ff27);
    /* 0057ff27: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 0057ff2b: mov ebp, dword ptr [esp + 0x14] */ r_ebp = R32((u32)(r_esp+0x14u));
L_0057ff2f:; BB(0x0057ff2f);
    /* 0057ff2f: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0057ff32: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0057ff33: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0057ff34: ret  */ FN_RET(0x0057fcc0); r_esp += 4; return;
L_0057ff35:; BB(0x0057ff35);
    /* 0057ff35: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
    /* 0057ff3b: add edx, dword ptr [0xaae164] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaae164u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0057ff41: jmp 0x57ff1c */ goto L_0057ff1c;
}

void f_0057fef2(void)
{
    FN_ENTER(0x0057fef2);
    goto L_0057fef2;
L_0057fe15:; BB(0x0057fe15);
    /* 0057fe15: mov ebp, dword ptr [esi*4 + 0xaad720] */ r_ebp = R32((u32)(r_esi*4+0xaad720u));
    /* 0057fe1c: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057fe1e: je 0x57ff1c */ if (fZ) goto L_0057ff1c;
L_0057fe24:; BB(0x0057fe24);
    /* 0057fe24: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0057fe25: call 0x6ea71c */ r_esp -= 4; W32(r_esp, 0x57fe2au); f_006ea71c();
    /* 0057fe2a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0057fe2b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057fe2d: jne 0x57fe40 */ if (!fZ) goto L_0057fe40;
L_0057fe2f:; BB(0x0057fe2f);
    /* 0057fe2f: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
    /* 0057fe35: add edx, dword ptr [0xaae164] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaae164u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0057fe3b: jmp 0x57ff1c */ goto L_0057ff1c;
L_0057fe40:; BB(0x0057fe40);
    /* 0057fe40: cmp ebp, ebx */ {  u32 a = r_ebp; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057fe42: je 0x57ff35 */ if (fZ) goto L_0057ff35;
L_0057fe48:; BB(0x0057fe48);
    /* 0057fe48: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 0057fe4b: test edx, 0x4000a00 */ {  u32 a = r_edx; u32 b = 0x4000a00u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057fe51: je 0x57fe64 */ if (fZ) goto L_0057fe64;
L_0057fe53:; BB(0x0057fe53);
    /* 0057fe53: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
    /* 0057fe59: add edx, dword ptr [0xaae164] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaae164u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0057fe5f: jmp 0x57ff1c */ goto L_0057ff1c;
L_0057fe64:; BB(0x0057fe64);
    /* 0057fe64: lea edx, [ebp + 0x300] */ r_edx = (u32)(r_ebp+0x300u);
    /* 0057fe6a: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 0057fe6e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0057fe6f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0057fe70: call 0x78ea2c */ r_esp -= 4; W32(r_esp, 0x57fe75u); f_0078ea2c();
    /* 0057fe75: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057fe78: fld dword ptr [0xa74180] */ FPUSH(R_F32((u32)(0xa74180u)));
    /* 0057fe7e: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0057fe80: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0057fe82: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0057fe84: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0057fe85: jae 0x57fe98 */ if (!fC) goto L_0057fe98;
L_0057fe87:; BB(0x0057fe87);
    /* 0057fe87: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
    /* 0057fe8d: add edx, dword ptr [0xaae164] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaae164u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0057fe93: jmp 0x57ff1c */ goto L_0057ff1c;
L_0057fe98:; BB(0x0057fe98);
    /* 0057fe98: fild dword ptr [0xa74170] */ FPUSH((long double)(i32)R32((u32)(0xa74170u)));
    /* 0057fe9e: mov ecx, dword ptr [0x927b58] */ r_ecx = R32((u32)(0x927b58u));
    /* 0057fea4: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 0057fea7: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 0057feab: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 0057feaf: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0057feb4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057feb5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057feb6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057feb8: push dword ptr [esp + 0x1c] */ { u32 v = R32((u32)(r_esp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0057febc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0057febd: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0057febf: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0057fec0: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x57fec3u); call_ind(t); }
    /* 0057fec3: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0057fec5: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057fec7: je 0x57feef */ if (fZ) goto L_0057feef;
L_0057fec9:; BB(0x0057fec9);
    /* 0057fec9: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 0057fecc: test edx, 0x800 */ {  u32 a = r_edx; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057fed2: je 0x57fedb */ if (fZ) goto L_0057fedb;
L_0057fed4:; BB(0x0057fed4);
    /* 0057fed4: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0057fed6: call 0x57d31c */ r_esp -= 4; W32(r_esp, 0x57fedbu); f_0057d31c();
L_0057fedb:; BB(0x0057fedb);
    /* 0057fedb: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0057fedf: cmp edx, dword ptr [0xa9c4f4] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa9c4f4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057fee5: jne 0x57feef */ if (!fZ) goto L_0057feef;
L_0057fee7:; BB(0x0057fee7);
    /* 0057fee7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0057fee8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0057feea: call 0x57f9f4 */ r_esp -= 4; W32(r_esp, 0x57feefu); f_0057f9f4();
L_0057feef:; BB(0x0057feef);
    /* 0057feef: push 0xfb */ { u32 v = 0xfbu; r_esp -= 4; W32(r_esp, v); }
L_0057fef2:; BB(0x0057fef2);
    /* 0057fef2: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0057fef4: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 0057fef8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0057fef9: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x57fefeu); f_0050b510();
    /* 0057fefe: push 0xfc */ { u32 v = 0xfcu; r_esp -= 4; W32(r_esp, v); }
    /* 0057ff03: mov edx, dword ptr [esp + 0x28] */ r_edx = R32((u32)(r_esp+0x28u));
    /* 0057ff07: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0057ff08: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x57ff0du); f_0050b510();
    /* 0057ff0d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057ff10: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
    /* 0057ff16: add edx, dword ptr [0xaae164] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaae164u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
L_0057ff1c:; BB(0x0057ff1c);
    /* 0057ff1c: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0057ff1f: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0057ff21: jl 0x57fe15 */ if ((fS!=fO)) goto L_0057fe15;
L_0057ff27:; BB(0x0057ff27);
    /* 0057ff27: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 0057ff2b: mov ebp, dword ptr [esp + 0x14] */ r_ebp = R32((u32)(r_esp+0x14u));
    /* 0057ff2f: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0057ff32: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0057ff33: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0057ff34: ret  */ FN_RET(0x0057fef2); r_esp += 4; return;
L_0057ff35:; BB(0x0057ff35);
    /* 0057ff35: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
    /* 0057ff3b: add edx, dword ptr [0xaae164] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaae164u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0057ff41: jmp 0x57ff1c */ goto L_0057ff1c;
}

void f_0057ff44(void) /* sub_57FF44 */
{
    FN_ENTER(0x0057ff44);
    /* 0057ff44: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0057ff45: mov ebx, esp */ r_ebx = r_esp;
    /* 0057ff47: and esp, 0xfffffff8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 0057ff4a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0057ff4b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0057ff4c: mov ebp, dword ptr [ebx + 4] */ r_ebp = R32((u32)(r_ebx+0x4u));
    /* 0057ff4f: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 0057ff53: mov ebp, esp */ r_ebp = r_esp;
    /* 0057ff55: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0057ff57: push 0x8d7b56 */ { u32 v = 0x8d7b56u; r_esp -= 4; W32(r_esp, v); }
    /* 0057ff5c: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0057ff62: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057ff63: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0057ff6a: sub esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0057ff6d: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0057ff70: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0057ff73: mov dword ptr [ebp - 0x30], edi */ W32((u32)(r_ebp+0xffffffd0u), r_edi);
    /* 0057ff76: mov dword ptr [ebp - 0x2c], esi */ W32((u32)(r_ebp+0xffffffd4u), r_esi);
    /* 0057ff79: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 0057ff7c: push dword ptr [0xaca348] */ { u32 v = R32((u32)(0xaca348u)); r_esp -= 4; W32(r_esp, v); }
    /* 0057ff82: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 0057ff85: mov dword ptr [ebp - 0x4c], ecx */ W32((u32)(r_ebp+0xffffffb4u), r_ecx);
    /* 0057ff88: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0057ff8b: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 0057ff8e: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 0057ff91: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0057ff94: mov eax, dword ptr [ebx + 0x14] */ r_eax = R32((u32)(r_ebx+0x14u));
    /* 0057ff97: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0057ff9a: call 0x7b4b48 */ r_esp -= 4; W32(r_esp, 0x57ff9fu); f_007b4b48();
    /* 0057ff9f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0057ffa6: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0057ffa9: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0057ffac: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0057ffaf: mov dword ptr [ecx + 0xf4], eax */ W32((u32)(r_ecx+0xf4u), r_eax);
    /* 0057ffb5: mov dword ptr [ecx], 0xb07690 */ W32((u32)(r_ecx), 0xb07690u);
    /* 0057ffbb: mov esi, dword ptr [edx] */ r_esi = R32((u32)(r_edx));
    /* 0057ffbd: mov dword ptr [ecx + 0xac], esi */ W32((u32)(r_ecx+0xacu), r_esi);
    /* 0057ffc3: mov edi, dword ptr [edx + 4] */ r_edi = R32((u32)(r_edx+0x4u));
    /* 0057ffc6: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0057ffc9: mov dword ptr [ecx + 0xb0], edi */ W32((u32)(r_ecx+0xb0u), r_edi);
    /* 0057ffcf: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0057ffd2: mov dword ptr [ecx + 0xb4], eax */ W32((u32)(r_ecx+0xb4u), r_eax);
    /* 0057ffd8: mov dword ptr [ecx + 0xdc], 0 */ W32((u32)(r_ecx+0xdcu), 0x0u);
    /* 0057ffe2: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0057ffe4: mov dword ptr [ecx + 0xb8], eax */ W32((u32)(r_ecx+0xb8u), r_eax);
    /* 0057ffea: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 0057ffed: mov dword ptr [ecx + 0xbc], eax */ W32((u32)(r_ecx+0xbcu), r_eax);
    /* 0057fff3: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 0057fff6: mov dword ptr [ecx + 0xc0], eax */ W32((u32)(r_ecx+0xc0u), r_eax);
    /* 0057fffc: add ecx, 0xb8 */ {  u32 a = r_ecx; u32 b = 0xb8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00580002: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x580007u); f_0082f9c4();
    /* 00580007: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0058000a: add ecx, 0xb8 */ {  u32 a = r_ecx; u32 b = 0xb8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00580010: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x580015u); f_0083173c();
    /* 00580015: fld dword ptr [0xa74180] */ FPUSH(R_F32((u32)(0xa74180u)));
    /* 0058001b: mov esi, dword ptr [ebp - 0x4c] */ r_esi = R32((u32)(r_ebp+0xffffffb4u));
    /* 0058001e: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00580021: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00580024: fld dword ptr [esi + 0xb8] */ FPUSH(R_F32((u32)(r_esi+0xb8u)));
    /* 0058002a: fld dword ptr [esi + 0xbc] */ FPUSH(R_F32((u32)(r_esi+0xbcu)));
    /* 00580030: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00580033: fld dword ptr [esi + 0xc0] */ FPUSH(R_F32((u32)(r_esi+0xc0u)));
    /* 00580039: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0058003b: fdivp st(3) */ ST(3) = ST(3) / ST(0); FPOP();
    /* 0058003d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0058003f: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00580041: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00580043: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00580045: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00580047: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 00580049: fstp dword ptr [esi + 0xb8] */ W_F32((u32)(r_esi+0xb8u), ST(0)); FPOP();
    /* 0058004f: fstp dword ptr [esi + 0xbc] */ W_F32((u32)(r_esi+0xbcu), ST(0)); FPOP();
    /* 00580055: fstp dword ptr [esi + 0xc0] */ W_F32((u32)(r_esi+0xc0u), ST(0)); FPOP();
    /* 0058005b: movzx ecx, word ptr [eax + 0x1c] */ r_ecx = (u32)R16((u32)(r_eax+0x1cu));
    /* 0058005f: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
    /* 00580066: mov word ptr [esi + 0xfc], cx */ W16((u32)(r_esi+0xfcu), (u16)r_ecx);
    /* 0058006d: fld dword ptr [edi] */ FPUSH(R_F32((u32)(r_edi)));
    /* 0058006f: fsub dword ptr [edx] */ ST(0) = ST(0) - R_F32((u32)(r_edx));
    /* 00580071: fld dword ptr [edi + 8] */ FPUSH(R_F32((u32)(r_edi+0x8u)));
    /* 00580074: fsub dword ptr [edx + 8] */ ST(0) = ST(0) - R_F32((u32)(r_edx+0x8u));
    /* 00580077: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 00580079: fmul qword ptr [0x927b70] */ ST(0) = ST(0) * R_F64((u32)(0x927b70u));
    /* 0058007f: fdiv qword ptr [0x927b68] */ ST(0) = ST(0) / R_F64((u32)(0x927b68u));
    /* 00580085: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00580088: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0058008b: fnstcw word ptr [ebp - 0x48] */ W16((u32)(r_ebp+0xffffffb8u), fcw);
    /* 0058008e: movzx eax, word ptr [ebp - 0x48] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffb8u));
    /* 00580092: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00580097: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0058009a: fldcw word ptr [ebp - 0x40] */ fcw = R16((u32)(r_ebp+0xffffffc0u));
    /* 0058009d: fistp dword ptr [ebp - 0x38] */ W32((u32)(r_ebp+0xffffffc8u), (u32)fx_int32(ST(0))); FPOP();
    /* 005800a0: fldcw word ptr [ebp - 0x48] */ fcw = R16((u32)(r_ebp+0xffffffb8u));
    /* 005800a3: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 005800a6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005800a7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005800a8: add eax, 0x4000 */ {  u32 a = r_eax; u32 b = 0x4000u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005800ad: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 005800b0: call 0x78ea6c */ r_esp -= 4; W32(r_esp, 0x5800b5u); f_0078ea6c();
    /* 005800b5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005800b8: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005800bb: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005800be: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 005800c1: fsub dword ptr [ecx + 4] */ ST(0) = ST(0) - R_F32((u32)(r_ecx+0x4u));
    /* 005800c4: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005800c6: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 005800c8: fmul qword ptr [0x927b70] */ ST(0) = ST(0) * R_F64((u32)(0x927b70u));
    /* 005800ce: fdiv qword ptr [0x927b68] */ ST(0) = ST(0) / R_F64((u32)(0x927b68u));
    /* 005800d4: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005800d7: fnstcw word ptr [ebp - 0x48] */ W16((u32)(r_ebp+0xffffffb8u), fcw);
    /* 005800da: movzx eax, word ptr [ebp - 0x48] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffb8u));
    /* 005800de: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005800e3: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 005800e6: fldcw word ptr [ebp - 0x40] */ fcw = R16((u32)(r_ebp+0xffffffc0u));
    /* 005800e9: fistp dword ptr [ebp - 0x38] */ W32((u32)(r_ebp+0xffffffc8u), (u32)fx_int32(ST(0))); FPOP();
    /* 005800ec: fldcw word ptr [ebp - 0x48] */ fcw = R16((u32)(r_ebp+0xffffffb8u));
    /* 005800ef: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 005800f2: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005800f4: add eax, 0x4000 */ {  u32 a = r_eax; u32 b = 0x4000u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005800f9: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 005800fc: lea edx, [ebp - 0x58] */ r_edx = (u32)(r_ebp+0xffffffa8u);
    /* 005800ff: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00580101: push 0xf5 */ { u32 v = 0xf5u; r_esp -= 4; W32(r_esp, v); }
    /* 00580106: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00580107: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00580108: call 0x509dc4 */ r_esp -= 4; W32(r_esp, 0x58010du); f_00509dc4();
    /* 0058010d: mov edx, eax */ r_edx = r_eax;
    /* 0058010f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00580112: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00580115: mov dword ptr [eax + 0xe0], edx */ W32((u32)(r_eax+0xe0u), r_edx);
    /* 0058011b: mov edx, dword ptr [eax + 0xf4] */ r_edx = R32((u32)(r_eax+0xf4u));
    /* 00580121: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00580123: jne 0x580131 */ if (!fZ) goto L_00580131;
L_00580125:; BB(0x00580125);
    /* 00580125: mov dword ptr [eax + 0xe4], 0 */ W32((u32)(r_eax+0xe4u), 0x0u);
    /* 0058012f: jmp 0x580191 */ goto L_00580191;
L_00580131:; BB(0x00580131);
    /* 00580131: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00580134: mov edx, dword ptr [eax + 0xac] */ r_edx = R32((u32)(r_eax+0xacu));
    /* 0058013a: mov esi, dword ptr [eax + 0xb0] */ r_esi = R32((u32)(r_eax+0xb0u));
    /* 00580140: mov edi, dword ptr [eax + 0xb4] */ r_edi = R32((u32)(r_eax+0xb4u));
    /* 00580146: mov dword ptr [eax + 0xe8], edx */ W32((u32)(r_eax+0xe8u), r_edx);
    /* 0058014c: mov dword ptr [eax + 0xec], esi */ W32((u32)(r_eax+0xecu), r_esi);
    /* 00580152: mov dword ptr [eax + 0xf0], edi */ W32((u32)(r_eax+0xf0u), r_edi);
    /* 00580158: lea eax, [ecx + 0xe8] */ r_eax = (u32)(r_ecx+0xe8u);
    /* 0058015e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058015f: call 0x57d0b8 */ r_esp -= 4; W32(r_esp, 0x580164u); f_0057d0b8();
    /* 00580164: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00580167: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00580169: push 0xf9 */ { u32 v = 0xf9u; r_esp -= 4; W32(r_esp, v); }
    /* 0058016e: add eax, 0xe8 */ {  u32 a = r_eax; u32 b = 0xe8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00580173: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00580174: call 0x50981c */ r_esp -= 4; W32(r_esp, 0x580179u); f_0050981c();
    /* 00580179: mov edx, eax */ r_edx = r_eax;
    /* 0058017b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0058017e: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00580181: mov dword ptr [eax + 0xf8], 0 */ W32((u32)(r_eax+0xf8u), 0x0u);
    /* 0058018b: mov dword ptr [eax + 0xe4], edx */ W32((u32)(r_eax+0xe4u), r_edx);
L_00580191:; BB(0x00580191);
    /* 00580191: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 00580194: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 00580197: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0058019a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005801a1: mov esp, ebp */ r_esp = r_ebp;
    /* 005801a3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005801a4: mov esp, ebx */ r_esp = r_ebx;
    /* 005801a6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005801a7: ret 0x10 */ FN_RET(0x0057ff44); r_esp += 20; return;
}

