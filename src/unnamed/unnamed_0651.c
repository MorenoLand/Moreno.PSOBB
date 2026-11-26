#include "protos.h"

void f_00651190(void) /* sub_651190 */
{
    FN_ENTER(0x00651190);
    /* 00651190: mov dword ptr [ecx + 0x2b8], 0xbf800000 */ W32((u32)(r_ecx+0x2b8u), 0xbf800000u);
    /* 0065119a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0065119c: mov word ptr [ecx + 0x32e], ax */ W16((u32)(r_ecx+0x32eu), (u16)r_eax);
    /* 006511a3: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 006511aa: ret  */ FN_RET(0x00651190); r_esp += 4; return;
}

void f_006511ac(void) /* sub_6511AC */
{
    FN_ENTER(0x006511ac);
    /* 006511ac: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006511ad: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006511af: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006511b1: call 0x6511d0 */ r_esp -= 4; W32(r_esp, 0x6511b6u); f_006511d0();
    /* 006511b6: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006511ba: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006511bc: jne 0x6511c2 */ if (!fZ) goto L_006511c2;
L_006511be:; BB(0x006511be);
    /* 006511be: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006511bf: ret 4 */ FN_RET(0x006511ac); r_esp += 8; return;
L_006511c2:; BB(0x006511c2);
    /* 006511c2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006511c3: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6511c8u); f_005c2f74();
    /* 006511c8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006511c9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006511ca: ret 4 */ FN_RET(0x006511ac); r_esp += 8; return;
}

