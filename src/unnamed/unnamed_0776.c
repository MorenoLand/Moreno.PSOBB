#include "protos.h"

void f_00776005(void)
{
    FN_ENTER(0x00776005);
    /* 00776005: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 00776008: test edx, 0x2000000 */ {  u32 a = r_edx; u32 b = 0x2000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077600e: jne 0x776021 */ if (!fZ) goto L_00776021;
L_00776010:; BB(0x00776010);
    /* 00776010: lea edx, [esp + 0x44] */ r_edx = (u32)(r_esp+0x44u);
    /* 00776014: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00776016: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00776017: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00776018: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00776019: call 0x5ce89c */ r_esp -= 4; W32(r_esp, 0x77601eu); f_005ce89c();
    /* 0077601e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00776021:; BB(0x00776021);
    /* 00776021: fld dword ptr [0x9781f4] */ FPUSH(R_F32((u32)(0x9781f4u)));
    /* 00776027: movsx edx, word ptr [ebx + 0x336] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x336u));
    /* 0077602e: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 00776032: fild dword ptr [esp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_esp+0xcu)));
    /* 00776036: fcom dword ptr [0x9781f0] */ fx_compare(ST(0), R_F32((u32)(0x9781f0u))); 
    /* 0077603c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0077603e: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00776040: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00776041: jb 0x776167 */ if (fC) goto L_00776167;
L_00776047:; BB(0x00776047);
    /* 00776047: mov edx, dword ptr [0xa942c0] */ r_edx = R32((u32)(0xa942c0u));
    /* 0077604d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077604f: je 0x77612a */ if (fZ) goto L_0077612a;
L_00776055:; BB(0x00776055);
    /* 00776055: movsx esi, word ptr [ebp + 0x32c] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0x32cu));
    /* 0077605c: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077605f: jne 0x7760d5 */ if (!fZ) goto L_007760d5;
L_00776061:; BB(0x00776061);
    /* 00776061: movsx edx, word ptr [ebx + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x32cu));
    /* 00776068: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077606b: jne 0x7760d5 */ if (!fZ) goto L_007760d5;
L_0077606d:; BB(0x0077606d);
    /* 0077606d: movzx edi, word ptr [ebp + 0x2d8] */ r_edi = (u32)R16((u32)(r_ebp+0x2d8u));
    /* 00776074: movzx esi, word ptr [ebx + 0x1c] */ r_esi = (u32)R16((u32)(r_ebx+0x1cu));
    /* 00776078: fnstcw word ptr [esp + 0x14] */ W16((u32)(r_esp+0x14u), fcw);
    /* 0077607c: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 00776081: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00776086: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 0077608a: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 0077608e: fistp qword ptr [esp + 0x24] */ W64((u32)(r_esp+0x24u), (u64)fx_int64(ST(0))); FPOP();
    /* 00776092: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 00776096: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 0077609a: mov byte ptr [esp + 0x60], 0x9a */ W8((u32)(r_esp+0x60u), 0x9au);
    /* 0077609f: mov byte ptr [esp + 0x61], 2 */ W8((u32)(r_esp+0x61u), 0x2u);
    /* 007760a4: mov word ptr [esp + 0x62], si */ W16((u32)(r_esp+0x62u), (u16)r_esi);
    /* 007760a9: mov word ptr [esp + 0x64], di */ W16((u32)(r_esp+0x64u), (u16)r_edi);
    /* 007760ae: mov byte ptr [esp + 0x66], 1 */ W8((u32)(r_esp+0x66u), 0x1u);
    /* 007760b3: mov byte ptr [esp + 0x67], dl */ W8((u32)(r_esp+0x67u), (u8)r_edx);
    /* 007760b7: lea ecx, [esp + 0x60] */ r_ecx = (u32)(r_esp+0x60u);
    /* 007760bb: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x7760c0u); f_008003e0();
    /* 007760c0: push 0x40400000 */ { u32 v = 0x40400000u; r_esp -= 4; W32(r_esp, v); }
    /* 007760c5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007760c6: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 007760c9: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007760cb: call dword ptr [edx + 0x5c] */ { u32 t = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, 0x7760ceu); call_ind(t); }
    /* 007760ce: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007760d0: jmp 0x776191 */ goto L_00776191;
L_007760d5:; BB(0x007760d5);
    /* 007760d5: cmp esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007760d8: jne 0x7760ed */ if (!fZ) goto L_007760ed;
L_007760da:; BB(0x007760da);
    /* 007760da: movzx edx, word ptr [ebx + 0x1c] */ r_edx = (u32)R16((u32)(r_ebx+0x1cu));
    /* 007760de: cmp edx, 0x1000 */ {  u32 a = r_edx; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007760e4: jge 0x7760ed */ if ((fS==fO)) goto L_007760ed;
L_007760e6:; BB(0x007760e6);
    /* 007760e6: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007760e8: jmp 0x776191 */ goto L_00776191;
L_007760ed:; BB(0x007760ed);
    /* 007760ed: fnstcw word ptr [esp + 0x14] */ W16((u32)(r_esp+0x14u), fcw);
    /* 007760f1: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 007760f6: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007760fb: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 007760ff: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 00776103: fistp dword ptr [esp + 0x24] */ W32((u32)(r_esp+0x24u), (u32)fx_int32(ST(0))); FPOP();
    /* 00776107: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 0077610b: movsx edx, word ptr [esp + 0x24] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esp+0x24u));
    /* 00776110: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00776111: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00776113: call 0x7773a0 */ r_esp -= 4; W32(r_esp, 0x776118u); f_007773a0();
    /* 00776118: push 0x40400000 */ { u32 v = 0x40400000u; r_esp -= 4; W32(r_esp, v); }
    /* 0077611d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0077611e: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00776121: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00776123: call dword ptr [edx + 0x5c] */ { u32 t = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, 0x776126u); call_ind(t); }
    /* 00776126: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00776128: jmp 0x776191 */ goto L_00776191;
L_0077612a:; BB(0x0077612a);
    /* 0077612a: fnstcw word ptr [esp + 0x14] */ W16((u32)(r_esp+0x14u), fcw);
    /* 0077612e: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 00776133: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00776138: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 0077613c: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 00776140: fistp dword ptr [esp + 0x24] */ W32((u32)(r_esp+0x24u), (u32)fx_int32(ST(0))); FPOP();
    /* 00776144: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 00776148: movsx edx, word ptr [esp + 0x24] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esp+0x24u));
    /* 0077614d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0077614e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00776150: call 0x7773a0 */ r_esp -= 4; W32(r_esp, 0x776155u); f_007773a0();
    /* 00776155: push 0x40400000 */ { u32 v = 0x40400000u; r_esp -= 4; W32(r_esp, v); }
    /* 0077615a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0077615b: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 0077615e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00776160: call dword ptr [edx + 0x5c] */ { u32 t = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, 0x776163u); call_ind(t); }
    /* 00776163: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00776165: jmp 0x776191 */ goto L_00776191;
