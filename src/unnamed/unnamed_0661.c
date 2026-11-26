#include "protos.h"

void f_00661054(void) /* sub_661054 */
{
    FN_ENTER(0x00661054);
    /* 00661054: movzx eax, word ptr [ecx + 0x8a] */ r_eax = (u32)R16((u32)(r_ecx+0x8au));
    /* 0066105b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0066105d: jle 0x661074 */ if ((fZ||fS!=fO)) goto L_00661074;
L_0066105f:; BB(0x0066105f);
    /* 0066105f: movzx eax, word ptr [ecx + 0x98] */ r_eax = (u32)R16((u32)(r_ecx+0x98u));
    /* 00661066: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00661068: je 0x661075 */ if (fZ) goto L_00661075;
L_0066106a:; BB(0x0066106a);
    /* 0066106a: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0066106d: mov word ptr [ecx + 0x98], ax */ W16((u32)(r_ecx+0x98u), (u16)r_eax);
L_00661074:; BB(0x00661074);
    /* 00661074: ret  */ FN_RET(0x00661054); r_esp += 4; return;
L_00661075:; BB(0x00661075);
    /* 00661075: call 0x66167c */ r_esp -= 4; W32(r_esp, 0x66107au); f_0066167c();
    /* 0066107a: ret  */ FN_RET(0x00661054); r_esp += 4; return;
}

void f_0066107c(void) /* sub_66107C */
{
    FN_ENTER(0x0066107c);
    /* 0066107c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0066107d: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0066107f: push dword ptr [ebp + 0x70] */ { u32 v = R32((u32)(r_ebp+0x70u)); r_esp -= 4; W32(r_esp, v); }
    /* 00661082: mov ecx, dword ptr [ebp + 0x90] */ r_ecx = R32((u32)(r_ebp+0x90u));
    /* 00661088: call 0x508dac */ r_esp -= 4; W32(r_esp, 0x66108du); f_00508dac();
    /* 0066108d: mov eax, dword ptr [ebp + 0x9c] */ r_eax = R32((u32)(r_ebp+0x9cu));
    /* 00661093: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00661096: mov dword ptr [ebp + 0x9c], eax */ W32((u32)(r_ebp+0x9cu), r_eax);
    /* 0066109c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066109d: ret  */ FN_RET(0x0066107c); r_esp += 4; return;
}

void f_006610a0(void) /* sub_6610A0 */
{
    FN_ENTER(0x006610a0);
    /* 006610a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006610a1: mov ebp, ecx */ r_ebp = r_ecx;
    /* 006610a3: movzx eax, word ptr [ebp + 0x9a] */ r_eax = (u32)R16((u32)(r_ebp+0x9au));
    /* 006610aa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006610ac: jle 0x6610c5 */ if ((fZ||fS!=fO)) goto L_006610c5;
L_006610ae:; BB(0x006610ae);
    /* 006610ae: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006610b0: mov ecx, dword ptr [ebp + 0x90] */ r_ecx = R32((u32)(r_ebp+0x90u));
    /* 006610b6: call 0x508dac */ r_esp -= 4; W32(r_esp, 0x6610bbu); f_00508dac();
    /* 006610bb: add word ptr [ebp + 0x9a], -1 */ { u32 ad = (u32)(r_ebp+0x9au);  u32 a = R16(ad); u32 b = 0xffffu; u32 r = (a + b) & 0xffffu; W16(ad, r); fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 15) & 1; fC = (r < a); }
    /* 006610c3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006610c4: ret  */ FN_RET(0x006610a0); r_esp += 4; return;
L_006610c5:; BB(0x006610c5);
    /* 006610c5: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006610c7: call 0x660f20 */ r_esp -= 4; W32(r_esp, 0x6610ccu); f_00660f20();
    /* 006610cc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006610ce: jne 0x661104 */ if (!fZ) goto L_00661104;
L_006610d0:; BB(0x006610d0);
    /* 006610d0: push dword ptr [ebp + 0x94] */ { u32 v = R32((u32)(r_ebp+0x94u)); r_esp -= 4; W32(r_esp, v); }
    /* 006610d6: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x6610dbu); f_0082dc9c();
    /* 006610db: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 006610de: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006610e1: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006610e4: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006610e6: mov dword ptr [esp + 4], 0x42480000 */ W32((u32)(r_esp+0x4u), 0x42480000u);
    /* 006610ee: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x6610f1u); call_ind(t); }
    /* 006610f1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006610f3: jne 0x661104 */ if (!fZ) goto L_00661104;
L_006610f5:; BB(0x006610f5);
    /* 006610f5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006610f7: mov ecx, dword ptr [ebp + 0x90] */ r_ecx = R32((u32)(r_ebp+0x90u));
    /* 006610fd: call 0x508dac */ r_esp -= 4; W32(r_esp, 0x661102u); f_00508dac();
    /* 00661102: jmp 0x66110b */ goto L_0066110b;
L_00661104:; BB(0x00661104);
    /* 00661104: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00661106: call 0x66107c */ r_esp -= 4; W32(r_esp, 0x66110bu); f_0066107c();
L_0066110b:; BB(0x0066110b);
    /* 0066110b: mov eax, dword ptr [ebp + 0x9c] */ r_eax = R32((u32)(r_ebp+0x9cu));
    /* 00661111: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00661114: mov dword ptr [ebp + 0x9c], eax */ W32((u32)(r_ebp+0x9cu), r_eax);
    /* 0066111a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0066111c: call 0x661054 */ r_esp -= 4; W32(r_esp, 0x661121u); f_00661054();
    /* 00661121: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00661122: ret  */ FN_RET(0x006610a0); r_esp += 4; return;
}

void f_00661124(void) /* sub_661124 */
{
    FN_ENTER(0x00661124);
    /* 00661124: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00661125: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00661126: mov edi, ecx */ r_edi = r_ecx;
    /* 00661128: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 0066112c: mov eax, dword ptr [edi + 0x90] */ r_eax = R32((u32)(r_edi+0x90u));
    /* 00661132: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00661134: je 0x661150 */ if (fZ) goto L_00661150;
L_00661136:; BB(0x00661136);
    /* 00661136: lea edx, [edi + 0x50] */ r_edx = (u32)(r_edi+0x50u);
    /* 00661139: lea eax, [edi + 0x38] */ r_eax = (u32)(r_edi+0x38u);
    /* 0066113c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066113d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0066113f: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x661144u); f_00830aa0();
    /* 00661144: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00661145: mov ecx, dword ptr [edi + 0x90] */ r_ecx = R32((u32)(r_edi+0x90u));
    /* 0066114b: call 0x508dec */ r_esp -= 4; W32(r_esp, 0x661150u); f_00508dec();
L_00661150:; BB(0x00661150);
    /* 00661150: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00661151: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00661152: ret 4 */ FN_RET(0x00661124); r_esp += 8; return;
}

