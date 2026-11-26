#include "protos.h"

void f_00537184(void) /* sub_537184 */
{
    FN_ENTER(0x00537184);
    /* 00537184: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00537185: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00537186: sub esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00537189: mov edi, ecx */ r_edi = r_ecx;
    /* 0053718b: mov ecx, edi */ r_ecx = r_edi;
    /* 0053718d: call 0x51f814 */ r_esp -= 4; W32(r_esp, 0x537192u); f_0051f814();
    /* 00537192: push 0x41700000 */ { u32 v = 0x41700000u; r_esp -= 4; W32(r_esp, v); }
    /* 00537197: mov ecx, edi */ r_ecx = r_edi;
    /* 00537199: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0053719b: push 0x43c80000 */ { u32 v = 0x43c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 005371a0: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x5371a3u); call_ind(t); }
    /* 005371a3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005371a5: je 0x5372d6 */ if (fZ) goto L_005372d6;
L_005371ab:; BB(0x005371ab);
    /* 005371ab: movsx eax, word ptr [edi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32eu));
    /* 005371b2: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005371b5: je 0x5371dd */ if (fZ) goto L_005371dd;
L_005371b7:; BB(0x005371b7);
    /* 005371b7: mov dword ptr [esp + 0xc], 0x40000000 */ W32((u32)(r_esp+0xcu), 0x40000000u);
    /* 005371bf: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 005371c3: mov ecx, edi */ r_ecx = r_edi;
    /* 005371c5: mov dword ptr [esp + 0x10], 0x3f800000 */ W32((u32)(r_esp+0x10u), 0x3f800000u);
    /* 005371cd: mov dword ptr [esp + 0x14], 0x40000000 */ W32((u32)(r_esp+0x14u), 0x40000000u);
    /* 005371d5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005371d7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005371d8: call 0x520cf8 */ r_esp -= 4; W32(r_esp, 0x5371ddu); f_00520cf8();
L_005371dd:; BB(0x005371dd);
    /* 005371dd: call 0x578b38 */ r_esp -= 4; W32(r_esp, 0x5371e2u); f_00578b38();
    /* 005371e2: mov ecx, dword ptr [edi + 0x24] */ r_ecx = R32((u32)(r_edi+0x24u));
    /* 005371e5: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x5371eau); f_00829cc8();
    /* 005371ea: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x5371efu); f_0082d7b0();
    /* 005371ef: lea ecx, [edi + 0x38] */ r_ecx = (u32)(r_edi+0x38u);
    /* 005371f2: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x5371f7u); f_0082d838();
    /* 005371f7: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 005371fa: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005371fc: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x537201u); f_0082d8bc();
    /* 00537201: fld dword ptr [edi + 0x35c] */ FPUSH(R_F32((u32)(r_edi+0x35cu)));
    /* 00537207: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 0053720b: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 00537210: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00537215: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 00537219: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 0053721d: fistp dword ptr [esp + 0x28] */ W32((u32)(r_esp+0x28u), (u32)fx_int32(ST(0))); FPOP();
    /* 00537221: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 00537225: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 00537229: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0053722b: jl 0x537239 */ if ((fS!=fO)) goto L_00537239;
L_0053722d:; BB(0x0053722d);
    /* 0053722d: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00537230: jl 0x53723b */ if ((fS!=fO)) goto L_0053723b;
L_00537232:; BB(0x00537232);
    /* 00537232: mov eax, 7 */ r_eax = 0x7u;
    /* 00537237: jmp 0x53723b */ goto L_0053723b;
L_00537239:; BB(0x00537239);
    /* 00537239: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0053723b:; BB(0x0053723b);
    /* 0053723b: mov edx, dword ptr [edi + 0xd8] */ r_edx = R32((u32)(r_edi+0xd8u));
    /* 00537241: mov esi, dword ptr [edi + 0xdc] */ r_esi = R32((u32)(r_edi+0xdcu));
    /* 00537247: fld dword ptr [edi + 0x360] */ FPUSH(R_F32((u32)(r_edi+0x360u)));
    /* 0053724d: fst dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0));
    /* 00537251: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00537253: mov eax, dword ptr [edx + eax*8 + 4] */ r_eax = R32((u32)(r_edx+r_eax*8+0x4u));
    /* 00537257: mov esi, dword ptr [esi + eax*8 + 4] */ r_esi = R32((u32)(r_esi+r_eax*8+0x4u));
    /* 0053725b: fcomp dword ptr [0x922f18] */ fx_compare(ST(0), R_F32((u32)(0x922f18u))); FPOP();
    /* 00537261: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00537263: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00537264: jae 0x537272 */ if (!fC) goto L_00537272;
L_00537266:; BB(0x00537266);
    /* 00537266: fld dword ptr [0x922f18] */ FPUSH(R_F32((u32)(0x922f18u)));
    /* 0053726c: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 00537270: jmp 0x5372ab */ goto L_005372ab;
L_00537272:; BB(0x00537272);
    /* 00537272: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 00537276: mov ecx, dword ptr [esi + 4] */ r_ecx = R32((u32)(r_esi+0x4u));
    /* 00537279: lea edx, [ecx - 1] */ r_edx = (u32)(r_ecx+0xffffffffu);
    /* 0053727c: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
    /* 00537280: fild dword ptr [esp + 0x30] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x30u)));
    /* 00537284: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00537287: fadd dword ptr [edx*4 + 0x922e58] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x922e58u));
    /* 0053728e: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00537290: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00537292: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00537293: jae 0x5372ab */ if (!fC) goto L_005372ab;
L_00537295:; BB(0x00537295);
    /* 00537295: mov dword ptr [esp + 0x30], ecx */ W32((u32)(r_esp+0x30u), r_ecx);
    /* 00537299: fild dword ptr [esp + 0x30] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x30u)));
    /* 0053729d: shr ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 005372a0: fadd dword ptr [ecx*4 + 0x922e58] */ ST(0) = ST(0) + R_F32((u32)(r_ecx*4+0x922e58u));
    /* 005372a7: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
L_005372ab:; BB(0x005372ab);
    /* 005372ab: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x5372b0u); f_0082fa9c();
    /* 005372b0: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 005372b4: mov eax, dword ptr [edi + 0x34] */ r_eax = R32((u32)(r_edi+0x34u));
    /* 005372b7: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 005372bb: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 005372be: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 005372c2: call 0x83046c */ r_esp -= 4; W32(r_esp, 0x5372c7u); f_0083046c();
    /* 005372c7: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x5372ccu); f_0082faac();
    /* 005372cc: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x5372d1u); f_0082da80();
    /* 005372d1: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x5372d6u); f_0082dab0();
L_005372d6:; BB(0x005372d6);
    /* 005372d6: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005372d9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005372da: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005372db: ret  */ FN_RET(0x00537184); r_esp += 4; return;
}

void f_005372dc(void) /* sub_5372DC */
{
    FN_ENTER(0x005372dc);
    /* 005372dc: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 005372e0: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005372e3: ja 0x537383 */ if ((!fC&&!fZ)) goto L_00537383;
L_005372e9:; BB(0x005372e9);
    /* 005372e9: mov eax, dword ptr [eax*4 + 0x922df4] */ r_eax = R32((u32)(r_eax*4+0x922df4u));
    /* 005372f0: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_00537383:; BB(0x00537383);
    /* 00537383: ret 8 */ FN_RET(0x005372dc); r_esp += 12; return;
}

void f_005372f2(void)
{
    FN_ENTER(0x005372f2);
    /* 005372f2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005372f6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005372f7: call 0x537388 */ r_esp -= 4; W32(r_esp, 0x5372fcu); f_00537388();
    /* 005372fc: jmp 0x537383 */ goto L_00537383;
L_00537383:; BB(0x00537383);
    /* 00537383: ret 8 */ FN_RET(0x005372f2); r_esp += 12; return;
}

void f_00537301(void)
{
    FN_ENTER(0x00537301);
    /* 00537301: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00537305: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00537306: call 0x5374cc */ r_esp -= 4; W32(r_esp, 0x53730bu); f_005374cc();
    /* 0053730b: jmp 0x537383 */ goto L_00537383;
L_00537383:; BB(0x00537383);
    /* 00537383: ret 8 */ FN_RET(0x00537301); r_esp += 12; return;
}

void f_0053730d(void)
{
    FN_ENTER(0x0053730d);
    /* 0053730d: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00537311: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00537312: call 0x5375f4 */ r_esp -= 4; W32(r_esp, 0x537317u); f_005375f4();
    /* 00537317: jmp 0x537383 */ goto L_00537383;
L_00537383:; BB(0x00537383);
    /* 00537383: ret 8 */ FN_RET(0x0053730d); r_esp += 12; return;
}

void f_00537319(void)
{
    FN_ENTER(0x00537319);
    /* 00537319: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0053731d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053731e: call 0x5376c4 */ r_esp -= 4; W32(r_esp, 0x537323u); f_005376c4();
    /* 00537323: jmp 0x537383 */ goto L_00537383;
L_00537383:; BB(0x00537383);
    /* 00537383: ret 8 */ FN_RET(0x00537319); r_esp += 12; return;
}

void f_00537325(void)
{
    FN_ENTER(0x00537325);
    /* 00537325: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00537329: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053732a: call 0x537844 */ r_esp -= 4; W32(r_esp, 0x53732fu); f_00537844();
    /* 0053732f: jmp 0x537383 */ goto L_00537383;
L_00537383:; BB(0x00537383);
    /* 00537383: ret 8 */ FN_RET(0x00537325); r_esp += 12; return;
}

void f_00537331(void)
{
    FN_ENTER(0x00537331);
    /* 00537331: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00537335: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00537336: call 0x5379ec */ r_esp -= 4; W32(r_esp, 0x53733bu); f_005379ec();
    /* 0053733b: jmp 0x537383 */ goto L_00537383;
L_00537383:; BB(0x00537383);
    /* 00537383: ret 8 */ FN_RET(0x00537331); r_esp += 12; return;
}

void f_0053733d(void)
{
    FN_ENTER(0x0053733d);
    /* 0053733d: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00537341: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00537342: call 0x537e64 */ r_esp -= 4; W32(r_esp, 0x537347u); f_00537e64();
    /* 00537347: jmp 0x537383 */ goto L_00537383;
L_00537383:; BB(0x00537383);
    /* 00537383: ret 8 */ FN_RET(0x0053733d); r_esp += 12; return;
}

void f_00537349(void)
{
    FN_ENTER(0x00537349);
    /* 00537349: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0053734d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053734e: call 0x5382d8 */ r_esp -= 4; W32(r_esp, 0x537353u); f_005382d8();
    /* 00537353: jmp 0x537383 */ goto L_00537383;
L_00537383:; BB(0x00537383);
    /* 00537383: ret 8 */ FN_RET(0x00537349); r_esp += 12; return;
}

void f_00537355(void)
{
    FN_ENTER(0x00537355);
    /* 00537355: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00537359: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053735a: call 0x5389ec */ r_esp -= 4; W32(r_esp, 0x53735fu); f_005389ec();
    /* 0053735f: jmp 0x537383 */ goto L_00537383;
L_00537383:; BB(0x00537383);
    /* 00537383: ret 8 */ FN_RET(0x00537355); r_esp += 12; return;
}

void f_00537361(void)
{
    FN_ENTER(0x00537361);
    /* 00537361: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00537365: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00537366: call 0x538c4c */ r_esp -= 4; W32(r_esp, 0x53736bu); f_00538c4c();
    /* 0053736b: jmp 0x537383 */ goto L_00537383;
L_00537383:; BB(0x00537383);
    /* 00537383: ret 8 */ FN_RET(0x00537361); r_esp += 12; return;
}

void f_0053736d(void)
{
    FN_ENTER(0x0053736d);
    /* 0053736d: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00537371: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00537372: call 0x538d18 */ r_esp -= 4; W32(r_esp, 0x537377u); f_00538d18();
    /* 00537377: jmp 0x537383 */ goto L_00537383;
L_00537383:; BB(0x00537383);
    /* 00537383: ret 8 */ FN_RET(0x0053736d); r_esp += 12; return;
}

void f_00537379(void)
{
    FN_ENTER(0x00537379);
    /* 00537379: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0053737d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053737e: call 0x59adf0 */ r_esp -= 4; W32(r_esp, 0x537383u); f_0059adf0();
    /* 00537383: ret 8 */ FN_RET(0x00537379); r_esp += 12; return;
}

