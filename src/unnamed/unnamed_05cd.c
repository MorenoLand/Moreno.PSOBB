#include "protos.h"

void f_005cd08c(void) /* sub_5CD08C */
{
    FN_ENTER(0x005cd08c);
    /* 005cd08c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cd08d: mov ebp, esp */ r_ebp = r_esp;
    /* 005cd08f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005cd091: push 0x8d9e4e */ { u32 v = 0x8d9e4eu; r_esp -= 4; W32(r_esp, v); }
    /* 005cd096: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005cd09c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cd09d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005cd0a4: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005cd0a7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005cd0aa: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005cd0ad: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005cd0b0: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005cd0b3: push 0x70 */ { u32 v = 0x70u; r_esp -= 4; W32(r_esp, v); }
    /* 005cd0b5: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 005cd0bc: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5cd0c1u); f_005caba4();
    /* 005cd0c1: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005cd0c4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cd0c7: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 005cd0ca: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005cd0cc: je 0x5cd183 */ if (fZ) goto L_005cd183;
L_005cd0d2:; BB(0x005cd0d2);
    /* 005cd0d2: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 005cd0d9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005cd0e0: mov ecx, eax */ r_ecx = r_eax;
    /* 005cd0e2: mov eax, dword ptr [0xaca36c] */ r_eax = R32((u32)(0xaca36cu));
    /* 005cd0e7: mov dword ptr [ebp - 0x4c], ecx */ W32((u32)(r_ebp+0xffffffb4u), r_ecx);
    /* 005cd0ea: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cd0eb: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 005cd0ee: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x5cd0f3u); f_008193cc();
    /* 005cd0f3: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005cd0fa: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 005cd0fd: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005cd100: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005cd103: mov edi, 0xffff */ r_edi = 0xffffu;
    /* 005cd108: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 005cd10a: mov dword ptr [ebx], 0xb0c8a8 */ W32((u32)(r_ebx), 0xb0c8a8u);
    /* 005cd110: mov dword ptr [ebx + 0x28], esi */ W32((u32)(r_ebx+0x28u), r_esi);
    /* 005cd113: mov dword ptr [ebx + 0x2c], esi */ W32((u32)(r_ebx+0x2cu), r_esi);
    /* 005cd116: mov word ptr [ebx + 0x34], di */ W16((u32)(r_ebx+0x34u), (u16)r_edi);
    /* 005cd11a: mov dword ptr [ebx + 0x60], eax */ W32((u32)(r_ebx+0x60u), r_eax);
    /* 005cd11d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005cd11f: mov dword ptr [ebx + 0x38], edx */ W32((u32)(r_ebx+0x38u), r_edx);
    /* 005cd122: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005cd125: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 005cd128: mov dword ptr [ebx + 0x3c], eax */ W32((u32)(r_ebx+0x3cu), r_eax);
    /* 005cd12b: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 005cd12e: mov dword ptr [ebx + 0x40], eax */ W32((u32)(r_ebx+0x40u), r_eax);
    /* 005cd131: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005cd133: mov dword ptr [ebx + 0x64], eax */ W32((u32)(r_ebx+0x64u), r_eax);
    /* 005cd136: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005cd139: mov dword ptr [ebx + 0x68], eax */ W32((u32)(r_ebx+0x68u), r_eax);
    /* 005cd13c: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005cd13f: mov dword ptr [ebx + 0x6c], eax */ W32((u32)(r_ebx+0x6cu), r_eax);
    /* 005cd142: fld dword ptr [ecx] */ FPUSH(R_F32((u32)(r_ecx)));
    /* 005cd144: fld dword ptr [ecx + 8] */ FPUSH(R_F32((u32)(r_ecx+0x8u)));
    /* 005cd147: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 005cd149: fmul qword ptr [0x92be60] */ ST(0) = ST(0) * R_F64((u32)(0x92be60u));
    /* 005cd14f: fdiv qword ptr [0x92be58] */ ST(0) = ST(0) / R_F64((u32)(0x92be58u));
    /* 005cd155: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005cd158: fnstcw word ptr [ebp - 0x2c] */ W16((u32)(r_ebp+0xffffffd4u), fcw);
    /* 005cd15b: movzx eax, word ptr [ebp - 0x2c] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffd4u));
    /* 005cd15f: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005cd164: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005cd167: fldcw word ptr [ebp - 0x24] */ fcw = R16((u32)(r_ebp+0xffffffdcu));
    /* 005cd16a: fistp dword ptr [ecx + 0x58] */ W32((u32)(r_ecx+0x58u), (u32)fx_int32(ST(0))); FPOP();
    /* 005cd16d: fldcw word ptr [ebp - 0x2c] */ fcw = R16((u32)(r_ebp+0xffffffd4u));
    /* 005cd170: mov dword ptr [ecx + 0x50], 0xffffff00 */ W32((u32)(r_ecx+0x50u), 0xffffff00u);
    /* 005cd177: call 0x5cd694 */ r_esp -= 4; W32(r_esp, 0x5cd17cu); f_005cd694();
    /* 005cd17c: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_005cd183:; BB(0x005cd183);
    /* 005cd183: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cd186: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 005cd189: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005cd18c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cd18f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005cd196: mov esp, ebp */ r_esp = r_ebp;
    /* 005cd198: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cd199: ret  */ FN_RET(0x005cd08c); r_esp += 4; return;
}

void f_005cd19c(void) /* sub_5CD19C */
{
    FN_ENTER(0x005cd19c);
    /* 005cd19c: mov eax, dword ptr [ecx + 0x70] */ r_eax = R32((u32)(r_ecx+0x70u));
    /* 005cd19f: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005cd1a2: mov dword ptr [ecx + 0x70], eax */ W32((u32)(r_ecx+0x70u), r_eax);
    /* 005cd1a5: ret  */ FN_RET(0x005cd19c); r_esp += 4; return;
}

void f_005cd1a8(void) /* sub_5CD1A8 */
{
    FN_ENTER(0x005cd1a8);
    /* 005cd1a8: mov eax, dword ptr [ecx + 0x70] */ r_eax = R32((u32)(r_ecx+0x70u));
    /* 005cd1ab: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005cd1ae: mov dword ptr [ecx + 0x70], eax */ W32((u32)(r_ecx+0x70u), r_eax);
    /* 005cd1b1: ret  */ FN_RET(0x005cd1a8); r_esp += 4; return;
}

void f_005cd1b4(void) /* sub_5CD1B4 */
{
    FN_ENTER(0x005cd1b4);
    /* 005cd1b4: mov eax, dword ptr [ecx + 0x70] */ r_eax = R32((u32)(r_ecx+0x70u));
    /* 005cd1b7: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fO = 0; }
    /* 005cd1b9: je 0x5cd1e4 */ if (fZ) goto L_005cd1e4;
L_005cd1bb:; BB(0x005cd1bb);
    /* 005cd1bb: fld dword ptr [0x92becc] */ FPUSH(R_F32((u32)(0x92beccu)));
    /* 005cd1c1: fadd dword ptr [ecx + 0x80] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x80u));
    /* 005cd1c7: fcom dword ptr [0x92bed0] */ fx_compare(ST(0), R_F32((u32)(0x92bed0u))); 
    /* 005cd1cd: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005cd1cf: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005cd1d0: jbe 0x5cd1dd */ if ((fC||fZ)) goto L_005cd1dd;
L_005cd1d2:; BB(0x005cd1d2);
    /* 005cd1d2: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005cd1d4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005cd1d6: mov dword ptr [ecx + 0x80], eax */ W32((u32)(r_ecx+0x80u), r_eax);
    /* 005cd1dc: ret  */ FN_RET(0x005cd1b4); r_esp += 4; return;
L_005cd1dd:; BB(0x005cd1dd);
    /* 005cd1dd: fstp dword ptr [ecx + 0x80] */ W_F32((u32)(r_ecx+0x80u), ST(0)); FPOP();
    /* 005cd1e3: ret  */ FN_RET(0x005cd1b4); r_esp += 4; return;
L_005cd1e4:; BB(0x005cd1e4);
    /* 005cd1e4: fld dword ptr [ecx + 0x80] */ FPUSH(R_F32((u32)(r_ecx+0x80u)));
    /* 005cd1ea: fsub dword ptr [0x92becc] */ ST(0) = ST(0) - R_F32((u32)(0x92beccu));
    /* 005cd1f0: fcom dword ptr [0x92bed4] */ fx_compare(ST(0), R_F32((u32)(0x92bed4u))); 
    /* 005cd1f6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005cd1f8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005cd1f9: jae 0x5cd209 */ if (!fC) goto L_005cd209;
L_005cd1fb:; BB(0x005cd1fb);
    /* 005cd1fb: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005cd1fd: mov eax, 0xbf800000 */ r_eax = 0xbf800000u;
    /* 005cd202: mov dword ptr [ecx + 0x80], eax */ W32((u32)(r_ecx+0x80u), r_eax);
    /* 005cd208: ret  */ FN_RET(0x005cd1b4); r_esp += 4; return;
L_005cd209:; BB(0x005cd209);
    /* 005cd209: fstp dword ptr [ecx + 0x80] */ W_F32((u32)(r_ecx+0x80u), ST(0)); FPOP();
    /* 005cd20f: ret  */ FN_RET(0x005cd1b4); r_esp += 4; return;
}

