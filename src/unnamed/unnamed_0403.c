#include "protos.h"

void f_00403018(void) /* sub_403018 */
{
    FN_ENTER(0x00403018);
    /* 00403018: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00403019: mov ebp, esp */ r_ebp = r_esp;
    /* 0040301b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0040301d: push 0x8cc0ec */ { u32 v = 0x8cc0ecu; r_esp -= 4; W32(r_esp, v); }
    /* 00403022: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00403028: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00403029: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00403030: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00403033: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00403036: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00403039: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0040303c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0040303f: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00403042: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00403045: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x40304au); f_008193cc();
    /* 0040304a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00403051: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00403054: mov dword ptr [edx], 0xaf2230 */ W32((u32)(r_edx), 0xaf2230u);
    /* 0040305a: mov eax, dword ptr [0x9a2e88] */ r_eax = R32((u32)(0x9a2e88u));
    /* 0040305f: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00403062: call 0x70d510 */ r_esp -= 4; W32(r_esp, 0x403067u); f_0070d510();
    /* 00403067: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0040306a: call 0x4057f4 */ r_esp -= 4; W32(r_esp, 0x40306fu); f_004057f4();
    /* 0040306f: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00403072: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00403075: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0040307c: mov esp, ebp */ r_esp = r_ebp;
    /* 0040307e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040307f: ret 4 */ FN_RET(0x00403018); r_esp += 8; return;
}

