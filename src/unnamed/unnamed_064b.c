#include "protos.h"

void f_0064b038(void) /* sub_64B038 */
{
    FN_ENTER(0x0064b038);
    /* 0064b038: mov eax, dword ptr [ecx + 0x8c] */ r_eax = R32((u32)(r_ecx+0x8cu));
    /* 0064b03e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0064b040: jl 0x64b04e */ if ((fS!=fO)) goto L_0064b04e;
L_0064b042:; BB(0x0064b042);
    /* 0064b042: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0064b045: jl 0x64b050 */ if ((fS!=fO)) goto L_0064b050;
L_0064b047:; BB(0x0064b047);
    /* 0064b047: mov eax, 1 */ r_eax = 0x1u;
    /* 0064b04c: jmp 0x64b050 */ goto L_0064b050;
L_0064b04e:; BB(0x0064b04e);
    /* 0064b04e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_0064b050:; BB(0x0064b050);
    /* 0064b050: mov dword ptr [ecx + 0x8c], eax */ W32((u32)(r_ecx+0x8cu), r_eax);
    /* 0064b056: ret  */ FN_RET(0x0064b038); r_esp += 4; return;
}

void f_0064b058(void)
{
    FN_ENTER(0x0064b058);
    /* 0064b058: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064b059: mov ebp, esp */ r_ebp = r_esp;
    /* 0064b05b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0064b05d: push 0x8e6204 */ { u32 v = 0x8e6204u; r_esp -= 4; W32(r_esp, v); }
    /* 0064b062: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0064b068: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064b069: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0064b070: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0064b073: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0064b076: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0064b079: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0064b07c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0064b07f: push 0x104 */ { u32 v = 0x104u; r_esp -= 4; W32(r_esp, v); }
    /* 0064b084: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0064b08b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x64b090u); f_005caba4();
    /* 0064b090: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064b091: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0064b094: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064b096: je 0x64b0cf */ if (fZ) goto L_0064b0cf;
L_0064b098:; BB(0x0064b098);
    /* 0064b098: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0064b09f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0064b0a6: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0064b0a9: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 0064b0af: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064b0b2: call 0x64b0d4 */ r_esp -= 4; W32(r_esp, 0x64b0b7u); f_0064b0d4();
    /* 0064b0b7: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064b0ba: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0064b0c1:; BB(0x0064b0c1);
    /* 0064b0c1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0064b0c4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0064b0cb: mov esp, ebp */ r_esp = r_ebp;
    /* 0064b0cd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064b0ce: ret  */ FN_RET(0x0064b058); r_esp += 4; return;
L_0064b0cf:; BB(0x0064b0cf);
    /* 0064b0cf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0064b0d1: jmp 0x64b0c1 */ goto L_0064b0c1;
}

void f_0064b0d4(void) /* sub_64B0D4 */
{
    FN_ENTER(0x0064b0d4);
    /* 0064b0d4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0064b0d5: mov edi, ecx */ r_edi = r_ecx;
    /* 0064b0d7: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0064b0db: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0064b0df: mov ecx, edi */ r_ecx = r_edi;
    /* 0064b0e1: call 0x668ad8 */ r_esp -= 4; W32(r_esp, 0x64b0e6u); f_00668ad8();
    /* 0064b0e6: mov dword ptr [edi], 0xb302a0 */ W32((u32)(r_edi), 0xb302a0u);
    /* 0064b0ec: mov eax, dword ptr [0x9c7314] */ r_eax = R32((u32)(0x9c7314u));
    /* 0064b0f1: mov dword ptr [edi + 4], eax */ W32((u32)(r_edi+0x4u), r_eax);
    /* 0064b0f4: mov ecx, edi */ r_ecx = r_edi;
    /* 0064b0f6: call 0x64b038 */ r_esp -= 4; W32(r_esp, 0x64b0fbu); f_0064b038();
    /* 0064b0fb: mov dword ptr [edi + 0xac], 0x41b80000 */ W32((u32)(r_edi+0xacu), 0x41b80000u);
    /* 0064b105: mov eax, edi */ r_eax = r_edi;
    /* 0064b107: mov dword ptr [edi + 0x100], 0 */ W32((u32)(r_edi+0x100u), 0x0u);
    /* 0064b111: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0064b112: ret 8 */ FN_RET(0x0064b0d4); r_esp += 12; return;
}

void f_0064b118(void) /* sub_64B118 */
{
    FN_ENTER(0x0064b118);
    /* 0064b118: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0064b119: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0064b11c: mov edi, ecx */ r_edi = r_ecx;
    /* 0064b11e: mov edx, dword ptr [0xa8f434] */ r_edx = R32((u32)(0xa8f434u));
    /* 0064b124: fld dword ptr [0x9363f4] */ FPUSH(R_F32((u32)(0x9363f4u)));
    /* 0064b12a: fadd dword ptr [edi + 0x100] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x100u));
    /* 0064b130: mov eax, dword ptr [edx + 0x430] */ r_eax = R32((u32)(r_edx+0x430u));
    /* 0064b136: mov eax, dword ptr [eax + 0x3c] */ r_eax = R32((u32)(r_eax+0x3cu));
    /* 0064b139: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 0064b13c: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0064b13f: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0064b142: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 0064b145: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0064b148: fadd dword ptr [eax*4 + 0x936390] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x936390u));
    /* 0064b14f: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0064b151: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0064b153: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0064b154: ja 0x64b160 */ if ((!fC&&!fZ)) goto L_0064b160;
L_0064b156:; BB(0x0064b156);
    /* 0064b156: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0064b158: fstp dword ptr [edi + 0x100] */ W_F32((u32)(r_edi+0x100u), ST(0)); FPOP();
    /* 0064b15e: jmp 0x64b168 */ goto L_0064b168;
L_0064b160:; BB(0x0064b160);
    /* 0064b160: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0064b162: fstp dword ptr [edi + 0x100] */ W_F32((u32)(r_edi+0x100u), ST(0)); FPOP();
L_0064b168:; BB(0x0064b168);
    /* 0064b168: mov eax, dword ptr [0xaafdb8] */ r_eax = R32((u32)(0xaafdb8u));
    /* 0064b16d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064b16f: jne 0x64b18a */ if (!fZ) goto L_0064b18a;
L_0064b171:; BB(0x0064b171);
    /* 0064b171: call 0x78b1c4 */ r_esp -= 4; W32(r_esp, 0x64b176u); f_0078b1c4();
    /* 0064b176: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064b179: je 0x64b185 */ if (fZ) goto L_0064b185;
L_0064b17b:; BB(0x0064b17b);
    /* 0064b17b: call 0x78b1c4 */ r_esp -= 4; W32(r_esp, 0x64b180u); f_0078b1c4();
    /* 0064b180: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064b183: jne 0x64b18a */ if (!fZ) goto L_0064b18a;
L_0064b185:; BB(0x0064b185);
    /* 0064b185: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0064b188: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0064b189: ret  */ FN_RET(0x0064b118); r_esp += 4; return;
L_0064b18a:; BB(0x0064b18a);
    /* 0064b18a: mov ecx, edi */ r_ecx = r_edi;
    /* 0064b18c: call 0x669048 */ r_esp -= 4; W32(r_esp, 0x64b191u); f_00669048();
    /* 0064b191: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0064b194: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0064b195: ret  */ FN_RET(0x0064b118); r_esp += 4; return;
}

void f_0064b198(void) /* sub_64B198 */
{
    FN_ENTER(0x0064b198);
    /* 0064b198: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0064b199: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0064b19b: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0064b19d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0064b19f: push 0x42000000 */ { u32 v = 0x42000000u; r_esp -= 4; W32(r_esp, v); }
    /* 0064b1a4: push 0x43c80000 */ { u32 v = 0x43c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 0064b1a9: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x64b1acu); call_ind(t); }
    /* 0064b1ac: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0064b1ae: jne 0x64b1b2 */ if (!fZ) goto L_0064b1b2;
L_0064b1b0:; BB(0x0064b1b0);
    /* 0064b1b0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0064b1b1: ret  */ FN_RET(0x0064b198); r_esp += 4; return;
L_0064b1b2:; BB(0x0064b1b2);
    /* 0064b1b2: mov ecx, dword ptr [0xa8f430] */ r_ecx = R32((u32)(0xa8f430u));
    /* 0064b1b8: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x64b1bdu); f_00829cc8();
    /* 0064b1bd: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x64b1c2u); f_0082d7b0();
    /* 0064b1c2: lea ecx, [ebx + 0x38] */ r_ecx = (u32)(r_ebx+0x38u);
    /* 0064b1c5: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x64b1cau); f_0082d838();
    /* 0064b1ca: mov edx, dword ptr [ebx + 0x60] */ r_edx = R32((u32)(r_ebx+0x60u));
    /* 0064b1cd: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0064b1cf: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x64b1d4u); f_0082d8bc();
    /* 0064b1d4: mov eax, dword ptr [ebx + 0x88] */ r_eax = R32((u32)(r_ebx+0x88u));
    /* 0064b1da: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064b1dc: jne 0x64b222 */ if (!fZ) goto L_0064b222;
L_0064b1de:; BB(0x0064b1de);
    /* 0064b1de: mov eax, dword ptr [0xa8f434] */ r_eax = R32((u32)(0xa8f434u));
    /* 0064b1e3: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 0064b1e9: mov ecx, dword ptr [edx + 0xd8] */ r_ecx = R32((u32)(r_edx+0xd8u));
    /* 0064b1ef: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x64b1f4u); f_00831758();
    /* 0064b1f4: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x64b1f9u); f_0082dbac();
    /* 0064b1f9: mov eax, dword ptr [0xa8f434] */ r_eax = R32((u32)(0xa8f434u));
    /* 0064b1fe: push dword ptr [ebx + 0x100] */ { u32 v = R32((u32)(r_ebx+0x100u)); r_esp -= 4; W32(r_esp, v); }
    /* 0064b204: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 0064b20a: mov eax, dword ptr [eax + 0x430] */ r_eax = R32((u32)(r_eax+0x430u));
    /* 0064b210: mov ecx, dword ptr [edx + 0x38] */ r_ecx = R32((u32)(r_edx+0x38u));
    /* 0064b213: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 0064b216: call 0x83bd00 */ r_esp -= 4; W32(r_esp, 0x64b21bu); f_0083bd00();
    /* 0064b21b: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x64b220u); f_0082dab0();
    /* 0064b220: jmp 0x64b24e */ goto L_0064b24e;
L_0064b222:; BB(0x0064b222);
    /* 0064b222: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x64b227u); f_0082dbac();
    /* 0064b227: mov eax, dword ptr [0xa8f434] */ r_eax = R32((u32)(0xa8f434u));
    /* 0064b22c: push dword ptr [ebx + 0x100] */ { u32 v = R32((u32)(r_ebx+0x100u)); r_esp -= 4; W32(r_esp, v); }
    /* 0064b232: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 0064b238: mov eax, dword ptr [eax + 0x430] */ r_eax = R32((u32)(r_eax+0x430u));
    /* 0064b23e: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 0064b241: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 0064b244: call 0x83bd00 */ r_esp -= 4; W32(r_esp, 0x64b249u); f_0083bd00();
    /* 0064b249: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x64b24eu); f_0082dab0();
L_0064b24e:; BB(0x0064b24e);
    /* 0064b24e: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x64b253u); f_0082da80();
    /* 0064b253: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0064b254: ret  */ FN_RET(0x0064b198); r_esp += 4; return;
}