void f_006511d0(void) /* sub_6511D0 */
{
    FN_ENTER(0x006511d0);
    /* 006511d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006511d1: mov ebp, esp */ r_ebp = r_esp;
    /* 006511d3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006511d5: push 0x8e6888 */ { u32 v = 0x8e6888u; r_esp -= 4; W32(r_esp, v); }
    /* 006511da: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006511e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006511e1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006511e8: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006511eb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006511ee: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006511f1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006511f4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006511f7: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006511fa: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00651201: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00651204: mov dword ptr [eax], 0xb31458 */ W32((u32)(r_eax), 0xb31458u);
    /* 0065120a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065120b: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x651210u); f_007b4e84();
    /* 00651210: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00651211: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00651214: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x651219u); f_007b9c8c();
    /* 00651219: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 00651220: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00651223: add ecx, 0xf0 */ {  u32 a = r_ecx; u32 b = 0xf0u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00651229: call 0x5770ec */ r_esp -= 4; W32(r_esp, 0x65122eu); f_005770ec();
    /* 0065122e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00651235: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00651238: call 0x66e298 */ r_esp -= 4; W32(r_esp, 0x65123du); f_0066e298();
    /* 0065123d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00651240: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00651247: mov esp, ebp */ r_esp = r_ebp;
    /* 00651249: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065124a: ret  */ FN_RET(0x006511d0); r_esp += 4; return;
}

void f_0065124c(void) /* sub_65124C */
{
    FN_ENTER(0x0065124c);
    /* 0065124c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0065124d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0065124e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065124f: sub esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00651252: mov edi, ecx */ r_edi = r_ecx;
    /* 00651254: mov edx, dword ptr [edi + 0xe0] */ r_edx = R32((u32)(r_edi+0xe0u));
    /* 0065125a: fld dword ptr [edi + 0xe4] */ FPUSH(R_F32((u32)(r_edi+0xe4u)));
    /* 00651260: mov eax, dword ptr [edi + 0xdc] */ r_eax = R32((u32)(r_edi+0xdcu));
    /* 00651266: mov ecx, edx */ r_ecx = r_edx;
    /* 00651268: mov dword ptr [edi + 0xe4], 0 */ W32((u32)(r_edi+0xe4u), 0x0u);
    /* 00651272: and ecx, 0xf */ {  u32 a = r_ecx; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00651275: mov esi, ecx */ r_esi = r_ecx;
    /* 00651277: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00651279: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0065127b: jle 0x6512c9 */ if ((fZ||fS!=fO)) goto L_006512c9;
L_0065127d:; BB(0x0065127d);
    /* 0065127d: fstp dword ptr [esp + 0x4c] */ W_F32((u32)(r_esp+0x4cu), ST(0)); FPOP();
    /* 00651281: jmp 0x651289 */ goto L_00651289;
L_00651283:; BB(0x00651283);
    /* 00651283: mov dword ptr [edi + 0xe0], edx */ W32((u32)(r_edi+0xe0u), r_edx);
L_00651289:; BB(0x00651289);
    /* 00651289: movzx eax, word ptr [edi + ebp*4 + 0xcc] */ r_eax = (u32)R16((u32)(r_edi+r_ebp*4+0xccu));
    /* 00651291: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00651292: call 0x816eec */ r_esp -= 4; W32(r_esp, 0x651297u); f_00816eec();
    /* 00651297: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00651298: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0065129a: mov edx, 1 */ r_edx = 0x1u;
    /* 0065129f: shl edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 006512a1: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006512a4: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006512a7: je 0x651625 */ if (fZ) goto L_00651625;
L_006512ad:; BB(0x006512ad);
    /* 006512ad: not edx */ r_edx = ~r_edx;
    /* 006512af: and edx, dword ptr [edi + 0xe0] */ {  u32 a = r_edx; u32 b = R32((u32)(r_edi+0xe0u)); u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
L_006512b5:; BB(0x006512b5);
    /* 006512b5: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 006512b8: cmp ebp, dword ptr [edi + 0xdc] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_edi+0xdcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006512be: jl 0x651283 */ if ((fS!=fO)) goto L_00651283;
L_006512c0:; BB(0x006512c0);
    /* 006512c0: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 006512c4: mov ecx, edx */ r_ecx = r_edx;
    /* 006512c6: and ecx, 0xf */ {  u32 a = r_ecx; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
L_006512c9:; BB(0x006512c9);
    /* 006512c9: xor esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_esi = r; fZ = (r == 0); }
    /* 006512cb: je 0x6512f6 */ if (fZ) goto L_006512f6;
L_006512cd:; BB(0x006512cd);
    /* 006512cd: fld dword ptr [edi + 0xe4] */ FPUSH(R_F32((u32)(r_edi+0xe4u)));
    /* 006512d3: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 006512d5: fcomp dword ptr [0x936d98] */ fx_compare(ST(0), R_F32((u32)(0x936d98u))); FPOP();
    /* 006512db: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006512dd: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006512de: jae 0x6512e8 */ if (!fC) goto L_006512e8;
L_006512e0:; BB(0x006512e0);
    /* 006512e0: and edx, 0xfcffffff */ {  u32 a = r_edx; u32 b = 0xfcffffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 006512e6: jmp 0x6512f8 */ goto L_006512f8;
L_006512e8:; BB(0x006512e8);
    /* 006512e8: or edx, 0x2000000 */ {  u32 a = r_edx; u32 b = 0x2000000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 006512ee: and edx, 0xfeffffff */ {  u32 a = r_edx; u32 b = 0xfeffffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 006512f4: jmp 0x6512f8 */ goto L_006512f8;
L_006512f6:; BB(0x006512f6);
    /* 006512f6: fstp st(0) */ ST(0) = ST(0); FPOP();
L_006512f8:; BB(0x006512f8);
    /* 006512f8: and edx, 0xfbffffff */ {  u32 a = r_edx; u32 b = 0xfbffffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 006512fe: test edx, 0x2000000 */ {  u32 a = r_edx; u32 b = 0x2000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00651304: mov dword ptr [edi + 0xe0], edx */ W32((u32)(r_edi+0xe0u), r_edx);
    /* 0065130a: je 0x651405 */ if (fZ) goto L_00651405;
L_00651310:; BB(0x00651310);
    /* 00651310: lea eax, [edi + 0xc0] */ r_eax = (u32)(r_edi+0xc0u);
    /* 00651316: lea ebp, [edi + 0x38] */ r_ebp = (u32)(r_edi+0x38u);
    /* 00651319: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065131a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065131b: call 0x836208 */ r_esp -= 4; W32(r_esp, 0x651320u); f_00836208();
    /* 00651320: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00651323: fcomp dword ptr [edi + 0xe4] */ fx_compare(ST(0), R_F32((u32)(r_edi+0xe4u))); FPOP();
    /* 00651329: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0065132b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0065132c: ja 0x651367 */ if ((!fC&&!fZ)) goto L_00651367;
L_0065132e:; BB(0x0065132e);
    /* 0065132e: mov eax, dword ptr [edi + 0xe0] */ r_eax = R32((u32)(r_edi+0xe0u));
    /* 00651334: test eax, 0x1000000 */ {  u32 a = r_eax; u32 b = 0x1000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00651339: jne 0x6514f2 */ if (!fZ) goto L_006514f2;
L_0065133f:; BB(0x0065133f);
    /* 0065133f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00651341: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00651342: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00651343: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00651344: push 0x439 */ { u32 v = 0x439u; r_esp -= 4; W32(r_esp, v); }
    /* 00651349: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x65134eu); f_00814298();
    /* 0065134e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00651351: mov eax, dword ptr [edi + 0xe0] */ r_eax = R32((u32)(r_edi+0xe0u));
    /* 00651357: or eax, 0x1000000 */ {  u32 a = r_eax; u32 b = 0x1000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0065135c: mov dword ptr [edi + 0xe0], eax */ W32((u32)(r_edi+0xe0u), r_eax);
    /* 00651362: jmp 0x6514f2 */ goto L_006514f2;
L_00651367:; BB(0x00651367);
    /* 00651367: fld dword ptr [edi + 0xec] */ FPUSH(R_F32((u32)(r_edi+0xecu)));
    /* 0065136d: mov dword ptr [esp + 0xc], 0 */ W32((u32)(r_esp+0xcu), 0x0u);
    /* 00651375: fchs  */ ST(0) = -ST(0);
    /* 00651377: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 0065137b: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 00651383: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 00651388: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x65138du); f_0082d990();
    /* 0065138d: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 00651390: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00651392: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x651397u); f_0082d8bc();
    /* 00651397: mov edx, dword ptr [edi + 0x5c] */ r_edx = R32((u32)(r_edi+0x5cu));
    /* 0065139a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0065139c: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x6513a1u); f_0082e9e4();
    /* 006513a1: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 006513a5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006513a6: lea edx, [esp + 0x10] */ r_edx = (u32)(r_esp+0x10u);
    /* 006513aa: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006513ac: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x6513b1u); f_0082eab8();
    /* 006513b1: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x6513b6u); f_0082da80();
    /* 006513b6: fld dword ptr [edi + 0x38] */ FPUSH(R_F32((u32)(r_edi+0x38u)));
    /* 006513b9: fsub dword ptr [esp + 0xc] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0xcu));
    /* 006513bd: fld dword ptr [edi + 0x3c] */ FPUSH(R_F32((u32)(r_edi+0x3cu)));
    /* 006513c0: fsub dword ptr [esp + 0x10] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x10u));
    /* 006513c4: fld dword ptr [edi + 0x40] */ FPUSH(R_F32((u32)(r_edi+0x40u)));
    /* 006513c7: fsub dword ptr [esp + 0x14] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x14u));
    /* 006513cb: mov eax, dword ptr [edi + 0xe0] */ r_eax = R32((u32)(r_edi+0xe0u));
    /* 006513d1: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 006513d3: fstp dword ptr [edi + 0x38] */ W_F32((u32)(r_edi+0x38u), ST(0)); FPOP();
    /* 006513d6: fstp dword ptr [edi + 0x3c] */ W_F32((u32)(r_edi+0x3cu), ST(0)); FPOP();
    /* 006513d9: fstp dword ptr [edi + 0x40] */ W_F32((u32)(r_edi+0x40u), ST(0)); FPOP();
    /* 006513dc: or eax, 0x4000000 */ {  u32 a = r_eax; u32 b = 0x4000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006513e1: mov dword ptr [edi + 0xe0], eax */ W32((u32)(r_edi+0xe0u), r_eax);
    /* 006513e7: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006513e9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006513ea: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006513eb: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006513ec: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006513ed: push 0x438 */ { u32 v = 0x438u; r_esp -= 4; W32(r_esp, v); }
    /* 006513f2: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x6513f7u); f_008144b0();
    /* 006513f7: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006513fa: mov eax, dword ptr [edi + 0xe0] */ r_eax = R32((u32)(r_edi+0xe0u));
    /* 00651400: jmp 0x6514f2 */ goto L_006514f2;
L_00651405:; BB(0x00651405);
    /* 00651405: lea eax, [edi + 0xc0] */ r_eax = (u32)(r_edi+0xc0u);
    /* 0065140b: lea ebp, [edi + 0x38] */ r_ebp = (u32)(r_edi+0x38u);
    /* 0065140e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065140f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00651410: call 0x836208 */ r_esp -= 4; W32(r_esp, 0x651415u); f_00836208();
    /* 00651415: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00651418: fcomp dword ptr [edi + 0xe4] */ fx_compare(ST(0), R_F32((u32)(r_edi+0xe4u))); FPOP();
    /* 0065141e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00651420: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00651421: jb 0x65145c */ if (fC) goto L_0065145c;
L_00651423:; BB(0x00651423);
    /* 00651423: mov eax, dword ptr [edi + 0xe0] */ r_eax = R32((u32)(r_edi+0xe0u));
    /* 00651429: test eax, 0x1000000 */ {  u32 a = r_eax; u32 b = 0x1000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065142e: jne 0x6514f2 */ if (!fZ) goto L_006514f2;
L_00651434:; BB(0x00651434);
    /* 00651434: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00651436: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00651437: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00651438: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00651439: push 0x439 */ { u32 v = 0x439u; r_esp -= 4; W32(r_esp, v); }
    /* 0065143e: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x651443u); f_00814298();
    /* 00651443: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00651446: mov eax, dword ptr [edi + 0xe0] */ r_eax = R32((u32)(r_edi+0xe0u));
    /* 0065144c: or eax, 0x1000000 */ {  u32 a = r_eax; u32 b = 0x1000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00651451: mov dword ptr [edi + 0xe0], eax */ W32((u32)(r_edi+0xe0u), r_eax);
    /* 00651457: jmp 0x6514f2 */ goto L_006514f2;
L_0065145c:; BB(0x0065145c);
    /* 0065145c: fld dword ptr [edi + 0xec] */ FPUSH(R_F32((u32)(r_edi+0xecu)));
    /* 00651462: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 00651469: fchs  */ ST(0) = -ST(0);
    /* 0065146b: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0065146f: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 00651477: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 0065147c: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x651481u); f_0082d990();
    /* 00651481: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 00651484: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00651486: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x65148bu); f_0082d8bc();
    /* 0065148b: mov edx, dword ptr [edi + 0x5c] */ r_edx = R32((u32)(r_edi+0x5cu));
    /* 0065148e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00651490: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x651495u); f_0082e9e4();
    /* 00651495: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00651498: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00651499: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 0065149d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0065149f: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x6514a4u); f_0082eab8();
    /* 006514a4: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x6514a9u); f_0082da80();
    /* 006514a9: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 006514ac: fadd dword ptr [edi + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x38u));
    /* 006514af: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 006514b3: fadd dword ptr [edi + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x3cu));
    /* 006514b6: mov eax, dword ptr [edi + 0xe0] */ r_eax = R32((u32)(r_edi+0xe0u));
    /* 006514bc: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 006514c0: fadd dword ptr [edi + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x40u));
    /* 006514c3: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 006514c5: fstp dword ptr [edi + 0x38] */ W_F32((u32)(r_edi+0x38u), ST(0)); FPOP();
    /* 006514c8: fstp dword ptr [edi + 0x3c] */ W_F32((u32)(r_edi+0x3cu), ST(0)); FPOP();
    /* 006514cb: fstp dword ptr [edi + 0x40] */ W_F32((u32)(r_edi+0x40u), ST(0)); FPOP();
    /* 006514ce: or eax, 0x4000000 */ {  u32 a = r_eax; u32 b = 0x4000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006514d3: mov dword ptr [edi + 0xe0], eax */ W32((u32)(r_edi+0xe0u), r_eax);
    /* 006514d9: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006514db: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006514dc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006514dd: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006514de: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006514df: push 0x438 */ { u32 v = 0x438u; r_esp -= 4; W32(r_esp, v); }
    /* 006514e4: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x6514e9u); f_008144b0();
    /* 006514e9: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006514ec: mov eax, dword ptr [edi + 0xe0] */ r_eax = R32((u32)(r_edi+0xe0u));
L_006514f2:; BB(0x006514f2);
    /* 006514f2: test eax, 0x8000000 */ {  u32 a = r_eax; u32 b = 0x8000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006514f7: jne 0x651611 */ if (!fZ) goto L_00651611;
L_006514fd:; BB(0x006514fd);
    /* 006514fd: test eax, 0x4000000 */ {  u32 a = r_eax; u32 b = 0x4000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00651502: je 0x651611 */ if (fZ) goto L_00651611;
L_00651508:; BB(0x00651508);
    /* 00651508: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x65150du); f_008587a5();
    /* 0065150d: mov dword ptr [esp + 0x3c], eax */ W32((u32)(r_esp+0x3cu), r_eax);
    /* 00651511: fild dword ptr [esp + 0x3c] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x3cu)));
    /* 00651515: fdiv dword ptr [0x936d94] */ ST(0) = ST(0) / R_F32((u32)(0x936d94u));
    /* 0065151b: fcomp dword ptr [0x936d90] */ fx_compare(ST(0), R_F32((u32)(0x936d90u))); FPOP();
    /* 00651521: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00651523: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00651524: jae 0x651611 */ if (!fC) goto L_00651611;
L_0065152a:; BB(0x0065152a);
    /* 0065152a: push 0x42c80000 */ { u32 v = 0x42c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 0065152f: mov ecx, edi */ r_ecx = r_edi;
    /* 00651531: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00651533: push 0x43c80000 */ { u32 v = 0x43c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 00651538: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x65153bu); call_ind(t); }
    /* 0065153b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065153d: je 0x651611 */ if (fZ) goto L_00651611;
L_00651543:; BB(0x00651543);
    /* 00651543: mov dword ptr [esp + 0x18], 0x41200000 */ W32((u32)(r_esp+0x18u), 0x41200000u);
    /* 0065154b: mov dword ptr [esp + 0x1c], 0x40000000 */ W32((u32)(r_esp+0x1cu), 0x40000000u);
    /* 00651553: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x651558u); f_008587a5();
    /* 00651558: mov dword ptr [esp + 0x24], 0xc1200000 */ W32((u32)(r_esp+0x24u), 0xc1200000u);
    /* 00651560: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 00651564: fild dword ptr [esp + 0x44] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x44u)));
    /* 00651568: fdiv dword ptr [0x936d94] */ ST(0) = ST(0) / R_F32((u32)(0x936d94u));
    /* 0065156e: fmul dword ptr [0x936d78] */ ST(0) = ST(0) * R_F32((u32)(0x936d78u));
    /* 00651574: fadd dword ptr [0x936d7c] */ ST(0) = ST(0) + R_F32((u32)(0x936d7cu));
    /* 0065157a: mov dword ptr [esp + 0x28], 0x40000000 */ W32((u32)(r_esp+0x28u), 0x40000000u);
    /* 00651582: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 00651586: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x65158bu); f_008587a5();
    /* 0065158b: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 0065158f: fild dword ptr [esp + 0x44] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x44u)));
    /* 00651593: fdiv dword ptr [0x936d94] */ ST(0) = ST(0) / R_F32((u32)(0x936d94u));
    /* 00651599: fmul dword ptr [0x936d78] */ ST(0) = ST(0) * R_F32((u32)(0x936d78u));
    /* 0065159f: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 006515a4: fadd dword ptr [0x936d7c] */ ST(0) = ST(0) + R_F32((u32)(0x936d7cu));
    /* 006515aa: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 006515ae: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x6515b3u); f_0082d990();
    /* 006515b3: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006515b5: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x6515bau); f_0082d838();
    /* 006515ba: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 006515bd: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006515bf: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x6515c4u); f_0082d8bc();
    /* 006515c4: mov edx, dword ptr [edi + 0x5c] */ r_edx = R32((u32)(r_edi+0x5cu));
    /* 006515c7: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006515c9: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x6515ceu); f_0082e9e4();
    /* 006515ce: lea eax, [esp + 0x30] */ r_eax = (u32)(r_esp+0x30u);
    /* 006515d2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006515d3: lea edx, [esp + 0x1c] */ r_edx = (u32)(r_esp+0x1cu);
    /* 006515d7: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006515d9: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x6515deu); f_00830aa0();
    /* 006515de: lea eax, [esp + 0x30] */ r_eax = (u32)(r_esp+0x30u);
    /* 006515e2: push 0x42 */ { u32 v = 0x42u; r_esp -= 4; W32(r_esp, v); }
    /* 006515e4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006515e5: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x6515eau); f_0050b510();
    /* 006515ea: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006515ed: lea eax, [esp + 0x30] */ r_eax = (u32)(r_esp+0x30u);
    /* 006515f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006515f2: lea edx, [esp + 0x28] */ r_edx = (u32)(r_esp+0x28u);
    /* 006515f6: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006515f8: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x6515fdu); f_00830aa0();
    /* 006515fd: lea eax, [esp + 0x30] */ r_eax = (u32)(r_esp+0x30u);
    /* 00651601: push 0x42 */ { u32 v = 0x42u; r_esp -= 4; W32(r_esp, v); }
    /* 00651603: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00651604: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x651609u); f_0050b510();
    /* 00651609: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065160c: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x651611u); f_0082da80();
L_00651611:; BB(0x00651611);
    /* 00651611: add edi, 0xf0 */ {  u32 a = r_edi; u32 b = 0xf0u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00651617: mov ecx, edi */ r_ecx = r_edi;
    /* 00651619: call 0x5771a4 */ r_esp -= 4; W32(r_esp, 0x65161eu); f_005771a4();
    /* 0065161e: add esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00651621: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00651622: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00651623: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00651624: ret  */ FN_RET(0x0065124c); r_esp += 4; return;
L_00651625:; BB(0x00651625);
    /* 00651625: mov eax, dword ptr [edi + 0xe0] */ r_eax = R32((u32)(r_edi+0xe0u));
    /* 0065162b: fld dword ptr [edi + 0xe4] */ FPUSH(R_F32((u32)(r_edi+0xe4u)));
    /* 00651631: fadd dword ptr [edi + 0xe8] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0xe8u));
    /* 00651637: fstp dword ptr [edi + 0xe4] */ W_F32((u32)(r_edi+0xe4u), ST(0)); FPOP();
    /* 0065163d: or edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0065163f: jmp 0x6512b5 */ goto L_006512b5;
}

void f_00651644(void) /* sub_651644 */
{
    FN_ENTER(0x00651644);
    /* 00651644: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00651645: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00651646: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00651647: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00651648: mov edi, ecx */ r_edi = r_ecx;
    /* 0065164a: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0065164c: mov ecx, edi */ r_ecx = r_edi;
    /* 0065164e: push 0x43480000 */ { u32 v = 0x43480000u; r_esp -= 4; W32(r_esp, v); }
    /* 00651653: push 0x43c80000 */ { u32 v = 0x43c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 00651658: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x65165bu); call_ind(t); }
    /* 0065165b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0065165d: je 0x65172d */ if (fZ) goto L_0065172d;
L_00651663:; BB(0x00651663);
    /* 00651663: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00651665: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x65166au); f_006dc358();
    /* 0065166a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065166c: je 0x651673 */ if (fZ) goto L_00651673;
L_0065166e:; BB(0x0065166e);
    /* 0065166e: lea ebp, [edi + 0x38] */ r_ebp = (u32)(r_edi+0x38u);
    /* 00651671: jmp 0x651695 */ goto L_00651695;
L_00651673:; BB(0x00651673);
    /* 00651673: lea ebp, [edi + 0x38] */ r_ebp = (u32)(r_edi+0x38u);
    /* 00651676: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00651677: lea ebx, [edi + 0xf0] */ r_ebx = (u32)(r_edi+0xf0u);
    /* 0065167d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0065167f: call 0x57725c */ r_esp -= 4; W32(r_esp, 0x651684u); f_0057725c();
    /* 00651684: mov esi, eax */ r_esi = r_eax;
    /* 00651686: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00651688: je 0x651695 */ if (fZ) goto L_00651695;
L_0065168a:; BB(0x0065168a);
    /* 0065168a: mov edx, dword ptr [edi + 0xf0] */ r_edx = R32((u32)(r_edi+0xf0u));
    /* 00651690: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00651692: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x651695u); call_ind(t); }
L_00651695:; BB(0x00651695);
    /* 00651695: mov ecx, dword ptr [0xa8f678] */ r_ecx = R32((u32)(0xa8f678u));
    /* 0065169b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065169d: je 0x6516a4 */ if (fZ) goto L_006516a4;
L_0065169f:; BB(0x0065169f);
    /* 0065169f: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x6516a4u); f_00829cc8();
L_006516a4:; BB(0x006516a4);
    /* 006516a4: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x6516a9u); f_0082d7b0();
    /* 006516a9: lea ecx, [edi + 0xc0] */ r_ecx = (u32)(r_edi+0xc0u);
    /* 006516af: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x6516b4u); f_0082d838();
    /* 006516b4: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 006516b7: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006516b9: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x6516beu); f_0082d8bc();
    /* 006516be: mov edx, dword ptr [edi + 0x5c] */ r_edx = R32((u32)(r_edi+0x5cu));
    /* 006516c1: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006516c3: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x6516c8u); f_0082e9e4();
    /* 006516c8: mov ecx, dword ptr [0xa8f67c] */ r_ecx = R32((u32)(0xa8f67cu));
    /* 006516ce: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006516d0: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x6516d5u); f_005b8610();
    /* 006516d5: mov ecx, eax */ r_ecx = r_eax;
    /* 006516d7: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x6516dcu); f_00831758();
    /* 006516dc: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x6516e1u); f_0082da80();
    /* 006516e1: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x6516e6u); f_0082d7b0();
    /* 006516e6: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006516e8: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x6516edu); f_0082d838();
    /* 006516ed: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 006516f0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006516f2: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x6516f7u); f_0082d8bc();
    /* 006516f7: mov edx, dword ptr [edi + 0x5c] */ r_edx = R32((u32)(r_edi+0x5cu));
    /* 006516fa: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006516fc: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x651701u); f_0082e9e4();
    /* 00651701: mov ecx, dword ptr [0xa8f67c] */ r_ecx = R32((u32)(0xa8f67cu));
    /* 00651707: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00651709: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x65170eu); f_005b8610();
    /* 0065170e: mov ecx, eax */ r_ecx = r_eax;
    /* 00651710: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x651715u); f_00831758();
    /* 00651715: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x65171au); f_0082da80();
    /* 0065171a: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0065171c: je 0x65172d */ if (fZ) goto L_0065172d;
L_0065171e:; BB(0x0065171e);
    /* 0065171e: mov eax, dword ptr [edi + 0xf0] */ r_eax = R32((u32)(r_edi+0xf0u));
    /* 00651724: lea ecx, [edi + 0xf0] */ r_ecx = (u32)(r_edi+0xf0u);
    /* 0065172a: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x65172du); call_ind(t); }
L_0065172d:; BB(0x0065172d);
    /* 0065172d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0065172e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065172f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00651730: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00651731: ret  */ FN_RET(0x00651644); r_esp += 4; return;
}

void f_00651734(void) /* sub_651734 */
{
    FN_ENTER(0x00651734);
    /* 00651734: mov ecx, dword ptr [0xa8f678] */ r_ecx = R32((u32)(0xa8f678u));
    /* 0065173a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065173c: je 0x651759 */ if (fZ) goto L_00651759;
L_0065173e:; BB(0x0065173e);
    /* 0065173e: call 0x829de0 */ r_esp -= 4; W32(r_esp, 0x651743u); f_00829de0();
    /* 00651743: push dword ptr [0xa8f678] */ { u32 v = R32((u32)(0xa8f678u)); r_esp -= 4; W32(r_esp, v); }
    /* 00651749: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x65174eu); f_0082e960();
    /* 0065174e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0065174f: mov dword ptr [0xa8f678], 0 */ W32((u32)(0xa8f678u), 0x0u);
L_00651759:; BB(0x00651759);
    /* 00651759: mov ecx, dword ptr [0xa8f67c] */ r_ecx = R32((u32)(0xa8f67cu));
    /* 0065175f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00651761: je 0x651776 */ if (fZ) goto L_00651776;
L_00651763:; BB(0x00651763);
    /* 00651763: je 0x65176c */ if (fZ) goto L_0065176c;
L_00651765:; BB(0x00651765);
    /* 00651765: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00651767: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x65176cu); f_004066a8();
L_0065176c:; BB(0x0065176c);
    /* 0065176c: mov dword ptr [0xa8f67c], 0 */ W32((u32)(0xa8f67cu), 0x0u);
L_00651776:; BB(0x00651776);
    /* 00651776: ret  */ FN_RET(0x00651734); r_esp += 4; return;
}

void f_00651778(void)
{
    FN_ENTER(0x00651778);
    /* 00651778: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00651779: mov ebp, esp */ r_ebp = r_esp;
    /* 0065177b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065177d: push 0x8e68d4 */ { u32 v = 0x8e68d4u; r_esp -= 4; W32(r_esp, v); }
    /* 00651782: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00651788: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00651789: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00651790: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00651793: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00651796: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 00651799: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 0065179c: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 0065179f: push 0x10c */ { u32 v = 0x10cu; r_esp -= 4; W32(r_esp, v); }
    /* 006517a4: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 006517ab: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6517b0u); f_005caba4();
    /* 006517b0: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006517b3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006517b6: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 006517b9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006517bb: je 0x65192d */ if (fZ) goto L_0065192d;
L_006517c1:; BB(0x006517c1);
    /* 006517c1: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 006517c8: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006517cf: mov ecx, eax */ r_ecx = r_eax;
    /* 006517d1: mov eax, dword ptr [0xaca350] */ r_eax = R32((u32)(0xaca350u));
    /* 006517d6: mov dword ptr [ebp - 0x40], ecx */ W32((u32)(r_ebp+0xffffffc0u), r_ecx);
    /* 006517d9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006517da: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 006517dd: call 0x66e2e8 */ r_esp -= 4; W32(r_esp, 0x6517e2u); f_0066e2e8();
    /* 006517e2: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 006517e9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006517ec: mov dword ptr [eax], 0xb31458 */ W32((u32)(r_eax), 0xb31458u);
    /* 006517f2: lea ecx, [eax + 0xf0] */ r_ecx = (u32)(r_eax+0xf0u);
    /* 006517f8: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 006517fb: call 0x57713c */ r_esp -= 4; W32(r_esp, 0x651800u); f_0057713c();
    /* 00651800: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 00651807: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0065180a: mov eax, dword ptr [0x9c78b0] */ r_eax = R32((u32)(0x9c78b0u));
    /* 0065180f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00651812: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00651814: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00651817: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x65181au); call_ind(t); }
    /* 0065181a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0065181d: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 00651820: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 00651823: mov ebx, dword ptr [edx + 0x40] */ r_ebx = R32((u32)(r_edx+0x40u));
    /* 00651826: mov dword ptr [edx + 0xc0], eax */ W32((u32)(r_edx+0xc0u), r_eax);
    /* 0065182c: mov dword ptr [edx + 0xc4], ecx */ W32((u32)(r_edx+0xc4u), r_ecx);
    /* 00651832: mov dword ptr [edx + 0xb0], 0x42c80000 */ W32((u32)(r_edx+0xb0u), 0x42c80000u);
    /* 0065183c: mov dword ptr [edx + 0xc8], ebx */ W32((u32)(r_edx+0xc8u), r_ebx);
    /* 00651842: mov dword ptr [edx + 0xb4], eax */ W32((u32)(r_edx+0xb4u), r_eax);
    /* 00651848: mov eax, dword ptr [edx + 0x88] */ r_eax = R32((u32)(r_edx+0x88u));
    /* 0065184e: mov dword ptr [edx + 0xb8], ecx */ W32((u32)(r_edx+0xb8u), r_ecx);
    /* 00651854: mov dword ptr [edx + 0xbc], ebx */ W32((u32)(r_edx+0xbcu), r_ebx);
    /* 0065185a: mov esi, 1 */ r_esi = 0x1u;
    /* 0065185f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00651862: mov edi, 4 */ r_edi = 0x4u;
    /* 00651867: jg 0x65186b */ if ((!fZ&&fS==fO)) goto L_0065186b;
L_00651869:; BB(0x00651869);
    /* 00651869: mov eax, esi */ r_eax = r_esi;
L_0065186b:; BB(0x0065186b);
    /* 0065186b: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0065186e: mov ecx, 0 */ r_ecx = 0x0u;
    /* 00651873: jl 0x651877 */ if ((fS!=fO)) goto L_00651877;
L_00651875:; BB(0x00651875);
    /* 00651875: mov eax, edi */ r_eax = r_edi;
L_00651877:; BB(0x00651877);
    /* 00651877: mov dword ptr [edx + 0xdc], eax */ W32((u32)(r_edx+0xdcu), r_eax);
    /* 0065187d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0065187f: jle 0x6518a0 */ if ((fZ||fS!=fO)) goto L_006518a0;
L_00651881:; BB(0x00651881);
    /* 00651881: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00651884: mov eax, dword ptr [edx + 0x84] */ r_eax = R32((u32)(r_edx+0x84u));
    /* 0065188a: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0065188c: mov dword ptr [edx + ecx*4 + 0xcc], eax */ W32((u32)(r_edx+r_ecx*4+0xccu), r_eax);
    /* 00651893: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 00651899: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0065189c: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0065189e: jl 0x651881 */ if ((fS!=fO)) goto L_00651881;
L_006518a0:; BB(0x006518a0);
    /* 006518a0: mov ecx, dword ptr [edx + 0x8c] */ r_ecx = R32((u32)(r_edx+0x8cu));
    /* 006518a6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006518a8: je 0x6518b6 */ if (fZ) goto L_006518b6;
L_006518aa:; BB(0x006518aa);
    /* 006518aa: mov dword ptr [edx + 0xe0], 0x8000000 */ W32((u32)(r_edx+0xe0u), 0x8000000u);
    /* 006518b4: jmp 0x6518c0 */ goto L_006518c0;
L_006518b6:; BB(0x006518b6);
    /* 006518b6: mov dword ptr [edx + 0xe0], 0 */ W32((u32)(r_edx+0xe0u), 0x0u);
L_006518c0:; BB(0x006518c0);
    /* 006518c0: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006518c3: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 006518c6: fild dword ptr [ebp - 0x2c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd4u)));
    /* 006518c9: fdivr dword ptr [edx + 0x68] */ ST(0) = R_F32((u32)(r_edx+0x68u)) / ST(0);
    /* 006518cc: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 006518cf: fstp dword ptr [edx + 0xe8] */ W_F32((u32)(r_edx+0xe8u), ST(0)); FPOP();
    /* 006518d5: mov dword ptr [edx + 0xe4], 0 */ W32((u32)(r_edx+0xe4u), 0x0u);
    /* 006518df: mov dword ptr [edx + 0xec], eax */ W32((u32)(r_edx+0xecu), r_eax);
    /* 006518e5: call 0x57739c */ r_esp -= 4; W32(r_esp, 0x6518eau); f_0057739c();
    /* 006518ea: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006518ed: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006518ef: push 0x9c78b8 */ { u32 v = 0x9c78b8u; r_esp -= 4; W32(r_esp, v); }
    /* 006518f4: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x6518f9u); f_007b9a88();
    /* 006518f9: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006518fc: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 006518ff: or eax, 0x40000000 */ {  u32 a = r_eax; u32 b = 0x40000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00651904: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 00651907: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x65190cu); f_007b4f54();
    /* 0065190c: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_00651913:; BB(0x00651913);
    /* 00651913: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00651916: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00651919: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065191c: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0065191f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00651922: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00651929: mov esp, ebp */ r_esp = r_ebp;
    /* 0065192b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065192c: ret  */ FN_RET(0x00651778); r_esp += 4; return;
L_0065192d:; BB(0x0065192d);
    /* 0065192d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0065192f: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00651932: jmp 0x651913 */ goto L_00651913;
}

void f_00651934(void) /* sub_651934 */
{
    FN_ENTER(0x00651934);
    /* 00651934: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00651935: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00651938: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0065193a: lea edx, [ebp + 0xc0] */ r_edx = (u32)(r_ebp+0xc0u);
    /* 00651940: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00651942: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00651945: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00651946: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x65194bu); f_00830aa0();
    /* 0065194b: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
    /* 00651950: lea edx, [ebp + 0x38] */ r_edx = (u32)(r_ebp+0x38u);
    /* 00651953: add eax, 0x178 */ {  u32 a = r_eax; u32 b = 0x178u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00651958: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00651959: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0065195a: call 0x78ea2c */ r_esp -= 4; W32(r_esp, 0x65195fu); f_0078ea2c();
    /* 0065195f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00651962: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 00651966: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00651968: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0065196a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0065196c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0065196d: ja 0x651a91 */ if ((!fC&&!fZ)) goto L_00651a91;
L_00651973:; BB(0x00651973);
    /* 00651973: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 00651977: fld dword ptr [0x936d5c] */ FPUSH(R_F32((u32)(0x936d5cu)));
    /* 0065197d: fld dword ptr [0x936d60] */ FPUSH(R_F32((u32)(0x936d60u)));
    /* 00651983: fdivr dword ptr [esp + 0x28] */ ST(0) = R_F32((u32)(r_esp+0x28u)) / ST(0);
    /* 00651987: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 00651989: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 0065198b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0065198d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0065198e: ja 0x651a84 */ if ((!fC&&!fZ)) goto L_00651a84;
L_00651994:; BB(0x00651994);
    /* 00651994: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 00651998: fchs  */ ST(0) = -ST(0);
    /* 0065199a: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 0065199c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0065199e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006519a0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006519a2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006519a3: ja 0x651a9d */ if ((!fC&&!fZ)) goto L_00651a9d;
L_006519a9:; BB(0x006519a9);
    /* 006519a9: fcomp dword ptr [esp] */ fx_compare(ST(0), R_F32((u32)(r_esp))); FPOP();
    /* 006519ac: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006519ae: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006519af: jbe 0x651a17 */ if ((fC||fZ)) goto L_00651a17;
L_006519b1:; BB(0x006519b1);
    /* 006519b1: fld dword ptr [0xa489e8] */ FPUSH(R_F32((u32)(0xa489e8u)));
    /* 006519b7: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 006519bb: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 006519bd: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006519bf: fadd dword ptr [ebp + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x38u));
    /* 006519c2: fld dword ptr [0xa489ec] */ FPUSH(R_F32((u32)(0xa489ecu)));
    /* 006519c8: fld dword ptr [0xa489f0] */ FPUSH(R_F32((u32)(0xa489f0u)));
    /* 006519ce: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006519d0: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 006519d2: fadd dword ptr [ebp + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x3cu));
    /* 006519d5: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 006519d7: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 006519d9: fadd dword ptr [ebp + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x40u));
    /* 006519dc: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006519de: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006519e1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006519e3: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 006519e7: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 006519eb: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 006519ef: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006519f0: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 006519f4: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006519f6: call 0x82f09c */ r_esp -= 4; W32(r_esp, 0x6519fbu); f_0082f09c();
    /* 006519fb: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 006519ff: fcomp dword ptr [0x936d5c] */ fx_compare(ST(0), R_F32((u32)(0x936d5cu))); FPOP();
    /* 00651a05: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00651a07: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00651a08: jae 0x651a91 */ if (!fC) goto L_00651a91;
L_00651a0e:; BB(0x00651a0e);
    /* 00651a0e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00651a10: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00651a13: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00651a14: ret 8 */ FN_RET(0x00651934); r_esp += 12; return;
L_00651a17:; BB(0x00651a17);
    /* 00651a17: fld dword ptr [0xa489e8] */ FPUSH(R_F32((u32)(0xa489e8u)));
    /* 00651a1d: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 00651a21: fld dword ptr [0xa489ec] */ FPUSH(R_F32((u32)(0xa489ecu)));
    /* 00651a27: fld dword ptr [0xa489f0] */ FPUSH(R_F32((u32)(0xa489f0u)));
    /* 00651a2d: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00651a2f: fchs  */ ST(0) = -ST(0);
    /* 00651a31: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00651a33: fadd dword ptr [ebp + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x38u));
    /* 00651a36: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00651a39: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 00651a3d: fchs  */ ST(0) = -ST(0);
    /* 00651a3f: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00651a41: fadd dword ptr [ebp + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x3cu));
    /* 00651a44: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00651a48: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00651a4a: fchs  */ ST(0) = -ST(0);
    /* 00651a4c: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00651a4e: fadd dword ptr [ebp + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x40u));
    /* 00651a51: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00651a55: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00651a56: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 00651a5a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00651a5c: call 0x82f09c */ r_esp -= 4; W32(r_esp, 0x651a61u); f_0082f09c();
    /* 00651a61: movsx ecx, word ptr [0xa48a4c] */ r_ecx = (u32)(i32)(i16)R16((u32)(0xa48a4cu));
    /* 00651a68: movsx edx, word ptr [0x9acb68] */ r_edx = (u32)(i32)(i16)R16((u32)(0x9acb68u));
    /* 00651a6f: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00651a71: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
    /* 00651a75: fild dword ptr [esp + 0x14] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x14u)));
    /* 00651a79: fcomp dword ptr [esp + 0xc] */ fx_compare(ST(0), R_F32((u32)(r_esp+0xcu))); FPOP();
    /* 00651a7d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00651a7f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00651a80: jb 0x651a88 */ if (fC) goto L_00651a88;
L_00651a82:; BB(0x00651a82);
    /* 00651a82: jmp 0x651a91 */ goto L_00651a91;
L_00651a84:; BB(0x00651a84);
    /* 00651a84: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00651a86: fstp st(0) */ ST(0) = ST(0); FPOP();
L_00651a88:; BB(0x00651a88);
    /* 00651a88: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00651a8a: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00651a8d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00651a8e: ret 8 */ FN_RET(0x00651934); r_esp += 12; return;
L_00651a91:; BB(0x00651a91);
    /* 00651a91: mov eax, 1 */ r_eax = 0x1u;
    /* 00651a96: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00651a99: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00651a9a: ret 8 */ FN_RET(0x00651934); r_esp += 12; return;
L_00651a9d:; BB(0x00651a9d);
    /* 00651a9d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00651a9f: jmp 0x651a88 */ goto L_00651a88;
}

void f_00651aa4(void) /* sub_651AA4 */
{
    FN_ENTER(0x00651aa4);
    /* 00651aa4: mov dword ptr [0xa8f66c], 0x3f800000 */ W32((u32)(0xa8f66cu), 0x3f800000u);
    /* 00651aae: mov dword ptr [0xa8f670], 0x41000000 */ W32((u32)(0xa8f670u), 0x41000000u);
    /* 00651ab8: mov dword ptr [0xa8f674], 0x3fc00000 */ W32((u32)(0xa8f674u), 0x3fc00000u);
    /* 00651ac2: ret  */ FN_RET(0x00651aa4); r_esp += 4; return;
}

void f_00651ac4(void) /* sub_651AC4 */
{
    FN_ENTER(0x00651ac4);
    /* 00651ac4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00651ac5: mov ebp, esp */ r_ebp = r_esp;
    /* 00651ac7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00651ac9: push 0x8e68fc */ { u32 v = 0x8e68fcu; r_esp -= 4; W32(r_esp, v); }
    /* 00651ace: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00651ad4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00651ad5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00651adc: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00651adf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00651ae2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00651ae5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00651ae8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00651aeb: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 00651af0: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00651af7: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x651afcu); f_008581c5();
    /* 00651afc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00651afd: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00651b00: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00651b02: je 0x651b5a */ if (fZ) goto L_00651b5a;
L_00651b04:; BB(0x00651b04);
    /* 00651b04: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00651b0b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00651b12: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00651b15: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00651b17: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00651b18: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00651b19: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00651b1a: push 0x9c78a0 */ { u32 v = 0x9c78a0u; r_esp -= 4; W32(r_esp, v); }
    /* 00651b1f: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00651b21: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x651b26u); f_005b7a84();
    /* 00651b26: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00651b29: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00651b30:; BB(0x00651b30);
    /* 00651b30: mov dword ptr [0xa8f67c], eax */ W32((u32)(0xa8f67cu), r_eax);
    /* 00651b35: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00651b3c: push 0x936dfc */ { u32 v = 0x936dfcu; r_esp -= 4; W32(r_esp, v); }
    /* 00651b41: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x651b46u); f_008009dc();
    /* 00651b46: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00651b47: mov dword ptr [0xa8f678], eax */ W32((u32)(0xa8f678u), r_eax);
    /* 00651b4c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00651b4f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00651b56: mov esp, ebp */ r_esp = r_ebp;
    /* 00651b58: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00651b59: ret  */ FN_RET(0x00651ac4); r_esp += 4; return;
L_00651b5a:; BB(0x00651b5a);
    /* 00651b5a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00651b5c: jmp 0x651b30 */ goto L_00651b30;
}

void f_00651b60(void) /* sub_651B60 */
{
    FN_ENTER(0x00651b60);
    /* 00651b60: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00651b61: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00651b63: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00651b65: call 0x651b84 */ r_esp -= 4; W32(r_esp, 0x651b6au); f_00651b84();
    /* 00651b6a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00651b6e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00651b70: jne 0x651b76 */ if (!fZ) goto L_00651b76;
L_00651b72:; BB(0x00651b72);
    /* 00651b72: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00651b73: ret 4 */ FN_RET(0x00651b60); r_esp += 8; return;
L_00651b76:; BB(0x00651b76);
    /* 00651b76: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00651b77: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x651b7cu); f_005c2f74();
    /* 00651b7c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00651b7d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00651b7e: ret 4 */ FN_RET(0x00651b60); r_esp += 8; return;
}

void f_00651b84(void) /* sub_651B84 */
{
    FN_ENTER(0x00651b84);
    /* 00651b84: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00651b85: mov ebp, esp */ r_ebp = r_esp;
    /* 00651b87: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00651b89: push 0x8e6926 */ { u32 v = 0x8e6926u; r_esp -= 4; W32(r_esp, v); }
    /* 00651b8e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00651b94: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00651b95: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00651b9c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00651b9f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00651ba2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00651ba5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00651ba8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00651bab: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00651bae: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00651bb5: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00651bb8: mov dword ptr [eax], 0xb31700 */ W32((u32)(r_eax), 0xb31700u);
    /* 00651bbe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00651bbf: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x651bc4u); f_007b4e84();
    /* 00651bc4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00651bc5: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00651bc8: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x651bcdu); f_007b9c8c();
    /* 00651bcd: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00651bd0: mov dword ptr [eax], 0xb25c20 */ W32((u32)(r_eax), 0xb25c20u);
    /* 00651bd6: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00651bd9: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00651be0: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00651be3: add ecx, 0x348 */ {  u32 a = r_ecx; u32 b = 0x348u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00651be9: call 0x6111bc */ r_esp -= 4; W32(r_esp, 0x651beeu); f_006111bc();
    /* 00651bee: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00651bf5: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00651bf8: call 0x770660 */ r_esp -= 4; W32(r_esp, 0x651bfdu); f_00770660();
    /* 00651bfd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00651c00: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00651c07: mov esp, ebp */ r_esp = r_ebp;
    /* 00651c09: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00651c0a: ret  */ FN_RET(0x00651b84); r_esp += 4; return;
}

void f_00651c0c(void) /* sub_651C0C */
{
    FN_ENTER(0x00651c0c);
    /* 00651c0c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00651c0d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00651c0f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00651c11: call 0x651c30 */ r_esp -= 4; W32(r_esp, 0x651c16u); f_00651c30();
    /* 00651c16: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00651c1a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00651c1c: jne 0x651c22 */ if (!fZ) goto L_00651c22;
L_00651c1e:; BB(0x00651c1e);
    /* 00651c1e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00651c1f: ret 4 */ FN_RET(0x00651c0c); r_esp += 8; return;
L_00651c22:; BB(0x00651c22);
    /* 00651c22: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00651c23: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x651c28u); f_005c2f74();
    /* 00651c28: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00651c29: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00651c2a: ret 4 */ FN_RET(0x00651c0c); r_esp += 8; return;
}

void f_00651c30(void) /* sub_651C30 */
{
    FN_ENTER(0x00651c30);
    /* 00651c30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00651c31: mov ebp, esp */ r_ebp = r_esp;
    /* 00651c33: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00651c35: push 0x8e694e */ { u32 v = 0x8e694eu; r_esp -= 4; W32(r_esp, v); }
    /* 00651c3a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00651c40: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00651c41: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00651c48: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00651c4b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00651c4e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00651c51: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00651c54: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00651c57: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00651c5a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00651c61: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00651c64: mov dword ptr [eax], 0xb31860 */ W32((u32)(r_eax), 0xb31860u);
    /* 00651c6a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00651c6b: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x651c70u); f_007b4e84();
    /* 00651c70: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00651c71: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00651c74: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x651c79u); f_007b9c8c();
    /* 00651c79: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00651c7c: mov dword ptr [eax], 0xb25c20 */ W32((u32)(r_eax), 0xb25c20u);
    /* 00651c82: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00651c85: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00651c8c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00651c8f: add ecx, 0x348 */ {  u32 a = r_ecx; u32 b = 0x348u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00651c95: call 0x6111bc */ r_esp -= 4; W32(r_esp, 0x651c9au); f_006111bc();
    /* 00651c9a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00651ca1: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00651ca4: call 0x770660 */ r_esp -= 4; W32(r_esp, 0x651ca9u); f_00770660();
    /* 00651ca9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00651cac: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00651cb3: mov esp, ebp */ r_esp = r_ebp;
    /* 00651cb5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00651cb6: ret  */ FN_RET(0x00651c30); r_esp += 4; return;
}

void f_00651cb8(void) /* sub_651CB8 */
{
    FN_ENTER(0x00651cb8);
    /* 00651cb8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00651cb9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00651cbb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00651cbd: call 0x651cdc */ r_esp -= 4; W32(r_esp, 0x651cc2u); f_00651cdc();
    /* 00651cc2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00651cc6: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00651cc8: jne 0x651cce */ if (!fZ) goto L_00651cce;
L_00651cca:; BB(0x00651cca);
    /* 00651cca: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00651ccb: ret 4 */ FN_RET(0x00651cb8); r_esp += 8; return;
L_00651cce:; BB(0x00651cce);
    /* 00651cce: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00651ccf: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x651cd4u); f_005c2f74();
    /* 00651cd4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00651cd5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00651cd6: ret 4 */ FN_RET(0x00651cb8); r_esp += 8; return;
}

void f_00651cdc(void) /* sub_651CDC */
{
    FN_ENTER(0x00651cdc);
    /* 00651cdc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00651cdd: mov ebp, esp */ r_ebp = r_esp;
    /* 00651cdf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00651ce1: push 0x8e6976 */ { u32 v = 0x8e6976u; r_esp -= 4; W32(r_esp, v); }
    /* 00651ce6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00651cec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00651ced: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00651cf4: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00651cf7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00651cfa: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00651cfd: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00651d00: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00651d03: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00651d06: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00651d0d: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00651d10: mov dword ptr [eax], 0xb319c0 */ W32((u32)(r_eax), 0xb319c0u);
    /* 00651d16: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00651d17: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x651d1cu); f_007b4e84();
    /* 00651d1c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00651d1d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00651d20: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x651d25u); f_007b9c8c();
    /* 00651d25: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00651d28: mov dword ptr [eax], 0xb25c20 */ W32((u32)(r_eax), 0xb25c20u);
    /* 00651d2e: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00651d31: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00651d38: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00651d3b: add ecx, 0x348 */ {  u32 a = r_ecx; u32 b = 0x348u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00651d41: call 0x6111bc */ r_esp -= 4; W32(r_esp, 0x651d46u); f_006111bc();
    /* 00651d46: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00651d4d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00651d50: call 0x770660 */ r_esp -= 4; W32(r_esp, 0x651d55u); f_00770660();
    /* 00651d55: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00651d58: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00651d5f: mov esp, ebp */ r_esp = r_ebp;
    /* 00651d61: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00651d62: ret  */ FN_RET(0x00651cdc); r_esp += 4; return;
}

void f_00651d64(void) /* sub_651D64 */
{
    FN_ENTER(0x00651d64);
    /* 00651d64: mov ecx, dword ptr [0xa8f6a0] */ r_ecx = R32((u32)(0xa8f6a0u));
    /* 00651d6a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00651d6c: je 0x651d81 */ if (fZ) goto L_00651d81;
L_00651d6e:; BB(0x00651d6e);
    /* 00651d6e: je 0x651d77 */ if (fZ) goto L_00651d77;
L_00651d70:; BB(0x00651d70);
    /* 00651d70: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00651d72: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x651d77u); f_004066a8();
L_00651d77:; BB(0x00651d77);
    /* 00651d77: mov dword ptr [0xa8f6a0], 0 */ W32((u32)(0xa8f6a0u), 0x0u);
L_00651d81:; BB(0x00651d81);
    /* 00651d81: ret  */ FN_RET(0x00651d64); r_esp += 4; return;
}

void f_00651d84(void) /* sub_651D84 */
{
    FN_ENTER(0x00651d84);
    /* 00651d84: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00651d85: mov esi, ecx */ r_esi = r_ecx;
    /* 00651d87: mov eax, dword ptr [0xa8f698] */ r_eax = R32((u32)(0xa8f698u));
    /* 00651d8c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00651d8e: je 0x651e0a */ if (fZ) goto L_00651e0a;
L_00651d90:; BB(0x00651d90);
    /* 00651d90: movsx eax, word ptr [esi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x32eu));
    /* 00651d97: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00651d99: jne 0x651e0a */ if (!fZ) goto L_00651e0a;
L_00651d9b:; BB(0x00651d9b);
    /* 00651d9b: mov ecx, dword ptr [0xa8f694] */ r_ecx = R32((u32)(0xa8f694u));
    /* 00651da1: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x651da6u); f_00829cc8();
    /* 00651da6: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x651dabu); f_0082d7b0();
    /* 00651dab: lea ecx, [esi + 0x38] */ r_ecx = (u32)(r_esi+0x38u);
    /* 00651dae: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x651db3u); f_0082d838();
    /* 00651db3: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 00651db6: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00651db8: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x651dbdu); f_0082d8bc();
    /* 00651dbd: push 0x3f59999a */ { u32 v = 0x3f59999au; r_esp -= 4; W32(r_esp, v); }
    /* 00651dc2: push 0x3f59999a */ { u32 v = 0x3f59999au; r_esp -= 4; W32(r_esp, v); }
    /* 00651dc7: push 0x3f59999a */ { u32 v = 0x3f59999au; r_esp -= 4; W32(r_esp, v); }
    /* 00651dcc: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00651dce: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x651dd3u); f_0082fa0c();
    /* 00651dd3: mov ecx, dword ptr [0xa8f698] */ r_ecx = R32((u32)(0xa8f698u));
    /* 00651dd9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00651ddb: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x651de0u); f_005b8610();
    /* 00651de0: mov ecx, eax */ r_ecx = r_eax;
    /* 00651de2: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x651de7u); f_00831758();
    /* 00651de7: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x651decu); f_0082dbac();
    /* 00651dec: mov ecx, dword ptr [0xa8f698] */ r_ecx = R32((u32)(0xa8f698u));
    /* 00651df2: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00651df4: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x651df9u); f_005b8610();
    /* 00651df9: mov ecx, eax */ r_ecx = r_eax;
    /* 00651dfb: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x651e00u); f_00831758();
    /* 00651e00: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x651e05u); f_0082dab0();
    /* 00651e05: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x651e0au); f_0082da80();
L_00651e0a:; BB(0x00651e0a);
    /* 00651e0a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00651e0b: ret  */ FN_RET(0x00651d84); r_esp += 4; return;
}

void f_00651e0c(void) /* sub_651E0C */
{
    FN_ENTER(0x00651e0c);
    /* 00651e0c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00651e0d: mov edi, ecx */ r_edi = r_ecx;
    /* 00651e0f: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 00651e13: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 00651e17: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00651e19: je 0x651e25 */ if (fZ) goto L_00651e25;
L_00651e1b:; BB(0x00651e1b);
    /* 00651e1b: movsx eax, word ptr [edx] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx));
    /* 00651e1e: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00651e21: jne 0x651e2d */ if (!fZ) goto L_00651e2d;
L_00651e23:; BB(0x00651e23);
    /* 00651e23: jmp 0x651e31 */ goto L_00651e31;
L_00651e25:; BB(0x00651e25);
    /* 00651e25: movsx eax, word ptr [edx] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx));
    /* 00651e28: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00651e2b: je 0x651e79 */ if (fZ) goto L_00651e79;
L_00651e2d:; BB(0x00651e2d);
    /* 00651e2d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00651e2e: ret 8 */ FN_RET(0x00651e0c); r_esp += 12; return;
L_00651e31:; BB(0x00651e31);
    /* 00651e31: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00651e33: mov ecx, edi */ r_ecx = r_edi;
    /* 00651e35: call dword ptr [eax + 0x144] */ { u32 t = R32((u32)(r_eax+0x144u)); r_esp -= 4; W32(r_esp, 0x651e3bu); call_ind(t); }
    /* 00651e3b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00651e3d: lea eax, [edi + 0x38] */ r_eax = (u32)(r_edi+0x38u);
    /* 00651e40: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00651e41: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00651e42: call 0x5c9874 */ r_esp -= 4; W32(r_esp, 0x651e47u); f_005c9874();
    /* 00651e47: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00651e4a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00651e4c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00651e4e: mov ecx, edi */ r_ecx = r_edi;
    /* 00651e50: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x651e55u); f_007b52ec();
    /* 00651e55: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00651e56: call 0x8113bc */ r_esp -= 4; W32(r_esp, 0x651e5bu); f_008113bc();
    /* 00651e5b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00651e5c: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 00651e60: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00651e65: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 00651e69: mov edx, 1 */ r_edx = 0x1u;
    /* 00651e6e: mov word ptr [edi + 0x32e], dx */ W16((u32)(r_edi+0x32eu), (u16)r_edx);
    /* 00651e75: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00651e76: ret 8 */ FN_RET(0x00651e0c); r_esp += 12; return;
L_00651e79:; BB(0x00651e79);
    /* 00651e79: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00651e7b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00651e7d: mov ecx, edi */ r_ecx = r_edi;
    /* 00651e7f: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x651e84u); f_007b52ec();
    /* 00651e84: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00651e85: call 0x8113bc */ r_esp -= 4; W32(r_esp, 0x651e8au); f_008113bc();
    /* 00651e8a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00651e8b: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 00651e8f: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00651e94: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 00651e98: mov edx, 1 */ r_edx = 0x1u;
    /* 00651e9d: mov word ptr [edi + 0x32e], dx */ W16((u32)(r_edi+0x32eu), (u16)r_edx);
    /* 00651ea4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00651ea5: ret 8 */ FN_RET(0x00651e0c); r_esp += 12; return;
}

void f_00651ea8(void) /* sub_651EA8 */
{
    FN_ENTER(0x00651ea8);
    /* 00651ea8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00651ea9: mov ebp, esp */ r_ebp = r_esp;
    /* 00651eab: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00651ead: push 0x8e69b6 */ { u32 v = 0x8e69b6u; r_esp -= 4; W32(r_esp, v); }
    /* 00651eb2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00651eb8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00651eb9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00651ec0: sub esp, 0xb8 */ {  u32 a = r_esp; u32 b = 0xb8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00651ec6: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00651ec9: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00651ecc: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00651ecf: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00651ed2: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 00651ed9: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00651edc: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00651edf: je 0x652129 */ if (fZ) goto L_00652129;
L_00651ee5:; BB(0x00651ee5);
    /* 00651ee5: mov eax, 0x936e80 */ r_eax = 0x936e80u;
    /* 00651eea: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00651eec: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00651eef: mov ebx, dword ptr [eax + 8] */ r_ebx = R32((u32)(r_eax+0x8u));
    /* 00651ef2: mov esi, dword ptr [eax + 0xc] */ r_esi = R32((u32)(r_eax+0xcu));
    /* 00651ef5: mov edi, dword ptr [eax + 0x10] */ r_edi = R32((u32)(r_eax+0x10u));
    /* 00651ef8: mov dword ptr [ebp - 0xc4], edx */ W32((u32)(r_ebp+0xffffff3cu), r_edx);
    /* 00651efe: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 00651f01: mov dword ptr [ebp - 0xc0], ecx */ W32((u32)(r_ebp+0xffffff40u), r_ecx);
    /* 00651f07: mov dword ptr [ebp - 0xbc], ebx */ W32((u32)(r_ebp+0xffffff44u), r_ebx);
    /* 00651f0d: mov dword ptr [ebp - 0xb8], esi */ W32((u32)(r_ebp+0xffffff48u), r_esi);
    /* 00651f13: mov dword ptr [ebp - 0xb4], edi */ W32((u32)(r_ebp+0xffffff4cu), r_edi);
    /* 00651f19: mov dword ptr [ebp - 0xb0], edx */ W32((u32)(r_ebp+0xffffff50u), r_edx);
    /* 00651f1f: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 00651f22: mov dword ptr [ebp - 0xac], edx */ W32((u32)(r_ebp+0xffffff54u), r_edx);
    /* 00651f28: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 00651f2b: mov dword ptr [ebp - 0xa8], edx */ W32((u32)(r_ebp+0xffffff58u), r_edx);
    /* 00651f31: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 00651f34: mov dword ptr [ebp - 0xa4], edx */ W32((u32)(r_ebp+0xffffff5cu), r_edx);
    /* 00651f3a: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 00651f3d: mov dword ptr [ebp - 0xa0], edx */ W32((u32)(r_ebp+0xffffff60u), r_edx);
    /* 00651f43: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 00651f46: mov dword ptr [ebp - 0x9c], edx */ W32((u32)(r_ebp+0xffffff64u), r_edx);
    /* 00651f4c: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 00651f4f: mov dword ptr [ebp - 0x98], edx */ W32((u32)(r_ebp+0xffffff68u), r_edx);
    /* 00651f55: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 00651f58: mov dword ptr [ebp - 0x94], edx */ W32((u32)(r_ebp+0xffffff6cu), r_edx);
    /* 00651f5e: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 00651f61: mov dword ptr [ebp - 0x90], edx */ W32((u32)(r_ebp+0xffffff70u), r_edx);
    /* 00651f67: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 00651f6a: mov dword ptr [ebp - 0x8c], edx */ W32((u32)(r_ebp+0xffffff74u), r_edx);
    /* 00651f70: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 00651f73: mov dword ptr [ebp - 0x88], edx */ W32((u32)(r_ebp+0xffffff78u), r_edx);
    /* 00651f79: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 00651f7c: mov dword ptr [ebp - 0x84], edx */ W32((u32)(r_ebp+0xffffff7cu), r_edx);
    /* 00651f82: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 00651f85: mov eax, dword ptr [eax + 0x48] */ r_eax = R32((u32)(r_eax+0x48u));
    /* 00651f88: mov dword ptr [ebp - 0x80], edx */ W32((u32)(r_ebp+0xffffff80u), r_edx);
    /* 00651f8b: mov dword ptr [ebp - 0x7c], eax */ W32((u32)(r_ebp+0xffffff84u), r_eax);
    /* 00651f8e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00651f91: mov ecx, dword ptr [0xa8f698] */ r_ecx = R32((u32)(0xa8f698u));
    /* 00651f97: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00651f99: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 00651f9c: mov esi, dword ptr [edx + 0x3c] */ r_esi = R32((u32)(r_edx+0x3cu));
    /* 00651f9f: mov ebx, dword ptr [edx + 0x40] */ r_ebx = R32((u32)(r_edx+0x40u));
    /* 00651fa2: mov dword ptr [ebp - 0xb8], eax */ W32((u32)(r_ebp+0xffffff48u), r_eax);
    /* 00651fa8: mov dword ptr [ebp - 0xb4], esi */ W32((u32)(r_ebp+0xffffff4cu), r_esi);
    /* 00651fae: mov dword ptr [ebp - 0xb0], ebx */ W32((u32)(r_ebp+0xffffff50u), r_ebx);
    /* 00651fb4: mov dword ptr [ebp - 0x8c], esi */ W32((u32)(r_ebp+0xffffff74u), r_esi);
    /* 00651fba: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x651fbfu); f_005b8610();
    /* 00651fbf: mov edx, dword ptr [0xa8f694] */ r_edx = R32((u32)(0xa8f694u));
    /* 00651fc5: mov dword ptr [ebp - 0x84], eax */ W32((u32)(r_ebp+0xffffff7cu), r_eax);
    /* 00651fcb: mov dword ptr [ebp - 0x80], edx */ W32((u32)(r_ebp+0xffffff80u), r_edx);
    /* 00651fce: mov eax, 0x936e20 */ r_eax = 0x936e20u;
    /* 00651fd3: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00651fd5: mov ebx, dword ptr [eax + 4] */ r_ebx = R32((u32)(r_eax+0x4u));
    /* 00651fd8: mov esi, dword ptr [eax + 8] */ r_esi = R32((u32)(r_eax+0x8u));
    /* 00651fdb: mov edi, dword ptr [eax + 0xc] */ r_edi = R32((u32)(r_eax+0xcu));
    /* 00651fde: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 00651fe1: mov dword ptr [ebp - 0x78], ecx */ W32((u32)(r_ebp+0xffffff88u), r_ecx);
    /* 00651fe4: mov dword ptr [ebp - 0x74], ebx */ W32((u32)(r_ebp+0xffffff8cu), r_ebx);
    /* 00651fe7: mov dword ptr [ebp - 0x70], esi */ W32((u32)(r_ebp+0xffffff90u), r_esi);
    /* 00651fea: mov dword ptr [ebp - 0x6c], edi */ W32((u32)(r_ebp+0xffffff94u), r_edi);
    /* 00651fed: mov dword ptr [ebp - 0x68], edx */ W32((u32)(r_ebp+0xffffff98u), r_edx);
    /* 00651ff0: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 00651ff3: mov dword ptr [ebp - 0x64], edx */ W32((u32)(r_ebp+0xffffff9cu), r_edx);
    /* 00651ff6: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 00651ff9: mov dword ptr [ebp - 0x60], edx */ W32((u32)(r_ebp+0xffffffa0u), r_edx);
    /* 00651ffc: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 00651fff: mov dword ptr [ebp - 0x5c], edx */ W32((u32)(r_ebp+0xffffffa4u), r_edx);
    /* 00652002: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 00652005: mov dword ptr [ebp - 0x58], edx */ W32((u32)(r_ebp+0xffffffa8u), r_edx);
    /* 00652008: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 0065200b: mov dword ptr [ebp - 0x54], edx */ W32((u32)(r_ebp+0xffffffacu), r_edx);
    /* 0065200e: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 00652011: mov dword ptr [ebp - 0x50], edx */ W32((u32)(r_ebp+0xffffffb0u), r_edx);
    /* 00652014: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 00652017: mov dword ptr [ebp - 0x4c], edx */ W32((u32)(r_ebp+0xffffffb4u), r_edx);
    /* 0065201a: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 0065201d: mov dword ptr [ebp - 0x48], edx */ W32((u32)(r_ebp+0xffffffb8u), r_edx);
    /* 00652020: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 00652023: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 00652026: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 00652029: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 0065202c: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 0065202f: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 00652032: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 00652035: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 00652038: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0065203b: mov eax, dword ptr [eax + 0x48] */ r_eax = R32((u32)(r_eax+0x48u));
    /* 0065203e: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 00652041: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00652044: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00652047: mov ecx, dword ptr [0xa8f698] */ r_ecx = R32((u32)(0xa8f698u));
    /* 0065204d: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0065204f: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 00652052: mov esi, dword ptr [edx + 0x3c] */ r_esi = R32((u32)(r_edx+0x3cu));
    /* 00652055: mov ebx, dword ptr [edx + 0x40] */ r_ebx = R32((u32)(r_edx+0x40u));
    /* 00652058: mov dword ptr [ebp - 0x6c], eax */ W32((u32)(r_ebp+0xffffff94u), r_eax);
    /* 0065205b: mov dword ptr [ebp - 0x68], esi */ W32((u32)(r_ebp+0xffffff98u), r_esi);
    /* 0065205e: mov dword ptr [ebp - 0x64], ebx */ W32((u32)(r_ebp+0xffffff9cu), r_ebx);
    /* 00652061: mov dword ptr [ebp - 0x40], esi */ W32((u32)(r_ebp+0xffffffc0u), r_esi);
    /* 00652064: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x652069u); f_005b8610();
    /* 00652069: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0065206c: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0065206f: mov eax, dword ptr [0xa8f694] */ r_eax = R32((u32)(0xa8f694u));
    /* 00652074: lea ebx, [edx + 0x38] */ r_ebx = (u32)(r_edx+0x38u);
    /* 00652077: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0065207a: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 0065207c: push 0x45 */ { u32 v = 0x45u; r_esp -= 4; W32(r_esp, v); }
    /* 0065207e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0065207f: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x652084u); f_0050b7a4();
    /* 00652084: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00652086: push 0x46 */ { u32 v = 0x46u; r_esp -= 4; W32(r_esp, v); }
    /* 00652088: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00652089: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x65208eu); f_0050b7a4();
    /* 0065208e: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 00652095: push 0x234 */ { u32 v = 0x234u; r_esp -= 4; W32(r_esp, v); }
    /* 0065209a: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x65209fu); f_005caba4();
    /* 0065209f: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006520a2: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 006520a5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006520a7: je 0x6520d3 */ if (fZ) goto L_006520d3;
L_006520a9:; BB(0x006520a9);
    /* 006520a9: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 006520b0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006520b7: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006520ba: lea eax, [ebp - 0xc4] */ r_eax = (u32)(r_ebp+0xffffff3cu);
    /* 006520c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006520c1: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 006520c7: call 0x6441f4 */ r_esp -= 4; W32(r_esp, 0x6520ccu); f_006441f4();
    /* 006520cc: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_006520d3:; BB(0x006520d3);
    /* 006520d3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006520da: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 006520e1: push 0x234 */ { u32 v = 0x234u; r_esp -= 4; W32(r_esp, v); }
    /* 006520e6: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6520ebu); f_005caba4();
    /* 006520eb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006520ec: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 006520ef: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006520f1: je 0x65211a */ if (fZ) goto L_0065211a;
L_006520f3:; BB(0x006520f3);
    /* 006520f3: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 006520fa: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00652101: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00652104: lea eax, [ebp - 0x78] */ r_eax = (u32)(r_ebp+0xffffff88u);
    /* 00652107: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00652108: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 0065210e: call 0x6441f4 */ r_esp -= 4; W32(r_esp, 0x652113u); f_006441f4();
    /* 00652113: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0065211a:; BB(0x0065211a);
    /* 0065211a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00652121: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00652124: call 0x64de10 */ r_esp -= 4; W32(r_esp, 0x652129u); f_0064de10();
L_00652129:; BB(0x00652129);
    /* 00652129: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065212c: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0065212f: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00652132: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00652135: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0065213c: mov esp, ebp */ r_esp = r_ebp;
    /* 0065213e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065213f: ret  */ FN_RET(0x00651ea8); r_esp += 4; return;
}

