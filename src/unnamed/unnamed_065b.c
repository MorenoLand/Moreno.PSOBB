#include "protos.h"

void f_0065b068(void)
{
    FN_ENTER(0x0065b068);
    /* 0065b068: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065b069: mov ebp, esp */ r_ebp = r_esp;
    /* 0065b06b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065b06d: push 0x8e73f0 */ { u32 v = 0x8e73f0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065b072: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0065b078: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065b079: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0065b080: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0065b083: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0065b086: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0065b089: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0065b08c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0065b08f: push 0xa4 */ { u32 v = 0xa4u; r_esp -= 4; W32(r_esp, v); }
    /* 0065b094: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0065b09b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x65b0a0u); f_005caba4();
    /* 0065b0a0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0065b0a1: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0065b0a4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065b0a6: je 0x65b0df */ if (fZ) goto L_0065b0df;
L_0065b0a8:; BB(0x0065b0a8);
    /* 0065b0a8: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0065b0af: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0065b0b6: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0065b0b9: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 0065b0bf: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065b0c2: call 0x65b0e4 */ r_esp -= 4; W32(r_esp, 0x65b0c7u); f_0065b0e4();
    /* 0065b0c7: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065b0ca: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0065b0d1:; BB(0x0065b0d1);
    /* 0065b0d1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065b0d4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0065b0db: mov esp, ebp */ r_esp = r_ebp;
    /* 0065b0dd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065b0de: ret  */ FN_RET(0x0065b068); r_esp += 4; return;
L_0065b0df:; BB(0x0065b0df);
    /* 0065b0df: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0065b0e1: jmp 0x65b0d1 */ goto L_0065b0d1;
}

void f_0065b0e4(void) /* sub_65B0E4 */
{
    FN_ENTER(0x0065b0e4);
    /* 0065b0e4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065b0e5: mov ebp, esp */ r_ebp = r_esp;
    /* 0065b0e7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065b0e9: push 0x8e740c */ { u32 v = 0x8e740cu; r_esp -= 4; W32(r_esp, v); }
    /* 0065b0ee: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0065b0f4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065b0f5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0065b0fc: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0065b0ff: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0065b102: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0065b105: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0065b108: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0065b10b: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0065b10e: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0065b111: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0065b114: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0065b117: call 0x7ba278 */ r_esp -= 4; W32(r_esp, 0x65b11cu); f_007ba278();
    /* 0065b11c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0065b123: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0065b126: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0065b129: mov dword ptr [ecx], 0xb32a70 */ W32((u32)(r_ecx), 0xb32a70u);
    /* 0065b12f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0065b131: mov esi, dword ptr [0x9c7fa8] */ r_esi = R32((u32)(0x9c7fa8u));
    /* 0065b137: mov dword ptr [ecx + 4], esi */ W32((u32)(r_ecx+0x4u), r_esi);
    /* 0065b13a: mov dword ptr [ecx + 0xa0], edx */ W32((u32)(r_ecx+0xa0u), r_edx);
    /* 0065b140: mov edi, dword ptr [ebx + 0xc] */ r_edi = R32((u32)(r_ebx+0xcu));
    /* 0065b143: mov dword ptr [ecx + 0x38], edi */ W32((u32)(r_ecx+0x38u), r_edi);
    /* 0065b146: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 0065b149: mov dword ptr [ecx + 0x3c], eax */ W32((u32)(r_ecx+0x3cu), r_eax);
    /* 0065b14c: mov eax, dword ptr [ebx + 0x14] */ r_eax = R32((u32)(r_ebx+0x14u));
    /* 0065b14f: mov dword ptr [ecx + 0x40], eax */ W32((u32)(r_ecx+0x40u), r_eax);
    /* 0065b152: mov eax, dword ptr [ebx + 0x18] */ r_eax = R32((u32)(r_ebx+0x18u));
    /* 0065b155: mov dword ptr [ecx + 0x5c], eax */ W32((u32)(r_ecx+0x5cu), r_eax);
    /* 0065b158: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
    /* 0065b15b: mov dword ptr [ecx + 0x60], eax */ W32((u32)(r_ecx+0x60u), r_eax);
    /* 0065b15e: mov eax, dword ptr [ebx + 0x20] */ r_eax = R32((u32)(r_ebx+0x20u));
    /* 0065b161: mov dword ptr [ecx + 0x64], eax */ W32((u32)(r_ecx+0x64u), r_eax);
    /* 0065b164: fld dword ptr [ebx + 0x24] */ FPUSH(R_F32((u32)(r_ebx+0x24u)));
    /* 0065b167: mov eax, dword ptr [ebx + 0x24] */ r_eax = R32((u32)(r_ebx+0x24u));
    /* 0065b16a: mov dword ptr [ecx + 0x68], eax */ W32((u32)(r_ecx+0x68u), r_eax);
    /* 0065b16d: fld dword ptr [ebx + 0x28] */ FPUSH(R_F32((u32)(r_ebx+0x28u)));
    /* 0065b170: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 0065b173: mov dword ptr [ecx + 0x6c], eax */ W32((u32)(r_ecx+0x6cu), r_eax);
    /* 0065b176: mov eax, dword ptr [ebx + 0x2c] */ r_eax = R32((u32)(r_ebx+0x2cu));
    /* 0065b179: mov dword ptr [ecx + 0x70], eax */ W32((u32)(r_ecx+0x70u), r_eax);
    /* 0065b17c: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0065b17e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0065b180: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0065b181: jbe 0x65b185 */ if ((fC||fZ)) goto L_0065b185;
L_0065b183:; BB(0x0065b183);
    /* 0065b183: fst st(1) */ ST(1) = ST(0);
L_0065b185:; BB(0x0065b185);
    /* 0065b185: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0065b187: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0065b189: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0065b18a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0065b18c: ja 0x65b190 */ if ((!fC&&!fZ)) goto L_0065b190;
L_0065b18e:; BB(0x0065b18e);
    /* 0065b18e: fst st(1) */ ST(1) = ST(0);
L_0065b190:; BB(0x0065b190);
    /* 0065b190: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0065b192: fstp dword ptr [ecx + 0x9c] */ W_F32((u32)(r_ecx+0x9cu), ST(0)); FPOP();
    /* 0065b198: mov esi, dword ptr [ebx + 0x30] */ r_esi = R32((u32)(r_ebx+0x30u));
    /* 0065b19b: add esi, dword ptr [ebx + 0x34] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebx+0x34u)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0065b19e: mov eax, 1 */ r_eax = 0x1u;
    /* 0065b1a3: add esi, dword ptr [ebx + 0x38] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebx+0x38u)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0065b1a6: mov dword ptr [ecx + 0x98], edx */ W32((u32)(r_ecx+0x98u), r_edx);
    /* 0065b1ac: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0065b1af: jg 0x65b1b3 */ if ((!fZ&&fS==fO)) goto L_0065b1b3;
L_0065b1b1:; BB(0x0065b1b1);
    /* 0065b1b1: mov esi, eax */ r_esi = r_eax;
L_0065b1b3:; BB(0x0065b1b3);
    /* 0065b1b3: mov dword ptr [ecx + 0x94], esi */ W32((u32)(r_ecx+0x94u), r_esi);
    /* 0065b1b9: lea eax, [ecx + 0x68] */ r_eax = (u32)(r_ecx+0x68u);
    /* 0065b1bc: push dword ptr [ebx + 0x34] */ { u32 v = R32((u32)(r_ebx+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 0065b1bf: push dword ptr [ebx + 0x30] */ { u32 v = R32((u32)(r_ebx+0x30u)); r_esp -= 4; W32(r_esp, v); }
    /* 0065b1c2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065b1c3: call 0x65b468 */ r_esp -= 4; W32(r_esp, 0x65b1c8u); f_0065b468();
    /* 0065b1c8: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0065b1cb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0065b1cd: jne 0x65b1dc */ if (!fZ) goto L_0065b1dc;
L_0065b1cf:; BB(0x0065b1cf);
    /* 0065b1cf: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0065b1d3: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0065b1d8: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_0065b1dc:; BB(0x0065b1dc);
    /* 0065b1dc: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065b1df: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0065b1e2: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0065b1e5: mov eax, edx */ r_eax = r_edx;
    /* 0065b1e7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065b1ea: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0065b1f1: mov esp, ebp */ r_esp = r_ebp;
    /* 0065b1f3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065b1f4: ret 8 */ FN_RET(0x0065b0e4); r_esp += 12; return;
}

void f_0065b1f8(void) /* sub_65B1F8 */
{
    FN_ENTER(0x0065b1f8);
    /* 0065b1f8: mov ecx, dword ptr [0xa8f878] */ r_ecx = R32((u32)(0xa8f878u));
    /* 0065b1fe: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0065b200: je 0x65b215 */ if (fZ) goto L_0065b215;
L_0065b202:; BB(0x0065b202);
    /* 0065b202: je 0x65b20b */ if (fZ) goto L_0065b20b;
L_0065b204:; BB(0x0065b204);
    /* 0065b204: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065b206: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x65b20bu); f_004066a8();
L_0065b20b:; BB(0x0065b20b);
    /* 0065b20b: mov dword ptr [0xa8f878], 0 */ W32((u32)(0xa8f878u), 0x0u);
L_0065b215:; BB(0x0065b215);
    /* 0065b215: ret  */ FN_RET(0x0065b1f8); r_esp += 4; return;
}

void f_0065b218(void) /* sub_65B218 */
{
    FN_ENTER(0x0065b218);
    /* 0065b218: mov dword ptr [0xa8f86c], 0x3f800000 */ W32((u32)(0xa8f86cu), 0x3f800000u);
    /* 0065b222: mov dword ptr [0xa8f870], 0x41000000 */ W32((u32)(0xa8f870u), 0x41000000u);
    /* 0065b22c: mov dword ptr [0xa8f874], 0x3fc00000 */ W32((u32)(0xa8f874u), 0x3fc00000u);
    /* 0065b236: ret  */ FN_RET(0x0065b218); r_esp += 4; return;
}

void f_0065b238(void) /* sub_65B238 */
{
    FN_ENTER(0x0065b238);
    /* 0065b238: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065b239: mov ebp, esp */ r_ebp = r_esp;
    /* 0065b23b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065b23d: push 0x8e74a0 */ { u32 v = 0x8e74a0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065b242: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0065b248: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065b249: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0065b250: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0065b253: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0065b256: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0065b259: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0065b25c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0065b25f: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x65b264u); f_00807ac0();
    /* 0065b264: cmp eax, 0x18 */ {  u32 a = r_eax; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065b267: je 0x65b40e */ if (fZ) goto L_0065b40e;
L_0065b26d:; BB(0x0065b26d);
    /* 0065b26d: cmp eax, 0x1b */ {  u32 a = r_eax; u32 b = 0x1bu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065b270: je 0x65b396 */ if (fZ) goto L_0065b396;
L_0065b276:; BB(0x0065b276);
    /* 0065b276: cmp eax, 0x22 */ {  u32 a = r_eax; u32 b = 0x22u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065b279: je 0x65b396 */ if (fZ) goto L_0065b396;
L_0065b27f:; BB(0x0065b27f);
    /* 0065b27f: cmp eax, 0x1c */ {  u32 a = r_eax; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065b282: jne 0x65b2e1 */ if (!fZ) goto L_0065b2e1;
L_0065b284:; BB(0x0065b284);
    /* 0065b284: mov dword ptr [0xa8f87c], 3 */ W32((u32)(0xa8f87cu), 0x3u);
    /* 0065b28e: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 0065b293: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0065b29a: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x65b29fu); f_008581c5();
    /* 0065b29f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0065b2a0: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0065b2a3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065b2a5: je 0x65b3f8 */ if (fZ) goto L_0065b3f8;
L_0065b2ab:; BB(0x0065b2ab);
    /* 0065b2ab: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 0065b2b2: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0065b2b9: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0065b2bc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0065b2be: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065b2bf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065b2c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065b2c1: push 0x9c7f68 */ { u32 v = 0x9c7f68u; r_esp -= 4; W32(r_esp, v); }
    /* 0065b2c6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065b2c8: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x65b2cdu); f_005b7a84();
    /* 0065b2cd: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0065b2d0: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0065b2d7:; BB(0x0065b2d7);
    /* 0065b2d7: mov dword ptr [0xa8f878], eax */ W32((u32)(0xa8f878u), r_eax);
    /* 0065b2dc: jmp 0x65b3ea */ goto L_0065b3ea;
L_0065b2e1:; BB(0x0065b2e1);
    /* 0065b2e1: cmp eax, 0x1d */ {  u32 a = r_eax; u32 b = 0x1du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065b2e4: jne 0x65b343 */ if (!fZ) goto L_0065b343;
L_0065b2e6:; BB(0x0065b2e6);
    /* 0065b2e6: mov dword ptr [0xa8f87c], 4 */ W32((u32)(0xa8f87cu), 0x4u);
    /* 0065b2f0: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 0065b2f5: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 0065b2fc: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x65b301u); f_008581c5();
    /* 0065b301: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0065b302: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0065b305: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065b307: je 0x65b3ff */ if (fZ) goto L_0065b3ff;
L_0065b30d:; BB(0x0065b30d);
    /* 0065b30d: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 0065b314: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0065b31b: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0065b31e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0065b320: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065b321: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065b322: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065b323: push 0x9c7f98 */ { u32 v = 0x9c7f98u; r_esp -= 4; W32(r_esp, v); }
    /* 0065b328: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065b32a: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x65b32fu); f_005b7a84();
    /* 0065b32f: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0065b332: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_0065b339:; BB(0x0065b339);
    /* 0065b339: mov dword ptr [0xa8f878], eax */ W32((u32)(0xa8f878u), r_eax);
    /* 0065b33e: jmp 0x65b3ea */ goto L_0065b3ea;
L_0065b343:; BB(0x0065b343);
    /* 0065b343: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 0065b348: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0065b34a: mov dword ptr [0xa8f87c], eax */ W32((u32)(0xa8f87cu), r_eax);
    /* 0065b34f: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0065b352: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x65b357u); f_008581c5();
    /* 0065b357: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0065b358: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0065b35b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065b35d: je 0x65b406 */ if (fZ) goto L_0065b406;
L_0065b363:; BB(0x0065b363);
    /* 0065b363: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 0065b36a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0065b371: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0065b374: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0065b376: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065b377: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065b378: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065b379: push 0x9c7ed8 */ { u32 v = 0x9c7ed8u; r_esp -= 4; W32(r_esp, v); }
    /* 0065b37e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065b380: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x65b385u); f_005b7a84();
    /* 0065b385: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0065b388: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_0065b38f:; BB(0x0065b38f);
    /* 0065b38f: mov dword ptr [0xa8f878], eax */ W32((u32)(0xa8f878u), r_eax);
    /* 0065b394: jmp 0x65b3ea */ goto L_0065b3ea;
L_0065b396:; BB(0x0065b396);
    /* 0065b396: mov dword ptr [0xa8f87c], 2 */ W32((u32)(0xa8f87cu), 0x2u);
    /* 0065b3a0: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 0065b3a5: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0065b3ac: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x65b3b1u); f_008581c5();
    /* 0065b3b1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0065b3b2: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0065b3b5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065b3b7: je 0x65b40a */ if (fZ) goto L_0065b40a;
L_0065b3b9:; BB(0x0065b3b9);
    /* 0065b3b9: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0065b3c0: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 0065b3c7: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0065b3ca: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0065b3cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065b3cd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065b3ce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065b3cf: push 0x9c7f38 */ { u32 v = 0x9c7f38u; r_esp -= 4; W32(r_esp, v); }
    /* 0065b3d4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065b3d6: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x65b3dbu); f_005b7a84();
    /* 0065b3db: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0065b3de: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0065b3e5:; BB(0x0065b3e5);
    /* 0065b3e5: mov dword ptr [0xa8f878], eax */ W32((u32)(0xa8f878u), r_eax);
L_0065b3ea:; BB(0x0065b3ea);
    /* 0065b3ea: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065b3ed: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0065b3f4: mov esp, ebp */ r_esp = r_ebp;
    /* 0065b3f6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065b3f7: ret  */ FN_RET(0x0065b238); r_esp += 4; return;
L_0065b3f8:; BB(0x0065b3f8);
    /* 0065b3f8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0065b3fa: jmp 0x65b2d7 */ goto L_0065b2d7;
L_0065b3ff:; BB(0x0065b3ff);
    /* 0065b3ff: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0065b401: jmp 0x65b339 */ goto L_0065b339;
L_0065b406:; BB(0x0065b406);
    /* 0065b406: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0065b408: jmp 0x65b38f */ goto L_0065b38f;
L_0065b40a:; BB(0x0065b40a);
    /* 0065b40a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0065b40c: jmp 0x65b3e5 */ goto L_0065b3e5;
L_0065b40e:; BB(0x0065b40e);
    /* 0065b40e: mov dword ptr [0xa8f87c], 1 */ W32((u32)(0xa8f87cu), 0x1u);
    /* 0065b418: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 0065b41d: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 0065b424: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x65b429u); f_008581c5();
    /* 0065b429: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0065b42a: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0065b42d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065b42f: je 0x65b464 */ if (fZ) goto L_0065b464;
L_0065b431:; BB(0x0065b431);
    /* 0065b431: mov dword ptr [ebp - 0x20], 1 */ W32((u32)(r_ebp+0xffffffe0u), 0x1u);
    /* 0065b438: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 0065b43f: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0065b442: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0065b444: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065b445: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065b446: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065b447: push 0x9c7f08 */ { u32 v = 0x9c7f08u; r_esp -= 4; W32(r_esp, v); }
    /* 0065b44c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065b44e: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x65b453u); f_005b7a84();
    /* 0065b453: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0065b456: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_0065b45d:; BB(0x0065b45d);
    /* 0065b45d: mov dword ptr [0xa8f878], eax */ W32((u32)(0xa8f878u), r_eax);
    /* 0065b462: jmp 0x65b3ea */ goto L_0065b3ea;
L_0065b464:; BB(0x0065b464);
    /* 0065b464: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0065b466: jmp 0x65b45d */ goto L_0065b45d;
}

void f_0065b468(void) /* sub_65B468 */
{
    FN_ENTER(0x0065b468);
    /* 0065b468: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0065b469: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0065b46c: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0065b46e: mov eax, dword ptr [0xa8f87c] */ r_eax = R32((u32)(0xa8f87cu));
    /* 0065b473: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065b475: jne 0x65b48b */ if (!fZ) goto L_0065b48b;
L_0065b477:; BB(0x0065b477);
    /* 0065b477: call 0x671040 */ r_esp -= 4; W32(r_esp, 0x65b47cu); f_00671040();
    /* 0065b47c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065b47e: je 0x65b48b */ if (fZ) goto L_0065b48b;
L_0065b480:; BB(0x0065b480);
    /* 0065b480: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0065b482: mov word ptr [ebx + 0x90], ax */ W16((u32)(r_ebx+0x90u), (u16)r_eax);
    /* 0065b489: jmp 0x65b497 */ goto L_0065b497;
L_0065b48b:; BB(0x0065b48b);
    /* 0065b48b: mov eax, 3 */ r_eax = 0x3u;
    /* 0065b490: mov word ptr [ebx + 0x90], ax */ W16((u32)(r_ebx+0x90u), (u16)r_eax);
L_0065b497:; BB(0x0065b497);
    /* 0065b497: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0065b499: mov word ptr [ebx + 0x92], ax */ W16((u32)(r_ebx+0x92u), (u16)r_eax);
    /* 0065b4a0: mov eax, dword ptr [ebx + 0x94] */ r_eax = R32((u32)(r_ebx+0x94u));
    /* 0065b4a6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0065b4a8: jg 0x65b4b3 */ if ((!fZ&&fS==fO)) goto L_0065b4b3;
L_0065b4aa:; BB(0x0065b4aa);
    /* 0065b4aa: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0065b4ac: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0065b4af: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0065b4b0: ret 0xc */ FN_RET(0x0065b468); r_esp += 16; return;
L_0065b4b3:; BB(0x0065b4b3);
    /* 0065b4b3: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0065b4b5: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0065b4b7: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0065b4ba: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0065b4bc: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0065b4be: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0065b4c0: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0065b4c2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0065b4c3: call 0x82e940 */ r_esp -= 4; W32(r_esp, 0x65b4c8u); f_0082e940();
    /* 0065b4c8: mov edx, eax */ r_edx = r_eax;
    /* 0065b4ca: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065b4cd: mov dword ptr [ebx + 0xa0], edx */ W32((u32)(r_ebx+0xa0u), r_edx);
    /* 0065b4d3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065b4d5: je 0x65b4aa */ if (fZ) goto L_0065b4aa;
L_0065b4d7:; BB(0x0065b4d7);
    /* 0065b4d7: mov ecx, dword ptr [ebx + 0x94] */ r_ecx = R32((u32)(r_ebx+0x94u));
    /* 0065b4dd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0065b4df: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0065b4e1: jle 0x65b652 */ if ((fZ||fS!=fO)) goto L_0065b652;
L_0065b4e7:; BB(0x0065b4e7);
    /* 0065b4e7: mov dword ptr [esp + 0x34], ebx */ W32((u32)(r_esp+0x34u), r_ebx);
    /* 0065b4eb: mov ebx, eax */ r_ebx = r_eax;
    /* 0065b4ed: mov dword ptr [esp + 0x30], esi */ W32((u32)(r_esp+0x30u), r_esi);
    /* 0065b4f1: mov esi, dword ptr [esp + 0x44] */ r_esi = R32((u32)(r_esp+0x44u));
    /* 0065b4f5: mov dword ptr [esp + 0x2c], edi */ W32((u32)(r_esp+0x2cu), r_edi);
    /* 0065b4f9: mov edi, dword ptr [esp + 0x40] */ r_edi = R32((u32)(r_esp+0x40u));
    /* 0065b4fd: mov dword ptr [esp + 0x28], ebp */ W32((u32)(r_esp+0x28u), r_ebp);
    /* 0065b501: mov ebp, edx */ r_ebp = r_edx;
L_0065b503:; BB(0x0065b503);
    /* 0065b503: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x65b508u); f_008587a5();
    /* 0065b508: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0065b50b: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 0065b50e: fdiv dword ptr [0x93830c] */ ST(0) = ST(0) / R_F32((u32)(0x93830cu));
    /* 0065b514: fadd dword ptr [0x938310] */ ST(0) = ST(0) + R_F32((u32)(0x938310u));
    /* 0065b51a: fmul dword ptr [edi] */ ST(0) = ST(0) * R_F32((u32)(r_edi));
    /* 0065b51c: fmul dword ptr [0x938308] */ ST(0) = ST(0) * R_F32((u32)(0x938308u));
    /* 0065b522: fstp dword ptr [ebp] */ W_F32((u32)(r_ebp), ST(0)); FPOP();
    /* 0065b525: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x65b52au); f_008587a5();
    /* 0065b52a: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0065b52e: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0065b532: fdiv dword ptr [0x93830c] */ ST(0) = ST(0) / R_F32((u32)(0x93830cu));
    /* 0065b538: fadd dword ptr [0x938310] */ ST(0) = ST(0) + R_F32((u32)(0x938310u));
    /* 0065b53e: fmul dword ptr [edi + 4] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0x4u));
    /* 0065b541: fmul dword ptr [0x938308] */ ST(0) = ST(0) * R_F32((u32)(0x938308u));
    /* 0065b547: fstp dword ptr [ebp + 4] */ W_F32((u32)(r_ebp+0x4u), ST(0)); FPOP();
    /* 0065b54a: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x65b54fu); f_008587a5();
    /* 0065b54f: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0065b553: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0065b557: fdiv dword ptr [0x93830c] */ ST(0) = ST(0) / R_F32((u32)(0x93830cu));
    /* 0065b55d: fadd dword ptr [0x938310] */ ST(0) = ST(0) + R_F32((u32)(0x938310u));
    /* 0065b563: cmp ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0065b565: fmul dword ptr [edi + 8] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0x8u));
    /* 0065b568: fmul dword ptr [0x938308] */ ST(0) = ST(0) * R_F32((u32)(0x938308u));
    /* 0065b56e: fstp dword ptr [ebp + 8] */ W_F32((u32)(r_ebp+0x8u), ST(0)); FPOP();
    /* 0065b571: mov dword ptr [ebp + 0x18], 0 */ W32((u32)(r_ebp+0x18u), 0x0u);
    /* 0065b578: mov dword ptr [ebp + 0x1c], 0 */ W32((u32)(r_ebp+0x1cu), 0x0u);
    /* 0065b57f: mov dword ptr [ebp + 0x20], 0 */ W32((u32)(r_ebp+0x20u), 0x0u);
    /* 0065b586: jge 0x65b590 */ if ((fS==fO)) goto L_0065b590;
L_0065b588:; BB(0x0065b588);
    /* 0065b588: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0065b58a: mov word ptr [ebp + 0x30], cx */ W16((u32)(r_ebp+0x30u), (u16)r_ecx);
    /* 0065b58e: jmp 0x65b5af */ goto L_0065b5af;
L_0065b590:; BB(0x0065b590);
    /* 0065b590: mov ecx, dword ptr [esp + 0x48] */ r_ecx = R32((u32)(r_esp+0x48u));
    /* 0065b594: lea ecx, [esi + ecx] */ r_ecx = (u32)(r_esi+r_ecx);
    /* 0065b597: cmp ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0065b599: jge 0x65b5a6 */ if ((fS==fO)) goto L_0065b5a6;
L_0065b59b:; BB(0x0065b59b);
    /* 0065b59b: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0065b5a0: mov word ptr [ebp + 0x30], cx */ W16((u32)(r_ebp+0x30u), (u16)r_ecx);
    /* 0065b5a4: jmp 0x65b5af */ goto L_0065b5af;
L_0065b5a6:; BB(0x0065b5a6);
    /* 0065b5a6: mov ecx, 2 */ r_ecx = 0x2u;
    /* 0065b5ab: mov word ptr [ebp + 0x30], cx */ W16((u32)(r_ebp+0x30u), (u16)r_ecx);
L_0065b5af:; BB(0x0065b5af);
    /* 0065b5af: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x65b5b4u); f_008587a5();
    /* 0065b5b4: mov dword ptr [ebp + 0x24], 0 */ W32((u32)(r_ebp+0x24u), 0x0u);
    /* 0065b5bb: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0065b5bf: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0065b5c3: fdiv dword ptr [0x93830c] */ ST(0) = ST(0) / R_F32((u32)(0x93830cu));
    /* 0065b5c9: fmul dword ptr [0x938300] */ ST(0) = ST(0) * R_F32((u32)(0x938300u));
    /* 0065b5cf: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 0065b5d3: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 0065b5d8: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0065b5dd: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0065b5e1: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 0065b5e5: fistp dword ptr [esp + 0x20] */ W32((u32)(r_esp+0x20u), (u32)fx_int32(ST(0))); FPOP();
    /* 0065b5e9: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0065b5ed: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 0065b5f1: mov word ptr [ebp + 0x32], cx */ W16((u32)(r_ebp+0x32u), (u16)r_ecx);
    /* 0065b5f5: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x65b5fau); f_008587a5();
    /* 0065b5fa: mov dword ptr [ebp + 0xc], 0 */ W32((u32)(r_ebp+0xcu), 0x0u);
    /* 0065b601: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0065b605: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0065b609: fdiv dword ptr [0x93830c] */ ST(0) = ST(0) / R_F32((u32)(0x93830cu));
    /* 0065b60f: fstp dword ptr [ebp + 0x28] */ W_F32((u32)(r_ebp+0x28u), ST(0)); FPOP();
    /* 0065b612: mov dword ptr [ebp + 0x10], 0 */ W32((u32)(r_ebp+0x10u), 0x0u);
    /* 0065b619: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0065b61b: mov word ptr [ebp + 0x2c], cx */ W16((u32)(r_ebp+0x2cu), (u16)r_ecx);
    /* 0065b61f: mov word ptr [ebp + 0x2e], cx */ W16((u32)(r_ebp+0x2eu), (u16)r_ecx);
    /* 0065b623: mov dword ptr [ebp + 0x14], 0 */ W32((u32)(r_ebp+0x14u), 0x0u);
    /* 0065b62a: mov dword ptr [ebp + 0x38], ecx */ W32((u32)(r_ebp+0x38u), r_ecx);
    /* 0065b62d: mov dword ptr [ebp + 0x34], ecx */ W32((u32)(r_ebp+0x34u), r_ecx);
    /* 0065b630: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0065b633: mov ecx, dword ptr [esp + 0x34] */ r_ecx = R32((u32)(r_esp+0x34u));
    /* 0065b637: add ebp, 0x44 */ {  u32 a = r_ebp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0065b63a: cmp ebx, dword ptr [ecx + 0x94] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ecx+0x94u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0065b640: jl 0x65b503 */ if ((fS!=fO)) goto L_0065b503;
L_0065b646:; BB(0x0065b646);
    /* 0065b646: mov esi, dword ptr [esp + 0x30] */ r_esi = R32((u32)(r_esp+0x30u));
    /* 0065b64a: mov edi, dword ptr [esp + 0x2c] */ r_edi = R32((u32)(r_esp+0x2cu));
    /* 0065b64e: mov ebp, dword ptr [esp + 0x28] */ r_ebp = R32((u32)(r_esp+0x28u));
L_0065b652:; BB(0x0065b652);
    /* 0065b652: mov eax, 1 */ r_eax = 0x1u;
    /* 0065b657: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0065b65a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0065b65b: ret 0xc */ FN_RET(0x0065b468); r_esp += 16; return;
}

void f_0065b660(void) /* sub_65B660 */
{
    FN_ENTER(0x0065b660);
    /* 0065b660: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0065b661: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0065b663: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0065b665: call 0x65b710 */ r_esp -= 4; W32(r_esp, 0x65b66au); f_0065b710();
    /* 0065b66a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0065b66e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0065b670: jne 0x65b676 */ if (!fZ) goto L_0065b676;
L_0065b672:; BB(0x0065b672);
    /* 0065b672: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0065b673: ret 4 */ FN_RET(0x0065b660); r_esp += 8; return;
L_0065b676:; BB(0x0065b676);
    /* 0065b676: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0065b677: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x65b67cu); f_005c2f74();
    /* 0065b67c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0065b67d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0065b67e: ret 4 */ FN_RET(0x0065b660); r_esp += 8; return;
}

void f_0065b684(void) /* sub_65B684 */
{
    FN_ENTER(0x0065b684);
    /* 0065b684: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0065b685: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0065b687: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0065b689: call 0x65b6a8 */ r_esp -= 4; W32(r_esp, 0x65b68eu); f_0065b6a8();
    /* 0065b68e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0065b692: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0065b694: jne 0x65b69a */ if (!fZ) goto L_0065b69a;
L_0065b696:; BB(0x0065b696);
    /* 0065b696: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0065b697: ret 4 */ FN_RET(0x0065b684); r_esp += 8; return;
L_0065b69a:; BB(0x0065b69a);
    /* 0065b69a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0065b69b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x65b6a0u); f_005c2f74();
    /* 0065b6a0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0065b6a1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0065b6a2: ret 4 */ FN_RET(0x0065b684); r_esp += 8; return;
}

void f_0065b6a8(void) /* sub_65B6A8 */
{
    FN_ENTER(0x0065b6a8);
    /* 0065b6a8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065b6a9: mov ebp, esp */ r_ebp = r_esp;
    /* 0065b6ab: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065b6ad: push 0x8e74bc */ { u32 v = 0x8e74bcu; r_esp -= 4; W32(r_esp, v); }
    /* 0065b6b2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0065b6b8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065b6b9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0065b6c0: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0065b6c3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0065b6c6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0065b6c9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0065b6cc: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0065b6cf: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0065b6d2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0065b6d9: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065b6dc: mov dword ptr [eax], 0xb32d00 */ W32((u32)(r_eax), 0xb32d00u);
    /* 0065b6e2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065b6e3: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x65b6e8u); f_007b4e84();
    /* 0065b6e8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0065b6e9: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065b6ec: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x65b6f1u); f_007b9c8c();
    /* 0065b6f1: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0065b6f8: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065b6fb: call 0x65b710 */ r_esp -= 4; W32(r_esp, 0x65b700u); f_0065b710();
    /* 0065b700: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065b703: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0065b70a: mov esp, ebp */ r_esp = r_ebp;
    /* 0065b70c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065b70d: ret  */ FN_RET(0x0065b6a8); r_esp += 4; return;
}

void f_0065b710(void) /* sub_65B710 */
{
    FN_ENTER(0x0065b710);
    /* 0065b710: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065b711: mov ebp, esp */ r_ebp = r_esp;
    /* 0065b713: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065b715: push 0x8e74d8 */ { u32 v = 0x8e74d8u; r_esp -= 4; W32(r_esp, v); }
    /* 0065b71a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0065b720: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065b721: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0065b728: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0065b72b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0065b72e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0065b731: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0065b734: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0065b737: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0065b73a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065b73d: mov dword ptr [ecx], 0xb32cd0 */ W32((u32)(r_ecx), 0xb32cd0u);
    /* 0065b743: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0065b74a: call 0x6131f4 */ r_esp -= 4; W32(r_esp, 0x65b74fu); f_006131f4();
    /* 0065b74f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065b752: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0065b759: mov esp, ebp */ r_esp = r_ebp;
    /* 0065b75b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065b75c: ret  */ FN_RET(0x0065b710); r_esp += 4; return;
}

void f_0065b760(void) /* sub_65B760 */
{
    FN_ENTER(0x0065b760);
    /* 0065b760: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0065b761: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0065b763: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0065b765: call 0x65b784 */ r_esp -= 4; W32(r_esp, 0x65b76au); f_0065b784();
    /* 0065b76a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0065b76e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0065b770: jne 0x65b776 */ if (!fZ) goto L_0065b776;
L_0065b772:; BB(0x0065b772);
    /* 0065b772: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0065b773: ret 4 */ FN_RET(0x0065b760); r_esp += 8; return;
L_0065b776:; BB(0x0065b776);
    /* 0065b776: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0065b777: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x65b77cu); f_005c2f74();
    /* 0065b77c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0065b77d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0065b77e: ret 4 */ FN_RET(0x0065b760); r_esp += 8; return;
}

void f_0065b784(void) /* sub_65B784 */
{
    FN_ENTER(0x0065b784);
    /* 0065b784: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065b785: mov ebp, esp */ r_ebp = r_esp;
    /* 0065b787: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065b789: push 0x8e74f4 */ { u32 v = 0x8e74f4u; r_esp -= 4; W32(r_esp, v); }
    /* 0065b78e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0065b794: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065b795: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0065b79c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0065b79f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0065b7a2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0065b7a5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0065b7a8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0065b7ab: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0065b7ae: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0065b7b5: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065b7b8: mov dword ptr [eax], 0xb32d30 */ W32((u32)(r_eax), 0xb32d30u);
    /* 0065b7be: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065b7bf: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x65b7c4u); f_007b4e84();
    /* 0065b7c4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0065b7c5: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065b7c8: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x65b7cdu); f_007b9c8c();
    /* 0065b7cd: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0065b7d4: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065b7d7: call 0x65b710 */ r_esp -= 4; W32(r_esp, 0x65b7dcu); f_0065b710();
    /* 0065b7dc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065b7df: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0065b7e6: mov esp, ebp */ r_esp = r_ebp;
    /* 0065b7e8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065b7e9: ret  */ FN_RET(0x0065b784); r_esp += 4; return;
}

void f_0065b7ec(void) /* sub_65B7EC */
{
    FN_ENTER(0x0065b7ec);
    /* 0065b7ec: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0065b7ed: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0065b7ef: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0065b7f1: call 0x65b810 */ r_esp -= 4; W32(r_esp, 0x65b7f6u); f_0065b810();
    /* 0065b7f6: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0065b7fa: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0065b7fc: jne 0x65b802 */ if (!fZ) goto L_0065b802;
L_0065b7fe:; BB(0x0065b7fe);
    /* 0065b7fe: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0065b7ff: ret 4 */ FN_RET(0x0065b7ec); r_esp += 8; return;
L_0065b802:; BB(0x0065b802);
    /* 0065b802: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0065b803: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x65b808u); f_005c2f74();
    /* 0065b808: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0065b809: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0065b80a: ret 4 */ FN_RET(0x0065b7ec); r_esp += 8; return;
}

void f_0065b810(void) /* sub_65B810 */
{
    FN_ENTER(0x0065b810);
    /* 0065b810: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065b811: mov ebp, esp */ r_ebp = r_esp;
    /* 0065b813: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065b815: push 0x8e7510 */ { u32 v = 0x8e7510u; r_esp -= 4; W32(r_esp, v); }
    /* 0065b81a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0065b820: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065b821: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0065b828: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0065b82b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0065b82e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0065b831: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0065b834: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0065b837: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0065b83a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0065b841: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065b844: mov dword ptr [eax], 0xb32d60 */ W32((u32)(r_eax), 0xb32d60u);
    /* 0065b84a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065b84b: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x65b850u); f_007b4e84();
    /* 0065b850: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0065b851: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065b854: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x65b859u); f_007b9c8c();
    /* 0065b859: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0065b860: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065b863: call 0x65b710 */ r_esp -= 4; W32(r_esp, 0x65b868u); f_0065b710();
    /* 0065b868: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065b86b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0065b872: mov esp, ebp */ r_esp = r_ebp;
    /* 0065b874: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065b875: ret  */ FN_RET(0x0065b810); r_esp += 4; return;
}

void f_0065b878(void) /* sub_65B878 */
{
    FN_ENTER(0x0065b878);
    /* 0065b878: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0065b879: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0065b87a: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0065b87c: mov eax, dword ptr [ebx + 0xac] */ r_eax = R32((u32)(r_ebx+0xacu));
    /* 0065b882: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065b884: je 0x65b8f6 */ if (fZ) goto L_0065b8f6;
L_0065b886:; BB(0x0065b886);
    /* 0065b886: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0065b889: je 0x65b8c5 */ if (fZ) goto L_0065b8c5;
L_0065b88b:; BB(0x0065b88b);
    /* 0065b88b: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0065b88e: jne 0x65b8f3 */ if (!fZ) goto L_0065b8f3;
L_0065b890:; BB(0x0065b890);
    /* 0065b890: mov edx, dword ptr [ebx + 0xa8] */ r_edx = R32((u32)(r_ebx+0xa8u));
    /* 0065b896: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0065b898: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0065b89a: jle 0x65b8b9 */ if ((fZ||fS!=fO)) goto L_0065b8b9;
L_0065b89c:; BB(0x0065b89c);
    /* 0065b89c: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 0065b89f: mov esi, eax */ r_esi = r_eax;
L_0065b8a1:; BB(0x0065b8a1);
    /* 0065b8a1: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0065b8a3: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0065b8a4: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0065b8a6: call 0x7b52c4 */ r_esp -= 4; W32(r_esp, 0x65b8abu); f_007b52c4();
    /* 0065b8ab: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0065b8ae: cmp esi, dword ptr [ebx + 0xa8] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebx+0xa8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0065b8b4: jl 0x65b8a1 */ if ((fS!=fO)) goto L_0065b8a1;
L_0065b8b6:; BB(0x0065b8b6);
    /* 0065b8b6: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
L_0065b8b9:; BB(0x0065b8b9);
    /* 0065b8b9: mov dword ptr [ebx + 0xac], 3 */ W32((u32)(r_ebx+0xacu), 0x3u);
    /* 0065b8c3: jmp 0x65b8f3 */ goto L_0065b8f3;
L_0065b8c5:; BB(0x0065b8c5);
    /* 0065b8c5: fld dword ptr [ebx + 0x3c] */ FPUSH(R_F32((u32)(r_ebx+0x3cu)));
    /* 0065b8c8: fadd dword ptr [ebx + 0xd0] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0xd0u));
    /* 0065b8ce: fcom dword ptr [ebx + 0xcc] */ fx_compare(ST(0), R_F32((u32)(r_ebx+0xccu))); 
    /* 0065b8d4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0065b8d6: mov edx, dword ptr [ebx + 0xcc] */ r_edx = R32((u32)(r_ebx+0xccu));
    /* 0065b8dc: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0065b8dd: jbe 0x65b8f0 */ if ((fC||fZ)) goto L_0065b8f0;
L_0065b8df:; BB(0x0065b8df);
    /* 0065b8df: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0065b8e1: mov dword ptr [ebx + 0xac], 2 */ W32((u32)(r_ebx+0xacu), 0x2u);
    /* 0065b8eb: mov dword ptr [ebx + 0x3c], edx */ W32((u32)(r_ebx+0x3cu), r_edx);
    /* 0065b8ee: jmp 0x65b8f3 */ goto L_0065b8f3;
L_0065b8f0:; BB(0x0065b8f0);
    /* 0065b8f0: fstp dword ptr [ebx + 0x3c] */ W_F32((u32)(r_ebx+0x3cu), ST(0)); FPOP();
L_0065b8f3:; BB(0x0065b8f3);
    /* 0065b8f3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0065b8f4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0065b8f5: ret  */ FN_RET(0x0065b878); r_esp += 4; return;
L_0065b8f6:; BB(0x0065b8f6);
    /* 0065b8f6: movzx eax, word ptr [ebx + 0xc8] */ r_eax = (u32)R16((u32)(r_ebx+0xc8u));
    /* 0065b8fd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065b8fe: call 0x816eec */ r_esp -= 4; W32(r_esp, 0x65b903u); f_00816eec();
    /* 0065b903: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0065b904: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0065b907: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0065b909: je 0x65b8f3 */ if (fZ) goto L_0065b8f3;
L_0065b90b:; BB(0x0065b90b);
    /* 0065b90b: mov dword ptr [ebx + 0xac], 1 */ W32((u32)(r_ebx+0xacu), 0x1u);
    /* 0065b915: jmp 0x65b8f3 */ goto L_0065b8f3;
}

void f_0065b918(void) /* sub_65B918 */
{
    FN_ENTER(0x0065b918);
    /* 0065b918: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0065b919: mov esi, ecx */ r_esi = r_ecx;
    /* 0065b91b: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0065b91d: mov ecx, esi */ r_ecx = r_esi;
    /* 0065b91f: push dword ptr [esi + 0xc4] */ { u32 v = R32((u32)(r_esi+0xc4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0065b925: push dword ptr [esi + 0xc0] */ { u32 v = R32((u32)(r_esi+0xc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0065b92b: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x65b92eu); call_ind(t); }
    /* 0065b92e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0065b930: je 0x65b972 */ if (fZ) goto L_0065b972;
L_0065b932:; BB(0x0065b932);
    /* 0065b932: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x65b937u); f_0082d7b0();
    /* 0065b937: lea ecx, [esi + 0x38] */ r_ecx = (u32)(r_esi+0x38u);
    /* 0065b93a: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x65b93fu); f_0082d838();
    /* 0065b93f: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 0065b942: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0065b944: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x65b949u); f_0082d8bc();
    /* 0065b949: mov ecx, dword ptr [esi + 0x24] */ r_ecx = R32((u32)(r_esi+0x24u));
    /* 0065b94c: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x65b951u); f_00829cc8();
    /* 0065b951: mov eax, dword ptr [esi + 0xbc] */ r_eax = R32((u32)(r_esi+0xbcu));
    /* 0065b957: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065b959: je 0x65b974 */ if (fZ) goto L_0065b974;
L_0065b95b:; BB(0x0065b95b);
    /* 0065b95b: push dword ptr [esi + 0xb0] */ { u32 v = R32((u32)(r_esi+0xb0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0065b961: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065b962: push dword ptr [esi + 0x34] */ { u32 v = R32((u32)(r_esi+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 0065b965: call 0x83046c */ r_esp -= 4; W32(r_esp, 0x65b96au); f_0083046c();
    /* 0065b96a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0065b96d:; BB(0x0065b96d);
    /* 0065b96d: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x65b972u); f_0082da80();
L_0065b972:; BB(0x0065b972);
    /* 0065b972: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0065b973: ret  */ FN_RET(0x0065b918); r_esp += 4; return;
L_0065b974:; BB(0x0065b974);
    /* 0065b974: mov ecx, dword ptr [esi + 0x34] */ r_ecx = R32((u32)(r_esi+0x34u));
    /* 0065b977: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x65b97cu); f_00831758();
    /* 0065b97c: jmp 0x65b96d */ goto L_0065b96d;
}

void f_0065b980(void) /* sub_65B980 */
{
    FN_ENTER(0x0065b980);
    /* 0065b980: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065b981: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0065b982: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0065b985: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0065b987: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 0065b98b: mov eax, dword ptr [0xa16380] */ r_eax = R32((u32)(0xa16380u));
    /* 0065b990: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 0065b994: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065b997: je 0x65bb50 */ if (fZ) goto L_0065bb50;
L_0065b99d:; BB(0x0065b99d);
    /* 0065b99d: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
    /* 0065b9a2: lea ebx, [ebp + 0x38] */ r_ebx = (u32)(r_ebp+0x38u);
    /* 0065b9a5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0065b9a6: add eax, 0x178 */ {  u32 a = r_eax; u32 b = 0x178u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0065b9ab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065b9ac: call 0x78ea50 */ r_esp -= 4; W32(r_esp, 0x65b9b1u); f_0078ea50();
    /* 0065b9b1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065b9b4: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 0065b9b8: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0065b9ba: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0065b9bc: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0065b9be: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0065b9bf: jbe 0x65b9d7 */ if ((fC||fZ)) goto L_0065b9d7;
L_0065b9c1:; BB(0x0065b9c1);
    /* 0065b9c1: mov edx, 1 */ r_edx = 0x1u;
    /* 0065b9c6: mov word ptr [ebp + 0x1e], dx */ W16((u32)(r_ebp+0x1eu), (u16)r_edx);
    /* 0065b9ca: mov eax, 1 */ r_eax = 0x1u;
    /* 0065b9cf: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0065b9d2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0065b9d3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065b9d4: ret 8 */ FN_RET(0x0065b980); r_esp += 12; return;
L_0065b9d7:; BB(0x0065b9d7);
    /* 0065b9d7: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0065b9da: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065b9db: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0065b9dd: mov edx, ebx */ r_edx = r_ebx;
    /* 0065b9df: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x65b9e4u); f_00830aa0();
    /* 0065b9e4: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 0065b9e8: fld dword ptr [0x938730] */ FPUSH(R_F32((u32)(0x938730u)));
    /* 0065b9ee: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0065b9f0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0065b9f2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0065b9f3: jb 0x65bb3c */ if (fC) goto L_0065bb3c;
L_0065b9f9:; BB(0x0065b9f9);
    /* 0065b9f9: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 0065b9fd: fchs  */ ST(0) = -ST(0);
    /* 0065b9ff: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 0065ba01: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0065ba03: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0065ba05: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0065ba07: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0065ba08: ja 0x65bb2a */ if ((!fC&&!fZ)) goto L_0065bb2a;
L_0065ba0e:; BB(0x0065ba0e);
    /* 0065ba0e: fcomp dword ptr [esp] */ fx_compare(ST(0), R_F32((u32)(r_esp))); FPOP();
    /* 0065ba11: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0065ba13: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0065ba14: jbe 0x65ba8b */ if ((fC||fZ)) goto L_0065ba8b;
L_0065ba16:; BB(0x0065ba16);
    /* 0065ba16: fld dword ptr [0xa489e8] */ FPUSH(R_F32((u32)(0xa489e8u)));
    /* 0065ba1c: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 0065ba20: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0065ba22: fadd dword ptr [ebp + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x38u));
    /* 0065ba25: fld dword ptr [0xa489ec] */ FPUSH(R_F32((u32)(0xa489ecu)));
    /* 0065ba2b: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 0065ba2f: fld dword ptr [0xa489f0] */ FPUSH(R_F32((u32)(0xa489f0u)));
    /* 0065ba35: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 0065ba39: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0065ba3b: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 0065ba3d: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0065ba3f: fadd dword ptr [ebp + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x3cu));
    /* 0065ba42: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0065ba44: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0065ba46: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0065ba48: fadd dword ptr [ebp + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x40u));
    /* 0065ba4b: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0065ba4d: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0065ba50: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0065ba54: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0065ba58: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 0065ba5c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065ba5d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0065ba5f: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 0065ba63: call 0x82f09c */ r_esp -= 4; W32(r_esp, 0x65ba68u); f_0082f09c();
    /* 0065ba68: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 0065ba6c: fcomp dword ptr [0x938730] */ fx_compare(ST(0), R_F32((u32)(0x938730u))); FPOP();
    /* 0065ba72: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0065ba74: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0065ba75: jae 0x65bb14 */ if (!fC) goto L_0065bb14;
L_0065ba7b:; BB(0x0065ba7b);
    /* 0065ba7b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0065ba7d: mov word ptr [ebp + 0x1e], dx */ W16((u32)(r_ebp+0x1eu), (u16)r_edx);
    /* 0065ba81: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0065ba83: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0065ba86: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0065ba87: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065ba88: ret 8 */ FN_RET(0x0065b980); r_esp += 12; return;
L_0065ba8b:; BB(0x0065ba8b);
    /* 0065ba8b: fld dword ptr [0xa489e8] */ FPUSH(R_F32((u32)(0xa489e8u)));
    /* 0065ba91: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 0065ba95: fld dword ptr [0xa489ec] */ FPUSH(R_F32((u32)(0xa489ecu)));
    /* 0065ba9b: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 0065ba9f: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0065baa1: fchs  */ ST(0) = -ST(0);
    /* 0065baa3: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0065baa5: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0065baa7: fadd dword ptr [ebp + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x38u));
    /* 0065baaa: fld dword ptr [0xa489f0] */ FPUSH(R_F32((u32)(0xa489f0u)));
    /* 0065bab0: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 0065bab4: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0065bab6: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0065bab9: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 0065babd: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0065babf: fchs  */ ST(0) = -ST(0);
    /* 0065bac1: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 0065bac3: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0065bac5: fadd dword ptr [ebp + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x3cu));
    /* 0065bac8: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0065bacc: fchs  */ ST(0) = -ST(0);
    /* 0065bace: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0065bad0: fadd dword ptr [ebp + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x40u));
    /* 0065bad3: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0065bad7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065bad8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0065bada: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 0065bade: call 0x82f09c */ r_esp -= 4; W32(r_esp, 0x65bae3u); f_0082f09c();
    /* 0065bae3: movsx ebx, word ptr [0xa48a4c] */ r_ebx = (u32)(i32)(i16)R16((u32)(0xa48a4cu));
    /* 0065baea: movsx edx, word ptr [0x9acb68] */ r_edx = (u32)(i32)(i16)R16((u32)(0x9acb68u));
    /* 0065baf1: add ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0065baf3: mov dword ptr [esp + 0x14], ebx */ W32((u32)(r_esp+0x14u), r_ebx);
    /* 0065baf7: fild dword ptr [esp + 0x14] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x14u)));
    /* 0065bafb: fcomp dword ptr [esp + 0xc] */ fx_compare(ST(0), R_F32((u32)(r_esp+0xcu))); FPOP();
    /* 0065baff: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0065bb01: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0065bb02: jae 0x65bb14 */ if (!fC) goto L_0065bb14;
L_0065bb04:; BB(0x0065bb04);
    /* 0065bb04: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0065bb06: mov word ptr [ebp + 0x1e], dx */ W16((u32)(r_ebp+0x1eu), (u16)r_edx);
    /* 0065bb0a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0065bb0c: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0065bb0f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0065bb10: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065bb11: ret 8 */ FN_RET(0x0065b980); r_esp += 12; return;
L_0065bb14:; BB(0x0065bb14);
    /* 0065bb14: mov edx, 1 */ r_edx = 0x1u;
    /* 0065bb19: mov word ptr [ebp + 0x1e], dx */ W16((u32)(r_ebp+0x1eu), (u16)r_edx);
    /* 0065bb1d: mov eax, 1 */ r_eax = 0x1u;
    /* 0065bb22: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0065bb25: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0065bb26: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065bb27: ret 8 */ FN_RET(0x0065b980); r_esp += 12; return;
L_0065bb2a:; BB(0x0065bb2a);
    /* 0065bb2a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0065bb2c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0065bb2e: mov word ptr [ebp + 0x1e], dx */ W16((u32)(r_ebp+0x1eu), (u16)r_edx);
    /* 0065bb32: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0065bb34: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0065bb37: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0065bb38: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065bb39: ret 8 */ FN_RET(0x0065b980); r_esp += 12; return;
L_0065bb3c:; BB(0x0065bb3c);
    /* 0065bb3c: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0065bb3e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0065bb40: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0065bb42: mov word ptr [ebp + 0x1e], dx */ W16((u32)(r_ebp+0x1eu), (u16)r_edx);
    /* 0065bb46: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0065bb48: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0065bb4b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0065bb4c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065bb4d: ret 8 */ FN_RET(0x0065b980); r_esp += 12; return;
L_0065bb50:; BB(0x0065bb50);
    /* 0065bb50: movsx eax, word ptr [ebp + 0x1e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x1eu));
    /* 0065bb54: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0065bb57: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0065bb58: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065bb59: ret 8 */ FN_RET(0x0065b980); r_esp += 12; return;
}

void f_0065bb5c(void) /* sub_65BB5C */
{
    FN_ENTER(0x0065bb5c);
    /* 0065bb5c: mov ecx, dword ptr [0xa8f88c] */ r_ecx = R32((u32)(0xa8f88cu));
    /* 0065bb62: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0065bb64: je 0x65bb79 */ if (fZ) goto L_0065bb79;
L_0065bb66:; BB(0x0065bb66);
    /* 0065bb66: je 0x65bb6f */ if (fZ) goto L_0065bb6f;
L_0065bb68:; BB(0x0065bb68);
    /* 0065bb68: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065bb6a: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x65bb6fu); f_004066a8();
L_0065bb6f:; BB(0x0065bb6f);
    /* 0065bb6f: mov dword ptr [0xa8f88c], 0 */ W32((u32)(0xa8f88cu), 0x0u);
L_0065bb79:; BB(0x0065bb79);
    /* 0065bb79: ret  */ FN_RET(0x0065bb5c); r_esp += 4; return;
}

void f_0065bb7c(void)
{
    FN_ENTER(0x0065bb7c);
    /* 0065bb7c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065bb7d: mov ebp, esp */ r_ebp = r_esp;
    /* 0065bb7f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065bb81: push 0x8e7538 */ { u32 v = 0x8e7538u; r_esp -= 4; W32(r_esp, v); }
    /* 0065bb86: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0065bb8c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065bb8d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0065bb94: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0065bb97: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0065bb9a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0065bb9d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0065bba0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0065bba3: push 0xd4 */ { u32 v = 0xd4u; r_esp -= 4; W32(r_esp, v); }
    /* 0065bba8: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0065bbaf: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x65bbb4u); f_005caba4();
    /* 0065bbb4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0065bbb5: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0065bbb8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065bbba: je 0x65bbf3 */ if (fZ) goto L_0065bbf3;
L_0065bbbc:; BB(0x0065bbbc);
    /* 0065bbbc: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0065bbc3: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0065bbca: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0065bbcd: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 0065bbd3: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065bbd6: call 0x65bbf8 */ r_esp -= 4; W32(r_esp, 0x65bbdbu); f_0065bbf8();
    /* 0065bbdb: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065bbde: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0065bbe5:; BB(0x0065bbe5);
    /* 0065bbe5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065bbe8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0065bbef: mov esp, ebp */ r_esp = r_ebp;
    /* 0065bbf1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065bbf2: ret  */ FN_RET(0x0065bb7c); r_esp += 4; return;
L_0065bbf3:; BB(0x0065bbf3);
    /* 0065bbf3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0065bbf5: jmp 0x65bbe5 */ goto L_0065bbe5;
}

void f_0065bbf8(void) /* sub_65BBF8 */
{
    FN_ENTER(0x0065bbf8);
    /* 0065bbf8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065bbf9: mov ebp, esp */ r_ebp = r_esp;
    /* 0065bbfb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065bbfd: push 0x8e7554 */ { u32 v = 0x8e7554u; r_esp -= 4; W32(r_esp, v); }
    /* 0065bc02: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0065bc08: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065bc09: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0065bc10: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0065bc13: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0065bc16: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0065bc19: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0065bc1c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0065bc1f: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0065bc22: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0065bc25: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0065bc28: call 0x65bca0 */ r_esp -= 4; W32(r_esp, 0x65bc2du); f_0065bca0();
    /* 0065bc2d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0065bc34: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065bc37: mov dword ptr [edx], 0xb32d00 */ W32((u32)(r_edx), 0xb32d00u);
    /* 0065bc3d: mov eax, dword ptr [0x9c80c4] */ r_eax = R32((u32)(0x9c80c4u));
    /* 0065bc42: mov ecx, dword ptr [0xa8f88c] */ r_ecx = R32((u32)(0xa8f88cu));
    /* 0065bc48: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065bc4a: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 0065bc4d: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x65bc52u); f_005b8610();
    /* 0065bc52: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065bc55: mov ecx, dword ptr [0xa8f88c] */ r_ecx = R32((u32)(0xa8f88cu));
    /* 0065bc5b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065bc5d: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 0065bc60: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x65bc65u); f_005b8624();
    /* 0065bc65: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065bc68: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065bc6a: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 0065bc6d: push 0x9c80d0 */ { u32 v = 0x9c80d0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065bc72: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x65bc77u); f_007b9a88();
    /* 0065bc77: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065bc7a: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 0065bc7d: or eax, 0x40000000 */ {  u32 a = r_eax; u32 b = 0x40000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0065bc82: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 0065bc85: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x65bc8au); f_007b4f54();
    /* 0065bc8a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065bc8d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065bc90: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0065bc97: mov esp, ebp */ r_esp = r_ebp;
    /* 0065bc99: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065bc9a: ret 8 */ FN_RET(0x0065bbf8); r_esp += 12; return;
}

void f_0065bca0(void) /* sub_65BCA0 */
{
    FN_ENTER(0x0065bca0);
    /* 0065bca0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065bca1: mov ebp, esp */ r_ebp = r_esp;
    /* 0065bca3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065bca5: push 0x8e7570 */ { u32 v = 0x8e7570u; r_esp -= 4; W32(r_esp, v); }
    /* 0065bcaa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0065bcb0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065bcb1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0065bcb8: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0065bcbb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0065bcbe: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0065bcc1: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0065bcc4: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0065bcc7: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0065bcca: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0065bccd: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0065bcd0: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0065bcd3: call 0x6132e4 */ r_esp -= 4; W32(r_esp, 0x65bcd8u); f_006132e4();
    /* 0065bcd8: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0065bcdf: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0065bce2: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0065bce5: mov dword ptr [ecx], 0xb32cd0 */ W32((u32)(r_ecx), 0xb32cd0u);
    /* 0065bceb: mov eax, dword ptr [0x9c80c0] */ r_eax = R32((u32)(0x9c80c0u));
    /* 0065bcf0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0065bcf1: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0065bcf4: call dword ptr [0xb32ce4] */ { u32 t = R32((u32)(0xb32ce4u)); r_esp -= 4; W32(r_esp, 0x65bcfau); call_ind(t); }
    /* 0065bcfa: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0065bcfd: mov edx, dword ptr [eax + 0x84] */ r_edx = R32((u32)(r_eax+0x84u));
    /* 0065bd03: mov dword ptr [eax + 0xc0], 0x43c80000 */ W32((u32)(r_eax+0xc0u), 0x43c80000u);
    /* 0065bd0d: mov dword ptr [eax + 0xc8], edx */ W32((u32)(r_eax+0xc8u), r_edx);
    /* 0065bd13: mov dword ptr [eax + 0xc4], 0x42200000 */ W32((u32)(r_eax+0xc4u), 0x42200000u);
    /* 0065bd1d: movzx ecx, dx */ r_ecx = (u32)(u16)r_edx;
    /* 0065bd20: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065bd21: call 0x816eec */ r_esp -= 4; W32(r_esp, 0x65bd26u); f_00816eec();
    /* 0065bd26: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0065bd27: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0065bd2a: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0065bd2d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0065bd30: je 0x65bd6d */ if (fZ) goto L_0065bd6d;
L_0065bd32:; BB(0x0065bd32);
    /* 0065bd32: fld dword ptr [ecx + 0x3c] */ FPUSH(R_F32((u32)(r_ecx+0x3cu)));
    /* 0065bd35: fsub dword ptr [0x938724] */ ST(0) = ST(0) - R_F32((u32)(0x938724u));
    /* 0065bd3b: mov eax, dword ptr [ecx + 0x3c] */ r_eax = R32((u32)(r_ecx+0x3cu));
    /* 0065bd3e: fstp dword ptr [ecx + 0x3c] */ W_F32((u32)(r_ecx+0x3cu), ST(0)); FPOP();
    /* 0065bd41: mov dword ptr [ecx + 0xac], 0 */ W32((u32)(r_ecx+0xacu), 0x0u);
    /* 0065bd4b: mov dword ptr [ecx + 0xcc], eax */ W32((u32)(r_ecx+0xccu), r_eax);
    /* 0065bd51: mov dword ptr [ecx + 0xd0], 0x3e19999a */ W32((u32)(r_ecx+0xd0u), 0x3e19999au);
L_0065bd5b:; BB(0x0065bd5b);
    /* 0065bd5b: mov eax, ecx */ r_eax = r_ecx;
    /* 0065bd5d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065bd60: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0065bd67: mov esp, ebp */ r_esp = r_ebp;
    /* 0065bd69: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065bd6a: ret 8 */ FN_RET(0x0065bca0); r_esp += 12; return;
L_0065bd6d:; BB(0x0065bd6d);
    /* 0065bd6d: mov edx, dword ptr [ecx + 0x3c] */ r_edx = R32((u32)(r_ecx+0x3cu));
    /* 0065bd70: mov dword ptr [ecx + 0xac], 2 */ W32((u32)(r_ecx+0xacu), 0x2u);
    /* 0065bd7a: mov dword ptr [ecx + 0xcc], edx */ W32((u32)(r_ecx+0xccu), r_edx);
    /* 0065bd80: mov dword ptr [ecx + 0xd0], 0x3e19999a */ W32((u32)(r_ecx+0xd0u), 0x3e19999au);
    /* 0065bd8a: jmp 0x65bd5b */ goto L_0065bd5b;
}

void f_0065bd8c(void) /* sub_65BD8C */
{
    FN_ENTER(0x0065bd8c);
    /* 0065bd8c: mov ecx, dword ptr [0xa8f888] */ r_ecx = R32((u32)(0xa8f888u));
    /* 0065bd92: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0065bd94: je 0x65bda9 */ if (fZ) goto L_0065bda9;
L_0065bd96:; BB(0x0065bd96);
    /* 0065bd96: je 0x65bd9f */ if (fZ) goto L_0065bd9f;
L_0065bd98:; BB(0x0065bd98);
    /* 0065bd98: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065bd9a: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x65bd9fu); f_004066a8();
L_0065bd9f:; BB(0x0065bd9f);
    /* 0065bd9f: mov dword ptr [0xa8f888], 0 */ W32((u32)(0xa8f888u), 0x0u);
L_0065bda9:; BB(0x0065bda9);
    /* 0065bda9: ret  */ FN_RET(0x0065bd8c); r_esp += 4; return;
}

void f_0065bdac(void)
{
    FN_ENTER(0x0065bdac);
    /* 0065bdac: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065bdad: mov ebp, esp */ r_ebp = r_esp;
    /* 0065bdaf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065bdb1: push 0x8e7598 */ { u32 v = 0x8e7598u; r_esp -= 4; W32(r_esp, v); }
    /* 0065bdb6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0065bdbc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065bdbd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0065bdc4: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0065bdc7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0065bdca: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0065bdcd: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0065bdd0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0065bdd3: push 0xd4 */ { u32 v = 0xd4u; r_esp -= 4; W32(r_esp, v); }
    /* 0065bdd8: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0065bddf: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x65bde4u); f_005caba4();
    /* 0065bde4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0065bde5: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0065bde8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065bdea: je 0x65be23 */ if (fZ) goto L_0065be23;
L_0065bdec:; BB(0x0065bdec);
    /* 0065bdec: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0065bdf3: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0065bdfa: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0065bdfd: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 0065be03: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065be06: call 0x65be28 */ r_esp -= 4; W32(r_esp, 0x65be0bu); f_0065be28();
    /* 0065be0b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065be0e: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0065be15:; BB(0x0065be15);
    /* 0065be15: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065be18: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0065be1f: mov esp, ebp */ r_esp = r_ebp;
    /* 0065be21: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065be22: ret  */ FN_RET(0x0065bdac); r_esp += 4; return;
L_0065be23:; BB(0x0065be23);
    /* 0065be23: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0065be25: jmp 0x65be15 */ goto L_0065be15;
}

void f_0065be28(void) /* sub_65BE28 */
{
    FN_ENTER(0x0065be28);
    /* 0065be28: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065be29: mov ebp, esp */ r_ebp = r_esp;
    /* 0065be2b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065be2d: push 0x8e75b4 */ { u32 v = 0x8e75b4u; r_esp -= 4; W32(r_esp, v); }
    /* 0065be32: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0065be38: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065be39: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0065be40: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0065be43: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0065be46: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0065be49: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0065be4c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0065be4f: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0065be52: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0065be55: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0065be58: call 0x65bca0 */ r_esp -= 4; W32(r_esp, 0x65be5du); f_0065bca0();
    /* 0065be5d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0065be64: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065be67: movzx ecx, word ptr [edx + 0xc8] */ r_ecx = (u32)R16((u32)(r_edx+0xc8u));
    /* 0065be6e: mov dword ptr [edx], 0xb32d30 */ W32((u32)(r_edx), 0xb32d30u);
    /* 0065be74: mov eax, dword ptr [0x9c80c8] */ r_eax = R32((u32)(0x9c80c8u));
    /* 0065be79: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065be7a: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 0065be7d: call 0x816eec */ r_esp -= 4; W32(r_esp, 0x65be82u); f_00816eec();
    /* 0065be82: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0065be83: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065be86: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0065be89: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065be8b: jne 0x65be96 */ if (!fZ) goto L_0065be96;
L_0065be8d:; BB(0x0065be8d);
    /* 0065be8d: fld dword ptr [edx + 0x3c] */ FPUSH(R_F32((u32)(r_edx+0x3cu)));
    /* 0065be90: fsub dword ptr [edx + 0x68] */ ST(0) = ST(0) - R_F32((u32)(r_edx+0x68u));
    /* 0065be93: fstp dword ptr [edx + 0x3c] */ W_F32((u32)(r_edx+0x3cu), ST(0)); FPOP();
L_0065be96:; BB(0x0065be96);
    /* 0065be96: mov ecx, dword ptr [0xa8f888] */ r_ecx = R32((u32)(0xa8f888u));
    /* 0065be9c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065be9e: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 0065bea1: mov dword ptr [edx + 0xd0], eax */ W32((u32)(r_edx+0xd0u), r_eax);
    /* 0065bea7: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x65beacu); f_005b8610();
    /* 0065beac: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065beaf: mov ecx, dword ptr [0xa8f888] */ r_ecx = R32((u32)(0xa8f888u));
    /* 0065beb5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065beb7: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 0065beba: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x65bebfu); f_005b8624();
    /* 0065bebf: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065bec2: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0065bec4: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 0065bec7: push 0x9c8020 */ { u32 v = 0x9c8020u; r_esp -= 4; W32(r_esp, v); }
    /* 0065becc: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x65bed1u); f_007b9a88();
    /* 0065bed1: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065bed4: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 0065bed7: or eax, 0x40000000 */ {  u32 a = r_eax; u32 b = 0x40000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0065bedc: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 0065bedf: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x65bee4u); f_007b4f54();
    /* 0065bee4: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065bee7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065beea: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0065bef1: mov esp, ebp */ r_esp = r_ebp;
    /* 0065bef3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065bef4: ret 8 */ FN_RET(0x0065be28); r_esp += 12; return;
}

void f_0065bef8(void) /* sub_65BEF8 */
{
    FN_ENTER(0x0065bef8);
    /* 0065bef8: mov ecx, dword ptr [0xa8f884] */ r_ecx = R32((u32)(0xa8f884u));
    /* 0065befe: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0065bf00: je 0x65bf15 */ if (fZ) goto L_0065bf15;
L_0065bf02:; BB(0x0065bf02);
    /* 0065bf02: je 0x65bf0b */ if (fZ) goto L_0065bf0b;
L_0065bf04:; BB(0x0065bf04);
    /* 0065bf04: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065bf06: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x65bf0bu); f_004066a8();
L_0065bf0b:; BB(0x0065bf0b);
    /* 0065bf0b: mov dword ptr [0xa8f884], 0 */ W32((u32)(0xa8f884u), 0x0u);
L_0065bf15:; BB(0x0065bf15);
    /* 0065bf15: ret  */ FN_RET(0x0065bef8); r_esp += 4; return;
}

void f_0065bf18(void)
{
    FN_ENTER(0x0065bf18);
    /* 0065bf18: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065bf19: mov ebp, esp */ r_ebp = r_esp;
    /* 0065bf1b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065bf1d: push 0x8e75dc */ { u32 v = 0x8e75dcu; r_esp -= 4; W32(r_esp, v); }
    /* 0065bf22: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0065bf28: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065bf29: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0065bf30: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0065bf33: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0065bf36: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0065bf39: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0065bf3c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0065bf3f: push 0xd4 */ { u32 v = 0xd4u; r_esp -= 4; W32(r_esp, v); }
    /* 0065bf44: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0065bf4b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x65bf50u); f_005caba4();
    /* 0065bf50: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0065bf51: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0065bf54: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065bf56: je 0x65bf8f */ if (fZ) goto L_0065bf8f;
L_0065bf58:; BB(0x0065bf58);
    /* 0065bf58: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0065bf5f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0065bf66: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0065bf69: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 0065bf6f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065bf72: call 0x65bf94 */ r_esp -= 4; W32(r_esp, 0x65bf77u); f_0065bf94();
    /* 0065bf77: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065bf7a: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0065bf81:; BB(0x0065bf81);
    /* 0065bf81: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065bf84: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0065bf8b: mov esp, ebp */ r_esp = r_ebp;
    /* 0065bf8d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065bf8e: ret  */ FN_RET(0x0065bf18); r_esp += 4; return;
L_0065bf8f:; BB(0x0065bf8f);
    /* 0065bf8f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0065bf91: jmp 0x65bf81 */ goto L_0065bf81;
}

void f_0065bf94(void) /* sub_65BF94 */
{
    FN_ENTER(0x0065bf94);
    /* 0065bf94: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065bf95: mov ebp, esp */ r_ebp = r_esp;
    /* 0065bf97: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065bf99: push 0x8e75f8 */ { u32 v = 0x8e75f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0065bf9e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0065bfa4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065bfa5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0065bfac: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0065bfaf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0065bfb2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0065bfb5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0065bfb8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0065bfbb: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0065bfbe: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0065bfc1: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0065bfc4: call 0x65bca0 */ r_esp -= 4; W32(r_esp, 0x65bfc9u); f_0065bca0();
    /* 0065bfc9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0065bfd0: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065bfd3: movzx ecx, word ptr [edx + 0xc8] */ r_ecx = (u32)R16((u32)(r_edx+0xc8u));
    /* 0065bfda: mov dword ptr [edx], 0xb32d60 */ W32((u32)(r_edx), 0xb32d60u);
    /* 0065bfe0: mov eax, dword ptr [0x9c80cc] */ r_eax = R32((u32)(0x9c80ccu));
    /* 0065bfe5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065bfe6: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 0065bfe9: call 0x816eec */ r_esp -= 4; W32(r_esp, 0x65bfeeu); f_00816eec();
    /* 0065bfee: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0065bfef: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065bff2: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0065bff5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065bff7: jne 0x65c002 */ if (!fZ) goto L_0065c002;
L_0065bff9:; BB(0x0065bff9);
    /* 0065bff9: fld dword ptr [edx + 0x3c] */ FPUSH(R_F32((u32)(r_edx+0x3cu)));
    /* 0065bffc: fsub dword ptr [edx + 0x68] */ ST(0) = ST(0) - R_F32((u32)(r_edx+0x68u));
    /* 0065bfff: fstp dword ptr [edx + 0x3c] */ W_F32((u32)(r_edx+0x3cu), ST(0)); FPOP();
L_0065c002:; BB(0x0065c002);
    /* 0065c002: mov ecx, dword ptr [0xa8f884] */ r_ecx = R32((u32)(0xa8f884u));
    /* 0065c008: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 0065c00b: mov dword ptr [edx + 0xc4], 0x42f00000 */ W32((u32)(r_edx+0xc4u), 0x42f00000u);
    /* 0065c015: mov dword ptr [edx + 0xd0], eax */ W32((u32)(r_edx+0xd0u), r_eax);
    /* 0065c01b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065c01d: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x65c022u); f_005b8610();
    /* 0065c022: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065c025: mov ecx, dword ptr [0xa8f884] */ r_ecx = R32((u32)(0xa8f884u));
    /* 0065c02b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065c02d: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 0065c030: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x65c035u); f_005b8624();
    /* 0065c035: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065c038: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0065c03a: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 0065c03d: push 0x9c7fc0 */ { u32 v = 0x9c7fc0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065c042: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x65c047u); f_007b9a88();
    /* 0065c047: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065c04a: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 0065c04d: or eax, 0x40000000 */ {  u32 a = r_eax; u32 b = 0x40000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0065c052: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 0065c055: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x65c05au); f_007b4f54();
    /* 0065c05a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065c05d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065c060: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0065c067: mov esp, ebp */ r_esp = r_ebp;
    /* 0065c069: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065c06a: ret 8 */ FN_RET(0x0065bf94); r_esp += 12; return;
}

