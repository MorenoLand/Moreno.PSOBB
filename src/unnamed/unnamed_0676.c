#include "protos.h"

void f_00676008(void) /* sub_676008 */
{
    FN_ENTER(0x00676008);
    /* 00676008: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0067600b: mov edx, dword ptr [0xa9cd68] */ r_edx = R32((u32)(0xa9cd68u));
    /* 00676011: fld dword ptr [0x93aaf0] */ FPUSH(R_F32((u32)(0x93aaf0u)));
    /* 00676017: fadd dword ptr [ecx + 0x33c] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x33cu));
    /* 0067601d: mov dword ptr [esp], 0x3f800000 */ W32((u32)(r_esp), 0x3f800000u);
    /* 00676024: mov dword ptr [esp + 4], 0x40000000 */ W32((u32)(r_esp+0x4u), 0x40000000u);
    /* 0067602c: mov dword ptr [esp + 8], 0x40400000 */ W32((u32)(r_esp+0x8u), 0x40400000u);
    /* 00676034: mov dword ptr [esp + 0xc], 0x40c00000 */ W32((u32)(r_esp+0xcu), 0x40c00000u);
    /* 0067603c: fmul dword ptr [esp + edx*4] */ ST(0) = ST(0) * R_F32((u32)(r_esp+r_edx*4));
    /* 0067603f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00676042: ret  */ FN_RET(0x00676008); r_esp += 4; return;
}