void f_005cd210(void) /* sub_5CD210 */
{
    FN_ENTER(0x005cd210);
    /* 005cd210: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cd211: mov ebp, esp */ r_ebp = r_esp;
    /* 005cd213: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005cd215: push 0x8d9e68 */ { u32 v = 0x8d9e68u; r_esp -= 4; W32(r_esp, v); }
    /* 005cd21a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005cd220: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cd221: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005cd228: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005cd22b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005cd22e: mov dword ptr [ebp - 0x2c], edi */ W32((u32)(r_ebp+0xffffffd4u), r_edi);
    /* 005cd231: mov dword ptr [ebp - 0x28], esi */ W32((u32)(r_ebp+0xffffffd8u), r_esi);
    /* 005cd234: mov dword ptr [ebp - 0x24], ebx */ W32((u32)(r_ebp+0xffffffdcu), r_ebx);
    /* 005cd237: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005cd23a: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005cd23d: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005cd240: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
    /* 005cd243: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005cd246: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 005cd249: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 005cd24c: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005cd24f: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 005cd252: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005cd255: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x5cd25au); f_008193cc();
    /* 005cd25a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005cd261: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005cd264: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 005cd267: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005cd26a: mov dword ptr [edx], 0xb0c8a8 */ W32((u32)(r_edx), 0xb0c8a8u);
    /* 005cd270: mov edi, dword ptr [esi] */ r_edi = R32((u32)(r_esi));
    /* 005cd272: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 005cd276: mov word ptr [edx + 0x34], ax */ W16((u32)(r_edx+0x34u), (u16)r_eax);
    /* 005cd27a: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005cd27d: mov dword ptr [edx + 0x60], eax */ W32((u32)(r_edx+0x60u), r_eax);
    /* 005cd280: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 005cd282: mov dword ptr [edx + 0x28], eax */ W32((u32)(r_edx+0x28u), r_eax);
    /* 005cd285: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 005cd288: mov dword ptr [edx + 0x2c], eax */ W32((u32)(r_edx+0x2cu), r_eax);
    /* 005cd28b: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 005cd28d: mov dword ptr [edx + 0x38], eax */ W32((u32)(r_edx+0x38u), r_eax);
    /* 005cd290: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 005cd293: mov dword ptr [edx + 0x3c], eax */ W32((u32)(r_edx+0x3cu), r_eax);
    /* 005cd296: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 005cd299: mov dword ptr [edx + 0x40], eax */ W32((u32)(r_edx+0x40u), r_eax);
    /* 005cd29c: mov edi, dword ptr [esi] */ r_edi = R32((u32)(r_esi));
    /* 005cd29e: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 005cd2a1: mov esi, dword ptr [edi + 0xa4] */ r_esi = R32((u32)(r_edi+0xa4u));
    /* 005cd2a7: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 005cd2aa: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005cd2ac: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005cd2ae: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005cd2b0: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005cd2b2: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005cd2b4: mov eax, dword ptr [esi + ecx*4 + 0x1c] */ r_eax = R32((u32)(r_esi+r_ecx*4+0x1cu));
    /* 005cd2b8: mov dword ptr [edx + 0x64], eax */ W32((u32)(r_edx+0x64u), r_eax);
    /* 005cd2bb: mov eax, dword ptr [esi + ecx*4 + 0x20] */ r_eax = R32((u32)(r_esi+r_ecx*4+0x20u));
    /* 005cd2bf: mov dword ptr [edx + 0x68], eax */ W32((u32)(r_edx+0x68u), r_eax);
    /* 005cd2c2: mov eax, dword ptr [esi + ecx*4 + 0x24] */ r_eax = R32((u32)(r_esi+r_ecx*4+0x24u));
    /* 005cd2c6: mov dword ptr [edx + 0x6c], eax */ W32((u32)(r_edx+0x6cu), r_eax);
    /* 005cd2c9: fld dword ptr [ebx] */ FPUSH(R_F32((u32)(r_ebx)));
    /* 005cd2cb: fld dword ptr [ebx + 8] */ FPUSH(R_F32((u32)(r_ebx+0x8u)));
    /* 005cd2ce: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 005cd2d0: fmul qword ptr [0x92be50] */ ST(0) = ST(0) * R_F64((u32)(0x92be50u));
    /* 005cd2d6: fdiv qword ptr [0x92be48] */ ST(0) = ST(0) / R_F64((u32)(0x92be48u));
    /* 005cd2dc: fnstcw word ptr [ebp - 0x38] */ W16((u32)(r_ebp+0xffffffc8u), fcw);
    /* 005cd2df: movzx eax, word ptr [ebp - 0x38] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc8u));
    /* 005cd2e3: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005cd2e8: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 005cd2eb: fldcw word ptr [ebp - 0x30] */ fcw = R16((u32)(r_ebp+0xffffffd0u));
    /* 005cd2ee: fistp dword ptr [edx + 0x58] */ W32((u32)(r_edx+0x58u), (u32)fx_int32(ST(0))); FPOP();
    /* 005cd2f1: fldcw word ptr [ebp - 0x38] */ fcw = R16((u32)(r_ebp+0xffffffc8u));
    /* 005cd2f4: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cd2f7: mov dword ptr [edx + 0x50], eax */ W32((u32)(r_edx+0x50u), r_eax);
    /* 005cd2fa: mov ecx, edx */ r_ecx = r_edx;
    /* 005cd2fc: call 0x5cd694 */ r_esp -= 4; W32(r_esp, 0x5cd301u); f_005cd694();
    /* 005cd301: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 005cd304: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 005cd307: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 005cd30a: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005cd30d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cd310: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005cd317: mov esp, ebp */ r_esp = r_ebp;
    /* 005cd319: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cd31a: ret 0x14 */ FN_RET(0x005cd210); r_esp += 24; return;
}

void f_005cd320(void) /* sub_5CD320 */
{
    FN_ENTER(0x005cd320);
    /* 005cd320: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cd321: mov ebp, esp */ r_ebp = r_esp;
    /* 005cd323: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005cd325: push 0x8d9e84 */ { u32 v = 0x8d9e84u; r_esp -= 4; W32(r_esp, v); }
    /* 005cd32a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005cd330: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cd331: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005cd338: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005cd33b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005cd33e: mov dword ptr [ebp - 0x2c], edi */ W32((u32)(r_ebp+0xffffffd4u), r_edi);
    /* 005cd341: mov dword ptr [ebp - 0x28], esi */ W32((u32)(r_ebp+0xffffffd8u), r_esi);
    /* 005cd344: mov dword ptr [ebp - 0x24], ebx */ W32((u32)(r_ebp+0xffffffdcu), r_ebx);
    /* 005cd347: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005cd34a: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005cd34d: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005cd350: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
    /* 005cd353: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005cd356: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 005cd359: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 005cd35c: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005cd35f: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 005cd362: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005cd365: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x5cd36au); f_008193cc();
    /* 005cd36a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005cd371: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005cd374: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 005cd377: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005cd37a: mov esi, 0xffff */ r_esi = 0xffffu;
    /* 005cd37f: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 005cd381: mov dword ptr [edx], 0xb0c8a8 */ W32((u32)(r_edx), 0xb0c8a8u);
    /* 005cd387: mov dword ptr [edx + 0x28], ebx */ W32((u32)(r_edx+0x28u), r_ebx);
    /* 005cd38a: mov dword ptr [edx + 0x2c], ebx */ W32((u32)(r_edx+0x2cu), r_ebx);
    /* 005cd38d: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005cd390: mov word ptr [edx + 0x34], si */ W16((u32)(r_edx+0x34u), (u16)r_esi);
    /* 005cd394: mov dword ptr [edx + 0x60], edi */ W32((u32)(r_edx+0x60u), r_edi);
    /* 005cd397: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005cd399: mov dword ptr [edx + 0x38], eax */ W32((u32)(r_edx+0x38u), r_eax);
    /* 005cd39c: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 005cd39f: mov dword ptr [edx + 0x3c], eax */ W32((u32)(r_edx+0x3cu), r_eax);
    /* 005cd3a2: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 005cd3a5: mov dword ptr [edx + 0x40], eax */ W32((u32)(r_edx+0x40u), r_eax);
    /* 005cd3a8: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 005cd3aa: mov dword ptr [edx + 0x64], eax */ W32((u32)(r_edx+0x64u), r_eax);
    /* 005cd3ad: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 005cd3b0: mov dword ptr [edx + 0x68], eax */ W32((u32)(r_edx+0x68u), r_eax);
    /* 005cd3b3: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 005cd3b6: mov dword ptr [edx + 0x6c], eax */ W32((u32)(r_edx+0x6cu), r_eax);
    /* 005cd3b9: fld dword ptr [ecx] */ FPUSH(R_F32((u32)(r_ecx)));
    /* 005cd3bb: fld dword ptr [ecx + 8] */ FPUSH(R_F32((u32)(r_ecx+0x8u)));
    /* 005cd3be: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 005cd3c0: fmul qword ptr [0x92be40] */ ST(0) = ST(0) * R_F64((u32)(0x92be40u));
    /* 005cd3c6: fdiv qword ptr [0x92be38] */ ST(0) = ST(0) / R_F64((u32)(0x92be38u));
    /* 005cd3cc: fnstcw word ptr [ebp - 0x38] */ W16((u32)(r_ebp+0xffffffc8u), fcw);
    /* 005cd3cf: movzx eax, word ptr [ebp - 0x38] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc8u));
    /* 005cd3d3: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005cd3d8: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 005cd3db: fldcw word ptr [ebp - 0x30] */ fcw = R16((u32)(r_ebp+0xffffffd0u));
    /* 005cd3de: fistp dword ptr [edx + 0x58] */ W32((u32)(r_edx+0x58u), (u32)fx_int32(ST(0))); FPOP();
    /* 005cd3e1: fldcw word ptr [ebp - 0x38] */ fcw = R16((u32)(r_ebp+0xffffffc8u));
    /* 005cd3e4: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cd3e7: mov dword ptr [edx + 0x50], eax */ W32((u32)(r_edx+0x50u), r_eax);
    /* 005cd3ea: mov ecx, edx */ r_ecx = r_edx;
    /* 005cd3ec: call 0x5cd694 */ r_esp -= 4; W32(r_esp, 0x5cd3f1u); f_005cd694();
    /* 005cd3f1: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 005cd3f4: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 005cd3f7: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 005cd3fa: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005cd3fd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cd400: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005cd407: mov esp, ebp */ r_esp = r_ebp;
    /* 005cd409: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cd40a: ret 0x14 */ FN_RET(0x005cd320); r_esp += 24; return;
}