void f_00403084(void) /* sub_403084 */
{
    FN_ENTER(0x00403084);
    /* 00403084: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00403085: mov esi, ecx */ r_esi = r_ecx;
    /* 00403087: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 0040308a: mov eax, dword ptr [eax*8 + 0x9a2da4] */ r_eax = R32((u32)(r_eax*8+0x9a2da4u));
    /* 00403091: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00403093: je 0x403099 */ if (fZ) goto L_00403099;
L_00403095:; BB(0x00403095);
    /* 00403095: mov ecx, esi */ r_ecx = r_esi;
    /* 00403097: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x403099u); call_ind(t); }
L_00403099:; BB(0x00403099);
    /* 00403099: mov eax, dword ptr [esi + 0x60] */ r_eax = R32((u32)(r_esi+0x60u));
    /* 0040309c: cmp eax, 0x4b */ {  u32 a = r_eax; u32 b = 0x4bu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040309f: jle 0x4030c4 */ if ((fZ||fS!=fO)) goto L_004030c4;
L_004030a1:; BB(0x004030a1);
    /* 004030a1: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 004030a4: cmp eax, 0x16 */ {  u32 a = r_eax; u32 b = 0x16u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004030a7: je 0x4030c4 */ if (fZ) goto L_004030c4;
L_004030a9:; BB(0x004030a9);
    /* 004030a9: mov dword ptr [esi + 0x1c], 0x16 */ W32((u32)(r_esi+0x1cu), 0x16u);
    /* 004030b0: mov dword ptr [esi + 0x60], 0 */ W32((u32)(r_esi+0x60u), 0x0u);
    /* 004030b7: mov eax, dword ptr [0x9a2e50] */ r_eax = R32((u32)(0x9a2e50u));
    /* 004030bc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004030be: je 0x4030c4 */ if (fZ) goto L_004030c4;
L_004030c0:; BB(0x004030c0);
    /* 004030c0: mov ecx, esi */ r_ecx = r_esi;
    /* 004030c2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4030c4u); call_ind(t); }
L_004030c4:; BB(0x004030c4);
    /* 004030c4: mov edx, dword ptr [esi + 0x7c] */ r_edx = R32((u32)(r_esi+0x7cu));
    /* 004030c7: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004030ca: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004030cc: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004030ce: jg 0x4030d2 */ if ((!fZ&&fS==fO)) goto L_004030d2;
L_004030d0:; BB(0x004030d0);
    /* 004030d0: mov edx, eax */ r_edx = r_eax;
L_004030d2:; BB(0x004030d2);
    /* 004030d2: mov dword ptr [esi + 0x7c], edx */ W32((u32)(r_esi+0x7cu), r_edx);
    /* 004030d5: mov edx, dword ptr [esi + 0x80] */ r_edx = R32((u32)(r_esi+0x80u));
    /* 004030db: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004030de: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004030e0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004030e2: jg 0x4030e6 */ if ((!fZ&&fS==fO)) goto L_004030e6;
L_004030e4:; BB(0x004030e4);
    /* 004030e4: mov edx, eax */ r_edx = r_eax;
L_004030e6:; BB(0x004030e6);
    /* 004030e6: mov dword ptr [esi + 0x80], edx */ W32((u32)(r_esi+0x80u), r_edx);
    /* 004030ec: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004030ed: ret  */ FN_RET(0x00403084); r_esp += 4; return;
}

void f_004030f0(void) /* sub_4030F0 */
{
    FN_ENTER(0x004030f0);
    /* 004030f0: mov eax, dword ptr [ecx + 0x1c] */ r_eax = R32((u32)(r_ecx+0x1cu));
    /* 004030f3: cmp eax, 0x18 */ {  u32 a = r_eax; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004030f6: je 0x4030f9 */ if (fZ) goto L_004030f9;
L_004030f8:; BB(0x004030f8);
    /* 004030f8: ret  */ FN_RET(0x004030f0); r_esp += 4; return;
L_004030f9:; BB(0x004030f9);
    /* 004030f9: call 0x7a93d8 */ r_esp -= 4; W32(r_esp, 0x4030feu); f_007a93d8();
    /* 004030fe: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 00403100: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 00403102: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x403107u); f_00792fe8();
    /* 00403107: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00403109: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0040310b: push 0x3f7fff58 */ { u32 v = 0x3f7fff58u; r_esp -= 4; W32(r_esp, v); }
    /* 00403110: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00403112: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00403113: push 0x43af0000 */ { u32 v = 0x43af0000u; r_esp -= 4; W32(r_esp, v); }
    /* 00403118: push 0x41b80000 */ { u32 v = 0x41b80000u; r_esp -= 4; W32(r_esp, v); }
    /* 0040311d: call 0x7ab554 */ r_esp -= 4; W32(r_esp, 0x403122u); f_007ab554();
    /* 00403122: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00403125: call 0x7a9318 */ r_esp -= 4; W32(r_esp, 0x40312au); f_007a9318();
    /* 0040312a: ret  */ FN_RET(0x004030f0); r_esp += 4; return;
}

void f_0040312c(void) /* sub_40312C */
{
    FN_ENTER(0x0040312c);
    /* 0040312c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0040312d: call 0x6c44bc */ r_esp -= 4; W32(r_esp, 0x403132u); f_006c44bc();
    /* 00403132: mov edi, eax */ r_edi = r_eax;
    /* 00403134: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00403135: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00403137: call 0x82c198 */ r_esp -= 4; W32(r_esp, 0x40313cu); f_0082c198();
    /* 0040313c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040313f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00403141: jne 0x403154 */ if (!fZ) goto L_00403154;
L_00403143:; BB(0x00403143);
    /* 00403143: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00403144: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00403146: call 0x82c16c */ r_esp -= 4; W32(r_esp, 0x40314bu); f_0082c16c();
    /* 0040314b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040314e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00403150: jle 0x40316b */ if ((fZ||fS!=fO)) goto L_0040316b;
L_00403152:; BB(0x00403152);
    /* 00403152: jmp 0x403162 */ goto L_00403162;
L_00403154:; BB(0x00403154);
    /* 00403154: cmp eax, 0xffffff05 */ {  u32 a = r_eax; u32 b = 0xffffff05u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00403159: je 0x403162 */ if (fZ) goto L_00403162;
L_0040315b:; BB(0x0040315b);
    /* 0040315b: mov eax, 1 */ r_eax = 0x1u;
    /* 00403160: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00403161: ret  */ FN_RET(0x0040312c); r_esp += 4; return;
L_00403162:; BB(0x00403162);
    /* 00403162: call 0x6c3f0c */ r_esp -= 4; W32(r_esp, 0x403167u); f_006c3f0c();
    /* 00403167: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00403169: je 0x403172 */ if (fZ) goto L_00403172;
L_0040316b:; BB(0x0040316b);
    /* 0040316b: mov eax, 1 */ r_eax = 0x1u;
    /* 00403170: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00403171: ret  */ FN_RET(0x0040312c); r_esp += 4; return;
L_00403172:; BB(0x00403172);
    /* 00403172: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00403174: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00403175: ret  */ FN_RET(0x0040312c); r_esp += 4; return;
}

void f_00403178(void) /* sub_403178 */
{
    FN_ENTER(0x00403178);
    /* 00403178: call 0x6c44bc */ r_esp -= 4; W32(r_esp, 0x40317du); f_006c44bc();
    /* 0040317d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040317e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00403180: call 0x82c198 */ r_esp -= 4; W32(r_esp, 0x403185u); f_0082c198();
    /* 00403185: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00403187: mov eax, 0 */ r_eax = 0x0u;
    /* 0040318c: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0040318f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00403192: ret  */ FN_RET(0x00403178); r_esp += 4; return;
}

void f_00403194(void) /* sub_403194 */
{
    FN_ENTER(0x00403194);
    /* 00403194: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00403195: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00403196: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00403197: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00403198: mov edi, ecx */ r_edi = r_ecx;
    /* 0040319a: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
    /* 0040319e: mov ebp, dword ptr [esp + 0x20] */ r_ebp = R32((u32)(r_esp+0x20u));
    /* 004031a2: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 004031a6: push 0x1d */ { u32 v = 0x1du; r_esp -= 4; W32(r_esp, v); }
    /* 004031a8: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x4031adu); f_00792fe8();
    /* 004031ad: mov esi, eax */ r_esi = r_eax;
    /* 004031af: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004031b2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004031b4: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004031b6: jl 0x4031c3 */ if ((fS!=fO)) goto L_004031c3;
L_004031b8:; BB(0x004031b8);
    /* 004031b8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004031b9: push 0x1d */ { u32 v = 0x1du; r_esp -= 4; W32(r_esp, v); }
    /* 004031bb: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x4031c0u); f_00792fe8();
    /* 004031c0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004031c3:; BB(0x004031c3);
    /* 004031c3: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004031c5: jl 0x4031d2 */ if ((fS!=fO)) goto L_004031d2;
L_004031c7:; BB(0x004031c7);
    /* 004031c7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004031c8: push 0x1d */ { u32 v = 0x1du; r_esp -= 4; W32(r_esp, v); }
    /* 004031ca: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x4031cfu); f_00792fe8();
    /* 004031cf: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004031d2:; BB(0x004031d2);
    /* 004031d2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004031d4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004031d5: mov ecx, edi */ r_ecx = r_edi;
    /* 004031d7: push dword ptr [esp + 0x20] */ { u32 v = R32((u32)(r_esp+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 004031db: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004031dc: call 0x402f0c */ r_esp -= 4; W32(r_esp, 0x4031e1u); f_00402f0c();
    /* 004031e1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004031e2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004031e3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004031e4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004031e5: ret 0x10 */ FN_RET(0x00403194); r_esp += 20; return;
}

void f_004031e8(void) /* sub_4031E8 */
{
    FN_ENTER(0x004031e8);
    /* 004031e8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004031e9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004031ea: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004031eb: mov edi, ecx */ r_edi = r_ecx;
    /* 004031ed: add dword ptr [edi + 0x60], 1 */ { u32 ad = (u32)(r_edi+0x60u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 004031f1: call 0x407734 */ r_esp -= 4; W32(r_esp, 0x4031f6u); f_00407734();
    /* 004031f6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004031f8: jne 0x4031fe */ if (!fZ) goto L_004031fe;
L_004031fa:; BB(0x004031fa);
    /* 004031fa: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004031fb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004031fc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004031fd: ret  */ FN_RET(0x004031e8); r_esp += 4; return;
L_004031fe:; BB(0x004031fe);
    /* 004031fe: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00403200: call 0x82c204 */ r_esp -= 4; W32(r_esp, 0x403205u); f_0082c204();
    /* 00403205: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00403206: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00403208: je 0x4031fa */ if (fZ) goto L_004031fa;
L_0040320a:; BB(0x0040320a);
    /* 0040320a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040320c: mov esi, 0x16 */ r_esi = 0x16u;
    /* 00403211: call 0x7083d4 */ r_esp -= 4; W32(r_esp, 0x403216u); f_007083d4();
    /* 00403216: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00403217: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00403219: je 0x4032c2 */ if (fZ) goto L_004032c2;
L_0040321f:; BB(0x0040321f);
    /* 0040321f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00403221: call 0x82c1e0 */ r_esp -= 4; W32(r_esp, 0x403226u); f_0082c1e0();
    /* 00403226: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00403227: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00403229: jne 0x4032c2 */ if (!fZ) goto L_004032c2;
L_0040322f:; BB(0x0040322f);
    /* 0040322f: call 0x407734 */ r_esp -= 4; W32(r_esp, 0x403234u); f_00407734();
    /* 00403234: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00403236: je 0x4032c2 */ if (fZ) goto L_004032c2;
L_0040323c:; BB(0x0040323c);
    /* 0040323c: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 00403241: mov dword ptr [edi + 0x34], eax */ W32((u32)(r_edi+0x34u), r_eax);
    /* 00403244: mov dword ptr [edi + 0x38], eax */ W32((u32)(r_edi+0x38u), r_eax);
    /* 00403247: mov dword ptr [edi + 0x3c], eax */ W32((u32)(r_edi+0x3cu), r_eax);
    /* 0040324a: mov dword ptr [edi + 0x40], eax */ W32((u32)(r_edi+0x40u), r_eax);
    /* 0040324d: mov dword ptr [edi + 0x44], eax */ W32((u32)(r_edi+0x44u), r_eax);
    /* 00403250: mov dword ptr [edi + 0x48], eax */ W32((u32)(r_edi+0x48u), r_eax);
    /* 00403253: mov dword ptr [edi + 0x4c], eax */ W32((u32)(r_edi+0x4cu), r_eax);
    /* 00403256: mov dword ptr [edi + 0x50], eax */ W32((u32)(r_edi+0x50u), r_eax);
    /* 00403259: mov dword ptr [edi + 0x54], eax */ W32((u32)(r_edi+0x54u), r_eax);
    /* 0040325c: call 0x40312c */ r_esp -= 4; W32(r_esp, 0x403261u); f_0040312c();
    /* 00403261: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00403263: je 0x403270 */ if (fZ) goto L_00403270;
L_00403265:; BB(0x00403265);
    /* 00403265: mov dword ptr [edi + 0x34], 0 */ W32((u32)(r_edi+0x34u), 0x0u);
    /* 0040326c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0040326e: jmp 0x40328a */ goto L_0040328a;
L_00403270:; BB(0x00403270);
    /* 00403270: call 0x403178 */ r_esp -= 4; W32(r_esp, 0x403275u); f_00403178();
    /* 00403275: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00403277: je 0x403287 */ if (fZ) goto L_00403287;
L_00403279:; BB(0x00403279);
    /* 00403279: mov dword ptr [edi + 0x34], 1 */ W32((u32)(r_edi+0x34u), 0x1u);
    /* 00403280: mov eax, 1 */ r_eax = 0x1u;
    /* 00403285: jmp 0x40328a */ goto L_0040328a;
L_00403287:; BB(0x00403287);
    /* 00403287: mov eax, dword ptr [edi + 0x34] */ r_eax = R32((u32)(r_edi+0x34u));
L_0040328a:; BB(0x0040328a);
    /* 0040328a: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040328d: je 0x403324 */ if (fZ) goto L_00403324;
L_00403293:; BB(0x00403293);
    /* 00403293: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_00403295:; BB(0x00403295);
    /* 00403295: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00403296: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x40329bu); f_0061cdb0();
    /* 0040329b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0040329c: mov eax, dword ptr [edi + esi*8 + 0x38] */ r_eax = R32((u32)(r_edi+r_esi*8+0x38u));
    /* 004032a0: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004032a3: je 0x4032f9 */ if (fZ) goto L_004032f9;
L_004032a5:; BB(0x004032a5);
    /* 004032a5: mov eax, dword ptr [edi + esi*8 + 0x3c] */ r_eax = R32((u32)(r_edi+r_esi*8+0x3cu));
    /* 004032a9: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004032ac: je 0x4032ce */ if (fZ) goto L_004032ce;
L_004032ae:; BB(0x004032ae);
    /* 004032ae: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004032b1: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004032b4: jl 0x403295 */ if ((fS!=fO)) goto L_00403295;
L_004032b6:; BB(0x004032b6);
    /* 004032b6: mov dword ptr [edi + 0x24], 1 */ W32((u32)(r_edi+0x24u), 0x1u);
    /* 004032bd: mov esi, 1 */ r_esi = 0x1u;
L_004032c2:; BB(0x004032c2);
    /* 004032c2: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004032c3: mov ecx, edi */ r_ecx = r_edi;
    /* 004032c5: call 0x4033c4 */ r_esp -= 4; W32(r_esp, 0x4032cau); f_004033c4();
    /* 004032ca: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004032cb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004032cc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004032cd: ret  */ FN_RET(0x004031e8); r_esp += 4; return;
L_004032ce:; BB(0x004032ce);
    /* 004032ce: call 0x6c44b4 */ r_esp -= 4; W32(r_esp, 0x4032d3u); f_006c44b4();
    /* 004032d3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004032d4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004032d6: call 0x82c198 */ r_esp -= 4; W32(r_esp, 0x4032dbu); f_0082c198();
    /* 004032db: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004032de: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004032e0: jne 0x4032e9 */ if (!fZ) goto L_004032e9;
L_004032e2:; BB(0x004032e2);
    /* 004032e2: mov eax, 1 */ r_eax = 0x1u;
    /* 004032e7: jmp 0x4032eb */ goto L_004032eb;
L_004032e9:; BB(0x004032e9);
    /* 004032e9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004032eb:; BB(0x004032eb);
    /* 004032eb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004032ed: je 0x4032ae */ if (fZ) goto L_004032ae;
L_004032ef:; BB(0x004032ef);
    /* 004032ef: mov dword ptr [edi + esi*8 + 0x3c], 1 */ W32((u32)(r_edi+r_esi*8+0x3cu), 0x1u);
    /* 004032f7: jmp 0x4032ae */ goto L_004032ae;
L_004032f9:; BB(0x004032f9);
    /* 004032f9: call 0x6c44ac */ r_esp -= 4; W32(r_esp, 0x4032feu); f_006c44ac();
    /* 004032fe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004032ff: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00403301: call 0x82c198 */ r_esp -= 4; W32(r_esp, 0x403306u); f_0082c198();
    /* 00403306: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00403309: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040330b: jne 0x403314 */ if (!fZ) goto L_00403314;
L_0040330d:; BB(0x0040330d);
    /* 0040330d: mov eax, 1 */ r_eax = 0x1u;
    /* 00403312: jmp 0x403316 */ goto L_00403316;
L_00403314:; BB(0x00403314);
    /* 00403314: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00403316:; BB(0x00403316);
    /* 00403316: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00403318: je 0x4032a5 */ if (fZ) goto L_004032a5;
L_0040331a:; BB(0x0040331a);
    /* 0040331a: mov dword ptr [edi + esi*8 + 0x38], 1 */ W32((u32)(r_edi+r_esi*8+0x38u), 0x1u);
    /* 00403322: jmp 0x4032a5 */ goto L_004032a5;
L_00403324:; BB(0x00403324);
    /* 00403324: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 00403327: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_00403329:; BB(0x00403329);
    /* 00403329: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0040332a: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x40332fu); f_0061cdb0();
    /* 0040332f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00403330: call 0x6c44ac */ r_esp -= 4; W32(r_esp, 0x403335u); f_006c44ac();
    /* 00403335: mov ebx, eax */ r_ebx = r_eax;
    /* 00403337: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00403338: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040333a: call 0x82c198 */ r_esp -= 4; W32(r_esp, 0x40333fu); f_0082c198();
    /* 0040333f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00403342: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00403344: jne 0x403357 */ if (!fZ) goto L_00403357;
L_00403346:; BB(0x00403346);
    /* 00403346: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00403347: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00403349: call 0x82c16c */ r_esp -= 4; W32(r_esp, 0x40334eu); f_0082c16c();
    /* 0040334e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00403351: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00403353: jle 0x403367 */ if ((fZ||fS!=fO)) goto L_00403367;
L_00403355:; BB(0x00403355);
    /* 00403355: jmp 0x40335e */ goto L_0040335e;
L_00403357:; BB(0x00403357);
    /* 00403357: cmp eax, 0xffffff05 */ {  u32 a = r_eax; u32 b = 0xffffff05u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040335c: jne 0x403367 */ if (!fZ) goto L_00403367;
L_0040335e:; BB(0x0040335e);
    /* 0040335e: call 0x6c41b8 */ r_esp -= 4; W32(r_esp, 0x403363u); f_006c41b8();
    /* 00403363: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00403365: je 0x40336f */ if (fZ) goto L_0040336f;
L_00403367:; BB(0x00403367);
    /* 00403367: mov dword ptr [edi + esi*8 + 0x38], 0 */ W32((u32)(r_edi+r_esi*8+0x38u), 0x0u);
L_0040336f:; BB(0x0040336f);
    /* 0040336f: call 0x6c44b4 */ r_esp -= 4; W32(r_esp, 0x403374u); f_006c44b4();
    /* 00403374: mov ebx, eax */ r_ebx = r_eax;
    /* 00403376: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00403377: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00403379: call 0x82c198 */ r_esp -= 4; W32(r_esp, 0x40337eu); f_0082c198();
    /* 0040337e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00403381: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00403383: jne 0x403396 */ if (!fZ) goto L_00403396;
L_00403385:; BB(0x00403385);
    /* 00403385: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00403386: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00403388: call 0x82c16c */ r_esp -= 4; W32(r_esp, 0x40338du); f_0082c16c();
    /* 0040338d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00403390: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00403392: jle 0x4033a6 */ if ((fZ||fS!=fO)) goto L_004033a6;
L_00403394:; BB(0x00403394);
    /* 00403394: jmp 0x40339d */ goto L_0040339d;
L_00403396:; BB(0x00403396);
    /* 00403396: cmp eax, 0xffffff05 */ {  u32 a = r_eax; u32 b = 0xffffff05u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040339b: jne 0x4033a6 */ if (!fZ) goto L_004033a6;
L_0040339d:; BB(0x0040339d);
    /* 0040339d: call 0x6c4090 */ r_esp -= 4; W32(r_esp, 0x4033a2u); f_006c4090();
    /* 004033a2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004033a4: je 0x4033ae */ if (fZ) goto L_004033ae;
L_004033a6:; BB(0x004033a6);
    /* 004033a6: mov dword ptr [edi + esi*8 + 0x3c], 0 */ W32((u32)(r_edi+r_esi*8+0x3cu), 0x0u);
L_004033ae:; BB(0x004033ae);
    /* 004033ae: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004033b1: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004033b4: jl 0x403329 */ if ((fS!=fO)) goto L_00403329;
L_004033ba:; BB(0x004033ba);
    /* 004033ba: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 004033bd: jmp 0x403293 */ goto L_00403293;
}

void f_004033c4(void) /* sub_4033C4 */
{
    FN_ENTER(0x004033c4);
    /* 004033c4: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 004033c8: cmp eax, dword ptr [ecx + 0x1c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x1cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004033cb: je 0x4033e4 */ if (fZ) goto L_004033e4;
L_004033cd:; BB(0x004033cd);
    /* 004033cd: mov dword ptr [ecx + 0x60], 0 */ W32((u32)(r_ecx+0x60u), 0x0u);
    /* 004033d4: mov dword ptr [ecx + 0x1c], eax */ W32((u32)(r_ecx+0x1cu), r_eax);
    /* 004033d7: mov eax, dword ptr [eax*8 + 0x9a2da0] */ r_eax = R32((u32)(r_eax*8+0x9a2da0u));
    /* 004033de: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004033e0: je 0x4033e4 */ if (fZ) goto L_004033e4;
L_004033e2:; BB(0x004033e2);
    /* 004033e2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4033e4u); call_ind(t); }
L_004033e4:; BB(0x004033e4);
    /* 004033e4: ret 4 */ FN_RET(0x004033c4); r_esp += 8; return;
}

void f_004033e8(void) /* sub_4033E8 */
{
    FN_ENTER(0x004033e8);
    /* 004033e8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004033e9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004033ea: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004033eb: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004033ec: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004033ef: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004033f1: mov esi, dword ptr [ebx + 0x34] */ r_esi = R32((u32)(r_ebx+0x34u));
    /* 004033f4: mov eax, 3 */ r_eax = 0x3u;
    /* 004033f9: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 004033fd: lea edx, [ebx + 0x34] */ r_edx = (u32)(r_ebx+0x34u);
    /* 00403400: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00403404: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00403406: je 0x4036db */ if (fZ) goto L_004036db;
L_0040340c:; BB(0x0040340c);
    /* 0040340c: mov ebp, dword ptr [ebx + 0x38] */ r_ebp = R32((u32)(r_ebx+0x38u));
    /* 0040340f: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00403411: je 0x4036db */ if (fZ) goto L_004036db;
L_00403417:; BB(0x00403417);
    /* 00403417: mov ecx, dword ptr [ebx + 0x3c] */ r_ecx = R32((u32)(r_ebx+0x3cu));
    /* 0040341a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040341c: je 0x4036db */ if (fZ) goto L_004036db;
L_00403422:; BB(0x00403422);
    /* 00403422: mov edx, dword ptr [ebx + 0x40] */ r_edx = R32((u32)(r_ebx+0x40u));
    /* 00403425: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00403427: je 0x4036db */ if (fZ) goto L_004036db;
L_0040342d:; BB(0x0040342d);
    /* 0040342d: mov eax, dword ptr [ebx + 0x44] */ r_eax = R32((u32)(r_ebx+0x44u));
    /* 00403430: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00403432: je 0x4036db */ if (fZ) goto L_004036db;
L_00403438:; BB(0x00403438);
    /* 00403438: mov edi, dword ptr [ebx + 0x48] */ r_edi = R32((u32)(r_ebx+0x48u));
    /* 0040343b: mov dword ptr [esp + 0x18], edi */ W32((u32)(r_esp+0x18u), r_edi);
    /* 0040343f: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00403441: je 0x4036db */ if (fZ) goto L_004036db;
L_00403447:; BB(0x00403447);
    /* 00403447: mov edi, dword ptr [ebx + 0x4c] */ r_edi = R32((u32)(r_ebx+0x4cu));
    /* 0040344a: mov dword ptr [esp + 0x10], edi */ W32((u32)(r_esp+0x10u), r_edi);
    /* 0040344e: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00403450: je 0x4036db */ if (fZ) goto L_004036db;
L_00403456:; BB(0x00403456);
    /* 00403456: mov edi, dword ptr [ebx + 0x50] */ r_edi = R32((u32)(r_ebx+0x50u));
    /* 00403459: mov dword ptr [esp + 0xc], edi */ W32((u32)(r_esp+0xcu), r_edi);
    /* 0040345d: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040345f: je 0x4036db */ if (fZ) goto L_004036db;
L_00403465:; BB(0x00403465);
    /* 00403465: mov edi, dword ptr [ebx + 0x54] */ r_edi = R32((u32)(r_ebx+0x54u));
    /* 00403468: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
    /* 0040346c: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040346e: je 0x4036db */ if (fZ) goto L_004036db;
L_00403474:; BB(0x00403474);
    /* 00403474: cmp esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00403477: jne 0x4034d1 */ if (!fZ) goto L_004034d1;
L_00403479:; BB(0x00403479);
    /* 00403479: cmp ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040347c: je 0x4036db */ if (fZ) goto L_004036db;
L_00403482:; BB(0x00403482);
    /* 00403482: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00403485: je 0x4036db */ if (fZ) goto L_004036db;
L_0040348b:; BB(0x0040348b);
    /* 0040348b: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040348e: je 0x4036db */ if (fZ) goto L_004036db;
L_00403494:; BB(0x00403494);
    /* 00403494: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00403497: je 0x4036db */ if (fZ) goto L_004036db;
L_0040349d:; BB(0x0040349d);
    /* 0040349d: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
    /* 004034a1: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004034a4: je 0x4036db */ if (fZ) goto L_004036db;
L_004034aa:; BB(0x004034aa);
    /* 004034aa: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 004034ae: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004034b1: je 0x4036db */ if (fZ) goto L_004036db;
L_004034b7:; BB(0x004034b7);
    /* 004034b7: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
    /* 004034bb: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004034be: je 0x4036db */ if (fZ) goto L_004036db;
L_004034c4:; BB(0x004034c4);
    /* 004034c4: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
    /* 004034c8: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004034cb: je 0x4036db */ if (fZ) goto L_004036db;
L_004034d1:; BB(0x004034d1);
    /* 004034d1: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004034d3: je 0x4035e3 */ if (fZ) goto L_004035e3;
L_004034d9:; BB(0x004034d9);
    /* 004034d9: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004034db: je 0x4035e3 */ if (fZ) goto L_004035e3;
L_004034e1:; BB(0x004034e1);
    /* 004034e1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004034e3: je 0x4035e3 */ if (fZ) goto L_004035e3;
L_004034e9:; BB(0x004034e9);
    /* 004034e9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004034eb: je 0x4035e3 */ if (fZ) goto L_004035e3;
L_004034f1:; BB(0x004034f1);
    /* 004034f1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004034f3: je 0x4035e3 */ if (fZ) goto L_004035e3;
L_004034f9:; BB(0x004034f9);
    /* 004034f9: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
    /* 004034fd: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004034ff: je 0x4035e3 */ if (fZ) goto L_004035e3;
L_00403505:; BB(0x00403505);
    /* 00403505: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 00403509: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040350b: je 0x4035e3 */ if (fZ) goto L_004035e3;
L_00403511:; BB(0x00403511);
    /* 00403511: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
    /* 00403515: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00403517: je 0x4035e3 */ if (fZ) goto L_004035e3;
L_0040351d:; BB(0x0040351d);
    /* 0040351d: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
    /* 00403521: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00403523: je 0x4035e3 */ if (fZ) goto L_004035e3;
L_00403529:; BB(0x00403529);
    /* 00403529: cmp esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040352c: jne 0x40357e */ if (!fZ) goto L_0040357e;
L_0040352e:; BB(0x0040352e);
    /* 0040352e: cmp ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00403531: je 0x4035e3 */ if (fZ) goto L_004035e3;
L_00403537:; BB(0x00403537);
    /* 00403537: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040353a: je 0x4035e3 */ if (fZ) goto L_004035e3;
L_00403540:; BB(0x00403540);
    /* 00403540: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00403543: je 0x4035e3 */ if (fZ) goto L_004035e3;
L_00403549:; BB(0x00403549);
    /* 00403549: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040354c: je 0x4035e3 */ if (fZ) goto L_004035e3;
L_00403552:; BB(0x00403552);
    /* 00403552: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
    /* 00403556: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00403559: je 0x4035e3 */ if (fZ) goto L_004035e3;
L_0040355f:; BB(0x0040355f);
    /* 0040355f: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 00403563: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00403566: je 0x4035e3 */ if (fZ) goto L_004035e3;
L_0040356c:; BB(0x0040356c);
    /* 0040356c: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
    /* 00403570: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00403573: je 0x4035e3 */ if (fZ) goto L_004035e3;
L_00403575:; BB(0x00403575);
    /* 00403575: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
    /* 00403579: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040357c: je 0x4035e3 */ if (fZ) goto L_004035e3;
L_0040357e:; BB(0x0040357e);
    /* 0040357e: cmp esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00403581: jne 0x4035e3 */ if (!fZ) goto L_004035e3;
L_00403583:; BB(0x00403583);
    /* 00403583: cmp ebp, -1 */ {  u32 a = r_ebp; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00403586: jne 0x4035e3 */ if (!fZ) goto L_004035e3;
L_00403588:; BB(0x00403588);
    /* 00403588: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040358b: jne 0x4035e3 */ if (!fZ) goto L_004035e3;
L_0040358d:; BB(0x0040358d);
    /* 0040358d: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00403590: jne 0x4035e3 */ if (!fZ) goto L_004035e3;
L_00403592:; BB(0x00403592);
    /* 00403592: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00403595: jne 0x4035e3 */ if (!fZ) goto L_004035e3;
L_00403597:; BB(0x00403597);
    /* 00403597: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
    /* 0040359b: cmp edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040359e: jne 0x4035e3 */ if (!fZ) goto L_004035e3;
L_004035a0:; BB(0x004035a0);
    /* 004035a0: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 004035a4: cmp edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004035a7: jne 0x4035e3 */ if (!fZ) goto L_004035e3;
L_004035a9:; BB(0x004035a9);
    /* 004035a9: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
    /* 004035ad: cmp edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004035b0: jne 0x4035e3 */ if (!fZ) goto L_004035e3;
L_004035b2:; BB(0x004035b2);
    /* 004035b2: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
    /* 004035b6: cmp edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004035b9: jne 0x4035e3 */ if (!fZ) goto L_004035e3;
L_004035bb:; BB(0x004035bb);
    /* 004035bb: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 004035bf: mov edx, 0x13 */ r_edx = 0x13u;
    /* 004035c4: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 004035c8: call 0x403770 */ r_esp -= 4; W32(r_esp, 0x4035cdu); f_00403770();
    /* 004035cd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004035cf: jle 0x4036f6 */ if ((fZ||fS!=fO)) goto L_004036f6;
L_004035d5:; BB(0x004035d5);
    /* 004035d5: mov eax, 0x15 */ r_eax = 0x15u;
    /* 004035da: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 004035de: jmp 0x4036f6 */ goto L_004036f6;
L_004035e3:; BB(0x004035e3);
    /* 004035e3: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004035e5: je 0x4036cb */ if (fZ) goto L_004036cb;
L_004035eb:; BB(0x004035eb);
    /* 004035eb: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004035ed: je 0x4036cb */ if (fZ) goto L_004036cb;
L_004035f3:; BB(0x004035f3);
    /* 004035f3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004035f5: je 0x4036cb */ if (fZ) goto L_004036cb;
L_004035fb:; BB(0x004035fb);
    /* 004035fb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004035fd: je 0x4036cb */ if (fZ) goto L_004036cb;
L_00403603:; BB(0x00403603);
    /* 00403603: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00403605: je 0x4036cb */ if (fZ) goto L_004036cb;
L_0040360b:; BB(0x0040360b);
    /* 0040360b: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
    /* 0040360f: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00403611: je 0x4036cb */ if (fZ) goto L_004036cb;
L_00403617:; BB(0x00403617);
    /* 00403617: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 0040361b: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040361d: je 0x4036cb */ if (fZ) goto L_004036cb;
L_00403623:; BB(0x00403623);
    /* 00403623: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
    /* 00403627: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00403629: je 0x4036cb */ if (fZ) goto L_004036cb;
L_0040362f:; BB(0x0040362f);
    /* 0040362f: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
    /* 00403633: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00403635: je 0x4036cb */ if (fZ) goto L_004036cb;
L_0040363b:; BB(0x0040363b);
    /* 0040363b: cmp esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040363e: jne 0x403684 */ if (!fZ) goto L_00403684;
L_00403640:; BB(0x00403640);
    /* 00403640: cmp ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00403643: je 0x4036cb */ if (fZ) goto L_004036cb;
L_00403649:; BB(0x00403649);
    /* 00403649: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040364c: je 0x4036cb */ if (fZ) goto L_004036cb;
L_00403652:; BB(0x00403652);
    /* 00403652: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00403655: je 0x4036cb */ if (fZ) goto L_004036cb;
L_0040365b:; BB(0x0040365b);
    /* 0040365b: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040365e: je 0x4036cb */ if (fZ) goto L_004036cb;
L_00403660:; BB(0x00403660);
    /* 00403660: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
    /* 00403664: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00403667: je 0x4036cb */ if (fZ) goto L_004036cb;
L_00403669:; BB(0x00403669);
    /* 00403669: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 0040366d: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00403670: je 0x4036cb */ if (fZ) goto L_004036cb;
L_00403672:; BB(0x00403672);
    /* 00403672: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
    /* 00403676: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00403679: je 0x4036cb */ if (fZ) goto L_004036cb;
L_0040367b:; BB(0x0040367b);
    /* 0040367b: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
    /* 0040367f: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00403682: je 0x4036cb */ if (fZ) goto L_004036cb;
L_00403684:; BB(0x00403684);
    /* 00403684: cmp esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00403687: je 0x403711 */ if (fZ) goto L_00403711;
L_0040368d:; BB(0x0040368d);
    /* 0040368d: cmp ebp, -1 */ {  u32 a = r_ebp; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00403690: je 0x403711 */ if (fZ) goto L_00403711;
L_00403696:; BB(0x00403696);
    /* 00403696: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00403699: je 0x403711 */ if (fZ) goto L_00403711;
L_0040369f:; BB(0x0040369f);
    /* 0040369f: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004036a2: je 0x403711 */ if (fZ) goto L_00403711;
L_004036a4:; BB(0x004036a4);
    /* 004036a4: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004036a7: je 0x403711 */ if (fZ) goto L_00403711;
L_004036a9:; BB(0x004036a9);
    /* 004036a9: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 004036ad: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004036b0: je 0x403711 */ if (fZ) goto L_00403711;
L_004036b2:; BB(0x004036b2);
    /* 004036b2: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 004036b6: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004036b9: je 0x403711 */ if (fZ) goto L_00403711;
L_004036bb:; BB(0x004036bb);
    /* 004036bb: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 004036bf: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004036c2: je 0x403711 */ if (fZ) goto L_00403711;
L_004036c4:; BB(0x004036c4);
    /* 004036c4: mov eax, edi */ r_eax = r_edi;
    /* 004036c6: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004036c9: je 0x403711 */ if (fZ) goto L_00403711;
L_004036cb:; BB(0x004036cb);
    /* 004036cb: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 004036ce: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004036d0: jne 0x403727 */ if (!fZ) goto L_00403727;
L_004036d2:; BB(0x004036d2);
    /* 004036d2: mov eax, dword ptr [ebx + 0x2c] */ r_eax = R32((u32)(r_ebx+0x2cu));
    /* 004036d5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004036d7: je 0x4036f6 */ if (fZ) goto L_004036f6;
L_004036d9:; BB(0x004036d9);
    /* 004036d9: jmp 0x403727 */ goto L_00403727;
L_004036db:; BB(0x004036db);
    /* 004036db: mov eax, dword ptr [ebx + 0x20] */ r_eax = R32((u32)(r_ebx+0x20u));
    /* 004036de: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004036e0: je 0x4036ed */ if (fZ) goto L_004036ed;
L_004036e2:; BB(0x004036e2);
    /* 004036e2: mov eax, 0x12 */ r_eax = 0x12u;
    /* 004036e7: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 004036eb: jmp 0x4036f6 */ goto L_004036f6;
L_004036ed:; BB(0x004036ed);
    /* 004036ed: mov eax, 0x14 */ r_eax = 0x14u;
    /* 004036f2: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
L_004036f6:; BB(0x004036f6);
    /* 004036f6: mov eax, dword ptr [ebx + 0x6c] */ r_eax = R32((u32)(r_ebx+0x6cu));
    /* 004036f9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004036fb: je 0x403732 */ if (fZ) goto L_00403732;
L_004036fd:; BB(0x004036fd);
    /* 004036fd: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00403701: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00403702: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00403704: call 0x4033c4 */ r_esp -= 4; W32(r_esp, 0x403709u); f_004033c4();
    /* 00403709: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0040370c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0040370d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040370e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0040370f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00403710: ret  */ FN_RET(0x004033e8); r_esp += 4; return;
L_00403711:; BB(0x00403711);
    /* 00403711: mov eax, dword ptr [ebx + 0x20] */ r_eax = R32((u32)(r_ebx+0x20u));
    /* 00403714: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00403716: jne 0x4035bb */ if (!fZ) goto L_004035bb;
L_0040371c:; BB(0x0040371c);
    /* 0040371c: mov eax, 0x14 */ r_eax = 0x14u;
    /* 00403721: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00403725: jmp 0x4036f6 */ goto L_004036f6;
L_00403727:; BB(0x00403727);
    /* 00403727: mov eax, 2 */ r_eax = 0x2u;
    /* 0040372c: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00403730: jmp 0x4036f6 */ goto L_004036f6;
L_00403732:; BB(0x00403732);
    /* 00403732: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00403736: cmp eax, 0x12 */ {  u32 a = r_eax; u32 b = 0x12u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00403739: jl 0x4036fd */ if ((fS!=fO)) goto L_004036fd;
L_0040373b:; BB(0x0040373b);
    /* 0040373b: cmp eax, 0x13 */ {  u32 a = r_eax; u32 b = 0x13u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040373e: jg 0x4036fd */ if ((!fZ&&fS==fO)) goto L_004036fd;
L_00403740:; BB(0x00403740);
    /* 00403740: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00403742: call 0x403784 */ r_esp -= 4; W32(r_esp, 0x403747u); f_00403784();
    /* 00403747: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00403749: call 0x404a34 */ r_esp -= 4; W32(r_esp, 0x40374eu); f_00404a34();
    /* 0040374e: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 00403753: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00403754: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00403755: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00403757: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00403758: push 0x16 */ { u32 v = 0x16u; r_esp -= 4; W32(r_esp, v); }
    /* 0040375a: call 0x403194 */ r_esp -= 4; W32(r_esp, 0x40375fu); f_00403194();
    /* 0040375f: mov dword ptr [ebx + 0x80], 0x61 */ W32((u32)(r_ebx+0x80u), 0x61u);
    /* 00403769: jmp 0x4036fd */ goto L_004036fd;
}

void f_00403770(void) /* sub_403770 */
{
    FN_ENTER(0x00403770);
    /* 00403770: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00403772: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00403773: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00403774: call 0x82c22c */ r_esp -= 4; W32(r_esp, 0x403779u); f_0082c22c();
    /* 00403779: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0040377b: add eax, 0x5a */ {  u32 a = r_eax; u32 b = 0x5au; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0040377e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00403781: ret  */ FN_RET(0x00403770); r_esp += 4; return;
}

void f_00403784(void) /* sub_403784 */
{
    FN_ENTER(0x00403784);
    /* 00403784: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00403785: mov ebp, esp */ r_ebp = r_esp;
    /* 00403787: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00403789: push 0x8cc12e */ { u32 v = 0x8cc12eu; r_esp -= 4; W32(r_esp, v); }
    /* 0040378e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00403794: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00403795: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0040379c: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040379f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004037a2: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 004037a5: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 004037a8: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 004037ab: mov eax, dword ptr [ecx + 0x64] */ r_eax = R32((u32)(r_ecx+0x64u));
    /* 004037ae: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 004037b1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004037b3: je 0x403813 */ if (fZ) goto L_00403813;
L_004037b5:; BB(0x004037b5);
    /* 004037b5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004037b8: mov edx, dword ptr [eax + 0x68] */ r_edx = R32((u32)(r_eax+0x68u));
    /* 004037bb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004037bd: je 0x4037cd */ if (fZ) goto L_004037cd;
L_004037bf:; BB(0x004037bf);
    /* 004037bf: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004037c2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004037c9: mov esp, ebp */ r_esp = r_ebp;
    /* 004037cb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004037cc: ret  */ FN_RET(0x00403784); r_esp += 4; return;
L_004037cd:; BB(0x004037cd);
    /* 004037cd: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 004037d4: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 004037d6: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4037dbu); f_005caba4();
    /* 004037db: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004037dc: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 004037df: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004037e1: je 0x40380f */ if (fZ) goto L_0040380f;
L_004037e3:; BB(0x004037e3);
    /* 004037e3: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 004037ea: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 004037f1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004037f4: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004037f7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004037f8: call 0x4012cc */ r_esp -= 4; W32(r_esp, 0x4037fdu); f_004012cc();
    /* 004037fd: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00403800: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_00403807:; BB(0x00403807);
    /* 00403807: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0040380a: mov dword ptr [eax + 0x68], edx */ W32((u32)(r_eax+0x68u), r_edx);
    /* 0040380d: jmp 0x4037bf */ goto L_004037bf;
L_0040380f:; BB(0x0040380f);
    /* 0040380f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00403811: jmp 0x403807 */ goto L_00403807;
L_00403813:; BB(0x00403813);
    /* 00403813: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0040381a: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 0040381c: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x403821u); f_005caba4();
    /* 00403821: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00403822: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00403825: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00403827: je 0x40385f */ if (fZ) goto L_0040385f;
L_00403829:; BB(0x00403829);
    /* 00403829: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 00403830: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00403837: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0040383a: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0040383d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040383e: call 0x4010b0 */ r_esp -= 4; W32(r_esp, 0x403843u); f_004010b0();
    /* 00403843: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00403846: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_0040384d:; BB(0x0040384d);
    /* 0040384d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00403850: mov dword ptr [eax + 0x64], edx */ W32((u32)(r_eax+0x64u), r_edx);
    /* 00403853: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0040385a: jmp 0x4037b5 */ goto L_004037b5;
L_0040385f:; BB(0x0040385f);
    /* 0040385f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00403861: jmp 0x40384d */ goto L_0040384d;
}

void f_00403864(void) /* sub_403864 */
{
    FN_ENTER(0x00403864);
    /* 00403864: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00403865: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00403868: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0040386a: mov eax, dword ptr [ebp + 0x80] */ r_eax = R32((u32)(r_ebp+0x80u));
    /* 00403870: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00403872: jle 0x403879 */ if ((fZ||fS!=fO)) goto L_00403879;
L_00403874:; BB(0x00403874);
    /* 00403874: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00403877: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00403878: ret  */ FN_RET(0x00403864); r_esp += 4; return;
L_00403879:; BB(0x00403879);
    /* 00403879: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0040387b: call 0x404a34 */ r_esp -= 4; W32(r_esp, 0x403880u); f_00404a34();
    /* 00403880: mov eax, dword ptr [ebp + 0x7c] */ r_eax = R32((u32)(r_ebp+0x7cu));
    /* 00403883: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00403885: jle 0x40388c */ if ((fZ||fS!=fO)) goto L_0040388c;
L_00403887:; BB(0x00403887);
    /* 00403887: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0040388a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040388b: ret  */ FN_RET(0x00403864); r_esp += 4; return;
L_0040388c:; BB(0x0040388c);
    /* 0040388c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0040388e: call 0x403ab8 */ r_esp -= 4; W32(r_esp, 0x403893u); f_00403ab8();
    /* 00403893: call 0x407734 */ r_esp -= 4; W32(r_esp, 0x403898u); f_00407734();
    /* 00403898: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040389a: jne 0x4038a1 */ if (!fZ) goto L_004038a1;
L_0040389c:; BB(0x0040389c);
    /* 0040389c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0040389f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004038a0: ret  */ FN_RET(0x00403864); r_esp += 4; return;
L_004038a1:; BB(0x004038a1);
    /* 004038a1: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 004038a6: mov dword ptr [ebp + 0x34], eax */ W32((u32)(r_ebp+0x34u), r_eax);
    /* 004038a9: mov dword ptr [ebp + 0x38], eax */ W32((u32)(r_ebp+0x38u), r_eax);
    /* 004038ac: mov dword ptr [ebp + 0x3c], eax */ W32((u32)(r_ebp+0x3cu), r_eax);
    /* 004038af: mov dword ptr [ebp + 0x40], eax */ W32((u32)(r_ebp+0x40u), r_eax);
    /* 004038b2: mov dword ptr [ebp + 0x44], eax */ W32((u32)(r_ebp+0x44u), r_eax);
    /* 004038b5: mov dword ptr [ebp + 0x48], eax */ W32((u32)(r_ebp+0x48u), r_eax);
    /* 004038b8: mov dword ptr [ebp + 0x4c], eax */ W32((u32)(r_ebp+0x4cu), r_eax);
    /* 004038bb: mov dword ptr [ebp + 0x50], eax */ W32((u32)(r_ebp+0x50u), r_eax);
    /* 004038be: mov dword ptr [ebp + 0x54], eax */ W32((u32)(r_ebp+0x54u), r_eax);
    /* 004038c1: call 0x40312c */ r_esp -= 4; W32(r_esp, 0x4038c6u); f_0040312c();
    /* 004038c6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004038c8: je 0x4038d5 */ if (fZ) goto L_004038d5;
L_004038ca:; BB(0x004038ca);
    /* 004038ca: mov dword ptr [ebp + 0x34], 0 */ W32((u32)(r_ebp+0x34u), 0x0u);
    /* 004038d1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004038d3: jmp 0x4038ef */ goto L_004038ef;
L_004038d5:; BB(0x004038d5);
    /* 004038d5: call 0x403178 */ r_esp -= 4; W32(r_esp, 0x4038dau); f_00403178();
    /* 004038da: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004038dc: je 0x4038ec */ if (fZ) goto L_004038ec;
L_004038de:; BB(0x004038de);
    /* 004038de: mov dword ptr [ebp + 0x34], 1 */ W32((u32)(r_ebp+0x34u), 0x1u);
    /* 004038e5: mov eax, 1 */ r_eax = 0x1u;
    /* 004038ea: jmp 0x4038ef */ goto L_004038ef;
L_004038ec:; BB(0x004038ec);
    /* 004038ec: mov eax, dword ptr [ebp + 0x34] */ r_eax = R32((u32)(r_ebp+0x34u));
L_004038ef:; BB(0x004038ef);
    /* 004038ef: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004038f2: je 0x403a0f */ if (fZ) goto L_00403a0f;
L_004038f8:; BB(0x004038f8);
    /* 004038f8: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 004038fc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004038fe: mov ebx, eax */ r_ebx = r_eax;
L_00403900:; BB(0x00403900);
    /* 00403900: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00403901: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x403906u); f_0061cdb0();
    /* 00403906: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00403907: mov edx, dword ptr [ebp + ebx*8 + 0x38] */ r_edx = R32((u32)(r_ebp+r_ebx*8+0x38u));
    /* 0040390b: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040390e: je 0x4039ea */ if (fZ) goto L_004039ea;
L_00403914:; BB(0x00403914);
    /* 00403914: mov edx, dword ptr [ebp + ebx*8 + 0x3c] */ r_edx = R32((u32)(r_ebp+r_ebx*8+0x3cu));
    /* 00403918: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040391b: je 0x4039c5 */ if (fZ) goto L_004039c5;
L_00403921:; BB(0x00403921);
    /* 00403921: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00403924: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00403927: jl 0x403900 */ if ((fS!=fO)) goto L_00403900;
L_00403929:; BB(0x00403929);
    /* 00403929: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 0040392d: mov eax, dword ptr [ebp + 0x34] */ r_eax = R32((u32)(r_ebp+0x34u));
    /* 00403930: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00403933: jne 0x40396d */ if (!fZ) goto L_0040396d;
L_00403935:; BB(0x00403935);
    /* 00403935: mov eax, dword ptr [ebp + 0x38] */ r_eax = R32((u32)(r_ebp+0x38u));
    /* 00403938: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040393b: jne 0x40396d */ if (!fZ) goto L_0040396d;
L_0040393d:; BB(0x0040393d);
    /* 0040393d: mov eax, dword ptr [ebp + 0x3c] */ r_eax = R32((u32)(r_ebp+0x3cu));
    /* 00403940: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00403943: jne 0x40396d */ if (!fZ) goto L_0040396d;
L_00403945:; BB(0x00403945);
    /* 00403945: mov eax, dword ptr [ebp + 0x40] */ r_eax = R32((u32)(r_ebp+0x40u));
    /* 00403948: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040394b: jne 0x40396d */ if (!fZ) goto L_0040396d;
L_0040394d:; BB(0x0040394d);
    /* 0040394d: mov eax, dword ptr [ebp + 0x44] */ r_eax = R32((u32)(r_ebp+0x44u));
    /* 00403950: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00403953: jne 0x40396d */ if (!fZ) goto L_0040396d;
L_00403955:; BB(0x00403955);
    /* 00403955: mov eax, dword ptr [ebp + 0x48] */ r_eax = R32((u32)(r_ebp+0x48u));
    /* 00403958: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040395b: jne 0x40396d */ if (!fZ) goto L_0040396d;
L_0040395d:; BB(0x0040395d);
    /* 0040395d: mov eax, dword ptr [ebp + 0x4c] */ r_eax = R32((u32)(r_ebp+0x4cu));
    /* 00403960: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00403963: jne 0x40396d */ if (!fZ) goto L_0040396d;
L_00403965:; BB(0x00403965);
    /* 00403965: mov eax, dword ptr [ebp + 0x50] */ r_eax = R32((u32)(r_ebp+0x50u));
    /* 00403968: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040396b: je 0x403995 */ if (fZ) goto L_00403995;
L_0040396d:; BB(0x0040396d);
    /* 0040396d: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 00403970: cmp eax, 0x16 */ {  u32 a = r_eax; u32 b = 0x16u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00403973: je 0x403990 */ if (fZ) goto L_00403990;
L_00403975:; BB(0x00403975);
    /* 00403975: mov dword ptr [ebp + 0x1c], 0x16 */ W32((u32)(r_ebp+0x1cu), 0x16u);
    /* 0040397c: mov dword ptr [ebp + 0x60], 0 */ W32((u32)(r_ebp+0x60u), 0x0u);
    /* 00403983: mov eax, dword ptr [0x9a2e50] */ r_eax = R32((u32)(0x9a2e50u));
    /* 00403988: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040398a: je 0x403990 */ if (fZ) goto L_00403990;
L_0040398c:; BB(0x0040398c);
    /* 0040398c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0040398e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x403990u); call_ind(t); }
L_00403990:; BB(0x00403990);
    /* 00403990: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00403993: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00403994: ret  */ FN_RET(0x00403864); r_esp += 4; return;
L_00403995:; BB(0x00403995);
    /* 00403995: mov eax, dword ptr [ebp + 0x54] */ r_eax = R32((u32)(r_ebp+0x54u));
    /* 00403998: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040399b: jne 0x40396d */ if (!fZ) goto L_0040396d;
L_0040399d:; BB(0x0040399d);
    /* 0040399d: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 004039a0: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004039a3: je 0x4039c0 */ if (fZ) goto L_004039c0;
L_004039a5:; BB(0x004039a5);
    /* 004039a5: mov dword ptr [ebp + 0x1c], 3 */ W32((u32)(r_ebp+0x1cu), 0x3u);
    /* 004039ac: mov dword ptr [ebp + 0x60], 0 */ W32((u32)(r_ebp+0x60u), 0x0u);
    /* 004039b3: mov eax, dword ptr [0x9a2db8] */ r_eax = R32((u32)(0x9a2db8u));
    /* 004039b8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004039ba: je 0x4039c0 */ if (fZ) goto L_004039c0;
L_004039bc:; BB(0x004039bc);
    /* 004039bc: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004039be: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4039c0u); call_ind(t); }
L_004039c0:; BB(0x004039c0);
    /* 004039c0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004039c3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004039c4: ret  */ FN_RET(0x00403864); r_esp += 4; return;
L_004039c5:; BB(0x004039c5);
    /* 004039c5: call 0x6c44b4 */ r_esp -= 4; W32(r_esp, 0x4039cau); f_006c44b4();
    /* 004039ca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004039cb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004039cd: call 0x82c198 */ r_esp -= 4; W32(r_esp, 0x4039d2u); f_0082c198();
    /* 004039d2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004039d5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004039d7: jne 0x403921 */ if (!fZ) goto L_00403921;
L_004039dd:; BB(0x004039dd);
    /* 004039dd: mov dword ptr [ebp + ebx*8 + 0x3c], 1 */ W32((u32)(r_ebp+r_ebx*8+0x3cu), 0x1u);
    /* 004039e5: jmp 0x403921 */ goto L_00403921;
L_004039ea:; BB(0x004039ea);
    /* 004039ea: call 0x6c44ac */ r_esp -= 4; W32(r_esp, 0x4039efu); f_006c44ac();
    /* 004039ef: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004039f0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004039f2: call 0x82c198 */ r_esp -= 4; W32(r_esp, 0x4039f7u); f_0082c198();
    /* 004039f7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004039fa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004039fc: jne 0x403914 */ if (!fZ) goto L_00403914;
L_00403a02:; BB(0x00403a02);
    /* 00403a02: mov dword ptr [ebp + ebx*8 + 0x38], 1 */ W32((u32)(r_ebp+r_ebx*8+0x38u), 0x1u);
    /* 00403a0a: jmp 0x403914 */ goto L_00403914;
L_00403a0f:; BB(0x00403a0f);
    /* 00403a0f: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 00403a13: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 00403a16: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00403a18: mov ebx, eax */ r_ebx = r_eax;
L_00403a1a:; BB(0x00403a1a);
    /* 00403a1a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00403a1b: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x403a20u); f_0061cdb0();
    /* 00403a20: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00403a21: call 0x6c44ac */ r_esp -= 4; W32(r_esp, 0x403a26u); f_006c44ac();
    /* 00403a26: mov esi, eax */ r_esi = r_eax;
    /* 00403a28: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00403a29: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00403a2b: call 0x82c198 */ r_esp -= 4; W32(r_esp, 0x403a30u); f_0082c198();
    /* 00403a30: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00403a33: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00403a35: jne 0x403a48 */ if (!fZ) goto L_00403a48;
L_00403a37:; BB(0x00403a37);
    /* 00403a37: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00403a38: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00403a3a: call 0x82c16c */ r_esp -= 4; W32(r_esp, 0x403a3fu); f_0082c16c();
    /* 00403a3f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00403a42: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00403a44: jle 0x403a58 */ if ((fZ||fS!=fO)) goto L_00403a58;
L_00403a46:; BB(0x00403a46);
    /* 00403a46: jmp 0x403a4f */ goto L_00403a4f;
L_00403a48:; BB(0x00403a48);
    /* 00403a48: cmp eax, 0xffffff05 */ {  u32 a = r_eax; u32 b = 0xffffff05u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00403a4d: jne 0x403a58 */ if (!fZ) goto L_00403a58;
L_00403a4f:; BB(0x00403a4f);
    /* 00403a4f: call 0x6c41b8 */ r_esp -= 4; W32(r_esp, 0x403a54u); f_006c41b8();
    /* 00403a54: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00403a56: je 0x403a60 */ if (fZ) goto L_00403a60;
L_00403a58:; BB(0x00403a58);
    /* 00403a58: mov dword ptr [ebp + ebx*8 + 0x38], 0 */ W32((u32)(r_ebp+r_ebx*8+0x38u), 0x0u);
L_00403a60:; BB(0x00403a60);
    /* 00403a60: call 0x6c44b4 */ r_esp -= 4; W32(r_esp, 0x403a65u); f_006c44b4();
    /* 00403a65: mov esi, eax */ r_esi = r_eax;
    /* 00403a67: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00403a68: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00403a6a: call 0x82c198 */ r_esp -= 4; W32(r_esp, 0x403a6fu); f_0082c198();
    /* 00403a6f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00403a72: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00403a74: jne 0x403a87 */ if (!fZ) goto L_00403a87;
L_00403a76:; BB(0x00403a76);
    /* 00403a76: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00403a77: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00403a79: call 0x82c16c */ r_esp -= 4; W32(r_esp, 0x403a7eu); f_0082c16c();
    /* 00403a7e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00403a81: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00403a83: jle 0x403a97 */ if ((fZ||fS!=fO)) goto L_00403a97;
L_00403a85:; BB(0x00403a85);
    /* 00403a85: jmp 0x403a8e */ goto L_00403a8e;
L_00403a87:; BB(0x00403a87);
    /* 00403a87: cmp eax, 0xffffff05 */ {  u32 a = r_eax; u32 b = 0xffffff05u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00403a8c: jne 0x403a97 */ if (!fZ) goto L_00403a97;
L_00403a8e:; BB(0x00403a8e);
    /* 00403a8e: call 0x6c4090 */ r_esp -= 4; W32(r_esp, 0x403a93u); f_006c4090();
    /* 00403a93: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00403a95: je 0x403a9f */ if (fZ) goto L_00403a9f;
L_00403a97:; BB(0x00403a97);
    /* 00403a97: mov dword ptr [ebp + ebx*8 + 0x3c], 0 */ W32((u32)(r_ebp+r_ebx*8+0x3cu), 0x0u);
L_00403a9f:; BB(0x00403a9f);
    /* 00403a9f: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00403aa2: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00403aa5: jl 0x403a1a */ if ((fS!=fO)) goto L_00403a1a;
L_00403aab:; BB(0x00403aab);
    /* 00403aab: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 00403aaf: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 00403ab2: jmp 0x4038f8 */ goto L_004038f8;
}

void f_00403ab8(void) /* sub_403AB8 */
{
    FN_ENTER(0x00403ab8);
    /* 00403ab8: mov edx, dword ptr [ecx + 0x64] */ r_edx = R32((u32)(r_ecx+0x64u));
    /* 00403abb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00403abd: je 0x403ad3 */ if (fZ) goto L_00403ad3;
L_00403abf:; BB(0x00403abf);
    /* 00403abf: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00403ac3: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00403ac8: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00403acc: mov dword ptr [ecx + 0x64], 0 */ W32((u32)(r_ecx+0x64u), 0x0u);
L_00403ad3:; BB(0x00403ad3);
    /* 00403ad3: mov edx, dword ptr [ecx + 0x68] */ r_edx = R32((u32)(r_ecx+0x68u));
    /* 00403ad6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00403ad8: je 0x403aee */ if (fZ) goto L_00403aee;
L_00403ada:; BB(0x00403ada);
    /* 00403ada: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00403ade: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00403ae3: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00403ae7: mov dword ptr [ecx + 0x68], 0 */ W32((u32)(r_ecx+0x68u), 0x0u);
L_00403aee:; BB(0x00403aee);
    /* 00403aee: ret  */ FN_RET(0x00403ab8); r_esp += 4; return;
}

void f_00403af0(void) /* sub_403AF0 */
{
    FN_ENTER(0x00403af0);
    /* 00403af0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00403af1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00403af3: mov eax, dword ptr [ebx + 0x7c] */ r_eax = R32((u32)(r_ebx+0x7cu));
    /* 00403af6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00403af8: jle 0x403b03 */ if ((fZ||fS!=fO)) goto L_00403b03;
L_00403afa:; BB(0x00403afa);
    /* 00403afa: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00403afc: call 0x403ab8 */ r_esp -= 4; W32(r_esp, 0x403b01u); f_00403ab8();
    /* 00403b01: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00403b02: ret  */ FN_RET(0x00403af0); r_esp += 4; return;
L_00403b03:; BB(0x00403b03);
    /* 00403b03: add dword ptr [ebx + 0x60], 1 */ { u32 ad = (u32)(r_ebx+0x60u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00403b07: call 0x407734 */ r_esp -= 4; W32(r_esp, 0x403b0cu); f_00407734();
    /* 00403b0c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00403b0e: jne 0x403b12 */ if (!fZ) goto L_00403b12;
L_00403b10:; BB(0x00403b10);
    /* 00403b10: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00403b11: ret  */ FN_RET(0x00403af0); r_esp += 4; return;
L_00403b12:; BB(0x00403b12);
    /* 00403b12: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00403b14: call 0x6c3e8c */ r_esp -= 4; W32(r_esp, 0x403b19u); f_006c3e8c();
    /* 00403b19: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00403b1a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00403b1c: je 0x403b43 */ if (fZ) goto L_00403b43;
L_00403b1e:; BB(0x00403b1e);
    /* 00403b1e: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
    /* 00403b21: cmp eax, 0x16 */ {  u32 a = r_eax; u32 b = 0x16u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00403b24: je 0x403b41 */ if (fZ) goto L_00403b41;
L_00403b26:; BB(0x00403b26);
    /* 00403b26: mov dword ptr [ebx + 0x1c], 0x16 */ W32((u32)(r_ebx+0x1cu), 0x16u);
    /* 00403b2d: mov dword ptr [ebx + 0x60], 0 */ W32((u32)(r_ebx+0x60u), 0x0u);
    /* 00403b34: mov eax, dword ptr [0x9a2e50] */ r_eax = R32((u32)(0x9a2e50u));
    /* 00403b39: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00403b3b: je 0x403b41 */ if (fZ) goto L_00403b41;
L_00403b3d:; BB(0x00403b3d);
    /* 00403b3d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00403b3f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x403b41u); call_ind(t); }
L_00403b41:; BB(0x00403b41);
    /* 00403b41: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00403b42: ret  */ FN_RET(0x00403af0); r_esp += 4; return;
L_00403b43:; BB(0x00403b43);
    /* 00403b43: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
    /* 00403b46: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00403b49: je 0x403b66 */ if (fZ) goto L_00403b66;
L_00403b4b:; BB(0x00403b4b);
    /* 00403b4b: mov dword ptr [ebx + 0x1c], 4 */ W32((u32)(r_ebx+0x1cu), 0x4u);
    /* 00403b52: mov dword ptr [ebx + 0x60], 0 */ W32((u32)(r_ebx+0x60u), 0x0u);
    /* 00403b59: mov eax, dword ptr [0x9a2dc0] */ r_eax = R32((u32)(0x9a2dc0u));
    /* 00403b5e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00403b60: je 0x403b66 */ if (fZ) goto L_00403b66;
L_00403b62:; BB(0x00403b62);
    /* 00403b62: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00403b64: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x403b66u); call_ind(t); }
L_00403b66:; BB(0x00403b66);
    /* 00403b66: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00403b67: ret  */ FN_RET(0x00403af0); r_esp += 4; return;
}

void f_00403b68(void) /* sub_403B68 */
{
    FN_ENTER(0x00403b68);
    /* 00403b68: mov eax, dword ptr [0xa95de0] */ r_eax = R32((u32)(0xa95de0u));
    /* 00403b6d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00403b6f: je 0x403b72 */ if (fZ) goto L_00403b72;
L_00403b71:; BB(0x00403b71);
    /* 00403b71: ret  */ FN_RET(0x00403b68); r_esp += 4; return;
L_00403b72:; BB(0x00403b72);
    /* 00403b72: mov eax, dword ptr [ecx + 0x1c] */ r_eax = R32((u32)(r_ecx+0x1cu));
    /* 00403b75: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00403b78: je 0x403b93 */ if (fZ) goto L_00403b93;
L_00403b7a:; BB(0x00403b7a);
    /* 00403b7a: mov dword ptr [ecx + 0x1c], 5 */ W32((u32)(r_ecx+0x1cu), 0x5u);
    /* 00403b81: mov dword ptr [ecx + 0x60], 0 */ W32((u32)(r_ecx+0x60u), 0x0u);
    /* 00403b88: mov eax, dword ptr [0x9a2dc8] */ r_eax = R32((u32)(0x9a2dc8u));
    /* 00403b8d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00403b8f: je 0x403b93 */ if (fZ) goto L_00403b93;
L_00403b91:; BB(0x00403b91);
    /* 00403b91: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x403b93u); call_ind(t); }
L_00403b93:; BB(0x00403b93);
    /* 00403b93: ret  */ FN_RET(0x00403b68); r_esp += 4; return;
}

void f_00403b94(void) /* sub_403B94 */
{
    FN_ENTER(0x00403b94);
    /* 00403b94: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00403b95: mov edi, ecx */ r_edi = r_ecx;
    /* 00403b97: push dword ptr [edi + 0x58] */ { u32 v = R32((u32)(r_edi+0x58u)); r_esp -= 4; W32(r_esp, v); }
    /* 00403b9a: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x403b9fu); f_0061cdb0();
    /* 00403b9f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00403ba0: call 0x6c3158 */ r_esp -= 4; W32(r_esp, 0x403ba5u); f_006c3158();
    /* 00403ba5: cmp eax, 0xffffff05 */ {  u32 a = r_eax; u32 b = 0xffffff05u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00403baa: je 0x403bcf */ if (fZ) goto L_00403bcf;
L_00403bac:; BB(0x00403bac);
    /* 00403bac: mov eax, dword ptr [edi + 0x1c] */ r_eax = R32((u32)(r_edi+0x1cu));
    /* 00403baf: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00403bb2: je 0x403bcf */ if (fZ) goto L_00403bcf;
L_00403bb4:; BB(0x00403bb4);
    /* 00403bb4: mov dword ptr [edi + 0x1c], 7 */ W32((u32)(r_edi+0x1cu), 0x7u);
    /* 00403bbb: mov dword ptr [edi + 0x60], 0 */ W32((u32)(r_edi+0x60u), 0x0u);
    /* 00403bc2: mov eax, dword ptr [0x9a2dd8] */ r_eax = R32((u32)(0x9a2dd8u));
    /* 00403bc7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00403bc9: je 0x403bcf */ if (fZ) goto L_00403bcf;
L_00403bcb:; BB(0x00403bcb);
    /* 00403bcb: mov ecx, edi */ r_ecx = r_edi;
    /* 00403bcd: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x403bcfu); call_ind(t); }
L_00403bcf:; BB(0x00403bcf);
    /* 00403bcf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00403bd0: ret  */ FN_RET(0x00403b94); r_esp += 4; return;
}

void f_00403bd4(void) /* sub_403BD4 */
{
    FN_ENTER(0x00403bd4);
    /* 00403bd4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00403bd5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00403bd7: push dword ptr [ebx + 0x58] */ { u32 v = R32((u32)(r_ebx+0x58u)); r_esp -= 4; W32(r_esp, v); }
    /* 00403bda: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x403bdfu); f_0061cdb0();
    /* 00403bdf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00403be0: mov eax, dword ptr [0xa95de0] */ r_eax = R32((u32)(0xa95de0u));
    /* 00403be5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00403be7: je 0x403beb */ if (fZ) goto L_00403beb;
L_00403be9:; BB(0x00403be9);
    /* 00403be9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00403bea: ret  */ FN_RET(0x00403bd4); r_esp += 4; return;
L_00403beb:; BB(0x00403beb);
    /* 00403beb: call 0x6c1bdc */ r_esp -= 4; W32(r_esp, 0x403bf0u); f_006c1bdc();
    /* 00403bf0: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00403bf3: je 0x403c00 */ if (fZ) goto L_00403c00;
L_00403bf5:; BB(0x00403bf5);
    /* 00403bf5: mov eax, dword ptr [ebx + 0x58] */ r_eax = R32((u32)(r_ebx+0x58u));
    /* 00403bf8: mov dword ptr [ebx + eax*8 + 0x38], 0 */ W32((u32)(r_ebx+r_eax*8+0x38u), 0x0u);
L_00403c00:; BB(0x00403c00);
    /* 00403c00: mov eax, dword ptr [ebx + 0x58] */ r_eax = R32((u32)(r_ebx+0x58u));
    /* 00403c03: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00403c06: mov dword ptr [ebx + 0x58], eax */ W32((u32)(r_ebx+0x58u), r_eax);
    /* 00403c09: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00403c0c: jge 0x403c33 */ if ((fS==fO)) goto L_00403c33;
L_00403c0e:; BB(0x00403c0e);
    /* 00403c0e: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
    /* 00403c11: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00403c14: je 0x403c31 */ if (fZ) goto L_00403c31;
L_00403c16:; BB(0x00403c16);
    /* 00403c16: mov dword ptr [ebx + 0x1c], 6 */ W32((u32)(r_ebx+0x1cu), 0x6u);
    /* 00403c1d: mov dword ptr [ebx + 0x60], 0 */ W32((u32)(r_ebx+0x60u), 0x0u);
    /* 00403c24: mov eax, dword ptr [0x9a2dd0] */ r_eax = R32((u32)(0x9a2dd0u));
    /* 00403c29: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00403c2b: je 0x403c31 */ if (fZ) goto L_00403c31;
L_00403c2d:; BB(0x00403c2d);
    /* 00403c2d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00403c2f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x403c31u); call_ind(t); }
L_00403c31:; BB(0x00403c31);
    /* 00403c31: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00403c32: ret  */ FN_RET(0x00403bd4); r_esp += 4; return;
L_00403c33:; BB(0x00403c33);
    /* 00403c33: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00403c35:; BB(0x00403c35);
    /* 00403c35: mov edx, dword ptr [ebx + eax*8 + 0x38] */ r_edx = R32((u32)(r_ebx+r_eax*8+0x38u));
    /* 00403c39: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00403c3c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00403c3e: je 0x403c71 */ if (fZ) goto L_00403c71;
L_00403c40:; BB(0x00403c40);
    /* 00403c40: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00403c43: jl 0x403c35 */ if ((fS!=fO)) goto L_00403c35;
L_00403c45:; BB(0x00403c45);
    /* 00403c45: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
    /* 00403c48: mov dword ptr [ebx + 0x30], 0 */ W32((u32)(r_ebx+0x30u), 0x0u);
    /* 00403c4f: cmp eax, 0x17 */ {  u32 a = r_eax; u32 b = 0x17u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00403c52: je 0x403c6f */ if (fZ) goto L_00403c6f;
L_00403c54:; BB(0x00403c54);
    /* 00403c54: mov dword ptr [ebx + 0x1c], 0x17 */ W32((u32)(r_ebx+0x1cu), 0x17u);
    /* 00403c5b: mov dword ptr [ebx + 0x60], 0 */ W32((u32)(r_ebx+0x60u), 0x0u);
    /* 00403c62: mov eax, dword ptr [0x9a2e58] */ r_eax = R32((u32)(0x9a2e58u));
    /* 00403c67: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00403c69: je 0x403c6f */ if (fZ) goto L_00403c6f;
L_00403c6b:; BB(0x00403c6b);
    /* 00403c6b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00403c6d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x403c6fu); call_ind(t); }
L_00403c6f:; BB(0x00403c6f);
    /* 00403c6f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00403c70: ret  */ FN_RET(0x00403bd4); r_esp += 4; return;
L_00403c71:; BB(0x00403c71);
    /* 00403c71: mov eax, dword ptr [ebx + 0x5c] */ r_eax = R32((u32)(r_ebx+0x5cu));
    /* 00403c74: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00403c76: je 0x403c9d */ if (fZ) goto L_00403c9d;
L_00403c78:; BB(0x00403c78);
    /* 00403c78: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
    /* 00403c7b: cmp eax, 0x16 */ {  u32 a = r_eax; u32 b = 0x16u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00403c7e: je 0x403c9b */ if (fZ) goto L_00403c9b;
L_00403c80:; BB(0x00403c80);
    /* 00403c80: mov dword ptr [ebx + 0x1c], 0x16 */ W32((u32)(r_ebx+0x1cu), 0x16u);
    /* 00403c87: mov dword ptr [ebx + 0x60], 0 */ W32((u32)(r_ebx+0x60u), 0x0u);
    /* 00403c8e: mov eax, dword ptr [0x9a2e50] */ r_eax = R32((u32)(0x9a2e50u));
    /* 00403c93: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00403c95: je 0x403c9b */ if (fZ) goto L_00403c9b;
L_00403c97:; BB(0x00403c97);
    /* 00403c97: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00403c99: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x403c9bu); call_ind(t); }
L_00403c9b:; BB(0x00403c9b);
    /* 00403c9b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00403c9c: ret  */ FN_RET(0x00403bd4); r_esp += 4; return;
L_00403c9d:; BB(0x00403c9d);
    /* 00403c9d: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
    /* 00403ca0: mov dword ptr [ebx + 0x5c], 1 */ W32((u32)(r_ebx+0x5cu), 0x1u);
    /* 00403ca7: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00403caa: je 0x403cc7 */ if (fZ) goto L_00403cc7;
L_00403cac:; BB(0x00403cac);
    /* 00403cac: mov dword ptr [ebx + 0x1c], 1 */ W32((u32)(r_ebx+0x1cu), 0x1u);
    /* 00403cb3: mov dword ptr [ebx + 0x60], 0 */ W32((u32)(r_ebx+0x60u), 0x0u);
    /* 00403cba: mov eax, dword ptr [0x9a2da8] */ r_eax = R32((u32)(0x9a2da8u));
    /* 00403cbf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00403cc1: je 0x403cc7 */ if (fZ) goto L_00403cc7;
L_00403cc3:; BB(0x00403cc3);
    /* 00403cc3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00403cc5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x403cc7u); call_ind(t); }
L_00403cc7:; BB(0x00403cc7);
    /* 00403cc7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00403cc8: ret  */ FN_RET(0x00403bd4); r_esp += 4; return;
}

void f_00403ccc(void) /* sub_403CCC */
{
    FN_ENTER(0x00403ccc);
    /* 00403ccc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00403ccd: mov esi, ecx */ r_esi = r_ecx;
    /* 00403ccf: call 0x6c44bc */ r_esp -= 4; W32(r_esp, 0x403cd4u); f_006c44bc();
    /* 00403cd4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00403cd5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00403cd7: call 0x82c21c */ r_esp -= 4; W32(r_esp, 0x403cdcu); f_0082c21c();
    /* 00403cdc: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00403cdf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00403ce1: jne 0x403d06 */ if (!fZ) goto L_00403d06;
L_00403ce3:; BB(0x00403ce3);
    /* 00403ce3: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 00403ce6: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00403ce9: je 0x403d06 */ if (fZ) goto L_00403d06;
L_00403ceb:; BB(0x00403ceb);
    /* 00403ceb: mov dword ptr [esi + 0x1c], 9 */ W32((u32)(r_esi+0x1cu), 0x9u);
    /* 00403cf2: mov dword ptr [esi + 0x60], 0 */ W32((u32)(r_esi+0x60u), 0x0u);
    /* 00403cf9: mov eax, dword ptr [0x9a2de8] */ r_eax = R32((u32)(0x9a2de8u));
    /* 00403cfe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00403d00: je 0x403d06 */ if (fZ) goto L_00403d06;
L_00403d02:; BB(0x00403d02);
    /* 00403d02: mov ecx, esi */ r_ecx = r_esi;
    /* 00403d04: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x403d06u); call_ind(t); }
L_00403d06:; BB(0x00403d06);
    /* 00403d06: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00403d07: ret  */ FN_RET(0x00403ccc); r_esp += 4; return;
}

void f_00403d08(void) /* sub_403D08 */
{
    FN_ENTER(0x00403d08);
    /* 00403d08: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00403d09: mov edi, ecx */ r_edi = r_ecx;
    /* 00403d0b: add dword ptr [edi + 0x60], 1 */ { u32 ad = (u32)(r_edi+0x60u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00403d0f: call 0x407734 */ r_esp -= 4; W32(r_esp, 0x403d14u); f_00407734();
    /* 00403d14: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00403d16: jne 0x403d1a */ if (!fZ) goto L_00403d1a;
L_00403d18:; BB(0x00403d18);
    /* 00403d18: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00403d19: ret  */ FN_RET(0x00403d08); r_esp += 4; return;
L_00403d1a:; BB(0x00403d1a);
    /* 00403d1a: mov eax, dword ptr [edi + 0x1c] */ r_eax = R32((u32)(r_edi+0x1cu));
    /* 00403d1d: mov dword ptr [edi + 0x34], 0xffffffff */ W32((u32)(r_edi+0x34u), 0xffffffffu);
    /* 00403d24: cmp eax, 0x12 */ {  u32 a = r_eax; u32 b = 0x12u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00403d27: je 0x403d44 */ if (fZ) goto L_00403d44;
L_00403d29:; BB(0x00403d29);
    /* 00403d29: mov dword ptr [edi + 0x1c], 0x12 */ W32((u32)(r_edi+0x1cu), 0x12u);
    /* 00403d30: mov dword ptr [edi + 0x60], 0 */ W32((u32)(r_edi+0x60u), 0x0u);
    /* 00403d37: mov eax, dword ptr [0x9a2e30] */ r_eax = R32((u32)(0x9a2e30u));
    /* 00403d3c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00403d3e: je 0x403d44 */ if (fZ) goto L_00403d44;
L_00403d40:; BB(0x00403d40);
    /* 00403d40: mov ecx, edi */ r_ecx = r_edi;
    /* 00403d42: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x403d44u); call_ind(t); }
L_00403d44:; BB(0x00403d44);
    /* 00403d44: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00403d45: ret  */ FN_RET(0x00403d08); r_esp += 4; return;
}

void f_00403d48(void) /* sub_403D48 */
{
    FN_ENTER(0x00403d48);
    /* 00403d48: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00403d49: mov esi, ecx */ r_esi = r_ecx;
    /* 00403d4b: push dword ptr [esi + 0x58] */ { u32 v = R32((u32)(r_esi+0x58u)); r_esp -= 4; W32(r_esp, v); }
    /* 00403d4e: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x403d53u); f_0061cdb0();
    /* 00403d53: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00403d54: call 0x6c44ac */ r_esp -= 4; W32(r_esp, 0x403d59u); f_006c44ac();
    /* 00403d59: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00403d5a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00403d5c: call 0x82c21c */ r_esp -= 4; W32(r_esp, 0x403d61u); f_0082c21c();
    /* 00403d61: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00403d64: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00403d66: jne 0x403d8b */ if (!fZ) goto L_00403d8b;
L_00403d68:; BB(0x00403d68);
    /* 00403d68: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 00403d6b: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00403d6e: je 0x403d8b */ if (fZ) goto L_00403d8b;
L_00403d70:; BB(0x00403d70);
    /* 00403d70: mov dword ptr [esi + 0x1c], 0xb */ W32((u32)(r_esi+0x1cu), 0xbu);
    /* 00403d77: mov dword ptr [esi + 0x60], 0 */ W32((u32)(r_esi+0x60u), 0x0u);
    /* 00403d7e: mov eax, dword ptr [0x9a2df8] */ r_eax = R32((u32)(0x9a2df8u));
    /* 00403d83: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00403d85: je 0x403d8b */ if (fZ) goto L_00403d8b;
L_00403d87:; BB(0x00403d87);
    /* 00403d87: mov ecx, esi */ r_ecx = r_esi;
    /* 00403d89: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x403d8bu); call_ind(t); }
L_00403d8b:; BB(0x00403d8b);
    /* 00403d8b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00403d8c: ret  */ FN_RET(0x00403d48); r_esp += 4; return;
}

void f_00403d90(void) /* sub_403D90 */
{
    FN_ENTER(0x00403d90);
    /* 00403d90: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00403d91: mov esi, ecx */ r_esi = r_ecx;
    /* 00403d93: add dword ptr [esi + 0x60], 1 */ { u32 ad = (u32)(r_esi+0x60u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00403d97: call 0x407734 */ r_esp -= 4; W32(r_esp, 0x403d9cu); f_00407734();
    /* 00403d9c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00403d9e: jne 0x403da2 */ if (!fZ) goto L_00403da2;
L_00403da0:; BB(0x00403da0);
    /* 00403da0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00403da1: ret  */ FN_RET(0x00403d90); r_esp += 4; return;
L_00403da2:; BB(0x00403da2);
    /* 00403da2: mov eax, dword ptr [esi + 0x58] */ r_eax = R32((u32)(r_esi+0x58u));
    /* 00403da5: mov dword ptr [esi + eax*8 + 0x38], 0xffffffff */ W32((u32)(r_esi+r_eax*8+0x38u), 0xffffffffu);
    /* 00403dad: mov edx, dword ptr [esi + 0x1c] */ r_edx = R32((u32)(r_esi+0x1cu));
    /* 00403db0: cmp edx, 0x12 */ {  u32 a = r_edx; u32 b = 0x12u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00403db3: je 0x403dd0 */ if (fZ) goto L_00403dd0;
L_00403db5:; BB(0x00403db5);
    /* 00403db5: mov dword ptr [esi + 0x1c], 0x12 */ W32((u32)(r_esi+0x1cu), 0x12u);
    /* 00403dbc: mov dword ptr [esi + 0x60], 0 */ W32((u32)(r_esi+0x60u), 0x0u);
    /* 00403dc3: mov eax, dword ptr [0x9a2e30] */ r_eax = R32((u32)(0x9a2e30u));
    /* 00403dc8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00403dca: je 0x403dd0 */ if (fZ) goto L_00403dd0;
L_00403dcc:; BB(0x00403dcc);
    /* 00403dcc: mov ecx, esi */ r_ecx = r_esi;
    /* 00403dce: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x403dd0u); call_ind(t); }
L_00403dd0:; BB(0x00403dd0);
    /* 00403dd0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00403dd1: ret  */ FN_RET(0x00403d90); r_esp += 4; return;
}

void f_00403dd4(void) /* sub_403DD4 */
{
    FN_ENTER(0x00403dd4);
    /* 00403dd4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00403dd5: mov esi, ecx */ r_esi = r_ecx;
    /* 00403dd7: push dword ptr [esi + 0x58] */ { u32 v = R32((u32)(r_esi+0x58u)); r_esp -= 4; W32(r_esp, v); }
    /* 00403dda: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x403ddfu); f_0061cdb0();
    /* 00403ddf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00403de0: call 0x6c44b4 */ r_esp -= 4; W32(r_esp, 0x403de5u); f_006c44b4();
    /* 00403de5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00403de6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00403de8: call 0x82c21c */ r_esp -= 4; W32(r_esp, 0x403dedu); f_0082c21c();
    /* 00403ded: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00403df0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00403df2: jne 0x403e17 */ if (!fZ) goto L_00403e17;
L_00403df4:; BB(0x00403df4);
    /* 00403df4: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 00403df7: cmp eax, 0xd */ {  u32 a = r_eax; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00403dfa: je 0x403e17 */ if (fZ) goto L_00403e17;
L_00403dfc:; BB(0x00403dfc);
    /* 00403dfc: mov dword ptr [esi + 0x1c], 0xd */ W32((u32)(r_esi+0x1cu), 0xdu);
    /* 00403e03: mov dword ptr [esi + 0x60], 0 */ W32((u32)(r_esi+0x60u), 0x0u);
    /* 00403e0a: mov eax, dword ptr [0x9a2e08] */ r_eax = R32((u32)(0x9a2e08u));
    /* 00403e0f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00403e11: je 0x403e17 */ if (fZ) goto L_00403e17;
L_00403e13:; BB(0x00403e13);
    /* 00403e13: mov ecx, esi */ r_ecx = r_esi;
    /* 00403e15: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x403e17u); call_ind(t); }
L_00403e17:; BB(0x00403e17);
    /* 00403e17: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00403e18: ret  */ FN_RET(0x00403dd4); r_esp += 4; return;
}

void f_00403e1c(void) /* sub_403E1C */
{
    FN_ENTER(0x00403e1c);
    /* 00403e1c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00403e1d: mov esi, ecx */ r_esi = r_ecx;
    /* 00403e1f: add dword ptr [esi + 0x60], 1 */ { u32 ad = (u32)(r_esi+0x60u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00403e23: call 0x407734 */ r_esp -= 4; W32(r_esp, 0x403e28u); f_00407734();
    /* 00403e28: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00403e2a: jne 0x403e2e */ if (!fZ) goto L_00403e2e;
L_00403e2c:; BB(0x00403e2c);
    /* 00403e2c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00403e2d: ret  */ FN_RET(0x00403e1c); r_esp += 4; return;
L_00403e2e:; BB(0x00403e2e);
    /* 00403e2e: mov eax, dword ptr [esi + 0x58] */ r_eax = R32((u32)(r_esi+0x58u));
    /* 00403e31: mov dword ptr [esi + eax*8 + 0x3c], 0xffffffff */ W32((u32)(r_esi+r_eax*8+0x3cu), 0xffffffffu);
    /* 00403e39: mov edx, dword ptr [esi + 0x1c] */ r_edx = R32((u32)(r_esi+0x1cu));
    /* 00403e3c: cmp edx, 0x12 */ {  u32 a = r_edx; u32 b = 0x12u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00403e3f: je 0x403e5c */ if (fZ) goto L_00403e5c;
L_00403e41:; BB(0x00403e41);
    /* 00403e41: mov dword ptr [esi + 0x1c], 0x12 */ W32((u32)(r_esi+0x1cu), 0x12u);
    /* 00403e48: mov dword ptr [esi + 0x60], 0 */ W32((u32)(r_esi+0x60u), 0x0u);
    /* 00403e4f: mov eax, dword ptr [0x9a2e30] */ r_eax = R32((u32)(0x9a2e30u));
    /* 00403e54: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00403e56: je 0x403e5c */ if (fZ) goto L_00403e5c;
L_00403e58:; BB(0x00403e58);
    /* 00403e58: mov ecx, esi */ r_ecx = r_esi;
    /* 00403e5a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x403e5cu); call_ind(t); }
L_00403e5c:; BB(0x00403e5c);
    /* 00403e5c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00403e5d: ret  */ FN_RET(0x00403e1c); r_esp += 4; return;
}

void f_00403e60(void) /* sub_403E60 */
{
    FN_ENTER(0x00403e60);
    /* 00403e60: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00403e61: mov esi, ecx */ r_esi = r_ecx;
    /* 00403e63: add dword ptr [esi + 0x60], 1 */ { u32 ad = (u32)(r_esi+0x60u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00403e67: call 0x407734 */ r_esp -= 4; W32(r_esp, 0x403e6cu); f_00407734();
    /* 00403e6c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00403e6e: jne 0x403e72 */ if (!fZ) goto L_00403e72;
L_00403e70:; BB(0x00403e70);
    /* 00403e70: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00403e71: ret  */ FN_RET(0x00403e60); r_esp += 4; return;
L_00403e72:; BB(0x00403e72);
    /* 00403e72: mov eax, dword ptr [0xa95de0] */ r_eax = R32((u32)(0xa95de0u));
    /* 00403e77: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00403e79: je 0x403e7d */ if (fZ) goto L_00403e7d;
L_00403e7b:; BB(0x00403e7b);
    /* 00403e7b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00403e7c: ret  */ FN_RET(0x00403e60); r_esp += 4; return;
L_00403e7d:; BB(0x00403e7d);
    /* 00403e7d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00403e7f: call 0x82c3a8 */ r_esp -= 4; W32(r_esp, 0x403e84u); f_0082c3a8();
    /* 00403e84: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00403e85: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 00403e88: mov dword ptr [esi + 0x34], 1 */ W32((u32)(r_esi+0x34u), 0x1u);
    /* 00403e8f: cmp eax, 0x13 */ {  u32 a = r_eax; u32 b = 0x13u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00403e92: je 0x403eaf */ if (fZ) goto L_00403eaf;
L_00403e94:; BB(0x00403e94);
    /* 00403e94: mov dword ptr [esi + 0x1c], 0x13 */ W32((u32)(r_esi+0x1cu), 0x13u);
    /* 00403e9b: mov dword ptr [esi + 0x60], 0 */ W32((u32)(r_esi+0x60u), 0x0u);
    /* 00403ea2: mov eax, dword ptr [0x9a2e38] */ r_eax = R32((u32)(0x9a2e38u));
    /* 00403ea7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00403ea9: je 0x403eaf */ if (fZ) goto L_00403eaf;
L_00403eab:; BB(0x00403eab);
    /* 00403eab: mov ecx, esi */ r_ecx = r_esi;
    /* 00403ead: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x403eafu); call_ind(t); }
L_00403eaf:; BB(0x00403eaf);
    /* 00403eaf: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00403eb0: ret  */ FN_RET(0x00403e60); r_esp += 4; return;
}

void f_00403eb4(void) /* sub_403EB4 */
{
    FN_ENTER(0x00403eb4);
    /* 00403eb4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00403eb5: mov esi, ecx */ r_esi = r_ecx;
    /* 00403eb7: push dword ptr [esi + 0x58] */ { u32 v = R32((u32)(r_esi+0x58u)); r_esp -= 4; W32(r_esp, v); }
    /* 00403eba: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x403ebfu); f_0061cdb0();
    /* 00403ebf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00403ec0: add dword ptr [esi + 0x60], 1 */ { u32 ad = (u32)(r_esi+0x60u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00403ec4: call 0x407734 */ r_esp -= 4; W32(r_esp, 0x403ec9u); f_00407734();
    /* 00403ec9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00403ecb: jne 0x403ecf */ if (!fZ) goto L_00403ecf;
L_00403ecd:; BB(0x00403ecd);
    /* 00403ecd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00403ece: ret  */ FN_RET(0x00403eb4); r_esp += 4; return;
L_00403ecf:; BB(0x00403ecf);
    /* 00403ecf: mov eax, dword ptr [0xa95de0] */ r_eax = R32((u32)(0xa95de0u));
    /* 00403ed4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00403ed6: je 0x403eda */ if (fZ) goto L_00403eda;
L_00403ed8:; BB(0x00403ed8);
    /* 00403ed8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00403ed9: ret  */ FN_RET(0x00403eb4); r_esp += 4; return;
L_00403eda:; BB(0x00403eda);
    /* 00403eda: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00403edc: call 0x82c3a8 */ r_esp -= 4; W32(r_esp, 0x403ee1u); f_0082c3a8();
    /* 00403ee1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00403ee2: mov eax, dword ptr [esi + 0x58] */ r_eax = R32((u32)(r_esi+0x58u));
    /* 00403ee5: mov dword ptr [esi + eax*8 + 0x38], 1 */ W32((u32)(r_esi+r_eax*8+0x38u), 0x1u);
    /* 00403eed: mov edx, dword ptr [esi + 0x1c] */ r_edx = R32((u32)(r_esi+0x1cu));
    /* 00403ef0: cmp edx, 0x13 */ {  u32 a = r_edx; u32 b = 0x13u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00403ef3: je 0x403f10 */ if (fZ) goto L_00403f10;
L_00403ef5:; BB(0x00403ef5);
    /* 00403ef5: mov dword ptr [esi + 0x1c], 0x13 */ W32((u32)(r_esi+0x1cu), 0x13u);
    /* 00403efc: mov dword ptr [esi + 0x60], 0 */ W32((u32)(r_esi+0x60u), 0x0u);
    /* 00403f03: mov eax, dword ptr [0x9a2e38] */ r_eax = R32((u32)(0x9a2e38u));
    /* 00403f08: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00403f0a: je 0x403f10 */ if (fZ) goto L_00403f10;
L_00403f0c:; BB(0x00403f0c);
    /* 00403f0c: mov ecx, esi */ r_ecx = r_esi;
    /* 00403f0e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x403f10u); call_ind(t); }
L_00403f10:; BB(0x00403f10);
    /* 00403f10: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00403f11: ret  */ FN_RET(0x00403eb4); r_esp += 4; return;
}

void f_00403f14(void) /* sub_403F14 */
{
    FN_ENTER(0x00403f14);
    /* 00403f14: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00403f15: mov edi, ecx */ r_edi = r_ecx;
    /* 00403f17: push dword ptr [edi + 0x58] */ { u32 v = R32((u32)(r_edi+0x58u)); r_esp -= 4; W32(r_esp, v); }
    /* 00403f1a: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x403f1fu); f_0061cdb0();
    /* 00403f1f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00403f21: call 0x6c2914 */ r_esp -= 4; W32(r_esp, 0x403f26u); f_006c2914();
    /* 00403f26: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00403f29: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00403f2b: je 0x403f2f */ if (fZ) goto L_00403f2f;
L_00403f2d:; BB(0x00403f2d);
    /* 00403f2d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00403f2e: ret  */ FN_RET(0x00403f14); r_esp += 4; return;
L_00403f2f:; BB(0x00403f2f);
    /* 00403f2f: mov eax, dword ptr [edi + 0x1c] */ r_eax = R32((u32)(r_edi+0x1cu));
    /* 00403f32: cmp eax, 0x11 */ {  u32 a = r_eax; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00403f35: je 0x403f52 */ if (fZ) goto L_00403f52;
L_00403f37:; BB(0x00403f37);
    /* 00403f37: mov dword ptr [edi + 0x1c], 0x11 */ W32((u32)(r_edi+0x1cu), 0x11u);
    /* 00403f3e: mov dword ptr [edi + 0x60], 0 */ W32((u32)(r_edi+0x60u), 0x0u);
    /* 00403f45: mov eax, dword ptr [0x9a2e28] */ r_eax = R32((u32)(0x9a2e28u));
    /* 00403f4a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00403f4c: je 0x403f52 */ if (fZ) goto L_00403f52;
L_00403f4e:; BB(0x00403f4e);
    /* 00403f4e: mov ecx, edi */ r_ecx = r_edi;
    /* 00403f50: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x403f52u); call_ind(t); }
L_00403f52:; BB(0x00403f52);
    /* 00403f52: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00403f53: ret  */ FN_RET(0x00403f14); r_esp += 4; return;
}

void f_00403f20(void)
{
    FN_ENTER(0x00403f20);
    /* 00403f20: add al, ch */ {  u32 a = (u8)r_eax; u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00403f22: out dx, al */ UNSUP(0x00403f22, "out dx, al");
    /* 00403f23: jmp 0xc4c33f53 */ UNSUP(0x00403f23, "jump to code that was not decoded");
}

void f_00403f54(void) /* sub_403F54 */
{
    FN_ENTER(0x00403f54);
    /* 00403f54: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00403f55: mov esi, ecx */ r_esi = r_ecx;
    /* 00403f57: push dword ptr [esi + 0x58] */ { u32 v = R32((u32)(r_esi+0x58u)); r_esp -= 4; W32(r_esp, v); }
    /* 00403f5a: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x403f5fu); f_0061cdb0();
    /* 00403f5f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00403f60: add dword ptr [esi + 0x60], 1 */ { u32 ad = (u32)(r_esi+0x60u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00403f64: call 0x407734 */ r_esp -= 4; W32(r_esp, 0x403f69u); f_00407734();
    /* 00403f69: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00403f6b: jne 0x403f6f */ if (!fZ) goto L_00403f6f;
L_00403f6d:; BB(0x00403f6d);
    /* 00403f6d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00403f6e: ret  */ FN_RET(0x00403f54); r_esp += 4; return;
L_00403f6f:; BB(0x00403f6f);
    /* 00403f6f: mov eax, dword ptr [0xa95de0] */ r_eax = R32((u32)(0xa95de0u));
    /* 00403f74: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00403f76: je 0x403f7a */ if (fZ) goto L_00403f7a;
L_00403f78:; BB(0x00403f78);
    /* 00403f78: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00403f79: ret  */ FN_RET(0x00403f54); r_esp += 4; return;
L_00403f7a:; BB(0x00403f7a);
    /* 00403f7a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00403f7c: call 0x82c3a8 */ r_esp -= 4; W32(r_esp, 0x403f81u); f_0082c3a8();
    /* 00403f81: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00403f82: mov eax, dword ptr [esi + 0x58] */ r_eax = R32((u32)(r_esi+0x58u));
    /* 00403f85: mov dword ptr [esi + eax*8 + 0x3c], 1 */ W32((u32)(r_esi+r_eax*8+0x3cu), 0x1u);
    /* 00403f8d: mov edx, dword ptr [esi + 0x1c] */ r_edx = R32((u32)(r_esi+0x1cu));
    /* 00403f90: cmp edx, 0x13 */ {  u32 a = r_edx; u32 b = 0x13u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00403f93: je 0x403fb0 */ if (fZ) goto L_00403fb0;
L_00403f95:; BB(0x00403f95);
    /* 00403f95: mov dword ptr [esi + 0x1c], 0x13 */ W32((u32)(r_esi+0x1cu), 0x13u);
    /* 00403f9c: mov dword ptr [esi + 0x60], 0 */ W32((u32)(r_esi+0x60u), 0x0u);
    /* 00403fa3: mov eax, dword ptr [0x9a2e38] */ r_eax = R32((u32)(0x9a2e38u));
    /* 00403fa8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00403faa: je 0x403fb0 */ if (fZ) goto L_00403fb0;
L_00403fac:; BB(0x00403fac);
    /* 00403fac: mov ecx, esi */ r_ecx = r_esi;
    /* 00403fae: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x403fb0u); call_ind(t); }
L_00403fb0:; BB(0x00403fb0);
    /* 00403fb0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00403fb1: ret  */ FN_RET(0x00403f54); r_esp += 4; return;
}

void f_00403fb4(void)
{
    FN_ENTER(0x00403fb4);
    /* 00403fb4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00403fb5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00403fb6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00403fb7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00403fb8: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00403fbb: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00403fbd: mov edi, dword ptr [ebx + 0x34] */ r_edi = R32((u32)(r_ebx+0x34u));
    /* 00403fc0: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00403fc2: je 0x40405a */ if (fZ) goto L_0040405a;
L_00403fc8:; BB(0x00403fc8);
    /* 00403fc8: mov esi, dword ptr [ebx + 0x38] */ r_esi = R32((u32)(r_ebx+0x38u));
    /* 00403fcb: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00403fcd: je 0x40405a */ if (fZ) goto L_0040405a;
L_00403fd3:; BB(0x00403fd3);
    /* 00403fd3: mov ebp, dword ptr [ebx + 0x3c] */ r_ebp = R32((u32)(r_ebx+0x3cu));
    /* 00403fd6: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00403fd8: je 0x40405a */ if (fZ) goto L_0040405a;
L_00403fde:; BB(0x00403fde);
    /* 00403fde: mov edx, dword ptr [ebx + 0x40] */ r_edx = R32((u32)(r_ebx+0x40u));
    /* 00403fe1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00403fe3: je 0x40405a */ if (fZ) goto L_0040405a;
L_00403fe5:; BB(0x00403fe5);
    /* 00403fe5: mov eax, dword ptr [ebx + 0x44] */ r_eax = R32((u32)(r_ebx+0x44u));
    /* 00403fe8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00403fea: je 0x40405a */ if (fZ) goto L_0040405a;
L_00403fec:; BB(0x00403fec);
    /* 00403fec: mov ecx, dword ptr [ebx + 0x48] */ r_ecx = R32((u32)(r_ebx+0x48u));
    /* 00403fef: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 00403ff3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00403ff5: je 0x40405a */ if (fZ) goto L_0040405a;
L_00403ff7:; BB(0x00403ff7);
    /* 00403ff7: mov ecx, dword ptr [ebx + 0x4c] */ r_ecx = R32((u32)(r_ebx+0x4cu));
    /* 00403ffa: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 00403ffe: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404000: je 0x40405a */ if (fZ) goto L_0040405a;
L_00404002:; BB(0x00404002);
    /* 00404002: mov ecx, dword ptr [ebx + 0x50] */ r_ecx = R32((u32)(r_ebx+0x50u));
    /* 00404005: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 00404009: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040400b: je 0x40405a */ if (fZ) goto L_0040405a;
L_0040400d:; BB(0x0040400d);
    /* 0040400d: mov ecx, dword ptr [ebx + 0x54] */ r_ecx = R32((u32)(r_ebx+0x54u));
    /* 00404010: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 00404013: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404015: je 0x40405a */ if (fZ) goto L_0040405a;
L_00404017:; BB(0x00404017);
    /* 00404017: cmp edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040401a: jne 0x4040d6 */ if (!fZ) goto L_004040d6;
L_00404020:; BB(0x00404020);
    /* 00404020: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404023: je 0x40405a */ if (fZ) goto L_0040405a;
L_00404025:; BB(0x00404025);
    /* 00404025: cmp ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404028: je 0x40405a */ if (fZ) goto L_0040405a;
L_0040402a:; BB(0x0040402a);
    /* 0040402a: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040402d: je 0x40405a */ if (fZ) goto L_0040405a;
L_0040402f:; BB(0x0040402f);
    /* 0040402f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404032: je 0x40405a */ if (fZ) goto L_0040405a;
L_00404034:; BB(0x00404034);
    /* 00404034: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 00404038: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040403b: je 0x40405a */ if (fZ) goto L_0040405a;
L_0040403d:; BB(0x0040403d);
    /* 0040403d: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00404041: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404044: je 0x40405a */ if (fZ) goto L_0040405a;
L_00404046:; BB(0x00404046);
    /* 00404046: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0040404a: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040404d: je 0x40405a */ if (fZ) goto L_0040405a;
L_0040404f:; BB(0x0040404f);
    /* 0040404f: mov eax, ecx */ r_eax = r_ecx;
    /* 00404051: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404054: jne 0x4040d6 */ if (!fZ) goto L_004040d6;
L_0040405a:; BB(0x0040405a);
    /* 0040405a: mov edx, dword ptr [ebx + 0x34] */ r_edx = R32((u32)(r_ebx+0x34u));
    /* 0040405d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040405f: jne 0x404093 */ if (!fZ) goto L_00404093;
L_00404061:; BB(0x00404061);
    /* 00404061: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
    /* 00404064: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404067: je 0x404084 */ if (fZ) goto L_00404084;
L_00404069:; BB(0x00404069);
    /* 00404069: mov dword ptr [ebx + 0x1c], 8 */ W32((u32)(r_ebx+0x1cu), 0x8u);
    /* 00404070: mov dword ptr [ebx + 0x60], 0 */ W32((u32)(r_ebx+0x60u), 0x0u);
    /* 00404077: mov eax, dword ptr [0x9a2de0] */ r_eax = R32((u32)(0x9a2de0u));
    /* 0040407c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040407e: je 0x404084 */ if (fZ) goto L_00404084;
L_00404080:; BB(0x00404080);
    /* 00404080: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00404082: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x404084u); call_ind(t); }
L_00404084:; BB(0x00404084);
    /* 00404084: mov dword ptr [ebx + 0x28], 1 */ W32((u32)(r_ebx+0x28u), 0x1u);
    /* 0040408b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0040408e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0040408f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00404090: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00404091: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00404092: ret  */ FN_RET(0x00403fb4); r_esp += 4; return;
L_00404093:; BB(0x00404093);
    /* 00404093: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00404095:; BB(0x00404095);
    /* 00404095: mov ebp, dword ptr [ebx + eax*8 + 0x38] */ r_ebp = R32((u32)(r_ebx+r_eax*8+0x38u));
    /* 00404099: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040409b: je 0x40419a */ if (fZ) goto L_0040419a;
L_004040a1:; BB(0x004040a1);
    /* 004040a1: mov ebp, dword ptr [ebx + eax*8 + 0x3c] */ r_ebp = R32((u32)(r_ebx+r_eax*8+0x3cu));
    /* 004040a5: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004040a7: je 0x404167 */ if (fZ) goto L_00404167;
L_004040ad:; BB(0x004040ad);
    /* 004040ad: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004040b0: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004040b3: jl 0x404095 */ if ((fS!=fO)) goto L_00404095;
L_004040b5:; BB(0x004040b5);
    /* 004040b5: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004040b8: jne 0x4040d6 */ if (!fZ) goto L_004040d6;
L_004040ba:; BB(0x004040ba);
    /* 004040ba: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004040bc:; BB(0x004040bc);
    /* 004040bc: mov edx, dword ptr [ebx + eax*8 + 0x38] */ r_edx = R32((u32)(r_ebx+r_eax*8+0x38u));
    /* 004040c0: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004040c3: je 0x404134 */ if (fZ) goto L_00404134;
L_004040c5:; BB(0x004040c5);
    /* 004040c5: mov edx, dword ptr [ebx + eax*8 + 0x3c] */ r_edx = R32((u32)(r_ebx+r_eax*8+0x3cu));
    /* 004040c9: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004040cc: je 0x404101 */ if (fZ) goto L_00404101;
L_004040ce:; BB(0x004040ce);
    /* 004040ce: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004040d1: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004040d4: jl 0x4040bc */ if ((fS!=fO)) goto L_004040bc;
L_004040d6:; BB(0x004040d6);
    /* 004040d6: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
    /* 004040d9: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004040dc: je 0x4040f9 */ if (fZ) goto L_004040f9;
L_004040de:; BB(0x004040de);
    /* 004040de: mov dword ptr [ebx + 0x1c], 1 */ W32((u32)(r_ebx+0x1cu), 0x1u);
    /* 004040e5: mov dword ptr [ebx + 0x60], 0 */ W32((u32)(r_ebx+0x60u), 0x0u);
    /* 004040ec: mov eax, dword ptr [0x9a2da8] */ r_eax = R32((u32)(0x9a2da8u));
    /* 004040f1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004040f3: je 0x4040f9 */ if (fZ) goto L_004040f9;
L_004040f5:; BB(0x004040f5);
    /* 004040f5: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004040f7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4040f9u); call_ind(t); }
L_004040f9:; BB(0x004040f9);
    /* 004040f9: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004040fc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004040fd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004040fe: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004040ff: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00404100: ret  */ FN_RET(0x00403fb4); r_esp += 4; return;
L_00404101:; BB(0x00404101);
    /* 00404101: mov dword ptr [ebx + 0x58], eax */ W32((u32)(r_ebx+0x58u), r_eax);
    /* 00404104: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
    /* 00404107: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040410a: je 0x404084 */ if (fZ) goto L_00404084;
L_00404110:; BB(0x00404110);
    /* 00404110: mov dword ptr [ebx + 0x1c], 0xc */ W32((u32)(r_ebx+0x1cu), 0xcu);
    /* 00404117: mov dword ptr [ebx + 0x60], 0 */ W32((u32)(r_ebx+0x60u), 0x0u);
    /* 0040411e: mov eax, dword ptr [0x9a2e00] */ r_eax = R32((u32)(0x9a2e00u));
    /* 00404123: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404125: je 0x404084 */ if (fZ) goto L_00404084;
L_0040412b:; BB(0x0040412b);
    /* 0040412b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0040412d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x40412fu); call_ind(t); }
    /* 0040412f: jmp 0x404084 */ goto L_00404084;
L_00404134:; BB(0x00404134);
    /* 00404134: mov dword ptr [ebx + 0x58], eax */ W32((u32)(r_ebx+0x58u), r_eax);
    /* 00404137: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
    /* 0040413a: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040413d: je 0x404084 */ if (fZ) goto L_00404084;
L_00404143:; BB(0x00404143);
    /* 00404143: mov dword ptr [ebx + 0x1c], 0xa */ W32((u32)(r_ebx+0x1cu), 0xau);
    /* 0040414a: mov dword ptr [ebx + 0x60], 0 */ W32((u32)(r_ebx+0x60u), 0x0u);
    /* 00404151: mov eax, dword ptr [0x9a2df0] */ r_eax = R32((u32)(0x9a2df0u));
    /* 00404156: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404158: je 0x404084 */ if (fZ) goto L_00404084;
L_0040415e:; BB(0x0040415e);
    /* 0040415e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00404160: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x404162u); call_ind(t); }
    /* 00404162: jmp 0x404084 */ goto L_00404084;
L_00404167:; BB(0x00404167);
    /* 00404167: mov dword ptr [ebx + 0x58], eax */ W32((u32)(r_ebx+0x58u), r_eax);
    /* 0040416a: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
    /* 0040416d: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404170: je 0x404084 */ if (fZ) goto L_00404084;
L_00404176:; BB(0x00404176);
    /* 00404176: mov dword ptr [ebx + 0x1c], 0xc */ W32((u32)(r_ebx+0x1cu), 0xcu);
    /* 0040417d: mov dword ptr [ebx + 0x60], 0 */ W32((u32)(r_ebx+0x60u), 0x0u);
    /* 00404184: mov eax, dword ptr [0x9a2e00] */ r_eax = R32((u32)(0x9a2e00u));
    /* 00404189: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040418b: je 0x404084 */ if (fZ) goto L_00404084;
L_00404191:; BB(0x00404191);
    /* 00404191: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00404193: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x404195u); call_ind(t); }
    /* 00404195: jmp 0x404084 */ goto L_00404084;
L_0040419a:; BB(0x0040419a);
    /* 0040419a: mov dword ptr [ebx + 0x58], eax */ W32((u32)(r_ebx+0x58u), r_eax);
    /* 0040419d: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
    /* 004041a0: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004041a3: je 0x404084 */ if (fZ) goto L_00404084;
L_004041a9:; BB(0x004041a9);
    /* 004041a9: mov dword ptr [ebx + 0x1c], 0xa */ W32((u32)(r_ebx+0x1cu), 0xau);
    /* 004041b0: mov dword ptr [ebx + 0x60], 0 */ W32((u32)(r_ebx+0x60u), 0x0u);
    /* 004041b7: mov eax, dword ptr [0x9a2df0] */ r_eax = R32((u32)(0x9a2df0u));
    /* 004041bc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004041be: je 0x404084 */ if (fZ) goto L_00404084;
L_004041c4:; BB(0x004041c4);
    /* 004041c4: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004041c6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4041c8u); call_ind(t); }
    /* 004041c8: jmp 0x404084 */ goto L_00404084;
}

