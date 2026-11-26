#include "protos.h"

void f_0052b1b8(void) /* sub_52B1B8 */
{
    FN_ENTER(0x0052b1b8);
    /* 0052b1b8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0052b1b9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0052b1ba: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0052b1bb: mov edi, ecx */ r_edi = r_ecx;
    /* 0052b1bd: mov ecx, edi */ r_ecx = r_edi;
    /* 0052b1bf: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x52b1c4u); f_007aa094();
    /* 0052b1c4: mov ecx, edi */ r_ecx = r_edi;
    /* 0052b1c6: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x52b1cbu); f_00770738();
    /* 0052b1cb: mov esi, eax */ r_esi = r_eax;
    /* 0052b1cd: movsx edx, word ptr [edi + 0x330] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x330u));
    /* 0052b1d4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052b1d6: jne 0x52b1ee */ if (!fZ) goto L_0052b1ee;
L_0052b1d8:; BB(0x0052b1d8);
    /* 0052b1d8: mov edx, 1 */ r_edx = 0x1u;
    /* 0052b1dd: mov word ptr [edi + 0x330], dx */ W16((u32)(r_edi+0x330u), (u16)r_edx);
    /* 0052b1e4: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 0052b1e6: mov ecx, edi */ r_ecx = r_edi;
    /* 0052b1e8: call dword ptr [edx + 0x198] */ { u32 t = R32((u32)(r_edx+0x198u)); r_esp -= 4; W32(r_esp, 0x52b1eeu); call_ind(t); }
L_0052b1ee:; BB(0x0052b1ee);
    /* 0052b1ee: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052b1f0: je 0x52b26e */ if (fZ) goto L_0052b26e;
L_0052b1f2:; BB(0x0052b1f2);
    /* 0052b1f2: push dword ptr [esi + 0x308] */ { u32 v = R32((u32)(r_esi+0x308u)); r_esp -= 4; W32(r_esp, v); }
    /* 0052b1f8: push dword ptr [esi + 0x304] */ { u32 v = R32((u32)(r_esi+0x304u)); r_esp -= 4; W32(r_esp, v); }
    /* 0052b1fe: mov ecx, edi */ r_ecx = r_edi;
    /* 0052b200: push dword ptr [esi + 0x300] */ { u32 v = R32((u32)(r_esi+0x300u)); r_esp -= 4; W32(r_esp, v); }
    /* 0052b206: push dword ptr [edi + 0x3a0] */ { u32 v = R32((u32)(r_edi+0x3a0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0052b20c: call 0x7723e0 */ r_esp -= 4; W32(r_esp, 0x52b211u); f_007723e0();
    /* 0052b211: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0052b214: mov edx, dword ptr [edi + 0x358] */ r_edx = R32((u32)(r_edi+0x358u));
    /* 0052b21a: lea eax, [edi + 0x30c] */ r_eax = (u32)(r_edi+0x30cu);
    /* 0052b220: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052b221: mov ecx, edi */ r_ecx = r_edi;
    /* 0052b223: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0052b226: call 0x771858 */ r_esp -= 4; W32(r_esp, 0x52b22bu); f_00771858();
    /* 0052b22b: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0052b22e: fld dword ptr [edi + 0x3a0] */ FPUSH(R_F32((u32)(r_edi+0x3a0u)));
    /* 0052b234: mov edx, dword ptr [edi + 0xa4] */ r_edx = R32((u32)(r_edi+0xa4u));
    /* 0052b23a: fadd dword ptr [edx + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0xcu));
    /* 0052b23d: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0052b23f: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0052b241: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0052b243: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0052b244: jbe 0x52b26e */ if ((fC||fZ)) goto L_0052b26e;
L_0052b246:; BB(0x0052b246);
    /* 0052b246: mov edx, dword ptr [edi + 0x30] */ r_edx = R32((u32)(r_edi+0x30u));
    /* 0052b249: mov eax, 3 */ r_eax = 0x3u;
    /* 0052b24e: mov word ptr [edi + 0x32e], ax */ W16((u32)(r_edi+0x32eu), (u16)r_eax);
    /* 0052b255: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0052b257: mov word ptr [edi + 0x330], si */ W16((u32)(r_edi+0x330u), (u16)r_esi);
    /* 0052b25e: and edx, 0xffffefff */ {  u32 a = r_edx; u32 b = 0xffffefffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0052b264: mov dword ptr [edi + 0x30], edx */ W32((u32)(r_edi+0x30u), r_edx);
    /* 0052b267: mov word ptr [edi + 0x37c], si */ W16((u32)(r_edi+0x37cu), (u16)r_esi);
L_0052b26e:; BB(0x0052b26e);
    /* 0052b26e: mov ecx, edi */ r_ecx = r_edi;
    /* 0052b270: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x52b275u); f_007b6880();
    /* 0052b275: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052b277: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0052b279: add edi, 0x38 */ {  u32 a = r_edi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0052b27c: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 0052b281: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0052b282: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x52b287u); f_00805608();
    /* 0052b287: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0052b28a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0052b28b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0052b28c: ret  */ FN_RET(0x0052b1b8); r_esp += 4; return;
}

void f_0052b290(void) /* sub_52B290 */
{
    FN_ENTER(0x0052b290);
    /* 0052b290: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0052b291: mov edi, ecx */ r_edi = r_ecx;
    /* 0052b293: movzx eax, word ptr [edi + 0x340] */ r_eax = (u32)R16((u32)(r_edi+0x340u));
    /* 0052b29a: cmp eax, 0x1000 */ {  u32 a = r_eax; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052b29f: jl 0x52b2c4 */ if ((fS!=fO)) goto L_0052b2c4;
L_0052b2a1:; BB(0x0052b2a1);
    /* 0052b2a1: cmp eax, 0x4000 */ {  u32 a = r_eax; u32 b = 0x4000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052b2a6: jge 0x52b2b9 */ if ((fS==fO)) goto L_0052b2b9;
L_0052b2a8:; BB(0x0052b2a8);
    /* 0052b2a8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052b2a9: call 0x786b3c */ r_esp -= 4; W32(r_esp, 0x52b2aeu); f_00786b3c();
    /* 0052b2ae: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0052b2af: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052b2b0: mov ecx, edi */ r_ecx = r_edi;
    /* 0052b2b2: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x52b2b7u); f_007706b0();
    /* 0052b2b7: jmp 0x52b2f0 */ goto L_0052b2f0;
L_0052b2b9:; BB(0x0052b2b9);
    /* 0052b2b9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052b2bb: mov ecx, edi */ r_ecx = r_edi;
    /* 0052b2bd: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x52b2c2u); f_007706b0();
    /* 0052b2c2: jmp 0x52b2f0 */ goto L_0052b2f0;
L_0052b2c4:; BB(0x0052b2c4);
    /* 0052b2c4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052b2c5: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x52b2cau); f_0068d5a8();
    /* 0052b2ca: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0052b2cb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052b2cd: je 0x52b2e7 */ if (fZ) goto L_0052b2e7;
L_0052b2cf:; BB(0x0052b2cf);
    /* 0052b2cf: mov edx, dword ptr [eax + 0x3f0] */ r_edx = R32((u32)(r_eax+0x3f0u));
    /* 0052b2d5: cmp edx, dword ptr [0xaafca0] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaafca0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052b2db: jne 0x52b2e7 */ if (!fZ) goto L_0052b2e7;
L_0052b2dd:; BB(0x0052b2dd);
    /* 0052b2dd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052b2de: mov ecx, edi */ r_ecx = r_edi;
    /* 0052b2e0: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x52b2e5u); f_007706b0();
    /* 0052b2e5: jmp 0x52b2f0 */ goto L_0052b2f0;
L_0052b2e7:; BB(0x0052b2e7);
    /* 0052b2e7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052b2e9: mov ecx, edi */ r_ecx = r_edi;
    /* 0052b2eb: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x52b2f0u); f_007706b0();
L_0052b2f0:; BB(0x0052b2f0);
    /* 0052b2f0: mov ecx, edi */ r_ecx = r_edi;
    /* 0052b2f2: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x52b2f7u); f_007aa094();
    /* 0052b2f7: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0052b2f9: mov ecx, edi */ r_ecx = r_edi;
    /* 0052b2fb: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x52b301u); call_ind(t); }
    /* 0052b301: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052b303: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052b305: mov ecx, edi */ r_ecx = r_edi;
    /* 0052b307: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x52b30cu); f_00772b44();
    /* 0052b30c: mov eax, dword ptr [edi + 0x358] */ r_eax = R32((u32)(r_edi+0x358u));
    /* 0052b312: push dword ptr [eax + 8] */ { u32 v = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0052b315: mov ecx, edi */ r_ecx = r_edi;
    /* 0052b317: call 0x772358 */ r_esp -= 4; W32(r_esp, 0x52b31cu); f_00772358();
    /* 0052b31c: mov ecx, edi */ r_ecx = r_edi;
    /* 0052b31e: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x52b323u); f_007b6880();
    /* 0052b323: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052b325: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0052b327: add edi, 0x38 */ {  u32 a = r_edi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0052b32a: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 0052b32f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0052b330: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x52b335u); f_00805608();
    /* 0052b335: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0052b338: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0052b339: ret  */ FN_RET(0x0052b290); r_esp += 4; return;
}

void f_0052b33c(void) /* sub_52B33C */
{
    FN_ENTER(0x0052b33c);
    /* 0052b33c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0052b33d: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0052b340: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0052b342: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0052b344: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x52b349u); f_007aa094();
    /* 0052b349: mov eax, dword ptr [ebx + 0x300] */ r_eax = R32((u32)(r_ebx+0x300u));
    /* 0052b34f: mov edx, dword ptr [ebx + 0x304] */ r_edx = R32((u32)(r_ebx+0x304u));
    /* 0052b355: mov dword ptr [0xaab4f4], 0 */ W32((u32)(0xaab4f4u), 0x0u);
    /* 0052b35f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0052b361: mov dword ptr [0xaab4f0], 0 */ W32((u32)(0xaab4f0u), 0x0u);
    /* 0052b36b: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0052b36e: mov eax, dword ptr [ebx + 0x308] */ r_eax = R32((u32)(r_ebx+0x308u));
    /* 0052b374: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0052b378: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0052b37c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052b37e: call 0x7b5264 */ r_esp -= 4; W32(r_esp, 0x52b383u); f_007b5264();
    /* 0052b383: fstp dword ptr [0xaab4f8] */ W_F32((u32)(0xaab4f8u), ST(0)); FPOP();
    /* 0052b389: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 0052b38e: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x52b393u); f_0082d990();
    /* 0052b393: mov edx, dword ptr [ebx + 0x60] */ r_edx = R32((u32)(r_ebx+0x60u));
    /* 0052b396: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0052b398: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0052b39a: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x52b39fu); f_0082d8bc();
    /* 0052b39f: push 0xaab4f0 */ { u32 v = 0xaab4f0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052b3a4: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0052b3a6: mov edx, 0xaab4f0 */ r_edx = 0xaab4f0u;
    /* 0052b3ab: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x52b3b0u); f_0082eab8();
    /* 0052b3b0: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x52b3b5u); f_0082da80();
    /* 0052b3b5: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0052b3b8: mov edx, 0xaab4f0 */ r_edx = 0xaab4f0u;
    /* 0052b3bd: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x52b3c2u); f_0082ebac();
    /* 0052b3c2: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0052b3c5: fadd dword ptr [ebx + 0x30c] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x30cu));
    /* 0052b3cb: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 0052b3cf: fadd dword ptr [ebx + 0x314] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x314u));
    /* 0052b3d5: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0052b3d7: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0052b3da: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0052b3de: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0052b3e1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052b3e2: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0052b3e4: call 0x771e14 */ r_esp -= 4; W32(r_esp, 0x52b3e9u); f_00771e14();
    /* 0052b3e9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052b3eb: je 0x52b403 */ if (fZ) goto L_0052b403;
L_0052b3ed:; BB(0x0052b3ed);
    /* 0052b3ed: mov dword ptr [ebx + 0x314], 0 */ W32((u32)(r_ebx+0x314u), 0x0u);
    /* 0052b3f7: mov dword ptr [ebx + 0x30c], 0 */ W32((u32)(r_ebx+0x30cu), 0x0u);
    /* 0052b401: jmp 0x52b42c */ goto L_0052b42c;
L_0052b403:; BB(0x0052b403);
    /* 0052b403: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0052b405: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0052b407: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x52b40au); call_ind(t); }
    /* 0052b40a: fld dword ptr [0x922318] */ FPUSH(R_F32((u32)(0x922318u)));
    /* 0052b410: fld dword ptr [ebx + 0x30c] */ FPUSH(R_F32((u32)(r_ebx+0x30cu)));
    /* 0052b416: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0052b418: fld dword ptr [ebx + 0x314] */ FPUSH(R_F32((u32)(r_ebx+0x314u)));
    /* 0052b41e: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0052b420: fstp dword ptr [ebx + 0x30c] */ W_F32((u32)(r_ebx+0x30cu), ST(0)); FPOP();
    /* 0052b426: fstp dword ptr [ebx + 0x314] */ W_F32((u32)(r_ebx+0x314u), ST(0)); FPOP();
L_0052b42c:; BB(0x0052b42c);
    /* 0052b42c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0052b42e: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x52b433u); f_007b6880();
    /* 0052b433: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052b435: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0052b437: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x52b43cu); f_007aaa30();
    /* 0052b43c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052b43e: je 0x52b44a */ if (fZ) goto L_0052b44a;
L_0052b440:; BB(0x0052b440);
    /* 0052b440: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0052b442: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0052b444: call dword ptr [eax + 0x190] */ { u32 t = R32((u32)(r_eax+0x190u)); r_esp -= 4; W32(r_esp, 0x52b44au); call_ind(t); }
L_0052b44a:; BB(0x0052b44a);
    /* 0052b44a: mov eax, dword ptr [ebx + 0xb4] */ r_eax = R32((u32)(r_ebx+0xb4u));
    /* 0052b450: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052b453: je 0x52b4ff */ if (fZ) goto L_0052b4ff;
L_0052b459:; BB(0x0052b459);
    /* 0052b459: push 0x4000000 */ { u32 v = 0x4000000u; r_esp -= 4; W32(r_esp, v); }
    /* 0052b45e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052b460: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 0052b463: and eax, 0xfffff9ff */ {  u32 a = r_eax; u32 b = 0xfffff9ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0052b468: mov dword ptr [ebx + 0x30], eax */ W32((u32)(r_ebx+0x30u), r_eax);
    /* 0052b46b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0052b46d: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x52b472u); f_007b52ec();
    /* 0052b472: mov eax, dword ptr [ebx + 0x33c] */ r_eax = R32((u32)(r_ebx+0x33cu));
    /* 0052b478: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052b47a: jne 0x52b4f1 */ if (!fZ) goto L_0052b4f1;
L_0052b47c:; BB(0x0052b47c);
    /* 0052b47c: movsx edx, word ptr [ebx + 0x334] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x334u));
    /* 0052b483: fld dword ptr [ebx + 0x35c] */ FPUSH(R_F32((u32)(r_ebx+0x35cu)));
    /* 0052b489: movsx eax, word ptr [ebx + 0x2bc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x2bcu));
    /* 0052b490: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 0052b494: fild dword ptr [esp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_esp+0xcu)));
    /* 0052b498: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0052b49c: fild dword ptr [esp + 0x14] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x14u)));
    /* 0052b4a0: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0052b4a2: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0052b4a4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0052b4a6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0052b4a7: ja 0x52b4ad */ if ((!fC&&!fZ)) goto L_0052b4ad;
L_0052b4a9:; BB(0x0052b4a9);
    /* 0052b4a9: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0052b4ab: jmp 0x52b4f8 */ goto L_0052b4f8;
L_0052b4ad:; BB(0x0052b4ad);
    /* 0052b4ad: fld dword ptr [0x922314] */ FPUSH(R_F32((u32)(0x922314u)));
    /* 0052b4b3: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0052b4b5: fmul dword ptr [0x922310] */ ST(0) = ST(0) * R_F32((u32)(0x922310u));
    /* 0052b4bb: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 0052b4be: and eax, 0xffffefff */ {  u32 a = r_eax; u32 b = 0xffffefffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0052b4c3: mov dword ptr [ebx + 0x30], eax */ W32((u32)(r_ebx+0x30u), r_eax);
    /* 0052b4c6: fnstcw word ptr [esp + 0x1c] */ W16((u32)(r_esp+0x1cu), fcw);
    /* 0052b4ca: movzx eax, word ptr [esp + 0x1c] */ r_eax = (u32)R16((u32)(r_esp+0x1cu));
    /* 0052b4cf: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0052b4d4: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 0052b4d8: fldcw word ptr [esp + 0x24] */ fcw = R16((u32)(r_esp+0x24u));
    /* 0052b4dc: fistp dword ptr [esp + 0x2c] */ W32((u32)(r_esp+0x2cu), (u32)fx_int32(ST(0))); FPOP();
    /* 0052b4e0: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 0052b4e4: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 0052b4e8: mov word ptr [ebx + 0x37c], ax */ W16((u32)(r_ebx+0x37cu), (u16)r_eax);
    /* 0052b4ef: jmp 0x52b4f8 */ goto L_0052b4f8;
L_0052b4f1:; BB(0x0052b4f1);
    /* 0052b4f1: movsx edx, word ptr [ebx + 0x334] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x334u));
L_0052b4f8:; BB(0x0052b4f8);
    /* 0052b4f8: mov word ptr [ebx + 0x346], dx */ W16((u32)(r_ebx+0x346u), (u16)r_edx);
L_0052b4ff:; BB(0x0052b4ff);
    /* 0052b4ff: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052b501: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0052b503: add ebx, 0x38 */ {  u32 a = r_ebx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0052b506: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 0052b50b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0052b50c: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x52b511u); f_00805608();
    /* 0052b511: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0052b514: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0052b515: ret  */ FN_RET(0x0052b33c); r_esp += 4; return;
}

void f_0052b518(void) /* sub_52B518 */
{
    FN_ENTER(0x0052b518);
    /* 0052b518: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0052b519: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0052b51b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0052b51d: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x52b522u); f_007aa094();
    /* 0052b522: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052b524: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0052b526: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x52b52bu); f_007aaa30();
    /* 0052b52b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052b52d: je 0x52b53a */ if (fZ) goto L_0052b53a;
L_0052b52f:; BB(0x0052b52f);
    /* 0052b52f: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0052b532: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0052b534: call dword ptr [eax + 0x194] */ { u32 t = R32((u32)(r_eax+0x194u)); r_esp -= 4; W32(r_esp, 0x52b53au); call_ind(t); }
L_0052b53a:; BB(0x0052b53a);
    /* 0052b53a: push 0x41800000 */ { u32 v = 0x41800000u; r_esp -= 4; W32(r_esp, v); }
    /* 0052b53f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0052b541: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x52b546u); f_007aaa30();
    /* 0052b546: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052b548: je 0x52b566 */ if (fZ) goto L_0052b566;
L_0052b54a:; BB(0x0052b54a);
    /* 0052b54a: push 0xf3 */ { u32 v = 0xf3u; r_esp -= 4; W32(r_esp, v); }
    /* 0052b54f: lea eax, [ebp + 0x38] */ r_eax = (u32)(r_ebp+0x38u);
    /* 0052b552: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052b553: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x52b558u); f_0050b510();
    /* 0052b558: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052b55b: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0052b55e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0052b560: call dword ptr [eax + 0x184] */ { u32 t = R32((u32)(r_eax+0x184u)); r_esp -= 4; W32(r_esp, 0x52b566u); call_ind(t); }
L_0052b566:; BB(0x0052b566);
    /* 0052b566: fld dword ptr [ebp + 0xc8] */ FPUSH(R_F32((u32)(r_ebp+0xc8u)));
    /* 0052b56c: fmul dword ptr [0x922304] */ ST(0) = ST(0) * R_F32((u32)(0x922304u));
    /* 0052b572: fmul dword ptr [0x922300] */ ST(0) = ST(0) * R_F32((u32)(0x922300u));
    /* 0052b578: fcomp dword ptr [ebp + 0xc0] */ fx_compare(ST(0), R_F32((u32)(r_ebp+0xc0u))); FPOP();
    /* 0052b57e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0052b580: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0052b581: jbe 0x52b5af */ if ((fC||fZ)) goto L_0052b5af;
L_0052b583:; BB(0x0052b583);
    /* 0052b583: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0052b586: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0052b588: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x52b58bu); call_ind(t); }
    /* 0052b58b: fld dword ptr [0x922300] */ FPUSH(R_F32((u32)(0x922300u)));
    /* 0052b591: fld dword ptr [ebp + 0x30c] */ FPUSH(R_F32((u32)(r_ebp+0x30cu)));
    /* 0052b597: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0052b599: fld dword ptr [ebp + 0x314] */ FPUSH(R_F32((u32)(r_ebp+0x314u)));
    /* 0052b59f: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0052b5a1: fstp dword ptr [ebp + 0x30c] */ W_F32((u32)(r_ebp+0x30cu), ST(0)); FPOP();
    /* 0052b5a7: fstp dword ptr [ebp + 0x314] */ W_F32((u32)(r_ebp+0x314u), ST(0)); FPOP();
    /* 0052b5ad: jmp 0x52b5c4 */ goto L_0052b5c4;
L_0052b5af:; BB(0x0052b5af);
    /* 0052b5af: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 0052b5b2: test eax, 0x800000 */ {  u32 a = r_eax; u32 b = 0x800000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fO = 0; }
    /* 0052b5b7: jne 0x52b5c4 */ if (!fZ) goto L_0052b5c4;
L_0052b5b9:; BB(0x0052b5b9);
    /* 0052b5b9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052b5bb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052b5bd: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0052b5bf: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x52b5c4u); f_00772b44();
L_0052b5c4:; BB(0x0052b5c4);
    /* 0052b5c4: fld dword ptr [ebp + 0x388] */ FPUSH(R_F32((u32)(r_ebp+0x388u)));
    /* 0052b5ca: fsub dword ptr [ebp + 0x38c] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0x38cu));
    /* 0052b5d0: fcom dword ptr [ebp + 0x390] */ fx_compare(ST(0), R_F32((u32)(r_ebp+0x390u))); 
    /* 0052b5d6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0052b5d8: fstp dword ptr [ebp + 0x388] */ W_F32((u32)(r_ebp+0x388u), ST(0)); FPOP();
    /* 0052b5de: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0052b5df: ja 0x52b5ec */ if ((!fC&&!fZ)) goto L_0052b5ec;
L_0052b5e1:; BB(0x0052b5e1);
    /* 0052b5e1: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0052b5e4: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0052b5e6: call dword ptr [eax + 0x178] */ { u32 t = R32((u32)(r_eax+0x178u)); r_esp -= 4; W32(r_esp, 0x52b5ecu); call_ind(t); }
L_0052b5ec:; BB(0x0052b5ec);
    /* 0052b5ec: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0052b5ed: ret  */ FN_RET(0x0052b518); r_esp += 4; return;
}

void f_0052b5f0(void) /* sub_52B5F0 */
{
    FN_ENTER(0x0052b5f0);
    /* 0052b5f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0052b5f1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0052b5f2: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0052b5f4: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0052b5f6: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x52b5fbu); f_00770738();
    /* 0052b5fb: mov ebx, eax */ r_ebx = r_eax;
    /* 0052b5fd: movsx edx, word ptr [ebp + 0x330] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x330u));
    /* 0052b604: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052b606: je 0x52b635 */ if (fZ) goto L_0052b635;
L_0052b608:; BB(0x0052b608);
    /* 0052b608: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052b60b: je 0x52b641 */ if (fZ) goto L_0052b641;
L_0052b60d:; BB(0x0052b60d);
    /* 0052b60d: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0052b610: jne 0x52b6c4 */ if (!fZ) goto L_0052b6c4;
L_0052b616:; BB(0x0052b616);
    /* 0052b616: movsx edx, word ptr [ebp + 0x344] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x344u));
    /* 0052b61d: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0052b620: movsx eax, dx */ r_eax = (u32)(i32)(i16)(u16)r_edx;
    /* 0052b623: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0052b625: jl 0x52b6c7 */ if ((fS!=fO)) goto L_0052b6c7;
L_0052b62b:; BB(0x0052b62b);
    /* 0052b62b: mov word ptr [ebp + 0x344], dx */ W16((u32)(r_ebp+0x344u), (u16)r_edx);
    /* 0052b632: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0052b633: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0052b634: ret  */ FN_RET(0x0052b5f0); r_esp += 4; return;
L_0052b635:; BB(0x0052b635);
    /* 0052b635: mov edx, 1 */ r_edx = 0x1u;
    /* 0052b63a: mov word ptr [ebp + 0x330], dx */ W16((u32)(r_ebp+0x330u), (u16)r_edx);
L_0052b641:; BB(0x0052b641);
    /* 0052b641: push 0x40e00000 */ { u32 v = 0x40e00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0052b646: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0052b648: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x52b64du); f_007aaa30();
    /* 0052b64d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052b64f: je 0x52b68d */ if (fZ) goto L_0052b68d;
L_0052b651:; BB(0x0052b651);
    /* 0052b651: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052b653: je 0x52b682 */ if (fZ) goto L_0052b682;
L_0052b655:; BB(0x0052b655);
    /* 0052b655: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 0052b65a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0052b65b: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0052b65d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0052b65f: call dword ptr [edx + 0x50] */ { u32 t = R32((u32)(r_edx+0x50u)); r_esp -= 4; W32(r_esp, 0x52b662u); call_ind(t); }
    /* 0052b662: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052b664: je 0x52b682 */ if (fZ) goto L_0052b682;
L_0052b666:; BB(0x0052b666);
    /* 0052b666: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 0052b66b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0052b66c: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0052b66e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0052b670: call dword ptr [edx + 0x5c] */ { u32 t = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, 0x52b673u); call_ind(t); }
    /* 0052b673: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0052b675: push 0x40400000 */ { u32 v = 0x40400000u; r_esp -= 4; W32(r_esp, v); }
    /* 0052b67a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0052b67b: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0052b67d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0052b67f: call dword ptr [edx + 0x68] */ { u32 t = R32((u32)(r_edx+0x68u)); r_esp -= 4; W32(r_esp, 0x52b682u); call_ind(t); }
L_0052b682:; BB(0x0052b682);
    /* 0052b682: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0052b685: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0052b687: call dword ptr [eax + 0x18c] */ { u32 t = R32((u32)(r_eax+0x18cu)); r_esp -= 4; W32(r_esp, 0x52b68du); call_ind(t); }
L_0052b68d:; BB(0x0052b68d);
    /* 0052b68d: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0052b690: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0052b692: call dword ptr [eax + 0x180] */ { u32 t = R32((u32)(r_eax+0x180u)); r_esp -= 4; W32(r_esp, 0x52b698u); call_ind(t); }
    /* 0052b698: mov eax, dword ptr [ebp + 0xb4] */ r_eax = R32((u32)(r_ebp+0xb4u));
    /* 0052b69e: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0052b6a1: je 0x52b6c4 */ if (fZ) goto L_0052b6c4;
L_0052b6a3:; BB(0x0052b6a3);
    /* 0052b6a3: mov eax, 2 */ r_eax = 0x2u;
    /* 0052b6a8: mov word ptr [ebp + 0x330], ax */ W16((u32)(r_ebp+0x330u), (u16)r_eax);
    /* 0052b6af: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0052b6b1: mov word ptr [ebp + 0xb8], dx */ W16((u32)(r_ebp+0xb8u), (u16)r_edx);
    /* 0052b6b8: mov ebx, 0xf */ r_ebx = 0xfu;
    /* 0052b6bd: mov word ptr [ebp + 0x344], bx */ W16((u32)(r_ebp+0x344u), (u16)r_ebx);
L_0052b6c4:; BB(0x0052b6c4);
    /* 0052b6c4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0052b6c5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0052b6c6: ret  */ FN_RET(0x0052b5f0); r_esp += 4; return;
L_0052b6c7:; BB(0x0052b6c7);
    /* 0052b6c7: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 0052b6ca: mov ebx, dword ptr [ebp] */ r_ebx = R32((u32)(r_ebp));
    /* 0052b6cd: and eax, 0xffdfffff */ {  u32 a = r_eax; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0052b6d2: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 0052b6d5: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0052b6d7: mov word ptr [ebp + 0x344], dx */ W16((u32)(r_ebp+0x344u), (u16)r_edx);
    /* 0052b6de: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0052b6e0: call dword ptr [ebx + 0x19c] */ { u32 t = R32((u32)(r_ebx+0x19cu)); r_esp -= 4; W32(r_esp, 0x52b6e6u); call_ind(t); }
    /* 0052b6e6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0052b6e7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0052b6e8: ret  */ FN_RET(0x0052b5f0); r_esp += 4; return;
}

void f_0052b6ec(void) /* sub_52B6EC */
{
    FN_ENTER(0x0052b6ec);
    /* 0052b6ec: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0052b6ed: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0052b6ef: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0052b6f3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0052b6f5: call 0x7865e8 */ r_esp -= 4; W32(r_esp, 0x52b6fau); f_007865e8();
    /* 0052b6fa: mov dword ptr [ebx], 0xb012e0 */ W32((u32)(r_ebx), 0xb012e0u);
    /* 0052b700: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0052b702: mov word ptr [ebx + 0x32e], dx */ W16((u32)(r_ebx+0x32eu), (u16)r_edx);
    /* 0052b709: mov word ptr [ebx + 0x330], dx */ W16((u32)(r_ebx+0x330u), (u16)r_edx);
    /* 0052b710: mov dword ptr [ebx + 0x388], 0 */ W32((u32)(r_ebx+0x388u), 0x0u);
    /* 0052b71a: mov word ptr [ebx + 0x37c], dx */ W16((u32)(r_ebx+0x37cu), (u16)r_edx);
    /* 0052b721: mov word ptr [ebx + 0x37e], dx */ W16((u32)(r_ebx+0x37eu), (u16)r_edx);
    /* 0052b728: mov dword ptr [ebx + 0x380], edx */ W32((u32)(r_ebx+0x380u), r_edx);
    /* 0052b72e: mov dword ptr [ebx + 0x38c], 0x3dcccccd */ W32((u32)(r_ebx+0x38cu), 0x3dcccccdu);
    /* 0052b738: mov dword ptr [ebx + 0x384], edx */ W32((u32)(r_ebx+0x384u), r_edx);
    /* 0052b73e: mov dword ptr [ebx + 0x394], edx */ W32((u32)(r_ebx+0x394u), r_edx);
    /* 0052b744: mov dword ptr [ebx + 0x398], edx */ W32((u32)(r_ebx+0x398u), r_edx);
    /* 0052b74a: mov dword ptr [ebx + 0x390], 0xc1a00000 */ W32((u32)(r_ebx+0x390u), 0xc1a00000u);
    /* 0052b754: mov eax, ebx */ r_eax = r_ebx;
    /* 0052b756: mov dword ptr [ebx + 0x3a0], 0x3f4ccccd */ W32((u32)(r_ebx+0x3a0u), 0x3f4ccccdu);
    /* 0052b760: mov dword ptr [ebx + 0x3a4], 0x3ecccccd */ W32((u32)(r_ebx+0x3a4u), 0x3ecccccdu);
    /* 0052b76a: mov dword ptr [ebx + 0x39c], 0x3f4ccccd */ W32((u32)(r_ebx+0x39cu), 0x3f4ccccdu);
    /* 0052b774: mov dword ptr [ebx + 0x3a8], 0x3f4ccccd */ W32((u32)(r_ebx+0x3a8u), 0x3f4ccccdu);
    /* 0052b77e: mov dword ptr [ebx + 0x3ac], 0x3ecccccd */ W32((u32)(r_ebx+0x3acu), 0x3ecccccdu);
    /* 0052b788: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0052b789: ret 4 */ FN_RET(0x0052b6ec); r_esp += 8; return;
}

void f_0052b78c(void) /* sub_52B78C */
{
    FN_ENTER(0x0052b78c);
    /* 0052b78c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0052b78d: mov esi, ecx */ r_esi = r_ecx;
    /* 0052b78f: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x52b794u); f_004f7c84();
    /* 0052b794: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052b797: je 0x52b879 */ if (fZ) goto L_0052b879;
L_0052b79d:; BB(0x0052b79d);
    /* 0052b79d: movsx eax, word ptr [esi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x32eu));
    /* 0052b7a4: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0052b7a7: ja 0x52b82e */ if ((!fC&&!fZ)) goto L_0052b82e;
L_0052b7ad:; BB(0x0052b7ad);
    /* 0052b7ad: mov eax, dword ptr [eax*4 + 0x922268] */ r_eax = R32((u32)(r_eax*4+0x922268u));
    /* 0052b7b4: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0052b82e:; BB(0x0052b82e);
    /* 0052b82e: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0052b830: mov ecx, esi */ r_ecx = r_esi;
    /* 0052b832: call dword ptr [eax + 0x17c] */ { u32 t = R32((u32)(r_eax+0x17cu)); r_esp -= 4; W32(r_esp, 0x52b838u); call_ind(t); }
    /* 0052b838: mov ecx, esi */ r_ecx = r_esi;
    /* 0052b83a: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x52b83fu); f_0078730c();
    /* 0052b83f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0052b841: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0052b842: mov eax, dword ptr [esi + 0x300] */ r_eax = R32((u32)(r_esi+0x300u));
    /* 0052b848: mov edx, dword ptr [esi + 0x304] */ r_edx = R32((u32)(r_esi+0x304u));
    /* 0052b84e: mov dword ptr [esi + 0x74], eax */ W32((u32)(r_esi+0x74u), r_eax);
    /* 0052b851: mov eax, dword ptr [esi + 0x308] */ r_eax = R32((u32)(r_esi+0x308u));
    /* 0052b857: mov dword ptr [esi + 0x78], edx */ W32((u32)(r_esi+0x78u), r_edx);
    /* 0052b85a: mov dword ptr [esi + 0x7c], eax */ W32((u32)(r_esi+0x7cu), r_eax);
    /* 0052b85d: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x52b862u); f_006946a8();
    /* 0052b862: fld dword ptr [0x9222dc] */ FPUSH(R_F32((u32)(0x9222dcu)));
    /* 0052b868: fadd dword ptr [esi + 0x2b8] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x2b8u));
    /* 0052b86e: fstp dword ptr [esi + 0x2b8] */ W_F32((u32)(r_esi+0x2b8u), ST(0)); FPOP();
    /* 0052b874: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0052b877: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0052b878: ret  */ FN_RET(0x0052b78c); r_esp += 4; return;
L_0052b879:; BB(0x0052b879);
    /* 0052b879: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0052b87b: mov ecx, esi */ r_ecx = r_esi;
    /* 0052b87d: call dword ptr [eax + 0x1a4] */ { u32 t = R32((u32)(r_eax+0x1a4u)); r_esp -= 4; W32(r_esp, 0x52b883u); call_ind(t); }
    /* 0052b883: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0052b884: ret  */ FN_RET(0x0052b78c); r_esp += 4; return;
}

void f_0052b7b6(void)
{
    FN_ENTER(0x0052b7b6);
    /* 0052b7b6: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0052b7b8: mov ecx, esi */ r_ecx = r_esi;
    /* 0052b7ba: call dword ptr [eax + 0x178] */ { u32 t = R32((u32)(r_eax+0x178u)); r_esp -= 4; W32(r_esp, 0x52b7c0u); call_ind(t); }
    /* 0052b7c0: jmp 0x52b838 */ goto L_0052b838;
L_0052b838:; BB(0x0052b838);
    /* 0052b838: mov ecx, esi */ r_ecx = r_esi;
    /* 0052b83a: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x52b83fu); f_0078730c();
    /* 0052b83f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0052b841: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0052b842: mov eax, dword ptr [esi + 0x300] */ r_eax = R32((u32)(r_esi+0x300u));
    /* 0052b848: mov edx, dword ptr [esi + 0x304] */ r_edx = R32((u32)(r_esi+0x304u));
    /* 0052b84e: mov dword ptr [esi + 0x74], eax */ W32((u32)(r_esi+0x74u), r_eax);
    /* 0052b851: mov eax, dword ptr [esi + 0x308] */ r_eax = R32((u32)(r_esi+0x308u));
    /* 0052b857: mov dword ptr [esi + 0x78], edx */ W32((u32)(r_esi+0x78u), r_edx);
    /* 0052b85a: mov dword ptr [esi + 0x7c], eax */ W32((u32)(r_esi+0x7cu), r_eax);
    /* 0052b85d: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x52b862u); f_006946a8();
    /* 0052b862: fld dword ptr [0x9222dc] */ FPUSH(R_F32((u32)(0x9222dcu)));
    /* 0052b868: fadd dword ptr [esi + 0x2b8] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x2b8u));
    /* 0052b86e: fstp dword ptr [esi + 0x2b8] */ W_F32((u32)(r_esi+0x2b8u), ST(0)); FPOP();
    /* 0052b874: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0052b877: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0052b878: ret  */ FN_RET(0x0052b7b6); r_esp += 4; return;
}

void f_0052b7c2(void)
{
    FN_ENTER(0x0052b7c2);
    /* 0052b7c2: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0052b7c4: mov ecx, esi */ r_ecx = r_esi;
    /* 0052b7c6: call dword ptr [eax + 0x174] */ { u32 t = R32((u32)(r_eax+0x174u)); r_esp -= 4; W32(r_esp, 0x52b7ccu); call_ind(t); }
    /* 0052b7cc: jmp 0x52b838 */ goto L_0052b838;
L_0052b838:; BB(0x0052b838);
    /* 0052b838: mov ecx, esi */ r_ecx = r_esi;
    /* 0052b83a: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x52b83fu); f_0078730c();
    /* 0052b83f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0052b841: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0052b842: mov eax, dword ptr [esi + 0x300] */ r_eax = R32((u32)(r_esi+0x300u));
    /* 0052b848: mov edx, dword ptr [esi + 0x304] */ r_edx = R32((u32)(r_esi+0x304u));
    /* 0052b84e: mov dword ptr [esi + 0x74], eax */ W32((u32)(r_esi+0x74u), r_eax);
    /* 0052b851: mov eax, dword ptr [esi + 0x308] */ r_eax = R32((u32)(r_esi+0x308u));
    /* 0052b857: mov dword ptr [esi + 0x78], edx */ W32((u32)(r_esi+0x78u), r_edx);
    /* 0052b85a: mov dword ptr [esi + 0x7c], eax */ W32((u32)(r_esi+0x7cu), r_eax);
    /* 0052b85d: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x52b862u); f_006946a8();
    /* 0052b862: fld dword ptr [0x9222dc] */ FPUSH(R_F32((u32)(0x9222dcu)));
    /* 0052b868: fadd dword ptr [esi + 0x2b8] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x2b8u));
    /* 0052b86e: fstp dword ptr [esi + 0x2b8] */ W_F32((u32)(r_esi+0x2b8u), ST(0)); FPOP();
    /* 0052b874: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0052b877: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0052b878: ret  */ FN_RET(0x0052b7c2); r_esp += 4; return;
}

void f_0052b7ce(void)
{
    FN_ENTER(0x0052b7ce);
    /* 0052b7ce: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0052b7d0: mov ecx, esi */ r_ecx = r_esi;
    /* 0052b7d2: call dword ptr [eax + 0x170] */ { u32 t = R32((u32)(r_eax+0x170u)); r_esp -= 4; W32(r_esp, 0x52b7d8u); call_ind(t); }
    /* 0052b7d8: jmp 0x52b838 */ goto L_0052b838;
L_0052b838:; BB(0x0052b838);
    /* 0052b838: mov ecx, esi */ r_ecx = r_esi;
    /* 0052b83a: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x52b83fu); f_0078730c();
    /* 0052b83f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0052b841: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0052b842: mov eax, dword ptr [esi + 0x300] */ r_eax = R32((u32)(r_esi+0x300u));
    /* 0052b848: mov edx, dword ptr [esi + 0x304] */ r_edx = R32((u32)(r_esi+0x304u));
    /* 0052b84e: mov dword ptr [esi + 0x74], eax */ W32((u32)(r_esi+0x74u), r_eax);
    /* 0052b851: mov eax, dword ptr [esi + 0x308] */ r_eax = R32((u32)(r_esi+0x308u));
    /* 0052b857: mov dword ptr [esi + 0x78], edx */ W32((u32)(r_esi+0x78u), r_edx);
    /* 0052b85a: mov dword ptr [esi + 0x7c], eax */ W32((u32)(r_esi+0x7cu), r_eax);
    /* 0052b85d: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x52b862u); f_006946a8();
    /* 0052b862: fld dword ptr [0x9222dc] */ FPUSH(R_F32((u32)(0x9222dcu)));
    /* 0052b868: fadd dword ptr [esi + 0x2b8] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x2b8u));
    /* 0052b86e: fstp dword ptr [esi + 0x2b8] */ W_F32((u32)(r_esi+0x2b8u), ST(0)); FPOP();
    /* 0052b874: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0052b877: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0052b878: ret  */ FN_RET(0x0052b7ce); r_esp += 4; return;
}

void f_0052b7da(void)
{
    FN_ENTER(0x0052b7da);
    /* 0052b7da: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0052b7dc: mov ecx, esi */ r_ecx = r_esi;
    /* 0052b7de: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x52b7e4u); call_ind(t); }
    /* 0052b7e4: jmp 0x52b838 */ goto L_0052b838;
L_0052b838:; BB(0x0052b838);
    /* 0052b838: mov ecx, esi */ r_ecx = r_esi;
    /* 0052b83a: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x52b83fu); f_0078730c();
    /* 0052b83f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0052b841: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0052b842: mov eax, dword ptr [esi + 0x300] */ r_eax = R32((u32)(r_esi+0x300u));
    /* 0052b848: mov edx, dword ptr [esi + 0x304] */ r_edx = R32((u32)(r_esi+0x304u));
    /* 0052b84e: mov dword ptr [esi + 0x74], eax */ W32((u32)(r_esi+0x74u), r_eax);
    /* 0052b851: mov eax, dword ptr [esi + 0x308] */ r_eax = R32((u32)(r_esi+0x308u));
    /* 0052b857: mov dword ptr [esi + 0x78], edx */ W32((u32)(r_esi+0x78u), r_edx);
    /* 0052b85a: mov dword ptr [esi + 0x7c], eax */ W32((u32)(r_esi+0x7cu), r_eax);
    /* 0052b85d: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x52b862u); f_006946a8();
    /* 0052b862: fld dword ptr [0x9222dc] */ FPUSH(R_F32((u32)(0x9222dcu)));
    /* 0052b868: fadd dword ptr [esi + 0x2b8] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x2b8u));
    /* 0052b86e: fstp dword ptr [esi + 0x2b8] */ W_F32((u32)(r_esi+0x2b8u), ST(0)); FPOP();
    /* 0052b874: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0052b877: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0052b878: ret  */ FN_RET(0x0052b7da); r_esp += 4; return;
}

void f_0052b7e6(void)
{
    FN_ENTER(0x0052b7e6);
    /* 0052b7e6: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0052b7e8: mov ecx, esi */ r_ecx = r_esi;
    /* 0052b7ea: call dword ptr [eax + 0x168] */ { u32 t = R32((u32)(r_eax+0x168u)); r_esp -= 4; W32(r_esp, 0x52b7f0u); call_ind(t); }
    /* 0052b7f0: jmp 0x52b838 */ goto L_0052b838;
L_0052b838:; BB(0x0052b838);
    /* 0052b838: mov ecx, esi */ r_ecx = r_esi;
    /* 0052b83a: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x52b83fu); f_0078730c();
    /* 0052b83f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0052b841: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0052b842: mov eax, dword ptr [esi + 0x300] */ r_eax = R32((u32)(r_esi+0x300u));
    /* 0052b848: mov edx, dword ptr [esi + 0x304] */ r_edx = R32((u32)(r_esi+0x304u));
    /* 0052b84e: mov dword ptr [esi + 0x74], eax */ W32((u32)(r_esi+0x74u), r_eax);
    /* 0052b851: mov eax, dword ptr [esi + 0x308] */ r_eax = R32((u32)(r_esi+0x308u));
    /* 0052b857: mov dword ptr [esi + 0x78], edx */ W32((u32)(r_esi+0x78u), r_edx);
    /* 0052b85a: mov dword ptr [esi + 0x7c], eax */ W32((u32)(r_esi+0x7cu), r_eax);
    /* 0052b85d: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x52b862u); f_006946a8();
    /* 0052b862: fld dword ptr [0x9222dc] */ FPUSH(R_F32((u32)(0x9222dcu)));
    /* 0052b868: fadd dword ptr [esi + 0x2b8] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x2b8u));
    /* 0052b86e: fstp dword ptr [esi + 0x2b8] */ W_F32((u32)(r_esi+0x2b8u), ST(0)); FPOP();
    /* 0052b874: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0052b877: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0052b878: ret  */ FN_RET(0x0052b7e6); r_esp += 4; return;
}

void f_0052b7f2(void)
{
    FN_ENTER(0x0052b7f2);
    /* 0052b7f2: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0052b7f4: mov ecx, esi */ r_ecx = r_esi;
    /* 0052b7f6: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x52b7fcu); call_ind(t); }
    /* 0052b7fc: jmp 0x52b838 */ goto L_0052b838;
L_0052b838:; BB(0x0052b838);
    /* 0052b838: mov ecx, esi */ r_ecx = r_esi;
    /* 0052b83a: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x52b83fu); f_0078730c();
    /* 0052b83f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0052b841: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0052b842: mov eax, dword ptr [esi + 0x300] */ r_eax = R32((u32)(r_esi+0x300u));
    /* 0052b848: mov edx, dword ptr [esi + 0x304] */ r_edx = R32((u32)(r_esi+0x304u));
    /* 0052b84e: mov dword ptr [esi + 0x74], eax */ W32((u32)(r_esi+0x74u), r_eax);
    /* 0052b851: mov eax, dword ptr [esi + 0x308] */ r_eax = R32((u32)(r_esi+0x308u));
    /* 0052b857: mov dword ptr [esi + 0x78], edx */ W32((u32)(r_esi+0x78u), r_edx);
    /* 0052b85a: mov dword ptr [esi + 0x7c], eax */ W32((u32)(r_esi+0x7cu), r_eax);
    /* 0052b85d: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x52b862u); f_006946a8();
    /* 0052b862: fld dword ptr [0x9222dc] */ FPUSH(R_F32((u32)(0x9222dcu)));
    /* 0052b868: fadd dword ptr [esi + 0x2b8] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x2b8u));
    /* 0052b86e: fstp dword ptr [esi + 0x2b8] */ W_F32((u32)(r_esi+0x2b8u), ST(0)); FPOP();
    /* 0052b874: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0052b877: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0052b878: ret  */ FN_RET(0x0052b7f2); r_esp += 4; return;
}

void f_0052b7fe(void)
{
    FN_ENTER(0x0052b7fe);
    /* 0052b7fe: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0052b800: mov ecx, esi */ r_ecx = r_esi;
    /* 0052b802: call dword ptr [eax + 0x160] */ { u32 t = R32((u32)(r_eax+0x160u)); r_esp -= 4; W32(r_esp, 0x52b808u); call_ind(t); }
    /* 0052b808: jmp 0x52b838 */ goto L_0052b838;
L_0052b838:; BB(0x0052b838);
    /* 0052b838: mov ecx, esi */ r_ecx = r_esi;
    /* 0052b83a: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x52b83fu); f_0078730c();
    /* 0052b83f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0052b841: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0052b842: mov eax, dword ptr [esi + 0x300] */ r_eax = R32((u32)(r_esi+0x300u));
    /* 0052b848: mov edx, dword ptr [esi + 0x304] */ r_edx = R32((u32)(r_esi+0x304u));
    /* 0052b84e: mov dword ptr [esi + 0x74], eax */ W32((u32)(r_esi+0x74u), r_eax);
    /* 0052b851: mov eax, dword ptr [esi + 0x308] */ r_eax = R32((u32)(r_esi+0x308u));
    /* 0052b857: mov dword ptr [esi + 0x78], edx */ W32((u32)(r_esi+0x78u), r_edx);
    /* 0052b85a: mov dword ptr [esi + 0x7c], eax */ W32((u32)(r_esi+0x7cu), r_eax);
    /* 0052b85d: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x52b862u); f_006946a8();
    /* 0052b862: fld dword ptr [0x9222dc] */ FPUSH(R_F32((u32)(0x9222dcu)));
    /* 0052b868: fadd dword ptr [esi + 0x2b8] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x2b8u));
    /* 0052b86e: fstp dword ptr [esi + 0x2b8] */ W_F32((u32)(r_esi+0x2b8u), ST(0)); FPOP();
    /* 0052b874: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0052b877: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0052b878: ret  */ FN_RET(0x0052b7fe); r_esp += 4; return;
}

void f_0052b80a(void)
{
    FN_ENTER(0x0052b80a);
    /* 0052b80a: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0052b80c: mov ecx, esi */ r_ecx = r_esi;
    /* 0052b80e: call dword ptr [eax + 0x15c] */ { u32 t = R32((u32)(r_eax+0x15cu)); r_esp -= 4; W32(r_esp, 0x52b814u); call_ind(t); }
    /* 0052b814: jmp 0x52b838 */ goto L_0052b838;
L_0052b838:; BB(0x0052b838);
    /* 0052b838: mov ecx, esi */ r_ecx = r_esi;
    /* 0052b83a: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x52b83fu); f_0078730c();
    /* 0052b83f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0052b841: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0052b842: mov eax, dword ptr [esi + 0x300] */ r_eax = R32((u32)(r_esi+0x300u));
    /* 0052b848: mov edx, dword ptr [esi + 0x304] */ r_edx = R32((u32)(r_esi+0x304u));
    /* 0052b84e: mov dword ptr [esi + 0x74], eax */ W32((u32)(r_esi+0x74u), r_eax);
    /* 0052b851: mov eax, dword ptr [esi + 0x308] */ r_eax = R32((u32)(r_esi+0x308u));
    /* 0052b857: mov dword ptr [esi + 0x78], edx */ W32((u32)(r_esi+0x78u), r_edx);
    /* 0052b85a: mov dword ptr [esi + 0x7c], eax */ W32((u32)(r_esi+0x7cu), r_eax);
    /* 0052b85d: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x52b862u); f_006946a8();
    /* 0052b862: fld dword ptr [0x9222dc] */ FPUSH(R_F32((u32)(0x9222dcu)));
    /* 0052b868: fadd dword ptr [esi + 0x2b8] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x2b8u));
    /* 0052b86e: fstp dword ptr [esi + 0x2b8] */ W_F32((u32)(r_esi+0x2b8u), ST(0)); FPOP();
    /* 0052b874: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0052b877: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0052b878: ret  */ FN_RET(0x0052b80a); r_esp += 4; return;
}

void f_0052b816(void)
{
    FN_ENTER(0x0052b816);
    /* 0052b816: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0052b818: mov ecx, esi */ r_ecx = r_esi;
    /* 0052b81a: call dword ptr [eax + 0x158] */ { u32 t = R32((u32)(r_eax+0x158u)); r_esp -= 4; W32(r_esp, 0x52b820u); call_ind(t); }
    /* 0052b820: jmp 0x52b838 */ goto L_0052b838;
L_0052b838:; BB(0x0052b838);
    /* 0052b838: mov ecx, esi */ r_ecx = r_esi;
    /* 0052b83a: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x52b83fu); f_0078730c();
    /* 0052b83f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0052b841: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0052b842: mov eax, dword ptr [esi + 0x300] */ r_eax = R32((u32)(r_esi+0x300u));
    /* 0052b848: mov edx, dword ptr [esi + 0x304] */ r_edx = R32((u32)(r_esi+0x304u));
    /* 0052b84e: mov dword ptr [esi + 0x74], eax */ W32((u32)(r_esi+0x74u), r_eax);
    /* 0052b851: mov eax, dword ptr [esi + 0x308] */ r_eax = R32((u32)(r_esi+0x308u));
    /* 0052b857: mov dword ptr [esi + 0x78], edx */ W32((u32)(r_esi+0x78u), r_edx);
    /* 0052b85a: mov dword ptr [esi + 0x7c], eax */ W32((u32)(r_esi+0x7cu), r_eax);
    /* 0052b85d: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x52b862u); f_006946a8();
    /* 0052b862: fld dword ptr [0x9222dc] */ FPUSH(R_F32((u32)(0x9222dcu)));
    /* 0052b868: fadd dword ptr [esi + 0x2b8] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x2b8u));
    /* 0052b86e: fstp dword ptr [esi + 0x2b8] */ W_F32((u32)(r_esi+0x2b8u), ST(0)); FPOP();
    /* 0052b874: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0052b877: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0052b878: ret  */ FN_RET(0x0052b816); r_esp += 4; return;
}

void f_0052b822(void)
{
    FN_ENTER(0x0052b822);
    /* 0052b822: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0052b824: mov ecx, esi */ r_ecx = r_esi;
    /* 0052b826: call dword ptr [eax + 0x154] */ { u32 t = R32((u32)(r_eax+0x154u)); r_esp -= 4; W32(r_esp, 0x52b82cu); call_ind(t); }
    /* 0052b82c: jmp 0x52b838 */ goto L_0052b838;
L_0052b838:; BB(0x0052b838);
    /* 0052b838: mov ecx, esi */ r_ecx = r_esi;
    /* 0052b83a: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x52b83fu); f_0078730c();
    /* 0052b83f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0052b841: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0052b842: mov eax, dword ptr [esi + 0x300] */ r_eax = R32((u32)(r_esi+0x300u));
    /* 0052b848: mov edx, dword ptr [esi + 0x304] */ r_edx = R32((u32)(r_esi+0x304u));
    /* 0052b84e: mov dword ptr [esi + 0x74], eax */ W32((u32)(r_esi+0x74u), r_eax);
    /* 0052b851: mov eax, dword ptr [esi + 0x308] */ r_eax = R32((u32)(r_esi+0x308u));
    /* 0052b857: mov dword ptr [esi + 0x78], edx */ W32((u32)(r_esi+0x78u), r_edx);
    /* 0052b85a: mov dword ptr [esi + 0x7c], eax */ W32((u32)(r_esi+0x7cu), r_eax);
    /* 0052b85d: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x52b862u); f_006946a8();
    /* 0052b862: fld dword ptr [0x9222dc] */ FPUSH(R_F32((u32)(0x9222dcu)));
    /* 0052b868: fadd dword ptr [esi + 0x2b8] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x2b8u));
    /* 0052b86e: fstp dword ptr [esi + 0x2b8] */ W_F32((u32)(r_esi+0x2b8u), ST(0)); FPOP();
    /* 0052b874: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0052b877: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0052b878: ret  */ FN_RET(0x0052b822); r_esp += 4; return;
}

void f_0052b888(void) /* sub_52B888 */
{
    FN_ENTER(0x0052b888);
    /* 0052b888: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0052b889: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0052b88c: mov esi, ecx */ r_esi = r_ecx;
    /* 0052b88e: mov eax, dword ptr [esi + 0x398] */ r_eax = R32((u32)(r_esi+0x398u));
    /* 0052b894: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052b897: je 0x52bb5a */ if (fZ) goto L_0052bb5a;
L_0052b89d:; BB(0x0052b89d);
    /* 0052b89d: mov edx, dword ptr [esi + 0x30] */ r_edx = R32((u32)(r_esi+0x30u));
    /* 0052b8a0: test edx, 0x1000 */ {  u32 a = r_edx; u32 b = 0x1000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052b8a6: je 0x52b8e1 */ if (fZ) goto L_0052b8e1;
L_0052b8a8:; BB(0x0052b8a8);
    /* 0052b8a8: movsx ecx, word ptr [esi + 0x37c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_esi+0x37cu));
    /* 0052b8af: add ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0052b8b2: movsx eax, cx */ r_eax = (u32)(i32)(i16)(u16)r_ecx;
    /* 0052b8b5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0052b8b7: jl 0x52bb0a */ if ((fS!=fO)) goto L_0052bb0a;
L_0052b8bd:; BB(0x0052b8bd);
    /* 0052b8bd: mov eax, dword ptr [esi + 0x358] */ r_eax = R32((u32)(r_esi+0x358u));
    /* 0052b8c3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052b8c5: mov word ptr [esi + 0x37c], cx */ W16((u32)(r_esi+0x37cu), (u16)r_ecx);
    /* 0052b8cc: mov ecx, esi */ r_ecx = r_esi;
    /* 0052b8ce: push dword ptr [eax] */ { u32 v = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, v); }
    /* 0052b8d0: call 0x7714cc */ r_esp -= 4; W32(r_esp, 0x52b8d5u); f_007714cc();
    /* 0052b8d5: mov word ptr [esi + 0x340], ax */ W16((u32)(r_esi+0x340u), (u16)r_eax);
    /* 0052b8dc: jmp 0x52baaa */ goto L_0052baaa;
L_0052b8e1:; BB(0x0052b8e1);
    /* 0052b8e1: test dl, 0x10 */ {  u32 a = (u8)r_edx; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0052b8e4: jne 0x52b940 */ if (!fZ) goto L_0052b940;
L_0052b8e6:; BB(0x0052b8e6);
    /* 0052b8e6: mov eax, dword ptr [esi + 0x380] */ r_eax = R32((u32)(r_esi+0x380u));
    /* 0052b8ec: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052b8ee: je 0x52b90a */ if (fZ) goto L_0052b90a;
L_0052b8f0:; BB(0x0052b8f0);
    /* 0052b8f0: mov ecx, esi */ r_ecx = r_esi;
    /* 0052b8f2: call 0x786bc4 */ r_esp -= 4; W32(r_esp, 0x52b8f7u); f_00786bc4();
    /* 0052b8f7: movzx eax, word ptr [eax + 0x340] */ r_eax = (u32)R16((u32)(r_eax+0x340u));
    /* 0052b8fe: mov word ptr [esi + 0x340], ax */ W16((u32)(r_esi+0x340u), (u16)r_eax);
    /* 0052b905: jmp 0x52baaa */ goto L_0052baaa;
L_0052b90a:; BB(0x0052b90a);
    /* 0052b90a: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 0052b90c: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0052b90e: mov ecx, esi */ r_ecx = r_esi;
    /* 0052b910: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x52b913u); call_ind(t); }
    /* 0052b913: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052b915: jne 0x52b923 */ if (!fZ) goto L_0052b923;
L_0052b917:; BB(0x0052b917);
    /* 0052b917: movzx eax, word ptr [esi + 0x340] */ r_eax = (u32)R16((u32)(r_esi+0x340u));
    /* 0052b91e: jmp 0x52baaa */ goto L_0052baaa;
L_0052b923:; BB(0x0052b923);
    /* 0052b923: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052b925: mov eax, dword ptr [esi + 0x358] */ r_eax = R32((u32)(r_esi+0x358u));
    /* 0052b92b: push dword ptr [eax] */ { u32 v = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, v); }
    /* 0052b92d: mov ecx, esi */ r_ecx = r_esi;
    /* 0052b92f: call 0x7714cc */ r_esp -= 4; W32(r_esp, 0x52b934u); f_007714cc();
    /* 0052b934: mov word ptr [esi + 0x340], ax */ W16((u32)(r_esi+0x340u), (u16)r_eax);
    /* 0052b93b: jmp 0x52baaa */ goto L_0052baaa;
L_0052b940:; BB(0x0052b940);
    /* 0052b940: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 0052b942: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0052b944: mov ecx, esi */ r_ecx = r_esi;
    /* 0052b946: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x52b949u); call_ind(t); }
    /* 0052b949: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052b94b: je 0x52baa3 */ if (fZ) goto L_0052baa3;
L_0052b951:; BB(0x0052b951);
    /* 0052b951: mov ecx, dword ptr [0xaae168] */ r_ecx = R32((u32)(0xaae168u));
    /* 0052b957: add ecx, dword ptr [0xaae164] */ {  u32 a = r_ecx; u32 b = R32((u32)(0xaae164u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0052b95d: mov edx, dword ptr [esi + 0x358] */ r_edx = R32((u32)(r_esi+0x358u));
    /* 0052b963: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0052b965: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 0052b96c: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 0052b971: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 0052b979: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 0052b981: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 0052b983: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0052b985: mov edx, 0 */ r_edx = 0x0u;
    /* 0052b98a: jle 0x52bb7c */ if ((fZ||fS!=fO)) goto L_0052bb7c;
L_0052b990:; BB(0x0052b990);
    /* 0052b990: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 0052b994: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 0052b998: mov dword ptr [esp + 0x14], ebx */ W32((u32)(r_esp+0x14u), r_ebx);
    /* 0052b99c: mov ebx, edx */ r_ebx = r_edx;
    /* 0052b99e: mov dword ptr [esp + 0x10], edi */ W32((u32)(r_esp+0x10u), r_edi);
    /* 0052b9a2: mov dword ptr [esp + 0xc], ebp */ W32((u32)(r_esp+0xcu), r_ebp);
    /* 0052b9a6: mov edx, ecx */ r_edx = r_ecx;
L_0052b9a8:; BB(0x0052b9a8);
    /* 0052b9a8: mov ebp, dword ptr [ebx*4 + 0xaad720] */ r_ebp = R32((u32)(r_ebx*4+0xaad720u));
    /* 0052b9af: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052b9b1: je 0x52bb45 */ if (fZ) goto L_0052bb45;
L_0052b9b7:; BB(0x0052b9b7);
    /* 0052b9b7: movzx edi, word ptr [ebp + 0x1c] */ r_edi = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0052b9bb: cmp edi, 0x4000 */ {  u32 a = r_edi; u32 b = 0x4000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052b9c1: jge 0x52ba7f */ if ((fS==fO)) goto L_0052ba7f;
L_0052b9c7:; BB(0x0052b9c7);
    /* 0052b9c7: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 0052b9cb: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052b9cd: je 0x52ba7f */ if (fZ) goto L_0052ba7f;
L_0052b9d3:; BB(0x0052b9d3);
    /* 0052b9d3: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 0052b9d6: test eax, 0x3000800 */ {  u32 a = r_eax; u32 b = 0x3000800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052b9db: jne 0x52ba7f */ if (!fZ) goto L_0052ba7f;
L_0052b9e1:; BB(0x0052b9e1);
    /* 0052b9e1: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0052b9e4: mov eax, dword ptr [ebp + 0x300] */ r_eax = R32((u32)(r_ebp+0x300u));
    /* 0052b9ea: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0052b9ed: mov eax, dword ptr [ebp + 0x304] */ r_eax = R32((u32)(r_ebp+0x304u));
    /* 0052b9f3: lea edx, [esi + 0x300] */ r_edx = (u32)(r_esi+0x300u);
    /* 0052b9f9: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0052b9fd: mov eax, dword ptr [ebp + 0x308] */ r_eax = R32((u32)(r_ebp+0x308u));
    /* 0052ba03: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0052ba07: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 0052ba0b: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x52ba10u); f_0082f9c4();
    /* 0052ba10: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0052ba13: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0052ba15: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 0052ba19: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0052ba1b: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0052ba1d: fcom dword ptr [esp + 0x20] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x20u))); 
    /* 0052ba21: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0052ba23: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 0052ba27: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0052ba28: jb 0x52ba38 */ if (fC) goto L_0052ba38;
L_0052ba2a:; BB(0x0052ba2a);
    /* 0052ba2a: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
    /* 0052ba30: add edx, dword ptr [0xaae164] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaae164u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0052ba36: jmp 0x52ba7f */ goto L_0052ba7f;
L_0052ba38:; BB(0x0052ba38);
    /* 0052ba38: add ebp, 0x300 */ {  u32 a = r_ebp; u32 b = 0x300u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0052ba3e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0052ba3f: mov ecx, esi */ r_ecx = r_esi;
    /* 0052ba41: call 0x771e14 */ r_esp -= 4; W32(r_esp, 0x52ba46u); f_00771e14();
    /* 0052ba46: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052ba49: je 0x52ba73 */ if (fZ) goto L_0052ba73;
L_0052ba4b:; BB(0x0052ba4b);
    /* 0052ba4b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0052ba4d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0052ba4e: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 0052ba52: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052ba53: call 0x77fffc */ r_esp -= 4; W32(r_esp, 0x52ba58u); f_0077fffc();
    /* 0052ba58: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052ba5b: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
    /* 0052ba61: mov ebp, dword ptr [0xaae164] */ r_ebp = R32((u32)(0xaae164u));
    /* 0052ba67: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052ba69: je 0x52bb32 */ if (fZ) goto L_0052bb32;
L_0052ba6f:; BB(0x0052ba6f);
    /* 0052ba6f: add edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0052ba71: jmp 0x52ba7f */ goto L_0052ba7f;
L_0052ba73:; BB(0x0052ba73);
    /* 0052ba73: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
    /* 0052ba79: add edx, dword ptr [0xaae164] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaae164u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
L_0052ba7f:; BB(0x0052ba7f);
    /* 0052ba7f: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0052ba82: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052ba84: jl 0x52b9a8 */ if ((fS!=fO)) goto L_0052b9a8;
L_0052ba8a:; BB(0x0052ba8a);
    /* 0052ba8a: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 0052ba8e: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
    /* 0052ba92: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 0052ba96: mov ebp, dword ptr [esp + 0xc] */ r_ebp = R32((u32)(r_esp+0xcu));
L_0052ba9a:; BB(0x0052ba9a);
    /* 0052ba9a: mov word ptr [esi + 0x340], ax */ W16((u32)(r_esi+0x340u), (u16)r_eax);
    /* 0052baa1: jmp 0x52baaa */ goto L_0052baaa;
L_0052baa3:; BB(0x0052baa3);
    /* 0052baa3: movzx eax, word ptr [esi + 0x340] */ r_eax = (u32)R16((u32)(r_esi+0x340u));
L_0052baaa:; BB(0x0052baaa);
    /* 0052baaa: movzx edx, ax */ r_edx = (u32)(u16)r_eax;
    /* 0052baad: cmp edx, 0x1000 */ {  u32 a = r_edx; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052bab3: jl 0x52bad9 */ if ((fS!=fO)) goto L_0052bad9;
L_0052bab5:; BB(0x0052bab5);
    /* 0052bab5: cmp edx, 0x4000 */ {  u32 a = r_edx; u32 b = 0x4000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052babb: jge 0x52bace */ if ((fS==fO)) goto L_0052bace;
L_0052babd:; BB(0x0052babd);
    /* 0052babd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052babe: call 0x786b3c */ r_esp -= 4; W32(r_esp, 0x52bac3u); f_00786b3c();
    /* 0052bac3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0052bac4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052bac5: mov ecx, esi */ r_ecx = r_esi;
    /* 0052bac7: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x52baccu); f_007706b0();
    /* 0052bacc: jmp 0x52bb05 */ goto L_0052bb05;
L_0052bace:; BB(0x0052bace);
    /* 0052bace: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052bad0: mov ecx, esi */ r_ecx = r_esi;
    /* 0052bad2: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x52bad7u); f_007706b0();
    /* 0052bad7: jmp 0x52bb05 */ goto L_0052bb05;
L_0052bad9:; BB(0x0052bad9);
    /* 0052bad9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0052bada: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x52badfu); f_0068d5a8();
    /* 0052badf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0052bae0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052bae2: je 0x52bafc */ if (fZ) goto L_0052bafc;
L_0052bae4:; BB(0x0052bae4);
    /* 0052bae4: mov edx, dword ptr [eax + 0x3f0] */ r_edx = R32((u32)(r_eax+0x3f0u));
    /* 0052baea: cmp edx, dword ptr [0xaafca0] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaafca0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052baf0: jne 0x52bafc */ if (!fZ) goto L_0052bafc;
L_0052baf2:; BB(0x0052baf2);
    /* 0052baf2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052baf3: mov ecx, esi */ r_ecx = r_esi;
    /* 0052baf5: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x52bafau); f_007706b0();
    /* 0052bafa: jmp 0x52bb05 */ goto L_0052bb05;
L_0052bafc:; BB(0x0052bafc);
    /* 0052bafc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052bafe: mov ecx, esi */ r_ecx = r_esi;
    /* 0052bb00: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x52bb05u); f_007706b0();
L_0052bb05:; BB(0x0052bb05);
    /* 0052bb05: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0052bb08: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0052bb09: ret  */ FN_RET(0x0052b888); r_esp += 4; return;
L_0052bb0a:; BB(0x0052bb0a);
    /* 0052bb0a: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 0052bb0f: mov ecx, 0xffff */ r_ecx = 0xffffu;
    /* 0052bb14: mov word ptr [esi + 0x340], cx */ W16((u32)(r_esi+0x340u), (u16)r_ecx);
    /* 0052bb1b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0052bb1d: mov word ptr [esi + 0x37c], cx */ W16((u32)(r_esi+0x37cu), (u16)r_ecx);
    /* 0052bb24: or edx, 0x1000 */ {  u32 a = r_edx; u32 b = 0x1000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0052bb2a: mov dword ptr [esi + 0x30], edx */ W32((u32)(r_esi+0x30u), r_edx);
    /* 0052bb2d: jmp 0x52baaa */ goto L_0052baaa;
L_0052bb32:; BB(0x0052bb32);
    /* 0052bb32: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 0052bb36: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 0052bb3a: add edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0052bb3c: mov dword ptr [esp + 0x24], edi */ W32((u32)(r_esp+0x24u), r_edi);
    /* 0052bb40: jmp 0x52ba7f */ goto L_0052ba7f;
L_0052bb45:; BB(0x0052bb45);
    /* 0052bb45: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 0052bb49: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
    /* 0052bb4d: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 0052bb51: mov ebp, dword ptr [esp + 0xc] */ r_ebp = R32((u32)(r_esp+0xcu));
    /* 0052bb55: jmp 0x52ba9a */ goto L_0052ba9a;
L_0052bb5a:; BB(0x0052bb5a);
    /* 0052bb5a: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 0052bb5f: mov edx, 0xffff */ r_edx = 0xffffu;
    /* 0052bb64: mov word ptr [esi + 0x340], dx */ W16((u32)(r_esi+0x340u), (u16)r_edx);
    /* 0052bb6b: mov edx, dword ptr [esi + 0x30] */ r_edx = R32((u32)(r_esi+0x30u));
    /* 0052bb6e: or edx, 0x4040000 */ {  u32 a = r_edx; u32 b = 0x4040000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0052bb74: mov dword ptr [esi + 0x30], edx */ W32((u32)(r_esi+0x30u), r_edx);
    /* 0052bb77: jmp 0x52baaa */ goto L_0052baaa;
L_0052bb7c:; BB(0x0052bb7c);
    /* 0052bb7c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0052bb7e: jmp 0x52ba9a */ goto L_0052ba9a;
}

void f_0052bb84(void) /* sub_52BB84 */
{
    FN_ENTER(0x0052bb84);
    /* 0052bb84: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0052bb85: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0052bb87: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0052bb89: call 0x777d10 */ r_esp -= 4; W32(r_esp, 0x52bb8eu); f_00777d10();
    /* 0052bb8e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052bb90: je 0x52bbdf */ if (fZ) goto L_0052bbdf;
L_0052bb92:; BB(0x0052bb92);
    /* 0052bb92: movsx eax, word ptr [ebx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32eu));
    /* 0052bb99: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0052bb9b: jne 0x52bbd8 */ if (!fZ) goto L_0052bbd8;
L_0052bb9d:; BB(0x0052bb9d);
    /* 0052bb9d: push 0xa000000 */ { u32 v = 0xa000000u; r_esp -= 4; W32(r_esp, v); }
    /* 0052bba2: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
    /* 0052bba5: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0052bba7: mov dword ptr [ebx + 0x398], ecx */ W32((u32)(r_ebx+0x398u), r_ecx);
    /* 0052bbad: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0052bbae: mov eax, 1 */ r_eax = 0x1u;
    /* 0052bbb3: mov word ptr [ebx + 0x32e], ax */ W16((u32)(r_ebx+0x32eu), (u16)r_eax);
    /* 0052bbba: mov word ptr [ebx + 0x330], cx */ W16((u32)(r_ebx+0x330u), (u16)r_ecx);
    /* 0052bbc1: mov word ptr [ebx + 0xb8], cx */ W16((u32)(r_ebx+0xb8u), (u16)r_ecx);
    /* 0052bbc8: and edx, 0xfbfbffff */ {  u32 a = r_edx; u32 b = 0xfbfbffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0052bbce: mov dword ptr [ebx + 0x30], edx */ W32((u32)(r_ebx+0x30u), r_edx);
    /* 0052bbd1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0052bbd3: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x52bbd8u); f_007b52ec();
L_0052bbd8:; BB(0x0052bbd8);
    /* 0052bbd8: mov eax, 1 */ r_eax = 0x1u;
    /* 0052bbdd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0052bbde: ret  */ FN_RET(0x0052bb84); r_esp += 4; return;
L_0052bbdf:; BB(0x0052bbdf);
    /* 0052bbdf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0052bbe1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0052bbe2: ret  */ FN_RET(0x0052bb84); r_esp += 4; return;
}

void f_0052bbe4(void) /* sub_52BBE4 */
{
    FN_ENTER(0x0052bbe4);
    /* 0052bbe4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0052bbe5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0052bbe7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0052bbe9: call 0x7780a8 */ r_esp -= 4; W32(r_esp, 0x52bbeeu); f_007780a8();
    /* 0052bbee: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052bbf0: je 0x52bc3f */ if (fZ) goto L_0052bc3f;
L_0052bbf2:; BB(0x0052bbf2);
    /* 0052bbf2: movsx eax, word ptr [ebx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32eu));
    /* 0052bbf9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0052bbfb: jne 0x52bc38 */ if (!fZ) goto L_0052bc38;
L_0052bbfd:; BB(0x0052bbfd);
    /* 0052bbfd: push 0xa000000 */ { u32 v = 0xa000000u; r_esp -= 4; W32(r_esp, v); }
    /* 0052bc02: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
    /* 0052bc05: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0052bc07: mov dword ptr [ebx + 0x398], ecx */ W32((u32)(r_ebx+0x398u), r_ecx);
    /* 0052bc0d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0052bc0e: mov eax, 1 */ r_eax = 0x1u;
    /* 0052bc13: mov word ptr [ebx + 0x32e], ax */ W16((u32)(r_ebx+0x32eu), (u16)r_eax);
    /* 0052bc1a: mov word ptr [ebx + 0x330], cx */ W16((u32)(r_ebx+0x330u), (u16)r_ecx);
    /* 0052bc21: mov word ptr [ebx + 0xb8], cx */ W16((u32)(r_ebx+0xb8u), (u16)r_ecx);
    /* 0052bc28: and edx, 0xfbfbffff */ {  u32 a = r_edx; u32 b = 0xfbfbffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0052bc2e: mov dword ptr [ebx + 0x30], edx */ W32((u32)(r_ebx+0x30u), r_edx);
    /* 0052bc31: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0052bc33: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x52bc38u); f_007b52ec();
L_0052bc38:; BB(0x0052bc38);
    /* 0052bc38: mov eax, 1 */ r_eax = 0x1u;
    /* 0052bc3d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0052bc3e: ret  */ FN_RET(0x0052bbe4); r_esp += 4; return;
L_0052bc3f:; BB(0x0052bc3f);
    /* 0052bc3f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0052bc41: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0052bc42: ret  */ FN_RET(0x0052bbe4); r_esp += 4; return;
}

void f_0052bc44(void) /* sub_52BC44 */
{
    FN_ENTER(0x0052bc44);
    /* 0052bc44: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 0052bc4b: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052bc4e: je 0x52bc68 */ if (fZ) goto L_0052bc68;
L_0052bc50:; BB(0x0052bc50);
    /* 0052bc50: mov eax, 7 */ r_eax = 0x7u;
    /* 0052bc55: mov word ptr [ecx + 0x32e], ax */ W16((u32)(r_ecx+0x32eu), (u16)r_eax);
    /* 0052bc5c: mov edx, 6 */ r_edx = 0x6u;
    /* 0052bc61: mov word ptr [ecx + 0xb8], dx */ W16((u32)(r_ecx+0xb8u), (u16)r_edx);
L_0052bc68:; BB(0x0052bc68);
    /* 0052bc68: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 0052bc6b: and eax, 0xffdbffff */ {  u32 a = r_eax; u32 b = 0xffdbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0052bc70: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 0052bc73: ret  */ FN_RET(0x0052bc44); r_esp += 4; return;
}

void f_0052bc74(void) /* sub_52BC74 */
{
    FN_ENTER(0x0052bc74);
    /* 0052bc74: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0052bc75: mov esi, ecx */ r_esi = r_ecx;
    /* 0052bc77: movsx eax, word ptr [esi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x32eu));
    /* 0052bc7e: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0052bc81: je 0x52bcb6 */ if (fZ) goto L_0052bcb6;
L_0052bc83:; BB(0x0052bc83);
    /* 0052bc83: mov eax, 8 */ r_eax = 0x8u;
    /* 0052bc88: mov word ptr [esi + 0x32e], ax */ W16((u32)(r_esi+0x32eu), (u16)r_eax);
    /* 0052bc8f: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
    /* 0052bc96: mov ecx, esi */ r_ecx = r_esi;
    /* 0052bc98: call 0x786f64 */ r_esp -= 4; W32(r_esp, 0x52bc9du); f_00786f64();
    /* 0052bc9d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0052bc9f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052bca1: mov ecx, esi */ r_ecx = r_esi;
    /* 0052bca3: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x52bca8u); f_007b52ec();
    /* 0052bca8: mov ecx, esi */ r_ecx = r_esi;
    /* 0052bcaa: call 0x787534 */ r_esp -= 4; W32(r_esp, 0x52bcafu); f_00787534();
    /* 0052bcaf: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0052bcb0: call 0x8113e4 */ r_esp -= 4; W32(r_esp, 0x52bcb5u); f_008113e4();
    /* 0052bcb5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0052bcb6:; BB(0x0052bcb6);
    /* 0052bcb6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0052bcb7: ret  */ FN_RET(0x0052bc74); r_esp += 4; return;
}

void f_0052bcb8(void) /* sub_52BCB8 */
{
    FN_ENTER(0x0052bcb8);
    /* 0052bcb8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0052bcb9: mov edi, ecx */ r_edi = r_ecx;
    /* 0052bcbb: mov ecx, edi */ r_ecx = r_edi;
    /* 0052bcbd: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x52bcc2u); f_00770738();
    /* 0052bcc2: movsx eax, word ptr [edi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32eu));
    /* 0052bcc9: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052bccc: jne 0x52bcee */ if (!fZ) goto L_0052bcee;
L_0052bcce:; BB(0x0052bcce);
    /* 0052bcce: mov eax, dword ptr [edi + 0x398] */ r_eax = R32((u32)(r_edi+0x398u));
    /* 0052bcd4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0052bcd6: je 0x52bd60 */ if (fZ) goto L_0052bd60;
L_0052bcdc:; BB(0x0052bcdc);
    /* 0052bcdc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0052bcde: mov word ptr [edi + 0x32e], ax */ W16((u32)(r_edi+0x32eu), (u16)r_eax);
    /* 0052bce5: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 0052bcec: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0052bced: ret  */ FN_RET(0x0052bcb8); r_esp += 4; return;
L_0052bcee:; BB(0x0052bcee);
    /* 0052bcee: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052bcf0: jne 0x52bd13 */ if (!fZ) goto L_0052bd13;
L_0052bcf2:; BB(0x0052bcf2);
    /* 0052bcf2: movsx eax, word ptr [edi + 0x330] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x330u));
    /* 0052bcf9: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0052bcfc: jne 0x52bd60 */ if (!fZ) goto L_0052bd60;
L_0052bcfe:; BB(0x0052bcfe);
    /* 0052bcfe: mov eax, dword ptr [edi + 0x398] */ r_eax = R32((u32)(r_edi+0x398u));
    /* 0052bd04: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0052bd06: je 0x52bd60 */ if (fZ) goto L_0052bd60;
L_0052bd08:; BB(0x0052bd08);
    /* 0052bd08: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0052bd0a: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 0052bd11: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0052bd12: ret  */ FN_RET(0x0052bcb8); r_esp += 4; return;
L_0052bd13:; BB(0x0052bd13);
    /* 0052bd13: mov eax, dword ptr [edi + 0x398] */ r_eax = R32((u32)(r_edi+0x398u));
    /* 0052bd19: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052bd1b: je 0x52bd28 */ if (fZ) goto L_0052bd28;
L_0052bd1d:; BB(0x0052bd1d);
    /* 0052bd1d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0052bd1f: mov word ptr [edi + 0x32e], ax */ W16((u32)(r_edi+0x32eu), (u16)r_eax);
    /* 0052bd26: jmp 0x52bd34 */ goto L_0052bd34;
L_0052bd28:; BB(0x0052bd28);
    /* 0052bd28: mov eax, 1 */ r_eax = 0x1u;
    /* 0052bd2d: mov word ptr [edi + 0x32e], ax */ W16((u32)(r_edi+0x32eu), (u16)r_eax);
L_0052bd34:; BB(0x0052bd34);
    /* 0052bd34: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 0052bd36: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0052bd38: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 0052bd3f: mov ecx, edi */ r_ecx = r_edi;
    /* 0052bd41: call dword ptr [edx + 0x1a8] */ { u32 t = R32((u32)(r_edx+0x1a8u)); r_esp -= 4; W32(r_esp, 0x52bd47u); call_ind(t); }
    /* 0052bd47: push 0xa000000 */ { u32 v = 0xa000000u; r_esp -= 4; W32(r_esp, v); }
    /* 0052bd4c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052bd4e: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0052bd51: or eax, 0x4040000 */ {  u32 a = r_eax; u32 b = 0x4040000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0052bd56: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0052bd59: mov ecx, edi */ r_ecx = r_edi;
    /* 0052bd5b: call 0x7b52c4 */ r_esp -= 4; W32(r_esp, 0x52bd60u); f_007b52c4();
L_0052bd60:; BB(0x0052bd60);
    /* 0052bd60: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0052bd61: ret  */ FN_RET(0x0052bcb8); r_esp += 4; return;
}

void f_0052bd64(void) /* sub_52BD64 */
{
    FN_ENTER(0x0052bd64);
    /* 0052bd64: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0052bd65: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 0052bd68: test eax, 0x1000 */ {  u32 a = r_eax; u32 b = 0x1000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052bd6d: je 0x52bd82 */ if (fZ) goto L_0052bd82;
L_0052bd6f:; BB(0x0052bd6f);
    /* 0052bd6f: mov ebp, 4 */ r_ebp = 0x4u;
    /* 0052bd74: mov edx, 4 */ r_edx = 0x4u;
    /* 0052bd79: mov word ptr [ecx + 0x32e], dx */ W16((u32)(r_ecx+0x32eu), (u16)r_edx);
    /* 0052bd80: jmp 0x52bd89 */ goto L_0052bd89;
L_0052bd82:; BB(0x0052bd82);
    /* 0052bd82: movsx ebp, word ptr [ecx + 0x32e] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
L_0052bd89:; BB(0x0052bd89);
    /* 0052bd89: cmp ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052bd8c: je 0x52bdd8 */ if (fZ) goto L_0052bdd8;
L_0052bd8e:; BB(0x0052bd8e);
    /* 0052bd8e: cmp ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052bd91: jl 0x52bd9e */ if ((fS!=fO)) goto L_0052bd9e;
L_0052bd93:; BB(0x0052bd93);
    /* 0052bd93: cmp ebp, 3 */ {  u32 a = r_ebp; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0052bd96: jle 0x52be17 */ if ((fZ||fS!=fO)) goto L_0052be17;
L_0052bd9c:; BB(0x0052bd9c);
    /* 0052bd9c: jmp 0x52be19 */ goto L_0052be19;
L_0052bd9e:; BB(0x0052bd9e);
    /* 0052bd9e: push 0xa000000 */ { u32 v = 0xa000000u; r_esp -= 4; W32(r_esp, v); }
    /* 0052bda3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052bda5: mov edx, 3 */ r_edx = 0x3u;
    /* 0052bdaa: mov word ptr [ecx + 0x32e], dx */ W16((u32)(r_ecx+0x32eu), (u16)r_edx);
    /* 0052bdb1: mov ebp, 1 */ r_ebp = 0x1u;
    /* 0052bdb6: mov word ptr [ecx + 0x330], bp */ W16((u32)(r_ecx+0x330u), (u16)r_ebp);
    /* 0052bdbd: mov edx, 2 */ r_edx = 0x2u;
    /* 0052bdc2: mov word ptr [ecx + 0xb8], dx */ W16((u32)(r_ecx+0xb8u), (u16)r_edx);
    /* 0052bdc9: and eax, 0xfbfbffff */ {  u32 a = r_eax; u32 b = 0xfbfbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0052bdce: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 0052bdd1: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x52bdd6u); f_007b52ec();
    /* 0052bdd6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0052bdd7: ret  */ FN_RET(0x0052bd64); r_esp += 4; return;
L_0052bdd8:; BB(0x0052bdd8);
    /* 0052bdd8: mov ebp, dword ptr [ecx + 0x354] */ r_ebp = R32((u32)(r_ecx+0x354u));
    /* 0052bdde: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0052bde0: mov word ptr [ecx + 0x330], dx */ W16((u32)(r_ecx+0x330u), (u16)r_edx);
    /* 0052bde7: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052bde9: je 0x52be2c */ if (fZ) goto L_0052be2c;
L_0052bdeb:; BB(0x0052bdeb);
    /* 0052bdeb: mov edx, 2 */ r_edx = 0x2u;
    /* 0052bdf0: mov word ptr [ecx + 0x32e], dx */ W16((u32)(r_ecx+0x32eu), (u16)r_edx);
    /* 0052bdf7: mov ebp, 0xa */ r_ebp = 0xau;
    /* 0052bdfc: mov word ptr [ecx + 0xb8], bp */ W16((u32)(r_ecx+0xb8u), (u16)r_ebp);
L_0052be03:; BB(0x0052be03);
    /* 0052be03: push 0xa000000 */ { u32 v = 0xa000000u; r_esp -= 4; W32(r_esp, v); }
    /* 0052be08: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052be0a: and eax, 0xfbfbffff */ {  u32 a = r_eax; u32 b = 0xfbfbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0052be0f: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 0052be12: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x52be17u); f_007b52ec();
L_0052be17:; BB(0x0052be17);
    /* 0052be17: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0052be18: ret  */ FN_RET(0x0052bd64); r_esp += 4; return;
L_0052be19:; BB(0x0052be19);
    /* 0052be19: cmp ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0052be1c: jne 0x52bd9e */ if (!fZ) goto L_0052bd9e;
L_0052be1e:; BB(0x0052be1e);
    /* 0052be1e: mov eax, 5 */ r_eax = 0x5u;
    /* 0052be23: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 0052be2a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0052be2b: ret  */ FN_RET(0x0052bd64); r_esp += 4; return;
L_0052be2c:; BB(0x0052be2c);
    /* 0052be2c: mov edx, 3 */ r_edx = 0x3u;
    /* 0052be31: mov word ptr [ecx + 0x32e], dx */ W16((u32)(r_ecx+0x32eu), (u16)r_edx);
    /* 0052be38: mov ebp, 7 */ r_ebp = 0x7u;
    /* 0052be3d: mov word ptr [ecx + 0xb8], bp */ W16((u32)(r_ecx+0xb8u), (u16)r_ebp);
    /* 0052be44: jmp 0x52be03 */ goto L_0052be03;
}

void f_0052be48(void) /* sub_52BE48 */
{
    FN_ENTER(0x0052be48);
    /* 0052be48: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0052be49: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0052be4b: movsx eax, word ptr [ebp + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32eu));
    /* 0052be52: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0052be54: je 0x52bf14 */ if (fZ) goto L_0052bf14;
L_0052be5a:; BB(0x0052be5a);
    /* 0052be5a: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0052be5d: je 0x52bf14 */ if (fZ) goto L_0052bf14;
L_0052be63:; BB(0x0052be63);
    /* 0052be63: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052be66: jne 0x52beb2 */ if (!fZ) goto L_0052beb2;
L_0052be68:; BB(0x0052be68);
    /* 0052be68: mov edx, dword ptr [ebp + 0x354] */ r_edx = R32((u32)(r_ebp+0x354u));
    /* 0052be6e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0052be70: mov word ptr [ebp + 0x330], ax */ W16((u32)(r_ebp+0x330u), (u16)r_eax);
    /* 0052be77: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052be79: je 0x52bf16 */ if (fZ) goto L_0052bf16;
L_0052be7f:; BB(0x0052be7f);
    /* 0052be7f: mov eax, 2 */ r_eax = 0x2u;
    /* 0052be84: mov word ptr [ebp + 0x32e], ax */ W16((u32)(r_ebp+0x32eu), (u16)r_eax);
    /* 0052be8b: mov edx, 0xa */ r_edx = 0xau;
    /* 0052be90: mov word ptr [ebp + 0xb8], dx */ W16((u32)(r_ebp+0xb8u), (u16)r_edx);
L_0052be97:; BB(0x0052be97);
    /* 0052be97: push 0xa000000 */ { u32 v = 0xa000000u; r_esp -= 4; W32(r_esp, v); }
    /* 0052be9c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052be9e: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 0052bea1: and eax, 0xfbfbffff */ {  u32 a = r_eax; u32 b = 0xfbfbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0052bea6: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 0052bea9: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0052beab: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x52beb0u); f_007b52ec();
    /* 0052beb0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0052beb1: ret  */ FN_RET(0x0052be48); r_esp += 4; return;
L_0052beb2:; BB(0x0052beb2);
    /* 0052beb2: mov eax, 5 */ r_eax = 0x5u;
    /* 0052beb7: mov word ptr [ebp + 0x32e], ax */ W16((u32)(r_ebp+0x32eu), (u16)r_eax);
    /* 0052bebe: mov edx, 1 */ r_edx = 0x1u;
    /* 0052bec3: mov word ptr [ebp + 0x330], dx */ W16((u32)(r_ebp+0x330u), (u16)r_edx);
    /* 0052beca: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0052becc: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x52bed1u); f_007751b0();
    /* 0052bed1: fcomp dword ptr [0x9222d8] */ fx_compare(ST(0), R_F32((u32)(0x9222d8u))); FPOP();
    /* 0052bed7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0052bed9: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0052beda: jbe 0x52beea */ if ((fC||fZ)) goto L_0052beea;
L_0052bedc:; BB(0x0052bedc);
    /* 0052bedc: mov eax, 3 */ r_eax = 0x3u;
    /* 0052bee1: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 0052bee8: jmp 0x52bef6 */ goto L_0052bef6;
L_0052beea:; BB(0x0052beea);
    /* 0052beea: mov eax, 4 */ r_eax = 0x4u;
    /* 0052beef: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
L_0052bef6:; BB(0x0052bef6);
    /* 0052bef6: push 0xa000000 */ { u32 v = 0xa000000u; r_esp -= 4; W32(r_esp, v); }
    /* 0052befb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052befd: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 0052bf00: or eax, 0x200000 */ {  u32 a = r_eax; u32 b = 0x200000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0052bf05: and eax, 0xfbfbffff */ {  u32 a = r_eax; u32 b = 0xfbfbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0052bf0a: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 0052bf0d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0052bf0f: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x52bf14u); f_007b52ec();
L_0052bf14:; BB(0x0052bf14);
    /* 0052bf14: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0052bf15: ret  */ FN_RET(0x0052be48); r_esp += 4; return;
L_0052bf16:; BB(0x0052bf16);
    /* 0052bf16: mov eax, 3 */ r_eax = 0x3u;
    /* 0052bf1b: mov word ptr [ebp + 0x32e], ax */ W16((u32)(r_ebp+0x32eu), (u16)r_eax);
    /* 0052bf22: mov edx, 7 */ r_edx = 0x7u;
    /* 0052bf27: mov word ptr [ebp + 0xb8], dx */ W16((u32)(r_ebp+0xb8u), (u16)r_edx);
    /* 0052bf2e: jmp 0x52be97 */ goto L_0052be97;
}

void f_0052bf60(void) /* sub_52BF60 */
{
    FN_ENTER(0x0052bf60);
    /* 0052bf60: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0052bf61: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0052bf63: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0052bf65: call 0x52bf84 */ r_esp -= 4; W32(r_esp, 0x52bf6au); f_0052bf84();
    /* 0052bf6a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0052bf6e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0052bf70: jne 0x52bf76 */ if (!fZ) goto L_0052bf76;
L_0052bf72:; BB(0x0052bf72);
    /* 0052bf72: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0052bf73: ret 4 */ FN_RET(0x0052bf60); r_esp += 8; return;
L_0052bf76:; BB(0x0052bf76);
    /* 0052bf76: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0052bf77: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x52bf7cu); f_005c2f74();
    /* 0052bf7c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0052bf7d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0052bf7e: ret 4 */ FN_RET(0x0052bf60); r_esp += 8; return;
}

void f_0052bf84(void) /* sub_52BF84 */
{
    FN_ENTER(0x0052bf84);
    /* 0052bf84: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0052bf85: mov ebp, esp */ r_ebp = r_esp;
    /* 0052bf87: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0052bf89: push 0x8d4bcc */ { u32 v = 0x8d4bccu; r_esp -= 4; W32(r_esp, v); }
    /* 0052bf8e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0052bf94: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052bf95: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0052bf9c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0052bf9f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0052bfa2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0052bfa5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0052bfa8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0052bfab: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0052bfae: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0052bfb1: mov dword ptr [ecx], 0xb014e0 */ W32((u32)(r_ecx), 0xb014e0u);
    /* 0052bfb7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0052bfbe: call 0x78638c */ r_esp -= 4; W32(r_esp, 0x52bfc3u); f_0078638c();
    /* 0052bfc3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0052bfc6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0052bfcd: mov esp, ebp */ r_esp = r_ebp;
    /* 0052bfcf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0052bfd0: ret  */ FN_RET(0x0052bf84); r_esp += 4; return;
}

void f_0052bfd4(void) /* sub_52BFD4 */
{
    FN_ENTER(0x0052bfd4);
    /* 0052bfd4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0052bfd5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0052bfd6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0052bfd7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0052bfd8: sub esp, 0x74 */ {  u32 a = r_esp; u32 b = 0x74u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0052bfdb: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0052bfdd: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0052bfdf: fld dword ptr [esp + 0x88] */ FPUSH(R_F32((u32)(r_esp+0x88u)));
    /* 0052bfe6: fstp dword ptr [esp + 0x70] */ W_F32((u32)(r_esp+0x70u), ST(0)); FPOP();
    /* 0052bfea: push dword ptr [esp + 0x94] */ { u32 v = R32((u32)(r_esp+0x94u)); r_esp -= 4; W32(r_esp, v); }
    /* 0052bff1: push dword ptr [esp + 0x94] */ { u32 v = R32((u32)(r_esp+0x94u)); r_esp -= 4; W32(r_esp, v); }
    /* 0052bff8: push dword ptr [esp + 0x94] */ { u32 v = R32((u32)(r_esp+0x94u)); r_esp -= 4; W32(r_esp, v); }
    /* 0052bfff: push dword ptr [ebx + 0x40] */ { u32 v = R32((u32)(r_ebx+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 0052c002: push dword ptr [ebx + 0x3c] */ { u32 v = R32((u32)(r_ebx+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0052c005: push dword ptr [ebx + 0x38] */ { u32 v = R32((u32)(r_ebx+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 0052c008: push dword ptr [esp + 0xa0] */ { u32 v = R32((u32)(r_esp+0xa0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0052c00f: call 0x771f5c */ r_esp -= 4; W32(r_esp, 0x52c014u); f_00771f5c();
    /* 0052c014: fld dword ptr [esp + 0x70] */ FPUSH(R_F32((u32)(r_esp+0x70u)));
    /* 0052c018: fadd dword ptr [esp + 0x98] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x98u));
    /* 0052c01f: mov edx, dword ptr [ebx + 0x38] */ r_edx = R32((u32)(r_ebx+0x38u));
    /* 0052c022: mov ebp, dword ptr [ebx + 0x3c] */ r_ebp = R32((u32)(r_ebx+0x3cu));
    /* 0052c025: mov esi, dword ptr [ebx + 0x40] */ r_esi = R32((u32)(r_ebx+0x40u));
    /* 0052c028: mov edi, dword ptr [ebx + 0x300] */ r_edi = R32((u32)(r_ebx+0x300u));
    /* 0052c02e: mov eax, dword ptr [ebx + 0x304] */ r_eax = R32((u32)(r_ebx+0x304u));
    /* 0052c034: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0052c038: mov dword ptr [ebx + 0x44], edx */ W32((u32)(r_ebx+0x44u), r_edx);
    /* 0052c03b: mov dword ptr [ebx + 0x48], ebp */ W32((u32)(r_ebx+0x48u), r_ebp);
    /* 0052c03e: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
    /* 0052c042: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0052c046: mov eax, dword ptr [ebx + 0x308] */ r_eax = R32((u32)(r_ebx+0x308u));
    /* 0052c04c: mov dword ptr [ebx + 0x4c], esi */ W32((u32)(r_ebx+0x4cu), r_esi);
    /* 0052c04f: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0052c053: mov eax, dword ptr [ebx + 0x30c] */ r_eax = R32((u32)(r_ebx+0x30cu));
    /* 0052c059: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0052c05d: mov eax, dword ptr [ebx + 0x310] */ r_eax = R32((u32)(r_ebx+0x310u));
    /* 0052c063: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0052c067: mov eax, dword ptr [ebx + 0x314] */ r_eax = R32((u32)(r_ebx+0x314u));
    /* 0052c06d: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 0052c071: lea eax, [esp + 0x14] */ r_eax = (u32)(r_esp+0x14u);
    /* 0052c075: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0052c078: call 0x78ea90 */ r_esp -= 4; W32(r_esp, 0x52c07du); f_0078ea90();
    /* 0052c07d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0052c07f: lea ecx, [esp + 8] */ r_ecx = (u32)(r_esp+0x8u);
    /* 0052c083: lea edx, [esp + 0x14] */ r_edx = (u32)(r_esp+0x14u);
    /* 0052c087: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x52c08cu); f_0082ebac();
    /* 0052c08c: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 0052c090: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0052c092: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052c093: lea edx, [ebx + 0x300] */ r_edx = (u32)(r_ebx+0x300u);
    /* 0052c099: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0052c09a: call 0x77fffc */ r_esp -= 4; W32(r_esp, 0x52c09fu); f_0077fffc();
    /* 0052c09f: mov edi, eax */ r_edi = r_eax;
    /* 0052c0a1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052c0a4: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052c0a6: je 0x52c168 */ if (fZ) goto L_0052c168;
L_0052c0ac:; BB(0x0052c0ac);
    /* 0052c0ac: mov edx, dword ptr [edi + 4] */ r_edx = R32((u32)(r_edi+0x4u));
    /* 0052c0af: lea esi, [ebx + 0x30c] */ r_esi = (u32)(r_ebx+0x30cu);
    /* 0052c0b5: add edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0052c0b8: mov ecx, esi */ r_ecx = r_esi;
    /* 0052c0ba: call 0x82f9e0 */ r_esp -= 4; W32(r_esp, 0x52c0bfu); f_0082f9e0();
    /* 0052c0bf: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 0052c0c2: call 0x84d15c */ r_esp -= 4; W32(r_esp, 0x52c0c7u); f_0084d15c();
    /* 0052c0c7: fmul qword ptr [0x922398] */ ST(0) = ST(0) * R_F64((u32)(0x922398u));
    /* 0052c0cd: fdiv qword ptr [0x922390] */ ST(0) = ST(0) / R_F64((u32)(0x922390u));
    /* 0052c0d3: fnstcw word ptr [esp + 0x50] */ W16((u32)(r_esp+0x50u), fcw);
    /* 0052c0d7: movzx eax, word ptr [esp + 0x50] */ r_eax = (u32)R16((u32)(r_esp+0x50u));
    /* 0052c0dc: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0052c0e1: mov dword ptr [esp + 0x58], eax */ W32((u32)(r_esp+0x58u), r_eax);
    /* 0052c0e5: fldcw word ptr [esp + 0x58] */ fcw = R16((u32)(r_esp+0x58u));
    /* 0052c0e9: fistp dword ptr [esp + 0x60] */ W32((u32)(r_esp+0x60u), (u32)fx_int32(ST(0))); FPOP();
    /* 0052c0ed: fldcw word ptr [esp + 0x50] */ fcw = R16((u32)(r_esp+0x50u));
    /* 0052c0f1: mov ebp, dword ptr [esp + 0x60] */ r_ebp = R32((u32)(r_esp+0x60u));
    /* 0052c0f5: mov ecx, esi */ r_ecx = r_esi;
    /* 0052c0f7: mov dword ptr [esp + 0x28], 0 */ W32((u32)(r_esp+0x28u), 0x0u);
    /* 0052c0ff: mov dword ptr [esp + 0x20], 0 */ W32((u32)(r_esp+0x20u), 0x0u);
    /* 0052c107: mov dword ptr [esp + 0x24], 0x3f800000 */ W32((u32)(r_esp+0x24u), 0x3f800000u);
    /* 0052c10f: mov edx, dword ptr [edi + 4] */ r_edx = R32((u32)(r_edi+0x4u));
    /* 0052c112: add edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0052c115: lea edi, [esp + 0x2c] */ r_edi = (u32)(r_esp+0x2cu);
    /* 0052c119: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0052c11a: call 0x83a1f0 */ r_esp -= 4; W32(r_esp, 0x52c11fu); f_0083a1f0();
    /* 0052c11f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0052c121: lea ecx, [esp + 0x20] */ r_ecx = (u32)(r_esp+0x20u);
    /* 0052c125: lea edx, [esp + 0x2c] */ r_edx = (u32)(r_esp+0x2cu);
    /* 0052c129: call 0x82f9e0 */ r_esp -= 4; W32(r_esp, 0x52c12eu); f_0082f9e0();
    /* 0052c12e: fcomp dword ptr [0x9223fc] */ fx_compare(ST(0), R_F32((u32)(0x9223fcu))); FPOP();
    /* 0052c134: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0052c136: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0052c137: jae 0x52c141 */ if (!fC) goto L_0052c141;
L_0052c139:; BB(0x0052c139);
    /* 0052c139: neg ebp */ { u32 x = r_ebp; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 0052c13b: add ebp, 0x10000 */ {  u32 a = r_ebp; u32 b = 0x10000u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
L_0052c141:; BB(0x0052c141);
    /* 0052c141: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 0052c146: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x52c14bu); f_0082d990();
    /* 0052c14b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0052c14d: mov edx, ebp */ r_edx = r_ebp;
    /* 0052c14f: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x52c154u); f_0082d8bc();
    /* 0052c154: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0052c155: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0052c157: mov edx, esi */ r_edx = r_esi;
    /* 0052c159: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x52c15eu); f_0082eab8();
    /* 0052c15e: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0052c163: call 0x82eb80 */ r_esp -= 4; W32(r_esp, 0x52c168u); f_0082eb80();
L_0052c168:; BB(0x0052c168);
    /* 0052c168: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x52c16du); f_008587a5();
    /* 0052c16d: mov dword ptr [esp + 0x68], eax */ W32((u32)(r_esp+0x68u), r_eax);
    /* 0052c171: fild dword ptr [esp + 0x68] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x68u)));
    /* 0052c175: fdiv dword ptr [0x9223f4] */ ST(0) = ST(0) / R_F32((u32)(0x9223f4u));
    /* 0052c17b: fcomp dword ptr [0x9223f0] */ fx_compare(ST(0), R_F32((u32)(0x9223f0u))); FPOP();
    /* 0052c181: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0052c183: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0052c184: jae 0x52c18d */ if (!fC) goto L_0052c18d;
L_0052c186:; BB(0x0052c186);
    /* 0052c186: mov ebp, 0xffffffff */ r_ebp = 0xffffffffu;
    /* 0052c18b: jmp 0x52c192 */ goto L_0052c192;
L_0052c18d:; BB(0x0052c18d);
    /* 0052c18d: mov ebp, 1 */ r_ebp = 0x1u;
L_0052c192:; BB(0x0052c192);
    /* 0052c192: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0052c194: shl ebp, 0xc */ { u32 c = (12u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebp = r;  } }
    /* 0052c197: lea edi, [ebx + 0x30c] */ r_edi = (u32)(r_ebx+0x30cu);
L_0052c19d:; BB(0x0052c19d);
    /* 0052c19d: mov eax, dword ptr [ebx + 0x30c] */ r_eax = R32((u32)(r_ebx+0x30cu));
    /* 0052c1a3: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 0052c1a7: mov eax, dword ptr [ebx + 0x310] */ r_eax = R32((u32)(r_ebx+0x310u));
    /* 0052c1ad: mov dword ptr [esp + 0x3c], eax */ W32((u32)(r_esp+0x3cu), r_eax);
    /* 0052c1b1: mov eax, dword ptr [ebx + 0x314] */ r_eax = R32((u32)(r_ebx+0x314u));
    /* 0052c1b7: mov dword ptr [esp + 0x40], eax */ W32((u32)(r_esp+0x40u), r_eax);
L_0052c1bb:; BB(0x0052c1bb);
    /* 0052c1bb: lea ecx, [esp + 0x44] */ r_ecx = (u32)(r_esp+0x44u);
    /* 0052c1bf: lea edx, [esp + 0x38] */ r_edx = (u32)(r_esp+0x38u);
    /* 0052c1c3: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 0052c1c6: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 0052c1ca: mov eax, dword ptr [ebx + 0x3c] */ r_eax = R32((u32)(r_ebx+0x3cu));
    /* 0052c1cd: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 0052c1d1: mov eax, dword ptr [ebx + 0x40] */ r_eax = R32((u32)(r_ebx+0x40u));
    /* 0052c1d4: mov dword ptr [esp + 0x4c], eax */ W32((u32)(r_esp+0x4cu), r_eax);
    /* 0052c1d8: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x52c1ddu); f_0082ebac();
    /* 0052c1dd: lea eax, [esp + 0x44] */ r_eax = (u32)(r_esp+0x44u);
    /* 0052c1e1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052c1e3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052c1e4: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0052c1e6: call 0x7b4c58 */ r_esp -= 4; W32(r_esp, 0x52c1ebu); f_007b4c58();
    /* 0052c1eb: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052c1ee: je 0x52c22c */ if (fZ) goto L_0052c22c;
L_0052c1f0:; BB(0x0052c1f0);
    /* 0052c1f0: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0052c1f3: cmp esi, 0xf */ {  u32 a = r_esi; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052c1f6: jge 0x52c269 */ if ((fS==fO)) goto L_0052c269;
L_0052c1f8:; BB(0x0052c1f8);
    /* 0052c1f8: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052c1fa: je 0x52c19d */ if (fZ) goto L_0052c19d;
L_0052c1fc:; BB(0x0052c1fc);
    /* 0052c1fc: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 0052c201: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x52c206u); f_0082d990();
    /* 0052c206: mov edx, esi */ r_edx = r_esi;
    /* 0052c208: imul edx, ebp */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_ebp; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0052c20b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0052c20d: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x52c212u); f_0082d8bc();
    /* 0052c212: lea eax, [esp + 0x38] */ r_eax = (u32)(r_esp+0x38u);
    /* 0052c216: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052c217: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0052c219: mov edx, edi */ r_edx = r_edi;
    /* 0052c21b: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x52c220u); f_0082eab8();
    /* 0052c220: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0052c225: call 0x82eb80 */ r_esp -= 4; W32(r_esp, 0x52c22au); f_0082eb80();
    /* 0052c22a: jmp 0x52c1bb */ goto L_0052c1bb;
L_0052c22c:; BB(0x0052c22c);
    /* 0052c22c: mov eax, dword ptr [esp + 0x44] */ r_eax = R32((u32)(r_esp+0x44u));
    /* 0052c230: mov ebp, dword ptr [esp + 0x48] */ r_ebp = R32((u32)(r_esp+0x48u));
    /* 0052c234: mov esi, dword ptr [esp + 0x4c] */ r_esi = R32((u32)(r_esp+0x4cu));
    /* 0052c238: mov dword ptr [ebx + 0x38], eax */ W32((u32)(r_ebx+0x38u), r_eax);
    /* 0052c23b: mov dword ptr [ebx + 0x3c], ebp */ W32((u32)(r_ebx+0x3cu), r_ebp);
    /* 0052c23e: mov dword ptr [ebx + 0x40], esi */ W32((u32)(r_ebx+0x40u), r_esi);
    /* 0052c241: mov dword ptr [ebx + 0x30c], eax */ W32((u32)(r_ebx+0x30cu), r_eax);
    /* 0052c247: mov dword ptr [ebx + 0x310], ebp */ W32((u32)(r_ebx+0x310u), r_ebp);
    /* 0052c24d: mov dword ptr [ebx + 0x314], esi */ W32((u32)(r_ebx+0x314u), r_esi);
    /* 0052c253: add ebx, 0x44 */ {  u32 a = r_ebx; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0052c256: mov ecx, edi */ r_ecx = r_edi;
    /* 0052c258: mov edx, ebx */ r_edx = r_ebx;
    /* 0052c25a: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x52c25fu); f_0082f9c4();
    /* 0052c25f: add esp, 0x74 */ {  u32 a = r_esp; u32 b = 0x74u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0052c262: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0052c263: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0052c264: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0052c265: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0052c266: ret 0x14 */ FN_RET(0x0052bfd4); r_esp += 24; return;
L_0052c269:; BB(0x0052c269);
    /* 0052c269: add esp, 0x74 */ {  u32 a = r_esp; u32 b = 0x74u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0052c26c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0052c26d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0052c26e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0052c26f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0052c270: ret 0x14 */ FN_RET(0x0052bfd4); r_esp += 24; return;
}

