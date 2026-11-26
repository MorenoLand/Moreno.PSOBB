#include "protos.h"

void f_0061a088(void) /* sub_61A088 */
{
    FN_ENTER(0x0061a088);
    /* 0061a088: mov eax, dword ptr [0xa8eba8] */ r_eax = R32((u32)(0xa8eba8u));
    /* 0061a08d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061a08f: je 0x61a0b4 */ if (fZ) goto L_0061a0b4;
L_0061a091:; BB(0x0061a091);
    /* 0061a091: push dword ptr [eax + 4] */ { u32 v = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061a094: call 0x800b5c */ r_esp -= 4; W32(r_esp, 0x61a099u); f_00800b5c();
    /* 0061a099: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061a09a: mov eax, dword ptr [0xa8eba8] */ r_eax = R32((u32)(0xa8eba8u));
    /* 0061a09f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061a0a1: je 0x61a0b4 */ if (fZ) goto L_0061a0b4;
L_0061a0a3:; BB(0x0061a0a3);
    /* 0061a0a3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061a0a4: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x61a0a9u); f_00857e98();
    /* 0061a0a9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061a0aa: mov dword ptr [0xa8eba8], 0 */ W32((u32)(0xa8eba8u), 0x0u);
L_0061a0b4:; BB(0x0061a0b4);
    /* 0061a0b4: mov ecx, dword ptr [0xa8ebac] */ r_ecx = R32((u32)(0xa8ebacu));
    /* 0061a0ba: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0061a0bc: je 0x61a0d1 */ if (fZ) goto L_0061a0d1;
L_0061a0be:; BB(0x0061a0be);
    /* 0061a0be: je 0x61a0c7 */ if (fZ) goto L_0061a0c7;
L_0061a0c0:; BB(0x0061a0c0);
    /* 0061a0c0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0061a0c2: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x61a0c7u); f_004066a8();
L_0061a0c7:; BB(0x0061a0c7);
    /* 0061a0c7: mov dword ptr [0xa8ebac], 0 */ W32((u32)(0xa8ebacu), 0x0u);
L_0061a0d1:; BB(0x0061a0d1);
    /* 0061a0d1: ret  */ FN_RET(0x0061a088); r_esp += 4; return;
}

void f_0061a0a0(void)
{
    FN_ENTER(0x0061a0a0);
    /* 0061a0a0: sal byte ptr [ecx + edx + 0x50], 0xe8 */ { u32 ad = (u32)(r_ecx+r_edx+0x50u); u32 c = (8u) & 31; u32 a = R8(ad); u32 r = a; if (c) { r = (a << c) & 0xffu; W8(ad, r);  } }
    /* 0061a0a5: out dx, eax */ UNSUP(0x0061a0a5, "out dx, eax");
    /* 0061a0a6: frstor dword ptr [ebx] */ UNSUP(0x0061a0a6, "frstor dword ptr [ebx]");
    /* 0061a0a8: add byte ptr [ecx - 0x39], bl */ { u32 ad = (u32)(r_ecx+0xffffffc7u);  u32 a = R8(ad); u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0061a0ab: add eax, 0xa8eba8 */ {  u32 a = r_eax; u32 b = 0xa8eba8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061a0b0: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0061a0b2: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0061a0b4: mov ecx, dword ptr [0xa8ebac] */ r_ecx = R32((u32)(0xa8ebacu));
    /* 0061a0ba: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0061a0bc: je 0x61a0d1 */ if (fZ) goto L_0061a0d1;
L_0061a0be:; BB(0x0061a0be);
    /* 0061a0be: je 0x61a0c7 */ if (fZ) goto L_0061a0c7;
L_0061a0c0:; BB(0x0061a0c0);
    /* 0061a0c0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0061a0c2: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x61a0c7u); f_004066a8();
L_0061a0c7:; BB(0x0061a0c7);
    /* 0061a0c7: mov dword ptr [0xa8ebac], 0 */ W32((u32)(0xa8ebacu), 0x0u);
L_0061a0d1:; BB(0x0061a0d1);
    /* 0061a0d1: ret  */ FN_RET(0x0061a0a0); r_esp += 4; return;
}

void f_0061a0d4(void)
{
    FN_ENTER(0x0061a0d4);
    /* 0061a0d4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061a0d5: mov ebp, esp */ r_ebp = r_esp;
    /* 0061a0d7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0061a0d9: push 0x8e19b8 */ { u32 v = 0x8e19b8u; r_esp -= 4; W32(r_esp, v); }
    /* 0061a0de: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0061a0e4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061a0e5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0061a0ec: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061a0ef: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0061a0f2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0061a0f5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0061a0f8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0061a0fb: push 0xd4 */ { u32 v = 0xd4u; r_esp -= 4; W32(r_esp, v); }
    /* 0061a100: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0061a107: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x61a10cu); f_005caba4();
    /* 0061a10c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061a10d: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0061a110: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061a112: je 0x61a14b */ if (fZ) goto L_0061a14b;
L_0061a114:; BB(0x0061a114);
    /* 0061a114: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0061a11b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0061a122: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061a125: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061a12b: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061a12e: call 0x61a150 */ r_esp -= 4; W32(r_esp, 0x61a133u); f_0061a150();
    /* 0061a133: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061a136: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0061a13d:; BB(0x0061a13d);
    /* 0061a13d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061a140: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0061a147: mov esp, ebp */ r_esp = r_ebp;
    /* 0061a149: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061a14a: ret  */ FN_RET(0x0061a0d4); r_esp += 4; return;
L_0061a14b:; BB(0x0061a14b);
    /* 0061a14b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0061a14d: jmp 0x61a13d */ goto L_0061a13d;
}

void f_0061a150(void) /* sub_61A150 */
{
    FN_ENTER(0x0061a150);
    /* 0061a150: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061a151: mov ebp, esp */ r_ebp = r_esp;
    /* 0061a153: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0061a155: push 0x8e19d4 */ { u32 v = 0x8e19d4u; r_esp -= 4; W32(r_esp, v); }
    /* 0061a15a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0061a160: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061a161: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0061a168: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061a16b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0061a16e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0061a171: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0061a174: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0061a177: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0061a17a: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061a17d: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0061a180: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0061a183: call 0x619df0 */ r_esp -= 4; W32(r_esp, 0x61a188u); f_00619df0();
    /* 0061a188: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0061a18f: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0061a192: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0061a195: mov dword ptr [ecx], 0xb26c40 */ W32((u32)(r_ecx), 0xb26c40u);
    /* 0061a19b: mov eax, dword ptr [0x9c4fc0] */ r_eax = R32((u32)(0x9c4fc0u));
    /* 0061a1a0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061a1a1: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0061a1a4: call dword ptr [0xb26c54] */ { u32 t = R32((u32)(0xb26c54u)); r_esp -= 4; W32(r_esp, 0x61a1aau); call_ind(t); }
    /* 0061a1aa: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0061a1ad: mov edi, dword ptr [0xa8ebac] */ r_edi = R32((u32)(0xa8ebacu));
    /* 0061a1b3: mov ebx, dword ptr [0xa8eba8] */ r_ebx = R32((u32)(0xa8eba8u));
    /* 0061a1b9: fld dword ptr [0x930888] */ FPUSH(R_F32((u32)(0x930888u)));
    /* 0061a1bf: mov eax, dword ptr [edi + 0x42c] */ r_eax = R32((u32)(r_edi+0x42cu));
    /* 0061a1c5: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 0061a1c8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0061a1ca: push 0x9c4fc4 */ { u32 v = 0x9c4fc4u; r_esp -= 4; W32(r_esp, v); }
    /* 0061a1cf: mov dword ptr [ecx + 0x34], edx */ W32((u32)(r_ecx+0x34u), r_edx);
    /* 0061a1d2: mov esi, dword ptr [ebx + 4] */ r_esi = R32((u32)(r_ebx+0x4u));
    /* 0061a1d5: mov dword ptr [ecx + 0x24], esi */ W32((u32)(r_ecx+0x24u), r_esi);
    /* 0061a1d8: mov eax, dword ptr [edi + 0x430] */ r_eax = R32((u32)(r_edi+0x430u));
    /* 0061a1de: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 0061a1e1: mov dword ptr [ecx + 0xbc], eax */ W32((u32)(r_ecx+0xbcu), r_eax);
    /* 0061a1e7: fild dword ptr [eax + 4] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x4u)));
    /* 0061a1ea: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0061a1ed: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0061a1f0: fadd dword ptr [edx*4 + 0x930880] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x930880u));
    /* 0061a1f7: fadd dword ptr [0x93088c] */ ST(0) = ST(0) + R_F32((u32)(0x93088cu));
    /* 0061a1fd: fst dword ptr [ecx + 0xb4] */ W_F32((u32)(r_ecx+0xb4u), ST(0));
    /* 0061a203: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 0061a205: fstp dword ptr [ecx + 0xb8] */ W_F32((u32)(r_ecx+0xb8u), ST(0)); FPOP();
    /* 0061a20b: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x61a210u); f_007b9a88();
    /* 0061a210: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0061a213: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x61a218u); f_007b999c();
    /* 0061a218: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061a219: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0061a21c: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x61a221u); f_007b4f54();
    /* 0061a221: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0061a224: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0061a226: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x61a229u); call_ind(t); }
    /* 0061a229: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0061a22c: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061a22f: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0061a232: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0061a235: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061a238: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0061a23f: mov esp, ebp */ r_esp = r_ebp;
    /* 0061a241: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061a242: ret 8 */ FN_RET(0x0061a150); r_esp += 12; return;
}

void f_0061a248(void) /* sub_61A248 */
{
    FN_ENTER(0x0061a248);
    /* 0061a248: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061a249: mov ebp, esp */ r_ebp = r_esp;
    /* 0061a24b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0061a24d: push 0x8e19fc */ { u32 v = 0x8e19fcu; r_esp -= 4; W32(r_esp, v); }
    /* 0061a252: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0061a258: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061a259: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0061a260: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061a263: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0061a266: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0061a269: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0061a26c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0061a26f: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 0061a274: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0061a27b: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x61a280u); f_008581c5();
    /* 0061a280: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061a281: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0061a284: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061a286: je 0x61a304 */ if (fZ) goto L_0061a304;
L_0061a288:; BB(0x0061a288);
    /* 0061a288: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0061a28f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0061a296: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061a299: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0061a29b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061a29c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061a29d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061a29e: push 0x9c4fb0 */ { u32 v = 0x9c4fb0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061a2a3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0061a2a5: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x61a2aau); f_005b7a84();
    /* 0061a2aa: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061a2ad: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0061a2b4:; BB(0x0061a2b4);
    /* 0061a2b4: mov dword ptr [0xa8ebac], eax */ W32((u32)(0xa8ebacu), r_eax);
    /* 0061a2b9: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0061a2c0: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0061a2c2: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x61a2c7u); f_008581c5();
    /* 0061a2c7: mov edx, dword ptr [0xa8ebac] */ r_edx = R32((u32)(0xa8ebacu));
    /* 0061a2cd: mov ecx, dword ptr [edx + 0x42c] */ r_ecx = R32((u32)(r_edx+0x42cu));
    /* 0061a2d3: mov ebx, dword ptr [ecx + 0xc] */ r_ebx = R32((u32)(r_ecx+0xcu));
    /* 0061a2d6: mov dword ptr [0xa8eba8], eax */ W32((u32)(0xa8eba8u), r_eax);
    /* 0061a2db: mov dword ptr [eax], ebx */ W32((u32)(r_eax), r_ebx);
    /* 0061a2dd: push 0x9308e4 */ { u32 v = 0x9308e4u; r_esp -= 4; W32(r_esp, v); }
    /* 0061a2e2: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x61a2e7u); f_008009dc();
    /* 0061a2e7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0061a2ea: mov edx, dword ptr [0xa8eba8] */ r_edx = R32((u32)(0xa8eba8u));
    /* 0061a2f0: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0061a2f3: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 0061a2f6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061a2f9: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0061a300: mov esp, ebp */ r_esp = r_ebp;
    /* 0061a302: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061a303: ret  */ FN_RET(0x0061a248); r_esp += 4; return;
L_0061a304:; BB(0x0061a304);
    /* 0061a304: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0061a306: jmp 0x61a2b4 */ goto L_0061a2b4;
}

void f_0061a2ca(void)
{
    FN_ENTER(0x0061a2ca);
    goto L_0061a2ca;
L_0061a274:; BB(0x0061a274);
    /* 0061a274: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0061a27b: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x61a280u); f_008581c5();
    /* 0061a280: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061a281: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0061a284: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061a286: je 0x61a304 */ if (fZ) goto L_0061a304;
L_0061a288:; BB(0x0061a288);
    /* 0061a288: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0061a28f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0061a296: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061a299: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0061a29b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061a29c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061a29d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061a29e: push 0x9c4fb0 */ { u32 v = 0x9c4fb0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061a2a3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0061a2a5: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x61a2aau); f_005b7a84();
    /* 0061a2aa: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061a2ad: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0061a2b4:; BB(0x0061a2b4);
    /* 0061a2b4: mov dword ptr [0xa8ebac], eax */ W32((u32)(0xa8ebacu), r_eax);
    /* 0061a2b9: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0061a2c0: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0061a2c2: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x61a2c7u); f_008581c5();
    /* 0061a2c7: mov edx, dword ptr [0xa8ebac] */ r_edx = R32((u32)(0xa8ebacu));
L_0061a2ca:; BB(0x0061a2ca);
    /* 0061a2ca: jmp 0x61a274 */ goto L_0061a274;
    /* 0061a2cd: mov ecx, dword ptr [edx + 0x42c] */ r_ecx = R32((u32)(r_edx+0x42cu));
    /* 0061a2d3: mov ebx, dword ptr [ecx + 0xc] */ r_ebx = R32((u32)(r_ecx+0xcu));
    /* 0061a2d6: mov dword ptr [0xa8eba8], eax */ W32((u32)(0xa8eba8u), r_eax);
    /* 0061a2db: mov dword ptr [eax], ebx */ W32((u32)(r_eax), r_ebx);
    /* 0061a2dd: push 0x9308e4 */ { u32 v = 0x9308e4u; r_esp -= 4; W32(r_esp, v); }
    /* 0061a2e2: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x61a2e7u); f_008009dc();
    /* 0061a2e7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0061a2ea: mov edx, dword ptr [0xa8eba8] */ r_edx = R32((u32)(0xa8eba8u));
    /* 0061a2f0: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0061a2f3: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 0061a2f6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061a2f9: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0061a300: mov esp, ebp */ r_esp = r_ebp;
    /* 0061a302: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061a303: ret  */ FN_RET(0x0061a2ca); r_esp += 4; return;
L_0061a304:; BB(0x0061a304);
    /* 0061a304: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0061a306: jmp 0x61a2b4 */ goto L_0061a2b4;
}

void f_0061a308(void) /* sub_61A308 */
{
    FN_ENTER(0x0061a308);
    /* 0061a308: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0061a309: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0061a30b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0061a30d: call 0x61a32c */ r_esp -= 4; W32(r_esp, 0x61a312u); f_0061a32c();
    /* 0061a312: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0061a316: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0061a318: jne 0x61a31e */ if (!fZ) goto L_0061a31e;
L_0061a31a:; BB(0x0061a31a);
    /* 0061a31a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0061a31b: ret 4 */ FN_RET(0x0061a308); r_esp += 8; return;
L_0061a31e:; BB(0x0061a31e);
    /* 0061a31e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0061a31f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x61a324u); f_005c2f74();
    /* 0061a324: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061a325: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0061a326: ret 4 */ FN_RET(0x0061a308); r_esp += 8; return;
}

void f_0061a32c(void) /* sub_61A32C */
{
    FN_ENTER(0x0061a32c);
    /* 0061a32c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061a32d: mov ebp, esp */ r_ebp = r_esp;
    /* 0061a32f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0061a331: push 0x8e1a18 */ { u32 v = 0x8e1a18u; r_esp -= 4; W32(r_esp, v); }
    /* 0061a336: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0061a33c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061a33d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0061a344: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061a347: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0061a34a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0061a34d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0061a350: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0061a353: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0061a356: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0061a35d: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061a360: mov dword ptr [eax], 0xb26d40 */ W32((u32)(r_eax), 0xb26d40u);
    /* 0061a366: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061a367: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x61a36cu); f_007b4e84();
    /* 0061a36c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061a36d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061a370: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x61a375u); f_007b9c8c();
    /* 0061a375: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0061a37c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061a37f: call 0x619b10 */ r_esp -= 4; W32(r_esp, 0x61a384u); f_00619b10();
    /* 0061a384: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061a387: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0061a38e: mov esp, ebp */ r_esp = r_ebp;
    /* 0061a390: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061a391: ret  */ FN_RET(0x0061a32c); r_esp += 4; return;
}

void f_0061a394(void) /* sub_61A394 */
{
    FN_ENTER(0x0061a394);
    /* 0061a394: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061a395: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0061a397: mov eax, dword ptr [ebp + 0xd0] */ r_eax = R32((u32)(r_ebp+0xd0u));
    /* 0061a39d: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0061a39f: jne 0x61a3cd */ if (!fZ) goto L_0061a3cd;
L_0061a3a1:; BB(0x0061a3a1);
    /* 0061a3a1: mov dword ptr [ebp + 0xac], 3 */ W32((u32)(r_ebp+0xacu), 0x3u);
    /* 0061a3ab: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0061a3ad: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0061a3af: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061a3b1: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x61a3b6u); f_007b52ec();
    /* 0061a3b6: add ebp, 0x38 */ {  u32 a = r_ebp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0061a3b9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0061a3bb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061a3bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061a3bd: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061a3be: push 0x479 */ { u32 v = 0x479u; r_esp -= 4; W32(r_esp, v); }
    /* 0061a3c3: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x61a3c8u); f_00814298();
    /* 0061a3c8: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_0061a3cb:; BB(0x0061a3cb);
    /* 0061a3cb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061a3cc: ret  */ FN_RET(0x0061a394); r_esp += 4; return;
L_0061a3cd:; BB(0x0061a3cd);
    /* 0061a3cd: push 0x461c4000 */ { u32 v = 0x461c4000u; r_esp -= 4; W32(r_esp, v); }
    /* 0061a3d2: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0061a3d4: call 0x6134c8 */ r_esp -= 4; W32(r_esp, 0x61a3d9u); f_006134c8();
    /* 0061a3d9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0061a3db: jne 0x61a3cb */ if (!fZ) goto L_0061a3cb;
L_0061a3dd:; BB(0x0061a3dd);
    /* 0061a3dd: jmp 0x61a3a1 */ goto L_0061a3a1;
}

void f_0061a3e0(void) /* sub_61A3E0 */
{
    FN_ENTER(0x0061a3e0);
    /* 0061a3e0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0061a3e1: mov edi, ecx */ r_edi = r_ecx;
    /* 0061a3e3: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0061a3e5: mov ecx, edi */ r_ecx = r_edi;
    /* 0061a3e7: push dword ptr [edi + 0xc4] */ { u32 v = R32((u32)(r_edi+0xc4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061a3ed: push dword ptr [edi + 0xc0] */ { u32 v = R32((u32)(r_edi+0xc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061a3f3: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x61a3f6u); call_ind(t); }
    /* 0061a3f6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0061a3f8: je 0x61a4e6 */ if (fZ) goto L_0061a4e6;
L_0061a3fe:; BB(0x0061a3fe);
    /* 0061a3fe: push 0x41f00000 */ { u32 v = 0x41f00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0061a403: mov ecx, edi */ r_ecx = r_edi;
    /* 0061a405: call 0x613244 */ r_esp -= 4; W32(r_esp, 0x61a40au); f_00613244();
    /* 0061a40a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0061a40c: je 0x61a4e6 */ if (fZ) goto L_0061a4e6;
L_0061a412:; BB(0x0061a412);
    /* 0061a412: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x61a417u); f_0082d7b0();
    /* 0061a417: lea ecx, [edi + 0x38] */ r_ecx = (u32)(r_edi+0x38u);
    /* 0061a41a: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x61a41fu); f_0082d838();
    /* 0061a41f: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 0061a422: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0061a424: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x61a429u); f_0082d8bc();
    /* 0061a429: mov eax, dword ptr [edi + 0xd0] */ r_eax = R32((u32)(r_edi+0xd0u));
    /* 0061a42f: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0061a431: je 0x61a43a */ if (fZ) goto L_0061a43a;
L_0061a433:; BB(0x0061a433);
    /* 0061a433: mov edx, 1 */ r_edx = 0x1u;
    /* 0061a438: jmp 0x61a43c */ goto L_0061a43c;
L_0061a43a:; BB(0x0061a43a);
    /* 0061a43a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_0061a43c:; BB(0x0061a43c);
    /* 0061a43c: mov eax, dword ptr [0xa8ebb4] */ r_eax = R32((u32)(0xa8ebb4u));
    /* 0061a441: mov ecx, dword ptr [eax + edx*4] */ r_ecx = R32((u32)(r_eax+r_edx*4));
    /* 0061a444: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x61a449u); f_00829cc8();
    /* 0061a449: mov eax, dword ptr [edi + 0xac] */ r_eax = R32((u32)(r_edi+0xacu));
    /* 0061a44f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061a451: jne 0x61a4cd */ if (!fZ) goto L_0061a4cd;
L_0061a453:; BB(0x0061a453);
    /* 0061a453: mov edi, dword ptr [edi + 0x34] */ r_edi = R32((u32)(r_edi+0x34u));
    /* 0061a456: lea ecx, [edi + 8] */ r_ecx = (u32)(r_edi+0x8u);
    /* 0061a459: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x61a45eu); f_0082d838();
    /* 0061a45e: push dword ptr [edi + 4] */ { u32 v = R32((u32)(r_edi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061a461: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x61a466u); f_008321d8();
    /* 0061a466: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061a467: mov edi, dword ptr [edi + 0x2c] */ r_edi = R32((u32)(r_edi+0x2cu));
    /* 0061a46a: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x61a46fu); f_0082d7b0();
    /* 0061a46f: lea ecx, [edi + 8] */ r_ecx = (u32)(r_edi+0x8u);
    /* 0061a472: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x61a477u); f_0082d838();
    /* 0061a477: push dword ptr [edi + 4] */ { u32 v = R32((u32)(r_edi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061a47a: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x61a47fu); f_008321d8();
    /* 0061a47f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061a480: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x61a485u); f_0082da80();
    /* 0061a485: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x61a48au); f_0082dbac();
    /* 0061a48a: mov edi, dword ptr [edi + 0x30] */ r_edi = R32((u32)(r_edi+0x30u));
    /* 0061a48d: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x61a492u); f_0082d7b0();
    /* 0061a492: lea ecx, [edi + 8] */ r_ecx = (u32)(r_edi+0x8u);
    /* 0061a495: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x61a49au); f_0082d838();
    /* 0061a49a: push dword ptr [edi + 4] */ { u32 v = R32((u32)(r_edi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061a49d: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x61a4a2u); f_008321d8();
    /* 0061a4a2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061a4a3: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x61a4a8u); f_0082da80();
    /* 0061a4a8: mov edi, dword ptr [edi + 0x30] */ r_edi = R32((u32)(r_edi+0x30u));
    /* 0061a4ab: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x61a4b0u); f_0082d7b0();
    /* 0061a4b0: lea ecx, [edi + 8] */ r_ecx = (u32)(r_edi+0x8u);
    /* 0061a4b3: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x61a4b8u); f_0082d838();
    /* 0061a4b8: push dword ptr [edi + 4] */ { u32 v = R32((u32)(r_edi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061a4bb: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x61a4c0u); f_008321d8();
    /* 0061a4c0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061a4c1: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x61a4c6u); f_0082da80();
    /* 0061a4c6: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x61a4cbu); f_0082dab0();
    /* 0061a4cb: jmp 0x61a4e1 */ goto L_0061a4e1;
L_0061a4cd:; BB(0x0061a4cd);
    /* 0061a4cd: push dword ptr [edi + 0xb0] */ { u32 v = R32((u32)(r_edi+0xb0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061a4d3: mov ecx, dword ptr [edi + 0x34] */ r_ecx = R32((u32)(r_edi+0x34u));
    /* 0061a4d6: mov edx, dword ptr [edi + 0xbc] */ r_edx = R32((u32)(r_edi+0xbcu));
    /* 0061a4dc: call 0x83bd00 */ r_esp -= 4; W32(r_esp, 0x61a4e1u); f_0083bd00();
L_0061a4e1:; BB(0x0061a4e1);
    /* 0061a4e1: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x61a4e6u); f_0082da80();
L_0061a4e6:; BB(0x0061a4e6);
    /* 0061a4e6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0061a4e7: ret  */ FN_RET(0x0061a3e0); r_esp += 4; return;
}

void f_0061a4e8(void) /* sub_61A4E8 */
{
    FN_ENTER(0x0061a4e8);
    /* 0061a4e8: mov eax, dword ptr [0xa8ebb4] */ r_eax = R32((u32)(0xa8ebb4u));
    /* 0061a4ed: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061a4ef: je 0x61a514 */ if (fZ) goto L_0061a514;
L_0061a4f1:; BB(0x0061a4f1);
    /* 0061a4f1: push dword ptr [eax + 4] */ { u32 v = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061a4f4: call 0x800b5c */ r_esp -= 4; W32(r_esp, 0x61a4f9u); f_00800b5c();
    /* 0061a4f9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061a4fa: mov eax, dword ptr [0xa8ebb4] */ r_eax = R32((u32)(0xa8ebb4u));
    /* 0061a4ff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061a501: je 0x61a514 */ if (fZ) goto L_0061a514;
L_0061a503:; BB(0x0061a503);
    /* 0061a503: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061a504: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x61a509u); f_00857e98();
    /* 0061a509: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061a50a: mov dword ptr [0xa8ebb4], 0 */ W32((u32)(0xa8ebb4u), 0x0u);
L_0061a514:; BB(0x0061a514);
    /* 0061a514: mov ecx, dword ptr [0xa8ebb8] */ r_ecx = R32((u32)(0xa8ebb8u));
    /* 0061a51a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0061a51c: je 0x61a531 */ if (fZ) goto L_0061a531;
L_0061a51e:; BB(0x0061a51e);
    /* 0061a51e: je 0x61a527 */ if (fZ) goto L_0061a527;
L_0061a520:; BB(0x0061a520);
    /* 0061a520: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0061a522: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x61a527u); f_004066a8();
L_0061a527:; BB(0x0061a527);
    /* 0061a527: mov dword ptr [0xa8ebb8], 0 */ W32((u32)(0xa8ebb8u), 0x0u);
L_0061a531:; BB(0x0061a531);
    /* 0061a531: ret  */ FN_RET(0x0061a4e8); r_esp += 4; return;
}

void f_0061a534(void)
{
    FN_ENTER(0x0061a534);
    /* 0061a534: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061a535: mov ebp, esp */ r_ebp = r_esp;
    /* 0061a537: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0061a539: push 0x8e1a40 */ { u32 v = 0x8e1a40u; r_esp -= 4; W32(r_esp, v); }
    /* 0061a53e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0061a544: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061a545: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0061a54c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061a54f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0061a552: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0061a555: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0061a558: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0061a55b: push 0xd4 */ { u32 v = 0xd4u; r_esp -= 4; W32(r_esp, v); }
    /* 0061a560: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0061a567: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x61a56cu); f_005caba4();
    /* 0061a56c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061a56d: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0061a570: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061a572: je 0x61a5ab */ if (fZ) goto L_0061a5ab;
L_0061a574:; BB(0x0061a574);
    /* 0061a574: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0061a57b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0061a582: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061a585: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061a58b: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061a58e: call 0x61a5b0 */ r_esp -= 4; W32(r_esp, 0x61a593u); f_0061a5b0();
    /* 0061a593: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061a596: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0061a59d:; BB(0x0061a59d);
    /* 0061a59d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061a5a0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0061a5a7: mov esp, ebp */ r_esp = r_ebp;
    /* 0061a5a9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061a5aa: ret  */ FN_RET(0x0061a534); r_esp += 4; return;
L_0061a5ab:; BB(0x0061a5ab);
    /* 0061a5ab: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0061a5ad: jmp 0x61a59d */ goto L_0061a59d;
}

void f_0061a5b0(void) /* sub_61A5B0 */
{
    FN_ENTER(0x0061a5b0);
    /* 0061a5b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061a5b1: mov ebp, esp */ r_ebp = r_esp;
    /* 0061a5b3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0061a5b5: push 0x8e1a5c */ { u32 v = 0x8e1a5cu; r_esp -= 4; W32(r_esp, v); }
    /* 0061a5ba: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0061a5c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061a5c1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0061a5c8: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061a5cb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0061a5ce: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0061a5d1: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0061a5d4: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0061a5d7: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0061a5da: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061a5dd: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0061a5e0: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0061a5e3: call 0x619df0 */ r_esp -= 4; W32(r_esp, 0x61a5e8u); f_00619df0();
    /* 0061a5e8: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0061a5ef: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0061a5f2: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0061a5f5: mov dword ptr [ecx], 0xb26d40 */ W32((u32)(r_ecx), 0xb26d40u);
    /* 0061a5fb: mov eax, dword ptr [0x9c5010] */ r_eax = R32((u32)(0x9c5010u));
    /* 0061a600: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061a601: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0061a604: call dword ptr [0xb26d54] */ { u32 t = R32((u32)(0xb26d54u)); r_esp -= 4; W32(r_esp, 0x61a60au); call_ind(t); }
    /* 0061a60a: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0061a60d: mov edi, dword ptr [0xa8ebb8] */ r_edi = R32((u32)(0xa8ebb8u));
    /* 0061a613: mov ebx, dword ptr [0xa8ebb4] */ r_ebx = R32((u32)(0xa8ebb4u));
    /* 0061a619: fld dword ptr [0x930908] */ FPUSH(R_F32((u32)(0x930908u)));
    /* 0061a61f: mov eax, dword ptr [edi + 0x42c] */ r_eax = R32((u32)(r_edi+0x42cu));
    /* 0061a625: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 0061a628: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0061a62a: push 0x9c5014 */ { u32 v = 0x9c5014u; r_esp -= 4; W32(r_esp, v); }
    /* 0061a62f: mov dword ptr [ecx + 0x34], edx */ W32((u32)(r_ecx+0x34u), r_edx);
    /* 0061a632: mov esi, dword ptr [ebx + 4] */ r_esi = R32((u32)(r_ebx+0x4u));
    /* 0061a635: mov dword ptr [ecx + 0x24], esi */ W32((u32)(r_ecx+0x24u), r_esi);
    /* 0061a638: mov eax, dword ptr [edi + 0x430] */ r_eax = R32((u32)(r_edi+0x430u));
    /* 0061a63e: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 0061a641: mov dword ptr [ecx + 0xbc], eax */ W32((u32)(r_ecx+0xbcu), r_eax);
    /* 0061a647: fild dword ptr [eax + 4] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x4u)));
    /* 0061a64a: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0061a64d: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0061a650: fadd dword ptr [edx*4 + 0x930900] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x930900u));
    /* 0061a657: fadd dword ptr [0x93090c] */ ST(0) = ST(0) + R_F32((u32)(0x93090cu));
    /* 0061a65d: fst dword ptr [ecx + 0xb4] */ W_F32((u32)(r_ecx+0xb4u), ST(0));
    /* 0061a663: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 0061a665: fstp dword ptr [ecx + 0xb8] */ W_F32((u32)(r_ecx+0xb8u), ST(0)); FPOP();
    /* 0061a66b: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x61a670u); f_007b9a88();
    /* 0061a670: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0061a673: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x61a678u); f_007b999c();
    /* 0061a678: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061a679: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0061a67c: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x61a681u); f_007b4f54();
    /* 0061a681: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0061a684: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0061a686: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x61a689u); call_ind(t); }
    /* 0061a689: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0061a68c: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061a68f: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0061a692: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0061a695: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061a698: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0061a69f: mov esp, ebp */ r_esp = r_ebp;
    /* 0061a6a1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061a6a2: ret 8 */ FN_RET(0x0061a5b0); r_esp += 12; return;
}

void f_0061a6a8(void) /* sub_61A6A8 */
{
    FN_ENTER(0x0061a6a8);
    /* 0061a6a8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061a6a9: mov ebp, esp */ r_ebp = r_esp;
    /* 0061a6ab: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0061a6ad: push 0x8e1a84 */ { u32 v = 0x8e1a84u; r_esp -= 4; W32(r_esp, v); }
    /* 0061a6b2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0061a6b8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061a6b9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0061a6c0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061a6c3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0061a6c6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0061a6c9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0061a6cc: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0061a6cf: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 0061a6d4: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0061a6db: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x61a6e0u); f_008581c5();
    /* 0061a6e0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061a6e1: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0061a6e4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061a6e6: je 0x61a764 */ if (fZ) goto L_0061a764;
L_0061a6e8:; BB(0x0061a6e8);
    /* 0061a6e8: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0061a6ef: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0061a6f6: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061a6f9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0061a6fb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061a6fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061a6fd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061a6fe: push 0x9c5000 */ { u32 v = 0x9c5000u; r_esp -= 4; W32(r_esp, v); }
    /* 0061a703: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0061a705: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x61a70au); f_005b7a84();
    /* 0061a70a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061a70d: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0061a714:; BB(0x0061a714);
    /* 0061a714: mov dword ptr [0xa8ebb8], eax */ W32((u32)(0xa8ebb8u), r_eax);
    /* 0061a719: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0061a720: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0061a722: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x61a727u); f_008581c5();
    /* 0061a727: mov edx, dword ptr [0xa8ebb8] */ r_edx = R32((u32)(0xa8ebb8u));
    /* 0061a72d: mov ecx, dword ptr [edx + 0x42c] */ r_ecx = R32((u32)(r_edx+0x42cu));
    /* 0061a733: mov ebx, dword ptr [ecx + 0xc] */ r_ebx = R32((u32)(r_ecx+0xcu));
    /* 0061a736: mov dword ptr [0xa8ebb4], eax */ W32((u32)(0xa8ebb4u), r_eax);
    /* 0061a73b: mov dword ptr [eax], ebx */ W32((u32)(r_eax), r_ebx);
    /* 0061a73d: push 0x93094c */ { u32 v = 0x93094cu; r_esp -= 4; W32(r_esp, v); }
    /* 0061a742: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x61a747u); f_008009dc();
    /* 0061a747: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0061a74a: mov edx, dword ptr [0xa8ebb4] */ r_edx = R32((u32)(0xa8ebb4u));
    /* 0061a750: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0061a753: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 0061a756: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061a759: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0061a760: mov esp, ebp */ r_esp = r_ebp;
    /* 0061a762: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061a763: ret  */ FN_RET(0x0061a6a8); r_esp += 4; return;
L_0061a764:; BB(0x0061a764);
    /* 0061a764: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0061a766: jmp 0x61a714 */ goto L_0061a714;
}

void f_0061a768(void) /* sub_61A768 */
{
    FN_ENTER(0x0061a768);
    /* 0061a768: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0061a769: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0061a76b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0061a76d: call 0x61a78c */ r_esp -= 4; W32(r_esp, 0x61a772u); f_0061a78c();
    /* 0061a772: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0061a776: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0061a778: jne 0x61a77e */ if (!fZ) goto L_0061a77e;
L_0061a77a:; BB(0x0061a77a);
    /* 0061a77a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0061a77b: ret 4 */ FN_RET(0x0061a768); r_esp += 8; return;
L_0061a77e:; BB(0x0061a77e);
    /* 0061a77e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0061a77f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x61a784u); f_005c2f74();
    /* 0061a784: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061a785: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0061a786: ret 4 */ FN_RET(0x0061a768); r_esp += 8; return;
}

void f_0061a78c(void) /* sub_61A78C */
{
    FN_ENTER(0x0061a78c);
    /* 0061a78c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061a78d: mov ebp, esp */ r_ebp = r_esp;
    /* 0061a78f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0061a791: push 0x8e1aa0 */ { u32 v = 0x8e1aa0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061a796: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0061a79c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061a79d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0061a7a4: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061a7a7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0061a7aa: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0061a7ad: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0061a7b0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0061a7b3: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0061a7b6: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0061a7bd: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061a7c0: mov dword ptr [eax], 0xb26e40 */ W32((u32)(r_eax), 0xb26e40u);
    /* 0061a7c6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061a7c7: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x61a7ccu); f_007b4e84();
    /* 0061a7cc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061a7cd: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061a7d0: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x61a7d5u); f_007b9c8c();
    /* 0061a7d5: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0061a7dc: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061a7df: call 0x619b10 */ r_esp -= 4; W32(r_esp, 0x61a7e4u); f_00619b10();
    /* 0061a7e4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061a7e7: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0061a7ee: mov esp, ebp */ r_esp = r_ebp;
    /* 0061a7f0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061a7f1: ret  */ FN_RET(0x0061a78c); r_esp += 4; return;
}

void f_0061a7f4(void) /* sub_61A7F4 */
{
    FN_ENTER(0x0061a7f4);
    /* 0061a7f4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0061a7f5: mov edi, ecx */ r_edi = r_ecx;
    /* 0061a7f7: mov eax, dword ptr [edi + 0xd0] */ r_eax = R32((u32)(r_edi+0xd0u));
    /* 0061a7fd: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0061a7ff: jne 0x61a803 */ if (!fZ) goto L_0061a803;
L_0061a801:; BB(0x0061a801);
    /* 0061a801: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0061a802: ret  */ FN_RET(0x0061a7f4); r_esp += 4; return;
L_0061a803:; BB(0x0061a803);
    /* 0061a803: push 0x45992000 */ { u32 v = 0x45992000u; r_esp -= 4; W32(r_esp, v); }
    /* 0061a808: mov ecx, edi */ r_ecx = r_edi;
    /* 0061a80a: call 0x6134c8 */ r_esp -= 4; W32(r_esp, 0x61a80fu); f_006134c8();
    /* 0061a80f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0061a811: je 0x61a801 */ if (fZ) goto L_0061a801;
L_0061a813:; BB(0x0061a813);
    /* 0061a813: mov dword ptr [edi + 0xac], 1 */ W32((u32)(r_edi+0xacu), 0x1u);
    /* 0061a81d: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0061a81f: mov ecx, edi */ r_ecx = r_edi;
    /* 0061a821: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061a823: call 0x7b52c4 */ r_esp -= 4; W32(r_esp, 0x61a828u); f_007b52c4();
    /* 0061a828: add edi, 0x38 */ {  u32 a = r_edi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0061a82b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0061a82d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061a82e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061a82f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0061a830: push 0x479 */ { u32 v = 0x479u; r_esp -= 4; W32(r_esp, v); }
    /* 0061a835: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x61a83au); f_00814298();
    /* 0061a83a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0061a83d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0061a83e: ret  */ FN_RET(0x0061a7f4); r_esp += 4; return;
}

void f_0061a820(void)
{
    FN_ENTER(0x0061a820);
    /* 0061a820: iretd  */ UNSUP(0x0061a820, "iretd ");
    /* 0061a821: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061a823: call 0x7b52c4 */ r_esp -= 4; W32(r_esp, 0x61a828u); f_007b52c4();
    /* 0061a828: add edi, 0x38 */ {  u32 a = r_edi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0061a82b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0061a82d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061a82e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061a82f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0061a830: push 0x479 */ { u32 v = 0x479u; r_esp -= 4; W32(r_esp, v); }
    /* 0061a835: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x61a83au); f_00814298();
    /* 0061a83a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0061a83d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0061a83e: ret  */ FN_RET(0x0061a820); r_esp += 4; return;
}

void f_0061a840(void) /* sub_61A840 */
{
    FN_ENTER(0x0061a840);
    /* 0061a840: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0061a841: mov edi, ecx */ r_edi = r_ecx;
    /* 0061a843: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0061a845: mov ecx, edi */ r_ecx = r_edi;
    /* 0061a847: push dword ptr [edi + 0xc4] */ { u32 v = R32((u32)(r_edi+0xc4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061a84d: push dword ptr [edi + 0xc0] */ { u32 v = R32((u32)(r_edi+0xc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061a853: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x61a856u); call_ind(t); }
    /* 0061a856: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0061a858: je 0x61a946 */ if (fZ) goto L_0061a946;
L_0061a85e:; BB(0x0061a85e);
    /* 0061a85e: push 0x41f00000 */ { u32 v = 0x41f00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0061a863: mov ecx, edi */ r_ecx = r_edi;
    /* 0061a865: call 0x613244 */ r_esp -= 4; W32(r_esp, 0x61a86au); f_00613244();
    /* 0061a86a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0061a86c: je 0x61a946 */ if (fZ) goto L_0061a946;
L_0061a872:; BB(0x0061a872);
    /* 0061a872: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x61a877u); f_0082d7b0();
    /* 0061a877: lea ecx, [edi + 0x38] */ r_ecx = (u32)(r_edi+0x38u);
    /* 0061a87a: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x61a87fu); f_0082d838();
    /* 0061a87f: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 0061a882: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0061a884: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x61a889u); f_0082d8bc();
    /* 0061a889: mov eax, dword ptr [edi + 0xd0] */ r_eax = R32((u32)(r_edi+0xd0u));
    /* 0061a88f: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0061a891: je 0x61a89a */ if (fZ) goto L_0061a89a;
L_0061a893:; BB(0x0061a893);
    /* 0061a893: mov edx, 1 */ r_edx = 0x1u;
    /* 0061a898: jmp 0x61a89c */ goto L_0061a89c;
L_0061a89a:; BB(0x0061a89a);
    /* 0061a89a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_0061a89c:; BB(0x0061a89c);
    /* 0061a89c: mov eax, dword ptr [0xa8ebc0] */ r_eax = R32((u32)(0xa8ebc0u));
    /* 0061a8a1: mov ecx, dword ptr [eax + edx*4] */ r_ecx = R32((u32)(r_eax+r_edx*4));
    /* 0061a8a4: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x61a8a9u); f_00829cc8();
    /* 0061a8a9: mov eax, dword ptr [edi + 0xac] */ r_eax = R32((u32)(r_edi+0xacu));
    /* 0061a8af: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061a8b1: jne 0x61a92d */ if (!fZ) goto L_0061a92d;
L_0061a8b3:; BB(0x0061a8b3);
    /* 0061a8b3: mov edi, dword ptr [edi + 0x34] */ r_edi = R32((u32)(r_edi+0x34u));
    /* 0061a8b6: lea ecx, [edi + 8] */ r_ecx = (u32)(r_edi+0x8u);
    /* 0061a8b9: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x61a8beu); f_0082d838();
    /* 0061a8be: push dword ptr [edi + 4] */ { u32 v = R32((u32)(r_edi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061a8c1: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x61a8c6u); f_008321d8();
    /* 0061a8c6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061a8c7: mov edi, dword ptr [edi + 0x2c] */ r_edi = R32((u32)(r_edi+0x2cu));
    /* 0061a8ca: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x61a8cfu); f_0082d7b0();
    /* 0061a8cf: lea ecx, [edi + 8] */ r_ecx = (u32)(r_edi+0x8u);
    /* 0061a8d2: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x61a8d7u); f_0082d838();
    /* 0061a8d7: push dword ptr [edi + 4] */ { u32 v = R32((u32)(r_edi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061a8da: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x61a8dfu); f_008321d8();
    /* 0061a8df: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061a8e0: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x61a8e5u); f_0082da80();
    /* 0061a8e5: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x61a8eau); f_0082dbac();
    /* 0061a8ea: mov edi, dword ptr [edi + 0x30] */ r_edi = R32((u32)(r_edi+0x30u));
    /* 0061a8ed: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x61a8f2u); f_0082d7b0();
    /* 0061a8f2: lea ecx, [edi + 8] */ r_ecx = (u32)(r_edi+0x8u);
    /* 0061a8f5: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x61a8fau); f_0082d838();
    /* 0061a8fa: push dword ptr [edi + 4] */ { u32 v = R32((u32)(r_edi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061a8fd: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x61a902u); f_008321d8();
    /* 0061a902: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061a903: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x61a908u); f_0082da80();
    /* 0061a908: mov edi, dword ptr [edi + 0x30] */ r_edi = R32((u32)(r_edi+0x30u));
    /* 0061a90b: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x61a910u); f_0082d7b0();
    /* 0061a910: lea ecx, [edi + 8] */ r_ecx = (u32)(r_edi+0x8u);
    /* 0061a913: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x61a918u); f_0082d838();
    /* 0061a918: push dword ptr [edi + 4] */ { u32 v = R32((u32)(r_edi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061a91b: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x61a920u); f_008321d8();
    /* 0061a920: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061a921: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x61a926u); f_0082da80();
    /* 0061a926: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x61a92bu); f_0082dab0();
    /* 0061a92b: jmp 0x61a941 */ goto L_0061a941;
L_0061a92d:; BB(0x0061a92d);
    /* 0061a92d: push dword ptr [edi + 0xb0] */ { u32 v = R32((u32)(r_edi+0xb0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061a933: mov ecx, dword ptr [edi + 0x34] */ r_ecx = R32((u32)(r_edi+0x34u));
    /* 0061a936: mov edx, dword ptr [edi + 0xbc] */ r_edx = R32((u32)(r_edi+0xbcu));
    /* 0061a93c: call 0x83bd00 */ r_esp -= 4; W32(r_esp, 0x61a941u); f_0083bd00();
L_0061a941:; BB(0x0061a941);
    /* 0061a941: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x61a946u); f_0082da80();
L_0061a946:; BB(0x0061a946);
    /* 0061a946: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0061a947: ret  */ FN_RET(0x0061a840); r_esp += 4; return;
}

void f_0061a948(void) /* sub_61A948 */
{
    FN_ENTER(0x0061a948);
    /* 0061a948: mov eax, dword ptr [0xa8ebc0] */ r_eax = R32((u32)(0xa8ebc0u));
    /* 0061a94d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061a94f: je 0x61a974 */ if (fZ) goto L_0061a974;
L_0061a951:; BB(0x0061a951);
    /* 0061a951: push dword ptr [eax + 4] */ { u32 v = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061a954: call 0x800b5c */ r_esp -= 4; W32(r_esp, 0x61a959u); f_00800b5c();
    /* 0061a959: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061a95a: mov eax, dword ptr [0xa8ebc0] */ r_eax = R32((u32)(0xa8ebc0u));
    /* 0061a95f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061a961: je 0x61a974 */ if (fZ) goto L_0061a974;
L_0061a963:; BB(0x0061a963);
    /* 0061a963: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061a964: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x61a969u); f_00857e98();
    /* 0061a969: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061a96a: mov dword ptr [0xa8ebc0], 0 */ W32((u32)(0xa8ebc0u), 0x0u);
L_0061a974:; BB(0x0061a974);
    /* 0061a974: mov ecx, dword ptr [0xa8ebc4] */ r_ecx = R32((u32)(0xa8ebc4u));
    /* 0061a97a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0061a97c: je 0x61a991 */ if (fZ) goto L_0061a991;
L_0061a97e:; BB(0x0061a97e);
    /* 0061a97e: je 0x61a987 */ if (fZ) goto L_0061a987;
L_0061a980:; BB(0x0061a980);
    /* 0061a980: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0061a982: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x61a987u); f_004066a8();
L_0061a987:; BB(0x0061a987);
    /* 0061a987: mov dword ptr [0xa8ebc4], 0 */ W32((u32)(0xa8ebc4u), 0x0u);
L_0061a991:; BB(0x0061a991);
    /* 0061a991: ret  */ FN_RET(0x0061a948); r_esp += 4; return;
}

void f_0061a994(void)
{
    FN_ENTER(0x0061a994);
    /* 0061a994: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061a995: mov ebp, esp */ r_ebp = r_esp;
    /* 0061a997: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0061a999: push 0x8e1ac8 */ { u32 v = 0x8e1ac8u; r_esp -= 4; W32(r_esp, v); }
    /* 0061a99e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0061a9a4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061a9a5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0061a9ac: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061a9af: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0061a9b2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0061a9b5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0061a9b8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0061a9bb: push 0xd4 */ { u32 v = 0xd4u; r_esp -= 4; W32(r_esp, v); }
    /* 0061a9c0: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0061a9c7: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x61a9ccu); f_005caba4();
    /* 0061a9cc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061a9cd: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0061a9d0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061a9d2: je 0x61aa0b */ if (fZ) goto L_0061aa0b;
L_0061a9d4:; BB(0x0061a9d4);
    /* 0061a9d4: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0061a9db: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0061a9e2: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061a9e5: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061a9eb: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061a9ee: call 0x61aa10 */ r_esp -= 4; W32(r_esp, 0x61a9f3u); f_0061aa10();
    /* 0061a9f3: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061a9f6: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0061a9fd:; BB(0x0061a9fd);
    /* 0061a9fd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061aa00: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0061aa07: mov esp, ebp */ r_esp = r_ebp;
    /* 0061aa09: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061aa0a: ret  */ FN_RET(0x0061a994); r_esp += 4; return;
L_0061aa0b:; BB(0x0061aa0b);
    /* 0061aa0b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0061aa0d: jmp 0x61a9fd */ goto L_0061a9fd;
}

void f_0061aa10(void) /* sub_61AA10 */
{
    FN_ENTER(0x0061aa10);
    /* 0061aa10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061aa11: mov ebp, esp */ r_ebp = r_esp;
    /* 0061aa13: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0061aa15: push 0x8e1ae4 */ { u32 v = 0x8e1ae4u; r_esp -= 4; W32(r_esp, v); }
    /* 0061aa1a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0061aa20: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061aa21: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0061aa28: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061aa2b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0061aa2e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0061aa31: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0061aa34: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0061aa37: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0061aa3a: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061aa3d: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0061aa40: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0061aa43: call 0x619df0 */ r_esp -= 4; W32(r_esp, 0x61aa48u); f_00619df0();
    /* 0061aa48: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0061aa4f: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0061aa52: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0061aa55: mov dword ptr [ecx], 0xb26e40 */ W32((u32)(r_ecx), 0xb26e40u);
    /* 0061aa5b: mov eax, dword ptr [0x9c5060] */ r_eax = R32((u32)(0x9c5060u));
    /* 0061aa60: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061aa61: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0061aa64: call dword ptr [0xb26e54] */ { u32 t = R32((u32)(0xb26e54u)); r_esp -= 4; W32(r_esp, 0x61aa6au); call_ind(t); }
    /* 0061aa6a: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0061aa6d: mov edi, dword ptr [0xa8ebc4] */ r_edi = R32((u32)(0xa8ebc4u));
    /* 0061aa73: mov ebx, dword ptr [0xa8ebc0] */ r_ebx = R32((u32)(0xa8ebc0u));
    /* 0061aa79: fld dword ptr [0x930970] */ FPUSH(R_F32((u32)(0x930970u)));
    /* 0061aa7f: mov eax, dword ptr [edi + 0x42c] */ r_eax = R32((u32)(r_edi+0x42cu));
    /* 0061aa85: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 0061aa88: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0061aa8a: push 0x9c5064 */ { u32 v = 0x9c5064u; r_esp -= 4; W32(r_esp, v); }
    /* 0061aa8f: mov dword ptr [ecx + 0x34], edx */ W32((u32)(r_ecx+0x34u), r_edx);
    /* 0061aa92: mov esi, dword ptr [ebx + 4] */ r_esi = R32((u32)(r_ebx+0x4u));
    /* 0061aa95: mov dword ptr [ecx + 0x24], esi */ W32((u32)(r_ecx+0x24u), r_esi);
    /* 0061aa98: mov eax, dword ptr [edi + 0x430] */ r_eax = R32((u32)(r_edi+0x430u));
    /* 0061aa9e: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 0061aaa1: mov dword ptr [ecx + 0xbc], eax */ W32((u32)(r_ecx+0xbcu), r_eax);
    /* 0061aaa7: fild dword ptr [eax + 4] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x4u)));
    /* 0061aaaa: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0061aaad: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0061aab0: fadd dword ptr [edx*4 + 0x930968] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x930968u));
    /* 0061aab7: fadd dword ptr [0x930974] */ ST(0) = ST(0) + R_F32((u32)(0x930974u));
    /* 0061aabd: fst dword ptr [ecx + 0xb4] */ W_F32((u32)(r_ecx+0xb4u), ST(0));
    /* 0061aac3: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 0061aac5: fstp dword ptr [ecx + 0xb8] */ W_F32((u32)(r_ecx+0xb8u), ST(0)); FPOP();
    /* 0061aacb: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x61aad0u); f_007b9a88();
    /* 0061aad0: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0061aad3: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x61aad8u); f_007b999c();
    /* 0061aad8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061aad9: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0061aadc: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x61aae1u); f_007b4f54();
    /* 0061aae1: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0061aae4: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0061aae6: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x61aae9u); call_ind(t); }
    /* 0061aae9: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0061aaec: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061aaef: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0061aaf2: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0061aaf5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061aaf8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0061aaff: mov esp, ebp */ r_esp = r_ebp;
    /* 0061ab01: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061ab02: ret 8 */ FN_RET(0x0061aa10); r_esp += 12; return;
}

void f_0061ab08(void) /* sub_61AB08 */
{
    FN_ENTER(0x0061ab08);
    /* 0061ab08: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061ab09: mov ebp, esp */ r_ebp = r_esp;
    /* 0061ab0b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0061ab0d: push 0x8e1b0c */ { u32 v = 0x8e1b0cu; r_esp -= 4; W32(r_esp, v); }
    /* 0061ab12: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0061ab18: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061ab19: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0061ab20: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061ab23: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0061ab26: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0061ab29: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0061ab2c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0061ab2f: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 0061ab34: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0061ab3b: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x61ab40u); f_008581c5();
    /* 0061ab40: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061ab41: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0061ab44: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061ab46: je 0x61abc4 */ if (fZ) goto L_0061abc4;
L_0061ab48:; BB(0x0061ab48);
    /* 0061ab48: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0061ab4f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0061ab56: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061ab59: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0061ab5b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061ab5c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061ab5d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061ab5e: push 0x9c5050 */ { u32 v = 0x9c5050u; r_esp -= 4; W32(r_esp, v); }
    /* 0061ab63: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0061ab65: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x61ab6au); f_005b7a84();
    /* 0061ab6a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061ab6d: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0061ab74:; BB(0x0061ab74);
    /* 0061ab74: mov dword ptr [0xa8ebc4], eax */ W32((u32)(0xa8ebc4u), r_eax);
    /* 0061ab79: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0061ab80: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0061ab82: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x61ab87u); f_008581c5();
    /* 0061ab87: mov edx, dword ptr [0xa8ebc4] */ r_edx = R32((u32)(0xa8ebc4u));
    /* 0061ab8d: mov ecx, dword ptr [edx + 0x42c] */ r_ecx = R32((u32)(r_edx+0x42cu));
    /* 0061ab93: mov ebx, dword ptr [ecx + 0xc] */ r_ebx = R32((u32)(r_ecx+0xcu));
    /* 0061ab96: mov dword ptr [0xa8ebc0], eax */ W32((u32)(0xa8ebc0u), r_eax);
    /* 0061ab9b: mov dword ptr [eax], ebx */ W32((u32)(r_eax), r_ebx);
    /* 0061ab9d: push 0x9309cc */ { u32 v = 0x9309ccu; r_esp -= 4; W32(r_esp, v); }
    /* 0061aba2: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x61aba7u); f_008009dc();
    /* 0061aba7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0061abaa: mov edx, dword ptr [0xa8ebc0] */ r_edx = R32((u32)(0xa8ebc0u));
    /* 0061abb0: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0061abb3: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 0061abb6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061abb9: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0061abc0: mov esp, ebp */ r_esp = r_ebp;
    /* 0061abc2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061abc3: ret  */ FN_RET(0x0061ab08); r_esp += 4; return;
L_0061abc4:; BB(0x0061abc4);
    /* 0061abc4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0061abc6: jmp 0x61ab74 */ goto L_0061ab74;
}

void f_0061abc8(void) /* sub_61ABC8 */
{
    FN_ENTER(0x0061abc8);
    /* 0061abc8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0061abc9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0061abcb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0061abcd: call 0x61abec */ r_esp -= 4; W32(r_esp, 0x61abd2u); f_0061abec();
    /* 0061abd2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0061abd6: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0061abd8: jne 0x61abde */ if (!fZ) goto L_0061abde;
L_0061abda:; BB(0x0061abda);
    /* 0061abda: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0061abdb: ret 4 */ FN_RET(0x0061abc8); r_esp += 8; return;
L_0061abde:; BB(0x0061abde);
    /* 0061abde: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0061abdf: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x61abe4u); f_005c2f74();
    /* 0061abe4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061abe5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0061abe6: ret 4 */ FN_RET(0x0061abc8); r_esp += 8; return;
}

void f_0061abec(void) /* sub_61ABEC */
{
    FN_ENTER(0x0061abec);
    /* 0061abec: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061abed: mov ebp, esp */ r_ebp = r_esp;
    /* 0061abef: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0061abf1: push 0x8e1b28 */ { u32 v = 0x8e1b28u; r_esp -= 4; W32(r_esp, v); }
    /* 0061abf6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0061abfc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061abfd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0061ac04: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061ac07: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0061ac0a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0061ac0d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0061ac10: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0061ac13: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0061ac16: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0061ac1d: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061ac20: mov dword ptr [eax], 0xb26f40 */ W32((u32)(r_eax), 0xb26f40u);
    /* 0061ac26: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061ac27: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x61ac2cu); f_007b4e84();
    /* 0061ac2c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061ac2d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061ac30: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x61ac35u); f_007b9c8c();
    /* 0061ac35: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0061ac3c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061ac3f: call 0x619b10 */ r_esp -= 4; W32(r_esp, 0x61ac44u); f_00619b10();
    /* 0061ac44: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061ac47: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0061ac4e: mov esp, ebp */ r_esp = r_ebp;
    /* 0061ac50: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061ac51: ret  */ FN_RET(0x0061abec); r_esp += 4; return;
}

void f_0061ac54(void) /* sub_61AC54 */
{
    FN_ENTER(0x0061ac54);
    /* 0061ac54: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061ac55: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0061ac57: mov eax, dword ptr [ebp + 0xd0] */ r_eax = R32((u32)(r_ebp+0xd0u));
    /* 0061ac5d: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0061ac5f: jne 0x61ac6d */ if (!fZ) goto L_0061ac6d;
L_0061ac61:; BB(0x0061ac61);
    /* 0061ac61: mov eax, dword ptr [0xa8ebcc] */ r_eax = R32((u32)(0xa8ebccu));
    /* 0061ac66: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0061ac68: mov dword ptr [ebp + 0x24], edx */ W32((u32)(r_ebp+0x24u), r_edx);
L_0061ac6b:; BB(0x0061ac6b);
    /* 0061ac6b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061ac6c: ret  */ FN_RET(0x0061ac54); r_esp += 4; return;
L_0061ac6d:; BB(0x0061ac6d);
    /* 0061ac6d: push 0x45992000 */ { u32 v = 0x45992000u; r_esp -= 4; W32(r_esp, v); }
    /* 0061ac72: mov eax, dword ptr [0xa8ebcc] */ r_eax = R32((u32)(0xa8ebccu));
    /* 0061ac77: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0061ac7a: mov dword ptr [ebp + 0x24], edx */ W32((u32)(r_ebp+0x24u), r_edx);
    /* 0061ac7d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0061ac7f: call 0x6134c8 */ r_esp -= 4; W32(r_esp, 0x61ac84u); f_006134c8();
    /* 0061ac84: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0061ac87: jne 0x61ac6b */ if (!fZ) goto L_0061ac6b;
L_0061ac89:; BB(0x0061ac89);
    /* 0061ac89: mov dword ptr [ebp + 0xac], 1 */ W32((u32)(r_ebp+0xacu), 0x1u);
    /* 0061ac93: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0061ac95: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0061ac97: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061ac99: call 0x7b52c4 */ r_esp -= 4; W32(r_esp, 0x61ac9eu); f_007b52c4();
    /* 0061ac9e: add ebp, 0x38 */ {  u32 a = r_ebp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0061aca1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0061aca3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061aca4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061aca5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061aca6: push 0x479 */ { u32 v = 0x479u; r_esp -= 4; W32(r_esp, v); }
    /* 0061acab: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x61acb0u); f_00814298();
    /* 0061acb0: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0061acb3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061acb4: ret  */ FN_RET(0x0061ac54); r_esp += 4; return;
}

void f_0061acb8(void) /* sub_61ACB8 */
{
    FN_ENTER(0x0061acb8);
    /* 0061acb8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0061acb9: mov edi, ecx */ r_edi = r_ecx;
    /* 0061acbb: mov eax, dword ptr [edi + 0xd0] */ r_eax = R32((u32)(r_edi+0xd0u));
    /* 0061acc1: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0061acc3: jne 0x61acfb */ if (!fZ) goto L_0061acfb;
L_0061acc5:; BB(0x0061acc5);
    /* 0061acc5: mov eax, dword ptr [0xa8ebcc] */ r_eax = R32((u32)(0xa8ebccu));
    /* 0061acca: mov dword ptr [edi + 0xac], 3 */ W32((u32)(r_edi+0xacu), 0x3u);
    /* 0061acd4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0061acd6: mov dword ptr [edi + 0x24], edx */ W32((u32)(r_edi+0x24u), r_edx);
    /* 0061acd9: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0061acdb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061acdd: mov ecx, edi */ r_ecx = r_edi;
    /* 0061acdf: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x61ace4u); f_007b52ec();
    /* 0061ace4: add edi, 0x38 */ {  u32 a = r_edi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0061ace7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0061ace9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061acea: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061aceb: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0061acec: push 0x479 */ { u32 v = 0x479u; r_esp -= 4; W32(r_esp, v); }
    /* 0061acf1: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x61acf6u); f_00814298();
    /* 0061acf6: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_0061acf9:; BB(0x0061acf9);
    /* 0061acf9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0061acfa: ret  */ FN_RET(0x0061acb8); r_esp += 4; return;
L_0061acfb:; BB(0x0061acfb);
    /* 0061acfb: push 0x461c4000 */ { u32 v = 0x461c4000u; r_esp -= 4; W32(r_esp, v); }
    /* 0061ad00: mov eax, dword ptr [0xa8ebcc] */ r_eax = R32((u32)(0xa8ebccu));
    /* 0061ad05: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0061ad08: mov dword ptr [edi + 0x24], edx */ W32((u32)(r_edi+0x24u), r_edx);
    /* 0061ad0b: mov ecx, edi */ r_ecx = r_edi;
    /* 0061ad0d: call 0x6134c8 */ r_esp -= 4; W32(r_esp, 0x61ad12u); f_006134c8();
    /* 0061ad12: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0061ad15: je 0x61acf9 */ if (fZ) goto L_0061acf9;
L_0061ad17:; BB(0x0061ad17);
    /* 0061ad17: mov dword ptr [edi + 0xac], 3 */ W32((u32)(r_edi+0xacu), 0x3u);
    /* 0061ad21: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0061ad23: mov ecx, edi */ r_ecx = r_edi;
    /* 0061ad25: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061ad27: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x61ad2cu); f_007b52ec();
    /* 0061ad2c: add edi, 0x38 */ {  u32 a = r_edi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0061ad2f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0061ad31: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061ad32: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061ad33: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0061ad34: push 0x479 */ { u32 v = 0x479u; r_esp -= 4; W32(r_esp, v); }
    /* 0061ad39: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x61ad3eu); f_00814298();
    /* 0061ad3e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0061ad41: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0061ad42: ret  */ FN_RET(0x0061acb8); r_esp += 4; return;
}

void f_0061ad44(void) /* sub_61AD44 */
{
    FN_ENTER(0x0061ad44);
    /* 0061ad44: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0061ad45: mov esi, ecx */ r_esi = r_ecx;
    /* 0061ad47: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0061ad49: mov ecx, esi */ r_ecx = r_esi;
    /* 0061ad4b: push 0x41a00000 */ { u32 v = 0x41a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0061ad50: push 0x43c80000 */ { u32 v = 0x43c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 0061ad55: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x61ad58u); call_ind(t); }
    /* 0061ad58: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0061ad5a: je 0x61adba */ if (fZ) goto L_0061adba;
L_0061ad5c:; BB(0x0061ad5c);
    /* 0061ad5c: push 0x41f00000 */ { u32 v = 0x41f00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0061ad61: mov ecx, esi */ r_ecx = r_esi;
    /* 0061ad63: call 0x613244 */ r_esp -= 4; W32(r_esp, 0x61ad68u); f_00613244();
    /* 0061ad68: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0061ad6a: je 0x61adba */ if (fZ) goto L_0061adba;
L_0061ad6c:; BB(0x0061ad6c);
    /* 0061ad6c: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x61ad71u); f_0082d7b0();
    /* 0061ad71: lea ecx, [esi + 0x38] */ r_ecx = (u32)(r_esi+0x38u);
    /* 0061ad74: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x61ad79u); f_0082d838();
    /* 0061ad79: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 0061ad7c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0061ad7e: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x61ad83u); f_0082d8bc();
    /* 0061ad83: mov ecx, dword ptr [esi + 0x24] */ r_ecx = R32((u32)(r_esi+0x24u));
    /* 0061ad86: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x61ad8bu); f_00829cc8();
    /* 0061ad8b: mov edx, dword ptr [esi + 0xbc] */ r_edx = R32((u32)(r_esi+0xbcu));
    /* 0061ad91: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061ad93: je 0x61adbc */ if (fZ) goto L_0061adbc;
L_0061ad95:; BB(0x0061ad95);
    /* 0061ad95: fld dword ptr [esi + 0xb0] */ FPUSH(R_F32((u32)(r_esi+0xb0u)));
    /* 0061ad9b: fcomp dword ptr [0x9309f8] */ fx_compare(ST(0), R_F32((u32)(0x9309f8u))); FPOP();
    /* 0061ada1: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0061ada3: mov ecx, dword ptr [esi + 0xb0] */ r_ecx = R32((u32)(r_esi+0xb0u));
    /* 0061ada9: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0061adaa: je 0x61adbc */ if (fZ) goto L_0061adbc;
L_0061adac:; BB(0x0061adac);
    /* 0061adac: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061adad: mov ecx, dword ptr [esi + 0x34] */ r_ecx = R32((u32)(r_esi+0x34u));
    /* 0061adb0: call 0x83bd00 */ r_esp -= 4; W32(r_esp, 0x61adb5u); f_0083bd00();
L_0061adb5:; BB(0x0061adb5);
    /* 0061adb5: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x61adbau); f_0082da80();
L_0061adba:; BB(0x0061adba);
    /* 0061adba: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0061adbb: ret  */ FN_RET(0x0061ad44); r_esp += 4; return;
L_0061adbc:; BB(0x0061adbc);
    /* 0061adbc: mov ecx, dword ptr [0xa8ebd4] */ r_ecx = R32((u32)(0xa8ebd4u));
    /* 0061adc2: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x61adc7u); f_00831758();
    /* 0061adc7: mov ecx, dword ptr [0xa8ebd4] */ r_ecx = R32((u32)(0xa8ebd4u));
    /* 0061adcd: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061add0: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x61add5u); f_00831758();
    /* 0061add5: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x61addau); f_0082dbac();
    /* 0061adda: mov ecx, dword ptr [0xa8ebd4] */ r_ecx = R32((u32)(0xa8ebd4u));
    /* 0061ade0: add ecx, 0x70 */ {  u32 a = r_ecx; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061ade3: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x61ade8u); f_00831758();
    /* 0061ade8: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x61adedu); f_0082dab0();
    /* 0061aded: jmp 0x61adb5 */ goto L_0061adb5;
}

void f_0061adf0(void) /* sub_61ADF0 */
{
    FN_ENTER(0x0061adf0);
    /* 0061adf0: mov eax, dword ptr [0xa8ebd4] */ r_eax = R32((u32)(0xa8ebd4u));
    /* 0061adf5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061adf7: je 0x61ae0a */ if (fZ) goto L_0061ae0a;
L_0061adf9:; BB(0x0061adf9);
    /* 0061adf9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061adfa: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x61adffu); f_00857e98();
    /* 0061adff: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061ae00: mov dword ptr [0xa8ebd4], 0 */ W32((u32)(0xa8ebd4u), 0x0u);
L_0061ae0a:; BB(0x0061ae0a);
    /* 0061ae0a: mov eax, dword ptr [0xa8ebcc] */ r_eax = R32((u32)(0xa8ebccu));
    /* 0061ae0f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061ae11: je 0x61ae36 */ if (fZ) goto L_0061ae36;
L_0061ae13:; BB(0x0061ae13);
    /* 0061ae13: push dword ptr [eax + 4] */ { u32 v = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061ae16: call 0x800b5c */ r_esp -= 4; W32(r_esp, 0x61ae1bu); f_00800b5c();
    /* 0061ae1b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061ae1c: mov eax, dword ptr [0xa8ebcc] */ r_eax = R32((u32)(0xa8ebccu));
    /* 0061ae21: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061ae23: je 0x61ae36 */ if (fZ) goto L_0061ae36;
L_0061ae25:; BB(0x0061ae25);
    /* 0061ae25: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061ae26: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x61ae2bu); f_00857e98();
    /* 0061ae2b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061ae2c: mov dword ptr [0xa8ebcc], 0 */ W32((u32)(0xa8ebccu), 0x0u);
L_0061ae36:; BB(0x0061ae36);
    /* 0061ae36: mov ecx, dword ptr [0xa8ebd0] */ r_ecx = R32((u32)(0xa8ebd0u));
    /* 0061ae3c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0061ae3e: je 0x61ae53 */ if (fZ) goto L_0061ae53;
L_0061ae40:; BB(0x0061ae40);
    /* 0061ae40: je 0x61ae49 */ if (fZ) goto L_0061ae49;
L_0061ae42:; BB(0x0061ae42);
    /* 0061ae42: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0061ae44: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x61ae49u); f_004066a8();
L_0061ae49:; BB(0x0061ae49);
    /* 0061ae49: mov dword ptr [0xa8ebd0], 0 */ W32((u32)(0xa8ebd0u), 0x0u);
L_0061ae53:; BB(0x0061ae53);
    /* 0061ae53: ret  */ FN_RET(0x0061adf0); r_esp += 4; return;
}

void f_0061ae54(void)
{
    FN_ENTER(0x0061ae54);
    /* 0061ae54: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061ae55: mov ebp, esp */ r_ebp = r_esp;
    /* 0061ae57: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0061ae59: push 0x8e1b50 */ { u32 v = 0x8e1b50u; r_esp -= 4; W32(r_esp, v); }
    /* 0061ae5e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0061ae64: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061ae65: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0061ae6c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061ae6f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0061ae72: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0061ae75: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0061ae78: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0061ae7b: push 0xd4 */ { u32 v = 0xd4u; r_esp -= 4; W32(r_esp, v); }
    /* 0061ae80: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0061ae87: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x61ae8cu); f_005caba4();
    /* 0061ae8c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061ae8d: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0061ae90: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061ae92: je 0x61aecb */ if (fZ) goto L_0061aecb;
L_0061ae94:; BB(0x0061ae94);
    /* 0061ae94: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0061ae9b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0061aea2: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061aea5: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061aeab: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061aeae: call 0x61aed0 */ r_esp -= 4; W32(r_esp, 0x61aeb3u); f_0061aed0();
    /* 0061aeb3: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061aeb6: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0061aebd:; BB(0x0061aebd);
    /* 0061aebd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061aec0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0061aec7: mov esp, ebp */ r_esp = r_ebp;
    /* 0061aec9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061aeca: ret  */ FN_RET(0x0061ae54); r_esp += 4; return;
L_0061aecb:; BB(0x0061aecb);
    /* 0061aecb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0061aecd: jmp 0x61aebd */ goto L_0061aebd;
}

void f_0061aed0(void) /* sub_61AED0 */
{
    FN_ENTER(0x0061aed0);
    /* 0061aed0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061aed1: mov ebp, esp */ r_ebp = r_esp;
    /* 0061aed3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0061aed5: push 0x8e1b6c */ { u32 v = 0x8e1b6cu; r_esp -= 4; W32(r_esp, v); }
    /* 0061aeda: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0061aee0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061aee1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0061aee8: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061aeeb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0061aeee: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0061aef1: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0061aef4: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0061aef7: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0061aefa: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061aefd: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0061af00: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0061af03: call 0x619df0 */ r_esp -= 4; W32(r_esp, 0x61af08u); f_00619df0();
    /* 0061af08: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0061af0f: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0061af12: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0061af15: mov dword ptr [ecx], 0xb26f40 */ W32((u32)(r_ecx), 0xb26f40u);
    /* 0061af1b: mov eax, dword ptr [0x9c5090] */ r_eax = R32((u32)(0x9c5090u));
    /* 0061af20: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061af21: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0061af24: call dword ptr [0xb26f54] */ { u32 t = R32((u32)(0xb26f54u)); r_esp -= 4; W32(r_esp, 0x61af2au); call_ind(t); }
    /* 0061af2a: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0061af2d: mov edi, dword ptr [0xa8ebd0] */ r_edi = R32((u32)(0xa8ebd0u));
    /* 0061af33: mov ebx, dword ptr [0xa8ebcc] */ r_ebx = R32((u32)(0xa8ebccu));
    /* 0061af39: fld dword ptr [0x9309f0] */ FPUSH(R_F32((u32)(0x9309f0u)));
    /* 0061af3f: mov eax, dword ptr [edi + 0x42c] */ r_eax = R32((u32)(r_edi+0x42cu));
    /* 0061af45: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 0061af48: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0061af4a: push 0x9c5094 */ { u32 v = 0x9c5094u; r_esp -= 4; W32(r_esp, v); }
    /* 0061af4f: mov dword ptr [ecx + 0x34], edx */ W32((u32)(r_ecx+0x34u), r_edx);
    /* 0061af52: mov esi, dword ptr [ebx] */ r_esi = R32((u32)(r_ebx));
    /* 0061af54: mov dword ptr [ecx + 0x24], esi */ W32((u32)(r_ecx+0x24u), r_esi);
    /* 0061af57: mov eax, dword ptr [edi + 0x430] */ r_eax = R32((u32)(r_edi+0x430u));
    /* 0061af5d: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 0061af60: mov dword ptr [ecx + 0xbc], eax */ W32((u32)(r_ecx+0xbcu), r_eax);
    /* 0061af66: fild dword ptr [eax + 4] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x4u)));
    /* 0061af69: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0061af6c: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0061af6f: fadd dword ptr [edx*4 + 0x9309e8] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x9309e8u));
    /* 0061af76: fadd dword ptr [0x9309f4] */ ST(0) = ST(0) + R_F32((u32)(0x9309f4u));
    /* 0061af7c: fst dword ptr [ecx + 0xb4] */ W_F32((u32)(r_ecx+0xb4u), ST(0));
    /* 0061af82: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 0061af84: fstp dword ptr [ecx + 0xb8] */ W_F32((u32)(r_ecx+0xb8u), ST(0)); FPOP();
    /* 0061af8a: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x61af8fu); f_007b9a88();
    /* 0061af8f: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0061af92: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x61af97u); f_007b999c();
    /* 0061af97: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061af98: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0061af9b: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x61afa0u); f_007b4f54();
    /* 0061afa0: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0061afa3: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0061afa5: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x61afa8u); call_ind(t); }
    /* 0061afa8: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0061afab: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061afae: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0061afb1: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0061afb4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061afb7: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0061afbe: mov esp, ebp */ r_esp = r_ebp;
    /* 0061afc0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061afc1: ret 8 */ FN_RET(0x0061aed0); r_esp += 12; return;
}

void f_0061afc4(void) /* sub_61AFC4 */
{
    FN_ENTER(0x0061afc4);
    /* 0061afc4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061afc5: mov ebp, esp */ r_ebp = r_esp;
    /* 0061afc7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0061afc9: push 0x8e1b94 */ { u32 v = 0x8e1b94u; r_esp -= 4; W32(r_esp, v); }
    /* 0061afce: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0061afd4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061afd5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0061afdc: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061afdf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0061afe2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0061afe5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0061afe8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0061afeb: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 0061aff0: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0061aff7: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x61affcu); f_008581c5();
    /* 0061affc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061affd: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0061b000: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061b002: je 0x61b20f */ if (fZ) goto L_0061b20f;
L_0061b008:; BB(0x0061b008);
    /* 0061b008: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0061b00f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0061b016: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061b019: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0061b01b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061b01c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061b01d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061b01e: push 0x9c5100 */ { u32 v = 0x9c5100u; r_esp -= 4; W32(r_esp, v); }
    /* 0061b023: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0061b025: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x61b02au); f_005b7a84();
    /* 0061b02a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061b02d: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0061b034:; BB(0x0061b034);
    /* 0061b034: mov dword ptr [0xa8ebd0], eax */ W32((u32)(0xa8ebd0u), r_eax);
    /* 0061b039: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0061b040: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0061b042: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x61b047u); f_008581c5();
    /* 0061b047: mov edx, dword ptr [0xa8ebd0] */ r_edx = R32((u32)(0xa8ebd0u));
    /* 0061b04d: mov ecx, dword ptr [edx + 0x42c] */ r_ecx = R32((u32)(r_edx+0x42cu));
    /* 0061b053: mov ebx, dword ptr [ecx + 0xc] */ r_ebx = R32((u32)(r_ecx+0xcu));
    /* 0061b056: mov dword ptr [0xa8ebcc], eax */ W32((u32)(0xa8ebccu), r_eax);
    /* 0061b05b: mov dword ptr [eax], ebx */ W32((u32)(r_eax), r_ebx);
    /* 0061b05d: push 0x930a10 */ { u32 v = 0x930a10u; r_esp -= 4; W32(r_esp, v); }
    /* 0061b062: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x61b067u); f_008009dc();
    /* 0061b067: mov edx, dword ptr [0xa8ebcc] */ r_edx = R32((u32)(0xa8ebccu));
    /* 0061b06d: push 0xa8 */ { u32 v = 0xa8u; r_esp -= 4; W32(r_esp, v); }
    /* 0061b072: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 0061b075: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x61b07au); f_008581c5();
    /* 0061b07a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061b07d: mov edx, dword ptr [0xa8ebd0] */ r_edx = R32((u32)(0xa8ebd0u));
    /* 0061b083: mov dword ptr [0xa8ebd4], eax */ W32((u32)(0xa8ebd4u), r_eax);
    /* 0061b088: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0061b08a: je 0x61b1f8 */ if (fZ) goto L_0061b1f8;
L_0061b090:; BB(0x0061b090);
    /* 0061b090: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0061b092: je 0x61b1f8 */ if (fZ) goto L_0061b1f8;
L_0061b098:; BB(0x0061b098);
    /* 0061b098: mov edx, dword ptr [edx + 0x42c] */ r_edx = R32((u32)(r_edx+0x42cu));
    /* 0061b09e: mov edi, dword ptr [edx + 8] */ r_edi = R32((u32)(r_edx+0x8u));
    /* 0061b0a1: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 0061b0a3: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 0061b0a5: mov edx, dword ptr [edi + 4] */ r_edx = R32((u32)(r_edi+0x4u));
    /* 0061b0a8: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 0061b0ab: mov edx, dword ptr [edi + 8] */ r_edx = R32((u32)(r_edi+0x8u));
    /* 0061b0ae: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
    /* 0061b0b1: mov edx, dword ptr [edi + 0xc] */ r_edx = R32((u32)(r_edi+0xcu));
    /* 0061b0b4: mov dword ptr [eax + 0xc], edx */ W32((u32)(r_eax+0xcu), r_edx);
    /* 0061b0b7: mov edx, dword ptr [edi + 0x10] */ r_edx = R32((u32)(r_edi+0x10u));
    /* 0061b0ba: mov dword ptr [eax + 0x10], edx */ W32((u32)(r_eax+0x10u), r_edx);
    /* 0061b0bd: mov edx, dword ptr [edi + 0x14] */ r_edx = R32((u32)(r_edi+0x14u));
    /* 0061b0c0: mov dword ptr [eax + 0x14], edx */ W32((u32)(r_eax+0x14u), r_edx);
    /* 0061b0c3: mov edx, dword ptr [edi + 0x18] */ r_edx = R32((u32)(r_edi+0x18u));
    /* 0061b0c6: mov dword ptr [eax + 0x18], edx */ W32((u32)(r_eax+0x18u), r_edx);
    /* 0061b0c9: mov edx, dword ptr [edi + 0x1c] */ r_edx = R32((u32)(r_edi+0x1cu));
    /* 0061b0cc: mov dword ptr [eax + 0x1c], edx */ W32((u32)(r_eax+0x1cu), r_edx);
    /* 0061b0cf: mov edx, dword ptr [edi + 0x20] */ r_edx = R32((u32)(r_edi+0x20u));
    /* 0061b0d2: mov dword ptr [eax + 0x20], edx */ W32((u32)(r_eax+0x20u), r_edx);
    /* 0061b0d5: mov edx, dword ptr [edi + 0x24] */ r_edx = R32((u32)(r_edi+0x24u));
    /* 0061b0d8: mov dword ptr [eax + 0x24], edx */ W32((u32)(r_eax+0x24u), r_edx);
    /* 0061b0db: mov edx, dword ptr [edi + 0x28] */ r_edx = R32((u32)(r_edi+0x28u));
    /* 0061b0de: mov dword ptr [eax + 0x28], edx */ W32((u32)(r_eax+0x28u), r_edx);
    /* 0061b0e1: mov edx, dword ptr [edi + 0x2c] */ r_edx = R32((u32)(r_edi+0x2cu));
    /* 0061b0e4: mov dword ptr [eax + 0x2c], edx */ W32((u32)(r_eax+0x2cu), r_edx);
    /* 0061b0e7: mov edx, dword ptr [edi + 0x30] */ r_edx = R32((u32)(r_edi+0x30u));
    /* 0061b0ea: mov dword ptr [eax + 0x30], edx */ W32((u32)(r_eax+0x30u), r_edx);
    /* 0061b0ed: mov edx, dword ptr [edi + 0x34] */ r_edx = R32((u32)(r_edi+0x34u));
    /* 0061b0f0: mov dword ptr [eax + 0x34], edx */ W32((u32)(r_eax+0x34u), r_edx);
    /* 0061b0f3: mov eax, dword ptr [0xa8ebd4] */ r_eax = R32((u32)(0xa8ebd4u));
    /* 0061b0f8: or dword ptr [eax], 0x10 */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 0061b0fb: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0061b0fd: mov ebx, dword ptr [0xa8ebd4] */ r_ebx = R32((u32)(0xa8ebd4u));
    /* 0061b103: mov dword ptr [eax + 0x2c], esi */ W32((u32)(r_eax+0x2cu), r_esi);
    /* 0061b106: mov eax, dword ptr [0xa8ebd0] */ r_eax = R32((u32)(0xa8ebd0u));
    /* 0061b10b: mov eax, dword ptr [eax + 0x42c] */ r_eax = R32((u32)(r_eax+0x42cu));
    /* 0061b111: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 0061b114: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 0061b117: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0061b119: mov dword ptr [ebx + 0x38], eax */ W32((u32)(r_ebx+0x38u), r_eax);
    /* 0061b11c: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 0061b11f: mov dword ptr [ebx + 0x3c], eax */ W32((u32)(r_ebx+0x3cu), r_eax);
    /* 0061b122: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 0061b125: mov dword ptr [ebx + 0x40], eax */ W32((u32)(r_ebx+0x40u), r_eax);
    /* 0061b128: mov eax, dword ptr [ecx + 0xc] */ r_eax = R32((u32)(r_ecx+0xcu));
    /* 0061b12b: mov dword ptr [ebx + 0x44], eax */ W32((u32)(r_ebx+0x44u), r_eax);
    /* 0061b12e: mov eax, dword ptr [ecx + 0x10] */ r_eax = R32((u32)(r_ecx+0x10u));
    /* 0061b131: mov dword ptr [ebx + 0x48], eax */ W32((u32)(r_ebx+0x48u), r_eax);
    /* 0061b134: mov eax, dword ptr [ecx + 0x14] */ r_eax = R32((u32)(r_ecx+0x14u));
    /* 0061b137: mov dword ptr [ebx + 0x4c], eax */ W32((u32)(r_ebx+0x4cu), r_eax);
    /* 0061b13a: mov eax, dword ptr [ecx + 0x18] */ r_eax = R32((u32)(r_ecx+0x18u));
    /* 0061b13d: mov dword ptr [ebx + 0x50], eax */ W32((u32)(r_ebx+0x50u), r_eax);
    /* 0061b140: mov eax, dword ptr [ecx + 0x1c] */ r_eax = R32((u32)(r_ecx+0x1cu));
    /* 0061b143: mov dword ptr [ebx + 0x54], eax */ W32((u32)(r_ebx+0x54u), r_eax);
    /* 0061b146: mov eax, dword ptr [ecx + 0x20] */ r_eax = R32((u32)(r_ecx+0x20u));
    /* 0061b149: mov dword ptr [ebx + 0x58], eax */ W32((u32)(r_ebx+0x58u), r_eax);
    /* 0061b14c: mov eax, dword ptr [ecx + 0x24] */ r_eax = R32((u32)(r_ecx+0x24u));
    /* 0061b14f: mov dword ptr [ebx + 0x5c], eax */ W32((u32)(r_ebx+0x5cu), r_eax);
    /* 0061b152: mov eax, dword ptr [ecx + 0x28] */ r_eax = R32((u32)(r_ecx+0x28u));
    /* 0061b155: mov dword ptr [ebx + 0x60], eax */ W32((u32)(r_ebx+0x60u), r_eax);
    /* 0061b158: mov eax, dword ptr [ecx + 0x2c] */ r_eax = R32((u32)(r_ecx+0x2cu));
    /* 0061b15b: mov edx, dword ptr [0xa8ebd4] */ r_edx = R32((u32)(0xa8ebd4u));
    /* 0061b161: mov dword ptr [ebx + 0x64], eax */ W32((u32)(r_ebx+0x64u), r_eax);
    /* 0061b164: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 0061b167: mov dword ptr [ebx + 0x68], eax */ W32((u32)(r_ebx+0x68u), r_eax);
    /* 0061b16a: mov eax, dword ptr [ecx + 0x34] */ r_eax = R32((u32)(r_ecx+0x34u));
    /* 0061b16d: mov dword ptr [ebx + 0x6c], eax */ W32((u32)(r_ebx+0x6cu), r_eax);
    /* 0061b170: mov eax, dword ptr [0xa8ebd0] */ r_eax = R32((u32)(0xa8ebd0u));
    /* 0061b175: mov dword ptr [edx + 0x68], esi */ W32((u32)(r_edx+0x68u), r_esi);
    /* 0061b178: mov eax, dword ptr [eax + 0x42c] */ r_eax = R32((u32)(r_eax+0x42cu));
    /* 0061b17e: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 0061b181: mov eax, dword ptr [eax + 0x2c] */ r_eax = R32((u32)(r_eax+0x2cu));
    /* 0061b184: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 0061b187: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0061b189: mov dword ptr [edx + 0x70], ecx */ W32((u32)(r_edx+0x70u), r_ecx);
    /* 0061b18c: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0061b18f: mov dword ptr [edx + 0x74], ecx */ W32((u32)(r_edx+0x74u), r_ecx);
    /* 0061b192: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0061b195: mov dword ptr [edx + 0x78], ecx */ W32((u32)(r_edx+0x78u), r_ecx);
    /* 0061b198: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 0061b19b: mov dword ptr [edx + 0x7c], ecx */ W32((u32)(r_edx+0x7cu), r_ecx);
    /* 0061b19e: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 0061b1a1: mov dword ptr [edx + 0x80], ecx */ W32((u32)(r_edx+0x80u), r_ecx);
    /* 0061b1a7: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 0061b1aa: mov dword ptr [edx + 0x84], ecx */ W32((u32)(r_edx+0x84u), r_ecx);
    /* 0061b1b0: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 0061b1b3: mov dword ptr [edx + 0x88], ecx */ W32((u32)(r_edx+0x88u), r_ecx);
    /* 0061b1b9: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 0061b1bc: mov dword ptr [edx + 0x8c], ecx */ W32((u32)(r_edx+0x8cu), r_ecx);
    /* 0061b1c2: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 0061b1c5: mov dword ptr [edx + 0x90], ecx */ W32((u32)(r_edx+0x90u), r_ecx);
    /* 0061b1cb: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 0061b1ce: mov dword ptr [edx + 0x94], ecx */ W32((u32)(r_edx+0x94u), r_ecx);
    /* 0061b1d4: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 0061b1d7: mov dword ptr [edx + 0x98], ecx */ W32((u32)(r_edx+0x98u), r_ecx);
    /* 0061b1dd: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 0061b1e0: mov dword ptr [edx + 0x9c], ecx */ W32((u32)(r_edx+0x9cu), r_ecx);
    /* 0061b1e6: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 0061b1e9: mov dword ptr [edx + 0xa0], ecx */ W32((u32)(r_edx+0xa0u), r_ecx);
    /* 0061b1ef: mov eax, dword ptr [eax + 0x34] */ r_eax = R32((u32)(r_eax+0x34u));
    /* 0061b1f2: mov dword ptr [edx + 0xa4], eax */ W32((u32)(r_edx+0xa4u), r_eax);
L_0061b1f8:; BB(0x0061b1f8);
    /* 0061b1f8: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0061b1fb: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0061b1fe: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0061b201: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061b204: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0061b20b: mov esp, ebp */ r_esp = r_ebp;
    /* 0061b20d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061b20e: ret  */ FN_RET(0x0061afc4); r_esp += 4; return;
L_0061b20f:; BB(0x0061b20f);
    /* 0061b20f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0061b211: jmp 0x61b034 */ goto L_0061b034;
}

