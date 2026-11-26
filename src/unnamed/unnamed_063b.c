#include "protos.h"

void f_0063b0b9(void)
{
    FN_ENTER(0x0063b0b9);
    /* 0063b0b9: lea edx, [esi + 0x38] */ r_edx = (u32)(r_esi+0x38u);
    /* 0063b0bc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0063b0be: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063b0bf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063b0c0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063b0c1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0063b0c2: push 0x4b5 */ { u32 v = 0x4b5u; r_esp -= 4; W32(r_esp, v); }
    /* 0063b0c7: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x63b0ccu); f_008144b0();
    /* 0063b0cc: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0063b0cf: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0063b0d0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0063b0d1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0063b0d2: ret  */ FN_RET(0x0063b0b9); r_esp += 4; return;
}

void f_0063b0d3(void)
{
    FN_ENTER(0x0063b0d3);
    /* 0063b0d3: lea edx, [esi + 0x38] */ r_edx = (u32)(r_esi+0x38u);
    /* 0063b0d6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0063b0d8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063b0d9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063b0da: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063b0db: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0063b0dc: push 0x489 */ { u32 v = 0x489u; r_esp -= 4; W32(r_esp, v); }
    /* 0063b0e1: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x63b0e6u); f_008144b0();
    /* 0063b0e6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0063b0e9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0063b0ea: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0063b0eb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0063b0ec: ret  */ FN_RET(0x0063b0d3); r_esp += 4; return;
}

void f_0063b0e9(void)
{
    FN_ENTER(0x0063b0e9);
    /* 0063b0e9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0063b0ea: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0063b0eb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0063b0ec: ret  */ FN_RET(0x0063b0e9); r_esp += 4; return;
}