void f_005cd410(void) /* sub_5CD410 */
{
    FN_ENTER(0x005cd410);
    /* 005cd410: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005cd411: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cd412: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005cd413: mov edi, ecx */ r_edi = r_ecx;
    /* 005cd415: fld dword ptr [edi + 0x80] */ FPUSH(R_F32((u32)(r_edi+0x80u)));
    /* 005cd41b: fcomp dword ptr [0x92bec8] */ fx_compare(ST(0), R_F32((u32)(0x92bec8u))); FPOP();
    /* 005cd421: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005cd423: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005cd424: ja 0x5cd42a */ if ((!fC&&!fZ)) goto L_005cd42a;
L_005cd426:; BB(0x005cd426);
    /* 005cd426: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005cd427: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cd428: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005cd429: ret  */ FN_RET(0x005cd410); r_esp += 4; return;
L_005cd42a:; BB(0x005cd42a);
    /* 005cd42a: mov ecx, edi */ r_ecx = r_edi;
    /* 005cd42c: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x5cd431u); f_008173b4();
    /* 005cd431: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005cd433: jne 0x5cd439 */ if (!fZ) goto L_005cd439;
L_005cd435:; BB(0x005cd435);
    /* 005cd435: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005cd436: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cd437: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005cd438: ret  */ FN_RET(0x005cd410); r_esp += 4; return;
L_005cd439:; BB(0x005cd439);
    /* 005cd439: push dword ptr [edi + 0x60] */ { u32 v = R32((u32)(r_edi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 005cd43c: call 0x5c57ac */ r_esp -= 4; W32(r_esp, 0x5cd441u); f_005c57ac();
    /* 005cd441: mov ebp, eax */ r_ebp = r_eax;
    /* 005cd443: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cd446: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005cd448: je 0x5cd517 */ if (fZ) goto L_005cd517;
L_005cd44e:; BB(0x005cd44e);
    /* 005cd44e: mov ebx, dword ptr [ebp + 0x1ac] */ r_ebx = R32((u32)(r_ebp+0x1acu));
    /* 005cd454: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005cd456: je 0x5cd517 */ if (fZ) goto L_005cd517;
L_005cd45c:; BB(0x005cd45c);
    /* 005cd45c: mov edx, dword ptr [0xaf034c] */ r_edx = R32((u32)(0xaf034cu));
    /* 005cd462: mov eax, dword ptr [0xaf0370] */ r_eax = R32((u32)(0xaf0370u));
    /* 005cd467: mov dword ptr [0xaab518], edx */ W32((u32)(0xaab518u), r_edx);
    /* 005cd46d: mov dword ptr [0xaab508], eax */ W32((u32)(0xaab508u), r_eax);
    /* 005cd472: mov eax, dword ptr [0xaf0374] */ r_eax = R32((u32)(0xaf0374u));
    /* 005cd477: mov dword ptr [0xaab50c], eax */ W32((u32)(0xaab50cu), r_eax);
    /* 005cd47c: mov eax, dword ptr [0xaf0378] */ r_eax = R32((u32)(0xaf0378u));
    /* 005cd481: mov dword ptr [0xaab510], eax */ W32((u32)(0xaab510u), r_eax);
    /* 005cd486: mov eax, dword ptr [0xaf037c] */ r_eax = R32((u32)(0xaf037cu));
    /* 005cd48b: mov dword ptr [0xaab514], eax */ W32((u32)(0xaab514u), r_eax);
    /* 005cd490: or edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 005cd493: mov dword ptr [0xaf034c], edx */ W32((u32)(0xaf034cu), r_edx);
    /* 005cd499: lea edx, [edi + 0x80] */ r_edx = (u32)(r_edi+0x80u);
    /* 005cd49f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005cd4a0: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x5cd4a5u); f_0082d710();
    /* 005cd4a5: push dword ptr [ebp + 0x24] */ { u32 v = R32((u32)(r_ebp+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 005cd4a8: call 0x81a9b8 */ r_esp -= 4; W32(r_esp, 0x5cd4adu); f_0081a9b8();
    /* 005cd4ad: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cd4b0: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x5cd4b5u); f_0082d7b0();
    /* 005cd4b5: lea ecx, [edi + 0x64] */ r_ecx = (u32)(r_edi+0x64u);
    /* 005cd4b8: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x5cd4bdu); f_0082d838();
    /* 005cd4bd: mov edx, dword ptr [edi + 0x58] */ r_edx = R32((u32)(r_edi+0x58u));
    /* 005cd4c0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005cd4c2: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x5cd4c7u); f_0082d8bc();
    /* 005cd4c7: add edi, 0x74 */ {  u32 a = r_edi; u32 b = 0x74u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005cd4ca: mov ecx, edi */ r_ecx = r_edi;
    /* 005cd4cc: call 0x831290 */ r_esp -= 4; W32(r_esp, 0x5cd4d1u); f_00831290();
    /* 005cd4d1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005cd4d3: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x5cd4d8u); f_00831758();
    /* 005cd4d8: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x5cd4ddu); f_0082da80();
    /* 005cd4dd: mov eax, dword ptr [0xaab508] */ r_eax = R32((u32)(0xaab508u));
    /* 005cd4e2: mov edx, dword ptr [0xaab50c] */ r_edx = R32((u32)(0xaab50cu));
    /* 005cd4e8: mov ecx, dword ptr [0xaab510] */ r_ecx = R32((u32)(0xaab510u));
    /* 005cd4ee: mov ebx, dword ptr [0xaab514] */ r_ebx = R32((u32)(0xaab514u));
    /* 005cd4f4: mov ebp, dword ptr [0xaab518] */ r_ebp = R32((u32)(0xaab518u));
    /* 005cd4fa: mov dword ptr [0xaf0370], eax */ W32((u32)(0xaf0370u), r_eax);
    /* 005cd4ff: mov dword ptr [0xaf0374], edx */ W32((u32)(0xaf0374u), r_edx);
    /* 005cd505: mov dword ptr [0xaf0378], ecx */ W32((u32)(0xaf0378u), r_ecx);
    /* 005cd50b: mov dword ptr [0xaf037c], ebx */ W32((u32)(0xaf037cu), r_ebx);
    /* 005cd511: mov dword ptr [0xaf034c], ebp */ W32((u32)(0xaf034cu), r_ebp);
L_005cd517:; BB(0x005cd517);
    /* 005cd517: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005cd518: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cd519: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005cd51a: ret  */ FN_RET(0x005cd410); r_esp += 4; return;
}

void f_005cd51c(void) /* sub_5CD51C */
{
    FN_ENTER(0x005cd51c);
    /* 005cd51c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cd51d: mov ebp, esp */ r_ebp = r_esp;
    /* 005cd51f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005cd521: push 0x8d9eac */ { u32 v = 0x8d9eacu; r_esp -= 4; W32(r_esp, v); }
    /* 005cd526: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005cd52c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cd52d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005cd534: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005cd537: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005cd53a: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005cd53d: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005cd540: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005cd543: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005cd546: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005cd548: je 0x5cd5ae */ if (fZ) goto L_005cd5ae;
L_005cd54a:; BB(0x005cd54a);
    /* 005cd54a: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005cd54d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005cd54f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005cd551: je 0x5cd5ae */ if (fZ) goto L_005cd5ae;
L_005cd553:; BB(0x005cd553);
    /* 005cd553: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 005cd55a: push 0x90 */ { u32 v = 0x90u; r_esp -= 4; W32(r_esp, v); }
    /* 005cd55f: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5cd564u); f_005caba4();
    /* 005cd564: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005cd567: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cd56a: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005cd56d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005cd56f: je 0x5cd5ae */ if (fZ) goto L_005cd5ae;
L_005cd571:; BB(0x005cd571);
    /* 005cd571: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 005cd578: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005cd57f: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005cd582: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005cd585: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005cd588: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cd58a: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 005cd58d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cd58e: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005cd594: call 0x5cd210 */ r_esp -= 4; W32(r_esp, 0x5cd599u); f_005cd210();
    /* 005cd599: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005cd59c: mov dword ptr [ecx], 0xb0c8c4 */ W32((u32)(r_ecx), 0xb0c8c4u);
    /* 005cd5a2: call 0x5cd64c */ r_esp -= 4; W32(r_esp, 0x5cd5a7u); f_005cd64c();
    /* 005cd5a7: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_005cd5ae:; BB(0x005cd5ae);
    /* 005cd5ae: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cd5b1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005cd5b8: mov esp, ebp */ r_esp = r_ebp;
    /* 005cd5ba: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cd5bb: ret  */ FN_RET(0x005cd51c); r_esp += 4; return;
}

void f_005cd5bc(void) /* sub_5CD5BC */
{
    FN_ENTER(0x005cd5bc);
    /* 005cd5bc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cd5bd: mov ebp, esp */ r_ebp = r_esp;
    /* 005cd5bf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005cd5c1: push 0x8d9ed4 */ { u32 v = 0x8d9ed4u; r_esp -= 4; W32(r_esp, v); }
    /* 005cd5c6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005cd5cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cd5cd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005cd5d4: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005cd5d7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005cd5da: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005cd5dd: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005cd5e0: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005cd5e3: push 0x90 */ { u32 v = 0x90u; r_esp -= 4; W32(r_esp, v); }
    /* 005cd5e8: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 005cd5ef: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5cd5f4u); f_005caba4();
    /* 005cd5f4: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005cd5f7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cd5fa: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005cd5fd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005cd5ff: je 0x5cd63c */ if (fZ) goto L_005cd63c;
L_005cd601:; BB(0x005cd601);
    /* 005cd601: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 005cd608: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005cd60f: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005cd612: mov ecx, eax */ r_ecx = r_eax;
    /* 005cd614: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cd616: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 005cd619: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005cd61c: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005cd622: call 0x5cd320 */ r_esp -= 4; W32(r_esp, 0x5cd627u); f_005cd320();
    /* 005cd627: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005cd62a: mov dword ptr [ecx], 0xb0c8c4 */ W32((u32)(r_ecx), 0xb0c8c4u);
    /* 005cd630: call 0x5cd64c */ r_esp -= 4; W32(r_esp, 0x5cd635u); f_005cd64c();
    /* 005cd635: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_005cd63c:; BB(0x005cd63c);
    /* 005cd63c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cd63f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005cd646: mov esp, ebp */ r_esp = r_ebp;
    /* 005cd648: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cd649: ret  */ FN_RET(0x005cd5bc); r_esp += 4; return;
}

void f_005cd64c(void) /* sub_5CD64C */
{
    FN_ENTER(0x005cd64c);
    /* 005cd64c: mov dword ptr [ecx + 0x70], 0 */ W32((u32)(r_ecx+0x70u), 0x0u);
    /* 005cd653: mov dword ptr [ecx + 0x74], 0x40800000 */ W32((u32)(r_ecx+0x74u), 0x40800000u);
    /* 005cd65a: mov dword ptr [ecx + 0x78], 0x40800000 */ W32((u32)(r_ecx+0x78u), 0x40800000u);
    /* 005cd661: mov dword ptr [ecx + 0x7c], 0x40800000 */ W32((u32)(r_ecx+0x7cu), 0x40800000u);
    /* 005cd668: mov dword ptr [ecx + 0x80], 0xbf800000 */ W32((u32)(r_ecx+0x80u), 0xbf800000u);
    /* 005cd672: mov dword ptr [ecx + 0x84], 0 */ W32((u32)(r_ecx+0x84u), 0x0u);
    /* 005cd67c: mov dword ptr [ecx + 0x88], 0 */ W32((u32)(r_ecx+0x88u), 0x0u);
    /* 005cd686: mov dword ptr [ecx + 0x8c], 0 */ W32((u32)(r_ecx+0x8cu), 0x0u);
    /* 005cd690: ret  */ FN_RET(0x005cd64c); r_esp += 4; return;
}

void f_005cd694(void) /* sub_5CD694 */
{
    FN_ENTER(0x005cd694);
    /* 005cd694: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005cd695: mov edi, ecx */ r_edi = r_ecx;
    /* 005cd697: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005cd699: mov edx, dword ptr [0x9c261c] */ r_edx = R32((u32)(0x9c261cu));
    /* 005cd69f: mov dword ptr [edi + 4], edx */ W32((u32)(r_edi+0x4u), r_edx);
    /* 005cd6a2: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 005cd6a5: mov dword ptr [edi + 0x1c], eax */ W32((u32)(r_edi+0x1cu), r_eax);
    /* 005cd6a8: mov dword ptr [edi + 0x20], eax */ W32((u32)(r_edi+0x20u), r_eax);
    /* 005cd6ab: mov dword ptr [edi + 0x24], eax */ W32((u32)(r_edi+0x24u), r_eax);
    /* 005cd6ae: mov dword ptr [edi + 0x54], eax */ W32((u32)(r_edi+0x54u), r_eax);
    /* 005cd6b1: mov dword ptr [edi + 0x5c], eax */ W32((u32)(r_edi+0x5cu), r_eax);
    /* 005cd6b4: lea ecx, [edi + 0x38] */ r_ecx = (u32)(r_edi+0x38u);
    /* 005cd6b7: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x5cd6bcu); f_0082df08();
    /* 005cd6bc: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005cd6be: movzx eax, word ptr [edi + 0x34] */ r_eax = (u32)R16((u32)(r_edi+0x34u));
    /* 005cd6c2: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cd6c7: je 0x5cd709 */ if (fZ) goto L_005cd709;
L_005cd6c9:; BB(0x005cd6c9);
    /* 005cd6c9: mov ecx, dword ptr [edi + 0x28] */ r_ecx = R32((u32)(r_edi+0x28u));
    /* 005cd6cc: mov edx, dword ptr [edi + 0x2c] */ r_edx = R32((u32)(r_edi+0x2cu));
    /* 005cd6cf: fld dword ptr [edi + 0x38] */ FPUSH(R_F32((u32)(r_edi+0x38u)));
    /* 005cd6d2: fld dword ptr [edi + 0x3c] */ FPUSH(R_F32((u32)(r_edi+0x3cu)));
    /* 005cd6d5: fld dword ptr [edi + 0x40] */ FPUSH(R_F32((u32)(r_edi+0x40u)));
    /* 005cd6d8: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 005cd6db: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005cd6dd: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005cd6df: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005cd6e1: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005cd6e3: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005cd6e5: mov edx, dword ptr [ecx + 0xa4] */ r_edx = R32((u32)(r_ecx+0xa4u));
    /* 005cd6eb: fld dword ptr [edx + eax*4 + 0xc] */ FPUSH(R_F32((u32)(r_edx+r_eax*4+0xcu)));
    /* 005cd6ef: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 005cd6f1: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 005cd6f3: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 005cd6f5: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 005cd6f7: fstp dword ptr [edi + 0x44] */ W_F32((u32)(r_edi+0x44u), ST(0)); FPOP();
    /* 005cd6fa: fstp dword ptr [edi + 0x48] */ W_F32((u32)(r_edi+0x48u), ST(0)); FPOP();
    /* 005cd6fd: fstp dword ptr [edi + 0x4c] */ W_F32((u32)(r_edi+0x4cu), ST(0)); FPOP();
L_005cd700:; BB(0x005cd700);
    /* 005cd700: mov ecx, edi */ r_ecx = r_edi;
    /* 005cd702: call 0x5cca44 */ r_esp -= 4; W32(r_esp, 0x5cd707u); f_005cca44();
    /* 005cd707: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005cd708: ret  */ FN_RET(0x005cd694); r_esp += 4; return;
L_005cd709:; BB(0x005cd709);
    /* 005cd709: mov dword ptr [edi + 0x44], 0 */ W32((u32)(r_edi+0x44u), 0x0u);
    /* 005cd710: mov dword ptr [edi + 0x48], 0 */ W32((u32)(r_edi+0x48u), 0x0u);
    /* 005cd717: mov dword ptr [edi + 0x4c], 0 */ W32((u32)(r_edi+0x4cu), 0x0u);
    /* 005cd71e: jmp 0x5cd700 */ goto L_005cd700;
}

void f_005cd720(void) /* sub_5CD720 */
{
    FN_ENTER(0x005cd720);
    /* 005cd720: mov dword ptr [0xa8d918], 0x3f800000 */ W32((u32)(0xa8d918u), 0x3f800000u);
    /* 005cd72a: mov dword ptr [0xa8d91c], 0x41000000 */ W32((u32)(0xa8d91cu), 0x41000000u);
    /* 005cd734: mov dword ptr [0xa8d920], 0x3fc00000 */ W32((u32)(0xa8d920u), 0x3fc00000u);
    /* 005cd73e: ret  */ FN_RET(0x005cd720); r_esp += 4; return;
}

void f_005cd740(void) /* sub_5CD740 */
{
    FN_ENTER(0x005cd740);
    /* 005cd740: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005cd741: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005cd743: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005cd745: call 0x5cd764 */ r_esp -= 4; W32(r_esp, 0x5cd74au); f_005cd764();
    /* 005cd74a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005cd74e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005cd750: jne 0x5cd756 */ if (!fZ) goto L_005cd756;
L_005cd752:; BB(0x005cd752);
    /* 005cd752: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005cd753: ret 4 */ FN_RET(0x005cd740); r_esp += 8; return;
L_005cd756:; BB(0x005cd756);
    /* 005cd756: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005cd757: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5cd75cu); f_005c2f74();
    /* 005cd75c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005cd75d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005cd75e: ret 4 */ FN_RET(0x005cd740); r_esp += 8; return;
}

void f_005cd764(void) /* sub_5CD764 */
{
    FN_ENTER(0x005cd764);
    /* 005cd764: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cd765: mov ebp, esp */ r_ebp = r_esp;
    /* 005cd767: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005cd769: push 0x8d9ef0 */ { u32 v = 0x8d9ef0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cd76e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005cd774: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cd775: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005cd77c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005cd77f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005cd782: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005cd785: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005cd788: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005cd78b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005cd78e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005cd795: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cd798: mov eax, dword ptr [ecx + 0xa4] */ r_eax = R32((u32)(r_ecx+0xa4u));
    /* 005cd79e: mov dword ptr [ecx], 0xb0c9c0 */ W32((u32)(r_ecx), 0xb0c9c0u);
    /* 005cd7a4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cd7a6: je 0x5cd7d1 */ if (fZ) goto L_005cd7d1;
L_005cd7a8:; BB(0x005cd7a8);
    /* 005cd7a8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cd7a9: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x5cd7aeu); f_007b4e84();
    /* 005cd7ae: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005cd7af: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cd7b2: call 0x7b9de0 */ r_esp -= 4; W32(r_esp, 0x5cd7b7u); f_007b9de0();
    /* 005cd7b7: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cd7ba: movzx edx, word ptr [eax + 0x1c] */ r_edx = (u32)R16((u32)(r_eax+0x1cu));
    /* 005cd7be: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005cd7bf: call 0x5c8464 */ r_esp -= 4; W32(r_esp, 0x5cd7c4u); f_005c8464();
    /* 005cd7c4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005cd7c5: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cd7c8: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 005cd7cd: mov word ptr [ecx + 0x1c], ax */ W16((u32)(r_ecx+0x1cu), (u16)r_eax);
L_005cd7d1:; BB(0x005cd7d1);
    /* 005cd7d1: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005cd7d8: call 0x7b4aec */ r_esp -= 4; W32(r_esp, 0x5cd7ddu); f_007b4aec();
    /* 005cd7dd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cd7e0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005cd7e7: mov esp, ebp */ r_esp = r_ebp;
    /* 005cd7e9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cd7ea: ret  */ FN_RET(0x005cd764); r_esp += 4; return;
}

void f_005cd7ec(void) /* sub_5CD7EC */
{
    FN_ENTER(0x005cd7ec);
    /* 005cd7ec: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005cd7ed: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005cd7ef: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005cd7f1: call 0x5cd810 */ r_esp -= 4; W32(r_esp, 0x5cd7f6u); f_005cd810();
    /* 005cd7f6: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005cd7fa: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005cd7fc: jne 0x5cd802 */ if (!fZ) goto L_005cd802;
L_005cd7fe:; BB(0x005cd7fe);
    /* 005cd7fe: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005cd7ff: ret 4 */ FN_RET(0x005cd7ec); r_esp += 8; return;
L_005cd802:; BB(0x005cd802);
    /* 005cd802: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005cd803: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5cd808u); f_005c2f74();
    /* 005cd808: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005cd809: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005cd80a: ret 4 */ FN_RET(0x005cd7ec); r_esp += 8; return;
}

void f_005cd810(void) /* sub_5CD810 */
{
    FN_ENTER(0x005cd810);
    /* 005cd810: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cd811: mov ebp, esp */ r_ebp = r_esp;
    /* 005cd813: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005cd815: push 0x8d9f0c */ { u32 v = 0x8d9f0cu; r_esp -= 4; W32(r_esp, v); }
    /* 005cd81a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005cd820: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cd821: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005cd828: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005cd82b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005cd82e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005cd831: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005cd834: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005cd837: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005cd83a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005cd841: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cd844: push dword ptr [eax + 0x20] */ { u32 v = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 005cd847: mov dword ptr [eax], 0xb0c9f0 */ W32((u32)(r_eax), 0xb0c9f0u);
    /* 005cd84d: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x5cd852u); f_005cdcc0();
    /* 005cd852: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005cd853: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005cd85a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cd85d: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x5cd862u); f_008171e8();
    /* 005cd862: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cd865: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005cd86c: mov esp, ebp */ r_esp = r_ebp;
    /* 005cd86e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cd86f: ret  */ FN_RET(0x005cd810); r_esp += 4; return;
}

void f_005cd870(void) /* sub_5CD870 */
{
    FN_ENTER(0x005cd870);
    /* 005cd870: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cd871: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005cd873: movzx eax, word ptr [ebp + 0xac] */ r_eax = (u32)R16((u32)(r_ebp+0xacu));
    /* 005cd87a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cd87b: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x5cd880u); f_0068d5a8();
    /* 005cd880: mov ecx, eax */ r_ecx = r_eax;
    /* 005cd882: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cd885: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005cd887: je 0x5cd89b */ if (fZ) goto L_005cd89b;
L_005cd889:; BB(0x005cd889);
    /* 005cd889: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005cd88b: lea eax, [ebp + 0x38] */ r_eax = (u32)(r_ebp+0x38u);
    /* 005cd88e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cd88f: push dword ptr [ebp + 0xb0] */ { u32 v = R32((u32)(r_ebp+0xb0u)); r_esp -= 4; W32(r_esp, v); }
    /* 005cd895: call dword ptr [edx + 0x10c] */ { u32 t = R32((u32)(r_edx+0x10cu)); r_esp -= 4; W32(r_esp, 0x5cd89bu); call_ind(t); }
L_005cd89b:; BB(0x005cd89b);
    /* 005cd89b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cd89c: ret  */ FN_RET(0x005cd870); r_esp += 4; return;
}

void f_005cd8a0(void) /* sub_5CD8A0 */
{
    FN_ENTER(0x005cd8a0);
    /* 005cd8a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cd8a1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005cd8a2: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005cd8a4: movzx eax, word ptr [ebp + 0xac] */ r_eax = (u32)R16((u32)(r_ebp+0xacu));
    /* 005cd8ab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cd8ac: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x5cd8b1u); f_0068d5a8();
    /* 005cd8b1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005cd8b2: lea ebx, [ebp + 0x38] */ r_ebx = (u32)(r_ebp+0x38u);
    /* 005cd8b5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005cd8b7: je 0x5cd8ca */ if (fZ) goto L_005cd8ca;
L_005cd8b9:; BB(0x005cd8b9);
    /* 005cd8b9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005cd8ba: push dword ptr [ebp + 0xb0] */ { u32 v = R32((u32)(r_ebp+0xb0u)); r_esp -= 4; W32(r_esp, v); }
    /* 005cd8c0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005cd8c2: mov ecx, eax */ r_ecx = r_eax;
    /* 005cd8c4: call dword ptr [edx + 0x10c] */ { u32 t = R32((u32)(r_edx+0x10cu)); r_esp -= 4; W32(r_esp, 0x5cd8cau); call_ind(t); }
L_005cd8ca:; BB(0x005cd8ca);
    /* 005cd8ca: mov eax, ebx */ r_eax = r_ebx;
    /* 005cd8cc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005cd8cd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cd8ce: ret  */ FN_RET(0x005cd8a0); r_esp += 4; return;
}

void f_005cd8d0(void) /* sub_5CD8D0 */
{
    FN_ENTER(0x005cd8d0);
    /* 005cd8d0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005cd8d1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005cd8d3: mov ecx, dword ptr [ebx + 0x1c] */ r_ecx = R32((u32)(r_ebx+0x1cu));
    /* 005cd8d6: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x5cd8dbu); f_008173b4();
    /* 005cd8db: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005cd8dd: jne 0x5cd8f3 */ if (!fZ) goto L_005cd8f3;
L_005cd8df:; BB(0x005cd8df);
    /* 005cd8df: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 005cd8e3: mov dword ptr [ebx + 0x1c], 0 */ W32((u32)(r_ebx+0x1cu), 0x0u);
    /* 005cd8ea: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005cd8ef: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
L_005cd8f3:; BB(0x005cd8f3);
    /* 005cd8f3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005cd8f4: ret  */ FN_RET(0x005cd8d0); r_esp += 4; return;
}

void f_005cd8f8(void) /* sub_5CD8F8 */
{
    FN_ENTER(0x005cd8f8);
    /* 005cd8f8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cd8f9: mov ebp, esp */ r_ebp = r_esp;
    /* 005cd8fb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005cd8fd: push 0x8d9f34 */ { u32 v = 0x8d9f34u; r_esp -= 4; W32(r_esp, v); }
    /* 005cd902: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005cd908: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cd909: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005cd910: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005cd913: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005cd916: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005cd919: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005cd91c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005cd91f: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 005cd921: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005cd928: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5cd92du); f_005caba4();
    /* 005cd92d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005cd92e: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005cd931: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005cd933: je 0x5cd963 */ if (fZ) goto L_005cd963;
L_005cd935:; BB(0x005cd935);
    /* 005cd935: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005cd93c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005cd943: push dword ptr [ebp + 0x18] */ { u32 v = R32((u32)(r_ebp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 005cd946: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 005cd949: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 005cd94c: movzx eax, word ptr [ebp + 0xc] */ r_eax = (u32)R16((u32)(r_ebp+0xcu));
    /* 005cd950: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cd953: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cd954: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005cd957: call 0x5cd974 */ r_esp -= 4; W32(r_esp, 0x5cd95cu); f_005cd974();
    /* 005cd95c: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005cd963:; BB(0x005cd963);
    /* 005cd963: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cd966: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005cd96d: mov esp, ebp */ r_esp = r_ebp;
    /* 005cd96f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cd970: ret  */ FN_RET(0x005cd8f8); r_esp += 4; return;
}

void f_005cd974(void) /* sub_5CD974 */
{
    FN_ENTER(0x005cd974);
    /* 005cd974: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cd975: mov ebp, esp */ r_ebp = r_esp;
    /* 005cd977: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005cd979: push 0x8d9fa0 */ { u32 v = 0x8d9fa0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cd97e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005cd984: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cd985: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005cd98c: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005cd98f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005cd992: mov dword ptr [ebp - 0x30], edi */ W32((u32)(r_ebp+0xffffffd0u), r_edi);
    /* 005cd995: mov dword ptr [ebp - 0x2c], esi */ W32((u32)(r_ebp+0xffffffd4u), r_esi);
    /* 005cd998: mov dword ptr [ebp - 0x28], ebx */ W32((u32)(r_ebp+0xffffffd8u), r_ebx);
    /* 005cd99b: movzx eax, word ptr [ebp + 0xc] */ r_eax = (u32)R16((u32)(r_ebp+0xcu));
    /* 005cd99f: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005cd9a2: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005cd9a5: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 005cd9a8: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005cd9ab: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 005cd9ae: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 005cd9b1: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005cd9b4: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 005cd9b7: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005cd9ba: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x5cd9bfu); f_008193cc();
    /* 005cd9bf: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005cd9c6: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005cd9c9: movzx edx, word ptr [ecx + 8] */ r_edx = (u32)R16((u32)(r_ecx+0x8u));
    /* 005cd9cd: mov dword ptr [ecx], 0xb0c9f0 */ W32((u32)(r_ecx), 0xb0c9f0u);
    /* 005cd9d3: mov eax, dword ptr [0x9c2628] */ r_eax = R32((u32)(0x9c2628u));
    /* 005cd9d8: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
    /* 005cd9df: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 005cd9e2: or edx, 0xffff0010 */ {  u32 a = r_edx; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 005cd9e8: push 0xe0 */ { u32 v = 0xe0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cd9ed: mov word ptr [ecx + 8], dx */ W16((u32)(r_ecx+0x8u), (u16)r_edx);
    /* 005cd9f1: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5cd9f6u); f_005caba4();
    /* 005cd9f6: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005cd9f9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cd9fc: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 005cd9ff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cda01: je 0x5cdb12 */ if (fZ) goto L_005cdb12;
L_005cda07:; BB(0x005cda07);
    /* 005cda07: mov dword ptr [ebp - 0x4c], 1 */ W32((u32)(r_ebp+0xffffffb4u), 0x1u);
    /* 005cda0e: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005cda15: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005cda18: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005cda1b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005cda1e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cda1f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005cda20: push dword ptr [ebp - 0x34] */ { u32 v = R32((u32)(r_ebp+0xffffffccu)); r_esp -= 4; W32(r_esp, v); }
    /* 005cda23: call 0x5cdb1c */ r_esp -= 4; W32(r_esp, 0x5cda28u); f_005cdb1c();
    /* 005cda28: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
L_005cda2f:; BB(0x005cda2f);
    /* 005cda2f: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005cda32: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005cda35: mov dword ptr [ecx + 0x1c], eax */ W32((u32)(r_ecx+0x1cu), r_eax);
    /* 005cda38: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005cda3f: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005cda42: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005cda45: mov dword ptr [ecx + 0x20], 0 */ W32((u32)(r_ecx+0x20u), 0x0u);
    /* 005cda4c: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 005cda4f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cda51: je 0x5cdb02 */ if (fZ) goto L_005cdb02;
L_005cda57:; BB(0x005cda57);
    /* 005cda57: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cda5a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cda5b: call 0x5cdc54 */ r_esp -= 4; W32(r_esp, 0x5cda60u); f_005cdc54();
    /* 005cda60: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005cda63: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cda65: je 0x5cdaad */ if (fZ) goto L_005cdaad;
L_005cda67:; BB(0x005cda67);
    /* 005cda67: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
    /* 005cda6e: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 005cda70: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5cda75u); f_005caba4();
    /* 005cda75: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005cda76: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 005cda79: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cda7b: je 0x5cdaa3 */ if (fZ) goto L_005cdaa3;
L_005cda7d:; BB(0x005cda7d);
    /* 005cda7d: mov dword ptr [ebp - 0x44], 1 */ W32((u32)(r_ebp+0xffffffbcu), 0x1u);
    /* 005cda84: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 005cda8b: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005cda8d: push 0x5cdc88 */ { u32 v = 0x5cdc88u; r_esp -= 4; W32(r_esp, v); }
    /* 005cda92: mov ecx, eax */ r_ecx = r_eax;
    /* 005cda94: push dword ptr [ebp - 0x34] */ { u32 v = R32((u32)(r_ebp+0xffffffccu)); r_esp -= 4; W32(r_esp, v); }
    /* 005cda97: call 0x5e5b88 */ r_esp -= 4; W32(r_esp, 0x5cda9cu); f_005e5b88();
    /* 005cda9c: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
L_005cdaa3:; BB(0x005cdaa3);
    /* 005cdaa3: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005cdaaa: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
L_005cdaad:; BB(0x005cdaad);
    /* 005cdaad: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005cdaaf: je 0x5cdaf0 */ if (fZ) goto L_005cdaf0;
L_005cdab1:; BB(0x005cdab1);
    /* 005cdab1: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 005cdab8: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 005cdaba: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5cdabfu); f_005caba4();
    /* 005cdabf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005cdac0: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 005cdac3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005cdac5: je 0x5cdaed */ if (fZ) goto L_005cdaed;
L_005cdac7:; BB(0x005cdac7);
    /* 005cdac7: mov dword ptr [ebp - 0x3c], 1 */ W32((u32)(r_ebp+0xffffffc4u), 0x1u);
    /* 005cdace: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 005cdad5: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 005cdad7: push 0x5cdcc0 */ { u32 v = 0x5cdcc0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cdadc: mov ecx, eax */ r_ecx = r_eax;
    /* 005cdade: push dword ptr [ebp - 0x34] */ { u32 v = R32((u32)(r_ebp+0xffffffccu)); r_esp -= 4; W32(r_esp, v); }
    /* 005cdae1: call 0x5e5b88 */ r_esp -= 4; W32(r_esp, 0x5cdae6u); f_005e5b88();
    /* 005cdae6: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_005cdaed:; BB(0x005cdaed);
    /* 005cdaed: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
L_005cdaf0:; BB(0x005cdaf0);
    /* 005cdaf0: mov eax, ecx */ r_eax = r_ecx;
    /* 005cdaf2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cdaf5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005cdafc: mov esp, ebp */ r_esp = r_ebp;
    /* 005cdafe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cdaff: ret 0x14 */ FN_RET(0x005cd974); r_esp += 24; return;
L_005cdb02:; BB(0x005cdb02);
    /* 005cdb02: movzx edx, word ptr [ecx + 8] */ r_edx = (u32)R16((u32)(r_ecx+0x8u));
    /* 005cdb06: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005cdb0c: mov word ptr [ecx + 8], dx */ W16((u32)(r_ecx+0x8u), (u16)r_edx);
    /* 005cdb10: jmp 0x5cdaf0 */ goto L_005cdaf0;
L_005cdb12:; BB(0x005cdb12);
    /* 005cdb12: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005cdb14: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005cdb17: jmp 0x5cda2f */ goto L_005cda2f;
}

void f_005cdb1c(void) /* sub_5CDB1C */
{
    FN_ENTER(0x005cdb1c);
    /* 005cdb1c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cdb1d: mov ebp, esp */ r_ebp = r_esp;
    /* 005cdb1f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005cdb21: push 0x8d9fbc */ { u32 v = 0x8d9fbcu; r_esp -= 4; W32(r_esp, v); }
    /* 005cdb26: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005cdb2c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cdb2d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005cdb34: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005cdb37: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005cdb3a: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 005cdb3d: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 005cdb40: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 005cdb43: movzx eax, word ptr [ebp + 0xc] */ r_eax = (u32)R16((u32)(r_ebp+0xcu));
    /* 005cdb47: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005cdb4a: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005cdb4d: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 005cdb50: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005cdb53: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 005cdb56: call 0x7b4b48 */ r_esp -= 4; W32(r_esp, 0x5cdb5bu); f_007b4b48();
    /* 005cdb5b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005cdb62: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005cdb65: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005cdb68: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005cdb6b: mov word ptr [ecx + 0xac], ax */ W16((u32)(r_ecx+0xacu), (u16)r_eax);
    /* 005cdb72: mov dword ptr [ecx + 0xb0], edx */ W32((u32)(r_ecx+0xb0u), r_edx);
    /* 005cdb78: mov dword ptr [ecx], 0xb0c9c0 */ W32((u32)(r_ecx), 0xb0c9c0u);
    /* 005cdb7e: mov ebx, dword ptr [0x9c262c] */ r_ebx = R32((u32)(0x9c262cu));
    /* 005cdb84: mov esi, dword ptr [0x9c2630] */ r_esi = R32((u32)(0x9c2630u));
    /* 005cdb8a: mov edi, dword ptr [0x9c2634] */ r_edi = R32((u32)(0x9c2634u));
    /* 005cdb90: mov eax, dword ptr [0x9c2638] */ r_eax = R32((u32)(0x9c2638u));
    /* 005cdb95: mov dword ptr [ecx + 0xb4], ebx */ W32((u32)(r_ecx+0xb4u), r_ebx);
    /* 005cdb9b: mov dword ptr [ecx + 0xb8], esi */ W32((u32)(r_ecx+0xb8u), r_esi);
    /* 005cdba1: mov dword ptr [ecx + 0xbc], edi */ W32((u32)(r_ecx+0xbcu), r_edi);
    /* 005cdba7: mov dword ptr [ecx + 0xc0], eax */ W32((u32)(r_ecx+0xc0u), r_eax);
    /* 005cdbad: mov eax, dword ptr [0x9c263c] */ r_eax = R32((u32)(0x9c263cu));
    /* 005cdbb2: mov dword ptr [ecx + 0xc4], eax */ W32((u32)(r_ecx+0xc4u), r_eax);
    /* 005cdbb8: mov eax, dword ptr [0x9c2640] */ r_eax = R32((u32)(0x9c2640u));
    /* 005cdbbd: mov dword ptr [ecx + 0xc8], eax */ W32((u32)(r_ecx+0xc8u), r_eax);
    /* 005cdbc3: mov eax, dword ptr [0x9c2644] */ r_eax = R32((u32)(0x9c2644u));
    /* 005cdbc8: mov dword ptr [ecx + 0xcc], eax */ W32((u32)(r_ecx+0xccu), r_eax);
    /* 005cdbce: mov eax, dword ptr [0x9c2648] */ r_eax = R32((u32)(0x9c2648u));
    /* 005cdbd3: mov dword ptr [ecx + 0xd0], eax */ W32((u32)(r_ecx+0xd0u), r_eax);
    /* 005cdbd9: mov eax, dword ptr [0x9c264c] */ r_eax = R32((u32)(0x9c264cu));
    /* 005cdbde: mov dword ptr [ecx + 0xd4], eax */ W32((u32)(r_ecx+0xd4u), r_eax);
    /* 005cdbe4: mov eax, dword ptr [0x9c2650] */ r_eax = R32((u32)(0x9c2650u));
    /* 005cdbe9: mov dword ptr [ecx + 0xd8], eax */ W32((u32)(r_ecx+0xd8u), r_eax);
    /* 005cdbef: mov eax, dword ptr [0x9c2654] */ r_eax = R32((u32)(0x9c2654u));
    /* 005cdbf4: mov dword ptr [ecx + 0xdc], eax */ W32((u32)(r_ecx+0xdcu), r_eax);
    /* 005cdbfa: movzx eax, word ptr [ecx + 0x1c] */ r_eax = (u32)R16((u32)(r_ecx+0x1cu));
    /* 005cdbfe: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cdc03: je 0x5cdc43 */ if (fZ) goto L_005cdc43;
L_005cdc05:; BB(0x005cdc05);
    /* 005cdc05: lea eax, [ecx + 0xb4] */ r_eax = (u32)(r_ecx+0xb4u);
    /* 005cdc0b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cdc0c: call 0x7b9ccc */ r_esp -= 4; W32(r_esp, 0x5cdc11u); f_007b9ccc();
    /* 005cdc11: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005cdc14: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x5cdc19u); f_007b4f54();
    /* 005cdc19: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005cdc1c: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 005cdc1f: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cdc22: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005cdc25: movzx edx, word ptr [eax + 8] */ r_edx = (u32)R16((u32)(r_eax+0x8u));
    /* 005cdc29: or edx, 0xffff0010 */ {  u32 a = r_edx; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005cdc2f: mov word ptr [eax + 8], dx */ W16((u32)(r_eax+0x8u), (u16)r_edx);
    /* 005cdc33: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cdc36: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005cdc3d: mov esp, ebp */ r_esp = r_ebp;
    /* 005cdc3f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cdc40: ret 0xc */ FN_RET(0x005cdb1c); r_esp += 16; return;
L_005cdc43:; BB(0x005cdc43);
    /* 005cdc43: call 0x5c8498 */ r_esp -= 4; W32(r_esp, 0x5cdc48u); f_005c8498();
    /* 005cdc48: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005cdc4b: mov word ptr [ecx + 0x1c], ax */ W16((u32)(r_ecx+0x1cu), (u16)r_eax);
    /* 005cdc4f: jmp 0x5cdc05 */ goto L_005cdc05;
}

void f_005cdc54(void) /* sub_5CDC54 */
{
    FN_ENTER(0x005cdc54);
    /* 005cdc54: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005cdc55: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005cdc57: mov ecx, dword ptr [ebx + 0x1c] */ r_ecx = R32((u32)(r_ebx+0x1cu));
    /* 005cdc5a: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005cdc5c: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x5cdc5fu); call_ind(t); }
    /* 005cdc5f: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 005cdc61: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005cdc65: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cdc66: call 0x50981c */ r_esp -= 4; W32(r_esp, 0x5cdc6bu); f_0050981c();
    /* 005cdc6b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cdc6e: mov dword ptr [ebx + 0x20], eax */ W32((u32)(r_ebx+0x20u), r_eax);
    /* 005cdc71: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005cdc73: je 0x5cdc84 */ if (fZ) goto L_005cdc84;
L_005cdc75:; BB(0x005cdc75);
    /* 005cdc75: mov edx, dword ptr [ebx + 0x1c] */ r_edx = R32((u32)(r_ebx+0x1cu));
    /* 005cdc78: movzx ebx, word ptr [edx + 0x1c] */ r_ebx = (u32)R16((u32)(r_edx+0x1cu));
    /* 005cdc7c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005cdc7d: mov ecx, eax */ r_ecx = r_eax;
    /* 005cdc7f: call 0x508f14 */ r_esp -= 4; W32(r_esp, 0x5cdc84u); f_00508f14();
L_005cdc84:; BB(0x005cdc84);
    /* 005cdc84: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005cdc85: ret 4 */ FN_RET(0x005cdc54); r_esp += 8; return;
}

void f_005cdc88(void) /* sub_5CDC88 */
{
    FN_ENTER(0x005cdc88);
    /* 005cdc88: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 005cdc8c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005cdc8e: je 0x5cdc95 */ if (fZ) goto L_005cdc95;
L_005cdc90:; BB(0x005cdc90);
    /* 005cdc90: call 0x5cdc98 */ r_esp -= 4; W32(r_esp, 0x5cdc95u); f_005cdc98();
L_005cdc95:; BB(0x005cdc95);
    /* 005cdc95: ret  */ FN_RET(0x005cdc88); r_esp += 4; return;
}

void f_005cdc98(void) /* sub_5CDC98 */
{
    FN_ENTER(0x005cdc98);
    /* 005cdc98: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005cdc99: mov edi, ecx */ r_edi = r_ecx;
    /* 005cdc9b: mov eax, dword ptr [edi + 0x1c] */ r_eax = R32((u32)(r_edi+0x1cu));
    /* 005cdc9e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005cdca0: je 0x5cdcbd */ if (fZ) goto L_005cdcbd;
L_005cdca2:; BB(0x005cdca2);
    /* 005cdca2: mov eax, dword ptr [edi + 0x24] */ r_eax = R32((u32)(r_edi+0x24u));
    /* 005cdca5: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005cdca8: je 0x5cdcbd */ if (fZ) goto L_005cdcbd;
L_005cdcaa:; BB(0x005cdcaa);
    /* 005cdcaa: push dword ptr [edi + 0x20] */ { u32 v = R32((u32)(r_edi+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 005cdcad: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x5cdcb2u); f_005cdcc0();
    /* 005cdcb2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005cdcb3: push dword ptr [edi + 0x24] */ { u32 v = R32((u32)(r_edi+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 005cdcb6: mov ecx, edi */ r_ecx = r_edi;
    /* 005cdcb8: call 0x5cdc54 */ r_esp -= 4; W32(r_esp, 0x5cdcbdu); f_005cdc54();
L_005cdcbd:; BB(0x005cdcbd);
    /* 005cdcbd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005cdcbe: ret  */ FN_RET(0x005cdc98); r_esp += 4; return;
}

void f_005cdcc0(void) /* sub_5CDCC0 */
{
    FN_ENTER(0x005cdcc0);
    /* 005cdcc0: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 005cdcc4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005cdcc6: je 0x5cdcd5 */ if (fZ) goto L_005cdcd5;
L_005cdcc8:; BB(0x005cdcc8);
    /* 005cdcc8: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 005cdccc: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005cdcd1: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_005cdcd5:; BB(0x005cdcd5);
    /* 005cdcd5: ret  */ FN_RET(0x005cdcc0); r_esp += 4; return;
}

void f_005cdd04(void)
{
    FN_ENTER(0x005cdd04);
    /* 005cdd04: push 0x45 */ { u32 v = 0x45u; r_esp -= 4; W32(r_esp, v); }
    /* 005cdd06: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 005cdd0a: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5cdd0fu); f_0050b510();
    /* 005cdd0f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005cdd11: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cdd12: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cdd13: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cdd14: push 0x35 */ { u32 v = 0x35u; r_esp -= 4; W32(r_esp, v); }
    /* 005cdd16: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5cdd1bu); f_00814298();
    /* 005cdd1b: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005cdd1e: ret  */ FN_RET(0x005cdd04); r_esp += 4; return;
}

void f_005cdd20(void) /* sub_5CDD20 */
{
    FN_ENTER(0x005cdd20);
    /* 005cdd20: mov dword ptr [0xa8d93c], 0x3f800000 */ W32((u32)(0xa8d93cu), 0x3f800000u);
    /* 005cdd2a: mov dword ptr [0xa8d940], 0x41000000 */ W32((u32)(0xa8d940u), 0x41000000u);
    /* 005cdd34: mov dword ptr [0xa8d944], 0x3fc00000 */ W32((u32)(0xa8d944u), 0x3fc00000u);
    /* 005cdd3e: ret  */ FN_RET(0x005cdd20); r_esp += 4; return;
}

void f_005cdd40(void) /* sub_5CDD40 */
{
    FN_ENTER(0x005cdd40);
    /* 005cdd40: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005cdd41: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005cdd43: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005cdd45: call 0x5cdd64 */ r_esp -= 4; W32(r_esp, 0x5cdd4au); f_005cdd64();
    /* 005cdd4a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005cdd4e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005cdd50: jne 0x5cdd56 */ if (!fZ) goto L_005cdd56;
L_005cdd52:; BB(0x005cdd52);
    /* 005cdd52: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005cdd53: ret 4 */ FN_RET(0x005cdd40); r_esp += 8; return;
L_005cdd56:; BB(0x005cdd56);
    /* 005cdd56: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005cdd57: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5cdd5cu); f_005c2f74();
    /* 005cdd5c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005cdd5d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005cdd5e: ret 4 */ FN_RET(0x005cdd40); r_esp += 8; return;
}

void f_005cdd64(void) /* sub_5CDD64 */
{
    FN_ENTER(0x005cdd64);
    /* 005cdd64: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cdd65: mov ebp, esp */ r_ebp = r_esp;
    /* 005cdd67: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005cdd69: push 0x8d9fd8 */ { u32 v = 0x8d9fd8u; r_esp -= 4; W32(r_esp, v); }
    /* 005cdd6e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005cdd74: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cdd75: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005cdd7c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005cdd7f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005cdd82: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005cdd85: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005cdd88: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005cdd8b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005cdd8e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cdd91: mov edx, dword ptr [ecx + 0x4c] */ r_edx = R32((u32)(r_ecx+0x4cu));
    /* 005cdd94: mov dword ptr [ecx], 0xb0cb28 */ W32((u32)(r_ecx), 0xb0cb28u);
    /* 005cdd9a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cdd9c: je 0x5cddb5 */ if (fZ) goto L_005cddb5;
L_005cdd9e:; BB(0x005cdd9e);
    /* 005cdd9e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cdda1: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 005cdda5: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005cddaa: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 005cddae: mov dword ptr [ecx + 0x4c], 0 */ W32((u32)(r_ecx+0x4cu), 0x0u);
L_005cddb5:; BB(0x005cddb5);
    /* 005cddb5: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005cddbc: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x5cddc1u); f_008171e8();
    /* 005cddc1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cddc4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005cddcb: mov esp, ebp */ r_esp = r_ebp;
    /* 005cddcd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cddce: ret  */ FN_RET(0x005cdd64); r_esp += 4; return;
}

void f_005cddd0(void) /* sub_5CDDD0 */
{
    FN_ENTER(0x005cddd0);
    /* 005cddd0: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005cddd3: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 005cddd7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cddd9: je 0x5cddf8 */ if (fZ) goto L_005cddf8;
L_005cdddb:; BB(0x005cdddb);
    /* 005cdddb: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cddde: jne 0x5cde1c */ if (!fZ) goto L_005cde1c;
L_005cdde0:; BB(0x005cdde0);
    /* 005cdde0: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 005cdde2: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005cdde4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cdde6: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 005cdde8: push dword ptr [esp + 0x28] */ { u32 v = R32((u32)(r_esp+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 005cddec: call 0x50ac1c */ r_esp -= 4; W32(r_esp, 0x5cddf1u); f_0050ac1c();
    /* 005cddf1: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cddf4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005cddf7: ret  */ FN_RET(0x005cddd0); r_esp += 4; return;
L_005cddf8:; BB(0x005cddf8);
    /* 005cddf8: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 005cddfc: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 005cddff: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005cde00: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005cde02: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 005cde04: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 005cde08: call dword ptr [eax + 0x10c] */ { u32 t = R32((u32)(r_eax+0x10cu)); r_esp -= 4; W32(r_esp, 0x5cde0eu); call_ind(t); }
    /* 005cde0e: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005cde11: push 0x68 */ { u32 v = 0x68u; r_esp -= 4; W32(r_esp, v); }
    /* 005cde13: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cde14: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5cde19u); f_0050b510();
    /* 005cde19: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005cde1c:; BB(0x005cde1c);
    /* 005cde1c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005cde1f: ret  */ FN_RET(0x005cddd0); r_esp += 4; return;
}

void f_005cde20(void) /* sub_5CDE20 */
{
    FN_ENTER(0x005cde20);
    /* 005cde20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cde21: mov ebp, esp */ r_ebp = r_esp;
    /* 005cde23: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005cde25: push 0x8da01a */ { u32 v = 0x8da01au; r_esp -= 4; W32(r_esp, v); }
    /* 005cde2a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005cde30: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cde31: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005cde38: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005cde3b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005cde3e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005cde41: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005cde44: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005cde47: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 005cde4a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cde4c: je 0x5cde55 */ if (fZ) goto L_005cde55;
L_005cde4e:; BB(0x005cde4e);
    /* 005cde4e: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005cde51: je 0x5cde7a */ if (fZ) goto L_005cde7a;
L_005cde53:; BB(0x005cde53);
    /* 005cde53: jmp 0x5cde69 */ goto L_005cde69;
L_005cde55:; BB(0x005cde55);
    /* 005cde55: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005cde58: push 0x69 */ { u32 v = 0x69u; r_esp -= 4; W32(r_esp, v); }
    /* 005cde5a: lea edx, [eax + 0x300] */ r_edx = (u32)(r_eax+0x300u);
    /* 005cde60: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005cde61: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5cde66u); f_0050b510();
    /* 005cde66: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_005cde69:; BB(0x005cde69);
    /* 005cde69: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 005cde6c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cde6f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005cde76: mov esp, ebp */ r_esp = r_ebp;
    /* 005cde78: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cde79: ret  */ FN_RET(0x005cde20); r_esp += 4; return;
L_005cde7a:; BB(0x005cde7a);
    /* 005cde7a: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 005cde81: push 0x50 */ { u32 v = 0x50u; r_esp -= 4; W32(r_esp, v); }
    /* 005cde83: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5cde88u); f_005caba4();
    /* 005cde88: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005cde89: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005cde8c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cde8e: je 0x5cdebd */ if (fZ) goto L_005cdebd;
L_005cde90:; BB(0x005cde90);
    /* 005cde90: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 005cde97: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005cde9e: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005cdea1: push dword ptr [eax + 0x60] */ { u32 v = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 005cdea4: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005cdea7: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005cdeaa: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005cdeab: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005cdeb1: call 0x5cdf14 */ r_esp -= 4; W32(r_esp, 0x5cdeb6u); f_005cdf14();
    /* 005cdeb6: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_005cdebd:; BB(0x005cdebd);
    /* 005cdebd: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005cdec4: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 005cdecb: push 0x50 */ { u32 v = 0x50u; r_esp -= 4; W32(r_esp, v); }
    /* 005cdecd: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5cded2u); f_005caba4();
    /* 005cded2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005cded3: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005cded6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005cded8: je 0x5cde69 */ if (fZ) goto L_005cde69;
L_005cdeda:; BB(0x005cdeda);
    /* 005cdeda: mov dword ptr [ebp - 0x20], 1 */ W32((u32)(r_ebp+0xffffffe0u), 0x1u);
    /* 005cdee1: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005cdee8: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005cdeeb: mov ebx, dword ptr [ebp + 0x10] */ r_ebx = R32((u32)(r_ebp+0x10u));
    /* 005cdeee: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005cdef1: mov edx, dword ptr [eax + 0x60] */ r_edx = R32((u32)(r_eax+0x60u));
    /* 005cdef4: add edx, 0xffff8000 */ {  u32 a = r_edx; u32 b = 0xffff8000u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005cdefa: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005cdefb: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005cdefc: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005cdf02: call 0x5cdf14 */ r_esp -= 4; W32(r_esp, 0x5cdf07u); f_005cdf14();
    /* 005cdf07: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 005cdf0e: jmp 0x5cde69 */ goto L_005cde69;
}

void f_005cdf14(void) /* sub_5CDF14 */
{
    FN_ENTER(0x005cdf14);
    /* 005cdf14: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cdf15: mov ebp, esp */ r_ebp = r_esp;
    /* 005cdf17: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005cdf19: push 0x8da034 */ { u32 v = 0x8da034u; r_esp -= 4; W32(r_esp, v); }
    /* 005cdf1e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005cdf24: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cdf25: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005cdf2c: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005cdf2f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005cdf32: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 005cdf35: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 005cdf38: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 005cdf3b: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005cdf3e: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005cdf41: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005cdf44: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 005cdf47: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005cdf4a: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 005cdf4d: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x5cdf52u); f_008193cc();
    /* 005cdf52: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005cdf59: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 005cdf5c: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 005cdf5f: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005cdf62: mov dword ptr [edi], 0xb0cb28 */ W32((u32)(r_edi), 0xb0cb28u);
    /* 005cdf68: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 005cdf6a: mov dword ptr [edi + 0x28], eax */ W32((u32)(r_edi+0x28u), r_eax);
    /* 005cdf6d: mov edx, dword ptr [ebx + 4] */ r_edx = R32((u32)(r_ebx+0x4u));
    /* 005cdf70: mov dword ptr [edi + 0x2c], edx */ W32((u32)(r_edi+0x2cu), r_edx);
    /* 005cdf73: mov esi, dword ptr [ebx + 8] */ r_esi = R32((u32)(r_ebx+0x8u));
    /* 005cdf76: mov dword ptr [edi + 0x30], esi */ W32((u32)(r_edi+0x30u), r_esi);
    /* 005cdf79: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x5cdf7eu); f_0082dcbc();
    /* 005cdf7e: fmul dword ptr [0x92bf78] */ ST(0) = ST(0) * R_F32((u32)(0x92bf78u));
    /* 005cdf84: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005cdf87: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005cdf8a: fadd dword ptr [eax] */ ST(0) = ST(0) + R_F32((u32)(r_eax));
    /* 005cdf8c: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005cdf8f: fstp dword ptr [ebx + 0x1c] */ W_F32((u32)(r_ebx+0x1cu), ST(0)); FPOP();
    /* 005cdf92: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005cdf95: mov dword ptr [ebx + 0x20], edx */ W32((u32)(r_ebx+0x20u), r_edx);
    /* 005cdf98: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x5cdf9du); f_0082ddd8();
    /* 005cdf9d: fmul dword ptr [0x92bf78] */ ST(0) = ST(0) * R_F32((u32)(0x92bf78u));
    /* 005cdfa3: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005cdfa6: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005cdfa9: fadd dword ptr [eax + 8] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x8u));
    /* 005cdfac: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005cdfaf: fstp dword ptr [ecx + 0x24] */ W_F32((u32)(r_ecx+0x24u), ST(0)); FPOP();
    /* 005cdfb2: add edx, 0xffffc000 */ {  u32 a = r_edx; u32 b = 0xffffc000u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005cdfb8: mov dword ptr [ecx + 0x44], edx */ W32((u32)(r_ecx+0x44u), r_edx);
    /* 005cdfbb: mov dword ptr [ecx + 0x40], 0x42200000 */ W32((u32)(r_ecx+0x40u), 0x42200000u);
    /* 005cdfc2: mov dword ptr [ecx + 0x48], 0xa */ W32((u32)(r_ecx+0x48u), 0xau);
    /* 005cdfc9: call 0x5ce020 */ r_esp -= 4; W32(r_esp, 0x5cdfceu); f_005ce020();
    /* 005cdfce: mov eax, dword ptr [0x92bf08] */ r_eax = R32((u32)(0x92bf08u));
    /* 005cdfd3: mov edx, dword ptr [0x92bf0c] */ r_edx = R32((u32)(0x92bf0cu));
    /* 005cdfd9: mov ecx, dword ptr [0x92bf10] */ r_ecx = R32((u32)(0x92bf10u));
    /* 005cdfdf: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 005cdfe2: add esi, 0x34 */ {  u32 a = r_esi; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005cdfe5: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 005cdfe8: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 005cdfeb: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 005cdfee: lea ebx, [ebp - 0x34] */ r_ebx = (u32)(r_ebp+0xffffffccu);
    /* 005cdff1: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005cdff3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005cdff4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005cdff5: call 0x509b24 */ r_esp -= 4; W32(r_esp, 0x5cdffau); f_00509b24();
    /* 005cdffa: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005cdffd: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005ce000: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 005ce003: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ce006: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005ce009: mov dword ptr [edx + 0x4c], eax */ W32((u32)(r_edx+0x4cu), r_eax);
    /* 005ce00c: mov eax, edx */ r_eax = r_edx;
    /* 005ce00e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ce011: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005ce018: mov esp, ebp */ r_esp = r_ebp;
    /* 005ce01a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ce01b: ret 0xc */ FN_RET(0x005cdf14); r_esp += 16; return;
}

