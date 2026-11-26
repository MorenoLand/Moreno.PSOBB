#include "protos.h"

void f_0050f008(void) /* sub_50F008 */
{
    FN_ENTER(0x0050f008);
    /* 0050f008: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050f009: mov ebp, esp */ r_ebp = r_esp;
    /* 0050f00b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0050f00d: push 0x8d4078 */ { u32 v = 0x8d4078u; r_esp -= 4; W32(r_esp, v); }
    /* 0050f012: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0050f018: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050f019: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0050f020: sub esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0050f023: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0050f026: mov dword ptr [ebp - 0x30], edi */ W32((u32)(r_ebp+0xffffffd0u), r_edi);
    /* 0050f029: mov dword ptr [ebp - 0x2c], esi */ W32((u32)(r_ebp+0xffffffd4u), r_esi);
    /* 0050f02c: mov dword ptr [ebp - 0x28], ebx */ W32((u32)(r_ebp+0xffffffd8u), r_ebx);
    /* 0050f02f: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 0050f032: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 0050f035: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0050f038: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0050f03b: mov dword ptr [ebp - 0x5c], ecx */ W32((u32)(r_ebp+0xffffffa4u), r_ecx);
    /* 0050f03e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0050f03f: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0050f042: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0050f045: movzx eax, word ptr [ebp + 0x18] */ r_eax = (u32)R16((u32)(r_ebp+0x18u));
    /* 0050f049: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 0050f04c: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0050f04f: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0050f053: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0050f056: call 0x508460 */ r_esp -= 4; W32(r_esp, 0x50f05bu); f_00508460();
    /* 0050f05b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0050f062: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 0050f065: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0050f068: mov dword ptr [eax], 0xaff4a8 */ W32((u32)(r_eax), 0xaff4a8u);
    /* 0050f06e: mov word ptr [eax + 0x24], dx */ W16((u32)(r_eax+0x24u), (u16)r_edx);
    /* 0050f072: mov dword ptr [eax + 0x118], 0 */ W32((u32)(r_eax+0x118u), 0x0u);
    /* 0050f07c: test edx, 0x80 */ {  u32 a = r_edx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050f082: mov dword ptr [eax + 0x11c], 0 */ W32((u32)(r_eax+0x11cu), 0x0u);
    /* 0050f08c: mov dword ptr [eax + 0x120], 0 */ W32((u32)(r_eax+0x120u), 0x0u);
    /* 0050f096: je 0x50f09f */ if (fZ) goto L_0050f09f;
L_0050f098:; BB(0x0050f098);
    /* 0050f098: mov byte ptr [eax + 0x99], 1 */ W8((u32)(r_eax+0x99u), 0x1u);
L_0050f09f:; BB(0x0050f09f);
    /* 0050f09f: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0050f0a2: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0050f0a5: mov word ptr [eax + 0x28], dx */ W16((u32)(r_eax+0x28u), (u16)r_edx);
    /* 0050f0a9: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 0050f0ab: mov dword ptr [eax + 0x9c], ecx */ W32((u32)(r_eax+0x9cu), r_ecx);
    /* 0050f0b1: mov ebx, dword ptr [esi + 4] */ r_ebx = R32((u32)(r_esi+0x4u));
    /* 0050f0b4: mov dword ptr [eax + 0xa0], ebx */ W32((u32)(r_eax+0xa0u), r_ebx);
    /* 0050f0ba: mov edi, dword ptr [esi + 8] */ r_edi = R32((u32)(r_esi+0x8u));
    /* 0050f0bd: mov dword ptr [eax + 0xa4], edi */ W32((u32)(r_eax+0xa4u), r_edi);
    /* 0050f0c3: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x50f0c8u); f_008587a5();
    /* 0050f0c8: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0050f0cb: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0050f0ce: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 0050f0d1: fild dword ptr [ebp - 0x58] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffa8u)));
    /* 0050f0d4: fdiv dword ptr [0x9203c4] */ ST(0) = ST(0) / R_F32((u32)(0x9203c4u));
    /* 0050f0da: fadd dword ptr [0x9203c8] */ ST(0) = ST(0) + R_F32((u32)(0x9203c8u));
    /* 0050f0e0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0050f0e3: fmul dword ptr [eax + 0x18] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x18u));
    /* 0050f0e6: fadd dword ptr [edx] */ ST(0) = ST(0) + R_F32((u32)(r_edx));
    /* 0050f0e8: fstp dword ptr [ecx + 0x74] */ W_F32((u32)(r_ecx+0x74u), ST(0)); FPOP();
    /* 0050f0eb: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x50f0f0u); f_008587a5();
    /* 0050f0f0: mov edx, eax */ r_edx = r_eax;
    /* 0050f0f2: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 0050f0f5: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0050f0f8: mov dword ptr [ebp - 0x50], edx */ W32((u32)(r_ebp+0xffffffb0u), r_edx);
    /* 0050f0fb: fild dword ptr [ebp - 0x50] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffb0u)));
    /* 0050f0fe: fdiv dword ptr [0x9203c4] */ ST(0) = ST(0) / R_F32((u32)(0x9203c4u));
    /* 0050f104: fadd dword ptr [0x9203c8] */ ST(0) = ST(0) + R_F32((u32)(0x9203c8u));
    /* 0050f10a: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0050f10d: fmul dword ptr [ecx + 0x20] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x20u));
    /* 0050f110: fadd dword ptr [edx + 8] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x8u));
    /* 0050f113: fstp dword ptr [eax + 0x7c] */ W_F32((u32)(r_eax+0x7cu), ST(0)); FPOP();
    /* 0050f116: movzx ebx, byte ptr [ecx + 0x88] */ r_ebx = (u32)R8((u32)(r_ecx+0x88u));
    /* 0050f11d: test bl, 2 */ {  u32 a = (u8)r_ebx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0050f120: je 0x50f132 */ if (fZ) goto L_0050f132;
L_0050f122:; BB(0x0050f122);
    /* 0050f122: mov edx, ecx */ r_edx = r_ecx;
    /* 0050f124: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0050f127: fld dword ptr [edx + 0x1c] */ FPUSH(R_F32((u32)(r_edx+0x1cu)));
    /* 0050f12a: fadd dword ptr [ecx + 4] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x4u));
    /* 0050f12d: fstp dword ptr [eax + 0x78] */ W_F32((u32)(r_eax+0x78u), ST(0)); FPOP();
    /* 0050f130: jmp 0x50f15d */ goto L_0050f15d;
L_0050f132:; BB(0x0050f132);
    /* 0050f132: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x50f137u); f_008587a5();
    /* 0050f137: mov edx, eax */ r_edx = r_eax;
    /* 0050f139: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 0050f13c: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0050f13f: mov dword ptr [ebp - 0x50], edx */ W32((u32)(r_ebp+0xffffffb0u), r_edx);
    /* 0050f142: fild dword ptr [ebp - 0x50] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffb0u)));
    /* 0050f145: fdiv dword ptr [0x9203c4] */ ST(0) = ST(0) / R_F32((u32)(0x9203c4u));
    /* 0050f14b: fadd dword ptr [0x9203c8] */ ST(0) = ST(0) + R_F32((u32)(0x9203c8u));
    /* 0050f151: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0050f154: fmul dword ptr [edx + 0x1c] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x1cu));
    /* 0050f157: fadd dword ptr [ecx + 4] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x4u));
    /* 0050f15a: fstp dword ptr [eax + 0x78] */ W_F32((u32)(r_eax+0x78u), ST(0)); FPOP();
L_0050f15d:; BB(0x0050f15d);
    /* 0050f15d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0050f15f: mov esi, edx */ r_esi = r_edx;
    /* 0050f161: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0050f163: mov dword ptr [eax + 0x34], edx */ W32((u32)(r_eax+0x34u), r_edx);
    /* 0050f166: mov ecx, dword ptr [ebx + 8] */ r_ecx = R32((u32)(r_ebx+0x8u));
    /* 0050f169: mov dword ptr [eax + 0x3c], ecx */ W32((u32)(r_eax+0x3cu), r_ecx);
    /* 0050f16c: mov edx, dword ptr [ebx + 4] */ r_edx = R32((u32)(r_ebx+0x4u));
    /* 0050f16f: movzx edi, byte ptr [esi + 0x88] */ r_edi = (u32)R8((u32)(r_esi+0x88u));
    /* 0050f176: test edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050f17c: je 0x50f183 */ if (fZ) goto L_0050f183;
L_0050f17e:; BB(0x0050f17e);
    /* 0050f17e: mov dword ptr [eax + 0x38], edx */ W32((u32)(r_eax+0x38u), r_edx);
    /* 0050f181: jmp 0x50f186 */ goto L_0050f186;
L_0050f183:; BB(0x0050f183);
    /* 0050f183: mov dword ptr [eax + 0x38], edx */ W32((u32)(r_eax+0x38u), r_edx);
L_0050f186:; BB(0x0050f186);
    /* 0050f186: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x50f18bu); f_008587a5();
    /* 0050f18b: mov edx, dword ptr [ebp - 0x5c] */ r_edx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0050f18e: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 0050f191: fild dword ptr [ebp - 0x50] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffb0u)));
    /* 0050f194: fdiv dword ptr [0x9203c4] */ ST(0) = ST(0) / R_F32((u32)(0x9203c4u));
    /* 0050f19a: mov eax, esi */ r_eax = r_esi;
    /* 0050f19c: fmul dword ptr [eax + 0x28] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x28u));
    /* 0050f19f: fadd dword ptr [eax + 0x24] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x24u));
    /* 0050f1a2: fst dword ptr [edx + 0x2c] */ W_F32((u32)(r_edx+0x2cu), ST(0));
    /* 0050f1a5: fstp dword ptr [edx + 0x30] */ W_F32((u32)(r_edx+0x30u), ST(0)); FPOP();
    /* 0050f1a8: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x50f1adu); f_008587a5();
    /* 0050f1ad: mov edx, esi */ r_edx = r_esi;
    /* 0050f1af: fild dword ptr [edx + 0x48] */ FPUSH((long double)(i32)R32((u32)(r_edx+0x48u)));
    /* 0050f1b2: fild dword ptr [edx + 0x4c] */ FPUSH((long double)(i32)R32((u32)(r_edx+0x4cu)));
    /* 0050f1b5: movzx ecx, byte ptr [edx + 0x88] */ r_ecx = (u32)R8((u32)(r_edx+0x88u));
    /* 0050f1bc: fld dword ptr [0x9203c0] */ FPUSH(R_F32((u32)(0x9203c0u)));
    /* 0050f1c2: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 0050f1c5: fild dword ptr [ebp - 0x50] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffb0u)));
    /* 0050f1c8: fdiv dword ptr [0x9203c4] */ ST(0) = ST(0) / R_F32((u32)(0x9203c4u));
    /* 0050f1ce: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0050f1d0: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0050f1d2: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0050f1d4: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0050f1d6: fnstcw word ptr [ebp - 0x48] */ W16((u32)(r_ebp+0xffffffb8u), fcw);
    /* 0050f1d9: movzx eax, word ptr [ebp - 0x48] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffb8u));
    /* 0050f1dd: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0050f1e2: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0050f1e5: fldcw word ptr [ebp - 0x40] */ fcw = R16((u32)(r_ebp+0xffffffc0u));
    /* 0050f1e8: fistp dword ptr [ebp - 0x38] */ W32((u32)(r_ebp+0xffffffc8u), (u32)fx_int32(ST(0))); FPOP();
    /* 0050f1eb: fldcw word ptr [ebp - 0x48] */ fcw = R16((u32)(r_ebp+0xffffffb8u));
    /* 0050f1ee: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 0050f1f1: test cl, 1 */ {  u32 a = (u8)r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0050f1f4: mov ebx, dword ptr [ebp - 0x38] */ r_ebx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0050f1f7: je 0x50f211 */ if (fZ) goto L_0050f211;
L_0050f1f9:; BB(0x0050f1f9);
    /* 0050f1f9: movzx edx, word ptr [eax + 0x1c] */ r_edx = (u32)R16((u32)(r_eax+0x1cu));
    /* 0050f1fd: mov ecx, dword ptr [edx*4 + 0xaaee20] */ r_ecx = R32((u32)(r_edx*4+0xaaee20u));
    /* 0050f204: mov ebx, dword ptr [ecx + 0x28] */ r_ebx = R32((u32)(r_ecx+0x28u));
    /* 0050f207: fild dword ptr [ebx + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_ebx+0xcu)));
    /* 0050f20a: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 0050f20c: fstp dword ptr [eax + 0x60] */ W_F32((u32)(r_eax+0x60u), ST(0)); FPOP();
    /* 0050f20f: jmp 0x50f21c */ goto L_0050f21c;
L_0050f211:; BB(0x0050f211);
    /* 0050f211: mov dword ptr [ebp - 0x50], ebx */ W32((u32)(r_ebp+0xffffffb0u), r_ebx);
    /* 0050f214: fild dword ptr [ebp - 0x50] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffb0u)));
    /* 0050f217: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 0050f219: fstp dword ptr [eax + 0x60] */ W_F32((u32)(r_eax+0x60u), ST(0)); FPOP();
L_0050f21c:; BB(0x0050f21c);
    /* 0050f21c: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x50f221u); f_008587a5();
    /* 0050f221: mov edx, dword ptr [ebp - 0x5c] */ r_edx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0050f224: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 0050f227: fild dword ptr [ebp - 0x50] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffb0u)));
    /* 0050f22a: fdiv dword ptr [0x9203c4] */ ST(0) = ST(0) / R_F32((u32)(0x9203c4u));
    /* 0050f230: mov eax, esi */ r_eax = r_esi;
    /* 0050f232: fmul dword ptr [eax + 0x38] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x38u));
    /* 0050f235: fadd dword ptr [eax + 0x30] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x30u));
    /* 0050f238: fstp dword ptr [edx + 0x40] */ W_F32((u32)(r_edx+0x40u), ST(0)); FPOP();
    /* 0050f23b: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x50f240u); f_008587a5();
    /* 0050f240: mov edx, dword ptr [ebp - 0x5c] */ r_edx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0050f243: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 0050f246: fild dword ptr [ebp - 0x50] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffb0u)));
    /* 0050f249: fdiv dword ptr [0x9203c4] */ ST(0) = ST(0) / R_F32((u32)(0x9203c4u));
    /* 0050f24f: mov eax, esi */ r_eax = r_esi;
    /* 0050f251: fmul dword ptr [eax + 0x3c] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x3cu));
    /* 0050f254: fadd dword ptr [eax + 0x34] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x34u));
    /* 0050f257: fstp dword ptr [edx + 0x44] */ W_F32((u32)(r_edx+0x44u), ST(0)); FPOP();
    /* 0050f25a: mov dword ptr [edx + 0x48], 0 */ W32((u32)(r_edx+0x48u), 0x0u);
    /* 0050f261: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x50f266u); f_008587a5();
    /* 0050f266: mov edx, dword ptr [ebp - 0x5c] */ r_edx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0050f269: fld dword ptr [0x9203bc] */ FPUSH(R_F32((u32)(0x9203bcu)));
    /* 0050f26f: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 0050f272: fild dword ptr [ebp - 0x50] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffb0u)));
    /* 0050f275: fdiv dword ptr [0x9203c4] */ ST(0) = ST(0) / R_F32((u32)(0x9203c4u));
    /* 0050f27b: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0050f27d: add edx, 0x40 */ {  u32 a = r_edx; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0050f280: fmul dword ptr [0x9203b8] */ ST(0) = ST(0) * R_F32((u32)(0x9203b8u));
    /* 0050f286: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 0050f288: fnstcw word ptr [ebp - 0x48] */ W16((u32)(r_ebp+0xffffffb8u), fcw);
    /* 0050f28b: movzx eax, word ptr [ebp - 0x48] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffb8u));
    /* 0050f28f: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0050f294: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0050f297: fldcw word ptr [ebp - 0x40] */ fcw = R16((u32)(r_ebp+0xffffffc0u));
    /* 0050f29a: fistp dword ptr [ebp - 0x38] */ W32((u32)(r_ebp+0xffffffc8u), (u32)fx_int32(ST(0))); FPOP();
    /* 0050f29d: fldcw word ptr [ebp - 0x48] */ fcw = R16((u32)(r_ebp+0xffffffb8u));
    /* 0050f2a0: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0050f2a3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050f2a4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050f2a5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050f2a6: call 0x7829f4 */ r_esp -= 4; W32(r_esp, 0x50f2abu); f_007829f4();
    /* 0050f2ab: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050f2ae: fld dword ptr [0x9203cc] */ FPUSH(R_F32((u32)(0x9203ccu)));
    /* 0050f2b4: mov edx, esi */ r_edx = r_esi;
    /* 0050f2b6: fcom dword ptr [edx + 0x54] */ fx_compare(ST(0), R_F32((u32)(r_edx+0x54u))); 
    /* 0050f2b9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0050f2bb: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0050f2bc: je 0x50f35a */ if (fZ) goto L_0050f35a;
L_0050f2c2:; BB(0x0050f2c2);
    /* 0050f2c2: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0050f2c4: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x50f2c9u); f_008587a5();
    /* 0050f2c9: fld dword ptr [0x9203bc] */ FPUSH(R_F32((u32)(0x9203bcu)));
    /* 0050f2cf: mov edx, dword ptr [ebp - 0x5c] */ r_edx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0050f2d2: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 0050f2d5: fild dword ptr [ebp - 0x50] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffb0u)));
    /* 0050f2d8: fdiv dword ptr [0x9203c4] */ ST(0) = ST(0) / R_F32((u32)(0x9203c4u));
    /* 0050f2de: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0050f2e0: fmul dword ptr [0x9203b8] */ ST(0) = ST(0) * R_F32((u32)(0x9203b8u));
    /* 0050f2e6: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 0050f2e8: fnstcw word ptr [ebp - 0x48] */ W16((u32)(r_ebp+0xffffffb8u), fcw);
    /* 0050f2eb: movzx eax, word ptr [ebp - 0x48] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffb8u));
    /* 0050f2ef: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0050f2f4: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0050f2f7: fldcw word ptr [ebp - 0x40] */ fcw = R16((u32)(r_ebp+0xffffffc0u));
    /* 0050f2fa: fistp dword ptr [ebp - 0x38] */ W32((u32)(r_ebp+0xffffffc8u), (u32)fx_int32(ST(0))); FPOP();
    /* 0050f2fd: fldcw word ptr [ebp - 0x48] */ fcw = R16((u32)(r_ebp+0xffffffb8u));
    /* 0050f300: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0050f303: mov word ptr [edx + 0x9a], ax */ W16((u32)(r_edx+0x9au), (u16)r_eax);
    /* 0050f30a: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x50f30fu); f_008587a5();
    /* 0050f30f: mov ebx, dword ptr [ebp - 0x5c] */ r_ebx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0050f312: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 0050f315: fild dword ptr [ebp - 0x50] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffb0u)));
    /* 0050f318: fdiv dword ptr [0x9203c4] */ ST(0) = ST(0) / R_F32((u32)(0x9203c4u));
    /* 0050f31e: fadd dword ptr [0x9203c8] */ ST(0) = ST(0) + R_F32((u32)(0x9203c8u));
    /* 0050f324: fstp dword ptr [ebx + 0x6c] */ W_F32((u32)(r_ebx+0x6cu), ST(0)); FPOP();