void f_00661158(void)
{
    FN_ENTER(0x00661158);
    /* 00661158: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00661159: mov ebp, esp */ r_ebp = r_esp;
    /* 0066115b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0066115d: push 0x8e7dfe */ { u32 v = 0x8e7dfeu; r_esp -= 4; W32(r_esp, v); }
    /* 00661162: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00661168: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00661169: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00661170: sub esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00661173: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00661176: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00661179: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0066117c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0066117f: push 0xa0 */ { u32 v = 0xa0u; r_esp -= 4; W32(r_esp, v); }
    /* 00661184: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
    /* 0066118b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x661190u); f_005caba4();
    /* 00661190: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00661193: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00661196: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00661199: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066119b: je 0x661298 */ if (fZ) goto L_00661298;
L_006611a1:; BB(0x006611a1);
    /* 006611a1: mov dword ptr [ebp - 0x40], 1 */ W32((u32)(r_ebp+0xffffffc0u), 0x1u);
    /* 006611a8: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006611af: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006611b2: mov ecx, eax */ r_ecx = r_eax;
    /* 006611b4: mov eax, dword ptr [0xaca350] */ r_eax = R32((u32)(0xaca350u));
    /* 006611b9: mov dword ptr [ebp - 0x58], ecx */ W32((u32)(r_ebp+0xffffffa8u), r_ecx);
    /* 006611bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006611bd: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 006611c0: call 0x660a1c */ r_esp -= 4; W32(r_esp, 0x6611c5u); f_00660a1c();
    /* 006611c5: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 006611cc: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006611cf: fld dword ptr [ecx + 0x68] */ FPUSH(R_F32((u32)(r_ecx+0x68u)));
    /* 006611d2: fnstcw word ptr [ebp - 0x38] */ W16((u32)(r_ebp+0xffffffc8u), fcw);
    /* 006611d5: movzx eax, word ptr [ebp - 0x38] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc8u));
    /* 006611d9: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006611de: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 006611e1: fldcw word ptr [ebp - 0x30] */ fcw = R16((u32)(r_ebp+0xffffffd0u));
    /* 006611e4: fistp dword ptr [ebp - 0x28] */ W32((u32)(r_ebp+0xffffffd8u), (u32)fx_int32(ST(0))); FPOP();
    /* 006611e7: fldcw word ptr [ebp - 0x38] */ fcw = R16((u32)(r_ebp+0xffffffc8u));
    /* 006611ea: mov dword ptr [ecx], 0xb33970 */ W32((u32)(r_ecx), 0xb33970u);
    /* 006611f0: mov ebx, dword ptr [0x9c883c] */ r_ebx = R32((u32)(0x9c883cu));
    /* 006611f6: mov dword ptr [ecx + 4], ebx */ W32((u32)(r_ecx+0x4u), r_ebx);
    /* 006611f9: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006611fc: mov dword ptr [ecx + 0x9c], 0 */ W32((u32)(r_ecx+0x9cu), 0x0u);
    /* 00661206: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00661207: call 0x660ce4 */ r_esp -= 4; W32(r_esp, 0x66120cu); f_00660ce4();
    /* 0066120c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066120e: jne 0x66123a */ if (!fZ) goto L_0066123a;
L_00661210:; BB(0x00661210);
    /* 00661210: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00661211: push 0x198 */ { u32 v = 0x198u; r_esp -= 4; W32(r_esp, v); }
    /* 00661216: push 0x938f70 */ { u32 v = 0x938f70u; r_esp -= 4; W32(r_esp, v); }
    /* 0066121b: push 0x938f4c */ { u32 v = 0x938f4cu; r_esp -= 4; W32(r_esp, v); }
    /* 00661220: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x661225u); f_0061cdb0();
    /* 00661225: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00661228: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0066122b: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0066122f: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00661234: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00661238: jmp 0x66126e */ goto L_0066126e;
L_0066123a:; BB(0x0066123a);
    /* 0066123a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0066123d: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 0066123f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00661240: lea ecx, [eax + 0x38] */ r_ecx = (u32)(r_eax+0x38u);
    /* 00661243: lea edx, [eax + 0x5c] */ r_edx = (u32)(r_eax+0x5cu);
    /* 00661246: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00661247: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00661248: call 0x509dc4 */ r_esp -= 4; W32(r_esp, 0x66124du); f_00509dc4();
    /* 0066124d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00661250: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00661253: mov dword ptr [edx + 0x90], eax */ W32((u32)(r_edx+0x90u), r_eax);
    /* 00661259: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066125b: je 0x661289 */ if (fZ) goto L_00661289;
L_0066125d:; BB(0x0066125d);
    /* 0066125d: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0066125f: mov ecx, eax */ r_ecx = r_eax;
    /* 00661261: call 0x508f08 */ r_esp -= 4; W32(r_esp, 0x661266u); f_00508f08();
    /* 00661266: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00661269: call 0x660d00 */ r_esp -= 4; W32(r_esp, 0x66126eu); f_00660d00();
L_0066126e:; BB(0x0066126e);
    /* 0066126e: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
L_00661275:; BB(0x00661275);
    /* 00661275: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00661278: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0066127b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0066127e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00661285: mov esp, ebp */ r_esp = r_ebp;
    /* 00661287: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00661288: ret  */ FN_RET(0x00661158); r_esp += 4; return;
L_00661289:; BB(0x00661289);
    /* 00661289: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0066128d: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00661292: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00661296: jmp 0x66126e */ goto L_0066126e;
L_00661298:; BB(0x00661298);
    /* 00661298: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0066129a: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0066129d: jmp 0x661275 */ goto L_00661275;
}

