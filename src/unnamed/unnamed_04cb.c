#include "protos.h"

void f_004cb0b4(void)
{
    FN_ENTER(0x004cb0b4);
    /* 004cb0b4: add esp, 0xa8 */ {  u32 a = r_esp; u32 b = 0xa8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004cb0ba: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004cb0bb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004cb0bc: ret 4 */ FN_RET(0x004cb0b4); r_esp += 8; return;
}

void f_004cb0f4(void) /* sub_4CB0F4 */
{
    FN_ENTER(0x004cb0f4);
    /* 004cb0f4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004cb0f5: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004cb0f8: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004cb0fa: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004cb0fc: mov eax, dword ptr [0x9ac494] */ r_eax = R32((u32)(0x9ac494u));
    /* 004cb101: mov edx, dword ptr [0x9ac498] */ r_edx = R32((u32)(0x9ac498u));
    /* 004cb107: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 004cb10a: mov eax, dword ptr [0x9ac49c] */ r_eax = R32((u32)(0x9ac49cu));
    /* 004cb10f: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 004cb113: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004cb117: mov eax, dword ptr [0x9ac4a0] */ r_eax = R32((u32)(0x9ac4a0u));
    /* 004cb11c: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 004cb120: mov eax, dword ptr [0x9ac4a4] */ r_eax = R32((u32)(0x9ac4a4u));
    /* 004cb125: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 004cb129: mov eax, dword ptr [0xa48500] */ r_eax = R32((u32)(0xa48500u));
    /* 004cb12e: mov eax, dword ptr [eax + 0xc] */ r_eax = R32((u32)(r_eax+0xcu));
    /* 004cb131: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004cb135: call 0x4cb154 */ r_esp -= 4; W32(r_esp, 0x4cb13au); f_004cb154();
    /* 004cb13a: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 004cb13d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004cb13e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004cb140: call 0x4c36d0 */ r_esp -= 4; W32(r_esp, 0x4cb145u); f_004c36d0();
    /* 004cb145: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004cb147: call 0x4c4268 */ r_esp -= 4; W32(r_esp, 0x4cb14cu); f_004c4268();
    /* 004cb14c: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004cb14f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004cb150: ret  */ FN_RET(0x004cb0f4); r_esp += 4; return;
}

void f_004cb154(void) /* sub_4CB154 */
{
    FN_ENTER(0x004cb154);
    /* 004cb154: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004cb155: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004cb156: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004cb158: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 004cb15a: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x4cb15fu); f_0077a684();
    /* 004cb15f: mov ebx, eax */ r_ebx = r_eax;
    /* 004cb161: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 004cb163: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x4cb168u); f_0077a6b4();
    /* 004cb168: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004cb16b: mov edx, dword ptr [0x9ac4b0] */ r_edx = R32((u32)(0x9ac4b0u));
    /* 004cb171: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004cb172: push dword ptr [edx*4 + 0xa48510] */ { u32 v = R32((u32)(r_edx*4+0xa48510u)); r_esp -= 4; W32(r_esp, v); }
    /* 004cb179: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004cb17a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004cb17c: call 0x520c98 */ r_esp -= 4; W32(r_esp, 0x4cb181u); f_00520c98();
    /* 004cb181: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004cb182: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004cb183: ret  */ FN_RET(0x004cb154); r_esp += 4; return;
}

void f_004cb184(void) /* sub_4CB184 */
{
    FN_ENTER(0x004cb184);
    /* 004cb184: mov eax, dword ptr [ecx + 0x3c8] */ r_eax = R32((u32)(r_ecx+0x3c8u));
    /* 004cb18a: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004cb18d: mov dword ptr [ecx + 0x3c8], eax */ W32((u32)(r_ecx+0x3c8u), r_eax);
    /* 004cb193: mov dword ptr [ecx + 0x3c], 0 */ W32((u32)(r_ecx+0x3cu), 0x0u);
    /* 004cb19a: ret  */ FN_RET(0x004cb184); r_esp += 4; return;
}

void f_004cb19c(void) /* sub_4CB19C */
{
    FN_ENTER(0x004cb19c);
    /* 004cb19c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004cb19d: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004cb1a0: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004cb1a2: lea edx, [ebp + 0x86c] */ r_edx = (u32)(r_ebp+0x86cu);
    /* 004cb1a8: mov eax, dword ptr [esp + 0x48] */ r_eax = R32((u32)(r_esp+0x48u));
    /* 004cb1ac: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004cb1af: ja 0x4cb393 */ if ((!fC&&!fZ)) goto L_004cb393;
L_004cb1b5:; BB(0x004cb1b5);
    /* 004cb1b5: mov eax, dword ptr [eax*4 + 0x907e7c] */ r_eax = R32((u32)(r_eax*4+0x907e7cu));
    /* 004cb1bc: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_004cb393:; BB(0x004cb393);
    /* 004cb393: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004cb396: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004cb397: ret 4 */ FN_RET(0x004cb19c); r_esp += 8; return;
}

void f_004cb1be(void)
{
    FN_ENTER(0x004cb1be);
    /* 004cb1be: call 0x4ce970 */ r_esp -= 4; W32(r_esp, 0x4cb1c3u); f_004ce970();
    /* 004cb1c3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004cb1c5: je 0x4cb393 */ if (fZ) goto L_004cb393;
L_004cb1cb:; BB(0x004cb1cb);
    /* 004cb1cb: mov eax, dword ptr [ebp + 0x3c8] */ r_eax = R32((u32)(r_ebp+0x3c8u));
    /* 004cb1d1: test al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004cb1d3: je 0x4cb1e4 */ if (fZ) goto L_004cb1e4;
L_004cb1d5:; BB(0x004cb1d5);
    /* 004cb1d5: mov eax, dword ptr [ebp + 0x67c] */ r_eax = R32((u32)(r_ebp+0x67cu));
    /* 004cb1db: mov ecx, eax */ r_ecx = r_eax;
    /* 004cb1dd: mov edx, 0x9080e0 */ r_edx = 0x9080e0u;
    /* 004cb1e2: jmp 0x4cb200 */ goto L_004cb200;
L_004cb1e4:; BB(0x004cb1e4);
    /* 004cb1e4: mov eax, dword ptr [ebp + 0x67c] */ r_eax = R32((u32)(r_ebp+0x67cu));
    /* 004cb1ea: cmp eax, 0x32 */ {  u32 a = r_eax; u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004cb1ed: jge 0x4cb1f8 */ if ((fS==fO)) goto L_004cb1f8;
L_004cb1ef:; BB(0x004cb1ef);
    /* 004cb1ef: mov ecx, eax */ r_ecx = r_eax;
    /* 004cb1f1: mov edx, 0x9088c0 */ r_edx = 0x9088c0u;
    /* 004cb1f6: jmp 0x4cb200 */ goto L_004cb200;
L_004cb1f8:; BB(0x004cb1f8);
    /* 004cb1f8: lea ecx, [eax - 0x32] */ r_ecx = (u32)(r_eax+0xffffffceu);
    /* 004cb1fb: mov edx, 0x908160 */ r_edx = 0x908160u;
L_004cb200:; BB(0x004cb200);
    /* 004cb200: mov ecx, dword ptr [edx + ecx*4] */ r_ecx = R32((u32)(r_edx+r_ecx*4));
    /* 004cb203: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004cb206: cmp ecx, 0x21 */ {  u32 a = r_ecx; u32 b = 0x21u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004cb209: jne 0x4cb39a */ if (!fZ) goto L_004cb39a;
L_004cb20f:; BB(0x004cb20f);
    /* 004cb20f: mov dword ptr [ebp + 0x67c], 0 */ W32((u32)(r_ebp+0x67cu), 0x0u);
    /* 004cb219: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004cb21b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004cb21d: jmp 0x4cb200 */ goto L_004cb200;
L_004cb393:; BB(0x004cb393);
    /* 004cb393: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004cb396: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004cb397: ret 4 */ FN_RET(0x004cb1be); r_esp += 8; return;
L_004cb39a:; BB(0x004cb39a);
    /* 004cb39a: cmp ecx, 0x22 */ {  u32 a = r_ecx; u32 b = 0x22u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004cb39d: je 0x4cb3b4 */ if (fZ) goto L_004cb3b4;
L_004cb39f:; BB(0x004cb39f);
    /* 004cb39f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004cb3a0: mov dword ptr [ebp + 0x67c], eax */ W32((u32)(r_ebp+0x67cu), r_eax);
    /* 004cb3a6: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004cb3a8: call 0x4c3074 */ r_esp -= 4; W32(r_esp, 0x4cb3adu); f_004c3074();
    /* 004cb3ad: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004cb3b0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004cb3b1: ret 4 */ FN_RET(0x004cb1be); r_esp += 8; return;
L_004cb3b4:; BB(0x004cb3b4);
    /* 004cb3b4: mov dword ptr [ebp + 0x67c], 0x32 */ W32((u32)(r_ebp+0x67cu), 0x32u);
    /* 004cb3be: mov eax, 0x32 */ r_eax = 0x32u;
    /* 004cb3c3: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004cb3c5: jmp 0x4cb200 */ goto L_004cb200;
}

void f_004cb21f(void)
{
    FN_ENTER(0x004cb21f);
    /* 004cb21f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004cb220: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004cb222: call 0x4c7644 */ r_esp -= 4; W32(r_esp, 0x4cb227u); f_004c7644();
    /* 004cb227: jmp 0x4cb393 */ goto L_004cb393;
L_004cb393:; BB(0x004cb393);
    /* 004cb393: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004cb396: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004cb397: ret 4 */ FN_RET(0x004cb21f); r_esp += 8; return;
}

void f_004cb22c(void)
{
    FN_ENTER(0x004cb22c);
    /* 004cb22c: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4cb231u); f_008587a5();
    /* 004cb231: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 004cb235: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 004cb239: fdiv dword ptr [0x908454] */ ST(0) = ST(0) / R_F32((u32)(0x908454u));
    /* 004cb23f: fmul dword ptr [0x908450] */ ST(0) = ST(0) * R_F32((u32)(0x908450u));
    /* 004cb245: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004cb247: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 004cb24b: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 004cb250: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004cb255: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 004cb259: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 004cb25d: fistp qword ptr [esp + 0x30] */ W64((u32)(r_esp+0x30u), (u64)fx_int64(ST(0))); FPOP();
    /* 004cb261: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 004cb265: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 004cb269: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004cb26a: call 0x4c7670 */ r_esp -= 4; W32(r_esp, 0x4cb26fu); f_004c7670();
    /* 004cb26f: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004cb272: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004cb273: ret 4 */ FN_RET(0x004cb22c); r_esp += 8; return;
}

void f_004cb276(void)
{
    FN_ENTER(0x004cb276);
    /* 004cb276: mov eax, dword ptr [0xa48500] */ r_eax = R32((u32)(0xa48500u));
    /* 004cb27b: push dword ptr [ebp + 0x86c] */ { u32 v = R32((u32)(r_ebp+0x86cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004cb281: push dword ptr [eax + 0x24] */ { u32 v = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 004cb284: push dword ptr [eax + 0x28] */ { u32 v = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 004cb287: call 0x4cea04 */ r_esp -= 4; W32(r_esp, 0x4cb28cu); f_004cea04();
    /* 004cb28c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004cb28f: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 004cb292: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004cb294: call dword ptr [eax + 0x178] */ { u32 t = R32((u32)(r_eax+0x178u)); r_esp -= 4; W32(r_esp, 0x4cb29au); call_ind(t); }
    /* 004cb29a: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 004cb29d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004cb29f: call dword ptr [eax + 0x17c] */ { u32 t = R32((u32)(r_eax+0x17cu)); r_esp -= 4; W32(r_esp, 0x4cb2a5u); call_ind(t); }
    /* 004cb2a5: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004cb2a8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004cb2a9: ret 4 */ FN_RET(0x004cb276); r_esp += 8; return;
}

void f_004cb2ac(void)
{
    FN_ENTER(0x004cb2ac);
    /* 004cb2ac: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 004cb2af: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004cb2b1: call dword ptr [eax + 0x188] */ { u32 t = R32((u32)(r_eax+0x188u)); r_esp -= 4; W32(r_esp, 0x4cb2b7u); call_ind(t); }
    /* 004cb2b7: mov dword ptr [ebp + 0x3ec], 2 */ W32((u32)(r_ebp+0x3ecu), 0x2u);
    /* 004cb2c1: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004cb2c3: call 0x4c473c */ r_esp -= 4; W32(r_esp, 0x4cb2c8u); f_004c473c();
    /* 004cb2c8: mov eax, dword ptr [ebp + 0x3c8] */ r_eax = R32((u32)(r_ebp+0x3c8u));
    /* 004cb2ce: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 004cb2d1: or eax, 0x30 */ {  u32 a = r_eax; u32 b = 0x30u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004cb2d4: and eax, 0xfffffff8 */ {  u32 a = r_eax; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004cb2d7: mov dword ptr [ebp + 0x3c8], eax */ W32((u32)(r_ebp+0x3c8u), r_eax);
    /* 004cb2dd: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004cb2df: call dword ptr [edx + 0x174] */ { u32 t = R32((u32)(r_edx+0x174u)); r_esp -= 4; W32(r_esp, 0x4cb2e5u); call_ind(t); }
    /* 004cb2e5: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 004cb2e8: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004cb2ea: call dword ptr [eax + 0x180] */ { u32 t = R32((u32)(r_eax+0x180u)); r_esp -= 4; W32(r_esp, 0x4cb2f0u); call_ind(t); }
    /* 004cb2f0: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004cb2f3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004cb2f4: ret 4 */ FN_RET(0x004cb2ac); r_esp += 8; return;
}

void f_004cb2f7(void)
{
    FN_ENTER(0x004cb2f7);
    /* 004cb2f7: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004cb2f9: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 004cb2fb: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 004cb2fe: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004cb300: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4cb306u); call_ind(t); }
    /* 004cb306: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 004cb30a: mov ecx, dword ptr [ebp + 0x694] */ r_ecx = R32((u32)(r_ebp+0x694u));
    /* 004cb310: mov byte ptr [esp], 0xa8 */ W8((u32)(r_esp), 0xa8u);
    /* 004cb314: mov edx, 0x1c */ r_edx = 0x1cu;
    /* 004cb319: mov byte ptr [esp + 1], 6 */ W8((u32)(r_esp+0x1u), 0x6u);
    /* 004cb31e: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 004cb323: mov eax, dword ptr [ebp + 0x67c] */ r_eax = R32((u32)(r_ebp+0x67cu));
    /* 004cb329: mov word ptr [esp + 4], dx */ W16((u32)(r_esp+0x4u), (u16)r_edx);
    /* 004cb32e: mov word ptr [esp + 6], ax */ W16((u32)(r_esp+0x6u), (u16)r_eax);
    /* 004cb333: movzx eax, word ptr [ebp + 0x394] */ r_eax = (u32)R16((u32)(r_ebp+0x394u));
    /* 004cb33a: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004cb33e: mov eax, dword ptr [ebp + 0x690] */ r_eax = R32((u32)(r_ebp+0x690u));
    /* 004cb344: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 004cb348: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 004cb34c: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4cb351u); f_008587a5();
    /* 004cb351: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 004cb355: fild dword ptr [esp + 0x38] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x38u)));
    /* 004cb359: fdiv dword ptr [0x908454] */ ST(0) = ST(0) / R_F32((u32)(0x908454u));
    /* 004cb35f: fmul dword ptr [0x90844c] */ ST(0) = ST(0) * R_F32((u32)(0x90844cu));
    /* 004cb365: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 004cb368: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 004cb36c: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 004cb371: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004cb376: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 004cb37a: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 004cb37e: fistp dword ptr [esp + 0x30] */ W32((u32)(r_esp+0x30u), (u32)fx_int32(ST(0))); FPOP();
    /* 004cb382: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 004cb386: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 004cb38a: mov byte ptr [esp + 0x14], al */ W8((u32)(r_esp+0x14u), (u8)r_eax);
    /* 004cb38e: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4cb393u); f_008003e0();
    /* 004cb393: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004cb396: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004cb397: ret 4 */ FN_RET(0x004cb2f7); r_esp += 8; return;
}

void f_004cb393(void)
{
    FN_ENTER(0x004cb393);
    /* 004cb393: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004cb396: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004cb397: ret 4 */ FN_RET(0x004cb393); r_esp += 8; return;
}

void f_004cb3cc(void) /* sub_4CB3CC */
{
    FN_ENTER(0x004cb3cc);
    /* 004cb3cc: mov eax, dword ptr [0xa485e8] */ r_eax = R32((u32)(0xa485e8u));
    /* 004cb3d1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004cb3d3: je 0x4cb3e6 */ if (fZ) goto L_004cb3e6;
L_004cb3d5:; BB(0x004cb3d5);
    /* 004cb3d5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004cb3d6: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x4cb3dbu); f_0082e960();
    /* 004cb3db: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004cb3dc: mov dword ptr [0xa485e8], 0 */ W32((u32)(0xa485e8u), 0x0u);
L_004cb3e6:; BB(0x004cb3e6);
    /* 004cb3e6: mov ecx, dword ptr [0xa485c8] */ r_ecx = R32((u32)(0xa485c8u));
    /* 004cb3ec: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004cb3ee: je 0x4cb403 */ if (fZ) goto L_004cb403;
L_004cb3f0:; BB(0x004cb3f0);
    /* 004cb3f0: je 0x4cb3f9 */ if (fZ) goto L_004cb3f9;
L_004cb3f2:; BB(0x004cb3f2);
    /* 004cb3f2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004cb3f4: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x4cb3f9u); f_004066a8();
L_004cb3f9:; BB(0x004cb3f9);
    /* 004cb3f9: mov dword ptr [0xa485c8], 0 */ W32((u32)(0xa485c8u), 0x0u);
L_004cb403:; BB(0x004cb403);
    /* 004cb403: ret  */ FN_RET(0x004cb3cc); r_esp += 4; return;
}

void f_004cb404(void)
{
    FN_ENTER(0x004cb404);
    /* 004cb404: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004cb405: mov ebp, esp */ r_ebp = r_esp;
    /* 004cb407: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004cb409: push 0x8d1620 */ { u32 v = 0x8d1620u; r_esp -= 4; W32(r_esp, v); }
    /* 004cb40e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004cb414: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004cb415: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004cb41c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004cb41f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004cb422: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004cb425: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004cb428: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004cb42b: push 0x8b4 */ { u32 v = 0x8b4u; r_esp -= 4; W32(r_esp, v); }
    /* 004cb430: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 004cb437: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4cb43cu); f_005caba4();
    /* 004cb43c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004cb43d: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004cb440: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004cb442: je 0x4cb47b */ if (fZ) goto L_004cb47b;
L_004cb444:; BB(0x004cb444);
    /* 004cb444: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 004cb44b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004cb452: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004cb455: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 004cb45b: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004cb45e: call 0x4cb480 */ r_esp -= 4; W32(r_esp, 0x4cb463u); f_004cb480();
    /* 004cb463: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004cb466: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_004cb46d:; BB(0x004cb46d);
    /* 004cb46d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004cb470: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004cb477: mov esp, ebp */ r_esp = r_ebp;
    /* 004cb479: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004cb47a: ret  */ FN_RET(0x004cb404); r_esp += 4; return;
L_004cb47b:; BB(0x004cb47b);
    /* 004cb47b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004cb47d: jmp 0x4cb46d */ goto L_004cb46d;
}

void f_004cb480(void) /* sub_4CB480 */
{
    FN_ENTER(0x004cb480);
    /* 004cb480: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004cb481: mov ebp, esp */ r_ebp = r_esp;
    /* 004cb483: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004cb485: push 0x8d16ea */ { u32 v = 0x8d16eau; r_esp -= 4; W32(r_esp, v); }
    /* 004cb48a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004cb490: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004cb491: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004cb498: sub esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004cb49b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004cb49e: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 004cb4a1: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 004cb4a4: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 004cb4a7: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004cb4aa: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004cb4ad: mov dword ptr [ebp - 0x48], ecx */ W32((u32)(r_ebp+0xffffffb8u), r_ecx);
    /* 004cb4b0: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 004cb4b3: call 0x5216f4 */ r_esp -= 4; W32(r_esp, 0x4cb4b8u); f_005216f4();
    /* 004cb4b8: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004cb4bf: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 004cb4c2: mov dword ptr [ecx], 0xafb860 */ W32((u32)(r_ecx), 0xafb860u);
    /* 004cb4c8: add ecx, 0x3cc */ {  u32 a = r_ecx; u32 b = 0x3ccu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004cb4ce: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004cb4d0: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x4cb4d5u); f_008193cc();
    /* 004cb4d5: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 004cb4dc: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 004cb4df: add ecx, 0x5f4 */ {  u32 a = r_ecx; u32 b = 0x5f4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004cb4e5: call 0x782cd8 */ r_esp -= 4; W32(r_esp, 0x4cb4eau); f_00782cd8();
    /* 004cb4ea: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 004cb4f1: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 004cb4f4: add ecx, 0x618 */ {  u32 a = r_ecx; u32 b = 0x618u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004cb4fa: call 0x782cd8 */ r_esp -= 4; W32(r_esp, 0x4cb4ffu); f_00782cd8();
    /* 004cb4ff: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 004cb506: push 0x5770ec */ { u32 v = 0x5770ecu; r_esp -= 4; W32(r_esp, v); }
    /* 004cb50b: push 0x57713c */ { u32 v = 0x57713cu; r_esp -= 4; W32(r_esp, v); }
    /* 004cb510: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 004cb513: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004cb515: add eax, 0x6e4 */ {  u32 a = r_eax; u32 b = 0x6e4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004cb51a: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 004cb51c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004cb51d: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x4cb522u); f_00858736();
    /* 004cb522: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 004cb529: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 004cb52c: add ecx, 0x774 */ {  u32 a = r_ecx; u32 b = 0x774u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004cb532: call 0x763030 */ r_esp -= 4; W32(r_esp, 0x4cb537u); f_00763030();
    /* 004cb537: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 004cb53a: mov eax, dword ptr [0x9ac3e0] */ r_eax = R32((u32)(0x9ac3e0u));
    /* 004cb53f: mov edx, dword ptr [0xa485cc] */ r_edx = R32((u32)(0xa485ccu));
    /* 004cb545: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 004cb548: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004cb54a: jne 0x4cb552 */ if (!fZ) goto L_004cb552;
L_004cb54c:; BB(0x004cb54c);
    /* 004cb54c: mov dword ptr [0xa485cc], ecx */ W32((u32)(0xa485ccu), r_ecx);
L_004cb552:; BB(0x004cb552);
    /* 004cb552: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 004cb555: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004cb556: call 0x51f750 */ r_esp -= 4; W32(r_esp, 0x4cb55bu); f_0051f750();
    /* 004cb55b: mov ebx, dword ptr [ebp - 0x48] */ r_ebx = R32((u32)(r_ebp+0xffffffb8u));
    /* 004cb55e: movsx eax, word ptr [ebx + 0x2c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x2cu));
    /* 004cb562: mov dword ptr [ebx + 0x3c8], 0 */ W32((u32)(r_ebx+0x3c8u), 0x0u);
    /* 004cb56c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004cb56e: jl 0x4cb5a0 */ if ((fS!=fO)) goto L_004cb5a0;
L_004cb570:; BB(0x004cb570);
    /* 004cb570: cmp eax, 0xb4f */ {  u32 a = r_eax; u32 b = 0xb4fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004cb575: jg 0x4cb5a0 */ if ((!fZ&&fS==fO)) goto L_004cb5a0;
L_004cb577:; BB(0x004cb577);
    /* 004cb577: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004cb579: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004cb57b: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 004cb57e: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004cb580: mov eax, dword ptr [0xab02b8] */ r_eax = R32((u32)(0xab02b8u));
    /* 004cb585: mov ecx, dword ptr [edx + eax] */ r_ecx = R32((u32)(r_edx+r_eax));
    /* 004cb588: and ecx, 0x12008 */ {  u32 a = r_ecx; u32 b = 0x12008u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 004cb58e: cmp ecx, 0x12008 */ {  u32 a = r_ecx; u32 b = 0x12008u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004cb594: jne 0x4cb5a0 */ if (!fZ) goto L_004cb5a0;
L_004cb596:; BB(0x004cb596);
    /* 004cb596: mov dword ptr [ebx + 0x3c8], 8 */ W32((u32)(r_ebx+0x3c8u), 0x8u);
L_004cb5a0:; BB(0x004cb5a0);
    /* 004cb5a0: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004cb5a2: call 0x521840 */ r_esp -= 4; W32(r_esp, 0x4cb5a7u); f_00521840();
    /* 004cb5a7: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 004cb5aa: mov ebx, dword ptr [0xa485c8] */ r_ebx = R32((u32)(0xa485c8u));
    /* 004cb5b0: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 004cb5b2: mov eax, dword ptr [ebx + 0x42c] */ r_eax = R32((u32)(r_ebx+0x42cu));
    /* 004cb5b8: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 004cb5bb: push 0x9ac120 */ { u32 v = 0x9ac120u; r_esp -= 4; W32(r_esp, v); }
    /* 004cb5c0: mov dword ptr [ecx + 0x34], edx */ W32((u32)(r_ecx+0x34u), r_edx);
    /* 004cb5c3: mov esi, dword ptr [ebx + 0x42c] */ r_esi = R32((u32)(r_ebx+0x42cu));
    /* 004cb5c9: mov edi, dword ptr [esi + 0xc] */ r_edi = R32((u32)(r_esi+0xcu));
    /* 004cb5cc: mov dword ptr [ecx + 0x68], 0x40000000 */ W32((u32)(r_ecx+0x68u), 0x40000000u);
    /* 004cb5d3: mov dword ptr [ecx + 0x24], edi */ W32((u32)(r_ecx+0x24u), r_edi);
    /* 004cb5d6: mov dword ptr [ecx + 0x6c], 0x40000000 */ W32((u32)(r_ecx+0x6cu), 0x40000000u);
    /* 004cb5dd: mov dword ptr [ecx + 0x70], 0x40000000 */ W32((u32)(r_ecx+0x70u), 0x40000000u);
    /* 004cb5e4: call 0x51ff3c */ r_esp -= 4; W32(r_esp, 0x4cb5e9u); f_0051ff3c();
    /* 004cb5e9: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 004cb5ec: mov eax, dword ptr [0xa485c8] */ r_eax = R32((u32)(0xa485c8u));
    /* 004cb5f1: mov dword ptr [ecx + 0xd8], 0x9abf60 */ W32((u32)(r_ecx+0xd8u), 0x9abf60u);
    /* 004cb5fb: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004cb5fd: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004cb5fe: mov dword ptr [ecx + 0xb0], ebx */ W32((u32)(r_ecx+0xb0u), r_ebx);
    /* 004cb604: mov edx, dword ptr [eax + 0x430] */ r_edx = R32((u32)(r_eax+0x430u));
    /* 004cb60a: mov dword ptr [ecx + 0xdc], edx */ W32((u32)(r_ecx+0xdcu), r_edx);
    /* 004cb610: mov word ptr [ecx + 0xb8], bx */ W16((u32)(r_ecx+0xb8u), (u16)r_ebx);
    /* 004cb617: call 0x7aa4c8 */ r_esp -= 4; W32(r_esp, 0x4cb61cu); f_007aa4c8();
    /* 004cb61c: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 004cb61f: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 004cb621: movzx eax, word ptr [edx + 0xb8] */ r_eax = (u32)R16((u32)(r_edx+0xb8u));
    /* 004cb628: mov word ptr [edx + 0xb8], ax */ W16((u32)(r_edx+0xb8u), (u16)r_eax);
    /* 004cb62f: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x4cb634u); f_0077a684();
    /* 004cb634: mov ebx, eax */ r_ebx = r_eax;
    /* 004cb636: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 004cb638: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x4cb63du); f_0077a6b4();
    /* 004cb63d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004cb640: mov edx, dword ptr [0x9ac4a8] */ r_edx = R32((u32)(0x9ac4a8u));
    /* 004cb646: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 004cb649: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004cb64a: push dword ptr [edx*4 + 0xa48510] */ { u32 v = R32((u32)(r_edx*4+0xa48510u)); r_esp -= 4; W32(r_esp, v); }
    /* 004cb651: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004cb652: call 0x520c70 */ r_esp -= 4; W32(r_esp, 0x4cb657u); f_00520c70();
    /* 004cb657: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 004cb65a: call 0x520350 */ r_esp -= 4; W32(r_esp, 0x4cb65fu); f_00520350();
    /* 004cb65f: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 004cb662: mov dword ptr [ecx + 0x358], 0x9ac478 */ W32((u32)(r_ecx+0x358u), 0x9ac478u);
    /* 004cb66c: push 0x4c */ { u32 v = 0x4cu; r_esp -= 4; W32(r_esp, v); }
    /* 004cb66e: call 0x520390 */ r_esp -= 4; W32(r_esp, 0x4cb673u); f_00520390();
    /* 004cb673: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 004cb676: mov dword ptr [ecx + 0x384], 0x41a00000 */ W32((u32)(r_ecx+0x384u), 0x41a00000u);
    /* 004cb680: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 004cb682: call 0x521820 */ r_esp -= 4; W32(r_esp, 0x4cb687u); f_00521820();
    /* 004cb687: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 004cb68a: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 004cb68c: call 0x5217fc */ r_esp -= 4; W32(r_esp, 0x4cb691u); f_005217fc();
    /* 004cb691: mov ebx, dword ptr [ebp - 0x48] */ r_ebx = R32((u32)(r_ebp+0xffffffb8u));
    /* 004cb694: mov ecx, dword ptr [ebx + 0x3c8] */ r_ecx = R32((u32)(r_ebx+0x3c8u));
    /* 004cb69a: mov eax, dword ptr [ebx + 0x3c] */ r_eax = R32((u32)(r_ebx+0x3cu));
    /* 004cb69d: mov edx, dword ptr [ebx + 0x40] */ r_edx = R32((u32)(r_ebx+0x40u));
    /* 004cb6a0: or ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 004cb6a3: mov dword ptr [ebx + 0x3c8], ecx */ W32((u32)(r_ebx+0x3c8u), r_ecx);
    /* 004cb6a9: mov ecx, dword ptr [ebx + 0x38] */ r_ecx = R32((u32)(r_ebx+0x38u));
    /* 004cb6ac: mov dword ptr [ebx + 0x3ec], 0 */ W32((u32)(r_ebx+0x3ecu), 0x0u);
    /* 004cb6b6: mov dword ptr [ebx + 0x3f4], ecx */ W32((u32)(r_ebx+0x3f4u), r_ecx);
    /* 004cb6bc: mov dword ptr [ebx + 0x3f8], eax */ W32((u32)(r_ebx+0x3f8u), r_eax);
    /* 004cb6c2: mov dword ptr [ebx + 0x3fc], edx */ W32((u32)(r_ebx+0x3fcu), r_edx);
    /* 004cb6c8: mov dword ptr [ebx + 0x400], ecx */ W32((u32)(r_ebx+0x400u), r_ecx);
    /* 004cb6ce: mov dword ptr [ebx + 0x404], eax */ W32((u32)(r_ebx+0x404u), r_eax);
    /* 004cb6d4: mov dword ptr [ebx + 0x408], edx */ W32((u32)(r_ebx+0x408u), r_edx);
    /* 004cb6da: mov dword ptr [ebx + 0x40c], ecx */ W32((u32)(r_ebx+0x40cu), r_ecx);
    /* 004cb6e0: mov dword ptr [ebx + 0x410], eax */ W32((u32)(r_ebx+0x410u), r_eax);
    /* 004cb6e6: mov dword ptr [ebx + 0x414], edx */ W32((u32)(r_ebx+0x414u), r_edx);
    /* 004cb6ec: mov dword ptr [ebx + 0x418], ecx */ W32((u32)(r_ebx+0x418u), r_ecx);
    /* 004cb6f2: mov dword ptr [ebx + 0x41c], eax */ W32((u32)(r_ebx+0x41cu), r_eax);
    /* 004cb6f8: mov dword ptr [ebx + 0x420], edx */ W32((u32)(r_ebx+0x420u), r_edx);
    /* 004cb6fe: mov dword ptr [ebx + 0x424], ecx */ W32((u32)(r_ebx+0x424u), r_ecx);
    /* 004cb704: mov dword ptr [ebx + 0x428], eax */ W32((u32)(r_ebx+0x428u), r_eax);
    /* 004cb70a: mov dword ptr [ebx + 0x42c], edx */ W32((u32)(r_ebx+0x42cu), r_edx);
    /* 004cb710: mov dword ptr [ebx + 0x430], ecx */ W32((u32)(r_ebx+0x430u), r_ecx);
    /* 004cb716: mov dword ptr [ebx + 0x434], eax */ W32((u32)(r_ebx+0x434u), r_eax);
    /* 004cb71c: mov dword ptr [ebx + 0x438], edx */ W32((u32)(r_ebx+0x438u), r_edx);
    /* 004cb722: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_004cb724:; BB(0x004cb724);
    /* 004cb724: lea esi, [edx + edx] */ r_esi = (u32)(r_edx+r_edx);
    /* 004cb727: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004cb729: lea eax, [esi + esi] */ r_eax = (u32)(r_esi+r_esi);
    /* 004cb72c: add eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004cb72e: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004cb731: cmp edx, 0x22 */ {  u32 a = r_edx; u32 b = 0x22u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004cb734: mov dword ptr [eax + ebx + 0x43c], ecx */ W32((u32)(r_eax+r_ebx+0x43cu), r_ecx);
    /* 004cb73b: mov ecx, dword ptr [ebx + 0x3c] */ r_ecx = R32((u32)(r_ebx+0x3cu));
    /* 004cb73e: mov dword ptr [eax + ebx + 0x440], ecx */ W32((u32)(r_eax+r_ebx+0x440u), r_ecx);
    /* 004cb745: mov edi, dword ptr [ebx + 0x40] */ r_edi = R32((u32)(r_ebx+0x40u));
    /* 004cb748: mov dword ptr [eax + ebx + 0x444], edi */ W32((u32)(r_eax+r_ebx+0x444u), r_edi);
    /* 004cb74f: mov ecx, dword ptr [ebx + 0x38] */ r_ecx = R32((u32)(r_ebx+0x38u));
    /* 004cb752: mov dword ptr [eax + ebx + 0x448], ecx */ W32((u32)(r_eax+r_ebx+0x448u), r_ecx);
    /* 004cb759: mov ecx, dword ptr [ebx + 0x3c] */ r_ecx = R32((u32)(r_ebx+0x3cu));
    /* 004cb75c: mov dword ptr [eax + ebx + 0x44c], ecx */ W32((u32)(r_eax+r_ebx+0x44cu), r_ecx);
    /* 004cb763: mov ecx, dword ptr [ebx + 0x40] */ r_ecx = R32((u32)(r_ebx+0x40u));
    /* 004cb766: mov dword ptr [eax + ebx + 0x450], ecx */ W32((u32)(r_eax+r_ebx+0x450u), r_ecx);
    /* 004cb76d: jge 0x4cb774 */ if ((fS==fO)) goto L_004cb774;
L_004cb76f:; BB(0x004cb76f);
    /* 004cb76f: mov ecx, dword ptr [ebx + 0x38] */ r_ecx = R32((u32)(r_ebx+0x38u));
    /* 004cb772: jmp 0x4cb724 */ goto L_004cb724;
L_004cb774:; BB(0x004cb774);
    /* 004cb774: mov dword ptr [ebx + 0x5d4], 0 */ W32((u32)(r_ebx+0x5d4u), 0x0u);
    /* 004cb77e: mov dword ptr [ebx + 0x5d8], 0 */ W32((u32)(r_ebx+0x5d8u), 0x0u);
    /* 004cb788: mov dword ptr [ebx + 0x5dc], 0 */ W32((u32)(r_ebx+0x5dcu), 0x0u);
    /* 004cb792: mov dword ptr [ebx + 0x5e0], 0 */ W32((u32)(r_ebx+0x5e0u), 0x0u);
    /* 004cb79c: mov dword ptr [ebx + 0x5e4], 0 */ W32((u32)(r_ebx+0x5e4u), 0x0u);
    /* 004cb7a6: mov dword ptr [ebx + 0x5e8], 0 */ W32((u32)(r_ebx+0x5e8u), 0x0u);
    /* 004cb7b0: mov dword ptr [ebx + 0x5ec], 0 */ W32((u32)(r_ebx+0x5ecu), 0x0u);
    /* 004cb7ba: mov dword ptr [ebx + 0x5f0], 0 */ W32((u32)(r_ebx+0x5f0u), 0x0u);
    /* 004cb7c4: add ebx, 0x5f4 */ {  u32 a = r_ebx; u32 b = 0x5f4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004cb7ca: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004cb7cc: call 0x782ce8 */ r_esp -= 4; W32(r_esp, 0x4cb7d1u); f_00782ce8();
    /* 004cb7d1: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 004cb7d4: add ecx, 0x618 */ {  u32 a = r_ecx; u32 b = 0x618u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004cb7da: call 0x782ce8 */ r_esp -= 4; W32(r_esp, 0x4cb7dfu); f_00782ce8();
    /* 004cb7df: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 004cb7e2: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 004cb7e5: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 004cb7e8: mov ebx, dword ptr [eax + 0x38] */ r_ebx = R32((u32)(r_eax+0x38u));
    /* 004cb7eb: mov esi, dword ptr [eax + 0x3c] */ r_esi = R32((u32)(r_eax+0x3cu));
    /* 004cb7ee: mov edi, dword ptr [eax + 0x40] */ r_edi = R32((u32)(r_eax+0x40u));
    /* 004cb7f1: mov dword ptr [eax + 0x63c], ebx */ W32((u32)(r_eax+0x63cu), r_ebx);
    /* 004cb7f7: mov ebx, dword ptr [ebp - 0x48] */ r_ebx = R32((u32)(r_ebp+0xffffffb8u));
    /* 004cb7fa: mov dword ptr [eax + 0x640], esi */ W32((u32)(r_eax+0x640u), r_esi);
    /* 004cb800: mov dword ptr [eax + 0x644], edi */ W32((u32)(r_eax+0x644u), r_edi);
    /* 004cb806: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 004cb809: mov dword ptr [edx + 0x648], eax */ W32((u32)(r_edx+0x648u), r_eax);
    /* 004cb80f: mov eax, dword ptr [edx + 0x3c] */ r_eax = R32((u32)(r_edx+0x3cu));
    /* 004cb812: mov dword ptr [edx + 0x64c], eax */ W32((u32)(r_edx+0x64cu), r_eax);
    /* 004cb818: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 004cb81b: mov dword ptr [edx + 0x650], eax */ W32((u32)(r_edx+0x650u), r_eax);
    /* 004cb821: mov edx, dword ptr [0xa48508] */ r_edx = R32((u32)(0xa48508u));
    /* 004cb827: mov dword ptr [ecx + 0x65c], 1 */ W32((u32)(r_ecx+0x65cu), 0x1u);
    /* 004cb831: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004cb833: mov dword ptr [ecx + 0x654], eax */ W32((u32)(r_ecx+0x654u), r_eax);
    /* 004cb839: mov dword ptr [ecx + 0x658], eax */ W32((u32)(r_ecx+0x658u), r_eax);
    /* 004cb83f: mov dword ptr [ecx + 0x664], 0 */ W32((u32)(r_ecx+0x664u), 0x0u);
    /* 004cb849: mov dword ptr [ecx + 0x67c], eax */ W32((u32)(r_ecx+0x67cu), r_eax);
    /* 004cb84f: mov word ptr [ecx + 0x680], ax */ W16((u32)(r_ecx+0x680u), (u16)r_eax);
    /* 004cb856: movsx eax, word ptr [ecx + 0x2bc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x2bcu));
    /* 004cb85d: mov dword ptr [ecx + 0x668], 0 */ W32((u32)(r_ecx+0x668u), 0x0u);
    /* 004cb867: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 004cb86a: fild dword ptr [ebp - 0x44] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffbcu)));
    /* 004cb86d: mov dword ptr [ecx + 0x678], 0 */ W32((u32)(r_ecx+0x678u), 0x0u);
    /* 004cb877: fmul dword ptr [edx + 8] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x8u));
    /* 004cb87a: fdiv dword ptr [0x90842c] */ ST(0) = ST(0) / R_F32((u32)(0x90842cu));
    /* 004cb880: fnstcw word ptr [ebp - 0x3c] */ W16((u32)(r_ebp+0xffffffc4u), fcw);
    /* 004cb883: movzx eax, word ptr [ebp - 0x3c] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc4u));
    /* 004cb887: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004cb88c: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 004cb88f: fldcw word ptr [ebp - 0x34] */ fcw = R16((u32)(r_ebp+0xffffffccu));
    /* 004cb892: fistp dword ptr [ebp - 0x2c] */ W32((u32)(r_ebp+0xffffffd4u), (u32)fx_int32(ST(0))); FPOP();
    /* 004cb895: fldcw word ptr [ebp - 0x3c] */ fcw = R16((u32)(r_ebp+0xffffffc4u));
    /* 004cb898: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 004cb89b: mov word ptr [ecx + 0x682], ax */ W16((u32)(r_ecx+0x682u), (u16)r_eax);
    /* 004cb8a2: mov eax, dword ptr [ecx + 0x2b4] */ r_eax = R32((u32)(r_ecx+0x2b4u));
    /* 004cb8a8: mov dword ptr [eax + 0x10], 0x41200000 */ W32((u32)(r_eax+0x10u), 0x41200000u);
    /* 004cb8af: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 004cb8b4: movsx ecx, word ptr [ebx + 0x2bc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebx+0x2bcu));
    /* 004cb8bb: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004cb8bd: mov eax, ecx */ r_eax = r_ecx;
    /* 004cb8bf: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004cb8c2: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 004cb8c5: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004cb8c7: movsx eax, dx */ r_eax = (u32)(i32)(i16)(u16)r_edx;
    /* 004cb8ca: movsx edx, word ptr [ebx + 0x334] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x334u));
    /* 004cb8d1: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004cb8d3: movsx ecx, cx */ r_ecx = (u32)(i32)(i16)(u16)r_ecx;
    /* 004cb8d6: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004cb8d8: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004cb8da: jg 0x4cb8e5 */ if ((!fZ&&fS==fO)) goto L_004cb8e5;
L_004cb8dc:; BB(0x004cb8dc);
    /* 004cb8dc: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004cb8de: movsx ecx, cx */ r_ecx = (u32)(i32)(i16)(u16)r_ecx;
    /* 004cb8e1: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004cb8e3: jle 0x4cb8dc */ if ((fZ||fS!=fO)) goto L_004cb8dc;
L_004cb8e5:; BB(0x004cb8e5);
    /* 004cb8e5: mov dword ptr [ebp - 0x60], 0 */ W32((u32)(r_ebp+0xffffffa0u), 0x0u);
    /* 004cb8ec: push 0xd0 */ { u32 v = 0xd0u; r_esp -= 4; W32(r_esp, v); }
    /* 004cb8f1: mov word ptr [ebx + 0x680], cx */ W16((u32)(r_ebx+0x680u), (u16)r_ecx);
    /* 004cb8f8: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4cb8fdu); f_005caba4();
    /* 004cb8fd: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004cb900: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004cb903: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 004cb906: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004cb908: je 0x4cbcdc */ if (fZ) goto L_004cbcdc;
L_004cb90e:; BB(0x004cb90e);
    /* 004cb90e: mov dword ptr [ebp - 0x60], 1 */ W32((u32)(r_ebp+0xffffffa0u), 0x1u);
    /* 004cb915: mov dword ptr [ebp - 4], 5 */ W32((u32)(r_ebp+0xfffffffcu), 0x5u);
    /* 004cb91c: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 004cb91f: mov ecx, eax */ r_ecx = r_eax;
    /* 004cb921: lea eax, [edx + 0x4f0] */ r_eax = (u32)(r_edx+0x4f0u);
    /* 004cb927: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004cb928: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004cb929: call 0x4cf6ec */ r_esp -= 4; W32(r_esp, 0x4cb92eu); f_004cf6ec();
    /* 004cb92e: mov dword ptr [ebp - 0x60], 0 */ W32((u32)(r_ebp+0xffffffa0u), 0x0u);
L_004cb935:; BB(0x004cb935);
    /* 004cb935: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 004cb938: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004cb93b: mov dword ptr [edx + 0x684], eax */ W32((u32)(r_edx+0x684u), r_eax);
    /* 004cb941: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 004cb948: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
    /* 004cb94f: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 004cb951: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x4cb956u); f_008581c5();
    /* 004cb956: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004cb959: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004cb95c: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 004cb95f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004cb961: je 0x4cbcd2 */ if (fZ) goto L_004cbcd2;
L_004cb967:; BB(0x004cb967);
    /* 004cb967: mov dword ptr [ebp - 0x58], 1 */ W32((u32)(r_ebp+0xffffffa8u), 0x1u);
    /* 004cb96e: mov dword ptr [ebp - 4], 6 */ W32((u32)(r_ebp+0xfffffffcu), 0x6u);
    /* 004cb975: mov ecx, eax */ r_ecx = r_eax;
    /* 004cb977: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004cb979: call 0x521a4c */ r_esp -= 4; W32(r_esp, 0x4cb97eu); f_00521a4c();
    /* 004cb97e: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
L_004cb985:; BB(0x004cb985);
    /* 004cb985: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 004cb988: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004cb98b: mov dword ptr [edx + 0x688], eax */ W32((u32)(r_edx+0x688u), r_eax);
    /* 004cb991: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 004cb998: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
    /* 004cb99f: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 004cb9a1: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4cb9a6u); f_005caba4();
    /* 004cb9a6: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004cb9a9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004cb9ac: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 004cb9af: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004cb9b1: je 0x4cbcc8 */ if (fZ) goto L_004cbcc8;
L_004cb9b7:; BB(0x004cb9b7);
    /* 004cb9b7: mov dword ptr [ebp - 0x50], 1 */ W32((u32)(r_ebp+0xffffffb0u), 0x1u);
    /* 004cb9be: mov dword ptr [ebp - 4], 7 */ W32((u32)(r_ebp+0xfffffffcu), 0x7u);
    /* 004cb9c5: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 004cb9c8: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004cb9cb: add eax, 0x3cc */ {  u32 a = r_eax; u32 b = 0x3ccu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004cb9d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004cb9d1: call 0x4cdc88 */ r_esp -= 4; W32(r_esp, 0x4cb9d6u); f_004cdc88();
    /* 004cb9d6: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
L_004cb9dd:; BB(0x004cb9dd);
    /* 004cb9dd: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 004cb9e0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004cb9e3: mov dword ptr [ecx + 0x68c], eax */ W32((u32)(r_ecx+0x68cu), r_eax);
    /* 004cb9e9: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 004cb9f0: mov dword ptr [ecx + 0x690], 0 */ W32((u32)(r_ecx+0x690u), 0x0u);
    /* 004cb9fa: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004cb9fc: mov dword ptr [ecx + 0x6a0], eax */ W32((u32)(r_ecx+0x6a0u), r_eax);
    /* 004cba02: mov dword ptr [ecx + 0x6a4], eax */ W32((u32)(r_ecx+0x6a4u), r_eax);
    /* 004cba08: mov dword ptr [ecx + 0x694], 0 */ W32((u32)(r_ecx+0x694u), 0x0u);
    /* 004cba12: mov dword ptr [ecx + 0x6d8], eax */ W32((u32)(r_ecx+0x6d8u), r_eax);
    /* 004cba18: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004cba1a: mov dword ptr [ecx + 0x698], 0 */ W32((u32)(r_ecx+0x698u), 0x0u);
    /* 004cba24: mov dword ptr [ecx + 0x69c], 0 */ W32((u32)(r_ecx+0x69cu), 0x0u);
    /* 004cba2e: mov dword ptr [ecx + 0x6a8], 0 */ W32((u32)(r_ecx+0x6a8u), 0x0u);
    /* 004cba38: mov dword ptr [ecx + 0x6ac], 0 */ W32((u32)(r_ecx+0x6acu), 0x0u);
    /* 004cba42: mov dword ptr [ecx + 0x6b0], 0 */ W32((u32)(r_ecx+0x6b0u), 0x0u);
    /* 004cba4c: mov dword ptr [ecx + 0x6b4], 0 */ W32((u32)(r_ecx+0x6b4u), 0x0u);
    /* 004cba56: mov dword ptr [ecx + 0x6b8], 0 */ W32((u32)(r_ecx+0x6b8u), 0x0u);
    /* 004cba60: mov dword ptr [ecx + 0x6bc], 0 */ W32((u32)(r_ecx+0x6bcu), 0x0u);
    /* 004cba6a: mov dword ptr [ecx + 0x6c0], 0 */ W32((u32)(r_ecx+0x6c0u), 0x0u);
    /* 004cba74: mov dword ptr [ecx + 0x6c4], 0 */ W32((u32)(r_ecx+0x6c4u), 0x0u);
    /* 004cba7e: mov dword ptr [ecx + 0x6c8], 0 */ W32((u32)(r_ecx+0x6c8u), 0x0u);
    /* 004cba88: mov dword ptr [ecx + 0x6cc], 0 */ W32((u32)(r_ecx+0x6ccu), 0x0u);
    /* 004cba92: mov dword ptr [ecx + 0x6d0], 0 */ W32((u32)(r_ecx+0x6d0u), 0x0u);
    /* 004cba9c: mov dword ptr [ecx + 0x6d4], 0 */ W32((u32)(r_ecx+0x6d4u), 0x0u);
L_004cbaa6:; BB(0x004cbaa6);
    /* 004cbaa6: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 004cbaa9: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004cbaab: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 004cbaae: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004cbab0: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004cbab2: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004cbab4: lea ecx, [ecx + edx + 0x6e4] */ r_ecx = (u32)(r_ecx+r_edx+0x6e4u);
    /* 004cbabb: call 0x57739c */ r_esp -= 4; W32(r_esp, 0x4cbac0u); f_0057739c();
    /* 004cbac0: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004cbac3: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004cbac6: jge 0x4cbacd */ if ((fS==fO)) goto L_004cbacd;
L_004cbac8:; BB(0x004cbac8);
    /* 004cbac8: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 004cbacb: jmp 0x4cbaa6 */ goto L_004cbaa6;
L_004cbacd:; BB(0x004cbacd);
    /* 004cbacd: mov edi, dword ptr [ebp - 0x48] */ r_edi = R32((u32)(r_ebp+0xffffffb8u));
    /* 004cbad0: mov edx, dword ptr [0xaae974] */ r_edx = R32((u32)(0xaae974u));
    /* 004cbad6: mov dword ptr [edi + 0x758], 0xa8c */ W32((u32)(r_edi+0x758u), 0xa8cu);
    /* 004cbae0: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 004cbae2: mov dword ptr [edi + 0x3f0], 2 */ W32((u32)(r_edi+0x3f0u), 0x2u);
    /* 004cbaec: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 004cbaf1: mov dword ptr [edi + 0x754], esi */ W32((u32)(r_edi+0x754u), r_esi);
    /* 004cbaf7: mov dword ptr [edi + 0x76c], 3 */ W32((u32)(r_edi+0x76cu), 0x3u);
    /* 004cbb01: mov dword ptr [edi + 0x75c], esi */ W32((u32)(r_edi+0x75cu), r_esi);
    /* 004cbb07: mov word ptr [edi + 0x760], ax */ W16((u32)(r_edi+0x760u), (u16)r_eax);
    /* 004cbb0e: mov dword ptr [edi + 0x764], esi */ W32((u32)(r_edi+0x764u), r_esi);
    /* 004cbb14: mov dword ptr [edi + 0x770], 0x908400 */ W32((u32)(r_edi+0x770u), 0x908400u);
    /* 004cbb1e: mov dword ptr [edi + 0x768], esi */ W32((u32)(r_edi+0x768u), r_esi);
    /* 004cbb24: mov dword ptr [edi + 0x85c], esi */ W32((u32)(r_edi+0x85cu), r_esi);
    /* 004cbb2a: mov dword ptr [edi + 0x860], esi */ W32((u32)(r_edi+0x860u), r_esi);
    /* 004cbb30: mov dword ptr [edi + 0x874], 0 */ W32((u32)(r_edi+0x874u), 0x0u);
    /* 004cbb3a: mov dword ptr [edi + 0x864], esi */ W32((u32)(r_edi+0x864u), r_esi);
    /* 004cbb40: mov dword ptr [edi + 0x868], esi */ W32((u32)(r_edi+0x868u), r_esi);
    /* 004cbb46: mov dword ptr [edi + 0x86c], esi */ W32((u32)(r_edi+0x86cu), r_esi);
    /* 004cbb4c: mov dword ptr [edi + 0x878], 0 */ W32((u32)(r_edi+0x878u), 0x0u);
    /* 004cbb56: mov dword ptr [edi + 0x870], esi */ W32((u32)(r_edi+0x870u), r_esi);
    /* 004cbb5c: mov dword ptr [edi + 0x8a0], esi */ W32((u32)(r_edi+0x8a0u), r_esi);
    /* 004cbb62: mov dword ptr [edi + 0x8a4], esi */ W32((u32)(r_edi+0x8a4u), r_esi);
    /* 004cbb68: mov dword ptr [edi + 0x87c], 0 */ W32((u32)(r_edi+0x87cu), 0x0u);
    /* 004cbb72: mov dword ptr [edi + 0x8a8], esi */ W32((u32)(r_edi+0x8a8u), r_esi);
    /* 004cbb78: mov dword ptr [edi + 0x8ac], esi */ W32((u32)(r_edi+0x8acu), r_esi);
    /* 004cbb7e: lea ecx, [edx + edx*4] */ r_ecx = (u32)(r_edx+r_edx*4);
    /* 004cbb81: mov dword ptr [edi + 0x880], 0 */ W32((u32)(r_edi+0x880u), 0x0u);
    /* 004cbb8b: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004cbb8d: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004cbb8f: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004cbb91: mov dword ptr [edi + 0x884], 0 */ W32((u32)(r_edi+0x884u), 0x0u);
    /* 004cbb9b: lea ebx, [ecx + ecx + 0xaae75c] */ r_ebx = (u32)(r_ecx+r_ecx+0xaae75cu);
    /* 004cbba2: mov dword ptr [edi + 0x6e0], ebx */ W32((u32)(r_edi+0x6e0u), r_ebx);
    /* 004cbba8: mov dword ptr [edi + 0x6dc], esi */ W32((u32)(r_edi+0x6dcu), r_esi);
    /* 004cbbae: mov dword ptr [edi + 0x888], 0 */ W32((u32)(r_edi+0x888u), 0x0u);
    /* 004cbbb8: mov word ptr [edi + 0x32e], si */ W16((u32)(r_edi+0x32eu), (u16)r_esi);
    /* 004cbbbf: mov dword ptr [edi + 0x88c], 0 */ W32((u32)(r_edi+0x88cu), 0x0u);
    /* 004cbbc9: mov dword ptr [edi + 0x890], 0 */ W32((u32)(r_edi+0x890u), 0x0u);
    /* 004cbbd3: mov dword ptr [edi + 0x894], 0 */ W32((u32)(r_edi+0x894u), 0x0u);
    /* 004cbbdd: mov dword ptr [edi + 0x898], 0 */ W32((u32)(r_edi+0x898u), 0x0u);
    /* 004cbbe7: mov dword ptr [edi + 0x89c], 0 */ W32((u32)(r_edi+0x89cu), 0x0u);
    /* 004cbbf1: call 0x694cc8 */ r_esp -= 4; W32(r_esp, 0x4cbbf6u); f_00694cc8();
    /* 004cbbf6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004cbbf8: jne 0x4cbc09 */ if (!fZ) goto L_004cbc09;
L_004cbbfa:; BB(0x004cbbfa);
    /* 004cbbfa: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 004cbbfd: mov dword ptr [ecx + 0x3e8], 0 */ W32((u32)(r_ecx+0x3e8u), 0x0u);
    /* 004cbc07: jmp 0x4cbc2e */ goto L_004cbc2e;
L_004cbc09:; BB(0x004cbc09);
    /* 004cbc09: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 004cbc0c: call 0x520db0 */ r_esp -= 4; W32(r_esp, 0x4cbc11u); f_00520db0();
    /* 004cbc11: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 004cbc14: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004cbc16: je 0x4cbc24 */ if (fZ) goto L_004cbc24;
L_004cbc18:; BB(0x004cbc18);
    /* 004cbc18: mov dword ptr [ecx + 0x3e8], 0 */ W32((u32)(r_ecx+0x3e8u), 0x0u);
    /* 004cbc22: jmp 0x4cbc2e */ goto L_004cbc2e;
L_004cbc24:; BB(0x004cbc24);
    /* 004cbc24: mov dword ptr [ecx + 0x3e8], 1 */ W32((u32)(r_ecx+0x3e8u), 0x1u);
L_004cbc2e:; BB(0x004cbc2e);
    /* 004cbc2e: call 0x4cdb34 */ r_esp -= 4; W32(r_esp, 0x4cbc33u); f_004cdb34();
    /* 004cbc33: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 004cbc36: cmp eax, dword ptr [0xa485cc] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa485ccu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004cbc3c: je 0x4cbca7 */ if (fZ) goto L_004cbca7;
L_004cbc3e:; BB(0x004cbc3e);
    /* 004cbc3e: mov edx, dword ptr [eax + 0x3c8] */ r_edx = R32((u32)(r_eax+0x3c8u));
    /* 004cbc44: test dl, 8 */ {  u32 a = (u8)r_edx; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004cbc47: jne 0x4cbc6f */ if (!fZ) goto L_004cbc6f;
L_004cbc49:; BB(0x004cbc49);
    /* 004cbc49: movzx edx, word ptr [eax + 0x32e] */ r_edx = (u32)R16((u32)(r_eax+0x32eu));
    /* 004cbc50: mov ebx, dword ptr [edx*8 + 0x9ac260] */ r_ebx = R32((u32)(r_edx*8+0x9ac260u));
    /* 004cbc57: cmp ebx, dword ptr [0x9083f8] */ {  u32 a = r_ebx; u32 b = R32((u32)(0x9083f8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004cbc5d: je 0x4cbc92 */ if (fZ) goto L_004cbc92;
L_004cbc5f:; BB(0x004cbc5f);
    /* 004cbc5f: mov ecx, dword ptr [edx*8 + 0x9ac264] */ r_ecx = R32((u32)(r_edx*8+0x9ac264u));
L_004cbc66:; BB(0x004cbc66);
    /* 004cbc66: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004cbc68: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004cbc6a: call ebx */ { u32 t = r_ebx; r_esp -= 4; W32(r_esp, 0x4cbc6cu); call_ind(t); }
    /* 004cbc6c: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
L_004cbc6f:; BB(0x004cbc6f);
    /* 004cbc6f: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 004cbc72: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004cbc75: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004cbc78: mov dword ptr [eax + 0x8b0], 0 */ W32((u32)(r_eax+0x8b0u), 0x0u);
    /* 004cbc82: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004cbc85: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004cbc8c: mov esp, ebp */ r_esp = r_ebp;
    /* 004cbc8e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004cbc8f: ret 8 */ FN_RET(0x004cb480); r_esp += 12; return;
L_004cbc92:; BB(0x004cbc92);
    /* 004cbc92: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004cbc94: je 0x4cbc6f */ if (fZ) goto L_004cbc6f;
L_004cbc96:; BB(0x004cbc96);
    /* 004cbc96: mov ecx, dword ptr [edx*8 + 0x9ac264] */ r_ecx = R32((u32)(r_edx*8+0x9ac264u));
    /* 004cbc9d: cmp ecx, dword ptr [0x9083fc] */ {  u32 a = r_ecx; u32 b = R32((u32)(0x9083fcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004cbca3: je 0x4cbc6f */ if (fZ) goto L_004cbc6f;
L_004cbca5:; BB(0x004cbca5);
    /* 004cbca5: jmp 0x4cbc66 */ goto L_004cbc66;
L_004cbca7:; BB(0x004cbca7);
    /* 004cbca7: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004cbcaa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004cbcab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004cbcac: mov edx, 0x1e */ r_edx = 0x1eu;
    /* 004cbcb1: mov word ptr [eax + 0x32e], dx */ W16((u32)(r_eax+0x32eu), (u16)r_edx);
    /* 004cbcb8: call 0x4ce4e0 */ r_esp -= 4; W32(r_esp, 0x4cbcbdu); f_004ce4e0();
    /* 004cbcbd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004cbcc0: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 004cbcc3: jmp 0x4cbc3e */ goto L_004cbc3e;
L_004cbcc8:; BB(0x004cbcc8);
    /* 004cbcc8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004cbcca: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004cbccd: jmp 0x4cb9dd */ goto L_004cb9dd;
L_004cbcd2:; BB(0x004cbcd2);
    /* 004cbcd2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004cbcd4: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004cbcd7: jmp 0x4cb985 */ goto L_004cb985;
L_004cbcdc:; BB(0x004cbcdc);
    /* 004cbcdc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004cbcde: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004cbce1: jmp 0x4cb935 */ goto L_004cb935;
}

void f_004cbce8(void) /* sub_4CBCE8 */
{
    FN_ENTER(0x004cbce8);
    /* 004cbce8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004cbce9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004cbcea: mov ebp, dword ptr [esp + 0xc] */ r_ebp = R32((u32)(r_esp+0xcu));
    /* 004cbcee: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 004cbcf2: mov eax, dword ptr [0xa485cc] */ r_eax = R32((u32)(0xa485ccu));
    /* 004cbcf7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004cbcf9: jne 0x4cbd02 */ if (!fZ) goto L_004cbd02;
L_004cbcfb:; BB(0x004cbcfb);
    /* 004cbcfb: mov eax, 1 */ r_eax = 0x1u;
    /* 004cbd00: jmp 0x4cbd11 */ goto L_004cbd11;
L_004cbd02:; BB(0x004cbd02);
    /* 004cbd02: call 0x4ce9bc */ r_esp -= 4; W32(r_esp, 0x4cbd07u); f_004ce9bc();
    /* 004cbd07: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004cbd09: je 0x4cbd91 */ if (fZ) goto L_004cbd91;
L_004cbd0f:; BB(0x004cbd0f);
    /* 004cbd0f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004cbd11:; BB(0x004cbd11);
    /* 004cbd11: mov dword ptr [ebp], 0 */ W32((u32)(r_ebp), 0x0u);
    /* 004cbd18: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004cbd1a: mov dword ptr [edi], 0 */ W32((u32)(r_edi), 0x0u);
    /* 004cbd20: jne 0x4cbd53 */ if (!fZ) goto L_004cbd53;
L_004cbd22:; BB(0x004cbd22);
    /* 004cbd22: mov eax, dword ptr [0xa48504] */ r_eax = R32((u32)(0xa48504u));
    /* 004cbd27: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 004cbd2a: mov dword ptr [ebp + 4], edx */ W32((u32)(r_ebp+0x4u), r_edx);
    /* 004cbd2d: mov ecx, dword ptr [0xa48504] */ r_ecx = R32((u32)(0xa48504u));
    /* 004cbd33: mov eax, dword ptr [ecx + 0x14] */ r_eax = R32((u32)(r_ecx+0x14u));
    /* 004cbd36: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 004cbd39: mov ebp, dword ptr [0xa48508] */ r_ebp = R32((u32)(0xa48508u));
    /* 004cbd3f: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 004cbd42: mov dword ptr [edi + 4], eax */ W32((u32)(r_edi+0x4u), r_eax);
    /* 004cbd45: mov eax, dword ptr [0xa48508] */ r_eax = R32((u32)(0xa48508u));
    /* 004cbd4a: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 004cbd4d: mov dword ptr [edi + 8], eax */ W32((u32)(r_edi+0x8u), r_eax);
    /* 004cbd50: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004cbd51: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004cbd52: ret  */ FN_RET(0x004cbce8); r_esp += 4; return;
L_004cbd53:; BB(0x004cbd53);
    /* 004cbd53: mov eax, dword ptr [0xa48a3c] */ r_eax = R32((u32)(0xa48a3cu));
    /* 004cbd58: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004cbd5b: je 0x4cbe40 */ if (fZ) goto L_004cbe40;
L_004cbd61:; BB(0x004cbd61);
    /* 004cbd61: mov eax, dword ptr [0xa48504] */ r_eax = R32((u32)(0xa48504u));
    /* 004cbd66: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004cbd68: mov dword ptr [ebp + 4], edx */ W32((u32)(r_ebp+0x4u), r_edx);
    /* 004cbd6b: mov ecx, dword ptr [0xa48504] */ r_ecx = R32((u32)(0xa48504u));
    /* 004cbd71: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 004cbd74: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 004cbd77: mov ebp, dword ptr [0xa48504] */ r_ebp = R32((u32)(0xa48504u));
    /* 004cbd7d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004cbd80: mov dword ptr [edi + 4], eax */ W32((u32)(r_edi+0x4u), r_eax);
    /* 004cbd83: mov eax, dword ptr [0xa48504] */ r_eax = R32((u32)(0xa48504u));
    /* 004cbd88: mov eax, dword ptr [eax + 0xc] */ r_eax = R32((u32)(r_eax+0xcu));
    /* 004cbd8b: mov dword ptr [edi + 8], eax */ W32((u32)(r_edi+0x8u), r_eax);
    /* 004cbd8e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004cbd8f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004cbd90: ret  */ FN_RET(0x004cbce8); r_esp += 4; return;
L_004cbd91:; BB(0x004cbd91);
    /* 004cbd91: mov edx, dword ptr [0xa485cc] */ r_edx = R32((u32)(0xa485ccu));
    /* 004cbd97: movsx eax, word ptr [edx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x32eu));
    /* 004cbd9e: cmp eax, 0x17 */ {  u32 a = r_eax; u32 b = 0x17u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004cbda1: je 0x4cbe75 */ if (fZ) goto L_004cbe75;
L_004cbda7:; BB(0x004cbda7);
    /* 004cbda7: mov eax, dword ptr [edx + 0x3ec] */ r_eax = R32((u32)(r_edx+0x3ecu));
    /* 004cbdad: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004cbdb0: jne 0x4cbdb9 */ if (!fZ) goto L_004cbdb9;
L_004cbdb2:; BB(0x004cbdb2);
    /* 004cbdb2: mov edx, 1 */ r_edx = 0x1u;
    /* 004cbdb7: jmp 0x4cbdc7 */ goto L_004cbdc7;
L_004cbdb9:; BB(0x004cbdb9);
    /* 004cbdb9: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004cbdbc: jne 0x4cbdc5 */ if (!fZ) goto L_004cbdc5;
L_004cbdbe:; BB(0x004cbdbe);
    /* 004cbdbe: mov edx, 2 */ r_edx = 0x2u;
    /* 004cbdc3: jmp 0x4cbdc7 */ goto L_004cbdc7;
L_004cbdc5:; BB(0x004cbdc5);
    /* 004cbdc5: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_004cbdc7:; BB(0x004cbdc7);
    /* 004cbdc7: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 004cbdca: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004cbdcc: mov ecx, dword ptr [eax + edx*8 + 0x9ac454] */ r_ecx = R32((u32)(r_eax+r_edx*8+0x9ac454u));
    /* 004cbdd3: mov dword ptr [ebp], ecx */ W32((u32)(r_ebp), r_ecx);
    /* 004cbdd6: mov ecx, dword ptr [eax + edx*8 + 0x9ac458] */ r_ecx = R32((u32)(r_eax+r_edx*8+0x9ac458u));
    /* 004cbddd: mov dword ptr [ebp + 4], ecx */ W32((u32)(r_ebp+0x4u), r_ecx);
    /* 004cbde0: mov ecx, dword ptr [eax + edx*8 + 0x9ac45c] */ r_ecx = R32((u32)(r_eax+r_edx*8+0x9ac45cu));
    /* 004cbde7: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
    /* 004cbdea: mov ebp, dword ptr [eax + edx*8 + 0x9ac430] */ r_ebp = R32((u32)(r_eax+r_edx*8+0x9ac430u));
    /* 004cbdf1: mov dword ptr [edi], ebp */ W32((u32)(r_edi), r_ebp);
    /* 004cbdf3: fld dword ptr [eax + edx*8 + 0x9ac434] */ FPUSH(R_F32((u32)(r_eax+r_edx*8+0x9ac434u)));
    /* 004cbdfa: mov ecx, dword ptr [eax + edx*8 + 0x9ac434] */ r_ecx = R32((u32)(r_eax+r_edx*8+0x9ac434u));
    /* 004cbe01: mov dword ptr [edi + 4], ecx */ W32((u32)(r_edi+0x4u), r_ecx);
    /* 004cbe04: fld dword ptr [eax + edx*8 + 0x9ac438] */ FPUSH(R_F32((u32)(r_eax+r_edx*8+0x9ac438u)));
    /* 004cbe0b: mov edx, dword ptr [eax + edx*8 + 0x9ac438] */ r_edx = R32((u32)(r_eax+r_edx*8+0x9ac438u));
    /* 004cbe12: mov eax, dword ptr [0xa485cc] */ r_eax = R32((u32)(0xa485ccu));
    /* 004cbe17: mov dword ptr [edi + 8], edx */ W32((u32)(r_edi+0x8u), r_edx);
    /* 004cbe1a: mov eax, dword ptr [eax + 0x654] */ r_eax = R32((u32)(r_eax+0x654u));
    /* 004cbe20: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004cbe23: jne 0x4cbe39 */ if (!fZ) goto L_004cbe39;
L_004cbe25:; BB(0x004cbe25);
    /* 004cbe25: fld dword ptr [0x9083f4] */ FPUSH(R_F32((u32)(0x9083f4u)));
    /* 004cbe2b: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 004cbe2d: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004cbe2f: fst dword ptr [edi + 4] */ W_F32((u32)(r_edi+0x4u), ST(0));
    /* 004cbe32: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004cbe34: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004cbe36: fst dword ptr [edi + 8] */ W_F32((u32)(r_edi+0x8u), ST(0));
L_004cbe39:; BB(0x004cbe39);
    /* 004cbe39: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004cbe3b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004cbe3d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004cbe3e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004cbe3f: ret  */ FN_RET(0x004cbce8); r_esp += 4; return;
L_004cbe40:; BB(0x004cbe40);
    /* 004cbe40: mov eax, dword ptr [0x9ac424] */ r_eax = R32((u32)(0x9ac424u));
    /* 004cbe45: mov edx, dword ptr [0x9ac428] */ r_edx = R32((u32)(0x9ac428u));
    /* 004cbe4b: mov ecx, dword ptr [0x9ac42c] */ r_ecx = R32((u32)(0x9ac42cu));
    /* 004cbe51: mov dword ptr [ebp], eax */ W32((u32)(r_ebp), r_eax);
    /* 004cbe54: mov eax, dword ptr [0x9ac41c] */ r_eax = R32((u32)(0x9ac41cu));
    /* 004cbe59: mov dword ptr [ebp + 4], edx */ W32((u32)(r_ebp+0x4u), r_edx);
    /* 004cbe5c: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
    /* 004cbe5f: mov ebp, dword ptr [0x9ac418] */ r_ebp = R32((u32)(0x9ac418u));
    /* 004cbe65: mov dword ptr [edi], ebp */ W32((u32)(r_edi), r_ebp);
    /* 004cbe67: mov dword ptr [edi + 4], eax */ W32((u32)(r_edi+0x4u), r_eax);
    /* 004cbe6a: mov eax, dword ptr [0x9ac420] */ r_eax = R32((u32)(0x9ac420u));
    /* 004cbe6f: mov dword ptr [edi + 8], eax */ W32((u32)(r_edi+0x8u), r_eax);
    /* 004cbe72: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004cbe73: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004cbe74: ret  */ FN_RET(0x004cbce8); r_esp += 4; return;
L_004cbe75:; BB(0x004cbe75);
    /* 004cbe75: mov eax, 1 */ r_eax = 0x1u;
    /* 004cbe7a: jmp 0x4cbd11 */ goto L_004cbd11;
}

void f_004cbe80(void) /* sub_4CBE80 */
{
    FN_ENTER(0x004cbe80);
    /* 004cbe80: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004cbe81: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 004cbe85: movzx eax, word ptr [ebx + 2] */ r_eax = (u32)R16((u32)(r_ebx+0x2u));
    /* 004cbe89: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004cbe8a: call 0x786b3c */ r_esp -= 4; W32(r_esp, 0x4cbe8fu); f_00786b3c();
    /* 004cbe8f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004cbe90: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004cbe92: je 0x4cbe9c */ if (fZ) goto L_004cbe9c;
L_004cbe94:; BB(0x004cbe94);
    /* 004cbe94: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004cbe95: mov ecx, eax */ r_ecx = r_eax;
    /* 004cbe97: call 0x4cbea0 */ r_esp -= 4; W32(r_esp, 0x4cbe9cu); f_004cbea0();
L_004cbe9c:; BB(0x004cbe9c);
    /* 004cbe9c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004cbe9d: ret  */ FN_RET(0x004cbe80); r_esp += 4; return;
}

void f_004cbea0(void) /* sub_4CBEA0 */
{
    FN_ENTER(0x004cbea0);
    /* 004cbea0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004cbea1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004cbea2: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004cbea4: mov ebp, dword ptr [esp + 0xc] */ r_ebp = R32((u32)(r_esp+0xcu));
    /* 004cbea8: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 004cbeac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004cbead: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004cbeaf: call 0x520fcc */ r_esp -= 4; W32(r_esp, 0x4cbeb4u); f_00520fcc();
    /* 004cbeb4: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 004cbeb6: movsx eax, word ptr [ebp + 6] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x6u));
    /* 004cbeba: mov dword ptr [ebx + 0x67c], eax */ W32((u32)(r_ebx+0x67cu), r_eax);
    /* 004cbec0: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 004cbec3: mov dword ptr [ebx + 0x698], edx */ W32((u32)(r_ebx+0x698u), r_edx);
    /* 004cbec9: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 004cbecc: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 004cbece: mov dword ptr [ebx + 0x69c], eax */ W32((u32)(r_ebx+0x69cu), r_eax);
    /* 004cbed4: movsx eax, word ptr [ebp + 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x4u));
    /* 004cbed8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004cbeda: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004cbedb: call dword ptr [edx + 0x164] */ { u32 t = R32((u32)(r_edx+0x164u)); r_esp -= 4; W32(r_esp, 0x4cbee1u); call_ind(t); }
    /* 004cbee1: movsx eax, byte ptr [ebp + 0x14] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0x14u));
    /* 004cbee5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004cbee6: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004cbee8: call 0x4cbf08 */ r_esp -= 4; W32(r_esp, 0x4cbeedu); f_004cbf08();
    /* 004cbeed: movsx eax, word ptr [ebp + 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x4u));
    /* 004cbef1: cmp ax, word ptr [ebx + 0x32e] */ {  u32 a = (u16)r_eax; u32 b = R16((u32)(r_ebx+0x32eu)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 15) & 1; fC = (a < b); }
    /* 004cbef8: je 0x4cbf02 */ if (fZ) goto L_004cbf02;
L_004cbefa:; BB(0x004cbefa);
    /* 004cbefa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004cbefb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004cbefd: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x4cbf02u); f_0051f62c();
L_004cbf02:; BB(0x004cbf02);
    /* 004cbf02: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004cbf03: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004cbf04: ret 4 */ FN_RET(0x004cbea0); r_esp += 8; return;
}

void f_004cbf08(void) /* sub_4CBF08 */
{
    FN_ENTER(0x004cbf08);
    /* 004cbf08: movsx eax, byte ptr [esp + 4] */ r_eax = (u32)(i32)(i8)R8((u32)(r_esp+0x4u));
    /* 004cbf0d: mov dword ptr [ecx + 0x3f0], eax */ W32((u32)(r_ecx+0x3f0u), r_eax);
    /* 004cbf13: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004cbf15: je 0x4cbf4f */ if (fZ) goto L_004cbf4f;
L_004cbf17:; BB(0x004cbf17);
    /* 004cbf17: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004cbf1a: jne 0x4cbf33 */ if (!fZ) goto L_004cbf33;
L_004cbf1c:; BB(0x004cbf1c);
    /* 004cbf1c: mov dword ptr [ecx + 0x76c], 2 */ W32((u32)(r_ecx+0x76cu), 0x2u);
    /* 004cbf26: mov dword ptr [ecx + 0x770], 0x9083c8 */ W32((u32)(r_ecx+0x770u), 0x9083c8u);
    /* 004cbf30: ret 4 */ FN_RET(0x004cbf08); r_esp += 8; return;
L_004cbf33:; BB(0x004cbf33);
    /* 004cbf33: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004cbf36: jne 0x4cbf63 */ if (!fZ) goto L_004cbf63;
L_004cbf38:; BB(0x004cbf38);
    /* 004cbf38: mov dword ptr [ecx + 0x76c], 3 */ W32((u32)(r_ecx+0x76cu), 0x3u);
    /* 004cbf42: mov dword ptr [ecx + 0x770], 0x908400 */ W32((u32)(r_ecx+0x770u), 0x908400u);
    /* 004cbf4c: ret 4 */ FN_RET(0x004cbf08); r_esp += 8; return;
L_004cbf4f:; BB(0x004cbf4f);
    /* 004cbf4f: mov dword ptr [ecx + 0x76c], 1 */ W32((u32)(r_ecx+0x76cu), 0x1u);
    /* 004cbf59: mov dword ptr [ecx + 0x770], 0x9083a0 */ W32((u32)(r_ecx+0x770u), 0x9083a0u);
L_004cbf63:; BB(0x004cbf63);
    /* 004cbf63: ret 4 */ FN_RET(0x004cbf08); r_esp += 8; return;
}

void f_004cbf68(void) /* sub_4CBF68 */
{
    FN_ENTER(0x004cbf68);
    /* 004cbf68: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004cbf69: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004cbf6a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004cbf6b: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004cbf6d: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x4cbf72u); f_004f7c84();
    /* 004cbf72: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004cbf74: jne 0x4cc28c */ if (!fZ) goto L_004cc28c;
L_004cbf7a:; BB(0x004cbf7a);
    /* 004cbf7a: mov eax, dword ptr [ebx + 0x3c8] */ r_eax = R32((u32)(r_ebx+0x3c8u));
    /* 004cbf80: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004cbf82: jne 0x4cc274 */ if (!fZ) goto L_004cc274;
L_004cbf88:; BB(0x004cbf88);
    /* 004cbf88: mov eax, dword ptr [ebx + 0x75c] */ r_eax = R32((u32)(r_ebx+0x75cu));
    /* 004cbf8e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004cbf90: je 0x4cbfa2 */ if (fZ) goto L_004cbfa2;
L_004cbf92:; BB(0x004cbf92);
    /* 004cbf92: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004cbf94: call 0x4cc314 */ r_esp -= 4; W32(r_esp, 0x4cbf99u); f_004cc314();
    /* 004cbf99: add dword ptr [ebx + 0x764], 1 */ { u32 ad = (u32)(r_ebx+0x764u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 004cbfa0: jmp 0x4cbfea */ goto L_004cbfea;
L_004cbfa2:; BB(0x004cbfa2);
    /* 004cbfa2: call 0x694cc8 */ r_esp -= 4; W32(r_esp, 0x4cbfa7u); f_00694cc8();
    /* 004cbfa7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004cbfa9: je 0x4cbfea */ if (fZ) goto L_004cbfea;
L_004cbfab:; BB(0x004cbfab);
    /* 004cbfab: mov eax, dword ptr [ebx + 0x6dc] */ r_eax = R32((u32)(r_ebx+0x6dcu));
    /* 004cbfb1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004cbfb3: jne 0x4cbfea */ if (!fZ) goto L_004cbfea;
L_004cbfb5:; BB(0x004cbfb5);
    /* 004cbfb5: mov ebp, dword ptr [ebx + 0x3e8] */ r_ebp = R32((u32)(r_ebx+0x3e8u));
    /* 004cbfbb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004cbfbd: call 0x520db0 */ r_esp -= 4; W32(r_esp, 0x4cbfc2u); f_00520db0();
    /* 004cbfc2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004cbfc4: je 0x4cbfe0 */ if (fZ) goto L_004cbfe0;
L_004cbfc6:; BB(0x004cbfc6);
    /* 004cbfc6: mov dword ptr [ebx + 0x3e8], 0 */ W32((u32)(r_ebx+0x3e8u), 0x0u);
    /* 004cbfd0: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004cbfd2: je 0x4cbfea */ if (fZ) goto L_004cbfea;
L_004cbfd4:; BB(0x004cbfd4);
    /* 004cbfd4: mov dword ptr [ebx + 0x8b0], 1 */ W32((u32)(r_ebx+0x8b0u), 0x1u);
    /* 004cbfde: jmp 0x4cbfea */ goto L_004cbfea;
L_004cbfe0:; BB(0x004cbfe0);
    /* 004cbfe0: mov dword ptr [ebx + 0x3e8], 1 */ W32((u32)(r_ebx+0x3e8u), 0x1u);
L_004cbfea:; BB(0x004cbfea);
    /* 004cbfea: call 0x520db8 */ r_esp -= 4; W32(r_esp, 0x4cbfefu); f_00520db8();
    /* 004cbfef: mov ebp, eax */ r_ebp = r_eax;
    /* 004cbff1: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 004cbff3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004cbff5: call dword ptr [edx + 0xac] */ { u32 t = R32((u32)(r_edx+0xacu)); r_esp -= 4; W32(r_esp, 0x4cbffbu); call_ind(t); }
    /* 004cbffb: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 004cbffd: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004cbfff: call dword ptr [edx + 0xb0] */ { u32 t = R32((u32)(r_edx+0xb0u)); r_esp -= 4; W32(r_esp, 0x4cc005u); call_ind(t); }
    /* 004cc005: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004cc007: jne 0x4cc1c5 */ if (!fZ) goto L_004cc1c5;
L_004cc00d:; BB(0x004cc00d);
    /* 004cc00d: movsx edx, word ptr [ebx + 0x32e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x32eu));
    /* 004cc014: cmp edx, 0x15 */ {  u32 a = r_edx; u32 b = 0x15u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004cc017: je 0x4cc300 */ if (fZ) goto L_004cc300;
L_004cc01d:; BB(0x004cc01d);
    /* 004cc01d: cmp edx, 0x16 */ {  u32 a = r_edx; u32 b = 0x16u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004cc020: je 0x4cc300 */ if (fZ) goto L_004cc300;
L_004cc026:; BB(0x004cc026);
    /* 004cc026: cmp edx, 0x17 */ {  u32 a = r_edx; u32 b = 0x17u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004cc029: je 0x4cc300 */ if (fZ) goto L_004cc300;
L_004cc02f:; BB(0x004cc02f);
    /* 004cc02f: mov esi, dword ptr [ebx + 0x30] */ r_esi = R32((u32)(r_ebx+0x30u));
    /* 004cc032: and esi, 0xfffff7ff */ {  u32 a = r_esi; u32 b = 0xfffff7ffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 004cc038: mov dword ptr [ebx + 0x30], esi */ W32((u32)(r_ebx+0x30u), r_esi);
L_004cc03b:; BB(0x004cc03b);
    /* 004cc03b: mov esi, dword ptr [ebx + 0x75c] */ r_esi = R32((u32)(r_ebx+0x75cu));
    /* 004cc041: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004cc043: je 0x4cc143 */ if (fZ) goto L_004cc143;
L_004cc049:; BB(0x004cc049);
    /* 004cc049: movzx edx, word ptr [ebx + 0x760] */ r_edx = (u32)R16((u32)(r_ebx+0x760u));
    /* 004cc050: cmp edx, dword ptr [0xa9c4f4] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa9c4f4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004cc056: jne 0x4cc0de */ if (!fZ) goto L_004cc0de;
L_004cc05c:; BB(0x004cc05c);
    /* 004cc05c: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 004cc05e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004cc060: call dword ptr [edx + 0x88] */ { u32 t = R32((u32)(r_edx+0x88u)); r_esp -= 4; W32(r_esp, 0x4cc066u); call_ind(t); }
    /* 004cc066: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004cc068: je 0x4cc097 */ if (fZ) goto L_004cc097;
L_004cc06a:; BB(0x004cc06a);
    /* 004cc06a: mov edx, dword ptr [ebx + 0x67c] */ r_edx = R32((u32)(r_ebx+0x67cu));
    /* 004cc070: cmp edx, 0x32 */ {  u32 a = r_edx; u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004cc073: jge 0x4cc097 */ if ((fS==fO)) goto L_004cc097;
L_004cc075:; BB(0x004cc075);
    /* 004cc075: movsx esi, word ptr [ebx + 0x682] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebx+0x682u));
    /* 004cc07c: movsx edx, word ptr [ebx + 0x334] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x334u));
    /* 004cc083: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004cc085: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004cc087: jg 0x4cc08b */ if ((!fZ&&fS==fO)) goto L_004cc08b;
L_004cc089:; BB(0x004cc089);
    /* 004cc089: mov esi, edx */ r_esi = r_edx;
L_004cc08b:; BB(0x004cc08b);
    /* 004cc08b: mov word ptr [ebx + 0x334], si */ W16((u32)(r_ebx+0x334u), (u16)r_esi);
    /* 004cc092: call 0x51f81c */ r_esp -= 4; W32(r_esp, 0x4cc097u); f_0051f81c();
L_004cc097:; BB(0x004cc097);
    /* 004cc097: mov edx, dword ptr [0xa485f4] */ r_edx = R32((u32)(0xa485f4u));
    /* 004cc09d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004cc09f: jne 0x4cc0aa */ if (!fZ) goto L_004cc0aa;
L_004cc0a1:; BB(0x004cc0a1);
    /* 004cc0a1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004cc0a3: call 0x4cc7f4 */ r_esp -= 4; W32(r_esp, 0x4cc0a8u); f_004cc7f4();
    /* 004cc0a8: jmp 0x4cc0b1 */ goto L_004cc0b1;
L_004cc0aa:; BB(0x004cc0aa);
    /* 004cc0aa: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004cc0ac: call 0x4cc644 */ r_esp -= 4; W32(r_esp, 0x4cc0b1u); f_004cc644();
L_004cc0b1:; BB(0x004cc0b1);
    /* 004cc0b1: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 004cc0b3: mov esi, dword ptr [ebx] */ r_esi = R32((u32)(r_ebx));
    /* 004cc0b5: movsx edx, word ptr [ebx + 0x32e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x32eu));
    /* 004cc0bc: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004cc0be: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004cc0bf: call dword ptr [esi + 0x164] */ { u32 t = R32((u32)(r_esi+0x164u)); r_esp -= 4; W32(r_esp, 0x4cc0c5u); call_ind(t); }
    /* 004cc0c5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004cc0c7: mov esi, dword ptr [ebx] */ r_esi = R32((u32)(r_ebx));
    /* 004cc0c9: movsx edx, word ptr [ebx + 0x32e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x32eu));
    /* 004cc0d0: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004cc0d2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004cc0d3: call dword ptr [esi + 0x164] */ { u32 t = R32((u32)(r_esi+0x164u)); r_esp -= 4; W32(r_esp, 0x4cc0d9u); call_ind(t); }
    /* 004cc0d9: jmp 0x4cc1c5 */ goto L_004cc1c5;
L_004cc0de:; BB(0x004cc0de);
    /* 004cc0de: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 004cc0e0: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004cc0e2: call dword ptr [edx + 0x88] */ { u32 t = R32((u32)(r_edx+0x88u)); r_esp -= 4; W32(r_esp, 0x4cc0e8u); call_ind(t); }
    /* 004cc0e8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004cc0ea: je 0x4cc119 */ if (fZ) goto L_004cc119;
L_004cc0ec:; BB(0x004cc0ec);
    /* 004cc0ec: mov edx, dword ptr [ebx + 0x67c] */ r_edx = R32((u32)(r_ebx+0x67cu));
    /* 004cc0f2: cmp edx, 0x32 */ {  u32 a = r_edx; u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004cc0f5: jge 0x4cc119 */ if ((fS==fO)) goto L_004cc119;
L_004cc0f7:; BB(0x004cc0f7);
    /* 004cc0f7: movsx esi, word ptr [ebx + 0x682] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebx+0x682u));
    /* 004cc0fe: movsx edx, word ptr [ebx + 0x334] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x334u));
    /* 004cc105: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004cc107: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004cc109: jg 0x4cc10d */ if ((!fZ&&fS==fO)) goto L_004cc10d;
L_004cc10b:; BB(0x004cc10b);
    /* 004cc10b: mov esi, edx */ r_esi = r_edx;
L_004cc10d:; BB(0x004cc10d);
    /* 004cc10d: mov word ptr [ebx + 0x334], si */ W16((u32)(r_ebx+0x334u), (u16)r_esi);
    /* 004cc114: call 0x51f81c */ r_esp -= 4; W32(r_esp, 0x4cc119u); f_0051f81c();
L_004cc119:; BB(0x004cc119);
    /* 004cc119: mov edx, dword ptr [0xa485f4] */ r_edx = R32((u32)(0xa485f4u));
    /* 004cc11f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004cc121: jne 0x4cc12a */ if (!fZ) goto L_004cc12a;
L_004cc123:; BB(0x004cc123);
    /* 004cc123: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004cc125: call 0x4cc7f4 */ r_esp -= 4; W32(r_esp, 0x4cc12au); f_004cc7f4();
L_004cc12a:; BB(0x004cc12a);
    /* 004cc12a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004cc12c: mov esi, dword ptr [ebx] */ r_esi = R32((u32)(r_ebx));
    /* 004cc12e: movsx edx, word ptr [ebx + 0x32e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x32eu));
    /* 004cc135: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004cc137: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004cc138: call dword ptr [esi + 0x164] */ { u32 t = R32((u32)(r_esi+0x164u)); r_esp -= 4; W32(r_esp, 0x4cc13eu); call_ind(t); }
    /* 004cc13e: jmp 0x4cc1c5 */ goto L_004cc1c5;
L_004cc143:; BB(0x004cc143);
    /* 004cc143: mov esi, dword ptr [ebx + 0x3e8] */ r_esi = R32((u32)(r_ebx+0x3e8u));
    /* 004cc149: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004cc14c: je 0x4cc2ac */ if (fZ) goto L_004cc2ac;
L_004cc152:; BB(0x004cc152);
    /* 004cc152: cmp esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004cc155: je 0x4cc29a */ if (fZ) goto L_004cc29a;
L_004cc15b:; BB(0x004cc15b);
    /* 004cc15b: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 004cc15d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004cc15f: call dword ptr [edx + 0x88] */ { u32 t = R32((u32)(r_edx+0x88u)); r_esp -= 4; W32(r_esp, 0x4cc165u); call_ind(t); }
    /* 004cc165: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004cc167: je 0x4cc196 */ if (fZ) goto L_004cc196;
L_004cc169:; BB(0x004cc169);
    /* 004cc169: mov edx, dword ptr [ebx + 0x67c] */ r_edx = R32((u32)(r_ebx+0x67cu));
    /* 004cc16f: cmp edx, 0x32 */ {  u32 a = r_edx; u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004cc172: jge 0x4cc196 */ if ((fS==fO)) goto L_004cc196;
L_004cc174:; BB(0x004cc174);
    /* 004cc174: movsx esi, word ptr [ebx + 0x682] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebx+0x682u));
    /* 004cc17b: movsx edx, word ptr [ebx + 0x334] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x334u));
    /* 004cc182: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004cc184: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004cc186: jg 0x4cc18a */ if ((!fZ&&fS==fO)) goto L_004cc18a;
L_004cc188:; BB(0x004cc188);
    /* 004cc188: mov esi, edx */ r_esi = r_edx;
L_004cc18a:; BB(0x004cc18a);
    /* 004cc18a: mov word ptr [ebx + 0x334], si */ W16((u32)(r_ebx+0x334u), (u16)r_esi);
    /* 004cc191: call 0x51f81c */ r_esp -= 4; W32(r_esp, 0x4cc196u); f_0051f81c();
L_004cc196:; BB(0x004cc196);
    /* 004cc196: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004cc198: call 0x4cc390 */ r_esp -= 4; W32(r_esp, 0x4cc19du); f_004cc390();
L_004cc19d:; BB(0x004cc19d);
    /* 004cc19d: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 004cc19f: mov esi, dword ptr [ebx] */ r_esi = R32((u32)(r_ebx));
    /* 004cc1a1: movsx edx, word ptr [ebx + 0x32e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x32eu));
    /* 004cc1a8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004cc1aa: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004cc1ab: call dword ptr [esi + 0x164] */ { u32 t = R32((u32)(r_esi+0x164u)); r_esp -= 4; W32(r_esp, 0x4cc1b1u); call_ind(t); }
    /* 004cc1b1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004cc1b3: mov esi, dword ptr [ebx] */ r_esi = R32((u32)(r_ebx));
    /* 004cc1b5: movsx edx, word ptr [ebx + 0x32e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x32eu));
    /* 004cc1bc: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004cc1be: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004cc1bf: call dword ptr [esi + 0x164] */ { u32 t = R32((u32)(r_esi+0x164u)); r_esp -= 4; W32(r_esp, 0x4cc1c5u); call_ind(t); }
L_004cc1c5:; BB(0x004cc1c5);
    /* 004cc1c5: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004cc1c7: call 0x51f604 */ r_esp -= 4; W32(r_esp, 0x4cc1ccu); f_0051f604();
    /* 004cc1cc: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 004cc1ce: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004cc1d0: call dword ptr [edx + 0x168] */ { u32 t = R32((u32)(r_edx+0x168u)); r_esp -= 4; W32(r_esp, 0x4cc1d6u); call_ind(t); }
    /* 004cc1d6: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004cc1d8: call 0x4cca28 */ r_esp -= 4; W32(r_esp, 0x4cc1ddu); f_004cca28();
    /* 004cc1dd: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004cc1df: call 0x6401f0 */ r_esp -= 4; W32(r_esp, 0x4cc1e4u); f_006401f0();
    /* 004cc1e4: lea esi, [ebx + 0x38] */ r_esi = (u32)(r_ebx+0x38u);
    /* 004cc1e7: mov edx, 1 */ r_edx = 0x1u;
    /* 004cc1ec: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004cc1ed: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004cc1ee: push 0x40000000 */ { u32 v = 0x40000000u; r_esp -= 4; W32(r_esp, v); }
    /* 004cc1f3: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 004cc1f8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004cc1f9: call 0x80575c */ r_esp -= 4; W32(r_esp, 0x4cc1feu); f_0080575c();
    /* 004cc1fe: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004cc201: mov edx, dword ptr [ebx + 0x300] */ r_edx = R32((u32)(r_ebx+0x300u));
    /* 004cc207: mov dword ptr [ebx + 0x648], edx */ W32((u32)(r_ebx+0x648u), r_edx);
    /* 004cc20d: mov edx, dword ptr [ebx + 0x304] */ r_edx = R32((u32)(r_ebx+0x304u));
    /* 004cc213: mov dword ptr [ebx + 0x64c], edx */ W32((u32)(r_ebx+0x64cu), r_edx);
    /* 004cc219: mov edx, dword ptr [ebx + 0x308] */ r_edx = R32((u32)(r_ebx+0x308u));
    /* 004cc21f: mov dword ptr [ebx + 0x650], edx */ W32((u32)(r_ebx+0x650u), r_edx);
    /* 004cc225: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004cc227: jne 0x4cc234 */ if (!fZ) goto L_004cc234;
L_004cc229:; BB(0x004cc229);
    /* 004cc229: lea ecx, [ebx + 0x3cc] */ r_ecx = (u32)(r_ebx+0x3ccu);
    /* 004cc22f: call 0x817574 */ r_esp -= 4; W32(r_esp, 0x4cc234u); f_00817574();
L_004cc234:; BB(0x004cc234);
    /* 004cc234: push 0x3ecccccd */ { u32 v = 0x3ecccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 004cc239: lea eax, [ebx + 0x63c] */ r_eax = (u32)(r_ebx+0x63cu);
    /* 004cc23f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004cc240: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004cc241: call 0x520dc0 */ r_esp -= 4; W32(r_esp, 0x4cc246u); f_00520dc0();
    /* 004cc246: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004cc249: mov eax, dword ptr [ebx + 0x3c8] */ r_eax = R32((u32)(r_ebx+0x3c8u));
    /* 004cc24f: test eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004cc254: jne 0x4cc270 */ if (!fZ) goto L_004cc270;
L_004cc256:; BB(0x004cc256);
    /* 004cc256: lea ebp, [ebx + 0x6e4] */ r_ebp = (u32)(r_ebx+0x6e4u);
    /* 004cc25c: add ebx, 0x754 */ {  u32 a = r_ebx; u32 b = 0x754u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_004cc262:; BB(0x004cc262);
    /* 004cc262: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004cc264: call 0x5771a4 */ r_esp -= 4; W32(r_esp, 0x4cc269u); f_005771a4();
    /* 004cc269: add ebp, 0x1c */ {  u32 a = r_ebp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004cc26c: cmp ebx, ebp */ {  u32 a = r_ebx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004cc26e: jg 0x4cc262 */ if ((!fZ&&fS==fO)) goto L_004cc262;
L_004cc270:; BB(0x004cc270);
    /* 004cc270: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004cc271: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004cc272: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004cc273: ret  */ FN_RET(0x004cbf68); r_esp += 4; return;
L_004cc274:; BB(0x004cc274);
    /* 004cc274: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004cc275: call 0x8113e4 */ r_esp -= 4; W32(r_esp, 0x4cc27au); f_008113e4();
    /* 004cc27a: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 004cc27e: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004cc283: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
    /* 004cc287: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004cc288: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004cc289: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004cc28a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004cc28b: ret  */ FN_RET(0x004cbf68); r_esp += 4; return;
L_004cc28c:; BB(0x004cc28c);
    /* 004cc28c: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 004cc28e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004cc290: call dword ptr [eax + 0x1ac] */ { u32 t = R32((u32)(r_eax+0x1acu)); r_esp -= 4; W32(r_esp, 0x4cc296u); call_ind(t); }
    /* 004cc296: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004cc297: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004cc298: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004cc299: ret  */ FN_RET(0x004cbf68); r_esp += 4; return;
L_004cc29a:; BB(0x004cc29a);
    /* 004cc29a: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004cc29c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004cc29d: mov esi, dword ptr [ebx] */ r_esi = R32((u32)(r_ebx));
    /* 004cc29f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004cc2a1: call dword ptr [esi + 0x164] */ { u32 t = R32((u32)(r_esi+0x164u)); r_esp -= 4; W32(r_esp, 0x4cc2a7u); call_ind(t); }
    /* 004cc2a7: jmp 0x4cc19d */ goto L_004cc19d;
L_004cc2ac:; BB(0x004cc2ac);
    /* 004cc2ac: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 004cc2ae: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004cc2b0: call dword ptr [edx + 0x88] */ { u32 t = R32((u32)(r_edx+0x88u)); r_esp -= 4; W32(r_esp, 0x4cc2b6u); call_ind(t); }
    /* 004cc2b6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004cc2b8: je 0x4cc2e7 */ if (fZ) goto L_004cc2e7;
L_004cc2ba:; BB(0x004cc2ba);
    /* 004cc2ba: mov edx, dword ptr [ebx + 0x67c] */ r_edx = R32((u32)(r_ebx+0x67cu));
    /* 004cc2c0: cmp edx, 0x32 */ {  u32 a = r_edx; u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004cc2c3: jge 0x4cc2e7 */ if ((fS==fO)) goto L_004cc2e7;
L_004cc2c5:; BB(0x004cc2c5);
    /* 004cc2c5: movsx esi, word ptr [ebx + 0x682] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebx+0x682u));
    /* 004cc2cc: movsx edx, word ptr [ebx + 0x334] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x334u));
    /* 004cc2d3: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004cc2d5: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004cc2d7: jg 0x4cc2db */ if ((!fZ&&fS==fO)) goto L_004cc2db;
L_004cc2d9:; BB(0x004cc2d9);
    /* 004cc2d9: mov esi, edx */ r_esi = r_edx;
L_004cc2db:; BB(0x004cc2db);
    /* 004cc2db: mov word ptr [ebx + 0x334], si */ W16((u32)(r_ebx+0x334u), (u16)r_esi);
    /* 004cc2e2: call 0x51f81c */ r_esp -= 4; W32(r_esp, 0x4cc2e7u); f_0051f81c();
L_004cc2e7:; BB(0x004cc2e7);
    /* 004cc2e7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004cc2e9: mov esi, dword ptr [ebx] */ r_esi = R32((u32)(r_ebx));
    /* 004cc2eb: movsx edx, word ptr [ebx + 0x32e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x32eu));
    /* 004cc2f2: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004cc2f4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004cc2f5: call dword ptr [esi + 0x164] */ { u32 t = R32((u32)(r_esi+0x164u)); r_esp -= 4; W32(r_esp, 0x4cc2fbu); call_ind(t); }
    /* 004cc2fb: jmp 0x4cc1c5 */ goto L_004cc1c5;
L_004cc300:; BB(0x004cc300);
    /* 004cc300: mov esi, dword ptr [ebx + 0x30] */ r_esi = R32((u32)(r_ebx+0x30u));
    /* 004cc303: or esi, 0x800 */ {  u32 a = r_esi; u32 b = 0x800u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 004cc309: mov dword ptr [ebx + 0x30], esi */ W32((u32)(r_ebx+0x30u), r_esi);
    /* 004cc30c: jmp 0x4cc03b */ goto L_004cc03b;
}