L_0050f327:; BB(0x0050f327);
    /* 0050f327: movzx eax, word ptr [ebx + 0x24] */ r_eax = (u32)R16((u32)(r_ebx+0x24u));
    /* 0050f32b: test eax, 0x2000 */ {  u32 a = r_eax; u32 b = 0x2000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0050f330: jne 0x50f34d */ if (!fZ) goto L_0050f34d;
L_0050f332:; BB(0x0050f332);
    /* 0050f332: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 0050f335: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 0050f338: mov eax, ebx */ r_eax = r_ebx;
    /* 0050f33a: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0050f33d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0050f340: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0050f347: mov esp, ebp */ r_esp = r_ebp;
    /* 0050f349: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050f34a: ret 0x18 */ FN_RET(0x0050f008); r_esp += 28; return;
L_0050f34d:; BB(0x0050f34d);
    /* 0050f34d: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0050f34f: call 0x505918 */ r_esp -= 4; W32(r_esp, 0x50f354u); f_00505918();
    /* 0050f354: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0050f355: mov ebx, dword ptr [ebp - 0x5c] */ r_ebx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0050f358: jmp 0x50f332 */ goto L_0050f332;
L_0050f35a:; BB(0x0050f35a);
    /* 0050f35a: fcom dword ptr [edx + 0x34] */ fx_compare(ST(0), R_F32((u32)(r_edx+0x34u))); 
    /* 0050f35d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0050f35f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0050f360: jne 0x50f2c2 */ if (!fZ) goto L_0050f2c2;
L_0050f366:; BB(0x0050f366);
    /* 0050f366: fcom dword ptr [edx + 0x30] */ fx_compare(ST(0), R_F32((u32)(r_edx+0x30u))); 
    /* 0050f369: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0050f36b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0050f36c: jne 0x50f2c2 */ if (!fZ) goto L_0050f2c2;
L_0050f372:; BB(0x0050f372);
    /* 0050f372: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0050f374: mov ebx, dword ptr [ebp - 0x5c] */ r_ebx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0050f377: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0050f379: mov word ptr [ebx + 0x9a], dx */ W16((u32)(r_ebx+0x9au), (u16)r_edx);
    /* 0050f380: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0050f382: mov dword ptr [ebx + 0x6c], ecx */ W32((u32)(r_ebx+0x6cu), r_ecx);
    /* 0050f385: jmp 0x50f327 */ goto L_0050f327;
}

void f_0050f388(void) /* sub_50F388 */
{
    FN_ENTER(0x0050f388);
    /* 0050f388: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0050f389: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0050f38b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0050f38d: call 0x50f3ac */ r_esp -= 4; W32(r_esp, 0x50f392u); f_0050f3ac();
    /* 0050f392: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0050f396: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0050f398: jne 0x50f39e */ if (!fZ) goto L_0050f39e;
L_0050f39a:; BB(0x0050f39a);
    /* 0050f39a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0050f39b: ret 4 */ FN_RET(0x0050f388); r_esp += 8; return;
L_0050f39e:; BB(0x0050f39e);
    /* 0050f39e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0050f39f: call 0x5083bc */ r_esp -= 4; W32(r_esp, 0x50f3a4u); f_005083bc();
    /* 0050f3a4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0050f3a5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0050f3a6: ret 4 */ FN_RET(0x0050f388); r_esp += 8; return;
}

void f_0050f3ac(void) /* sub_50F3AC */
{
    FN_ENTER(0x0050f3ac);
    /* 0050f3ac: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050f3ad: mov ebp, esp */ r_ebp = r_esp;
    /* 0050f3af: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0050f3b1: push 0x8d4094 */ { u32 v = 0x8d4094u; r_esp -= 4; W32(r_esp, v); }
    /* 0050f3b6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0050f3bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050f3bd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0050f3c4: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0050f3c7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0050f3ca: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0050f3cd: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0050f3d0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0050f3d3: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0050f3d6: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0050f3d9: mov dword ptr [ecx], 0xaff580 */ W32((u32)(r_ecx), 0xaff580u);
    /* 0050f3df: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0050f3e6: call 0x508368 */ r_esp -= 4; W32(r_esp, 0x50f3ebu); f_00508368();
    /* 0050f3eb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0050f3ee: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0050f3f5: mov esp, ebp */ r_esp = r_ebp;
    /* 0050f3f7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050f3f8: ret  */ FN_RET(0x0050f3ac); r_esp += 4; return;
}

