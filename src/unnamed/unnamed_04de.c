#include "protos.h"

void f_004de0e8(void) /* sub_4DE0E8 */
{
    FN_ENTER(0x004de0e8);
    /* 004de0e8: mov eax, dword ptr [0xa49510] */ r_eax = R32((u32)(0xa49510u));
    /* 004de0ed: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004de0ef: je 0x4de103 */ if (fZ) goto L_004de103;
L_004de0f1:; BB(0x004de0f1);
    /* 004de0f1: movsx eax, byte ptr [ecx + 0xc2] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ecx+0xc2u));
    /* 004de0f8: cmp eax, dword ptr [0xaafca0] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaafca0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004de0fe: jne 0x4de103 */ if (!fZ) goto L_004de103;
L_004de100:; BB(0x004de100);
    /* 004de100: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004de102: ret  */ FN_RET(0x004de0e8); r_esp += 4; return;
L_004de103:; BB(0x004de103);
    /* 004de103: mov eax, 1 */ r_eax = 0x1u;
    /* 004de108: ret  */ FN_RET(0x004de0e8); r_esp += 4; return;
}

void f_004de10c(void) /* sub_4DE10C */
{
    FN_ENTER(0x004de10c);
    /* 004de10c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004de10d: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004de110: mov esi, ecx */ r_esi = r_ecx;
    /* 004de112: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 004de118: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x4de11du); f_0068d5a8();
    /* 004de11d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004de11e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004de120: je 0x4de158 */ if (fZ) goto L_004de158;
L_004de122:; BB(0x004de122);
    /* 004de122: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 004de125: mov edx, dword ptr [esi + 0x38] */ r_edx = R32((u32)(r_esi+0x38u));
    /* 004de128: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 004de12b: mov edx, dword ptr [esi + 0x3c] */ r_edx = R32((u32)(r_esi+0x3cu));
    /* 004de12e: mov esi, dword ptr [esi + 0x40] */ r_esi = R32((u32)(r_esi+0x40u));
    /* 004de131: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 004de135: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 004de139: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004de13c: mov edx, eax */ r_edx = r_eax;
    /* 004de13e: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x4de143u); f_0082f9c4();
    /* 004de143: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 004de14b: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 004de14e: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x4de153u); f_0083173c();
    /* 004de153: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004de156: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004de157: ret  */ FN_RET(0x004de10c); r_esp += 4; return;
L_004de158:; BB(0x004de158);
    /* 004de158: fld dword ptr [0x909dc4] */ FPUSH(R_F32((u32)(0x909dc4u)));
    /* 004de15e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004de161: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004de162: ret  */ FN_RET(0x004de10c); r_esp += 4; return;
}