void f_0063b0f0(void) /* sub_63B0F0 */
{
    FN_ENTER(0x0063b0f0);
    /* 0063b0f0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0063b0f1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063b0f2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0063b0f3: mov edi, ecx */ r_edi = r_ecx;
    /* 0063b0f5: fld dword ptr [edi + 0x6c] */ FPUSH(R_F32((u32)(r_edi+0x6cu)));
    /* 0063b0f8: fadd dword ptr [edi + 0x354] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x354u));
    /* 0063b0fe: fcom dword ptr [0x933f3c] */ fx_compare(ST(0), R_F32((u32)(0x933f3cu))); 
    /* 0063b104: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0063b106: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0063b107: jbe 0x63b18f */ if ((fC||fZ)) goto L_0063b18f;
L_0063b10d:; BB(0x0063b10d);
    /* 0063b10d: fstp dword ptr [edi + 0x6c] */ W_F32((u32)(r_edi+0x6cu), ST(0)); FPOP();
    /* 0063b110: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x63b115u); f_00807ac0();
    /* 0063b115: cmp eax, 0x16 */ {  u32 a = r_eax; u32 b = 0x16u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0063b118: ja 0x63b2b4 */ if ((!fC&&!fZ)) goto L_0063b2b4;
L_0063b11e:; BB(0x0063b11e);
    /* 0063b11e: mov eax, dword ptr [eax*4 + 0x933ee0] */ r_eax = R32((u32)(r_eax*4+0x933ee0u));
    /* 0063b125: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0063b18f:; BB(0x0063b18f);
    /* 0063b18f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0063b191: mov eax, 3 */ r_eax = 0x3u;
    /* 0063b196: mov word ptr [edi + 0x32e], ax */ W16((u32)(r_edi+0x32eu), (u16)r_eax);
    /* 0063b19d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0063b19f: mov dword ptr [edi + 0x6c], edx */ W32((u32)(r_edi+0x6cu), r_edx);
    /* 0063b1a2: mov ecx, edi */ r_ecx = r_edi;
    /* 0063b1a4: call 0x77a1f4 */ r_esp -= 4; W32(r_esp, 0x63b1a9u); f_0077a1f4();
    /* 0063b1a9: push 0x8001f04 */ { u32 v = 0x8001f04u; r_esp -= 4; W32(r_esp, v); }
    /* 0063b1ae: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063b1b0: mov ecx, edi */ r_ecx = r_edi;
    /* 0063b1b2: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x63b1b7u); f_007b52ec();
    /* 0063b1b7: push 0x8003 */ { u32 v = 0x8003u; r_esp -= 4; W32(r_esp, v); }
    /* 0063b1bc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063b1be: mov ecx, edi */ r_ecx = r_edi;
    /* 0063b1c0: call 0x7b52c4 */ r_esp -= 4; W32(r_esp, 0x63b1c5u); f_007b52c4();
    /* 0063b1c5: push 0x8f */ { u32 v = 0x8fu; r_esp -= 4; W32(r_esp, v); }
    /* 0063b1ca: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0063b1cd: and eax, 0xfffbffff */ {  u32 a = r_eax; u32 b = 0xfffbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0063b1d2: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0063b1d5: lea ebp, [edi + 0x38] */ r_ebp = (u32)(r_edi+0x38u);
    /* 0063b1d8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063b1d9: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x63b1deu); f_0050b510();
    /* 0063b1de: push 0x8f */ { u32 v = 0x8fu; r_esp -= 4; W32(r_esp, v); }
    /* 0063b1e3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063b1e4: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x63b1e9u); f_0050b510();
    /* 0063b1e9: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063b1ec: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063b1ee: push dword ptr [edi + 0x33c] */ { u32 v = R32((u32)(r_edi+0x33cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0063b1f4: mov ecx, edi */ r_ecx = r_edi;
    /* 0063b1f6: call 0x7714cc */ r_esp -= 4; W32(r_esp, 0x63b1fbu); f_007714cc();
    /* 0063b1fb: mov word ptr [edi + 0x344], ax */ W16((u32)(r_edi+0x344u), (u16)r_eax);
    /* 0063b202: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 0063b205: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063b20a: je 0x63b2b8 */ if (fZ) goto L_0063b2b8;
L_0063b210:; BB(0x0063b210);
    /* 0063b210: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063b211: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x63b216u); f_0068d5a8();
    /* 0063b216: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063b217: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063b218: mov ecx, edi */ r_ecx = r_edi;
    /* 0063b21a: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x63b21fu); f_007706b0();
    /* 0063b21f: mov ecx, edi */ r_ecx = r_edi;
    /* 0063b221: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x63b226u); f_00770738();
    /* 0063b226: mov ebx, eax */ r_ebx = r_eax;
    /* 0063b228: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0063b22a: je 0x63b2b4 */ if (fZ) goto L_0063b2b4;
L_0063b230:; BB(0x0063b230);
    /* 0063b230: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063b231: lea edx, [ebx + 0x38] */ r_edx = (u32)(r_ebx+0x38u);
    /* 0063b234: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063b235: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x63b23au); f_007a9180();
    /* 0063b23a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063b23d: mov edx, dword ptr [ebx + 0xa4] */ r_edx = R32((u32)(r_ebx+0xa4u));
    /* 0063b243: fld dword ptr [edi + 0x340] */ FPUSH(R_F32((u32)(r_edi+0x340u)));
    /* 0063b249: fsub dword ptr [edx + 0xc] */ ST(0) = ST(0) - R_F32((u32)(r_edx+0xcu));
    /* 0063b24c: fst dword ptr [edi + 0x340] */ W_F32((u32)(r_edi+0x340u), ST(0));
    /* 0063b252: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0063b254: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0063b256: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 0063b258: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0063b25a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0063b25c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0063b25e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0063b25f: jbe 0x63b29d */ if ((fC||fZ)) goto L_0063b29d;
L_0063b261:; BB(0x0063b261);
    /* 0063b261: movsx edx, word ptr [ebx + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x32cu));
    /* 0063b268: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0063b26b: jne 0x63b2c5 */ if (!fZ) goto L_0063b2c5;
L_0063b26d:; BB(0x0063b26d);
    /* 0063b26d: add esp, -0x10 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063b270: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0063b274: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 0063b277: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0063b279: mov dword ptr [esp + 8], 0xffffffff */ W32((u32)(r_esp+0x8u), 0xffffffffu);
    /* 0063b281: mov word ptr [esp + 0xc], dx */ W16((u32)(r_esp+0xcu), (u16)r_edx);
    /* 0063b286: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0063b288: call 0x6937c8 */ r_esp -= 4; W32(r_esp, 0x63b28du); f_006937c8();
    /* 0063b28d: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
    /* 0063b290: or edx, 0x20000 */ {  u32 a = r_edx; u32 b = 0x20000u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0063b296: mov dword ptr [ebx + 0x30], edx */ W32((u32)(r_ebx+0x30u), r_edx);
    /* 0063b299: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0063b29a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063b29b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0063b29c: ret  */ FN_RET(0x0063b0f0); r_esp += 4; return;
L_0063b29d:; BB(0x0063b29d);
    /* 0063b29d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0063b29f: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 0063b2a4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063b2a6: mov word ptr [edi + 0x344], ax */ W16((u32)(r_edi+0x344u), (u16)r_eax);
    /* 0063b2ad: mov ecx, edi */ r_ecx = r_edi;
    /* 0063b2af: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x63b2b4u); f_007706b0();
L_0063b2b4:; BB(0x0063b2b4);
    /* 0063b2b4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0063b2b5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063b2b6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0063b2b7: ret  */ FN_RET(0x0063b0f0); r_esp += 4; return;
L_0063b2b8:; BB(0x0063b2b8);
    /* 0063b2b8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063b2ba: mov ecx, edi */ r_ecx = r_edi;
    /* 0063b2bc: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x63b2c1u); f_007706b0();
    /* 0063b2c1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0063b2c2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063b2c3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0063b2c4: ret  */ FN_RET(0x0063b0f0); r_esp += 4; return;
L_0063b2c5:; BB(0x0063b2c5);
    /* 0063b2c5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0063b2c7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0063b2c8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063b2c9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0063b2ca: ret  */ FN_RET(0x0063b0f0); r_esp += 4; return;
}

void f_0063b127(void)
{
    FN_ENTER(0x0063b127);
    /* 0063b127: lea edx, [edi + 0x38] */ r_edx = (u32)(r_edi+0x38u);
    /* 0063b12a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0063b12c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063b12d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063b12e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063b12f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0063b130: push 0x4b7 */ { u32 v = 0x4b7u; r_esp -= 4; W32(r_esp, v); }
    /* 0063b135: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x63b13au); f_008144b0();
    /* 0063b13a: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0063b13d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0063b13e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063b13f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0063b140: ret  */ FN_RET(0x0063b127); r_esp += 4; return;
}

void f_0063b141(void)
{
    FN_ENTER(0x0063b141);
    /* 0063b141: lea edx, [edi + 0x38] */ r_edx = (u32)(r_edi+0x38u);
    /* 0063b144: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0063b146: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063b147: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063b148: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063b149: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0063b14a: push 0x488 */ { u32 v = 0x488u; r_esp -= 4; W32(r_esp, v); }
    /* 0063b14f: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x63b154u); f_008144b0();
    /* 0063b154: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0063b157: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0063b158: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063b159: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0063b15a: ret  */ FN_RET(0x0063b141); r_esp += 4; return;
}

void f_0063b15b(void)
{
    FN_ENTER(0x0063b15b);
    /* 0063b15b: lea edx, [edi + 0x38] */ r_edx = (u32)(r_edi+0x38u);
    /* 0063b15e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0063b160: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063b161: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063b162: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063b163: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0063b164: push 0x46a */ { u32 v = 0x46au; r_esp -= 4; W32(r_esp, v); }
    /* 0063b169: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x63b16eu); f_008144b0();
    /* 0063b16e: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0063b171: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0063b172: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063b173: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0063b174: ret  */ FN_RET(0x0063b15b); r_esp += 4; return;
}

void f_0063b175(void)
{
    FN_ENTER(0x0063b175);
    /* 0063b175: lea edx, [edi + 0x38] */ r_edx = (u32)(r_edi+0x38u);
    /* 0063b178: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0063b17a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063b17b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063b17c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063b17d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0063b17e: push 0x455 */ { u32 v = 0x455u; r_esp -= 4; W32(r_esp, v); }
    /* 0063b183: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x63b188u); f_008144b0();
    /* 0063b188: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0063b18b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0063b18c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063b18d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0063b18e: ret  */ FN_RET(0x0063b175); r_esp += 4; return;
}

void f_0063b2b4(void)
{
    FN_ENTER(0x0063b2b4);
    /* 0063b2b4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0063b2b5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063b2b6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0063b2b7: ret  */ FN_RET(0x0063b2b4); r_esp += 4; return;
}

void f_0063b2cc(void) /* sub_63B2CC */
{
    FN_ENTER(0x0063b2cc);
    /* 0063b2cc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063b2cd: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x63b2d2u); f_00770738();
    /* 0063b2d2: mov ebp, eax */ r_ebp = r_eax;
    /* 0063b2d4: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x63b2d9u); f_006dc358();
    /* 0063b2d9: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063b2dc: je 0x63b32c */ if (fZ) goto L_0063b32c;
L_0063b2de:; BB(0x0063b2de);
    /* 0063b2de: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0063b2e0: je 0x63b32a */ if (fZ) goto L_0063b32a;
L_0063b2e2:; BB(0x0063b2e2);
    /* 0063b2e2: mov edx, dword ptr [0xa9c4f4] */ r_edx = R32((u32)(0xa9c4f4u));
    /* 0063b2e8: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0063b2ec: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0063b2ee: jne 0x63b32a */ if (!fZ) goto L_0063b32a;
L_0063b2f0:; BB(0x0063b2f0);
    /* 0063b2f0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063b2f1: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x63b2f6u); f_0068d5a8();
    /* 0063b2f6: mov ebp, eax */ r_ebp = r_eax;
    /* 0063b2f8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063b2fb: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0063b2fd: je 0x63b32a */ if (fZ) goto L_0063b32a;
L_0063b2ff:; BB(0x0063b2ff);
    /* 0063b2ff: mov edx, dword ptr [ebp + 0x33c] */ r_edx = R32((u32)(r_ebp+0x33cu));
    /* 0063b305: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0063b308: je 0x63b311 */ if (fZ) goto L_0063b311;
L_0063b30a:; BB(0x0063b30a);
    /* 0063b30a: mov edx, 1 */ r_edx = 0x1u;
    /* 0063b30f: jmp 0x63b313 */ goto L_0063b313;
L_0063b311:; BB(0x0063b311);
    /* 0063b311: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_0063b313:; BB(0x0063b313);
    /* 0063b313: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063b315: je 0x63b31e */ if (fZ) goto L_0063b31e;
L_0063b317:; BB(0x0063b317);
    /* 0063b317: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0063b319: call 0x685514 */ r_esp -= 4; W32(r_esp, 0x63b31eu); f_00685514();
L_0063b31e:; BB(0x0063b31e);
    /* 0063b31e: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 0063b321: and edx, 0xfffdffff */ {  u32 a = r_edx; u32 b = 0xfffdffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0063b327: mov dword ptr [ebp + 0x30], edx */ W32((u32)(r_ebp+0x30u), r_edx);
L_0063b32a:; BB(0x0063b32a);
    /* 0063b32a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063b32b: ret  */ FN_RET(0x0063b2cc); r_esp += 4; return;
L_0063b32c:; BB(0x0063b32c);
    /* 0063b32c: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0063b32e: je 0x63b32a */ if (fZ) goto L_0063b32a;
L_0063b330:; BB(0x0063b330);
    /* 0063b330: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0063b334: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063b335: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x63b33au); f_0068d5a8();
    /* 0063b33a: mov ebp, eax */ r_ebp = r_eax;
    /* 0063b33c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063b33f: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0063b341: je 0x63b32a */ if (fZ) goto L_0063b32a;
L_0063b343:; BB(0x0063b343);
    /* 0063b343: mov edx, dword ptr [ebp + 0x33c] */ r_edx = R32((u32)(r_ebp+0x33cu));
    /* 0063b349: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0063b34c: je 0x63b355 */ if (fZ) goto L_0063b355;
L_0063b34e:; BB(0x0063b34e);
    /* 0063b34e: mov edx, 1 */ r_edx = 0x1u;
    /* 0063b353: jmp 0x63b357 */ goto L_0063b357;
L_0063b355:; BB(0x0063b355);
    /* 0063b355: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_0063b357:; BB(0x0063b357);
    /* 0063b357: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063b359: je 0x63b362 */ if (fZ) goto L_0063b362;
L_0063b35b:; BB(0x0063b35b);
    /* 0063b35b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0063b35d: call 0x685514 */ r_esp -= 4; W32(r_esp, 0x63b362u); f_00685514();
L_0063b362:; BB(0x0063b362);
    /* 0063b362: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 0063b365: and edx, 0xfffdffff */ {  u32 a = r_edx; u32 b = 0xfffdffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0063b36b: mov dword ptr [ebp + 0x30], edx */ W32((u32)(r_ebp+0x30u), r_edx);
    /* 0063b36e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063b36f: ret  */ FN_RET(0x0063b2cc); r_esp += 4; return;
}

void f_0063b370(void) /* sub_63B370 */
{
    FN_ENTER(0x0063b370);
    /* 0063b370: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0063b371: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0063b373: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0063b375: call 0x63a81c */ r_esp -= 4; W32(r_esp, 0x63b37au); f_0063a81c();
    /* 0063b37a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0063b37e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0063b380: jne 0x63b386 */ if (!fZ) goto L_0063b386;
L_0063b382:; BB(0x0063b382);
    /* 0063b382: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0063b383: ret 4 */ FN_RET(0x0063b370); r_esp += 8; return;
L_0063b386:; BB(0x0063b386);
    /* 0063b386: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0063b387: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x63b38cu); f_005c2f74();
    /* 0063b38c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063b38d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0063b38e: ret 4 */ FN_RET(0x0063b370); r_esp += 8; return;
}

void f_0063b394(void) /* sub_63B394 */
{
    FN_ENTER(0x0063b394);
    /* 0063b394: mov dword ptr [0xa8f1b8], 0x3f800000 */ W32((u32)(0xa8f1b8u), 0x3f800000u);
    /* 0063b39e: mov dword ptr [0xa8f1bc], 0x41000000 */ W32((u32)(0xa8f1bcu), 0x41000000u);
    /* 0063b3a8: mov dword ptr [0xa8f1c0], 0x3fc00000 */ W32((u32)(0xa8f1c0u), 0x3fc00000u);
    /* 0063b3b2: ret  */ FN_RET(0x0063b394); r_esp += 4; return;
}

void f_0063b3b4(void) /* sub_63B3B4 */
{
    FN_ENTER(0x0063b3b4);
    /* 0063b3b4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0063b3b5: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0063b3b8: mov edi, ecx */ r_edi = r_ecx;
    /* 0063b3ba: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 0063b3be: cmp eax, 0x4000 */ {  u32 a = r_eax; u32 b = 0x4000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0063b3c3: jl 0x63b427 */ if ((fS!=fO)) goto L_0063b427;
L_0063b3c5:; BB(0x0063b3c5);
    /* 0063b3c5: mov eax, dword ptr [edi + 0x80] */ r_eax = R32((u32)(r_edi+0x80u));
    /* 0063b3cb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063b3cd: je 0x63b427 */ if (fZ) goto L_0063b427;
L_0063b3cf:; BB(0x0063b3cf);
    /* 0063b3cf: mov eax, dword ptr [edi + 0x38] */ r_eax = R32((u32)(r_edi+0x38u));
    /* 0063b3d2: mov edx, dword ptr [edi + 0x3c] */ r_edx = R32((u32)(r_edi+0x3cu));
    /* 0063b3d5: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0063b3d8: mov eax, dword ptr [edi + 0x40] */ r_eax = R32((u32)(r_edi+0x40u));
    /* 0063b3db: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0063b3df: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 0063b3e3: fadd dword ptr [edi + 0x34c] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x34cu));
    /* 0063b3e9: fadd dword ptr [edi + 0x350] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x350u));
    /* 0063b3ef: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0063b3f3: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0063b3f7: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0063b3fa: push 0x1d0 */ { u32 v = 0x1d0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063b3ff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063b400: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x63b405u); f_0050b510();
    /* 0063b405: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 0063b409: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0063b40b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063b40c: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x63b411u); f_0050b510();
    /* 0063b411: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063b414: mov eax, dword ptr [edi + 0x370] */ r_eax = R32((u32)(r_edi+0x370u));
    /* 0063b41a: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0063b41d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0063b41f: jle 0x63b434 */ if ((fZ||fS!=fO)) goto L_0063b434;
L_0063b421:; BB(0x0063b421);
    /* 0063b421: mov dword ptr [edi + 0x370], eax */ W32((u32)(r_edi+0x370u), r_eax);
L_0063b427:; BB(0x0063b427);
    /* 0063b427: fld dword ptr [0x93416c] */ FPUSH(R_F32((u32)(0x93416cu)));
    /* 0063b42d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0063b430: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0063b431: ret 8 */ FN_RET(0x0063b3b4); r_esp += 12; return;
L_0063b434:; BB(0x0063b434);
    /* 0063b434: mov eax, dword ptr [edi + 0x80] */ r_eax = R32((u32)(r_edi+0x80u));
    /* 0063b43a: mov dword ptr [edi + 0x370], 0 */ W32((u32)(r_edi+0x370u), 0x0u);
    /* 0063b444: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063b446: je 0x63b4e4 */ if (fZ) goto L_0063b4e4;
L_0063b44c:; BB(0x0063b44c);
    /* 0063b44c: movsx ecx, word ptr [eax + 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x4u));
    /* 0063b450: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0063b452: jl 0x63b47c */ if ((fS!=fO)) goto L_0063b47c;
L_0063b454:; BB(0x0063b454);
    /* 0063b454: cmp ecx, 0xb9f */ {  u32 a = r_ecx; u32 b = 0xb9fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0063b45a: jg 0x63b47c */ if ((!fZ&&fS==fO)) goto L_0063b47c;
L_0063b45c:; BB(0x0063b45c);
    /* 0063b45c: mov edx, dword ptr [0xab02bc] */ r_edx = R32((u32)(0xab02bcu));
    /* 0063b462: movzx eax, word ptr [edx + ecx*4] */ r_eax = (u32)R16((u32)(r_edx+r_ecx*4));
    /* 0063b466: mov word ptr [esp + 0xc], ax */ W16((u32)(r_esp+0xcu), (u16)r_eax);
    /* 0063b46b: movzx eax, word ptr [edx + ecx*4 + 2] */ r_eax = (u32)R16((u32)(r_edx+r_ecx*4+0x2u));
    /* 0063b470: mov word ptr [esp + 0xe], ax */ W16((u32)(r_esp+0xeu), (u16)r_eax);
    /* 0063b475: mov eax, 1 */ r_eax = 0x1u;
    /* 0063b47a: jmp 0x63b47e */ goto L_0063b47e;
L_0063b47c:; BB(0x0063b47c);
    /* 0063b47c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0063b47e:; BB(0x0063b47e);
    /* 0063b47e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063b480: je 0x63b427 */ if (fZ) goto L_0063b427;
L_0063b482:; BB(0x0063b482);
    /* 0063b482: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 0063b486: mov eax, 4 */ r_eax = 0x4u;
    /* 0063b48b: mov word ptr [esp + 0xc], ax */ W16((u32)(r_esp+0xcu), (u16)r_eax);
    /* 0063b490: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063b491: mov word ptr [edi + 0x32e], ax */ W16((u32)(r_edi+0x32eu), (u16)r_eax);
    /* 0063b498: mov ecx, edi */ r_ecx = r_edi;
    /* 0063b49a: call 0x7b5038 */ r_esp -= 4; W32(r_esp, 0x63b49fu); f_007b5038();
    /* 0063b49f: mov eax, dword ptr [edi + 0x80] */ r_eax = R32((u32)(r_edi+0x80u));
    /* 0063b4a5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063b4a7: je 0x63b4d1 */ if (fZ) goto L_0063b4d1;
L_0063b4a9:; BB(0x0063b4a9);
    /* 0063b4a9: movsx edx, word ptr [eax + 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x4u));
    /* 0063b4ad: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0063b4af: jl 0x63b4d1 */ if ((fS!=fO)) goto L_0063b4d1;
L_0063b4b1:; BB(0x0063b4b1);
    /* 0063b4b1: cmp edx, 0xb9f */ {  u32 a = r_edx; u32 b = 0xb9fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0063b4b7: jg 0x63b4d1 */ if ((!fZ&&fS==fO)) goto L_0063b4d1;
L_0063b4b9:; BB(0x0063b4b9);
    /* 0063b4b9: mov eax, dword ptr [0xab02bc] */ r_eax = R32((u32)(0xab02bcu));
    /* 0063b4be: movzx ecx, word ptr [esp + 0xc] */ r_ecx = (u32)R16((u32)(r_esp+0xcu));
    /* 0063b4c3: mov word ptr [eax + edx*4], cx */ W16((u32)(r_eax+r_edx*4), (u16)r_ecx);
    /* 0063b4c7: movzx ecx, word ptr [esp + 0xe] */ r_ecx = (u32)R16((u32)(r_esp+0xeu));
    /* 0063b4cc: mov word ptr [eax + edx*4 + 2], cx */ W16((u32)(r_eax+r_edx*4+0x2u), (u16)r_ecx);
L_0063b4d1:; BB(0x0063b4d1);
    /* 0063b4d1: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 0063b4d5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0063b4d7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063b4d8: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 0063b4da: mov ecx, edi */ r_ecx = r_edi;
    /* 0063b4dc: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x63b4dfu); call_ind(t); }
    /* 0063b4df: jmp 0x63b427 */ goto L_0063b427;
L_0063b4e4:; BB(0x0063b4e4);
    /* 0063b4e4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0063b4e6: jmp 0x63b47e */ goto L_0063b47e;
}

void f_0063b4e8(void)
{
    FN_ENTER(0x0063b4e8);
    /* 0063b4e8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063b4e9: mov ebp, esp */ r_ebp = r_esp;
    /* 0063b4eb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0063b4ed: push 0x8e4b90 */ { u32 v = 0x8e4b90u; r_esp -= 4; W32(r_esp, v); }
    /* 0063b4f2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0063b4f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063b4f9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0063b500: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0063b503: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0063b506: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0063b509: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0063b50c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0063b50f: push 0x374 */ { u32 v = 0x374u; r_esp -= 4; W32(r_esp, v); }
    /* 0063b514: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0063b51b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x63b520u); f_005caba4();
    /* 0063b520: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063b521: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0063b524: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063b526: je 0x63b55f */ if (fZ) goto L_0063b55f;
L_0063b528:; BB(0x0063b528);
    /* 0063b528: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0063b52f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0063b536: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0063b539: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 0063b53f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0063b542: call 0x63b5b4 */ r_esp -= 4; W32(r_esp, 0x63b547u); f_0063b5b4();
    /* 0063b547: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0063b54a: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0063b551:; BB(0x0063b551);
    /* 0063b551: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063b554: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0063b55b: mov esp, ebp */ r_esp = r_ebp;
    /* 0063b55d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063b55e: ret  */ FN_RET(0x0063b4e8); r_esp += 4; return;
L_0063b55f:; BB(0x0063b55f);
    /* 0063b55f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0063b561: jmp 0x63b551 */ goto L_0063b551;
}

void f_0063b564(void) /* sub_63B564 */
{
    FN_ENTER(0x0063b564);
    /* 0063b564: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063b565: mov ebp, esp */ r_ebp = r_esp;
    /* 0063b567: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0063b569: push 0x8e4bac */ { u32 v = 0x8e4bacu; r_esp -= 4; W32(r_esp, v); }
    /* 0063b56e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0063b574: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063b575: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0063b57c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0063b57f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0063b582: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0063b585: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0063b588: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0063b58b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0063b58e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0063b591: mov dword ptr [ecx], 0xb2d940 */ W32((u32)(r_ecx), 0xb2d940u);
    /* 0063b597: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0063b59e: call 0x63c5d0 */ r_esp -= 4; W32(r_esp, 0x63b5a3u); f_0063c5d0();
    /* 0063b5a3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063b5a6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0063b5ad: mov esp, ebp */ r_esp = r_ebp;
    /* 0063b5af: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063b5b0: ret  */ FN_RET(0x0063b564); r_esp += 4; return;
}

void f_0063b5b4(void) /* sub_63B5B4 */
{
    FN_ENTER(0x0063b5b4);
    /* 0063b5b4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063b5b5: mov ebp, esp */ r_ebp = r_esp;
    /* 0063b5b7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0063b5b9: push 0x8e4bc8 */ { u32 v = 0x8e4bc8u; r_esp -= 4; W32(r_esp, v); }
    /* 0063b5be: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0063b5c4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063b5c5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0063b5cc: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0063b5cf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0063b5d2: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0063b5d5: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0063b5d8: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0063b5db: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0063b5de: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
    /* 0063b5e1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063b5e2: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0063b5e5: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0063b5e8: call 0x63c638 */ r_esp -= 4; W32(r_esp, 0x63b5edu); f_0063c638();
    /* 0063b5ed: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0063b5f4: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0063b5f7: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0063b5fa: mov dword ptr [ecx], 0xb2d940 */ W32((u32)(r_ecx), 0xb2d940u);
    /* 0063b600: mov eax, dword ptr [0x9c6848] */ r_eax = R32((u32)(0x9c6848u));
    /* 0063b605: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063b606: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0063b609: call dword ptr [0xb2d954] */ { u32 t = R32((u32)(0xb2d954u)); r_esp -= 4; W32(r_esp, 0x63b60fu); call_ind(t); }
    /* 0063b60f: mov esi, dword ptr [ebp - 0x3c] */ r_esi = R32((u32)(r_ebp+0xffffffc4u));
    /* 0063b612: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 0063b615: mov edx, dword ptr [esi + 0x3c] */ r_edx = R32((u32)(r_esi+0x3cu));
    /* 0063b618: mov ebx, dword ptr [esi + 0x40] */ r_ebx = R32((u32)(r_esi+0x40u));
    /* 0063b61b: mov dword ptr [esi + 0x2a4], eax */ W32((u32)(r_esi+0x2a4u), r_eax);
    /* 0063b621: mov dword ptr [esi + 0x2a8], edx */ W32((u32)(r_esi+0x2a8u), r_edx);
    /* 0063b627: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0063b62a: mov dword ptr [esi + 0x2ac], ebx */ W32((u32)(r_esi+0x2acu), r_ebx);
    /* 0063b630: mov edi, dword ptr [edx + 0x2a4] */ r_edi = R32((u32)(r_edx+0x2a4u));
    /* 0063b636: mov ecx, dword ptr [edx + 0x2a8] */ r_ecx = R32((u32)(r_edx+0x2a8u));
    /* 0063b63c: mov eax, dword ptr [edx + 0x2ac] */ r_eax = R32((u32)(r_edx+0x2acu));
    /* 0063b642: mov dword ptr [edx + 0x298], edi */ W32((u32)(r_edx+0x298u), r_edi);
    /* 0063b648: mov dword ptr [edx + 0x29c], ecx */ W32((u32)(r_edx+0x29cu), r_ecx);
    /* 0063b64e: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0063b651: mov dword ptr [edx + 0x2a0], eax */ W32((u32)(r_edx+0x2a0u), r_eax);
    /* 0063b657: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0063b65a: mov eax, dword ptr [edx + 0x298] */ r_eax = R32((u32)(r_edx+0x298u));
    /* 0063b660: mov dword ptr [edx + 0x44], eax */ W32((u32)(r_edx+0x44u), r_eax);
    /* 0063b663: mov eax, dword ptr [edx + 0x29c] */ r_eax = R32((u32)(r_edx+0x29cu));
    /* 0063b669: mov dword ptr [edx + 0x48], eax */ W32((u32)(r_edx+0x48u), r_eax);
    /* 0063b66c: mov eax, dword ptr [edx + 0x2a0] */ r_eax = R32((u32)(r_edx+0x2a0u));
    /* 0063b672: mov dword ptr [edx + 0x4c], eax */ W32((u32)(r_edx+0x4cu), r_eax);
    /* 0063b675: call 0x77a1f4 */ r_esp -= 4; W32(r_esp, 0x63b67au); f_0077a1f4();
    /* 0063b67a: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0063b67d: mov ebx, dword ptr [0xa8f1d0] */ r_ebx = R32((u32)(0xa8f1d0u));
    /* 0063b683: mov eax, dword ptr [ebx + 0x42c] */ r_eax = R32((u32)(r_ebx+0x42cu));
    /* 0063b689: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 0063b68c: fld dword ptr [ecx + 0x68] */ FPUSH(R_F32((u32)(r_ecx+0x68u)));
    /* 0063b68f: fmul dword ptr [0x934168] */ ST(0) = ST(0) * R_F32((u32)(0x934168u));
    /* 0063b695: fadd dword ptr [0x934160] */ ST(0) = ST(0) + R_F32((u32)(0x934160u));
    /* 0063b69b: mov dword ptr [ecx + 0x34], edx */ W32((u32)(r_ecx+0x34u), r_edx);
    /* 0063b69e: mov esi, dword ptr [ebx + 0x42c] */ r_esi = R32((u32)(r_ebx+0x42cu));
    /* 0063b6a4: mov edi, dword ptr [esi + 0xc] */ r_edi = R32((u32)(r_esi+0xcu));
    /* 0063b6a7: mov edx, dword ptr [ecx + 0x84] */ r_edx = R32((u32)(r_ecx+0x84u));
    /* 0063b6ad: fst dword ptr [ecx + 0x33c] */ W_F32((u32)(r_ecx+0x33cu), ST(0));
    /* 0063b6b3: fstp dword ptr [ecx + 0x340] */ W_F32((u32)(r_ecx+0x340u), ST(0)); FPOP();
    /* 0063b6b9: mov dword ptr [ecx + 0x24], edi */ W32((u32)(r_ecx+0x24u), r_edi);
    /* 0063b6bc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0063b6be: mov word ptr [ecx + 0x32e], ax */ W16((u32)(r_ecx+0x32eu), (u16)r_eax);
    /* 0063b6c5: mov word ptr [ecx + 0x330], ax */ W16((u32)(r_ecx+0x330u), (u16)r_eax);
    /* 0063b6cc: add edx, 0x1e */ {  u32 a = r_edx; u32 b = 0x1eu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0063b6cf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0063b6d1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0063b6d3: jg 0x63b6d7 */ if ((!fZ&&fS==fO)) goto L_0063b6d7;
L_0063b6d5:; BB(0x0063b6d5);
    /* 0063b6d5: mov edx, eax */ r_edx = r_eax;
L_0063b6d7:; BB(0x0063b6d7);
    /* 0063b6d7: mov eax, dword ptr [ecx + 0x88] */ r_eax = R32((u32)(r_ecx+0x88u));
    /* 0063b6dd: mov dword ptr [ecx + 0x358], edx */ W32((u32)(r_ecx+0x358u), r_edx);
    /* 0063b6e3: mov dword ptr [ecx + 0x35c], edx */ W32((u32)(r_ecx+0x35cu), r_edx);
    /* 0063b6e9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0063b6eb: jl 0x63b6fc */ if ((fS!=fO)) goto L_0063b6fc;
L_0063b6ed:; BB(0x0063b6ed);
    /* 0063b6ed: cmp eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0063b6f2: jge 0x63b6fc */ if ((fS==fO)) goto L_0063b6fc;
L_0063b6f4:; BB(0x0063b6f4);
    /* 0063b6f4: mov dword ptr [ecx + 0x36c], eax */ W32((u32)(r_ecx+0x36cu), r_eax);
    /* 0063b6fa: jmp 0x63b706 */ goto L_0063b706;
L_0063b6fc:; BB(0x0063b6fc);
    /* 0063b6fc: mov dword ptr [ecx + 0x36c], 0xffffffff */ W32((u32)(r_ecx+0x36cu), 0xffffffffu);
L_0063b706:; BB(0x0063b706);
    /* 0063b706: mov eax, dword ptr [ecx + 0x8c] */ r_eax = R32((u32)(r_ecx+0x8cu));
    /* 0063b70c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0063b70e: jl 0x63b7e6 */ if ((fS!=fO)) goto L_0063b7e6;
L_0063b714:; BB(0x0063b714);
    /* 0063b714: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0063b717: jge 0x63b721 */ if ((fS==fO)) goto L_0063b721;
L_0063b719:; BB(0x0063b719);
    /* 0063b719: mov dword ptr [ecx + 0x364], eax */ W32((u32)(r_ecx+0x364u), r_eax);
    /* 0063b71f: jmp 0x63b72b */ goto L_0063b72b;
L_0063b721:; BB(0x0063b721);
    /* 0063b721: mov dword ptr [ecx + 0x364], 4 */ W32((u32)(r_ecx+0x364u), 0x4u);
L_0063b72b:; BB(0x0063b72b);
    /* 0063b72b: call 0x63bf48 */ r_esp -= 4; W32(r_esp, 0x63b730u); f_0063bf48();
    /* 0063b730: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0063b733: fld dword ptr [ecx + 0x6c] */ FPUSH(R_F32((u32)(r_ecx+0x6cu)));
    /* 0063b736: fnstcw word ptr [ebp - 0x38] */ W16((u32)(r_ebp+0xffffffc8u), fcw);
    /* 0063b739: movzx eax, word ptr [ebp - 0x38] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc8u));
    /* 0063b73d: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0063b742: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0063b745: fldcw word ptr [ebp - 0x30] */ fcw = R16((u32)(r_ebp+0xffffffd0u));
    /* 0063b748: fistp dword ptr [ebp - 0x28] */ W32((u32)(r_ebp+0xffffffd8u), (u32)fx_int32(ST(0))); FPOP();
    /* 0063b74b: fldcw word ptr [ebp - 0x38] */ fcw = R16((u32)(r_ebp+0xffffffc8u));
    /* 0063b74e: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0063b751: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0063b753: jg 0x63b761 */ if ((!fZ&&fS==fO)) goto L_0063b761;
L_0063b755:; BB(0x0063b755);
    /* 0063b755: mov dword ptr [ecx + 0x370], 1 */ W32((u32)(r_ecx+0x370u), 0x1u);
    /* 0063b75f: jmp 0x63b77a */ goto L_0063b77a;
L_0063b761:; BB(0x0063b761);
    /* 0063b761: cmp eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0063b766: jg 0x63b770 */ if ((!fZ&&fS==fO)) goto L_0063b770;
L_0063b768:; BB(0x0063b768);
    /* 0063b768: mov dword ptr [ecx + 0x370], eax */ W32((u32)(r_ecx+0x370u), r_eax);
    /* 0063b76e: jmp 0x63b77a */ goto L_0063b77a;
L_0063b770:; BB(0x0063b770);
    /* 0063b770: mov dword ptr [ecx + 0x370], 0x100 */ W32((u32)(r_ecx+0x370u), 0x100u);
L_0063b77a:; BB(0x0063b77a);
    /* 0063b77a: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 0063b77f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063b781: mov word ptr [ecx + 0x344], ax */ W16((u32)(r_ecx+0x344u), (u16)r_eax);
    /* 0063b788: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x63b78du); f_007706b0();
    /* 0063b78d: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0063b790: mov eax, dword ptr [edx + 0x64] */ r_eax = R32((u32)(r_edx+0x64u));
    /* 0063b793: mov dword ptr [edx + 0x350], 0 */ W32((u32)(r_edx+0x350u), 0x0u);
    /* 0063b79d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0063b79f: mov dword ptr [edx + 0x34c], 0 */ W32((u32)(r_edx+0x34cu), 0x0u);
    /* 0063b7a9: mov dword ptr [edx + 0x354], 0 */ W32((u32)(r_edx+0x354u), 0x0u);
    /* 0063b7b3: jle 0x63b7da */ if ((fZ||fS!=fO)) goto L_0063b7da;
L_0063b7b5:; BB(0x0063b7b5);
    /* 0063b7b5: mov dword ptr [edx + 0x360], 1 */ W32((u32)(r_edx+0x360u), 0x1u);
L_0063b7bf:; BB(0x0063b7bf);
    /* 0063b7bf: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0063b7c2: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0063b7c5: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0063b7c8: mov eax, edx */ r_eax = r_edx;
    /* 0063b7ca: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063b7cd: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0063b7d4: mov esp, ebp */ r_esp = r_ebp;
    /* 0063b7d6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063b7d7: ret 8 */ FN_RET(0x0063b5b4); r_esp += 12; return;
L_0063b7da:; BB(0x0063b7da);
    /* 0063b7da: mov dword ptr [edx + 0x360], 0 */ W32((u32)(r_edx+0x360u), 0x0u);
    /* 0063b7e4: jmp 0x63b7bf */ goto L_0063b7bf;
L_0063b7e6:; BB(0x0063b7e6);
    /* 0063b7e6: mov dword ptr [ecx + 0x364], 0 */ W32((u32)(r_ecx+0x364u), 0x0u);
    /* 0063b7f0: jmp 0x63b72b */ goto L_0063b72b;
}

void f_0063b7f8(void) /* sub_63B7F8 */
{
    FN_ENTER(0x0063b7f8);
    /* 0063b7f8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063b7f9: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0063b7fb: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063b7fc: call 0x4fbf00 */ r_esp -= 4; W32(r_esp, 0x63b801u); f_004fbf00();
    /* 0063b801: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063b802: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0063b805: je 0x63b809 */ if (fZ) goto L_0063b809;
L_0063b807:; BB(0x0063b807);
    /* 0063b807: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063b808: ret  */ FN_RET(0x0063b7f8); r_esp += 4; return;
L_0063b809:; BB(0x0063b809);
    /* 0063b809: push 0x9ffa30 */ { u32 v = 0x9ffa30u; r_esp -= 4; W32(r_esp, v); }
    /* 0063b80e: push 0xaab4f0 */ { u32 v = 0xaab4f0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063b813: lea eax, [ebp + 0x50] */ r_eax = (u32)(r_ebp+0x50u);
    /* 0063b816: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063b817: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x63b81cu); f_0061cdb0();
    /* 0063b81c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063b81f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0063b821: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x63b826u); f_0061cdb0();
    /* 0063b826: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063b827: ret  */ FN_RET(0x0063b7f8); r_esp += 4; return;
}

void f_0063b828(void) /* sub_63B828 */
{
    FN_ENTER(0x0063b828);
    /* 0063b828: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0063b829: mov esi, ecx */ r_esi = r_ecx;
    /* 0063b82b: mov ecx, esi */ r_ecx = r_esi;
    /* 0063b82d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0063b82f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063b831: call 0x7b52c4 */ r_esp -= 4; W32(r_esp, 0x63b836u); f_007b52c4();
    /* 0063b836: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0063b838: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0063b839: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x63b83eu); f_006946a8();
    /* 0063b83e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063b841: movsx eax, word ptr [esi + 0x330] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x330u));
    /* 0063b848: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0063b84a: jge 0x63b84e */ if ((fS==fO)) goto L_0063b84e;
L_0063b84c:; BB(0x0063b84c);
    /* 0063b84c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0063b84d: ret  */ FN_RET(0x0063b828); r_esp += 4; return;
L_0063b84e:; BB(0x0063b84e);
    /* 0063b84e: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0063b851: jg 0x63b864 */ if ((!fZ&&fS==fO)) goto L_0063b864;
L_0063b853:; BB(0x0063b853);
    /* 0063b853: mov eax, 2 */ r_eax = 0x2u;
    /* 0063b858: mov word ptr [esi + 0x330], ax */ W16((u32)(r_esi+0x330u), (u16)r_eax);
    /* 0063b85f: jmp 0x63b901 */ goto L_0063b901;
L_0063b864:; BB(0x0063b864);
    /* 0063b864: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063b867: je 0x63b901 */ if (fZ) goto L_0063b901;
L_0063b86d:; BB(0x0063b86d);
    /* 0063b86d: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0063b870: jne 0x63b8ab */ if (!fZ) goto L_0063b8ab;
L_0063b872:; BB(0x0063b872);
    /* 0063b872: fld dword ptr [esi + 0x350] */ FPUSH(R_F32((u32)(r_esi+0x350u)));
    /* 0063b878: fcom dword ptr [0x93415c] */ fx_compare(ST(0), R_F32((u32)(0x93415cu))); 
    /* 0063b87e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0063b880: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0063b881: jbe 0x63b893 */ if ((fC||fZ)) goto L_0063b893;
L_0063b883:; BB(0x0063b883);
    /* 0063b883: fld dword ptr [0x934158] */ FPUSH(R_F32((u32)(0x934158u)));
    /* 0063b889: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0063b88b: fstp dword ptr [esi + 0x350] */ W_F32((u32)(r_esi+0x350u), ST(0)); FPOP();
    /* 0063b891: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0063b892: ret  */ FN_RET(0x0063b828); r_esp += 4; return;
L_0063b893:; BB(0x0063b893);
    /* 0063b893: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0063b895: mov eax, 4 */ r_eax = 0x4u;
    /* 0063b89a: mov word ptr [esi + 0x330], ax */ W16((u32)(r_esi+0x330u), (u16)r_eax);
    /* 0063b8a1: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0063b8a3: mov dword ptr [esi + 0x350], edx */ W32((u32)(r_esi+0x350u), r_edx);
    /* 0063b8a9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0063b8aa: ret  */ FN_RET(0x0063b828); r_esp += 4; return;
L_0063b8ab:; BB(0x0063b8ab);
    /* 0063b8ab: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0063b8ae: jne 0x63b84c */ if (!fZ) goto L_0063b84c;
L_0063b8b0:; BB(0x0063b8b0);
    /* 0063b8b0: fld dword ptr [esi + 0x34c] */ FPUSH(R_F32((u32)(r_esi+0x34cu)));
    /* 0063b8b6: fcom dword ptr [0x93415c] */ fx_compare(ST(0), R_F32((u32)(0x93415cu))); 
    /* 0063b8bc: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0063b8be: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0063b8bf: jbe 0x63b8d1 */ if ((fC||fZ)) goto L_0063b8d1;
L_0063b8c1:; BB(0x0063b8c1);
    /* 0063b8c1: fld dword ptr [0x934158] */ FPUSH(R_F32((u32)(0x934158u)));
    /* 0063b8c7: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0063b8c9: fstp dword ptr [esi + 0x34c] */ W_F32((u32)(r_esi+0x34cu), ST(0)); FPOP();
    /* 0063b8cf: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0063b8d0: ret  */ FN_RET(0x0063b828); r_esp += 4; return;
L_0063b8d1:; BB(0x0063b8d1);
    /* 0063b8d1: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0063b8d3: mov edx, 0xffff */ r_edx = 0xffffu;
    /* 0063b8d8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0063b8da: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063b8db: mov word ptr [esi + 0x32e], cx */ W16((u32)(r_esi+0x32eu), (u16)r_ecx);
    /* 0063b8e2: mov word ptr [esi + 0x330], cx */ W16((u32)(r_esi+0x330u), (u16)r_ecx);
    /* 0063b8e9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0063b8eb: mov dword ptr [esi + 0x34c], eax */ W32((u32)(r_esi+0x34cu), r_eax);
    /* 0063b8f1: mov word ptr [esi + 0x344], dx */ W16((u32)(r_esi+0x344u), (u16)r_edx);
    /* 0063b8f8: mov ecx, esi */ r_ecx = r_esi;
    /* 0063b8fa: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x63b8ffu); f_007706b0();
    /* 0063b8ff: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0063b900: ret  */ FN_RET(0x0063b828); r_esp += 4; return;
L_0063b901:; BB(0x0063b901);
    /* 0063b901: mov eax, dword ptr [esi + 0x35c] */ r_eax = R32((u32)(r_esi+0x35cu));
    /* 0063b907: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0063b90a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0063b90c: jl 0x63b916 */ if ((fS!=fO)) goto L_0063b916;
L_0063b90e:; BB(0x0063b90e);
    /* 0063b90e: mov dword ptr [esi + 0x35c], eax */ W32((u32)(r_esi+0x35cu), r_eax);
    /* 0063b914: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0063b915: ret  */ FN_RET(0x0063b828); r_esp += 4; return;
L_0063b916:; BB(0x0063b916);
    /* 0063b916: mov edx, dword ptr [esi + 0x358] */ r_edx = R32((u32)(r_esi+0x358u));
    /* 0063b91c: mov eax, 3 */ r_eax = 0x3u;
    /* 0063b921: mov word ptr [esi + 0x330], ax */ W16((u32)(r_esi+0x330u), (u16)r_eax);
    /* 0063b928: mov dword ptr [esi + 0x35c], edx */ W32((u32)(r_esi+0x35cu), r_edx);
    /* 0063b92e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0063b92f: ret  */ FN_RET(0x0063b828); r_esp += 4; return;
}

void f_0063b930(void) /* sub_63B930 */
{
    FN_ENTER(0x0063b930);
    /* 0063b930: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063b931: mov ebp, esp */ r_ebp = r_esp;
    /* 0063b933: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0063b935: push 0x8e4bf0 */ { u32 v = 0x8e4bf0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063b93a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0063b940: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063b941: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0063b948: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0063b94b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0063b94e: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 0063b951: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 0063b954: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 0063b957: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0063b95a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0063b95c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063b95e: call 0x7b52c4 */ r_esp -= 4; W32(r_esp, 0x63b963u); f_007b52c4();
    /* 0063b963: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0063b966: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0063b968: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063b969: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x63b96eu); f_006946a8();
    /* 0063b96e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063b971: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0063b974: movsx eax, word ptr [eax + 0x330] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x330u));
    /* 0063b97b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fO = 0; }
    /* 0063b97d: je 0x63be42 */ if (fZ) goto L_0063be42;
L_0063b983:; BB(0x0063b983);
    /* 0063b983: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0063b986: je 0x63bdfb */ if (fZ) goto L_0063bdfb;
L_0063b98c:; BB(0x0063b98c);
    /* 0063b98c: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063b98f: je 0x63ba41 */ if (fZ) goto L_0063ba41;
L_0063b995:; BB(0x0063b995);
    /* 0063b995: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0063b998: jne 0x63b9de */ if (!fZ) goto L_0063b9de;
L_0063b99a:; BB(0x0063b99a);
    /* 0063b99a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0063b99d: fld dword ptr [edx + 0x350] */ FPUSH(R_F32((u32)(r_edx+0x350u)));
    /* 0063b9a3: fcom dword ptr [0x934154] */ fx_compare(ST(0), R_F32((u32)(0x934154u))); 
    /* 0063b9a9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0063b9ab: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0063b9ac: jbe 0x63b9c1 */ if ((fC||fZ)) goto L_0063b9c1;
L_0063b9ae:; BB(0x0063b9ae);
    /* 0063b9ae: fsub dword ptr [0x934158] */ ST(0) = ST(0) - R_F32((u32)(0x934158u));
    /* 0063b9b4: mov eax, edx */ r_eax = r_edx;
    /* 0063b9b6: fstp dword ptr [eax + 0x350] */ W_F32((u32)(r_eax+0x350u), ST(0)); FPOP();
    /* 0063b9bc: jmp 0x63bcd4 */ goto L_0063bcd4;
L_0063b9c1:; BB(0x0063b9c1);
    /* 0063b9c1: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0063b9c3: mov ecx, edx */ r_ecx = r_edx;
    /* 0063b9c5: mov eax, 4 */ r_eax = 0x4u;
    /* 0063b9ca: mov word ptr [ecx + 0x330], ax */ W16((u32)(r_ecx+0x330u), (u16)r_eax);
    /* 0063b9d1: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0063b9d3: mov dword ptr [ecx + 0x350], edx */ W32((u32)(r_ecx+0x350u), r_edx);
    /* 0063b9d9: jmp 0x63bcd4 */ goto L_0063bcd4;
L_0063b9de:; BB(0x0063b9de);
    /* 0063b9de: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0063b9e1: jne 0x63bcd4 */ if (!fZ) goto L_0063bcd4;
L_0063b9e7:; BB(0x0063b9e7);
    /* 0063b9e7: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0063b9ea: fld dword ptr [edx + 0x34c] */ FPUSH(R_F32((u32)(r_edx+0x34cu)));
    /* 0063b9f0: fcom dword ptr [0x934154] */ fx_compare(ST(0), R_F32((u32)(0x934154u))); 
    /* 0063b9f6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0063b9f8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0063b9f9: jbe 0x63ba0e */ if ((fC||fZ)) goto L_0063ba0e;
L_0063b9fb:; BB(0x0063b9fb);
    /* 0063b9fb: fsub dword ptr [0x934158] */ ST(0) = ST(0) - R_F32((u32)(0x934158u));
    /* 0063ba01: mov eax, edx */ r_eax = r_edx;
    /* 0063ba03: fstp dword ptr [eax + 0x34c] */ W_F32((u32)(r_eax+0x34cu), ST(0)); FPOP();
    /* 0063ba09: jmp 0x63bcd4 */ goto L_0063bcd4;
L_0063ba0e:; BB(0x0063ba0e);
    /* 0063ba0e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0063ba10: mov ecx, edx */ r_ecx = r_edx;
    /* 0063ba12: mov edx, 0xffff */ r_edx = 0xffffu;
    /* 0063ba17: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0063ba19: mov word ptr [ecx + 0x32e], bx */ W16((u32)(r_ecx+0x32eu), (u16)r_ebx);
    /* 0063ba20: mov word ptr [ecx + 0x330], bx */ W16((u32)(r_ecx+0x330u), (u16)r_ebx);
    /* 0063ba27: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0063ba28: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0063ba2a: mov dword ptr [ecx + 0x34c], eax */ W32((u32)(r_ecx+0x34cu), r_eax);
    /* 0063ba30: mov word ptr [ecx + 0x344], dx */ W16((u32)(r_ecx+0x344u), (u16)r_edx);
    /* 0063ba37: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x63ba3cu); f_007706b0();
    /* 0063ba3c: jmp 0x63bcd4 */ goto L_0063bcd4;
L_0063ba41:; BB(0x0063ba41);
    /* 0063ba41: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0063ba44: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063ba46: push dword ptr [ecx + 0x33c] */ { u32 v = R32((u32)(r_ecx+0x33cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0063ba4c: call 0x7714cc */ r_esp -= 4; W32(r_esp, 0x63ba51u); f_007714cc();
    /* 0063ba51: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0063ba54: mov word ptr [edx + 0x344], ax */ W16((u32)(r_edx+0x344u), (u16)r_eax);
    /* 0063ba5b: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 0063ba5e: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063ba63: je 0x63bded */ if (fZ) goto L_0063bded;
L_0063ba69:; BB(0x0063ba69);
    /* 0063ba69: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063ba6a: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x63ba6fu); f_0068d5a8();
    /* 0063ba6f: mov ebx, eax */ r_ebx = r_eax;
    /* 0063ba71: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063ba74: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0063ba77: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0063ba78: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x63ba7du); f_007706b0();
    /* 0063ba7d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0063ba80: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x63ba85u); f_00770738();
    /* 0063ba85: mov esi, eax */ r_esi = r_eax;
    /* 0063ba87: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063ba89: je 0x63bca3 */ if (fZ) goto L_0063bca3;
L_0063ba8f:; BB(0x0063ba8f);
    /* 0063ba8f: mov edx, dword ptr [ebx + 0x3f0] */ r_edx = R32((u32)(r_ebx+0x3f0u));
    /* 0063ba95: cmp edx, dword ptr [0xaafca0] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaafca0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063ba9b: jne 0x63bca3 */ if (!fZ) goto L_0063bca3;
L_0063baa1:; BB(0x0063baa1);
    /* 0063baa1: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0063baa4: movsx edi, word ptr [edx + 0x2e] */ r_edi = (u32)(i32)(i16)R16((u32)(r_edx+0x2eu));
    /* 0063baa8: cmp di, word ptr [esi + 0x2e] */ {  u32 a = (u16)r_edi; u32 b = R16((u32)(r_esi+0x2eu)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0063baac: je 0x63bac0 */ if (fZ) goto L_0063bac0;
L_0063baae:; BB(0x0063baae);
    /* 0063baae: movsx ebx, word ptr [esi + 0x28] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_esi+0x28u));
    /* 0063bab2: cmp bx, word ptr [edx + 0x28] */ {  u32 a = (u16)r_ebx; u32 b = R16((u32)(r_edx+0x28u)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0063bab6: je 0x63bac0 */ if (fZ) goto L_0063bac0;
L_0063bab8:; BB(0x0063bab8);
    /* 0063bab8: cmp ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063baba: jne 0x63bca3 */ if (!fZ) goto L_0063bca3;
L_0063bac0:; BB(0x0063bac0);
    /* 0063bac0: lea edi, [esi + 0x38] */ r_edi = (u32)(r_esi+0x38u);
    /* 0063bac3: lea ebx, [edx + 0x38] */ r_ebx = (u32)(r_edx+0x38u);
    /* 0063bac6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0063bac7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0063bac8: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x63bacdu); f_007a9180();
    /* 0063bacd: fstp dword ptr [ebp - 0x18] */ W_F32((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 0063bad0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063bad3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063bad5: mov ecx, esi */ r_ecx = r_esi;
    /* 0063bad7: call 0x7b5264 */ r_esp -= 4; W32(r_esp, 0x63badcu); f_007b5264();
    /* 0063badc: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0063badf: fadd dword ptr [edx + 0x33c] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x33cu));
    /* 0063bae5: fld dword ptr [ebp - 0x18] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe8u)));
    /* 0063bae8: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0063baea: fst dword ptr [edx + 0x340] */ W_F32((u32)(r_edx+0x340u), ST(0));
    /* 0063baf0: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0063baf2: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0063baf4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0063baf6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0063baf7: jbe 0x63bc8c */ if ((fC||fZ)) goto L_0063bc8c;
L_0063bafd:; BB(0x0063bafd);
    /* 0063bafd: mov ebx, edx */ r_ebx = r_edx;
    /* 0063baff: mov edi, 3 */ r_edi = 0x3u;
    /* 0063bb04: mov word ptr [ebx + 0x32e], di */ W16((u32)(r_ebx+0x32eu), (u16)r_edi);
    /* 0063bb0b: mov edx, 2 */ r_edx = 0x2u;
    /* 0063bb10: mov word ptr [ebx + 0x330], dx */ W16((u32)(r_ebx+0x330u), (u16)r_edx);
    /* 0063bb17: mov edx, dword ptr [ebx + 0x38] */ r_edx = R32((u32)(r_ebx+0x38u));
    /* 0063bb1a: mov dword ptr [0xaab4f0], edx */ W32((u32)(0xaab4f0u), r_edx);
    /* 0063bb20: mov edx, dword ptr [ebx + 0x3c] */ r_edx = R32((u32)(r_ebx+0x3cu));
    /* 0063bb23: mov dword ptr [0xaab4f4], edx */ W32((u32)(0xaab4f4u), r_edx);
    /* 0063bb29: mov edx, dword ptr [ebx + 0x40] */ r_edx = R32((u32)(r_ebx+0x40u));
    /* 0063bb2c: fld dword ptr [0xaab4f4] */ FPUSH(R_F32((u32)(0xaab4f4u)));
    /* 0063bb32: fadd dword ptr [ebx + 0x34c] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x34cu));
    /* 0063bb38: fadd dword ptr [ebx + 0x350] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x350u));
    /* 0063bb3e: fstp dword ptr [0xaab4f4] */ W_F32((u32)(0xaab4f4u), ST(0)); FPOP();
    /* 0063bb44: mov dword ptr [0xaab4f8], edx */ W32((u32)(0xaab4f8u), r_edx);
    /* 0063bb4a: mov edx, dword ptr [esi + 0x300] */ r_edx = R32((u32)(r_esi+0x300u));
    /* 0063bb50: mov ecx, 0xaab4e4 */ r_ecx = 0xaab4e4u;
    /* 0063bb55: mov dword ptr [0xaab4e4], edx */ W32((u32)(0xaab4e4u), r_edx);
    /* 0063bb5b: mov edx, dword ptr [esi + 0x304] */ r_edx = R32((u32)(r_esi+0x304u));
    /* 0063bb61: mov dword ptr [0xaab4e8], edx */ W32((u32)(0xaab4e8u), r_edx);
    /* 0063bb67: mov edx, dword ptr [esi + 0x308] */ r_edx = R32((u32)(r_esi+0x308u));
    /* 0063bb6d: mov dword ptr [0xaab4ec], edx */ W32((u32)(0xaab4ecu), r_edx);
    /* 0063bb73: mov edx, 0xaab4f0 */ r_edx = 0xaab4f0u;
    /* 0063bb78: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x63bb7du); f_0082f9c4();
    /* 0063bb7d: push 0xaab4e4 */ { u32 v = 0xaab4e4u; r_esp -= 4; W32(r_esp, v); }
    /* 0063bb82: call 0x782868 */ r_esp -= 4; W32(r_esp, 0x63bb87u); f_00782868();
    /* 0063bb87: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063bb88: fcomp dword ptr [0x934150] */ fx_compare(ST(0), R_F32((u32)(0x934150u))); FPOP();
    /* 0063bb8e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0063bb90: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0063bb91: jae 0x63bbdb */ if (!fC) goto L_0063bbdb;
L_0063bb93:; BB(0x0063bb93);
    /* 0063bb93: mov dword ptr [0xaab4e8], 0 */ W32((u32)(0xaab4e8u), 0x0u);
    /* 0063bb9d: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 0063bba2: mov dword ptr [0xaab4e4], 0 */ W32((u32)(0xaab4e4u), 0x0u);
    /* 0063bbac: mov dword ptr [0xaab4ec], 0x3f800000 */ W32((u32)(0xaab4ecu), 0x3f800000u);
    /* 0063bbb6: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x63bbbbu); f_0082d990();
    /* 0063bbbb: mov edx, dword ptr [ebx + 0x60] */ r_edx = R32((u32)(r_ebx+0x60u));
    /* 0063bbbe: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0063bbc0: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x63bbc5u); f_0082d8bc();
    /* 0063bbc5: push 0xaab4e4 */ { u32 v = 0xaab4e4u; r_esp -= 4; W32(r_esp, v); }
    /* 0063bbca: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0063bbcc: mov edx, 0xaab4e4 */ r_edx = 0xaab4e4u;
    /* 0063bbd1: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x63bbd6u); f_0082eab8();
    /* 0063bbd6: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x63bbdbu); f_0082da80();
L_0063bbdb:; BB(0x0063bbdb);
    /* 0063bbdb: fld dword ptr [0xaab4e4] */ FPUSH(R_F32((u32)(0xaab4e4u)));
    /* 0063bbe1: fld dword ptr [0xaab4ec] */ FPUSH(R_F32((u32)(0xaab4ecu)));
    /* 0063bbe7: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0063bbe9: fmul qword ptr [0x934108] */ ST(0) = ST(0) * R_F64((u32)(0x934108u));
    /* 0063bbef: fdiv qword ptr [0x934100] */ ST(0) = ST(0) / R_F64((u32)(0x934100u));
    /* 0063bbf5: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0063bbf8: mov edx, dword ptr [edx + 0x364] */ r_edx = R32((u32)(r_edx+0x364u));
    /* 0063bbfe: fnstcw word ptr [ebp - 0x3c] */ W16((u32)(r_ebp+0xffffffc4u), fcw);
    /* 0063bc01: movzx eax, word ptr [ebp - 0x3c] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc4u));
    /* 0063bc05: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0063bc0a: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0063bc0d: fldcw word ptr [ebp - 0x34] */ fcw = R16((u32)(r_ebp+0xffffffccu));
    /* 0063bc10: fistp dword ptr [ebp - 0x2c] */ W32((u32)(r_ebp+0xffffffd4u), (u32)fx_int32(ST(0))); FPOP();
    /* 0063bc13: fldcw word ptr [ebp - 0x3c] */ fcw = R16((u32)(r_ebp+0xffffffc4u));
    /* 0063bc16: mov ebx, dword ptr [ebp - 0x2c] */ r_ebx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0063bc19: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063bc1c: je 0x63bd0b */ if (fZ) goto L_0063bd0b;
L_0063bc22:; BB(0x0063bc22);
    /* 0063bc22: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063bc24: je 0x63bceb */ if (fZ) goto L_0063bceb;
L_0063bc2a:; BB(0x0063bc2a);
    /* 0063bc2a: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063bc2d: je 0x63bc72 */ if (fZ) goto L_0063bc72;
L_0063bc2f:; BB(0x0063bc2f);
    /* 0063bc2f: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063bc32: jne 0x63bc54 */ if (!fZ) goto L_0063bc54;
L_0063bc34:; BB(0x0063bc34);
    /* 0063bc34: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0063bc37: push dword ptr [edx + 0x368] */ { u32 v = R32((u32)(r_edx+0x368u)); r_esp -= 4; W32(r_esp, v); }
    /* 0063bc3d: add esi, 0x300 */ {  u32 a = r_esi; u32 b = 0x300u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0063bc43: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0063bc44: push 0xaab4f0 */ { u32 v = 0xaab4f0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063bc49: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063bc4a: call 0x6e9e14 */ r_esp -= 4; W32(r_esp, 0x63bc4fu); f_006e9e14();
    /* 0063bc4f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063bc52: jmp 0x63bcb9 */ goto L_0063bcb9;
L_0063bc54:; BB(0x0063bc54);
    /* 0063bc54: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063bc57: jne 0x63bcb9 */ if (!fZ) goto L_0063bcb9;
L_0063bc59:; BB(0x0063bc59);
    /* 0063bc59: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0063bc5c: push dword ptr [eax + 0x368] */ { u32 v = R32((u32)(r_eax+0x368u)); r_esp -= 4; W32(r_esp, v); }
    /* 0063bc62: push 0xaab4f0 */ { u32 v = 0xaab4f0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063bc67: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063bc68: call 0x6e46ac */ r_esp -= 4; W32(r_esp, 0x63bc6du); f_006e46ac();
    /* 0063bc6d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063bc70: jmp 0x63bcb9 */ goto L_0063bcb9;
L_0063bc72:; BB(0x0063bc72);
    /* 0063bc72: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0063bc75: push dword ptr [eax + 0x368] */ { u32 v = R32((u32)(r_eax+0x368u)); r_esp -= 4; W32(r_esp, v); }
    /* 0063bc7b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0063bc7c: push 0xaab4f0 */ { u32 v = 0xaab4f0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063bc81: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063bc82: call 0x6e38e0 */ r_esp -= 4; W32(r_esp, 0x63bc87u); f_006e38e0();
    /* 0063bc87: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063bc8a: jmp 0x63bcb9 */ goto L_0063bcb9;
L_0063bc8c:; BB(0x0063bc8c);
    /* 0063bc8c: mov ecx, edx */ r_ecx = r_edx;
    /* 0063bc8e: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 0063bc93: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063bc95: mov word ptr [ecx + 0x344], ax */ W16((u32)(r_ecx+0x344u), (u16)r_eax);
    /* 0063bc9c: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x63bca1u); f_007706b0();
    /* 0063bca1: jmp 0x63bcb9 */ goto L_0063bcb9;
L_0063bca3:; BB(0x0063bca3);
    /* 0063bca3: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0063bca6: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 0063bcab: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063bcad: mov word ptr [ecx + 0x344], ax */ W16((u32)(r_ecx+0x344u), (u16)r_eax);
    /* 0063bcb4: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x63bcb9u); f_007706b0();
L_0063bcb9:; BB(0x0063bcb9);
    /* 0063bcb9: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0063bcbc: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x63bcc1u); f_00770738();
    /* 0063bcc1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0063bcc3: jne 0x63bcd4 */ if (!fZ) goto L_0063bcd4;
L_0063bcc5:; BB(0x0063bcc5);
    /* 0063bcc5: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0063bcc8: mov eax, 3 */ r_eax = 0x3u;
    /* 0063bccd: mov word ptr [edx + 0x330], ax */ W16((u32)(r_edx+0x330u), (u16)r_eax);
L_0063bcd4:; BB(0x0063bcd4);
    /* 0063bcd4: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0063bcd7: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0063bcda: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0063bcdd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063bce0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0063bce7: mov esp, ebp */ r_esp = r_ebp;
    /* 0063bce9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063bcea: ret  */ FN_RET(0x0063b930); r_esp += 4; return;
L_0063bceb:; BB(0x0063bceb);
    /* 0063bceb: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0063bcee: push dword ptr [edx + 0x368] */ { u32 v = R32((u32)(r_edx+0x368u)); r_esp -= 4; W32(r_esp, v); }
    /* 0063bcf4: add esi, 0x300 */ {  u32 a = r_esi; u32 b = 0x300u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0063bcfa: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0063bcfb: push 0xaab4f0 */ { u32 v = 0xaab4f0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063bd00: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063bd01: call 0x6e3408 */ r_esp -= 4; W32(r_esp, 0x63bd06u); f_006e3408();
    /* 0063bd06: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063bd09: jmp 0x63bcb9 */ goto L_0063bcb9;
L_0063bd0b:; BB(0x0063bd0b);
    /* 0063bd0b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0063bd0e: fild dword ptr [ecx + 0x368] */ FPUSH((long double)(i32)R32((u32)(r_ecx+0x368u)));
    /* 0063bd14: fmul dword ptr [0x934144] */ ST(0) = ST(0) * R_F32((u32)(0x934144u));
    /* 0063bd1a: fadd dword ptr [0x934148] */ ST(0) = ST(0) + R_F32((u32)(0x934148u));
    /* 0063bd20: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0063bd22: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0063bd23: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0063bd26: mov dword ptr [ebp - 0x4c], 3 */ W32((u32)(r_ebp+0xffffffb4u), 0x3u);
    /* 0063bd2d: call dword ptr [edx + 0x164] */ { u32 t = R32((u32)(r_edx+0x164u)); r_esp -= 4; W32(r_esp, 0x63bd33u); call_ind(t); }
    /* 0063bd33: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0063bd36: mov edi, dword ptr [esi] */ r_edi = R32((u32)(r_esi));
    /* 0063bd38: fstp dword ptr [ebp - 0x48] */ W_F32((u32)(r_ebp+0xffffffb8u), ST(0)); FPOP();
    /* 0063bd3b: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 0063bd40: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063bd41: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063bd42: mov ecx, esi */ r_ecx = r_esi;
    /* 0063bd44: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063bd46: push dword ptr [ebp - 0x48] */ { u32 v = R32((u32)(r_ebp+0xffffffb8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0063bd49: push dword ptr [ebp - 0x4c] */ { u32 v = R32((u32)(r_ebp+0xffffffb4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0063bd4c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0063bd4d: call dword ptr [edi + 0x60] */ { u32 t = R32((u32)(r_edi+0x60u)); r_esp -= 4; W32(r_esp, 0x63bd50u); call_ind(t); }
    /* 0063bd50: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0063bd52: push 0xb9 */ { u32 v = 0xb9u; r_esp -= 4; W32(r_esp, v); }
    /* 0063bd57: push 0xaab4f0 */ { u32 v = 0xaab4f0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063bd5c: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x63bd61u); f_0050b510();
    /* 0063bd61: push 0xba */ { u32 v = 0xbau; r_esp -= 4; W32(r_esp, v); }
    /* 0063bd66: push 0xaab4f0 */ { u32 v = 0xaab4f0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063bd6b: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x63bd70u); f_0050b510();
    /* 0063bd70: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
    /* 0063bd77: push 0x260 */ { u32 v = 0x260u; r_esp -= 4; W32(r_esp, v); }
    /* 0063bd7c: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x63bd81u); f_005caba4();
    /* 0063bd81: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063bd84: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0063bd87: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063bd89: je 0x63bdcb */ if (fZ) goto L_0063bdcb;
L_0063bd8b:; BB(0x0063bd8b);
    /* 0063bd8b: mov dword ptr [ebp - 0x44], 1 */ W32((u32)(r_ebp+0xffffffbcu), 0x1u);
    /* 0063bd92: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0063bd99: mov edx, ebx */ r_edx = r_ebx;
    /* 0063bd9b: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0063bd9d: mov ecx, eax */ r_ecx = r_eax;
    /* 0063bd9f: push 0x14000000 */ { u32 v = 0x14000000u; r_esp -= 4; W32(r_esp, v); }
    /* 0063bda4: push 0x3fe66666 */ { u32 v = 0x3fe66666u; r_esp -= 4; W32(r_esp, v); }
    /* 0063bda9: push dword ptr [edx + 0x33c] */ { u32 v = R32((u32)(r_edx+0x33cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0063bdaf: push 0xaab4e4 */ { u32 v = 0xaab4e4u; r_esp -= 4; W32(r_esp, v); }
    /* 0063bdb4: push 0xaab4f0 */ { u32 v = 0xaab4f0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063bdb9: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 0063bdbf: call 0x6f3ba4 */ r_esp -= 4; W32(r_esp, 0x63bdc4u); f_006f3ba4();
    /* 0063bdc4: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
L_0063bdcb:; BB(0x0063bdcb);
    /* 0063bdcb: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0063bdd2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0063bdd4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063bdd5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063bdd6: push 0xaab4f0 */ { u32 v = 0xaab4f0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063bddb: push 0x8f */ { u32 v = 0x8fu; r_esp -= 4; W32(r_esp, v); }
    /* 0063bde0: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x63bde5u); f_00814298();
    /* 0063bde5: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063bde8: jmp 0x63bcb9 */ goto L_0063bcb9;
L_0063bded:; BB(0x0063bded);
    /* 0063bded: mov ecx, edx */ r_ecx = r_edx;
    /* 0063bdef: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063bdf1: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x63bdf6u); f_007706b0();
    /* 0063bdf6: jmp 0x63bcb9 */ goto L_0063bcb9;
L_0063bdfb:; BB(0x0063bdfb);
    /* 0063bdfb: fld dword ptr [0x934158] */ FPUSH(R_F32((u32)(0x934158u)));
    /* 0063be01: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0063be04: fadd dword ptr [edx + 0x350] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x350u));
    /* 0063be0a: fcom dword ptr [0x93413c] */ fx_compare(ST(0), R_F32((u32)(0x93413cu))); 
    /* 0063be10: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0063be12: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0063be13: jb 0x63be35 */ if (fC) goto L_0063be35;
L_0063be15:; BB(0x0063be15);
    /* 0063be15: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0063be17: mov ecx, edx */ r_ecx = r_edx;
    /* 0063be19: mov edx, 0x41226666 */ r_edx = 0x41226666u;
    /* 0063be1e: mov eax, 2 */ r_eax = 0x2u;
    /* 0063be23: mov word ptr [ecx + 0x330], ax */ W16((u32)(r_ecx+0x330u), (u16)r_eax);
    /* 0063be2a: mov dword ptr [ecx + 0x350], edx */ W32((u32)(r_ecx+0x350u), r_edx);
    /* 0063be30: jmp 0x63bcd4 */ goto L_0063bcd4;
L_0063be35:; BB(0x0063be35);
    /* 0063be35: mov eax, edx */ r_eax = r_edx;
    /* 0063be37: fstp dword ptr [eax + 0x350] */ W_F32((u32)(r_eax+0x350u), ST(0)); FPOP();
    /* 0063be3d: jmp 0x63bcd4 */ goto L_0063bcd4;
L_0063be42:; BB(0x0063be42);
    /* 0063be42: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0063be45: fld dword ptr [edx + 0x34c] */ FPUSH(R_F32((u32)(r_edx+0x34cu)));
    /* 0063be4b: fcom dword ptr [0x934138] */ fx_compare(ST(0), R_F32((u32)(0x934138u))); 
    /* 0063be51: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0063be53: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0063be54: jae 0x63be69 */ if (!fC) goto L_0063be69;
L_0063be56:; BB(0x0063be56);
    /* 0063be56: fadd dword ptr [0x934158] */ ST(0) = ST(0) + R_F32((u32)(0x934158u));
    /* 0063be5c: mov eax, edx */ r_eax = r_edx;
    /* 0063be5e: fstp dword ptr [eax + 0x34c] */ W_F32((u32)(r_eax+0x34cu), ST(0)); FPOP();
    /* 0063be64: jmp 0x63bcd4 */ goto L_0063bcd4;
L_0063be69:; BB(0x0063be69);
    /* 0063be69: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0063be6b: mov ecx, edx */ r_ecx = r_edx;
    /* 0063be6d: mov edx, 0x40e00000 */ r_edx = 0x40e00000u;
    /* 0063be72: mov eax, 1 */ r_eax = 0x1u;
    /* 0063be77: mov word ptr [ecx + 0x330], ax */ W16((u32)(r_ecx+0x330u), (u16)r_eax);
    /* 0063be7e: mov dword ptr [ecx + 0x34c], edx */ W32((u32)(r_ecx+0x34cu), r_edx);
    /* 0063be84: jmp 0x63bcd4 */ goto L_0063bcd4;
}

void f_0063be8c(void) /* sub_63BE8C */
{
    FN_ENTER(0x0063be8c);
    /* 0063be8c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0063be8d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0063be8f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0063be91: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0063be93: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063be95: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x63be9au); f_007b52ec();
    /* 0063be9a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0063be9c: call 0x77a1f4 */ r_esp -= 4; W32(r_esp, 0x63bea1u); f_0077a1f4();
    /* 0063bea1: mov eax, dword ptr [ebx + 0x36c] */ r_eax = R32((u32)(r_ebx+0x36cu));
    /* 0063bea7: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063beaa: je 0x63bebe */ if (fZ) goto L_0063bebe;
L_0063beac:; BB(0x0063beac);
    /* 0063beac: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 0063beaf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063beb0: call 0x816eec */ r_esp -= 4; W32(r_esp, 0x63beb5u); f_00816eec();
    /* 0063beb5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063beb6: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0063beb9: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0063bebc: jne 0x63bf23 */ if (!fZ) goto L_0063bf23;
L_0063bebe:; BB(0x0063bebe);
    /* 0063bebe: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063bec0: push dword ptr [ebx + 0x33c] */ { u32 v = R32((u32)(r_ebx+0x33cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0063bec6: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0063bec8: call 0x7714cc */ r_esp -= 4; W32(r_esp, 0x63becdu); f_007714cc();
    /* 0063becd: mov word ptr [ebx + 0x344], ax */ W16((u32)(r_ebx+0x344u), (u16)r_eax);
    /* 0063bed4: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 0063bed7: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063bedc: je 0x63bf3c */ if (fZ) goto L_0063bf3c;
L_0063bede:; BB(0x0063bede);
    /* 0063bede: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063bedf: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x63bee4u); f_0068d5a8();
    /* 0063bee4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063bee5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063bee6: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0063bee8: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x63beedu); f_007706b0();
    /* 0063beed: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0063beef: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x63bef4u); f_00770738();
    /* 0063bef4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063bef6: je 0x63bf25 */ if (fZ) goto L_0063bf25;
L_0063bef8:; BB(0x0063bef8);
    /* 0063bef8: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0063befb: lea edx, [ebx + 0x38] */ r_edx = (u32)(r_ebx+0x38u);
    /* 0063befe: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063beff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063bf00: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x63bf05u); f_007a9180();
    /* 0063bf05: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 0063bf08: fld dword ptr [ebx + 0x33c] */ FPUSH(R_F32((u32)(r_ebx+0x33cu)));
    /* 0063bf0e: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0063bf10: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0063bf12: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0063bf14: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0063bf15: jbe 0x63bf23 */ if ((fC||fZ)) goto L_0063bf23;
L_0063bf17:; BB(0x0063bf17);
    /* 0063bf17: mov eax, 2 */ r_eax = 0x2u;
    /* 0063bf1c: mov word ptr [ebx + 0x32e], ax */ W16((u32)(r_ebx+0x32eu), (u16)r_eax);
L_0063bf23:; BB(0x0063bf23);
    /* 0063bf23: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0063bf24: ret  */ FN_RET(0x0063be8c); r_esp += 4; return;
L_0063bf25:; BB(0x0063bf25);
    /* 0063bf25: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 0063bf2a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063bf2c: mov word ptr [ebx + 0x344], ax */ W16((u32)(r_ebx+0x344u), (u16)r_eax);
    /* 0063bf33: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0063bf35: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x63bf3au); f_007706b0();
    /* 0063bf3a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0063bf3b: ret  */ FN_RET(0x0063be8c); r_esp += 4; return;
L_0063bf3c:; BB(0x0063bf3c);
    /* 0063bf3c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063bf3e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0063bf40: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x63bf45u); f_007706b0();
    /* 0063bf45: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0063bf46: ret  */ FN_RET(0x0063be8c); r_esp += 4; return;
}

void f_0063bf48(void) /* sub_63BF48 */
{
    FN_ENTER(0x0063bf48);
    /* 0063bf48: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0063bf4b: fild dword ptr [0xa9cd68] */ FPUSH((long double)(i32)R32((u32)(0xa9cd68u)));
    /* 0063bf51: mov edx, dword ptr [0xa9cd68] */ r_edx = R32((u32)(0xa9cd68u));
    /* 0063bf57: fld dword ptr [0x934134] */ FPUSH(R_F32((u32)(0x934134u)));
    /* 0063bf5d: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0063bf5f: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0063bf61: fadd dword ptr [ecx + 0x70] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x70u));
    /* 0063bf64: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0063bf67: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0063bf6b: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0063bf70: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0063bf74: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0063bf78: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 0063bf7c: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0063bf7f: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0063bf83: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0063bf85: jl 0x63bfc6 */ if ((fS!=fO)) goto L_0063bfc6;
L_0063bf87:; BB(0x0063bf87);
    /* 0063bf87: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063bf8a: je 0x63bfa9 */ if (fZ) goto L_0063bfa9;
L_0063bf8c:; BB(0x0063bf8c);
    /* 0063bf8c: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0063bf8f: jg 0x63bf9b */ if ((!fZ&&fS==fO)) goto L_0063bf9b;
L_0063bf91:; BB(0x0063bf91);
    /* 0063bf91: mov dword ptr [ecx + 0x368], eax */ W32((u32)(r_ecx+0x368u), r_eax);
    /* 0063bf97: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0063bf9a: ret  */ FN_RET(0x0063bf48); r_esp += 4; return;
L_0063bf9b:; BB(0x0063bf9b);
    /* 0063bf9b: mov dword ptr [ecx + 0x368], 0xe */ W32((u32)(r_ecx+0x368u), 0xeu);
    /* 0063bfa5: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0063bfa8: ret  */ FN_RET(0x0063bf48); r_esp += 4; return;
L_0063bfa9:; BB(0x0063bfa9);
    /* 0063bfa9: cmp eax, 0x1d */ {  u32 a = r_eax; u32 b = 0x1du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0063bfac: jg 0x63bfb8 */ if ((!fZ&&fS==fO)) goto L_0063bfb8;
L_0063bfae:; BB(0x0063bfae);
    /* 0063bfae: mov dword ptr [ecx + 0x368], eax */ W32((u32)(r_ecx+0x368u), r_eax);
    /* 0063bfb4: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0063bfb7: ret  */ FN_RET(0x0063bf48); r_esp += 4; return;
L_0063bfb8:; BB(0x0063bfb8);
    /* 0063bfb8: mov dword ptr [ecx + 0x368], 0x1d */ W32((u32)(r_ecx+0x368u), 0x1du);
    /* 0063bfc2: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0063bfc5: ret  */ FN_RET(0x0063bf48); r_esp += 4; return;
L_0063bfc6:; BB(0x0063bfc6);
    /* 0063bfc6: mov dword ptr [ecx + 0x368], 0 */ W32((u32)(r_ecx+0x368u), 0x0u);
    /* 0063bfd0: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0063bfd3: ret  */ FN_RET(0x0063bf48); r_esp += 4; return;
}

void f_0063bfd4(void)
{
    FN_ENTER(0x0063bfd4);
    /* 0063bfd4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063bfd5: mov ebp, esp */ r_ebp = r_esp;
    /* 0063bfd7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0063bfd9: push 0x8e4c18 */ { u32 v = 0x8e4c18u; r_esp -= 4; W32(r_esp, v); }
    /* 0063bfde: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0063bfe4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063bfe5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0063bfec: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0063bfef: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0063bff2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0063bff5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0063bff8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0063bffb: push 0x364 */ { u32 v = 0x364u; r_esp -= 4; W32(r_esp, v); }
    /* 0063c000: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0063c007: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x63c00cu); f_005caba4();
    /* 0063c00c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063c00d: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0063c010: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063c012: je 0x63c04b */ if (fZ) goto L_0063c04b;
L_0063c014:; BB(0x0063c014);
    /* 0063c014: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0063c01b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0063c022: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0063c025: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 0063c02b: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0063c02e: call 0x63c638 */ r_esp -= 4; W32(r_esp, 0x63c033u); f_0063c638();
    /* 0063c033: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0063c036: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0063c03d:; BB(0x0063c03d);
    /* 0063c03d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063c040: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0063c047: mov esp, ebp */ r_esp = r_ebp;
    /* 0063c049: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063c04a: ret  */ FN_RET(0x0063bfd4); r_esp += 4; return;
L_0063c04b:; BB(0x0063c04b);
    /* 0063c04b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0063c04d: jmp 0x63c03d */ goto L_0063c03d;
}