void f_0050f3fc(void) /* sub_50F3FC */
{
    FN_ENTER(0x0050f3fc);
    /* 0050f3fc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0050f3fd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0050f3fe: sub esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0050f401: mov esi, ecx */ r_esi = r_ecx;
    /* 0050f403: fld dword ptr [0x9204ac] */ FPUSH(R_F32((u32)(0x9204acu)));
    /* 0050f409: fld dword ptr [0x9204a8] */ FPUSH(R_F32((u32)(0x9204a8u)));
    /* 0050f40f: movzx eax, word ptr [esi + 0x26] */ r_eax = (u32)R16((u32)(r_esi+0x26u));
    /* 0050f413: fld dword ptr [esi + 0x40] */ FPUSH(R_F32((u32)(r_esi+0x40u)));
    /* 0050f416: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0050f418: je 0x50f456 */ if (fZ) goto L_0050f456;
L_0050f41a:; BB(0x0050f41a);
    /* 0050f41a: fld dword ptr [esi + 0xb0] */ FPUSH(R_F32((u32)(r_esi+0xb0u)));
    /* 0050f420: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0050f422: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0050f424: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 0050f426: fnstcw word ptr [esp + 0x24] */ W16((u32)(r_esp+0x24u), fcw);
    /* 0050f42a: movzx eax, word ptr [esp + 0x24] */ r_eax = (u32)R16((u32)(r_esp+0x24u));
    /* 0050f42f: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0050f434: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 0050f438: fldcw word ptr [esp + 0x2c] */ fcw = R16((u32)(r_esp+0x2cu));
    /* 0050f43c: fistp dword ptr [esp + 0x34] */ W32((u32)(r_esp+0x34u), (u32)fx_int32(ST(0))); FPOP();
    /* 0050f440: fldcw word ptr [esp + 0x24] */ fcw = R16((u32)(r_esp+0x24u));
    /* 0050f444: mov ecx, dword ptr [esp + 0x34] */ r_ecx = R32((u32)(r_esp+0x34u));
    /* 0050f448: add ecx, dword ptr [esi + 0x12c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esi+0x12cu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0050f44e: mov dword ptr [esi + 0x12c], ecx */ W32((u32)(r_esi+0x12cu), r_ecx);
    /* 0050f454: jmp 0x50f488 */ goto L_0050f488;
L_0050f456:; BB(0x0050f456);
    /* 0050f456: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0050f458: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 0050f45a: fnstcw word ptr [esp + 0x24] */ W16((u32)(r_esp+0x24u), fcw);
    /* 0050f45e: movzx eax, word ptr [esp + 0x24] */ r_eax = (u32)R16((u32)(r_esp+0x24u));
    /* 0050f463: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0050f468: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 0050f46c: fldcw word ptr [esp + 0x2c] */ fcw = R16((u32)(r_esp+0x2cu));
    /* 0050f470: fistp dword ptr [esp + 0x34] */ W32((u32)(r_esp+0x34u), (u32)fx_int32(ST(0))); FPOP();
    /* 0050f474: fldcw word ptr [esp + 0x24] */ fcw = R16((u32)(r_esp+0x24u));
    /* 0050f478: mov ecx, dword ptr [esp + 0x34] */ r_ecx = R32((u32)(r_esp+0x34u));
    /* 0050f47c: add ecx, dword ptr [esi + 0x12c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esi+0x12cu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0050f482: mov dword ptr [esi + 0x12c], ecx */ W32((u32)(r_esi+0x12cu), r_ecx);
L_0050f488:; BB(0x0050f488);
    /* 0050f488: movzx eax, word ptr [esi + 0x24] */ r_eax = (u32)R16((u32)(r_esi+0x24u));
    /* 0050f48c: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0050f48e: jne 0x50fd4b */ if (!fZ) goto L_0050fd4b;
L_0050f494:; BB(0x0050f494);
    /* 0050f494: mov eax, dword ptr [esi + 0x9c] */ r_eax = R32((u32)(r_esi+0x9cu));
    /* 0050f49a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050f49c: je 0x50f4ed */ if (fZ) goto L_0050f4ed;
L_0050f49e:; BB(0x0050f49e);
    /* 0050f49e: mov eax, dword ptr [esi + 0xa0] */ r_eax = R32((u32)(r_esi+0xa0u));
    /* 0050f4a4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050f4a6: je 0x50f4ed */ if (fZ) goto L_0050f4ed;
L_0050f4a8:; BB(0x0050f4a8);
    /* 0050f4a8: mov eax, dword ptr [esi + 0xa4] */ r_eax = R32((u32)(r_esi+0xa4u));
    /* 0050f4ae: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050f4b0: je 0x50f4ed */ if (fZ) goto L_0050f4ed;
L_0050f4b2:; BB(0x0050f4b2);
    /* 0050f4b2: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x50f4b7u); f_0082ddd8();
    /* 0050f4b7: fld dword ptr [esi + 0x124] */ FPUSH(R_F32((u32)(r_esi+0x124u)));
    /* 0050f4bd: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0050f4bf: fadd dword ptr [esi + 0x118] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x118u));
    /* 0050f4c5: mov ecx, dword ptr [esi + 0x12c] */ r_ecx = R32((u32)(r_esi+0x12cu));
    /* 0050f4cb: fstp dword ptr [esi + 0x74] */ W_F32((u32)(r_esi+0x74u), ST(0)); FPOP();
    /* 0050f4ce: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x50f4d3u); f_0082dcbc();
    /* 0050f4d3: fld dword ptr [esi + 0x124] */ FPUSH(R_F32((u32)(r_esi+0x124u)));
    /* 0050f4d9: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0050f4db: fadd dword ptr [esi + 0x11c] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x11cu));
    /* 0050f4e1: movzx edx, word ptr [esi + 0x26] */ r_edx = (u32)R16((u32)(r_esi+0x26u));
    /* 0050f4e5: fstp dword ptr [esi + 0x7c] */ W_F32((u32)(r_esi+0x7cu), ST(0)); FPOP();
    /* 0050f4e8: jmp 0x50f632 */ goto L_0050f632;
L_0050f4ed:; BB(0x0050f4ed);
    /* 0050f4ed: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x50f4f2u); f_0082ddd8();
    /* 0050f4f2: fld dword ptr [esi + 0x124] */ FPUSH(R_F32((u32)(r_esi+0x124u)));
    /* 0050f4f8: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0050f4fa: mov ecx, dword ptr [esi + 0x12c] */ r_ecx = R32((u32)(r_esi+0x12cu));
    /* 0050f500: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0050f503: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x50f508u); f_0082dcbc();
    /* 0050f508: fld dword ptr [esi + 0x124] */ FPUSH(R_F32((u32)(r_esi+0x124u)));
    /* 0050f50e: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0050f510: fld dword ptr [esi + 0x128] */ FPUSH(R_F32((u32)(r_esi+0x128u)));
    /* 0050f516: fadd dword ptr [esi + 0x44] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x44u));
    /* 0050f519: fst dword ptr [esi + 0x128] */ W_F32((u32)(r_esi+0x128u), ST(0));
    /* 0050f51f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0050f521: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0050f525: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 0050f529: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 0050f531: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 0050f536: mov dword ptr [esp + 0xc], 0 */ W32((u32)(r_esp+0xcu), 0x0u);
    /* 0050f53e: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 0050f546: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x50f54bu); f_0082d990();
    /* 0050f54b: movzx eax, word ptr [esi + 0x26] */ r_eax = (u32)R16((u32)(r_esi+0x26u));
    /* 0050f54f: test al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0050f551: je 0x50f560 */ if (fZ) goto L_0050f560;
L_0050f553:; BB(0x0050f553);
    /* 0050f553: lea eax, [esi + 0xc0] */ r_eax = (u32)(r_esi+0xc0u);
    /* 0050f559: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050f55a: call 0x83ba24 */ r_esp -= 4; W32(r_esp, 0x50f55fu); f_0083ba24();
    /* 0050f55f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0050f560:; BB(0x0050f560);
    /* 0050f560: mov edx, dword ptr [esi + 0x9c] */ r_edx = R32((u32)(r_esi+0x9cu));
    /* 0050f566: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0050f568: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x50f56du); f_0082e9e4();
    /* 0050f56d: mov edx, dword ptr [esi + 0xa0] */ r_edx = R32((u32)(r_esi+0xa0u));
    /* 0050f573: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0050f575: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x50f57au); f_0082d8bc();
    /* 0050f57a: mov edx, dword ptr [esi + 0xa4] */ r_edx = R32((u32)(r_esi+0xa4u));
    /* 0050f580: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0050f582: call 0x830c04 */ r_esp -= 4; W32(r_esp, 0x50f587u); f_00830c04();
    /* 0050f587: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0050f58a: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0050f58d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050f58e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050f58f: call 0x83a610 */ r_esp -= 4; W32(r_esp, 0x50f594u); f_0083a610();
    /* 0050f594: lea edx, [esp + 0x14] */ r_edx = (u32)(r_esp+0x14u);
    /* 0050f598: lea eax, [esp + 0x14] */ r_eax = (u32)(r_esp+0x14u);
    /* 0050f59c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050f59d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050f59e: call 0x83a610 */ r_esp -= 4; W32(r_esp, 0x50f5a3u); f_0083a610();
    /* 0050f5a3: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050f5a6: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x50f5abu); f_0082da80();
    /* 0050f5ab: movzx edx, word ptr [esi + 0x26] */ r_edx = (u32)R16((u32)(r_esi+0x26u));
    /* 0050f5af: test dl, 8 */ {  u32 a = (u8)r_edx; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0050f5b2: je 0x50f601 */ if (fZ) goto L_0050f601;
L_0050f5b4:; BB(0x0050f5b4);
    /* 0050f5b4: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0050f5b7: fadd dword ptr [esi + 0x118] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x118u));
    /* 0050f5bd: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 0050f5c1: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 0050f5c5: fadd dword ptr [esi + 0x11c] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x11cu));
    /* 0050f5cb: fld dword ptr [esi + 0xb0] */ FPUSH(R_F32((u32)(r_esi+0xb0u)));
    /* 0050f5d1: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 0050f5d3: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0050f5d5: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 0050f5d7: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 0050f5db: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 0050f5df: fadd dword ptr [esi + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x38u));
    /* 0050f5e2: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 0050f5e6: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0050f5e8: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 0050f5ea: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0050f5ec: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0050f5ee: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0050f5f0: fstp dword ptr [esi + 0x74] */ W_F32((u32)(r_esi+0x74u), ST(0)); FPOP();
    /* 0050f5f3: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0050f5f5: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0050f5f7: fstp dword ptr [esi + 0x7c] */ W_F32((u32)(r_esi+0x7cu), ST(0)); FPOP();
    /* 0050f5fa: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0050f5fc: fstp dword ptr [esi + 0x78] */ W_F32((u32)(r_esi+0x78u), ST(0)); FPOP();
    /* 0050f5ff: jmp 0x50f632 */ goto L_0050f632;
L_0050f601:; BB(0x0050f601);
    /* 0050f601: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0050f604: fadd dword ptr [esp + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0xcu));
    /* 0050f608: fadd dword ptr [esi + 0x118] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x118u));
    /* 0050f60e: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 0050f612: fadd dword ptr [esp + 0x14] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x14u));
    /* 0050f616: fadd dword ptr [esi + 0x11c] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x11cu));
    /* 0050f61c: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 0050f620: fadd dword ptr [esp + 0x10] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x10u));
    /* 0050f624: fadd dword ptr [esi + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x38u));
    /* 0050f627: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0050f629: fstp dword ptr [esi + 0x74] */ W_F32((u32)(r_esi+0x74u), ST(0)); FPOP();
    /* 0050f62c: fstp dword ptr [esi + 0x7c] */ W_F32((u32)(r_esi+0x7cu), ST(0)); FPOP();
    /* 0050f62f: fstp dword ptr [esi + 0x78] */ W_F32((u32)(r_esi+0x78u), ST(0)); FPOP();
L_0050f632:; BB(0x0050f632);
    /* 0050f632: mov eax, dword ptr [esi + 0x9c] */ r_eax = R32((u32)(r_esi+0x9cu));
    /* 0050f638: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050f63a: je 0x50f67c */ if (fZ) goto L_0050f67c;
L_0050f63c:; BB(0x0050f63c);
    /* 0050f63c: mov eax, dword ptr [esi + 0xa0] */ r_eax = R32((u32)(r_esi+0xa0u));
    /* 0050f642: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050f644: je 0x50f677 */ if (fZ) goto L_0050f677;
L_0050f646:; BB(0x0050f646);
    /* 0050f646: mov eax, dword ptr [esi + 0xa4] */ r_eax = R32((u32)(r_esi+0xa4u));
    /* 0050f64c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050f64e: je 0x50f672 */ if (fZ) goto L_0050f672;
L_0050f650:; BB(0x0050f650);
    /* 0050f650: fld dword ptr [esi + 0x44] */ FPUSH(R_F32((u32)(r_esi+0x44u)));
    /* 0050f653: test dl, 8 */ {  u32 a = (u8)r_edx; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0050f656: je 0x50f668 */ if (fZ) goto L_0050f668;
L_0050f658:; BB(0x0050f658);
    /* 0050f658: fld dword ptr [esi + 0xb0] */ FPUSH(R_F32((u32)(r_esi+0xb0u)));
    /* 0050f65e: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0050f660: fadd dword ptr [esi + 0x78] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x78u));
    /* 0050f663: fstp dword ptr [esi + 0x78] */ W_F32((u32)(r_esi+0x78u), ST(0)); FPOP();
    /* 0050f666: jmp 0x50f67f */ goto L_0050f67f;
L_0050f668:; BB(0x0050f668);
    /* 0050f668: fld dword ptr [esi + 0x78] */ FPUSH(R_F32((u32)(r_esi+0x78u)));
    /* 0050f66b: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0050f66d: fstp dword ptr [esi + 0x78] */ W_F32((u32)(r_esi+0x78u), ST(0)); FPOP();
    /* 0050f670: jmp 0x50f67f */ goto L_0050f67f;
L_0050f672:; BB(0x0050f672);
    /* 0050f672: fld dword ptr [esi + 0x44] */ FPUSH(R_F32((u32)(r_esi+0x44u)));
    /* 0050f675: jmp 0x50f67f */ goto L_0050f67f;
L_0050f677:; BB(0x0050f677);
    /* 0050f677: fld dword ptr [esi + 0x44] */ FPUSH(R_F32((u32)(r_esi+0x44u)));
    /* 0050f67a: jmp 0x50f67f */ goto L_0050f67f;
L_0050f67c:; BB(0x0050f67c);
    /* 0050f67c: fld dword ptr [esi + 0x44] */ FPUSH(R_F32((u32)(r_esi+0x44u)));
L_0050f67f:; BB(0x0050f67f);
    /* 0050f67f: fld dword ptr [0x9204a0] */ FPUSH(R_F32((u32)(0x9204a0u)));
    /* 0050f685: fld dword ptr [0x9204a0] */ FPUSH(R_F32((u32)(0x9204a0u)));
    /* 0050f68b: mov ecx, dword ptr [esi + 0x20] */ r_ecx = R32((u32)(r_esi+0x20u));
    /* 0050f68e: fld dword ptr [esi + 0x2c] */ FPUSH(R_F32((u32)(r_esi+0x2cu)));
    /* 0050f691: fmul dword ptr [ecx + 0x2c] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x2cu));
    /* 0050f694: fld dword ptr [esi + 0x30] */ FPUSH(R_F32((u32)(r_esi+0x30u)));
    /* 0050f697: fld dword ptr [esi + 0x5c] */ FPUSH(R_F32((u32)(r_esi+0x5cu)));
    /* 0050f69a: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0050f69c: fstp dword ptr [esi + 0x2c] */ W_F32((u32)(r_esi+0x2cu), ST(0)); FPOP();
    /* 0050f69f: fmul dword ptr [ecx + 0x2c] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x2cu));
    /* 0050f6a2: fld dword ptr [0x9204a0] */ FPUSH(R_F32((u32)(0x9204a0u)));
    /* 0050f6a8: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0050f6aa: fstp dword ptr [esi + 0x30] */ W_F32((u32)(r_esi+0x30u), ST(0)); FPOP();
    /* 0050f6ad: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0050f6af: fcom dword ptr [ecx + 0x58] */ fx_compare(ST(0), R_F32((u32)(r_ecx+0x58u))); 
    /* 0050f6b2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0050f6b4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0050f6b5: jae 0x50f6c0 */ if (!fC) goto L_0050f6c0;
L_0050f6b7:; BB(0x0050f6b7);
    /* 0050f6b7: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0050f6b9: fld dword ptr [esi + 0x64] */ FPUSH(R_F32((u32)(r_esi+0x64u)));
    /* 0050f6bc: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0050f6be: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
L_0050f6c0:; BB(0x0050f6c0);
    /* 0050f6c0: fld st(3) */ { long double v = ST(3); FPUSH(v); }
    /* 0050f6c2: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 0050f6c4: fcom dword ptr [ecx + 0x5c] */ fx_compare(ST(0), R_F32((u32)(r_ecx+0x5cu))); 
    /* 0050f6c7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0050f6c9: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0050f6ca: jae 0x50f6d5 */ if (!fC) goto L_0050f6d5;
L_0050f6cc:; BB(0x0050f6cc);
    /* 0050f6cc: fstp st(3) */ ST(3) = ST(0); FPOP();
    /* 0050f6ce: fld dword ptr [esi + 0x68] */ FPUSH(R_F32((u32)(r_esi+0x68u)));
    /* 0050f6d1: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0050f6d3: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
L_0050f6d5:; BB(0x0050f6d5);
    /* 0050f6d5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0050f6d7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0050f6d9: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 0050f6db: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0050f6dd: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0050f6de: movzx eax, word ptr [esi + 0x24] */ r_eax = (u32)R16((u32)(r_esi+0x24u));
    /* 0050f6e2: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0050f6e4: jb 0x50f6e8 */ if (fC) goto L_0050f6e8;
L_0050f6e6:; BB(0x0050f6e6);
    /* 0050f6e6: fst st(2) */ ST(2) = ST(0);
L_0050f6e8:; BB(0x0050f6e8);
    /* 0050f6e8: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0050f6ea: and eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0050f6ef: je 0x50f6fd */ if (fZ) goto L_0050f6fd;
L_0050f6f1:; BB(0x0050f6f1);
    /* 0050f6f1: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0050f6f4: je 0x50f6fd */ if (fZ) goto L_0050f6fd;
L_0050f6f6:; BB(0x0050f6f6);
    /* 0050f6f6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0050f6f8: fmul dword ptr [esi + 0x4c] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0x4cu));
    /* 0050f6fb: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
L_0050f6fd:; BB(0x0050f6fd);
    /* 0050f6fd: movzx edi, word ptr [esi + 0x1c] */ r_edi = (u32)R16((u32)(r_esi+0x1cu));
    /* 0050f701: mov edi, dword ptr [edi*4 + 0xaaee20] */ r_edi = R32((u32)(r_edi*4+0xaaee20u));
    /* 0050f708: mov edi, dword ptr [edi + 0x28] */ r_edi = R32((u32)(r_edi+0x28u));
    /* 0050f70b: mov edi, dword ptr [edi] */ r_edi = R32((u32)(r_edi));
    /* 0050f70d: test edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050f713: je 0x50f8d6 */ if (fZ) goto L_0050f8d6;
L_0050f719:; BB(0x0050f719);
    /* 0050f719: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050f71b: je 0x50f83b */ if (fZ) goto L_0050f83b;
L_0050f721:; BB(0x0050f721);
    /* 0050f721: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0050f724: je 0x50f7ab */ if (fZ) goto L_0050f7ab;
L_0050f72a:; BB(0x0050f72a);
    /* 0050f72a: fld dword ptr [0x9204a4] */ FPUSH(R_F32((u32)(0x9204a4u)));
    /* 0050f730: fld dword ptr [esi + 0x50] */ FPUSH(R_F32((u32)(r_esi+0x50u)));
    /* 0050f733: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0050f735: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0050f737: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0050f738: jae 0x50f748 */ if (!fC) goto L_0050f748;
L_0050f73a:; BB(0x0050f73a);
    /* 0050f73a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0050f73c: fld dword ptr [0x9204a4] */ FPUSH(R_F32((u32)(0x9204a4u)));
    /* 0050f742: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0050f744: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0050f746: jmp 0x50f757 */ goto L_0050f757;
L_0050f748:; BB(0x0050f748);
    /* 0050f748: fcom st(4) */ fx_compare(ST(0), ST(4)); 
    /* 0050f74a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0050f74c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0050f74d: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0050f74f: jb 0x50f753 */ if (fC) goto L_0050f753;
L_0050f751:; BB(0x0050f751);
    /* 0050f751: fst st(4) */ ST(4) = ST(0);
L_0050f753:; BB(0x0050f753);
    /* 0050f753: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0050f755: fmul st(4), st(0) */ ST(4) = ST(4) * ST(0);
L_0050f757:; BB(0x0050f757);
    /* 0050f757: fld dword ptr [esi + 0x54] */ FPUSH(R_F32((u32)(r_esi+0x54u)));
    /* 0050f75a: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 0050f75c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0050f75e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0050f75f: jae 0x50f76f */ if (!fC) goto L_0050f76f;
L_0050f761:; BB(0x0050f761);
    /* 0050f761: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0050f763: fld dword ptr [0x9204a4] */ FPUSH(R_F32((u32)(0x9204a4u)));
    /* 0050f769: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0050f76b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0050f76d: jmp 0x50f77e */ goto L_0050f77e;
L_0050f76f:; BB(0x0050f76f);
    /* 0050f76f: fcom st(4) */ fx_compare(ST(0), ST(4)); 
    /* 0050f771: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0050f773: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0050f774: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0050f776: jb 0x50f77a */ if (fC) goto L_0050f77a;
L_0050f778:; BB(0x0050f778);
    /* 0050f778: fst st(4) */ ST(4) = ST(0);
L_0050f77a:; BB(0x0050f77a);
    /* 0050f77a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0050f77c: fmul st(4), st(0) */ ST(4) = ST(4) * ST(0);
L_0050f77e:; BB(0x0050f77e);
    /* 0050f77e: fld dword ptr [esi + 0x58] */ FPUSH(R_F32((u32)(r_esi+0x58u)));
    /* 0050f781: fcom st(3) */ fx_compare(ST(0), ST(3)); 
    /* 0050f783: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0050f785: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0050f786: jae 0x50f793 */ if (!fC) goto L_0050f793;
L_0050f788:; BB(0x0050f788);
    /* 0050f788: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0050f78a: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0050f78c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0050f78e: jmp 0x50f8c9 */ goto L_0050f8c9;
L_0050f793:; BB(0x0050f793);
    /* 0050f793: fstp st(3) */ ST(3) = ST(0); FPOP();
    /* 0050f795: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0050f797: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0050f799: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0050f79b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0050f79c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0050f79e: jb 0x50f7a2 */ if (fC) goto L_0050f7a2;
L_0050f7a0:; BB(0x0050f7a0);
    /* 0050f7a0: fst st(1) */ ST(1) = ST(0);
L_0050f7a2:; BB(0x0050f7a2);
    /* 0050f7a2: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0050f7a4: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0050f7a6: jmp 0x50f8c9 */ goto L_0050f8c9;
L_0050f7ab:; BB(0x0050f7ab);
    /* 0050f7ab: fld dword ptr [0x9204a4] */ FPUSH(R_F32((u32)(0x9204a4u)));
    /* 0050f7b1: fld dword ptr [ecx + 0x50] */ FPUSH(R_F32((u32)(r_ecx+0x50u)));
    /* 0050f7b4: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0050f7b6: fadd dword ptr [esi + 0x50] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x50u));
    /* 0050f7b9: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0050f7bb: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0050f7bd: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0050f7be: jae 0x50f7ce */ if (!fC) goto L_0050f7ce;
L_0050f7c0:; BB(0x0050f7c0);
    /* 0050f7c0: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0050f7c2: fld dword ptr [0x9204a4] */ FPUSH(R_F32((u32)(0x9204a4u)));
    /* 0050f7c8: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0050f7ca: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0050f7cc: jmp 0x50f7dd */ goto L_0050f7dd;
L_0050f7ce:; BB(0x0050f7ce);
    /* 0050f7ce: fcom st(4) */ fx_compare(ST(0), ST(4)); 
    /* 0050f7d0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0050f7d2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0050f7d3: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0050f7d5: jb 0x50f7d9 */ if (fC) goto L_0050f7d9;
L_0050f7d7:; BB(0x0050f7d7);
    /* 0050f7d7: fst st(4) */ ST(4) = ST(0);
L_0050f7d9:; BB(0x0050f7d9);
    /* 0050f7d9: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0050f7db: fmul st(4), st(0) */ ST(4) = ST(4) * ST(0);
L_0050f7dd:; BB(0x0050f7dd);
    /* 0050f7dd: fld dword ptr [ecx + 0x38] */ FPUSH(R_F32((u32)(r_ecx+0x38u)));
    /* 0050f7e0: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0050f7e2: fadd dword ptr [esi + 0x54] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x54u));
    /* 0050f7e5: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 0050f7e7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0050f7e9: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0050f7ea: jae 0x50f7fa */ if (!fC) goto L_0050f7fa;
L_0050f7ec:; BB(0x0050f7ec);
    /* 0050f7ec: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0050f7ee: fld dword ptr [0x9204a4] */ FPUSH(R_F32((u32)(0x9204a4u)));
    /* 0050f7f4: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0050f7f6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0050f7f8: jmp 0x50f809 */ goto L_0050f809;
L_0050f7fa:; BB(0x0050f7fa);
    /* 0050f7fa: fcom st(4) */ fx_compare(ST(0), ST(4)); 
    /* 0050f7fc: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0050f7fe: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0050f7ff: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0050f801: jb 0x50f805 */ if (fC) goto L_0050f805;
L_0050f803:; BB(0x0050f803);
    /* 0050f803: fst st(4) */ ST(4) = ST(0);
L_0050f805:; BB(0x0050f805);
    /* 0050f805: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0050f807: fmul st(4), st(0) */ ST(4) = ST(4) * ST(0);
L_0050f809:; BB(0x0050f809);
    /* 0050f809: fld dword ptr [ecx + 0x3c] */ FPUSH(R_F32((u32)(r_ecx+0x3cu)));
    /* 0050f80c: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 0050f80e: fadd dword ptr [esi + 0x58] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x58u));
    /* 0050f811: fcom st(3) */ fx_compare(ST(0), ST(3)); 
    /* 0050f813: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0050f815: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0050f816: jae 0x50f823 */ if (!fC) goto L_0050f823;
L_0050f818:; BB(0x0050f818);
    /* 0050f818: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0050f81a: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0050f81c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0050f81e: jmp 0x50f8c9 */ goto L_0050f8c9;
L_0050f823:; BB(0x0050f823);
    /* 0050f823: fstp st(3) */ ST(3) = ST(0); FPOP();
    /* 0050f825: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0050f827: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0050f829: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0050f82b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0050f82c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0050f82e: jb 0x50f832 */ if (fC) goto L_0050f832;
L_0050f830:; BB(0x0050f830);
    /* 0050f830: fst st(1) */ ST(1) = ST(0);
L_0050f832:; BB(0x0050f832);
    /* 0050f832: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0050f834: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0050f836: jmp 0x50f8c9 */ goto L_0050f8c9;
L_0050f83b:; BB(0x0050f83b);
    /* 0050f83b: fld dword ptr [0x9204a4] */ FPUSH(R_F32((u32)(0x9204a4u)));
    /* 0050f841: fld dword ptr [ecx + 0x50] */ FPUSH(R_F32((u32)(r_ecx+0x50u)));
    /* 0050f844: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0050f846: fadd dword ptr [ecx + 0x7c] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x7cu));
    /* 0050f849: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0050f84b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0050f84d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0050f84e: jae 0x50f85e */ if (!fC) goto L_0050f85e;
L_0050f850:; BB(0x0050f850);
    /* 0050f850: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0050f852: fld dword ptr [0x9204a4] */ FPUSH(R_F32((u32)(0x9204a4u)));
    /* 0050f858: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0050f85a: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0050f85c: jmp 0x50f86d */ goto L_0050f86d;
L_0050f85e:; BB(0x0050f85e);
    /* 0050f85e: fcom st(4) */ fx_compare(ST(0), ST(4)); 
    /* 0050f860: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0050f862: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0050f863: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0050f865: jb 0x50f869 */ if (fC) goto L_0050f869;
L_0050f867:; BB(0x0050f867);
    /* 0050f867: fst st(4) */ ST(4) = ST(0);
L_0050f869:; BB(0x0050f869);
    /* 0050f869: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0050f86b: fmul st(4), st(0) */ ST(4) = ST(4) * ST(0);
L_0050f86d:; BB(0x0050f86d);
    /* 0050f86d: fld dword ptr [ecx + 0x38] */ FPUSH(R_F32((u32)(r_ecx+0x38u)));
    /* 0050f870: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0050f872: fadd dword ptr [ecx + 0x80] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x80u));
    /* 0050f878: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 0050f87a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0050f87c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0050f87d: jae 0x50f88d */ if (!fC) goto L_0050f88d;
L_0050f87f:; BB(0x0050f87f);
    /* 0050f87f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0050f881: fld dword ptr [0x9204a4] */ FPUSH(R_F32((u32)(0x9204a4u)));
    /* 0050f887: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0050f889: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0050f88b: jmp 0x50f89c */ goto L_0050f89c;
L_0050f88d:; BB(0x0050f88d);
    /* 0050f88d: fcom st(4) */ fx_compare(ST(0), ST(4)); 
    /* 0050f88f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0050f891: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0050f892: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0050f894: jb 0x50f898 */ if (fC) goto L_0050f898;
L_0050f896:; BB(0x0050f896);
    /* 0050f896: fst st(4) */ ST(4) = ST(0);
L_0050f898:; BB(0x0050f898);
    /* 0050f898: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0050f89a: fmul st(4), st(0) */ ST(4) = ST(4) * ST(0);
L_0050f89c:; BB(0x0050f89c);
    /* 0050f89c: fld dword ptr [ecx + 0x3c] */ FPUSH(R_F32((u32)(r_ecx+0x3cu)));
    /* 0050f89f: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 0050f8a1: fadd dword ptr [ecx + 0x84] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x84u));
    /* 0050f8a7: fcom st(3) */ fx_compare(ST(0), ST(3)); 
    /* 0050f8a9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0050f8ab: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0050f8ac: jae 0x50f8b6 */ if (!fC) goto L_0050f8b6;
L_0050f8ae:; BB(0x0050f8ae);
    /* 0050f8ae: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0050f8b0: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0050f8b2: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0050f8b4: jmp 0x50f8c9 */ goto L_0050f8c9;
L_0050f8b6:; BB(0x0050f8b6);
    /* 0050f8b6: fstp st(3) */ ST(3) = ST(0); FPOP();
    /* 0050f8b8: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0050f8ba: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0050f8bc: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0050f8be: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0050f8bf: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0050f8c1: jb 0x50f8c5 */ if (fC) goto L_0050f8c5;
L_0050f8c3:; BB(0x0050f8c3);
    /* 0050f8c3: fst st(1) */ ST(1) = ST(0);
L_0050f8c5:; BB(0x0050f8c5);
    /* 0050f8c5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0050f8c7: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
L_0050f8c9:; BB(0x0050f8c9);
    /* 0050f8c9: fld dword ptr [0x9204a0] */ FPUSH(R_F32((u32)(0x9204a0u)));
    /* 0050f8cf: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0050f8d1: jmp 0x50fa43 */ goto L_0050fa43;
L_0050f8d6:; BB(0x0050f8d6);
    /* 0050f8d6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050f8d8: je 0x50f9c9 */ if (fZ) goto L_0050f9c9;
L_0050f8de:; BB(0x0050f8de);
    /* 0050f8de: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0050f8e1: je 0x50f950 */ if (fZ) goto L_0050f950;
L_0050f8e3:; BB(0x0050f8e3);
    /* 0050f8e3: fld dword ptr [0x9204a4] */ FPUSH(R_F32((u32)(0x9204a4u)));
    /* 0050f8e9: fld dword ptr [esi + 0x50] */ FPUSH(R_F32((u32)(r_esi+0x50u)));
    /* 0050f8ec: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0050f8ee: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0050f8f0: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0050f8f1: jae 0x50f8ff */ if (!fC) goto L_0050f8ff;
L_0050f8f3:; BB(0x0050f8f3);
    /* 0050f8f3: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0050f8f5: fld dword ptr [0x9204a4] */ FPUSH(R_F32((u32)(0x9204a4u)));
    /* 0050f8fb: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0050f8fd: jmp 0x50f90a */ goto L_0050f90a;
L_0050f8ff:; BB(0x0050f8ff);
    /* 0050f8ff: fcom st(4) */ fx_compare(ST(0), ST(4)); 
    /* 0050f901: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0050f903: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0050f904: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0050f906: jb 0x50f90a */ if (fC) goto L_0050f90a;
L_0050f908:; BB(0x0050f908);
    /* 0050f908: fst st(4) */ ST(4) = ST(0);
L_0050f90a:; BB(0x0050f90a);
    /* 0050f90a: fld dword ptr [esi + 0x54] */ FPUSH(R_F32((u32)(r_esi+0x54u)));
    /* 0050f90d: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 0050f90f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0050f911: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0050f912: jae 0x50f920 */ if (!fC) goto L_0050f920;
L_0050f914:; BB(0x0050f914);
    /* 0050f914: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0050f916: fld dword ptr [0x9204a4] */ FPUSH(R_F32((u32)(0x9204a4u)));
    /* 0050f91c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0050f91e: jmp 0x50f92b */ goto L_0050f92b;
L_0050f920:; BB(0x0050f920);
    /* 0050f920: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0050f922: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0050f924: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0050f925: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0050f927: jb 0x50f92b */ if (fC) goto L_0050f92b;
L_0050f929:; BB(0x0050f929);
    /* 0050f929: fst st(1) */ ST(1) = ST(0);
L_0050f92b:; BB(0x0050f92b);
    /* 0050f92b: fld dword ptr [esi + 0x58] */ FPUSH(R_F32((u32)(r_esi+0x58u)));
    /* 0050f92e: fcom st(3) */ fx_compare(ST(0), ST(3)); 
    /* 0050f930: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0050f932: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0050f933: jae 0x50f93e */ if (!fC) goto L_0050f93e;
L_0050f935:; BB(0x0050f935);
    /* 0050f935: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0050f937: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0050f939: jmp 0x50fa43 */ goto L_0050fa43;
L_0050f93e:; BB(0x0050f93e);
    /* 0050f93e: fstp st(3) */ ST(3) = ST(0); FPOP();
    /* 0050f940: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 0050f942: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0050f944: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0050f945: ja 0x50f949 */ if ((!fC&&!fZ)) goto L_0050f949;
L_0050f947:; BB(0x0050f947);
    /* 0050f947: fst st(2) */ ST(2) = ST(0);
L_0050f949:; BB(0x0050f949);
    /* 0050f949: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0050f94b: jmp 0x50fa43 */ goto L_0050fa43;
L_0050f950:; BB(0x0050f950);
    /* 0050f950: fld dword ptr [0x9204a4] */ FPUSH(R_F32((u32)(0x9204a4u)));
    /* 0050f956: fld dword ptr [ecx + 0x50] */ FPUSH(R_F32((u32)(r_ecx+0x50u)));
    /* 0050f959: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0050f95b: fadd dword ptr [esi + 0x50] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x50u));
    /* 0050f95e: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0050f960: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0050f962: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0050f963: jae 0x50f971 */ if (!fC) goto L_0050f971;
L_0050f965:; BB(0x0050f965);
    /* 0050f965: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0050f967: fld dword ptr [0x9204a4] */ FPUSH(R_F32((u32)(0x9204a4u)));
    /* 0050f96d: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0050f96f: jmp 0x50f97c */ goto L_0050f97c;
L_0050f971:; BB(0x0050f971);
    /* 0050f971: fcom st(4) */ fx_compare(ST(0), ST(4)); 
    /* 0050f973: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0050f975: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0050f976: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0050f978: jb 0x50f97c */ if (fC) goto L_0050f97c;
L_0050f97a:; BB(0x0050f97a);
    /* 0050f97a: fst st(4) */ ST(4) = ST(0);
L_0050f97c:; BB(0x0050f97c);
    /* 0050f97c: fld dword ptr [ecx + 0x38] */ FPUSH(R_F32((u32)(r_ecx+0x38u)));
    /* 0050f97f: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0050f981: fadd dword ptr [esi + 0x54] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x54u));
    /* 0050f984: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 0050f986: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0050f988: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0050f989: jae 0x50f997 */ if (!fC) goto L_0050f997;
L_0050f98b:; BB(0x0050f98b);
    /* 0050f98b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0050f98d: fld dword ptr [0x9204a4] */ FPUSH(R_F32((u32)(0x9204a4u)));
    /* 0050f993: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0050f995: jmp 0x50f9a2 */ goto L_0050f9a2;
L_0050f997:; BB(0x0050f997);
    /* 0050f997: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0050f999: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0050f99b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0050f99c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0050f99e: jb 0x50f9a2 */ if (fC) goto L_0050f9a2;
L_0050f9a0:; BB(0x0050f9a0);
    /* 0050f9a0: fst st(1) */ ST(1) = ST(0);
L_0050f9a2:; BB(0x0050f9a2);
    /* 0050f9a2: fld dword ptr [ecx + 0x3c] */ FPUSH(R_F32((u32)(r_ecx+0x3cu)));
    /* 0050f9a5: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 0050f9a7: fadd dword ptr [esi + 0x58] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x58u));
    /* 0050f9aa: fcom st(3) */ fx_compare(ST(0), ST(3)); 
    /* 0050f9ac: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0050f9ae: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0050f9af: jae 0x50f9ba */ if (!fC) goto L_0050f9ba;
L_0050f9b1:; BB(0x0050f9b1);
    /* 0050f9b1: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0050f9b3: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0050f9b5: jmp 0x50fa43 */ goto L_0050fa43;
L_0050f9ba:; BB(0x0050f9ba);
    /* 0050f9ba: fstp st(3) */ ST(3) = ST(0); FPOP();
    /* 0050f9bc: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 0050f9be: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0050f9c0: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0050f9c1: ja 0x50f9c5 */ if ((!fC&&!fZ)) goto L_0050f9c5;
L_0050f9c3:; BB(0x0050f9c3);
    /* 0050f9c3: fst st(2) */ ST(2) = ST(0);
L_0050f9c5:; BB(0x0050f9c5);
    /* 0050f9c5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0050f9c7: jmp 0x50fa43 */ goto L_0050fa43;
L_0050f9c9:; BB(0x0050f9c9);
    /* 0050f9c9: fld dword ptr [0x9204a4] */ FPUSH(R_F32((u32)(0x9204a4u)));
    /* 0050f9cf: fld dword ptr [ecx + 0x50] */ FPUSH(R_F32((u32)(r_ecx+0x50u)));
    /* 0050f9d2: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0050f9d4: fadd dword ptr [ecx + 0x7c] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x7cu));
    /* 0050f9d7: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0050f9d9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0050f9db: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0050f9dc: jae 0x50f9ea */ if (!fC) goto L_0050f9ea;
L_0050f9de:; BB(0x0050f9de);
    /* 0050f9de: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0050f9e0: fld dword ptr [0x9204a4] */ FPUSH(R_F32((u32)(0x9204a4u)));
    /* 0050f9e6: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0050f9e8: jmp 0x50f9f5 */ goto L_0050f9f5;
L_0050f9ea:; BB(0x0050f9ea);
    /* 0050f9ea: fcom st(4) */ fx_compare(ST(0), ST(4)); 
    /* 0050f9ec: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0050f9ee: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0050f9ef: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0050f9f1: jb 0x50f9f5 */ if (fC) goto L_0050f9f5;
L_0050f9f3:; BB(0x0050f9f3);
    /* 0050f9f3: fst st(4) */ ST(4) = ST(0);
L_0050f9f5:; BB(0x0050f9f5);
    /* 0050f9f5: fld dword ptr [ecx + 0x38] */ FPUSH(R_F32((u32)(r_ecx+0x38u)));
    /* 0050f9f8: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0050f9fa: fadd dword ptr [ecx + 0x80] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x80u));
    /* 0050fa00: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 0050fa02: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0050fa04: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0050fa05: jae 0x50fa13 */ if (!fC) goto L_0050fa13;
L_0050fa07:; BB(0x0050fa07);
    /* 0050fa07: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0050fa09: fld dword ptr [0x9204a4] */ FPUSH(R_F32((u32)(0x9204a4u)));
    /* 0050fa0f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0050fa11: jmp 0x50fa1e */ goto L_0050fa1e;
L_0050fa13:; BB(0x0050fa13);
    /* 0050fa13: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0050fa15: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0050fa17: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0050fa18: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0050fa1a: jb 0x50fa1e */ if (fC) goto L_0050fa1e;
L_0050fa1c:; BB(0x0050fa1c);
    /* 0050fa1c: fst st(1) */ ST(1) = ST(0);
L_0050fa1e:; BB(0x0050fa1e);
    /* 0050fa1e: fld dword ptr [ecx + 0x3c] */ FPUSH(R_F32((u32)(r_ecx+0x3cu)));
    /* 0050fa21: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 0050fa23: fadd dword ptr [ecx + 0x84] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x84u));
    /* 0050fa29: fcom st(3) */ fx_compare(ST(0), ST(3)); 
    /* 0050fa2b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0050fa2d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0050fa2e: jae 0x50fa36 */ if (!fC) goto L_0050fa36;
L_0050fa30:; BB(0x0050fa30);
    /* 0050fa30: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0050fa32: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0050fa34: jmp 0x50fa43 */ goto L_0050fa43;
L_0050fa36:; BB(0x0050fa36);
    /* 0050fa36: fstp st(3) */ ST(3) = ST(0); FPOP();
    /* 0050fa38: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 0050fa3a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0050fa3c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0050fa3d: ja 0x50fa41 */ if ((!fC&&!fZ)) goto L_0050fa41;
L_0050fa3f:; BB(0x0050fa3f);
    /* 0050fa3f: fst st(2) */ ST(2) = ST(0);
L_0050fa41:; BB(0x0050fa41);
    /* 0050fa41: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0050fa43:; BB(0x0050fa43);
    /* 0050fa43: fld dword ptr [0x92049c] */ FPUSH(R_F32((u32)(0x92049cu)));
    /* 0050fa49: fmul st(4), st(0) */ ST(4) = ST(4) * ST(0);
    /* 0050fa4b: fmul st(5), st(0) */ ST(5) = ST(5) * ST(0);
    /* 0050fa4d: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 0050fa4f: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0050fa51: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0050fa53: fnstcw word ptr [esp + 0x24] */ W16((u32)(r_esp+0x24u), fcw);
    /* 0050fa57: movzx eax, word ptr [esp + 0x24] */ r_eax = (u32)R16((u32)(r_esp+0x24u));
    /* 0050fa5c: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0050fa61: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 0050fa65: fldcw word ptr [esp + 0x2c] */ fcw = R16((u32)(r_esp+0x2cu));
    /* 0050fa69: fistp qword ptr [esp + 0x34] */ W64((u32)(r_esp+0x34u), (u64)fx_int64(ST(0))); FPOP();
    /* 0050fa6d: fldcw word ptr [esp + 0x24] */ fcw = R16((u32)(r_esp+0x24u));
    /* 0050fa71: mov edi, dword ptr [esp + 0x34] */ r_edi = R32((u32)(r_esp+0x34u));
    /* 0050fa75: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0050fa77: fnstcw word ptr [esp + 0x24] */ W16((u32)(r_esp+0x24u), fcw);
    /* 0050fa7b: movzx eax, word ptr [esp + 0x24] */ r_eax = (u32)R16((u32)(r_esp+0x24u));
    /* 0050fa80: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0050fa85: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 0050fa89: fldcw word ptr [esp + 0x2c] */ fcw = R16((u32)(r_esp+0x2cu));
    /* 0050fa8d: fistp qword ptr [esp + 0x34] */ W64((u32)(r_esp+0x34u), (u64)fx_int64(ST(0))); FPOP();
    /* 0050fa91: fldcw word ptr [esp + 0x24] */ fcw = R16((u32)(r_esp+0x24u));
    /* 0050fa95: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 0050fa99: shl edi, 0x18 */ { u32 c = (24u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 0050fa9c: shl eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0050fa9f: and eax, 0xff0000 */ {  u32 a = r_eax; u32 b = 0xff0000u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0050faa4: or edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 0050faa6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0050faa8: fnstcw word ptr [esp + 0x24] */ W16((u32)(r_esp+0x24u), fcw);
    /* 0050faac: movzx eax, word ptr [esp + 0x24] */ r_eax = (u32)R16((u32)(r_esp+0x24u));
    /* 0050fab1: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0050fab6: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 0050faba: fldcw word ptr [esp + 0x2c] */ fcw = R16((u32)(r_esp+0x2cu));
    /* 0050fabe: fistp qword ptr [esp + 0x34] */ W64((u32)(r_esp+0x34u), (u64)fx_int64(ST(0))); FPOP();
    /* 0050fac2: fldcw word ptr [esp + 0x24] */ fcw = R16((u32)(r_esp+0x24u));
    /* 0050fac6: and edi, 0xffff00ff */ {  u32 a = r_edi; u32 b = 0xffff00ffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0050facc: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 0050fad0: shl eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0050fad3: and eax, 0xff00 */ {  u32 a = r_eax; u32 b = 0xff00u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0050fad8: or edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 0050fada: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0050fadc: fnstcw word ptr [esp + 0x24] */ W16((u32)(r_esp+0x24u), fcw);
    /* 0050fae0: movzx eax, word ptr [esp + 0x24] */ r_eax = (u32)R16((u32)(r_esp+0x24u));
    /* 0050fae5: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0050faea: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 0050faee: fldcw word ptr [esp + 0x2c] */ fcw = R16((u32)(r_esp+0x2cu));
    /* 0050faf2: fistp qword ptr [esp + 0x34] */ W64((u32)(r_esp+0x34u), (u64)fx_int64(ST(0))); FPOP();
    /* 0050faf6: fldcw word ptr [esp + 0x24] */ fcw = R16((u32)(r_esp+0x24u));
    /* 0050fafa: movzx eax, byte ptr [esp + 0x34] */ r_eax = (u32)R8((u32)(r_esp+0x34u));
    /* 0050faff: and edi, 0xffffff00 */ {  u32 a = r_edi; u32 b = 0xffffff00u; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0050fb05: or edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 0050fb07: mov dword ptr [esi + 0x94], edi */ W32((u32)(r_esi+0x94u), r_edi);
    /* 0050fb0d: and edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 0050fb10: je 0x50fb55 */ if (fZ) goto L_0050fb55;
L_0050fb12:; BB(0x0050fb12);
    /* 0050fb12: fld dword ptr [0x9204ac] */ FPUSH(R_F32((u32)(0x9204acu)));
    /* 0050fb18: fld dword ptr [0x9204a8] */ FPUSH(R_F32((u32)(0x9204a8u)));
    /* 0050fb1e: fld dword ptr [ecx + 0x6c] */ FPUSH(R_F32((u32)(r_ecx+0x6cu)));
    /* 0050fb21: fmul dword ptr [esi + 0xb4] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0xb4u));
    /* 0050fb27: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0050fb29: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 0050fb2b: fnstcw word ptr [esp + 0x24] */ W16((u32)(r_esp+0x24u), fcw);
    /* 0050fb2f: movzx eax, word ptr [esp + 0x24] */ r_eax = (u32)R16((u32)(r_esp+0x24u));
    /* 0050fb34: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0050fb39: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 0050fb3d: fldcw word ptr [esp + 0x2c] */ fcw = R16((u32)(r_esp+0x2cu));
    /* 0050fb41: fistp dword ptr [esp + 0x34] */ W32((u32)(r_esp+0x34u), (u32)fx_int32(ST(0))); FPOP();
    /* 0050fb45: fldcw word ptr [esp + 0x24] */ fcw = R16((u32)(r_esp+0x24u));
    /* 0050fb49: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 0050fb4d: add dword ptr [esi + 0x130], eax */ { u32 ad = (u32)(r_esi+0x130u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0050fb53: jmp 0x50fb90 */ goto L_0050fb90;
L_0050fb55:; BB(0x0050fb55);
    /* 0050fb55: fld dword ptr [0x9204ac] */ FPUSH(R_F32((u32)(0x9204acu)));
    /* 0050fb5b: fld dword ptr [0x9204a8] */ FPUSH(R_F32((u32)(0x9204a8u)));
    /* 0050fb61: fld dword ptr [ecx + 0x6c] */ FPUSH(R_F32((u32)(r_ecx+0x6cu)));
    /* 0050fb64: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0050fb66: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 0050fb68: fnstcw word ptr [esp + 0x24] */ W16((u32)(r_esp+0x24u), fcw);
    /* 0050fb6c: movzx eax, word ptr [esp + 0x24] */ r_eax = (u32)R16((u32)(r_esp+0x24u));
    /* 0050fb71: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0050fb76: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 0050fb7a: fldcw word ptr [esp + 0x2c] */ fcw = R16((u32)(r_esp+0x2cu));
    /* 0050fb7e: fistp dword ptr [esp + 0x34] */ W32((u32)(r_esp+0x34u), (u32)fx_int32(ST(0))); FPOP();
    /* 0050fb82: fldcw word ptr [esp + 0x24] */ fcw = R16((u32)(r_esp+0x24u));
    /* 0050fb86: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 0050fb8a: add dword ptr [esi + 0x130], eax */ { u32 ad = (u32)(r_esi+0x130u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_0050fb90:; BB(0x0050fb90);
    /* 0050fb90: fld dword ptr [esi + 0x60] */ FPUSH(R_F32((u32)(r_esi+0x60u)));
    /* 0050fb93: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050fb95: je 0x50fba6 */ if (fZ) goto L_0050fba6;
L_0050fb97:; BB(0x0050fb97);
    /* 0050fb97: fld dword ptr [esi + 0xb4] */ FPUSH(R_F32((u32)(r_esi+0xb4u)));
    /* 0050fb9d: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0050fb9f: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0050fba1: fstp dword ptr [esi + 0x5c] */ W_F32((u32)(r_esi+0x5cu), ST(0)); FPOP();
    /* 0050fba4: jmp 0x50fbab */ goto L_0050fbab;
L_0050fba6:; BB(0x0050fba6);
    /* 0050fba6: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0050fba8: fstp dword ptr [esi + 0x5c] */ W_F32((u32)(r_esi+0x5cu), ST(0)); FPOP();
L_0050fbab:; BB(0x0050fbab);
    /* 0050fbab: fld dword ptr [0x920498] */ FPUSH(R_F32((u32)(0x920498u)));
    /* 0050fbb1: fmul dword ptr [esi + 0x40] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0x40u));
    /* 0050fbb4: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0050fbb6: fst dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0));
    /* 0050fbba: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0050fbbb: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0050fbbe: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x50fbc3u); f_0082e900();
    /* 0050fbc3: fcomp dword ptr [0x920494] */ fx_compare(ST(0), R_F32((u32)(0x920494u))); FPOP();
    /* 0050fbc9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0050fbcb: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0050fbcc: jbe 0x50fbd8 */ if ((fC||fZ)) goto L_0050fbd8;
L_0050fbce:; BB(0x0050fbce);
    /* 0050fbce: fld dword ptr [0x920494] */ FPUSH(R_F32((u32)(0x920494u)));
    /* 0050fbd4: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
L_0050fbd8:; BB(0x0050fbd8);
    /* 0050fbd8: fld dword ptr [0x9204ac] */ FPUSH(R_F32((u32)(0x9204acu)));
    /* 0050fbde: fld dword ptr [0x9204a8] */ FPUSH(R_F32((u32)(0x9204a8u)));
    /* 0050fbe4: fld dword ptr [esi + 0x6c] */ FPUSH(R_F32((u32)(r_esi+0x6cu)));
    /* 0050fbe7: fcomp dword ptr [0x9204a4] */ fx_compare(ST(0), R_F32((u32)(0x9204a4u))); FPOP();
    /* 0050fbed: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0050fbef: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0050fbf0: jae 0x50fc25 */ if (!fC) goto L_0050fc25;
L_0050fbf2:; BB(0x0050fbf2);
    /* 0050fbf2: fld dword ptr [esp + 0x44] */ FPUSH(R_F32((u32)(r_esp+0x44u)));
    /* 0050fbf6: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0050fbf8: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 0050fbfa: fnstcw word ptr [esp + 0x24] */ W16((u32)(r_esp+0x24u), fcw);
    /* 0050fbfe: movzx eax, word ptr [esp + 0x24] */ r_eax = (u32)R16((u32)(r_esp+0x24u));
    /* 0050fc03: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0050fc08: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 0050fc0c: fldcw word ptr [esp + 0x2c] */ fcw = R16((u32)(r_esp+0x2cu));
    /* 0050fc10: fistp dword ptr [esp + 0x34] */ W32((u32)(r_esp+0x34u), (u32)fx_int32(ST(0))); FPOP();
    /* 0050fc14: fldcw word ptr [esp + 0x24] */ fcw = R16((u32)(r_esp+0x24u));
    /* 0050fc18: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 0050fc1c: add word ptr [esi + 0x9a], ax */ { u32 ad = (u32)(r_esi+0x9au);  u32 a = R16(ad); u32 b = (u16)r_eax; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 0050fc23: jmp 0x50fc5d */ goto L_0050fc5d;
L_0050fc25:; BB(0x0050fc25);
    /* 0050fc25: fld dword ptr [esp + 0x44] */ FPUSH(R_F32((u32)(r_esp+0x44u)));
    /* 0050fc29: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0050fc2b: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 0050fc2d: fnstcw word ptr [esp + 0x24] */ W16((u32)(r_esp+0x24u), fcw);
    /* 0050fc31: movzx eax, word ptr [esp + 0x24] */ r_eax = (u32)R16((u32)(r_esp+0x24u));
    /* 0050fc36: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0050fc3b: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 0050fc3f: fldcw word ptr [esp + 0x2c] */ fcw = R16((u32)(r_esp+0x2cu));
    /* 0050fc43: fistp dword ptr [esp + 0x34] */ W32((u32)(r_esp+0x34u), (u32)fx_int32(ST(0))); FPOP();
    /* 0050fc47: fldcw word ptr [esp + 0x24] */ fcw = R16((u32)(r_esp+0x24u));
    /* 0050fc4b: movzx eax, word ptr [esi + 0x9a] */ r_eax = (u32)R16((u32)(r_esi+0x9au));
    /* 0050fc52: sub eax, dword ptr [esp + 0x34] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x34u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0050fc56: mov word ptr [esi + 0x9a], ax */ W16((u32)(r_esi+0x9au), (u16)r_eax);
L_0050fc5d:; BB(0x0050fc5d);
    /* 0050fc5d: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 0050fc61: mov edx, dword ptr [eax*4 + 0xaaee20] */ r_edx = R32((u32)(r_eax*4+0xaaee20u));
    /* 0050fc68: mov edi, dword ptr [edx + 0x28] */ r_edi = R32((u32)(r_edx+0x28u));
    /* 0050fc6b: mov eax, dword ptr [edi + 0xc] */ r_eax = R32((u32)(r_edi+0xcu));
    /* 0050fc6e: mov edx, dword ptr [esi + 0x20] */ r_edx = R32((u32)(r_esi+0x20u));
    /* 0050fc71: movzx edx, byte ptr [edx + 0x88] */ r_edx = (u32)R8((u32)(r_edx+0x88u));
    /* 0050fc78: test dl, 0x10 */ {  u32 a = (u8)r_edx; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0050fc7b: je 0x50fcb5 */ if (fZ) goto L_0050fcb5;
L_0050fc7d:; BB(0x0050fc7d);
    /* 0050fc7d: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0050fc80: mov dword ptr [esp + 0x3c], eax */ W32((u32)(r_esp+0x3cu), r_eax);
    /* 0050fc84: fild dword ptr [esp + 0x3c] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x3cu)));
    /* 0050fc88: fmul dword ptr [esi + 0x5c] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0x5cu));
    /* 0050fc8b: fnstcw word ptr [esp + 0x24] */ W16((u32)(r_esp+0x24u), fcw);
    /* 0050fc8f: movzx eax, word ptr [esp + 0x24] */ r_eax = (u32)R16((u32)(r_esp+0x24u));
    /* 0050fc94: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0050fc99: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 0050fc9d: fldcw word ptr [esp + 0x2c] */ fcw = R16((u32)(r_esp+0x2cu));
    /* 0050fca1: fistp dword ptr [esp + 0x34] */ W32((u32)(r_esp+0x34u), (u32)fx_int32(ST(0))); FPOP();
    /* 0050fca5: fldcw word ptr [esp + 0x24] */ fcw = R16((u32)(r_esp+0x24u));
    /* 0050fca9: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 0050fcad: mov byte ptr [esi + 0x98], al */ W8((u32)(r_esi+0x98u), (u8)r_eax);
    /* 0050fcb3: jmp 0x50fcd5 */ goto L_0050fcd5;
L_0050fcb5:; BB(0x0050fcb5);
    /* 0050fcb5: movzx edx, byte ptr [esi + 0x98] */ r_edx = (u32)R8((u32)(r_esi+0x98u));
    /* 0050fcbc: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0050fcbf: movsx edx, dl */ r_edx = (u32)(i32)(i8)(u8)r_edx;
    /* 0050fcc2: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050fcc4: jg 0x50fccf */ if ((!fZ&&fS==fO)) goto L_0050fccf;
L_0050fcc6:; BB(0x0050fcc6);
    /* 0050fcc6: mov byte ptr [esi + 0x98], 0 */ W8((u32)(r_esi+0x98u), 0x0u);
    /* 0050fccd: jmp 0x50fcd5 */ goto L_0050fcd5;
L_0050fccf:; BB(0x0050fccf);
    /* 0050fccf: mov byte ptr [esi + 0x98], dl */ W8((u32)(r_esi+0x98u), (u8)r_edx);
L_0050fcd5:; BB(0x0050fcd5);
    /* 0050fcd5: movzx eax, word ptr [esi + 0x26] */ r_eax = (u32)R16((u32)(r_esi+0x26u));
    /* 0050fcd9: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0050fcdb: jne 0x50fcf7 */ if (!fZ) goto L_0050fcf7;
L_0050fcdd:; BB(0x0050fcdd);
    /* 0050fcdd: fld dword ptr [esi + 0x2c] */ FPUSH(R_F32((u32)(r_esi+0x2cu)));
    /* 0050fce0: fmul dword ptr [esi + 0xa8] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0xa8u));
    /* 0050fce6: fld dword ptr [esi + 0x30] */ FPUSH(R_F32((u32)(r_esi+0x30u)));
    /* 0050fce9: fmul dword ptr [esi + 0xac] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0xacu));
    /* 0050fcef: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0050fcf1: fstp dword ptr [esi + 0x2c] */ W_F32((u32)(r_esi+0x2cu), ST(0)); FPOP();
    /* 0050fcf4: fstp dword ptr [esi + 0x30] */ W_F32((u32)(r_esi+0x30u), ST(0)); FPOP();
L_0050fcf7:; BB(0x0050fcf7);
    /* 0050fcf7: mov eax, dword ptr [esi + 0x10c] */ r_eax = R32((u32)(r_esi+0x10cu));
    /* 0050fcfd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050fcff: je 0x50fd3e */ if (fZ) goto L_0050fd3e;
L_0050fd01:; BB(0x0050fd01);
    /* 0050fd01: fld dword ptr [esi + 0x110] */ FPUSH(R_F32((u32)(r_esi+0x110u)));
    /* 0050fd07: fadd dword ptr [esi + 0x114] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x114u));
    /* 0050fd0d: fst dword ptr [esi + 0x110] */ W_F32((u32)(r_esi+0x110u), ST(0));
    /* 0050fd13: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0050fd16: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0050fd19: mov dword ptr [esp + 0x3c], edx */ W32((u32)(r_esp+0x3cu), r_edx);
    /* 0050fd1d: fild dword ptr [esp + 0x3c] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x3cu)));
    /* 0050fd21: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0050fd24: fadd dword ptr [edx*4 + 0x920448] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x920448u));
    /* 0050fd2b: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0050fd2d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0050fd2f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0050fd30: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0050fd32: jb 0x50fd36 */ if (fC) goto L_0050fd36;
L_0050fd34:; BB(0x0050fd34);
    /* 0050fd34: fst st(1) */ ST(1) = ST(0);
L_0050fd36:; BB(0x0050fd36);
    /* 0050fd36: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0050fd38: fstp dword ptr [esi + 0x110] */ W_F32((u32)(r_esi+0x110u), ST(0)); FPOP();
L_0050fd3e:; BB(0x0050fd3e);
    /* 0050fd3e: mov ecx, esi */ r_ecx = r_esi;
    /* 0050fd40: call 0x50ff34 */ r_esp -= 4; W32(r_esp, 0x50fd45u); f_0050ff34();
    /* 0050fd45: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0050fd48: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0050fd49: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0050fd4a: ret  */ FN_RET(0x0050f3fc); r_esp += 4; return;
L_0050fd4b:; BB(0x0050fd4b);
    /* 0050fd4b: movzx eax, word ptr [esi + 0x28] */ r_eax = (u32)R16((u32)(r_esi+0x28u));
    /* 0050fd4f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050fd50: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x50fd55u); f_007b4d18();
    /* 0050fd55: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0050fd56: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050fd58: je 0x50ff1f */ if (fZ) goto L_0050ff1f;
L_0050fd5e:; BB(0x0050fd5e);
    /* 0050fd5e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0050fd60: mov ecx, eax */ r_ecx = r_eax;
    /* 0050fd62: call dword ptr [edx + 0x1c] */ { u32 t = R32((u32)(r_edx+0x1cu)); r_esp -= 4; W32(r_esp, 0x50fd65u); call_ind(t); }
    /* 0050fd65: mov edi, eax */ r_edi = r_eax;
    /* 0050fd67: mov edx, dword ptr [esi + 0x9c] */ r_edx = R32((u32)(r_esi+0x9cu));
    /* 0050fd6d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050fd6f: je 0x50fddf */ if (fZ) goto L_0050fddf;
L_0050fd71:; BB(0x0050fd71);
    /* 0050fd71: mov edx, dword ptr [esi + 0xa0] */ r_edx = R32((u32)(r_esi+0xa0u));
    /* 0050fd77: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050fd79: je 0x50fddf */ if (fZ) goto L_0050fddf;
L_0050fd7b:; BB(0x0050fd7b);
    /* 0050fd7b: mov edx, dword ptr [esi + 0xa4] */ r_edx = R32((u32)(r_esi+0xa4u));
    /* 0050fd81: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050fd83: je 0x50fddf */ if (fZ) goto L_0050fddf;
L_0050fd85:; BB(0x0050fd85);
    /* 0050fd85: fld dword ptr [esi + 0x118] */ FPUSH(R_F32((u32)(r_esi+0x118u)));
    /* 0050fd8b: fsub dword ptr [esi + 0x34] */ ST(0) = ST(0) - R_F32((u32)(r_esi+0x34u));
    /* 0050fd8e: fld dword ptr [esi + 0x11c] */ FPUSH(R_F32((u32)(r_esi+0x11cu)));
    /* 0050fd94: fsub dword ptr [esi + 0x3c] */ ST(0) = ST(0) - R_F32((u32)(r_esi+0x3cu));
    /* 0050fd97: mov ecx, dword ptr [esi + 0x12c] */ r_ecx = R32((u32)(r_esi+0x12cu));
    /* 0050fd9d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0050fd9f: fstp dword ptr [esi + 0x80] */ W_F32((u32)(r_esi+0x80u), ST(0)); FPOP();
    /* 0050fda5: fstp dword ptr [esi + 0x88] */ W_F32((u32)(r_esi+0x88u), ST(0)); FPOP();
    /* 0050fdab: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x50fdb0u); f_0082ddd8();
    /* 0050fdb0: fld dword ptr [esi + 0x124] */ FPUSH(R_F32((u32)(r_esi+0x124u)));
    /* 0050fdb6: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0050fdb8: fadd dword ptr [edi] */ ST(0) = ST(0) + R_F32((u32)(r_edi));
    /* 0050fdba: mov ecx, dword ptr [esi + 0x12c] */ r_ecx = R32((u32)(r_esi+0x12cu));
    /* 0050fdc0: fstp dword ptr [esi + 0x74] */ W_F32((u32)(r_esi+0x74u), ST(0)); FPOP();
    /* 0050fdc3: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x50fdc8u); f_0082dcbc();
    /* 0050fdc8: fld dword ptr [esi + 0x124] */ FPUSH(R_F32((u32)(r_esi+0x124u)));
    /* 0050fdce: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0050fdd0: fadd dword ptr [edi + 8] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x8u));
    /* 0050fdd3: movzx edx, word ptr [esi + 0x26] */ r_edx = (u32)R16((u32)(r_esi+0x26u));
    /* 0050fdd7: fstp dword ptr [esi + 0x7c] */ W_F32((u32)(r_esi+0x7cu), ST(0)); FPOP();
    /* 0050fdda: jmp 0x50f632 */ goto L_0050f632;
L_0050fddf:; BB(0x0050fddf);
    /* 0050fddf: fld dword ptr [esi + 0x118] */ FPUSH(R_F32((u32)(r_esi+0x118u)));
    /* 0050fde5: fsub dword ptr [esi + 0x34] */ ST(0) = ST(0) - R_F32((u32)(r_esi+0x34u));
    /* 0050fde8: fld dword ptr [esi + 0x11c] */ FPUSH(R_F32((u32)(r_esi+0x11cu)));
    /* 0050fdee: fsub dword ptr [esi + 0x3c] */ ST(0) = ST(0) - R_F32((u32)(r_esi+0x3cu));
    /* 0050fdf1: mov ecx, dword ptr [esi + 0x12c] */ r_ecx = R32((u32)(r_esi+0x12cu));
    /* 0050fdf7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0050fdf9: fstp dword ptr [esi + 0x80] */ W_F32((u32)(r_esi+0x80u), ST(0)); FPOP();
    /* 0050fdff: fstp dword ptr [esi + 0x88] */ W_F32((u32)(r_esi+0x88u), ST(0)); FPOP();
    /* 0050fe05: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x50fe0au); f_0082ddd8();
    /* 0050fe0a: fld dword ptr [esi + 0x124] */ FPUSH(R_F32((u32)(r_esi+0x124u)));
    /* 0050fe10: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0050fe12: fadd dword ptr [edi] */ ST(0) = ST(0) + R_F32((u32)(r_edi));
    /* 0050fe14: mov ecx, dword ptr [esi + 0x12c] */ r_ecx = R32((u32)(r_esi+0x12cu));
    /* 0050fe1a: fstp dword ptr [esi + 0x74] */ W_F32((u32)(r_esi+0x74u), ST(0)); FPOP();
    /* 0050fe1d: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x50fe22u); f_0082dcbc();
    /* 0050fe22: fld dword ptr [esi + 0x124] */ FPUSH(R_F32((u32)(r_esi+0x124u)));
    /* 0050fe28: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0050fe2a: fadd dword ptr [edi + 8] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x8u));
    /* 0050fe2d: fld dword ptr [esi + 0x128] */ FPUSH(R_F32((u32)(r_esi+0x128u)));
    /* 0050fe33: fadd dword ptr [esi + 0x44] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x44u));
    /* 0050fe36: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0050fe38: fstp dword ptr [esi + 0x7c] */ W_F32((u32)(r_esi+0x7cu), ST(0)); FPOP();
    /* 0050fe3b: mov eax, dword ptr [edi + 4] */ r_eax = R32((u32)(r_edi+0x4u));
    /* 0050fe3e: fst dword ptr [esi + 0x128] */ W_F32((u32)(r_esi+0x128u), ST(0));
    /* 0050fe44: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 0050fe48: mov dword ptr [esp + 0x18], 0 */ W32((u32)(r_esp+0x18u), 0x0u);
    /* 0050fe50: mov dword ptr [esp + 0x20], 0 */ W32((u32)(r_esp+0x20u), 0x0u);
    /* 0050fe58: mov dword ptr [esi + 0x78], eax */ W32((u32)(r_esi+0x78u), r_eax);
    /* 0050fe5b: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 0050fe60: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x50fe65u); f_0082d990();
    /* 0050fe65: movzx eax, word ptr [esi + 0x26] */ r_eax = (u32)R16((u32)(r_esi+0x26u));
    /* 0050fe69: test al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0050fe6b: je 0x50fe7a */ if (fZ) goto L_0050fe7a;
L_0050fe6d:; BB(0x0050fe6d);
    /* 0050fe6d: lea eax, [esi + 0xc0] */ r_eax = (u32)(r_esi+0xc0u);
    /* 0050fe73: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050fe74: call 0x83ba24 */ r_esp -= 4; W32(r_esp, 0x50fe79u); f_0083ba24();
    /* 0050fe79: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0050fe7a:; BB(0x0050fe7a);
    /* 0050fe7a: mov edx, dword ptr [esi + 0x9c] */ r_edx = R32((u32)(r_esi+0x9cu));
    /* 0050fe80: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0050fe82: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x50fe87u); f_0082e9e4();
    /* 0050fe87: mov edx, dword ptr [esi + 0xa0] */ r_edx = R32((u32)(r_esi+0xa0u));
    /* 0050fe8d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0050fe8f: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x50fe94u); f_0082d8bc();
    /* 0050fe94: mov edx, dword ptr [esi + 0xa4] */ r_edx = R32((u32)(r_esi+0xa4u));
    /* 0050fe9a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0050fe9c: call 0x830c04 */ r_esp -= 4; W32(r_esp, 0x50fea1u); f_00830c04();
    /* 0050fea1: lea edx, [esp + 0x18] */ r_edx = (u32)(r_esp+0x18u);
    /* 0050fea5: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 0050fea9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050feaa: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050feab: call 0x83a610 */ r_esp -= 4; W32(r_esp, 0x50feb0u); f_0083a610();
    /* 0050feb0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050feb3: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x50feb8u); f_0082da80();
    /* 0050feb8: movzx edx, word ptr [esi + 0x26] */ r_edx = (u32)R16((u32)(r_esi+0x26u));
    /* 0050febc: test dl, 8 */ {  u32 a = (u8)r_edx; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0050febf: je 0x50fefa */ if (fZ) goto L_0050fefa;
L_0050fec1:; BB(0x0050fec1);
    /* 0050fec1: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 0050fec5: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 0050fec9: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 0050fecd: fld dword ptr [esi + 0xb0] */ FPUSH(R_F32((u32)(r_esi+0xb0u)));
    /* 0050fed3: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 0050fed5: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 0050fed7: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0050fed9: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0050fedb: fadd dword ptr [esi + 0x74] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x74u));
    /* 0050fede: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0050fee0: fadd dword ptr [esi + 0x78] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x78u));
    /* 0050fee3: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0050fee5: fadd dword ptr [esi + 0x7c] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x7cu));
    /* 0050fee8: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0050feea: fstp dword ptr [esi + 0x74] */ W_F32((u32)(r_esi+0x74u), ST(0)); FPOP();
    /* 0050feed: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0050feef: fstp dword ptr [esi + 0x78] */ W_F32((u32)(r_esi+0x78u), ST(0)); FPOP();
    /* 0050fef2: fstp dword ptr [esi + 0x7c] */ W_F32((u32)(r_esi+0x7cu), ST(0)); FPOP();
    /* 0050fef5: jmp 0x50f632 */ goto L_0050f632;
L_0050fefa:; BB(0x0050fefa);
    /* 0050fefa: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 0050fefe: fadd dword ptr [esi + 0x74] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x74u));
    /* 0050ff01: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 0050ff05: fadd dword ptr [esi + 0x78] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x78u));
    /* 0050ff08: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 0050ff0c: fadd dword ptr [esi + 0x7c] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x7cu));
    /* 0050ff0f: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0050ff11: fstp dword ptr [esi + 0x74] */ W_F32((u32)(r_esi+0x74u), ST(0)); FPOP();
    /* 0050ff14: fstp dword ptr [esi + 0x78] */ W_F32((u32)(r_esi+0x78u), ST(0)); FPOP();
    /* 0050ff17: fstp dword ptr [esi + 0x7c] */ W_F32((u32)(r_esi+0x7cu), ST(0)); FPOP();
    /* 0050ff1a: jmp 0x50f632 */ goto L_0050f632;
L_0050ff1f:; BB(0x0050ff1f);
    /* 0050ff1f: movzx eax, word ptr [esi + 8] */ r_eax = (u32)R16((u32)(r_esi+0x8u));
    /* 0050ff23: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0050ff28: mov word ptr [esi + 8], ax */ W16((u32)(r_esi+0x8u), (u16)r_eax);
    /* 0050ff2c: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0050ff2f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0050ff30: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0050ff31: ret  */ FN_RET(0x0050f3fc); r_esp += 4; return;
}

void f_0050f6f0(void)
{
    FN_ENTER(0x0050f6f0);
    /* 0050f6f0: or al, 0xf6 */ {  u32 a = (u8)r_eax; u32 b = 0xf6u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0050f6f2: ret 0x7404 */ FN_RET(0x0050f6f0); r_esp += 29704; return;
}

void f_0050fc25(void)
{
    FN_ENTER(0x0050fc25);
    /* 0050fc25: fld dword ptr [esp + 0x44] */ FPUSH(R_F32((u32)(r_esp+0x44u)));
    /* 0050fc29: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0050fc2b: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 0050fc2d: fnstcw word ptr [esp + 0x24] */ W16((u32)(r_esp+0x24u), fcw);
    /* 0050fc31: movzx eax, word ptr [esp + 0x24] */ r_eax = (u32)R16((u32)(r_esp+0x24u));
    /* 0050fc36: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0050fc3b: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 0050fc3f: fldcw word ptr [esp + 0x2c] */ fcw = R16((u32)(r_esp+0x2cu));
    /* 0050fc43: fistp dword ptr [esp + 0x34] */ W32((u32)(r_esp+0x34u), (u32)fx_int32(ST(0))); FPOP();
    /* 0050fc47: fldcw word ptr [esp + 0x24] */ fcw = R16((u32)(r_esp+0x24u));
    /* 0050fc4b: movzx eax, word ptr [esi + 0x9a] */ r_eax = (u32)R16((u32)(r_esi+0x9au));
    /* 0050fc52: sub eax, dword ptr [esp + 0x34] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x34u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0050fc56: mov word ptr [esi + 0x9a], ax */ W16((u32)(r_esi+0x9au), (u16)r_eax);
    /* 0050fc5d: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 0050fc61: mov edx, dword ptr [eax*4 + 0xaaee20] */ r_edx = R32((u32)(r_eax*4+0xaaee20u));
    /* 0050fc68: mov edi, dword ptr [edx + 0x28] */ r_edi = R32((u32)(r_edx+0x28u));
    /* 0050fc6b: mov eax, dword ptr [edi + 0xc] */ r_eax = R32((u32)(r_edi+0xcu));
    /* 0050fc6e: mov edx, dword ptr [esi + 0x20] */ r_edx = R32((u32)(r_esi+0x20u));
    /* 0050fc71: movzx edx, byte ptr [edx + 0x88] */ r_edx = (u32)R8((u32)(r_edx+0x88u));
    /* 0050fc78: test dl, 0x10 */ {  u32 a = (u8)r_edx; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0050fc7b: je 0x50fcb5 */ if (fZ) goto L_0050fcb5;
L_0050fc7d:; BB(0x0050fc7d);
    /* 0050fc7d: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0050fc80: mov dword ptr [esp + 0x3c], eax */ W32((u32)(r_esp+0x3cu), r_eax);
    /* 0050fc84: fild dword ptr [esp + 0x3c] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x3cu)));
    /* 0050fc88: fmul dword ptr [esi + 0x5c] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0x5cu));
    /* 0050fc8b: fnstcw word ptr [esp + 0x24] */ W16((u32)(r_esp+0x24u), fcw);
    /* 0050fc8f: movzx eax, word ptr [esp + 0x24] */ r_eax = (u32)R16((u32)(r_esp+0x24u));
    /* 0050fc94: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0050fc99: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 0050fc9d: fldcw word ptr [esp + 0x2c] */ fcw = R16((u32)(r_esp+0x2cu));
    /* 0050fca1: fistp dword ptr [esp + 0x34] */ W32((u32)(r_esp+0x34u), (u32)fx_int32(ST(0))); FPOP();
    /* 0050fca5: fldcw word ptr [esp + 0x24] */ fcw = R16((u32)(r_esp+0x24u));
    /* 0050fca9: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 0050fcad: mov byte ptr [esi + 0x98], al */ W8((u32)(r_esi+0x98u), (u8)r_eax);
    /* 0050fcb3: jmp 0x50fcd5 */ goto L_0050fcd5;
L_0050fcb5:; BB(0x0050fcb5);
    /* 0050fcb5: movzx edx, byte ptr [esi + 0x98] */ r_edx = (u32)R8((u32)(r_esi+0x98u));
    /* 0050fcbc: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0050fcbf: movsx edx, dl */ r_edx = (u32)(i32)(i8)(u8)r_edx;
    /* 0050fcc2: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050fcc4: jg 0x50fccf */ if ((!fZ&&fS==fO)) goto L_0050fccf;
L_0050fcc6:; BB(0x0050fcc6);
    /* 0050fcc6: mov byte ptr [esi + 0x98], 0 */ W8((u32)(r_esi+0x98u), 0x0u);
    /* 0050fccd: jmp 0x50fcd5 */ goto L_0050fcd5;
L_0050fccf:; BB(0x0050fccf);
    /* 0050fccf: mov byte ptr [esi + 0x98], dl */ W8((u32)(r_esi+0x98u), (u8)r_edx);
L_0050fcd5:; BB(0x0050fcd5);
    /* 0050fcd5: movzx eax, word ptr [esi + 0x26] */ r_eax = (u32)R16((u32)(r_esi+0x26u));
    /* 0050fcd9: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0050fcdb: jne 0x50fcf7 */ if (!fZ) goto L_0050fcf7;
L_0050fcdd:; BB(0x0050fcdd);
    /* 0050fcdd: fld dword ptr [esi + 0x2c] */ FPUSH(R_F32((u32)(r_esi+0x2cu)));
    /* 0050fce0: fmul dword ptr [esi + 0xa8] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0xa8u));
    /* 0050fce6: fld dword ptr [esi + 0x30] */ FPUSH(R_F32((u32)(r_esi+0x30u)));
    /* 0050fce9: fmul dword ptr [esi + 0xac] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0xacu));
    /* 0050fcef: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0050fcf1: fstp dword ptr [esi + 0x2c] */ W_F32((u32)(r_esi+0x2cu), ST(0)); FPOP();
    /* 0050fcf4: fstp dword ptr [esi + 0x30] */ W_F32((u32)(r_esi+0x30u), ST(0)); FPOP();
L_0050fcf7:; BB(0x0050fcf7);
    /* 0050fcf7: mov eax, dword ptr [esi + 0x10c] */ r_eax = R32((u32)(r_esi+0x10cu));
    /* 0050fcfd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050fcff: je 0x50fd3e */ if (fZ) goto L_0050fd3e;
L_0050fd01:; BB(0x0050fd01);
    /* 0050fd01: fld dword ptr [esi + 0x110] */ FPUSH(R_F32((u32)(r_esi+0x110u)));
    /* 0050fd07: fadd dword ptr [esi + 0x114] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x114u));
    /* 0050fd0d: fst dword ptr [esi + 0x110] */ W_F32((u32)(r_esi+0x110u), ST(0));
    /* 0050fd13: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0050fd16: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0050fd19: mov dword ptr [esp + 0x3c], edx */ W32((u32)(r_esp+0x3cu), r_edx);
    /* 0050fd1d: fild dword ptr [esp + 0x3c] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x3cu)));
    /* 0050fd21: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0050fd24: fadd dword ptr [edx*4 + 0x920448] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x920448u));
    /* 0050fd2b: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0050fd2d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0050fd2f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0050fd30: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0050fd32: jb 0x50fd36 */ if (fC) goto L_0050fd36;
L_0050fd34:; BB(0x0050fd34);
    /* 0050fd34: fst st(1) */ ST(1) = ST(0);
L_0050fd36:; BB(0x0050fd36);
    /* 0050fd36: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0050fd38: fstp dword ptr [esi + 0x110] */ W_F32((u32)(r_esi+0x110u), ST(0)); FPOP();
L_0050fd3e:; BB(0x0050fd3e);
    /* 0050fd3e: mov ecx, esi */ r_ecx = r_esi;
    /* 0050fd40: call 0x50ff34 */ r_esp -= 4; W32(r_esp, 0x50fd45u); f_0050ff34();
    /* 0050fd45: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0050fd48: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0050fd49: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0050fd4a: ret  */ FN_RET(0x0050fc25); r_esp += 4; return;
}

void f_0050ff34(void) /* sub_50FF34 */
{
    FN_ENTER(0x0050ff34);
    /* 0050ff34: fld dword ptr [ecx + 0x5c] */ FPUSH(R_F32((u32)(r_ecx+0x5cu)));
    /* 0050ff37: fcomp dword ptr [0x920490] */ fx_compare(ST(0), R_F32((u32)(0x920490u))); FPOP();
    /* 0050ff3d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0050ff3f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0050ff40: jb 0x50ff4f */ if (fC) goto L_0050ff4f;
L_0050ff42:; BB(0x0050ff42);
    /* 0050ff42: movzx eax, word ptr [ecx + 8] */ r_eax = (u32)R16((u32)(r_ecx+0x8u));
    /* 0050ff46: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0050ff4b: mov word ptr [ecx + 8], ax */ W16((u32)(r_ecx+0x8u), (u16)r_eax);
L_0050ff4f:; BB(0x0050ff4f);
    /* 0050ff4f: ret  */ FN_RET(0x0050ff34); r_esp += 4; return;
}

void f_0050ff50(void) /* sub_50FF50 */
{
    FN_ENTER(0x0050ff50);
    /* 0050ff50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050ff51: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0050ff54: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0050ff56: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0050ff58: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x50ff5du); f_008173b4();
    /* 0050ff5d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050ff5f: jne 0x50ff66 */ if (!fZ) goto L_0050ff66;
L_0050ff61:; BB(0x0050ff61);
    /* 0050ff61: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0050ff64: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050ff65: ret  */ FN_RET(0x0050ff50); r_esp += 4; return;
L_0050ff66:; BB(0x0050ff66);
    /* 0050ff66: mov ecx, dword ptr [ebp + 0x130] */ r_ecx = R32((u32)(r_ebp+0x130u));
    /* 0050ff6c: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x50ff71u); f_0082ddd8();
    /* 0050ff71: mov edx, dword ptr [ebp + 0x20] */ r_edx = R32((u32)(r_ebp+0x20u));
    /* 0050ff74: fld dword ptr [edx + 0x70] */ FPUSH(R_F32((u32)(r_edx+0x70u)));
    /* 0050ff77: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0050ff79: fld dword ptr [0x92048c] */ FPUSH(R_F32((u32)(0x92048cu)));
    /* 0050ff7f: fld dword ptr [0x92048c] */ FPUSH(R_F32((u32)(0x92048cu)));
    /* 0050ff85: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0050ff87: fmul dword ptr [ebp + 0x2c] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x2cu));
    /* 0050ff8a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0050ff8c: fsubrp st(2) */ ST(2) = ST(0) - ST(2); FPOP();
    /* 0050ff8e: fmul dword ptr [ebp + 0xa8] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xa8u));
    /* 0050ff94: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0050ff96: fmul dword ptr [ebp + 0x30] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x30u));
    /* 0050ff99: fmul dword ptr [ebp + 0xac] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xacu));
    /* 0050ff9f: movzx eax, word ptr [ebp + 0x24] */ r_eax = (u32)R16((u32)(r_ebp+0x24u));
    /* 0050ffa3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0050ffa5: fstp dword ptr [ebp + 0x8c] */ W_F32((u32)(r_ebp+0x8cu), ST(0)); FPOP();
    /* 0050ffab: fstp dword ptr [ebp + 0x90] */ W_F32((u32)(r_ebp+0x90u), ST(0)); FPOP();
    /* 0050ffb1: test eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050ffb6: jne 0x510008 */ if (!fZ) goto L_00510008;
L_0050ffb8:; BB(0x0050ffb8);
    /* 0050ffb8: test eax, 0x2000 */ {  u32 a = r_eax; u32 b = 0x2000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050ffbd: jne 0x50fffc */ if (!fZ) goto L_0050fffc;
L_0050ffbf:; BB(0x0050ffbf);
    /* 0050ffbf: movzx eax, byte ptr [edx + 0x88] */ r_eax = (u32)R8((u32)(r_edx+0x88u));
    /* 0050ffc6: test al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0050ffc8: je 0x50ffe3 */ if (fZ) goto L_0050ffe3;
L_0050ffca:; BB(0x0050ffca);
    /* 0050ffca: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0050ffce: mov ecx, dword ptr [eax*4 + 0xaaeef8] */ r_ecx = R32((u32)(r_eax*4+0xaaeef8u));
    /* 0050ffd5: add ebp, 0x70 */ {  u32 a = r_ebp; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0050ffd8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050ffd9: call 0x801090 */ r_esp -= 4; W32(r_esp, 0x50ffdeu); f_00801090();
    /* 0050ffde: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0050ffe1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050ffe2: ret  */ FN_RET(0x0050ff50); r_esp += 4; return;
L_0050ffe3:; BB(0x0050ffe3);
    /* 0050ffe3: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0050ffe7: mov ecx, dword ptr [eax*4 + 0xaaee20] */ r_ecx = R32((u32)(r_eax*4+0xaaee20u));
    /* 0050ffee: add ebp, 0x70 */ {  u32 a = r_ebp; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0050fff1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050fff2: call 0x801090 */ r_esp -= 4; W32(r_esp, 0x50fff7u); f_00801090();
L_0050fff7:; BB(0x0050fff7);
    /* 0050fff7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0050fffa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050fffb: ret  */ FN_RET(0x0050ff50); r_esp += 4; return;
L_0050fffc:; BB(0x0050fffc);
    /* 0050fffc: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0050fffe: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x510003u); f_0061cdb0();
    /* 00510003: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00510006: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00510007: ret  */ FN_RET(0x0050ff50); r_esp += 4; return;
L_00510008:; BB(0x00510008);
    /* 00510008: call 0x505a20 */ r_esp -= 4; W32(r_esp, 0x51000du); f_00505a20();
    /* 0051000d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051000f: jne 0x51001c */ if (!fZ) goto L_0051001c;
L_00510011:; BB(0x00510011);
    /* 00510011: movzx eax, word ptr [ebp + 0x24] */ r_eax = (u32)R16((u32)(r_ebp+0x24u));
    /* 00510015: test eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051001a: jne 0x50fff7 */ if (!fZ) goto L_0050fff7;
L_0051001c:; BB(0x0051001c);
    /* 0051001c: mov eax, dword ptr [ebp + 0x108] */ r_eax = R32((u32)(r_ebp+0x108u));
    /* 00510022: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00510024: je 0x50fff7 */ if (fZ) goto L_0050fff7;
L_00510026:; BB(0x00510026);
    /* 00510026: mov eax, dword ptr [ebp + 0x104] */ r_eax = R32((u32)(r_ebp+0x104u));
    /* 0051002c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051002e: je 0x50fff7 */ if (fZ) goto L_0050fff7;
L_00510030:; BB(0x00510030);
    /* 00510030: fld dword ptr [ebp + 0x74] */ FPUSH(R_F32((u32)(r_ebp+0x74u)));
    /* 00510033: fadd dword ptr [ebp + 0x80] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x80u));
    /* 00510039: fld dword ptr [ebp + 0x78] */ FPUSH(R_F32((u32)(r_ebp+0x78u)));
    /* 0051003c: fadd dword ptr [ebp + 0x84] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x84u));
    /* 00510042: fld dword ptr [ebp + 0x7c] */ FPUSH(R_F32((u32)(r_ebp+0x7cu)));
    /* 00510045: fadd dword ptr [ebp + 0x88] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x88u));
    /* 0051004b: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0051004d: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00510050: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00510054: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00510058: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x51005du); f_0082d7b0();
    /* 0051005d: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00510060: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x510065u); f_0082d838();
    /* 00510065: mov eax, dword ptr [ebp + 0x8c] */ r_eax = R32((u32)(r_ebp+0x8cu));
    /* 0051006b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051006c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051006d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0051006f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00510070: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x510075u); f_0082fa0c();
    /* 00510075: mov edx, dword ptr [ebp + 0xa4] */ r_edx = R32((u32)(r_ebp+0xa4u));
    /* 0051007b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0051007d: call 0x830c04 */ r_esp -= 4; W32(r_esp, 0x510082u); f_00830c04();
    /* 00510082: mov edx, dword ptr [ebp + 0x9c] */ r_edx = R32((u32)(r_ebp+0x9cu));
    /* 00510088: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0051008a: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x51008fu); f_0082e9e4();
    /* 0051008f: mov edx, dword ptr [ebp + 0xa0] */ r_edx = R32((u32)(r_ebp+0xa0u));
    /* 00510095: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00510097: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x51009cu); f_0082d8bc();
    /* 0051009c: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 005100a1: movzx edx, word ptr [ebp + 0x24] */ r_edx = (u32)R16((u32)(r_ebp+0x24u));
    /* 005100a5: mov dword ptr [0xaab518], eax */ W32((u32)(0xaab518u), r_eax);
    /* 005100aa: test edx, 0x400 */ {  u32 a = r_edx; u32 b = 0x400u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005100b0: jne 0x5101a1 */ if (!fZ) goto L_005101a1;
L_005100b6:; BB(0x005100b6);
    /* 005100b6: movsx edx, word ptr [ebp + 0x9a] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x9au));
    /* 005100bd: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005100bf: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x5100c4u); f_0082d8bc();
    /* 005100c4: movzx eax, word ptr [ebp + 0x24] */ r_eax = (u32)R16((u32)(r_ebp+0x24u));
    /* 005100c8: test eax, 0x1000 */ {  u32 a = r_eax; u32 b = 0x1000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005100cd: je 0x5100e5 */ if (fZ) goto L_005100e5;
L_005100cf:; BB(0x005100cf);
    /* 005100cf: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
    /* 005100d4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005100d6: je 0x5100e5 */ if (fZ) goto L_005100e5;
L_005100d8:; BB(0x005100d8);
    /* 005100d8: mov edx, dword ptr [eax + 0x194] */ r_edx = R32((u32)(r_eax+0x194u));
    /* 005100de: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005100e0: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x5100e5u); f_0082d8bc();
L_005100e5:; BB(0x005100e5);
    /* 005100e5: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x5100eau); f_0082dab0();
    /* 005100ea: movzx eax, word ptr [ebp + 0x24] */ r_eax = (u32)R16((u32)(r_ebp+0x24u));
    /* 005100ee: test eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005100f3: jne 0x510197 */ if (!fZ) goto L_00510197;
L_005100f9:; BB(0x005100f9);
    /* 005100f9: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 005100fe: mov dword ptr [0xaab518], eax */ W32((u32)(0xaab518u), r_eax);
    /* 00510103: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00510105: or eax, 0x8021 */ {  u32 a = r_eax; u32 b = 0x8021u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0051010a: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 0051010f: call 0x508a30 */ r_esp -= 4; W32(r_esp, 0x510114u); f_00508a30();
    /* 00510114: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00510116: je 0x510123 */ if (fZ) goto L_00510123;
L_00510118:; BB(0x00510118);
    /* 00510118: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051011a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051011c: call 0x508958 */ r_esp -= 4; W32(r_esp, 0x510121u); f_00508958();
    /* 00510121: jmp 0x51012c */ goto L_0051012c;
L_00510123:; BB(0x00510123);
    /* 00510123: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00510125: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00510127: call 0x508958 */ r_esp -= 4; W32(r_esp, 0x51012cu); f_00508958();
L_0051012c:; BB(0x0051012c);
    /* 0051012c: mov ecx, dword ptr [ebp + 0x108] */ r_ecx = R32((u32)(r_ebp+0x108u));
    /* 00510132: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x510137u); f_00829cc8();
    /* 00510137: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00510139: call 0x7a94a0 */ r_esp -= 4; W32(r_esp, 0x51013eu); f_007a94a0();
    /* 0051013e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0051013f: mov edx, dword ptr [ebp + 0x10c] */ r_edx = R32((u32)(r_ebp+0x10cu));
    /* 00510145: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00510147: je 0x51018a */ if (fZ) goto L_0051018a;
L_00510149:; BB(0x00510149);
    /* 00510149: push dword ptr [ebp + 0x110] */ { u32 v = R32((u32)(r_ebp+0x110u)); r_esp -= 4; W32(r_esp, v); }
    /* 0051014f: mov ecx, dword ptr [ebp + 0x104] */ r_ecx = R32((u32)(r_ebp+0x104u));
    /* 00510155: call 0x83bd00 */ r_esp -= 4; W32(r_esp, 0x51015au); f_0083bd00();
L_0051015a:; BB(0x0051015a);
    /* 0051015a: movzx eax, word ptr [ebp + 0x24] */ r_eax = (u32)R16((u32)(r_ebp+0x24u));
    /* 0051015e: test eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00510163: jne 0x51017e */ if (!fZ) goto L_0051017e;
L_00510165:; BB(0x00510165);
    /* 00510165: mov eax, dword ptr [0xaab518] */ r_eax = R32((u32)(0xaab518u));
L_0051016a:; BB(0x0051016a);
    /* 0051016a: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 0051016f: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x510174u); f_0082dab0();
    /* 00510174: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x510179u); f_0082da80();
    /* 00510179: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0051017c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051017d: ret  */ FN_RET(0x0050ff50); r_esp += 4; return;
L_0051017e:; BB(0x0051017e);
    /* 0051017e: call 0x5022a0 */ r_esp -= 4; W32(r_esp, 0x510183u); f_005022a0();
    /* 00510183: mov eax, dword ptr [0xaab518] */ r_eax = R32((u32)(0xaab518u));
    /* 00510188: jmp 0x51016a */ goto L_0051016a;
L_0051018a:; BB(0x0051018a);
    /* 0051018a: mov ecx, dword ptr [ebp + 0x104] */ r_ecx = R32((u32)(r_ebp+0x104u));
    /* 00510190: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x510195u); f_00831758();
    /* 00510195: jmp 0x51015a */ goto L_0051015a;
L_00510197:; BB(0x00510197);
    /* 00510197: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00510199: call 0x501fb8 */ r_esp -= 4; W32(r_esp, 0x51019eu); f_00501fb8();
    /* 0051019e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0051019f: jmp 0x51012c */ goto L_0051012c;
L_005101a1:; BB(0x005101a1);
    /* 005101a1: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x5101a6u); f_0082dbac();
    /* 005101a6: push 0x3faa3d71 */ { u32 v = 0x3faa3d71u; r_esp -= 4; W32(r_esp, v); }
    /* 005101ab: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x5101b0u); f_0061cdb0();
    /* 005101b0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005101b1: jmp 0x5100b6 */ goto L_005100b6;
}

void f_0050ff9e(void)
{
    FN_ENTER(0x0050ff9e);
    /* 0050ff9e: add byte ptr [edi], cl */ { u32 ad = (u32)(r_edi);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0050ffa0: mov bh, 0x45 */ r_ebx = (r_ebx & 0xffff00ffu) | (((0x45u) & 0xffu) << 8);
    /* 0050ffa2: and al, 0xd9 */ {  u32 a = (u8)r_eax; u32 b = 0xd9u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0050ffa4: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 0050ffa5: fstp dword ptr [ebp + 0x8c] */ W_F32((u32)(r_ebp+0x8cu), ST(0)); FPOP();
    /* 0050ffab: fstp dword ptr [ebp + 0x90] */ W_F32((u32)(r_ebp+0x90u), ST(0)); FPOP();
    /* 0050ffb1: test eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050ffb6: jne 0x510008 */ if (!fZ) goto L_00510008;
L_0050ffb8:; BB(0x0050ffb8);
    /* 0050ffb8: test eax, 0x2000 */ {  u32 a = r_eax; u32 b = 0x2000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050ffbd: jne 0x50fffc */ if (!fZ) goto L_0050fffc;
L_0050ffbf:; BB(0x0050ffbf);
    /* 0050ffbf: movzx eax, byte ptr [edx + 0x88] */ r_eax = (u32)R8((u32)(r_edx+0x88u));
    /* 0050ffc6: test al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0050ffc8: je 0x50ffe3 */ if (fZ) goto L_0050ffe3;
L_0050ffca:; BB(0x0050ffca);
    /* 0050ffca: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0050ffce: mov ecx, dword ptr [eax*4 + 0xaaeef8] */ r_ecx = R32((u32)(r_eax*4+0xaaeef8u));
    /* 0050ffd5: add ebp, 0x70 */ {  u32 a = r_ebp; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0050ffd8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050ffd9: call 0x801090 */ r_esp -= 4; W32(r_esp, 0x50ffdeu); f_00801090();
    /* 0050ffde: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0050ffe1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050ffe2: ret  */ FN_RET(0x0050ff9e); r_esp += 4; return;
L_0050ffe3:; BB(0x0050ffe3);
    /* 0050ffe3: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0050ffe7: mov ecx, dword ptr [eax*4 + 0xaaee20] */ r_ecx = R32((u32)(r_eax*4+0xaaee20u));
    /* 0050ffee: add ebp, 0x70 */ {  u32 a = r_ebp; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0050fff1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050fff2: call 0x801090 */ r_esp -= 4; W32(r_esp, 0x50fff7u); f_00801090();
L_0050fff7:; BB(0x0050fff7);
    /* 0050fff7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0050fffa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050fffb: ret  */ FN_RET(0x0050ff9e); r_esp += 4; return;
L_0050fffc:; BB(0x0050fffc);
    /* 0050fffc: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0050fffe: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x510003u); f_0061cdb0();
    /* 00510003: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00510006: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00510007: ret  */ FN_RET(0x0050ff9e); r_esp += 4; return;
L_00510008:; BB(0x00510008);
    /* 00510008: call 0x505a20 */ r_esp -= 4; W32(r_esp, 0x51000du); f_00505a20();
    /* 0051000d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051000f: jne 0x51001c */ if (!fZ) goto L_0051001c;
L_00510011:; BB(0x00510011);
    /* 00510011: movzx eax, word ptr [ebp + 0x24] */ r_eax = (u32)R16((u32)(r_ebp+0x24u));
    /* 00510015: test eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051001a: jne 0x50fff7 */ if (!fZ) goto L_0050fff7;
L_0051001c:; BB(0x0051001c);
    /* 0051001c: mov eax, dword ptr [ebp + 0x108] */ r_eax = R32((u32)(r_ebp+0x108u));
    /* 00510022: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00510024: je 0x50fff7 */ if (fZ) goto L_0050fff7;
L_00510026:; BB(0x00510026);
    /* 00510026: mov eax, dword ptr [ebp + 0x104] */ r_eax = R32((u32)(r_ebp+0x104u));
    /* 0051002c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051002e: je 0x50fff7 */ if (fZ) goto L_0050fff7;
L_00510030:; BB(0x00510030);
    /* 00510030: fld dword ptr [ebp + 0x74] */ FPUSH(R_F32((u32)(r_ebp+0x74u)));
    /* 00510033: fadd dword ptr [ebp + 0x80] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x80u));
    /* 00510039: fld dword ptr [ebp + 0x78] */ FPUSH(R_F32((u32)(r_ebp+0x78u)));
    /* 0051003c: fadd dword ptr [ebp + 0x84] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x84u));
    /* 00510042: fld dword ptr [ebp + 0x7c] */ FPUSH(R_F32((u32)(r_ebp+0x7cu)));
    /* 00510045: fadd dword ptr [ebp + 0x88] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x88u));
    /* 0051004b: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0051004d: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00510050: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00510054: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00510058: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x51005du); f_0082d7b0();
    /* 0051005d: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00510060: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x510065u); f_0082d838();
    /* 00510065: mov eax, dword ptr [ebp + 0x8c] */ r_eax = R32((u32)(r_ebp+0x8cu));
    /* 0051006b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051006c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051006d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0051006f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00510070: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x510075u); f_0082fa0c();
    /* 00510075: mov edx, dword ptr [ebp + 0xa4] */ r_edx = R32((u32)(r_ebp+0xa4u));
    /* 0051007b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0051007d: call 0x830c04 */ r_esp -= 4; W32(r_esp, 0x510082u); f_00830c04();
    /* 00510082: mov edx, dword ptr [ebp + 0x9c] */ r_edx = R32((u32)(r_ebp+0x9cu));
    /* 00510088: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0051008a: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x51008fu); f_0082e9e4();
    /* 0051008f: mov edx, dword ptr [ebp + 0xa0] */ r_edx = R32((u32)(r_ebp+0xa0u));
    /* 00510095: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00510097: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x51009cu); f_0082d8bc();
    /* 0051009c: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 005100a1: movzx edx, word ptr [ebp + 0x24] */ r_edx = (u32)R16((u32)(r_ebp+0x24u));
    /* 005100a5: mov dword ptr [0xaab518], eax */ W32((u32)(0xaab518u), r_eax);
    /* 005100aa: test edx, 0x400 */ {  u32 a = r_edx; u32 b = 0x400u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005100b0: jne 0x5101a1 */ if (!fZ) goto L_005101a1;
L_005100b6:; BB(0x005100b6);
    /* 005100b6: movsx edx, word ptr [ebp + 0x9a] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x9au));
    /* 005100bd: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005100bf: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x5100c4u); f_0082d8bc();
    /* 005100c4: movzx eax, word ptr [ebp + 0x24] */ r_eax = (u32)R16((u32)(r_ebp+0x24u));
    /* 005100c8: test eax, 0x1000 */ {  u32 a = r_eax; u32 b = 0x1000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005100cd: je 0x5100e5 */ if (fZ) goto L_005100e5;
L_005100cf:; BB(0x005100cf);
    /* 005100cf: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
    /* 005100d4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005100d6: je 0x5100e5 */ if (fZ) goto L_005100e5;
L_005100d8:; BB(0x005100d8);
    /* 005100d8: mov edx, dword ptr [eax + 0x194] */ r_edx = R32((u32)(r_eax+0x194u));
    /* 005100de: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005100e0: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x5100e5u); f_0082d8bc();
L_005100e5:; BB(0x005100e5);
    /* 005100e5: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x5100eau); f_0082dab0();
    /* 005100ea: movzx eax, word ptr [ebp + 0x24] */ r_eax = (u32)R16((u32)(r_ebp+0x24u));
    /* 005100ee: test eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005100f3: jne 0x510197 */ if (!fZ) goto L_00510197;
L_005100f9:; BB(0x005100f9);
    /* 005100f9: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 005100fe: mov dword ptr [0xaab518], eax */ W32((u32)(0xaab518u), r_eax);
    /* 00510103: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00510105: or eax, 0x8021 */ {  u32 a = r_eax; u32 b = 0x8021u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0051010a: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 0051010f: call 0x508a30 */ r_esp -= 4; W32(r_esp, 0x510114u); f_00508a30();
    /* 00510114: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00510116: je 0x510123 */ if (fZ) goto L_00510123;
L_00510118:; BB(0x00510118);
    /* 00510118: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051011a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051011c: call 0x508958 */ r_esp -= 4; W32(r_esp, 0x510121u); f_00508958();
    /* 00510121: jmp 0x51012c */ goto L_0051012c;
L_00510123:; BB(0x00510123);
    /* 00510123: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00510125: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00510127: call 0x508958 */ r_esp -= 4; W32(r_esp, 0x51012cu); f_00508958();
L_0051012c:; BB(0x0051012c);
    /* 0051012c: mov ecx, dword ptr [ebp + 0x108] */ r_ecx = R32((u32)(r_ebp+0x108u));
    /* 00510132: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x510137u); f_00829cc8();
    /* 00510137: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00510139: call 0x7a94a0 */ r_esp -= 4; W32(r_esp, 0x51013eu); f_007a94a0();
    /* 0051013e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0051013f: mov edx, dword ptr [ebp + 0x10c] */ r_edx = R32((u32)(r_ebp+0x10cu));
    /* 00510145: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00510147: je 0x51018a */ if (fZ) goto L_0051018a;
L_00510149:; BB(0x00510149);
    /* 00510149: push dword ptr [ebp + 0x110] */ { u32 v = R32((u32)(r_ebp+0x110u)); r_esp -= 4; W32(r_esp, v); }
    /* 0051014f: mov ecx, dword ptr [ebp + 0x104] */ r_ecx = R32((u32)(r_ebp+0x104u));
    /* 00510155: call 0x83bd00 */ r_esp -= 4; W32(r_esp, 0x51015au); f_0083bd00();
L_0051015a:; BB(0x0051015a);
    /* 0051015a: movzx eax, word ptr [ebp + 0x24] */ r_eax = (u32)R16((u32)(r_ebp+0x24u));
    /* 0051015e: test eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00510163: jne 0x51017e */ if (!fZ) goto L_0051017e;
L_00510165:; BB(0x00510165);
    /* 00510165: mov eax, dword ptr [0xaab518] */ r_eax = R32((u32)(0xaab518u));
L_0051016a:; BB(0x0051016a);
    /* 0051016a: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 0051016f: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x510174u); f_0082dab0();
    /* 00510174: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x510179u); f_0082da80();
    /* 00510179: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0051017c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051017d: ret  */ FN_RET(0x0050ff9e); r_esp += 4; return;
L_0051017e:; BB(0x0051017e);
    /* 0051017e: call 0x5022a0 */ r_esp -= 4; W32(r_esp, 0x510183u); f_005022a0();
    /* 00510183: mov eax, dword ptr [0xaab518] */ r_eax = R32((u32)(0xaab518u));
    /* 00510188: jmp 0x51016a */ goto L_0051016a;
L_0051018a:; BB(0x0051018a);
    /* 0051018a: mov ecx, dword ptr [ebp + 0x104] */ r_ecx = R32((u32)(r_ebp+0x104u));
    /* 00510190: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x510195u); f_00831758();
    /* 00510195: jmp 0x51015a */ goto L_0051015a;
L_00510197:; BB(0x00510197);
    /* 00510197: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00510199: call 0x501fb8 */ r_esp -= 4; W32(r_esp, 0x51019eu); f_00501fb8();
    /* 0051019e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0051019f: jmp 0x51012c */ goto L_0051012c;
L_005101a1:; BB(0x005101a1);
    /* 005101a1: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x5101a6u); f_0082dbac();
    /* 005101a6: push 0x3faa3d71 */ { u32 v = 0x3faa3d71u; r_esp -= 4; W32(r_esp, v); }
    /* 005101ab: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x5101b0u); f_0061cdb0();
    /* 005101b0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005101b1: jmp 0x5100b6 */ goto L_005100b6;
}

