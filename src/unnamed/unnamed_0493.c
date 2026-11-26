#include "protos.h"

void f_00493080(void) /* sub_493080 */
{
    FN_ENTER(0x00493080);
    /* 00493080: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00493081: mov ebx, esp */ r_ebx = r_esp;
    /* 00493083: and esp, 0xfffffff8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 00493086: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00493087: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00493088: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0049308b: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0049308d: movzx eax, byte ptr [0xa472a4] */ r_eax = (u32)R8((u32)(0xa472a4u));
    /* 00493094: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00493096: jne 0x4930ac */ if (!fZ) goto L_004930ac;
L_00493098:; BB(0x00493098);
    /* 00493098: mov dword ptr [0xa472a8], 0x666 */ W32((u32)(0xa472a8u), 0x666u);
    /* 004930a2: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004930a7: mov byte ptr [0xa472a4], al */ W8((u32)(0xa472a4u), (u8)r_eax);
L_004930ac:; BB(0x004930ac);
    /* 004930ac: mov eax, dword ptr [ebp + 0x440] */ r_eax = R32((u32)(r_ebp+0x440u));
    /* 004930b2: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 004930b4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004930b6: je 0x4930bd */ if (fZ) goto L_004930bd;
L_004930b8:; BB(0x004930b8);
    /* 004930b8: mov esi, 0x8000 */ r_esi = 0x8000u;
L_004930bd:; BB(0x004930bd);
    /* 004930bd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004930be: push dword ptr [ebp + 0x5c] */ { u32 v = R32((u32)(r_ebp+0x5cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004930c1: call 0x7a9018 */ r_esp -= 4; W32(r_esp, 0x4930c6u); f_007a9018();
    /* 004930c6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004930c9: mov edx, dword ptr [0xa472a8] */ r_edx = R32((u32)(0xa472a8u));
    /* 004930cf: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004930d1: jge 0x4930d8 */ if ((fS==fO)) goto L_004930d8;
L_004930d3:; BB(0x004930d3);
    /* 004930d3: mov dword ptr [ebp + 0x5c], esi */ W32((u32)(r_ebp+0x5cu), r_esi);
    /* 004930d6: jmp 0x4930db */ goto L_004930db;
L_004930d8:; BB(0x004930d8);
    /* 004930d8: add dword ptr [ebp + 0x5c], edx */ { u32 ad = (u32)(r_ebp+0x5cu);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_004930db:; BB(0x004930db);
    /* 004930db: fld dword ptr [ebp + 0x38] */ FPUSH(R_F32((u32)(r_ebp+0x38u)));
    /* 004930de: fld dword ptr [ebp + 0x40] */ FPUSH(R_F32((u32)(r_ebp+0x40u)));
    /* 004930e1: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 004930e9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004930eb: fchs  */ ST(0) = -ST(0);
    /* 004930ed: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004930f0: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 004930f3: fchs  */ ST(0) = -ST(0);
    /* 004930f5: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004930f9: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x4930feu); f_0083173c();
    /* 004930fe: fcomp dword ptr [0x902c68] */ fx_compare(ST(0), R_F32((u32)(0x902c68u))); FPOP();
    /* 00493104: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00493106: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00493107: jbe 0x4931b5 */ if ((fC||fZ)) goto L_004931b5;
L_0049310d:; BB(0x0049310d);
    /* 0049310d: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00493110: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 00493114: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 00493116: fmul qword ptr [0x902950] */ ST(0) = ST(0) * R_F64((u32)(0x902950u));
    /* 0049311c: fdiv qword ptr [0x902948] */ ST(0) = ST(0) / R_F64((u32)(0x902948u));
    /* 00493122: mov edx, dword ptr [ebp + 0x440] */ r_edx = R32((u32)(r_ebp+0x440u));
    /* 00493128: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 0049312c: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 00493131: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00493136: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0049313a: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 0049313e: fistp dword ptr [esp + 0x20] */ W32((u32)(r_esp+0x20u), (u32)fx_int32(ST(0))); FPOP();
    /* 00493142: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00493146: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 0049314a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049314c: je 0x493153 */ if (fZ) goto L_00493153;
L_0049314e:; BB(0x0049314e);
    /* 0049314e: add eax, 0x8000 */ {  u32 a = r_eax; u32 b = 0x8000u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_00493153:; BB(0x00493153);
    /* 00493153: movzx edx, byte ptr [0xa472a4] */ r_edx = (u32)R8((u32)(0xa472a4u));
    /* 0049315a: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0049315d: jne 0x493172 */ if (!fZ) goto L_00493172;
L_0049315f:; BB(0x0049315f);
    /* 0049315f: mov dword ptr [0xa472ac], 0x1b4 */ W32((u32)(0xa472acu), 0x1b4u);
    /* 00493169: or edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0049316c: mov byte ptr [0xa472a4], dl */ W8((u32)(0xa472a4u), (u8)r_edx);
L_00493172:; BB(0x00493172);
    /* 00493172: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00493175: jne 0x49318d */ if (!fZ) goto L_0049318d;
L_00493177:; BB(0x00493177);
    /* 00493177: mov dword ptr [0xa472b0], 0x1555 */ W32((u32)(0xa472b0u), 0x1555u);
    /* 00493181: or edx, 0xffffff04 */ {  u32 a = r_edx; u32 b = 0xffffff04u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00493187: mov byte ptr [0xa472a4], dl */ W8((u32)(0xa472a4u), (u8)r_edx);
L_0049318d:; BB(0x0049318d);
    /* 0049318d: mov edx, dword ptr [ebp + 0x41c] */ r_edx = R32((u32)(r_ebp+0x41cu));
    /* 00493193: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00493195: jne 0x49319f */ if (!fZ) goto L_0049319f;
L_00493197:; BB(0x00493197);
    /* 00493197: mov edx, dword ptr [0xa472ac] */ r_edx = R32((u32)(0xa472acu));
    /* 0049319d: jmp 0x4931a5 */ goto L_004931a5;
L_0049319f:; BB(0x0049319f);
    /* 0049319f: mov edx, dword ptr [0xa472b0] */ r_edx = R32((u32)(0xa472b0u));
L_004931a5:; BB(0x004931a5);
    /* 004931a5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004931a6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004931a7: push dword ptr [ebp + 0x60] */ { u32 v = R32((u32)(r_ebp+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 004931aa: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x4931afu); f_007a8c74();
    /* 004931af: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004931b2: mov dword ptr [ebp + 0x60], eax */ W32((u32)(r_ebp+0x60u), r_eax);
L_004931b5:; BB(0x004931b5);
    /* 004931b5: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004931b8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004931b9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004931ba: mov esp, ebx */ r_esp = r_ebx;
    /* 004931bc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004931bd: ret  */ FN_RET(0x00493080); r_esp += 4; return;
}

void f_004931c0(void) /* sub_4931C0 */
{
    FN_ENTER(0x004931c0);
    /* 004931c0: mov eax, dword ptr [ecx + 0x38] */ r_eax = R32((u32)(r_ecx+0x38u));
    /* 004931c3: fld dword ptr [ecx + 0x3c] */ FPUSH(R_F32((u32)(r_ecx+0x3cu)));
    /* 004931c6: mov edx, dword ptr [ecx + 0x40] */ r_edx = R32((u32)(r_ecx+0x40u));
    /* 004931c9: mov dword ptr [ecx + 0x300], eax */ W32((u32)(r_ecx+0x300u), r_eax);
    /* 004931cf: mov eax, dword ptr [ecx + 0x440] */ r_eax = R32((u32)(r_ecx+0x440u));
    /* 004931d5: mov dword ptr [ecx + 0x308], edx */ W32((u32)(r_ecx+0x308u), r_edx);
    /* 004931db: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004931dd: je 0x4931ee */ if (fZ) goto L_004931ee;
L_004931df:; BB(0x004931df);
    /* 004931df: fld dword ptr [0x902c60] */ FPUSH(R_F32((u32)(0x902c60u)));
    /* 004931e5: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004931e7: fstp dword ptr [ecx + 0x304] */ W_F32((u32)(r_ecx+0x304u), ST(0)); FPOP();
    /* 004931ed: ret  */ FN_RET(0x004931c0); r_esp += 4; return;
L_004931ee:; BB(0x004931ee);
    /* 004931ee: fld dword ptr [0x902c64] */ FPUSH(R_F32((u32)(0x902c64u)));
    /* 004931f4: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004931f6: fstp dword ptr [ecx + 0x304] */ W_F32((u32)(r_ecx+0x304u), ST(0)); FPOP();
    /* 004931fc: ret  */ FN_RET(0x004931c0); r_esp += 4; return;
}

void f_00493200(void) /* sub_493200 */
{
    FN_ENTER(0x00493200);
    /* 00493200: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00493201: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00493202: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00493204: mov ecx, dword ptr [ebp + 0xa4] */ r_ecx = R32((u32)(r_ebp+0xa4u));
    /* 0049320a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049320c: je 0x493282 */ if (fZ) goto L_00493282;
L_0049320e:; BB(0x0049320e);
    /* 0049320e: lea edx, [ecx + 0x134] */ r_edx = (u32)(r_ecx+0x134u);
    /* 00493214: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00493216: jae 0x493282 */ if (!fC) goto L_00493282;
L_00493218:; BB(0x00493218);
    /* 00493218: mov eax, edx */ r_eax = r_edx;
    /* 0049321a: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0049321c: cmp eax, 0x108 */ {  u32 a = r_eax; u32 b = 0x108u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00493221: jb 0x493272 */ if (fC) goto L_00493272;
L_00493223:; BB(0x00493223);
    /* 00493223: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 00493226: lea eax, [edx - 0x108] */ r_eax = (u32)(r_edx+0xfffffef8u);
L_0049322c:; BB(0x0049322c);
    /* 0049322c: mov edi, dword ptr [ecx + 0x18] */ r_edi = R32((u32)(r_ecx+0x18u));
    /* 0049322f: and edi, 0xfffffffe */ {  u32 a = r_edi; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 00493232: mov dword ptr [ecx + 0x18], edi */ W32((u32)(r_ecx+0x18u), r_edi);
    /* 00493235: mov edi, dword ptr [ecx + 0x44] */ r_edi = R32((u32)(r_ecx+0x44u));
    /* 00493238: and edi, 0xfffffffe */ {  u32 a = r_edi; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0049323b: mov dword ptr [ecx + 0x44], edi */ W32((u32)(r_ecx+0x44u), r_edi);
    /* 0049323e: mov edi, dword ptr [ecx + 0x70] */ r_edi = R32((u32)(r_ecx+0x70u));
    /* 00493241: and edi, 0xfffffffe */ {  u32 a = r_edi; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 00493244: mov dword ptr [ecx + 0x70], edi */ W32((u32)(r_ecx+0x70u), r_edi);
    /* 00493247: mov edi, dword ptr [ecx + 0x9c] */ r_edi = R32((u32)(r_ecx+0x9cu));
    /* 0049324d: and edi, 0xfffffffe */ {  u32 a = r_edi; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 00493250: mov dword ptr [ecx + 0x9c], edi */ W32((u32)(r_ecx+0x9cu), r_edi);
    /* 00493256: mov edi, dword ptr [ecx + 0xc8] */ r_edi = R32((u32)(r_ecx+0xc8u));
    /* 0049325c: and edi, 0xfffffffe */ {  u32 a = r_edi; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0049325f: mov dword ptr [ecx + 0xc8], edi */ W32((u32)(r_ecx+0xc8u), r_edi);
    /* 00493265: add ecx, 0xdc */ {  u32 a = r_ecx; u32 b = 0xdcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0049326b: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0049326d: jbe 0x49322c */ if ((fC||fZ)) goto L_0049322c;
L_0049326f:; BB(0x0049326f);
    /* 0049326f: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
L_00493272:; BB(0x00493272);
    /* 00493272: mov eax, dword ptr [ecx + 0x18] */ r_eax = R32((u32)(r_ecx+0x18u));
    /* 00493275: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00493278: mov dword ptr [ecx + 0x18], eax */ W32((u32)(r_ecx+0x18u), r_eax);
    /* 0049327b: add ecx, 0x2c */ {  u32 a = r_ecx; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0049327e: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00493280: jb 0x493272 */ if (fC) goto L_00493272;
L_00493282:; BB(0x00493282);
    /* 00493282: mov eax, dword ptr [ebp + 0x420] */ r_eax = R32((u32)(r_ebp+0x420u));
    /* 00493288: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0049328a: jne 0x49329a */ if (!fZ) goto L_0049329a;
L_0049328c:; BB(0x0049328c);
    /* 0049328c: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0049328e: je 0x493297 */ if (fZ) goto L_00493297;
L_00493290:; BB(0x00493290);
    /* 00493290: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00493292: call 0x4932ac */ r_esp -= 4; W32(r_esp, 0x493297u); f_004932ac();
L_00493297:; BB(0x00493297);
    /* 00493297: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00493298: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00493299: ret  */ FN_RET(0x00493200); r_esp += 4; return;
L_0049329a:; BB(0x0049329a);
    /* 0049329a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0049329c: call 0x49a738 */ r_esp -= 4; W32(r_esp, 0x4932a1u); f_0049a738();
    /* 004932a1: mov eax, dword ptr [ebp + 0x420] */ r_eax = R32((u32)(r_ebp+0x420u));
    /* 004932a7: jmp 0x49328c */ goto L_0049328c;
}

void f_004932ac(void) /* sub_4932AC */
{
    FN_ENTER(0x004932ac);
    /* 004932ac: mov edx, dword ptr [ecx + 0xa4] */ r_edx = R32((u32)(r_ecx+0xa4u));
    /* 004932b2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004932b4: je 0x493314 */ if (fZ) goto L_00493314;
L_004932b6:; BB(0x004932b6);
    /* 004932b6: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 004932b9: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004932bc: mov dword ptr [edx + 0x70], eax */ W32((u32)(r_edx+0x70u), r_eax);
    /* 004932bf: mov eax, dword ptr [ecx + 0xa4] */ r_eax = R32((u32)(r_ecx+0xa4u));
    /* 004932c5: mov edx, dword ptr [eax + 0x9c] */ r_edx = R32((u32)(r_eax+0x9cu));
    /* 004932cb: or edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 004932ce: mov dword ptr [eax + 0x9c], edx */ W32((u32)(r_eax+0x9cu), r_edx);
    /* 004932d4: mov edx, dword ptr [ecx + 0xa4] */ r_edx = R32((u32)(r_ecx+0xa4u));
    /* 004932da: mov eax, dword ptr [edx + 0xc8] */ r_eax = R32((u32)(r_edx+0xc8u));
    /* 004932e0: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004932e3: mov dword ptr [edx + 0xc8], eax */ W32((u32)(r_edx+0xc8u), r_eax);
    /* 004932e9: mov edx, dword ptr [ecx + 0xa4] */ r_edx = R32((u32)(r_ecx+0xa4u));
    /* 004932ef: mov eax, dword ptr [edx + 0xf4] */ r_eax = R32((u32)(r_edx+0xf4u));
    /* 004932f5: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004932f8: mov dword ptr [edx + 0xf4], eax */ W32((u32)(r_edx+0xf4u), r_eax);
    /* 004932fe: mov eax, dword ptr [ecx + 0xa4] */ r_eax = R32((u32)(r_ecx+0xa4u));
    /* 00493304: mov ecx, dword ptr [eax + 0x120] */ r_ecx = R32((u32)(r_eax+0x120u));
    /* 0049330a: or ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0049330d: mov dword ptr [eax + 0x120], ecx */ W32((u32)(r_eax+0x120u), r_ecx);
    /* 00493313: ret  */ FN_RET(0x004932ac); r_esp += 4; return;
L_00493314:; BB(0x00493314);
    /* 00493314: ret  */ FN_RET(0x004932ac); r_esp += 4; return;
}

void f_00493318(void) /* sub_493318 */
{
    FN_ENTER(0x00493318);
    /* 00493318: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00493319: sub esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0049331c: mov edx, dword ptr [ecx + 0x37c] */ r_edx = R32((u32)(r_ecx+0x37cu));
    /* 00493322: lea eax, [edx - 1] */ r_eax = (u32)(r_edx+0xffffffffu);
    /* 00493325: cmp eax, 0x24 */ {  u32 a = r_eax; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00493328: ja 0x4933d5 */ if ((!fC&&!fZ)) goto L_004933d5;
L_0049332e:; BB(0x0049332e);
    /* 0049332e: mov eax, dword ptr [edx*4 + 0x90249c] */ r_eax = R32((u32)(r_edx*4+0x90249cu));
    /* 00493335: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_004933d5:; BB(0x004933d5);
    /* 004933d5: mov esi, 0xa47324 */ r_esi = 0xa47324u;
    /* 004933da: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004933db: push 0xa47318 */ { u32 v = 0xa47318u; r_esp -= 4; W32(r_esp, v); }
    /* 004933e0: call 0x836208 */ r_esp -= 4; W32(r_esp, 0x4933e5u); f_00836208();
    /* 004933e5: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
    /* 004933e9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004933ec: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 004933f0: fmul dword ptr [0x902538] */ ST(0) = ST(0) * R_F32((u32)(0x902538u));
    /* 004933f6: fld dword ptr [0x902534] */ FPUSH(R_F32((u32)(0x902534u)));
    /* 004933fc: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004933fe: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00493400: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00493401: jbe 0x493405 */ if ((fC||fZ)) goto L_00493405;
L_00493403:; BB(0x00493403);
    /* 00493403: fst st(1) */ ST(1) = ST(0);
L_00493405:; BB(0x00493405);
    /* 00493405: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00493407: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 0049340b: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x493410u); f_008587a5();
    /* 00493410: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 00493414: fild dword ptr [esp + 0x30] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x30u)));
    /* 00493418: fdiv dword ptr [0x902c54] */ ST(0) = ST(0) / R_F32((u32)(0x902c54u));
    /* 0049341e: fadd dword ptr [0x902c58] */ ST(0) = ST(0) + R_F32((u32)(0x902c58u));
    /* 00493424: fmul dword ptr [esp + 0x38] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x38u));
    /* 00493428: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0049342b: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x493430u); f_008587a5();
    /* 00493430: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 00493434: fild dword ptr [esp + 0x30] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x30u)));
    /* 00493438: fdiv dword ptr [0x902c54] */ ST(0) = ST(0) / R_F32((u32)(0x902c54u));
    /* 0049343e: fadd dword ptr [0x902c58] */ ST(0) = ST(0) + R_F32((u32)(0x902c58u));
    /* 00493444: fmul dword ptr [esp + 0x38] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x38u));
    /* 00493448: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0049344c: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x493451u); f_008587a5();
    /* 00493451: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 00493455: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 00493459: fild dword ptr [esp + 0x30] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x30u)));
    /* 0049345d: fdiv dword ptr [0x902c54] */ ST(0) = ST(0) / R_F32((u32)(0x902c54u));
    /* 00493463: fadd dword ptr [0x902c58] */ ST(0) = ST(0) + R_F32((u32)(0x902c58u));
    /* 00493469: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 0049346d: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0049346f: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00493473: mov eax, dword ptr [0xa47318] */ r_eax = R32((u32)(0xa47318u));
    /* 00493478: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0049347c: mov eax, dword ptr [0xa4731c] */ r_eax = R32((u32)(0xa4731cu));
    /* 00493481: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00493485: mov eax, dword ptr [0xa47320] */ r_eax = R32((u32)(0xa47320u));
    /* 0049348a: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0049348e: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 00493491: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x493496u); f_0082ebac();
    /* 00493496: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 0049349a: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0049349f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004934a0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004934a1: call 0x4d85bc */ r_esp -= 4; W32(r_esp, 0x4934a6u); f_004d85bc();
    /* 004934a6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004934a9: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004934ac: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004934ad: ret  */ FN_RET(0x00493318); r_esp += 4; return;
}

void f_00493337(void)
{
    FN_ENTER(0x00493337);
    /* 00493337: fild dword ptr [ecx + 0x414] */ FPUSH((long double)(i32)R32((u32)(r_ecx+0x414u)));
    /* 0049333d: fadd dword ptr [0x902c5c] */ ST(0) = ST(0) + R_F32((u32)(0x902c5cu));
    /* 00493343: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 00493347: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 0049334c: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00493351: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 00493355: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 00493359: fistp dword ptr [esp + 0x28] */ W32((u32)(r_esp+0x28u), (u32)fx_int32(ST(0))); FPOP();
    /* 0049335d: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 00493361: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 00493365: cmp eax, dword ptr [ecx + 0x418] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x418u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0049336b: jge 0x4934a9 */ if ((fS==fO)) goto L_004934a9;
L_00493371:; BB(0x00493371);
    /* 00493371: call 0x49399c */ r_esp -= 4; W32(r_esp, 0x493376u); f_0049399c();
    /* 00493376: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00493379: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0049337a: ret  */ FN_RET(0x00493337); r_esp += 4; return;
L_004934a9:; BB(0x004934a9);
    /* 004934a9: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004934ac: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004934ad: ret  */ FN_RET(0x00493337); r_esp += 4; return;
}

void f_0049337b(void)
{
    FN_ENTER(0x0049337b);
    /* 0049337b: call 0x493ae4 */ r_esp -= 4; W32(r_esp, 0x493380u); f_00493ae4();
    /* 00493380: jmp 0x4934a9 */ goto L_004934a9;
L_004934a9:; BB(0x004934a9);
    /* 004934a9: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004934ac: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004934ad: ret  */ FN_RET(0x0049337b); r_esp += 4; return;
}

void f_00493385(void)
{
    FN_ENTER(0x00493385);
    /* 00493385: call 0x493ae4 */ r_esp -= 4; W32(r_esp, 0x49338au); f_00493ae4();
    /* 0049338a: jmp 0x4934a9 */ goto L_004934a9;
L_004934a9:; BB(0x004934a9);
    /* 004934a9: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004934ac: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004934ad: ret  */ FN_RET(0x00493385); r_esp += 4; return;
}

void f_0049338f(void)
{
    FN_ENTER(0x0049338f);
    /* 0049338f: call 0x493ae4 */ r_esp -= 4; W32(r_esp, 0x493394u); f_00493ae4();
    /* 00493394: jmp 0x4934a9 */ goto L_004934a9;
L_004934a9:; BB(0x004934a9);
    /* 004934a9: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004934ac: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004934ad: ret  */ FN_RET(0x0049338f); r_esp += 4; return;
}

void f_00493399(void)
{
    FN_ENTER(0x00493399);
    /* 00493399: call 0x493c2c */ r_esp -= 4; W32(r_esp, 0x49339eu); f_00493c2c();
    /* 0049339e: jmp 0x4934a9 */ goto L_004934a9;
L_004934a9:; BB(0x004934a9);
    /* 004934a9: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004934ac: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004934ad: ret  */ FN_RET(0x00493399); r_esp += 4; return;
}

void f_004933a3(void)
{
    FN_ENTER(0x004933a3);
    /* 004933a3: call 0x4934b0 */ r_esp -= 4; W32(r_esp, 0x4933a8u); f_004934b0();
    /* 004933a8: jmp 0x4934a9 */ goto L_004934a9;
L_004934a9:; BB(0x004934a9);
    /* 004934a9: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004934ac: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004934ad: ret  */ FN_RET(0x004933a3); r_esp += 4; return;
}

void f_004933ad(void)
{
    FN_ENTER(0x004933ad);
    /* 004933ad: call 0x4936a8 */ r_esp -= 4; W32(r_esp, 0x4933b2u); f_004936a8();
    /* 004933b2: jmp 0x4934a9 */ goto L_004934a9;
L_004934a9:; BB(0x004934a9);
    /* 004934a9: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004934ac: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004934ad: ret  */ FN_RET(0x004933ad); r_esp += 4; return;
}

void f_004933b7(void)
{
    FN_ENTER(0x004933b7);
    /* 004933b7: call 0x49399c */ r_esp -= 4; W32(r_esp, 0x4933bcu); f_0049399c();
    /* 004933bc: jmp 0x4934a9 */ goto L_004934a9;
L_004934a9:; BB(0x004934a9);
    /* 004934a9: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004934ac: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004934ad: ret  */ FN_RET(0x004933b7); r_esp += 4; return;
}

void f_004933c1(void)
{
    FN_ENTER(0x004933c1);
    /* 004933c1: call 0x493ae4 */ r_esp -= 4; W32(r_esp, 0x4933c6u); f_00493ae4();
    /* 004933c6: jmp 0x4934a9 */ goto L_004934a9;
L_004934a9:; BB(0x004934a9);
    /* 004934a9: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004934ac: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004934ad: ret  */ FN_RET(0x004933c1); r_esp += 4; return;
}

void f_004933cb(void)
{
    FN_ENTER(0x004933cb);
    /* 004933cb: call 0x493c2c */ r_esp -= 4; W32(r_esp, 0x4933d0u); f_00493c2c();
    /* 004933d0: jmp 0x4934a9 */ goto L_004934a9;
L_004934a9:; BB(0x004934a9);
    /* 004934a9: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004934ac: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004934ad: ret  */ FN_RET(0x004933cb); r_esp += 4; return;
}

void f_004933d5(void)
{
    FN_ENTER(0x004933d5);
    /* 004933d5: mov esi, 0xa47324 */ r_esi = 0xa47324u;
    /* 004933da: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004933db: push 0xa47318 */ { u32 v = 0xa47318u; r_esp -= 4; W32(r_esp, v); }
    /* 004933e0: call 0x836208 */ r_esp -= 4; W32(r_esp, 0x4933e5u); f_00836208();
    /* 004933e5: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
    /* 004933e9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004933ec: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 004933f0: fmul dword ptr [0x902538] */ ST(0) = ST(0) * R_F32((u32)(0x902538u));
    /* 004933f6: fld dword ptr [0x902534] */ FPUSH(R_F32((u32)(0x902534u)));
    /* 004933fc: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004933fe: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00493400: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00493401: jbe 0x493405 */ if ((fC||fZ)) goto L_00493405;
L_00493403:; BB(0x00493403);
    /* 00493403: fst st(1) */ ST(1) = ST(0);
L_00493405:; BB(0x00493405);
    /* 00493405: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00493407: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 0049340b: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x493410u); f_008587a5();
    /* 00493410: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 00493414: fild dword ptr [esp + 0x30] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x30u)));
    /* 00493418: fdiv dword ptr [0x902c54] */ ST(0) = ST(0) / R_F32((u32)(0x902c54u));
    /* 0049341e: fadd dword ptr [0x902c58] */ ST(0) = ST(0) + R_F32((u32)(0x902c58u));
    /* 00493424: fmul dword ptr [esp + 0x38] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x38u));
    /* 00493428: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0049342b: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x493430u); f_008587a5();
    /* 00493430: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 00493434: fild dword ptr [esp + 0x30] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x30u)));
    /* 00493438: fdiv dword ptr [0x902c54] */ ST(0) = ST(0) / R_F32((u32)(0x902c54u));
    /* 0049343e: fadd dword ptr [0x902c58] */ ST(0) = ST(0) + R_F32((u32)(0x902c58u));
    /* 00493444: fmul dword ptr [esp + 0x38] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x38u));
    /* 00493448: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0049344c: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x493451u); f_008587a5();
    /* 00493451: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 00493455: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 00493459: fild dword ptr [esp + 0x30] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x30u)));
    /* 0049345d: fdiv dword ptr [0x902c54] */ ST(0) = ST(0) / R_F32((u32)(0x902c54u));
    /* 00493463: fadd dword ptr [0x902c58] */ ST(0) = ST(0) + R_F32((u32)(0x902c58u));
    /* 00493469: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 0049346d: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0049346f: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00493473: mov eax, dword ptr [0xa47318] */ r_eax = R32((u32)(0xa47318u));
    /* 00493478: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0049347c: mov eax, dword ptr [0xa4731c] */ r_eax = R32((u32)(0xa4731cu));
    /* 00493481: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00493485: mov eax, dword ptr [0xa47320] */ r_eax = R32((u32)(0xa47320u));
    /* 0049348a: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0049348e: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 00493491: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x493496u); f_0082ebac();
    /* 00493496: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 0049349a: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0049349f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004934a0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004934a1: call 0x4d85bc */ r_esp -= 4; W32(r_esp, 0x4934a6u); f_004d85bc();
    /* 004934a6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004934a9: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004934ac: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004934ad: ret  */ FN_RET(0x004933d5); r_esp += 4; return;
}

void f_004934b0(void) /* sub_4934B0 */
{
    FN_ENTER(0x004934b0);
    /* 004934b0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004934b1: sub esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004934b4: movzx edx, byte ptr [0xa472b4] */ r_edx = (u32)R8((u32)(0xa472b4u));
    /* 004934bb: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004934be: jne 0x4934d3 */ if (!fZ) goto L_004934d3;
L_004934c0:; BB(0x004934c0);
    /* 004934c0: mov dword ptr [0xa47330], 0x40a00000 */ W32((u32)(0xa47330u), 0x40a00000u);
    /* 004934ca: or edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 004934cd: mov byte ptr [0xa472b4], dl */ W8((u32)(0xa472b4u), (u8)r_edx);
L_004934d3:; BB(0x004934d3);
    /* 004934d3: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004934d6: jne 0x4934f5 */ if (!fZ) goto L_004934f5;
L_004934d8:; BB(0x004934d8);
    /* 004934d8: mov eax, dword ptr [0xa47330] */ r_eax = R32((u32)(0xa47330u));
    /* 004934dd: mov dword ptr [0xa47338], 0xc0a00000 */ W32((u32)(0xa47338u), 0xc0a00000u);
    /* 004934e7: or edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 004934ea: mov dword ptr [0xa4733c], eax */ W32((u32)(0xa4733cu), r_eax);
    /* 004934ef: mov byte ptr [0xa472b4], dl */ W8((u32)(0xa472b4u), (u8)r_edx);
L_004934f5:; BB(0x004934f5);
    /* 004934f5: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004934f8: jne 0x49351a */ if (!fZ) goto L_0049351a;
L_004934fa:; BB(0x004934fa);
    /* 004934fa: mov dword ptr [0xa47344], 0x42200000 */ W32((u32)(0xa47344u), 0x42200000u);
    /* 00493504: or edx, 0xffffff04 */ {  u32 a = r_edx; u32 b = 0xffffff04u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0049350a: mov byte ptr [0xa472b4], dl */ W8((u32)(0xa472b4u), (u8)r_edx);
    /* 00493510: mov dword ptr [0xa47348], 0x42200000 */ W32((u32)(0xa47348u), 0x42200000u);
L_0049351a:; BB(0x0049351a);
    /* 0049351a: mov edx, dword ptr [0xa47318] */ r_edx = R32((u32)(0xa47318u));
    /* 00493520: mov ebx, dword ptr [0xa4731c] */ r_ebx = R32((u32)(0xa4731cu));
    /* 00493526: mov eax, dword ptr [0xa47320] */ r_eax = R32((u32)(0xa47320u));
    /* 0049352b: fld dword ptr [ecx + 0x4e4] */ FPUSH(R_F32((u32)(r_ecx+0x4e4u)));
    /* 00493531: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 00493534: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 00493538: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0049353c: mov eax, dword ptr [0xa47324] */ r_eax = R32((u32)(0xa47324u));
    /* 00493541: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 00493545: mov eax, dword ptr [0xa47328] */ r_eax = R32((u32)(0xa47328u));
    /* 0049354a: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0049354e: mov eax, dword ptr [0xa4732c] */ r_eax = R32((u32)(0xa4732cu));
    /* 00493553: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00493557: fcom dword ptr [0x902c4c] */ fx_compare(ST(0), R_F32((u32)(0x902c4cu))); 
    /* 0049355d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0049355f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00493560: jbe 0x4935d4 */ if ((fC||fZ)) goto L_004935d4;
L_00493562:; BB(0x00493562);
    /* 00493562: fld dword ptr [0xa47334] */ FPUSH(R_F32((u32)(0xa47334u)));
    /* 00493568: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0049356a: fadd dword ptr [esp] */ ST(0) = ST(0) + R_F32((u32)(r_esp));
    /* 0049356d: fld dword ptr [0xa47338] */ FPUSH(R_F32((u32)(0xa47338u)));
    /* 00493573: fld dword ptr [0xa4733c] */ FPUSH(R_F32((u32)(0xa4733cu)));
    /* 00493579: fld dword ptr [0xa47340] */ FPUSH(R_F32((u32)(0xa47340u)));
    /* 0049357f: fld dword ptr [0xa47344] */ FPUSH(R_F32((u32)(0xa47344u)));
    /* 00493585: fld dword ptr [0xa47348] */ FPUSH(R_F32((u32)(0xa47348u)));
    /* 0049358b: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0049358d: fmul st(6) */ ST(0) = ST(0) * ST(6);
    /* 0049358f: fadd dword ptr [esp + 4] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x4u));
    /* 00493593: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00493595: fmul st(6) */ ST(0) = ST(0) * ST(6);
    /* 00493597: fadd dword ptr [esp + 8] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x8u));
    /* 0049359b: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0049359d: fmul st(6) */ ST(0) = ST(0) * ST(6);
    /* 0049359f: fadd dword ptr [esp + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0xcu));
    /* 004935a3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004935a5: fmul st(6) */ ST(0) = ST(0) * ST(6);
    /* 004935a7: fadd dword ptr [esp + 0x10] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x10u));
    /* 004935ab: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 004935ad: fmulp st(6) */ ST(6) = ST(6) * ST(0); FPOP();
    /* 004935af: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 004935b1: fadd dword ptr [esp + 0x14] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x14u));
    /* 004935b5: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 004935b7: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004935ba: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004935bc: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 004935c0: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004935c4: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004935c6: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 004935ca: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004935cc: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 004935d0: fst dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0));
L_004935d4:; BB(0x004935d4);
    /* 004935d4: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004935d6: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 004935d9: lea ebx, [esp + 0xc] */ r_ebx = (u32)(r_esp+0xcu);
    /* 004935dd: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004935de: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004935df: call 0x836208 */ r_esp -= 4; W32(r_esp, 0x4935e4u); f_00836208();
    /* 004935e4: fstp dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 004935e8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004935eb: fld dword ptr [esp + 0x40] */ FPUSH(R_F32((u32)(r_esp+0x40u)));
    /* 004935ef: fmul dword ptr [0x902540] */ ST(0) = ST(0) * R_F32((u32)(0x902540u));
    /* 004935f5: fld dword ptr [0x90253c] */ FPUSH(R_F32((u32)(0x90253cu)));
    /* 004935fb: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004935fd: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004935ff: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00493600: jbe 0x493604 */ if ((fC||fZ)) goto L_00493604;
L_00493602:; BB(0x00493602);
    /* 00493602: fst st(1) */ ST(1) = ST(0);
L_00493604:; BB(0x00493604);
    /* 00493604: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00493606: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
    /* 0049360a: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x49360fu); f_008587a5();
    /* 0049360f: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 00493613: fild dword ptr [esp + 0x30] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x30u)));
    /* 00493617: fdiv dword ptr [0x902c44] */ ST(0) = ST(0) / R_F32((u32)(0x902c44u));
    /* 0049361d: fadd dword ptr [0x902c48] */ ST(0) = ST(0) + R_F32((u32)(0x902c48u));
    /* 00493623: fmul dword ptr [esp + 0x40] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x40u));
    /* 00493627: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 0049362b: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x493630u); f_008587a5();
    /* 00493630: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 00493634: fild dword ptr [esp + 0x38] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x38u)));
    /* 00493638: fdiv dword ptr [0x902c44] */ ST(0) = ST(0) / R_F32((u32)(0x902c44u));
    /* 0049363e: fadd dword ptr [0x902c48] */ ST(0) = ST(0) + R_F32((u32)(0x902c48u));
    /* 00493644: fmul dword ptr [esp + 0x40] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x40u));
    /* 00493648: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 0049364c: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x493651u); f_008587a5();
    /* 00493651: fld dword ptr [esp + 0x40] */ FPUSH(R_F32((u32)(r_esp+0x40u)));
    /* 00493655: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 00493659: fild dword ptr [esp + 0x38] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x38u)));
    /* 0049365d: fdiv dword ptr [0x902c44] */ ST(0) = ST(0) / R_F32((u32)(0x902c44u));
    /* 00493663: fadd dword ptr [0x902c48] */ ST(0) = ST(0) + R_F32((u32)(0x902c48u));
    /* 00493669: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 0049366c: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0049366e: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 00493672: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 00493676: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0049367a: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 0049367e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00493682: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 00493686: lea ecx, [esp + 0x24] */ r_ecx = (u32)(r_esp+0x24u);
    /* 0049368a: lea edx, [esp + 0x18] */ r_edx = (u32)(r_esp+0x18u);
    /* 0049368e: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x493693u); f_0082ebac();
    /* 00493693: lea eax, [esp + 0x24] */ r_eax = (u32)(r_esp+0x24u);
    /* 00493697: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0049369c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0049369d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049369e: call 0x4d85bc */ r_esp -= 4; W32(r_esp, 0x4936a3u); f_004d85bc();
    /* 004936a3: add esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004936a6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004936a7: ret  */ FN_RET(0x004934b0); r_esp += 4; return;
}

void f_004936a8(void) /* sub_4936A8 */
{
    FN_ENTER(0x004936a8);
    /* 004936a8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004936a9: sub esp, 0x78 */ {  u32 a = r_esp; u32 b = 0x78u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004936ac: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004936ae: mov edx, dword ptr [ebx + 0x38] */ r_edx = R32((u32)(r_ebx+0x38u));
    /* 004936b1: fld dword ptr [ebx + 0x3c] */ FPUSH(R_F32((u32)(r_ebx+0x3cu)));
    /* 004936b4: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 004936b9: fld dword ptr [0x902c34] */ FPUSH(R_F32((u32)(0x902c34u)));
    /* 004936bf: mov ecx, dword ptr [ebx + 0x40] */ r_ecx = R32((u32)(r_ebx+0x40u));
    /* 004936c2: mov ebx, dword ptr [ebx + 0x440] */ r_ebx = R32((u32)(r_ebx+0x440u));
    /* 004936c8: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004936ca: je 0x4936d0 */ if (fZ) goto L_004936d0;
L_004936cc:; BB(0x004936cc);
    /* 004936cc: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 004936ce: jmp 0x4936d2 */ goto L_004936d2;
L_004936d0:; BB(0x004936d0);
    /* 004936d0: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
L_004936d2:; BB(0x004936d2);
    /* 004936d2: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004936d4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004936d6: jle 0x493993 */ if ((fZ||fS!=fO)) goto L_00493993;
L_004936dc:; BB(0x004936dc);
    /* 004936dc: fstp dword ptr [esp + 0x68] */ W_F32((u32)(r_esp+0x68u), ST(0)); FPOP();
    /* 004936e0: mov dword ptr [esp + 0x64], ecx */ W32((u32)(r_esp+0x64u), r_ecx);
    /* 004936e4: mov dword ptr [esp + 0x70], edx */ W32((u32)(r_esp+0x70u), r_edx);
    /* 004936e8: mov dword ptr [esp + 0x60], esi */ W32((u32)(r_esp+0x60u), r_esi);
    /* 004936ec: mov dword ptr [esp + 0x5c], edi */ W32((u32)(r_esp+0x5cu), r_edi);
    /* 004936f0: mov dword ptr [esp + 0x58], ebp */ W32((u32)(r_esp+0x58u), r_ebp);
    /* 004936f4: mov ebp, eax */ r_ebp = r_eax;
L_004936f6:; BB(0x004936f6);
    /* 004936f6: mov esi, dword ptr [ebx*4 + 0xaad720] */ r_esi = R32((u32)(r_ebx*4+0xaad720u));
    /* 004936fd: mov edi, dword ptr [0xa47318] */ r_edi = R32((u32)(0xa47318u));
    /* 00493703: fld dword ptr [0xa4731c] */ FPUSH(R_F32((u32)(0xa4731cu)));
    /* 00493709: mov ecx, dword ptr [0xa4731c] */ r_ecx = R32((u32)(0xa4731cu));
    /* 0049370f: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00493711: mov edx, dword ptr [0xa47320] */ r_edx = R32((u32)(0xa47320u));
    /* 00493717: je 0x493997 */ if (fZ) goto L_00493997;
L_0049371d:; BB(0x0049371d);
    /* 0049371d: fld dword ptr [esp + 0x68] */ FPUSH(R_F32((u32)(r_esp+0x68u)));
    /* 00493721: fld dword ptr [esi + 0x3c] */ FPUSH(R_F32((u32)(r_esi+0x3cu)));
    /* 00493724: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00493726: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 0049372a: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0049372c: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00493730: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00493734: mov edx, dword ptr [esi + 0x40] */ r_edx = R32((u32)(r_esi+0x40u));
    /* 00493737: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 0049373b: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 0049373e: mov edi, dword ptr [esi + 0x38] */ r_edi = R32((u32)(r_esi+0x38u));
    /* 00493741: mov dword ptr [esp + 0xc], edi */ W32((u32)(r_esp+0xcu), r_edi);
    /* 00493745: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 00493749: mov edx, dword ptr [esp + 0x70] */ r_edx = R32((u32)(r_esp+0x70u));
    /* 0049374d: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 00493751: mov edx, dword ptr [esp + 0x64] */ r_edx = R32((u32)(r_esp+0x64u));
    /* 00493755: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 00493759: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 0049375d: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 00493761: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x493766u); f_0082f9c4();
    /* 00493766: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 0049376a: fstp dword ptr [esp + 0x74] */ W_F32((u32)(r_esp+0x74u), ST(0)); FPOP();
    /* 0049376e: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 00493772: mov dword ptr [esp + 0x1c], 0 */ W32((u32)(r_esp+0x1cu), 0x0u);
    /* 0049377a: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x49377fu); f_0083173c();
    /* 0049377f: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 00493783: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00493785: fld dword ptr [0x902554] */ FPUSH(R_F32((u32)(0x902554u)));
    /* 0049378b: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0049378d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0049378f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00493790: jb 0x493794 */ if (fC) goto L_00493794;
L_00493792:; BB(0x00493792);
    /* 00493792: fst st(1) */ ST(1) = ST(0);
L_00493794:; BB(0x00493794);
    /* 00493794: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00493796: movzx edx, byte ptr [0xa4734c] */ r_edx = (u32)R8((u32)(0xa4734cu));
    /* 0049379d: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004937a0: jne 0x4937b8 */ if (!fZ) goto L_004937b8;
L_004937a2:; BB(0x004937a2);
    /* 004937a2: mov dword ptr [0xa47350], 0x420dae14 */ W32((u32)(0xa47350u), 0x420dae14u);
    /* 004937ac: or edx, 0xffffff01 */ {  u32 a = r_edx; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 004937b2: mov byte ptr [0xa4734c], dl */ W8((u32)(0xa4734cu), (u8)r_edx);
L_004937b8:; BB(0x004937b8);
    /* 004937b8: fld dword ptr [0x902c10] */ FPUSH(R_F32((u32)(0x902c10u)));
    /* 004937be: fmul dword ptr [esp + 0x74] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x74u));
    /* 004937c2: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 004937c4: fadd dword ptr [0x902c14] */ ST(0) = ST(0) + R_F32((u32)(0x902c14u));
    /* 004937ca: fcom dword ptr [0x902550] */ fx_compare(ST(0), R_F32((u32)(0x902550u))); 
    /* 004937d0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004937d2: mov dword ptr [esp + 0x24], 0 */ W32((u32)(r_esp+0x24u), 0x0u);
    /* 004937da: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004937db: jae 0x493898 */ if (!fC) goto L_00493898;
L_004937e1:; BB(0x004937e1);
    /* 004937e1: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004937e3: fld dword ptr [esp + 0x74] */ FPUSH(R_F32((u32)(r_esp+0x74u)));
    /* 004937e7: fcomp dword ptr [0x902c2c] */ fx_compare(ST(0), R_F32((u32)(0x902c2cu))); FPOP();
    /* 004937ed: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004937ef: mov edx, 0x40a00000 */ r_edx = 0x40a00000u;
    /* 004937f4: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 004937f8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004937f9: jbe 0x49388b */ if ((fC||fZ)) goto L_0049388b;
L_004937ff:; BB(0x004937ff);
    /* 004937ff: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00493801: fld dword ptr [0x902c28] */ FPUSH(R_F32((u32)(0x902c28u)));
    /* 00493807: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 00493809: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0049380b: fdiv dword ptr [esp + 0x74] */ ST(0) = ST(0) / R_F32((u32)(r_esp+0x74u));
    /* 0049380f: fld dword ptr [0xa47350] */ FPUSH(R_F32((u32)(0xa47350u)));
    /* 00493815: mov edx, dword ptr [0xa47350] */ r_edx = R32((u32)(0xa47350u));
    /* 0049381b: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0049381d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0049381f: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
    /* 00493823: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00493824: jbe 0x493881 */ if ((fC||fZ)) goto L_00493881;
L_00493826:; BB(0x00493826);
    /* 00493826: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00493828: fld dword ptr [esp + 0x6c] */ FPUSH(R_F32((u32)(r_esp+0x6cu)));
    /* 0049382c: fld dword ptr [esp + 0x74] */ FPUSH(R_F32((u32)(r_esp+0x74u)));
    /* 00493830: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00493832: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00493834: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00493836: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00493838: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0049383a: fst dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0));
    /* 0049383e: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00493840: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00493842: fstp dword ptr [esp + 0x74] */ W_F32((u32)(r_esp+0x74u), ST(0)); FPOP();
    /* 00493846: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 0049384a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0049384b: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0049384e: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x493853u); f_0082e900();
    /* 00493853: fcomp dword ptr [0x902c2c] */ fx_compare(ST(0), R_F32((u32)(0x902c2cu))); FPOP();
    /* 00493859: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0049385b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0049385c: jbe 0x4938a7 */ if ((fC||fZ)) goto L_004938a7;
L_0049385e:; BB(0x0049385e);
    /* 0049385e: fld dword ptr [esp + 0x74] */ FPUSH(R_F32((u32)(r_esp+0x74u)));
    /* 00493862: fdiv dword ptr [esp + 0x6c] */ ST(0) = ST(0) / R_F32((u32)(r_esp+0x6cu));
    /* 00493866: fld dword ptr [0x90254c] */ FPUSH(R_F32((u32)(0x90254cu)));
    /* 0049386c: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0049386e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00493870: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00493871: jae 0x493875 */ if (!fC) goto L_00493875;
L_00493873:; BB(0x00493873);
    /* 00493873: fst st(1) */ ST(1) = ST(0);
L_00493875:; BB(0x00493875);
    /* 00493875: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00493877: fadd dword ptr [esp + 4] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x4u));
    /* 0049387b: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0049387f: jmp 0x4938a7 */ goto L_004938a7;
L_00493881:; BB(0x00493881);
    /* 00493881: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 00493883: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00493885: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 00493889: jmp 0x4938a7 */ goto L_004938a7;
L_0049388b:; BB(0x0049388b);
    /* 0049388b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0049388d: mov edx, 0x4235ae14 */ r_edx = 0x4235ae14u;
    /* 00493892: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 00493896: jmp 0x4938a7 */ goto L_004938a7;
L_00493898:; BB(0x00493898);
    /* 00493898: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0049389a: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 0049389e: mov edx, 0x4235ae14 */ r_edx = 0x4235ae14u;
    /* 004938a3: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
L_004938a7:; BB(0x004938a7);
    /* 004938a7: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 004938aa: lea edi, [esp + 0x24] */ r_edi = (u32)(r_esp+0x24u);
    /* 004938ae: movzx esi, word ptr [esi + 0x1c] */ r_esi = (u32)R16((u32)(r_esi+0x1cu));
    /* 004938b2: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004938b3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004938b4: call 0x836208 */ r_esp -= 4; W32(r_esp, 0x4938b9u); f_00836208();
    /* 004938b9: fstp dword ptr [esp + 0x7c] */ W_F32((u32)(r_esp+0x7cu), ST(0)); FPOP();
    /* 004938bd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004938c0: fld dword ptr [esp + 0x74] */ FPUSH(R_F32((u32)(r_esp+0x74u)));
    /* 004938c4: fmul dword ptr [0x902548] */ ST(0) = ST(0) * R_F32((u32)(0x902548u));
    /* 004938ca: fld dword ptr [0x902544] */ FPUSH(R_F32((u32)(0x902544u)));
    /* 004938d0: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004938d2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004938d4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004938d5: jbe 0x4938d9 */ if ((fC||fZ)) goto L_004938d9;
L_004938d7:; BB(0x004938d7);
    /* 004938d7: fst st(1) */ ST(1) = ST(0);
L_004938d9:; BB(0x004938d9);
    /* 004938d9: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004938db: fstp dword ptr [esp + 0x74] */ W_F32((u32)(r_esp+0x74u), ST(0)); FPOP();
    /* 004938df: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4938e4u); f_008587a5();
    /* 004938e4: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 004938e8: fild dword ptr [esp + 0x48] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x48u)));
    /* 004938ec: fdiv dword ptr [0x902c20] */ ST(0) = ST(0) / R_F32((u32)(0x902c20u));
    /* 004938f2: fadd dword ptr [0x902c24] */ ST(0) = ST(0) + R_F32((u32)(0x902c24u));
    /* 004938f8: fmul dword ptr [esp + 0x74] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x74u));
    /* 004938fc: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 00493900: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x493905u); f_008587a5();
    /* 00493905: mov dword ptr [esp + 0x50], eax */ W32((u32)(r_esp+0x50u), r_eax);
    /* 00493909: fild dword ptr [esp + 0x50] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x50u)));
    /* 0049390d: fdiv dword ptr [0x902c20] */ ST(0) = ST(0) / R_F32((u32)(0x902c20u));
    /* 00493913: fadd dword ptr [0x902c24] */ ST(0) = ST(0) + R_F32((u32)(0x902c24u));
    /* 00493919: fmul dword ptr [esp + 0x74] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x74u));
    /* 0049391d: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 00493921: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x493926u); f_008587a5();
    /* 00493926: fld dword ptr [esp + 0x74] */ FPUSH(R_F32((u32)(r_esp+0x74u)));
    /* 0049392a: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 0049392d: mov dword ptr [esp + 0x50], eax */ W32((u32)(r_esp+0x50u), r_eax);
    /* 00493931: fild dword ptr [esp + 0x50] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x50u)));
    /* 00493935: fdiv dword ptr [0x902c20] */ ST(0) = ST(0) / R_F32((u32)(0x902c20u));
    /* 0049393b: fadd dword ptr [0x902c24] */ ST(0) = ST(0) + R_F32((u32)(0x902c24u));
    /* 00493941: mov dword ptr [esp + 0x3c], edx */ W32((u32)(r_esp+0x3cu), r_edx);
    /* 00493945: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00493947: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0049394b: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 0049394f: mov dword ptr [esp + 0x40], edx */ W32((u32)(r_esp+0x40u), r_edx);
    /* 00493953: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 00493957: mov dword ptr [esp + 0x44], edx */ W32((u32)(r_esp+0x44u), r_edx);
    /* 0049395b: lea ecx, [esp + 0x3c] */ r_ecx = (u32)(r_esp+0x3cu);
    /* 0049395f: lea edx, [esp + 0x30] */ r_edx = (u32)(r_esp+0x30u);
    /* 00493963: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x493968u); f_0082ebac();
    /* 00493968: lea edx, [esp + 0x3c] */ r_edx = (u32)(r_esp+0x3cu);
    /* 0049396c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0049396d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0049396e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0049396f: call 0x4d85bc */ r_esp -= 4; W32(r_esp, 0x493974u); f_004d85bc();
    /* 00493974: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00493977:; BB(0x00493977);
    /* 00493977: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0049397a: cmp ebx, ebp */ {  u32 a = r_ebx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0049397c: jl 0x4936f6 */ if ((fS!=fO)) goto L_004936f6;
L_00493982:; BB(0x00493982);
    /* 00493982: mov esi, dword ptr [esp + 0x60] */ r_esi = R32((u32)(r_esp+0x60u));
    /* 00493986: mov edi, dword ptr [esp + 0x5c] */ r_edi = R32((u32)(r_esp+0x5cu));
    /* 0049398a: mov ebp, dword ptr [esp + 0x58] */ r_ebp = R32((u32)(r_esp+0x58u));
L_0049398e:; BB(0x0049398e);
    /* 0049398e: add esp, 0x78 */ {  u32 a = r_esp; u32 b = 0x78u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00493991: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00493992: ret  */ FN_RET(0x004936a8); r_esp += 4; return;
L_00493993:; BB(0x00493993);
    /* 00493993: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00493995: jmp 0x49398e */ goto L_0049398e;
L_00493997:; BB(0x00493997);
    /* 00493997: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00493999: jmp 0x493977 */ goto L_00493977;
}

void f_0049399c(void) /* sub_49399C */
{
    FN_ENTER(0x0049399c);
    /* 0049399c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0049399d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0049399e: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004939a1: movzx eax, byte ptr [0xa472b8] */ r_eax = (u32)R8((u32)(0xa472b8u));
    /* 004939a8: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004939aa: jne 0x4939d2 */ if (!fZ) goto L_004939d2;
L_004939ac:; BB(0x004939ac);
    /* 004939ac: mov dword ptr [0xa47354], 0 */ W32((u32)(0xa47354u), 0x0u);
    /* 004939b6: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004939b9: mov byte ptr [0xa472b8], al */ W8((u32)(0xa472b8u), (u8)r_eax);
    /* 004939be: mov dword ptr [0xa47358], 0x419e6666 */ W32((u32)(0xa47358u), 0x419e6666u);
    /* 004939c8: mov dword ptr [0xa4735c], 0xc0a00000 */ W32((u32)(0xa4735cu), 0xc0a00000u);
L_004939d2:; BB(0x004939d2);
    /* 004939d2: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004939d4: jne 0x4939fe */ if (!fZ) goto L_004939fe;
L_004939d6:; BB(0x004939d6);
    /* 004939d6: mov dword ptr [0xa47360], 0 */ W32((u32)(0xa47360u), 0x0u);
    /* 004939e0: or eax, 0xffffff02 */ {  u32 a = r_eax; u32 b = 0xffffff02u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004939e5: mov byte ptr [0xa472b8], al */ W8((u32)(0xa472b8u), (u8)r_eax);
    /* 004939ea: mov dword ptr [0xa47364], 0x4249b852 */ W32((u32)(0xa47364u), 0x4249b852u);
    /* 004939f4: mov dword ptr [0xa47368], 0x4235ae14 */ W32((u32)(0xa47368u), 0x4235ae14u);
L_004939fe:; BB(0x004939fe);
    /* 004939fe: mov esi, 0xa47354 */ r_esi = 0xa47354u;
    /* 00493a03: mov ebp, 0xa47360 */ r_ebp = 0xa47360u;
    /* 00493a08: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00493a0a: jne 0x493a11 */ if (!fZ) goto L_00493a11;
L_00493a0c:; BB(0x00493a0c);
    /* 00493a0c: mov esi, 0xa47318 */ r_esi = 0xa47318u;
L_00493a11:; BB(0x00493a11);
    /* 00493a11: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00493a13: jne 0x493a1a */ if (!fZ) goto L_00493a1a;
L_00493a15:; BB(0x00493a15);
    /* 00493a15: mov ebp, 0xa47324 */ r_ebp = 0xa47324u;
L_00493a1a:; BB(0x00493a1a);
    /* 00493a1a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00493a1b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00493a1c: call 0x836208 */ r_esp -= 4; W32(r_esp, 0x493a21u); f_00836208();
    /* 00493a21: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 00493a25: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00493a28: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 00493a2c: fmul dword ptr [0x90255c] */ ST(0) = ST(0) * R_F32((u32)(0x90255cu));
    /* 00493a32: fld dword ptr [0x902558] */ FPUSH(R_F32((u32)(0x902558u)));
    /* 00493a38: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00493a3a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00493a3c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00493a3d: jbe 0x493a41 */ if ((fC||fZ)) goto L_00493a41;
L_00493a3f:; BB(0x00493a3f);
    /* 00493a3f: fst st(1) */ ST(1) = ST(0);
L_00493a41:; BB(0x00493a41);
    /* 00493a41: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00493a43: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 00493a47: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x493a4cu); f_008587a5();
    /* 00493a4c: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00493a50: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 00493a54: fdiv dword ptr [0x902c04] */ ST(0) = ST(0) / R_F32((u32)(0x902c04u));
    /* 00493a5a: fadd dword ptr [0x902c08] */ ST(0) = ST(0) + R_F32((u32)(0x902c08u));
    /* 00493a60: fmul dword ptr [esp + 0x28] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x28u));
    /* 00493a64: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00493a67: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x493a6cu); f_008587a5();
    /* 00493a6c: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 00493a70: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 00493a74: fdiv dword ptr [0x902c04] */ ST(0) = ST(0) / R_F32((u32)(0x902c04u));
    /* 00493a7a: fadd dword ptr [0x902c08] */ ST(0) = ST(0) + R_F32((u32)(0x902c08u));
    /* 00493a80: fmul dword ptr [esp + 0x28] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x28u));
    /* 00493a84: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00493a88: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x493a8du); f_008587a5();
    /* 00493a8d: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 00493a91: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 00493a95: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 00493a99: fdiv dword ptr [0x902c04] */ ST(0) = ST(0) / R_F32((u32)(0x902c04u));
    /* 00493a9f: fadd dword ptr [0x902c08] */ ST(0) = ST(0) + R_F32((u32)(0x902c08u));
    /* 00493aa5: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 00493aa9: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00493aab: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00493aaf: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 00493ab2: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00493ab4: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 00493ab8: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 00493abb: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00493abf: mov esi, dword ptr [esi + 8] */ r_esi = R32((u32)(r_esi+0x8u));
    /* 00493ac2: mov dword ptr [esp + 0x14], esi */ W32((u32)(r_esp+0x14u), r_esi);
    /* 00493ac6: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x493acbu); f_0082ebac();
    /* 00493acb: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 00493acf: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00493ad4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00493ad5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00493ad6: call 0x4d85bc */ r_esp -= 4; W32(r_esp, 0x493adbu); f_004d85bc();
    /* 00493adb: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00493ade: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00493adf: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00493ae0: ret  */ FN_RET(0x0049399c); r_esp += 4; return;
}

void f_00493ae4(void) /* sub_493AE4 */
{
    FN_ENTER(0x00493ae4);
    /* 00493ae4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00493ae5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00493ae6: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00493ae9: movzx eax, byte ptr [0xa472bc] */ r_eax = (u32)R8((u32)(0xa472bcu));
    /* 00493af0: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00493af2: jne 0x493b1a */ if (!fZ) goto L_00493b1a;
L_00493af4:; BB(0x00493af4);
    /* 00493af4: mov dword ptr [0xa4736c], 0 */ W32((u32)(0xa4736cu), 0x0u);
    /* 00493afe: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00493b01: mov byte ptr [0xa472bc], al */ W8((u32)(0xa472bcu), (u8)r_eax);
    /* 00493b06: mov dword ptr [0xa47370], 0x41c66666 */ W32((u32)(0xa47370u), 0x41c66666u);
    /* 00493b10: mov dword ptr [0xa47374], 0xc0a00000 */ W32((u32)(0xa47374u), 0xc0a00000u);
L_00493b1a:; BB(0x00493b1a);
    /* 00493b1a: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00493b1c: jne 0x493b46 */ if (!fZ) goto L_00493b46;
L_00493b1e:; BB(0x00493b1e);
    /* 00493b1e: mov dword ptr [0xa47378], 0 */ W32((u32)(0xa47378u), 0x0u);
    /* 00493b28: or eax, 0xffffff02 */ {  u32 a = r_eax; u32 b = 0xffffff02u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00493b2d: mov byte ptr [0xa472bc], al */ W8((u32)(0xa472bcu), (u8)r_eax);
    /* 00493b32: mov dword ptr [0xa4737c], 0x4176e148 */ W32((u32)(0xa4737cu), 0x4176e148u);
    /* 00493b3c: mov dword ptr [0xa47380], 0x428cd70a */ W32((u32)(0xa47380u), 0x428cd70au);
L_00493b46:; BB(0x00493b46);
    /* 00493b46: mov esi, 0xa4736c */ r_esi = 0xa4736cu;
    /* 00493b4b: mov ebp, 0xa47378 */ r_ebp = 0xa47378u;
    /* 00493b50: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00493b52: jne 0x493b59 */ if (!fZ) goto L_00493b59;
L_00493b54:; BB(0x00493b54);
    /* 00493b54: mov esi, 0xa47318 */ r_esi = 0xa47318u;
L_00493b59:; BB(0x00493b59);
    /* 00493b59: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00493b5b: jne 0x493b62 */ if (!fZ) goto L_00493b62;
L_00493b5d:; BB(0x00493b5d);
    /* 00493b5d: mov ebp, 0xa47324 */ r_ebp = 0xa47324u;
L_00493b62:; BB(0x00493b62);
    /* 00493b62: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00493b63: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00493b64: call 0x836208 */ r_esp -= 4; W32(r_esp, 0x493b69u); f_00836208();
    /* 00493b69: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 00493b6d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00493b70: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 00493b74: fmul dword ptr [0x902564] */ ST(0) = ST(0) * R_F32((u32)(0x902564u));
    /* 00493b7a: fld dword ptr [0x902560] */ FPUSH(R_F32((u32)(0x902560u)));
    /* 00493b80: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00493b82: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00493b84: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00493b85: jbe 0x493b89 */ if ((fC||fZ)) goto L_00493b89;
L_00493b87:; BB(0x00493b87);
    /* 00493b87: fst st(1) */ ST(1) = ST(0);
L_00493b89:; BB(0x00493b89);
    /* 00493b89: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00493b8b: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 00493b8f: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x493b94u); f_008587a5();
    /* 00493b94: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00493b98: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 00493b9c: fdiv dword ptr [0x902be4] */ ST(0) = ST(0) / R_F32((u32)(0x902be4u));
    /* 00493ba2: fadd dword ptr [0x902be8] */ ST(0) = ST(0) + R_F32((u32)(0x902be8u));
    /* 00493ba8: fmul dword ptr [esp + 0x28] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x28u));
    /* 00493bac: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00493baf: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x493bb4u); f_008587a5();
    /* 00493bb4: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 00493bb8: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 00493bbc: fdiv dword ptr [0x902be4] */ ST(0) = ST(0) / R_F32((u32)(0x902be4u));
    /* 00493bc2: fadd dword ptr [0x902be8] */ ST(0) = ST(0) + R_F32((u32)(0x902be8u));
    /* 00493bc8: fmul dword ptr [esp + 0x28] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x28u));
    /* 00493bcc: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00493bd0: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x493bd5u); f_008587a5();
    /* 00493bd5: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 00493bd9: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 00493bdd: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 00493be1: fdiv dword ptr [0x902be4] */ ST(0) = ST(0) / R_F32((u32)(0x902be4u));
    /* 00493be7: fadd dword ptr [0x902be8] */ ST(0) = ST(0) + R_F32((u32)(0x902be8u));
    /* 00493bed: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 00493bf1: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00493bf3: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00493bf7: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 00493bfa: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00493bfc: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 00493c00: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 00493c03: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00493c07: mov esi, dword ptr [esi + 8] */ r_esi = R32((u32)(r_esi+0x8u));
    /* 00493c0a: mov dword ptr [esp + 0x14], esi */ W32((u32)(r_esp+0x14u), r_esi);
    /* 00493c0e: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x493c13u); f_0082ebac();
    /* 00493c13: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 00493c17: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00493c1c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00493c1d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00493c1e: call 0x4d85bc */ r_esp -= 4; W32(r_esp, 0x493c23u); f_004d85bc();
    /* 00493c23: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00493c26: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00493c27: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00493c28: ret  */ FN_RET(0x00493ae4); r_esp += 4; return;
}

void f_00493c2c(void) /* sub_493C2C */
{
    FN_ENTER(0x00493c2c);
    /* 00493c2c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00493c2d: sub esp, 0x78 */ {  u32 a = r_esp; u32 b = 0x78u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00493c30: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00493c32: mov edx, dword ptr [ebx + 0x38] */ r_edx = R32((u32)(r_ebx+0x38u));
    /* 00493c35: fld dword ptr [ebx + 0x3c] */ FPUSH(R_F32((u32)(r_ebx+0x3cu)));
    /* 00493c38: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 00493c3d: fld dword ptr [0x902be0] */ FPUSH(R_F32((u32)(0x902be0u)));
    /* 00493c43: mov ecx, dword ptr [ebx + 0x40] */ r_ecx = R32((u32)(r_ebx+0x40u));
    /* 00493c46: mov ebx, dword ptr [ebx + 0x440] */ r_ebx = R32((u32)(r_ebx+0x440u));
    /* 00493c4c: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00493c4e: je 0x493c54 */ if (fZ) goto L_00493c54;
L_00493c50:; BB(0x00493c50);
    /* 00493c50: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00493c52: jmp 0x493c56 */ goto L_00493c56;
L_00493c54:; BB(0x00493c54);
    /* 00493c54: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
L_00493c56:; BB(0x00493c56);
    /* 00493c56: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00493c58: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00493c5a: jle 0x493f17 */ if ((fZ||fS!=fO)) goto L_00493f17;
L_00493c60:; BB(0x00493c60);
    /* 00493c60: fstp dword ptr [esp + 0x68] */ W_F32((u32)(r_esp+0x68u), ST(0)); FPOP();
    /* 00493c64: mov dword ptr [esp + 0x64], ecx */ W32((u32)(r_esp+0x64u), r_ecx);
    /* 00493c68: mov dword ptr [esp + 0x70], edx */ W32((u32)(r_esp+0x70u), r_edx);
    /* 00493c6c: mov dword ptr [esp + 0x60], esi */ W32((u32)(r_esp+0x60u), r_esi);
    /* 00493c70: mov dword ptr [esp + 0x5c], edi */ W32((u32)(r_esp+0x5cu), r_edi);
    /* 00493c74: mov dword ptr [esp + 0x58], ebp */ W32((u32)(r_esp+0x58u), r_ebp);
    /* 00493c78: mov ebp, eax */ r_ebp = r_eax;
L_00493c7a:; BB(0x00493c7a);
    /* 00493c7a: mov esi, dword ptr [ebx*4 + 0xaad720] */ r_esi = R32((u32)(r_ebx*4+0xaad720u));
    /* 00493c81: mov edi, dword ptr [0xa47318] */ r_edi = R32((u32)(0xa47318u));
    /* 00493c87: fld dword ptr [0xa4731c] */ FPUSH(R_F32((u32)(0xa4731cu)));
    /* 00493c8d: mov ecx, dword ptr [0xa4731c] */ r_ecx = R32((u32)(0xa4731cu));
    /* 00493c93: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00493c95: mov edx, dword ptr [0xa47320] */ r_edx = R32((u32)(0xa47320u));
    /* 00493c9b: je 0x493f1b */ if (fZ) goto L_00493f1b;
L_00493ca1:; BB(0x00493ca1);
    /* 00493ca1: fld dword ptr [esp + 0x68] */ FPUSH(R_F32((u32)(r_esp+0x68u)));
    /* 00493ca5: fld dword ptr [esi + 0x3c] */ FPUSH(R_F32((u32)(r_esi+0x3cu)));
    /* 00493ca8: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00493caa: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 00493cae: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00493cb0: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00493cb4: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00493cb8: mov edx, dword ptr [esi + 0x40] */ r_edx = R32((u32)(r_esi+0x40u));
    /* 00493cbb: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 00493cbf: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 00493cc2: mov edi, dword ptr [esi + 0x38] */ r_edi = R32((u32)(r_esi+0x38u));
    /* 00493cc5: mov dword ptr [esp + 0xc], edi */ W32((u32)(r_esp+0xcu), r_edi);
    /* 00493cc9: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 00493ccd: mov edx, dword ptr [esp + 0x70] */ r_edx = R32((u32)(r_esp+0x70u));
    /* 00493cd1: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 00493cd5: mov edx, dword ptr [esp + 0x64] */ r_edx = R32((u32)(r_esp+0x64u));
    /* 00493cd9: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 00493cdd: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 00493ce1: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 00493ce5: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x493ceau); f_0082f9c4();
    /* 00493cea: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 00493cee: fstp dword ptr [esp + 0x74] */ W_F32((u32)(r_esp+0x74u), ST(0)); FPOP();
    /* 00493cf2: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 00493cf6: mov dword ptr [esp + 0x1c], 0 */ W32((u32)(r_esp+0x1cu), 0x0u);
    /* 00493cfe: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x493d03u); f_0083173c();
    /* 00493d03: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 00493d07: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00493d09: fld dword ptr [0x902578] */ FPUSH(R_F32((u32)(0x902578u)));
    /* 00493d0f: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00493d11: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00493d13: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00493d14: jb 0x493d18 */ if (fC) goto L_00493d18;
L_00493d16:; BB(0x00493d16);
    /* 00493d16: fst st(1) */ ST(1) = ST(0);
L_00493d18:; BB(0x00493d18);
    /* 00493d18: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00493d1a: movzx edx, byte ptr [0xa4734c] */ r_edx = (u32)R8((u32)(0xa4734cu));
    /* 00493d21: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00493d24: jne 0x493d3c */ if (!fZ) goto L_00493d3c;
L_00493d26:; BB(0x00493d26);
    /* 00493d26: mov dword ptr [0xa47350], 0x420dae14 */ W32((u32)(0xa47350u), 0x420dae14u);
    /* 00493d30: or edx, 0xffffff01 */ {  u32 a = r_edx; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00493d36: mov byte ptr [0xa4734c], dl */ W8((u32)(0xa4734cu), (u8)r_edx);
L_00493d3c:; BB(0x00493d3c);
    /* 00493d3c: fld dword ptr [0x902bc4] */ FPUSH(R_F32((u32)(0x902bc4u)));
    /* 00493d42: fmul dword ptr [esp + 0x74] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x74u));
    /* 00493d46: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 00493d48: fadd dword ptr [0x902c14] */ ST(0) = ST(0) + R_F32((u32)(0x902c14u));
    /* 00493d4e: fcom dword ptr [0x902574] */ fx_compare(ST(0), R_F32((u32)(0x902574u))); 
    /* 00493d54: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00493d56: mov dword ptr [esp + 0x24], 0 */ W32((u32)(r_esp+0x24u), 0x0u);
    /* 00493d5e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00493d5f: jae 0x493e1c */ if (!fC) goto L_00493e1c;
L_00493d65:; BB(0x00493d65);
    /* 00493d65: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00493d67: fld dword ptr [esp + 0x74] */ FPUSH(R_F32((u32)(r_esp+0x74u)));
    /* 00493d6b: fcomp dword ptr [0x902bd4] */ fx_compare(ST(0), R_F32((u32)(0x902bd4u))); FPOP();
    /* 00493d71: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00493d73: mov edx, 0x40a00000 */ r_edx = 0x40a00000u;
    /* 00493d78: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 00493d7c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00493d7d: jbe 0x493e0f */ if ((fC||fZ)) goto L_00493e0f;
L_00493d83:; BB(0x00493d83);
    /* 00493d83: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00493d85: fld dword ptr [0x902bd0] */ FPUSH(R_F32((u32)(0x902bd0u)));
    /* 00493d8b: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 00493d8d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00493d8f: fdiv dword ptr [esp + 0x74] */ ST(0) = ST(0) / R_F32((u32)(r_esp+0x74u));
    /* 00493d93: fld dword ptr [0xa47350] */ FPUSH(R_F32((u32)(0xa47350u)));
    /* 00493d99: mov edx, dword ptr [0xa47350] */ r_edx = R32((u32)(0xa47350u));
    /* 00493d9f: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00493da1: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00493da3: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
    /* 00493da7: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00493da8: jbe 0x493e05 */ if ((fC||fZ)) goto L_00493e05;
L_00493daa:; BB(0x00493daa);
    /* 00493daa: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00493dac: fld dword ptr [esp + 0x6c] */ FPUSH(R_F32((u32)(r_esp+0x6cu)));
    /* 00493db0: fld dword ptr [esp + 0x74] */ FPUSH(R_F32((u32)(r_esp+0x74u)));
    /* 00493db4: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00493db6: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00493db8: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00493dba: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00493dbc: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00493dbe: fst dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0));
    /* 00493dc2: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00493dc4: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00493dc6: fstp dword ptr [esp + 0x74] */ W_F32((u32)(r_esp+0x74u), ST(0)); FPOP();
    /* 00493dca: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 00493dce: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00493dcf: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00493dd2: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x493dd7u); f_0082e900();
    /* 00493dd7: fcomp dword ptr [0x902bd4] */ fx_compare(ST(0), R_F32((u32)(0x902bd4u))); FPOP();
    /* 00493ddd: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00493ddf: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00493de0: jbe 0x493e2b */ if ((fC||fZ)) goto L_00493e2b;
L_00493de2:; BB(0x00493de2);
    /* 00493de2: fld dword ptr [esp + 0x74] */ FPUSH(R_F32((u32)(r_esp+0x74u)));
    /* 00493de6: fdiv dword ptr [esp + 0x6c] */ ST(0) = ST(0) / R_F32((u32)(r_esp+0x6cu));
    /* 00493dea: fld dword ptr [0x902570] */ FPUSH(R_F32((u32)(0x902570u)));
    /* 00493df0: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00493df2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00493df4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00493df5: jae 0x493df9 */ if (!fC) goto L_00493df9;
L_00493df7:; BB(0x00493df7);
    /* 00493df7: fst st(1) */ ST(1) = ST(0);
L_00493df9:; BB(0x00493df9);
    /* 00493df9: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00493dfb: fadd dword ptr [esp + 4] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x4u));
    /* 00493dff: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00493e03: jmp 0x493e2b */ goto L_00493e2b;
L_00493e05:; BB(0x00493e05);
    /* 00493e05: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 00493e07: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00493e09: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 00493e0d: jmp 0x493e2b */ goto L_00493e2b;
L_00493e0f:; BB(0x00493e0f);
    /* 00493e0f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00493e11: mov edx, 0x4235ae14 */ r_edx = 0x4235ae14u;
    /* 00493e16: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 00493e1a: jmp 0x493e2b */ goto L_00493e2b;
L_00493e1c:; BB(0x00493e1c);
    /* 00493e1c: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00493e1e: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 00493e22: mov edx, 0x4235ae14 */ r_edx = 0x4235ae14u;
    /* 00493e27: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
L_00493e2b:; BB(0x00493e2b);
    /* 00493e2b: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 00493e2e: lea edi, [esp + 0x24] */ r_edi = (u32)(r_esp+0x24u);
    /* 00493e32: movzx esi, word ptr [esi + 0x1c] */ r_esi = (u32)R16((u32)(r_esi+0x1cu));
    /* 00493e36: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00493e37: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00493e38: call 0x836208 */ r_esp -= 4; W32(r_esp, 0x493e3du); f_00836208();
    /* 00493e3d: fstp dword ptr [esp + 0x7c] */ W_F32((u32)(r_esp+0x7cu), ST(0)); FPOP();
    /* 00493e41: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00493e44: fld dword ptr [esp + 0x74] */ FPUSH(R_F32((u32)(r_esp+0x74u)));
    /* 00493e48: fmul dword ptr [0x90256c] */ ST(0) = ST(0) * R_F32((u32)(0x90256cu));
    /* 00493e4e: fld dword ptr [0x902568] */ FPUSH(R_F32((u32)(0x902568u)));
    /* 00493e54: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00493e56: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00493e58: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00493e59: jbe 0x493e5d */ if ((fC||fZ)) goto L_00493e5d;
L_00493e5b:; BB(0x00493e5b);
    /* 00493e5b: fst st(1) */ ST(1) = ST(0);
L_00493e5d:; BB(0x00493e5d);
    /* 00493e5d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00493e5f: fstp dword ptr [esp + 0x74] */ W_F32((u32)(r_esp+0x74u), ST(0)); FPOP();
    /* 00493e63: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x493e68u); f_008587a5();
    /* 00493e68: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 00493e6c: fild dword ptr [esp + 0x48] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x48u)));
    /* 00493e70: fdiv dword ptr [0x902bc8] */ ST(0) = ST(0) / R_F32((u32)(0x902bc8u));
    /* 00493e76: fadd dword ptr [0x902bcc] */ ST(0) = ST(0) + R_F32((u32)(0x902bccu));
    /* 00493e7c: fmul dword ptr [esp + 0x74] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x74u));
    /* 00493e80: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 00493e84: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x493e89u); f_008587a5();
    /* 00493e89: mov dword ptr [esp + 0x50], eax */ W32((u32)(r_esp+0x50u), r_eax);
    /* 00493e8d: fild dword ptr [esp + 0x50] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x50u)));
    /* 00493e91: fdiv dword ptr [0x902bc8] */ ST(0) = ST(0) / R_F32((u32)(0x902bc8u));
    /* 00493e97: fadd dword ptr [0x902bcc] */ ST(0) = ST(0) + R_F32((u32)(0x902bccu));
    /* 00493e9d: fmul dword ptr [esp + 0x74] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x74u));
    /* 00493ea1: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 00493ea5: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x493eaau); f_008587a5();
    /* 00493eaa: fld dword ptr [esp + 0x74] */ FPUSH(R_F32((u32)(r_esp+0x74u)));
    /* 00493eae: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 00493eb1: mov dword ptr [esp + 0x50], eax */ W32((u32)(r_esp+0x50u), r_eax);
    /* 00493eb5: fild dword ptr [esp + 0x50] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x50u)));
    /* 00493eb9: fdiv dword ptr [0x902bc8] */ ST(0) = ST(0) / R_F32((u32)(0x902bc8u));
    /* 00493ebf: fadd dword ptr [0x902bcc] */ ST(0) = ST(0) + R_F32((u32)(0x902bccu));
    /* 00493ec5: mov dword ptr [esp + 0x3c], edx */ W32((u32)(r_esp+0x3cu), r_edx);
    /* 00493ec9: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00493ecb: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 00493ecf: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 00493ed3: mov dword ptr [esp + 0x40], edx */ W32((u32)(r_esp+0x40u), r_edx);
    /* 00493ed7: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 00493edb: mov dword ptr [esp + 0x44], edx */ W32((u32)(r_esp+0x44u), r_edx);
    /* 00493edf: lea ecx, [esp + 0x3c] */ r_ecx = (u32)(r_esp+0x3cu);
    /* 00493ee3: lea edx, [esp + 0x30] */ r_edx = (u32)(r_esp+0x30u);
    /* 00493ee7: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x493eecu); f_0082ebac();
    /* 00493eec: lea edx, [esp + 0x3c] */ r_edx = (u32)(r_esp+0x3cu);
    /* 00493ef0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00493ef1: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00493ef2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00493ef3: call 0x4d85bc */ r_esp -= 4; W32(r_esp, 0x493ef8u); f_004d85bc();
    /* 00493ef8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00493efb:; BB(0x00493efb);
    /* 00493efb: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00493efe: cmp ebx, ebp */ {  u32 a = r_ebx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00493f00: jl 0x493c7a */ if ((fS!=fO)) goto L_00493c7a;
L_00493f06:; BB(0x00493f06);
    /* 00493f06: mov esi, dword ptr [esp + 0x60] */ r_esi = R32((u32)(r_esp+0x60u));
    /* 00493f0a: mov edi, dword ptr [esp + 0x5c] */ r_edi = R32((u32)(r_esp+0x5cu));
    /* 00493f0e: mov ebp, dword ptr [esp + 0x58] */ r_ebp = R32((u32)(r_esp+0x58u));
L_00493f12:; BB(0x00493f12);
    /* 00493f12: add esp, 0x78 */ {  u32 a = r_esp; u32 b = 0x78u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00493f15: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00493f16: ret  */ FN_RET(0x00493c2c); r_esp += 4; return;
L_00493f17:; BB(0x00493f17);
    /* 00493f17: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00493f19: jmp 0x493f12 */ goto L_00493f12;
L_00493f1b:; BB(0x00493f1b);
    /* 00493f1b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00493f1d: jmp 0x493efb */ goto L_00493efb;
}

void f_00493f20(void) /* sub_493F20 */
{
    FN_ENTER(0x00493f20);
    /* 00493f20: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00493f21: mov ebx, esp */ r_ebx = r_esp;
    /* 00493f23: and esp, 0xfffffff8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 00493f26: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00493f27: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00493f28: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00493f29: sub esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00493f2c: mov edi, ecx */ r_edi = r_ecx;
    /* 00493f2e: mov ecx, edi */ r_ecx = r_edi;
    /* 00493f30: call 0x494120 */ r_esp -= 4; W32(r_esp, 0x493f35u); f_00494120();
    /* 00493f35: fld dword ptr [edi + 0x4e4] */ FPUSH(R_F32((u32)(r_edi+0x4e4u)));
    /* 00493f3b: fcomp dword ptr [0x902bc0] */ fx_compare(ST(0), R_F32((u32)(0x902bc0u))); FPOP();
    /* 00493f41: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00493f43: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00493f44: je 0x494114 */ if (fZ) goto L_00494114;
L_00493f4a:; BB(0x00493f4a);
    /* 00493f4a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00493f4c: mov ecx, dword ptr [edi + 0x404] */ r_ecx = R32((u32)(r_edi+0x404u));
    /* 00493f52: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x493f57u); f_005b8624();
    /* 00493f57: mov dword ptr [esp + 0x4c], eax */ W32((u32)(r_esp+0x4cu), r_eax);
    /* 00493f5b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00493f5d: mov ecx, dword ptr [edi + 0x404] */ r_ecx = R32((u32)(r_edi+0x404u));
    /* 00493f63: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x493f68u); f_005b8610();
    /* 00493f68: mov esi, eax */ r_esi = r_eax;
    /* 00493f6a: fld dword ptr [0x9a7074] */ FPUSH(R_F32((u32)(0x9a7074u)));
    /* 00493f70: fld dword ptr [0x9a7070] */ FPUSH(R_F32((u32)(0x9a7070u)));
    /* 00493f76: mov edx, dword ptr [edi + 0x5d4] */ r_edx = R32((u32)(r_edi+0x5d4u));
    /* 00493f7c: mov ebp, dword ptr [edi + 0x5d8] */ r_ebp = R32((u32)(r_edi+0x5d8u));
    /* 00493f82: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00493f84: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 00493f88: fld dword ptr [edi + 0x4e4] */ FPUSH(R_F32((u32)(r_edi+0x4e4u)));
    /* 00493f8e: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00493f90: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00493f92: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 00493f95: mov edx, dword ptr [edi + 0x5dc] */ r_edx = R32((u32)(r_edi+0x5dcu));
    /* 00493f9b: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 00493f9f: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00493fa3: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 00493fa6: add edx, 0x8000 */ {  u32 a = r_edx; u32 b = 0x8000u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00493fac: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00493fad: mov dword ptr [esp + 0x50], edx */ W32((u32)(r_esp+0x50u), r_edx);
    /* 00493fb1: jae 0x493fbb */ if (!fC) goto L_00493fbb;
L_00493fb3:; BB(0x00493fb3);
    /* 00493fb3: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 00493fb5: fstp dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 00493fb9: jmp 0x493fe3 */ goto L_00493fe3;
L_00493fbb:; BB(0x00493fbb);
    /* 00493fbb: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 00493fbd: fld dword ptr [0x902bbc] */ FPUSH(R_F32((u32)(0x902bbcu)));
    /* 00493fc3: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 00493fc7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00493fc9: fst dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0));
    /* 00493fcd: fsubrp st(3) */ ST(3) = ST(0) - ST(3); FPOP();
    /* 00493fcf: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00493fd1: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 00493fd3: fld dword ptr [0x9a706c] */ FPUSH(R_F32((u32)(0x9a706cu)));
    /* 00493fd9: fsub st(2) */ ST(0) = ST(0) - ST(2);
    /* 00493fdb: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00493fdd: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00493fdf: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
L_00493fe3:; BB(0x00493fe3);
    /* 00493fe3: movzx eax, word ptr [0xa48a38] */ r_eax = (u32)R16((u32)(0xa48a38u));
    /* 00493fea: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00493feb: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00493fed: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x493ff2u); f_006dc358();
    /* 00493ff2: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 00493ff5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00493ff6: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x493ffbu); f_0068d5a8();
    /* 00493ffb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00493ffe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00494000: je 0x4940b2 */ if (fZ) goto L_004940b2;
L_00494006:; BB(0x00494006);
    /* 00494006: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 0049400a: mov ebp, dword ptr [edi + 0x5d4] */ r_ebp = R32((u32)(r_edi+0x5d4u));
    /* 00494010: mov edx, dword ptr [edi + 0x5d8] */ r_edx = R32((u32)(r_edi+0x5d8u));
    /* 00494016: mov edi, dword ptr [edi + 0x5dc] */ r_edi = R32((u32)(r_edi+0x5dcu));
    /* 0049401c: fld dword ptr [eax + 0x3c] */ FPUSH(R_F32((u32)(r_eax+0x3cu)));
    /* 0049401f: fadd dword ptr [0x90257c] */ ST(0) = ST(0) + R_F32((u32)(0x90257cu));
    /* 00494025: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 00494029: mov dword ptr [esp + 0xc], ebp */ W32((u32)(r_esp+0xcu), r_ebp);
    /* 0049402d: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 00494031: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 00494034: mov dword ptr [esp + 0x14], edi */ W32((u32)(r_esp+0x14u), r_edi);
    /* 00494038: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 0049403c: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 0049403f: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 00494043: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 00494047: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x49404cu); f_0082f9c4();
    /* 0049404c: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 00494050: mov ebp, dword ptr [esp + 0x20] */ r_ebp = R32((u32)(r_esp+0x20u));
    /* 00494054: mov dword ptr [esp + 0x28], 0 */ W32((u32)(r_esp+0x28u), 0x0u);
    /* 0049405c: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 00494060: mov dword ptr [esp + 0x2c], ebp */ W32((u32)(r_esp+0x2cu), r_ebp);
    /* 00494064: lea ecx, [esp + 0x24] */ r_ecx = (u32)(r_esp+0x24u);
    /* 00494068: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x49406du); f_0083173c();
    /* 0049406d: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 00494071: fchs  */ ST(0) = -ST(0);
    /* 00494073: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00494075: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 00494077: fmul qword ptr [0x902940] */ ST(0) = ST(0) * R_F64((u32)(0x902940u));
    /* 0049407d: fdiv qword ptr [0x902938] */ ST(0) = ST(0) / R_F64((u32)(0x902938u));
    /* 00494083: fnstcw word ptr [esp + 0x30] */ W16((u32)(r_esp+0x30u), fcw);
    /* 00494087: movzx eax, word ptr [esp + 0x30] */ r_eax = (u32)R16((u32)(r_esp+0x30u));
    /* 0049408c: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00494091: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 00494095: fldcw word ptr [esp + 0x38] */ fcw = R16((u32)(r_esp+0x38u));
    /* 00494099: fistp dword ptr [esp + 0x40] */ W32((u32)(r_esp+0x40u), (u32)fx_int32(ST(0))); FPOP();
    /* 0049409d: fldcw word ptr [esp + 0x30] */ fcw = R16((u32)(r_esp+0x30u));
    /* 004940a1: mov ebp, dword ptr [esp + 0x40] */ r_ebp = R32((u32)(r_esp+0x40u));
    /* 004940a5: cmp ebp, 0x1000 */ {  u32 a = r_ebp; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004940ab: jle 0x4940b2 */ if ((fZ||fS!=fO)) goto L_004940b2;
L_004940ad:; BB(0x004940ad);
    /* 004940ad: mov ebp, 0x1000 */ r_ebp = 0x1000u;
L_004940b2:; BB(0x004940b2);
    /* 004940b2: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x4940b7u); f_0082d7b0();
    /* 004940b7: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 004940ba: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x4940bfu); f_0082d838();
    /* 004940bf: mov edx, dword ptr [esp + 0x50] */ r_edx = R32((u32)(r_esp+0x50u));
    /* 004940c3: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004940c5: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x4940cau); f_0082d8bc();
    /* 004940ca: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004940cc: mov edx, ebp */ r_edx = r_ebp;
    /* 004940ce: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x4940d3u); f_0082e9e4();
    /* 004940d3: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004940d5: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004940d7: call 0x830c04 */ r_esp -= 4; W32(r_esp, 0x4940dcu); f_00830c04();
    /* 004940dc: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004940df: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 004940e3: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 004940e7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004940e9: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004940ec: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004940f0: mov dword ptr [esp + 4], 0x3f800000 */ W32((u32)(r_esp+0x4u), 0x3f800000u);
    /* 004940f8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004940fa: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x4940ffu); f_0082fa0c();
    /* 004940ff: mov ecx, dword ptr [esp + 0x4c] */ r_ecx = R32((u32)(r_esp+0x4cu));
    /* 00494103: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x494108u); f_00829cc8();
    /* 00494108: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00494109: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x49410eu); f_0082e1e8();
    /* 0049410e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0049410f: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x494114u); f_0082da80();
L_00494114:; BB(0x00494114);
    /* 00494114: add esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00494117: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00494118: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00494119: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0049411a: mov esp, ebx */ r_esp = r_ebx;
    /* 0049411c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0049411d: ret  */ FN_RET(0x00493f20); r_esp += 4; return;
}

