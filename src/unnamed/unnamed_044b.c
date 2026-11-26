#include "protos.h"

void f_0044b01c(void) /* sub_44B01C */
{
    FN_ENTER(0x0044b01c);
    /* 0044b01c: mov dword ptr [0xa44c80], 0x3f800000 */ W32((u32)(0xa44c80u), 0x3f800000u);
    /* 0044b026: mov dword ptr [0xa44c84], 0x41000000 */ W32((u32)(0xa44c84u), 0x41000000u);
    /* 0044b030: mov dword ptr [0xa44c88], 0x3fc00000 */ W32((u32)(0xa44c88u), 0x3fc00000u);
    /* 0044b03a: ret  */ FN_RET(0x0044b01c); r_esp += 4; return;
}

void f_0044b03c(void) /* sub_44B03C */
{
    FN_ENTER(0x0044b03c);
    /* 0044b03c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0044b03d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0044b03f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0044b041: call 0x44b060 */ r_esp -= 4; W32(r_esp, 0x44b046u); f_0044b060();
    /* 0044b046: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0044b04a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0044b04c: jne 0x44b052 */ if (!fZ) goto L_0044b052;
L_0044b04e:; BB(0x0044b04e);
    /* 0044b04e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0044b04f: ret 4 */ FN_RET(0x0044b03c); r_esp += 8; return;
L_0044b052:; BB(0x0044b052);
    /* 0044b052: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0044b053: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x44b058u); f_005c2f74();
    /* 0044b058: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0044b059: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0044b05a: ret 4 */ FN_RET(0x0044b03c); r_esp += 8; return;
}

void f_0044b060(void) /* sub_44B060 */
{
    FN_ENTER(0x0044b060);
    /* 0044b060: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044b061: mov ebp, esp */ r_ebp = r_esp;
    /* 0044b063: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0044b065: push 0x8ceb80 */ { u32 v = 0x8ceb80u; r_esp -= 4; W32(r_esp, v); }
    /* 0044b06a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0044b070: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044b071: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0044b078: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0044b07b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0044b07e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0044b081: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0044b084: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0044b087: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0044b08a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0044b091: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0044b094: mov dword ptr [ecx], 0xaf6870 */ W32((u32)(r_ecx), 0xaf6870u);
    /* 0044b09a: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x44b09fu); f_007b9c8c();
    /* 0044b09f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0044b0a6: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0044b0a9: call 0x7b4aec */ r_esp -= 4; W32(r_esp, 0x44b0aeu); f_007b4aec();
    /* 0044b0ae: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044b0b1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0044b0b8: mov esp, ebp */ r_esp = r_ebp;
    /* 0044b0ba: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044b0bb: ret  */ FN_RET(0x0044b060); r_esp += 4; return;
}

