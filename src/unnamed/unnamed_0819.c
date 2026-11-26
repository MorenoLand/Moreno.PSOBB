#include "protos.h"

void f_008190bc(void) /* sub_8190BC */
{
    FN_ENTER(0x008190bc);
    /* 008190bc: call 0x83dd74 */ r_esp -= 4; W32(r_esp, 0x8190c1u); f_0083dd74();
    /* 008190c1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008190c2: push dword ptr [0xaca20c] */ { u32 v = R32((u32)(0xaca20cu)); r_esp -= 4; W32(r_esp, v); }
    /* 008190c8: call 0x83ddac */ r_esp -= 4; W32(r_esp, 0x8190cdu); f_0083ddac();
    /* 008190cd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008190ce: call 0x83ddc4 */ r_esp -= 4; W32(r_esp, 0x8190d3u); f_0083ddc4();
    /* 008190d3: mov dword ptr [0xaca210], eax */ W32((u32)(0xaca210u), r_eax);
    /* 008190d8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008190db: ret  */ FN_RET(0x008190bc); r_esp += 4; return;
}

void f_008190dc(void) /* sub_8190DC */
{
    FN_ENTER(0x008190dc);
    /* 008190dc: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008190df: call 0x482a00 */ r_esp -= 4; W32(r_esp, 0x8190e4u); f_00482a00();
    /* 008190e4: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 008190e7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008190e9: je 0x819157 */ if (fZ) goto L_00819157;
L_008190eb:; BB(0x008190eb);
    /* 008190eb: mov eax, dword ptr [0xaca200] */ r_eax = R32((u32)(0xaca200u));
    /* 008190f0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008190f2: je 0x819103 */ if (fZ) goto L_00819103;
L_008190f4:; BB(0x008190f4);
    /* 008190f4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008190f6: mov dword ptr [0xaca200], eax */ W32((u32)(0xaca200u), r_eax);
    /* 008190fb: mov word ptr [0xaca204], ax */ W16((u32)(0xaca204u), (u16)r_eax);
    /* 00819101: jmp 0x81915f */ goto L_0081915f;
L_00819103:; BB(0x00819103);
    /* 00819103: movzx edx, word ptr [0xaca208] */ r_edx = (u32)R16((u32)(0xaca208u));
    /* 0081910a: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0081910d: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 00819110: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 00819113: fmul dword ptr [0x989684] */ ST(0) = ST(0) * R_F32((u32)(0x989684u));
    /* 00819119: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 0081911d: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 00819122: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00819127: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0081912b: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0081912f: fistp qword ptr [esp + 0x18] */ W64((u32)(r_esp+0x18u), (u64)fx_int64(ST(0))); FPOP();
    /* 00819133: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00819137: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0081913b: cmp eax, dword ptr [0xaca210] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaca210u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00819141: jae 0x81914d */ if (!fC) goto L_0081914d;
L_00819143:; BB(0x00819143);
    /* 00819143: mov dword ptr [0xaca200], 1 */ W32((u32)(0xaca200u), 0x1u);
L_0081914d:; BB(0x0081914d);
    /* 0081914d: add word ptr [0xaca204], 1 */ { u32 ad = (u32)(0xaca204u);  u32 a = R16(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 00819155: jmp 0x81915f */ goto L_0081915f;
L_00819157:; BB(0x00819157);
    /* 00819157: add word ptr [0xaca204], 1 */ { u32 ad = (u32)(0xaca204u);  u32 a = R16(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
L_0081915f:; BB(0x0081915f);
    /* 0081915f: call 0x83dd74 */ r_esp -= 4; W32(r_esp, 0x819164u); f_0083dd74();
    /* 00819164: mov dword ptr [0xaca20c], eax */ W32((u32)(0xaca20cu), r_eax);
    /* 00819169: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0081916c: ret  */ FN_RET(0x008190dc); r_esp += 4; return;
}

void f_00819170(void)
{
    FN_ENTER(0x00819170);
    /* 00819170: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 00819175: call 0x819210 */ r_esp -= 4; W32(r_esp, 0x81917au); f_00819210();
    /* 0081917a: push 0x819240 */ { u32 v = 0x819240u; r_esp -= 4; W32(r_esp, v); }
    /* 0081917f: call 0x85909d */ r_esp -= 4; W32(r_esp, 0x819184u); f_0085909d();
    /* 00819184: mov eax, dword ptr [0xa16304] */ r_eax = R32((u32)(0xa16304u));
    /* 00819189: mov dword ptr [0xaca2c8], 0xb47a80 */ W32((u32)(0xaca2c8u), 0xb47a80u);
    /* 00819193: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00819195: mov word ptr [0xaca2d0], dx */ W16((u32)(0xaca2d0u), (u16)r_edx);
    /* 0081919c: mov dword ptr [0xaca2d4], 0xaca2c8 */ W32((u32)(0xaca2d4u), 0xaca2c8u);
    /* 008191a6: mov dword ptr [0xaca2dc], edx */ W32((u32)(0xaca2dcu), r_edx);
    /* 008191ac: push 0x81924c */ { u32 v = 0x81924cu; r_esp -= 4; W32(r_esp, v); }
    /* 008191b1: mov dword ptr [0xaca2e0], edx */ W32((u32)(0xaca2e0u), r_edx);
    /* 008191b7: mov dword ptr [0xaca2cc], eax */ W32((u32)(0xaca2ccu), r_eax);
    /* 008191bc: mov dword ptr [0xaca2d8], edx */ W32((u32)(0xaca2d8u), r_edx);
    /* 008191c2: call 0x85909d */ r_esp -= 4; W32(r_esp, 0x8191c7u); f_0085909d();
    /* 008191c7: mov eax, dword ptr [0xa16304] */ r_eax = R32((u32)(0xa16304u));
    /* 008191cc: mov dword ptr [0xaca2ac], 0xb47a80 */ W32((u32)(0xaca2acu), 0xb47a80u);
    /* 008191d6: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008191d8: mov word ptr [0xaca2b4], dx */ W16((u32)(0xaca2b4u), (u16)r_edx);
    /* 008191df: mov dword ptr [0xaca2b8], 0xaca2ac */ W32((u32)(0xaca2b8u), 0xaca2acu);
    /* 008191e9: mov dword ptr [0xaca2c0], edx */ W32((u32)(0xaca2c0u), r_edx);
    /* 008191ef: push 0x81930c */ { u32 v = 0x81930cu; r_esp -= 4; W32(r_esp, v); }
    /* 008191f4: mov dword ptr [0xaca2c4], edx */ W32((u32)(0xaca2c4u), r_edx);
    /* 008191fa: mov dword ptr [0xaca2b0], eax */ W32((u32)(0xaca2b0u), r_eax);
    /* 008191ff: mov dword ptr [0xaca2bc], edx */ W32((u32)(0xaca2bcu), r_edx);
    /* 00819205: call 0x85909d */ r_esp -= 4; W32(r_esp, 0x81920au); f_0085909d();
    /* 0081920a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0081920d: ret  */ FN_RET(0x00819170); r_esp += 4; return;
}

void f_00819210(void) /* sub_819210 */
{
    FN_ENTER(0x00819210);
    /* 00819210: mov dword ptr [ecx], 0xb47a90 */ W32((u32)(r_ecx), 0xb47a90u);
    /* 00819216: mov edx, dword ptr [0xa16310] */ r_edx = R32((u32)(0xa16310u));
    /* 0081921c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0081921e: mov word ptr [ecx + 8], ax */ W16((u32)(r_ecx+0x8u), (u16)r_eax);
    /* 00819222: mov dword ptr [ecx + 0x14], eax */ W32((u32)(r_ecx+0x14u), r_eax);
    /* 00819225: mov dword ptr [ecx + 0x18], eax */ W32((u32)(r_ecx+0x18u), r_eax);
    /* 00819228: mov dword ptr [ecx + 0xc], ecx */ W32((u32)(r_ecx+0xcu), r_ecx);
    /* 0081922b: mov dword ptr [ecx + 0x10], eax */ W32((u32)(r_ecx+0x10u), r_eax);
    /* 0081922e: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 00819231: mov dword ptr [ecx + 0x1c], eax */ W32((u32)(r_ecx+0x1cu), r_eax);
    /* 00819234: mov dword ptr [ecx + 0x20], eax */ W32((u32)(r_ecx+0x20u), r_eax);
    /* 00819237: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 0081923a: mov eax, ecx */ r_eax = r_ecx;
    /* 0081923c: ret  */ FN_RET(0x00819210); r_esp += 4; return;
}

void f_008193cc(void) /* sub_8193CC */
{
    FN_ENTER(0x008193cc);
    /* 008193cc: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 008193d0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008193d2: mov word ptr [ecx + 8], ax */ W16((u32)(r_ecx+0x8u), (u16)r_eax);
    /* 008193d6: mov dword ptr [ecx + 0x14], edx */ W32((u32)(r_ecx+0x14u), r_edx);
    /* 008193d9: mov dword ptr [ecx], 0xb47a80 */ W32((u32)(r_ecx), 0xb47a80u);
    /* 008193df: mov dword ptr [ecx + 0x18], eax */ W32((u32)(r_ecx+0x18u), r_eax);
    /* 008193e2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008193e4: mov eax, dword ptr [0xa16304] */ r_eax = R32((u32)(0xa16304u));
    /* 008193e9: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 008193ec: je 0x81941f */ if (fZ) goto L_0081941f;
L_008193ee:; BB(0x008193ee);
    /* 008193ee: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 008193f1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008193f3: je 0x819410 */ if (fZ) goto L_00819410;
L_008193f5:; BB(0x008193f5);
    /* 008193f5: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 008193f8: mov dword ptr [ecx + 0x10], 0 */ W32((u32)(r_ecx+0x10u), 0x0u);
    /* 008193ff: mov dword ptr [ecx + 0xc], edx */ W32((u32)(r_ecx+0xcu), r_edx);
    /* 00819402: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 00819405: mov dword ptr [edx + 0x10], ecx */ W32((u32)(r_edx+0x10u), r_ecx);
    /* 00819408: mov dword ptr [eax + 0xc], ecx */ W32((u32)(r_eax+0xcu), r_ecx);
L_0081940b:; BB(0x0081940b);
    /* 0081940b: mov eax, ecx */ r_eax = r_ecx;
    /* 0081940d: ret 4 */ FN_RET(0x008193cc); r_esp += 8; return;
L_00819410:; BB(0x00819410);
    /* 00819410: mov dword ptr [ecx + 0xc], ecx */ W32((u32)(r_ecx+0xcu), r_ecx);
    /* 00819413: mov dword ptr [edx + 0x18], ecx */ W32((u32)(r_edx+0x18u), r_ecx);
    /* 00819416: mov dword ptr [ecx + 0x10], 0 */ W32((u32)(r_ecx+0x10u), 0x0u);
    /* 0081941d: jmp 0x81940b */ goto L_0081940b;
L_0081941f:; BB(0x0081941f);
    /* 0081941f: mov dword ptr [ecx + 0x10], 0 */ W32((u32)(r_ecx+0x10u), 0x0u);
    /* 00819426: mov dword ptr [ecx + 0xc], ecx */ W32((u32)(r_ecx+0xcu), r_ecx);
    /* 00819429: jmp 0x81940b */ goto L_0081940b;
}

void f_0081942c(void) /* sub_81942C */
{
    FN_ENTER(0x0081942c);
    /* 0081942c: call 0x4829f8 */ r_esp -= 4; W32(r_esp, 0x819431u); f_004829f8();
    /* 00819431: mov word ptr [0xaca208], ax */ W16((u32)(0xaca208u), (u16)r_eax);
    /* 00819437: ret  */ FN_RET(0x0081942c); r_esp += 4; return;
}

void f_00819438(void) /* sub_819438 */
{
    FN_ENTER(0x00819438);
    /* 00819438: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00819439: mov ebp, esp */ r_ebp = r_esp;
    /* 0081943b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0081943d: push 0x8f7846 */ { u32 v = 0x8f7846u; r_esp -= 4; W32(r_esp, v); }
    /* 00819442: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00819448: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00819449: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00819450: sub esp, 0x8c */ {  u32 a = r_esp; u32 b = 0x8cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00819456: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00819459: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0081945c: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0081945f: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00819462: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00819465: call 0x81942c */ r_esp -= 4; W32(r_esp, 0x81946au); f_0081942c();
    /* 0081946a: mov dword ptr [ebp - 0x98], 0 */ W32((u32)(r_ebp+0xffffff68u), 0x0u);
    /* 00819474: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00819476: call 0x7a8b68 */ r_esp -= 4; W32(r_esp, 0x81947bu); f_007a8b68();
    /* 0081947b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0081947c: mov dword ptr [ebp - 0x94], eax */ W32((u32)(r_ebp+0xffffff6cu), r_eax);
    /* 00819482: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00819484: je 0x819f1f */ if (fZ) goto L_00819f1f;
L_0081948a:; BB(0x0081948a);
    /* 0081948a: mov dword ptr [ebp - 0x98], 1 */ W32((u32)(r_ebp+0xffffff68u), 0x1u);
    /* 00819494: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0081949b: mov ecx, dword ptr [ebp - 0x94] */ r_ecx = R32((u32)(r_ebp+0xffffff6cu));
    /* 008194a1: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 008194a3: push 0x100000 */ { u32 v = 0x100000u; r_esp -= 4; W32(r_esp, v); }
    /* 008194a8: call 0x7a89dc */ r_esp -= 4; W32(r_esp, 0x8194adu); f_007a89dc();
    /* 008194ad: mov eax, dword ptr [ebp - 0x94] */ r_eax = R32((u32)(r_ebp+0xffffff6cu));
    /* 008194b3: mov dword ptr [ebp - 0x98], 0 */ W32((u32)(r_ebp+0xffffff68u), 0x0u);
L_008194bd:; BB(0x008194bd);
    /* 008194bd: mov dword ptr [0xaab404], eax */ W32((u32)(0xaab404u), r_eax);
    /* 008194c2: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 008194c9: mov dword ptr [ebp - 0x90], 0 */ W32((u32)(r_ebp+0xffffff70u), 0x0u);
    /* 008194d3: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 008194d5: call 0x7a8b68 */ r_esp -= 4; W32(r_esp, 0x8194dau); f_007a8b68();
    /* 008194da: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008194db: mov dword ptr [ebp - 0x94], eax */ W32((u32)(r_ebp+0xffffff6cu), r_eax);
    /* 008194e1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008194e3: je 0x819f18 */ if (fZ) goto L_00819f18;
L_008194e9:; BB(0x008194e9);
    /* 008194e9: mov dword ptr [ebp - 0x90], 1 */ W32((u32)(r_ebp+0xffffff70u), 0x1u);
    /* 008194f3: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 008194fa: mov ecx, dword ptr [ebp - 0x94] */ r_ecx = R32((u32)(r_ebp+0xffffff6cu));
    /* 00819500: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00819502: push 0x37000 */ { u32 v = 0x37000u; r_esp -= 4; W32(r_esp, v); }
    /* 00819507: call 0x7a89dc */ r_esp -= 4; W32(r_esp, 0x81950cu); f_007a89dc();
    /* 0081950c: mov eax, dword ptr [ebp - 0x94] */ r_eax = R32((u32)(r_ebp+0xffffff6cu));
    /* 00819512: mov dword ptr [ebp - 0x90], 0 */ W32((u32)(r_ebp+0xffffff70u), 0x0u);
L_0081951c:; BB(0x0081951c);
    /* 0081951c: mov dword ptr [0xaab400], eax */ W32((u32)(0xaab400u), r_eax);
    /* 00819521: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00819528: mov ecx, dword ptr [0xaab404] */ r_ecx = R32((u32)(0xaab404u));
    /* 0081952e: mov dword ptr [ebp - 0x8c], 0 */ W32((u32)(r_ebp+0xffffff74u), 0x0u);
    /* 00819538: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 0081953a: call 0x7a8a38 */ r_esp -= 4; W32(r_esp, 0x81953fu); f_007a8a38();
    /* 0081953f: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 00819545: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00819547: je 0x819f11 */ if (fZ) goto L_00819f11;
L_0081954d:; BB(0x0081954d);
    /* 0081954d: mov dword ptr [ebp - 0x8c], 1 */ W32((u32)(r_ebp+0xffffff74u), 0x1u);
    /* 00819557: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0081955e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00819561: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 00819567: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00819568: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x81956du); f_008193cc();
    /* 0081956d: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 00819573: mov dword ptr [ebp - 0x8c], 0 */ W32((u32)(r_ebp+0xffffff74u), 0x0u);
L_0081957d:; BB(0x0081957d);
    /* 0081957d: mov dword ptr [0xaca388], eax */ W32((u32)(0xaca388u), r_eax);
    /* 00819582: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00819589: mov ecx, dword ptr [0xaab404] */ r_ecx = R32((u32)(0xaab404u));
    /* 0081958f: mov dword ptr [ebp - 0x84], 0 */ W32((u32)(r_ebp+0xffffff7cu), 0x0u);
    /* 00819599: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 0081959b: call 0x7a8a38 */ r_esp -= 4; W32(r_esp, 0x8195a0u); f_007a8a38();
    /* 008195a0: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 008195a6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008195a8: je 0x819f0a */ if (fZ) goto L_00819f0a;
L_008195ae:; BB(0x008195ae);
    /* 008195ae: mov dword ptr [ebp - 0x84], 1 */ W32((u32)(r_ebp+0xffffff7cu), 0x1u);
    /* 008195b8: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 008195bf: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 008195c2: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 008195c8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008195c9: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x8195ceu); f_008193cc();
    /* 008195ce: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 008195d4: mov dword ptr [ebp - 0x84], 0 */ W32((u32)(r_ebp+0xffffff7cu), 0x0u);
L_008195de:; BB(0x008195de);
    /* 008195de: mov dword ptr [0xaca384], eax */ W32((u32)(0xaca384u), r_eax);
    /* 008195e3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 008195ea: mov ecx, dword ptr [0xaab404] */ r_ecx = R32((u32)(0xaab404u));
    /* 008195f0: mov dword ptr [ebp - 0x80], 0 */ W32((u32)(r_ebp+0xffffff80u), 0x0u);
    /* 008195f7: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 008195f9: call 0x7a8a38 */ r_esp -= 4; W32(r_esp, 0x8195feu); f_007a8a38();
    /* 008195fe: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 00819604: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00819606: je 0x819f03 */ if (fZ) goto L_00819f03;
L_0081960c:; BB(0x0081960c);
    /* 0081960c: mov dword ptr [ebp - 0x80], 1 */ W32((u32)(r_ebp+0xffffff80u), 0x1u);
    /* 00819613: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 0081961a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0081961d: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 00819623: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00819624: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x819629u); f_008193cc();
    /* 00819629: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 0081962f: mov dword ptr [ebp - 0x80], 0 */ W32((u32)(r_ebp+0xffffff80u), 0x0u);
L_00819636:; BB(0x00819636);
    /* 00819636: mov dword ptr [0xaca380], eax */ W32((u32)(0xaca380u), r_eax);
    /* 0081963b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00819642: mov ecx, dword ptr [0xaab404] */ r_ecx = R32((u32)(0xaab404u));
    /* 00819648: mov dword ptr [ebp - 0x7c], 0 */ W32((u32)(r_ebp+0xffffff84u), 0x0u);
    /* 0081964f: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 00819651: call 0x7a8a38 */ r_esp -= 4; W32(r_esp, 0x819656u); f_007a8a38();
    /* 00819656: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 0081965c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0081965e: je 0x819efc */ if (fZ) goto L_00819efc;
L_00819664:; BB(0x00819664);
    /* 00819664: mov dword ptr [ebp - 0x7c], 1 */ W32((u32)(r_ebp+0xffffff84u), 0x1u);
    /* 0081966b: mov dword ptr [ebp - 4], 5 */ W32((u32)(r_ebp+0xfffffffcu), 0x5u);
    /* 00819672: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00819675: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0081967b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0081967c: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x819681u); f_008193cc();
    /* 00819681: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 00819687: mov dword ptr [ebp - 0x7c], 0 */ W32((u32)(r_ebp+0xffffff84u), 0x0u);
L_0081968e:; BB(0x0081968e);
    /* 0081968e: mov dword ptr [0xaca37c], eax */ W32((u32)(0xaca37cu), r_eax);
    /* 00819693: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0081969a: mov ecx, dword ptr [0xaab404] */ r_ecx = R32((u32)(0xaab404u));
    /* 008196a0: mov dword ptr [ebp - 0x78], 0 */ W32((u32)(r_ebp+0xffffff88u), 0x0u);
    /* 008196a7: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 008196a9: call 0x7a8a38 */ r_esp -= 4; W32(r_esp, 0x8196aeu); f_007a8a38();
    /* 008196ae: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 008196b4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008196b6: je 0x819ef5 */ if (fZ) goto L_00819ef5;
L_008196bc:; BB(0x008196bc);
    /* 008196bc: mov dword ptr [ebp - 0x78], 1 */ W32((u32)(r_ebp+0xffffff88u), 0x1u);
    /* 008196c3: mov dword ptr [ebp - 4], 6 */ W32((u32)(r_ebp+0xfffffffcu), 0x6u);
    /* 008196ca: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 008196cd: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 008196d3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008196d4: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x8196d9u); f_008193cc();
    /* 008196d9: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 008196df: mov dword ptr [ebp - 0x78], 0 */ W32((u32)(r_ebp+0xffffff88u), 0x0u);
L_008196e6:; BB(0x008196e6);
    /* 008196e6: mov dword ptr [0xaca378], eax */ W32((u32)(0xaca378u), r_eax);
    /* 008196eb: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 008196f2: mov ecx, dword ptr [0xaab404] */ r_ecx = R32((u32)(0xaab404u));
    /* 008196f8: mov dword ptr [ebp - 0x74], 0 */ W32((u32)(r_ebp+0xffffff8cu), 0x0u);
    /* 008196ff: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 00819701: call 0x7a8a38 */ r_esp -= 4; W32(r_esp, 0x819706u); f_007a8a38();
    /* 00819706: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 0081970c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0081970e: je 0x819eee */ if (fZ) goto L_00819eee;
L_00819714:; BB(0x00819714);
    /* 00819714: mov dword ptr [ebp - 0x74], 1 */ W32((u32)(r_ebp+0xffffff8cu), 0x1u);
    /* 0081971b: mov dword ptr [ebp - 4], 7 */ W32((u32)(r_ebp+0xfffffffcu), 0x7u);
    /* 00819722: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00819725: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0081972b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0081972c: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x819731u); f_008193cc();
    /* 00819731: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 00819737: mov dword ptr [ebp - 0x74], 0 */ W32((u32)(r_ebp+0xffffff8cu), 0x0u);
L_0081973e:; BB(0x0081973e);
    /* 0081973e: mov dword ptr [0xaca370], eax */ W32((u32)(0xaca370u), r_eax);
    /* 00819743: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0081974a: mov ecx, dword ptr [0xaab404] */ r_ecx = R32((u32)(0xaab404u));
    /* 00819750: mov dword ptr [ebp - 0x70], 0 */ W32((u32)(r_ebp+0xffffff90u), 0x0u);
    /* 00819757: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 00819759: call 0x7a8a38 */ r_esp -= 4; W32(r_esp, 0x81975eu); f_007a8a38();
    /* 0081975e: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 00819764: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00819766: je 0x819ee7 */ if (fZ) goto L_00819ee7;
L_0081976c:; BB(0x0081976c);
    /* 0081976c: mov dword ptr [ebp - 0x70], 1 */ W32((u32)(r_ebp+0xffffff90u), 0x1u);
    /* 00819773: mov dword ptr [ebp - 4], 8 */ W32((u32)(r_ebp+0xfffffffcu), 0x8u);
    /* 0081977a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0081977d: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 00819783: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00819784: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x819789u); f_008193cc();
    /* 00819789: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 0081978f: mov dword ptr [ebp - 0x70], 0 */ W32((u32)(r_ebp+0xffffff90u), 0x0u);
L_00819796:; BB(0x00819796);
    /* 00819796: mov dword ptr [0xaca374], eax */ W32((u32)(0xaca374u), r_eax);
    /* 0081979b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 008197a2: mov ecx, dword ptr [0xaab404] */ r_ecx = R32((u32)(0xaab404u));
    /* 008197a8: mov dword ptr [ebp - 0x6c], 0 */ W32((u32)(r_ebp+0xffffff94u), 0x0u);
    /* 008197af: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 008197b1: call 0x7a8a38 */ r_esp -= 4; W32(r_esp, 0x8197b6u); f_007a8a38();
    /* 008197b6: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 008197bc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008197be: je 0x819ee0 */ if (fZ) goto L_00819ee0;
L_008197c4:; BB(0x008197c4);
    /* 008197c4: mov dword ptr [ebp - 0x6c], 1 */ W32((u32)(r_ebp+0xffffff94u), 0x1u);
    /* 008197cb: mov dword ptr [ebp - 4], 9 */ W32((u32)(r_ebp+0xfffffffcu), 0x9u);
    /* 008197d2: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 008197d5: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 008197db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008197dc: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x8197e1u); f_008193cc();
    /* 008197e1: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 008197e7: mov dword ptr [ebp - 0x6c], 0 */ W32((u32)(r_ebp+0xffffff94u), 0x0u);
L_008197ee:; BB(0x008197ee);
    /* 008197ee: mov dword ptr [0xaca368], eax */ W32((u32)(0xaca368u), r_eax);
    /* 008197f3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 008197fa: mov ecx, dword ptr [0xaab404] */ r_ecx = R32((u32)(0xaab404u));
    /* 00819800: mov dword ptr [ebp - 0x68], 0 */ W32((u32)(r_ebp+0xffffff98u), 0x0u);
    /* 00819807: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 00819809: call 0x7a8a38 */ r_esp -= 4; W32(r_esp, 0x81980eu); f_007a8a38();
    /* 0081980e: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 00819814: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00819816: je 0x819ed9 */ if (fZ) goto L_00819ed9;
L_0081981c:; BB(0x0081981c);
    /* 0081981c: mov dword ptr [ebp - 0x68], 1 */ W32((u32)(r_ebp+0xffffff98u), 0x1u);
    /* 00819823: mov dword ptr [ebp - 4], 0xa */ W32((u32)(r_ebp+0xfffffffcu), 0xau);
    /* 0081982a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0081982d: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 00819833: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00819834: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x819839u); f_008193cc();
    /* 00819839: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 0081983f: mov dword ptr [ebp - 0x68], 0 */ W32((u32)(r_ebp+0xffffff98u), 0x0u);
L_00819846:; BB(0x00819846);
    /* 00819846: mov dword ptr [0xaca364], eax */ W32((u32)(0xaca364u), r_eax);
    /* 0081984b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00819852: mov ecx, dword ptr [0xaab404] */ r_ecx = R32((u32)(0xaab404u));
    /* 00819858: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
    /* 0081985f: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 00819861: call 0x7a8a38 */ r_esp -= 4; W32(r_esp, 0x819866u); f_007a8a38();
    /* 00819866: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 0081986c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0081986e: je 0x819ed2 */ if (fZ) goto L_00819ed2;
L_00819874:; BB(0x00819874);
    /* 00819874: mov dword ptr [ebp - 0x64], 1 */ W32((u32)(r_ebp+0xffffff9cu), 0x1u);
    /* 0081987b: mov dword ptr [ebp - 4], 0xb */ W32((u32)(r_ebp+0xfffffffcu), 0xbu);
    /* 00819882: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00819885: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0081988b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0081988c: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x819891u); f_008193cc();
    /* 00819891: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 00819897: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
L_0081989e:; BB(0x0081989e);
    /* 0081989e: mov dword ptr [0xaca360], eax */ W32((u32)(0xaca360u), r_eax);
    /* 008198a3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 008198aa: mov ecx, dword ptr [0xaab404] */ r_ecx = R32((u32)(0xaab404u));
    /* 008198b0: mov dword ptr [ebp - 0x60], 0 */ W32((u32)(r_ebp+0xffffffa0u), 0x0u);
    /* 008198b7: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 008198b9: call 0x7a8a38 */ r_esp -= 4; W32(r_esp, 0x8198beu); f_007a8a38();
    /* 008198be: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 008198c4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008198c6: je 0x819ecb */ if (fZ) goto L_00819ecb;
L_008198cc:; BB(0x008198cc);
    /* 008198cc: mov dword ptr [ebp - 0x60], 1 */ W32((u32)(r_ebp+0xffffffa0u), 0x1u);
    /* 008198d3: mov dword ptr [ebp - 4], 0xc */ W32((u32)(r_ebp+0xfffffffcu), 0xcu);
    /* 008198da: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 008198dd: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 008198e3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008198e4: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x8198e9u); f_008193cc();
    /* 008198e9: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 008198ef: mov dword ptr [ebp - 0x60], 0 */ W32((u32)(r_ebp+0xffffffa0u), 0x0u);
L_008198f6:; BB(0x008198f6);
    /* 008198f6: mov dword ptr [0xaca35c], eax */ W32((u32)(0xaca35cu), r_eax);
    /* 008198fb: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00819902: mov ecx, dword ptr [0xaab404] */ r_ecx = R32((u32)(0xaab404u));
    /* 00819908: mov dword ptr [ebp - 0x5c], 0 */ W32((u32)(r_ebp+0xffffffa4u), 0x0u);
    /* 0081990f: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 00819911: call 0x7a8a38 */ r_esp -= 4; W32(r_esp, 0x819916u); f_007a8a38();
    /* 00819916: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 0081991c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0081991e: je 0x819ec4 */ if (fZ) goto L_00819ec4;
L_00819924:; BB(0x00819924);
    /* 00819924: mov dword ptr [ebp - 0x5c], 1 */ W32((u32)(r_ebp+0xffffffa4u), 0x1u);
    /* 0081992b: mov dword ptr [ebp - 4], 0xd */ W32((u32)(r_ebp+0xfffffffcu), 0xdu);
    /* 00819932: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00819935: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0081993b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0081993c: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x819941u); f_008193cc();
    /* 00819941: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 00819947: mov dword ptr [ebp - 0x5c], 0 */ W32((u32)(r_ebp+0xffffffa4u), 0x0u);
L_0081994e:; BB(0x0081994e);
    /* 0081994e: mov dword ptr [0xaca358], eax */ W32((u32)(0xaca358u), r_eax);
    /* 00819953: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0081995a: mov ecx, dword ptr [0xaab404] */ r_ecx = R32((u32)(0xaab404u));
    /* 00819960: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
    /* 00819967: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 00819969: call 0x7a8a38 */ r_esp -= 4; W32(r_esp, 0x81996eu); f_007a8a38();
    /* 0081996e: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 00819974: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00819976: je 0x819ebd */ if (fZ) goto L_00819ebd;
L_0081997c:; BB(0x0081997c);
    /* 0081997c: mov dword ptr [ebp - 0x58], 1 */ W32((u32)(r_ebp+0xffffffa8u), 0x1u);
    /* 00819983: mov dword ptr [ebp - 4], 0xe */ W32((u32)(r_ebp+0xfffffffcu), 0xeu);
    /* 0081998a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0081998d: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 00819993: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00819994: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x819999u); f_008193cc();
    /* 00819999: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 0081999f: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
L_008199a6:; BB(0x008199a6);
    /* 008199a6: mov dword ptr [0xaca36c], eax */ W32((u32)(0xaca36cu), r_eax);
    /* 008199ab: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 008199b2: mov ecx, dword ptr [0xaab404] */ r_ecx = R32((u32)(0xaab404u));
    /* 008199b8: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
    /* 008199bf: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 008199c1: call 0x7a8a38 */ r_esp -= 4; W32(r_esp, 0x8199c6u); f_007a8a38();
    /* 008199c6: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 008199cc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008199ce: je 0x819eb6 */ if (fZ) goto L_00819eb6;
L_008199d4:; BB(0x008199d4);
    /* 008199d4: mov dword ptr [ebp - 0x54], 1 */ W32((u32)(r_ebp+0xffffffacu), 0x1u);
    /* 008199db: mov dword ptr [ebp - 4], 0xf */ W32((u32)(r_ebp+0xfffffffcu), 0xfu);
    /* 008199e2: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 008199e5: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 008199eb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008199ec: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x8199f1u); f_008193cc();
    /* 008199f1: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 008199f7: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
L_008199fe:; BB(0x008199fe);
    /* 008199fe: mov dword ptr [0xaca354], eax */ W32((u32)(0xaca354u), r_eax);
    /* 00819a03: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00819a0a: mov ecx, dword ptr [0xaab404] */ r_ecx = R32((u32)(0xaab404u));
    /* 00819a10: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
    /* 00819a17: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 00819a19: call 0x7a8a38 */ r_esp -= 4; W32(r_esp, 0x819a1eu); f_007a8a38();
    /* 00819a1e: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 00819a24: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00819a26: je 0x819eaf */ if (fZ) goto L_00819eaf;
L_00819a2c:; BB(0x00819a2c);
    /* 00819a2c: mov dword ptr [ebp - 0x50], 1 */ W32((u32)(r_ebp+0xffffffb0u), 0x1u);
    /* 00819a33: mov dword ptr [ebp - 4], 0x10 */ W32((u32)(r_ebp+0xfffffffcu), 0x10u);
    /* 00819a3a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00819a3d: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 00819a43: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00819a44: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x819a49u); f_008193cc();
    /* 00819a49: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 00819a4f: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
L_00819a56:; BB(0x00819a56);
    /* 00819a56: mov dword ptr [0xaca350], eax */ W32((u32)(0xaca350u), r_eax);
    /* 00819a5b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00819a62: mov ecx, dword ptr [0xaab404] */ r_ecx = R32((u32)(0xaab404u));
    /* 00819a68: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
    /* 00819a6f: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 00819a71: call 0x7a8a38 */ r_esp -= 4; W32(r_esp, 0x819a76u); f_007a8a38();
    /* 00819a76: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 00819a7c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00819a7e: je 0x819ea8 */ if (fZ) goto L_00819ea8;
L_00819a84:; BB(0x00819a84);
    /* 00819a84: mov dword ptr [ebp - 0x4c], 1 */ W32((u32)(r_ebp+0xffffffb4u), 0x1u);
    /* 00819a8b: mov dword ptr [ebp - 4], 0x11 */ W32((u32)(r_ebp+0xfffffffcu), 0x11u);
    /* 00819a92: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00819a95: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 00819a9b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00819a9c: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x819aa1u); f_008193cc();
    /* 00819aa1: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 00819aa7: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
L_00819aae:; BB(0x00819aae);
    /* 00819aae: mov dword ptr [0xaca34c], eax */ W32((u32)(0xaca34cu), r_eax);
    /* 00819ab3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00819aba: mov ecx, dword ptr [0xaab404] */ r_ecx = R32((u32)(0xaab404u));
    /* 00819ac0: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
    /* 00819ac7: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 00819ac9: call 0x7a8a38 */ r_esp -= 4; W32(r_esp, 0x819aceu); f_007a8a38();
    /* 00819ace: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 00819ad4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00819ad6: je 0x819ea1 */ if (fZ) goto L_00819ea1;
L_00819adc:; BB(0x00819adc);
    /* 00819adc: mov dword ptr [ebp - 0x48], 1 */ W32((u32)(r_ebp+0xffffffb8u), 0x1u);
    /* 00819ae3: mov dword ptr [ebp - 4], 0x12 */ W32((u32)(r_ebp+0xfffffffcu), 0x12u);
    /* 00819aea: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00819aed: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 00819af3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00819af4: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x819af9u); f_008193cc();
    /* 00819af9: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 00819aff: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
L_00819b06:; BB(0x00819b06);
    /* 00819b06: mov dword ptr [0xaca348], eax */ W32((u32)(0xaca348u), r_eax);
    /* 00819b0b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00819b12: mov ecx, dword ptr [0xaab404] */ r_ecx = R32((u32)(0xaab404u));
    /* 00819b18: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
    /* 00819b1f: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 00819b21: call 0x7a8a38 */ r_esp -= 4; W32(r_esp, 0x819b26u); f_007a8a38();
    /* 00819b26: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 00819b2c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00819b2e: je 0x819e9a */ if (fZ) goto L_00819e9a;
L_00819b34:; BB(0x00819b34);
    /* 00819b34: mov dword ptr [ebp - 0x44], 1 */ W32((u32)(r_ebp+0xffffffbcu), 0x1u);
    /* 00819b3b: mov dword ptr [ebp - 4], 0x13 */ W32((u32)(r_ebp+0xfffffffcu), 0x13u);
    /* 00819b42: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00819b45: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 00819b4b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00819b4c: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x819b51u); f_008193cc();
    /* 00819b51: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 00819b57: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
L_00819b5e:; BB(0x00819b5e);
    /* 00819b5e: mov dword ptr [0xaca344], eax */ W32((u32)(0xaca344u), r_eax);
    /* 00819b63: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00819b6a: mov ecx, dword ptr [0xaab404] */ r_ecx = R32((u32)(0xaab404u));
    /* 00819b70: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
    /* 00819b77: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 00819b79: call 0x7a8a38 */ r_esp -= 4; W32(r_esp, 0x819b7eu); f_007a8a38();
    /* 00819b7e: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 00819b84: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00819b86: je 0x819e93 */ if (fZ) goto L_00819e93;
L_00819b8c:; BB(0x00819b8c);
    /* 00819b8c: mov dword ptr [ebp - 0x40], 1 */ W32((u32)(r_ebp+0xffffffc0u), 0x1u);
    /* 00819b93: mov dword ptr [ebp - 4], 0x14 */ W32((u32)(r_ebp+0xfffffffcu), 0x14u);
    /* 00819b9a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00819b9d: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 00819ba3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00819ba4: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x819ba9u); f_008193cc();
    /* 00819ba9: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 00819baf: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
L_00819bb6:; BB(0x00819bb6);
    /* 00819bb6: mov dword ptr [0xaca340], eax */ W32((u32)(0xaca340u), r_eax);
    /* 00819bbb: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00819bc2: mov ecx, dword ptr [0xaab404] */ r_ecx = R32((u32)(0xaab404u));
    /* 00819bc8: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 00819bcf: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 00819bd1: call 0x7a8a38 */ r_esp -= 4; W32(r_esp, 0x819bd6u); f_007a8a38();
    /* 00819bd6: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 00819bdc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00819bde: je 0x819e8c */ if (fZ) goto L_00819e8c;
L_00819be4:; BB(0x00819be4);
    /* 00819be4: mov dword ptr [ebp - 0x3c], 1 */ W32((u32)(r_ebp+0xffffffc4u), 0x1u);
    /* 00819beb: mov dword ptr [ebp - 4], 0x15 */ W32((u32)(r_ebp+0xfffffffcu), 0x15u);
    /* 00819bf2: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00819bf5: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 00819bfb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00819bfc: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x819c01u); f_008193cc();
    /* 00819c01: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 00819c07: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_00819c0e:; BB(0x00819c0e);
    /* 00819c0e: mov dword ptr [0xaca33c], eax */ W32((u32)(0xaca33cu), r_eax);
    /* 00819c13: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00819c1a: mov ecx, dword ptr [0xaab404] */ r_ecx = R32((u32)(0xaab404u));
    /* 00819c20: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 00819c27: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 00819c29: call 0x7a8a38 */ r_esp -= 4; W32(r_esp, 0x819c2eu); f_007a8a38();
    /* 00819c2e: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 00819c34: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00819c36: je 0x819e85 */ if (fZ) goto L_00819e85;
L_00819c3c:; BB(0x00819c3c);
    /* 00819c3c: mov dword ptr [ebp - 0x38], 1 */ W32((u32)(r_ebp+0xffffffc8u), 0x1u);
    /* 00819c43: mov dword ptr [ebp - 4], 0x16 */ W32((u32)(r_ebp+0xfffffffcu), 0x16u);
    /* 00819c4a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00819c4d: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 00819c53: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00819c54: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x819c59u); f_008193cc();
    /* 00819c59: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 00819c5f: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_00819c66:; BB(0x00819c66);
    /* 00819c66: mov dword ptr [0xaca338], eax */ W32((u32)(0xaca338u), r_eax);
    /* 00819c6b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00819c72: mov ecx, dword ptr [0xaab404] */ r_ecx = R32((u32)(0xaab404u));
    /* 00819c78: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 00819c7f: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 00819c81: call 0x7a8a38 */ r_esp -= 4; W32(r_esp, 0x819c86u); f_007a8a38();
    /* 00819c86: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 00819c8c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00819c8e: je 0x819e7e */ if (fZ) goto L_00819e7e;
L_00819c94:; BB(0x00819c94);
    /* 00819c94: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 00819c9b: mov dword ptr [ebp - 4], 0x17 */ W32((u32)(r_ebp+0xfffffffcu), 0x17u);
    /* 00819ca2: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00819ca5: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 00819cab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00819cac: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x819cb1u); f_008193cc();
    /* 00819cb1: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 00819cb7: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_00819cbe:; BB(0x00819cbe);
    /* 00819cbe: mov dword ptr [0xaca334], eax */ W32((u32)(0xaca334u), r_eax);
    /* 00819cc3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00819cca: mov ecx, dword ptr [0xaab404] */ r_ecx = R32((u32)(0xaab404u));
    /* 00819cd0: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 00819cd7: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 00819cd9: call 0x7a8a38 */ r_esp -= 4; W32(r_esp, 0x819cdeu); f_007a8a38();
    /* 00819cde: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 00819ce4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00819ce6: je 0x819e77 */ if (fZ) goto L_00819e77;
L_00819cec:; BB(0x00819cec);
    /* 00819cec: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 00819cf3: mov dword ptr [ebp - 4], 0x18 */ W32((u32)(r_ebp+0xfffffffcu), 0x18u);
    /* 00819cfa: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00819cfd: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 00819d03: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00819d04: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x819d09u); f_008193cc();
    /* 00819d09: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 00819d0f: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_00819d16:; BB(0x00819d16);
    /* 00819d16: mov dword ptr [0xaca330], eax */ W32((u32)(0xaca330u), r_eax);
    /* 00819d1b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00819d22: mov ecx, dword ptr [0xaab404] */ r_ecx = R32((u32)(0xaab404u));
    /* 00819d28: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 00819d2f: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 00819d31: call 0x7a8a38 */ r_esp -= 4; W32(r_esp, 0x819d36u); f_007a8a38();
    /* 00819d36: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 00819d3c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00819d3e: je 0x819e70 */ if (fZ) goto L_00819e70;
L_00819d44:; BB(0x00819d44);
    /* 00819d44: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 00819d4b: mov dword ptr [ebp - 4], 0x19 */ W32((u32)(r_ebp+0xfffffffcu), 0x19u);
    /* 00819d52: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00819d55: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 00819d5b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00819d5c: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x819d61u); f_008193cc();
    /* 00819d61: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 00819d67: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_00819d6e:; BB(0x00819d6e);
    /* 00819d6e: mov dword ptr [0xaca32c], eax */ W32((u32)(0xaca32cu), r_eax);
    /* 00819d73: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00819d7a: mov ecx, dword ptr [0xaab404] */ r_ecx = R32((u32)(0xaab404u));
    /* 00819d80: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 00819d87: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 00819d89: call 0x7a8a38 */ r_esp -= 4; W32(r_esp, 0x819d8eu); f_007a8a38();
    /* 00819d8e: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 00819d94: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00819d96: je 0x819e69 */ if (fZ) goto L_00819e69;
L_00819d9c:; BB(0x00819d9c);
    /* 00819d9c: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 00819da3: mov dword ptr [ebp - 4], 0x1a */ W32((u32)(r_ebp+0xfffffffcu), 0x1au);
    /* 00819daa: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00819dad: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 00819db3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00819db4: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x819db9u); f_008193cc();
    /* 00819db9: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 00819dbf: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_00819dc6:; BB(0x00819dc6);
    /* 00819dc6: mov dword ptr [0xaca328], eax */ W32((u32)(0xaca328u), r_eax);
    /* 00819dcb: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00819dd2: mov ecx, dword ptr [0xaab404] */ r_ecx = R32((u32)(0xaab404u));
    /* 00819dd8: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00819ddf: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 00819de1: call 0x7a8a38 */ r_esp -= 4; W32(r_esp, 0x819de6u); f_007a8a38();
    /* 00819de6: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 00819dec: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00819dee: je 0x819e65 */ if (fZ) goto L_00819e65;
L_00819df0:; BB(0x00819df0);
    /* 00819df0: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00819df7: mov dword ptr [ebp - 4], 0x1b */ W32((u32)(r_ebp+0xfffffffcu), 0x1bu);
    /* 00819dfe: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00819e01: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 00819e07: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00819e08: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x819e0du); f_008193cc();
    /* 00819e0d: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 00819e13: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00819e1a:; BB(0x00819e1a);
    /* 00819e1a: mov dword ptr [0xaca324], eax */ W32((u32)(0xaca324u), r_eax);
    /* 00819e1f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00819e26: mov ecx, dword ptr [0xaab404] */ r_ecx = R32((u32)(0xaab404u));
    /* 00819e2c: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 00819e2e: call 0x7a8a38 */ r_esp -= 4; W32(r_esp, 0x819e33u); f_007a8a38();
    /* 00819e33: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 00819e39: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00819e3b: je 0x819e61 */ if (fZ) goto L_00819e61;
L_00819e3d:; BB(0x00819e3d);
    /* 00819e3d: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00819e40: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00819e41: mov ecx, eax */ r_ecx = r_eax;
    /* 00819e43: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x819e48u); f_008193cc();
    /* 00819e48: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
L_00819e4e:; BB(0x00819e4e);
    /* 00819e4e: mov dword ptr [0xaca320], eax */ W32((u32)(0xaca320u), r_eax);
    /* 00819e53: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00819e56: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00819e5d: mov esp, ebp */ r_esp = r_ebp;
    /* 00819e5f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00819e60: ret  */ FN_RET(0x00819438); r_esp += 4; return;
L_00819e61:; BB(0x00819e61);
    /* 00819e61: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00819e63: jmp 0x819e4e */ goto L_00819e4e;
L_00819e65:; BB(0x00819e65);
    /* 00819e65: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00819e67: jmp 0x819e1a */ goto L_00819e1a;
L_00819e69:; BB(0x00819e69);
    /* 00819e69: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00819e6b: jmp 0x819dc6 */ goto L_00819dc6;
L_00819e70:; BB(0x00819e70);
    /* 00819e70: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00819e72: jmp 0x819d6e */ goto L_00819d6e;
L_00819e77:; BB(0x00819e77);
    /* 00819e77: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00819e79: jmp 0x819d16 */ goto L_00819d16;
L_00819e7e:; BB(0x00819e7e);
    /* 00819e7e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00819e80: jmp 0x819cbe */ goto L_00819cbe;
L_00819e85:; BB(0x00819e85);
    /* 00819e85: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00819e87: jmp 0x819c66 */ goto L_00819c66;
L_00819e8c:; BB(0x00819e8c);
    /* 00819e8c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00819e8e: jmp 0x819c0e */ goto L_00819c0e;
L_00819e93:; BB(0x00819e93);
    /* 00819e93: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00819e95: jmp 0x819bb6 */ goto L_00819bb6;
L_00819e9a:; BB(0x00819e9a);
    /* 00819e9a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00819e9c: jmp 0x819b5e */ goto L_00819b5e;
L_00819ea1:; BB(0x00819ea1);
    /* 00819ea1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00819ea3: jmp 0x819b06 */ goto L_00819b06;
L_00819ea8:; BB(0x00819ea8);
    /* 00819ea8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00819eaa: jmp 0x819aae */ goto L_00819aae;
L_00819eaf:; BB(0x00819eaf);
    /* 00819eaf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00819eb1: jmp 0x819a56 */ goto L_00819a56;
L_00819eb6:; BB(0x00819eb6);
    /* 00819eb6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00819eb8: jmp 0x8199fe */ goto L_008199fe;
L_00819ebd:; BB(0x00819ebd);
    /* 00819ebd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00819ebf: jmp 0x8199a6 */ goto L_008199a6;
L_00819ec4:; BB(0x00819ec4);
    /* 00819ec4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00819ec6: jmp 0x81994e */ goto L_0081994e;
L_00819ecb:; BB(0x00819ecb);
    /* 00819ecb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00819ecd: jmp 0x8198f6 */ goto L_008198f6;
L_00819ed2:; BB(0x00819ed2);
    /* 00819ed2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00819ed4: jmp 0x81989e */ goto L_0081989e;
L_00819ed9:; BB(0x00819ed9);
    /* 00819ed9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00819edb: jmp 0x819846 */ goto L_00819846;
L_00819ee0:; BB(0x00819ee0);
    /* 00819ee0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00819ee2: jmp 0x8197ee */ goto L_008197ee;
L_00819ee7:; BB(0x00819ee7);
    /* 00819ee7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00819ee9: jmp 0x819796 */ goto L_00819796;
L_00819eee:; BB(0x00819eee);
    /* 00819eee: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00819ef0: jmp 0x81973e */ goto L_0081973e;
L_00819ef5:; BB(0x00819ef5);
    /* 00819ef5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00819ef7: jmp 0x8196e6 */ goto L_008196e6;
L_00819efc:; BB(0x00819efc);
    /* 00819efc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00819efe: jmp 0x81968e */ goto L_0081968e;
L_00819f03:; BB(0x00819f03);
    /* 00819f03: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00819f05: jmp 0x819636 */ goto L_00819636;
L_00819f0a:; BB(0x00819f0a);
    /* 00819f0a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00819f0c: jmp 0x8195de */ goto L_008195de;
L_00819f11:; BB(0x00819f11);
    /* 00819f11: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00819f13: jmp 0x81957d */ goto L_0081957d;
L_00819f18:; BB(0x00819f18);
    /* 00819f18: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00819f1a: jmp 0x81951c */ goto L_0081951c;
L_00819f1f:; BB(0x00819f1f);
    /* 00819f1f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00819f21: jmp 0x8194bd */ goto L_008194bd;
}

void f_00819f28(void) /* sub_819F28 */
{
    FN_ENTER(0x00819f28);
    /* 00819f28: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00819f29: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00819f2b: mov ebx, eax */ r_ebx = r_eax;
L_00819f2d:; BB(0x00819f2d);
    /* 00819f2d: push dword ptr [ebx + 0xa163a0] */ { u32 v = R32((u32)(r_ebx+0xa163a0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00819f33: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00819f37: call 0x85aa95 */ r_esp -= 4; W32(r_esp, 0x819f3cu); f_0085aa95();
    /* 00819f3c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00819f3f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00819f41: jne 0x819f55 */ if (!fZ) goto L_00819f55;
L_00819f43:; BB(0x00819f43);
    /* 00819f43: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00819f46: cmp ebx, 0x168 */ {  u32 a = r_ebx; u32 b = 0x168u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00819f4c: jl 0x819f2d */ if ((fS!=fO)) goto L_00819f2d;
L_00819f4e:; BB(0x00819f4e);
    /* 00819f4e: mov eax, 1 */ r_eax = 0x1u;
    /* 00819f53: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00819f54: ret  */ FN_RET(0x00819f28); r_esp += 4; return;
L_00819f55:; BB(0x00819f55);
    /* 00819f55: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00819f57: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00819f58: ret  */ FN_RET(0x00819f28); r_esp += 4; return;
}

void f_00819f5c(void) /* sub_819F5C */
{
    FN_ENTER(0x00819f5c);
    /* 00819f5c: mov dword ptr [0xaca38c], 0x3f800000 */ W32((u32)(0xaca38cu), 0x3f800000u);
    /* 00819f66: mov dword ptr [0xaca390], 0x41000000 */ W32((u32)(0xaca390u), 0x41000000u);
    /* 00819f70: mov dword ptr [0xaca394], 0x3fc00000 */ W32((u32)(0xaca394u), 0x3fc00000u);
    /* 00819f7a: ret  */ FN_RET(0x00819f5c); r_esp += 4; return;
}

void f_00819f7c(void) /* sub_819F7C */
{
    FN_ENTER(0x00819f7c);
    /* 00819f7c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00819f7d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00819f7e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00819f7f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00819f80: sub esp, 0xcc */ {  u32 a = r_esp; u32 b = 0xccu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00819f86: mov esi, dword ptr [esp + 0xe0] */ r_esi = R32((u32)(r_esp+0xe0u));
    /* 00819f8d: mov edx, dword ptr [esp + 0xe4] */ r_edx = R32((u32)(r_esp+0xe4u));
    /* 00819f94: fld dword ptr [esp + 0xe8] */ FPUSH(R_F32((u32)(r_esp+0xe8u)));
    /* 00819f9b: mov eax, dword ptr [esp + 0xec] */ r_eax = R32((u32)(r_esp+0xecu));
    /* 00819fa2: mov edi, dword ptr [esp + 0xf0] */ r_edi = R32((u32)(r_esp+0xf0u));
    /* 00819fa9: mov dword ptr [esp + 0x40], eax */ W32((u32)(r_esp+0x40u), r_eax);
    /* 00819fad: fchs  */ ST(0) = -ST(0);
    /* 00819faf: fdivr dword ptr [0x989cf0] */ ST(0) = R_F32((u32)(0x989cf0u)) / ST(0);
    /* 00819fb5: fst dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0));
    /* 00819fb9: fst dword ptr [esp + 0x4c] */ W_F32((u32)(r_esp+0x4cu), ST(0));
    /* 00819fbd: fst dword ptr [esp + 0x64] */ W_F32((u32)(r_esp+0x64u), ST(0));
    /* 00819fc1: fstp dword ptr [esp + 0x7c] */ W_F32((u32)(r_esp+0x7cu), ST(0)); FPOP();
    /* 00819fc5: mov dword ptr [esp + 0x58], eax */ W32((u32)(r_esp+0x58u), r_eax);
    /* 00819fc9: mov dword ptr [esp + 0x70], eax */ W32((u32)(r_esp+0x70u), r_eax);
    /* 00819fcd: mov dword ptr [esp + 0x88], eax */ W32((u32)(r_esp+0x88u), r_eax);
    /* 00819fd4: mov ebx, dword ptr [esi + 0x1c] */ r_ebx = R32((u32)(r_esi+0x1cu));
    /* 00819fd7: fld dword ptr [esi + 0xc] */ FPUSH(R_F32((u32)(r_esi+0xcu)));
    /* 00819fda: fld dword ptr [esi + 0x10] */ FPUSH(R_F32((u32)(r_esi+0x10u)));
    /* 00819fdd: lea ebp, [edx + edx*4] */ r_ebp = (u32)(r_edx+r_edx*4);
    /* 00819fe0: movsx ecx, word ptr [ebx + ebp*4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebx+r_ebp*4));
    /* 00819fe4: movsx eax, word ptr [ebx + ebp*4 + 2] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+r_ebp*4+0x2u));
    /* 00819fe9: test edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00819fef: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 00819ff2: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 00819ff5: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00819ff9: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00819ffd: movsx eax, word ptr [ebx + ebp*4 + 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+r_ebp*4+0x4u));
    /* 0081a002: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0081a006: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0081a00a: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0081a00c: movsx eax, word ptr [ebx + ebp*4 + 6] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+r_ebp*4+0x6u));
    /* 0081a011: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0081a013: fsubp st(3) */ ST(3) = ST(3) - ST(0); FPOP();
    /* 0081a015: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0081a017: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 0081a019: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 0081a01d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0081a01f: fchs  */ ST(0) = -ST(0);
    /* 0081a021: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 0081a023: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0081a025: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 0081a029: fld dword ptr [esi] */ FPUSH(R_F32((u32)(r_esi)));
    /* 0081a02b: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 0081a02f: fld dword ptr [esi + 4] */ FPUSH(R_F32((u32)(r_esi+0x4u)));
    /* 0081a032: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 0081a036: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0081a03a: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0081a03e: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0081a040: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0081a042: fsubp st(3) */ ST(3) = ST(3) - ST(0); FPOP();
    /* 0081a044: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0081a046: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 0081a048: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0081a04a: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 0081a04e: fchs  */ ST(0) = -ST(0);
    /* 0081a050: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0081a052: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 0081a056: jne 0x81a0a1 */ if (!fZ) goto L_0081a0a1;
L_0081a058:; BB(0x0081a058);
    /* 0081a058: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 0081a05c: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 0081a060: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0081a062: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 0081a066: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 0081a06a: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 0081a06e: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 0081a072: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0081a074: fst dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0));
    /* 0081a078: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
    /* 0081a07c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0081a07e: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0081a080: fst dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0));
    /* 0081a084: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 0081a088: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0081a08a: fst dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0));
    /* 0081a08e: fstp dword ptr [esp + 0x78] */ W_F32((u32)(r_esp+0x78u), ST(0)); FPOP();
    /* 0081a092: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0081a094: fst dword ptr [esp + 0x5c] */ W_F32((u32)(r_esp+0x5cu), ST(0));
    /* 0081a098: fstp dword ptr [esp + 0x74] */ W_F32((u32)(r_esp+0x74u), ST(0)); FPOP();
    /* 0081a09c: jmp 0x81a14b */ goto L_0081a14b;
L_0081a0a1:; BB(0x0081a0a1);
    /* 0081a0a1: mov ecx, dword ptr [esi + 0x14] */ r_ecx = R32((u32)(r_esi+0x14u));
    /* 0081a0a4: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x81a0a9u); f_0082dcbc();
    /* 0081a0a9: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 0081a0ad: mov ecx, dword ptr [esi + 0x14] */ r_ecx = R32((u32)(r_esi+0x14u));
    /* 0081a0b0: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x81a0b5u); f_0082ddd8();
    /* 0081a0b5: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0081a0b7: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 0081a0bb: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 0081a0bf: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 0081a0c3: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 0081a0c5: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 0081a0c7: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 0081a0cb: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 0081a0cf: fmul st(5), st(0) */ ST(5) = ST(5) * ST(0);
    /* 0081a0d1: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0081a0d3: fst dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0));
    /* 0081a0d7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0081a0d9: fadd st(3), st(0) */ ST(3) = ST(3) + ST(0);
    /* 0081a0db: fld st(3) */ { long double v = ST(3); FPUSH(v); }
    /* 0081a0dd: fadd st(6) */ ST(0) = ST(0) + ST(6);
    /* 0081a0df: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 0081a0e3: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0081a0e5: fchs  */ ST(0) = -ST(0);
    /* 0081a0e7: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 0081a0e9: fadd dword ptr [esp + 0x14] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x14u));
    /* 0081a0ed: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0081a0ef: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0081a0f1: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 0081a0f5: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0081a0f7: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0081a0fb: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 0081a0ff: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 0081a101: fmul st(7) */ ST(0) = ST(0) * ST(7);
    /* 0081a103: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0081a105: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 0081a107: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0081a109: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 0081a10d: fmul st(7), st(0) */ ST(7) = ST(7) * ST(0);
    /* 0081a10f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0081a111: fstp dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 0081a115: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0081a117: fadd st(5), st(0) */ ST(5) = ST(5) + ST(0);
    /* 0081a119: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 0081a11d: fxch st(6) */ { long double t = ST(0); ST(0) = ST(6); ST(6) = t; }
    /* 0081a11f: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
    /* 0081a123: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0081a125: fadd st(6) */ ST(0) = ST(0) + ST(6);
    /* 0081a127: fstp dword ptr [esp + 0x5c] */ W_F32((u32)(r_esp+0x5cu), ST(0)); FPOP();
    /* 0081a12b: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0081a12d: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0081a12f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0081a131: fstp dword ptr [esp + 0x74] */ W_F32((u32)(r_esp+0x74u), ST(0)); FPOP();
    /* 0081a135: fchs  */ ST(0) = -ST(0);
    /* 0081a137: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0081a139: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0081a13b: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 0081a13f: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0081a141: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 0081a145: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0081a147: fstp dword ptr [esp + 0x78] */ W_F32((u32)(r_esp+0x78u), ST(0)); FPOP();
L_0081a14b:; BB(0x0081a14b);
    /* 0081a14b: mov esi, dword ptr [esp + 0x30] */ r_esi = R32((u32)(r_esp+0x30u));
    /* 0081a14f: fld dword ptr [esp + 0x44] */ FPUSH(R_F32((u32)(r_esp+0x44u)));
    /* 0081a153: fsub dword ptr [esp + 0x2c] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x2cu));
    /* 0081a157: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
    /* 0081a15b: fsub dword ptr [esp + 0x30] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x30u));
    /* 0081a15f: fld dword ptr [esp + 0x5c] */ FPUSH(R_F32((u32)(r_esp+0x5cu)));
    /* 0081a163: fsub dword ptr [esp + 0x2c] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x2cu));
    /* 0081a167: movsx eax, word ptr [ebx + ebp*4 + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+r_ebp*4+0x8u));
    /* 0081a16c: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 0081a170: fsub dword ptr [esp + 0x30] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x30u));
    /* 0081a174: movsx edx, word ptr [ebx + ebp*4 + 0xa] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+r_ebp*4+0xau));
    /* 0081a179: movsx ecx, word ptr [ebx + ebp*4 + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebx+r_ebp*4+0xcu));
    /* 0081a17e: movsx ebx, word ptr [ebx + ebp*4 + 0xe] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_ebx+r_ebp*4+0xeu));
    /* 0081a183: mov ebp, dword ptr [esp + 0x2c] */ r_ebp = R32((u32)(r_esp+0x2cu));
    /* 0081a187: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0081a189: fstp dword ptr [esp + 0x98] */ W_F32((u32)(r_esp+0x98u), ST(0)); FPOP();
    /* 0081a190: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0081a192: fstp dword ptr [esp + 0x9c] */ W_F32((u32)(r_esp+0x9cu), ST(0)); FPOP();
    /* 0081a199: fstp dword ptr [esp + 0xa0] */ W_F32((u32)(r_esp+0xa0u), ST(0)); FPOP();
    /* 0081a1a0: fstp dword ptr [esp + 0xa4] */ W_F32((u32)(r_esp+0xa4u), ST(0)); FPOP();
    /* 0081a1a7: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0081a1ab: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0081a1af: fdiv dword ptr [0x989cec] */ ST(0) = ST(0) / R_F32((u32)(0x989cecu));
    /* 0081a1b5: mov eax, dword ptr [esp + 0xe8] */ r_eax = R32((u32)(r_esp+0xe8u));
    /* 0081a1bc: fst dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0));
    /* 0081a1c0: fst dword ptr [esp + 0x50] */ W_F32((u32)(r_esp+0x50u), ST(0));
    /* 0081a1c4: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0081a1c6: fsub st(0) */ ST(0) = ST(0) - ST(0);
    /* 0081a1c8: fstp dword ptr [esp + 0xb4] */ W_F32((u32)(r_esp+0xb4u), ST(0)); FPOP();
    /* 0081a1cf: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0081a1d3: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0081a1d7: fdiv dword ptr [0x989cec] */ ST(0) = ST(0) / R_F32((u32)(0x989cecu));
    /* 0081a1dd: fst dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0));
    /* 0081a1e1: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 0081a1e5: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0081a1e9: fdiv dword ptr [0x989cec] */ ST(0) = ST(0) / R_F32((u32)(0x989cecu));
    /* 0081a1ef: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0081a1f1: fst dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0));
    /* 0081a1f5: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0081a1f7: fst dword ptr [esp + 0x68] */ W_F32((u32)(r_esp+0x68u), ST(0));
    /* 0081a1fb: fst dword ptr [esp + 0x80] */ W_F32((u32)(r_esp+0x80u), ST(0));
    /* 0081a202: fsubrp st(2) */ ST(2) = ST(0) - ST(2); FPOP();
    /* 0081a204: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0081a206: fstp dword ptr [esp + 0xbc] */ W_F32((u32)(r_esp+0xbcu), ST(0)); FPOP();
    /* 0081a20d: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 0081a211: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0081a215: fdiv dword ptr [0x989cec] */ ST(0) = ST(0) / R_F32((u32)(0x989cecu));
    /* 0081a21b: fst dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0));
    /* 0081a21f: mov dword ptr [esp + 0x8c], ebp */ W32((u32)(r_esp+0x8cu), r_ebp);
    /* 0081a226: fst dword ptr [esp + 0x84] */ W_F32((u32)(r_esp+0x84u), ST(0));
    /* 0081a22d: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 0081a22f: fstp dword ptr [esp + 0xb8] */ W_F32((u32)(r_esp+0xb8u), ST(0)); FPOP();
    /* 0081a236: fsub st(0) */ ST(0) = ST(0) - ST(0);
    /* 0081a238: fstp dword ptr [esp + 0xc0] */ W_F32((u32)(r_esp+0xc0u), ST(0)); FPOP();
    /* 0081a23f: mov dword ptr [esp + 0x90], esi */ W32((u32)(r_esp+0x90u), r_esi);
    /* 0081a246: mov dword ptr [esp + 0x94], eax */ W32((u32)(r_esp+0x94u), r_eax);
    /* 0081a24d: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 0081a251: test edi, 0x20 */ {  u32 a = r_edi; u32 b = 0x20u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0081a257: mov dword ptr [esp + 0xac], eax */ W32((u32)(r_esp+0xacu), r_eax);
    /* 0081a25e: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 0081a262: mov dword ptr [esp + 0xb0], eax */ W32((u32)(r_esp+0xb0u), r_eax);
    /* 0081a269: je 0x81a277 */ if (fZ) goto L_0081a277;
L_0081a26b:; BB(0x0081a26b);
    /* 0081a26b: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0081a270: call 0x82bb30 */ r_esp -= 4; W32(r_esp, 0x81a275u); f_0082bb30();
    /* 0081a275: jmp 0x81a27e */ goto L_0081a27e;
L_0081a277:; BB(0x0081a277);
    /* 0081a277: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0081a279: call 0x82bb30 */ r_esp -= 4; W32(r_esp, 0x81a27eu); f_0082bb30();
L_0081a27e:; BB(0x0081a27e);
    /* 0081a27e: mov ecx, dword ptr [esp + 0xe4] */ r_ecx = R32((u32)(r_esp+0xe4u));
    /* 0081a285: mov edx, dword ptr [esp + 0xec] */ r_edx = R32((u32)(r_esp+0xecu));
    /* 0081a28c: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x81a291u); f_0082bb60();
    /* 0081a291: lea ecx, [esp + 0x8c] */ r_ecx = (u32)(r_esp+0x8cu);
    /* 0081a298: call 0x82bb74 */ r_esp -= 4; W32(r_esp, 0x81a29du); f_0082bb74();
    /* 0081a29d: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x81a2a2u); f_004ac444();
    /* 0081a2a2: add esp, 0xcc */ {  u32 a = r_esp; u32 b = 0xccu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0081a2a8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0081a2a9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0081a2aa: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0081a2ab: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0081a2ac: ret  */ FN_RET(0x00819f7c); r_esp += 4; return;
}