void f_004de164(void) /* sub_4DE164 */
{
    FN_ENTER(0x004de164);
    /* 004de164: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004de165: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004de168: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004de16a: fld dword ptr [0x909dc0] */ FPUSH(R_F32((u32)(0x909dc0u)));
    /* 004de170: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 004de174: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 004de17a: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x4de17fu); f_0068d5a8();
    /* 004de17f: mov edx, eax */ r_edx = r_eax;
    /* 004de181: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004de184: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004de186: je 0x4de28d */ if (fZ) goto L_004de28d;
L_004de18c:; BB(0x004de18c);
    /* 004de18c: mov dword ptr [esp + 0x20], esi */ W32((u32)(r_esp+0x20u), r_esi);
    /* 004de190: mov esi, ebx */ r_esi = r_ebx;
    /* 004de192: mov dword ptr [esp + 0x1c], edi */ W32((u32)(r_esp+0x1cu), r_edi);
    /* 004de196: mov dword ptr [esp + 0x18], ebp */ W32((u32)(r_esp+0x18u), r_ebp);
    /* 004de19a: add edx, 0x38 */ {  u32 a = r_edx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004de19d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004de19f: mov ebx, eax */ r_ebx = r_eax;
    /* 004de1a1: mov ebp, edx */ r_ebp = r_edx;
L_004de1a3:; BB(0x004de1a3);
    /* 004de1a3: cmp ebx, dword ptr [esi + 0xac] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esi+0xacu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004de1a9: je 0x4de213 */ if (fZ) goto L_004de213;
L_004de1ab:; BB(0x004de1ab);
    /* 004de1ab: lea edx, [ebx + ebx] */ r_edx = (u32)(r_ebx+r_ebx);
    /* 004de1ae: lea edi, [edx + edx] */ r_edi = (u32)(r_edx+r_edx);
    /* 004de1b1: lea ecx, [edi + edi] */ r_ecx = (u32)(r_edi+r_edi);
    /* 004de1b4: add ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004de1b6: fld dword ptr [ecx + 0xa498b8] */ FPUSH(R_F32((u32)(r_ecx+0xa498b8u)));
    /* 004de1bc: fcomp dword ptr [0x909dbc] */ fx_compare(ST(0), R_F32((u32)(0x909dbcu))); FPOP();
    /* 004de1c2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004de1c4: mov ecx, dword ptr [ecx + 0xa498b8] */ r_ecx = R32((u32)(r_ecx+0xa498b8u));
    /* 004de1ca: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004de1cb: je 0x4de213 */ if (fZ) goto L_004de213;
L_004de1cd:; BB(0x004de1cd);
    /* 004de1cd: mov eax, dword ptr [edi + edx*4 + 0xa498b4] */ r_eax = R32((u32)(r_edi+r_edx*4+0xa498b4u));
    /* 004de1d4: mov edi, dword ptr [edi + edx*4 + 0xa498bc] */ r_edi = R32((u32)(r_edi+r_edx*4+0xa498bcu));
    /* 004de1db: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 004de1de: mov edx, ebp */ r_edx = r_ebp;
    /* 004de1e0: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 004de1e4: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
    /* 004de1e8: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 004de1eb: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x4de1f0u); f_0082f9c4();
    /* 004de1f0: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 004de1f8: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 004de1fb: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x4de200u); f_0083173c();
    /* 004de200: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 004de204: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 004de206: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004de208: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004de209: jbe 0x4de2fa */ if ((fC||fZ)) goto L_004de2fa;
L_004de20f:; BB(0x004de20f);
    /* 004de20f: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
L_004de213:; BB(0x004de213);
    /* 004de213: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004de216: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004de219: jl 0x4de1a3 */ if ((fS!=fO)) goto L_004de1a3;
L_004de21b:; BB(0x004de21b);
    /* 004de21b: mov edi, dword ptr [esp + 0x1c] */ r_edi = R32((u32)(r_esp+0x1cu));
    /* 004de21f: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 004de223: fcomp dword ptr [0x909c98] */ fx_compare(ST(0), R_F32((u32)(0x909c98u))); FPOP();
    /* 004de229: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004de22b: mov edx, ebp */ r_edx = r_ebp;
    /* 004de22d: mov ebx, esi */ r_ebx = r_esi;
    /* 004de22f: mov esi, dword ptr [esp + 0x20] */ r_esi = R32((u32)(r_esp+0x20u));
    /* 004de233: mov ebp, dword ptr [esp + 0x18] */ r_ebp = R32((u32)(r_esp+0x18u));
    /* 004de237: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004de238: je 0x4de28d */ if (fZ) goto L_004de28d;
L_004de23a:; BB(0x004de23a);
    /* 004de23a: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 004de23e: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 004de241: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 004de245: mov eax, dword ptr [ebx + 0x3c] */ r_eax = R32((u32)(r_ebx+0x3cu));
    /* 004de248: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 004de24c: mov eax, dword ptr [ebx + 0x40] */ r_eax = R32((u32)(r_ebx+0x40u));
    /* 004de24f: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 004de253: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x4de258u); f_0082f9c4();
    /* 004de258: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 004de260: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 004de264: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x4de269u); f_0083173c();
    /* 004de269: fcom dword ptr [esp + 0x24] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x24u))); 
    /* 004de26d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004de26f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004de270: jae 0x4de276 */ if (!fC) goto L_004de276;
L_004de272:; BB(0x004de272);
    /* 004de272: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004de274: jmp 0x4de28d */ goto L_004de28d;
L_004de276:; BB(0x004de276);
    /* 004de276: fcomp dword ptr [esp + 0x24] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x24u))); FPOP();
    /* 004de27a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004de27c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004de27d: jne 0x4de2cc */ if (!fZ) goto L_004de2cc;
L_004de27f:; BB(0x004de27f);
    /* 004de27f: mov eax, dword ptr [ebx + 0xac] */ r_eax = R32((u32)(r_ebx+0xacu));
    /* 004de285: cmp eax, dword ptr [0xa9c4f4] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa9c4f4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004de28b: jne 0x4de2cc */ if (!fZ) goto L_004de2cc;
L_004de28d:; BB(0x004de28d);
    /* 004de28d: fld dword ptr [ebx + 0xb0] */ FPUSH(R_F32((u32)(r_ebx+0xb0u)));
    /* 004de293: fcomp dword ptr [0x909c94] */ fx_compare(ST(0), R_F32((u32)(0x909c94u))); FPOP();
    /* 004de299: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004de29b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004de29c: jae 0x4de2cc */ if (!fC) goto L_004de2cc;
L_004de29e:; BB(0x004de29e);
    /* 004de29e: fld dword ptr [0x909c90] */ FPUSH(R_F32((u32)(0x909c90u)));
    /* 004de2a4: fadd dword ptr [ebx + 0xb4] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0xb4u));
    /* 004de2aa: fcom dword ptr [0x909db4] */ fx_compare(ST(0), R_F32((u32)(0x909db4u))); 
    /* 004de2b0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004de2b2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004de2b3: jbe 0x4de2c4 */ if ((fC||fZ)) goto L_004de2c4;
L_004de2b5:; BB(0x004de2b5);
    /* 004de2b5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004de2b7: mov eax, 0x3f800000 */ r_eax = 0x3f800000u;
    /* 004de2bc: mov dword ptr [ebx + 0xb4], eax */ W32((u32)(r_ebx+0xb4u), r_eax);
    /* 004de2c2: jmp 0x4de2f5 */ goto L_004de2f5;
L_004de2c4:; BB(0x004de2c4);
    /* 004de2c4: fstp dword ptr [ebx + 0xb4] */ W_F32((u32)(r_ebx+0xb4u), ST(0)); FPOP();
    /* 004de2ca: jmp 0x4de2f5 */ goto L_004de2f5;
L_004de2cc:; BB(0x004de2cc);
    /* 004de2cc: fld dword ptr [0x909c8c] */ FPUSH(R_F32((u32)(0x909c8cu)));
    /* 004de2d2: fadd dword ptr [ebx + 0xb4] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0xb4u));
    /* 004de2d8: fcom dword ptr [0x909db8] */ fx_compare(ST(0), R_F32((u32)(0x909db8u))); 
    /* 004de2de: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004de2e0: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004de2e1: jae 0x4de2ef */ if (!fC) goto L_004de2ef;
L_004de2e3:; BB(0x004de2e3);
    /* 004de2e3: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004de2e5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004de2e7: mov dword ptr [ebx + 0xb4], eax */ W32((u32)(r_ebx+0xb4u), r_eax);
    /* 004de2ed: jmp 0x4de2f5 */ goto L_004de2f5;
L_004de2ef:; BB(0x004de2ef);
    /* 004de2ef: fstp dword ptr [ebx + 0xb4] */ W_F32((u32)(r_ebx+0xb4u), ST(0)); FPOP();
L_004de2f5:; BB(0x004de2f5);
    /* 004de2f5: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004de2f8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004de2f9: ret  */ FN_RET(0x004de164); r_esp += 4; return;
L_004de2fa:; BB(0x004de2fa);
    /* 004de2fa: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004de2fc: jmp 0x4de213 */ goto L_004de213;
}

void f_004de304(void) /* sub_4DE304 */
{
    FN_ENTER(0x004de304);
    /* 004de304: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004de305: sub esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004de30b: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004de30d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004de30f: call 0x4de810 */ r_esp -= 4; W32(r_esp, 0x4de314u); f_004de810();
    /* 004de314: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004de316: jne 0x4de320 */ if (!fZ) goto L_004de320;
L_004de318:; BB(0x004de318);
    /* 004de318: add esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004de31e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004de31f: ret  */ FN_RET(0x004de304); r_esp += 4; return;
L_004de320:; BB(0x004de320);
    /* 004de320: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004de322: call 0x4de870 */ r_esp -= 4; W32(r_esp, 0x4de327u); f_004de870();
    /* 004de327: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004de329: call 0x4d91f4 */ r_esp -= 4; W32(r_esp, 0x4de32eu); f_004d91f4();
    /* 004de32e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004de32f: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004de332: jne 0x4de340 */ if (!fZ) goto L_004de340;
L_004de334:; BB(0x004de334);
    /* 004de334: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004de336: call 0x4de920 */ r_esp -= 4; W32(r_esp, 0x4de33bu); f_004de920();
    /* 004de33b: jmp 0x4de728 */ goto L_004de728;
L_004de340:; BB(0x004de340);
    /* 004de340: fld dword ptr [ebx + 0xb4] */ FPUSH(R_F32((u32)(r_ebx+0xb4u)));
    /* 004de346: fcomp dword ptr [0x909db0] */ fx_compare(ST(0), R_F32((u32)(0x909db0u))); FPOP();
    /* 004de34c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004de34e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004de34f: je 0x4de728 */ if (fZ) goto L_004de728;
L_004de355:; BB(0x004de355);
    /* 004de355: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 004de358: mov edx, dword ptr [ebx + 0x3c] */ r_edx = R32((u32)(r_ebx+0x3cu));
    /* 004de35b: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 004de35f: mov eax, dword ptr [ebx + 0x40] */ r_eax = R32((u32)(r_ebx+0x40u));
    /* 004de362: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004de364: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 004de368: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 004de36c: fadd dword ptr [0x909cb0] */ ST(0) = ST(0) + R_F32((u32)(0x909cb0u));
    /* 004de372: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 004de376: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 004de37a: lea edx, [esp + 0x28] */ r_edx = (u32)(r_esp+0x28u);
    /* 004de37e: lea eax, [esp + 0x1c] */ r_eax = (u32)(r_esp+0x1cu);
    /* 004de382: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004de383: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004de384: call 0x4de730 */ r_esp -= 4; W32(r_esp, 0x4de389u); f_004de730();
    /* 004de389: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004de38b: je 0x4de728 */ if (fZ) goto L_004de728;
L_004de391:; BB(0x004de391);
    /* 004de391: fld dword ptr [0x909db0] */ FPUSH(R_F32((u32)(0x909db0u)));
    /* 004de397: fstp dword ptr [esp + 0x7c] */ W_F32((u32)(r_esp+0x7cu), ST(0)); FPOP();
    /* 004de39b: mov dword ptr [esp + 0x6c], edi */ W32((u32)(r_esp+0x6cu), r_edi);
    /* 004de39f: mov dword ptr [esp + 0x70], ebp */ W32((u32)(r_esp+0x70u), r_ebp);
    /* 004de3a3: lea edx, [ebx + 0x144] */ r_edx = (u32)(r_ebx+0x144u);
    /* 004de3a9: lea eax, [ebx + 0x384] */ r_eax = (u32)(r_ebx+0x384u);
    /* 004de3af: mov ebp, eax */ r_ebp = r_eax;
    /* 004de3b1: mov edi, edx */ r_edi = r_edx;
L_004de3b3:; BB(0x004de3b3);
    /* 004de3b3: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004de3b4: call 0x7ac344 */ r_esp -= 4; W32(r_esp, 0x4de3b9u); f_007ac344();
    /* 004de3b9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004de3ba: fld dword ptr [esp + 0x7c] */ FPUSH(R_F32((u32)(r_esp+0x7cu)));
    /* 004de3be: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 004de3c2: fild dword ptr [esp + 0x30] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x30u)));
    /* 004de3c6: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 004de3c9: fadd dword ptr [eax*4 + 0x909d20] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x909d20u));
    /* 004de3d0: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004de3d2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004de3d4: add edi, 0x60 */ {  u32 a = r_edi; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004de3d7: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004de3d8: jbe 0x4de3dc */ if ((fC||fZ)) goto L_004de3dc;
L_004de3da:; BB(0x004de3da);
    /* 004de3da: fst st(1) */ ST(1) = ST(0);
L_004de3dc:; BB(0x004de3dc);
    /* 004de3dc: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004de3de: fstp dword ptr [esp + 0x7c] */ W_F32((u32)(r_esp+0x7cu), ST(0)); FPOP();
    /* 004de3e2: cmp ebp, edi */ {  u32 a = r_ebp; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004de3e4: jg 0x4de3b3 */ if ((!fZ&&fS==fO)) goto L_004de3b3;
L_004de3e6:; BB(0x004de3e6);
    /* 004de3e6: mov edi, dword ptr [esp + 0x6c] */ r_edi = R32((u32)(r_esp+0x6cu));
    /* 004de3ea: mov ebp, dword ptr [esp + 0x70] */ r_ebp = R32((u32)(r_esp+0x70u));
    /* 004de3ee: fld dword ptr [esp + 0x7c] */ FPUSH(R_F32((u32)(r_esp+0x7cu)));
    /* 004de3f2: fld dword ptr [0x909dac] */ FPUSH(R_F32((u32)(0x909dacu)));
    /* 004de3f8: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004de3fa: fld dword ptr [0x909db0] */ FPUSH(R_F32((u32)(0x909db0u)));
    /* 004de400: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 004de404: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 004de408: fsub st(3) */ ST(0) = ST(0) - ST(3);
    /* 004de40a: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 004de40c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004de40e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004de40f: jb 0x4de41e */ if (fC) goto L_004de41e;
L_004de411:; BB(0x004de411);
    /* 004de411: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 004de413: fcom dword ptr [0x909da8] */ fx_compare(ST(0), R_F32((u32)(0x909da8u))); 
    /* 004de419: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004de41b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004de41c: jbe 0x4de48b */ if ((fC||fZ)) goto L_004de48b;
L_004de41e:; BB(0x004de41e);
    /* 004de41e: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 004de420: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 004de422: fld dword ptr [0x909ca4] */ FPUSH(R_F32((u32)(0x909ca4u)));
    /* 004de428: fadd dword ptr [ebx + 0xb8] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0xb8u));
    /* 004de42e: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004de430: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004de432: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 004de436: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004de437: jae 0x4de44d */ if (!fC) goto L_004de44d;
L_004de439:; BB(0x004de439);
    /* 004de439: fld dword ptr [0x909db0] */ FPUSH(R_F32((u32)(0x909db0u)));
    /* 004de43f: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 004de443: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004de445: mov dword ptr [ebx + 0xb8], eax */ W32((u32)(r_ebx+0xb8u), r_eax);
    /* 004de44b: jmp 0x4de457 */ goto L_004de457;
L_004de44d:; BB(0x004de44d);
    /* 004de44d: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 004de451: fstp dword ptr [ebx + 0xb8] */ W_F32((u32)(r_ebx+0xb8u), ST(0)); FPOP();
L_004de457:; BB(0x004de457);
    /* 004de457: fld dword ptr [0x909ca0] */ FPUSH(R_F32((u32)(0x909ca0u)));
    /* 004de45d: fadd dword ptr [ebx + 0xbc] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0xbcu));
    /* 004de463: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004de465: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004de467: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004de469: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004de46b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004de46c: jae 0x4de483 */ if (!fC) goto L_004de483;
L_004de46e:; BB(0x004de46e);
    /* 004de46e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004de470: fld dword ptr [0x909db0] */ FPUSH(R_F32((u32)(0x909db0u)));
    /* 004de476: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004de478: mov dword ptr [ebx + 0xbc], eax */ W32((u32)(r_ebx+0xbcu), r_eax);
    /* 004de47e: jmp 0x4de503 */ goto L_004de503;
L_004de483:; BB(0x004de483);
    /* 004de483: fst dword ptr [ebx + 0xbc] */ W_F32((u32)(r_ebx+0xbcu), ST(0));
    /* 004de489: jmp 0x4de503 */ goto L_004de503;
L_004de48b:; BB(0x004de48b);
    /* 004de48b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004de48d: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 004de48f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004de491: fld dword ptr [0x909cac] */ FPUSH(R_F32((u32)(0x909cacu)));
    /* 004de497: fadd dword ptr [ebx + 0xb8] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0xb8u));
    /* 004de49d: fld dword ptr [0x909da4] */ FPUSH(R_F32((u32)(0x909da4u)));
    /* 004de4a3: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004de4a5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004de4a7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004de4a9: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 004de4ad: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004de4ae: jae 0x4de4c7 */ if (!fC) goto L_004de4c7;
L_004de4b0:; BB(0x004de4b0);
    /* 004de4b0: fld dword ptr [0x909da4] */ FPUSH(R_F32((u32)(0x909da4u)));
    /* 004de4b6: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 004de4ba: mov eax, 0x3f800000 */ r_eax = 0x3f800000u;
    /* 004de4bf: mov dword ptr [ebx + 0xb8], eax */ W32((u32)(r_ebx+0xb8u), r_eax);
    /* 004de4c5: jmp 0x4de4d1 */ goto L_004de4d1;
L_004de4c7:; BB(0x004de4c7);
    /* 004de4c7: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 004de4cb: fstp dword ptr [ebx + 0xb8] */ W_F32((u32)(r_ebx+0xb8u), ST(0)); FPOP();
L_004de4d1:; BB(0x004de4d1);
    /* 004de4d1: fld dword ptr [0x909ca8] */ FPUSH(R_F32((u32)(0x909ca8u)));
    /* 004de4d7: fadd dword ptr [ebx + 0xbc] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0xbcu));
    /* 004de4dd: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004de4df: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004de4e1: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004de4e3: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004de4e5: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004de4e6: jbe 0x4de4fd */ if ((fC||fZ)) goto L_004de4fd;
L_004de4e8:; BB(0x004de4e8);
    /* 004de4e8: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004de4ea: fld dword ptr [0x909da4] */ FPUSH(R_F32((u32)(0x909da4u)));
    /* 004de4f0: mov eax, 0x3f800000 */ r_eax = 0x3f800000u;
    /* 004de4f5: mov dword ptr [ebx + 0xbc], eax */ W32((u32)(r_ebx+0xbcu), r_eax);
    /* 004de4fb: jmp 0x4de503 */ goto L_004de503;
L_004de4fd:; BB(0x004de4fd);
    /* 004de4fd: fst dword ptr [ebx + 0xbc] */ W_F32((u32)(r_ebx+0xbcu), ST(0));
L_004de503:; BB(0x004de503);
    /* 004de503: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 004de507: fld dword ptr [ebx + 0xb4] */ FPUSH(R_F32((u32)(r_ebx+0xb4u)));
    /* 004de50d: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 004de50f: mov ecx, dword ptr [ebx + 0x384] */ r_ecx = R32((u32)(r_ebx+0x384u));
    /* 004de515: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 004de517: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 004de51b: fstp dword ptr [esp + 0x64] */ W_F32((u32)(r_esp+0x64u), ST(0)); FPOP();
    /* 004de51f: shl ecx, 8 */ { u32 c = (8u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 004de522: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x4de527u); f_0082dcbc();
    /* 004de527: fmul dword ptr [0x909da0] */ ST(0) = ST(0) * R_F32((u32)(0x909da0u));
    /* 004de52d: fnstcw word ptr [esp + 0x38] */ W16((u32)(r_esp+0x38u), fcw);
    /* 004de531: movzx eax, word ptr [esp + 0x38] */ r_eax = (u32)R16((u32)(r_esp+0x38u));
    /* 004de536: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004de53b: mov dword ptr [esp + 0x40], eax */ W32((u32)(r_esp+0x40u), r_eax);
    /* 004de53f: fldcw word ptr [esp + 0x40] */ fcw = R16((u32)(r_esp+0x40u));
    /* 004de543: fistp dword ptr [esp + 0x48] */ W32((u32)(r_esp+0x48u), (u32)fx_int32(ST(0))); FPOP();
    /* 004de547: fldcw word ptr [esp + 0x38] */ fcw = R16((u32)(r_esp+0x38u));
    /* 004de54b: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 004de54f: mov edx, dword ptr [esp + 0x48] */ r_edx = R32((u32)(r_esp+0x48u));
    /* 004de553: mov dword ptr [esp + 0x68], esi */ W32((u32)(r_esp+0x68u), r_esi);
    /* 004de557: mov dword ptr [esp + 0x6c], edi */ W32((u32)(r_esp+0x6cu), r_edi);
    /* 004de55b: mov dword ptr [esp + 0x70], ebp */ W32((u32)(r_esp+0x70u), r_ebp);
    /* 004de55f: add edx, 0xc8 */ {  u32 a = r_edx; u32 b = 0xc8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004de565: mov dword ptr [esp + 0x50], edx */ W32((u32)(r_esp+0x50u), r_edx);
    /* 004de569: fild dword ptr [esp + 0x50] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x50u)));
    /* 004de56d: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 004de570: fadd dword ptr [edx*4 + 0x909d20] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x909d20u));
    /* 004de577: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 004de579: fmul dword ptr [esp + 0x64] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x64u));
    /* 004de57d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004de57f: fnstcw word ptr [esp + 0x38] */ W16((u32)(r_esp+0x38u), fcw);
    /* 004de583: movzx eax, word ptr [esp + 0x38] */ r_eax = (u32)R16((u32)(r_esp+0x38u));
    /* 004de588: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004de58d: mov dword ptr [esp + 0x40], eax */ W32((u32)(r_esp+0x40u), r_eax);
    /* 004de591: fldcw word ptr [esp + 0x40] */ fcw = R16((u32)(r_esp+0x40u));
    /* 004de595: fistp qword ptr [esp + 0x48] */ W64((u32)(r_esp+0x48u), (u64)fx_int64(ST(0))); FPOP();
    /* 004de599: fldcw word ptr [esp + 0x38] */ fcw = R16((u32)(r_esp+0x38u));
    /* 004de59d: mov edx, dword ptr [esp + 0x48] */ r_edx = R32((u32)(r_esp+0x48u));
    /* 004de5a1: fnstcw word ptr [esp + 0x38] */ W16((u32)(r_esp+0x38u), fcw);
    /* 004de5a5: movzx eax, word ptr [esp + 0x38] */ r_eax = (u32)R16((u32)(r_esp+0x38u));
    /* 004de5aa: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004de5af: mov dword ptr [esp + 0x40], eax */ W32((u32)(r_esp+0x40u), r_eax);
    /* 004de5b3: fldcw word ptr [esp + 0x40] */ fcw = R16((u32)(r_esp+0x40u));
    /* 004de5b7: fistp qword ptr [esp + 0x48] */ W64((u32)(r_esp+0x48u), (u64)fx_int64(ST(0))); FPOP();
    /* 004de5bb: fldcw word ptr [esp + 0x38] */ fcw = R16((u32)(r_esp+0x38u));
    /* 004de5bf: shl edx, 0x18 */ { u32 c = (24u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 004de5c2: mov ecx, dword ptr [esp + 0x48] */ r_ecx = R32((u32)(r_esp+0x48u));
    /* 004de5c6: mov dword ptr [esp + 0x78], edx */ W32((u32)(r_esp+0x78u), r_edx);
    /* 004de5ca: shl ecx, 0x18 */ { u32 c = (24u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 004de5cd: lea eax, [ebx + 0x144] */ r_eax = (u32)(r_ebx+0x144u);
    /* 004de5d3: add ebx, 0x384 */ {  u32 a = r_ebx; u32 b = 0x384u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004de5d9: or ecx, 0xffffff */ {  u32 a = r_ecx; u32 b = 0xffffffu; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 004de5df: mov esi, eax */ r_esi = r_eax;
    /* 004de5e1: mov edi, ecx */ r_edi = r_ecx;
L_004de5e3:; BB(0x004de5e3);
    /* 004de5e3: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 004de5e7: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 004de5eb: mov ebp, dword ptr [esp + 0x2c] */ r_ebp = R32((u32)(r_esp+0x2cu));
    /* 004de5ef: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004de5f1: fstp dword ptr [esp + 0x74] */ W_F32((u32)(r_esp+0x74u), ST(0)); FPOP();
    /* 004de5f5: fstp dword ptr [esp + 0x7c] */ W_F32((u32)(r_esp+0x7cu), ST(0)); FPOP();
    /* 004de5f9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004de5fa: call 0x858009 */ r_esp -= 4; W32(r_esp, 0x4de5ffu); f_00858009();
    /* 004de5ff: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004de600: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004de602: je 0x4de711 */ if (fZ) goto L_004de711;
L_004de608:; BB(0x004de608);
    /* 004de608: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004de609: call 0x7ac43c */ r_esp -= 4; W32(r_esp, 0x4de60eu); f_007ac43c();
    /* 004de60e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004de60f: fld dword ptr [esp + 0x74] */ FPUSH(R_F32((u32)(r_esp+0x74u)));
    /* 004de613: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 004de617: mov dword ptr [esp + 0x50], eax */ W32((u32)(r_esp+0x50u), r_eax);
    /* 004de61b: fild dword ptr [esp + 0x50] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x50u)));
    /* 004de61f: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 004de622: fadd dword ptr [eax*4 + 0x909d20] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x909d20u));
    /* 004de629: fmul dword ptr [0x909d9c] */ ST(0) = ST(0) * R_F32((u32)(0x909d9cu));
    /* 004de62f: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 004de631: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004de633: fstp dword ptr [esp + 0x74] */ W_F32((u32)(r_esp+0x74u), ST(0)); FPOP();
    /* 004de637: fld dword ptr [0x909db0] */ FPUSH(R_F32((u32)(0x909db0u)));
    /* 004de63d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004de63f: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 004de641: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004de643: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004de644: jbe 0x4de6c8 */ if ((fC||fZ)) goto L_004de6c8;
L_004de64a:; BB(0x004de64a);
    /* 004de64a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004de64c: mov dword ptr [esp + 0x5c], ebx */ W32((u32)(r_esp+0x5cu), r_ebx);
    /* 004de650: mov ebx, dword ptr [esp + 0x78] */ r_ebx = R32((u32)(r_esp+0x78u));
    /* 004de654: mov dword ptr [esp + 0x58], edi */ W32((u32)(r_esp+0x58u), r_edi);
    /* 004de658: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004de65a: mov edi, eax */ r_edi = r_eax;
L_004de65c:; BB(0x004de65c);
    /* 004de65c: movsx edx, word ptr [edi + 0x9b10f4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x9b10f4u));
    /* 004de663: movsx ecx, word ptr [edi + 0x9b10f6] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edi+0x9b10f6u));
    /* 004de66a: mov dword ptr [esp + 0x10], 0x3f000000 */ W32((u32)(r_esp+0x10u), 0x3f000000u);
    /* 004de672: mov dword ptr [esp + 0x50], edx */ W32((u32)(r_esp+0x50u), r_edx);
    /* 004de676: fild dword ptr [esp + 0x50] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x50u)));
    /* 004de67a: fadd dword ptr [esp + 0x74] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x74u));
    /* 004de67e: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004de681: mov dword ptr [esp + 0x14], 1 */ W32((u32)(r_esp+0x14u), 0x1u);
    /* 004de689: mov dword ptr [esp + 0x50], ecx */ W32((u32)(r_esp+0x50u), r_ecx);
    /* 004de68d: fild dword ptr [esp + 0x50] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x50u)));
    /* 004de691: fadd dword ptr [esp + 0x7c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x7cu));
    /* 004de695: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 004de699: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 004de69d: mov dword ptr [esp + 0xc], ebx */ W32((u32)(r_esp+0xcu), r_ebx);
    /* 004de6a1: mov dword ptr [esp + 0x18], 0 */ W32((u32)(r_esp+0x18u), 0x0u);
    /* 004de6a9: call 0x7ab554 */ r_esp -= 4; W32(r_esp, 0x4de6aeu); f_007ab554();
    /* 004de6ae: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004de6b1: cmp edi, 0x20 */ {  u32 a = r_edi; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004de6b4: jl 0x4de65c */ if ((fS!=fO)) goto L_004de65c;
L_004de6b6:; BB(0x004de6b6);
    /* 004de6b6: mov edi, dword ptr [esp + 0x58] */ r_edi = R32((u32)(r_esp+0x58u));
    /* 004de6ba: fld dword ptr [0x909db0] */ FPUSH(R_F32((u32)(0x909db0u)));
    /* 004de6c0: mov dword ptr [esp + 0x78], ebx */ W32((u32)(r_esp+0x78u), r_ebx);
    /* 004de6c4: mov ebx, dword ptr [esp + 0x5c] */ r_ebx = R32((u32)(r_esp+0x5cu));
L_004de6c8:; BB(0x004de6c8);
    /* 004de6c8: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
    /* 004de6cc: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 004de6ce: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004de6d0: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004de6d1: jbe 0x4de703 */ if ((fC||fZ)) goto L_004de703;
L_004de6d3:; BB(0x004de6d3);
    /* 004de6d3: fld dword ptr [esp + 0x74] */ FPUSH(R_F32((u32)(r_esp+0x74u)));
    /* 004de6d7: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004de6da: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 004de6de: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 004de6e2: mov dword ptr [esp + 0x10], 0x3f000000 */ W32((u32)(r_esp+0x10u), 0x3f000000u);
    /* 004de6ea: mov dword ptr [esp + 0xc], edi */ W32((u32)(r_esp+0xcu), r_edi);
    /* 004de6ee: mov dword ptr [esp + 0x14], 1 */ W32((u32)(r_esp+0x14u), 0x1u);
    /* 004de6f6: mov dword ptr [esp + 0x18], 0 */ W32((u32)(r_esp+0x18u), 0x0u);
    /* 004de6fe: call 0x7ab554 */ r_esp -= 4; W32(r_esp, 0x4de703u); f_007ab554();
L_004de703:; BB(0x004de703);
    /* 004de703: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 004de707: fadd dword ptr [0x909c9c] */ ST(0) = ST(0) + R_F32((u32)(0x909c9cu));
    /* 004de70d: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
L_004de711:; BB(0x004de711);
    /* 004de711: add esi, 0x60 */ {  u32 a = r_esi; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004de714: cmp ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004de716: jg 0x4de5e3 */ if ((!fZ&&fS==fO)) goto L_004de5e3;
L_004de71c:; BB(0x004de71c);
    /* 004de71c: mov esi, dword ptr [esp + 0x68] */ r_esi = R32((u32)(r_esp+0x68u));
    /* 004de720: mov edi, dword ptr [esp + 0x6c] */ r_edi = R32((u32)(r_esp+0x6cu));
    /* 004de724: mov ebp, dword ptr [esp + 0x70] */ r_ebp = R32((u32)(r_esp+0x70u));
L_004de728:; BB(0x004de728);
    /* 004de728: add esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004de72e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004de72f: ret  */ FN_RET(0x004de304); r_esp += 4; return;
}

void f_004de730(void) /* sub_4DE730 */
{
    FN_ENTER(0x004de730);
    /* 004de730: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004de731: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004de734: mov edi, dword ptr [esp + 0x24] */ r_edi = R32((u32)(r_esp+0x24u));
    /* 004de738: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 004de73d: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 004de744: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 004de74c: mov dword ptr [esp + 8], 0xbf800000 */ W32((u32)(r_esp+0x8u), 0xbf800000u);
    /* 004de754: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x4de759u); f_0082d990();
    /* 004de759: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
    /* 004de75e: mov edx, dword ptr [eax + 0x194] */ r_edx = R32((u32)(r_eax+0x194u));
    /* 004de764: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004de766: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x4de76bu); f_0082d8bc();
    /* 004de76b: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
    /* 004de770: mov edx, dword ptr [eax + 0x190] */ r_edx = R32((u32)(r_eax+0x190u));
    /* 004de776: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004de778: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x4de77du); f_0082e9e4();
    /* 004de77d: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
    /* 004de782: mov edx, dword ptr [eax + 0x198] */ r_edx = R32((u32)(r_eax+0x198u));
    /* 004de788: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004de78a: call 0x830c04 */ r_esp -= 4; W32(r_esp, 0x4de78fu); f_00830c04();
    /* 004de78f: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 004de792: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004de793: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 004de797: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004de799: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x4de79eu); f_0082eab8();
    /* 004de79e: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x4de7a3u); f_0082da80();
    /* 004de7a3: mov edx, dword ptr [0xa48a54] */ r_edx = R32((u32)(0xa48a54u));
    /* 004de7a9: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 004de7ad: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 004de7af: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 004de7b3: mov eax, dword ptr [edi + 4] */ r_eax = R32((u32)(r_edi+0x4u));
    /* 004de7b6: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 004de7ba: mov eax, dword ptr [edi + 8] */ r_eax = R32((u32)(r_edi+0x8u));
    /* 004de7bd: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 004de7c1: add edx, 0x178 */ {  u32 a = r_edx; u32 b = 0x178u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004de7c7: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x4de7ccu); f_0082f9c4();
    /* 004de7cc: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 004de7cf: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 004de7d3: call 0x82f9e0 */ r_esp -= 4; W32(r_esp, 0x4de7d8u); f_0082f9e0();
    /* 004de7d8: fcomp dword ptr [0x909d98] */ fx_compare(ST(0), R_F32((u32)(0x909d98u))); FPOP();
    /* 004de7de: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004de7e0: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004de7e1: ja 0x4de7ec */ if ((!fC&&!fZ)) goto L_004de7ec;
L_004de7e3:; BB(0x004de7e3);
    /* 004de7e3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004de7e5: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004de7e8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004de7e9: ret 8 */ FN_RET(0x004de730); r_esp += 12; return;
L_004de7ec:; BB(0x004de7ec);
    /* 004de7ec: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x4de7f1u); f_0082d7b0();
    /* 004de7f1: push dword ptr [esp + 0x20] */ { u32 v = R32((u32)(r_esp+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 004de7f5: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004de7f7: mov edx, edi */ r_edx = r_edi;
    /* 004de7f9: call 0x82f09c */ r_esp -= 4; W32(r_esp, 0x4de7feu); f_0082f09c();
    /* 004de7fe: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x4de803u); f_0082da80();
    /* 004de803: mov eax, 1 */ r_eax = 0x1u;
    /* 004de808: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004de80b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004de80c: ret 8 */ FN_RET(0x004de730); r_esp += 12; return;
}

void f_004de810(void) /* sub_4DE810 */
{
    FN_ENTER(0x004de810);
    /* 004de810: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004de811: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004de812: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004de814: call 0x719914 */ r_esp -= 4; W32(r_esp, 0x4de819u); f_00719914();
    /* 004de819: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004de81b: jne 0x4de822 */ if (!fZ) goto L_004de822;
L_004de81d:; BB(0x004de81d);
    /* 004de81d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004de81f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004de820: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004de821: ret  */ FN_RET(0x004de810); r_esp += 4; return;
L_004de822:; BB(0x004de822);
    /* 004de822: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 004de825: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004de827: mov edi, eax */ r_edi = r_eax;
L_004de829:; BB(0x004de829);
    /* 004de829: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004de82a: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x4de82fu); f_0068d5a8();
    /* 004de82f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004de830: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004de832: je 0x4de83f */ if (fZ) goto L_004de83f;
L_004de834:; BB(0x004de834);
    /* 004de834: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 004de837: test edx, 0x2000000 */ {  u32 a = r_edx; u32 b = 0x2000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004de83d: jne 0x4de868 */ if (!fZ) goto L_004de868;
L_004de83f:; BB(0x004de83f);
    /* 004de83f: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004de842: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004de845: jl 0x4de829 */ if ((fS!=fO)) goto L_004de829;
L_004de847:; BB(0x004de847);
    /* 004de847: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 004de84a: fld dword ptr [ebp + 0xb0] */ FPUSH(R_F32((u32)(r_ebp+0xb0u)));
    /* 004de850: fcomp dword ptr [0x909cc0] */ fx_compare(ST(0), R_F32((u32)(0x909cc0u))); FPOP();
    /* 004de856: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004de858: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004de859: jbe 0x4de860 */ if ((fC||fZ)) goto L_004de860;
L_004de85b:; BB(0x004de85b);
    /* 004de85b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004de85d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004de85e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004de85f: ret  */ FN_RET(0x004de810); r_esp += 4; return;
L_004de860:; BB(0x004de860);
    /* 004de860: mov eax, 1 */ r_eax = 0x1u;
    /* 004de865: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004de866: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004de867: ret  */ FN_RET(0x004de810); r_esp += 4; return;
L_004de868:; BB(0x004de868);
    /* 004de868: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 004de86b: jmp 0x4de81d */ goto L_004de81d;
}

void f_004de870(void) /* sub_4DE870 */
{
    FN_ENTER(0x004de870);
    /* 004de870: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004de871: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004de873: mov eax, dword ptr [0xa49910] */ r_eax = R32((u32)(0xa49910u));
    /* 004de878: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004de87a: je 0x4de91e */ if (fZ) goto L_004de91e;
L_004de880:; BB(0x004de880);
    /* 004de880: mov eax, dword ptr [0xa4990c] */ r_eax = R32((u32)(0xa4990cu));
    /* 004de885: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004de887: jne 0x4de8ab */ if (!fZ) goto L_004de8ab;
L_004de889:; BB(0x004de889);
    /* 004de889: mov ecx, dword ptr [0xa498a4] */ r_ecx = R32((u32)(0xa498a4u));
    /* 004de88f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004de891: je 0x4de89c */ if (fZ) goto L_004de89c;
L_004de893:; BB(0x004de893);
    /* 004de893: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004de895: push -8 */ { u32 v = 0xfffffff8u; r_esp -= 4; W32(r_esp, v); }
    /* 004de897: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004de899: call dword ptr [eax + 8] */ { u32 t = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, 0x4de89cu); call_ind(t); }
L_004de89c:; BB(0x004de89c);
    /* 004de89c: mov dword ptr [0xa4990c], 1 */ W32((u32)(0xa4990cu), 0x1u);
    /* 004de8a6: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4de8abu); f_0061cdb0();
L_004de8ab:; BB(0x004de8ab);
    /* 004de8ab: mov eax, dword ptr [ebx + 0x34] */ r_eax = R32((u32)(r_ebx+0x34u));
    /* 004de8ae: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 004de8b1: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 004de8b4: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 004de8b7: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 004de8ba: mov eax, dword ptr [ebx + 0x384] */ r_eax = R32((u32)(r_ebx+0x384u));
    /* 004de8c0: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004de8c2: je 0x4de8cc */ if (fZ) goto L_004de8cc;
L_004de8c4:; BB(0x004de8c4);
    /* 004de8c4: and dword ptr [edx], 0xfffffff7 */ { u32 ad = (u32)(r_edx);  u32 a = R32(ad); u32 b = 0xfffffff7u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 004de8c7: or dword ptr [ecx], 8 */ { u32 ad = (u32)(r_ecx);  u32 a = R32(ad); u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 004de8ca: jmp 0x4de8d2 */ goto L_004de8d2;
L_004de8cc:; BB(0x004de8cc);
    /* 004de8cc: or dword ptr [edx], 8 */ { u32 ad = (u32)(r_edx);  u32 a = R32(ad); u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 004de8cf: and dword ptr [ecx], 0xfffffff7 */ { u32 ad = (u32)(r_ecx);  u32 a = R32(ad); u32 b = 0xfffffff7u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
L_004de8d2:; BB(0x004de8d2);
    /* 004de8d2: mov ecx, dword ptr [0xa498a4] */ r_ecx = R32((u32)(0xa498a4u));
    /* 004de8d8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004de8da: je 0x4de8e3 */ if (fZ) goto L_004de8e3;
L_004de8dc:; BB(0x004de8dc);
    /* 004de8dc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004de8de: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004de8e0: call dword ptr [eax + 0xc] */ { u32 t = R32((u32)(r_eax+0xcu)); r_esp -= 4; W32(r_esp, 0x4de8e3u); call_ind(t); }
L_004de8e3:; BB(0x004de8e3);
    /* 004de8e3: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x4de8e8u); f_0082d7b0();
    /* 004de8e8: lea ecx, [ebx + 0x38] */ r_ecx = (u32)(r_ebx+0x38u);
    /* 004de8eb: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x4de8f0u); f_0082d838();
    /* 004de8f0: mov edx, dword ptr [ebx + 0x60] */ r_edx = R32((u32)(r_ebx+0x60u));
    /* 004de8f3: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004de8f5: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x4de8fau); f_0082d8bc();
    /* 004de8fa: mov ecx, dword ptr [ebx + 0x24] */ r_ecx = R32((u32)(r_ebx+0x24u));
    /* 004de8fd: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x4de902u); f_00829cc8();
    /* 004de902: mov ecx, dword ptr [ebx + 0x34] */ r_ecx = R32((u32)(r_ebx+0x34u));
    /* 004de905: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x4de90au); f_00831758();
    /* 004de90a: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x4de90fu); f_0082da80();
    /* 004de90f: mov ecx, dword ptr [0xa498a4] */ r_ecx = R32((u32)(0xa498a4u));
    /* 004de915: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004de917: je 0x4de91e */ if (fZ) goto L_004de91e;
L_004de919:; BB(0x004de919);
    /* 004de919: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004de91b: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x4de91eu); call_ind(t); }
L_004de91e:; BB(0x004de91e);
    /* 004de91e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004de91f: ret  */ FN_RET(0x004de870); r_esp += 4; return;
}

void f_004de920(void) /* sub_4DE920 */
{
    FN_ENTER(0x004de920);
    /* 004de920: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004de921: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004de922: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004de923: sub esp, 0x78 */ {  u32 a = r_esp; u32 b = 0x78u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004de926: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004de928: call 0x7bb6d0 */ r_esp -= 4; W32(r_esp, 0x4de92du); f_007bb6d0();
    /* 004de92d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004de92e: call 0x4d30cc */ r_esp -= 4; W32(r_esp, 0x4de933u); f_004d30cc();
    /* 004de933: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 004de936: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004de937: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x4de93cu); f_0068d5a8();
    /* 004de93c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004de93f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004de941: je 0x4ded79 */ if (fZ) goto L_004ded79;
L_004de947:; BB(0x004de947);
    /* 004de947: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004de94a: lea edx, [ebp + 0x38] */ r_edx = (u32)(r_ebp+0x38u);
    /* 004de94d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004de94e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004de94f: call 0x836208 */ r_esp -= 4; W32(r_esp, 0x4de954u); f_00836208();
    /* 004de954: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004de957: fcom dword ptr [0x909ce0] */ fx_compare(ST(0), R_F32((u32)(0x909ce0u))); 
    /* 004de95d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004de95f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004de960: ja 0x4de97e */ if ((!fC&&!fZ)) goto L_004de97e;
L_004de962:; BB(0x004de962);
    /* 004de962: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004de964: fld dword ptr [0x909d8c] */ FPUSH(R_F32((u32)(0x909d8cu)));
    /* 004de96a: fld dword ptr [0x909d90] */ FPUSH(R_F32((u32)(0x909d90u)));
    /* 004de970: mov dword ptr [ebp + 0xb4], 0x3f800000 */ W32((u32)(r_ebp+0xb4u), 0x3f800000u);
    /* 004de97a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004de97c: jmp 0x4de9bd */ goto L_004de9bd;
L_004de97e:; BB(0x004de97e);
    /* 004de97e: fld dword ptr [0x909cdc] */ FPUSH(R_F32((u32)(0x909cdcu)));
    /* 004de984: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004de986: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004de988: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004de989: ja 0x4de9a7 */ if ((!fC&&!fZ)) goto L_004de9a7;
L_004de98b:; BB(0x004de98b);
    /* 004de98b: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 004de98d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004de98f: fld dword ptr [0x909d90] */ FPUSH(R_F32((u32)(0x909d90u)));
    /* 004de995: fld dword ptr [0x909d90] */ FPUSH(R_F32((u32)(0x909d90u)));
    /* 004de99b: mov dword ptr [ebp + 0xb4], 0 */ W32((u32)(r_ebp+0xb4u), 0x0u);
    /* 004de9a5: jmp 0x4de9bd */ goto L_004de9bd;
L_004de9a7:; BB(0x004de9a7);
    /* 004de9a7: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 004de9a9: fdiv dword ptr [0x909d94] */ ST(0) = ST(0) / R_F32((u32)(0x909d94u));
    /* 004de9af: fld dword ptr [0x909d90] */ FPUSH(R_F32((u32)(0x909d90u)));
    /* 004de9b5: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004de9b7: fst dword ptr [ebp + 0xb4] */ W_F32((u32)(r_ebp+0xb4u), ST(0));
L_004de9bd:; BB(0x004de9bd);
    /* 004de9bd: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 004de9bf: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004de9c1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004de9c2: je 0x4ded79 */ if (fZ) goto L_004ded79;
L_004de9c8:; BB(0x004de9c8);
    /* 004de9c8: mov eax, dword ptr [ebp + 0x38] */ r_eax = R32((u32)(r_ebp+0x38u));
    /* 004de9cb: mov edx, dword ptr [ebp + 0x3c] */ r_edx = R32((u32)(r_ebp+0x3cu));
    /* 004de9ce: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 004de9d2: mov eax, dword ptr [ebp + 0x40] */ r_eax = R32((u32)(r_ebp+0x40u));
    /* 004de9d5: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004de9d7: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 004de9db: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 004de9df: fadd dword ptr [0x909cd8] */ ST(0) = ST(0) + R_F32((u32)(0x909cd8u));
    /* 004de9e5: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 004de9e9: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 004de9ed: lea edx, [esp + 0x28] */ r_edx = (u32)(r_esp+0x28u);
    /* 004de9f1: lea eax, [esp + 0x1c] */ r_eax = (u32)(r_esp+0x1cu);
    /* 004de9f5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004de9f6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004de9f7: call 0x4de730 */ r_esp -= 4; W32(r_esp, 0x4de9fcu); f_004de730();
    /* 004de9fc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004de9fe: je 0x4ded79 */ if (fZ) goto L_004ded79;
L_004dea04:; BB(0x004dea04);
    /* 004dea04: fld dword ptr [0x909d90] */ FPUSH(R_F32((u32)(0x909d90u)));
    /* 004dea0a: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
    /* 004dea0e: lea edx, [ebp + 0x144] */ r_edx = (u32)(r_ebp+0x144u);
    /* 004dea14: lea eax, [ebp + 0x384] */ r_eax = (u32)(r_ebp+0x384u);
    /* 004dea1a: mov esi, eax */ r_esi = r_eax;
    /* 004dea1c: mov edi, edx */ r_edi = r_edx;
L_004dea1e:; BB(0x004dea1e);
    /* 004dea1e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004dea1f: call 0x7ac344 */ r_esp -= 4; W32(r_esp, 0x4dea24u); f_007ac344();
    /* 004dea24: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004dea25: fld dword ptr [esp + 0x6c] */ FPUSH(R_F32((u32)(r_esp+0x6cu)));
    /* 004dea29: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 004dea2d: fild dword ptr [esp + 0x30] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x30u)));
    /* 004dea31: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 004dea34: fadd dword ptr [eax*4 + 0x909d18] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x909d18u));
    /* 004dea3b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004dea3d: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 004dea3f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004dea41: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004dea42: jae 0x4dea48 */ if (!fC) goto L_004dea48;
L_004dea44:; BB(0x004dea44);
    /* 004dea44: fst dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0));
L_004dea48:; BB(0x004dea48);
    /* 004dea48: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004dea4a: add edi, 0x60 */ {  u32 a = r_edi; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004dea4d: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004dea4f: jg 0x4dea1e */ if ((!fZ&&fS==fO)) goto L_004dea1e;
L_004dea51:; BB(0x004dea51);
    /* 004dea51: fld dword ptr [esp + 0x6c] */ FPUSH(R_F32((u32)(r_esp+0x6cu)));
    /* 004dea55: fmul dword ptr [0x909d88] */ ST(0) = ST(0) * R_F32((u32)(0x909d88u));
    /* 004dea5b: fld dword ptr [0x909d90] */ FPUSH(R_F32((u32)(0x909d90u)));
    /* 004dea61: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 004dea65: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 004dea69: fsub st(3) */ ST(0) = ST(0) - ST(3);
    /* 004dea6b: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 004dea6d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004dea6f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004dea70: jb 0x4dea7f */ if (fC) goto L_004dea7f;
L_004dea72:; BB(0x004dea72);
    /* 004dea72: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 004dea74: fcom dword ptr [0x909d84] */ fx_compare(ST(0), R_F32((u32)(0x909d84u))); 
    /* 004dea7a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004dea7c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004dea7d: jbe 0x4deaec */ if ((fC||fZ)) goto L_004deaec;
L_004dea7f:; BB(0x004dea7f);
    /* 004dea7f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004dea81: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 004dea83: fld dword ptr [0x909ccc] */ FPUSH(R_F32((u32)(0x909cccu)));
    /* 004dea89: fadd dword ptr [ebp + 0xb8] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xb8u));
    /* 004dea8f: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004dea91: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004dea93: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 004dea97: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004dea98: jae 0x4deaae */ if (!fC) goto L_004deaae;
L_004dea9a:; BB(0x004dea9a);
    /* 004dea9a: fld dword ptr [0x909d90] */ FPUSH(R_F32((u32)(0x909d90u)));
    /* 004deaa0: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 004deaa4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004deaa6: mov dword ptr [ebp + 0xb8], eax */ W32((u32)(r_ebp+0xb8u), r_eax);
    /* 004deaac: jmp 0x4deab8 */ goto L_004deab8;
L_004deaae:; BB(0x004deaae);
    /* 004deaae: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 004deab2: fstp dword ptr [ebp + 0xb8] */ W_F32((u32)(r_ebp+0xb8u), ST(0)); FPOP();
L_004deab8:; BB(0x004deab8);
    /* 004deab8: fld dword ptr [0x909cc8] */ FPUSH(R_F32((u32)(0x909cc8u)));
    /* 004deabe: fadd dword ptr [ebp + 0xbc] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xbcu));
    /* 004deac4: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004deac6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004deac8: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004deaca: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004deacc: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004deacd: jae 0x4deae4 */ if (!fC) goto L_004deae4;
L_004deacf:; BB(0x004deacf);
    /* 004deacf: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004dead1: fld dword ptr [0x909d90] */ FPUSH(R_F32((u32)(0x909d90u)));
    /* 004dead7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004dead9: mov dword ptr [ebp + 0xbc], eax */ W32((u32)(r_ebp+0xbcu), r_eax);
    /* 004deadf: jmp 0x4deb64 */ goto L_004deb64;
L_004deae4:; BB(0x004deae4);
    /* 004deae4: fst dword ptr [ebp + 0xbc] */ W_F32((u32)(r_ebp+0xbcu), ST(0));
    /* 004deaea: jmp 0x4deb64 */ goto L_004deb64;
L_004deaec:; BB(0x004deaec);
    /* 004deaec: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 004deaee: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 004deaf0: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004deaf2: fld dword ptr [0x909cd4] */ FPUSH(R_F32((u32)(0x909cd4u)));
    /* 004deaf8: fadd dword ptr [ebp + 0xb8] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xb8u));
    /* 004deafe: fld dword ptr [0x909d8c] */ FPUSH(R_F32((u32)(0x909d8cu)));
    /* 004deb04: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004deb06: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004deb08: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004deb0a: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 004deb0e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004deb0f: jae 0x4deb28 */ if (!fC) goto L_004deb28;
L_004deb11:; BB(0x004deb11);
    /* 004deb11: fld dword ptr [0x909d8c] */ FPUSH(R_F32((u32)(0x909d8cu)));
    /* 004deb17: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 004deb1b: mov eax, 0x3f800000 */ r_eax = 0x3f800000u;
    /* 004deb20: mov dword ptr [ebp + 0xb8], eax */ W32((u32)(r_ebp+0xb8u), r_eax);
    /* 004deb26: jmp 0x4deb32 */ goto L_004deb32;
L_004deb28:; BB(0x004deb28);
    /* 004deb28: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 004deb2c: fstp dword ptr [ebp + 0xb8] */ W_F32((u32)(r_ebp+0xb8u), ST(0)); FPOP();
L_004deb32:; BB(0x004deb32);
    /* 004deb32: fld dword ptr [0x909cd0] */ FPUSH(R_F32((u32)(0x909cd0u)));
    /* 004deb38: fadd dword ptr [ebp + 0xbc] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xbcu));
    /* 004deb3e: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004deb40: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004deb42: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004deb44: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004deb46: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004deb47: jbe 0x4deb5e */ if ((fC||fZ)) goto L_004deb5e;
L_004deb49:; BB(0x004deb49);
    /* 004deb49: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004deb4b: fld dword ptr [0x909d8c] */ FPUSH(R_F32((u32)(0x909d8cu)));
    /* 004deb51: mov eax, 0x3f800000 */ r_eax = 0x3f800000u;
    /* 004deb56: mov dword ptr [ebp + 0xbc], eax */ W32((u32)(r_ebp+0xbcu), r_eax);
    /* 004deb5c: jmp 0x4deb64 */ goto L_004deb64;
L_004deb5e:; BB(0x004deb5e);
    /* 004deb5e: fst dword ptr [ebp + 0xbc] */ W_F32((u32)(r_ebp+0xbcu), ST(0));
L_004deb64:; BB(0x004deb64);
    /* 004deb64: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 004deb68: fld dword ptr [ebp + 0xb4] */ FPUSH(R_F32((u32)(r_ebp+0xb4u)));
    /* 004deb6e: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 004deb70: mov ecx, dword ptr [ebp + 0x384] */ r_ecx = R32((u32)(r_ebp+0x384u));
    /* 004deb76: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 004deb78: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 004deb7c: fstp dword ptr [esp + 0x64] */ W_F32((u32)(r_esp+0x64u), ST(0)); FPOP();
    /* 004deb80: shl ecx, 8 */ { u32 c = (8u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 004deb83: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x4deb88u); f_0082dcbc();
    /* 004deb88: fmul dword ptr [0x909d80] */ ST(0) = ST(0) * R_F32((u32)(0x909d80u));
    /* 004deb8e: fnstcw word ptr [esp + 0x38] */ W16((u32)(r_esp+0x38u), fcw);
    /* 004deb92: movzx eax, word ptr [esp + 0x38] */ r_eax = (u32)R16((u32)(r_esp+0x38u));
    /* 004deb97: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004deb9c: mov dword ptr [esp + 0x40], eax */ W32((u32)(r_esp+0x40u), r_eax);
    /* 004deba0: fldcw word ptr [esp + 0x40] */ fcw = R16((u32)(r_esp+0x40u));
    /* 004deba4: fistp dword ptr [esp + 0x48] */ W32((u32)(r_esp+0x48u), (u32)fx_int32(ST(0))); FPOP();
    /* 004deba8: fldcw word ptr [esp + 0x38] */ fcw = R16((u32)(r_esp+0x38u));
    /* 004debac: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 004debb0: mov edx, dword ptr [esp + 0x48] */ r_edx = R32((u32)(r_esp+0x48u));
    /* 004debb4: mov dword ptr [esp + 0x68], ebx */ W32((u32)(r_esp+0x68u), r_ebx);
    /* 004debb8: add edx, 0xc8 */ {  u32 a = r_edx; u32 b = 0xc8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004debbe: mov dword ptr [esp + 0x50], edx */ W32((u32)(r_esp+0x50u), r_edx);
    /* 004debc2: fild dword ptr [esp + 0x50] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x50u)));
    /* 004debc6: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 004debc9: fadd dword ptr [edx*4 + 0x909d18] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x909d18u));
    /* 004debd0: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 004debd2: fmul dword ptr [esp + 0x64] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x64u));
    /* 004debd6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004debd8: fnstcw word ptr [esp + 0x38] */ W16((u32)(r_esp+0x38u), fcw);
    /* 004debdc: movzx eax, word ptr [esp + 0x38] */ r_eax = (u32)R16((u32)(r_esp+0x38u));
    /* 004debe1: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004debe6: mov dword ptr [esp + 0x40], eax */ W32((u32)(r_esp+0x40u), r_eax);
    /* 004debea: fldcw word ptr [esp + 0x40] */ fcw = R16((u32)(r_esp+0x40u));
    /* 004debee: fistp qword ptr [esp + 0x48] */ W64((u32)(r_esp+0x48u), (u64)fx_int64(ST(0))); FPOP();
    /* 004debf2: fldcw word ptr [esp + 0x38] */ fcw = R16((u32)(r_esp+0x38u));
    /* 004debf6: mov edx, dword ptr [esp + 0x48] */ r_edx = R32((u32)(r_esp+0x48u));
    /* 004debfa: fnstcw word ptr [esp + 0x38] */ W16((u32)(r_esp+0x38u), fcw);
    /* 004debfe: movzx eax, word ptr [esp + 0x38] */ r_eax = (u32)R16((u32)(r_esp+0x38u));
    /* 004dec03: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004dec08: mov dword ptr [esp + 0x40], eax */ W32((u32)(r_esp+0x40u), r_eax);
    /* 004dec0c: fldcw word ptr [esp + 0x40] */ fcw = R16((u32)(r_esp+0x40u));
    /* 004dec10: fistp qword ptr [esp + 0x48] */ W64((u32)(r_esp+0x48u), (u64)fx_int64(ST(0))); FPOP();
    /* 004dec14: fldcw word ptr [esp + 0x38] */ fcw = R16((u32)(r_esp+0x38u));
    /* 004dec18: mov ecx, dword ptr [esp + 0x48] */ r_ecx = R32((u32)(r_esp+0x48u));
    /* 004dec1c: shl edx, 0x18 */ { u32 c = (24u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 004dec1f: shl ecx, 0x18 */ { u32 c = (24u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 004dec22: or ecx, 0xffffff */ {  u32 a = r_ecx; u32 b = 0xffffffu; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 004dec28: mov edi, ecx */ r_edi = r_ecx;
    /* 004dec2a: mov dword ptr [esp + 0x70], edx */ W32((u32)(r_esp+0x70u), r_edx);
    /* 004dec2e: lea eax, [ebp + 0x144] */ r_eax = (u32)(r_ebp+0x144u);
    /* 004dec34: add ebp, 0x384 */ {  u32 a = r_ebp; u32 b = 0x384u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004dec3a: mov esi, eax */ r_esi = r_eax;
L_004dec3c:; BB(0x004dec3c);
    /* 004dec3c: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 004dec40: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 004dec44: mov ebx, dword ptr [esp + 0x2c] */ r_ebx = R32((u32)(r_esp+0x2cu));
    /* 004dec48: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004dec4a: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
    /* 004dec4e: fstp dword ptr [esp + 0x74] */ W_F32((u32)(r_esp+0x74u), ST(0)); FPOP();
    /* 004dec52: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004dec53: call 0x858009 */ r_esp -= 4; W32(r_esp, 0x4dec58u); f_00858009();
    /* 004dec58: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004dec59: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004dec5b: je 0x4ded6a */ if (fZ) goto L_004ded6a;
L_004dec61:; BB(0x004dec61);
    /* 004dec61: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004dec62: call 0x7ac43c */ r_esp -= 4; W32(r_esp, 0x4dec67u); f_007ac43c();
    /* 004dec67: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004dec68: fld dword ptr [esp + 0x6c] */ FPUSH(R_F32((u32)(r_esp+0x6cu)));
    /* 004dec6c: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 004dec70: mov dword ptr [esp + 0x50], eax */ W32((u32)(r_esp+0x50u), r_eax);
    /* 004dec74: fild dword ptr [esp + 0x50] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x50u)));
    /* 004dec78: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 004dec7b: fadd dword ptr [eax*4 + 0x909d18] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x909d18u));
    /* 004dec82: fmul dword ptr [0x909d7c] */ ST(0) = ST(0) * R_F32((u32)(0x909d7cu));
    /* 004dec88: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 004dec8a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004dec8c: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
    /* 004dec90: fld dword ptr [0x909d90] */ FPUSH(R_F32((u32)(0x909d90u)));
    /* 004dec96: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004dec98: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 004dec9a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004dec9c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004dec9d: jbe 0x4ded21 */ if ((fC||fZ)) goto L_004ded21;
L_004deca3:; BB(0x004deca3);
    /* 004deca3: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004deca5: mov dword ptr [esp + 0x5c], ebp */ W32((u32)(r_esp+0x5cu), r_ebp);
    /* 004deca9: mov ebp, dword ptr [esp + 0x70] */ r_ebp = R32((u32)(r_esp+0x70u));
    /* 004decad: mov dword ptr [esp + 0x58], edi */ W32((u32)(r_esp+0x58u), r_edi);
    /* 004decb1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004decb3: mov edi, eax */ r_edi = r_eax;
L_004decb5:; BB(0x004decb5);
    /* 004decb5: movsx edx, word ptr [edi + 0x9b10f4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x9b10f4u));
    /* 004decbc: movsx ecx, word ptr [edi + 0x9b10f6] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edi+0x9b10f6u));
    /* 004decc3: mov dword ptr [esp + 0x10], 0x3f000000 */ W32((u32)(r_esp+0x10u), 0x3f000000u);
    /* 004deccb: mov dword ptr [esp + 0x50], edx */ W32((u32)(r_esp+0x50u), r_edx);
    /* 004deccf: fild dword ptr [esp + 0x50] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x50u)));
    /* 004decd3: fadd dword ptr [esp + 0x6c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x6cu));
    /* 004decd7: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004decda: mov dword ptr [esp + 0x14], 1 */ W32((u32)(r_esp+0x14u), 0x1u);
    /* 004dece2: mov dword ptr [esp + 0x50], ecx */ W32((u32)(r_esp+0x50u), r_ecx);
    /* 004dece6: fild dword ptr [esp + 0x50] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x50u)));
    /* 004decea: fadd dword ptr [esp + 0x74] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x74u));
    /* 004decee: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 004decf2: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 004decf6: mov dword ptr [esp + 0xc], ebp */ W32((u32)(r_esp+0xcu), r_ebp);
    /* 004decfa: mov dword ptr [esp + 0x18], 0 */ W32((u32)(r_esp+0x18u), 0x0u);
    /* 004ded02: call 0x7ab554 */ r_esp -= 4; W32(r_esp, 0x4ded07u); f_007ab554();
    /* 004ded07: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004ded0a: cmp edi, 0x20 */ {  u32 a = r_edi; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004ded0d: jl 0x4decb5 */ if ((fS!=fO)) goto L_004decb5;
L_004ded0f:; BB(0x004ded0f);
    /* 004ded0f: mov edi, dword ptr [esp + 0x58] */ r_edi = R32((u32)(r_esp+0x58u));
    /* 004ded13: fld dword ptr [0x909d90] */ FPUSH(R_F32((u32)(0x909d90u)));
    /* 004ded19: mov dword ptr [esp + 0x70], ebp */ W32((u32)(r_esp+0x70u), r_ebp);
    /* 004ded1d: mov ebp, dword ptr [esp + 0x5c] */ r_ebp = R32((u32)(r_esp+0x5cu));
L_004ded21:; BB(0x004ded21);
    /* 004ded21: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
    /* 004ded25: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 004ded27: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004ded29: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004ded2a: jbe 0x4ded5c */ if ((fC||fZ)) goto L_004ded5c;
L_004ded2c:; BB(0x004ded2c);
    /* 004ded2c: fld dword ptr [esp + 0x6c] */ FPUSH(R_F32((u32)(r_esp+0x6cu)));
    /* 004ded30: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004ded33: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 004ded37: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 004ded3b: mov dword ptr [esp + 0x10], 0x3f000000 */ W32((u32)(r_esp+0x10u), 0x3f000000u);
    /* 004ded43: mov dword ptr [esp + 0xc], edi */ W32((u32)(r_esp+0xcu), r_edi);
    /* 004ded47: mov dword ptr [esp + 0x14], 1 */ W32((u32)(r_esp+0x14u), 0x1u);
    /* 004ded4f: mov dword ptr [esp + 0x18], 0 */ W32((u32)(r_esp+0x18u), 0x0u);
    /* 004ded57: call 0x7ab554 */ r_esp -= 4; W32(r_esp, 0x4ded5cu); f_007ab554();
L_004ded5c:; BB(0x004ded5c);
    /* 004ded5c: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 004ded60: fadd dword ptr [0x909cc4] */ ST(0) = ST(0) + R_F32((u32)(0x909cc4u));
    /* 004ded66: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
L_004ded6a:; BB(0x004ded6a);
    /* 004ded6a: add esi, 0x60 */ {  u32 a = r_esi; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004ded6d: cmp ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004ded6f: jg 0x4dec3c */ if ((!fZ&&fS==fO)) goto L_004dec3c;
L_004ded75:; BB(0x004ded75);
    /* 004ded75: mov ebx, dword ptr [esp + 0x68] */ r_ebx = R32((u32)(r_esp+0x68u));
L_004ded79:; BB(0x004ded79);
    /* 004ded79: add esp, 0x78 */ {  u32 a = r_esp; u32 b = 0x78u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004ded7c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ded7d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004ded7e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004ded7f: ret  */ FN_RET(0x004de920); r_esp += 4; return;
}

void f_004ded80(void) /* sub_4DED80 */
{
    FN_ENTER(0x004ded80);
    /* 004ded80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ded81: mov ebp, esp */ r_ebp = r_esp;
    /* 004ded83: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004ded85: push 0x8d2600 */ { u32 v = 0x8d2600u; r_esp -= 4; W32(r_esp, v); }
    /* 004ded8a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004ded90: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ded91: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004ded98: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004ded9b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004ded9e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004deda1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004deda4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004deda7: push 0x38c */ { u32 v = 0x38cu; r_esp -= 4; W32(r_esp, v); }
    /* 004dedac: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 004dedb3: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4dedb8u); f_005caba4();
    /* 004dedb8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004dedb9: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004dedbc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004dedbe: je 0x4dedf7 */ if (fZ) goto L_004dedf7;
L_004dedc0:; BB(0x004dedc0);
    /* 004dedc0: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 004dedc7: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004dedce: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 004dedd1: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 004dedd4: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004dedd7: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004dedda: call 0x4dedfc */ r_esp -= 4; W32(r_esp, 0x4deddfu); f_004dedfc();
    /* 004deddf: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004dede2: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_004dede9:; BB(0x004dede9);
    /* 004dede9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004dedec: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004dedf3: mov esp, ebp */ r_esp = r_ebp;
    /* 004dedf5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004dedf6: ret  */ FN_RET(0x004ded80); r_esp += 4; return;
L_004dedf7:; BB(0x004dedf7);
    /* 004dedf7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004dedf9: jmp 0x4dede9 */ goto L_004dede9;
}

void f_004dedfc(void) /* sub_4DEDFC */
{
    FN_ENTER(0x004dedfc);
    /* 004dedfc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004dedfd: mov ebp, esp */ r_ebp = r_esp;
    /* 004dedff: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004dee01: push 0x8d261c */ { u32 v = 0x8d261cu; r_esp -= 4; W32(r_esp, v); }
    /* 004dee06: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004dee0c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dee0d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004dee14: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004dee17: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004dee1a: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 004dee1d: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 004dee20: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 004dee23: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004dee26: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004dee29: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 004dee2c: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 004dee2f: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004dee32: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 004dee35: call 0x7b4b48 */ r_esp -= 4; W32(r_esp, 0x4dee3au); f_007b4b48();
    /* 004dee3a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004dee41: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004dee44: mov dword ptr [ecx], 0xafd068 */ W32((u32)(r_ecx), 0xafd068u);
    /* 004dee4a: mov eax, dword ptr [0x9b10f0] */ r_eax = R32((u32)(0x9b10f0u));
    /* 004dee4f: mov edx, dword ptr [0xa49910] */ r_edx = R32((u32)(0xa49910u));
    /* 004dee55: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 004dee58: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004dee5a: jne 0x4dee6e */ if (!fZ) goto L_004dee6e;
L_004dee5c:; BB(0x004dee5c);
    /* 004dee5c: mov eax, ecx */ r_eax = r_ecx;
    /* 004dee5e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004dee61: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004dee68: mov esp, ebp */ r_esp = r_ebp;
    /* 004dee6a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004dee6b: ret 0xc */ FN_RET(0x004dedfc); r_esp += 16; return;
L_004dee6e:; BB(0x004dee6e);
    /* 004dee6e: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004dee71: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 004dee74: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004dee75: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004dee76: call 0x4df4c0 */ r_esp -= 4; W32(r_esp, 0x4dee7bu); f_004df4c0();
    /* 004dee7b: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004dee7e: call 0x4df408 */ r_esp -= 4; W32(r_esp, 0x4dee83u); f_004df408();
    /* 004dee83: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004dee86: mov eax, dword ptr [0xa9c4f4] */ r_eax = R32((u32)(0xa9c4f4u));
    /* 004dee8b: cmp eax, dword ptr [0xa9c4dc] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa9c4dcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004dee91: je 0x4dee9f */ if (fZ) goto L_004dee9f;
L_004dee93:; BB(0x004dee93);
    /* 004dee93: mov dword ptr [edx + 0x388], 1 */ W32((u32)(r_edx+0x388u), 0x1u);
    /* 004dee9d: jmp 0x4deea9 */ goto L_004deea9;
L_004dee9f:; BB(0x004dee9f);
    /* 004dee9f: mov dword ptr [edx + 0x388], 0 */ W32((u32)(r_edx+0x388u), 0x0u);
L_004deea9:; BB(0x004deea9);
    /* 004deea9: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004deeac: mov eax, edx */ r_eax = r_edx;
    /* 004deeae: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004deeb1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004deeb8: mov esp, ebp */ r_esp = r_ebp;
    /* 004deeba: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004deebb: ret 0xc */ FN_RET(0x004dedfc); r_esp += 16; return;
}

void f_004deec0(void) /* sub_4DEEC0 */
{
    FN_ENTER(0x004deec0);
    /* 004deec0: mov ecx, dword ptr [0xa49910] */ r_ecx = R32((u32)(0xa49910u));
    /* 004deec6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004deec8: je 0x4deefe */ if (fZ) goto L_004deefe;
L_004deeca:; BB(0x004deeca);
    /* 004deeca: je 0x4deed3 */ if (fZ) goto L_004deed3;
L_004deecc:; BB(0x004deecc);
    /* 004deecc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004deece: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x4deed3u); f_004066a8();
L_004deed3:; BB(0x004deed3);
    /* 004deed3: mov dword ptr [0xa49910], 0 */ W32((u32)(0xa49910u), 0x0u);
    /* 004deedd: call 0x4def00 */ r_esp -= 4; W32(r_esp, 0x4deee2u); f_004def00();
    /* 004deee2: mov ecx, dword ptr [0xa498a4] */ r_ecx = R32((u32)(0xa498a4u));
    /* 004deee8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004deeea: je 0x4deefe */ if (fZ) goto L_004deefe;
L_004deeec:; BB(0x004deeec);
    /* 004deeec: je 0x4deef4 */ if (fZ) goto L_004deef4;
L_004deeee:; BB(0x004deeee);
    /* 004deeee: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004deef0: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004deef2: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x4deef4u); call_ind(t); }
L_004deef4:; BB(0x004deef4);
    /* 004deef4: mov dword ptr [0xa498a4], 0 */ W32((u32)(0xa498a4u), 0x0u);
L_004deefe:; BB(0x004deefe);
    /* 004deefe: ret  */ FN_RET(0x004deec0); r_esp += 4; return;
}

void f_004def94(void) /* sub_4DEF94 */
{
    FN_ENTER(0x004def94);
    /* 004def94: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 004def98: fld dword ptr [0x909d3c] */ FPUSH(R_F32((u32)(0x909d3cu)));
    /* 004def9e: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 004defa0: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004defa2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004defa4: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 004defa6: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 004defa9: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 004defab: fld dword ptr [edx + 8] */ FPUSH(R_F32((u32)(r_edx+0x8u)));
    /* 004defae: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 004defb0: fld dword ptr [edx + 0xc] */ FPUSH(R_F32((u32)(r_edx+0xcu)));
    /* 004defb3: fadd st(3), st(0) */ ST(3) = ST(3) + ST(0);
    /* 004defb5: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004defb6: jae 0x4defc3 */ if (!fC) goto L_004defc3;
L_004defb8:; BB(0x004defb8);
    /* 004defb8: fstp st(4) */ ST(4) = ST(0); FPOP();
    /* 004defba: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 004defbc: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004defbe: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 004defc0: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004defc2: ret  */ FN_RET(0x004def94); r_esp += 4; return;
L_004defc3:; BB(0x004defc3);
    /* 004defc3: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004defc5: fcomp st(4) */ fx_compare(ST(0), ST(4)); FPOP();
    /* 004defc7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004defc9: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004defca: jae 0x4defd5 */ if (!fC) goto L_004defd5;
L_004defcc:; BB(0x004defcc);
    /* 004defcc: fstp st(3) */ ST(3) = ST(0); FPOP();
    /* 004defce: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 004defd0: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 004defd2: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004defd4: ret  */ FN_RET(0x004def94); r_esp += 4; return;
L_004defd5:; BB(0x004defd5);
    /* 004defd5: fcomp st(3) */ fx_compare(ST(0), ST(3)); FPOP();
    /* 004defd7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004defd9: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004defda: jae 0x4defe3 */ if (!fC) goto L_004defe3;
L_004defdc:; BB(0x004defdc);
    /* 004defdc: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 004defde: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 004defe0: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004defe2: ret  */ FN_RET(0x004def94); r_esp += 4; return;
L_004defe3:; BB(0x004defe3);
    /* 004defe3: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 004defe5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004defe7: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004defe8: jae 0x4defef */ if (!fC) goto L_004defef;
L_004defea:; BB(0x004defea);
    /* 004defea: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 004defec: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004defee: ret  */ FN_RET(0x004def94); r_esp += 4; return;
L_004defef:; BB(0x004defef);
    /* 004defef: fcomp dword ptr [0x909d38] */ fx_compare(ST(0), R_F32((u32)(0x909d38u))); FPOP();
    /* 004deff5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004deff7: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004deff8: ja 0x4df0e3 */ if ((!fC&&!fZ)) goto L_004df0e3;
L_004deffe:; BB(0x004deffe);
    /* 004deffe: fld dword ptr [edx + 0x10] */ FPUSH(R_F32((u32)(r_edx+0x10u)));
    /* 004df001: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004df003: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004df005: fld dword ptr [edx + 0x14] */ FPUSH(R_F32((u32)(r_edx+0x14u)));
    /* 004df008: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 004df00a: fld dword ptr [edx + 0x18] */ FPUSH(R_F32((u32)(r_edx+0x18u)));
    /* 004df00d: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 004df00f: fld dword ptr [edx + 0x1c] */ FPUSH(R_F32((u32)(r_edx+0x1cu)));
    /* 004df012: fadd st(3), st(0) */ ST(3) = ST(3) + ST(0);
    /* 004df014: fld dword ptr [edx + 0x20] */ FPUSH(R_F32((u32)(r_edx+0x20u)));
    /* 004df017: fadd st(4), st(0) */ ST(4) = ST(4) + ST(0);
    /* 004df019: fld dword ptr [edx + 0x24] */ FPUSH(R_F32((u32)(r_edx+0x24u)));
    /* 004df01c: fadd st(5), st(0) */ ST(5) = ST(5) + ST(0);
    /* 004df01e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004df01f: jae 0x4df030 */ if (!fC) goto L_004df030;
L_004df021:; BB(0x004df021);
    /* 004df021: fstp st(6) */ ST(6) = ST(0); FPOP();
    /* 004df023: fstp st(5) */ ST(5) = ST(0); FPOP();
    /* 004df025: fstp st(4) */ ST(4) = ST(0); FPOP();
    /* 004df027: fstp st(3) */ ST(3) = ST(0); FPOP();
    /* 004df029: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 004df02b: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 004df02d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004df02f: ret  */ FN_RET(0x004def94); r_esp += 4; return;
L_004df030:; BB(0x004df030);
    /* 004df030: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 004df032: fcomp st(6) */ fx_compare(ST(0), ST(6)); FPOP();
    /* 004df034: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004df036: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004df037: jae 0x4df046 */ if (!fC) goto L_004df046;
L_004df039:; BB(0x004df039);
    /* 004df039: fstp st(5) */ ST(5) = ST(0); FPOP();
    /* 004df03b: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 004df03d: fstp st(3) */ ST(3) = ST(0); FPOP();
    /* 004df03f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004df041: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 004df043: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004df045: ret  */ FN_RET(0x004def94); r_esp += 4; return;
L_004df046:; BB(0x004df046);
    /* 004df046: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004df048: fcomp st(5) */ fx_compare(ST(0), ST(5)); FPOP();
    /* 004df04a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004df04c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004df04d: jae 0x4df05a */ if (!fC) goto L_004df05a;
L_004df04f:; BB(0x004df04f);
    /* 004df04f: fstp st(4) */ ST(4) = ST(0); FPOP();
    /* 004df051: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 004df053: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004df055: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 004df057: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004df059: ret  */ FN_RET(0x004def94); r_esp += 4; return;
L_004df05a:; BB(0x004df05a);
    /* 004df05a: fcomp st(4) */ fx_compare(ST(0), ST(4)); FPOP();
    /* 004df05c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004df05e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004df05f: jae 0x4df06a */ if (!fC) goto L_004df06a;
L_004df061:; BB(0x004df061);
    /* 004df061: fstp st(3) */ ST(3) = ST(0); FPOP();
    /* 004df063: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004df065: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 004df067: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004df069: ret  */ FN_RET(0x004def94); r_esp += 4; return;
L_004df06a:; BB(0x004df06a);
    /* 004df06a: fcomp st(3) */ fx_compare(ST(0), ST(3)); FPOP();
    /* 004df06c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004df06e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004df06f: jae 0x4df078 */ if (!fC) goto L_004df078;
L_004df071:; BB(0x004df071);
    /* 004df071: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 004df073: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 004df075: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004df077: ret  */ FN_RET(0x004def94); r_esp += 4; return;
L_004df078:; BB(0x004df078);
    /* 004df078: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 004df07a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004df07c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004df07e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004df080: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004df081: jae 0x4df086 */ if (!fC) goto L_004df086;
L_004df083:; BB(0x004df083);
    /* 004df083: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004df085: ret  */ FN_RET(0x004def94); r_esp += 4; return;
L_004df086:; BB(0x004df086);
    /* 004df086: fcomp dword ptr [0x909d38] */ fx_compare(ST(0), R_F32((u32)(0x909d38u))); FPOP();
    /* 004df08c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004df08e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004df08f: jbe 0x4df092 */ if ((fC||fZ)) goto L_004df092;
L_004df091:; BB(0x004df091);
    /* 004df091: ret  */ FN_RET(0x004def94); r_esp += 4; return;
L_004df092:; BB(0x004df092);
    /* 004df092: mov dword ptr [0xa498e4], ecx */ W32((u32)(0xa498e4u), r_ecx);
    /* 004df098: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 004df09b: mov dword ptr [0xa498e8], eax */ W32((u32)(0xa498e8u), r_eax);
    /* 004df0a0: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 004df0a3: mov dword ptr [0xa498ec], ecx */ W32((u32)(0xa498ecu), r_ecx);
    /* 004df0a9: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 004df0ac: mov dword ptr [0xa498f0], eax */ W32((u32)(0xa498f0u), r_eax);
    /* 004df0b1: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 004df0b4: mov dword ptr [0xa498f4], eax */ W32((u32)(0xa498f4u), r_eax);
    /* 004df0b9: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 004df0bc: mov dword ptr [0xa498f8], eax */ W32((u32)(0xa498f8u), r_eax);
    /* 004df0c1: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 004df0c4: mov dword ptr [0xa498fc], eax */ W32((u32)(0xa498fcu), r_eax);
    /* 004df0c9: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 004df0cc: mov dword ptr [0xa49900], eax */ W32((u32)(0xa49900u), r_eax);
    /* 004df0d1: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 004df0d4: mov dword ptr [0xa49904], eax */ W32((u32)(0xa49904u), r_eax);
    /* 004df0d9: mov edx, dword ptr [edx + 0x24] */ r_edx = R32((u32)(r_edx+0x24u));
    /* 004df0dc: mov dword ptr [0xa49908], edx */ W32((u32)(0xa49908u), r_edx);
    /* 004df0e2: ret  */ FN_RET(0x004def94); r_esp += 4; return;
L_004df0e3:; BB(0x004df0e3);
    /* 004df0e3: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004df0e5: ret  */ FN_RET(0x004def94); r_esp += 4; return;
}

