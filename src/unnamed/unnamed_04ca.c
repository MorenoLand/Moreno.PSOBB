#include "protos.h"

void f_004ca0de(void)
{
    FN_ENTER(0x004ca0de);
    /* 004ca0de: mov eax, dword ptr [esi + 0x3c8] */ r_eax = R32((u32)(r_esi+0x3c8u));
    /* 004ca0e4: and eax, 0xfffffeff */ {  u32 a = r_eax; u32 b = 0xfffffeffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004ca0e9: mov dword ptr [esi + 0x3c8], eax */ W32((u32)(r_esi+0x3c8u), r_eax);
    /* 004ca0ef: jmp 0x4ca2b2 */ goto L_004ca2b2;
L_004ca2b2:; BB(0x004ca2b2);
    /* 004ca2b2: add esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004ca2b5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004ca2b6: ret 4 */ FN_RET(0x004ca0de); r_esp += 8; return;
}

void f_004ca0f4(void)
{
    FN_ENTER(0x004ca0f4);
    /* 004ca0f4: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 004ca0f6: mov eax, 1 */ r_eax = 0x1u;
    /* 004ca0fb: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
    /* 004ca102: mov ecx, esi */ r_ecx = r_esi;
    /* 004ca104: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x4ca10au); call_ind(t); }
    /* 004ca10a: mov dword ptr [esi + 0x3ec], 0 */ W32((u32)(r_esi+0x3ecu), 0x0u);
    /* 004ca114: mov ecx, esi */ r_ecx = r_esi;
    /* 004ca116: call 0x4cb184 */ r_esp -= 4; W32(r_esp, 0x4ca11bu); f_004cb184();
    /* 004ca11b: mov eax, dword ptr [esi + 0x3c8] */ r_eax = R32((u32)(r_esi+0x3c8u));
    /* 004ca121: and eax, 0xffffffc9 */ {  u32 a = r_eax; u32 b = 0xffffffc9u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004ca124: mov dword ptr [esi + 0x3c8], eax */ W32((u32)(r_esi+0x3c8u), r_eax);
    /* 004ca12a: lea edx, [esi + 0x39c] */ r_edx = (u32)(r_esi+0x39cu);
    /* 004ca130: mov ecx, esi */ r_ecx = r_esi;
    /* 004ca132: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004ca133: call 0x4ca2f0 */ r_esp -= 4; W32(r_esp, 0x4ca138u); f_004ca2f0();
    /* 004ca138: fld dword ptr [0x9084b8] */ FPUSH(R_F32((u32)(0x9084b8u)));
    /* 004ca13e: mov edx, dword ptr [esi + 0x3c8] */ r_edx = R32((u32)(r_esi+0x3c8u));
    /* 004ca144: mov dword ptr [esi + 0x6f8], 0x3ca3d70a */ W32((u32)(r_esi+0x6f8u), 0x3ca3d70au);
    /* 004ca14e: or edx, 0x100 */ {  u32 a = r_edx; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 004ca154: mov dword ptr [esi + 0x714], 0x3ca3d70a */ W32((u32)(r_esi+0x714u), 0x3ca3d70au);
    /* 004ca15e: mov dword ptr [esi + 0x3c8], edx */ W32((u32)(r_esi+0x3c8u), r_edx);
    /* 004ca164: mov edx, dword ptr [0xa48500] */ r_edx = R32((u32)(0xa48500u));
    /* 004ca16a: mov dword ptr [esi + 0x730], 0x3ca3d70a */ W32((u32)(r_esi+0x730u), 0x3ca3d70au);
    /* 004ca174: mov dword ptr [esi + 0x74c], 0x3ca3d70a */ W32((u32)(r_esi+0x74cu), 0x3ca3d70au);
    /* 004ca17e: fmul dword ptr [edx + 0x10] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x10u));
    /* 004ca181: fnstcw word ptr [esp + 0x24] */ W16((u32)(r_esp+0x24u), fcw);
    /* 004ca185: movzx eax, word ptr [esp + 0x24] */ r_eax = (u32)R16((u32)(r_esp+0x24u));
    /* 004ca18a: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004ca18f: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 004ca193: fldcw word ptr [esp + 0x2c] */ fcw = R16((u32)(r_esp+0x2cu));
    /* 004ca197: fistp dword ptr [esp + 0x34] */ W32((u32)(r_esp+0x34u), (u32)fx_int32(ST(0))); FPOP();
    /* 004ca19b: fldcw word ptr [esp + 0x24] */ fcw = R16((u32)(r_esp+0x24u));
    /* 004ca19f: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 004ca1a3: push dword ptr [edx + 0x10] */ { u32 v = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 004ca1a6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ca1a7: call 0x782a34 */ r_esp -= 4; W32(r_esp, 0x4ca1acu); f_00782a34();
    /* 004ca1ac: fld dword ptr [0x9084c8] */ FPUSH(R_F32((u32)(0x9084c8u)));
    /* 004ca1b2: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004ca1b4: fstp dword ptr [esi + 0x874] */ W_F32((u32)(r_esi+0x874u), ST(0)); FPOP();
    /* 004ca1ba: add esi, 0x63c */ {  u32 a = r_esi; u32 b = 0x63cu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004ca1c0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004ca1c2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ca1c3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ca1c4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004ca1c5: push 0x416 */ { u32 v = 0x416u; r_esp -= 4; W32(r_esp, v); }
    /* 004ca1ca: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4ca1cfu); f_00814298();
    /* 004ca1cf: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ca1d2: jmp 0x4ca2b2 */ goto L_004ca2b2;
L_004ca2b2:; BB(0x004ca2b2);
    /* 004ca2b2: add esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004ca2b5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004ca2b6: ret 4 */ FN_RET(0x004ca0f4); r_esp += 8; return;
}

void f_004ca1d7(void)
{
    FN_ENTER(0x004ca1d7);
    /* 004ca1d7: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004ca1d9: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 004ca1db: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 004ca1dd: mov ecx, esi */ r_ecx = r_esi;
    /* 004ca1df: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4ca1e5u); call_ind(t); }
    /* 004ca1e5: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 004ca1e9: mov ecx, dword ptr [esi + 0x694] */ r_ecx = R32((u32)(r_esi+0x694u));
    /* 004ca1ef: mov byte ptr [esp + 0xc], 0xa8 */ W8((u32)(r_esp+0xcu), 0xa8u);
    /* 004ca1f4: mov edx, 0x18 */ r_edx = 0x18u;
    /* 004ca1f9: mov byte ptr [esp + 0xd], 6 */ W8((u32)(r_esp+0xdu), 0x6u);
    /* 004ca1fe: mov word ptr [esp + 0xe], ax */ W16((u32)(r_esp+0xeu), (u16)r_eax);
    /* 004ca203: mov eax, dword ptr [esi + 0x67c] */ r_eax = R32((u32)(r_esi+0x67cu));
    /* 004ca209: mov word ptr [esp + 0x10], dx */ W16((u32)(r_esp+0x10u), (u16)r_edx);
    /* 004ca20e: mov word ptr [esp + 0x12], ax */ W16((u32)(r_esp+0x12u), (u16)r_eax);
    /* 004ca213: movzx eax, word ptr [esi + 0x394] */ r_eax = (u32)R16((u32)(r_esi+0x394u));
    /* 004ca21a: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 004ca21e: mov eax, dword ptr [esi + 0x690] */ r_eax = R32((u32)(r_esi+0x690u));
    /* 004ca224: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 004ca228: mov dword ptr [esp + 0x1c], ecx */ W32((u32)(r_esp+0x1cu), r_ecx);
    /* 004ca22c: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4ca231u); f_008587a5();
    /* 004ca231: mov dword ptr [esp + 0x3c], eax */ W32((u32)(r_esp+0x3cu), r_eax);
    /* 004ca235: fild dword ptr [esp + 0x3c] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x3cu)));
    /* 004ca239: fdiv dword ptr [0x9084c0] */ ST(0) = ST(0) / R_F32((u32)(0x9084c0u));
    /* 004ca23f: fmul dword ptr [0x9084c4] */ ST(0) = ST(0) * R_F32((u32)(0x9084c4u));
    /* 004ca245: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 004ca249: fnstcw word ptr [esp + 0x24] */ W16((u32)(r_esp+0x24u), fcw);
    /* 004ca24d: movzx eax, word ptr [esp + 0x24] */ r_eax = (u32)R16((u32)(r_esp+0x24u));
    /* 004ca252: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004ca257: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 004ca25b: fldcw word ptr [esp + 0x2c] */ fcw = R16((u32)(r_esp+0x2cu));
    /* 004ca25f: fistp dword ptr [esp + 0x34] */ W32((u32)(r_esp+0x34u), (u32)fx_int32(ST(0))); FPOP();
    /* 004ca263: fldcw word ptr [esp + 0x24] */ fcw = R16((u32)(r_esp+0x24u));
    /* 004ca267: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 004ca26b: mov byte ptr [esp + 0x20], al */ W8((u32)(r_esp+0x20u), (u8)r_eax);
    /* 004ca26f: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4ca274u); f_008003e0();
    /* 004ca274: jmp 0x4ca2b2 */ goto L_004ca2b2;
L_004ca2b2:; BB(0x004ca2b2);
    /* 004ca2b2: add esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004ca2b5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004ca2b6: ret 4 */ FN_RET(0x004ca1d7); r_esp += 8; return;
}

void f_004ca276(void)
{
    FN_ENTER(0x004ca276);
    /* 004ca276: mov ecx, esi */ r_ecx = r_esi;
    /* 004ca278: call 0x4c0b78 */ r_esp -= 4; W32(r_esp, 0x4ca27du); f_004c0b78();
    /* 004ca27d: mov dword ptr [esp + 0x48], ebx */ W32((u32)(r_esp+0x48u), r_ebx);
    /* 004ca281: mov dword ptr [esp + 0x44], edi */ W32((u32)(r_esp+0x44u), r_edi);
    /* 004ca285: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004ca287: lea ecx, [esi + 0x6e4] */ r_ecx = (u32)(r_esi+0x6e4u);
    /* 004ca28d: mov edi, esi */ r_edi = r_esi;
    /* 004ca28f: mov esi, eax */ r_esi = r_eax;
    /* 004ca291: mov ebx, ecx */ r_ebx = r_ecx;
L_004ca293:; BB(0x004ca293);
    /* 004ca293: mov edx, dword ptr [esi + edi + 0x6e4] */ r_edx = R32((u32)(r_esi+r_edi+0x6e4u));
    /* 004ca29a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004ca29c: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x4ca29fu); call_ind(t); }
    /* 004ca29f: add esi, 0x1c */ {  u32 a = r_esi; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004ca2a2: add ebx, 0x1c */ {  u32 a = r_ebx; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004ca2a5: cmp esi, 0x70 */ {  u32 a = r_esi; u32 b = 0x70u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004ca2a8: jl 0x4ca293 */ if ((fS!=fO)) goto L_004ca293;
L_004ca2aa:; BB(0x004ca2aa);
    /* 004ca2aa: mov ebx, dword ptr [esp + 0x48] */ r_ebx = R32((u32)(r_esp+0x48u));
    /* 004ca2ae: mov edi, dword ptr [esp + 0x44] */ r_edi = R32((u32)(r_esp+0x44u));
    /* 004ca2b2: add esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004ca2b5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004ca2b6: ret 4 */ FN_RET(0x004ca276); r_esp += 8; return;
}

void f_004ca2b2(void)
{
    FN_ENTER(0x004ca2b2);
    /* 004ca2b2: add esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004ca2b5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004ca2b6: ret 4 */ FN_RET(0x004ca2b2); r_esp += 8; return;
}

void f_004ca2f0(void) /* sub_4CA2F0 */
{
    FN_ENTER(0x004ca2f0);
    /* 004ca2f0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004ca2f1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004ca2f2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ca2f3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004ca2f4: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004ca2f7: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004ca2f9: mov ebp, dword ptr [ebx + 0x38] */ r_ebp = R32((u32)(r_ebx+0x38u));
    /* 004ca2fc: mov esi, dword ptr [ebx + 0x3c] */ r_esi = R32((u32)(r_ebx+0x3cu));
    /* 004ca2ff: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 004ca303: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 004ca306: mov edi, dword ptr [ebx + 0x40] */ r_edi = R32((u32)(r_ebx+0x40u));
    /* 004ca309: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 004ca30b: fsub dword ptr [ebx + 0x38] */ ST(0) = ST(0) - R_F32((u32)(r_ebx+0x38u));
    /* 004ca30e: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004ca311: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 004ca319: fld dword ptr [eax + 8] */ FPUSH(R_F32((u32)(r_eax+0x8u)));
    /* 004ca31c: fsub dword ptr [ebx + 0x40] */ ST(0) = ST(0) - R_F32((u32)(r_ebx+0x40u));
    /* 004ca31f: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004ca323: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004ca324: call 0x7828e4 */ r_esp -= 4; W32(r_esp, 0x4ca329u); f_007828e4();
    /* 004ca329: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004ca32a: add esp, -0x10 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ca32d: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 004ca331: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 004ca335: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004ca337: lea eax, [esp + 0x1c] */ r_eax = (u32)(r_esp+0x1cu);
    /* 004ca33b: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 004ca33e: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 004ca342: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 004ca346: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004ca34a: call 0x5206cc */ r_esp -= 4; W32(r_esp, 0x4ca34fu); f_005206cc();
    /* 004ca34f: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 004ca353: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ca354: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004ca356: call 0x520750 */ r_esp -= 4; W32(r_esp, 0x4ca35bu); f_00520750();
    /* 004ca35b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004ca35c: mov dword ptr [ebx + 0x3c], esi */ W32((u32)(r_ebx+0x3cu), r_esi);
    /* 004ca35f: call 0x4ce618 */ r_esp -= 4; W32(r_esp, 0x4ca364u); f_004ce618();
    /* 004ca364: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004ca365: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ca367: je 0x4ca372 */ if (fZ) goto L_004ca372;
L_004ca369:; BB(0x004ca369);
    /* 004ca369: mov dword ptr [ebx + 0x38], ebp */ W32((u32)(r_ebx+0x38u), r_ebp);
    /* 004ca36c: mov dword ptr [ebx + 0x3c], esi */ W32((u32)(r_ebx+0x3cu), r_esi);
    /* 004ca36f: mov dword ptr [ebx + 0x40], edi */ W32((u32)(r_ebx+0x40u), r_edi);
L_004ca372:; BB(0x004ca372);
    /* 004ca372: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004ca375: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004ca376: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ca377: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004ca378: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004ca379: ret 4 */ FN_RET(0x004ca2f0); r_esp += 8; return;
}

void f_004ca37c(void) /* sub_4CA37C */
{
    FN_ENTER(0x004ca37c);
    /* 004ca37c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004ca37d: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004ca380: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004ca382: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 004ca386: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ca389: je 0x4ca5c8 */ if (fZ) goto L_004ca5c8;
L_004ca38f:; BB(0x004ca38f);
    /* 004ca38f: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ca392: je 0x4ca4fb */ if (fZ) goto L_004ca4fb;
L_004ca398:; BB(0x004ca398);
    /* 004ca398: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ca39b: je 0x4ca4fb */ if (fZ) goto L_004ca4fb;
L_004ca3a1:; BB(0x004ca3a1);
    /* 004ca3a1: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ca3a4: je 0x4ca438 */ if (fZ) goto L_004ca438;
L_004ca3aa:; BB(0x004ca3aa);
    /* 004ca3aa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ca3ac: jne 0x4ca408 */ if (!fZ) goto L_004ca408;
L_004ca3ae:; BB(0x004ca3ae);
    /* 004ca3ae: mov edx, dword ptr [ebx + 0x85c] */ r_edx = R32((u32)(r_ebx+0x85cu));
    /* 004ca3b4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ca3b6: je 0x4ca3fe */ if (fZ) goto L_004ca3fe;
L_004ca3b8:; BB(0x004ca3b8);
    /* 004ca3b8: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ca3bb: jne 0x4ca3fe */ if (!fZ) goto L_004ca3fe;
L_004ca3bd:; BB(0x004ca3bd);
    /* 004ca3bd: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 004ca3c1: mov esi, eax */ r_esi = r_eax;
    /* 004ca3c3: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 004ca3c7: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 004ca3ca: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004ca3cc: lea ecx, [ebx + 0x6e4] */ r_ecx = (u32)(r_ebx+0x6e4u);
    /* 004ca3d2: mov ebp, edx */ r_ebp = r_edx;
    /* 004ca3d4: mov edi, ebx */ r_edi = r_ebx;
    /* 004ca3d6: mov ebx, ecx */ r_ebx = r_ecx;
L_004ca3d8:; BB(0x004ca3d8);
    /* 004ca3d8: mov eax, dword ptr [ebp + edi + 0x6e4] */ r_eax = R32((u32)(r_ebp+r_edi+0x6e4u));
    /* 004ca3df: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004ca3e1: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x4ca3e4u); call_ind(t); }
    /* 004ca3e4: add ebp, 0x1c */ {  u32 a = r_ebp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004ca3e7: add ebx, 0x1c */ {  u32 a = r_ebx; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004ca3ea: cmp ebp, 0x70 */ {  u32 a = r_ebp; u32 b = 0x70u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004ca3ed: jl 0x4ca3d8 */ if ((fS!=fO)) goto L_004ca3d8;
L_004ca3ef:; BB(0x004ca3ef);
    /* 004ca3ef: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
    /* 004ca3f2: mov eax, esi */ r_eax = r_esi;
    /* 004ca3f4: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 004ca3f8: mov ebx, edi */ r_ebx = r_edi;
    /* 004ca3fa: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
L_004ca3fe:; BB(0x004ca3fe);
    /* 004ca3fe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ca3ff: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004ca401: call 0x4ca610 */ r_esp -= 4; W32(r_esp, 0x4ca406u); f_004ca610();
    /* 004ca406: jmp 0x4ca431 */ goto L_004ca431;
L_004ca408:; BB(0x004ca408);
    /* 004ca408: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ca40b: jne 0x4ca429 */ if (!fZ) goto L_004ca429;
L_004ca40d:; BB(0x004ca40d);
    /* 004ca40d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ca40e: mov edx, dword ptr [ebx + 0x3c8] */ r_edx = R32((u32)(r_ebx+0x3c8u));
    /* 004ca414: and edx, 0xfffffeff */ {  u32 a = r_edx; u32 b = 0xfffffeffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 004ca41a: mov dword ptr [ebx + 0x3c8], edx */ W32((u32)(r_ebx+0x3c8u), r_edx);
    /* 004ca420: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004ca422: call 0x4ca610 */ r_esp -= 4; W32(r_esp, 0x4ca427u); f_004ca610();
    /* 004ca427: jmp 0x4ca431 */ goto L_004ca431;
L_004ca429:; BB(0x004ca429);
    /* 004ca429: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ca42a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004ca42c: call 0x4ca610 */ r_esp -= 4; W32(r_esp, 0x4ca431u); f_004ca610();
L_004ca431:; BB(0x004ca431);
    /* 004ca431: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004ca434: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004ca435: ret 4 */ FN_RET(0x004ca37c); r_esp += 8; return;
L_004ca438:; BB(0x004ca438);
    /* 004ca438: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 004ca43c: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 004ca440: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004ca442: lea ecx, [ebx + 0x6e4] */ r_ecx = (u32)(r_ebx+0x6e4u);
    /* 004ca448: mov edi, eax */ r_edi = r_eax;
    /* 004ca44a: mov esi, ecx */ r_esi = r_ecx;
L_004ca44c:; BB(0x004ca44c);
    /* 004ca44c: mov edx, dword ptr [edi + ebx + 0x6e4] */ r_edx = R32((u32)(r_edi+r_ebx+0x6e4u));
    /* 004ca453: mov ecx, esi */ r_ecx = r_esi;
    /* 004ca455: call dword ptr [edx + 0x20] */ { u32 t = R32((u32)(r_edx+0x20u)); r_esp -= 4; W32(r_esp, 0x4ca458u); call_ind(t); }
    /* 004ca458: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ca45a: jne 0x4ca4ee */ if (!fZ) goto L_004ca4ee;
L_004ca460:; BB(0x004ca460);
    /* 004ca460: add edi, 0x1c */ {  u32 a = r_edi; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004ca463: add esi, 0x1c */ {  u32 a = r_esi; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004ca466: cmp edi, 0x70 */ {  u32 a = r_edi; u32 b = 0x70u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004ca469: jl 0x4ca44c */ if ((fS!=fO)) goto L_004ca44c;
L_004ca46b:; BB(0x004ca46b);
    /* 004ca46b: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 004ca46f: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 004ca473: mov eax, dword ptr [ebx + 0x3c8] */ r_eax = R32((u32)(r_ebx+0x3c8u));
    /* 004ca479: test al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004ca47b: je 0x4ca48c */ if (fZ) goto L_004ca48c;
L_004ca47d:; BB(0x004ca47d);
    /* 004ca47d: mov eax, dword ptr [ebx + 0x67c] */ r_eax = R32((u32)(r_ebx+0x67cu));
    /* 004ca483: mov ecx, eax */ r_ecx = r_eax;
    /* 004ca485: mov edx, 0x9080e0 */ r_edx = 0x9080e0u;
    /* 004ca48a: jmp 0x4ca4a8 */ goto L_004ca4a8;
L_004ca48c:; BB(0x004ca48c);
    /* 004ca48c: mov eax, dword ptr [ebx + 0x67c] */ r_eax = R32((u32)(r_ebx+0x67cu));
    /* 004ca492: cmp eax, 0x32 */ {  u32 a = r_eax; u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004ca495: jge 0x4ca4a0 */ if ((fS==fO)) goto L_004ca4a0;
L_004ca497:; BB(0x004ca497);
    /* 004ca497: mov ecx, eax */ r_ecx = r_eax;
    /* 004ca499: mov edx, 0x9088c0 */ r_edx = 0x9088c0u;
    /* 004ca49e: jmp 0x4ca4a8 */ goto L_004ca4a8;
L_004ca4a0:; BB(0x004ca4a0);
    /* 004ca4a0: lea ecx, [eax - 0x32] */ r_ecx = (u32)(r_eax+0xffffffceu);
    /* 004ca4a3: mov edx, 0x908160 */ r_edx = 0x908160u;
L_004ca4a8:; BB(0x004ca4a8);
    /* 004ca4a8: mov ecx, dword ptr [edx + ecx*4] */ r_ecx = R32((u32)(r_edx+r_ecx*4));
    /* 004ca4ab: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004ca4ae: cmp ecx, 0x21 */ {  u32 a = r_ecx; u32 b = 0x21u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ca4b1: jne 0x4ca4c3 */ if (!fZ) goto L_004ca4c3;
L_004ca4b3:; BB(0x004ca4b3);
    /* 004ca4b3: mov dword ptr [ebx + 0x67c], 0 */ W32((u32)(r_ebx+0x67cu), 0x0u);
    /* 004ca4bd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004ca4bf: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004ca4c1: jmp 0x4ca4a8 */ goto L_004ca4a8;
L_004ca4c3:; BB(0x004ca4c3);
    /* 004ca4c3: cmp ecx, 0x22 */ {  u32 a = r_ecx; u32 b = 0x22u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ca4c6: je 0x4ca4db */ if (fZ) goto L_004ca4db;
L_004ca4c8:; BB(0x004ca4c8);
    /* 004ca4c8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004ca4c9: mov dword ptr [ebx + 0x67c], eax */ W32((u32)(r_ebx+0x67cu), r_eax);
    /* 004ca4cf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004ca4d1: call 0x4c3074 */ r_esp -= 4; W32(r_esp, 0x4ca4d6u); f_004c3074();
    /* 004ca4d6: jmp 0x4ca431 */ goto L_004ca431;
L_004ca4db:; BB(0x004ca4db);
    /* 004ca4db: mov dword ptr [ebx + 0x67c], 0x32 */ W32((u32)(r_ebx+0x67cu), 0x32u);
    /* 004ca4e5: mov eax, 0x32 */ r_eax = 0x32u;
    /* 004ca4ea: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004ca4ec: jmp 0x4ca4a8 */ goto L_004ca4a8;
L_004ca4ee:; BB(0x004ca4ee);
    /* 004ca4ee: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 004ca4f2: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 004ca4f6: jmp 0x4ca431 */ goto L_004ca431;
L_004ca4fb:; BB(0x004ca4fb);
    /* 004ca4fb: mov dword ptr [ebx + 0x764], 0 */ W32((u32)(r_ebx+0x764u), 0x0u);
    /* 004ca505: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 004ca509: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004ca50b: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 004ca50f: lea ecx, [ebx + 0x6e4] */ r_ecx = (u32)(r_ebx+0x6e4u);
    /* 004ca515: mov edi, eax */ r_edi = r_eax;
    /* 004ca517: mov esi, ecx */ r_esi = r_ecx;
L_004ca519:; BB(0x004ca519);
    /* 004ca519: mov edx, dword ptr [edi + ebx + 0x6e4] */ r_edx = R32((u32)(r_edi+r_ebx+0x6e4u));
    /* 004ca520: mov ecx, esi */ r_ecx = r_esi;
    /* 004ca522: call dword ptr [edx + 0x20] */ { u32 t = R32((u32)(r_edx+0x20u)); r_esp -= 4; W32(r_esp, 0x4ca525u); call_ind(t); }
    /* 004ca525: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ca527: jne 0x4ca5bb */ if (!fZ) goto L_004ca5bb;
L_004ca52d:; BB(0x004ca52d);
    /* 004ca52d: add edi, 0x1c */ {  u32 a = r_edi; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004ca530: add esi, 0x1c */ {  u32 a = r_esi; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004ca533: cmp edi, 0x70 */ {  u32 a = r_edi; u32 b = 0x70u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004ca536: jl 0x4ca519 */ if ((fS!=fO)) goto L_004ca519;
L_004ca538:; BB(0x004ca538);
    /* 004ca538: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 004ca53c: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 004ca540: mov eax, dword ptr [ebx + 0x3c8] */ r_eax = R32((u32)(r_ebx+0x3c8u));
    /* 004ca546: test al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004ca548: je 0x4ca559 */ if (fZ) goto L_004ca559;
L_004ca54a:; BB(0x004ca54a);
    /* 004ca54a: mov eax, dword ptr [ebx + 0x67c] */ r_eax = R32((u32)(r_ebx+0x67cu));
    /* 004ca550: mov ecx, eax */ r_ecx = r_eax;
    /* 004ca552: mov edx, 0x9080e0 */ r_edx = 0x9080e0u;
    /* 004ca557: jmp 0x4ca575 */ goto L_004ca575;
L_004ca559:; BB(0x004ca559);
    /* 004ca559: mov eax, dword ptr [ebx + 0x67c] */ r_eax = R32((u32)(r_ebx+0x67cu));
    /* 004ca55f: cmp eax, 0x32 */ {  u32 a = r_eax; u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004ca562: jge 0x4ca56d */ if ((fS==fO)) goto L_004ca56d;
L_004ca564:; BB(0x004ca564);
    /* 004ca564: mov ecx, eax */ r_ecx = r_eax;
    /* 004ca566: mov edx, 0x9088c0 */ r_edx = 0x9088c0u;
    /* 004ca56b: jmp 0x4ca575 */ goto L_004ca575;
L_004ca56d:; BB(0x004ca56d);
    /* 004ca56d: lea ecx, [eax - 0x32] */ r_ecx = (u32)(r_eax+0xffffffceu);
    /* 004ca570: mov edx, 0x908160 */ r_edx = 0x908160u;
L_004ca575:; BB(0x004ca575);
    /* 004ca575: mov ecx, dword ptr [edx + ecx*4] */ r_ecx = R32((u32)(r_edx+r_ecx*4));
    /* 004ca578: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004ca57b: cmp ecx, 0x21 */ {  u32 a = r_ecx; u32 b = 0x21u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ca57e: jne 0x4ca590 */ if (!fZ) goto L_004ca590;
L_004ca580:; BB(0x004ca580);
    /* 004ca580: mov dword ptr [ebx + 0x67c], 0 */ W32((u32)(r_ebx+0x67cu), 0x0u);
    /* 004ca58a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004ca58c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004ca58e: jmp 0x4ca575 */ goto L_004ca575;
L_004ca590:; BB(0x004ca590);
    /* 004ca590: cmp ecx, 0x22 */ {  u32 a = r_ecx; u32 b = 0x22u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ca593: je 0x4ca5a8 */ if (fZ) goto L_004ca5a8;
L_004ca595:; BB(0x004ca595);
    /* 004ca595: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004ca596: mov dword ptr [ebx + 0x67c], eax */ W32((u32)(r_ebx+0x67cu), r_eax);
    /* 004ca59c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004ca59e: call 0x4c3074 */ r_esp -= 4; W32(r_esp, 0x4ca5a3u); f_004c3074();
    /* 004ca5a3: jmp 0x4ca431 */ goto L_004ca431;
L_004ca5a8:; BB(0x004ca5a8);
    /* 004ca5a8: mov dword ptr [ebx + 0x67c], 0x32 */ W32((u32)(r_ebx+0x67cu), 0x32u);
    /* 004ca5b2: mov eax, 0x32 */ r_eax = 0x32u;
    /* 004ca5b7: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004ca5b9: jmp 0x4ca575 */ goto L_004ca575;
L_004ca5bb:; BB(0x004ca5bb);
    /* 004ca5bb: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 004ca5bf: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 004ca5c3: jmp 0x4ca431 */ goto L_004ca431;
L_004ca5c8:; BB(0x004ca5c8);
    /* 004ca5c8: mov edx, dword ptr [ebx + 0x3c8] */ r_edx = R32((u32)(r_ebx+0x3c8u));
    /* 004ca5ce: mov dword ptr [ebx + 0x6f8], 0x3da3d70a */ W32((u32)(r_ebx+0x6f8u), 0x3da3d70au);
    /* 004ca5d8: or edx, 0x100 */ {  u32 a = r_edx; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 004ca5de: mov dword ptr [ebx + 0x3c8], edx */ W32((u32)(r_ebx+0x3c8u), r_edx);
    /* 004ca5e4: mov dword ptr [ebx + 0x714], 0x3da3d70a */ W32((u32)(r_ebx+0x714u), 0x3da3d70au);
    /* 004ca5ee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ca5ef: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004ca5f1: mov dword ptr [ebx + 0x730], 0x3da3d70a */ W32((u32)(r_ebx+0x730u), 0x3da3d70au);
    /* 004ca5fb: mov dword ptr [ebx + 0x74c], 0x3da3d70a */ W32((u32)(r_ebx+0x74cu), 0x3da3d70au);
    /* 004ca605: call 0x4ca610 */ r_esp -= 4; W32(r_esp, 0x4ca60au); f_004ca610();
    /* 004ca60a: jmp 0x4ca431 */ goto L_004ca431;
}

void f_004ca610(void) /* sub_4CA610 */
{
    FN_ENTER(0x004ca610);
    /* 004ca610: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004ca611: sub esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004ca614: mov esi, ecx */ r_esi = r_ecx;
    /* 004ca616: mov eax, dword ptr [esp + 0x68] */ r_eax = R32((u32)(r_esp+0x68u));
    /* 004ca61a: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004ca61d: ja 0x4ca90b */ if ((!fC&&!fZ)) goto L_004ca90b;
L_004ca623:; BB(0x004ca623);
    /* 004ca623: mov eax, dword ptr [eax*4 + 0x907e1c] */ r_eax = R32((u32)(r_eax*4+0x907e1cu));
    /* 004ca62a: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_004ca90b:; BB(0x004ca90b);
    /* 004ca90b: add esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004ca90e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004ca90f: ret 4 */ FN_RET(0x004ca610); r_esp += 8; return;
}

void f_004ca62c(void)
{
    FN_ENTER(0x004ca62c);
    /* 004ca62c: mov eax, dword ptr [esi + 0x860] */ r_eax = R32((u32)(r_esi+0x860u));
    /* 004ca632: cmp eax, 0x28 */ {  u32 a = r_eax; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004ca635: jl 0x4ca90b */ if ((fS!=fO)) goto L_004ca90b;
L_004ca63b:; BB(0x004ca63b);
    /* 004ca63b: mov eax, dword ptr [esi + 0x3c8] */ r_eax = R32((u32)(r_esi+0x3c8u));
    /* 004ca641: test al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004ca643: je 0x4ca654 */ if (fZ) goto L_004ca654;
L_004ca645:; BB(0x004ca645);
    /* 004ca645: mov eax, dword ptr [esi + 0x67c] */ r_eax = R32((u32)(r_esi+0x67cu));
    /* 004ca64b: mov ecx, eax */ r_ecx = r_eax;
    /* 004ca64d: mov edx, 0x9080e0 */ r_edx = 0x9080e0u;
    /* 004ca652: jmp 0x4ca670 */ goto L_004ca670;
L_004ca654:; BB(0x004ca654);
    /* 004ca654: mov eax, dword ptr [esi + 0x67c] */ r_eax = R32((u32)(r_esi+0x67cu));
    /* 004ca65a: cmp eax, 0x32 */ {  u32 a = r_eax; u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004ca65d: jge 0x4ca668 */ if ((fS==fO)) goto L_004ca668;
L_004ca65f:; BB(0x004ca65f);
    /* 004ca65f: mov ecx, eax */ r_ecx = r_eax;
    /* 004ca661: mov edx, 0x9088c0 */ r_edx = 0x9088c0u;
    /* 004ca666: jmp 0x4ca670 */ goto L_004ca670;
L_004ca668:; BB(0x004ca668);
    /* 004ca668: lea ecx, [eax - 0x32] */ r_ecx = (u32)(r_eax+0xffffffceu);
    /* 004ca66b: mov edx, 0x908160 */ r_edx = 0x908160u;
L_004ca670:; BB(0x004ca670);
    /* 004ca670: mov ecx, dword ptr [edx + ecx*4] */ r_ecx = R32((u32)(r_edx+r_ecx*4));
    /* 004ca673: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004ca676: cmp ecx, 0x21 */ {  u32 a = r_ecx; u32 b = 0x21u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ca679: jne 0x4ca912 */ if (!fZ) goto L_004ca912;
L_004ca67f:; BB(0x004ca67f);
    /* 004ca67f: mov dword ptr [esi + 0x67c], 0 */ W32((u32)(r_esi+0x67cu), 0x0u);
    /* 004ca689: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004ca68b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004ca68d: jmp 0x4ca670 */ goto L_004ca670;
L_004ca90b:; BB(0x004ca90b);
    /* 004ca90b: add esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004ca90e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004ca90f: ret 4 */ FN_RET(0x004ca62c); r_esp += 8; return;
L_004ca912:; BB(0x004ca912);
    /* 004ca912: cmp ecx, 0x22 */ {  u32 a = r_ecx; u32 b = 0x22u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ca915: je 0x4ca92c */ if (fZ) goto L_004ca92c;
L_004ca917:; BB(0x004ca917);
    /* 004ca917: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004ca918: mov dword ptr [esi + 0x67c], eax */ W32((u32)(r_esi+0x67cu), r_eax);
    /* 004ca91e: mov ecx, esi */ r_ecx = r_esi;
    /* 004ca920: call 0x4c3074 */ r_esp -= 4; W32(r_esp, 0x4ca925u); f_004c3074();
    /* 004ca925: add esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004ca928: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004ca929: ret 4 */ FN_RET(0x004ca62c); r_esp += 8; return;
L_004ca92c:; BB(0x004ca92c);
    /* 004ca92c: mov dword ptr [esi + 0x67c], 0x32 */ W32((u32)(r_esi+0x67cu), 0x32u);
    /* 004ca936: mov eax, 0x32 */ r_eax = 0x32u;
    /* 004ca93b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004ca93d: jmp 0x4ca670 */ goto L_004ca670;
}

void f_004ca68f(void)
{
    FN_ENTER(0x004ca68f);
    /* 004ca68f: mov ecx, esi */ r_ecx = r_esi;
    /* 004ca691: call 0x4c32b0 */ r_esp -= 4; W32(r_esp, 0x4ca696u); f_004c32b0();
    /* 004ca696: jmp 0x4ca90b */ goto L_004ca90b;
L_004ca90b:; BB(0x004ca90b);
    /* 004ca90b: add esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004ca90e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004ca90f: ret 4 */ FN_RET(0x004ca68f); r_esp += 8; return;
}

void f_004ca69b(void)
{
    FN_ENTER(0x004ca69b);
    /* 004ca69b: mov ecx, esi */ r_ecx = r_esi;
    /* 004ca69d: call 0x4c32c4 */ r_esp -= 4; W32(r_esp, 0x4ca6a2u); f_004c32c4();
    /* 004ca6a2: jmp 0x4ca90b */ goto L_004ca90b;
L_004ca90b:; BB(0x004ca90b);
    /* 004ca90b: add esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004ca90e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004ca90f: ret 4 */ FN_RET(0x004ca69b); r_esp += 8; return;
}

void f_004ca6a7(void)
{
    FN_ENTER(0x004ca6a7);
    /* 004ca6a7: mov eax, 0xf */ r_eax = 0xfu;
    /* 004ca6ac: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
    /* 004ca6b3: mov ecx, esi */ r_ecx = r_esi;
    /* 004ca6b5: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x4ca6bau); f_007aa094();
    /* 004ca6ba: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 004ca6bc: mov ecx, esi */ r_ecx = r_esi;
    /* 004ca6be: call dword ptr [eax + 0x188] */ { u32 t = R32((u32)(r_eax+0x188u)); r_esp -= 4; W32(r_esp, 0x4ca6c4u); call_ind(t); }
    /* 004ca6c4: mov dword ptr [esi + 0x3ec], 0 */ W32((u32)(r_esi+0x3ecu), 0x0u);
    /* 004ca6ce: mov ecx, esi */ r_ecx = r_esi;
    /* 004ca6d0: call 0x4cb184 */ r_esp -= 4; W32(r_esp, 0x4ca6d5u); f_004cb184();
    /* 004ca6d5: mov eax, dword ptr [esi + 0x3c8] */ r_eax = R32((u32)(r_esi+0x3c8u));
    /* 004ca6db: and eax, 0xffffffc9 */ {  u32 a = r_eax; u32 b = 0xffffffc9u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004ca6de: mov dword ptr [esi + 0x3c8], eax */ W32((u32)(r_esi+0x3c8u), r_eax);
    /* 004ca6e4: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004ca6e6: mov dword ptr [esi + 0x85c], edx */ W32((u32)(r_esi+0x85cu), r_edx);
    /* 004ca6ec: mov dword ptr [esi + 0x860], edx */ W32((u32)(r_esi+0x860u), r_edx);
    /* 004ca6f2: add esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004ca6f5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004ca6f6: ret 4 */ FN_RET(0x004ca6a7); r_esp += 8; return;
}

void f_004ca6f9(void)
{
    FN_ENTER(0x004ca6f9);
    /* 004ca6f9: mov eax, dword ptr [esi + 0x860] */ r_eax = R32((u32)(r_esi+0x860u));
    /* 004ca6ff: mov dword ptr [esi + 0x764], 0 */ W32((u32)(r_esi+0x764u), 0x0u);
    /* 004ca709: cmp eax, 0x28 */ {  u32 a = r_eax; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004ca70c: jl 0x4ca90b */ if ((fS!=fO)) goto L_004ca90b;
L_004ca712:; BB(0x004ca712);
    /* 004ca712: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004ca714: push 0x1a */ { u32 v = 0x1au; r_esp -= 4; W32(r_esp, v); }
    /* 004ca716: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 004ca718: mov ecx, esi */ r_ecx = r_esi;
    /* 004ca71a: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4ca720u); call_ind(t); }
    /* 004ca720: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 004ca724: mov ecx, dword ptr [esi + 0x694] */ r_ecx = R32((u32)(r_esi+0x694u));
    /* 004ca72a: mov byte ptr [esp + 0x14], 0xa8 */ W8((u32)(r_esp+0x14u), 0xa8u);
    /* 004ca72f: mov edx, 0x1a */ r_edx = 0x1au;
    /* 004ca734: mov byte ptr [esp + 0x15], 6 */ W8((u32)(r_esp+0x15u), 0x6u);
    /* 004ca739: mov word ptr [esp + 0x16], ax */ W16((u32)(r_esp+0x16u), (u16)r_eax);
    /* 004ca73e: mov eax, dword ptr [esi + 0x67c] */ r_eax = R32((u32)(r_esi+0x67cu));
    /* 004ca744: mov word ptr [esp + 0x18], dx */ W16((u32)(r_esp+0x18u), (u16)r_edx);
    /* 004ca749: mov word ptr [esp + 0x1a], ax */ W16((u32)(r_esp+0x1au), (u16)r_eax);
    /* 004ca74e: movzx eax, word ptr [esi + 0x394] */ r_eax = (u32)R16((u32)(r_esi+0x394u));
    /* 004ca755: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 004ca759: mov eax, dword ptr [esi + 0x690] */ r_eax = R32((u32)(r_esi+0x690u));
    /* 004ca75f: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004ca763: mov dword ptr [esp + 0x24], ecx */ W32((u32)(r_esp+0x24u), r_ecx);
    /* 004ca767: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4ca76cu); f_008587a5();
    /* 004ca76c: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 004ca770: fild dword ptr [esp + 0x38] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x38u)));
    /* 004ca774: fdiv dword ptr [0x9084a8] */ ST(0) = ST(0) / R_F32((u32)(0x9084a8u));
    /* 004ca77a: fmul dword ptr [0x9084ac] */ ST(0) = ST(0) * R_F32((u32)(0x9084acu));
    /* 004ca780: lea ecx, [esp + 0x14] */ r_ecx = (u32)(r_esp+0x14u);
    /* 004ca784: fnstcw word ptr [esp + 0x40] */ W16((u32)(r_esp+0x40u), fcw);
    /* 004ca788: movzx eax, word ptr [esp + 0x40] */ r_eax = (u32)R16((u32)(r_esp+0x40u));
    /* 004ca78d: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004ca792: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 004ca796: fldcw word ptr [esp + 0x48] */ fcw = R16((u32)(r_esp+0x48u));
    /* 004ca79a: fistp dword ptr [esp + 0x50] */ W32((u32)(r_esp+0x50u), (u32)fx_int32(ST(0))); FPOP();
    /* 004ca79e: fldcw word ptr [esp + 0x40] */ fcw = R16((u32)(r_esp+0x40u));
    /* 004ca7a2: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 004ca7a6: mov byte ptr [esp + 0x28], al */ W8((u32)(r_esp+0x28u), (u8)r_eax);
    /* 004ca7aa: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4ca7afu); f_008003e0();
    /* 004ca7af: add esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004ca7b2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004ca7b3: ret 4 */ FN_RET(0x004ca6f9); r_esp += 8; return;
L_004ca90b:; BB(0x004ca90b);
    /* 004ca90b: add esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004ca90e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004ca90f: ret 4 */ FN_RET(0x004ca6f9); r_esp += 8; return;
}

void f_004ca7b6(void)
{
    FN_ENTER(0x004ca7b6);
    /* 004ca7b6: mov ecx, esi */ r_ecx = r_esi;
    /* 004ca7b8: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x4ca7bdu); f_007aa094();
    /* 004ca7bd: push 0x41600000 */ { u32 v = 0x41600000u; r_esp -= 4; W32(r_esp, v); }
    /* 004ca7c2: mov ecx, esi */ r_ecx = r_esi;
    /* 004ca7c4: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x4ca7c9u); f_007aaa30();
    /* 004ca7c9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ca7cb: je 0x4ca7e5 */ if (fZ) goto L_004ca7e5;
L_004ca7cd:; BB(0x004ca7cd);
    /* 004ca7cd: lea edx, [esi + 0x63c] */ r_edx = (u32)(r_esi+0x63cu);
    /* 004ca7d3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004ca7d5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ca7d6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ca7d7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004ca7d8: push 0x405 */ { u32 v = 0x405u; r_esp -= 4; W32(r_esp, v); }
    /* 004ca7dd: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4ca7e2u); f_00814298();
    /* 004ca7e2: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004ca7e5:; BB(0x004ca7e5);
    /* 004ca7e5: push 0x42280000 */ { u32 v = 0x42280000u; r_esp -= 4; W32(r_esp, v); }
    /* 004ca7ea: mov ecx, esi */ r_ecx = r_esi;
    /* 004ca7ec: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x4ca7f1u); f_007aaa30();
    /* 004ca7f1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ca7f3: je 0x4ca80d */ if (fZ) goto L_004ca80d;
L_004ca7f5:; BB(0x004ca7f5);
    /* 004ca7f5: lea edx, [esi + 0x63c] */ r_edx = (u32)(r_esi+0x63cu);
    /* 004ca7fb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004ca7fd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ca7fe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ca7ff: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004ca800: push 0x404 */ { u32 v = 0x404u; r_esp -= 4; W32(r_esp, v); }
    /* 004ca805: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4ca80au); f_00814298();
    /* 004ca80a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004ca80d:; BB(0x004ca80d);
    /* 004ca80d: push 0x42380000 */ { u32 v = 0x42380000u; r_esp -= 4; W32(r_esp, v); }
    /* 004ca812: mov ecx, esi */ r_ecx = r_esi;
    /* 004ca814: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x4ca819u); f_007aaa30();
    /* 004ca819: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ca81b: je 0x4ca824 */ if (fZ) goto L_004ca824;
L_004ca81d:; BB(0x004ca81d);
    /* 004ca81d: mov ecx, esi */ r_ecx = r_esi;
    /* 004ca81f: call 0x4c1f34 */ r_esp -= 4; W32(r_esp, 0x4ca824u); f_004c1f34();
L_004ca824:; BB(0x004ca824);
    /* 004ca824: mov eax, dword ptr [esi + 0x85c] */ r_eax = R32((u32)(r_esi+0x85cu));
    /* 004ca82a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ca82c: jne 0x4ca873 */ if (!fZ) goto L_004ca873;
L_004ca82e:; BB(0x004ca82e);
    /* 004ca82e: push 0x420c0000 */ { u32 v = 0x420c0000u; r_esp -= 4; W32(r_esp, v); }
    /* 004ca833: mov ecx, esi */ r_ecx = r_esi;
    /* 004ca835: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x4ca83au); f_007aaa30();
    /* 004ca83a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ca83c: je 0x4ca90b */ if (fZ) goto L_004ca90b;
L_004ca842:; BB(0x004ca842);
    /* 004ca842: mov eax, dword ptr [esi + 0x3c8] */ r_eax = R32((u32)(r_esi+0x3c8u));
    /* 004ca848: mov dword ptr [esi + 0x860], 0 */ W32((u32)(r_esi+0x860u), 0x0u);
    /* 004ca852: or eax, 0x30 */ {  u32 a = r_eax; u32 b = 0x30u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004ca855: mov dword ptr [esi + 0x3c8], eax */ W32((u32)(r_esi+0x3c8u), r_eax);
    /* 004ca85b: mov edx, 1 */ r_edx = 0x1u;
    /* 004ca860: mov dword ptr [esi + 0x3ec], edx */ W32((u32)(r_esi+0x3ecu), r_edx);
    /* 004ca866: mov dword ptr [esi + 0x85c], edx */ W32((u32)(r_esi+0x85cu), r_edx);
    /* 004ca86c: add esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004ca86f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004ca870: ret 4 */ FN_RET(0x004ca7b6); r_esp += 8; return;
L_004ca873:; BB(0x004ca873);
    /* 004ca873: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ca876: jne 0x4ca90b */ if (!fZ) goto L_004ca90b;
L_004ca87c:; BB(0x004ca87c);
    /* 004ca87c: movzx eax, byte ptr [0xa484a4] */ r_eax = (u32)R8((u32)(0xa484a4u));
    /* 004ca883: mov edx, dword ptr [esi + 0x860] */ r_edx = R32((u32)(r_esi+0x860u));
    /* 004ca889: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004ca88c: mov dword ptr [esi + 0x860], edx */ W32((u32)(r_esi+0x860u), r_edx);
    /* 004ca892: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004ca894: jne 0x4ca8ce */ if (!fZ) goto L_004ca8ce;
L_004ca896:; BB(0x004ca896);
    /* 004ca896: mov dword ptr [0xa484c4], 0 */ W32((u32)(0xa484c4u), 0x0u);
    /* 004ca8a0: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004ca8a5: mov byte ptr [0xa484a4], al */ W8((u32)(0xa484a4u), (u8)r_eax);
    /* 004ca8aa: mov dword ptr [0xa484d4], 0x438c0000 */ W32((u32)(0xa484d4u), 0x438c0000u);
    /* 004ca8b4: mov dword ptr [0xa484e4], 0x433e0000 */ W32((u32)(0xa484e4u), 0x433e0000u);
    /* 004ca8be: mov dword ptr [0xa484f4], 0x43340000 */ W32((u32)(0xa484f4u), 0x43340000u);
    /* 004ca8c8: mov edx, dword ptr [esi + 0x860] */ r_edx = R32((u32)(r_esi+0x860u));
L_004ca8ce:; BB(0x004ca8ce);
    /* 004ca8ce: mov dword ptr [esp], 0xa484c0 */ W32((u32)(r_esp), 0xa484c0u);
    /* 004ca8d5: mov dword ptr [esp + 0x58], edx */ W32((u32)(r_esp+0x58u), r_edx);
    /* 004ca8d9: fild dword ptr [esp + 0x58] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x58u)));
    /* 004ca8dd: fdiv dword ptr [0x908490] */ ST(0) = ST(0) / R_F32((u32)(0x908490u));
    /* 004ca8e3: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004ca8e7: mov dword ptr [esp + 4], 4 */ W32((u32)(r_esp+0x4u), 0x4u);
    /* 004ca8ef: lea eax, [esp + 0x2c] */ r_eax = (u32)(r_esp+0x2cu);
    /* 004ca8f3: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 004ca8f7: mov dword ptr [esp + 0xc], 0 */ W32((u32)(r_esp+0xcu), 0x0u);
    /* 004ca8ff: call 0x7be6b8 */ r_esp -= 4; W32(r_esp, 0x4ca904u); f_007be6b8();
    /* 004ca904: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 004ca908: mov dword ptr [esi + 0x3c], eax */ W32((u32)(r_esi+0x3cu), r_eax);
L_004ca90b:; BB(0x004ca90b);
    /* 004ca90b: add esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004ca90e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004ca90f: ret 4 */ FN_RET(0x004ca7b6); r_esp += 8; return;
}

void f_004ca90b(void)
{
    FN_ENTER(0x004ca90b);
    /* 004ca90b: add esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004ca90e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004ca90f: ret 4 */ FN_RET(0x004ca90b); r_esp += 8; return;
}

void f_004ca944(void) /* sub_4CA944 */
{
    FN_ENTER(0x004ca944);
    /* 004ca944: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004ca945: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004ca946: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004ca949: mov esi, ecx */ r_esi = r_ecx;
    /* 004ca94b: mov ebx, dword ptr [esp + 0x40] */ r_ebx = R32((u32)(r_esp+0x40u));
    /* 004ca94f: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ca952: je 0x4caad3 */ if (fZ) goto L_004caad3;
L_004ca958:; BB(0x004ca958);
    /* 004ca958: cmp ebx, 7 */ {  u32 a = r_ebx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ca95b: je 0x4caac6 */ if (fZ) goto L_004caac6;
L_004ca961:; BB(0x004ca961);
    /* 004ca961: cmp ebx, 6 */ {  u32 a = r_ebx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ca964: je 0x4ca9da */ if (fZ) goto L_004ca9da;
L_004ca966:; BB(0x004ca966);
    /* 004ca966: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ca968: je 0x4ca99a */ if (fZ) goto L_004ca99a;
L_004ca96a:; BB(0x004ca96a);
    /* 004ca96a: cmp ebx, 5 */ {  u32 a = r_ebx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ca96d: jne 0x4ca98d */ if (!fZ) goto L_004ca98d;
L_004ca96f:; BB(0x004ca96f);
    /* 004ca96f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004ca970: mov eax, dword ptr [esi + 0x3c8] */ r_eax = R32((u32)(r_esi+0x3c8u));
    /* 004ca976: and eax, 0xfffffeff */ {  u32 a = r_eax; u32 b = 0xfffffeffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004ca97b: mov dword ptr [esi + 0x3c8], eax */ W32((u32)(r_esi+0x3c8u), r_eax);
    /* 004ca981: mov ecx, esi */ r_ecx = r_esi;
    /* 004ca983: call 0x4cab30 */ r_esp -= 4; W32(r_esp, 0x4ca988u); f_004cab30();
    /* 004ca988: jmp 0x4caabe */ goto L_004caabe;
L_004ca98d:; BB(0x004ca98d);
    /* 004ca98d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004ca98e: mov ecx, esi */ r_ecx = r_esi;
    /* 004ca990: call 0x4cab30 */ r_esp -= 4; W32(r_esp, 0x4ca995u); f_004cab30();
    /* 004ca995: jmp 0x4caabe */ goto L_004caabe;
L_004ca99a:; BB(0x004ca99a);
    /* 004ca99a: mov dword ptr [esp + 0x2c], edi */ W32((u32)(r_esp+0x2cu), r_edi);
    /* 004ca99e: mov dword ptr [esp + 0x30], ebp */ W32((u32)(r_esp+0x30u), r_ebp);
    /* 004ca9a2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004ca9a4: lea ecx, [esi + 0x6e4] */ r_ecx = (u32)(r_esi+0x6e4u);
    /* 004ca9aa: mov edi, eax */ r_edi = r_eax;
    /* 004ca9ac: mov ebp, ecx */ r_ebp = r_ecx;
L_004ca9ae:; BB(0x004ca9ae);
    /* 004ca9ae: mov edx, dword ptr [edi + esi + 0x6e4] */ r_edx = R32((u32)(r_edi+r_esi+0x6e4u));
    /* 004ca9b5: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004ca9b7: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x4ca9bau); call_ind(t); }
    /* 004ca9ba: add edi, 0x1c */ {  u32 a = r_edi; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004ca9bd: add ebp, 0x1c */ {  u32 a = r_ebp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004ca9c0: cmp edi, 0x70 */ {  u32 a = r_edi; u32 b = 0x70u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004ca9c3: jl 0x4ca9ae */ if ((fS!=fO)) goto L_004ca9ae;
L_004ca9c5:; BB(0x004ca9c5);
    /* 004ca9c5: mov edi, dword ptr [esp + 0x2c] */ r_edi = R32((u32)(r_esp+0x2cu));
    /* 004ca9c9: mov ebp, dword ptr [esp + 0x30] */ r_ebp = R32((u32)(r_esp+0x30u));
    /* 004ca9cd: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004ca9ce: mov ecx, esi */ r_ecx = r_esi;
    /* 004ca9d0: call 0x4cab30 */ r_esp -= 4; W32(r_esp, 0x4ca9d5u); f_004cab30();
    /* 004ca9d5: jmp 0x4caabe */ goto L_004caabe;
L_004ca9da:; BB(0x004ca9da);
    /* 004ca9da: mov eax, dword ptr [esi + 0x3bc] */ r_eax = R32((u32)(r_esi+0x3bcu));
    /* 004ca9e0: mov dword ptr [esi + 0x3b8], eax */ W32((u32)(r_esi+0x3b8u), r_eax);
    /* 004ca9e6: mov ecx, esi */ r_ecx = r_esi;
    /* 004ca9e8: call 0x4c0b50 */ r_esp -= 4; W32(r_esp, 0x4ca9edu); f_004c0b50();
    /* 004ca9ed: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ca9ef: je 0x4ca9fa */ if (fZ) goto L_004ca9fa;
L_004ca9f1:; BB(0x004ca9f1);
    /* 004ca9f1: mov ecx, esi */ r_ecx = r_esi;
    /* 004ca9f3: call 0x5213d8 */ r_esp -= 4; W32(r_esp, 0x4ca9f8u); f_005213d8();
    /* 004ca9f8: jmp 0x4caa06 */ goto L_004caa06;
L_004ca9fa:; BB(0x004ca9fa);
    /* 004ca9fa: push 0x9088b4 */ { u32 v = 0x9088b4u; r_esp -= 4; W32(r_esp, v); }
    /* 004ca9ff: mov ecx, esi */ r_ecx = r_esi;
    /* 004caa01: call 0x5213ec */ r_esp -= 4; W32(r_esp, 0x4caa06u); f_005213ec();
L_004caa06:; BB(0x004caa06);
    /* 004caa06: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4caa0bu); f_008587a5();
    /* 004caa0b: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 004caa0f: fild dword ptr [esp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_esp+0xcu)));
    /* 004caa13: fdiv dword ptr [0x908484] */ ST(0) = ST(0) / R_F32((u32)(0x908484u));
    /* 004caa19: fmul dword ptr [0x908480] */ ST(0) = ST(0) * R_F32((u32)(0x908480u));
    /* 004caa1f: fnstcw word ptr [esp + 0x14] */ W16((u32)(r_esp+0x14u), fcw);
    /* 004caa23: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 004caa28: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004caa2d: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 004caa31: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 004caa35: fistp dword ptr [esp + 0x24] */ W32((u32)(r_esp+0x24u), (u32)fx_int32(ST(0))); FPOP();
    /* 004caa39: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 004caa3d: mov ebx, dword ptr [esp + 0x24] */ r_ebx = R32((u32)(r_esp+0x24u));
    /* 004caa41: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004caa43: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x4caa48u); f_0082dcbc();
    /* 004caa48: mov eax, dword ptr [0xa48508] */ r_eax = R32((u32)(0xa48508u));
    /* 004caa4d: fld dword ptr [eax + 0xc] */ FPUSH(R_F32((u32)(r_eax+0xcu)));
    /* 004caa50: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004caa52: fadd dword ptr [esi + 0x39c] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x39cu));
    /* 004caa58: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004caa5a: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004caa5d: mov dword ptr [esp + 4], 0x41f00000 */ W32((u32)(r_esp+0x4u), 0x41f00000u);
    /* 004caa65: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x4caa6au); f_0082ddd8();
    /* 004caa6a: mov eax, dword ptr [0xa48508] */ r_eax = R32((u32)(0xa48508u));
    /* 004caa6f: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 004caa72: fld dword ptr [eax + 0xc] */ FPUSH(R_F32((u32)(r_eax+0xcu)));
    /* 004caa75: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004caa77: fadd dword ptr [esi + 0x3a4] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x3a4u));
    /* 004caa7d: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004caa81: push 0x16ef */ { u32 v = 0x16efu; r_esp -= 4; W32(r_esp, v); }
    /* 004caa86: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004caa87: call 0x780630 */ r_esp -= 4; W32(r_esp, 0x4caa8cu); f_00780630();
    /* 004caa8c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004caa8f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004caa91: je 0x4caab7 */ if (fZ) goto L_004caab7;
L_004caa93:; BB(0x004caa93);
    /* 004caa93: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 004caa96: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 004caa99: fcomp dword ptr [0x90880c] */ fx_compare(ST(0), R_F32((u32)(0x90880cu))); FPOP();
    /* 004caa9f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004caaa1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004caaa2: ja 0x4caab7 */ if ((!fC&&!fZ)) goto L_004caab7;
L_004caaa4:; BB(0x004caaa4);
    /* 004caaa4: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 004caaa7: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 004caaab: mov dword ptr [esi + 0x39c], eax */ W32((u32)(r_esi+0x39cu), r_eax);
    /* 004caab1: mov dword ptr [esi + 0x3a4], edx */ W32((u32)(r_esi+0x3a4u), r_edx);
L_004caab7:; BB(0x004caab7);
    /* 004caab7: mov ecx, esi */ r_ecx = r_esi;
    /* 004caab9: call 0x4c0b5c */ r_esp -= 4; W32(r_esp, 0x4caabeu); f_004c0b5c();
L_004caabe:; BB(0x004caabe);
    /* 004caabe: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004caac1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004caac2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004caac3: ret 4 */ FN_RET(0x004ca944); r_esp += 8; return;
L_004caac6:; BB(0x004caac6);
    /* 004caac6: lea eax, [esi + 0x38] */ r_eax = (u32)(r_esi+0x38u);
    /* 004caac9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004caaca: mov ecx, esi */ r_ecx = r_esi;
    /* 004caacc: call 0x4ca2f0 */ r_esp -= 4; W32(r_esp, 0x4caad1u); f_004ca2f0();
    /* 004caad1: jmp 0x4caabe */ goto L_004caabe;
L_004caad3:; BB(0x004caad3);
    /* 004caad3: mov eax, dword ptr [esi + 0x3c8] */ r_eax = R32((u32)(r_esi+0x3c8u));
    /* 004caad9: mov dword ptr [esi + 0x6f8], 0x3c03126f */ W32((u32)(r_esi+0x6f8u), 0x3c03126fu);
    /* 004caae3: or eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004caae8: mov dword ptr [esi + 0x3c8], eax */ W32((u32)(r_esi+0x3c8u), r_eax);
    /* 004caaee: mov dword ptr [esi + 0x714], 0x3c03126f */ W32((u32)(r_esi+0x714u), 0x3c03126fu);
    /* 004caaf8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004caaf9: mov ecx, esi */ r_ecx = r_esi;
    /* 004caafb: mov dword ptr [esi + 0x730], 0x3c03126f */ W32((u32)(r_esi+0x730u), 0x3c03126fu);
    /* 004cab05: mov dword ptr [esi + 0x74c], 0x3c03126f */ W32((u32)(r_esi+0x74cu), 0x3c03126fu);
    /* 004cab0f: call 0x4cab30 */ r_esp -= 4; W32(r_esp, 0x4cab14u); f_004cab30();
    /* 004cab14: add esi, 0x63c */ {  u32 a = r_esi; u32 b = 0x63cu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004cab1a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004cab1c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004cab1d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004cab1e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004cab1f: push 0x415 */ { u32 v = 0x415u; r_esp -= 4; W32(r_esp, v); }
    /* 004cab24: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4cab29u); f_00814298();
    /* 004cab29: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004cab2c: jmp 0x4caabe */ goto L_004caabe;
}

void f_004cab30(void) /* sub_4CAB30 */
{
    FN_ENTER(0x004cab30);
    /* 004cab30: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004cab31: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004cab32: sub esp, 0xa8 */ {  u32 a = r_esp; u32 b = 0xa8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004cab38: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004cab3a: mov eax, dword ptr [esp + 0xb4] */ r_eax = R32((u32)(r_esp+0xb4u));
    /* 004cab41: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004cab44: ja 0x4cb0b4 */ if ((!fC&&!fZ)) goto L_004cb0b4;
L_004cab4a:; BB(0x004cab4a);
    /* 004cab4a: mov eax, dword ptr [eax*4 + 0x907e4c] */ r_eax = R32((u32)(r_eax*4+0x907e4cu));
    /* 004cab51: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_004cb0b4:; BB(0x004cb0b4);
    /* 004cb0b4: add esp, 0xa8 */ {  u32 a = r_esp; u32 b = 0xa8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004cb0ba: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004cb0bb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004cb0bc: ret 4 */ FN_RET(0x004cab30); r_esp += 8; return;
}

void f_004cab53(void)
{
    FN_ENTER(0x004cab53);
    /* 004cab53: mov eax, dword ptr [ebx + 0xb0] */ r_eax = R32((u32)(r_ebx+0xb0u));
    /* 004cab59: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004cab5b: je 0x4cb0b4 */ if (fZ) goto L_004cb0b4;
L_004cab61:; BB(0x004cab61);
    /* 004cab61: movsx eax, word ptr [ebx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32eu));
    /* 004cab68: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004cab6b: je 0x4cad27 */ if (fZ) goto L_004cad27;
L_004cab71:; BB(0x004cab71);
    /* 004cab71: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004cab74: jne 0x4cac22 */ if (!fZ) goto L_004cac22;
L_004cab7a:; BB(0x004cab7a);
    /* 004cab7a: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004cab7c: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 004cab7e: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 004cab80: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004cab82: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4cab88u); call_ind(t); }
    /* 004cab88: movzx eax, word ptr [ebx + 0x1c] */ r_eax = (u32)R16((u32)(r_ebx+0x1cu));
    /* 004cab8c: mov edi, dword ptr [ebx + 0x67c] */ r_edi = R32((u32)(r_ebx+0x67cu));
    /* 004cab92: mov ecx, dword ptr [ebx + 0x694] */ r_ecx = R32((u32)(r_ebx+0x694u));
    /* 004cab98: mov word ptr [esp + 0x56], ax */ W16((u32)(r_esp+0x56u), (u16)r_eax);
    /* 004cab9d: movzx eax, word ptr [ebx + 0x394] */ r_eax = (u32)R16((u32)(r_ebx+0x394u));
    /* 004caba4: mov byte ptr [esp + 0x54], 0xa8 */ W8((u32)(r_esp+0x54u), 0xa8u);
    /* 004caba9: mov word ptr [esp + 0x5a], di */ W16((u32)(r_esp+0x5au), (u16)r_edi);
    /* 004cabae: mov edx, 0xd */ r_edx = 0xdu;
    /* 004cabb3: mov byte ptr [esp + 0x55], 6 */ W8((u32)(r_esp+0x55u), 0x6u);
    /* 004cabb8: mov word ptr [esp + 0x58], dx */ W16((u32)(r_esp+0x58u), (u16)r_edx);
    /* 004cabbd: mov dword ptr [esp + 0x5c], eax */ W32((u32)(r_esp+0x5cu), r_eax);
    /* 004cabc1: mov eax, dword ptr [ebx + 0x690] */ r_eax = R32((u32)(r_ebx+0x690u));
    /* 004cabc7: mov dword ptr [esp + 0x60], eax */ W32((u32)(r_esp+0x60u), r_eax);
    /* 004cabcb: mov dword ptr [esp + 0x64], ecx */ W32((u32)(r_esp+0x64u), r_ecx);
    /* 004cabcf: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4cabd4u); f_008587a5();
    /* 004cabd4: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 004cabd8: fild dword ptr [esp + 0x14] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x14u)));
    /* 004cabdc: fdiv dword ptr [0x908474] */ ST(0) = ST(0) / R_F32((u32)(0x908474u));
    /* 004cabe2: fmul dword ptr [0x908478] */ ST(0) = ST(0) * R_F32((u32)(0x908478u));
    /* 004cabe8: lea ecx, [esp + 0x54] */ r_ecx = (u32)(r_esp+0x54u);
    /* 004cabec: fnstcw word ptr [esp + 0x1c] */ W16((u32)(r_esp+0x1cu), fcw);
    /* 004cabf0: movzx eax, word ptr [esp + 0x1c] */ r_eax = (u32)R16((u32)(r_esp+0x1cu));
    /* 004cabf5: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004cabfa: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 004cabfe: fldcw word ptr [esp + 0x24] */ fcw = R16((u32)(r_esp+0x24u));
    /* 004cac02: fistp dword ptr [esp + 0x2c] */ W32((u32)(r_esp+0x2cu), (u32)fx_int32(ST(0))); FPOP();
    /* 004cac06: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 004cac0a: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 004cac0e: mov byte ptr [esp + 0x68], al */ W8((u32)(r_esp+0x68u), (u8)r_eax);
    /* 004cac12: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4cac17u); f_008003e0();
    /* 004cac17: add esp, 0xa8 */ {  u32 a = r_esp; u32 b = 0xa8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004cac1d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004cac1e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004cac1f: ret 4 */ FN_RET(0x004cab53); r_esp += 8; return;
L_004cac22:; BB(0x004cac22);
    /* 004cac22: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004cac25: jne 0x4cacd3 */ if (!fZ) goto L_004cacd3;
L_004cac2b:; BB(0x004cac2b);
    /* 004cac2b: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004cac2d: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 004cac2f: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 004cac31: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004cac33: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4cac39u); call_ind(t); }
    /* 004cac39: movzx eax, word ptr [ebx + 0x1c] */ r_eax = (u32)R16((u32)(r_ebx+0x1cu));
    /* 004cac3d: mov edi, dword ptr [ebx + 0x67c] */ r_edi = R32((u32)(r_ebx+0x67cu));
    /* 004cac43: mov ecx, dword ptr [ebx + 0x694] */ r_ecx = R32((u32)(r_ebx+0x694u));
    /* 004cac49: mov word ptr [esp + 0x3e], ax */ W16((u32)(r_esp+0x3eu), (u16)r_eax);
    /* 004cac4e: movzx eax, word ptr [ebx + 0x394] */ r_eax = (u32)R16((u32)(r_ebx+0x394u));
    /* 004cac55: mov byte ptr [esp + 0x3c], 0xa8 */ W8((u32)(r_esp+0x3cu), 0xa8u);
    /* 004cac5a: mov word ptr [esp + 0x42], di */ W16((u32)(r_esp+0x42u), (u16)r_edi);
    /* 004cac5f: mov edx, 0x15 */ r_edx = 0x15u;
    /* 004cac64: mov byte ptr [esp + 0x3d], 6 */ W8((u32)(r_esp+0x3du), 0x6u);
    /* 004cac69: mov word ptr [esp + 0x40], dx */ W16((u32)(r_esp+0x40u), (u16)r_edx);
    /* 004cac6e: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 004cac72: mov eax, dword ptr [ebx + 0x690] */ r_eax = R32((u32)(r_ebx+0x690u));
    /* 004cac78: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 004cac7c: mov dword ptr [esp + 0x4c], ecx */ W32((u32)(r_esp+0x4cu), r_ecx);
    /* 004cac80: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4cac85u); f_008587a5();
    /* 004cac85: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 004cac89: fild dword ptr [esp + 0x34] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x34u)));
    /* 004cac8d: fdiv dword ptr [0x908474] */ ST(0) = ST(0) / R_F32((u32)(0x908474u));
    /* 004cac93: fmul dword ptr [0x908478] */ ST(0) = ST(0) * R_F32((u32)(0x908478u));
    /* 004cac99: lea ecx, [esp + 0x3c] */ r_ecx = (u32)(r_esp+0x3cu);
    /* 004cac9d: fnstcw word ptr [esp + 0x1c] */ W16((u32)(r_esp+0x1cu), fcw);
    /* 004caca1: movzx eax, word ptr [esp + 0x1c] */ r_eax = (u32)R16((u32)(r_esp+0x1cu));
    /* 004caca6: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004cacab: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 004cacaf: fldcw word ptr [esp + 0x24] */ fcw = R16((u32)(r_esp+0x24u));
    /* 004cacb3: fistp dword ptr [esp + 0x2c] */ W32((u32)(r_esp+0x2cu), (u32)fx_int32(ST(0))); FPOP();
    /* 004cacb7: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 004cacbb: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 004cacbf: mov byte ptr [esp + 0x50], al */ W8((u32)(r_esp+0x50u), (u8)r_eax);
    /* 004cacc3: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4cacc8u); f_008003e0();
    /* 004cacc8: add esp, 0xa8 */ {  u32 a = r_esp; u32 b = 0xa8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004cacce: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004caccf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004cacd0: ret 4 */ FN_RET(0x004cab53); r_esp += 8; return;
L_004cacd3:; BB(0x004cacd3);
    /* 004cacd3: mov eax, dword ptr [ebx + 0x3c8] */ r_eax = R32((u32)(r_ebx+0x3c8u));
    /* 004cacd9: test al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004cacdb: je 0x4cacec */ if (fZ) goto L_004cacec;
L_004cacdd:; BB(0x004cacdd);
    /* 004cacdd: mov edx, dword ptr [ebx + 0x67c] */ r_edx = R32((u32)(r_ebx+0x67cu));
    /* 004cace3: mov eax, edx */ r_eax = r_edx;
    /* 004cace5: mov edi, 0x9080e0 */ r_edi = 0x9080e0u;
    /* 004cacea: jmp 0x4cad08 */ goto L_004cad08;
L_004cacec:; BB(0x004cacec);
    /* 004cacec: mov edx, dword ptr [ebx + 0x67c] */ r_edx = R32((u32)(r_ebx+0x67cu));
    /* 004cacf2: cmp edx, 0x32 */ {  u32 a = r_edx; u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004cacf5: jge 0x4cad00 */ if ((fS==fO)) goto L_004cad00;
L_004cacf7:; BB(0x004cacf7);
    /* 004cacf7: mov eax, edx */ r_eax = r_edx;
    /* 004cacf9: mov edi, 0x9088c0 */ r_edi = 0x9088c0u;
    /* 004cacfe: jmp 0x4cad08 */ goto L_004cad08;
L_004cad00:; BB(0x004cad00);
    /* 004cad00: lea eax, [edx - 0x32] */ r_eax = (u32)(r_edx+0xffffffceu);
    /* 004cad03: mov edi, 0x908160 */ r_edi = 0x908160u;
L_004cad08:; BB(0x004cad08);
    /* 004cad08: mov eax, dword ptr [edi + eax*4] */ r_eax = R32((u32)(r_edi+r_eax*4));
    /* 004cad0b: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004cad0e: cmp eax, 0x21 */ {  u32 a = r_eax; u32 b = 0x21u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004cad11: jne 0x4cb0bf */ if (!fZ) goto L_004cb0bf;
L_004cad17:; BB(0x004cad17);
    /* 004cad17: mov dword ptr [ebx + 0x67c], 0 */ W32((u32)(r_ebx+0x67cu), 0x0u);
    /* 004cad21: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004cad23: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004cad25: jmp 0x4cad08 */ goto L_004cad08;
L_004cad27:; BB(0x004cad27);
    /* 004cad27: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004cad29: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 004cad2b: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 004cad2d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004cad2f: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4cad35u); call_ind(t); }
    /* 004cad35: movzx eax, word ptr [ebx + 0x1c] */ r_eax = (u32)R16((u32)(r_ebx+0x1cu));
    /* 004cad39: mov edi, dword ptr [ebx + 0x67c] */ r_edi = R32((u32)(r_ebx+0x67cu));
    /* 004cad3f: mov ecx, dword ptr [ebx + 0x694] */ r_ecx = R32((u32)(r_ebx+0x694u));
    /* 004cad45: mov word ptr [esp + 0x6e], ax */ W16((u32)(r_esp+0x6eu), (u16)r_eax);
    /* 004cad4a: movzx eax, word ptr [ebx + 0x394] */ r_eax = (u32)R16((u32)(r_ebx+0x394u));
    /* 004cad51: mov byte ptr [esp + 0x6c], 0xa8 */ W8((u32)(r_esp+0x6cu), 0xa8u);
    /* 004cad56: mov word ptr [esp + 0x72], di */ W16((u32)(r_esp+0x72u), (u16)r_edi);
    /* 004cad5b: mov edx, 9 */ r_edx = 0x9u;
    /* 004cad60: mov byte ptr [esp + 0x6d], 6 */ W8((u32)(r_esp+0x6du), 0x6u);
    /* 004cad65: mov word ptr [esp + 0x70], dx */ W16((u32)(r_esp+0x70u), (u16)r_edx);
    /* 004cad6a: mov dword ptr [esp + 0x74], eax */ W32((u32)(r_esp+0x74u), r_eax);
    /* 004cad6e: mov eax, dword ptr [ebx + 0x690] */ r_eax = R32((u32)(r_ebx+0x690u));
    /* 004cad74: mov dword ptr [esp + 0x78], eax */ W32((u32)(r_esp+0x78u), r_eax);
    /* 004cad78: mov dword ptr [esp + 0x7c], ecx */ W32((u32)(r_esp+0x7cu), r_ecx);
    /* 004cad7c: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4cad81u); f_008587a5();
    /* 004cad81: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 004cad85: fild dword ptr [esp + 0x34] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x34u)));
    /* 004cad89: fdiv dword ptr [0x908474] */ ST(0) = ST(0) / R_F32((u32)(0x908474u));
    /* 004cad8f: fmul dword ptr [0x908478] */ ST(0) = ST(0) * R_F32((u32)(0x908478u));
    /* 004cad95: lea ecx, [esp + 0x6c] */ r_ecx = (u32)(r_esp+0x6cu);
    /* 004cad99: fnstcw word ptr [esp + 0x1c] */ W16((u32)(r_esp+0x1cu), fcw);
    /* 004cad9d: movzx eax, word ptr [esp + 0x1c] */ r_eax = (u32)R16((u32)(r_esp+0x1cu));
    /* 004cada2: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004cada7: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 004cadab: fldcw word ptr [esp + 0x24] */ fcw = R16((u32)(r_esp+0x24u));
    /* 004cadaf: fistp dword ptr [esp + 0x2c] */ W32((u32)(r_esp+0x2cu), (u32)fx_int32(ST(0))); FPOP();
    /* 004cadb3: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 004cadb7: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 004cadbb: mov byte ptr [esp + 0x80], al */ W8((u32)(r_esp+0x80u), (u8)r_eax);
    /* 004cadc2: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4cadc7u); f_008003e0();
    /* 004cadc7: add esp, 0xa8 */ {  u32 a = r_esp; u32 b = 0xa8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004cadcd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004cadce: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004cadcf: ret 4 */ FN_RET(0x004cab53); r_esp += 8; return;
L_004cb0b4:; BB(0x004cb0b4);
    /* 004cb0b4: add esp, 0xa8 */ {  u32 a = r_esp; u32 b = 0xa8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004cb0ba: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004cb0bb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004cb0bc: ret 4 */ FN_RET(0x004cab53); r_esp += 8; return;
L_004cb0bf:; BB(0x004cb0bf);
    /* 004cb0bf: cmp eax, 0x22 */ {  u32 a = r_eax; u32 b = 0x22u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004cb0c2: je 0x4cb0dd */ if (fZ) goto L_004cb0dd;
L_004cb0c4:; BB(0x004cb0c4);
    /* 004cb0c4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004cb0c5: mov dword ptr [ebx + 0x67c], edx */ W32((u32)(r_ebx+0x67cu), r_edx);
    /* 004cb0cb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004cb0cd: call 0x4c3074 */ r_esp -= 4; W32(r_esp, 0x4cb0d2u); f_004c3074();
    /* 004cb0d2: add esp, 0xa8 */ {  u32 a = r_esp; u32 b = 0xa8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004cb0d8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004cb0d9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004cb0da: ret 4 */ FN_RET(0x004cab53); r_esp += 8; return;
L_004cb0dd:; BB(0x004cb0dd);
    /* 004cb0dd: mov dword ptr [ebx + 0x67c], 0x32 */ W32((u32)(r_ebx+0x67cu), 0x32u);
    /* 004cb0e7: mov edx, 0x32 */ r_edx = 0x32u;
    /* 004cb0ec: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004cb0ee: jmp 0x4cad08 */ goto L_004cad08;
}

void f_004cadd2(void)
{
    FN_ENTER(0x004cadd2);
    /* 004cadd2: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004cadd4: call 0x4c32b0 */ r_esp -= 4; W32(r_esp, 0x4cadd9u); f_004c32b0();
    /* 004cadd9: jmp 0x4cb0b4 */ goto L_004cb0b4;
L_004cb0b4:; BB(0x004cb0b4);
    /* 004cb0b4: add esp, 0xa8 */ {  u32 a = r_esp; u32 b = 0xa8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004cb0ba: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004cb0bb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004cb0bc: ret 4 */ FN_RET(0x004cadd2); r_esp += 8; return;
}

void f_004cadde(void)
{
    FN_ENTER(0x004cadde);
    /* 004cadde: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004cade0: call 0x4c32c4 */ r_esp -= 4; W32(r_esp, 0x4cade5u); f_004c32c4();
    /* 004cade5: jmp 0x4cb0b4 */ goto L_004cb0b4;
L_004cb0b4:; BB(0x004cb0b4);
    /* 004cb0b4: add esp, 0xa8 */ {  u32 a = r_esp; u32 b = 0xa8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004cb0ba: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004cb0bb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004cb0bc: ret 4 */ FN_RET(0x004cadde); r_esp += 8; return;
}

void f_004cadea(void)
{
    FN_ENTER(0x004cadea);
    /* 004cadea: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004cadec: call 0x4cb184 */ r_esp -= 4; W32(r_esp, 0x4cadf1u); f_004cb184();
    /* 004cadf1: jmp 0x4cb0b4 */ goto L_004cb0b4;
L_004cb0b4:; BB(0x004cb0b4);
    /* 004cb0b4: add esp, 0xa8 */ {  u32 a = r_esp; u32 b = 0xa8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004cb0ba: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004cb0bb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004cb0bc: ret 4 */ FN_RET(0x004cadea); r_esp += 8; return;
}

void f_004cadf6(void)
{
    FN_ENTER(0x004cadf6);
    /* 004cadf6: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 004cadf8: mov eax, 0x11 */ r_eax = 0x11u;
    /* 004cadfd: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
    /* 004cae04: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004cae06: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x4cae0cu); call_ind(t); }
    /* 004cae0c: mov dword ptr [ebx + 0x3ec], 1 */ W32((u32)(r_ebx+0x3ecu), 0x1u);
    /* 004cae16: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004cae18: call 0x4c1f00 */ r_esp -= 4; W32(r_esp, 0x4cae1du); f_004c1f00();
    /* 004cae1d: mov eax, dword ptr [ebx + 0x3c8] */ r_eax = R32((u32)(r_ebx+0x3c8u));
    /* 004cae23: mov dword ptr [ebx + 0x874], 0 */ W32((u32)(r_ebx+0x874u), 0x0u);
    /* 004cae2d: or eax, 0x36 */ {  u32 a = r_eax; u32 b = 0x36u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004cae30: mov dword ptr [ebx + 0x3c8], eax */ W32((u32)(r_ebx+0x3c8u), r_eax);
    /* 004cae36: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004cae38: mov dword ptr [ebx + 0x85c], edx */ W32((u32)(r_ebx+0x85cu), r_edx);
    /* 004cae3e: mov dword ptr [ebx + 0x860], edx */ W32((u32)(r_ebx+0x860u), r_edx);
    /* 004cae44: add esp, 0xa8 */ {  u32 a = r_esp; u32 b = 0xa8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004cae4a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004cae4b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004cae4c: ret 4 */ FN_RET(0x004cadf6); r_esp += 8; return;
}

void f_004cae4f(void)
{
    FN_ENTER(0x004cae4f);
    /* 004cae4f: mov eax, dword ptr [ebx + 0xb0] */ r_eax = R32((u32)(r_ebx+0xb0u));
    /* 004cae55: mov dword ptr [ebx + 0x764], 0 */ W32((u32)(r_ebx+0x764u), 0x0u);
    /* 004cae5f: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004cae61: je 0x4cb0b4 */ if (fZ) goto L_004cb0b4;
L_004cae67:; BB(0x004cae67);
    /* 004cae67: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004cae69: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 004cae6b: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 004cae6d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004cae6f: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4cae75u); call_ind(t); }
    /* 004cae75: movzx eax, word ptr [ebx + 0x1c] */ r_eax = (u32)R16((u32)(r_ebx+0x1cu));
    /* 004cae79: mov edi, dword ptr [ebx + 0x67c] */ r_edi = R32((u32)(r_ebx+0x67cu));
    /* 004cae7f: mov ecx, dword ptr [ebx + 0x694] */ r_ecx = R32((u32)(r_ebx+0x694u));
    /* 004cae85: mov word ptr [esp + 0x86], ax */ W16((u32)(r_esp+0x86u), (u16)r_eax);
    /* 004cae8d: movzx eax, word ptr [ebx + 0x394] */ r_eax = (u32)R16((u32)(r_ebx+0x394u));
    /* 004cae94: mov byte ptr [esp + 0x84], 0xa8 */ W8((u32)(r_esp+0x84u), 0xa8u);
    /* 004cae9c: mov word ptr [esp + 0x8a], di */ W16((u32)(r_esp+0x8au), (u16)r_edi);
    /* 004caea4: mov edx, 0x18 */ r_edx = 0x18u;
    /* 004caea9: mov byte ptr [esp + 0x85], 6 */ W8((u32)(r_esp+0x85u), 0x6u);
    /* 004caeb1: mov word ptr [esp + 0x88], dx */ W16((u32)(r_esp+0x88u), (u16)r_edx);
    /* 004caeb9: mov dword ptr [esp + 0x8c], eax */ W32((u32)(r_esp+0x8cu), r_eax);
    /* 004caec0: mov eax, dword ptr [ebx + 0x690] */ r_eax = R32((u32)(r_ebx+0x690u));
    /* 004caec6: mov dword ptr [esp + 0x90], eax */ W32((u32)(r_esp+0x90u), r_eax);
    /* 004caecd: mov dword ptr [esp + 0x94], ecx */ W32((u32)(r_esp+0x94u), r_ecx);
    /* 004caed4: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4caed9u); f_008587a5();
    /* 004caed9: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 004caedd: fild dword ptr [esp + 0x34] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x34u)));
    /* 004caee1: fdiv dword ptr [0x908474] */ ST(0) = ST(0) / R_F32((u32)(0x908474u));
    /* 004caee7: fmul dword ptr [0x908478] */ ST(0) = ST(0) * R_F32((u32)(0x908478u));
    /* 004caeed: lea ecx, [esp + 0x84] */ r_ecx = (u32)(r_esp+0x84u);
    /* 004caef4: fnstcw word ptr [esp + 0x1c] */ W16((u32)(r_esp+0x1cu), fcw);
    /* 004caef8: movzx eax, word ptr [esp + 0x1c] */ r_eax = (u32)R16((u32)(r_esp+0x1cu));
    /* 004caefd: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004caf02: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 004caf06: fldcw word ptr [esp + 0x24] */ fcw = R16((u32)(r_esp+0x24u));
    /* 004caf0a: fistp dword ptr [esp + 0x2c] */ W32((u32)(r_esp+0x2cu), (u32)fx_int32(ST(0))); FPOP();
    /* 004caf0e: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 004caf12: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 004caf16: mov byte ptr [esp + 0x98], al */ W8((u32)(r_esp+0x98u), (u8)r_eax);
    /* 004caf1d: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4caf22u); f_008003e0();
    /* 004caf22: add esp, 0xa8 */ {  u32 a = r_esp; u32 b = 0xa8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004caf28: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004caf29: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004caf2a: ret 4 */ FN_RET(0x004cae4f); r_esp += 8; return;
L_004cb0b4:; BB(0x004cb0b4);
    /* 004cb0b4: add esp, 0xa8 */ {  u32 a = r_esp; u32 b = 0xa8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004cb0ba: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004cb0bb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004cb0bc: ret 4 */ FN_RET(0x004cae4f); r_esp += 8; return;
}

void f_004caf2d(void)
{
    FN_ENTER(0x004caf2d);
    /* 004caf2d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004caf2f: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x4caf34u); f_007aa094();
    /* 004caf34: mov eax, dword ptr [ebx + 0x85c] */ r_eax = R32((u32)(r_ebx+0x85cu));
    /* 004caf3a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004caf3c: jne 0x4cb0b4 */ if (!fZ) goto L_004cb0b4;
L_004caf42:; BB(0x004caf42);
    /* 004caf42: movzx eax, byte ptr [0xa484a8] */ r_eax = (u32)R8((u32)(0xa484a8u));
    /* 004caf49: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004caf4b: jne 0x4caf75 */ if (!fZ) goto L_004caf75;
L_004caf4d:; BB(0x004caf4d);
    /* 004caf4d: mov dword ptr [0xa48574], 0x43340000 */ W32((u32)(0xa48574u), 0x43340000u);
    /* 004caf57: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004caf5c: mov byte ptr [0xa484a8], al */ W8((u32)(0xa484a8u), (u8)r_eax);
    /* 004caf61: mov dword ptr [0xa48584], 0x43fa0000 */ W32((u32)(0xa48584u), 0x43fa0000u);
    /* 004caf6b: mov dword ptr [0xa48594], 0 */ W32((u32)(0xa48594u), 0x0u);
L_004caf75:; BB(0x004caf75);
    /* 004caf75: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004caf77: call 0x7aabd8 */ r_esp -= 4; W32(r_esp, 0x4caf7cu); f_007aabd8();
    /* 004caf7c: fld dword ptr [0x908458] */ FPUSH(R_F32((u32)(0x908458u)));
    /* 004caf82: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 004caf84: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004caf88: lea eax, [esp + 0x9c] */ r_eax = (u32)(r_esp+0x9cu);
    /* 004caf8f: mov dword ptr [esp], 0xa48570 */ W32((u32)(r_esp), 0xa48570u);
    /* 004caf96: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 004caf9a: mov dword ptr [esp + 4], 3 */ W32((u32)(r_esp+0x4u), 0x3u);
    /* 004cafa2: mov dword ptr [esp + 0xc], 0 */ W32((u32)(r_esp+0xcu), 0x0u);
    /* 004cafaa: call 0x7be6b8 */ r_esp -= 4; W32(r_esp, 0x4cafafu); f_007be6b8();
    /* 004cafaf: mov eax, dword ptr [esp + 0xa0] */ r_eax = R32((u32)(r_esp+0xa0u));
    /* 004cafb6: push 0x40000000 */ { u32 v = 0x40000000u; r_esp -= 4; W32(r_esp, v); }
    /* 004cafbb: mov dword ptr [ebx + 0x3c], eax */ W32((u32)(r_ebx+0x3cu), r_eax);
    /* 004cafbe: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004cafc0: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x4cafc5u); f_007aaa30();
    /* 004cafc5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004cafc7: je 0x4cafe1 */ if (fZ) goto L_004cafe1;
L_004cafc9:; BB(0x004cafc9);
    /* 004cafc9: lea edx, [ebx + 0x63c] */ r_edx = (u32)(r_ebx+0x63cu);
    /* 004cafcf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004cafd1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004cafd2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004cafd3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004cafd4: push 0x405 */ { u32 v = 0x405u; r_esp -= 4; W32(r_esp, v); }
    /* 004cafd9: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4cafdeu); f_00814298();
    /* 004cafde: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004cafe1:; BB(0x004cafe1);
    /* 004cafe1: push 0x41300000 */ { u32 v = 0x41300000u; r_esp -= 4; W32(r_esp, v); }
    /* 004cafe6: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004cafe8: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x4cafedu); f_007aaa30();
    /* 004cafed: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004cafef: je 0x4caff8 */ if (fZ) goto L_004caff8;
L_004caff1:; BB(0x004caff1);
    /* 004caff1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004caff3: call 0x4c1f34 */ r_esp -= 4; W32(r_esp, 0x4caff8u); f_004c1f34();
L_004caff8:; BB(0x004caff8);
    /* 004caff8: push 0x42480000 */ { u32 v = 0x42480000u; r_esp -= 4; W32(r_esp, v); }
    /* 004caffd: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004cafff: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x4cb004u); f_007aaa30();
    /* 004cb004: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004cb006: je 0x4cb0b4 */ if (fZ) goto L_004cb0b4;
L_004cb00c:; BB(0x004cb00c);
    /* 004cb00c: mov edx, dword ptr [ebx + 0x688] */ r_edx = R32((u32)(r_ebx+0x688u));
    /* 004cb012: mov edi, dword ptr [edx + 0xc] */ r_edi = R32((u32)(r_edx+0xcu));
    /* 004cb015: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004cb017: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004cb019: jle 0x4cb02b */ if ((fZ||fS!=fO)) goto L_004cb02b;
L_004cb01b:; BB(0x004cb01b);
    /* 004cb01b: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 004cb01d: mov edi, dword ptr [edx + 4] */ r_edi = R32((u32)(r_edx+0x4u));
    /* 004cb020: mov dword ptr [ecx + eax*4], edi */ W32((u32)(r_ecx+r_eax*4), r_edi);
    /* 004cb023: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004cb026: cmp eax, dword ptr [edx + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0xcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004cb029: jl 0x4cb01b */ if ((fS!=fO)) goto L_004cb01b;
L_004cb02b:; BB(0x004cb02b);
    /* 004cb02b: mov dword ptr [edx + 8], 0 */ W32((u32)(r_edx+0x8u), 0x0u);
    /* 004cb032: movzx eax, word ptr [ebx + 0x1c] */ r_eax = (u32)R16((u32)(r_ebx+0x1cu));
    /* 004cb036: lea edi, [ebx + 0x38] */ r_edi = (u32)(r_ebx+0x38u);
    /* 004cb039: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004cb03a: push 0x42c80000 */ { u32 v = 0x42c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 004cb03f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004cb040: call 0x4cfc08 */ r_esp -= 4; W32(r_esp, 0x4cb045u); f_004cfc08();
    /* 004cb045: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004cb047: mov eax, dword ptr [ebx + 0x770] */ r_eax = R32((u32)(r_ebx+0x770u));
    /* 004cb04d: push dword ptr [eax + 8] */ { u32 v = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004cb050: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004cb051: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x4cb056u); f_0050b7a4();
    /* 004cb056: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004cb059: mov eax, dword ptr [ebx + 0x770] */ r_eax = R32((u32)(r_ebx+0x770u));
    /* 004cb05f: mov eax, dword ptr [eax + 0xc] */ r_eax = R32((u32)(r_eax+0xcu));
    /* 004cb062: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004cb065: je 0x4cb073 */ if (fZ) goto L_004cb073;
L_004cb067:; BB(0x004cb067);
    /* 004cb067: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004cb069: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004cb06a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004cb06b: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x4cb070u); f_0050b7a4();
    /* 004cb070: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004cb073:; BB(0x004cb073);
    /* 004cb073: lea edx, [ebx + 0x63c] */ r_edx = (u32)(r_ebx+0x63cu);
    /* 004cb079: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004cb07b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004cb07c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004cb07d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004cb07e: push 0x40f */ { u32 v = 0x40fu; r_esp -= 4; W32(r_esp, v); }
    /* 004cb083: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4cb088u); f_00814298();
    /* 004cb088: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004cb08a: call 0x4d4288 */ r_esp -= 4; W32(r_esp, 0x4cb08fu); f_004d4288();
    /* 004cb08f: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004cb092: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004cb094: call 0x4cb0f4 */ r_esp -= 4; W32(r_esp, 0x4cb099u); f_004cb0f4();
    /* 004cb099: mov dword ptr [ebx + 0x3ec], 0 */ W32((u32)(r_ebx+0x3ecu), 0x0u);
    /* 004cb0a3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004cb0a5: call 0x4cb184 */ r_esp -= 4; W32(r_esp, 0x4cb0aau); f_004cb184();
    /* 004cb0aa: mov dword ptr [ebx + 0x85c], 1 */ W32((u32)(r_ebx+0x85cu), 0x1u);
L_004cb0b4:; BB(0x004cb0b4);
    /* 004cb0b4: add esp, 0xa8 */ {  u32 a = r_esp; u32 b = 0xa8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004cb0ba: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004cb0bb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004cb0bc: ret 4 */ FN_RET(0x004caf2d); r_esp += 8; return;
}