void f_00537388(void) /* sub_537388 */
{
    FN_ENTER(0x00537388);
    /* 00537388: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00537389: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053738a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0053738b: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0053738d: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 00537391: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x537396u); f_00807ac0();
    /* 00537396: mov ebx, eax */ r_ebx = r_eax;
    /* 00537398: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053739b: je 0x537404 */ if (fZ) goto L_00537404;
L_0053739d:; BB(0x0053739d);
    /* 0053739d: cmp edi, 3 */ {  u32 a = r_edi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005373a0: je 0x5373fe */ if (fZ) goto L_005373fe;
L_005373a2:; BB(0x005373a2);
    /* 005373a2: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005373a4: jne 0x5373fe */ if (!fZ) goto L_005373fe;
L_005373a6:; BB(0x005373a6);
    /* 005373a6: mov eax, dword ptr [ebp + 0x4cc] */ r_eax = R32((u32)(r_ebp+0x4ccu));
    /* 005373ac: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005373ae: jne 0x5373fe */ if (!fZ) goto L_005373fe;
L_005373b0:; BB(0x005373b0);
    /* 005373b0: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005373b2: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x5373b7u); f_007aa094();
    /* 005373b7: mov eax, dword ptr [ebp + 0x3e0] */ r_eax = R32((u32)(r_ebp+0x3e0u));
    /* 005373bd: lea ecx, [ebp + 0x3e0] */ r_ecx = (u32)(r_ebp+0x3e0u);
    /* 005373c3: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x5373c6u); call_ind(t); }
    /* 005373c6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005373c8: je 0x5373fe */ if (fZ) goto L_005373fe;
L_005373ca:; BB(0x005373ca);
    /* 005373ca: mov eax, dword ptr [ebp + 0x3c8] */ r_eax = R32((u32)(r_ebp+0x3c8u));
    /* 005373d0: mov dword ptr [ebp + 0x4cc], 4 */ W32((u32)(r_ebp+0x4ccu), 0x4u);
    /* 005373da: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005373dd: mov dword ptr [ebp + 0x3c8], eax */ W32((u32)(r_ebp+0x3c8u), r_eax);
    /* 005373e3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005373e5: lea edx, [ebp + 0x38] */ r_edx = (u32)(r_ebp+0x38u);
    /* 005373e8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005373e9: call 0x578658 */ r_esp -= 4; W32(r_esp, 0x5373eeu); f_00578658();
    /* 005373ee: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005373f1: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 005373f5: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005373fa: mov word ptr [ebp + 8], ax */ W16((u32)(r_ebp+0x8u), (u16)r_eax);
L_005373fe:; BB(0x005373fe);
    /* 005373fe: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005373ff: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00537400: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00537401: ret 4 */ FN_RET(0x00537388); r_esp += 8; return;
L_00537404:; BB(0x00537404);
    /* 00537404: mov edi, dword ptr [ebp] */ r_edi = R32((u32)(r_ebp));
    /* 00537407: mov edx, 7 */ r_edx = 0x7u;
    /* 0053740c: mov word ptr [ebp + 0xb8], dx */ W16((u32)(r_ebp+0xb8u), (u16)r_edx);
    /* 00537413: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00537415: call dword ptr [edi + 0x188] */ { u32 t = R32((u32)(r_edi+0x188u)); r_esp -= 4; W32(r_esp, 0x53741bu); call_ind(t); }
    /* 0053741b: mov edx, dword ptr [ebp + 0x3c8] */ r_edx = R32((u32)(r_ebp+0x3c8u));
    /* 00537421: and edx, 0xfffffff8 */ {  u32 a = r_edx; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00537424: mov dword ptr [ebp + 0x3c8], edx */ W32((u32)(r_ebp+0x3c8u), r_edx);
    /* 0053742a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0053742c: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x537431u); f_007aa094();
    /* 00537431: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00537433: call 0x51f894 */ r_esp -= 4; W32(r_esp, 0x537438u); f_0051f894();
    /* 00537438: mov ecx, dword ptr [ebp + 0x400] */ r_ecx = R32((u32)(r_ebp+0x400u));
    /* 0053743e: call 0x539fb0 */ r_esp -= 4; W32(r_esp, 0x537443u); f_00539fb0();
    /* 00537443: fild dword ptr [ebp + 0x3d4] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x3d4u)));
    /* 00537449: fstp dword ptr [ebp + 0x4d8] */ W_F32((u32)(r_ebp+0x4d8u), ST(0)); FPOP();
    /* 0053744f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00537451: mov dword ptr [ebp + 0x4cc], edx */ W32((u32)(r_ebp+0x4ccu), r_edx);
    /* 00537457: mov dword ptr [ebp + 0x4c8], edx */ W32((u32)(r_ebp+0x4c8u), r_edx);
    /* 0053745d: lea edi, [ebp + 0x300] */ r_edi = (u32)(r_ebp+0x300u);
    /* 00537463: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00537464: call 0x5787fc */ r_esp -= 4; W32(r_esp, 0x537469u); f_005787fc();
    /* 00537469: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0053746a: lea ecx, [ebp + 0x3e0] */ r_ecx = (u32)(r_ebp+0x3e0u);
    /* 00537470: call 0x512458 */ r_esp -= 4; W32(r_esp, 0x537475u); f_00512458();
    /* 00537475: mov edx, dword ptr [ebp + 0x3c8] */ r_edx = R32((u32)(r_ebp+0x3c8u));
    /* 0053747b: or edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0053747e: mov dword ptr [ebp + 0x3c8], edx */ W32((u32)(r_ebp+0x3c8u), r_edx);
    /* 00537484: cmp ebx, 0x13 */ {  u32 a = r_ebx; u32 b = 0x13u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00537487: je 0x5374b1 */ if (fZ) goto L_005374b1;
L_00537489:; BB(0x00537489);
    /* 00537489: cmp ebx, 0x14 */ {  u32 a = r_ebx; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053748c: je 0x5374b1 */ if (fZ) goto L_005374b1;
L_0053748e:; BB(0x0053748e);
    /* 0053748e: push 0x1f0 */ { u32 v = 0x1f0u; r_esp -= 4; W32(r_esp, v); }
    /* 00537493: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00537495: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x53749au); f_007879b8();
    /* 0053749a: add ebp, 0x38 */ {  u32 a = r_ebp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0053749d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0053749f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005374a0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005374a1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005374a2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005374a3: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5374a8u); f_00814298();
    /* 005374a8: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005374ab: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005374ac: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005374ad: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005374ae: ret 4 */ FN_RET(0x00537388); r_esp += 8; return;
L_005374b1:; BB(0x005374b1);
    /* 005374b1: add ebp, 0x38 */ {  u32 a = r_ebp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005374b4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005374b6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005374b7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005374b8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005374b9: push 0x1c5 */ { u32 v = 0x1c5u; r_esp -= 4; W32(r_esp, v); }
    /* 005374be: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5374c3u); f_00814298();
    /* 005374c3: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005374c6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005374c7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005374c8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005374c9: ret 4 */ FN_RET(0x00537388); r_esp += 8; return;
}

void f_00537460(void)
{
    FN_ENTER(0x00537460);
    /* 00537460: add eax, dword ptr [eax] */ {  u32 a = r_eax; u32 b = R32((u32)(r_eax)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00537462: add byte ptr [edi - 0x18], dl */ { u32 ad = (u32)(r_edi+0xffffffe8u);  u32 a = R8(ad); u32 b = (u8)r_edx; u32 r = (a + b) & 0xffu; W8(ad, r); fC = (r < a); }
    /* 00537465: xchg ebx, eax */ { u32 x = r_ebx; u32 y = r_eax; r_ebx = y; r_eax = x; }
    /* 00537466: adc eax, dword ptr [eax + eax] */ { u32 c = fC; u32 a = r_eax; u32 b = R32((u32)(r_eax+r_eax)); u32 r = (a + b + c) & 0xffffffffu; r_eax = r;  }
    /* 00537469: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0053746a: lea ecx, [ebp + 0x3e0] */ r_ecx = (u32)(r_ebp+0x3e0u);
    /* 00537470: call 0x512458 */ r_esp -= 4; W32(r_esp, 0x537475u); f_00512458();
    /* 00537475: mov edx, dword ptr [ebp + 0x3c8] */ r_edx = R32((u32)(r_ebp+0x3c8u));
    /* 0053747b: or edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0053747e: mov dword ptr [ebp + 0x3c8], edx */ W32((u32)(r_ebp+0x3c8u), r_edx);
    /* 00537484: cmp ebx, 0x13 */ {  u32 a = r_ebx; u32 b = 0x13u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00537487: je 0x5374b1 */ if (fZ) goto L_005374b1;
L_00537489:; BB(0x00537489);
    /* 00537489: cmp ebx, 0x14 */ {  u32 a = r_ebx; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053748c: je 0x5374b1 */ if (fZ) goto L_005374b1;
L_0053748e:; BB(0x0053748e);
    /* 0053748e: push 0x1f0 */ { u32 v = 0x1f0u; r_esp -= 4; W32(r_esp, v); }
    /* 00537493: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00537495: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x53749au); f_007879b8();
    /* 0053749a: add ebp, 0x38 */ {  u32 a = r_ebp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0053749d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0053749f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005374a0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005374a1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005374a2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005374a3: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5374a8u); f_00814298();
    /* 005374a8: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005374ab: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005374ac: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005374ad: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005374ae: ret 4 */ FN_RET(0x00537460); r_esp += 8; return;
L_005374b1:; BB(0x005374b1);
    /* 005374b1: add ebp, 0x38 */ {  u32 a = r_ebp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005374b4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005374b6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005374b7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005374b8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005374b9: push 0x1c5 */ { u32 v = 0x1c5u; r_esp -= 4; W32(r_esp, v); }
    /* 005374be: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5374c3u); f_00814298();
    /* 005374c3: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005374c6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005374c7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005374c8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005374c9: ret 4 */ FN_RET(0x00537460); r_esp += 8; return;
}

void f_005374cc(void) /* sub_5374CC */
{
    FN_ENTER(0x005374cc);
    /* 005374cc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005374cd: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005374d0: mov edi, ecx */ r_edi = r_ecx;
    /* 005374d2: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 005374d6: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005374d9: je 0x537598 */ if (fZ) goto L_00537598;
L_005374df:; BB(0x005374df);
    /* 005374df: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005374e2: je 0x53757a */ if (fZ) goto L_0053757a;
L_005374e8:; BB(0x005374e8);
    /* 005374e8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005374ea: jne 0x537560 */ if (!fZ) goto L_00537560;
L_005374ec:; BB(0x005374ec);
    /* 005374ec: mov ecx, edi */ r_ecx = r_edi;
    /* 005374ee: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x5374f3u); f_007aa094();
    /* 005374f3: mov eax, dword ptr [edi + 0x30c] */ r_eax = R32((u32)(r_edi+0x30cu));
    /* 005374f9: mov edx, dword ptr [edi + 0x310] */ r_edx = R32((u32)(r_edi+0x310u));
    /* 005374ff: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00537502: mov eax, dword ptr [edi + 0x314] */ r_eax = R32((u32)(r_edi+0x314u));
    /* 00537508: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0053750c: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00537510: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00537513: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00537514: call 0x7828e4 */ r_esp -= 4; W32(r_esp, 0x537519u); f_007828e4();
    /* 00537519: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0053751a: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053751d: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 00537521: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 00537525: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00537529: mov ecx, edi */ r_ecx = r_edi;
    /* 0053752b: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0053752e: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00537532: call 0x5209d4 */ r_esp -= 4; W32(r_esp, 0x537537u); f_005209d4();
    /* 00537537: fld dword ptr [0x922f14] */ FPUSH(R_F32((u32)(0x922f14u)));
    /* 0053753d: fld dword ptr [edi + 0x30c] */ FPUSH(R_F32((u32)(r_edi+0x30cu)));
    /* 00537543: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00537545: fld dword ptr [edi + 0x314] */ FPUSH(R_F32((u32)(r_edi+0x314u)));
    /* 0053754b: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0053754d: fstp dword ptr [edi + 0x30c] */ W_F32((u32)(r_edi+0x30cu), ST(0)); FPOP();
    /* 00537553: fstp dword ptr [edi + 0x314] */ W_F32((u32)(r_edi+0x314u), ST(0)); FPOP();
    /* 00537559: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0053755c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0053755d: ret 4 */ FN_RET(0x005374cc); r_esp += 8; return;
L_00537560:; BB(0x00537560);
    /* 00537560: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00537563: jne 0x537591 */ if (!fZ) goto L_00537591;
L_00537565:; BB(0x00537565);
    /* 00537565: mov ecx, edi */ r_ecx = r_edi;
    /* 00537567: call 0x51f81c */ r_esp -= 4; W32(r_esp, 0x53756cu); f_0051f81c();
    /* 0053756c: mov ecx, edi */ r_ecx = r_edi;
    /* 0053756e: call 0x520be8 */ r_esp -= 4; W32(r_esp, 0x537573u); f_00520be8();
    /* 00537573: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00537576: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00537577: ret 4 */ FN_RET(0x005374cc); r_esp += 8; return;
L_0053757a:; BB(0x0053757a);
    /* 0053757a: mov eax, dword ptr [edi + 0xb0] */ r_eax = R32((u32)(r_edi+0xb0u));
    /* 00537580: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00537582: je 0x537591 */ if (fZ) goto L_00537591;
L_00537584:; BB(0x00537584);
    /* 00537584: push dword ptr [edi + 0x380] */ { u32 v = R32((u32)(r_edi+0x380u)); r_esp -= 4; W32(r_esp, v); }
    /* 0053758a: mov ecx, edi */ r_ecx = r_edi;
    /* 0053758c: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x537591u); f_0051f62c();
L_00537591:; BB(0x00537591);
    /* 00537591: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00537594: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00537595: ret 4 */ FN_RET(0x005374cc); r_esp += 8; return;
L_00537598:; BB(0x00537598);
    /* 00537598: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 0053759a: mov eax, 6 */ r_eax = 0x6u;
    /* 0053759f: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 005375a6: mov ecx, edi */ r_ecx = r_edi;
    /* 005375a8: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x5375aeu); call_ind(t); }
    /* 005375ae: mov eax, dword ptr [edi + 0x3c8] */ r_eax = R32((u32)(r_edi+0x3c8u));
    /* 005375b4: and eax, 0xfffffff8 */ {  u32 a = r_eax; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005375b7: mov dword ptr [edi + 0x3c8], eax */ W32((u32)(r_edi+0x3c8u), r_eax);
    /* 005375bd: mov ecx, edi */ r_ecx = r_edi;
    /* 005375bf: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x5375c4u); f_007aa094();
    /* 005375c4: push 0x1f1 */ { u32 v = 0x1f1u; r_esp -= 4; W32(r_esp, v); }
    /* 005375c9: mov ecx, edi */ r_ecx = r_edi;
    /* 005375cb: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x5375d0u); f_007879b8();
    /* 005375d0: mov ecx, eax */ r_ecx = r_eax;
    /* 005375d2: lea eax, [edi + 0x38] */ r_eax = (u32)(r_edi+0x38u);
    /* 005375d5: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005375d7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005375d8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005375d9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005375da: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005375db: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5375e0u); f_00814298();
    /* 005375e0: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005375e3: mov ecx, edi */ r_ecx = r_edi;
    /* 005375e5: call 0x520bdc */ r_esp -= 4; W32(r_esp, 0x5375eau); f_00520bdc();
    /* 005375ea: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005375ed: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005375ee: ret 4 */ FN_RET(0x005374cc); r_esp += 8; return;
}

void f_005375f4(void) /* sub_5375F4 */
{
    FN_ENTER(0x005375f4);
    /* 005375f4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005375f5: mov esi, ecx */ r_esi = r_ecx;
    /* 005375f7: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005375fb: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005375fe: je 0x537677 */ if (fZ) goto L_00537677;
L_00537600:; BB(0x00537600);
    /* 00537600: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00537603: je 0x53765f */ if (fZ) goto L_0053765f;
L_00537605:; BB(0x00537605);
    /* 00537605: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00537607: jne 0x537647 */ if (!fZ) goto L_00537647;
L_00537609:; BB(0x00537609);
    /* 00537609: mov ecx, esi */ r_ecx = r_esi;
    /* 0053760b: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x537610u); f_007aa094();
    /* 00537610: mov eax, dword ptr [esi + 0xb0] */ r_eax = R32((u32)(r_esi+0xb0u));
    /* 00537616: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00537618: jne 0x537624 */ if (!fZ) goto L_00537624;
L_0053761a:; BB(0x0053761a);
    /* 0053761a: mov dword ptr [esi + 0xc8], 0x3fcccccd */ W32((u32)(r_esi+0xc8u), 0x3fcccccdu);
L_00537624:; BB(0x00537624);
    /* 00537624: mov eax, dword ptr [esi + 0x60] */ r_eax = R32((u32)(r_esi+0x60u));
    /* 00537627: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 00537629: add eax, 0x280 */ {  u32 a = r_eax; u32 b = 0x280u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0053762e: mov dword ptr [esi + 0x60], eax */ W32((u32)(r_esi+0x60u), r_eax);
    /* 00537631: mov ecx, esi */ r_ecx = r_esi;
    /* 00537633: call dword ptr [edx + 0x1a0] */ { u32 t = R32((u32)(r_edx+0x1a0u)); r_esp -= 4; W32(r_esp, 0x537639u); call_ind(t); }
    /* 00537639: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0053763b: mov ecx, esi */ r_ecx = r_esi;
    /* 0053763d: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x537643u); call_ind(t); }
    /* 00537643: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00537644: ret 4 */ FN_RET(0x005375f4); r_esp += 8; return;
L_00537647:; BB(0x00537647);
    /* 00537647: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0053764a: jne 0x537673 */ if (!fZ) goto L_00537673;
L_0053764c:; BB(0x0053764c);
    /* 0053764c: mov eax, dword ptr [esi + 0x3c8] */ r_eax = R32((u32)(r_esi+0x3c8u));
    /* 00537652: and eax, 0xfffffffb */ {  u32 a = r_eax; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00537655: mov dword ptr [esi + 0x3c8], eax */ W32((u32)(r_esi+0x3c8u), r_eax);
    /* 0053765b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0053765c: ret 4 */ FN_RET(0x005375f4); r_esp += 8; return;
L_0053765f:; BB(0x0053765f);
    /* 0053765f: mov eax, dword ptr [esi + 0x60] */ r_eax = R32((u32)(r_esi+0x60u));
    /* 00537662: cmp eax, dword ptr [esi + 0x4d0] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+0x4d0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00537668: jl 0x537673 */ if ((fS!=fO)) goto L_00537673;
L_0053766a:; BB(0x0053766a);
    /* 0053766a: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0053766c: mov ecx, esi */ r_ecx = r_esi;
    /* 0053766e: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x537673u); f_0051f62c();
L_00537673:; BB(0x00537673);
    /* 00537673: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00537674: ret 4 */ FN_RET(0x005375f4); r_esp += 8; return;
L_00537677:; BB(0x00537677);
    /* 00537677: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 00537679: mov eax, 1 */ r_eax = 0x1u;
    /* 0053767e: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
    /* 00537685: mov ecx, esi */ r_ecx = r_esi;
    /* 00537687: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x53768du); call_ind(t); }
    /* 0053768d: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0053768f: mov eax, dword ptr [esi + 0x3c8] */ r_eax = R32((u32)(r_esi+0x3c8u));
    /* 00537695: and eax, 0xfffffffc */ {  u32 a = r_eax; u32 b = 0xfffffffcu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00537698: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0053769b: mov dword ptr [esi + 0x3c8], eax */ W32((u32)(r_esi+0x3c8u), r_eax);
    /* 005376a1: mov ecx, esi */ r_ecx = r_esi;
    /* 005376a3: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x5376a8u); f_0051f664();
    /* 005376a8: mov eax, dword ptr [esi + 0x60] */ r_eax = R32((u32)(r_esi+0x60u));
    /* 005376ab: mov dword ptr [esi + 0x4c8], 0 */ W32((u32)(r_esi+0x4c8u), 0x0u);
    /* 005376b5: add eax, 0x3800 */ {  u32 a = r_eax; u32 b = 0x3800u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005376ba: mov dword ptr [esi + 0x4d0], eax */ W32((u32)(r_esi+0x4d0u), r_eax);
    /* 005376c0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005376c1: ret 4 */ FN_RET(0x005375f4); r_esp += 8; return;
}

void f_005376c4(void) /* sub_5376C4 */
{
    FN_ENTER(0x005376c4);
    /* 005376c4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005376c5: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005376c7: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005376cb: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005376ce: je 0x5377db */ if (fZ) goto L_005377db;
L_005376d4:; BB(0x005376d4);
    /* 005376d4: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005376d7: je 0x5377a6 */ if (fZ) goto L_005377a6;
L_005376dd:; BB(0x005376dd);
    /* 005376dd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005376df: jne 0x5377ca */ if (!fZ) goto L_005377ca;
L_005376e5:; BB(0x005376e5);
    /* 005376e5: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005376e7: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x5376ecu); f_007aa094();
    /* 005376ec: mov eax, dword ptr [ebp + 0x4c8] */ r_eax = R32((u32)(r_ebp+0x4c8u));
    /* 005376f2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005376f4: jne 0x53776a */ if (!fZ) goto L_0053776a;
L_005376f6:; BB(0x005376f6);
    /* 005376f6: push 0x43c80000 */ { u32 v = 0x43c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 005376fb: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005376fd: call 0x520ea0 */ r_esp -= 4; W32(r_esp, 0x537702u); f_00520ea0();
    /* 00537702: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00537704: jne 0x537750 */ if (!fZ) goto L_00537750;
L_00537706:; BB(0x00537706);
    /* 00537706: mov eax, dword ptr [ebp + 0x4cc] */ r_eax = R32((u32)(r_ebp+0x4ccu));
    /* 0053770c: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0053770f: cmp eax, 0x3c */ {  u32 a = r_eax; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00537712: jg 0x53771c */ if ((!fZ&&fS==fO)) goto L_0053771c;
L_00537714:; BB(0x00537714);
    /* 00537714: mov dword ptr [ebp + 0x4cc], eax */ W32((u32)(r_ebp+0x4ccu), r_eax);
    /* 0053771a: jmp 0x53778c */ goto L_0053778c;
L_0053771c:; BB(0x0053771c);
    /* 0053771c: mov eax, dword ptr [ebp + 0x3e0] */ r_eax = R32((u32)(r_ebp+0x3e0u));
    /* 00537722: mov dword ptr [ebp + 0x4cc], 0 */ W32((u32)(r_ebp+0x4ccu), 0x0u);
    /* 0053772c: lea ecx, [ebp + 0x3e0] */ r_ecx = (u32)(r_ebp+0x3e0u);
    /* 00537732: mov dword ptr [ebp + 0x4c8], 1 */ W32((u32)(r_ebp+0x4c8u), 0x1u);
    /* 0053773c: call dword ptr [eax + 8] */ { u32 t = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, 0x53773fu); call_ind(t); }
    /* 0053773f: mov eax, dword ptr [ebp + 0x3c8] */ r_eax = R32((u32)(r_ebp+0x3c8u));
    /* 00537745: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00537748: mov dword ptr [ebp + 0x3c8], eax */ W32((u32)(r_ebp+0x3c8u), r_eax);
    /* 0053774e: jmp 0x53778c */ goto L_0053778c;
L_00537750:; BB(0x00537750);
    /* 00537750: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00537752: call 0x5213d8 */ r_esp -= 4; W32(r_esp, 0x537757u); f_005213d8();
    /* 00537757: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00537759: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x53775eu); f_00521410();
    /* 0053775e: mov dword ptr [ebp + 0x4c8], 2 */ W32((u32)(r_ebp+0x4c8u), 0x2u);
    /* 00537768: jmp 0x53778c */ goto L_0053778c;
L_0053776a:; BB(0x0053776a);
    /* 0053776a: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053776d: jne 0x53778c */ if (!fZ) goto L_0053778c;
L_0053776f:; BB(0x0053776f);
    /* 0053776f: mov eax, dword ptr [ebp + 0x3e0] */ r_eax = R32((u32)(r_ebp+0x3e0u));
    /* 00537775: lea ecx, [ebp + 0x3e0] */ r_ecx = (u32)(r_ebp+0x3e0u);
    /* 0053777b: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x53777eu); call_ind(t); }
    /* 0053777e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00537780: je 0x53778c */ if (fZ) goto L_0053778c;
L_00537782:; BB(0x00537782);
    /* 00537782: mov dword ptr [ebp + 0x4c8], 3 */ W32((u32)(r_ebp+0x4c8u), 0x3u);
L_0053778c:; BB(0x0053778c);
    /* 0053778c: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0053778f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00537791: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x537797u); call_ind(t); }
    /* 00537797: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0053779a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0053779c: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x5377a2u); call_ind(t); }
    /* 005377a2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005377a3: ret 4 */ FN_RET(0x005376c4); r_esp += 8; return;
L_005377a6:; BB(0x005377a6);
    /* 005377a6: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005377a8: call 0x53781c */ r_esp -= 4; W32(r_esp, 0x5377adu); f_0053781c();
    /* 005377ad: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005377af: jne 0x5377ca */ if (!fZ) goto L_005377ca;
L_005377b1:; BB(0x005377b1);
    /* 005377b1: mov eax, dword ptr [ebp + 0x4c8] */ r_eax = R32((u32)(r_ebp+0x4c8u));
    /* 005377b7: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005377ba: je 0x5377ce */ if (fZ) goto L_005377ce;
L_005377bc:; BB(0x005377bc);
    /* 005377bc: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005377bf: jne 0x5377ca */ if (!fZ) goto L_005377ca;
L_005377c1:; BB(0x005377c1);
    /* 005377c1: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005377c3: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005377c5: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5377cau); f_0051f62c();
L_005377ca:; BB(0x005377ca);
    /* 005377ca: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005377cb: ret 4 */ FN_RET(0x005376c4); r_esp += 8; return;
L_005377ce:; BB(0x005377ce);
    /* 005377ce: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005377d0: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005377d2: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5377d7u); f_0051f62c();
    /* 005377d7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005377d8: ret 4 */ FN_RET(0x005376c4); r_esp += 8; return;
L_005377db:; BB(0x005377db);
    /* 005377db: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 005377de: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005377e0: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 005377e7: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005377e9: call dword ptr [edx + 0x184] */ { u32 t = R32((u32)(r_edx+0x184u)); r_esp -= 4; W32(r_esp, 0x5377efu); call_ind(t); }
    /* 005377ef: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 005377f1: mov eax, dword ptr [ebp + 0x3c8] */ r_eax = R32((u32)(r_ebp+0x3c8u));
    /* 005377f7: and eax, 0xfffffff8 */ {  u32 a = r_eax; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005377fa: mov dword ptr [ebp + 0x3c8], eax */ W32((u32)(r_ebp+0x3c8u), r_eax);
    /* 00537800: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00537802: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x537807u); f_0051f664();
    /* 00537807: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00537809: mov dword ptr [ebp + 0x4c8], eax */ W32((u32)(r_ebp+0x4c8u), r_eax);
    /* 0053780f: mov dword ptr [ebp + 0x4cc], eax */ W32((u32)(r_ebp+0x4ccu), r_eax);
    /* 00537815: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00537816: ret 4 */ FN_RET(0x005376c4); r_esp += 8; return;
}

void f_0053781c(void) /* sub_53781C */
{
    FN_ENTER(0x0053781c);
    /* 0053781c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053781d: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0053781f: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00537822: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00537824: call dword ptr [eax + 0x194] */ { u32 t = R32((u32)(r_eax+0x194u)); r_esp -= 4; W32(r_esp, 0x53782au); call_ind(t); }
    /* 0053782a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053782c: je 0x53783e */ if (fZ) goto L_0053783e;
L_0053782e:; BB(0x0053782e);
    /* 0053782e: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 00537830: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00537832: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x537837u); f_0051f62c();
    /* 00537837: mov eax, 1 */ r_eax = 0x1u;
    /* 0053783c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053783d: ret  */ FN_RET(0x0053781c); r_esp += 4; return;
L_0053783e:; BB(0x0053783e);
    /* 0053783e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00537840: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00537841: ret  */ FN_RET(0x0053781c); r_esp += 4; return;
}

void f_00537844(void) /* sub_537844 */
{
    FN_ENTER(0x00537844);
    /* 00537844: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00537845: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00537847: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0053784b: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053784e: je 0x537980 */ if (fZ) goto L_00537980;
L_00537854:; BB(0x00537854);
    /* 00537854: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00537857: je 0x537952 */ if (fZ) goto L_00537952;
L_0053785d:; BB(0x0053785d);
    /* 0053785d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053785f: jne 0x537918 */ if (!fZ) goto L_00537918;
L_00537865:; BB(0x00537865);
    /* 00537865: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00537867: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x53786cu); f_007aa094();
    /* 0053786c: mov edx, dword ptr [ebp + 0x4c8] */ r_edx = R32((u32)(r_ebp+0x4c8u));
    /* 00537872: mov eax, dword ptr [ebp + 0x4d0] */ r_eax = R32((u32)(r_ebp+0x4d0u));
    /* 00537878: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0053787b: mov dword ptr [ebp + 0x4c8], edx */ W32((u32)(r_ebp+0x4c8u), r_edx);
    /* 00537881: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00537883: jle 0x5378b3 */ if ((fZ||fS!=fO)) goto L_005378b3;
L_00537885:; BB(0x00537885);
    /* 00537885: add eax, -0xb */ {  u32 a = r_eax; u32 b = 0xfffffff5u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00537888: mov dword ptr [ebp + 0x4d0], eax */ W32((u32)(r_ebp+0x4d0u), r_eax);
    /* 0053788e: mov edx, 0x100 */ r_edx = 0x100u;
    /* 00537893: cmp eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00537898: jl 0x53789c */ if ((fS!=fO)) goto L_0053789c;
L_0053789a:; BB(0x0053789a);
    /* 0053789a: mov eax, edx */ r_eax = r_edx;
L_0053789c:; BB(0x0053789c);
    /* 0053789c: mov edx, dword ptr [ebp + 0x4c4] */ r_edx = R32((u32)(r_ebp+0x4c4u));
    /* 005378a2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005378a4: jle 0x53796d */ if ((fZ||fS!=fO)) goto L_0053796d;
L_005378aa:; BB(0x005378aa);
    /* 005378aa: mov edx, dword ptr [ebp + 0x4c8] */ r_edx = R32((u32)(r_ebp+0x4c8u));
    /* 005378b0: add dword ptr [ebp + 0x60], eax */ { u32 ad = (u32)(r_ebp+0x60u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_005378b3:; BB(0x005378b3);
    /* 005378b3: and edx, 0x1f */ {  u32 a = r_edx; u32 b = 0x1fu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005378b6: cmp edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005378b9: jge 0x5378c7 */ if ((fS==fO)) goto L_005378c7;
L_005378bb:; BB(0x005378bb);
    /* 005378bb: mov dword ptr [ebp + 0x3d0], 0xff303030 */ W32((u32)(r_ebp+0x3d0u), 0xff303030u);
    /* 005378c5: jmp 0x5378d1 */ goto L_005378d1;
L_005378c7:; BB(0x005378c7);
    /* 005378c7: mov dword ptr [ebp + 0x3d0], 0xffffffff */ W32((u32)(r_ebp+0x3d0u), 0xffffffffu);
L_005378d1:; BB(0x005378d1);
    /* 005378d1: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 005378d4: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005378d6: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x5378dcu); call_ind(t); }
    /* 005378dc: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 005378df: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005378e1: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x5378e7u); call_ind(t); }
    /* 005378e7: push 0x1e9 */ { u32 v = 0x1e9u; r_esp -= 4; W32(r_esp, v); }
    /* 005378ec: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005378ee: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x5378f3u); f_007879b8();
    /* 005378f3: mov ecx, eax */ r_ecx = r_eax;
    /* 005378f5: lea eax, [ebp + 0x38] */ r_eax = (u32)(r_ebp+0x38u);
    /* 005378f8: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005378fa: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005378fb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005378fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005378fd: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005378fe: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005378ff: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x537904u); f_008144b0();
    /* 00537904: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00537906: push 0x400 */ { u32 v = 0x400u; r_esp -= 4; W32(r_esp, v); }
    /* 0053790b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053790c: call 0x814664 */ r_esp -= 4; W32(r_esp, 0x537911u); f_00814664();
    /* 00537911: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00537914: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00537915: ret 4 */ FN_RET(0x00537844); r_esp += 8; return;
L_00537918:; BB(0x00537918);
    /* 00537918: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0053791b: jne 0x537969 */ if (!fZ) goto L_00537969;
L_0053791d:; BB(0x0053791d);
    /* 0053791d: mov eax, dword ptr [ebp + 0x3c8] */ r_eax = R32((u32)(r_ebp+0x3c8u));
    /* 00537923: add dword ptr [ebp + 0x3dc], 1 */ { u32 ad = (u32)(r_ebp+0x3dcu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0053792a: and eax, 0xfffffffb */ {  u32 a = r_eax; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0053792d: mov dword ptr [ebp + 0x3c8], eax */ W32((u32)(r_ebp+0x3c8u), r_eax);
    /* 00537933: mov dword ptr [ebp + 0x3d0], 0xffffffff */ W32((u32)(r_ebp+0x3d0u), 0xffffffffu);
    /* 0053793d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0053793f: mov dword ptr [ebp + 0x3d4], 0xc */ W32((u32)(r_ebp+0x3d4u), 0xcu);
    /* 00537949: call 0x5394d0 */ r_esp -= 4; W32(r_esp, 0x53794eu); f_005394d0();
    /* 0053794e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053794f: ret 4 */ FN_RET(0x00537844); r_esp += 8; return;
L_00537952:; BB(0x00537952);
    /* 00537952: mov eax, dword ptr [ebp + 0x4c8] */ r_eax = R32((u32)(r_ebp+0x4c8u));
    /* 00537958: cmp eax, dword ptr [ebp + 0x4cc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x4ccu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0053795e: jl 0x537969 */ if ((fS!=fO)) goto L_00537969;
L_00537960:; BB(0x00537960);
    /* 00537960: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00537962: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00537964: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x537969u); f_0051f62c();
L_00537969:; BB(0x00537969);
    /* 00537969: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053796a: ret 4 */ FN_RET(0x00537844); r_esp += 8; return;
L_0053796d:; BB(0x0053796d);
    /* 0053796d: mov edx, dword ptr [ebp + 0x60] */ r_edx = R32((u32)(r_ebp+0x60u));
    /* 00537970: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00537972: mov dword ptr [ebp + 0x60], edx */ W32((u32)(r_ebp+0x60u), r_edx);
    /* 00537975: mov edx, dword ptr [ebp + 0x4c8] */ r_edx = R32((u32)(r_ebp+0x4c8u));
    /* 0053797b: jmp 0x5378b3 */ goto L_005378b3;
L_00537980:; BB(0x00537980);
    /* 00537980: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00537983: mov eax, 5 */ r_eax = 0x5u;
    /* 00537988: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 0053798f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00537991: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x537997u); call_ind(t); }
    /* 00537997: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00537999: mov eax, dword ptr [ebp + 0x3c8] */ r_eax = R32((u32)(r_ebp+0x3c8u));
    /* 0053799f: and eax, 0xfffffffc */ {  u32 a = r_eax; u32 b = 0xfffffffcu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005379a2: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005379a5: mov dword ptr [ebp + 0x3c8], eax */ W32((u32)(r_ebp+0x3c8u), r_eax);
    /* 005379ab: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005379ad: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x5379b2u); f_0051f664();
    /* 005379b2: mov ecx, dword ptr [ebp + 0x3dc] */ r_ecx = R32((u32)(r_ebp+0x3dcu));
    /* 005379b8: mov dword ptr [ebp + 0x4d0], 0x300 */ W32((u32)(r_ebp+0x4d0u), 0x300u);
    /* 005379c2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005379c4: mov dword ptr [ebp + 0x4c8], eax */ W32((u32)(r_ebp+0x4c8u), r_eax);
    /* 005379ca: lea edx, [ecx + ecx] */ r_edx = (u32)(r_ecx+r_ecx);
    /* 005379cd: lea edx, [edx + ecx*8] */ r_edx = (u32)(r_edx+r_ecx*8);
    /* 005379d0: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 005379d3: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005379d5: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005379d7: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005379d9: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005379db: mov dword ptr [ebp + 0x4cc], ecx */ W32((u32)(r_ebp+0x4ccu), r_ecx);
    /* 005379e1: mov dword ptr [ebp + 0x3d4], eax */ W32((u32)(r_ebp+0x3d4u), r_eax);
    /* 005379e7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005379e8: ret 4 */ FN_RET(0x00537844); r_esp += 8; return;
}

void f_00537939(void)
{
    FN_ENTER(0x00537939);
}

void f_005379ec(void) /* sub_5379EC */
{
    FN_ENTER(0x005379ec);
    /* 005379ec: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005379ed: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005379ee: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005379ef: sub esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005379f2: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005379f4: mov eax, dword ptr [esp + 0x58] */ r_eax = R32((u32)(r_esp+0x58u));
    /* 005379f8: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005379fb: je 0x537da5 */ if (fZ) goto L_00537da5;
L_00537a01:; BB(0x00537a01);
    /* 00537a01: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00537a04: je 0x537cd9 */ if (fZ) goto L_00537cd9;
L_00537a0a:; BB(0x00537a0a);
    /* 00537a0a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00537a0c: jne 0x537d33 */ if (!fZ) goto L_00537d33;
L_00537a12:; BB(0x00537a12);
    /* 00537a12: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00537a14: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x537a19u); f_007aa094();
    /* 00537a19: mov eax, dword ptr [ebx + 0x4c8] */ r_eax = R32((u32)(r_ebx+0x4c8u));
    /* 00537a1f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00537a21: je 0x537be5 */ if (fZ) goto L_00537be5;
L_00537a27:; BB(0x00537a27);
    /* 00537a27: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00537a2a: jne 0x537ba9 */ if (!fZ) goto L_00537ba9;
L_00537a30:; BB(0x00537a30);
    /* 00537a30: push 0x41400000 */ { u32 v = 0x41400000u; r_esp -= 4; W32(r_esp, v); }
    /* 00537a35: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00537a37: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x537a3cu); f_007aaa30();
    /* 00537a3c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00537a3e: je 0x537a5d */ if (fZ) goto L_00537a5d;
L_00537a40:; BB(0x00537a40);
    /* 00537a40: push 0x1ed */ { u32 v = 0x1edu; r_esp -= 4; W32(r_esp, v); }
    /* 00537a45: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00537a47: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x537a4cu); f_007879b8();
    /* 00537a4c: lea esi, [ebx + 0x38] */ r_esi = (u32)(r_ebx+0x38u);
    /* 00537a4f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00537a51: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00537a52: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00537a53: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00537a54: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00537a55: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x537a5au); f_00814298();
    /* 00537a5a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00537a5d:; BB(0x00537a5d);
    /* 00537a5d: push 0x41800000 */ { u32 v = 0x41800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00537a62: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00537a64: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x537a69u); f_007aaa30();
    /* 00537a69: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00537a6b: je 0x537b0b */ if (fZ) goto L_00537b0b;
L_00537a71:; BB(0x00537a71);
    /* 00537a71: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00537a73: call 0x521324 */ r_esp -= 4; W32(r_esp, 0x537a78u); f_00521324();
    /* 00537a78: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00537a7a: je 0x537b0b */ if (fZ) goto L_00537b0b;
L_00537a80:; BB(0x00537a80);
    /* 00537a80: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00537a85: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00537a86: mov ecx, dword ptr [ebx + 0x398] */ r_ecx = R32((u32)(r_ebx+0x398u));
    /* 00537a8c: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00537a8e: call dword ptr [eax + 0x50] */ { u32 t = R32((u32)(r_eax+0x50u)); r_esp -= 4; W32(r_esp, 0x537a91u); call_ind(t); }
    /* 00537a91: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00537a93: je 0x537b0b */ if (fZ) goto L_00537b0b;
L_00537a95:; BB(0x00537a95);
    /* 00537a95: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00537a9a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00537a9b: mov ecx, dword ptr [ebx + 0x398] */ r_ecx = R32((u32)(r_ebx+0x398u));
    /* 00537aa1: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00537aa3: call dword ptr [eax + 0x5c] */ { u32 t = R32((u32)(r_eax+0x5cu)); r_esp -= 4; W32(r_esp, 0x537aa6u); call_ind(t); }
    /* 00537aa6: fcomp dword ptr [0x922efc] */ fx_compare(ST(0), R_F32((u32)(0x922efcu))); FPOP();
    /* 00537aac: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00537aae: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00537aaf: jbe 0x537afa */ if ((fC||fZ)) goto L_00537afa;
L_00537ab1:; BB(0x00537ab1);
    /* 00537ab1: call 0x520e6c */ r_esp -= 4; W32(r_esp, 0x537ab6u); f_00520e6c();
    /* 00537ab6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00537ab8: je 0x537adb */ if (fZ) goto L_00537adb;
L_00537aba:; BB(0x00537aba);
    /* 00537aba: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00537abc: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x537ac1u); f_007751b0();
    /* 00537ac1: fcomp dword ptr [0x922ef4] */ fx_compare(ST(0), R_F32((u32)(0x922ef4u))); FPOP();
    /* 00537ac7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00537ac9: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00537aca: ja 0x537afa */ if ((!fC&&!fZ)) goto L_00537afa;
L_00537acc:; BB(0x00537acc);
    /* 00537acc: push dword ptr [ebx + 0x398] */ { u32 v = R32((u32)(r_ebx+0x398u)); r_esp -= 4; W32(r_esp, v); }
    /* 00537ad2: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00537ad4: call 0x51fec4 */ r_esp -= 4; W32(r_esp, 0x537ad9u); f_0051fec4();
    /* 00537ad9: jmp 0x537afa */ goto L_00537afa;
L_00537adb:; BB(0x00537adb);
    /* 00537adb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00537add: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x537ae2u); f_007751b0();
    /* 00537ae2: fcomp dword ptr [0x922ef8] */ fx_compare(ST(0), R_F32((u32)(0x922ef8u))); FPOP();
    /* 00537ae8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00537aea: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00537aeb: ja 0x537afa */ if ((!fC&&!fZ)) goto L_00537afa;
L_00537aed:; BB(0x00537aed);
    /* 00537aed: push dword ptr [ebx + 0x398] */ { u32 v = R32((u32)(r_ebx+0x398u)); r_esp -= 4; W32(r_esp, v); }
    /* 00537af3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00537af5: call 0x51fec4 */ r_esp -= 4; W32(r_esp, 0x537afau); f_0051fec4();
L_00537afa:; BB(0x00537afa);
    /* 00537afa: push 0x40a00000 */ { u32 v = 0x40a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00537aff: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00537b00: mov ecx, dword ptr [ebx + 0x398] */ r_ecx = R32((u32)(r_ebx+0x398u));
    /* 00537b06: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00537b08: call dword ptr [eax + 0x68] */ { u32 t = R32((u32)(r_eax+0x68u)); r_esp -= 4; W32(r_esp, 0x537b0bu); call_ind(t); }
L_00537b0b:; BB(0x00537b0b);
    /* 00537b0b: push dword ptr [ebx + 0xc0] */ { u32 v = R32((u32)(r_ebx+0xc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00537b11: mov ecx, dword ptr [0xa735d0] */ r_ecx = R32((u32)(0xa735d0u));
    /* 00537b17: call 0x579de0 */ r_esp -= 4; W32(r_esp, 0x537b1cu); f_00579de0();
    /* 00537b1c: mov esi, eax */ r_esi = r_eax;
    /* 00537b1e: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00537b20: je 0x537b7d */ if (fZ) goto L_00537b7d;
L_00537b22:; BB(0x00537b22);
    /* 00537b22: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x537b27u); f_0082d7b0();
    /* 00537b27: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00537b29: call 0x830cd8 */ r_esp -= 4; W32(r_esp, 0x537b2eu); f_00830cd8();
    /* 00537b2e: lea ecx, [ebx + 0x38] */ r_ecx = (u32)(r_ebx+0x38u);
    /* 00537b31: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x537b36u); f_0082d838();
    /* 00537b36: mov edx, dword ptr [ebx + 0x60] */ r_edx = R32((u32)(r_ebx+0x60u));
    /* 00537b39: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00537b3b: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x537b40u); f_0082d8bc();
    /* 00537b40: lea edi, [esp] */ r_edi = (u32)(r_esp);
    /* 00537b43: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00537b45: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00537b46: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00537b48: mov edx, esi */ r_edx = r_esi;
    /* 00537b4a: call 0x82f940 */ r_esp -= 4; W32(r_esp, 0x537b4fu); f_0082f940();
    /* 00537b4f: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x537b54u); f_0082da80();
    /* 00537b54: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 00537b57: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 00537b5b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00537b5c: mov ecx, dword ptr [ebx + 0x448] */ r_ecx = R32((u32)(r_ebx+0x448u));
    /* 00537b62: mov esi, dword ptr [ecx] */ r_esi = R32((u32)(r_ecx));
    /* 00537b64: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00537b65: call dword ptr [esi + 0x10] */ { u32 t = R32((u32)(r_esi+0x10u)); r_esp -= 4; W32(r_esp, 0x537b68u); call_ind(t); }
    /* 00537b68: lea edx, [esp + 0x18] */ r_edx = (u32)(r_esp+0x18u);
    /* 00537b6c: lea eax, [esp + 0x24] */ r_eax = (u32)(r_esp+0x24u);
    /* 00537b70: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00537b71: mov ecx, dword ptr [ebx + 0x44c] */ r_ecx = R32((u32)(r_ebx+0x44cu));
    /* 00537b77: mov esi, dword ptr [ecx] */ r_esi = R32((u32)(r_ecx));
    /* 00537b79: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00537b7a: call dword ptr [esi + 0x10] */ { u32 t = R32((u32)(r_esi+0x10u)); r_esp -= 4; W32(r_esp, 0x537b7du); call_ind(t); }
L_00537b7d:; BB(0x00537b7d);
    /* 00537b7d: mov eax, dword ptr [ebx + 0xb0] */ r_eax = R32((u32)(r_ebx+0xb0u));
    /* 00537b83: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00537b85: je 0x537cbc */ if (fZ) goto L_00537cbc;
L_00537b8b:; BB(0x00537b8b);
    /* 00537b8b: mov dword ptr [ebx + 0x4c8], 2 */ W32((u32)(r_ebx+0x4c8u), 0x2u);
    /* 00537b95: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00537b97: mov dword ptr [ebx + 0x4cc], eax */ W32((u32)(r_ebx+0x4ccu), r_eax);
    /* 00537b9d: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
    /* 00537ba4: jmp 0x537cbc */ goto L_00537cbc;
L_00537ba9:; BB(0x00537ba9);
    /* 00537ba9: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00537bac: jne 0x537cbc */ if (!fZ) goto L_00537cbc;
L_00537bb2:; BB(0x00537bb2);
    /* 00537bb2: mov eax, dword ptr [ebx + 0x4cc] */ r_eax = R32((u32)(r_ebx+0x4ccu));
    /* 00537bb8: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00537bbb: mov dword ptr [ebx + 0x4cc], eax */ W32((u32)(r_ebx+0x4ccu), r_eax);
    /* 00537bc1: cmp eax, 0x32 */ {  u32 a = r_eax; u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00537bc4: jl 0x537cbc */ if ((fS!=fO)) goto L_00537cbc;
L_00537bca:; BB(0x00537bca);
    /* 00537bca: mov dword ptr [ebx + 0x4c8], 0 */ W32((u32)(r_ebx+0x4c8u), 0x0u);
    /* 00537bd4: mov eax, 1 */ r_eax = 0x1u;
    /* 00537bd9: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
    /* 00537be0: jmp 0x537cbc */ goto L_00537cbc;
L_00537be5:; BB(0x00537be5);
    /* 00537be5: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00537be7: call 0x52126c */ r_esp -= 4; W32(r_esp, 0x537becu); f_0052126c();
    /* 00537bec: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00537bee: je 0x537cbc */ if (fZ) goto L_00537cbc;
L_00537bf4:; BB(0x00537bf4);
    /* 00537bf4: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00537bf6: call 0x5213d8 */ r_esp -= 4; W32(r_esp, 0x537bfbu); f_005213d8();
    /* 00537bfb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00537bfd: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x537c02u); f_00521410();
    /* 00537c02: fld dword ptr [ebx + 0x3a8] */ FPUSH(R_F32((u32)(r_ebx+0x3a8u)));
    /* 00537c08: fld dword ptr [ebx + 0x3b0] */ FPUSH(R_F32((u32)(r_ebx+0x3b0u)));
    /* 00537c0e: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 00537c10: fmul qword ptr [0x922e50] */ ST(0) = ST(0) * R_F64((u32)(0x922e50u));
    /* 00537c16: fdiv qword ptr [0x922e48] */ ST(0) = ST(0) / R_F64((u32)(0x922e48u));
    /* 00537c1c: fnstcw word ptr [esp + 0x30] */ W16((u32)(r_esp+0x30u), fcw);
    /* 00537c20: movzx eax, word ptr [esp + 0x30] */ r_eax = (u32)R16((u32)(r_esp+0x30u));
    /* 00537c25: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00537c2a: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 00537c2e: fldcw word ptr [esp + 0x38] */ fcw = R16((u32)(r_esp+0x38u));
    /* 00537c32: fistp dword ptr [esp + 0x40] */ W32((u32)(r_esp+0x40u), (u32)fx_int32(ST(0))); FPOP();
    /* 00537c36: fldcw word ptr [esp + 0x30] */ fcw = R16((u32)(r_esp+0x30u));
    /* 00537c3a: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00537c3c: mov esi, dword ptr [esp + 0x40] */ r_esi = R32((u32)(r_esp+0x40u));
    /* 00537c40: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00537c41: push dword ptr [ebx + 0x60] */ { u32 v = R32((u32)(r_ebx+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 00537c44: call 0x7a900c */ r_esp -= 4; W32(r_esp, 0x537c49u); f_007a900c();
    /* 00537c49: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00537c4c: cmp eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00537c51: jle 0x537c79 */ if ((fZ||fS!=fO)) goto L_00537c79;
L_00537c53:; BB(0x00537c53);
    /* 00537c53: mov eax, dword ptr [ebx + 0x60] */ r_eax = R32((u32)(r_ebx+0x60u));
    /* 00537c56: add eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00537c5b: mov dword ptr [ebx + 0x60], eax */ W32((u32)(r_ebx+0x60u), r_eax);
    /* 00537c5e: mov eax, dword ptr [ebx + 0x4c4] */ r_eax = R32((u32)(r_ebx+0x4c4u));
    /* 00537c64: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00537c66: jl 0x537d3c */ if ((fS!=fO)) goto L_00537d3c;
L_00537c6c:; BB(0x00537c6c);
    /* 00537c6c: add eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00537c71: mov dword ptr [ebx + 0x4c4], eax */ W32((u32)(r_ebx+0x4c4u), r_eax);
    /* 00537c77: jmp 0x537cad */ goto L_00537cad;
L_00537c79:; BB(0x00537c79);
    /* 00537c79: cmp eax, 0xffffff00 */ {  u32 a = r_eax; u32 b = 0xffffff00u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00537c7e: jge 0x537ca5 */ if ((fS==fO)) goto L_00537ca5;
L_00537c80:; BB(0x00537c80);
    /* 00537c80: mov eax, dword ptr [ebx + 0x60] */ r_eax = R32((u32)(r_ebx+0x60u));
    /* 00537c83: add eax, 0xffffff00 */ {  u32 a = r_eax; u32 b = 0xffffff00u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00537c88: mov dword ptr [ebx + 0x60], eax */ W32((u32)(r_ebx+0x60u), r_eax);
    /* 00537c8b: mov eax, dword ptr [ebx + 0x4c4] */ r_eax = R32((u32)(r_ebx+0x4c4u));
    /* 00537c91: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00537c93: jle 0x537d4b */ if ((fZ||fS!=fO)) goto L_00537d4b;
L_00537c99:; BB(0x00537c99);
    /* 00537c99: mov dword ptr [ebx + 0x4c4], 0 */ W32((u32)(r_ebx+0x4c4u), 0x0u);
    /* 00537ca3: jmp 0x537cad */ goto L_00537cad;
L_00537ca5:; BB(0x00537ca5);
    /* 00537ca5: mov dword ptr [ebx + 0x60], esi */ W32((u32)(r_ebx+0x60u), r_esi);
    /* 00537ca8: mov edi, 1 */ r_edi = 0x1u;
L_00537cad:; BB(0x00537cad);
    /* 00537cad: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00537caf: jne 0x537d5b */ if (!fZ) goto L_00537d5b;
L_00537cb5:; BB(0x00537cb5);
    /* 00537cb5: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00537cb7: call 0x537e00 */ r_esp -= 4; W32(r_esp, 0x537cbcu); f_00537e00();
L_00537cbc:; BB(0x00537cbc);
    /* 00537cbc: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00537cbe: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00537cc0: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x537cc6u); call_ind(t); }
    /* 00537cc6: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00537cc8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00537cca: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x537cd0u); call_ind(t); }
    /* 00537cd0: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00537cd3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00537cd4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00537cd5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00537cd6: ret 4 */ FN_RET(0x005379ec); r_esp += 8; return;
L_00537cd9:; BB(0x00537cd9);
    /* 00537cd9: mov eax, dword ptr [ebx + 0x4c8] */ r_eax = R32((u32)(r_ebx+0x4c8u));
    /* 00537cdf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00537ce1: jne 0x537d33 */ if (!fZ) goto L_00537d33;
L_00537ce3:; BB(0x00537ce3);
    /* 00537ce3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00537ce5: call 0x53781c */ r_esp -= 4; W32(r_esp, 0x537ceau); f_0053781c();
    /* 00537cea: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00537cec: jne 0x537d33 */ if (!fZ) goto L_00537d33;
L_00537cee:; BB(0x00537cee);
    /* 00537cee: mov eax, dword ptr [ebx + 0x398] */ r_eax = R32((u32)(r_ebx+0x398u));
    /* 00537cf4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00537cf6: je 0x537d93 */ if (fZ) goto L_00537d93;
L_00537cfc:; BB(0x00537cfc);
    /* 00537cfc: fld dword ptr [ebx + 0x3b4] */ FPUSH(R_F32((u32)(r_ebx+0x3b4u)));
    /* 00537d02: fcomp dword ptr [0x922eec] */ fx_compare(ST(0), R_F32((u32)(0x922eecu))); FPOP();
    /* 00537d08: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00537d0a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00537d0b: jb 0x537d1f */ if (fC) goto L_00537d1f;
L_00537d0d:; BB(0x00537d0d);
    /* 00537d0d: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00537d0f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00537d11: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x537d16u); f_0051f62c();
    /* 00537d16: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00537d19: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00537d1a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00537d1b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00537d1c: ret 4 */ FN_RET(0x005379ec); r_esp += 8; return;
L_00537d1f:; BB(0x00537d1f);
    /* 00537d1f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00537d21: call 0x537e44 */ r_esp -= 4; W32(r_esp, 0x537d26u); f_00537e44();
    /* 00537d26: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00537d28: je 0x537d33 */ if (fZ) goto L_00537d33;
L_00537d2a:; BB(0x00537d2a);
    /* 00537d2a: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00537d2c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00537d2e: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x537d33u); f_0051f62c();
L_00537d33:; BB(0x00537d33);
    /* 00537d33: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00537d36: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00537d37: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00537d38: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00537d39: ret 4 */ FN_RET(0x005379ec); r_esp += 8; return;
L_00537d3c:; BB(0x00537d3c);
    /* 00537d3c: mov dword ptr [ebx + 0x4c4], 0 */ W32((u32)(r_ebx+0x4c4u), 0x0u);
    /* 00537d46: jmp 0x537cad */ goto L_00537cad;
L_00537d4b:; BB(0x00537d4b);
    /* 00537d4b: add eax, 0xffffff00 */ {  u32 a = r_eax; u32 b = 0xffffff00u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00537d50: mov dword ptr [ebx + 0x4c4], eax */ W32((u32)(r_ebx+0x4c4u), r_eax);
    /* 00537d56: jmp 0x537cad */ goto L_00537cad;
L_00537d5b:; BB(0x00537d5b);
    /* 00537d5b: mov dword ptr [ebx + 0x4c8], 1 */ W32((u32)(r_ebx+0x4c8u), 0x1u);
    /* 00537d65: mov eax, 2 */ r_eax = 0x2u;
    /* 00537d6a: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
    /* 00537d71: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00537d73: call 0x5394d0 */ r_esp -= 4; W32(r_esp, 0x537d78u); f_005394d0();
    /* 00537d78: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_00537d7a:; BB(0x00537d7a);
    /* 00537d7a: mov ecx, dword ptr [ebx + esi*4 + 0x448] */ r_ecx = R32((u32)(r_ebx+r_esi*4+0x448u));
    /* 00537d81: call 0x7a7d3c */ r_esp -= 4; W32(r_esp, 0x537d86u); f_007a7d3c();
    /* 00537d86: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00537d89: cmp esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00537d8c: jl 0x537d7a */ if ((fS!=fO)) goto L_00537d7a;
L_00537d8e:; BB(0x00537d8e);
    /* 00537d8e: jmp 0x537cb5 */ goto L_00537cb5;
L_00537d93:; BB(0x00537d93);
    /* 00537d93: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00537d95: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00537d97: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x537d9cu); f_0051f62c();
    /* 00537d9c: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00537d9f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00537da0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00537da1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00537da2: ret 4 */ FN_RET(0x005379ec); r_esp += 8; return;
L_00537da5:; BB(0x00537da5);
    /* 00537da5: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 00537da7: mov eax, 1 */ r_eax = 0x1u;
    /* 00537dac: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
    /* 00537db3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00537db5: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x537dbbu); call_ind(t); }
    /* 00537dbb: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00537dbd: mov eax, dword ptr [ebx + 0x3c8] */ r_eax = R32((u32)(r_ebx+0x3c8u));
    /* 00537dc3: and eax, 0xfffffff8 */ {  u32 a = r_eax; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00537dc6: mov dword ptr [ebx + 0x3c8], eax */ W32((u32)(r_ebx+0x3c8u), r_eax);
    /* 00537dcc: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00537dce: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x537dd3u); f_0051f664();
    /* 00537dd3: mov edx, dword ptr [ebx + 0x3dc] */ r_edx = R32((u32)(r_ebx+0x3dcu));
    /* 00537dd9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00537ddb: mov dword ptr [ebx + 0x4c8], eax */ W32((u32)(r_ebx+0x4c8u), r_eax);
    /* 00537de1: mov dword ptr [ebx + 0x4cc], eax */ W32((u32)(r_ebx+0x4ccu), r_eax);
    /* 00537de7: mov dword ptr [ebx + 0x4d0], eax */ W32((u32)(r_ebx+0x4d0u), r_eax);
    /* 00537ded: shl edx, 0xf */ { u32 c = (15u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00537df0: mov dword ptr [ebx + 0x4d4], edx */ W32((u32)(r_ebx+0x4d4u), r_edx);
    /* 00537df6: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00537df9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00537dfa: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00537dfb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00537dfc: ret 4 */ FN_RET(0x005379ec); r_esp += 8; return;
}

void f_00537c82(void)
{
    FN_ENTER(0x00537c82);
    /* 00537c82: pushal  */ { u32 sp = r_esp; r_esp -= 32; W32(r_esp, r_edi); W32(r_esp + 4, r_esi); W32(r_esp + 8, r_ebp); W32(r_esp + 12, sp); W32(r_esp + 16, r_ebx); W32(r_esp + 20, r_edx); W32(r_esp + 24, r_ecx); W32(r_esp + 28, r_eax); }
    /* 00537c83: add eax, 0xffffff00 */ {  u32 a = r_eax; u32 b = 0xffffff00u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00537c88: mov dword ptr [ebx + 0x60], eax */ W32((u32)(r_ebx+0x60u), r_eax);
    /* 00537c8b: mov eax, dword ptr [ebx + 0x4c4] */ r_eax = R32((u32)(r_ebx+0x4c4u));
    /* 00537c91: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00537c93: jle 0x537d4b */ if ((fZ||fS!=fO)) goto L_00537d4b;
L_00537c99:; BB(0x00537c99);
    /* 00537c99: mov dword ptr [ebx + 0x4c4], 0 */ W32((u32)(r_ebx+0x4c4u), 0x0u);
    /* 00537ca3: jmp 0x537cad */ goto L_00537cad;
L_00537cad:; BB(0x00537cad);
    /* 00537cad: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00537caf: jne 0x537d5b */ if (!fZ) goto L_00537d5b;
L_00537cb5:; BB(0x00537cb5);
    /* 00537cb5: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00537cb7: call 0x537e00 */ r_esp -= 4; W32(r_esp, 0x537cbcu); f_00537e00();
    /* 00537cbc: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00537cbe: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00537cc0: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x537cc6u); call_ind(t); }
    /* 00537cc6: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00537cc8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00537cca: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x537cd0u); call_ind(t); }
    /* 00537cd0: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00537cd3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00537cd4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00537cd5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00537cd6: ret 4 */ FN_RET(0x00537c82); r_esp += 8; return;
L_00537d4b:; BB(0x00537d4b);
    /* 00537d4b: add eax, 0xffffff00 */ {  u32 a = r_eax; u32 b = 0xffffff00u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00537d50: mov dword ptr [ebx + 0x4c4], eax */ W32((u32)(r_ebx+0x4c4u), r_eax);
    /* 00537d56: jmp 0x537cad */ goto L_00537cad;
L_00537d5b:; BB(0x00537d5b);
    /* 00537d5b: mov dword ptr [ebx + 0x4c8], 1 */ W32((u32)(r_ebx+0x4c8u), 0x1u);
    /* 00537d65: mov eax, 2 */ r_eax = 0x2u;
    /* 00537d6a: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
    /* 00537d71: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00537d73: call 0x5394d0 */ r_esp -= 4; W32(r_esp, 0x537d78u); f_005394d0();
    /* 00537d78: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_00537d7a:; BB(0x00537d7a);
    /* 00537d7a: mov ecx, dword ptr [ebx + esi*4 + 0x448] */ r_ecx = R32((u32)(r_ebx+r_esi*4+0x448u));
    /* 00537d81: call 0x7a7d3c */ r_esp -= 4; W32(r_esp, 0x537d86u); f_007a7d3c();
    /* 00537d86: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00537d89: cmp esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00537d8c: jl 0x537d7a */ if ((fS!=fO)) goto L_00537d7a;
L_00537d8e:; BB(0x00537d8e);
    /* 00537d8e: jmp 0x537cb5 */ goto L_00537cb5;
}

void f_00537e00(void) /* sub_537E00 */
{
    FN_ENTER(0x00537e00);
    /* 00537e00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00537e01: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00537e03: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00537e05: push 0x40800000 */ { u32 v = 0x40800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00537e0a: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x537e0fu); f_007aaa30();
    /* 00537e0f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00537e11: jne 0x537e23 */ if (!fZ) goto L_00537e23;
L_00537e13:; BB(0x00537e13);
    /* 00537e13: push 0x41a00000 */ { u32 v = 0x41a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00537e18: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00537e1a: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x537e1fu); f_007aaa30();
    /* 00537e1f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00537e21: je 0x537e40 */ if (fZ) goto L_00537e40;
L_00537e23:; BB(0x00537e23);
    /* 00537e23: push 0x1ea */ { u32 v = 0x1eau; r_esp -= 4; W32(r_esp, v); }
    /* 00537e28: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00537e2a: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x537e2fu); f_007879b8();
    /* 00537e2f: add ebp, 0x38 */ {  u32 a = r_ebp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00537e32: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00537e34: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00537e35: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00537e36: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00537e37: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00537e38: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x537e3du); f_00814298();
    /* 00537e3d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_00537e40:; BB(0x00537e40);
    /* 00537e40: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00537e41: ret  */ FN_RET(0x00537e00); r_esp += 4; return;
}

void f_00537e44(void) /* sub_537E44 */
{
    FN_ENTER(0x00537e44);
    /* 00537e44: mov eax, dword ptr [ecx + 0x4c4] */ r_eax = R32((u32)(r_ecx+0x4c4u));
    /* 00537e4a: mov edx, dword ptr [ecx + 0x4c0] */ r_edx = R32((u32)(r_ecx+0x4c0u));
    /* 00537e50: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00537e52: jge 0x537e5d */ if ((fS==fO)) goto L_00537e5d;
L_00537e54:; BB(0x00537e54);
    /* 00537e54: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00537e56: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00537e58: jle 0x537e5d */ if ((fZ||fS!=fO)) goto L_00537e5d;
L_00537e5a:; BB(0x00537e5a);
    /* 00537e5a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00537e5c: ret  */ FN_RET(0x00537e44); r_esp += 4; return;
L_00537e5d:; BB(0x00537e5d);
    /* 00537e5d: mov eax, 1 */ r_eax = 0x1u;
    /* 00537e62: ret  */ FN_RET(0x00537e44); r_esp += 4; return;
}

void f_00537e64(void) /* sub_537E64 */
{
    FN_ENTER(0x00537e64);
    /* 00537e64: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00537e65: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00537e66: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00537e69: mov edi, ecx */ r_edi = r_ecx;
    /* 00537e6b: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 00537e6f: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00537e72: je 0x538207 */ if (fZ) goto L_00538207;
L_00537e78:; BB(0x00537e78);
    /* 00537e78: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00537e7b: je 0x538181 */ if (fZ) goto L_00538181;
L_00537e81:; BB(0x00537e81);
    /* 00537e81: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00537e83: jne 0x538112 */ if (!fZ) goto L_00538112;
L_00537e89:; BB(0x00537e89);
    /* 00537e89: mov ecx, edi */ r_ecx = r_edi;
    /* 00537e8b: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x537e90u); f_007aa094();
    /* 00537e90: mov eax, dword ptr [edi + 0x4c8] */ r_eax = R32((u32)(r_edi+0x4c8u));
    /* 00537e96: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00537e98: je 0x537f5c */ if (fZ) goto L_00537f5c;
L_00537e9e:; BB(0x00537e9e);
    /* 00537e9e: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00537ea1: jne 0x537ef6 */ if (!fZ) goto L_00537ef6;
L_00537ea3:; BB(0x00537ea3);
    /* 00537ea3: mov eax, dword ptr [edi + 0x3fc] */ r_eax = R32((u32)(r_edi+0x3fcu));
    /* 00537ea9: mov edx, dword ptr [edi + eax*4 + 0x420] */ r_edx = R32((u32)(r_edi+r_eax*4+0x420u));
    /* 00537eb0: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00537eb3: jne 0x5380f9 */ if (!fZ) goto L_005380f9;
L_00537eb9:; BB(0x00537eb9);
    /* 00537eb9: mov edx, dword ptr [edi + 0x3fc] */ r_edx = R32((u32)(r_edi+0x3fcu));
    /* 00537ebf: mov dword ptr [edi + 0x4c8], 2 */ W32((u32)(r_edi+0x4c8u), 0x2u);
    /* 00537ec9: mov eax, dword ptr [edi + edx*4 + 0x420] */ r_eax = R32((u32)(r_edi+r_edx*4+0x420u));
    /* 00537ed0: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00537ed3: mov dword ptr [edi + edx*4 + 0x420], eax */ W32((u32)(r_edi+r_edx*4+0x420u), r_eax);
    /* 00537eda: mov eax, dword ptr [edi + 0x3fc] */ r_eax = R32((u32)(r_edi+0x3fcu));
    /* 00537ee0: mov esi, dword ptr [edi + eax*4 + 0x420] */ r_esi = R32((u32)(r_edi+r_eax*4+0x420u));
    /* 00537ee7: and esi, 0xfffffffe */ {  u32 a = r_esi; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 00537eea: mov dword ptr [edi + eax*4 + 0x420], esi */ W32((u32)(r_edi+r_eax*4+0x420u), r_esi);
    /* 00537ef1: jmp 0x5380f9 */ goto L_005380f9;
L_00537ef6:; BB(0x00537ef6);
    /* 00537ef6: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00537ef9: jne 0x5380f9 */ if (!fZ) goto L_005380f9;
L_00537eff:; BB(0x00537eff);
    /* 00537eff: mov eax, dword ptr [edi + 0x404] */ r_eax = R32((u32)(r_edi+0x404u));
    /* 00537f05: lea ecx, [edi + 0x404] */ r_ecx = (u32)(r_edi+0x404u);
    /* 00537f0b: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x537f0eu); call_ind(t); }
    /* 00537f0e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00537f10: je 0x5380f9 */ if (fZ) goto L_005380f9;
L_00537f16:; BB(0x00537f16);
    /* 00537f16: mov edx, dword ptr [edi + 0x3fc] */ r_edx = R32((u32)(r_edi+0x3fcu));
    /* 00537f1c: mov eax, dword ptr [edi + edx*4 + 0x420] */ r_eax = R32((u32)(r_edi+r_edx*4+0x420u));
    /* 00537f23: and eax, 0xfffffffb */ {  u32 a = r_eax; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00537f26: mov dword ptr [edi + edx*4 + 0x420], eax */ W32((u32)(r_edi+r_edx*4+0x420u), r_eax);
    /* 00537f2d: mov esi, dword ptr [edi + 0x3fc] */ r_esi = R32((u32)(r_edi+0x3fcu));
    /* 00537f33: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00537f35: jne 0x537f43 */ if (!fZ) goto L_00537f43;
L_00537f37:; BB(0x00537f37);
    /* 00537f37: mov dword ptr [edi + 0x3fc], 1 */ W32((u32)(r_edi+0x3fcu), 0x1u);
    /* 00537f41: jmp 0x537f4d */ goto L_00537f4d;
L_00537f43:; BB(0x00537f43);
    /* 00537f43: mov dword ptr [edi + 0x3fc], 0 */ W32((u32)(r_edi+0x3fcu), 0x0u);
L_00537f4d:; BB(0x00537f4d);
    /* 00537f4d: mov dword ptr [edi + 0x4c8], 3 */ W32((u32)(r_edi+0x4c8u), 0x3u);
    /* 00537f57: jmp 0x5380f9 */ goto L_005380f9;
L_00537f5c:; BB(0x00537f5c);
    /* 00537f5c: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_00537f5e:; BB(0x00537f5e);
    /* 00537f5e: mov eax, dword ptr [edi + esi*4 + 0x440] */ r_eax = R32((u32)(r_edi+r_esi*4+0x440u));
    /* 00537f65: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00537f67: je 0x538194 */ if (fZ) goto L_00538194;
L_00537f6d:; BB(0x00537f6d);
    /* 00537f6d: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00537f70: cmp esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00537f73: jl 0x537f5e */ if ((fS!=fO)) goto L_00537f5e;
L_00537f75:; BB(0x00537f75);
    /* 00537f75: fld dword ptr [edi + 0xc0] */ FPUSH(R_F32((u32)(r_edi+0xc0u)));
    /* 00537f7b: fcom dword ptr [edi + 0x4dc] */ fx_compare(ST(0), R_F32((u32)(r_edi+0x4dcu))); 
    /* 00537f81: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00537f83: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00537f84: jae 0x537faf */ if (!fC) goto L_00537faf;
L_00537f86:; BB(0x00537f86);
    /* 00537f86: fcom dword ptr [edi + 0x4d8] */ fx_compare(ST(0), R_F32((u32)(r_edi+0x4d8u))); 
    /* 00537f8c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00537f8e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00537f8f: jb 0x537faf */ if (fC) goto L_00537faf;
L_00537f91:; BB(0x00537f91);
    /* 00537f91: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00537f93: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_00537f95:; BB(0x00537f95);
    /* 00537f95: mov ecx, dword ptr [edi + esi*4 + 0x440] */ r_ecx = R32((u32)(r_edi+r_esi*4+0x440u));
    /* 00537f9c: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00537f9f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00537fa1: je 0x537fa8 */ if (fZ) goto L_00537fa8;
L_00537fa3:; BB(0x00537fa3);
    /* 00537fa3: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x537fa8u); f_00508f48();
L_00537fa8:; BB(0x00537fa8);
    /* 00537fa8: cmp esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00537fab: jl 0x537f95 */ if ((fS!=fO)) goto L_00537f95;
L_00537fad:; BB(0x00537fad);
    /* 00537fad: jmp 0x537fdf */ goto L_00537fdf;
L_00537faf:; BB(0x00537faf);
    /* 00537faf: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00537fb1: mov dword ptr [esp + 0xc], ebx */ W32((u32)(r_esp+0xcu), r_ebx);
    /* 00537fb5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00537fb7: lea esi, [edi + 0x428] */ r_esi = (u32)(r_edi+0x428u);
    /* 00537fbd: mov ebx, eax */ r_ebx = r_eax;
L_00537fbf:; BB(0x00537fbf);
    /* 00537fbf: mov ecx, dword ptr [edi + ebx*4 + 0x440] */ r_ecx = R32((u32)(r_edi+r_ebx*4+0x440u));
    /* 00537fc6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00537fc8: je 0x537fd0 */ if (fZ) goto L_00537fd0;
L_00537fca:; BB(0x00537fca);
    /* 00537fca: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00537fcb: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x537fd0u); f_00508db8();
L_00537fd0:; BB(0x00537fd0);
    /* 00537fd0: add esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00537fd3: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00537fd6: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00537fd9: jl 0x537fbf */ if ((fS!=fO)) goto L_00537fbf;
L_00537fdb:; BB(0x00537fdb);
    /* 00537fdb: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
L_00537fdf:; BB(0x00537fdf);
    /* 00537fdf: push dword ptr [edi + 0x4d8] */ { u32 v = R32((u32)(r_edi+0x4d8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00537fe5: mov ecx, edi */ r_ecx = r_edi;
    /* 00537fe7: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x537fecu); f_007aaa30();
    /* 00537fec: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00537fee: je 0x5380f9 */ if (fZ) goto L_005380f9;
L_00537ff4:; BB(0x00537ff4);
    /* 00537ff4: mov edx, dword ptr [edi + 0x3fc] */ r_edx = R32((u32)(r_edi+0x3fcu));
    /* 00537ffa: mov eax, dword ptr [edi + edx*4 + 0x420] */ r_eax = R32((u32)(r_edi+r_edx*4+0x420u));
    /* 00538001: or eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00538004: mov dword ptr [edi + edx*4 + 0x420], eax */ W32((u32)(r_edi+r_edx*4+0x420u), r_eax);
    /* 0053800b: mov esi, dword ptr [edi + 0x404] */ r_esi = R32((u32)(r_edi+0x404u));
    /* 00538011: lea ecx, [edi + 0x404] */ r_ecx = (u32)(r_edi+0x404u);
    /* 00538017: call dword ptr [esi + 0xc] */ { u32 t = R32((u32)(r_esi+0xcu)); r_esp -= 4; W32(r_esp, 0x53801au); call_ind(t); }
    /* 0053801a: mov eax, dword ptr [edi + 0x3fc] */ r_eax = R32((u32)(r_edi+0x3fcu));
    /* 00538020: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 00538023: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00538025: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00538027: lea edx, [eax + edx*4] */ r_edx = (u32)(r_eax+r_edx*4);
    /* 0053802a: mov esi, dword ptr [edx*4 + 0xa73548] */ r_esi = R32((u32)(r_edx*4+0xa73548u));
    /* 00538031: mov eax, dword ptr [edx*4 + 0xa7354c] */ r_eax = R32((u32)(r_edx*4+0xa7354cu));
    /* 00538038: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 0053803b: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0053803f: mov eax, dword ptr [edx*4 + 0xa73550] */ r_eax = R32((u32)(r_edx*4+0xa73550u));
    /* 00538046: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0053804a: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0053804d: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 00538051: push dword ptr [edi + 0x60] */ { u32 v = R32((u32)(r_edi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 00538054: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00538055: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00538056: call 0x782b64 */ r_esp -= 4; W32(r_esp, 0x53805bu); f_00782b64();
    /* 0053805b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053805e: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00538061: lea esi, [edi + 0x38] */ r_esi = (u32)(r_edi+0x38u);
    /* 00538064: mov edx, esi */ r_edx = r_esi;
    /* 00538066: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x53806bu); f_0082ebac();
    /* 0053806b: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0053806e: mov ecx, dword ptr [edi + 0x400] */ r_ecx = R32((u32)(r_edi+0x400u));
    /* 00538074: lea eax, [edi + 0x39c] */ r_eax = (u32)(r_edi+0x39cu);
    /* 0053807a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053807b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053807c: push dword ptr [edi + 0x3fc] */ { u32 v = R32((u32)(r_edi+0x3fcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00538082: call 0x539fbc */ r_esp -= 4; W32(r_esp, 0x538087u); f_00539fbc();
    /* 00538087: mov edx, dword ptr [edi + 0x440] */ r_edx = R32((u32)(r_edi+0x440u));
    /* 0053808d: mov dword ptr [edi + 0x4c8], 1 */ W32((u32)(r_edi+0x4c8u), 0x1u);
    /* 00538097: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00538099: je 0x5380b2 */ if (fZ) goto L_005380b2;
L_0053809b:; BB(0x0053809b);
    /* 0053809b: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0053809f: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005380a4: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 005380a8: mov dword ptr [edi + 0x440], 0 */ W32((u32)(r_edi+0x440u), 0x0u);
L_005380b2:; BB(0x005380b2);
    /* 005380b2: mov edx, dword ptr [edi + 0x444] */ r_edx = R32((u32)(r_edi+0x444u));
    /* 005380b8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005380ba: je 0x5380d3 */ if (fZ) goto L_005380d3;
L_005380bc:; BB(0x005380bc);
    /* 005380bc: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 005380c0: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005380c5: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 005380c9: mov dword ptr [edi + 0x444], 0 */ W32((u32)(r_edi+0x444u), 0x0u);
L_005380d3:; BB(0x005380d3);
    /* 005380d3: push 0x1ec */ { u32 v = 0x1ecu; r_esp -= 4; W32(r_esp, v); }
    /* 005380d8: mov ecx, edi */ r_ecx = r_edi;
    /* 005380da: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x5380dfu); f_007879b8();
    /* 005380df: mov edx, eax */ r_edx = r_eax;
    /* 005380e1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005380e3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005380e4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005380e5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005380e6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005380e7: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5380ecu); f_00814298();
    /* 005380ec: push 0xffffff00 */ { u32 v = 0xffffff00u; r_esp -= 4; W32(r_esp, v); }
    /* 005380f1: call 0x814680 */ r_esp -= 4; W32(r_esp, 0x5380f6u); f_00814680();
    /* 005380f6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005380f9:; BB(0x005380f9);
    /* 005380f9: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005380fb: mov ecx, edi */ r_ecx = r_edi;
    /* 005380fd: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x538103u); call_ind(t); }
    /* 00538103: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00538105: mov ecx, edi */ r_ecx = r_edi;
    /* 00538107: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x53810du); call_ind(t); }
    /* 0053810d: jmp 0x53818c */ goto L_0053818c;
L_00538112:; BB(0x00538112);
    /* 00538112: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00538115: jne 0x53818c */ if (!fZ) goto L_0053818c;
L_00538117:; BB(0x00538117);
    /* 00538117: mov eax, dword ptr [edi + 0x404] */ r_eax = R32((u32)(r_edi+0x404u));
    /* 0053811d: lea ecx, [edi + 0x404] */ r_ecx = (u32)(r_edi+0x404u);
    /* 00538123: call dword ptr [eax + 8] */ { u32 t = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, 0x538126u); call_ind(t); }
    /* 00538126: mov edx, dword ptr [edi + 0x3fc] */ r_edx = R32((u32)(r_edi+0x3fcu));
    /* 0053812c: mov eax, dword ptr [edi + edx*4 + 0x420] */ r_eax = R32((u32)(r_edi+r_edx*4+0x420u));
    /* 00538133: and eax, 0xfffffff8 */ {  u32 a = r_eax; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00538136: mov dword ptr [edi + edx*4 + 0x420], eax */ W32((u32)(r_edi+r_edx*4+0x420u), r_eax);
    /* 0053813d: mov edx, dword ptr [edi + 0x440] */ r_edx = R32((u32)(r_edi+0x440u));
    /* 00538143: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00538145: je 0x53815e */ if (fZ) goto L_0053815e;
L_00538147:; BB(0x00538147);
    /* 00538147: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0053814b: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00538150: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00538154: mov dword ptr [edi + 0x440], 0 */ W32((u32)(r_edi+0x440u), 0x0u);
L_0053815e:; BB(0x0053815e);
    /* 0053815e: mov edx, dword ptr [edi + 0x444] */ r_edx = R32((u32)(r_edi+0x444u));
    /* 00538164: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00538166: je 0x53818c */ if (fZ) goto L_0053818c;
L_00538168:; BB(0x00538168);
    /* 00538168: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0053816c: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00538171: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00538175: mov dword ptr [edi + 0x444], 0 */ W32((u32)(r_edi+0x444u), 0x0u);
    /* 0053817f: jmp 0x53818c */ goto L_0053818c;
L_00538181:; BB(0x00538181);
    /* 00538181: mov eax, dword ptr [edi + 0x4c8] */ r_eax = R32((u32)(r_edi+0x4c8u));
    /* 00538187: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053818a: je 0x5381f1 */ if (fZ) goto L_005381f1;
L_0053818c:; BB(0x0053818c);
    /* 0053818c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0053818f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00538190: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00538191: ret 4 */ FN_RET(0x00537e64); r_esp += 8; return;
L_00538194:; BB(0x00538194);
    /* 00538194: push 0xdc */ { u32 v = 0xdcu; r_esp -= 4; W32(r_esp, v); }
    /* 00538199: lea eax, [edi + 0x300] */ r_eax = (u32)(r_edi+0x300u);
    /* 0053819f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005381a0: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x5381a5u); f_00509590();
    /* 005381a5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005381a8: mov dword ptr [edi + esi*4 + 0x440], eax */ W32((u32)(r_edi+r_esi*4+0x440u), r_eax);
    /* 005381af: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005381b1: je 0x5381bf */ if (fZ) goto L_005381bf;
L_005381b3:; BB(0x005381b3);
    /* 005381b3: mov ecx, eax */ r_ecx = r_eax;
    /* 005381b5: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x5381bau); f_00508f48();
    /* 005381ba: jmp 0x537f6d */ goto L_00537f6d;
L_005381bf:; BB(0x005381bf);
    /* 005381bf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005381c1: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005381c3: jle 0x537fdf */ if ((fZ||fS!=fO)) goto L_00537fdf;
L_005381c9:; BB(0x005381c9);
    /* 005381c9: mov dword ptr [esp + 0xc], ebx */ W32((u32)(r_esp+0xcu), r_ebx);
    /* 005381cd: mov ebx, esi */ r_ebx = r_esi;
    /* 005381cf: mov esi, eax */ r_esi = r_eax;
L_005381d1:; BB(0x005381d1);
    /* 005381d1: mov ecx, dword ptr [edi + esi*4 + 0x440] */ r_ecx = R32((u32)(r_edi+r_esi*4+0x440u));
    /* 005381d8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005381da: je 0x5381e1 */ if (fZ) goto L_005381e1;
L_005381dc:; BB(0x005381dc);
    /* 005381dc: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x5381e1u); f_00508f48();
L_005381e1:; BB(0x005381e1);
    /* 005381e1: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005381e4: cmp esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005381e6: jl 0x5381d1 */ if ((fS!=fO)) goto L_005381d1;
L_005381e8:; BB(0x005381e8);
    /* 005381e8: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 005381ec: jmp 0x537fdf */ goto L_00537fdf;
L_005381f1:; BB(0x005381f1);
    /* 005381f1: mov ecx, edi */ r_ecx = r_edi;
    /* 005381f3: call 0x53781c */ r_esp -= 4; W32(r_esp, 0x5381f8u); f_0053781c();
    /* 005381f8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005381fa: jne 0x53818c */ if (!fZ) goto L_0053818c;
L_005381fc:; BB(0x005381fc);
    /* 005381fc: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005381fe: mov ecx, edi */ r_ecx = r_edi;
    /* 00538200: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x538205u); f_0051f62c();
    /* 00538205: jmp 0x53818c */ goto L_0053818c;
L_00538207:; BB(0x00538207);
    /* 00538207: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00538209: mov ecx, edi */ r_ecx = r_edi;
    /* 0053820b: call dword ptr [eax + 0x188] */ { u32 t = R32((u32)(r_eax+0x188u)); r_esp -= 4; W32(r_esp, 0x538211u); call_ind(t); }
    /* 00538211: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00538213: mov eax, dword ptr [edi + 0x3c8] */ r_eax = R32((u32)(r_edi+0x3c8u));
    /* 00538219: and eax, 0xfffffffc */ {  u32 a = r_eax; u32 b = 0xfffffffcu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0053821c: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0053821f: mov dword ptr [edi + 0x3c8], eax */ W32((u32)(r_edi+0x3c8u), r_eax);
    /* 00538225: mov ecx, edi */ r_ecx = r_edi;
    /* 00538227: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x53822cu); f_0051f664();
    /* 0053822c: mov eax, dword ptr [edi + 0x3fc] */ r_eax = R32((u32)(r_edi+0x3fcu));
    /* 00538232: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 00538235: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00538237: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00538239: lea edx, [eax + edx*4] */ r_edx = (u32)(r_eax+r_edx*4);
    /* 0053823c: mov esi, dword ptr [edx*4 + 0xa7352c] */ r_esi = R32((u32)(r_edx*4+0xa7352cu));
    /* 00538243: mov word ptr [edi + 0xb8], si */ W16((u32)(r_edi+0xb8u), (u16)r_esi);
    /* 0053824a: mov eax, dword ptr [edx*4 + 0xa73534] */ r_eax = R32((u32)(r_edx*4+0xa73534u));
    /* 00538251: mov dword ptr [edi + 0x4d8], eax */ W32((u32)(r_edi+0x4d8u), r_eax);
    /* 00538257: mov eax, dword ptr [edx*4 + 0xa73530] */ r_eax = R32((u32)(r_edx*4+0xa73530u));
    /* 0053825e: mov dword ptr [edi + 0x4dc], eax */ W32((u32)(r_edi+0x4dcu), r_eax);
    /* 00538264: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00538266: mov dword ptr [edi + 0x4c8], eax */ W32((u32)(r_edi+0x4c8u), r_eax);
    /* 0053826c: mov dword ptr [edi + 0x440], eax */ W32((u32)(r_edi+0x440u), r_eax);
    /* 00538272: mov dword ptr [edi + 0x444], eax */ W32((u32)(r_edi+0x444u), r_eax);
    /* 00538278: call 0x520e6c */ r_esp -= 4; W32(r_esp, 0x53827du); f_00520e6c();
    /* 0053827d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053827f: je 0x538297 */ if (fZ) goto L_00538297;
L_00538281:; BB(0x00538281);
    /* 00538281: mov dword ptr [0x9bcae8], 0x40000000 */ W32((u32)(0x9bcae8u), 0x40000000u);
    /* 0053828b: mov dword ptr [0x9bcad8], 0x40000000 */ W32((u32)(0x9bcad8u), 0x40000000u);
    /* 00538295: jmp 0x5382ab */ goto L_005382ab;
L_00538297:; BB(0x00538297);
    /* 00538297: mov dword ptr [0x9bcae8], 0x3f4ccccd */ W32((u32)(0x9bcae8u), 0x3f4ccccdu);
    /* 005382a1: mov dword ptr [0x9bcad8], 0x3f4ccccd */ W32((u32)(0x9bcad8u), 0x3f4ccccdu);
L_005382ab:; BB(0x005382ab);
    /* 005382ab: push 0x1eb */ { u32 v = 0x1ebu; r_esp -= 4; W32(r_esp, v); }
    /* 005382b0: mov ecx, edi */ r_ecx = r_edi;
    /* 005382b2: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x5382b7u); f_007879b8();
    /* 005382b7: add edi, 0x38 */ {  u32 a = r_edi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005382ba: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005382bc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005382bd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005382be: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005382bf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005382c0: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5382c5u); f_00814298();
    /* 005382c5: push 0xffffff00 */ { u32 v = 0xffffff00u; r_esp -= 4; W32(r_esp, v); }
    /* 005382ca: call 0x814680 */ r_esp -= 4; W32(r_esp, 0x5382cfu); f_00814680();
    /* 005382cf: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005382d2: jmp 0x53818c */ goto L_0053818c;
}