void f_0044b0bc(void) /* sub_44B0BC */
{
    FN_ENTER(0x0044b0bc);
    /* 0044b0bc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044b0bd: mov ebp, esp */ r_ebp = r_esp;
    /* 0044b0bf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0044b0c1: push 0x8ceb9c */ { u32 v = 0x8ceb9cu; r_esp -= 4; W32(r_esp, v); }
    /* 0044b0c6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0044b0cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044b0cd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0044b0d4: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0044b0d7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0044b0da: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 0044b0dd: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 0044b0e0: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 0044b0e3: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0044b0e6: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 0044b0ec: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0044b0ef: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 0044b0f2: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0044b0f5: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0044b0f8: call 0x7b4b48 */ r_esp -= 4; W32(r_esp, 0x44b0fdu); f_007b4b48();
    /* 0044b0fd: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0044b104: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0044b107: mov dword ptr [ecx], 0xaf6870 */ W32((u32)(r_ecx), 0xaf6870u);
    /* 0044b10d: mov eax, dword ptr [0x9a5668] */ r_eax = R32((u32)(0x9a5668u));
    /* 0044b112: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0044b114: push 0x9a566c */ { u32 v = 0x9a566cu; r_esp -= 4; W32(r_esp, v); }
    /* 0044b119: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0044b11c: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x44b121u); f_007b9a88();
    /* 0044b121: push 0xa447b0 */ { u32 v = 0xa447b0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044b126: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 0044b129: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0044b12c: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 0044b12f: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0044b131: mov dword ptr [esi + 0x38], eax */ W32((u32)(r_esi+0x38u), r_eax);
    /* 0044b134: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0044b137: mov dword ptr [esi + 0x3c], edx */ W32((u32)(r_esi+0x3cu), r_edx);
    /* 0044b13a: mov ebx, dword ptr [ecx + 8] */ r_ebx = R32((u32)(r_ecx+0x8u));
    /* 0044b13d: mov dword ptr [esi + 0x40], ebx */ W32((u32)(r_esi+0x40u), r_ebx);
    /* 0044b140: add edi, 0x38 */ {  u32 a = r_edi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0044b143: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0044b144: call 0x78ea6c */ r_esp -= 4; W32(r_esp, 0x44b149u); f_0078ea6c();
    /* 0044b149: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 0044b14c: fcom dword ptr [0x8fe9e4] */ fx_compare(ST(0), R_F32((u32)(0x8fe9e4u))); 
    /* 0044b152: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0044b154: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0044b155: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0044b158: fld dword ptr [0x8fe9e0] */ FPUSH(R_F32((u32)(0x8fe9e0u)));
    /* 0044b15e: jae 0x44b16c */ if (!fC) goto L_0044b16c;
L_0044b160:; BB(0x0044b160);
    /* 0044b160: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0044b162: mov eax, 0x42b40000 */ r_eax = 0x42b40000u;
    /* 0044b167: mov dword ptr [ecx + 0x3c], eax */ W32((u32)(r_ecx+0x3cu), r_eax);
    /* 0044b16a: jmp 0x44b181 */ goto L_0044b181;
L_0044b16c:; BB(0x0044b16c);
    /* 0044b16c: fld dword ptr [0x8fe9dc] */ FPUSH(R_F32((u32)(0x8fe9dcu)));
    /* 0044b172: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0044b174: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0044b176: fmul dword ptr [0x8fe9d8] */ ST(0) = ST(0) * R_F32((u32)(0x8fe9d8u));
    /* 0044b17c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0044b17e: fst dword ptr [ecx + 0x3c] */ W_F32((u32)(r_ecx+0x3cu), ST(0));
L_0044b181:; BB(0x0044b181);
    /* 0044b181: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0044b184: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0044b187: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0044b18a: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0044b18d: fstp dword ptr [ecx + 0xb8] */ W_F32((u32)(r_ecx+0xb8u), ST(0)); FPOP();
    /* 0044b193: mov dword ptr [ecx + 0xac], 0 */ W32((u32)(r_ecx+0xacu), 0x0u);
    /* 0044b19d: mov dword ptr [ecx + 0xbc], edx */ W32((u32)(r_ecx+0xbcu), r_edx);
    /* 0044b1a3: mov eax, ecx */ r_eax = r_ecx;
    /* 0044b1a5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044b1a8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0044b1af: mov esp, ebp */ r_esp = r_ebp;
    /* 0044b1b1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044b1b2: ret 8 */ FN_RET(0x0044b0bc); r_esp += 12; return;
}

void f_0044b1b8(void) /* sub_44B1B8 */
{
    FN_ENTER(0x0044b1b8);
    /* 0044b1b8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0044b1b9: mov ebx, esp */ r_ebx = r_esp;
    /* 0044b1bb: and esp, 0xfffffff8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 0044b1be: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044b1bf: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044b1c0: mov ebp, dword ptr [ebx + 4] */ r_ebp = R32((u32)(r_ebx+0x4u));
    /* 0044b1c3: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 0044b1c7: mov ebp, esp */ r_ebp = r_esp;
    /* 0044b1c9: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0044b1cb: push 0x8cebc6 */ { u32 v = 0x8cebc6u; r_esp -= 4; W32(r_esp, v); }
    /* 0044b1d0: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0044b1d6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044b1d7: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0044b1de: sub esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0044b1e1: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0044b1e4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0044b1e7: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0044b1ea: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0044b1ed: mov eax, dword ptr [ecx + 0xac] */ r_eax = R32((u32)(r_ecx+0xacu));
    /* 0044b1f3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044b1f5: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0044b1f8: je 0x44b4cf */ if (fZ) goto L_0044b4cf;
L_0044b1fe:; BB(0x0044b1fe);
    /* 0044b1fe: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044b201: je 0x44b4a4 */ if (fZ) goto L_0044b4a4;
L_0044b207:; BB(0x0044b207);
    /* 0044b207: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044b20a: je 0x44b271 */ if (fZ) goto L_0044b271;
L_0044b20c:; BB(0x0044b20c);
    /* 0044b20c: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044b20f: jne 0x44b239 */ if (!fZ) goto L_0044b239;
L_0044b211:; BB(0x0044b211);
    /* 0044b211: mov eax, ecx */ r_eax = r_ecx;
    /* 0044b213: mov edx, dword ptr [eax + 0xb4] */ r_edx = R32((u32)(r_eax+0xb4u));
    /* 0044b219: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0044b21c: mov dword ptr [eax + 0xb4], edx */ W32((u32)(r_eax+0xb4u), r_edx);
    /* 0044b222: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0044b224: jg 0x44b46b */ if ((!fZ&&fS==fO)) goto L_0044b46b;
L_0044b22a:; BB(0x0044b22a);
    /* 0044b22a: mov dword ptr [eax + 0xac], 4 */ W32((u32)(r_eax+0xacu), 0x4u);
    /* 0044b234: jmp 0x44b46b */ goto L_0044b46b;
L_0044b239:; BB(0x0044b239);
    /* 0044b239: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0044b23c: jne 0x44b46b */ if (!fZ) goto L_0044b46b;
L_0044b242:; BB(0x0044b242);
    /* 0044b242: fld dword ptr [0x8fe9c0] */ FPUSH(R_F32((u32)(0x8fe9c0u)));
    /* 0044b248: mov edx, ecx */ r_edx = r_ecx;
    /* 0044b24a: fadd dword ptr [edx + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x3cu));
    /* 0044b24d: fcom dword ptr [0x8fe9d4] */ fx_compare(ST(0), R_F32((u32)(0x8fe9d4u))); 
    /* 0044b253: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0044b255: fstp dword ptr [edx + 0x3c] */ W_F32((u32)(r_edx+0x3cu), ST(0)); FPOP();
    /* 0044b258: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0044b259: jb 0x44b46b */ if (fC) goto L_0044b46b;
L_0044b25f:; BB(0x0044b25f);
    /* 0044b25f: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0044b263: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0044b268: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0044b26c: jmp 0x44b46b */ goto L_0044b46b;
L_0044b271:; BB(0x0044b271);
    /* 0044b271: fld dword ptr [0x8fe9bc] */ FPUSH(R_F32((u32)(0x8fe9bcu)));
    /* 0044b277: mov edx, ecx */ r_edx = r_ecx;
    /* 0044b279: fadd dword ptr [edx + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x3cu));
    /* 0044b27c: fcom dword ptr [0x8fe9d0] */ fx_compare(ST(0), R_F32((u32)(0x8fe9d0u))); 
    /* 0044b282: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0044b284: fstp dword ptr [edx + 0x3c] */ W_F32((u32)(r_edx+0x3cu), ST(0)); FPOP();
    /* 0044b287: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0044b288: ja 0x44b46b */ if ((!fC&&!fZ)) goto L_0044b46b;
L_0044b28e:; BB(0x0044b28e);
    /* 0044b28e: mov eax, edx */ r_eax = r_edx;
    /* 0044b290: mov ecx, dword ptr [eax + 0xa4] */ r_ecx = R32((u32)(r_eax+0xa4u));
    /* 0044b296: mov dword ptr [eax + 0xb4], 0xf */ W32((u32)(r_eax+0xb4u), 0xfu);
    /* 0044b2a0: mov dword ptr [eax + 0xac], 3 */ W32((u32)(r_eax+0xacu), 0x3u);
    /* 0044b2aa: mov edx, dword ptr [ecx + 0x18] */ r_edx = R32((u32)(r_ecx+0x18u));
    /* 0044b2ad: or edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0044b2b0: mov dword ptr [ecx + 0x18], edx */ W32((u32)(r_ecx+0x18u), r_edx);
    /* 0044b2b3: call 0x7b51c4 */ r_esp -= 4; W32(r_esp, 0x44b2b8u); f_007b51c4();
    /* 0044b2b8: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0044b2bb: call 0x7b6894 */ r_esp -= 4; W32(r_esp, 0x44b2c0u); f_007b6894();
    /* 0044b2c0: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0044b2c3: mov eax, dword ptr [eax + 0xa4] */ r_eax = R32((u32)(r_eax+0xa4u));
    /* 0044b2c9: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 0044b2cc: test edx, 0x80000 */ {  u32 a = r_edx; u32 b = 0x80000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044b2d2: je 0x44b3e0 */ if (fZ) goto L_0044b3e0;
L_0044b2d8:; BB(0x0044b2d8);
    /* 0044b2d8: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_0044b2da:; BB(0x0044b2da);
    /* 0044b2da: mov esi, dword ptr [edi*4 + 0xaad6e0] */ r_esi = R32((u32)(r_edi*4+0xaad6e0u));
    /* 0044b2e1: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044b2e3: je 0x44b493 */ if (fZ) goto L_0044b493;
L_0044b2e9:; BB(0x0044b2e9);
    /* 0044b2e9: movzx eax, word ptr [esi + 0x96] */ r_eax = (u32)R16((u32)(r_esi+0x96u));
    /* 0044b2f0: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044b2f3: jne 0x44b3cf */ if (!fZ) goto L_0044b3cf;
L_0044b2f9:; BB(0x0044b2f9);
    /* 0044b2f9: mov edx, dword ptr [0x8fe92c] */ r_edx = R32((u32)(0x8fe92cu));
    /* 0044b2ff: mov eax, dword ptr [0xa44bbc] */ r_eax = R32((u32)(0xa44bbcu));
    /* 0044b304: fild dword ptr [eax + 0x1c] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x1cu)));
    /* 0044b307: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0044b309: fstp dword ptr [ebp - 0x6c] */ W_F32((u32)(r_ebp+0xffffff94u), ST(0)); FPOP();
    /* 0044b30c: mov dword ptr [ebp - 0x70], edx */ W32((u32)(r_ebp+0xffffff90u), r_edx);
    /* 0044b30f: mov ecx, 0xffffffff */ r_ecx = 0xffffffffu;
    /* 0044b314: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044b315: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044b316: mov ecx, esi */ r_ecx = r_esi;
    /* 0044b318: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044b31a: push dword ptr [ebp - 0x6c] */ { u32 v = R32((u32)(r_ebp+0xffffff94u)); r_esp -= 4; W32(r_esp, v); }
    /* 0044b31d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044b31e: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0044b321: push dword ptr [edx + 0xbc] */ { u32 v = R32((u32)(r_edx+0xbcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0044b327: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x44b32au); call_ind(t); }
    /* 0044b32a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0044b32c: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 0044b32f: test eax, 0x4000000 */ {  u32 a = r_eax; u32 b = 0x4000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044b334: jne 0x44b3cf */ if (!fZ) goto L_0044b3cf;
L_0044b33a:; BB(0x0044b33a);
    /* 0044b33a: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 0044b33f: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x44b344u); f_0082d990();
    /* 0044b344: lea ecx, [ebp - 0x68] */ r_ecx = (u32)(r_ebp+0xffffff98u);
    /* 0044b347: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 0044b34a: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 0044b34d: mov eax, dword ptr [esi + 0x3c] */ r_eax = R32((u32)(r_esi+0x3cu));
    /* 0044b350: mov edx, 0xa447b0 */ r_edx = 0xa447b0u;
    /* 0044b355: mov dword ptr [ebp - 0x64], eax */ W32((u32)(r_ebp+0xffffff9cu), r_eax);
    /* 0044b358: mov eax, dword ptr [esi + 0x40] */ r_eax = R32((u32)(r_esi+0x40u));
    /* 0044b35b: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 0044b35e: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x44b363u); f_0082f9c4();
    /* 0044b363: fld dword ptr [ebp - 0x68] */ FPUSH(R_F32((u32)(r_ebp+0xffffff98u)));
    /* 0044b366: fld dword ptr [ebp - 0x60] */ FPUSH(R_F32((u32)(r_ebp+0xffffffa0u)));
    /* 0044b369: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0044b36b: fmul qword ptr [0x8fe998] */ ST(0) = ST(0) * R_F64((u32)(0x8fe998u));
    /* 0044b371: fdiv qword ptr [0x8fe990] */ ST(0) = ST(0) / R_F64((u32)(0x8fe990u));
    /* 0044b377: fnstcw word ptr [ebp - 0x38] */ W16((u32)(r_ebp+0xffffffc8u), fcw);
    /* 0044b37a: movzx eax, word ptr [ebp - 0x38] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc8u));
    /* 0044b37e: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0044b383: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0044b386: fldcw word ptr [ebp - 0x30] */ fcw = R16((u32)(r_ebp+0xffffffd0u));
    /* 0044b389: fistp dword ptr [ebp - 0x28] */ W32((u32)(r_ebp+0xffffffd8u), (u32)fx_int32(ST(0))); FPOP();
    /* 0044b38c: fldcw word ptr [ebp - 0x38] */ fcw = R16((u32)(r_ebp+0xffffffc8u));
    /* 0044b38f: mov eax, dword ptr [0xa44bbc] */ r_eax = R32((u32)(0xa44bbcu));
    /* 0044b394: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0044b397: mov dword ptr [ebp - 0x5c], 0 */ W32((u32)(r_ebp+0xffffffa4u), 0x0u);
    /* 0044b39e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0044b3a0: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
    /* 0044b3a7: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
    /* 0044b3ae: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 0044b3b1: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 0044b3b4: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x44b3b9u); f_0082d8bc();
    /* 0044b3b9: lea edx, [ebp - 0x5c] */ r_edx = (u32)(r_ebp+0xffffffa4u);
    /* 0044b3bc: add esi, 0x30c */ {  u32 a = r_esi; u32 b = 0x30cu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0044b3c2: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0044b3c3: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0044b3c5: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x44b3cau); f_00830aa0();
    /* 0044b3ca: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x44b3cfu); f_0082da80();
L_0044b3cf:; BB(0x0044b3cf);
    /* 0044b3cf: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0044b3d2: cmp edi, 0x10 */ {  u32 a = r_edi; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044b3d5: jl 0x44b2da */ if ((fS!=fO)) goto L_0044b2da;
L_0044b3db:; BB(0x0044b3db);
    /* 0044b3db: jmp 0x44b482 */ goto L_0044b482;
L_0044b3e0:; BB(0x0044b3e0);
    /* 0044b3e0: mov dword ptr [ebp - 0x4c], 0x40a00000 */ W32((u32)(r_ebp+0xffffffb4u), 0x40a00000u);
    /* 0044b3e7: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 0044b3e9: and edx, 0xfffffffe */ {  u32 a = r_edx; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0044b3ec: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
    /* 0044b3f3: mov dword ptr [eax + 0x18], edx */ W32((u32)(r_eax+0x18u), r_edx);
    /* 0044b3f6: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0044b3f9: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 0044b3fc: mov ecx, dword ptr [edx + 0x40] */ r_ecx = R32((u32)(r_edx+0x40u));
    /* 0044b3ff: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 0044b402: mov dword ptr [ebp - 0x48], ecx */ W32((u32)(r_ebp+0xffffffb8u), r_ecx);
    /* 0044b405: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x44b40au); f_005caba4();
    /* 0044b40a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0044b40b: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0044b40e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044b410: je 0x44b445 */ if (fZ) goto L_0044b445;
L_0044b412:; BB(0x0044b412);
    /* 0044b412: mov dword ptr [ebp - 0x44], 1 */ W32((u32)(r_ebp+0xffffffbcu), 0x1u);
    /* 0044b419: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0044b420: push 0x42200000 */ { u32 v = 0x42200000u; r_esp -= 4; W32(r_esp, v); }
    /* 0044b425: lea edx, [ebp - 0x50] */ r_edx = (u32)(r_ebp+0xffffffb0u);
    /* 0044b428: mov ecx, eax */ r_ecx = r_eax;
    /* 0044b42a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044b42c: push 0x3e800000 */ { u32 v = 0x3e800000u; r_esp -= 4; W32(r_esp, v); }
    /* 0044b431: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0044b433: push 0x11e */ { u32 v = 0x11eu; r_esp -= 4; W32(r_esp, v); }
    /* 0044b438: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044b439: call 0x4497e4 */ r_esp -= 4; W32(r_esp, 0x44b43eu); f_004497e4();
    /* 0044b43e: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
L_0044b445:; BB(0x0044b445);
    /* 0044b445: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0044b44c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0044b44e: call 0x4d4288 */ r_esp -= 4; W32(r_esp, 0x44b453u); f_004d4288();
    /* 0044b453: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0044b456: add edx, 0x38 */ {  u32 a = r_edx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0044b459: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0044b45b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044b45c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044b45d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044b45e: push 0x343 */ { u32 v = 0x343u; r_esp -= 4; W32(r_esp, v); }
    /* 0044b463: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x44b468u); f_00814298();
    /* 0044b468: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_0044b46b:; BB(0x0044b46b);
    /* 0044b46b: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0044b46e: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0044b471: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044b474: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0044b47b: mov esp, ebp */ r_esp = r_ebp;
    /* 0044b47d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044b47e: mov esp, ebx */ r_esp = r_ebx;
    /* 0044b480: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0044b481: ret  */ FN_RET(0x0044b1b8); r_esp += 4; return;
L_0044b482:; BB(0x0044b482);
    /* 0044b482: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0044b485: mov eax, dword ptr [eax + 0xa4] */ r_eax = R32((u32)(r_eax+0xa4u));
    /* 0044b48b: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 0044b48e: jmp 0x44b3e0 */ goto L_0044b3e0;
L_0044b493:; BB(0x0044b493);
    /* 0044b493: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0044b496: mov eax, dword ptr [eax + 0xa4] */ r_eax = R32((u32)(r_eax+0xa4u));
    /* 0044b49c: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 0044b49f: jmp 0x44b3e0 */ goto L_0044b3e0;
L_0044b4a4:; BB(0x0044b4a4);
    /* 0044b4a4: mov eax, ecx */ r_eax = r_ecx;
    /* 0044b4a6: mov edx, dword ptr [eax + 0xb4] */ r_edx = R32((u32)(r_eax+0xb4u));
L_0044b4ac:; BB(0x0044b4ac);
    /* 0044b4ac: mov eax, ecx */ r_eax = r_ecx;
    /* 0044b4ae: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0044b4b1: mov dword ptr [eax + 0xb4], edx */ W32((u32)(r_eax+0xb4u), r_edx);
    /* 0044b4b7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0044b4b9: jg 0x44b46b */ if ((!fZ&&fS==fO)) goto L_0044b46b;
L_0044b4bb:; BB(0x0044b4bb);
    /* 0044b4bb: call 0x44b4e4 */ r_esp -= 4; W32(r_esp, 0x44b4c0u); f_0044b4e4();
    /* 0044b4c0: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0044b4c3: mov dword ptr [eax + 0xac], 2 */ W32((u32)(r_eax+0xacu), 0x2u);
    /* 0044b4cd: jmp 0x44b46b */ goto L_0044b46b;
L_0044b4cf:; BB(0x0044b4cf);
    /* 0044b4cf: mov eax, dword ptr [0xa44bbc] */ r_eax = R32((u32)(0xa44bbcu));
    /* 0044b4d4: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 0044b4d7: mov dword ptr [ecx + 0xac], 1 */ W32((u32)(r_ecx+0xacu), 0x1u);
    /* 0044b4e1: jmp 0x44b4ac */ goto L_0044b4ac;
}

void f_0044b4e4(void) /* sub_44B4E4 */
{
    FN_ENTER(0x0044b4e4);
    /* 0044b4e4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044b4e5: mov ebp, esp */ r_ebp = r_esp;
    /* 0044b4e7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0044b4e9: push 0x8cec22 */ { u32 v = 0x8cec22u; r_esp -= 4; W32(r_esp, v); }
    /* 0044b4ee: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0044b4f4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044b4f5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0044b4fc: sub esp, 0x6c */ {  u32 a = r_esp; u32 b = 0x6cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0044b4ff: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0044b502: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0044b505: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0044b508: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0044b50b: mov eax, 0x8fe940 */ r_eax = 0x8fe940u;
    /* 0044b510: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0044b512: mov dword ptr [ebp - 0x78], edx */ W32((u32)(r_ebp+0xffffff88u), r_edx);
    /* 0044b515: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0044b518: mov dword ptr [ebp - 0x74], edx */ W32((u32)(r_ebp+0xffffff8cu), r_edx);
    /* 0044b51b: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 0044b51e: mov dword ptr [ebp - 0x70], edx */ W32((u32)(r_ebp+0xffffff90u), r_edx);
    /* 0044b521: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 0044b524: mov dword ptr [ebp - 0x6c], edx */ W32((u32)(r_ebp+0xffffff94u), r_edx);
    /* 0044b527: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 0044b52a: mov dword ptr [ebp - 0x68], edx */ W32((u32)(r_ebp+0xffffff98u), r_edx);
    /* 0044b52d: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 0044b530: mov dword ptr [ebp - 0x64], edx */ W32((u32)(r_ebp+0xffffff9cu), r_edx);
    /* 0044b533: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 0044b536: mov dword ptr [ebp - 0x60], edx */ W32((u32)(r_ebp+0xffffffa0u), r_edx);
    /* 0044b539: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 0044b53c: mov dword ptr [ebp - 0x5c], edx */ W32((u32)(r_ebp+0xffffffa4u), r_edx);
    /* 0044b53f: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 0044b542: mov dword ptr [ebp - 0x58], edx */ W32((u32)(r_ebp+0xffffffa8u), r_edx);
    /* 0044b545: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 0044b548: mov dword ptr [ebp - 0x54], edx */ W32((u32)(r_ebp+0xffffffacu), r_edx);
    /* 0044b54b: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 0044b54e: mov dword ptr [ebp - 0x50], edx */ W32((u32)(r_ebp+0xffffffb0u), r_edx);
    /* 0044b551: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 0044b554: mov dword ptr [ebp - 0x4c], edx */ W32((u32)(r_ebp+0xffffffb4u), r_edx);
    /* 0044b557: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 0044b55a: mov dword ptr [ebp - 0x48], edx */ W32((u32)(r_ebp+0xffffffb8u), r_edx);
    /* 0044b55d: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 0044b560: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 0044b563: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 0044b566: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 0044b569: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 0044b56c: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 0044b56f: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 0044b572: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 0044b575: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0044b578: mov eax, dword ptr [eax + 0x48] */ r_eax = R32((u32)(r_eax+0x48u));
    /* 0044b57b: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 0044b57e: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0044b581: mov ebx, dword ptr [0xa447bc] */ r_ebx = R32((u32)(0xa447bcu));
    /* 0044b587: mov eax, dword ptr [ecx + 0x38] */ r_eax = R32((u32)(r_ecx+0x38u));
    /* 0044b58a: mov edx, dword ptr [ecx + 0x3c] */ r_edx = R32((u32)(r_ecx+0x3cu));
    /* 0044b58d: mov ecx, dword ptr [ecx + 0x40] */ r_ecx = R32((u32)(r_ecx+0x40u));
    /* 0044b590: mov edi, dword ptr [ebx + 0x42c] */ r_edi = R32((u32)(r_ebx+0x42cu));
    /* 0044b596: mov dword ptr [ebp - 0x6c], eax */ W32((u32)(r_ebp+0xffffff94u), r_eax);
    /* 0044b599: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 0044b5a0: mov dword ptr [ebp - 0x68], edx */ W32((u32)(r_ebp+0xffffff98u), r_edx);
    /* 0044b5a3: mov dword ptr [ebp - 0x64], ecx */ W32((u32)(r_ebp+0xffffff9cu), r_ecx);
    /* 0044b5a6: push 0x234 */ { u32 v = 0x234u; r_esp -= 4; W32(r_esp, v); }
    /* 0044b5ab: mov esi, dword ptr [edi + 0xe8] */ r_esi = R32((u32)(r_edi+0xe8u));
    /* 0044b5b1: mov dword ptr [ebp - 0x38], esi */ W32((u32)(r_ebp+0xffffffc8u), r_esi);
    /* 0044b5b4: mov eax, dword ptr [edi + 0xec] */ r_eax = R32((u32)(r_edi+0xecu));
    /* 0044b5ba: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0044b5bd: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x44b5c2u); f_005caba4();
    /* 0044b5c2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0044b5c3: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0044b5c6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044b5c8: je 0x44b5f1 */ if (fZ) goto L_0044b5f1;
L_0044b5ca:; BB(0x0044b5ca);
    /* 0044b5ca: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 0044b5d1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0044b5d8: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0044b5db: lea eax, [ebp - 0x78] */ r_eax = (u32)(r_ebp+0xffffff88u);
    /* 0044b5de: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044b5df: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 0044b5e5: call 0x6441f4 */ r_esp -= 4; W32(r_esp, 0x44b5eau); f_006441f4();
    /* 0044b5ea: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_0044b5f1:; BB(0x0044b5f1);
    /* 0044b5f1: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0044b5f8: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0044b5ff: push 0x234 */ { u32 v = 0x234u; r_esp -= 4; W32(r_esp, v); }
    /* 0044b604: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x44b609u); f_005caba4();
    /* 0044b609: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0044b60a: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0044b60d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044b60f: je 0x44b638 */ if (fZ) goto L_0044b638;
L_0044b611:; BB(0x0044b611);
    /* 0044b611: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0044b618: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0044b61f: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0044b622: lea eax, [ebp - 0x78] */ r_eax = (u32)(r_ebp+0xffffff88u);
    /* 0044b625: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044b626: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 0044b62c: call 0x6441f4 */ r_esp -= 4; W32(r_esp, 0x44b631u); f_006441f4();
    /* 0044b631: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0044b638:; BB(0x0044b638);
    /* 0044b638: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0044b63f: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 0044b646: push 0x234 */ { u32 v = 0x234u; r_esp -= 4; W32(r_esp, v); }
    /* 0044b64b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x44b650u); f_005caba4();
    /* 0044b650: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0044b651: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0044b654: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0044b656: je 0x44b67f */ if (fZ) goto L_0044b67f;
L_0044b658:; BB(0x0044b658);
    /* 0044b658: mov dword ptr [ebp - 0x20], 1 */ W32((u32)(r_ebp+0xffffffe0u), 0x1u);
    /* 0044b65f: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0044b666: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0044b669: lea eax, [ebp - 0x78] */ r_eax = (u32)(r_ebp+0xffffff88u);
    /* 0044b66c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044b66d: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 0044b673: call 0x6441f4 */ r_esp -= 4; W32(r_esp, 0x44b678u); f_006441f4();
    /* 0044b678: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_0044b67f:; BB(0x0044b67f);
    /* 0044b67f: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0044b682: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0044b685: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0044b688: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044b68b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0044b692: mov esp, ebp */ r_esp = r_ebp;
    /* 0044b694: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044b695: ret  */ FN_RET(0x0044b4e4); r_esp += 4; return;
}

void f_0044b600(void)
{
    FN_ENTER(0x0044b600);
    /* 0044b600: xor al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0044b602: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0044b604: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x44b609u); f_005caba4();
    /* 0044b609: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0044b60a: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0044b60d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044b60f: je 0x44b638 */ if (fZ) goto L_0044b638;
L_0044b611:; BB(0x0044b611);
    /* 0044b611: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0044b618: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0044b61f: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0044b622: lea eax, [ebp - 0x78] */ r_eax = (u32)(r_ebp+0xffffff88u);
    /* 0044b625: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044b626: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 0044b62c: call 0x6441f4 */ r_esp -= 4; W32(r_esp, 0x44b631u); f_006441f4();
    /* 0044b631: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0044b638:; BB(0x0044b638);
    /* 0044b638: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0044b63f: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 0044b646: push 0x234 */ { u32 v = 0x234u; r_esp -= 4; W32(r_esp, v); }
    /* 0044b64b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x44b650u); f_005caba4();
    /* 0044b650: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0044b651: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0044b654: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0044b656: je 0x44b67f */ if (fZ) goto L_0044b67f;
L_0044b658:; BB(0x0044b658);
    /* 0044b658: mov dword ptr [ebp - 0x20], 1 */ W32((u32)(r_ebp+0xffffffe0u), 0x1u);
    /* 0044b65f: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0044b666: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0044b669: lea eax, [ebp - 0x78] */ r_eax = (u32)(r_ebp+0xffffff88u);
    /* 0044b66c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044b66d: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 0044b673: call 0x6441f4 */ r_esp -= 4; W32(r_esp, 0x44b678u); f_006441f4();
    /* 0044b678: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_0044b67f:; BB(0x0044b67f);
    /* 0044b67f: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0044b682: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0044b685: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0044b688: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044b68b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0044b692: mov esp, ebp */ r_esp = r_ebp;
    /* 0044b694: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044b695: ret  */ FN_RET(0x0044b600); r_esp += 4; return;
}

void f_0044b698(void) /* sub_44B698 */
{
    FN_ENTER(0x0044b698);
    /* 0044b698: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0044b699: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0044b69a: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0044b69c: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0044b69e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0044b6a0: push 0x42200000 */ { u32 v = 0x42200000u; r_esp -= 4; W32(r_esp, v); }
    /* 0044b6a5: push 0x43c80000 */ { u32 v = 0x43c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 0044b6aa: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x44b6adu); call_ind(t); }
    /* 0044b6ad: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0044b6af: je 0x44b799 */ if (fZ) goto L_0044b799;
L_0044b6b5:; BB(0x0044b6b5);
    /* 0044b6b5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0044b6b6: call 0x794548 */ r_esp -= 4; W32(r_esp, 0x44b6bbu); f_00794548();
    /* 0044b6bb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0044b6bc: call 0x578b38 */ r_esp -= 4; W32(r_esp, 0x44b6c1u); f_00578b38();
    /* 0044b6c1: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x44b6c6u); f_0082d7b0();
    /* 0044b6c6: lea ecx, [ebx + 0x38] */ r_ecx = (u32)(r_ebx+0x38u);
    /* 0044b6c9: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x44b6ceu); f_0082d838();
    /* 0044b6ce: mov ecx, dword ptr [0xa44c94] */ r_ecx = R32((u32)(0xa44c94u));
    /* 0044b6d4: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x44b6d9u); f_00829cc8();
    /* 0044b6d9: push dword ptr [0xa44c9c] */ { u32 v = R32((u32)(0xa44c9cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0044b6df: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x44b6e4u); f_0082e1e8();
    /* 0044b6e4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0044b6e5: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x44b6eau); f_0082da80();
    /* 0044b6ea: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x44b6efu); f_0082d7b0();
    /* 0044b6ef: push dword ptr [ebx + 0x40] */ { u32 v = R32((u32)(r_ebx+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 0044b6f2: push dword ptr [ebx + 0xb8] */ { u32 v = R32((u32)(r_ebx+0xb8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0044b6f8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0044b6fa: push dword ptr [ebx + 0x38] */ { u32 v = R32((u32)(r_ebx+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 0044b6fd: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x44b702u); f_00830b74();
    /* 0044b702: mov ecx, dword ptr [0xa44c90] */ r_ecx = R32((u32)(0xa44c90u));
    /* 0044b708: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x44b70du); f_00829cc8();
    /* 0044b70d: push dword ptr [0xa44c98] */ { u32 v = R32((u32)(0xa44c98u)); r_esp -= 4; W32(r_esp, v); }
    /* 0044b713: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x44b718u); f_0082e1e8();
    /* 0044b718: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0044b719: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x44b71eu); f_0082da80();
    /* 0044b71e: call 0x794750 */ r_esp -= 4; W32(r_esp, 0x44b723u); f_00794750();
    /* 0044b723: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x44b728u); f_0082dab0();
    /* 0044b728: fld dword ptr [0x8fe9ac] */ FPUSH(R_F32((u32)(0x8fe9acu)));
    /* 0044b72e: fsub dword ptr [ebx + 0x3c] */ ST(0) = ST(0) - R_F32((u32)(r_ebx+0x3cu));
    /* 0044b731: fmul dword ptr [0x8fe9a8] */ ST(0) = ST(0) * R_F32((u32)(0x8fe9a8u));
    /* 0044b737: fadd dword ptr [0x8fe9b0] */ ST(0) = ST(0) + R_F32((u32)(0x8fe9b0u));
    /* 0044b73d: fmul dword ptr [0x8fe9a0] */ ST(0) = ST(0) * R_F32((u32)(0x8fe9a0u));
    /* 0044b743: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0044b746: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x44b74bu); f_0082d7b0();
    /* 0044b74b: push dword ptr [ebx + 0x40] */ { u32 v = R32((u32)(r_ebx+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 0044b74e: push 0x3e99999a */ { u32 v = 0x3e99999au; r_esp -= 4; W32(r_esp, v); }
    /* 0044b753: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0044b755: push dword ptr [ebx + 0x38] */ { u32 v = R32((u32)(r_ebx+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 0044b758: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x44b75du); f_00830b74();
    /* 0044b75d: mov edx, dword ptr [ebx + 0x60] */ r_edx = R32((u32)(r_ebx+0x60u));
    /* 0044b760: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0044b762: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x44b767u); f_0082d8bc();
    /* 0044b767: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0044b769: mov edx, 0xffffc000 */ r_edx = 0xffffc000u;
    /* 0044b76e: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x44b773u); f_0082e9e4();
    /* 0044b773: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044b776: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 0044b77a: fst dword ptr [esp] */ W_F32((u32)(r_esp), ST(0));
    /* 0044b77d: fst dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0));
    /* 0044b781: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0044b785: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0044b787: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x44b78cu); f_0082fa0c();
    /* 0044b78c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044b78e: call 0x52d46c */ r_esp -= 4; W32(r_esp, 0x44b793u); f_0052d46c();
    /* 0044b793: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0044b794: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x44b799u); f_0082da80();
L_0044b799:; BB(0x0044b799);
    /* 0044b799: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0044b79a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0044b79b: ret  */ FN_RET(0x0044b698); r_esp += 4; return;
}

void f_0044b79c(void) /* sub_44B79C */
{
    FN_ENTER(0x0044b79c);
    /* 0044b79c: mov edx, dword ptr [0xa447bc] */ r_edx = R32((u32)(0xa447bcu));
    /* 0044b7a2: mov eax, dword ptr [edx + 0x42c] */ r_eax = R32((u32)(r_edx+0x42cu));
    /* 0044b7a8: mov ecx, dword ptr [eax + 0x178] */ r_ecx = R32((u32)(r_eax+0x178u));
    /* 0044b7ae: mov edx, dword ptr [eax + 0x17c] */ r_edx = R32((u32)(r_eax+0x17cu));
    /* 0044b7b4: mov dword ptr [0xa44c9c], ecx */ W32((u32)(0xa44c9cu), r_ecx);
    /* 0044b7ba: mov dword ptr [0xa44c94], edx */ W32((u32)(0xa44c94u), r_edx);
    /* 0044b7c0: mov edx, dword ptr [eax + 0x158] */ r_edx = R32((u32)(r_eax+0x158u));
    /* 0044b7c6: mov eax, dword ptr [eax + 0x15c] */ r_eax = R32((u32)(r_eax+0x15cu));
    /* 0044b7cc: mov dword ptr [0xa44c98], edx */ W32((u32)(0xa44c98u), r_edx);
    /* 0044b7d2: mov dword ptr [0xa44c90], eax */ W32((u32)(0xa44c90u), r_eax);
    /* 0044b7d7: ret  */ FN_RET(0x0044b79c); r_esp += 4; return;
}

void f_0044b7d8(void) /* sub_44B7D8 */
{
    FN_ENTER(0x0044b7d8);
    /* 0044b7d8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0044b7d9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0044b7db: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0044b7dd: call 0x44b7fc */ r_esp -= 4; W32(r_esp, 0x44b7e2u); f_0044b7fc();
    /* 0044b7e2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0044b7e6: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0044b7e8: jne 0x44b7ee */ if (!fZ) goto L_0044b7ee;
L_0044b7ea:; BB(0x0044b7ea);
    /* 0044b7ea: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0044b7eb: ret 4 */ FN_RET(0x0044b7d8); r_esp += 8; return;
L_0044b7ee:; BB(0x0044b7ee);
    /* 0044b7ee: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0044b7ef: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x44b7f4u); f_005c2f74();
    /* 0044b7f4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0044b7f5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0044b7f6: ret 4 */ FN_RET(0x0044b7d8); r_esp += 8; return;
}

void f_0044b7fc(void) /* sub_44B7FC */
{
    FN_ENTER(0x0044b7fc);
    /* 0044b7fc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044b7fd: mov ebp, esp */ r_ebp = r_esp;
    /* 0044b7ff: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0044b801: push 0x8cec3c */ { u32 v = 0x8cec3cu; r_esp -= 4; W32(r_esp, v); }
    /* 0044b806: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0044b80c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044b80d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0044b814: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0044b817: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0044b81a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0044b81d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0044b820: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0044b823: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0044b826: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0044b829: mov dword ptr [ecx], 0xaf68c8 */ W32((u32)(r_ecx), 0xaf68c8u);
    /* 0044b82f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0044b836: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x44b83bu); f_008171e8();
    /* 0044b83b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044b83e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0044b845: mov esp, ebp */ r_esp = r_ebp;
    /* 0044b847: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044b848: ret  */ FN_RET(0x0044b7fc); r_esp += 4; return;
}

void f_0044b84c(void) /* sub_44B84C */
{
    FN_ENTER(0x0044b84c);
    /* 0044b84c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044b84d: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0044b850: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0044b852: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 0044b858: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0044b85a: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x44b85fu); f_008193cc();
    /* 0044b85f: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0044b863: mov dword ptr [ebp], 0xaf68c8 */ W32((u32)(r_ebp), 0xaf68c8u);
    /* 0044b86a: mov edx, dword ptr [0x9a5698] */ r_edx = R32((u32)(0x9a5698u));
    /* 0044b870: mov dword ptr [ebp + 0x28], 0 */ W32((u32)(r_ebp+0x28u), 0x0u);
    /* 0044b877: mov dword ptr [ebp + 4], edx */ W32((u32)(r_ebp+0x4u), r_edx);
    /* 0044b87a: mov dword ptr [ebp + 0x1c], eax */ W32((u32)(r_ebp+0x1cu), r_eax);
    /* 0044b87d: imul eax, eax, -0x3c */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xffffffc4u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0044b880: add eax, -0x5a */ {  u32 a = r_eax; u32 b = 0xffffffa6u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0044b883: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0044b886: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 0044b889: fmul dword ptr [0x8fea20] */ ST(0) = ST(0) * R_F32((u32)(0x8fea20u));
    /* 0044b88f: fdiv dword ptr [0x8fea1c] */ ST(0) = ST(0) / R_F32((u32)(0x8fea1cu));
    /* 0044b895: mov dword ptr [ebp + 0x2c], 0 */ W32((u32)(r_ebp+0x2cu), 0x0u);
    /* 0044b89c: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 0044b8a0: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 0044b8a5: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0044b8aa: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0044b8ae: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0044b8b2: fistp dword ptr [ebp + 0x30] */ W32((u32)(r_ebp+0x30u), (u32)fx_int32(ST(0))); FPOP();
    /* 0044b8b5: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0044b8b9: mov eax, ebp */ r_eax = r_ebp;
    /* 0044b8bb: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0044b8be: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044b8bf: ret 4 */ FN_RET(0x0044b84c); r_esp += 8; return;
}

void f_0044b8c4(void) /* sub_44B8C4 */
{
    FN_ENTER(0x0044b8c4);
    /* 0044b8c4: mov eax, dword ptr [ecx + 0x20] */ r_eax = R32((u32)(r_ecx+0x20u));
    /* 0044b8c7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0044b8c9: je 0x44b8e0 */ if (fZ) goto L_0044b8e0;
L_0044b8cb:; BB(0x0044b8cb);
    /* 0044b8cb: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044b8ce: jne 0x44b8d6 */ if (!fZ) goto L_0044b8d6;
L_0044b8d0:; BB(0x0044b8d0);
    /* 0044b8d0: call 0x44b944 */ r_esp -= 4; W32(r_esp, 0x44b8d5u); f_0044b944();
    /* 0044b8d5: ret  */ FN_RET(0x0044b8c4); r_esp += 4; return;
L_0044b8d6:; BB(0x0044b8d6);
    /* 0044b8d6: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0044b8d9: jne 0x44b8e0 */ if (!fZ) goto L_0044b8e0;
L_0044b8db:; BB(0x0044b8db);
    /* 0044b8db: call 0x44b8e4 */ r_esp -= 4; W32(r_esp, 0x44b8e0u); f_0044b8e4();
L_0044b8e0:; BB(0x0044b8e0);
    /* 0044b8e0: ret  */ FN_RET(0x0044b8c4); r_esp += 4; return;
}

void f_0044b8e4(void) /* sub_44B8E4 */
{
    FN_ENTER(0x0044b8e4);
    /* 0044b8e4: mov eax, dword ptr [ecx + 0x24] */ r_eax = R32((u32)(r_ecx+0x24u));
    /* 0044b8e7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fO = 0; }
    /* 0044b8e9: jne 0x44b915 */ if (!fZ) goto L_0044b915;
L_0044b8eb:; BB(0x0044b8eb);
    /* 0044b8eb: fld dword ptr [0xa44ca8] */ FPUSH(R_F32((u32)(0xa44ca8u)));
    /* 0044b8f1: fadd dword ptr [ecx + 0x28] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x28u));
    /* 0044b8f4: fcom dword ptr [0x8fea10] */ fx_compare(ST(0), R_F32((u32)(0x8fea10u))); 
    /* 0044b8fa: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0044b8fc: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0044b8fd: ja 0x44b911 */ if ((!fC&&!fZ)) goto L_0044b911;
L_0044b8ff:; BB(0x0044b8ff);
    /* 0044b8ff: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0044b901: mov dword ptr [ecx + 0x24], 1 */ W32((u32)(r_ecx+0x24u), 0x1u);
    /* 0044b908: mov eax, 0xc0400000 */ r_eax = 0xc0400000u;
    /* 0044b90d: mov dword ptr [ecx + 0x28], eax */ W32((u32)(r_ecx+0x28u), r_eax);
    /* 0044b910: ret  */ FN_RET(0x0044b8e4); r_esp += 4; return;
L_0044b911:; BB(0x0044b911);
    /* 0044b911: fstp dword ptr [ecx + 0x28] */ W_F32((u32)(r_ecx+0x28u), ST(0)); FPOP();
    /* 0044b914: ret  */ FN_RET(0x0044b8e4); r_esp += 4; return;
L_0044b915:; BB(0x0044b915);
    /* 0044b915: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0044b918: jne 0x44b943 */ if (!fZ) goto L_0044b943;
L_0044b91a:; BB(0x0044b91a);
    /* 0044b91a: fld dword ptr [0xa44ca4] */ FPUSH(R_F32((u32)(0xa44ca4u)));
    /* 0044b920: fadd dword ptr [ecx + 0x2c] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x2cu));
    /* 0044b923: fcom dword ptr [0x8fea14] */ fx_compare(ST(0), R_F32((u32)(0x8fea14u))); 
    /* 0044b929: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0044b92b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0044b92c: ja 0x44b940 */ if ((!fC&&!fZ)) goto L_0044b940;
L_0044b92e:; BB(0x0044b92e);
    /* 0044b92e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0044b930: mov dword ptr [ecx + 0x20], 0 */ W32((u32)(r_ecx+0x20u), 0x0u);
    /* 0044b937: mov eax, 0xc1900000 */ r_eax = 0xc1900000u;
    /* 0044b93c: mov dword ptr [ecx + 0x2c], eax */ W32((u32)(r_ecx+0x2cu), r_eax);
    /* 0044b93f: ret  */ FN_RET(0x0044b8e4); r_esp += 4; return;
L_0044b940:; BB(0x0044b940);
    /* 0044b940: fstp dword ptr [ecx + 0x2c] */ W_F32((u32)(r_ecx+0x2cu), ST(0)); FPOP();
L_0044b943:; BB(0x0044b943);
    /* 0044b943: ret  */ FN_RET(0x0044b8e4); r_esp += 4; return;
}

void f_0044b944(void) /* sub_44B944 */
{
    FN_ENTER(0x0044b944);
    /* 0044b944: mov eax, dword ptr [ecx + 0x24] */ r_eax = R32((u32)(r_ecx+0x24u));
    /* 0044b947: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fO = 0; }
    /* 0044b949: jne 0x44b972 */ if (!fZ) goto L_0044b972;
L_0044b94b:; BB(0x0044b94b);
    /* 0044b94b: fld dword ptr [ecx + 0x2c] */ FPUSH(R_F32((u32)(r_ecx+0x2cu)));
    /* 0044b94e: fsub dword ptr [0xa44ca4] */ ST(0) = ST(0) - R_F32((u32)(0xa44ca4u));
    /* 0044b954: fcom dword ptr [0x8fea0c] */ fx_compare(ST(0), R_F32((u32)(0x8fea0cu))); 
    /* 0044b95a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0044b95c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0044b95d: jb 0x44b96e */ if (fC) goto L_0044b96e;
L_0044b95f:; BB(0x0044b95f);
    /* 0044b95f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0044b961: mov dword ptr [ecx + 0x24], 1 */ W32((u32)(r_ecx+0x24u), 0x1u);
    /* 0044b968: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0044b96a: mov dword ptr [ecx + 0x2c], eax */ W32((u32)(r_ecx+0x2cu), r_eax);
    /* 0044b96d: ret  */ FN_RET(0x0044b944); r_esp += 4; return;
L_0044b96e:; BB(0x0044b96e);
    /* 0044b96e: fstp dword ptr [ecx + 0x2c] */ W_F32((u32)(r_ecx+0x2cu), ST(0)); FPOP();
    /* 0044b971: ret  */ FN_RET(0x0044b944); r_esp += 4; return;
L_0044b972:; BB(0x0044b972);
    /* 0044b972: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0044b975: jne 0x44b99d */ if (!fZ) goto L_0044b99d;
L_0044b977:; BB(0x0044b977);
    /* 0044b977: fld dword ptr [ecx + 0x28] */ FPUSH(R_F32((u32)(r_ecx+0x28u)));
    /* 0044b97a: fsub dword ptr [0xa44ca8] */ ST(0) = ST(0) - R_F32((u32)(0xa44ca8u));
    /* 0044b980: fcom dword ptr [0x8fea0c] */ fx_compare(ST(0), R_F32((u32)(0x8fea0cu))); 
    /* 0044b986: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0044b988: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0044b989: jb 0x44b99a */ if (fC) goto L_0044b99a;
L_0044b98b:; BB(0x0044b98b);
    /* 0044b98b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0044b98d: mov dword ptr [ecx + 0x20], 0 */ W32((u32)(r_ecx+0x20u), 0x0u);
    /* 0044b994: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0044b996: mov dword ptr [ecx + 0x28], eax */ W32((u32)(r_ecx+0x28u), r_eax);
    /* 0044b999: ret  */ FN_RET(0x0044b944); r_esp += 4; return;
L_0044b99a:; BB(0x0044b99a);
    /* 0044b99a: fstp dword ptr [ecx + 0x28] */ W_F32((u32)(r_ecx+0x28u), ST(0)); FPOP();
L_0044b99d:; BB(0x0044b99d);
    /* 0044b99d: ret  */ FN_RET(0x0044b944); r_esp += 4; return;
}

void f_0044b9a0(void) /* sub_44B9A0 */
{
    FN_ENTER(0x0044b9a0);
    /* 0044b9a0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0044b9a1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0044b9a3: call 0x578b38 */ r_esp -= 4; W32(r_esp, 0x44b9a8u); f_00578b38();
    /* 0044b9a8: mov ecx, dword ptr [0xa44cac] */ r_ecx = R32((u32)(0xa44cacu));
    /* 0044b9ae: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x44b9b3u); f_00829cc8();
    /* 0044b9b3: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x44b9b8u); f_0082d7b0();
    /* 0044b9b8: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 0044b9bd: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
    /* 0044b9c0: and eax, 0xfffffbff */ {  u32 a = r_eax; u32 b = 0xfffffbffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0044b9c5: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 0044b9ca: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0044b9cc: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x44b9d1u); f_0082d8bc();
    /* 0044b9d1: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x44b9d6u); f_0082d7b0();
    /* 0044b9d6: push dword ptr [ebx + 0x2c] */ { u32 v = R32((u32)(r_ebx+0x2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0044b9d9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044b9db: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0044b9dd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044b9df: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x44b9e4u); f_00830b74();
    /* 0044b9e4: push dword ptr [0xa44cb0] */ { u32 v = R32((u32)(0xa44cb0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0044b9ea: call 0x82e6b0 */ r_esp -= 4; W32(r_esp, 0x44b9efu); f_0082e6b0();
    /* 0044b9ef: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0044b9f0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044b9f2: push dword ptr [ebx + 0x28] */ { u32 v = R32((u32)(r_ebx+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 0044b9f5: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0044b9f7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044b9f9: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x44b9feu); f_00830b74();
    /* 0044b9fe: push dword ptr [0xa44cb4] */ { u32 v = R32((u32)(0xa44cb4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0044ba04: call 0x82e6b0 */ r_esp -= 4; W32(r_esp, 0x44ba09u); f_0082e6b0();
    /* 0044ba09: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0044ba0a: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x44ba0fu); f_0082da80();
    /* 0044ba0f: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x44ba14u); f_0082da80();
    /* 0044ba14: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x44ba19u); f_0082dab0();
    /* 0044ba19: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0044ba1a: ret  */ FN_RET(0x0044b9a0); r_esp += 4; return;
}

void f_0044ba1c(void) /* sub_44BA1C */
{
    FN_ENTER(0x0044ba1c);
    /* 0044ba1c: mov dword ptr [0xa44ca8], 0xbe99999a */ W32((u32)(0xa44ca8u), 0xbe99999au);
    /* 0044ba26: mov dword ptr [0xa44ca4], 0xbfe66666 */ W32((u32)(0xa44ca4u), 0xbfe66666u);
    /* 0044ba30: ret  */ FN_RET(0x0044ba1c); r_esp += 4; return;
}

void f_0044ba34(void) /* sub_44BA34 */
{
    FN_ENTER(0x0044ba34);
    /* 0044ba34: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0044ba35: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0044ba37: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0044ba39: call 0x44ba58 */ r_esp -= 4; W32(r_esp, 0x44ba3eu); f_0044ba58();
    /* 0044ba3e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0044ba42: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0044ba44: jne 0x44ba4a */ if (!fZ) goto L_0044ba4a;
L_0044ba46:; BB(0x0044ba46);
    /* 0044ba46: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0044ba47: ret 4 */ FN_RET(0x0044ba34); r_esp += 8; return;
L_0044ba4a:; BB(0x0044ba4a);
    /* 0044ba4a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0044ba4b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x44ba50u); f_005c2f74();
    /* 0044ba50: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0044ba51: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0044ba52: ret 4 */ FN_RET(0x0044ba34); r_esp += 8; return;
}

void f_0044ba58(void) /* sub_44BA58 */
{
    FN_ENTER(0x0044ba58);
    /* 0044ba58: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044ba59: mov ebp, esp */ r_ebp = r_esp;
    /* 0044ba5b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0044ba5d: push 0x8cec58 */ { u32 v = 0x8cec58u; r_esp -= 4; W32(r_esp, v); }
    /* 0044ba62: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0044ba68: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044ba69: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0044ba70: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0044ba73: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0044ba76: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0044ba79: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0044ba7c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0044ba7f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0044ba82: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0044ba85: mov dword ptr [ecx], 0xaf6928 */ W32((u32)(r_ecx), 0xaf6928u);
    /* 0044ba8b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0044ba92: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x44ba97u); f_008171e8();
    /* 0044ba97: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044ba9a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0044baa1: mov esp, ebp */ r_esp = r_ebp;
    /* 0044baa3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044baa4: ret  */ FN_RET(0x0044ba58); r_esp += 4; return;
}

void f_0044baa8(void) /* sub_44BAA8 */
{
    FN_ENTER(0x0044baa8);
    /* 0044baa8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0044baa9: mov esi, ecx */ r_esi = r_ecx;
    /* 0044baab: call 0x44d138 */ r_esp -= 4; W32(r_esp, 0x44bab0u); f_0044d138();
    /* 0044bab0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044bab2: jne 0x44baf6 */ if (!fZ) goto L_0044baf6;
L_0044bab4:; BB(0x0044bab4);
    /* 0044bab4: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 0044bab7: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0044baba: mov dword ptr [esi + 0x1c], eax */ W32((u32)(r_esi+0x1cu), r_eax);
    /* 0044babd: cmp eax, 0x5a */ {  u32 a = r_eax; u32 b = 0x5au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0044bac0: jle 0x44baf4 */ if ((fZ||fS!=fO)) goto L_0044baf4;
L_0044bac2:; BB(0x0044bac2);
    /* 0044bac2: call 0x454058 */ r_esp -= 4; W32(r_esp, 0x44bac7u); f_00454058();
    /* 0044bac7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044bac9: je 0x44badd */ if (fZ) goto L_0044badd;
L_0044bacb:; BB(0x0044bacb);
    /* 0044bacb: call 0x45408c */ r_esp -= 4; W32(r_esp, 0x44bad0u); f_0045408c();
    /* 0044bad0: push 0x8fea24 */ { u32 v = 0x8fea24u; r_esp -= 4; W32(r_esp, v); }
    /* 0044bad5: call 0x814afc */ r_esp -= 4; W32(r_esp, 0x44badau); f_00814afc();
    /* 0044bada: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0044badb: jmp 0x44bae5 */ goto L_0044bae5;
L_0044badd:; BB(0x0044badd);
    /* 0044badd: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0044badf: call 0x814c7c */ r_esp -= 4; W32(r_esp, 0x44bae4u); f_00814c7c();
    /* 0044bae4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0044bae5:; BB(0x0044bae5);
    /* 0044bae5: movzx eax, word ptr [esi + 8] */ r_eax = (u32)R16((u32)(r_esi+0x8u));
    /* 0044bae9: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0044baee: mov word ptr [esi + 8], ax */ W16((u32)(r_esi+0x8u), (u16)r_eax);
    /* 0044baf2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0044baf3: ret  */ FN_RET(0x0044baa8); r_esp += 4; return;
L_0044baf4:; BB(0x0044baf4);
    /* 0044baf4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0044baf5: ret  */ FN_RET(0x0044baa8); r_esp += 4; return;
L_0044baf6:; BB(0x0044baf6);
    /* 0044baf6: movzx eax, word ptr [esi + 8] */ r_eax = (u32)R16((u32)(r_esi+0x8u));
    /* 0044bafa: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0044baff: mov word ptr [esi + 8], ax */ W16((u32)(r_esi+0x8u), (u16)r_eax);
    /* 0044bb03: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0044bb04: ret  */ FN_RET(0x0044baa8); r_esp += 4; return;
}

void f_0044bb08(void) /* sub_44BB08 */
{
    FN_ENTER(0x0044bb08);
    /* 0044bb08: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044bb09: mov ebp, esp */ r_ebp = r_esp;
    /* 0044bb0b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0044bb0d: push 0x8cec80 */ { u32 v = 0x8cec80u; r_esp -= 4; W32(r_esp, v); }
    /* 0044bb12: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0044bb18: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044bb19: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0044bb20: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0044bb23: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0044bb26: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0044bb29: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0044bb2c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0044bb2f: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0044bb31: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0044bb38: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x44bb3du); f_005caba4();
    /* 0044bb3d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0044bb3e: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0044bb41: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044bb43: je 0x44bb79 */ if (fZ) goto L_0044bb79;
L_0044bb45:; BB(0x0044bb45);
    /* 0044bb45: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0044bb4c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0044bb53: push dword ptr [0xaca378] */ { u32 v = R32((u32)(0xaca378u)); r_esp -= 4; W32(r_esp, v); }
    /* 0044bb59: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0044bb5c: call 0x44bb80 */ r_esp -= 4; W32(r_esp, 0x44bb61u); f_0044bb80();
    /* 0044bb61: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0044bb64: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0044bb6b:; BB(0x0044bb6b);
    /* 0044bb6b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044bb6e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0044bb75: mov esp, ebp */ r_esp = r_ebp;
    /* 0044bb77: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044bb78: ret  */ FN_RET(0x0044bb08); r_esp += 4; return;
L_0044bb79:; BB(0x0044bb79);
    /* 0044bb79: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0044bb7b: jmp 0x44bb6b */ goto L_0044bb6b;
}

void f_0044bb80(void) /* sub_44BB80 */
{
    FN_ENTER(0x0044bb80);
    /* 0044bb80: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0044bb81: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0044bb83: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0044bb87: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0044bb89: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x44bb8eu); f_008193cc();
    /* 0044bb8e: mov dword ptr [ebx], 0xaf6928 */ W32((u32)(r_ebx), 0xaf6928u);
    /* 0044bb94: mov edx, dword ptr [0x9a569c] */ r_edx = R32((u32)(0x9a569cu));
    /* 0044bb9a: mov dword ptr [ebx + 4], edx */ W32((u32)(r_ebx+0x4u), r_edx);
    /* 0044bb9d: mov eax, ebx */ r_eax = r_ebx;
    /* 0044bb9f: mov dword ptr [ebx + 0x1c], 0 */ W32((u32)(r_ebx+0x1cu), 0x0u);
    /* 0044bba6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0044bba7: ret 4 */ FN_RET(0x0044bb80); r_esp += 8; return;
}

void f_0044bbac(void) /* sub_44BBAC */
{
    FN_ENTER(0x0044bbac);
    /* 0044bbac: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0044bbad: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0044bbaf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0044bbb1: call 0x52dd84 */ r_esp -= 4; W32(r_esp, 0x44bbb6u); f_0052dd84();
    /* 0044bbb6: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0044bbba: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0044bbbc: jne 0x44bbc2 */ if (!fZ) goto L_0044bbc2;
L_0044bbbe:; BB(0x0044bbbe);
    /* 0044bbbe: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0044bbbf: ret 4 */ FN_RET(0x0044bbac); r_esp += 8; return;
L_0044bbc2:; BB(0x0044bbc2);
    /* 0044bbc2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0044bbc3: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x44bbc8u); f_00857e98();
    /* 0044bbc8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0044bbc9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0044bbca: ret 4 */ FN_RET(0x0044bbac); r_esp += 8; return;
}

void f_0044bbd0(void) /* sub_44BBD0 */
{
    FN_ENTER(0x0044bbd0);
    /* 0044bbd0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0044bbd1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0044bbd3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0044bbd5: call 0x44bbf4 */ r_esp -= 4; W32(r_esp, 0x44bbdau); f_0044bbf4();
    /* 0044bbda: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0044bbde: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0044bbe0: jne 0x44bbe6 */ if (!fZ) goto L_0044bbe6;
L_0044bbe2:; BB(0x0044bbe2);
    /* 0044bbe2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0044bbe3: ret 4 */ FN_RET(0x0044bbd0); r_esp += 8; return;
L_0044bbe6:; BB(0x0044bbe6);
    /* 0044bbe6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0044bbe7: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x44bbecu); f_005c2f74();
    /* 0044bbec: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0044bbed: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0044bbee: ret 4 */ FN_RET(0x0044bbd0); r_esp += 8; return;
}

void f_0044bbf4(void) /* sub_44BBF4 */
{
    FN_ENTER(0x0044bbf4);
    /* 0044bbf4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044bbf5: mov ebp, esp */ r_ebp = r_esp;
    /* 0044bbf7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0044bbf9: push 0x8cec9c */ { u32 v = 0x8cec9cu; r_esp -= 4; W32(r_esp, v); }
    /* 0044bbfe: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0044bc04: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044bc05: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0044bc0c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0044bc0f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0044bc12: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0044bc15: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0044bc18: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0044bc1b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0044bc1e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0044bc25: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0044bc28: mov eax, dword ptr [edx + 0x384] */ r_eax = R32((u32)(r_edx+0x384u));
    /* 0044bc2e: mov dword ptr [edx], 0xaf6a20 */ W32((u32)(r_edx), 0xaf6a20u);
    /* 0044bc34: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044bc37: je 0x44bc43 */ if (fZ) goto L_0044bc43;
L_0044bc39:; BB(0x0044bc39);
    /* 0044bc39: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044bc3c: jl 0x44bc4a */ if ((fS!=fO)) goto L_0044bc4a;
L_0044bc3e:; BB(0x0044bc3e);
    /* 0044bc3e: cmp eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044bc41: jg 0x44bc4a */ if ((!fZ&&fS==fO)) goto L_0044bc4a;
L_0044bc43:; BB(0x0044bc43);
    /* 0044bc43: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044bc44: call 0x8113e4 */ r_esp -= 4; W32(r_esp, 0x44bc49u); f_008113e4();
    /* 0044bc49: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0044bc4a:; BB(0x0044bc4a);
    /* 0044bc4a: call 0x717f38 */ r_esp -= 4; W32(r_esp, 0x44bc4fu); f_00717f38();
    /* 0044bc4f: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 0044bc54: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0044bc56: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0044bc58: jle 0x44bc76 */ if ((fZ||fS!=fO)) goto L_0044bc76;
L_0044bc5a:; BB(0x0044bc5a);
    /* 0044bc5a: mov ecx, dword ptr [ebx*4 + 0xaad720] */ r_ecx = R32((u32)(r_ebx*4+0xaad720u));
    /* 0044bc61: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044bc63: je 0x44bc6f */ if (fZ) goto L_0044bc6f;
L_0044bc65:; BB(0x0044bc65);
    /* 0044bc65: call 0x6855b0 */ r_esp -= 4; W32(r_esp, 0x44bc6au); f_006855b0();
    /* 0044bc6a: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
L_0044bc6f:; BB(0x0044bc6f);
    /* 0044bc6f: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0044bc72: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044bc74: jl 0x44bc5a */ if ((fS!=fO)) goto L_0044bc5a;
L_0044bc76:; BB(0x0044bc76);
    /* 0044bc76: call 0x69b69c */ r_esp -= 4; W32(r_esp, 0x44bc7bu); f_0069b69c();
    /* 0044bc7b: call 0x4d3250 */ r_esp -= 4; W32(r_esp, 0x44bc80u); f_004d3250();
    /* 0044bc80: call 0x44bd78 */ r_esp -= 4; W32(r_esp, 0x44bc85u); f_0044bd78();
    /* 0044bc85: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044bc87: je 0x44bd6b */ if (fZ) goto L_0044bd6b;
L_0044bc8d:; BB(0x0044bc8d);
    /* 0044bc8d: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0044bc90: mov edx, dword ptr [eax + 0x3a0] */ r_edx = R32((u32)(r_eax+0x3a0u));
    /* 0044bc96: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044bc98: je 0x44bcb4 */ if (fZ) goto L_0044bcb4;
L_0044bc9a:; BB(0x0044bc9a);
    /* 0044bc9a: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0044bc9e: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0044bca3: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0044bca7: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0044bcaa: mov dword ptr [edx + 0x3a0], 0 */ W32((u32)(r_edx+0x3a0u), 0x0u);
L_0044bcb4:; BB(0x0044bcb4);
    /* 0044bcb4: mov edx, dword ptr [0xa44d64] */ r_edx = R32((u32)(0xa44d64u));
    /* 0044bcba: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044bcbc: je 0x44bcd5 */ if (fZ) goto L_0044bcd5;
L_0044bcbe:; BB(0x0044bcbe);
    /* 0044bcbe: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0044bcc2: mov dword ptr [0xa44d64], 0 */ W32((u32)(0xa44d64u), 0x0u);
    /* 0044bccc: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0044bcd1: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_0044bcd5:; BB(0x0044bcd5);
    /* 0044bcd5: mov edx, dword ptr [0xa44d60] */ r_edx = R32((u32)(0xa44d60u));
    /* 0044bcdb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044bcdd: je 0x44bcf6 */ if (fZ) goto L_0044bcf6;
L_0044bcdf:; BB(0x0044bcdf);
    /* 0044bcdf: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0044bce3: mov dword ptr [0xa44d60], 0 */ W32((u32)(0xa44d60u), 0x0u);
    /* 0044bced: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0044bcf2: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_0044bcf6:; BB(0x0044bcf6);
    /* 0044bcf6: mov edx, dword ptr [0xa44d5c] */ r_edx = R32((u32)(0xa44d5cu));
    /* 0044bcfc: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044bcfe: je 0x44bd17 */ if (fZ) goto L_0044bd17;
L_0044bd00:; BB(0x0044bd00);
    /* 0044bd00: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0044bd04: mov dword ptr [0xa44d5c], 0 */ W32((u32)(0xa44d5cu), 0x0u);
    /* 0044bd0e: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0044bd13: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_0044bd17:; BB(0x0044bd17);
    /* 0044bd17: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0044bd1a: mov edx, dword ptr [ecx + 0x39c] */ r_edx = R32((u32)(r_ecx+0x39cu));
    /* 0044bd20: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044bd22: je 0x44bd3e */ if (fZ) goto L_0044bd3e;
L_0044bd24:; BB(0x0044bd24);
    /* 0044bd24: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0044bd27: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0044bd2b: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0044bd30: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0044bd34: mov dword ptr [ecx + 0x39c], 0 */ W32((u32)(r_ecx+0x39cu), 0x0u);
L_0044bd3e:; BB(0x0044bd3e);
    /* 0044bd3e: mov dword ptr [0xa44d4c], 0 */ W32((u32)(0xa44d4cu), 0x0u);
    /* 0044bd48: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0044bd4f: call 0x78638c */ r_esp -= 4; W32(r_esp, 0x44bd54u); f_0078638c();
    /* 0044bd54: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0044bd57: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0044bd5a: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0044bd5d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044bd60: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0044bd67: mov esp, ebp */ r_esp = r_ebp;
    /* 0044bd69: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044bd6a: ret  */ FN_RET(0x0044bbf4); r_esp += 4; return;
L_0044bd6b:; BB(0x0044bd6b);
    /* 0044bd6b: call 0x815434 */ r_esp -= 4; W32(r_esp, 0x44bd70u); f_00815434();
    /* 0044bd70: jmp 0x44bc8d */ goto L_0044bc8d;
}

void f_0044bd78(void) /* sub_44BD78 */
{
    FN_ENTER(0x0044bd78);
    /* 0044bd78: call 0x7a61a4 */ r_esp -= 4; W32(r_esp, 0x44bd7du); f_007a61a4();
    /* 0044bd7d: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0044bd80: je 0x44bd85 */ if (fZ) goto L_0044bd85;
L_0044bd82:; BB(0x0044bd82);
    /* 0044bd82: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0044bd84: ret  */ FN_RET(0x0044bd78); r_esp += 4; return;
L_0044bd85:; BB(0x0044bd85);
    /* 0044bd85: mov eax, 1 */ r_eax = 0x1u;
    /* 0044bd8a: ret  */ FN_RET(0x0044bd78); r_esp += 4; return;
}

void f_0044bd8c(void) /* sub_44BD8C */
{
    FN_ENTER(0x0044bd8c);
    /* 0044bd8c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044bd8d: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0044bd8f: mov eax, dword ptr [ebp + 0x384] */ r_eax = R32((u32)(r_ebp+0x384u));
    /* 0044bd95: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044bd97: je 0x44bdd6 */ if (fZ) goto L_0044bdd6;
L_0044bd99:; BB(0x0044bd99);
    /* 0044bd99: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x44bd9eu); f_004f7c84();
    /* 0044bd9e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044bda0: je 0x44bdd6 */ if (fZ) goto L_0044bdd6;
L_0044bda2:; BB(0x0044bda2);
    /* 0044bda2: mov eax, dword ptr [ebp + 0x384] */ r_eax = R32((u32)(r_ebp+0x384u));
    /* 0044bda8: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044bdab: je 0x44bdbf */ if (fZ) goto L_0044bdbf;
L_0044bdad:; BB(0x0044bdad);
    /* 0044bdad: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 0044bdb0: mov eax, dword ptr [eax*4 + 0x9a5948] */ r_eax = R32((u32)(r_eax*4+0x9a5948u));
    /* 0044bdb7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044bdb9: je 0x44bdbf */ if (fZ) goto L_0044bdbf;
L_0044bdbb:; BB(0x0044bdbb);
    /* 0044bdbb: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0044bdbd: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x44bdbfu); call_ind(t); }
L_0044bdbf:; BB(0x0044bdbf);
    /* 0044bdbf: mov eax, dword ptr [0x9a5944] */ r_eax = R32((u32)(0x9a5944u));
    /* 0044bdc4: mov dword ptr [ebp + 0x384], 0 */ W32((u32)(r_ebp+0x384u), 0x0u);
    /* 0044bdce: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044bdd0: je 0x44bdd6 */ if (fZ) goto L_0044bdd6;
L_0044bdd2:; BB(0x0044bdd2);
    /* 0044bdd2: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0044bdd4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x44bdd6u); call_ind(t); }
L_0044bdd6:; BB(0x0044bdd6);
    /* 0044bdd6: call 0x520db8 */ r_esp -= 4; W32(r_esp, 0x44bddbu); f_00520db8();
    /* 0044bddb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0044bddd: je 0x44bde1 */ if (fZ) goto L_0044bde1;
L_0044bddf:; BB(0x0044bddf);
    /* 0044bddf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044bde0: ret  */ FN_RET(0x0044bd8c); r_esp += 4; return;
L_0044bde1:; BB(0x0044bde1);
    /* 0044bde1: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0044bde3: call 0x44be10 */ r_esp -= 4; W32(r_esp, 0x44bde8u); f_0044be10();
    /* 0044bde8: mov eax, dword ptr [ebp + 0x380] */ r_eax = R32((u32)(r_ebp+0x380u));
    /* 0044bdee: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044bdf0: jne 0x44bdf9 */ if (!fZ) goto L_0044bdf9;
L_0044bdf2:; BB(0x0044bdf2);
    /* 0044bdf2: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0044bdf4: call 0x44be34 */ r_esp -= 4; W32(r_esp, 0x44bdf9u); f_0044be34();
L_0044bdf9:; BB(0x0044bdf9);
    /* 0044bdf9: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0044bdfb: call 0x44be4c */ r_esp -= 4; W32(r_esp, 0x44be00u); f_0044be4c();
    /* 0044be00: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0044be02: call 0x44be64 */ r_esp -= 4; W32(r_esp, 0x44be07u); f_0044be64();
    /* 0044be07: call 0x454038 */ r_esp -= 4; W32(r_esp, 0x44be0cu); f_00454038();
    /* 0044be0c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044be0d: ret  */ FN_RET(0x0044bd8c); r_esp += 4; return;
}

void f_0044be10(void) /* sub_44BE10 */
{
    FN_ENTER(0x0044be10);
    /* 0044be10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044be11: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0044be13: call 0x52cf54 */ r_esp -= 4; W32(r_esp, 0x44be18u); f_0052cf54();
    /* 0044be18: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0044be1a: je 0x44be28 */ if (fZ) goto L_0044be28;
L_0044be1c:; BB(0x0044be1c);
    /* 0044be1c: mov dword ptr [ebp + 0x380], 0 */ W32((u32)(r_ebp+0x380u), 0x0u);
    /* 0044be26: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044be27: ret  */ FN_RET(0x0044be10); r_esp += 4; return;
L_0044be28:; BB(0x0044be28);
    /* 0044be28: mov dword ptr [ebp + 0x380], 1 */ W32((u32)(r_ebp+0x380u), 0x1u);
    /* 0044be32: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044be33: ret  */ FN_RET(0x0044be10); r_esp += 4; return;
}

void f_0044be34(void) /* sub_44BE34 */
{
    FN_ENTER(0x0044be34);
    /* 0044be34: mov eax, dword ptr [ecx + 0x384] */ r_eax = R32((u32)(r_ecx+0x384u));
    /* 0044be3a: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 0044be3d: mov eax, dword ptr [edx*4 + 0x9a594c] */ r_eax = R32((u32)(r_edx*4+0x9a594cu));
    /* 0044be44: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0044be46: je 0x44be4a */ if (fZ) goto L_0044be4a;
L_0044be48:; BB(0x0044be48);
    /* 0044be48: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x44be4au); call_ind(t); }
L_0044be4a:; BB(0x0044be4a);
    /* 0044be4a: ret  */ FN_RET(0x0044be34); r_esp += 4; return;
}

void f_0044be4c(void) /* sub_44BE4C */
{
    FN_ENTER(0x0044be4c);
    /* 0044be4c: mov eax, dword ptr [ecx + 0x384] */ r_eax = R32((u32)(r_ecx+0x384u));
    /* 0044be52: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 0044be55: mov eax, dword ptr [edx*4 + 0x9a5950] */ r_eax = R32((u32)(r_edx*4+0x9a5950u));
    /* 0044be5c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0044be5e: je 0x44be62 */ if (fZ) goto L_0044be62;
L_0044be60:; BB(0x0044be60);
    /* 0044be60: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x44be62u); call_ind(t); }
L_0044be62:; BB(0x0044be62);
    /* 0044be62: ret  */ FN_RET(0x0044be4c); r_esp += 4; return;
}

void f_0044be64(void) /* sub_44BE64 */
{
    FN_ENTER(0x0044be64);
    /* 0044be64: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044be65: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0044be68: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0044be6a: mov eax, dword ptr [ebp + 0x384] */ r_eax = R32((u32)(r_ebp+0x384u));
    /* 0044be70: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044be73: jl 0x44be8d */ if ((fS!=fO)) goto L_0044be8d;
L_0044be75:; BB(0x0044be75);
    /* 0044be75: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044be78: jg 0x44be8d */ if ((!fZ&&fS==fO)) goto L_0044be8d;
L_0044be7a:; BB(0x0044be7a);
    /* 0044be7a: mov eax, dword ptr [ebp + 0x37c] */ r_eax = R32((u32)(r_ebp+0x37cu));
    /* 0044be80: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0044be83: mov dword ptr [ebp + 0x37c], eax */ W32((u32)(r_ebp+0x37cu), r_eax);
    /* 0044be89: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0044be8b: jl 0x44be92 */ if ((fS!=fO)) goto L_0044be92;
L_0044be8d:; BB(0x0044be8d);
    /* 0044be8d: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0044be90: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044be91: ret  */ FN_RET(0x0044be64); r_esp += 4; return;
L_0044be92:; BB(0x0044be92);
    /* 0044be92: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x44be97u); f_008587a5();
    /* 0044be97: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0044be9a: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 0044be9d: fdiv dword ptr [0x8feaf4] */ ST(0) = ST(0) / R_F32((u32)(0x8feaf4u));
    /* 0044bea3: fcomp dword ptr [0x8feaf0] */ fx_compare(ST(0), R_F32((u32)(0x8feaf0u))); FPOP();
    /* 0044bea9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0044beab: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0044beac: jae 0x44bec2 */ if (!fC) goto L_0044bec2;
L_0044beae:; BB(0x0044beae);
    /* 0044beae: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0044beb0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044beb1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044beb2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044beb3: push 0x35d */ { u32 v = 0x35du; r_esp -= 4; W32(r_esp, v); }
    /* 0044beb8: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x44bebdu); f_00814298();
    /* 0044bebd: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044bec0: jmp 0x44bed4 */ goto L_0044bed4;
L_0044bec2:; BB(0x0044bec2);
    /* 0044bec2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0044bec4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044bec5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044bec6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044bec7: push 0x35e */ { u32 v = 0x35eu; r_esp -= 4; W32(r_esp, v); }
    /* 0044becc: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x44bed1u); f_00814298();
    /* 0044bed1: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0044bed4:; BB(0x0044bed4);
    /* 0044bed4: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x44bed9u); f_008587a5();
    /* 0044bed9: fld dword ptr [0x8feaec] */ FPUSH(R_F32((u32)(0x8feaecu)));
    /* 0044bedf: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0044bee3: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0044bee7: fdiv dword ptr [0x8feaf4] */ ST(0) = ST(0) / R_F32((u32)(0x8feaf4u));
    /* 0044beed: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0044beef: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0044bef1: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 0044bef5: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 0044befa: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0044beff: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0044bf03: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 0044bf07: fistp dword ptr [ebp + 0x37c] */ W32((u32)(r_ebp+0x37cu), (u32)fx_int32(ST(0))); FPOP();
    /* 0044bf0d: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0044bf11: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0044bf14: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044bf15: ret  */ FN_RET(0x0044be64); r_esp += 4; return;
}

void f_0044bf18(void) /* sub_44BF18 */
{
    FN_ENTER(0x0044bf18);
    /* 0044bf18: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0044bf1b: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 0044bf1f: movzx eax, word ptr [ecx + 0x1c] */ r_eax = (u32)R16((u32)(r_ecx+0x1cu));
    /* 0044bf23: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 0044bf28: mov byte ptr [esp], 0x19 */ W8((u32)(r_esp), 0x19u);
    /* 0044bf2c: mov word ptr [esp + 4], dx */ W16((u32)(r_esp+0x4u), (u16)r_edx);
    /* 0044bf31: mov byte ptr [esp + 1], 4 */ W8((u32)(r_esp+0x1u), 0x4u);
    /* 0044bf36: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0044bf39: mov dword ptr [esp + 8], 0xffffffff */ W32((u32)(r_esp+0x8u), 0xffffffffu);
    /* 0044bf41: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x44bf46u); f_008003e0();
    /* 0044bf46: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0044bf49: ret 4 */ FN_RET(0x0044bf18); r_esp += 8; return;
}

void f_0044bf4c(void) /* sub_44BF4C */
{
    FN_ENTER(0x0044bf4c);
    /* 0044bf4c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0044bf4d: call 0x717f38 */ r_esp -= 4; W32(r_esp, 0x44bf52u); f_00717f38();
    /* 0044bf52: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 0044bf57: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0044bf59: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0044bf5b: jle 0x44bf81 */ if ((fZ||fS!=fO)) goto L_0044bf81;
L_0044bf5d:; BB(0x0044bf5d);
    /* 0044bf5d: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 0044bf60: mov ebx, edx */ r_ebx = r_edx;
L_0044bf62:; BB(0x0044bf62);
    /* 0044bf62: mov ecx, dword ptr [ebx*4 + 0xaad720] */ r_ecx = R32((u32)(r_ebx*4+0xaad720u));
    /* 0044bf69: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044bf6b: je 0x44bf77 */ if (fZ) goto L_0044bf77;
L_0044bf6d:; BB(0x0044bf6d);
    /* 0044bf6d: call 0x6855b0 */ r_esp -= 4; W32(r_esp, 0x44bf72u); f_006855b0();
    /* 0044bf72: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
L_0044bf77:; BB(0x0044bf77);
    /* 0044bf77: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0044bf7a: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044bf7c: jl 0x44bf62 */ if ((fS!=fO)) goto L_0044bf62;
L_0044bf7e:; BB(0x0044bf7e);
    /* 0044bf7e: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
L_0044bf81:; BB(0x0044bf81);
    /* 0044bf81: call 0x69b69c */ r_esp -= 4; W32(r_esp, 0x44bf86u); f_0069b69c();
    /* 0044bf86: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0044bf87: ret  */ FN_RET(0x0044bf4c); r_esp += 4; return;
}

void f_0044bf88(void) /* sub_44BF88 */
{
    FN_ENTER(0x0044bf88);
    /* 0044bf88: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0044bf89: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0044bf8c: mov ecx, dword ptr [ecx + 0x398] */ r_ecx = R32((u32)(r_ecx+0x398u));
    /* 0044bf92: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0044bf94: jle 0x44c087 */ if ((fZ||fS!=fO)) goto L_0044c087;
L_0044bf9a:; BB(0x0044bf9a);
    /* 0044bf9a: mov eax, 0x10000 */ r_eax = 0x10000u;
    /* 0044bf9f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0044bfa1: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0044bfa1, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0044bfa1, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
L_0044bfa3:; BB(0x0044bfa3);
    /* 0044bfa3: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
    /* 0044bfa9: mov ecx, eax */ r_ecx = r_eax;
    /* 0044bfab: shr ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0044bfae: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0044bfb0: sar ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0044bfb2: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0044bfb4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0044bfb6: jle 0x44bfef */ if ((fZ||fS!=fO)) goto L_0044bfef;
L_0044bfb8:; BB(0x0044bfb8);
    /* 0044bfb8: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 0044bfbc: mov esi, eax */ r_esi = r_eax;
    /* 0044bfbe: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 0044bfc2: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 0044bfc5: mov ebp, ecx */ r_ebp = r_ecx;
L_0044bfc7:; BB(0x0044bfc7);
    /* 0044bfc7: mov edi, dword ptr [ebx*4 + 0xaad720] */ r_edi = R32((u32)(r_ebx*4+0xaad720u));
    /* 0044bfce: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044bfd0: je 0x44bfdd */ if (fZ) goto L_0044bfdd;
L_0044bfd2:; BB(0x0044bfd2);
    /* 0044bfd2: mov eax, dword ptr [edi + 0x3ec] */ r_eax = R32((u32)(r_edi+0x3ecu));
    /* 0044bfd8: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044bfdb: je 0x44bff4 */ if (fZ) goto L_0044bff4;
L_0044bfdd:; BB(0x0044bfdd);
    /* 0044bfdd: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0044bfe0: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044bfe2: jl 0x44bfc7 */ if ((fS!=fO)) goto L_0044bfc7;
L_0044bfe4:; BB(0x0044bfe4);
    /* 0044bfe4: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 0044bfe8: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 0044bfec: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
L_0044bfef:; BB(0x0044bfef);
    /* 0044bfef: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0044bff2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0044bff3: ret  */ FN_RET(0x0044bf88); r_esp += 4; return;
L_0044bff4:; BB(0x0044bff4);
    /* 0044bff4: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0044bff6: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x44bffbu); f_0082dcbc();
    /* 0044bffb: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 0044bfff: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 0044c003: fmul dword ptr [0x8fea2c] */ ST(0) = ST(0) * R_F32((u32)(0x8fea2cu));
    /* 0044c009: fadd dword ptr [0x8feae4] */ ST(0) = ST(0) + R_F32((u32)(0x8feae4u));
    /* 0044c00f: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 0044c013: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0044c015: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x44c01au); f_0082ddd8();
    /* 0044c01a: fmul dword ptr [0x8fea2c] */ ST(0) = ST(0) * R_F32((u32)(0x8fea2cu));
    /* 0044c020: fadd dword ptr [0x8feae4] */ ST(0) = ST(0) + R_F32((u32)(0x8feae4u));
    /* 0044c026: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 0044c02a: fst dword ptr [edi + 0x38] */ W_F32((u32)(r_edi+0x38u), ST(0));
    /* 0044c02d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0044c02f: fst dword ptr [edi + 0x40] */ W_F32((u32)(r_edi+0x40u), ST(0));
    /* 0044c032: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0044c034: fstp dword ptr [edi + 0x44] */ W_F32((u32)(r_edi+0x44u), ST(0)); FPOP();
    /* 0044c037: fstp dword ptr [edi + 0x4c] */ W_F32((u32)(r_edi+0x4cu), ST(0)); FPOP();
    /* 0044c03a: mov dword ptr [edi + 0x3c], 0x41200000 */ W32((u32)(r_edi+0x3cu), 0x41200000u);
    /* 0044c041: mov ecx, edi */ r_ecx = r_edi;
    /* 0044c043: mov dword ptr [edi + 0x48], 0x41200000 */ W32((u32)(r_edi+0x48u), 0x41200000u);
    /* 0044c04a: mov dword ptr [edi + 0x60], 0x8000 */ W32((u32)(r_edi+0x60u), 0x8000u);
    /* 0044c051: call 0x69357c */ r_esp -= 4; W32(r_esp, 0x44c056u); f_0069357c();
    /* 0044c056: movsx edx, word ptr [edi + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0044c05d: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044c060: jne 0x44c069 */ if (!fZ) goto L_0044c069;
L_0044c062:; BB(0x0044c062);
    /* 0044c062: mov edx, 1 */ r_edx = 0x1u;
    /* 0044c067: jmp 0x44c06b */ goto L_0044c06b;
L_0044c069:; BB(0x0044c069);
    /* 0044c069: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_0044c06b:; BB(0x0044c06b);
    /* 0044c06b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044c06d: je 0x44c07a */ if (fZ) goto L_0044c07a;
L_0044c06f:; BB(0x0044c06f);
    /* 0044c06f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044c071: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0044c072: call 0x4d2fb4 */ r_esp -= 4; W32(r_esp, 0x44c077u); f_004d2fb4();
    /* 0044c077: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0044c07a:; BB(0x0044c07a);
    /* 0044c07a: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
    /* 0044c080: add ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0044c082: jmp 0x44bfdd */ goto L_0044bfdd;
L_0044c087:; BB(0x0044c087);
    /* 0044c087: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0044c089: jmp 0x44bfa3 */ goto L_0044bfa3;
}

