#include "protos.h"

void f_005c6018(void) /* sub_5C6018 */
{
    FN_ENTER(0x005c6018);
    /* 005c6018: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005c6019: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005c601a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c601b: mov edi, ecx */ r_edi = r_ecx;
    /* 005c601d: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 005c6021: mov eax, dword ptr [edi + 0xe4] */ r_eax = R32((u32)(r_edi+0xe4u));
    /* 005c6027: test eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c602c: je 0x5c60a0 */ if (fZ) goto L_005c60a0;
L_005c602e:; BB(0x005c602e);
    /* 005c602e: mov edx, dword ptr [edi + 0x13c] */ r_edx = R32((u32)(r_edi+0x13cu));
    /* 005c6034: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c6036: je 0x5c6051 */ if (fZ) goto L_005c6051;
L_005c6038:; BB(0x005c6038);
    /* 005c6038: lea eax, [edi + 0xd0] */ r_eax = (u32)(r_edi+0xd0u);
    /* 005c603e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c603f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005c6040: push dword ptr [edi + 0xac] */ { u32 v = R32((u32)(r_edi+0xacu)); r_esp -= 4; W32(r_esp, v); }
    /* 005c6046: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5c6048u); call_ind(t); }
    /* 005c6048: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c604b: mov eax, dword ptr [edi + 0xe4] */ r_eax = R32((u32)(r_edi+0xe4u));
L_005c6051:; BB(0x005c6051);
    /* 005c6051: test eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c6056: je 0x5c60e8 */ if (fZ) goto L_005c60e8;
L_005c605c:; BB(0x005c605c);
    /* 005c605c: push dword ptr [edi + 0xac] */ { u32 v = R32((u32)(r_edi+0xacu)); r_esp -= 4; W32(r_esp, v); }
    /* 005c6062: call 0x5c5528 */ r_esp -= 4; W32(r_esp, 0x5c6067u); f_005c5528();
    /* 005c6067: mov ebp, eax */ r_ebp = r_eax;
    /* 005c6069: movzx edx, word ptr [edi + 0xa8] */ r_edx = (u32)R16((u32)(r_edi+0xa8u));
    /* 005c6070: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c6071: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x5c6076u); f_0068d5a8();
    /* 005c6076: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c6079: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c607b: je 0x5c60e8 */ if (fZ) goto L_005c60e8;
L_005c607d:; BB(0x005c607d);
    /* 005c607d: push dword ptr [esi + 4] */ { u32 v = R32((u32)(r_esi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005c6080: push dword ptr [edi + 0xb4] */ { u32 v = R32((u32)(r_edi+0xb4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005c6086: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 005c6089: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005c608b: push dword ptr [edi + 0xb8] */ { u32 v = R32((u32)(r_edi+0xb8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005c6091: push dword ptr [esi] */ { u32 v = R32((u32)(r_esi)); r_esp -= 4; W32(r_esp, v); }
    /* 005c6093: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c6094: call dword ptr [edx + 0xf8] */ { u32 t = R32((u32)(r_edx+0xf8u)); r_esp -= 4; W32(r_esp, 0x5c609au); call_ind(t); }
    /* 005c609a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c609b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005c609c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005c609d: ret 4 */ FN_RET(0x005c6018); r_esp += 8; return;
L_005c60a0:; BB(0x005c60a0);
    /* 005c60a0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005c60a1: mov ecx, edi */ r_ecx = r_edi;
    /* 005c60a3: call 0x5c5dd0 */ r_esp -= 4; W32(r_esp, 0x5c60a8u); f_005c5dd0();
    /* 005c60a8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c60aa: je 0x5c60e8 */ if (fZ) goto L_005c60e8;
L_005c60ac:; BB(0x005c60ac);
    /* 005c60ac: mov edx, dword ptr [edi + 0x13c] */ r_edx = R32((u32)(r_edi+0x13cu));
    /* 005c60b2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c60b4: je 0x5c60c9 */ if (fZ) goto L_005c60c9;
L_005c60b6:; BB(0x005c60b6);
    /* 005c60b6: lea eax, [edi + 0xd0] */ r_eax = (u32)(r_edi+0xd0u);
    /* 005c60bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c60bd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005c60be: push dword ptr [edi + 0xac] */ { u32 v = R32((u32)(r_edi+0xacu)); r_esp -= 4; W32(r_esp, v); }
    /* 005c60c4: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5c60c6u); call_ind(t); }
    /* 005c60c6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005c60c9:; BB(0x005c60c9);
    /* 005c60c9: mov eax, dword ptr [edi + 0xe4] */ r_eax = R32((u32)(r_edi+0xe4u));
    /* 005c60cf: test eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c60d4: je 0x5c60e8 */ if (fZ) goto L_005c60e8;
L_005c60d6:; BB(0x005c60d6);
    /* 005c60d6: fld dword ptr [edi + 0xb4] */ FPUSH(R_F32((u32)(r_edi+0xb4u)));
    /* 005c60dc: fmul dword ptr [0x92bc84] */ ST(0) = ST(0) * R_F32((u32)(0x92bc84u));
    /* 005c60e2: fstp dword ptr [edi + 0xb4] */ W_F32((u32)(r_edi+0xb4u), ST(0)); FPOP();
L_005c60e8:; BB(0x005c60e8);
    /* 005c60e8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c60e9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005c60ea: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005c60eb: ret 4 */ FN_RET(0x005c6018); r_esp += 8; return;
}

void f_005c60f0(void) /* sub_5C60F0 */
{
    FN_ENTER(0x005c60f0);
    /* 005c60f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c60f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005c60f3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005c60f5: push 0x8d98fc */ { u32 v = 0x8d98fcu; r_esp -= 4; W32(r_esp, v); }
    /* 005c60fa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005c6100: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c6101: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005c6108: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c610b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005c610e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005c6111: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005c6114: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005c6117: push 0x144 */ { u32 v = 0x144u; r_esp -= 4; W32(r_esp, v); }
    /* 005c611c: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005c6123: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5c6128u); f_005caba4();
    /* 005c6128: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005c6129: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005c612c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c612e: je 0x5c6153 */ if (fZ) goto L_005c6153;
L_005c6130:; BB(0x005c6130);
    /* 005c6130: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005c6137: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005c613e: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005c6141: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005c6144: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c6147: call 0x5c6164 */ r_esp -= 4; W32(r_esp, 0x5c614cu); f_005c6164();
    /* 005c614c: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005c6153:; BB(0x005c6153);
    /* 005c6153: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c6156: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005c615d: mov esp, ebp */ r_esp = r_ebp;
    /* 005c615f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c6160: ret  */ FN_RET(0x005c60f0); r_esp += 4; return;
}

void f_005c6164(void) /* sub_5C6164 */
{
    FN_ENTER(0x005c6164);
    /* 005c6164: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005c6165: mov ebx, esp */ r_ebx = r_esp;
    /* 005c6167: and esp, 0xfffffff8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 005c616a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c616b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c616c: mov ebp, dword ptr [ebx + 4] */ r_ebp = R32((u32)(r_ebx+0x4u));
    /* 005c616f: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 005c6173: mov ebp, esp */ r_ebp = r_esp;
    /* 005c6175: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005c6177: push 0x8d991a */ { u32 v = 0x8d991au; r_esp -= 4; W32(r_esp, v); }
    /* 005c617c: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005c6182: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c6183: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005c618a: sub esp, 0x6c */ {  u32 a = r_esp; u32 b = 0x6cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c618d: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005c6190: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005c6193: mov dword ptr [ebp - 0x60], edi */ W32((u32)(r_ebp+0xffffffa0u), r_edi);
    /* 005c6196: mov dword ptr [ebp - 0x5c], esi */ W32((u32)(r_ebp+0xffffffa4u), r_esi);
    /* 005c6199: mov eax, dword ptr [ebx + 0xc] */ r_eax = R32((u32)(r_ebx+0xcu));
    /* 005c619c: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005c619f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c61a0: push dword ptr [ebx + 8] */ { u32 v = R32((u32)(r_ebx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005c61a3: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 005c61a6: call 0x5c6a78 */ r_esp -= 4; W32(r_esp, 0x5c61abu); f_005c6a78();
    /* 005c61ab: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005c61b2: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c61b5: mov dword ptr [eax], 0xb0c1bc */ W32((u32)(r_eax), 0xb0c1bcu);
    /* 005c61bb: mov dword ptr [eax + 0xe0], 0 */ W32((u32)(r_eax+0xe0u), 0x0u);
    /* 005c61c5: mov edx, dword ptr [0x9c210c] */ r_edx = R32((u32)(0x9c210cu));
    /* 005c61cb: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 005c61ce: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005c61d1: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 005c61d3: mov dword ptr [eax + 0xc4], ecx */ W32((u32)(r_eax+0xc4u), r_ecx);
    /* 005c61d9: mov esi, dword ptr [edx + 4] */ r_esi = R32((u32)(r_edx+0x4u));
    /* 005c61dc: mov dword ptr [eax + 0xc8], esi */ W32((u32)(r_eax+0xc8u), r_esi);
    /* 005c61e2: mov edi, dword ptr [edx + 8] */ r_edi = R32((u32)(r_edx+0x8u));
    /* 005c61e5: mov dword ptr [eax + 0xcc], edi */ W32((u32)(r_eax+0xccu), r_edi);
    /* 005c61eb: mov edx, dword ptr [edx + 0x40] */ r_edx = R32((u32)(r_edx+0x40u));
    /* 005c61ee: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005c61f1: je 0x5c62d3 */ if (fZ) goto L_005c62d3;
L_005c61f7:; BB(0x005c61f7);
    /* 005c61f7: mov edi, dword ptr [ebp - 0x3c] */ r_edi = R32((u32)(r_ebp+0xffffffc4u));
    /* 005c61fa: mov edx, dword ptr [edi + 0x2c] */ r_edx = R32((u32)(r_edi+0x2cu));
    /* 005c61fd: mov dword ptr [eax + 0xd0], edx */ W32((u32)(r_eax+0xd0u), r_edx);
    /* 005c6203: mov esi, dword ptr [edi + 0x30] */ r_esi = R32((u32)(r_edi+0x30u));
    /* 005c6206: mov dword ptr [eax + 0xd4], esi */ W32((u32)(r_eax+0xd4u), r_esi);
    /* 005c620c: mov ecx, dword ptr [edi + 0x34] */ r_ecx = R32((u32)(r_edi+0x34u));
    /* 005c620f: mov dword ptr [eax + 0xd8], ecx */ W32((u32)(r_eax+0xd8u), r_ecx);
    /* 005c6215: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c6218: add ecx, 0xd0 */ {  u32 a = r_ecx; u32 b = 0xd0u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c621e: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x5c6223u); f_0082df08();
    /* 005c6223: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005c6225: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c6228: fld dword ptr [eax + 0xd0] */ FPUSH(R_F32((u32)(r_eax+0xd0u)));
    /* 005c622e: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 005c6230: fld dword ptr [eax + 0xd8] */ FPUSH(R_F32((u32)(r_eax+0xd8u)));
    /* 005c6236: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 005c6238: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 005c623a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005c623b: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005c623e: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x5c6243u); f_0082dc9c();
    /* 005c6243: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c6246: fld dword ptr [edx + 0xd4] */ FPUSH(R_F32((u32)(r_edx+0xd4u)));
    /* 005c624c: fst dword ptr [ebp - 0x50] */ W_F32((u32)(r_ebp+0xffffffb0u), ST(0));
    /* 005c624f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005c6251: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 005c6253: fmul qword ptr [0x92bc60] */ ST(0) = ST(0) * R_F64((u32)(0x92bc60u));
    /* 005c6259: fdiv qword ptr [0x92bc58] */ ST(0) = ST(0) / R_F64((u32)(0x92bc58u));
    /* 005c625f: fld dword ptr [edx + 0xd8] */ FPUSH(R_F32((u32)(r_edx+0xd8u)));
    /* 005c6265: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005c6267: fnstcw word ptr [ebp - 0x78] */ W16((u32)(r_ebp+0xffffff88u), fcw);
    /* 005c626a: movzx eax, word ptr [ebp - 0x78] */ r_eax = (u32)R16((u32)(r_ebp+0xffffff88u));
    /* 005c626e: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005c6273: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 005c6276: fldcw word ptr [ebp - 0x70] */ fcw = R16((u32)(r_ebp+0xffffff90u));
    /* 005c6279: fistp dword ptr [ebp - 0x68] */ W32((u32)(r_ebp+0xffffff98u), (u32)fx_int32(ST(0))); FPOP();
    /* 005c627c: fldcw word ptr [ebp - 0x78] */ fcw = R16((u32)(r_ebp+0xffffff88u));
    /* 005c627f: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 005c6282: fld dword ptr [edx + 0xd0] */ FPUSH(R_F32((u32)(r_edx+0xd0u)));
    /* 005c6288: fst dword ptr [ebp - 0x4c] */ W_F32((u32)(r_ebp+0xffffffb4u), ST(0));
    /* 005c628b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005c628d: fst dword ptr [ebp - 0x48] */ W_F32((u32)(r_ebp+0xffffffb8u), ST(0));
    /* 005c6290: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005c6292: mov dword ptr [edx + 0xf0], eax */ W32((u32)(r_edx+0xf0u), r_eax);
    /* 005c6298: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 005c629a: fmul qword ptr [0x92bc60] */ ST(0) = ST(0) * R_F64((u32)(0x92bc60u));
    /* 005c62a0: fdiv qword ptr [0x92bc58] */ ST(0) = ST(0) / R_F64((u32)(0x92bc58u));
    /* 005c62a6: fnstcw word ptr [ebp - 0x78] */ W16((u32)(r_ebp+0xffffff88u), fcw);
    /* 005c62a9: movzx eax, word ptr [ebp - 0x78] */ r_eax = (u32)R16((u32)(r_ebp+0xffffff88u));
    /* 005c62ad: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005c62b2: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 005c62b5: fldcw word ptr [ebp - 0x70] */ fcw = R16((u32)(r_ebp+0xffffff90u));
    /* 005c62b8: fistp dword ptr [ebp - 0x68] */ W32((u32)(r_ebp+0xffffff98u), (u32)fx_int32(ST(0))); FPOP();
    /* 005c62bb: fldcw word ptr [ebp - 0x78] */ fcw = R16((u32)(r_ebp+0xffffff88u));
    /* 005c62be: mov esi, dword ptr [ebp - 0x68] */ r_esi = R32((u32)(r_ebp+0xffffff98u));
    /* 005c62c1: mov dword ptr [edx + 0xf4], esi */ W32((u32)(r_edx+0xf4u), r_esi);
    /* 005c62c7: mov dword ptr [edx + 0xf8], 0 */ W32((u32)(r_edx+0xf8u), 0x0u);
    /* 005c62d1: jmp 0x5c6339 */ goto L_005c6339;
L_005c62d3:; BB(0x005c62d3);
    /* 005c62d3: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 005c62d6: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 005c62d9: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x5c62deu); f_0082dcbc();
    /* 005c62de: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c62e1: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005c62e4: fstp dword ptr [eax + 0xd0] */ W_F32((u32)(r_eax+0xd0u), ST(0)); FPOP();
    /* 005c62ea: mov dword ptr [eax + 0xd4], 0 */ W32((u32)(r_eax+0xd4u), 0x0u);
    /* 005c62f4: mov ecx, dword ptr [edx + 0x28] */ r_ecx = R32((u32)(r_edx+0x28u));
    /* 005c62f7: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x5c62fcu); f_0082ddd8();
    /* 005c62fc: fstp dword ptr [ebp - 0x48] */ W_F32((u32)(r_ebp+0xffffffb8u), ST(0)); FPOP();
    /* 005c62ff: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c6302: fld dword ptr [ebp - 0x48] */ FPUSH(R_F32((u32)(r_ebp+0xffffffb8u)));
    /* 005c6305: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 005c6308: fld dword ptr [edx + 0xd4] */ FPUSH(R_F32((u32)(r_edx+0xd4u)));
    /* 005c630e: fld dword ptr [edx + 0xd0] */ FPUSH(R_F32((u32)(r_edx+0xd0u)));
    /* 005c6314: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 005c6316: fstp dword ptr [edx + 0xd8] */ W_F32((u32)(r_edx+0xd8u), ST(0)); FPOP();
    /* 005c631c: fstp dword ptr [ebp - 0x50] */ W_F32((u32)(r_ebp+0xffffffb0u), ST(0)); FPOP();
    /* 005c631f: fstp dword ptr [ebp - 0x4c] */ W_F32((u32)(r_ebp+0xffffffb4u), ST(0)); FPOP();
    /* 005c6322: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005c6324: mov dword ptr [edx + 0xf0], ecx */ W32((u32)(r_edx+0xf0u), r_ecx);
    /* 005c632a: mov esi, dword ptr [eax + 0x28] */ r_esi = R32((u32)(r_eax+0x28u));
    /* 005c632d: mov dword ptr [edx + 0xf4], esi */ W32((u32)(r_edx+0xf4u), r_esi);
    /* 005c6333: mov dword ptr [edx + 0xf8], ecx */ W32((u32)(r_edx+0xf8u), r_ecx);
L_005c6339:; BB(0x005c6339);
    /* 005c6339: fld dword ptr [ebp - 0x4c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffb4u)));
    /* 005c633c: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 005c633f: fmul dword ptr [eax + 0x38] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x38u));
    /* 005c6342: fld dword ptr [ebp - 0x50] */ FPUSH(R_F32((u32)(r_ebp+0xffffffb0u)));
    /* 005c6345: fld dword ptr [ebp - 0x48] */ FPUSH(R_F32((u32)(r_ebp+0xffffffb8u)));
    /* 005c6348: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 005c634a: fstp dword ptr [edx + 0xd0] */ W_F32((u32)(r_edx+0xd0u), ST(0)); FPOP();
    /* 005c6350: fmul dword ptr [eax + 0x38] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x38u));
    /* 005c6353: fstp dword ptr [edx + 0xd4] */ W_F32((u32)(r_edx+0xd4u), ST(0)); FPOP();
    /* 005c6359: fmul dword ptr [eax + 0x38] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x38u));
    /* 005c635c: mov dword ptr [edx + 0x30], esi */ W32((u32)(r_edx+0x30u), r_esi);
    /* 005c635f: fstp dword ptr [edx + 0xd8] */ W_F32((u32)(r_edx+0xd8u), ST(0)); FPOP();
    /* 005c6365: fld dword ptr [eax + 0x3c] */ FPUSH(R_F32((u32)(r_eax+0x3cu)));
    /* 005c6368: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 005c636a: fstp dword ptr [edx + 0xdc] */ W_F32((u32)(r_edx+0xdcu), ST(0)); FPOP();
    /* 005c6370: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 005c6373: mov dword ptr [edx + 0xe8], ecx */ W32((u32)(r_edx+0xe8u), r_ecx);
    /* 005c6379: mov esi, dword ptr [eax + 0x48] */ r_esi = R32((u32)(r_eax+0x48u));
    /* 005c637c: mov dword ptr [edx + 0xec], esi */ W32((u32)(r_edx+0xecu), r_esi);
    /* 005c6382: mov edi, dword ptr [eax + 0x4c] */ r_edi = R32((u32)(r_eax+0x4cu));
    /* 005c6385: mov dword ptr [edx + 0x108], edi */ W32((u32)(r_edx+0x108u), r_edi);
    /* 005c638b: mov ecx, dword ptr [eax + 0x4c] */ r_ecx = R32((u32)(r_eax+0x4cu));
    /* 005c638e: mov dword ptr [edx + 0x10c], ecx */ W32((u32)(r_edx+0x10cu), r_ecx);
    /* 005c6394: mov ecx, dword ptr [eax + 0x4c] */ r_ecx = R32((u32)(r_eax+0x4cu));
    /* 005c6397: mov dword ptr [edx + 0x110], ecx */ W32((u32)(r_edx+0x110u), r_ecx);
    /* 005c639d: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 005c63a0: mov dword ptr [edx + 0xfc], ecx */ W32((u32)(r_edx+0xfcu), r_ecx);
    /* 005c63a6: mov ecx, dword ptr [eax + 0x54] */ r_ecx = R32((u32)(r_eax+0x54u));
    /* 005c63a9: mov dword ptr [edx + 0x100], ecx */ W32((u32)(r_edx+0x100u), r_ecx);
    /* 005c63af: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 005c63b2: mov dword ptr [edx + 0x104], ecx */ W32((u32)(r_edx+0x104u), r_ecx);
    /* 005c63b8: mov dword ptr [edx + 0x120], 0x3f800000 */ W32((u32)(r_edx+0x120u), 0x3f800000u);
    /* 005c63c2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005c63c4: mov dword ptr [edx + 0x114], ecx */ W32((u32)(r_edx+0x114u), r_ecx);
    /* 005c63ca: mov dword ptr [edx + 0x118], ecx */ W32((u32)(r_edx+0x118u), r_ecx);
    /* 005c63d0: mov dword ptr [edx + 0x124], 0x3f800000 */ W32((u32)(r_edx+0x124u), 0x3f800000u);
    /* 005c63da: mov dword ptr [edx + 0x11c], ecx */ W32((u32)(r_edx+0x11cu), r_ecx);
    /* 005c63e0: mov dword ptr [edx + 0xe0], ecx */ W32((u32)(r_edx+0xe0u), r_ecx);
    /* 005c63e6: mov dword ptr [edx + 0x128], 0x3f800000 */ W32((u32)(r_edx+0x128u), 0x3f800000u);
    /* 005c63f0: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 005c63f3: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005c63f5: jne 0x5c6406 */ if (!fZ) goto L_005c6406;
L_005c63f7:; BB(0x005c63f7);
    /* 005c63f7: mov dword ptr [edx + 0x12c], 0 */ W32((u32)(r_edx+0x12cu), 0x0u);
    /* 005c6401: jmp 0x5c64bc */ goto L_005c64bc;
L_005c6406:; BB(0x005c6406);
    /* 005c6406: mov edi, dword ptr [0x92bc44] */ r_edi = R32((u32)(0x92bc44u));
    /* 005c640c: mov ecx, dword ptr [0x92bc48] */ r_ecx = R32((u32)(0x92bc48u));
    /* 005c6412: mov eax, dword ptr [0x92bc4c] */ r_eax = R32((u32)(0x92bc4cu));
    /* 005c6417: mov esi, dword ptr [ebp - 0x3c] */ r_esi = R32((u32)(r_ebp+0xffffffc4u));
    /* 005c641a: fld dword ptr [esi + 0x64] */ FPUSH(R_F32((u32)(r_esi+0x64u)));
    /* 005c641d: fld dword ptr [0x92bc78] */ FPUSH(R_F32((u32)(0x92bc78u)));
    /* 005c6423: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 005c6425: mov dword ptr [ebp - 0x34], edi */ W32((u32)(r_ebp+0xffffffccu), r_edi);
    /* 005c6428: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 005c642b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c642c: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005c642f: mov eax, dword ptr [0x92bc50] */ r_eax = R32((u32)(0x92bc50u));
    /* 005c6434: lea ecx, [edx + 0x24] */ r_ecx = (u32)(r_edx+0x24u);
    /* 005c6437: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005c643a: mov eax, dword ptr [esi + 0x5c] */ r_eax = R32((u32)(r_esi+0x5cu));
    /* 005c643d: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 005c6440: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005c6442: fnstcw word ptr [ebp - 0x78] */ W16((u32)(r_ebp+0xffffff88u), fcw);
    /* 005c6445: movzx eax, word ptr [ebp - 0x78] */ r_eax = (u32)R16((u32)(r_ebp+0xffffff88u));
    /* 005c6449: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005c644e: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 005c6451: fldcw word ptr [ebp - 0x70] */ fcw = R16((u32)(r_ebp+0xffffff90u));
    /* 005c6454: fistp qword ptr [ebp - 0x68] */ W64((u32)(r_ebp+0xffffff98u), (u64)fx_int64(ST(0))); FPOP();
    /* 005c6457: fldcw word ptr [ebp - 0x78] */ fcw = R16((u32)(r_ebp+0xffffff88u));
    /* 005c645a: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 005c645d: fld dword ptr [esi + 0x68] */ FPUSH(R_F32((u32)(r_esi+0x68u)));
    /* 005c6460: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 005c6462: mov byte ptr [ebp - 0x2f], al */ W8((u32)(r_ebp+0xffffffd1u), (u8)r_eax);
    /* 005c6465: fnstcw word ptr [ebp - 0x78] */ W16((u32)(r_ebp+0xffffff88u), fcw);
    /* 005c6468: movzx eax, word ptr [ebp - 0x78] */ r_eax = (u32)R16((u32)(r_ebp+0xffffff88u));
    /* 005c646c: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005c6471: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 005c6474: fldcw word ptr [ebp - 0x70] */ fcw = R16((u32)(r_ebp+0xffffff90u));
    /* 005c6477: fistp qword ptr [ebp - 0x68] */ W64((u32)(r_ebp+0xffffff98u), (u64)fx_int64(ST(0))); FPOP();
    /* 005c647a: fldcw word ptr [ebp - 0x78] */ fcw = R16((u32)(r_ebp+0xffffff88u));
    /* 005c647d: fld dword ptr [esi + 0x6c] */ FPUSH(R_F32((u32)(r_esi+0x6cu)));
    /* 005c6480: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 005c6482: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 005c6485: mov byte ptr [ebp - 0x2e], al */ W8((u32)(r_ebp+0xffffffd2u), (u8)r_eax);
    /* 005c6488: fnstcw word ptr [ebp - 0x78] */ W16((u32)(r_ebp+0xffffff88u), fcw);
    /* 005c648b: movzx eax, word ptr [ebp - 0x78] */ r_eax = (u32)R16((u32)(r_ebp+0xffffff88u));
    /* 005c648f: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005c6494: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 005c6497: fldcw word ptr [ebp - 0x70] */ fcw = R16((u32)(r_ebp+0xffffff90u));
    /* 005c649a: fistp qword ptr [ebp - 0x68] */ W64((u32)(r_ebp+0xffffff98u), (u64)fx_int64(ST(0))); FPOP();
    /* 005c649d: fldcw word ptr [ebp - 0x78] */ fcw = R16((u32)(r_ebp+0xffffff88u));
    /* 005c64a0: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 005c64a3: mov byte ptr [ebp - 0x2d], al */ W8((u32)(r_ebp+0xffffffd3u), (u8)r_eax);
    /* 005c64a6: lea eax, [ebp - 0x38] */ r_eax = (u32)(r_ebp+0xffffffc8u);
    /* 005c64a9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c64aa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c64ab: call 0x5dd7e8 */ r_esp -= 4; W32(r_esp, 0x5c64b0u); f_005dd7e8();
    /* 005c64b0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c64b3: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c64b6: mov dword ptr [edx + 0x12c], eax */ W32((u32)(r_edx+0x12cu), r_eax);
L_005c64bc:; BB(0x005c64bc);
    /* 005c64bc: mov edi, dword ptr [ebp - 0x3c] */ r_edi = R32((u32)(r_ebp+0xffffffc4u));
    /* 005c64bf: mov eax, dword ptr [edi + 0x70] */ r_eax = R32((u32)(r_edi+0x70u));
    /* 005c64c2: mov dword ptr [edx + 0x138], eax */ W32((u32)(r_edx+0x138u), r_eax);
    /* 005c64c8: mov ecx, dword ptr [edi + 0x74] */ r_ecx = R32((u32)(r_edi+0x74u));
    /* 005c64cb: mov dword ptr [edx + 0x13c], ecx */ W32((u32)(r_edx+0x13cu), r_ecx);
    /* 005c64d1: mov esi, dword ptr [edi + 0x40] */ r_esi = R32((u32)(r_edi+0x40u));
    /* 005c64d4: mov dword ptr [edx + 0xe4], esi */ W32((u32)(r_edx+0xe4u), r_esi);
    /* 005c64da: mov edx, dword ptr [edi + 0x40] */ r_edx = R32((u32)(r_edi+0x40u));
    /* 005c64dd: test edx, 0x800 */ {  u32 a = r_edx; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c64e3: je 0x5c662f */ if (fZ) goto L_005c662f;
L_005c64e9:; BB(0x005c64e9);
    /* 005c64e9: call 0x7b8cec */ r_esp -= 4; W32(r_esp, 0x5c64eeu); f_007b8cec();
    /* 005c64ee: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c64f1: add eax, 0x1c */ {  u32 a = r_eax; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c64f4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c64f5: call 0x7b8d60 */ r_esp -= 4; W32(r_esp, 0x5c64fau); f_007b8d60();
    /* 005c64fa: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005c64fb: mov edx, dword ptr [0xaae15c] */ r_edx = R32((u32)(0xaae15cu));
    /* 005c6501: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 005c6503: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c6505: je 0x5c68f8 */ if (fZ) goto L_005c68f8;
L_005c650b:; BB(0x005c650b);
    /* 005c650b: lea eax, [esi + esi] */ r_eax = (u32)(r_esi+r_esi);
    /* 005c650e: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 005c6511: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 005c6514: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c6517: lea edi, [ecx + ecx + 0xaad660] */ r_edi = (u32)(r_ecx+r_ecx+0xaad660u);
    /* 005c651e: mov ecx, dword ptr [eax + 0xa0] */ r_ecx = R32((u32)(r_eax+0xa0u));
    /* 005c6524: mov dword ptr [ebp - 0x44], edi */ W32((u32)(r_ebp+0xffffffbcu), r_edi);
    /* 005c6527: cmp ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c652a: jge 0x5c65eb */ if ((fS==fO)) goto L_005c65eb;
L_005c6530:; BB(0x005c6530);
    /* 005c6530: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005c6533: mov edi, dword ptr [ecx*4 + 0xaad660] */ r_edi = R32((u32)(r_ecx*4+0xaad660u));
    /* 005c653a: movzx ecx, word ptr [edi + 0x1c] */ r_ecx = (u32)R16((u32)(r_edi+0x1cu));
    /* 005c653e: movzx eax, word ptr [eax + 0xa8] */ r_eax = (u32)R16((u32)(r_eax+0xa8u));
    /* 005c6545: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c6547: je 0x5c65eb */ if (fZ) goto L_005c65eb;
L_005c654d:; BB(0x005c654d);
    /* 005c654d: mov eax, 1 */ r_eax = 0x1u;
    /* 005c6552: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 005c6555: call 0x687c48 */ r_esp -= 4; W32(r_esp, 0x5c655au); f_00687c48();
    /* 005c655a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c655c: je 0x5c656d */ if (fZ) goto L_005c656d;
L_005c655e:; BB(0x005c655e);
    /* 005c655e: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 005c6561: mov ecx, dword ptr [eax*4 + 0xaad660] */ r_ecx = R32((u32)(r_eax*4+0xaad660u));
    /* 005c6568: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 005c656b: jmp 0x5c658c */ goto L_005c658c;
L_005c656d:; BB(0x005c656d);
    /* 005c656d: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005c6570: mov ecx, dword ptr [ecx*4 + 0xaad660] */ r_ecx = R32((u32)(r_ecx*4+0xaad660u));
    /* 005c6577: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 005c657a: mov eax, edx */ r_eax = r_edx;
    /* 005c657c: and eax, 0x60000000 */ {  u32 a = r_eax; u32 b = 0x60000000u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005c6581: cmp eax, 0x20000000 */ {  u32 a = r_eax; u32 b = 0x20000000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c6586: je 0x5c69e5 */ if (fZ) goto L_005c69e5;
L_005c658c:; BB(0x005c658c);
    /* 005c658c: test edx, 0x4000000 */ {  u32 a = r_edx; u32 b = 0x4000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c6592: je 0x5c659c */ if (fZ) goto L_005c659c;
L_005c6594:; BB(0x005c6594);
    /* 005c6594: mov edx, dword ptr [0xaae15c] */ r_edx = R32((u32)(0xaae15cu));
    /* 005c659a: jmp 0x5c65eb */ goto L_005c65eb;
L_005c659c:; BB(0x005c659c);
    /* 005c659c: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005c659f: mov edi, dword ptr [edx*4 + 0xaad664] */ r_edi = R32((u32)(r_edx*4+0xaad664u));
    /* 005c65a6: mov eax, dword ptr [ecx + 0xa4] */ r_eax = R32((u32)(r_ecx+0xa4u));
    /* 005c65ac: mov dword ptr [ebp - 0x54], edi */ W32((u32)(r_ebp+0xffffffacu), r_edi);
    /* 005c65af: lea edx, [edi + edi] */ r_edx = (u32)(r_edi+r_edi);
    /* 005c65b2: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c65b4: sub edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005c65b6: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c65b8: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c65ba: sub edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005c65bc: mov eax, dword ptr [eax + edx*4 + 0x18] */ r_eax = R32((u32)(r_eax+r_edx*4+0x18u));
    /* 005c65c0: test eax, 0x2000000 */ {  u32 a = r_eax; u32 b = 0x2000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c65c5: je 0x5c65cf */ if (fZ) goto L_005c65cf;
L_005c65c7:; BB(0x005c65c7);
    /* 005c65c7: mov edx, dword ptr [0xaae15c] */ r_edx = R32((u32)(0xaae15cu));
    /* 005c65cd: jmp 0x5c65eb */ goto L_005c65eb;
L_005c65cf:; BB(0x005c65cf);
    /* 005c65cf: test eax, 0x1000 */ {  u32 a = r_eax; u32 b = 0x1000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c65d4: je 0x5c65de */ if (fZ) goto L_005c65de;
L_005c65d6:; BB(0x005c65d6);
    /* 005c65d6: mov edx, dword ptr [0xaae15c] */ r_edx = R32((u32)(0xaae15cu));
    /* 005c65dc: jmp 0x5c65eb */ goto L_005c65eb;
L_005c65de:; BB(0x005c65de);
    /* 005c65de: test eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c65e3: je 0x5c65fb */ if (fZ) goto L_005c65fb;
L_005c65e5:; BB(0x005c65e5);
    /* 005c65e5: mov edx, dword ptr [0xaae15c] */ r_edx = R32((u32)(0xaae15cu));
L_005c65eb:; BB(0x005c65eb);
    /* 005c65eb: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005c65ee: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c65f0: jne 0x5c650b */ if (!fZ) goto L_005c650b;
L_005c65f6:; BB(0x005c65f6);
    /* 005c65f6: jmp 0x5c68f8 */ goto L_005c68f8;
L_005c65fb:; BB(0x005c65fb);
    /* 005c65fb: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 005c65fe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c6600: je 0x5c69da */ if (fZ) goto L_005c69da;
L_005c6606:; BB(0x005c6606);
    /* 005c6606: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c6609: lea eax, [edx + 0x60] */ r_eax = (u32)(r_edx+0x60u);
    /* 005c660c: mov edx, dword ptr [edx + 0xa0] */ r_edx = R32((u32)(r_edx+0xa0u));
    /* 005c6612: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c6614: je 0x5c6947 */ if (fZ) goto L_005c6947;
L_005c661a:; BB(0x005c661a);
    /* 005c661a: cmp ecx, dword ptr [eax] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c661c: je 0x5c69c3 */ if (fZ) goto L_005c69c3;
L_005c6622:; BB(0x005c6622);
    /* 005c6622: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c6625: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 005c6628: jne 0x5c661a */ if (!fZ) goto L_005c661a;
L_005c662a:; BB(0x005c662a);
    /* 005c662a: jmp 0x5c6947 */ goto L_005c6947;
L_005c662f:; BB(0x005c662f);
    /* 005c662f: call 0x7b8cec */ r_esp -= 4; W32(r_esp, 0x5c6634u); f_007b8cec();
    /* 005c6634: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c6637: add eax, 0x1c */ {  u32 a = r_eax; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c663a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c663b: call 0x7b976c */ r_esp -= 4; W32(r_esp, 0x5c6640u); f_007b976c();
    /* 005c6640: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005c6641: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c6644: mov eax, dword ptr [edx + 0xc0] */ r_eax = R32((u32)(r_edx+0xc0u));
    /* 005c664a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c664c: je 0x5c665b */ if (fZ) goto L_005c665b;
L_005c664e:; BB(0x005c664e);
    /* 005c664e: add edx, 0x1c */ {  u32 a = r_edx; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c6651: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c6652: call 0x7b8d60 */ r_esp -= 4; W32(r_esp, 0x5c6657u); f_007b8d60();
    /* 005c6657: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005c6658: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
L_005c665b:; BB(0x005c665b);
    /* 005c665b: mov eax, dword ptr [edx + 0xbc] */ r_eax = R32((u32)(r_edx+0xbcu));
    /* 005c6661: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c6663: je 0x5c666f */ if (fZ) goto L_005c666f;
L_005c6665:; BB(0x005c6665);
    /* 005c6665: add edx, 0x1c */ {  u32 a = r_edx; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c6668: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c6669: call 0x7b9788 */ r_esp -= 4; W32(r_esp, 0x5c666eu); f_007b9788();
    /* 005c666e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_005c666f:; BB(0x005c666f);
    /* 005c666f: mov edx, dword ptr [0xaae15c] */ r_edx = R32((u32)(0xaae15cu));
    /* 005c6675: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 005c6677: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c6679: je 0x5c6a18 */ if (fZ) goto L_005c6a18;
L_005c667f:; BB(0x005c667f);
    /* 005c667f: lea eax, [esi + esi] */ r_eax = (u32)(r_esi+r_esi);
    /* 005c6682: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 005c6685: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 005c6688: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c668b: lea edi, [ecx + ecx + 0xaad660] */ r_edi = (u32)(r_ecx+r_ecx+0xaad660u);
    /* 005c6692: mov ecx, dword ptr [eax + 0xa0] */ r_ecx = R32((u32)(r_eax+0xa0u));
    /* 005c6698: mov dword ptr [ebp - 0x44], edi */ W32((u32)(r_ebp+0xffffffbcu), r_edi);
    /* 005c669b: cmp ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c669e: jge 0x5c675f */ if ((fS==fO)) goto L_005c675f;
L_005c66a4:; BB(0x005c66a4);
    /* 005c66a4: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005c66a7: mov edi, dword ptr [ecx*4 + 0xaad660] */ r_edi = R32((u32)(r_ecx*4+0xaad660u));
    /* 005c66ae: movzx ecx, word ptr [edi + 0x1c] */ r_ecx = (u32)R16((u32)(r_edi+0x1cu));
    /* 005c66b2: movzx eax, word ptr [eax + 0xa8] */ r_eax = (u32)R16((u32)(r_eax+0xa8u));
    /* 005c66b9: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c66bb: je 0x5c675f */ if (fZ) goto L_005c675f;
L_005c66c1:; BB(0x005c66c1);
    /* 005c66c1: mov eax, 1 */ r_eax = 0x1u;
    /* 005c66c6: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 005c66c9: call 0x687c48 */ r_esp -= 4; W32(r_esp, 0x5c66ceu); f_00687c48();
    /* 005c66ce: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c66d0: je 0x5c66e1 */ if (fZ) goto L_005c66e1;
L_005c66d2:; BB(0x005c66d2);
    /* 005c66d2: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 005c66d5: mov ecx, dword ptr [eax*4 + 0xaad660] */ r_ecx = R32((u32)(r_eax*4+0xaad660u));
    /* 005c66dc: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 005c66df: jmp 0x5c6700 */ goto L_005c6700;
L_005c66e1:; BB(0x005c66e1);
    /* 005c66e1: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005c66e4: mov ecx, dword ptr [ecx*4 + 0xaad660] */ r_ecx = R32((u32)(r_ecx*4+0xaad660u));
    /* 005c66eb: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 005c66ee: mov eax, edx */ r_eax = r_edx;
    /* 005c66f0: and eax, 0x60000000 */ {  u32 a = r_eax; u32 b = 0x60000000u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005c66f5: cmp eax, 0x20000000 */ {  u32 a = r_eax; u32 b = 0x20000000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c66fa: je 0x5c6a44 */ if (fZ) goto L_005c6a44;
L_005c6700:; BB(0x005c6700);
    /* 005c6700: test edx, 0x4000000 */ {  u32 a = r_edx; u32 b = 0x4000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c6706: je 0x5c6710 */ if (fZ) goto L_005c6710;
L_005c6708:; BB(0x005c6708);
    /* 005c6708: mov edx, dword ptr [0xaae15c] */ r_edx = R32((u32)(0xaae15cu));
    /* 005c670e: jmp 0x5c675f */ goto L_005c675f;
L_005c6710:; BB(0x005c6710);
    /* 005c6710: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005c6713: mov edi, dword ptr [edx*4 + 0xaad664] */ r_edi = R32((u32)(r_edx*4+0xaad664u));
    /* 005c671a: mov eax, dword ptr [ecx + 0xa4] */ r_eax = R32((u32)(r_ecx+0xa4u));
    /* 005c6720: mov dword ptr [ebp - 0x54], edi */ W32((u32)(r_ebp+0xffffffacu), r_edi);
    /* 005c6723: lea edx, [edi + edi] */ r_edx = (u32)(r_edi+r_edi);
    /* 005c6726: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c6728: sub edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005c672a: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c672c: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c672e: sub edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005c6730: mov eax, dword ptr [eax + edx*4 + 0x18] */ r_eax = R32((u32)(r_eax+r_edx*4+0x18u));
    /* 005c6734: test eax, 0x2000000 */ {  u32 a = r_eax; u32 b = 0x2000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c6739: je 0x5c6743 */ if (fZ) goto L_005c6743;
L_005c673b:; BB(0x005c673b);
    /* 005c673b: mov edx, dword ptr [0xaae15c] */ r_edx = R32((u32)(0xaae15cu));
    /* 005c6741: jmp 0x5c675f */ goto L_005c675f;
L_005c6743:; BB(0x005c6743);
    /* 005c6743: test eax, 0x1000 */ {  u32 a = r_eax; u32 b = 0x1000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c6748: je 0x5c6752 */ if (fZ) goto L_005c6752;
L_005c674a:; BB(0x005c674a);
    /* 005c674a: mov edx, dword ptr [0xaae15c] */ r_edx = R32((u32)(0xaae15cu));
    /* 005c6750: jmp 0x5c675f */ goto L_005c675f;
L_005c6752:; BB(0x005c6752);
    /* 005c6752: test eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c6757: je 0x5c676f */ if (fZ) goto L_005c676f;
L_005c6759:; BB(0x005c6759);
    /* 005c6759: mov edx, dword ptr [0xaae15c] */ r_edx = R32((u32)(0xaae15cu));
L_005c675f:; BB(0x005c675f);
    /* 005c675f: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005c6762: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c6764: jne 0x5c667f */ if (!fZ) goto L_005c667f;
L_005c676a:; BB(0x005c676a);
    /* 005c676a: jmp 0x5c6a18 */ goto L_005c6a18;
L_005c676f:; BB(0x005c676f);
    /* 005c676f: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 005c6772: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c6774: je 0x5c6a39 */ if (fZ) goto L_005c6a39;
L_005c677a:; BB(0x005c677a);
    /* 005c677a: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c677d: lea eax, [edx + 0x60] */ r_eax = (u32)(r_edx+0x60u);
    /* 005c6780: mov edx, dword ptr [edx + 0xa0] */ r_edx = R32((u32)(r_edx+0xa0u));
    /* 005c6786: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c6788: je 0x5c679a */ if (fZ) goto L_005c679a;
L_005c678a:; BB(0x005c678a);
    /* 005c678a: cmp ecx, dword ptr [eax] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c678c: je 0x5c6a22 */ if (fZ) goto L_005c6a22;
L_005c6792:; BB(0x005c6792);
    /* 005c6792: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c6795: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 005c6798: jne 0x5c678a */ if (!fZ) goto L_005c678a;
L_005c679a:; BB(0x005c679a);
    /* 005c679a: movzx edx, word ptr [ecx + 0x96] */ r_edx = (u32)R16((u32)(r_ecx+0x96u));
    /* 005c67a1: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c67a4: jne 0x5c67ad */ if (!fZ) goto L_005c67ad;
L_005c67a6:; BB(0x005c67a6);
    /* 005c67a6: mov edx, 1 */ r_edx = 0x1u;
    /* 005c67ab: jmp 0x5c67af */ goto L_005c67af;
L_005c67ad:; BB(0x005c67ad);
    /* 005c67ad: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_005c67af:; BB(0x005c67af);
    /* 005c67af: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c67b1: je 0x5c67f4 */ if (fZ) goto L_005c67f4;
L_005c67b3:; BB(0x005c67b3);
    /* 005c67b3: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005c67b6: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 005c67b8: mov edi, dword ptr [edx*4 + 0xaad664] */ r_edi = R32((u32)(r_edx*4+0xaad664u));
    /* 005c67bf: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c67c2: mov dword ptr [eax + 4], edi */ W32((u32)(r_eax+0x4u), r_edi);
    /* 005c67c5: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005c67c7: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 005c67ca: add dword ptr [ecx + 0xa0], 1 */ { u32 ad = (u32)(r_ecx+0xa0u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 005c67d1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c67d2: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5c67d5u); call_ind(t); }
    /* 005c67d5: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c67d8: mov eax, dword ptr [edx + 0xa4] */ r_eax = R32((u32)(r_edx+0xa4u));
    /* 005c67de: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 005c67e1: mov dword ptr [edx + 0xa4], eax */ W32((u32)(r_edx+0xa4u), r_eax);
    /* 005c67e7: je 0x5c67ff */ if (fZ) goto L_005c67ff;
L_005c67e9:; BB(0x005c67e9);
    /* 005c67e9: mov edx, dword ptr [0xaae15c] */ r_edx = R32((u32)(0xaae15cu));
    /* 005c67ef: jmp 0x5c675f */ goto L_005c675f;
L_005c67f4:; BB(0x005c67f4);
    /* 005c67f4: mov edx, dword ptr [0xaae15c] */ r_edx = R32((u32)(0xaae15cu));
    /* 005c67fa: jmp 0x5c675f */ goto L_005c675f;
L_005c67ff:; BB(0x005c67ff);
    /* 005c67ff: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 005c6803: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005c6808: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 005c680c: call 0x7b8cec */ r_esp -= 4; W32(r_esp, 0x5c6811u); f_007b8cec();
L_005c6811:; BB(0x005c6811);
    /* 005c6811: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 005c6814: mov eax, dword ptr [eax + 0x78] */ r_eax = R32((u32)(r_eax+0x78u));
    /* 005c6817: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c681a: je 0x5c686b */ if (fZ) goto L_005c686b;
L_005c681c:; BB(0x005c681c);
    /* 005c681c: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c681f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c6820: add edx, 0x24 */ {  u32 a = r_edx; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c6823: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c6824: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x5c6829u); f_00509590();
    /* 005c6829: mov edx, eax */ r_edx = r_eax;
    /* 005c682b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c682e: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c6831: mov dword ptr [eax + 0x130], edx */ W32((u32)(r_eax+0x130u), r_edx);
    /* 005c6837: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c6839: je 0x5c6878 */ if (fZ) goto L_005c6878;
L_005c683b:; BB(0x005c683b);
    /* 005c683b: mov eax, dword ptr [0x9c2100] */ r_eax = R32((u32)(0x9c2100u));
    /* 005c6840: mov esi, dword ptr [0x9c2104] */ r_esi = R32((u32)(0x9c2104u));
    /* 005c6846: mov edi, dword ptr [0x9c2108] */ r_edi = R32((u32)(0x9c2108u));
    /* 005c684c: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005c684f: add eax, dword ptr [ecx + 0x28] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x28u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c6852: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 005c6855: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005c6858: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005c685b: lea ecx, [ebp - 0x24] */ r_ecx = (u32)(r_ebp+0xffffffdcu);
    /* 005c685e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c685f: mov ecx, edx */ r_ecx = r_edx;
    /* 005c6861: call 0x508dd0 */ r_esp -= 4; W32(r_esp, 0x5c6866u); f_00508dd0();
    /* 005c6866: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c6869: jmp 0x5c6878 */ goto L_005c6878;
L_005c686b:; BB(0x005c686b);
    /* 005c686b: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c686e: mov dword ptr [eax + 0x130], 0 */ W32((u32)(r_eax+0x130u), 0x0u);
L_005c6878:; BB(0x005c6878);
    /* 005c6878: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005c687b: mov edx, dword ptr [edx + 0x7c] */ r_edx = R32((u32)(r_edx+0x7cu));
    /* 005c687e: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c6881: je 0x5c689d */ if (fZ) goto L_005c689d;
L_005c6883:; BB(0x005c6883);
    /* 005c6883: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c6884: add eax, 0x24 */ {  u32 a = r_eax; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c6887: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c6888: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x5c688du); f_00509590();
    /* 005c688d: mov edx, eax */ r_edx = r_eax;
    /* 005c688f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c6892: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c6895: mov dword ptr [eax + 0x134], edx */ W32((u32)(r_eax+0x134u), r_edx);
    /* 005c689b: jmp 0x5c68a7 */ goto L_005c68a7;
L_005c689d:; BB(0x005c689d);
    /* 005c689d: mov dword ptr [eax + 0x134], 0 */ W32((u32)(r_eax+0x134u), 0x0u);
L_005c68a7:; BB(0x005c68a7);
    /* 005c68a7: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005c68aa: mov ecx, dword ptr [edx + 0x40] */ r_ecx = R32((u32)(r_edx+0x40u));
    /* 005c68ad: test cl, 0x10 */ {  u32 a = (u8)r_ecx; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c68b0: jne 0x5c68be */ if (!fZ) goto L_005c68be;
L_005c68b2:; BB(0x005c68b2);
    /* 005c68b2: mov dword ptr [eax + 0x140], 0 */ W32((u32)(r_eax+0x140u), 0x0u);
    /* 005c68bc: jmp 0x5c68df */ goto L_005c68df;
L_005c68be:; BB(0x005c68be);
    /* 005c68be: push 0x2000 */ { u32 v = 0x2000u; r_esp -= 4; W32(r_esp, v); }
    /* 005c68c3: push 0x19e */ { u32 v = 0x19eu; r_esp -= 4; W32(r_esp, v); }
    /* 005c68c8: add eax, 0x24 */ {  u32 a = r_eax; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c68cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c68cc: call 0x50981c */ r_esp -= 4; W32(r_esp, 0x5c68d1u); f_0050981c();
    /* 005c68d1: mov edx, eax */ r_edx = r_eax;
    /* 005c68d3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005c68d6: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c68d9: mov dword ptr [eax + 0x140], edx */ W32((u32)(r_eax+0x140u), r_edx);
L_005c68df:; BB(0x005c68df);
    /* 005c68df: mov edi, dword ptr [ebp - 0x60] */ r_edi = R32((u32)(r_ebp+0xffffffa0u));
    /* 005c68e2: mov esi, dword ptr [ebp - 0x5c] */ r_esi = R32((u32)(r_ebp+0xffffffa4u));
    /* 005c68e5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c68e8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005c68ef: mov esp, ebp */ r_esp = r_ebp;
    /* 005c68f1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c68f2: mov esp, ebx */ r_esp = r_ebx;
    /* 005c68f4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005c68f5: ret 8 */ FN_RET(0x005c6164); r_esp += 12; return;
L_005c68f8:; BB(0x005c68f8);
    /* 005c68f8: call 0x7b8cec */ r_esp -= 4; W32(r_esp, 0x5c68fdu); f_007b8cec();
L_005c68fd:; BB(0x005c68fd);
    /* 005c68fd: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c6900: mov esi, dword ptr [eax + 0x138] */ r_esi = R32((u32)(r_eax+0x138u));
    /* 005c6906: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c6908: je 0x5c6923 */ if (fZ) goto L_005c6923;
L_005c690a:; BB(0x005c690a);
    /* 005c690a: lea ecx, [eax + 0x24] */ r_ecx = (u32)(r_eax+0x24u);
    /* 005c690d: lea edx, [eax + 0xd0] */ r_edx = (u32)(r_eax+0xd0u);
    /* 005c6913: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c6914: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c6915: push dword ptr [eax + 0xac] */ { u32 v = R32((u32)(r_eax+0xacu)); r_esp -= 4; W32(r_esp, v); }
    /* 005c691b: call esi */ { u32 t = r_esi; r_esp -= 4; W32(r_esp, 0x5c691du); call_ind(t); }
    /* 005c691d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c6920: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
L_005c6923:; BB(0x005c6923);
    /* 005c6923: movzx ecx, word ptr [eax + 8] */ r_ecx = (u32)R16((u32)(r_eax+0x8u));
    /* 005c6927: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005c6929: mov dword ptr [eax + 0x130], edx */ W32((u32)(r_eax+0x130u), r_edx);
    /* 005c692f: mov dword ptr [eax + 0x134], edx */ W32((u32)(r_eax+0x134u), r_edx);
    /* 005c6935: mov dword ptr [eax + 0x140], edx */ W32((u32)(r_eax+0x140u), r_edx);
    /* 005c693b: or ecx, 0xffff0011 */ {  u32 a = r_ecx; u32 b = 0xffff0011u; u32 r = (a | b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c6941: mov word ptr [eax + 8], cx */ W16((u32)(r_eax+0x8u), (u16)r_ecx);
    /* 005c6945: jmp 0x5c68df */ goto L_005c68df;
L_005c6947:; BB(0x005c6947);
    /* 005c6947: movzx edx, word ptr [ecx + 0x96] */ r_edx = (u32)R16((u32)(r_ecx+0x96u));
    /* 005c694e: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c6951: jne 0x5c695a */ if (!fZ) goto L_005c695a;
L_005c6953:; BB(0x005c6953);
    /* 005c6953: mov edx, 1 */ r_edx = 0x1u;
    /* 005c6958: jmp 0x5c695c */ goto L_005c695c;
L_005c695a:; BB(0x005c695a);
    /* 005c695a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_005c695c:; BB(0x005c695c);
    /* 005c695c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c695e: je 0x5c69a1 */ if (fZ) goto L_005c69a1;
L_005c6960:; BB(0x005c6960);
    /* 005c6960: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005c6963: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 005c6965: mov edi, dword ptr [edx*4 + 0xaad664] */ r_edi = R32((u32)(r_edx*4+0xaad664u));
    /* 005c696c: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c696f: mov dword ptr [eax + 4], edi */ W32((u32)(r_eax+0x4u), r_edi);
    /* 005c6972: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005c6974: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 005c6977: add dword ptr [ecx + 0xa0], 1 */ { u32 ad = (u32)(r_ecx+0xa0u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 005c697e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c697f: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5c6982u); call_ind(t); }
    /* 005c6982: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c6985: mov eax, dword ptr [edx + 0xa4] */ r_eax = R32((u32)(r_edx+0xa4u));
    /* 005c698b: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 005c698e: mov dword ptr [edx + 0xa4], eax */ W32((u32)(r_edx+0xa4u), r_eax);
    /* 005c6994: je 0x5c69ac */ if (fZ) goto L_005c69ac;
L_005c6996:; BB(0x005c6996);
    /* 005c6996: mov edx, dword ptr [0xaae15c] */ r_edx = R32((u32)(0xaae15cu));
    /* 005c699c: jmp 0x5c65eb */ goto L_005c65eb;
L_005c69a1:; BB(0x005c69a1);
    /* 005c69a1: mov edx, dword ptr [0xaae15c] */ r_edx = R32((u32)(0xaae15cu));
    /* 005c69a7: jmp 0x5c65eb */ goto L_005c65eb;
L_005c69ac:; BB(0x005c69ac);
    /* 005c69ac: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 005c69b0: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005c69b5: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 005c69b9: call 0x7b8cec */ r_esp -= 4; W32(r_esp, 0x5c69beu); f_007b8cec();
    /* 005c69be: jmp 0x5c68fd */ goto L_005c68fd;
L_005c69c3:; BB(0x005c69c3);
    /* 005c69c3: mov edi, dword ptr [ebp - 0x54] */ r_edi = R32((u32)(r_ebp+0xffffffacu));
    /* 005c69c6: cmp edi, dword ptr [eax + 4] */ {  u32 a = r_edi; u32 b = R32((u32)(r_eax+0x4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c69c9: jne 0x5c6622 */ if (!fZ) goto L_005c6622;
L_005c69cf:; BB(0x005c69cf);
    /* 005c69cf: mov edx, dword ptr [0xaae15c] */ r_edx = R32((u32)(0xaae15cu));
    /* 005c69d5: jmp 0x5c65eb */ goto L_005c65eb;
L_005c69da:; BB(0x005c69da);
    /* 005c69da: mov edx, dword ptr [0xaae15c] */ r_edx = R32((u32)(0xaae15cu));
    /* 005c69e0: jmp 0x5c65eb */ goto L_005c65eb;
L_005c69e5:; BB(0x005c69e5);
    /* 005c69e5: call 0x7ba980 */ r_esp -= 4; W32(r_esp, 0x5c69eau); f_007ba980();
    /* 005c69ea: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005c69ed: mov ecx, dword ptr [ecx*4 + 0xaad660] */ r_ecx = R32((u32)(r_ecx*4+0xaad660u));
    /* 005c69f4: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c69f7: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 005c69fa: cmp ax, word ptr [edx + 0xaa] */ {  u32 a = (u16)r_eax; u32 b = R16((u32)(r_edx+0xaau)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 005c6a01: je 0x5c6a10 */ if (fZ) goto L_005c6a10;
L_005c6a03:; BB(0x005c6a03);
    /* 005c6a03: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 005c6a06: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005c6a08: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 005c6a0b: jmp 0x5c658c */ goto L_005c658c;
L_005c6a10:; BB(0x005c6a10);
    /* 005c6a10: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 005c6a13: jmp 0x5c658c */ goto L_005c658c;
L_005c6a18:; BB(0x005c6a18);
    /* 005c6a18: call 0x7b8cec */ r_esp -= 4; W32(r_esp, 0x5c6a1du); f_007b8cec();
    /* 005c6a1d: jmp 0x5c6811 */ goto L_005c6811;
L_005c6a22:; BB(0x005c6a22);
    /* 005c6a22: mov edi, dword ptr [ebp - 0x54] */ r_edi = R32((u32)(r_ebp+0xffffffacu));
    /* 005c6a25: cmp edi, dword ptr [eax + 4] */ {  u32 a = r_edi; u32 b = R32((u32)(r_eax+0x4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c6a28: jne 0x5c6792 */ if (!fZ) goto L_005c6792;
L_005c6a2e:; BB(0x005c6a2e);
    /* 005c6a2e: mov edx, dword ptr [0xaae15c] */ r_edx = R32((u32)(0xaae15cu));
    /* 005c6a34: jmp 0x5c675f */ goto L_005c675f;
L_005c6a39:; BB(0x005c6a39);
    /* 005c6a39: mov edx, dword ptr [0xaae15c] */ r_edx = R32((u32)(0xaae15cu));
    /* 005c6a3f: jmp 0x5c675f */ goto L_005c675f;
L_005c6a44:; BB(0x005c6a44);
    /* 005c6a44: call 0x7ba980 */ r_esp -= 4; W32(r_esp, 0x5c6a49u); f_007ba980();
    /* 005c6a49: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005c6a4c: mov ecx, dword ptr [ecx*4 + 0xaad660] */ r_ecx = R32((u32)(r_ecx*4+0xaad660u));
    /* 005c6a53: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c6a56: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 005c6a59: cmp ax, word ptr [edx + 0xaa] */ {  u32 a = (u16)r_eax; u32 b = R16((u32)(r_edx+0xaau)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 005c6a60: je 0x5c6a6f */ if (fZ) goto L_005c6a6f;
L_005c6a62:; BB(0x005c6a62);
    /* 005c6a62: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 005c6a65: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005c6a67: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 005c6a6a: jmp 0x5c6700 */ goto L_005c6700;
L_005c6a6f:; BB(0x005c6a6f);
    /* 005c6a6f: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 005c6a72: jmp 0x5c6700 */ goto L_005c6700;
}

void f_005c6269(void)
{
    FN_ENTER(0x005c6269);
    /* 005c6269: mov byte ptr [edi], cl */ W8((u32)(r_edi), (u8)r_ecx);
    /* 005c626b: mov bh, 0x45 */ r_ebx = (r_ebx & 0xffff00ffu) | (((0x45u) & 0xffu) << 8);
    /* 005c626d: mov byte ptr [0xc00], cl */ W8((u32)(0xc00u), (u8)r_ecx);
    /* 005c6273: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 005c6276: fldcw word ptr [ebp - 0x70] */ fcw = R16((u32)(r_ebp+0xffffff90u));
    /* 005c6279: fistp dword ptr [ebp - 0x68] */ W32((u32)(r_ebp+0xffffff98u), (u32)fx_int32(ST(0))); FPOP();
    /* 005c627c: fldcw word ptr [ebp - 0x78] */ fcw = R16((u32)(r_ebp+0xffffff88u));
    /* 005c627f: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 005c6282: fld dword ptr [edx + 0xd0] */ FPUSH(R_F32((u32)(r_edx+0xd0u)));
    /* 005c6288: fst dword ptr [ebp - 0x4c] */ W_F32((u32)(r_ebp+0xffffffb4u), ST(0));
    /* 005c628b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005c628d: fst dword ptr [ebp - 0x48] */ W_F32((u32)(r_ebp+0xffffffb8u), ST(0));
    /* 005c6290: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005c6292: mov dword ptr [edx + 0xf0], eax */ W32((u32)(r_edx+0xf0u), r_eax);
    /* 005c6298: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 005c629a: fmul qword ptr [0x92bc60] */ ST(0) = ST(0) * R_F64((u32)(0x92bc60u));
    /* 005c62a0: fdiv qword ptr [0x92bc58] */ ST(0) = ST(0) / R_F64((u32)(0x92bc58u));
    /* 005c62a6: fnstcw word ptr [ebp - 0x78] */ W16((u32)(r_ebp+0xffffff88u), fcw);
    /* 005c62a9: movzx eax, word ptr [ebp - 0x78] */ r_eax = (u32)R16((u32)(r_ebp+0xffffff88u));
    /* 005c62ad: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005c62b2: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 005c62b5: fldcw word ptr [ebp - 0x70] */ fcw = R16((u32)(r_ebp+0xffffff90u));
    /* 005c62b8: fistp dword ptr [ebp - 0x68] */ W32((u32)(r_ebp+0xffffff98u), (u32)fx_int32(ST(0))); FPOP();
    /* 005c62bb: fldcw word ptr [ebp - 0x78] */ fcw = R16((u32)(r_ebp+0xffffff88u));
    /* 005c62be: mov esi, dword ptr [ebp - 0x68] */ r_esi = R32((u32)(r_ebp+0xffffff98u));
    /* 005c62c1: mov dword ptr [edx + 0xf4], esi */ W32((u32)(r_edx+0xf4u), r_esi);
    /* 005c62c7: mov dword ptr [edx + 0xf8], 0 */ W32((u32)(r_edx+0xf8u), 0x0u);
    /* 005c62d1: jmp 0x5c6339 */ goto L_005c6339;
L_005c6339:; BB(0x005c6339);
    /* 005c6339: fld dword ptr [ebp - 0x4c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffb4u)));
    /* 005c633c: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 005c633f: fmul dword ptr [eax + 0x38] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x38u));
    /* 005c6342: fld dword ptr [ebp - 0x50] */ FPUSH(R_F32((u32)(r_ebp+0xffffffb0u)));
    /* 005c6345: fld dword ptr [ebp - 0x48] */ FPUSH(R_F32((u32)(r_ebp+0xffffffb8u)));
    /* 005c6348: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 005c634a: fstp dword ptr [edx + 0xd0] */ W_F32((u32)(r_edx+0xd0u), ST(0)); FPOP();
    /* 005c6350: fmul dword ptr [eax + 0x38] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x38u));
    /* 005c6353: fstp dword ptr [edx + 0xd4] */ W_F32((u32)(r_edx+0xd4u), ST(0)); FPOP();
    /* 005c6359: fmul dword ptr [eax + 0x38] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x38u));
    /* 005c635c: mov dword ptr [edx + 0x30], esi */ W32((u32)(r_edx+0x30u), r_esi);
    /* 005c635f: fstp dword ptr [edx + 0xd8] */ W_F32((u32)(r_edx+0xd8u), ST(0)); FPOP();
    /* 005c6365: fld dword ptr [eax + 0x3c] */ FPUSH(R_F32((u32)(r_eax+0x3cu)));
    /* 005c6368: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 005c636a: fstp dword ptr [edx + 0xdc] */ W_F32((u32)(r_edx+0xdcu), ST(0)); FPOP();
    /* 005c6370: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 005c6373: mov dword ptr [edx + 0xe8], ecx */ W32((u32)(r_edx+0xe8u), r_ecx);
    /* 005c6379: mov esi, dword ptr [eax + 0x48] */ r_esi = R32((u32)(r_eax+0x48u));
    /* 005c637c: mov dword ptr [edx + 0xec], esi */ W32((u32)(r_edx+0xecu), r_esi);
    /* 005c6382: mov edi, dword ptr [eax + 0x4c] */ r_edi = R32((u32)(r_eax+0x4cu));
    /* 005c6385: mov dword ptr [edx + 0x108], edi */ W32((u32)(r_edx+0x108u), r_edi);
    /* 005c638b: mov ecx, dword ptr [eax + 0x4c] */ r_ecx = R32((u32)(r_eax+0x4cu));
    /* 005c638e: mov dword ptr [edx + 0x10c], ecx */ W32((u32)(r_edx+0x10cu), r_ecx);
    /* 005c6394: mov ecx, dword ptr [eax + 0x4c] */ r_ecx = R32((u32)(r_eax+0x4cu));
    /* 005c6397: mov dword ptr [edx + 0x110], ecx */ W32((u32)(r_edx+0x110u), r_ecx);
    /* 005c639d: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 005c63a0: mov dword ptr [edx + 0xfc], ecx */ W32((u32)(r_edx+0xfcu), r_ecx);
    /* 005c63a6: mov ecx, dword ptr [eax + 0x54] */ r_ecx = R32((u32)(r_eax+0x54u));
    /* 005c63a9: mov dword ptr [edx + 0x100], ecx */ W32((u32)(r_edx+0x100u), r_ecx);
    /* 005c63af: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 005c63b2: mov dword ptr [edx + 0x104], ecx */ W32((u32)(r_edx+0x104u), r_ecx);
    /* 005c63b8: mov dword ptr [edx + 0x120], 0x3f800000 */ W32((u32)(r_edx+0x120u), 0x3f800000u);
    /* 005c63c2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005c63c4: mov dword ptr [edx + 0x114], ecx */ W32((u32)(r_edx+0x114u), r_ecx);
    /* 005c63ca: mov dword ptr [edx + 0x118], ecx */ W32((u32)(r_edx+0x118u), r_ecx);
    /* 005c63d0: mov dword ptr [edx + 0x124], 0x3f800000 */ W32((u32)(r_edx+0x124u), 0x3f800000u);
    /* 005c63da: mov dword ptr [edx + 0x11c], ecx */ W32((u32)(r_edx+0x11cu), r_ecx);
    /* 005c63e0: mov dword ptr [edx + 0xe0], ecx */ W32((u32)(r_edx+0xe0u), r_ecx);
    /* 005c63e6: mov dword ptr [edx + 0x128], 0x3f800000 */ W32((u32)(r_edx+0x128u), 0x3f800000u);
    /* 005c63f0: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 005c63f3: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005c63f5: jne 0x5c6406 */ if (!fZ) goto L_005c6406;
L_005c63f7:; BB(0x005c63f7);
    /* 005c63f7: mov dword ptr [edx + 0x12c], 0 */ W32((u32)(r_edx+0x12cu), 0x0u);
    /* 005c6401: jmp 0x5c64bc */ goto L_005c64bc;
L_005c6406:; BB(0x005c6406);
    /* 005c6406: mov edi, dword ptr [0x92bc44] */ r_edi = R32((u32)(0x92bc44u));
    /* 005c640c: mov ecx, dword ptr [0x92bc48] */ r_ecx = R32((u32)(0x92bc48u));
    /* 005c6412: mov eax, dword ptr [0x92bc4c] */ r_eax = R32((u32)(0x92bc4cu));
    /* 005c6417: mov esi, dword ptr [ebp - 0x3c] */ r_esi = R32((u32)(r_ebp+0xffffffc4u));
    /* 005c641a: fld dword ptr [esi + 0x64] */ FPUSH(R_F32((u32)(r_esi+0x64u)));
    /* 005c641d: fld dword ptr [0x92bc78] */ FPUSH(R_F32((u32)(0x92bc78u)));
    /* 005c6423: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 005c6425: mov dword ptr [ebp - 0x34], edi */ W32((u32)(r_ebp+0xffffffccu), r_edi);
    /* 005c6428: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 005c642b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c642c: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005c642f: mov eax, dword ptr [0x92bc50] */ r_eax = R32((u32)(0x92bc50u));
    /* 005c6434: lea ecx, [edx + 0x24] */ r_ecx = (u32)(r_edx+0x24u);
    /* 005c6437: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005c643a: mov eax, dword ptr [esi + 0x5c] */ r_eax = R32((u32)(r_esi+0x5cu));
    /* 005c643d: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 005c6440: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005c6442: fnstcw word ptr [ebp - 0x78] */ W16((u32)(r_ebp+0xffffff88u), fcw);
    /* 005c6445: movzx eax, word ptr [ebp - 0x78] */ r_eax = (u32)R16((u32)(r_ebp+0xffffff88u));
    /* 005c6449: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005c644e: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 005c6451: fldcw word ptr [ebp - 0x70] */ fcw = R16((u32)(r_ebp+0xffffff90u));
    /* 005c6454: fistp qword ptr [ebp - 0x68] */ W64((u32)(r_ebp+0xffffff98u), (u64)fx_int64(ST(0))); FPOP();
    /* 005c6457: fldcw word ptr [ebp - 0x78] */ fcw = R16((u32)(r_ebp+0xffffff88u));
    /* 005c645a: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 005c645d: fld dword ptr [esi + 0x68] */ FPUSH(R_F32((u32)(r_esi+0x68u)));
    /* 005c6460: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 005c6462: mov byte ptr [ebp - 0x2f], al */ W8((u32)(r_ebp+0xffffffd1u), (u8)r_eax);
    /* 005c6465: fnstcw word ptr [ebp - 0x78] */ W16((u32)(r_ebp+0xffffff88u), fcw);
    /* 005c6468: movzx eax, word ptr [ebp - 0x78] */ r_eax = (u32)R16((u32)(r_ebp+0xffffff88u));
    /* 005c646c: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005c6471: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 005c6474: fldcw word ptr [ebp - 0x70] */ fcw = R16((u32)(r_ebp+0xffffff90u));
    /* 005c6477: fistp qword ptr [ebp - 0x68] */ W64((u32)(r_ebp+0xffffff98u), (u64)fx_int64(ST(0))); FPOP();
    /* 005c647a: fldcw word ptr [ebp - 0x78] */ fcw = R16((u32)(r_ebp+0xffffff88u));
    /* 005c647d: fld dword ptr [esi + 0x6c] */ FPUSH(R_F32((u32)(r_esi+0x6cu)));
    /* 005c6480: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 005c6482: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 005c6485: mov byte ptr [ebp - 0x2e], al */ W8((u32)(r_ebp+0xffffffd2u), (u8)r_eax);
    /* 005c6488: fnstcw word ptr [ebp - 0x78] */ W16((u32)(r_ebp+0xffffff88u), fcw);
    /* 005c648b: movzx eax, word ptr [ebp - 0x78] */ r_eax = (u32)R16((u32)(r_ebp+0xffffff88u));
    /* 005c648f: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005c6494: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 005c6497: fldcw word ptr [ebp - 0x70] */ fcw = R16((u32)(r_ebp+0xffffff90u));
    /* 005c649a: fistp qword ptr [ebp - 0x68] */ W64((u32)(r_ebp+0xffffff98u), (u64)fx_int64(ST(0))); FPOP();
    /* 005c649d: fldcw word ptr [ebp - 0x78] */ fcw = R16((u32)(r_ebp+0xffffff88u));
    /* 005c64a0: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 005c64a3: mov byte ptr [ebp - 0x2d], al */ W8((u32)(r_ebp+0xffffffd3u), (u8)r_eax);
    /* 005c64a6: lea eax, [ebp - 0x38] */ r_eax = (u32)(r_ebp+0xffffffc8u);
    /* 005c64a9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c64aa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c64ab: call 0x5dd7e8 */ r_esp -= 4; W32(r_esp, 0x5c64b0u); f_005dd7e8();
    /* 005c64b0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c64b3: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c64b6: mov dword ptr [edx + 0x12c], eax */ W32((u32)(r_edx+0x12cu), r_eax);
L_005c64bc:; BB(0x005c64bc);
    /* 005c64bc: mov edi, dword ptr [ebp - 0x3c] */ r_edi = R32((u32)(r_ebp+0xffffffc4u));
    /* 005c64bf: mov eax, dword ptr [edi + 0x70] */ r_eax = R32((u32)(r_edi+0x70u));
    /* 005c64c2: mov dword ptr [edx + 0x138], eax */ W32((u32)(r_edx+0x138u), r_eax);
    /* 005c64c8: mov ecx, dword ptr [edi + 0x74] */ r_ecx = R32((u32)(r_edi+0x74u));
    /* 005c64cb: mov dword ptr [edx + 0x13c], ecx */ W32((u32)(r_edx+0x13cu), r_ecx);
    /* 005c64d1: mov esi, dword ptr [edi + 0x40] */ r_esi = R32((u32)(r_edi+0x40u));
    /* 005c64d4: mov dword ptr [edx + 0xe4], esi */ W32((u32)(r_edx+0xe4u), r_esi);
    /* 005c64da: mov edx, dword ptr [edi + 0x40] */ r_edx = R32((u32)(r_edi+0x40u));
    /* 005c64dd: test edx, 0x800 */ {  u32 a = r_edx; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c64e3: je 0x5c662f */ if (fZ) goto L_005c662f;
L_005c64e9:; BB(0x005c64e9);
    /* 005c64e9: call 0x7b8cec */ r_esp -= 4; W32(r_esp, 0x5c64eeu); f_007b8cec();
    /* 005c64ee: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c64f1: add eax, 0x1c */ {  u32 a = r_eax; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c64f4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c64f5: call 0x7b8d60 */ r_esp -= 4; W32(r_esp, 0x5c64fau); f_007b8d60();
    /* 005c64fa: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005c64fb: mov edx, dword ptr [0xaae15c] */ r_edx = R32((u32)(0xaae15cu));
    /* 005c6501: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 005c6503: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c6505: je 0x5c68f8 */ if (fZ) goto L_005c68f8;
L_005c650b:; BB(0x005c650b);
    /* 005c650b: lea eax, [esi + esi] */ r_eax = (u32)(r_esi+r_esi);
    /* 005c650e: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 005c6511: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 005c6514: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c6517: lea edi, [ecx + ecx + 0xaad660] */ r_edi = (u32)(r_ecx+r_ecx+0xaad660u);
    /* 005c651e: mov ecx, dword ptr [eax + 0xa0] */ r_ecx = R32((u32)(r_eax+0xa0u));
    /* 005c6524: mov dword ptr [ebp - 0x44], edi */ W32((u32)(r_ebp+0xffffffbcu), r_edi);
    /* 005c6527: cmp ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c652a: jge 0x5c65eb */ if ((fS==fO)) goto L_005c65eb;
L_005c6530:; BB(0x005c6530);
    /* 005c6530: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005c6533: mov edi, dword ptr [ecx*4 + 0xaad660] */ r_edi = R32((u32)(r_ecx*4+0xaad660u));
    /* 005c653a: movzx ecx, word ptr [edi + 0x1c] */ r_ecx = (u32)R16((u32)(r_edi+0x1cu));
    /* 005c653e: movzx eax, word ptr [eax + 0xa8] */ r_eax = (u32)R16((u32)(r_eax+0xa8u));
    /* 005c6545: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c6547: je 0x5c65eb */ if (fZ) goto L_005c65eb;
L_005c654d:; BB(0x005c654d);
    /* 005c654d: mov eax, 1 */ r_eax = 0x1u;
    /* 005c6552: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 005c6555: call 0x687c48 */ r_esp -= 4; W32(r_esp, 0x5c655au); f_00687c48();
    /* 005c655a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c655c: je 0x5c656d */ if (fZ) goto L_005c656d;
L_005c655e:; BB(0x005c655e);
    /* 005c655e: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 005c6561: mov ecx, dword ptr [eax*4 + 0xaad660] */ r_ecx = R32((u32)(r_eax*4+0xaad660u));
    /* 005c6568: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 005c656b: jmp 0x5c658c */ goto L_005c658c;
L_005c656d:; BB(0x005c656d);
    /* 005c656d: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005c6570: mov ecx, dword ptr [ecx*4 + 0xaad660] */ r_ecx = R32((u32)(r_ecx*4+0xaad660u));
    /* 005c6577: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 005c657a: mov eax, edx */ r_eax = r_edx;
    /* 005c657c: and eax, 0x60000000 */ {  u32 a = r_eax; u32 b = 0x60000000u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005c6581: cmp eax, 0x20000000 */ {  u32 a = r_eax; u32 b = 0x20000000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c6586: je 0x5c69e5 */ if (fZ) goto L_005c69e5;
L_005c658c:; BB(0x005c658c);
    /* 005c658c: test edx, 0x4000000 */ {  u32 a = r_edx; u32 b = 0x4000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c6592: je 0x5c659c */ if (fZ) goto L_005c659c;
L_005c6594:; BB(0x005c6594);
    /* 005c6594: mov edx, dword ptr [0xaae15c] */ r_edx = R32((u32)(0xaae15cu));
    /* 005c659a: jmp 0x5c65eb */ goto L_005c65eb;
L_005c659c:; BB(0x005c659c);
    /* 005c659c: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005c659f: mov edi, dword ptr [edx*4 + 0xaad664] */ r_edi = R32((u32)(r_edx*4+0xaad664u));
    /* 005c65a6: mov eax, dword ptr [ecx + 0xa4] */ r_eax = R32((u32)(r_ecx+0xa4u));
    /* 005c65ac: mov dword ptr [ebp - 0x54], edi */ W32((u32)(r_ebp+0xffffffacu), r_edi);
    /* 005c65af: lea edx, [edi + edi] */ r_edx = (u32)(r_edi+r_edi);
    /* 005c65b2: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c65b4: sub edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005c65b6: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c65b8: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c65ba: sub edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005c65bc: mov eax, dword ptr [eax + edx*4 + 0x18] */ r_eax = R32((u32)(r_eax+r_edx*4+0x18u));
    /* 005c65c0: test eax, 0x2000000 */ {  u32 a = r_eax; u32 b = 0x2000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c65c5: je 0x5c65cf */ if (fZ) goto L_005c65cf;
L_005c65c7:; BB(0x005c65c7);
    /* 005c65c7: mov edx, dword ptr [0xaae15c] */ r_edx = R32((u32)(0xaae15cu));
    /* 005c65cd: jmp 0x5c65eb */ goto L_005c65eb;
L_005c65cf:; BB(0x005c65cf);
    /* 005c65cf: test eax, 0x1000 */ {  u32 a = r_eax; u32 b = 0x1000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c65d4: je 0x5c65de */ if (fZ) goto L_005c65de;
L_005c65d6:; BB(0x005c65d6);
    /* 005c65d6: mov edx, dword ptr [0xaae15c] */ r_edx = R32((u32)(0xaae15cu));
    /* 005c65dc: jmp 0x5c65eb */ goto L_005c65eb;
L_005c65de:; BB(0x005c65de);
    /* 005c65de: test eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c65e3: je 0x5c65fb */ if (fZ) goto L_005c65fb;
L_005c65e5:; BB(0x005c65e5);
    /* 005c65e5: mov edx, dword ptr [0xaae15c] */ r_edx = R32((u32)(0xaae15cu));
L_005c65eb:; BB(0x005c65eb);
    /* 005c65eb: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005c65ee: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c65f0: jne 0x5c650b */ if (!fZ) goto L_005c650b;
L_005c65f6:; BB(0x005c65f6);
    /* 005c65f6: jmp 0x5c68f8 */ goto L_005c68f8;
L_005c65fb:; BB(0x005c65fb);
    /* 005c65fb: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 005c65fe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c6600: je 0x5c69da */ if (fZ) goto L_005c69da;
L_005c6606:; BB(0x005c6606);
    /* 005c6606: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c6609: lea eax, [edx + 0x60] */ r_eax = (u32)(r_edx+0x60u);
    /* 005c660c: mov edx, dword ptr [edx + 0xa0] */ r_edx = R32((u32)(r_edx+0xa0u));
    /* 005c6612: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c6614: je 0x5c6947 */ if (fZ) goto L_005c6947;
L_005c661a:; BB(0x005c661a);
    /* 005c661a: cmp ecx, dword ptr [eax] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c661c: je 0x5c69c3 */ if (fZ) goto L_005c69c3;
L_005c6622:; BB(0x005c6622);
    /* 005c6622: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c6625: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 005c6628: jne 0x5c661a */ if (!fZ) goto L_005c661a;
L_005c662a:; BB(0x005c662a);
    /* 005c662a: jmp 0x5c6947 */ goto L_005c6947;
L_005c662f:; BB(0x005c662f);
    /* 005c662f: call 0x7b8cec */ r_esp -= 4; W32(r_esp, 0x5c6634u); f_007b8cec();
    /* 005c6634: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c6637: add eax, 0x1c */ {  u32 a = r_eax; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c663a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c663b: call 0x7b976c */ r_esp -= 4; W32(r_esp, 0x5c6640u); f_007b976c();
    /* 005c6640: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005c6641: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c6644: mov eax, dword ptr [edx + 0xc0] */ r_eax = R32((u32)(r_edx+0xc0u));
    /* 005c664a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c664c: je 0x5c665b */ if (fZ) goto L_005c665b;
L_005c664e:; BB(0x005c664e);
    /* 005c664e: add edx, 0x1c */ {  u32 a = r_edx; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c6651: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c6652: call 0x7b8d60 */ r_esp -= 4; W32(r_esp, 0x5c6657u); f_007b8d60();
    /* 005c6657: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005c6658: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
L_005c665b:; BB(0x005c665b);
    /* 005c665b: mov eax, dword ptr [edx + 0xbc] */ r_eax = R32((u32)(r_edx+0xbcu));
    /* 005c6661: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c6663: je 0x5c666f */ if (fZ) goto L_005c666f;
L_005c6665:; BB(0x005c6665);
    /* 005c6665: add edx, 0x1c */ {  u32 a = r_edx; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c6668: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c6669: call 0x7b9788 */ r_esp -= 4; W32(r_esp, 0x5c666eu); f_007b9788();
    /* 005c666e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_005c666f:; BB(0x005c666f);
    /* 005c666f: mov edx, dword ptr [0xaae15c] */ r_edx = R32((u32)(0xaae15cu));
    /* 005c6675: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 005c6677: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c6679: je 0x5c6a18 */ if (fZ) goto L_005c6a18;
L_005c667f:; BB(0x005c667f);
    /* 005c667f: lea eax, [esi + esi] */ r_eax = (u32)(r_esi+r_esi);
    /* 005c6682: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 005c6685: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 005c6688: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c668b: lea edi, [ecx + ecx + 0xaad660] */ r_edi = (u32)(r_ecx+r_ecx+0xaad660u);
    /* 005c6692: mov ecx, dword ptr [eax + 0xa0] */ r_ecx = R32((u32)(r_eax+0xa0u));
    /* 005c6698: mov dword ptr [ebp - 0x44], edi */ W32((u32)(r_ebp+0xffffffbcu), r_edi);
    /* 005c669b: cmp ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c669e: jge 0x5c675f */ if ((fS==fO)) goto L_005c675f;
L_005c66a4:; BB(0x005c66a4);
    /* 005c66a4: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005c66a7: mov edi, dword ptr [ecx*4 + 0xaad660] */ r_edi = R32((u32)(r_ecx*4+0xaad660u));
    /* 005c66ae: movzx ecx, word ptr [edi + 0x1c] */ r_ecx = (u32)R16((u32)(r_edi+0x1cu));
    /* 005c66b2: movzx eax, word ptr [eax + 0xa8] */ r_eax = (u32)R16((u32)(r_eax+0xa8u));
    /* 005c66b9: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c66bb: je 0x5c675f */ if (fZ) goto L_005c675f;
L_005c66c1:; BB(0x005c66c1);
    /* 005c66c1: mov eax, 1 */ r_eax = 0x1u;
    /* 005c66c6: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 005c66c9: call 0x687c48 */ r_esp -= 4; W32(r_esp, 0x5c66ceu); f_00687c48();
    /* 005c66ce: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c66d0: je 0x5c66e1 */ if (fZ) goto L_005c66e1;
L_005c66d2:; BB(0x005c66d2);
    /* 005c66d2: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 005c66d5: mov ecx, dword ptr [eax*4 + 0xaad660] */ r_ecx = R32((u32)(r_eax*4+0xaad660u));
    /* 005c66dc: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 005c66df: jmp 0x5c6700 */ goto L_005c6700;
L_005c66e1:; BB(0x005c66e1);
    /* 005c66e1: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005c66e4: mov ecx, dword ptr [ecx*4 + 0xaad660] */ r_ecx = R32((u32)(r_ecx*4+0xaad660u));
    /* 005c66eb: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 005c66ee: mov eax, edx */ r_eax = r_edx;
    /* 005c66f0: and eax, 0x60000000 */ {  u32 a = r_eax; u32 b = 0x60000000u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005c66f5: cmp eax, 0x20000000 */ {  u32 a = r_eax; u32 b = 0x20000000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c66fa: je 0x5c6a44 */ if (fZ) goto L_005c6a44;
L_005c6700:; BB(0x005c6700);
    /* 005c6700: test edx, 0x4000000 */ {  u32 a = r_edx; u32 b = 0x4000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c6706: je 0x5c6710 */ if (fZ) goto L_005c6710;
L_005c6708:; BB(0x005c6708);
    /* 005c6708: mov edx, dword ptr [0xaae15c] */ r_edx = R32((u32)(0xaae15cu));
    /* 005c670e: jmp 0x5c675f */ goto L_005c675f;
L_005c6710:; BB(0x005c6710);
    /* 005c6710: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005c6713: mov edi, dword ptr [edx*4 + 0xaad664] */ r_edi = R32((u32)(r_edx*4+0xaad664u));
    /* 005c671a: mov eax, dword ptr [ecx + 0xa4] */ r_eax = R32((u32)(r_ecx+0xa4u));
    /* 005c6720: mov dword ptr [ebp - 0x54], edi */ W32((u32)(r_ebp+0xffffffacu), r_edi);
    /* 005c6723: lea edx, [edi + edi] */ r_edx = (u32)(r_edi+r_edi);
    /* 005c6726: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c6728: sub edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005c672a: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c672c: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c672e: sub edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005c6730: mov eax, dword ptr [eax + edx*4 + 0x18] */ r_eax = R32((u32)(r_eax+r_edx*4+0x18u));
    /* 005c6734: test eax, 0x2000000 */ {  u32 a = r_eax; u32 b = 0x2000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c6739: je 0x5c6743 */ if (fZ) goto L_005c6743;
L_005c673b:; BB(0x005c673b);
    /* 005c673b: mov edx, dword ptr [0xaae15c] */ r_edx = R32((u32)(0xaae15cu));
    /* 005c6741: jmp 0x5c675f */ goto L_005c675f;
L_005c6743:; BB(0x005c6743);
    /* 005c6743: test eax, 0x1000 */ {  u32 a = r_eax; u32 b = 0x1000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c6748: je 0x5c6752 */ if (fZ) goto L_005c6752;
L_005c674a:; BB(0x005c674a);
    /* 005c674a: mov edx, dword ptr [0xaae15c] */ r_edx = R32((u32)(0xaae15cu));
    /* 005c6750: jmp 0x5c675f */ goto L_005c675f;
L_005c6752:; BB(0x005c6752);
    /* 005c6752: test eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c6757: je 0x5c676f */ if (fZ) goto L_005c676f;
L_005c6759:; BB(0x005c6759);
    /* 005c6759: mov edx, dword ptr [0xaae15c] */ r_edx = R32((u32)(0xaae15cu));
L_005c675f:; BB(0x005c675f);
    /* 005c675f: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005c6762: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c6764: jne 0x5c667f */ if (!fZ) goto L_005c667f;
L_005c676a:; BB(0x005c676a);
    /* 005c676a: jmp 0x5c6a18 */ goto L_005c6a18;
L_005c676f:; BB(0x005c676f);
    /* 005c676f: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 005c6772: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c6774: je 0x5c6a39 */ if (fZ) goto L_005c6a39;
L_005c677a:; BB(0x005c677a);
    /* 005c677a: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c677d: lea eax, [edx + 0x60] */ r_eax = (u32)(r_edx+0x60u);
    /* 005c6780: mov edx, dword ptr [edx + 0xa0] */ r_edx = R32((u32)(r_edx+0xa0u));
    /* 005c6786: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c6788: je 0x5c679a */ if (fZ) goto L_005c679a;
L_005c678a:; BB(0x005c678a);
    /* 005c678a: cmp ecx, dword ptr [eax] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c678c: je 0x5c6a22 */ if (fZ) goto L_005c6a22;
L_005c6792:; BB(0x005c6792);
    /* 005c6792: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c6795: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 005c6798: jne 0x5c678a */ if (!fZ) goto L_005c678a;
L_005c679a:; BB(0x005c679a);
    /* 005c679a: movzx edx, word ptr [ecx + 0x96] */ r_edx = (u32)R16((u32)(r_ecx+0x96u));
    /* 005c67a1: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c67a4: jne 0x5c67ad */ if (!fZ) goto L_005c67ad;
L_005c67a6:; BB(0x005c67a6);
    /* 005c67a6: mov edx, 1 */ r_edx = 0x1u;
    /* 005c67ab: jmp 0x5c67af */ goto L_005c67af;
L_005c67ad:; BB(0x005c67ad);
    /* 005c67ad: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_005c67af:; BB(0x005c67af);
    /* 005c67af: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c67b1: je 0x5c67f4 */ if (fZ) goto L_005c67f4;
L_005c67b3:; BB(0x005c67b3);
    /* 005c67b3: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005c67b6: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 005c67b8: mov edi, dword ptr [edx*4 + 0xaad664] */ r_edi = R32((u32)(r_edx*4+0xaad664u));
    /* 005c67bf: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c67c2: mov dword ptr [eax + 4], edi */ W32((u32)(r_eax+0x4u), r_edi);
    /* 005c67c5: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005c67c7: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 005c67ca: add dword ptr [ecx + 0xa0], 1 */ { u32 ad = (u32)(r_ecx+0xa0u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 005c67d1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c67d2: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5c67d5u); call_ind(t); }
    /* 005c67d5: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c67d8: mov eax, dword ptr [edx + 0xa4] */ r_eax = R32((u32)(r_edx+0xa4u));
    /* 005c67de: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 005c67e1: mov dword ptr [edx + 0xa4], eax */ W32((u32)(r_edx+0xa4u), r_eax);
    /* 005c67e7: je 0x5c67ff */ if (fZ) goto L_005c67ff;
L_005c67e9:; BB(0x005c67e9);
    /* 005c67e9: mov edx, dword ptr [0xaae15c] */ r_edx = R32((u32)(0xaae15cu));
    /* 005c67ef: jmp 0x5c675f */ goto L_005c675f;
L_005c67f4:; BB(0x005c67f4);
    /* 005c67f4: mov edx, dword ptr [0xaae15c] */ r_edx = R32((u32)(0xaae15cu));
    /* 005c67fa: jmp 0x5c675f */ goto L_005c675f;
L_005c67ff:; BB(0x005c67ff);
    /* 005c67ff: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 005c6803: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005c6808: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 005c680c: call 0x7b8cec */ r_esp -= 4; W32(r_esp, 0x5c6811u); f_007b8cec();
L_005c6811:; BB(0x005c6811);
    /* 005c6811: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 005c6814: mov eax, dword ptr [eax + 0x78] */ r_eax = R32((u32)(r_eax+0x78u));
    /* 005c6817: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c681a: je 0x5c686b */ if (fZ) goto L_005c686b;
L_005c681c:; BB(0x005c681c);
    /* 005c681c: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c681f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c6820: add edx, 0x24 */ {  u32 a = r_edx; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c6823: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c6824: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x5c6829u); f_00509590();
    /* 005c6829: mov edx, eax */ r_edx = r_eax;
    /* 005c682b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c682e: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c6831: mov dword ptr [eax + 0x130], edx */ W32((u32)(r_eax+0x130u), r_edx);
    /* 005c6837: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c6839: je 0x5c6878 */ if (fZ) goto L_005c6878;
L_005c683b:; BB(0x005c683b);
    /* 005c683b: mov eax, dword ptr [0x9c2100] */ r_eax = R32((u32)(0x9c2100u));
    /* 005c6840: mov esi, dword ptr [0x9c2104] */ r_esi = R32((u32)(0x9c2104u));
    /* 005c6846: mov edi, dword ptr [0x9c2108] */ r_edi = R32((u32)(0x9c2108u));
    /* 005c684c: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005c684f: add eax, dword ptr [ecx + 0x28] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x28u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c6852: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 005c6855: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005c6858: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005c685b: lea ecx, [ebp - 0x24] */ r_ecx = (u32)(r_ebp+0xffffffdcu);
    /* 005c685e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c685f: mov ecx, edx */ r_ecx = r_edx;
    /* 005c6861: call 0x508dd0 */ r_esp -= 4; W32(r_esp, 0x5c6866u); f_00508dd0();
    /* 005c6866: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c6869: jmp 0x5c6878 */ goto L_005c6878;
L_005c686b:; BB(0x005c686b);
    /* 005c686b: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c686e: mov dword ptr [eax + 0x130], 0 */ W32((u32)(r_eax+0x130u), 0x0u);
L_005c6878:; BB(0x005c6878);
    /* 005c6878: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005c687b: mov edx, dword ptr [edx + 0x7c] */ r_edx = R32((u32)(r_edx+0x7cu));
    /* 005c687e: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c6881: je 0x5c689d */ if (fZ) goto L_005c689d;
L_005c6883:; BB(0x005c6883);
    /* 005c6883: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c6884: add eax, 0x24 */ {  u32 a = r_eax; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c6887: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c6888: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x5c688du); f_00509590();
    /* 005c688d: mov edx, eax */ r_edx = r_eax;
    /* 005c688f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c6892: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c6895: mov dword ptr [eax + 0x134], edx */ W32((u32)(r_eax+0x134u), r_edx);
    /* 005c689b: jmp 0x5c68a7 */ goto L_005c68a7;
L_005c689d:; BB(0x005c689d);
    /* 005c689d: mov dword ptr [eax + 0x134], 0 */ W32((u32)(r_eax+0x134u), 0x0u);
L_005c68a7:; BB(0x005c68a7);
    /* 005c68a7: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005c68aa: mov ecx, dword ptr [edx + 0x40] */ r_ecx = R32((u32)(r_edx+0x40u));
    /* 005c68ad: test cl, 0x10 */ {  u32 a = (u8)r_ecx; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c68b0: jne 0x5c68be */ if (!fZ) goto L_005c68be;
L_005c68b2:; BB(0x005c68b2);
    /* 005c68b2: mov dword ptr [eax + 0x140], 0 */ W32((u32)(r_eax+0x140u), 0x0u);
    /* 005c68bc: jmp 0x5c68df */ goto L_005c68df;
L_005c68be:; BB(0x005c68be);
    /* 005c68be: push 0x2000 */ { u32 v = 0x2000u; r_esp -= 4; W32(r_esp, v); }
    /* 005c68c3: push 0x19e */ { u32 v = 0x19eu; r_esp -= 4; W32(r_esp, v); }
    /* 005c68c8: add eax, 0x24 */ {  u32 a = r_eax; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c68cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c68cc: call 0x50981c */ r_esp -= 4; W32(r_esp, 0x5c68d1u); f_0050981c();
    /* 005c68d1: mov edx, eax */ r_edx = r_eax;
    /* 005c68d3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005c68d6: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c68d9: mov dword ptr [eax + 0x140], edx */ W32((u32)(r_eax+0x140u), r_edx);
L_005c68df:; BB(0x005c68df);
    /* 005c68df: mov edi, dword ptr [ebp - 0x60] */ r_edi = R32((u32)(r_ebp+0xffffffa0u));
    /* 005c68e2: mov esi, dword ptr [ebp - 0x5c] */ r_esi = R32((u32)(r_ebp+0xffffffa4u));
    /* 005c68e5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c68e8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005c68ef: mov esp, ebp */ r_esp = r_ebp;
    /* 005c68f1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c68f2: mov esp, ebx */ r_esp = r_ebx;
    /* 005c68f4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005c68f5: ret 8 */ FN_RET(0x005c6269); r_esp += 12; return;
L_005c68f8:; BB(0x005c68f8);
    /* 005c68f8: call 0x7b8cec */ r_esp -= 4; W32(r_esp, 0x5c68fdu); f_007b8cec();
L_005c68fd:; BB(0x005c68fd);
    /* 005c68fd: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c6900: mov esi, dword ptr [eax + 0x138] */ r_esi = R32((u32)(r_eax+0x138u));
    /* 005c6906: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c6908: je 0x5c6923 */ if (fZ) goto L_005c6923;
L_005c690a:; BB(0x005c690a);
    /* 005c690a: lea ecx, [eax + 0x24] */ r_ecx = (u32)(r_eax+0x24u);
    /* 005c690d: lea edx, [eax + 0xd0] */ r_edx = (u32)(r_eax+0xd0u);
    /* 005c6913: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c6914: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c6915: push dword ptr [eax + 0xac] */ { u32 v = R32((u32)(r_eax+0xacu)); r_esp -= 4; W32(r_esp, v); }
    /* 005c691b: call esi */ { u32 t = r_esi; r_esp -= 4; W32(r_esp, 0x5c691du); call_ind(t); }
    /* 005c691d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c6920: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
L_005c6923:; BB(0x005c6923);
    /* 005c6923: movzx ecx, word ptr [eax + 8] */ r_ecx = (u32)R16((u32)(r_eax+0x8u));
    /* 005c6927: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005c6929: mov dword ptr [eax + 0x130], edx */ W32((u32)(r_eax+0x130u), r_edx);
    /* 005c692f: mov dword ptr [eax + 0x134], edx */ W32((u32)(r_eax+0x134u), r_edx);
    /* 005c6935: mov dword ptr [eax + 0x140], edx */ W32((u32)(r_eax+0x140u), r_edx);
    /* 005c693b: or ecx, 0xffff0011 */ {  u32 a = r_ecx; u32 b = 0xffff0011u; u32 r = (a | b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c6941: mov word ptr [eax + 8], cx */ W16((u32)(r_eax+0x8u), (u16)r_ecx);
    /* 005c6945: jmp 0x5c68df */ goto L_005c68df;
L_005c6947:; BB(0x005c6947);
    /* 005c6947: movzx edx, word ptr [ecx + 0x96] */ r_edx = (u32)R16((u32)(r_ecx+0x96u));
    /* 005c694e: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c6951: jne 0x5c695a */ if (!fZ) goto L_005c695a;
L_005c6953:; BB(0x005c6953);
    /* 005c6953: mov edx, 1 */ r_edx = 0x1u;
    /* 005c6958: jmp 0x5c695c */ goto L_005c695c;
L_005c695a:; BB(0x005c695a);
    /* 005c695a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_005c695c:; BB(0x005c695c);
    /* 005c695c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c695e: je 0x5c69a1 */ if (fZ) goto L_005c69a1;
L_005c6960:; BB(0x005c6960);
    /* 005c6960: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005c6963: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 005c6965: mov edi, dword ptr [edx*4 + 0xaad664] */ r_edi = R32((u32)(r_edx*4+0xaad664u));
    /* 005c696c: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c696f: mov dword ptr [eax + 4], edi */ W32((u32)(r_eax+0x4u), r_edi);
    /* 005c6972: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005c6974: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 005c6977: add dword ptr [ecx + 0xa0], 1 */ { u32 ad = (u32)(r_ecx+0xa0u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 005c697e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c697f: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5c6982u); call_ind(t); }
    /* 005c6982: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c6985: mov eax, dword ptr [edx + 0xa4] */ r_eax = R32((u32)(r_edx+0xa4u));
    /* 005c698b: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 005c698e: mov dword ptr [edx + 0xa4], eax */ W32((u32)(r_edx+0xa4u), r_eax);
    /* 005c6994: je 0x5c69ac */ if (fZ) goto L_005c69ac;
L_005c6996:; BB(0x005c6996);
    /* 005c6996: mov edx, dword ptr [0xaae15c] */ r_edx = R32((u32)(0xaae15cu));
    /* 005c699c: jmp 0x5c65eb */ goto L_005c65eb;
L_005c69a1:; BB(0x005c69a1);
    /* 005c69a1: mov edx, dword ptr [0xaae15c] */ r_edx = R32((u32)(0xaae15cu));
    /* 005c69a7: jmp 0x5c65eb */ goto L_005c65eb;
L_005c69ac:; BB(0x005c69ac);
    /* 005c69ac: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 005c69b0: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005c69b5: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 005c69b9: call 0x7b8cec */ r_esp -= 4; W32(r_esp, 0x5c69beu); f_007b8cec();
    /* 005c69be: jmp 0x5c68fd */ goto L_005c68fd;
L_005c69c3:; BB(0x005c69c3);
    /* 005c69c3: mov edi, dword ptr [ebp - 0x54] */ r_edi = R32((u32)(r_ebp+0xffffffacu));
    /* 005c69c6: cmp edi, dword ptr [eax + 4] */ {  u32 a = r_edi; u32 b = R32((u32)(r_eax+0x4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c69c9: jne 0x5c6622 */ if (!fZ) goto L_005c6622;
L_005c69cf:; BB(0x005c69cf);
    /* 005c69cf: mov edx, dword ptr [0xaae15c] */ r_edx = R32((u32)(0xaae15cu));
    /* 005c69d5: jmp 0x5c65eb */ goto L_005c65eb;
L_005c69da:; BB(0x005c69da);
    /* 005c69da: mov edx, dword ptr [0xaae15c] */ r_edx = R32((u32)(0xaae15cu));
    /* 005c69e0: jmp 0x5c65eb */ goto L_005c65eb;
L_005c69e5:; BB(0x005c69e5);
    /* 005c69e5: call 0x7ba980 */ r_esp -= 4; W32(r_esp, 0x5c69eau); f_007ba980();
    /* 005c69ea: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005c69ed: mov ecx, dword ptr [ecx*4 + 0xaad660] */ r_ecx = R32((u32)(r_ecx*4+0xaad660u));
    /* 005c69f4: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c69f7: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 005c69fa: cmp ax, word ptr [edx + 0xaa] */ {  u32 a = (u16)r_eax; u32 b = R16((u32)(r_edx+0xaau)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 005c6a01: je 0x5c6a10 */ if (fZ) goto L_005c6a10;
L_005c6a03:; BB(0x005c6a03);
    /* 005c6a03: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 005c6a06: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005c6a08: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 005c6a0b: jmp 0x5c658c */ goto L_005c658c;
L_005c6a10:; BB(0x005c6a10);
    /* 005c6a10: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 005c6a13: jmp 0x5c658c */ goto L_005c658c;
L_005c6a18:; BB(0x005c6a18);
    /* 005c6a18: call 0x7b8cec */ r_esp -= 4; W32(r_esp, 0x5c6a1du); f_007b8cec();
    /* 005c6a1d: jmp 0x5c6811 */ goto L_005c6811;
L_005c6a22:; BB(0x005c6a22);
    /* 005c6a22: mov edi, dword ptr [ebp - 0x54] */ r_edi = R32((u32)(r_ebp+0xffffffacu));
    /* 005c6a25: cmp edi, dword ptr [eax + 4] */ {  u32 a = r_edi; u32 b = R32((u32)(r_eax+0x4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c6a28: jne 0x5c6792 */ if (!fZ) goto L_005c6792;
L_005c6a2e:; BB(0x005c6a2e);
    /* 005c6a2e: mov edx, dword ptr [0xaae15c] */ r_edx = R32((u32)(0xaae15cu));
    /* 005c6a34: jmp 0x5c675f */ goto L_005c675f;
L_005c6a39:; BB(0x005c6a39);
    /* 005c6a39: mov edx, dword ptr [0xaae15c] */ r_edx = R32((u32)(0xaae15cu));
    /* 005c6a3f: jmp 0x5c675f */ goto L_005c675f;
L_005c6a44:; BB(0x005c6a44);
    /* 005c6a44: call 0x7ba980 */ r_esp -= 4; W32(r_esp, 0x5c6a49u); f_007ba980();
    /* 005c6a49: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005c6a4c: mov ecx, dword ptr [ecx*4 + 0xaad660] */ r_ecx = R32((u32)(r_ecx*4+0xaad660u));
    /* 005c6a53: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c6a56: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 005c6a59: cmp ax, word ptr [edx + 0xaa] */ {  u32 a = (u16)r_eax; u32 b = R16((u32)(r_edx+0xaau)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 005c6a60: je 0x5c6a6f */ if (fZ) goto L_005c6a6f;
L_005c6a62:; BB(0x005c6a62);
    /* 005c6a62: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 005c6a65: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005c6a67: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 005c6a6a: jmp 0x5c6700 */ goto L_005c6700;
L_005c6a6f:; BB(0x005c6a6f);
    /* 005c6a6f: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 005c6a72: jmp 0x5c6700 */ goto L_005c6700;
}

void f_005c6a78(void) /* sub_5C6A78 */
{
    FN_ENTER(0x005c6a78);
    /* 005c6a78: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c6a79: mov ebp, esp */ r_ebp = r_esp;
    /* 005c6a7b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005c6a7d: push 0x8d9934 */ { u32 v = 0x8d9934u; r_esp -= 4; W32(r_esp, v); }
    /* 005c6a82: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005c6a88: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c6a89: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005c6a90: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c6a93: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005c6a96: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005c6a99: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005c6a9c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005c6a9f: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005c6aa2: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005c6aa5: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005c6aa8: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005c6aab: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x5c6ab0u); f_008193cc();
    /* 005c6ab0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005c6ab7: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c6aba: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 005c6abd: mov dword ptr [eax], 0xb0c1a8 */ W32((u32)(r_eax), 0xb0c1a8u);
    /* 005c6ac3: lea ecx, [eax + 0x34] */ r_ecx = (u32)(r_eax+0x34u);
    /* 005c6ac6: mov dword ptr [eax + 0x34], 0 */ W32((u32)(r_eax+0x34u), 0x0u);
    /* 005c6acd: mov dword ptr [eax + 0x38], 0 */ W32((u32)(r_eax+0x38u), 0x0u);
    /* 005c6ad4: mov dword ptr [eax + 0x3c], 0 */ W32((u32)(r_eax+0x3cu), 0x0u);
    /* 005c6adb: mov edx, dword ptr [edi + 0xc] */ r_edx = R32((u32)(r_edi+0xcu));
    /* 005c6ade: mov dword ptr [eax + 0x40], edx */ W32((u32)(r_eax+0x40u), r_edx);
    /* 005c6ae1: mov dword ptr [eax + 0x1c], ecx */ W32((u32)(r_eax+0x1cu), r_ecx);
    /* 005c6ae4: mov dword ptr [eax + 0x44], 0 */ W32((u32)(r_eax+0x44u), 0x0u);
    /* 005c6aeb: mov dword ptr [eax + 0x48], 0 */ W32((u32)(r_eax+0x48u), 0x0u);
    /* 005c6af2: mov dword ptr [eax + 0x4c], 0x41f07 */ W32((u32)(r_eax+0x4cu), 0x41f07u);
    /* 005c6af9: mov dword ptr [eax + 0x50], 0 */ W32((u32)(r_eax+0x50u), 0x0u);
    /* 005c6b00: mov dword ptr [eax + 0x54], 0 */ W32((u32)(r_eax+0x54u), 0x0u);
    /* 005c6b07: mov dword ptr [eax + 0x58], 0 */ W32((u32)(r_eax+0x58u), 0x0u);
    /* 005c6b0e: mov dword ptr [eax + 0x5c], 0 */ W32((u32)(r_eax+0x5cu), 0x0u);
    /* 005c6b15: mov dword ptr [eax + 0x20], 1 */ W32((u32)(r_eax+0x20u), 0x1u);
    /* 005c6b1c: mov ebx, dword ptr [edi] */ r_ebx = R32((u32)(r_edi));
    /* 005c6b1e: mov dword ptr [eax + 0x24], ebx */ W32((u32)(r_eax+0x24u), r_ebx);
    /* 005c6b21: mov esi, dword ptr [edi + 4] */ r_esi = R32((u32)(r_edi+0x4u));
    /* 005c6b24: mov dword ptr [eax + 0x28], esi */ W32((u32)(r_eax+0x28u), r_esi);
    /* 005c6b27: mov edx, dword ptr [edi + 8] */ r_edx = R32((u32)(r_edi+0x8u));
    /* 005c6b2a: mov dword ptr [eax + 0x2c], edx */ W32((u32)(r_eax+0x2cu), r_edx);
    /* 005c6b2d: add eax, 0x60 */ {  u32 a = r_eax; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c6b30: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005c6b32: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 005c6b34: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 005c6b37: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
    /* 005c6b3a: mov dword ptr [eax + 0xc], edx */ W32((u32)(r_eax+0xcu), r_edx);
    /* 005c6b3d: mov dword ptr [eax + 0x10], edx */ W32((u32)(r_eax+0x10u), r_edx);
    /* 005c6b40: mov dword ptr [eax + 0x14], edx */ W32((u32)(r_eax+0x14u), r_edx);
    /* 005c6b43: mov dword ptr [eax + 0x18], edx */ W32((u32)(r_eax+0x18u), r_edx);
    /* 005c6b46: mov dword ptr [eax + 0x1c], edx */ W32((u32)(r_eax+0x1cu), r_edx);
    /* 005c6b49: mov dword ptr [eax + 0x20], edx */ W32((u32)(r_eax+0x20u), r_edx);
    /* 005c6b4c: mov dword ptr [eax + 0x24], edx */ W32((u32)(r_eax+0x24u), r_edx);
    /* 005c6b4f: mov dword ptr [eax + 0x28], edx */ W32((u32)(r_eax+0x28u), r_edx);
    /* 005c6b52: mov dword ptr [eax + 0x2c], edx */ W32((u32)(r_eax+0x2cu), r_edx);
    /* 005c6b55: mov dword ptr [eax + 0x30], edx */ W32((u32)(r_eax+0x30u), r_edx);
    /* 005c6b58: mov dword ptr [eax + 0x34], edx */ W32((u32)(r_eax+0x34u), r_edx);
    /* 005c6b5b: mov dword ptr [eax + 0x38], edx */ W32((u32)(r_eax+0x38u), r_edx);
    /* 005c6b5e: mov dword ptr [eax + 0x3c], edx */ W32((u32)(r_eax+0x3cu), r_edx);
    /* 005c6b61: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c6b64: mov edx, edi */ r_edx = r_edi;
    /* 005c6b66: mov dword ptr [eax + 0xa0], 0 */ W32((u32)(r_eax+0xa0u), 0x0u);
    /* 005c6b70: mov ecx, dword ptr [edx + 0x10] */ r_ecx = R32((u32)(r_edx+0x10u));
    /* 005c6b73: mov dword ptr [eax + 0xa4], ecx */ W32((u32)(r_eax+0xa4u), r_ecx);
    /* 005c6b79: movzx ebx, word ptr [edx + 0x14] */ r_ebx = (u32)R16((u32)(r_edx+0x14u));
    /* 005c6b7d: mov word ptr [eax + 0xa8], bx */ W16((u32)(r_eax+0xa8u), (u16)r_ebx);
    /* 005c6b84: movzx esi, word ptr [edx + 0x16] */ r_esi = (u32)R16((u32)(r_edx+0x16u));
    /* 005c6b88: mov word ptr [eax + 0xaa], si */ W16((u32)(r_eax+0xaau), (u16)r_esi);
    /* 005c6b8f: mov edi, dword ptr [edx + 0x18] */ r_edi = R32((u32)(r_edx+0x18u));
    /* 005c6b92: mov dword ptr [eax + 0xac], edi */ W32((u32)(r_eax+0xacu), r_edi);
    /* 005c6b98: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 005c6b9b: mov dword ptr [eax + 0xb0], ecx */ W32((u32)(r_eax+0xb0u), r_ecx);
    /* 005c6ba1: mov ecx, dword ptr [edx + 0x20] */ r_ecx = R32((u32)(r_edx+0x20u));
    /* 005c6ba4: mov dword ptr [eax + 0xb4], ecx */ W32((u32)(r_eax+0xb4u), r_ecx);
    /* 005c6baa: mov ecx, dword ptr [edx + 0x24] */ r_ecx = R32((u32)(r_edx+0x24u));
    /* 005c6bad: mov dword ptr [eax + 0xc0], 1 */ W32((u32)(r_eax+0xc0u), 0x1u);
    /* 005c6bb7: mov dword ptr [eax + 0xb8], ecx */ W32((u32)(r_eax+0xb8u), r_ecx);
    /* 005c6bbd: movzx eax, word ptr [edx + 0x14] */ r_eax = (u32)R16((u32)(r_edx+0x14u));
    /* 005c6bc1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c6bc2: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x5c6bc7u); f_0068d5a8();
    /* 005c6bc7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005c6bc8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c6bca: je 0x5c6bf1 */ if (fZ) goto L_005c6bf1;
L_005c6bcc:; BB(0x005c6bcc);
    /* 005c6bcc: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c6bcf: mov eax, dword ptr [eax + 0x8fc] */ r_eax = R32((u32)(r_eax+0x8fcu));
    /* 005c6bd5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c6bd7: je 0x5c6be5 */ if (fZ) goto L_005c6be5;
L_005c6bd9:; BB(0x005c6bd9);
    /* 005c6bd9: mov dword ptr [edx + 0xbc], 1 */ W32((u32)(r_edx+0xbcu), 0x1u);
    /* 005c6be3: jmp 0x5c6bfe */ goto L_005c6bfe;
L_005c6be5:; BB(0x005c6be5);
    /* 005c6be5: mov dword ptr [edx + 0xbc], 0 */ W32((u32)(r_edx+0xbcu), 0x0u);
    /* 005c6bef: jmp 0x5c6bfe */ goto L_005c6bfe;
L_005c6bf1:; BB(0x005c6bf1);
    /* 005c6bf1: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c6bf4: mov dword ptr [edx + 0xbc], 0 */ W32((u32)(r_edx+0xbcu), 0x0u);
L_005c6bfe:; BB(0x005c6bfe);
    /* 005c6bfe: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c6c01: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 005c6c04: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c6c07: mov eax, edx */ r_eax = r_edx;
    /* 005c6c09: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c6c0c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005c6c13: mov esp, ebp */ r_esp = r_ebp;
    /* 005c6c15: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c6c16: ret 8 */ FN_RET(0x005c6a78); r_esp += 12; return;
}

void f_005c6c1c(void) /* sub_5C6C1C */
{
    FN_ENTER(0x005c6c1c);
    /* 005c6c1c: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005c6c20: mov ecx, dword ptr [0xa8d854] */ r_ecx = R32((u32)(0xa8d854u));
    /* 005c6c26: call 0x5c6c34 */ r_esp -= 4; W32(r_esp, 0x5c6c2bu); f_005c6c34();
    /* 005c6c2b: add dword ptr [0xa8d858], 1 */ { u32 ad = (u32)(0xa8d858u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005c6c32: ret  */ FN_RET(0x005c6c1c); r_esp += 4; return;
}

void f_005c6c34(void) /* sub_5C6C34 */
{
    FN_ENTER(0x005c6c34);
    /* 005c6c34: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005c6c35: mov edi, ecx */ r_edi = r_ecx;
    /* 005c6c37: mov eax, dword ptr [edi + 0xe4] */ r_eax = R32((u32)(r_edi+0xe4u));
    /* 005c6c3d: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c6c3f: je 0x5c6c4b */ if (fZ) goto L_005c6c4b;
L_005c6c41:; BB(0x005c6c41);
    /* 005c6c41: mov eax, dword ptr [0xa8d858] */ r_eax = R32((u32)(0xa8d858u));
    /* 005c6c46: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005c6c49: je 0x5c6c4f */ if (fZ) goto L_005c6c4f;
L_005c6c4b:; BB(0x005c6c4b);
    /* 005c6c4b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005c6c4c: ret 4 */ FN_RET(0x005c6c34); r_esp += 8; return;
L_005c6c4f:; BB(0x005c6c4f);
    /* 005c6c4f: lea ecx, [edi + 0x114] */ r_ecx = (u32)(r_edi+0x114u);
    /* 005c6c55: mov edx, 1 */ r_edx = 0x1u;
    /* 005c6c5a: call 0x830df8 */ r_esp -= 4; W32(r_esp, 0x5c6c5fu); f_00830df8();
    /* 005c6c5f: add edi, 0x120 */ {  u32 a = r_edi; u32 b = 0x120u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005c6c65: mov ecx, edi */ r_ecx = r_edi;
    /* 005c6c67: call 0x831290 */ r_esp -= 4; W32(r_esp, 0x5c6c6cu); f_00831290();
    /* 005c6c6c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005c6c6d: ret 4 */ FN_RET(0x005c6c34); r_esp += 8; return;
}

void f_005c6c70(void) /* sub_5C6C70 */
{
    FN_ENTER(0x005c6c70);
    /* 005c6c70: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005c6c71: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005c6c72: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c6c73: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005c6c74: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c6c77: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005c6c79: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005c6c7b: call 0x5c6f80 */ r_esp -= 4; W32(r_esp, 0x5c6c80u); f_005c6f80();
    /* 005c6c80: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c6c82: je 0x5c6f05 */ if (fZ) goto L_005c6f05;
L_005c6c88:; BB(0x005c6c88);
    /* 005c6c88: mov eax, dword ptr [ebp + 0xe4] */ r_eax = R32((u32)(r_ebp+0xe4u));
    /* 005c6c8e: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005c6c90: je 0x5c6c9f */ if (fZ) goto L_005c6c9f;
L_005c6c92:; BB(0x005c6c92);
    /* 005c6c92: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005c6c94: call 0x5c6f98 */ r_esp -= 4; W32(r_esp, 0x5c6c99u); f_005c6f98();
    /* 005c6c99: mov eax, dword ptr [ebp + 0xe4] */ r_eax = R32((u32)(r_ebp+0xe4u));
L_005c6c9f:; BB(0x005c6c9f);
    /* 005c6c9f: test al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005c6ca1: je 0x5c6cb4 */ if (fZ) goto L_005c6cb4;
L_005c6ca3:; BB(0x005c6ca3);
    /* 005c6ca3: mov eax, dword ptr [ebp + 0x100] */ r_eax = R32((u32)(r_ebp+0x100u));
    /* 005c6ca9: add eax, 0x888 */ {  u32 a = r_eax; u32 b = 0x888u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c6cae: mov dword ptr [ebp + 0x100], eax */ W32((u32)(r_ebp+0x100u), r_eax);
L_005c6cb4:; BB(0x005c6cb4);
    /* 005c6cb4: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 005c6cb7: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005c6cb9: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x5c6cbcu); call_ind(t); }
    /* 005c6cbc: mov ecx, dword ptr [ebp + 0x12c] */ r_ecx = R32((u32)(r_ebp+0x12cu));
    /* 005c6cc2: lea edi, [ebp + 0x24] */ r_edi = (u32)(r_ebp+0x24u);
    /* 005c6cc5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c6cc7: je 0x5c6ccf */ if (fZ) goto L_005c6ccf;
L_005c6cc9:; BB(0x005c6cc9);
    /* 005c6cc9: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005c6cca: call 0x5073d0 */ r_esp -= 4; W32(r_esp, 0x5c6ccfu); f_005073d0();
L_005c6ccf:; BB(0x005c6ccf);
    /* 005c6ccf: mov ecx, dword ptr [ebp + 0x130] */ r_ecx = R32((u32)(r_ebp+0x130u));
    /* 005c6cd5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c6cd7: je 0x5c6cdf */ if (fZ) goto L_005c6cdf;
L_005c6cd9:; BB(0x005c6cd9);
    /* 005c6cd9: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005c6cda: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x5c6cdfu); f_00508db8();
L_005c6cdf:; BB(0x005c6cdf);
    /* 005c6cdf: mov ecx, dword ptr [ebp + 0x134] */ r_ecx = R32((u32)(r_ebp+0x134u));
    /* 005c6ce5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c6ce7: je 0x5c6cef */ if (fZ) goto L_005c6cef;
L_005c6ce9:; BB(0x005c6ce9);
    /* 005c6ce9: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005c6cea: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x5c6cefu); f_00508db8();
L_005c6cef:; BB(0x005c6cef);
    /* 005c6cef: mov ecx, dword ptr [ebp + 0x140] */ r_ecx = R32((u32)(r_ebp+0x140u));
    /* 005c6cf5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c6cf7: je 0x5c6cff */ if (fZ) goto L_005c6cff;
L_005c6cf9:; BB(0x005c6cf9);
    /* 005c6cf9: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005c6cfa: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x5c6cffu); f_00508db8();
L_005c6cff:; BB(0x005c6cff);
    /* 005c6cff: call 0x7b8cec */ r_esp -= 4; W32(r_esp, 0x5c6d04u); f_007b8cec();
    /* 005c6d04: lea esi, [ebp + 0x1c] */ r_esi = (u32)(r_ebp+0x1cu);
    /* 005c6d07: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005c6d08: call 0x7b976c */ r_esp -= 4; W32(r_esp, 0x5c6d0du); f_007b976c();
    /* 005c6d0d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005c6d0e: mov eax, dword ptr [ebp + 0xc0] */ r_eax = R32((u32)(r_ebp+0xc0u));
    /* 005c6d14: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c6d16: je 0x5c6d1f */ if (fZ) goto L_005c6d1f;
L_005c6d18:; BB(0x005c6d18);
    /* 005c6d18: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005c6d19: call 0x7b8d60 */ r_esp -= 4; W32(r_esp, 0x5c6d1eu); f_007b8d60();
    /* 005c6d1e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_005c6d1f:; BB(0x005c6d1f);
    /* 005c6d1f: mov eax, dword ptr [ebp + 0xbc] */ r_eax = R32((u32)(r_ebp+0xbcu));
    /* 005c6d25: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c6d27: je 0x5c6d30 */ if (fZ) goto L_005c6d30;
L_005c6d29:; BB(0x005c6d29);
    /* 005c6d29: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005c6d2a: call 0x7b9788 */ r_esp -= 4; W32(r_esp, 0x5c6d2fu); f_007b9788();
    /* 005c6d2f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_005c6d30:; BB(0x005c6d30);
    /* 005c6d30: mov eax, dword ptr [0xaae15c] */ r_eax = R32((u32)(0xaae15cu));
    /* 005c6d35: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005c6d37: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c6d39: je 0x5c6ebe */ if (fZ) goto L_005c6ebe;
L_005c6d3f:; BB(0x005c6d3f);
    /* 005c6d3f: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 005c6d43: lea ecx, [ebp + 0x60] */ r_ecx = (u32)(r_ebp+0x60u);
    /* 005c6d46: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 005c6d4a: lea esi, [edx + edx] */ r_esi = (u32)(r_edx+r_edx);
    /* 005c6d4d: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005c6d4f: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005c6d51: mov ebx, edx */ r_ebx = r_edx;
L_005c6d53:; BB(0x005c6d53);
    /* 005c6d53: lea edi, [esi + 0xaad660] */ r_edi = (u32)(r_esi+0xaad660u);
    /* 005c6d59: mov edx, dword ptr [ebp + 0xa0] */ r_edx = R32((u32)(r_ebp+0xa0u));
    /* 005c6d5f: cmp edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c6d62: jge 0x5c6eac */ if ((fS==fO)) goto L_005c6eac;
L_005c6d68:; BB(0x005c6d68);
    /* 005c6d68: mov edx, dword ptr [esi + 0xaad660] */ r_edx = R32((u32)(r_esi+0xaad660u));
    /* 005c6d6e: movzx edx, word ptr [edx + 0x1c] */ r_edx = (u32)R16((u32)(r_edx+0x1cu));
    /* 005c6d72: movzx ecx, word ptr [ebp + 0xa8] */ r_ecx = (u32)R16((u32)(r_ebp+0xa8u));
    /* 005c6d79: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c6d7b: je 0x5c6eac */ if (fZ) goto L_005c6eac;
L_005c6d81:; BB(0x005c6d81);
    /* 005c6d81: mov eax, 1 */ r_eax = 0x1u;
    /* 005c6d86: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 005c6d8a: call 0x687c48 */ r_esp -= 4; W32(r_esp, 0x5c6d8fu); f_00687c48();
    /* 005c6d8f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c6d91: je 0x5c6d9e */ if (fZ) goto L_005c6d9e;
L_005c6d93:; BB(0x005c6d93);
    /* 005c6d93: mov ecx, dword ptr [esi + 0xaad660] */ r_ecx = R32((u32)(r_esi+0xaad660u));
    /* 005c6d99: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 005c6d9c: jmp 0x5c6db9 */ goto L_005c6db9;
L_005c6d9e:; BB(0x005c6d9e);
    /* 005c6d9e: mov ecx, dword ptr [esi + 0xaad660] */ r_ecx = R32((u32)(r_esi+0xaad660u));
    /* 005c6da4: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 005c6da7: mov eax, edx */ r_eax = r_edx;
    /* 005c6da9: and eax, 0x60000000 */ {  u32 a = r_eax; u32 b = 0x60000000u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005c6dae: cmp eax, 0x20000000 */ {  u32 a = r_eax; u32 b = 0x20000000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c6db3: je 0x5c6f52 */ if (fZ) goto L_005c6f52;
L_005c6db9:; BB(0x005c6db9);
    /* 005c6db9: test edx, 0x4000000 */ {  u32 a = r_edx; u32 b = 0x4000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c6dbf: je 0x5c6dcb */ if (fZ) goto L_005c6dcb;
L_005c6dc1:; BB(0x005c6dc1);
    /* 005c6dc1: mov eax, dword ptr [0xaae15c] */ r_eax = R32((u32)(0xaae15cu));
    /* 005c6dc6: jmp 0x5c6eac */ goto L_005c6eac;
L_005c6dcb:; BB(0x005c6dcb);
    /* 005c6dcb: mov eax, dword ptr [esi + 0xaad664] */ r_eax = R32((u32)(r_esi+0xaad664u));
    /* 005c6dd1: mov edx, dword ptr [ecx + 0xa4] */ r_edx = R32((u32)(r_ecx+0xa4u));
    /* 005c6dd7: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
    /* 005c6ddb: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 005c6ddf: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 005c6de2: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c6de4: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005c6de6: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c6de8: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c6dea: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005c6dec: mov eax, dword ptr [edx + ecx*4 + 0x18] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x18u));
    /* 005c6df0: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 005c6df4: test eax, 0x2000000 */ {  u32 a = r_eax; u32 b = 0x2000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c6df9: je 0x5c6e05 */ if (fZ) goto L_005c6e05;
L_005c6dfb:; BB(0x005c6dfb);
    /* 005c6dfb: mov eax, dword ptr [0xaae15c] */ r_eax = R32((u32)(0xaae15cu));
    /* 005c6e00: jmp 0x5c6eac */ goto L_005c6eac;
L_005c6e05:; BB(0x005c6e05);
    /* 005c6e05: test eax, 0x1000 */ {  u32 a = r_eax; u32 b = 0x1000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c6e0a: je 0x5c6e16 */ if (fZ) goto L_005c6e16;
L_005c6e0c:; BB(0x005c6e0c);
    /* 005c6e0c: mov eax, dword ptr [0xaae15c] */ r_eax = R32((u32)(0xaae15cu));
    /* 005c6e11: jmp 0x5c6eac */ goto L_005c6eac;
L_005c6e16:; BB(0x005c6e16);
    /* 005c6e16: test eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c6e1b: je 0x5c6e27 */ if (fZ) goto L_005c6e27;
L_005c6e1d:; BB(0x005c6e1d);
    /* 005c6e1d: mov eax, dword ptr [0xaae15c] */ r_eax = R32((u32)(0xaae15cu));
    /* 005c6e22: jmp 0x5c6eac */ goto L_005c6eac;
L_005c6e27:; BB(0x005c6e27);
    /* 005c6e27: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 005c6e2b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c6e2d: je 0x5c6f48 */ if (fZ) goto L_005c6f48;
L_005c6e33:; BB(0x005c6e33);
    /* 005c6e33: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 005c6e37: mov eax, dword ptr [ebp + 0xa0] */ r_eax = R32((u32)(r_ebp+0xa0u));
    /* 005c6e3d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c6e3f: je 0x5c6e5b */ if (fZ) goto L_005c6e5b;
L_005c6e41:; BB(0x005c6e41);
    /* 005c6e41: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 005c6e44: mov ebp, dword ptr [esp + 0xc] */ r_ebp = R32((u32)(r_esp+0xcu));
L_005c6e48:; BB(0x005c6e48);
    /* 005c6e48: cmp ecx, dword ptr [edx] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c6e4a: je 0x5c6f32 */ if (fZ) goto L_005c6f32;
L_005c6e50:; BB(0x005c6e50);
    /* 005c6e50: add edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c6e53: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 005c6e56: jne 0x5c6e48 */ if (!fZ) goto L_005c6e48;
L_005c6e58:; BB(0x005c6e58);
    /* 005c6e58: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
L_005c6e5b:; BB(0x005c6e5b);
    /* 005c6e5b: movzx eax, word ptr [ecx + 0x96] */ r_eax = (u32)R16((u32)(r_ecx+0x96u));
    /* 005c6e62: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c6e65: jne 0x5c6e6e */ if (!fZ) goto L_005c6e6e;
L_005c6e67:; BB(0x005c6e67);
    /* 005c6e67: mov eax, 1 */ r_eax = 0x1u;
    /* 005c6e6c: jmp 0x5c6e70 */ goto L_005c6e70;
L_005c6e6e:; BB(0x005c6e6e);
    /* 005c6e6e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005c6e70:; BB(0x005c6e70);
    /* 005c6e70: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c6e72: je 0x5c6ea7 */ if (fZ) goto L_005c6ea7;
L_005c6e74:; BB(0x005c6e74);
    /* 005c6e74: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005c6e75: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 005c6e77: mov eax, dword ptr [esi + 0xaad664] */ r_eax = R32((u32)(r_esi+0xaad664u));
    /* 005c6e7d: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 005c6e80: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 005c6e83: add dword ptr [ebp + 0xa0], 1 */ { u32 ad = (u32)(r_ebp+0xa0u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 005c6e8a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005c6e8c: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x5c6e8fu); call_ind(t); }
    /* 005c6e8f: mov eax, dword ptr [ebp + 0xa4] */ r_eax = R32((u32)(r_ebp+0xa4u));
    /* 005c6e95: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 005c6e98: mov dword ptr [ebp + 0xa4], eax */ W32((u32)(r_ebp+0xa4u), r_eax);
    /* 005c6e9e: je 0x5c6f1a */ if (fZ) goto L_005c6f1a;
L_005c6ea0:; BB(0x005c6ea0);
    /* 005c6ea0: mov eax, dword ptr [0xaae15c] */ r_eax = R32((u32)(0xaae15cu));
    /* 005c6ea5: jmp 0x5c6eac */ goto L_005c6eac;
L_005c6ea7:; BB(0x005c6ea7);
    /* 005c6ea7: mov eax, dword ptr [0xaae15c] */ r_eax = R32((u32)(0xaae15cu));
L_005c6eac:; BB(0x005c6eac);
    /* 005c6eac: add esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005c6eaf: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005c6eb2: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c6eb4: jne 0x5c6d53 */ if (!fZ) goto L_005c6d53;
L_005c6eba:; BB(0x005c6eba);
    /* 005c6eba: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
L_005c6ebe:; BB(0x005c6ebe);
    /* 005c6ebe: call 0x7b8cec */ r_esp -= 4; W32(r_esp, 0x5c6ec3u); f_007b8cec();
L_005c6ec3:; BB(0x005c6ec3);
    /* 005c6ec3: lea eax, [ebp + 0xc4] */ r_eax = (u32)(r_ebp+0xc4u);
    /* 005c6ec9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c6eca: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005c6ecb: call 0x7a8c28 */ r_esp -= 4; W32(r_esp, 0x5c6ed0u); f_007a8c28();
    /* 005c6ed0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c6ed3: fcomp dword ptr [ebp + 0xdc] */ fx_compare(ST(0), R_F32((u32)(r_ebp+0xdcu))); FPOP();
    /* 005c6ed9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005c6edb: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005c6edc: jae 0x5c6ee8 */ if (!fC) goto L_005c6ee8;
L_005c6ede:; BB(0x005c6ede);
    /* 005c6ede: mov eax, dword ptr [ebp + 0xe0] */ r_eax = R32((u32)(r_ebp+0xe0u));
    /* 005c6ee4: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005c6ee6: je 0x5c6efd */ if (fZ) goto L_005c6efd;
L_005c6ee8:; BB(0x005c6ee8);
    /* 005c6ee8: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 005c6eec: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005c6ef1: mov word ptr [ebp + 8], ax */ W16((u32)(r_ebp+0x8u), (u16)r_eax);
    /* 005c6ef5: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005c6ef8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005c6ef9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c6efa: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005c6efb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005c6efc: ret  */ FN_RET(0x005c6c70); r_esp += 4; return;
L_005c6efd:; BB(0x005c6efd);
    /* 005c6efd: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005c6f00: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005c6f01: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c6f02: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005c6f03: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005c6f04: ret  */ FN_RET(0x005c6c70); r_esp += 4; return;
L_005c6f05:; BB(0x005c6f05);
    /* 005c6f05: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 005c6f09: or eax, 0xffff0011 */ {  u32 a = r_eax; u32 b = 0xffff0011u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005c6f0e: mov word ptr [ebp + 8], ax */ W16((u32)(r_ebp+0x8u), (u16)r_eax);
    /* 005c6f12: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005c6f15: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005c6f16: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c6f17: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005c6f18: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005c6f19: ret  */ FN_RET(0x005c6c70); r_esp += 4; return;
L_005c6f1a:; BB(0x005c6f1a);
    /* 005c6f1a: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 005c6f1e: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 005c6f22: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005c6f27: mov word ptr [ebp + 8], ax */ W16((u32)(r_ebp+0x8u), (u16)r_eax);
    /* 005c6f2b: call 0x7b8cec */ r_esp -= 4; W32(r_esp, 0x5c6f30u); f_007b8cec();
    /* 005c6f30: jmp 0x5c6ec3 */ goto L_005c6ec3;
L_005c6f32:; BB(0x005c6f32);
    /* 005c6f32: cmp ebp, dword ptr [edx + 4] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_edx+0x4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c6f35: jne 0x5c6e50 */ if (!fZ) goto L_005c6e50;
L_005c6f3b:; BB(0x005c6f3b);
    /* 005c6f3b: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
    /* 005c6f3e: mov eax, dword ptr [0xaae15c] */ r_eax = R32((u32)(0xaae15cu));
    /* 005c6f43: jmp 0x5c6eac */ goto L_005c6eac;
L_005c6f48:; BB(0x005c6f48);
    /* 005c6f48: mov eax, dword ptr [0xaae15c] */ r_eax = R32((u32)(0xaae15cu));
    /* 005c6f4d: jmp 0x5c6eac */ goto L_005c6eac;
L_005c6f52:; BB(0x005c6f52);
    /* 005c6f52: call 0x7ba980 */ r_esp -= 4; W32(r_esp, 0x5c6f57u); f_007ba980();
    /* 005c6f57: mov ecx, dword ptr [esi + 0xaad660] */ r_ecx = R32((u32)(r_esi+0xaad660u));
    /* 005c6f5d: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 005c6f60: cmp ax, word ptr [ebp + 0xaa] */ {  u32 a = (u16)r_eax; u32 b = R16((u32)(r_ebp+0xaau)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 005c6f67: je 0x5c6f77 */ if (fZ) goto L_005c6f77;
L_005c6f69:; BB(0x005c6f69);
    /* 005c6f69: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 005c6f6c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005c6f6e: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 005c6f72: jmp 0x5c6db9 */ goto L_005c6db9;
L_005c6f77:; BB(0x005c6f77);
    /* 005c6f77: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 005c6f7a: jmp 0x5c6db9 */ goto L_005c6db9;
}

void f_005c6f80(void) /* sub_5C6F80 */
{
    FN_ENTER(0x005c6f80);
    /* 005c6f80: push dword ptr [ecx + 0xac] */ { u32 v = R32((u32)(r_ecx+0xacu)); r_esp -= 4; W32(r_esp, v); }
    /* 005c6f86: call 0x5c57ac */ r_esp -= 4; W32(r_esp, 0x5c6f8bu); f_005c57ac();
    /* 005c6f8b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c6f8d: mov eax, 0 */ r_eax = 0x0u;
    /* 005c6f92: setne al */ r_eax = (r_eax & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 005c6f95: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005c6f96: ret  */ FN_RET(0x005c6f80); r_esp += 4; return;
}

void f_005c6f98(void) /* sub_5C6F98 */
{
    FN_ENTER(0x005c6f98);
    /* 005c6f98: mov eax, dword ptr [ecx + 0x104] */ r_eax = R32((u32)(r_ecx+0x104u));
    /* 005c6f9e: mov edx, dword ptr [ecx + 0x11c] */ r_edx = R32((u32)(r_ecx+0x11cu));
    /* 005c6fa4: add eax, 0xccc */ {  u32 a = r_eax; u32 b = 0xcccu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c6fa9: mov dword ptr [ecx + 0x104], eax */ W32((u32)(r_ecx+0x104u), r_eax);
    /* 005c6faf: add edx, 0xfffff334 */ {  u32 a = r_edx; u32 b = 0xfffff334u; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005c6fb5: mov dword ptr [ecx + 0x11c], edx */ W32((u32)(r_ecx+0x11cu), r_edx);
    /* 005c6fbb: ret  */ FN_RET(0x005c6f98); r_esp += 4; return;
}

void f_005c6fbc(void) /* sub_5C6FBC */
{
    FN_ENTER(0x005c6fbc);
    /* 005c6fbc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c6fbd: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005c6fbf: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005c6fc1: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x5c6fc6u); f_008173b4();
    /* 005c6fc6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c6fc8: jne 0x5c6fcc */ if (!fZ) goto L_005c6fcc;
L_005c6fca:; BB(0x005c6fca);
    /* 005c6fca: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c6fcb: ret  */ FN_RET(0x005c6fbc); r_esp += 4; return;
L_005c6fcc:; BB(0x005c6fcc);
    /* 005c6fcc: push dword ptr [ebp + 0xac] */ { u32 v = R32((u32)(r_ebp+0xacu)); r_esp -= 4; W32(r_esp, v); }
    /* 005c6fd2: call 0x5c57ac */ r_esp -= 4; W32(r_esp, 0x5c6fd7u); f_005c57ac();
    /* 005c6fd7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005c6fd8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c6fda: je 0x5c6fca */ if (fZ) goto L_005c6fca;
L_005c6fdc:; BB(0x005c6fdc);
    /* 005c6fdc: mov eax, dword ptr [ebp + 0xe8] */ r_eax = R32((u32)(r_ebp+0xe8u));
    /* 005c6fe2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c6fe4: je 0x5c706f */ if (fZ) goto L_005c706f;
L_005c6fea:; BB(0x005c6fea);
    /* 005c6fea: mov eax, dword ptr [ebp + 0xec] */ r_eax = R32((u32)(r_ebp+0xecu));
    /* 005c6ff0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c6ff2: je 0x5c6ffb */ if (fZ) goto L_005c6ffb;
L_005c6ff4:; BB(0x005c6ff4);
    /* 005c6ff4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c6ff5: call 0x81a9b8 */ r_esp -= 4; W32(r_esp, 0x5c6ffau); f_0081a9b8();
    /* 005c6ffa: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_005c6ffb:; BB(0x005c6ffb);
    /* 005c6ffb: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x5c7000u); f_0082dbac();
    /* 005c7000: mov dword ptr [0xa8d858], 0 */ W32((u32)(0xa8d858u), 0x0u);
    /* 005c700a: mov dword ptr [0xa8d854], ebp */ W32((u32)(0xa8d854u), r_ebp);
    /* 005c7010: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x5c7015u); f_0082d7b0();
    /* 005c7015: lea ecx, [ebp + 0x24] */ r_ecx = (u32)(r_ebp+0x24u);
    /* 005c7018: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x5c701du); f_0082d838();
    /* 005c701d: lea ecx, [ebp + 0xf0] */ r_ecx = (u32)(r_ebp+0xf0u);
    /* 005c7023: mov edx, 1 */ r_edx = 0x1u;
    /* 005c7028: call 0x830df8 */ r_esp -= 4; W32(r_esp, 0x5c702du); f_00830df8();
    /* 005c702d: lea ecx, [ebp + 0xfc] */ r_ecx = (u32)(r_ebp+0xfcu);
    /* 005c7033: mov edx, 1 */ r_edx = 0x1u;
    /* 005c7038: call 0x830df8 */ r_esp -= 4; W32(r_esp, 0x5c703du); f_00830df8();
    /* 005c703d: lea ecx, [ebp + 0x108] */ r_ecx = (u32)(r_ebp+0x108u);
    /* 005c7043: call 0x831290 */ r_esp -= 4; W32(r_esp, 0x5c7048u); f_00831290();
    /* 005c7048: push 0x5c6c1c */ { u32 v = 0x5c6c1cu; r_esp -= 4; W32(r_esp, v); }
    /* 005c704d: push dword ptr [ebp + 0xe8] */ { u32 v = R32((u32)(r_ebp+0xe8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005c7053: call 0x5c53c0 */ r_esp -= 4; W32(r_esp, 0x5c7058u); f_005c53c0();
    /* 005c7058: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c705b: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x5c7060u); f_0082da80();
    /* 005c7060: mov dword ptr [0xa8d854], 0 */ W32((u32)(0xa8d854u), 0x0u);
    /* 005c706a: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x5c706fu); f_0082dab0();
L_005c706f:; BB(0x005c706f);
    /* 005c706f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c7070: ret  */ FN_RET(0x005c6fbc); r_esp += 4; return;
}