void f_006612a0(void) /* sub_6612A0 */
{
    FN_ENTER(0x006612a0);
    /* 006612a0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006612a1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006612a2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006612a3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006612a4: sub esp, 0xc18 */ {  u32 a = r_esp; u32 b = 0xc18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006612aa: mov ebp, ecx */ r_ebp = r_ecx;
    /* 006612ac: mov ebx, dword ptr [esp + 0xc2c] */ r_ebx = R32((u32)(r_esp+0xc2cu));
    /* 006612b3: mov dword ptr [ebp], 0xb339d0 */ W32((u32)(r_ebp), 0xb339d0u);
    /* 006612ba: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006612bb: call 0x5b9328 */ r_esp -= 4; W32(r_esp, 0x6612c0u); f_005b9328();
    /* 006612c0: mov ecx, eax */ r_ecx = r_eax;
    /* 006612c2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006612c5: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006612c7: mov dword ptr [ebp + 4], edx */ W32((u32)(r_ebp+0x4u), r_edx);
    /* 006612ca: mov dword ptr [ebp + 8], edx */ W32((u32)(r_ebp+0x8u), r_edx);
    /* 006612cd: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006612cf: jl 0x661416 */ if ((fS!=fO)) goto L_00661416;
L_006612d5:; BB(0x006612d5);
    /* 006612d5: mov eax, 0xf0f0f0f1 */ r_eax = 0xf0f0f0f1u;
    /* 006612da: mul ecx */ { u64 t = (u64)r_eax * r_ecx; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 006612dc: shr edx, 6 */ { u32 c = (6u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 006612df: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 006612e3: lea esi, [edx + edx] */ r_esi = (u32)(r_edx+r_edx);
    /* 006612e6: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006612e8: lea edi, [esi + esi] */ r_edi = (u32)(r_esi+r_esi);
    /* 006612eb: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006612ed: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006612ef: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006612f1: add edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006612f3: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006612f4: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6612f9u); f_008581c5();
    /* 006612f9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006612fa: mov dword ptr [ebp + 4], eax */ W32((u32)(r_ebp+0x4u), r_eax);
    /* 006612fd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006612ff: je 0x6613fd */ if (fZ) goto L_006613fd;
L_00661305:; BB(0x00661305);
    /* 00661305: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00661306: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00661307: call 0x5b9910 */ r_esp -= 4; W32(r_esp, 0x66130cu); f_005b9910();
    /* 0066130c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066130f: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
    /* 00661313: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 00661318: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0066131c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0066131e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00661320: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00661322: jle 0x6613f9 */ if ((fZ||fS!=fO)) goto L_006613f9;
L_00661328:; BB(0x00661328);
    /* 00661328: mov ecx, dword ptr [ebp + 4] */ r_ecx = R32((u32)(r_ebp+0x4u));
    /* 0066132b: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 0066132f: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 00661332: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00661334: lea esi, [eax + eax] */ r_esi = (u32)(r_eax+r_eax);
    /* 00661337: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00661339: lea edi, [esi + esi] */ r_edi = (u32)(r_esi+r_esi);
    /* 0066133c: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0066133e: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00661340: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00661342: add edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00661344: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
    /* 00661348: mov ebp, edi */ r_ebp = r_edi;
    /* 0066134a: lea esi, [eax + eax] */ r_esi = (u32)(r_eax+r_eax);
    /* 0066134d: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0066134f: lea edi, [esi + esi] */ r_edi = (u32)(r_esi+r_esi);
    /* 00661352: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00661354: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00661356: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00661358: add edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0066135a: add edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0066135c: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 00661360: mov dword ptr [esp + 0x10], edi */ W32((u32)(r_esp+0x10u), r_edi);
    /* 00661364: mov ecx, edi */ r_ecx = r_edi;
L_00661366:; BB(0x00661366);
    /* 00661366: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 0066136a: movsx edi, word ptr [ebp + edi + 0xa] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ebp+r_edi+0xau));
    /* 0066136f: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00661371: je 0x661394 */ if (fZ) goto L_00661394;
L_00661373:; BB(0x00661373);
    /* 00661373: mov dword ptr [esp + ebx + 0x18], edi */ W32((u32)(r_esp+r_ebx+0x18u), r_edi);
    /* 00661377: mov esi, edi */ r_esi = r_edi;
    /* 00661379: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0066137c: lea edi, [edx + edx] */ r_edi = (u32)(r_edx+r_edx);
    /* 0066137f: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00661381: mov dword ptr [esp + ebx + 0x1c], ecx */ W32((u32)(r_esp+r_ebx+0x1cu), r_ecx);
    /* 00661385: mov dword ptr [esp + ebx + 0x20], 1 */ W32((u32)(r_esp+r_ebx+0x20u), 0x1u);
    /* 0066138d: lea ebx, [edi + edi] */ r_ebx = (u32)(r_edi+r_edi);
    /* 00661390: add ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00661392: jmp 0x661399 */ goto L_00661399;
L_00661394:; BB(0x00661394);
    /* 00661394: add dword ptr [esp + ebx + 0x14], 1 */ { u32 ad = (u32)(r_esp+r_ebx+0x14u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_00661399:; BB(0x00661399);
    /* 00661399: mov edi, dword ptr [esp + 0x14] */ r_edi = R32((u32)(r_esp+0x14u));
    /* 0066139d: add ebp, 0x44 */ {  u32 a = r_ebp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 006613a0: add ecx, 0x44 */ {  u32 a = r_ecx; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006613a3: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006613a6: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006613a8: jl 0x661366 */ if ((fS!=fO)) goto L_00661366;
L_006613aa:; BB(0x006613aa);
    /* 006613aa: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
L_006613ad:; BB(0x006613ad);
    /* 006613ad: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006613af: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006613b1: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 006613b4: lea esi, [edx + eax] */ r_esi = (u32)(r_edx+r_eax);
    /* 006613b7: lea edx, [eax + edx + 0xc] */ r_edx = (u32)(r_eax+r_edx+0xcu);
    /* 006613bb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006613bc: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6613c1u); f_008581c5();
    /* 006613c1: lea edx, [esp + 0x1c] */ r_edx = (u32)(r_esp+0x1cu);
    /* 006613c5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006613c6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006613c7: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 006613ca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006613cb: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x6613d0u); f_0086b6b8();
    /* 006613d0: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 006613d3: mov dword ptr [edx + ebx], 0xffffffff */ W32((u32)(r_edx+r_ebx), 0xffffffffu);
    /* 006613da: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006613dd: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 006613df: mov dword ptr [eax + ebx + 4], esi */ W32((u32)(r_eax+r_ebx+0x4u), r_esi);
    /* 006613e3: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 006613e6: mov dword ptr [edi + ebx + 8], esi */ W32((u32)(r_edi+r_ebx+0x8u), r_esi);
    /* 006613ea: mov eax, ebp */ r_eax = r_ebp;
    /* 006613ec: add esp, 0xc28 */ {  u32 a = r_esp; u32 b = 0xc28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006613f2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006613f3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006613f4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006613f5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006613f6: ret 4 */ FN_RET(0x006612a0); r_esp += 8; return;
L_006613f9:; BB(0x006613f9);
    /* 006613f9: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 006613fb: jmp 0x6613ad */ goto L_006613ad;
L_006613fd:; BB(0x006613fd);
    /* 006613fd: push 0x938fb0 */ { u32 v = 0x938fb0u; r_esp -= 4; W32(r_esp, v); }
    /* 00661402: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x661407u); f_0061cdb0();
    /* 00661407: mov eax, ebp */ r_eax = r_ebp;
    /* 00661409: add esp, 0xc1c */ {  u32 a = r_esp; u32 b = 0xc1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0066140f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00661410: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00661411: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00661412: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00661413: ret 4 */ FN_RET(0x006612a0); r_esp += 8; return;
L_00661416:; BB(0x00661416);
    /* 00661416: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00661417: push 0x938f94 */ { u32 v = 0x938f94u; r_esp -= 4; W32(r_esp, v); }
    /* 0066141c: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x661421u); f_0061cdb0();
    /* 00661421: mov eax, ebp */ r_eax = r_ebp;
    /* 00661423: add esp, 0xc20 */ {  u32 a = r_esp; u32 b = 0xc20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00661429: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0066142a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066142b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0066142c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0066142d: ret 4 */ FN_RET(0x006612a0); r_esp += 8; return;
}

void f_00661430(void) /* sub_661430 */
{
    FN_ENTER(0x00661430);
    /* 00661430: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 00661433: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00661435: je 0x661444 */ if (fZ) goto L_00661444;
L_00661437:; BB(0x00661437);
    /* 00661437: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 0066143a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0066143c: je 0x661444 */ if (fZ) goto L_00661444;
L_0066143e:; BB(0x0066143e);
    /* 0066143e: mov eax, 1 */ r_eax = 0x1u;
    /* 00661443: ret  */ FN_RET(0x00661430); r_esp += 4; return;
L_00661444:; BB(0x00661444);
    /* 00661444: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00661446: ret  */ FN_RET(0x00661430); r_esp += 4; return;
}

void f_00661448(void) /* sub_661448 */
{
    FN_ENTER(0x00661448);
    /* 00661448: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00661449: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0066144a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0066144b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0066144c: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0066144e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00661450: call 0x661430 */ r_esp -= 4; W32(r_esp, 0x661455u); f_00661430();
    /* 00661455: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00661457: je 0x6614a7 */ if (fZ) goto L_006614a7;
L_00661459:; BB(0x00661459);
    /* 00661459: mov ecx, dword ptr [ebx + 8] */ r_ecx = R32((u32)(r_ebx+0x8u));
    /* 0066145c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0066145e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00661460: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00661462: jl 0x6614a7 */ if ((fS!=fO)) goto L_006614a7;
L_00661464:; BB(0x00661464);
    /* 00661464: mov ebx, dword ptr [ecx] */ r_ebx = R32((u32)(r_ecx));
    /* 00661466: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_00661468:; BB(0x00661468);
    /* 00661468: cmp ebx, dword ptr [esp + 0x18] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esp+0x18u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066146c: jne 0x661493 */ if (!fZ) goto L_00661493;
L_0066146e:; BB(0x0066146e);
    /* 0066146e: mov ebp, dword ptr [edx + ecx + 4] */ r_ebp = R32((u32)(r_edx+r_ecx+0x4u));
    /* 00661472: mov esi, dword ptr [edx + ecx + 8] */ r_esi = R32((u32)(r_edx+r_ecx+0x8u));
    /* 00661476: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00661478: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0066147a: jle 0x661493 */ if ((fZ||fS!=fO)) goto L_00661493;
L_0066147c:; BB(0x0066147c);
    /* 0066147c: movzx edi, byte ptr [ebp + 0x34] */ r_edi = (u32)R8((u32)(r_ebp+0x34u));
    /* 00661480: cmp edi, dword ptr [esp + 0x1c] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp+0x1cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00661484: lea edx, [ebp + 4] */ r_edx = (u32)(r_ebp+0x4u);
    /* 00661487: je 0x6614b0 */ if (fZ) goto L_006614b0;
L_00661489:; BB(0x00661489);
    /* 00661489: add ebp, 0x44 */ {  u32 a = r_ebp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0066148c: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0066148f: cmp ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00661491: jl 0x66147c */ if ((fS!=fO)) goto L_0066147c;
L_00661493:; BB(0x00661493);
    /* 00661493: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00661496: lea ebx, [eax + eax] */ r_ebx = (u32)(r_eax+r_eax);
    /* 00661499: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0066149b: lea edx, [ebx + ebx] */ r_edx = (u32)(r_ebx+r_ebx);
    /* 0066149e: add edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006614a0: mov ebx, dword ptr [edx + ecx] */ r_ebx = R32((u32)(r_edx+r_ecx));
    /* 006614a3: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006614a5: jge 0x661468 */ if ((fS==fO)) goto L_00661468;
L_006614a7:; BB(0x006614a7);
    /* 006614a7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006614a9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006614aa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006614ab: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006614ac: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006614ad: ret 0x14 */ FN_RET(0x00661448); r_esp += 24; return;
L_006614b0:; BB(0x006614b0);
    /* 006614b0: push dword ptr [esp + 0x24] */ { u32 v = R32((u32)(r_esp+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 006614b4: push dword ptr [esp + 0x24] */ { u32 v = R32((u32)(r_esp+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 006614b8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006614b9: push dword ptr [esp + 0x20] */ { u32 v = R32((u32)(r_esp+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 006614bd: call 0x6614cc */ r_esp -= 4; W32(r_esp, 0x6614c2u); f_006614cc();
    /* 006614c2: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006614c5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006614c6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006614c7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006614c8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006614c9: ret 0x14 */ FN_RET(0x00661448); r_esp += 24; return;
}

void f_006614cc(void) /* sub_6614CC */
{
    FN_ENTER(0x006614cc);
    /* 006614cc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006614cd: mov ebp, esp */ r_ebp = r_esp;
    /* 006614cf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006614d1: push 0x8e7e32 */ { u32 v = 0x8e7e32u; r_esp -= 4; W32(r_esp, v); }
    /* 006614d6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006614dc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006614dd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006614e4: sub esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006614e7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006614ea: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 006614ed: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 006614f0: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 006614f3: push 0xa0 */ { u32 v = 0xa0u; r_esp -= 4; W32(r_esp, v); }
    /* 006614f8: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
    /* 006614ff: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x661504u); f_005caba4();
    /* 00661504: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00661507: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066150a: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0066150d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066150f: je 0x661652 */ if (fZ) goto L_00661652;
L_00661515:; BB(0x00661515);
    /* 00661515: mov dword ptr [ebp - 0x40], 1 */ W32((u32)(r_ebp+0xffffffc0u), 0x1u);
    /* 0066151c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00661523: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00661526: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00661529: mov ecx, eax */ r_ecx = r_eax;
    /* 0066152b: mov dword ptr [ebp - 0x58], ecx */ W32((u32)(r_ebp+0xffffffa8u), r_ecx);
    /* 0066152e: call 0x660a1c */ r_esp -= 4; W32(r_esp, 0x661533u); f_00660a1c();
    /* 00661533: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0066153a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0066153d: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00661540: mov dword ptr [edx], 0xb33970 */ W32((u32)(r_edx), 0xb33970u);
    /* 00661546: mov eax, dword ptr [0x9c883c] */ r_eax = R32((u32)(0x9c883cu));
    /* 0066154b: mov dword ptr [edx + 0x9c], 1 */ W32((u32)(r_edx+0x9cu), 0x1u);
    /* 00661555: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00661558: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066155a: je 0x661569 */ if (fZ) goto L_00661569;
L_0066155c:; BB(0x0066155c);
    /* 0066155c: mov eax, edx */ r_eax = r_edx;
    /* 0066155e: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00661561: lea ecx, [eax + 0x38] */ r_ecx = (u32)(r_eax+0x38u);
    /* 00661564: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x661569u); f_0082ebac();
L_00661569:; BB(0x00661569);
    /* 00661569: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0066156c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066156e: je 0x661599 */ if (fZ) goto L_00661599;
L_00661570:; BB(0x00661570);
    /* 00661570: mov edi, dword ptr [ebp + 0x14] */ r_edi = R32((u32)(r_ebp+0x14u));
    /* 00661573: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00661576: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 00661578: add edx, dword ptr [eax + 0x5c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0x5cu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0066157b: movzx ecx, dx */ r_ecx = (u32)(u16)r_edx;
    /* 0066157e: mov dword ptr [eax + 0x5c], ecx */ W32((u32)(r_eax+0x5cu), r_ecx);
    /* 00661581: mov ebx, dword ptr [edi + 4] */ r_ebx = R32((u32)(r_edi+0x4u));
    /* 00661584: add ebx, dword ptr [eax + 0x60] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_eax+0x60u)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00661587: movzx esi, bx */ r_esi = (u32)(u16)r_ebx;
    /* 0066158a: mov dword ptr [eax + 0x60], esi */ W32((u32)(r_eax+0x60u), r_esi);
    /* 0066158d: mov edx, dword ptr [edi + 8] */ r_edx = R32((u32)(r_edi+0x8u));
    /* 00661590: add edx, dword ptr [eax + 0x64] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0x64u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00661593: movzx edx, dx */ r_edx = (u32)(u16)r_edx;
    /* 00661596: mov dword ptr [eax + 0x64], edx */ W32((u32)(r_eax+0x64u), r_edx);
L_00661599:; BB(0x00661599);
    /* 00661599: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0066159c: fld dword ptr [ecx + 0x68] */ FPUSH(R_F32((u32)(r_ecx+0x68u)));
    /* 0066159f: fnstcw word ptr [ebp - 0x38] */ W16((u32)(r_ebp+0xffffffc8u), fcw);
    /* 006615a2: movzx eax, word ptr [ebp - 0x38] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc8u));
    /* 006615a6: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006615ab: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 006615ae: fldcw word ptr [ebp - 0x30] */ fcw = R16((u32)(r_ebp+0xffffffd0u));
    /* 006615b1: fistp dword ptr [ebp - 0x28] */ W32((u32)(r_ebp+0xffffffd8u), (u32)fx_int32(ST(0))); FPOP();
    /* 006615b4: fldcw word ptr [ebp - 0x38] */ fcw = R16((u32)(r_ebp+0xffffffc8u));
    /* 006615b7: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006615ba: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006615bb: call 0x660ce4 */ r_esp -= 4; W32(r_esp, 0x6615c0u); f_00660ce4();
    /* 006615c0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006615c2: jne 0x6615ee */ if (!fZ) goto L_006615ee;
L_006615c4:; BB(0x006615c4);
    /* 006615c4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006615c5: push 0x198 */ { u32 v = 0x198u; r_esp -= 4; W32(r_esp, v); }
    /* 006615ca: push 0x938f70 */ { u32 v = 0x938f70u; r_esp -= 4; W32(r_esp, v); }
    /* 006615cf: push 0x938f4c */ { u32 v = 0x938f4cu; r_esp -= 4; W32(r_esp, v); }
    /* 006615d4: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x6615d9u); f_0061cdb0();
    /* 006615d9: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006615dc: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006615df: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 006615e3: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006615e8: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 006615ec: jmp 0x661622 */ goto L_00661622;
L_006615ee:; BB(0x006615ee);
    /* 006615ee: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006615f1: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 006615f3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006615f4: lea ecx, [eax + 0x38] */ r_ecx = (u32)(r_eax+0x38u);
    /* 006615f7: lea edx, [eax + 0x5c] */ r_edx = (u32)(r_eax+0x5cu);
    /* 006615fa: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006615fb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006615fc: call 0x509dc4 */ r_esp -= 4; W32(r_esp, 0x661601u); f_00509dc4();
    /* 00661601: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00661604: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00661607: mov dword ptr [edx + 0x90], eax */ W32((u32)(r_edx+0x90u), r_eax);
    /* 0066160d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066160f: je 0x661643 */ if (fZ) goto L_00661643;
L_00661611:; BB(0x00661611);
    /* 00661611: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00661613: mov ecx, eax */ r_ecx = r_eax;
    /* 00661615: call 0x508f08 */ r_esp -= 4; W32(r_esp, 0x66161au); f_00508f08();
    /* 0066161a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0066161d: call 0x660d00 */ r_esp -= 4; W32(r_esp, 0x661622u); f_00660d00();
L_00661622:; BB(0x00661622);
    /* 00661622: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
L_00661629:; BB(0x00661629);
    /* 00661629: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0066162c: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0066162f: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00661632: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00661635: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00661638: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0066163f: mov esp, ebp */ r_esp = r_ebp;
    /* 00661641: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00661642: ret  */ FN_RET(0x006614cc); r_esp += 4; return;
L_00661643:; BB(0x00661643);
    /* 00661643: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00661647: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0066164c: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00661650: jmp 0x661622 */ goto L_00661622;
L_00661652:; BB(0x00661652);
    /* 00661652: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00661654: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00661657: jmp 0x661629 */ goto L_00661629;
}

void f_0066165c(void) /* sub_66165C */
{
    FN_ENTER(0x0066165c);
    /* 0066165c: mov dword ptr [0xa8fa48], 0x3f800000 */ W32((u32)(0xa8fa48u), 0x3f800000u);
    /* 00661666: mov dword ptr [0xa8fa4c], 0x41000000 */ W32((u32)(0xa8fa4cu), 0x41000000u);
    /* 00661670: mov dword ptr [0xa8fa50], 0x3fc00000 */ W32((u32)(0xa8fa50u), 0x3fc00000u);
    /* 0066167a: ret  */ FN_RET(0x0066165c); r_esp += 4; return;
}

void f_0066167c(void) /* sub_66167C */
{
    FN_ENTER(0x0066167c);
    /* 0066167c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0066167d: mov edi, ecx */ r_edi = r_ecx;
    /* 0066167f: mov eax, dword ptr [edi + 0x9c] */ r_eax = R32((u32)(r_edi+0x9cu));
    /* 00661685: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00661687: je 0x661696 */ if (fZ) goto L_00661696;
L_00661689:; BB(0x00661689);
    /* 00661689: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 0066168d: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00661692: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
L_00661696:; BB(0x00661696);
    /* 00661696: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00661698: mov ecx, dword ptr [edi + 0x90] */ r_ecx = R32((u32)(r_edi+0x90u));
    /* 0066169e: call 0x508dac */ r_esp -= 4; W32(r_esp, 0x6616a3u); f_00508dac();
    /* 006616a3: mov eax, dword ptr [edi + 0x9c] */ r_eax = R32((u32)(r_edi+0x9cu));
    /* 006616a9: and eax, 0xfffffffd */ {  u32 a = r_eax; u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006616ac: mov dword ptr [edi + 0x9c], eax */ W32((u32)(r_edi+0x9cu), r_eax);
    /* 006616b2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006616b3: ret  */ FN_RET(0x0066167c); r_esp += 4; return;
}

void f_006616b4(void) /* sub_6616B4 */
{
    FN_ENTER(0x006616b4);
    /* 006616b4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006616b5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006616b7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006616b9: call 0x6616d8 */ r_esp -= 4; W32(r_esp, 0x6616beu); f_006616d8();
    /* 006616be: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006616c2: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006616c4: jne 0x6616ca */ if (!fZ) goto L_006616ca;
L_006616c6:; BB(0x006616c6);
    /* 006616c6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006616c7: ret 4 */ FN_RET(0x006616b4); r_esp += 8; return;
L_006616ca:; BB(0x006616ca);
    /* 006616ca: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006616cb: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6616d0u); f_005c2f74();
    /* 006616d0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006616d1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006616d2: ret 4 */ FN_RET(0x006616b4); r_esp += 8; return;
}

void f_006616d8(void) /* sub_6616D8 */
{
    FN_ENTER(0x006616d8);
    /* 006616d8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006616d9: mov ebp, esp */ r_ebp = r_esp;
    /* 006616db: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006616dd: push 0x8e7e4c */ { u32 v = 0x8e7e4cu; r_esp -= 4; W32(r_esp, v); }
    /* 006616e2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006616e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006616e9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006616f0: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006616f3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006616f6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006616f9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006616fc: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006616ff: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00661702: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00661705: mov dword ptr [ecx], 0xb33a50 */ W32((u32)(r_ecx), 0xb33a50u);
    /* 0066170b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00661712: call 0x7ba1f0 */ r_esp -= 4; W32(r_esp, 0x661717u); f_007ba1f0();
    /* 00661717: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0066171a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00661721: mov esp, ebp */ r_esp = r_ebp;
    /* 00661723: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00661724: ret  */ FN_RET(0x006616d8); r_esp += 4; return;
}

void f_00661728(void)
{
    FN_ENTER(0x00661728);
    /* 00661728: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00661729: mov ebp, esp */ r_ebp = r_esp;
    /* 0066172b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0066172d: push 0x8e7e74 */ { u32 v = 0x8e7e74u; r_esp -= 4; W32(r_esp, v); }
    /* 00661732: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00661738: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00661739: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00661740: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00661743: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00661746: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00661749: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0066174c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0066174f: push 0x90 */ { u32 v = 0x90u; r_esp -= 4; W32(r_esp, v); }
    /* 00661754: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0066175b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x661760u); f_005caba4();
    /* 00661760: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00661761: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00661764: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00661766: je 0x66179f */ if (fZ) goto L_0066179f;
L_00661768:; BB(0x00661768);
    /* 00661768: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0066176f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00661776: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00661779: push dword ptr [0xaca348] */ { u32 v = R32((u32)(0xaca348u)); r_esp -= 4; W32(r_esp, v); }
    /* 0066177f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00661782: call 0x6617a4 */ r_esp -= 4; W32(r_esp, 0x661787u); f_006617a4();
    /* 00661787: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0066178a: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00661791:; BB(0x00661791);
    /* 00661791: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00661794: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0066179b: mov esp, ebp */ r_esp = r_ebp;
    /* 0066179d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066179e: ret  */ FN_RET(0x00661728); r_esp += 4; return;
L_0066179f:; BB(0x0066179f);
    /* 0066179f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006617a1: jmp 0x661791 */ goto L_00661791;
}

void f_006617a4(void) /* sub_6617A4 */
{
    FN_ENTER(0x006617a4);
    /* 006617a4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006617a5: mov ebp, esp */ r_ebp = r_esp;
    /* 006617a7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006617a9: push 0x8e7e90 */ { u32 v = 0x8e7e90u; r_esp -= 4; W32(r_esp, v); }
    /* 006617ae: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006617b4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006617b5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006617bc: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006617bf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006617c2: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 006617c5: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 006617c8: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 006617cb: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 006617ce: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006617d1: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 006617d4: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006617d7: call 0x7ba278 */ r_esp -= 4; W32(r_esp, 0x6617dcu); f_007ba278();
    /* 006617dc: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006617e3: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006617e6: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006617e9: mov dword ptr [ecx], 0xb33a50 */ W32((u32)(r_ecx), 0xb33a50u);
    /* 006617ef: mov eax, dword ptr [0x9c8840] */ r_eax = R32((u32)(0x9c8840u));
    /* 006617f4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006617f5: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 006617f8: call dword ptr [0xb33a64] */ { u32 t = R32((u32)(0xb33a64u)); r_esp -= 4; W32(r_esp, 0x6617feu); call_ind(t); }
    /* 006617fe: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00661801: fld dword ptr [0x938fe4] */ FPUSH(R_F32((u32)(0x938fe4u)));
    /* 00661807: fld dword ptr [ebx + 0x68] */ FPUSH(R_F32((u32)(r_ebx+0x68u)));
    /* 0066180a: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0066180c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0066180e: mov ecx, dword ptr [ebx + 0x84] */ r_ecx = R32((u32)(r_ebx+0x84u));
    /* 00661814: movzx edi, word ptr [ebx + 8] */ r_edi = (u32)R16((u32)(r_ebx+0x8u));
    /* 00661818: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00661819: mov edx, 0 */ r_edx = 0x0u;
    /* 0066181e: mov eax, ebx */ r_eax = r_ebx;
    /* 00661820: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00661822: ja 0x661826 */ if ((!fC&&!fZ)) goto L_00661826;
L_00661824:; BB(0x00661824);
    /* 00661824: fst st(1) */ ST(1) = ST(0);
L_00661826:; BB(0x00661826);
    /* 00661826: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00661828: fstp dword ptr [ebx + 0x68] */ W_F32((u32)(r_ebx+0x68u), ST(0)); FPOP();
    /* 0066182b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0066182d: jg 0x661831 */ if ((!fZ&&fS==fO)) goto L_00661831;
L_0066182f:; BB(0x0066182f);
    /* 0066182f: mov ecx, edx */ r_ecx = r_edx;
L_00661831:; BB(0x00661831);
    /* 00661831: mov dword ptr [ebx + 0x84], ecx */ W32((u32)(r_ebx+0x84u), r_ecx);
    /* 00661837: or edi, 0xffff0010 */ {  u32 a = r_edi; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_edi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0066183d: mov word ptr [ebx + 8], di */ W16((u32)(r_ebx+0x8u), (u16)r_edi);
    /* 00661841: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00661844: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00661847: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0066184a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00661851: mov esp, ebp */ r_esp = r_ebp;
    /* 00661853: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00661854: ret 8 */ FN_RET(0x006617a4); r_esp += 12; return;
}

void f_00661858(void) /* sub_661858 */
{
    FN_ENTER(0x00661858);
    /* 00661858: mov dword ptr [0xa8fa60], 0x3f800000 */ W32((u32)(0xa8fa60u), 0x3f800000u);
    /* 00661862: mov dword ptr [0xa8fa64], 0x41000000 */ W32((u32)(0xa8fa64u), 0x41000000u);
    /* 0066186c: mov dword ptr [0xa8fa68], 0x3fc00000 */ W32((u32)(0xa8fa68u), 0x3fc00000u);
    /* 00661876: ret  */ FN_RET(0x00661858); r_esp += 4; return;
}

void f_00661878(void) /* sub_661878 */
{
    FN_ENTER(0x00661878);
    /* 00661878: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00661879: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0066187b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0066187d: call 0x661900 */ r_esp -= 4; W32(r_esp, 0x661882u); f_00661900();
    /* 00661882: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00661886: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00661888: jne 0x66188e */ if (!fZ) goto L_0066188e;
L_0066188a:; BB(0x0066188a);
    /* 0066188a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0066188b: ret 4 */ FN_RET(0x00661878); r_esp += 8; return;
L_0066188e:; BB(0x0066188e);
    /* 0066188e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0066188f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x661894u); f_005c2f74();
    /* 00661894: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00661895: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00661896: ret 4 */ FN_RET(0x00661878); r_esp += 8; return;
}

void f_0066189c(void) /* sub_66189C */
{
    FN_ENTER(0x0066189c);
    /* 0066189c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0066189d: mov ebp, esp */ r_ebp = r_esp;
    /* 0066189f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006618a1: push 0x8e7eac */ { u32 v = 0x8e7eacu; r_esp -= 4; W32(r_esp, v); }
    /* 006618a6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006618ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006618ad: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006618b4: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006618b7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006618ba: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 006618bd: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 006618c0: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 006618c3: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 006618c6: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 006618c9: mov eax, ecx */ r_eax = r_ecx;
    /* 006618cb: mov dword ptr [eax], 0xb33ed4 */ W32((u32)(r_eax), 0xb33ed4u);
    /* 006618d1: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006618d8: call 0x661900 */ r_esp -= 4; W32(r_esp, 0x6618ddu); f_00661900();
    /* 006618dd: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006618e0: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006618e2: jne 0x6618f4 */ if (!fZ) goto L_006618f4;
L_006618e4:; BB(0x006618e4);
    /* 006618e4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006618e7: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006618ee: mov esp, ebp */ r_esp = r_ebp;
    /* 006618f0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006618f1: ret 4 */ FN_RET(0x0066189c); r_esp += 8; return;
L_006618f4:; BB(0x006618f4);
    /* 006618f4: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006618f7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006618f8: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6618fdu); f_005c2f74();
    /* 006618fd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006618fe: jmp 0x6618e4 */ goto L_006618e4;
}

void f_00661900(void) /* sub_661900 */
{
    FN_ENTER(0x00661900);
    /* 00661900: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00661901: mov ebp, esp */ r_ebp = r_esp;
    /* 00661903: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00661905: push 0x8e7ec8 */ { u32 v = 0x8e7ec8u; r_esp -= 4; W32(r_esp, v); }
    /* 0066190a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00661910: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00661911: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00661918: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0066191b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0066191e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00661921: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00661924: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00661927: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0066192a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0066192d: mov dword ptr [ecx], 0xb33e98 */ W32((u32)(r_ecx), 0xb33e98u);
    /* 00661933: add dword ptr [0xa8fa7c], -1 */ { u32 ad = (u32)(0xa8fa7cu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0066193a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00661941: call 0x7b4aec */ r_esp -= 4; W32(r_esp, 0x661946u); f_007b4aec();
    /* 00661946: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00661949: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00661950: mov esp, ebp */ r_esp = r_ebp;
    /* 00661952: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00661953: ret  */ FN_RET(0x00661900); r_esp += 4; return;
}

void f_00661954(void) /* sub_661954 */
{
    FN_ENTER(0x00661954);
    /* 00661954: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00661955: mov ebp, esp */ r_ebp = r_esp;
    /* 00661957: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00661959: push 0x8e7ee4 */ { u32 v = 0x8e7ee4u; r_esp -= 4; W32(r_esp, v); }
    /* 0066195e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00661964: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00661965: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0066196c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0066196f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00661972: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00661975: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00661978: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0066197b: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0066197e: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00661981: mov eax, ecx */ r_eax = r_ecx;
    /* 00661983: mov dword ptr [eax], 0xb33f10 */ W32((u32)(r_eax), 0xb33f10u);
    /* 00661989: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00661990: call 0x661900 */ r_esp -= 4; W32(r_esp, 0x661995u); f_00661900();
    /* 00661995: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00661998: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0066199a: jne 0x6619ac */ if (!fZ) goto L_006619ac;
L_0066199c:; BB(0x0066199c);
    /* 0066199c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0066199f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006619a6: mov esp, ebp */ r_esp = r_ebp;
    /* 006619a8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006619a9: ret 4 */ FN_RET(0x00661954); r_esp += 8; return;
L_006619ac:; BB(0x006619ac);
    /* 006619ac: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006619af: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006619b0: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6619b5u); f_005c2f74();
    /* 006619b5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006619b6: jmp 0x66199c */ goto L_0066199c;
}

void f_006619b8(void) /* sub_6619B8 */
{
    FN_ENTER(0x006619b8);
    /* 006619b8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006619b9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006619bb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006619bd: call 0x6619dc */ r_esp -= 4; W32(r_esp, 0x6619c2u); f_006619dc();
    /* 006619c2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006619c6: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006619c8: jne 0x6619ce */ if (!fZ) goto L_006619ce;
L_006619ca:; BB(0x006619ca);
    /* 006619ca: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006619cb: ret 4 */ FN_RET(0x006619b8); r_esp += 8; return;
L_006619ce:; BB(0x006619ce);
    /* 006619ce: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006619cf: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6619d4u); f_005c2f74();
    /* 006619d4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006619d5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006619d6: ret 4 */ FN_RET(0x006619b8); r_esp += 8; return;
}

void f_006619dc(void) /* sub_6619DC */
{
    FN_ENTER(0x006619dc);
    /* 006619dc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006619dd: mov ebp, esp */ r_ebp = r_esp;
    /* 006619df: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006619e1: push 0x8e7f00 */ { u32 v = 0x8e7f00u; r_esp -= 4; W32(r_esp, v); }
    /* 006619e6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006619ec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006619ed: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006619f4: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006619f7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006619fa: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006619fd: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00661a00: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00661a03: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00661a06: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00661a0d: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00661a10: mov dword ptr [eax], 0xb3403c */ W32((u32)(r_eax), 0xb3403cu);
    /* 00661a16: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00661a17: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x661a1cu); f_007b4e84();
    /* 00661a1c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00661a1d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00661a20: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x661a25u); f_007b9c8c();
    /* 00661a25: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00661a2c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00661a2f: call 0x661900 */ r_esp -= 4; W32(r_esp, 0x661a34u); f_00661900();
    /* 00661a34: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00661a37: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00661a3e: mov esp, ebp */ r_esp = r_ebp;
    /* 00661a40: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00661a41: ret  */ FN_RET(0x006619dc); r_esp += 4; return;
}

void f_00661a44(void) /* sub_661A44 */
{
    FN_ENTER(0x00661a44);
    /* 00661a44: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00661a45: mov ebp, esp */ r_ebp = r_esp;
    /* 00661a47: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00661a49: push 0x8e7f1c */ { u32 v = 0x8e7f1cu; r_esp -= 4; W32(r_esp, v); }
    /* 00661a4e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00661a54: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00661a55: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00661a5c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00661a5f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00661a62: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00661a65: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00661a68: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00661a6b: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00661a6e: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00661a71: mov eax, ecx */ r_eax = r_ecx;
    /* 00661a73: mov dword ptr [eax], 0xb33f4c */ W32((u32)(r_eax), 0xb33f4cu);
    /* 00661a79: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00661a80: call 0x661900 */ r_esp -= 4; W32(r_esp, 0x661a85u); f_00661900();
    /* 00661a85: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00661a88: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00661a8a: jne 0x661a9c */ if (!fZ) goto L_00661a9c;
L_00661a8c:; BB(0x00661a8c);
    /* 00661a8c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00661a8f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00661a96: mov esp, ebp */ r_esp = r_ebp;
    /* 00661a98: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00661a99: ret 4 */ FN_RET(0x00661a44); r_esp += 8; return;
L_00661a9c:; BB(0x00661a9c);
    /* 00661a9c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00661a9f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00661aa0: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x661aa5u); f_005c2f74();
    /* 00661aa5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00661aa6: jmp 0x661a8c */ goto L_00661a8c;
}

void f_00661aa8(void) /* sub_661AA8 */
{
    FN_ENTER(0x00661aa8);
    /* 00661aa8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00661aa9: mov ebp, esp */ r_ebp = r_esp;
    /* 00661aab: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00661aad: push 0x8e7f38 */ { u32 v = 0x8e7f38u; r_esp -= 4; W32(r_esp, v); }
    /* 00661ab2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00661ab8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00661ab9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00661ac0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00661ac3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00661ac6: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00661ac9: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00661acc: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00661acf: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00661ad2: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00661ad5: mov eax, ecx */ r_eax = r_ecx;
    /* 00661ad7: mov dword ptr [eax], 0xb33f88 */ W32((u32)(r_eax), 0xb33f88u);
    /* 00661add: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00661ae4: call 0x661900 */ r_esp -= 4; W32(r_esp, 0x661ae9u); f_00661900();
    /* 00661ae9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00661aec: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00661aee: jne 0x661b00 */ if (!fZ) goto L_00661b00;
L_00661af0:; BB(0x00661af0);
    /* 00661af0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00661af3: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00661afa: mov esp, ebp */ r_esp = r_ebp;
    /* 00661afc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00661afd: ret 4 */ FN_RET(0x00661aa8); r_esp += 8; return;
L_00661b00:; BB(0x00661b00);
    /* 00661b00: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00661b03: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00661b04: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x661b09u); f_005c2f74();
    /* 00661b09: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00661b0a: jmp 0x661af0 */ goto L_00661af0;
}

void f_00661b0c(void) /* sub_661B0C */
{
    FN_ENTER(0x00661b0c);
    /* 00661b0c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00661b0d: mov ebp, esp */ r_ebp = r_esp;
    /* 00661b0f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00661b11: push 0x8e7f54 */ { u32 v = 0x8e7f54u; r_esp -= 4; W32(r_esp, v); }
    /* 00661b16: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00661b1c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00661b1d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00661b24: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00661b27: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00661b2a: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00661b2d: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00661b30: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00661b33: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00661b36: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00661b39: mov eax, ecx */ r_eax = r_ecx;
    /* 00661b3b: mov dword ptr [eax], 0xb33fc4 */ W32((u32)(r_eax), 0xb33fc4u);
    /* 00661b41: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00661b48: call 0x661900 */ r_esp -= 4; W32(r_esp, 0x661b4du); f_00661900();
    /* 00661b4d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00661b50: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00661b52: jne 0x661b64 */ if (!fZ) goto L_00661b64;
L_00661b54:; BB(0x00661b54);
    /* 00661b54: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00661b57: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00661b5e: mov esp, ebp */ r_esp = r_ebp;
    /* 00661b60: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00661b61: ret 4 */ FN_RET(0x00661b0c); r_esp += 8; return;
L_00661b64:; BB(0x00661b64);
    /* 00661b64: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00661b67: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00661b68: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x661b6du); f_005c2f74();
    /* 00661b6d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00661b6e: jmp 0x661b54 */ goto L_00661b54;
}

void f_00661b70(void) /* sub_661B70 */
{
    FN_ENTER(0x00661b70);
    /* 00661b70: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00661b71: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00661b73: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00661b75: call 0x661b94 */ r_esp -= 4; W32(r_esp, 0x661b7au); f_00661b94();
    /* 00661b7a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00661b7e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00661b80: jne 0x661b86 */ if (!fZ) goto L_00661b86;
L_00661b82:; BB(0x00661b82);
    /* 00661b82: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00661b83: ret 4 */ FN_RET(0x00661b70); r_esp += 8; return;
L_00661b86:; BB(0x00661b86);
    /* 00661b86: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00661b87: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x661b8cu); f_005c2f74();
    /* 00661b8c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00661b8d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00661b8e: ret 4 */ FN_RET(0x00661b70); r_esp += 8; return;
}

void f_00661b94(void) /* sub_661B94 */
{
    FN_ENTER(0x00661b94);
    /* 00661b94: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00661b95: mov ebp, esp */ r_ebp = r_esp;
    /* 00661b97: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00661b99: push 0x8e7f70 */ { u32 v = 0x8e7f70u; r_esp -= 4; W32(r_esp, v); }
    /* 00661b9e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00661ba4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00661ba5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00661bac: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00661baf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00661bb2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00661bb5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00661bb8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00661bbb: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00661bbe: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00661bc5: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00661bc8: mov dword ptr [eax], 0xb34078 */ W32((u32)(r_eax), 0xb34078u);
    /* 00661bce: mov ecx, dword ptr [0xa8fa80] */ r_ecx = R32((u32)(0xa8fa80u));
    /* 00661bd4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00661bd6: je 0x661bed */ if (fZ) goto L_00661bed;
L_00661bd8:; BB(0x00661bd8);
    /* 00661bd8: je 0x661be3 */ if (fZ) goto L_00661be3;
L_00661bda:; BB(0x00661bda);
    /* 00661bda: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00661bdc: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00661bde: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x661be0u); call_ind(t); }
    /* 00661be0: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
L_00661be3:; BB(0x00661be3);
    /* 00661be3: mov dword ptr [0xa8fa80], 0 */ W32((u32)(0xa8fa80u), 0x0u);
L_00661bed:; BB(0x00661bed);
    /* 00661bed: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00661bf4: mov ecx, eax */ r_ecx = r_eax;
    /* 00661bf6: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x661bfbu); f_008171e8();
    /* 00661bfb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00661bfe: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00661c05: mov esp, ebp */ r_esp = r_ebp;
    /* 00661c07: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00661c08: ret  */ FN_RET(0x00661b94); r_esp += 4; return;
}

void f_00661c0c(void) /* sub_661C0C */
{
    FN_ENTER(0x00661c0c);
    /* 00661c0c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00661c0d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00661c0f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00661c11: call 0x661c30 */ r_esp -= 4; W32(r_esp, 0x661c16u); f_00661c30();
    /* 00661c16: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00661c1a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00661c1c: jne 0x661c22 */ if (!fZ) goto L_00661c22;
L_00661c1e:; BB(0x00661c1e);
    /* 00661c1e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00661c1f: ret 4 */ FN_RET(0x00661c0c); r_esp += 8; return;
L_00661c22:; BB(0x00661c22);
    /* 00661c22: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00661c23: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x661c28u); f_005c2f74();
    /* 00661c28: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00661c29: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00661c2a: ret 4 */ FN_RET(0x00661c0c); r_esp += 8; return;
}

void f_00661c30(void) /* sub_661C30 */
{
    FN_ENTER(0x00661c30);
    /* 00661c30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00661c31: mov ebp, esp */ r_ebp = r_esp;
    /* 00661c33: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00661c35: push 0x8e7f8c */ { u32 v = 0x8e7f8cu; r_esp -= 4; W32(r_esp, v); }
    /* 00661c3a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00661c40: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00661c41: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00661c48: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00661c4b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00661c4e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00661c51: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00661c54: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00661c57: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00661c5a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00661c61: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00661c64: mov dword ptr [eax], 0xb34088 */ W32((u32)(r_eax), 0xb34088u);
    /* 00661c6a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00661c6b: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x661c70u); f_007b4e84();
    /* 00661c70: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00661c71: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00661c74: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x661c79u); f_007b9c8c();
    /* 00661c79: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00661c80: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00661c83: call 0x661900 */ r_esp -= 4; W32(r_esp, 0x661c88u); f_00661900();
    /* 00661c88: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00661c8b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00661c92: mov esp, ebp */ r_esp = r_ebp;
    /* 00661c94: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00661c95: ret  */ FN_RET(0x00661c30); r_esp += 4; return;
}

void f_00661c98(void) /* sub_661C98 */
{
    FN_ENTER(0x00661c98);
    /* 00661c98: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00661c99: mov ebp, esp */ r_ebp = r_esp;
    /* 00661c9b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00661c9d: push 0x8e7fa8 */ { u32 v = 0x8e7fa8u; r_esp -= 4; W32(r_esp, v); }
    /* 00661ca2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00661ca8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00661ca9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00661cb0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00661cb3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00661cb6: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00661cb9: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00661cbc: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00661cbf: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00661cc2: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00661cc5: mov eax, ecx */ r_eax = r_ecx;
    /* 00661cc7: mov dword ptr [eax], 0xb34000 */ W32((u32)(r_eax), 0xb34000u);
    /* 00661ccd: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00661cd4: call 0x661900 */ r_esp -= 4; W32(r_esp, 0x661cd9u); f_00661900();
    /* 00661cd9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00661cdc: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00661cde: jne 0x661cf0 */ if (!fZ) goto L_00661cf0;
L_00661ce0:; BB(0x00661ce0);
    /* 00661ce0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00661ce3: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00661cea: mov esp, ebp */ r_esp = r_ebp;
    /* 00661cec: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00661ced: ret 4 */ FN_RET(0x00661c98); r_esp += 8; return;
L_00661cf0:; BB(0x00661cf0);
    /* 00661cf0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00661cf3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00661cf4: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x661cf9u); f_005c2f74();
    /* 00661cf9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00661cfa: jmp 0x661ce0 */ goto L_00661ce0;
}

void f_00661cfc(void) /* sub_661CFC */
{
    FN_ENTER(0x00661cfc);
    /* 00661cfc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00661cfd: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00661d00: mov esi, ecx */ r_esi = r_ecx;
    /* 00661d02: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00661d04: mov ecx, esi */ r_ecx = r_esi;
    /* 00661d06: push 0x41200000 */ { u32 v = 0x41200000u; r_esp -= 4; W32(r_esp, v); }
    /* 00661d0b: push 0x43480000 */ { u32 v = 0x43480000u; r_esp -= 4; W32(r_esp, v); }
    /* 00661d10: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x661d13u); call_ind(t); }
    /* 00661d13: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00661d15: je 0x661d3a */ if (fZ) goto L_00661d3a;
L_00661d17:; BB(0x00661d17);
    /* 00661d17: fld dword ptr [esi + 0xac] */ FPUSH(R_F32((u32)(r_esi+0xacu)));
    /* 00661d1d: fmul dword ptr [0x939058] */ ST(0) = ST(0) * R_F32((u32)(0x939058u));
    /* 00661d23: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00661d27: lea eax, [esi + 0x38] */ r_eax = (u32)(r_esi+0x38u);
    /* 00661d2a: mov dword ptr [esp + 8], 0x9ff9e0 */ W32((u32)(r_esp+0x8u), 0x9ff9e0u);
    /* 00661d32: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00661d35: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x661d3au); f_0061cdb0();
L_00661d3a:; BB(0x00661d3a);
    /* 00661d3a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00661d3d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00661d3e: ret  */ FN_RET(0x00661cfc); r_esp += 4; return;
}

void f_00661d40(void) /* sub_661D40 */
{
    FN_ENTER(0x00661d40);
    /* 00661d40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00661d41: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00661d43: mov ecx, dword ptr [ebp + 0xb8] */ r_ecx = R32((u32)(r_ebp+0xb8u));
    /* 00661d49: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00661d4b: je 0x661d6a */ if (fZ) goto L_00661d6a;
L_00661d4d:; BB(0x00661d4d);
    /* 00661d4d: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x661d52u); f_008173b4();
    /* 00661d52: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00661d54: jne 0x661d64 */ if (!fZ) goto L_00661d64;
L_00661d56:; BB(0x00661d56);
    /* 00661d56: mov dword ptr [ebp + 0xb8], 0 */ W32((u32)(r_ebp+0xb8u), 0x0u);
    /* 00661d60: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00661d62: jmp 0x661d6a */ goto L_00661d6a;
L_00661d64:; BB(0x00661d64);
    /* 00661d64: mov ecx, dword ptr [ebp + 0xb8] */ r_ecx = R32((u32)(r_ebp+0xb8u));
L_00661d6a:; BB(0x00661d6a);
    /* 00661d6a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00661d6c: je 0x661d70 */ if (fZ) goto L_00661d70;
L_00661d6e:; BB(0x00661d6e);
    /* 00661d6e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00661d6f: ret  */ FN_RET(0x00661d40); r_esp += 4; return;
L_00661d70:; BB(0x00661d70);
    /* 00661d70: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00661d73: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00661d75: call dword ptr [eax + 0x34] */ { u32 t = R32((u32)(r_eax+0x34u)); r_esp -= 4; W32(r_esp, 0x661d78u); call_ind(t); }
    /* 00661d78: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00661d7a: je 0x661d6e */ if (fZ) goto L_00661d6e;
L_00661d7c:; BB(0x00661d7c);
    /* 00661d7c: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00661d7f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00661d81: call dword ptr [eax + 0x38] */ { u32 t = R32((u32)(r_eax+0x38u)); r_esp -= 4; W32(r_esp, 0x661d84u); call_ind(t); }
    /* 00661d84: mov dword ptr [ebp + 0xb8], eax */ W32((u32)(r_ebp+0xb8u), r_eax);
    /* 00661d8a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00661d8b: ret  */ FN_RET(0x00661d40); r_esp += 4; return;
}

void f_00661d8c(void) /* sub_661D8C */
{
    FN_ENTER(0x00661d8c);
    /* 00661d8c: push dword ptr [ecx + 0xac] */ { u32 v = R32((u32)(r_ecx+0xacu)); r_esp -= 4; W32(r_esp, v); }
    /* 00661d92: call 0x661da8 */ r_esp -= 4; W32(r_esp, 0x661d97u); f_00661da8();
    /* 00661d97: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00661d9a: je 0x661d9f */ if (fZ) goto L_00661d9f;
L_00661d9c:; BB(0x00661d9c);
    /* 00661d9c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00661d9e: ret  */ FN_RET(0x00661d8c); r_esp += 4; return;
L_00661d9f:; BB(0x00661d9f);
    /* 00661d9f: mov eax, 1 */ r_eax = 0x1u;
    /* 00661da4: ret  */ FN_RET(0x00661d8c); r_esp += 4; return;
}

void f_00661da8(void) /* sub_661DA8 */
{
    FN_ENTER(0x00661da8);
    /* 00661da8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00661da9: mov edi, ecx */ r_edi = r_ecx;
    /* 00661dab: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00661dac: mov ecx, edi */ r_ecx = r_edi;
    /* 00661dae: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 00661db2: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00661db4: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00661db7: call 0x661e0c */ r_esp -= 4; W32(r_esp, 0x661dbcu); f_00661e0c();
    /* 00661dbc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00661dbe: je 0x661de3 */ if (fZ) goto L_00661de3;
L_00661dc0:; BB(0x00661dc0);
    /* 00661dc0: mov eax, dword ptr [edi + 0xb4] */ r_eax = R32((u32)(r_edi+0xb4u));
    /* 00661dc6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00661dc8: je 0x661ddd */ if (fZ) goto L_00661ddd;
L_00661dca:; BB(0x00661dca);
    /* 00661dca: mov dword ptr [edi + 0xb4], 0 */ W32((u32)(r_edi+0xb4u), 0x0u);
    /* 00661dd4: mov eax, 1 */ r_eax = 0x1u;
    /* 00661dd9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00661dda: ret 4 */ FN_RET(0x00661da8); r_esp += 8; return;
L_00661ddd:; BB(0x00661ddd);
    /* 00661ddd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00661ddf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00661de0: ret 4 */ FN_RET(0x00661da8); r_esp += 8; return;
L_00661de3:; BB(0x00661de3);
    /* 00661de3: mov eax, dword ptr [edi + 0xb4] */ r_eax = R32((u32)(r_edi+0xb4u));
    /* 00661de9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00661deb: je 0x661df6 */ if (fZ) goto L_00661df6;
L_00661ded:; BB(0x00661ded);
    /* 00661ded: mov eax, 2 */ r_eax = 0x2u;
    /* 00661df2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00661df3: ret 4 */ FN_RET(0x00661da8); r_esp += 8; return;
L_00661df6:; BB(0x00661df6);
    /* 00661df6: mov dword ptr [edi + 0xb4], 1 */ W32((u32)(r_edi+0xb4u), 0x1u);
    /* 00661e00: mov eax, 3 */ r_eax = 0x3u;
    /* 00661e05: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00661e06: ret 4 */ FN_RET(0x00661da8); r_esp += 8; return;
}

void f_00661e0c(void) /* sub_661E0C */
{
    FN_ENTER(0x00661e0c);
    /* 00661e0c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00661e0d: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00661e0f: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00661e15: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x661e1au); f_0068d5a8();
    /* 00661e1a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00661e1b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00661e1d: je 0x661e41 */ if (fZ) goto L_00661e41;
L_00661e1f:; BB(0x00661e1f);
    /* 00661e1f: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00661e22: add ebp, 0x38 */ {  u32 a = r_ebp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00661e25: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00661e26: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00661e27: call 0x78ea2c */ r_esp -= 4; W32(r_esp, 0x661e2cu); f_0078ea2c();
    /* 00661e2c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 00661e2f: fcomp dword ptr [esp + 8] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x8u))); FPOP();
    /* 00661e33: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00661e35: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00661e36: jae 0x661e41 */ if (!fC) goto L_00661e41;
L_00661e38:; BB(0x00661e38);
    /* 00661e38: mov eax, 1 */ r_eax = 0x1u;
    /* 00661e3d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00661e3e: ret 4 */ FN_RET(0x00661e0c); r_esp += 8; return;
L_00661e41:; BB(0x00661e41);
    /* 00661e41: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00661e43: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00661e44: ret 4 */ FN_RET(0x00661e0c); r_esp += 8; return;
}

void f_00661e48(void)
{
    FN_ENTER(0x00661e48);
    /* 00661e48: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00661e49: mov ebp, esp */ r_ebp = r_esp;
    /* 00661e4b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00661e4d: push 0x8e7fd0 */ { u32 v = 0x8e7fd0u; r_esp -= 4; W32(r_esp, v); }
    /* 00661e52: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00661e58: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00661e59: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00661e60: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00661e63: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00661e66: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00661e69: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00661e6c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00661e6f: push 0xbc */ { u32 v = 0xbcu; r_esp -= 4; W32(r_esp, v); }
    /* 00661e74: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00661e7b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x661e80u); f_005caba4();
    /* 00661e80: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00661e81: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00661e84: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00661e86: je 0x661ebf */ if (fZ) goto L_00661ebf;
L_00661e88:; BB(0x00661e88);
    /* 00661e88: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00661e8f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00661e96: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00661e99: push dword ptr [0xa8fa80] */ { u32 v = R32((u32)(0xa8fa80u)); r_esp -= 4; W32(r_esp, v); }
    /* 00661e9f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00661ea2: call 0x661ec4 */ r_esp -= 4; W32(r_esp, 0x661ea7u); f_00661ec4();
    /* 00661ea7: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00661eaa: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00661eb1:; BB(0x00661eb1);
    /* 00661eb1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00661eb4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00661ebb: mov esp, ebp */ r_esp = r_ebp;
    /* 00661ebd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00661ebe: ret  */ FN_RET(0x00661e48); r_esp += 4; return;
L_00661ebf:; BB(0x00661ebf);
    /* 00661ebf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00661ec1: jmp 0x661eb1 */ goto L_00661eb1;
}

void f_00661ec4(void) /* sub_661EC4 */
{
    FN_ENTER(0x00661ec4);
    /* 00661ec4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00661ec5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00661ec7: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00661ecb: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00661ecf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00661ed1: call 0x661eec */ r_esp -= 4; W32(r_esp, 0x661ed6u); f_00661eec();
    /* 00661ed6: mov dword ptr [ebx], 0xb33ed4 */ W32((u32)(r_ebx), 0xb33ed4u);
    /* 00661edc: mov edx, dword ptr [0x9c8848] */ r_edx = R32((u32)(0x9c8848u));
    /* 00661ee2: mov dword ptr [ebx + 4], edx */ W32((u32)(r_ebx+0x4u), r_edx);
    /* 00661ee5: mov eax, ebx */ r_eax = r_ebx;
    /* 00661ee7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00661ee8: ret 8 */ FN_RET(0x00661ec4); r_esp += 12; return;
}

void f_00661eec(void) /* sub_661EEC */
{
    FN_ENTER(0x00661eec);
    /* 00661eec: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00661eed: mov ebp, esp */ r_ebp = r_esp;
    /* 00661eef: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00661ef1: push 0x8e7fec */ { u32 v = 0x8e7fecu; r_esp -= 4; W32(r_esp, v); }
    /* 00661ef6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00661efc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00661efd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00661f04: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00661f07: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00661f0a: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00661f0d: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00661f10: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00661f13: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00661f16: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00661f19: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00661f1c: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00661f1f: call 0x7b4b48 */ r_esp -= 4; W32(r_esp, 0x661f24u); f_007b4b48();
    /* 00661f24: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00661f2b: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00661f2e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00661f31: mov dword ptr [ecx], 0xb33e98 */ W32((u32)(r_ecx), 0xb33e98u);
    /* 00661f37: mov eax, dword ptr [0x9c8844] */ r_eax = R32((u32)(0x9c8844u));
    /* 00661f3c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00661f3d: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00661f40: call dword ptr [0xb33eac] */ { u32 t = R32((u32)(0xb33eacu)); r_esp -= 4; W32(r_esp, 0x661f46u); call_ind(t); }
    /* 00661f46: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00661f49: movzx edx, word ptr [eax + 0x1c] */ r_edx = (u32)R16((u32)(r_eax+0x1cu));
    /* 00661f4d: cmp edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00661f53: je 0x661fb0 */ if (fZ) goto L_00661fb0;
L_00661f55:; BB(0x00661f55);
    /* 00661f55: movzx ecx, word ptr [0xa8fa94] */ r_ecx = (u32)R16((u32)(0xa8fa94u));
    /* 00661f5c: mov edi, dword ptr [eax + 0x68] */ r_edi = R32((u32)(r_eax+0x68u));
    /* 00661f5f: mov esi, dword ptr [eax + 0x84] */ r_esi = R32((u32)(r_eax+0x84u));
    /* 00661f65: lea edx, [ecx + 1] */ r_edx = (u32)(r_ecx+0x1u);
    /* 00661f68: mov word ptr [eax + 0xa], cx */ W16((u32)(r_eax+0xau), (u16)r_ecx);
    /* 00661f6c: mov dword ptr [eax + 0xb4], 1 */ W32((u32)(r_eax+0xb4u), 0x1u);
    /* 00661f76: mov word ptr [0xa8fa94], dx */ W16((u32)(0xa8fa94u), (u16)r_edx);
    /* 00661f7d: mov dword ptr [eax + 0xac], edi */ W32((u32)(r_eax+0xacu), r_edi);
    /* 00661f83: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00661f86: mov dword ptr [eax + 0xb8], 0 */ W32((u32)(r_eax+0xb8u), 0x0u);
    /* 00661f90: mov dword ptr [eax + 0xb0], esi */ W32((u32)(r_eax+0xb0u), r_esi);
    /* 00661f96: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00661f99: add dword ptr [0xa8fa7c], 1 */ { u32 ad = (u32)(0xa8fa7cu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00661fa0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00661fa3: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00661faa: mov esp, ebp */ r_esp = r_ebp;
    /* 00661fac: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00661fad: ret 8 */ FN_RET(0x00661eec); r_esp += 12; return;
L_00661fb0:; BB(0x00661fb0);
    /* 00661fb0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00661fb2: call 0x7ba898 */ r_esp -= 4; W32(r_esp, 0x661fb7u); f_007ba898();
    /* 00661fb7: mov edx, eax */ r_edx = r_eax;
    /* 00661fb9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00661fbc: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00661fbf: mov word ptr [eax + 0x1c], dx */ W16((u32)(r_eax+0x1cu), (u16)r_edx);
    /* 00661fc3: jmp 0x661f55 */ goto L_00661f55;
}

void f_00661fc8(void) /* sub_661FC8 */
{
    FN_ENTER(0x00661fc8);
    /* 00661fc8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00661fc9: mov ebp, esp */ r_ebp = r_esp;
    /* 00661fcb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00661fcd: push 0x8e8014 */ { u32 v = 0x8e8014u; r_esp -= 4; W32(r_esp, v); }
    /* 00661fd2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00661fd8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00661fd9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00661fe0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00661fe3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00661fe6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00661fe9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00661fec: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00661fef: push 0xbc */ { u32 v = 0xbcu; r_esp -= 4; W32(r_esp, v); }
    /* 00661ff4: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00661ffb: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x662000u); f_005caba4();
    /* 00662000: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00662001: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00662004: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00662006: je 0x662059 */ if (fZ) goto L_00662059;
L_00662008:; BB(0x00662008);
    /* 00662008: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0066200f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00662016: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00662019: push dword ptr [0xa8fa80] */ { u32 v = R32((u32)(0xa8fa80u)); r_esp -= 4; W32(r_esp, v); }
    /* 0066201f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00662022: call 0x661ec4 */ r_esp -= 4; W32(r_esp, 0x662027u); f_00661ec4();
    /* 00662027: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0066202a: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00662031:; BB(0x00662031);
    /* 00662031: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00662033: je 0x66204e */ if (fZ) goto L_0066204e;
L_00662035:; BB(0x00662035);
    /* 00662035: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00662038: movzx eax, word ptr [ecx + 0xa] */ r_eax = (u32)R16((u32)(r_ecx+0xau));
    /* 0066203c: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
L_0066203e:; BB(0x0066203e);
    /* 0066203e: mov eax, ecx */ r_eax = r_ecx;
    /* 00662040: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00662043: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0066204a: mov esp, ebp */ r_esp = r_ebp;
    /* 0066204c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066204d: ret  */ FN_RET(0x00661fc8); r_esp += 4; return;
L_0066204e:; BB(0x0066204e);
    /* 0066204e: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00662051: mov dword ptr [edx], 0xffffffff */ W32((u32)(r_edx), 0xffffffffu);
    /* 00662057: jmp 0x66203e */ goto L_0066203e;
L_00662059:; BB(0x00662059);
    /* 00662059: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0066205b: jmp 0x662031 */ goto L_00662031;
}

