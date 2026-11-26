#include "protos.h"

void f_006f8130(void) /* sub_6F8130 */
{
    FN_ENTER(0x006f8130);
    /* 006f8130: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006f8131: mov ebp, esp */ r_ebp = r_esp;
    /* 006f8133: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006f8135: push 0x8eff3a */ { u32 v = 0x8eff3au; r_esp -= 4; W32(r_esp, v); }
    /* 006f813a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006f8140: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006f8141: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006f8148: sub esp, 0x8c */ {  u32 a = r_esp; u32 b = 0x8cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006f814e: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006f8151: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 006f8154: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 006f8157: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 006f815a: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006f815d: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 006f8160: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x6f8165u); f_008193cc();
    /* 006f8165: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006f816c: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 006f816f: mov dword ptr [eax], 0xb3ea90 */ W32((u32)(r_eax), 0xb3ea90u);
    /* 006f8175: mov ecx, 0xa8d4e0 */ r_ecx = 0xa8d4e0u;
    /* 006f817a: call 0x5bc014 */ r_esp -= 4; W32(r_esp, 0x6f817fu); f_005bc014();
    /* 006f817f: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006f8182: mov dword ptr [0xa96954], edx */ W32((u32)(0xa96954u), r_edx);
    /* 006f8188: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006f818a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006f818c: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
    /* 006f818f: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 006f8192: mov dword ptr [edx + 0x2c], eax */ W32((u32)(r_edx+0x2cu), r_eax);
    /* 006f8195: mov dword ptr [edx + 0x3c], eax */ W32((u32)(r_edx+0x3cu), r_eax);
    /* 006f8198: call 0x7a6198 */ r_esp -= 4; W32(r_esp, 0x6f819du); f_007a6198();
    /* 006f819d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006f819e: mov dword ptr [0xa96958], 0 */ W32((u32)(0xa96958u), 0x0u);
    /* 006f81a8: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x6f81adu); f_006dc358();
    /* 006f81ad: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006f81b0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006f81b2: jne 0x6f81bd */ if (!fZ) goto L_006f81bd;
L_006f81b4:; BB(0x006f81b4);
    /* 006f81b4: mov dword ptr [edx + 0x38], 0x4b0 */ W32((u32)(r_edx+0x38u), 0x4b0u);
    /* 006f81bb: jmp 0x6f81c4 */ goto L_006f81c4;
L_006f81bd:; BB(0x006f81bd);
    /* 006f81bd: mov dword ptr [edx + 0x38], 0x320 */ W32((u32)(r_edx+0x38u), 0x320u);
L_006f81c4:; BB(0x006f81c4);
    /* 006f81c4: mov dword ptr [ebp - 0x98], 0 */ W32((u32)(r_ebp+0xffffff68u), 0x0u);
    /* 006f81ce: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 006f81d0: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6f81d5u); f_005caba4();
    /* 006f81d5: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006f81d8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006f81db: mov dword ptr [ebp - 0x94], eax */ W32((u32)(r_ebp+0xffffff6cu), r_eax);
    /* 006f81e1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006f81e3: je 0x6f8420 */ if (fZ) goto L_006f8420;
L_006f81e9:; BB(0x006f81e9);
    /* 006f81e9: mov dword ptr [ebp - 0x98], 1 */ W32((u32)(r_ebp+0xffffff68u), 0x1u);
    /* 006f81f3: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 006f81fa: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006f81fd: mov ecx, eax */ r_ecx = r_eax;
    /* 006f81ff: call 0x6f4734 */ r_esp -= 4; W32(r_esp, 0x6f8204u); f_006f4734();
    /* 006f8204: mov dword ptr [ebp - 0x98], 0 */ W32((u32)(r_ebp+0xffffff68u), 0x0u);
L_006f820e:; BB(0x006f820e);
    /* 006f820e: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006f8211: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006f8214: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 006f8217: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006f821e: mov dword ptr [ebp - 0x90], 0 */ W32((u32)(r_ebp+0xffffff70u), 0x0u);
    /* 006f8228: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 006f822a: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6f822fu); f_005caba4();
    /* 006f822f: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006f8232: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006f8235: mov dword ptr [ebp - 0x8c], eax */ W32((u32)(r_ebp+0xffffff74u), r_eax);
    /* 006f823b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006f823d: je 0x6f8416 */ if (fZ) goto L_006f8416;
L_006f8243:; BB(0x006f8243);
    /* 006f8243: mov dword ptr [ebp - 0x90], 1 */ W32((u32)(r_ebp+0xffffff70u), 0x1u);
    /* 006f824d: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 006f8254: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006f8257: mov ecx, eax */ r_ecx = r_eax;
    /* 006f8259: call 0x6fecb8 */ r_esp -= 4; W32(r_esp, 0x6f825eu); f_006fecb8();
    /* 006f825e: mov dword ptr [ebp - 0x90], 0 */ W32((u32)(r_ebp+0xffffff70u), 0x0u);
L_006f8268:; BB(0x006f8268);
    /* 006f8268: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006f826b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006f826e: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 006f8271: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006f8278: mov dword ptr [ebp - 0x88], 0 */ W32((u32)(r_ebp+0xffffff78u), 0x0u);
    /* 006f8282: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 006f8284: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6f8289u); f_005caba4();
    /* 006f8289: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006f828c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006f828f: mov dword ptr [ebp - 0x84], eax */ W32((u32)(r_ebp+0xffffff7cu), r_eax);
    /* 006f8295: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006f8297: je 0x6f840c */ if (fZ) goto L_006f840c;
L_006f829d:; BB(0x006f829d);
    /* 006f829d: mov dword ptr [ebp - 0x88], 1 */ W32((u32)(r_ebp+0xffffff78u), 0x1u);
    /* 006f82a7: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 006f82ae: push dword ptr [0xaca328] */ { u32 v = R32((u32)(0xaca328u)); r_esp -= 4; W32(r_esp, v); }
    /* 006f82b4: mov ecx, eax */ r_ecx = r_eax;
    /* 006f82b6: call 0x6f4ca4 */ r_esp -= 4; W32(r_esp, 0x6f82bbu); f_006f4ca4();
    /* 006f82bb: mov dword ptr [ebp - 0x88], 0 */ W32((u32)(r_ebp+0xffffff78u), 0x0u);
L_006f82c5:; BB(0x006f82c5);
    /* 006f82c5: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006f82c8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006f82cb: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 006f82ce: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006f82d5: mov dword ptr [edx + 0x28], 0 */ W32((u32)(r_edx+0x28u), 0x0u);
    /* 006f82dc: mov edx, dword ptr [edx + 0x24] */ r_edx = R32((u32)(r_edx+0x24u));
    /* 006f82df: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006f82e1: je 0x6f82f0 */ if (fZ) goto L_006f82f0;
L_006f82e3:; BB(0x006f82e3);
    /* 006f82e3: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 006f82e7: or eax, 0xffff0004 */ {  u32 a = r_eax; u32 b = 0xffff0004u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006f82ec: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_006f82f0:; BB(0x006f82f0);
    /* 006f82f0: push 0x96b8fc */ { u32 v = 0x96b8fcu; r_esp -= 4; W32(r_esp, v); }
    /* 006f82f5: call 0x81e114 */ r_esp -= 4; W32(r_esp, 0x6f82fau); f_0081e114();
    /* 006f82fa: fild dword ptr [0xaf0350] */ FPUSH((long double)(i32)R32((u32)(0xaf0350u)));
    /* 006f8300: fild dword ptr [0xaf0354] */ FPUSH((long double)(i32)R32((u32)(0xaf0354u)));
    /* 006f8306: fld dword ptr [0x96e27c] */ FPUSH(R_F32((u32)(0x96e27cu)));
    /* 006f830c: fmul dword ptr [0xaf0358] */ ST(0) = ST(0) * R_F32((u32)(0xaf0358u));
    /* 006f8312: fld dword ptr [0x96e278] */ FPUSH(R_F32((u32)(0x96e278u)));
    /* 006f8318: fmul dword ptr [0xaf035c] */ ST(0) = ST(0) * R_F32((u32)(0xaf035cu));
    /* 006f831e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006f8320: fstp dword ptr [ebp - 0x78] */ W_F32((u32)(r_ebp+0xffffff88u), ST(0)); FPOP();
    /* 006f8323: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 006f8325: fstp dword ptr [ebp - 0x58] */ W_F32((u32)(r_ebp+0xffffffa8u), ST(0)); FPOP();
    /* 006f8328: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006f832a: fstp dword ptr [ebp - 0x74] */ W_F32((u32)(r_ebp+0xffffff8cu), ST(0)); FPOP();
    /* 006f832d: fstp dword ptr [ebp - 0x54] */ W_F32((u32)(r_ebp+0xffffffacu), ST(0)); FPOP();
    /* 006f8330: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
    /* 006f8337: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
    /* 006f833e: lea eax, [ebp - 0x80] */ r_eax = (u32)(r_ebp+0xffffff80u);
    /* 006f8341: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006f8342: mov dword ptr [ebp - 0x48], 0x41a00000 */ W32((u32)(r_ebp+0xffffffb8u), 0x41a00000u);
    /* 006f8349: mov dword ptr [ebp - 0x44], 0x41700000 */ W32((u32)(r_ebp+0xffffffbcu), 0x41700000u);
    /* 006f8350: mov dword ptr [ebp - 0x40], 0x3f800000 */ W32((u32)(r_ebp+0xffffffc0u), 0x3f800000u);
    /* 006f8357: mov dword ptr [ebp - 0x3c], 0x3f59999a */ W32((u32)(r_ebp+0xffffffc4u), 0x3f59999au);
    /* 006f835e: call 0x4d434c */ r_esp -= 4; W32(r_esp, 0x6f8363u); f_004d434c();
    /* 006f8363: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 006f836a: lea eax, [ebp - 0x38] */ r_eax = (u32)(r_ebp+0xffffffc8u);
    /* 006f836d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006f836f: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 006f8376: push 0x1e3 */ { u32 v = 0x1e3u; r_esp -= 4; W32(r_esp, v); }
    /* 006f837b: mov dword ptr [ebp - 0x30], 0xc23c0000 */ W32((u32)(r_ebp+0xffffffd0u), 0xc23c0000u);
    /* 006f8382: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006f8383: call 0x50a0ec */ r_esp -= 4; W32(r_esp, 0x6f8388u); f_0050a0ec();
    /* 006f8388: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006f838b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006f838d: push 0x1e4 */ { u32 v = 0x1e4u; r_esp -= 4; W32(r_esp, v); }
    /* 006f8392: mov dword ptr [edx + 0x40], eax */ W32((u32)(r_edx+0x40u), r_eax);
    /* 006f8395: lea eax, [ebp - 0x38] */ r_eax = (u32)(r_ebp+0xffffffc8u);
    /* 006f8398: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006f8399: call 0x50a0ec */ r_esp -= 4; W32(r_esp, 0x6f839eu); f_0050a0ec();
    /* 006f839e: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006f83a1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006f83a3: push 0x1e5 */ { u32 v = 0x1e5u; r_esp -= 4; W32(r_esp, v); }
    /* 006f83a8: mov dword ptr [edx + 0x44], eax */ W32((u32)(r_edx+0x44u), r_eax);
    /* 006f83ab: lea eax, [ebp - 0x38] */ r_eax = (u32)(r_ebp+0xffffffc8u);
    /* 006f83ae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006f83af: call 0x50a0ec */ r_esp -= 4; W32(r_esp, 0x6f83b4u); f_0050a0ec();
    /* 006f83b4: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006f83b7: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 006f83be: mov dword ptr [edx + 0x48], eax */ W32((u32)(r_edx+0x48u), r_eax);
    /* 006f83c1: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 006f83c3: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6f83c8u); f_005caba4();
    /* 006f83c8: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006f83cb: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 006f83ce: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006f83d0: je 0x6f83f9 */ if (fZ) goto L_006f83f9;
L_006f83d2:; BB(0x006f83d2);
    /* 006f83d2: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 006f83d9: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 006f83e0: push 0x6fb7c0 */ { u32 v = 0x6fb7c0u; r_esp -= 4; W32(r_esp, v); }
    /* 006f83e5: mov ecx, eax */ r_ecx = r_eax;
    /* 006f83e7: push dword ptr [0xaca324] */ { u32 v = R32((u32)(0xaca324u)); r_esp -= 4; W32(r_esp, v); }
    /* 006f83ed: call 0x7889b0 */ r_esp -= 4; W32(r_esp, 0x6f83f2u); f_007889b0();
    /* 006f83f2: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_006f83f9:; BB(0x006f83f9);
    /* 006f83f9: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 006f83fc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006f83ff: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006f8406: mov esp, ebp */ r_esp = r_ebp;
    /* 006f8408: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006f8409: ret 4 */ FN_RET(0x006f8130); r_esp += 8; return;
L_006f840c:; BB(0x006f840c);
    /* 006f840c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006f840e: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006f8411: jmp 0x6f82c5 */ goto L_006f82c5;
L_006f8416:; BB(0x006f8416);
    /* 006f8416: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006f8418: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006f841b: jmp 0x6f8268 */ goto L_006f8268;
L_006f8420:; BB(0x006f8420);
    /* 006f8420: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006f8422: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006f8425: jmp 0x6f820e */ goto L_006f820e;
}

void f_006f842c(void) /* sub_6F842C */
{
    FN_ENTER(0x006f842c);
    /* 006f842c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006f842d: mov esi, ecx */ r_esi = r_ecx;
    /* 006f842f: call 0x81e1f4 */ r_esp -= 4; W32(r_esp, 0x6f8434u); f_0081e1f4();
    /* 006f8434: mov eax, dword ptr [esi + 0x34] */ r_eax = R32((u32)(r_esi+0x34u));
    /* 006f8437: cmp eax, dword ptr [esi + 0x38] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+0x38u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006f843a: jge 0x6f8461 */ if ((fS==fO)) goto L_006f8461;
L_006f843c:; BB(0x006f843c);
    /* 006f843c: mov ecx, 0xa9caa0 */ r_ecx = 0xa9caa0u;
    /* 006f8441: call 0x78f3e0 */ r_esp -= 4; W32(r_esp, 0x6f8446u); f_0078f3e0();
    /* 006f8446: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006f8448: jne 0x6f8453 */ if (!fZ) goto L_006f8453;
L_006f844a:; BB(0x006f844a);
    /* 006f844a: call 0x7c012c */ r_esp -= 4; W32(r_esp, 0x6f844fu); f_007c012c();
    /* 006f844f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006f8451: je 0x6f845a */ if (fZ) goto L_006f845a;
L_006f8453:; BB(0x006f8453);
    /* 006f8453: mov dword ptr [esi + 0x34], 0 */ W32((u32)(r_esi+0x34u), 0x0u);
L_006f845a:; BB(0x006f845a);
    /* 006f845a: mov ecx, esi */ r_ecx = r_esi;
    /* 006f845c: call 0x6f8464 */ r_esp -= 4; W32(r_esp, 0x6f8461u); f_006f8464();
L_006f8461:; BB(0x006f8461);
    /* 006f8461: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006f8462: ret  */ FN_RET(0x006f842c); r_esp += 4; return;
}

void f_006f8464(void) /* sub_6F8464 */
{
    FN_ENTER(0x006f8464);
    /* 006f8464: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006f8465: mov esi, ecx */ r_esi = r_ecx;
    /* 006f8467: mov ecx, dword ptr [esi + 0x24] */ r_ecx = R32((u32)(r_esi+0x24u));
    /* 006f846a: call 0x6ff1a4 */ r_esp -= 4; W32(r_esp, 0x6f846fu); f_006ff1a4();
    /* 006f846f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006f8471: je 0x6f8496 */ if (fZ) goto L_006f8496;
L_006f8473:; BB(0x006f8473);
    /* 006f8473: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 006f8475: call 0x7a6198 */ r_esp -= 4; W32(r_esp, 0x6f847au); f_007a6198();
    /* 006f847a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006f847b: mov ecx, esi */ r_ecx = r_esi;
    /* 006f847d: call 0x6f8498 */ r_esp -= 4; W32(r_esp, 0x6f8482u); f_006f8498();
    /* 006f8482: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006f8484: je 0x6f8496 */ if (fZ) goto L_006f8496;
L_006f8486:; BB(0x006f8486);
    /* 006f8486: mov ecx, esi */ r_ecx = r_esi;
    /* 006f8488: call 0x6f8528 */ r_esp -= 4; W32(r_esp, 0x6f848du); f_006f8528();
    /* 006f848d: mov ecx, esi */ r_ecx = r_esi;
    /* 006f848f: call dword ptr [eax*4 + 0x9d04c8] */ { u32 t = R32((u32)(r_eax*4+0x9d04c8u)); r_esp -= 4; W32(r_esp, 0x6f8496u); call_ind(t); }
L_006f8496:; BB(0x006f8496);
    /* 006f8496: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006f8497: ret  */ FN_RET(0x006f8464); r_esp += 4; return;
}

void f_006f8498(void) /* sub_6F8498 */
{
    FN_ENTER(0x006f8498);
    /* 006f8498: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006f8499: mov ebp, esp */ r_ebp = r_esp;
    /* 006f849b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006f849d: push 0x8eff60 */ { u32 v = 0x8eff60u; r_esp -= 4; W32(r_esp, v); }
    /* 006f84a2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006f84a8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006f84a9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006f84b0: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006f84b3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006f84b6: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 006f84b9: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 006f84bc: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 006f84bf: mov edx, dword ptr [ecx + 0x3c] */ r_edx = R32((u32)(r_ecx+0x3cu));
    /* 006f84c2: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 006f84c5: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006f84c8: jne 0x6f8514 */ if (!fZ) goto L_006f8514;
L_006f84ca:; BB(0x006f84ca);
    /* 006f84ca: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 006f84d1: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 006f84d3: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6f84d8u); f_005caba4();
    /* 006f84d8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006f84d9: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 006f84dc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006f84de: je 0x6f8508 */ if (fZ) goto L_006f8508;
L_006f84e0:; BB(0x006f84e0);
    /* 006f84e0: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 006f84e7: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006f84ee: push 0x6fb804 */ { u32 v = 0x6fb804u; r_esp -= 4; W32(r_esp, v); }
    /* 006f84f3: push dword ptr [0xaca324] */ { u32 v = R32((u32)(0xaca324u)); r_esp -= 4; W32(r_esp, v); }
    /* 006f84f9: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006f84fc: call 0x788938 */ r_esp -= 4; W32(r_esp, 0x6f8501u); f_00788938();
    /* 006f8501: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_006f8508:; BB(0x006f8508);
    /* 006f8508: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006f850b: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 006f850e: or edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 006f8511: mov dword ptr [eax + 0x3c], edx */ W32((u32)(r_eax+0x3cu), r_edx);
L_006f8514:; BB(0x006f8514);
    /* 006f8514: and edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006f8517: mov eax, edx */ r_eax = r_edx;
    /* 006f8519: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006f851c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006f8523: mov esp, ebp */ r_esp = r_ebp;
    /* 006f8525: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006f8526: ret  */ FN_RET(0x006f8498); r_esp += 4; return;
}

void f_006f8528(void) /* sub_6F8528 */
{
    FN_ENTER(0x006f8528);
    /* 006f8528: mov ecx, dword ptr [ecx + 0x24] */ r_ecx = R32((u32)(r_ecx+0x24u));
    /* 006f852b: call 0x4076b0 */ r_esp -= 4; W32(r_esp, 0x6f8530u); f_004076b0();
    /* 006f8530: ret  */ FN_RET(0x006f8528); r_esp += 4; return;
}

void f_006f8534(void) /* sub_6F8534 */
{
    FN_ENTER(0x006f8534);
    /* 006f8534: call 0x824860 */ r_esp -= 4; W32(r_esp, 0x6f8539u); f_00824860();
    /* 006f8539: ret  */ FN_RET(0x006f8534); r_esp += 4; return;
}

void f_006f853c(void) /* sub_6F853C */
{
    FN_ENTER(0x006f853c);
    /* 006f853c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006f853d: mov ebp, esp */ r_ebp = r_esp;
    /* 006f853f: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006f8542: mov dword ptr [ebp - 4], edi */ W32((u32)(r_ebp+0xfffffffcu), r_edi);
    /* 006f8545: mov dword ptr [ebp - 0xc], esi */ W32((u32)(r_ebp+0xfffffff4u), r_esi);
    /* 006f8548: mov dword ptr [ebp - 8], ebx */ W32((u32)(r_ebp+0xfffffff8u), r_ebx);
    /* 006f854b: pushal  */ { u32 sp = r_esp; r_esp -= 32; W32(r_esp, r_edi); W32(r_esp + 4, r_esi); W32(r_esp + 8, r_ebp); W32(r_esp + 12, sp); W32(r_esp + 16, r_ebx); W32(r_esp + 20, r_edx); W32(r_esp + 24, r_ecx); W32(r_esp + 28, r_eax); }
    /* 006f854c: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 006f854e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006f8550: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006f8552: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006f8554: call dword ptr [0x8f8348] */ { u32 t = R32((u32)(0x8f8348u)); r_esp -= 4; W32(r_esp, 0x6f855au); call_ind(t); }
    /* 006f855a: popal  */ { r_edi = R32(r_esp); r_esi = R32(r_esp + 4); r_ebp = R32(r_esp + 8); r_ebx = R32(r_esp + 16); r_edx = R32(r_esp + 20); r_ecx = R32(r_esp + 24); r_eax = R32(r_esp + 28); r_esp += 32; }
    /* 006f855b: pushal  */ { u32 sp = r_esp; r_esp -= 32; W32(r_esp, r_edi); W32(r_esp + 4, r_esi); W32(r_esp + 8, r_ebp); W32(r_esp + 12, sp); W32(r_esp + 16, r_ebx); W32(r_esp + 20, r_edx); W32(r_esp + 24, r_ecx); W32(r_esp + 28, r_eax); }
    /* 006f855c: jmp 0x6fb77d */ goto L_006fb77d;
L_006fb77d:; BB(0x006fb77d);
    /* 006fb77d: popal  */ { r_edi = R32(r_esp); r_esi = R32(r_esp + 4); r_ebp = R32(r_esp + 8); r_ebx = R32(r_esp + 16); r_edx = R32(r_esp + 20); r_ecx = R32(r_esp + 24); r_eax = R32(r_esp + 28); r_esp += 32; }
    /* 006fb77e: call 0x824860 */ r_esp -= 4; W32(r_esp, 0x6fb783u); f_00824860();
    /* 006fb783: pushal  */ { u32 sp = r_esp; r_esp -= 32; W32(r_esp, r_edi); W32(r_esp + 4, r_esi); W32(r_esp + 8, r_ebp); W32(r_esp + 12, sp); W32(r_esp + 16, r_ebx); W32(r_esp + 20, r_edx); W32(r_esp + 24, r_ecx); W32(r_esp + 28, r_eax); }
    /* 006fb784: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006fb786: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006fb788: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006fb78a: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006fb78c: call dword ptr [0x8f8348] */ { u32 t = R32((u32)(0x8f8348u)); r_esp -= 4; W32(r_esp, 0x6fb792u); call_ind(t); }
    /* 006fb792: jmp 0x6fb7b2 */ goto L_006fb7b2;
L_006fb7b2:; BB(0x006fb7b2);
    /* 006fb7b2: popal  */ { r_edi = R32(r_esp); r_esi = R32(r_esp + 4); r_ebp = R32(r_esp + 8); r_ebx = R32(r_esp + 16); r_edx = R32(r_esp + 20); r_ecx = R32(r_esp + 24); r_eax = R32(r_esp + 28); r_esp += 32; }
    /* 006fb7b3: mov ebx, dword ptr [ebp - 8] */ r_ebx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006fb7b6: mov esi, dword ptr [ebp - 0xc] */ r_esi = R32((u32)(r_ebp+0xfffffff4u));
    /* 006fb7b9: mov edi, dword ptr [ebp - 4] */ r_edi = R32((u32)(r_ebp+0xfffffffcu));
    /* 006fb7bc: mov esp, ebp */ r_esp = r_ebp;
    /* 006fb7be: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006fb7bf: ret  */ FN_RET(0x006f853c); r_esp += 4; return;
}