L_00776167:; BB(0x00776167);
    /* 00776167: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00776169: lea esi, [esp + 0x44] */ r_esi = (u32)(r_esp+0x44u);
    /* 0077616d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0077616e: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 00776171: or edx, 0x100 */ {  u32 a = r_edx; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00776177: mov dword ptr [ebp + 0x30], edx */ W32((u32)(r_ebp+0x30u), r_edx);
    /* 0077617a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0077617c: call 0x777450 */ r_esp -= 4; W32(r_esp, 0x776181u); f_00777450();
    /* 00776181: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00776183: je 0x776191 */ if (fZ) goto L_00776191;
L_00776185:; BB(0x00776185);
    /* 00776185: mov edx, dword ptr [edi + 0x18] */ r_edx = R32((u32)(r_edi+0x18u));
    /* 00776188: and edx, 0xfbffffff */ {  u32 a = r_edx; u32 b = 0xfbffffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0077618e: mov dword ptr [edi + 0x18], edx */ W32((u32)(r_edi+0x18u), r_edx);
L_00776191:; BB(0x00776191);
    /* 00776191: fld dword ptr [0x978228] */ FPUSH(R_F32((u32)(0x978228u)));
    /* 00776197: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 0077619b: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0077619d: jmp 0x776eed */ goto L_00776eed;
L_00776eed:; BB(0x00776eed);
    /* 00776eed: mov edx, dword ptr [esp + 0x40] */ r_edx = R32((u32)(r_esp+0x40u));
    /* 00776ef1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00776ef3: jne 0x776f02 */ if (!fZ) goto L_00776f02;
L_00776ef5:; BB(0x00776ef5);
    /* 00776ef5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00776ef7: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00776efa: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00776efc: call dword ptr [edx + 0x130] */ { u32 t = R32((u32)(r_edx+0x130u)); r_esp -= 4; W32(r_esp, 0x776f02u); call_ind(t); }
L_00776f02:; BB(0x00776f02);
    /* 00776f02: movsx edx, word ptr [ebp + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x32cu));
    /* 00776f09: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00776f0c: jne 0x776f51 */ if (!fZ) goto L_00776f51;
L_00776f0e:; BB(0x00776f0e);
    /* 00776f0e: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 00776f12: fmul dword ptr [0x978208] */ ST(0) = ST(0) * R_F32((u32)(0x978208u));
    /* 00776f18: fnstcw word ptr [esp + 0x14] */ W16((u32)(r_esp+0x14u), fcw);
    /* 00776f1c: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 00776f21: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00776f26: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 00776f2a: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 00776f2e: fistp dword ptr [esp + 0x24] */ W32((u32)(r_esp+0x24u), (u32)fx_int32(ST(0))); FPOP();
    /* 00776f32: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 00776f36: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00776f38: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 00776f3c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00776f3d: call 0x69b4f0 */ r_esp -= 4; W32(r_esp, 0x776f42u); f_0069b4f0();
    /* 00776f42: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00776f45: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00776f46: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00776f49: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00776f4b: call dword ptr [edx + 0x134] */ { u32 t = R32((u32)(r_edx+0x134u)); r_esp -= 4; W32(r_esp, 0x776f51u); call_ind(t); }
L_00776f51:; BB(0x00776f51);
    /* 00776f51: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00776f52: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00776f53: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00776f55: call 0x773ab0 */ r_esp -= 4; W32(r_esp, 0x776f5au); f_00773ab0();
    /* 00776f5a: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 00776f5e: add esp, 0xb0 */ {  u32 a = r_esp; u32 b = 0xb0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00776f64: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00776f65: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00776f66: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00776f67: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00776f68: ret 8 */ FN_RET(0x00776005); r_esp += 12; return;
}

void f_00776026(void)
{
    FN_ENTER(0x00776026);
    /* 00776026: add byte ptr [edi], cl */ { u32 ad = (u32)(r_edi);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00776028: mov edi, 0x33693 */ r_edi = 0x33693u;
    /* 0077602d: add byte ptr [ecx - 0x24f3dbac], cl */ { u32 ad = (u32)(r_ecx+0xdb0c2454u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00776033: inc esp */ { u32 x = r_esp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00776034: and al, 0xc */ {  u32 a = (u8)r_eax; u32 b = 0xcu; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00776036: fcom dword ptr [0x9781f0] */ fx_compare(ST(0), R_F32((u32)(0x9781f0u))); 
    /* 0077603c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0077603e: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00776040: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00776041: jb 0x776167 */ if (fC) goto L_00776167;
L_00776047:; BB(0x00776047);
    /* 00776047: mov edx, dword ptr [0xa942c0] */ r_edx = R32((u32)(0xa942c0u));
    /* 0077604d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077604f: je 0x77612a */ if (fZ) goto L_0077612a;
L_00776055:; BB(0x00776055);
    /* 00776055: movsx esi, word ptr [ebp + 0x32c] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0x32cu));
    /* 0077605c: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077605f: jne 0x7760d5 */ if (!fZ) goto L_007760d5;
L_00776061:; BB(0x00776061);
    /* 00776061: movsx edx, word ptr [ebx + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x32cu));
    /* 00776068: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077606b: jne 0x7760d5 */ if (!fZ) goto L_007760d5;
L_0077606d:; BB(0x0077606d);
    /* 0077606d: movzx edi, word ptr [ebp + 0x2d8] */ r_edi = (u32)R16((u32)(r_ebp+0x2d8u));
    /* 00776074: movzx esi, word ptr [ebx + 0x1c] */ r_esi = (u32)R16((u32)(r_ebx+0x1cu));
    /* 00776078: fnstcw word ptr [esp + 0x14] */ W16((u32)(r_esp+0x14u), fcw);
    /* 0077607c: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 00776081: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00776086: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 0077608a: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 0077608e: fistp qword ptr [esp + 0x24] */ W64((u32)(r_esp+0x24u), (u64)fx_int64(ST(0))); FPOP();
    /* 00776092: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 00776096: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 0077609a: mov byte ptr [esp + 0x60], 0x9a */ W8((u32)(r_esp+0x60u), 0x9au);
    /* 0077609f: mov byte ptr [esp + 0x61], 2 */ W8((u32)(r_esp+0x61u), 0x2u);
    /* 007760a4: mov word ptr [esp + 0x62], si */ W16((u32)(r_esp+0x62u), (u16)r_esi);
    /* 007760a9: mov word ptr [esp + 0x64], di */ W16((u32)(r_esp+0x64u), (u16)r_edi);
    /* 007760ae: mov byte ptr [esp + 0x66], 1 */ W8((u32)(r_esp+0x66u), 0x1u);
    /* 007760b3: mov byte ptr [esp + 0x67], dl */ W8((u32)(r_esp+0x67u), (u8)r_edx);
    /* 007760b7: lea ecx, [esp + 0x60] */ r_ecx = (u32)(r_esp+0x60u);
    /* 007760bb: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x7760c0u); f_008003e0();
    /* 007760c0: push 0x40400000 */ { u32 v = 0x40400000u; r_esp -= 4; W32(r_esp, v); }
    /* 007760c5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007760c6: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 007760c9: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007760cb: call dword ptr [edx + 0x5c] */ { u32 t = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, 0x7760ceu); call_ind(t); }
    /* 007760ce: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007760d0: jmp 0x776191 */ goto L_00776191;
L_007760d5:; BB(0x007760d5);
    /* 007760d5: cmp esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007760d8: jne 0x7760ed */ if (!fZ) goto L_007760ed;
L_007760da:; BB(0x007760da);
    /* 007760da: movzx edx, word ptr [ebx + 0x1c] */ r_edx = (u32)R16((u32)(r_ebx+0x1cu));
    /* 007760de: cmp edx, 0x1000 */ {  u32 a = r_edx; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007760e4: jge 0x7760ed */ if ((fS==fO)) goto L_007760ed;
L_007760e6:; BB(0x007760e6);
    /* 007760e6: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007760e8: jmp 0x776191 */ goto L_00776191;
L_007760ed:; BB(0x007760ed);
    /* 007760ed: fnstcw word ptr [esp + 0x14] */ W16((u32)(r_esp+0x14u), fcw);
    /* 007760f1: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 007760f6: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007760fb: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 007760ff: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 00776103: fistp dword ptr [esp + 0x24] */ W32((u32)(r_esp+0x24u), (u32)fx_int32(ST(0))); FPOP();
    /* 00776107: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 0077610b: movsx edx, word ptr [esp + 0x24] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esp+0x24u));
    /* 00776110: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00776111: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00776113: call 0x7773a0 */ r_esp -= 4; W32(r_esp, 0x776118u); f_007773a0();
    /* 00776118: push 0x40400000 */ { u32 v = 0x40400000u; r_esp -= 4; W32(r_esp, v); }
    /* 0077611d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0077611e: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00776121: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00776123: call dword ptr [edx + 0x5c] */ { u32 t = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, 0x776126u); call_ind(t); }
    /* 00776126: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00776128: jmp 0x776191 */ goto L_00776191;
L_0077612a:; BB(0x0077612a);
    /* 0077612a: fnstcw word ptr [esp + 0x14] */ W16((u32)(r_esp+0x14u), fcw);
    /* 0077612e: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 00776133: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00776138: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 0077613c: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 00776140: fistp dword ptr [esp + 0x24] */ W32((u32)(r_esp+0x24u), (u32)fx_int32(ST(0))); FPOP();
    /* 00776144: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 00776148: movsx edx, word ptr [esp + 0x24] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esp+0x24u));
    /* 0077614d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0077614e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00776150: call 0x7773a0 */ r_esp -= 4; W32(r_esp, 0x776155u); f_007773a0();
    /* 00776155: push 0x40400000 */ { u32 v = 0x40400000u; r_esp -= 4; W32(r_esp, v); }
    /* 0077615a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0077615b: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 0077615e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00776160: call dword ptr [edx + 0x5c] */ { u32 t = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, 0x776163u); call_ind(t); }
    /* 00776163: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00776165: jmp 0x776191 */ goto L_00776191;
L_00776167:; BB(0x00776167);
    /* 00776167: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00776169: lea esi, [esp + 0x44] */ r_esi = (u32)(r_esp+0x44u);
    /* 0077616d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0077616e: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 00776171: or edx, 0x100 */ {  u32 a = r_edx; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00776177: mov dword ptr [ebp + 0x30], edx */ W32((u32)(r_ebp+0x30u), r_edx);
    /* 0077617a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0077617c: call 0x777450 */ r_esp -= 4; W32(r_esp, 0x776181u); f_00777450();
    /* 00776181: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00776183: je 0x776191 */ if (fZ) goto L_00776191;
L_00776185:; BB(0x00776185);
    /* 00776185: mov edx, dword ptr [edi + 0x18] */ r_edx = R32((u32)(r_edi+0x18u));
    /* 00776188: and edx, 0xfbffffff */ {  u32 a = r_edx; u32 b = 0xfbffffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0077618e: mov dword ptr [edi + 0x18], edx */ W32((u32)(r_edi+0x18u), r_edx);
L_00776191:; BB(0x00776191);
    /* 00776191: fld dword ptr [0x978228] */ FPUSH(R_F32((u32)(0x978228u)));
    /* 00776197: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 0077619b: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0077619d: jmp 0x776eed */ goto L_00776eed;
L_00776eed:; BB(0x00776eed);
    /* 00776eed: mov edx, dword ptr [esp + 0x40] */ r_edx = R32((u32)(r_esp+0x40u));
    /* 00776ef1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00776ef3: jne 0x776f02 */ if (!fZ) goto L_00776f02;
L_00776ef5:; BB(0x00776ef5);
    /* 00776ef5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00776ef7: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00776efa: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00776efc: call dword ptr [edx + 0x130] */ { u32 t = R32((u32)(r_edx+0x130u)); r_esp -= 4; W32(r_esp, 0x776f02u); call_ind(t); }
L_00776f02:; BB(0x00776f02);
    /* 00776f02: movsx edx, word ptr [ebp + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x32cu));
    /* 00776f09: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00776f0c: jne 0x776f51 */ if (!fZ) goto L_00776f51;
L_00776f0e:; BB(0x00776f0e);
    /* 00776f0e: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 00776f12: fmul dword ptr [0x978208] */ ST(0) = ST(0) * R_F32((u32)(0x978208u));
    /* 00776f18: fnstcw word ptr [esp + 0x14] */ W16((u32)(r_esp+0x14u), fcw);
    /* 00776f1c: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 00776f21: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00776f26: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 00776f2a: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 00776f2e: fistp dword ptr [esp + 0x24] */ W32((u32)(r_esp+0x24u), (u32)fx_int32(ST(0))); FPOP();
    /* 00776f32: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 00776f36: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00776f38: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 00776f3c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00776f3d: call 0x69b4f0 */ r_esp -= 4; W32(r_esp, 0x776f42u); f_0069b4f0();
    /* 00776f42: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00776f45: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00776f46: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00776f49: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00776f4b: call dword ptr [edx + 0x134] */ { u32 t = R32((u32)(r_edx+0x134u)); r_esp -= 4; W32(r_esp, 0x776f51u); call_ind(t); }
L_00776f51:; BB(0x00776f51);
    /* 00776f51: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00776f52: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00776f53: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00776f55: call 0x773ab0 */ r_esp -= 4; W32(r_esp, 0x776f5au); f_00773ab0();
    /* 00776f5a: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 00776f5e: add esp, 0xb0 */ {  u32 a = r_esp; u32 b = 0xb0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00776f64: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00776f65: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00776f66: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00776f67: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00776f68: ret 8 */ FN_RET(0x00776026); r_esp += 12; return;
}

void f_0077616c(void)
{
    FN_ENTER(0x0077616c);
    /* 0077616c: inc esp */ { u32 x = r_esp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0077616d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0077616e: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 00776171: or edx, 0x100 */ {  u32 a = r_edx; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00776177: mov dword ptr [ebp + 0x30], edx */ W32((u32)(r_ebp+0x30u), r_edx);
    /* 0077617a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0077617c: call 0x777450 */ r_esp -= 4; W32(r_esp, 0x776181u); f_00777450();
    /* 00776181: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00776183: je 0x776191 */ if (fZ) goto L_00776191;
L_00776185:; BB(0x00776185);
    /* 00776185: mov edx, dword ptr [edi + 0x18] */ r_edx = R32((u32)(r_edi+0x18u));
    /* 00776188: and edx, 0xfbffffff */ {  u32 a = r_edx; u32 b = 0xfbffffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0077618e: mov dword ptr [edi + 0x18], edx */ W32((u32)(r_edi+0x18u), r_edx);
L_00776191:; BB(0x00776191);
    /* 00776191: fld dword ptr [0x978228] */ FPUSH(R_F32((u32)(0x978228u)));
    /* 00776197: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 0077619b: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0077619d: jmp 0x776eed */ goto L_00776eed;
L_00776eed:; BB(0x00776eed);
    /* 00776eed: mov edx, dword ptr [esp + 0x40] */ r_edx = R32((u32)(r_esp+0x40u));
    /* 00776ef1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00776ef3: jne 0x776f02 */ if (!fZ) goto L_00776f02;
L_00776ef5:; BB(0x00776ef5);
    /* 00776ef5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00776ef7: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00776efa: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00776efc: call dword ptr [edx + 0x130] */ { u32 t = R32((u32)(r_edx+0x130u)); r_esp -= 4; W32(r_esp, 0x776f02u); call_ind(t); }
L_00776f02:; BB(0x00776f02);
    /* 00776f02: movsx edx, word ptr [ebp + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x32cu));
    /* 00776f09: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00776f0c: jne 0x776f51 */ if (!fZ) goto L_00776f51;
L_00776f0e:; BB(0x00776f0e);
    /* 00776f0e: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 00776f12: fmul dword ptr [0x978208] */ ST(0) = ST(0) * R_F32((u32)(0x978208u));
    /* 00776f18: fnstcw word ptr [esp + 0x14] */ W16((u32)(r_esp+0x14u), fcw);
    /* 00776f1c: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 00776f21: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00776f26: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 00776f2a: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 00776f2e: fistp dword ptr [esp + 0x24] */ W32((u32)(r_esp+0x24u), (u32)fx_int32(ST(0))); FPOP();
    /* 00776f32: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 00776f36: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00776f38: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 00776f3c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00776f3d: call 0x69b4f0 */ r_esp -= 4; W32(r_esp, 0x776f42u); f_0069b4f0();
    /* 00776f42: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00776f45: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00776f46: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00776f49: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00776f4b: call dword ptr [edx + 0x134] */ { u32 t = R32((u32)(r_edx+0x134u)); r_esp -= 4; W32(r_esp, 0x776f51u); call_ind(t); }
L_00776f51:; BB(0x00776f51);
    /* 00776f51: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00776f52: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00776f53: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00776f55: call 0x773ab0 */ r_esp -= 4; W32(r_esp, 0x776f5au); f_00773ab0();
    /* 00776f5a: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 00776f5e: add esp, 0xb0 */ {  u32 a = r_esp; u32 b = 0xb0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00776f64: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00776f65: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00776f66: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00776f67: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00776f68: ret 8 */ FN_RET(0x0077616c); r_esp += 12; return;
}

void f_007761a2(void)
{
    FN_ENTER(0x007761a2);
    /* 007761a2: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 007761a5: test edx, 0x2000000 */ {  u32 a = r_edx; u32 b = 0x2000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007761ab: jne 0x7761be */ if (!fZ) goto L_007761be;
L_007761ad:; BB(0x007761ad);
    /* 007761ad: lea edx, [esp + 0x44] */ r_edx = (u32)(r_esp+0x44u);
    /* 007761b1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007761b3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007761b4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007761b5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007761b6: call 0x5ce89c */ r_esp -= 4; W32(r_esp, 0x7761bbu); f_005ce89c();
    /* 007761bb: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_007761be:; BB(0x007761be);
    /* 007761be: mov edx, dword ptr [ebx + 0x2b4] */ r_edx = R32((u32)(r_ebx+0x2b4u));
    /* 007761c4: fild dword ptr [edx + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_edx+0x20u)));
    /* 007761c7: fcomp dword ptr [0x9781ec] */ fx_compare(ST(0), R_F32((u32)(0x9781ecu))); FPOP();
    /* 007761cd: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007761cf: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007761d0: jb 0x776368 */ if (fC) goto L_00776368;
L_007761d6:; BB(0x007761d6);
    /* 007761d6: mov edx, dword ptr [0xa942c0] */ r_edx = R32((u32)(0xa942c0u));
    /* 007761dc: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007761de: jne 0x776270 */ if (!fZ) goto L_00776270;
L_007761e4:; BB(0x007761e4);
    /* 007761e4: mov edx, dword ptr [esp + 0x40] */ r_edx = R32((u32)(r_esp+0x40u));
    /* 007761e8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007761ea: jne 0x77625b */ if (!fZ) goto L_0077625b;
L_007761ec:; BB(0x007761ec);
    /* 007761ec: movsx edx, word ptr [ebx + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x32cu));
    /* 007761f3: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007761f6: jne 0x776204 */ if (!fZ) goto L_00776204;
L_007761f8:; BB(0x007761f8);
    /* 007761f8: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 007761fd: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007761ff: call 0x777290 */ r_esp -= 4; W32(r_esp, 0x776204u); f_00777290();
L_00776204:; BB(0x00776204);
    /* 00776204: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 00776209: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0077620b: call 0x7772bc */ r_esp -= 4; W32(r_esp, 0x776210u); f_007772bc();
    /* 00776210: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
    /* 00776213: test edx, 0x2000000 */ {  u32 a = r_edx; u32 b = 0x2000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00776219: lea edi, [ebx + 0x300] */ r_edi = (u32)(r_ebx+0x300u);
    /* 0077621f: jne 0x77625b */ if (!fZ) goto L_0077625b;
L_00776221:; BB(0x00776221);
    /* 00776221: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00776223: je 0x77625b */ if (fZ) goto L_0077625b;
L_00776225:; BB(0x00776225);
    /* 00776225: movsx edx, word ptr [ebx + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x32cu));
    /* 0077622c: mov esi, 0x14 */ r_esi = 0x14u;
    /* 00776231: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00776234: jne 0x77623b */ if (!fZ) goto L_0077623b;
L_00776236:; BB(0x00776236);
    /* 00776236: mov esi, 0x28 */ r_esi = 0x28u;
L_0077623b:; BB(0x0077623b);
    /* 0077623b: movzx edx, word ptr [ebx + 0x1c] */ r_edx = (u32)R16((u32)(r_ebx+0x1cu));
    /* 0077623f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00776240: push 0xffffff38 */ { u32 v = 0xffffff38u; r_esp -= 4; W32(r_esp, v); }
    /* 00776245: push 0x978390 */ { u32 v = 0x978390u; r_esp -= 4; W32(r_esp, v); }
    /* 0077624a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0077624c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0077624d: push 0xffffff00 */ { u32 v = 0xffffff00u; r_esp -= 4; W32(r_esp, v); }
    /* 00776252: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00776253: call 0x78aabc */ r_esp -= 4; W32(r_esp, 0x776258u); f_0078aabc();
    /* 00776258: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0077625b:; BB(0x0077625b);
    /* 0077625b: push 0x40400000 */ { u32 v = 0x40400000u; r_esp -= 4; W32(r_esp, v); }
    /* 00776260: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00776261: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00776264: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00776266: call dword ptr [edx + 0x5c] */ { u32 t = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, 0x776269u); call_ind(t); }
    /* 00776269: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0077626b: jmp 0x776390 */ goto L_00776390;
L_00776270:; BB(0x00776270);
    /* 00776270: movsx esi, word ptr [ebp + 0x32c] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0x32cu));
    /* 00776277: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077627a: jne 0x7762d2 */ if (!fZ) goto L_007762d2;
L_0077627c:; BB(0x0077627c);
    /* 0077627c: movsx edx, word ptr [ebx + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x32cu));
    /* 00776283: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00776286: jne 0x7762d2 */ if (!fZ) goto L_007762d2;
L_00776288:; BB(0x00776288);
    /* 00776288: movzx edi, word ptr [ebp + 0x2d8] */ r_edi = (u32)R16((u32)(r_ebp+0x2d8u));
    /* 0077628f: movzx esi, word ptr [ebx + 0x1c] */ r_esi = (u32)R16((u32)(r_ebx+0x1cu));
    /* 00776293: mov byte ptr [esp + 0x68], 0x9a */ W8((u32)(r_esp+0x68u), 0x9au);
    /* 00776298: mov edx, 2 */ r_edx = 0x2u;
    /* 0077629d: mov byte ptr [esp + 0x6f], 0xc8 */ W8((u32)(r_esp+0x6fu), 0xc8u);
    /* 007762a2: mov byte ptr [esp + 0x69], dl */ W8((u32)(r_esp+0x69u), (u8)r_edx);
    /* 007762a6: mov word ptr [esp + 0x6a], si */ W16((u32)(r_esp+0x6au), (u16)r_esi);
    /* 007762ab: mov word ptr [esp + 0x6c], di */ W16((u32)(r_esp+0x6cu), (u16)r_edi);
    /* 007762b0: mov byte ptr [esp + 0x6e], dl */ W8((u32)(r_esp+0x6eu), (u8)r_edx);
    /* 007762b4: lea ecx, [esp + 0x68] */ r_ecx = (u32)(r_esp+0x68u);
    /* 007762b8: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x7762bdu); f_008003e0();
    /* 007762bd: push 0x40400000 */ { u32 v = 0x40400000u; r_esp -= 4; W32(r_esp, v); }
    /* 007762c2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007762c3: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 007762c6: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007762c8: call dword ptr [edx + 0x5c] */ { u32 t = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, 0x7762cbu); call_ind(t); }
    /* 007762cb: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007762cd: jmp 0x776390 */ goto L_00776390;
L_007762d2:; BB(0x007762d2);
    /* 007762d2: cmp esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007762d5: jne 0x7762e7 */ if (!fZ) goto L_007762e7;
L_007762d7:; BB(0x007762d7);
    /* 007762d7: movzx edx, word ptr [ebx + 0x1c] */ r_edx = (u32)R16((u32)(r_ebx+0x1cu));
    /* 007762db: cmp edx, 0x1000 */ {  u32 a = r_edx; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007762e1: jl 0x776390 */ if ((fS!=fO)) goto L_00776390;
L_007762e7:; BB(0x007762e7);
    /* 007762e7: movsx edx, word ptr [ebx + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x32cu));
    /* 007762ee: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007762f1: jne 0x7762ff */ if (!fZ) goto L_007762ff;
L_007762f3:; BB(0x007762f3);
    /* 007762f3: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 007762f8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007762fa: call 0x777290 */ r_esp -= 4; W32(r_esp, 0x7762ffu); f_00777290();
L_007762ff:; BB(0x007762ff);
    /* 007762ff: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 00776304: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00776306: call 0x7772bc */ r_esp -= 4; W32(r_esp, 0x77630bu); f_007772bc();
    /* 0077630b: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
    /* 0077630e: test edx, 0x2000000 */ {  u32 a = r_edx; u32 b = 0x2000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00776314: lea edi, [ebx + 0x300] */ r_edi = (u32)(r_ebx+0x300u);
    /* 0077631a: jne 0x776356 */ if (!fZ) goto L_00776356;
L_0077631c:; BB(0x0077631c);
    /* 0077631c: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077631e: je 0x776356 */ if (fZ) goto L_00776356;
L_00776320:; BB(0x00776320);
    /* 00776320: movsx edx, word ptr [ebx + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x32cu));
    /* 00776327: mov esi, 0x14 */ r_esi = 0x14u;
    /* 0077632c: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077632f: jne 0x776336 */ if (!fZ) goto L_00776336;
L_00776331:; BB(0x00776331);
    /* 00776331: mov esi, 0x28 */ r_esi = 0x28u;
L_00776336:; BB(0x00776336);
    /* 00776336: movzx edx, word ptr [ebx + 0x1c] */ r_edx = (u32)R16((u32)(r_ebx+0x1cu));
    /* 0077633a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0077633b: push 0xffffff38 */ { u32 v = 0xffffff38u; r_esp -= 4; W32(r_esp, v); }
    /* 00776340: push 0x978390 */ { u32 v = 0x978390u; r_esp -= 4; W32(r_esp, v); }
    /* 00776345: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00776347: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00776348: push 0xffffff00 */ { u32 v = 0xffffff00u; r_esp -= 4; W32(r_esp, v); }
    /* 0077634d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0077634e: call 0x78aabc */ r_esp -= 4; W32(r_esp, 0x776353u); f_0078aabc();
    /* 00776353: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00776356:; BB(0x00776356);
    /* 00776356: push 0x40400000 */ { u32 v = 0x40400000u; r_esp -= 4; W32(r_esp, v); }
    /* 0077635b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0077635c: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 0077635f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00776361: call dword ptr [edx + 0x5c] */ { u32 t = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, 0x776364u); call_ind(t); }
    /* 00776364: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00776366: jmp 0x776390 */ goto L_00776390;
L_00776368:; BB(0x00776368);
    /* 00776368: lea esi, [esp + 0x44] */ r_esi = (u32)(r_esp+0x44u);
    /* 0077636c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0077636d: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 00776370: or edx, 0x100 */ {  u32 a = r_edx; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00776376: mov dword ptr [ebp + 0x30], edx */ W32((u32)(r_ebp+0x30u), r_edx);
    /* 00776379: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0077637b: call 0x777450 */ r_esp -= 4; W32(r_esp, 0x776380u); f_00777450();
    /* 00776380: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00776382: je 0x776390 */ if (fZ) goto L_00776390;
L_00776384:; BB(0x00776384);
    /* 00776384: mov edx, dword ptr [edi + 0x18] */ r_edx = R32((u32)(r_edi+0x18u));
    /* 00776387: and edx, 0xfbffffff */ {  u32 a = r_edx; u32 b = 0xfbffffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0077638d: mov dword ptr [edi + 0x18], edx */ W32((u32)(r_edi+0x18u), r_edx);
L_00776390:; BB(0x00776390);
    /* 00776390: fld dword ptr [0x978228] */ FPUSH(R_F32((u32)(0x978228u)));
    /* 00776396: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 0077639a: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0077639c: jmp 0x776eed */ goto L_00776eed;
L_00776eed:; BB(0x00776eed);
    /* 00776eed: mov edx, dword ptr [esp + 0x40] */ r_edx = R32((u32)(r_esp+0x40u));
    /* 00776ef1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00776ef3: jne 0x776f02 */ if (!fZ) goto L_00776f02;
L_00776ef5:; BB(0x00776ef5);
    /* 00776ef5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00776ef7: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00776efa: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00776efc: call dword ptr [edx + 0x130] */ { u32 t = R32((u32)(r_edx+0x130u)); r_esp -= 4; W32(r_esp, 0x776f02u); call_ind(t); }
L_00776f02:; BB(0x00776f02);
    /* 00776f02: movsx edx, word ptr [ebp + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x32cu));
    /* 00776f09: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00776f0c: jne 0x776f51 */ if (!fZ) goto L_00776f51;
L_00776f0e:; BB(0x00776f0e);
    /* 00776f0e: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 00776f12: fmul dword ptr [0x978208] */ ST(0) = ST(0) * R_F32((u32)(0x978208u));
    /* 00776f18: fnstcw word ptr [esp + 0x14] */ W16((u32)(r_esp+0x14u), fcw);
    /* 00776f1c: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 00776f21: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00776f26: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 00776f2a: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 00776f2e: fistp dword ptr [esp + 0x24] */ W32((u32)(r_esp+0x24u), (u32)fx_int32(ST(0))); FPOP();
    /* 00776f32: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 00776f36: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00776f38: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 00776f3c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00776f3d: call 0x69b4f0 */ r_esp -= 4; W32(r_esp, 0x776f42u); f_0069b4f0();
    /* 00776f42: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00776f45: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00776f46: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00776f49: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00776f4b: call dword ptr [edx + 0x134] */ { u32 t = R32((u32)(r_edx+0x134u)); r_esp -= 4; W32(r_esp, 0x776f51u); call_ind(t); }
L_00776f51:; BB(0x00776f51);
    /* 00776f51: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00776f52: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00776f53: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00776f55: call 0x773ab0 */ r_esp -= 4; W32(r_esp, 0x776f5au); f_00773ab0();
    /* 00776f5a: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 00776f5e: add esp, 0xb0 */ {  u32 a = r_esp; u32 b = 0xb0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00776f64: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00776f65: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00776f66: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00776f67: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00776f68: ret 8 */ FN_RET(0x007761a2); r_esp += 12; return;
}

void f_007763a1(void)
{
    FN_ENTER(0x007763a1);
    /* 007763a1: push 0x3f19999a */ { u32 v = 0x3f19999au; r_esp -= 4; W32(r_esp, v); }
    /* 007763a6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007763a7: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 007763aa: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007763ac: call dword ptr [edx + 0x5c] */ { u32 t = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, 0x7763afu); call_ind(t); }
    /* 007763af: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 007763b3: call 0x807db8 */ r_esp -= 4; W32(r_esp, 0x7763b8u); f_00807db8();
    /* 007763b8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007763ba: je 0x7763d7 */ if (fZ) goto L_007763d7;
L_007763bc:; BB(0x007763bc);
    /* 007763bc: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007763be: je 0x776fd7 */ if (fZ) goto L_00776fd7;
L_007763c4:; BB(0x007763c4);
    /* 007763c4: mov edx, dword ptr [edi + 0x18] */ r_edx = R32((u32)(r_edi+0x18u));
    /* 007763c7: and edx, 0xfbffffff */ {  u32 a = r_edx; u32 b = 0xfbffffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 007763cd: mov dword ptr [edi + 0x18], edx */ W32((u32)(r_edi+0x18u), r_edx);
    /* 007763d0: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 007763d2: jmp 0x776eed */ goto L_00776eed;
L_007763d7:; BB(0x007763d7);
    /* 007763d7: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 007763db: cmp edx, 0x1000 */ {  u32 a = r_edx; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007763e1: jge 0x776414 */ if ((fS==fO)) goto L_00776414;
L_007763e3:; BB(0x007763e3);
    /* 007763e3: fld dword ptr [0x978228] */ FPUSH(R_F32((u32)(0x978228u)));
    /* 007763e9: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 007763ed: lea edx, [esp + 0x44] */ r_edx = (u32)(r_esp+0x44u);
    /* 007763f1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007763f2: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007763f4: call 0x777450 */ r_esp -= 4; W32(r_esp, 0x7763f9u); f_00777450();
    /* 007763f9: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007763fb: je 0x776fde */ if (fZ) goto L_00776fde;
L_00776401:; BB(0x00776401);
    /* 00776401: mov edx, dword ptr [edi + 0x18] */ r_edx = R32((u32)(r_edi+0x18u));
    /* 00776404: and edx, 0xfbffffff */ {  u32 a = r_edx; u32 b = 0xfbffffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0077640a: mov dword ptr [edi + 0x18], edx */ W32((u32)(r_edi+0x18u), r_edx);
    /* 0077640d: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0077640f: jmp 0x776eed */ goto L_00776eed;
L_00776414:; BB(0x00776414);
    /* 00776414: mov esi, dword ptr [0xaafdb8] */ r_esi = R32((u32)(0xaafdb8u));
    /* 0077641a: mov edx, dword ptr [ebp + 0x2b4] */ r_edx = R32((u32)(r_ebp+0x2b4u));
    /* 00776420: mov edx, dword ptr [edx + 0x1c] */ r_edx = R32((u32)(r_edx+0x1cu));
    /* 00776423: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00776426: jne 0x776435 */ if (!fZ) goto L_00776435;
L_00776428:; BB(0x00776428);
    /* 00776428: lea esi, [edx + edx] */ r_esi = (u32)(r_edx+r_edx);
    /* 0077642b: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0077642d: add edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0077642f: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00776431: add esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00776433: jmp 0x77643e */ goto L_0077643e;
L_00776435:; BB(0x00776435);
    /* 00776435: lea esi, [edx + edx] */ r_esi = (u32)(r_edx+r_edx);
    /* 00776438: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0077643a: add esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0077643c: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_0077643e:; BB(0x0077643e);
    /* 0077643e: fld dword ptr [0x978224] */ FPUSH(R_F32((u32)(0x978224u)));
    /* 00776444: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 00776448: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 0077644d: imul esi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_esi; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0077644f: sar esi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 00776452: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 00776455: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00776457: mov esi, dword ptr [esp + 0x2c] */ r_esi = R32((u32)(r_esp+0x2cu));
    /* 0077645b: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 0077645f: fild dword ptr [esp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_esp+0xcu)));
    /* 00776463: mov edx, dword ptr [0xa9cd68] */ r_edx = R32((u32)(0xa9cd68u));
    /* 00776469: mov dword ptr [esp + 0xc], esi */ W32((u32)(r_esp+0xcu), r_esi);
    /* 0077646d: fild dword ptr [esp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_esp+0xcu)));
    /* 00776471: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00776473: fmul dword ptr [0x978214] */ ST(0) = ST(0) * R_F32((u32)(0x978214u));
    /* 00776479: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0077647c: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 00776480: fild dword ptr [esp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_esp+0xcu)));
    /* 00776484: fmul dword ptr [0x9781e8] */ ST(0) = ST(0) * R_F32((u32)(0x9781e8u));
    /* 0077648a: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0077648c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0077648e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0077648f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00776491: jb 0x776495 */ if (fC) goto L_00776495;
L_00776493:; BB(0x00776493);
    /* 00776493: fst st(1) */ ST(1) = ST(0);
L_00776495:; BB(0x00776495);
    /* 00776495: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00776497: fmul dword ptr [esp + 0x38] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x38u));
    /* 0077649b: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 0077649d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0077649f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007764a0: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007764a2: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 007764a4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007764a6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007764a8: jae 0x7764ac */ if (!fC) goto L_007764ac;
L_007764aa:; BB(0x007764aa);
    /* 007764aa: fst st(1) */ ST(1) = ST(0);
L_007764ac:; BB(0x007764ac);
    /* 007764ac: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007764ae: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 007764b2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007764b3: jb 0x7765af */ if (fC) goto L_007765af;
L_007764b9:; BB(0x007764b9);
    /* 007764b9: mov edx, dword ptr [esp + 0x40] */ r_edx = R32((u32)(r_esp+0x40u));
    /* 007764bd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007764bf: je 0x7764e9 */ if (fZ) goto L_007764e9;
L_007764c1:; BB(0x007764c1);
    /* 007764c1: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 007764c5: fnstcw word ptr [esp + 0x14] */ W16((u32)(r_esp+0x14u), fcw);
    /* 007764c9: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 007764ce: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007764d3: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 007764d7: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 007764db: fistp dword ptr [esp + 0x24] */ W32((u32)(r_esp+0x24u), (u32)fx_int32(ST(0))); FPOP();
    /* 007764df: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 007764e3: mov esi, dword ptr [esp + 0x24] */ r_esi = R32((u32)(r_esp+0x24u));
    /* 007764e7: jmp 0x776541 */ goto L_00776541;
L_007764e9:; BB(0x007764e9);
    /* 007764e9: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 007764ed: movsx edx, word ptr [ebp + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x32cu));
    /* 007764f4: fnstcw word ptr [esp + 0x14] */ W16((u32)(r_esp+0x14u), fcw);
    /* 007764f8: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 007764fd: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00776502: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 00776506: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 0077650a: fistp dword ptr [esp + 0x24] */ W32((u32)(r_esp+0x24u), (u32)fx_int32(ST(0))); FPOP();
    /* 0077650e: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 00776512: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00776515: mov esi, dword ptr [esp + 0x24] */ r_esi = R32((u32)(r_esp+0x24u));
    /* 00776519: jne 0x776524 */ if (!fZ) goto L_00776524;
L_0077651b:; BB(0x0077651b);
    /* 0077651b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0077651c: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 0077651f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00776521: call dword ptr [edx + 0x34] */ { u32 t = R32((u32)(r_edx+0x34u)); r_esp -= 4; W32(r_esp, 0x776524u); call_ind(t); }
L_00776524:; BB(0x00776524);
    /* 00776524: movsx edx, word ptr [ebx + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x32cu));
    /* 0077652b: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077652e: jne 0x776541 */ if (!fZ) goto L_00776541;
L_00776530:; BB(0x00776530);
    /* 00776530: movzx edi, word ptr [ebp + 0x1c] */ r_edi = (u32)R16((u32)(r_ebp+0x1cu));
    /* 00776534: movzx edx, word ptr [ebp + 0x2c] */ r_edx = (u32)R16((u32)(r_ebp+0x2cu));
    /* 00776538: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00776539: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0077653b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0077653c: call 0x7772e4 */ r_esp -= 4; W32(r_esp, 0x776541u); f_007772e4();
L_00776541:; BB(0x00776541);
    /* 00776541: lea edi, [esp + 0x44] */ r_edi = (u32)(r_esp+0x44u);
    /* 00776545: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00776547: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00776548: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 0077654b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0077654c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0077654d: or edx, 0x200 */ {  u32 a = r_edx; u32 b = 0x200u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00776553: mov dword ptr [ebp + 0x30], edx */ W32((u32)(r_ebp+0x30u), r_edx);
    /* 00776556: call 0x5ce89c */ r_esp -= 4; W32(r_esp, 0x77655bu); f_005ce89c();
    /* 0077655b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0077655e: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 00776561: test edx, 0x2000000 */ {  u32 a = r_edx; u32 b = 0x2000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00776567: jne 0x7765de */ if (!fZ) goto L_007765de;
L_00776569:; BB(0x00776569);
    /* 00776569: lea edx, [esp + 0x44] */ r_edx = (u32)(r_esp+0x44u);
    /* 0077656d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0077656e: call 0x50325c */ r_esp -= 4; W32(r_esp, 0x776573u); f_0050325c();
    /* 00776573: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00776574: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 00776578: fnstcw word ptr [esp + 0x14] */ W16((u32)(r_esp+0x14u), fcw);
    /* 0077657c: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 00776581: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00776586: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 0077658a: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 0077658e: fistp qword ptr [esp + 0x24] */ W64((u32)(r_esp+0x24u), (u64)fx_int64(ST(0))); FPOP();
    /* 00776592: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 00776596: movsx edx, word ptr [esp + 0x24] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esp+0x24u));
    /* 0077659b: lea edi, [esp + 0x44] */ r_edi = (u32)(r_esp+0x44u);
    /* 0077659f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007765a0: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 007765a2: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007765a4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007765a5: call 0x77731c */ r_esp -= 4; W32(r_esp, 0x7765aau); f_0077731c();
    /* 007765aa: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 007765ad: jmp 0x7765de */ goto L_007765de;
L_007765af:; BB(0x007765af);
    /* 007765af: fld dword ptr [0x978228] */ FPUSH(R_F32((u32)(0x978228u)));
    /* 007765b5: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 007765b9: lea edx, [esp + 0x44] */ r_edx = (u32)(r_esp+0x44u);
    /* 007765bd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007765be: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007765c0: call 0x777450 */ r_esp -= 4; W32(r_esp, 0x7765c5u); f_00777450();
    /* 007765c5: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007765c7: je 0x776fe5 */ if (fZ) goto L_00776fe5;
L_007765cd:; BB(0x007765cd);
    /* 007765cd: mov edx, dword ptr [edi + 0x18] */ r_edx = R32((u32)(r_edi+0x18u));
    /* 007765d0: and edx, 0xfbffffff */ {  u32 a = r_edx; u32 b = 0xfbffffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 007765d6: mov dword ptr [edi + 0x18], edx */ W32((u32)(r_edi+0x18u), r_edx);
    /* 007765d9: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 007765dc: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_007765de:; BB(0x007765de);
    /* 007765de: or edx, 0x200 */ {  u32 a = r_edx; u32 b = 0x200u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 007765e4: mov dword ptr [ebp + 0x30], edx */ W32((u32)(r_ebp+0x30u), r_edx);
    /* 007765e7: jmp 0x776eed */ goto L_00776eed;
L_00776eed:; BB(0x00776eed);
    /* 00776eed: mov edx, dword ptr [esp + 0x40] */ r_edx = R32((u32)(r_esp+0x40u));
    /* 00776ef1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00776ef3: jne 0x776f02 */ if (!fZ) goto L_00776f02;
L_00776ef5:; BB(0x00776ef5);
    /* 00776ef5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00776ef7: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00776efa: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00776efc: call dword ptr [edx + 0x130] */ { u32 t = R32((u32)(r_edx+0x130u)); r_esp -= 4; W32(r_esp, 0x776f02u); call_ind(t); }
L_00776f02:; BB(0x00776f02);
    /* 00776f02: movsx edx, word ptr [ebp + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x32cu));
    /* 00776f09: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00776f0c: jne 0x776f51 */ if (!fZ) goto L_00776f51;
L_00776f0e:; BB(0x00776f0e);
    /* 00776f0e: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 00776f12: fmul dword ptr [0x978208] */ ST(0) = ST(0) * R_F32((u32)(0x978208u));
    /* 00776f18: fnstcw word ptr [esp + 0x14] */ W16((u32)(r_esp+0x14u), fcw);
    /* 00776f1c: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 00776f21: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00776f26: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 00776f2a: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 00776f2e: fistp dword ptr [esp + 0x24] */ W32((u32)(r_esp+0x24u), (u32)fx_int32(ST(0))); FPOP();
    /* 00776f32: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 00776f36: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00776f38: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 00776f3c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00776f3d: call 0x69b4f0 */ r_esp -= 4; W32(r_esp, 0x776f42u); f_0069b4f0();
    /* 00776f42: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00776f45: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00776f46: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00776f49: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00776f4b: call dword ptr [edx + 0x134] */ { u32 t = R32((u32)(r_edx+0x134u)); r_esp -= 4; W32(r_esp, 0x776f51u); call_ind(t); }
L_00776f51:; BB(0x00776f51);
    /* 00776f51: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00776f52: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00776f53: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00776f55: call 0x773ab0 */ r_esp -= 4; W32(r_esp, 0x776f5au); f_00773ab0();
    /* 00776f5a: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 00776f5e: add esp, 0xb0 */ {  u32 a = r_esp; u32 b = 0xb0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00776f64: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00776f65: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00776f66: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00776f67: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00776f68: ret 8 */ FN_RET(0x007763a1); r_esp += 12; return;
L_00776fd7:; BB(0x00776fd7);
    /* 00776fd7: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00776fd9: jmp 0x776eed */ goto L_00776eed;
L_00776fde:; BB(0x00776fde);
    /* 00776fde: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00776fe0: jmp 0x776eed */ goto L_00776eed;
L_00776fe5:; BB(0x00776fe5);
    /* 00776fe5: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 00776fe8: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00776fea: jmp 0x7765de */ goto L_007765de;
}

void f_0077645f(void)
{
    FN_ENTER(0x0077645f);
    /* 0077645f: fild dword ptr [esp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_esp+0xcu)));
    /* 00776463: mov edx, dword ptr [0xa9cd68] */ r_edx = R32((u32)(0xa9cd68u));
    /* 00776469: mov dword ptr [esp + 0xc], esi */ W32((u32)(r_esp+0xcu), r_esi);
    /* 0077646d: fild dword ptr [esp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_esp+0xcu)));
    /* 00776471: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00776473: fmul dword ptr [0x978214] */ ST(0) = ST(0) * R_F32((u32)(0x978214u));
    /* 00776479: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0077647c: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 00776480: fild dword ptr [esp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_esp+0xcu)));
    /* 00776484: fmul dword ptr [0x9781e8] */ ST(0) = ST(0) * R_F32((u32)(0x9781e8u));
    /* 0077648a: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0077648c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0077648e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0077648f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00776491: jb 0x776495 */ if (fC) goto L_00776495;
L_00776493:; BB(0x00776493);
    /* 00776493: fst st(1) */ ST(1) = ST(0);
L_00776495:; BB(0x00776495);
    /* 00776495: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00776497: fmul dword ptr [esp + 0x38] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x38u));
    /* 0077649b: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 0077649d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0077649f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007764a0: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007764a2: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 007764a4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007764a6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007764a8: jae 0x7764ac */ if (!fC) goto L_007764ac;
L_007764aa:; BB(0x007764aa);
    /* 007764aa: fst st(1) */ ST(1) = ST(0);
L_007764ac:; BB(0x007764ac);
    /* 007764ac: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007764ae: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 007764b2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007764b3: jb 0x7765af */ if (fC) goto L_007765af;
L_007764b9:; BB(0x007764b9);
    /* 007764b9: mov edx, dword ptr [esp + 0x40] */ r_edx = R32((u32)(r_esp+0x40u));
    /* 007764bd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007764bf: je 0x7764e9 */ if (fZ) goto L_007764e9;
L_007764c1:; BB(0x007764c1);
    /* 007764c1: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 007764c5: fnstcw word ptr [esp + 0x14] */ W16((u32)(r_esp+0x14u), fcw);
    /* 007764c9: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 007764ce: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007764d3: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 007764d7: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 007764db: fistp dword ptr [esp + 0x24] */ W32((u32)(r_esp+0x24u), (u32)fx_int32(ST(0))); FPOP();
    /* 007764df: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 007764e3: mov esi, dword ptr [esp + 0x24] */ r_esi = R32((u32)(r_esp+0x24u));
    /* 007764e7: jmp 0x776541 */ goto L_00776541;
L_007764e9:; BB(0x007764e9);
    /* 007764e9: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 007764ed: movsx edx, word ptr [ebp + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x32cu));
    /* 007764f4: fnstcw word ptr [esp + 0x14] */ W16((u32)(r_esp+0x14u), fcw);
    /* 007764f8: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 007764fd: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00776502: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 00776506: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 0077650a: fistp dword ptr [esp + 0x24] */ W32((u32)(r_esp+0x24u), (u32)fx_int32(ST(0))); FPOP();
    /* 0077650e: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 00776512: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00776515: mov esi, dword ptr [esp + 0x24] */ r_esi = R32((u32)(r_esp+0x24u));
    /* 00776519: jne 0x776524 */ if (!fZ) goto L_00776524;
L_0077651b:; BB(0x0077651b);
    /* 0077651b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0077651c: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 0077651f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00776521: call dword ptr [edx + 0x34] */ { u32 t = R32((u32)(r_edx+0x34u)); r_esp -= 4; W32(r_esp, 0x776524u); call_ind(t); }
L_00776524:; BB(0x00776524);
    /* 00776524: movsx edx, word ptr [ebx + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x32cu));
    /* 0077652b: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077652e: jne 0x776541 */ if (!fZ) goto L_00776541;
L_00776530:; BB(0x00776530);
    /* 00776530: movzx edi, word ptr [ebp + 0x1c] */ r_edi = (u32)R16((u32)(r_ebp+0x1cu));
    /* 00776534: movzx edx, word ptr [ebp + 0x2c] */ r_edx = (u32)R16((u32)(r_ebp+0x2cu));
    /* 00776538: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00776539: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0077653b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0077653c: call 0x7772e4 */ r_esp -= 4; W32(r_esp, 0x776541u); f_007772e4();
L_00776541:; BB(0x00776541);
    /* 00776541: lea edi, [esp + 0x44] */ r_edi = (u32)(r_esp+0x44u);
    /* 00776545: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00776547: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00776548: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 0077654b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0077654c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0077654d: or edx, 0x200 */ {  u32 a = r_edx; u32 b = 0x200u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00776553: mov dword ptr [ebp + 0x30], edx */ W32((u32)(r_ebp+0x30u), r_edx);
    /* 00776556: call 0x5ce89c */ r_esp -= 4; W32(r_esp, 0x77655bu); f_005ce89c();
    /* 0077655b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0077655e: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 00776561: test edx, 0x2000000 */ {  u32 a = r_edx; u32 b = 0x2000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00776567: jne 0x7765de */ if (!fZ) goto L_007765de;
L_00776569:; BB(0x00776569);
    /* 00776569: lea edx, [esp + 0x44] */ r_edx = (u32)(r_esp+0x44u);
    /* 0077656d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0077656e: call 0x50325c */ r_esp -= 4; W32(r_esp, 0x776573u); f_0050325c();
    /* 00776573: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00776574: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 00776578: fnstcw word ptr [esp + 0x14] */ W16((u32)(r_esp+0x14u), fcw);
    /* 0077657c: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 00776581: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00776586: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 0077658a: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 0077658e: fistp qword ptr [esp + 0x24] */ W64((u32)(r_esp+0x24u), (u64)fx_int64(ST(0))); FPOP();
    /* 00776592: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 00776596: movsx edx, word ptr [esp + 0x24] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esp+0x24u));
    /* 0077659b: lea edi, [esp + 0x44] */ r_edi = (u32)(r_esp+0x44u);
    /* 0077659f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007765a0: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 007765a2: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007765a4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007765a5: call 0x77731c */ r_esp -= 4; W32(r_esp, 0x7765aau); f_0077731c();
    /* 007765aa: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 007765ad: jmp 0x7765de */ goto L_007765de;
L_007765af:; BB(0x007765af);
    /* 007765af: fld dword ptr [0x978228] */ FPUSH(R_F32((u32)(0x978228u)));
    /* 007765b5: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 007765b9: lea edx, [esp + 0x44] */ r_edx = (u32)(r_esp+0x44u);
    /* 007765bd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007765be: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007765c0: call 0x777450 */ r_esp -= 4; W32(r_esp, 0x7765c5u); f_00777450();
    /* 007765c5: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007765c7: je 0x776fe5 */ if (fZ) goto L_00776fe5;
L_007765cd:; BB(0x007765cd);
    /* 007765cd: mov edx, dword ptr [edi + 0x18] */ r_edx = R32((u32)(r_edi+0x18u));
    /* 007765d0: and edx, 0xfbffffff */ {  u32 a = r_edx; u32 b = 0xfbffffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 007765d6: mov dword ptr [edi + 0x18], edx */ W32((u32)(r_edi+0x18u), r_edx);
    /* 007765d9: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 007765dc: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_007765de:; BB(0x007765de);
    /* 007765de: or edx, 0x200 */ {  u32 a = r_edx; u32 b = 0x200u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 007765e4: mov dword ptr [ebp + 0x30], edx */ W32((u32)(r_ebp+0x30u), r_edx);
    /* 007765e7: jmp 0x776eed */ goto L_00776eed;
L_00776eed:; BB(0x00776eed);
    /* 00776eed: mov edx, dword ptr [esp + 0x40] */ r_edx = R32((u32)(r_esp+0x40u));
    /* 00776ef1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00776ef3: jne 0x776f02 */ if (!fZ) goto L_00776f02;
L_00776ef5:; BB(0x00776ef5);
    /* 00776ef5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00776ef7: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00776efa: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00776efc: call dword ptr [edx + 0x130] */ { u32 t = R32((u32)(r_edx+0x130u)); r_esp -= 4; W32(r_esp, 0x776f02u); call_ind(t); }
L_00776f02:; BB(0x00776f02);
    /* 00776f02: movsx edx, word ptr [ebp + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x32cu));
    /* 00776f09: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00776f0c: jne 0x776f51 */ if (!fZ) goto L_00776f51;
L_00776f0e:; BB(0x00776f0e);
    /* 00776f0e: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 00776f12: fmul dword ptr [0x978208] */ ST(0) = ST(0) * R_F32((u32)(0x978208u));
    /* 00776f18: fnstcw word ptr [esp + 0x14] */ W16((u32)(r_esp+0x14u), fcw);
    /* 00776f1c: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 00776f21: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00776f26: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 00776f2a: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 00776f2e: fistp dword ptr [esp + 0x24] */ W32((u32)(r_esp+0x24u), (u32)fx_int32(ST(0))); FPOP();
    /* 00776f32: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 00776f36: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00776f38: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 00776f3c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00776f3d: call 0x69b4f0 */ r_esp -= 4; W32(r_esp, 0x776f42u); f_0069b4f0();
    /* 00776f42: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00776f45: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00776f46: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00776f49: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00776f4b: call dword ptr [edx + 0x134] */ { u32 t = R32((u32)(r_edx+0x134u)); r_esp -= 4; W32(r_esp, 0x776f51u); call_ind(t); }
L_00776f51:; BB(0x00776f51);
    /* 00776f51: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00776f52: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00776f53: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00776f55: call 0x773ab0 */ r_esp -= 4; W32(r_esp, 0x776f5au); f_00773ab0();
    /* 00776f5a: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 00776f5e: add esp, 0xb0 */ {  u32 a = r_esp; u32 b = 0xb0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00776f64: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00776f65: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00776f66: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00776f67: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00776f68: ret 8 */ FN_RET(0x0077645f); r_esp += 12; return;
L_00776fe5:; BB(0x00776fe5);
    /* 00776fe5: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 00776fe8: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00776fea: jmp 0x7765de */ goto L_007765de;
}

void f_007765ec(void)
{
    FN_ENTER(0x007765ec);
    /* 007765ec: mov edx, dword ptr [ebx + 0x2e8] */ r_edx = R32((u32)(r_ebx+0x2e8u));
    /* 007765f2: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007765f5: je 0x77661c */ if (fZ) goto L_0077661c;
L_007765f7:; BB(0x007765f7);
    /* 007765f7: fld dword ptr [0x978228] */ FPUSH(R_F32((u32)(0x978228u)));
    /* 007765fd: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 00776601: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00776603: je 0x776fef */ if (fZ) goto L_00776fef;
L_00776609:; BB(0x00776609);
    /* 00776609: mov edx, dword ptr [edi + 0x18] */ r_edx = R32((u32)(r_edi+0x18u));
    /* 0077660c: and edx, 0xfbffffff */ {  u32 a = r_edx; u32 b = 0xfbffffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00776612: mov dword ptr [edi + 0x18], edx */ W32((u32)(r_edi+0x18u), r_edx);
    /* 00776615: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00776617: jmp 0x776a3c */ goto L_00776a3c;
L_0077661c:; BB(0x0077661c);
    /* 0077661c: mov esi, dword ptr [esp + 0x2c] */ r_esi = R32((u32)(r_esp+0x2cu));
    /* 00776620: mov edi, dword ptr [0xa9cd68] */ r_edi = R32((u32)(0xa9cd68u));
    /* 00776626: fld dword ptr [0x978224] */ FPUSH(R_F32((u32)(0x978224u)));
    /* 0077662c: movsx edx, word ptr [ebx + 0x2be] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x2beu));
    /* 00776633: imul esi, edx */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_edx; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00776636: mov edx, dword ptr [0xa942c0] */ r_edx = R32((u32)(0xa942c0u));
    /* 0077663c: mov dword ptr [esp + 0xc], esi */ W32((u32)(r_esp+0xcu), r_esi);
    /* 00776640: fild dword ptr [esp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_esp+0xcu)));
    /* 00776644: fmul dword ptr [0x978214] */ ST(0) = ST(0) * R_F32((u32)(0x978214u));
    /* 0077664a: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0077664d: mov dword ptr [esp + 0xc], edi */ W32((u32)(r_esp+0xcu), r_edi);
    /* 00776651: fild dword ptr [esp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_esp+0xcu)));
    /* 00776655: fmul dword ptr [0x9781e4] */ ST(0) = ST(0) * R_F32((u32)(0x9781e4u));
    /* 0077665b: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0077665d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0077665f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00776660: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00776662: jb 0x776666 */ if (fC) goto L_00776666;
L_00776664:; BB(0x00776664);
    /* 00776664: fst st(1) */ ST(1) = ST(0);
L_00776666:; BB(0x00776666);
    /* 00776666: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00776668: fmul dword ptr [esp + 0x38] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x38u));
    /* 0077666c: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0077666e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00776670: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00776671: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00776673: jae 0x776677 */ if (!fC) goto L_00776677;
L_00776675:; BB(0x00776675);
    /* 00776675: fst st(1) */ ST(1) = ST(0);
L_00776677:; BB(0x00776677);
    /* 00776677: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00776679: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 0077667d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077667f: je 0x77690c */ if (fZ) goto L_0077690c;
L_00776685:; BB(0x00776685);
    /* 00776685: movsx esi, word ptr [ebp + 0x32c] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0x32cu));
    /* 0077668c: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077668f: jne 0x776786 */ if (!fZ) goto L_00776786;
L_00776695:; BB(0x00776695);
    /* 00776695: movsx edx, word ptr [ebx + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x32cu));
    /* 0077669c: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077669f: jne 0x776786 */ if (!fZ) goto L_00776786;
L_007766a5:; BB(0x007766a5);
    /* 007766a5: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 007766a9: movzx edi, word ptr [ebp + 0x2d8] */ r_edi = (u32)R16((u32)(r_ebp+0x2d8u));
    /* 007766b0: movzx esi, word ptr [ebx + 0x1c] */ r_esi = (u32)R16((u32)(r_ebx+0x1cu));
    /* 007766b4: fnstcw word ptr [esp + 0x14] */ W16((u32)(r_esp+0x14u), fcw);
    /* 007766b8: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 007766bd: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007766c2: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 007766c6: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 007766ca: fistp qword ptr [esp + 0x24] */ W64((u32)(r_esp+0x24u), (u64)fx_int64(ST(0))); FPOP();
    /* 007766ce: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 007766d2: movzx edx, byte ptr [esp + 0x24] */ r_edx = (u32)R8((u32)(r_esp+0x24u));
    /* 007766d7: mov byte ptr [esp + 0x78], 0x9a */ W8((u32)(r_esp+0x78u), 0x9au);
    /* 007766dc: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 007766e0: mov byte ptr [esp + 0x79], 2 */ W8((u32)(r_esp+0x79u), 0x2u);
    /* 007766e5: mov word ptr [esp + 0x7a], si */ W16((u32)(r_esp+0x7au), (u16)r_esi);
    /* 007766ea: mov byte ptr [esp + 0x7e], 4 */ W8((u32)(r_esp+0x7eu), 0x4u);
    /* 007766ef: mov word ptr [esp + 0x7c], di */ W16((u32)(r_esp+0x7cu), (u16)r_edi);
    /* 007766f4: mov byte ptr [esp + 0x7f], dl */ W8((u32)(r_esp+0x7fu), (u8)r_edx);
    /* 007766f8: lea ecx, [esp + 0x78] */ r_ecx = (u32)(r_esp+0x78u);
    /* 007766fc: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x776701u); f_008003e0();
    /* 00776701: mov edx, dword ptr [esp + 0x2c] */ r_edx = R32((u32)(r_esp+0x2cu));
    /* 00776705: movzx edi, word ptr [ebp + 0x2d8] */ r_edi = (u32)R16((u32)(r_ebp+0x2d8u));
    /* 0077670c: movzx esi, word ptr [ebp + 0x1c] */ r_esi = (u32)R16((u32)(r_ebp+0x1cu));
    /* 00776710: mov word ptr [esp + 0x82], si */ W16((u32)(r_esp+0x82u), (u16)r_esi);
    /* 00776718: mov word ptr [esp + 0x84], di */ W16((u32)(r_esp+0x84u), (u16)r_edi);
    /* 00776720: mov byte ptr [esp + 0x80], 0x9a */ W8((u32)(r_esp+0x80u), 0x9au);
    /* 00776728: mov byte ptr [esp + 0x81], 2 */ W8((u32)(r_esp+0x81u), 0x2u);
    /* 00776730: mov byte ptr [esp + 0x87], dl */ W8((u32)(r_esp+0x87u), (u8)r_edx);
    /* 00776737: lea ecx, [esp + 0x80] */ r_ecx = (u32)(r_esp+0x80u);
    /* 0077673e: mov byte ptr [esp + 0x86], 1 */ W8((u32)(r_esp+0x86u), 0x1u);
    /* 00776746: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x77674bu); f_008003e0();
    /* 0077674b: push 0x3f19999a */ { u32 v = 0x3f19999au; r_esp -= 4; W32(r_esp, v); }
    /* 00776750: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00776751: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00776754: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00776756: call dword ptr [edx + 0x5c] */ { u32 t = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, 0x776759u); call_ind(t); }
    /* 00776759: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0077675b: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 0077675f: fnstcw word ptr [esp + 0x14] */ W16((u32)(r_esp+0x14u), fcw);
    /* 00776763: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 00776768: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0077676d: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 00776771: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 00776775: fistp dword ptr [esp + 0x24] */ W32((u32)(r_esp+0x24u), (u32)fx_int32(ST(0))); FPOP();
    /* 00776779: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 0077677d: mov esi, dword ptr [esp + 0x24] */ r_esi = R32((u32)(r_esp+0x24u));
    /* 00776781: jmp 0x776a3c */ goto L_00776a3c;
L_00776786:; BB(0x00776786);
    /* 00776786: cmp esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00776789: jne 0x7767c2 */ if (!fZ) goto L_007767c2;
L_0077678b:; BB(0x0077678b);
    /* 0077678b: movzx edx, word ptr [ebx + 0x1c] */ r_edx = (u32)R16((u32)(r_ebx+0x1cu));
    /* 0077678f: cmp edx, 0x1000 */ {  u32 a = r_edx; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00776795: jge 0x7767c2 */ if ((fS==fO)) goto L_007767c2;
L_00776797:; BB(0x00776797);
    /* 00776797: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 0077679b: fnstcw word ptr [esp + 0x14] */ W16((u32)(r_esp+0x14u), fcw);
    /* 0077679f: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 007767a4: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007767a9: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 007767ad: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 007767b1: fistp dword ptr [esp + 0x24] */ W32((u32)(r_esp+0x24u), (u32)fx_int32(ST(0))); FPOP();
    /* 007767b5: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 007767b9: mov esi, dword ptr [esp + 0x24] */ r_esi = R32((u32)(r_esp+0x24u));
    /* 007767bd: jmp 0x776a3c */ goto L_00776a3c;
L_007767c2:; BB(0x007767c2);
    /* 007767c2: movsx edx, word ptr [ebx + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x32cu));
    /* 007767c9: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007767cc: jne 0x776880 */ if (!fZ) goto L_00776880;
L_007767d2:; BB(0x007767d2);
    /* 007767d2: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 007767d6: movzx edi, word ptr [ebp + 0x2d8] */ r_edi = (u32)R16((u32)(r_ebp+0x2d8u));
    /* 007767dd: movzx esi, word ptr [ebx + 0x1c] */ r_esi = (u32)R16((u32)(r_ebx+0x1cu));
    /* 007767e1: fnstcw word ptr [esp + 0x14] */ W16((u32)(r_esp+0x14u), fcw);
    /* 007767e5: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 007767ea: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007767ef: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 007767f3: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 007767f7: fistp qword ptr [esp + 0x24] */ W64((u32)(r_esp+0x24u), (u64)fx_int64(ST(0))); FPOP();
    /* 007767fb: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 007767ff: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 00776803: mov byte ptr [esp + 0x88], 0x9a */ W8((u32)(r_esp+0x88u), 0x9au);
    /* 0077680b: mov byte ptr [esp + 0x89], 2 */ W8((u32)(r_esp+0x89u), 0x2u);
    /* 00776813: mov word ptr [esp + 0x8a], si */ W16((u32)(r_esp+0x8au), (u16)r_esi);
    /* 0077681b: mov word ptr [esp + 0x8c], di */ W16((u32)(r_esp+0x8cu), (u16)r_edi);
    /* 00776823: mov byte ptr [esp + 0x8e], 4 */ W8((u32)(r_esp+0x8eu), 0x4u);
    /* 0077682b: mov byte ptr [esp + 0x8f], dl */ W8((u32)(r_esp+0x8fu), (u8)r_edx);
    /* 00776832: lea ecx, [esp + 0x88] */ r_ecx = (u32)(r_esp+0x88u);
    /* 00776839: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x77683eu); f_008003e0();
    /* 0077683e: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 00776842: fnstcw word ptr [esp + 0x14] */ W16((u32)(r_esp+0x14u), fcw);
    /* 00776846: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 0077684b: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00776850: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 00776854: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 00776858: fistp dword ptr [esp + 0x24] */ W32((u32)(r_esp+0x24u), (u32)fx_int32(ST(0))); FPOP();
    /* 0077685c: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 00776860: mov esi, dword ptr [esp + 0x24] */ r_esi = R32((u32)(r_esp+0x24u));
    /* 00776864: lea edx, [esp + 0x44] */ r_edx = (u32)(r_esp+0x44u);
    /* 00776868: movsx edi, si */ r_edi = (u32)(i32)(i16)(u16)r_esi;
    /* 0077686b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0077686c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0077686e: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00776870: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00776871: call 0x779f80 */ r_esp -= 4; W32(r_esp, 0x776876u); f_00779f80();
    /* 00776876: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00776877: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00776879: call 0x7773a0 */ r_esp -= 4; W32(r_esp, 0x77687eu); f_007773a0();
    /* 0077687e: jmp 0x7768f7 */ goto L_007768f7;
L_00776880:; BB(0x00776880);
    /* 00776880: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00776883: jne 0x7768ad */ if (!fZ) goto L_007768ad;
L_00776885:; BB(0x00776885);
    /* 00776885: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 00776889: fnstcw word ptr [esp + 0x14] */ W16((u32)(r_esp+0x14u), fcw);
    /* 0077688d: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 00776892: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00776897: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 0077689b: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 0077689f: fistp dword ptr [esp + 0x24] */ W32((u32)(r_esp+0x24u), (u32)fx_int32(ST(0))); FPOP();
    /* 007768a3: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 007768a7: mov esi, dword ptr [esp + 0x24] */ r_esi = R32((u32)(r_esp+0x24u));
    /* 007768ab: jmp 0x7768f7 */ goto L_007768f7;
L_007768ad:; BB(0x007768ad);
    /* 007768ad: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 007768b1: fnstcw word ptr [esp + 0x14] */ W16((u32)(r_esp+0x14u), fcw);
    /* 007768b5: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 007768ba: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007768bf: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 007768c3: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 007768c7: fistp dword ptr [esp + 0x24] */ W32((u32)(r_esp+0x24u), (u32)fx_int32(ST(0))); FPOP();
    /* 007768cb: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 007768cf: mov esi, dword ptr [esp + 0x24] */ r_esi = R32((u32)(r_esp+0x24u));
    /* 007768d3: movsx edi, si */ r_edi = (u32)(i32)(i16)(u16)r_esi;
    /* 007768d6: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007768d7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007768d9: call 0x777368 */ r_esp -= 4; W32(r_esp, 0x7768deu); f_00777368();
    /* 007768de: lea edx, [esp + 0x44] */ r_edx = (u32)(r_esp+0x44u);
    /* 007768e2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007768e4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007768e5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007768e6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007768e7: call 0x5ce89c */ r_esp -= 4; W32(r_esp, 0x7768ecu); f_005ce89c();
    /* 007768ec: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007768ef: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007768f0: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007768f2: call 0x7773a0 */ r_esp -= 4; W32(r_esp, 0x7768f7u); f_007773a0();
L_007768f7:; BB(0x007768f7);
    /* 007768f7: push 0x3f19999a */ { u32 v = 0x3f19999au; r_esp -= 4; W32(r_esp, v); }
    /* 007768fc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007768fd: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00776900: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00776902: call dword ptr [edx + 0x5c] */ { u32 t = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, 0x776905u); call_ind(t); }
    /* 00776905: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00776907: jmp 0x776a3c */ goto L_00776a3c;
L_0077690c:; BB(0x0077690c);
    /* 0077690c: movsx edx, word ptr [ebx + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x32cu));
    /* 00776913: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00776916: jne 0x7769b5 */ if (!fZ) goto L_007769b5;
L_0077691c:; BB(0x0077691c);
    /* 0077691c: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 00776920: movzx edi, word ptr [ebp + 0x2d8] */ r_edi = (u32)R16((u32)(r_ebp+0x2d8u));
    /* 00776927: movzx esi, word ptr [ebx + 0x1c] */ r_esi = (u32)R16((u32)(r_ebx+0x1cu));
    /* 0077692b: fnstcw word ptr [esp + 0x14] */ W16((u32)(r_esp+0x14u), fcw);
    /* 0077692f: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 00776934: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00776939: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 0077693d: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 00776941: fistp qword ptr [esp + 0x24] */ W64((u32)(r_esp+0x24u), (u64)fx_int64(ST(0))); FPOP();
    /* 00776945: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 00776949: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 0077694d: mov byte ptr [esp + 0x70], 0x9a */ W8((u32)(r_esp+0x70u), 0x9au);
    /* 00776952: mov byte ptr [esp + 0x71], 2 */ W8((u32)(r_esp+0x71u), 0x2u);
    /* 00776957: mov word ptr [esp + 0x72], si */ W16((u32)(r_esp+0x72u), (u16)r_esi);
    /* 0077695c: mov word ptr [esp + 0x74], di */ W16((u32)(r_esp+0x74u), (u16)r_edi);
    /* 00776961: mov byte ptr [esp + 0x76], 4 */ W8((u32)(r_esp+0x76u), 0x4u);
    /* 00776966: mov byte ptr [esp + 0x77], dl */ W8((u32)(r_esp+0x77u), (u8)r_edx);
    /* 0077696a: lea ecx, [esp + 0x70] */ r_ecx = (u32)(r_esp+0x70u);
    /* 0077696e: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x776973u); f_008003e0();
    /* 00776973: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 00776977: fnstcw word ptr [esp + 0x14] */ W16((u32)(r_esp+0x14u), fcw);
    /* 0077697b: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 00776980: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00776985: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 00776989: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 0077698d: fistp dword ptr [esp + 0x24] */ W32((u32)(r_esp+0x24u), (u32)fx_int32(ST(0))); FPOP();
    /* 00776991: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 00776995: mov esi, dword ptr [esp + 0x24] */ r_esi = R32((u32)(r_esp+0x24u));
    /* 00776999: lea edx, [esp + 0x44] */ r_edx = (u32)(r_esp+0x44u);
    /* 0077699d: movsx edi, si */ r_edi = (u32)(i32)(i16)(u16)r_esi;
    /* 007769a0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007769a1: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007769a3: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 007769a5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007769a6: call 0x779f80 */ r_esp -= 4; W32(r_esp, 0x7769abu); f_00779f80();
    /* 007769ab: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007769ac: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007769ae: call 0x7773a0 */ r_esp -= 4; W32(r_esp, 0x7769b3u); f_007773a0();
    /* 007769b3: jmp 0x776a2c */ goto L_00776a2c;
L_007769b5:; BB(0x007769b5);
    /* 007769b5: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007769b8: jne 0x7769e2 */ if (!fZ) goto L_007769e2;
L_007769ba:; BB(0x007769ba);
    /* 007769ba: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 007769be: fnstcw word ptr [esp + 0x14] */ W16((u32)(r_esp+0x14u), fcw);
    /* 007769c2: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 007769c7: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007769cc: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 007769d0: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 007769d4: fistp dword ptr [esp + 0x24] */ W32((u32)(r_esp+0x24u), (u32)fx_int32(ST(0))); FPOP();
    /* 007769d8: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 007769dc: mov esi, dword ptr [esp + 0x24] */ r_esi = R32((u32)(r_esp+0x24u));
    /* 007769e0: jmp 0x776a2c */ goto L_00776a2c;
L_007769e2:; BB(0x007769e2);
    /* 007769e2: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 007769e6: fnstcw word ptr [esp + 0x14] */ W16((u32)(r_esp+0x14u), fcw);
    /* 007769ea: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 007769ef: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007769f4: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 007769f8: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 007769fc: fistp dword ptr [esp + 0x24] */ W32((u32)(r_esp+0x24u), (u32)fx_int32(ST(0))); FPOP();
    /* 00776a00: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 00776a04: mov esi, dword ptr [esp + 0x24] */ r_esi = R32((u32)(r_esp+0x24u));
    /* 00776a08: movsx edi, si */ r_edi = (u32)(i32)(i16)(u16)r_esi;
    /* 00776a0b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00776a0c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00776a0e: call 0x777368 */ r_esp -= 4; W32(r_esp, 0x776a13u); f_00777368();
    /* 00776a13: lea edx, [esp + 0x44] */ r_edx = (u32)(r_esp+0x44u);
    /* 00776a17: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00776a19: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00776a1a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00776a1b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00776a1c: call 0x5ce89c */ r_esp -= 4; W32(r_esp, 0x776a21u); f_005ce89c();
    /* 00776a21: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00776a24: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00776a25: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00776a27: call 0x7773a0 */ r_esp -= 4; W32(r_esp, 0x776a2cu); f_007773a0();
L_00776a2c:; BB(0x00776a2c);
    /* 00776a2c: push 0x3f19999a */ { u32 v = 0x3f19999au; r_esp -= 4; W32(r_esp, v); }
    /* 00776a31: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00776a32: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00776a35: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00776a37: call dword ptr [edx + 0x5c] */ { u32 t = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, 0x776a3au); call_ind(t); }
    /* 00776a3a: fstp st(0) */ ST(0) = ST(0); FPOP();
L_00776a3c:; BB(0x00776a3c);
    /* 00776a3c: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 00776a3f: or edx, 0x200 */ {  u32 a = r_edx; u32 b = 0x200u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00776a45: test edx, 0x2000000 */ {  u32 a = r_edx; u32 b = 0x2000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00776a4b: mov dword ptr [ebp + 0x30], edx */ W32((u32)(r_ebp+0x30u), r_edx);
    /* 00776a4e: jne 0x776eed */ if (!fZ) goto L_00776eed;
L_00776a54:; BB(0x00776a54);
    /* 00776a54: lea edx, [esp + 0x44] */ r_edx = (u32)(r_esp+0x44u);
    /* 00776a58: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00776a59: call 0x50325c */ r_esp -= 4; W32(r_esp, 0x776a5eu); f_0050325c();
    /* 00776a5e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00776a5f: jmp 0x776eed */ goto L_00776eed;
L_00776eed:; BB(0x00776eed);
    /* 00776eed: mov edx, dword ptr [esp + 0x40] */ r_edx = R32((u32)(r_esp+0x40u));
    /* 00776ef1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00776ef3: jne 0x776f02 */ if (!fZ) goto L_00776f02;
L_00776ef5:; BB(0x00776ef5);
    /* 00776ef5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00776ef7: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00776efa: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00776efc: call dword ptr [edx + 0x130] */ { u32 t = R32((u32)(r_edx+0x130u)); r_esp -= 4; W32(r_esp, 0x776f02u); call_ind(t); }
L_00776f02:; BB(0x00776f02);
    /* 00776f02: movsx edx, word ptr [ebp + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x32cu));
    /* 00776f09: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00776f0c: jne 0x776f51 */ if (!fZ) goto L_00776f51;
L_00776f0e:; BB(0x00776f0e);
    /* 00776f0e: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 00776f12: fmul dword ptr [0x978208] */ ST(0) = ST(0) * R_F32((u32)(0x978208u));
    /* 00776f18: fnstcw word ptr [esp + 0x14] */ W16((u32)(r_esp+0x14u), fcw);
    /* 00776f1c: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 00776f21: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00776f26: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 00776f2a: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 00776f2e: fistp dword ptr [esp + 0x24] */ W32((u32)(r_esp+0x24u), (u32)fx_int32(ST(0))); FPOP();
    /* 00776f32: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 00776f36: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00776f38: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 00776f3c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00776f3d: call 0x69b4f0 */ r_esp -= 4; W32(r_esp, 0x776f42u); f_0069b4f0();
    /* 00776f42: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00776f45: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00776f46: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00776f49: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00776f4b: call dword ptr [edx + 0x134] */ { u32 t = R32((u32)(r_edx+0x134u)); r_esp -= 4; W32(r_esp, 0x776f51u); call_ind(t); }
L_00776f51:; BB(0x00776f51);
    /* 00776f51: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00776f52: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00776f53: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00776f55: call 0x773ab0 */ r_esp -= 4; W32(r_esp, 0x776f5au); f_00773ab0();
    /* 00776f5a: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 00776f5e: add esp, 0xb0 */ {  u32 a = r_esp; u32 b = 0xb0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00776f64: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00776f65: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00776f66: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00776f67: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00776f68: ret 8 */ FN_RET(0x007765ec); r_esp += 12; return;
L_00776fef:; BB(0x00776fef);
    /* 00776fef: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00776ff1: jmp 0x776a3c */ goto L_00776a3c;
}

void f_00776a64(void)
{
    FN_ENTER(0x00776a64);
    /* 00776a64: mov esi, dword ptr [esp + 0x2c] */ r_esi = R32((u32)(r_esp+0x2cu));
    /* 00776a68: mov edi, dword ptr [0xa9cd68] */ r_edi = R32((u32)(0xa9cd68u));
    /* 00776a6e: fld dword ptr [0x978224] */ FPUSH(R_F32((u32)(0x978224u)));
    /* 00776a74: movsx edx, word ptr [ebp + 0x334] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x334u));
    /* 00776a7b: imul esi, edx */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_edx; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00776a7e: mov edx, dword ptr [0xa942c0] */ r_edx = R32((u32)(0xa942c0u));
    /* 00776a84: mov dword ptr [esp + 0xc], esi */ W32((u32)(r_esp+0xcu), r_esi);
    /* 00776a88: fild dword ptr [esp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_esp+0xcu)));
    /* 00776a8c: fmul dword ptr [0x978214] */ ST(0) = ST(0) * R_F32((u32)(0x978214u));
    /* 00776a92: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00776a95: mov dword ptr [esp + 0xc], edi */ W32((u32)(r_esp+0xcu), r_edi);
    /* 00776a99: fild dword ptr [esp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_esp+0xcu)));
    /* 00776a9d: fmul dword ptr [0x9781e0] */ ST(0) = ST(0) * R_F32((u32)(0x9781e0u));
    /* 00776aa3: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00776aa5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00776aa7: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00776aa8: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00776aaa: jb 0x776aae */ if (fC) goto L_00776aae;
L_00776aac:; BB(0x00776aac);
    /* 00776aac: fst st(1) */ ST(1) = ST(0);
L_00776aae:; BB(0x00776aae);
    /* 00776aae: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00776ab0: fmul dword ptr [esp + 0x38] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x38u));
    /* 00776ab4: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00776ab6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00776ab8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00776ab9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00776abb: jae 0x776abf */ if (!fC) goto L_00776abf;
L_00776abd:; BB(0x00776abd);
    /* 00776abd: fst st(1) */ ST(1) = ST(0);
L_00776abf:; BB(0x00776abf);
    /* 00776abf: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00776ac1: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 00776ac5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00776ac7: je 0x776d69 */ if (fZ) goto L_00776d69;
L_00776acd:; BB(0x00776acd);
    /* 00776acd: movsx esi, word ptr [ebp + 0x32c] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0x32cu));
    /* 00776ad4: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00776ad7: jne 0x776be3 */ if (!fZ) goto L_00776be3;
L_00776add:; BB(0x00776add);
    /* 00776add: movsx edx, word ptr [ebx + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x32cu));
    /* 00776ae4: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00776ae7: jne 0x776be3 */ if (!fZ) goto L_00776be3;
L_00776aed:; BB(0x00776aed);
    /* 00776aed: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 00776af1: movzx edi, word ptr [ebp + 0x2d8] */ r_edi = (u32)R16((u32)(r_ebp+0x2d8u));
    /* 00776af8: movzx esi, word ptr [ebx + 0x1c] */ r_esi = (u32)R16((u32)(r_ebx+0x1cu));
    /* 00776afc: fnstcw word ptr [esp + 0x14] */ W16((u32)(r_esp+0x14u), fcw);
    /* 00776b00: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 00776b05: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00776b0a: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 00776b0e: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 00776b12: fistp qword ptr [esp + 0x24] */ W64((u32)(r_esp+0x24u), (u64)fx_int64(ST(0))); FPOP();
    /* 00776b16: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 00776b1a: movzx edx, byte ptr [esp + 0x24] */ r_edx = (u32)R8((u32)(r_esp+0x24u));
    /* 00776b1f: mov byte ptr [esp + 0x98], 0x9a */ W8((u32)(r_esp+0x98u), 0x9au);
    /* 00776b27: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 00776b2b: mov byte ptr [esp + 0x99], 2 */ W8((u32)(r_esp+0x99u), 0x2u);
    /* 00776b33: mov word ptr [esp + 0x9a], si */ W16((u32)(r_esp+0x9au), (u16)r_esi);
    /* 00776b3b: mov byte ptr [esp + 0x9e], 3 */ W8((u32)(r_esp+0x9eu), 0x3u);
    /* 00776b43: mov word ptr [esp + 0x9c], di */ W16((u32)(r_esp+0x9cu), (u16)r_edi);
    /* 00776b4b: mov byte ptr [esp + 0x9f], dl */ W8((u32)(r_esp+0x9fu), (u8)r_edx);
    /* 00776b52: lea ecx, [esp + 0x98] */ r_ecx = (u32)(r_esp+0x98u);
    /* 00776b59: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x776b5eu); f_008003e0();
    /* 00776b5e: mov edx, dword ptr [esp + 0x2c] */ r_edx = R32((u32)(r_esp+0x2cu));
    /* 00776b62: movzx edi, word ptr [ebp + 0x2d8] */ r_edi = (u32)R16((u32)(r_ebp+0x2d8u));
    /* 00776b69: movzx esi, word ptr [ebp + 0x1c] */ r_esi = (u32)R16((u32)(r_ebp+0x1cu));
    /* 00776b6d: mov word ptr [esp + 0xa2], si */ W16((u32)(r_esp+0xa2u), (u16)r_esi);
    /* 00776b75: mov word ptr [esp + 0xa4], di */ W16((u32)(r_esp+0xa4u), (u16)r_edi);
    /* 00776b7d: mov byte ptr [esp + 0xa0], 0x9a */ W8((u32)(r_esp+0xa0u), 0x9au);
    /* 00776b85: mov byte ptr [esp + 0xa1], 2 */ W8((u32)(r_esp+0xa1u), 0x2u);
    /* 00776b8d: mov byte ptr [esp + 0xa7], dl */ W8((u32)(r_esp+0xa7u), (u8)r_edx);
    /* 00776b94: lea ecx, [esp + 0xa0] */ r_ecx = (u32)(r_esp+0xa0u);
    /* 00776b9b: mov byte ptr [esp + 0xa6], 0 */ W8((u32)(r_esp+0xa6u), 0x0u);
    /* 00776ba3: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x776ba8u); f_008003e0();
    /* 00776ba8: push 0x3f19999a */ { u32 v = 0x3f19999au; r_esp -= 4; W32(r_esp, v); }
    /* 00776bad: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00776bae: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00776bb1: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00776bb3: call dword ptr [edx + 0x5c] */ { u32 t = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, 0x776bb6u); call_ind(t); }
    /* 00776bb6: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00776bb8: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 00776bbc: fnstcw word ptr [esp + 0x14] */ W16((u32)(r_esp+0x14u), fcw);
    /* 00776bc0: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 00776bc5: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00776bca: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 00776bce: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 00776bd2: fistp dword ptr [esp + 0x24] */ W32((u32)(r_esp+0x24u), (u32)fx_int32(ST(0))); FPOP();
    /* 00776bd6: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 00776bda: mov esi, dword ptr [esp + 0x24] */ r_esi = R32((u32)(r_esp+0x24u));
    /* 00776bde: jmp 0x776eae */ goto L_00776eae;
L_00776be3:; BB(0x00776be3);
    /* 00776be3: cmp esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00776be6: jne 0x776c1f */ if (!fZ) goto L_00776c1f;
L_00776be8:; BB(0x00776be8);
    /* 00776be8: movzx edx, word ptr [ebx + 0x1c] */ r_edx = (u32)R16((u32)(r_ebx+0x1cu));
    /* 00776bec: cmp edx, 0x1000 */ {  u32 a = r_edx; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00776bf2: jge 0x776c1f */ if ((fS==fO)) goto L_00776c1f;
L_00776bf4:; BB(0x00776bf4);
    /* 00776bf4: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 00776bf8: fnstcw word ptr [esp + 0x14] */ W16((u32)(r_esp+0x14u), fcw);
    /* 00776bfc: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 00776c01: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00776c06: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 00776c0a: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 00776c0e: fistp dword ptr [esp + 0x24] */ W32((u32)(r_esp+0x24u), (u32)fx_int32(ST(0))); FPOP();
    /* 00776c12: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 00776c16: mov esi, dword ptr [esp + 0x24] */ r_esi = R32((u32)(r_esp+0x24u));
    /* 00776c1a: jmp 0x776eae */ goto L_00776eae;
L_00776c1f:; BB(0x00776c1f);
    /* 00776c1f: movsx edx, word ptr [ebx + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x32cu));
    /* 00776c26: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00776c29: jne 0x776cdd */ if (!fZ) goto L_00776cdd;
L_00776c2f:; BB(0x00776c2f);
    /* 00776c2f: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 00776c33: movzx edi, word ptr [ebp + 0x2d8] */ r_edi = (u32)R16((u32)(r_ebp+0x2d8u));
    /* 00776c3a: movzx esi, word ptr [ebx + 0x1c] */ r_esi = (u32)R16((u32)(r_ebx+0x1cu));
    /* 00776c3e: fnstcw word ptr [esp + 0x14] */ W16((u32)(r_esp+0x14u), fcw);
    /* 00776c42: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 00776c47: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00776c4c: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 00776c50: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 00776c54: fistp qword ptr [esp + 0x24] */ W64((u32)(r_esp+0x24u), (u64)fx_int64(ST(0))); FPOP();
    /* 00776c58: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 00776c5c: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 00776c60: mov byte ptr [esp + 0xa8], 0x9a */ W8((u32)(r_esp+0xa8u), 0x9au);
    /* 00776c68: mov byte ptr [esp + 0xa9], 2 */ W8((u32)(r_esp+0xa9u), 0x2u);
    /* 00776c70: mov word ptr [esp + 0xaa], si */ W16((u32)(r_esp+0xaau), (u16)r_esi);
    /* 00776c78: mov word ptr [esp + 0xac], di */ W16((u32)(r_esp+0xacu), (u16)r_edi);
    /* 00776c80: mov byte ptr [esp + 0xae], 3 */ W8((u32)(r_esp+0xaeu), 0x3u);
    /* 00776c88: mov byte ptr [esp + 0xaf], dl */ W8((u32)(r_esp+0xafu), (u8)r_edx);
    /* 00776c8f: lea ecx, [esp + 0xa8] */ r_ecx = (u32)(r_esp+0xa8u);
    /* 00776c96: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x776c9bu); f_008003e0();
    /* 00776c9b: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 00776c9f: fnstcw word ptr [esp + 0x14] */ W16((u32)(r_esp+0x14u), fcw);
    /* 00776ca3: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 00776ca8: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00776cad: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 00776cb1: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 00776cb5: fistp dword ptr [esp + 0x24] */ W32((u32)(r_esp+0x24u), (u32)fx_int32(ST(0))); FPOP();
    /* 00776cb9: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 00776cbd: mov esi, dword ptr [esp + 0x24] */ r_esi = R32((u32)(r_esp+0x24u));
    /* 00776cc1: lea edx, [esp + 0x44] */ r_edx = (u32)(r_esp+0x44u);
    /* 00776cc5: movsx edi, si */ r_edi = (u32)(i32)(i16)(u16)r_esi;
    /* 00776cc8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00776cc9: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00776ccb: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00776ccd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00776cce: call 0x779f3c */ r_esp -= 4; W32(r_esp, 0x776cd3u); f_00779f3c();
    /* 00776cd3: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00776cd4: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00776cd6: call 0x777414 */ r_esp -= 4; W32(r_esp, 0x776cdbu); f_00777414();
    /* 00776cdb: jmp 0x776d54 */ goto L_00776d54;
L_00776cdd:; BB(0x00776cdd);
    /* 00776cdd: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00776ce0: jne 0x776d0a */ if (!fZ) goto L_00776d0a;
L_00776ce2:; BB(0x00776ce2);
    /* 00776ce2: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 00776ce6: fnstcw word ptr [esp + 0x14] */ W16((u32)(r_esp+0x14u), fcw);
    /* 00776cea: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 00776cef: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00776cf4: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 00776cf8: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 00776cfc: fistp dword ptr [esp + 0x24] */ W32((u32)(r_esp+0x24u), (u32)fx_int32(ST(0))); FPOP();
    /* 00776d00: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 00776d04: mov esi, dword ptr [esp + 0x24] */ r_esi = R32((u32)(r_esp+0x24u));
    /* 00776d08: jmp 0x776d54 */ goto L_00776d54;
L_00776d0a:; BB(0x00776d0a);
    /* 00776d0a: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 00776d0e: fnstcw word ptr [esp + 0x14] */ W16((u32)(r_esp+0x14u), fcw);
    /* 00776d12: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 00776d17: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00776d1c: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 00776d20: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 00776d24: fistp dword ptr [esp + 0x24] */ W32((u32)(r_esp+0x24u), (u32)fx_int32(ST(0))); FPOP();
    /* 00776d28: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 00776d2c: mov esi, dword ptr [esp + 0x24] */ r_esi = R32((u32)(r_esp+0x24u));
    /* 00776d30: movsx edi, si */ r_edi = (u32)(i32)(i16)(u16)r_esi;
    /* 00776d33: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00776d34: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00776d36: call 0x7773d4 */ r_esp -= 4; W32(r_esp, 0x776d3bu); f_007773d4();
    /* 00776d3b: lea edx, [esp + 0x44] */ r_edx = (u32)(r_esp+0x44u);
    /* 00776d3f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00776d41: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00776d42: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00776d43: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00776d44: call 0x5ce89c */ r_esp -= 4; W32(r_esp, 0x776d49u); f_005ce89c();
    /* 00776d49: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00776d4c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00776d4d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00776d4f: call 0x777414 */ r_esp -= 4; W32(r_esp, 0x776d54u); f_00777414();
L_00776d54:; BB(0x00776d54);
    /* 00776d54: push 0x3f19999a */ { u32 v = 0x3f19999au; r_esp -= 4; W32(r_esp, v); }
    /* 00776d59: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00776d5a: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00776d5d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00776d5f: call dword ptr [edx + 0x5c] */ { u32 t = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, 0x776d62u); call_ind(t); }
    /* 00776d62: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00776d64: jmp 0x776eae */ goto L_00776eae;
L_00776d69:; BB(0x00776d69);
    /* 00776d69: movsx edx, word ptr [ebx + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x32cu));
    /* 00776d70: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00776d73: jne 0x776e27 */ if (!fZ) goto L_00776e27;
L_00776d79:; BB(0x00776d79);
    /* 00776d79: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 00776d7d: movzx edi, word ptr [ebp + 0x2d8] */ r_edi = (u32)R16((u32)(r_ebp+0x2d8u));
    /* 00776d84: movzx esi, word ptr [ebx + 0x1c] */ r_esi = (u32)R16((u32)(r_ebx+0x1cu));
    /* 00776d88: fnstcw word ptr [esp + 0x14] */ W16((u32)(r_esp+0x14u), fcw);
    /* 00776d8c: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 00776d91: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00776d96: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 00776d9a: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 00776d9e: fistp qword ptr [esp + 0x24] */ W64((u32)(r_esp+0x24u), (u64)fx_int64(ST(0))); FPOP();
    /* 00776da2: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 00776da6: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 00776daa: mov byte ptr [esp + 0x90], 0x9a */ W8((u32)(r_esp+0x90u), 0x9au);
    /* 00776db2: mov byte ptr [esp + 0x91], 2 */ W8((u32)(r_esp+0x91u), 0x2u);
    /* 00776dba: mov word ptr [esp + 0x92], si */ W16((u32)(r_esp+0x92u), (u16)r_esi);
    /* 00776dc2: mov word ptr [esp + 0x94], di */ W16((u32)(r_esp+0x94u), (u16)r_edi);
    /* 00776dca: mov byte ptr [esp + 0x96], 3 */ W8((u32)(r_esp+0x96u), 0x3u);
    /* 00776dd2: mov byte ptr [esp + 0x97], dl */ W8((u32)(r_esp+0x97u), (u8)r_edx);
    /* 00776dd9: lea ecx, [esp + 0x90] */ r_ecx = (u32)(r_esp+0x90u);
    /* 00776de0: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x776de5u); f_008003e0();
    /* 00776de5: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 00776de9: fnstcw word ptr [esp + 0x14] */ W16((u32)(r_esp+0x14u), fcw);
    /* 00776ded: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 00776df2: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00776df7: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 00776dfb: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 00776dff: fistp dword ptr [esp + 0x24] */ W32((u32)(r_esp+0x24u), (u32)fx_int32(ST(0))); FPOP();
    /* 00776e03: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 00776e07: mov esi, dword ptr [esp + 0x24] */ r_esi = R32((u32)(r_esp+0x24u));
    /* 00776e0b: lea edx, [esp + 0x44] */ r_edx = (u32)(r_esp+0x44u);
    /* 00776e0f: movsx edi, si */ r_edi = (u32)(i32)(i16)(u16)r_esi;
    /* 00776e12: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00776e13: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00776e15: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00776e17: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00776e18: call 0x779f3c */ r_esp -= 4; W32(r_esp, 0x776e1du); f_00779f3c();
    /* 00776e1d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00776e1e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00776e20: call 0x777414 */ r_esp -= 4; W32(r_esp, 0x776e25u); f_00777414();
    /* 00776e25: jmp 0x776e9e */ goto L_00776e9e;
L_00776e27:; BB(0x00776e27);
    /* 00776e27: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00776e2a: jne 0x776e54 */ if (!fZ) goto L_00776e54;
L_00776e2c:; BB(0x00776e2c);
    /* 00776e2c: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 00776e30: fnstcw word ptr [esp + 0x14] */ W16((u32)(r_esp+0x14u), fcw);
    /* 00776e34: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 00776e39: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00776e3e: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 00776e42: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 00776e46: fistp dword ptr [esp + 0x24] */ W32((u32)(r_esp+0x24u), (u32)fx_int32(ST(0))); FPOP();
    /* 00776e4a: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 00776e4e: mov esi, dword ptr [esp + 0x24] */ r_esi = R32((u32)(r_esp+0x24u));
    /* 00776e52: jmp 0x776e9e */ goto L_00776e9e;
L_00776e54:; BB(0x00776e54);
    /* 00776e54: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 00776e58: fnstcw word ptr [esp + 0x14] */ W16((u32)(r_esp+0x14u), fcw);
    /* 00776e5c: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 00776e61: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00776e66: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 00776e6a: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 00776e6e: fistp dword ptr [esp + 0x24] */ W32((u32)(r_esp+0x24u), (u32)fx_int32(ST(0))); FPOP();
    /* 00776e72: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 00776e76: mov esi, dword ptr [esp + 0x24] */ r_esi = R32((u32)(r_esp+0x24u));
    /* 00776e7a: movsx edi, si */ r_edi = (u32)(i32)(i16)(u16)r_esi;
    /* 00776e7d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00776e7e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00776e80: call 0x7773d4 */ r_esp -= 4; W32(r_esp, 0x776e85u); f_007773d4();
    /* 00776e85: lea edx, [esp + 0x44] */ r_edx = (u32)(r_esp+0x44u);
    /* 00776e89: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00776e8b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00776e8c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00776e8d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00776e8e: call 0x5ce89c */ r_esp -= 4; W32(r_esp, 0x776e93u); f_005ce89c();
    /* 00776e93: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00776e96: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00776e97: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00776e99: call 0x777414 */ r_esp -= 4; W32(r_esp, 0x776e9eu); f_00777414();
L_00776e9e:; BB(0x00776e9e);
    /* 00776e9e: push 0x3f19999a */ { u32 v = 0x3f19999au; r_esp -= 4; W32(r_esp, v); }
    /* 00776ea3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00776ea4: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00776ea7: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00776ea9: call dword ptr [edx + 0x5c] */ { u32 t = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, 0x776eacu); call_ind(t); }
    /* 00776eac: fstp st(0) */ ST(0) = ST(0); FPOP();
L_00776eae:; BB(0x00776eae);
    /* 00776eae: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00776eb0: call 0x775270 */ r_esp -= 4; W32(r_esp, 0x776eb5u); f_00775270();
    /* 00776eb5: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 00776eb8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00776eba: jle 0x776ff6 */ if ((fZ||fS!=fO)) goto L_00776ff6;
L_00776ec0:; BB(0x00776ec0);
    /* 00776ec0: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 00776ec3: or edx, 0x200 */ {  u32 a = r_edx; u32 b = 0x200u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00776ec9: mov dword ptr [ebp + 0x30], edx */ W32((u32)(r_ebp+0x30u), r_edx);
L_00776ecc:; BB(0x00776ecc);
    /* 00776ecc: test edx, 0x2000000 */ {  u32 a = r_edx; u32 b = 0x2000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00776ed2: jne 0x776eed */ if (!fZ) goto L_00776eed;
L_00776ed4:; BB(0x00776ed4);
    /* 00776ed4: lea edx, [esp + 0x44] */ r_edx = (u32)(r_esp+0x44u);
    /* 00776ed8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00776ed9: call 0x50325c */ r_esp -= 4; W32(r_esp, 0x776edeu); f_0050325c();
    /* 00776ede: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00776edf: jmp 0x776eed */ goto L_00776eed;
L_00776eed:; BB(0x00776eed);
    /* 00776eed: mov edx, dword ptr [esp + 0x40] */ r_edx = R32((u32)(r_esp+0x40u));
    /* 00776ef1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00776ef3: jne 0x776f02 */ if (!fZ) goto L_00776f02;
L_00776ef5:; BB(0x00776ef5);
    /* 00776ef5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00776ef7: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00776efa: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00776efc: call dword ptr [edx + 0x130] */ { u32 t = R32((u32)(r_edx+0x130u)); r_esp -= 4; W32(r_esp, 0x776f02u); call_ind(t); }
L_00776f02:; BB(0x00776f02);
    /* 00776f02: movsx edx, word ptr [ebp + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x32cu));
    /* 00776f09: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00776f0c: jne 0x776f51 */ if (!fZ) goto L_00776f51;
L_00776f0e:; BB(0x00776f0e);
    /* 00776f0e: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 00776f12: fmul dword ptr [0x978208] */ ST(0) = ST(0) * R_F32((u32)(0x978208u));
    /* 00776f18: fnstcw word ptr [esp + 0x14] */ W16((u32)(r_esp+0x14u), fcw);
    /* 00776f1c: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 00776f21: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00776f26: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 00776f2a: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 00776f2e: fistp dword ptr [esp + 0x24] */ W32((u32)(r_esp+0x24u), (u32)fx_int32(ST(0))); FPOP();
    /* 00776f32: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 00776f36: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00776f38: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 00776f3c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00776f3d: call 0x69b4f0 */ r_esp -= 4; W32(r_esp, 0x776f42u); f_0069b4f0();
    /* 00776f42: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00776f45: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00776f46: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00776f49: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00776f4b: call dword ptr [edx + 0x134] */ { u32 t = R32((u32)(r_edx+0x134u)); r_esp -= 4; W32(r_esp, 0x776f51u); call_ind(t); }
L_00776f51:; BB(0x00776f51);
    /* 00776f51: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00776f52: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00776f53: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00776f55: call 0x773ab0 */ r_esp -= 4; W32(r_esp, 0x776f5au); f_00773ab0();
    /* 00776f5a: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 00776f5e: add esp, 0xb0 */ {  u32 a = r_esp; u32 b = 0xb0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00776f64: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00776f65: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00776f66: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00776f67: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00776f68: ret 8 */ FN_RET(0x00776a64); r_esp += 12; return;
L_00776ff6:; BB(0x00776ff6);
    /* 00776ff6: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 00776ff9: or edx, 0xa00 */ {  u32 a = r_edx; u32 b = 0xa00u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00776fff: mov dword ptr [ebp + 0x30], edx */ W32((u32)(r_ebp+0x30u), r_edx);
    /* 00777002: jmp 0x776ecc */ goto L_00776ecc;
}

void f_00776f64(void)
{
    FN_ENTER(0x00776f64);
    /* 00776f64: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00776f65: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00776f66: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00776f67: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00776f68: ret 8 */ FN_RET(0x00776f64); r_esp += 12; return;
}

void f_00776f6c(void)
{
    FN_ENTER(0x00776f6c);
    /* 00776f6c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00776f6d: xor byte ptr [ecx + 0x800ca], al */ { u32 ad = (u32)(r_ecx+0x800cau);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; W8(ad, r);  }
    /* 00776f73: add cl, ch */ {  u32 a = (u8)r_ecx; u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    UNSUP(0x00776f75, "falls out of decoded code");
}

void f_00776f70(void)
{
    FN_ENTER(0x00776f70);
    goto L_00776f70;
L_00775740:; BB(0x00775740);
    /* 00775740: or edx, 0x200 */ {  u32 a = r_edx; u32 b = 0x200u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00775746: test edx, 0x2000000 */ {  u32 a = r_edx; u32 b = 0x2000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077574c: mov dword ptr [ebp + 0x30], edx */ W32((u32)(r_ebp+0x30u), r_edx);
    /* 0077574f: jne 0x776eed */ if (!fZ) goto L_00776eed;
L_00775755:; BB(0x00775755);
    /* 00775755: lea edx, [esp + 0x44] */ r_edx = (u32)(r_esp+0x44u);
    /* 00775759: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0077575b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0077575c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0077575d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0077575e: call 0x5ce89c */ r_esp -= 4; W32(r_esp, 0x775763u); f_005ce89c();
    /* 00775763: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00775766: jmp 0x776eed */ goto L_00776eed;
L_00776eed:; BB(0x00776eed);
    /* 00776eed: mov edx, dword ptr [esp + 0x40] */ r_edx = R32((u32)(r_esp+0x40u));
    /* 00776ef1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00776ef3: jne 0x776f02 */ if (!fZ) goto L_00776f02;
L_00776ef5:; BB(0x00776ef5);
    /* 00776ef5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00776ef7: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00776efa: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00776efc: call dword ptr [edx + 0x130] */ { u32 t = R32((u32)(r_edx+0x130u)); r_esp -= 4; W32(r_esp, 0x776f02u); call_ind(t); }
L_00776f02:; BB(0x00776f02);
    /* 00776f02: movsx edx, word ptr [ebp + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x32cu));
    /* 00776f09: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00776f0c: jne 0x776f51 */ if (!fZ) goto L_00776f51;
L_00776f0e:; BB(0x00776f0e);
    /* 00776f0e: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 00776f12: fmul dword ptr [0x978208] */ ST(0) = ST(0) * R_F32((u32)(0x978208u));
    /* 00776f18: fnstcw word ptr [esp + 0x14] */ W16((u32)(r_esp+0x14u), fcw);
    /* 00776f1c: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 00776f21: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00776f26: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 00776f2a: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 00776f2e: fistp dword ptr [esp + 0x24] */ W32((u32)(r_esp+0x24u), (u32)fx_int32(ST(0))); FPOP();
    /* 00776f32: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 00776f36: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00776f38: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 00776f3c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00776f3d: call 0x69b4f0 */ r_esp -= 4; W32(r_esp, 0x776f42u); f_0069b4f0();
    /* 00776f42: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00776f45: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00776f46: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00776f49: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00776f4b: call dword ptr [edx + 0x134] */ { u32 t = R32((u32)(r_edx+0x134u)); r_esp -= 4; W32(r_esp, 0x776f51u); call_ind(t); }
L_00776f51:; BB(0x00776f51);
    /* 00776f51: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00776f52: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00776f53: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00776f55: call 0x773ab0 */ r_esp -= 4; W32(r_esp, 0x776f5au); f_00773ab0();
    /* 00776f5a: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 00776f5e: add esp, 0xb0 */ {  u32 a = r_esp; u32 b = 0xb0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00776f64: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00776f65: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00776f66: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00776f67: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00776f68: ret 8 */ FN_RET(0x00776f70); r_esp += 12; return;
L_00776f70:; BB(0x00776f70);
    /* 00776f70: add byte ptr [eax], cl */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00776f72: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00776f74: jmp 0x775740 */ goto L_00775740;
}

