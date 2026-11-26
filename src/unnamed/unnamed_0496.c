#include "protos.h"

void f_004960a4(void) /* sub_4960A4 */
{
    FN_ENTER(0x004960a4);
    /* 004960a4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004960a5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004960a6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004960a7: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004960aa: mov eax, ecx */ r_eax = r_ecx;
    /* 004960ac: movzx edx, byte ptr [0xa472e0] */ r_edx = (u32)R8((u32)(0xa472e0u));
    /* 004960b3: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004960b6: jne 0x4960cb */ if (!fZ) goto L_004960cb;
L_004960b8:; BB(0x004960b8);
    /* 004960b8: mov dword ptr [0xa472e4], 0x40f00000 */ W32((u32)(0xa472e4u), 0x40f00000u);
    /* 004960c2: or edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 004960c5: mov byte ptr [0xa472e0], dl */ W8((u32)(0xa472e0u), (u8)r_edx);
L_004960cb:; BB(0x004960cb);
    /* 004960cb: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004960ce: jne 0x4960e3 */ if (!fZ) goto L_004960e3;
L_004960d0:; BB(0x004960d0);
    /* 004960d0: mov dword ptr [0xa472e8], 0x42b90000 */ W32((u32)(0xa472e8u), 0x42b90000u);
    /* 004960da: or edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 004960dd: mov byte ptr [0xa472e0], dl */ W8((u32)(0xa472e0u), (u8)r_edx);
L_004960e3:; BB(0x004960e3);
    /* 004960e3: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004960e6: jne 0x496102 */ if (!fZ) goto L_00496102;
L_004960e8:; BB(0x004960e8);
    /* 004960e8: fld dword ptr [0xa472e8] */ FPUSH(R_F32((u32)(0xa472e8u)));
    /* 004960ee: fchs  */ ST(0) = -ST(0);
    /* 004960f0: fstp dword ptr [0xa472ec] */ W_F32((u32)(0xa472ecu), ST(0)); FPOP();
    /* 004960f6: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 004960f9: or edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 004960fc: mov byte ptr [0xa472e0], dl */ W8((u32)(0xa472e0u), (u8)r_edx);
L_00496102:; BB(0x00496102);
    /* 00496102: test dl, 8 */ {  u32 a = (u8)r_edx; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00496105: jne 0x496125 */ if (!fZ) goto L_00496125;
L_00496107:; BB(0x00496107);
    /* 00496107: fld dword ptr [0x902aac] */ FPUSH(R_F32((u32)(0x902aacu)));
    /* 0049610d: fmul dword ptr [0xa472e8] */ ST(0) = ST(0) * R_F32((u32)(0xa472e8u));
    /* 00496113: fstp dword ptr [0xa472f0] */ W_F32((u32)(0xa472f0u), ST(0)); FPOP();
    /* 00496119: or edx, 0xffffff08 */ {  u32 a = r_edx; u32 b = 0xffffff08u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0049611f: mov byte ptr [0xa472e0], dl */ W8((u32)(0xa472e0u), (u8)r_edx);
L_00496125:; BB(0x00496125);
    /* 00496125: fld dword ptr [0xa472ec] */ FPUSH(R_F32((u32)(0xa472ecu)));
    /* 0049612b: movzx ecx, byte ptr [eax + 0x424] */ r_ecx = (u32)R8((u32)(r_eax+0x424u));
    /* 00496132: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 00496136: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00496139: mov dword ptr [esp + 0x18], ecx */ W32((u32)(r_esp+0x18u), r_ecx);
    /* 0049613d: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 00496141: fmul dword ptr [0x90268c] */ ST(0) = ST(0) * R_F32((u32)(0x90268cu));
    /* 00496147: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00496149: fadd dword ptr [0x902690] */ ST(0) = ST(0) + R_F32((u32)(0x902690u));
    /* 0049614f: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 00496153: mov edi, eax */ r_edi = r_eax;
    /* 00496155: mov ebx, edx */ r_ebx = r_edx;
    /* 00496157: mov esi, ecx */ r_esi = r_ecx;
L_00496159:; BB(0x00496159);
    /* 00496159: mov eax, dword ptr [ebx + 0x902678] */ r_eax = R32((u32)(r_ebx+0x902678u));
    /* 0049615f: mov ecx, dword ptr [edi + 0x60] */ r_ecx = R32((u32)(r_edi+0x60u));
    /* 00496162: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00496164: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00496166: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 00496169: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0049616b: mov eax, dword ptr [edx + edi + 0x580] */ r_eax = R32((u32)(r_edx+r_edi+0x580u));
    /* 00496172: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00496175: mov eax, dword ptr [edx + edi + 0x584] */ r_eax = R32((u32)(r_edx+r_edi+0x584u));
    /* 0049617c: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00496180: mov eax, dword ptr [edx + edi + 0x588] */ r_eax = R32((u32)(r_edx+r_edi+0x588u));
    /* 00496187: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00496189: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0049618d: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x496192u); f_0082ddd8();
    /* 00496192: fmul dword ptr [esp + 0x24] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x24u));
    /* 00496196: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 0049619a: mov ecx, dword ptr [edi + 0x60] */ r_ecx = R32((u32)(r_edi+0x60u));
    /* 0049619d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0049619f: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 004961a3: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 004961a7: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004961a9: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x4961aeu); f_0082dcbc();
    /* 004961ae: fmul dword ptr [esp + 0x24] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x24u));
    /* 004961b2: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 004961b6: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 004961ba: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 004961bd: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x4961c2u); f_0082f9c4();
    /* 004961c2: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 004961c6: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x4961cbu); f_0083173c();
    /* 004961cb: fcom dword ptr [0x902aa8] */ fx_compare(ST(0), R_F32((u32)(0x902aa8u))); 
    /* 004961d1: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004961d3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004961d4: ja 0x4961e6 */ if ((!fC&&!fZ)) goto L_004961e6;
L_004961d6:; BB(0x004961d6);
    /* 004961d6: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004961d8: fld dword ptr [0x902aa4] */ FPUSH(R_F32((u32)(0x902aa4u)));
    /* 004961de: fld dword ptr [0x902aa4] */ FPUSH(R_F32((u32)(0x902aa4u)));
    /* 004961e4: jmp 0x4961ea */ goto L_004961ea;
L_004961e6:; BB(0x004961e6);
    /* 004961e6: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
L_004961ea:; BB(0x004961ea);
    /* 004961ea: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004961ec: fdivr dword ptr [0xa472e4] */ ST(0) = R_F32((u32)(0xa472e4u)) / ST(0);
    /* 004961f2: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 004961f4: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 004961f8: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004961fa: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004961fc: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00496200: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 00496204: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00496206: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00496208: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 0049620c: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00496210: call 0x48e134 */ r_esp -= 4; W32(r_esp, 0x496215u); f_0048e134();
    /* 00496215: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00496217: je 0x496237 */ if (fZ) goto L_00496237;
L_00496219:; BB(0x00496219);
    /* 00496219: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0049621c: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 00496220: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00496225: push 0x40f00000 */ { u32 v = 0x40f00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0049622a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049622b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0049622c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0049622d: call 0x4886e8 */ r_esp -= 4; W32(r_esp, 0x496232u); f_004886e8();
    /* 00496232: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00496235: jmp 0x49624f */ goto L_0049624f;
L_00496237:; BB(0x00496237);
    /* 00496237: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0049623a: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 0049623e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0049623f: push 0x40f00000 */ { u32 v = 0x40f00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00496244: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00496245: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00496246: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00496247: call 0x4886e8 */ r_esp -= 4; W32(r_esp, 0x49624cu); f_004886e8();
    /* 0049624c: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0049624f:; BB(0x0049624f);
    /* 0049624f: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 00496253: fadd dword ptr [0xa472f0] */ ST(0) = ST(0) + R_F32((u32)(0xa472f0u));
    /* 00496259: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 0049625d: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00496260: and esi, 3 */ {  u32 a = r_esi; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 00496263: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00496266: cmp ebx, 0x14 */ {  u32 a = r_ebx; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00496269: jl 0x496159 */ if ((fS!=fO)) goto L_00496159;
L_0049626f:; BB(0x0049626f);
    /* 0049626f: mov eax, edi */ r_eax = r_edi;
    /* 00496271: add eax, 0x5d4 */ {  u32 a = r_eax; u32 b = 0x5d4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00496276: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00496278: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00496279: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0049627a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049627b: push 0x3bf */ { u32 v = 0x3bfu; r_esp -= 4; W32(r_esp, v); }
    /* 00496280: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x496285u); f_00814298();
    /* 00496285: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00496288: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00496289: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0049628a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0049628b: ret  */ FN_RET(0x004960a4); r_esp += 4; return;
}

void f_00496169(void)
{
    FN_ENTER(0x00496169);
    goto L_00496169;
L_00496159:; BB(0x00496159);
    /* 00496159: mov eax, dword ptr [ebx + 0x902678] */ r_eax = R32((u32)(r_ebx+0x902678u));
    /* 0049615f: mov ecx, dword ptr [edi + 0x60] */ r_ecx = R32((u32)(r_edi+0x60u));
    /* 00496162: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00496164: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00496166: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
L_00496169:; BB(0x00496169);
    /* 00496169: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0049616b: mov eax, dword ptr [edx + edi + 0x580] */ r_eax = R32((u32)(r_edx+r_edi+0x580u));
    /* 00496172: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00496175: mov eax, dword ptr [edx + edi + 0x584] */ r_eax = R32((u32)(r_edx+r_edi+0x584u));
    /* 0049617c: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00496180: mov eax, dword ptr [edx + edi + 0x588] */ r_eax = R32((u32)(r_edx+r_edi+0x588u));
    /* 00496187: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00496189: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0049618d: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x496192u); f_0082ddd8();
    /* 00496192: fmul dword ptr [esp + 0x24] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x24u));
    /* 00496196: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 0049619a: mov ecx, dword ptr [edi + 0x60] */ r_ecx = R32((u32)(r_edi+0x60u));
    /* 0049619d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0049619f: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 004961a3: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 004961a7: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004961a9: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x4961aeu); f_0082dcbc();
    /* 004961ae: fmul dword ptr [esp + 0x24] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x24u));
    /* 004961b2: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 004961b6: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 004961ba: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 004961bd: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x4961c2u); f_0082f9c4();
    /* 004961c2: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 004961c6: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x4961cbu); f_0083173c();
    /* 004961cb: fcom dword ptr [0x902aa8] */ fx_compare(ST(0), R_F32((u32)(0x902aa8u))); 
    /* 004961d1: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004961d3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004961d4: ja 0x4961e6 */ if ((!fC&&!fZ)) goto L_004961e6;
L_004961d6:; BB(0x004961d6);
    /* 004961d6: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004961d8: fld dword ptr [0x902aa4] */ FPUSH(R_F32((u32)(0x902aa4u)));
    /* 004961de: fld dword ptr [0x902aa4] */ FPUSH(R_F32((u32)(0x902aa4u)));
    /* 004961e4: jmp 0x4961ea */ goto L_004961ea;
L_004961e6:; BB(0x004961e6);
    /* 004961e6: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
L_004961ea:; BB(0x004961ea);
    /* 004961ea: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004961ec: fdivr dword ptr [0xa472e4] */ ST(0) = R_F32((u32)(0xa472e4u)) / ST(0);
    /* 004961f2: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 004961f4: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 004961f8: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004961fa: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004961fc: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00496200: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 00496204: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00496206: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00496208: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 0049620c: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00496210: call 0x48e134 */ r_esp -= 4; W32(r_esp, 0x496215u); f_0048e134();
    /* 00496215: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00496217: je 0x496237 */ if (fZ) goto L_00496237;
L_00496219:; BB(0x00496219);
    /* 00496219: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0049621c: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 00496220: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00496225: push 0x40f00000 */ { u32 v = 0x40f00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0049622a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049622b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0049622c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0049622d: call 0x4886e8 */ r_esp -= 4; W32(r_esp, 0x496232u); f_004886e8();
    /* 00496232: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00496235: jmp 0x49624f */ goto L_0049624f;
L_00496237:; BB(0x00496237);
    /* 00496237: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0049623a: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 0049623e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0049623f: push 0x40f00000 */ { u32 v = 0x40f00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00496244: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00496245: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00496246: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00496247: call 0x4886e8 */ r_esp -= 4; W32(r_esp, 0x49624cu); f_004886e8();
    /* 0049624c: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0049624f:; BB(0x0049624f);
    /* 0049624f: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 00496253: fadd dword ptr [0xa472f0] */ ST(0) = ST(0) + R_F32((u32)(0xa472f0u));
    /* 00496259: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 0049625d: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00496260: and esi, 3 */ {  u32 a = r_esi; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 00496263: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00496266: cmp ebx, 0x14 */ {  u32 a = r_ebx; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00496269: jl 0x496159 */ if ((fS!=fO)) goto L_00496159;
L_0049626f:; BB(0x0049626f);
    /* 0049626f: mov eax, edi */ r_eax = r_edi;
    /* 00496271: add eax, 0x5d4 */ {  u32 a = r_eax; u32 b = 0x5d4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00496276: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00496278: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00496279: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0049627a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049627b: push 0x3bf */ { u32 v = 0x3bfu; r_esp -= 4; W32(r_esp, v); }
    /* 00496280: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x496285u); f_00814298();
    /* 00496285: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00496288: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00496289: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0049628a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0049628b: ret  */ FN_RET(0x00496169); r_esp += 4; return;
}

void f_0049628c(void) /* sub_49628C */
{
    FN_ENTER(0x0049628c);
    /* 0049628c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0049628d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0049628e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0049628f: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00496292: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00496294: movzx eax, byte ptr [ebx + 0x424] */ r_eax = (u32)R8((u32)(r_ebx+0x424u));
    /* 0049629b: mov edi, 1 */ r_edi = 0x1u;
    /* 004962a0: and eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004962a3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004962a4: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x4962a9u); f_0068d5a8();
    /* 004962a9: mov esi, eax */ r_esi = r_eax;
    /* 004962ab: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004962ac: call 0x48e100 */ r_esp -= 4; W32(r_esp, 0x4962b1u); f_0048e100();
    /* 004962b1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004962b4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004962b6: je 0x4962ce */ if (fZ) goto L_004962ce;
L_004962b8:; BB(0x004962b8);
    /* 004962b8: mov edx, dword ptr [esi + 0x38] */ r_edx = R32((u32)(r_esi+0x38u));
    /* 004962bb: mov eax, dword ptr [esi + 0x40] */ r_eax = R32((u32)(r_esi+0x40u));
    /* 004962be: mov esi, dword ptr [ebx + 0x3c] */ r_esi = R32((u32)(r_ebx+0x3cu));
    /* 004962c1: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 004962c4: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 004962c6: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004962ca: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
L_004962ce:; BB(0x004962ce);
    /* 004962ce: movsx edx, byte ptr [ebx + 0x424] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebx+0x424u));
    /* 004962d5: test dl, 0x40 */ {  u32 a = (u8)r_edx; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004962d8: jne 0x4962e2 */ if (!fZ) goto L_004962e2;
L_004962da:; BB(0x004962da);
    /* 004962da: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004962dc: je 0x496367 */ if (fZ) goto L_00496367;
L_004962e2:; BB(0x004962e2);
    /* 004962e2: movzx eax, byte ptr [0xa472f4] */ r_eax = (u32)R8((u32)(0xa472f4u));
    /* 004962e9: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004962eb: jne 0x496301 */ if (!fZ) goto L_00496301;
L_004962ed:; BB(0x004962ed);
    /* 004962ed: mov dword ptr [0xa472f8], 0x42a00000 */ W32((u32)(0xa472f8u), 0x42a00000u);
    /* 004962f7: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004962fc: mov byte ptr [0xa472f4], al */ W8((u32)(0xa472f4u), (u8)r_eax);
L_00496301:; BB(0x00496301);
    /* 00496301: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 00496304: mov edi, dword ptr [ebx + 0x40] */ r_edi = R32((u32)(r_ebx+0x40u));
    /* 00496307: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0049630a: mov esi, edx */ r_esi = r_edx;
    /* 0049630c: and esi, 0xf */ {  u32 a = r_esi; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 0049630f: sar edx, 3 */ { u32 c = (3u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 00496312: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
    /* 00496316: and edx, 0xf */ {  u32 a = r_edx; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00496319: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 0049631d: fild dword ptr [esp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_esp+0xcu)));
    /* 00496321: fdiv dword ptr [0x902a98] */ ST(0) = ST(0) / R_F32((u32)(0x902a98u));
    /* 00496327: mov edx, dword ptr [ebx + 0x3c] */ r_edx = R32((u32)(r_ebx+0x3cu));
    /* 0049632a: fmul dword ptr [0xa472f8] */ ST(0) = ST(0) * R_F32((u32)(0xa472f8u));
    /* 00496330: fadd dword ptr [0x902698] */ ST(0) = ST(0) + R_F32((u32)(0x902698u));
    /* 00496336: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 0049633a: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0049633e: shl esi, 0xc */ { u32 c = (12u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 00496341: mov ecx, esi */ r_ecx = r_esi;
    /* 00496343: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x496348u); f_0082dcbc();
    /* 00496348: fmul dword ptr [esp + 0x14] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x14u));
    /* 0049634c: fadd dword ptr [esp] */ ST(0) = ST(0) + R_F32((u32)(r_esp));
    /* 0049634f: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00496352: mov ecx, esi */ r_ecx = r_esi;
    /* 00496354: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x496359u); f_0082ddd8();
    /* 00496359: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 0049635d: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0049635f: fadd dword ptr [esp + 8] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x8u));
    /* 00496363: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
L_00496367:; BB(0x00496367);
    /* 00496367: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0049636a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049636b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0049636c: call 0x488048 */ r_esp -= 4; W32(r_esp, 0x496371u); f_00488048();
    /* 00496371: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00496374: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00496375: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00496376: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00496377: ret  */ FN_RET(0x0049628c); r_esp += 4; return;
}

void f_00496346(void)
{
    FN_ENTER(0x00496346);
    /* 00496346: cmp dword ptr [eax], eax */ {  u32 a = R32((u32)(r_eax)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;   }
    /* 00496348: fmul dword ptr [esp + 0x14] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x14u));
    /* 0049634c: fadd dword ptr [esp] */ ST(0) = ST(0) + R_F32((u32)(r_esp));
    /* 0049634f: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00496352: mov ecx, esi */ r_ecx = r_esi;
    /* 00496354: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x496359u); f_0082ddd8();
    /* 00496359: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 0049635d: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0049635f: fadd dword ptr [esp + 8] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x8u));
    /* 00496363: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00496367: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0049636a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049636b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0049636c: call 0x488048 */ r_esp -= 4; W32(r_esp, 0x496371u); f_00488048();
    /* 00496371: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00496374: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00496375: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00496376: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00496377: ret  */ FN_RET(0x00496346); r_esp += 4; return;
}

void f_00496378(void) /* sub_496378 */
{
    FN_ENTER(0x00496378);
    /* 00496378: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00496379: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0049637a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0049637b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0049637c: sub esp, 0x94 */ {  u32 a = r_esp; u32 b = 0x94u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00496382: movsx eax, byte ptr [ecx + 0x424] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ecx+0x424u));
    /* 00496389: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 0049638d: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00496391: call 0x4967dc */ r_esp -= 4; W32(r_esp, 0x496396u); f_004967dc();
    /* 00496396: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 0049639a: mov eax, dword ptr [edx + 0x400] */ r_eax = R32((u32)(r_edx+0x400u));
    /* 004963a0: movzx ecx, word ptr [eax + 0x390] */ r_ecx = (u32)R16((u32)(r_eax+0x390u));
    /* 004963a7: mov word ptr [esp + 0x30], cx */ W16((u32)(r_esp+0x30u), (u16)r_ecx);
    /* 004963ac: movzx ebx, word ptr [eax + 0x392] */ r_ebx = (u32)R16((u32)(r_eax+0x392u));
    /* 004963b3: mov word ptr [esp + 0x32], bx */ W16((u32)(r_esp+0x32u), (u16)r_ebx);
    /* 004963b8: movzx ebp, word ptr [eax + 0x394] */ r_ebp = (u32)R16((u32)(r_eax+0x394u));
    /* 004963bf: mov word ptr [esp + 0x34], bp */ W16((u32)(r_esp+0x34u), (u16)r_ebp);
    /* 004963c4: movzx esi, word ptr [eax + 0x396] */ r_esi = (u32)R16((u32)(r_eax+0x396u));
    /* 004963cb: mov word ptr [esp + 0x36], si */ W16((u32)(r_esp+0x36u), (u16)r_esi);
    /* 004963d0: movzx edi, word ptr [eax + 0x398] */ r_edi = (u32)R16((u32)(r_eax+0x398u));
    /* 004963d7: mov word ptr [esp + 0x38], di */ W16((u32)(r_esp+0x38u), (u16)r_edi);
    /* 004963dc: movzx ecx, word ptr [eax + 0x39a] */ r_ecx = (u32)R16((u32)(r_eax+0x39au));
    /* 004963e3: mov word ptr [esp + 0x3a], cx */ W16((u32)(r_esp+0x3au), (u16)r_ecx);
    /* 004963e8: movzx ecx, word ptr [eax + 0x39c] */ r_ecx = (u32)R16((u32)(r_eax+0x39cu));
    /* 004963ef: mov word ptr [esp + 0x3c], cx */ W16((u32)(r_esp+0x3cu), (u16)r_ecx);
    /* 004963f4: movzx ecx, word ptr [eax + 0x39e] */ r_ecx = (u32)R16((u32)(r_eax+0x39eu));
    /* 004963fb: mov word ptr [esp + 0x3e], cx */ W16((u32)(r_esp+0x3eu), (u16)r_ecx);
    /* 00496400: mov ecx, dword ptr [eax + 0x3a0] */ r_ecx = R32((u32)(r_eax+0x3a0u));
    /* 00496406: mov dword ptr [esp + 0x40], ecx */ W32((u32)(r_esp+0x40u), r_ecx);
    /* 0049640a: mov ecx, dword ptr [eax + 0x3a4] */ r_ecx = R32((u32)(r_eax+0x3a4u));
    /* 00496410: mov dword ptr [esp + 0x44], ecx */ W32((u32)(r_esp+0x44u), r_ecx);
    /* 00496414: mov ecx, dword ptr [eax + 0x3a8] */ r_ecx = R32((u32)(r_eax+0x3a8u));
    /* 0049641a: mov dword ptr [esp + 0x48], ecx */ W32((u32)(r_esp+0x48u), r_ecx);
    /* 0049641e: mov ecx, dword ptr [eax + 0x3ac] */ r_ecx = R32((u32)(r_eax+0x3acu));
    /* 00496424: mov dword ptr [esp + 0x4c], ecx */ W32((u32)(r_esp+0x4cu), r_ecx);
    /* 00496428: mov ecx, dword ptr [eax + 0x3b0] */ r_ecx = R32((u32)(r_eax+0x3b0u));
    /* 0049642e: mov dword ptr [esp + 0x50], ecx */ W32((u32)(r_esp+0x50u), r_ecx);
    /* 00496432: mov ecx, dword ptr [eax + 0x3b4] */ r_ecx = R32((u32)(r_eax+0x3b4u));
    /* 00496438: mov dword ptr [esp + 0x54], ecx */ W32((u32)(r_esp+0x54u), r_ecx);
    /* 0049643c: mov ecx, dword ptr [eax + 0x3b8] */ r_ecx = R32((u32)(r_eax+0x3b8u));
    /* 00496442: mov dword ptr [esp + 0x58], ecx */ W32((u32)(r_esp+0x58u), r_ecx);
    /* 00496446: mov ecx, dword ptr [eax + 0x3bc] */ r_ecx = R32((u32)(r_eax+0x3bcu));
    /* 0049644c: mov dword ptr [esp + 0x5c], ecx */ W32((u32)(r_esp+0x5cu), r_ecx);
    /* 00496450: mov ecx, dword ptr [eax + 0x3c0] */ r_ecx = R32((u32)(r_eax+0x3c0u));
    /* 00496456: mov dword ptr [esp + 0x60], ecx */ W32((u32)(r_esp+0x60u), r_ecx);
    /* 0049645a: mov ecx, dword ptr [eax + 0x3c4] */ r_ecx = R32((u32)(r_eax+0x3c4u));
    /* 00496460: mov dword ptr [esp + 0x64], ecx */ W32((u32)(r_esp+0x64u), r_ecx);
    /* 00496464: mov ecx, dword ptr [eax + 0x3c8] */ r_ecx = R32((u32)(r_eax+0x3c8u));
    /* 0049646a: mov dword ptr [esp + 0x68], ecx */ W32((u32)(r_esp+0x68u), r_ecx);
    /* 0049646e: movzx ecx, word ptr [eax + 0x3cc] */ r_ecx = (u32)R16((u32)(r_eax+0x3ccu));
    /* 00496475: mov word ptr [esp + 0x6c], cx */ W16((u32)(r_esp+0x6cu), (u16)r_ecx);
    /* 0049647a: movzx eax, word ptr [eax + 0x3ce] */ r_eax = (u32)R16((u32)(r_eax+0x3ceu));
    /* 00496481: mov word ptr [esp + 0x6e], ax */ W16((u32)(r_esp+0x6eu), (u16)r_eax);
    /* 00496486: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00496488: mov dword ptr [esp + 0x70], edx */ W32((u32)(r_esp+0x70u), r_edx);
    /* 0049648c: mov ecx, dword ptr [edx + 0x580] */ r_ecx = R32((u32)(r_edx+0x580u));
    /* 00496492: mov dword ptr [esp + 0x74], ecx */ W32((u32)(r_esp+0x74u), r_ecx);
    /* 00496496: mov ebx, dword ptr [edx + 0x584] */ r_ebx = R32((u32)(r_edx+0x584u));
    /* 0049649c: mov dword ptr [esp + 0x78], ebx */ W32((u32)(r_esp+0x78u), r_ebx);
    /* 004964a0: mov edx, dword ptr [edx + 0x588] */ r_edx = R32((u32)(r_edx+0x588u));
    /* 004964a6: mov dword ptr [esp + 0x7c], edx */ W32((u32)(r_esp+0x7cu), r_edx);
    /* 004964aa: mov word ptr [esp + 0x38], ax */ W16((u32)(r_esp+0x38u), (u16)r_eax);
    /* 004964af: mov dword ptr [esp + 0x80], 0 */ W32((u32)(r_esp+0x80u), 0x0u);
    /* 004964ba: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004964bc: mov dword ptr [esp + 0x84], 0 */ W32((u32)(r_esp+0x84u), 0x0u);
    /* 004964c7: mov dword ptr [esp + 0x40], ecx */ W32((u32)(r_esp+0x40u), r_ecx);
    /* 004964cb: mov dword ptr [esp + 0x44], ebx */ W32((u32)(r_esp+0x44u), r_ebx);
    /* 004964cf: mov dword ptr [esp + 0x88], 0 */ W32((u32)(r_esp+0x88u), 0x0u);
    /* 004964da: mov dword ptr [esp + 0x48], edx */ W32((u32)(r_esp+0x48u), r_edx);
    /* 004964de: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 004964e2: call 0x48e12c */ r_esp -= 4; W32(r_esp, 0x4964e7u); f_0048e12c();
    /* 004964e7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004964e9: jne 0x4964f6 */ if (!fZ) goto L_004964f6;
L_004964eb:; BB(0x004964eb);
    /* 004964eb: mov eax, 0x12 */ r_eax = 0x12u;
    /* 004964f0: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004964f4: jmp 0x4964ff */ goto L_004964ff;
L_004964f6:; BB(0x004964f6);
    /* 004964f6: mov eax, 0x24 */ r_eax = 0x24u;
    /* 004964fb: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
L_004964ff:; BB(0x004964ff);
    /* 004964ff: mov edx, eax */ r_edx = r_eax;
    /* 00496501: mov ebx, 1 */ r_ebx = 0x1u;
    /* 00496506: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00496508: mov eax, 3 */ r_eax = 0x3u;
    /* 0049650d: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00496510: jle 0x49651e */ if ((fZ||fS!=fO)) goto L_0049651e;
L_00496512:; BB(0x00496512);
    /* 00496512: add ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00496514: add eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00496517: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0049651a: cmp edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0049651c: jg 0x496512 */ if ((!fZ&&fS==fO)) goto L_00496512;
L_0049651e:; BB(0x0049651e);
    /* 0049651e: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 00496521: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00496523: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 00496526: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00496528: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00496529: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x49652eu); f_008581c5();
    /* 0049652e: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00496532: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00496535: mov dword ptr [eax], 0 */ W32((u32)(r_eax), 0x0u);
    /* 0049653b: cmp ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0049653e: mov dword ptr [eax + 4], 0 */ W32((u32)(r_eax+0x4u), 0x0u);
    /* 00496545: mov dword ptr [eax + 8], 0 */ W32((u32)(r_eax+0x8u), 0x0u);
    /* 0049654c: jle 0x49661e */ if ((fZ||fS!=fO)) goto L_0049661e;
L_00496552:; BB(0x00496552);
    /* 00496552: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00496554: jle 0x49661e */ if ((fZ||fS!=fO)) goto L_0049661e;
L_0049655a:; BB(0x0049655a);
    /* 0049655a: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 0049655d: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 00496560: fdivr dword ptr [0x90269c] */ ST(0) = R_F32((u32)(0x90269cu)) / ST(0);
    /* 00496566: fst dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0));
    /* 0049656a: mov dword ptr [esp + 0x1c], ebx */ W32((u32)(r_esp+0x1cu), r_ebx);
    /* 0049656e: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 00496572: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00496574: mov edi, 0x5555 */ r_edi = 0x5555u;
    /* 00496579: mov esi, 1 */ r_esi = 0x1u;
    /* 0049657e: mov ebp, 0xc */ r_ebp = 0xcu;
    /* 00496583: lea edx, [ebx + ebx] */ r_edx = (u32)(r_ebx+r_ebx);
    /* 00496586: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00496588: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 0049658b: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0049658d: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 00496591: mov ebx, ecx */ r_ebx = r_ecx;
L_00496593:; BB(0x00496593);
    /* 00496593: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00496595: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x49659au); f_0082dcbc();
    /* 0049659a: fmul dword ptr [esp + 0x28] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x28u));
    /* 0049659e: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 004965a2: fstp dword ptr [ebp + edx] */ W_F32((u32)(r_ebp+r_edx), ST(0)); FPOP();
    /* 004965a6: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004965a8: mov dword ptr [ebp + edx + 4], 0 */ W32((u32)(r_ebp+r_edx+0x4u), 0x0u);
    /* 004965b0: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x4965b5u); f_0082ddd8();
    /* 004965b5: fmul dword ptr [esp + 0x28] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x28u));
    /* 004965b9: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 004965bd: fstp dword ptr [ebp + edx + 8] */ W_F32((u32)(r_ebp+r_edx+0x8u), ST(0)); FPOP();
    /* 004965c1: add ebp, 0xc */ {  u32 a = r_ebp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004965c4: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 004965c8: cmp ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004965ca: jge 0x49661a */ if ((fS==fO)) goto L_0049661a;
L_004965cc:; BB(0x004965cc);
    /* 004965cc: add ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004965ce: mov edx, edi */ r_edx = r_edi;
    /* 004965d0: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 004965d3: add edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004965d5: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 004965d7: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004965d9: add edx, 0x10000 */ {  u32 a = r_edx; u32 b = 0x10000u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004965df: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004965e1: jle 0x496593 */ if ((fZ||fS!=fO)) goto L_00496593;
L_004965e3:; BB(0x004965e3);
    /* 004965e3: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 004965e7: fadd dword ptr [esp + 0x20] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x20u));
    /* 004965eb: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 004965ef: mov eax, 0x10000 */ r_eax = 0x10000u;
    /* 004965f4: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004965f7: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 004965fa: add ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004965fc: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004965fe: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x004965fe, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x004965fe, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00496600: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00496602: test esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00496608: mov edi, eax */ r_edi = r_eax;
    /* 0049660a: je 0x496593 */ if (fZ) goto L_00496593;
L_0049660c:; BB(0x0049660c);
    /* 0049660c: mov ebx, edi */ r_ebx = r_edi;
    /* 0049660e: shr ebx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 00496611: add ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00496613: sar ebx, 1 */ { u32 c = (1u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 00496615: jmp 0x496593 */ goto L_00496593;
L_0049661a:; BB(0x0049661a);
    /* 0049661a: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
L_0049661e:; BB(0x0049661e);
    /* 0049661e: mov edx, ebx */ r_edx = r_ebx;
    /* 00496620: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00496623: add edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00496625: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 00496627: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0049662a: jle 0x4966dd */ if ((fZ||fS!=fO)) goto L_004966dd;
L_00496630:; BB(0x00496630);
    /* 00496630: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00496632: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00496634: jle 0x4966dd */ if ((fZ||fS!=fO)) goto L_004966dd;
L_0049663a:; BB(0x0049663a);
    /* 0049663a: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 0049663e: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 00496642: mov dword ptr [esp + 0x1c], ebx */ W32((u32)(r_esp+0x1cu), r_ebx);
L_00496646:; BB(0x00496646);
    /* 00496646: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0049664a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049664b: call 0x48e52c */ r_esp -= 4; W32(r_esp, 0x496650u); f_0048e52c();
    /* 00496650: mov ebx, eax */ r_ebx = r_eax;
    /* 00496652: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00496653: call 0x48e52c */ r_esp -= 4; W32(r_esp, 0x496658u); f_0048e52c();
    /* 00496658: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0049665c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0049665f: mov eax, ebx */ r_eax = r_ebx;
    /* 00496661: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00496662: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
    /* 00496666: idiv ebx */ { i32 d = (i32)r_ebx; if (!d) UNSUP(0x00496666, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00496666, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00496668: mov ecx, edx */ r_ecx = r_edx;
    /* 0049666a: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0049666e: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0049666f: idiv ebx */ { i32 d = (i32)r_ebx; if (!d) UNSUP(0x0049666f, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0049666f, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00496671: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00496673: jne 0x496684 */ if (!fZ) goto L_00496684;
L_00496675:; BB(0x00496675);
    /* 00496675: mov ebx, dword ptr [esp + 0x2c] */ r_ebx = R32((u32)(r_esp+0x2cu));
    /* 00496679: mov ebp, dword ptr [esp + 0x1c] */ r_ebp = R32((u32)(r_esp+0x1cu));
    /* 0049667d: lea eax, [ebx + edx + 1] */ r_eax = (u32)(r_ebx+r_edx+0x1u);
    /* 00496681: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00496682: idiv ebp */ { i32 d = (i32)r_ebp; if (!d) UNSUP(0x00496682, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00496682, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
L_00496684:; BB(0x00496684);
    /* 00496684: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
    /* 00496688: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0049668a: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0049668c: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 0049668f: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00496691: mov ecx, dword ptr [eax + edi] */ r_ecx = R32((u32)(r_eax+r_edi));
    /* 00496694: mov ebx, dword ptr [eax + edi + 4] */ r_ebx = R32((u32)(r_eax+r_edi+0x4u));
    /* 00496698: mov ebp, dword ptr [eax + edi + 8] */ r_ebp = R32((u32)(r_eax+r_edi+0x8u));
    /* 0049669c: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0049669e: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004966a0: lea esi, [edx + edx] */ r_esi = (u32)(r_edx+r_edx);
    /* 004966a3: add esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004966a5: mov edx, dword ptr [esi + edi] */ r_edx = R32((u32)(r_esi+r_edi));
    /* 004966a8: mov dword ptr [eax + edi], edx */ W32((u32)(r_eax+r_edi), r_edx);
    /* 004966ab: mov edx, dword ptr [esi + edi + 4] */ r_edx = R32((u32)(r_esi+r_edi+0x4u));
    /* 004966af: mov dword ptr [eax + edi + 4], edx */ W32((u32)(r_eax+r_edi+0x4u), r_edx);
    /* 004966b3: mov edx, dword ptr [esi + edi + 8] */ r_edx = R32((u32)(r_esi+r_edi+0x8u));
    /* 004966b7: mov dword ptr [eax + edi + 8], edx */ W32((u32)(r_eax+r_edi+0x8u), r_edx);
    /* 004966bb: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 004966bf: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 004966c3: mov dword ptr [esi + edi], ecx */ W32((u32)(r_esi+r_edi), r_ecx);
    /* 004966c6: mov dword ptr [esi + edi + 4], ebx */ W32((u32)(r_esi+r_edi+0x4u), r_ebx);
    /* 004966ca: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004966cd: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004966cf: mov dword ptr [esi + edi + 8], ebp */ W32((u32)(r_esi+r_edi+0x8u), r_ebp);
    /* 004966d3: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 004966d7: jl 0x496646 */ if ((fS!=fO)) goto L_00496646;
L_004966dd:; BB(0x004966dd);
    /* 004966dd: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 004966e1: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004966e5: mov dword ptr [esi + 0x4e8], 0 */ W32((u32)(r_esi+0x4e8u), 0x0u);
    /* 004966ef: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 004966f1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004966f3: jle 0x49679e */ if ((fZ||fS!=fO)) goto L_0049679e;
L_004966f9:; BB(0x004966f9);
    /* 004966f9: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
    /* 004966fd: mov ebp, esi */ r_ebp = r_esi;
    /* 004966ff: shl ebp, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebp = r;  } }
    /* 00496702: lea eax, [esi + esi] */ r_eax = (u32)(r_esi+r_esi);
    /* 00496705: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00496707: lea ebx, [eax + eax] */ r_ebx = (u32)(r_eax+r_eax);
    /* 0049670a: add ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0049670c: add ebx, dword ptr [esp + 0xc] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esp+0xcu)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00496710: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
L_00496714:; BB(0x00496714);
    /* 00496714: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 00496716: mov dword ptr [esp + 0x80], edx */ W32((u32)(r_esp+0x80u), r_edx);
    /* 0049671d: mov ecx, dword ptr [ebx + 4] */ r_ecx = R32((u32)(r_ebx+0x4u));
    /* 00496720: mov dword ptr [esp + 0x84], ecx */ W32((u32)(r_esp+0x84u), r_ecx);
    /* 00496727: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 0049672a: mov dword ptr [esp + 0x88], edx */ W32((u32)(r_esp+0x88u), r_edx);
    /* 00496731: mov dword ptr [esp + 0x8c], eax */ W32((u32)(r_esp+0x8cu), r_eax);
    /* 00496738: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00496739: call 0x48e52c */ r_esp -= 4; W32(r_esp, 0x49673eu); f_0048e52c();
    /* 0049673e: mov edi, eax */ r_edi = r_eax;
    /* 00496740: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00496743: mov dword ptr [esp + 0x90], edi */ W32((u32)(r_esp+0x90u), r_edi);
    /* 0049674a: lea ecx, [esp + 0x30] */ r_ecx = (u32)(r_esp+0x30u);
    /* 0049674e: lea edx, [esp + 0x36] */ r_edx = (u32)(r_esp+0x36u);
    /* 00496752: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00496753: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00496754: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 00496758: mov ecx, dword ptr [edx + 0x400] */ r_ecx = R32((u32)(r_edx+0x400u));
    /* 0049675e: call 0x48d67c */ r_esp -= 4; W32(r_esp, 0x496763u); f_0048d67c();
    /* 00496763: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00496765: je 0x49679e */ if (fZ) goto L_0049679e;
L_00496767:; BB(0x00496767);
    /* 00496767: lea edx, [esp + 0x30] */ r_edx = (u32)(r_esp+0x30u);
    /* 0049676b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0049676c: call 0x48c4dc */ r_esp -= 4; W32(r_esp, 0x496771u); f_0048c4dc();
    /* 00496771: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00496772: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00496774: je 0x49679e */ if (fZ) goto L_0049679e;
L_00496776:; BB(0x00496776);
    /* 00496776: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 0049677a: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 0049677e: add dword ptr [edx + 0x4e8], 1 */ { u32 ad = (u32)(r_edx+0x4e8u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00496785: add ebx, 0xc */ {  u32 a = r_ebx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00496788: add ebp, 0x10000 */ {  u32 a = r_ebp; u32 b = 0x10000u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0049678e: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00496791: mov eax, ebp */ r_eax = r_ebp;
    /* 00496793: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00496794: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00496794, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00496794, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00496796: cmp esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00496798: jl 0x496714 */ if ((fS!=fO)) goto L_00496714;
L_0049679e:; BB(0x0049679e);
    /* 0049679e: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 004967a2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004967a3: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x4967a8u); f_00857e98();
    /* 004967a8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004967a9: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 004967ad: mov edx, dword ptr [eax + 0x4e8] */ r_edx = R32((u32)(r_eax+0x4e8u));
    /* 004967b3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004967b5: jle 0x4967ce */ if ((fZ||fS!=fO)) goto L_004967ce;
L_004967b7:; BB(0x004967b7);
    /* 004967b7: mov edx, eax */ r_edx = r_eax;
    /* 004967b9: add edx, 0x38 */ {  u32 a = r_edx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004967bc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004967be: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004967bf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004967c0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004967c1: push 0x3cf */ { u32 v = 0x3cfu; r_esp -= 4; W32(r_esp, v); }
    /* 004967c6: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4967cbu); f_00814298();
    /* 004967cb: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004967ce:; BB(0x004967ce);
    /* 004967ce: add esp, 0x94 */ {  u32 a = r_esp; u32 b = 0x94u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004967d4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004967d5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004967d6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004967d7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004967d8: ret  */ FN_RET(0x00496378); r_esp += 4; return;
}

void f_004967dc(void) /* sub_4967DC */
{
    FN_ENTER(0x004967dc);
    /* 004967dc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004967de: mov dword ptr [ecx + 0x4e8], eax */ W32((u32)(r_ecx+0x4e8u), r_eax);
    /* 004967e4: mov dword ptr [ecx + 0x4ec], eax */ W32((u32)(r_ecx+0x4ecu), r_eax);
    /* 004967ea: ret  */ FN_RET(0x004967dc); r_esp += 4; return;
}

void f_004967ec(void) /* sub_4967EC */
{
    FN_ENTER(0x004967ec);
    /* 004967ec: fld dword ptr [0x9026ac] */ FPUSH(R_F32((u32)(0x9026acu)));
    /* 004967f2: fadd dword ptr [ecx + 0x4e4] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x4e4u));
    /* 004967f8: fld dword ptr [0x902a90] */ FPUSH(R_F32((u32)(0x902a90u)));
    /* 004967fe: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00496800: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00496802: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00496803: ja 0x496807 */ if ((!fC&&!fZ)) goto L_00496807;
L_00496805:; BB(0x00496805);
    /* 00496805: fst st(1) */ ST(1) = ST(0);
L_00496807:; BB(0x00496807);
    /* 00496807: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00496809: fstp dword ptr [ecx + 0x4e4] */ W_F32((u32)(r_ecx+0x4e4u), ST(0)); FPOP();
    /* 0049680f: ret  */ FN_RET(0x004967ec); r_esp += 4; return;
}

void f_00496810(void) /* sub_496810 */
{
    FN_ENTER(0x00496810);
    /* 00496810: fld dword ptr [0x9026b0] */ FPUSH(R_F32((u32)(0x9026b0u)));
    /* 00496816: fadd dword ptr [ecx + 0x4e4] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x4e4u));
    /* 0049681c: fld dword ptr [0x902a8c] */ FPUSH(R_F32((u32)(0x902a8cu)));
    /* 00496822: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00496824: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00496826: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00496827: jb 0x49682b */ if (fC) goto L_0049682b;
L_00496829:; BB(0x00496829);
    /* 00496829: fst st(1) */ ST(1) = ST(0);
L_0049682b:; BB(0x0049682b);
    /* 0049682b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0049682d: fstp dword ptr [ecx + 0x4e4] */ W_F32((u32)(r_ecx+0x4e4u), ST(0)); FPOP();
    /* 00496833: ret  */ FN_RET(0x00496810); r_esp += 4; return;
}

void f_00496834(void) /* sub_496834 */
{
    FN_ENTER(0x00496834);
    /* 00496834: mov dword ptr [ecx + 0x4e4], 0 */ W32((u32)(r_ecx+0x4e4u), 0x0u);
    /* 0049683e: ret  */ FN_RET(0x00496834); r_esp += 4; return;
}

void f_00496840(void) /* sub_496840 */
{
    FN_ENTER(0x00496840);
    /* 00496840: fld dword ptr [ecx + 0x3c] */ FPUSH(R_F32((u32)(r_ecx+0x3cu)));
    /* 00496843: fcomp dword ptr [0x902a70] */ fx_compare(ST(0), R_F32((u32)(0x902a70u))); FPOP();
    /* 00496849: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0049684b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0049684c: jbe 0x496854 */ if ((fC||fZ)) goto L_00496854;
L_0049684e:; BB(0x0049684e);
    /* 0049684e: mov eax, 1 */ r_eax = 0x1u;
    /* 00496853: ret  */ FN_RET(0x00496840); r_esp += 4; return;
L_00496854:; BB(0x00496854);
    /* 00496854: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00496856: ret  */ FN_RET(0x00496840); r_esp += 4; return;
}

void f_00496858(void) /* sub_496858 */
{
    FN_ENTER(0x00496858);
    /* 00496858: mov eax, dword ptr [ecx + 0x4b4] */ r_eax = R32((u32)(r_ecx+0x4b4u));
    /* 0049685e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00496860: jne 0x49687d */ if (!fZ) goto L_0049687d;
L_00496862:; BB(0x00496862);
    /* 00496862: fld dword ptr [ecx + 0x4e0] */ FPUSH(R_F32((u32)(r_ecx+0x4e0u)));
    /* 00496868: fcomp dword ptr [0x9026c4] */ fx_compare(ST(0), R_F32((u32)(0x9026c4u))); FPOP();
    /* 0049686e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00496870: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00496871: jae 0x49687d */ if (!fC) goto L_0049687d;
L_00496873:; BB(0x00496873);
    /* 00496873: mov dword ptr [ecx + 0x4b4], 1 */ W32((u32)(r_ecx+0x4b4u), 0x1u);
L_0049687d:; BB(0x0049687d);
    /* 0049687d: ret  */ FN_RET(0x00496858); r_esp += 4; return;
}

void f_00496880(void) /* sub_496880 */
{
    FN_ENTER(0x00496880);
    /* 00496880: mov eax, dword ptr [ecx + 0x41c] */ r_eax = R32((u32)(r_ecx+0x41cu));
    /* 00496886: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00496888: je 0x4968a7 */ if (fZ) goto L_004968a7;
L_0049688a:; BB(0x0049688a);
    /* 0049688a: movsx eax, word ptr [ecx + 0x334] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x334u));
    /* 00496891: mov edx, dword ptr [ecx + 0x4b8] */ r_edx = R32((u32)(r_ecx+0x4b8u));
    /* 00496897: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00496899: cmp edx, dword ptr [ecx + 0x498] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x498u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0049689f: jl 0x4968a7 */ if ((fS!=fO)) goto L_004968a7;
L_004968a1:; BB(0x004968a1);
    /* 004968a1: mov eax, 1 */ r_eax = 0x1u;
    /* 004968a6: ret  */ FN_RET(0x00496880); r_esp += 4; return;
L_004968a7:; BB(0x004968a7);
    /* 004968a7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004968a9: ret  */ FN_RET(0x00496880); r_esp += 4; return;
}

void f_004968ac(void) /* sub_4968AC */
{
    FN_ENTER(0x004968ac);
    /* 004968ac: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004968af: fild dword ptr [ecx + 0x49c] */ FPUSH((long double)(i32)R32((u32)(r_ecx+0x49cu)));
    /* 004968b5: fld dword ptr [ecx + 0x4bc] */ FPUSH(R_F32((u32)(r_ecx+0x4bcu)));
    /* 004968bb: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 004968bd: mov edx, dword ptr [ecx + 0x4b8] */ r_edx = R32((u32)(r_ecx+0x4b8u));
    /* 004968c3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004968c5: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 004968c8: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 004968cc: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004968d1: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004968d5: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 004968d9: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 004968dd: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 004968e0: movsx eax, word ptr [ecx + 0x334] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x334u));
    /* 004968e7: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004968e9: cmp edx, dword ptr [esp + 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x10u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004968ed: jl 0x496906 */ if ((fS!=fO)) goto L_00496906;
L_004968ef:; BB(0x004968ef);
    /* 004968ef: fld dword ptr [0x902a6c] */ FPUSH(R_F32((u32)(0x902a6cu)));
    /* 004968f5: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004968f7: fstp dword ptr [ecx + 0x4bc] */ W_F32((u32)(r_ecx+0x4bcu), ST(0)); FPOP();
    /* 004968fd: mov eax, 1 */ r_eax = 0x1u;
    /* 00496902: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00496905: ret  */ FN_RET(0x004968ac); r_esp += 4; return;
L_00496906:; BB(0x00496906);
    /* 00496906: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00496908: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0049690a: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0049690d: ret  */ FN_RET(0x004968ac); r_esp += 4; return;
}

void f_00496910(void) /* sub_496910 */
{
    FN_ENTER(0x00496910);
    /* 00496910: mov eax, dword ptr [ecx + 0x41c] */ r_eax = R32((u32)(r_ecx+0x41cu));
    /* 00496916: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00496918: jne 0x496937 */ if (!fZ) goto L_00496937;
L_0049691a:; BB(0x0049691a);
    /* 0049691a: movsx eax, word ptr [ecx + 0x334] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x334u));
    /* 00496921: mov edx, dword ptr [ecx + 0x4b8] */ r_edx = R32((u32)(r_ecx+0x4b8u));
    /* 00496927: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00496929: cmp edx, dword ptr [ecx + 0x494] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x494u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0049692f: jl 0x496937 */ if ((fS!=fO)) goto L_00496937;
L_00496931:; BB(0x00496931);
    /* 00496931: mov eax, 1 */ r_eax = 0x1u;
    /* 00496936: ret  */ FN_RET(0x00496910); r_esp += 4; return;
L_00496937:; BB(0x00496937);
    /* 00496937: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00496939: ret  */ FN_RET(0x00496910); r_esp += 4; return;
}

void f_0049693c(void) /* sub_49693C */
{
    FN_ENTER(0x0049693c);
    /* 0049693c: movsx eax, word ptr [ecx + 0x334] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x334u));
    /* 00496943: mov edx, dword ptr [ecx + 0x4b8] */ r_edx = R32((u32)(r_ecx+0x4b8u));
    /* 00496949: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0049694b: cmp edx, dword ptr [ecx + 0x4a0] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x4a0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00496951: jl 0x496959 */ if ((fS!=fO)) goto L_00496959;
L_00496953:; BB(0x00496953);
    /* 00496953: mov eax, 1 */ r_eax = 0x1u;
    /* 00496958: ret  */ FN_RET(0x0049693c); r_esp += 4; return;
L_00496959:; BB(0x00496959);
    /* 00496959: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0049695b: ret  */ FN_RET(0x0049693c); r_esp += 4; return;
}

void f_0049695c(void) /* sub_49695C */
{
    FN_ENTER(0x0049695c);
    /* 0049695c: mov ecx, dword ptr [ecx + 0x400] */ r_ecx = R32((u32)(r_ecx+0x400u));
    /* 00496962: call 0x48d6c4 */ r_esp -= 4; W32(r_esp, 0x496967u); f_0048d6c4();
    /* 00496967: cmp eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0049696a: jle 0x496972 */ if ((fZ||fS!=fO)) goto L_00496972;
L_0049696c:; BB(0x0049696c);
    /* 0049696c: mov eax, 1 */ r_eax = 0x1u;
    /* 00496971: ret  */ FN_RET(0x0049695c); r_esp += 4; return;
L_00496972:; BB(0x00496972);
    /* 00496972: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00496974: ret  */ FN_RET(0x0049695c); r_esp += 4; return;
}

void f_00496978(void) /* sub_496978 */
{
    FN_ENTER(0x00496978);
    /* 00496978: mov edx, dword ptr [ecx + 0x4e8] */ r_edx = R32((u32)(r_ecx+0x4e8u));
    /* 0049697e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00496980: jle 0x496997 */ if ((fZ||fS!=fO)) goto L_00496997;
L_00496982:; BB(0x00496982);
    /* 00496982: mov eax, dword ptr [ecx + 0x4ec] */ r_eax = R32((u32)(r_ecx+0x4ecu));
    /* 00496988: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0049698a: jl 0x496997 */ if ((fS!=fO)) goto L_00496997;
L_0049698c:; BB(0x0049698c);
    /* 0049698c: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0049698e: mov eax, 0 */ r_eax = 0x0u;
    /* 00496993: setge al */ r_eax = (r_eax & 0xffffff00u) | ((((fS==fO)) ? 1 : 0) & 0xffu);
    /* 00496996: ret  */ FN_RET(0x00496978); r_esp += 4; return;
L_00496997:; BB(0x00496997);
    /* 00496997: mov eax, 1 */ r_eax = 0x1u;
    /* 0049699c: ret  */ FN_RET(0x00496978); r_esp += 4; return;
}

void f_004969a0(void) /* sub_4969A0 */
{
    FN_ENTER(0x004969a0);
    /* 004969a0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004969a1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004969a2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004969a3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004969a4: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004969a7: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004969a9: mov eax, dword ptr [ebx + 0x37c] */ r_eax = R32((u32)(r_ebx+0x37cu));
    /* 004969af: movsx ebp, byte ptr [ebx + 0x424] */ r_ebp = (u32)(i32)(i8)R8((u32)(r_ebx+0x424u));
    /* 004969b6: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 004969ba: mov ecx, eax */ r_ecx = r_eax;
    /* 004969bc: sar ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 004969be: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 004969c1: lea edi, [ecx + 2] */ r_edi = (u32)(r_ecx+0x2u);
    /* 004969c4: and edi, 3 */ {  u32 a = r_edi; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_edi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 004969c7: mov esi, ebp */ r_esi = r_ebp;
    /* 004969c9: sar esi, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r; fC = ((i32)a >> ((c > 31 ? 31 : c - 1))) & 1; fO = 0; fZ = (r == 0); fS = (r >> 31) & 1; fP = !__builtin_parity(r & 0xffu); } }
    /* 004969cb: mov ecx, edi */ r_ecx = r_edi;
    /* 004969cd: sar ebp, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebp = r;  } }
    /* 004969cf: and esi, 0xf */ {  u32 a = r_esi; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 004969d2: and ebp, 0xf */ {  u32 a = r_ebp; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 004969d5: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004969d7: je 0x4969e3 */ if (fZ) goto L_004969e3;
L_004969d9:; BB(0x004969d9);
    /* 004969d9: not esi */ r_esi = ~r_esi;
    /* 004969db: and esi, 0xf */ {  u32 a = r_esi; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 004969de: not ebp */ r_ebp = ~r_ebp;
    /* 004969e0: and ebp, 0xf */ {  u32 a = r_ebp; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
L_004969e3:; BB(0x004969e3);
    /* 004969e3: movzx eax, byte ptr [0xa472fc] */ r_eax = (u32)R8((u32)(0xa472fcu));
    /* 004969ea: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004969ec: jne 0x496a0a */ if (!fZ) goto L_00496a0a;
L_004969ee:; BB(0x004969ee);
    /* 004969ee: fld dword ptr [0x902a44] */ FPUSH(R_F32((u32)(0x902a44u)));
    /* 004969f4: mov dword ptr [0xa47300], 0x40ff51b4 */ W32((u32)(0xa47300u), 0x40ff51b4u);
    /* 004969fe: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00496a03: mov byte ptr [0xa472fc], al */ W8((u32)(0xa472fcu), (u8)r_eax);
    /* 00496a08: jmp 0x496a10 */ goto L_00496a10;
L_00496a0a:; BB(0x00496a0a);
    /* 00496a0a: fld dword ptr [0xa47300] */ FPUSH(R_F32((u32)(0xa47300u)));
L_00496a10:; BB(0x00496a10);
    /* 00496a10: fld dword ptr [0x9026e4] */ FPUSH(R_F32((u32)(0x9026e4u)));
    /* 00496a16: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 00496a19: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 00496a1c: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00496a1e: fsub st(1), st(0) */ ST(1) = ST(1) - ST(0);
    /* 00496a20: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
    /* 00496a24: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00496a26: fstp dword ptr [edx] */ W_F32((u32)(r_edx), ST(0)); FPOP();
    /* 00496a28: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00496a2c: fmul dword ptr [0xa47300] */ ST(0) = ST(0) * R_F32((u32)(0xa47300u));
    /* 00496a32: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 00496a34: mov eax, dword ptr [ebx + 0x3c] */ r_eax = R32((u32)(r_ebx+0x3cu));
    /* 00496a37: fstp dword ptr [edx + 8] */ W_F32((u32)(r_edx+0x8u), ST(0)); FPOP();
    /* 00496a3a: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00496a3d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00496a40: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00496a41: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00496a42: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00496a43: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00496a44: ret 4 */ FN_RET(0x004969a0); r_esp += 8; return;
}

void f_00496a48(void) /* sub_496A48 */
{
    FN_ENTER(0x00496a48);
    /* 00496a48: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00496a49: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00496a4a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00496a4b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00496a4c: mov eax, ecx */ r_eax = r_ecx;
    /* 00496a4e: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
    /* 00496a52: movsx edx, byte ptr [eax + 0x424] */ r_edx = (u32)(i32)(i8)R8((u32)(r_eax+0x424u));
    /* 00496a59: imul ecx, edx, 0x12d687 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x12d687u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00496a5f: imul ecx, dword ptr [eax + 0x37c] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_eax+0x37cu)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00496a66: mov edx, ecx */ r_edx = r_ecx;
    /* 00496a68: and edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00496a6b: mov edi, ecx */ r_edi = r_ecx;
    /* 00496a6d: sar edi, 2 */ { u32 c = (2u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 00496a70: and edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 00496a73: sar ecx, 3 */ { u32 c = (3u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00496a76: and ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00496a79: lea ebp, [edx + edx] */ r_ebp = (u32)(r_edx+r_edx);
    /* 00496a7c: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00496a7e: sub ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 00496a80: shl ebp, 0xb */ { u32 c = (11u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebp = r;  } }
    /* 00496a83: add ebp, 0x2000 */ {  u32 a = r_ebp; u32 b = 0x2000u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00496a89: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00496a8b: je 0x496a8f */ if (fZ) goto L_00496a8f;
L_00496a8d:; BB(0x00496a8d);
    /* 00496a8d: neg ebp */ { u32 x = r_ebp; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
L_00496a8f:; BB(0x00496a8f);
    /* 00496a8f: add ebp, dword ptr [eax + 0x60] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_eax+0x60u)); u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00496a92: fld dword ptr [0x902a40] */ FPUSH(R_F32((u32)(0x902a40u)));
    /* 00496a98: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00496a9b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00496a9d: je 0x496aa8 */ if (fZ) goto L_00496aa8;
L_00496a9f:; BB(0x00496a9f);
    /* 00496a9f: fld dword ptr [0x902a3c] */ FPUSH(R_F32((u32)(0x902a3cu)));
    /* 00496aa5: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
L_00496aa8:; BB(0x00496aa8);
    /* 00496aa8: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00496aaa: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x496aafu); f_0082dcbc();
    /* 00496aaf: fmul dword ptr [esp] */ ST(0) = ST(0) * R_F32((u32)(r_esp));
    /* 00496ab2: fstp dword ptr [esi] */ W_F32((u32)(r_esi), ST(0)); FPOP();
    /* 00496ab4: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00496ab6: mov dword ptr [esi + 4], 0x42c80000 */ W32((u32)(r_esi+0x4u), 0x42c80000u);
    /* 00496abd: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x496ac2u); f_0082ddd8();
    /* 00496ac2: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00496ac5: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00496ac7: fstp dword ptr [esi + 8] */ W_F32((u32)(r_esi+0x8u), ST(0)); FPOP();
    /* 00496aca: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00496acb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00496acc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00496acd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00496ace: ret 4 */ FN_RET(0x00496a48); r_esp += 8; return;
}

void f_00496a6f(void)
{
    FN_ENTER(0x00496a6f);
    /* 00496a6f: add al, byte ptr [ebx - 0x63efe19] */ {  u32 a = (u8)r_eax; u32 b = R8((u32)(r_ebx+0xf9c101e7u)); u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00496a75: add eax, dword ptr [ebx + 0x2c8d01e1] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0x2c8d01e1u)); u32 r = (a + b) & 0xffffffffu; r_eax = r; fC = (r < a); }
    /* 00496a7b: adc al, byte ptr [ebx] */ { u32 c = fC; u32 a = (u8)r_eax; u32 b = R8((u32)(r_ebx)); u32 r = (a + b + c) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00496a7d: in eax, dx */ UNSUP(0x00496a7d, "in eax, dx");
    /* 00496a7e: sub ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 00496a80: shl ebp, 0xb */ { u32 c = (11u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebp = r;  } }
    /* 00496a83: add ebp, 0x2000 */ {  u32 a = r_ebp; u32 b = 0x2000u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00496a89: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00496a8b: je 0x496a8f */ if (fZ) goto L_00496a8f;
L_00496a8d:; BB(0x00496a8d);
    /* 00496a8d: neg ebp */ { u32 x = r_ebp; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
L_00496a8f:; BB(0x00496a8f);
    /* 00496a8f: add ebp, dword ptr [eax + 0x60] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_eax+0x60u)); u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00496a92: fld dword ptr [0x902a40] */ FPUSH(R_F32((u32)(0x902a40u)));
    /* 00496a98: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00496a9b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00496a9d: je 0x496aa8 */ if (fZ) goto L_00496aa8;
L_00496a9f:; BB(0x00496a9f);
    /* 00496a9f: fld dword ptr [0x902a3c] */ FPUSH(R_F32((u32)(0x902a3cu)));
    /* 00496aa5: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
L_00496aa8:; BB(0x00496aa8);
    /* 00496aa8: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00496aaa: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x496aafu); f_0082dcbc();
    /* 00496aaf: fmul dword ptr [esp] */ ST(0) = ST(0) * R_F32((u32)(r_esp));
    /* 00496ab2: fstp dword ptr [esi] */ W_F32((u32)(r_esi), ST(0)); FPOP();
    /* 00496ab4: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00496ab6: mov dword ptr [esi + 4], 0x42c80000 */ W32((u32)(r_esi+0x4u), 0x42c80000u);
    /* 00496abd: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x496ac2u); f_0082ddd8();
    /* 00496ac2: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00496ac5: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00496ac7: fstp dword ptr [esi + 8] */ W_F32((u32)(r_esi+0x8u), ST(0)); FPOP();
    /* 00496aca: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00496acb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00496acc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00496acd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00496ace: ret 4 */ FN_RET(0x00496a6f); r_esp += 8; return;
}

void f_00496ad4(void) /* sub_496AD4 */
{
    FN_ENTER(0x00496ad4);
    /* 00496ad4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00496ad5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00496ad6: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00496ad9: mov esi, ecx */ r_esi = r_ecx;
    /* 00496adb: mov ebp, dword ptr [esp + 0x18] */ r_ebp = R32((u32)(r_esp+0x18u));
    /* 00496adf: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 00496ae2: mov edx, dword ptr [esi + 0x40] */ r_edx = R32((u32)(r_esi+0x40u));
    /* 00496ae5: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00496ae8: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00496aec: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 00496af4: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00496af7: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x496afcu); f_0083173c();
    /* 00496afc: fcom dword ptr [0x902a34] */ fx_compare(ST(0), R_F32((u32)(0x902a34u))); 
    /* 00496b02: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00496b04: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00496b05: ja 0x496b23 */ if ((!fC&&!fZ)) goto L_00496b23;
L_00496b07:; BB(0x00496b07);
    /* 00496b07: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00496b09: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 00496b0c: mov dword ptr [ebp], eax */ W32((u32)(r_ebp), r_eax);
    /* 00496b0f: mov edx, dword ptr [esi + 0x3c] */ r_edx = R32((u32)(r_esi+0x3cu));
    /* 00496b12: mov dword ptr [ebp + 4], edx */ W32((u32)(r_ebp+0x4u), r_edx);
    /* 00496b15: mov ecx, dword ptr [esi + 0x40] */ r_ecx = R32((u32)(r_esi+0x40u));
    /* 00496b18: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
    /* 00496b1b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00496b1e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00496b1f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00496b20: ret 4 */ FN_RET(0x00496ad4); r_esp += 8; return;
L_00496b23:; BB(0x00496b23);
    /* 00496b23: fdivr dword ptr [0x902a30] */ ST(0) = R_F32((u32)(0x902a30u)) / ST(0);
    /* 00496b29: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00496b2c: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00496b2e: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 00496b32: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00496b34: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00496b36: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00496b3a: fstp dword ptr [ebp] */ W_F32((u32)(r_ebp), ST(0)); FPOP();
    /* 00496b3d: mov dword ptr [ebp + 4], 0x42c80000 */ W32((u32)(r_ebp+0x4u), 0x42c80000u);
    /* 00496b44: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00496b48: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 00496b4b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00496b4e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00496b4f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00496b50: ret 4 */ FN_RET(0x00496ad4); r_esp += 8; return;
}

void f_00496b54(void) /* sub_496B54 */
{
    FN_ENTER(0x00496b54);
    /* 00496b54: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00496b55: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00496b56: mov edx, 0x20 */ r_edx = 0x20u;
    /* 00496b5b: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00496b5d: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00496b61: cmp eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00496b64: jg 0x496b68 */ if ((!fZ&&fS==fO)) goto L_00496b68;
L_00496b66:; BB(0x00496b66);
    /* 00496b66: mov edx, eax */ r_edx = r_eax;
L_00496b68:; BB(0x00496b68);
    /* 00496b68: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00496b6a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00496b6c: jle 0x496b8b */ if ((fZ||fS!=fO)) goto L_00496b8b;
L_00496b6e:; BB(0x00496b6e);
    /* 00496b6e: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
L_00496b71:; BB(0x00496b71);
    /* 00496b71: mov esi, dword ptr [ecx + eax*4 + 0x380] */ r_esi = R32((u32)(r_ecx+r_eax*4+0x380u));
    /* 00496b78: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00496b7b: cmp esi, dword ptr [esp + 0xc] */ {  u32 a = r_esi; u32 b = R32((u32)(r_esp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00496b7f: jne 0x496b84 */ if (!fZ) goto L_00496b84;
L_00496b81:; BB(0x00496b81);
    /* 00496b81: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_00496b84:; BB(0x00496b84);
    /* 00496b84: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00496b86: jl 0x496b71 */ if ((fS!=fO)) goto L_00496b71;
L_00496b88:; BB(0x00496b88);
    /* 00496b88: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
L_00496b8b:; BB(0x00496b8b);
    /* 00496b8b: mov eax, ebx */ r_eax = r_ebx;
    /* 00496b8d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00496b8e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00496b8f: ret 8 */ FN_RET(0x00496b54); r_esp += 12; return;
}

void f_00496b94(void) /* sub_496B94 */
{
    FN_ENTER(0x00496b94);
    /* 00496b94: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00496b95: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00496b96: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00496b99: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00496b9b: fild dword ptr [esp + 0x44] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x44u)));
    /* 00496b9f: fild dword ptr [esp + 0x40] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x40u)));
    /* 00496ba3: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 00496ba5: fld dword ptr [0x902a14] */ FPUSH(R_F32((u32)(0x902a14u)));
    /* 00496bab: fsubr st(1), st(0) */ ST(1) = ST(0) - ST(1);
    /* 00496bad: fld dword ptr [0x902a10] */ FPUSH(R_F32((u32)(0x902a10u)));
    /* 00496bb3: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 00496bb5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00496bb7: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 00496bbb: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00496bbc: jbe 0x496bc4 */ if ((fC||fZ)) goto L_00496bc4;
L_00496bbe:; BB(0x00496bbe);
    /* 00496bbe: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00496bc0: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00496bc2: jmp 0x496bd5 */ goto L_00496bd5;
L_00496bc4:; BB(0x00496bc4);
    /* 00496bc4: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00496bc6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00496bc8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00496bc9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00496bcb: jb 0x496bcf */ if (fC) goto L_00496bcf;
L_00496bcd:; BB(0x00496bcd);
    /* 00496bcd: fst st(1) */ ST(1) = ST(0);
L_00496bcf:; BB(0x00496bcf);
    /* 00496bcf: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00496bd1: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
L_00496bd5:; BB(0x00496bd5);
    /* 00496bd5: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 00496bd9: fmul dword ptr [0x902a0c] */ ST(0) = ST(0) * R_F32((u32)(0x902a0cu));
    /* 00496bdf: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 00496be3: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 00496be8: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00496bed: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00496bf1: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 00496bf5: fistp dword ptr [esp + 0x20] */ W32((u32)(r_esp+0x20u), (u32)fx_int32(ST(0))); FPOP();
    /* 00496bf9: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00496bfd: mov ecx, 0x6000 */ r_ecx = 0x6000u;
    /* 00496c02: mov ebp, dword ptr [esp + 0x20] */ r_ebp = R32((u32)(r_esp+0x20u));
    /* 00496c06: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x496c0bu); f_0082dcbc();
    /* 00496c0b: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 00496c0f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00496c11: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x496c16u); f_0082dcbc();
    /* 00496c16: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 00496c1a: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 00496c1e: fdiv dword ptr [esp + 0x28] */ ST(0) = ST(0) / R_F32((u32)(r_esp+0x28u));
    /* 00496c22: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 00496c26: cmp ebp, 0x4000 */ {  u32 a = r_ebp; u32 b = 0x4000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00496c2c: jle 0x496c91 */ if ((fZ||fS!=fO)) goto L_00496c91;
L_00496c2e:; BB(0x00496c2e);
    /* 00496c2e: movzx eax, byte ptr [0xa47304] */ r_eax = (u32)R8((u32)(0xa47304u));
    /* 00496c35: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00496c37: jne 0x496c4b */ if (!fZ) goto L_00496c4b;
L_00496c39:; BB(0x00496c39);
    /* 00496c39: mov dword ptr [0xa47308], 0x3f2aaaab */ W32((u32)(0xa47308u), 0x3f2aaaabu);
    /* 00496c43: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00496c46: mov byte ptr [0xa47304], al */ W8((u32)(0xa47304u), (u8)r_eax);
L_00496c4b:; BB(0x00496c4b);
    /* 00496c4b: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00496c4d: jne 0x496c63 */ if (!fZ) goto L_00496c63;
L_00496c4f:; BB(0x00496c4f);
    /* 00496c4f: mov dword ptr [0xa4730c], 0x3eaaaaaa */ W32((u32)(0xa4730cu), 0x3eaaaaaau);
    /* 00496c59: or eax, 0xffffff02 */ {  u32 a = r_eax; u32 b = 0xffffff02u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00496c5e: mov byte ptr [0xa47304], al */ W8((u32)(0xa47304u), (u8)r_eax);
L_00496c63:; BB(0x00496c63);
    /* 00496c63: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 00496c67: fsub dword ptr [0xa47308] */ ST(0) = ST(0) - R_F32((u32)(0xa47308u));
    /* 00496c6d: fdiv dword ptr [0xa4730c] */ ST(0) = ST(0) / R_F32((u32)(0xa4730cu));
    /* 00496c73: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00496c76: call 0x48e5c0 */ r_esp -= 4; W32(r_esp, 0x496c7bu); f_0048e5c0();
    /* 00496c7b: fld dword ptr [0x902a14] */ FPUSH(R_F32((u32)(0x902a14u)));
    /* 00496c81: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 00496c85: fsub st(1), st(0) */ ST(1) = ST(1) - ST(0);
    /* 00496c87: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00496c89: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00496c8b: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00496c8d: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
L_00496c91:; BB(0x00496c91);
    /* 00496c91: mov eax, dword ptr [0xa47394] */ r_eax = R32((u32)(0xa47394u));
    /* 00496c96: mov ebp, dword ptr [0xa47398] */ r_ebp = R32((u32)(0xa47398u));
    /* 00496c9c: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00496ca0: mov eax, dword ptr [0xa4739c] */ r_eax = R32((u32)(0xa4739cu));
    /* 00496ca5: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
    /* 00496ca9: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 00496cad: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 00496cb1: mov edx, 0x9a7060 */ r_edx = 0x9a7060u;
    /* 00496cb6: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x496cbbu); f_0082f9c4();
    /* 00496cbb: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00496cbf: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 00496cc3: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 00496cc5: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 00496cc9: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 00496ccd: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00496ccf: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00496cd1: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00496cd3: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00496cd5: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00496cd7: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00496cdb: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00496cdf: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00496ce3: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 00496ce7: mov edx, 0x9a7060 */ r_edx = 0x9a7060u;
    /* 00496cec: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x496cf1u); f_0082ebac();
    /* 00496cf1: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00496cf5: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 00496cf9: mov ebp, dword ptr [esp + 0xc] */ r_ebp = R32((u32)(r_esp+0xcu));
    /* 00496cfd: mov dword ptr [ebx + 0x38], eax */ W32((u32)(r_ebx+0x38u), r_eax);
    /* 00496d00: mov dword ptr [ebx + 0x3c], edx */ W32((u32)(r_ebx+0x3cu), r_edx);
    /* 00496d03: mov dword ptr [ebx + 0x40], ebp */ W32((u32)(r_ebx+0x40u), r_ebp);
    /* 00496d06: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00496d09: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00496d0a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00496d0b: ret 8 */ FN_RET(0x00496b94); r_esp += 12; return;
}

void f_00496d10(void) /* sub_496D10 */
{
    FN_ENTER(0x00496d10);
    /* 00496d10: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00496d14: mov edx, eax */ r_edx = r_eax;
    /* 00496d16: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00496d19: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00496d1b: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 00496d1d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00496d1f: jle 0x496d27 */ if ((fZ||fS!=fO)) goto L_00496d27;
L_00496d21:; BB(0x00496d21);
    /* 00496d21: cmp edx, dword ptr [esp + 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00496d25: jl 0x496d2a */ if ((fS!=fO)) goto L_00496d2a;
L_00496d27:; BB(0x00496d27);
    /* 00496d27: ret 8 */ FN_RET(0x00496d10); r_esp += 12; return;
L_00496d2a:; BB(0x00496d2a);
    /* 00496d2a: fld dword ptr [0x9026f4] */ FPUSH(R_F32((u32)(0x9026f4u)));
    /* 00496d30: fadd dword ptr [ecx + 0x42c] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x42cu));
    /* 00496d36: fld dword ptr [ecx + 0x3c] */ FPUSH(R_F32((u32)(r_ecx+0x3cu)));
    /* 00496d39: fsub st(1), st(0) */ ST(1) = ST(1) - ST(0);
    /* 00496d3b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00496d3d: fmul dword ptr [0x9026f8] */ ST(0) = ST(0) * R_F32((u32)(0x9026f8u));
    /* 00496d43: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00496d45: fstp dword ptr [ecx + 0x3c] */ W_F32((u32)(r_ecx+0x3cu), ST(0)); FPOP();
    /* 00496d48: ret 8 */ FN_RET(0x00496d10); r_esp += 12; return;
}

void f_00496d4c(void) /* sub_496D4C */
{
    FN_ENTER(0x00496d4c);
    /* 00496d4c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00496d4d: mov ebx, esp */ r_ebx = r_esp;
    /* 00496d4f: and esp, 0xfffffff8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 00496d52: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00496d53: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00496d54: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00496d55: sub esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00496d58: mov edi, ecx */ r_edi = r_ecx;
    /* 00496d5a: mov eax, dword ptr [ebx + 0xc] */ r_eax = R32((u32)(r_ebx+0xcu));
    /* 00496d5d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00496d5f: jle 0x496f41 */ if ((fZ||fS!=fO)) goto L_00496f41;
L_00496d65:; BB(0x00496d65);
    /* 00496d65: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 00496d68: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00496d6a: jle 0x496f4d */ if ((fZ||fS!=fO)) goto L_00496f4d;
L_00496d70:; BB(0x00496d70);
    /* 00496d70: mov eax, dword ptr [edi + 0x38] */ r_eax = R32((u32)(r_edi+0x38u));
    /* 00496d73: mov edx, dword ptr [edi + 0x40] */ r_edx = R32((u32)(r_edi+0x40u));
    /* 00496d76: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 00496d7e: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00496d81: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00496d85: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00496d88: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x496d8du); f_0083173c();
    /* 00496d8d: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 00496d91: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00496d94: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 00496d98: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 00496d9a: mov edx, dword ptr [edi + 0x430] */ r_edx = R32((u32)(r_edi+0x430u));
    /* 00496da0: fmul qword ptr [0x902918] */ ST(0) = ST(0) * R_F64((u32)(0x902918u));
    /* 00496da6: fdiv qword ptr [0x902910] */ ST(0) = ST(0) / R_F64((u32)(0x902910u));
    /* 00496dac: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 00496db0: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 00496db5: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00496dba: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00496dbe: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 00496dc2: fistp dword ptr [esp + 0x20] */ W32((u32)(r_esp+0x20u), (u32)fx_int32(ST(0))); FPOP();
    /* 00496dc6: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00496dca: mov eax, dword ptr [edi + 0x428] */ r_eax = R32((u32)(r_edi+0x428u));
    /* 00496dd0: mov esi, dword ptr [esp + 0x20] */ r_esi = R32((u32)(r_esp+0x20u));
    /* 00496dd4: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 00496ddc: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00496ddf: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00496de3: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00496de6: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x496debu); f_0083173c();
    /* 00496deb: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 00496def: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00496df2: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 00496df6: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 00496df8: fmul qword ptr [0x902918] */ ST(0) = ST(0) * R_F64((u32)(0x902918u));
    /* 00496dfe: fdiv qword ptr [0x902910] */ ST(0) = ST(0) / R_F64((u32)(0x902910u));
    /* 00496e04: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 00496e07: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 00496e0b: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 00496e10: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00496e15: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00496e19: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 00496e1d: fistp dword ptr [esp + 0x20] */ W32((u32)(r_esp+0x20u), (u32)fx_int32(ST(0))); FPOP();
    /* 00496e21: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00496e25: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 00496e28: mov ebp, dword ptr [esp + 0x20] */ r_ebp = R32((u32)(r_esp+0x20u));
    /* 00496e2c: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 00496e30: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 00496e34: fst dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0));
    /* 00496e38: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 00496e3c: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 00496e40: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 00496e42: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00496e45: jle 0x496e95 */ if ((fZ||fS!=fO)) goto L_00496e95;
L_00496e47:; BB(0x00496e47);
    /* 00496e47: fcom dword ptr [0x9026fc] */ fx_compare(ST(0), R_F32((u32)(0x9026fcu))); 
    /* 00496e4d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00496e4f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00496e50: jbe 0x496e95 */ if ((fC||fZ)) goto L_00496e95;
L_00496e52:; BB(0x00496e52);
    /* 00496e52: fld dword ptr [0x902a00] */ FPUSH(R_F32((u32)(0x902a00u)));
    /* 00496e58: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00496e5a: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 00496e5e: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 00496e63: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00496e68: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00496e6c: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 00496e70: fistp dword ptr [esp + 0x20] */ W32((u32)(r_esp+0x20u), (u32)fx_int32(ST(0))); FPOP();
    /* 00496e74: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00496e78: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 00496e7c: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x496e81u); f_0082dcbc();
    /* 00496e81: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 00496e85: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 00496e89: fadd st(0) */ ST(0) = ST(0) + ST(0);
    /* 00496e8b: fdiv dword ptr [esp + 0x30] */ ST(0) = ST(0) / R_F32((u32)(r_esp+0x30u));
    /* 00496e8f: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 00496e93: jmp 0x496ea5 */ goto L_00496ea5;
L_00496e95:; BB(0x00496e95);
    /* 00496e95: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00496e97: fld dword ptr [0x9029fc] */ FPUSH(R_F32((u32)(0x9029fcu)));
    /* 00496e9d: fdiv dword ptr [esp + 0x30] */ ST(0) = ST(0) / R_F32((u32)(r_esp+0x30u));
    /* 00496ea1: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
L_00496ea5:; BB(0x00496ea5);
    /* 00496ea5: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 00496ea9: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 00496ead: fsub st(1), st(0) */ ST(1) = ST(1) - ST(0);
    /* 00496eaf: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00496eb1: fmul dword ptr [esp + 0x38] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x38u));
    /* 00496eb5: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00496eb7: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 00496ebb: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00496ebc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00496ebd: call 0x7a900c */ r_esp -= 4; W32(r_esp, 0x496ec2u); f_007a900c();
    /* 00496ec2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00496ec5: mov dword ptr [esp + 0x28], esi */ W32((u32)(r_esp+0x28u), r_esi);
    /* 00496ec9: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 00496ecd: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 00496ed1: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 00496ed5: fmul dword ptr [esp + 0x38] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x38u));
    /* 00496ed9: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00496edb: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 00496edf: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 00496ee4: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00496ee9: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00496eed: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 00496ef1: fistp dword ptr [esp + 0x20] */ W32((u32)(r_esp+0x20u), (u32)fx_int32(ST(0))); FPOP();
    /* 00496ef5: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00496ef9: mov ebp, dword ptr [esp + 0x20] */ r_ebp = R32((u32)(r_esp+0x20u));
    /* 00496efd: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00496eff: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x496f04u); f_0082dcbc();
    /* 00496f04: fmul dword ptr [esp + 0x3c] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x3cu));
    /* 00496f08: fstp dword ptr [edi + 0x38] */ W_F32((u32)(r_edi+0x38u), ST(0)); FPOP();
    /* 00496f0b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00496f0d: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x496f12u); f_0082ddd8();
    /* 00496f12: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 00496f16: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00496f18: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 00496f1c: fld dword ptr [edi + 0x3c] */ FPUSH(R_F32((u32)(r_edi+0x3cu)));
    /* 00496f1f: fld dword ptr [edi + 0x42c] */ FPUSH(R_F32((u32)(r_edi+0x42cu)));
    /* 00496f25: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00496f27: fstp dword ptr [edi + 0x40] */ W_F32((u32)(r_edi+0x40u), ST(0)); FPOP();
    /* 00496f2a: fsub st(2), st(0) */ ST(2) = ST(2) - ST(0);
    /* 00496f2c: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00496f2e: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00496f30: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00496f32: fstp dword ptr [edi + 0x3c] */ W_F32((u32)(r_edi+0x3cu), ST(0)); FPOP();
    /* 00496f35: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00496f38: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00496f39: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00496f3a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00496f3b: mov esp, ebx */ r_esp = r_ebx;
    /* 00496f3d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00496f3e: ret 8 */ FN_RET(0x00496d4c); r_esp += 12; return;
L_00496f41:; BB(0x00496f41);
    /* 00496f41: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00496f44: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00496f45: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00496f46: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00496f47: mov esp, ebx */ r_esp = r_ebx;
    /* 00496f49: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00496f4a: ret 8 */ FN_RET(0x00496d4c); r_esp += 12; return;
L_00496f4d:; BB(0x00496f4d);
    /* 00496f4d: mov eax, dword ptr [edi + 0x428] */ r_eax = R32((u32)(r_edi+0x428u));
    /* 00496f53: mov edx, dword ptr [edi + 0x42c] */ r_edx = R32((u32)(r_edi+0x42cu));
    /* 00496f59: mov ebp, dword ptr [edi + 0x430] */ r_ebp = R32((u32)(r_edi+0x430u));
    /* 00496f5f: mov dword ptr [edi + 0x38], eax */ W32((u32)(r_edi+0x38u), r_eax);
    /* 00496f62: mov dword ptr [edi + 0x3c], edx */ W32((u32)(r_edi+0x3cu), r_edx);
    /* 00496f65: mov dword ptr [edi + 0x40], ebp */ W32((u32)(r_edi+0x40u), r_ebp);
    /* 00496f68: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00496f6b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00496f6c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00496f6d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00496f6e: mov esp, ebx */ r_esp = r_ebx;
    /* 00496f70: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00496f71: ret 8 */ FN_RET(0x00496d4c); r_esp += 12; return;
}

void f_00496f74(void) /* sub_496F74 */
{
    FN_ENTER(0x00496f74);
    /* 00496f74: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00496f75: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00496f76: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00496f77: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00496f78: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00496f7b: mov edi, ecx */ r_edi = r_ecx;
    /* 00496f7d: mov esi, dword ptr [esp + 0x48] */ r_esi = R32((u32)(r_esp+0x48u));
    /* 00496f81: mov ebp, dword ptr [esp + 0x4c] */ r_ebp = R32((u32)(r_esp+0x4cu));
    /* 00496f85: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00496f87: jle 0x497093 */ if ((fZ||fS!=fO)) goto L_00497093;
L_00496f8d:; BB(0x00496f8d);
    /* 00496f8d: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00496f8f: jle 0x497093 */ if ((fZ||fS!=fO)) goto L_00497093;
L_00496f95:; BB(0x00496f95);
    /* 00496f95: mov eax, dword ptr [edi + 0x38] */ r_eax = R32((u32)(r_edi+0x38u));
    /* 00496f98: mov edx, dword ptr [edi + 0x40] */ r_edx = R32((u32)(r_edi+0x40u));
    /* 00496f9b: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 00496fa3: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00496fa6: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00496faa: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00496fad: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x496fb2u); f_0083173c();
    /* 00496fb2: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 00496fb6: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00496fb9: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 00496fbd: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 00496fbf: fmul qword ptr [0x902908] */ ST(0) = ST(0) * R_F64((u32)(0x902908u));
    /* 00496fc5: fdiv qword ptr [0x902900] */ ST(0) = ST(0) / R_F64((u32)(0x902900u));
    /* 00496fcb: fnstcw word ptr [esp + 0xc] */ W16((u32)(r_esp+0xcu), fcw);
    /* 00496fcf: movzx eax, word ptr [esp + 0xc] */ r_eax = (u32)R16((u32)(r_esp+0xcu));
    /* 00496fd4: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00496fd9: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00496fdd: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 00496fe1: fistp dword ptr [esp + 0x1c] */ W32((u32)(r_esp+0x1cu), (u32)fx_int32(ST(0))); FPOP();
    /* 00496fe5: fldcw word ptr [esp + 0xc] */ fcw = R16((u32)(r_esp+0xcu));
    /* 00496fe9: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
    /* 00496fed: mov dword ptr [esp + 0x24], esi */ W32((u32)(r_esp+0x24u), r_esi);
    /* 00496ff1: fild dword ptr [esp + 0x24] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x24u)));
    /* 00496ff5: fst dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0));
    /* 00496ff9: mov dword ptr [esp + 0x24], ebp */ W32((u32)(r_esp+0x24u), r_ebp);
    /* 00496ffd: fild dword ptr [esp + 0x24] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x24u)));
    /* 00497001: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 00497003: fmul dword ptr [0x9029f4] */ ST(0) = ST(0) * R_F32((u32)(0x9029f4u));
    /* 00497009: fnstcw word ptr [esp + 0xc] */ W16((u32)(r_esp+0xcu), fcw);
    /* 0049700d: movzx eax, word ptr [esp + 0xc] */ r_eax = (u32)R16((u32)(r_esp+0xcu));
    /* 00497012: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00497017: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0049701b: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 0049701f: fistp dword ptr [esp + 0x1c] */ W32((u32)(r_esp+0x1cu), (u32)fx_int32(ST(0))); FPOP();
    /* 00497023: fldcw word ptr [esp + 0xc] */ fcw = R16((u32)(r_esp+0xcu));
    /* 00497027: mov ecx, dword ptr [esp + 0x1c] */ r_ecx = R32((u32)(r_esp+0x1cu));
    /* 0049702b: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x497030u); f_0082dcbc();
    /* 00497030: fmul dword ptr [0x9029f0] */ ST(0) = ST(0) * R_F32((u32)(0x9029f0u));
    /* 00497036: fdiv dword ptr [esp + 0x2c] */ ST(0) = ST(0) / R_F32((u32)(r_esp+0x2cu));
    /* 0049703a: fnstcw word ptr [esp + 0xc] */ W16((u32)(r_esp+0xcu), fcw);
    /* 0049703e: movzx eax, word ptr [esp + 0xc] */ r_eax = (u32)R16((u32)(r_esp+0xcu));
    /* 00497043: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00497048: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0049704c: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 00497050: fistp dword ptr [esp + 0x1c] */ W32((u32)(r_esp+0x1cu), (u32)fx_int32(ST(0))); FPOP();
    /* 00497054: fldcw word ptr [esp + 0xc] */ fcw = R16((u32)(r_esp+0xcu));
    /* 00497058: movzx eax, byte ptr [edi + 0x424] */ r_eax = (u32)R8((u32)(r_edi+0x424u));
    /* 0049705f: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00497061: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 00497065: je 0x497069 */ if (fZ) goto L_00497069;
L_00497067:; BB(0x00497067);
    /* 00497067: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
L_00497069:; BB(0x00497069);
    /* 00497069: add ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0049706b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0049706d: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x497072u); f_0082dcbc();
    /* 00497072: fmul dword ptr [esp + 0x30] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x30u));
    /* 00497076: fstp dword ptr [edi + 0x38] */ W_F32((u32)(r_edi+0x38u), ST(0)); FPOP();
    /* 00497079: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0049707b: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x497080u); f_0082ddd8();
    /* 00497080: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 00497084: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00497086: fstp dword ptr [edi + 0x40] */ W_F32((u32)(r_edi+0x40u), ST(0)); FPOP();
    /* 00497089: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0049708c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0049708d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0049708e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0049708f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00497090: ret 8 */ FN_RET(0x00496f74); r_esp += 12; return;
L_00497093:; BB(0x00497093);
    /* 00497093: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00497096: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00497097: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00497098: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00497099: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0049709a: ret 8 */ FN_RET(0x00496f74); r_esp += 12; return;
}

