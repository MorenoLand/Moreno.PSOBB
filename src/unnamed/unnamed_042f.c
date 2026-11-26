#include "protos.h"

void f_0042f6fc(void) /* sub_42F6FC */
{
    FN_ENTER(0x0042f6fc);
    /* 0042f6fc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0042f6fd: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0042f700: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0042f702: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0042f706: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042f709: je 0x42f912 */ if (fZ) goto L_0042f912;
L_0042f70f:; BB(0x0042f70f);
    /* 0042f70f: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042f712: je 0x42f734 */ if (fZ) goto L_0042f734;
L_0042f714:; BB(0x0042f714);
    /* 0042f714: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042f717: je 0x42f78b */ if (fZ) goto L_0042f78b;
L_0042f719:; BB(0x0042f719);
    /* 0042f719: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042f71c: je 0x42f73b */ if (fZ) goto L_0042f73b;
L_0042f71e:; BB(0x0042f71e);
    /* 0042f71e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042f720: jne 0x42f734 */ if (!fZ) goto L_0042f734;
L_0042f722:; BB(0x0042f722);
    /* 0042f722: fld dword ptr [ebx + 0x6ac] */ FPUSH(R_F32((u32)(r_ebx+0x6acu)));
    /* 0042f728: fsub dword ptr [0x8fcf1c] */ ST(0) = ST(0) - R_F32((u32)(0x8fcf1cu));
    /* 0042f72e: fstp dword ptr [ebx + 0x6ac] */ W_F32((u32)(r_ebx+0x6acu), ST(0)); FPOP();
L_0042f734:; BB(0x0042f734);
    /* 0042f734: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042f737: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042f738: ret 4 */ FN_RET(0x0042f6fc); r_esp += 8; return;
L_0042f73b:; BB(0x0042f73b);
    /* 0042f73b: fld dword ptr [ebx + 0x6ac] */ FPUSH(R_F32((u32)(r_ebx+0x6acu)));
    /* 0042f741: fcomp dword ptr [0x8fcf18] */ fx_compare(ST(0), R_F32((u32)(0x8fcf18u))); FPOP();
    /* 0042f747: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0042f749: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0042f74a: jae 0x42f734 */ if (!fC) goto L_0042f734;
L_0042f74c:; BB(0x0042f74c);
    /* 0042f74c: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0042f74e: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0042f750: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0042f752: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042f754: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x42f75au); call_ind(t); }
    /* 0042f75a: movzx eax, word ptr [ebx + 0x1c] */ r_eax = (u32)R16((u32)(r_ebx+0x1cu));
    /* 0042f75e: mov ebx, dword ptr [ebx + 0x3dc] */ r_ebx = R32((u32)(r_ebx+0x3dcu));
    /* 0042f764: mov byte ptr [esp], 0x13 */ W8((u32)(r_esp), 0x13u);
    /* 0042f768: mov edx, 0x1f */ r_edx = 0x1fu;
    /* 0042f76d: mov byte ptr [esp + 1], 2 */ W8((u32)(r_esp+0x1u), 0x2u);
    /* 0042f772: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 0042f777: mov word ptr [esp + 4], dx */ W16((u32)(r_esp+0x4u), (u16)r_edx);
    /* 0042f77c: mov word ptr [esp + 6], bx */ W16((u32)(r_esp+0x6u), (u16)r_ebx);
    /* 0042f781: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0042f784: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x42f789u); f_008003e0();
    /* 0042f789: jmp 0x42f734 */ goto L_0042f734;
L_0042f78b:; BB(0x0042f78b);
    /* 0042f78b: movsx eax, word ptr [ebx + 0xb8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0xb8u));
    /* 0042f792: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042f795: jne 0x42f734 */ if (!fZ) goto L_0042f734;
L_0042f797:; BB(0x0042f797);
    /* 0042f797: mov eax, dword ptr [ebx + 0x3dc] */ r_eax = R32((u32)(r_ebx+0x3dcu));
    /* 0042f79d: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0042f7a0: mov dword ptr [ebx + 0x3dc], eax */ W32((u32)(r_ebx+0x3dcu), r_eax);
    /* 0042f7a6: call 0x520e6c */ r_esp -= 4; W32(r_esp, 0x42f7abu); f_00520e6c();
    /* 0042f7ab: mov edx, dword ptr [ebx + 0x3dc] */ r_edx = R32((u32)(r_ebx+0x3dcu));
    /* 0042f7b1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042f7b3: je 0x42f7be */ if (fZ) goto L_0042f7be;
L_0042f7b5:; BB(0x0042f7b5);
    /* 0042f7b5: mov eax, dword ptr [edx*4 + 0x9a4440] */ r_eax = R32((u32)(r_edx*4+0x9a4440u));
    /* 0042f7bc: jmp 0x42f7c5 */ goto L_0042f7c5;
L_0042f7be:; BB(0x0042f7be);
    /* 0042f7be: mov eax, dword ptr [edx*4 + 0x9a4380] */ r_eax = R32((u32)(r_edx*4+0x9a4380u));
L_0042f7c5:; BB(0x0042f7c5);
    /* 0042f7c5: lea edx, [eax - 0x21] */ r_edx = (u32)(r_eax+0xffffffdfu);
    /* 0042f7c8: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0042f7cb: ja 0x42f905 */ if ((!fC&&!fZ)) goto L_0042f905;
L_0042f7d1:; BB(0x0042f7d1);
    /* 0042f7d1: mov edx, dword ptr [edx*4 + 0x8fc910] */ r_edx = R32((u32)(r_edx*4+0x8fc910u));
    /* 0042f7d8: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
L_0042f905:; BB(0x0042f905);
    /* 0042f905: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042f906: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042f908: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x42f90du); f_0042abf8();
    /* 0042f90d: jmp 0x42f734 */ goto L_0042f734;
L_0042f912:; BB(0x0042f912);
    /* 0042f912: mov eax, dword ptr [ebx + 0x3c8] */ r_eax = R32((u32)(r_ebx+0x3c8u));
    /* 0042f918: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0042f91a: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0042f91d: and eax, 0xfffffeff */ {  u32 a = r_eax; u32 b = 0xfffffeffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0042f922: mov dword ptr [ebx + 0x3c8], eax */ W32((u32)(r_ebx+0x3c8u), r_eax);
    /* 0042f928: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042f92a: call dword ptr [edx + 0x184] */ { u32 t = R32((u32)(r_edx+0x184u)); r_esp -= 4; W32(r_esp, 0x42f930u); call_ind(t); }
    /* 0042f930: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 0042f934: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0042f936: mov esi, eax */ r_esi = r_eax;
L_0042f938:; BB(0x0042f938);
    /* 0042f938: mov ecx, dword ptr [ebx + esi*4 + 0x5e8] */ r_ecx = R32((u32)(r_ebx+r_esi*4+0x5e8u));
    /* 0042f93f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0042f941: call dword ptr [edx + 0x184] */ { u32 t = R32((u32)(r_edx+0x184u)); r_esp -= 4; W32(r_esp, 0x42f947u); call_ind(t); }
    /* 0042f947: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0042f94a: cmp esi, 0xa */ {  u32 a = r_esi; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042f94d: jl 0x42f938 */ if ((fS!=fO)) goto L_0042f938;
L_0042f94f:; BB(0x0042f94f);
    /* 0042f94f: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 0042f953: mov dword ptr [ebx + 0x5c], 0 */ W32((u32)(r_ebx+0x5cu), 0x0u);
    /* 0042f95a: mov dword ptr [ebx + 0x6ac], 0 */ W32((u32)(r_ebx+0x6acu), 0x0u);
    /* 0042f964: jmp 0x42f734 */ goto L_0042f734;
}

void f_0042f7da(void)
{
    FN_ENTER(0x0042f7da);
    goto L_0042f7da;
L_0042f734:; BB(0x0042f734);
    /* 0042f734: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042f737: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042f738: ret 4 */ FN_RET(0x0042f7da); r_esp += 8; return;
L_0042f79d:; BB(0x0042f79d);
    /* 0042f79d: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0042f7a0: mov dword ptr [ebx + 0x3dc], eax */ W32((u32)(r_ebx+0x3dcu), r_eax);
    /* 0042f7a6: call 0x520e6c */ r_esp -= 4; W32(r_esp, 0x42f7abu); f_00520e6c();
    /* 0042f7ab: mov edx, dword ptr [ebx + 0x3dc] */ r_edx = R32((u32)(r_ebx+0x3dcu));
    /* 0042f7b1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042f7b3: je 0x42f7be */ if (fZ) goto L_0042f7be;
L_0042f7b5:; BB(0x0042f7b5);
    /* 0042f7b5: mov eax, dword ptr [edx*4 + 0x9a4440] */ r_eax = R32((u32)(r_edx*4+0x9a4440u));
    /* 0042f7bc: jmp 0x42f7c5 */ goto L_0042f7c5;
L_0042f7be:; BB(0x0042f7be);
    /* 0042f7be: mov eax, dword ptr [edx*4 + 0x9a4380] */ r_eax = R32((u32)(r_edx*4+0x9a4380u));
L_0042f7c5:; BB(0x0042f7c5);
    /* 0042f7c5: lea edx, [eax - 0x21] */ r_edx = (u32)(r_eax+0xffffffdfu);
    /* 0042f7c8: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0042f7cb: ja 0x42f905 */ if ((!fC&&!fZ)) goto L_0042f905;
L_0042f7d1:; BB(0x0042f7d1);
    /* 0042f7d1: mov edx, dword ptr [edx*4 + 0x8fc910] */ r_edx = R32((u32)(r_edx*4+0x8fc910u));
    /* 0042f7d8: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
L_0042f7da:; BB(0x0042f7da);
    /* 0042f7da: mov eax, 5 */ r_eax = 0x5u;
    /* 0042f7df: jmp 0x42f79d */ goto L_0042f79d;
L_0042f905:; BB(0x0042f905);
    /* 0042f905: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042f906: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042f908: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x42f90du); f_0042abf8();
    /* 0042f90d: jmp 0x42f734 */ goto L_0042f734;
}

void f_0042f7e1(void)
{
    FN_ENTER(0x0042f7e1);
    goto L_0042f7e1;
L_0042f734:; BB(0x0042f734);
    /* 0042f734: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042f737: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042f738: ret 4 */ FN_RET(0x0042f7e1); r_esp += 8; return;
L_0042f7e1:; BB(0x0042f7e1);
    /* 0042f7e1: mov eax, dword ptr [ebx + 0x660] */ r_eax = R32((u32)(r_ebx+0x660u));
    /* 0042f7e7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042f7e9: jne 0x42f7f5 */ if (!fZ) goto L_0042f7f5;
L_0042f7eb:; BB(0x0042f7eb);
    /* 0042f7eb: mov eax, 0x16 */ r_eax = 0x16u;
    /* 0042f7f0: jmp 0x42f905 */ goto L_0042f905;
L_0042f7f5:; BB(0x0042f7f5);
    /* 0042f7f5: mov eax, 0x17 */ r_eax = 0x17u;
    /* 0042f7fa: jmp 0x42f905 */ goto L_0042f905;
L_0042f905:; BB(0x0042f905);
    /* 0042f905: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042f906: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042f908: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x42f90du); f_0042abf8();
    /* 0042f90d: jmp 0x42f734 */ goto L_0042f734;
}

void f_0042f7ff(void)
{
    FN_ENTER(0x0042f7ff);
    goto L_0042f7ff;
L_0042f734:; BB(0x0042f734);
    /* 0042f734: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042f737: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042f738: ret 4 */ FN_RET(0x0042f7ff); r_esp += 8; return;
L_0042f7ff:; BB(0x0042f7ff);
    /* 0042f7ff: mov eax, dword ptr [ebx + 0x660] */ r_eax = R32((u32)(r_ebx+0x660u));
    /* 0042f805: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042f807: jne 0x42f813 */ if (!fZ) goto L_0042f813;
L_0042f809:; BB(0x0042f809);
    /* 0042f809: mov eax, 0x14 */ r_eax = 0x14u;
    /* 0042f80e: jmp 0x42f905 */ goto L_0042f905;
L_0042f813:; BB(0x0042f813);
    /* 0042f813: mov eax, 0x15 */ r_eax = 0x15u;
    /* 0042f818: jmp 0x42f905 */ goto L_0042f905;
L_0042f905:; BB(0x0042f905);
    /* 0042f905: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042f906: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042f908: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x42f90du); f_0042abf8();
    /* 0042f90d: jmp 0x42f734 */ goto L_0042f734;
}

void f_0042f81d(void)
{
    FN_ENTER(0x0042f81d);
    goto L_0042f81d;
L_0042f734:; BB(0x0042f734);
    /* 0042f734: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042f737: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042f738: ret 4 */ FN_RET(0x0042f81d); r_esp += 8; return;
L_0042f81d:; BB(0x0042f81d);
    /* 0042f81d: mov eax, dword ptr [ebx + 0x660] */ r_eax = R32((u32)(r_ebx+0x660u));
    /* 0042f823: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042f825: jne 0x42f831 */ if (!fZ) goto L_0042f831;
L_0042f827:; BB(0x0042f827);
    /* 0042f827: mov eax, 0x12 */ r_eax = 0x12u;
    /* 0042f82c: jmp 0x42f905 */ goto L_0042f905;
L_0042f831:; BB(0x0042f831);
    /* 0042f831: mov eax, 0x13 */ r_eax = 0x13u;
    /* 0042f836: jmp 0x42f905 */ goto L_0042f905;
L_0042f905:; BB(0x0042f905);
    /* 0042f905: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042f906: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042f908: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x42f90du); f_0042abf8();
    /* 0042f90d: jmp 0x42f734 */ goto L_0042f734;
}

void f_0042f83b(void)
{
    FN_ENTER(0x0042f83b);
    goto L_0042f83b;
L_0042f734:; BB(0x0042f734);
    /* 0042f734: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042f737: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042f738: ret 4 */ FN_RET(0x0042f83b); r_esp += 8; return;
L_0042f83b:; BB(0x0042f83b);
    /* 0042f83b: mov eax, dword ptr [ebx + 0x660] */ r_eax = R32((u32)(r_ebx+0x660u));
    /* 0042f841: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042f843: jne 0x42f84f */ if (!fZ) goto L_0042f84f;
L_0042f845:; BB(0x0042f845);
    /* 0042f845: mov eax, 0x10 */ r_eax = 0x10u;
    /* 0042f84a: jmp 0x42f905 */ goto L_0042f905;
L_0042f84f:; BB(0x0042f84f);
    /* 0042f84f: mov eax, 0x11 */ r_eax = 0x11u;
    /* 0042f854: jmp 0x42f905 */ goto L_0042f905;
L_0042f905:; BB(0x0042f905);
    /* 0042f905: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042f906: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042f908: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x42f90du); f_0042abf8();
    /* 0042f90d: jmp 0x42f734 */ goto L_0042f734;
}

void f_0042f859(void)
{
    FN_ENTER(0x0042f859);
    goto L_0042f859;
L_0042f734:; BB(0x0042f734);
    /* 0042f734: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042f737: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042f738: ret 4 */ FN_RET(0x0042f859); r_esp += 8; return;
L_0042f859:; BB(0x0042f859);
    /* 0042f859: mov eax, dword ptr [ebx + 0x660] */ r_eax = R32((u32)(r_ebx+0x660u));
    /* 0042f85f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042f861: jne 0x42f86d */ if (!fZ) goto L_0042f86d;
L_0042f863:; BB(0x0042f863);
    /* 0042f863: mov eax, 4 */ r_eax = 0x4u;
    /* 0042f868: jmp 0x42f905 */ goto L_0042f905;
L_0042f86d:; BB(0x0042f86d);
    /* 0042f86d: mov eax, 0xa */ r_eax = 0xau;
    /* 0042f872: jmp 0x42f905 */ goto L_0042f905;
L_0042f905:; BB(0x0042f905);
    /* 0042f905: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042f906: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042f908: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x42f90du); f_0042abf8();
    /* 0042f90d: jmp 0x42f734 */ goto L_0042f734;
}

void f_0042f877(void)
{
    FN_ENTER(0x0042f877);
    goto L_0042f877;
L_0042f734:; BB(0x0042f734);
    /* 0042f734: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042f737: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042f738: ret 4 */ FN_RET(0x0042f877); r_esp += 8; return;
L_0042f877:; BB(0x0042f877);
    /* 0042f877: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042f879: call 0x520bf4 */ r_esp -= 4; W32(r_esp, 0x42f87eu); f_00520bf4();
    /* 0042f87e: fcomp dword ptr [0x8fcf20] */ fx_compare(ST(0), R_F32((u32)(0x8fcf20u))); FPOP();
    /* 0042f884: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0042f886: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0042f887: jbe 0x42f890 */ if ((fC||fZ)) goto L_0042f890;
L_0042f889:; BB(0x0042f889);
    /* 0042f889: mov eax, 0x18 */ r_eax = 0x18u;
    /* 0042f88e: jmp 0x42f905 */ goto L_0042f905;
L_0042f890:; BB(0x0042f890);
    /* 0042f890: mov eax, 0x19 */ r_eax = 0x19u;
    /* 0042f895: jmp 0x42f905 */ goto L_0042f905;
L_0042f905:; BB(0x0042f905);
    /* 0042f905: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042f906: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042f908: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x42f90du); f_0042abf8();
    /* 0042f90d: jmp 0x42f734 */ goto L_0042f734;
}

void f_0042f897(void)
{
    FN_ENTER(0x0042f897);
    goto L_0042f897;
L_0042f734:; BB(0x0042f734);
    /* 0042f734: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042f737: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042f738: ret 4 */ FN_RET(0x0042f897); r_esp += 8; return;
L_0042f897:; BB(0x0042f897);
    /* 0042f897: mov eax, dword ptr [ebx + 0x660] */ r_eax = R32((u32)(r_ebx+0x660u));
    /* 0042f89d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042f89f: jne 0x42f8a8 */ if (!fZ) goto L_0042f8a8;
L_0042f8a1:; BB(0x0042f8a1);
    /* 0042f8a1: mov eax, 3 */ r_eax = 0x3u;
    /* 0042f8a6: jmp 0x42f905 */ goto L_0042f905;
L_0042f8a8:; BB(0x0042f8a8);
    /* 0042f8a8: mov eax, 0xb */ r_eax = 0xbu;
    /* 0042f8ad: jmp 0x42f905 */ goto L_0042f905;
L_0042f905:; BB(0x0042f905);
    /* 0042f905: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042f906: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042f908: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x42f90du); f_0042abf8();
    /* 0042f90d: jmp 0x42f734 */ goto L_0042f734;
}

void f_0042f8af(void)
{
    FN_ENTER(0x0042f8af);
    goto L_0042f8af;
L_0042f734:; BB(0x0042f734);
    /* 0042f734: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042f737: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042f738: ret 4 */ FN_RET(0x0042f8af); r_esp += 8; return;
L_0042f8af:; BB(0x0042f8af);
    /* 0042f8af: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042f8b1: call 0x520bf4 */ r_esp -= 4; W32(r_esp, 0x42f8b6u); f_00520bf4();
    /* 0042f8b6: fcomp dword ptr [0x8fcf20] */ fx_compare(ST(0), R_F32((u32)(0x8fcf20u))); FPOP();
    /* 0042f8bc: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0042f8be: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0042f8bf: jbe 0x42f8c8 */ if ((fC||fZ)) goto L_0042f8c8;
L_0042f8c1:; BB(0x0042f8c1);
    /* 0042f8c1: mov eax, 0xc */ r_eax = 0xcu;
    /* 0042f8c6: jmp 0x42f905 */ goto L_0042f905;
L_0042f8c8:; BB(0x0042f8c8);
    /* 0042f8c8: mov eax, 0xe */ r_eax = 0xeu;
    /* 0042f8cd: jmp 0x42f905 */ goto L_0042f905;
L_0042f905:; BB(0x0042f905);
    /* 0042f905: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042f906: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042f908: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x42f90du); f_0042abf8();
    /* 0042f90d: jmp 0x42f734 */ goto L_0042f734;
}

void f_0042f8cf(void)
{
    FN_ENTER(0x0042f8cf);
    goto L_0042f8cf;
L_0042f734:; BB(0x0042f734);
    /* 0042f734: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042f737: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042f738: ret 4 */ FN_RET(0x0042f8cf); r_esp += 8; return;
L_0042f8cf:; BB(0x0042f8cf);
    /* 0042f8cf: mov eax, dword ptr [ebx + 0x660] */ r_eax = R32((u32)(r_ebx+0x660u));
    /* 0042f8d5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042f8d7: jne 0x42f8e0 */ if (!fZ) goto L_0042f8e0;
L_0042f8d9:; BB(0x0042f8d9);
    /* 0042f8d9: mov eax, 5 */ r_eax = 0x5u;
    /* 0042f8de: jmp 0x42f905 */ goto L_0042f905;
L_0042f8e0:; BB(0x0042f8e0);
    /* 0042f8e0: mov eax, 9 */ r_eax = 0x9u;
    /* 0042f8e5: jmp 0x42f905 */ goto L_0042f905;
L_0042f905:; BB(0x0042f905);
    /* 0042f905: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042f906: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042f908: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x42f90du); f_0042abf8();
    /* 0042f90d: jmp 0x42f734 */ goto L_0042f734;
}

void f_0042f8e7(void)
{
    FN_ENTER(0x0042f8e7);
    goto L_0042f8e7;
L_0042f734:; BB(0x0042f734);
    /* 0042f734: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042f737: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042f738: ret 4 */ FN_RET(0x0042f8e7); r_esp += 8; return;
L_0042f8e7:; BB(0x0042f8e7);
    /* 0042f8e7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042f8e9: call 0x520bf4 */ r_esp -= 4; W32(r_esp, 0x42f8eeu); f_00520bf4();
    /* 0042f8ee: fcomp dword ptr [0x8fcf20] */ fx_compare(ST(0), R_F32((u32)(0x8fcf20u))); FPOP();
    /* 0042f8f4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0042f8f6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0042f8f7: jbe 0x42f900 */ if ((fC||fZ)) goto L_0042f900;
L_0042f8f9:; BB(0x0042f8f9);
    /* 0042f8f9: mov eax, 8 */ r_eax = 0x8u;
    /* 0042f8fe: jmp 0x42f905 */ goto L_0042f905;
L_0042f900:; BB(0x0042f900);
    /* 0042f900: mov eax, 6 */ r_eax = 0x6u;
L_0042f905:; BB(0x0042f905);
    /* 0042f905: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042f906: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042f908: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x42f90du); f_0042abf8();
    /* 0042f90d: jmp 0x42f734 */ goto L_0042f734;
}

void f_0042f905(void)
{
    FN_ENTER(0x0042f905);
    goto L_0042f905;
L_0042f734:; BB(0x0042f734);
    /* 0042f734: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042f737: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042f738: ret 4 */ FN_RET(0x0042f905); r_esp += 8; return;
L_0042f905:; BB(0x0042f905);
    /* 0042f905: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042f906: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042f908: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x42f90du); f_0042abf8();
    /* 0042f90d: jmp 0x42f734 */ goto L_0042f734;
}

void f_0042f96c(void) /* sub_42F96C */
{
    FN_ENTER(0x0042f96c);
    /* 0042f96c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0042f96d: mov ebp, esp */ r_ebp = r_esp;
    /* 0042f96f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0042f971: push 0x8cddee */ { u32 v = 0x8cddeeu; r_esp -= 4; W32(r_esp, v); }
    /* 0042f976: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0042f97c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042f97d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0042f984: sub esp, 0xbc */ {  u32 a = r_esp; u32 b = 0xbcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0042f98a: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0042f98d: mov dword ptr [ebp - 0x34], edi */ W32((u32)(r_ebp+0xffffffccu), r_edi);
    /* 0042f990: mov dword ptr [ebp - 0x30], esi */ W32((u32)(r_ebp+0xffffffd0u), r_esi);
    /* 0042f993: mov dword ptr [ebp - 0x2c], ebx */ W32((u32)(r_ebp+0xffffffd4u), r_ebx);
    /* 0042f996: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0042f999: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0042f99c: lea esi, [ecx + 0x72c] */ r_esi = (u32)(r_ecx+0x72cu);
    /* 0042f9a2: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042f9a5: je 0x4305b9 */ if (fZ) goto L_004305b9;
L_0042f9ab:; BB(0x0042f9ab);
    /* 0042f9ab: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042f9ae: je 0x430515 */ if (fZ) goto L_00430515;
L_0042f9b4:; BB(0x0042f9b4);
    /* 0042f9b4: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042f9b7: je 0x430367 */ if (fZ) goto L_00430367;
L_0042f9bd:; BB(0x0042f9bd);
    /* 0042f9bd: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0042f9c0: je 0x42ffc5 */ if (fZ) goto L_0042ffc5;
L_0042f9c6:; BB(0x0042f9c6);
    /* 0042f9c6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042f9c8: je 0x42faf4 */ if (fZ) goto L_0042faf4;
L_0042f9ce:; BB(0x0042f9ce);
    /* 0042f9ce: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042f9d1: jne 0x42fa61 */ if (!fZ) goto L_0042fa61;
L_0042f9d7:; BB(0x0042f9d7);
    /* 0042f9d7: mov edi, dword ptr [0xaae168] */ r_edi = R32((u32)(0xaae168u));
    /* 0042f9dd: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042f9df: je 0x42fa57 */ if (fZ) goto L_0042fa57;
L_0042f9e1:; BB(0x0042f9e1);
    /* 0042f9e1: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042f9e4: je 0x42ffde */ if (fZ) goto L_0042ffde;
L_0042f9ea:; BB(0x0042f9ea);
    /* 0042f9ea: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x42f9efu); f_007751b0();
    /* 0042f9ef: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0042f9f2: mov dword ptr [ebp - 0x44], edi */ W32((u32)(r_ebp+0xffffffbcu), r_edi);
    /* 0042f9f5: fild dword ptr [ebp - 0x44] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffbcu)));
    /* 0042f9f8: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0042f9fa: fnstcw word ptr [ebp - 0x54] */ W16((u32)(r_ebp+0xffffffacu), fcw);
    /* 0042f9fd: movzx eax, word ptr [ebp - 0x54] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffacu));
    /* 0042fa01: and eax, 0xfffff3ff */ {  u32 a = r_eax; u32 b = 0xfffff3ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0042fa06: or eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0042fa0b: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 0042fa0e: fldcw word ptr [ebp - 0x4c] */ fcw = R16((u32)(r_ebp+0xffffffb4u));
    /* 0042fa11: fistp dword ptr [ebp - 0x3c] */ W32((u32)(r_ebp+0xffffffc4u), (u32)fx_int32(ST(0))); FPOP();
    /* 0042fa14: fldcw word ptr [ebp - 0x54] */ fcw = R16((u32)(r_ebp+0xffffffacu));
    /* 0042fa17: mov esi, dword ptr [ebp - 0x3c] */ r_esi = R32((u32)(r_ebp+0xffffffc4u));
    /* 0042fa1a: call 0x520f68 */ r_esp -= 4; W32(r_esp, 0x42fa1fu); f_00520f68();
    /* 0042fa1f: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0042fa21: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0042fa23: jle 0x42ffc5 */ if ((fZ||fS!=fO)) goto L_0042ffc5;
L_0042fa29:; BB(0x0042fa29);
    /* 0042fa29: mov eax, dword ptr [esi*4 + 0xaad720] */ r_eax = R32((u32)(r_esi*4+0xaad720u));
    /* 0042fa30: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0042fa33: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042fa34: call 0x520f3c */ r_esp -= 4; W32(r_esp, 0x42fa39u); f_00520f3c();
    /* 0042fa39: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0042fa3a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042fa3c: jne 0x430356 */ if (!fZ) goto L_00430356;
L_0042fa42:; BB(0x0042fa42);
    /* 0042fa42: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0042fa45: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042fa47: jl 0x42fa4b */ if ((fS!=fO)) goto L_0042fa4b;
L_0042fa49:; BB(0x0042fa49);
    /* 0042fa49: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_0042fa4b:; BB(0x0042fa4b);
    /* 0042fa4b: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0042fa4e: cmp ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0042fa50: jl 0x42fa29 */ if ((fS!=fO)) goto L_0042fa29;
L_0042fa52:; BB(0x0042fa52);
    /* 0042fa52: jmp 0x42ffc5 */ goto L_0042ffc5;
L_0042fa57:; BB(0x0042fa57);
    /* 0042fa57: call 0x520f68 */ r_esp -= 4; W32(r_esp, 0x42fa5cu); f_00520f68();
    /* 0042fa5c: jmp 0x42ffc5 */ goto L_0042ffc5;
L_0042fa61:; BB(0x0042fa61);
    /* 0042fa61: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0042fa64: jne 0x42ffc5 */ if (!fZ) goto L_0042ffc5;
L_0042fa6a:; BB(0x0042fa6a);
    /* 0042fa6a: add dword ptr [ecx + 0x6e4], 1 */ { u32 ad = (u32)(r_ecx+0x6e4u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0042fa71: call 0x430690 */ r_esp -= 4; W32(r_esp, 0x42fa76u); f_00430690();
    /* 0042fa76: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0042fa79: mov edx, dword ptr [eax + 0x744] */ r_edx = R32((u32)(r_eax+0x744u));
    /* 0042fa7f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042fa81: je 0x42fa9d */ if (fZ) goto L_0042fa9d;
L_0042fa83:; BB(0x0042fa83);
    /* 0042fa83: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0042fa87: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0042fa8c: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0042fa90: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0042fa93: mov dword ptr [edx + 0x744], 0 */ W32((u32)(r_edx+0x744u), 0x0u);
L_0042fa9d:; BB(0x0042fa9d);
    /* 0042fa9d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0042faa0: mov edx, dword ptr [eax + 0x6d4] */ r_edx = R32((u32)(r_eax+0x6d4u));
    /* 0042faa6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042faa8: je 0x42fac4 */ if (fZ) goto L_0042fac4;
L_0042faaa:; BB(0x0042faaa);
    /* 0042faaa: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0042faae: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0042fab3: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0042fab7: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0042faba: mov dword ptr [edx + 0x6d4], 0 */ W32((u32)(r_edx+0x6d4u), 0x0u);
L_0042fac4:; BB(0x0042fac4);
    /* 0042fac4: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0042fac7: mov edx, dword ptr [eax + 0x6d8] */ r_edx = R32((u32)(r_eax+0x6d8u));
    /* 0042facd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0042facf: je 0x42ffc5 */ if (fZ) goto L_0042ffc5;
L_0042fad5:; BB(0x0042fad5);
    /* 0042fad5: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0042fad9: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0042fade: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0042fae2: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0042fae5: mov dword ptr [edx + 0x6d8], 0 */ W32((u32)(r_edx+0x6d8u), 0x0u);
    /* 0042faef: jmp 0x42ffc5 */ goto L_0042ffc5;
L_0042faf4:; BB(0x0042faf4);
    /* 0042faf4: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x42faf9u); f_007aa094();
    /* 0042faf9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0042fafc: mov dword ptr [eax + 0x760], 6 */ W32((u32)(r_eax+0x760u), 0x6u);
    /* 0042fb06: mov eax, dword ptr [eax + 0x6e8] */ r_eax = R32((u32)(r_eax+0x6e8u));
    /* 0042fb0c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042fb0e: je 0x43026b */ if (fZ) goto L_0043026b;
L_0042fb14:; BB(0x0042fb14);
    /* 0042fb14: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042fb17: je 0x42fe32 */ if (fZ) goto L_0042fe32;
L_0042fb1d:; BB(0x0042fb1d);
    /* 0042fb1d: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042fb20: jne 0x42fde2 */ if (!fZ) goto L_0042fde2;
L_0042fb26:; BB(0x0042fb26);
    /* 0042fb26: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0042fb29: fld dword ptr [0x8fcf08] */ FPUSH(R_F32((u32)(0x8fcf08u)));
    /* 0042fb2f: fadd dword ptr [eax + 0x704] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x704u));
    /* 0042fb35: mov edx, dword ptr [eax + 0x744] */ r_edx = R32((u32)(r_eax+0x744u));
    /* 0042fb3b: fstp dword ptr [eax + 0x704] */ W_F32((u32)(r_eax+0x704u), ST(0)); FPOP();
    /* 0042fb41: mov dword ptr [eax + 0xc0], 0x41500000 */ W32((u32)(r_eax+0xc0u), 0x41500000u);
    /* 0042fb4b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042fb4d: je 0x430205 */ if (fZ) goto L_00430205;
L_0042fb53:; BB(0x0042fb53);
    /* 0042fb53: mov ecx, eax */ r_ecx = r_eax;
    /* 0042fb55: fld dword ptr [0x8fcf04] */ FPUSH(R_F32((u32)(0x8fcf04u)));
    /* 0042fb5b: lea edi, [ebp - 0xc8] */ r_edi = (u32)(r_ebp+0xffffff38u);
    /* 0042fb61: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0042fb62: mov edx, dword ptr [ecx + 0x4f4] */ r_edx = R32((u32)(r_ecx+0x4f4u));
    /* 0042fb68: mov esi, dword ptr [ecx + 0x4f8] */ r_esi = R32((u32)(r_ecx+0x4f8u));
    /* 0042fb6e: mov dword ptr [ebp - 0xc4], edx */ W32((u32)(r_ebp+0xffffff3cu), r_edx);
    /* 0042fb74: mov dword ptr [ebp - 0xc0], esi */ W32((u32)(r_ebp+0xffffff40u), r_esi);
    /* 0042fb7a: lea ebx, [ecx + 0x4f0] */ r_ebx = (u32)(r_ecx+0x4f0u);
    /* 0042fb80: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0042fb82: mov dword ptr [ebp - 0xc8], eax */ W32((u32)(r_ebp+0xffffff38u), r_eax);
    /* 0042fb88: fld dword ptr [ecx + 0x4fc] */ FPUSH(R_F32((u32)(r_ecx+0x4fcu)));
    /* 0042fb8e: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0042fb90: fmul dword ptr [0x8fcf14] */ ST(0) = ST(0) * R_F32((u32)(0x8fcf14u));
    /* 0042fb96: fadd dword ptr [ebp - 0xc8] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xffffff38u));
    /* 0042fb9c: fstp dword ptr [ebp - 0xc8] */ W_F32((u32)(r_ebp+0xffffff38u), ST(0)); FPOP();
    /* 0042fba2: fld dword ptr [ecx + 0x500] */ FPUSH(R_F32((u32)(r_ecx+0x500u)));
    /* 0042fba8: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0042fbaa: fadd dword ptr [ebp - 0xc4] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xffffff3cu));
    /* 0042fbb0: fstp dword ptr [ebp - 0xc4] */ W_F32((u32)(r_ebp+0xffffff3cu), ST(0)); FPOP();
    /* 0042fbb6: fld dword ptr [ecx + 0x504] */ FPUSH(R_F32((u32)(r_ecx+0x504u)));
    /* 0042fbbc: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0042fbbe: fadd dword ptr [ebp - 0xc0] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xffffff40u));
    /* 0042fbc4: fstp dword ptr [ebp - 0xc0] */ W_F32((u32)(r_ebp+0xffffff40u), ST(0)); FPOP();
    /* 0042fbca: mov ecx, dword ptr [ecx + 0x744] */ r_ecx = R32((u32)(r_ecx+0x744u));
    /* 0042fbd0: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x42fbd5u); f_00508db8();
L_0042fbd5:; BB(0x0042fbd5);
    /* 0042fbd5: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 0042fbd8: fld dword ptr [0x8fcc10] */ FPUSH(R_F32((u32)(0x8fcc10u)));
    /* 0042fbde: lea ecx, [ebp - 0xbc] */ r_ecx = (u32)(r_ebp+0xffffff44u);
    /* 0042fbe4: fld dword ptr [esi + 0x4f4] */ FPUSH(R_F32((u32)(r_esi+0x4f4u)));
    /* 0042fbea: fsub st(1), st(0) */ ST(1) = ST(1) - ST(0);
    /* 0042fbec: fsubr dword ptr [0x8fcf00] */ ST(0) = R_F32((u32)(0x8fcf00u)) - ST(0);
    /* 0042fbf2: fld dword ptr [esi + 0x704] */ FPUSH(R_F32((u32)(r_esi+0x704u)));
    /* 0042fbf8: fld dword ptr [esi + 0x72c] */ FPUSH(R_F32((u32)(r_esi+0x72cu)));
    /* 0042fbfe: fld dword ptr [esi + 0x734] */ FPUSH(R_F32((u32)(r_esi+0x734u)));
    /* 0042fc04: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0042fc06: fdiv st(4) */ ST(0) = ST(0) / ST(4);
    /* 0042fc08: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0042fc0a: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0042fc0c: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0042fc0e: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 0042fc10: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0042fc12: fst dword ptr [ebp - 0x1c] */ W_F32((u32)(r_ebp+0xffffffe4u), ST(0));
    /* 0042fc15: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0042fc17: fst dword ptr [ebp - 0x28] */ W_F32((u32)(r_ebp+0xffffffd8u), ST(0));
    /* 0042fc1a: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0042fc1c: fst dword ptr [ebp - 0x24] */ W_F32((u32)(r_ebp+0xffffffdcu), ST(0));
    /* 0042fc1f: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0042fc21: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0042fc23: fstp dword ptr [ebp - 0xbc] */ W_F32((u32)(r_ebp+0xffffff44u), ST(0)); FPOP();
    /* 0042fc29: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0042fc2b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0042fc2d: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0042fc2f: fstp dword ptr [ebp - 0xb8] */ W_F32((u32)(r_ebp+0xffffff48u), ST(0)); FPOP();
    /* 0042fc35: fstp dword ptr [ebp - 0xb4] */ W_F32((u32)(r_ebp+0xffffff4cu), ST(0)); FPOP();
    /* 0042fc3b: lea eax, [esi + 0x738] */ r_eax = (u32)(r_esi+0x738u);
    /* 0042fc41: mov edx, ebx */ r_edx = r_ebx;
    /* 0042fc43: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0042fc46: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x42fc4bu); f_0082ebac();
    /* 0042fc4b: fld dword ptr [ebp - 0x28] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd8u)));
    /* 0042fc4e: mov eax, esi */ r_eax = r_esi;
    /* 0042fc50: fld dword ptr [ebp - 0x1c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe4u)));
    /* 0042fc53: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 0042fc56: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0042fc59: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0042fc5b: fstp dword ptr [eax + 0x738] */ W_F32((u32)(r_eax+0x738u), ST(0)); FPOP();
    /* 0042fc61: fstp dword ptr [eax + 0x73c] */ W_F32((u32)(r_eax+0x73cu), ST(0)); FPOP();
    /* 0042fc67: fstp dword ptr [eax + 0x740] */ W_F32((u32)(r_eax+0x740u), ST(0)); FPOP();
    /* 0042fc6d: mov edx, ebx */ r_edx = r_ebx;
    /* 0042fc6f: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x42fc74u); f_0082ebac();
    /* 0042fc74: fld dword ptr [0x8fcf04] */ FPUSH(R_F32((u32)(0x8fcf04u)));
    /* 0042fc7a: mov edx, esi */ r_edx = r_esi;
    /* 0042fc7c: fadd dword ptr [edx + 0x708] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x708u));
    /* 0042fc82: fld dword ptr [0x8fcefc] */ FPUSH(R_F32((u32)(0x8fcefcu)));
    /* 0042fc88: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0042fc8a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0042fc8c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0042fc8e: fstp dword ptr [ebp - 0x24] */ W_F32((u32)(r_ebp+0xffffffdcu), ST(0)); FPOP();
    /* 0042fc91: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0042fc92: ja 0x42fca6 */ if ((!fC&&!fZ)) goto L_0042fca6;
L_0042fc94:; BB(0x0042fc94);
    /* 0042fc94: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 0042fc97: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 0042fc99: mov eax, edx */ r_eax = r_edx;
    /* 0042fc9b: fst dword ptr [eax + 0x708] */ W_F32((u32)(r_eax+0x708u), ST(0));
    /* 0042fca1: fstp dword ptr [ebp - 0x24] */ W_F32((u32)(r_ebp+0xffffffdcu), ST(0)); FPOP();
    /* 0042fca4: jmp 0x42fcb3 */ goto L_0042fcb3;
L_0042fca6:; BB(0x0042fca6);
    /* 0042fca6: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0042fca8: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 0042fcab: mov eax, edx */ r_eax = r_edx;
    /* 0042fcad: fstp dword ptr [eax + 0x708] */ W_F32((u32)(r_eax+0x708u), ST(0)); FPOP();
L_0042fcb3:; BB(0x0042fcb3);
    /* 0042fcb3: mov eax, dword ptr [edx + 0x4f0] */ r_eax = R32((u32)(r_edx+0x4f0u));
    /* 0042fcb9: mov ebx, dword ptr [edx + 0x4f4] */ r_ebx = R32((u32)(r_edx+0x4f4u));
    /* 0042fcbf: mov esi, dword ptr [edx + 0x4f8] */ r_esi = R32((u32)(r_edx+0x4f8u));
    /* 0042fcc5: mov dword ptr [ebp - 0xb0], eax */ W32((u32)(r_ebp+0xffffff50u), r_eax);
    /* 0042fccb: mov dword ptr [ebp - 0xac], ebx */ W32((u32)(r_ebp+0xffffff54u), r_ebx);
    /* 0042fcd1: mov dword ptr [ebp - 0xa8], esi */ W32((u32)(r_ebp+0xffffff58u), r_esi);
    /* 0042fcd7: mov edi, dword ptr [edx + 0x738] */ r_edi = R32((u32)(r_edx+0x738u));
    /* 0042fcdd: mov dword ptr [ebp - 0xa4], edi */ W32((u32)(r_ebp+0xffffff5cu), r_edi);
    /* 0042fce3: mov ecx, dword ptr [edx + 0x73c] */ r_ecx = R32((u32)(r_edx+0x73cu));
    /* 0042fce9: mov dword ptr [ebp - 0xa0], ecx */ W32((u32)(r_ebp+0xffffff60u), r_ecx);
    /* 0042fcef: mov eax, dword ptr [edx + 0x740] */ r_eax = R32((u32)(r_edx+0x740u));
    /* 0042fcf5: mov dword ptr [ebp - 0x9c], eax */ W32((u32)(r_ebp+0xffffff64u), r_eax);
    /* 0042fcfb: lea ecx, [ebp - 0xa4] */ r_ecx = (u32)(r_ebp+0xffffff5cu);
    /* 0042fd01: lea edx, [ebp - 0xb0] */ r_edx = (u32)(r_ebp+0xffffff50u);
    /* 0042fd07: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x42fd0cu); f_0082f9c4();
    /* 0042fd0c: lea eax, [ebp - 0xa4] */ r_eax = (u32)(r_ebp+0xffffff5cu);
    /* 0042fd12: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042fd13: call 0x782868 */ r_esp -= 4; W32(r_esp, 0x42fd18u); f_00782868();
    /* 0042fd18: fstp dword ptr [ebp - 0x1c] */ W_F32((u32)(r_ebp+0xffffffe4u), ST(0)); FPOP();
    /* 0042fd1b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042fd1e: fld dword ptr [ebp - 0xa4] */ FPUSH(R_F32((u32)(r_ebp+0xffffff5cu)));
    /* 0042fd24: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 0042fd27: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 0042fd2a: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0042fd2c: fadd dword ptr [ebp - 0xb0] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xffffff50u));
    /* 0042fd32: fld dword ptr [ebp - 0xa0] */ FPUSH(R_F32((u32)(r_ebp+0xffffff60u)));
    /* 0042fd38: fld dword ptr [ebp - 0x9c] */ FPUSH(R_F32((u32)(r_ebp+0xffffff64u)));
    /* 0042fd3e: fld dword ptr [0x8fcefc] */ FPUSH(R_F32((u32)(0x8fcefcu)));
    /* 0042fd44: fmul st(5), st(0) */ ST(5) = ST(5) * ST(0);
    /* 0042fd46: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0042fd48: fstp dword ptr [ebp - 0xb0] */ W_F32((u32)(r_ebp+0xffffff50u), ST(0)); FPOP();
    /* 0042fd4e: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0042fd50: fstp dword ptr [ebp - 0xa4] */ W_F32((u32)(r_ebp+0xffffff5cu), ST(0)); FPOP();
    /* 0042fd56: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 0042fd59: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0042fd5b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0042fd5d: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0042fd5f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0042fd61: fadd dword ptr [ebp - 0xac] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xffffff54u));
    /* 0042fd67: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0042fd69: fstp dword ptr [ebp - 0xa0] */ W_F32((u32)(r_ebp+0xffffff60u), ST(0)); FPOP();
    /* 0042fd6f: fstp dword ptr [ebp - 0xac] */ W_F32((u32)(r_ebp+0xffffff54u), ST(0)); FPOP();
    /* 0042fd75: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 0042fd78: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0042fd7a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0042fd7c: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 0042fd7e: fadd dword ptr [ebp - 0xa8] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xffffff58u));
    /* 0042fd84: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0042fd86: fstp dword ptr [ebp - 0x9c] */ W_F32((u32)(r_ebp+0xffffff64u), ST(0)); FPOP();
    /* 0042fd8c: fld dword ptr [ebp - 0x1c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe4u)));
    /* 0042fd8f: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0042fd91: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0042fd93: fstp dword ptr [ebp - 0xa8] */ W_F32((u32)(r_ebp+0xffffff58u), ST(0)); FPOP();
    /* 0042fd99: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0042fd9a: jbe 0x42ffeb */ if ((fC||fZ)) goto L_0042ffeb;
L_0042fda0:; BB(0x0042fda0);
    /* 0042fda0: lea eax, [ebp - 0xb0] */ r_eax = (u32)(r_ebp+0xffffff50u);
    /* 0042fda6: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 0042fda8: push 0x176 */ { u32 v = 0x176u; r_esp -= 4; W32(r_esp, v); }
    /* 0042fdad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042fdae: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x42fdb3u); f_0050b7a4();
    /* 0042fdb3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042fdb6: lea ecx, [ebp - 0xb0] */ r_ecx = (u32)(r_ebp+0xffffff50u);
    /* 0042fdbc: lea edx, [ebp - 0xa4] */ r_edx = (u32)(r_ebp+0xffffff5cu);
    /* 0042fdc2: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x42fdc7u); f_0082ebac();
    /* 0042fdc7: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 0042fdca: fadd dword ptr [0x8fcefc] */ ST(0) = ST(0) + R_F32((u32)(0x8fcefcu));
    /* 0042fdd0: fld dword ptr [ebp - 0x1c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe4u)));
    /* 0042fdd3: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 0042fdd5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0042fdd7: fstp dword ptr [ebp - 0x24] */ W_F32((u32)(r_ebp+0xffffffdcu), ST(0)); FPOP();
    /* 0042fdda: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0042fddb: ja 0x42fda0 */ if ((!fC&&!fZ)) goto L_0042fda0;
L_0042fddd:; BB(0x0042fddd);
    /* 0042fddd: jmp 0x42ffeb */ goto L_0042ffeb;
L_0042fde2:; BB(0x0042fde2);
    /* 0042fde2: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0042fde5: jne 0x42ffc5 */ if (!fZ) goto L_0042ffc5;
L_0042fdeb:; BB(0x0042fdeb);
    /* 0042fdeb: call 0x520e6c */ r_esp -= 4; W32(r_esp, 0x42fdf0u); f_00520e6c();
    /* 0042fdf0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042fdf2: je 0x42fe01 */ if (fZ) goto L_0042fe01;
L_0042fdf4:; BB(0x0042fdf4);
    /* 0042fdf4: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0042fdf7: mov dword ptr [eax + 0x6e8], 4 */ W32((u32)(r_eax+0x6e8u), 0x4u);
L_0042fe01:; BB(0x0042fe01);
    /* 0042fe01: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0042fe04: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 0042fe0a: test dl, 0x10 */ {  u32 a = (u8)r_edx; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0042fe0d: je 0x42fe16 */ if (fZ) goto L_0042fe16;
L_0042fe0f:; BB(0x0042fe0f);
    /* 0042fe0f: mov eax, 1 */ r_eax = 0x1u;
    /* 0042fe14: jmp 0x42fe18 */ goto L_0042fe18;
L_0042fe16:; BB(0x0042fe16);
    /* 0042fe16: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0042fe18:; BB(0x0042fe18);
    /* 0042fe18: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0042fe1a: je 0x42ffc5 */ if (fZ) goto L_0042ffc5;
L_0042fe20:; BB(0x0042fe20);
    /* 0042fe20: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0042fe23: mov dword ptr [eax + 0x6e8], 4 */ W32((u32)(r_eax+0x6e8u), 0x4u);
    /* 0042fe2d: jmp 0x42ffc5 */ goto L_0042ffc5;
L_0042fe32:; BB(0x0042fe32);
    /* 0042fe32: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0042fe35: mov edx, dword ptr [eax + 0x6e4] */ r_edx = R32((u32)(r_eax+0x6e4u));
    /* 0042fe3b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042fe3d: jne 0x42fe47 */ if (!fZ) goto L_0042fe47;
L_0042fe3f:; BB(0x0042fe3f);
    /* 0042fe3f: fld dword ptr [eax + 0xc0] */ FPUSH(R_F32((u32)(r_eax+0xc0u)));
    /* 0042fe45: jmp 0x42fe6e */ goto L_0042fe6e;
L_0042fe47:; BB(0x0042fe47);
    /* 0042fe47: call 0x520e6c */ r_esp -= 4; W32(r_esp, 0x42fe4cu); f_00520e6c();
    /* 0042fe4c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042fe4e: je 0x42fe65 */ if (fZ) goto L_0042fe65;
L_0042fe50:; BB(0x0042fe50);
    /* 0042fe50: fld dword ptr [0x8fcf0c] */ FPUSH(R_F32((u32)(0x8fcf0cu)));
    /* 0042fe56: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0042fe59: mov dword ptr [eax + 0xc0], 0x41500000 */ W32((u32)(r_eax+0xc0u), 0x41500000u);
    /* 0042fe63: jmp 0x42fe6e */ goto L_0042fe6e;
L_0042fe65:; BB(0x0042fe65);
    /* 0042fe65: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0042fe68: fld dword ptr [eax + 0xc0] */ FPUSH(R_F32((u32)(r_eax+0xc0u)));
L_0042fe6e:; BB(0x0042fe6e);
    /* 0042fe6e: fcomp dword ptr [0x8fcef4] */ fx_compare(ST(0), R_F32((u32)(0x8fcef4u))); FPOP();
    /* 0042fe74: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0042fe76: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0042fe77: ja 0x42feee */ if ((!fC&&!fZ)) goto L_0042feee;
L_0042fe79:; BB(0x0042fe79);
    /* 0042fe79: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0042fe7c: mov edx, dword ptr [eax + 0x744] */ r_edx = R32((u32)(r_eax+0x744u));
    /* 0042fe82: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042fe84: je 0x430238 */ if (fZ) goto L_00430238;
L_0042fe8a:; BB(0x0042fe8a);
    /* 0042fe8a: mov ecx, eax */ r_ecx = r_eax;
    /* 0042fe8c: fld dword ptr [0x8fcf04] */ FPUSH(R_F32((u32)(0x8fcf04u)));
    /* 0042fe92: lea edi, [ebp - 0x74] */ r_edi = (u32)(r_ebp+0xffffff8cu);
    /* 0042fe95: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0042fe96: mov eax, dword ptr [ecx + 0x4f0] */ r_eax = R32((u32)(r_ecx+0x4f0u));
    /* 0042fe9c: mov edx, dword ptr [ecx + 0x4f4] */ r_edx = R32((u32)(r_ecx+0x4f4u));
    /* 0042fea2: mov ebx, dword ptr [ecx + 0x4f8] */ r_ebx = R32((u32)(r_ecx+0x4f8u));
    /* 0042fea8: mov dword ptr [ebp - 0x74], eax */ W32((u32)(r_ebp+0xffffff8cu), r_eax);
    /* 0042feab: mov dword ptr [ebp - 0x70], edx */ W32((u32)(r_ebp+0xffffff90u), r_edx);
    /* 0042feae: mov dword ptr [ebp - 0x6c], ebx */ W32((u32)(r_ebp+0xffffff94u), r_ebx);
    /* 0042feb1: fld dword ptr [ecx + 0x4fc] */ FPUSH(R_F32((u32)(r_ecx+0x4fcu)));
    /* 0042feb7: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0042feb9: fmul dword ptr [0x8fcf14] */ ST(0) = ST(0) * R_F32((u32)(0x8fcf14u));
    /* 0042febf: fadd dword ptr [ebp - 0x74] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xffffff8cu));
    /* 0042fec2: fstp dword ptr [ebp - 0x74] */ W_F32((u32)(r_ebp+0xffffff8cu), ST(0)); FPOP();
    /* 0042fec5: fld dword ptr [ecx + 0x500] */ FPUSH(R_F32((u32)(r_ecx+0x500u)));
    /* 0042fecb: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0042fecd: fadd dword ptr [ebp - 0x70] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xffffff90u));
    /* 0042fed0: fstp dword ptr [ebp - 0x70] */ W_F32((u32)(r_ebp+0xffffff90u), ST(0)); FPOP();
    /* 0042fed3: fld dword ptr [ecx + 0x504] */ FPUSH(R_F32((u32)(r_ecx+0x504u)));
    /* 0042fed9: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0042fedb: fadd dword ptr [ebp - 0x6c] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xffffff94u));
    /* 0042fede: fstp dword ptr [ebp - 0x6c] */ W_F32((u32)(r_ebp+0xffffff94u), ST(0)); FPOP();
    /* 0042fee1: mov ecx, dword ptr [ecx + 0x744] */ r_ecx = R32((u32)(r_ecx+0x744u));
    /* 0042fee7: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x42feecu); f_00508db8();
    /* 0042feec: jmp 0x42ff15 */ goto L_0042ff15;
L_0042feee:; BB(0x0042feee);
    /* 0042feee: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0042fef1: mov edx, dword ptr [eax + 0x744] */ r_edx = R32((u32)(r_eax+0x744u));
    /* 0042fef7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042fef9: je 0x42ff15 */ if (fZ) goto L_0042ff15;
L_0042fefb:; BB(0x0042fefb);
    /* 0042fefb: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0042feff: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0042ff04: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0042ff08: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0042ff0b: mov dword ptr [edx + 0x744], 0 */ W32((u32)(r_edx+0x744u), 0x0u);
L_0042ff15:; BB(0x0042ff15);
    /* 0042ff15: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0042ff18: call 0x4306b4 */ r_esp -= 4; W32(r_esp, 0x42ff1du); f_004306b4();
    /* 0042ff1d: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0042ff20: fld dword ptr [edx + 0xc0] */ FPUSH(R_F32((u32)(r_edx+0xc0u)));
    /* 0042ff26: fcomp dword ptr [0x8fcf0c] */ fx_compare(ST(0), R_F32((u32)(0x8fcf0cu))); FPOP();
    /* 0042ff2c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0042ff2e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0042ff2f: jb 0x42ffc5 */ if (fC) goto L_0042ffc5;
L_0042ff35:; BB(0x0042ff35);
    /* 0042ff35: mov eax, 0x41500000 */ r_eax = 0x41500000u;
    /* 0042ff3a: mov ebx, edx */ r_ebx = r_edx;
    /* 0042ff3c: mov dword ptr [ebx + 0xc0], eax */ W32((u32)(r_ebx+0xc0u), r_eax);
    /* 0042ff42: mov ecx, esi */ r_ecx = r_esi;
    /* 0042ff44: mov dword ptr [ebx + 0x6e8], 2 */ W32((u32)(r_ebx+0x6e8u), 0x2u);
    /* 0042ff4e: lea ebx, [ebx + 0x4f0] */ r_ebx = (u32)(r_ebx+0x4f0u);
    /* 0042ff54: mov edx, ebx */ r_edx = r_ebx;
    /* 0042ff56: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x42ff5bu); f_0082f9c4();
    /* 0042ff5b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0042ff5c: call 0x7828e4 */ r_esp -= 4; W32(r_esp, 0x42ff61u); f_007828e4();
    /* 0042ff61: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0042ff63: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042ff66: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0042ff69: fld dword ptr [ecx + 0x72c] */ FPUSH(R_F32((u32)(r_ecx+0x72cu)));
    /* 0042ff6f: fld dword ptr [ecx + 0x734] */ FPUSH(R_F32((u32)(r_ecx+0x734u)));
    /* 0042ff75: mov dword ptr [ecx + 0x730], 0 */ W32((u32)(r_ecx+0x730u), 0x0u);
    /* 0042ff7f: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0042ff81: fmul qword ptr [0x8fcc08] */ ST(0) = ST(0) * R_F64((u32)(0x8fcc08u));
    /* 0042ff87: fdiv qword ptr [0x8fcc00] */ ST(0) = ST(0) / R_F64((u32)(0x8fcc00u));
    /* 0042ff8d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0042ff90: fnstcw word ptr [ebp - 0x54] */ W16((u32)(r_ebp+0xffffffacu), fcw);
    /* 0042ff93: movzx eax, word ptr [ebp - 0x54] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffacu));
    /* 0042ff97: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0042ff9c: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 0042ff9f: fldcw word ptr [ebp - 0x4c] */ fcw = R16((u32)(r_ebp+0xffffffb4u));
    /* 0042ffa2: fistp dword ptr [ecx + 0x6fc] */ W32((u32)(r_ecx+0x6fcu), (u32)fx_int32(ST(0))); FPOP();
    /* 0042ffa8: fldcw word ptr [ebp - 0x54] */ fcw = R16((u32)(r_ebp+0xffffffacu));
    /* 0042ffab: mov dword ptr [ecx + 0x704], 0x42a00000 */ W32((u32)(r_ecx+0x704u), 0x42a00000u);
    /* 0042ffb5: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 0042ffb7: push 0x126 */ { u32 v = 0x126u; r_esp -= 4; W32(r_esp, v); }
    /* 0042ffbc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0042ffbd: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x42ffc2u); f_0050b7a4();
    /* 0042ffc2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_0042ffc5:; BB(0x0042ffc5);
    /* 0042ffc5: mov edi, dword ptr [ebp - 0x34] */ r_edi = R32((u32)(r_ebp+0xffffffccu));
    /* 0042ffc8: mov esi, dword ptr [ebp - 0x30] */ r_esi = R32((u32)(r_ebp+0xffffffd0u));
    /* 0042ffcb: mov ebx, dword ptr [ebp - 0x2c] */ r_ebx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0042ffce: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042ffd1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0042ffd8: mov esp, ebp */ r_esp = r_ebp;
    /* 0042ffda: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042ffdb: ret 4 */ FN_RET(0x0042f96c); r_esp += 8; return;
L_0042ffde:; BB(0x0042ffde);
    /* 0042ffde: push dword ptr [0xaad720] */ { u32 v = R32((u32)(0xaad720u)); r_esp -= 4; W32(r_esp, v); }
    /* 0042ffe4: call 0x521388 */ r_esp -= 4; W32(r_esp, 0x42ffe9u); f_00521388();
    /* 0042ffe9: jmp 0x42ffc5 */ goto L_0042ffc5;
L_0042ffeb:; BB(0x0042ffeb);
    /* 0042ffeb: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0042ffee: lea edx, [ebp - 0xbc] */ r_edx = (u32)(r_ebp+0xffffff44u);
    /* 0042fff4: push 0x16ef */ { u32 v = 0x16efu; r_esp -= 4; W32(r_esp, v); }
    /* 0042fff9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042fffa: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0042fffb: call 0x77fffc */ r_esp -= 4; W32(r_esp, 0x430000u); f_0077fffc();
    /* 00430000: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00430003: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00430005: je 0x430125 */ if (fZ) goto L_00430125;
L_0043000b:; BB(0x0043000b);
    /* 0043000b: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 0043000e: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00430011: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00430013: mov dword ptr [esi + 0x738], eax */ W32((u32)(r_esi+0x738u), r_eax);
    /* 00430019: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0043001c: mov dword ptr [esi + 0x73c], edx */ W32((u32)(r_esi+0x73cu), r_edx);
    /* 00430022: mov ebx, dword ptr [ecx + 8] */ r_ebx = R32((u32)(r_ecx+0x8u));
    /* 00430025: mov ecx, dword ptr [esi + 0x6d4] */ r_ecx = R32((u32)(r_esi+0x6d4u));
    /* 0043002b: mov dword ptr [esi + 0x740], ebx */ W32((u32)(r_esi+0x740u), r_ebx);
    /* 00430031: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00430033: jne 0x43009e */ if (!fZ) goto L_0043009e;
L_00430035:; BB(0x00430035);
    /* 00430035: mov dword ptr [ebp - 0x98], 0 */ W32((u32)(r_ebp+0xffffff68u), 0x0u);
    /* 0043003f: push 0x124 */ { u32 v = 0x124u; r_esp -= 4; W32(r_esp, v); }
    /* 00430044: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x430049u); f_005caba4();
    /* 00430049: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0043004c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043004f: mov dword ptr [ebp - 0x94], eax */ W32((u32)(r_ebp+0xffffff6cu), r_eax);
    /* 00430055: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00430057: je 0x4301f1 */ if (fZ) goto L_004301f1;
L_0043005d:; BB(0x0043005d);
    /* 0043005d: mov dword ptr [ebp - 0x98], 1 */ W32((u32)(r_ebp+0xffffff68u), 0x1u);
    /* 00430067: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0043006e: mov eax, esi */ r_eax = r_esi;
    /* 00430070: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00430073: push 0x124 */ { u32 v = 0x124u; r_esp -= 4; W32(r_esp, v); }
    /* 00430078: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0043007a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043007b: call 0x435b2c */ r_esp -= 4; W32(r_esp, 0x430080u); f_00435b2c();
    /* 00430080: mov dword ptr [ebp - 0x98], 0 */ W32((u32)(r_ebp+0xffffff68u), 0x0u);
L_0043008a:; BB(0x0043008a);
    /* 0043008a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0043008d: mov edx, esi */ r_edx = r_esi;
    /* 0043008f: mov dword ptr [edx + 0x6d4], eax */ W32((u32)(r_edx+0x6d4u), r_eax);
    /* 00430095: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0043009c: jmp 0x4300a7 */ goto L_004300a7;
L_0043009e:; BB(0x0043009e);
    /* 0043009e: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 004300a1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004300a2: call 0x435a2c */ r_esp -= 4; W32(r_esp, 0x4300a7u); f_00435a2c();
L_004300a7:; BB(0x004300a7);
    /* 004300a7: mov eax, esi */ r_eax = r_esi;
    /* 004300a9: mov ecx, dword ptr [eax + 0x6d8] */ r_ecx = R32((u32)(r_eax+0x6d8u));
    /* 004300af: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004300b1: jne 0x43011c */ if (!fZ) goto L_0043011c;
L_004300b3:; BB(0x004300b3);
    /* 004300b3: mov dword ptr [ebp - 0x90], 0 */ W32((u32)(r_ebp+0xffffff70u), 0x0u);
    /* 004300bd: push 0x124 */ { u32 v = 0x124u; r_esp -= 4; W32(r_esp, v); }
    /* 004300c2: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4300c7u); f_005caba4();
    /* 004300c7: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004300ca: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004300cd: mov dword ptr [ebp - 0x8c], eax */ W32((u32)(r_ebp+0xffffff74u), r_eax);
    /* 004300d3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004300d5: je 0x4301fb */ if (fZ) goto L_004301fb;
L_004300db:; BB(0x004300db);
    /* 004300db: mov dword ptr [ebp - 0x90], 1 */ W32((u32)(r_ebp+0xffffff70u), 0x1u);
    /* 004300e5: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 004300ec: mov eax, esi */ r_eax = r_esi;
    /* 004300ee: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004300f1: push 0x125 */ { u32 v = 0x125u; r_esp -= 4; W32(r_esp, v); }
    /* 004300f6: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 004300f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004300f9: call 0x435b2c */ r_esp -= 4; W32(r_esp, 0x4300feu); f_00435b2c();
    /* 004300fe: mov dword ptr [ebp - 0x90], 0 */ W32((u32)(r_ebp+0xffffff70u), 0x0u);
L_00430108:; BB(0x00430108);
    /* 00430108: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0043010b: mov edx, esi */ r_edx = r_esi;
    /* 0043010d: mov dword ptr [edx + 0x6d8], eax */ W32((u32)(r_edx+0x6d8u), r_eax);
    /* 00430113: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0043011a: jmp 0x430125 */ goto L_00430125;
L_0043011c:; BB(0x0043011c);
    /* 0043011c: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0043011f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00430120: call 0x435a2c */ r_esp -= 4; W32(r_esp, 0x430125u); f_00435a2c();
L_00430125:; BB(0x00430125);
    /* 00430125: mov eax, dword ptr [0x9a474c] */ r_eax = R32((u32)(0x9a474cu));
    /* 0043012a: mov edx, dword ptr [0x9a4750] */ r_edx = R32((u32)(0x9a4750u));
    /* 00430130: mov ebx, dword ptr [0x9a4754] */ r_ebx = R32((u32)(0x9a4754u));
    /* 00430136: mov esi, dword ptr [0x9a4758] */ r_esi = R32((u32)(0x9a4758u));
    /* 0043013c: mov edi, dword ptr [0x9a475c] */ r_edi = R32((u32)(0x9a475cu));
    /* 00430142: mov ecx, dword ptr [0xa43cc8] */ r_ecx = R32((u32)(0xa43cc8u));
    /* 00430148: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 0043014e: mov dword ptr [ebp - 0x84], edx */ W32((u32)(r_ebp+0xffffff7cu), r_edx);
    /* 00430154: mov dword ptr [ebp - 0x80], ebx */ W32((u32)(r_ebp+0xffffff80u), r_ebx);
    /* 00430157: mov dword ptr [ebp - 0x7c], esi */ W32((u32)(r_ebp+0xffffff84u), r_esi);
    /* 0043015a: mov dword ptr [ebp - 0x78], edi */ W32((u32)(r_ebp+0xffffff88u), r_edi);
    /* 0043015d: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0043015f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00430162: push dword ptr [ecx + 0x6d0] */ { u32 v = R32((u32)(r_ecx+0x6d0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00430168: mov dword ptr [ebp - 0x84], eax */ W32((u32)(r_ebp+0xffffff7cu), r_eax);
    /* 0043016e: lea eax, [ebp - 0x88] */ r_eax = (u32)(r_ebp+0xffffff78u);
    /* 00430174: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00430175: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00430178: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00430179: call 0x51fc9c */ r_esp -= 4; W32(r_esp, 0x43017eu); f_0051fc9c();
    /* 0043017e: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00430181: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00430184: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00430186: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00430187: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00430188: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00430189: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043018a: push 0x331 */ { u32 v = 0x331u; r_esp -= 4; W32(r_esp, v); }
    /* 0043018f: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x430194u); f_008144b0();
    /* 00430194: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 00430197: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043019a: fld dword ptr [edx + 0x704] */ FPUSH(R_F32((u32)(r_edx+0x704u)));
    /* 004301a0: fcomp dword ptr [0x8fcef8] */ fx_compare(ST(0), R_F32((u32)(0x8fcef8u))); FPOP();
    /* 004301a6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004301a8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004301a9: jb 0x42ffc5 */ if (fC) goto L_0042ffc5;
L_004301af:; BB(0x004301af);
    /* 004301af: mov dword ptr [edx + 0x6e8], 3 */ W32((u32)(r_edx+0x6e8u), 0x3u);
    /* 004301b9: mov eax, 0x43fa0000 */ r_eax = 0x43fa0000u;
    /* 004301be: mov dword ptr [edx + 0x704], eax */ W32((u32)(r_edx+0x704u), r_eax);
    /* 004301c4: mov edx, dword ptr [edx + 0x744] */ r_edx = R32((u32)(r_edx+0x744u));
    /* 004301ca: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004301cc: je 0x42ffc5 */ if (fZ) goto L_0042ffc5;
L_004301d2:; BB(0x004301d2);
    /* 004301d2: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004301d6: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004301db: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004301df: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004301e2: mov dword ptr [edx + 0x744], 0 */ W32((u32)(r_edx+0x744u), 0x0u);
    /* 004301ec: jmp 0x42ffc5 */ goto L_0042ffc5;
L_004301f1:; BB(0x004301f1);
    /* 004301f1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004301f3: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004301f6: jmp 0x43008a */ goto L_0043008a;
L_004301fb:; BB(0x004301fb);
    /* 004301fb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004301fd: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00430200: jmp 0x430108 */ goto L_00430108;
L_00430205:; BB(0x00430205);
    /* 00430205: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00430207: push 0x177 */ { u32 v = 0x177u; r_esp -= 4; W32(r_esp, v); }
    /* 0043020c: lea ebx, [eax + 0x4f0] */ r_ebx = (u32)(r_eax+0x4f0u);
    /* 00430212: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00430213: call 0x50981c */ r_esp -= 4; W32(r_esp, 0x430218u); f_0050981c();
    /* 00430218: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043021b: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 0043021e: mov dword ptr [esi + 0x744], eax */ W32((u32)(r_esi+0x744u), r_eax);
    /* 00430224: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00430226: je 0x42fbd5 */ if (fZ) goto L_0042fbd5;
L_0043022c:; BB(0x0043022c);
    /* 0043022c: mov ecx, eax */ r_ecx = r_eax;
    /* 0043022e: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x430233u); f_00508f48();
    /* 00430233: jmp 0x42fbd5 */ goto L_0042fbd5;
L_00430238:; BB(0x00430238);
    /* 00430238: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 0043023a: push 0x122 */ { u32 v = 0x122u; r_esp -= 4; W32(r_esp, v); }
    /* 0043023f: lea edx, [eax + 0x4f0] */ r_edx = (u32)(r_eax+0x4f0u);
    /* 00430245: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00430246: call 0x50981c */ r_esp -= 4; W32(r_esp, 0x43024bu); f_0050981c();
    /* 0043024b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043024e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00430251: mov dword ptr [edx + 0x744], eax */ W32((u32)(r_edx+0x744u), r_eax);
    /* 00430257: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00430259: je 0x42ff15 */ if (fZ) goto L_0042ff15;
L_0043025f:; BB(0x0043025f);
    /* 0043025f: mov ecx, eax */ r_ecx = r_eax;
    /* 00430261: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x430266u); f_00508f48();
    /* 00430266: jmp 0x42ff15 */ goto L_0042ff15;
L_0043026b:; BB(0x0043026b);
    /* 0043026b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0043026e: mov eax, dword ptr [eax + 0x6ec] */ r_eax = R32((u32)(r_eax+0x6ecu));
    /* 00430274: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00430277: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0043027a: jge 0x43028a */ if ((fS==fO)) goto L_0043028a;
L_0043027c:; BB(0x0043027c);
    /* 0043027c: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043027f: mov dword ptr [edx + 0x6ec], eax */ W32((u32)(r_edx+0x6ecu), r_eax);
    /* 00430285: jmp 0x42ffc5 */ goto L_0042ffc5;
L_0043028a:; BB(0x0043028a);
    /* 0043028a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0043028d: mov ebx, dword ptr [eax + 0x6d0] */ r_ebx = R32((u32)(r_eax+0x6d0u));
    /* 00430293: mov dword ptr [eax + 0x6ec], 0 */ W32((u32)(r_eax+0x6ecu), 0x0u);
    /* 0043029d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0043029f: mov dword ptr [eax + 0x6e8], 1 */ W32((u32)(r_eax+0x6e8u), 0x1u);
    /* 004302a9: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 004302ac: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004302ae: jle 0x4302c0 */ if ((fZ||fS!=fO)) goto L_004302c0;
L_004302b0:; BB(0x004302b0);
    /* 004302b0: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 004302b2: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 004302b5: mov dword ptr [edx + ecx*4], eax */ W32((u32)(r_edx+r_ecx*4), r_eax);
    /* 004302b8: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004302bb: cmp ecx, dword ptr [ebx + 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebx+0xcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004302be: jl 0x4302b0 */ if ((fS!=fO)) goto L_004302b0;
L_004302c0:; BB(0x004302c0);
    /* 004302c0: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004302c3: mov dword ptr [ebx + 8], 0 */ W32((u32)(r_ebx+0x8u), 0x0u);
    /* 004302ca: mov eax, 0xd */ r_eax = 0xdu;
    /* 004302cf: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 004302d6: call 0x521324 */ r_esp -= 4; W32(r_esp, 0x4302dbu); f_00521324();
    /* 004302db: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004302dd: je 0x430305 */ if (fZ) goto L_00430305;
L_004302df:; BB(0x004302df);
    /* 004302df: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 004302e2: mov ecx, dword ptr [esi + 0x398] */ r_ecx = R32((u32)(r_esi+0x398u));
    /* 004302e8: mov eax, dword ptr [ecx + 0x38] */ r_eax = R32((u32)(r_ecx+0x38u));
    /* 004302eb: mov dword ptr [esi + 0x72c], eax */ W32((u32)(r_esi+0x72cu), r_eax);
    /* 004302f1: mov edx, dword ptr [ecx + 0x3c] */ r_edx = R32((u32)(r_ecx+0x3cu));
    /* 004302f4: mov dword ptr [esi + 0x730], edx */ W32((u32)(r_esi+0x730u), r_edx);
    /* 004302fa: mov ebx, dword ptr [ecx + 0x40] */ r_ebx = R32((u32)(r_ecx+0x40u));
    /* 004302fd: mov dword ptr [esi + 0x734], ebx */ W32((u32)(r_esi+0x734u), r_ebx);
    /* 00430303: jmp 0x430326 */ goto L_00430326;
L_00430305:; BB(0x00430305);
    /* 00430305: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00430308: mov dword ptr [eax + 0x72c], 0 */ W32((u32)(r_eax+0x72cu), 0x0u);
    /* 00430312: mov dword ptr [eax + 0x730], 0 */ W32((u32)(r_eax+0x730u), 0x0u);
    /* 0043031c: mov dword ptr [eax + 0x734], 0 */ W32((u32)(r_eax+0x734u), 0x0u);
L_00430326:; BB(0x00430326);
    /* 00430326: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00430329: call 0x4306b4 */ r_esp -= 4; W32(r_esp, 0x43032eu); f_004306b4();
    /* 0043032e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00430331: call 0x430700 */ r_esp -= 4; W32(r_esp, 0x430336u); f_00430700();
    /* 00430336: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00430339: add edx, 0x520 */ {  u32 a = r_edx; u32 b = 0x520u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043033f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00430341: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00430342: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00430343: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00430344: push 0x330 */ { u32 v = 0x330u; r_esp -= 4; W32(r_esp, v); }
    /* 00430349: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x43034eu); f_00814298();
    /* 0043034e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00430351: jmp 0x42ffc5 */ goto L_0042ffc5;
L_00430356:; BB(0x00430356);
    /* 00430356: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00430359: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043035c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043035d: call 0x521388 */ r_esp -= 4; W32(r_esp, 0x430362u); f_00521388();
    /* 00430362: jmp 0x42ffc5 */ goto L_0042ffc5;
L_00430367:; BB(0x00430367);
    /* 00430367: mov eax, ecx */ r_eax = r_ecx;
    /* 00430369: mov edx, dword ptr [eax + 0x6e8] */ r_edx = R32((u32)(r_eax+0x6e8u));
    /* 0043036f: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00430372: jne 0x42ffc5 */ if (!fZ) goto L_0042ffc5;
L_00430378:; BB(0x00430378);
    /* 00430378: mov edx, dword ptr [eax + 0x3dc] */ r_edx = R32((u32)(r_eax+0x3dcu));
    /* 0043037e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00430381: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00430384: mov dword ptr [eax + 0x3dc], edx */ W32((u32)(r_eax+0x3dcu), r_edx);
    /* 0043038a: call 0x520e6c */ r_esp -= 4; W32(r_esp, 0x43038fu); f_00520e6c();
    /* 0043038f: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00430392: mov edx, dword ptr [edx + 0x3dc] */ r_edx = R32((u32)(r_edx+0x3dcu));
    /* 00430398: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043039a: je 0x4303a5 */ if (fZ) goto L_004303a5;
L_0043039c:; BB(0x0043039c);
    /* 0043039c: mov edx, dword ptr [edx*4 + 0x9a4440] */ r_edx = R32((u32)(r_edx*4+0x9a4440u));
    /* 004303a3: jmp 0x4303ac */ goto L_004303ac;
L_004303a5:; BB(0x004303a5);
    /* 004303a5: mov edx, dword ptr [edx*4 + 0x9a4380] */ r_edx = R32((u32)(r_edx*4+0x9a4380u));
L_004303ac:; BB(0x004303ac);
    /* 004303ac: lea eax, [edx - 0x21] */ r_eax = (u32)(r_edx+0xffffffdfu);
    /* 004303af: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004303b2: ja 0x430507 */ if ((!fC&&!fZ)) goto L_00430507;
L_004303b8:; BB(0x004303b8);
    /* 004303b8: mov eax, dword ptr [eax*4 + 0x8fc940] */ r_eax = R32((u32)(r_eax*4+0x8fc940u));
    /* 004303bf: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_00430507:; BB(0x00430507);
    /* 00430507: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043050a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043050b: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x430510u); f_0042abf8();
    /* 00430510: jmp 0x42ffc5 */ goto L_0042ffc5;
L_00430515:; BB(0x00430515);
    /* 00430515: mov eax, ecx */ r_eax = r_ecx;
    /* 00430517: mov edx, dword ptr [eax + 0x6e8] */ r_edx = R32((u32)(r_eax+0x6e8u));
    /* 0043051d: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00430520: jne 0x42ffc5 */ if (!fZ) goto L_0042ffc5;
L_00430526:; BB(0x00430526);
    /* 00430526: mov edx, dword ptr [eax + 0x6e4] */ r_edx = R32((u32)(r_eax+0x6e4u));
    /* 0043052c: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043052f: jl 0x430570 */ if ((fS!=fO)) goto L_00430570;
L_00430531:; BB(0x00430531);
    /* 00430531: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00430533: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 00430535: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00430537: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x43053du); call_ind(t); }
    /* 0043053d: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00430540: movzx eax, word ptr [ebx + 0x1c] */ r_eax = (u32)R16((u32)(r_ebx+0x1cu));
    /* 00430544: mov esi, dword ptr [ebx + 0x3dc] */ r_esi = R32((u32)(r_ebx+0x3dcu));
    /* 0043054a: mov word ptr [ebp - 0x5a], ax */ W16((u32)(r_ebp+0xffffffa6u), (u16)r_eax);
    /* 0043054e: mov edx, 0x1c */ r_edx = 0x1cu;
    /* 00430553: mov byte ptr [ebp - 0x5c], 0x13 */ W8((u32)(r_ebp+0xffffffa4u), 0x13u);
    /* 00430557: mov word ptr [ebp - 0x58], dx */ W16((u32)(r_ebp+0xffffffa8u), (u16)r_edx);
    /* 0043055b: mov word ptr [ebp - 0x56], si */ W16((u32)(r_ebp+0xffffffaau), (u16)r_esi);
    /* 0043055f: mov byte ptr [ebp - 0x5b], 2 */ W8((u32)(r_ebp+0xffffffa5u), 0x2u);
    /* 00430563: lea ecx, [ebp - 0x5c] */ r_ecx = (u32)(r_ebp+0xffffffa4u);
    /* 00430566: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x43056bu); f_008003e0();
    /* 0043056b: jmp 0x42ffc5 */ goto L_0042ffc5;
L_00430570:; BB(0x00430570);
    /* 00430570: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00430572: push 0x1b */ { u32 v = 0x1bu; r_esp -= 4; W32(r_esp, v); }
    /* 00430574: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00430576: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x43057cu); call_ind(t); }
    /* 0043057c: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 0043057f: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 00430583: mov ebx, dword ptr [esi + 0x3dc] */ r_ebx = R32((u32)(r_esi+0x3dcu));
    /* 00430589: movzx edi, word ptr [esi + 0x394] */ r_edi = (u32)R16((u32)(r_esi+0x394u));
    /* 00430590: mov edx, 0x1b */ r_edx = 0x1bu;
    /* 00430595: mov byte ptr [ebp - 0x68], 0x14 */ W8((u32)(r_ebp+0xffffff98u), 0x14u);
    /* 00430599: mov word ptr [ebp - 0x66], ax */ W16((u32)(r_ebp+0xffffff9au), (u16)r_eax);
    /* 0043059d: mov word ptr [ebp - 0x64], dx */ W16((u32)(r_ebp+0xffffff9cu), (u16)r_edx);
    /* 004305a1: mov byte ptr [ebp - 0x67], 3 */ W8((u32)(r_ebp+0xffffff99u), 0x3u);
    /* 004305a5: mov word ptr [ebp - 0x62], bx */ W16((u32)(r_ebp+0xffffff9eu), (u16)r_ebx);
    /* 004305a9: mov dword ptr [ebp - 0x60], edi */ W32((u32)(r_ebp+0xffffffa0u), r_edi);
    /* 004305ac: lea ecx, [ebp - 0x68] */ r_ecx = (u32)(r_ebp+0xffffff98u);
    /* 004305af: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4305b4u); f_008003e0();
    /* 004305b4: jmp 0x42ffc5 */ goto L_0042ffc5;
L_004305b9:; BB(0x004305b9);
    /* 004305b9: mov eax, dword ptr [ecx + 0x3c8] */ r_eax = R32((u32)(r_ecx+0x3c8u));
    /* 004305bf: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004305c1: and eax, 0xfffffffb */ {  u32 a = r_eax; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004305c4: or eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004305c9: mov dword ptr [ecx + 0x3c8], eax */ W32((u32)(r_ecx+0x3c8u), r_eax);
    /* 004305cf: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x4305d5u); call_ind(t); }
    /* 004305d5: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_004305d7:; BB(0x004305d7);
    /* 004305d7: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004305da: mov ecx, dword ptr [eax + ebx*4 + 0x5e8] */ r_ecx = R32((u32)(r_eax+r_ebx*4+0x5e8u));
    /* 004305e1: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004305e3: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x4305e9u); call_ind(t); }
    /* 004305e9: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004305ec: cmp ebx, 0xa */ {  u32 a = r_ebx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004305ef: jl 0x4305d7 */ if ((fS!=fO)) goto L_004305d7;
L_004305f1:; BB(0x004305f1);
    /* 004305f1: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004305f4: mov eax, 0xf */ r_eax = 0xfu;
    /* 004305f9: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 00430600: mov edx, 3 */ r_edx = 0x3u;
    /* 00430605: mov dword ptr [ecx + 0x65c], edx */ W32((u32)(r_ecx+0x65cu), r_edx);
    /* 0043060b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043060c: call 0x42c154 */ r_esp -= 4; W32(r_esp, 0x430611u); f_0042c154();
    /* 00430611: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00430614: mov ebx, dword ptr [eax + 0x6d0] */ r_ebx = R32((u32)(r_eax+0x6d0u));
    /* 0043061a: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 0043061d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0043061f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00430621: jle 0x430633 */ if ((fZ||fS!=fO)) goto L_00430633;
L_00430623:; BB(0x00430623);
    /* 00430623: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 00430625: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 00430628: mov dword ptr [edx + ecx*4], eax */ W32((u32)(r_edx+r_ecx*4), r_eax);
    /* 0043062b: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0043062e: cmp ecx, dword ptr [ebx + 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebx+0xcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00430631: jl 0x430623 */ if ((fS!=fO)) goto L_00430623;
L_00430633:; BB(0x00430633);
    /* 00430633: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00430636: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00430638: mov dword ptr [ebx + 8], eax */ W32((u32)(r_ebx+0x8u), r_eax);
    /* 0043063b: mov dword ptr [edx + 0x6e8], eax */ W32((u32)(r_edx+0x6e8u), r_eax);
    /* 00430641: mov dword ptr [edx + 0x6ec], eax */ W32((u32)(r_edx+0x6ecu), r_eax);
    /* 00430647: mov dword ptr [edx + 0x6f0], eax */ W32((u32)(r_edx+0x6f0u), r_eax);
    /* 0043064d: mov dword ptr [edx + 0x704], 0 */ W32((u32)(r_edx+0x704u), 0x0u);
    /* 00430657: mov dword ptr [edx + 0x6fc], eax */ W32((u32)(r_edx+0x6fcu), r_eax);
    /* 0043065d: mov dword ptr [edx + 0x744], eax */ W32((u32)(r_edx+0x744u), r_eax);
    /* 00430663: mov dword ptr [edx + 0x708], 0 */ W32((u32)(r_edx+0x708u), 0x0u);
    /* 0043066d: mov dword ptr [edx + 0x72c], 0 */ W32((u32)(r_edx+0x72cu), 0x0u);
    /* 00430677: mov dword ptr [edx + 0x730], 0 */ W32((u32)(r_edx+0x730u), 0x0u);
    /* 00430681: mov dword ptr [edx + 0x734], 0 */ W32((u32)(r_edx+0x734u), 0x0u);
    /* 0043068b: jmp 0x42ffc5 */ goto L_0042ffc5;
}