void f_0064b258(void) /* sub_64B258 */
{
    FN_ENTER(0x0064b258);
    /* 0064b258: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0064b259: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0064b25b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0064b25d: call 0x64b038 */ r_esp -= 4; W32(r_esp, 0x64b262u); f_0064b038();
    /* 0064b262: push 0x936508 */ { u32 v = 0x936508u; r_esp -= 4; W32(r_esp, v); }
    /* 0064b267: push 0x13001c */ { u32 v = 0x13001cu; r_esp -= 4; W32(r_esp, v); }
    /* 0064b26c: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x64b271u); f_0061cdb0();
    /* 0064b271: push 0x936518 */ { u32 v = 0x936518u; r_esp -= 4; W32(r_esp, v); }
    /* 0064b276: push 0x13001d */ { u32 v = 0x13001du; r_esp -= 4; W32(r_esp, v); }
    /* 0064b27b: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x64b280u); f_0061cdb0();
    /* 0064b280: push 0x936528 */ { u32 v = 0x936528u; r_esp -= 4; W32(r_esp, v); }
    /* 0064b285: push 0x13001e */ { u32 v = 0x13001eu; r_esp -= 4; W32(r_esp, v); }
    /* 0064b28a: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x64b28fu); f_0061cdb0();
    /* 0064b28f: push 0x936538 */ { u32 v = 0x936538u; r_esp -= 4; W32(r_esp, v); }
    /* 0064b294: push 0x130020 */ { u32 v = 0x130020u; r_esp -= 4; W32(r_esp, v); }
    /* 0064b299: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x64b29eu); f_0061cdb0();
    /* 0064b29e: push 0x936548 */ { u32 v = 0x936548u; r_esp -= 4; W32(r_esp, v); }
    /* 0064b2a3: push 0x130021 */ { u32 v = 0x130021u; r_esp -= 4; W32(r_esp, v); }
    /* 0064b2a8: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x64b2adu); f_0061cdb0();
    /* 0064b2ad: mov eax, dword ptr [ebx + 0x8c] */ r_eax = R32((u32)(r_ebx+0x8cu));
    /* 0064b2b3: push dword ptr [eax*4 + 0x9c72d0] */ { u32 v = R32((u32)(r_eax*4+0x9c72d0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0064b2ba: push 0x936558 */ { u32 v = 0x936558u; r_esp -= 4; W32(r_esp, v); }
    /* 0064b2bf: push 0x130022 */ { u32 v = 0x130022u; r_esp -= 4; W32(r_esp, v); }
    /* 0064b2c4: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x64b2c9u); f_0061cdb0();
    /* 0064b2c9: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0064b2cc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0064b2cd: ret  */ FN_RET(0x0064b258); r_esp += 4; return;
}

void f_0064b2d0(void) /* sub_64B2D0 */
{
    FN_ENTER(0x0064b2d0);
    /* 0064b2d0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0064b2d1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0064b2d2: mov edi, ecx */ r_edi = r_ecx;
    /* 0064b2d4: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 0064b2d8: mov eax, dword ptr [edi + esi*4 + 0xf0] */ r_eax = R32((u32)(r_edi+r_esi*4+0xf0u));
    /* 0064b2df: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0064b2e1: je 0x64b2e8 */ if (fZ) goto L_0064b2e8;
L_0064b2e3:; BB(0x0064b2e3);
    /* 0064b2e3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0064b2e4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0064b2e5: ret 4 */ FN_RET(0x0064b2d0); r_esp += 8; return;
L_0064b2e8:; BB(0x0064b2e8);
    /* 0064b2e8: push 0x35 */ { u32 v = 0x35u; r_esp -= 4; W32(r_esp, v); }
    /* 0064b2ea: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x64b2efu); f_0073ec50();
    /* 0064b2ef: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0064b2f0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0064b2f2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064b2f3: call 0x7354fc */ r_esp -= 4; W32(r_esp, 0x64b2f8u); f_007354fc();
    /* 0064b2f8: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064b2fb: mov dword ptr [edi + esi*4 + 0xf0], eax */ W32((u32)(r_edi+r_esi*4+0xf0u), r_eax);
    /* 0064b302: mov ecx, edi */ r_ecx = r_edi;
    /* 0064b304: call 0x64b38c */ r_esp -= 4; W32(r_esp, 0x64b309u); f_0064b38c();
    /* 0064b309: mov eax, dword ptr [edi + 0x8c] */ r_eax = R32((u32)(r_edi+0x8cu));
    /* 0064b30f: push dword ptr [eax*4 + 0x9363d0] */ { u32 v = R32((u32)(r_eax*4+0x9363d0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0064b316: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0064b318: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x64b31du); f_00792fe8();
    /* 0064b31d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064b320: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0064b322: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064b324: mov ecx, dword ptr [edi + esi*4 + 0xf0] */ r_ecx = R32((u32)(r_edi+r_esi*4+0xf0u));
    /* 0064b32b: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0064b32d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064b32e: call 0x735db8 */ r_esp -= 4; W32(r_esp, 0x64b333u); f_00735db8();
    /* 0064b333: mov edx, dword ptr [edi + esi*4 + 0xf0] */ r_edx = R32((u32)(r_edi+r_esi*4+0xf0u));
    /* 0064b33a: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 0064b341: or eax, 0xffff0010 */ {  u32 a = r_eax; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0064b346: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
    /* 0064b34d: mov edx, dword ptr [edi + esi*4 + 0xf0] */ r_edx = R32((u32)(r_edi+r_esi*4+0xf0u));
    /* 0064b354: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 0064b35b: or eax, 0xffff0040 */ {  u32 a = r_eax; u32 b = 0xffff0040u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0064b360: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
    /* 0064b367: mov ecx, dword ptr [edi + esi*4 + 0xf0] */ r_ecx = R32((u32)(r_edi+r_esi*4+0xf0u));
    /* 0064b36e: call 0x73608c */ r_esp -= 4; W32(r_esp, 0x64b373u); f_0073608c();
    /* 0064b373: mov ecx, dword ptr [edi + esi*4 + 0xf0] */ r_ecx = R32((u32)(r_edi+r_esi*4+0xf0u));
    /* 0064b37a: call 0x736458 */ r_esp -= 4; W32(r_esp, 0x64b37fu); f_00736458();
    /* 0064b37f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064b381: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x64b386u); f_00791748();
    /* 0064b386: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064b387: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0064b388: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0064b389: ret 4 */ FN_RET(0x0064b2d0); r_esp += 8; return;
}

void f_0064b38c(void) /* sub_64B38C */
{
    FN_ENTER(0x0064b38c);
    /* 0064b38c: mov eax, dword ptr [ecx + 0x8c] */ r_eax = R32((u32)(r_ecx+0x8cu));
    /* 0064b392: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0064b394: jl 0x64b3a2 */ if ((fS!=fO)) goto L_0064b3a2;
L_0064b396:; BB(0x0064b396);
    /* 0064b396: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0064b399: jl 0x64b3a4 */ if ((fS!=fO)) goto L_0064b3a4;
L_0064b39b:; BB(0x0064b39b);
    /* 0064b39b: mov eax, 2 */ r_eax = 0x2u;
    /* 0064b3a0: jmp 0x64b3a4 */ goto L_0064b3a4;
L_0064b3a2:; BB(0x0064b3a2);
    /* 0064b3a2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_0064b3a4:; BB(0x0064b3a4);
    /* 0064b3a4: mov dword ptr [ecx + 0x8c], eax */ W32((u32)(r_ecx+0x8cu), r_eax);
    /* 0064b3aa: ret  */ FN_RET(0x0064b38c); r_esp += 4; return;
}

void f_0064b3ac(void)
{
    FN_ENTER(0x0064b3ac);
    /* 0064b3ac: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064b3ad: mov ebp, esp */ r_ebp = r_esp;
    /* 0064b3af: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0064b3b1: push 0x8e622c */ { u32 v = 0x8e622cu; r_esp -= 4; W32(r_esp, v); }
    /* 0064b3b6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0064b3bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064b3bd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0064b3c4: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0064b3c7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0064b3ca: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0064b3cd: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0064b3d0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0064b3d3: push 0x104 */ { u32 v = 0x104u; r_esp -= 4; W32(r_esp, v); }
    /* 0064b3d8: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0064b3df: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x64b3e4u); f_005caba4();
    /* 0064b3e4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064b3e5: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0064b3e8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064b3ea: je 0x64b423 */ if (fZ) goto L_0064b423;
L_0064b3ec:; BB(0x0064b3ec);
    /* 0064b3ec: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0064b3f3: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0064b3fa: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0064b3fd: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 0064b403: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064b406: call 0x64b428 */ r_esp -= 4; W32(r_esp, 0x64b40bu); f_0064b428();
    /* 0064b40b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064b40e: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0064b415:; BB(0x0064b415);
    /* 0064b415: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0064b418: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0064b41f: mov esp, ebp */ r_esp = r_ebp;
    /* 0064b421: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064b422: ret  */ FN_RET(0x0064b3ac); r_esp += 4; return;
L_0064b423:; BB(0x0064b423);
    /* 0064b423: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0064b425: jmp 0x64b415 */ goto L_0064b415;
}

void f_0064b428(void) /* sub_64B428 */
{
    FN_ENTER(0x0064b428);
    /* 0064b428: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0064b429: mov edi, ecx */ r_edi = r_ecx;
    /* 0064b42b: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0064b42f: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0064b433: mov ecx, edi */ r_ecx = r_edi;
    /* 0064b435: call 0x668ad8 */ r_esp -= 4; W32(r_esp, 0x64b43au); f_00668ad8();
    /* 0064b43a: mov dword ptr [edi], 0xb30300 */ W32((u32)(r_edi), 0xb30300u);
    /* 0064b440: mov eax, dword ptr [0x9c7318] */ r_eax = R32((u32)(0x9c7318u));
    /* 0064b445: mov dword ptr [edi + 4], eax */ W32((u32)(r_edi+0x4u), r_eax);
    /* 0064b448: mov ecx, edi */ r_ecx = r_edi;
    /* 0064b44a: call 0x64b38c */ r_esp -= 4; W32(r_esp, 0x64b44fu); f_0064b38c();
    /* 0064b44f: mov dword ptr [edi + 0xac], 0x41b80000 */ W32((u32)(r_edi+0xacu), 0x41b80000u);
    /* 0064b459: mov eax, edi */ r_eax = r_edi;
    /* 0064b45b: mov dword ptr [edi + 0x100], 0 */ W32((u32)(r_edi+0x100u), 0x0u);
    /* 0064b465: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0064b466: ret 8 */ FN_RET(0x0064b428); r_esp += 12; return;
}

void f_0064b46c(void) /* sub_64B46C */
{
    FN_ENTER(0x0064b46c);
    /* 0064b46c: mov ecx, dword ptr [0xa8f514] */ r_ecx = R32((u32)(0xa8f514u));
    /* 0064b472: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0064b474: je 0x64b489 */ if (fZ) goto L_0064b489;
L_0064b476:; BB(0x0064b476);
    /* 0064b476: je 0x64b47f */ if (fZ) goto L_0064b47f;
L_0064b478:; BB(0x0064b478);
    /* 0064b478: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0064b47a: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x64b47fu); f_004066a8();
L_0064b47f:; BB(0x0064b47f);
    /* 0064b47f: mov dword ptr [0xa8f514], 0 */ W32((u32)(0xa8f514u), 0x0u);
L_0064b489:; BB(0x0064b489);
    /* 0064b489: ret  */ FN_RET(0x0064b46c); r_esp += 4; return;
}

void f_0064b48c(void) /* sub_64B48C */
{
    FN_ENTER(0x0064b48c);
    /* 0064b48c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0064b48d: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0064b490: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0064b492: mov ecx, dword ptr [0xa8f514] */ r_ecx = R32((u32)(0xa8f514u));
    /* 0064b498: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064b49a: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x64b49fu); f_005b8638();
    /* 0064b49f: fld dword ptr [0x9363f4] */ FPUSH(R_F32((u32)(0x9363f4u)));
    /* 0064b4a5: fadd dword ptr [ebx + 0x100] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x100u));
    /* 0064b4ab: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0064b4ae: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0064b4b1: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0064b4b4: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 0064b4b7: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0064b4ba: fadd dword ptr [edx*4 + 0x936388] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x936388u));
    /* 0064b4c1: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0064b4c3: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0064b4c5: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0064b4c6: ja 0x64b4d2 */ if ((!fC&&!fZ)) goto L_0064b4d2;
L_0064b4c8:; BB(0x0064b4c8);
    /* 0064b4c8: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0064b4ca: fstp dword ptr [ebx + 0x100] */ W_F32((u32)(r_ebx+0x100u), ST(0)); FPOP();
    /* 0064b4d0: jmp 0x64b4da */ goto L_0064b4da;
L_0064b4d2:; BB(0x0064b4d2);
    /* 0064b4d2: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0064b4d4: fstp dword ptr [ebx + 0x100] */ W_F32((u32)(r_ebx+0x100u), ST(0)); FPOP();
L_0064b4da:; BB(0x0064b4da);
    /* 0064b4da: mov eax, dword ptr [0xaafdb8] */ r_eax = R32((u32)(0xaafdb8u));
    /* 0064b4df: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064b4e1: jne 0x64b4fc */ if (!fZ) goto L_0064b4fc;
L_0064b4e3:; BB(0x0064b4e3);
    /* 0064b4e3: call 0x78b1c4 */ r_esp -= 4; W32(r_esp, 0x64b4e8u); f_0078b1c4();
    /* 0064b4e8: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064b4eb: je 0x64b4f7 */ if (fZ) goto L_0064b4f7;
L_0064b4ed:; BB(0x0064b4ed);
    /* 0064b4ed: call 0x78b1c4 */ r_esp -= 4; W32(r_esp, 0x64b4f2u); f_0078b1c4();
    /* 0064b4f2: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064b4f5: jne 0x64b4fc */ if (!fZ) goto L_0064b4fc;
L_0064b4f7:; BB(0x0064b4f7);
    /* 0064b4f7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0064b4fa: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0064b4fb: ret  */ FN_RET(0x0064b48c); r_esp += 4; return;
L_0064b4fc:; BB(0x0064b4fc);
    /* 0064b4fc: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0064b4fe: call 0x669048 */ r_esp -= 4; W32(r_esp, 0x64b503u); f_00669048();
    /* 0064b503: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0064b506: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0064b507: ret  */ FN_RET(0x0064b48c); r_esp += 4; return;
}

void f_0064b508(void) /* sub_64B508 */
{
    FN_ENTER(0x0064b508);
    /* 0064b508: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0064b509: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064b50a: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0064b50c: push 0x42000000 */ { u32 v = 0x42000000u; r_esp -= 4; W32(r_esp, v); }
    /* 0064b511: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0064b513: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0064b516: push 0x43c80000 */ { u32 v = 0x43c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 0064b51b: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x64b51eu); call_ind(t); }
    /* 0064b51e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0064b520: jne 0x64b525 */ if (!fZ) goto L_0064b525;
L_0064b522:; BB(0x0064b522);
    /* 0064b522: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064b523: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0064b524: ret  */ FN_RET(0x0064b508); r_esp += 4; return;
L_0064b525:; BB(0x0064b525);
    /* 0064b525: mov ecx, dword ptr [0xa8f514] */ r_ecx = R32((u32)(0xa8f514u));
    /* 0064b52b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0064b52d: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x64b532u); f_005b8624();
    /* 0064b532: mov ecx, eax */ r_ecx = r_eax;
    /* 0064b534: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x64b539u); f_00829cc8();
    /* 0064b539: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x64b53eu); f_0082d7b0();
    /* 0064b53e: lea ecx, [ebp + 0x38] */ r_ecx = (u32)(r_ebp+0x38u);
    /* 0064b541: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x64b546u); f_0082d838();
    /* 0064b546: mov edx, dword ptr [ebp + 0x60] */ r_edx = R32((u32)(r_ebp+0x60u));
    /* 0064b549: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0064b54b: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x64b550u); f_0082d8bc();
    /* 0064b550: mov eax, dword ptr [ebp + 0x88] */ r_eax = R32((u32)(r_ebp+0x88u));
    /* 0064b556: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064b558: jne 0x64b5a5 */ if (!fZ) goto L_0064b5a5;
L_0064b55a:; BB(0x0064b55a);
    /* 0064b55a: mov ecx, dword ptr [0xa8f514] */ r_ecx = R32((u32)(0xa8f514u));
    /* 0064b560: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0064b562: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x64b567u); f_005b8610();
    /* 0064b567: mov ecx, eax */ r_ecx = r_eax;
    /* 0064b569: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x64b56eu); f_00831758();
    /* 0064b56e: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x64b573u); f_0082dbac();
    /* 0064b573: mov ecx, dword ptr [0xa8f514] */ r_ecx = R32((u32)(0xa8f514u));
    /* 0064b579: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064b57b: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x64b580u); f_005b8610();
    /* 0064b580: mov esi, eax */ r_esi = r_eax;
    /* 0064b582: mov ecx, dword ptr [0xa8f514] */ r_ecx = R32((u32)(0xa8f514u));
    /* 0064b588: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064b58a: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x64b58fu); f_005b8638();
    /* 0064b58f: push dword ptr [ebp + 0x100] */ { u32 v = R32((u32)(r_ebp+0x100u)); r_esp -= 4; W32(r_esp, v); }
    /* 0064b595: mov ecx, esi */ r_ecx = r_esi;
    /* 0064b597: mov edx, eax */ r_edx = r_eax;
    /* 0064b599: call 0x83bd00 */ r_esp -= 4; W32(r_esp, 0x64b59eu); f_0083bd00();
    /* 0064b59e: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x64b5a3u); f_0082dab0();
    /* 0064b5a3: jmp 0x64b5da */ goto L_0064b5da;
L_0064b5a5:; BB(0x0064b5a5);
    /* 0064b5a5: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x64b5aau); f_0082dbac();
    /* 0064b5aa: mov ecx, dword ptr [0xa8f514] */ r_ecx = R32((u32)(0xa8f514u));
    /* 0064b5b0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064b5b2: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x64b5b7u); f_005b8610();
    /* 0064b5b7: mov esi, eax */ r_esi = r_eax;
    /* 0064b5b9: mov ecx, dword ptr [0xa8f514] */ r_ecx = R32((u32)(0xa8f514u));
    /* 0064b5bf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064b5c1: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x64b5c6u); f_005b8638();
    /* 0064b5c6: push dword ptr [ebp + 0x100] */ { u32 v = R32((u32)(r_ebp+0x100u)); r_esp -= 4; W32(r_esp, v); }
    /* 0064b5cc: mov ecx, esi */ r_ecx = r_esi;
    /* 0064b5ce: mov edx, eax */ r_edx = r_eax;
    /* 0064b5d0: call 0x83bd00 */ r_esp -= 4; W32(r_esp, 0x64b5d5u); f_0083bd00();
    /* 0064b5d5: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x64b5dau); f_0082dab0();
L_0064b5da:; BB(0x0064b5da);
    /* 0064b5da: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x64b5dfu); f_0082da80();
    /* 0064b5df: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064b5e0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0064b5e1: ret  */ FN_RET(0x0064b508); r_esp += 4; return;
}

void f_0064b5e4(void) /* sub_64B5E4 */
{
    FN_ENTER(0x0064b5e4);
    /* 0064b5e4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0064b5e5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0064b5e7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0064b5e9: call 0x64b38c */ r_esp -= 4; W32(r_esp, 0x64b5eeu); f_0064b38c();
    /* 0064b5ee: push 0x936508 */ { u32 v = 0x936508u; r_esp -= 4; W32(r_esp, v); }
    /* 0064b5f3: push 0x13001c */ { u32 v = 0x13001cu; r_esp -= 4; W32(r_esp, v); }
    /* 0064b5f8: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x64b5fdu); f_0061cdb0();
    /* 0064b5fd: push 0x936518 */ { u32 v = 0x936518u; r_esp -= 4; W32(r_esp, v); }
    /* 0064b602: push 0x13001d */ { u32 v = 0x13001du; r_esp -= 4; W32(r_esp, v); }
    /* 0064b607: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x64b60cu); f_0061cdb0();
    /* 0064b60c: push 0x936528 */ { u32 v = 0x936528u; r_esp -= 4; W32(r_esp, v); }
    /* 0064b611: push 0x13001e */ { u32 v = 0x13001eu; r_esp -= 4; W32(r_esp, v); }
    /* 0064b616: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x64b61bu); f_0061cdb0();
    /* 0064b61b: push 0x936538 */ { u32 v = 0x936538u; r_esp -= 4; W32(r_esp, v); }
    /* 0064b620: push 0x130020 */ { u32 v = 0x130020u; r_esp -= 4; W32(r_esp, v); }
    /* 0064b625: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x64b62au); f_0061cdb0();
    /* 0064b62a: push 0x936548 */ { u32 v = 0x936548u; r_esp -= 4; W32(r_esp, v); }
    /* 0064b62f: push 0x130021 */ { u32 v = 0x130021u; r_esp -= 4; W32(r_esp, v); }
    /* 0064b634: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x64b639u); f_0061cdb0();
    /* 0064b639: mov eax, dword ptr [ebx + 0x8c] */ r_eax = R32((u32)(r_ebx+0x8cu));
    /* 0064b63f: push dword ptr [eax*4 + 0x9c72dc] */ { u32 v = R32((u32)(r_eax*4+0x9c72dcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0064b646: push 0x936558 */ { u32 v = 0x936558u; r_esp -= 4; W32(r_esp, v); }
    /* 0064b64b: push 0x130022 */ { u32 v = 0x130022u; r_esp -= 4; W32(r_esp, v); }
    /* 0064b650: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x64b655u); f_0061cdb0();
    /* 0064b655: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0064b658: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0064b659: ret  */ FN_RET(0x0064b5e4); r_esp += 4; return;
}

void f_0064b688(void) /* sub_64B688 */
{
    FN_ENTER(0x0064b688);
    /* 0064b688: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064b689: mov ebp, esp */ r_ebp = r_esp;
    /* 0064b68b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0064b68d: push 0x8e6254 */ { u32 v = 0x8e6254u; r_esp -= 4; W32(r_esp, v); }
    /* 0064b692: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0064b698: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064b699: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0064b6a0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0064b6a3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0064b6a6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0064b6a9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0064b6ac: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0064b6af: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 0064b6b4: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0064b6bb: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x64b6c0u); f_008581c5();
    /* 0064b6c0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064b6c1: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0064b6c4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064b6c6: je 0x64b707 */ if (fZ) goto L_0064b707;
L_0064b6c8:; BB(0x0064b6c8);
    /* 0064b6c8: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0064b6cf: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0064b6d6: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064b6d9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0064b6db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064b6dc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064b6dd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064b6de: push 0x9c72fc */ { u32 v = 0x9c72fcu; r_esp -= 4; W32(r_esp, v); }
    /* 0064b6e3: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0064b6e5: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x64b6eau); f_005b7a84();
    /* 0064b6ea: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064b6ed: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0064b6f4:; BB(0x0064b6f4);
    /* 0064b6f4: mov dword ptr [0xa8f514], eax */ W32((u32)(0xa8f514u), r_eax);
    /* 0064b6f9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0064b6fc: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0064b703: mov esp, ebp */ r_esp = r_ebp;
    /* 0064b705: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064b706: ret  */ FN_RET(0x0064b688); r_esp += 4; return;
L_0064b707:; BB(0x0064b707);
    /* 0064b707: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0064b709: jmp 0x64b6f4 */ goto L_0064b6f4;
}

void f_0064b70c(void) /* sub_64B70C */
{
    FN_ENTER(0x0064b70c);
    /* 0064b70c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0064b70d: mov dword ptr [0xa8f500], 0 */ W32((u32)(0xa8f500u), 0x0u);
    /* 0064b717: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0064b719: call 0x64a428 */ r_esp -= 4; W32(r_esp, 0x64b71eu); f_0064a428();
    /* 0064b71e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064b71f: ret  */ FN_RET(0x0064b70c); r_esp += 4; return;
}

void f_0064b720(void) /* sub_64B720 */
{
    FN_ENTER(0x0064b720);
    /* 0064b720: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0064b721: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0064b723: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0064b725: call 0x64b744 */ r_esp -= 4; W32(r_esp, 0x64b72au); f_0064b744();
    /* 0064b72a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0064b72e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0064b730: jne 0x64b736 */ if (!fZ) goto L_0064b736;
L_0064b732:; BB(0x0064b732);
    /* 0064b732: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0064b733: ret 4 */ FN_RET(0x0064b720); r_esp += 8; return;
L_0064b736:; BB(0x0064b736);
    /* 0064b736: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0064b737: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x64b73cu); f_005c2f74();
    /* 0064b73c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064b73d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0064b73e: ret 4 */ FN_RET(0x0064b720); r_esp += 8; return;
}

void f_0064b744(void) /* sub_64B744 */
{
    FN_ENTER(0x0064b744);
    /* 0064b744: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064b745: mov ebp, esp */ r_ebp = r_esp;
    /* 0064b747: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0064b749: push 0x8e6270 */ { u32 v = 0x8e6270u; r_esp -= 4; W32(r_esp, v); }
    /* 0064b74e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0064b754: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064b755: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0064b75c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0064b75f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0064b762: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0064b765: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0064b768: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0064b76b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0064b76e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0064b775: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064b778: mov dword ptr [eax], 0xb303c0 */ W32((u32)(r_eax), 0xb303c0u);
    /* 0064b77e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064b77f: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x64b784u); f_007b4e84();
    /* 0064b784: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064b785: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064b788: call 0x64cb44 */ r_esp -= 4; W32(r_esp, 0x64b78du); f_0064cb44();
    /* 0064b78d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0064b794: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064b797: call 0x66873c */ r_esp -= 4; W32(r_esp, 0x64b79cu); f_0066873c();
    /* 0064b79c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0064b79f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0064b7a6: mov esp, ebp */ r_esp = r_ebp;
    /* 0064b7a8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064b7a9: ret  */ FN_RET(0x0064b744); r_esp += 4; return;
}

void f_0064b7ac(void) /* sub_64B7AC */
{
    FN_ENTER(0x0064b7ac);
    /* 0064b7ac: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064b7ad: mov ebp, esp */ r_ebp = r_esp;
    /* 0064b7af: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0064b7b1: push 0x8e628c */ { u32 v = 0x8e628cu; r_esp -= 4; W32(r_esp, v); }
    /* 0064b7b6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0064b7bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064b7bd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0064b7c4: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0064b7c7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0064b7ca: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0064b7cd: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0064b7d0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0064b7d3: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0064b7d6: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0064b7d9: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0064b7dc: call 0x66982c */ r_esp -= 4; W32(r_esp, 0x64b7e1u); f_0066982c();
    /* 0064b7e1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0064b7e8: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064b7eb: mov edx, dword ptr [ecx + 0x84] */ r_edx = R32((u32)(r_ecx+0x84u));
    /* 0064b7f1: mov dword ptr [ecx], 0xb303c0 */ W32((u32)(r_ecx), 0xb303c0u);
    /* 0064b7f7: mov eax, dword ptr [0x9c731c] */ r_eax = R32((u32)(0x9c731cu));
    /* 0064b7fc: mov dword ptr [ecx + 0xc8], 0 */ W32((u32)(r_ecx+0xc8u), 0x0u);
    /* 0064b806: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0064b809: mov dword ptr [ecx + 0xc0], edx */ W32((u32)(r_ecx+0xc0u), r_edx);
    /* 0064b80f: mov dword ptr [ecx + 0xac], 0x41980000 */ W32((u32)(r_ecx+0xacu), 0x41980000u);
    /* 0064b819: mov dword ptr [0xa8f534], edx */ W32((u32)(0xa8f534u), r_edx);
    /* 0064b81f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064b820: mov dword ptr [ecx + 0xa4], 0 */ W32((u32)(r_ecx+0xa4u), 0x0u);
    /* 0064b82a: call 0x7b4d98 */ r_esp -= 4; W32(r_esp, 0x64b82fu); f_007b4d98();
    /* 0064b82f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064b830: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064b833: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0064b835: mov dword ptr [edx + 0x1c8], eax */ W32((u32)(r_edx+0x1c8u), r_eax);
    /* 0064b83b: mov dword ptr [edx + 0x1cc], eax */ W32((u32)(r_edx+0x1ccu), r_eax);
    /* 0064b841: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x64b846u); f_00807ac0();
    /* 0064b846: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064b848: jne 0x64b85e */ if (!fZ) goto L_0064b85e;
L_0064b84a:; BB(0x0064b84a);
    /* 0064b84a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064b84d: mov dword ptr [eax + 0x1d0], 0xffffffff */ W32((u32)(r_eax+0x1d0u), 0xffffffffu);
    /* 0064b857: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 0064b85c: jmp 0x64b88a */ goto L_0064b88a;
L_0064b85e:; BB(0x0064b85e);
    /* 0064b85e: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064b861: mov edx, dword ptr [eax + 0x88] */ r_edx = R32((u32)(r_eax+0x88u));
    /* 0064b867: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0064b869: jl 0x64b873 */ if ((fS!=fO)) goto L_0064b873;
L_0064b86b:; BB(0x0064b86b);
    /* 0064b86b: cmp edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0064b871: jle 0x64b884 */ if ((fZ||fS!=fO)) goto L_0064b884;
L_0064b873:; BB(0x0064b873);
    /* 0064b873: mov dword ptr [eax + 0x1d0], 0xffffffff */ W32((u32)(r_eax+0x1d0u), 0xffffffffu);
    /* 0064b87d: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 0064b882: jmp 0x64b88a */ goto L_0064b88a;
L_0064b884:; BB(0x0064b884);
    /* 0064b884: mov dword ptr [eax + 0x1d0], edx */ W32((u32)(r_eax+0x1d0u), r_edx);
L_0064b88a:; BB(0x0064b88a);
    /* 0064b88a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0064b88c: jl 0x64b930 */ if ((fS!=fO)) goto L_0064b930;
L_0064b892:; BB(0x0064b892);
    /* 0064b892: mov edx, 4 */ r_edx = 0x4u;
    /* 0064b897: mov word ptr [eax + 0xe0], dx */ W16((u32)(r_eax+0xe0u), (u16)r_edx);
    /* 0064b89e: mov word ptr [eax + 0xe2], dx */ W16((u32)(r_eax+0xe2u), (u16)r_edx);
L_0064b8a5:; BB(0x0064b8a5);
    /* 0064b8a5: mov esi, dword ptr [0xa8f434] */ r_esi = R32((u32)(0xa8f434u));
    /* 0064b8ab: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0064b8ad: mov word ptr [eax + 0xe4], dx */ W16((u32)(r_eax+0xe4u), (u16)r_edx);
    /* 0064b8b4: mov word ptr [eax + 0xe6], dx */ W16((u32)(r_eax+0xe6u), (u16)r_edx);
    /* 0064b8bb: mov ecx, dword ptr [esi + 0x42c] */ r_ecx = R32((u32)(r_esi+0x42cu));
    /* 0064b8c1: mov ebx, dword ptr [ecx + 8] */ r_ebx = R32((u32)(r_ecx+0x8u));
    /* 0064b8c4: mov dword ptr [eax + 0xd4], ebx */ W32((u32)(r_eax+0xd4u), r_ebx);
    /* 0064b8ca: mov edi, dword ptr [esi + 0x430] */ r_edi = R32((u32)(r_esi+0x430u));
    /* 0064b8d0: mov edx, dword ptr [edi + 0x2c] */ r_edx = R32((u32)(r_edi+0x2cu));
    /* 0064b8d3: mov dword ptr [eax + 0xd8], edx */ W32((u32)(r_eax+0xd8u), r_edx);
    /* 0064b8d9: mov edx, dword ptr [eax + 0xb4] */ r_edx = R32((u32)(r_eax+0xb4u));
    /* 0064b8df: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064b8e1: je 0x64b8fd */ if (fZ) goto L_0064b8fd;
L_0064b8e3:; BB(0x0064b8e3);
    /* 0064b8e3: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0064b8e7: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0064b8ec: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0064b8f0: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064b8f3: mov dword ptr [eax + 0xb4], 0 */ W32((u32)(r_eax+0xb4u), 0x0u);
L_0064b8fd:; BB(0x0064b8fd);
    /* 0064b8fd: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0064b900: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0064b903: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0064b906: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0064b908: mov dword ptr [eax + 0x1a8], edx */ W32((u32)(r_eax+0x1a8u), r_edx);
    /* 0064b90e: mov dword ptr [eax + 0x1ac], edx */ W32((u32)(r_eax+0x1acu), r_edx);
    /* 0064b914: mov dword ptr [eax + 0x1b0], edx */ W32((u32)(r_eax+0x1b0u), r_edx);
    /* 0064b91a: mov dword ptr [eax + 0x1b4], edx */ W32((u32)(r_eax+0x1b4u), r_edx);
    /* 0064b920: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0064b923: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0064b92a: mov esp, ebp */ r_esp = r_ebp;
    /* 0064b92c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064b92d: ret 8 */ FN_RET(0x0064b7ac); r_esp += 12; return;
L_0064b930:; BB(0x0064b930);
    /* 0064b930: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0064b932: mov word ptr [eax + 0xe0], dx */ W16((u32)(r_eax+0xe0u), (u16)r_edx);
    /* 0064b939: mov word ptr [eax + 0xe2], dx */ W16((u32)(r_eax+0xe2u), (u16)r_edx);
    /* 0064b940: jmp 0x64b8a5 */ goto L_0064b8a5;
}

void f_0064b948(void) /* sub_64B948 */
{
    FN_ENTER(0x0064b948);
    /* 0064b948: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0064b949: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064b94a: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0064b94d: mov edi, ecx */ r_edi = r_ecx;
    /* 0064b94f: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x64b954u); f_004f7c84();
    /* 0064b954: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064b957: je 0x64bbf4 */ if (fZ) goto L_0064bbf4;
L_0064b95d:; BB(0x0064b95d);
    /* 0064b95d: movzx eax, word ptr [edi + 0xe6] */ r_eax = (u32)R16((u32)(r_edi+0xe6u));
    /* 0064b964: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0064b966: jne 0x64b9ae */ if (!fZ) goto L_0064b9ae;
L_0064b968:; BB(0x0064b968);
    /* 0064b968: movsx edx, word ptr [edi + 0xe0] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0xe0u));
    /* 0064b96f: cmp dx, word ptr [edi + 0xe2] */ {  u32 a = (u16)r_edx; u32 b = R16((u32)(r_edi+0xe2u)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0064b976: je 0x64b9ae */ if (fZ) goto L_0064b9ae;
L_0064b978:; BB(0x0064b978);
    /* 0064b978: movsx eax, word ptr [edi + 0xe4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0xe4u));
    /* 0064b97f: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064b982: je 0x64b99e */ if (fZ) goto L_0064b99e;
L_0064b984:; BB(0x0064b984);
    /* 0064b984: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0064b989: mov word ptr [edi + 0xe4], ax */ W16((u32)(r_edi+0xe4u), (u16)r_eax);
    /* 0064b990: mov ecx, edi */ r_ecx = r_edi;
    /* 0064b992: call 0x64bbfc */ r_esp -= 4; W32(r_esp, 0x64b997u); f_0064bbfc();
    /* 0064b997: movsx edx, word ptr [edi + 0xe0] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0xe0u));
L_0064b99e:; BB(0x0064b99e);
    /* 0064b99e: mov word ptr [edi + 0xe2], dx */ W16((u32)(r_edi+0xe2u), (u16)r_edx);
    /* 0064b9a5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0064b9a7: mov word ptr [edi + 0xe4], ax */ W16((u32)(r_edi+0xe4u), (u16)r_eax);
L_0064b9ae:; BB(0x0064b9ae);
    /* 0064b9ae: mov edx, dword ptr [edi + 0x1b8] */ r_edx = R32((u32)(r_edi+0x1b8u));
    /* 0064b9b4: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0064b9b7: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 0064b9bb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0064b9bd: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 0064b9c1: mov dword ptr [edi + 0x1b8], eax */ W32((u32)(r_edi+0x1b8u), r_eax);
    /* 0064b9c7: mov dword ptr [edi + 0x1bc], eax */ W32((u32)(r_edi+0x1bcu), r_eax);
    /* 0064b9cd: mov dword ptr [edi + 0x1c0], eax */ W32((u32)(r_edi+0x1c0u), r_eax);
    /* 0064b9d3: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
L_0064b9d5:; BB(0x0064b9d5);
    /* 0064b9d5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064b9d6: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x64b9dbu); f_0068d5a8();
    /* 0064b9db: mov ebx, eax */ r_ebx = r_eax;
    /* 0064b9dd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064b9e0: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064b9e2: je 0x64ba79 */ if (fZ) goto L_0064ba79;
L_0064b9e8:; BB(0x0064b9e8);
    /* 0064b9e8: mov edx, dword ptr [ebx + 0x3f0] */ r_edx = R32((u32)(r_ebx+0x3f0u));
    /* 0064b9ee: cmp edx, dword ptr [edi + 0xc0] */ {  u32 a = r_edx; u32 b = R32((u32)(r_edi+0xc0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064b9f4: jne 0x64ba00 */ if (!fZ) goto L_0064ba00;
L_0064b9f6:; BB(0x0064b9f6);
    /* 0064b9f6: mov dword ptr [edi + 0x1c0], 1 */ W32((u32)(r_edi+0x1c0u), 0x1u);
L_0064ba00:; BB(0x0064ba00);
    /* 0064ba00: cmp edx, dword ptr [0xaafca0] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaafca0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064ba06: mov esi, 0 */ r_esi = 0x0u;
    /* 0064ba0b: jne 0x64ba38 */ if (!fZ) goto L_0064ba38;
L_0064ba0d:; BB(0x0064ba0d);
    /* 0064ba0d: lea eax, [ebx + 0x38] */ r_eax = (u32)(r_ebx+0x38u);
    /* 0064ba10: lea edx, [edi + 0x38] */ r_edx = (u32)(r_edi+0x38u);
    /* 0064ba13: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0064ba14: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064ba15: call 0x78ea50 */ r_esp -= 4; W32(r_esp, 0x64ba1au); f_0078ea50();
    /* 0064ba1a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064ba1d: fld dword ptr [edi + 0xac] */ FPUSH(R_F32((u32)(r_edi+0xacu)));
    /* 0064ba23: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0064ba25: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0064ba27: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0064ba29: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0064ba2a: jb 0x64ba38 */ if (fC) goto L_0064ba38;
L_0064ba2c:; BB(0x0064ba2c);
    /* 0064ba2c: add dword ptr [edi + 0x1bc], 1 */ { u32 ad = (u32)(r_edi+0x1bcu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0064ba33: mov esi, 1 */ r_esi = 0x1u;
L_0064ba38:; BB(0x0064ba38);
    /* 0064ba38: mov edx, dword ptr [edi + 0x1b8] */ r_edx = R32((u32)(r_edi+0x1b8u));
    /* 0064ba3e: mov dword ptr [edi + edx*4 + 0x1a8], esi */ W32((u32)(r_edi+r_edx*4+0x1a8u), r_esi);
    /* 0064ba45: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0064ba47: call 0x6936b4 */ r_esp -= 4; W32(r_esp, 0x64ba4cu); f_006936b4();
    /* 0064ba4c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064ba4d: mov edx, dword ptr [edi + 0x1b8] */ r_edx = R32((u32)(r_edi+0x1b8u));
    /* 0064ba53: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 0064ba56: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0064ba58: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0064ba5a: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0064ba5c: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0064ba5e: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0064ba60: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0064ba62: lea ebx, [edi + ecx + 0xe8] */ r_ebx = (u32)(r_edi+r_ecx+0xe8u);
    /* 0064ba69: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0064ba6a: call 0x857fed */ r_esp -= 4; W32(r_esp, 0x64ba6fu); f_00857fed();
    /* 0064ba6f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064ba72: add dword ptr [edi + 0x1b8], 1 */ { u32 ad = (u32)(r_edi+0x1b8u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_0064ba79:; BB(0x0064ba79);
    /* 0064ba79: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0064ba7c: cmp ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0064ba7f: jl 0x64b9d5 */ if ((fS!=fO)) goto L_0064b9d5;
L_0064ba85:; BB(0x0064ba85);
    /* 0064ba85: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 0064ba88: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 0064ba8c: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 0064ba90: mov eax, dword ptr [edi + 0x1b8] */ r_eax = R32((u32)(r_edi+0x1b8u));
    /* 0064ba96: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0064ba99: jge 0x64bb1c */ if ((fS==fO)) goto L_0064bb1c;
L_0064ba9f:; BB(0x0064ba9f);
    /* 0064ba9f: mov ebp, eax */ r_ebp = r_eax;
    /* 0064baa1: neg ebp */ { u32 x = r_ebp; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 0064baa3: add ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0064baa6: cmp ebp, 6 */ {  u32 a = r_ebp; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0064baa9: jl 0x64baf2 */ if ((fS!=fO)) goto L_0064baf2;
L_0064baab:; BB(0x0064baab);
    /* 0064baab: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 0064baae: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0064bab0: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0064bab2: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0064bab4: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0064bab6: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0064bab8: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
L_0064baba:; BB(0x0064baba);
    /* 0064baba: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 0064babc: mov word ptr [ecx + edi + 0xe8], bp */ W16((u32)(r_ecx+r_edi+0xe8u), (u16)r_ebp);
    /* 0064bac4: mov word ptr [ecx + edi + 0x118], bp */ W16((u32)(r_ecx+r_edi+0x118u), (u16)r_ebp);
    /* 0064bacc: add eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0064bacf: mov word ptr [ecx + edi + 0x148], bp */ W16((u32)(r_ecx+r_edi+0x148u), (u16)r_ebp);
    /* 0064bad7: mov word ptr [ecx + edi + 0x178], bp */ W16((u32)(r_ecx+r_edi+0x178u), (u16)r_ebp);
    /* 0064badf: mov word ptr [ecx + edi + 0x1a8], bp */ W16((u32)(r_ecx+r_edi+0x1a8u), (u16)r_ebp);
    /* 0064bae7: add ecx, 0xf0 */ {  u32 a = r_ecx; u32 b = 0xf0u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0064baed: cmp eax, -2 */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0064baf0: jl 0x64baba */ if ((fS!=fO)) goto L_0064baba;
L_0064baf2:; BB(0x0064baf2);
    /* 0064baf2: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 0064baf5: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0064baf7: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0064baf9: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0064bafb: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0064bafd: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0064baff: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
L_0064bb01:; BB(0x0064bb01);
    /* 0064bb01: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 0064bb03: mov word ptr [ecx + edi + 0xe8], bp */ W16((u32)(r_ecx+r_edi+0xe8u), (u16)r_ebp);
    /* 0064bb0b: add ecx, 0x30 */ {  u32 a = r_ecx; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0064bb0e: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0064bb11: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0064bb14: jl 0x64bb01 */ if ((fS!=fO)) goto L_0064bb01;
L_0064bb16:; BB(0x0064bb16);
    /* 0064bb16: mov eax, dword ptr [edi + 0x1b8] */ r_eax = R32((u32)(r_edi+0x1b8u));
L_0064bb1c:; BB(0x0064bb1c);
    /* 0064bb1c: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064bb1e: je 0x64bb39 */ if (fZ) goto L_0064bb39;
L_0064bb20:; BB(0x0064bb20);
    /* 0064bb20: mov ecx, dword ptr [edi + 0x1c8] */ r_ecx = R32((u32)(r_edi+0x1c8u));
    /* 0064bb26: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064bb28: je 0x64bb39 */ if (fZ) goto L_0064bb39;
L_0064bb2a:; BB(0x0064bb2a);
    /* 0064bb2a: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x64bb2fu); f_007127b0();
    /* 0064bb2f: mov dword ptr [edi + 0x1c8], 0 */ W32((u32)(r_edi+0x1c8u), 0x0u);
L_0064bb39:; BB(0x0064bb39);
    /* 0064bb39: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0064bb3f: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x64bb44u); f_0068d5a8();
    /* 0064bb44: mov ebp, eax */ r_ebp = r_eax;
    /* 0064bb46: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064bb49: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064bb4b: je 0x64bba6 */ if (fZ) goto L_0064bba6;
L_0064bb4d:; BB(0x0064bb4d);
    /* 0064bb4d: mov edx, dword ptr [ebp + 0x3f0] */ r_edx = R32((u32)(r_ebp+0x3f0u));
    /* 0064bb53: cmp edx, dword ptr [0xaafca0] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaafca0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064bb59: jne 0x64bba6 */ if (!fZ) goto L_0064bba6;
L_0064bb5b:; BB(0x0064bb5b);
    /* 0064bb5b: lea eax, [ebp + 0x38] */ r_eax = (u32)(r_ebp+0x38u);
    /* 0064bb5e: lea edx, [edi + 0x38] */ r_edx = (u32)(r_edi+0x38u);
    /* 0064bb61: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0064bb62: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064bb63: call 0x78ea50 */ r_esp -= 4; W32(r_esp, 0x64bb68u); f_0078ea50();
    /* 0064bb68: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064bb6b: fld dword ptr [0x9365ac] */ FPUSH(R_F32((u32)(0x9365acu)));
    /* 0064bb71: fadd dword ptr [edi + 0xac] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0xacu));
    /* 0064bb77: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0064bb79: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0064bb7b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0064bb7d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0064bb7e: jb 0x64bb94 */ if (fC) goto L_0064bb94;
L_0064bb80:; BB(0x0064bb80);
    /* 0064bb80: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0064bb82: call 0x68bfa0 */ r_esp -= 4; W32(r_esp, 0x64bb87u); f_0068bfa0();
    /* 0064bb87: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064bb89: je 0x64bba6 */ if (fZ) goto L_0064bba6;
L_0064bb8b:; BB(0x0064bb8b);
    /* 0064bb8b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0064bb8d: call 0x688bc0 */ r_esp -= 4; W32(r_esp, 0x64bb92u); f_00688bc0();
    /* 0064bb92: jmp 0x64bba6 */ goto L_0064bba6;
L_0064bb94:; BB(0x0064bb94);
    /* 0064bb94: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0064bb96: call 0x68bfa0 */ r_esp -= 4; W32(r_esp, 0x64bb9bu); f_0068bfa0();
    /* 0064bb9b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064bb9d: jne 0x64bba6 */ if (!fZ) goto L_0064bba6;
L_0064bb9f:; BB(0x0064bb9f);
    /* 0064bb9f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0064bba1: call 0x688bac */ r_esp -= 4; W32(r_esp, 0x64bba6u); f_00688bac();
L_0064bba6:; BB(0x0064bba6);
    /* 0064bba6: mov ecx, edi */ r_ecx = r_edi;
    /* 0064bba8: call 0x64bbfc */ r_esp -= 4; W32(r_esp, 0x64bbadu); f_0064bbfc();
    /* 0064bbad: mov eax, dword ptr [edi + 0xd8] */ r_eax = R32((u32)(r_edi+0xd8u));
    /* 0064bbb3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064bbb5: je 0x64bbf4 */ if (fZ) goto L_0064bbf4;
L_0064bbb7:; BB(0x0064bbb7);
    /* 0064bbb7: fld dword ptr [0x9365a0] */ FPUSH(R_F32((u32)(0x9365a0u)));
    /* 0064bbbd: fadd dword ptr [edi + 0xc8] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0xc8u));
    /* 0064bbc3: fld dword ptr [0x9365a8] */ FPUSH(R_F32((u32)(0x9365a8u)));
    /* 0064bbc9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0064bbcb: fst dword ptr [edi + 0xc8] */ W_F32((u32)(r_edi+0xc8u), ST(0));
    /* 0064bbd1: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0064bbd3: fild dword ptr [eax + 4] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x4u)));
    /* 0064bbd6: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0064bbd9: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0064bbdc: fadd dword ptr [edx*4 + 0x936568] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x936568u));
    /* 0064bbe3: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0064bbe5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0064bbe7: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0064bbe8: ja 0x64bbf4 */ if ((!fC&&!fZ)) goto L_0064bbf4;
L_0064bbea:; BB(0x0064bbea);
    /* 0064bbea: mov dword ptr [edi + 0xc8], 0 */ W32((u32)(r_edi+0xc8u), 0x0u);
L_0064bbf4:; BB(0x0064bbf4);
    /* 0064bbf4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0064bbf7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064bbf8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0064bbf9: ret  */ FN_RET(0x0064b948); r_esp += 4; return;
}

void f_0064bbfc(void) /* sub_64BBFC */
{
    FN_ENTER(0x0064bbfc);
    /* 0064bbfc: movsx eax, word ptr [ecx + 0xe2] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0xe2u));
    /* 0064bc03: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064bc05: je 0x64bc33 */ if (fZ) goto L_0064bc33;
L_0064bc07:; BB(0x0064bc07);
    /* 0064bc07: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064bc0a: je 0x64bc2d */ if (fZ) goto L_0064bc2d;
L_0064bc0c:; BB(0x0064bc0c);
    /* 0064bc0c: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064bc0f: je 0x64bc27 */ if (fZ) goto L_0064bc27;
L_0064bc11:; BB(0x0064bc11);
    /* 0064bc11: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064bc14: jne 0x64bc1c */ if (!fZ) goto L_0064bc1c;
L_0064bc16:; BB(0x0064bc16);
    /* 0064bc16: call 0x64bc90 */ r_esp -= 4; W32(r_esp, 0x64bc1bu); f_0064bc90();
    /* 0064bc1b: ret  */ FN_RET(0x0064bbfc); r_esp += 4; return;
L_0064bc1c:; BB(0x0064bc1c);
    /* 0064bc1c: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0064bc1f: jne 0x64bc2c */ if (!fZ) goto L_0064bc2c;
L_0064bc21:; BB(0x0064bc21);
    /* 0064bc21: call 0x64bc3c */ r_esp -= 4; W32(r_esp, 0x64bc26u); f_0064bc3c();
    /* 0064bc26: ret  */ FN_RET(0x0064bbfc); r_esp += 4; return;
L_0064bc27:; BB(0x0064bc27);
    /* 0064bc27: call 0x64bdf0 */ r_esp -= 4; W32(r_esp, 0x64bc2cu); f_0064bdf0();
L_0064bc2c:; BB(0x0064bc2c);
    /* 0064bc2c: ret  */ FN_RET(0x0064bbfc); r_esp += 4; return;
L_0064bc2d:; BB(0x0064bc2d);
    /* 0064bc2d: call 0x64bf20 */ r_esp -= 4; W32(r_esp, 0x64bc32u); f_0064bf20();
    /* 0064bc32: ret  */ FN_RET(0x0064bbfc); r_esp += 4; return;
L_0064bc33:; BB(0x0064bc33);
    /* 0064bc33: call 0x64c304 */ r_esp -= 4; W32(r_esp, 0x64bc38u); f_0064c304();
    /* 0064bc38: ret  */ FN_RET(0x0064bbfc); r_esp += 4; return;
}

void f_0064bc3c(void) /* sub_64BC3C */
{
    FN_ENTER(0x0064bc3c);
    /* 0064bc3c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0064bc3d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0064bc3f: movsx eax, word ptr [ebx + 0xe4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0xe4u));
    /* 0064bc46: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0064bc48: je 0x64bc76 */ if (fZ) goto L_0064bc76;
L_0064bc4a:; BB(0x0064bc4a);
    /* 0064bc4a: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0064bc4d: jne 0x64bc8c */ if (!fZ) goto L_0064bc8c;
L_0064bc4f:; BB(0x0064bc4f);
    /* 0064bc4f: mov eax, dword ptr [ebx + 0x1d0] */ r_eax = R32((u32)(r_ebx+0x1d0u));
    /* 0064bc55: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0064bc57: jl 0x64bc8c */ if ((fS!=fO)) goto L_0064bc8c;
L_0064bc59:; BB(0x0064bc59);
    /* 0064bc59: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 0064bc5c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064bc5d: call 0x816eec */ r_esp -= 4; W32(r_esp, 0x64bc62u); f_00816eec();
    /* 0064bc62: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064bc63: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0064bc66: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0064bc69: jne 0x64bc8c */ if (!fZ) goto L_0064bc8c;
L_0064bc6b:; BB(0x0064bc6b);
    /* 0064bc6b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0064bc6d: mov word ptr [ebx + 0xe0], ax */ W16((u32)(r_ebx+0xe0u), (u16)r_eax);
    /* 0064bc74: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0064bc75: ret  */ FN_RET(0x0064bc3c); r_esp += 4; return;
L_0064bc76:; BB(0x0064bc76);
    /* 0064bc76: mov dword ptr [ebx + 0xd4], 0 */ W32((u32)(r_ebx+0xd4u), 0x0u);
    /* 0064bc80: mov eax, 1 */ r_eax = 0x1u;
    /* 0064bc85: mov word ptr [ebx + 0xe4], ax */ W16((u32)(r_ebx+0xe4u), (u16)r_eax);
L_0064bc8c:; BB(0x0064bc8c);
    /* 0064bc8c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0064bc8d: ret  */ FN_RET(0x0064bc3c); r_esp += 4; return;
}

void f_0064bc90(void) /* sub_64BC90 */
{
    FN_ENTER(0x0064bc90);
    /* 0064bc90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064bc91: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0064bc93: movsx eax, word ptr [ebp + 0xe4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xe4u));
    /* 0064bc9a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0064bc9c: je 0x64bd14 */ if (fZ) goto L_0064bd14;
L_0064bc9e:; BB(0x0064bc9e);
    /* 0064bc9e: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064bca1: jne 0x64bcd7 */ if (!fZ) goto L_0064bcd7;
L_0064bca3:; BB(0x0064bca3);
    /* 0064bca3: push dword ptr [ebp + 0xac] */ { u32 v = R32((u32)(r_ebp+0xacu)); r_esp -= 4; W32(r_esp, v); }
    /* 0064bca9: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0064bcab: call 0x64cbb4 */ r_esp -= 4; W32(r_esp, 0x64bcb0u); f_0064cbb4();
    /* 0064bcb0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064bcb2: je 0x64bdb3 */ if (fZ) goto L_0064bdb3;
L_0064bcb8:; BB(0x0064bcb8);
    /* 0064bcb8: mov eax, dword ptr [ebp + 0xb0] */ r_eax = R32((u32)(r_ebp+0xb0u));
    /* 0064bcbe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064bcc0: je 0x64bd2c */ if (fZ) goto L_0064bd2c;
L_0064bcc2:; BB(0x0064bcc2);
    /* 0064bcc2: mov eax, dword ptr [ebp + 0x1c0] */ r_eax = R32((u32)(r_ebp+0x1c0u));
    /* 0064bcc8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0064bcca: jne 0x64bd2a */ if (!fZ) goto L_0064bd2a;
L_0064bccc:; BB(0x0064bccc);
    /* 0064bccc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0064bcce: mov word ptr [ebp + 0xe0], ax */ W16((u32)(r_ebp+0xe0u), (u16)r_eax);
    /* 0064bcd5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064bcd6: ret  */ FN_RET(0x0064bc90); r_esp += 4; return;
L_0064bcd7:; BB(0x0064bcd7);
    /* 0064bcd7: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0064bcda: jne 0x64bd2a */ if (!fZ) goto L_0064bd2a;
L_0064bcdc:; BB(0x0064bcdc);
    /* 0064bcdc: mov ecx, dword ptr [ebp + 0xb0] */ r_ecx = R32((u32)(r_ebp+0xb0u));
    /* 0064bce2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064bce4: je 0x64bcf5 */ if (fZ) goto L_0064bcf5;
L_0064bce6:; BB(0x0064bce6);
    /* 0064bce6: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x64bcebu); f_007127b0();
    /* 0064bceb: mov dword ptr [ebp + 0xb0], 0 */ W32((u32)(r_ebp+0xb0u), 0x0u);
L_0064bcf5:; BB(0x0064bcf5);
    /* 0064bcf5: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0064bcfb: call 0x718048 */ r_esp -= 4; W32(r_esp, 0x64bd00u); f_00718048();
    /* 0064bd00: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064bd01: call 0x717d48 */ r_esp -= 4; W32(r_esp, 0x64bd06u); f_00717d48();
    /* 0064bd06: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0064bd0c: call 0x717ed8 */ r_esp -= 4; W32(r_esp, 0x64bd11u); f_00717ed8();
    /* 0064bd11: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064bd12: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064bd13: ret  */ FN_RET(0x0064bc90); r_esp += 4; return;
L_0064bd14:; BB(0x0064bd14);
    /* 0064bd14: mov dword ptr [ebp + 0xd4], 0 */ W32((u32)(r_ebp+0xd4u), 0x0u);
    /* 0064bd1e: mov eax, 1 */ r_eax = 0x1u;
    /* 0064bd23: mov word ptr [ebp + 0xe4], ax */ W16((u32)(r_ebp+0xe4u), (u16)r_eax);
L_0064bd2a:; BB(0x0064bd2a);
    /* 0064bd2a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064bd2b: ret  */ FN_RET(0x0064bc90); r_esp += 4; return;
L_0064bd2c:; BB(0x0064bd2c);
    /* 0064bd2c: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 0064bd2e: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x64bd33u); f_0073ec50();
    /* 0064bd33: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0064bd35: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064bd36: call 0x735708 */ r_esp -= 4; W32(r_esp, 0x64bd3bu); f_00735708();
    /* 0064bd3b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064bd3e: mov dword ptr [ebp + 0xb0], eax */ W32((u32)(r_ebp+0xb0u), r_eax);
    /* 0064bd44: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064bd46: je 0x64bd91 */ if (fZ) goto L_0064bd91;
L_0064bd48:; BB(0x0064bd48);
    /* 0064bd48: push 0x53 */ { u32 v = 0x53u; r_esp -= 4; W32(r_esp, v); }
    /* 0064bd4a: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x64bd4fu); f_0079317c();
    /* 0064bd4f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064bd50: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0064bd52: mov ecx, dword ptr [ebp + 0xb0] */ r_ecx = R32((u32)(r_ebp+0xb0u));
    /* 0064bd58: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0064bd5a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0064bd5b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0064bd5c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064bd5d: call 0x735db8 */ r_esp -= 4; W32(r_esp, 0x64bd62u); f_00735db8();
    /* 0064bd62: mov edx, dword ptr [ebp + 0xb0] */ r_edx = R32((u32)(r_ebp+0xb0u));
    /* 0064bd68: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 0064bd6f: or eax, 0xffff0040 */ {  u32 a = r_eax; u32 b = 0xffff0040u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0064bd74: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
    /* 0064bd7b: mov ecx, dword ptr [ebp + 0xb0] */ r_ecx = R32((u32)(r_ebp+0xb0u));
    /* 0064bd81: call 0x73608c */ r_esp -= 4; W32(r_esp, 0x64bd86u); f_0073608c();
    /* 0064bd86: mov ecx, dword ptr [ebp + 0xb0] */ r_ecx = R32((u32)(r_ebp+0xb0u));
    /* 0064bd8c: call 0x736458 */ r_esp -= 4; W32(r_esp, 0x64bd91u); f_00736458();
L_0064bd91:; BB(0x0064bd91);
    /* 0064bd91: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0064bd97: call 0x718078 */ r_esp -= 4; W32(r_esp, 0x64bd9cu); f_00718078();
    /* 0064bd9c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064bd9d: call 0x717d68 */ r_esp -= 4; W32(r_esp, 0x64bda2u); f_00717d68();
    /* 0064bda2: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0064bda8: call 0x717f08 */ r_esp -= 4; W32(r_esp, 0x64bdadu); f_00717f08();
    /* 0064bdad: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064bdae: jmp 0x64bcc2 */ goto L_0064bcc2;
L_0064bdb3:; BB(0x0064bdb3);
    /* 0064bdb3: mov ecx, dword ptr [ebp + 0xb0] */ r_ecx = R32((u32)(r_ebp+0xb0u));
    /* 0064bdb9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064bdbb: je 0x64bdcc */ if (fZ) goto L_0064bdcc;
L_0064bdbd:; BB(0x0064bdbd);
    /* 0064bdbd: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x64bdc2u); f_007127b0();
    /* 0064bdc2: mov dword ptr [ebp + 0xb0], 0 */ W32((u32)(r_ebp+0xb0u), 0x0u);
L_0064bdcc:; BB(0x0064bdcc);
    /* 0064bdcc: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0064bdd2: call 0x718048 */ r_esp -= 4; W32(r_esp, 0x64bdd7u); f_00718048();
    /* 0064bdd7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064bdd8: call 0x717d48 */ r_esp -= 4; W32(r_esp, 0x64bdddu); f_00717d48();
    /* 0064bddd: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0064bde3: call 0x717ed8 */ r_esp -= 4; W32(r_esp, 0x64bde8u); f_00717ed8();
    /* 0064bde8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064bde9: jmp 0x64bcc2 */ goto L_0064bcc2;
}

void f_0064bdf0(void) /* sub_64BDF0 */
{
    FN_ENTER(0x0064bdf0);
    /* 0064bdf0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0064bdf1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0064bdf2: mov edi, ecx */ r_edi = r_ecx;
    /* 0064bdf4: movsx eax, word ptr [edi + 0xe4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0xe4u));
    /* 0064bdfb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064bdfd: je 0x64bea0 */ if (fZ) goto L_0064bea0;
L_0064be03:; BB(0x0064be03);
    /* 0064be03: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064be06: je 0x64be33 */ if (fZ) goto L_0064be33;
L_0064be08:; BB(0x0064be08);
    /* 0064be08: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0064be0b: jne 0x64be9d */ if (!fZ) goto L_0064be9d;
L_0064be11:; BB(0x0064be11);
    /* 0064be11: movzx eax, word ptr [edi + 0xe6] */ r_eax = (u32)R16((u32)(r_edi+0xe6u));
    /* 0064be18: and eax, 0xfffe */ {  u32 a = r_eax; u32 b = 0xfffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0064be1d: mov word ptr [edi + 0xe6], ax */ W16((u32)(r_edi+0xe6u), (u16)r_eax);
    /* 0064be24: mov edx, 3 */ r_edx = 0x3u;
    /* 0064be29: mov word ptr [edi + 0xe0], dx */ W16((u32)(r_edi+0xe0u), (u16)r_edx);
    /* 0064be30: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0064be31: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0064be32: ret  */ FN_RET(0x0064bdf0); r_esp += 4; return;
L_0064be33:; BB(0x0064be33);
    /* 0064be33: mov ecx, edi */ r_ecx = r_edi;
    /* 0064be35: call 0x66b5e4 */ r_esp -= 4; W32(r_esp, 0x64be3au); f_0066b5e4();
    /* 0064be3a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064be3c: jne 0x64be7e */ if (!fZ) goto L_0064be7e;
L_0064be3e:; BB(0x0064be3e);
    /* 0064be3e: push dword ptr [edi + 0xac] */ { u32 v = R32((u32)(r_edi+0xacu)); r_esp -= 4; W32(r_esp, v); }
    /* 0064be44: mov ecx, edi */ r_ecx = r_edi;
    /* 0064be46: call 0x64cbb4 */ r_esp -= 4; W32(r_esp, 0x64be4bu); f_0064cbb4();
    /* 0064be4b: mov esi, eax */ r_esi = r_eax;
    /* 0064be4d: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064be4f: je 0x64be7e */ if (fZ) goto L_0064be7e;
L_0064be51:; BB(0x0064be51);
    /* 0064be51: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0064be57: mov ecx, edi */ r_ecx = r_edi;
    /* 0064be59: call 0x64bef4 */ r_esp -= 4; W32(r_esp, 0x64be5eu); f_0064bef4();
    /* 0064be5e: mov edx, dword ptr [0xa8f534] */ r_edx = R32((u32)(0xa8f534u));
    /* 0064be64: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0064be65: mov dword ptr [edi + 0xc0], edx */ W32((u32)(r_edi+0xc0u), r_edx);
    /* 0064be6b: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 0064be6d: mov ecx, edi */ r_ecx = r_edi;
    /* 0064be6f: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x64be72u); call_ind(t); }
    /* 0064be72: mov eax, 2 */ r_eax = 0x2u;
    /* 0064be77: mov word ptr [edi + 0xe4], ax */ W16((u32)(r_edi+0xe4u), (u16)r_eax);
L_0064be7e:; BB(0x0064be7e);
    /* 0064be7e: mov eax, dword ptr [edi + 0x1e0] */ r_eax = R32((u32)(r_edi+0x1e0u));
    /* 0064be84: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0064be87: mov dword ptr [edi + 0x1e0], eax */ W32((u32)(r_edi+0x1e0u), r_eax);
    /* 0064be8d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0064be8f: jg 0x64be9d */ if ((!fZ&&fS==fO)) goto L_0064be9d;
L_0064be91:; BB(0x0064be91);
    /* 0064be91: mov eax, 2 */ r_eax = 0x2u;
    /* 0064be96: mov word ptr [edi + 0xe4], ax */ W16((u32)(r_edi+0xe4u), (u16)r_eax);
L_0064be9d:; BB(0x0064be9d);
    /* 0064be9d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0064be9e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0064be9f: ret  */ FN_RET(0x0064bdf0); r_esp += 4; return;
L_0064bea0:; BB(0x0064bea0);
    /* 0064bea0: movzx edx, word ptr [edi + 0xe6] */ r_edx = (u32)R16((u32)(r_edi+0xe6u));
    /* 0064bea7: mov dword ptr [edi + 0x1e0], 0x96 */ W32((u32)(r_edi+0x1e0u), 0x96u);
    /* 0064beb1: mov eax, 1 */ r_eax = 0x1u;
    /* 0064beb6: mov word ptr [edi + 0xe4], ax */ W16((u32)(r_edi+0xe4u), (u16)r_eax);
    /* 0064bebd: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0064bec3: mov word ptr [edi + 0xe6], dx */ W16((u32)(r_edi+0xe6u), (u16)r_edx);
    /* 0064beca: mov edx, dword ptr [0xa8f434] */ r_edx = R32((u32)(0xa8f434u));
    /* 0064bed0: mov esi, dword ptr [edx + 0x42c] */ r_esi = R32((u32)(r_edx+0x42cu));
    /* 0064bed6: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 0064bed9: mov dword ptr [edi + 0xd4], eax */ W32((u32)(r_edi+0xd4u), r_eax);
    /* 0064bedf: mov eax, dword ptr [edx + 0x430] */ r_eax = R32((u32)(r_edx+0x430u));
    /* 0064bee5: mov eax, dword ptr [eax + 0x2c] */ r_eax = R32((u32)(r_eax+0x2cu));
    /* 0064bee8: mov dword ptr [edi + 0xd8], eax */ W32((u32)(r_edi+0xd8u), r_eax);
    /* 0064beee: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0064beef: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0064bef0: ret  */ FN_RET(0x0064bdf0); r_esp += 4; return;
}

void f_0064bef4(void) /* sub_64BEF4 */
{
    FN_ENTER(0x0064bef4);
    /* 0064bef4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0064bef5: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0064bef9: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x64befeu); f_0068d5a8();
    /* 0064befe: mov edi, eax */ r_edi = r_eax;
    /* 0064bf00: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064bf03: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0064bf05: je 0x64bf1a */ if (fZ) goto L_0064bf1a;
L_0064bf07:; BB(0x0064bf07);
    /* 0064bf07: mov ecx, edi */ r_ecx = r_edi;
    /* 0064bf09: call 0x685514 */ r_esp -= 4; W32(r_esp, 0x64bf0eu); f_00685514();
    /* 0064bf0e: mov edx, dword ptr [edi + 0x30] */ r_edx = R32((u32)(r_edi+0x30u));
    /* 0064bf11: and edx, 0xfffdffff */ {  u32 a = r_edx; u32 b = 0xfffdffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0064bf17: mov dword ptr [edi + 0x30], edx */ W32((u32)(r_edi+0x30u), r_edx);
L_0064bf1a:; BB(0x0064bf1a);
    /* 0064bf1a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0064bf1b: ret 4 */ FN_RET(0x0064bef4); r_esp += 8; return;
}

void f_0064bf20(void) /* sub_64BF20 */
{
    FN_ENTER(0x0064bf20);
    /* 0064bf20: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0064bf21: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0064bf22: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0064bf25: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0064bf27: movsx eax, word ptr [ebx + 0xe4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0xe4u));
    /* 0064bf2e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064bf30: je 0x64c2b3 */ if (fZ) goto L_0064c2b3;
L_0064bf36:; BB(0x0064bf36);
    /* 0064bf36: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064bf39: je 0x64bf59 */ if (fZ) goto L_0064bf59;
L_0064bf3b:; BB(0x0064bf3b);
    /* 0064bf3b: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064bf3e: je 0x64c0d0 */ if (fZ) goto L_0064c0d0;
L_0064bf44:; BB(0x0064bf44);
    /* 0064bf44: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064bf47: jne 0x64c0d0 */ if (!fZ) goto L_0064c0d0;
L_0064bf4d:; BB(0x0064bf4d);
    /* 0064bf4d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0064bf4f: call 0x64cb44 */ r_esp -= 4; W32(r_esp, 0x64bf54u); f_0064cb44();
    /* 0064bf54: jmp 0x64c0d0 */ goto L_0064c0d0;
L_0064bf59:; BB(0x0064bf59);
    /* 0064bf59: push dword ptr [ebx + 0xac] */ { u32 v = R32((u32)(r_ebx+0xacu)); r_esp -= 4; W32(r_esp, v); }
    /* 0064bf5f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0064bf61: call 0x64cbb4 */ r_esp -= 4; W32(r_esp, 0x64bf66u); f_0064cbb4();
    /* 0064bf66: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064bf68: je 0x64c017 */ if (fZ) goto L_0064c017;
L_0064bf6e:; BB(0x0064bf6e);
    /* 0064bf6e: movsx eax, word ptr [ebx + 0xe2] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0xe2u));
    /* 0064bf75: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064bf77: jne 0x64bf89 */ if (!fZ) goto L_0064bf89;
L_0064bf79:; BB(0x0064bf79);
    /* 0064bf79: mov eax, dword ptr [ebx + 0x1cc] */ r_eax = R32((u32)(r_ebx+0x1ccu));
    /* 0064bf7f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064bf81: je 0x64c0d6 */ if (fZ) goto L_0064c0d6;
L_0064bf87:; BB(0x0064bf87);
    /* 0064bf87: jmp 0x64bf9c */ goto L_0064bf9c;
L_0064bf89:; BB(0x0064bf89);
    /* 0064bf89: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064bf8c: jne 0x64bf9c */ if (!fZ) goto L_0064bf9c;
L_0064bf8e:; BB(0x0064bf8e);
    /* 0064bf8e: mov eax, dword ptr [ebx + 0x1cc] */ r_eax = R32((u32)(r_ebx+0x1ccu));
    /* 0064bf94: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064bf96: je 0x64c152 */ if (fZ) goto L_0064c152;
L_0064bf9c:; BB(0x0064bf9c);
    /* 0064bf9c: mov ecx, dword ptr [ebx + 0x1c8] */ r_ecx = R32((u32)(r_ebx+0x1c8u));
    /* 0064bfa2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064bfa4: je 0x64c202 */ if (fZ) goto L_0064c202;
L_0064bfaa:; BB(0x0064bfaa);
    /* 0064bfaa: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064bfac: je 0x64c19c */ if (fZ) goto L_0064c19c;
L_0064bfb2:; BB(0x0064bfb2);
    /* 0064bfb2: mov eax, dword ptr [ebx + 0x1b8] */ r_eax = R32((u32)(r_ebx+0x1b8u));
    /* 0064bfb8: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0064bfba: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0064bfbc: jle 0x64c19c */ if ((fZ||fS!=fO)) goto L_0064c19c;
L_0064bfc2:; BB(0x0064bfc2);
    /* 0064bfc2: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 0064bfc5: jmp 0x64bfcd */ goto L_0064bfcd;
L_0064bfc7:; BB(0x0064bfc7);
    /* 0064bfc7: mov ecx, dword ptr [ebx + 0x1c8] */ r_ecx = R32((u32)(r_ebx+0x1c8u));
L_0064bfcd:; BB(0x0064bfcd);
    /* 0064bfcd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0064bfce: mov edi, dword ptr [ebx + esi*4 + 0x1a8] */ r_edi = R32((u32)(r_ebx+r_esi*4+0x1a8u));
    /* 0064bfd5: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064bfd7: mov eax, 0 */ r_eax = 0x0u;
    /* 0064bfdc: setne al */ r_eax = (r_eax & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 0064bfdf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064bfe0: call 0x714d7c */ r_esp -= 4; W32(r_esp, 0x64bfe5u); f_00714d7c();
    /* 0064bfe5: movsx eax, word ptr [ebx + 0xe2] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0xe2u));
    /* 0064bfec: mov edi, 0xfff0f0f0 */ r_edi = 0xfff0f0f0u;
    /* 0064bff1: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064bff4: je 0x64c1ce */ if (fZ) goto L_0064c1ce;
L_0064bffa:; BB(0x0064bffa);
    /* 0064bffa: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0064bffb: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0064bffc: mov ecx, dword ptr [ebx + 0x1c8] */ r_ecx = R32((u32)(r_ebx+0x1c8u));
    /* 0064c002: call 0x714df8 */ r_esp -= 4; W32(r_esp, 0x64c007u); f_00714df8();
    /* 0064c007: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0064c00a: cmp esi, dword ptr [ebx + 0x1b8] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebx+0x1b8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0064c010: jl 0x64bfc7 */ if ((fS!=fO)) goto L_0064bfc7;
L_0064c012:; BB(0x0064c012);
    /* 0064c012: jmp 0x64c199 */ goto L_0064c199;
L_0064c017:; BB(0x0064c017);
    /* 0064c017: mov eax, dword ptr [0x9c9558] */ r_eax = R32((u32)(0x9c9558u));
    /* 0064c01c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064c01e: jne 0x64c026 */ if (!fZ) goto L_0064c026;
L_0064c020:; BB(0x0064c020);
    /* 0064c020: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0064c023: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0064c024: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0064c025: ret  */ FN_RET(0x0064bf20); r_esp += 4; return;
L_0064c026:; BB(0x0064c026);
    /* 0064c026: add dword ptr [ebx + 0x1c4], -1 */ { u32 ad = (u32)(r_ebx+0x1c4u);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0064c02d: call 0x52cf54 */ r_esp -= 4; W32(r_esp, 0x64c032u); f_0052cf54();
    /* 0064c032: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064c034: je 0x64c0d0 */ if (fZ) goto L_0064c0d0;
L_0064c03a:; BB(0x0064c03a);
    /* 0064c03a: mov eax, dword ptr [ebx + 0x1c4] */ r_eax = R32((u32)(r_ebx+0x1c4u));
    /* 0064c040: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0064c042: jg 0x64c077 */ if ((!fZ&&fS==fO)) goto L_0064c077;
L_0064c044:; BB(0x0064c044);
    /* 0064c044: movzx esi, word ptr [ebx + 0x1c] */ r_esi = (u32)R16((u32)(r_ebx+0x1cu));
    /* 0064c048: mov byte ptr [esp + 0xc], 0x6a */ W8((u32)(r_esp+0xcu), 0x6au);
    /* 0064c04d: mov eax, 2 */ r_eax = 0x2u;
    /* 0064c052: mov byte ptr [esp + 0xd], al */ W8((u32)(r_esp+0xdu), (u8)r_eax);
    /* 0064c056: mov word ptr [esp + 0xe], si */ W16((u32)(r_esp+0xeu), (u16)r_esi);
    /* 0064c05b: mov word ptr [esp + 0x10], ax */ W16((u32)(r_esp+0x10u), (u16)r_eax);
    /* 0064c060: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 0064c064: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x64c069u); f_008003e0();
    /* 0064c069: mov eax, 2 */ r_eax = 0x2u;
    /* 0064c06e: mov word ptr [ebx + 0xe4], ax */ W16((u32)(r_ebx+0xe4u), (u16)r_eax);
    /* 0064c075: jmp 0x64c0d0 */ goto L_0064c0d0;
L_0064c077:; BB(0x0064c077);
    /* 0064c077: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 0064c07a: mov esi, 1 */ r_esi = 0x1u;
    /* 0064c07f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0064c081: mov edi, eax */ r_edi = r_eax;
L_0064c083:; BB(0x0064c083);
    /* 0064c083: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0064c084: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x64c089u); f_0068d5a8();
    /* 0064c089: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064c08a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064c08c: je 0x64c0bd */ if (fZ) goto L_0064c0bd;
L_0064c08e:; BB(0x0064c08e);
    /* 0064c08e: mov edx, dword ptr [eax + 0x3f0] */ r_edx = R32((u32)(r_eax+0x3f0u));
    /* 0064c094: cmp edx, dword ptr [0xaafca0] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaafca0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064c09a: jne 0x64c0bb */ if (!fZ) goto L_0064c0bb;
L_0064c09c:; BB(0x0064c09c);
    /* 0064c09c: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0064c09f: lea edx, [ebx + 0x38] */ r_edx = (u32)(r_ebx+0x38u);
    /* 0064c0a2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0064c0a3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064c0a4: call 0x78ea50 */ r_esp -= 4; W32(r_esp, 0x64c0a9u); f_0078ea50();
    /* 0064c0a9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064c0ac: fld dword ptr [ebx + 0xac] */ FPUSH(R_F32((u32)(r_ebx+0xacu)));
    /* 0064c0b2: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0064c0b4: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0064c0b6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0064c0b8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0064c0b9: jae 0x64c0bd */ if (!fC) goto L_0064c0bd;
L_0064c0bb:; BB(0x0064c0bb);
    /* 0064c0bb: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_0064c0bd:; BB(0x0064c0bd);
    /* 0064c0bd: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0064c0c0: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0064c0c3: jl 0x64c083 */ if ((fS!=fO)) goto L_0064c083;
L_0064c0c5:; BB(0x0064c0c5);
    /* 0064c0c5: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 0064c0c8: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064c0ca: jne 0x64c044 */ if (!fZ) goto L_0064c044;
L_0064c0d0:; BB(0x0064c0d0);
    /* 0064c0d0: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0064c0d3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0064c0d4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0064c0d5: ret  */ FN_RET(0x0064bf20); r_esp += 4; return;
L_0064c0d6:; BB(0x0064c0d6);
    /* 0064c0d6: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0064c0dc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0064c0dd: call 0x73cd8c */ r_esp -= 4; W32(r_esp, 0x64c0e2u); f_0073cd8c();
    /* 0064c0e2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064c0e5: mov dword ptr [ebx + 0x1cc], eax */ W32((u32)(r_ebx+0x1ccu), r_eax);
    /* 0064c0eb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064c0ed: je 0x64bf9c */ if (fZ) goto L_0064bf9c;
L_0064c0f3:; BB(0x0064c0f3);
    /* 0064c0f3: push 0x54 */ { u32 v = 0x54u; r_esp -= 4; W32(r_esp, v); }
    /* 0064c0f5: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x64c0fau); f_0079317c();
    /* 0064c0fa: mov esi, eax */ r_esi = r_eax;
    /* 0064c0fc: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 0064c0fe: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x64c103u); f_0073ec50();
    /* 0064c103: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064c106: push 0x43b80000 */ { u32 v = 0x43b80000u; r_esp -= 4; W32(r_esp, v); }
    /* 0064c10b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064c10c: mov ecx, dword ptr [ebx + 0x1cc] */ r_ecx = R32((u32)(r_ebx+0x1ccu));
    /* 0064c112: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0064c113: call 0x73ce70 */ r_esp -= 4; W32(r_esp, 0x64c118u); f_0073ce70();
    /* 0064c118: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0064c11a: mov ecx, dword ptr [ebx + 0x1cc] */ r_ecx = R32((u32)(r_ebx+0x1ccu));
    /* 0064c120: call 0x73d148 */ r_esp -= 4; W32(r_esp, 0x64c125u); f_0073d148();
    /* 0064c125: mov ecx, dword ptr [ebx + 0x1cc] */ r_ecx = R32((u32)(r_ebx+0x1ccu));
    /* 0064c12b: call 0x73d170 */ r_esp -= 4; W32(r_esp, 0x64c130u); f_0073d170();
    /* 0064c130: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0064c136: call 0x718078 */ r_esp -= 4; W32(r_esp, 0x64c13bu); f_00718078();
    /* 0064c13b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064c13c: call 0x717d68 */ r_esp -= 4; W32(r_esp, 0x64c141u); f_00717d68();
    /* 0064c141: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0064c147: call 0x717f08 */ r_esp -= 4; W32(r_esp, 0x64c14cu); f_00717f08();
    /* 0064c14c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064c14d: jmp 0x64bf9c */ goto L_0064bf9c;
L_0064c152:; BB(0x0064c152);
    /* 0064c152: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0064c158: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0064c159: call 0x73cd8c */ r_esp -= 4; W32(r_esp, 0x64c15eu); f_0073cd8c();
    /* 0064c15e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064c161: mov dword ptr [ebx + 0x1cc], eax */ W32((u32)(r_ebx+0x1ccu), r_eax);
    /* 0064c167: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064c169: je 0x64bf9c */ if (fZ) goto L_0064bf9c;
L_0064c16f:; BB(0x0064c16f);
    /* 0064c16f: push 0x55 */ { u32 v = 0x55u; r_esp -= 4; W32(r_esp, v); }
    /* 0064c171: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x64c176u); f_0079317c();
    /* 0064c176: mov esi, eax */ r_esi = r_eax;
    /* 0064c178: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 0064c17a: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x64c17fu); f_0073ec50();
    /* 0064c17f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064c182: push 0x43b80000 */ { u32 v = 0x43b80000u; r_esp -= 4; W32(r_esp, v); }
    /* 0064c187: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064c188: mov ecx, dword ptr [ebx + 0x1cc] */ r_ecx = R32((u32)(r_ebx+0x1ccu));
    /* 0064c18e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0064c18f: call 0x73d0b0 */ r_esp -= 4; W32(r_esp, 0x64c194u); f_0073d0b0();
    /* 0064c194: jmp 0x64bf9c */ goto L_0064bf9c;
L_0064c199:; BB(0x0064c199);
    /* 0064c199: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
L_0064c19c:; BB(0x0064c19c);
    /* 0064c19c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064c19e: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x64c1a3u); f_00791748();
    /* 0064c1a3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064c1a4: mov eax, dword ptr [ebx + 0x1d4] */ r_eax = R32((u32)(r_ebx+0x1d4u));
    /* 0064c1aa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064c1ac: jne 0x64c017 */ if (!fZ) goto L_0064c017;
L_0064c1b2:; BB(0x0064c1b2);
    /* 0064c1b2: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0064c1b8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0064c1ba: call 0x64cc10 */ r_esp -= 4; W32(r_esp, 0x64c1bfu); f_0064cc10();
    /* 0064c1bf: mov dword ptr [ebx + 0x1d4], 1 */ W32((u32)(r_ebx+0x1d4u), 0x1u);
    /* 0064c1c9: jmp 0x64c017 */ goto L_0064c017;
L_0064c1ce:; BB(0x0064c1ce);
    /* 0064c1ce: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0064c1cf: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x64c1d4u); f_0068d5a8();
    /* 0064c1d4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064c1d5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064c1d7: je 0x64bffa */ if (fZ) goto L_0064bffa;
L_0064c1dd:; BB(0x0064c1dd);
    /* 0064c1dd: mov eax, dword ptr [eax + 0x33c] */ r_eax = R32((u32)(r_eax+0x33cu));
    /* 0064c1e3: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0064c1e5: je 0x64c1ee */ if (fZ) goto L_0064c1ee;
L_0064c1e7:; BB(0x0064c1e7);
    /* 0064c1e7: mov eax, 1 */ r_eax = 0x1u;
    /* 0064c1ec: jmp 0x64c1f0 */ goto L_0064c1f0;
L_0064c1ee:; BB(0x0064c1ee);
    /* 0064c1ee: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0064c1f0:; BB(0x0064c1f0);
    /* 0064c1f0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064c1f2: je 0x64bffa */ if (fZ) goto L_0064bffa;
L_0064c1f8:; BB(0x0064c1f8);
    /* 0064c1f8: mov edi, 0xffffff00 */ r_edi = 0xffffff00u;
    /* 0064c1fd: jmp 0x64bffa */ goto L_0064bffa;
L_0064c202:; BB(0x0064c202);
    /* 0064c202: mov dword ptr [esp + 4], 0x43650000 */ W32((u32)(r_esp+0x4u), 0x43650000u);
    /* 0064c20a: mov dword ptr [esp + 8], 0x42d00000 */ W32((u32)(r_esp+0x8u), 0x42d00000u);
    /* 0064c212: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 0064c214: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x64c219u); f_0073ec50();
    /* 0064c219: lea edx, [esp + 8] */ r_edx = (u32)(r_esp+0x8u);
    /* 0064c21d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0064c21e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064c21f: call 0x714ab0 */ r_esp -= 4; W32(r_esp, 0x64c224u); f_00714ab0();
    /* 0064c224: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064c227: mov dword ptr [ebx + 0x1c8], eax */ W32((u32)(r_ebx+0x1c8u), r_eax);
    /* 0064c22d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064c22f: je 0x64c2a3 */ if (fZ) goto L_0064c2a3;
L_0064c231:; BB(0x0064c231);
    /* 0064c231: movzx edx, word ptr [eax + 0x84] */ r_edx = (u32)R16((u32)(r_eax+0x84u));
    /* 0064c238: or edx, 0xffff0040 */ {  u32 a = r_edx; u32 b = 0xffff0040u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0064c23e: mov word ptr [eax + 0x84], dx */ W16((u32)(r_eax+0x84u), (u16)r_edx);
    /* 0064c245: mov esi, dword ptr [ebx + 0x1c8] */ r_esi = R32((u32)(r_ebx+0x1c8u));
    /* 0064c24b: movzx eax, word ptr [esi + 0x84] */ r_eax = (u32)R16((u32)(r_esi+0x84u));
    /* 0064c252: or eax, 0xffff0080 */ {  u32 a = r_eax; u32 b = 0xffff0080u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0064c257: mov word ptr [esi + 0x84], ax */ W16((u32)(r_esi+0x84u), (u16)r_eax);
    /* 0064c25e: mov edx, dword ptr [ebx + 0x1b8] */ r_edx = R32((u32)(r_ebx+0x1b8u));
    /* 0064c264: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0064c266: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0064c268: jle 0x64c2a3 */ if ((fZ||fS!=fO)) goto L_0064c2a3;
L_0064c26a:; BB(0x0064c26a);
    /* 0064c26a: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 0064c26d: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0064c270: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0064c272: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0064c274: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0064c276: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0064c278: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0064c27a: lea esi, [edx + edx + 0xe8] */ r_esi = (u32)(r_edx+r_edx+0xe8u);
    /* 0064c281: add esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0064c283: mov edi, eax */ r_edi = r_eax;
L_0064c285:; BB(0x0064c285);
    /* 0064c285: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0064c286: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0064c287: mov ecx, dword ptr [ebx + 0x1c8] */ r_ecx = R32((u32)(r_ebx+0x1c8u));
    /* 0064c28d: call 0x714d34 */ r_esp -= 4; W32(r_esp, 0x64c292u); f_00714d34();
    /* 0064c292: add esi, 0x30 */ {  u32 a = r_esi; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0064c295: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0064c298: cmp edi, dword ptr [ebx + 0x1b8] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebx+0x1b8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0064c29e: jl 0x64c285 */ if ((fS!=fO)) goto L_0064c285;
L_0064c2a0:; BB(0x0064c2a0);
    /* 0064c2a0: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
L_0064c2a3:; BB(0x0064c2a3);
    /* 0064c2a3: call 0x717d68 */ r_esp -= 4; W32(r_esp, 0x64c2a8u); f_00717d68();
    /* 0064c2a8: mov ecx, dword ptr [ebx + 0x1c8] */ r_ecx = R32((u32)(r_ebx+0x1c8u));
    /* 0064c2ae: jmp 0x64bfaa */ goto L_0064bfaa;
L_0064c2b3:; BB(0x0064c2b3);
    /* 0064c2b3: mov dword ptr [ebx + 0x1c4], 0x12c */ W32((u32)(r_ebx+0x1c4u), 0x12cu);
    /* 0064c2bd: lea edx, [ebx + 0x38] */ r_edx = (u32)(r_ebx+0x38u);
    /* 0064c2c0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0064c2c2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064c2c3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064c2c4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0064c2c5: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0064c2c7: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x64c2ccu); f_00814298();
    /* 0064c2cc: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064c2cf: mov eax, 1 */ r_eax = 0x1u;
    /* 0064c2d4: mov word ptr [ebx + 0xe4], ax */ W16((u32)(r_ebx+0xe4u), (u16)r_eax);
    /* 0064c2db: mov eax, dword ptr [0xa8f434] */ r_eax = R32((u32)(0xa8f434u));
    /* 0064c2e0: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 0064c2e6: mov esi, dword ptr [edx + 8] */ r_esi = R32((u32)(r_edx+0x8u));
    /* 0064c2e9: mov dword ptr [ebx + 0xd4], esi */ W32((u32)(r_ebx+0xd4u), r_esi);
    /* 0064c2ef: mov eax, dword ptr [eax + 0x430] */ r_eax = R32((u32)(r_eax+0x430u));
    /* 0064c2f5: mov eax, dword ptr [eax + 0x2c] */ r_eax = R32((u32)(r_eax+0x2cu));
    /* 0064c2f8: mov dword ptr [ebx + 0xd8], eax */ W32((u32)(r_ebx+0xd8u), r_eax);
    /* 0064c2fe: jmp 0x64c0d0 */ goto L_0064c0d0;
}

void f_0064bff7(void)
{
    FN_ENTER(0x0064bff7);
    goto L_0064bff7;
L_0064bfc7:; BB(0x0064bfc7);
    /* 0064bfc7: mov ecx, dword ptr [ebx + 0x1c8] */ r_ecx = R32((u32)(r_ebx+0x1c8u));
    /* 0064bfcd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0064bfce: mov edi, dword ptr [ebx + esi*4 + 0x1a8] */ r_edi = R32((u32)(r_ebx+r_esi*4+0x1a8u));
    /* 0064bfd5: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064bfd7: mov eax, 0 */ r_eax = 0x0u;
    /* 0064bfdc: setne al */ r_eax = (r_eax & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 0064bfdf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064bfe0: call 0x714d7c */ r_esp -= 4; W32(r_esp, 0x64bfe5u); f_00714d7c();
    /* 0064bfe5: movsx eax, word ptr [ebx + 0xe2] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0xe2u));
    /* 0064bfec: mov edi, 0xfff0f0f0 */ r_edi = 0xfff0f0f0u;
    /* 0064bff1: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064bff4: je 0x64c1ce */ if (fZ) goto L_0064c1ce;
L_0064bff7:; BB(0x0064bff7);
    /* 0064bff7: add dword ptr [eax], eax */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0064bff9: add byte ptr [esi + 0x57], dl */ { u32 ad = (u32)(r_esi+0x57u);  u32 a = R8(ad); u32 b = (u8)r_edx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
L_0064bffa:; BB(0x0064bffa);
    /* 0064bffa: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0064bffb: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0064bffc: mov ecx, dword ptr [ebx + 0x1c8] */ r_ecx = R32((u32)(r_ebx+0x1c8u));
    /* 0064c002: call 0x714df8 */ r_esp -= 4; W32(r_esp, 0x64c007u); f_00714df8();
    /* 0064c007: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0064c00a: cmp esi, dword ptr [ebx + 0x1b8] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebx+0x1b8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0064c010: jl 0x64bfc7 */ if ((fS!=fO)) goto L_0064bfc7;
L_0064c012:; BB(0x0064c012);
    /* 0064c012: jmp 0x64c199 */ goto L_0064c199;
L_0064c017:; BB(0x0064c017);
    /* 0064c017: mov eax, dword ptr [0x9c9558] */ r_eax = R32((u32)(0x9c9558u));
    /* 0064c01c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064c01e: jne 0x64c026 */ if (!fZ) goto L_0064c026;
L_0064c020:; BB(0x0064c020);
    /* 0064c020: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0064c023: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0064c024: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0064c025: ret  */ FN_RET(0x0064bff7); r_esp += 4; return;
L_0064c026:; BB(0x0064c026);
    /* 0064c026: add dword ptr [ebx + 0x1c4], -1 */ { u32 ad = (u32)(r_ebx+0x1c4u);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0064c02d: call 0x52cf54 */ r_esp -= 4; W32(r_esp, 0x64c032u); f_0052cf54();
    /* 0064c032: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064c034: je 0x64c0d0 */ if (fZ) goto L_0064c0d0;
L_0064c03a:; BB(0x0064c03a);
    /* 0064c03a: mov eax, dword ptr [ebx + 0x1c4] */ r_eax = R32((u32)(r_ebx+0x1c4u));
    /* 0064c040: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0064c042: jg 0x64c077 */ if ((!fZ&&fS==fO)) goto L_0064c077;
L_0064c044:; BB(0x0064c044);
    /* 0064c044: movzx esi, word ptr [ebx + 0x1c] */ r_esi = (u32)R16((u32)(r_ebx+0x1cu));
    /* 0064c048: mov byte ptr [esp + 0xc], 0x6a */ W8((u32)(r_esp+0xcu), 0x6au);
    /* 0064c04d: mov eax, 2 */ r_eax = 0x2u;
    /* 0064c052: mov byte ptr [esp + 0xd], al */ W8((u32)(r_esp+0xdu), (u8)r_eax);
    /* 0064c056: mov word ptr [esp + 0xe], si */ W16((u32)(r_esp+0xeu), (u16)r_esi);
    /* 0064c05b: mov word ptr [esp + 0x10], ax */ W16((u32)(r_esp+0x10u), (u16)r_eax);
    /* 0064c060: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 0064c064: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x64c069u); f_008003e0();
    /* 0064c069: mov eax, 2 */ r_eax = 0x2u;
    /* 0064c06e: mov word ptr [ebx + 0xe4], ax */ W16((u32)(r_ebx+0xe4u), (u16)r_eax);
    /* 0064c075: jmp 0x64c0d0 */ goto L_0064c0d0;
L_0064c077:; BB(0x0064c077);
    /* 0064c077: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 0064c07a: mov esi, 1 */ r_esi = 0x1u;
    /* 0064c07f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0064c081: mov edi, eax */ r_edi = r_eax;
L_0064c083:; BB(0x0064c083);
    /* 0064c083: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0064c084: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x64c089u); f_0068d5a8();
    /* 0064c089: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064c08a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064c08c: je 0x64c0bd */ if (fZ) goto L_0064c0bd;
L_0064c08e:; BB(0x0064c08e);
    /* 0064c08e: mov edx, dword ptr [eax + 0x3f0] */ r_edx = R32((u32)(r_eax+0x3f0u));
    /* 0064c094: cmp edx, dword ptr [0xaafca0] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaafca0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064c09a: jne 0x64c0bb */ if (!fZ) goto L_0064c0bb;
L_0064c09c:; BB(0x0064c09c);
    /* 0064c09c: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0064c09f: lea edx, [ebx + 0x38] */ r_edx = (u32)(r_ebx+0x38u);
    /* 0064c0a2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0064c0a3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064c0a4: call 0x78ea50 */ r_esp -= 4; W32(r_esp, 0x64c0a9u); f_0078ea50();
    /* 0064c0a9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064c0ac: fld dword ptr [ebx + 0xac] */ FPUSH(R_F32((u32)(r_ebx+0xacu)));
    /* 0064c0b2: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0064c0b4: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0064c0b6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0064c0b8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0064c0b9: jae 0x64c0bd */ if (!fC) goto L_0064c0bd;
L_0064c0bb:; BB(0x0064c0bb);
    /* 0064c0bb: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_0064c0bd:; BB(0x0064c0bd);
    /* 0064c0bd: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0064c0c0: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0064c0c3: jl 0x64c083 */ if ((fS!=fO)) goto L_0064c083;
L_0064c0c5:; BB(0x0064c0c5);
    /* 0064c0c5: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 0064c0c8: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064c0ca: jne 0x64c044 */ if (!fZ) goto L_0064c044;
L_0064c0d0:; BB(0x0064c0d0);
    /* 0064c0d0: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0064c0d3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0064c0d4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0064c0d5: ret  */ FN_RET(0x0064bff7); r_esp += 4; return;
L_0064c199:; BB(0x0064c199);
    /* 0064c199: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 0064c19c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064c19e: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x64c1a3u); f_00791748();
    /* 0064c1a3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064c1a4: mov eax, dword ptr [ebx + 0x1d4] */ r_eax = R32((u32)(r_ebx+0x1d4u));
    /* 0064c1aa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064c1ac: jne 0x64c017 */ if (!fZ) goto L_0064c017;
L_0064c1b2:; BB(0x0064c1b2);
    /* 0064c1b2: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0064c1b8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0064c1ba: call 0x64cc10 */ r_esp -= 4; W32(r_esp, 0x64c1bfu); f_0064cc10();
    /* 0064c1bf: mov dword ptr [ebx + 0x1d4], 1 */ W32((u32)(r_ebx+0x1d4u), 0x1u);
    /* 0064c1c9: jmp 0x64c017 */ goto L_0064c017;
L_0064c1ce:; BB(0x0064c1ce);
    /* 0064c1ce: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0064c1cf: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x64c1d4u); f_0068d5a8();
    /* 0064c1d4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064c1d5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064c1d7: je 0x64bffa */ if (fZ) goto L_0064bffa;
L_0064c1dd:; BB(0x0064c1dd);
    /* 0064c1dd: mov eax, dword ptr [eax + 0x33c] */ r_eax = R32((u32)(r_eax+0x33cu));
    /* 0064c1e3: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0064c1e5: je 0x64c1ee */ if (fZ) goto L_0064c1ee;
L_0064c1e7:; BB(0x0064c1e7);
    /* 0064c1e7: mov eax, 1 */ r_eax = 0x1u;
    /* 0064c1ec: jmp 0x64c1f0 */ goto L_0064c1f0;
L_0064c1ee:; BB(0x0064c1ee);
    /* 0064c1ee: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0064c1f0:; BB(0x0064c1f0);
    /* 0064c1f0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064c1f2: je 0x64bffa */ if (fZ) goto L_0064bffa;
L_0064c1f8:; BB(0x0064c1f8);
    /* 0064c1f8: mov edi, 0xffffff00 */ r_edi = 0xffffff00u;
    /* 0064c1fd: jmp 0x64bffa */ goto L_0064bffa;
}

