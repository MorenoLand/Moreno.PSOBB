#include "protos.h"

void f_005cc084(void) /* sub_5CC084 */
{
    FN_ENTER(0x005cc084);
    /* 005cc084: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005cc085: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005cc086: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005cc087: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005cc08a: mov edi, ecx */ r_edi = r_ecx;
    /* 005cc08c: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 005cc08f: mov ebx, dword ptr [edi + 0x20] */ r_ebx = R32((u32)(r_edi+0x20u));
    /* 005cc092: mov edx, dword ptr [edi + 0x24] */ r_edx = R32((u32)(r_edi+0x24u));
    /* 005cc095: mov eax, dword ptr [edi + 0x80] */ r_eax = R32((u32)(r_edi+0x80u));
    /* 005cc09b: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 005cc09d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cc09f: je 0x5cc0d8 */ if (fZ) goto L_005cc0d8;
L_005cc0a1:; BB(0x005cc0a1);
    /* 005cc0a1: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 005cc0a5: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 005cc0a9: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 005cc0ac: lea ebx, [edi + 0x84] */ r_ebx = (u32)(r_edi+0x84u);
L_005cc0b2:; BB(0x005cc0b2);
    /* 005cc0b2: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005cc0b5: push 0x9c */ { u32 v = 0x9cu; r_esp -= 4; W32(r_esp, v); }
    /* 005cc0ba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cc0bb: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5cc0c0u); f_0050b510();
    /* 005cc0c0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cc0c3: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 005cc0c6: mov edx, ebx */ r_edx = r_ebx;
    /* 005cc0c8: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x5cc0cdu); f_0082f9c4();
    /* 005cc0cd: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005cc0d0: cmp esi, dword ptr [edi + 0x80] */ {  u32 a = r_esi; u32 b = R32((u32)(r_edi+0x80u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cc0d6: jne 0x5cc0b2 */ if (!fZ) goto L_005cc0b2;
L_005cc0d8:; BB(0x005cc0d8);
    /* 005cc0d8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005cc0db: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005cc0dc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005cc0dd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005cc0de: ret  */ FN_RET(0x005cc084); r_esp += 4; return;
}

void f_005cc0e0(void) /* sub_5CC0E0 */
{
    FN_ENTER(0x005cc0e0);
    /* 005cc0e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cc0e1: mov ebp, esp */ r_ebp = r_esp;
    /* 005cc0e3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005cc0e5: push 0x8d9be8 */ { u32 v = 0x8d9be8u; r_esp -= 4; W32(r_esp, v); }
    /* 005cc0ea: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005cc0f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cc0f1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005cc0f8: sub esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005cc0fb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005cc0fe: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005cc101: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005cc104: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005cc107: fld dword ptr [ebp + 0x14] */ FPUSH(R_F32((u32)(r_ebp+0x14u)));
    /* 005cc10a: fcomp dword ptr [0x92be28] */ fx_compare(ST(0), R_F32((u32)(0x92be28u))); FPOP();
    /* 005cc110: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005cc112: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005cc113: je 0x5cc2b8 */ if (fZ) goto L_005cc2b8;
L_005cc119:; BB(0x005cc119);
    /* 005cc119: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005cc11c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cc11e: je 0x5cc2b8 */ if (fZ) goto L_005cc2b8;
L_005cc124:; BB(0x005cc124);
    /* 005cc124: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
    /* 005cc12b: push 0x90 */ { u32 v = 0x90u; r_esp -= 4; W32(r_esp, v); }
    /* 005cc130: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5cc135u); f_005caba4();
    /* 005cc135: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005cc138: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cc13b: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 005cc13e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cc140: je 0x5cc2b1 */ if (fZ) goto L_005cc2b1;
L_005cc146:; BB(0x005cc146);
    /* 005cc146: mov dword ptr [ebp - 0x64], 1 */ W32((u32)(r_ebp+0xffffff9cu), 0x1u);
    /* 005cc14d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005cc154: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 005cc157: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 005cc15a: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005cc15d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005cc160: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005cc163: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cc164: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005cc165: call 0x5e4158 */ r_esp -= 4; W32(r_esp, 0x5cc16au); f_005e4158();
    /* 005cc16a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005cc16d: mov dword ptr [edx], 0xb0c588 */ W32((u32)(r_edx), 0xb0c588u);
    /* 005cc173: mov eax, dword ptr [0x9c2614] */ r_eax = R32((u32)(0x9c2614u));
    /* 005cc178: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 005cc17b: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x5cc180u); f_0082d7b0();
    /* 005cc180: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
    /* 005cc187: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005cc189: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
    /* 005cc190: mov dword ptr [ebp - 0x5c], 0 */ W32((u32)(r_ebp+0xffffffa4u), 0x0u);
    /* 005cc197: call 0x83c670 */ r_esp -= 4; W32(r_esp, 0x5cc19cu); f_0083c670();
    /* 005cc19c: lea edx, [ebp - 0x5c] */ r_edx = (u32)(r_ebp+0xffffffa4u);
    /* 005cc19f: lea eax, [ebp - 0x50] */ r_eax = (u32)(r_ebp+0xffffffb0u);
    /* 005cc1a2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cc1a3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005cc1a4: call 0x835c3c */ r_esp -= 4; W32(r_esp, 0x5cc1a9u); f_00835c3c();
    /* 005cc1a9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cc1ac: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
    /* 005cc1af: lea ecx, [ebp - 0x44] */ r_ecx = (u32)(r_ebp+0xffffffbcu);
    /* 005cc1b2: lea edx, [ebp - 0x50] */ r_edx = (u32)(r_ebp+0xffffffb0u);
    /* 005cc1b5: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 005cc1b7: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 005cc1ba: mov ebx, dword ptr [esi + 4] */ r_ebx = R32((u32)(r_esi+0x4u));
    /* 005cc1bd: mov dword ptr [ebp - 0x40], ebx */ W32((u32)(r_ebp+0xffffffc0u), r_ebx);
    /* 005cc1c0: mov edi, dword ptr [esi + 8] */ r_edi = R32((u32)(r_esi+0x8u));
    /* 005cc1c3: mov dword ptr [ebp - 0x3c], edi */ W32((u32)(r_ebp+0xffffffc4u), r_edi);
    /* 005cc1c6: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x5cc1cbu); f_0082f9c4();
    /* 005cc1cb: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x5cc1d0u); f_0082da80();
    /* 005cc1d0: fld dword ptr [ebp - 0x44] */ FPUSH(R_F32((u32)(r_ebp+0xffffffbcu)));
    /* 005cc1d3: fld dword ptr [ebp - 0x3c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffc4u)));
    /* 005cc1d6: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 005cc1d8: fmul qword ptr [0x92be08] */ ST(0) = ST(0) * R_F64((u32)(0x92be08u));
    /* 005cc1de: fdiv qword ptr [0x92be00] */ ST(0) = ST(0) / R_F64((u32)(0x92be00u));
    /* 005cc1e4: fnstcw word ptr [ebp - 0x38] */ W16((u32)(r_ebp+0xffffffc8u), fcw);
    /* 005cc1e7: movzx eax, word ptr [ebp - 0x38] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc8u));
    /* 005cc1eb: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005cc1f0: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 005cc1f3: fldcw word ptr [ebp - 0x30] */ fcw = R16((u32)(r_ebp+0xffffffd0u));
    /* 005cc1f6: fistp dword ptr [ebp - 0x28] */ W32((u32)(r_ebp+0xffffffd8u), (u32)fx_int32(ST(0))); FPOP();
    /* 005cc1f9: fldcw word ptr [ebp - 0x38] */ fcw = R16((u32)(r_ebp+0xffffffc8u));
    /* 005cc1fc: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005cc1ff: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 005cc202: sub ecx, dword ptr [ebp - 0x28] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffd8u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005cc205: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x5cc20au); f_0082dcbc();
    /* 005cc20a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005cc20d: fld dword ptr [edx + 0x38] */ FPUSH(R_F32((u32)(r_edx+0x38u)));
    /* 005cc210: fld dword ptr [edx + 0x3c] */ FPUSH(R_F32((u32)(r_edx+0x3cu)));
    /* 005cc213: fld dword ptr [edx + 0x40] */ FPUSH(R_F32((u32)(r_edx+0x40u)));
    /* 005cc216: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 005cc218: fabs  */ ST(0) = fabsl(ST(0));
    /* 005cc21a: fmul dword ptr [0x92be20] */ ST(0) = ST(0) * R_F32((u32)(0x92be20u));
    /* 005cc220: fadd dword ptr [0x92be24] */ ST(0) = ST(0) + R_F32((u32)(0x92be24u));
    /* 005cc226: fdiv st(2), st(0) */ ST(2) = ST(2) / ST(0);
    /* 005cc228: fdiv st(1), st(0) */ ST(1) = ST(1) / ST(0);
    /* 005cc22a: fdiv st(3), st(0) */ ST(3) = ST(3) / ST(0);
    /* 005cc22c: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 005cc22e: fstp dword ptr [edx + 0x84] */ W_F32((u32)(r_edx+0x84u), ST(0)); FPOP();
    /* 005cc234: fstp dword ptr [edx + 0x88] */ W_F32((u32)(r_edx+0x88u), ST(0)); FPOP();
    /* 005cc23a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005cc23c: fstp dword ptr [edx + 0x8c] */ W_F32((u32)(r_edx+0x8cu), ST(0)); FPOP();
    /* 005cc242: fnstcw word ptr [ebp - 0x38] */ W16((u32)(r_ebp+0xffffffc8u), fcw);
    /* 005cc245: movzx eax, word ptr [ebp - 0x38] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc8u));
    /* 005cc249: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005cc24e: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 005cc251: fldcw word ptr [ebp - 0x30] */ fcw = R16((u32)(r_ebp+0xffffffd0u));
    /* 005cc254: fistp dword ptr [ebp - 0x28] */ W32((u32)(r_ebp+0xffffffd8u), (u32)fx_int32(ST(0))); FPOP();
    /* 005cc257: fldcw word ptr [ebp - 0x38] */ fcw = R16((u32)(r_ebp+0xffffffc8u));
    /* 005cc25a: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005cc25d: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 005cc260: mov dword ptr [edx + 0x80], eax */ W32((u32)(r_edx+0x80u), r_eax);
    /* 005cc266: mov eax, 0 */ r_eax = 0x0u;
    /* 005cc26b: je 0x5cc283 */ if (fZ) goto L_005cc283;
L_005cc26d:; BB(0x005cc26d);
    /* 005cc26d: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005cc270: mov dword ptr [edx + eax*4 + 0x58], 0 */ W32((u32)(r_edx+r_eax*4+0x58u), 0x0u);
    /* 005cc278: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005cc27b: cmp eax, dword ptr [edx + 0x80] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x80u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cc281: jne 0x5cc26d */ if (!fZ) goto L_005cc26d;
L_005cc283:; BB(0x005cc283);
    /* 005cc283: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 005cc287: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
    /* 005cc28e: or eax, 0xffff0010 */ {  u32 a = r_eax; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005cc293: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_005cc297:; BB(0x005cc297);
    /* 005cc297: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005cc29a: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cc29d: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 005cc2a0: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005cc2a3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cc2a6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005cc2ad: mov esp, ebp */ r_esp = r_ebp;
    /* 005cc2af: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cc2b0: ret  */ FN_RET(0x005cc0e0); r_esp += 4; return;
L_005cc2b1:; BB(0x005cc2b1);
    /* 005cc2b1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005cc2b3: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005cc2b6: jmp 0x5cc297 */ goto L_005cc297;
L_005cc2b8:; BB(0x005cc2b8);
    /* 005cc2b8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005cc2ba: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cc2bd: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005cc2c4: mov esp, ebp */ r_esp = r_ebp;
    /* 005cc2c6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cc2c7: ret  */ FN_RET(0x005cc0e0); r_esp += 4; return;
}

void f_005cc2c8(void) /* sub_5CC2C8 */
{
    FN_ENTER(0x005cc2c8);
    /* 005cc2c8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005cc2c9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005cc2cb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005cc2cd: call 0x5cc2ec */ r_esp -= 4; W32(r_esp, 0x5cc2d2u); f_005cc2ec();
    /* 005cc2d2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005cc2d6: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005cc2d8: jne 0x5cc2de */ if (!fZ) goto L_005cc2de;
L_005cc2da:; BB(0x005cc2da);
    /* 005cc2da: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005cc2db: ret 4 */ FN_RET(0x005cc2c8); r_esp += 8; return;
L_005cc2de:; BB(0x005cc2de);
    /* 005cc2de: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005cc2df: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5cc2e4u); f_005c2f74();
    /* 005cc2e4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005cc2e5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005cc2e6: ret 4 */ FN_RET(0x005cc2c8); r_esp += 8; return;
}

void f_005cc2ec(void) /* sub_5CC2EC */
{
    FN_ENTER(0x005cc2ec);
    /* 005cc2ec: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cc2ed: mov ebp, esp */ r_ebp = r_esp;
    /* 005cc2ef: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005cc2f1: push 0x8d9c04 */ { u32 v = 0x8d9c04u; r_esp -= 4; W32(r_esp, v); }
    /* 005cc2f6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005cc2fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cc2fd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005cc304: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005cc307: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005cc30a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005cc30d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005cc310: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005cc313: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005cc316: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005cc31d: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cc320: push dword ptr [eax + 0x20] */ { u32 v = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 005cc323: mov dword ptr [eax], 0xb0c688 */ W32((u32)(r_eax), 0xb0c688u);
    /* 005cc329: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x5cc32eu); f_005cdcc0();
    /* 005cc32e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005cc32f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005cc336: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cc339: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x5cc33eu); f_008171e8();
    /* 005cc33e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cc341: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005cc348: mov esp, ebp */ r_esp = r_ebp;
    /* 005cc34a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cc34b: ret  */ FN_RET(0x005cc2ec); r_esp += 4; return;
}

void f_005cc34c(void) /* sub_5CC34C */
{
    FN_ENTER(0x005cc34c);
    /* 005cc34c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005cc34d: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005cc350: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005cc352: mov ecx, dword ptr [ebx + 0x24] */ r_ecx = R32((u32)(r_ebx+0x24u));
    /* 005cc355: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x5cc35au); f_008173b4();
    /* 005cc35a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cc35c: je 0x5cc36d */ if (fZ) goto L_005cc36d;
L_005cc35e:; BB(0x005cc35e);
    /* 005cc35e: mov ecx, dword ptr [ebx + 0x24] */ r_ecx = R32((u32)(r_ebx+0x24u));
    /* 005cc361: movsx eax, byte ptr [ecx + 0xf1] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ecx+0xf1u));
    /* 005cc368: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cc36b: je 0x5cc37f */ if (fZ) goto L_005cc37f;
L_005cc36d:; BB(0x005cc36d);
    /* 005cc36d: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 005cc371: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005cc376: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
    /* 005cc37a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005cc37d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005cc37e: ret  */ FN_RET(0x005cc34c); r_esp += 4; return;
L_005cc37f:; BB(0x005cc37f);
    /* 005cc37f: mov eax, dword ptr [ecx + 0x1dc] */ r_eax = R32((u32)(r_ecx+0x1dcu));
    /* 005cc385: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005cc387: je 0x5cc36d */ if (fZ) goto L_005cc36d;
L_005cc389:; BB(0x005cc389);
    /* 005cc389: mov eax, dword ptr [ebx + 0x20] */ r_eax = R32((u32)(r_ebx+0x20u));
    /* 005cc38c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cc38e: je 0x5cc36d */ if (fZ) goto L_005cc36d;
L_005cc390:; BB(0x005cc390);
    /* 005cc390: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005cc393: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cc394: push dword ptr [ebx + 0x1c] */ { u32 v = R32((u32)(r_ebx+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005cc397: call 0x5e83c8 */ r_esp -= 4; W32(r_esp, 0x5cc39cu); f_005e83c8();
    /* 005cc39c: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005cc39f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cc3a0: mov ecx, dword ptr [ebx + 0x20] */ r_ecx = R32((u32)(r_ebx+0x20u));
    /* 005cc3a3: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x5cc3a8u); f_00508db8();
    /* 005cc3a8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005cc3ab: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005cc3ac: ret  */ FN_RET(0x005cc34c); r_esp += 4; return;
}

void f_005cc3b0(void) /* sub_5CC3B0 */
{
    FN_ENTER(0x005cc3b0);
    /* 005cc3b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cc3b1: mov ebp, esp */ r_ebp = r_esp;
    /* 005cc3b3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005cc3b5: push 0x8d9c64 */ { u32 v = 0x8d9c64u; r_esp -= 4; W32(r_esp, v); }
    /* 005cc3ba: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005cc3c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cc3c1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005cc3c8: sub esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005cc3cb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005cc3ce: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005cc3d1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005cc3d4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005cc3d7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005cc3da: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005cc3dc: je 0x5cc53c */ if (fZ) goto L_005cc53c;
L_005cc3e2:; BB(0x005cc3e2);
    /* 005cc3e2: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005cc3e5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005cc3e7: je 0x5cc53c */ if (fZ) goto L_005cc53c;
L_005cc3ed:; BB(0x005cc3ed);
    /* 005cc3ed: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005cc3f0: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x5cc3f5u); f_008173b4();
    /* 005cc3f5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005cc3f7: je 0x5cc53c */ if (fZ) goto L_005cc53c;
L_005cc3fd:; BB(0x005cc3fd);
    /* 005cc3fd: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
    /* 005cc404: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 005cc406: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5cc40bu); f_005caba4();
    /* 005cc40b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005cc40c: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 005cc40f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cc411: je 0x5cc499 */ if (fZ) goto L_005cc499;
L_005cc417:; BB(0x005cc417);
    /* 005cc417: mov dword ptr [ebp - 0x40], 1 */ W32((u32)(r_ebp+0xffffffc0u), 0x1u);
    /* 005cc41e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005cc425: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005cc428: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005cc42b: mov dword ptr [ebp - 0x6c], ecx */ W32((u32)(r_ebp+0xffffff94u), r_ecx);
    /* 005cc42e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cc42f: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x5cc434u); f_008193cc();
    /* 005cc434: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005cc43b: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 005cc43e: mov esi, dword ptr [ebp + 0x10] */ r_esi = R32((u32)(r_ebp+0x10u));
    /* 005cc441: mov dword ptr [eax], 0xb0c688 */ W32((u32)(r_eax), 0xb0c688u);
    /* 005cc447: mov ebx, dword ptr [ebp - 0x6c] */ r_ebx = R32((u32)(r_ebp+0xffffff94u));
    /* 005cc44a: mov edx, dword ptr [0x9c2618] */ r_edx = R32((u32)(0x9c2618u));
    /* 005cc450: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005cc453: lea ecx, [ebp - 0x38] */ r_ecx = (u32)(r_ebp+0xffffffc8u);
    /* 005cc456: mov dword ptr [ebx + 4], edx */ W32((u32)(r_ebx+0x4u), r_edx);
    /* 005cc459: mov edi, dword ptr [ebp - 0x6c] */ r_edi = R32((u32)(r_ebp+0xffffff94u));
    /* 005cc45c: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005cc45f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cc460: mov dword ptr [edi + 0x24], edx */ W32((u32)(r_edi+0x24u), r_edx);
    /* 005cc463: mov dword ptr [edi + 0x1c], esi */ W32((u32)(r_edi+0x1cu), r_esi);
    /* 005cc466: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cc467: mov ecx, edx */ r_ecx = r_edx;
    /* 005cc469: call 0x5e83c8 */ r_esp -= 4; W32(r_esp, 0x5cc46eu); f_005e83c8();
    /* 005cc46e: lea eax, [ebp - 0x38] */ r_eax = (u32)(r_ebp+0xffffffc8u);
    /* 005cc471: push 0x1bd */ { u32 v = 0x1bdu; r_esp -= 4; W32(r_esp, v); }
    /* 005cc476: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cc477: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x5cc47cu); f_00509590();
    /* 005cc47c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cc47f: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 005cc482: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
    /* 005cc489: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 005cc48c: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 005cc490: or eax, 0xffff0010 */ {  u32 a = r_eax; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005cc495: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_005cc499:; BB(0x005cc499);
    /* 005cc499: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005cc4a0: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 005cc4a7: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 005cc4a9: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5cc4aeu); f_005caba4();
    /* 005cc4ae: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005cc4af: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 005cc4b2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005cc4b4: je 0x5cc53c */ if (fZ) goto L_005cc53c;
L_005cc4ba:; BB(0x005cc4ba);
    /* 005cc4ba: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 005cc4c1: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 005cc4c8: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005cc4cb: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005cc4ce: mov dword ptr [ebp - 0x54], ecx */ W32((u32)(r_ebp+0xffffffacu), r_ecx);
    /* 005cc4d1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cc4d2: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x5cc4d7u); f_008193cc();
    /* 005cc4d7: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 005cc4de: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 005cc4e1: mov esi, dword ptr [ebp + 0x14] */ r_esi = R32((u32)(r_ebp+0x14u));
    /* 005cc4e4: mov dword ptr [eax], 0xb0c688 */ W32((u32)(r_eax), 0xb0c688u);
    /* 005cc4ea: mov ebx, dword ptr [ebp - 0x54] */ r_ebx = R32((u32)(r_ebp+0xffffffacu));
    /* 005cc4ed: mov edx, dword ptr [0x9c2618] */ r_edx = R32((u32)(0x9c2618u));
    /* 005cc4f3: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 005cc4f6: lea ecx, [ebp - 0x28] */ r_ecx = (u32)(r_ebp+0xffffffd8u);
    /* 005cc4f9: mov dword ptr [ebx + 4], edx */ W32((u32)(r_ebx+0x4u), r_edx);
    /* 005cc4fc: mov edi, dword ptr [ebp - 0x54] */ r_edi = R32((u32)(r_ebp+0xffffffacu));
    /* 005cc4ff: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005cc502: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cc503: mov dword ptr [edi + 0x24], edx */ W32((u32)(r_edi+0x24u), r_edx);
    /* 005cc506: mov dword ptr [edi + 0x1c], esi */ W32((u32)(r_edi+0x1cu), r_esi);
    /* 005cc509: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cc50a: mov ecx, edx */ r_ecx = r_edx;
    /* 005cc50c: call 0x5e83c8 */ r_esp -= 4; W32(r_esp, 0x5cc511u); f_005e83c8();
    /* 005cc511: lea eax, [ebp - 0x28] */ r_eax = (u32)(r_ebp+0xffffffd8u);
    /* 005cc514: push 0x1bd */ { u32 v = 0x1bdu; r_esp -= 4; W32(r_esp, v); }
    /* 005cc519: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cc51a: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x5cc51fu); f_00509590();
    /* 005cc51f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cc522: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 005cc525: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 005cc52c: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 005cc52f: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 005cc533: or eax, 0xffff0010 */ {  u32 a = r_eax; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005cc538: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_005cc53c:; BB(0x005cc53c);
    /* 005cc53c: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 005cc53f: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 005cc542: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 005cc545: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cc548: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005cc54f: mov esp, ebp */ r_esp = r_ebp;
    /* 005cc551: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cc552: ret  */ FN_RET(0x005cc3b0); r_esp += 4; return;
}

void f_005cc554(void) /* sub_5CC554 */
{
    FN_ENTER(0x005cc554);
    /* 005cc554: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cc555: mov ebp, esp */ r_ebp = r_esp;
    /* 005cc557: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005cc559: push 0x8d9c9a */ { u32 v = 0x8d9c9au; r_esp -= 4; W32(r_esp, v); }
    /* 005cc55e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005cc564: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cc565: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005cc56c: sub esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005cc56f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005cc572: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005cc575: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005cc578: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005cc57b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005cc57e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005cc580: je 0x5cc633 */ if (fZ) goto L_005cc633;
L_005cc586:; BB(0x005cc586);
    /* 005cc586: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005cc589: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005cc58b: je 0x5cc633 */ if (fZ) goto L_005cc633;
L_005cc591:; BB(0x005cc591);
    /* 005cc591: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005cc594: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x5cc599u); f_008173b4();
    /* 005cc599: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005cc59b: je 0x5cc633 */ if (fZ) goto L_005cc633;
L_005cc5a1:; BB(0x005cc5a1);
    /* 005cc5a1: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 005cc5a8: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 005cc5aa: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5cc5afu); f_005caba4();
    /* 005cc5af: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005cc5b2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cc5b5: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 005cc5b8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005cc5ba: je 0x5cc633 */ if (fZ) goto L_005cc633;
L_005cc5bc:; BB(0x005cc5bc);
    /* 005cc5bc: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 005cc5c3: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005cc5ca: mov ecx, eax */ r_ecx = r_eax;
    /* 005cc5cc: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005cc5cf: mov dword ptr [ebp - 0x48], ecx */ W32((u32)(r_ebp+0xffffffb8u), r_ecx);
    /* 005cc5d2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cc5d3: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x5cc5d8u); f_008193cc();
    /* 005cc5d8: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005cc5df: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 005cc5e2: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005cc5e5: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005cc5e8: mov edi, dword ptr [ebp + 0x10] */ r_edi = R32((u32)(r_ebp+0x10u));
    /* 005cc5eb: mov dword ptr [ebx + 0x24], ecx */ W32((u32)(r_ebx+0x24u), r_ecx);
    /* 005cc5ee: mov dword ptr [ebx + 0x1c], edx */ W32((u32)(r_ebx+0x1cu), r_edx);
    /* 005cc5f1: mov dword ptr [ebx], 0xb0c688 */ W32((u32)(r_ebx), 0xb0c688u);
    /* 005cc5f7: mov eax, dword ptr [0x9c2618] */ r_eax = R32((u32)(0x9c2618u));
    /* 005cc5fc: mov dword ptr [ebx + 4], eax */ W32((u32)(r_ebx+0x4u), r_eax);
    /* 005cc5ff: lea esi, [ebp - 0x2c] */ r_esi = (u32)(r_ebp+0xffffffd4u);
    /* 005cc602: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005cc603: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005cc604: call 0x5e83c8 */ r_esp -= 4; W32(r_esp, 0x5cc609u); f_005e83c8();
    /* 005cc609: lea eax, [ebp - 0x2c] */ r_eax = (u32)(r_ebp+0xffffffd4u);
    /* 005cc60c: push 0x1bd */ { u32 v = 0x1bdu; r_esp -= 4; W32(r_esp, v); }
    /* 005cc611: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cc612: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x5cc617u); f_00509590();
    /* 005cc617: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cc61a: mov edx, ebx */ r_edx = r_ebx;
    /* 005cc61c: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 005cc623: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 005cc626: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 005cc62a: or eax, 0xffff0010 */ {  u32 a = r_eax; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005cc62f: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_005cc633:; BB(0x005cc633);
    /* 005cc633: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cc636: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 005cc639: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005cc63c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cc63f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005cc646: mov esp, ebp */ r_esp = r_ebp;
    /* 005cc648: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cc649: ret  */ FN_RET(0x005cc554); r_esp += 4; return;
}

void f_005cc64c(void) /* sub_5CC64C */
{
    FN_ENTER(0x005cc64c);
    /* 005cc64c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cc64d: mov ebp, esp */ r_ebp = r_esp;
    /* 005cc64f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005cc651: push 0x8d9cc0 */ { u32 v = 0x8d9cc0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cc656: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005cc65c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cc65d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005cc664: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005cc667: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005cc66a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005cc66d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005cc670: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005cc673: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005cc676: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005cc678: je 0x5cc6ce */ if (fZ) goto L_005cc6ce;
L_005cc67a:; BB(0x005cc67a);
    /* 005cc67a: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005cc67d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005cc67f: je 0x5cc6ce */ if (fZ) goto L_005cc6ce;
L_005cc681:; BB(0x005cc681);
    /* 005cc681: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005cc684: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x5cc689u); f_008173b4();
    /* 005cc689: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005cc68b: je 0x5cc6ce */ if (fZ) goto L_005cc6ce;
L_005cc68d:; BB(0x005cc68d);
    /* 005cc68d: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005cc694: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 005cc696: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5cc69bu); f_005caba4();
    /* 005cc69b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005cc69c: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005cc69f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005cc6a1: je 0x5cc6ce */ if (fZ) goto L_005cc6ce;
L_005cc6a3:; BB(0x005cc6a3);
    /* 005cc6a3: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005cc6aa: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005cc6b1: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 005cc6b4: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 005cc6b7: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005cc6ba: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005cc6bd: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cc6c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cc6c1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005cc6c2: call 0x5cc6dc */ r_esp -= 4; W32(r_esp, 0x5cc6c7u); f_005cc6dc();
    /* 005cc6c7: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005cc6ce:; BB(0x005cc6ce);
    /* 005cc6ce: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cc6d1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005cc6d8: mov esp, ebp */ r_esp = r_ebp;
    /* 005cc6da: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cc6db: ret  */ FN_RET(0x005cc64c); r_esp += 4; return;
}

void f_005cc6dc(void) /* sub_5CC6DC */
{
    FN_ENTER(0x005cc6dc);
    /* 005cc6dc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cc6dd: mov ebp, esp */ r_ebp = r_esp;
    /* 005cc6df: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005cc6e1: push 0x8d9cdc */ { u32 v = 0x8d9cdcu; r_esp -= 4; W32(r_esp, v); }
    /* 005cc6e6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005cc6ec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cc6ed: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005cc6f4: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005cc6f7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005cc6fa: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 005cc6fd: mov dword ptr [ebp - 0x24], esi */ W32((u32)(r_ebp+0xffffffdcu), r_esi);
    /* 005cc700: mov dword ptr [ebp - 0x20], ebx */ W32((u32)(r_ebp+0xffffffe0u), r_ebx);
    /* 005cc703: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005cc706: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005cc709: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005cc70c: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 005cc70f: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005cc712: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 005cc715: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 005cc718: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005cc71b: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x5cc720u); f_008193cc();
    /* 005cc720: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005cc727: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005cc72a: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005cc72d: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 005cc730: lea ebx, [ebp - 0x38] */ r_ebx = (u32)(r_ebp+0xffffffc8u);
    /* 005cc733: mov dword ptr [edx + 0x24], ecx */ W32((u32)(r_edx+0x24u), r_ecx);
    /* 005cc736: mov dword ptr [edx + 0x1c], esi */ W32((u32)(r_edx+0x1cu), r_esi);
    /* 005cc739: mov dword ptr [edx], 0xb0c688 */ W32((u32)(r_edx), 0xb0c688u);
    /* 005cc73f: mov eax, dword ptr [0x9c2618] */ r_eax = R32((u32)(0x9c2618u));
    /* 005cc744: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 005cc747: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005cc748: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005cc749: call 0x5e83c8 */ r_esp -= 4; W32(r_esp, 0x5cc74eu); f_005e83c8();
    /* 005cc74e: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005cc751: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cc754: je 0x5cc76b */ if (fZ) goto L_005cc76b;
L_005cc756:; BB(0x005cc756);
    /* 005cc756: lea edx, [ebp - 0x38] */ r_edx = (u32)(r_ebp+0xffffffc8u);
    /* 005cc759: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cc75a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005cc75b: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x5cc760u); f_00509590();
    /* 005cc760: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cc763: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005cc766: mov dword ptr [ecx + 0x20], eax */ W32((u32)(r_ecx+0x20u), r_eax);
    /* 005cc769: jmp 0x5cc775 */ goto L_005cc775;
L_005cc76b:; BB(0x005cc76b);
    /* 005cc76b: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005cc76e: mov dword ptr [ecx + 0x20], 0 */ W32((u32)(r_ecx+0x20u), 0x0u);
L_005cc775:; BB(0x005cc775);
    /* 005cc775: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 005cc778: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cc77b: movzx edx, word ptr [ecx + 8] */ r_edx = (u32)R16((u32)(r_ecx+0x8u));
    /* 005cc77f: or edx, 0xffff0010 */ {  u32 a = r_edx; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005cc785: mov word ptr [ecx + 8], dx */ W16((u32)(r_ecx+0x8u), (u16)r_edx);
    /* 005cc789: mov eax, ecx */ r_eax = r_ecx;
    /* 005cc78b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cc78e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005cc795: mov esp, ebp */ r_esp = r_ebp;
    /* 005cc797: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cc798: ret 0x10 */ FN_RET(0x005cc6dc); r_esp += 20; return;
}

void f_005cc79c(void) /* sub_5CC79C */
{
    FN_ENTER(0x005cc79c);
    /* 005cc79c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005cc79d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005cc79f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005cc7a1: call 0x5cc81c */ r_esp -= 4; W32(r_esp, 0x5cc7a6u); f_005cc81c();
    /* 005cc7a6: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005cc7aa: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005cc7ac: jne 0x5cc7b2 */ if (!fZ) goto L_005cc7b2;
L_005cc7ae:; BB(0x005cc7ae);
    /* 005cc7ae: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005cc7af: ret 4 */ FN_RET(0x005cc79c); r_esp += 8; return;
L_005cc7b2:; BB(0x005cc7b2);
    /* 005cc7b2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005cc7b3: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5cc7b8u); f_005c2f74();
    /* 005cc7b8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005cc7b9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005cc7ba: ret 4 */ FN_RET(0x005cc79c); r_esp += 8; return;
}

void f_005cc7c0(void) /* sub_5CC7C0 */
{
    FN_ENTER(0x005cc7c0);
    /* 005cc7c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cc7c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005cc7c3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005cc7c5: push 0x8d9cf8 */ { u32 v = 0x8d9cf8u; r_esp -= 4; W32(r_esp, v); }
    /* 005cc7ca: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005cc7d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cc7d1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005cc7d8: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005cc7db: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005cc7de: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005cc7e1: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005cc7e4: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005cc7e7: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005cc7ea: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005cc7ed: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005cc7f4: call 0x5cc81c */ r_esp -= 4; W32(r_esp, 0x5cc7f9u); f_005cc81c();
    /* 005cc7f9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005cc7fc: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005cc7fe: jne 0x5cc810 */ if (!fZ) goto L_005cc810;
L_005cc800:; BB(0x005cc800);
    /* 005cc800: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cc803: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005cc80a: mov esp, ebp */ r_esp = r_ebp;
    /* 005cc80c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cc80d: ret 4 */ FN_RET(0x005cc7c0); r_esp += 8; return;
L_005cc810:; BB(0x005cc810);
    /* 005cc810: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005cc813: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cc814: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5cc819u); f_005c2f74();
    /* 005cc819: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005cc81a: jmp 0x5cc800 */ goto L_005cc800;
}

void f_005cc81c(void) /* sub_5CC81C */
{
    FN_ENTER(0x005cc81c);
    /* 005cc81c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cc81d: mov ebp, esp */ r_ebp = r_esp;
    /* 005cc81f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005cc821: push 0x8d9d14 */ { u32 v = 0x8d9d14u; r_esp -= 4; W32(r_esp, v); }
    /* 005cc826: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005cc82c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cc82d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005cc834: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005cc837: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005cc83a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005cc83d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005cc840: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005cc843: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005cc846: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cc849: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 005cc84c: mov dword ptr [ecx], 0xb0c8a8 */ W32((u32)(r_ecx), 0xb0c8a8u);
    /* 005cc852: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cc854: je 0x5cc86d */ if (fZ) goto L_005cc86d;
L_005cc856:; BB(0x005cc856);
    /* 005cc856: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cc859: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 005cc85d: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005cc862: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 005cc866: mov dword ptr [ecx + 0x1c], 0 */ W32((u32)(r_ecx+0x1cu), 0x0u);
L_005cc86d:; BB(0x005cc86d);
    /* 005cc86d: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 005cc870: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cc872: je 0x5cc88b */ if (fZ) goto L_005cc88b;
L_005cc874:; BB(0x005cc874);
    /* 005cc874: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cc877: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 005cc87b: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005cc880: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 005cc884: mov dword ptr [ecx + 0x20], 0 */ W32((u32)(r_ecx+0x20u), 0x0u);
L_005cc88b:; BB(0x005cc88b);
    /* 005cc88b: mov edx, dword ptr [ecx + 0x24] */ r_edx = R32((u32)(r_ecx+0x24u));
    /* 005cc88e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cc890: je 0x5cc8a9 */ if (fZ) goto L_005cc8a9;
L_005cc892:; BB(0x005cc892);
    /* 005cc892: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cc895: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 005cc899: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005cc89e: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 005cc8a2: mov dword ptr [ecx + 0x24], 0 */ W32((u32)(r_ecx+0x24u), 0x0u);
L_005cc8a9:; BB(0x005cc8a9);
    /* 005cc8a9: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005cc8b0: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x5cc8b5u); f_008171e8();
    /* 005cc8b5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cc8b8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005cc8bf: mov esp, ebp */ r_esp = r_ebp;
    /* 005cc8c1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cc8c2: ret  */ FN_RET(0x005cc81c); r_esp += 4; return;
}

void f_005cc8c4(void) /* sub_5CC8C4 */
{
    FN_ENTER(0x005cc8c4);
    /* 005cc8c4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005cc8c5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005cc8c6: mov edi, ecx */ r_edi = r_ecx;
    /* 005cc8c8: push 0x104 */ { u32 v = 0x104u; r_esp -= 4; W32(r_esp, v); }
    /* 005cc8cd: push 0x1b9 */ { u32 v = 0x1b9u; r_esp -= 4; W32(r_esp, v); }
    /* 005cc8d2: lea esi, [edi + 0x64] */ r_esi = (u32)(r_edi+0x64u);
    /* 005cc8d5: lea eax, [edi + 0x54] */ r_eax = (u32)(r_edi+0x54u);
    /* 005cc8d8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cc8d9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005cc8da: call 0x509dc4 */ r_esp -= 4; W32(r_esp, 0x5cc8dfu); f_00509dc4();
    /* 005cc8df: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cc8e2: mov dword ptr [edi + 0x1c], eax */ W32((u32)(r_edi+0x1cu), r_eax);
    /* 005cc8e5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cc8e7: je 0x5cc907 */ if (fZ) goto L_005cc907;
L_005cc8e9:; BB(0x005cc8e9);
    /* 005cc8e9: mov dword ptr [eax + 0x44], 0x3fc00000 */ W32((u32)(r_eax+0x44u), 0x3fc00000u);
    /* 005cc8f0: mov dword ptr [eax + 0x48], 0x3fc00000 */ W32((u32)(r_eax+0x48u), 0x3fc00000u);
    /* 005cc8f7: mov eax, dword ptr [edi + 0x50] */ r_eax = R32((u32)(r_edi+0x50u));
    /* 005cc8fa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cc8fc: je 0x5cc907 */ if (fZ) goto L_005cc907;
L_005cc8fe:; BB(0x005cc8fe);
    /* 005cc8fe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cc8ff: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 005cc902: call 0x508ee4 */ r_esp -= 4; W32(r_esp, 0x5cc907u); f_00508ee4();
L_005cc907:; BB(0x005cc907);
    /* 005cc907: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 005cc909: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005cc90a: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5cc90fu); f_0050b510();
    /* 005cc90f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005cc912: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005cc913: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005cc914: ret  */ FN_RET(0x005cc8c4); r_esp += 4; return;
}

void f_005cc918(void) /* sub_5CC918 */
{
    FN_ENTER(0x005cc918);
    /* 005cc918: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005cc919: mov edi, ecx */ r_edi = r_ecx;
    /* 005cc91b: lea eax, [edi + 0x64] */ r_eax = (u32)(r_edi+0x64u);
    /* 005cc91e: push 0x1b6 */ { u32 v = 0x1b6u; r_esp -= 4; W32(r_esp, v); }
    /* 005cc923: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cc924: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x5cc929u); f_00509590();
    /* 005cc929: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cc92c: mov dword ptr [edi + 0x24], eax */ W32((u32)(r_edi+0x24u), r_eax);
    /* 005cc92f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005cc931: je 0x5cc93c */ if (fZ) goto L_005cc93c;
L_005cc933:; BB(0x005cc933);
    /* 005cc933: push -0x78 */ { u32 v = 0xffffff88u; r_esp -= 4; W32(r_esp, v); }
    /* 005cc935: mov ecx, eax */ r_ecx = r_eax;
    /* 005cc937: call 0x508ee4 */ r_esp -= 4; W32(r_esp, 0x5cc93cu); f_00508ee4();
L_005cc93c:; BB(0x005cc93c);
    /* 005cc93c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005cc93d: ret  */ FN_RET(0x005cc918); r_esp += 4; return;
}

void f_005cc940(void) /* sub_5CC940 */
{
    FN_ENTER(0x005cc940);
    /* 005cc940: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005cc941: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005cc942: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005cc944: push dword ptr [ebx + 0x60] */ { u32 v = R32((u32)(r_ebx+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 005cc947: call 0x5c5528 */ r_esp -= 4; W32(r_esp, 0x5cc94cu); f_005c5528();
    /* 005cc94c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005cc94d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cc94f: je 0x5cca1e */ if (fZ) goto L_005cca1e;
L_005cc955:; BB(0x005cc955);
    /* 005cc955: movsx eax, byte ptr [eax + 0xf1] */ r_eax = (u32)(i32)(i8)R8((u32)(r_eax+0xf1u));
    /* 005cc95c: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cc95f: je 0x5cc96e */ if (fZ) goto L_005cc96e;
L_005cc961:; BB(0x005cc961);
    /* 005cc961: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 005cc965: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005cc96a: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
L_005cc96e:; BB(0x005cc96e);
    /* 005cc96e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005cc970: call 0x5cca44 */ r_esp -= 4; W32(r_esp, 0x5cc975u); f_005cca44();
    /* 005cc975: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 005cc978: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005cc97a: mov esi, eax */ r_esi = r_eax;
L_005cc97c:; BB(0x005cc97c);
    /* 005cc97c: mov ecx, dword ptr [ebx + esi*4 + 0x1c] */ r_ecx = R32((u32)(r_ebx+r_esi*4+0x1cu));
    /* 005cc980: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005cc983: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cc985: je 0x5cc990 */ if (fZ) goto L_005cc990;
L_005cc987:; BB(0x005cc987);
    /* 005cc987: lea edx, [ebx + 0x64] */ r_edx = (u32)(r_ebx+0x64u);
    /* 005cc98a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005cc98b: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x5cc990u); f_00508db8();
L_005cc990:; BB(0x005cc990);
    /* 005cc990: cmp esi, 3 */ {  u32 a = r_esi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005cc993: jl 0x5cc97c */ if ((fS!=fO)) goto L_005cc97c;
L_005cc995:; BB(0x005cc995);
    /* 005cc995: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 005cc998: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 005cc99b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cc99d: je 0x5cc9af */ if (fZ) goto L_005cc9af;
L_005cc99f:; BB(0x005cc99f);
    /* 005cc99f: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cc9a2: je 0x5cc9c4 */ if (fZ) goto L_005cc9c4;
L_005cc9a4:; BB(0x005cc9a4);
    /* 005cc9a4: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cc9a7: je 0x5cca31 */ if (fZ) goto L_005cca31;
L_005cc9ad:; BB(0x005cc9ad);
    /* 005cc9ad: jmp 0x5cc9b6 */ goto L_005cc9b6;
L_005cc9af:; BB(0x005cc9af);
    /* 005cc9af: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 005cc9b1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005cc9b3: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x5cc9b6u); call_ind(t); }
L_005cc9b6:; BB(0x005cc9b6);
    /* 005cc9b6: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 005cc9b8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005cc9ba: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x5cc9bdu); call_ind(t); }
    /* 005cc9bd: add dword ptr [ebx + 0x30], 1 */ { u32 ad = (u32)(r_ebx+0x30u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005cc9c1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005cc9c2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005cc9c3: ret  */ FN_RET(0x005cc940); r_esp += 4; return;
L_005cc9c4:; BB(0x005cc9c4);
    /* 005cc9c4: mov edx, dword ptr [ebx + 0x1c] */ r_edx = R32((u32)(r_ebx+0x1cu));
    /* 005cc9c7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cc9c9: je 0x5cc9df */ if (fZ) goto L_005cc9df;
L_005cc9cb:; BB(0x005cc9cb);
    /* 005cc9cb: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 005cc9cf: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005cc9d4: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 005cc9d8: mov dword ptr [ebx + 0x1c], 0 */ W32((u32)(r_ebx+0x1cu), 0x0u);
L_005cc9df:; BB(0x005cc9df);
    /* 005cc9df: mov edx, dword ptr [ebx + 0x20] */ r_edx = R32((u32)(r_ebx+0x20u));
    /* 005cc9e2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cc9e4: je 0x5cc9fa */ if (fZ) goto L_005cc9fa;
L_005cc9e6:; BB(0x005cc9e6);
    /* 005cc9e6: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 005cc9ea: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005cc9ef: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 005cc9f3: mov dword ptr [ebx + 0x20], 0 */ W32((u32)(r_ebx+0x20u), 0x0u);
L_005cc9fa:; BB(0x005cc9fa);
    /* 005cc9fa: mov edx, dword ptr [ebx + 0x24] */ r_edx = R32((u32)(r_ebx+0x24u));
    /* 005cc9fd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cc9ff: je 0x5cca15 */ if (fZ) goto L_005cca15;
L_005cca01:; BB(0x005cca01);
    /* 005cca01: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 005cca05: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005cca0a: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 005cca0e: mov dword ptr [ebx + 0x24], 0 */ W32((u32)(r_ebx+0x24u), 0x0u);
L_005cca15:; BB(0x005cca15);
    /* 005cca15: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 005cca17: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005cca19: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x5cca1cu); call_ind(t); }
    /* 005cca1c: jmp 0x5cc9b6 */ goto L_005cc9b6;
L_005cca1e:; BB(0x005cca1e);
    /* 005cca1e: movzx edx, word ptr [ebx + 8] */ r_edx = (u32)R16((u32)(r_ebx+0x8u));
    /* 005cca22: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 005cca28: mov word ptr [ebx + 8], dx */ W16((u32)(r_ebx+0x8u), (u16)r_edx);
    /* 005cca2c: jmp 0x5cc955 */ goto L_005cc955;
L_005cca31:; BB(0x005cca31);
    /* 005cca31: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 005cca35: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005cca3a: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
    /* 005cca3e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005cca3f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005cca40: ret  */ FN_RET(0x005cc940); r_esp += 4; return;
}

void f_005cca44(void) /* sub_5CCA44 */
{
    FN_ENTER(0x005cca44);
    /* 005cca44: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005cca45: mov esi, ecx */ r_esi = r_ecx;
    /* 005cca47: movzx eax, word ptr [esi + 0x34] */ r_eax = (u32)R16((u32)(r_esi+0x34u));
    /* 005cca4b: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005cca50: je 0x5cca94 */ if (fZ) goto L_005cca94;
L_005cca52:; BB(0x005cca52);
    /* 005cca52: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cca53: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x5cca58u); f_007b4d18();
    /* 005cca58: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005cca59: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005cca5b: je 0x5cca94 */ if (fZ) goto L_005cca94;
L_005cca5d:; BB(0x005cca5d);
    /* 005cca5d: mov ecx, dword ptr [esi + 0x28] */ r_ecx = R32((u32)(r_esi+0x28u));
    /* 005cca60: mov edx, dword ptr [esi + 0x2c] */ r_edx = R32((u32)(r_esi+0x2cu));
    /* 005cca63: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 005cca66: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005cca68: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005cca6a: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005cca6c: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005cca6e: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005cca70: mov edx, dword ptr [ecx + 0xa4] */ r_edx = R32((u32)(r_ecx+0xa4u));
    /* 005cca76: fld dword ptr [edx + eax*4 + 0x1c] */ FPUSH(R_F32((u32)(r_edx+r_eax*4+0x1cu)));
    /* 005cca7a: fsub dword ptr [esi + 0x44] */ ST(0) = ST(0) - R_F32((u32)(r_esi+0x44u));
    /* 005cca7d: fstp dword ptr [esi + 0x64] */ W_F32((u32)(r_esi+0x64u), ST(0)); FPOP();
    /* 005cca80: fld dword ptr [edx + eax*4 + 0x20] */ FPUSH(R_F32((u32)(r_edx+r_eax*4+0x20u)));
    /* 005cca84: fsub dword ptr [esi + 0x48] */ ST(0) = ST(0) - R_F32((u32)(r_esi+0x48u));
    /* 005cca87: fstp dword ptr [esi + 0x68] */ W_F32((u32)(r_esi+0x68u), ST(0)); FPOP();
    /* 005cca8a: fld dword ptr [edx + eax*4 + 0x24] */ FPUSH(R_F32((u32)(r_edx+r_eax*4+0x24u)));
    /* 005cca8e: fsub dword ptr [esi + 0x4c] */ ST(0) = ST(0) - R_F32((u32)(r_esi+0x4cu));
    /* 005cca91: fstp dword ptr [esi + 0x6c] */ W_F32((u32)(r_esi+0x6cu), ST(0)); FPOP();
L_005cca94:; BB(0x005cca94);
    /* 005cca94: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005cca95: ret  */ FN_RET(0x005cca44); r_esp += 4; return;
}

void f_005cca98(void) /* sub_5CCA98 */
{
    FN_ENTER(0x005cca98);
    /* 005cca98: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cca99: mov ebp, esp */ r_ebp = r_esp;
    /* 005cca9b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005cca9d: push 0x8d9d4a */ { u32 v = 0x8d9d4au; r_esp -= 4; W32(r_esp, v); }
    /* 005ccaa2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005ccaa8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ccaa9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005ccab0: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ccab3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005ccab6: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005ccab9: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005ccabc: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005ccabf: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005ccac2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ccac4: je 0x5ccbc7 */ if (fZ) goto L_005ccbc7;
L_005ccaca:; BB(0x005ccaca);
    /* 005ccaca: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005ccacd: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005ccacf: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ccad1: je 0x5ccbc7 */ if (fZ) goto L_005ccbc7;
L_005ccad7:; BB(0x005ccad7);
    /* 005ccad7: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 005ccade: push 0x70 */ { u32 v = 0x70u; r_esp -= 4; W32(r_esp, v); }
    /* 005ccae0: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5ccae5u); f_005caba4();
    /* 005ccae5: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005ccae8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ccaeb: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 005ccaee: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ccaf0: je 0x5ccbc7 */ if (fZ) goto L_005ccbc7;
L_005ccaf6:; BB(0x005ccaf6);
    /* 005ccaf6: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 005ccafd: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005ccb04: mov ecx, eax */ r_ecx = r_eax;
    /* 005ccb06: mov eax, dword ptr [0xaca36c] */ r_eax = R32((u32)(0xaca36cu));
    /* 005ccb0b: mov dword ptr [ebp - 0x4c], ecx */ W32((u32)(r_ebp+0xffffffb4u), r_ecx);
    /* 005ccb0e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ccb0f: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 005ccb12: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x5ccb17u); f_008193cc();
    /* 005ccb17: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005ccb1e: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 005ccb21: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
    /* 005ccb24: mov ebx, dword ptr [ebp + 0x10] */ r_ebx = R32((u32)(r_ebp+0x10u));
    /* 005ccb27: mov dword ptr [edi], 0xb0c8a8 */ W32((u32)(r_edi), 0xb0c8a8u);
    /* 005ccb2d: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 005ccb2f: movzx edx, word ptr [eax + 0x1c] */ r_edx = (u32)R16((u32)(r_eax+0x1cu));
    /* 005ccb33: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ccb36: mov word ptr [edi + 0x34], dx */ W16((u32)(r_edi+0x34u), (u16)r_edx);
    /* 005ccb3a: mov dword ptr [edi + 0x60], eax */ W32((u32)(r_edi+0x60u), r_eax);
    /* 005ccb3d: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 005ccb3f: mov dword ptr [edi + 0x28], eax */ W32((u32)(r_edi+0x28u), r_eax);
    /* 005ccb42: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 005ccb45: mov dword ptr [edi + 0x2c], eax */ W32((u32)(r_edi+0x2cu), r_eax);
    /* 005ccb48: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 005ccb4a: mov dword ptr [edi + 0x38], eax */ W32((u32)(r_edi+0x38u), r_eax);
    /* 005ccb4d: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 005ccb50: mov dword ptr [edi + 0x3c], eax */ W32((u32)(r_edi+0x3cu), r_eax);
    /* 005ccb53: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 005ccb56: mov dword ptr [edi + 0x40], eax */ W32((u32)(r_edi+0x40u), r_eax);
    /* 005ccb59: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 005ccb5b: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 005ccb5e: mov edx, dword ptr [edx + 0xa4] */ r_edx = R32((u32)(r_edx+0xa4u));
    /* 005ccb64: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 005ccb67: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005ccb69: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005ccb6b: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005ccb6d: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005ccb6f: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005ccb71: mov eax, dword ptr [edx + ecx*4 + 0x1c] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x1cu));
    /* 005ccb75: mov dword ptr [edi + 0x64], eax */ W32((u32)(r_edi+0x64u), r_eax);
    /* 005ccb78: mov eax, dword ptr [edx + ecx*4 + 0x20] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x20u));
    /* 005ccb7c: mov dword ptr [edi + 0x68], eax */ W32((u32)(r_edi+0x68u), r_eax);
    /* 005ccb7f: mov eax, dword ptr [edx + ecx*4 + 0x24] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x24u));
    /* 005ccb83: mov dword ptr [edi + 0x6c], eax */ W32((u32)(r_edi+0x6cu), r_eax);
    /* 005ccb86: fld dword ptr [ebx] */ FPUSH(R_F32((u32)(r_ebx)));
    /* 005ccb88: fld dword ptr [ebx + 8] */ FPUSH(R_F32((u32)(r_ebx+0x8u)));
    /* 005ccb8b: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 005ccb8d: fmul qword ptr [0x92beb0] */ ST(0) = ST(0) * R_F64((u32)(0x92beb0u));
    /* 005ccb93: fdiv qword ptr [0x92bea8] */ ST(0) = ST(0) / R_F64((u32)(0x92bea8u));
    /* 005ccb99: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005ccb9c: fnstcw word ptr [ebp - 0x2c] */ W16((u32)(r_ebp+0xffffffd4u), fcw);
    /* 005ccb9f: movzx eax, word ptr [ebp - 0x2c] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffd4u));
    /* 005ccba3: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005ccba8: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005ccbab: fldcw word ptr [ebp - 0x24] */ fcw = R16((u32)(r_ebp+0xffffffdcu));
    /* 005ccbae: fistp dword ptr [ecx + 0x58] */ W32((u32)(r_ecx+0x58u), (u32)fx_int32(ST(0))); FPOP();
    /* 005ccbb1: fldcw word ptr [ebp - 0x2c] */ fcw = R16((u32)(r_ebp+0xffffffd4u));
    /* 005ccbb4: mov dword ptr [ecx + 0x50], 0 */ W32((u32)(r_ecx+0x50u), 0x0u);
    /* 005ccbbb: call 0x5cd694 */ r_esp -= 4; W32(r_esp, 0x5ccbc0u); f_005cd694();
    /* 005ccbc0: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_005ccbc7:; BB(0x005ccbc7);
    /* 005ccbc7: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ccbca: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 005ccbcd: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ccbd0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ccbd3: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005ccbda: mov esp, ebp */ r_esp = r_ebp;
    /* 005ccbdc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ccbdd: ret  */ FN_RET(0x005cca98); r_esp += 4; return;
}

void f_005ccbe0(void) /* sub_5CCBE0 */
{
    FN_ENTER(0x005ccbe0);
    /* 005ccbe0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ccbe1: mov ebp, esp */ r_ebp = r_esp;
    /* 005ccbe3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ccbe5: push 0x8d9d7e */ { u32 v = 0x8d9d7eu; r_esp -= 4; W32(r_esp, v); }
    /* 005ccbea: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005ccbf0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ccbf1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005ccbf8: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ccbfb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005ccbfe: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005ccc01: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005ccc04: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005ccc07: push 0x70 */ { u32 v = 0x70u; r_esp -= 4; W32(r_esp, v); }
    /* 005ccc09: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 005ccc10: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5ccc15u); f_005caba4();
    /* 005ccc15: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005ccc18: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ccc1b: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 005ccc1e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ccc20: je 0x5cccd3 */ if (fZ) goto L_005cccd3;
L_005ccc26:; BB(0x005ccc26);
    /* 005ccc26: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 005ccc2d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005ccc34: mov ecx, eax */ r_ecx = r_eax;
    /* 005ccc36: mov eax, dword ptr [0xaca36c] */ r_eax = R32((u32)(0xaca36cu));
    /* 005ccc3b: mov dword ptr [ebp - 0x4c], ecx */ W32((u32)(r_ebp+0xffffffb4u), r_ecx);
    /* 005ccc3e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ccc3f: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 005ccc42: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x5ccc47u); f_008193cc();
    /* 005ccc47: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005ccc4e: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 005ccc51: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 005ccc54: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005ccc57: mov esi, 0xffff */ r_esi = 0xffffu;
    /* 005ccc5c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005ccc5e: mov dword ptr [ebx], 0xb0c8a8 */ W32((u32)(r_ebx), 0xb0c8a8u);
    /* 005ccc64: mov dword ptr [ebx + 0x28], edx */ W32((u32)(r_ebx+0x28u), r_edx);
    /* 005ccc67: mov dword ptr [ebx + 0x2c], edx */ W32((u32)(r_ebx+0x2cu), r_edx);
    /* 005ccc6a: mov word ptr [ebx + 0x34], si */ W16((u32)(r_ebx+0x34u), (u16)r_esi);
    /* 005ccc6e: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
    /* 005ccc71: mov dword ptr [ebx + 0x60], edi */ W32((u32)(r_ebx+0x60u), r_edi);
    /* 005ccc74: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005ccc76: mov dword ptr [ebx + 0x38], eax */ W32((u32)(r_ebx+0x38u), r_eax);
    /* 005ccc79: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 005ccc7c: mov dword ptr [ebx + 0x3c], eax */ W32((u32)(r_ebx+0x3cu), r_eax);
    /* 005ccc7f: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 005ccc82: mov dword ptr [ebx + 0x40], eax */ W32((u32)(r_ebx+0x40u), r_eax);
    /* 005ccc85: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 005ccc87: mov dword ptr [ebx + 0x64], eax */ W32((u32)(r_ebx+0x64u), r_eax);
    /* 005ccc8a: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 005ccc8d: mov dword ptr [ebx + 0x68], eax */ W32((u32)(r_ebx+0x68u), r_eax);
    /* 005ccc90: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 005ccc93: mov dword ptr [ebx + 0x6c], eax */ W32((u32)(r_ebx+0x6cu), r_eax);
    /* 005ccc96: fld dword ptr [ecx] */ FPUSH(R_F32((u32)(r_ecx)));
    /* 005ccc98: fld dword ptr [ecx + 8] */ FPUSH(R_F32((u32)(r_ecx+0x8u)));
    /* 005ccc9b: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 005ccc9d: fmul qword ptr [0x92bea0] */ ST(0) = ST(0) * R_F64((u32)(0x92bea0u));
    /* 005ccca3: fdiv qword ptr [0x92be98] */ ST(0) = ST(0) / R_F64((u32)(0x92be98u));
    /* 005ccca9: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005cccac: fnstcw word ptr [ebp - 0x2c] */ W16((u32)(r_ebp+0xffffffd4u), fcw);
    /* 005cccaf: movzx eax, word ptr [ebp - 0x2c] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffd4u));
    /* 005cccb3: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005cccb8: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005cccbb: fldcw word ptr [ebp - 0x24] */ fcw = R16((u32)(r_ebp+0xffffffdcu));
    /* 005cccbe: fistp dword ptr [ecx + 0x58] */ W32((u32)(r_ecx+0x58u), (u32)fx_int32(ST(0))); FPOP();
    /* 005cccc1: fldcw word ptr [ebp - 0x2c] */ fcw = R16((u32)(r_ebp+0xffffffd4u));
    /* 005cccc4: mov dword ptr [ecx + 0x50], edx */ W32((u32)(r_ecx+0x50u), r_edx);
    /* 005cccc7: call 0x5cd694 */ r_esp -= 4; W32(r_esp, 0x5cccccu); f_005cd694();
    /* 005ccccc: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_005cccd3:; BB(0x005cccd3);
    /* 005cccd3: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cccd6: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 005cccd9: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005cccdc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cccdf: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005ccce6: mov esp, ebp */ r_esp = r_ebp;
    /* 005ccce8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ccce9: ret  */ FN_RET(0x005ccbe0); r_esp += 4; return;
}

void f_005cccec(void) /* sub_5CCCEC */
{
    FN_ENTER(0x005cccec);
    /* 005cccec: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ccced: mov ebp, esp */ r_ebp = r_esp;
    /* 005cccef: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005cccf1: push 0x8d9db2 */ { u32 v = 0x8d9db2u; r_esp -= 4; W32(r_esp, v); }
    /* 005cccf6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005cccfc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cccfd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005ccd04: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ccd07: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005ccd0a: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005ccd0d: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005ccd10: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005ccd13: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005ccd16: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ccd18: je 0x5cce1b */ if (fZ) goto L_005cce1b;
L_005ccd1e:; BB(0x005ccd1e);
    /* 005ccd1e: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005ccd21: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005ccd23: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ccd25: je 0x5cce1b */ if (fZ) goto L_005cce1b;
L_005ccd2b:; BB(0x005ccd2b);
    /* 005ccd2b: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 005ccd32: push 0x70 */ { u32 v = 0x70u; r_esp -= 4; W32(r_esp, v); }
    /* 005ccd34: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5ccd39u); f_005caba4();
    /* 005ccd39: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005ccd3c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ccd3f: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 005ccd42: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ccd44: je 0x5cce1b */ if (fZ) goto L_005cce1b;
L_005ccd4a:; BB(0x005ccd4a);
    /* 005ccd4a: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 005ccd51: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005ccd58: mov ecx, eax */ r_ecx = r_eax;
    /* 005ccd5a: mov eax, dword ptr [0xaca36c] */ r_eax = R32((u32)(0xaca36cu));
    /* 005ccd5f: mov dword ptr [ebp - 0x4c], ecx */ W32((u32)(r_ebp+0xffffffb4u), r_ecx);
    /* 005ccd62: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ccd63: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 005ccd66: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x5ccd6bu); f_008193cc();
    /* 005ccd6b: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005ccd72: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 005ccd75: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
    /* 005ccd78: mov ebx, dword ptr [ebp + 0x10] */ r_ebx = R32((u32)(r_ebp+0x10u));
    /* 005ccd7b: mov dword ptr [edi], 0xb0c8a8 */ W32((u32)(r_edi), 0xb0c8a8u);
    /* 005ccd81: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 005ccd83: movzx edx, word ptr [eax + 0x1c] */ r_edx = (u32)R16((u32)(r_eax+0x1cu));
    /* 005ccd87: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ccd8a: mov word ptr [edi + 0x34], dx */ W16((u32)(r_edi+0x34u), (u16)r_edx);
    /* 005ccd8e: mov dword ptr [edi + 0x60], eax */ W32((u32)(r_edi+0x60u), r_eax);
    /* 005ccd91: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 005ccd93: mov dword ptr [edi + 0x28], eax */ W32((u32)(r_edi+0x28u), r_eax);
    /* 005ccd96: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 005ccd99: mov dword ptr [edi + 0x2c], eax */ W32((u32)(r_edi+0x2cu), r_eax);
    /* 005ccd9c: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 005ccd9e: mov dword ptr [edi + 0x38], eax */ W32((u32)(r_edi+0x38u), r_eax);
    /* 005ccda1: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 005ccda4: mov dword ptr [edi + 0x3c], eax */ W32((u32)(r_edi+0x3cu), r_eax);
    /* 005ccda7: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 005ccdaa: mov dword ptr [edi + 0x40], eax */ W32((u32)(r_edi+0x40u), r_eax);
    /* 005ccdad: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 005ccdaf: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 005ccdb2: mov edx, dword ptr [edx + 0xa4] */ r_edx = R32((u32)(r_edx+0xa4u));
    /* 005ccdb8: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 005ccdbb: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005ccdbd: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005ccdbf: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005ccdc1: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005ccdc3: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005ccdc5: mov eax, dword ptr [edx + ecx*4 + 0x1c] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x1cu));
    /* 005ccdc9: mov dword ptr [edi + 0x64], eax */ W32((u32)(r_edi+0x64u), r_eax);
    /* 005ccdcc: mov eax, dword ptr [edx + ecx*4 + 0x20] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x20u));
    /* 005ccdd0: mov dword ptr [edi + 0x68], eax */ W32((u32)(r_edi+0x68u), r_eax);
    /* 005ccdd3: mov eax, dword ptr [edx + ecx*4 + 0x24] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x24u));
    /* 005ccdd7: mov dword ptr [edi + 0x6c], eax */ W32((u32)(r_edi+0x6cu), r_eax);
    /* 005ccdda: fld dword ptr [ebx] */ FPUSH(R_F32((u32)(r_ebx)));
    /* 005ccddc: fld dword ptr [ebx + 8] */ FPUSH(R_F32((u32)(r_ebx+0x8u)));
    /* 005ccddf: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 005ccde1: fmul qword ptr [0x92be90] */ ST(0) = ST(0) * R_F64((u32)(0x92be90u));
    /* 005ccde7: fdiv qword ptr [0x92be88] */ ST(0) = ST(0) / R_F64((u32)(0x92be88u));
    /* 005ccded: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005ccdf0: fnstcw word ptr [ebp - 0x2c] */ W16((u32)(r_ebp+0xffffffd4u), fcw);
    /* 005ccdf3: movzx eax, word ptr [ebp - 0x2c] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffd4u));
    /* 005ccdf7: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005ccdfc: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005ccdff: fldcw word ptr [ebp - 0x24] */ fcw = R16((u32)(r_ebp+0xffffffdcu));
    /* 005cce02: fistp dword ptr [ecx + 0x58] */ W32((u32)(r_ecx+0x58u), (u32)fx_int32(ST(0))); FPOP();
    /* 005cce05: fldcw word ptr [ebp - 0x2c] */ fcw = R16((u32)(r_ebp+0xffffffd4u));
    /* 005cce08: mov dword ptr [ecx + 0x50], 0xffff0000 */ W32((u32)(r_ecx+0x50u), 0xffff0000u);
    /* 005cce0f: call 0x5cd694 */ r_esp -= 4; W32(r_esp, 0x5cce14u); f_005cd694();
    /* 005cce14: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_005cce1b:; BB(0x005cce1b);
    /* 005cce1b: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cce1e: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 005cce21: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005cce24: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cce27: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005cce2e: mov esp, ebp */ r_esp = r_ebp;
    /* 005cce30: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cce31: ret  */ FN_RET(0x005cccec); r_esp += 4; return;
}

void f_005cce34(void) /* sub_5CCE34 */
{
    FN_ENTER(0x005cce34);
    /* 005cce34: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cce35: mov ebp, esp */ r_ebp = r_esp;
    /* 005cce37: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005cce39: push 0x8d9de6 */ { u32 v = 0x8d9de6u; r_esp -= 4; W32(r_esp, v); }
    /* 005cce3e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005cce44: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cce45: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005cce4c: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005cce4f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005cce52: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005cce55: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005cce58: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005cce5b: push 0x70 */ { u32 v = 0x70u; r_esp -= 4; W32(r_esp, v); }
    /* 005cce5d: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 005cce64: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5cce69u); f_005caba4();
    /* 005cce69: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005cce6c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cce6f: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 005cce72: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005cce74: je 0x5ccf2b */ if (fZ) goto L_005ccf2b;
L_005cce7a:; BB(0x005cce7a);
    /* 005cce7a: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 005cce81: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005cce88: mov ecx, eax */ r_ecx = r_eax;
    /* 005cce8a: mov eax, dword ptr [0xaca36c] */ r_eax = R32((u32)(0xaca36cu));
    /* 005cce8f: mov dword ptr [ebp - 0x4c], ecx */ W32((u32)(r_ebp+0xffffffb4u), r_ecx);
    /* 005cce92: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cce93: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 005cce96: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x5cce9bu); f_008193cc();
    /* 005cce9b: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005ccea2: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 005ccea5: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ccea8: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005cceab: mov edi, 0xffff */ r_edi = 0xffffu;
    /* 005cceb0: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 005cceb2: mov dword ptr [ebx], 0xb0c8a8 */ W32((u32)(r_ebx), 0xb0c8a8u);
    /* 005cceb8: mov dword ptr [ebx + 0x28], esi */ W32((u32)(r_ebx+0x28u), r_esi);
    /* 005ccebb: mov dword ptr [ebx + 0x2c], esi */ W32((u32)(r_ebx+0x2cu), r_esi);
    /* 005ccebe: mov word ptr [ebx + 0x34], di */ W16((u32)(r_ebx+0x34u), (u16)r_edi);
    /* 005ccec2: mov dword ptr [ebx + 0x60], eax */ W32((u32)(r_ebx+0x60u), r_eax);
    /* 005ccec5: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005ccec7: mov dword ptr [ebx + 0x38], edx */ W32((u32)(r_ebx+0x38u), r_edx);
    /* 005cceca: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005ccecd: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 005cced0: mov dword ptr [ebx + 0x3c], eax */ W32((u32)(r_ebx+0x3cu), r_eax);
    /* 005cced3: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 005cced6: mov dword ptr [ebx + 0x40], eax */ W32((u32)(r_ebx+0x40u), r_eax);
    /* 005cced9: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005ccedb: mov dword ptr [ebx + 0x64], eax */ W32((u32)(r_ebx+0x64u), r_eax);
    /* 005ccede: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005ccee1: mov dword ptr [ebx + 0x68], eax */ W32((u32)(r_ebx+0x68u), r_eax);
    /* 005ccee4: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005ccee7: mov dword ptr [ebx + 0x6c], eax */ W32((u32)(r_ebx+0x6cu), r_eax);
    /* 005cceea: fld dword ptr [ecx] */ FPUSH(R_F32((u32)(r_ecx)));
    /* 005cceec: fld dword ptr [ecx + 8] */ FPUSH(R_F32((u32)(r_ecx+0x8u)));
    /* 005cceef: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 005ccef1: fmul qword ptr [0x92be80] */ ST(0) = ST(0) * R_F64((u32)(0x92be80u));
    /* 005ccef7: fdiv qword ptr [0x92be78] */ ST(0) = ST(0) / R_F64((u32)(0x92be78u));
    /* 005ccefd: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005ccf00: fnstcw word ptr [ebp - 0x2c] */ W16((u32)(r_ebp+0xffffffd4u), fcw);
    /* 005ccf03: movzx eax, word ptr [ebp - 0x2c] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffd4u));
    /* 005ccf07: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005ccf0c: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005ccf0f: fldcw word ptr [ebp - 0x24] */ fcw = R16((u32)(r_ebp+0xffffffdcu));
    /* 005ccf12: fistp dword ptr [ecx + 0x58] */ W32((u32)(r_ecx+0x58u), (u32)fx_int32(ST(0))); FPOP();
    /* 005ccf15: fldcw word ptr [ebp - 0x2c] */ fcw = R16((u32)(r_ebp+0xffffffd4u));
    /* 005ccf18: mov dword ptr [ecx + 0x50], 0xffff0000 */ W32((u32)(r_ecx+0x50u), 0xffff0000u);
    /* 005ccf1f: call 0x5cd694 */ r_esp -= 4; W32(r_esp, 0x5ccf24u); f_005cd694();
    /* 005ccf24: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_005ccf2b:; BB(0x005ccf2b);
    /* 005ccf2b: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ccf2e: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 005ccf31: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ccf34: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ccf37: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005ccf3e: mov esp, ebp */ r_esp = r_ebp;
    /* 005ccf40: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ccf41: ret  */ FN_RET(0x005cce34); r_esp += 4; return;
}

void f_005ccf44(void) /* sub_5CCF44 */
{
    FN_ENTER(0x005ccf44);
    /* 005ccf44: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ccf45: mov ebp, esp */ r_ebp = r_esp;
    /* 005ccf47: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ccf49: push 0x8d9e1a */ { u32 v = 0x8d9e1au; r_esp -= 4; W32(r_esp, v); }
    /* 005ccf4e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005ccf54: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ccf55: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005ccf5c: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ccf5f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005ccf62: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005ccf65: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005ccf68: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005ccf6b: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005ccf6e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ccf70: je 0x5cd073 */ if (fZ) goto L_005cd073;
L_005ccf76:; BB(0x005ccf76);
    /* 005ccf76: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005ccf79: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005ccf7b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ccf7d: je 0x5cd073 */ if (fZ) goto L_005cd073;
L_005ccf83:; BB(0x005ccf83);
    /* 005ccf83: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 005ccf8a: push 0x70 */ { u32 v = 0x70u; r_esp -= 4; W32(r_esp, v); }
    /* 005ccf8c: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5ccf91u); f_005caba4();
    /* 005ccf91: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005ccf94: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ccf97: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 005ccf9a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ccf9c: je 0x5cd073 */ if (fZ) goto L_005cd073;
L_005ccfa2:; BB(0x005ccfa2);
    /* 005ccfa2: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 005ccfa9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005ccfb0: mov ecx, eax */ r_ecx = r_eax;
    /* 005ccfb2: mov eax, dword ptr [0xaca36c] */ r_eax = R32((u32)(0xaca36cu));
    /* 005ccfb7: mov dword ptr [ebp - 0x4c], ecx */ W32((u32)(r_ebp+0xffffffb4u), r_ecx);
    /* 005ccfba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ccfbb: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 005ccfbe: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x5ccfc3u); f_008193cc();
    /* 005ccfc3: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005ccfca: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 005ccfcd: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
    /* 005ccfd0: mov ebx, dword ptr [ebp + 0x10] */ r_ebx = R32((u32)(r_ebp+0x10u));
    /* 005ccfd3: mov dword ptr [edi], 0xb0c8a8 */ W32((u32)(r_edi), 0xb0c8a8u);
    /* 005ccfd9: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 005ccfdb: movzx edx, word ptr [eax + 0x1c] */ r_edx = (u32)R16((u32)(r_eax+0x1cu));
    /* 005ccfdf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ccfe2: mov word ptr [edi + 0x34], dx */ W16((u32)(r_edi+0x34u), (u16)r_edx);
    /* 005ccfe6: mov dword ptr [edi + 0x60], eax */ W32((u32)(r_edi+0x60u), r_eax);
    /* 005ccfe9: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 005ccfeb: mov dword ptr [edi + 0x28], eax */ W32((u32)(r_edi+0x28u), r_eax);
    /* 005ccfee: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 005ccff1: mov dword ptr [edi + 0x2c], eax */ W32((u32)(r_edi+0x2cu), r_eax);
    /* 005ccff4: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 005ccff6: mov dword ptr [edi + 0x38], eax */ W32((u32)(r_edi+0x38u), r_eax);
    /* 005ccff9: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 005ccffc: mov dword ptr [edi + 0x3c], eax */ W32((u32)(r_edi+0x3cu), r_eax);
    /* 005ccfff: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 005cd002: mov dword ptr [edi + 0x40], eax */ W32((u32)(r_edi+0x40u), r_eax);
    /* 005cd005: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 005cd007: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 005cd00a: mov edx, dword ptr [edx + 0xa4] */ r_edx = R32((u32)(r_edx+0xa4u));
    /* 005cd010: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 005cd013: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005cd015: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005cd017: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005cd019: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005cd01b: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005cd01d: mov eax, dword ptr [edx + ecx*4 + 0x1c] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x1cu));
    /* 005cd021: mov dword ptr [edi + 0x64], eax */ W32((u32)(r_edi+0x64u), r_eax);
    /* 005cd024: mov eax, dword ptr [edx + ecx*4 + 0x20] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x20u));
    /* 005cd028: mov dword ptr [edi + 0x68], eax */ W32((u32)(r_edi+0x68u), r_eax);
    /* 005cd02b: mov eax, dword ptr [edx + ecx*4 + 0x24] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x24u));
    /* 005cd02f: mov dword ptr [edi + 0x6c], eax */ W32((u32)(r_edi+0x6cu), r_eax);
    /* 005cd032: fld dword ptr [ebx] */ FPUSH(R_F32((u32)(r_ebx)));
    /* 005cd034: fld dword ptr [ebx + 8] */ FPUSH(R_F32((u32)(r_ebx+0x8u)));
    /* 005cd037: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 005cd039: fmul qword ptr [0x92be70] */ ST(0) = ST(0) * R_F64((u32)(0x92be70u));
    /* 005cd03f: fdiv qword ptr [0x92be68] */ ST(0) = ST(0) / R_F64((u32)(0x92be68u));
    /* 005cd045: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005cd048: fnstcw word ptr [ebp - 0x2c] */ W16((u32)(r_ebp+0xffffffd4u), fcw);
    /* 005cd04b: movzx eax, word ptr [ebp - 0x2c] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffd4u));
    /* 005cd04f: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005cd054: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005cd057: fldcw word ptr [ebp - 0x24] */ fcw = R16((u32)(r_ebp+0xffffffdcu));
    /* 005cd05a: fistp dword ptr [ecx + 0x58] */ W32((u32)(r_ecx+0x58u), (u32)fx_int32(ST(0))); FPOP();
    /* 005cd05d: fldcw word ptr [ebp - 0x2c] */ fcw = R16((u32)(r_ebp+0xffffffd4u));
    /* 005cd060: mov dword ptr [ecx + 0x50], 0xffffff00 */ W32((u32)(r_ecx+0x50u), 0xffffff00u);
    /* 005cd067: call 0x5cd694 */ r_esp -= 4; W32(r_esp, 0x5cd06cu); f_005cd694();
    /* 005cd06c: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_005cd073:; BB(0x005cd073);
    /* 005cd073: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cd076: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 005cd079: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005cd07c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cd07f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005cd086: mov esp, ebp */ r_esp = r_ebp;
    /* 005cd088: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cd089: ret  */ FN_RET(0x005ccf44); r_esp += 4; return;
}

