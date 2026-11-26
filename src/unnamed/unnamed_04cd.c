#include "protos.h"

void f_004cd004(void) /* sub_4CD004 */
{
    FN_ENTER(0x004cd004);
    /* 004cd004: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 004cd009: mov dword ptr [0xaab518], eax */ W32((u32)(0xaab518u), r_eax);
    /* 004cd00e: or eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004cd013: add ecx, 0x3cc */ {  u32 a = r_ecx; u32 b = 0x3ccu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004cd019: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 004cd01e: call 0x818f50 */ r_esp -= 4; W32(r_esp, 0x4cd023u); f_00818f50();
    /* 004cd023: mov eax, dword ptr [0xaab518] */ r_eax = R32((u32)(0xaab518u));
    /* 004cd028: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 004cd02d: ret  */ FN_RET(0x004cd004); r_esp += 4; return;
}

void f_004cd030(void) /* sub_4CD030 */
{
    FN_ENTER(0x004cd030);
    /* 004cd030: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004cd031: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004cd033: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x4cd038u); f_004f7c84();
    /* 004cd038: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004cd03a: jne 0x4cd043 */ if (!fZ) goto L_004cd043;
L_004cd03c:; BB(0x004cd03c);
    /* 004cd03c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004cd03e: call 0x4cd048 */ r_esp -= 4; W32(r_esp, 0x4cd043u); f_004cd048();
L_004cd043:; BB(0x004cd043);
    /* 004cd043: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004cd044: ret  */ FN_RET(0x004cd030); r_esp += 4; return;
}

void f_004cd048(void) /* sub_4CD048 */
{
    FN_ENTER(0x004cd048);
    /* 004cd048: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004cd049: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004cd04a: mov edi, ecx */ r_edi = r_ecx;
    /* 004cd04c: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x4cd051u); f_0082d7b0();
    /* 004cd051: lea ecx, [edi + 0x38] */ r_ecx = (u32)(r_edi+0x38u);
    /* 004cd054: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x4cd059u); f_0082d838();
    /* 004cd059: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 004cd05c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004cd05e: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x4cd063u); f_0082d8bc();
    /* 004cd063: mov edx, dword ptr [edi + 0x5c] */ r_edx = R32((u32)(r_edi+0x5cu));
    /* 004cd066: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004cd068: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x4cd06du); f_0082e9e4();
    /* 004cd06d: mov edx, dword ptr [edi + 0x64] */ r_edx = R32((u32)(r_edi+0x64u));
    /* 004cd070: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004cd072: call 0x830c04 */ r_esp -= 4; W32(r_esp, 0x4cd077u); f_00830c04();
    /* 004cd077: lea ecx, [edi + 0x68] */ r_ecx = (u32)(r_edi+0x68u);
    /* 004cd07a: call 0x831290 */ r_esp -= 4; W32(r_esp, 0x4cd07fu); f_00831290();
    /* 004cd07f: mov eax, dword ptr [0xa485c8] */ r_eax = R32((u32)(0xa485c8u));
    /* 004cd084: mov esi, dword ptr [edi + 0x34] */ r_esi = R32((u32)(r_edi+0x34u));
    /* 004cd087: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 004cd08d: mov eax, dword ptr [edx + 0x28] */ r_eax = R32((u32)(r_edx+0x28u));
    /* 004cd090: mov dword ptr [edi + 0x34], eax */ W32((u32)(r_edi+0x34u), r_eax);
    /* 004cd093: mov ecx, edi */ r_ecx = r_edi;
    /* 004cd095: call 0x7aa668 */ r_esp -= 4; W32(r_esp, 0x4cd09au); f_007aa668();
    /* 004cd09a: mov dword ptr [edi + 0x34], esi */ W32((u32)(r_edi+0x34u), r_esi);
    /* 004cd09d: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x4cd0a2u); f_0082da80();
    /* 004cd0a2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004cd0a3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004cd0a4: ret  */ FN_RET(0x004cd048); r_esp += 4; return;
}

void f_004cd0a8(void) /* sub_4CD0A8 */
{
    FN_ENTER(0x004cd0a8);
    /* 004cd0a8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004cd0a9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004cd0aa: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004cd0ad: mov esi, ecx */ r_esi = r_ecx;
    /* 004cd0af: push 0x41a00000 */ { u32 v = 0x41a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 004cd0b4: mov ecx, esi */ r_ecx = r_esi;
    /* 004cd0b6: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 004cd0b8: push 0x43c80000 */ { u32 v = 0x43c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 004cd0bd: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x4cd0c0u); call_ind(t); }
    /* 004cd0c0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004cd0c2: je 0x4cd20a */ if (fZ) goto L_004cd20a;
L_004cd0c8:; BB(0x004cd0c8);
    /* 004cd0c8: mov ecx, dword ptr [esi + 0x24] */ r_ecx = R32((u32)(r_esi+0x24u));
    /* 004cd0cb: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x4cd0d0u); f_00829cc8();
    /* 004cd0d0: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x4cd0d5u); f_0082d7b0();
    /* 004cd0d5: lea ecx, [esi + 0x38] */ r_ecx = (u32)(r_esi+0x38u);
    /* 004cd0d8: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x4cd0ddu); f_0082d838();
    /* 004cd0dd: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 004cd0e0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004cd0e2: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x4cd0e7u); f_0082d8bc();
    /* 004cd0e7: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x4cd0ecu); f_0082d7b0();
    /* 004cd0ec: push 0x41000000 */ { u32 v = 0x41000000u; r_esp -= 4; W32(r_esp, v); }
    /* 004cd0f1: push 0x40000000 */ { u32 v = 0x40000000u; r_esp -= 4; W32(r_esp, v); }
    /* 004cd0f6: push 0x41000000 */ { u32 v = 0x41000000u; r_esp -= 4; W32(r_esp, v); }
    /* 004cd0fb: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004cd0fd: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x4cd102u); f_0082fa0c();
    /* 004cd102: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x4cd107u); f_0082da80();
    /* 004cd107: push 0x40000000 */ { u32 v = 0x40000000u; r_esp -= 4; W32(r_esp, v); }
    /* 004cd10c: push 0x40000000 */ { u32 v = 0x40000000u; r_esp -= 4; W32(r_esp, v); }
    /* 004cd111: push 0x40000000 */ { u32 v = 0x40000000u; r_esp -= 4; W32(r_esp, v); }
    /* 004cd116: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004cd118: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x4cd11du); f_0082fa0c();
    /* 004cd11d: mov edx, dword ptr [0xaf034c] */ r_edx = R32((u32)(0xaf034cu));
    /* 004cd123: and edx, 0xfffffbff */ {  u32 a = r_edx; u32 b = 0xfffffbffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 004cd129: mov dword ptr [0xaf034c], edx */ W32((u32)(0xaf034cu), r_edx);
    /* 004cd12f: fld dword ptr [esi + 0x35c] */ FPUSH(R_F32((u32)(r_esi+0x35cu)));
    /* 004cd135: fnstcw word ptr [esp + 0xc] */ W16((u32)(r_esp+0xcu), fcw);
    /* 004cd139: movzx eax, word ptr [esp + 0xc] */ r_eax = (u32)R16((u32)(r_esp+0xcu));
    /* 004cd13e: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004cd143: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 004cd147: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 004cd14b: fistp dword ptr [esp + 0x1c] */ W32((u32)(r_esp+0x1cu), (u32)fx_int32(ST(0))); FPOP();
    /* 004cd14f: fldcw word ptr [esp + 0xc] */ fcw = R16((u32)(r_esp+0xcu));
    /* 004cd153: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 004cd157: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004cd159: jl 0x4cd167 */ if ((fS!=fO)) goto L_004cd167;
L_004cd15b:; BB(0x004cd15b);
    /* 004cd15b: cmp eax, 0x1c */ {  u32 a = r_eax; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004cd15e: jl 0x4cd169 */ if ((fS!=fO)) goto L_004cd169;
L_004cd160:; BB(0x004cd160);
    /* 004cd160: mov eax, 0x1b */ r_eax = 0x1bu;
    /* 004cd165: jmp 0x4cd169 */ goto L_004cd169;
L_004cd167:; BB(0x004cd167);
    /* 004cd167: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004cd169:; BB(0x004cd169);
    /* 004cd169: mov edx, dword ptr [esi + 0xd8] */ r_edx = R32((u32)(r_esi+0xd8u));
    /* 004cd16f: mov ebx, dword ptr [esi + 0xdc] */ r_ebx = R32((u32)(r_esi+0xdcu));
    /* 004cd175: fld dword ptr [esi + 0x360] */ FPUSH(R_F32((u32)(r_esi+0x360u)));
    /* 004cd17b: fst dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0));
    /* 004cd17f: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004cd181: mov eax, dword ptr [edx + eax*8 + 4] */ r_eax = R32((u32)(r_edx+r_eax*8+0x4u));
    /* 004cd185: mov ebx, dword ptr [ebx + eax*8 + 4] */ r_ebx = R32((u32)(r_ebx+r_eax*8+0x4u));
    /* 004cd189: fcomp dword ptr [0x908348] */ fx_compare(ST(0), R_F32((u32)(0x908348u))); FPOP();
    /* 004cd18f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004cd191: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004cd192: jae 0x4cd1a0 */ if (!fC) goto L_004cd1a0;
L_004cd194:; BB(0x004cd194);
    /* 004cd194: fld dword ptr [0x908348] */ FPUSH(R_F32((u32)(0x908348u)));
    /* 004cd19a: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 004cd19e: jmp 0x4cd1d9 */ goto L_004cd1d9;
L_004cd1a0:; BB(0x004cd1a0);
    /* 004cd1a0: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 004cd1a4: mov ecx, dword ptr [ebx + 4] */ r_ecx = R32((u32)(r_ebx+0x4u));
    /* 004cd1a7: lea edx, [ecx - 1] */ r_edx = (u32)(r_ecx+0xffffffffu);
    /* 004cd1aa: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 004cd1ae: fild dword ptr [esp + 0x24] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x24u)));
    /* 004cd1b2: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 004cd1b5: fadd dword ptr [edx*4 + 0x9081d8] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x9081d8u));
    /* 004cd1bc: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 004cd1be: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004cd1c0: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004cd1c1: jae 0x4cd1d9 */ if (!fC) goto L_004cd1d9;
L_004cd1c3:; BB(0x004cd1c3);
    /* 004cd1c3: mov dword ptr [esp + 0x24], ecx */ W32((u32)(r_esp+0x24u), r_ecx);
    /* 004cd1c7: fild dword ptr [esp + 0x24] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x24u)));
    /* 004cd1cb: shr ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 004cd1ce: fadd dword ptr [ecx*4 + 0x9081d8] */ ST(0) = ST(0) + R_F32((u32)(r_ecx*4+0x9081d8u));
    /* 004cd1d5: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
L_004cd1d9:; BB(0x004cd1d9);
    /* 004cd1d9: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x4cd1deu); f_0082fa9c();
    /* 004cd1de: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 004cd1e2: mov eax, dword ptr [esi + 0x34] */ r_eax = R32((u32)(r_esi+0x34u));
    /* 004cd1e5: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004cd1e9: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 004cd1ec: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 004cd1f0: call 0x83046c */ r_esp -= 4; W32(r_esp, 0x4cd1f5u); f_0083046c();
    /* 004cd1f5: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x4cd1fau); f_0082faac();
    /* 004cd1fa: mov ecx, dword ptr [0xa9d4d0] */ r_ecx = R32((u32)(0xa9d4d0u));
    /* 004cd200: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4cd205u); f_0061cdb0();
    /* 004cd205: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x4cd20au); f_0082da80();
L_004cd20a:; BB(0x004cd20a);
    /* 004cd20a: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004cd20d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004cd20e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004cd20f: ret  */ FN_RET(0x004cd0a8); r_esp += 4; return;
}

void f_004cd210(void) /* sub_4CD210 */
{
    FN_ENTER(0x004cd210);
    /* 004cd210: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004cd214: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004cd217: jl 0x4cd227 */ if ((fS!=fO)) goto L_004cd227;
L_004cd219:; BB(0x004cd219);
    /* 004cd219: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004cd21c: jg 0x4cd227 */ if ((!fZ&&fS==fO)) goto L_004cd227;
L_004cd21e:; BB(0x004cd21e);
    /* 004cd21e: fld dword ptr [0x908344] */ FPUSH(R_F32((u32)(0x908344u)));
    /* 004cd224: ret 0x18 */ FN_RET(0x004cd210); r_esp += 28; return;
L_004cd227:; BB(0x004cd227);
    /* 004cd227: push dword ptr [esp + 0x18] */ { u32 v = R32((u32)(r_esp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 004cd22b: push dword ptr [esp + 0x18] */ { u32 v = R32((u32)(r_esp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 004cd22f: push dword ptr [esp + 0x18] */ { u32 v = R32((u32)(r_esp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 004cd233: push dword ptr [esp + 0x18] */ { u32 v = R32((u32)(r_esp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 004cd237: push dword ptr [esp + 0x18] */ { u32 v = R32((u32)(r_esp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 004cd23b: push dword ptr [esp + 0x18] */ { u32 v = R32((u32)(r_esp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 004cd23f: call 0x773afc */ r_esp -= 4; W32(r_esp, 0x4cd244u); f_00773afc();
    /* 004cd244: ret 0x18 */ FN_RET(0x004cd210); r_esp += 28; return;
}

void f_004cd22c(void)
{
    FN_ENTER(0x004cd22c);
    /* 004cd22c: je 0x4cd252 */ if (fZ) goto L_004cd252;
L_004cd22e:; BB(0x004cd22e);
    /* 004cd22e: sbb bh, bh */ { u32 c = fC; u32 a = (u8)(r_ebx>>8); u32 b = (u8)(r_ebx>>8); u32 r = (a - b - c) & 0xffu; r_ebx = (r_ebx & 0xffff00ffu) | (((r) & 0xffu) << 8); fZ = (r == 0); fC = ((u64)a < (u64)b + c); }
    /* 004cd230: je 0x4cd256 */ if (fZ) goto L_004cd256;
L_004cd232:; BB(0x004cd232);
    /* 004cd232: sbb bh, bh */ { u32 c = fC; u32 a = (u8)(r_ebx>>8); u32 b = (u8)(r_ebx>>8); u32 r = (a - b - c) & 0xffu; r_ebx = (r_ebx & 0xffff00ffu) | (((r) & 0xffu) << 8); fZ = (r == 0); fC = ((u64)a < (u64)b + c); }
    /* 004cd234: je 0x4cd25a */ if (fZ) goto L_004cd25a;
L_004cd236:; BB(0x004cd236);
    /* 004cd236: sbb bh, bh */ { u32 c = fC; u32 a = (u8)(r_ebx>>8); u32 b = (u8)(r_ebx>>8); u32 r = (a - b - c) & 0xffu; r_ebx = (r_ebx & 0xffff00ffu) | (((r) & 0xffu) << 8); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = ((u64)a < (u64)b + c); }
    /* 004cd238: je 0x4cd25e */ if (fZ) goto L_004cd25e;
L_004cd23a:; BB(0x004cd23a);
    /* 004cd23a: sbb bh, bh */ { u32 c = fC; u32 a = (u8)(r_ebx>>8); u32 b = (u8)(r_ebx>>8); u32 r = (a - b - c) & 0xffu; r_ebx = (r_ebx & 0xffff00ffu) | (((r) & 0xffu) << 8); fZ = (r == 0); fC = ((u64)a < (u64)b + c); }
    /* 004cd23c: je 0x4cd262 */ if (fZ) goto L_004cd262;
L_004cd23e:; BB(0x004cd23e);
    /* 004cd23e: sbb al, ch */ { u32 c = fC; u32 a = (u8)r_eax; u32 b = (u8)(r_ecx>>8); u32 r = (a - b - c) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fC = ((u64)a < (u64)b + c); }
    /* 004cd240: mov eax, 0xc2002a68 */ r_eax = 0xc2002a68u;
    /* 004cd245: sbb byte ptr [eax], al */ { u32 ad = (u32)(r_eax); u32 c = fC; u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a - b - c) & 0xffu; W8(ad, r);  }
    /* 004cd247: nop  */ ;
    /* 004cd248: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 004cd24c: mov eax, dword ptr [edx*8 + 0x9ac260] */ r_eax = R32((u32)(r_edx*8+0x9ac260u));
L_004cd252:; BB(0x004cd252);
    /* 004cd252: add byte ptr [ebx], bh */ { u32 ad = (u32)(r_ebx);  u32 a = R8(ad); u32 b = (u8)(r_ebx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 004cd253: cmp eax, dword ptr [0x9083f8] */ {  u32 a = r_eax; u32 b = R32((u32)(0x9083f8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004cd254: add eax, 0x9083f8 */ {  u32 a = r_eax; u32 b = 0x9083f8u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
L_004cd256:; BB(0x004cd256);
    /* 004cd256: adc dword ptr [eax - 0x74ed8c00], 0x14 */ { u32 ad = (u32)(r_eax+0x8b127400u); u32 c = fC; u32 a = R32(ad); u32 b = 0x14u; u32 r = (a + b + c) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (unsigned)((((u64)a + b + c) >> 32) & 1); }
    /* 004cd259: je 0x4cd26d */ if (fZ) goto L_004cd26d;
L_004cd25a:; BB(0x004cd25a);
    /* 004cd25a: adc cl, byte ptr [ebx - 0x3d9b2aec] */ { u32 c = fC; u32 a = (u8)r_ecx; u32 b = R8((u32)(r_ebx+0xc264d514u)); u32 r = (a + b + c) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 7) & 1; fC = (unsigned)((((u64)a + b + c) >> 8) & 1); }
L_004cd25b:; BB(0x004cd25b);
    /* 004cd25b: mov edx, dword ptr [edx*8 + 0x9ac264] */ r_edx = R32((u32)(r_edx*8+0x9ac264u));
    /* 004cd25d: aad 0x64 */ UNSUP(0x004cd25d, "aad 0x64");
L_004cd25e:; BB(0x004cd25e);
    /* 004cd25e: ret 0x9a */ FN_RET(0x004cd22c); r_esp += 158; return;
    /* 004cd25f: ret 0x9a */ FN_RET(0x004cd22c); r_esp += 158; return;
    /* 004cd260: lcall 0x308, 0x2474ff00 */ UNSUP(0x004cd260, "lcall 0x308, 0x2474ff00");
L_004cd262:; BB(0x004cd262);
    /* 004cd262: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004cd266: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004cd267: retf 0xd0ff */ { u32 t = R32(r_esp); r_esp += 4; r_eax = r_edx = 0; call_ind(t); }
    /* 004cd268: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4cd26au); call_ind(t); }
L_004cd26a:; BB(0x004cd26a);
    /* 004cd26a: ret 8 */ FN_RET(0x004cd22c); r_esp += 12; return;
L_004cd26d:; BB(0x004cd26d);
    /* 004cd26d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004cd26f: je 0x4cd26a */ if (fZ) goto L_004cd26a;
L_004cd271:; BB(0x004cd271);
    /* 004cd271: mov edx, dword ptr [edx*8 + 0x9ac264] */ r_edx = R32((u32)(r_edx*8+0x9ac264u));
    /* 004cd278: cmp edx, dword ptr [0x9083fc] */ {  u32 a = r_edx; u32 b = R32((u32)(0x9083fcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004cd27e: je 0x4cd26a */ if (fZ) goto L_004cd26a;
L_004cd280:; BB(0x004cd280);
    /* 004cd280: jmp 0x4cd262 */ goto L_004cd262;
}

void f_004cd248(void) /* sub_4CD248 */
{
    FN_ENTER(0x004cd248);
    /* 004cd248: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 004cd24c: mov eax, dword ptr [edx*8 + 0x9ac260] */ r_eax = R32((u32)(r_edx*8+0x9ac260u));
    /* 004cd253: cmp eax, dword ptr [0x9083f8] */ {  u32 a = r_eax; u32 b = R32((u32)(0x9083f8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004cd259: je 0x4cd26d */ if (fZ) goto L_004cd26d;
L_004cd25b:; BB(0x004cd25b);
    /* 004cd25b: mov edx, dword ptr [edx*8 + 0x9ac264] */ r_edx = R32((u32)(r_edx*8+0x9ac264u));
L_004cd262:; BB(0x004cd262);
    /* 004cd262: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004cd266: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004cd268: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4cd26au); call_ind(t); }
L_004cd26a:; BB(0x004cd26a);
    /* 004cd26a: ret 8 */ FN_RET(0x004cd248); r_esp += 12; return;
L_004cd26d:; BB(0x004cd26d);
    /* 004cd26d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004cd26f: je 0x4cd26a */ if (fZ) goto L_004cd26a;
L_004cd271:; BB(0x004cd271);
    /* 004cd271: mov edx, dword ptr [edx*8 + 0x9ac264] */ r_edx = R32((u32)(r_edx*8+0x9ac264u));
    /* 004cd278: cmp edx, dword ptr [0x9083fc] */ {  u32 a = r_edx; u32 b = R32((u32)(0x9083fcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004cd27e: je 0x4cd26a */ if (fZ) goto L_004cd26a;
L_004cd280:; BB(0x004cd280);
    /* 004cd280: jmp 0x4cd262 */ goto L_004cd262;
}

void f_004cd284(void) /* sub_4CD284 */
{
    FN_ENTER(0x004cd284);
    /* 004cd284: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004cd286: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004cd287: push dword ptr [0xa48514] */ { u32 v = R32((u32)(0xa48514u)); r_esp -= 4; W32(r_esp, v); }
    /* 004cd28d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004cd28e: call 0x520c70 */ r_esp -= 4; W32(r_esp, 0x4cd293u); f_00520c70();
    /* 004cd293: ret  */ FN_RET(0x004cd284); r_esp += 4; return;
}

void f_004cd294(void) /* sub_4CD294 */
{
    FN_ENTER(0x004cd294);
    /* 004cd294: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004cd297: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 004cd29b: mov edx, dword ptr [0x907fd4] */ r_edx = R32((u32)(0x907fd4u));
    /* 004cd2a1: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 004cd2a4: mov edx, dword ptr [0x907fe4] */ r_edx = R32((u32)(0x907fe4u));
    /* 004cd2aa: mov dword ptr [esp + 4], 0x40000000 */ W32((u32)(r_esp+0x4u), 0x40000000u);
    /* 004cd2b2: mov dword ptr [esp + 0xc], 0x41200000 */ W32((u32)(r_esp+0xcu), 0x41200000u);
    /* 004cd2ba: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 004cd2be: mov edx, dword ptr [0xa48500] */ r_edx = R32((u32)(0xa48500u));
    /* 004cd2c4: mov dword ptr [esp + 8], 0x41200000 */ W32((u32)(r_esp+0x8u), 0x41200000u);
    /* 004cd2cc: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004cd2ce: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 004cd2d2: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 004cd2d5: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 004cd2d8: push dword ptr [esp + 0x20] */ { u32 v = R32((u32)(r_esp+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 004cd2dc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004cd2dd: push dword ptr [esp + 0x20] */ { u32 v = R32((u32)(r_esp+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 004cd2e1: call 0x51fc9c */ r_esp -= 4; W32(r_esp, 0x4cd2e6u); f_0051fc9c();
    /* 004cd2e6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004cd2e9: ret 0xc */ FN_RET(0x004cd294); r_esp += 16; return;
}

void f_004cd2ec(void) /* sub_4CD2EC */
{
    FN_ENTER(0x004cd2ec);
    /* 004cd2ec: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004cd2ef: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 004cd2f3: mov edx, dword ptr [0x907fe8] */ r_edx = R32((u32)(0x907fe8u));
    /* 004cd2f9: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 004cd2fc: mov edx, dword ptr [0x907ff8] */ r_edx = R32((u32)(0x907ff8u));
    /* 004cd302: mov dword ptr [esp + 4], 0x41200000 */ W32((u32)(r_esp+0x4u), 0x41200000u);
    /* 004cd30a: mov dword ptr [esp + 0xc], 0x41200000 */ W32((u32)(r_esp+0xcu), 0x41200000u);
    /* 004cd312: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 004cd316: mov edx, dword ptr [0xa48500] */ r_edx = R32((u32)(0xa48500u));
    /* 004cd31c: mov dword ptr [esp + 8], 0x41f00000 */ W32((u32)(r_esp+0x8u), 0x41f00000u);
    /* 004cd324: mov edx, dword ptr [edx + 4] */ r_edx = R32((u32)(r_edx+0x4u));
    /* 004cd327: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 004cd32b: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 004cd32e: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 004cd331: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004cd333: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004cd334: push dword ptr [esp + 0x20] */ { u32 v = R32((u32)(r_esp+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 004cd338: call 0x51fc9c */ r_esp -= 4; W32(r_esp, 0x4cd33du); f_0051fc9c();
    /* 004cd33d: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004cd340: ret 8 */ FN_RET(0x004cd2ec); r_esp += 12; return;
}

void f_004cd344(void) /* sub_4CD344 */
{
    FN_ENTER(0x004cd344);
    /* 004cd344: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004cd347: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 004cd34b: mov edx, dword ptr [0x907ffc] */ r_edx = R32((u32)(0x907ffcu));
    /* 004cd351: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 004cd354: mov edx, dword ptr [0x90800c] */ r_edx = R32((u32)(0x90800cu));
    /* 004cd35a: mov dword ptr [esp + 4], 0x41200000 */ W32((u32)(r_esp+0x4u), 0x41200000u);
    /* 004cd362: mov dword ptr [esp + 0xc], 0x41200000 */ W32((u32)(r_esp+0xcu), 0x41200000u);
    /* 004cd36a: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 004cd36e: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004cd372: mov eax, dword ptr [0xa48500] */ r_eax = R32((u32)(0xa48500u));
    /* 004cd377: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 004cd37a: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 004cd37e: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 004cd381: push dword ptr [ecx + 0x688] */ { u32 v = R32((u32)(r_ecx+0x688u)); r_esp -= 4; W32(r_esp, v); }
    /* 004cd387: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004cd388: push dword ptr [esp + 0x20] */ { u32 v = R32((u32)(r_esp+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 004cd38c: call 0x51fc9c */ r_esp -= 4; W32(r_esp, 0x4cd391u); f_0051fc9c();
    /* 004cd391: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004cd394: ret 8 */ FN_RET(0x004cd344); r_esp += 12; return;
}

void f_004cd398(void) /* sub_4CD398 */
{
    FN_ENTER(0x004cd398);
    /* 004cd398: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004cd399: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004cd39c: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004cd39e: movsx eax, word ptr [ebp + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32eu));
    /* 004cd3a5: cmp eax, 0x16 */ {  u32 a = r_eax; u32 b = 0x16u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004cd3a8: je 0x4cd44a */ if (fZ) goto L_004cd44a;
L_004cd3ae:; BB(0x004cd3ae);
    /* 004cd3ae: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004cd3b0: push 0x16 */ { u32 v = 0x16u; r_esp -= 4; W32(r_esp, v); }
    /* 004cd3b2: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 004cd3b5: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004cd3b7: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4cd3bdu); call_ind(t); }
    /* 004cd3bd: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 004cd3c1: mov ecx, dword ptr [ebp + 0x694] */ r_ecx = R32((u32)(r_ebp+0x694u));
    /* 004cd3c7: mov byte ptr [esp], 0xa8 */ W8((u32)(r_esp), 0xa8u);
    /* 004cd3cb: mov edx, 0x16 */ r_edx = 0x16u;
    /* 004cd3d0: mov byte ptr [esp + 1], 6 */ W8((u32)(r_esp+0x1u), 0x6u);
    /* 004cd3d5: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 004cd3da: mov eax, dword ptr [ebp + 0x67c] */ r_eax = R32((u32)(r_ebp+0x67cu));
    /* 004cd3e0: mov word ptr [esp + 4], dx */ W16((u32)(r_esp+0x4u), (u16)r_edx);
    /* 004cd3e5: mov word ptr [esp + 6], ax */ W16((u32)(r_esp+0x6u), (u16)r_eax);
    /* 004cd3ea: movzx eax, word ptr [ebp + 0x394] */ r_eax = (u32)R16((u32)(r_ebp+0x394u));
    /* 004cd3f1: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004cd3f5: mov eax, dword ptr [ebp + 0x690] */ r_eax = R32((u32)(r_ebp+0x690u));
    /* 004cd3fb: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 004cd3ff: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 004cd403: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4cd408u); f_008587a5();
    /* 004cd408: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 004cd40c: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 004cd410: fdiv dword ptr [0x908330] */ ST(0) = ST(0) / R_F32((u32)(0x908330u));
    /* 004cd416: fmul dword ptr [0x908334] */ ST(0) = ST(0) * R_F32((u32)(0x908334u));
    /* 004cd41c: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 004cd41f: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 004cd423: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 004cd428: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004cd42d: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 004cd431: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 004cd435: fistp dword ptr [esp + 0x30] */ W32((u32)(r_esp+0x30u), (u32)fx_int32(ST(0))); FPOP();
    /* 004cd439: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 004cd43d: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 004cd441: mov byte ptr [esp + 0x14], al */ W8((u32)(r_esp+0x14u), (u8)r_eax);
    /* 004cd445: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4cd44au); f_008003e0();
L_004cd44a:; BB(0x004cd44a);
    /* 004cd44a: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004cd44d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004cd44e: ret  */ FN_RET(0x004cd398); r_esp += 4; return;
}

void f_004cd450(void)
{
    FN_ENTER(0x004cd450);
    /* 004cd450: fld dword ptr [0x921680] */ FPUSH(R_F32((u32)(0x921680u)));
    /* 004cd456: fld dword ptr [0x908310] */ FPUSH(R_F32((u32)(0x908310u)));
    /* 004cd45c: fld dword ptr [0x90830c] */ FPUSH(R_F32((u32)(0x90830cu)));
    /* 004cd462: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004cd464: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 004cd466: fstp dword ptr [0xa485b4] */ W_F32((u32)(0xa485b4u), ST(0)); FPOP();
    /* 004cd46c: mov eax, dword ptr [0xa485b4] */ r_eax = R32((u32)(0xa485b4u));
    /* 004cd471: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004cd473: fstp dword ptr [0xa485b8] */ W_F32((u32)(0xa485b8u), ST(0)); FPOP();
    /* 004cd479: mov dword ptr [0xa485a0], 0x3f800000 */ W32((u32)(0xa485a0u), 0x3f800000u);
    /* 004cd483: mov dword ptr [0xa485a4], 0x41000000 */ W32((u32)(0xa485a4u), 0x41000000u);
    /* 004cd48d: mov dword ptr [0xa4856c], eax */ W32((u32)(0xa4856cu), r_eax);
    /* 004cd492: mov dword ptr [0xa485a8], 0x3fc00000 */ W32((u32)(0xa485a8u), 0x3fc00000u);
    /* 004cd49c: mov dword ptr [0xa485ac], 0x3f000000 */ W32((u32)(0xa485acu), 0x3f000000u);
    /* 004cd4a6: mov dword ptr [0xa48528], 0x42e60000 */ W32((u32)(0xa48528u), 0x42e60000u);
    /* 004cd4b0: mov dword ptr [0xa48524], 0x420c0000 */ W32((u32)(0xa48524u), 0x420c0000u);
    /* 004cd4ba: mov dword ptr [0xa4850c], 0x45c80000 */ W32((u32)(0xa4850cu), 0x45c80000u);
    /* 004cd4c4: mov dword ptr [0xa485b0], 0x44610000 */ W32((u32)(0xa485b0u), 0x44610000u);
    /* 004cd4ce: mov dword ptr [0x9ac49c], 0x41f00000 */ W32((u32)(0x9ac49cu), 0x41f00000u);
    /* 004cd4d8: mov dword ptr [0x9ac4d8], 0x420c0000 */ W32((u32)(0x9ac4d8u), 0x420c0000u);
    /* 004cd4e2: mov dword ptr [0xa485bc], 0x441c4000 */ W32((u32)(0xa485bcu), 0x441c4000u);
    /* 004cd4ec: mov dword ptr [0x9ac4c4], 0x41c80000 */ W32((u32)(0x9ac4c4u), 0x41c80000u);
    /* 004cd4f6: mov dword ptr [0xa4855c], 0x43af0000 */ W32((u32)(0xa4855cu), 0x43af0000u);
    /* 004cd500: mov dword ptr [0xa48560], 0x43af0000 */ W32((u32)(0xa48560u), 0x43af0000u);
    /* 004cd50a: mov dword ptr [0x9ac40c], 0x42340000 */ W32((u32)(0x9ac40cu), 0x42340000u);
    /* 004cd514: mov dword ptr [0xa485c0], 0x43af0000 */ W32((u32)(0xa485c0u), 0x43af0000u);
    /* 004cd51e: mov dword ptr [0xa48564], 0xbecdb6db */ W32((u32)(0xa48564u), 0xbecdb6dbu);
    /* 004cd528: mov dword ptr [0x9ac47c], 0 */ W32((u32)(0x9ac47cu), 0x0u);
    /* 004cd532: mov dword ptr [0x9ac12c], 0x41200000 */ W32((u32)(0x9ac12cu), 0x41200000u);
    /* 004cd53c: mov dword ptr [0x9ac158], 0x41200000 */ W32((u32)(0x9ac158u), 0x41200000u);
    /* 004cd546: mov dword ptr [0x9ac184], 0x41200000 */ W32((u32)(0x9ac184u), 0x41200000u);
    /* 004cd550: mov dword ptr [0x9ac1b0], 0x41700000 */ W32((u32)(0x9ac1b0u), 0x41700000u);
    /* 004cd55a: mov dword ptr [0x9ac1dc], 0x41700000 */ W32((u32)(0x9ac1dcu), 0x41700000u);
    /* 004cd564: mov dword ptr [0x9ac208], 0x41200000 */ W32((u32)(0x9ac208u), 0x41200000u);
    /* 004cd56e: mov dword ptr [0x9ac234], 0x41200000 */ W32((u32)(0x9ac234u), 0x41200000u);
    /* 004cd578: mov dword ptr [0x9ac098], 0x3f000000 */ W32((u32)(0x9ac098u), 0x3f000000u);
    /* 004cd582: mov dword ptr [0xa48568], 0x41500000 */ W32((u32)(0xa48568u), 0x41500000u);
    /* 004cd58c: ret  */ FN_RET(0x004cd450); r_esp += 4; return;
}

void f_004cd590(void) /* sub_4CD590 */
{
    FN_ENTER(0x004cd590);
    /* 004cd590: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004cd591: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004cd594: push 0x9ac3d0 */ { u32 v = 0x9ac3d0u; r_esp -= 4; W32(r_esp, v); }
    /* 004cd599: call 0x51f6b0 */ r_esp -= 4; W32(r_esp, 0x4cd59eu); f_0051f6b0();
    /* 004cd59e: mov dword ptr [0xa485c8], eax */ W32((u32)(0xa485c8u), r_eax);
    /* 004cd5a3: mov eax, dword ptr [eax + 0x42c] */ r_eax = R32((u32)(r_eax+0x42cu));
    /* 004cd5a9: push dword ptr [eax + 8] */ { u32 v = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004cd5ac: call 0x782a54 */ r_esp -= 4; W32(r_esp, 0x4cd5b1u); f_00782a54();
    /* 004cd5b1: mov dword ptr [0xa485ec], eax */ W32((u32)(0xa485ecu), r_eax);
    /* 004cd5b6: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 004cd5b9: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004cd5bb: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004cd5bd: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004cd5bf: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004cd5c1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004cd5c2: call 0x82e940 */ r_esp -= 4; W32(r_esp, 0x4cd5c7u); f_0082e940();
    /* 004cd5c7: mov edx, eax */ r_edx = r_eax;
    /* 004cd5c9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004cd5cc: mov dword ptr [0xa485d8], 0 */ W32((u32)(0xa485d8u), 0x0u);
    /* 004cd5d6: mov dword ptr [0xa485e8], edx */ W32((u32)(0xa485e8u), r_edx);
    /* 004cd5dc: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004cd5de: mov dword ptr [0xa485dc], 0 */ W32((u32)(0xa485dcu), 0x0u);
    /* 004cd5e8: mov dword ptr [0xa485d0], ecx */ W32((u32)(0xa485d0u), r_ecx);
    /* 004cd5ee: mov dword ptr [0xa485d4], ecx */ W32((u32)(0xa485d4u), r_ecx);
    /* 004cd5f4: mov ecx, dword ptr [0xa485c8] */ r_ecx = R32((u32)(0xa485c8u));
    /* 004cd5fa: mov ecx, dword ptr [ecx + 0x42c] */ r_ecx = R32((u32)(r_ecx+0x42cu));
    /* 004cd600: mov dword ptr [0xa485e0], 0 */ W32((u32)(0xa485e0u), 0x0u);
    /* 004cd60a: mov dword ptr [0xa485e4], 0 */ W32((u32)(0xa485e4u), 0x0u);
    /* 004cd614: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 004cd617: mov ecx, 0xa485d0 */ r_ecx = 0xa485d0u;
    /* 004cd61c: call 0x4252a0 */ r_esp -= 4; W32(r_esp, 0x4cd621u); f_004252a0();
    /* 004cd621: mov dword ptr [0xa4865c], 0 */ W32((u32)(0xa4865cu), 0x0u);
    /* 004cd62b: mov ecx, 0xffffeaab */ r_ecx = 0xffffeaabu;
    /* 004cd630: mov dword ptr [0xa48658], 0x3c */ W32((u32)(0xa48658u), 0x3cu);
    /* 004cd63a: mov dword ptr [0xa4864c], 0 */ W32((u32)(0xa4864cu), 0x0u);
    /* 004cd644: mov dword ptr [0xa48650], 0 */ W32((u32)(0xa48650u), 0x0u);
    /* 004cd64e: mov dword ptr [0xa48654], 0 */ W32((u32)(0xa48654u), 0x0u);
    /* 004cd658: mov dword ptr [0xa48628], 0 */ W32((u32)(0xa48628u), 0x0u);
    /* 004cd662: mov dword ptr [0xa4862c], 0 */ W32((u32)(0xa4862cu), 0x0u);
    /* 004cd66c: mov dword ptr [0xa48630], 0x40a00000 */ W32((u32)(0xa48630u), 0x40a00000u);
    /* 004cd676: mov dword ptr [0xa48634], 0 */ W32((u32)(0xa48634u), 0x0u);
    /* 004cd680: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x4cd685u); f_0082dcbc();
    /* 004cd685: fstp dword ptr [0xa48638] */ W_F32((u32)(0xa48638u), ST(0)); FPOP();
    /* 004cd68b: mov ecx, 0xffffeaab */ r_ecx = 0xffffeaabu;
    /* 004cd690: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x4cd695u); f_0082ddd8();
    /* 004cd695: fstp dword ptr [0xa4863c] */ W_F32((u32)(0xa4863cu), ST(0)); FPOP();
    /* 004cd69b: mov ecx, 0xa48634 */ r_ecx = 0xa48634u;
    /* 004cd6a0: mov edx, 0xa48628 */ r_edx = 0xa48628u;
    /* 004cd6a5: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x4cd6aau); f_0082ebac();
    /* 004cd6aa: mov dword ptr [0xa48640], 0 */ W32((u32)(0xa48640u), 0x0u);
    /* 004cd6b4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004cd6b6: mov dword ptr [0xa48624], eax */ W32((u32)(0xa48624u), r_eax);
    /* 004cd6bb: mov dword ptr [0xa48644], 0xbf800000 */ W32((u32)(0xa48644u), 0xbf800000u);
    /* 004cd6c5: mov dword ptr [0xa48620], eax */ W32((u32)(0xa48620u), r_eax);
    /* 004cd6ca: mov dword ptr [0xa48648], 0x3f800000 */ W32((u32)(0xa48648u), 0x3f800000u);
    /* 004cd6d4: mov dword ptr [0xa4861c], eax */ W32((u32)(0xa4861cu), r_eax);
    /* 004cd6d9: mov dword ptr [0xa48618], eax */ W32((u32)(0xa48618u), r_eax);
    /* 004cd6de: mov dword ptr [0xa485cc], eax */ W32((u32)(0xa485ccu), r_eax);
    /* 004cd6e3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004cd6e5: mov ebx, eax */ r_ebx = r_eax;
L_004cd6e7:; BB(0x004cd6e7);
    /* 004cd6e7: push dword ptr [ebx + 0x9ac3f0] */ { u32 v = R32((u32)(r_ebx+0x9ac3f0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004cd6ed: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x4cd6f2u); f_0077a698();
    /* 004cd6f2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004cd6f3: mov dword ptr [ebx + 0xa48510], eax */ W32((u32)(r_ebx+0xa48510u), r_eax);
    /* 004cd6f9: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004cd6fc: cmp ebx, 0x14 */ {  u32 a = r_ebx; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004cd6ff: jl 0x4cd6e7 */ if ((fS!=fO)) goto L_004cd6e7;
L_004cd701:; BB(0x004cd701);
    /* 004cd701: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004cd703: mov ebx, eax */ r_ebx = r_eax;
L_004cd705:; BB(0x004cd705);
    /* 004cd705: push dword ptr [ebx + 0x9ac3e4] */ { u32 v = R32((u32)(r_ebx+0x9ac3e4u)); r_esp -= 4; W32(r_esp, v); }
    /* 004cd70b: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x4cd710u); f_0077a6cc();
    /* 004cd710: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004cd711: mov dword ptr [ebx + 0xa48500], eax */ W32((u32)(r_ebx+0xa48500u), r_eax);
    /* 004cd717: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004cd71a: cmp ebx, 0xc */ {  u32 a = r_ebx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004cd71d: jl 0x4cd705 */ if ((fS!=fO)) goto L_004cd705;
L_004cd71f:; BB(0x004cd71f);
    /* 004cd71f: mov edx, 0xffff */ r_edx = 0xffffu;
    /* 004cd724: mov word ptr [0xa485f0], dx */ W16((u32)(0xa485f0u), (u16)r_edx);
    /* 004cd72b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004cd72d: mov dword ptr [0xa485f8], eax */ W32((u32)(0xa485f8u), r_eax);
    /* 004cd732: mov dword ptr [0xa485f4], eax */ W32((u32)(0xa485f4u), r_eax);
    /* 004cd737: call 0x717f74 */ r_esp -= 4; W32(r_esp, 0x4cd73cu); f_00717f74();
    /* 004cd73c: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4cd741u); f_0061cdb0();
    /* 004cd741: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004cd744: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004cd745: ret  */ FN_RET(0x004cd590); r_esp += 4; return;
}

void f_004cd748(void) /* sub_4CD748 */
{
    FN_ENTER(0x004cd748);
    /* 004cd748: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004cd749: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004cd74a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004cd74b: mov edi, ecx */ r_edi = r_ecx;
    /* 004cd74d: mov eax, dword ptr [0xa485f4] */ r_eax = R32((u32)(0xa485f4u));
    /* 004cd752: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004cd754: je 0x4cd7c3 */ if (fZ) goto L_004cd7c3;
L_004cd756:; BB(0x004cd756);
    /* 004cd756: mov eax, dword ptr [0xaae96c] */ r_eax = R32((u32)(0xaae96cu));
    /* 004cd75b: mov dword ptr [edi + 0x75c], 1 */ W32((u32)(r_edi+0x75cu), 0x1u);
    /* 004cd765: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 004cd768: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004cd76a: mov dword ptr [edi + 0x764], 0x96 */ W32((u32)(r_edi+0x764u), 0x96u);
    /* 004cd774: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004cd776: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004cd778: lea ebp, [edx + edx + 0xaae75c] */ r_ebp = (u32)(r_edx+r_edx+0xaae75cu);
    /* 004cd77f: mov dword ptr [edi + 0x6e0], ebp */ W32((u32)(r_edi+0x6e0u), r_ebp);
    /* 004cd785: call 0x694cc8 */ r_esp -= 4; W32(r_esp, 0x4cd78au); f_00694cc8();
    /* 004cd78a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004cd78c: je 0x4cd79f */ if (fZ) goto L_004cd79f;
L_004cd78e:; BB(0x004cd78e);
    /* 004cd78e: movzx ebp, word ptr [0xa485f0] */ r_ebp = (u32)R16((u32)(0xa485f0u));
    /* 004cd795: cmp ebp, 0xffff */ {  u32 a = r_ebp; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004cd79b: je 0x4cd7dd */ if (fZ) goto L_004cd7dd;
L_004cd79d:; BB(0x004cd79d);
    /* 004cd79d: jmp 0x4cd7a6 */ goto L_004cd7a6;
L_004cd79f:; BB(0x004cd79f);
    /* 004cd79f: movzx ebp, word ptr [0xa9c4f4] */ r_ebp = (u32)R16((u32)(0xa9c4f4u));
L_004cd7a6:; BB(0x004cd7a6);
    /* 004cd7a6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004cd7a7: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x4cd7acu); f_0068d5a8();
    /* 004cd7ac: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004cd7ad: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004cd7af: je 0x4cd7b8 */ if (fZ) goto L_004cd7b8;
L_004cd7b1:; BB(0x004cd7b1);
    /* 004cd7b1: mov ecx, eax */ r_ecx = r_eax;
    /* 004cd7b3: call 0x685550 */ r_esp -= 4; W32(r_esp, 0x4cd7b8u); f_00685550();
L_004cd7b8:; BB(0x004cd7b8);
    /* 004cd7b8: mov word ptr [edi + 0x760], bp */ W16((u32)(r_edi+0x760u), (u16)r_ebp);
    /* 004cd7bf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004cd7c0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004cd7c1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004cd7c2: ret  */ FN_RET(0x004cd748); r_esp += 4; return;
L_004cd7c3:; BB(0x004cd7c3);
    /* 004cd7c3: mov dword ptr [edi + 0x75c], 0 */ W32((u32)(r_edi+0x75cu), 0x0u);
    /* 004cd7cd: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 004cd7d2: mov word ptr [edi + 0x760], ax */ W16((u32)(r_edi+0x760u), (u16)r_eax);
    /* 004cd7d9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004cd7da: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004cd7db: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004cd7dc: ret  */ FN_RET(0x004cd748); r_esp += 4; return;
L_004cd7dd:; BB(0x004cd7dd);
    /* 004cd7dd: push dword ptr [0xa9c4dc] */ { u32 v = R32((u32)(0xa9c4dcu)); r_esp -= 4; W32(r_esp, v); }
    /* 004cd7e3: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x4cd7e8u); f_0068d5a8();
    /* 004cd7e8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004cd7e9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004cd7eb: je 0x4cd804 */ if (fZ) goto L_004cd804;
L_004cd7ed:; BB(0x004cd7ed);
    /* 004cd7ed: mov eax, dword ptr [eax + 0x3f0] */ r_eax = R32((u32)(r_eax+0x3f0u));
    /* 004cd7f3: cmp eax, dword ptr [0xaafca0] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaafca0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004cd7f9: jne 0x4cd804 */ if (!fZ) goto L_004cd804;
L_004cd7fb:; BB(0x004cd7fb);
    /* 004cd7fb: movzx ebp, word ptr [0xa9c4dc] */ r_ebp = (u32)R16((u32)(0xa9c4dcu));
    /* 004cd802: jmp 0x4cd7a6 */ goto L_004cd7a6;
L_004cd804:; BB(0x004cd804);
    /* 004cd804: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 004cd807: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 004cd809: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004cd80b:; BB(0x004cd80b);
    /* 004cd80b: mov esi, dword ptr [0xa9c4dc] */ r_esi = R32((u32)(0xa9c4dcu));
    /* 004cd811: lea eax, [esi + eax + 1] */ r_eax = (u32)(r_esi+r_eax+0x1u);
    /* 004cd815: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004cd816: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004cd818: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004cd81a: and eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004cd81d: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004cd81f: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004cd821: movzx esi, ax */ r_esi = (u32)(u16)r_eax;
    /* 004cd824: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004cd825: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x4cd82au); f_0068d5a8();
    /* 004cd82a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004cd82b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004cd82d: je 0x4cd83d */ if (fZ) goto L_004cd83d;
L_004cd82f:; BB(0x004cd82f);
    /* 004cd82f: mov eax, dword ptr [eax + 0x3f0] */ r_eax = R32((u32)(r_eax+0x3f0u));
    /* 004cd835: cmp eax, dword ptr [0xaafca0] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaafca0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004cd83b: je 0x4cd851 */ if (fZ) goto L_004cd851;
L_004cd83d:; BB(0x004cd83d);
    /* 004cd83d: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004cd840: mov eax, ebp */ r_eax = r_ebp;
    /* 004cd842: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004cd845: jl 0x4cd80b */ if ((fS!=fO)) goto L_004cd80b;
L_004cd847:; BB(0x004cd847);
    /* 004cd847: mov ebp, esi */ r_ebp = r_esi;
    /* 004cd849: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 004cd84c: jmp 0x4cd7a6 */ goto L_004cd7a6;
L_004cd851:; BB(0x004cd851);
    /* 004cd851: mov ebp, esi */ r_ebp = r_esi;
    /* 004cd853: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 004cd856: jmp 0x4cd7a6 */ goto L_004cd7a6;
}

void f_004cd85c(void) /* sub_4CD85C */
{
    FN_ENTER(0x004cd85c);
    /* 004cd85c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004cd85d: sub esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004cd860: mov edi, ecx */ r_edi = r_ecx;
    /* 004cd862: mov eax, dword ptr [esp + 0x60] */ r_eax = R32((u32)(r_esp+0x60u));
    /* 004cd866: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004cd869: ja 0x4cda25 */ if ((!fC&&!fZ)) goto L_004cda25;
L_004cd86f:; BB(0x004cd86f);
    /* 004cd86f: mov eax, dword ptr [eax*4 + 0x908010] */ r_eax = R32((u32)(r_eax*4+0x908010u));
    /* 004cd876: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_004cda25:; BB(0x004cda25);
    /* 004cda25: add esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004cda28: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004cda29: ret 4 */ FN_RET(0x004cd85c); r_esp += 8; return;
}

void f_004cd878(void)
{
    FN_ENTER(0x004cd878);
    /* 004cd878: mov eax, dword ptr [edi + 0x75c] */ r_eax = R32((u32)(r_edi+0x75cu));
    /* 004cd87e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004cd880: je 0x4cd928 */ if (fZ) goto L_004cd928;
L_004cd886:; BB(0x004cd886);
    /* 004cd886: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004cd888: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 004cd88a: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 004cd88c: mov ecx, edi */ r_ecx = r_edi;
    /* 004cd88e: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4cd894u); call_ind(t); }
    /* 004cd894: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 004cd898: mov ecx, dword ptr [edi + 0x694] */ r_ecx = R32((u32)(r_edi+0x694u));
    /* 004cd89e: mov byte ptr [esp], 0xa8 */ W8((u32)(r_esp), 0xa8u);
    /* 004cd8a2: mov edx, 0x18 */ r_edx = 0x18u;
    /* 004cd8a7: mov byte ptr [esp + 1], 6 */ W8((u32)(r_esp+0x1u), 0x6u);
    /* 004cd8ac: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 004cd8b1: mov eax, dword ptr [edi + 0x67c] */ r_eax = R32((u32)(r_edi+0x67cu));
    /* 004cd8b7: mov word ptr [esp + 4], dx */ W16((u32)(r_esp+0x4u), (u16)r_edx);
    /* 004cd8bc: mov word ptr [esp + 6], ax */ W16((u32)(r_esp+0x6u), (u16)r_eax);
    /* 004cd8c1: movzx eax, word ptr [edi + 0x394] */ r_eax = (u32)R16((u32)(r_edi+0x394u));
    /* 004cd8c8: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004cd8cc: mov eax, dword ptr [edi + 0x690] */ r_eax = R32((u32)(r_edi+0x690u));
    /* 004cd8d2: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 004cd8d6: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 004cd8da: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4cd8dfu); f_008587a5();
    /* 004cd8df: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 004cd8e3: fild dword ptr [esp + 0x30] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x30u)));
    /* 004cd8e7: fdiv dword ptr [0x9082bc] */ ST(0) = ST(0) / R_F32((u32)(0x9082bcu));
    /* 004cd8ed: fmul dword ptr [0x9082c0] */ ST(0) = ST(0) * R_F32((u32)(0x9082c0u));
    /* 004cd8f3: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 004cd8f6: fnstcw word ptr [esp + 0x38] */ W16((u32)(r_esp+0x38u), fcw);
    /* 004cd8fa: movzx eax, word ptr [esp + 0x38] */ r_eax = (u32)R16((u32)(r_esp+0x38u));
    /* 004cd8ff: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004cd904: mov dword ptr [esp + 0x40], eax */ W32((u32)(r_esp+0x40u), r_eax);
    /* 004cd908: fldcw word ptr [esp + 0x40] */ fcw = R16((u32)(r_esp+0x40u));
    /* 004cd90c: fistp dword ptr [esp + 0x48] */ W32((u32)(r_esp+0x48u), (u32)fx_int32(ST(0))); FPOP();
    /* 004cd910: fldcw word ptr [esp + 0x38] */ fcw = R16((u32)(r_esp+0x38u));
    /* 004cd914: mov eax, dword ptr [esp + 0x48] */ r_eax = R32((u32)(r_esp+0x48u));
    /* 004cd918: mov byte ptr [esp + 0x14], al */ W8((u32)(r_esp+0x14u), (u8)r_eax);
    /* 004cd91c: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4cd921u); f_008003e0();
    /* 004cd921: add esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004cd924: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004cd925: ret 4 */ FN_RET(0x004cd878); r_esp += 8; return;
L_004cd928:; BB(0x004cd928);
    /* 004cd928: mov eax, dword ptr [edi + 0x3c8] */ r_eax = R32((u32)(r_edi+0x3c8u));
    /* 004cd92e: test al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004cd930: je 0x4cd941 */ if (fZ) goto L_004cd941;
L_004cd932:; BB(0x004cd932);
    /* 004cd932: mov eax, dword ptr [edi + 0x67c] */ r_eax = R32((u32)(r_edi+0x67cu));
    /* 004cd938: mov ecx, eax */ r_ecx = r_eax;
    /* 004cd93a: mov edx, 0x9080e0 */ r_edx = 0x9080e0u;
    /* 004cd93f: jmp 0x4cd95d */ goto L_004cd95d;
L_004cd941:; BB(0x004cd941);
    /* 004cd941: mov eax, dword ptr [edi + 0x67c] */ r_eax = R32((u32)(r_edi+0x67cu));
    /* 004cd947: cmp eax, 0x32 */ {  u32 a = r_eax; u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004cd94a: jge 0x4cd955 */ if ((fS==fO)) goto L_004cd955;
L_004cd94c:; BB(0x004cd94c);
    /* 004cd94c: mov ecx, eax */ r_ecx = r_eax;
    /* 004cd94e: mov edx, 0x9088c0 */ r_edx = 0x9088c0u;
    /* 004cd953: jmp 0x4cd95d */ goto L_004cd95d;
L_004cd955:; BB(0x004cd955);
    /* 004cd955: lea ecx, [eax - 0x32] */ r_ecx = (u32)(r_eax+0xffffffceu);
    /* 004cd958: mov edx, 0x908160 */ r_edx = 0x908160u;
L_004cd95d:; BB(0x004cd95d);
    /* 004cd95d: mov ecx, dword ptr [edx + ecx*4] */ r_ecx = R32((u32)(r_edx+r_ecx*4));
    /* 004cd960: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004cd963: cmp ecx, 0x21 */ {  u32 a = r_ecx; u32 b = 0x21u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004cd966: jne 0x4cda2c */ if (!fZ) goto L_004cda2c;
L_004cd96c:; BB(0x004cd96c);
    /* 004cd96c: mov dword ptr [edi + 0x67c], 0 */ W32((u32)(r_edi+0x67cu), 0x0u);
    /* 004cd976: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004cd978: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004cd97a: jmp 0x4cd95d */ goto L_004cd95d;
L_004cda2c:; BB(0x004cda2c);
    /* 004cda2c: cmp ecx, 0x22 */ {  u32 a = r_ecx; u32 b = 0x22u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004cda2f: je 0x4cda46 */ if (fZ) goto L_004cda46;
L_004cda31:; BB(0x004cda31);
    /* 004cda31: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004cda32: mov dword ptr [edi + 0x67c], eax */ W32((u32)(r_edi+0x67cu), r_eax);
    /* 004cda38: mov ecx, edi */ r_ecx = r_edi;
    /* 004cda3a: call 0x4c3074 */ r_esp -= 4; W32(r_esp, 0x4cda3fu); f_004c3074();
    /* 004cda3f: add esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004cda42: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004cda43: ret 4 */ FN_RET(0x004cd878); r_esp += 8; return;
L_004cda46:; BB(0x004cda46);
    /* 004cda46: mov dword ptr [edi + 0x67c], 0x32 */ W32((u32)(r_edi+0x67cu), 0x32u);
    /* 004cda50: mov eax, 0x32 */ r_eax = 0x32u;
    /* 004cda55: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004cda57: jmp 0x4cd95d */ goto L_004cd95d;
}

void f_004cd97c(void)
{
    FN_ENTER(0x004cd97c);
    /* 004cd97c: mov ecx, edi */ r_ecx = r_edi;
    /* 004cd97e: call 0x4cd748 */ r_esp -= 4; W32(r_esp, 0x4cd983u); f_004cd748();
    /* 004cd983: jmp 0x4cda25 */ goto L_004cda25;
L_004cda25:; BB(0x004cda25);
    /* 004cda25: add esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004cda28: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004cda29: ret 4 */ FN_RET(0x004cd97c); r_esp += 8; return;
}

void f_004cd988(void)
{
    FN_ENTER(0x004cd988);
    /* 004cd988: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004cd98a: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 004cd98c: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 004cd98e: mov ecx, edi */ r_ecx = r_edi;
    /* 004cd990: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4cd996u); call_ind(t); }
    /* 004cd996: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 004cd99a: mov ecx, dword ptr [edi + 0x694] */ r_ecx = R32((u32)(r_edi+0x694u));
    /* 004cd9a0: mov byte ptr [esp + 0x18], 0xa8 */ W8((u32)(r_esp+0x18u), 0xa8u);
    /* 004cd9a5: mov edx, 0x18 */ r_edx = 0x18u;
    /* 004cd9aa: mov byte ptr [esp + 0x19], 6 */ W8((u32)(r_esp+0x19u), 0x6u);
    /* 004cd9af: mov word ptr [esp + 0x1a], ax */ W16((u32)(r_esp+0x1au), (u16)r_eax);
    /* 004cd9b4: mov eax, dword ptr [edi + 0x67c] */ r_eax = R32((u32)(r_edi+0x67cu));
    /* 004cd9ba: mov word ptr [esp + 0x1c], dx */ W16((u32)(r_esp+0x1cu), (u16)r_edx);
    /* 004cd9bf: mov word ptr [esp + 0x1e], ax */ W16((u32)(r_esp+0x1eu), (u16)r_eax);
    /* 004cd9c4: movzx eax, word ptr [edi + 0x394] */ r_eax = (u32)R16((u32)(r_edi+0x394u));
    /* 004cd9cb: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004cd9cf: mov eax, dword ptr [edi + 0x690] */ r_eax = R32((u32)(r_edi+0x690u));
    /* 004cd9d5: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 004cd9d9: mov dword ptr [esp + 0x28], ecx */ W32((u32)(r_esp+0x28u), r_ecx);
    /* 004cd9dd: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4cd9e2u); f_008587a5();
    /* 004cd9e2: mov dword ptr [esp + 0x50], eax */ W32((u32)(r_esp+0x50u), r_eax);
    /* 004cd9e6: fild dword ptr [esp + 0x50] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x50u)));
    /* 004cd9ea: fdiv dword ptr [0x9082bc] */ ST(0) = ST(0) / R_F32((u32)(0x9082bcu));
    /* 004cd9f0: fmul dword ptr [0x9082c0] */ ST(0) = ST(0) * R_F32((u32)(0x9082c0u));
    /* 004cd9f6: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 004cd9fa: fnstcw word ptr [esp + 0x38] */ W16((u32)(r_esp+0x38u), fcw);
    /* 004cd9fe: movzx eax, word ptr [esp + 0x38] */ r_eax = (u32)R16((u32)(r_esp+0x38u));
    /* 004cda03: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004cda08: mov dword ptr [esp + 0x40], eax */ W32((u32)(r_esp+0x40u), r_eax);
    /* 004cda0c: fldcw word ptr [esp + 0x40] */ fcw = R16((u32)(r_esp+0x40u));
    /* 004cda10: fistp dword ptr [esp + 0x48] */ W32((u32)(r_esp+0x48u), (u32)fx_int32(ST(0))); FPOP();
    /* 004cda14: fldcw word ptr [esp + 0x38] */ fcw = R16((u32)(r_esp+0x38u));
    /* 004cda18: mov eax, dword ptr [esp + 0x48] */ r_eax = R32((u32)(r_esp+0x48u));
    /* 004cda1c: mov byte ptr [esp + 0x2c], al */ W8((u32)(r_esp+0x2cu), (u8)r_eax);
    /* 004cda20: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4cda25u); f_008003e0();
    /* 004cda25: add esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004cda28: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004cda29: ret 4 */ FN_RET(0x004cd988); r_esp += 8; return;
}

void f_004cda25(void)
{
    FN_ENTER(0x004cda25);
    /* 004cda25: add esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004cda28: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004cda29: ret 4 */ FN_RET(0x004cda25); r_esp += 8; return;
}

void f_004cda5c(void) /* sub_4CDA5C */
{
    FN_ENTER(0x004cda5c);
    /* 004cda5c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004cda5d: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004cda60: mov edi, ecx */ r_edi = r_ecx;
    /* 004cda62: movsx eax, word ptr [edi + 0x658] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x658u));
    /* 004cda69: mov dword ptr [edi + 0x658], eax */ W32((u32)(r_edi+0x658u), r_eax);
    /* 004cda6f: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 004cda72: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 004cda75: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 004cda79: push dword ptr [esp + 0x1c] */ { u32 v = R32((u32)(r_esp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004cda7d: push dword ptr [edi + 0x60] */ { u32 v = R32((u32)(r_edi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 004cda80: call 0x7a900c */ r_esp -= 4; W32(r_esp, 0x4cda85u); f_007a900c();
    /* 004cda85: fld dword ptr [0x9082b4] */ FPUSH(R_F32((u32)(0x9082b4u)));
    /* 004cda8b: fld dword ptr [0x9082b0] */ FPUSH(R_F32((u32)(0x9082b0u)));
    /* 004cda91: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 004cda95: fld dword ptr [0x9082a8] */ FPUSH(R_F32((u32)(0x9082a8u)));
    /* 004cda9b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004cda9d: fst dword ptr [edi + 0x66c] */ W_F32((u32)(r_edi+0x66cu), ST(0));
    /* 004cdaa3: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 004cdaa7: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 004cdaa9: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 004cdaab: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 004cdaaf: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 004cdab3: mov eax, dword ptr [edi + 0x60] */ r_eax = R32((u32)(r_edi+0x60u));
    /* 004cdab6: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 004cdab8: fmul dword ptr [0x9082b8] */ ST(0) = ST(0) * R_F32((u32)(0x9082b8u));
    /* 004cdabe: fdiv dword ptr [0x9082ac] */ ST(0) = ST(0) / R_F32((u32)(0x9082acu));
    /* 004cdac4: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 004cdac6: mov dword ptr [edi + 0x660], eax */ W32((u32)(r_edi+0x660u), r_eax);
    /* 004cdacc: fst dword ptr [edi + 0x668] */ W_F32((u32)(r_edi+0x668u), ST(0));
    /* 004cdad2: fmul dword ptr [0x9082a0] */ ST(0) = ST(0) * R_F32((u32)(0x9082a0u));
    /* 004cdad8: fstp dword ptr [edi + 0x670] */ W_F32((u32)(r_edi+0x670u), ST(0)); FPOP();
    /* 004cdade: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 004cdae0: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004cdae2: fchs  */ ST(0) = -ST(0);
    /* 004cdae4: fdiv st(2) */ ST(0) = ST(0) / ST(2);
    /* 004cdae6: fst dword ptr [edi + 0x664] */ W_F32((u32)(r_edi+0x664u), ST(0));
    /* 004cdaec: mov dword ptr [edi + 0x678], 0 */ W32((u32)(r_edi+0x678u), 0x0u);
    /* 004cdaf6: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 004cdaf8: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004cdafa: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 004cdafc: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004cdafe: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004cdb00: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004cdb02: fstp dword ptr [edi + 0x674] */ W_F32((u32)(r_edi+0x674u), ST(0)); FPOP();
    /* 004cdb08: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004cdb0b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004cdb0c: ret 4 */ FN_RET(0x004cda5c); r_esp += 8; return;
}

void f_004cdb10(void) /* sub_4CDB10 */
{
    FN_ENTER(0x004cdb10);
    /* 004cdb10: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 004cdb14: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004cdb16: jne 0x4cdb25 */ if (!fZ) goto L_004cdb25;
L_004cdb18:; BB(0x004cdb18);
    /* 004cdb18: mov dword ptr [ecx + 0x67c], 0 */ W32((u32)(r_ecx+0x67cu), 0x0u);
    /* 004cdb22: ret 4 */ FN_RET(0x004cdb10); r_esp += 8; return;
L_004cdb25:; BB(0x004cdb25);
    /* 004cdb25: mov dword ptr [ecx + 0x67c], 0x32 */ W32((u32)(r_ecx+0x67cu), 0x32u);
    /* 004cdb2f: ret 4 */ FN_RET(0x004cdb10); r_esp += 8; return;
}

void f_004cdb34(void) /* sub_4CDB34 */
{
    FN_ENTER(0x004cdb34);
    /* 004cdb34: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004cdb36: call 0x4cdb10 */ r_esp -= 4; W32(r_esp, 0x4cdb3bu); f_004cdb10();
    /* 004cdb3b: ret  */ FN_RET(0x004cdb34); r_esp += 4; return;
}

void f_004cdb3c(void) /* sub_4CDB3C */
{
    FN_ENTER(0x004cdb3c);
    /* 004cdb3c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004cdb3d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004cdb3f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004cdb41: call 0x4cdb60 */ r_esp -= 4; W32(r_esp, 0x4cdb46u); f_004cdb60();
    /* 004cdb46: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004cdb4a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004cdb4c: jne 0x4cdb52 */ if (!fZ) goto L_004cdb52;
L_004cdb4e:; BB(0x004cdb4e);
    /* 004cdb4e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004cdb4f: ret 4 */ FN_RET(0x004cdb3c); r_esp += 8; return;
L_004cdb52:; BB(0x004cdb52);
    /* 004cdb52: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004cdb53: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x4cdb58u); f_005c2f74();
    /* 004cdb58: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004cdb59: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004cdb5a: ret 4 */ FN_RET(0x004cdb3c); r_esp += 8; return;
}

void f_004cdb60(void) /* sub_4CDB60 */
{
    FN_ENTER(0x004cdb60);
    /* 004cdb60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004cdb61: mov ebp, esp */ r_ebp = r_esp;
    /* 004cdb63: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004cdb65: push 0x8d1704 */ { u32 v = 0x8d1704u; r_esp -= 4; W32(r_esp, v); }
    /* 004cdb6a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004cdb70: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004cdb71: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004cdb78: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004cdb7b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004cdb7e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004cdb81: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004cdb84: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004cdb87: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004cdb8a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004cdb91: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004cdb94: mov dword ptr [eax], 0xafbac8 */ W32((u32)(r_eax), 0xafbac8u);
    /* 004cdb9a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004cdb9b: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x4cdba0u); f_007b4e84();
    /* 004cdba0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004cdba1: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004cdba4: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x4cdba9u); f_007b9c8c();
    /* 004cdba9: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004cdbb0: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004cdbb3: call 0x7b4aec */ r_esp -= 4; W32(r_esp, 0x4cdbb8u); f_007b4aec();
    /* 004cdbb8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004cdbbb: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004cdbc2: mov esp, ebp */ r_esp = r_ebp;
    /* 004cdbc4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004cdbc5: ret  */ FN_RET(0x004cdb60); r_esp += 4; return;
}

void f_004cdbc8(void) /* sub_4CDBC8 */
{
    FN_ENTER(0x004cdbc8);
    /* 004cdbc8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004cdbc9: mov ebp, esp */ r_ebp = r_esp;
    /* 004cdbcb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004cdbcd: push 0x8d1720 */ { u32 v = 0x8d1720u; r_esp -= 4; W32(r_esp, v); }
    /* 004cdbd2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004cdbd8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004cdbd9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004cdbe0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004cdbe3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004cdbe6: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 004cdbe9: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 004cdbec: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 004cdbef: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 004cdbf2: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 004cdbf5: mov eax, ecx */ r_eax = r_ecx;
    /* 004cdbf7: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 004cdbfa: mov dword ptr [eax], 0xafbaf8 */ W32((u32)(r_eax), 0xafbaf8u);
    /* 004cdc00: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004cdc02: je 0x4cdc1a */ if (fZ) goto L_004cdc1a;
L_004cdc04:; BB(0x004cdc04);
    /* 004cdc04: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004cdc08: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004cdc0d: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004cdc11: mov edx, ecx */ r_edx = r_ecx;
    /* 004cdc13: mov dword ptr [edx + 0x1c], 0 */ W32((u32)(r_edx+0x1cu), 0x0u);
L_004cdc1a:; BB(0x004cdc1a);
    /* 004cdc1a: mov eax, ecx */ r_eax = r_ecx;
    /* 004cdc1c: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 004cdc1f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004cdc21: je 0x4cdc39 */ if (fZ) goto L_004cdc39;
L_004cdc23:; BB(0x004cdc23);
    /* 004cdc23: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004cdc27: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004cdc2c: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004cdc30: mov edx, ecx */ r_edx = r_ecx;
    /* 004cdc32: mov dword ptr [edx + 0x20], 0 */ W32((u32)(r_edx+0x20u), 0x0u);
L_004cdc39:; BB(0x004cdc39);
    /* 004cdc39: mov eax, ecx */ r_eax = r_ecx;
    /* 004cdc3b: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 004cdc3e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004cdc40: je 0x4cdc58 */ if (fZ) goto L_004cdc58;
L_004cdc42:; BB(0x004cdc42);
    /* 004cdc42: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004cdc46: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004cdc4b: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004cdc4f: mov edx, ecx */ r_edx = r_ecx;
    /* 004cdc51: mov dword ptr [edx + 0x24], 0 */ W32((u32)(r_edx+0x24u), 0x0u);
L_004cdc58:; BB(0x004cdc58);
    /* 004cdc58: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004cdc5f: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x4cdc64u); f_008171e8();
    /* 004cdc64: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004cdc67: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004cdc69: jne 0x4cdc7b */ if (!fZ) goto L_004cdc7b;
L_004cdc6b:; BB(0x004cdc6b);
    /* 004cdc6b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004cdc6e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004cdc75: mov esp, ebp */ r_esp = r_ebp;
    /* 004cdc77: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004cdc78: ret 4 */ FN_RET(0x004cdbc8); r_esp += 8; return;
L_004cdc7b:; BB(0x004cdc7b);
    /* 004cdc7b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004cdc7e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004cdc7f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x4cdc84u); f_005c2f74();
    /* 004cdc84: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004cdc85: jmp 0x4cdc6b */ goto L_004cdc6b;
}

void f_004cdc88(void) /* sub_4CDC88 */
{
    FN_ENTER(0x004cdc88);
    /* 004cdc88: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004cdc89: mov ebp, esp */ r_ebp = r_esp;
    /* 004cdc8b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004cdc8d: push 0x8d17d2 */ { u32 v = 0x8d17d2u; r_esp -= 4; W32(r_esp, v); }
    /* 004cdc92: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004cdc98: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004cdc99: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004cdca0: sub esp, 0x88 */ {  u32 a = r_esp; u32 b = 0x88u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004cdca6: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004cdca9: mov dword ptr [ebp - 0x2c], edi */ W32((u32)(r_ebp+0xffffffd4u), r_edi);
    /* 004cdcac: mov dword ptr [ebp - 0x28], esi */ W32((u32)(r_ebp+0xffffffd8u), r_esi);
    /* 004cdcaf: mov dword ptr [ebp - 0x24], ebx */ W32((u32)(r_ebp+0xffffffdcu), r_ebx);
    /* 004cdcb2: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004cdcb5: mov dword ptr [ebp - 0x40], ecx */ W32((u32)(r_ebp+0xffffffc0u), r_ecx);
    /* 004cdcb8: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x4cdcbdu); f_008193cc();
    /* 004cdcbd: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004cdcc4: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 004cdcc7: mov dword ptr [edx], 0xafbaf8 */ W32((u32)(r_edx), 0xafbaf8u);
    /* 004cdccd: mov eax, dword ptr [0x9ac504] */ r_eax = R32((u32)(0x9ac504u));
    /* 004cdcd2: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
    /* 004cdcd9: push 0xb8 */ { u32 v = 0xb8u; r_esp -= 4; W32(r_esp, v); }
    /* 004cdcde: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 004cdce1: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4cdce6u); f_005caba4();
    /* 004cdce6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004cdce7: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 004cdcea: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004cdcec: je 0x4ce21f */ if (fZ) goto L_004ce21f;
L_004cdcf2:; BB(0x004cdcf2);
    /* 004cdcf2: mov dword ptr [ebp - 0x50], 1 */ W32((u32)(r_ebp+0xffffffb0u), 0x1u);
    /* 004cdcf9: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 004cdd00: push dword ptr [ebp - 0x40] */ { u32 v = R32((u32)(r_ebp+0xffffffc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004cdd03: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 004cdd06: mov dword ptr [ebp - 0x94], ecx */ W32((u32)(r_ebp+0xffffff6cu), r_ecx);
    /* 004cdd0c: call 0x7b4b48 */ r_esp -= 4; W32(r_esp, 0x4cdd11u); f_007b4b48();
    /* 004cdd11: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 004cdd18: mov eax, dword ptr [ebp - 0x94] */ r_eax = R32((u32)(r_ebp+0xffffff6cu));
    /* 004cdd1e: mov dword ptr [eax], 0xafbac8 */ W32((u32)(r_eax), 0xafbac8u);
    /* 004cdd24: mov ecx, dword ptr [ebp - 0x94] */ r_ecx = R32((u32)(r_ebp+0xffffff6cu));
    /* 004cdd2a: mov edx, dword ptr [0x9ac500] */ r_edx = R32((u32)(0x9ac500u));
    /* 004cdd30: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004cdd32: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 004cdd35: mov ebx, dword ptr [ebp - 0x94] */ r_ebx = R32((u32)(r_ebp+0xffffff6cu));
    /* 004cdd3b: mov dword ptr [ebx + 0xac], 0 */ W32((u32)(r_ebx+0xacu), 0x0u);
    /* 004cdd45: mov dword ptr [ebx + 0xb0], 0 */ W32((u32)(r_ebx+0xb0u), 0x0u);
    /* 004cdd4f: mov dword ptr [ebx + 0xb4], 0 */ W32((u32)(r_ebx+0xb4u), 0x0u);
    /* 004cdd59: call 0x7ba898 */ r_esp -= 4; W32(r_esp, 0x4cdd5eu); f_007ba898();
    /* 004cdd5e: mov edx, dword ptr [ebp - 0x94] */ r_edx = R32((u32)(r_ebp+0xffffff6cu));
    /* 004cdd64: mov dword ptr [edx + 0xa8], 1 */ W32((u32)(r_edx+0xa8u), 0x1u);
    /* 004cdd6e: mov word ptr [edx + 0x1c], ax */ W16((u32)(r_edx+0x1cu), (u16)r_eax);
    /* 004cdd72: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 004cdd74: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x4cdd79u); f_008581c5();
    /* 004cdd79: mov edi, eax */ r_edi = r_eax;
    /* 004cdd7b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004cdd7e: mov esi, dword ptr [ebp - 0x94] */ r_esi = R32((u32)(r_ebp+0xffffff6cu));
    /* 004cdd84: mov edx, dword ptr [esi + 0xa8] */ r_edx = R32((u32)(r_esi+0xa8u));
    /* 004cdd8a: mov dword ptr [esi + 0xa4], edi */ W32((u32)(r_esi+0xa4u), r_edi);
    /* 004cdd90: lea ebx, [edx - 1] */ r_ebx = (u32)(r_edx+0xffffffffu);
    /* 004cdd93: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004cdd95: mov dword ptr [ebp - 0x3c], ebx */ W32((u32)(r_ebp+0xffffffc4u), r_ebx);
    /* 004cdd98: fild dword ptr [ebp - 0x3c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffc4u)));
    /* 004cdd9b: fmul dword ptr [0x9089f0] */ ST(0) = ST(0) * R_F32((u32)(0x9089f0u));
    /* 004cdda1: mov ebx, 0 */ r_ebx = 0x0u;
    /* 004cdda6: jle 0x8d17bc */ if ((fZ||fS!=fO)) goto L_008d17bc;
L_004cddac:; BB(0x004cddac);
    /* 004cddac: mov ecx, dword ptr [0x9ac518] */ r_ecx = R32((u32)(0x9ac518u));
    /* 004cddb2: mov edx, dword ptr [0x9ac524] */ r_edx = R32((u32)(0x9ac524u));
    /* 004cddb8: mov esi, dword ptr [0x9ac52c] */ r_esi = R32((u32)(0x9ac52cu));
    /* 004cddbe: mov eax, dword ptr [0x9ac530] */ r_eax = R32((u32)(0x9ac530u));
    /* 004cddc3: fld dword ptr [0x9089ec] */ FPUSH(R_F32((u32)(0x9089ecu)));
    /* 004cddc9: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 004cddcc: mov ecx, dword ptr [0x9ac51c] */ r_ecx = R32((u32)(0x9ac51cu));
    /* 004cddd2: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 004cddd5: mov edx, dword ptr [0x9ac528] */ r_edx = R32((u32)(0x9ac528u));
    /* 004cdddb: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
L_004cddde:; BB(0x004cddde);
    /* 004cddde: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 004cdde1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004cdde3: fst dword ptr [edi + 8] */ W_F32((u32)(r_edi+0x8u), ST(0));
    /* 004cdde6: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 004cdde8: mov dword ptr [edi + 0x10], esi */ W32((u32)(r_edi+0x10u), r_esi);
    /* 004cddeb: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 004cddee: mov dword ptr [edi + 0x18], 0x10003 */ W32((u32)(r_edi+0x18u), 0x10003u);
    /* 004cddf5: mov dword ptr [edi + 0x14], ecx */ W32((u32)(r_edi+0x14u), r_ecx);
    /* 004cddf8: mov dword ptr [edi + 0x1c], esi */ W32((u32)(r_edi+0x1cu), r_esi);
    /* 004cddfb: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 004cddfe: mov dword ptr [edi + 0x20], edx */ W32((u32)(r_edi+0x20u), r_edx);
    /* 004cde01: mov dword ptr [edi + 0x24], esi */ W32((u32)(r_edi+0x24u), r_esi);
    /* 004cde04: mov dword ptr [edi + 0x28], eax */ W32((u32)(r_edi+0x28u), r_eax);
    /* 004cde07: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 004cde09: mov dword ptr [edi], esi */ W32((u32)(r_edi), r_esi);
    /* 004cde0b: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 004cde0d: mov dword ptr [edi + 4], esi */ W32((u32)(r_edi+0x4u), r_esi);
    /* 004cde10: mov esi, 0x41c80000 */ r_esi = 0x41c80000u;
    /* 004cde15: mov dword ptr [edi + 0xc], esi */ W32((u32)(r_edi+0xcu), r_esi);
    /* 004cde18: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004cde1b: add edi, 0x2c */ {  u32 a = r_edi; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004cde1e: mov esi, dword ptr [ebp - 0x94] */ r_esi = R32((u32)(r_ebp+0xffffff6cu));
    /* 004cde24: cmp ebx, dword ptr [esi + 0xa8] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esi+0xa8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004cde2a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004cde2c: jl 0x4cddde */ if ((fS!=fO)) goto L_004cddde;
L_004cde2e:; BB(0x004cde2e);
    /* 004cde2e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004cde30: fstp st(0) */ ST(0) = ST(0); FPOP();
L_004cde32:; BB(0x004cde32);
    /* 004cde32: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004cde33: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x4cde38u); f_007b999c();
    /* 004cde38: push dword ptr [ebp - 0x94] */ { u32 v = R32((u32)(r_ebp+0xffffff6cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004cde3e: call 0x7b4d98 */ r_esp -= 4; W32(r_esp, 0x4cde43u); f_007b4d98();
    /* 004cde43: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004cde46: mov esi, dword ptr [ebp - 0x94] */ r_esi = R32((u32)(r_ebp+0xffffff6cu));
    /* 004cde4c: mov eax, dword ptr [esi + 0xa8] */ r_eax = R32((u32)(r_esi+0xa8u));
    /* 004cde52: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004cde54: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004cde56: jle 0x4cde81 */ if ((fZ||fS!=fO)) goto L_004cde81;
L_004cde58:; BB(0x004cde58);
    /* 004cde58: mov edx, dword ptr [esi + 0xa4] */ r_edx = R32((u32)(r_esi+0xa4u));
    /* 004cde5e: lea ecx, [ebx + ebx] */ r_ecx = (u32)(r_ebx+r_ebx);
    /* 004cde61: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004cde63: sub ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004cde65: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004cde67: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004cde69: sub ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004cde6b: mov eax, dword ptr [edx + ecx*4 + 0x18] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x18u));
    /* 004cde6f: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004cde72: mov dword ptr [edx + ecx*4 + 0x18], eax */ W32((u32)(r_edx+r_ecx*4+0x18u), r_eax);
    /* 004cde76: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004cde79: cmp ebx, dword ptr [esi + 0xa8] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esi+0xa8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004cde7f: jl 0x4cde58 */ if ((fS!=fO)) goto L_004cde58;
L_004cde81:; BB(0x004cde81);
    /* 004cde81: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 004cde84: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
L_004cde8b:; BB(0x004cde8b);
    /* 004cde8b: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 004cde8e: mov dword ptr [eax + 0x1c], edx */ W32((u32)(r_eax+0x1cu), r_edx);
    /* 004cde91: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004cde98: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
    /* 004cde9f: push 0xb8 */ { u32 v = 0xb8u; r_esp -= 4; W32(r_esp, v); }
    /* 004cdea4: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4cdea9u); f_005caba4();
    /* 004cdea9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004cdeaa: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 004cdead: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004cdeaf: je 0x4ce218 */ if (fZ) goto L_004ce218;
L_004cdeb5:; BB(0x004cdeb5);
    /* 004cdeb5: mov dword ptr [ebp - 0x48], 1 */ W32((u32)(r_ebp+0xffffffb8u), 0x1u);
    /* 004cdebc: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 004cdec3: push dword ptr [ebp - 0x40] */ { u32 v = R32((u32)(r_ebp+0xffffffc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004cdec6: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 004cdec9: mov dword ptr [ebp - 0x7c], ecx */ W32((u32)(r_ebp+0xffffff84u), r_ecx);
    /* 004cdecc: mov dword ptr [ebp - 0x6c], 0x41200000 */ W32((u32)(r_ebp+0xffffff94u), 0x41200000u);
    /* 004cded3: call 0x7b4b48 */ r_esp -= 4; W32(r_esp, 0x4cded8u); f_007b4b48();
    /* 004cded8: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 004cdedf: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 004cdee2: mov dword ptr [eax], 0xafbac8 */ W32((u32)(r_eax), 0xafbac8u);
    /* 004cdee8: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 004cdeeb: mov edx, dword ptr [0x9ac500] */ r_edx = R32((u32)(0x9ac500u));
    /* 004cdef1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004cdef3: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 004cdef6: mov ebx, dword ptr [ebp - 0x7c] */ r_ebx = R32((u32)(r_ebp+0xffffff84u));
    /* 004cdef9: mov dword ptr [ebx + 0xac], 0xc0800000 */ W32((u32)(r_ebx+0xacu), 0xc0800000u);
    /* 004cdf03: mov dword ptr [ebx + 0xb0], 0 */ W32((u32)(r_ebx+0xb0u), 0x0u);
    /* 004cdf0d: mov dword ptr [ebx + 0xb4], 0x42200000 */ W32((u32)(r_ebx+0xb4u), 0x42200000u);
    /* 004cdf17: call 0x7ba898 */ r_esp -= 4; W32(r_esp, 0x4cdf1cu); f_007ba898();
    /* 004cdf1c: mov edx, dword ptr [ebp - 0x7c] */ r_edx = R32((u32)(r_ebp+0xffffff84u));
    /* 004cdf1f: mov dword ptr [edx + 0xa8], 3 */ W32((u32)(r_edx+0xa8u), 0x3u);
    /* 004cdf29: mov word ptr [edx + 0x1c], ax */ W16((u32)(r_edx+0x1cu), (u16)r_eax);
    /* 004cdf2d: push 0x84 */ { u32 v = 0x84u; r_esp -= 4; W32(r_esp, v); }
    /* 004cdf32: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x4cdf37u); f_008581c5();
    /* 004cdf37: mov edi, eax */ r_edi = r_eax;
    /* 004cdf39: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004cdf3c: mov esi, dword ptr [ebp - 0x7c] */ r_esi = R32((u32)(r_ebp+0xffffff84u));
    /* 004cdf3f: mov edx, dword ptr [esi + 0xa8] */ r_edx = R32((u32)(r_esi+0xa8u));
    /* 004cdf45: mov dword ptr [esi + 0xa4], edi */ W32((u32)(r_esi+0xa4u), r_edi);
    /* 004cdf4b: lea ebx, [edx - 1] */ r_ebx = (u32)(r_edx+0xffffffffu);
    /* 004cdf4e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004cdf50: mov dword ptr [ebp - 0x34], ebx */ W32((u32)(r_ebp+0xffffffccu), r_ebx);
    /* 004cdf53: fild dword ptr [ebp - 0x34] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffccu)));
    /* 004cdf56: fmul dword ptr [ebp - 0x6c] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffff94u));
    /* 004cdf59: mov ebx, 0 */ r_ebx = 0x0u;
    /* 004cdf5e: jle 0x8d17c3 */ if ((fZ||fS!=fO)) goto L_008d17c3;
L_004cdf64:; BB(0x004cdf64);
    /* 004cdf64: mov ecx, dword ptr [0x9ac514] */ r_ecx = R32((u32)(0x9ac514u));
    /* 004cdf6a: mov edx, dword ptr [0x9ac518] */ r_edx = R32((u32)(0x9ac518u));
    /* 004cdf70: mov esi, dword ptr [0x9ac51c] */ r_esi = R32((u32)(0x9ac51cu));
    /* 004cdf76: mov eax, dword ptr [0x9ac524] */ r_eax = R32((u32)(0x9ac524u));
    /* 004cdf7b: mov dword ptr [ebp - 0x14], esi */ W32((u32)(r_ebp+0xffffffecu), r_esi);
    /* 004cdf7e: mov esi, dword ptr [0x9ac528] */ r_esi = R32((u32)(0x9ac528u));
    /* 004cdf84: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004cdf87: mov esi, dword ptr [0x9ac52c] */ r_esi = R32((u32)(0x9ac52cu));
    /* 004cdf8d: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 004cdf90: mov esi, dword ptr [0x9ac530] */ r_esi = R32((u32)(0x9ac530u));
    /* 004cdf96: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
L_004cdf99:; BB(0x004cdf99);
    /* 004cdf99: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 004cdf9c: fst dword ptr [edi + 8] */ W_F32((u32)(r_edi+0x8u), ST(0));
    /* 004cdf9f: mov dword ptr [edi + 0xc], ecx */ W32((u32)(r_edi+0xcu), r_ecx);
    /* 004cdfa2: mov dword ptr [edi + 0x10], edx */ W32((u32)(r_edi+0x10u), r_edx);
    /* 004cdfa5: mov dword ptr [edi + 0x14], esi */ W32((u32)(r_edi+0x14u), r_esi);
    /* 004cdfa8: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 004cdfab: mov dword ptr [edi + 0x18], 0x10003 */ W32((u32)(r_edi+0x18u), 0x10003u);
    /* 004cdfb2: mov dword ptr [edi + 0x1c], eax */ W32((u32)(r_edi+0x1cu), r_eax);
    /* 004cdfb5: mov dword ptr [edi + 0x20], esi */ W32((u32)(r_edi+0x20u), r_esi);
    /* 004cdfb8: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 004cdfbb: mov dword ptr [edi + 0x24], esi */ W32((u32)(r_edi+0x24u), r_esi);
    /* 004cdfbe: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004cdfc1: mov dword ptr [edi + 0x28], esi */ W32((u32)(r_edi+0x28u), r_esi);
    /* 004cdfc4: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 004cdfc6: mov dword ptr [edi], esi */ W32((u32)(r_edi), r_esi);
    /* 004cdfc8: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 004cdfca: mov dword ptr [edi + 4], esi */ W32((u32)(r_edi+0x4u), r_esi);
    /* 004cdfcd: mov esi, dword ptr [ebp - 0x6c] */ r_esi = R32((u32)(r_ebp+0xffffff94u));
    /* 004cdfd0: mov dword ptr [edi + 0xc], esi */ W32((u32)(r_edi+0xcu), r_esi);
    /* 004cdfd3: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004cdfd6: add edi, 0x2c */ {  u32 a = r_edi; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004cdfd9: fld dword ptr [ebp - 0x6c] */ FPUSH(R_F32((u32)(r_ebp+0xffffff94u)));
    /* 004cdfdc: fadd st(0) */ ST(0) = ST(0) + ST(0);
    /* 004cdfde: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 004cdfe0: mov esi, dword ptr [ebp - 0x7c] */ r_esi = R32((u32)(r_ebp+0xffffff84u));
    /* 004cdfe3: cmp ebx, dword ptr [esi + 0xa8] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esi+0xa8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004cdfe9: jl 0x4cdf99 */ if ((fS!=fO)) goto L_004cdf99;
L_004cdfeb:; BB(0x004cdfeb);
    /* 004cdfeb: fstp st(0) */ ST(0) = ST(0); FPOP();
L_004cdfed:; BB(0x004cdfed);
    /* 004cdfed: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004cdfee: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x4cdff3u); f_007b999c();
    /* 004cdff3: push dword ptr [ebp - 0x7c] */ { u32 v = R32((u32)(r_ebp+0xffffff84u)); r_esp -= 4; W32(r_esp, v); }
    /* 004cdff6: call 0x7b4d98 */ r_esp -= 4; W32(r_esp, 0x4cdffbu); f_007b4d98();
    /* 004cdffb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004cdffe: mov esi, dword ptr [ebp - 0x7c] */ r_esi = R32((u32)(r_ebp+0xffffff84u));
    /* 004ce001: mov eax, dword ptr [esi + 0xa8] */ r_eax = R32((u32)(r_esi+0xa8u));
    /* 004ce007: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004ce009: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004ce00b: jle 0x4ce036 */ if ((fZ||fS!=fO)) goto L_004ce036;
L_004ce00d:; BB(0x004ce00d);
    /* 004ce00d: mov edx, dword ptr [esi + 0xa4] */ r_edx = R32((u32)(r_esi+0xa4u));
    /* 004ce013: lea ecx, [ebx + ebx] */ r_ecx = (u32)(r_ebx+r_ebx);
    /* 004ce016: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004ce018: sub ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004ce01a: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004ce01c: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004ce01e: sub ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004ce020: mov eax, dword ptr [edx + ecx*4 + 0x18] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x18u));
    /* 004ce024: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004ce027: mov dword ptr [edx + ecx*4 + 0x18], eax */ W32((u32)(r_edx+r_ecx*4+0x18u), r_eax);
    /* 004ce02b: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004ce02e: cmp ebx, dword ptr [esi + 0xa8] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esi+0xa8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004ce034: jl 0x4ce00d */ if ((fS!=fO)) goto L_004ce00d;
L_004ce036:; BB(0x004ce036);
    /* 004ce036: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 004ce039: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
L_004ce040:; BB(0x004ce040);
    /* 004ce040: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 004ce043: mov dword ptr [eax + 0x20], edx */ W32((u32)(r_eax+0x20u), r_edx);
    /* 004ce046: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004ce04d: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
    /* 004ce054: push 0xb8 */ { u32 v = 0xb8u; r_esp -= 4; W32(r_esp, v); }
    /* 004ce059: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4ce05eu); f_005caba4();
    /* 004ce05e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004ce05f: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 004ce062: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ce064: je 0x4ce214 */ if (fZ) goto L_004ce214;
L_004ce06a:; BB(0x004ce06a);
    /* 004ce06a: mov dword ptr [ebp - 0x44], 1 */ W32((u32)(r_ebp+0xffffffbcu), 0x1u);
    /* 004ce071: mov dword ptr [ebp - 4], 5 */ W32((u32)(r_ebp+0xfffffffcu), 0x5u);
    /* 004ce078: push dword ptr [ebp - 0x40] */ { u32 v = R32((u32)(r_ebp+0xffffffc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004ce07b: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 004ce07e: mov dword ptr [ebp - 0x64], ecx */ W32((u32)(r_ebp+0xffffff9cu), r_ecx);
    /* 004ce081: mov dword ptr [ebp - 0x54], 0x41200000 */ W32((u32)(r_ebp+0xffffffacu), 0x41200000u);
    /* 004ce088: call 0x7b4b48 */ r_esp -= 4; W32(r_esp, 0x4ce08du); f_007b4b48();
    /* 004ce08d: mov dword ptr [ebp - 4], 6 */ W32((u32)(r_ebp+0xfffffffcu), 0x6u);
    /* 004ce094: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 004ce097: mov dword ptr [eax], 0xafbac8 */ W32((u32)(r_eax), 0xafbac8u);
    /* 004ce09d: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 004ce0a0: mov edx, dword ptr [0x9ac500] */ r_edx = R32((u32)(0x9ac500u));
    /* 004ce0a6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004ce0a8: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 004ce0ab: mov ebx, dword ptr [ebp - 0x64] */ r_ebx = R32((u32)(r_ebp+0xffffff9cu));
    /* 004ce0ae: mov dword ptr [ebx + 0xac], 0xc0800000 */ W32((u32)(r_ebx+0xacu), 0xc0800000u);
    /* 004ce0b8: mov dword ptr [ebx + 0xb0], 0 */ W32((u32)(r_ebx+0xb0u), 0x0u);
    /* 004ce0c2: mov dword ptr [ebx + 0xb4], 0xc2c80000 */ W32((u32)(r_ebx+0xb4u), 0xc2c80000u);
    /* 004ce0cc: call 0x7ba898 */ r_esp -= 4; W32(r_esp, 0x4ce0d1u); f_007ba898();
    /* 004ce0d1: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 004ce0d4: mov dword ptr [edx + 0xa8], 5 */ W32((u32)(r_edx+0xa8u), 0x5u);
    /* 004ce0de: mov word ptr [edx + 0x1c], ax */ W16((u32)(r_edx+0x1cu), (u16)r_eax);
    /* 004ce0e2: push 0xdc */ { u32 v = 0xdcu; r_esp -= 4; W32(r_esp, v); }
    /* 004ce0e7: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x4ce0ecu); f_008581c5();
    /* 004ce0ec: mov edi, eax */ r_edi = r_eax;
    /* 004ce0ee: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ce0f1: mov esi, dword ptr [ebp - 0x64] */ r_esi = R32((u32)(r_ebp+0xffffff9cu));
    /* 004ce0f4: mov edx, dword ptr [esi + 0xa8] */ r_edx = R32((u32)(r_esi+0xa8u));
    /* 004ce0fa: mov dword ptr [esi + 0xa4], edi */ W32((u32)(r_esi+0xa4u), r_edi);
    /* 004ce100: lea ebx, [edx - 1] */ r_ebx = (u32)(r_edx+0xffffffffu);
    /* 004ce103: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004ce105: mov dword ptr [ebp - 0x34], ebx */ W32((u32)(r_ebp+0xffffffccu), r_ebx);
    /* 004ce108: fild dword ptr [ebp - 0x34] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffccu)));
    /* 004ce10b: fmul dword ptr [ebp - 0x54] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffacu));
    /* 004ce10e: mov ebx, 0 */ r_ebx = 0x0u;
    /* 004ce113: jle 0x8d17ca */ if ((fZ||fS!=fO)) goto L_008d17ca;
L_004ce119:; BB(0x004ce119);
    /* 004ce119: mov ecx, dword ptr [0x9ac514] */ r_ecx = R32((u32)(0x9ac514u));
    /* 004ce11f: mov edx, dword ptr [0x9ac518] */ r_edx = R32((u32)(0x9ac518u));
    /* 004ce125: mov esi, dword ptr [0x9ac51c] */ r_esi = R32((u32)(0x9ac51cu));
    /* 004ce12b: mov eax, dword ptr [0x9ac530] */ r_eax = R32((u32)(0x9ac530u));
    /* 004ce130: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 004ce133: mov edx, dword ptr [0x9ac524] */ r_edx = R32((u32)(0x9ac524u));
    /* 004ce139: mov dword ptr [ebp - 0x14], esi */ W32((u32)(r_ebp+0xffffffecu), r_esi);
    /* 004ce13c: mov esi, dword ptr [0x9ac52c] */ r_esi = R32((u32)(0x9ac52cu));
    /* 004ce142: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 004ce145: mov edx, dword ptr [0x9ac528] */ r_edx = R32((u32)(0x9ac528u));
    /* 004ce14b: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
L_004ce14e:; BB(0x004ce14e);
    /* 004ce14e: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004ce151: fst dword ptr [edi + 8] */ W_F32((u32)(r_edi+0x8u), ST(0));
    /* 004ce154: mov dword ptr [edi + 0xc], ecx */ W32((u32)(r_edi+0xcu), r_ecx);
    /* 004ce157: mov dword ptr [edi + 0x10], esi */ W32((u32)(r_edi+0x10u), r_esi);
    /* 004ce15a: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 004ce15d: mov dword ptr [edi + 0x18], 0x10003 */ W32((u32)(r_edi+0x18u), 0x10003u);
    /* 004ce164: mov dword ptr [edi + 0x14], esi */ W32((u32)(r_edi+0x14u), r_esi);
    /* 004ce167: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 004ce16a: mov dword ptr [edi + 0x1c], esi */ W32((u32)(r_edi+0x1cu), r_esi);
    /* 004ce16d: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 004ce170: mov dword ptr [edi + 0x20], edx */ W32((u32)(r_edi+0x20u), r_edx);
    /* 004ce173: mov dword ptr [edi + 0x24], esi */ W32((u32)(r_edi+0x24u), r_esi);
    /* 004ce176: mov dword ptr [edi + 0x28], eax */ W32((u32)(r_edi+0x28u), r_eax);
    /* 004ce179: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 004ce17b: mov dword ptr [edi], esi */ W32((u32)(r_edi), r_esi);
    /* 004ce17d: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 004ce17f: mov dword ptr [edi + 4], esi */ W32((u32)(r_edi+0x4u), r_esi);
    /* 004ce182: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004ce185: mov esi, dword ptr [ebp - 0x54] */ r_esi = R32((u32)(r_ebp+0xffffffacu));
    /* 004ce188: mov dword ptr [edi + 0xc], esi */ W32((u32)(r_edi+0xcu), r_esi);
    /* 004ce18b: fld dword ptr [ebp - 0x54] */ FPUSH(R_F32((u32)(r_ebp+0xffffffacu)));
    /* 004ce18e: fadd st(0) */ ST(0) = ST(0) + ST(0);
    /* 004ce190: add edi, 0x2c */ {  u32 a = r_edi; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004ce193: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 004ce195: mov esi, dword ptr [ebp - 0x64] */ r_esi = R32((u32)(r_ebp+0xffffff9cu));
    /* 004ce198: cmp ebx, dword ptr [esi + 0xa8] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esi+0xa8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004ce19e: jl 0x4ce14e */ if ((fS!=fO)) goto L_004ce14e;
L_004ce1a0:; BB(0x004ce1a0);
    /* 004ce1a0: fstp st(0) */ ST(0) = ST(0); FPOP();
L_004ce1a2:; BB(0x004ce1a2);
    /* 004ce1a2: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004ce1a3: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x4ce1a8u); f_007b999c();
    /* 004ce1a8: push dword ptr [ebp - 0x64] */ { u32 v = R32((u32)(r_ebp+0xffffff9cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004ce1ab: call 0x7b4d98 */ r_esp -= 4; W32(r_esp, 0x4ce1b0u); f_007b4d98();
    /* 004ce1b0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ce1b3: mov esi, dword ptr [ebp - 0x64] */ r_esi = R32((u32)(r_ebp+0xffffff9cu));
    /* 004ce1b6: mov eax, dword ptr [esi + 0xa8] */ r_eax = R32((u32)(r_esi+0xa8u));
    /* 004ce1bc: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004ce1be: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ce1c0: jle 0x4ce1eb */ if ((fZ||fS!=fO)) goto L_004ce1eb;
L_004ce1c2:; BB(0x004ce1c2);
    /* 004ce1c2: mov edx, dword ptr [esi + 0xa4] */ r_edx = R32((u32)(r_esi+0xa4u));
    /* 004ce1c8: lea ecx, [ebx + ebx] */ r_ecx = (u32)(r_ebx+r_ebx);
    /* 004ce1cb: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004ce1cd: sub ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004ce1cf: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004ce1d1: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004ce1d3: sub ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004ce1d5: mov eax, dword ptr [edx + ecx*4 + 0x18] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x18u));
    /* 004ce1d9: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004ce1dc: mov dword ptr [edx + ecx*4 + 0x18], eax */ W32((u32)(r_edx+r_ecx*4+0x18u), r_eax);
    /* 004ce1e0: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004ce1e3: cmp ebx, dword ptr [esi + 0xa8] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esi+0xa8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004ce1e9: jl 0x4ce1c2 */ if ((fS!=fO)) goto L_004ce1c2;
L_004ce1eb:; BB(0x004ce1eb);
    /* 004ce1eb: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 004ce1ee: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
L_004ce1f5:; BB(0x004ce1f5);
    /* 004ce1f5: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 004ce1f8: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 004ce1fb: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 004ce1fe: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004ce201: mov dword ptr [eax + 0x24], edx */ W32((u32)(r_eax+0x24u), r_edx);
    /* 004ce204: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004ce207: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004ce20e: mov esp, ebp */ r_esp = r_ebp;
    /* 004ce210: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ce211: ret 4 */ FN_RET(0x004cdc88); r_esp += 8; return;
L_004ce214:; BB(0x004ce214);
    /* 004ce214: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ce216: jmp 0x4ce1f5 */ goto L_004ce1f5;
L_004ce218:; BB(0x004ce218);
    /* 004ce218: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004ce21a: jmp 0x4ce040 */ goto L_004ce040;
L_004ce21f:; BB(0x004ce21f);
    /* 004ce21f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004ce221: jmp 0x4cde8b */ goto L_004cde8b;
L_008d17bc:; BB(0x008d17bc);
    /* 008d17bc: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008d17be: jmp 0x4cde32 */ goto L_004cde32;
L_008d17c3:; BB(0x008d17c3);
    /* 008d17c3: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008d17c5: jmp 0x4cdfed */ goto L_004cdfed;
L_008d17ca:; BB(0x008d17ca);
    /* 008d17ca: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008d17cc: jmp 0x4ce1a2 */ goto L_004ce1a2;
}

void f_004cdf25(void)
{
    FN_ENTER(0x004cdf25);
    /* 004cdf25: add eax, dword ptr [eax] */ {  u32 a = r_eax; u32 b = R32((u32)(r_eax)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004cdf27: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 004cdf29: mov word ptr [edx + 0x1c], ax */ W16((u32)(r_edx+0x1cu), (u16)r_eax);
    /* 004cdf2d: push 0x84 */ { u32 v = 0x84u; r_esp -= 4; W32(r_esp, v); }
    /* 004cdf32: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x4cdf37u); f_008581c5();
    /* 004cdf37: mov edi, eax */ r_edi = r_eax;
    /* 004cdf39: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004cdf3c: mov esi, dword ptr [ebp - 0x7c] */ r_esi = R32((u32)(r_ebp+0xffffff84u));
    /* 004cdf3f: mov edx, dword ptr [esi + 0xa8] */ r_edx = R32((u32)(r_esi+0xa8u));
    /* 004cdf45: mov dword ptr [esi + 0xa4], edi */ W32((u32)(r_esi+0xa4u), r_edi);
    /* 004cdf4b: lea ebx, [edx - 1] */ r_ebx = (u32)(r_edx+0xffffffffu);
    /* 004cdf4e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004cdf50: mov dword ptr [ebp - 0x34], ebx */ W32((u32)(r_ebp+0xffffffccu), r_ebx);
    /* 004cdf53: fild dword ptr [ebp - 0x34] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffccu)));
    /* 004cdf56: fmul dword ptr [ebp - 0x6c] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffff94u));
    /* 004cdf59: mov ebx, 0 */ r_ebx = 0x0u;
    /* 004cdf5e: jle 0x8d17c3 */ if ((fZ||fS!=fO)) goto L_008d17c3;
L_004cdf64:; BB(0x004cdf64);
    /* 004cdf64: mov ecx, dword ptr [0x9ac514] */ r_ecx = R32((u32)(0x9ac514u));
    /* 004cdf6a: mov edx, dword ptr [0x9ac518] */ r_edx = R32((u32)(0x9ac518u));
    /* 004cdf70: mov esi, dword ptr [0x9ac51c] */ r_esi = R32((u32)(0x9ac51cu));
    /* 004cdf76: mov eax, dword ptr [0x9ac524] */ r_eax = R32((u32)(0x9ac524u));
    /* 004cdf7b: mov dword ptr [ebp - 0x14], esi */ W32((u32)(r_ebp+0xffffffecu), r_esi);
    /* 004cdf7e: mov esi, dword ptr [0x9ac528] */ r_esi = R32((u32)(0x9ac528u));
    /* 004cdf84: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004cdf87: mov esi, dword ptr [0x9ac52c] */ r_esi = R32((u32)(0x9ac52cu));
    /* 004cdf8d: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 004cdf90: mov esi, dword ptr [0x9ac530] */ r_esi = R32((u32)(0x9ac530u));
    /* 004cdf96: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
L_004cdf99:; BB(0x004cdf99);
    /* 004cdf99: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 004cdf9c: fst dword ptr [edi + 8] */ W_F32((u32)(r_edi+0x8u), ST(0));
    /* 004cdf9f: mov dword ptr [edi + 0xc], ecx */ W32((u32)(r_edi+0xcu), r_ecx);
    /* 004cdfa2: mov dword ptr [edi + 0x10], edx */ W32((u32)(r_edi+0x10u), r_edx);
    /* 004cdfa5: mov dword ptr [edi + 0x14], esi */ W32((u32)(r_edi+0x14u), r_esi);
    /* 004cdfa8: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 004cdfab: mov dword ptr [edi + 0x18], 0x10003 */ W32((u32)(r_edi+0x18u), 0x10003u);
    /* 004cdfb2: mov dword ptr [edi + 0x1c], eax */ W32((u32)(r_edi+0x1cu), r_eax);
    /* 004cdfb5: mov dword ptr [edi + 0x20], esi */ W32((u32)(r_edi+0x20u), r_esi);
    /* 004cdfb8: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 004cdfbb: mov dword ptr [edi + 0x24], esi */ W32((u32)(r_edi+0x24u), r_esi);
    /* 004cdfbe: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004cdfc1: mov dword ptr [edi + 0x28], esi */ W32((u32)(r_edi+0x28u), r_esi);
    /* 004cdfc4: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 004cdfc6: mov dword ptr [edi], esi */ W32((u32)(r_edi), r_esi);
    /* 004cdfc8: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 004cdfca: mov dword ptr [edi + 4], esi */ W32((u32)(r_edi+0x4u), r_esi);
    /* 004cdfcd: mov esi, dword ptr [ebp - 0x6c] */ r_esi = R32((u32)(r_ebp+0xffffff94u));
    /* 004cdfd0: mov dword ptr [edi + 0xc], esi */ W32((u32)(r_edi+0xcu), r_esi);
    /* 004cdfd3: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004cdfd6: add edi, 0x2c */ {  u32 a = r_edi; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004cdfd9: fld dword ptr [ebp - 0x6c] */ FPUSH(R_F32((u32)(r_ebp+0xffffff94u)));
    /* 004cdfdc: fadd st(0) */ ST(0) = ST(0) + ST(0);
    /* 004cdfde: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 004cdfe0: mov esi, dword ptr [ebp - 0x7c] */ r_esi = R32((u32)(r_ebp+0xffffff84u));
    /* 004cdfe3: cmp ebx, dword ptr [esi + 0xa8] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esi+0xa8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004cdfe9: jl 0x4cdf99 */ if ((fS!=fO)) goto L_004cdf99;
L_004cdfeb:; BB(0x004cdfeb);
    /* 004cdfeb: fstp st(0) */ ST(0) = ST(0); FPOP();
L_004cdfed:; BB(0x004cdfed);
    /* 004cdfed: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004cdfee: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x4cdff3u); f_007b999c();
    /* 004cdff3: push dword ptr [ebp - 0x7c] */ { u32 v = R32((u32)(r_ebp+0xffffff84u)); r_esp -= 4; W32(r_esp, v); }
    /* 004cdff6: call 0x7b4d98 */ r_esp -= 4; W32(r_esp, 0x4cdffbu); f_007b4d98();
    /* 004cdffb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004cdffe: mov esi, dword ptr [ebp - 0x7c] */ r_esi = R32((u32)(r_ebp+0xffffff84u));
    /* 004ce001: mov eax, dword ptr [esi + 0xa8] */ r_eax = R32((u32)(r_esi+0xa8u));
    /* 004ce007: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004ce009: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004ce00b: jle 0x4ce036 */ if ((fZ||fS!=fO)) goto L_004ce036;
L_004ce00d:; BB(0x004ce00d);
    /* 004ce00d: mov edx, dword ptr [esi + 0xa4] */ r_edx = R32((u32)(r_esi+0xa4u));
    /* 004ce013: lea ecx, [ebx + ebx] */ r_ecx = (u32)(r_ebx+r_ebx);
    /* 004ce016: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004ce018: sub ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004ce01a: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004ce01c: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004ce01e: sub ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004ce020: mov eax, dword ptr [edx + ecx*4 + 0x18] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x18u));
    /* 004ce024: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004ce027: mov dword ptr [edx + ecx*4 + 0x18], eax */ W32((u32)(r_edx+r_ecx*4+0x18u), r_eax);
    /* 004ce02b: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004ce02e: cmp ebx, dword ptr [esi + 0xa8] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esi+0xa8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004ce034: jl 0x4ce00d */ if ((fS!=fO)) goto L_004ce00d;
L_004ce036:; BB(0x004ce036);
    /* 004ce036: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 004ce039: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
    /* 004ce040: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 004ce043: mov dword ptr [eax + 0x20], edx */ W32((u32)(r_eax+0x20u), r_edx);
    /* 004ce046: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004ce04d: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
    /* 004ce054: push 0xb8 */ { u32 v = 0xb8u; r_esp -= 4; W32(r_esp, v); }
    /* 004ce059: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4ce05eu); f_005caba4();
    /* 004ce05e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004ce05f: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 004ce062: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ce064: je 0x4ce214 */ if (fZ) goto L_004ce214;
L_004ce06a:; BB(0x004ce06a);
    /* 004ce06a: mov dword ptr [ebp - 0x44], 1 */ W32((u32)(r_ebp+0xffffffbcu), 0x1u);
    /* 004ce071: mov dword ptr [ebp - 4], 5 */ W32((u32)(r_ebp+0xfffffffcu), 0x5u);
    /* 004ce078: push dword ptr [ebp - 0x40] */ { u32 v = R32((u32)(r_ebp+0xffffffc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004ce07b: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 004ce07e: mov dword ptr [ebp - 0x64], ecx */ W32((u32)(r_ebp+0xffffff9cu), r_ecx);
    /* 004ce081: mov dword ptr [ebp - 0x54], 0x41200000 */ W32((u32)(r_ebp+0xffffffacu), 0x41200000u);
    /* 004ce088: call 0x7b4b48 */ r_esp -= 4; W32(r_esp, 0x4ce08du); f_007b4b48();
    /* 004ce08d: mov dword ptr [ebp - 4], 6 */ W32((u32)(r_ebp+0xfffffffcu), 0x6u);
    /* 004ce094: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 004ce097: mov dword ptr [eax], 0xafbac8 */ W32((u32)(r_eax), 0xafbac8u);
    /* 004ce09d: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 004ce0a0: mov edx, dword ptr [0x9ac500] */ r_edx = R32((u32)(0x9ac500u));
    /* 004ce0a6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004ce0a8: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 004ce0ab: mov ebx, dword ptr [ebp - 0x64] */ r_ebx = R32((u32)(r_ebp+0xffffff9cu));
    /* 004ce0ae: mov dword ptr [ebx + 0xac], 0xc0800000 */ W32((u32)(r_ebx+0xacu), 0xc0800000u);
    /* 004ce0b8: mov dword ptr [ebx + 0xb0], 0 */ W32((u32)(r_ebx+0xb0u), 0x0u);
    /* 004ce0c2: mov dword ptr [ebx + 0xb4], 0xc2c80000 */ W32((u32)(r_ebx+0xb4u), 0xc2c80000u);
    /* 004ce0cc: call 0x7ba898 */ r_esp -= 4; W32(r_esp, 0x4ce0d1u); f_007ba898();
    /* 004ce0d1: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 004ce0d4: mov dword ptr [edx + 0xa8], 5 */ W32((u32)(r_edx+0xa8u), 0x5u);
    /* 004ce0de: mov word ptr [edx + 0x1c], ax */ W16((u32)(r_edx+0x1cu), (u16)r_eax);
    /* 004ce0e2: push 0xdc */ { u32 v = 0xdcu; r_esp -= 4; W32(r_esp, v); }
    /* 004ce0e7: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x4ce0ecu); f_008581c5();
    /* 004ce0ec: mov edi, eax */ r_edi = r_eax;
    /* 004ce0ee: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ce0f1: mov esi, dword ptr [ebp - 0x64] */ r_esi = R32((u32)(r_ebp+0xffffff9cu));
    /* 004ce0f4: mov edx, dword ptr [esi + 0xa8] */ r_edx = R32((u32)(r_esi+0xa8u));
    /* 004ce0fa: mov dword ptr [esi + 0xa4], edi */ W32((u32)(r_esi+0xa4u), r_edi);
    /* 004ce100: lea ebx, [edx - 1] */ r_ebx = (u32)(r_edx+0xffffffffu);
    /* 004ce103: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004ce105: mov dword ptr [ebp - 0x34], ebx */ W32((u32)(r_ebp+0xffffffccu), r_ebx);
    /* 004ce108: fild dword ptr [ebp - 0x34] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffccu)));
    /* 004ce10b: fmul dword ptr [ebp - 0x54] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffacu));
    /* 004ce10e: mov ebx, 0 */ r_ebx = 0x0u;
    /* 004ce113: jle 0x8d17ca */ if ((fZ||fS!=fO)) goto L_008d17ca;
L_004ce119:; BB(0x004ce119);
    /* 004ce119: mov ecx, dword ptr [0x9ac514] */ r_ecx = R32((u32)(0x9ac514u));
    /* 004ce11f: mov edx, dword ptr [0x9ac518] */ r_edx = R32((u32)(0x9ac518u));
    /* 004ce125: mov esi, dword ptr [0x9ac51c] */ r_esi = R32((u32)(0x9ac51cu));
    /* 004ce12b: mov eax, dword ptr [0x9ac530] */ r_eax = R32((u32)(0x9ac530u));
    /* 004ce130: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 004ce133: mov edx, dword ptr [0x9ac524] */ r_edx = R32((u32)(0x9ac524u));
    /* 004ce139: mov dword ptr [ebp - 0x14], esi */ W32((u32)(r_ebp+0xffffffecu), r_esi);
    /* 004ce13c: mov esi, dword ptr [0x9ac52c] */ r_esi = R32((u32)(0x9ac52cu));
    /* 004ce142: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 004ce145: mov edx, dword ptr [0x9ac528] */ r_edx = R32((u32)(0x9ac528u));
    /* 004ce14b: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
L_004ce14e:; BB(0x004ce14e);
    /* 004ce14e: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004ce151: fst dword ptr [edi + 8] */ W_F32((u32)(r_edi+0x8u), ST(0));
    /* 004ce154: mov dword ptr [edi + 0xc], ecx */ W32((u32)(r_edi+0xcu), r_ecx);
    /* 004ce157: mov dword ptr [edi + 0x10], esi */ W32((u32)(r_edi+0x10u), r_esi);
    /* 004ce15a: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 004ce15d: mov dword ptr [edi + 0x18], 0x10003 */ W32((u32)(r_edi+0x18u), 0x10003u);
    /* 004ce164: mov dword ptr [edi + 0x14], esi */ W32((u32)(r_edi+0x14u), r_esi);
    /* 004ce167: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 004ce16a: mov dword ptr [edi + 0x1c], esi */ W32((u32)(r_edi+0x1cu), r_esi);
    /* 004ce16d: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 004ce170: mov dword ptr [edi + 0x20], edx */ W32((u32)(r_edi+0x20u), r_edx);
    /* 004ce173: mov dword ptr [edi + 0x24], esi */ W32((u32)(r_edi+0x24u), r_esi);
    /* 004ce176: mov dword ptr [edi + 0x28], eax */ W32((u32)(r_edi+0x28u), r_eax);
    /* 004ce179: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 004ce17b: mov dword ptr [edi], esi */ W32((u32)(r_edi), r_esi);
    /* 004ce17d: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 004ce17f: mov dword ptr [edi + 4], esi */ W32((u32)(r_edi+0x4u), r_esi);
    /* 004ce182: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004ce185: mov esi, dword ptr [ebp - 0x54] */ r_esi = R32((u32)(r_ebp+0xffffffacu));
    /* 004ce188: mov dword ptr [edi + 0xc], esi */ W32((u32)(r_edi+0xcu), r_esi);
    /* 004ce18b: fld dword ptr [ebp - 0x54] */ FPUSH(R_F32((u32)(r_ebp+0xffffffacu)));
    /* 004ce18e: fadd st(0) */ ST(0) = ST(0) + ST(0);
    /* 004ce190: add edi, 0x2c */ {  u32 a = r_edi; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004ce193: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 004ce195: mov esi, dword ptr [ebp - 0x64] */ r_esi = R32((u32)(r_ebp+0xffffff9cu));
    /* 004ce198: cmp ebx, dword ptr [esi + 0xa8] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esi+0xa8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004ce19e: jl 0x4ce14e */ if ((fS!=fO)) goto L_004ce14e;
L_004ce1a0:; BB(0x004ce1a0);
    /* 004ce1a0: fstp st(0) */ ST(0) = ST(0); FPOP();
L_004ce1a2:; BB(0x004ce1a2);
    /* 004ce1a2: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004ce1a3: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x4ce1a8u); f_007b999c();
    /* 004ce1a8: push dword ptr [ebp - 0x64] */ { u32 v = R32((u32)(r_ebp+0xffffff9cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004ce1ab: call 0x7b4d98 */ r_esp -= 4; W32(r_esp, 0x4ce1b0u); f_007b4d98();
    /* 004ce1b0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ce1b3: mov esi, dword ptr [ebp - 0x64] */ r_esi = R32((u32)(r_ebp+0xffffff9cu));
    /* 004ce1b6: mov eax, dword ptr [esi + 0xa8] */ r_eax = R32((u32)(r_esi+0xa8u));
    /* 004ce1bc: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004ce1be: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ce1c0: jle 0x4ce1eb */ if ((fZ||fS!=fO)) goto L_004ce1eb;
L_004ce1c2:; BB(0x004ce1c2);
    /* 004ce1c2: mov edx, dword ptr [esi + 0xa4] */ r_edx = R32((u32)(r_esi+0xa4u));
    /* 004ce1c8: lea ecx, [ebx + ebx] */ r_ecx = (u32)(r_ebx+r_ebx);
    /* 004ce1cb: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004ce1cd: sub ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004ce1cf: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004ce1d1: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004ce1d3: sub ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004ce1d5: mov eax, dword ptr [edx + ecx*4 + 0x18] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x18u));
    /* 004ce1d9: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004ce1dc: mov dword ptr [edx + ecx*4 + 0x18], eax */ W32((u32)(r_edx+r_ecx*4+0x18u), r_eax);
    /* 004ce1e0: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004ce1e3: cmp ebx, dword ptr [esi + 0xa8] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esi+0xa8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004ce1e9: jl 0x4ce1c2 */ if ((fS!=fO)) goto L_004ce1c2;
L_004ce1eb:; BB(0x004ce1eb);
    /* 004ce1eb: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 004ce1ee: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
L_004ce1f5:; BB(0x004ce1f5);
    /* 004ce1f5: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 004ce1f8: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 004ce1fb: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 004ce1fe: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004ce201: mov dword ptr [eax + 0x24], edx */ W32((u32)(r_eax+0x24u), r_edx);
    /* 004ce204: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004ce207: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004ce20e: mov esp, ebp */ r_esp = r_ebp;
    /* 004ce210: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ce211: ret 4 */ FN_RET(0x004cdf25); r_esp += 8; return;
L_004ce214:; BB(0x004ce214);
    /* 004ce214: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ce216: jmp 0x4ce1f5 */ goto L_004ce1f5;
L_008d17c3:; BB(0x008d17c3);
    /* 008d17c3: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008d17c5: jmp 0x4cdfed */ goto L_004cdfed;
L_008d17ca:; BB(0x008d17ca);
    /* 008d17ca: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008d17cc: jmp 0x4ce1a2 */ goto L_004ce1a2;
}