void f_0067604d(void) /* sub_67604D */
{
    FN_ENTER(0x0067604d);
    /* 0067604d: mov ecx, eax */ r_ecx = r_eax;
    /* 0067604f: mov eax, 1 */ r_eax = 0x1u;
    /* 00676054: shl eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00676056: mov dword ptr [ecx*4 + 0xa8ff0c], 0x3c */ W32((u32)(r_ecx*4+0xa8ff0cu), 0x3cu);
    /* 00676061: mov word ptr [ecx*2 + 0xa8ff04], dx */ W16((u32)(r_ecx*2+0xa8ff04u), (u16)r_edx);
    /* 00676069: or dword ptr [0xa8ff1c], eax */ { u32 ad = (u32)(0xa8ff1cu);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0067606f: ret  */ FN_RET(0x0067604d); r_esp += 4; return;
}

void f_00676070(void) /* sub_676070 */
{
    FN_ENTER(0x00676070);
    /* 00676070: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00676071: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00676072: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00676074: mov edx, dword ptr [ebp + 0xa4] */ r_edx = R32((u32)(r_ebp+0xa4u));
    /* 0067607a: fld dword ptr [edx + 0xc] */ FPUSH(R_F32((u32)(r_edx+0xcu)));
    /* 0067607d: fld dword ptr [edx + 0x10] */ FPUSH(R_F32((u32)(r_edx+0x10u)));
    /* 00676080: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00676082: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00676084: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00676085: mov eax, dword ptr [ebp + 0x34] */ r_eax = R32((u32)(r_ebp+0x34u));
    /* 00676088: jb 0x67608c */ if (fC) goto L_0067608c;
L_0067608a:; BB(0x0067608a);
    /* 0067608a: fst st(1) */ ST(1) = ST(0);
L_0067608c:; BB(0x0067608c);
    /* 0067608c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0067608e: fmul dword ptr [0x93aaec] */ ST(0) = ST(0) * R_F32((u32)(0x93aaecu));
    /* 00676094: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00676096: je 0x676107 */ if (fZ) goto L_00676107;
L_00676098:; BB(0x00676098);
    /* 00676098: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0067609b: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067609e: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 006760a2: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006760a4: mov dword ptr [esp], 0x43c80000 */ W32((u32)(r_esp), 0x43c80000u);
    /* 006760ab: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x6760aeu); call_ind(t); }
    /* 006760ae: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006760b0: je 0x676104 */ if (fZ) goto L_00676104;
L_006760b2:; BB(0x006760b2);
    /* 006760b2: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x6760b7u); f_0082d7b0();
    /* 006760b7: lea ecx, [ebp + 0x38] */ r_ecx = (u32)(r_ebp+0x38u);
    /* 006760ba: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x6760bfu); f_0082d838();
    /* 006760bf: mov edx, dword ptr [ebp + 0x60] */ r_edx = R32((u32)(r_ebp+0x60u));
    /* 006760c2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006760c4: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x6760c9u); f_0082d8bc();
    /* 006760c9: mov ecx, dword ptr [ebp + 0x24] */ r_ecx = R32((u32)(r_ebp+0x24u));
    /* 006760cc: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x6760d1u); f_00829cc8();
    /* 006760d1: mov eax, dword ptr [ebp + 0x68] */ r_eax = R32((u32)(r_ebp+0x68u));
    /* 006760d4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006760d5: push dword ptr [ebp + 0x6c] */ { u32 v = R32((u32)(r_ebp+0x6cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006760d8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006760da: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006760db: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x6760e0u); f_0082fa0c();
    /* 006760e0: fld dword ptr [0x93aae4] */ FPUSH(R_F32((u32)(0x93aae4u)));
    /* 006760e6: fdiv dword ptr [ebp + 0x6c] */ ST(0) = ST(0) / R_F32((u32)(r_ebp+0x6cu));
    /* 006760e9: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006760ec: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x6760f1u); f_0061cdb0();
    /* 006760f1: push dword ptr [ebp + 0x34] */ { u32 v = R32((u32)(r_ebp+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 006760f4: call 0x82e760 */ r_esp -= 4; W32(r_esp, 0x6760f9u); f_0082e760();
    /* 006760f9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006760fa: call 0x520e88 */ r_esp -= 4; W32(r_esp, 0x6760ffu); f_00520e88();
    /* 006760ff: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x676104u); f_0082da80();
L_00676104:; BB(0x00676104);
    /* 00676104: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00676105: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00676106: ret  */ FN_RET(0x00676070); r_esp += 4; return;
L_00676107:; BB(0x00676107);
    /* 00676107: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00676109: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0067610a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0067610b: ret  */ FN_RET(0x00676070); r_esp += 4; return;
}

void f_0067610c(void) /* sub_67610C */
{
    FN_ENTER(0x0067610c);
    /* 0067610c: mov ecx, dword ptr [0xa8ff20] */ r_ecx = R32((u32)(0xa8ff20u));
    /* 00676112: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00676114: je 0x676129 */ if (fZ) goto L_00676129;
L_00676116:; BB(0x00676116);
    /* 00676116: je 0x67611f */ if (fZ) goto L_0067611f;
L_00676118:; BB(0x00676118);
    /* 00676118: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0067611a: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x67611fu); f_004066a8();
L_0067611f:; BB(0x0067611f);
    /* 0067611f: mov dword ptr [0xa8ff20], 0 */ W32((u32)(0xa8ff20u), 0x0u);
L_00676129:; BB(0x00676129);
    /* 00676129: ret  */ FN_RET(0x0067610c); r_esp += 4; return;
}

void f_0067612c(void)
{
    FN_ENTER(0x0067612c);
    /* 0067612c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0067612d: mov ebp, esp */ r_ebp = r_esp;
    /* 0067612f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00676131: push 0x8e9898 */ { u32 v = 0x8e9898u; r_esp -= 4; W32(r_esp, v); }
    /* 00676136: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0067613c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067613d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00676144: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00676147: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0067614a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0067614d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00676150: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00676153: push 0x340 */ { u32 v = 0x340u; r_esp -= 4; W32(r_esp, v); }
    /* 00676158: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0067615f: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x676164u); f_005caba4();
    /* 00676164: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00676165: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00676168: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067616a: je 0x6761a3 */ if (fZ) goto L_006761a3;
L_0067616c:; BB(0x0067616c);
    /* 0067616c: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00676173: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0067617a: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067617d: push dword ptr [0xaca354] */ { u32 v = R32((u32)(0xaca354u)); r_esp -= 4; W32(r_esp, v); }
    /* 00676183: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00676186: call 0x6761a8 */ r_esp -= 4; W32(r_esp, 0x67618bu); f_006761a8();
    /* 0067618b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0067618e: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00676195:; BB(0x00676195);
    /* 00676195: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00676198: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0067619f: mov esp, ebp */ r_esp = r_ebp;
    /* 006761a1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006761a2: ret  */ FN_RET(0x0067612c); r_esp += 4; return;
L_006761a3:; BB(0x006761a3);
    /* 006761a3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006761a5: jmp 0x676195 */ goto L_00676195;
}

void f_006761a8(void) /* sub_6761A8 */
{
    FN_ENTER(0x006761a8);
    /* 006761a8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006761a9: mov ebp, esp */ r_ebp = r_esp;
    /* 006761ab: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006761ad: push 0x8e98b4 */ { u32 v = 0x8e98b4u; r_esp -= 4; W32(r_esp, v); }
    /* 006761b2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006761b8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006761b9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006761c0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006761c3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006761c6: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 006761c9: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 006761cc: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 006761cf: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 006761d2: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006761d5: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 006761d8: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006761db: call 0x770748 */ r_esp -= 4; W32(r_esp, 0x6761e0u); f_00770748();
    /* 006761e0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006761e7: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006761ea: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006761ed: mov dword ptr [ecx], 0xb36a80 */ W32((u32)(r_ecx), 0xb36a80u);
    /* 006761f3: mov eax, dword ptr [0x9c9b44] */ r_eax = R32((u32)(0x9c9b44u));
    /* 006761f8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006761f9: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 006761fc: call dword ptr [0xb36a94] */ { u32 t = R32((u32)(0xb36a94u)); r_esp -= 4; W32(r_esp, 0x676202u); call_ind(t); }
    /* 00676202: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00676205: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00676207: mov eax, dword ptr [ecx + 0x84] */ r_eax = R32((u32)(r_ecx+0x84u));
    /* 0067620d: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 00676210: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00676212: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00676214: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00676216: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00676218: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0067621a: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0067621c: lea ebx, [edx + edx + 0x9c9aa0] */ r_ebx = (u32)(r_edx+r_edx+0x9c9aa0u);
    /* 00676223: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00676224: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x676229u); f_007b9a88();
    /* 00676229: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0067622c: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x676231u); f_007b4f54();
    /* 00676231: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00676234: push 0x1080 */ { u32 v = 0x1080u; r_esp -= 4; W32(r_esp, v); }
    /* 00676239: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067623b: call 0x7b52c4 */ r_esp -= 4; W32(r_esp, 0x676240u); f_007b52c4();
    /* 00676240: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00676243: call 0x676268 */ r_esp -= 4; W32(r_esp, 0x676248u); f_00676268();
    /* 00676248: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0067624b: call 0x676294 */ r_esp -= 4; W32(r_esp, 0x676250u); f_00676294();
    /* 00676250: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00676253: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00676256: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00676259: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00676260: mov esp, ebp */ r_esp = r_ebp;
    /* 00676262: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00676263: ret 8 */ FN_RET(0x006761a8); r_esp += 12; return;
}

void f_00676268(void) /* sub_676268 */
{
    FN_ENTER(0x00676268);
    /* 00676268: fild dword ptr [ecx + 0x88] */ FPUSH((long double)(i32)R32((u32)(r_ecx+0x88u)));
    /* 0067626e: mov eax, dword ptr [ecx + 0xa4] */ r_eax = R32((u32)(r_ecx+0xa4u));
    /* 00676274: fstp dword ptr [ecx + 0x33c] */ W_F32((u32)(r_ecx+0x33cu), ST(0)); FPOP();
    /* 0067627a: fld dword ptr [eax + 0xc] */ FPUSH(R_F32((u32)(r_eax+0xcu)));
    /* 0067627d: fmul dword ptr [ecx + 0x68] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x68u));
    /* 00676280: fstp dword ptr [eax + 0xc] */ W_F32((u32)(r_eax+0xcu), ST(0)); FPOP();
    /* 00676283: mov edx, dword ptr [ecx + 0xa4] */ r_edx = R32((u32)(r_ecx+0xa4u));
    /* 00676289: fld dword ptr [edx + 0x10] */ FPUSH(R_F32((u32)(r_edx+0x10u)));
    /* 0067628c: fmul dword ptr [ecx + 0x68] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x68u));
    /* 0067628f: fstp dword ptr [edx + 0x10] */ W_F32((u32)(r_edx+0x10u), ST(0)); FPOP();
    /* 00676292: ret  */ FN_RET(0x00676268); r_esp += 4; return;
}

void f_00676294(void) /* sub_676294 */
{
    FN_ENTER(0x00676294);
    /* 00676294: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00676295: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00676297: push dword ptr [ebx + 0x84] */ { u32 v = R32((u32)(r_ebx+0x84u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067629d: mov ecx, dword ptr [0xa8ff20] */ r_ecx = R32((u32)(0xa8ff20u));
    /* 006762a3: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x6762a8u); f_005b8610();
    /* 006762a8: push dword ptr [ebx + 0x84] */ { u32 v = R32((u32)(r_ebx+0x84u)); r_esp -= 4; W32(r_esp, v); }
    /* 006762ae: mov ecx, dword ptr [0xa8ff20] */ r_ecx = R32((u32)(0xa8ff20u));
    /* 006762b4: mov dword ptr [ebx + 0x34], eax */ W32((u32)(r_ebx+0x34u), r_eax);
    /* 006762b7: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x6762bcu); f_005b8624();
    /* 006762bc: mov dword ptr [ebx + 0x24], eax */ W32((u32)(r_ebx+0x24u), r_eax);
    /* 006762bf: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006762c0: ret  */ FN_RET(0x00676294); r_esp += 4; return;
}

void f_006762c4(void) /* sub_6762C4 */
{
    FN_ENTER(0x006762c4);
    /* 006762c4: mov dword ptr [0xa8fef8], 0x3f800000 */ W32((u32)(0xa8fef8u), 0x3f800000u);
    /* 006762ce: mov dword ptr [0xa8fefc], 0x41000000 */ W32((u32)(0xa8fefcu), 0x41000000u);
    /* 006762d8: mov dword ptr [0xa8ff00], 0x3fc00000 */ W32((u32)(0xa8ff00u), 0x3fc00000u);
    /* 006762e2: ret  */ FN_RET(0x006762c4); r_esp += 4; return;
}

void f_006762e4(void) /* sub_6762E4 */
{
    FN_ENTER(0x006762e4);
    /* 006762e4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006762e5: mov ebp, esp */ r_ebp = r_esp;
    /* 006762e7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006762e9: push 0x8e98dc */ { u32 v = 0x8e98dcu; r_esp -= 4; W32(r_esp, v); }
    /* 006762ee: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006762f4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006762f5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006762fc: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006762ff: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00676302: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00676305: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00676308: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0067630b: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 00676310: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00676317: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x67631cu); f_008581c5();
    /* 0067631c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0067631d: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00676320: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00676322: je 0x67636f */ if (fZ) goto L_0067636f;
L_00676324:; BB(0x00676324);
    /* 00676324: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0067632b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00676332: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00676335: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00676337: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00676338: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00676339: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067633a: push 0x9c9b34 */ { u32 v = 0x9c9b34u; r_esp -= 4; W32(r_esp, v); }
    /* 0067633f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00676341: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x676346u); f_005b7a84();
    /* 00676346: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00676349: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00676350:; BB(0x00676350);
    /* 00676350: mov dword ptr [0xa8ff20], eax */ W32((u32)(0xa8ff20u), r_eax);
    /* 00676355: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0067635c: call 0x676374 */ r_esp -= 4; W32(r_esp, 0x676361u); f_00676374();
    /* 00676361: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00676364: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0067636b: mov esp, ebp */ r_esp = r_ebp;
    /* 0067636d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0067636e: ret  */ FN_RET(0x006762e4); r_esp += 4; return;
L_0067636f:; BB(0x0067636f);
    /* 0067636f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00676371: jmp 0x676350 */ goto L_00676350;
}

void f_00676374(void) /* sub_676374 */
{
    FN_ENTER(0x00676374);
    /* 00676374: mov edx, 0xffff */ r_edx = 0xffffu;
    /* 00676379: mov word ptr [0xa8ff04], dx */ W16((u32)(0xa8ff04u), (u16)r_edx);
    /* 00676380: mov word ptr [0xa8ff06], dx */ W16((u32)(0xa8ff06u), (u16)r_edx);
    /* 00676387: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00676389: mov dword ptr [0xa8ff1c], eax */ W32((u32)(0xa8ff1cu), r_eax);
    /* 0067638e: mov dword ptr [0xa8ff0c], eax */ W32((u32)(0xa8ff0cu), r_eax);
    /* 00676393: mov dword ptr [0xa8ff10], eax */ W32((u32)(0xa8ff10u), r_eax);
    /* 00676398: mov dword ptr [0xa8ff14], eax */ W32((u32)(0xa8ff14u), r_eax);
    /* 0067639d: mov word ptr [0xa8ff08], dx */ W16((u32)(0xa8ff08u), (u16)r_edx);
    /* 006763a4: mov dword ptr [0xa8ff18], eax */ W32((u32)(0xa8ff18u), r_eax);
    /* 006763a9: mov word ptr [0xa8ff0a], dx */ W16((u32)(0xa8ff0au), (u16)r_edx);
    /* 006763b0: ret  */ FN_RET(0x00676374); r_esp += 4; return;
}

void f_006763b4(void) /* sub_6763B4 */
{
    FN_ENTER(0x006763b4);
    /* 006763b4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006763b5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006763b7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006763b9: call 0x6763d8 */ r_esp -= 4; W32(r_esp, 0x6763beu); f_006763d8();
    /* 006763be: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006763c2: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006763c4: jne 0x6763ca */ if (!fZ) goto L_006763ca;
L_006763c6:; BB(0x006763c6);
    /* 006763c6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006763c7: ret 4 */ FN_RET(0x006763b4); r_esp += 8; return;
L_006763ca:; BB(0x006763ca);
    /* 006763ca: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006763cb: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6763d0u); f_005c2f74();
    /* 006763d0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006763d1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006763d2: ret 4 */ FN_RET(0x006763b4); r_esp += 8; return;
}

void f_006763d8(void) /* sub_6763D8 */
{
    FN_ENTER(0x006763d8);
    /* 006763d8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006763d9: mov ebp, esp */ r_ebp = r_esp;
    /* 006763db: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006763dd: push 0x8e9906 */ { u32 v = 0x8e9906u; r_esp -= 4; W32(r_esp, v); }
    /* 006763e2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006763e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006763e9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006763f0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006763f3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006763f6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006763f9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006763fc: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006763ff: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00676402: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00676409: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0067640c: mov dword ptr [eax], 0xb36d60 */ W32((u32)(r_eax), 0xb36d60u);
    /* 00676412: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00676413: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x676418u); f_007b4e84();
    /* 00676418: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00676419: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0067641c: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x676421u); f_007b9c8c();
    /* 00676421: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00676424: mov dword ptr [eax], 0xb25c20 */ W32((u32)(r_eax), 0xb25c20u);
    /* 0067642a: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0067642d: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00676434: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00676437: add ecx, 0x348 */ {  u32 a = r_ecx; u32 b = 0x348u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0067643d: call 0x6111bc */ r_esp -= 4; W32(r_esp, 0x676442u); f_006111bc();
    /* 00676442: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00676449: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0067644c: call 0x770660 */ r_esp -= 4; W32(r_esp, 0x676451u); f_00770660();
    /* 00676451: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00676454: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0067645b: mov esp, ebp */ r_esp = r_ebp;
    /* 0067645d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0067645e: ret  */ FN_RET(0x006763d8); r_esp += 4; return;
}

void f_00676460(void) /* sub_676460 */
{
    FN_ENTER(0x00676460);
    /* 00676460: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00676461: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00676463: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00676465: call 0x676484 */ r_esp -= 4; W32(r_esp, 0x67646au); f_00676484();
    /* 0067646a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0067646e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00676470: jne 0x676476 */ if (!fZ) goto L_00676476;
L_00676472:; BB(0x00676472);
    /* 00676472: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00676473: ret 4 */ FN_RET(0x00676460); r_esp += 8; return;
L_00676476:; BB(0x00676476);
    /* 00676476: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00676477: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x67647cu); f_005c2f74();
    /* 0067647c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0067647d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0067647e: ret 4 */ FN_RET(0x00676460); r_esp += 8; return;
}

void f_00676484(void) /* sub_676484 */
{
    FN_ENTER(0x00676484);
    /* 00676484: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00676485: mov ebp, esp */ r_ebp = r_esp;
    /* 00676487: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00676489: push 0x8e9920 */ { u32 v = 0x8e9920u; r_esp -= 4; W32(r_esp, v); }
    /* 0067648e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00676494: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00676495: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0067649c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0067649f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006764a2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006764a5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006764a8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006764ab: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006764ae: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006764b5: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006764b8: mov dword ptr [eax], 0xb36ec0 */ W32((u32)(r_eax), 0xb36ec0u);
    /* 006764be: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006764bf: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x6764c4u); f_007b4e84();
    /* 006764c4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006764c5: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006764c8: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x6764cdu); f_007b9c8c();
    /* 006764cd: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006764d4: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006764d7: call 0x770660 */ r_esp -= 4; W32(r_esp, 0x6764dcu); f_00770660();
    /* 006764dc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006764df: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006764e6: mov esp, ebp */ r_esp = r_ebp;
    /* 006764e8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006764e9: ret  */ FN_RET(0x00676484); r_esp += 4; return;
}

void f_006764ec(void) /* sub_6764EC */
{
    FN_ENTER(0x006764ec);
    /* 006764ec: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006764ed: mov esi, ecx */ r_esi = r_ecx;
    /* 006764ef: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x6764f4u); f_004f7c84();
    /* 006764f4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006764f6: je 0x6764fa */ if (fZ) goto L_006764fa;
L_006764f8:; BB(0x006764f8);
    /* 006764f8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006764f9: ret  */ FN_RET(0x006764ec); r_esp += 4; return;
L_006764fa:; BB(0x006764fa);
    /* 006764fa: mov ecx, esi */ r_ecx = r_esi;
    /* 006764fc: call 0x64d8c8 */ r_esp -= 4; W32(r_esp, 0x676501u); f_0064d8c8();
    /* 00676501: fld dword ptr [esi + 0xc0] */ FPUSH(R_F32((u32)(r_esi+0xc0u)));
    /* 00676507: fcom dword ptr [esi + 0xc4] */ fx_compare(ST(0), R_F32((u32)(r_esi+0xc4u))); 
    /* 0067650d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0067650f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00676510: jae 0x676520 */ if (!fC) goto L_00676520;
L_00676512:; BB(0x00676512);
    /* 00676512: fld dword ptr [0x93ad28] */ FPUSH(R_F32((u32)(0x93ad28u)));
    /* 00676518: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0067651a: fst dword ptr [esi + 0xc0] */ W_F32((u32)(r_esi+0xc0u), ST(0));
L_00676520:; BB(0x00676520);
    /* 00676520: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00676522: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00676528: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x67652du); f_0068d5a8();
    /* 0067652d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0067652e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00676530: je 0x676560 */ if (fZ) goto L_00676560;
L_00676532:; BB(0x00676532);
    /* 00676532: lea edx, [esi + 0x38] */ r_edx = (u32)(r_esi+0x38u);
    /* 00676535: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00676538: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00676539: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067653a: call 0x78ea50 */ r_esp -= 4; W32(r_esp, 0x67653fu); f_0078ea50();
    /* 0067653f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 00676542: fcomp dword ptr [0x93ad24] */ fx_compare(ST(0), R_F32((u32)(0x93ad24u))); FPOP();
    /* 00676548: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0067654a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0067654b: jae 0x676560 */ if (!fC) goto L_00676560;
L_0067654d:; BB(0x0067654d);
    /* 0067654d: mov eax, dword ptr [esi + 0x370] */ r_eax = R32((u32)(r_esi+0x370u));
    /* 00676553: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00676556: mov dword ptr [esi + 0x370], eax */ W32((u32)(r_esi+0x370u), r_eax);
    /* 0067655c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0067655e: jle 0x676562 */ if ((fZ||fS!=fO)) goto L_00676562;
L_00676560:; BB(0x00676560);
    /* 00676560: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00676561: ret  */ FN_RET(0x006764ec); r_esp += 4; return;
L_00676562:; BB(0x00676562);
    /* 00676562: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00676563: call 0x6765c0 */ r_esp -= 4; W32(r_esp, 0x676568u); f_006765c0();
    /* 00676568: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00676569: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067656b: je 0x676575 */ if (fZ) goto L_00676575;
L_0067656d:; BB(0x0067656d);
    /* 0067656d: movzx edx, word ptr [esi + 0x28] */ r_edx = (u32)R16((u32)(r_esi+0x28u));
    /* 00676571: mov word ptr [eax + 0x28], dx */ W16((u32)(r_eax+0x28u), (u16)r_edx);
L_00676575:; BB(0x00676575);
    /* 00676575: mov dword ptr [esi + 0xc0], 0 */ W32((u32)(r_esi+0xc0u), 0x0u);
    /* 0067657f: push 0xf3 */ { u32 v = 0xf3u; r_esp -= 4; W32(r_esp, v); }
    /* 00676584: mov dword ptr [esi + 0x370], 0x12c */ W32((u32)(r_esi+0x370u), 0x12cu);
    /* 0067658e: add esi, 0x300 */ {  u32 a = r_esi; u32 b = 0x300u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00676594: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00676595: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x67659au); f_0050b510();
    /* 0067659a: mov esi, eax */ r_esi = r_eax;
    /* 0067659c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067659f: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006765a1: je 0x676560 */ if (fZ) goto L_00676560;
L_006765a3:; BB(0x006765a3);
    /* 006765a3: push 0xffbfff3f */ { u32 v = 0xffbfff3fu; r_esp -= 4; W32(r_esp, v); }
    /* 006765a8: mov ecx, esi */ r_ecx = r_esi;
    /* 006765aa: call 0x508ee4 */ r_esp -= 4; W32(r_esp, 0x6765afu); f_00508ee4();
    /* 006765af: push 0x40000000 */ { u32 v = 0x40000000u; r_esp -= 4; W32(r_esp, v); }
    /* 006765b4: mov ecx, esi */ r_ecx = r_esi;
    /* 006765b6: call 0x508dac */ r_esp -= 4; W32(r_esp, 0x6765bbu); f_00508dac();
    /* 006765bb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006765bc: ret  */ FN_RET(0x006764ec); r_esp += 4; return;
}

void f_00676564(void)
{
    FN_ENTER(0x00676564);
    goto L_00676564;
L_00676560:; BB(0x00676560);
    /* 00676560: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00676561: ret  */ FN_RET(0x00676564); r_esp += 4; return;
L_00676564:; BB(0x00676564);
    /* 00676564: pop eax */ { u32 v = R32(r_esp); r_esp += 4; r_eax = v; }
    /* 00676565: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00676567: add byte ptr [ecx - 0x7b], bl */ { u32 ad = (u32)(r_ecx+0xffffff85u);  u32 a = R8(ad); u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0067656a: sal byte ptr [eax + ecx + 0xf], 0xb7 */ { u32 ad = (u32)(r_eax+r_ecx+0xfu); u32 c = (23u) & 31; u32 a = R8(ad); u32 r = a; if (c) { r = (a << c) & 0xffu; W8(ad, r);  } }
    /* 0067656f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00676570: sub byte ptr [esi - 0x77], ah */ { u32 ad = (u32)(r_esi+0xffffff89u);  u32 a = R8(ad); u32 b = (u8)(r_eax>>8); u32 r = (a - b) & 0xffu; W8(ad, r);  }
    /* 00676573: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00676574: sub bh, al */ {  u32 a = (u8)(r_ebx>>8); u32 b = (u8)r_eax; u32 r = (a - b) & 0xffu; r_ebx = (r_ebx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 00676576: xchg al, al */ { u32 x = (u8)r_eax; u32 y = (u8)r_eax; r_eax = (r_eax & 0xffffff00u) | ((y) & 0xffu); r_eax = (r_eax & 0xffffff00u) | ((x) & 0xffu); }
    /* 00676578: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0067657a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0067657c: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0067657e: add byte ptr [eax - 0xd], ch */ { u32 ad = (u32)(r_eax+0xfffffff3u);  u32 a = R8(ad); u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00676581: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00676583: add bh, al */ {  u32 a = (u8)(r_ebx>>8); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 00676585: xchg byte ptr [eax + 3], dh */ { u32 x = R8((u32)(r_eax+0x3u)); u32 y = (u8)(r_edx>>8); W8((u32)(r_eax+0x3u), y); r_edx = (r_edx & 0xffff00ffu) | (((x) & 0xffu) << 8); }
    /* 00676588: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0067658a: sub al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0067658c: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0067658e: add esi, 0x300 */ {  u32 a = r_esi; u32 b = 0x300u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00676594: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00676595: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x67659au); f_0050b510();
    /* 0067659a: mov esi, eax */ r_esi = r_eax;
    /* 0067659c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067659f: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006765a1: je 0x676560 */ if (fZ) goto L_00676560;
L_006765a3:; BB(0x006765a3);
    /* 006765a3: push 0xffbfff3f */ { u32 v = 0xffbfff3fu; r_esp -= 4; W32(r_esp, v); }
    /* 006765a8: mov ecx, esi */ r_ecx = r_esi;
    /* 006765aa: call 0x508ee4 */ r_esp -= 4; W32(r_esp, 0x6765afu); f_00508ee4();
    /* 006765af: push 0x40000000 */ { u32 v = 0x40000000u; r_esp -= 4; W32(r_esp, v); }
    /* 006765b4: mov ecx, esi */ r_ecx = r_esi;
    /* 006765b6: call 0x508dac */ r_esp -= 4; W32(r_esp, 0x6765bbu); f_00508dac();
    /* 006765bb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006765bc: ret  */ FN_RET(0x00676564); r_esp += 4; return;
}

void f_006765c0(void) /* sub_6765C0 */
{
    FN_ENTER(0x006765c0);
    /* 006765c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006765c1: mov ebp, esp */ r_ebp = r_esp;
    /* 006765c3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006765c5: push 0x8e9948 */ { u32 v = 0x8e9948u; r_esp -= 4; W32(r_esp, v); }
    /* 006765ca: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006765d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006765d1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006765d8: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006765db: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006765de: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006765e1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006765e4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006765e7: push 0x344 */ { u32 v = 0x344u; r_esp -= 4; W32(r_esp, v); }
    /* 006765ec: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 006765f3: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6765f8u); f_005caba4();
    /* 006765f8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006765f9: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006765fc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006765fe: je 0x676637 */ if (fZ) goto L_00676637;
L_00676600:; BB(0x00676600);
    /* 00676600: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00676607: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0067660e: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00676611: push dword ptr [0xaca354] */ { u32 v = R32((u32)(0xaca354u)); r_esp -= 4; W32(r_esp, v); }
    /* 00676617: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0067661a: call 0x67663c */ r_esp -= 4; W32(r_esp, 0x67661fu); f_0067663c();
    /* 0067661f: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00676622: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00676629:; BB(0x00676629);
    /* 00676629: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0067662c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00676633: mov esp, ebp */ r_esp = r_ebp;
    /* 00676635: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00676636: ret  */ FN_RET(0x006765c0); r_esp += 4; return;
L_00676637:; BB(0x00676637);
    /* 00676637: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00676639: jmp 0x676629 */ goto L_00676629;
}

void f_0067663c(void) /* sub_67663C */
{
    FN_ENTER(0x0067663c);
    /* 0067663c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0067663d: mov ebp, esp */ r_ebp = r_esp;
    /* 0067663f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00676641: push 0x8e9964 */ { u32 v = 0x8e9964u; r_esp -= 4; W32(r_esp, v); }
    /* 00676646: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0067664c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067664d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00676654: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00676657: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0067665a: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0067665d: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00676660: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00676663: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00676666: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00676669: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0067666c: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0067666f: call 0x770748 */ r_esp -= 4; W32(r_esp, 0x676674u); f_00770748();
    /* 00676674: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0067667b: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0067667e: mov dword ptr [ecx], 0xb36ec0 */ W32((u32)(r_ecx), 0xb36ec0u);
    /* 00676684: mov eax, dword ptr [0x9c9ca0] */ r_eax = R32((u32)(0x9c9ca0u));
    /* 00676689: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0067668c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0067668f: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 00676692: mov dword ptr [ecx + 0x50], edx */ W32((u32)(r_ecx+0x50u), r_edx);
    /* 00676695: mov ebx, dword ptr [eax + 0x3c] */ r_ebx = R32((u32)(r_eax+0x3cu));
    /* 00676698: mov dword ptr [ecx + 0x54], ebx */ W32((u32)(r_ecx+0x54u), r_ebx);
    /* 0067669b: mov esi, dword ptr [eax + 0x40] */ r_esi = R32((u32)(r_eax+0x40u));
    /* 0067669e: mov dword ptr [ecx + 0x58], esi */ W32((u32)(r_ecx+0x58u), r_esi);
    /* 006766a1: mov dword ptr [ecx + 0x44], edx */ W32((u32)(r_ecx+0x44u), r_edx);
    /* 006766a4: mov dword ptr [ecx + 0x48], ebx */ W32((u32)(r_ecx+0x48u), r_ebx);
    /* 006766a7: mov dword ptr [ecx + 0x4c], esi */ W32((u32)(r_ecx+0x4cu), r_esi);
    /* 006766aa: mov dword ptr [ecx + 0x38], edx */ W32((u32)(r_ecx+0x38u), r_edx);
    /* 006766ad: mov dword ptr [ecx + 0x3c], ebx */ W32((u32)(r_ecx+0x3cu), r_ebx);
    /* 006766b0: mov dword ptr [ecx + 0x40], esi */ W32((u32)(r_ecx+0x40u), r_esi);
    /* 006766b3: mov edi, dword ptr [eax + 0x60] */ r_edi = R32((u32)(r_eax+0x60u));
    /* 006766b6: mov dword ptr [ecx + 0x60], edi */ W32((u32)(r_ecx+0x60u), r_edi);
    /* 006766b9: mov eax, dword ptr [eax + 0x84] */ r_eax = R32((u32)(r_eax+0x84u));
    /* 006766bf: mov dword ptr [ecx + 0x33c], eax */ W32((u32)(r_ecx+0x33cu), r_eax);
    /* 006766c5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006766c7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006766c8: mov dword ptr [ecx + 0x340], eax */ W32((u32)(r_ecx+0x340u), r_eax);
    /* 006766ce: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x6766d3u); f_007706b0();
    /* 006766d3: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 006766d6: mov ebx, dword ptr [eax + 0x33c] */ r_ebx = R32((u32)(r_eax+0x33cu));
    /* 006766dc: mov ecx, dword ptr [ebx*4 + 0xa8ff38] */ r_ecx = R32((u32)(r_ebx*4+0xa8ff38u));
    /* 006766e3: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006766e5: mov word ptr [eax + 0x32e], dx */ W16((u32)(r_eax+0x32eu), (u16)r_edx);
    /* 006766ec: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006766ed: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x6766f2u); f_005b8638();
    /* 006766f2: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006766f5: mov dword ptr [ecx + 0xc0], 0 */ W32((u32)(r_ecx+0xc0u), 0x0u);
    /* 006766ff: mov dword ptr [ecx + 0xf8], eax */ W32((u32)(r_ecx+0xf8u), r_eax);
    /* 00676705: mov dword ptr [ecx + 0xc8], 0x3f800000 */ W32((u32)(r_ecx+0xc8u), 0x3f800000u);
    /* 0067670f: fild dword ptr [eax + 4] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x4u)));
    /* 00676712: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00676715: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00676718: fadd dword ptr [edx*4 + 0x93ac78] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x93ac78u));
    /* 0067671f: fstp dword ptr [ecx + 0xc4] */ W_F32((u32)(r_ecx+0xc4u), ST(0)); FPOP();
    /* 00676725: call 0x676784 */ r_esp -= 4; W32(r_esp, 0x67672au); f_00676784();
    /* 0067672a: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0067672d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0067672f: mov eax, dword ptr [ecx + 0x33c] */ r_eax = R32((u32)(r_ecx+0x33cu));
    /* 00676735: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 00676738: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0067673a: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0067673c: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0067673e: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00676740: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00676742: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00676744: lea ebx, [edx + edx + 0x9c9bc0] */ r_ebx = (u32)(r_edx+r_edx+0x9c9bc0u);
    /* 0067674b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0067674c: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x676751u); f_007b9a88();
    /* 00676751: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00676754: push 0x1f00 */ { u32 v = 0x1f00u; r_esp -= 4; W32(r_esp, v); }
    /* 00676759: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067675b: call 0x7b52c4 */ r_esp -= 4; W32(r_esp, 0x676760u); f_007b52c4();
    /* 00676760: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00676763: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x676768u); f_007b4f54();
    /* 00676768: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0067676b: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0067676e: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00676771: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00676774: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00676777: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0067677e: mov esp, ebp */ r_esp = r_ebp;
    /* 00676780: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00676781: ret 8 */ FN_RET(0x0067663c); r_esp += 12; return;
}

void f_0067676f(void)
{
    FN_ENTER(0x0067676f);
    goto L_0067676f;
L_00676755:; BB(0x00676755);
    /* 00676755: add byte ptr [edi], bl */ { u32 ad = (u32)(r_edi);  u32 a = R8(ad); u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00676757: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00676759: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067675b: call 0x7b52c4 */ r_esp -= 4; W32(r_esp, 0x676760u); f_007b52c4();
    /* 00676760: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00676763: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x676768u); f_007b4f54();
    /* 00676768: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0067676b: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0067676e: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
L_0067676f:; BB(0x0067676f);
    /* 0067676f: jne 0x676755 */ if (!fZ) goto L_00676755;
L_00676771:; BB(0x00676771);
    /* 00676771: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00676774: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00676777: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0067677e: mov esp, ebp */ r_esp = r_ebp;
    /* 00676780: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00676781: ret 8 */ FN_RET(0x0067676f); r_esp += 12; return;
}

void f_00676784(void) /* sub_676784 */
{
    FN_ENTER(0x00676784);
    /* 00676784: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00676785: mov esi, ecx */ r_esi = r_ecx;
    /* 00676787: mov eax, dword ptr [esi + 0x33c] */ r_eax = R32((u32)(r_esi+0x33cu));
    /* 0067678d: mov ecx, dword ptr [eax*4 + 0xa8ff38] */ r_ecx = R32((u32)(r_eax*4+0xa8ff38u));
    /* 00676794: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00676796: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x67679bu); f_005b8610();
    /* 0067679b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067679d: mov dword ptr [esi + 0x34], eax */ W32((u32)(r_esi+0x34u), r_eax);
    /* 006767a0: mov eax, dword ptr [esi + 0x33c] */ r_eax = R32((u32)(r_esi+0x33cu));
    /* 006767a6: mov ecx, dword ptr [eax*4 + 0xa8ff38] */ r_ecx = R32((u32)(r_eax*4+0xa8ff38u));
    /* 006767ad: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x6767b2u); f_005b8624();
    /* 006767b2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006767b4: mov dword ptr [esi + 0x24], eax */ W32((u32)(r_esi+0x24u), r_eax);
    /* 006767b7: mov eax, dword ptr [esi + 0x33c] */ r_eax = R32((u32)(r_esi+0x33cu));
    /* 006767bd: mov ecx, dword ptr [eax*4 + 0xa8ff38] */ r_ecx = R32((u32)(r_eax*4+0xa8ff38u));
    /* 006767c4: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x6767c9u); f_005b8638();
    /* 006767c9: mov dword ptr [esi + 0xf8], eax */ W32((u32)(r_esi+0xf8u), r_eax);
    /* 006767cf: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006767d0: ret  */ FN_RET(0x00676784); r_esp += 4; return;
}

void f_006767d4(void) /* sub_6767D4 */
{
    FN_ENTER(0x006767d4);
    /* 006767d4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006767d5: mov esi, ecx */ r_esi = r_ecx;
    /* 006767d7: mov eax, dword ptr [esi + 0x34] */ r_eax = R32((u32)(r_esi+0x34u));
    /* 006767da: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006767dc: je 0x676851 */ if (fZ) goto L_00676851;
L_006767de:; BB(0x006767de);
    /* 006767de: movsx eax, word ptr [esi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x32eu));
    /* 006767e5: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006767e8: je 0x676851 */ if (fZ) goto L_00676851;
L_006767ea:; BB(0x006767ea);
    /* 006767ea: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x6767efu); f_0082d7b0();
    /* 006767ef: lea ecx, [esi + 0x38] */ r_ecx = (u32)(r_esi+0x38u);
    /* 006767f2: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x6767f7u); f_0082d838();
    /* 006767f7: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 006767fa: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006767fc: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x676801u); f_0082d8bc();
    /* 00676801: mov eax, dword ptr [esi + 0x68] */ r_eax = R32((u32)(r_esi+0x68u));
    /* 00676804: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00676805: push dword ptr [esi + 0x6c] */ { u32 v = R32((u32)(r_esi+0x6cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00676808: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0067680a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067680b: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x676810u); f_0082fa0c();
    /* 00676810: mov ecx, dword ptr [esi + 0x24] */ r_ecx = R32((u32)(r_esi+0x24u));
    /* 00676813: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x676818u); f_00829cc8();
    /* 00676818: fld dword ptr [esi + 0xc0] */ FPUSH(R_F32((u32)(r_esi+0xc0u)));
    /* 0067681e: fcomp dword ptr [esi + 0xc4] */ fx_compare(ST(0), R_F32((u32)(r_esi+0xc4u))); FPOP();
    /* 00676824: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00676826: mov edx, dword ptr [esi + 0xc0] */ r_edx = R32((u32)(r_esi+0xc0u));
    /* 0067682c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0067682d: jae 0x676843 */ if (!fC) goto L_00676843;
L_0067682f:; BB(0x0067682f);
    /* 0067682f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00676830: push dword ptr [esi + 0xf8] */ { u32 v = R32((u32)(r_esi+0xf8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00676836: push dword ptr [esi + 0x34] */ { u32 v = R32((u32)(r_esi+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 00676839: call 0x830a28 */ r_esp -= 4; W32(r_esp, 0x67683eu); f_00830a28();
    /* 0067683e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00676841: jmp 0x67684c */ goto L_0067684c;
L_00676843:; BB(0x00676843);
    /* 00676843: push dword ptr [esi + 0x34] */ { u32 v = R32((u32)(r_esi+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 00676846: call 0x82e760 */ r_esp -= 4; W32(r_esp, 0x67684bu); f_0082e760();
    /* 0067684b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0067684c:; BB(0x0067684c);
    /* 0067684c: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x676851u); f_0082da80();
L_00676851:; BB(0x00676851);
    /* 00676851: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00676852: ret  */ FN_RET(0x006767d4); r_esp += 4; return;
}

void f_00676854(void) /* sub_676854 */
{
    FN_ENTER(0x00676854);
    /* 00676854: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00676855: mov edi, ecx */ r_edi = r_ecx;
    /* 00676857: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0067685b: movsx edx, word ptr [eax] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax));
    /* 0067685e: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00676861: je 0x676867 */ if (fZ) goto L_00676867;
L_00676863:; BB(0x00676863);
    /* 00676863: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00676864: ret 8 */ FN_RET(0x00676854); r_esp += 12; return;
L_00676867:; BB(0x00676867);
    /* 00676867: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0067686b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067686d: je 0x676880 */ if (fZ) goto L_00676880;
L_0067686f:; BB(0x0067686f);
    /* 0067686f: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00676871: mov ecx, edi */ r_ecx = r_edi;
    /* 00676873: call dword ptr [eax + 0x144] */ { u32 t = R32((u32)(r_eax+0x144u)); r_esp -= 4; W32(r_esp, 0x676879u); call_ind(t); }
    /* 00676879: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0067687a: call 0x6765c0 */ r_esp -= 4; W32(r_esp, 0x67687fu); f_006765c0();
    /* 0067687f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00676880:; BB(0x00676880);
    /* 00676880: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00676882: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00676884: mov ecx, edi */ r_ecx = r_edi;
    /* 00676886: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x67688bu); f_007b52ec();
    /* 0067688b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0067688c: call 0x8113bc */ r_esp -= 4; W32(r_esp, 0x676891u); f_008113bc();
    /* 00676891: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00676892: movzx edx, word ptr [edi + 8] */ r_edx = (u32)R16((u32)(r_edi+0x8u));
    /* 00676896: mov eax, 1 */ r_eax = 0x1u;
    /* 0067689b: mov word ptr [edi + 0x32e], ax */ W16((u32)(r_edi+0x32eu), (u16)r_eax);
    /* 006768a2: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006768a8: mov word ptr [edi + 8], dx */ W16((u32)(r_edi+0x8u), (u16)r_edx);
    /* 006768ac: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006768ad: ret 8 */ FN_RET(0x00676854); r_esp += 12; return;
}

void f_006768b0(void) /* sub_6768B0 */
{
    FN_ENTER(0x006768b0);
    /* 006768b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006768b1: mov ebp, esp */ r_ebp = r_esp;
    /* 006768b3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006768b5: push 0x8e998c */ { u32 v = 0x8e998cu; r_esp -= 4; W32(r_esp, v); }
    /* 006768ba: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006768c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006768c1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006768c8: sub esp, 0x110 */ {  u32 a = r_esp; u32 b = 0x110u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006768ce: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006768d1: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 006768d4: mov dword ptr [ebp - 0x24], esi */ W32((u32)(r_ebp+0xffffffdcu), r_esi);
    /* 006768d7: mov dword ptr [ebp - 0x20], ebx */ W32((u32)(r_ebp+0xffffffe0u), r_ebx);
    /* 006768da: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 006768dd: lea edi, [ebp - 0x11c] */ r_edi = (u32)(r_ebp+0xfffffee4u);
    /* 006768e3: mov esi, 0x93ab60 */ r_esi = 0x93ab60u;
    /* 006768e8: mov ecx, 0xe4 */ r_ecx = 0xe4u;
    /* 006768ed: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006768ee: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 006768f1: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 006768f3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006768f4: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 006768f7: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 006768f9: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006768fc: mov ecx, dword ptr [0xa8ff40] */ r_ecx = R32((u32)(0xa8ff40u));
    /* 00676902: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00676904: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 00676907: mov esi, dword ptr [edx + 0x3c] */ r_esi = R32((u32)(r_edx+0x3cu));
    /* 0067690a: mov ebx, dword ptr [edx + 0x40] */ r_ebx = R32((u32)(r_edx+0x40u));
    /* 0067690d: mov dword ptr [ebp - 0x110], eax */ W32((u32)(r_ebp+0xfffffef0u), r_eax);
    /* 00676913: mov dword ptr [ebp - 0x10c], esi */ W32((u32)(r_ebp+0xfffffef4u), r_esi);
    /* 00676919: mov dword ptr [ebp - 0x108], ebx */ W32((u32)(r_ebp+0xfffffef8u), r_ebx);
    /* 0067691f: mov dword ptr [ebp - 0xe4], esi */ W32((u32)(r_ebp+0xffffff1cu), r_esi);
    /* 00676925: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x67692au); f_005b8610();
    /* 0067692a: mov ecx, dword ptr [0xa8ff40] */ r_ecx = R32((u32)(0xa8ff40u));
    /* 00676930: mov dword ptr [ebp - 0xdc], eax */ W32((u32)(r_ebp+0xffffff24u), r_eax);
    /* 00676936: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00676938: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x67693du); f_005b8624();
    /* 0067693d: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00676940: mov ecx, dword ptr [0xa8ff40] */ r_ecx = R32((u32)(0xa8ff40u));
    /* 00676946: mov esi, dword ptr [edx + 0x3c] */ r_esi = R32((u32)(r_edx+0x3cu));
    /* 00676949: mov ebx, dword ptr [edx + 0x40] */ r_ebx = R32((u32)(r_edx+0x40u));
    /* 0067694c: mov dword ptr [ebp - 0xd8], eax */ W32((u32)(r_ebp+0xffffff28u), r_eax);
    /* 00676952: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 00676955: mov dword ptr [ebp - 0xc4], eax */ W32((u32)(r_ebp+0xffffff3cu), r_eax);
    /* 0067695b: mov dword ptr [ebp - 0xc0], esi */ W32((u32)(r_ebp+0xffffff40u), r_esi);
    /* 00676961: mov dword ptr [ebp - 0xbc], ebx */ W32((u32)(r_ebp+0xffffff44u), r_ebx);
    /* 00676967: mov dword ptr [ebp - 0x98], esi */ W32((u32)(r_ebp+0xffffff68u), r_esi);
    /* 0067696d: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0067696f: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x676974u); f_005b8610();
    /* 00676974: mov ecx, dword ptr [0xa8ff40] */ r_ecx = R32((u32)(0xa8ff40u));
    /* 0067697a: mov dword ptr [ebp - 0x90], eax */ W32((u32)(r_ebp+0xffffff70u), r_eax);
    /* 00676980: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00676982: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x676987u); f_005b8624();
    /* 00676987: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0067698a: mov ecx, dword ptr [0xa8ff40] */ r_ecx = R32((u32)(0xa8ff40u));
    /* 00676990: mov esi, dword ptr [edx + 0x3c] */ r_esi = R32((u32)(r_edx+0x3cu));
    /* 00676993: mov ebx, dword ptr [edx + 0x40] */ r_ebx = R32((u32)(r_edx+0x40u));
    /* 00676996: mov dword ptr [ebp - 0x8c], eax */ W32((u32)(r_ebp+0xffffff74u), r_eax);
    /* 0067699c: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 0067699f: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
    /* 006769a2: mov dword ptr [ebp - 0x74], esi */ W32((u32)(r_ebp+0xffffff8cu), r_esi);
    /* 006769a5: mov dword ptr [ebp - 0x70], ebx */ W32((u32)(r_ebp+0xffffff90u), r_ebx);
    /* 006769a8: mov dword ptr [ebp - 0x4c], esi */ W32((u32)(r_ebp+0xffffffb4u), r_esi);
    /* 006769ab: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006769ad: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x6769b2u); f_005b8610();
    /* 006769b2: mov ecx, dword ptr [0xa8ff40] */ r_ecx = R32((u32)(0xa8ff40u));
    /* 006769b8: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 006769bb: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006769bd: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x6769c2u); f_005b8624();
    /* 006769c2: mov dword ptr [ebp - 0x38], 0x3f000000 */ W32((u32)(r_ebp+0xffffffc8u), 0x3f000000u);
    /* 006769c9: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 006769cc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006769ce: mov dword ptr [ebp - 0x34], 0x3f800000 */ W32((u32)(r_ebp+0xffffffccu), 0x3f800000u);
    /* 006769d5: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_006769d8:; BB(0x006769d8);
    /* 006769d8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006769db: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006769de: mov ecx, dword ptr [edx + 0x84] */ r_ecx = R32((u32)(r_edx+0x84u));
    /* 006769e4: mov ebx, dword ptr [ebp + ecx*4 - 0x38] */ r_ebx = R32((u32)(r_ebp+r_ecx*4+0xffffffc8u));
    /* 006769e8: lea esi, [eax + eax*4] */ r_esi = (u32)(r_eax+r_eax*4);
    /* 006769eb: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006769ed: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 006769f4: push 0x234 */ { u32 v = 0x234u; r_esp -= 4; W32(r_esp, v); }
    /* 006769f9: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006769fb: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 006769fd: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006769ff: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00676a01: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00676a04: mov dword ptr [ebp + esi - 0xe0], ebx */ W32((u32)(r_ebp+r_esi+0xffffff20u), r_ebx);
    /* 00676a0b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x676a10u); f_005caba4();
    /* 00676a10: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00676a11: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00676a14: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00676a16: je 0x676a45 */ if (fZ) goto L_00676a45;
L_00676a18:; BB(0x00676a18);
    /* 00676a18: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 00676a1f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00676a26: mov ebx, esi */ r_ebx = r_esi;
    /* 00676a28: lea edx, [ebp - 0x11c] */ r_edx = (u32)(r_ebp+0xfffffee4u);
    /* 00676a2e: add ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00676a30: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00676a31: mov ecx, eax */ r_ecx = r_eax;
    /* 00676a33: push dword ptr [0xaca34c] */ { u32 v = R32((u32)(0xaca34cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00676a39: call 0x6441f4 */ r_esp -= 4; W32(r_esp, 0x676a3eu); f_006441f4();
    /* 00676a3e: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_00676a45:; BB(0x00676a45);
    /* 00676a45: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00676a4c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00676a4f: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00676a52: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00676a55: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00676a58: jb 0x6769d8 */ if (fC) goto L_006769d8;
L_00676a5e:; BB(0x00676a5e);
    /* 00676a5e: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00676a61: push 0x45 */ { u32 v = 0x45u; r_esp -= 4; W32(r_esp, v); }
    /* 00676a63: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00676a66: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00676a67: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x676a6cu); f_0050b510();
    /* 00676a6c: mov ebx, eax */ r_ebx = r_eax;
    /* 00676a6e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00676a71: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00676a73: je 0x676aa2 */ if (fZ) goto L_00676aa2;
L_00676a75:; BB(0x00676a75);
    /* 00676a75: push 0xffbfff3f */ { u32 v = 0xffbfff3fu; r_esp -= 4; W32(r_esp, v); }
    /* 00676a7a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00676a7c: call 0x508ee4 */ r_esp -= 4; W32(r_esp, 0x676a81u); f_00508ee4();
    /* 00676a81: movzx edx, word ptr [ebx + 0x2e] */ r_edx = (u32)R16((u32)(r_ebx+0x2eu));
    /* 00676a85: push 0x3f400000 */ { u32 v = 0x3f400000u; r_esp -= 4; W32(r_esp, v); }
    /* 00676a8a: or edx, 0xffff0008 */ {  u32 a = r_edx; u32 b = 0xffff0008u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00676a90: mov word ptr [ebx + 0x2e], dx */ W16((u32)(r_ebx+0x2eu), (u16)r_edx);
    /* 00676a94: mov dword ptr [ebx + 0x64], 0x40000000 */ W32((u32)(r_ebx+0x64u), 0x40000000u);
    /* 00676a9b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00676a9d: call 0x508dac */ r_esp -= 4; W32(r_esp, 0x676aa2u); f_00508dac();
L_00676aa2:; BB(0x00676aa2);
    /* 00676aa2: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 00676aa5: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00676aa8: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00676aab: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00676aae: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00676ab5: mov esp, ebp */ r_esp = r_ebp;
    /* 00676ab7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00676ab8: ret  */ FN_RET(0x006768b0); r_esp += 4; return;
}

void f_00676972(void)
{
    FN_ENTER(0x00676972);
    /* 00676972: hlt  */ UNSUP(0x00676972, "hlt");
}

void f_00676abc(void) /* sub_676ABC */
{
    FN_ENTER(0x00676abc);
    /* 00676abc: mov ecx, dword ptr [0xa8ff40] */ r_ecx = R32((u32)(0xa8ff40u));
    /* 00676ac2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00676ac4: je 0x676ad9 */ if (fZ) goto L_00676ad9;
L_00676ac6:; BB(0x00676ac6);
    /* 00676ac6: je 0x676acf */ if (fZ) goto L_00676acf;
L_00676ac8:; BB(0x00676ac8);
    /* 00676ac8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00676aca: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x676acfu); f_004066a8();
L_00676acf:; BB(0x00676acf);
    /* 00676acf: mov dword ptr [0xa8ff40], 0 */ W32((u32)(0xa8ff40u), 0x0u);
L_00676ad9:; BB(0x00676ad9);
    /* 00676ad9: ret  */ FN_RET(0x00676abc); r_esp += 4; return;
}

void f_00676adc(void)
{
    FN_ENTER(0x00676adc);
    /* 00676adc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00676add: mov ebp, esp */ r_ebp = r_esp;
    /* 00676adf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00676ae1: push 0x8e99b4 */ { u32 v = 0x8e99b4u; r_esp -= 4; W32(r_esp, v); }
    /* 00676ae6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00676aec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00676aed: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00676af4: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00676af7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00676afa: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00676afd: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00676b00: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00676b03: push 0x374 */ { u32 v = 0x374u; r_esp -= 4; W32(r_esp, v); }
    /* 00676b08: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00676b0f: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x676b14u); f_005caba4();
    /* 00676b14: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00676b15: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00676b18: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00676b1a: je 0x676b53 */ if (fZ) goto L_00676b53;
L_00676b1c:; BB(0x00676b1c);
    /* 00676b1c: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00676b23: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00676b2a: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00676b2d: push dword ptr [0xaca354] */ { u32 v = R32((u32)(0xaca354u)); r_esp -= 4; W32(r_esp, v); }
    /* 00676b33: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00676b36: call 0x676b58 */ r_esp -= 4; W32(r_esp, 0x676b3bu); f_00676b58();
    /* 00676b3b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00676b3e: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00676b45:; BB(0x00676b45);
    /* 00676b45: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00676b48: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00676b4f: mov esp, ebp */ r_esp = r_ebp;
    /* 00676b51: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00676b52: ret  */ FN_RET(0x00676adc); r_esp += 4; return;
L_00676b53:; BB(0x00676b53);
    /* 00676b53: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00676b55: jmp 0x676b45 */ goto L_00676b45;
}

void f_00676b58(void) /* sub_676B58 */
{
    FN_ENTER(0x00676b58);
    /* 00676b58: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00676b59: mov ebp, esp */ r_ebp = r_esp;
    /* 00676b5b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00676b5d: push 0x8e99d0 */ { u32 v = 0x8e99d0u; r_esp -= 4; W32(r_esp, v); }
    /* 00676b62: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00676b68: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00676b69: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00676b70: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00676b73: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00676b76: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00676b79: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00676b7c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00676b7f: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00676b82: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 00676b85: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00676b86: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00676b89: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00676b8c: call 0x64df84 */ r_esp -= 4; W32(r_esp, 0x676b91u); f_0064df84();
    /* 00676b91: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00676b98: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00676b9b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00676b9e: mov dword ptr [ecx], 0xb36d60 */ W32((u32)(r_ecx), 0xb36d60u);
    /* 00676ba4: mov eax, dword ptr [0x9c9c9c] */ r_eax = R32((u32)(0x9c9c9cu));
    /* 00676ba9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00676baa: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00676bad: call dword ptr [0xb36d74] */ { u32 t = R32((u32)(0xb36d74u)); r_esp -= 4; W32(r_esp, 0x676bb3u); call_ind(t); }
    /* 00676bb3: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x676bb8u); f_008587a5();
    /* 00676bb8: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00676bbb: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00676bbe: fild dword ptr [ebp - 0x34] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffccu)));
    /* 00676bc1: fdiv dword ptr [0x93acfc] */ ST(0) = ST(0) / R_F32((u32)(0x93acfcu));
    /* 00676bc7: fmul dword ptr [0x93ad00] */ ST(0) = ST(0) * R_F32((u32)(0x93ad00u));
    /* 00676bcd: fnstcw word ptr [ebp - 0x2c] */ W16((u32)(r_ebp+0xffffffd4u), fcw);
    /* 00676bd0: movzx eax, word ptr [ebp - 0x2c] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffd4u));
    /* 00676bd4: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00676bd9: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00676bdc: fldcw word ptr [ebp - 0x24] */ fcw = R16((u32)(r_ebp+0xffffffdcu));
    /* 00676bdf: fistp dword ptr [ecx + 0x370] */ W32((u32)(r_ecx+0x370u), (u32)fx_int32(ST(0))); FPOP();
    /* 00676be5: fldcw word ptr [ebp - 0x2c] */ fcw = R16((u32)(r_ebp+0xffffffd4u));
    /* 00676be8: call 0x676c58 */ r_esp -= 4; W32(r_esp, 0x676bedu); f_00676c58();
    /* 00676bed: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00676bf0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00676bf2: mov eax, dword ptr [ecx + 0x84] */ r_eax = R32((u32)(r_ecx+0x84u));
    /* 00676bf8: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 00676bfb: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00676bfd: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00676bff: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00676c01: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00676c03: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00676c05: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00676c07: lea ebx, [edx + edx + 0x9c9b60] */ r_ebx = (u32)(r_edx+r_edx+0x9c9b60u);
    /* 00676c0e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00676c0f: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x676c14u); f_007b9a88();
    /* 00676c14: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00676c17: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x676c1cu); f_007b4f54();
    /* 00676c1c: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00676c1f: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00676c22: mov edx, dword ptr [eax + 0xa4] */ r_edx = R32((u32)(r_eax+0xa4u));
    /* 00676c28: fld dword ptr [edx + 0xc] */ FPUSH(R_F32((u32)(r_edx+0xcu)));
    /* 00676c2b: fmul dword ptr [eax + 0x68] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x68u));
    /* 00676c2e: fstp dword ptr [edx + 0xc] */ W_F32((u32)(r_edx+0xcu), ST(0)); FPOP();
    /* 00676c31: call 0x676cd4 */ r_esp -= 4; W32(r_esp, 0x676c36u); f_00676cd4();
    /* 00676c36: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00676c39: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00676c3c: mov dword ptr [eax + 0x364], 0x447a0000 */ W32((u32)(r_eax+0x364u), 0x447a0000u);
    /* 00676c46: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00676c49: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00676c50: mov esp, ebp */ r_esp = r_ebp;
    /* 00676c52: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00676c53: ret 8 */ FN_RET(0x00676b58); r_esp += 12; return;
}

void f_00676c58(void) /* sub_676C58 */
{
    FN_ENTER(0x00676c58);
    /* 00676c58: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00676c59: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00676c5b: mov ecx, dword ptr [ebx + 0x84] */ r_ecx = R32((u32)(r_ebx+0x84u));
    /* 00676c61: mov eax, 1 */ r_eax = 0x1u;
    /* 00676c66: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00676c69: mov edx, 0 */ r_edx = 0x0u;
    /* 00676c6e: jl 0x676c72 */ if ((fS!=fO)) goto L_00676c72;
L_00676c70:; BB(0x00676c70);
    /* 00676c70: mov ecx, eax */ r_ecx = r_eax;
L_00676c72:; BB(0x00676c72);
    /* 00676c72: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00676c74: jg 0x676c78 */ if ((!fZ&&fS==fO)) goto L_00676c78;
L_00676c76:; BB(0x00676c76);
    /* 00676c76: mov ecx, edx */ r_ecx = r_edx;
L_00676c78:; BB(0x00676c78);
    /* 00676c78: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00676c79: mov dword ptr [ebx + 0x84], ecx */ W32((u32)(r_ebx+0x84u), r_ecx);
    /* 00676c7f: mov ecx, dword ptr [0xa8ff40] */ r_ecx = R32((u32)(0xa8ff40u));
    /* 00676c85: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x676c8au); f_005b8610();
    /* 00676c8a: push dword ptr [ebx + 0x84] */ { u32 v = R32((u32)(r_ebx+0x84u)); r_esp -= 4; W32(r_esp, v); }
    /* 00676c90: mov ecx, dword ptr [0xa8ff40] */ r_ecx = R32((u32)(0xa8ff40u));
    /* 00676c96: mov dword ptr [ebx + 0x34], eax */ W32((u32)(r_ebx+0x34u), r_eax);
    /* 00676c99: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x676c9eu); f_005b8624();
    /* 00676c9e: mov ecx, dword ptr [0xa8ff40] */ r_ecx = R32((u32)(0xa8ff40u));
    /* 00676ca4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00676ca6: mov dword ptr [ebx + 0x24], eax */ W32((u32)(r_ebx+0x24u), r_eax);
    /* 00676ca9: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x676caeu); f_005b8638();
    /* 00676cae: mov dword ptr [ebx + 0xf8], eax */ W32((u32)(r_ebx+0xf8u), r_eax);
    /* 00676cb4: fild dword ptr [eax + 4] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x4u)));
    /* 00676cb7: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00676cba: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r; fC = (c <= 32) ? ((a >> (c - 1)) & 1) : 0; fO = (a >> 31) & 1; fZ = (r == 0); fS = (r >> 31) & 1; fP = !__builtin_parity(r & 0xffu); } }
    /* 00676cbd: fadd dword ptr [edx*4 + 0x93ac70] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x93ac70u));
    /* 00676cc4: fst dword ptr [ebx + 0xc4] */ W_F32((u32)(r_ebx+0xc4u), ST(0));
    /* 00676cca: fstp dword ptr [ebx + 0xc0] */ W_F32((u32)(r_ebx+0xc0u), ST(0)); FPOP();
    /* 00676cd0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00676cd1: ret  */ FN_RET(0x00676c58); r_esp += 4; return;
}

void f_00676cd4(void) /* sub_676CD4 */
{
    FN_ENTER(0x00676cd4);
    /* 00676cd4: fld dword ptr [0x9c9b64] */ FPUSH(R_F32((u32)(0x9c9b64u)));
    /* 00676cda: fadd dword ptr [ecx + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x3cu));
    /* 00676cdd: mov edx, dword ptr [ecx + 0x40] */ r_edx = R32((u32)(r_ecx+0x40u));
    /* 00676ce0: mov eax, dword ptr [ecx + 0x38] */ r_eax = R32((u32)(r_ecx+0x38u));
    /* 00676ce3: fst dword ptr [ecx + 0x304] */ W_F32((u32)(r_ecx+0x304u), ST(0));
    /* 00676ce9: fstp dword ptr [ecx + 0x78] */ W_F32((u32)(r_ecx+0x78u), ST(0)); FPOP();
    /* 00676cec: mov dword ptr [ecx + 0x308], edx */ W32((u32)(r_ecx+0x308u), r_edx);
    /* 00676cf2: mov dword ptr [ecx + 0x300], eax */ W32((u32)(r_ecx+0x300u), r_eax);
    /* 00676cf8: mov dword ptr [ecx + 0x74], eax */ W32((u32)(r_ecx+0x74u), r_eax);
    /* 00676cfb: mov dword ptr [ecx + 0x7c], edx */ W32((u32)(r_ecx+0x7cu), r_edx);
    /* 00676cfe: ret  */ FN_RET(0x00676cd4); r_esp += 4; return;
}

void f_00676d00(void) /* sub_676D00 */
{
    FN_ENTER(0x00676d00);
    /* 00676d00: mov edx, ecx */ r_edx = r_ecx;
    /* 00676d02: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 00676d06: mov eax, 1 */ r_eax = 0x1u;
    /* 00676d0b: shl eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00676d0d: or dword ptr [edx + 0x340], eax */ { u32 ad = (u32)(r_edx+0x340u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00676d13: ret 4 */ FN_RET(0x00676d00); r_esp += 8; return;
}

void f_00676d18(void) /* sub_676D18 */
{
    FN_ENTER(0x00676d18);
    /* 00676d18: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00676d19: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00676d1a: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00676d1d: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00676d1f: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x676d24u); f_004f7c84();
    /* 00676d24: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00676d26: jne 0x676e01 */ if (!fZ) goto L_00676e01;
L_00676d2c:; BB(0x00676d2c);
    /* 00676d2c: fld dword ptr [ebp + 0xc0] */ FPUSH(R_F32((u32)(r_ebp+0xc0u)));
    /* 00676d32: fadd dword ptr [ebp + 0xc8] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xc8u));
    /* 00676d38: fld dword ptr [ebp + 0xc4] */ FPUSH(R_F32((u32)(r_ebp+0xc4u)));
    /* 00676d3e: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00676d40: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00676d42: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00676d43: ja 0x676d4f */ if ((!fC&&!fZ)) goto L_00676d4f;
L_00676d45:; BB(0x00676d45);
    /* 00676d45: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00676d47: fstp dword ptr [ebp + 0xc0] */ W_F32((u32)(r_ebp+0xc0u), ST(0)); FPOP();
    /* 00676d4d: jmp 0x676d57 */ goto L_00676d57;
L_00676d4f:; BB(0x00676d4f);
    /* 00676d4f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00676d51: fstp dword ptr [ebp + 0xc0] */ W_F32((u32)(r_ebp+0xc0u), ST(0)); FPOP();
L_00676d57:; BB(0x00676d57);
    /* 00676d57: fld dword ptr [0x93acb8] */ FPUSH(R_F32((u32)(0x93acb8u)));
    /* 00676d5d: fadd dword ptr [ebp + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x3cu));
    /* 00676d60: mov ebx, dword ptr [ebp + 0x40] */ r_ebx = R32((u32)(r_ebp+0x40u));
    /* 00676d63: mov eax, dword ptr [ebp + 0x38] */ r_eax = R32((u32)(r_ebp+0x38u));
    /* 00676d66: fstp dword ptr [ebp + 0x304] */ W_F32((u32)(r_ebp+0x304u), ST(0)); FPOP();
    /* 00676d6c: mov dword ptr [ebp + 0x308], ebx */ W32((u32)(r_ebp+0x308u), r_ebx);
    /* 00676d72: mov dword ptr [ebp + 0x300], eax */ W32((u32)(r_ebp+0x300u), r_eax);
    /* 00676d78: lea ebx, [ebp + 0x38] */ r_ebx = (u32)(r_ebp+0x38u);
    /* 00676d7b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00676d7d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00676d7e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00676d7f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00676d80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00676d81: push 0x6bf */ { u32 v = 0x6bfu; r_esp -= 4; W32(r_esp, v); }
    /* 00676d86: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x676d8bu); f_008144b0();
    /* 00676d8b: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00676d8e: movsx eax, word ptr [ebp + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32eu));
    /* 00676d95: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00676d97: je 0x676dfa */ if (fZ) goto L_00676dfa;
L_00676d99:; BB(0x00676d99);
    /* 00676d99: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00676d9c: jne 0x676da7 */ if (!fZ) goto L_00676da7;
L_00676d9e:; BB(0x00676d9e);
    /* 00676d9e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00676da0: call 0x676ef4 */ r_esp -= 4; W32(r_esp, 0x676da5u); f_00676ef4();
    /* 00676da5: jmp 0x676e01 */ goto L_00676e01;
L_00676da7:; BB(0x00676da7);
    /* 00676da7: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00676daa: jne 0x676e01 */ if (!fZ) goto L_00676e01;
L_00676dac:; BB(0x00676dac);
    /* 00676dac: mov eax, dword ptr [ebp + 0x38] */ r_eax = R32((u32)(r_ebp+0x38u));
    /* 00676daf: mov dword ptr [ebp + 0x310], 0 */ W32((u32)(r_ebp+0x310u), 0x0u);
    /* 00676db9: mov dword ptr [ebp + 0x44], eax */ W32((u32)(r_ebp+0x44u), r_eax);
    /* 00676dbc: mov eax, dword ptr [ebp + 0x3c] */ r_eax = R32((u32)(r_ebp+0x3cu));
    /* 00676dbf: mov dword ptr [ebp + 0x48], eax */ W32((u32)(r_ebp+0x48u), r_eax);
    /* 00676dc2: mov eax, dword ptr [ebp + 0x40] */ r_eax = R32((u32)(r_ebp+0x40u));
    /* 00676dc5: mov dword ptr [ebp + 0x4c], eax */ W32((u32)(r_ebp+0x4cu), r_eax);
    /* 00676dc8: lea edx, [ebp + 0x30c] */ r_edx = (u32)(r_ebp+0x30cu);
    /* 00676dce: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00676dd0: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x676dd5u); f_0082ebac();
    /* 00676dd5: push 0x1eef */ { u32 v = 0x1eefu; r_esp -= 4; W32(r_esp, v); }
    /* 00676dda: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00676ddb: lea eax, [ebp + 0x44] */ r_eax = (u32)(r_ebp+0x44u);
    /* 00676dde: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00676ddf: call 0x77fffc */ r_esp -= 4; W32(r_esp, 0x676de4u); f_0077fffc();
    /* 00676de4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00676de7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00676de9: je 0x676e07 */ if (fZ) goto L_00676e07;
L_00676deb:; BB(0x00676deb);
    /* 00676deb: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 00676def: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00676df4: mov word ptr [ebp + 8], ax */ W16((u32)(r_ebp+0x8u), (u16)r_eax);
    /* 00676df8: jmp 0x676e01 */ goto L_00676e01;
L_00676dfa:; BB(0x00676dfa);
    /* 00676dfa: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00676dfc: call 0x677034 */ r_esp -= 4; W32(r_esp, 0x676e01u); f_00677034();
L_00676e01:; BB(0x00676e01);
    /* 00676e01: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00676e04: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00676e05: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00676e06: ret  */ FN_RET(0x00676d18); r_esp += 4; return;
L_00676e07:; BB(0x00676e07);
    /* 00676e07: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00676e08: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x676e0du); f_007b999c();
    /* 00676e0d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00676e0e: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 00676e12: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_00676e14:; BB(0x00676e14);
    /* 00676e14: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00676e15: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x676e1au); f_0068d5a8();
    /* 00676e1a: mov esi, eax */ r_esi = r_eax;
    /* 00676e1c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00676e1f: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00676e21: je 0x676edf */ if (fZ) goto L_00676edf;
L_00676e27:; BB(0x00676e27);
    /* 00676e27: mov edx, dword ptr [esi + 0x3f0] */ r_edx = R32((u32)(r_esi+0x3f0u));
    /* 00676e2d: cmp edx, dword ptr [0xaafca0] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaafca0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00676e33: jne 0x676edf */ if (!fZ) goto L_00676edf;
L_00676e39:; BB(0x00676e39);
    /* 00676e39: mov edx, dword ptr [esi + 0x30] */ r_edx = R32((u32)(r_esi+0x30u));
    /* 00676e3c: test edx, 0x4000e00 */ {  u32 a = r_edx; u32 b = 0x4000e00u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 00676e42: jne 0x676edf */ if (!fZ) goto L_00676edf;
L_00676e48:; BB(0x00676e48);
    /* 00676e48: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00676e4a: mov edx, 1 */ r_edx = 0x1u;
    /* 00676e4f: shl edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00676e51: test dword ptr [ebp + 0x340], edx */ {  u32 a = R32((u32)(r_ebp+0x340u)); u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00676e57: je 0x676e60 */ if (fZ) goto L_00676e60;
L_00676e59:; BB(0x00676e59);
    /* 00676e59: mov edx, 1 */ r_edx = 0x1u;
    /* 00676e5e: jmp 0x676e62 */ goto L_00676e62;
L_00676e60:; BB(0x00676e60);
    /* 00676e60: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_00676e62:; BB(0x00676e62);
    /* 00676e62: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00676e64: jne 0x676edf */ if (!fZ) goto L_00676edf;
L_00676e66:; BB(0x00676e66);
    /* 00676e66: push 0x42c80000 */ { u32 v = 0x42c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 00676e6b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00676e6c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00676e6e: call 0x7b8338 */ r_esp -= 4; W32(r_esp, 0x676e73u); f_007b8338();
    /* 00676e73: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00676e75: je 0x676edf */ if (fZ) goto L_00676edf;
L_00676e77:; BB(0x00676e77);
    /* 00676e77: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x676e7cu); f_008587a5();
    /* 00676e7c: mov edx, dword ptr [0xa9cd68] */ r_edx = R32((u32)(0xa9cd68u));
    /* 00676e82: fld dword ptr [edx*4 + 0x93accc] */ FPUSH(R_F32((u32)(r_edx*4+0x93acccu)));
    /* 00676e89: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00676e8c: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 00676e8f: fdiv dword ptr [0x93acac] */ ST(0) = ST(0) / R_F32((u32)(0x93acacu));
    /* 00676e95: fmul dword ptr [0x93aca8] */ ST(0) = ST(0) * R_F32((u32)(0x93aca8u));
    /* 00676e9b: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 00676e9d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00676e9f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00676ea0: jb 0x676ea6 */ if (fC) goto L_00676ea6;
L_00676ea2:; BB(0x00676ea2);
    /* 00676ea2: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00676ea4: jmp 0x676ed3 */ goto L_00676ed3;
L_00676ea6:; BB(0x00676ea6);
    /* 00676ea6: fld dword ptr [0x93aca4] */ FPUSH(R_F32((u32)(0x93aca4u)));
    /* 00676eac: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00676eae: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00676eb0: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00676eb4: mov dword ptr [esp + 0xc], 0x10 */ W32((u32)(r_esp+0xcu), 0x10u);
    /* 00676ebc: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 00676ec1: mov ecx, esi */ r_ecx = r_esi;
    /* 00676ec3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00676ec4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00676ec5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00676ec7: push dword ptr [esp + 0x1c] */ { u32 v = R32((u32)(r_esp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00676ecb: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00676ecd: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00676ece: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x676ed1u); call_ind(t); }
    /* 00676ed1: fstp st(0) */ ST(0) = ST(0); FPOP();
L_00676ed3:; BB(0x00676ed3);
    /* 00676ed3: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 00676ed7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00676ed8: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00676eda: call 0x676d00 */ r_esp -= 4; W32(r_esp, 0x676edfu); f_00676d00();
L_00676edf:; BB(0x00676edf);
    /* 00676edf: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00676ee2: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00676ee5: jl 0x676e14 */ if ((fS!=fO)) goto L_00676e14;
L_00676eeb:; BB(0x00676eeb);
    /* 00676eeb: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 00676eef: jmp 0x676e01 */ goto L_00676e01;
}

void f_00676e65(void)
{
    FN_ENTER(0x00676e65);
    goto L_00676e65;
L_00676e01:; BB(0x00676e01);
    /* 00676e01: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00676e04: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00676e05: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00676e06: ret  */ FN_RET(0x00676e65); r_esp += 4; return;
L_00676e14:; BB(0x00676e14);
    /* 00676e14: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00676e15: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x676e1au); f_0068d5a8();
    /* 00676e1a: mov esi, eax */ r_esi = r_eax;
    /* 00676e1c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00676e1f: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00676e21: je 0x676edf */ if (fZ) goto L_00676edf;
L_00676e27:; BB(0x00676e27);
    /* 00676e27: mov edx, dword ptr [esi + 0x3f0] */ r_edx = R32((u32)(r_esi+0x3f0u));
    /* 00676e2d: cmp edx, dword ptr [0xaafca0] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaafca0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00676e33: jne 0x676edf */ if (!fZ) goto L_00676edf;
L_00676e39:; BB(0x00676e39);
    /* 00676e39: mov edx, dword ptr [esi + 0x30] */ r_edx = R32((u32)(r_esi+0x30u));
    /* 00676e3c: test edx, 0x4000e00 */ {  u32 a = r_edx; u32 b = 0x4000e00u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 00676e42: jne 0x676edf */ if (!fZ) goto L_00676edf;
L_00676e48:; BB(0x00676e48);
    /* 00676e48: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00676e4a: mov edx, 1 */ r_edx = 0x1u;
    /* 00676e4f: shl edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00676e51: test dword ptr [ebp + 0x340], edx */ {  u32 a = R32((u32)(r_ebp+0x340u)); u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00676e57: je 0x676e60 */ if (fZ) goto L_00676e60;
L_00676e59:; BB(0x00676e59);
    /* 00676e59: mov edx, 1 */ r_edx = 0x1u;
    /* 00676e5e: jmp 0x676e62 */ goto L_00676e62;
L_00676e60:; BB(0x00676e60);
    /* 00676e60: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_00676e62:; BB(0x00676e62);
    /* 00676e62: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00676e64: jne 0x676edf */ if (!fZ) goto L_00676edf;
L_00676e65:; BB(0x00676e65);
    /* 00676e65: jns 0x676ecf */ if (!fS) goto L_00676ecf;
L_00676e66:; BB(0x00676e66);
    /* 00676e66: push 0x42c80000 */ { u32 v = 0x42c80000u; r_esp -= 4; W32(r_esp, v); }
L_00676e67:; BB(0x00676e67);
    /* 00676e67: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00676e69: enter 0x5642, -0x75 */ { u32 f = 0x5642u; u32 lv = 11u; r_esp -= 4; W32(r_esp, r_ebp); u32 fr = r_esp; if (lv) { u32 k = 1; while (k < lv) { r_ebp -= 4; r_esp -= 4; W32(r_esp, R32(r_ebp)); k++; } r_esp -= 4; W32(r_esp, fr); } r_ebp = fr; r_esp -= f; }
    /* 00676e6b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00676e6c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00676e6d: int 0xe8 */ UNSUP(0x00676e6d, "int 0xe8");
    /* 00676e6e: call 0x7b8338 */ r_esp -= 4; W32(r_esp, 0x676e73u); f_007b8338();
    /* 00676e6f: lds edx, ptr [esp + edx] */ UNSUP(0x00676e6f, "lds edx, ptr [esp + edx]");
    /* 00676e72: add byte ptr [ebp - 0x17978b40], al */ { u32 ad = (u32)(r_ebp+0xe86874c0u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00676e73: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00676e75: je 0x676edf */ if (fZ) goto L_00676edf;
L_00676e77:; BB(0x00676e77);
    /* 00676e77: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x676e7cu); f_008587a5();
    /* 00676e78: sub dword ptr [ecx], ebx */ { u32 ad = (u32)(r_ecx);  u32 a = R32(ad); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 00676e7a: push ds */ { u32 v = 0x2bu; r_esp -= 4; W32(r_esp, v); }
    /* 00676e7b: add byte ptr [ebx - 0x563297eb], cl */ { u32 ad = (u32)(r_ebx+0xa9cd6815u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00676e7c: mov edx, dword ptr [0xa9cd68] */ r_edx = R32((u32)(0xa9cd68u));
    /* 00676e81: add cl, bl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00676e82: fld dword ptr [edx*4 + 0x93accc] */ FPUSH(R_F32((u32)(r_edx*4+0x93acccu)));
    /* 00676e83: add al, 0x95 */ {  u32 a = (u8)r_eax; u32 b = 0x95u; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00676e85: int3  */ UNSUP(0x00676e85, "int3");
    /* 00676e89: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00676e8c: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 00676e8f: fdiv dword ptr [0x93acac] */ ST(0) = ST(0) / R_F32((u32)(0x93acacu));
    /* 00676e95: fmul dword ptr [0x93aca8] */ ST(0) = ST(0) * R_F32((u32)(0x93aca8u));
    /* 00676e9b: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 00676e9d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00676e9f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00676ea0: jb 0x676ea6 */ if (fC) goto L_00676ea6;
L_00676ea2:; BB(0x00676ea2);
    /* 00676ea2: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00676ea4: jmp 0x676ed3 */ goto L_00676ed3;
L_00676ea6:; BB(0x00676ea6);
    /* 00676ea6: fld dword ptr [0x93aca4] */ FPUSH(R_F32((u32)(0x93aca4u)));
    /* 00676eac: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00676eae: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00676eb0: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00676eb4: mov dword ptr [esp + 0xc], 0x10 */ W32((u32)(r_esp+0xcu), 0x10u);
    /* 00676ebc: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 00676ec1: mov ecx, esi */ r_ecx = r_esi;
    /* 00676ec3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00676ec4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00676ec5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00676ec7: push dword ptr [esp + 0x1c] */ { u32 v = R32((u32)(r_esp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00676ecb: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00676ecd: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00676ece: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x676ed1u); call_ind(t); }
L_00676ecf:; BB(0x00676ecf);
    /* 00676ecf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00676ed0: pushal  */ { u32 sp = r_esp; r_esp -= 32; W32(r_esp, r_edi); W32(r_esp + 4, r_esi); W32(r_esp + 8, r_ebp); W32(r_esp + 12, sp); W32(r_esp + 16, r_ebx); W32(r_esp + 20, r_edx); W32(r_esp + 24, r_ecx); W32(r_esp + 28, r_eax); }
    /* 00676ed1: fstp st(0) */ ST(0) = ST(0); FPOP();
L_00676ed3:; BB(0x00676ed3);
    /* 00676ed3: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 00676ed7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00676ed8: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00676eda: call 0x676d00 */ r_esp -= 4; W32(r_esp, 0x676edfu); f_00676d00();
L_00676edf:; BB(0x00676edf);
    /* 00676edf: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00676ee2: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00676ee5: jl 0x676e14 */ if ((fS!=fO)) goto L_00676e14;
L_00676eeb:; BB(0x00676eeb);
    /* 00676eeb: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 00676eef: jmp 0x676e01 */ goto L_00676e01;
}

void f_00676e69(void)
{
    FN_ENTER(0x00676e69);
    /* 00676e69: enter 0x5642, -0x75 */ { u32 f = 0x5642u; u32 lv = 11u; r_esp -= 4; W32(r_esp, r_ebp); u32 fr = r_esp; if (lv) { u32 k = 1; while (k < lv) { r_ebp -= 4; r_esp -= 4; W32(r_esp, R32(r_ebp)); k++; } r_esp -= 4; W32(r_esp, fr); } r_ebp = fr; r_esp -= f; }
    /* 00676e6d: int 0xe8 */ UNSUP(0x00676e6d, "int 0xe8");
    /* 00676e6f: lds edx, ptr [esp + edx] */ UNSUP(0x00676e6f, "lds edx, ptr [esp + edx]");
    /* 00676e72: add byte ptr [ebp - 0x17978b40], al */ { u32 ad = (u32)(r_ebp+0xe86874c0u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00676e78: sub dword ptr [ecx], ebx */ { u32 ad = (u32)(r_ecx);  u32 a = R32(ad); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 00676e7a: push ds */ { u32 v = 0x2bu; r_esp -= 4; W32(r_esp, v); }
    /* 00676e7b: add byte ptr [ebx - 0x563297eb], cl */ { u32 ad = (u32)(r_ebx+0xa9cd6815u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00676e81: add cl, bl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00676e83: add al, 0x95 */ {  u32 a = (u8)r_eax; u32 b = 0x95u; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00676e85: int3  */ UNSUP(0x00676e85, "int3");
}

void f_00676ef4(void) /* sub_676EF4 */
{
    FN_ENTER(0x00676ef4);
    /* 00676ef4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00676ef5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00676ef6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00676ef7: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00676efa: mov edi, ecx */ r_edi = r_ecx;
    /* 00676efc: mov ecx, edi */ r_ecx = r_edi;
    /* 00676efe: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x676f03u); f_00770738();
    /* 00676f03: mov esi, eax */ r_esi = r_eax;
    /* 00676f05: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00676f07: je 0x676faf */ if (fZ) goto L_00676faf;
L_00676f0d:; BB(0x00676f0d);
    /* 00676f0d: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00676f0f: je 0x676f33 */ if (fZ) goto L_00676f33;
L_00676f11:; BB(0x00676f11);
    /* 00676f11: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00676f13: push dword ptr [esi + 0x40] */ { u32 v = R32((u32)(r_esi+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 00676f16: mov ecx, edi */ r_ecx = r_edi;
    /* 00676f18: push dword ptr [esi + 0x3c] */ { u32 v = R32((u32)(r_esi+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00676f1b: push dword ptr [esi + 0x38] */ { u32 v = R32((u32)(r_esi+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 00676f1e: call 0x771c8c */ r_esp -= 4; W32(r_esp, 0x676f23u); f_00771c8c();
    /* 00676f23: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00676f25: je 0x676f33 */ if (fZ) goto L_00676f33;
L_00676f27:; BB(0x00676f27);
    /* 00676f27: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 00676f2c: mov ecx, edi */ r_ecx = r_edi;
    /* 00676f2e: call 0x772358 */ r_esp -= 4; W32(r_esp, 0x676f33u); f_00772358();
L_00676f33:; BB(0x00676f33);
    /* 00676f33: fld dword ptr [edi + 0xc0] */ FPUSH(R_F32((u32)(r_edi+0xc0u)));
    /* 00676f39: fadd dword ptr [edi + 0xc8] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0xc8u));
    /* 00676f3f: fcomp dword ptr [edi + 0xc4] */ fx_compare(ST(0), R_F32((u32)(r_edi+0xc4u))); FPOP();
    /* 00676f45: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00676f47: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00676f48: jb 0x676fa8 */ if (fC) goto L_00676fa8;
L_00676f4a:; BB(0x00676f4a);
    /* 00676f4a: push dword ptr [edi + 0x60] */ { u32 v = R32((u32)(r_edi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 00676f4d: push 0x40200000 */ { u32 v = 0x40200000u; r_esp -= 4; W32(r_esp, v); }
    /* 00676f52: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00676f54: mov ecx, edi */ r_ecx = r_edi;
    /* 00676f56: call dword ptr [eax + 0x48] */ { u32 t = R32((u32)(r_eax+0x48u)); r_esp -= 4; W32(r_esp, 0x676f59u); call_ind(t); }
    /* 00676f59: mov edx, dword ptr [edi + 0x33c] */ r_edx = R32((u32)(r_edi+0x33cu));
    /* 00676f5f: mov ecx, dword ptr [edx*4 + 0xa8ff38] */ r_ecx = R32((u32)(r_edx*4+0xa8ff38u));
    /* 00676f66: mov eax, 2 */ r_eax = 0x2u;
    /* 00676f6b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00676f6c: mov word ptr [edi + 0x32e], ax */ W16((u32)(r_edi+0x32eu), (u16)r_eax);
    /* 00676f73: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x676f78u); f_005b8638();
    /* 00676f78: mov dword ptr [edi + 0xc0], 0 */ W32((u32)(r_edi+0xc0u), 0x0u);
    /* 00676f82: mov dword ptr [edi + 0xf8], eax */ W32((u32)(r_edi+0xf8u), r_eax);
    /* 00676f88: mov dword ptr [edi + 0xc8], 0x3f800000 */ W32((u32)(r_edi+0xc8u), 0x3f800000u);
    /* 00676f92: fild dword ptr [eax + 4] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x4u)));
    /* 00676f95: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00676f98: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00676f9b: fadd dword ptr [edx*4 + 0x93ac50] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x93ac50u));
    /* 00676fa2: fstp dword ptr [edi + 0xc4] */ W_F32((u32)(r_edi+0xc4u), ST(0)); FPOP();
L_00676fa8:; BB(0x00676fa8);
    /* 00676fa8: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00676fab: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00676fac: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00676fad: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00676fae: ret  */ FN_RET(0x00676ef4); r_esp += 4; return;
L_00676faf:; BB(0x00676faf);
    /* 00676faf: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 00676fb2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00676fb3: mov ecx, edi */ r_ecx = r_edi;
    /* 00676fb5: push 0x43480000 */ { u32 v = 0x43480000u; r_esp -= 4; W32(r_esp, v); }
    /* 00676fba: call 0x7714cc */ r_esp -= 4; W32(r_esp, 0x676fbfu); f_007714cc();
    /* 00676fbf: mov ebp, eax */ r_ebp = r_eax;
    /* 00676fc1: movzx edx, bp */ r_edx = (u32)(u16)r_ebp;
    /* 00676fc4: cmp edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00676fca: je 0x676f0d */ if (fZ) goto L_00676f0d;
L_00676fd0:; BB(0x00676fd0);
    /* 00676fd0: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00676fd3: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 00676fd7: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 00676fd9: fmul qword ptr [0x93ac60] */ ST(0) = ST(0) * R_F64((u32)(0x93ac60u));
    /* 00676fdf: fdiv qword ptr [0x93ac58] */ ST(0) = ST(0) / R_F64((u32)(0x93ac58u));
    /* 00676fe5: fnstcw word ptr [esp + 0xc] */ W16((u32)(r_esp+0xcu), fcw);
    /* 00676fe9: movzx eax, word ptr [esp + 0xc] */ r_eax = (u32)R16((u32)(r_esp+0xcu));
    /* 00676fee: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00676ff3: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00676ff7: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 00676ffb: fistp dword ptr [esp + 0x1c] */ W32((u32)(r_esp+0x1cu), (u32)fx_int32(ST(0))); FPOP();
    /* 00676fff: fldcw word ptr [esp + 0xc] */ fcw = R16((u32)(r_esp+0xcu));
    /* 00677003: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 00677007: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00677008: push dword ptr [edi + 0x60] */ { u32 v = R32((u32)(r_edi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067700b: call 0x7a9018 */ r_esp -= 4; W32(r_esp, 0x677010u); f_007a9018();
    /* 00677010: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00677013: cmp eax, 0x2000 */ {  u32 a = r_eax; u32 b = 0x2000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00677018: jge 0x676f0d */ if ((fS==fO)) goto L_00676f0d;
L_0067701e:; BB(0x0067701e);
    /* 0067701e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0067701f: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x677024u); f_007b4d18();
    /* 00677024: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00677025: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00677026: mov ecx, edi */ r_ecx = r_edi;
    /* 00677028: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x67702du); f_007706b0();
    /* 0067702d: jmp 0x676f0d */ goto L_00676f0d;
}

void f_00676f6c(void)
{
    FN_ENTER(0x00676f6c);
    /* 00676f6c: mov word ptr [edi + 0x32e], ax */ W16((u32)(r_edi+0x32eu), (u16)r_eax);
    /* 00676f73: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x676f78u); f_005b8638();
    /* 00676f78: mov dword ptr [edi + 0xc0], 0 */ W32((u32)(r_edi+0xc0u), 0x0u);
    /* 00676f82: mov dword ptr [edi + 0xf8], eax */ W32((u32)(r_edi+0xf8u), r_eax);
    /* 00676f88: mov dword ptr [edi + 0xc8], 0x3f800000 */ W32((u32)(r_edi+0xc8u), 0x3f800000u);
    /* 00676f92: fild dword ptr [eax + 4] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x4u)));
    /* 00676f95: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00676f98: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00676f9b: fadd dword ptr [edx*4 + 0x93ac50] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x93ac50u));
    /* 00676fa2: fstp dword ptr [edi + 0xc4] */ W_F32((u32)(r_edi+0xc4u), ST(0)); FPOP();
    /* 00676fa8: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00676fab: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00676fac: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00676fad: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00676fae: ret  */ FN_RET(0x00676f6c); r_esp += 4; return;
}

