#include "protos.h"

void f_004c5058(void)
{
    FN_ENTER(0x004c5058);
    /* 004c5058: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c505a: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4c5060u); call_ind(t); }
    /* 004c5060: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 004c5064: mov esi, dword ptr [ebp + 0x67c] */ r_esi = R32((u32)(r_ebp+0x67cu));
    /* 004c506a: movzx edi, word ptr [ebp + 0x394] */ r_edi = (u32)R16((u32)(r_ebp+0x394u));
    /* 004c5071: mov ecx, dword ptr [ebp + 0x694] */ r_ecx = R32((u32)(r_ebp+0x694u));
    /* 004c5077: mov edx, 0x1a */ r_edx = 0x1au;
    /* 004c507c: mov byte ptr [esp + 0x18], 0xa8 */ W8((u32)(r_esp+0x18u), 0xa8u);
    /* 004c5081: mov word ptr [esp + 0x1a], ax */ W16((u32)(r_esp+0x1au), (u16)r_eax);
    /* 004c5086: mov eax, dword ptr [ebp + 0x690] */ r_eax = R32((u32)(r_ebp+0x690u));
    /* 004c508c: mov byte ptr [esp + 0x19], 6 */ W8((u32)(r_esp+0x19u), 0x6u);
    /* 004c5091: mov word ptr [esp + 0x1c], dx */ W16((u32)(r_esp+0x1cu), (u16)r_edx);
    /* 004c5096: mov word ptr [esp + 0x1e], si */ W16((u32)(r_esp+0x1eu), (u16)r_esi);
    /* 004c509b: mov dword ptr [esp + 0x20], edi */ W32((u32)(r_esp+0x20u), r_edi);
    /* 004c509f: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 004c50a3: mov dword ptr [esp + 0x28], ecx */ W32((u32)(r_esp+0x28u), r_ecx);
    /* 004c50a7: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4c50acu); f_008587a5();
    /* 004c50ac: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 004c50b0: fild dword ptr [esp + 0x48] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x48u)));
    /* 004c50b4: fdiv dword ptr [0x9086a0] */ ST(0) = ST(0) / R_F32((u32)(0x9086a0u));
    /* 004c50ba: fmul dword ptr [0x9086a4] */ ST(0) = ST(0) * R_F32((u32)(0x9086a4u));
    /* 004c50c0: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 004c50c4: fnstcw word ptr [esp + 0x30] */ W16((u32)(r_esp+0x30u), fcw);
    /* 004c50c8: movzx eax, word ptr [esp + 0x30] */ r_eax = (u32)R16((u32)(r_esp+0x30u));
    /* 004c50cd: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004c50d2: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 004c50d6: fldcw word ptr [esp + 0x38] */ fcw = R16((u32)(r_esp+0x38u));
    /* 004c50da: fistp dword ptr [esp + 0x40] */ W32((u32)(r_esp+0x40u), (u32)fx_int32(ST(0))); FPOP();
    /* 004c50de: fldcw word ptr [esp + 0x30] */ fcw = R16((u32)(r_esp+0x30u));
    /* 004c50e2: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 004c50e6: mov byte ptr [esp + 0x2c], al */ W8((u32)(r_esp+0x2cu), (u8)r_eax);
    /* 004c50ea: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4c50efu); f_008003e0();
    /* 004c50ef: add esp, 0x6c */ {  u32 a = r_esp; u32 b = 0x6cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c50f2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c50f3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c50f4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c50f5: mov esp, ebx */ r_esp = r_ebx;
    /* 004c50f7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004c50f8: ret 4 */ FN_RET(0x004c5058); r_esp += 8; return;
}

void f_004c5246(void)
{
    FN_ENTER(0x004c5246);
    goto L_004c5246;
L_004c4e4c:; BB(0x004c4e4c);
    /* 004c4e4c: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c4e4f: je 0x4c5139 */ if (fZ) goto L_004c5139;
L_004c4e55:; BB(0x004c4e55);
    /* 004c4e55: cmp edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c4e58: je 0x4c5107 */ if (fZ) goto L_004c5107;
L_004c4e5e:; BB(0x004c4e5e);
    /* 004c4e5e: cmp edi, 3 */ {  u32 a = r_edi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c4e61: je 0x4c4f26 */ if (fZ) goto L_004c4f26;
L_004c4e67:; BB(0x004c4e67);
    /* 004c4e67: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c4e6a: jne 0x4c4ee1 */ if (!fZ) goto L_004c4ee1;
L_004c4e6c:; BB(0x004c4e6c);
    /* 004c4e6c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c4e6e: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x4c4e73u); f_007aa094();
    /* 004c4e73: movsx eax, word ptr [ebp + 0xb8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xb8u));
    /* 004c4e7a: cmp eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c4e7d: je 0x4c50fb */ if (fZ) goto L_004c50fb;
L_004c4e83:; BB(0x004c4e83);
    /* 004c4e83: fld dword ptr [0x908680] */ FPUSH(R_F32((u32)(0x908680u)));
    /* 004c4e89: fld dword ptr [ebp + 0x87c] */ FPUSH(R_F32((u32)(r_ebp+0x87cu)));
    /* 004c4e8f: fadd dword ptr [ebp + 0x878] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x878u));
    /* 004c4e95: fld dword ptr [ebp + 0x3c] */ FPUSH(R_F32((u32)(r_ebp+0x3cu)));
    /* 004c4e98: fld dword ptr [ebp + 0x888] */ FPUSH(R_F32((u32)(r_ebp+0x888u)));
    /* 004c4e9e: fld dword ptr [ebp + 0x890] */ FPUSH(R_F32((u32)(r_ebp+0x890u)));
    /* 004c4ea4: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004c4ea6: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 004c4ea8: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 004c4eaa: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004c4eac: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004c4eae: fst dword ptr [ebp + 0x878] */ W_F32((u32)(r_ebp+0x878u), ST(0));
    /* 004c4eb4: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 004c4eb6: fstp dword ptr [ebp + 0x888] */ W_F32((u32)(r_ebp+0x888u), ST(0)); FPOP();
    /* 004c4ebc: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004c4ebe: fstp dword ptr [ebp + 0x890] */ W_F32((u32)(r_ebp+0x890u), ST(0)); FPOP();
    /* 004c4ec4: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004c4ec6: fstp dword ptr [ebp + 0x3c] */ W_F32((u32)(r_ebp+0x3cu), ST(0)); FPOP();
    /* 004c4ec9: add ebp, 0x38 */ {  u32 a = r_ebp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004c4ecc: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c4ece: mov edx, esi */ r_edx = r_esi;
    /* 004c4ed0: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x4c4ed5u); f_0082ebac();
    /* 004c4ed5: add esp, 0x6c */ {  u32 a = r_esp; u32 b = 0x6cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c4ed8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c4ed9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c4eda: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c4edb: mov esp, ebx */ r_esp = r_ebx;
    /* 004c4edd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004c4ede: ret 4 */ FN_RET(0x004c5246); r_esp += 8; return;
L_004c4ee1:; BB(0x004c4ee1);
    /* 004c4ee1: cmp edi, 5 */ {  u32 a = r_edi; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c4ee4: jne 0x4c4f9d */ if (!fZ) goto L_004c4f9d;
L_004c4eea:; BB(0x004c4eea);
    /* 004c4eea: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c4eec: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x4c4ef1u); f_007aa094();
    /* 004c4ef1: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c4ef3: call 0x4c53d8 */ r_esp -= 4; W32(r_esp, 0x4c4ef8u); f_004c53d8();
    /* 004c4ef8: mov eax, dword ptr [ebp + 0x860] */ r_eax = R32((u32)(r_ebp+0x860u));
    /* 004c4efe: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004c4f01: mov dword ptr [ebp + 0x860], eax */ W32((u32)(r_ebp+0x860u), r_eax);
    /* 004c4f07: cmp eax, 0x32 */ {  u32 a = r_eax; u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c4f0a: jl 0x4c4f9d */ if ((fS!=fO)) goto L_004c4f9d;
L_004c4f10:; BB(0x004c4f10);
    /* 004c4f10: mov dword ptr [ebp + 0x85c], 6 */ W32((u32)(r_ebp+0x85cu), 0x6u);
    /* 004c4f1a: add esp, 0x6c */ {  u32 a = r_esp; u32 b = 0x6cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c4f1d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c4f1e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c4f1f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c4f20: mov esp, ebx */ r_esp = r_ebx;
    /* 004c4f22: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004c4f23: ret 4 */ FN_RET(0x004c5246); r_esp += 8; return;
L_004c4f26:; BB(0x004c4f26);
    /* 004c4f26: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c4f28: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x4c4f2du); f_007aa094();
    /* 004c4f2d: fld dword ptr [0xa48564] */ FPUSH(R_F32((u32)(0xa48564u)));
    /* 004c4f33: fadd dword ptr [ebp + 0x878] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x878u));
    /* 004c4f39: fld dword ptr [ebp + 0xc0] */ FPUSH(R_F32((u32)(r_ebp+0xc0u)));
    /* 004c4f3f: fcomp dword ptr [0x90867c] */ fx_compare(ST(0), R_F32((u32)(0x90867cu))); FPOP();
    /* 004c4f45: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004c4f47: fstp dword ptr [ebp + 0x878] */ W_F32((u32)(r_ebp+0x878u), ST(0)); FPOP();
    /* 004c4f4d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004c4f4e: jb 0x4c4f72 */ if (fC) goto L_004c4f72;
L_004c4f50:; BB(0x004c4f50);
    /* 004c4f50: fld dword ptr [0x908680] */ FPUSH(R_F32((u32)(0x908680u)));
    /* 004c4f56: fld dword ptr [ebp + 0x888] */ FPUSH(R_F32((u32)(r_ebp+0x888u)));
    /* 004c4f5c: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004c4f5e: fld dword ptr [ebp + 0x890] */ FPUSH(R_F32((u32)(r_ebp+0x890u)));
    /* 004c4f64: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 004c4f66: fstp dword ptr [ebp + 0x888] */ W_F32((u32)(r_ebp+0x888u), ST(0)); FPOP();
    /* 004c4f6c: fstp dword ptr [ebp + 0x890] */ W_F32((u32)(r_ebp+0x890u), ST(0)); FPOP();
L_004c4f72:; BB(0x004c4f72);
    /* 004c4f72: lea ecx, [ebp + 0x38] */ r_ecx = (u32)(r_ebp+0x38u);
    /* 004c4f75: mov edx, esi */ r_edx = r_esi;
    /* 004c4f77: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x4c4f7cu); f_0082ebac();
    /* 004c4f7c: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 004c4f81: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004c4f83: fld dword ptr [ebp + 0x878] */ FPUSH(R_F32((u32)(r_ebp+0x878u)));
    /* 004c4f89: fadd dword ptr [ebp + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x3cu));
    /* 004c4f8c: push dword ptr [ebp + 0x5c] */ { u32 v = R32((u32)(r_ebp+0x5cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004c4f8f: fstp dword ptr [ebp + 0x3c] */ W_F32((u32)(r_ebp+0x3cu), ST(0)); FPOP();
    /* 004c4f92: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x4c4f97u); f_007a8c74();
    /* 004c4f97: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c4f9a: mov dword ptr [ebp + 0x5c], eax */ W32((u32)(r_ebp+0x5cu), r_eax);
L_004c4f9d:; BB(0x004c4f9d);
    /* 004c4f9d: add esp, 0x6c */ {  u32 a = r_esp; u32 b = 0x6cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c4fa0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c4fa1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c4fa2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c4fa3: mov esp, ebx */ r_esp = r_ebx;
    /* 004c4fa5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004c4fa6: ret 4 */ FN_RET(0x004c5246); r_esp += 8; return;
L_004c50fb:; BB(0x004c50fb);
    /* 004c50fb: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c50fd: call 0x4c53d8 */ r_esp -= 4; W32(r_esp, 0x4c5102u); f_004c53d8();
    /* 004c5102: jmp 0x4c4e83 */ goto L_004c4e83;
L_004c5107:; BB(0x004c5107);
    /* 004c5107: lea ecx, [ebp + 0x38] */ r_ecx = (u32)(r_ebp+0x38u);
    /* 004c510a: mov edx, esi */ r_edx = r_esi;
    /* 004c510c: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x4c5111u); f_0082ebac();
    /* 004c5111: fld dword ptr [0xa48564] */ FPUSH(R_F32((u32)(0xa48564u)));
    /* 004c5117: fadd dword ptr [ebp + 0x878] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x878u));
    /* 004c511d: fld dword ptr [ebp + 0x3c] */ FPUSH(R_F32((u32)(r_ebp+0x3cu)));
    /* 004c5120: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004c5122: fst dword ptr [ebp + 0x878] */ W_F32((u32)(r_ebp+0x878u), ST(0));
    /* 004c5128: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004c512a: fstp dword ptr [ebp + 0x3c] */ W_F32((u32)(r_ebp+0x3cu), ST(0)); FPOP();
    /* 004c512d: add esp, 0x6c */ {  u32 a = r_esp; u32 b = 0x6cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c5130: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c5131: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c5132: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c5133: mov esp, ebx */ r_esp = r_ebx;
    /* 004c5135: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004c5136: ret 4 */ FN_RET(0x004c5246); r_esp += 8; return;
L_004c5139:; BB(0x004c5139);
    /* 004c5139: lea ecx, [ebp + 0x38] */ r_ecx = (u32)(r_ebp+0x38u);
    /* 004c513c: mov edx, esi */ r_edx = r_esi;
    /* 004c513e: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x4c5143u); f_0082ebac();
    /* 004c5143: fld dword ptr [ebp + 0x878] */ FPUSH(R_F32((u32)(r_ebp+0x878u)));
    /* 004c5149: fadd dword ptr [ebp + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x3cu));
    /* 004c514c: fstp dword ptr [ebp + 0x3c] */ W_F32((u32)(r_ebp+0x3cu), ST(0)); FPOP();
    /* 004c514f: add esp, 0x6c */ {  u32 a = r_esp; u32 b = 0x6cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c5152: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c5153: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c5154: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c5155: mov esp, ebx */ r_esp = r_ebx;
    /* 004c5157: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004c5158: ret 4 */ FN_RET(0x004c5246); r_esp += 8; return;
L_004c5246:; BB(0x004c5246);
    /* 004c5246: add cl, bl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 7) & 1; fC = (r < a); }
    /* 004c5248: popfd  */ { u32 v = R32(r_esp); r_esp += 4; fC = v & 1; fP = (v >> 2) & 1; fA = (v >> 4) & 1; fZ = (v >> 6) & 1; fS = (v >> 7) & 1; fO = (v >> 11) & 1; rt_eflags_extra = v & 0x240000u; }
    /* 004c5249: nop  */ ;
    /* 004c524a: or byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a | b) & 0xffu; W8(ad, r);  }
    /* 004c524c: add byte ptr [ebx - 0x7a76fe38], al */ { u32 ad = (u32)(r_ebx+0x858901c8u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 004c5252: enter 3, 0 */ { u32 f = 0x3u; u32 lv = 0u; r_esp -= 4; W32(r_esp, r_ebp); u32 fr = r_esp; if (lv) { u32 k = 1; while (k < lv) { r_ebp -= 4; r_esp -= 4; W32(r_esp, R32(r_ebp)); k++; } r_esp -= 4; W32(r_esp, fr); } r_ebp = fr; r_esp -= f; }
    /* 004c5256: mov dword ptr [ebp + 0x85c], 1 */ W32((u32)(r_ebp+0x85cu), 0x1u);
    /* 004c5260: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004c5261: mov dword ptr [ebp + 0x88c], 0 */ W32((u32)(r_ebp+0x88cu), 0x0u);
    /* 004c526b: call 0x7828e4 */ r_esp -= 4; W32(r_esp, 0x4c5270u); f_007828e4();
    /* 004c5270: fstp dword ptr [esp + 0x64] */ W_F32((u32)(r_esp+0x64u), ST(0)); FPOP();
    /* 004c5274: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c5277: fld dword ptr [0x90866c] */ FPUSH(R_F32((u32)(0x90866cu)));
    /* 004c527d: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 004c5281: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004c5283: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004c5285: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004c5286: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004c5288: jbe 0x4c528c */ if ((fC||fZ)) goto L_004c528c;
L_004c528a:; BB(0x004c528a);
    /* 004c528a: fst st(1) */ ST(1) = ST(0);
L_004c528c:; BB(0x004c528c);
    /* 004c528c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004c528e: fcom dword ptr [0x908668] */ fx_compare(ST(0), R_F32((u32)(0x908668u))); 
    /* 004c5294: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004c5296: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 004c529a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004c529b: ja 0x4c52c6 */ if ((!fC&&!fZ)) goto L_004c52c6;
L_004c529d:; BB(0x004c529d);
    /* 004c529d: fld qword ptr [0x908230] */ FPUSH(R_F64((u32)(0x908230u)));
    /* 004c52a3: fld qword ptr [0x908228] */ FPUSH(R_F64((u32)(0x908228u)));
    /* 004c52a9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004c52ab: fstp qword ptr [esp + 0x58] */ W_F64((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 004c52af: fstp qword ptr [esp + 0x60] */ W_F64((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 004c52b3: mov dword ptr [ebp + 0x874], 0 */ W32((u32)(r_ebp+0x874u), 0x0u);
    /* 004c52bd: mov dword ptr [ebp + 0x5c], 0 */ W32((u32)(r_ebp+0x5cu), 0x0u);
    /* 004c52c4: jmp 0x4c5340 */ goto L_004c5340;
L_004c52c6:; BB(0x004c52c6);
    /* 004c52c6: fld dword ptr [0xa48564] */ FPUSH(R_F32((u32)(0xa48564u)));
    /* 004c52cc: fld dword ptr [0x908664] */ FPUSH(R_F32((u32)(0x908664u)));
    /* 004c52d2: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 004c52d4: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004c52d6: fdivr dword ptr [0x908688] */ ST(0) = R_F32((u32)(0x908688u)) / ST(0);
    /* 004c52dc: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004c52de: fchs  */ ST(0) = -ST(0);
    /* 004c52e0: fstp dword ptr [esp + 0x50] */ W_F32((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 004c52e4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004c52e5: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004c52e8: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x4c52edu); f_0082dc9c();
    /* 004c52ed: fadd dword ptr [esp + 0x50] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x50u));
    /* 004c52f1: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 004c52f5: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 004c52f7: fst dword ptr [ebp + 0x874] */ W_F32((u32)(r_ebp+0x874u), ST(0));
    /* 004c52fd: fld qword ptr [0x908238] */ FPUSH(R_F64((u32)(0x908238u)));
    /* 004c5303: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 004c5305: fld qword ptr [0x908230] */ FPUSH(R_F64((u32)(0x908230u)));
    /* 004c530b: fld qword ptr [0x908228] */ FPUSH(R_F64((u32)(0x908228u)));
    /* 004c5311: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004c5313: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 004c5315: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004c5317: fdiv st(2), st(0) */ ST(2) = ST(2) / ST(0);
    /* 004c5319: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004c531b: fstp qword ptr [esp + 0x58] */ W_F64((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 004c531f: fstp qword ptr [esp + 0x60] */ W_F64((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 004c5323: fnstcw word ptr [esp + 0x30] */ W16((u32)(r_esp+0x30u), fcw);
    /* 004c5327: movzx eax, word ptr [esp + 0x30] */ r_eax = (u32)R16((u32)(r_esp+0x30u));
    /* 004c532c: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004c5331: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 004c5335: fldcw word ptr [esp + 0x38] */ fcw = R16((u32)(r_esp+0x38u));
    /* 004c5339: fistp dword ptr [ebp + 0x5c] */ W32((u32)(r_ebp+0x5cu), (u32)fx_int32(ST(0))); FPOP();
    /* 004c533c: fldcw word ptr [esp + 0x30] */ fcw = R16((u32)(r_esp+0x30u));
L_004c5340:; BB(0x004c5340);
    /* 004c5340: fld dword ptr [ebp + 0x888] */ FPUSH(R_F32((u32)(r_ebp+0x888u)));
    /* 004c5346: fld dword ptr [ebp + 0x890] */ FPUSH(R_F32((u32)(r_ebp+0x890u)));
    /* 004c534c: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 004c534e: fld dword ptr [0x908684] */ FPUSH(R_F32((u32)(0x908684u)));
    /* 004c5354: fld dword ptr [ebp + 0x888] */ FPUSH(R_F32((u32)(r_ebp+0x888u)));
    /* 004c535a: fmul dword ptr [ebp + 0x874] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x874u));
    /* 004c5360: fld dword ptr [ebp + 0x890] */ FPUSH(R_F32((u32)(r_ebp+0x890u)));
    /* 004c5366: fmul dword ptr [ebp + 0x874] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x874u));
    /* 004c536c: mov edi, dword ptr [ebp + 0x85c] */ r_edi = R32((u32)(r_ebp+0x85cu));
    /* 004c5372: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004c5374: fst dword ptr [ebp + 0x888] */ W_F32((u32)(r_ebp+0x888u), ST(0));
    /* 004c537a: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 004c537c: fadd dword ptr [ebp + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x38u));
    /* 004c537f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004c5381: fst dword ptr [ebp + 0x890] */ W_F32((u32)(r_ebp+0x890u), ST(0));
    /* 004c5387: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 004c5389: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004c538b: fadd dword ptr [ebp + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x40u));
    /* 004c538e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004c5390: fstp dword ptr [ebp + 0x38] */ W_F32((u32)(r_ebp+0x38u), ST(0)); FPOP();
    /* 004c5393: fstp dword ptr [ebp + 0x40] */ W_F32((u32)(r_ebp+0x40u), ST(0)); FPOP();
    /* 004c5396: fmul qword ptr [esp + 0x58] */ ST(0) = ST(0) * R_F64((u32)(r_esp+0x58u));
    /* 004c539a: fdiv qword ptr [esp + 0x60] */ ST(0) = ST(0) / R_F64((u32)(r_esp+0x60u));
    /* 004c539e: fnstcw word ptr [esp + 0x30] */ W16((u32)(r_esp+0x30u), fcw);
    /* 004c53a2: movzx eax, word ptr [esp + 0x30] */ r_eax = (u32)R16((u32)(r_esp+0x30u));
    /* 004c53a7: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004c53ac: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 004c53b0: fldcw word ptr [esp + 0x38] */ fcw = R16((u32)(r_esp+0x38u));
    /* 004c53b4: fistp dword ptr [ebp + 0x60] */ W32((u32)(r_ebp+0x60u), (u32)fx_int32(ST(0))); FPOP();
    /* 004c53b7: fldcw word ptr [esp + 0x30] */ fcw = R16((u32)(r_esp+0x30u));
    /* 004c53bb: mov dword ptr [ebp + 0x878], 0x41700000 */ W32((u32)(r_ebp+0x878u), 0x41700000u);
    /* 004c53c5: mov dword ptr [ebp + 0x3c], 0xc32a0000 */ W32((u32)(r_ebp+0x3cu), 0xc32a0000u);
    /* 004c53cc: jmp 0x4c4e4c */ goto L_004c4e4c;
}

void f_004c5254(void)
{
    FN_ENTER(0x004c5254);
    goto L_004c5254;
L_004c4e4c:; BB(0x004c4e4c);
    /* 004c4e4c: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c4e4f: je 0x4c5139 */ if (fZ) goto L_004c5139;
L_004c4e55:; BB(0x004c4e55);
    /* 004c4e55: cmp edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c4e58: je 0x4c5107 */ if (fZ) goto L_004c5107;
L_004c4e5e:; BB(0x004c4e5e);
    /* 004c4e5e: cmp edi, 3 */ {  u32 a = r_edi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c4e61: je 0x4c4f26 */ if (fZ) goto L_004c4f26;
L_004c4e67:; BB(0x004c4e67);
    /* 004c4e67: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c4e6a: jne 0x4c4ee1 */ if (!fZ) goto L_004c4ee1;
L_004c4e6c:; BB(0x004c4e6c);
    /* 004c4e6c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c4e6e: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x4c4e73u); f_007aa094();
    /* 004c4e73: movsx eax, word ptr [ebp + 0xb8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xb8u));
    /* 004c4e7a: cmp eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c4e7d: je 0x4c50fb */ if (fZ) goto L_004c50fb;
L_004c4e83:; BB(0x004c4e83);
    /* 004c4e83: fld dword ptr [0x908680] */ FPUSH(R_F32((u32)(0x908680u)));
    /* 004c4e89: fld dword ptr [ebp + 0x87c] */ FPUSH(R_F32((u32)(r_ebp+0x87cu)));
    /* 004c4e8f: fadd dword ptr [ebp + 0x878] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x878u));
    /* 004c4e95: fld dword ptr [ebp + 0x3c] */ FPUSH(R_F32((u32)(r_ebp+0x3cu)));
    /* 004c4e98: fld dword ptr [ebp + 0x888] */ FPUSH(R_F32((u32)(r_ebp+0x888u)));
    /* 004c4e9e: fld dword ptr [ebp + 0x890] */ FPUSH(R_F32((u32)(r_ebp+0x890u)));
    /* 004c4ea4: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004c4ea6: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 004c4ea8: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 004c4eaa: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004c4eac: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004c4eae: fst dword ptr [ebp + 0x878] */ W_F32((u32)(r_ebp+0x878u), ST(0));
    /* 004c4eb4: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 004c4eb6: fstp dword ptr [ebp + 0x888] */ W_F32((u32)(r_ebp+0x888u), ST(0)); FPOP();
    /* 004c4ebc: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004c4ebe: fstp dword ptr [ebp + 0x890] */ W_F32((u32)(r_ebp+0x890u), ST(0)); FPOP();
    /* 004c4ec4: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004c4ec6: fstp dword ptr [ebp + 0x3c] */ W_F32((u32)(r_ebp+0x3cu), ST(0)); FPOP();
    /* 004c4ec9: add ebp, 0x38 */ {  u32 a = r_ebp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004c4ecc: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c4ece: mov edx, esi */ r_edx = r_esi;
    /* 004c4ed0: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x4c4ed5u); f_0082ebac();
    /* 004c4ed5: add esp, 0x6c */ {  u32 a = r_esp; u32 b = 0x6cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c4ed8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c4ed9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c4eda: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c4edb: mov esp, ebx */ r_esp = r_ebx;
    /* 004c4edd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004c4ede: ret 4 */ FN_RET(0x004c5254); r_esp += 8; return;
L_004c4ee1:; BB(0x004c4ee1);
    /* 004c4ee1: cmp edi, 5 */ {  u32 a = r_edi; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c4ee4: jne 0x4c4f9d */ if (!fZ) goto L_004c4f9d;
L_004c4eea:; BB(0x004c4eea);
    /* 004c4eea: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c4eec: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x4c4ef1u); f_007aa094();
    /* 004c4ef1: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c4ef3: call 0x4c53d8 */ r_esp -= 4; W32(r_esp, 0x4c4ef8u); f_004c53d8();
    /* 004c4ef8: mov eax, dword ptr [ebp + 0x860] */ r_eax = R32((u32)(r_ebp+0x860u));
    /* 004c4efe: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004c4f01: mov dword ptr [ebp + 0x860], eax */ W32((u32)(r_ebp+0x860u), r_eax);
    /* 004c4f07: cmp eax, 0x32 */ {  u32 a = r_eax; u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c4f0a: jl 0x4c4f9d */ if ((fS!=fO)) goto L_004c4f9d;
L_004c4f10:; BB(0x004c4f10);
    /* 004c4f10: mov dword ptr [ebp + 0x85c], 6 */ W32((u32)(r_ebp+0x85cu), 0x6u);
    /* 004c4f1a: add esp, 0x6c */ {  u32 a = r_esp; u32 b = 0x6cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c4f1d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c4f1e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c4f1f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c4f20: mov esp, ebx */ r_esp = r_ebx;
    /* 004c4f22: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004c4f23: ret 4 */ FN_RET(0x004c5254); r_esp += 8; return;
L_004c4f26:; BB(0x004c4f26);
    /* 004c4f26: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c4f28: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x4c4f2du); f_007aa094();
    /* 004c4f2d: fld dword ptr [0xa48564] */ FPUSH(R_F32((u32)(0xa48564u)));
    /* 004c4f33: fadd dword ptr [ebp + 0x878] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x878u));
    /* 004c4f39: fld dword ptr [ebp + 0xc0] */ FPUSH(R_F32((u32)(r_ebp+0xc0u)));
    /* 004c4f3f: fcomp dword ptr [0x90867c] */ fx_compare(ST(0), R_F32((u32)(0x90867cu))); FPOP();
    /* 004c4f45: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004c4f47: fstp dword ptr [ebp + 0x878] */ W_F32((u32)(r_ebp+0x878u), ST(0)); FPOP();
    /* 004c4f4d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004c4f4e: jb 0x4c4f72 */ if (fC) goto L_004c4f72;
L_004c4f50:; BB(0x004c4f50);
    /* 004c4f50: fld dword ptr [0x908680] */ FPUSH(R_F32((u32)(0x908680u)));
    /* 004c4f56: fld dword ptr [ebp + 0x888] */ FPUSH(R_F32((u32)(r_ebp+0x888u)));
    /* 004c4f5c: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004c4f5e: fld dword ptr [ebp + 0x890] */ FPUSH(R_F32((u32)(r_ebp+0x890u)));
    /* 004c4f64: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 004c4f66: fstp dword ptr [ebp + 0x888] */ W_F32((u32)(r_ebp+0x888u), ST(0)); FPOP();
    /* 004c4f6c: fstp dword ptr [ebp + 0x890] */ W_F32((u32)(r_ebp+0x890u), ST(0)); FPOP();
L_004c4f72:; BB(0x004c4f72);
    /* 004c4f72: lea ecx, [ebp + 0x38] */ r_ecx = (u32)(r_ebp+0x38u);
    /* 004c4f75: mov edx, esi */ r_edx = r_esi;
    /* 004c4f77: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x4c4f7cu); f_0082ebac();
    /* 004c4f7c: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 004c4f81: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004c4f83: fld dword ptr [ebp + 0x878] */ FPUSH(R_F32((u32)(r_ebp+0x878u)));
    /* 004c4f89: fadd dword ptr [ebp + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x3cu));
    /* 004c4f8c: push dword ptr [ebp + 0x5c] */ { u32 v = R32((u32)(r_ebp+0x5cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004c4f8f: fstp dword ptr [ebp + 0x3c] */ W_F32((u32)(r_ebp+0x3cu), ST(0)); FPOP();
    /* 004c4f92: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x4c4f97u); f_007a8c74();
    /* 004c4f97: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c4f9a: mov dword ptr [ebp + 0x5c], eax */ W32((u32)(r_ebp+0x5cu), r_eax);
L_004c4f9d:; BB(0x004c4f9d);
    /* 004c4f9d: add esp, 0x6c */ {  u32 a = r_esp; u32 b = 0x6cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c4fa0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c4fa1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c4fa2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c4fa3: mov esp, ebx */ r_esp = r_ebx;
    /* 004c4fa5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004c4fa6: ret 4 */ FN_RET(0x004c5254); r_esp += 8; return;
L_004c50fb:; BB(0x004c50fb);
    /* 004c50fb: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c50fd: call 0x4c53d8 */ r_esp -= 4; W32(r_esp, 0x4c5102u); f_004c53d8();
    /* 004c5102: jmp 0x4c4e83 */ goto L_004c4e83;
L_004c5107:; BB(0x004c5107);
    /* 004c5107: lea ecx, [ebp + 0x38] */ r_ecx = (u32)(r_ebp+0x38u);
    /* 004c510a: mov edx, esi */ r_edx = r_esi;
    /* 004c510c: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x4c5111u); f_0082ebac();
    /* 004c5111: fld dword ptr [0xa48564] */ FPUSH(R_F32((u32)(0xa48564u)));
    /* 004c5117: fadd dword ptr [ebp + 0x878] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x878u));
    /* 004c511d: fld dword ptr [ebp + 0x3c] */ FPUSH(R_F32((u32)(r_ebp+0x3cu)));
    /* 004c5120: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004c5122: fst dword ptr [ebp + 0x878] */ W_F32((u32)(r_ebp+0x878u), ST(0));
    /* 004c5128: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004c512a: fstp dword ptr [ebp + 0x3c] */ W_F32((u32)(r_ebp+0x3cu), ST(0)); FPOP();
    /* 004c512d: add esp, 0x6c */ {  u32 a = r_esp; u32 b = 0x6cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c5130: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c5131: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c5132: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c5133: mov esp, ebx */ r_esp = r_ebx;
    /* 004c5135: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004c5136: ret 4 */ FN_RET(0x004c5254); r_esp += 8; return;
L_004c5139:; BB(0x004c5139);
    /* 004c5139: lea ecx, [ebp + 0x38] */ r_ecx = (u32)(r_ebp+0x38u);
    /* 004c513c: mov edx, esi */ r_edx = r_esi;
    /* 004c513e: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x4c5143u); f_0082ebac();
    /* 004c5143: fld dword ptr [ebp + 0x878] */ FPUSH(R_F32((u32)(r_ebp+0x878u)));
    /* 004c5149: fadd dword ptr [ebp + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x3cu));
    /* 004c514c: fstp dword ptr [ebp + 0x3c] */ W_F32((u32)(r_ebp+0x3cu), ST(0)); FPOP();
    /* 004c514f: add esp, 0x6c */ {  u32 a = r_esp; u32 b = 0x6cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c5152: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c5153: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c5154: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c5155: mov esp, ebx */ r_esp = r_ebx;
    /* 004c5157: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004c5158: ret 4 */ FN_RET(0x004c5254); r_esp += 8; return;
L_004c5254:; BB(0x004c5254);
    /* 004c5254: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 004c5256: mov dword ptr [ebp + 0x85c], 1 */ W32((u32)(r_ebp+0x85cu), 0x1u);
    /* 004c5260: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004c5261: mov dword ptr [ebp + 0x88c], 0 */ W32((u32)(r_ebp+0x88cu), 0x0u);
    /* 004c526b: call 0x7828e4 */ r_esp -= 4; W32(r_esp, 0x4c5270u); f_007828e4();
    /* 004c5270: fstp dword ptr [esp + 0x64] */ W_F32((u32)(r_esp+0x64u), ST(0)); FPOP();
    /* 004c5274: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c5277: fld dword ptr [0x90866c] */ FPUSH(R_F32((u32)(0x90866cu)));
    /* 004c527d: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 004c5281: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004c5283: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004c5285: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004c5286: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004c5288: jbe 0x4c528c */ if ((fC||fZ)) goto L_004c528c;
L_004c528a:; BB(0x004c528a);
    /* 004c528a: fst st(1) */ ST(1) = ST(0);
L_004c528c:; BB(0x004c528c);
    /* 004c528c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004c528e: fcom dword ptr [0x908668] */ fx_compare(ST(0), R_F32((u32)(0x908668u))); 
    /* 004c5294: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004c5296: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 004c529a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004c529b: ja 0x4c52c6 */ if ((!fC&&!fZ)) goto L_004c52c6;
L_004c529d:; BB(0x004c529d);
    /* 004c529d: fld qword ptr [0x908230] */ FPUSH(R_F64((u32)(0x908230u)));
    /* 004c52a3: fld qword ptr [0x908228] */ FPUSH(R_F64((u32)(0x908228u)));
    /* 004c52a9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004c52ab: fstp qword ptr [esp + 0x58] */ W_F64((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 004c52af: fstp qword ptr [esp + 0x60] */ W_F64((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 004c52b3: mov dword ptr [ebp + 0x874], 0 */ W32((u32)(r_ebp+0x874u), 0x0u);
    /* 004c52bd: mov dword ptr [ebp + 0x5c], 0 */ W32((u32)(r_ebp+0x5cu), 0x0u);
    /* 004c52c4: jmp 0x4c5340 */ goto L_004c5340;
L_004c52c6:; BB(0x004c52c6);
    /* 004c52c6: fld dword ptr [0xa48564] */ FPUSH(R_F32((u32)(0xa48564u)));
    /* 004c52cc: fld dword ptr [0x908664] */ FPUSH(R_F32((u32)(0x908664u)));
    /* 004c52d2: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 004c52d4: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004c52d6: fdivr dword ptr [0x908688] */ ST(0) = R_F32((u32)(0x908688u)) / ST(0);
    /* 004c52dc: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004c52de: fchs  */ ST(0) = -ST(0);
    /* 004c52e0: fstp dword ptr [esp + 0x50] */ W_F32((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 004c52e4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004c52e5: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004c52e8: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x4c52edu); f_0082dc9c();
    /* 004c52ed: fadd dword ptr [esp + 0x50] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x50u));
    /* 004c52f1: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 004c52f5: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 004c52f7: fst dword ptr [ebp + 0x874] */ W_F32((u32)(r_ebp+0x874u), ST(0));
    /* 004c52fd: fld qword ptr [0x908238] */ FPUSH(R_F64((u32)(0x908238u)));
    /* 004c5303: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 004c5305: fld qword ptr [0x908230] */ FPUSH(R_F64((u32)(0x908230u)));
    /* 004c530b: fld qword ptr [0x908228] */ FPUSH(R_F64((u32)(0x908228u)));
    /* 004c5311: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004c5313: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 004c5315: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004c5317: fdiv st(2), st(0) */ ST(2) = ST(2) / ST(0);
    /* 004c5319: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004c531b: fstp qword ptr [esp + 0x58] */ W_F64((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 004c531f: fstp qword ptr [esp + 0x60] */ W_F64((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 004c5323: fnstcw word ptr [esp + 0x30] */ W16((u32)(r_esp+0x30u), fcw);
    /* 004c5327: movzx eax, word ptr [esp + 0x30] */ r_eax = (u32)R16((u32)(r_esp+0x30u));
    /* 004c532c: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004c5331: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 004c5335: fldcw word ptr [esp + 0x38] */ fcw = R16((u32)(r_esp+0x38u));
    /* 004c5339: fistp dword ptr [ebp + 0x5c] */ W32((u32)(r_ebp+0x5cu), (u32)fx_int32(ST(0))); FPOP();
    /* 004c533c: fldcw word ptr [esp + 0x30] */ fcw = R16((u32)(r_esp+0x30u));
L_004c5340:; BB(0x004c5340);
    /* 004c5340: fld dword ptr [ebp + 0x888] */ FPUSH(R_F32((u32)(r_ebp+0x888u)));
    /* 004c5346: fld dword ptr [ebp + 0x890] */ FPUSH(R_F32((u32)(r_ebp+0x890u)));
    /* 004c534c: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 004c534e: fld dword ptr [0x908684] */ FPUSH(R_F32((u32)(0x908684u)));
    /* 004c5354: fld dword ptr [ebp + 0x888] */ FPUSH(R_F32((u32)(r_ebp+0x888u)));
    /* 004c535a: fmul dword ptr [ebp + 0x874] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x874u));
    /* 004c5360: fld dword ptr [ebp + 0x890] */ FPUSH(R_F32((u32)(r_ebp+0x890u)));
    /* 004c5366: fmul dword ptr [ebp + 0x874] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x874u));
    /* 004c536c: mov edi, dword ptr [ebp + 0x85c] */ r_edi = R32((u32)(r_ebp+0x85cu));
    /* 004c5372: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004c5374: fst dword ptr [ebp + 0x888] */ W_F32((u32)(r_ebp+0x888u), ST(0));
    /* 004c537a: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 004c537c: fadd dword ptr [ebp + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x38u));
    /* 004c537f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004c5381: fst dword ptr [ebp + 0x890] */ W_F32((u32)(r_ebp+0x890u), ST(0));
    /* 004c5387: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 004c5389: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004c538b: fadd dword ptr [ebp + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x40u));
    /* 004c538e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004c5390: fstp dword ptr [ebp + 0x38] */ W_F32((u32)(r_ebp+0x38u), ST(0)); FPOP();
    /* 004c5393: fstp dword ptr [ebp + 0x40] */ W_F32((u32)(r_ebp+0x40u), ST(0)); FPOP();
    /* 004c5396: fmul qword ptr [esp + 0x58] */ ST(0) = ST(0) * R_F64((u32)(r_esp+0x58u));
    /* 004c539a: fdiv qword ptr [esp + 0x60] */ ST(0) = ST(0) / R_F64((u32)(r_esp+0x60u));
    /* 004c539e: fnstcw word ptr [esp + 0x30] */ W16((u32)(r_esp+0x30u), fcw);
    /* 004c53a2: movzx eax, word ptr [esp + 0x30] */ r_eax = (u32)R16((u32)(r_esp+0x30u));
    /* 004c53a7: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004c53ac: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 004c53b0: fldcw word ptr [esp + 0x38] */ fcw = R16((u32)(r_esp+0x38u));
    /* 004c53b4: fistp dword ptr [ebp + 0x60] */ W32((u32)(r_ebp+0x60u), (u32)fx_int32(ST(0))); FPOP();
    /* 004c53b7: fldcw word ptr [esp + 0x30] */ fcw = R16((u32)(r_esp+0x30u));
    /* 004c53bb: mov dword ptr [ebp + 0x878], 0x41700000 */ W32((u32)(r_ebp+0x878u), 0x41700000u);
    /* 004c53c5: mov dword ptr [ebp + 0x3c], 0xc32a0000 */ W32((u32)(r_ebp+0x3cu), 0xc32a0000u);
    /* 004c53cc: jmp 0x4c4e4c */ goto L_004c4e4c;
}

void f_004c5345(void)
{
    FN_ENTER(0x004c5345);
    goto L_004c5345;
L_004c4e4c:; BB(0x004c4e4c);
    /* 004c4e4c: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c4e4f: je 0x4c5139 */ if (fZ) goto L_004c5139;
L_004c4e55:; BB(0x004c4e55);
    /* 004c4e55: cmp edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c4e58: je 0x4c5107 */ if (fZ) goto L_004c5107;
L_004c4e5e:; BB(0x004c4e5e);
    /* 004c4e5e: cmp edi, 3 */ {  u32 a = r_edi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c4e61: je 0x4c4f26 */ if (fZ) goto L_004c4f26;
L_004c4e67:; BB(0x004c4e67);
    /* 004c4e67: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c4e6a: jne 0x4c4ee1 */ if (!fZ) goto L_004c4ee1;
L_004c4e6c:; BB(0x004c4e6c);
    /* 004c4e6c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c4e6e: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x4c4e73u); f_007aa094();
    /* 004c4e73: movsx eax, word ptr [ebp + 0xb8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xb8u));
    /* 004c4e7a: cmp eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c4e7d: je 0x4c50fb */ if (fZ) goto L_004c50fb;
L_004c4e83:; BB(0x004c4e83);
    /* 004c4e83: fld dword ptr [0x908680] */ FPUSH(R_F32((u32)(0x908680u)));
    /* 004c4e89: fld dword ptr [ebp + 0x87c] */ FPUSH(R_F32((u32)(r_ebp+0x87cu)));
    /* 004c4e8f: fadd dword ptr [ebp + 0x878] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x878u));
    /* 004c4e95: fld dword ptr [ebp + 0x3c] */ FPUSH(R_F32((u32)(r_ebp+0x3cu)));
    /* 004c4e98: fld dword ptr [ebp + 0x888] */ FPUSH(R_F32((u32)(r_ebp+0x888u)));
    /* 004c4e9e: fld dword ptr [ebp + 0x890] */ FPUSH(R_F32((u32)(r_ebp+0x890u)));
    /* 004c4ea4: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004c4ea6: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 004c4ea8: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 004c4eaa: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004c4eac: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004c4eae: fst dword ptr [ebp + 0x878] */ W_F32((u32)(r_ebp+0x878u), ST(0));
    /* 004c4eb4: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 004c4eb6: fstp dword ptr [ebp + 0x888] */ W_F32((u32)(r_ebp+0x888u), ST(0)); FPOP();
    /* 004c4ebc: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004c4ebe: fstp dword ptr [ebp + 0x890] */ W_F32((u32)(r_ebp+0x890u), ST(0)); FPOP();
    /* 004c4ec4: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004c4ec6: fstp dword ptr [ebp + 0x3c] */ W_F32((u32)(r_ebp+0x3cu), ST(0)); FPOP();
    /* 004c4ec9: add ebp, 0x38 */ {  u32 a = r_ebp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004c4ecc: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c4ece: mov edx, esi */ r_edx = r_esi;
    /* 004c4ed0: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x4c4ed5u); f_0082ebac();
    /* 004c4ed5: add esp, 0x6c */ {  u32 a = r_esp; u32 b = 0x6cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c4ed8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c4ed9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c4eda: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c4edb: mov esp, ebx */ r_esp = r_ebx;
    /* 004c4edd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004c4ede: ret 4 */ FN_RET(0x004c5345); r_esp += 8; return;
L_004c4ee1:; BB(0x004c4ee1);
    /* 004c4ee1: cmp edi, 5 */ {  u32 a = r_edi; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c4ee4: jne 0x4c4f9d */ if (!fZ) goto L_004c4f9d;
L_004c4eea:; BB(0x004c4eea);
    /* 004c4eea: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c4eec: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x4c4ef1u); f_007aa094();
    /* 004c4ef1: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c4ef3: call 0x4c53d8 */ r_esp -= 4; W32(r_esp, 0x4c4ef8u); f_004c53d8();
    /* 004c4ef8: mov eax, dword ptr [ebp + 0x860] */ r_eax = R32((u32)(r_ebp+0x860u));
    /* 004c4efe: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004c4f01: mov dword ptr [ebp + 0x860], eax */ W32((u32)(r_ebp+0x860u), r_eax);
    /* 004c4f07: cmp eax, 0x32 */ {  u32 a = r_eax; u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c4f0a: jl 0x4c4f9d */ if ((fS!=fO)) goto L_004c4f9d;
L_004c4f10:; BB(0x004c4f10);
    /* 004c4f10: mov dword ptr [ebp + 0x85c], 6 */ W32((u32)(r_ebp+0x85cu), 0x6u);
    /* 004c4f1a: add esp, 0x6c */ {  u32 a = r_esp; u32 b = 0x6cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c4f1d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c4f1e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c4f1f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c4f20: mov esp, ebx */ r_esp = r_ebx;
    /* 004c4f22: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004c4f23: ret 4 */ FN_RET(0x004c5345); r_esp += 8; return;
L_004c4f26:; BB(0x004c4f26);
    /* 004c4f26: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c4f28: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x4c4f2du); f_007aa094();
    /* 004c4f2d: fld dword ptr [0xa48564] */ FPUSH(R_F32((u32)(0xa48564u)));
    /* 004c4f33: fadd dword ptr [ebp + 0x878] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x878u));
    /* 004c4f39: fld dword ptr [ebp + 0xc0] */ FPUSH(R_F32((u32)(r_ebp+0xc0u)));
    /* 004c4f3f: fcomp dword ptr [0x90867c] */ fx_compare(ST(0), R_F32((u32)(0x90867cu))); FPOP();
    /* 004c4f45: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004c4f47: fstp dword ptr [ebp + 0x878] */ W_F32((u32)(r_ebp+0x878u), ST(0)); FPOP();
    /* 004c4f4d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004c4f4e: jb 0x4c4f72 */ if (fC) goto L_004c4f72;
L_004c4f50:; BB(0x004c4f50);
    /* 004c4f50: fld dword ptr [0x908680] */ FPUSH(R_F32((u32)(0x908680u)));
    /* 004c4f56: fld dword ptr [ebp + 0x888] */ FPUSH(R_F32((u32)(r_ebp+0x888u)));
    /* 004c4f5c: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004c4f5e: fld dword ptr [ebp + 0x890] */ FPUSH(R_F32((u32)(r_ebp+0x890u)));
    /* 004c4f64: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 004c4f66: fstp dword ptr [ebp + 0x888] */ W_F32((u32)(r_ebp+0x888u), ST(0)); FPOP();
    /* 004c4f6c: fstp dword ptr [ebp + 0x890] */ W_F32((u32)(r_ebp+0x890u), ST(0)); FPOP();
L_004c4f72:; BB(0x004c4f72);
    /* 004c4f72: lea ecx, [ebp + 0x38] */ r_ecx = (u32)(r_ebp+0x38u);
    /* 004c4f75: mov edx, esi */ r_edx = r_esi;
    /* 004c4f77: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x4c4f7cu); f_0082ebac();
    /* 004c4f7c: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 004c4f81: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004c4f83: fld dword ptr [ebp + 0x878] */ FPUSH(R_F32((u32)(r_ebp+0x878u)));
    /* 004c4f89: fadd dword ptr [ebp + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x3cu));
    /* 004c4f8c: push dword ptr [ebp + 0x5c] */ { u32 v = R32((u32)(r_ebp+0x5cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004c4f8f: fstp dword ptr [ebp + 0x3c] */ W_F32((u32)(r_ebp+0x3cu), ST(0)); FPOP();
    /* 004c4f92: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x4c4f97u); f_007a8c74();
    /* 004c4f97: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c4f9a: mov dword ptr [ebp + 0x5c], eax */ W32((u32)(r_ebp+0x5cu), r_eax);
L_004c4f9d:; BB(0x004c4f9d);
    /* 004c4f9d: add esp, 0x6c */ {  u32 a = r_esp; u32 b = 0x6cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c4fa0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c4fa1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c4fa2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c4fa3: mov esp, ebx */ r_esp = r_ebx;
    /* 004c4fa5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004c4fa6: ret 4 */ FN_RET(0x004c5345); r_esp += 8; return;
L_004c50fb:; BB(0x004c50fb);
    /* 004c50fb: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c50fd: call 0x4c53d8 */ r_esp -= 4; W32(r_esp, 0x4c5102u); f_004c53d8();
    /* 004c5102: jmp 0x4c4e83 */ goto L_004c4e83;
L_004c5107:; BB(0x004c5107);
    /* 004c5107: lea ecx, [ebp + 0x38] */ r_ecx = (u32)(r_ebp+0x38u);
    /* 004c510a: mov edx, esi */ r_edx = r_esi;
    /* 004c510c: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x4c5111u); f_0082ebac();
    /* 004c5111: fld dword ptr [0xa48564] */ FPUSH(R_F32((u32)(0xa48564u)));
    /* 004c5117: fadd dword ptr [ebp + 0x878] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x878u));
    /* 004c511d: fld dword ptr [ebp + 0x3c] */ FPUSH(R_F32((u32)(r_ebp+0x3cu)));
    /* 004c5120: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004c5122: fst dword ptr [ebp + 0x878] */ W_F32((u32)(r_ebp+0x878u), ST(0));
    /* 004c5128: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004c512a: fstp dword ptr [ebp + 0x3c] */ W_F32((u32)(r_ebp+0x3cu), ST(0)); FPOP();
    /* 004c512d: add esp, 0x6c */ {  u32 a = r_esp; u32 b = 0x6cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c5130: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c5131: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c5132: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c5133: mov esp, ebx */ r_esp = r_ebx;
    /* 004c5135: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004c5136: ret 4 */ FN_RET(0x004c5345); r_esp += 8; return;
L_004c5139:; BB(0x004c5139);
    /* 004c5139: lea ecx, [ebp + 0x38] */ r_ecx = (u32)(r_ebp+0x38u);
    /* 004c513c: mov edx, esi */ r_edx = r_esi;
    /* 004c513e: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x4c5143u); f_0082ebac();
    /* 004c5143: fld dword ptr [ebp + 0x878] */ FPUSH(R_F32((u32)(r_ebp+0x878u)));
    /* 004c5149: fadd dword ptr [ebp + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x3cu));
    /* 004c514c: fstp dword ptr [ebp + 0x3c] */ W_F32((u32)(r_ebp+0x3cu), ST(0)); FPOP();
    /* 004c514f: add esp, 0x6c */ {  u32 a = r_esp; u32 b = 0x6cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c5152: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c5153: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c5154: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c5155: mov esp, ebx */ r_esp = r_ebx;
    /* 004c5157: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004c5158: ret 4 */ FN_RET(0x004c5345); r_esp += 8; return;
L_004c5345:; BB(0x004c5345);
    /* 004c5345: add cl, bl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 004c5347: test dword ptr [eax - 0x26fffff8], edx */ {  u32 a = R32((u32)(r_eax+0xd9000008u)); u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;   }
    /* 004c534d: fld dword ptr [0x908684] */ FPUSH(R_F32((u32)(0x908684u)));
    /* 004c5354: fld dword ptr [ebp + 0x888] */ FPUSH(R_F32((u32)(r_ebp+0x888u)));
    /* 004c535a: fmul dword ptr [ebp + 0x874] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x874u));
    /* 004c5360: fld dword ptr [ebp + 0x890] */ FPUSH(R_F32((u32)(r_ebp+0x890u)));
    /* 004c5366: fmul dword ptr [ebp + 0x874] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x874u));
    /* 004c536c: mov edi, dword ptr [ebp + 0x85c] */ r_edi = R32((u32)(r_ebp+0x85cu));
    /* 004c5372: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004c5374: fst dword ptr [ebp + 0x888] */ W_F32((u32)(r_ebp+0x888u), ST(0));
    /* 004c537a: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 004c537c: fadd dword ptr [ebp + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x38u));
    /* 004c537f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004c5381: fst dword ptr [ebp + 0x890] */ W_F32((u32)(r_ebp+0x890u), ST(0));
    /* 004c5387: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 004c5389: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004c538b: fadd dword ptr [ebp + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x40u));
    /* 004c538e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004c5390: fstp dword ptr [ebp + 0x38] */ W_F32((u32)(r_ebp+0x38u), ST(0)); FPOP();
    /* 004c5393: fstp dword ptr [ebp + 0x40] */ W_F32((u32)(r_ebp+0x40u), ST(0)); FPOP();
    /* 004c5396: fmul qword ptr [esp + 0x58] */ ST(0) = ST(0) * R_F64((u32)(r_esp+0x58u));
    /* 004c539a: fdiv qword ptr [esp + 0x60] */ ST(0) = ST(0) / R_F64((u32)(r_esp+0x60u));
    /* 004c539e: fnstcw word ptr [esp + 0x30] */ W16((u32)(r_esp+0x30u), fcw);
    /* 004c53a2: movzx eax, word ptr [esp + 0x30] */ r_eax = (u32)R16((u32)(r_esp+0x30u));
    /* 004c53a7: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004c53ac: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 004c53b0: fldcw word ptr [esp + 0x38] */ fcw = R16((u32)(r_esp+0x38u));
    /* 004c53b4: fistp dword ptr [ebp + 0x60] */ W32((u32)(r_ebp+0x60u), (u32)fx_int32(ST(0))); FPOP();
    /* 004c53b7: fldcw word ptr [esp + 0x30] */ fcw = R16((u32)(r_esp+0x30u));
    /* 004c53bb: mov dword ptr [ebp + 0x878], 0x41700000 */ W32((u32)(r_ebp+0x878u), 0x41700000u);
    /* 004c53c5: mov dword ptr [ebp + 0x3c], 0xc32a0000 */ W32((u32)(r_ebp+0x3cu), 0xc32a0000u);
    /* 004c53cc: jmp 0x4c4e4c */ goto L_004c4e4c;
}

void f_004c5349(void)
{
    FN_ENTER(0x004c5349);
    goto L_004c5349;
L_004c4e4c:; BB(0x004c4e4c);
    /* 004c4e4c: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c4e4f: je 0x4c5139 */ if (fZ) goto L_004c5139;
L_004c4e55:; BB(0x004c4e55);
    /* 004c4e55: cmp edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c4e58: je 0x4c5107 */ if (fZ) goto L_004c5107;
L_004c4e5e:; BB(0x004c4e5e);
    /* 004c4e5e: cmp edi, 3 */ {  u32 a = r_edi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c4e61: je 0x4c4f26 */ if (fZ) goto L_004c4f26;
L_004c4e67:; BB(0x004c4e67);
    /* 004c4e67: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c4e6a: jne 0x4c4ee1 */ if (!fZ) goto L_004c4ee1;
L_004c4e6c:; BB(0x004c4e6c);
    /* 004c4e6c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c4e6e: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x4c4e73u); f_007aa094();
    /* 004c4e73: movsx eax, word ptr [ebp + 0xb8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xb8u));
    /* 004c4e7a: cmp eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c4e7d: je 0x4c50fb */ if (fZ) goto L_004c50fb;
L_004c4e83:; BB(0x004c4e83);
    /* 004c4e83: fld dword ptr [0x908680] */ FPUSH(R_F32((u32)(0x908680u)));
    /* 004c4e89: fld dword ptr [ebp + 0x87c] */ FPUSH(R_F32((u32)(r_ebp+0x87cu)));
    /* 004c4e8f: fadd dword ptr [ebp + 0x878] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x878u));
    /* 004c4e95: fld dword ptr [ebp + 0x3c] */ FPUSH(R_F32((u32)(r_ebp+0x3cu)));
    /* 004c4e98: fld dword ptr [ebp + 0x888] */ FPUSH(R_F32((u32)(r_ebp+0x888u)));
    /* 004c4e9e: fld dword ptr [ebp + 0x890] */ FPUSH(R_F32((u32)(r_ebp+0x890u)));
    /* 004c4ea4: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004c4ea6: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 004c4ea8: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 004c4eaa: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004c4eac: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004c4eae: fst dword ptr [ebp + 0x878] */ W_F32((u32)(r_ebp+0x878u), ST(0));
    /* 004c4eb4: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 004c4eb6: fstp dword ptr [ebp + 0x888] */ W_F32((u32)(r_ebp+0x888u), ST(0)); FPOP();
    /* 004c4ebc: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004c4ebe: fstp dword ptr [ebp + 0x890] */ W_F32((u32)(r_ebp+0x890u), ST(0)); FPOP();
    /* 004c4ec4: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004c4ec6: fstp dword ptr [ebp + 0x3c] */ W_F32((u32)(r_ebp+0x3cu), ST(0)); FPOP();
    /* 004c4ec9: add ebp, 0x38 */ {  u32 a = r_ebp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004c4ecc: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c4ece: mov edx, esi */ r_edx = r_esi;
    /* 004c4ed0: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x4c4ed5u); f_0082ebac();
    /* 004c4ed5: add esp, 0x6c */ {  u32 a = r_esp; u32 b = 0x6cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c4ed8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c4ed9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c4eda: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c4edb: mov esp, ebx */ r_esp = r_ebx;
    /* 004c4edd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004c4ede: ret 4 */ FN_RET(0x004c5349); r_esp += 8; return;
L_004c4ee1:; BB(0x004c4ee1);
    /* 004c4ee1: cmp edi, 5 */ {  u32 a = r_edi; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c4ee4: jne 0x4c4f9d */ if (!fZ) goto L_004c4f9d;
L_004c4eea:; BB(0x004c4eea);
    /* 004c4eea: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c4eec: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x4c4ef1u); f_007aa094();
    /* 004c4ef1: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c4ef3: call 0x4c53d8 */ r_esp -= 4; W32(r_esp, 0x4c4ef8u); f_004c53d8();
    /* 004c4ef8: mov eax, dword ptr [ebp + 0x860] */ r_eax = R32((u32)(r_ebp+0x860u));
    /* 004c4efe: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004c4f01: mov dword ptr [ebp + 0x860], eax */ W32((u32)(r_ebp+0x860u), r_eax);
    /* 004c4f07: cmp eax, 0x32 */ {  u32 a = r_eax; u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c4f0a: jl 0x4c4f9d */ if ((fS!=fO)) goto L_004c4f9d;
L_004c4f10:; BB(0x004c4f10);
    /* 004c4f10: mov dword ptr [ebp + 0x85c], 6 */ W32((u32)(r_ebp+0x85cu), 0x6u);
    /* 004c4f1a: add esp, 0x6c */ {  u32 a = r_esp; u32 b = 0x6cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c4f1d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c4f1e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c4f1f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c4f20: mov esp, ebx */ r_esp = r_ebx;
    /* 004c4f22: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004c4f23: ret 4 */ FN_RET(0x004c5349); r_esp += 8; return;
L_004c4f26:; BB(0x004c4f26);
    /* 004c4f26: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c4f28: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x4c4f2du); f_007aa094();
    /* 004c4f2d: fld dword ptr [0xa48564] */ FPUSH(R_F32((u32)(0xa48564u)));
    /* 004c4f33: fadd dword ptr [ebp + 0x878] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x878u));
    /* 004c4f39: fld dword ptr [ebp + 0xc0] */ FPUSH(R_F32((u32)(r_ebp+0xc0u)));
    /* 004c4f3f: fcomp dword ptr [0x90867c] */ fx_compare(ST(0), R_F32((u32)(0x90867cu))); FPOP();
    /* 004c4f45: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004c4f47: fstp dword ptr [ebp + 0x878] */ W_F32((u32)(r_ebp+0x878u), ST(0)); FPOP();
    /* 004c4f4d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004c4f4e: jb 0x4c4f72 */ if (fC) goto L_004c4f72;
L_004c4f50:; BB(0x004c4f50);
    /* 004c4f50: fld dword ptr [0x908680] */ FPUSH(R_F32((u32)(0x908680u)));
    /* 004c4f56: fld dword ptr [ebp + 0x888] */ FPUSH(R_F32((u32)(r_ebp+0x888u)));
    /* 004c4f5c: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004c4f5e: fld dword ptr [ebp + 0x890] */ FPUSH(R_F32((u32)(r_ebp+0x890u)));
    /* 004c4f64: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 004c4f66: fstp dword ptr [ebp + 0x888] */ W_F32((u32)(r_ebp+0x888u), ST(0)); FPOP();
    /* 004c4f6c: fstp dword ptr [ebp + 0x890] */ W_F32((u32)(r_ebp+0x890u), ST(0)); FPOP();
L_004c4f72:; BB(0x004c4f72);
    /* 004c4f72: lea ecx, [ebp + 0x38] */ r_ecx = (u32)(r_ebp+0x38u);
    /* 004c4f75: mov edx, esi */ r_edx = r_esi;
    /* 004c4f77: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x4c4f7cu); f_0082ebac();
    /* 004c4f7c: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 004c4f81: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004c4f83: fld dword ptr [ebp + 0x878] */ FPUSH(R_F32((u32)(r_ebp+0x878u)));
    /* 004c4f89: fadd dword ptr [ebp + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x3cu));
    /* 004c4f8c: push dword ptr [ebp + 0x5c] */ { u32 v = R32((u32)(r_ebp+0x5cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004c4f8f: fstp dword ptr [ebp + 0x3c] */ W_F32((u32)(r_ebp+0x3cu), ST(0)); FPOP();
    /* 004c4f92: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x4c4f97u); f_007a8c74();
    /* 004c4f97: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c4f9a: mov dword ptr [ebp + 0x5c], eax */ W32((u32)(r_ebp+0x5cu), r_eax);
L_004c4f9d:; BB(0x004c4f9d);
    /* 004c4f9d: add esp, 0x6c */ {  u32 a = r_esp; u32 b = 0x6cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c4fa0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c4fa1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c4fa2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c4fa3: mov esp, ebx */ r_esp = r_ebx;
    /* 004c4fa5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004c4fa6: ret 4 */ FN_RET(0x004c5349); r_esp += 8; return;
L_004c50fb:; BB(0x004c50fb);
    /* 004c50fb: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c50fd: call 0x4c53d8 */ r_esp -= 4; W32(r_esp, 0x4c5102u); f_004c53d8();
    /* 004c5102: jmp 0x4c4e83 */ goto L_004c4e83;
L_004c5107:; BB(0x004c5107);
    /* 004c5107: lea ecx, [ebp + 0x38] */ r_ecx = (u32)(r_ebp+0x38u);
    /* 004c510a: mov edx, esi */ r_edx = r_esi;
    /* 004c510c: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x4c5111u); f_0082ebac();
    /* 004c5111: fld dword ptr [0xa48564] */ FPUSH(R_F32((u32)(0xa48564u)));
    /* 004c5117: fadd dword ptr [ebp + 0x878] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x878u));
    /* 004c511d: fld dword ptr [ebp + 0x3c] */ FPUSH(R_F32((u32)(r_ebp+0x3cu)));
    /* 004c5120: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004c5122: fst dword ptr [ebp + 0x878] */ W_F32((u32)(r_ebp+0x878u), ST(0));
    /* 004c5128: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004c512a: fstp dword ptr [ebp + 0x3c] */ W_F32((u32)(r_ebp+0x3cu), ST(0)); FPOP();
    /* 004c512d: add esp, 0x6c */ {  u32 a = r_esp; u32 b = 0x6cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c5130: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c5131: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c5132: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c5133: mov esp, ebx */ r_esp = r_ebx;
    /* 004c5135: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004c5136: ret 4 */ FN_RET(0x004c5349); r_esp += 8; return;
L_004c5139:; BB(0x004c5139);
    /* 004c5139: lea ecx, [ebp + 0x38] */ r_ecx = (u32)(r_ebp+0x38u);
    /* 004c513c: mov edx, esi */ r_edx = r_esi;
    /* 004c513e: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x4c5143u); f_0082ebac();
    /* 004c5143: fld dword ptr [ebp + 0x878] */ FPUSH(R_F32((u32)(r_ebp+0x878u)));
    /* 004c5149: fadd dword ptr [ebp + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x3cu));
    /* 004c514c: fstp dword ptr [ebp + 0x3c] */ W_F32((u32)(r_ebp+0x3cu), ST(0)); FPOP();
    /* 004c514f: add esp, 0x6c */ {  u32 a = r_esp; u32 b = 0x6cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c5152: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c5153: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c5154: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c5155: mov esp, ebx */ r_esp = r_ebx;
    /* 004c5157: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004c5158: ret 4 */ FN_RET(0x004c5349); r_esp += 8; return;
L_004c5349:; BB(0x004c5349);
    /* 004c5349: or byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a | b) & 0xffu; W8(ad, r);  }
    /* 004c534b: add cl, bl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 004c534d: fld dword ptr [0x908684] */ FPUSH(R_F32((u32)(0x908684u)));
    /* 004c5354: fld dword ptr [ebp + 0x888] */ FPUSH(R_F32((u32)(r_ebp+0x888u)));
    /* 004c535a: fmul dword ptr [ebp + 0x874] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x874u));
    /* 004c5360: fld dword ptr [ebp + 0x890] */ FPUSH(R_F32((u32)(r_ebp+0x890u)));
    /* 004c5366: fmul dword ptr [ebp + 0x874] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x874u));
    /* 004c536c: mov edi, dword ptr [ebp + 0x85c] */ r_edi = R32((u32)(r_ebp+0x85cu));
    /* 004c5372: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004c5374: fst dword ptr [ebp + 0x888] */ W_F32((u32)(r_ebp+0x888u), ST(0));
    /* 004c537a: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 004c537c: fadd dword ptr [ebp + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x38u));
    /* 004c537f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004c5381: fst dword ptr [ebp + 0x890] */ W_F32((u32)(r_ebp+0x890u), ST(0));
    /* 004c5387: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 004c5389: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004c538b: fadd dword ptr [ebp + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x40u));
    /* 004c538e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004c5390: fstp dword ptr [ebp + 0x38] */ W_F32((u32)(r_ebp+0x38u), ST(0)); FPOP();
    /* 004c5393: fstp dword ptr [ebp + 0x40] */ W_F32((u32)(r_ebp+0x40u), ST(0)); FPOP();
    /* 004c5396: fmul qword ptr [esp + 0x58] */ ST(0) = ST(0) * R_F64((u32)(r_esp+0x58u));
    /* 004c539a: fdiv qword ptr [esp + 0x60] */ ST(0) = ST(0) / R_F64((u32)(r_esp+0x60u));
    /* 004c539e: fnstcw word ptr [esp + 0x30] */ W16((u32)(r_esp+0x30u), fcw);
    /* 004c53a2: movzx eax, word ptr [esp + 0x30] */ r_eax = (u32)R16((u32)(r_esp+0x30u));
    /* 004c53a7: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004c53ac: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 004c53b0: fldcw word ptr [esp + 0x38] */ fcw = R16((u32)(r_esp+0x38u));
    /* 004c53b4: fistp dword ptr [ebp + 0x60] */ W32((u32)(r_ebp+0x60u), (u32)fx_int32(ST(0))); FPOP();
    /* 004c53b7: fldcw word ptr [esp + 0x30] */ fcw = R16((u32)(r_esp+0x30u));
    /* 004c53bb: mov dword ptr [ebp + 0x878], 0x41700000 */ W32((u32)(r_ebp+0x878u), 0x41700000u);
    /* 004c53c5: mov dword ptr [ebp + 0x3c], 0xc32a0000 */ W32((u32)(r_ebp+0x3cu), 0xc32a0000u);
    /* 004c53cc: jmp 0x4c4e4c */ goto L_004c4e4c;
}

void f_004c53d8(void) /* sub_4C53D8 */
{
    FN_ENTER(0x004c53d8);
    /* 004c53d8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004c53d9: mov edi, ecx */ r_edi = r_ecx;
    /* 004c53db: mov ecx, edi */ r_ecx = r_edi;
    /* 004c53dd: push 0x40a00000 */ { u32 v = 0x40a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 004c53e2: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x4c53e7u); f_007aaa30();
    /* 004c53e7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004c53e9: je 0x4c5403 */ if (fZ) goto L_004c5403;
L_004c53eb:; BB(0x004c53eb);
    /* 004c53eb: add edi, 0x63c */ {  u32 a = r_edi; u32 b = 0x63cu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004c53f1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004c53f3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c53f4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c53f5: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004c53f6: push 0x405 */ { u32 v = 0x405u; r_esp -= 4; W32(r_esp, v); }
    /* 004c53fb: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4c5400u); f_00814298();
    /* 004c5400: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_004c5403:; BB(0x004c5403);
    /* 004c5403: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c5404: ret  */ FN_RET(0x004c53d8); r_esp += 4; return;
}

void f_004c5408(void) /* sub_4C5408 */
{
    FN_ENTER(0x004c5408);
    /* 004c5408: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004c5409: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004c540a: sub esp, 0xec */ {  u32 a = r_esp; u32 b = 0xecu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004c5410: mov esi, ecx */ r_esi = r_ecx;
    /* 004c5412: mov eax, dword ptr [esp + 0xf8] */ r_eax = R32((u32)(r_esp+0xf8u));
    /* 004c5419: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004c541c: ja 0x4c5b6c */ if ((!fC&&!fZ)) goto L_004c5b6c;
L_004c5422:; BB(0x004c5422);
    /* 004c5422: mov eax, dword ptr [eax*4 + 0x907b4c] */ r_eax = R32((u32)(r_eax*4+0x907b4cu));
    /* 004c5429: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_004c5b6c:; BB(0x004c5b6c);
    /* 004c5b6c: add esp, 0xec */ {  u32 a = r_esp; u32 b = 0xecu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c5b72: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c5b73: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c5b74: ret 4 */ FN_RET(0x004c5408); r_esp += 8; return;
}

void f_004c542b(void)
{
    FN_ENTER(0x004c542b);
    /* 004c542b: mov eax, dword ptr [esi + 0x860] */ r_eax = R32((u32)(r_esi+0x860u));
    /* 004c5431: cmp eax, 0x32 */ {  u32 a = r_eax; u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c5434: jl 0x4c5b6c */ if ((fS!=fO)) goto L_004c5b6c;
L_004c543a:; BB(0x004c543a);
    /* 004c543a: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004c543c: push 0x17 */ { u32 v = 0x17u; r_esp -= 4; W32(r_esp, v); }
    /* 004c543e: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 004c5440: mov ecx, esi */ r_ecx = r_esi;
    /* 004c5442: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4c5448u); call_ind(t); }
    /* 004c5448: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 004c544c: mov edi, dword ptr [esi + 0x67c] */ r_edi = R32((u32)(r_esi+0x67cu));
    /* 004c5452: mov ecx, dword ptr [esi + 0x694] */ r_ecx = R32((u32)(r_esi+0x694u));
    /* 004c5458: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 004c545d: movzx eax, word ptr [esi + 0x394] */ r_eax = (u32)R16((u32)(r_esi+0x394u));
    /* 004c5464: mov byte ptr [esp], 0xa8 */ W8((u32)(r_esp), 0xa8u);
    /* 004c5468: mov word ptr [esp + 6], di */ W16((u32)(r_esp+0x6u), (u16)r_edi);
    /* 004c546d: mov edx, 0x17 */ r_edx = 0x17u;
    /* 004c5472: mov byte ptr [esp + 1], 6 */ W8((u32)(r_esp+0x1u), 0x6u);
    /* 004c5477: mov word ptr [esp + 4], dx */ W16((u32)(r_esp+0x4u), (u16)r_edx);
    /* 004c547c: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004c5480: mov eax, dword ptr [esi + 0x690] */ r_eax = R32((u32)(r_esi+0x690u));
    /* 004c5486: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 004c548a: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 004c548e: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4c5493u); f_008587a5();
    /* 004c5493: mov dword ptr [esp + 0xc4], eax */ W32((u32)(r_esp+0xc4u), r_eax);
    /* 004c549a: fild dword ptr [esp + 0xc4] */ FPUSH((long double)(i32)R32((u32)(r_esp+0xc4u)));
    /* 004c54a1: fdiv dword ptr [0x908654] */ ST(0) = ST(0) / R_F32((u32)(0x908654u));
    /* 004c54a7: fmul dword ptr [0x908658] */ ST(0) = ST(0) * R_F32((u32)(0x908658u));
    /* 004c54ad: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 004c54b0: fnstcw word ptr [esp + 0xcc] */ W16((u32)(r_esp+0xccu), fcw);
    /* 004c54b7: movzx eax, word ptr [esp + 0xcc] */ r_eax = (u32)R16((u32)(r_esp+0xccu));
    /* 004c54bf: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004c54c4: mov dword ptr [esp + 0xd4], eax */ W32((u32)(r_esp+0xd4u), r_eax);
    /* 004c54cb: fldcw word ptr [esp + 0xd4] */ fcw = R16((u32)(r_esp+0xd4u));
    /* 004c54d2: fistp dword ptr [esp + 0xdc] */ W32((u32)(r_esp+0xdcu), (u32)fx_int32(ST(0))); FPOP();
    /* 004c54d9: fldcw word ptr [esp + 0xcc] */ fcw = R16((u32)(r_esp+0xccu));
    /* 004c54e0: mov eax, dword ptr [esp + 0xdc] */ r_eax = R32((u32)(r_esp+0xdcu));
    /* 004c54e7: mov byte ptr [esp + 0x14], al */ W8((u32)(r_esp+0x14u), (u8)r_eax);
    /* 004c54eb: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4c54f0u); f_008003e0();
    /* 004c54f0: add esp, 0xec */ {  u32 a = r_esp; u32 b = 0xecu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c54f6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c54f7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c54f8: ret 4 */ FN_RET(0x004c542b); r_esp += 8; return;
L_004c5b6c:; BB(0x004c5b6c);
    /* 004c5b6c: add esp, 0xec */ {  u32 a = r_esp; u32 b = 0xecu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c5b72: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c5b73: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c5b74: ret 4 */ FN_RET(0x004c542b); r_esp += 8; return;
}

void f_004c54fb(void)
{
    FN_ENTER(0x004c54fb);
    /* 004c54fb: call 0x4ce924 */ r_esp -= 4; W32(r_esp, 0x4c5500u); f_004ce924();
    /* 004c5500: jmp 0x4c5b6c */ goto L_004c5b6c;
L_004c5b6c:; BB(0x004c5b6c);
    /* 004c5b6c: add esp, 0xec */ {  u32 a = r_esp; u32 b = 0xecu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c5b72: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c5b73: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c5b74: ret 4 */ FN_RET(0x004c54fb); r_esp += 8; return;
}

void f_004c5505(void)
{
    FN_ENTER(0x004c5505);
    /* 004c5505: mov ecx, esi */ r_ecx = r_esi;
    /* 004c5507: call 0x51f894 */ r_esp -= 4; W32(r_esp, 0x4c550cu); f_0051f894();
    /* 004c550c: push 0x4f */ { u32 v = 0x4fu; r_esp -= 4; W32(r_esp, v); }
    /* 004c550e: call 0x6bb100 */ r_esp -= 4; W32(r_esp, 0x4c5513u); f_006bb100();
    /* 004c5513: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004c5514: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 004c5516: mov dword ptr [esi + 0x30], 0x12008 */ W32((u32)(r_esi+0x30u), 0x12008u);
    /* 004c551d: mov ecx, esi */ r_ecx = r_esi;
    /* 004c551f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004c5521: call dword ptr [eax + 0x130] */ { u32 t = R32((u32)(r_eax+0x130u)); r_esp -= 4; W32(r_esp, 0x4c5527u); call_ind(t); }
    /* 004c5527: call 0x717f38 */ r_esp -= 4; W32(r_esp, 0x4c552cu); f_00717f38();
    /* 004c552c: call 0x4d3250 */ r_esp -= 4; W32(r_esp, 0x4c5531u); f_004d3250();
    /* 004c5531: mov edx, dword ptr [esi + 0x8a4] */ r_edx = R32((u32)(r_esi+0x8a4u));
    /* 004c5537: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c5539: je 0x4c5552 */ if (fZ) goto L_004c5552;
L_004c553b:; BB(0x004c553b);
    /* 004c553b: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004c553f: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004c5544: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004c5548: mov dword ptr [esi + 0x8a4], 0 */ W32((u32)(r_esi+0x8a4u), 0x0u);
L_004c5552:; BB(0x004c5552);
    /* 004c5552: mov eax, dword ptr [esi + 0x75c] */ r_eax = R32((u32)(r_esi+0x75cu));
    /* 004c5558: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c555a: je 0x4c5b6c */ if (fZ) goto L_004c5b6c;
L_004c5560:; BB(0x004c5560);
    /* 004c5560: mov ecx, esi */ r_ecx = r_esi;
    /* 004c5562: call 0x4cc7f4 */ r_esp -= 4; W32(r_esp, 0x4c5567u); f_004cc7f4();
    /* 004c5567: add esp, 0xec */ {  u32 a = r_esp; u32 b = 0xecu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c556d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c556e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c556f: ret 4 */ FN_RET(0x004c5505); r_esp += 8; return;
L_004c5b6c:; BB(0x004c5b6c);
    /* 004c5b6c: add esp, 0xec */ {  u32 a = r_esp; u32 b = 0xecu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c5b72: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c5b73: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c5b74: ret 4 */ FN_RET(0x004c5505); r_esp += 8; return;
}

void f_004c5572(void)
{
    FN_ENTER(0x004c5572);
    /* 004c5572: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 004c5574: mov eax, 0x13 */ r_eax = 0x13u;
    /* 004c5579: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
    /* 004c5580: mov ecx, esi */ r_ecx = r_esi;
    /* 004c5582: call dword ptr [edx + 0x184] */ { u32 t = R32((u32)(r_edx+0x184u)); r_esp -= 4; W32(r_esp, 0x4c5588u); call_ind(t); }
    /* 004c5588: mov dword ptr [esi + 0x3ec], 0 */ W32((u32)(r_esi+0x3ecu), 0x0u);
    /* 004c5592: mov ecx, esi */ r_ecx = r_esi;
    /* 004c5594: call 0x4cb184 */ r_esp -= 4; W32(r_esp, 0x4c5599u); f_004cb184();
    /* 004c5599: mov eax, dword ptr [esi + 0x3c8] */ r_eax = R32((u32)(r_esi+0x3c8u));
    /* 004c559f: mov dword ptr [esi + 0x874], 0 */ W32((u32)(r_esi+0x874u), 0x0u);
    /* 004c55a9: or eax, 0x36 */ {  u32 a = r_eax; u32 b = 0x36u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004c55ac: mov dword ptr [esi + 0x3c8], eax */ W32((u32)(r_esi+0x3c8u), r_eax);
    /* 004c55b2: push 0x9089cc */ { u32 v = 0x9089ccu; r_esp -= 4; W32(r_esp, v); }
    /* 004c55b7: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004c55b9: mov dword ptr [esi + 0x85c], edx */ W32((u32)(r_esi+0x85cu), r_edx);
    /* 004c55bf: mov dword ptr [esi + 0x860], edx */ W32((u32)(r_esi+0x860u), r_edx);
    /* 004c55c5: mov dword ptr [esi + 0x8a4], edx */ W32((u32)(r_esi+0x8a4u), r_edx);
    /* 004c55cb: call 0x814f0c */ r_esp -= 4; W32(r_esp, 0x4c55d0u); f_00814f0c();
    /* 004c55d0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004c55d1: call 0x717f74 */ r_esp -= 4; W32(r_esp, 0x4c55d6u); f_00717f74();
    /* 004c55d6: mov byte ptr [esp + 0x18], 2 */ W8((u32)(r_esp+0x18u), 0x2u);
    /* 004c55db: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004c55dd: mov byte ptr [esp + 0x19], al */ W8((u32)(r_esp+0x19u), (u8)r_eax);
    /* 004c55e1: mov dword ptr [esp + 0x1c], 0 */ W32((u32)(r_esp+0x1cu), 0x0u);
    /* 004c55e9: mov word ptr [esp + 0x1a], ax */ W16((u32)(r_esp+0x1au), (u16)r_eax);
    /* 004c55ee: mov dword ptr [esp + 0x20], 0x3f000000 */ W32((u32)(r_esp+0x20u), 0x3f000000u);
    /* 004c55f6: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 004c55f8: call 0x4d31f4 */ r_esp -= 4; W32(r_esp, 0x4c55fdu); f_004d31f4();
    /* 004c55fd: lea eax, [esp + 0x1c] */ r_eax = (u32)(r_esp+0x1cu);
    /* 004c5601: push 0x31c7 */ { u32 v = 0x31c7u; r_esp -= 4; W32(r_esp, v); }
    /* 004c5606: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c5607: call 0x4d6770 */ r_esp -= 4; W32(r_esp, 0x4c560cu); f_004d6770();
    /* 004c560c: lea eax, [esi + 0x38] */ r_eax = (u32)(r_esi+0x38u);
    /* 004c560f: add esi, 0x5c */ {  u32 a = r_esi; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004c5612: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004c5613: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c5614: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c5615: call 0x4d681c */ r_esp -= 4; W32(r_esp, 0x4c561au); f_004d681c();
    /* 004c561a: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c561d: add esp, 0xec */ {  u32 a = r_esp; u32 b = 0xecu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c5623: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c5624: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c5625: ret 4 */ FN_RET(0x004c5572); r_esp += 8; return;
}

void f_004c5628(void)
{
    FN_ENTER(0x004c5628);
    /* 004c5628: mov eax, dword ptr [esi + 0x860] */ r_eax = R32((u32)(r_esi+0x860u));
    /* 004c562e: cmp eax, 0x32 */ {  u32 a = r_eax; u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c5631: jl 0x4c5b6c */ if ((fS!=fO)) goto L_004c5b6c;
L_004c5637:; BB(0x004c5637);
    /* 004c5637: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004c5639: push 0x17 */ { u32 v = 0x17u; r_esp -= 4; W32(r_esp, v); }
    /* 004c563b: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 004c563d: mov ecx, esi */ r_ecx = r_esi;
    /* 004c563f: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4c5645u); call_ind(t); }
    /* 004c5645: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 004c5649: mov edi, dword ptr [esi + 0x67c] */ r_edi = R32((u32)(r_esi+0x67cu));
    /* 004c564f: mov ecx, dword ptr [esi + 0x694] */ r_ecx = R32((u32)(r_esi+0x694u));
    /* 004c5655: mov word ptr [esp + 0x26], ax */ W16((u32)(r_esp+0x26u), (u16)r_eax);
    /* 004c565a: movzx eax, word ptr [esi + 0x394] */ r_eax = (u32)R16((u32)(r_esi+0x394u));
    /* 004c5661: mov byte ptr [esp + 0x24], 0xa8 */ W8((u32)(r_esp+0x24u), 0xa8u);
    /* 004c5666: mov word ptr [esp + 0x2a], di */ W16((u32)(r_esp+0x2au), (u16)r_edi);
    /* 004c566b: mov edx, 0x17 */ r_edx = 0x17u;
    /* 004c5670: mov byte ptr [esp + 0x25], 6 */ W8((u32)(r_esp+0x25u), 0x6u);
    /* 004c5675: mov word ptr [esp + 0x28], dx */ W16((u32)(r_esp+0x28u), (u16)r_edx);
    /* 004c567a: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 004c567e: mov eax, dword ptr [esi + 0x690] */ r_eax = R32((u32)(r_esi+0x690u));
    /* 004c5684: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 004c5688: mov dword ptr [esp + 0x34], ecx */ W32((u32)(r_esp+0x34u), r_ecx);
    /* 004c568c: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4c5691u); f_008587a5();
    /* 004c5691: mov dword ptr [esp + 0xe4], eax */ W32((u32)(r_esp+0xe4u), r_eax);
    /* 004c5698: fild dword ptr [esp + 0xe4] */ FPUSH((long double)(i32)R32((u32)(r_esp+0xe4u)));
    /* 004c569f: fdiv dword ptr [0x908654] */ ST(0) = ST(0) / R_F32((u32)(0x908654u));
    /* 004c56a5: fmul dword ptr [0x908658] */ ST(0) = ST(0) * R_F32((u32)(0x908658u));
    /* 004c56ab: lea ecx, [esp + 0x24] */ r_ecx = (u32)(r_esp+0x24u);
    /* 004c56af: fnstcw word ptr [esp + 0xcc] */ W16((u32)(r_esp+0xccu), fcw);
    /* 004c56b6: movzx eax, word ptr [esp + 0xcc] */ r_eax = (u32)R16((u32)(r_esp+0xccu));
    /* 004c56be: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004c56c3: mov dword ptr [esp + 0xd4], eax */ W32((u32)(r_esp+0xd4u), r_eax);
    /* 004c56ca: fldcw word ptr [esp + 0xd4] */ fcw = R16((u32)(r_esp+0xd4u));
    /* 004c56d1: fistp dword ptr [esp + 0xdc] */ W32((u32)(r_esp+0xdcu), (u32)fx_int32(ST(0))); FPOP();
    /* 004c56d8: fldcw word ptr [esp + 0xcc] */ fcw = R16((u32)(r_esp+0xccu));
    /* 004c56df: mov eax, dword ptr [esp + 0xdc] */ r_eax = R32((u32)(r_esp+0xdcu));
    /* 004c56e6: mov byte ptr [esp + 0x38], al */ W8((u32)(r_esp+0x38u), (u8)r_eax);
    /* 004c56ea: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4c56efu); f_008003e0();
    /* 004c56ef: add esp, 0xec */ {  u32 a = r_esp; u32 b = 0xecu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c56f5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c56f6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c56f7: ret 4 */ FN_RET(0x004c5628); r_esp += 8; return;
L_004c5b6c:; BB(0x004c5b6c);
    /* 004c5b6c: add esp, 0xec */ {  u32 a = r_esp; u32 b = 0xecu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c5b72: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c5b73: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c5b74: ret 4 */ FN_RET(0x004c5628); r_esp += 8; return;
}

void f_004c56fa(void)
{
    FN_ENTER(0x004c56fa);
    /* 004c56fa: mov ecx, esi */ r_ecx = r_esi;
    /* 004c56fc: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x4c5701u); f_007aa094();
    /* 004c5701: mov eax, dword ptr [esi + 0x85c] */ r_eax = R32((u32)(r_esi+0x85cu));
    /* 004c5707: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c5709: jne 0x4c5b49 */ if (!fZ) goto L_004c5b49;
L_004c570f:; BB(0x004c570f);
    /* 004c570f: push 0x42700000 */ { u32 v = 0x42700000u; r_esp -= 4; W32(r_esp, v); }
    /* 004c5714: mov ecx, esi */ r_ecx = r_esi;
    /* 004c5716: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x4c571bu); f_007aaa30();
    /* 004c571b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c571d: jne 0x4c572f */ if (!fZ) goto L_004c572f;
L_004c571f:; BB(0x004c571f);
    /* 004c571f: push 0x42c40000 */ { u32 v = 0x42c40000u; r_esp -= 4; W32(r_esp, v); }
    /* 004c5724: mov ecx, esi */ r_ecx = r_esi;
    /* 004c5726: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x4c572bu); f_007aaa30();
    /* 004c572b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c572d: je 0x4c574d */ if (fZ) goto L_004c574d;
L_004c572f:; BB(0x004c572f);
    /* 004c572f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004c5731: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c5732: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c5733: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c5734: push 0x408 */ { u32 v = 0x408u; r_esp -= 4; W32(r_esp, v); }
    /* 004c5739: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4c573eu); f_00814298();
    /* 004c573e: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 004c5740: push 0xa0 */ { u32 v = 0xa0u; r_esp -= 4; W32(r_esp, v); }
    /* 004c5745: call 0x6ff5f8 */ r_esp -= 4; W32(r_esp, 0x4c574au); f_006ff5f8();
    /* 004c574a: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004c574d:; BB(0x004c574d);
    /* 004c574d: fld dword ptr [esi + 0xc0] */ FPUSH(R_F32((u32)(r_esi+0xc0u)));
    /* 004c5753: fcom dword ptr [0x908644] */ fx_compare(ST(0), R_F32((u32)(0x908644u))); 
    /* 004c5759: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004c575b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004c575c: jb 0x4c57b4 */ if (fC) goto L_004c57b4;
L_004c575e:; BB(0x004c575e);
    /* 004c575e: fcom dword ptr [0x908640] */ fx_compare(ST(0), R_F32((u32)(0x908640u))); 
    /* 004c5764: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004c5766: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004c5767: jae 0x4c57b4 */ if (!fC) goto L_004c57b4;
L_004c5769:; BB(0x004c5769);
    /* 004c5769: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004c576b: lea edx, [esp + 0x3c] */ r_edx = (u32)(r_esp+0x3cu);
    /* 004c576f: lea eax, [esp + 0x44] */ r_eax = (u32)(r_esp+0x44u);
    /* 004c5773: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c5774: lea edi, [esi + 0x424] */ r_edi = (u32)(r_esi+0x424u);
    /* 004c577a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c577b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004c577c: call 0x7a8d98 */ r_esp -= 4; W32(r_esp, 0x4c5781u); f_007a8d98();
    /* 004c5781: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c5784: mov ecx, dword ptr [esi + 0x8a4] */ r_ecx = R32((u32)(r_esi+0x8a4u));
    /* 004c578a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c578c: je 0x4c5b77 */ if (fZ) goto L_004c5b77;
L_004c5792:; BB(0x004c5792);
    /* 004c5792: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c5794: je 0x4c57d7 */ if (fZ) goto L_004c57d7;
L_004c5796:; BB(0x004c5796);
    /* 004c5796: lea edx, [esi + 0x430] */ r_edx = (u32)(r_esi+0x430u);
    /* 004c579c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c579d: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x4c57a2u); f_00508db8();
    /* 004c57a2: lea eax, [esp + 0x3c] */ r_eax = (u32)(r_esp+0x3cu);
    /* 004c57a6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c57a7: mov ecx, dword ptr [esi + 0x8a4] */ r_ecx = R32((u32)(r_esi+0x8a4u));
    /* 004c57ad: call 0x508dd0 */ r_esp -= 4; W32(r_esp, 0x4c57b2u); f_00508dd0();
    /* 004c57b2: jmp 0x4c57d7 */ goto L_004c57d7;
L_004c57b4:; BB(0x004c57b4);
    /* 004c57b4: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004c57b6: mov edx, dword ptr [esi + 0x8a4] */ r_edx = R32((u32)(r_esi+0x8a4u));
    /* 004c57bc: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c57be: je 0x4c57d7 */ if (fZ) goto L_004c57d7;
L_004c57c0:; BB(0x004c57c0);
    /* 004c57c0: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004c57c4: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004c57c9: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004c57cd: mov dword ptr [esi + 0x8a4], 0 */ W32((u32)(r_esi+0x8a4u), 0x0u);
L_004c57d7:; BB(0x004c57d7);
    /* 004c57d7: push 0x42640000 */ { u32 v = 0x42640000u; r_esp -= 4; W32(r_esp, v); }
    /* 004c57dc: mov ecx, esi */ r_ecx = r_esi;
    /* 004c57de: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x4c57e3u); f_007aaa30();
    /* 004c57e3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c57e5: je 0x4c58bb */ if (fZ) goto L_004c58bb;
L_004c57eb:; BB(0x004c57eb);
    /* 004c57eb: mov eax, dword ptr [0x9ac4d0] */ r_eax = R32((u32)(0x9ac4d0u));
    /* 004c57f0: mov edx, dword ptr [0x9ac4d4] */ r_edx = R32((u32)(0x9ac4d4u));
    /* 004c57f6: mov edi, dword ptr [0x9ac4dc] */ r_edi = R32((u32)(0x9ac4dcu));
    /* 004c57fc: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 004c5800: mov eax, dword ptr [0x9ac4e0] */ r_eax = R32((u32)(0x9ac4e0u));
    /* 004c5805: mov dword ptr [esp + 0x50], 0x41400000 */ W32((u32)(r_esp+0x50u), 0x41400000u);
    /* 004c580d: mov dword ptr [esp + 0x4c], edx */ W32((u32)(r_esp+0x4cu), r_edx);
    /* 004c5811: mov dword ptr [esp + 0x5c], 0xc20c0000 */ W32((u32)(r_esp+0x5cu), 0xc20c0000u);
    /* 004c5819: mov dword ptr [esp + 0x54], edi */ W32((u32)(r_esp+0x54u), r_edi);
    /* 004c581d: mov dword ptr [esp + 0x60], 0 */ W32((u32)(r_esp+0x60u), 0x0u);
    /* 004c5825: mov dword ptr [esp + 0x58], eax */ W32((u32)(r_esp+0x58u), r_eax);
    /* 004c5829: mov dword ptr [esp + 0x64], 0x41200000 */ W32((u32)(r_esp+0x64u), 0x41200000u);
    /* 004c5831: lea edx, [esp + 0x5c] */ r_edx = (u32)(r_esp+0x5cu);
    /* 004c5835: lea eax, [esp + 0x64] */ r_eax = (u32)(r_esp+0x64u);
    /* 004c5839: push dword ptr [esi + 0x60] */ { u32 v = R32((u32)(r_esi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 004c583c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c583d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c583e: call 0x782b64 */ r_esp -= 4; W32(r_esp, 0x4c5843u); f_00782b64();
    /* 004c5843: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c5846: lea ecx, [esp + 0x5c] */ r_ecx = (u32)(r_esp+0x5cu);
    /* 004c584a: lea edi, [esi + 0x38] */ r_edi = (u32)(r_esi+0x38u);
    /* 004c584d: mov edx, edi */ r_edx = r_edi;
    /* 004c584f: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x4c5854u); f_0082ebac();
    /* 004c5854: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004c5856: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c5857: push dword ptr [0xa48520] */ { u32 v = R32((u32)(0xa48520u)); r_esp -= 4; W32(r_esp, v); }
    /* 004c585d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c585e: mov ecx, esi */ r_ecx = r_esi;
    /* 004c5860: call 0x520c70 */ r_esp -= 4; W32(r_esp, 0x4c5865u); f_00520c70();
    /* 004c5865: lea edx, [esp + 0x5c] */ r_edx = (u32)(r_esp+0x5cu);
    /* 004c5869: lea eax, [esp + 0x48] */ r_eax = (u32)(r_esp+0x48u);
    /* 004c586d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004c586f: mov ecx, esi */ r_ecx = r_esi;
    /* 004c5871: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c5872: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c5873: call 0x51fdf8 */ r_esp -= 4; W32(r_esp, 0x4c5878u); f_0051fdf8();
    /* 004c5878: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004c587a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c587b: push dword ptr [0xa48510] */ { u32 v = R32((u32)(0xa48510u)); r_esp -= 4; W32(r_esp, v); }
    /* 004c5881: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c5882: mov ecx, esi */ r_ecx = r_esi;
    /* 004c5884: call 0x520c70 */ r_esp -= 4; W32(r_esp, 0x4c5889u); f_00520c70();
    /* 004c5889: lea edx, [esp + 0x5c] */ r_edx = (u32)(r_esp+0x5cu);
    /* 004c588d: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004c588f: mov eax, dword ptr [esi + 0x770] */ r_eax = R32((u32)(r_esi+0x770u));
    /* 004c5895: push dword ptr [eax + 8] */ { u32 v = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004c5898: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c5899: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x4c589eu); f_0050b7a4();
    /* 004c589e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c58a1: mov eax, dword ptr [esi + 0x770] */ r_eax = R32((u32)(r_esi+0x770u));
    /* 004c58a7: mov eax, dword ptr [eax + 0xc] */ r_eax = R32((u32)(r_eax+0xcu));
    /* 004c58aa: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c58ad: je 0x4c58bb */ if (fZ) goto L_004c58bb;
L_004c58af:; BB(0x004c58af);
    /* 004c58af: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004c58b1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c58b2: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004c58b3: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x4c58b8u); f_0050b7a4();
    /* 004c58b8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004c58bb:; BB(0x004c58bb);
    /* 004c58bb: push 0x42b00000 */ { u32 v = 0x42b00000u; r_esp -= 4; W32(r_esp, v); }
    /* 004c58c0: mov ecx, esi */ r_ecx = r_esi;
    /* 004c58c2: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x4c58c7u); f_007aaa30();
    /* 004c58c7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c58c9: je 0x4c599f */ if (fZ) goto L_004c599f;
L_004c58cf:; BB(0x004c58cf);
    /* 004c58cf: mov eax, dword ptr [0x9ac4d0] */ r_eax = R32((u32)(0x9ac4d0u));
    /* 004c58d4: mov edx, dword ptr [0x9ac4d4] */ r_edx = R32((u32)(0x9ac4d4u));
    /* 004c58da: mov edi, dword ptr [0x9ac4dc] */ r_edi = R32((u32)(0x9ac4dcu));
    /* 004c58e0: mov dword ptr [esp + 0x68], eax */ W32((u32)(r_esp+0x68u), r_eax);
    /* 004c58e4: mov eax, dword ptr [0x9ac4e0] */ r_eax = R32((u32)(0x9ac4e0u));
    /* 004c58e9: mov dword ptr [esp + 0x70], 0x41c80000 */ W32((u32)(r_esp+0x70u), 0x41c80000u);
    /* 004c58f1: mov dword ptr [esp + 0x6c], edx */ W32((u32)(r_esp+0x6cu), r_edx);
    /* 004c58f5: mov dword ptr [esp + 0x5c], 0xc2700000 */ W32((u32)(r_esp+0x5cu), 0xc2700000u);
    /* 004c58fd: mov dword ptr [esp + 0x74], edi */ W32((u32)(r_esp+0x74u), r_edi);
    /* 004c5901: mov dword ptr [esp + 0x60], 0 */ W32((u32)(r_esp+0x60u), 0x0u);
    /* 004c5909: mov dword ptr [esp + 0x78], eax */ W32((u32)(r_esp+0x78u), r_eax);
    /* 004c590d: mov dword ptr [esp + 0x64], 0xc1a00000 */ W32((u32)(r_esp+0x64u), 0xc1a00000u);
    /* 004c5915: lea edx, [esp + 0x5c] */ r_edx = (u32)(r_esp+0x5cu);
    /* 004c5919: lea eax, [esp + 0x64] */ r_eax = (u32)(r_esp+0x64u);
    /* 004c591d: push dword ptr [esi + 0x60] */ { u32 v = R32((u32)(r_esi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 004c5920: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c5921: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c5922: call 0x782b64 */ r_esp -= 4; W32(r_esp, 0x4c5927u); f_00782b64();
    /* 004c5927: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c592a: lea ecx, [esp + 0x5c] */ r_ecx = (u32)(r_esp+0x5cu);
    /* 004c592e: lea edi, [esi + 0x38] */ r_edi = (u32)(r_esi+0x38u);
    /* 004c5931: mov edx, edi */ r_edx = r_edi;
    /* 004c5933: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x4c5938u); f_0082ebac();
    /* 004c5938: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004c593a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c593b: push dword ptr [0xa48520] */ { u32 v = R32((u32)(0xa48520u)); r_esp -= 4; W32(r_esp, v); }
    /* 004c5941: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c5942: mov ecx, esi */ r_ecx = r_esi;
    /* 004c5944: call 0x520c70 */ r_esp -= 4; W32(r_esp, 0x4c5949u); f_00520c70();
    /* 004c5949: lea edx, [esp + 0x5c] */ r_edx = (u32)(r_esp+0x5cu);
    /* 004c594d: lea eax, [esp + 0x68] */ r_eax = (u32)(r_esp+0x68u);
    /* 004c5951: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004c5953: mov ecx, esi */ r_ecx = r_esi;
    /* 004c5955: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c5956: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c5957: call 0x51fdf8 */ r_esp -= 4; W32(r_esp, 0x4c595cu); f_0051fdf8();
    /* 004c595c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004c595e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c595f: push dword ptr [0xa48510] */ { u32 v = R32((u32)(0xa48510u)); r_esp -= 4; W32(r_esp, v); }
    /* 004c5965: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c5966: mov ecx, esi */ r_ecx = r_esi;
    /* 004c5968: call 0x520c70 */ r_esp -= 4; W32(r_esp, 0x4c596du); f_00520c70();
    /* 004c596d: lea edx, [esp + 0x5c] */ r_edx = (u32)(r_esp+0x5cu);
    /* 004c5971: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004c5973: mov eax, dword ptr [esi + 0x770] */ r_eax = R32((u32)(r_esi+0x770u));
    /* 004c5979: push dword ptr [eax + 8] */ { u32 v = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004c597c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c597d: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x4c5982u); f_0050b7a4();
    /* 004c5982: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c5985: mov eax, dword ptr [esi + 0x770] */ r_eax = R32((u32)(r_esi+0x770u));
    /* 004c598b: mov eax, dword ptr [eax + 0xc] */ r_eax = R32((u32)(r_eax+0xcu));
    /* 004c598e: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c5991: je 0x4c599f */ if (fZ) goto L_004c599f;
L_004c5993:; BB(0x004c5993);
    /* 004c5993: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004c5995: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c5996: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004c5997: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x4c599cu); f_0050b7a4();
    /* 004c599c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004c599f:; BB(0x004c599f);
    /* 004c599f: push 0x42c20000 */ { u32 v = 0x42c20000u; r_esp -= 4; W32(r_esp, v); }
    /* 004c59a4: mov ecx, esi */ r_ecx = r_esi;
    /* 004c59a6: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x4c59abu); f_007aaa30();
    /* 004c59ab: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c59ad: je 0x4c5b20 */ if (fZ) goto L_004c5b20;
L_004c59b3:; BB(0x004c59b3);
    /* 004c59b3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004c59b5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c59b6: push dword ptr [0xa48520] */ { u32 v = R32((u32)(0xa48520u)); r_esp -= 4; W32(r_esp, v); }
    /* 004c59bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c59bd: mov ecx, esi */ r_ecx = r_esi;
    /* 004c59bf: call 0x520c70 */ r_esp -= 4; W32(r_esp, 0x4c59c4u); f_00520c70();
    /* 004c59c4: mov edx, dword ptr [esi + 0x688] */ r_edx = R32((u32)(r_esi+0x688u));
    /* 004c59ca: mov edi, dword ptr [edx + 0xc] */ r_edi = R32((u32)(r_edx+0xcu));
    /* 004c59cd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004c59cf: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004c59d1: jle 0x4c59e3 */ if ((fZ||fS!=fO)) goto L_004c59e3;
L_004c59d3:; BB(0x004c59d3);
    /* 004c59d3: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 004c59d5: mov edi, dword ptr [edx + 4] */ r_edi = R32((u32)(r_edx+0x4u));
    /* 004c59d8: mov dword ptr [ecx + eax*4], edi */ W32((u32)(r_ecx+r_eax*4), r_edi);
    /* 004c59db: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004c59de: cmp eax, dword ptr [edx + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0xcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c59e1: jl 0x4c59d3 */ if ((fS!=fO)) goto L_004c59d3;
L_004c59e3:; BB(0x004c59e3);
    /* 004c59e3: mov dword ptr [edx + 8], 0 */ W32((u32)(r_edx+0x8u), 0x0u);
    /* 004c59ea: mov eax, dword ptr [0x9ac4d0] */ r_eax = R32((u32)(0x9ac4d0u));
    /* 004c59ef: mov edx, dword ptr [0x9ac4d4] */ r_edx = R32((u32)(0x9ac4d4u));
    /* 004c59f5: mov edi, dword ptr [0x9ac4dc] */ r_edi = R32((u32)(0x9ac4dcu));
    /* 004c59fb: mov dword ptr [esp + 0x84], 0x41700000 */ W32((u32)(r_esp+0x84u), 0x41700000u);
    /* 004c5a06: mov ecx, esi */ r_ecx = r_esi;
    /* 004c5a08: mov dword ptr [esp + 0x7c], eax */ W32((u32)(r_esp+0x7cu), r_eax);
    /* 004c5a0c: mov eax, dword ptr [0x9ac4e0] */ r_eax = R32((u32)(0x9ac4e0u));
    /* 004c5a11: mov dword ptr [esp + 0x80], edx */ W32((u32)(r_esp+0x80u), r_edx);
    /* 004c5a18: mov dword ptr [esp + 0x88], edi */ W32((u32)(r_esp+0x88u), r_edi);
    /* 004c5a1f: mov dword ptr [esp + 0x8c], eax */ W32((u32)(r_esp+0x8cu), r_eax);
    /* 004c5a26: lea edx, [esp + 0x90] */ r_edx = (u32)(r_esp+0x90u);
    /* 004c5a2d: mov eax, dword ptr [esi + 0x4cc] */ r_eax = R32((u32)(r_esi+0x4ccu));
    /* 004c5a33: mov dword ptr [esp + 0x90], eax */ W32((u32)(r_esp+0x90u), r_eax);
    /* 004c5a3a: mov eax, dword ptr [esi + 0x4d0] */ r_eax = R32((u32)(r_esi+0x4d0u));
    /* 004c5a40: mov dword ptr [esp + 0x94], eax */ W32((u32)(r_esp+0x94u), r_eax);
    /* 004c5a47: mov eax, dword ptr [esi + 0x4d4] */ r_eax = R32((u32)(r_esi+0x4d4u));
    /* 004c5a4d: mov dword ptr [esp + 0x98], eax */ W32((u32)(r_esp+0x98u), r_eax);
    /* 004c5a54: lea eax, [esp + 0x7c] */ r_eax = (u32)(r_esp+0x7cu);
    /* 004c5a58: push dword ptr [esi + 0x688] */ { u32 v = R32((u32)(r_esi+0x688u)); r_esp -= 4; W32(r_esp, v); }
    /* 004c5a5e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c5a5f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c5a60: call 0x51fdf8 */ r_esp -= 4; W32(r_esp, 0x4c5a65u); f_0051fdf8();
    /* 004c5a65: mov dword ptr [esp + 0x84], 0x41400000 */ W32((u32)(r_esp+0x84u), 0x41400000u);
    /* 004c5a70: lea eax, [esi + 0x490] */ r_eax = (u32)(r_esi+0x490u);
    /* 004c5a76: lea edx, [esi + 0x4a8] */ r_edx = (u32)(r_esi+0x4a8u);
    /* 004c5a7c: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 004c5a7e: mov dword ptr [esp + 0x9c], eax */ W32((u32)(r_esp+0x9cu), r_eax);
    /* 004c5a85: mov dword ptr [esp + 0xa0], edx */ W32((u32)(r_esp+0xa0u), r_edx);
L_004c5a8c:; BB(0x004c5a8c);
    /* 004c5a8c: lea eax, [esp + 0x7c] */ r_eax = (u32)(r_esp+0x7cu);
    /* 004c5a90: push dword ptr [esi + 0x688] */ { u32 v = R32((u32)(r_esi+0x688u)); r_esp -= 4; W32(r_esp, v); }
    /* 004c5a96: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c5a97: mov ecx, esi */ r_ecx = r_esi;
    /* 004c5a99: push dword ptr [esp + edi*4 + 0xa4] */ { u32 v = R32((u32)(r_esp+r_edi*4+0xa4u)); r_esp -= 4; W32(r_esp, v); }
    /* 004c5aa0: call 0x51fdf8 */ r_esp -= 4; W32(r_esp, 0x4c5aa5u); f_0051fdf8();
    /* 004c5aa5: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004c5aa8: cmp edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c5aab: jl 0x4c5a8c */ if ((fS!=fO)) goto L_004c5a8c;
L_004c5aad:; BB(0x004c5aad);
    /* 004c5aad: mov dword ptr [esp + 0x84], 0x41300000 */ W32((u32)(r_esp+0x84u), 0x41300000u);
    /* 004c5ab8: lea eax, [esi + 0x4e4] */ r_eax = (u32)(r_esi+0x4e4u);
    /* 004c5abe: lea edx, [esi + 0x4f0] */ r_edx = (u32)(r_esi+0x4f0u);
    /* 004c5ac4: lea edi, [esi + 0x4fc] */ r_edi = (u32)(r_esi+0x4fcu);
    /* 004c5aca: mov dword ptr [esp + 0x9c], eax */ W32((u32)(r_esp+0x9cu), r_eax);
    /* 004c5ad1: mov dword ptr [esp + 0xa0], edx */ W32((u32)(r_esp+0xa0u), r_edx);
    /* 004c5ad8: mov dword ptr [esp + 0xa4], edi */ W32((u32)(r_esp+0xa4u), r_edi);
    /* 004c5adf: lea eax, [esi + 0x508] */ r_eax = (u32)(r_esi+0x508u);
    /* 004c5ae5: mov dword ptr [esp + 0xa8], eax */ W32((u32)(r_esp+0xa8u), r_eax);
    /* 004c5aec: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_004c5aee:; BB(0x004c5aee);
    /* 004c5aee: lea eax, [esp + 0x7c] */ r_eax = (u32)(r_esp+0x7cu);
    /* 004c5af2: push dword ptr [esi + 0x688] */ { u32 v = R32((u32)(r_esi+0x688u)); r_esp -= 4; W32(r_esp, v); }
    /* 004c5af8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c5af9: mov ecx, esi */ r_ecx = r_esi;
    /* 004c5afb: push dword ptr [esp + edi*4 + 0xa4] */ { u32 v = R32((u32)(r_esp+r_edi*4+0xa4u)); r_esp -= 4; W32(r_esp, v); }
    /* 004c5b02: call 0x51fdf8 */ r_esp -= 4; W32(r_esp, 0x4c5b07u); f_0051fdf8();
    /* 004c5b07: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004c5b0a: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c5b0d: jl 0x4c5aee */ if ((fS!=fO)) goto L_004c5aee;
L_004c5b0f:; BB(0x004c5b0f);
    /* 004c5b0f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004c5b11: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c5b12: push dword ptr [0xa48510] */ { u32 v = R32((u32)(0xa48510u)); r_esp -= 4; W32(r_esp, v); }
    /* 004c5b18: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c5b19: mov ecx, esi */ r_ecx = r_esi;
    /* 004c5b1b: call 0x520c70 */ r_esp -= 4; W32(r_esp, 0x4c5b20u); f_00520c70();
L_004c5b20:; BB(0x004c5b20);
    /* 004c5b20: mov eax, dword ptr [esi + 0xb0] */ r_eax = R32((u32)(r_esi+0xb0u));
    /* 004c5b26: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004c5b28: je 0x4c5b6c */ if (fZ) goto L_004c5b6c;
L_004c5b2a:; BB(0x004c5b2a);
    /* 004c5b2a: mov dword ptr [esi + 0x85c], 1 */ W32((u32)(r_esi+0x85cu), 0x1u);
    /* 004c5b34: mov dword ptr [esi + 0x860], 0 */ W32((u32)(r_esi+0x860u), 0x0u);
    /* 004c5b3e: add esp, 0xec */ {  u32 a = r_esp; u32 b = 0xecu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c5b44: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c5b45: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c5b46: ret 4 */ FN_RET(0x004c56fa); r_esp += 8; return;
L_004c5b49:; BB(0x004c5b49);
    /* 004c5b49: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c5b4c: jne 0x4c5b6c */ if (!fZ) goto L_004c5b6c;
L_004c5b4e:; BB(0x004c5b4e);
    /* 004c5b4e: mov eax, dword ptr [esi + 0x860] */ r_eax = R32((u32)(r_esi+0x860u));
    /* 004c5b54: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004c5b57: mov dword ptr [esi + 0x860], eax */ W32((u32)(r_esi+0x860u), r_eax);
    /* 004c5b5d: cmp eax, 0x32 */ {  u32 a = r_eax; u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c5b60: jl 0x4c5b6c */ if ((fS!=fO)) goto L_004c5b6c;
L_004c5b62:; BB(0x004c5b62);
    /* 004c5b62: call 0x717f38 */ r_esp -= 4; W32(r_esp, 0x4c5b67u); f_00717f38();
    /* 004c5b67: call 0x4d3250 */ r_esp -= 4; W32(r_esp, 0x4c5b6cu); f_004d3250();
L_004c5b6c:; BB(0x004c5b6c);
    /* 004c5b6c: add esp, 0xec */ {  u32 a = r_esp; u32 b = 0xecu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c5b72: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c5b73: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c5b74: ret 4 */ FN_RET(0x004c56fa); r_esp += 8; return;
L_004c5b77:; BB(0x004c5b77);
    /* 004c5b77: lea edx, [esp + 0x3c] */ r_edx = (u32)(r_esp+0x3cu);
    /* 004c5b7b: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004c5b7d: mov eax, dword ptr [esi + 0x770] */ r_eax = R32((u32)(r_esi+0x770u));
    /* 004c5b83: lea edi, [esi + 0x418] */ r_edi = (u32)(r_esi+0x418u);
    /* 004c5b89: push dword ptr [eax + 0x1c] */ { u32 v = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004c5b8c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c5b8d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004c5b8e: call 0x509dc4 */ r_esp -= 4; W32(r_esp, 0x4c5b93u); f_00509dc4();
    /* 004c5b93: mov ecx, eax */ r_ecx = r_eax;
    /* 004c5b95: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c5b98: mov dword ptr [esi + 0x8a4], ecx */ W32((u32)(r_esi+0x8a4u), r_ecx);
    /* 004c5b9e: jmp 0x4c5792 */ goto L_004c5792;
}

void f_004c574f(void)
{
    FN_ENTER(0x004c574f);
    /* 004c574f: rol byte ptr [eax], 0 */ { u32 ad = (u32)(r_eax); u32 c = (0u) & 31; u32 a = R8(ad); u32 r = a; if (c) { { u32 k = c % 8; r = k ? (((a << k) | (a >> (8 - k))) & 0xffu) : a; } W8(ad, r);  } }
    /* 004c5752: add al, bl */ {  u32 a = (u8)r_eax; u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fC = (r < a); }
    /* 004c5754: adc eax, 0x908644 */ { u32 c = fC; u32 a = r_eax; u32 b = 0x908644u; u32 r = (a + b + c) & 0xffffffffu; r_eax = r;  }
    /* 004c5759: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004c575b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004c575c: jb 0x4c57b4 */ if (fC) goto L_004c57b4;
L_004c575e:; BB(0x004c575e);
    /* 004c575e: fcom dword ptr [0x908640] */ fx_compare(ST(0), R_F32((u32)(0x908640u))); 
    /* 004c5764: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004c5766: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004c5767: jae 0x4c57b4 */ if (!fC) goto L_004c57b4;
L_004c5769:; BB(0x004c5769);
    /* 004c5769: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004c576b: lea edx, [esp + 0x3c] */ r_edx = (u32)(r_esp+0x3cu);
    /* 004c576f: lea eax, [esp + 0x44] */ r_eax = (u32)(r_esp+0x44u);
    /* 004c5773: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c5774: lea edi, [esi + 0x424] */ r_edi = (u32)(r_esi+0x424u);
    /* 004c577a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c577b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004c577c: call 0x7a8d98 */ r_esp -= 4; W32(r_esp, 0x4c5781u); f_007a8d98();
    /* 004c5781: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c5784: mov ecx, dword ptr [esi + 0x8a4] */ r_ecx = R32((u32)(r_esi+0x8a4u));
    /* 004c578a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c578c: je 0x4c5b77 */ if (fZ) goto L_004c5b77;
L_004c5792:; BB(0x004c5792);
    /* 004c5792: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c5794: je 0x4c57d7 */ if (fZ) goto L_004c57d7;
L_004c5796:; BB(0x004c5796);
    /* 004c5796: lea edx, [esi + 0x430] */ r_edx = (u32)(r_esi+0x430u);
    /* 004c579c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c579d: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x4c57a2u); f_00508db8();
    /* 004c57a2: lea eax, [esp + 0x3c] */ r_eax = (u32)(r_esp+0x3cu);
    /* 004c57a6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c57a7: mov ecx, dword ptr [esi + 0x8a4] */ r_ecx = R32((u32)(r_esi+0x8a4u));
    /* 004c57ad: call 0x508dd0 */ r_esp -= 4; W32(r_esp, 0x4c57b2u); f_00508dd0();
    /* 004c57b2: jmp 0x4c57d7 */ goto L_004c57d7;
L_004c57b4:; BB(0x004c57b4);
    /* 004c57b4: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004c57b6: mov edx, dword ptr [esi + 0x8a4] */ r_edx = R32((u32)(r_esi+0x8a4u));
    /* 004c57bc: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c57be: je 0x4c57d7 */ if (fZ) goto L_004c57d7;
L_004c57c0:; BB(0x004c57c0);
    /* 004c57c0: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004c57c4: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004c57c9: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004c57cd: mov dword ptr [esi + 0x8a4], 0 */ W32((u32)(r_esi+0x8a4u), 0x0u);
L_004c57d7:; BB(0x004c57d7);
    /* 004c57d7: push 0x42640000 */ { u32 v = 0x42640000u; r_esp -= 4; W32(r_esp, v); }
    /* 004c57dc: mov ecx, esi */ r_ecx = r_esi;
    /* 004c57de: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x4c57e3u); f_007aaa30();
    /* 004c57e3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c57e5: je 0x4c58bb */ if (fZ) goto L_004c58bb;
L_004c57eb:; BB(0x004c57eb);
    /* 004c57eb: mov eax, dword ptr [0x9ac4d0] */ r_eax = R32((u32)(0x9ac4d0u));
    /* 004c57f0: mov edx, dword ptr [0x9ac4d4] */ r_edx = R32((u32)(0x9ac4d4u));
    /* 004c57f6: mov edi, dword ptr [0x9ac4dc] */ r_edi = R32((u32)(0x9ac4dcu));
    /* 004c57fc: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 004c5800: mov eax, dword ptr [0x9ac4e0] */ r_eax = R32((u32)(0x9ac4e0u));
    /* 004c5805: mov dword ptr [esp + 0x50], 0x41400000 */ W32((u32)(r_esp+0x50u), 0x41400000u);
    /* 004c580d: mov dword ptr [esp + 0x4c], edx */ W32((u32)(r_esp+0x4cu), r_edx);
    /* 004c5811: mov dword ptr [esp + 0x5c], 0xc20c0000 */ W32((u32)(r_esp+0x5cu), 0xc20c0000u);
    /* 004c5819: mov dword ptr [esp + 0x54], edi */ W32((u32)(r_esp+0x54u), r_edi);
    /* 004c581d: mov dword ptr [esp + 0x60], 0 */ W32((u32)(r_esp+0x60u), 0x0u);
    /* 004c5825: mov dword ptr [esp + 0x58], eax */ W32((u32)(r_esp+0x58u), r_eax);
    /* 004c5829: mov dword ptr [esp + 0x64], 0x41200000 */ W32((u32)(r_esp+0x64u), 0x41200000u);
    /* 004c5831: lea edx, [esp + 0x5c] */ r_edx = (u32)(r_esp+0x5cu);
    /* 004c5835: lea eax, [esp + 0x64] */ r_eax = (u32)(r_esp+0x64u);
    /* 004c5839: push dword ptr [esi + 0x60] */ { u32 v = R32((u32)(r_esi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 004c583c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c583d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c583e: call 0x782b64 */ r_esp -= 4; W32(r_esp, 0x4c5843u); f_00782b64();
    /* 004c5843: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c5846: lea ecx, [esp + 0x5c] */ r_ecx = (u32)(r_esp+0x5cu);
    /* 004c584a: lea edi, [esi + 0x38] */ r_edi = (u32)(r_esi+0x38u);
    /* 004c584d: mov edx, edi */ r_edx = r_edi;
    /* 004c584f: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x4c5854u); f_0082ebac();
    /* 004c5854: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004c5856: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c5857: push dword ptr [0xa48520] */ { u32 v = R32((u32)(0xa48520u)); r_esp -= 4; W32(r_esp, v); }
    /* 004c585d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c585e: mov ecx, esi */ r_ecx = r_esi;
    /* 004c5860: call 0x520c70 */ r_esp -= 4; W32(r_esp, 0x4c5865u); f_00520c70();
    /* 004c5865: lea edx, [esp + 0x5c] */ r_edx = (u32)(r_esp+0x5cu);
    /* 004c5869: lea eax, [esp + 0x48] */ r_eax = (u32)(r_esp+0x48u);
    /* 004c586d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004c586f: mov ecx, esi */ r_ecx = r_esi;
    /* 004c5871: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c5872: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c5873: call 0x51fdf8 */ r_esp -= 4; W32(r_esp, 0x4c5878u); f_0051fdf8();
    /* 004c5878: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004c587a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c587b: push dword ptr [0xa48510] */ { u32 v = R32((u32)(0xa48510u)); r_esp -= 4; W32(r_esp, v); }
    /* 004c5881: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c5882: mov ecx, esi */ r_ecx = r_esi;
    /* 004c5884: call 0x520c70 */ r_esp -= 4; W32(r_esp, 0x4c5889u); f_00520c70();
    /* 004c5889: lea edx, [esp + 0x5c] */ r_edx = (u32)(r_esp+0x5cu);
    /* 004c588d: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004c588f: mov eax, dword ptr [esi + 0x770] */ r_eax = R32((u32)(r_esi+0x770u));
    /* 004c5895: push dword ptr [eax + 8] */ { u32 v = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004c5898: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c5899: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x4c589eu); f_0050b7a4();
    /* 004c589e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c58a1: mov eax, dword ptr [esi + 0x770] */ r_eax = R32((u32)(r_esi+0x770u));
    /* 004c58a7: mov eax, dword ptr [eax + 0xc] */ r_eax = R32((u32)(r_eax+0xcu));
    /* 004c58aa: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c58ad: je 0x4c58bb */ if (fZ) goto L_004c58bb;
L_004c58af:; BB(0x004c58af);
    /* 004c58af: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004c58b1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c58b2: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004c58b3: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x4c58b8u); f_0050b7a4();
    /* 004c58b8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004c58bb:; BB(0x004c58bb);
    /* 004c58bb: push 0x42b00000 */ { u32 v = 0x42b00000u; r_esp -= 4; W32(r_esp, v); }
    /* 004c58c0: mov ecx, esi */ r_ecx = r_esi;
    /* 004c58c2: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x4c58c7u); f_007aaa30();
    /* 004c58c7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c58c9: je 0x4c599f */ if (fZ) goto L_004c599f;
L_004c58cf:; BB(0x004c58cf);
    /* 004c58cf: mov eax, dword ptr [0x9ac4d0] */ r_eax = R32((u32)(0x9ac4d0u));
    /* 004c58d4: mov edx, dword ptr [0x9ac4d4] */ r_edx = R32((u32)(0x9ac4d4u));
    /* 004c58da: mov edi, dword ptr [0x9ac4dc] */ r_edi = R32((u32)(0x9ac4dcu));
    /* 004c58e0: mov dword ptr [esp + 0x68], eax */ W32((u32)(r_esp+0x68u), r_eax);
    /* 004c58e4: mov eax, dword ptr [0x9ac4e0] */ r_eax = R32((u32)(0x9ac4e0u));
    /* 004c58e9: mov dword ptr [esp + 0x70], 0x41c80000 */ W32((u32)(r_esp+0x70u), 0x41c80000u);
    /* 004c58f1: mov dword ptr [esp + 0x6c], edx */ W32((u32)(r_esp+0x6cu), r_edx);
    /* 004c58f5: mov dword ptr [esp + 0x5c], 0xc2700000 */ W32((u32)(r_esp+0x5cu), 0xc2700000u);
    /* 004c58fd: mov dword ptr [esp + 0x74], edi */ W32((u32)(r_esp+0x74u), r_edi);
    /* 004c5901: mov dword ptr [esp + 0x60], 0 */ W32((u32)(r_esp+0x60u), 0x0u);
    /* 004c5909: mov dword ptr [esp + 0x78], eax */ W32((u32)(r_esp+0x78u), r_eax);
    /* 004c590d: mov dword ptr [esp + 0x64], 0xc1a00000 */ W32((u32)(r_esp+0x64u), 0xc1a00000u);
    /* 004c5915: lea edx, [esp + 0x5c] */ r_edx = (u32)(r_esp+0x5cu);
    /* 004c5919: lea eax, [esp + 0x64] */ r_eax = (u32)(r_esp+0x64u);
    /* 004c591d: push dword ptr [esi + 0x60] */ { u32 v = R32((u32)(r_esi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 004c5920: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c5921: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c5922: call 0x782b64 */ r_esp -= 4; W32(r_esp, 0x4c5927u); f_00782b64();
    /* 004c5927: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c592a: lea ecx, [esp + 0x5c] */ r_ecx = (u32)(r_esp+0x5cu);
    /* 004c592e: lea edi, [esi + 0x38] */ r_edi = (u32)(r_esi+0x38u);
    /* 004c5931: mov edx, edi */ r_edx = r_edi;
    /* 004c5933: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x4c5938u); f_0082ebac();
    /* 004c5938: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004c593a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c593b: push dword ptr [0xa48520] */ { u32 v = R32((u32)(0xa48520u)); r_esp -= 4; W32(r_esp, v); }
    /* 004c5941: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c5942: mov ecx, esi */ r_ecx = r_esi;
    /* 004c5944: call 0x520c70 */ r_esp -= 4; W32(r_esp, 0x4c5949u); f_00520c70();
    /* 004c5949: lea edx, [esp + 0x5c] */ r_edx = (u32)(r_esp+0x5cu);
    /* 004c594d: lea eax, [esp + 0x68] */ r_eax = (u32)(r_esp+0x68u);
    /* 004c5951: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004c5953: mov ecx, esi */ r_ecx = r_esi;
    /* 004c5955: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c5956: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c5957: call 0x51fdf8 */ r_esp -= 4; W32(r_esp, 0x4c595cu); f_0051fdf8();
    /* 004c595c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004c595e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c595f: push dword ptr [0xa48510] */ { u32 v = R32((u32)(0xa48510u)); r_esp -= 4; W32(r_esp, v); }
    /* 004c5965: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c5966: mov ecx, esi */ r_ecx = r_esi;
    /* 004c5968: call 0x520c70 */ r_esp -= 4; W32(r_esp, 0x4c596du); f_00520c70();
    /* 004c596d: lea edx, [esp + 0x5c] */ r_edx = (u32)(r_esp+0x5cu);
    /* 004c5971: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004c5973: mov eax, dword ptr [esi + 0x770] */ r_eax = R32((u32)(r_esi+0x770u));
    /* 004c5979: push dword ptr [eax + 8] */ { u32 v = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004c597c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c597d: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x4c5982u); f_0050b7a4();
    /* 004c5982: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c5985: mov eax, dword ptr [esi + 0x770] */ r_eax = R32((u32)(r_esi+0x770u));
    /* 004c598b: mov eax, dword ptr [eax + 0xc] */ r_eax = R32((u32)(r_eax+0xcu));
    /* 004c598e: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c5991: je 0x4c599f */ if (fZ) goto L_004c599f;
L_004c5993:; BB(0x004c5993);
    /* 004c5993: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004c5995: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c5996: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004c5997: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x4c599cu); f_0050b7a4();
    /* 004c599c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004c599f:; BB(0x004c599f);
    /* 004c599f: push 0x42c20000 */ { u32 v = 0x42c20000u; r_esp -= 4; W32(r_esp, v); }
    /* 004c59a4: mov ecx, esi */ r_ecx = r_esi;
    /* 004c59a6: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x4c59abu); f_007aaa30();
    /* 004c59ab: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c59ad: je 0x4c5b20 */ if (fZ) goto L_004c5b20;
L_004c59b3:; BB(0x004c59b3);
    /* 004c59b3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004c59b5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c59b6: push dword ptr [0xa48520] */ { u32 v = R32((u32)(0xa48520u)); r_esp -= 4; W32(r_esp, v); }
    /* 004c59bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c59bd: mov ecx, esi */ r_ecx = r_esi;
    /* 004c59bf: call 0x520c70 */ r_esp -= 4; W32(r_esp, 0x4c59c4u); f_00520c70();
    /* 004c59c4: mov edx, dword ptr [esi + 0x688] */ r_edx = R32((u32)(r_esi+0x688u));
    /* 004c59ca: mov edi, dword ptr [edx + 0xc] */ r_edi = R32((u32)(r_edx+0xcu));
    /* 004c59cd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004c59cf: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004c59d1: jle 0x4c59e3 */ if ((fZ||fS!=fO)) goto L_004c59e3;
L_004c59d3:; BB(0x004c59d3);
    /* 004c59d3: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 004c59d5: mov edi, dword ptr [edx + 4] */ r_edi = R32((u32)(r_edx+0x4u));
    /* 004c59d8: mov dword ptr [ecx + eax*4], edi */ W32((u32)(r_ecx+r_eax*4), r_edi);
    /* 004c59db: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004c59de: cmp eax, dword ptr [edx + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0xcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c59e1: jl 0x4c59d3 */ if ((fS!=fO)) goto L_004c59d3;
L_004c59e3:; BB(0x004c59e3);
    /* 004c59e3: mov dword ptr [edx + 8], 0 */ W32((u32)(r_edx+0x8u), 0x0u);
    /* 004c59ea: mov eax, dword ptr [0x9ac4d0] */ r_eax = R32((u32)(0x9ac4d0u));
    /* 004c59ef: mov edx, dword ptr [0x9ac4d4] */ r_edx = R32((u32)(0x9ac4d4u));
    /* 004c59f5: mov edi, dword ptr [0x9ac4dc] */ r_edi = R32((u32)(0x9ac4dcu));
    /* 004c59fb: mov dword ptr [esp + 0x84], 0x41700000 */ W32((u32)(r_esp+0x84u), 0x41700000u);
    /* 004c5a06: mov ecx, esi */ r_ecx = r_esi;
    /* 004c5a08: mov dword ptr [esp + 0x7c], eax */ W32((u32)(r_esp+0x7cu), r_eax);
    /* 004c5a0c: mov eax, dword ptr [0x9ac4e0] */ r_eax = R32((u32)(0x9ac4e0u));
    /* 004c5a11: mov dword ptr [esp + 0x80], edx */ W32((u32)(r_esp+0x80u), r_edx);
    /* 004c5a18: mov dword ptr [esp + 0x88], edi */ W32((u32)(r_esp+0x88u), r_edi);
    /* 004c5a1f: mov dword ptr [esp + 0x8c], eax */ W32((u32)(r_esp+0x8cu), r_eax);
    /* 004c5a26: lea edx, [esp + 0x90] */ r_edx = (u32)(r_esp+0x90u);
    /* 004c5a2d: mov eax, dword ptr [esi + 0x4cc] */ r_eax = R32((u32)(r_esi+0x4ccu));
    /* 004c5a33: mov dword ptr [esp + 0x90], eax */ W32((u32)(r_esp+0x90u), r_eax);
    /* 004c5a3a: mov eax, dword ptr [esi + 0x4d0] */ r_eax = R32((u32)(r_esi+0x4d0u));
    /* 004c5a40: mov dword ptr [esp + 0x94], eax */ W32((u32)(r_esp+0x94u), r_eax);
    /* 004c5a47: mov eax, dword ptr [esi + 0x4d4] */ r_eax = R32((u32)(r_esi+0x4d4u));
    /* 004c5a4d: mov dword ptr [esp + 0x98], eax */ W32((u32)(r_esp+0x98u), r_eax);
    /* 004c5a54: lea eax, [esp + 0x7c] */ r_eax = (u32)(r_esp+0x7cu);
    /* 004c5a58: push dword ptr [esi + 0x688] */ { u32 v = R32((u32)(r_esi+0x688u)); r_esp -= 4; W32(r_esp, v); }
    /* 004c5a5e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c5a5f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c5a60: call 0x51fdf8 */ r_esp -= 4; W32(r_esp, 0x4c5a65u); f_0051fdf8();
    /* 004c5a65: mov dword ptr [esp + 0x84], 0x41400000 */ W32((u32)(r_esp+0x84u), 0x41400000u);
    /* 004c5a70: lea eax, [esi + 0x490] */ r_eax = (u32)(r_esi+0x490u);
    /* 004c5a76: lea edx, [esi + 0x4a8] */ r_edx = (u32)(r_esi+0x4a8u);
    /* 004c5a7c: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 004c5a7e: mov dword ptr [esp + 0x9c], eax */ W32((u32)(r_esp+0x9cu), r_eax);
    /* 004c5a85: mov dword ptr [esp + 0xa0], edx */ W32((u32)(r_esp+0xa0u), r_edx);
L_004c5a8c:; BB(0x004c5a8c);
    /* 004c5a8c: lea eax, [esp + 0x7c] */ r_eax = (u32)(r_esp+0x7cu);
    /* 004c5a90: push dword ptr [esi + 0x688] */ { u32 v = R32((u32)(r_esi+0x688u)); r_esp -= 4; W32(r_esp, v); }
    /* 004c5a96: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c5a97: mov ecx, esi */ r_ecx = r_esi;
    /* 004c5a99: push dword ptr [esp + edi*4 + 0xa4] */ { u32 v = R32((u32)(r_esp+r_edi*4+0xa4u)); r_esp -= 4; W32(r_esp, v); }
    /* 004c5aa0: call 0x51fdf8 */ r_esp -= 4; W32(r_esp, 0x4c5aa5u); f_0051fdf8();
    /* 004c5aa5: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004c5aa8: cmp edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c5aab: jl 0x4c5a8c */ if ((fS!=fO)) goto L_004c5a8c;
L_004c5aad:; BB(0x004c5aad);
    /* 004c5aad: mov dword ptr [esp + 0x84], 0x41300000 */ W32((u32)(r_esp+0x84u), 0x41300000u);
    /* 004c5ab8: lea eax, [esi + 0x4e4] */ r_eax = (u32)(r_esi+0x4e4u);
    /* 004c5abe: lea edx, [esi + 0x4f0] */ r_edx = (u32)(r_esi+0x4f0u);
    /* 004c5ac4: lea edi, [esi + 0x4fc] */ r_edi = (u32)(r_esi+0x4fcu);
    /* 004c5aca: mov dword ptr [esp + 0x9c], eax */ W32((u32)(r_esp+0x9cu), r_eax);
    /* 004c5ad1: mov dword ptr [esp + 0xa0], edx */ W32((u32)(r_esp+0xa0u), r_edx);
    /* 004c5ad8: mov dword ptr [esp + 0xa4], edi */ W32((u32)(r_esp+0xa4u), r_edi);
    /* 004c5adf: lea eax, [esi + 0x508] */ r_eax = (u32)(r_esi+0x508u);
    /* 004c5ae5: mov dword ptr [esp + 0xa8], eax */ W32((u32)(r_esp+0xa8u), r_eax);
    /* 004c5aec: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_004c5aee:; BB(0x004c5aee);
    /* 004c5aee: lea eax, [esp + 0x7c] */ r_eax = (u32)(r_esp+0x7cu);
    /* 004c5af2: push dword ptr [esi + 0x688] */ { u32 v = R32((u32)(r_esi+0x688u)); r_esp -= 4; W32(r_esp, v); }
    /* 004c5af8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c5af9: mov ecx, esi */ r_ecx = r_esi;
    /* 004c5afb: push dword ptr [esp + edi*4 + 0xa4] */ { u32 v = R32((u32)(r_esp+r_edi*4+0xa4u)); r_esp -= 4; W32(r_esp, v); }
    /* 004c5b02: call 0x51fdf8 */ r_esp -= 4; W32(r_esp, 0x4c5b07u); f_0051fdf8();
    /* 004c5b07: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004c5b0a: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c5b0d: jl 0x4c5aee */ if ((fS!=fO)) goto L_004c5aee;
L_004c5b0f:; BB(0x004c5b0f);
    /* 004c5b0f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004c5b11: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c5b12: push dword ptr [0xa48510] */ { u32 v = R32((u32)(0xa48510u)); r_esp -= 4; W32(r_esp, v); }
    /* 004c5b18: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c5b19: mov ecx, esi */ r_ecx = r_esi;
    /* 004c5b1b: call 0x520c70 */ r_esp -= 4; W32(r_esp, 0x4c5b20u); f_00520c70();
L_004c5b20:; BB(0x004c5b20);
    /* 004c5b20: mov eax, dword ptr [esi + 0xb0] */ r_eax = R32((u32)(r_esi+0xb0u));
    /* 004c5b26: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004c5b28: je 0x4c5b6c */ if (fZ) goto L_004c5b6c;
L_004c5b2a:; BB(0x004c5b2a);
    /* 004c5b2a: mov dword ptr [esi + 0x85c], 1 */ W32((u32)(r_esi+0x85cu), 0x1u);
    /* 004c5b34: mov dword ptr [esi + 0x860], 0 */ W32((u32)(r_esi+0x860u), 0x0u);
    /* 004c5b3e: add esp, 0xec */ {  u32 a = r_esp; u32 b = 0xecu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c5b44: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c5b45: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c5b46: ret 4 */ FN_RET(0x004c574f); r_esp += 8; return;
L_004c5b6c:; BB(0x004c5b6c);
    /* 004c5b6c: add esp, 0xec */ {  u32 a = r_esp; u32 b = 0xecu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c5b72: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c5b73: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c5b74: ret 4 */ FN_RET(0x004c574f); r_esp += 8; return;
L_004c5b77:; BB(0x004c5b77);
    /* 004c5b77: lea edx, [esp + 0x3c] */ r_edx = (u32)(r_esp+0x3cu);
    /* 004c5b7b: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004c5b7d: mov eax, dword ptr [esi + 0x770] */ r_eax = R32((u32)(r_esi+0x770u));
    /* 004c5b83: lea edi, [esi + 0x418] */ r_edi = (u32)(r_esi+0x418u);
    /* 004c5b89: push dword ptr [eax + 0x1c] */ { u32 v = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004c5b8c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c5b8d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004c5b8e: call 0x509dc4 */ r_esp -= 4; W32(r_esp, 0x4c5b93u); f_00509dc4();
    /* 004c5b93: mov ecx, eax */ r_ecx = r_eax;
    /* 004c5b95: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c5b98: mov dword ptr [esi + 0x8a4], ecx */ W32((u32)(r_esi+0x8a4u), r_ecx);
    /* 004c5b9e: jmp 0x4c5792 */ goto L_004c5792;
}

void f_004c5a4e(void)
{
    FN_ENTER(0x004c5a4e);
    /* 004c5a4e: test byte ptr [eax + ebx*4], ah */ {  u32 a = R8((u32)(r_eax+r_ebx*4)); u32 b = (u8)(r_eax>>8); u32 r = (a & b) & 0xffu;   }
    /* 004c5a51: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 004c5a53: add byte ptr [ebp - 0x83dbbc], cl */ { u32 ad = (u32)(r_ebp+0xff7c2444u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 004c5a59: mov dh, 0x88 */ r_edx = (r_edx & 0xffff00ffu) | (((0x88u) & 0xffu) << 8);
    /* 004c5a5b: push es */ { u32 v = 0x2bu; r_esp -= 4; W32(r_esp, v); }
    /* 004c5a5c: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 004c5a5e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c5a5f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c5a60: call 0x51fdf8 */ r_esp -= 4; W32(r_esp, 0x4c5a65u); f_0051fdf8();
    /* 004c5a65: mov dword ptr [esp + 0x84], 0x41400000 */ W32((u32)(r_esp+0x84u), 0x41400000u);
    /* 004c5a70: lea eax, [esi + 0x490] */ r_eax = (u32)(r_esi+0x490u);
    /* 004c5a76: lea edx, [esi + 0x4a8] */ r_edx = (u32)(r_esi+0x4a8u);
    /* 004c5a7c: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 004c5a7e: mov dword ptr [esp + 0x9c], eax */ W32((u32)(r_esp+0x9cu), r_eax);
    /* 004c5a85: mov dword ptr [esp + 0xa0], edx */ W32((u32)(r_esp+0xa0u), r_edx);
L_004c5a8c:; BB(0x004c5a8c);
    /* 004c5a8c: lea eax, [esp + 0x7c] */ r_eax = (u32)(r_esp+0x7cu);
    /* 004c5a90: push dword ptr [esi + 0x688] */ { u32 v = R32((u32)(r_esi+0x688u)); r_esp -= 4; W32(r_esp, v); }
    /* 004c5a96: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c5a97: mov ecx, esi */ r_ecx = r_esi;
    /* 004c5a99: push dword ptr [esp + edi*4 + 0xa4] */ { u32 v = R32((u32)(r_esp+r_edi*4+0xa4u)); r_esp -= 4; W32(r_esp, v); }
    /* 004c5aa0: call 0x51fdf8 */ r_esp -= 4; W32(r_esp, 0x4c5aa5u); f_0051fdf8();
    /* 004c5aa5: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004c5aa8: cmp edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c5aab: jl 0x4c5a8c */ if ((fS!=fO)) goto L_004c5a8c;
L_004c5aad:; BB(0x004c5aad);
    /* 004c5aad: mov dword ptr [esp + 0x84], 0x41300000 */ W32((u32)(r_esp+0x84u), 0x41300000u);
    /* 004c5ab8: lea eax, [esi + 0x4e4] */ r_eax = (u32)(r_esi+0x4e4u);
    /* 004c5abe: lea edx, [esi + 0x4f0] */ r_edx = (u32)(r_esi+0x4f0u);
    /* 004c5ac4: lea edi, [esi + 0x4fc] */ r_edi = (u32)(r_esi+0x4fcu);
    /* 004c5aca: mov dword ptr [esp + 0x9c], eax */ W32((u32)(r_esp+0x9cu), r_eax);
    /* 004c5ad1: mov dword ptr [esp + 0xa0], edx */ W32((u32)(r_esp+0xa0u), r_edx);
    /* 004c5ad8: mov dword ptr [esp + 0xa4], edi */ W32((u32)(r_esp+0xa4u), r_edi);
    /* 004c5adf: lea eax, [esi + 0x508] */ r_eax = (u32)(r_esi+0x508u);
    /* 004c5ae5: mov dword ptr [esp + 0xa8], eax */ W32((u32)(r_esp+0xa8u), r_eax);
    /* 004c5aec: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_004c5aee:; BB(0x004c5aee);
    /* 004c5aee: lea eax, [esp + 0x7c] */ r_eax = (u32)(r_esp+0x7cu);
    /* 004c5af2: push dword ptr [esi + 0x688] */ { u32 v = R32((u32)(r_esi+0x688u)); r_esp -= 4; W32(r_esp, v); }
    /* 004c5af8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c5af9: mov ecx, esi */ r_ecx = r_esi;
    /* 004c5afb: push dword ptr [esp + edi*4 + 0xa4] */ { u32 v = R32((u32)(r_esp+r_edi*4+0xa4u)); r_esp -= 4; W32(r_esp, v); }
    /* 004c5b02: call 0x51fdf8 */ r_esp -= 4; W32(r_esp, 0x4c5b07u); f_0051fdf8();
    /* 004c5b07: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004c5b0a: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c5b0d: jl 0x4c5aee */ if ((fS!=fO)) goto L_004c5aee;
L_004c5b0f:; BB(0x004c5b0f);
    /* 004c5b0f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004c5b11: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c5b12: push dword ptr [0xa48510] */ { u32 v = R32((u32)(0xa48510u)); r_esp -= 4; W32(r_esp, v); }
    /* 004c5b18: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c5b19: mov ecx, esi */ r_ecx = r_esi;
    /* 004c5b1b: call 0x520c70 */ r_esp -= 4; W32(r_esp, 0x4c5b20u); f_00520c70();
    /* 004c5b20: mov eax, dword ptr [esi + 0xb0] */ r_eax = R32((u32)(r_esi+0xb0u));
    /* 004c5b26: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004c5b28: je 0x4c5b6c */ if (fZ) goto L_004c5b6c;
L_004c5b2a:; BB(0x004c5b2a);
    /* 004c5b2a: mov dword ptr [esi + 0x85c], 1 */ W32((u32)(r_esi+0x85cu), 0x1u);
    /* 004c5b34: mov dword ptr [esi + 0x860], 0 */ W32((u32)(r_esi+0x860u), 0x0u);
    /* 004c5b3e: add esp, 0xec */ {  u32 a = r_esp; u32 b = 0xecu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c5b44: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c5b45: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c5b46: ret 4 */ FN_RET(0x004c5a4e); r_esp += 8; return;
L_004c5b6c:; BB(0x004c5b6c);
    /* 004c5b6c: add esp, 0xec */ {  u32 a = r_esp; u32 b = 0xecu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c5b72: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c5b73: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c5b74: ret 4 */ FN_RET(0x004c5a4e); r_esp += 8; return;
}

void f_004c5b6c(void)
{
    FN_ENTER(0x004c5b6c);
    /* 004c5b6c: add esp, 0xec */ {  u32 a = r_esp; u32 b = 0xecu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c5b72: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c5b73: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c5b74: ret 4 */ FN_RET(0x004c5b6c); r_esp += 8; return;
}

void f_004c5ba4(void) /* sub_4C5BA4 */
{
    FN_ENTER(0x004c5ba4);
    /* 004c5ba4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004c5ba5: sub esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004c5ba8: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004c5baa: mov eax, dword ptr [esp + 0x60] */ r_eax = R32((u32)(r_esp+0x60u));
    /* 004c5bae: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004c5bb1: ja 0x4c5dcb */ if ((!fC&&!fZ)) goto L_004c5dcb;
L_004c5bb7:; BB(0x004c5bb7);
    /* 004c5bb7: mov eax, dword ptr [eax*4 + 0x907b7c] */ r_eax = R32((u32)(r_eax*4+0x907b7cu));
    /* 004c5bbe: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_004c5dcb:; BB(0x004c5dcb);
    /* 004c5dcb: add esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c5dce: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c5dcf: ret 4 */ FN_RET(0x004c5ba4); r_esp += 8; return;
}

void f_004c5bc0(void)
{
    FN_ENTER(0x004c5bc0);
    /* 004c5bc0: mov eax, dword ptr [ebp + 0x85c] */ r_eax = R32((u32)(r_ebp+0x85cu));
    /* 004c5bc6: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c5bc9: jl 0x4c5dcb */ if ((fS!=fO)) goto L_004c5dcb;
L_004c5bcf:; BB(0x004c5bcf);
    /* 004c5bcf: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004c5bd1: push 0x17 */ { u32 v = 0x17u; r_esp -= 4; W32(r_esp, v); }
    /* 004c5bd3: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 004c5bd6: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c5bd8: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4c5bdeu); call_ind(t); }
    /* 004c5bde: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 004c5be2: mov ecx, dword ptr [ebp + 0x694] */ r_ecx = R32((u32)(r_ebp+0x694u));
    /* 004c5be8: mov byte ptr [esp], 0xa8 */ W8((u32)(r_esp), 0xa8u);
    /* 004c5bec: mov edx, 0x17 */ r_edx = 0x17u;
    /* 004c5bf1: mov byte ptr [esp + 1], 6 */ W8((u32)(r_esp+0x1u), 0x6u);
    /* 004c5bf6: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 004c5bfb: mov eax, dword ptr [ebp + 0x67c] */ r_eax = R32((u32)(r_ebp+0x67cu));
    /* 004c5c01: mov word ptr [esp + 4], dx */ W16((u32)(r_esp+0x4u), (u16)r_edx);
    /* 004c5c06: mov word ptr [esp + 6], ax */ W16((u32)(r_esp+0x6u), (u16)r_eax);
    /* 004c5c0b: movzx eax, word ptr [ebp + 0x394] */ r_eax = (u32)R16((u32)(r_ebp+0x394u));
    /* 004c5c12: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004c5c16: mov eax, dword ptr [ebp + 0x690] */ r_eax = R32((u32)(r_ebp+0x690u));
    /* 004c5c1c: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 004c5c20: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 004c5c24: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4c5c29u); f_008587a5();
    /* 004c5c29: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 004c5c2d: fild dword ptr [esp + 0x30] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x30u)));
    /* 004c5c31: fdiv dword ptr [0x908604] */ ST(0) = ST(0) / R_F32((u32)(0x908604u));
    /* 004c5c37: fmul dword ptr [0x908608] */ ST(0) = ST(0) * R_F32((u32)(0x908608u));
    /* 004c5c3d: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 004c5c40: fnstcw word ptr [esp + 0x38] */ W16((u32)(r_esp+0x38u), fcw);
    /* 004c5c44: movzx eax, word ptr [esp + 0x38] */ r_eax = (u32)R16((u32)(r_esp+0x38u));
    /* 004c5c49: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004c5c4e: mov dword ptr [esp + 0x40], eax */ W32((u32)(r_esp+0x40u), r_eax);
    /* 004c5c52: fldcw word ptr [esp + 0x40] */ fcw = R16((u32)(r_esp+0x40u));
    /* 004c5c56: fistp dword ptr [esp + 0x48] */ W32((u32)(r_esp+0x48u), (u32)fx_int32(ST(0))); FPOP();
    /* 004c5c5a: fldcw word ptr [esp + 0x38] */ fcw = R16((u32)(r_esp+0x38u));
    /* 004c5c5e: mov eax, dword ptr [esp + 0x48] */ r_eax = R32((u32)(r_esp+0x48u));
    /* 004c5c62: mov byte ptr [esp + 0x14], al */ W8((u32)(r_esp+0x14u), (u8)r_eax);
    /* 004c5c66: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4c5c6bu); f_008003e0();
    /* 004c5c6b: add esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c5c6e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c5c6f: ret 4 */ FN_RET(0x004c5bc0); r_esp += 8; return;
L_004c5dcb:; BB(0x004c5dcb);
    /* 004c5dcb: add esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c5dce: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c5dcf: ret 4 */ FN_RET(0x004c5bc0); r_esp += 8; return;
}

void f_004c5c72(void)
{
    FN_ENTER(0x004c5c72);
    /* 004c5c72: mov eax, dword ptr [ebp + 0x75c] */ r_eax = R32((u32)(r_ebp+0x75cu));
    /* 004c5c78: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c5c7a: je 0x4c5c83 */ if (fZ) goto L_004c5c83;
L_004c5c7c:; BB(0x004c5c7c);
    /* 004c5c7c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c5c7e: call 0x4cc7f4 */ r_esp -= 4; W32(r_esp, 0x4c5c83u); f_004cc7f4();
L_004c5c83:; BB(0x004c5c83);
    /* 004c5c83: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 004c5c87: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004c5c8c: mov word ptr [ebp + 8], ax */ W16((u32)(r_ebp+0x8u), (u16)r_eax);
    /* 004c5c90: add esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c5c93: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c5c94: ret 4 */ FN_RET(0x004c5c72); r_esp += 8; return;
}

void f_004c5c97(void)
{
    FN_ENTER(0x004c5c97);
    /* 004c5c97: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 004c5c9a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c5c9c: call dword ptr [eax + 0x184] */ { u32 t = R32((u32)(r_eax+0x184u)); r_esp -= 4; W32(r_esp, 0x4c5ca2u); call_ind(t); }
    /* 004c5ca2: mov dword ptr [ebp + 0x3ec], 0 */ W32((u32)(r_ebp+0x3ecu), 0x0u);
    /* 004c5cac: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c5cae: call 0x4cb184 */ r_esp -= 4; W32(r_esp, 0x4c5cb3u); f_004cb184();
    /* 004c5cb3: mov eax, dword ptr [ebp + 0x3c8] */ r_eax = R32((u32)(r_ebp+0x3c8u));
    /* 004c5cb9: mov dword ptr [ebp + 0x85c], 0 */ W32((u32)(r_ebp+0x85cu), 0x0u);
    /* 004c5cc3: or eax, 0xb6 */ {  u32 a = r_eax; u32 b = 0xb6u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004c5cc8: mov dword ptr [ebp + 0x3c8], eax */ W32((u32)(r_ebp+0x3c8u), r_eax);
    /* 004c5cce: add esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c5cd1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c5cd2: ret 4 */ FN_RET(0x004c5c97); r_esp += 8; return;
}

void f_004c5cd5(void)
{
    FN_ENTER(0x004c5cd5);
    /* 004c5cd5: mov eax, dword ptr [ebp + 0x85c] */ r_eax = R32((u32)(r_ebp+0x85cu));
    /* 004c5cdb: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c5cde: jl 0x4c5dcb */ if ((fS!=fO)) goto L_004c5dcb;
L_004c5ce4:; BB(0x004c5ce4);
    /* 004c5ce4: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004c5ce6: push 0x17 */ { u32 v = 0x17u; r_esp -= 4; W32(r_esp, v); }
    /* 004c5ce8: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 004c5ceb: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c5ced: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4c5cf3u); call_ind(t); }
    /* 004c5cf3: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 004c5cf7: mov ecx, dword ptr [ebp + 0x694] */ r_ecx = R32((u32)(r_ebp+0x694u));
    /* 004c5cfd: mov byte ptr [esp + 0x18], 0xa8 */ W8((u32)(r_esp+0x18u), 0xa8u);
    /* 004c5d02: mov edx, 0x17 */ r_edx = 0x17u;
    /* 004c5d07: mov byte ptr [esp + 0x19], 6 */ W8((u32)(r_esp+0x19u), 0x6u);
    /* 004c5d0c: mov word ptr [esp + 0x1a], ax */ W16((u32)(r_esp+0x1au), (u16)r_eax);
    /* 004c5d11: mov eax, dword ptr [ebp + 0x67c] */ r_eax = R32((u32)(r_ebp+0x67cu));
    /* 004c5d17: mov word ptr [esp + 0x1c], dx */ W16((u32)(r_esp+0x1cu), (u16)r_edx);
    /* 004c5d1c: mov word ptr [esp + 0x1e], ax */ W16((u32)(r_esp+0x1eu), (u16)r_eax);
    /* 004c5d21: movzx eax, word ptr [ebp + 0x394] */ r_eax = (u32)R16((u32)(r_ebp+0x394u));
    /* 004c5d28: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004c5d2c: mov eax, dword ptr [ebp + 0x690] */ r_eax = R32((u32)(r_ebp+0x690u));
    /* 004c5d32: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 004c5d36: mov dword ptr [esp + 0x28], ecx */ W32((u32)(r_esp+0x28u), r_ecx);
    /* 004c5d3a: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4c5d3fu); f_008587a5();
    /* 004c5d3f: mov dword ptr [esp + 0x50], eax */ W32((u32)(r_esp+0x50u), r_eax);
    /* 004c5d43: fild dword ptr [esp + 0x50] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x50u)));
    /* 004c5d47: fdiv dword ptr [0x908604] */ ST(0) = ST(0) / R_F32((u32)(0x908604u));
    /* 004c5d4d: fmul dword ptr [0x908608] */ ST(0) = ST(0) * R_F32((u32)(0x908608u));
    /* 004c5d53: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 004c5d57: fnstcw word ptr [esp + 0x38] */ W16((u32)(r_esp+0x38u), fcw);
    /* 004c5d5b: movzx eax, word ptr [esp + 0x38] */ r_eax = (u32)R16((u32)(r_esp+0x38u));
    /* 004c5d60: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004c5d65: mov dword ptr [esp + 0x40], eax */ W32((u32)(r_esp+0x40u), r_eax);
    /* 004c5d69: fldcw word ptr [esp + 0x40] */ fcw = R16((u32)(r_esp+0x40u));
    /* 004c5d6d: fistp dword ptr [esp + 0x48] */ W32((u32)(r_esp+0x48u), (u32)fx_int32(ST(0))); FPOP();
    /* 004c5d71: fldcw word ptr [esp + 0x38] */ fcw = R16((u32)(r_esp+0x38u));
    /* 004c5d75: mov eax, dword ptr [esp + 0x48] */ r_eax = R32((u32)(r_esp+0x48u));
    /* 004c5d79: mov byte ptr [esp + 0x2c], al */ W8((u32)(r_esp+0x2cu), (u8)r_eax);
    /* 004c5d7d: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4c5d82u); f_008003e0();
    /* 004c5d82: add esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c5d85: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c5d86: ret 4 */ FN_RET(0x004c5cd5); r_esp += 8; return;
L_004c5dcb:; BB(0x004c5dcb);
    /* 004c5dcb: add esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c5dce: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c5dcf: ret 4 */ FN_RET(0x004c5cd5); r_esp += 8; return;
}

void f_004c5d89(void)
{
    FN_ENTER(0x004c5d89);
    /* 004c5d89: fild dword ptr [ebp + 0x85c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x85cu)));
    /* 004c5d8f: fdiv dword ptr [0x908600] */ ST(0) = ST(0) / R_F32((u32)(0x908600u));
    /* 004c5d95: fld dword ptr [0x9085fc] */ FPUSH(R_F32((u32)(0x9085fcu)));
    /* 004c5d9b: fld dword ptr [0x9085f8] */ FPUSH(R_F32((u32)(0x9085f8u)));
    /* 004c5da1: fld dword ptr [0x908608] */ FPUSH(R_F32((u32)(0x908608u)));
    /* 004c5da7: fld dword ptr [0x9085fc] */ FPUSH(R_F32((u32)(0x9085fcu)));
    /* 004c5dad: fsub st(4) */ ST(0) = ST(0) - ST(4);
    /* 004c5daf: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004c5db1: fmulp st(4) */ ST(4) = ST(4) * ST(0); FPOP();
    /* 004c5db3: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004c5db5: fst dword ptr [ebp + 0x68] */ W_F32((u32)(r_ebp+0x68u), ST(0));
    /* 004c5db8: fstp dword ptr [ebp + 0x70] */ W_F32((u32)(r_ebp+0x70u), ST(0)); FPOP();
    /* 004c5dbb: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004c5dbd: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 004c5dbf: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004c5dc1: fstp dword ptr [ebp + 0x6c] */ W_F32((u32)(r_ebp+0x6cu), ST(0)); FPOP();
    /* 004c5dc4: add dword ptr [ebp + 0x85c], 1 */ { u32 ad = (u32)(r_ebp+0x85cu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 004c5dcb: add esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c5dce: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c5dcf: ret 4 */ FN_RET(0x004c5d89); r_esp += 8; return;
}

void f_004c5dcb(void)
{
    FN_ENTER(0x004c5dcb);
    /* 004c5dcb: add esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c5dce: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c5dcf: ret 4 */ FN_RET(0x004c5dcb); r_esp += 8; return;
}

void f_004c5dd4(void) /* sub_4C5DD4 */
{
    FN_ENTER(0x004c5dd4);
    /* 004c5dd4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004c5dd5: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004c5dd8: mov esi, ecx */ r_esi = r_ecx;
    /* 004c5dda: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 004c5dde: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004c5de1: ja 0x4c5e8e */ if ((!fC&&!fZ)) goto L_004c5e8e;
L_004c5de7:; BB(0x004c5de7);
    /* 004c5de7: mov eax, dword ptr [eax*4 + 0x907bac] */ r_eax = R32((u32)(r_eax*4+0x907bacu));
    /* 004c5dee: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_004c5e8e:; BB(0x004c5e8e);
    /* 004c5e8e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c5e91: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c5e92: ret 4 */ FN_RET(0x004c5dd4); r_esp += 8; return;
}

void f_004c5df0(void)
{
    FN_ENTER(0x004c5df0);
    /* 004c5df0: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 004c5df2: mov eax, 0x13 */ r_eax = 0x13u;
    /* 004c5df7: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
    /* 004c5dfe: mov ecx, esi */ r_ecx = r_esi;
    /* 004c5e00: call dword ptr [edx + 0x184] */ { u32 t = R32((u32)(r_edx+0x184u)); r_esp -= 4; W32(r_esp, 0x4c5e06u); call_ind(t); }
    /* 004c5e06: mov dword ptr [esi + 0x3ec], 0 */ W32((u32)(r_esi+0x3ecu), 0x0u);
    /* 004c5e10: mov ecx, esi */ r_ecx = r_esi;
    /* 004c5e12: call 0x4cb184 */ r_esp -= 4; W32(r_esp, 0x4c5e17u); f_004cb184();
    /* 004c5e17: mov eax, dword ptr [esi + 0x3c8] */ r_eax = R32((u32)(r_esi+0x3c8u));
    /* 004c5e1d: mov dword ptr [esi + 0x6f8], 0x3ba3d70a */ W32((u32)(r_esi+0x6f8u), 0x3ba3d70au);
    /* 004c5e27: or eax, 0x136 */ {  u32 a = r_eax; u32 b = 0x136u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004c5e2c: mov dword ptr [esi + 0x3c8], eax */ W32((u32)(r_esi+0x3c8u), r_eax);
    /* 004c5e32: mov dword ptr [esi + 0x714], 0x3ba3d70a */ W32((u32)(r_esi+0x714u), 0x3ba3d70au);
    /* 004c5e3c: mov dword ptr [esi + 0x730], 0x3ba3d70a */ W32((u32)(r_esi+0x730u), 0x3ba3d70au);
    /* 004c5e46: mov dword ptr [esi + 0x74c], 0x3ba3d70a */ W32((u32)(r_esi+0x74cu), 0x3ba3d70au);
    /* 004c5e50: jmp 0x4c5e8e */ goto L_004c5e8e;
L_004c5e8e:; BB(0x004c5e8e);
    /* 004c5e8e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c5e91: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c5e92: ret 4 */ FN_RET(0x004c5df0); r_esp += 8; return;
}

void f_004c5e52(void)
{
    FN_ENTER(0x004c5e52);
    /* 004c5e52: mov ecx, esi */ r_ecx = r_esi;
    /* 004c5e54: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x4c5e59u); f_007aa094();
    /* 004c5e59: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 004c5e5d: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 004c5e60: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004c5e62: lea ecx, [esi + 0x6e4] */ r_ecx = (u32)(r_esi+0x6e4u);
    /* 004c5e68: mov edi, eax */ r_edi = r_eax;
    /* 004c5e6a: mov ebx, ecx */ r_ebx = r_ecx;
L_004c5e6c:; BB(0x004c5e6c);
    /* 004c5e6c: mov edx, dword ptr [edi + esi + 0x6e4] */ r_edx = R32((u32)(r_edi+r_esi+0x6e4u));
    /* 004c5e73: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004c5e75: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x4c5e78u); call_ind(t); }
    /* 004c5e78: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c5e7a: jne 0x4c5e95 */ if (!fZ) goto L_004c5e95;
L_004c5e7c:; BB(0x004c5e7c);
    /* 004c5e7c: add edi, 0x1c */ {  u32 a = r_edi; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004c5e7f: add ebx, 0x1c */ {  u32 a = r_ebx; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004c5e82: cmp edi, 0x70 */ {  u32 a = r_edi; u32 b = 0x70u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c5e85: jl 0x4c5e6c */ if ((fS!=fO)) goto L_004c5e6c;
L_004c5e87:; BB(0x004c5e87);
    /* 004c5e87: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 004c5e8b: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 004c5e8e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c5e91: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c5e92: ret 4 */ FN_RET(0x004c5e52); r_esp += 8; return;
L_004c5e95:; BB(0x004c5e95);
    /* 004c5e95: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 004c5e99: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 004c5e9c: movzx eax, word ptr [esi + 8] */ r_eax = (u32)R16((u32)(r_esi+0x8u));
    /* 004c5ea0: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004c5ea5: mov word ptr [esi + 8], ax */ W16((u32)(r_esi+0x8u), (u16)r_eax);
    /* 004c5ea9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c5eac: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c5ead: ret 4 */ FN_RET(0x004c5e52); r_esp += 8; return;
}

void f_004c5e8e(void)
{
    FN_ENTER(0x004c5e8e);
    /* 004c5e8e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c5e91: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c5e92: ret 4 */ FN_RET(0x004c5e8e); r_esp += 8; return;
}

void f_004c5eb0(void)
{
    FN_ENTER(0x004c5eb0);
    /* 004c5eb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004c5eb1: mov ebp, esp */ r_ebp = r_esp;
    /* 004c5eb3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004c5eb5: push 0x8d15d0 */ { u32 v = 0x8d15d0u; r_esp -= 4; W32(r_esp, v); }
    /* 004c5eba: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004c5ec0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c5ec1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004c5ec8: sub esp, 0x70 */ {  u32 a = r_esp; u32 b = 0x70u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004c5ecb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004c5ece: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 004c5ed1: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 004c5ed4: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 004c5ed7: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004c5eda: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 004c5edd: lea eax, [ecx + 0x868] */ r_eax = (u32)(r_ecx+0x868u);
    /* 004c5ee3: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c5ee6: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 004c5ee9: je 0x4c628a */ if (fZ) goto L_004c628a;
L_004c5eef:; BB(0x004c5eef);
    /* 004c5eef: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c5ef2: je 0x4c61ec */ if (fZ) goto L_004c61ec;
L_004c5ef8:; BB(0x004c5ef8);
    /* 004c5ef8: cmp edx, 9 */ {  u32 a = r_edx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c5efb: je 0x4c61ec */ if (fZ) goto L_004c61ec;
L_004c5f01:; BB(0x004c5f01);
    /* 004c5f01: cmp edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004c5f04: je 0x4c6075 */ if (fZ) goto L_004c6075;
L_004c5f0a:; BB(0x004c5f0a);
    /* 004c5f0a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c5f0c: jne 0x4c602c */ if (!fZ) goto L_004c602c;
L_004c5f12:; BB(0x004c5f12);
    /* 004c5f12: mov eax, ecx */ r_eax = r_ecx;
    /* 004c5f14: mov eax, dword ptr [eax + 0x85c] */ r_eax = R32((u32)(r_eax+0x85cu));
    /* 004c5f1a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c5f1c: jne 0x4c6020 */ if (!fZ) goto L_004c6020;
L_004c5f22:; BB(0x004c5f22);
    /* 004c5f22: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x4c5f27u); f_007aa094();
    /* 004c5f27: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004c5f2a: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 004c5f30: test dl, 0x10 */ {  u32 a = (u8)r_edx; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004c5f33: je 0x4c5f50 */ if (fZ) goto L_004c5f50;
L_004c5f35:; BB(0x004c5f35);
    /* 004c5f35: mov dword ptr [eax + 0x85c], 1 */ W32((u32)(r_eax+0x85cu), 0x1u);
    /* 004c5f3f: call 0x717f38 */ r_esp -= 4; W32(r_esp, 0x4c5f44u); f_00717f38();
    /* 004c5f44: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004c5f47: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004c5f49: mov word ptr [edx + 0xb8], ax */ W16((u32)(r_edx+0xb8u), (u16)r_eax);
L_004c5f50:; BB(0x004c5f50);
    /* 004c5f50: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004c5f53: mov ecx, dword ptr [eax + 0x864] */ r_ecx = R32((u32)(r_eax+0x864u));
    /* 004c5f59: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c5f5b: je 0x4c61b7 */ if (fZ) goto L_004c61b7;
L_004c5f61:; BB(0x004c5f61);
    /* 004c5f61: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c5f64: je 0x4c60c6 */ if (fZ) goto L_004c60c6;
L_004c5f6a:; BB(0x004c5f6a);
    /* 004c5f6a: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c5f6d: je 0x4c608e */ if (fZ) goto L_004c608e;
L_004c5f73:; BB(0x004c5f73);
    /* 004c5f73: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c5f76: je 0x4c6000 */ if (fZ) goto L_004c6000;
L_004c5f7c:; BB(0x004c5f7c);
    /* 004c5f7c: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c5f7f: jne 0x4c5fb9 */ if (!fZ) goto L_004c5fb9;
L_004c5f81:; BB(0x004c5f81);
    /* 004c5f81: push 0x42d20000 */ { u32 v = 0x42d20000u; r_esp -= 4; W32(r_esp, v); }
    /* 004c5f86: mov ecx, eax */ r_ecx = r_eax;
    /* 004c5f88: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x4c5f8du); f_007aaa30();
    /* 004c5f8d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004c5f8f: je 0x4c6075 */ if (fZ) goto L_004c6075;
L_004c5f95:; BB(0x004c5f95);
    /* 004c5f95: push 0x8fc30c */ { u32 v = 0x8fc30cu; r_esp -= 4; W32(r_esp, v); }
    /* 004c5f9a: call 0x814f0c */ r_esp -= 4; W32(r_esp, 0x4c5f9fu); f_00814f0c();
    /* 004c5f9f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004c5fa0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004c5fa3: add dword ptr [eax + 0x864], 1 */ { u32 ad = (u32)(r_eax+0x864u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 004c5faa: mov dword ptr [eax + 0x860], 0 */ W32((u32)(r_eax+0x860u), 0x0u);
    /* 004c5fb4: jmp 0x4c6075 */ f_004c6075(); return;
L_004c5fb9:; BB(0x004c5fb9);
    /* 004c5fb9: cmp ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004c5fbc: jne 0x4c6075 */ if (!fZ) goto L_004c6075;
L_004c5fc2:; BB(0x004c5fc2);
    /* 004c5fc2: mov edx, eax */ r_edx = r_eax;
    /* 004c5fc4: fld dword ptr [edx + 0xc0] */ FPUSH(R_F32((u32)(r_edx+0xc0u)));
    /* 004c5fca: fcomp dword ptr [0x9085f0] */ fx_compare(ST(0), R_F32((u32)(0x9085f0u))); FPOP();
    /* 004c5fd0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004c5fd2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004c5fd3: jb 0x4c5fe5 */ if (fC) goto L_004c5fe5;
L_004c5fd5:; BB(0x004c5fd5);
    /* 004c5fd5: mov eax, edx */ r_eax = r_edx;
    /* 004c5fd7: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004c5fda: mov dword ptr [eax + 0x864], ecx */ W32((u32)(r_eax+0x864u), r_ecx);
    /* 004c5fe0: jmp 0x4c6075 */ f_004c6075(); return;
L_004c5fe5:; BB(0x004c5fe5);
    /* 004c5fe5: mov ecx, edx */ r_ecx = r_edx;
    /* 004c5fe7: lea edx, [ebp - 0x7c] */ r_edx = (u32)(r_ebp+0xffffff84u);
    /* 004c5fea: lea eax, [ebp - 0x74] */ r_eax = (u32)(r_ebp+0xffffff8cu);
    /* 004c5fed: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c5fee: add ecx, 0x424 */ {  u32 a = r_ecx; u32 b = 0x424u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004c5ff4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c5ff5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c5ff6: call 0x7a8d98 */ r_esp -= 4; W32(r_esp, 0x4c5ffbu); f_007a8d98();
    /* 004c5ffb: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c5ffe: jmp 0x4c6075 */ f_004c6075(); return;
L_004c6000:; BB(0x004c6000);
    /* 004c6000: mov edx, eax */ r_edx = r_eax;
    /* 004c6002: fld dword ptr [edx + 0xc0] */ FPUSH(R_F32((u32)(r_edx+0xc0u)));
    /* 004c6008: fcomp dword ptr [0x9085e8] */ fx_compare(ST(0), R_F32((u32)(0x9085e8u))); FPOP();
    /* 004c600e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004c6010: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004c6011: jbe 0x4c6075 */ if ((fC||fZ)) goto L_004c6075;
L_004c6013:; BB(0x004c6013);
    /* 004c6013: mov eax, edx */ r_eax = r_edx;
    /* 004c6015: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004c6018: mov dword ptr [eax + 0x864], ecx */ W32((u32)(r_eax+0x864u), r_ecx);
    /* 004c601e: jmp 0x4c6075 */ f_004c6075(); return;
L_004c6020:; BB(0x004c6020);
    /* 004c6020: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004c6023: jne 0x4c6075 */ if (!fZ) goto L_004c6075;
L_004c6025:; BB(0x004c6025);
    /* 004c6025: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x4c602au); f_007aa094();
    /* 004c602a: jmp 0x4c6075 */ f_004c6075(); return;
L_004c602c:; BB(0x004c602c);
    /* 004c602c: cmp edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004c602f: jne 0x4c6075 */ if (!fZ) goto L_004c6075;
L_004c6031:; BB(0x004c6031);
    /* 004c6031: mov eax, ecx */ r_eax = r_ecx;
    /* 004c6033: mov edx, dword ptr [eax + 0x8a4] */ r_edx = R32((u32)(r_eax+0x8a4u));
    /* 004c6039: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c603b: je 0x4c6056 */ if (fZ) goto L_004c6056;
L_004c603d:; BB(0x004c603d);
    /* 004c603d: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004c6041: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004c6046: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004c604a: mov edx, ecx */ r_edx = r_ecx;
    /* 004c604c: mov dword ptr [edx + 0x8a4], 0 */ W32((u32)(r_edx+0x8a4u), 0x0u);
L_004c6056:; BB(0x004c6056);
    /* 004c6056: call 0x7b9fbc */ r_esp -= 4; W32(r_esp, 0x4c605bu); f_007b9fbc();
    /* 004c605b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004c605e: mov dword ptr [eax + 0x868], 0 */ W32((u32)(r_eax+0x868u), 0x0u);
    /* 004c6068: call 0x717f38 */ r_esp -= 4; W32(r_esp, 0x4c606du); f_00717f38();
    /* 004c606d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004c6070: call 0x520e34 */ r_esp -= 4; W32(r_esp, 0x4c6075u); f_00520e34();
L_004c6075:; BB(0x004c6075);
    /* 004c6075: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 004c6078: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c607b: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004c607e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004c6081: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004c6088: mov esp, ebp */ r_esp = r_ebp;
    /* 004c608a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c608b: ret 4 */ FN_RET(0x004c5eb0); r_esp += 8; return;
L_004c608e:; BB(0x004c608e);
    /* 004c608e: push 0x42960000 */ { u32 v = 0x42960000u; r_esp -= 4; W32(r_esp, v); }
    /* 004c6093: mov ecx, eax */ r_ecx = r_eax;
    /* 004c6095: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x4c609au); f_007aaa30();
    /* 004c609a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004c609c: je 0x4c6075 */ if (fZ) goto L_004c6075;
L_004c609e:; BB(0x004c609e);
    /* 004c609e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004c60a0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c60a1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c60a2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c60a3: push 0x407 */ { u32 v = 0x407u; r_esp -= 4; W32(r_esp, v); }
    /* 004c60a8: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4c60adu); f_00814298();
    /* 004c60ad: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c60b0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004c60b3: add dword ptr [eax + 0x864], 1 */ { u32 ad = (u32)(r_eax+0x864u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 004c60ba: mov dword ptr [eax + 0x860], 0 */ W32((u32)(r_eax+0x860u), 0x0u);
    /* 004c60c4: jmp 0x4c6075 */ f_004c6075(); return;
L_004c60c6:; BB(0x004c60c6);
    /* 004c60c6: push 0x42700000 */ { u32 v = 0x42700000u; r_esp -= 4; W32(r_esp, v); }
    /* 004c60cb: mov ecx, eax */ r_ecx = r_eax;
    /* 004c60cd: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x4c60d2u); f_007aaa30();
    /* 004c60d2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c60d4: je 0x4c60e8 */ if (fZ) goto L_004c60e8;
L_004c60d6:; BB(0x004c60d6);
    /* 004c60d6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004c60d8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c60d9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c60da: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c60db: push 0x40f */ { u32 v = 0x40fu; r_esp -= 4; W32(r_esp, v); }
    /* 004c60e0: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4c60e5u); f_00814298();
    /* 004c60e5: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004c60e8:; BB(0x004c60e8);
    /* 004c60e8: push 0x427c0000 */ { u32 v = 0x427c0000u; r_esp -= 4; W32(r_esp, v); }
    /* 004c60ed: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004c60f0: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x4c60f5u); f_007aaa30();
    /* 004c60f5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004c60f7: je 0x4c6075 */ if (fZ) goto L_004c6075;
L_004c60fd:; BB(0x004c60fd);
    /* 004c60fd: fld dword ptr [0x9085d8] */ FPUSH(R_F32((u32)(0x9085d8u)));
    /* 004c6103: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004c6106: fld dword ptr [eax + 0x460] */ FPUSH(R_F32((u32)(r_eax+0x460u)));
    /* 004c610c: fadd dword ptr [eax + 0x478] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x478u));
    /* 004c6112: fld dword ptr [eax + 0x468] */ FPUSH(R_F32((u32)(r_eax+0x468u)));
    /* 004c6118: fadd dword ptr [eax + 0x480] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x480u));
    /* 004c611e: mov ebx, dword ptr [eax + 0x688] */ r_ebx = R32((u32)(r_eax+0x688u));
    /* 004c6124: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 004c6127: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004c6129: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 004c612b: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004c612d: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004c612f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004c6131: fstp dword ptr [ebp - 0x70] */ W_F32((u32)(r_ebp+0xffffff90u), ST(0)); FPOP();
    /* 004c6134: fstp dword ptr [ebp - 0x68] */ W_F32((u32)(r_ebp+0xffffff98u), ST(0)); FPOP();
    /* 004c6137: mov dword ptr [ebp - 0x6c], 0 */ W32((u32)(r_ebp+0xffffff94u), 0x0u);
    /* 004c613e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004c6140: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004c6142: jle 0x4c6154 */ if ((fZ||fS!=fO)) goto L_004c6154;
L_004c6144:; BB(0x004c6144);
    /* 004c6144: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 004c6146: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 004c6149: mov dword ptr [edx + ecx*4], eax */ W32((u32)(r_edx+r_ecx*4), r_eax);
    /* 004c614c: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004c614f: cmp ecx, dword ptr [ebx + 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebx+0xcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c6152: jl 0x4c6144 */ if ((fS!=fO)) goto L_004c6144;
L_004c6154:; BB(0x004c6154);
    /* 004c6154: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004c6157: mov dword ptr [ebx + 8], 0 */ W32((u32)(r_ebx+0x8u), 0x0u);
    /* 004c615e: movzx edx, word ptr [eax + 0x1c] */ r_edx = (u32)R16((u32)(r_eax+0x1cu));
    /* 004c6162: lea ecx, [ebp - 0x70] */ r_ecx = (u32)(r_ebp+0xffffff90u);
    /* 004c6165: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c6166: push 0x42c80000 */ { u32 v = 0x42c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 004c616b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c616c: call 0x4cfc08 */ r_esp -= 4; W32(r_esp, 0x4c6171u); f_004cfc08();
    /* 004c6171: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004c6174: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004c6176: mov edx, dword ptr [eax + 0x770] */ r_edx = R32((u32)(r_eax+0x770u));
    /* 004c617c: lea ebx, [eax + 0x38] */ r_ebx = (u32)(r_eax+0x38u);
    /* 004c617f: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004c6182: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004c6183: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x4c6188u); f_0050b7a4();
    /* 004c6188: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c618b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004c618e: mov edx, dword ptr [eax + 0x770] */ r_edx = R32((u32)(r_eax+0x770u));
    /* 004c6194: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 004c6197: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c619a: je 0x4c61a8 */ if (fZ) goto L_004c61a8;
L_004c619c:; BB(0x004c619c);
    /* 004c619c: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004c619e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c619f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004c61a0: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x4c61a5u); f_0050b7a4();
    /* 004c61a5: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004c61a8:; BB(0x004c61a8);
    /* 004c61a8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004c61ab: add dword ptr [eax + 0x864], 1 */ { u32 ad = (u32)(r_eax+0x864u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 004c61b2: jmp 0x4c6075 */ f_004c6075(); return;
L_004c61b7:; BB(0x004c61b7);
    /* 004c61b7: push 0x40000000 */ { u32 v = 0x40000000u; r_esp -= 4; W32(r_esp, v); }
    /* 004c61bc: mov ecx, eax */ r_ecx = r_eax;
    /* 004c61be: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x4c61c3u); f_007aaa30();
    /* 004c61c3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004c61c5: je 0x4c6075 */ if (fZ) goto L_004c6075;
L_004c61cb:; BB(0x004c61cb);
    /* 004c61cb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004c61cd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c61ce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c61cf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c61d0: push 0x405 */ { u32 v = 0x405u; r_esp -= 4; W32(r_esp, v); }
    /* 004c61d5: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4c61dau); f_00814298();
    /* 004c61da: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c61dd: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004c61e0: add dword ptr [eax + 0x864], 1 */ { u32 ad = (u32)(r_eax+0x864u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 004c61e7: jmp 0x4c6075 */ f_004c6075(); return;
L_004c61ec:; BB(0x004c61ec);
    /* 004c61ec: mov eax, ecx */ r_eax = r_ecx;
    /* 004c61ee: mov edx, dword ptr [eax + 0x85c] */ r_edx = R32((u32)(r_eax+0x85cu));
    /* 004c61f4: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004c61f7: jne 0x4c6075 */ if (!fZ) goto L_004c6075;
L_004c61fd:; BB(0x004c61fd);
    /* 004c61fd: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004c61ff: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004c6201: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004c6203: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4c6209u); call_ind(t); }
    /* 004c6209: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 004c620c: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 004c6210: mov ecx, dword ptr [edi + 0x67c] */ r_ecx = R32((u32)(r_edi+0x67cu));
    /* 004c6216: movzx ebx, word ptr [edi + 0x394] */ r_ebx = (u32)R16((u32)(r_edi+0x394u));
    /* 004c621d: mov esi, dword ptr [edi + 0x690] */ r_esi = R32((u32)(r_edi+0x690u));
    /* 004c6223: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004c6225: mov byte ptr [ebp - 0x64], 0xa8 */ W8((u32)(r_ebp+0xffffff9cu), 0xa8u);
    /* 004c6229: mov word ptr [ebp - 0x62], ax */ W16((u32)(r_ebp+0xffffff9eu), (u16)r_eax);
    /* 004c622d: mov eax, dword ptr [edi + 0x694] */ r_eax = R32((u32)(r_edi+0x694u));
    /* 004c6233: mov byte ptr [ebp - 0x63], 6 */ W8((u32)(r_ebp+0xffffff9du), 0x6u);
    /* 004c6237: mov word ptr [ebp - 0x60], dx */ W16((u32)(r_ebp+0xffffffa0u), (u16)r_edx);
    /* 004c623b: mov word ptr [ebp - 0x5e], cx */ W16((u32)(r_ebp+0xffffffa2u), (u16)r_ecx);
    /* 004c623f: mov dword ptr [ebp - 0x5c], ebx */ W32((u32)(r_ebp+0xffffffa4u), r_ebx);
    /* 004c6242: mov dword ptr [ebp - 0x58], esi */ W32((u32)(r_ebp+0xffffffa8u), r_esi);
    /* 004c6245: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 004c6248: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4c624du); f_008587a5();
    /* 004c624d: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 004c6250: fild dword ptr [ebp - 0x44] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffbcu)));
    /* 004c6253: fdiv dword ptr [0x9085c4] */ ST(0) = ST(0) / R_F32((u32)(0x9085c4u));
    /* 004c6259: fmul dword ptr [0x9085c8] */ ST(0) = ST(0) * R_F32((u32)(0x9085c8u));
    /* 004c625f: lea ecx, [ebp - 0x64] */ r_ecx = (u32)(r_ebp+0xffffff9cu);
    /* 004c6262: fnstcw word ptr [ebp - 0x3c] */ W16((u32)(r_ebp+0xffffffc4u), fcw);
    /* 004c6265: movzx eax, word ptr [ebp - 0x3c] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc4u));
    /* 004c6269: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004c626e: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 004c6271: fldcw word ptr [ebp - 0x34] */ fcw = R16((u32)(r_ebp+0xffffffccu));
    /* 004c6274: fistp dword ptr [ebp - 0x2c] */ W32((u32)(r_ebp+0xffffffd4u), (u32)fx_int32(ST(0))); FPOP();
    /* 004c6277: fldcw word ptr [ebp - 0x3c] */ fcw = R16((u32)(r_ebp+0xffffffc4u));
    /* 004c627a: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 004c627d: mov byte ptr [ebp - 0x50], al */ W8((u32)(r_ebp+0xffffffb0u), (u8)r_eax);
    /* 004c6280: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4c6285u); f_008003e0();
    /* 004c6285: jmp 0x4c6075 */ f_004c6075(); return;
L_004c628a:; BB(0x004c628a);
    /* 004c628a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004c628c: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 004c6293: mov dword ptr [ecx + 0x3ec], eax */ W32((u32)(r_ecx+0x3ecu), r_eax);
    /* 004c6299: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x4c629eu); f_007aa094();
    /* 004c629e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004c62a1: mov dword ptr [eax + 0x868], 1 */ W32((u32)(r_eax+0x868u), 0x1u);
    /* 004c62ab: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004c62ad: mov dword ptr [eax + 0x8a4], edx */ W32((u32)(r_eax+0x8a4u), r_edx);
    /* 004c62b3: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 004c62b5: mov dword ptr [eax + 0x85c], edx */ W32((u32)(r_eax+0x85cu), r_edx);
    /* 004c62bb: mov dword ptr [eax + 0x864], edx */ W32((u32)(r_eax+0x864u), r_edx);
    /* 004c62c1: mov dword ptr [eax + 0x860], edx */ W32((u32)(r_eax+0x860u), r_edx);
    /* 004c62c7: mov dword ptr [ebp - 0x4c], edx */ W32((u32)(r_ebp+0xffffffb4u), r_edx);
    /* 004c62ca: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4c62cfu); f_005caba4();
    /* 004c62cf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004c62d0: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 004c62d3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c62d5: je 0x4c6302 */ if (fZ) goto L_004c6302;
L_004c62d7:; BB(0x004c62d7);
    /* 004c62d7: mov dword ptr [ebp - 0x4c], 1 */ W32((u32)(r_ebp+0xffffffb4u), 0x1u);
    /* 004c62de: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004c62e5: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004c62e8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c62e9: mov ecx, eax */ r_ecx = r_eax;
    /* 004c62eb: push 0x3f000000 */ { u32 v = 0x3f000000u; r_esp -= 4; W32(r_esp, v); }
    /* 004c62f0: push dword ptr [0xaca37c] */ { u32 v = R32((u32)(0xaca37cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004c62f6: call 0x4cecbc */ r_esp -= 4; W32(r_esp, 0x4c62fbu); f_004cecbc();
    /* 004c62fb: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
L_004c6302:; BB(0x004c6302);
    /* 004c6302: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004c6309: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004c630c: mov eax, 0x1a */ r_eax = 0x1au;
    /* 004c6311: mov word ptr [edx + 0xb8], ax */ W16((u32)(r_edx+0xb8u), (u16)r_eax);
    /* 004c6318: call 0x717f74 */ r_esp -= 4; W32(r_esp, 0x4c631du); f_00717f74();
    /* 004c631d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004c6320: call 0x520e2c */ r_esp -= 4; W32(r_esp, 0x4c6325u); f_00520e2c();
    /* 004c6325: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004c6328: call 0x7ba03c */ r_esp -= 4; W32(r_esp, 0x4c632du); f_007ba03c();
    /* 004c632d: jmp 0x4c6075 */ f_004c6075(); return;
}

