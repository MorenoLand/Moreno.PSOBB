#include "protos.h"

void f_0041f04b(void)
{
    FN_ENTER(0x0041f04b);
    /* 0041f04b: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0041f04d: push 0x1b */ { u32 v = 0x1bu; r_esp -= 4; W32(r_esp, v); }
    /* 0041f04f: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0041f052: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0041f054: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x41f05au); call_ind(t); }
    /* 0041f05a: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0041f05e: mov esi, dword ptr [ebp + 0x684] */ r_esi = R32((u32)(r_ebp+0x684u));
    /* 0041f064: movzx edi, word ptr [ebp + 0x394] */ r_edi = (u32)R16((u32)(r_ebp+0x394u));
    /* 0041f06b: mov word ptr [esp + 0x2e], ax */ W16((u32)(r_esp+0x2eu), (u16)r_eax);
    /* 0041f070: mov eax, dword ptr [ebp + 0x698] */ r_eax = R32((u32)(r_ebp+0x698u));
    /* 0041f076: mov ebp, dword ptr [ebp + 0x69c] */ r_ebp = R32((u32)(r_ebp+0x69cu));
    /* 0041f07c: mov byte ptr [esp + 0x2c], 0x12 */ W8((u32)(r_esp+0x2cu), 0x12u);
    /* 0041f081: mov edx, 0x1b */ r_edx = 0x1bu;
    /* 0041f086: mov byte ptr [esp + 0x2d], 5 */ W8((u32)(r_esp+0x2du), 0x5u);
    /* 0041f08b: mov word ptr [esp + 0x30], dx */ W16((u32)(r_esp+0x30u), (u16)r_edx);
    /* 0041f090: mov word ptr [esp + 0x32], si */ W16((u32)(r_esp+0x32u), (u16)r_esi);
    /* 0041f095: mov dword ptr [esp + 0x34], edi */ W32((u32)(r_esp+0x34u), r_edi);
    /* 0041f099: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 0041f09d: mov dword ptr [esp + 0x3c], ebp */ W32((u32)(r_esp+0x3cu), r_ebp);
    /* 0041f0a1: lea ecx, [esp + 0x2c] */ r_ecx = (u32)(r_esp+0x2cu);
    /* 0041f0a5: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x41f0aau); f_008003e0();
    /* 0041f0aa: jmp 0x41f176 */ goto L_0041f176;
L_0041f176:; BB(0x0041f176);
    /* 0041f176: add esp, 0x6c */ {  u32 a = r_esp; u32 b = 0x6cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041f179: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041f17a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0041f17b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0041f17c: ret 4 */ FN_RET(0x0041f04b); r_esp += 8; return;
}

void f_0041f0af(void)
{
    FN_ENTER(0x0041f0af);
    /* 0041f0af: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0041f0b1: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x41f0b6u); f_00521410();
    /* 0041f0b6: fld dword ptr [ebp + 0x3a8] */ FPUSH(R_F32((u32)(r_ebp+0x3a8u)));
    /* 0041f0bc: fld dword ptr [ebp + 0x3b0] */ FPUSH(R_F32((u32)(r_ebp+0x3b0u)));
    /* 0041f0c2: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0041f0c4: fmul qword ptr [0x8fb9f0] */ ST(0) = ST(0) * R_F64((u32)(0x8fb9f0u));
    /* 0041f0ca: fdiv qword ptr [0x8fb9e8] */ ST(0) = ST(0) / R_F64((u32)(0x8fb9e8u));
    /* 0041f0d0: fnstcw word ptr [esp + 0x40] */ W16((u32)(r_esp+0x40u), fcw);
    /* 0041f0d4: movzx eax, word ptr [esp + 0x40] */ r_eax = (u32)R16((u32)(r_esp+0x40u));
    /* 0041f0d9: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0041f0de: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 0041f0e2: fldcw word ptr [esp + 0x48] */ fcw = R16((u32)(r_esp+0x48u));
    /* 0041f0e6: fistp dword ptr [esp + 0x58] */ W32((u32)(r_esp+0x58u), (u32)fx_int32(ST(0))); FPOP();
    /* 0041f0ea: fldcw word ptr [esp + 0x40] */ fcw = R16((u32)(r_esp+0x40u));
    /* 0041f0ee: mov eax, dword ptr [esp + 0x58] */ r_eax = R32((u32)(r_esp+0x58u));
    /* 0041f0f2: push 0x600 */ { u32 v = 0x600u; r_esp -= 4; W32(r_esp, v); }
    /* 0041f0f7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041f0f8: push dword ptr [ebp + 0x60] */ { u32 v = R32((u32)(r_ebp+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 0041f0fb: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x41f100u); f_007a8c74();
    /* 0041f100: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041f103: mov dword ptr [ebp + 0x60], eax */ W32((u32)(r_ebp+0x60u), r_eax);
    /* 0041f106: mov ecx, eax */ r_ecx = r_eax;
    /* 0041f108: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x41f10du); f_0082dcbc();
    /* 0041f10d: fld dword ptr [ebp + 0x888] */ FPUSH(R_F32((u32)(r_ebp+0x888u)));
    /* 0041f113: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0041f115: fadd dword ptr [ebp + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x38u));
    /* 0041f118: mov ecx, dword ptr [ebp + 0x60] */ r_ecx = R32((u32)(r_ebp+0x60u));
    /* 0041f11b: fstp dword ptr [ebp + 0x38] */ W_F32((u32)(r_ebp+0x38u), ST(0)); FPOP();
    /* 0041f11e: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x41f123u); f_0082ddd8();
    /* 0041f123: fld dword ptr [ebp + 0x888] */ FPUSH(R_F32((u32)(r_ebp+0x888u)));
    /* 0041f129: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0041f12b: fadd dword ptr [ebp + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x40u));
    /* 0041f12e: fstp dword ptr [ebp + 0x40] */ W_F32((u32)(r_ebp+0x40u), ST(0)); FPOP();
    /* 0041f131: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0041f133: call 0x41a04c */ r_esp -= 4; W32(r_esp, 0x41f138u); f_0041a04c();
    /* 0041f138: mov eax, dword ptr [ebp + 0x870] */ r_eax = R32((u32)(r_ebp+0x870u));
    /* 0041f13e: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0041f141: mov dword ptr [ebp + 0x870], eax */ W32((u32)(r_ebp+0x870u), r_eax);
    /* 0041f147: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041f14a: jle 0x41f15d */ if ((fZ||fS!=fO)) goto L_0041f15d;
L_0041f14c:; BB(0x0041f14c);
    /* 0041f14c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0041f14e: call 0x41a874 */ r_esp -= 4; W32(r_esp, 0x41f153u); f_0041a874();
    /* 0041f153: mov dword ptr [ebp + 0x870], 0 */ W32((u32)(r_ebp+0x870u), 0x0u);
L_0041f15d:; BB(0x0041f15d);
    /* 0041f15d: lea edx, [ebp + 0x644] */ r_edx = (u32)(r_ebp+0x644u);
    /* 0041f163: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0041f165: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041f166: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041f167: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041f168: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0041f169: push 0x325 */ { u32 v = 0x325u; r_esp -= 4; W32(r_esp, v); }
    /* 0041f16e: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x41f173u); f_008144b0();
    /* 0041f173: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041f176: add esp, 0x6c */ {  u32 a = r_esp; u32 b = 0x6cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041f179: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041f17a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0041f17b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0041f17c: ret 4 */ FN_RET(0x0041f0af); r_esp += 8; return;
}

void f_0041f176(void)
{
    FN_ENTER(0x0041f176);
    /* 0041f176: add esp, 0x6c */ {  u32 a = r_esp; u32 b = 0x6cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041f179: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041f17a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0041f17b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0041f17c: ret 4 */ FN_RET(0x0041f176); r_esp += 8; return;
}

void f_0041f21c(void) /* sub_41F21C */
{
    FN_ENTER(0x0041f21c);
    /* 0041f21c: mov eax, dword ptr [ecx + 0x6a0] */ r_eax = R32((u32)(r_ecx+0x6a0u));
    /* 0041f222: mov edx, dword ptr [ecx + 0x6a4] */ r_edx = R32((u32)(r_ecx+0x6a4u));
    /* 0041f228: mov dword ptr [ecx + 0x39c], eax */ W32((u32)(r_ecx+0x39cu), r_eax);
    /* 0041f22e: mov dword ptr [ecx + 0x3a4], edx */ W32((u32)(r_ecx+0x3a4u), r_edx);
    /* 0041f234: ret  */ FN_RET(0x0041f21c); r_esp += 4; return;
}

void f_0041f238(void) /* sub_41F238 */
{
    FN_ENTER(0x0041f238);
    /* 0041f238: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0041f239: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0041f23a: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0041f23d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0041f23f: mov eax, dword ptr [esp + 0x4c] */ r_eax = R32((u32)(r_esp+0x4cu));
    /* 0041f243: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0041f246: ja 0x41f5bb */ if ((!fC&&!fZ)) goto L_0041f5bb;
L_0041f24c:; BB(0x0041f24c);
    /* 0041f24c: mov eax, dword ptr [eax*4 + 0x8fb514] */ r_eax = R32((u32)(r_eax*4+0x8fb514u));
    /* 0041f253: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0041f5bb:; BB(0x0041f5bb);
    /* 0041f5bb: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041f5be: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0041f5bf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0041f5c0: ret 8 */ FN_RET(0x0041f238); r_esp += 12; return;
}

void f_0041f255(void)
{
    FN_ENTER(0x0041f255);
    /* 0041f255: mov eax, dword ptr [ebx + 0x8c0] */ r_eax = R32((u32)(r_ebx+0x8c0u));
    /* 0041f25b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041f25d: jne 0x41f273 */ if (!fZ) goto L_0041f273;
L_0041f25f:; BB(0x0041f25f);
    /* 0041f25f: mov eax, dword ptr [ebx + 0x86c] */ r_eax = R32((u32)(r_ebx+0x86cu));
    /* 0041f265: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041f268: jne 0x41f5bb */ if (!fZ) goto L_0041f5bb;
L_0041f26e:; BB(0x0041f26e);
    /* 0041f26e: jmp 0x41f5c3 */ goto L_0041f5c3;
L_0041f273:; BB(0x0041f273);
    /* 0041f273: mov edi, dword ptr [ebx + 0x684] */ r_edi = R32((u32)(r_ebx+0x684u));
    /* 0041f279: cmp edi, 0x32 */ {  u32 a = r_edi; u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041f27c: jge 0x41f29a */ if ((fS==fO)) goto L_0041f29a;
L_0041f27e:; BB(0x0041f27e);
    /* 0041f27e: call 0x420a44 */ r_esp -= 4; W32(r_esp, 0x41f283u); f_00420a44();
    /* 0041f283: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041f285: jne 0x41f28e */ if (!fZ) goto L_0041f28e;
L_0041f287:; BB(0x0041f287);
    /* 0041f287: mov edx, 0x9a3cb0 */ r_edx = 0x9a3cb0u;
    /* 0041f28c: jmp 0x41f2b7 */ goto L_0041f2b7;
L_0041f28e:; BB(0x0041f28e);
    /* 0041f28e: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041f291: jne 0x41f2b7 */ if (!fZ) goto L_0041f2b7;
L_0041f293:; BB(0x0041f293);
    /* 0041f293: mov edx, 0x9a3d28 */ r_edx = 0x9a3d28u;
    /* 0041f298: jmp 0x41f2b7 */ goto L_0041f2b7;
L_0041f29a:; BB(0x0041f29a);
    /* 0041f29a: add edi, -0x32 */ {  u32 a = r_edi; u32 b = 0xffffffceu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0041f29d: call 0x420a44 */ r_esp -= 4; W32(r_esp, 0x41f2a2u); f_00420a44();
    /* 0041f2a2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041f2a4: jne 0x41f2ad */ if (!fZ) goto L_0041f2ad;
L_0041f2a6:; BB(0x0041f2a6);
    /* 0041f2a6: mov edx, 0x9a3cf0 */ r_edx = 0x9a3cf0u;
    /* 0041f2ab: jmp 0x41f2b7 */ goto L_0041f2b7;
L_0041f2ad:; BB(0x0041f2ad);
    /* 0041f2ad: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041f2b0: jne 0x41f2b7 */ if (!fZ) goto L_0041f2b7;
L_0041f2b2:; BB(0x0041f2b2);
    /* 0041f2b2: mov edx, 0x9a3d78 */ r_edx = 0x9a3d78u;
L_0041f2b7:; BB(0x0041f2b7);
    /* 0041f2b7: mov ecx, dword ptr [ebx + 0x684] */ r_ecx = R32((u32)(r_ebx+0x684u));
L_0041f2bd:; BB(0x0041f2bd);
    /* 0041f2bd: mov eax, dword ptr [edx + edi*4] */ r_eax = R32((u32)(r_edx+r_edi*4));
    /* 0041f2c0: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0041f2c3: cmp eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041f2c6: jne 0x41f680 */ if (!fZ) goto L_0041f680;
L_0041f2cc:; BB(0x0041f2cc);
    /* 0041f2cc: mov dword ptr [ebx + 0x684], 0 */ W32((u32)(r_ebx+0x684u), 0x0u);
    /* 0041f2d6: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0041f2d8: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0041f2da: jmp 0x41f2bd */ goto L_0041f2bd;
L_0041f5bb:; BB(0x0041f5bb);
    /* 0041f5bb: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041f5be: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0041f5bf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0041f5c0: ret 8 */ FN_RET(0x0041f255); r_esp += 12; return;
L_0041f5c3:; BB(0x0041f5c3);
    /* 0041f5c3: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 0041f5c6: mov edx, dword ptr [ebx + 0x40] */ r_edx = R32((u32)(r_ebx+0x40u));
    /* 0041f5c9: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 0041f5d1: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0041f5d4: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0041f5d8: lea edi, [esp] */ r_edi = (u32)(r_esp);
    /* 0041f5db: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0041f5dc: call 0x7828e4 */ r_esp -= 4; W32(r_esp, 0x41f5e1u); f_007828e4();
    /* 0041f5e1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0041f5e2: fcomp dword ptr [0x8fbd30] */ fx_compare(ST(0), R_F32((u32)(0x8fbd30u))); FPOP();
    /* 0041f5e8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0041f5ea: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0041f5eb: jae 0x41f5bb */ if (!fC) goto L_0041f5bb;
L_0041f5ed:; BB(0x0041f5ed);
    /* 0041f5ed: mov edi, dword ptr [ebx + 0x684] */ r_edi = R32((u32)(r_ebx+0x684u));
    /* 0041f5f3: cmp edi, 0x32 */ {  u32 a = r_edi; u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041f5f6: jge 0x41f614 */ if ((fS==fO)) goto L_0041f614;
L_0041f5f8:; BB(0x0041f5f8);
    /* 0041f5f8: call 0x420a44 */ r_esp -= 4; W32(r_esp, 0x41f5fdu); f_00420a44();
    /* 0041f5fd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041f5ff: jne 0x41f608 */ if (!fZ) goto L_0041f608;
L_0041f601:; BB(0x0041f601);
    /* 0041f601: mov edx, 0x9a3cb0 */ r_edx = 0x9a3cb0u;
    /* 0041f606: jmp 0x41f631 */ goto L_0041f631;
L_0041f608:; BB(0x0041f608);
    /* 0041f608: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041f60b: jne 0x41f631 */ if (!fZ) goto L_0041f631;
L_0041f60d:; BB(0x0041f60d);
    /* 0041f60d: mov edx, 0x9a3d28 */ r_edx = 0x9a3d28u;
    /* 0041f612: jmp 0x41f631 */ goto L_0041f631;
L_0041f614:; BB(0x0041f614);
    /* 0041f614: add edi, -0x32 */ {  u32 a = r_edi; u32 b = 0xffffffceu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0041f617: call 0x420a44 */ r_esp -= 4; W32(r_esp, 0x41f61cu); f_00420a44();
    /* 0041f61c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041f61e: jne 0x41f627 */ if (!fZ) goto L_0041f627;
L_0041f620:; BB(0x0041f620);
    /* 0041f620: mov edx, 0x9a3cf0 */ r_edx = 0x9a3cf0u;
    /* 0041f625: jmp 0x41f631 */ goto L_0041f631;
L_0041f627:; BB(0x0041f627);
    /* 0041f627: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041f62a: jne 0x41f631 */ if (!fZ) goto L_0041f631;
L_0041f62c:; BB(0x0041f62c);
    /* 0041f62c: mov edx, 0x9a3d78 */ r_edx = 0x9a3d78u;
L_0041f631:; BB(0x0041f631);
    /* 0041f631: mov ecx, dword ptr [ebx + 0x684] */ r_ecx = R32((u32)(r_ebx+0x684u));
L_0041f637:; BB(0x0041f637);
    /* 0041f637: mov eax, dword ptr [edx + edi*4] */ r_eax = R32((u32)(r_edx+r_edi*4));
    /* 0041f63a: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0041f63d: cmp eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041f640: jne 0x41f652 */ if (!fZ) goto L_0041f652;
L_0041f642:; BB(0x0041f642);
    /* 0041f642: mov dword ptr [ebx + 0x684], 0 */ W32((u32)(r_ebx+0x684u), 0x0u);
    /* 0041f64c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0041f64e: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0041f650: jmp 0x41f637 */ goto L_0041f637;
L_0041f652:; BB(0x0041f652);
    /* 0041f652: cmp eax, 0x21 */ {  u32 a = r_eax; u32 b = 0x21u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041f655: je 0x41f66d */ if (fZ) goto L_0041f66d;
L_0041f657:; BB(0x0041f657);
    /* 0041f657: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041f658: mov dword ptr [ebx + 0x684], ecx */ W32((u32)(r_ebx+0x684u), r_ecx);
    /* 0041f65e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0041f660: call 0x41a808 */ r_esp -= 4; W32(r_esp, 0x41f665u); f_0041a808();
    /* 0041f665: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041f668: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0041f669: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0041f66a: ret 8 */ FN_RET(0x0041f255); r_esp += 12; return;
L_0041f66d:; BB(0x0041f66d);
    /* 0041f66d: mov dword ptr [ebx + 0x684], 0x32 */ W32((u32)(r_ebx+0x684u), 0x32u);
    /* 0041f677: mov ecx, 0x32 */ r_ecx = 0x32u;
    /* 0041f67c: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0041f67e: jmp 0x41f637 */ goto L_0041f637;
L_0041f680:; BB(0x0041f680);
    /* 0041f680: cmp eax, 0x21 */ {  u32 a = r_eax; u32 b = 0x21u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041f683: je 0x41f6a5 */ if (fZ) goto L_0041f6a5;
L_0041f685:; BB(0x0041f685);
    /* 0041f685: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041f686: mov dword ptr [ebx + 0x684], ecx */ W32((u32)(r_ebx+0x684u), r_ecx);
    /* 0041f68c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0041f68e: call 0x41a808 */ r_esp -= 4; W32(r_esp, 0x41f693u); f_0041a808();
    /* 0041f693: mov dword ptr [ebx + 0x8c0], 0 */ W32((u32)(r_ebx+0x8c0u), 0x0u);
    /* 0041f69d: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041f6a0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0041f6a1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0041f6a2: ret 8 */ FN_RET(0x0041f255); r_esp += 12; return;
L_0041f6a5:; BB(0x0041f6a5);
    /* 0041f6a5: mov dword ptr [ebx + 0x684], 0x32 */ W32((u32)(r_ebx+0x684u), 0x32u);
    /* 0041f6af: mov ecx, 0x32 */ r_ecx = 0x32u;
    /* 0041f6b4: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0041f6b6: jmp 0x41f2bd */ goto L_0041f2bd;
}

void f_0041f2dc(void)
{
    FN_ENTER(0x0041f2dc);
    /* 0041f2dc: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0041f2de: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x41f2e3u); f_007751b0();
    /* 0041f2e3: fld dword ptr [0x8fbd34] */ FPUSH(R_F32((u32)(0x8fbd34u)));
    /* 0041f2e9: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0041f2eb: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 0041f2ef: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 0041f2f4: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0041f2f9: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 0041f2fd: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 0041f301: fistp dword ptr [esp + 0x30] */ W32((u32)(r_esp+0x30u), (u32)fx_int32(ST(0))); FPOP();
    /* 0041f305: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 0041f309: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
    /* 0041f30d: mov ecx, edi */ r_ecx = r_edi;
    /* 0041f30f: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x41f314u); f_0082dcbc();
    /* 0041f314: fld dword ptr [0xa436d8] */ FPUSH(R_F32((u32)(0xa436d8u)));
    /* 0041f31a: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0041f31c: fstp dword ptr [ebx + 0x38] */ W_F32((u32)(r_ebx+0x38u), ST(0)); FPOP();
    /* 0041f31f: mov ecx, edi */ r_ecx = r_edi;
    /* 0041f321: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x41f326u); f_0082ddd8();
    /* 0041f326: fld dword ptr [0xa436d8] */ FPUSH(R_F32((u32)(0xa436d8u)));
    /* 0041f32c: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0041f32e: fstp dword ptr [ebx + 0x40] */ W_F32((u32)(r_ebx+0x40u), ST(0)); FPOP();
    /* 0041f331: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0041f333: call 0x41a004 */ r_esp -= 4; W32(r_esp, 0x41f338u); f_0041a004();
    /* 0041f338: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041f33b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0041f33c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0041f33d: ret 8 */ FN_RET(0x0041f2dc); r_esp += 12; return;
}

void f_0041f340(void)
{
    FN_ENTER(0x0041f340);
    /* 0041f340: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0041f342: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0041f344: call dword ptr [eax + 0x178] */ { u32 t = R32((u32)(r_eax+0x178u)); r_esp -= 4; W32(r_esp, 0x41f34au); call_ind(t); }
    /* 0041f34a: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0041f34c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0041f34e: call dword ptr [eax + 0x17c] */ { u32 t = R32((u32)(r_eax+0x17cu)); r_esp -= 4; W32(r_esp, 0x41f354u); call_ind(t); }
    /* 0041f354: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041f357: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0041f358: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0041f359: ret 8 */ FN_RET(0x0041f340); r_esp += 12; return;
}

void f_0041f35c(void)
{
    FN_ENTER(0x0041f35c);
    /* 0041f35c: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0041f35e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0041f360: call dword ptr [eax + 0x188] */ { u32 t = R32((u32)(r_eax+0x188u)); r_esp -= 4; W32(r_esp, 0x41f366u); call_ind(t); }
    /* 0041f366: mov dword ptr [ebx + 0x3ec], 2 */ W32((u32)(r_ebx+0x3ecu), 0x2u);
    /* 0041f370: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0041f372: call 0x41a018 */ r_esp -= 4; W32(r_esp, 0x41f377u); f_0041a018();
    /* 0041f377: mov eax, dword ptr [ebx + 0x3c8] */ r_eax = R32((u32)(r_ebx+0x3c8u));
    /* 0041f37d: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0041f37f: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0041f384: and eax, 0xfffffc7f */ {  u32 a = r_eax; u32 b = 0xfffffc7fu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0041f389: mov dword ptr [ebx + 0x3c8], eax */ W32((u32)(r_ebx+0x3c8u), r_eax);
    /* 0041f38f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0041f391: call dword ptr [edx + 0x174] */ { u32 t = R32((u32)(r_edx+0x174u)); r_esp -= 4; W32(r_esp, 0x41f397u); call_ind(t); }
    /* 0041f397: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0041f399: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0041f39b: call dword ptr [eax + 0x180] */ { u32 t = R32((u32)(r_eax+0x180u)); r_esp -= 4; W32(r_esp, 0x41f3a1u); call_ind(t); }
    /* 0041f3a1: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 0041f3a5: cmp eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041f3a8: je 0x41f6bb */ if (fZ) goto L_0041f6bb;
L_0041f3ae:; BB(0x0041f3ae);
    /* 0041f3ae: add dword ptr [ebx + 0x6e4], 1 */ { u32 ad = (u32)(r_ebx+0x6e4u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_0041f3b5:; BB(0x0041f3b5);
    /* 0041f3b5: mov edx, dword ptr [ebx + 0x690] */ r_edx = R32((u32)(r_ebx+0x690u));
    /* 0041f3bb: mov edi, dword ptr [edx + 0xc] */ r_edi = R32((u32)(r_edx+0xcu));
    /* 0041f3be: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0041f3c0: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0041f3c2: jle 0x41f3d4 */ if ((fZ||fS!=fO)) goto L_0041f3d4;
L_0041f3c4:; BB(0x0041f3c4);
    /* 0041f3c4: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 0041f3c6: mov edi, dword ptr [edx + 4] */ r_edi = R32((u32)(r_edx+0x4u));
    /* 0041f3c9: mov dword ptr [ecx + eax*4], edi */ W32((u32)(r_ecx+r_eax*4), r_edi);
    /* 0041f3cc: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0041f3cf: cmp eax, dword ptr [edx + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0xcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041f3d2: jl 0x41f3c4 */ if ((fS!=fO)) goto L_0041f3c4;
L_0041f3d4:; BB(0x0041f3d4);
    /* 0041f3d4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0041f3d6: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 0041f3d9: fild dword ptr [ebx + 0x6e4] */ FPUSH((long double)(i32)R32((u32)(r_ebx+0x6e4u)));
    /* 0041f3df: fmul dword ptr [0x8fbf60] */ ST(0) = ST(0) * R_F32((u32)(0x8fbf60u));
    /* 0041f3e5: fadd dword ptr [0x8fbf64] */ ST(0) = ST(0) + R_F32((u32)(0x8fbf64u));
    /* 0041f3eb: mov dword ptr [ebx + 0x884], 0 */ W32((u32)(r_ebx+0x884u), 0x0u);
    /* 0041f3f5: fstp dword ptr [ebx + 0x888] */ W_F32((u32)(r_ebx+0x888u), ST(0)); FPOP();
    /* 0041f3fb: mov dword ptr [ebx + 0x86c], eax */ W32((u32)(r_ebx+0x86cu), r_eax);
    /* 0041f401: mov dword ptr [ebx + 0x870], eax */ W32((u32)(r_ebx+0x870u), r_eax);
    /* 0041f407: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041f40a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0041f40b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0041f40c: ret 8 */ FN_RET(0x0041f35c); r_esp += 12; return;
L_0041f6bb:; BB(0x0041f6bb);
    /* 0041f6bb: mov dword ptr [ebx + 0x6e4], 0 */ W32((u32)(r_ebx+0x6e4u), 0x0u);
    /* 0041f6c5: jmp 0x41f3b5 */ goto L_0041f3b5;
}

void f_0041f40f(void)
{
    FN_ENTER(0x0041f40f);
    /* 0041f40f: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0041f411: push 0x1b */ { u32 v = 0x1bu; r_esp -= 4; W32(r_esp, v); }
    /* 0041f413: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0041f415: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0041f417: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x41f41du); call_ind(t); }
    /* 0041f41d: movzx eax, word ptr [ebx + 0x1c] */ r_eax = (u32)R16((u32)(r_ebx+0x1cu));
    /* 0041f421: mov edi, dword ptr [ebx + 0x684] */ r_edi = R32((u32)(r_ebx+0x684u));
    /* 0041f427: mov byte ptr [esp + 0xc], 0x12 */ W8((u32)(r_esp+0xcu), 0x12u);
    /* 0041f42c: mov edx, 0x1b */ r_edx = 0x1bu;
    /* 0041f431: mov byte ptr [esp + 0xd], 5 */ W8((u32)(r_esp+0xdu), 0x5u);
    /* 0041f436: mov word ptr [esp + 0xe], ax */ W16((u32)(r_esp+0xeu), (u16)r_eax);
    /* 0041f43b: movzx eax, word ptr [ebx + 0x394] */ r_eax = (u32)R16((u32)(r_ebx+0x394u));
    /* 0041f442: mov word ptr [esp + 0x10], dx */ W16((u32)(r_esp+0x10u), (u16)r_edx);
    /* 0041f447: mov word ptr [esp + 0x12], di */ W16((u32)(r_esp+0x12u), (u16)r_edi);
    /* 0041f44c: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0041f450: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 0041f454: mov eax, dword ptr [ebx + 0x698] */ r_eax = R32((u32)(r_ebx+0x698u));
    /* 0041f45a: mov ebx, dword ptr [ebx + 0x69c] */ r_ebx = R32((u32)(r_ebx+0x69cu));
    /* 0041f460: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0041f464: mov dword ptr [esp + 0x1c], ebx */ W32((u32)(r_esp+0x1cu), r_ebx);
    /* 0041f468: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x41f46du); f_008003e0();
    /* 0041f46d: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041f470: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0041f471: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0041f472: ret 8 */ FN_RET(0x0041f40f); r_esp += 12; return;
}

void f_0041f475(void)
{
    FN_ENTER(0x0041f475);
    /* 0041f475: mov eax, dword ptr [ebx + 0x86c] */ r_eax = R32((u32)(r_ebx+0x86cu));
    /* 0041f47b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041f47d: jne 0x41f52a */ if (!fZ) goto L_0041f52a;
L_0041f483:; BB(0x0041f483);
    /* 0041f483: mov edx, dword ptr [ebx + 0x870] */ r_edx = R32((u32)(r_ebx+0x870u));
    /* 0041f489: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0041f48c: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
    /* 0041f490: fild dword ptr [esp + 0x38] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x38u)));
    /* 0041f494: fcomp dword ptr [0x8fbeac] */ fx_compare(ST(0), R_F32((u32)(0x8fbeacu))); FPOP();
    /* 0041f49a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0041f49c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0041f49d: jae 0x41f4aa */ if (!fC) goto L_0041f4aa;
L_0041f49f:; BB(0x0041f49f);
    /* 0041f49f: mov dword ptr [ebx + 0x870], edx */ W32((u32)(r_ebx+0x870u), r_edx);
    /* 0041f4a5: jmp 0x41f5a2 */ goto L_0041f5a2;
L_0041f4aa:; BB(0x0041f4aa);
    /* 0041f4aa: mov ecx, dword ptr [ebx + 0x6e0] */ r_ecx = R32((u32)(r_ebx+0x6e0u));
    /* 0041f4b0: mov dword ptr [ebx + 0x870], 0 */ W32((u32)(r_ebx+0x870u), 0x0u);
    /* 0041f4ba: mov dword ptr [ebx + 0x86c], 1 */ W32((u32)(r_ebx+0x86cu), 0x1u);
    /* 0041f4c4: call 0x427bb4 */ r_esp -= 4; W32(r_esp, 0x41f4c9u); f_00427bb4();
    /* 0041f4c9: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0041f4cb: call 0x419ff0 */ r_esp -= 4; W32(r_esp, 0x41f4d0u); f_00419ff0();
    /* 0041f4d0: fld dword ptr [ebx + 0x38] */ FPUSH(R_F32((u32)(r_ebx+0x38u)));
    /* 0041f4d3: fld dword ptr [ebx + 0x40] */ FPUSH(R_F32((u32)(r_ebx+0x40u)));
    /* 0041f4d6: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0041f4d8: fmul qword ptr [0x8fb9e0] */ ST(0) = ST(0) * R_F64((u32)(0x8fb9e0u));
    /* 0041f4de: fdiv qword ptr [0x8fb9d8] */ ST(0) = ST(0) / R_F64((u32)(0x8fb9d8u));
    /* 0041f4e4: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 0041f4e8: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 0041f4ed: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0041f4f2: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 0041f4f6: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 0041f4fa: fistp dword ptr [esp + 0x30] */ W32((u32)(r_esp+0x30u), (u32)fx_int32(ST(0))); FPOP();
    /* 0041f4fe: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 0041f502: mov ecx, dword ptr [esp + 0x30] */ r_ecx = R32((u32)(r_esp+0x30u));
    /* 0041f506: add ecx, 0x8000 */ {  u32 a = r_ecx; u32 b = 0x8000u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0041f50c: mov dword ptr [ebx + 0x60], ecx */ W32((u32)(r_ebx+0x60u), r_ecx);
    /* 0041f50f: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x41f514u); f_0082dcbc();
    /* 0041f514: mov ecx, dword ptr [ebx + 0x60] */ r_ecx = R32((u32)(r_ebx+0x60u));
    /* 0041f517: fstp dword ptr [ebx + 0x3a8] */ W_F32((u32)(r_ebx+0x3a8u), ST(0)); FPOP();
    /* 0041f51d: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x41f522u); f_0082ddd8();
    /* 0041f522: fstp dword ptr [ebx + 0x3b0] */ W_F32((u32)(r_ebx+0x3b0u), ST(0)); FPOP();
    /* 0041f528: jmp 0x41f5a2 */ goto L_0041f5a2;
L_0041f52a:; BB(0x0041f52a);
    /* 0041f52a: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041f52d: jne 0x41f5a2 */ if (!fZ) goto L_0041f5a2;
L_0041f52f:; BB(0x0041f52f);
    /* 0041f52f: fld dword ptr [0x8fbedc] */ FPUSH(R_F32((u32)(0x8fbedcu)));
    /* 0041f535: fadd dword ptr [ebx + 0x884] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x884u));
    /* 0041f53b: fld dword ptr [ebx + 0x888] */ FPUSH(R_F32((u32)(r_ebx+0x888u)));
    /* 0041f541: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0041f543: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0041f545: fld dword ptr [ebx + 0x3a8] */ FPUSH(R_F32((u32)(r_ebx+0x3a8u)));
    /* 0041f54b: fld dword ptr [ebx + 0x3b0] */ FPUSH(R_F32((u32)(r_ebx+0x3b0u)));
    /* 0041f551: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0041f552: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0041f554: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0041f556: jb 0x41f55a */ if (fC) goto L_0041f55a;
L_0041f558:; BB(0x0041f558);
    /* 0041f558: fst st(2) */ ST(2) = ST(0);
L_0041f55a:; BB(0x0041f55a);
    /* 0041f55a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0041f55c: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0041f55e: fadd dword ptr [ebx + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x38u));
    /* 0041f561: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0041f563: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 0041f565: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0041f567: fadd dword ptr [ebx + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x40u));
    /* 0041f56a: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0041f56c: fstp dword ptr [ebx + 0x884] */ W_F32((u32)(r_ebx+0x884u), ST(0)); FPOP();
    /* 0041f572: fstp dword ptr [ebx + 0x38] */ W_F32((u32)(r_ebx+0x38u), ST(0)); FPOP();
    /* 0041f575: fstp dword ptr [ebx + 0x40] */ W_F32((u32)(r_ebx+0x40u), ST(0)); FPOP();
    /* 0041f578: call 0x41a04c */ r_esp -= 4; W32(r_esp, 0x41f57du); f_0041a04c();
    /* 0041f57d: mov eax, dword ptr [ebx + 0x870] */ r_eax = R32((u32)(r_ebx+0x870u));
    /* 0041f583: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0041f586: mov dword ptr [ebx + 0x870], eax */ W32((u32)(r_ebx+0x870u), r_eax);
    /* 0041f58c: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041f58f: jle 0x41f5a2 */ if ((fZ||fS!=fO)) goto L_0041f5a2;
L_0041f591:; BB(0x0041f591);
    /* 0041f591: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0041f593: call 0x41a874 */ r_esp -= 4; W32(r_esp, 0x41f598u); f_0041a874();
    /* 0041f598: mov dword ptr [ebx + 0x870], 0 */ W32((u32)(r_ebx+0x870u), 0x0u);
L_0041f5a2:; BB(0x0041f5a2);
    /* 0041f5a2: lea edx, [ebx + 0x644] */ r_edx = (u32)(r_ebx+0x644u);
    /* 0041f5a8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0041f5aa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041f5ab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041f5ac: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041f5ad: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0041f5ae: push 0x325 */ { u32 v = 0x325u; r_esp -= 4; W32(r_esp, v); }
    /* 0041f5b3: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x41f5b8u); f_008144b0();
    /* 0041f5b8: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041f5bb: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041f5be: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0041f5bf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0041f5c0: ret 8 */ FN_RET(0x0041f475); r_esp += 12; return;
}

void f_0041f5bb(void)
{
    FN_ENTER(0x0041f5bb);
    /* 0041f5bb: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041f5be: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0041f5bf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0041f5c0: ret 8 */ FN_RET(0x0041f5bb); r_esp += 12; return;
}

void f_0041f6cc(void) /* sub_41F6CC */
{
    FN_ENTER(0x0041f6cc);
    /* 0041f6cc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0041f6cd: mov ebx, esp */ r_ebx = r_esp;
    /* 0041f6cf: and esp, 0xfffffff8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 0041f6d2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0041f6d3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0041f6d4: mov ebp, dword ptr [ebx + 4] */ r_ebp = R32((u32)(r_ebx+0x4u));
    /* 0041f6d7: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 0041f6db: mov ebp, esp */ r_ebp = r_esp;
    /* 0041f6dd: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0041f6df: push 0x8cd6ae */ { u32 v = 0x8cd6aeu; r_esp -= 4; W32(r_esp, v); }
    /* 0041f6e4: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0041f6ea: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041f6eb: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0041f6f2: sub esp, 0x84 */ {  u32 a = r_esp; u32 b = 0x84u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0041f6f8: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0041f6fb: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0041f6fe: mov dword ptr [ebp - 0x30], edi */ W32((u32)(r_ebp+0xffffffd0u), r_edi);
    /* 0041f701: mov dword ptr [ebp - 0x2c], esi */ W32((u32)(r_ebp+0xffffffd4u), r_esi);
    /* 0041f704: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0041f707: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 0041f70a: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0041f70d: ja 0x41fd78 */ if ((!fC&&!fZ)) goto L_0041fd78;
L_0041f713:; BB(0x0041f713);
    /* 0041f713: mov eax, dword ptr [eax*4 + 0x8fb544] */ r_eax = R32((u32)(r_eax*4+0x8fb544u));
    /* 0041f71a: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0041fd78:; BB(0x0041fd78);
    /* 0041fd78: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 0041fd7b: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 0041fd7e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0041fd81: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0041fd88: mov esp, ebp */ r_esp = r_ebp;
    /* 0041fd8a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041fd8b: mov esp, ebx */ r_esp = r_ebx;
    /* 0041fd8d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0041fd8e: ret 4 */ FN_RET(0x0041f6cc); r_esp += 8; return;
}

void f_0041f71c(void)
{
    FN_ENTER(0x0041f71c);
    /* 0041f71c: mov eax, ecx */ r_eax = r_ecx;
    /* 0041f71e: mov edx, dword ptr [eax + 0x86c] */ r_edx = R32((u32)(r_eax+0x86cu));
    /* 0041f724: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0041f727: je 0x41fd91 */ if (fZ) goto L_0041fd91;
L_0041f72d:; BB(0x0041f72d);
    /* 0041f72d: jmp 0x41fd78 */ goto L_0041fd78;
L_0041fd78:; BB(0x0041fd78);
    /* 0041fd78: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 0041fd7b: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 0041fd7e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0041fd81: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0041fd88: mov esp, ebp */ r_esp = r_ebp;
    /* 0041fd8a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041fd8b: mov esp, ebx */ r_esp = r_ebx;
    /* 0041fd8d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0041fd8e: ret 4 */ FN_RET(0x0041f71c); r_esp += 8; return;
L_0041fd91:; BB(0x0041fd91);
    /* 0041fd91: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0041fd93: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 0041fd95: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0041fd97: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x41fd9du); call_ind(t); }
    /* 0041fd9d: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0041fda0: movzx edx, word ptr [eax + 0x1c] */ r_edx = (u32)R16((u32)(r_eax+0x1cu));
    /* 0041fda4: mov edi, dword ptr [eax + 0x684] */ r_edi = R32((u32)(r_eax+0x684u));
    /* 0041fdaa: movzx ecx, word ptr [eax + 0x394] */ r_ecx = (u32)R16((u32)(r_eax+0x394u));
    /* 0041fdb1: mov esi, 0x24 */ r_esi = 0x24u;
    /* 0041fdb6: mov byte ptr [ebp - 0x7c], 0x12 */ W8((u32)(r_ebp+0xffffff84u), 0x12u);
    /* 0041fdba: mov word ptr [ebp - 0x7a], dx */ W16((u32)(r_ebp+0xffffff86u), (u16)r_edx);
    /* 0041fdbe: mov edx, dword ptr [eax + 0x698] */ r_edx = R32((u32)(r_eax+0x698u));
    /* 0041fdc4: mov eax, dword ptr [eax + 0x69c] */ r_eax = R32((u32)(r_eax+0x69cu));
    /* 0041fdca: mov byte ptr [ebp - 0x7b], 5 */ W8((u32)(r_ebp+0xffffff85u), 0x5u);
    /* 0041fdce: mov word ptr [ebp - 0x78], si */ W16((u32)(r_ebp+0xffffff88u), (u16)r_esi);
    /* 0041fdd2: mov word ptr [ebp - 0x76], di */ W16((u32)(r_ebp+0xffffff8au), (u16)r_edi);
    /* 0041fdd6: mov dword ptr [ebp - 0x74], ecx */ W32((u32)(r_ebp+0xffffff8cu), r_ecx);
    /* 0041fdd9: mov dword ptr [ebp - 0x70], edx */ W32((u32)(r_ebp+0xffffff90u), r_edx);
    /* 0041fddc: mov dword ptr [ebp - 0x6c], eax */ W32((u32)(r_ebp+0xffffff94u), r_eax);
    /* 0041fddf: lea ecx, [ebp - 0x7c] */ r_ecx = (u32)(r_ebp+0xffffff84u);
    /* 0041fde2: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x41fde7u); f_008003e0();
    /* 0041fde7: jmp 0x41fd78 */ goto L_0041fd78;
}

void f_0041f732(void)
{
    FN_ENTER(0x0041f732);
    /* 0041f732: mov eax, ecx */ r_eax = r_ecx;
    /* 0041f734: mov edx, dword ptr [eax + 0x86c] */ r_edx = R32((u32)(r_eax+0x86cu));
    /* 0041f73a: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0041f73d: je 0x41fde9 */ if (fZ) goto L_0041fde9;
L_0041f743:; BB(0x0041f743);
    /* 0041f743: jmp 0x41fd78 */ goto L_0041fd78;
L_0041fd78:; BB(0x0041fd78);
    /* 0041fd78: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 0041fd7b: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 0041fd7e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0041fd81: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0041fd88: mov esp, ebp */ r_esp = r_ebp;
    /* 0041fd8a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041fd8b: mov esp, ebx */ r_esp = r_ebx;
    /* 0041fd8d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0041fd8e: ret 4 */ FN_RET(0x0041f732); r_esp += 8; return;
L_0041fde9:; BB(0x0041fde9);
    /* 0041fde9: mov esi, dword ptr [eax + 0x684] */ r_esi = R32((u32)(r_eax+0x684u));
    /* 0041fdef: cmp esi, 0x32 */ {  u32 a = r_esi; u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041fdf2: jge 0x41fe10 */ if ((fS==fO)) goto L_0041fe10;
L_0041fdf4:; BB(0x0041fdf4);
    /* 0041fdf4: call 0x420a44 */ r_esp -= 4; W32(r_esp, 0x41fdf9u); f_00420a44();
    /* 0041fdf9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041fdfb: jne 0x41fe04 */ if (!fZ) goto L_0041fe04;
L_0041fdfd:; BB(0x0041fdfd);
    /* 0041fdfd: mov edx, 0x9a3cb0 */ r_edx = 0x9a3cb0u;
    /* 0041fe02: jmp 0x41fe2d */ goto L_0041fe2d;
L_0041fe04:; BB(0x0041fe04);
    /* 0041fe04: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041fe07: jne 0x41fe2d */ if (!fZ) goto L_0041fe2d;
L_0041fe09:; BB(0x0041fe09);
    /* 0041fe09: mov edx, 0x9a3d28 */ r_edx = 0x9a3d28u;
    /* 0041fe0e: jmp 0x41fe2d */ goto L_0041fe2d;
L_0041fe10:; BB(0x0041fe10);
    /* 0041fe10: add esi, -0x32 */ {  u32 a = r_esi; u32 b = 0xffffffceu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0041fe13: call 0x420a44 */ r_esp -= 4; W32(r_esp, 0x41fe18u); f_00420a44();
    /* 0041fe18: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041fe1a: jne 0x41fe23 */ if (!fZ) goto L_0041fe23;
L_0041fe1c:; BB(0x0041fe1c);
    /* 0041fe1c: mov edx, 0x9a3cf0 */ r_edx = 0x9a3cf0u;
    /* 0041fe21: jmp 0x41fe2d */ goto L_0041fe2d;
L_0041fe23:; BB(0x0041fe23);
    /* 0041fe23: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041fe26: jne 0x41fe2d */ if (!fZ) goto L_0041fe2d;
L_0041fe28:; BB(0x0041fe28);
    /* 0041fe28: mov edx, 0x9a3d78 */ r_edx = 0x9a3d78u;
L_0041fe2d:; BB(0x0041fe2d);
    /* 0041fe2d: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0041fe30: mov eax, dword ptr [eax + 0x684] */ r_eax = R32((u32)(r_eax+0x684u));
L_0041fe36:; BB(0x0041fe36);
    /* 0041fe36: mov ecx, dword ptr [edx + esi*4] */ r_ecx = R32((u32)(r_edx+r_esi*4));
    /* 0041fe39: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0041fe3c: cmp ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041fe3f: jne 0x41fe54 */ if (!fZ) goto L_0041fe54;
L_0041fe41:; BB(0x0041fe41);
    /* 0041fe41: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0041fe44: mov dword ptr [ecx + 0x684], 0 */ W32((u32)(r_ecx+0x684u), 0x0u);
    /* 0041fe4e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0041fe50: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0041fe52: jmp 0x41fe36 */ goto L_0041fe36;
L_0041fe54:; BB(0x0041fe54);
    /* 0041fe54: cmp ecx, 0x21 */ {  u32 a = r_ecx; u32 b = 0x21u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041fe57: je 0x41fe6f */ if (fZ) goto L_0041fe6f;
L_0041fe59:; BB(0x0041fe59);
    /* 0041fe59: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0041fe5c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041fe5d: mov dword ptr [edx + 0x684], eax */ W32((u32)(r_edx+0x684u), r_eax);
    /* 0041fe63: mov ecx, edx */ r_ecx = r_edx;
    /* 0041fe65: call 0x41a808 */ r_esp -= 4; W32(r_esp, 0x41fe6au); f_0041a808();
    /* 0041fe6a: jmp 0x41fd78 */ goto L_0041fd78;
L_0041fe6f:; BB(0x0041fe6f);
    /* 0041fe6f: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0041fe72: mov dword ptr [ecx + 0x684], 0x32 */ W32((u32)(r_ecx+0x684u), 0x32u);
    /* 0041fe7c: mov eax, 0x32 */ r_eax = 0x32u;
    /* 0041fe81: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0041fe83: jmp 0x41fe36 */ goto L_0041fe36;
}

void f_0041f748(void)
{
    FN_ENTER(0x0041f748);
    /* 0041f748: call 0x41f21c */ r_esp -= 4; W32(r_esp, 0x41f74du); f_0041f21c();
    /* 0041f74d: mov eax, dword ptr [0x9f9860] */ r_eax = R32((u32)(0x9f9860u));
    /* 0041f752: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0041f754: je 0x41fd78 */ if (fZ) goto L_0041fd78;
L_0041f75a:; BB(0x0041f75a);
    /* 0041f75a: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0041f75d: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x41f762u); f_00521410();
    /* 0041f762: jmp 0x41fd78 */ goto L_0041fd78;
L_0041fd78:; BB(0x0041fd78);
    /* 0041fd78: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 0041fd7b: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 0041fd7e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0041fd81: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0041fd88: mov esp, ebp */ r_esp = r_ebp;
    /* 0041fd8a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041fd8b: mov esp, ebx */ r_esp = r_ebx;
    /* 0041fd8d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0041fd8e: ret 4 */ FN_RET(0x0041f748); r_esp += 8; return;
}

void f_0041f767(void)
{
    FN_ENTER(0x0041f767);
    /* 0041f767: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x41f76cu); f_007751b0();
    /* 0041f76c: fmul dword ptr [0x8fbd18] */ ST(0) = ST(0) * R_F32((u32)(0x8fbd18u));
    /* 0041f772: fnstcw word ptr [ebp - 0x48] */ W16((u32)(r_ebp+0xffffffb8u), fcw);
    /* 0041f775: movzx eax, word ptr [ebp - 0x48] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffb8u));
    /* 0041f779: and eax, 0xfffff3ff */ {  u32 a = r_eax; u32 b = 0xfffff3ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0041f77e: or eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0041f783: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0041f786: fldcw word ptr [ebp - 0x40] */ fcw = R16((u32)(r_ebp+0xffffffc0u));
    /* 0041f789: fistp dword ptr [ebp - 0x38] */ W32((u32)(r_ebp+0xffffffc8u), (u32)fx_int32(ST(0))); FPOP();
    /* 0041f78c: fldcw word ptr [ebp - 0x48] */ fcw = R16((u32)(r_ebp+0xffffffb8u));
    /* 0041f78f: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0041f792: mov edi, dword ptr [ebp - 0x38] */ r_edi = R32((u32)(r_ebp+0xffffffc8u));
    /* 0041f795: mov eax, dword ptr [eax + 0x6a8] */ r_eax = R32((u32)(r_eax+0x6a8u));
    /* 0041f79b: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041f79e: jge 0x41f7ea */ if ((fS==fO)) goto L_0041f7ea;
L_0041f7a0:; BB(0x0041f7a0);
    /* 0041f7a0: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0041f7a3: fld dword ptr [0x8fbd2c] */ FPUSH(R_F32((u32)(0x8fbd2cu)));
    /* 0041f7a9: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0041f7ac: mov dword ptr [edx + 0x6a8], eax */ W32((u32)(r_edx+0x6a8u), r_eax);
    /* 0041f7b2: lea esi, [edi + edi] */ r_esi = (u32)(r_edi+r_edi);
    /* 0041f7b5: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0041f7b7: add esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0041f7b9: fcom dword ptr [esi + 0x6b0] */ fx_compare(ST(0), R_F32((u32)(r_esi+0x6b0u))); 
    /* 0041f7bf: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0041f7c1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0041f7c2: je 0x8cd6a6 */ if (fZ) goto L_008cd6a6;
L_0041f7c8:; BB(0x0041f7c8);
    /* 0041f7c8: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0041f7cb: cmp edi, 0xc */ {  u32 a = r_edi; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041f7ce: jl 0x41f7d2 */ if ((fS!=fO)) goto L_0041f7d2;
L_0041f7d0:; BB(0x0041f7d0);
    /* 0041f7d0: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_0041f7d2:; BB(0x0041f7d2);
    /* 0041f7d2: lea esi, [edi + edi] */ r_esi = (u32)(r_edi+r_edi);
    /* 0041f7d5: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0041f7d7: add esi, dword ptr [ebp - 0x1c] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0041f7da: fcom dword ptr [esi + 0x6b0] */ fx_compare(ST(0), R_F32((u32)(r_esi+0x6b0u))); 
    /* 0041f7e0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0041f7e2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0041f7e3: jne 0x41f7c8 */ if (!fZ) goto L_0041f7c8;
L_0041f7e5:; BB(0x0041f7e5);
    /* 0041f7e5: jmp 0x41fe85 */ goto L_0041fe85;
L_0041f7ea:; BB(0x0041f7ea);
    /* 0041f7ea: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0041f7ed: fld dword ptr [eax + edi*4 + 0x6b0] */ FPUSH(R_F32((u32)(r_eax+r_edi*4+0x6b0u)));
    /* 0041f7f4: fstp dword ptr [ebp - 0x20] */ W_F32((u32)(r_ebp+0xffffffe0u), ST(0)); FPOP();
L_0041f7f7:; BB(0x0041f7f7);
    /* 0041f7f7: imul esi, edi, 0x1555 */ { i64 t = (i64)(i32)r_edi * (i64)(i32)0x1555u; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0041f7fd: mov ecx, esi */ r_ecx = r_esi;
    /* 0041f7ff: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x41f804u); f_0082dcbc();
    /* 0041f804: fmul dword ptr [ebp - 0x20] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffe0u));
    /* 0041f807: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0041f80a: fstp dword ptr [eax + 0x39c] */ W_F32((u32)(r_eax+0x39cu), ST(0)); FPOP();
    /* 0041f810: mov ecx, esi */ r_ecx = r_esi;
    /* 0041f812: mov dword ptr [eax + 0x3a0], 0 */ W32((u32)(r_eax+0x3a0u), 0x0u);
    /* 0041f81c: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x41f821u); f_0082ddd8();
    /* 0041f821: fmul dword ptr [ebp - 0x20] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffe0u));
    /* 0041f824: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0041f827: fstp dword ptr [ecx + 0x3a4] */ W_F32((u32)(r_ecx+0x3a4u), ST(0)); FPOP();
    /* 0041f82d: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x41f832u); f_00521410();
    /* 0041f832: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0041f835: call 0x4235f8 */ r_esp -= 4; W32(r_esp, 0x41f83au); f_004235f8();
    /* 0041f83a: jmp 0x41fd78 */ goto L_0041fd78;
L_0041fd78:; BB(0x0041fd78);
    /* 0041fd78: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 0041fd7b: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 0041fd7e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0041fd81: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0041fd88: mov esp, ebp */ r_esp = r_ebp;
    /* 0041fd8a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041fd8b: mov esp, ebx */ r_esp = r_ebx;
    /* 0041fd8d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0041fd8e: ret 4 */ FN_RET(0x0041f767); r_esp += 8; return;
L_0041fe85:; BB(0x0041fe85);
    /* 0041fe85: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0041fe87:; BB(0x0041fe87);
    /* 0041fe87: push 0x435c0000 */ { u32 v = 0x435c0000u; r_esp -= 4; W32(r_esp, v); }
    /* 0041fe8c: push 0x42c80000 */ { u32 v = 0x42c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 0041fe91: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0041fe94: call 0x520c08 */ r_esp -= 4; W32(r_esp, 0x41fe99u); f_00520c08();
    /* 0041fe99: fstp dword ptr [ebp - 0x20] */ W_F32((u32)(r_ebp+0xffffffe0u), ST(0)); FPOP();
    /* 0041fe9c: fld dword ptr [ebp - 0x20] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe0u)));
    /* 0041fe9f: fstp dword ptr [esi + 0x6b0] */ W_F32((u32)(r_esi+0x6b0u), ST(0)); FPOP();
    /* 0041fea5: jmp 0x41f7f7 */ goto L_0041f7f7;
L_008cd6a6:; BB(0x008cd6a6);
    /* 008cd6a6: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008cd6a8: jmp 0x41fe87 */ goto L_0041fe87;
}

void f_0041f83f(void)
{
    FN_ENTER(0x0041f83f);
    /* 0041f83f: mov edx, ecx */ r_edx = r_ecx;
    /* 0041f841: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0041f843: mov dword ptr [edx + 0x5c], eax */ W32((u32)(r_edx+0x5cu), r_eax);
    /* 0041f846: mov dword ptr [edx + 0x64], eax */ W32((u32)(r_edx+0x64u), r_eax);
    /* 0041f849: jmp 0x41fd78 */ goto L_0041fd78;
L_0041fd78:; BB(0x0041fd78);
    /* 0041fd78: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 0041fd7b: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 0041fd7e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0041fd81: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0041fd88: mov esp, ebp */ r_esp = r_ebp;
    /* 0041fd8a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041fd8b: mov esp, ebx */ r_esp = r_ebx;
    /* 0041fd8d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0041fd8e: ret 4 */ FN_RET(0x0041f83f); r_esp += 8; return;
}

void f_0041f84e(void)
{
    FN_ENTER(0x0041f84e);
    /* 0041f84e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0041f850: mov eax, 0x10 */ r_eax = 0x10u;
    /* 0041f855: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 0041f85c: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x41f862u); call_ind(t); }
    /* 0041f862: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0041f865: mov dword ptr [ecx + 0x3ec], 1 */ W32((u32)(r_ecx+0x3ecu), 0x1u);
    /* 0041f86f: call 0x41b0bc */ r_esp -= 4; W32(r_esp, 0x41f874u); f_0041b0bc();
    /* 0041f874: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0041f877: mov ecx, dword ptr [edi + 0x3c8] */ r_ecx = R32((u32)(r_edi+0x3c8u));
    /* 0041f87d: fld dword ptr [edi + 0x3a8] */ FPUSH(R_F32((u32)(r_edi+0x3a8u)));
    /* 0041f883: fld dword ptr [edi + 0x3b0] */ FPUSH(R_F32((u32)(r_edi+0x3b0u)));
    /* 0041f889: and ecx, 0xfffff17f */ {  u32 a = r_ecx; u32 b = 0xfffff17fu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0041f88f: mov dword ptr [edi + 0x3c8], ecx */ W32((u32)(r_edi+0x3c8u), r_ecx);
    /* 0041f895: mov dword ptr [edi + 0x890], 0 */ W32((u32)(r_edi+0x890u), 0x0u);
    /* 0041f89f: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0041f8a1: mov dword ptr [edi + 0x86c], esi */ W32((u32)(r_edi+0x86cu), r_esi);
    /* 0041f8a7: mov dword ptr [edi + 0x8b0], esi */ W32((u32)(r_edi+0x8b0u), r_esi);
    /* 0041f8ad: mov dword ptr [edi + 0x880], esi */ W32((u32)(r_edi+0x880u), r_esi);
    /* 0041f8b3: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0041f8b5: fmul qword ptr [0x8fb9d0] */ ST(0) = ST(0) * R_F64((u32)(0x8fb9d0u));
    /* 0041f8bb: fdiv qword ptr [0x8fb9c8] */ ST(0) = ST(0) / R_F64((u32)(0x8fb9c8u));
    /* 0041f8c1: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0041f8c4: fld dword ptr [0x8fbd28] */ FPUSH(R_F32((u32)(0x8fbd28u)));
    /* 0041f8ca: fadd dword ptr [ecx + 0x3b4] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x3b4u));
    /* 0041f8d0: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0041f8d2: fnstcw word ptr [ebp - 0x48] */ W16((u32)(r_ebp+0xffffffb8u), fcw);
    /* 0041f8d5: movzx eax, word ptr [ebp - 0x48] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffb8u));
    /* 0041f8d9: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0041f8de: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0041f8e1: fldcw word ptr [ebp - 0x40] */ fcw = R16((u32)(r_ebp+0xffffffc0u));
    /* 0041f8e4: fistp dword ptr [ebp - 0x38] */ W32((u32)(r_ebp+0xffffffc8u), (u32)fx_int32(ST(0))); FPOP();
    /* 0041f8e7: fldcw word ptr [ebp - 0x48] */ fcw = R16((u32)(r_ebp+0xffffffb8u));
    /* 0041f8ea: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0041f8ed: fstp dword ptr [ecx + 0x3b4] */ W_F32((u32)(r_ecx+0x3b4u), ST(0)); FPOP();
    /* 0041f8f3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041f8f4: mov dword ptr [ecx + 0x87c], eax */ W32((u32)(r_ecx+0x87cu), r_eax);
    /* 0041f8fa: call 0x425a40 */ r_esp -= 4; W32(r_esp, 0x41f8ffu); f_00425a40();
    /* 0041f8ff: fld dword ptr [0xa436ec] */ FPUSH(R_F32((u32)(0xa436ecu)));
    /* 0041f905: fld dword ptr [0xa436ec] */ FPUSH(R_F32((u32)(0xa436ecu)));
    /* 0041f90b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0041f90d: fadd st(0) */ ST(0) = ST(0) + ST(0);
    /* 0041f90f: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0041f912: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0041f914: fchs  */ ST(0) = -ST(0);
    /* 0041f916: fdivr dword ptr [0x8fbd24] */ ST(0) = R_F32((u32)(0x8fbd24u)) / ST(0);
    /* 0041f91c: fld dword ptr [0xa436f0] */ FPUSH(R_F32((u32)(0xa436f0u)));
    /* 0041f922: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0041f924: fstp dword ptr [ebp - 0x20] */ W_F32((u32)(r_ebp+0xffffffe0u), ST(0)); FPOP();
    /* 0041f927: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0041f929: fchs  */ ST(0) = -ST(0);
    /* 0041f92b: fdivr dword ptr [0x8fbd20] */ ST(0) = R_F32((u32)(0x8fbd20u)) / ST(0);
    /* 0041f931: fadd dword ptr [eax + 0x5e4] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x5e4u));
    /* 0041f937: fadd dword ptr [0x8fbd1c] */ ST(0) = ST(0) + R_F32((u32)(0x8fbd1cu));
    /* 0041f93d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0041f93e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0041f940: fchs  */ ST(0) = -ST(0);
    /* 0041f942: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 0041f944: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0041f947: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x41f94cu); f_0082dc9c();
    /* 0041f94c: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0041f94f: fld dword ptr [0x8fbcf8] */ FPUSH(R_F32((u32)(0x8fbcf8u)));
    /* 0041f955: fld dword ptr [edx + 0x3b4] */ FPUSH(R_F32((u32)(r_edx+0x3b4u)));
    /* 0041f95b: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0041f95d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0041f95f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0041f960: jae 0x41f985 */ if (!fC) goto L_0041f985;
L_0041f962:; BB(0x0041f962);
    /* 0041f962: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0041f964: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0041f966: fadd dword ptr [ebp - 0x20] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xffffffe0u));
    /* 0041f969: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 0041f96b: mov eax, edx */ r_eax = r_edx;
    /* 0041f96d: fst dword ptr [eax + 0x88c] */ W_F32((u32)(r_eax+0x88cu), ST(0));
    /* 0041f973: fstp dword ptr [eax + 0x888] */ W_F32((u32)(r_eax+0x888u), ST(0)); FPOP();
    /* 0041f979: mov dword ptr [eax + 0x894], 0 */ W32((u32)(r_eax+0x894u), 0x0u);
    /* 0041f983: jmp 0x41f9c5 */ goto L_0041f9c5;
L_0041f985:; BB(0x0041f985);
    /* 0041f985: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0041f987: fdivr st(1), st(0) */ ST(1) = ST(0) / ST(1);
    /* 0041f989: mov eax, edx */ r_eax = r_edx;
    /* 0041f98b: fld dword ptr [ebp - 0x20] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe0u)));
    /* 0041f98e: fld dword ptr [eax + 0x3b4] */ FPUSH(R_F32((u32)(r_eax+0x3b4u)));
    /* 0041f994: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0041f996: fst dword ptr [eax + 0x88c] */ W_F32((u32)(r_eax+0x88cu), ST(0));
    /* 0041f99c: fld dword ptr [ebp - 0x20] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe0u)));
    /* 0041f99f: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0041f9a1: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0041f9a3: fsubp st(4) */ ST(4) = ST(4) - ST(0); FPOP();
    /* 0041f9a5: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0041f9a7: fsubp st(2) */ ST(2) = ST(2) - ST(0); FPOP();
    /* 0041f9a9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0041f9ab: fmul dword ptr [0x8fbd1c] */ ST(0) = ST(0) * R_F32((u32)(0x8fbd1cu));
    /* 0041f9b1: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 0041f9b3: fdivr st(1), st(0) */ ST(1) = ST(0) / ST(1);
    /* 0041f9b5: fsubp st(2) */ ST(2) = ST(2) - ST(0); FPOP();
    /* 0041f9b7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0041f9b9: fstp dword ptr [eax + 0x888] */ W_F32((u32)(r_eax+0x888u), ST(0)); FPOP();
    /* 0041f9bf: fstp dword ptr [eax + 0x894] */ W_F32((u32)(r_eax+0x894u), ST(0)); FPOP();
L_0041f9c5:; BB(0x0041f9c5);
    /* 0041f9c5: mov dword ptr [eax + 0x890], 0x41500000 */ W32((u32)(r_eax+0x890u), 0x41500000u);
    /* 0041f9cf: jmp 0x41fd78 */ goto L_0041fd78;
L_0041fd78:; BB(0x0041fd78);
    /* 0041fd78: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 0041fd7b: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 0041fd7e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0041fd81: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0041fd88: mov esp, ebp */ r_esp = r_ebp;
    /* 0041fd8a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041fd8b: mov esp, ebx */ r_esp = r_ebx;
    /* 0041fd8d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0041fd8e: ret 4 */ FN_RET(0x0041f84e); r_esp += 8; return;
}

void f_0041f9d4(void)
{
    FN_ENTER(0x0041f9d4);
    /* 0041f9d4: mov eax, ecx */ r_eax = r_ecx;
    /* 0041f9d6: mov edx, dword ptr [eax + 0x86c] */ r_edx = R32((u32)(r_eax+0x86cu));
    /* 0041f9dc: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0041f9df: je 0x41feaa */ if (fZ) goto L_0041feaa;
L_0041f9e5:; BB(0x0041f9e5);
    /* 0041f9e5: jmp 0x41fd78 */ goto L_0041fd78;
L_0041fd78:; BB(0x0041fd78);
    /* 0041fd78: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 0041fd7b: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 0041fd7e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0041fd81: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0041fd88: mov esp, ebp */ r_esp = r_ebp;
    /* 0041fd8a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041fd8b: mov esp, ebx */ r_esp = r_ebx;
    /* 0041fd8d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0041fd8e: ret 4 */ FN_RET(0x0041f9d4); r_esp += 8; return;
L_0041feaa:; BB(0x0041feaa);
    /* 0041feaa: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0041feac: push 0x1b */ { u32 v = 0x1bu; r_esp -= 4; W32(r_esp, v); }
    /* 0041feae: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0041feb0: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x41feb6u); call_ind(t); }
    /* 0041feb6: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0041feb9: movzx edx, word ptr [eax + 0x1c] */ r_edx = (u32)R16((u32)(r_eax+0x1cu));
    /* 0041febd: mov edi, dword ptr [eax + 0x684] */ r_edi = R32((u32)(r_eax+0x684u));
    /* 0041fec3: movzx ecx, word ptr [eax + 0x394] */ r_ecx = (u32)R16((u32)(r_eax+0x394u));
    /* 0041feca: mov esi, 0x1b */ r_esi = 0x1bu;
    /* 0041fecf: mov byte ptr [ebp - 0x90], 0x12 */ W8((u32)(r_ebp+0xffffff70u), 0x12u);
    /* 0041fed6: mov word ptr [ebp - 0x8e], dx */ W16((u32)(r_ebp+0xffffff72u), (u16)r_edx);
    /* 0041fedd: mov edx, dword ptr [eax + 0x698] */ r_edx = R32((u32)(r_eax+0x698u));
    /* 0041fee3: mov eax, dword ptr [eax + 0x69c] */ r_eax = R32((u32)(r_eax+0x69cu));
    /* 0041fee9: mov byte ptr [ebp - 0x8f], 5 */ W8((u32)(r_ebp+0xffffff71u), 0x5u);
    /* 0041fef0: mov word ptr [ebp - 0x8c], si */ W16((u32)(r_ebp+0xffffff74u), (u16)r_esi);
    /* 0041fef7: mov word ptr [ebp - 0x8a], di */ W16((u32)(r_ebp+0xffffff76u), (u16)r_edi);
    /* 0041fefe: mov dword ptr [ebp - 0x88], ecx */ W32((u32)(r_ebp+0xffffff78u), r_ecx);
    /* 0041ff04: mov dword ptr [ebp - 0x84], edx */ W32((u32)(r_ebp+0xffffff7cu), r_edx);
    /* 0041ff0a: mov dword ptr [ebp - 0x80], eax */ W32((u32)(r_ebp+0xffffff80u), r_eax);
    /* 0041ff0d: lea ecx, [ebp - 0x90] */ r_ecx = (u32)(r_ebp+0xffffff70u);
    /* 0041ff13: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x41ff18u); f_008003e0();
    /* 0041ff18: jmp 0x41fd78 */ goto L_0041fd78;
}

void f_0041f9ea(void)
{
    FN_ENTER(0x0041f9ea);
    /* 0041f9ea: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x41f9efu); f_007aa094();
    /* 0041f9ef: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0041f9f2: mov eax, dword ptr [eax + 0x86c] */ r_eax = R32((u32)(r_eax+0x86cu));
    /* 0041f9f8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041f9fa: je 0x41ff6f */ if (fZ) goto L_0041ff6f;
L_0041fa00:; BB(0x0041fa00);
    /* 0041fa00: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041fa03: je 0x41ff1d */ if (fZ) goto L_0041ff1d;
L_0041fa09:; BB(0x0041fa09);
    /* 0041fa09: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041fa0c: je 0x41fbe7 */ if (fZ) goto L_0041fbe7;
L_0041fa12:; BB(0x0041fa12);
    /* 0041fa12: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0041fa15: jne 0x41fd78 */ if (!fZ) goto L_0041fd78;
L_0041fa1b:; BB(0x0041fa1b);
    /* 0041fa1b: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0041fa1e: fld dword ptr [edx + 0x5e4] */ FPUSH(R_F32((u32)(r_edx+0x5e4u)));
    /* 0041fa24: fsub dword ptr [edx + 0x5e8] */ ST(0) = ST(0) - R_F32((u32)(r_edx+0x5e8u));
    /* 0041fa2a: fcom dword ptr [0x8fbed8] */ fx_compare(ST(0), R_F32((u32)(0x8fbed8u))); 
    /* 0041fa30: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0041fa32: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0041fa33: ja 0x41fa5e */ if ((!fC&&!fZ)) goto L_0041fa5e;
L_0041fa35:; BB(0x0041fa35);
    /* 0041fa35: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0041fa37: mov eax, dword ptr [edx + 0x3c8] */ r_eax = R32((u32)(r_edx+0x3c8u));
    /* 0041fa3d: fld dword ptr [edx + 0x5e4] */ FPUSH(R_F32((u32)(r_edx+0x5e4u)));
    /* 0041fa43: fsub dword ptr [edx + 0x5e8] */ ST(0) = ST(0) - R_F32((u32)(r_edx+0x5e8u));
    /* 0041fa49: and eax, 0xfffffeff */ {  u32 a = r_eax; u32 b = 0xfffffeffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0041fa4e: mov dword ptr [edx + 0x3c8], eax */ W32((u32)(r_edx+0x3c8u), r_eax);
    /* 0041fa54: mov dword ptr [edx + 0x86c], 4 */ W32((u32)(r_edx+0x86cu), 0x4u);
L_0041fa5e:; BB(0x0041fa5e);
    /* 0041fa5e: fcomp dword ptr [0x8fbd2c] */ fx_compare(ST(0), R_F32((u32)(0x8fbd2cu))); FPOP();
    /* 0041fa64: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0041fa66: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0041fa67: ja 0x41fab5 */ if ((!fC&&!fZ)) goto L_0041fab5;
L_0041fa69:; BB(0x0041fa69);
    /* 0041fa69: mov eax, edx */ r_eax = r_edx;
    /* 0041fa6b: mov edx, dword ptr [eax + 0x8b0] */ r_edx = R32((u32)(r_eax+0x8b0u));
    /* 0041fa71: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041fa73: jne 0x41fab5 */ if (!fZ) goto L_0041fab5;
L_0041fa75:; BB(0x0041fa75);
    /* 0041fa75: mov ecx, eax */ r_ecx = r_eax;
    /* 0041fa77: lea eax, [ecx + 0x38] */ r_eax = (u32)(r_ecx+0x38u);
    /* 0041fa7a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041fa7b: call 0x41ebf0 */ r_esp -= 4; W32(r_esp, 0x41fa80u); f_0041ebf0();
    /* 0041fa80: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0041fa83: call 0x41ec70 */ r_esp -= 4; W32(r_esp, 0x41fa88u); f_0041ec70();
    /* 0041fa88: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0041fa8b: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0041fa8d: mov dword ptr [ecx + 0x8b0], 1 */ W32((u32)(r_ecx+0x8b0u), 0x1u);
    /* 0041fa97: call dword ptr [eax + 0x174] */ { u32 t = R32((u32)(r_eax+0x174u)); r_esp -= 4; W32(r_esp, 0x41fa9du); call_ind(t); }
    /* 0041fa9d: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0041faa0: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0041faa2: call dword ptr [eax + 0x180] */ { u32 t = R32((u32)(r_eax+0x180u)); r_esp -= 4; W32(r_esp, 0x41faa8u); call_ind(t); }
    /* 0041faa8: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0041faab: mov dword ptr [eax + 0x3ec], 2 */ W32((u32)(r_eax+0x3ecu), 0x2u);
L_0041fab5:; BB(0x0041fab5);
    /* 0041fab5: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0041fab8: call 0x520c20 */ r_esp -= 4; W32(r_esp, 0x41fabdu); f_00520c20();
    /* 0041fabd: mov esi, eax */ r_esi = r_eax;
    /* 0041fabf: mov ecx, esi */ r_ecx = r_esi;
    /* 0041fac1: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x41fac6u); f_0082dcbc();
    /* 0041fac6: fstp dword ptr [ebp - 0x20] */ W_F32((u32)(r_ebp+0xffffffe0u), ST(0)); FPOP();
    /* 0041fac9: mov ecx, esi */ r_ecx = r_esi;
    /* 0041facb: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x41fad0u); f_0082ddd8();
    /* 0041fad0: fstp dword ptr [ebp - 0x24] */ W_F32((u32)(r_ebp+0xffffffdcu), ST(0)); FPOP();
    /* 0041fad3: push 0x3f000000 */ { u32 v = 0x3f000000u; r_esp -= 4; W32(r_esp, v); }
    /* 0041fad8: push 0x40000000 */ { u32 v = 0x40000000u; r_esp -= 4; W32(r_esp, v); }
    /* 0041fadd: fld dword ptr [0x8fbd0c] */ FPUSH(R_F32((u32)(0x8fbd0cu)));
    /* 0041fae3: fld dword ptr [ebp - 0x20] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe0u)));
    /* 0041fae6: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0041fae8: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0041faea: fmul dword ptr [ebp - 0x24] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffdcu));
    /* 0041faed: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0041faf0: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0041faf2: fadd dword ptr [ecx + 0x39c] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x39cu));
    /* 0041faf8: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0041fafa: fadd dword ptr [ecx + 0x3a4] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x3a4u));
    /* 0041fb00: mov eax, dword ptr [ecx + 0x3a0] */ r_eax = R32((u32)(r_ecx+0x3a0u));
    /* 0041fb06: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0041fb08: fstp dword ptr [ebp - 0x68] */ W_F32((u32)(r_ebp+0xffffff98u), ST(0)); FPOP();
    /* 0041fb0b: fstp dword ptr [ebp - 0x60] */ W_F32((u32)(r_ebp+0xffffffa0u), ST(0)); FPOP();
    /* 0041fb0e: mov dword ptr [ebp - 0x64], eax */ W32((u32)(r_ebp+0xffffff9cu), r_eax);
    /* 0041fb11: call 0x520c08 */ r_esp -= 4; W32(r_esp, 0x41fb16u); f_00520c08();
    /* 0041fb16: fstp dword ptr [ebp - 0x28] */ W_F32((u32)(r_ebp+0xffffffd8u), ST(0)); FPOP();
    /* 0041fb19: push 0x40800000 */ { u32 v = 0x40800000u; r_esp -= 4; W32(r_esp, v); }
    /* 0041fb1e: push 0x41200000 */ { u32 v = 0x41200000u; r_esp -= 4; W32(r_esp, v); }
    /* 0041fb23: fld dword ptr [ebp - 0x20] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe0u)));
    /* 0041fb26: fmul dword ptr [ebp - 0x28] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffd8u));
    /* 0041fb29: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0041fb2c: fstp dword ptr [ebp - 0x5c] */ W_F32((u32)(r_ebp+0xffffffa4u), ST(0)); FPOP();
    /* 0041fb2f: call 0x520c08 */ r_esp -= 4; W32(r_esp, 0x41fb34u); f_00520c08();
    /* 0041fb34: fstp dword ptr [ebp - 0x58] */ W_F32((u32)(r_ebp+0xffffffa8u), ST(0)); FPOP();
    /* 0041fb37: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 0041fb3a: fmul dword ptr [ebp - 0x28] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffd8u));
    /* 0041fb3d: fstp dword ptr [ebp - 0x54] */ W_F32((u32)(r_ebp+0xffffffacu), ST(0)); FPOP();
    /* 0041fb40: push 0x54 */ { u32 v = 0x54u; r_esp -= 4; W32(r_esp, v); }
    /* 0041fb42: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
    /* 0041fb49: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x41fb4eu); f_005caba4();
    /* 0041fb4e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0041fb4f: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 0041fb52: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041fb54: je 0x41fb80 */ if (fZ) goto L_0041fb80;
L_0041fb56:; BB(0x0041fb56);
    /* 0041fb56: mov dword ptr [ebp - 0x50], 1 */ W32((u32)(r_ebp+0xffffffb0u), 0x1u);
    /* 0041fb5d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0041fb64: lea esi, [ebp - 0x68] */ r_esi = (u32)(r_ebp+0xffffff98u);
    /* 0041fb67: lea edx, [ebp - 0x5c] */ r_edx = (u32)(r_ebp+0xffffffa4u);
    /* 0041fb6a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041fb6b: mov ecx, eax */ r_ecx = r_eax;
    /* 0041fb6d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0041fb6e: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 0041fb74: call 0x4293a8 */ r_esp -= 4; W32(r_esp, 0x41fb79u); f_004293a8();
    /* 0041fb79: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
L_0041fb80:; BB(0x0041fb80);
    /* 0041fb80: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0041fb87: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0041fb8a: push dword ptr [ecx + 0x88c] */ { u32 v = R32((u32)(r_ecx+0x88cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0041fb90: push dword ptr [ecx + 0x3b0] */ { u32 v = R32((u32)(r_ecx+0x3b0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0041fb96: fld dword ptr [ecx + 0x890] */ FPUSH(R_F32((u32)(r_ecx+0x890u)));
    /* 0041fb9c: fadd dword ptr [ecx + 0x5e4] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x5e4u));
    /* 0041fba2: push dword ptr [ecx + 0x3a8] */ { u32 v = R32((u32)(r_ecx+0x3a8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0041fba8: fstp dword ptr [ecx + 0x5e4] */ W_F32((u32)(r_ecx+0x5e4u), ST(0)); FPOP();
    /* 0041fbae: call 0x520aa8 */ r_esp -= 4; W32(r_esp, 0x41fbb3u); f_00520aa8();
    /* 0041fbb3: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0041fbb6: fld dword ptr [eax + 0x3c] */ FPUSH(R_F32((u32)(r_eax+0x3cu)));
    /* 0041fbb9: fadd dword ptr [eax + 0x5e4] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x5e4u));
    /* 0041fbbf: mov edx, dword ptr [eax + 0x880] */ r_edx = R32((u32)(r_eax+0x880u));
    /* 0041fbc5: fstp dword ptr [eax + 0x5e0] */ W_F32((u32)(r_eax+0x5e0u), ST(0)); FPOP();
    /* 0041fbcb: cmp edx, 0x2800 */ {  u32 a = r_edx; u32 b = 0x2800u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041fbd1: jge 0x41fbdf */ if ((fS==fO)) goto L_0041fbdf;
L_0041fbd3:; BB(0x0041fbd3);
    /* 0041fbd3: add edx, 0x80 */ {  u32 a = r_edx; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0041fbd9: mov dword ptr [eax + 0x880], edx */ W32((u32)(r_eax+0x880u), r_edx);
L_0041fbdf:; BB(0x0041fbdf);
    /* 0041fbdf: add dword ptr [eax + 0x64], edx */ { u32 ad = (u32)(r_eax+0x64u);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041fbe2: jmp 0x41fd78 */ goto L_0041fd78;
L_0041fbe7:; BB(0x0041fbe7);
    /* 0041fbe7: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0041fbea: fld dword ptr [edx + 0x890] */ FPUSH(R_F32((u32)(r_edx+0x890u)));
    /* 0041fbf0: fcom dword ptr [0x8fbd2c] */ fx_compare(ST(0), R_F32((u32)(0x8fbd2cu))); 
    /* 0041fbf6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0041fbf8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0041fbf9: jbe 0x41fc40 */ if ((fC||fZ)) goto L_0041fc40;
L_0041fbfb:; BB(0x0041fbfb);
    /* 0041fbfb: fld dword ptr [0xa436ec] */ FPUSH(R_F32((u32)(0xa436ecu)));
    /* 0041fc01: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0041fc03: mov ecx, edx */ r_ecx = r_edx;
    /* 0041fc05: fld dword ptr [ecx + 0x894] */ FPUSH(R_F32((u32)(r_ecx+0x894u)));
    /* 0041fc0b: fadd dword ptr [ecx + 0x888] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x888u));
    /* 0041fc11: mov eax, dword ptr [ecx + 0x3a8] */ r_eax = R32((u32)(r_ecx+0x3a8u));
    /* 0041fc17: mov edx, dword ptr [ecx + 0x3b0] */ r_edx = R32((u32)(r_ecx+0x3b0u));
    /* 0041fc1d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0041fc1f: fstp dword ptr [ecx + 0x890] */ W_F32((u32)(r_ecx+0x890u), ST(0)); FPOP();
    /* 0041fc25: fst dword ptr [ecx + 0x888] */ W_F32((u32)(r_ecx+0x888u), ST(0));
    /* 0041fc2b: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041fc2e: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0041fc32: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0041fc35: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0041fc39: call 0x520aa8 */ r_esp -= 4; W32(r_esp, 0x41fc3eu); f_00520aa8();
    /* 0041fc3e: jmp 0x41fc67 */ goto L_0041fc67;
L_0041fc40:; BB(0x0041fc40);
    /* 0041fc40: fld dword ptr [0xa436f0] */ FPUSH(R_F32((u32)(0xa436f0u)));
    /* 0041fc46: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0041fc48: mov ecx, edx */ r_ecx = r_edx;
    /* 0041fc4a: push dword ptr [ecx + 0x88c] */ { u32 v = R32((u32)(r_ecx+0x88cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0041fc50: push dword ptr [ecx + 0x3b0] */ { u32 v = R32((u32)(r_ecx+0x3b0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0041fc56: push dword ptr [ecx + 0x3a8] */ { u32 v = R32((u32)(r_ecx+0x3a8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0041fc5c: fstp dword ptr [ecx + 0x890] */ W_F32((u32)(r_ecx+0x890u), ST(0)); FPOP();
    /* 0041fc62: call 0x520aa8 */ r_esp -= 4; W32(r_esp, 0x41fc67u); f_00520aa8();
L_0041fc67:; BB(0x0041fc67);
    /* 0041fc67: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0041fc6a: fld dword ptr [edx + 0x890] */ FPUSH(R_F32((u32)(r_edx+0x890u)));
    /* 0041fc70: fadd dword ptr [edx + 0x5e4] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x5e4u));
    /* 0041fc76: fld dword ptr [edx + 0x3c] */ FPUSH(R_F32((u32)(r_edx+0x3cu)));
    /* 0041fc79: fld dword ptr [edx + 0x890] */ FPUSH(R_F32((u32)(r_edx+0x890u)));
    /* 0041fc7f: fcom dword ptr [0x8fbd2c] */ fx_compare(ST(0), R_F32((u32)(0x8fbd2cu))); 
    /* 0041fc85: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0041fc87: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0041fc89: fst dword ptr [edx + 0x5e4] */ W_F32((u32)(r_edx+0x5e4u), ST(0));
    /* 0041fc8f: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0041fc91: fstp dword ptr [edx + 0x5e0] */ W_F32((u32)(r_edx+0x5e0u), ST(0)); FPOP();
    /* 0041fc97: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0041fc98: jae 0x41fcf7 */ if (!fC) goto L_0041fcf7;
L_0041fc9a:; BB(0x0041fc9a);
    /* 0041fc9a: mov ecx, edx */ r_ecx = r_edx;
    /* 0041fc9c: fld dword ptr [ecx + 0x888] */ FPUSH(R_F32((u32)(r_ecx+0x888u)));
    /* 0041fca2: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0041fca4: fmul qword ptr [0x8fb9d0] */ ST(0) = ST(0) * R_F64((u32)(0x8fb9d0u));
    /* 0041fcaa: fdiv qword ptr [0x8fb9c8] */ ST(0) = ST(0) / R_F64((u32)(0x8fb9c8u));
    /* 0041fcb0: fnstcw word ptr [ebp - 0x48] */ W16((u32)(r_ebp+0xffffffb8u), fcw);
    /* 0041fcb3: movzx eax, word ptr [ebp - 0x48] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffb8u));
    /* 0041fcb7: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0041fcbc: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0041fcbf: fldcw word ptr [ebp - 0x40] */ fcw = R16((u32)(r_ebp+0xffffffc0u));
    /* 0041fcc2: fistp dword ptr [ebp - 0x38] */ W32((u32)(r_ebp+0xffffffc8u), (u32)fx_int32(ST(0))); FPOP();
    /* 0041fcc5: fldcw word ptr [ebp - 0x48] */ fcw = R16((u32)(r_ebp+0xffffffb8u));
    /* 0041fcc8: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0041fccb: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0041fcce: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0041fcd0: cmp edx, dword ptr [eax + 0x5c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0x5cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041fcd3: jle 0x41fcd8 */ if ((fZ||fS!=fO)) goto L_0041fcd8;
L_0041fcd5:; BB(0x0041fcd5);
    /* 0041fcd5: mov dword ptr [eax + 0x5c], edx */ W32((u32)(r_eax+0x5cu), r_edx);
L_0041fcd8:; BB(0x0041fcd8);
    /* 0041fcd8: mov edx, dword ptr [eax + 0x880] */ r_edx = R32((u32)(r_eax+0x880u));
    /* 0041fcde: cmp edx, 0x2800 */ {  u32 a = r_edx; u32 b = 0x2800u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041fce4: jge 0x41fcf2 */ if ((fS==fO)) goto L_0041fcf2;
L_0041fce6:; BB(0x0041fce6);
    /* 0041fce6: add edx, 0x120 */ {  u32 a = r_edx; u32 b = 0x120u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0041fcec: mov dword ptr [eax + 0x880], edx */ W32((u32)(r_eax+0x880u), r_edx);
L_0041fcf2:; BB(0x0041fcf2);
    /* 0041fcf2: add dword ptr [eax + 0x64], edx */ { u32 ad = (u32)(r_eax+0x64u);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0041fcf5: jmp 0x41fd16 */ goto L_0041fd16;
L_0041fcf7:; BB(0x0041fcf7);
    /* 0041fcf7: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0041fcf9: mov eax, edx */ r_eax = r_edx;
    /* 0041fcfb: push 0x200 */ { u32 v = 0x200u; r_esp -= 4; W32(r_esp, v); }
    /* 0041fd00: push 0x4000 */ { u32 v = 0x4000u; r_esp -= 4; W32(r_esp, v); }
    /* 0041fd05: push dword ptr [eax + 0x5c] */ { u32 v = R32((u32)(r_eax+0x5cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0041fd08: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x41fd0du); f_007a8c74();
    /* 0041fd0d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041fd10: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0041fd13: mov dword ptr [edx + 0x5c], eax */ W32((u32)(r_edx+0x5cu), r_eax);
L_0041fd16:; BB(0x0041fd16);
    /* 0041fd16: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0041fd19: fld dword ptr [edx + 0x418] */ FPUSH(R_F32((u32)(r_edx+0x418u)));
    /* 0041fd1f: fcomp dword ptr [0x8fbcfc] */ fx_compare(ST(0), R_F32((u32)(0x8fbcfcu))); FPOP();
    /* 0041fd25: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0041fd27: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0041fd28: ja 0x41fd4e */ if ((!fC&&!fZ)) goto L_0041fd4e;
L_0041fd2a:; BB(0x0041fd2a);
    /* 0041fd2a: mov eax, edx */ r_eax = r_edx;
    /* 0041fd2c: mov dword ptr [eax + 0x86c], 3 */ W32((u32)(r_eax+0x86cu), 0x3u);
    /* 0041fd36: lea ecx, [eax + 0x644] */ r_ecx = (u32)(r_eax+0x644u);
    /* 0041fd3c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0041fd3e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041fd3f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041fd40: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041fd41: push 0x323 */ { u32 v = 0x323u; r_esp -= 4; W32(r_esp, v); }
    /* 0041fd46: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x41fd4bu); f_00814298();
    /* 0041fd4b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0041fd4e:; BB(0x0041fd4e);
    /* 0041fd4e: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0041fd51: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 0041fd57: test dl, 0x10 */ {  u32 a = (u8)r_edx; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0041fd5a: je 0x41fd63 */ if (fZ) goto L_0041fd63;
L_0041fd5c:; BB(0x0041fd5c);
    /* 0041fd5c: mov eax, 1 */ r_eax = 0x1u;
    /* 0041fd61: jmp 0x41fd65 */ goto L_0041fd65;
L_0041fd63:; BB(0x0041fd63);
    /* 0041fd63: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0041fd65:; BB(0x0041fd65);
    /* 0041fd65: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0041fd67: je 0x41fd78 */ if (fZ) goto L_0041fd78;
L_0041fd69:; BB(0x0041fd69);
    /* 0041fd69: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0041fd6c: mov eax, 0x17 */ r_eax = 0x17u;
    /* 0041fd71: mov word ptr [edx + 0xb8], ax */ W16((u32)(r_edx+0xb8u), (u16)r_eax);
L_0041fd78:; BB(0x0041fd78);
    /* 0041fd78: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 0041fd7b: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 0041fd7e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0041fd81: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0041fd88: mov esp, ebp */ r_esp = r_ebp;
    /* 0041fd8a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041fd8b: mov esp, ebx */ r_esp = r_ebx;
    /* 0041fd8d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0041fd8e: ret 4 */ FN_RET(0x0041f9ea); r_esp += 8; return;
L_0041ff1d:; BB(0x0041ff1d);
    /* 0041ff1d: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0041ff20: fld dword ptr [edx + 0xc0] */ FPUSH(R_F32((u32)(r_edx+0xc0u)));
    /* 0041ff26: fcomp dword ptr [0x8fbe74] */ fx_compare(ST(0), R_F32((u32)(0x8fbe74u))); FPOP();
    /* 0041ff2c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0041ff2e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0041ff2f: jb 0x41fd78 */ if (fC) goto L_0041fd78;
L_0041ff35:; BB(0x0041ff35);
    /* 0041ff35: mov ecx, edx */ r_ecx = r_edx;
    /* 0041ff37: mov eax, dword ptr [ecx + 0x3c8] */ r_eax = R32((u32)(r_ecx+0x3c8u));
    /* 0041ff3d: mov dword ptr [ecx + 0x86c], 2 */ W32((u32)(r_ecx+0x86cu), 0x2u);
    /* 0041ff47: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0041ff4c: mov dword ptr [ecx + 0x3c8], eax */ W32((u32)(r_ecx+0x3c8u), r_eax);
    /* 0041ff52: add ecx, 0x644 */ {  u32 a = r_ecx; u32 b = 0x644u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0041ff58: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0041ff5a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041ff5b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041ff5c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041ff5d: push 0x324 */ { u32 v = 0x324u; r_esp -= 4; W32(r_esp, v); }
    /* 0041ff62: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x41ff67u); f_00814298();
    /* 0041ff67: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041ff6a: jmp 0x41fd78 */ goto L_0041fd78;
L_0041ff6f:; BB(0x0041ff6f);
    /* 0041ff6f: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0041ff72: call 0x41ebc0 */ r_esp -= 4; W32(r_esp, 0x41ff77u); f_0041ebc0();
    /* 0041ff77: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0041ff7a: call 0x41c768 */ r_esp -= 4; W32(r_esp, 0x41ff7fu); f_0041c768();
    /* 0041ff7f: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0041ff82: call 0x41ffc0 */ r_esp -= 4; W32(r_esp, 0x41ff87u); f_0041ffc0();
    /* 0041ff87: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0041ff89: je 0x41fd78 */ if (fZ) goto L_0041fd78;
L_0041ff8f:; BB(0x0041ff8f);
    /* 0041ff8f: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0041ff92: mov eax, dword ptr [ecx + 0x87c] */ r_eax = R32((u32)(r_ecx+0x87cu));
    /* 0041ff98: mov dword ptr [ecx + 0x660], 0 */ W32((u32)(r_ecx+0x660u), 0x0u);
    /* 0041ffa2: mov dword ptr [ecx + 0x60], eax */ W32((u32)(r_ecx+0x60u), r_eax);
    /* 0041ffa5: mov dword ptr [ecx + 0x86c], 1 */ W32((u32)(r_ecx+0x86cu), 0x1u);
    /* 0041ffaf: mov edx, 0x16 */ r_edx = 0x16u;
    /* 0041ffb4: mov word ptr [ecx + 0xb8], dx */ W16((u32)(r_ecx+0xb8u), (u16)r_edx);
    /* 0041ffbb: jmp 0x41fd78 */ goto L_0041fd78;
}

void f_0041fd78(void)
{
    FN_ENTER(0x0041fd78);
    /* 0041fd78: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 0041fd7b: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 0041fd7e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0041fd81: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0041fd88: mov esp, ebp */ r_esp = r_ebp;
    /* 0041fd8a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041fd8b: mov esp, ebx */ r_esp = r_ebx;
    /* 0041fd8d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0041fd8e: ret 4 */ FN_RET(0x0041fd78); r_esp += 8; return;
}

void f_0041ffab(void)
{
    FN_ENTER(0x0041ffab);
    goto L_0041ffab;
L_0041fd78:; BB(0x0041fd78);
    /* 0041fd78: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 0041fd7b: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 0041fd7e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0041fd81: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0041fd88: mov esp, ebp */ r_esp = r_ebp;
    /* 0041fd8a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041fd8b: mov esp, ebx */ r_esp = r_ebx;
    /* 0041fd8d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0041fd8e: ret 4 */ FN_RET(0x0041ffab); r_esp += 8; return;
L_0041ffab:; BB(0x0041ffab);
    /* 0041ffab: add dword ptr [eax], eax */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0041ffad: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 7) & 1; fC = (r < a); }
    /* 0041ffaf: mov edx, 0x16 */ r_edx = 0x16u;
    /* 0041ffb4: mov word ptr [ecx + 0xb8], dx */ W16((u32)(r_ecx+0xb8u), (u16)r_edx);
    /* 0041ffbb: jmp 0x41fd78 */ goto L_0041fd78;
}

void f_0041ffc0(void) /* sub_41FFC0 */
{
    FN_ENTER(0x0041ffc0);
    /* 0041ffc0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0041ffc3: fld dword ptr [0x8fbcf0] */ FPUSH(R_F32((u32)(0x8fbcf0u)));
    /* 0041ffc9: fadd dword ptr [ecx + 0x680] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x680u));
    /* 0041ffcf: fcom dword ptr [0x8fbcec] */ fx_compare(ST(0), R_F32((u32)(0x8fbcecu))); 
    /* 0041ffd5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0041ffd7: fst dword ptr [ecx + 0x680] */ W_F32((u32)(r_ecx+0x680u), ST(0));
    /* 0041ffdd: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0041ffde: jbe 0x420048 */ if ((fC||fZ)) goto L_00420048;
L_0041ffe0:; BB(0x0041ffe0);
    /* 0041ffe0: fcom dword ptr [0x8fbce8] */ fx_compare(ST(0), R_F32((u32)(0x8fbce8u))); 
    /* 0041ffe6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0041ffe8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0041ffe9: ja 0x42003d */ if ((!fC&&!fZ)) goto L_0042003d;
L_0041ffeb:; BB(0x0041ffeb);
    /* 0041ffeb: fld dword ptr [0x8fbce4] */ FPUSH(R_F32((u32)(0x8fbce4u)));
    /* 0041fff1: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0041fff3: fld dword ptr [0x8fbce0] */ FPUSH(R_F32((u32)(0x8fbce0u)));
    /* 0041fff9: fmul dword ptr [ecx + 0x670] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x670u));
    /* 0041ffff: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00420001: fadd dword ptr [ecx + 0x678] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x678u));
    /* 00420007: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00420009: fadd dword ptr [ecx + 0x67c] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x67cu));
    /* 0042000f: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00420012: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00420016: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0042001b: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0042001f: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00420023: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 00420027: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0042002a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0042002c: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 00420030: add edx, dword ptr [ecx + 0x668] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x668u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00420036: mov dword ptr [ecx + 0x60], edx */ W32((u32)(r_ecx+0x60u), r_edx);
    /* 00420039: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042003c: ret  */ FN_RET(0x0041ffc0); r_esp += 4; return;
L_0042003d:; BB(0x0042003d);
    /* 0042003d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0042003f: mov eax, 1 */ r_eax = 0x1u;
    /* 00420044: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00420047: ret  */ FN_RET(0x0041ffc0); r_esp += 4; return;
L_00420048:; BB(0x00420048);
    /* 00420048: fld dword ptr [0x8fbce0] */ FPUSH(R_F32((u32)(0x8fbce0u)));
    /* 0042004e: fmul dword ptr [ecx + 0x66c] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x66cu));
    /* 00420054: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00420056: fadd dword ptr [ecx + 0x674] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x674u));
    /* 0042005c: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0042005e: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00420061: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00420065: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0042006a: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0042006e: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00420072: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 00420076: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00420079: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0042007b: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 0042007f: add edx, dword ptr [ecx + 0x668] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x668u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00420085: mov dword ptr [ecx + 0x60], edx */ W32((u32)(r_ecx+0x60u), r_edx);
    /* 00420088: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042008b: ret  */ FN_RET(0x0041ffc0); r_esp += 4; return;
}

