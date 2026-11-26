#include "protos.h"

void f_00580000(void)
{
    FN_ENTER(0x00580000);
    /* 00580000: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00580002: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x580007u); f_0082f9c4();
    /* 00580007: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0058000a: add ecx, 0xb8 */ {  u32 a = r_ecx; u32 b = 0xb8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00580010: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x580015u); f_0083173c();
    /* 00580015: fld dword ptr [0xa74180] */ FPUSH(R_F32((u32)(0xa74180u)));
    /* 0058001b: mov esi, dword ptr [ebp - 0x4c] */ r_esi = R32((u32)(r_ebp+0xffffffb4u));
    /* 0058001e: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00580021: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00580024: fld dword ptr [esi + 0xb8] */ FPUSH(R_F32((u32)(r_esi+0xb8u)));
    /* 0058002a: fld dword ptr [esi + 0xbc] */ FPUSH(R_F32((u32)(r_esi+0xbcu)));
    /* 00580030: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00580033: fld dword ptr [esi + 0xc0] */ FPUSH(R_F32((u32)(r_esi+0xc0u)));
    /* 00580039: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0058003b: fdivp st(3) */ ST(3) = ST(3) / ST(0); FPOP();
    /* 0058003d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0058003f: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00580041: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00580043: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00580045: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00580047: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 00580049: fstp dword ptr [esi + 0xb8] */ W_F32((u32)(r_esi+0xb8u), ST(0)); FPOP();
    /* 0058004f: fstp dword ptr [esi + 0xbc] */ W_F32((u32)(r_esi+0xbcu), ST(0)); FPOP();
    /* 00580055: fstp dword ptr [esi + 0xc0] */ W_F32((u32)(r_esi+0xc0u), ST(0)); FPOP();
    /* 0058005b: movzx ecx, word ptr [eax + 0x1c] */ r_ecx = (u32)R16((u32)(r_eax+0x1cu));
    /* 0058005f: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
    /* 00580066: mov word ptr [esi + 0xfc], cx */ W16((u32)(r_esi+0xfcu), (u16)r_ecx);
    /* 0058006d: fld dword ptr [edi] */ FPUSH(R_F32((u32)(r_edi)));
    /* 0058006f: fsub dword ptr [edx] */ ST(0) = ST(0) - R_F32((u32)(r_edx));
    /* 00580071: fld dword ptr [edi + 8] */ FPUSH(R_F32((u32)(r_edi+0x8u)));
    /* 00580074: fsub dword ptr [edx + 8] */ ST(0) = ST(0) - R_F32((u32)(r_edx+0x8u));
    /* 00580077: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 00580079: fmul qword ptr [0x927b70] */ ST(0) = ST(0) * R_F64((u32)(0x927b70u));
    /* 0058007f: fdiv qword ptr [0x927b68] */ ST(0) = ST(0) / R_F64((u32)(0x927b68u));
    /* 00580085: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00580088: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0058008b: fnstcw word ptr [ebp - 0x48] */ W16((u32)(r_ebp+0xffffffb8u), fcw);
    /* 0058008e: movzx eax, word ptr [ebp - 0x48] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffb8u));
    /* 00580092: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00580097: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0058009a: fldcw word ptr [ebp - 0x40] */ fcw = R16((u32)(r_ebp+0xffffffc0u));
    /* 0058009d: fistp dword ptr [ebp - 0x38] */ W32((u32)(r_ebp+0xffffffc8u), (u32)fx_int32(ST(0))); FPOP();
    /* 005800a0: fldcw word ptr [ebp - 0x48] */ fcw = R16((u32)(r_ebp+0xffffffb8u));
    /* 005800a3: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 005800a6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005800a7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005800a8: add eax, 0x4000 */ {  u32 a = r_eax; u32 b = 0x4000u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005800ad: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 005800b0: call 0x78ea6c */ r_esp -= 4; W32(r_esp, 0x5800b5u); f_0078ea6c();
    /* 005800b5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005800b8: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005800bb: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005800be: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 005800c1: fsub dword ptr [ecx + 4] */ ST(0) = ST(0) - R_F32((u32)(r_ecx+0x4u));
    /* 005800c4: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005800c6: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 005800c8: fmul qword ptr [0x927b70] */ ST(0) = ST(0) * R_F64((u32)(0x927b70u));
    /* 005800ce: fdiv qword ptr [0x927b68] */ ST(0) = ST(0) / R_F64((u32)(0x927b68u));
    /* 005800d4: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005800d7: fnstcw word ptr [ebp - 0x48] */ W16((u32)(r_ebp+0xffffffb8u), fcw);
    /* 005800da: movzx eax, word ptr [ebp - 0x48] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffb8u));
    /* 005800de: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005800e3: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 005800e6: fldcw word ptr [ebp - 0x40] */ fcw = R16((u32)(r_ebp+0xffffffc0u));
    /* 005800e9: fistp dword ptr [ebp - 0x38] */ W32((u32)(r_ebp+0xffffffc8u), (u32)fx_int32(ST(0))); FPOP();
    /* 005800ec: fldcw word ptr [ebp - 0x48] */ fcw = R16((u32)(r_ebp+0xffffffb8u));
    /* 005800ef: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 005800f2: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005800f4: add eax, 0x4000 */ {  u32 a = r_eax; u32 b = 0x4000u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005800f9: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 005800fc: lea edx, [ebp - 0x58] */ r_edx = (u32)(r_ebp+0xffffffa8u);
    /* 005800ff: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00580101: push 0xf5 */ { u32 v = 0xf5u; r_esp -= 4; W32(r_esp, v); }
    /* 00580106: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00580107: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00580108: call 0x509dc4 */ r_esp -= 4; W32(r_esp, 0x58010du); f_00509dc4();
    /* 0058010d: mov edx, eax */ r_edx = r_eax;
    /* 0058010f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00580112: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00580115: mov dword ptr [eax + 0xe0], edx */ W32((u32)(r_eax+0xe0u), r_edx);
    /* 0058011b: mov edx, dword ptr [eax + 0xf4] */ r_edx = R32((u32)(r_eax+0xf4u));
    /* 00580121: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00580123: jne 0x580131 */ if (!fZ) goto L_00580131;
L_00580125:; BB(0x00580125);
    /* 00580125: mov dword ptr [eax + 0xe4], 0 */ W32((u32)(r_eax+0xe4u), 0x0u);
    /* 0058012f: jmp 0x580191 */ goto L_00580191;
L_00580131:; BB(0x00580131);
    /* 00580131: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00580134: mov edx, dword ptr [eax + 0xac] */ r_edx = R32((u32)(r_eax+0xacu));
    /* 0058013a: mov esi, dword ptr [eax + 0xb0] */ r_esi = R32((u32)(r_eax+0xb0u));
    /* 00580140: mov edi, dword ptr [eax + 0xb4] */ r_edi = R32((u32)(r_eax+0xb4u));
    /* 00580146: mov dword ptr [eax + 0xe8], edx */ W32((u32)(r_eax+0xe8u), r_edx);
    /* 0058014c: mov dword ptr [eax + 0xec], esi */ W32((u32)(r_eax+0xecu), r_esi);
    /* 00580152: mov dword ptr [eax + 0xf0], edi */ W32((u32)(r_eax+0xf0u), r_edi);
    /* 00580158: lea eax, [ecx + 0xe8] */ r_eax = (u32)(r_ecx+0xe8u);
    /* 0058015e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058015f: call 0x57d0b8 */ r_esp -= 4; W32(r_esp, 0x580164u); f_0057d0b8();
    /* 00580164: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00580167: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00580169: push 0xf9 */ { u32 v = 0xf9u; r_esp -= 4; W32(r_esp, v); }
    /* 0058016e: add eax, 0xe8 */ {  u32 a = r_eax; u32 b = 0xe8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00580173: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00580174: call 0x50981c */ r_esp -= 4; W32(r_esp, 0x580179u); f_0050981c();
    /* 00580179: mov edx, eax */ r_edx = r_eax;
    /* 0058017b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0058017e: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00580181: mov dword ptr [eax + 0xf8], 0 */ W32((u32)(r_eax+0xf8u), 0x0u);
    /* 0058018b: mov dword ptr [eax + 0xe4], edx */ W32((u32)(r_eax+0xe4u), r_edx);
L_00580191:; BB(0x00580191);
    /* 00580191: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 00580194: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 00580197: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0058019a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005801a1: mov esp, ebp */ r_esp = r_ebp;
    /* 005801a3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005801a4: mov esp, ebx */ r_esp = r_ebx;
    /* 005801a6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005801a7: ret 0x10 */ FN_RET(0x00580000); r_esp += 20; return;
}

void f_00580018(void)
{
    FN_ENTER(0x00580018);
    /* 00580018: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 00580019: cmpsd dword ptr [esi], dword ptr es:[edi] */ { u32 a = R32(r_esi); u32 b = R32(r_edi); u32 r = (a - b) & 0xffffffffu; r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;  }
    /* 0058001a: add byte ptr [ebx + 0x458bb475], cl */ { u32 ad = (u32)(r_ebx+0x458bb475u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00580020: fmul qword ptr [ebx - 0x79261f83] */ ST(0) = ST(0) * R_F64((u32)(r_ebx+0x86d9e07du));
    /* 00580026: mov eax, 0xd9000000 */ r_eax = 0xd9000000u;
    /* 0058002b: xchg byte ptr [eax + eax + 0x558b0000], bh */ { u32 x = R8((u32)(r_eax+r_eax+0x558b0000u)); u32 y = (u8)(r_ebx>>8); W8((u32)(r_eax+r_eax+0x558b0000u), y); r_ebx = (r_ebx & 0xffff00ffu) | (((x) & 0xffu) << 8); }
    /* 00580032: in al, 0xd9 */ UNSUP(0x00580032, "in al, 0xd9");
    /* 00580034: xchg al, al */ { u32 x = (u8)r_eax; u32 y = (u8)r_eax; r_eax = (r_eax & 0xffffff00u) | ((y) & 0xffu); r_eax = (r_eax & 0xffffff00u) | ((x) & 0xffu); }
    /* 00580036: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00580038: add cl, bl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0058003a: int3  */ UNSUP(0x0058003a, "int3");
}

void f_0058001a(void)
{
    FN_ENTER(0x0058001a);
    /* 0058001a: add byte ptr [ebx + 0x458bb475], cl */ { u32 ad = (u32)(r_ebx+0x458bb475u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00580020: fmul qword ptr [ebx - 0x79261f83] */ ST(0) = ST(0) * R_F64((u32)(r_ebx+0x86d9e07du));
    /* 00580026: mov eax, 0xd9000000 */ r_eax = 0xd9000000u;
    /* 0058002b: xchg byte ptr [eax + eax + 0x558b0000], bh */ { u32 x = R8((u32)(r_eax+r_eax+0x558b0000u)); u32 y = (u8)(r_ebx>>8); W8((u32)(r_eax+r_eax+0x558b0000u), y); r_ebx = (r_ebx & 0xffff00ffu) | (((x) & 0xffu) << 8); }
    /* 00580032: in al, 0xd9 */ UNSUP(0x00580032, "in al, 0xd9");
    /* 00580034: xchg al, al */ { u32 x = (u8)r_eax; u32 y = (u8)r_eax; r_eax = (r_eax & 0xffffff00u) | ((y) & 0xffu); r_eax = (r_eax & 0xffffff00u) | ((x) & 0xffu); }
    /* 00580036: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00580038: add cl, bl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0058003a: int3  */ UNSUP(0x0058003a, "int3");
}

void f_00580030(void)
{
    FN_ENTER(0x00580030);
    /* 00580030: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00580033: fld dword ptr [esi + 0xc0] */ FPUSH(R_F32((u32)(r_esi+0xc0u)));
    /* 00580039: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0058003b: fdivp st(3) */ ST(3) = ST(3) / ST(0); FPOP();
    /* 0058003d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0058003f: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00580041: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00580043: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00580045: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00580047: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 00580049: fstp dword ptr [esi + 0xb8] */ W_F32((u32)(r_esi+0xb8u), ST(0)); FPOP();
    /* 0058004f: fstp dword ptr [esi + 0xbc] */ W_F32((u32)(r_esi+0xbcu), ST(0)); FPOP();
    /* 00580055: fstp dword ptr [esi + 0xc0] */ W_F32((u32)(r_esi+0xc0u), ST(0)); FPOP();
    /* 0058005b: movzx ecx, word ptr [eax + 0x1c] */ r_ecx = (u32)R16((u32)(r_eax+0x1cu));
    /* 0058005f: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
    /* 00580066: mov word ptr [esi + 0xfc], cx */ W16((u32)(r_esi+0xfcu), (u16)r_ecx);
    /* 0058006d: fld dword ptr [edi] */ FPUSH(R_F32((u32)(r_edi)));
    /* 0058006f: fsub dword ptr [edx] */ ST(0) = ST(0) - R_F32((u32)(r_edx));
    /* 00580071: fld dword ptr [edi + 8] */ FPUSH(R_F32((u32)(r_edi+0x8u)));
    /* 00580074: fsub dword ptr [edx + 8] */ ST(0) = ST(0) - R_F32((u32)(r_edx+0x8u));
    /* 00580077: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 00580079: fmul qword ptr [0x927b70] */ ST(0) = ST(0) * R_F64((u32)(0x927b70u));
    /* 0058007f: fdiv qword ptr [0x927b68] */ ST(0) = ST(0) / R_F64((u32)(0x927b68u));
    /* 00580085: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00580088: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0058008b: fnstcw word ptr [ebp - 0x48] */ W16((u32)(r_ebp+0xffffffb8u), fcw);
    /* 0058008e: movzx eax, word ptr [ebp - 0x48] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffb8u));
    /* 00580092: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00580097: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0058009a: fldcw word ptr [ebp - 0x40] */ fcw = R16((u32)(r_ebp+0xffffffc0u));
    /* 0058009d: fistp dword ptr [ebp - 0x38] */ W32((u32)(r_ebp+0xffffffc8u), (u32)fx_int32(ST(0))); FPOP();
    /* 005800a0: fldcw word ptr [ebp - 0x48] */ fcw = R16((u32)(r_ebp+0xffffffb8u));
    /* 005800a3: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 005800a6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005800a7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005800a8: add eax, 0x4000 */ {  u32 a = r_eax; u32 b = 0x4000u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005800ad: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 005800b0: call 0x78ea6c */ r_esp -= 4; W32(r_esp, 0x5800b5u); f_0078ea6c();
    /* 005800b5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005800b8: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005800bb: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005800be: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 005800c1: fsub dword ptr [ecx + 4] */ ST(0) = ST(0) - R_F32((u32)(r_ecx+0x4u));
    /* 005800c4: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005800c6: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 005800c8: fmul qword ptr [0x927b70] */ ST(0) = ST(0) * R_F64((u32)(0x927b70u));
    /* 005800ce: fdiv qword ptr [0x927b68] */ ST(0) = ST(0) / R_F64((u32)(0x927b68u));
    /* 005800d4: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005800d7: fnstcw word ptr [ebp - 0x48] */ W16((u32)(r_ebp+0xffffffb8u), fcw);
    /* 005800da: movzx eax, word ptr [ebp - 0x48] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffb8u));
    /* 005800de: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005800e3: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 005800e6: fldcw word ptr [ebp - 0x40] */ fcw = R16((u32)(r_ebp+0xffffffc0u));
    /* 005800e9: fistp dword ptr [ebp - 0x38] */ W32((u32)(r_ebp+0xffffffc8u), (u32)fx_int32(ST(0))); FPOP();
    /* 005800ec: fldcw word ptr [ebp - 0x48] */ fcw = R16((u32)(r_ebp+0xffffffb8u));
    /* 005800ef: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 005800f2: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005800f4: add eax, 0x4000 */ {  u32 a = r_eax; u32 b = 0x4000u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005800f9: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 005800fc: lea edx, [ebp - 0x58] */ r_edx = (u32)(r_ebp+0xffffffa8u);
    /* 005800ff: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00580101: push 0xf5 */ { u32 v = 0xf5u; r_esp -= 4; W32(r_esp, v); }
    /* 00580106: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00580107: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00580108: call 0x509dc4 */ r_esp -= 4; W32(r_esp, 0x58010du); f_00509dc4();
    /* 0058010d: mov edx, eax */ r_edx = r_eax;
    /* 0058010f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00580112: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00580115: mov dword ptr [eax + 0xe0], edx */ W32((u32)(r_eax+0xe0u), r_edx);
    /* 0058011b: mov edx, dword ptr [eax + 0xf4] */ r_edx = R32((u32)(r_eax+0xf4u));
    /* 00580121: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00580123: jne 0x580131 */ if (!fZ) goto L_00580131;
L_00580125:; BB(0x00580125);
    /* 00580125: mov dword ptr [eax + 0xe4], 0 */ W32((u32)(r_eax+0xe4u), 0x0u);
    /* 0058012f: jmp 0x580191 */ goto L_00580191;
L_00580131:; BB(0x00580131);
    /* 00580131: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00580134: mov edx, dword ptr [eax + 0xac] */ r_edx = R32((u32)(r_eax+0xacu));
    /* 0058013a: mov esi, dword ptr [eax + 0xb0] */ r_esi = R32((u32)(r_eax+0xb0u));
    /* 00580140: mov edi, dword ptr [eax + 0xb4] */ r_edi = R32((u32)(r_eax+0xb4u));
    /* 00580146: mov dword ptr [eax + 0xe8], edx */ W32((u32)(r_eax+0xe8u), r_edx);
    /* 0058014c: mov dword ptr [eax + 0xec], esi */ W32((u32)(r_eax+0xecu), r_esi);
    /* 00580152: mov dword ptr [eax + 0xf0], edi */ W32((u32)(r_eax+0xf0u), r_edi);
    /* 00580158: lea eax, [ecx + 0xe8] */ r_eax = (u32)(r_ecx+0xe8u);
    /* 0058015e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058015f: call 0x57d0b8 */ r_esp -= 4; W32(r_esp, 0x580164u); f_0057d0b8();
    /* 00580164: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00580167: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00580169: push 0xf9 */ { u32 v = 0xf9u; r_esp -= 4; W32(r_esp, v); }
    /* 0058016e: add eax, 0xe8 */ {  u32 a = r_eax; u32 b = 0xe8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00580173: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00580174: call 0x50981c */ r_esp -= 4; W32(r_esp, 0x580179u); f_0050981c();
    /* 00580179: mov edx, eax */ r_edx = r_eax;
    /* 0058017b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0058017e: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00580181: mov dword ptr [eax + 0xf8], 0 */ W32((u32)(r_eax+0xf8u), 0x0u);
    /* 0058018b: mov dword ptr [eax + 0xe4], edx */ W32((u32)(r_eax+0xe4u), r_edx);
L_00580191:; BB(0x00580191);
    /* 00580191: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 00580194: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 00580197: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0058019a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005801a1: mov esp, ebp */ r_esp = r_ebp;
    /* 005801a3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005801a4: mov esp, ebx */ r_esp = r_ebx;
    /* 005801a6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005801a7: ret 0x10 */ FN_RET(0x00580030); r_esp += 20; return;
}

void f_00580045(void)
{
    FN_ENTER(0x00580045);
    /* 00580045: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00580047: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 00580049: fstp dword ptr [esi + 0xb8] */ W_F32((u32)(r_esi+0xb8u), ST(0)); FPOP();
    /* 0058004f: fstp dword ptr [esi + 0xbc] */ W_F32((u32)(r_esi+0xbcu), ST(0)); FPOP();
    /* 00580055: fstp dword ptr [esi + 0xc0] */ W_F32((u32)(r_esi+0xc0u), ST(0)); FPOP();
    /* 0058005b: movzx ecx, word ptr [eax + 0x1c] */ r_ecx = (u32)R16((u32)(r_eax+0x1cu));
    /* 0058005f: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
    /* 00580066: mov word ptr [esi + 0xfc], cx */ W16((u32)(r_esi+0xfcu), (u16)r_ecx);
    /* 0058006d: fld dword ptr [edi] */ FPUSH(R_F32((u32)(r_edi)));
    /* 0058006f: fsub dword ptr [edx] */ ST(0) = ST(0) - R_F32((u32)(r_edx));
    /* 00580071: fld dword ptr [edi + 8] */ FPUSH(R_F32((u32)(r_edi+0x8u)));
    /* 00580074: fsub dword ptr [edx + 8] */ ST(0) = ST(0) - R_F32((u32)(r_edx+0x8u));
    /* 00580077: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 00580079: fmul qword ptr [0x927b70] */ ST(0) = ST(0) * R_F64((u32)(0x927b70u));
    /* 0058007f: fdiv qword ptr [0x927b68] */ ST(0) = ST(0) / R_F64((u32)(0x927b68u));
    /* 00580085: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00580088: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0058008b: fnstcw word ptr [ebp - 0x48] */ W16((u32)(r_ebp+0xffffffb8u), fcw);
    /* 0058008e: movzx eax, word ptr [ebp - 0x48] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffb8u));
    /* 00580092: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00580097: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0058009a: fldcw word ptr [ebp - 0x40] */ fcw = R16((u32)(r_ebp+0xffffffc0u));
    /* 0058009d: fistp dword ptr [ebp - 0x38] */ W32((u32)(r_ebp+0xffffffc8u), (u32)fx_int32(ST(0))); FPOP();
    /* 005800a0: fldcw word ptr [ebp - 0x48] */ fcw = R16((u32)(r_ebp+0xffffffb8u));
    /* 005800a3: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 005800a6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005800a7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005800a8: add eax, 0x4000 */ {  u32 a = r_eax; u32 b = 0x4000u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005800ad: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 005800b0: call 0x78ea6c */ r_esp -= 4; W32(r_esp, 0x5800b5u); f_0078ea6c();
    /* 005800b5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005800b8: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005800bb: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005800be: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 005800c1: fsub dword ptr [ecx + 4] */ ST(0) = ST(0) - R_F32((u32)(r_ecx+0x4u));
    /* 005800c4: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005800c6: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 005800c8: fmul qword ptr [0x927b70] */ ST(0) = ST(0) * R_F64((u32)(0x927b70u));
    /* 005800ce: fdiv qword ptr [0x927b68] */ ST(0) = ST(0) / R_F64((u32)(0x927b68u));
    /* 005800d4: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005800d7: fnstcw word ptr [ebp - 0x48] */ W16((u32)(r_ebp+0xffffffb8u), fcw);
    /* 005800da: movzx eax, word ptr [ebp - 0x48] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffb8u));
    /* 005800de: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005800e3: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 005800e6: fldcw word ptr [ebp - 0x40] */ fcw = R16((u32)(r_ebp+0xffffffc0u));
    /* 005800e9: fistp dword ptr [ebp - 0x38] */ W32((u32)(r_ebp+0xffffffc8u), (u32)fx_int32(ST(0))); FPOP();
    /* 005800ec: fldcw word ptr [ebp - 0x48] */ fcw = R16((u32)(r_ebp+0xffffffb8u));
    /* 005800ef: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 005800f2: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005800f4: add eax, 0x4000 */ {  u32 a = r_eax; u32 b = 0x4000u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005800f9: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 005800fc: lea edx, [ebp - 0x58] */ r_edx = (u32)(r_ebp+0xffffffa8u);
    /* 005800ff: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00580101: push 0xf5 */ { u32 v = 0xf5u; r_esp -= 4; W32(r_esp, v); }
    /* 00580106: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00580107: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00580108: call 0x509dc4 */ r_esp -= 4; W32(r_esp, 0x58010du); f_00509dc4();
    /* 0058010d: mov edx, eax */ r_edx = r_eax;
    /* 0058010f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00580112: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00580115: mov dword ptr [eax + 0xe0], edx */ W32((u32)(r_eax+0xe0u), r_edx);
    /* 0058011b: mov edx, dword ptr [eax + 0xf4] */ r_edx = R32((u32)(r_eax+0xf4u));
    /* 00580121: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00580123: jne 0x580131 */ if (!fZ) goto L_00580131;
L_00580125:; BB(0x00580125);
    /* 00580125: mov dword ptr [eax + 0xe4], 0 */ W32((u32)(r_eax+0xe4u), 0x0u);
    /* 0058012f: jmp 0x580191 */ goto L_00580191;
L_00580131:; BB(0x00580131);
    /* 00580131: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00580134: mov edx, dword ptr [eax + 0xac] */ r_edx = R32((u32)(r_eax+0xacu));
    /* 0058013a: mov esi, dword ptr [eax + 0xb0] */ r_esi = R32((u32)(r_eax+0xb0u));
    /* 00580140: mov edi, dword ptr [eax + 0xb4] */ r_edi = R32((u32)(r_eax+0xb4u));
    /* 00580146: mov dword ptr [eax + 0xe8], edx */ W32((u32)(r_eax+0xe8u), r_edx);
    /* 0058014c: mov dword ptr [eax + 0xec], esi */ W32((u32)(r_eax+0xecu), r_esi);
    /* 00580152: mov dword ptr [eax + 0xf0], edi */ W32((u32)(r_eax+0xf0u), r_edi);
    /* 00580158: lea eax, [ecx + 0xe8] */ r_eax = (u32)(r_ecx+0xe8u);
    /* 0058015e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058015f: call 0x57d0b8 */ r_esp -= 4; W32(r_esp, 0x580164u); f_0057d0b8();
    /* 00580164: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00580167: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00580169: push 0xf9 */ { u32 v = 0xf9u; r_esp -= 4; W32(r_esp, v); }
    /* 0058016e: add eax, 0xe8 */ {  u32 a = r_eax; u32 b = 0xe8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00580173: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00580174: call 0x50981c */ r_esp -= 4; W32(r_esp, 0x580179u); f_0050981c();
    /* 00580179: mov edx, eax */ r_edx = r_eax;
    /* 0058017b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0058017e: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00580181: mov dword ptr [eax + 0xf8], 0 */ W32((u32)(r_eax+0xf8u), 0x0u);
    /* 0058018b: mov dword ptr [eax + 0xe4], edx */ W32((u32)(r_eax+0xe4u), r_edx);
L_00580191:; BB(0x00580191);
    /* 00580191: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 00580194: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 00580197: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0058019a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005801a1: mov esp, ebp */ r_esp = r_ebp;
    /* 005801a3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005801a4: mov esp, ebx */ r_esp = r_ebx;
    /* 005801a6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005801a7: ret 0x10 */ FN_RET(0x00580045); r_esp += 20; return;
}

void f_00580048(void)
{
    FN_ENTER(0x00580048);
    /* 00580048: retf  */ { u32 t = R32(r_esp); r_esp += 4; r_eax = r_edx = 0; call_ind(t); }
    /* 00580049: fstp dword ptr [esi + 0xb8] */ W_F32((u32)(r_esi+0xb8u), ST(0)); FPOP();
    /* 0058004f: fstp dword ptr [esi + 0xbc] */ W_F32((u32)(r_esi+0xbcu), ST(0)); FPOP();
    /* 00580055: fstp dword ptr [esi + 0xc0] */ W_F32((u32)(r_esi+0xc0u), ST(0)); FPOP();
    /* 0058005b: movzx ecx, word ptr [eax + 0x1c] */ r_ecx = (u32)R16((u32)(r_eax+0x1cu));
    /* 0058005f: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
    /* 00580066: mov word ptr [esi + 0xfc], cx */ W16((u32)(r_esi+0xfcu), (u16)r_ecx);
    /* 0058006d: fld dword ptr [edi] */ FPUSH(R_F32((u32)(r_edi)));
    /* 0058006f: fsub dword ptr [edx] */ ST(0) = ST(0) - R_F32((u32)(r_edx));
    /* 00580071: fld dword ptr [edi + 8] */ FPUSH(R_F32((u32)(r_edi+0x8u)));
    /* 00580074: fsub dword ptr [edx + 8] */ ST(0) = ST(0) - R_F32((u32)(r_edx+0x8u));
    /* 00580077: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 00580079: fmul qword ptr [0x927b70] */ ST(0) = ST(0) * R_F64((u32)(0x927b70u));
    /* 0058007f: fdiv qword ptr [0x927b68] */ ST(0) = ST(0) / R_F64((u32)(0x927b68u));
    /* 00580085: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00580088: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0058008b: fnstcw word ptr [ebp - 0x48] */ W16((u32)(r_ebp+0xffffffb8u), fcw);
    /* 0058008e: movzx eax, word ptr [ebp - 0x48] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffb8u));
    /* 00580092: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00580097: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0058009a: fldcw word ptr [ebp - 0x40] */ fcw = R16((u32)(r_ebp+0xffffffc0u));
    /* 0058009d: fistp dword ptr [ebp - 0x38] */ W32((u32)(r_ebp+0xffffffc8u), (u32)fx_int32(ST(0))); FPOP();
    /* 005800a0: fldcw word ptr [ebp - 0x48] */ fcw = R16((u32)(r_ebp+0xffffffb8u));
    /* 005800a3: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 005800a6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005800a7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005800a8: add eax, 0x4000 */ {  u32 a = r_eax; u32 b = 0x4000u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005800ad: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 005800b0: call 0x78ea6c */ r_esp -= 4; W32(r_esp, 0x5800b5u); f_0078ea6c();
    /* 005800b5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005800b8: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005800bb: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005800be: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 005800c1: fsub dword ptr [ecx + 4] */ ST(0) = ST(0) - R_F32((u32)(r_ecx+0x4u));
    /* 005800c4: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005800c6: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 005800c8: fmul qword ptr [0x927b70] */ ST(0) = ST(0) * R_F64((u32)(0x927b70u));
    /* 005800ce: fdiv qword ptr [0x927b68] */ ST(0) = ST(0) / R_F64((u32)(0x927b68u));
    /* 005800d4: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005800d7: fnstcw word ptr [ebp - 0x48] */ W16((u32)(r_ebp+0xffffffb8u), fcw);
    /* 005800da: movzx eax, word ptr [ebp - 0x48] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffb8u));
    /* 005800de: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005800e3: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 005800e6: fldcw word ptr [ebp - 0x40] */ fcw = R16((u32)(r_ebp+0xffffffc0u));
    /* 005800e9: fistp dword ptr [ebp - 0x38] */ W32((u32)(r_ebp+0xffffffc8u), (u32)fx_int32(ST(0))); FPOP();
    /* 005800ec: fldcw word ptr [ebp - 0x48] */ fcw = R16((u32)(r_ebp+0xffffffb8u));
    /* 005800ef: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 005800f2: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005800f4: add eax, 0x4000 */ {  u32 a = r_eax; u32 b = 0x4000u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005800f9: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 005800fc: lea edx, [ebp - 0x58] */ r_edx = (u32)(r_ebp+0xffffffa8u);
    /* 005800ff: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00580101: push 0xf5 */ { u32 v = 0xf5u; r_esp -= 4; W32(r_esp, v); }
    /* 00580106: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00580107: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00580108: call 0x509dc4 */ r_esp -= 4; W32(r_esp, 0x58010du); f_00509dc4();
    /* 0058010d: mov edx, eax */ r_edx = r_eax;
    /* 0058010f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00580112: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00580115: mov dword ptr [eax + 0xe0], edx */ W32((u32)(r_eax+0xe0u), r_edx);
    /* 0058011b: mov edx, dword ptr [eax + 0xf4] */ r_edx = R32((u32)(r_eax+0xf4u));
    /* 00580121: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00580123: jne 0x580131 */ if (!fZ) goto L_00580131;
L_00580125:; BB(0x00580125);
    /* 00580125: mov dword ptr [eax + 0xe4], 0 */ W32((u32)(r_eax+0xe4u), 0x0u);
    /* 0058012f: jmp 0x580191 */ goto L_00580191;
L_00580131:; BB(0x00580131);
    /* 00580131: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00580134: mov edx, dword ptr [eax + 0xac] */ r_edx = R32((u32)(r_eax+0xacu));
    /* 0058013a: mov esi, dword ptr [eax + 0xb0] */ r_esi = R32((u32)(r_eax+0xb0u));
    /* 00580140: mov edi, dword ptr [eax + 0xb4] */ r_edi = R32((u32)(r_eax+0xb4u));
    /* 00580146: mov dword ptr [eax + 0xe8], edx */ W32((u32)(r_eax+0xe8u), r_edx);
    /* 0058014c: mov dword ptr [eax + 0xec], esi */ W32((u32)(r_eax+0xecu), r_esi);
    /* 00580152: mov dword ptr [eax + 0xf0], edi */ W32((u32)(r_eax+0xf0u), r_edi);
    /* 00580158: lea eax, [ecx + 0xe8] */ r_eax = (u32)(r_ecx+0xe8u);
    /* 0058015e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058015f: call 0x57d0b8 */ r_esp -= 4; W32(r_esp, 0x580164u); f_0057d0b8();
    /* 00580164: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00580167: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00580169: push 0xf9 */ { u32 v = 0xf9u; r_esp -= 4; W32(r_esp, v); }
    /* 0058016e: add eax, 0xe8 */ {  u32 a = r_eax; u32 b = 0xe8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00580173: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00580174: call 0x50981c */ r_esp -= 4; W32(r_esp, 0x580179u); f_0050981c();
    /* 00580179: mov edx, eax */ r_edx = r_eax;
    /* 0058017b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0058017e: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00580181: mov dword ptr [eax + 0xf8], 0 */ W32((u32)(r_eax+0xf8u), 0x0u);
    /* 0058018b: mov dword ptr [eax + 0xe4], edx */ W32((u32)(r_eax+0xe4u), r_edx);
L_00580191:; BB(0x00580191);
    /* 00580191: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 00580194: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 00580197: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0058019a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005801a1: mov esp, ebp */ r_esp = r_ebp;
    /* 005801a3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005801a4: mov esp, ebx */ r_esp = r_ebx;
    /* 005801a6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005801a7: ret 0x10 */ FN_RET(0x00580048); r_esp += 20; return;
}

void f_0058007b(void)
{
    FN_ENTER(0x0058007b);
    /* 0058007b: jo 0x5800f8 */ if (fO) goto L_005800f8;
L_0058007d:; BB(0x0058007d);
    /* 0058007d: xchg edx, eax */ { u32 x = r_edx; u32 y = r_eax; r_edx = y; r_eax = x; }
    /* 0058007e: add ah, bl */ {  u32 a = (u8)(r_eax>>8); u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 00580080: xor eax, 0x927b68 */ {  u32 a = r_eax; u32 b = 0x927b68u; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00580085: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00580088: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0058008b: fnstcw word ptr [ebp - 0x48] */ W16((u32)(r_ebp+0xffffffb8u), fcw);
    /* 0058008e: movzx eax, word ptr [ebp - 0x48] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffb8u));
    /* 00580092: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00580097: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0058009a: fldcw word ptr [ebp - 0x40] */ fcw = R16((u32)(r_ebp+0xffffffc0u));
    /* 0058009d: fistp dword ptr [ebp - 0x38] */ W32((u32)(r_ebp+0xffffffc8u), (u32)fx_int32(ST(0))); FPOP();
    /* 005800a0: fldcw word ptr [ebp - 0x48] */ fcw = R16((u32)(r_ebp+0xffffffb8u));
    /* 005800a3: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 005800a6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005800a7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005800a8: add eax, 0x4000 */ {  u32 a = r_eax; u32 b = 0x4000u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005800ad: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 005800b0: call 0x78ea6c */ r_esp -= 4; W32(r_esp, 0x5800b5u); f_0078ea6c();
    /* 005800b5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005800b8: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005800bb: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005800be: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 005800c1: fsub dword ptr [ecx + 4] */ ST(0) = ST(0) - R_F32((u32)(r_ecx+0x4u));
    /* 005800c4: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005800c6: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 005800c8: fmul qword ptr [0x927b70] */ ST(0) = ST(0) * R_F64((u32)(0x927b70u));
    /* 005800ce: fdiv qword ptr [0x927b68] */ ST(0) = ST(0) / R_F64((u32)(0x927b68u));
    /* 005800d4: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005800d7: fnstcw word ptr [ebp - 0x48] */ W16((u32)(r_ebp+0xffffffb8u), fcw);
    /* 005800da: movzx eax, word ptr [ebp - 0x48] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffb8u));
    /* 005800de: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005800e3: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 005800e6: fldcw word ptr [ebp - 0x40] */ fcw = R16((u32)(r_ebp+0xffffffc0u));
    /* 005800e9: fistp dword ptr [ebp - 0x38] */ W32((u32)(r_ebp+0xffffffc8u), (u32)fx_int32(ST(0))); FPOP();
    /* 005800ec: fldcw word ptr [ebp - 0x48] */ fcw = R16((u32)(r_ebp+0xffffffb8u));
    /* 005800ef: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 005800f2: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005800f4: add eax, 0x4000 */ {  u32 a = r_eax; u32 b = 0x4000u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_005800f8:; BB(0x005800f8);
    /* 005800f8: add byte ptr [ecx + 0x558db045], cl */ { u32 ad = (u32)(r_ecx+0x558db045u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 005800f9: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 005800fc: lea edx, [ebp - 0x58] */ r_edx = (u32)(r_ebp+0xffffffa8u);
    /* 005800fe: test al, 0x6a */ {  u32 a = (u8)r_eax; u32 b = 0x6au; u32 r = (a & b) & 0xffu;   }
    /* 005800ff: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00580100: add ch, byte ptr [eax - 0xb] */ {  u32 a = (u8)(r_ecx>>8); u32 b = R8((u32)(r_eax+0xfffffff5u)); u32 r = (a + b) & 0xffu; r_ecx = (r_ecx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 00580101: push 0xf5 */ { u32 v = 0xf5u; r_esp -= 4; W32(r_esp, v); }
    /* 00580103: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00580105: add byte ptr [edx + 0x51], dl */ { u32 ad = (u32)(r_edx+0x51u);  u32 a = R8(ad); u32 b = (u8)r_edx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00580106: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00580107: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00580108: call 0x509dc4 */ r_esp -= 4; W32(r_esp, 0x58010du); f_00509dc4();
    /* 0058010d: mov edx, eax */ r_edx = r_eax;
    /* 0058010f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00580112: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00580115: mov dword ptr [eax + 0xe0], edx */ W32((u32)(r_eax+0xe0u), r_edx);
    /* 0058011b: mov edx, dword ptr [eax + 0xf4] */ r_edx = R32((u32)(r_eax+0xf4u));
    /* 00580121: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00580123: jne 0x580131 */ if (!fZ) goto L_00580131;
L_00580125:; BB(0x00580125);
    /* 00580125: mov dword ptr [eax + 0xe4], 0 */ W32((u32)(r_eax+0xe4u), 0x0u);
    /* 0058012f: jmp 0x580191 */ goto L_00580191;
L_00580131:; BB(0x00580131);
    /* 00580131: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00580134: mov edx, dword ptr [eax + 0xac] */ r_edx = R32((u32)(r_eax+0xacu));
    /* 0058013a: mov esi, dword ptr [eax + 0xb0] */ r_esi = R32((u32)(r_eax+0xb0u));
    /* 00580140: mov edi, dword ptr [eax + 0xb4] */ r_edi = R32((u32)(r_eax+0xb4u));
    /* 00580146: mov dword ptr [eax + 0xe8], edx */ W32((u32)(r_eax+0xe8u), r_edx);
    /* 0058014c: mov dword ptr [eax + 0xec], esi */ W32((u32)(r_eax+0xecu), r_esi);
    /* 00580152: mov dword ptr [eax + 0xf0], edi */ W32((u32)(r_eax+0xf0u), r_edi);
    /* 00580158: lea eax, [ecx + 0xe8] */ r_eax = (u32)(r_ecx+0xe8u);
    /* 0058015e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058015f: call 0x57d0b8 */ r_esp -= 4; W32(r_esp, 0x580164u); f_0057d0b8();
    /* 00580164: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00580167: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00580169: push 0xf9 */ { u32 v = 0xf9u; r_esp -= 4; W32(r_esp, v); }
    /* 0058016e: add eax, 0xe8 */ {  u32 a = r_eax; u32 b = 0xe8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00580173: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00580174: call 0x50981c */ r_esp -= 4; W32(r_esp, 0x580179u); f_0050981c();
    /* 00580179: mov edx, eax */ r_edx = r_eax;
    /* 0058017b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0058017e: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00580181: mov dword ptr [eax + 0xf8], 0 */ W32((u32)(r_eax+0xf8u), 0x0u);
    /* 0058018b: mov dword ptr [eax + 0xe4], edx */ W32((u32)(r_eax+0xe4u), r_edx);
L_00580191:; BB(0x00580191);
    /* 00580191: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 00580194: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 00580197: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0058019a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005801a1: mov esp, ebp */ r_esp = r_ebp;
    /* 005801a3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005801a4: mov esp, ebx */ r_esp = r_ebx;
    /* 005801a6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005801a7: ret 0x10 */ FN_RET(0x0058007b); r_esp += 20; return;
}

void f_0058008a(void)
{
    FN_ENTER(0x0058008a);
    goto L_0058008a;
L_00580046:; BB(0x00580046);
    /* 00580046: retf 0xcbde */ { u32 t = R32(r_esp); r_esp += 4; r_eax = r_edx = 0; call_ind(t); }
    /* 00580049: fstp dword ptr [esi + 0xb8] */ W_F32((u32)(r_esi+0xb8u), ST(0)); FPOP();
    /* 0058004f: fstp dword ptr [esi + 0xbc] */ W_F32((u32)(r_esi+0xbcu), ST(0)); FPOP();
    /* 00580055: fstp dword ptr [esi + 0xc0] */ W_F32((u32)(r_esi+0xc0u), ST(0)); FPOP();
    /* 0058005b: movzx ecx, word ptr [eax + 0x1c] */ r_ecx = (u32)R16((u32)(r_eax+0x1cu));
    /* 0058005f: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
L_00580065:; BB(0x00580065);
    /* 00580065: add byte ptr [esi - 0x77], ah */ { u32 ad = (u32)(r_esi+0xffffff89u);  u32 a = R8(ad); u32 b = (u8)(r_eax>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    UNSUP(0x00580068, "falls out of decoded code");
    /* 00580066: mov word ptr [esi + 0xfc], cx */ W16((u32)(r_esi+0xfcu), (u16)r_ecx);
    /* 0058006d: fld dword ptr [edi] */ FPUSH(R_F32((u32)(r_edi)));
    /* 0058006f: fsub dword ptr [edx] */ ST(0) = ST(0) - R_F32((u32)(r_edx));
    /* 00580071: fld dword ptr [edi + 8] */ FPUSH(R_F32((u32)(r_edi+0x8u)));
    /* 00580074: fsub dword ptr [edx + 8] */ ST(0) = ST(0) - R_F32((u32)(r_edx+0x8u));
    /* 00580077: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 00580079: fmul qword ptr [0x927b70] */ ST(0) = ST(0) * R_F64((u32)(0x927b70u));
    /* 0058007f: fdiv qword ptr [0x927b68] */ ST(0) = ST(0) / R_F64((u32)(0x927b68u));
    /* 00580085: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00580088: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
L_0058008a:; BB(0x0058008a);
    /* 0058008a: loopne 0x580065 */ r_ecx--; if (r_ecx && !fZ) goto L_00580065;
    /* 0058008b: fnstcw word ptr [ebp - 0x48] */ W16((u32)(r_ebp+0xffffffb8u), fcw);
    /* 0058008c: jge 0x580046 */ if ((fS==fO)) goto L_00580046;
L_0058008e:; BB(0x0058008e);
    /* 0058008e: movzx eax, word ptr [ebp - 0x48] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffb8u));
    /* 00580092: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00580097: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0058009a: fldcw word ptr [ebp - 0x40] */ fcw = R16((u32)(r_ebp+0xffffffc0u));
    /* 0058009d: fistp dword ptr [ebp - 0x38] */ W32((u32)(r_ebp+0xffffffc8u), (u32)fx_int32(ST(0))); FPOP();
    /* 005800a0: fldcw word ptr [ebp - 0x48] */ fcw = R16((u32)(r_ebp+0xffffffb8u));
    /* 005800a3: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 005800a6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005800a7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005800a8: add eax, 0x4000 */ {  u32 a = r_eax; u32 b = 0x4000u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005800ad: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 005800b0: call 0x78ea6c */ r_esp -= 4; W32(r_esp, 0x5800b5u); f_0078ea6c();
    /* 005800b5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005800b8: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005800bb: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005800be: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 005800c1: fsub dword ptr [ecx + 4] */ ST(0) = ST(0) - R_F32((u32)(r_ecx+0x4u));
    /* 005800c4: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005800c6: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 005800c8: fmul qword ptr [0x927b70] */ ST(0) = ST(0) * R_F64((u32)(0x927b70u));
    /* 005800ce: fdiv qword ptr [0x927b68] */ ST(0) = ST(0) / R_F64((u32)(0x927b68u));
    /* 005800d4: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005800d7: fnstcw word ptr [ebp - 0x48] */ W16((u32)(r_ebp+0xffffffb8u), fcw);
    /* 005800da: movzx eax, word ptr [ebp - 0x48] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffb8u));
    /* 005800de: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005800e3: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 005800e6: fldcw word ptr [ebp - 0x40] */ fcw = R16((u32)(r_ebp+0xffffffc0u));
    /* 005800e9: fistp dword ptr [ebp - 0x38] */ W32((u32)(r_ebp+0xffffffc8u), (u32)fx_int32(ST(0))); FPOP();
    /* 005800ec: fldcw word ptr [ebp - 0x48] */ fcw = R16((u32)(r_ebp+0xffffffb8u));
    /* 005800ef: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 005800f2: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005800f4: add eax, 0x4000 */ {  u32 a = r_eax; u32 b = 0x4000u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005800f9: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 005800fc: lea edx, [ebp - 0x58] */ r_edx = (u32)(r_ebp+0xffffffa8u);
    /* 005800ff: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00580101: push 0xf5 */ { u32 v = 0xf5u; r_esp -= 4; W32(r_esp, v); }
    /* 00580106: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00580107: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00580108: call 0x509dc4 */ r_esp -= 4; W32(r_esp, 0x58010du); f_00509dc4();
    /* 0058010d: mov edx, eax */ r_edx = r_eax;
    /* 0058010f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00580112: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00580115: mov dword ptr [eax + 0xe0], edx */ W32((u32)(r_eax+0xe0u), r_edx);
    /* 0058011b: mov edx, dword ptr [eax + 0xf4] */ r_edx = R32((u32)(r_eax+0xf4u));
    /* 00580121: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00580123: jne 0x580131 */ if (!fZ) goto L_00580131;
L_00580125:; BB(0x00580125);
    /* 00580125: mov dword ptr [eax + 0xe4], 0 */ W32((u32)(r_eax+0xe4u), 0x0u);
    /* 0058012f: jmp 0x580191 */ goto L_00580191;
L_00580131:; BB(0x00580131);
    /* 00580131: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00580134: mov edx, dword ptr [eax + 0xac] */ r_edx = R32((u32)(r_eax+0xacu));
    /* 0058013a: mov esi, dword ptr [eax + 0xb0] */ r_esi = R32((u32)(r_eax+0xb0u));
    /* 00580140: mov edi, dword ptr [eax + 0xb4] */ r_edi = R32((u32)(r_eax+0xb4u));
    /* 00580146: mov dword ptr [eax + 0xe8], edx */ W32((u32)(r_eax+0xe8u), r_edx);
    /* 0058014c: mov dword ptr [eax + 0xec], esi */ W32((u32)(r_eax+0xecu), r_esi);
    /* 00580152: mov dword ptr [eax + 0xf0], edi */ W32((u32)(r_eax+0xf0u), r_edi);
    /* 00580158: lea eax, [ecx + 0xe8] */ r_eax = (u32)(r_ecx+0xe8u);
    /* 0058015e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058015f: call 0x57d0b8 */ r_esp -= 4; W32(r_esp, 0x580164u); f_0057d0b8();
    /* 00580164: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00580167: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00580169: push 0xf9 */ { u32 v = 0xf9u; r_esp -= 4; W32(r_esp, v); }
    /* 0058016e: add eax, 0xe8 */ {  u32 a = r_eax; u32 b = 0xe8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00580173: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00580174: call 0x50981c */ r_esp -= 4; W32(r_esp, 0x580179u); f_0050981c();
    /* 00580179: mov edx, eax */ r_edx = r_eax;
    /* 0058017b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0058017e: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00580181: mov dword ptr [eax + 0xf8], 0 */ W32((u32)(r_eax+0xf8u), 0x0u);
    /* 0058018b: mov dword ptr [eax + 0xe4], edx */ W32((u32)(r_eax+0xe4u), r_edx);
L_00580191:; BB(0x00580191);
    /* 00580191: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 00580194: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 00580197: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0058019a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005801a1: mov esp, ebp */ r_esp = r_ebp;
    /* 005801a3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005801a4: mov esp, ebx */ r_esp = r_ebx;
    /* 005801a6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005801a7: ret 0x10 */ FN_RET(0x0058008a); r_esp += 20; return;
}

void f_0058008f(void)
{
    FN_ENTER(0x0058008f);
    /* 0058008f: mov bh, 0x45 */ r_ebx = (r_ebx & 0xffff00ffu) | (((0x45u) & 0xffu) << 8);
    /* 00580091: mov eax, 0xc000d */ r_eax = 0xc000du;
    /* 00580096: add byte ptr [ecx + 0x6dd9c045], cl */ { u32 ad = (u32)(r_ecx+0x6dd9c045u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 7) & 1; fC = (r < a); }
    /* 0058009c: rcr bl, 0x5d */ UNSUP(0x0058009c, "rcr bl, 0x5d");
    /* 0058009f: enter 0x6dd9, -0x48 */ { u32 f = 0x6dd9u; u32 lv = 24u; r_esp -= 4; W32(r_esp, r_ebp); u32 fr = r_esp; if (lv) { u32 k = 1; while (k < lv) { r_ebp -= 4; r_esp -= 4; W32(r_esp, R32(r_ebp)); k++; } r_esp -= 4; W32(r_esp, fr); } r_ebp = fr; r_esp -= f; }
    /* 005800a3: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 005800a6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005800a7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005800a8: add eax, 0x4000 */ {  u32 a = r_eax; u32 b = 0x4000u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005800ad: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 005800b0: call 0x78ea6c */ r_esp -= 4; W32(r_esp, 0x5800b5u); f_0078ea6c();
    /* 005800b5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005800b8: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005800bb: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005800be: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 005800c1: fsub dword ptr [ecx + 4] */ ST(0) = ST(0) - R_F32((u32)(r_ecx+0x4u));
    /* 005800c4: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005800c6: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 005800c8: fmul qword ptr [0x927b70] */ ST(0) = ST(0) * R_F64((u32)(0x927b70u));
    /* 005800ce: fdiv qword ptr [0x927b68] */ ST(0) = ST(0) / R_F64((u32)(0x927b68u));
    /* 005800d4: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005800d7: fnstcw word ptr [ebp - 0x48] */ W16((u32)(r_ebp+0xffffffb8u), fcw);
    /* 005800da: movzx eax, word ptr [ebp - 0x48] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffb8u));
    /* 005800de: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005800e3: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 005800e6: fldcw word ptr [ebp - 0x40] */ fcw = R16((u32)(r_ebp+0xffffffc0u));
    /* 005800e9: fistp dword ptr [ebp - 0x38] */ W32((u32)(r_ebp+0xffffffc8u), (u32)fx_int32(ST(0))); FPOP();
    /* 005800ec: fldcw word ptr [ebp - 0x48] */ fcw = R16((u32)(r_ebp+0xffffffb8u));
    /* 005800ef: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 005800f2: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005800f4: add eax, 0x4000 */ {  u32 a = r_eax; u32 b = 0x4000u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005800f9: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 005800fc: lea edx, [ebp - 0x58] */ r_edx = (u32)(r_ebp+0xffffffa8u);
    /* 005800ff: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00580101: push 0xf5 */ { u32 v = 0xf5u; r_esp -= 4; W32(r_esp, v); }
    /* 00580106: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00580107: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00580108: call 0x509dc4 */ r_esp -= 4; W32(r_esp, 0x58010du); f_00509dc4();
    /* 0058010d: mov edx, eax */ r_edx = r_eax;
    /* 0058010f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00580112: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00580115: mov dword ptr [eax + 0xe0], edx */ W32((u32)(r_eax+0xe0u), r_edx);
    /* 0058011b: mov edx, dword ptr [eax + 0xf4] */ r_edx = R32((u32)(r_eax+0xf4u));
    /* 00580121: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00580123: jne 0x580131 */ if (!fZ) goto L_00580131;
L_00580125:; BB(0x00580125);
    /* 00580125: mov dword ptr [eax + 0xe4], 0 */ W32((u32)(r_eax+0xe4u), 0x0u);
    /* 0058012f: jmp 0x580191 */ goto L_00580191;
L_00580131:; BB(0x00580131);
    /* 00580131: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00580134: mov edx, dword ptr [eax + 0xac] */ r_edx = R32((u32)(r_eax+0xacu));
    /* 0058013a: mov esi, dword ptr [eax + 0xb0] */ r_esi = R32((u32)(r_eax+0xb0u));
    /* 00580140: mov edi, dword ptr [eax + 0xb4] */ r_edi = R32((u32)(r_eax+0xb4u));
    /* 00580146: mov dword ptr [eax + 0xe8], edx */ W32((u32)(r_eax+0xe8u), r_edx);
    /* 0058014c: mov dword ptr [eax + 0xec], esi */ W32((u32)(r_eax+0xecu), r_esi);
    /* 00580152: mov dword ptr [eax + 0xf0], edi */ W32((u32)(r_eax+0xf0u), r_edi);
    /* 00580158: lea eax, [ecx + 0xe8] */ r_eax = (u32)(r_ecx+0xe8u);
    /* 0058015e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058015f: call 0x57d0b8 */ r_esp -= 4; W32(r_esp, 0x580164u); f_0057d0b8();
    /* 00580164: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00580167: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00580169: push 0xf9 */ { u32 v = 0xf9u; r_esp -= 4; W32(r_esp, v); }
    /* 0058016e: add eax, 0xe8 */ {  u32 a = r_eax; u32 b = 0xe8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00580173: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00580174: call 0x50981c */ r_esp -= 4; W32(r_esp, 0x580179u); f_0050981c();
    /* 00580179: mov edx, eax */ r_edx = r_eax;
    /* 0058017b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0058017e: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00580181: mov dword ptr [eax + 0xf8], 0 */ W32((u32)(r_eax+0xf8u), 0x0u);
    /* 0058018b: mov dword ptr [eax + 0xe4], edx */ W32((u32)(r_eax+0xe4u), r_edx);
L_00580191:; BB(0x00580191);
    /* 00580191: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 00580194: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 00580197: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0058019a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005801a1: mov esp, ebp */ r_esp = r_ebp;
    /* 005801a3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005801a4: mov esp, ebx */ r_esp = r_ebx;
    /* 005801a6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005801a7: ret 0x10 */ FN_RET(0x0058008f); r_esp += 20; return;
}

void f_005800ac(void)
{
    FN_ENTER(0x005800ac);
    /* 005800ac: add byte ptr [ecx - 0x481753bb], cl */ { u32 ad = (u32)(r_ecx+0xb7e8ac45u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 005800b2: jmp 0xc4db00d7 */ UNSUP(0x005800b2, "jump to code that was not decoded");
}

void f_005800c7(void)
{
    FN_ENTER(0x005800c7);
    /* 005800c7: fmul qword ptr [0x927b70] */ ST(0) = ST(0) * R_F64((u32)(0x927b70u));
    /* 005800ce: fdiv qword ptr [0x927b68] */ ST(0) = ST(0) / R_F64((u32)(0x927b68u));
    /* 005800d4: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005800d7: fnstcw word ptr [ebp - 0x48] */ W16((u32)(r_ebp+0xffffffb8u), fcw);
    /* 005800da: movzx eax, word ptr [ebp - 0x48] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffb8u));
    /* 005800de: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005800e3: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 005800e6: fldcw word ptr [ebp - 0x40] */ fcw = R16((u32)(r_ebp+0xffffffc0u));
    /* 005800e9: fistp dword ptr [ebp - 0x38] */ W32((u32)(r_ebp+0xffffffc8u), (u32)fx_int32(ST(0))); FPOP();
    /* 005800ec: fldcw word ptr [ebp - 0x48] */ fcw = R16((u32)(r_ebp+0xffffffb8u));
    /* 005800ef: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 005800f2: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005800f4: add eax, 0x4000 */ {  u32 a = r_eax; u32 b = 0x4000u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005800f9: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 005800fc: lea edx, [ebp - 0x58] */ r_edx = (u32)(r_ebp+0xffffffa8u);
    /* 005800ff: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00580101: push 0xf5 */ { u32 v = 0xf5u; r_esp -= 4; W32(r_esp, v); }
    /* 00580106: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00580107: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00580108: call 0x509dc4 */ r_esp -= 4; W32(r_esp, 0x58010du); f_00509dc4();
    /* 0058010d: mov edx, eax */ r_edx = r_eax;
    /* 0058010f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00580112: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00580115: mov dword ptr [eax + 0xe0], edx */ W32((u32)(r_eax+0xe0u), r_edx);
    /* 0058011b: mov edx, dword ptr [eax + 0xf4] */ r_edx = R32((u32)(r_eax+0xf4u));
    /* 00580121: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00580123: jne 0x580131 */ if (!fZ) goto L_00580131;
L_00580125:; BB(0x00580125);
    /* 00580125: mov dword ptr [eax + 0xe4], 0 */ W32((u32)(r_eax+0xe4u), 0x0u);
    /* 0058012f: jmp 0x580191 */ goto L_00580191;
L_00580131:; BB(0x00580131);
    /* 00580131: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00580134: mov edx, dword ptr [eax + 0xac] */ r_edx = R32((u32)(r_eax+0xacu));
    /* 0058013a: mov esi, dword ptr [eax + 0xb0] */ r_esi = R32((u32)(r_eax+0xb0u));
    /* 00580140: mov edi, dword ptr [eax + 0xb4] */ r_edi = R32((u32)(r_eax+0xb4u));
    /* 00580146: mov dword ptr [eax + 0xe8], edx */ W32((u32)(r_eax+0xe8u), r_edx);
    /* 0058014c: mov dword ptr [eax + 0xec], esi */ W32((u32)(r_eax+0xecu), r_esi);
    /* 00580152: mov dword ptr [eax + 0xf0], edi */ W32((u32)(r_eax+0xf0u), r_edi);
    /* 00580158: lea eax, [ecx + 0xe8] */ r_eax = (u32)(r_ecx+0xe8u);
    /* 0058015e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058015f: call 0x57d0b8 */ r_esp -= 4; W32(r_esp, 0x580164u); f_0057d0b8();
    /* 00580164: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00580167: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00580169: push 0xf9 */ { u32 v = 0xf9u; r_esp -= 4; W32(r_esp, v); }
    /* 0058016e: add eax, 0xe8 */ {  u32 a = r_eax; u32 b = 0xe8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00580173: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00580174: call 0x50981c */ r_esp -= 4; W32(r_esp, 0x580179u); f_0050981c();
    /* 00580179: mov edx, eax */ r_edx = r_eax;
    /* 0058017b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0058017e: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00580181: mov dword ptr [eax + 0xf8], 0 */ W32((u32)(r_eax+0xf8u), 0x0u);
    /* 0058018b: mov dword ptr [eax + 0xe4], edx */ W32((u32)(r_eax+0xe4u), r_edx);
L_00580191:; BB(0x00580191);
    /* 00580191: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 00580194: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 00580197: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0058019a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005801a1: mov esp, ebp */ r_esp = r_ebp;
    /* 005801a3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005801a4: mov esp, ebx */ r_esp = r_ebx;
    /* 005801a6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005801a7: ret 0x10 */ FN_RET(0x005800c7); r_esp += 20; return;
}

void f_005801d8(void) /* sub_5801D8 */
{
    FN_ENTER(0x005801d8);
    /* 005801d8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005801d9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005801db: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005801dd: call 0x5801fc */ r_esp -= 4; W32(r_esp, 0x5801e2u); f_005801fc();
    /* 005801e2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005801e6: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005801e8: jne 0x5801ee */ if (!fZ) goto L_005801ee;
L_005801ea:; BB(0x005801ea);
    /* 005801ea: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005801eb: ret 4 */ FN_RET(0x005801d8); r_esp += 8; return;
L_005801ee:; BB(0x005801ee);
    /* 005801ee: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005801ef: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5801f4u); f_005c2f74();
    /* 005801f4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005801f5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005801f6: ret 4 */ FN_RET(0x005801d8); r_esp += 8; return;
}

void f_005801fc(void) /* sub_5801FC */
{
    FN_ENTER(0x005801fc);
    /* 005801fc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005801fd: mov ebp, esp */ r_ebp = r_esp;
    /* 005801ff: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00580201: push 0x8d7b70 */ { u32 v = 0x8d7b70u; r_esp -= 4; W32(r_esp, v); }
    /* 00580206: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0058020c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058020d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00580214: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00580217: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0058021a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0058021d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00580220: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00580223: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00580226: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00580229: mov edx, dword ptr [ecx + 0xf8] */ r_edx = R32((u32)(r_ecx+0xf8u));
    /* 0058022f: mov dword ptr [ecx], 0xb07710 */ W32((u32)(r_ecx), 0xb07710u);
    /* 00580235: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00580237: je 0x580253 */ if (fZ) goto L_00580253;
L_00580239:; BB(0x00580239);
    /* 00580239: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0058023c: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00580240: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00580245: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00580249: mov dword ptr [ecx + 0xf8], 0 */ W32((u32)(r_ecx+0xf8u), 0x0u);
L_00580253:; BB(0x00580253);
    /* 00580253: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0058025a: call 0x7b4aec */ r_esp -= 4; W32(r_esp, 0x58025fu); f_007b4aec();
    /* 0058025f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00580262: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00580269: mov esp, ebp */ r_esp = r_ebp;
    /* 0058026b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0058026c: ret  */ FN_RET(0x005801fc); r_esp += 4; return;
}

void f_00580270(void) /* sub_580270 */
{
    FN_ENTER(0x00580270);
    /* 00580270: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00580271: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00580272: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00580273: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00580274: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00580277: mov edi, ecx */ r_edi = r_ecx;
    /* 00580279: movzx eax, word ptr [edi + 0x102] */ r_eax = (u32)R16((u32)(r_edi+0x102u));
    /* 00580280: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00580281: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x580286u); f_007b4d18();
    /* 00580286: mov esi, eax */ r_esi = r_eax;
    /* 00580288: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058028b: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058028d: je 0x58052e */ if (fZ) goto L_0058052e;
L_00580293:; BB(0x00580293);
    /* 00580293: movzx edx, word ptr [edi + 0x100] */ r_edx = (u32)R16((u32)(r_edi+0x100u));
    /* 0058029a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0058029b: call 0x578c74 */ r_esp -= 4; W32(r_esp, 0x5802a0u); f_00578c74();
    /* 005802a0: mov ebp, eax */ r_ebp = r_eax;
    /* 005802a2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005802a5: mov edx, dword ptr [edi + 0xfc] */ r_edx = R32((u32)(r_edi+0xfcu));
    /* 005802ab: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005802ad: jne 0x5802dd */ if (!fZ) goto L_005802dd;
L_005802af:; BB(0x005802af);
    /* 005802af: mov eax, dword ptr [edi + 0xec] */ r_eax = R32((u32)(r_edi+0xecu));
    /* 005802b5: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005802b8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005802ba: jle 0x5804de */ if ((fZ||fS!=fO)) goto L_005804de;
L_005802c0:; BB(0x005802c0);
    /* 005802c0: mov ecx, dword ptr [edi + 0xf8] */ r_ecx = R32((u32)(r_edi+0xf8u));
    /* 005802c6: mov dword ptr [edi + 0xec], eax */ W32((u32)(r_edi+0xecu), r_eax);
    /* 005802cc: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005802ce: je 0x5802d5 */ if (fZ) goto L_005802d5;
L_005802d0:; BB(0x005802d0);
    /* 005802d0: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x5802d5u); f_00508f48();
L_005802d5:; BB(0x005802d5);
    /* 005802d5: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005802d8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005802d9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005802da: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005802db: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005802dc: ret  */ FN_RET(0x00580270); r_esp += 4; return;
L_005802dd:; BB(0x005802dd);
    /* 005802dd: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005802e0: jne 0x580435 */ if (!fZ) goto L_00580435;
L_005802e6:; BB(0x005802e6);
    /* 005802e6: mov edx, dword ptr [edi + 0xec] */ r_edx = R32((u32)(r_edi+0xecu));
    /* 005802ec: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005802ef: mov dword ptr [edi + 0xec], edx */ W32((u32)(r_edi+0xecu), r_edx);
    /* 005802f5: cmp edx, 0x5a */ {  u32 a = r_edx; u32 b = 0x5au; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005802f8: jge 0x5804c9 */ if ((fS==fO)) goto L_005804c9;
L_005802fe:; BB(0x005802fe);
    /* 005802fe: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00580300: je 0x580385 */ if (fZ) goto L_00580385;
L_00580306:; BB(0x00580306);
    /* 00580306: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 0058030a: mov ebx, dword ptr [ebp + 0x300] */ r_ebx = R32((u32)(r_ebp+0x300u));
    /* 00580310: mov edx, dword ptr [ebp + 0x304] */ r_edx = R32((u32)(r_ebp+0x304u));
    /* 00580316: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 0058031a: lea ebx, [edi + 0xac] */ r_ebx = (u32)(r_edi+0xacu);
    /* 00580320: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00580324: mov edx, dword ptr [ebp + 0x308] */ r_edx = R32((u32)(r_ebp+0x308u));
    /* 0058032a: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 0058032e: mov edx, ebx */ r_edx = r_ebx;
    /* 00580330: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x580335u); f_0082f9c4();
    /* 00580335: lea eax, [esp + 4] */ r_eax = (u32)(r_esp+0x4u);
    /* 00580339: push dword ptr [edi + 0xf4] */ { u32 v = R32((u32)(r_edi+0xf4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0058033f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00580340: call 0x78ea90 */ r_esp -= 4; W32(r_esp, 0x580345u); f_0078ea90();
    /* 00580345: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00580347: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058034a: fld dword ptr [0xa74174] */ FPUSH(R_F32((u32)(0xa74174u)));
    /* 00580350: fadd dword ptr [edi + 0xf4] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0xf4u));
    /* 00580356: fstp dword ptr [edi + 0xf4] */ W_F32((u32)(r_edi+0xf4u), ST(0)); FPOP();
    /* 0058035c: lea ecx, [edi + 0xc4] */ r_ecx = (u32)(r_edi+0xc4u);
    /* 00580362: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 00580365: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 00580369: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x58036eu); f_0082ebac();
    /* 0058036e: push dword ptr [0xa7417c] */ { u32 v = R32((u32)(0xa7417cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00580374: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00580378: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00580379: call 0x78ea90 */ r_esp -= 4; W32(r_esp, 0x58037eu); f_0078ea90();
    /* 0058037e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00580380: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00580383: jmp 0x580394 */ goto L_00580394;
L_00580385:; BB(0x00580385);
    /* 00580385: lea ebx, [edi + 0xac] */ r_ebx = (u32)(r_edi+0xacu);
    /* 0058038b: lea eax, [edi + 0xc4] */ r_eax = (u32)(r_edi+0xc4u);
    /* 00580391: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
L_00580394:; BB(0x00580394);
    /* 00580394: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 00580397: mov eax, dword ptr [edi + 0xac] */ r_eax = R32((u32)(r_edi+0xacu));
    /* 0058039d: mov dword ptr [edi + 0xb8], eax */ W32((u32)(r_edi+0xb8u), r_eax);
    /* 005803a3: mov eax, dword ptr [edi + 0xb0] */ r_eax = R32((u32)(r_edi+0xb0u));
    /* 005803a9: mov dword ptr [edi + 0xbc], eax */ W32((u32)(r_edi+0xbcu), r_eax);
    /* 005803af: mov eax, dword ptr [edi + 0xb4] */ r_eax = R32((u32)(r_edi+0xb4u));
    /* 005803b5: mov dword ptr [edi + 0xc0], eax */ W32((u32)(r_edi+0xc0u), r_eax);
    /* 005803bb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005803bd: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x5803c2u); f_0082ebac();
    /* 005803c2: mov ecx, dword ptr [edi + 0xf8] */ r_ecx = R32((u32)(r_edi+0xf8u));
    /* 005803c8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005803ca: je 0x5803d2 */ if (fZ) goto L_005803d2;
L_005803cc:; BB(0x005803cc);
    /* 005803cc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005803cd: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x5803d2u); f_00508db8();
L_005803d2:; BB(0x005803d2);
    /* 005803d2: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005803d4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005803d5: lea eax, [edi + 0xb8] */ r_eax = (u32)(r_edi+0xb8u);
    /* 005803db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005803dc: call 0x77fffc */ r_esp -= 4; W32(r_esp, 0x5803e1u); f_0077fffc();
    /* 005803e1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005803e4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005803e6: je 0x5803fd */ if (fZ) goto L_005803fd;
L_005803e8:; BB(0x005803e8);
    /* 005803e8: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 005803ec: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005803f1: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 005803f5: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005803f8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005803f9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005803fa: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005803fb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005803fc: ret  */ FN_RET(0x00580270); r_esp += 4; return;
L_005803fd:; BB(0x005803fd);
    /* 005803fd: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005803ff: je 0x580435 */ if (fZ) goto L_00580435;
L_00580401:; BB(0x00580401);
    /* 00580401: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 00580404: test eax, 0x4000a00 */ {  u32 a = r_eax; u32 b = 0x4000a00u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00580409: je 0x580413 */ if (fZ) goto L_00580413;
L_0058040b:; BB(0x0058040b);
    /* 0058040b: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0058040e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0058040f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00580410: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00580411: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00580412: ret  */ FN_RET(0x00580270); r_esp += 4; return;
L_00580413:; BB(0x00580413);
    /* 00580413: lea eax, [ebp + 0x300] */ r_eax = (u32)(r_ebp+0x300u);
    /* 00580419: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0058041c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058041d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0058041e: call 0x78ea2c */ r_esp -= 4; W32(r_esp, 0x580423u); f_0078ea2c();
    /* 00580423: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00580426: fld dword ptr [0xa7417c] */ FPUSH(R_F32((u32)(0xa7417cu)));
    /* 0058042c: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0058042e: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00580430: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00580432: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00580433: jae 0x58043d */ if (!fC) goto L_0058043d;
L_00580435:; BB(0x00580435);
    /* 00580435: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00580438: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00580439: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0058043a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0058043b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0058043c: ret  */ FN_RET(0x00580270); r_esp += 4; return;
L_0058043d:; BB(0x0058043d);
    /* 0058043d: fild dword ptr [0xa7416c] */ FPUSH((long double)(i32)R32((u32)(0xa7416cu)));
    /* 00580443: mov ebx, dword ptr [0x927b90] */ r_ebx = R32((u32)(0x927b90u));
    /* 00580449: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0058044c: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 00580450: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00580452: mov dword ptr [esp + 0x10], ebx */ W32((u32)(r_esp+0x10u), r_ebx);
    /* 00580456: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 0058045b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0058045c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0058045d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0058045f: push dword ptr [esp + 0x20] */ { u32 v = R32((u32)(r_esp+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 00580463: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00580464: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00580465: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x580468u); call_ind(t); }
    /* 00580468: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0058046a: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 0058046d: test edx, 0x800 */ {  u32 a = r_edx; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00580473: je 0x58047c */ if (fZ) goto L_0058047c;
L_00580475:; BB(0x00580475);
    /* 00580475: mov ecx, esi */ r_ecx = r_esi;
    /* 00580477: call 0x57d31c */ r_esp -= 4; W32(r_esp, 0x58047cu); f_0057d31c();
L_0058047c:; BB(0x0058047c);
    /* 0058047c: push 0xfb */ { u32 v = 0xfbu; r_esp -= 4; W32(r_esp, v); }
    /* 00580481: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 00580485: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00580486: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x58048bu); f_0050b510();
    /* 0058048b: push 0xfc */ { u32 v = 0xfcu; r_esp -= 4; W32(r_esp, v); }
    /* 00580490: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 00580494: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00580495: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x58049au); f_0050b510();
    /* 0058049a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058049d: movzx edx, word ptr [edi + 0x100] */ r_edx = (u32)R16((u32)(r_edi+0x100u));
    /* 005804a4: cmp edx, dword ptr [0xa9c4f4] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa9c4f4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005804aa: jne 0x5804b4 */ if (!fZ) goto L_005804b4;
L_005804ac:; BB(0x005804ac);
    /* 005804ac: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005804ad: mov ecx, esi */ r_ecx = r_esi;
    /* 005804af: call 0x57f9f4 */ r_esp -= 4; W32(r_esp, 0x5804b4u); f_0057f9f4();
L_005804b4:; BB(0x005804b4);
    /* 005804b4: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 005804b8: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005804bd: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 005804c1: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005804c4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005804c5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005804c6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005804c7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005804c8: ret  */ FN_RET(0x00580270); r_esp += 4; return;
L_005804c9:; BB(0x005804c9);
    /* 005804c9: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 005804cd: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005804d2: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 005804d6: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005804d9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005804da: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005804db: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005804dc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005804dd: ret  */ FN_RET(0x00580270); r_esp += 4; return;
L_005804de:; BB(0x005804de);
    /* 005804de: mov ebx, dword ptr [edi + 0xf0] */ r_ebx = R32((u32)(r_edi+0xf0u));
    /* 005804e4: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 005804e6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005804e7: mov dword ptr [edi + 0xec], esi */ W32((u32)(r_edi+0xecu), r_esi);
    /* 005804ed: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 005804ef: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005804f0: mov dword ptr [edi + 0xac], eax */ W32((u32)(r_edi+0xacu), r_eax);
    /* 005804f6: mov edx, dword ptr [ebx + 4] */ r_edx = R32((u32)(r_ebx+0x4u));
    /* 005804f9: mov dword ptr [edi + 0xb0], edx */ W32((u32)(r_edi+0xb0u), r_edx);
    /* 005804ff: mov ebp, dword ptr [ebx + 8] */ r_ebp = R32((u32)(r_ebx+0x8u));
    /* 00580502: mov dword ptr [edi + 0xfc], 1 */ W32((u32)(r_edi+0xfcu), 0x1u);
    /* 0058050c: mov dword ptr [edi + 0xb4], ebp */ W32((u32)(r_edi+0xb4u), r_ebp);
    /* 00580512: add edi, 0xac */ {  u32 a = r_edi; u32 b = 0xacu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00580518: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00580519: push 0x115 */ { u32 v = 0x115u; r_esp -= 4; W32(r_esp, v); }
    /* 0058051e: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x580523u); f_00814298();
    /* 00580523: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00580526: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00580529: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0058052a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0058052b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0058052c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0058052d: ret  */ FN_RET(0x00580270); r_esp += 4; return;
L_0058052e:; BB(0x0058052e);
    /* 0058052e: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 00580532: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00580537: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 0058053b: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0058053e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0058053f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00580540: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00580541: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00580542: ret  */ FN_RET(0x00580270); r_esp += 4; return;
}

void f_00580544(void) /* sub_580544 */
{
    FN_ENTER(0x00580544);
    /* 00580544: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00580545: mov ebx, esp */ r_ebx = r_esp;
    /* 00580547: and esp, 0xfffffff8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 0058054a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0058054b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0058054c: mov ebp, dword ptr [ebx + 4] */ r_ebp = R32((u32)(r_ebx+0x4u));
    /* 0058054f: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 00580553: mov ebp, esp */ r_ebp = r_esp;
    /* 00580555: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00580557: push 0x8d7b8e */ { u32 v = 0x8d7b8eu; r_esp -= 4; W32(r_esp, v); }
    /* 0058055c: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00580562: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00580563: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0058056a: sub esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0058056d: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00580570: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00580573: mov dword ptr [ebp - 0x30], edi */ W32((u32)(r_ebp+0xffffffd0u), r_edi);
    /* 00580576: mov dword ptr [ebp - 0x2c], esi */ W32((u32)(r_ebp+0xffffffd4u), r_esi);
    /* 00580579: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 0058057c: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 00580582: movzx edx, word ptr [ebx + 0xc] */ r_edx = (u32)R16((u32)(r_ebx+0xcu));
    /* 00580586: mov dword ptr [ebp - 0x50], ecx */ W32((u32)(r_ebp+0xffffffb0u), r_ecx);
    /* 00580589: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0058058c: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 0058058f: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 00580592: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00580595: mov eax, dword ptr [ebx + 0x14] */ r_eax = R32((u32)(r_ebx+0x14u));
    /* 00580598: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0058059b: movzx eax, word ptr [ebx + 0x18] */ r_eax = (u32)R16((u32)(r_ebx+0x18u));
    /* 0058059f: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005805a2: call 0x7b4b48 */ r_esp -= 4; W32(r_esp, 0x5805a7u); f_007b4b48();
    /* 005805a7: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005805ae: mov edi, dword ptr [ebp - 0x50] */ r_edi = R32((u32)(r_ebp+0xffffffb0u));
    /* 005805b1: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005805b4: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005805b7: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 005805ba: mov word ptr [edi + 0x100], ax */ W16((u32)(r_edi+0x100u), (u16)r_eax);
    /* 005805c1: mov word ptr [edi + 0x102], dx */ W16((u32)(r_edi+0x102u), (u16)r_edx);
    /* 005805c8: mov dword ptr [edi], 0xb07710 */ W32((u32)(r_edi), 0xb07710u);
    /* 005805ce: mov dword ptr [edi + 0xf0], esi */ W32((u32)(r_edi+0xf0u), r_esi);
    /* 005805d4: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 005805d9: mov dword ptr [edi + 0xe8], 0 */ W32((u32)(r_edi+0xe8u), 0x0u);
    /* 005805e3: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x5805e8u); f_0082d990();
    /* 005805e8: mov eax, dword ptr [0xa7417c] */ r_eax = R32((u32)(0xa7417cu));
    /* 005805ed: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 005805f0: mov dword ptr [ebp - 0x68], 0 */ W32((u32)(r_ebp+0xffffff98u), 0x0u);
    /* 005805f7: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005805f9: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
    /* 00580600: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 00580603: mov edx, dword ptr [esi + 4] */ r_edx = R32((u32)(r_esi+0x4u));
    /* 00580606: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x58060bu); f_0082d8bc();
    /* 0058060b: mov eax, esi */ r_eax = r_esi;
    /* 0058060d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0058060f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00580611: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x580616u); f_0082e9e4();
    /* 00580616: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 00580619: lea edx, [ebp - 0x68] */ r_edx = (u32)(r_ebp+0xffffff98u);
    /* 0058061c: add eax, 0xc4 */ {  u32 a = r_eax; u32 b = 0xc4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00580621: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00580622: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00580624: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x580629u); f_00830aa0();
    /* 00580629: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x58062eu); f_0082da80();
    /* 0058062e: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00580631: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00580634: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00580637: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00580638: mov dword ptr [edx + 0xec], eax */ W32((u32)(r_edx+0xecu), r_eax);
    /* 0058063e: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x580643u); f_007b4d18();
    /* 00580643: mov edi, eax */ r_edi = r_eax;
    /* 00580645: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00580648: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0058064b: mov dword ptr [ebp - 0x5c], 0 */ W32((u32)(r_ebp+0xffffffa4u), 0x0u);
    /* 00580652: fld dword ptr [edi + 0x300] */ FPUSH(R_F32((u32)(r_edi+0x300u)));
    /* 00580658: fsub dword ptr [ecx] */ ST(0) = ST(0) - R_F32((u32)(r_ecx));
    /* 0058065a: fld dword ptr [edi + 0x308] */ FPUSH(R_F32((u32)(r_edi+0x308u)));
    /* 00580660: fsub dword ptr [ecx + 8] */ ST(0) = ST(0) - R_F32((u32)(r_ecx+0x8u));
    /* 00580663: lea esi, [edi + 0x300] */ r_esi = (u32)(r_edi+0x300u);
    /* 00580669: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0058066b: fmul qword ptr [0x927bb0] */ ST(0) = ST(0) * R_F64((u32)(0x927bb0u));
    /* 00580671: fdiv qword ptr [0x927ba8] */ ST(0) = ST(0) / R_F64((u32)(0x927ba8u));
    /* 00580677: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0058067a: fnstcw word ptr [ebp - 0x48] */ W16((u32)(r_ebp+0xffffffb8u), fcw);
    /* 0058067d: movzx eax, word ptr [ebp - 0x48] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffb8u));
    /* 00580681: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00580686: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00580689: fldcw word ptr [ebp - 0x40] */ fcw = R16((u32)(r_ebp+0xffffffc0u));
    /* 0058068c: fistp dword ptr [ebp - 0x38] */ W32((u32)(r_ebp+0xffffffc8u), (u32)fx_int32(ST(0))); FPOP();
    /* 0058068f: fldcw word ptr [ebp - 0x48] */ fcw = R16((u32)(r_ebp+0xffffffb8u));
    /* 00580692: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00580695: add edx, 0x4000 */ {  u32 a = r_edx; u32 b = 0x4000u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0058069b: mov dword ptr [ebp - 0x58], edx */ W32((u32)(r_ebp+0xffffffa8u), r_edx);
    /* 0058069e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0058069f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005806a0: call 0x78ea6c */ r_esp -= 4; W32(r_esp, 0x5806a5u); f_0078ea6c();
    /* 005806a5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005806a8: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005806ab: fld dword ptr [edi + 0x304] */ FPUSH(R_F32((u32)(r_edi+0x304u)));
    /* 005806b1: fsub dword ptr [eax + 4] */ ST(0) = ST(0) - R_F32((u32)(r_eax+0x4u));
    /* 005806b4: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005806b6: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 005806b8: fmul qword ptr [0x927bb0] */ ST(0) = ST(0) * R_F64((u32)(0x927bb0u));
    /* 005806be: fdiv qword ptr [0x927ba8] */ ST(0) = ST(0) / R_F64((u32)(0x927ba8u));
    /* 005806c4: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005806c7: fnstcw word ptr [ebp - 0x48] */ W16((u32)(r_ebp+0xffffffb8u), fcw);
    /* 005806ca: movzx eax, word ptr [ebp - 0x48] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffb8u));
    /* 005806ce: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005806d3: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 005806d6: fldcw word ptr [ebp - 0x40] */ fcw = R16((u32)(r_ebp+0xffffffc0u));
    /* 005806d9: fistp dword ptr [ebp - 0x38] */ W32((u32)(r_ebp+0xffffffc8u), (u32)fx_int32(ST(0))); FPOP();
    /* 005806dc: fldcw word ptr [ebp - 0x48] */ fcw = R16((u32)(r_ebp+0xffffffb8u));
    /* 005806df: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 005806e2: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005806e4: add eax, 0x4000 */ {  u32 a = r_eax; u32 b = 0x4000u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005806e9: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 005806ec: lea edx, [ebp - 0x5c] */ r_edx = (u32)(r_ebp+0xffffffa4u);
    /* 005806ef: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005806f1: push 0xf4 */ { u32 v = 0xf4u; r_esp -= 4; W32(r_esp, v); }
    /* 005806f6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005806f7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005806f8: call 0x509dc4 */ r_esp -= 4; W32(r_esp, 0x5806fdu); f_00509dc4();
    /* 005806fd: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00580700: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00580703: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00580704: mov dword ptr [edx + 0xf8], eax */ W32((u32)(r_edx+0xf8u), r_eax);
    /* 0058070a: mov eax, dword ptr [0xa74178] */ r_eax = R32((u32)(0xa74178u));
    /* 0058070f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00580710: mov dword ptr [edx + 0xf4], eax */ W32((u32)(r_edx+0xf4u), r_eax);
    /* 00580716: call 0x78ea50 */ r_esp -= 4; W32(r_esp, 0x58071bu); f_0078ea50();
    /* 0058071b: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 0058071e: fcomp dword ptr [0x927bcc] */ fx_compare(ST(0), R_F32((u32)(0x927bccu))); FPOP();
    /* 00580724: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00580726: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00580727: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0058072a: jae 0x58073e */ if (!fC) goto L_0058073e;
L_0058072c:; BB(0x0058072c);
    /* 0058072c: fld dword ptr [edx + 0xf4] */ FPUSH(R_F32((u32)(r_edx+0xf4u)));
    /* 00580732: fmul dword ptr [0x927bc8] */ ST(0) = ST(0) * R_F32((u32)(0x927bc8u));
    /* 00580738: fstp dword ptr [edx + 0xf4] */ W_F32((u32)(r_edx+0xf4u), ST(0)); FPOP();
L_0058073e:; BB(0x0058073e);
    /* 0058073e: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 00580741: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 00580744: mov dword ptr [edx + 0xfc], 0 */ W32((u32)(r_edx+0xfcu), 0x0u);
    /* 0058074e: mov eax, edx */ r_eax = r_edx;
    /* 00580750: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00580753: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0058075a: mov esp, ebp */ r_esp = r_ebp;
    /* 0058075c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0058075d: mov esp, ebx */ r_esp = r_ebx;
    /* 0058075f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00580760: ret 0x14 */ FN_RET(0x00580544); r_esp += 24; return;
}

void f_00580790(void)
{
    FN_ENTER(0x00580790);
    /* 00580790: mov ecx, dword ptr [0xa741c4] */ r_ecx = R32((u32)(0xa741c4u));
    /* 00580796: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00580798: je 0x5807ad */ if (fZ) goto L_005807ad;
L_0058079a:; BB(0x0058079a);
    /* 0058079a: je 0x5807a3 */ if (fZ) goto L_005807a3;
L_0058079c:; BB(0x0058079c);
    /* 0058079c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0058079e: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x5807a3u); f_004066a8();
L_005807a3:; BB(0x005807a3);
    /* 005807a3: mov dword ptr [0xa741c4], 0 */ W32((u32)(0xa741c4u), 0x0u);
L_005807ad:; BB(0x005807ad);
    /* 005807ad: ret  */ FN_RET(0x00580790); r_esp += 4; return;
}

void f_005807b0(void)
{
    FN_ENTER(0x005807b0);
    /* 005807b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005807b1: mov ebp, esp */ r_ebp = r_esp;
    /* 005807b3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005807b5: push 0x8d7bb4 */ { u32 v = 0x8d7bb4u; r_esp -= 4; W32(r_esp, v); }
    /* 005807ba: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005807c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005807c1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005807c8: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005807cb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005807ce: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005807d1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005807d4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005807d7: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 005807dc: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 005807e3: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x5807e8u); f_008581c5();
    /* 005807e8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005807e9: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 005807ec: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005807ee: je 0x580897 */ if (fZ) goto L_00580897;
L_005807f4:; BB(0x005807f4);
    /* 005807f4: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 005807fb: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00580802: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00580805: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00580807: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00580808: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00580809: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058080a: push 0x9bf11c */ { u32 v = 0x9bf11cu; r_esp -= 4; W32(r_esp, v); }
    /* 0058080f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00580811: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x580816u); f_005b7a84();
    /* 00580816: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 00580819: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_00580820:; BB(0x00580820);
    /* 00580820: mov dword ptr [0xa741c4], edi */ W32((u32)(0xa741c4u), r_edi);
    /* 00580826: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0058082d: mov eax, dword ptr [0x927bdc] */ r_eax = R32((u32)(0x927bdcu));
    /* 00580832: movzx edx, word ptr [0x927be0] */ r_edx = (u32)R16((u32)(0x927be0u));
    /* 00580839: movzx ecx, word ptr [0x927be2] */ r_ecx = (u32)R16((u32)(0x927be2u));
    /* 00580840: movzx ebx, word ptr [0x927be4] */ r_ebx = (u32)R16((u32)(0x927be4u));
    /* 00580847: mov esi, dword ptr [edi + 0x430] */ r_esi = R32((u32)(r_edi+0x430u));
    /* 0058084d: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00580850: mov eax, dword ptr [edi + 0x42c] */ r_eax = R32((u32)(r_edi+0x42cu));
    /* 00580856: mov word ptr [ebp - 0x24], dx */ W16((u32)(r_ebp+0xffffffdcu), (u16)r_edx);
    /* 0058085a: mov word ptr [ebp - 0x22], cx */ W16((u32)(r_ebp+0xffffffdeu), (u16)r_ecx);
    /* 0058085e: mov word ptr [ebp - 0x20], bx */ W16((u32)(r_ebp+0xffffffe0u), (u16)r_ebx);
    /* 00580862: mov dword ptr [ebp - 0x2c], esi */ W32((u32)(r_ebp+0xffffffd4u), r_esi);
    /* 00580865: lea edi, [ebp - 0x2c] */ r_edi = (u32)(r_ebp+0xffffffd4u);
    /* 00580868: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00580869: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0058086b: push 0x40a00000 */ { u32 v = 0x40a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00580870: push dword ptr [eax + 0xc] */ { u32 v = R32((u32)(r_eax+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00580873: push dword ptr [eax + 8] */ { u32 v = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00580876: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 00580878: call 0x608470 */ r_esp -= 4; W32(r_esp, 0x58087du); f_00608470();
    /* 0058087d: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00580880: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00580883: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 00580886: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00580889: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0058088c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00580893: mov esp, ebp */ r_esp = r_ebp;
    /* 00580895: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00580896: ret  */ FN_RET(0x005807b0); r_esp += 4; return;
L_00580897:; BB(0x00580897);
    /* 00580897: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00580899: jmp 0x580820 */ goto L_00580820;
}

void f_0058089c(void)
{
    FN_ENTER(0x0058089c);
    /* 0058089c: mov ecx, dword ptr [0xa741cc] */ r_ecx = R32((u32)(0xa741ccu));
    /* 005808a2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005808a4: je 0x5808b9 */ if (fZ) goto L_005808b9;
L_005808a6:; BB(0x005808a6);
    /* 005808a6: je 0x5808af */ if (fZ) goto L_005808af;
L_005808a8:; BB(0x005808a8);
    /* 005808a8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005808aa: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x5808afu); f_004066a8();
L_005808af:; BB(0x005808af);
    /* 005808af: mov dword ptr [0xa741cc], 0 */ W32((u32)(0xa741ccu), 0x0u);
L_005808b9:; BB(0x005808b9);
    /* 005808b9: ret  */ FN_RET(0x0058089c); r_esp += 4; return;
}

void f_005808bc(void)
{
    FN_ENTER(0x005808bc);
    /* 005808bc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005808bd: mov ebp, esp */ r_ebp = r_esp;
    /* 005808bf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005808c1: push 0x8d7bdc */ { u32 v = 0x8d7bdcu; r_esp -= 4; W32(r_esp, v); }
    /* 005808c6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005808cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005808cd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005808d4: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005808d7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005808da: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005808dd: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005808e0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005808e3: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 005808e8: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
    /* 005808ef: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x5808f4u); f_008581c5();
    /* 005808f4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005808f5: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 005808f8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005808fa: je 0x5809f9 */ if (fZ) goto L_005809f9;
L_00580900:; BB(0x00580900);
    /* 00580900: mov dword ptr [ebp - 0x44], 1 */ W32((u32)(r_ebp+0xffffffbcu), 0x1u);
    /* 00580907: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0058090e: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00580911: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00580913: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00580914: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00580915: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00580916: push 0x9bf164 */ { u32 v = 0x9bf164u; r_esp -= 4; W32(r_esp, v); }
    /* 0058091b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0058091d: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x580922u); f_005b7a84();
    /* 00580922: mov edi, dword ptr [ebp - 0x40] */ r_edi = R32((u32)(r_ebp+0xffffffc0u));
    /* 00580925: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
    /* 0058092c: mov dword ptr [0xa741cc], edi */ W32((u32)(0xa741ccu), r_edi);
    /* 00580932: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00580939: mov eax, dword ptr [0x927c5c] */ r_eax = R32((u32)(0x927c5cu));
    /* 0058093e: movzx edx, word ptr [0x927c60] */ r_edx = (u32)R16((u32)(0x927c60u));
    /* 00580945: movzx ecx, word ptr [0x927c62] */ r_ecx = (u32)R16((u32)(0x927c62u));
    /* 0058094c: movzx ebx, word ptr [0x927c64] */ r_ebx = (u32)R16((u32)(0x927c64u));
    /* 00580953: mov esi, dword ptr [edi + 0x430] */ r_esi = R32((u32)(r_edi+0x430u));
    /* 00580959: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0058095c: mov eax, dword ptr [edi + 0x42c] */ r_eax = R32((u32)(r_edi+0x42cu));
    /* 00580962: mov word ptr [ebp - 0x34], dx */ W16((u32)(r_ebp+0xffffffccu), (u16)r_edx);
    /* 00580966: mov word ptr [ebp - 0x32], cx */ W16((u32)(r_ebp+0xffffffceu), (u16)r_ecx);
    /* 0058096a: mov word ptr [ebp - 0x30], bx */ W16((u32)(r_ebp+0xffffffd0u), (u16)r_ebx);
    /* 0058096e: mov dword ptr [ebp - 0x3c], esi */ W32((u32)(r_ebp+0xffffffc4u), r_esi);
    /* 00580971: lea edi, [ebp - 0x3c] */ r_edi = (u32)(r_ebp+0xffffffc4u);
    /* 00580974: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00580975: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00580977: push 0x41200000 */ { u32 v = 0x41200000u; r_esp -= 4; W32(r_esp, v); }
    /* 0058097c: push dword ptr [eax + 0xc] */ { u32 v = R32((u32)(r_eax+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0058097f: push dword ptr [eax + 8] */ { u32 v = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00580982: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 00580984: call 0x608470 */ r_esp -= 4; W32(r_esp, 0x580989u); f_00608470();
    /* 00580989: mov eax, dword ptr [0x927c4c] */ r_eax = R32((u32)(0x927c4cu));
    /* 0058098e: movzx edx, word ptr [0x927c50] */ r_edx = (u32)R16((u32)(0x927c50u));
    /* 00580995: movzx ecx, word ptr [0x927c52] */ r_ecx = (u32)R16((u32)(0x927c52u));
    /* 0058099c: movzx ebx, word ptr [0x927c54] */ r_ebx = (u32)R16((u32)(0x927c54u));
    /* 005809a3: mov edi, dword ptr [0xa741cc] */ r_edi = R32((u32)(0xa741ccu));
    /* 005809a9: mov esi, dword ptr [edi + 0x430] */ r_esi = R32((u32)(r_edi+0x430u));
    /* 005809af: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005809b2: mov word ptr [ebp - 0x24], dx */ W16((u32)(r_ebp+0xffffffdcu), (u16)r_edx);
    /* 005809b6: mov edx, dword ptr [edi + 0x42c] */ r_edx = R32((u32)(r_edi+0x42cu));
    /* 005809bc: mov word ptr [ebp - 0x22], cx */ W16((u32)(r_ebp+0xffffffdeu), (u16)r_ecx);
    /* 005809c0: mov word ptr [ebp - 0x20], bx */ W16((u32)(r_ebp+0xffffffe0u), (u16)r_ebx);
    /* 005809c4: mov dword ptr [ebp - 0x2c], esi */ W32((u32)(r_ebp+0xffffffd4u), r_esi);
    /* 005809c7: lea eax, [ebp - 0x2c] */ r_eax = (u32)(r_ebp+0xffffffd4u);
    /* 005809ca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005809cb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005809cd: push 0x41200000 */ { u32 v = 0x41200000u; r_esp -= 4; W32(r_esp, v); }
    /* 005809d2: push dword ptr [edx + 0xc] */ { u32 v = R32((u32)(r_edx+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005809d5: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005809d8: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 005809da: call 0x608470 */ r_esp -= 4; W32(r_esp, 0x5809dfu); f_00608470();
    /* 005809df: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005809e2: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 005809e5: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 005809e8: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 005809eb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005809ee: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005809f5: mov esp, ebp */ r_esp = r_ebp;
    /* 005809f7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005809f8: ret  */ FN_RET(0x005808bc); r_esp += 4; return;
L_005809f9:; BB(0x005809f9);
    /* 005809f9: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 005809fb: jmp 0x58092c */ f_0058092c(); return;
}

void f_00580a00(void) /* sub_580A00 */
{
    FN_ENTER(0x00580a00);
    /* 00580a00: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00580a01: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00580a03: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00580a05: call 0x580a24 */ r_esp -= 4; W32(r_esp, 0x580a0au); f_00580a24();
    /* 00580a0a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00580a0e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00580a10: jne 0x580a16 */ if (!fZ) goto L_00580a16;
L_00580a12:; BB(0x00580a12);
    /* 00580a12: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00580a13: ret 4 */ FN_RET(0x00580a00); r_esp += 8; return;
L_00580a16:; BB(0x00580a16);
    /* 00580a16: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00580a17: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x580a1cu); f_005c2f74();
    /* 00580a1c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00580a1d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00580a1e: ret 4 */ FN_RET(0x00580a00); r_esp += 8; return;
}

void f_00580a24(void) /* sub_580A24 */
{
    FN_ENTER(0x00580a24);
    /* 00580a24: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00580a25: mov ebp, esp */ r_ebp = r_esp;
    /* 00580a27: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00580a29: push 0x8d7c26 */ { u32 v = 0x8d7c26u; r_esp -= 4; W32(r_esp, v); }
    /* 00580a2e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00580a34: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00580a35: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00580a3c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00580a3f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00580a42: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00580a45: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00580a48: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00580a4b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00580a4e: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00580a55: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00580a58: mov ecx, dword ptr [eax + 0x3a4] */ r_ecx = R32((u32)(r_eax+0x3a4u));
    /* 00580a5e: mov dword ptr [eax], 0xb07860 */ W32((u32)(r_eax), 0xb07860u);
    /* 00580a64: call 0x5883f0 */ r_esp -= 4; W32(r_esp, 0x580a69u); f_005883f0();
    /* 00580a69: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00580a6c: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00580a6f: mov ebx, dword ptr [eax + 0x3ec] */ r_ebx = R32((u32)(r_eax+0x3ecu));
    /* 00580a75: movzx edx, word ptr [ebx + 8] */ r_edx = (u32)R16((u32)(r_ebx+0x8u));
    /* 00580a79: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00580a7f: mov word ptr [ebx + 8], dx */ W16((u32)(r_ebx+0x8u), (u16)r_edx);
    /* 00580a83: mov ecx, dword ptr [esi + 0x3f0] */ r_ecx = R32((u32)(r_esi+0x3f0u));
    /* 00580a89: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00580a8b: mov dword ptr [esi + 0x3ec], eax */ W32((u32)(r_esi+0x3ecu), r_eax);
    /* 00580a91: movzx edi, word ptr [ecx + 8] */ r_edi = (u32)R16((u32)(r_ecx+0x8u));
    /* 00580a95: or edi, 0xffff0001 */ {  u32 a = r_edi; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 00580a9b: mov word ptr [ecx + 8], di */ W16((u32)(r_ecx+0x8u), (u16)r_edi);
    /* 00580a9f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00580aa2: mov dword ptr [ecx + 0x3f0], eax */ W32((u32)(r_ecx+0x3f0u), r_eax);
    /* 00580aa8: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x580aadu); f_007b9c8c();
    /* 00580aad: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00580ab0: mov dword ptr [edx + 0x398], 0 */ W32((u32)(r_edx+0x398u), 0x0u);
    /* 00580aba: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_00580abc:; BB(0x00580abc);
    /* 00580abc: mov eax, dword ptr [edx + esi*4 + 0x39c] */ r_eax = R32((u32)(r_edx+r_esi*4+0x39cu));
    /* 00580ac3: lea ebx, [esi + esi] */ r_ebx = (u32)(r_esi+r_esi);
    /* 00580ac6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00580ac8: je 0x580adf */ if (fZ) goto L_00580adf;
L_00580aca:; BB(0x00580aca);
    /* 00580aca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00580acb: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x580ad0u); f_005cdcc0();
    /* 00580ad0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00580ad1: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00580ad4: mov dword ptr [edx + ebx*2 + 0x39c], 0 */ W32((u32)(r_edx+r_ebx*2+0x39cu), 0x0u);
L_00580adf:; BB(0x00580adf);
    /* 00580adf: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00580ae2: cmp esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00580ae5: jl 0x580abc */ if ((fS!=fO)) goto L_00580abc;
L_00580ae7:; BB(0x00580ae7);
    /* 00580ae7: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 00580aee: push 0x5770ec */ { u32 v = 0x5770ecu; r_esp -= 4; W32(r_esp, v); }
    /* 00580af3: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00580af6: add eax, 0x408 */ {  u32 a = r_eax; u32 b = 0x408u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00580afb: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00580afd: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 00580aff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00580b00: call 0x8586d6 */ r_esp -= 4; W32(r_esp, 0x580b05u); f_008586d6();
    /* 00580b05: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00580b0c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00580b0f: call 0x78638c */ r_esp -= 4; W32(r_esp, 0x580b14u); f_0078638c();
    /* 00580b14: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00580b17: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 00580b1a: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00580b1d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00580b20: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00580b27: mov esp, ebp */ r_esp = r_ebp;
    /* 00580b29: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00580b2a: ret  */ FN_RET(0x00580a24); r_esp += 4; return;
}

void f_00580b2c(void) /* sub_580B2C */
{
    FN_ENTER(0x00580b2c);
    /* 00580b2c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00580b2d: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00580b30: mov esi, ecx */ r_esi = r_ecx;
    /* 00580b32: mov eax, dword ptr [esi + 0x37c] */ r_eax = R32((u32)(r_esi+0x37cu));
    /* 00580b38: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00580b3a: je 0x580b9c */ if (fZ) goto L_00580b9c;
L_00580b3c:; BB(0x00580b3c);
    /* 00580b3c: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x580b41u); f_004f7c84();
    /* 00580b41: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00580b43: je 0x580b9c */ if (fZ) goto L_00580b9c;
L_00580b45:; BB(0x00580b45);
    /* 00580b45: mov dword ptr [esi + 0x37c], 0 */ W32((u32)(r_esi+0x37cu), 0x0u);
    /* 00580b4f: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 00580b52: lea edx, [esi + 0x39c] */ r_edx = (u32)(r_esi+0x39cu);
    /* 00580b58: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 00580b5c: lea eax, [esi + 0x3a4] */ r_eax = (u32)(r_esi+0x3a4u);
    /* 00580b62: mov ebp, eax */ r_ebp = r_eax;
    /* 00580b64: mov edi, edx */ r_edi = r_edx;
L_00580b66:; BB(0x00580b66);
    /* 00580b66: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00580b68: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00580b6a: je 0x580b79 */ if (fZ) goto L_00580b79;
L_00580b6c:; BB(0x00580b6c);
    /* 00580b6c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00580b6d: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x580b72u); f_005cdcc0();
    /* 00580b72: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00580b73: mov dword ptr [edi], 0 */ W32((u32)(r_edi), 0x0u);
L_00580b79:; BB(0x00580b79);
    /* 00580b79: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00580b7c: cmp ebp, edi */ {  u32 a = r_ebp; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00580b7e: ja 0x580b66 */ if ((!fC&&!fZ)) goto L_00580b66;
L_00580b80:; BB(0x00580b80);
    /* 00580b80: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 00580b83: mov ebp, dword ptr [esp + 4] */ r_ebp = R32((u32)(r_esp+0x4u));
    /* 00580b87: mov eax, dword ptr [esi + 0x37c] */ r_eax = R32((u32)(r_esi+0x37cu));
    /* 00580b8d: mov eax, dword ptr [eax*8 + 0x9bf2e0] */ r_eax = R32((u32)(r_eax*8+0x9bf2e0u));
    /* 00580b94: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00580b96: je 0x580b9c */ if (fZ) goto L_00580b9c;
L_00580b98:; BB(0x00580b98);
    /* 00580b98: mov ecx, esi */ r_ecx = r_esi;
    /* 00580b9a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x580b9cu); call_ind(t); }
L_00580b9c:; BB(0x00580b9c);
    /* 00580b9c: mov ecx, esi */ r_ecx = r_esi;
    /* 00580b9e: call 0x580c44 */ r_esp -= 4; W32(r_esp, 0x580ba3u); f_00580c44();
    /* 00580ba3: mov eax, dword ptr [esi + 0x37c] */ r_eax = R32((u32)(r_esi+0x37cu));
    /* 00580ba9: mov eax, dword ptr [eax*8 + 0x9bf2e4] */ r_eax = R32((u32)(r_eax*8+0x9bf2e4u));
    /* 00580bb0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00580bb2: je 0x580c3d */ if (fZ) goto L_00580c3d;
L_00580bb8:; BB(0x00580bb8);
    /* 00580bb8: mov ecx, esi */ r_ecx = r_esi;
    /* 00580bba: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x580bbcu); call_ind(t); }
    /* 00580bbc: mov eax, dword ptr [esi + 0x3e4] */ r_eax = R32((u32)(r_esi+0x3e4u));
    /* 00580bc2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00580bc4: je 0x580bd3 */ if (fZ) goto L_00580bd3;
L_00580bc6:; BB(0x00580bc6);
    /* 00580bc6: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 00580bc9: and eax, 0xfdffffff */ {  u32 a = r_eax; u32 b = 0xfdffffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00580bce: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 00580bd1: jmp 0x580bde */ goto L_00580bde;
L_00580bd3:; BB(0x00580bd3);
    /* 00580bd3: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 00580bd6: or eax, 0x2000000 */ {  u32 a = r_eax; u32 b = 0x2000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00580bdb: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
L_00580bde:; BB(0x00580bde);
    /* 00580bde: mov ecx, esi */ r_ecx = r_esi;
    /* 00580be0: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x580be5u); f_0078730c();
    /* 00580be5: mov edx, dword ptr [esi + 0x37c] */ r_edx = R32((u32)(r_esi+0x37cu));
    /* 00580beb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00580bed: je 0x580c3d */ if (fZ) goto L_00580c3d;
L_00580bef:; BB(0x00580bef);
    /* 00580bef: mov eax, dword ptr [esi + 0x3e4] */ r_eax = R32((u32)(r_esi+0x3e4u));
    /* 00580bf5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00580bf7: je 0x580c17 */ if (fZ) goto L_00580c17;
L_00580bf9:; BB(0x00580bf9);
    /* 00580bf9: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00580bfb: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00580bfc: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x580c01u); f_006946a8();
    /* 00580c01: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00580c04: mov ecx, esi */ r_ecx = r_esi;
    /* 00580c06: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x580c0bu); f_007aa094();
    /* 00580c0b: mov edx, dword ptr [esi + 0x37c] */ r_edx = R32((u32)(r_esi+0x37cu));
    /* 00580c11: mov eax, dword ptr [esi + 0x3e4] */ r_eax = R32((u32)(r_esi+0x3e4u));
L_00580c17:; BB(0x00580c17);
    /* 00580c17: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00580c19: je 0x580c20 */ if (fZ) goto L_00580c20;
L_00580c1b:; BB(0x00580c1b);
    /* 00580c1b: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00580c1e: jne 0x580c25 */ if (!fZ) goto L_00580c25;
L_00580c20:; BB(0x00580c20);
    /* 00580c20: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00580c23: jne 0x580c3d */ if (!fZ) goto L_00580c3d;
L_00580c25:; BB(0x00580c25);
    /* 00580c25: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00580c27: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00580c29: add esi, 0x300 */ {  u32 a = r_esi; u32 b = 0x300u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00580c2f: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 00580c34: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00580c35: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x580c3au); f_00805608();
    /* 00580c3a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00580c3d:; BB(0x00580c3d);
    /* 00580c3d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00580c40: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00580c41: ret  */ FN_RET(0x00580b2c); r_esp += 4; return;
}

void f_00580c44(void) /* sub_580C44 */
{
    FN_ENTER(0x00580c44);
    /* 00580c44: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00580c47: mov eax, dword ptr [ecx + 0x37c] */ r_eax = R32((u32)(r_ecx+0x37cu));
    /* 00580c4d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00580c4f: jl 0x580c6b */ if ((fS!=fO)) goto L_00580c6b;
L_00580c51:; BB(0x00580c51);
    /* 00580c51: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00580c54: jle 0x580c65 */ if ((fZ||fS!=fO)) goto L_00580c65;
L_00580c56:; BB(0x00580c56);
    /* 00580c56: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00580c59: je 0x580c65 */ if (fZ) goto L_00580c65;
L_00580c5b:; BB(0x00580c5b);
    /* 00580c5b: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00580c5e: jl 0x580c6b */ if ((fS!=fO)) goto L_00580c6b;
L_00580c60:; BB(0x00580c60);
    /* 00580c60: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00580c63: jg 0x580c6b */ if ((!fZ&&fS==fO)) goto L_00580c6b;
L_00580c65:; BB(0x00580c65);
    /* 00580c65: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00580c67: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00580c6a: ret  */ FN_RET(0x00580c44); r_esp += 4; return;
L_00580c6b:; BB(0x00580c6b);
    /* 00580c6b: mov eax, dword ptr [ecx + 0x3ec] */ r_eax = R32((u32)(r_ecx+0x3ecu));
    /* 00580c71: mov eax, dword ptr [eax + 0x380] */ r_eax = R32((u32)(r_eax+0x380u));
    /* 00580c77: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00580c7a: je 0x580d26 */ if (fZ) goto L_00580d26;
L_00580c80:; BB(0x00580c80);
    /* 00580c80: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00580c83: je 0x580d26 */ if (fZ) goto L_00580d26;
L_00580c89:; BB(0x00580c89);
    /* 00580c89: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00580c8b:; BB(0x00580c8b);
    /* 00580c8b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00580c8d: jne 0x580cb5 */ if (!fZ) goto L_00580cb5;
L_00580c8f:; BB(0x00580c8f);
    /* 00580c8f: mov eax, dword ptr [ecx + 0x3f0] */ r_eax = R32((u32)(r_ecx+0x3f0u));
    /* 00580c95: mov eax, dword ptr [eax + 0x380] */ r_eax = R32((u32)(r_eax+0x380u));
    /* 00580c9b: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00580c9e: je 0x580d1f */ if (fZ) goto L_00580d1f;
L_00580ca4:; BB(0x00580ca4);
    /* 00580ca4: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00580ca7: je 0x580d1f */ if (fZ) goto L_00580d1f;
L_00580ca9:; BB(0x00580ca9);
    /* 00580ca9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00580cab:; BB(0x00580cab);
    /* 00580cab: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00580cad: jne 0x580cb5 */ if (!fZ) goto L_00580cb5;
L_00580caf:; BB(0x00580caf);
    /* 00580caf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00580cb1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00580cb4: ret  */ FN_RET(0x00580c44); r_esp += 4; return;
L_00580cb5:; BB(0x00580cb5);
    /* 00580cb5: mov dword ptr [ecx + 0x37c], 0xa */ W32((u32)(r_ecx+0x37cu), 0xau);
    /* 00580cbf: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 00580cc2: lea edx, [ecx + 0x39c] */ r_edx = (u32)(r_ecx+0x39cu);
    /* 00580cc8: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 00580ccc: mov esi, edx */ r_esi = r_edx;
    /* 00580cce: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
    /* 00580cd2: lea eax, [ecx + 0x3a4] */ r_eax = (u32)(r_ecx+0x3a4u);
    /* 00580cd8: mov ebp, eax */ r_ebp = r_eax;
    /* 00580cda: mov edi, ecx */ r_edi = r_ecx;
L_00580cdc:; BB(0x00580cdc);
    /* 00580cdc: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00580cde: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00580ce0: je 0x580cef */ if (fZ) goto L_00580cef;
L_00580ce2:; BB(0x00580ce2);
    /* 00580ce2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00580ce3: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x580ce8u); f_005cdcc0();
    /* 00580ce8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00580ce9: mov dword ptr [esi], 0 */ W32((u32)(r_esi), 0x0u);
L_00580cef:; BB(0x00580cef);
    /* 00580cef: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00580cf2: cmp ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00580cf4: ja 0x580cdc */ if ((!fC&&!fZ)) goto L_00580cdc;
L_00580cf6:; BB(0x00580cf6);
    /* 00580cf6: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 00580cf9: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
    /* 00580cfd: mov ecx, edi */ r_ecx = r_edi;
    /* 00580cff: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 00580d03: mov eax, dword ptr [ecx + 0x37c] */ r_eax = R32((u32)(r_ecx+0x37cu));
    /* 00580d09: mov eax, dword ptr [eax*8 + 0x9bf2e0] */ r_eax = R32((u32)(r_eax*8+0x9bf2e0u));
    /* 00580d10: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00580d12: je 0x580d16 */ if (fZ) goto L_00580d16;
L_00580d14:; BB(0x00580d14);
    /* 00580d14: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x580d16u); call_ind(t); }
L_00580d16:; BB(0x00580d16);
    /* 00580d16: mov eax, 1 */ r_eax = 0x1u;
    /* 00580d1b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00580d1e: ret  */ FN_RET(0x00580c44); r_esp += 4; return;
L_00580d1f:; BB(0x00580d1f);
    /* 00580d1f: mov eax, 1 */ r_eax = 0x1u;
    /* 00580d24: jmp 0x580cab */ goto L_00580cab;
L_00580d26:; BB(0x00580d26);
    /* 00580d26: mov eax, 1 */ r_eax = 0x1u;
    /* 00580d2b: jmp 0x580c8b */ goto L_00580c8b;
}

void f_00580d30(void) /* sub_580D30 */
{
    FN_ENTER(0x00580d30);
    /* 00580d30: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00580d31: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00580d32: mov esi, ecx */ r_esi = r_ecx;
    /* 00580d34: push 0x41a00000 */ { u32 v = 0x41a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00580d39: mov ecx, esi */ r_ecx = r_esi;
    /* 00580d3b: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00580d3d: push dword ptr [0xa74244] */ { u32 v = R32((u32)(0xa74244u)); r_esp -= 4; W32(r_esp, v); }
    /* 00580d43: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x580d46u); call_ind(t); }
    /* 00580d46: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00580d48: jne 0x580d4d */ if (!fZ) goto L_00580d4d;
L_00580d4a:; BB(0x00580d4a);
    /* 00580d4a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00580d4b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00580d4c: ret  */ FN_RET(0x00580d30); r_esp += 4; return;
L_00580d4d:; BB(0x00580d4d);
    /* 00580d4d: mov eax, dword ptr [esi + 0x3e4] */ r_eax = R32((u32)(r_esi+0x3e4u));
    /* 00580d53: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00580d55: je 0x580de9 */ if (fZ) goto L_00580de9;
L_00580d5b:; BB(0x00580d5b);
    /* 00580d5b: call 0x578b38 */ r_esp -= 4; W32(r_esp, 0x580d60u); f_00578b38();
    /* 00580d60: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 00580d65: mov dword ptr [0xaab518], eax */ W32((u32)(0xaab518u), r_eax);
    /* 00580d6a: lea ebp, [esi + 0x408] */ r_ebp = (u32)(r_esi+0x408u);
    /* 00580d70: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00580d72: call 0x5771a4 */ r_esp -= 4; W32(r_esp, 0x580d77u); f_005771a4();
    /* 00580d77: lea eax, [esi + 0x300] */ r_eax = (u32)(r_esi+0x300u);
    /* 00580d7d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00580d7e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00580d80: call 0x57725c */ r_esp -= 4; W32(r_esp, 0x580d85u); f_0057725c();
    /* 00580d85: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00580d87: je 0x580db3 */ if (fZ) goto L_00580db3;
L_00580d89:; BB(0x00580d89);
    /* 00580d89: mov eax, dword ptr [esi + 0x408] */ r_eax = R32((u32)(r_esi+0x408u));
    /* 00580d8f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00580d91: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x580d94u); call_ind(t); }
    /* 00580d94: mov ecx, esi */ r_ecx = r_esi;
    /* 00580d96: call 0x8173d0 */ r_esp -= 4; W32(r_esp, 0x580d9bu); f_008173d0();
    /* 00580d9b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00580d9d: jne 0x580da6 */ if (!fZ) goto L_00580da6;
L_00580d9f:; BB(0x00580d9f);
    /* 00580d9f: mov ecx, esi */ r_ecx = r_esi;
    /* 00580da1: call 0x580dec */ r_esp -= 4; W32(r_esp, 0x580da6u); f_00580dec();
L_00580da6:; BB(0x00580da6);
    /* 00580da6: mov eax, dword ptr [esi + 0x408] */ r_eax = R32((u32)(r_esi+0x408u));
    /* 00580dac: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00580dae: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x580db1u); call_ind(t); }
    /* 00580db1: jmp 0x580dc9 */ goto L_00580dc9;
L_00580db3:; BB(0x00580db3);
    /* 00580db3: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 00580db8: or eax, 0x1000000 */ {  u32 a = r_eax; u32 b = 0x1000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00580dbd: mov ecx, esi */ r_ecx = r_esi;
    /* 00580dbf: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 00580dc4: call 0x580dec */ r_esp -= 4; W32(r_esp, 0x580dc9u); f_00580dec();
L_00580dc9:; BB(0x00580dc9);
    /* 00580dc9: mov eax, dword ptr [0xaab518] */ r_eax = R32((u32)(0xaab518u));
    /* 00580dce: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 00580dd3: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x580dd8u); f_0082dab0();
    /* 00580dd8: mov eax, dword ptr [esi + 0x3e8] */ r_eax = R32((u32)(r_esi+0x3e8u));
    /* 00580dde: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00580de0: je 0x580de9 */ if (fZ) goto L_00580de9;
L_00580de2:; BB(0x00580de2);
    /* 00580de2: mov ecx, esi */ r_ecx = r_esi;
    /* 00580de4: call 0x580e34 */ r_esp -= 4; W32(r_esp, 0x580de9u); f_00580e34();
L_00580de9:; BB(0x00580de9);
    /* 00580de9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00580dea: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00580deb: ret  */ FN_RET(0x00580d30); r_esp += 4; return;
}

void f_00580dec(void) /* sub_580DEC */
{
    FN_ENTER(0x00580dec);
    /* 00580dec: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00580ded: mov edi, ecx */ r_edi = r_ecx;
    /* 00580def: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x580df4u); f_0082d7b0();
    /* 00580df4: lea ecx, [edi + 0x38] */ r_ecx = (u32)(r_edi+0x38u);
    /* 00580df7: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x580dfcu); f_0082d838();
    /* 00580dfc: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 00580dff: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00580e01: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x580e06u); f_0082d8bc();
    /* 00580e06: mov ecx, dword ptr [edi + 0x24] */ r_ecx = R32((u32)(r_edi+0x24u));
    /* 00580e09: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x580e0eu); f_00829cc8();
    /* 00580e0e: mov ecx, dword ptr [edi + 0x3a4] */ r_ecx = R32((u32)(r_edi+0x3a4u));
    /* 00580e14: call 0x588428 */ r_esp -= 4; W32(r_esp, 0x580e19u); f_00588428();
    /* 00580e19: mov ecx, edi */ r_ecx = r_edi;
    /* 00580e1b: call 0x7aa668 */ r_esp -= 4; W32(r_esp, 0x580e20u); f_007aa668();
    /* 00580e20: mov ecx, dword ptr [edi + 0x3a4] */ r_ecx = R32((u32)(r_edi+0x3a4u));
    /* 00580e26: call 0x452050 */ r_esp -= 4; W32(r_esp, 0x580e2bu); f_00452050();
    /* 00580e2b: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x580e30u); f_0082da80();
    /* 00580e30: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00580e31: ret  */ FN_RET(0x00580dec); r_esp += 4; return;
}

void f_00580e34(void) /* sub_580E34 */
{
    FN_ENTER(0x00580e34);
    /* 00580e34: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00580e35: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00580e38: mov esi, ecx */ r_esi = r_ecx;
    /* 00580e3a: movzx eax, byte ptr [0xa741d4] */ r_eax = (u32)R8((u32)(0xa741d4u));
    /* 00580e41: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00580e43: jne 0x580e61 */ if (!fZ) goto L_00580e61;
L_00580e45:; BB(0x00580e45);
    /* 00580e45: fld dword ptr [0x927e80] */ FPUSH(R_F32((u32)(0x927e80u)));
    /* 00580e4b: fmul dword ptr [0xa74248] */ ST(0) = ST(0) * R_F32((u32)(0xa74248u));
    /* 00580e51: fstp dword ptr [0xa741d8] */ W_F32((u32)(0xa741d8u), ST(0)); FPOP();
    /* 00580e57: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00580e5c: mov byte ptr [0xa741d4], al */ W8((u32)(0xa741d4u), (u8)r_eax);
L_00580e61:; BB(0x00580e61);
    /* 00580e61: fld dword ptr [0xa741d8] */ FPUSH(R_F32((u32)(0xa741d8u)));
    /* 00580e67: fadd dword ptr [esi + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x3cu));
    /* 00580e6a: fcomp dword ptr [esi + 0x38c] */ fx_compare(ST(0), R_F32((u32)(r_esi+0x38cu))); FPOP();
    /* 00580e70: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00580e72: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00580e73: jae 0x580e7a */ if (!fC) goto L_00580e7a;
L_00580e75:; BB(0x00580e75);
    /* 00580e75: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00580e78: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00580e79: ret  */ FN_RET(0x00580e34); r_esp += 4; return;
L_00580e7a:; BB(0x00580e7a);
    /* 00580e7a: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x580e7fu); f_0082d7b0();
    /* 00580e7f: movzx eax, byte ptr [0xa741d4] */ r_eax = (u32)R8((u32)(0xa741d4u));
    /* 00580e86: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00580e88: jne 0x580ea6 */ if (!fZ) goto L_00580ea6;
L_00580e8a:; BB(0x00580e8a);
    /* 00580e8a: fld dword ptr [0x927e7c] */ FPUSH(R_F32((u32)(0x927e7cu)));
    /* 00580e90: mov dword ptr [0xa741dc], 0x3f400000 */ W32((u32)(0xa741dcu), 0x3f400000u);
    /* 00580e9a: or eax, 0xffffff02 */ {  u32 a = r_eax; u32 b = 0xffffff02u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00580e9f: mov byte ptr [0xa741d4], al */ W8((u32)(0xa741d4u), (u8)r_eax);
    /* 00580ea4: jmp 0x580eac */ goto L_00580eac;
L_00580ea6:; BB(0x00580ea6);
    /* 00580ea6: fld dword ptr [0xa741dc] */ FPUSH(R_F32((u32)(0xa741dcu)));
L_00580eac:; BB(0x00580eac);
    /* 00580eac: fld dword ptr [0x927ce0] */ FPUSH(R_F32((u32)(0x927ce0u)));
    /* 00580eb2: fld dword ptr [esi + 0x38] */ FPUSH(R_F32((u32)(r_esi+0x38u)));
    /* 00580eb5: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00580eb7: fld dword ptr [esi + 0x3a8] */ FPUSH(R_F32((u32)(r_esi+0x3a8u)));
    /* 00580ebd: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00580ebf: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00580ec1: fld dword ptr [esi + 0x40] */ FPUSH(R_F32((u32)(r_esi+0x40u)));
    /* 00580ec4: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00580ec6: fld dword ptr [esi + 0x3b0] */ FPUSH(R_F32((u32)(r_esi+0x3b0u)));
    /* 00580ecc: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 00580ece: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00580ed0: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00580ed2: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00580ed5: fld dword ptr [0x927cdc] */ FPUSH(R_F32((u32)(0x927cdcu)));
    /* 00580edb: fadd dword ptr [esi + 0x38c] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x38cu));
    /* 00580ee1: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00580ee3: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00580ee6: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00580eea: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00580eee: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00580ef0: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x580ef5u); f_00830b74();
    /* 00580ef5: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 00580ef9: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00580efc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00580efd: lea ecx, [esi + 0x250] */ r_ecx = (u32)(r_esi+0x250u);
    /* 00580f03: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00580f04: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00580f05: call 0x7a8d98 */ r_esp -= 4; W32(r_esp, 0x580f0au); f_007a8d98();
    /* 00580f0a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00580f0d: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 00580f10: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00580f12: call 0x830c04 */ r_esp -= 4; W32(r_esp, 0x580f17u); f_00830c04();
    /* 00580f17: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 00580f1a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00580f1c: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x580f21u); f_0082d8bc();
    /* 00580f21: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 00580f25: add edx, 0x4000 */ {  u32 a = r_edx; u32 b = 0x4000u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00580f2b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00580f2d: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x580f32u); f_0082e9e4();
    /* 00580f32: movzx edx, byte ptr [0xa741d4] */ r_edx = (u32)R8((u32)(0xa741d4u));
    /* 00580f39: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00580f3c: jne 0x580f59 */ if (!fZ) goto L_00580f59;
L_00580f3e:; BB(0x00580f3e);
    /* 00580f3e: fld dword ptr [0x927e78] */ FPUSH(R_F32((u32)(0x927e78u)));
    /* 00580f44: mov dword ptr [0xa741e0], 0x42200000 */ W32((u32)(0xa741e0u), 0x42200000u);
    /* 00580f4e: or edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00580f51: mov byte ptr [0xa741d4], dl */ W8((u32)(0xa741d4u), (u8)r_edx);
    /* 00580f57: jmp 0x580f5f */ goto L_00580f5f;
L_00580f59:; BB(0x00580f59);
    /* 00580f59: fld dword ptr [0xa741e0] */ FPUSH(R_F32((u32)(0xa741e0u)));
L_00580f5f:; BB(0x00580f5f);
    /* 00580f5f: fld dword ptr [esi + 0x3c] */ FPUSH(R_F32((u32)(r_esi+0x3cu)));
    /* 00580f62: fsub dword ptr [esi + 0x38c] */ ST(0) = ST(0) - R_F32((u32)(r_esi+0x38cu));
    /* 00580f68: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00580f6a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00580f6c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00580f6d: jbe 0x580f75 */ if ((fC||fZ)) goto L_00580f75;
L_00580f6f:; BB(0x00580f6f);
    /* 00580f6f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00580f71: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00580f73: jmp 0x580f86 */ goto L_00580f86;
L_00580f75:; BB(0x00580f75);
    /* 00580f75: fld dword ptr [0x927e74] */ FPUSH(R_F32((u32)(0x927e74u)));
    /* 00580f7b: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00580f7d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00580f7f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00580f80: jbe 0x580f84 */ if ((fC||fZ)) goto L_00580f84;
L_00580f82:; BB(0x00580f82);
    /* 00580f82: fst st(1) */ ST(1) = ST(0);
L_00580f84:; BB(0x00580f84);
    /* 00580f84: fstp st(0) */ ST(0) = ST(0); FPOP();
L_00580f86:; BB(0x00580f86);
    /* 00580f86: mov eax, 0x3f800000 */ r_eax = 0x3f800000u;
    /* 00580f8b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00580f8d: fchs  */ ST(0) = -ST(0);
    /* 00580f8f: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 00580f91: fadd dword ptr [0x927e70] */ ST(0) = ST(0) + R_F32((u32)(0x927e70u));
    /* 00580f97: test dl, 8 */ {  u32 a = (u8)r_edx; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00580f9a: jne 0x580fb2 */ if (!fZ) goto L_00580fb2;
L_00580f9c:; BB(0x00580f9c);
    /* 00580f9c: mov dword ptr [0xa741e4], 0x3f266666 */ W32((u32)(0xa741e4u), 0x3f266666u);
    /* 00580fa6: or edx, 0xffffff08 */ {  u32 a = r_edx; u32 b = 0xffffff08u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00580fac: mov byte ptr [0xa741d4], dl */ W8((u32)(0xa741d4u), (u8)r_edx);
L_00580fb2:; BB(0x00580fb2);
    /* 00580fb2: fld dword ptr [0xa741e4] */ FPUSH(R_F32((u32)(0xa741e4u)));
    /* 00580fb8: fld dword ptr [0x927cd4] */ FPUSH(R_F32((u32)(0x927cd4u)));
    /* 00580fbe: fld dword ptr [0x927cd0] */ FPUSH(R_F32((u32)(0x927cd0u)));
    /* 00580fc4: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00580fc6: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00580fc8: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00580fca: fadd dword ptr [0x927cd8] */ ST(0) = ST(0) + R_F32((u32)(0x927cd8u));
    /* 00580fd0: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 00580fd2: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00580fd4: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00580fd8: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00580fdc: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00580fe0: lea ecx, [esp + 8] */ r_ecx = (u32)(r_esp+0x8u);
    /* 00580fe4: call 0x831290 */ r_esp -= 4; W32(r_esp, 0x580fe9u); f_00831290();
    /* 00580fe9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00580feb: call 0x52d46c */ r_esp -= 4; W32(r_esp, 0x580ff0u); f_0052d46c();
    /* 00580ff0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00580ff1: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x580ff6u); f_0082da80();
    /* 00580ff6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00580ff9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00580ffa: ret  */ FN_RET(0x00580e34); r_esp += 4; return;
}

void f_00580ffc(void) /* sub_580FFC */
{
    FN_ENTER(0x00580ffc);
    /* 00580ffc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00580ffd: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00581000: mov esi, ecx */ r_esi = r_ecx;
    /* 00581002: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x581007u); f_004f7c84();
    /* 00581007: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00581009: je 0x581010 */ if (fZ) goto L_00581010;
L_0058100b:; BB(0x0058100b);
    /* 0058100b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0058100e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0058100f: ret  */ FN_RET(0x00580ffc); r_esp += 4; return;
L_00581010:; BB(0x00581010);
    /* 00581010: mov dword ptr [esi + 0x37c], 1 */ W32((u32)(r_esi+0x37cu), 0x1u);
    /* 0058101a: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 0058101d: lea edx, [esi + 0x39c] */ r_edx = (u32)(r_esi+0x39cu);
    /* 00581023: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 00581027: lea eax, [esi + 0x3a4] */ r_eax = (u32)(r_esi+0x3a4u);
    /* 0058102d: mov ebp, eax */ r_ebp = r_eax;
    /* 0058102f: mov edi, edx */ r_edi = r_edx;
L_00581031:; BB(0x00581031);
    /* 00581031: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00581033: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00581035: je 0x581044 */ if (fZ) goto L_00581044;
L_00581037:; BB(0x00581037);
    /* 00581037: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00581038: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x58103du); f_005cdcc0();
    /* 0058103d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0058103e: mov dword ptr [edi], 0 */ W32((u32)(r_edi), 0x0u);
L_00581044:; BB(0x00581044);
    /* 00581044: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00581047: cmp ebp, edi */ {  u32 a = r_ebp; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00581049: ja 0x581031 */ if ((!fC&&!fZ)) goto L_00581031;
L_0058104b:; BB(0x0058104b);
    /* 0058104b: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 0058104e: mov ebp, dword ptr [esp + 4] */ r_ebp = R32((u32)(r_esp+0x4u));
    /* 00581052: mov eax, dword ptr [esi + 0x37c] */ r_eax = R32((u32)(r_esi+0x37cu));
    /* 00581058: mov eax, dword ptr [eax*8 + 0x9bf2e0] */ r_eax = R32((u32)(r_eax*8+0x9bf2e0u));
    /* 0058105f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00581061: je 0x581067 */ if (fZ) goto L_00581067;
L_00581063:; BB(0x00581063);
    /* 00581063: mov ecx, esi */ r_ecx = r_esi;
    /* 00581065: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x581067u); call_ind(t); }
L_00581067:; BB(0x00581067);
    /* 00581067: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0058106a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0058106b: ret  */ FN_RET(0x00580ffc); r_esp += 4; return;
}

