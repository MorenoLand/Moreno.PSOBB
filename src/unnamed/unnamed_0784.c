#include "protos.h"

void f_00784104(void) /* sub_784104 */
{
    FN_ENTER(0x00784104);
    /* 00784104: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00784105: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00784108: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0078410a: mov eax, dword ptr [ebx + 0x20] */ r_eax = R32((u32)(r_ebx+0x20u));
    /* 0078410d: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0078410f: jne 0x784118 */ if (!fZ) goto L_00784118;
L_00784111:; BB(0x00784111);
    /* 00784111: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00784114: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00784115: ret 8 */ FN_RET(0x00784104); r_esp += 12; return;
L_00784118:; BB(0x00784118);
    /* 00784118: fld dword ptr [0x979b14] */ FPUSH(R_F32((u32)(0x979b14u)));
    /* 0078411e: fmul dword ptr [ebx + 0x1c] */ ST(0) = ST(0) * R_F32((u32)(r_ebx+0x1cu));
    /* 00784121: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00784123: mov word ptr [esp], ax */ W16((u32)(r_esp), (u16)r_eax);
    /* 00784127: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 0078412b: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 00784130: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00784135: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00784139: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 0078413d: fistp dword ptr [esp + 0x20] */ W32((u32)(r_esp+0x20u), (u32)fx_int32(ST(0))); FPOP();
    /* 00784141: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00784145: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 00784149: mov eax, 0x64 */ r_eax = 0x64u;
    /* 0078414e: cmp edx, 0x64 */ {  u32 a = r_edx; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00784151: jle 0x784155 */ if ((fZ||fS!=fO)) goto L_00784155;
L_00784153:; BB(0x00784153);
    /* 00784153: mov edx, eax */ r_edx = r_eax;
L_00784155:; BB(0x00784155);
    /* 00784155: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00784157: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00784159: jg 0x78415d */ if ((!fZ&&fS==fO)) goto L_0078415d;
L_0078415b:; BB(0x0078415b);
    /* 0078415b: mov edx, eax */ r_edx = r_eax;
L_0078415d:; BB(0x0078415d);
    /* 0078415d: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00784160: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00784161: push 0x979bb8 */ { u32 v = 0x979bb8u; r_esp -= 4; W32(r_esp, v); }
    /* 00784166: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00784167: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x78416cu); f_00857e29();
    /* 0078416c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0078416f: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 00784173: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 00784177: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 0078417c: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00784181: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00784185: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 00784189: fistp dword ptr [esp + 0x20] */ W32((u32)(r_esp+0x20u), (u32)fx_int32(ST(0))); FPOP();
    /* 0078418d: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00784191: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 00784195: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 00784199: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 0078419d: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 007841a2: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007841a7: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 007841ab: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 007841af: fistp dword ptr [esp + 0x20] */ W32((u32)(r_esp+0x20u), (u32)fx_int32(ST(0))); FPOP();
    /* 007841b3: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 007841b7: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 007841bb: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 007841be: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007841bf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007841c0: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007841c2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007841c3: call 0x783f50 */ r_esp -= 4; W32(r_esp, 0x7841c8u); f_00783f50();
    /* 007841c8: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007841cb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007841cc: ret 8 */ FN_RET(0x00784104); r_esp += 12; return;
}

void f_007841d0(void) /* sub_7841D0 */
{
    FN_ENTER(0x007841d0);
    /* 007841d0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007841d1: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007841d4: mov edi, ecx */ r_edi = r_ecx;
    /* 007841d6: mov ecx, dword ptr [edi + 0x3c] */ r_ecx = R32((u32)(r_edi+0x3cu));
    /* 007841d9: shl ecx, 0xb */ { u32 c = (11u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 007841dc: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x7841e1u); f_0082dcbc();
    /* 007841e1: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007841e2: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 007841e5: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x7841eau); f_0082e900();
    /* 007841ea: fld dword ptr [0x979b0c] */ FPUSH(R_F32((u32)(0x979b0cu)));
    /* 007841f0: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 007841f2: fadd dword ptr [0x979b10] */ ST(0) = ST(0) + R_F32((u32)(0x979b10u));
    /* 007841f8: mov ecx, dword ptr [edi + 0x3c] */ r_ecx = R32((u32)(r_edi+0x3cu));
    /* 007841fb: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 007841fe: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00784202: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00784207: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0078420b: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0078420f: fistp qword ptr [esp + 0x10] */ W64((u32)(r_esp+0x10u), (u64)fx_int64(ST(0))); FPOP();
    /* 00784213: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00784216: movzx eax, byte ptr [esp + 0x10] */ r_eax = (u32)R8((u32)(r_esp+0x10u));
    /* 0078421b: mov edx, eax */ r_edx = r_eax;
    /* 0078421d: shl edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00784220: or edx, 0xff000000 */ {  u32 a = r_edx; u32 b = 0xff000000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00784226: shl eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00784229: or edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0078422b: or edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00784231: mov dword ptr [edi + 0x34], edx */ W32((u32)(r_edi+0x34u), r_edx);
    /* 00784234: shl ecx, 7 */ { u32 c = (7u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00784237: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x78423cu); f_0082dcbc();
    /* 0078423c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0078423d: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00784240: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x784245u); f_0082e900();
    /* 00784245: fsubr dword ptr [0x979b08] */ ST(0) = R_F32((u32)(0x979b08u)) - ST(0);
    /* 0078424b: fmul dword ptr [0x979b04] */ ST(0) = ST(0) * R_F32((u32)(0x979b04u));
    /* 00784251: fadd dword ptr [0x979b10] */ ST(0) = ST(0) + R_F32((u32)(0x979b10u));
    /* 00784257: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0078425a: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0078425e: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00784263: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00784267: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0078426b: fistp qword ptr [esp + 0x10] */ W64((u32)(r_esp+0x10u), (u64)fx_int64(ST(0))); FPOP();
    /* 0078426f: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00784272: movzx edx, byte ptr [esp + 0x10] */ r_edx = (u32)R8((u32)(r_esp+0x10u));
    /* 00784277: add dword ptr [edi + 0x3c], 1 */ { u32 ad = (u32)(r_edi+0x3cu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0078427b: mov ecx, edx */ r_ecx = r_edx;
    /* 0078427d: shl ecx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00784280: or ecx, 0xff000000 */ {  u32 a = r_ecx; u32 b = 0xff000000u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00784286: mov eax, edx */ r_eax = r_edx;
    /* 00784288: shl eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0078428b: or ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0078428d: or ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0078428f: mov dword ptr [edi + 0x38], ecx */ W32((u32)(r_edi+0x38u), r_ecx);
    /* 00784292: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00784295: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00784296: ret  */ FN_RET(0x007841d0); r_esp += 4; return;
}

void f_00784298(void) /* sub_784298 */
{
    FN_ENTER(0x00784298);
    /* 00784298: mov dword ptr [ecx + 0x40], 0 */ W32((u32)(r_ecx+0x40u), 0x0u);
    /* 0078429f: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 007842a4: mov dword ptr [ecx + 0x48], 0xbf800000 */ W32((u32)(r_ecx+0x48u), 0xbf800000u);
    /* 007842ab: mov dword ptr [ecx + 0x44], eax */ W32((u32)(r_ecx+0x44u), r_eax);
    /* 007842ae: mov dword ptr [ecx + 0x4c], eax */ W32((u32)(r_ecx+0x4cu), r_eax);
    /* 007842b1: mov dword ptr [ecx + 0x54], eax */ W32((u32)(r_ecx+0x54u), r_eax);
    /* 007842b4: mov dword ptr [ecx + 0x50], 0xbf800000 */ W32((u32)(r_ecx+0x50u), 0xbf800000u);
    /* 007842bb: mov dword ptr [ecx + 0x5c], eax */ W32((u32)(r_ecx+0x5cu), r_eax);
    /* 007842be: mov dword ptr [ecx + 0x58], 0xbf800000 */ W32((u32)(r_ecx+0x58u), 0xbf800000u);
    /* 007842c5: mov dword ptr [ecx + 0x60], 0xbf800000 */ W32((u32)(r_ecx+0x60u), 0xbf800000u);
    /* 007842cc: ret  */ FN_RET(0x00784298); r_esp += 4; return;
}

void f_007842d0(void) /* sub_7842D0 */
{
    FN_ENTER(0x007842d0);
    /* 007842d0: mov dword ptr [ecx + 0x3c], 0 */ W32((u32)(r_ecx+0x3cu), 0x0u);
    /* 007842d7: call 0x7841d0 */ r_esp -= 4; W32(r_esp, 0x7842dcu); f_007841d0();
    /* 007842dc: ret  */ FN_RET(0x007842d0); r_esp += 4; return;
}

void f_007842e0(void) /* sub_7842E0 */
{
    FN_ENTER(0x007842e0);
    /* 007842e0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007842e1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 007842e3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007842e5: call 0x784304 */ r_esp -= 4; W32(r_esp, 0x7842eau); f_00784304();
    /* 007842ea: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 007842ee: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007842f0: jne 0x7842f6 */ if (!fZ) goto L_007842f6;
L_007842f2:; BB(0x007842f2);
    /* 007842f2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007842f3: ret 4 */ FN_RET(0x007842e0); r_esp += 8; return;
L_007842f6:; BB(0x007842f6);
    /* 007842f6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007842f7: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x7842fcu); f_005c2f74();
    /* 007842fc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007842fd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007842fe: ret 4 */ FN_RET(0x007842e0); r_esp += 8; return;
}

void f_00784304(void) /* sub_784304 */
{
    FN_ENTER(0x00784304);
    /* 00784304: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00784305: mov ebp, esp */ r_ebp = r_esp;
    /* 00784307: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00784309: push 0x8f4608 */ { u32 v = 0x8f4608u; r_esp -= 4; W32(r_esp, v); }
    /* 0078430e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00784314: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00784315: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0078431c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0078431f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00784322: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00784325: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00784328: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0078432b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0078432e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00784331: mov edx, dword ptr [ecx + 0x24] */ r_edx = R32((u32)(r_ecx+0x24u));
    /* 00784334: mov dword ptr [ecx], 0xb448d0 */ W32((u32)(r_ecx), 0xb448d0u);
    /* 0078433a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078433c: je 0x784355 */ if (fZ) goto L_00784355;
L_0078433e:; BB(0x0078433e);
    /* 0078433e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00784341: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00784345: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0078434a: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0078434e: mov dword ptr [ecx + 0x24], 0 */ W32((u32)(r_ecx+0x24u), 0x0u);
L_00784355:; BB(0x00784355);
    /* 00784355: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0078435c: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x784361u); f_008171e8();
    /* 00784361: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00784364: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0078436b: mov esp, ebp */ r_esp = r_ebp;
    /* 0078436d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0078436e: ret  */ FN_RET(0x00784304); r_esp += 4; return;
}

void f_00784370(void) /* sub_784370 */
{
    FN_ENTER(0x00784370);
    /* 00784370: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00784371: mov ebp, esp */ r_ebp = r_esp;
    /* 00784373: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00784375: push 0x8f463e */ { u32 v = 0x8f463eu; r_esp -= 4; W32(r_esp, v); }
    /* 0078437a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00784380: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00784381: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00784388: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0078438b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0078438e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00784391: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00784394: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00784397: movzx eax, byte ptr [ebp + 0xc] */ r_eax = (u32)R8((u32)(r_ebp+0xcu));
    /* 0078439b: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0078439e: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 007843a1: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 007843a4: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x7843a9u); f_008193cc();
    /* 007843a9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007843b0: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 007843b3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007843b6: mov dword ptr [edx], 0xb448d0 */ W32((u32)(r_edx), 0xb448d0u);
    /* 007843bc: mov esi, dword ptr [0x9f9878] */ r_esi = R32((u32)(0x9f9878u));
    /* 007843c2: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 007843c4: mov dword ptr [edx + 4], esi */ W32((u32)(r_edx+0x4u), r_esi);
    /* 007843c7: mov byte ptr [edx + 0x1c], al */ W8((u32)(r_edx+0x1cu), (u8)r_eax);
    /* 007843ca: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007843cc: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 007843cf: mov dword ptr [edx + 0x20], ecx */ W32((u32)(r_edx+0x20u), r_ecx);
    /* 007843d2: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x7843d7u); f_005caba4();
    /* 007843d7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007843d8: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 007843db: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007843dd: je 0x78441e */ if (fZ) goto L_0078441e;
L_007843df:; BB(0x007843df);
    /* 007843df: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 007843e6: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 007843ed: push dword ptr [0xaca328] */ { u32 v = R32((u32)(0xaca328u)); r_esp -= 4; W32(r_esp, v); }
    /* 007843f3: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 007843f6: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x7843fbu); f_008193cc();
    /* 007843fb: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 007843fe: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_00784405:; BB(0x00784405);
    /* 00784405: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00784408: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0078440b: mov dword ptr [eax + 0x24], edx */ W32((u32)(r_eax+0x24u), r_edx);
    /* 0078440e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00784411: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00784418: mov esp, ebp */ r_esp = r_ebp;
    /* 0078441a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0078441b: ret 8 */ FN_RET(0x00784370); r_esp += 12; return;
L_0078441e:; BB(0x0078441e);
    /* 0078441e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00784420: jmp 0x784405 */ goto L_00784405;
}

void f_00784424(void) /* sub_784424 */
{
    FN_ENTER(0x00784424);
    /* 00784424: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00784425: mov edi, ecx */ r_edi = r_ecx;
    /* 00784427: movzx eax, byte ptr [edi + 0x1c] */ r_eax = (u32)R8((u32)(r_edi+0x1cu));
    /* 0078442b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078442d: jne 0x784438 */ if (!fZ) goto L_00784438;
L_0078442f:; BB(0x0078442f);
    /* 0078442f: mov ecx, edi */ r_ecx = r_edi;
    /* 00784431: call 0x7844fc */ r_esp -= 4; W32(r_esp, 0x784436u); f_007844fc();
    /* 00784436: jmp 0x784444 */ goto L_00784444;
L_00784438:; BB(0x00784438);
    /* 00784438: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078443b: jne 0x784444 */ if (!fZ) goto L_00784444;
L_0078443d:; BB(0x0078443d);
    /* 0078443d: mov ecx, edi */ r_ecx = r_edi;
    /* 0078443f: call 0x78444c */ r_esp -= 4; W32(r_esp, 0x784444u); f_0078444c();
L_00784444:; BB(0x00784444);
    /* 00784444: add dword ptr [edi + 0x20], 1 */ { u32 ad = (u32)(r_edi+0x20u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00784448: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00784449: ret  */ FN_RET(0x00784424); r_esp += 4; return;
}

void f_0078444c(void) /* sub_78444C */
{
    FN_ENTER(0x0078444c);
    /* 0078444c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0078444d: mov ebp, esp */ r_ebp = r_esp;
    /* 0078444f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00784451: push 0x8f4664 */ { u32 v = 0x8f4664u; r_esp -= 4; W32(r_esp, v); }
    /* 00784456: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0078445c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0078445d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00784464: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00784467: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0078446a: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0078446d: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00784470: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00784473: mov eax, dword ptr [ecx + 0x20] */ r_eax = R32((u32)(r_ecx+0x20u));
    /* 00784476: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00784479: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078447b: jne 0x7844d7 */ if (!fZ) goto L_007844d7;
L_0078447d:; BB(0x0078447d);
    /* 0078447d: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 00784484: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 00784486: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x78448bu); f_005caba4();
    /* 0078448b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0078448c: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0078448f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00784491: je 0x7844bc */ if (fZ) goto L_007844bc;
L_00784493:; BB(0x00784493);
    /* 00784493: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 0078449a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007844a1: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007844a4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007844a6: mov ecx, eax */ r_ecx = r_eax;
    /* 007844a8: push 0x979bc4 */ { u32 v = 0x979bc4u; r_esp -= 4; W32(r_esp, v); }
    /* 007844ad: push dword ptr [edx + 0x24] */ { u32 v = R32((u32)(r_edx+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 007844b0: call 0x784b8c */ r_esp -= 4; W32(r_esp, 0x7844b5u); f_00784b8c();
    /* 007844b5: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_007844bc:; BB(0x007844bc);
    /* 007844bc: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 007844c3: push 0x96 */ { u32 v = 0x96u; r_esp -= 4; W32(r_esp, v); }
    /* 007844c8: push 0x979bd4 */ { u32 v = 0x979bd4u; r_esp -= 4; W32(r_esp, v); }
    /* 007844cd: call 0x6afb08 */ r_esp -= 4; W32(r_esp, 0x7844d2u); f_006afb08();
    /* 007844d2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007844d5: jmp 0x7844eb */ goto L_007844eb;
L_007844d7:; BB(0x007844d7);
    /* 007844d7: cmp eax, 0x1e */ {  u32 a = r_eax; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007844da: jne 0x7844eb */ if (!fZ) goto L_007844eb;
L_007844dc:; BB(0x007844dc);
    /* 007844dc: mov edx, ecx */ r_edx = r_ecx;
    /* 007844de: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 007844e2: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007844e7: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_007844eb:; BB(0x007844eb);
    /* 007844eb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007844ee: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007844f5: mov esp, ebp */ r_esp = r_ebp;
    /* 007844f7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007844f8: ret  */ FN_RET(0x0078444c); r_esp += 4; return;
}

void f_007844fc(void) /* sub_7844FC */
{
    FN_ENTER(0x007844fc);
    /* 007844fc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007844fd: mov ebp, esp */ r_ebp = r_esp;
    /* 007844ff: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00784501: push 0x8f4712 */ { u32 v = 0x8f4712u; r_esp -= 4; W32(r_esp, v); }
    /* 00784506: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0078450c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0078450d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00784514: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00784517: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0078451a: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0078451d: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00784520: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00784523: mov eax, dword ptr [ecx + 0x20] */ r_eax = R32((u32)(r_ecx+0x20u));
    /* 00784526: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00784529: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078452b: je 0x784760 */ if (fZ) goto L_00784760;
L_00784531:; BB(0x00784531);
    /* 00784531: cmp eax, 0x1e */ {  u32 a = r_eax; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00784534: je 0x784702 */ if (fZ) goto L_00784702;
L_0078453a:; BB(0x0078453a);
    /* 0078453a: cmp eax, 0x3c */ {  u32 a = r_eax; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078453d: je 0x7846a4 */ if (fZ) goto L_007846a4;
L_00784543:; BB(0x00784543);
    /* 00784543: cmp eax, 0x5a */ {  u32 a = r_eax; u32 b = 0x5au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00784546: je 0x784646 */ if (fZ) goto L_00784646;
L_0078454c:; BB(0x0078454c);
    /* 0078454c: cmp eax, 0x78 */ {  u32 a = r_eax; u32 b = 0x78u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078454f: je 0x7845eb */ if (fZ) goto L_007845eb;
L_00784555:; BB(0x00784555);
    /* 00784555: cmp eax, 0x96 */ {  u32 a = r_eax; u32 b = 0x96u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078455a: je 0x78459e */ if (fZ) goto L_0078459e;
L_0078455c:; BB(0x0078455c);
    /* 0078455c: cmp eax, 0xa0 */ {  u32 a = r_eax; u32 b = 0xa0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00784561: jne 0x784586 */ if (!fZ) goto L_00784586;
L_00784563:; BB(0x00784563);
    /* 00784563: push 0x48c0 */ { u32 v = 0x48c0u; r_esp -= 4; W32(r_esp, v); }
    /* 00784568: push 0x1f1 */ { u32 v = 0x1f1u; r_esp -= 4; W32(r_esp, v); }
    /* 0078456d: push 0x9f986c */ { u32 v = 0x9f986cu; r_esp -= 4; W32(r_esp, v); }
    /* 00784572: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x784577u); f_0050b7a4();
    /* 00784577: push 0x9695b4 */ { u32 v = 0x9695b4u; r_esp -= 4; W32(r_esp, v); }
    /* 0078457c: call 0x814f0c */ r_esp -= 4; W32(r_esp, 0x784581u); f_00814f0c();
    /* 00784581: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00784584: jmp 0x7845dd */ goto L_007845dd;
L_00784586:; BB(0x00784586);
    /* 00784586: cmp eax, 0xb4 */ {  u32 a = r_eax; u32 b = 0xb4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0078458b: jne 0x7845dd */ if (!fZ) goto L_007845dd;
L_0078458d:; BB(0x0078458d);
    /* 0078458d: mov edx, ecx */ r_edx = r_ecx;
    /* 0078458f: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00784593: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00784598: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0078459c: jmp 0x7845dd */ goto L_007845dd;
L_0078459e:; BB(0x0078459e);
    /* 0078459e: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
    /* 007845a5: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 007845a7: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x7845acu); f_005caba4();
    /* 007845ac: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007845ad: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 007845b0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007845b2: je 0x7845dd */ if (fZ) goto L_007845dd;
L_007845b4:; BB(0x007845b4);
    /* 007845b4: mov dword ptr [ebp - 0x40], 1 */ W32((u32)(r_ebp+0xffffffc0u), 0x1u);
    /* 007845bb: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007845c2: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007845c5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007845c7: mov ecx, eax */ r_ecx = r_eax;
    /* 007845c9: push 0x979bcc */ { u32 v = 0x979bccu; r_esp -= 4; W32(r_esp, v); }
    /* 007845ce: push dword ptr [edx + 0x24] */ { u32 v = R32((u32)(r_edx+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 007845d1: call 0x784b8c */ r_esp -= 4; W32(r_esp, 0x7845d6u); f_00784b8c();
    /* 007845d6: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
L_007845dd:; BB(0x007845dd);
    /* 007845dd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007845e0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007845e7: mov esp, ebp */ r_esp = r_ebp;
    /* 007845e9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007845ea: ret  */ FN_RET(0x007844fc); r_esp += 4; return;
L_007845eb:; BB(0x007845eb);
    /* 007845eb: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 007845f2: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 007845f4: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x7845f9u); f_005caba4();
    /* 007845f9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007845fa: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 007845fd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007845ff: je 0x78462b */ if (fZ) goto L_0078462b;
L_00784601:; BB(0x00784601);
    /* 00784601: mov dword ptr [ebp - 0x38], 1 */ W32((u32)(r_ebp+0xffffffc8u), 0x1u);
    /* 00784608: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0078460f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00784612: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00784615: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00784617: push 0x979bcc */ { u32 v = 0x979bccu; r_esp -= 4; W32(r_esp, v); }
    /* 0078461c: push dword ptr [eax + 0x24] */ { u32 v = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 0078461f: call 0x784834 */ r_esp -= 4; W32(r_esp, 0x784624u); f_00784834();
    /* 00784624: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_0078462b:; BB(0x0078462b);
    /* 0078462b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00784632: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00784634: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00784635: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00784636: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00784637: push 0x55d */ { u32 v = 0x55du; r_esp -= 4; W32(r_esp, v); }
    /* 0078463c: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x784641u); f_00814298();
    /* 00784641: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00784644: jmp 0x7845dd */ goto L_007845dd;
L_00784646:; BB(0x00784646);
    /* 00784646: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0078464d: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 0078464f: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x784654u); f_005caba4();
    /* 00784654: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00784655: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00784658: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078465a: je 0x784686 */ if (fZ) goto L_00784686;
L_0078465c:; BB(0x0078465c);
    /* 0078465c: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 00784663: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0078466a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0078466d: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00784670: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00784672: push 0x979bcc */ { u32 v = 0x979bccu; r_esp -= 4; W32(r_esp, v); }
    /* 00784677: push dword ptr [eax + 0x24] */ { u32 v = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 0078467a: call 0x784834 */ r_esp -= 4; W32(r_esp, 0x78467fu); f_00784834();
    /* 0078467f: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_00784686:; BB(0x00784686);
    /* 00784686: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0078468d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0078468f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00784690: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00784691: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00784692: push 0x55d */ { u32 v = 0x55du; r_esp -= 4; W32(r_esp, v); }
    /* 00784697: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x78469cu); f_00814298();
    /* 0078469c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0078469f: jmp 0x7845dd */ goto L_007845dd;
L_007846a4:; BB(0x007846a4);
    /* 007846a4: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 007846ab: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 007846ad: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x7846b2u); f_005caba4();
    /* 007846b2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007846b3: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 007846b6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007846b8: je 0x7846e4 */ if (fZ) goto L_007846e4;
L_007846ba:; BB(0x007846ba);
    /* 007846ba: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 007846c1: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 007846c8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007846cb: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 007846ce: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 007846d0: push 0x979bcc */ { u32 v = 0x979bccu; r_esp -= 4; W32(r_esp, v); }
    /* 007846d5: push dword ptr [eax + 0x24] */ { u32 v = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 007846d8: call 0x784834 */ r_esp -= 4; W32(r_esp, 0x7846ddu); f_00784834();
    /* 007846dd: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_007846e4:; BB(0x007846e4);
    /* 007846e4: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 007846eb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007846ed: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007846ee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007846ef: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007846f0: push 0x55d */ { u32 v = 0x55du; r_esp -= 4; W32(r_esp, v); }
    /* 007846f5: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x7846fau); f_00814298();
    /* 007846fa: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007846fd: jmp 0x7845dd */ goto L_007845dd;
L_00784702:; BB(0x00784702);
    /* 00784702: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 00784709: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 0078470b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x784710u); f_005caba4();
    /* 00784710: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00784711: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00784714: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00784716: je 0x784742 */ if (fZ) goto L_00784742;
L_00784718:; BB(0x00784718);
    /* 00784718: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 0078471f: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 00784726: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00784729: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0078472c: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0078472e: push 0x979bcc */ { u32 v = 0x979bccu; r_esp -= 4; W32(r_esp, v); }
    /* 00784733: push dword ptr [eax + 0x24] */ { u32 v = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 00784736: call 0x784834 */ r_esp -= 4; W32(r_esp, 0x78473bu); f_00784834();
    /* 0078473b: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_00784742:; BB(0x00784742);
    /* 00784742: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00784749: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0078474b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0078474c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0078474d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0078474e: push 0x55d */ { u32 v = 0x55du; r_esp -= 4; W32(r_esp, v); }
    /* 00784753: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x784758u); f_00814298();
    /* 00784758: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0078475b: jmp 0x7845dd */ goto L_007845dd;
L_00784760:; BB(0x00784760);
    /* 00784760: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00784767: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 00784769: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x78476eu); f_005caba4();
    /* 0078476e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0078476f: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00784772: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00784774: je 0x7847a0 */ if (fZ) goto L_007847a0;
L_00784776:; BB(0x00784776);
    /* 00784776: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0078477d: mov dword ptr [ebp - 4], 5 */ W32((u32)(r_ebp+0xfffffffcu), 0x5u);
    /* 00784784: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00784787: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0078478a: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0078478c: push 0x979bcc */ { u32 v = 0x979bccu; r_esp -= 4; W32(r_esp, v); }
    /* 00784791: push dword ptr [eax + 0x24] */ { u32 v = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 00784794: call 0x784834 */ r_esp -= 4; W32(r_esp, 0x784799u); f_00784834();
    /* 00784799: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_007847a0:; BB(0x007847a0);
    /* 007847a0: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 007847a7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007847a9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007847aa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007847ab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007847ac: push 0x55d */ { u32 v = 0x55du; r_esp -= 4; W32(r_esp, v); }
    /* 007847b1: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x7847b6u); f_00814298();
    /* 007847b6: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007847b9: jmp 0x7845dd */ goto L_007845dd;
}

void f_00784570(void)
{
    FN_ENTER(0x00784570);
    /* 00784570: lahf  */ r_eax = (r_eax & 0xffff00ffu) | ((u32)((fS << 7) | (fZ << 6) | (fA << 4) | (fP << 2) | 2 | fC) << 8);
    /* 00784571: add al, ch */ {  u32 a = (u8)r_eax; u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00784573: sub eax, 0x68ffd872 */ {  u32 a = r_eax; u32 b = 0x68ffd872u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00784578: mov ah, 0x95 */ r_eax = (r_eax & 0xffff00ffu) | (((0x95u) & 0xffu) << 8);
    /* 0078457a: xchg esi, eax */ { u32 x = r_esi; u32 y = r_eax; r_esi = y; r_eax = x; }
    /* 0078457b: add al, ch */ {  u32 a = (u8)r_eax; u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0078457d: mov ecx, dword ptr [ecx] */ r_ecx = R32((u32)(r_ecx));
    /* 0078457f: or dword ptr [eax], eax */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 00784581: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00784584: jmp 0x7845dd */ goto L_007845dd;
L_007845dd:; BB(0x007845dd);
    /* 007845dd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007845e0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007845e7: mov esp, ebp */ r_esp = r_ebp;
    /* 007845e9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007845ea: ret  */ FN_RET(0x00784570); r_esp += 4; return;
}

void f_00784574(void)
{
    FN_ENTER(0x00784574);
    goto L_00784574;
L_0078454e:; BB(0x0078454e);
    /* 0078454e: js 0x78455f */ if (fS) goto L_0078455f;
L_00784550:; BB(0x00784550);
    /* 00784550: test byte ptr [esi + 0x3d000000], dl */ {  u32 a = R8((u32)(r_esi+0x3d000000u)); u32 b = (u8)r_edx; u32 r = (a & b) & 0xffu;   }
    /* 00784556: xchg esi, eax */ { u32 x = r_esi; u32 y = r_eax; r_esi = y; r_eax = x; }
    /* 00784557: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00784559: add byte ptr [edx + eax*2 + 0x3d], dh */ { u32 ad = (u32)(r_edx+r_eax*2+0x3du);  u32 a = R8(ad); u32 b = (u8)(r_edx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0078455d: mov al, byte ptr [0x75000000] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(0x75000000u))) & 0xffu);
L_0078455f:; BB(0x0078455f);
    /* 0078455f: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r); fZ = (r == 0); }
    /* 00784561: jne 0x784586 */ if (!fZ) goto L_00784586;
    /* 00784562: and ebp, dword ptr [eax - 0x40] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_eax+0xffffffc0u)); u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
L_00784563:; BB(0x00784563);
    /* 00784563: push 0x48c0 */ { u32 v = 0x48c0u; r_esp -= 4; W32(r_esp, v); }
    /* 00784565: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00784566: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00784568: push 0x1f1 */ { u32 v = 0x1f1u; r_esp -= 4; W32(r_esp, v); }
    /* 0078456d: push 0x9f986c */ { u32 v = 0x9f986cu; r_esp -= 4; W32(r_esp, v); }
    /* 00784572: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x784577u); f_0050b7a4();
L_00784574:; BB(0x00784574);
    /* 00784574: jb 0x78454e */ if (fC) goto L_0078454e;
L_00784576:; BB(0x00784576);
    /* 00784576: jmp ptr [eax - 0x4c] */ { u32 t = R32((u32)(r_eax+0xffffffb4u)); jmp_ind(t); return; }
    /* 00784577: push 0x9695b4 */ { u32 v = 0x9695b4u; r_esp -= 4; W32(r_esp, v); }
    /* 0078457c: call 0x814f0c */ r_esp -= 4; W32(r_esp, 0x784581u); f_00814f0c();
    /* 00784581: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00784584: jmp 0x7845dd */ goto L_007845dd;
L_00784586:; BB(0x00784586);
    /* 00784586: cmp eax, 0xb4 */ {  u32 a = r_eax; u32 b = 0xb4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0078458b: jne 0x7845dd */ if (!fZ) goto L_007845dd;
L_0078458d:; BB(0x0078458d);
    /* 0078458d: mov edx, ecx */ r_edx = r_ecx;
    /* 0078458f: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00784593: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00784598: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0078459c: jmp 0x7845dd */ goto L_007845dd;
L_007845dd:; BB(0x007845dd);
    /* 007845dd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007845e0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007845e7: mov esp, ebp */ r_esp = r_ebp;
    /* 007845e9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007845ea: ret  */ FN_RET(0x00784574); r_esp += 4; return;
}

void f_00784650(void)
{
    FN_ENTER(0x00784650);
    goto L_00784650;
L_007845dd:; BB(0x007845dd);
    /* 007845dd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007845e0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007845e7: mov esp, ebp */ r_esp = r_ebp;
    /* 007845e9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007845ea: ret  */ FN_RET(0x00784650); r_esp += 4; return;
L_00784650:; BB(0x00784650);
    /* 00784650: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00784651: in al, 0xff */ UNSUP(0x00784651, "in al, 0xff");
    /* 00784654: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00784655: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00784658: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078465a: je 0x784686 */ if (fZ) goto L_00784686;
L_0078465c:; BB(0x0078465c);
    /* 0078465c: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 00784663: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0078466a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0078466d: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00784670: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00784672: push 0x979bcc */ { u32 v = 0x979bccu; r_esp -= 4; W32(r_esp, v); }
    /* 00784677: push dword ptr [eax + 0x24] */ { u32 v = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 0078467a: call 0x784834 */ r_esp -= 4; W32(r_esp, 0x78467fu); f_00784834();
    /* 0078467f: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_00784686:; BB(0x00784686);
    /* 00784686: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0078468d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0078468f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00784690: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00784691: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00784692: push 0x55d */ { u32 v = 0x55du; r_esp -= 4; W32(r_esp, v); }
    /* 00784697: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x78469cu); f_00814298();
    /* 0078469c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0078469f: jmp 0x7845dd */ goto L_007845dd;
}

void f_007847c0(void) /* sub_7847C0 */
{
    FN_ENTER(0x007847c0);
    /* 007847c0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007847c1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 007847c3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007847c5: call 0x7847e4 */ r_esp -= 4; W32(r_esp, 0x7847cau); f_007847e4();
    /* 007847ca: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 007847ce: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007847d0: jne 0x7847d6 */ if (!fZ) goto L_007847d6;
L_007847d2:; BB(0x007847d2);
    /* 007847d2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007847d3: ret 4 */ FN_RET(0x007847c0); r_esp += 8; return;
L_007847d6:; BB(0x007847d6);
    /* 007847d6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007847d7: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x7847dcu); f_005c2f74();
    /* 007847dc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007847dd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007847de: ret 4 */ FN_RET(0x007847c0); r_esp += 8; return;
}

void f_007847e4(void) /* sub_7847E4 */
{
    FN_ENTER(0x007847e4);
    /* 007847e4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007847e5: mov ebp, esp */ r_ebp = r_esp;
    /* 007847e7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007847e9: push 0x8f472c */ { u32 v = 0x8f472cu; r_esp -= 4; W32(r_esp, v); }
    /* 007847ee: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 007847f4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007847f5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 007847fc: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007847ff: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00784802: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00784805: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00784808: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0078480b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0078480e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00784811: mov dword ptr [ecx], 0xb44908 */ W32((u32)(r_ecx), 0xb44908u);
    /* 00784817: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0078481e: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x784823u); f_008171e8();
    /* 00784823: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00784826: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0078482d: mov esp, ebp */ r_esp = r_ebp;
    /* 0078482f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00784830: ret  */ FN_RET(0x007847e4); r_esp += 4; return;
}

void f_00784834(void) /* sub_784834 */
{
    FN_ENTER(0x00784834);
    /* 00784834: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00784835: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00784836: mov edi, ecx */ r_edi = r_ecx;
    /* 00784838: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 0078483c: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00784840: mov ecx, edi */ r_ecx = r_edi;
    /* 00784842: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x784847u); f_008193cc();
    /* 00784847: mov dword ptr [edi], 0xb44908 */ W32((u32)(r_edi), 0xb44908u);
    /* 0078484d: mov edx, dword ptr [0x9f987c] */ r_edx = R32((u32)(0x9f987cu));
    /* 00784853: mov dword ptr [edi + 4], edx */ W32((u32)(r_edi+0x4u), r_edx);
    /* 00784856: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00784859: mov dword ptr [edi + 0x1c], eax */ W32((u32)(r_edi+0x1cu), r_eax);
    /* 0078485c: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00784860: mov ebp, dword ptr [ebp + 4] */ r_ebp = R32((u32)(r_ebp+0x4u));
    /* 00784863: mov dword ptr [edi + 0x20], ebp */ W32((u32)(r_edi+0x20u), r_ebp);
    /* 00784866: mov dword ptr [edi + 0x24], eax */ W32((u32)(r_edi+0x24u), r_eax);
    /* 00784869: mov eax, edi */ r_eax = r_edi;
    /* 0078486b: mov dword ptr [edi + 0x28], 0 */ W32((u32)(r_edi+0x28u), 0x0u);
    /* 00784872: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00784873: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00784874: ret 0xc */ FN_RET(0x00784834); r_esp += 16; return;
}

void f_00784878(void) /* sub_784878 */
{
    FN_ENTER(0x00784878);
    /* 00784878: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00784879: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0078487c: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0078487e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00784880: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00784883: push dword ptr [ebp + 0x24] */ { u32 v = R32((u32)(r_ebp+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 00784886: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00784887: call 0x7848e4 */ r_esp -= 4; W32(r_esp, 0x78488cu); f_007848e4();
    /* 0078488c: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x784891u); f_0082dbac();
    /* 00784891: call 0x7a902c */ r_esp -= 4; W32(r_esp, 0x784896u); f_007a902c();
    /* 00784896: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0078489b: call 0x82bb30 */ r_esp -= 4; W32(r_esp, 0x7848a0u); f_0082bb30();
    /* 007848a0: mov ecx, dword ptr [0xa983d8] */ r_ecx = R32((u32)(0xa983d8u));
    /* 007848a6: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x7848abu); f_00829cc8();
    /* 007848ab: mov ecx, 8 */ r_ecx = 0x8u;
    /* 007848b0: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 007848b5: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x7848bau); f_0082bb60();
    /* 007848ba: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 007848bd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007848be: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007848c0: call 0x78492c */ r_esp -= 4; W32(r_esp, 0x7848c5u); f_0078492c();
    /* 007848c5: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 007848c8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007848c9: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007848cb: call 0x784a78 */ r_esp -= 4; W32(r_esp, 0x7848d0u); f_00784a78();
    /* 007848d0: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x7848d5u); f_004ac444();
    /* 007848d5: call 0x7a9044 */ r_esp -= 4; W32(r_esp, 0x7848dau); f_007a9044();
    /* 007848da: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x7848dfu); f_0082dab0();
    /* 007848df: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007848e2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007848e3: ret  */ FN_RET(0x00784878); r_esp += 4; return;
}

void f_007848e4(void) /* sub_7848E4 */
{
    FN_ENTER(0x007848e4);
    /* 007848e4: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 007848e8: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 007848ec: fld dword ptr [eax*8 + 0x979be0] */ FPUSH(R_F32((u32)(r_eax*8+0x979be0u)));
    /* 007848f3: fld dword ptr [eax*8 + 0x979be4] */ FPUSH(R_F32((u32)(r_eax*8+0x979be4u)));
    /* 007848fa: fld dword ptr [0x979c60] */ FPUSH(R_F32((u32)(0x979c60u)));
    /* 00784900: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 00784902: fld dword ptr [0x979c5c] */ FPUSH(R_F32((u32)(0x979c5cu)));
    /* 00784908: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0078490a: fld dword ptr [0x979c58] */ FPUSH(R_F32((u32)(0x979c58u)));
    /* 00784910: fdiv st(4), st(0) */ ST(4) = ST(4) / ST(0);
    /* 00784912: fdiv st(3), st(0) */ ST(3) = ST(3) / ST(0);
    /* 00784914: fdiv st(2), st(0) */ ST(2) = ST(2) / ST(0);
    /* 00784916: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 00784918: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0078491a: fstp dword ptr [edx + 0x10] */ W_F32((u32)(r_edx+0x10u), ST(0)); FPOP();
    /* 0078491d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0078491f: fstp dword ptr [edx + 0x14] */ W_F32((u32)(r_edx+0x14u), ST(0)); FPOP();
    /* 00784922: fstp dword ptr [edx + 0x18] */ W_F32((u32)(r_edx+0x18u), ST(0)); FPOP();
    /* 00784925: fstp dword ptr [edx + 0x1c] */ W_F32((u32)(r_edx+0x1cu), ST(0)); FPOP();
    /* 00784928: ret 8 */ FN_RET(0x007848e4); r_esp += 12; return;
}

void f_0078492c(void) /* sub_78492C */
{
    FN_ENTER(0x0078492c);
    /* 0078492c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0078492d: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00784930: mov esi, ecx */ r_esi = r_ecx;
    /* 00784932: call 0x7bb6d0 */ r_esp -= 4; W32(r_esp, 0x784937u); f_007bb6d0();
    /* 00784937: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00784938: call 0x7199e0 */ r_esp -= 4; W32(r_esp, 0x78493du); f_007199e0();
    /* 0078493d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0078493e: fld dword ptr [0x979c54] */ FPUSH(R_F32((u32)(0x979c54u)));
    /* 00784944: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 00784946: mov ecx, dword ptr [esi + 0x28] */ r_ecx = R32((u32)(r_esi+0x28u));
    /* 00784949: cmp ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0078494c: jge 0x784984 */ if ((fS==fO)) goto L_00784984;
L_0078494e:; BB(0x0078494e);
    /* 0078494e: fld dword ptr [0x979c44] */ FPUSH(R_F32((u32)(0x979c44u)));
    /* 00784954: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 00784957: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 0078495a: fdiv dword ptr [0x979c4c] */ ST(0) = ST(0) / R_F32((u32)(0x979c4cu));
    /* 00784960: fadd dword ptr [0x979c48] */ ST(0) = ST(0) + R_F32((u32)(0x979c48u));
    /* 00784966: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 0078496b: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0078496d: sar ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00784970: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 00784972: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00784974: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00784978: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0078497c: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0078497e: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00784980: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00784982: jmp 0x7849aa */ goto L_007849aa;
L_00784984:; BB(0x00784984);
    /* 00784984: fld dword ptr [0x979c50] */ FPUSH(R_F32((u32)(0x979c50u)));
    /* 0078498a: cmp ecx, 0x19 */ {  u32 a = r_ecx; u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0078498d: jge 0x784997 */ if ((fS==fO)) goto L_00784997;
L_0078498f:; BB(0x0078498f);
    /* 0078498f: fld dword ptr [0x979c50] */ FPUSH(R_F32((u32)(0x979c50u)));
    /* 00784995: jmp 0x7849aa */ goto L_007849aa;
L_00784997:; BB(0x00784997);
    /* 00784997: add ecx, -0x19 */ {  u32 a = r_ecx; u32 b = 0xffffffe7u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0078499a: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 0078499e: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 007849a2: fdiv dword ptr [0x979c4c] */ ST(0) = ST(0) / R_F32((u32)(0x979c4cu));
    /* 007849a8: fadd st(1) */ ST(0) = ST(0) + ST(1);
L_007849aa:; BB(0x007849aa);
    /* 007849aa: add esp, -0x14 */ {  u32 a = r_esp; u32 b = 0xffffffecu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007849ad: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 007849b1: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007849b3: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 007849b7: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 007849bb: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 007849bf: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 007849c2: lea edx, [esi + 0x1c] */ r_edx = (u32)(r_esi+0x1cu);
    /* 007849c5: mov ecx, esi */ r_ecx = r_esi;
    /* 007849c7: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 007849cb: call 0x7849d8 */ r_esp -= 4; W32(r_esp, 0x7849d0u); f_007849d8();
    /* 007849d0: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007849d3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007849d4: ret 4 */ FN_RET(0x0078492c); r_esp += 8; return;
}

void f_007849d8(void) /* sub_7849D8 */
{
    FN_ENTER(0x007849d8);
    /* 007849d8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007849d9: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007849dc: mov esi, dword ptr [esp + 0x20] */ r_esi = R32((u32)(r_esp+0x20u));
    /* 007849e0: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 007849e4: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 007849e8: fmul qword ptr [0x979c10] */ ST(0) = ST(0) * R_F64((u32)(0x979c10u));
    /* 007849ee: fld dword ptr [0x979c40] */ FPUSH(R_F32((u32)(0x979c40u)));
    /* 007849f4: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 007849f6: fadd dword ptr [edx] */ ST(0) = ST(0) + R_F32((u32)(r_edx));
    /* 007849f8: fld dword ptr [0x979c3c] */ FPUSH(R_F32((u32)(0x979c3cu)));
    /* 007849fe: fld dword ptr [0x979c38] */ FPUSH(R_F32((u32)(0x979c38u)));
    /* 00784a04: fld dword ptr [0x979c30] */ FPUSH(R_F32((u32)(0x979c30u)));
    /* 00784a0a: fmul dword ptr [esp + 0x30] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x30u));
    /* 00784a0e: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00784a10: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 00784a12: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00784a14: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 00784a16: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00784a18: fmul dword ptr [0x979c34] */ ST(0) = ST(0) * R_F32((u32)(0x979c34u));
    /* 00784a1e: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00784a20: fstp dword ptr [esi] */ W_F32((u32)(r_esi), ST(0)); FPOP();
    /* 00784a22: fadd dword ptr [edx + 4] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x4u));
    /* 00784a25: fstp dword ptr [esi + 4] */ W_F32((u32)(r_esi+0x4u), ST(0)); FPOP();
    /* 00784a28: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00784a2a: fadd dword ptr [edx] */ ST(0) = ST(0) + R_F32((u32)(r_edx));
    /* 00784a2c: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00784a2e: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00784a31: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00784a35: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00784a3a: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00784a3e: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00784a42: fistp qword ptr [esp + 0x10] */ W64((u32)(r_esp+0x10u), (u64)fx_int64(ST(0))); FPOP();
    /* 00784a46: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00784a49: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 00784a4d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00784a4f: fstp dword ptr [esi + 8] */ W_F32((u32)(r_esi+0x8u), ST(0)); FPOP();
    /* 00784a52: fadd dword ptr [edx + 4] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x4u));
    /* 00784a55: fstp dword ptr [esi + 0xc] */ W_F32((u32)(r_esi+0xcu), ST(0)); FPOP();
    /* 00784a58: or ecx, 0xffffff */ {  u32 a = r_ecx; u32 b = 0xffffffu; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00784a5e: call 0x82b438 */ r_esp -= 4; W32(r_esp, 0x784a63u); f_0082b438();
    /* 00784a63: push dword ptr [esp + 0x28] */ { u32 v = R32((u32)(r_esp+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 00784a67: mov ecx, esi */ r_ecx = r_esi;
    /* 00784a69: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x784a6eu); f_0082b440();
    /* 00784a6e: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00784a71: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00784a72: ret 0x14 */ FN_RET(0x007849d8); r_esp += 24; return;
}

void f_00784a78(void) /* sub_784A78 */
{
    FN_ENTER(0x00784a78);
    /* 00784a78: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00784a79: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00784a7c: mov edi, ecx */ r_edi = r_ecx;
    /* 00784a7e: mov eax, dword ptr [edi + 0x28] */ r_eax = R32((u32)(r_edi+0x28u));
    /* 00784a81: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00784a84: jl 0x784b10 */ if ((fS!=fO)) goto L_00784b10;
L_00784a8a:; BB(0x00784a8a);
    /* 00784a8a: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00784a8d: jl 0x784a96 */ if ((fS!=fO)) goto L_00784a96;
L_00784a8f:; BB(0x00784a8f);
    /* 00784a8f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00784a92: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00784a93: ret 4 */ FN_RET(0x00784a78); r_esp += 8; return;
L_00784a96:; BB(0x00784a96);
    /* 00784a96: call 0x7bb6d0 */ r_esp -= 4; W32(r_esp, 0x784a9bu); f_007bb6d0();
    /* 00784a9b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00784a9c: call 0x7199e0 */ r_esp -= 4; W32(r_esp, 0x784aa1u); f_007199e0();
    /* 00784aa1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00784aa2: fld dword ptr [0x979c2c] */ FPUSH(R_F32((u32)(0x979c2cu)));
    /* 00784aa8: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 00784aaa: fld dword ptr [0x979c20] */ FPUSH(R_F32((u32)(0x979c20u)));
    /* 00784ab0: mov edx, dword ptr [edi + 0x28] */ r_edx = R32((u32)(r_edi+0x28u));
    /* 00784ab3: lea eax, [edx - 5] */ r_eax = (u32)(r_edx+0xfffffffbu);
    /* 00784ab6: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00784ab9: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00784abc: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 00784abf: fdiv dword ptr [0x979c24] */ ST(0) = ST(0) / R_F32((u32)(0x979c24u));
    /* 00784ac5: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00784ac7: fadd dword ptr [0x979c28] */ ST(0) = ST(0) + R_F32((u32)(0x979c28u));
    /* 00784acd: jl 0x784ae8 */ if ((fS!=fO)) goto L_00784ae8;
L_00784acf:; BB(0x00784acf);
    /* 00784acf: add edx, -0xa */ {  u32 a = r_edx; u32 b = 0xfffffff6u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00784ad2: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00784ad6: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00784ada: fdiv dword ptr [0x979c1c] */ ST(0) = ST(0) / R_F32((u32)(0x979c1cu));
    /* 00784ae0: fmul dword ptr [0x979c18] */ ST(0) = ST(0) * R_F32((u32)(0x979c18u));
    /* 00784ae6: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
L_00784ae8:; BB(0x00784ae8);
    /* 00784ae8: add esp, -0x14 */ {  u32 a = r_esp; u32 b = 0xffffffecu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00784aeb: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 00784aef: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00784af1: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00784af5: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00784af7: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00784afb: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00784aff: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00784b02: lea edx, [edi + 0x1c] */ r_edx = (u32)(r_edi+0x1cu);
    /* 00784b05: mov ecx, edi */ r_ecx = r_edi;
    /* 00784b07: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00784b0b: call 0x7849d8 */ r_esp -= 4; W32(r_esp, 0x784b10u); f_007849d8();
L_00784b10:; BB(0x00784b10);
    /* 00784b10: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00784b13: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00784b14: ret 4 */ FN_RET(0x00784a78); r_esp += 8; return;
}

void f_00784b18(void) /* sub_784B18 */
{
    FN_ENTER(0x00784b18);
    /* 00784b18: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00784b19: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00784b1b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00784b1d: call 0x784b3c */ r_esp -= 4; W32(r_esp, 0x784b22u); f_00784b3c();
    /* 00784b22: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00784b26: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00784b28: jne 0x784b2e */ if (!fZ) goto L_00784b2e;
L_00784b2a:; BB(0x00784b2a);
    /* 00784b2a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00784b2b: ret 4 */ FN_RET(0x00784b18); r_esp += 8; return;
L_00784b2e:; BB(0x00784b2e);
    /* 00784b2e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00784b2f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x784b34u); f_005c2f74();
    /* 00784b34: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00784b35: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00784b36: ret 4 */ FN_RET(0x00784b18); r_esp += 8; return;
}

void f_00784b3c(void) /* sub_784B3C */
{
    FN_ENTER(0x00784b3c);
    /* 00784b3c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00784b3d: mov ebp, esp */ r_ebp = r_esp;
    /* 00784b3f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00784b41: push 0x8f4748 */ { u32 v = 0x8f4748u; r_esp -= 4; W32(r_esp, v); }
    /* 00784b46: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00784b4c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00784b4d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00784b54: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00784b57: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00784b5a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00784b5d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00784b60: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00784b63: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00784b66: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00784b69: mov dword ptr [ecx], 0xb44940 */ W32((u32)(r_ecx), 0xb44940u);
    /* 00784b6f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00784b76: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x784b7bu); f_008171e8();
    /* 00784b7b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00784b7e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00784b85: mov esp, ebp */ r_esp = r_ebp;
    /* 00784b87: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00784b88: ret  */ FN_RET(0x00784b3c); r_esp += 4; return;
}

void f_00784b65(void)
{
    FN_ENTER(0x00784b65);
    goto L_00784b65;
L_00784af2:; BB(0x00784af2);
    /* 00784af2: pop esp */ { u32 v = R32(r_esp); r_esp += 4; r_esp = v; }
    /* 00784af3: and al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00784af5: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00784af7: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00784afb: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00784aff: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00784b02: lea edx, [edi + 0x1c] */ r_edx = (u32)(r_edi+0x1cu);
    /* 00784b05: mov ecx, edi */ r_ecx = r_edi;
    /* 00784b07: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00784b0b: call 0x7849d8 */ r_esp -= 4; W32(r_esp, 0x784b10u); f_007849d8();
    /* 00784b10: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00784b13: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00784b14: ret 4 */ FN_RET(0x00784b65); r_esp += 8; return;
L_00784b31:; BB(0x00784b31);
    /* 00784b31: in al, 0xe3 */ UNSUP(0x00784b31, "in al, 0xe3");
    /* 00784b33: call ptr [ecx + 0x5b] */ { u32 t = R32((u32)(r_ecx+0x5bu)); r_esp -= 4; W32(r_esp, 0x784b36u); call_ind(t); }
    /* 00784b36: ret 4 */ FN_RET(0x00784b65); r_esp += 8; return;
L_00784b65:; BB(0x00784b65);
    /* 00784b65: loopne 0x784af2 */ r_ecx--; if (r_ecx && !fZ) goto L_00784af2;
    /* 00784b67: dec ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); }
    /* 00784b68: loopne 0x784b31 */ r_ecx--; if (r_ecx && !fZ) goto L_00784b31;
    /* 00784b6a: add dword ptr [eax + 0x49], eax */ { u32 ad = (u32)(r_eax+0x49u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00784b6d: mov ah, 0 */ r_eax = (r_eax & 0xffff00ffu) | (((0x0u) & 0xffu) << 8);
    /* 00784b6f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00784b76: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x784b7bu); f_008171e8();
    /* 00784b7b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00784b7e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00784b85: mov esp, ebp */ r_esp = r_ebp;
    /* 00784b87: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00784b88: ret  */ FN_RET(0x00784b65); r_esp += 4; return;
}

void f_00784b8c(void) /* sub_784B8C */
{
    FN_ENTER(0x00784b8c);
    /* 00784b8c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00784b8d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00784b8e: mov edi, ecx */ r_edi = r_ecx;
    /* 00784b90: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 00784b94: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00784b98: mov ecx, edi */ r_ecx = r_edi;
    /* 00784b9a: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x784b9fu); f_008193cc();
    /* 00784b9f: mov dword ptr [edi], 0xb44940 */ W32((u32)(r_edi), 0xb44940u);
    /* 00784ba5: mov edx, dword ptr [0x9f9880] */ r_edx = R32((u32)(0x9f9880u));
    /* 00784bab: mov dword ptr [edi + 4], edx */ W32((u32)(r_edi+0x4u), r_edx);
    /* 00784bae: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00784bb1: mov dword ptr [edi + 0x1c], eax */ W32((u32)(r_edi+0x1cu), r_eax);
    /* 00784bb4: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00784bb8: mov ebp, dword ptr [ebp + 4] */ r_ebp = R32((u32)(r_ebp+0x4u));
    /* 00784bbb: mov dword ptr [edi + 0x20], ebp */ W32((u32)(r_edi+0x20u), r_ebp);
    /* 00784bbe: mov dword ptr [edi + 0x24], eax */ W32((u32)(r_edi+0x24u), r_eax);
    /* 00784bc1: mov eax, edi */ r_eax = r_edi;
    /* 00784bc3: mov dword ptr [edi + 0x28], 0 */ W32((u32)(r_edi+0x28u), 0x0u);
    /* 00784bca: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00784bcb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00784bcc: ret 0xc */ FN_RET(0x00784b8c); r_esp += 16; return;
}

void f_00784bd0(void) /* sub_784BD0 */
{
    FN_ENTER(0x00784bd0);
    /* 00784bd0: mov eax, dword ptr [ecx + 0x28] */ r_eax = R32((u32)(r_ecx+0x28u));
    /* 00784bd3: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00784bd6: mov dword ptr [ecx + 0x28], eax */ W32((u32)(r_ecx+0x28u), r_eax);
    /* 00784bd9: cmp eax, 0x1e */ {  u32 a = r_eax; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00784bdc: jl 0x784beb */ if ((fS!=fO)) goto L_00784beb;
L_00784bde:; BB(0x00784bde);
    /* 00784bde: movzx eax, word ptr [ecx + 8] */ r_eax = (u32)R16((u32)(r_ecx+0x8u));
    /* 00784be2: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00784be7: mov word ptr [ecx + 8], ax */ W16((u32)(r_ecx+0x8u), (u16)r_eax);
L_00784beb:; BB(0x00784beb);
    /* 00784beb: ret  */ FN_RET(0x00784bd0); r_esp += 4; return;
}

void f_00784bec(void) /* sub_784BEC */
{
    FN_ENTER(0x00784bec);
    /* 00784bec: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00784bed: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00784bee: sub esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00784bf1: mov esi, ecx */ r_esi = r_ecx;
    /* 00784bf3: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 00784bf7: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00784bfa: push dword ptr [esi + 0x28] */ { u32 v = R32((u32)(r_esi+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 00784bfd: mov ecx, esi */ r_ecx = r_esi;
    /* 00784bff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00784c00: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00784c01: call 0x784e50 */ r_esp -= 4; W32(r_esp, 0x784c06u); f_00784e50();
    /* 00784c06: fld dword ptr [0x979d1c] */ FPUSH(R_F32((u32)(0x979d1cu)));
    /* 00784c0c: fmul dword ptr [esp] */ ST(0) = ST(0) * R_F32((u32)(r_esp));
    /* 00784c0f: fnstcw word ptr [esp + 0x48] */ W16((u32)(r_esp+0x48u), fcw);
    /* 00784c13: movzx eax, word ptr [esp + 0x48] */ r_eax = (u32)R16((u32)(r_esp+0x48u));
    /* 00784c18: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00784c1d: mov dword ptr [esp + 0x50], eax */ W32((u32)(r_esp+0x50u), r_eax);
    /* 00784c21: fldcw word ptr [esp + 0x50] */ fcw = R16((u32)(r_esp+0x50u));
    /* 00784c25: fistp qword ptr [esp + 0x58] */ W64((u32)(r_esp+0x58u), (u64)fx_int64(ST(0))); FPOP();
    /* 00784c29: fldcw word ptr [esp + 0x48] */ fcw = R16((u32)(r_esp+0x48u));
    /* 00784c2d: mov ebp, dword ptr [esp + 0x58] */ r_ebp = R32((u32)(r_esp+0x58u));
    /* 00784c31: or ebp, 0xffffff */ {  u32 a = r_ebp; u32 b = 0xffffffu; u32 r = (a | b) & 0xffffffffu; r_ebp = r;  }
    /* 00784c37: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x784c3cu); f_0082dbac();
    /* 00784c3c: call 0x7a902c */ r_esp -= 4; W32(r_esp, 0x784c41u); f_007a902c();
    /* 00784c41: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00784c46: call 0x82bb30 */ r_esp -= 4; W32(r_esp, 0x784c4bu); f_0082bb30();
    /* 00784c4b: mov ecx, dword ptr [0xa983d8] */ r_ecx = R32((u32)(0xa983d8u));
    /* 00784c51: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x784c56u); f_00829cc8();
    /* 00784c56: mov ecx, 8 */ r_ecx = 0x8u;
    /* 00784c5b: mov edx, ebp */ r_edx = r_ebp;
    /* 00784c5d: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x784c62u); f_0082bb60();
    /* 00784c62: mov eax, dword ptr [esi + 0x24] */ r_eax = R32((u32)(r_esi+0x24u));
    /* 00784c65: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00784c67: jne 0x784d48 */ if (!fZ) goto L_00784d48;
L_00784c6d:; BB(0x00784c6d);
    /* 00784c6d: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00784c71: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 00784c75: call 0x7bb6d0 */ r_esp -= 4; W32(r_esp, 0x784c7au); f_007bb6d0();
    /* 00784c7a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00784c7b: call 0x7199e0 */ r_esp -= 4; W32(r_esp, 0x784c80u); f_007199e0();
    /* 00784c80: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00784c81: fdivr dword ptr [0x979d18] */ ST(0) = R_F32((u32)(0x979d18u)) / ST(0);
    /* 00784c87: fld dword ptr [0x979cb0] */ FPUSH(R_F32((u32)(0x979cb0u)));
    /* 00784c8d: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 00784c91: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 00784c93: fld dword ptr [esi + 0x1c] */ FPUSH(R_F32((u32)(r_esi+0x1cu)));
    /* 00784c96: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 00784c98: fld dword ptr [esi + 0x20] */ FPUSH(R_F32((u32)(r_esi+0x20u)));
    /* 00784c9b: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00784c9d: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 00784ca1: fld dword ptr [0x979cb4] */ FPUSH(R_F32((u32)(0x979cb4u)));
    /* 00784ca7: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00784ca9: fadd st(3) */ ST(0) = ST(0) + ST(3);
    /* 00784cab: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 00784caf: fld dword ptr [0x979cb0] */ FPUSH(R_F32((u32)(0x979cb0u)));
    /* 00784cb5: fadd dword ptr [0x979cb8] */ ST(0) = ST(0) + R_F32((u32)(0x979cb8u));
    /* 00784cbb: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00784cbd: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00784cbf: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 00784cc3: fld dword ptr [0x979cb4] */ FPUSH(R_F32((u32)(0x979cb4u)));
    /* 00784cc9: fadd dword ptr [0x979cbc] */ ST(0) = ST(0) + R_F32((u32)(0x979cbcu));
    /* 00784ccf: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00784cd1: fld dword ptr [0x979d14] */ FPUSH(R_F32((u32)(0x979d14u)));
    /* 00784cd7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00784cd9: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00784cdb: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00784cdd: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 00784ce1: fld dword ptr [0x979cc0] */ FPUSH(R_F32((u32)(0x979cc0u)));
    /* 00784ce7: mov eax, dword ptr [0x979cc0] */ r_eax = R32((u32)(0x979cc0u));
    /* 00784cec: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 00784cf0: fld dword ptr [0x979cc4] */ FPUSH(R_F32((u32)(0x979cc4u)));
    /* 00784cf6: mov edx, dword ptr [0x979cc4] */ r_edx = R32((u32)(0x979cc4u));
    /* 00784cfc: mov dword ptr [esp + 0x3c], edx */ W32((u32)(r_esp+0x3cu), r_edx);
    /* 00784d00: fld dword ptr [0x979cb8] */ FPUSH(R_F32((u32)(0x979cb8u)));
    /* 00784d06: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 00784d08: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00784d0a: fdiv st(3) */ ST(0) = ST(0) / ST(3);
    /* 00784d0c: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00784d0e: fst dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0));
    /* 00784d12: fdiv st(3) */ ST(0) = ST(0) / ST(3);
    /* 00784d14: fld dword ptr [0x979cbc] */ FPUSH(R_F32((u32)(0x979cbcu)));
    /* 00784d1a: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00784d1c: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 00784d20: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
    /* 00784d24: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 00784d26: fdiv st(2) */ ST(0) = ST(0) / ST(2);
    /* 00784d28: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00784d2a: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 00784d2c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00784d2e: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 00784d32: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
    /* 00784d36: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00784d37: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00784d3a: lea ecx, [esp + 0x2c] */ r_ecx = (u32)(r_esp+0x2cu);
    /* 00784d3e: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x784d43u); f_0082b440();
    /* 00784d43: jmp 0x784e38 */ goto L_00784e38;
L_00784d48:; BB(0x00784d48);
    /* 00784d48: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00784d4b: jne 0x784e38 */ if (!fZ) goto L_00784e38;
L_00784d51:; BB(0x00784d51);
    /* 00784d51: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00784d55: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 00784d59: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
L_00784d5b:; BB(0x00784d5b);
    /* 00784d5b: call 0x7bb6d0 */ r_esp -= 4; W32(r_esp, 0x784d60u); f_007bb6d0();
    /* 00784d60: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00784d61: call 0x7199e0 */ r_esp -= 4; W32(r_esp, 0x784d66u); f_007199e0();
    /* 00784d66: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00784d67: fdivr dword ptr [0x979d18] */ ST(0) = R_F32((u32)(0x979d18u)) / ST(0);
    /* 00784d6d: fld dword ptr [ebp + 0x979cc8] */ FPUSH(R_F32((u32)(r_ebp+0x979cc8u)));
    /* 00784d73: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 00784d77: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 00784d79: fld dword ptr [esi + 0x1c] */ FPUSH(R_F32((u32)(r_esi+0x1cu)));
    /* 00784d7c: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 00784d7e: fld dword ptr [esi + 0x20] */ FPUSH(R_F32((u32)(r_esi+0x20u)));
    /* 00784d81: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00784d83: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00784d87: fld dword ptr [ebp + 0x979ccc] */ FPUSH(R_F32((u32)(r_ebp+0x979cccu)));
    /* 00784d8d: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00784d8f: fadd st(3) */ ST(0) = ST(0) + ST(3);
    /* 00784d91: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00784d95: fld dword ptr [0x979d14] */ FPUSH(R_F32((u32)(0x979d14u)));
    /* 00784d9b: fld dword ptr [ebp + 0x979cc8] */ FPUSH(R_F32((u32)(r_ebp+0x979cc8u)));
    /* 00784da1: fadd dword ptr [ebp + 0x979cd0] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x979cd0u));
    /* 00784da7: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00784da9: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00784dab: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00784dad: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00784db1: fld dword ptr [ebp + 0x979ccc] */ FPUSH(R_F32((u32)(r_ebp+0x979cccu)));
    /* 00784db7: fadd dword ptr [ebp + 0x979cd4] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x979cd4u));
    /* 00784dbd: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00784dbf: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00784dc1: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00784dc3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00784dc5: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 00784dc9: fld dword ptr [ebp + 0x979cd8] */ FPUSH(R_F32((u32)(r_ebp+0x979cd8u)));
    /* 00784dcf: mov eax, dword ptr [ebp + 0x979cd8] */ r_eax = R32((u32)(r_ebp+0x979cd8u));
    /* 00784dd5: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00784dd9: fld dword ptr [ebp + 0x979cdc] */ FPUSH(R_F32((u32)(r_ebp+0x979cdcu)));
    /* 00784ddf: mov edx, dword ptr [ebp + 0x979cdc] */ r_edx = R32((u32)(r_ebp+0x979cdcu));
    /* 00784de5: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 00784de9: fld dword ptr [ebp + 0x979cd0] */ FPUSH(R_F32((u32)(r_ebp+0x979cd0u)));
    /* 00784def: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 00784df1: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00784df3: fdiv st(3) */ ST(0) = ST(0) / ST(3);
    /* 00784df5: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00784df7: fst dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0));
    /* 00784dfb: fdiv st(3) */ ST(0) = ST(0) / ST(3);
    /* 00784dfd: fld dword ptr [ebp + 0x979cd4] */ FPUSH(R_F32((u32)(r_ebp+0x979cd4u)));
    /* 00784e03: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00784e05: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 00784e09: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 00784e0d: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 00784e0f: fdiv st(2) */ ST(0) = ST(0) / ST(2);
    /* 00784e11: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00784e13: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 00784e15: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00784e17: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 00784e1b: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 00784e1f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00784e20: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00784e23: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 00784e27: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x784e2cu); f_0082b440();
    /* 00784e2c: add ebp, 0x18 */ {  u32 a = r_ebp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00784e2f: cmp ebp, 0x30 */ {  u32 a = r_ebp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00784e32: jl 0x784d5b */ if ((fS!=fO)) goto L_00784d5b;
L_00784e38:; BB(0x00784e38);
    /* 00784e38: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x784e3du); f_004ac444();
    /* 00784e3d: call 0x7a9044 */ r_esp -= 4; W32(r_esp, 0x784e42u); f_007a9044();
    /* 00784e42: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x784e47u); f_0082dab0();
    /* 00784e47: add esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00784e4a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00784e4b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00784e4c: ret  */ FN_RET(0x00784bec); r_esp += 4; return;
}

void f_00784e50(void) /* sub_784E50 */
{
    FN_ENTER(0x00784e50);
    /* 00784e50: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00784e53: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 00784e57: mov ecx, dword ptr [esp + 0x1c] */ r_ecx = R32((u32)(r_esp+0x1cu));
    /* 00784e5b: cmp ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00784e5e: jge 0x784ea1 */ if ((fS==fO)) goto L_00784ea1;
L_00784e60:; BB(0x00784e60);
    /* 00784e60: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 00784e63: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 00784e66: fdiv dword ptr [0x979d00] */ ST(0) = ST(0) / R_F32((u32)(0x979d00u));
    /* 00784e6c: fmul dword ptr [0x979cfc] */ ST(0) = ST(0) * R_F32((u32)(0x979cfcu));
    /* 00784e72: cmp ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00784e75: fadd dword ptr [0x979d04] */ ST(0) = ST(0) + R_F32((u32)(0x979d04u));
    /* 00784e7b: fstp dword ptr [edx] */ W_F32((u32)(r_edx), ST(0)); FPOP();
    /* 00784e7d: jge 0x784ee1 */ if ((fS==fO)) goto L_00784ee1;
L_00784e7f:; BB(0x00784e7f);
    /* 00784e7f: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 00784e84: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00784e86: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 00784e8a: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 00784e8c: sar ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00784e8f: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00784e91: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00784e95: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00784e99: fstp dword ptr [eax] */ W_F32((u32)(r_eax), ST(0)); FPOP();
    /* 00784e9b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00784e9e: ret 0xc */ FN_RET(0x00784e50); r_esp += 16; return;
L_00784ea1:; BB(0x00784ea1);
    /* 00784ea1: fld dword ptr [0x979d10] */ FPUSH(R_F32((u32)(0x979d10u)));
    /* 00784ea7: lea eax, [ecx - 0xa] */ r_eax = (u32)(r_ecx+0xfffffff6u);
    /* 00784eaa: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00784eae: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00784eb2: fdiv dword ptr [0x979d0c] */ ST(0) = ST(0) / R_F32((u32)(0x979d0cu));
    /* 00784eb8: fmul dword ptr [0x979d08] */ ST(0) = ST(0) * R_F32((u32)(0x979d08u));
    /* 00784ebe: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00784ec0: fstp dword ptr [edx] */ W_F32((u32)(r_edx), ST(0)); FPOP();
L_00784ec2:; BB(0x00784ec2);
    /* 00784ec2: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 00784ec6: lea eax, [ecx - 5] */ r_eax = (u32)(r_ecx+0xfffffffbu);
    /* 00784ec9: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00784ecd: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00784ed1: fdiv dword ptr [0x979cf8] */ ST(0) = ST(0) / R_F32((u32)(0x979cf8u));
    /* 00784ed7: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00784ed9: fstp dword ptr [edx] */ W_F32((u32)(r_edx), ST(0)); FPOP();
    /* 00784edb: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00784ede: ret 0xc */ FN_RET(0x00784e50); r_esp += 16; return;
L_00784ee1:; BB(0x00784ee1);
    /* 00784ee1: fld dword ptr [0x979d10] */ FPUSH(R_F32((u32)(0x979d10u)));
    /* 00784ee7: jmp 0x784ec2 */ goto L_00784ec2;
}

void f_00784eec(void) /* sub_784EEC */
{
    FN_ENTER(0x00784eec);
    /* 00784eec: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00784eed: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00784eef: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00784ef1: call 0x784f10 */ r_esp -= 4; W32(r_esp, 0x784ef6u); f_00784f10();
    /* 00784ef6: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00784efa: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00784efc: jne 0x784f02 */ if (!fZ) goto L_00784f02;
L_00784efe:; BB(0x00784efe);
    /* 00784efe: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00784eff: ret 4 */ FN_RET(0x00784eec); r_esp += 8; return;
L_00784f02:; BB(0x00784f02);
    /* 00784f02: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00784f03: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x784f08u); f_005c2f74();
    /* 00784f08: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00784f09: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00784f0a: ret 4 */ FN_RET(0x00784eec); r_esp += 8; return;
}

void f_00784f10(void) /* sub_784F10 */
{
    FN_ENTER(0x00784f10);
    /* 00784f10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00784f11: mov ebp, esp */ r_ebp = r_esp;
    /* 00784f13: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00784f15: push 0x8f4764 */ { u32 v = 0x8f4764u; r_esp -= 4; W32(r_esp, v); }
    /* 00784f1a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00784f20: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00784f21: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00784f28: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00784f2b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00784f2e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00784f31: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00784f34: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00784f37: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00784f3a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00784f41: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00784f44: mov dword ptr [eax], 0xb44a28 */ W32((u32)(r_eax), 0xb44a28u);
    /* 00784f4a: mov dword ptr [0xa9c1f4], 0 */ W32((u32)(0xa9c1f4u), 0x0u);
    /* 00784f54: call 0x815434 */ r_esp -= 4; W32(r_esp, 0x784f59u); f_00815434();
    /* 00784f59: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00784f60: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00784f63: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x784f68u); f_008171e8();
    /* 00784f68: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00784f6b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00784f72: mov esp, ebp */ r_esp = r_ebp;
    /* 00784f74: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00784f75: ret  */ FN_RET(0x00784f10); r_esp += 4; return;
}

void f_00784f78(void) /* sub_784F78 */
{
    FN_ENTER(0x00784f78);
    /* 00784f78: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00784f79: mov ebp, esp */ r_ebp = r_esp;
    /* 00784f7b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00784f7d: push 0x8f47a6 */ { u32 v = 0x8f47a6u; r_esp -= 4; W32(r_esp, v); }
    /* 00784f82: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00784f88: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00784f89: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00784f90: sub esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00784f93: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00784f96: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00784f99: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00784f9c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00784f9f: mov eax, dword ptr [ecx + 0x1c] */ r_eax = R32((u32)(r_ecx+0x1cu));
    /* 00784fa2: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00784fa5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00784fa7: je 0x785030 */ if (fZ) goto L_00785030;
L_00784fad:; BB(0x00784fad);
    /* 00784fad: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00784fb0: jne 0x7850f6 */ if (!fZ) goto L_007850f6;
L_00784fb6:; BB(0x00784fb6);
    /* 00784fb6: call 0x409c78 */ r_esp -= 4; W32(r_esp, 0x784fbbu); f_00409c78();
    /* 00784fbb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00784fbd: je 0x7850f6 */ if (fZ) goto L_007850f6;
L_00784fc3:; BB(0x00784fc3);
    /* 00784fc3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00784fc6: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 00784fc9: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 00784fcc: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00784fcf: mov dword ptr [eax + 0x28], ecx */ W32((u32)(r_eax+0x28u), r_ecx);
    /* 00784fd2: lea ebx, [edx + edx] */ r_ebx = (u32)(r_edx+r_edx);
    /* 00784fd5: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00784fd7: add ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00784fd9: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00784fdb: cmp ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00784fdd: jle 0x7850f6 */ if ((fZ||fS!=fO)) goto L_007850f6;
L_00784fe3:; BB(0x00784fe3);
    /* 00784fe3: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
    /* 00784fea: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 00784fec: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x784ff1u); f_005caba4();
    /* 00784ff1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00784ff2: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 00784ff5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00784ff7: je 0x785021 */ if (fZ) goto L_00785021;
L_00784ff9:; BB(0x00784ff9);
    /* 00784ff9: mov dword ptr [ebp - 0x50], 1 */ W32((u32)(r_ebp+0xffffffb0u), 0x1u);
    /* 00785000: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00785007: push 0x78519c */ { u32 v = 0x78519cu; r_esp -= 4; W32(r_esp, v); }
    /* 0078500c: push dword ptr [0xaca324] */ { u32 v = R32((u32)(0xaca324u)); r_esp -= 4; W32(r_esp, v); }
    /* 00785012: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00785015: call 0x788938 */ r_esp -= 4; W32(r_esp, 0x78501au); f_00788938();
    /* 0078501a: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
L_00785021:; BB(0x00785021);
    /* 00785021: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00785024: mov dword ptr [eax + 0x1c], 2 */ W32((u32)(r_eax+0x1cu), 0x2u);
    /* 0078502b: jmp 0x7850f6 */ goto L_007850f6;
L_00785030:; BB(0x00785030);
    /* 00785030: call 0x81e1f4 */ r_esp -= 4; W32(r_esp, 0x785035u); f_0081e1f4();
    /* 00785035: mov edx, dword ptr [0xa9c1f8] */ r_edx = R32((u32)(0xa9c1f8u));
    /* 0078503b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0078503e: mov esi, dword ptr [eax + 0x24] */ r_esi = R32((u32)(r_eax+0x24u));
    /* 00785041: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00785044: lea ecx, [esi + esi*4] */ r_ecx = (u32)(r_esi+r_esi*4);
    /* 00785047: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00785049: mov dword ptr [0xa9c1f8], edx */ W32((u32)(0xa9c1f8u), r_edx);
    /* 0078504f: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00785051: lea ebx, [ecx + ecx] */ r_ebx = (u32)(r_ecx+r_ecx);
    /* 00785054: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00785056: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00785058: sub ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0078505a: cmp edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0078505c: ja 0x7850b5 */ if ((!fC&&!fZ)) goto L_007850b5;
L_0078505e:; BB(0x0078505e);
    /* 0078505e: mov dword ptr [ebp - 0x40], esi */ W32((u32)(r_ebp+0xffffffc0u), r_esi);
    /* 00785061: fild dword ptr [ebp - 0x40] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffc0u)));
    /* 00785064: fmul dword ptr [0x979d64] */ ST(0) = ST(0) * R_F32((u32)(0x979d64u));
    /* 0078506a: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0078506c: lea eax, [esi + esi*4] */ r_eax = (u32)(r_esi+r_esi*4);
    /* 0078506f: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 00785072: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00785074: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00785076: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00785078: fnstcw word ptr [ebp - 0x38] */ W16((u32)(r_ebp+0xffffffc8u), fcw);
    /* 0078507b: movzx eax, word ptr [ebp - 0x38] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc8u));
    /* 0078507f: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00785084: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00785087: fldcw word ptr [ebp - 0x30] */ fcw = R16((u32)(r_ebp+0xffffffd0u));
    /* 0078508a: fistp qword ptr [ebp - 0x28] */ W64((u32)(r_ebp+0xffffffd8u), (u64)fx_int64(ST(0))); FPOP();
    /* 0078508d: fldcw word ptr [ebp - 0x38] */ fcw = R16((u32)(r_ebp+0xffffffc8u));
    /* 00785090: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00785092: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00785094: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00785096: sub ecx, dword ptr [ebp - 0x28] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffd8u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00785099: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0078509b: ja 0x7850a1 */ if ((!fC&&!fZ)) goto L_007850a1;
L_0078509d:; BB(0x0078509d);
    /* 0078509d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0078509f: jmp 0x7850f6 */ goto L_007850f6;
L_007850a1:; BB(0x007850a1);
    /* 007850a1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007850a4: mov ecx, dword ptr [eax + 0x70c] */ r_ecx = R32((u32)(r_eax+0x70cu));
    /* 007850aa: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007850ab: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 007850ae: call 0x41142c */ r_esp -= 4; W32(r_esp, 0x7850b3u); f_0041142c();
    /* 007850b3: jmp 0x7850f6 */ goto L_007850f6;
L_007850b5:; BB(0x007850b5);
    /* 007850b5: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
    /* 007850bc: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 007850be: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x7850c3u); f_005caba4();
    /* 007850c3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007850c4: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 007850c7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007850c9: je 0x7850ec */ if (fZ) goto L_007850ec;
L_007850cb:; BB(0x007850cb);
    /* 007850cb: mov dword ptr [ebp - 0x48], 1 */ W32((u32)(r_ebp+0xffffffb8u), 0x1u);
    /* 007850d2: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 007850d9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007850dc: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 007850df: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007850e0: call 0x408d28 */ r_esp -= 4; W32(r_esp, 0x7850e5u); f_00408d28();
    /* 007850e5: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
L_007850ec:; BB(0x007850ec);
    /* 007850ec: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007850ef: mov dword ptr [eax + 0x1c], 1 */ W32((u32)(r_eax+0x1cu), 0x1u);
L_007850f6:; BB(0x007850f6);
    /* 007850f6: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 007850f9: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 007850fc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007850ff: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00785106: mov esp, ebp */ r_esp = r_ebp;
    /* 00785108: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00785109: ret  */ FN_RET(0x00784f78); r_esp += 4; return;
}

