#include "protos.h"

void f_0041a004(void) /* sub_41A004 */
{
    FN_ENTER(0x0041a004);
    /* 0041a004: mov eax, dword ptr [ecx + 0x38] */ r_eax = R32((u32)(r_ecx+0x38u));
    /* 0041a007: mov edx, dword ptr [ecx + 0x40] */ r_edx = R32((u32)(r_ecx+0x40u));
    /* 0041a00a: mov dword ptr [ecx + 0x698], eax */ W32((u32)(r_ecx+0x698u), r_eax);
    /* 0041a010: mov dword ptr [ecx + 0x69c], edx */ W32((u32)(r_ecx+0x69cu), r_edx);
    /* 0041a016: ret  */ FN_RET(0x0041a004); r_esp += 4; return;
}

void f_0041a018(void) /* sub_41A018 */
{
    FN_ENTER(0x0041a018);
    /* 0041a018: fld dword ptr [0x8fbed8] */ FPUSH(R_F32((u32)(0x8fbed8u)));
    /* 0041a01e: mov eax, dword ptr [ecx + 0x3c8] */ r_eax = R32((u32)(r_ecx+0x3c8u));
    /* 0041a024: fld dword ptr [ecx + 0x3c] */ FPUSH(R_F32((u32)(r_ecx+0x3cu)));
    /* 0041a027: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0041a029: fld dword ptr [ecx + 0x5e8] */ FPUSH(R_F32((u32)(r_ecx+0x5e8u)));
    /* 0041a02f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0041a031: fstp dword ptr [ecx + 0x5e0] */ W_F32((u32)(r_ecx+0x5e0u), ST(0)); FPOP();
    /* 0041a037: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0041a039: fstp dword ptr [ecx + 0x5e4] */ W_F32((u32)(r_ecx+0x5e4u), ST(0)); FPOP();
    /* 0041a03f: and eax, 0xfffffeff */ {  u32 a = r_eax; u32 b = 0xfffffeffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0041a044: mov dword ptr [ecx + 0x3c8], eax */ W32((u32)(r_ecx+0x3c8u), r_eax);
    /* 0041a04a: ret  */ FN_RET(0x0041a018); r_esp += 4; return;
}

void f_0041a04c(void) /* sub_41A04C */
{
    FN_ENTER(0x0041a04c);
    /* 0041a04c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0041a04d: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0041a050: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0041a052: mov ecx, dword ptr [ebx + 0x6e0] */ r_ecx = R32((u32)(r_ebx+0x6e0u));
    /* 0041a058: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041a05a: je 0x41a0d8 */ if (fZ) goto L_0041a0d8;
L_0041a05c:; BB(0x0041a05c);
    /* 0041a05c: call 0x427bc8 */ r_esp -= 4; W32(r_esp, 0x41a061u); f_00427bc8();
    /* 0041a061: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041a063: je 0x41a0d8 */ if (fZ) goto L_0041a0d8;
L_0041a065:; BB(0x0041a065);
    /* 0041a065: mov eax, dword ptr [0x8fb298] */ r_eax = R32((u32)(0x8fb298u));
    /* 0041a06a: mov edx, dword ptr [0x8fb2a8] */ r_edx = R32((u32)(0x8fb2a8u));
    /* 0041a070: mov dword ptr [esp + 4], 0x43fa0000 */ W32((u32)(r_esp+0x4u), 0x43fa0000u);
    /* 0041a078: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0041a07b: mov eax, dword ptr [0xa43728] */ r_eax = R32((u32)(0xa43728u));
    /* 0041a080: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 0041a084: mov dword ptr [esp + 0xc], 0x42c80000 */ W32((u32)(r_esp+0xcu), 0x42c80000u);
    /* 0041a08c: mov dword ptr [esp + 8], 0x42340000 */ W32((u32)(r_esp+0x8u), 0x42340000u);
    /* 0041a094: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 0041a097: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0041a09b: call 0x420a44 */ r_esp -= 4; W32(r_esp, 0x41a0a0u); f_00420a44();
    /* 0041a0a0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041a0a2: jne 0x41a0be */ if (!fZ) goto L_0041a0be;
L_0041a0a4:; BB(0x0041a0a4);
    /* 0041a0a4: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0041a0a7: push dword ptr [ebx + 0x690] */ { u32 v = R32((u32)(r_ebx+0x690u)); r_esp -= 4; W32(r_esp, v); }
    /* 0041a0ad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041a0ae: lea edx, [ebx + 0x38] */ r_edx = (u32)(r_ebx+0x38u);
    /* 0041a0b1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041a0b2: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0041a0b4: call 0x51fc9c */ r_esp -= 4; W32(r_esp, 0x41a0b9u); f_0051fc9c();
    /* 0041a0b9: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041a0bc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0041a0bd: ret  */ FN_RET(0x0041a04c); r_esp += 4; return;
L_0041a0be:; BB(0x0041a0be);
    /* 0041a0be: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041a0c1: jne 0x41a0d8 */ if (!fZ) goto L_0041a0d8;
L_0041a0c3:; BB(0x0041a0c3);
    /* 0041a0c3: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0041a0c6: push dword ptr [ebx + 0x690] */ { u32 v = R32((u32)(r_ebx+0x690u)); r_esp -= 4; W32(r_esp, v); }
    /* 0041a0cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041a0cd: lea edx, [ebx + 0x38] */ r_edx = (u32)(r_ebx+0x38u);
    /* 0041a0d0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041a0d1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0041a0d3: call 0x41a0e0 */ r_esp -= 4; W32(r_esp, 0x41a0d8u); f_0041a0e0();
L_0041a0d8:; BB(0x0041a0d8);
    /* 0041a0d8: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041a0db: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0041a0dc: ret  */ FN_RET(0x0041a04c); r_esp += 4; return;
}

void f_0041a0e0(void) /* sub_41A0E0 */
{
    FN_ENTER(0x0041a0e0);
    /* 0041a0e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0041a0e1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0041a0e2: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0041a0e4: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 0041a0e8: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0041a0ec: mov ecx, dword ptr [ebx + 0x77c] */ r_ecx = R32((u32)(r_ebx+0x77cu));
    /* 0041a0f2: call 0x6ac1a4 */ r_esp -= 4; W32(r_esp, 0x41a0f7u); f_006ac1a4();
    /* 0041a0f7: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 0041a0fb: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0041a0fc: mov eax, dword ptr [ebx + 0x77c] */ r_eax = R32((u32)(r_ebx+0x77cu));
    /* 0041a102: mov eax, dword ptr [eax + 0xa4] */ r_eax = R32((u32)(r_eax+0xa4u));
    /* 0041a108: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0041a10b: mov dword ptr [eax + 0xc], edx */ W32((u32)(r_eax+0xcu), r_edx);
    /* 0041a10e: mov eax, dword ptr [ebx + 0x77c] */ r_eax = R32((u32)(r_ebx+0x77cu));
    /* 0041a114: mov eax, dword ptr [eax + 0xa4] */ r_eax = R32((u32)(r_eax+0xa4u));
    /* 0041a11a: mov dword ptr [eax + 0x18], 0x9d03 */ W32((u32)(r_eax+0x18u), 0x9d03u);
    /* 0041a121: mov ecx, dword ptr [ebx + 0x77c] */ r_ecx = R32((u32)(r_ebx+0x77cu));
    /* 0041a127: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0041a129: lea ebx, [ebp + 0xc] */ r_ebx = (u32)(r_ebp+0xcu);
    /* 0041a12c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0041a12d: call dword ptr [eax + 0x34] */ { u32 t = R32((u32)(r_eax+0x34u)); r_esp -= 4; W32(r_esp, 0x41a130u); call_ind(t); }
    /* 0041a130: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0041a131: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041a132: ret 0xc */ FN_RET(0x0041a0e0); r_esp += 16; return;
}

void f_0041a138(void) /* sub_41A138 */
{
    FN_ENTER(0x0041a138);
    /* 0041a138: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0041a139: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0041a13c: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0041a13e: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 0041a142: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0041a145: ja 0x41a31e */ if ((!fC&&!fZ)) goto L_0041a31e;
L_0041a14b:; BB(0x0041a14b);
    /* 0041a14b: mov eax, dword ptr [eax*4 + 0x8fb2ac] */ r_eax = R32((u32)(r_eax*4+0x8fb2acu));
    /* 0041a152: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0041a31e:; BB(0x0041a31e);
    /* 0041a31e: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041a321: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0041a322: ret 4 */ FN_RET(0x0041a138); r_esp += 8; return;
}

void f_0041a154(void)
{
    FN_ENTER(0x0041a154);
    /* 0041a154: fld dword ptr [ebx + 0x6a0] */ FPUSH(R_F32((u32)(r_ebx+0x6a0u)));
    /* 0041a15a: fld dword ptr [ebx + 0x6a4] */ FPUSH(R_F32((u32)(r_ebx+0x6a4u)));
    /* 0041a160: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0041a162: fnstcw word ptr [esp + 0x14] */ W16((u32)(r_esp+0x14u), fcw);
    /* 0041a166: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 0041a16b: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0041a170: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 0041a174: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 0041a178: fistp dword ptr [ebx + 0x774] */ W32((u32)(r_ebx+0x774u), (u32)fx_int32(ST(0))); FPOP();
    /* 0041a17e: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 0041a182: fcomp dword ptr [0x8fbed0] */ fx_compare(ST(0), R_F32((u32)(0x8fbed0u))); FPOP();
    /* 0041a188: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0041a18a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0041a18b: jbe 0x41a19e */ if ((fC||fZ)) goto L_0041a19e;
L_0041a18d:; BB(0x0041a18d);
    /* 0041a18d: mov dword ptr [ebx + 0x87c], 0x180 */ W32((u32)(r_ebx+0x87cu), 0x180u);
    /* 0041a197: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041a19a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0041a19b: ret 4 */ FN_RET(0x0041a154); r_esp += 8; return;
L_0041a19e:; BB(0x0041a19e);
    /* 0041a19e: mov dword ptr [ebx + 0x87c], 0xfffffe80 */ W32((u32)(r_ebx+0x87cu), 0xfffffe80u);
    /* 0041a1a8: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041a1ab: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0041a1ac: ret 4 */ FN_RET(0x0041a154); r_esp += 8; return;
}

void f_0041a1af(void)
{
    FN_ENTER(0x0041a1af);
    /* 0041a1af: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0041a1b1: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x41a1b6u); f_007751b0();
    /* 0041a1b6: fld dword ptr [0x8fbecc] */ FPUSH(R_F32((u32)(0x8fbeccu)));
    /* 0041a1bc: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0041a1be: fstp dword ptr [ebx + 0x698] */ W_F32((u32)(r_ebx+0x698u), ST(0)); FPOP();
    /* 0041a1c4: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0041a1c6: call 0x520bf4 */ r_esp -= 4; W32(r_esp, 0x41a1cbu); f_00520bf4();
    /* 0041a1cb: fstp dword ptr [ebx + 0x69c] */ W_F32((u32)(r_ebx+0x69cu), ST(0)); FPOP();
    /* 0041a1d1: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041a1d4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0041a1d5: ret 4 */ FN_RET(0x0041a1af); r_esp += 8; return;
}

void f_0041a1d8(void)
{
    FN_ENTER(0x0041a1d8);
    /* 0041a1d8: mov ecx, dword ptr [ebx + 0x6e0] */ r_ecx = R32((u32)(r_ebx+0x6e0u));
    /* 0041a1de: call 0x427a58 */ r_esp -= 4; W32(r_esp, 0x41a1e3u); f_00427a58();
    /* 0041a1e3: jmp 0x41a31e */ goto L_0041a31e;
L_0041a31e:; BB(0x0041a31e);
    /* 0041a31e: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041a321: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0041a322: ret 4 */ FN_RET(0x0041a1d8); r_esp += 8; return;
}

void f_0041a1e8(void)
{
    FN_ENTER(0x0041a1e8);
    /* 0041a1e8: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0041a1ea: mov eax, 0x11 */ r_eax = 0x11u;
    /* 0041a1ef: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
    /* 0041a1f6: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0041a1f8: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x41a1feu); call_ind(t); }
    /* 0041a1fe: mov dword ptr [ebx + 0x3ec], 2 */ W32((u32)(r_ebx+0x3ecu), 0x2u);
    /* 0041a208: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0041a20a: call 0x41a018 */ r_esp -= 4; W32(r_esp, 0x41a20fu); f_0041a018();
    /* 0041a20f: mov eax, dword ptr [ebx + 0x3c8] */ r_eax = R32((u32)(r_ebx+0x3c8u));
    /* 0041a215: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0041a217: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0041a21c: and eax, 0xfffffc7f */ {  u32 a = r_eax; u32 b = 0xfffffc7fu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0041a221: mov dword ptr [ebx + 0x3c8], eax */ W32((u32)(r_ebx+0x3c8u), r_eax);
    /* 0041a227: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0041a229: call dword ptr [edx + 0x174] */ { u32 t = R32((u32)(r_edx+0x174u)); r_esp -= 4; W32(r_esp, 0x41a22fu); call_ind(t); }
    /* 0041a22f: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0041a231: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0041a233: call dword ptr [eax + 0x180] */ { u32 t = R32((u32)(r_eax+0x180u)); r_esp -= 4; W32(r_esp, 0x41a239u); call_ind(t); }
    /* 0041a239: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0041a23b: call 0x41a334 */ r_esp -= 4; W32(r_esp, 0x41a240u); f_0041a334();
    /* 0041a240: mov ecx, dword ptr [ebx + 0x6e0] */ r_ecx = R32((u32)(r_ebx+0x6e0u));
    /* 0041a246: call 0x427bbc */ r_esp -= 4; W32(r_esp, 0x41a24bu); f_00427bbc();
    /* 0041a24b: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041a24e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0041a24f: ret 4 */ FN_RET(0x0041a1e8); r_esp += 8; return;
}

void f_0041a252(void)
{
    FN_ENTER(0x0041a252);
    /* 0041a252: mov eax, dword ptr [ebx + 0x86c] */ r_eax = R32((u32)(r_ebx+0x86cu));
    /* 0041a258: cmp eax, 0x1c2 */ {  u32 a = r_eax; u32 b = 0x1c2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041a25d: jge 0x41a27d */ if ((fS==fO)) goto L_0041a27d;
L_0041a25f:; BB(0x0041a25f);
    /* 0041a25f: push dword ptr [0xa0f67c] */ { u32 v = R32((u32)(0xa0f67cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0041a265: mov eax, dword ptr [ebx + 0x6ec] */ r_eax = R32((u32)(r_ebx+0x6ecu));
    /* 0041a26b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0041a26d: push dword ptr [eax + 8] */ { u32 v = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0041a270: call 0x4c6c54 */ r_esp -= 4; W32(r_esp, 0x41a275u); f_004c6c54();
    /* 0041a275: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041a277: je 0x41a31e */ if (fZ) goto L_0041a31e;
L_0041a27d:; BB(0x0041a27d);
    /* 0041a27d: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0041a27f: push 0x25 */ { u32 v = 0x25u; r_esp -= 4; W32(r_esp, v); }
    /* 0041a281: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0041a283: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0041a285: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x41a28bu); call_ind(t); }
    /* 0041a28b: movzx eax, word ptr [ebx + 0x1c] */ r_eax = (u32)R16((u32)(r_ebx+0x1cu));
    /* 0041a28f: mov byte ptr [esp], 0x12 */ W8((u32)(r_esp), 0x12u);
    /* 0041a293: mov edx, 0x25 */ r_edx = 0x25u;
    /* 0041a298: mov byte ptr [esp + 1], 5 */ W8((u32)(r_esp+0x1u), 0x5u);
    /* 0041a29d: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 0041a2a2: mov eax, dword ptr [ebx + 0x684] */ r_eax = R32((u32)(r_ebx+0x684u));
    /* 0041a2a8: mov word ptr [esp + 4], dx */ W16((u32)(r_esp+0x4u), (u16)r_edx);
    /* 0041a2ad: mov word ptr [esp + 6], ax */ W16((u32)(r_esp+0x6u), (u16)r_eax);
    /* 0041a2b2: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0041a2b5: movzx eax, word ptr [ebx + 0x394] */ r_eax = (u32)R16((u32)(r_ebx+0x394u));
    /* 0041a2bc: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0041a2c0: mov eax, dword ptr [ebx + 0x698] */ r_eax = R32((u32)(r_ebx+0x698u));
    /* 0041a2c6: mov ebx, dword ptr [ebx + 0x69c] */ r_ebx = R32((u32)(r_ebx+0x69cu));
    /* 0041a2cc: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0041a2d0: mov dword ptr [esp + 0x10], ebx */ W32((u32)(r_esp+0x10u), r_ebx);
    /* 0041a2d4: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x41a2d9u); f_008003e0();
    /* 0041a2d9: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041a2dc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0041a2dd: ret 4 */ FN_RET(0x0041a252); r_esp += 8; return;
L_0041a31e:; BB(0x0041a31e);
    /* 0041a31e: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041a321: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0041a322: ret 4 */ FN_RET(0x0041a252); r_esp += 8; return;
}

void f_0041a2e0(void)
{
    FN_ENTER(0x0041a2e0);
    /* 0041a2e0: mov edx, dword ptr [ebx + 0x87c] */ r_edx = R32((u32)(r_ebx+0x87cu));
    /* 0041a2e6: mov eax, dword ptr [ebx + 0x774] */ r_eax = R32((u32)(r_ebx+0x774u));
    /* 0041a2ec: lea ecx, [edx + eax] */ r_ecx = (u32)(r_edx+r_eax);
    /* 0041a2ef: mov dword ptr [ebx + 0x774], ecx */ W32((u32)(r_ebx+0x774u), r_ecx);
    /* 0041a2f5: mov ecx, dword ptr [ebx + 0x87c] */ r_ecx = R32((u32)(r_ebx+0x87cu));
    /* 0041a2fb: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0041a2fd: jl 0x41a325 */ if ((fS!=fO)) goto L_0041a325;
L_0041a2ff:; BB(0x0041a2ff);
    /* 0041a2ff: lea eax, [edx + eax + 0x9800] */ r_eax = (u32)(r_edx+r_eax+0x9800u);
    /* 0041a306: mov dword ptr [ebx + 0x60], eax */ W32((u32)(r_ebx+0x60u), r_eax);
L_0041a309:; BB(0x0041a309);
    /* 0041a309: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0041a30b: call 0x41a334 */ r_esp -= 4; W32(r_esp, 0x41a310u); f_0041a334();
    /* 0041a310: add dword ptr [ebx + 0x86c], 1 */ { u32 ad = (u32)(r_ebx+0x86cu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0041a317: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0041a319: call 0x41a04c */ r_esp -= 4; W32(r_esp, 0x41a31eu); f_0041a04c();
    /* 0041a31e: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041a321: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0041a322: ret 4 */ FN_RET(0x0041a2e0); r_esp += 8; return;
L_0041a325:; BB(0x0041a325);
    /* 0041a325: lea eax, [edx + eax - 0x9800] */ r_eax = (u32)(r_edx+r_eax+0xffff6800u);
    /* 0041a32c: mov dword ptr [ebx + 0x60], eax */ W32((u32)(r_ebx+0x60u), r_eax);
    /* 0041a32f: jmp 0x41a309 */ goto L_0041a309;
}

void f_0041a31e(void)
{
    FN_ENTER(0x0041a31e);
    /* 0041a31e: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041a321: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0041a322: ret 4 */ FN_RET(0x0041a31e); r_esp += 8; return;
}

void f_0041a334(void) /* sub_41A334 */
{
    FN_ENTER(0x0041a334);
    /* 0041a334: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0041a335: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0041a337: mov ecx, dword ptr [ebp + 0x774] */ r_ecx = R32((u32)(r_ebp+0x774u));
    /* 0041a33d: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x41a342u); f_0082dcbc();
    /* 0041a342: fld dword ptr [0x8fbec8] */ FPUSH(R_F32((u32)(0x8fbec8u)));
    /* 0041a348: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0041a34a: mov ecx, dword ptr [ebp + 0x774] */ r_ecx = R32((u32)(r_ebp+0x774u));
    /* 0041a350: fstp dword ptr [ebp + 0x38] */ W_F32((u32)(r_ebp+0x38u), ST(0)); FPOP();
    /* 0041a353: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x41a358u); f_0082ddd8();
    /* 0041a358: fmul dword ptr [0x8fbec8] */ ST(0) = ST(0) * R_F32((u32)(0x8fbec8u));
    /* 0041a35e: fstp dword ptr [ebp + 0x40] */ W_F32((u32)(r_ebp+0x40u), ST(0)); FPOP();
    /* 0041a361: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041a362: ret  */ FN_RET(0x0041a334); r_esp += 4; return;
}

void f_0041a364(void) /* sub_41A364 */
{
    FN_ENTER(0x0041a364);
    /* 0041a364: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0041a365: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0041a366: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0041a369: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0041a36b: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 0041a36f: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0041a372: ja 0x41a72f */ if ((!fC&&!fZ)) goto L_0041a72f;
L_0041a378:; BB(0x0041a378);
    /* 0041a378: mov eax, dword ptr [eax*4 + 0x8fb2dc] */ r_eax = R32((u32)(r_eax*4+0x8fb2dcu));
    /* 0041a37f: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0041a72f:; BB(0x0041a72f);
    /* 0041a72f: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041a732: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0041a733: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0041a734: ret 4 */ FN_RET(0x0041a364); r_esp += 8; return;
}

void f_0041a381(void)
{
    FN_ENTER(0x0041a381);
    /* 0041a381: mov eax, dword ptr [ebx + 0x8c0] */ r_eax = R32((u32)(r_ebx+0x8c0u));
    /* 0041a387: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041a389: jne 0x41a39f */ if (!fZ) goto L_0041a39f;
L_0041a38b:; BB(0x0041a38b);
    /* 0041a38b: mov eax, dword ptr [ebx + 0x86c] */ r_eax = R32((u32)(r_ebx+0x86cu));
    /* 0041a391: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041a394: jne 0x41a72f */ if (!fZ) goto L_0041a72f;
L_0041a39a:; BB(0x0041a39a);
    /* 0041a39a: jmp 0x41a737 */ goto L_0041a737;
L_0041a39f:; BB(0x0041a39f);
    /* 0041a39f: mov esi, dword ptr [ebx + 0x684] */ r_esi = R32((u32)(r_ebx+0x684u));
    /* 0041a3a5: cmp esi, 0x32 */ {  u32 a = r_esi; u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041a3a8: jge 0x41a3c6 */ if ((fS==fO)) goto L_0041a3c6;
L_0041a3aa:; BB(0x0041a3aa);
    /* 0041a3aa: call 0x420a44 */ r_esp -= 4; W32(r_esp, 0x41a3afu); f_00420a44();
    /* 0041a3af: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041a3b1: jne 0x41a3ba */ if (!fZ) goto L_0041a3ba;
L_0041a3b3:; BB(0x0041a3b3);
    /* 0041a3b3: mov edx, 0x9a3cb0 */ r_edx = 0x9a3cb0u;
    /* 0041a3b8: jmp 0x41a3e3 */ goto L_0041a3e3;
L_0041a3ba:; BB(0x0041a3ba);
    /* 0041a3ba: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041a3bd: jne 0x41a3e3 */ if (!fZ) goto L_0041a3e3;
L_0041a3bf:; BB(0x0041a3bf);
    /* 0041a3bf: mov edx, 0x9a3d28 */ r_edx = 0x9a3d28u;
    /* 0041a3c4: jmp 0x41a3e3 */ goto L_0041a3e3;
L_0041a3c6:; BB(0x0041a3c6);
    /* 0041a3c6: add esi, -0x32 */ {  u32 a = r_esi; u32 b = 0xffffffceu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0041a3c9: call 0x420a44 */ r_esp -= 4; W32(r_esp, 0x41a3ceu); f_00420a44();
    /* 0041a3ce: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041a3d0: jne 0x41a3d9 */ if (!fZ) goto L_0041a3d9;
L_0041a3d2:; BB(0x0041a3d2);
    /* 0041a3d2: mov edx, 0x9a3cf0 */ r_edx = 0x9a3cf0u;
    /* 0041a3d7: jmp 0x41a3e3 */ goto L_0041a3e3;
L_0041a3d9:; BB(0x0041a3d9);
    /* 0041a3d9: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041a3dc: jne 0x41a3e3 */ if (!fZ) goto L_0041a3e3;
L_0041a3de:; BB(0x0041a3de);
    /* 0041a3de: mov edx, 0x9a3d78 */ r_edx = 0x9a3d78u;
L_0041a3e3:; BB(0x0041a3e3);
    /* 0041a3e3: mov ecx, dword ptr [ebx + 0x684] */ r_ecx = R32((u32)(r_ebx+0x684u));
L_0041a3e9:; BB(0x0041a3e9);
    /* 0041a3e9: mov eax, dword ptr [edx + esi*4] */ r_eax = R32((u32)(r_edx+r_esi*4));
    /* 0041a3ec: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0041a3ef: cmp eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041a3f2: jne 0x41a7ca */ if (!fZ) goto L_0041a7ca;
L_0041a3f8:; BB(0x0041a3f8);
    /* 0041a3f8: mov dword ptr [ebx + 0x684], 0 */ W32((u32)(r_ebx+0x684u), 0x0u);
    /* 0041a402: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0041a404: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0041a406: jmp 0x41a3e9 */ goto L_0041a3e9;
L_0041a72f:; BB(0x0041a72f);
    /* 0041a72f: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041a732: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0041a733: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0041a734: ret 4 */ FN_RET(0x0041a381); r_esp += 8; return;
L_0041a737:; BB(0x0041a737);
    /* 0041a737: mov esi, dword ptr [ebx + 0x684] */ r_esi = R32((u32)(r_ebx+0x684u));
    /* 0041a73d: cmp esi, 0x32 */ {  u32 a = r_esi; u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041a740: jge 0x41a75e */ if ((fS==fO)) goto L_0041a75e;
L_0041a742:; BB(0x0041a742);
    /* 0041a742: call 0x420a44 */ r_esp -= 4; W32(r_esp, 0x41a747u); f_00420a44();
    /* 0041a747: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041a749: jne 0x41a752 */ if (!fZ) goto L_0041a752;
L_0041a74b:; BB(0x0041a74b);
    /* 0041a74b: mov edx, 0x9a3cb0 */ r_edx = 0x9a3cb0u;
    /* 0041a750: jmp 0x41a77b */ goto L_0041a77b;
L_0041a752:; BB(0x0041a752);
    /* 0041a752: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041a755: jne 0x41a77b */ if (!fZ) goto L_0041a77b;
L_0041a757:; BB(0x0041a757);
    /* 0041a757: mov edx, 0x9a3d28 */ r_edx = 0x9a3d28u;
    /* 0041a75c: jmp 0x41a77b */ goto L_0041a77b;
L_0041a75e:; BB(0x0041a75e);
    /* 0041a75e: add esi, -0x32 */ {  u32 a = r_esi; u32 b = 0xffffffceu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0041a761: call 0x420a44 */ r_esp -= 4; W32(r_esp, 0x41a766u); f_00420a44();
    /* 0041a766: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041a768: jne 0x41a771 */ if (!fZ) goto L_0041a771;
L_0041a76a:; BB(0x0041a76a);
    /* 0041a76a: mov edx, 0x9a3cf0 */ r_edx = 0x9a3cf0u;
    /* 0041a76f: jmp 0x41a77b */ goto L_0041a77b;
L_0041a771:; BB(0x0041a771);
    /* 0041a771: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041a774: jne 0x41a77b */ if (!fZ) goto L_0041a77b;
L_0041a776:; BB(0x0041a776);
    /* 0041a776: mov edx, 0x9a3d78 */ r_edx = 0x9a3d78u;
L_0041a77b:; BB(0x0041a77b);
    /* 0041a77b: mov ecx, dword ptr [ebx + 0x684] */ r_ecx = R32((u32)(r_ebx+0x684u));
L_0041a781:; BB(0x0041a781);
    /* 0041a781: mov eax, dword ptr [edx + esi*4] */ r_eax = R32((u32)(r_edx+r_esi*4));
    /* 0041a784: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0041a787: cmp eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041a78a: jne 0x41a79c */ if (!fZ) goto L_0041a79c;
L_0041a78c:; BB(0x0041a78c);
    /* 0041a78c: mov dword ptr [ebx + 0x684], 0 */ W32((u32)(r_ebx+0x684u), 0x0u);
    /* 0041a796: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0041a798: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0041a79a: jmp 0x41a781 */ goto L_0041a781;
L_0041a79c:; BB(0x0041a79c);
    /* 0041a79c: cmp eax, 0x21 */ {  u32 a = r_eax; u32 b = 0x21u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041a79f: je 0x41a7b7 */ if (fZ) goto L_0041a7b7;
L_0041a7a1:; BB(0x0041a7a1);
    /* 0041a7a1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041a7a2: mov dword ptr [ebx + 0x684], ecx */ W32((u32)(r_ebx+0x684u), r_ecx);
    /* 0041a7a8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0041a7aa: call 0x41a808 */ r_esp -= 4; W32(r_esp, 0x41a7afu); f_0041a808();
    /* 0041a7af: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041a7b2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0041a7b3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0041a7b4: ret 4 */ FN_RET(0x0041a381); r_esp += 8; return;
L_0041a7b7:; BB(0x0041a7b7);
    /* 0041a7b7: mov dword ptr [ebx + 0x684], 0x32 */ W32((u32)(r_ebx+0x684u), 0x32u);
    /* 0041a7c1: mov ecx, 0x32 */ r_ecx = 0x32u;
    /* 0041a7c6: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0041a7c8: jmp 0x41a781 */ goto L_0041a781;
L_0041a7ca:; BB(0x0041a7ca);
    /* 0041a7ca: cmp eax, 0x21 */ {  u32 a = r_eax; u32 b = 0x21u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041a7cd: je 0x41a7ef */ if (fZ) goto L_0041a7ef;
L_0041a7cf:; BB(0x0041a7cf);
    /* 0041a7cf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041a7d0: mov dword ptr [ebx + 0x684], ecx */ W32((u32)(r_ebx+0x684u), r_ecx);
    /* 0041a7d6: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0041a7d8: call 0x41a808 */ r_esp -= 4; W32(r_esp, 0x41a7ddu); f_0041a808();
    /* 0041a7dd: mov dword ptr [ebx + 0x8c0], 0 */ W32((u32)(r_ebx+0x8c0u), 0x0u);
    /* 0041a7e7: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041a7ea: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0041a7eb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0041a7ec: ret 4 */ FN_RET(0x0041a381); r_esp += 8; return;
L_0041a7ef:; BB(0x0041a7ef);
    /* 0041a7ef: mov dword ptr [ebx + 0x684], 0x32 */ W32((u32)(r_ebx+0x684u), 0x32u);
    /* 0041a7f9: mov ecx, 0x32 */ r_ecx = 0x32u;
    /* 0041a7fe: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0041a800: jmp 0x41a3e9 */ goto L_0041a3e9;
}

void f_0041a408(void)
{
    FN_ENTER(0x0041a408);
    /* 0041a408: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0041a40a: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x41a40fu); f_007751b0();
    /* 0041a40f: fld dword ptr [0x8fbec4] */ FPUSH(R_F32((u32)(0x8fbec4u)));
    /* 0041a415: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0041a417: fnstcw word ptr [esp + 0x14] */ W16((u32)(r_esp+0x14u), fcw);
    /* 0041a41b: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 0041a420: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0041a425: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 0041a429: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 0041a42d: fistp dword ptr [esp + 0x24] */ W32((u32)(r_esp+0x24u), (u32)fx_int32(ST(0))); FPOP();
    /* 0041a431: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 0041a435: mov esi, dword ptr [esp + 0x24] */ r_esi = R32((u32)(r_esp+0x24u));
    /* 0041a439: mov ecx, esi */ r_ecx = r_esi;
    /* 0041a43b: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x41a440u); f_0082dcbc();
    /* 0041a440: fld dword ptr [0xa436d8] */ FPUSH(R_F32((u32)(0xa436d8u)));
    /* 0041a446: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0041a448: fstp dword ptr [ebx + 0x38] */ W_F32((u32)(r_ebx+0x38u), ST(0)); FPOP();
    /* 0041a44b: mov ecx, esi */ r_ecx = r_esi;
    /* 0041a44d: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x41a452u); f_0082ddd8();
    /* 0041a452: fld dword ptr [0xa436d8] */ FPUSH(R_F32((u32)(0xa436d8u)));
    /* 0041a458: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0041a45a: fstp dword ptr [ebx + 0x40] */ W_F32((u32)(r_ebx+0x40u), ST(0)); FPOP();
    /* 0041a45d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0041a45f: call 0x41a004 */ r_esp -= 4; W32(r_esp, 0x41a464u); f_0041a004();
    /* 0041a464: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041a467: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0041a468: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0041a469: ret 4 */ FN_RET(0x0041a408); r_esp += 8; return;
}

void f_0041a46c(void)
{
    FN_ENTER(0x0041a46c);
    /* 0041a46c: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0041a46e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0041a470: call dword ptr [eax + 0x178] */ { u32 t = R32((u32)(r_eax+0x178u)); r_esp -= 4; W32(r_esp, 0x41a476u); call_ind(t); }
    /* 0041a476: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0041a478: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0041a47a: call dword ptr [eax + 0x17c] */ { u32 t = R32((u32)(r_eax+0x17cu)); r_esp -= 4; W32(r_esp, 0x41a480u); call_ind(t); }
    /* 0041a480: mov ecx, dword ptr [ebx + 0x6e0] */ r_ecx = R32((u32)(r_ebx+0x6e0u));
    /* 0041a486: call 0x427a58 */ r_esp -= 4; W32(r_esp, 0x41a48bu); f_00427a58();
    /* 0041a48b: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041a48e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0041a48f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0041a490: ret 4 */ FN_RET(0x0041a46c); r_esp += 8; return;
}

void f_0041a493(void)
{
    FN_ENTER(0x0041a493);
    /* 0041a493: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0041a495: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0041a497: call dword ptr [eax + 0x188] */ { u32 t = R32((u32)(r_eax+0x188u)); r_esp -= 4; W32(r_esp, 0x41a49du); call_ind(t); }
    /* 0041a49d: mov dword ptr [ebx + 0x3ec], 2 */ W32((u32)(r_ebx+0x3ecu), 0x2u);
    /* 0041a4a7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0041a4a9: call 0x41a018 */ r_esp -= 4; W32(r_esp, 0x41a4aeu); f_0041a018();
    /* 0041a4ae: mov eax, dword ptr [ebx + 0x3c8] */ r_eax = R32((u32)(r_ebx+0x3c8u));
    /* 0041a4b4: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0041a4b6: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0041a4bb: and eax, 0xfffffc7f */ {  u32 a = r_eax; u32 b = 0xfffffc7fu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0041a4c0: mov dword ptr [ebx + 0x3c8], eax */ W32((u32)(r_ebx+0x3c8u), r_eax);
    /* 0041a4c6: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0041a4c8: call dword ptr [edx + 0x174] */ { u32 t = R32((u32)(r_edx+0x174u)); r_esp -= 4; W32(r_esp, 0x41a4ceu); call_ind(t); }
    /* 0041a4ce: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0041a4d0: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0041a4d2: call dword ptr [eax + 0x180] */ { u32 t = R32((u32)(r_eax+0x180u)); r_esp -= 4; W32(r_esp, 0x41a4d8u); call_ind(t); }
    /* 0041a4d8: mov edx, dword ptr [ebx + 0x690] */ r_edx = R32((u32)(r_ebx+0x690u));
    /* 0041a4de: mov esi, dword ptr [edx + 0xc] */ r_esi = R32((u32)(r_edx+0xcu));
    /* 0041a4e1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0041a4e3: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0041a4e5: jle 0x41a4f7 */ if ((fZ||fS!=fO)) goto L_0041a4f7;
L_0041a4e7:; BB(0x0041a4e7);
    /* 0041a4e7: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 0041a4e9: mov esi, dword ptr [edx + 4] */ r_esi = R32((u32)(r_edx+0x4u));
    /* 0041a4ec: mov dword ptr [ecx + eax*4], esi */ W32((u32)(r_ecx+r_eax*4), r_esi);
    /* 0041a4ef: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0041a4f2: cmp eax, dword ptr [edx + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0xcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041a4f5: jl 0x41a4e7 */ if ((fS!=fO)) goto L_0041a4e7;
L_0041a4f7:; BB(0x0041a4f7);
    /* 0041a4f7: fld dword ptr [0x8fbec0] */ FPUSH(R_F32((u32)(0x8fbec0u)));
    /* 0041a4fd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0041a4ff: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 0041a502: fild dword ptr [ebx + 0x6e4] */ FPUSH((long double)(i32)R32((u32)(r_ebx+0x6e4u)));
    /* 0041a508: fmul dword ptr [0x8fbf60] */ ST(0) = ST(0) * R_F32((u32)(0x8fbf60u));
    /* 0041a50e: fadd dword ptr [0x8fbf64] */ ST(0) = ST(0) + R_F32((u32)(0x8fbf64u));
    /* 0041a514: mov dword ptr [ebx + 0x86c], eax */ W32((u32)(r_ebx+0x86cu), r_eax);
    /* 0041a51a: fst dword ptr [ebx + 0x888] */ W_F32((u32)(r_ebx+0x888u), ST(0));
    /* 0041a520: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0041a522: fstp dword ptr [ebx + 0x884] */ W_F32((u32)(r_ebx+0x884u), ST(0)); FPOP();
    /* 0041a528: mov dword ptr [ebx + 0x870], eax */ W32((u32)(r_ebx+0x870u), r_eax);
    /* 0041a52e: mov dword ptr [ebx + 0x88c], 0x43af0000 */ W32((u32)(r_ebx+0x88cu), 0x43af0000u);
    /* 0041a538: mov dword ptr [ebx + 0x87c], eax */ W32((u32)(r_ebx+0x87cu), r_eax);
    /* 0041a53e: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041a541: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0041a542: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0041a543: ret 4 */ FN_RET(0x0041a493); r_esp += 8; return;
}

void f_0041a546(void)
{
    FN_ENTER(0x0041a546);
    /* 0041a546: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0041a548: push 0x1b */ { u32 v = 0x1bu; r_esp -= 4; W32(r_esp, v); }
    /* 0041a54a: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0041a54c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0041a54e: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x41a554u); call_ind(t); }
    /* 0041a554: movzx eax, word ptr [ebx + 0x1c] */ r_eax = (u32)R16((u32)(r_ebx+0x1cu));
    /* 0041a558: mov esi, dword ptr [ebx + 0x684] */ r_esi = R32((u32)(r_ebx+0x684u));
    /* 0041a55e: mov byte ptr [esp], 0x12 */ W8((u32)(r_esp), 0x12u);
    /* 0041a562: mov edx, 0x1b */ r_edx = 0x1bu;
    /* 0041a567: mov byte ptr [esp + 1], 5 */ W8((u32)(r_esp+0x1u), 0x5u);
    /* 0041a56c: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 0041a571: movzx eax, word ptr [ebx + 0x394] */ r_eax = (u32)R16((u32)(r_ebx+0x394u));
    /* 0041a578: mov word ptr [esp + 4], dx */ W16((u32)(r_esp+0x4u), (u16)r_edx);
    /* 0041a57d: mov word ptr [esp + 6], si */ W16((u32)(r_esp+0x6u), (u16)r_esi);
    /* 0041a582: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0041a586: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0041a589: mov eax, dword ptr [ebx + 0x698] */ r_eax = R32((u32)(r_ebx+0x698u));
    /* 0041a58f: mov ebx, dword ptr [ebx + 0x69c] */ r_ebx = R32((u32)(r_ebx+0x69cu));
    /* 0041a595: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0041a599: mov dword ptr [esp + 0x10], ebx */ W32((u32)(r_esp+0x10u), r_ebx);
    /* 0041a59d: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x41a5a2u); f_008003e0();
    /* 0041a5a2: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041a5a5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0041a5a6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0041a5a7: ret 4 */ FN_RET(0x0041a546); r_esp += 8; return;
}

void f_0041a5aa(void)
{
    FN_ENTER(0x0041a5aa);
    /* 0041a5aa: mov eax, dword ptr [ebx + 0x86c] */ r_eax = R32((u32)(r_ebx+0x86cu));
    /* 0041a5b0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041a5b2: je 0x41a6ab */ if (fZ) goto L_0041a6ab;
L_0041a5b8:; BB(0x0041a5b8);
    /* 0041a5b8: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041a5bb: jne 0x41a72f */ if (!fZ) goto L_0041a72f;
L_0041a5c1:; BB(0x0041a5c1);
    /* 0041a5c1: fld dword ptr [ebx + 0x884] */ FPUSH(R_F32((u32)(r_ebx+0x884u)));
    /* 0041a5c7: fdiv dword ptr [ebx + 0x88c] */ ST(0) = ST(0) / R_F32((u32)(r_ebx+0x88cu));
    /* 0041a5cd: fmul dword ptr [0x8fbec4] */ ST(0) = ST(0) * R_F32((u32)(0x8fbec4u));
    /* 0041a5d3: fdiv dword ptr [0x8fbebc] */ ST(0) = ST(0) / R_F32((u32)(0x8fbebcu));
    /* 0041a5d9: mov ecx, dword ptr [ebx + 0x87c] */ r_ecx = R32((u32)(r_ebx+0x87cu));
    /* 0041a5df: fnstcw word ptr [esp + 0x14] */ W16((u32)(r_esp+0x14u), fcw);
    /* 0041a5e3: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 0041a5e8: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0041a5ed: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 0041a5f1: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 0041a5f5: fistp dword ptr [esp + 0x24] */ W32((u32)(r_esp+0x24u), (u32)fx_int32(ST(0))); FPOP();
    /* 0041a5f9: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 0041a5fd: mov esi, dword ptr [esp + 0x24] */ r_esi = R32((u32)(r_esp+0x24u));
    /* 0041a601: add ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0041a603: mov dword ptr [ebx + 0x87c], ecx */ W32((u32)(r_ebx+0x87cu), r_ecx);
    /* 0041a609: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x41a60eu); f_0082dcbc();
    /* 0041a60e: fld dword ptr [ebx + 0x88c] */ FPUSH(R_F32((u32)(r_ebx+0x88cu)));
    /* 0041a614: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0041a616: mov ecx, dword ptr [ebx + 0x87c] */ r_ecx = R32((u32)(r_ebx+0x87cu));
    /* 0041a61c: fstp dword ptr [ebx + 0x38] */ W_F32((u32)(r_ebx+0x38u), ST(0)); FPOP();
    /* 0041a61f: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x41a624u); f_0082ddd8();
    /* 0041a624: fld dword ptr [ebx + 0x88c] */ FPUSH(R_F32((u32)(r_ebx+0x88cu)));
    /* 0041a62a: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0041a62c: fstp dword ptr [ebx + 0x40] */ W_F32((u32)(r_ebx+0x40u), ST(0)); FPOP();
    /* 0041a62f: mov dword ptr [esp + 0x2c], esi */ W32((u32)(r_esp+0x2cu), r_esi);
    /* 0041a633: fild dword ptr [esp + 0x2c] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x2cu)));
    /* 0041a637: fmul dword ptr [0x8fbeb8] */ ST(0) = ST(0) * R_F32((u32)(0x8fbeb8u));
    /* 0041a63d: fadd dword ptr [ebx + 0x88c] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x88cu));
    /* 0041a643: fcom dword ptr [0x8fbeb4] */ fx_compare(ST(0), R_F32((u32)(0x8fbeb4u))); 
    /* 0041a649: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0041a64b: fstp dword ptr [ebx + 0x88c] */ W_F32((u32)(r_ebx+0x88cu), ST(0)); FPOP();
    /* 0041a651: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0041a652: jae 0x41a65e */ if (!fC) goto L_0041a65e;
L_0041a654:; BB(0x0041a654);
    /* 0041a654: mov dword ptr [ebx + 0x86c], 2 */ W32((u32)(r_ebx+0x86cu), 0x2u);
L_0041a65e:; BB(0x0041a65e);
    /* 0041a65e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0041a660: call 0x41a04c */ r_esp -= 4; W32(r_esp, 0x41a665u); f_0041a04c();
    /* 0041a665: mov eax, dword ptr [ebx + 0x870] */ r_eax = R32((u32)(r_ebx+0x870u));
    /* 0041a66b: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0041a66e: mov dword ptr [ebx + 0x870], eax */ W32((u32)(r_ebx+0x870u), r_eax);
    /* 0041a674: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041a677: jle 0x41a68a */ if ((fZ||fS!=fO)) goto L_0041a68a;
L_0041a679:; BB(0x0041a679);
    /* 0041a679: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0041a67b: call 0x41a874 */ r_esp -= 4; W32(r_esp, 0x41a680u); f_0041a874();
    /* 0041a680: mov dword ptr [ebx + 0x870], 0 */ W32((u32)(r_ebx+0x870u), 0x0u);
L_0041a68a:; BB(0x0041a68a);
    /* 0041a68a: lea edx, [ebx + 0x644] */ r_edx = (u32)(r_ebx+0x644u);
    /* 0041a690: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0041a692: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041a693: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041a694: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041a695: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0041a696: push 0x325 */ { u32 v = 0x325u; r_esp -= 4; W32(r_esp, v); }
    /* 0041a69b: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x41a6a0u); f_008144b0();
    /* 0041a6a0: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041a6a3: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041a6a6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0041a6a7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0041a6a8: ret 4 */ FN_RET(0x0041a5aa); r_esp += 8; return;
L_0041a6ab:; BB(0x0041a6ab);
    /* 0041a6ab: mov edx, dword ptr [ebx + 0x870] */ r_edx = R32((u32)(r_ebx+0x870u));
    /* 0041a6b1: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0041a6b4: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 0041a6b8: fild dword ptr [esp + 0x2c] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x2cu)));
    /* 0041a6bc: fcomp dword ptr [0x8fbeac] */ fx_compare(ST(0), R_F32((u32)(0x8fbeacu))); FPOP();
    /* 0041a6c2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0041a6c4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0041a6c5: jae 0x41a6d5 */ if (!fC) goto L_0041a6d5;
L_0041a6c7:; BB(0x0041a6c7);
    /* 0041a6c7: mov dword ptr [ebx + 0x870], edx */ W32((u32)(r_ebx+0x870u), r_edx);
    /* 0041a6cd: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041a6d0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0041a6d1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0041a6d2: ret 4 */ FN_RET(0x0041a5aa); r_esp += 8; return;
L_0041a6d5:; BB(0x0041a6d5);
    /* 0041a6d5: mov ecx, dword ptr [ebx + 0x6e0] */ r_ecx = R32((u32)(r_ebx+0x6e0u));
    /* 0041a6db: mov dword ptr [ebx + 0x870], 0 */ W32((u32)(r_ebx+0x870u), 0x0u);
    /* 0041a6e5: mov dword ptr [ebx + 0x86c], 1 */ W32((u32)(r_ebx+0x86cu), 0x1u);
    /* 0041a6ef: call 0x427bbc */ r_esp -= 4; W32(r_esp, 0x41a6f4u); f_00427bbc();
    /* 0041a6f4: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0041a6f6: call 0x419ff0 */ r_esp -= 4; W32(r_esp, 0x41a6fbu); f_00419ff0();
    /* 0041a6fb: fld dword ptr [ebx + 0x38] */ FPUSH(R_F32((u32)(r_ebx+0x38u)));
    /* 0041a6fe: fld dword ptr [ebx + 0x40] */ FPUSH(R_F32((u32)(r_ebx+0x40u)));
    /* 0041a701: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0041a703: fmul qword ptr [0x8fba30] */ ST(0) = ST(0) * R_F64((u32)(0x8fba30u));
    /* 0041a709: fdiv qword ptr [0x8fba28] */ ST(0) = ST(0) / R_F64((u32)(0x8fba28u));
    /* 0041a70f: fnstcw word ptr [esp + 0x14] */ W16((u32)(r_esp+0x14u), fcw);
    /* 0041a713: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 0041a718: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0041a71d: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 0041a721: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 0041a725: fistp dword ptr [ebx + 0x87c] */ W32((u32)(r_ebx+0x87cu), (u32)fx_int32(ST(0))); FPOP();
    /* 0041a72b: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
L_0041a72f:; BB(0x0041a72f);
    /* 0041a72f: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041a732: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0041a733: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0041a734: ret 4 */ FN_RET(0x0041a5aa); r_esp += 8; return;
}

void f_0041a72f(void)
{
    FN_ENTER(0x0041a72f);
    /* 0041a72f: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041a732: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0041a733: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0041a734: ret 4 */ FN_RET(0x0041a72f); r_esp += 8; return;
}

void f_0041a808(void) /* sub_41A808 */
{
    FN_ENTER(0x0041a808);
    /* 0041a808: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0041a809: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0041a80a: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0041a80d: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0041a80f: mov edi, dword ptr [esp + 0x20] */ r_edi = R32((u32)(r_esp+0x20u));
    /* 0041a813: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0041a815: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0041a816: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0041a819: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0041a81b: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x41a821u); call_ind(t); }
    /* 0041a821: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0041a825: mov edx, dword ptr [ebp + 0x684] */ r_edx = R32((u32)(r_ebp+0x684u));
    /* 0041a82b: mov byte ptr [esp], 0x12 */ W8((u32)(r_esp), 0x12u);
    /* 0041a82f: mov byte ptr [esp + 1], 5 */ W8((u32)(r_esp+0x1u), 0x5u);
    /* 0041a834: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 0041a839: mov eax, dword ptr [ebp + 0x698] */ r_eax = R32((u32)(r_ebp+0x698u));
    /* 0041a83f: mov word ptr [esp + 4], di */ W16((u32)(r_esp+0x4u), (u16)r_edi);
    /* 0041a844: movzx edi, word ptr [ebp + 0x394] */ r_edi = (u32)R16((u32)(r_ebp+0x394u));
    /* 0041a84b: mov ebp, dword ptr [ebp + 0x69c] */ r_ebp = R32((u32)(r_ebp+0x69cu));
    /* 0041a851: mov word ptr [esp + 6], dx */ W16((u32)(r_esp+0x6u), (u16)r_edx);
    /* 0041a856: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
    /* 0041a85a: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0041a85e: mov dword ptr [esp + 0x10], ebp */ W32((u32)(r_esp+0x10u), r_ebp);
    /* 0041a862: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0041a865: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x41a86au); f_008003e0();
    /* 0041a86a: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041a86d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041a86e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0041a86f: ret 4 */ FN_RET(0x0041a808); r_esp += 8; return;
}

void f_0041a874(void) /* sub_41A874 */
{
    FN_ENTER(0x0041a874);
    /* 0041a874: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041a875: lea eax, [ecx + 0x38] */ r_eax = (u32)(r_ecx+0x38u);
    /* 0041a878: push 0xe0 */ { u32 v = 0xe0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041a87d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041a87e: call 0x6ff738 */ r_esp -= 4; W32(r_esp, 0x41a883u); f_006ff738();
    /* 0041a883: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041a886: ret  */ FN_RET(0x0041a874); r_esp += 4; return;
}

void f_0041a888(void) /* sub_41A888 */
{
    FN_ENTER(0x0041a888);
    /* 0041a888: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0041a889: mov ebp, esp */ r_ebp = r_esp;
    /* 0041a88b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0041a88d: push 0x8cd654 */ { u32 v = 0x8cd654u; r_esp -= 4; W32(r_esp, v); }
    /* 0041a892: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0041a898: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041a899: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0041a8a0: sub esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0041a8a3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0041a8a6: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0041a8a9: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0041a8ac: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0041a8af: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0041a8b2: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0041a8b5: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0041a8b8: ja 0x41ac15 */ if ((!fC&&!fZ)) goto L_0041ac15;
L_0041a8be:; BB(0x0041a8be);
    /* 0041a8be: mov eax, dword ptr [eax*4 + 0x8fb30c] */ r_eax = R32((u32)(r_eax*4+0x8fb30cu));
    /* 0041a8c5: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0041ac15:; BB(0x0041ac15);
    /* 0041ac15: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0041ac18: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0041ac1b: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0041ac1e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0041ac21: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0041ac28: mov esp, ebp */ r_esp = r_ebp;
    /* 0041ac2a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041ac2b: ret 4 */ FN_RET(0x0041a888); r_esp += 8; return;
}

void f_0041a8c7(void)
{
    FN_ENTER(0x0041a8c7);
    /* 0041a8c7: mov eax, ecx */ r_eax = r_ecx;
    /* 0041a8c9: mov edx, dword ptr [eax + 0x86c] */ r_edx = R32((u32)(r_eax+0x86cu));
    /* 0041a8cf: cmp edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0041a8d2: je 0x41ac2e */ if (fZ) goto L_0041ac2e;
L_0041a8d8:; BB(0x0041a8d8);
    /* 0041a8d8: jmp 0x41ac15 */ goto L_0041ac15;
L_0041ac15:; BB(0x0041ac15);
    /* 0041ac15: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0041ac18: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0041ac1b: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0041ac1e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0041ac21: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0041ac28: mov esp, ebp */ r_esp = r_ebp;
    /* 0041ac2a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041ac2b: ret 4 */ FN_RET(0x0041a8c7); r_esp += 8; return;
L_0041ac2e:; BB(0x0041ac2e);
    /* 0041ac2e: mov ebx, dword ptr [eax + 0x684] */ r_ebx = R32((u32)(r_eax+0x684u));
    /* 0041ac34: cmp ebx, 0x32 */ {  u32 a = r_ebx; u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041ac37: jge 0x41ac55 */ if ((fS==fO)) goto L_0041ac55;
L_0041ac39:; BB(0x0041ac39);
    /* 0041ac39: call 0x420a44 */ r_esp -= 4; W32(r_esp, 0x41ac3eu); f_00420a44();
    /* 0041ac3e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041ac40: jne 0x41ac49 */ if (!fZ) goto L_0041ac49;
L_0041ac42:; BB(0x0041ac42);
    /* 0041ac42: mov edx, 0x9a3cb0 */ r_edx = 0x9a3cb0u;
    /* 0041ac47: jmp 0x41ac72 */ goto L_0041ac72;
L_0041ac49:; BB(0x0041ac49);
    /* 0041ac49: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041ac4c: jne 0x41ac72 */ if (!fZ) goto L_0041ac72;
L_0041ac4e:; BB(0x0041ac4e);
    /* 0041ac4e: mov edx, 0x9a3d28 */ r_edx = 0x9a3d28u;
    /* 0041ac53: jmp 0x41ac72 */ goto L_0041ac72;
L_0041ac55:; BB(0x0041ac55);
    /* 0041ac55: add ebx, -0x32 */ {  u32 a = r_ebx; u32 b = 0xffffffceu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0041ac58: call 0x420a44 */ r_esp -= 4; W32(r_esp, 0x41ac5du); f_00420a44();
    /* 0041ac5d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041ac5f: jne 0x41ac68 */ if (!fZ) goto L_0041ac68;
L_0041ac61:; BB(0x0041ac61);
    /* 0041ac61: mov edx, 0x9a3cf0 */ r_edx = 0x9a3cf0u;
    /* 0041ac66: jmp 0x41ac72 */ goto L_0041ac72;
L_0041ac68:; BB(0x0041ac68);
    /* 0041ac68: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041ac6b: jne 0x41ac72 */ if (!fZ) goto L_0041ac72;
L_0041ac6d:; BB(0x0041ac6d);
    /* 0041ac6d: mov edx, 0x9a3d78 */ r_edx = 0x9a3d78u;
L_0041ac72:; BB(0x0041ac72);
    /* 0041ac72: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0041ac75: mov eax, dword ptr [eax + 0x684] */ r_eax = R32((u32)(r_eax+0x684u));
L_0041ac7b:; BB(0x0041ac7b);
    /* 0041ac7b: mov ecx, dword ptr [edx + ebx*4] */ r_ecx = R32((u32)(r_edx+r_ebx*4));
    /* 0041ac7e: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0041ac81: cmp ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041ac84: jne 0x41ac99 */ if (!fZ) goto L_0041ac99;
L_0041ac86:; BB(0x0041ac86);
    /* 0041ac86: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0041ac89: mov dword ptr [ecx + 0x684], 0 */ W32((u32)(r_ecx+0x684u), 0x0u);
    /* 0041ac93: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0041ac95: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0041ac97: jmp 0x41ac7b */ goto L_0041ac7b;
L_0041ac99:; BB(0x0041ac99);
    /* 0041ac99: cmp ecx, 0x21 */ {  u32 a = r_ecx; u32 b = 0x21u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041ac9c: je 0x41acb4 */ if (fZ) goto L_0041acb4;
L_0041ac9e:; BB(0x0041ac9e);
    /* 0041ac9e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0041aca1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041aca2: mov dword ptr [edx + 0x684], eax */ W32((u32)(r_edx+0x684u), r_eax);
    /* 0041aca8: mov ecx, edx */ r_ecx = r_edx;
    /* 0041acaa: call 0x41a808 */ r_esp -= 4; W32(r_esp, 0x41acafu); f_0041a808();
    /* 0041acaf: jmp 0x41ac15 */ goto L_0041ac15;
L_0041acb4:; BB(0x0041acb4);
    /* 0041acb4: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0041acb7: mov dword ptr [ecx + 0x684], 0x32 */ W32((u32)(r_ecx+0x684u), 0x32u);
    /* 0041acc1: mov eax, 0x32 */ r_eax = 0x32u;
    /* 0041acc6: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0041acc8: jmp 0x41ac7b */ goto L_0041ac7b;
}

void f_0041a8dd(void)
{
    FN_ENTER(0x0041a8dd);
    /* 0041a8dd: fld dword ptr [0x8fbea8] */ FPUSH(R_F32((u32)(0x8fbea8u)));
    /* 0041a8e3: fld dword ptr [ecx + 0x6a0] */ FPUSH(R_F32((u32)(r_ecx+0x6a0u)));
    /* 0041a8e9: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0041a8eb: fnstcw word ptr [ebp - 0x40] */ W16((u32)(r_ebp+0xffffffc0u), fcw);
    /* 0041a8ee: movzx eax, word ptr [ebp - 0x40] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc0u));
    /* 0041a8f2: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0041a8f7: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0041a8fa: fldcw word ptr [ebp - 0x38] */ fcw = R16((u32)(r_ebp+0xffffffc8u));
    /* 0041a8fd: fistp dword ptr [ebp - 0x30] */ W32((u32)(r_ebp+0xffffffd0u), (u32)fx_int32(ST(0))); FPOP();
    /* 0041a900: fldcw word ptr [ebp - 0x40] */ fcw = R16((u32)(r_ebp+0xffffffc0u));
    /* 0041a903: fld dword ptr [ecx + 0x6a4] */ FPUSH(R_F32((u32)(r_ecx+0x6a4u)));
    /* 0041a909: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0041a90b: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0041a90e: fnstcw word ptr [ebp - 0x40] */ W16((u32)(r_ebp+0xffffffc0u), fcw);
    /* 0041a911: movzx eax, word ptr [ebp - 0x40] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc0u));
    /* 0041a915: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0041a91a: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0041a91d: fldcw word ptr [ebp - 0x38] */ fcw = R16((u32)(r_ebp+0xffffffc8u));
    /* 0041a920: fistp dword ptr [ebp - 0x30] */ W32((u32)(r_ebp+0xffffffd0u), (u32)fx_int32(ST(0))); FPOP();
    /* 0041a923: fldcw word ptr [ebp - 0x40] */ fcw = R16((u32)(r_ebp+0xffffffc0u));
    /* 0041a926: movzx eax, word ptr [ebp - 0x30] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffd0u));
    /* 0041a92a: shl edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0041a92d: or edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0041a92f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041a930: add ecx, 0x784 */ {  u32 a = r_ecx; u32 b = 0x784u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0041a936: call 0x84c390 */ r_esp -= 4; W32(r_esp, 0x41a93bu); f_0084c390();
    /* 0041a93b: jmp 0x41ac15 */ goto L_0041ac15;
L_0041ac15:; BB(0x0041ac15);
    /* 0041ac15: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0041ac18: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0041ac1b: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0041ac1e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0041ac21: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0041ac28: mov esp, ebp */ r_esp = r_ebp;
    /* 0041ac2a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041ac2b: ret 4 */ FN_RET(0x0041a8dd); r_esp += 8; return;
}

void f_0041a940(void)
{
    FN_ENTER(0x0041a940);
    /* 0041a940: call 0x41a004 */ r_esp -= 4; W32(r_esp, 0x41a945u); f_0041a004();
    /* 0041a945: jmp 0x41ac15 */ goto L_0041ac15;
L_0041ac15:; BB(0x0041ac15);
    /* 0041ac15: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0041ac18: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0041ac1b: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0041ac1e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0041ac21: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0041ac28: mov esp, ebp */ r_esp = r_ebp;
    /* 0041ac2a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041ac2b: ret 4 */ FN_RET(0x0041a940); r_esp += 8; return;
}

void f_0041a94a(void)
{
    FN_ENTER(0x0041a94a);
    /* 0041a94a: mov eax, dword ptr [ecx + 0xb0] */ r_eax = R32((u32)(r_ecx+0xb0u));
    /* 0041a950: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0041a952: mov dword ptr [ecx + 0x5c], edx */ W32((u32)(r_ecx+0x5cu), r_edx);
    /* 0041a955: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0041a958: mov dword ptr [ecx + 0xb0], eax */ W32((u32)(r_ecx+0xb0u), r_eax);
    /* 0041a95e: mov dword ptr [ecx + 0x65c], edx */ W32((u32)(r_ecx+0x65cu), r_edx);
    /* 0041a964: jmp 0x41ac15 */ goto L_0041ac15;
L_0041ac15:; BB(0x0041ac15);
    /* 0041ac15: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0041ac18: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0041ac1b: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0041ac1e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0041ac21: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0041ac28: mov esp, ebp */ r_esp = r_ebp;
    /* 0041ac2a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041ac2b: ret 4 */ FN_RET(0x0041a94a); r_esp += 8; return;
}

void f_0041a969(void)
{
    FN_ENTER(0x0041a969);
    /* 0041a969: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0041a96b: mov eax, 0x16 */ r_eax = 0x16u;
    /* 0041a970: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 0041a977: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x41a97du); call_ind(t); }
    /* 0041a97d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0041a980: mov dword ptr [ecx + 0x3ec], 1 */ W32((u32)(r_ecx+0x3ecu), 0x1u);
    /* 0041a98a: call 0x41b0bc */ r_esp -= 4; W32(r_esp, 0x41a98fu); f_0041b0bc();
    /* 0041a98f: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0041a992: mov eax, dword ptr [ebx + 0x3c8] */ r_eax = R32((u32)(r_ebx+0x3c8u));
    /* 0041a998: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0041a99d: and eax, 0xfffffd7f */ {  u32 a = r_eax; u32 b = 0xfffffd7fu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0041a9a2: mov dword ptr [ebx + 0x3c8], eax */ W32((u32)(r_ebx+0x3c8u), r_eax);
    /* 0041a9a8: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0041a9aa: mov dword ptr [ebx + 0x86c], edx */ W32((u32)(r_ebx+0x86cu), r_edx);
    /* 0041a9b0: mov dword ptr [ebx + 0x870], edx */ W32((u32)(r_ebx+0x870u), r_edx);
    /* 0041a9b6: mov dword ptr [ebx + 0x874], edx */ W32((u32)(r_ebx+0x874u), r_edx);
    /* 0041a9bc: mov dword ptr [ebx + 0x87c], edx */ W32((u32)(r_ebx+0x87cu), r_edx);
    /* 0041a9c2: mov ecx, dword ptr [0xa436dc] */ r_ecx = R32((u32)(0xa436dcu));
    /* 0041a9c8: mov dword ptr [ebx + 0x884], ecx */ W32((u32)(r_ebx+0x884u), r_ecx);
    /* 0041a9ce: jmp 0x41ac15 */ goto L_0041ac15;
L_0041ac15:; BB(0x0041ac15);
    /* 0041ac15: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0041ac18: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0041ac1b: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0041ac1e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0041ac21: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0041ac28: mov esp, ebp */ r_esp = r_ebp;
    /* 0041ac2a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041ac2b: ret 4 */ FN_RET(0x0041a969); r_esp += 8; return;
}

void f_0041a9d3(void)
{
    FN_ENTER(0x0041a9d3);
    /* 0041a9d3: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0041a9d5: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 0041a9d7: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0041a9d9: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x41a9dfu); call_ind(t); }
    /* 0041a9df: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0041a9e2: movzx eax, word ptr [ecx + 0x1c] */ r_eax = (u32)R16((u32)(r_ecx+0x1cu));
    /* 0041a9e6: mov ebx, dword ptr [ecx + 0x684] */ r_ebx = R32((u32)(r_ecx+0x684u));
    /* 0041a9ec: movzx esi, word ptr [ecx + 0x394] */ r_esi = (u32)R16((u32)(r_ecx+0x394u));
    /* 0041a9f3: mov edi, dword ptr [ecx + 0x698] */ r_edi = R32((u32)(r_ecx+0x698u));
    /* 0041a9f9: mov edx, 0x19 */ r_edx = 0x19u;
    /* 0041a9fe: mov byte ptr [ebp - 0x68], 0x12 */ W8((u32)(r_ebp+0xffffff98u), 0x12u);
    /* 0041aa02: mov word ptr [ebp - 0x66], ax */ W16((u32)(r_ebp+0xffffff9au), (u16)r_eax);
    /* 0041aa06: mov eax, dword ptr [ecx + 0x69c] */ r_eax = R32((u32)(r_ecx+0x69cu));
    /* 0041aa0c: mov byte ptr [ebp - 0x67], 5 */ W8((u32)(r_ebp+0xffffff99u), 0x5u);
    /* 0041aa10: mov word ptr [ebp - 0x64], dx */ W16((u32)(r_ebp+0xffffff9cu), (u16)r_edx);
    /* 0041aa14: mov word ptr [ebp - 0x62], bx */ W16((u32)(r_ebp+0xffffff9eu), (u16)r_ebx);
    /* 0041aa18: mov dword ptr [ebp - 0x60], esi */ W32((u32)(r_ebp+0xffffffa0u), r_esi);
    /* 0041aa1b: mov dword ptr [ebp - 0x5c], edi */ W32((u32)(r_ebp+0xffffffa4u), r_edi);
    /* 0041aa1e: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 0041aa21: lea ecx, [ebp - 0x68] */ r_ecx = (u32)(r_ebp+0xffffff98u);
    /* 0041aa24: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x41aa29u); f_008003e0();
    /* 0041aa29: jmp 0x41ac15 */ goto L_0041ac15;
L_0041ac15:; BB(0x0041ac15);
    /* 0041ac15: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0041ac18: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0041ac1b: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0041ac1e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0041ac21: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0041ac28: mov esp, ebp */ r_esp = r_ebp;
    /* 0041ac2a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041ac2b: ret 4 */ FN_RET(0x0041a9d3); r_esp += 8; return;
}

void f_0041aa2e(void)
{
    FN_ENTER(0x0041aa2e);
    /* 0041aa2e: mov eax, ecx */ r_eax = r_ecx;
    /* 0041aa30: mov ecx, dword ptr [eax + 0x86c] */ r_ecx = R32((u32)(r_eax+0x86cu));
    /* 0041aa36: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041aa38: je 0x41b062 */ if (fZ) goto L_0041b062;
L_0041aa3e:; BB(0x0041aa3e);
    /* 0041aa3e: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041aa41: je 0x41afd9 */ if (fZ) goto L_0041afd9;
L_0041aa47:; BB(0x0041aa47);
    /* 0041aa47: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041aa4a: je 0x41af80 */ if (fZ) goto L_0041af80;
L_0041aa50:; BB(0x0041aa50);
    /* 0041aa50: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041aa53: je 0x41ad8a */ if (fZ) goto L_0041ad8a;
L_0041aa59:; BB(0x0041aa59);
    /* 0041aa59: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041aa5c: je 0x41ab21 */ if (fZ) goto L_0041ab21;
L_0041aa62:; BB(0x0041aa62);
    /* 0041aa62: cmp ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041aa65: jne 0x41ab03 */ if (!fZ) goto L_0041ab03;
L_0041aa6b:; BB(0x0041aa6b);
    /* 0041aa6b: mov ecx, eax */ r_ecx = r_eax;
    /* 0041aa6d: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x41aa72u); f_007aa094();
    /* 0041aa72: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0041aa75: push dword ptr [eax + 0x880] */ { u32 v = R32((u32)(r_eax+0x880u)); r_esp -= 4; W32(r_esp, v); }
    /* 0041aa7b: push dword ptr [eax + 0x60] */ { u32 v = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 0041aa7e: call 0x7a900c */ r_esp -= 4; W32(r_esp, 0x41aa83u); f_007a900c();
    /* 0041aa83: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041aa86: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0041aa89: fild dword ptr [ebp - 0x28] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd8u)));
    /* 0041aa8c: fmul dword ptr [0x8fbea4] */ ST(0) = ST(0) * R_F32((u32)(0x8fbea4u));
    /* 0041aa92: fcom dword ptr [0x8fbea0] */ fx_compare(ST(0), R_F32((u32)(0x8fbea0u))); 
    /* 0041aa98: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0041aa9a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0041aa9b: jae 0x41aaa8 */ if (!fC) goto L_0041aaa8;
L_0041aa9d:; BB(0x0041aa9d);
    /* 0041aa9d: fcom dword ptr [0x8fbe9c] */ fx_compare(ST(0), R_F32((u32)(0x8fbe9cu))); 
    /* 0041aaa3: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0041aaa5: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0041aaa6: jae 0x41aab6 */ if (!fC) goto L_0041aab6;
L_0041aaa8:; BB(0x0041aaa8);
    /* 0041aaa8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0041aaab: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 0041aab1: test dl, 0x10 */ {  u32 a = (u8)r_edx; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0041aab4: je 0x41aad8 */ if (fZ) goto L_0041aad8;
L_0041aab6:; BB(0x0041aab6);
    /* 0041aab6: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0041aab8: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0041aabb: mov eax, dword ptr [edx + 0x880] */ r_eax = R32((u32)(r_edx+0x880u));
    /* 0041aac1: mov dword ptr [edx + 0x86c], 6 */ W32((u32)(r_edx+0x86cu), 0x6u);
    /* 0041aacb: mov dword ptr [edx + 0x60], eax */ W32((u32)(r_edx+0x60u), r_eax);
    /* 0041aace: mov ecx, 6 */ r_ecx = 0x6u;
    /* 0041aad3: jmp 0x41abd6 */ goto L_0041abd6;
L_0041aad8:; BB(0x0041aad8);
    /* 0041aad8: mov edx, eax */ r_edx = r_eax;
    /* 0041aada: mov ecx, dword ptr [edx + 0x86c] */ r_ecx = R32((u32)(r_edx+0x86cu));
    /* 0041aae0: fnstcw word ptr [ebp - 0x40] */ W16((u32)(r_ebp+0xffffffc0u), fcw);
    /* 0041aae3: movzx eax, word ptr [ebp - 0x40] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc0u));
    /* 0041aae7: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0041aaec: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0041aaef: fldcw word ptr [ebp - 0x38] */ fcw = R16((u32)(r_ebp+0xffffffc8u));
    /* 0041aaf2: fistp dword ptr [ebp - 0x30] */ W32((u32)(r_ebp+0xffffffd0u), (u32)fx_int32(ST(0))); FPOP();
    /* 0041aaf5: fldcw word ptr [ebp - 0x40] */ fcw = R16((u32)(r_ebp+0xffffffc0u));
    /* 0041aaf8: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0041aafb: add dword ptr [edx + 0x60], eax */ { u32 ad = (u32)(r_edx+0x60u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0041aafe: jmp 0x41abd6 */ goto L_0041abd6;
L_0041ab03:; BB(0x0041ab03);
    /* 0041ab03: cmp ecx, 6 */ {  u32 a = r_ecx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041ab06: jne 0x41abd6 */ if (!fZ) goto L_0041abd6;
L_0041ab0c:; BB(0x0041ab0c);
    /* 0041ab0c: mov ecx, eax */ r_ecx = r_eax;
    /* 0041ab0e: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x41ab13u); f_007aa094();
    /* 0041ab13: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0041ab16: mov ecx, dword ptr [eax + 0x86c] */ r_ecx = R32((u32)(r_eax+0x86cu));
    /* 0041ab1c: jmp 0x41abd6 */ goto L_0041abd6;
L_0041ab21:; BB(0x0041ab21);
    /* 0041ab21: mov eax, dword ptr [eax + 0x87c] */ r_eax = R32((u32)(r_eax+0x87cu));
    /* 0041ab27: add eax, -0x50 */ {  u32 a = r_eax; u32 b = 0xffffffb0u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0041ab2a: cmp eax, 0x1300 */ {  u32 a = r_eax; u32 b = 0x1300u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041ab2f: jge 0x41abbf */ if ((fS==fO)) goto L_0041abbf;
L_0041ab35:; BB(0x0041ab35);
    /* 0041ab35: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0041ab38: mov edx, dword ptr [eax + 0x5c] */ r_edx = R32((u32)(r_eax+0x5cu));
    /* 0041ab3b: mov dword ptr [eax + 0x87c], 0x1300 */ W32((u32)(r_eax+0x87cu), 0x1300u);
    /* 0041ab45: add edx, 0xffffed00 */ {  u32 a = r_edx; u32 b = 0xffffed00u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0041ab4b: movzx eax, dx */ r_eax = (u32)(u16)r_edx;
    /* 0041ab4e: cmp eax, 0x1300 */ {  u32 a = r_eax; u32 b = 0x1300u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041ab53: jle 0x41ab5c */ if ((fZ||fS!=fO)) goto L_0041ab5c;
L_0041ab55:; BB(0x0041ab55);
    /* 0041ab55: cmp eax, 0xed00 */ {  u32 a = r_eax; u32 b = 0xed00u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041ab5a: jl 0x41abb1 */ if ((fS!=fO)) goto L_0041abb1;
L_0041ab5c:; BB(0x0041ab5c);
    /* 0041ab5c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0041ab5f: fld dword ptr [eax + 0x38] */ FPUSH(R_F32((u32)(r_eax+0x38u)));
    /* 0041ab62: fld dword ptr [eax + 0x40] */ FPUSH(R_F32((u32)(r_eax+0x40u)));
    /* 0041ab65: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0041ab67: fchs  */ ST(0) = -ST(0);
    /* 0041ab69: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0041ab6b: fchs  */ ST(0) = -ST(0);
    /* 0041ab6d: mov dword ptr [eax + 0x5c], 0 */ W32((u32)(r_eax+0x5cu), 0x0u);
    /* 0041ab74: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0041ab76: fmul qword ptr [0x8fba20] */ ST(0) = ST(0) * R_F64((u32)(0x8fba20u));
    /* 0041ab7c: fdiv qword ptr [0x8fba18] */ ST(0) = ST(0) / R_F64((u32)(0x8fba18u));
    /* 0041ab82: mov ecx, 5 */ r_ecx = 0x5u;
    /* 0041ab87: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0041ab8a: fnstcw word ptr [ebp - 0x40] */ W16((u32)(r_ebp+0xffffffc0u), fcw);
    /* 0041ab8d: movzx eax, word ptr [ebp - 0x40] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc0u));
    /* 0041ab91: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0041ab96: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0041ab99: fldcw word ptr [ebp - 0x38] */ fcw = R16((u32)(r_ebp+0xffffffc8u));
    /* 0041ab9c: fistp dword ptr [edx + 0x880] */ W32((u32)(r_edx+0x880u), (u32)fx_int32(ST(0))); FPOP();
    /* 0041aba2: fldcw word ptr [ebp - 0x40] */ fcw = R16((u32)(r_ebp+0xffffffc0u));
    /* 0041aba5: mov dword ptr [edx + 0x86c], 5 */ W32((u32)(r_edx+0x86cu), 0x5u);
    /* 0041abaf: jmp 0x41abd6 */ goto L_0041abd6;
L_0041abb1:; BB(0x0041abb1);
    /* 0041abb1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0041abb4: mov ecx, dword ptr [eax + 0x86c] */ r_ecx = R32((u32)(r_eax+0x86cu));
    /* 0041abba: mov dword ptr [eax + 0x5c], edx */ W32((u32)(r_eax+0x5cu), r_edx);
    /* 0041abbd: jmp 0x41abd6 */ goto L_0041abd6;
L_0041abbf:; BB(0x0041abbf);
    /* 0041abbf: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0041abc2: mov edx, dword ptr [ecx + 0x5c] */ r_edx = R32((u32)(r_ecx+0x5cu));
    /* 0041abc5: mov dword ptr [ecx + 0x87c], eax */ W32((u32)(r_ecx+0x87cu), r_eax);
    /* 0041abcb: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0041abcd: mov dword ptr [ecx + 0x5c], edx */ W32((u32)(r_ecx+0x5cu), r_edx);
    /* 0041abd0: mov ecx, dword ptr [ecx + 0x86c] */ r_ecx = R32((u32)(r_ecx+0x86cu));
L_0041abd6:; BB(0x0041abd6);
    /* 0041abd6: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041abd9: je 0x41ad0f */ if (fZ) goto L_0041ad0f;
L_0041abdf:; BB(0x0041abdf);
    /* 0041abdf: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041abe2: je 0x41ad0f */ if (fZ) goto L_0041ad0f;
L_0041abe8:; BB(0x0041abe8);
    /* 0041abe8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0041abeb: fld dword ptr [eax + 0x5e4] */ FPUSH(R_F32((u32)(r_eax+0x5e4u)));
L_0041abf1:; BB(0x0041abf1);
    /* 0041abf1: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041abf4: je 0x41acca */ if (fZ) goto L_0041acca;
L_0041abfa:; BB(0x0041abfa);
    /* 0041abfa: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041abfd: je 0x41acca */ if (fZ) goto L_0041acca;
L_0041ac03:; BB(0x0041ac03);
    /* 0041ac03: cmp ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0041ac06: je 0x41acca */ if (fZ) goto L_0041acca;
L_0041ac0c:; BB(0x0041ac0c);
    /* 0041ac0c: fadd dword ptr [eax + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x3cu));
    /* 0041ac0f: fstp dword ptr [eax + 0x5e0] */ W_F32((u32)(r_eax+0x5e0u), ST(0)); FPOP();
    /* 0041ac15: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0041ac18: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0041ac1b: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0041ac1e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0041ac21: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0041ac28: mov esp, ebp */ r_esp = r_ebp;
    /* 0041ac2a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041ac2b: ret 4 */ FN_RET(0x0041aa2e); r_esp += 8; return;
L_0041acca:; BB(0x0041acca);
    /* 0041acca: fadd dword ptr [0x8fbe84] */ ST(0) = ST(0) + R_F32((u32)(0x8fbe84u));
    /* 0041acd0: mov edx, eax */ r_edx = r_eax;
    /* 0041acd2: fld dword ptr [0x8fbe70] */ FPUSH(R_F32((u32)(0x8fbe70u)));
    /* 0041acd8: fld dword ptr [edx + 0x5e8] */ FPUSH(R_F32((u32)(r_edx+0x5e8u)));
    /* 0041acde: fld dword ptr [edx + 0x5e8] */ FPUSH(R_F32((u32)(r_edx+0x5e8u)));
    /* 0041ace4: fsubr st(3) */ ST(0) = ST(3) - ST(0);
    /* 0041ace6: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 0041ace8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0041acea: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0041aceb: jae 0x41acfe */ if (!fC) goto L_0041acfe;
L_0041aced:; BB(0x0041aced);
    /* 0041aced: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 0041acef: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0041acf1: mov eax, edx */ r_eax = r_edx;
    /* 0041acf3: fst dword ptr [eax + 0x5e4] */ W_F32((u32)(r_eax+0x5e4u), ST(0));
    /* 0041acf9: jmp 0x41ac0c */ goto L_0041ac0c;
L_0041acfe:; BB(0x0041acfe);
    /* 0041acfe: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0041ad00: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0041ad02: mov eax, edx */ r_eax = r_edx;
    /* 0041ad04: fst dword ptr [eax + 0x5e4] */ W_F32((u32)(r_eax+0x5e4u), ST(0));
    /* 0041ad0a: jmp 0x41ac0c */ goto L_0041ac0c;
L_0041ad0f:; BB(0x0041ad0f);
    /* 0041ad0f: fld dword ptr [0xa436e0] */ FPUSH(R_F32((u32)(0xa436e0u)));
    /* 0041ad15: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0041ad18: fadd dword ptr [edx + 0x884] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x884u));
    /* 0041ad1e: fld dword ptr [0x8fbe8c] */ FPUSH(R_F32((u32)(0x8fbe8cu)));
    /* 0041ad24: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0041ad26: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0041ad28: fld dword ptr [edx + 0x5e8] */ FPUSH(R_F32((u32)(r_edx+0x5e8u)));
    /* 0041ad2e: fld dword ptr [edx + 0x5e8] */ FPUSH(R_F32((u32)(r_edx+0x5e8u)));
    /* 0041ad34: fld dword ptr [0x8fbe70] */ FPUSH(R_F32((u32)(0x8fbe70u)));
    /* 0041ad3a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0041ad3b: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0041ad3d: jb 0x41ad41 */ if (fC) goto L_0041ad41;
L_0041ad3f:; BB(0x0041ad3f);
    /* 0041ad3f: fst st(4) */ ST(4) = ST(0);
L_0041ad41:; BB(0x0041ad41);
    /* 0041ad41: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0041ad43: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0041ad45: fst dword ptr [edx + 0x884] */ W_F32((u32)(r_edx+0x884u), ST(0));
    /* 0041ad4b: fadd dword ptr [edx + 0x5e4] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x5e4u));
    /* 0041ad51: fsubr st(3), st(0) */ ST(3) = ST(0) - ST(3);
    /* 0041ad53: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0041ad55: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 0041ad57: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0041ad59: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0041ad5a: ja 0x41ad73 */ if ((!fC&&!fZ)) goto L_0041ad73;
L_0041ad5c:; BB(0x0041ad5c);
    /* 0041ad5c: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 0041ad5e: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0041ad60: mov eax, edx */ r_eax = r_edx;
    /* 0041ad62: mov ecx, dword ptr [eax + 0x86c] */ r_ecx = R32((u32)(r_eax+0x86cu));
    /* 0041ad68: fst dword ptr [eax + 0x5e4] */ W_F32((u32)(r_eax+0x5e4u), ST(0));
    /* 0041ad6e: jmp 0x41abf1 */ goto L_0041abf1;
L_0041ad73:; BB(0x0041ad73);
    /* 0041ad73: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0041ad75: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0041ad77: mov eax, edx */ r_eax = r_edx;
    /* 0041ad79: mov ecx, dword ptr [eax + 0x86c] */ r_ecx = R32((u32)(r_eax+0x86cu));
    /* 0041ad7f: fst dword ptr [eax + 0x5e4] */ W_F32((u32)(r_eax+0x5e4u), ST(0));
    /* 0041ad85: jmp 0x41abf1 */ goto L_0041abf1;
L_0041ad8a:; BB(0x0041ad8a);
    /* 0041ad8a: mov ecx, eax */ r_ecx = r_eax;
    /* 0041ad8c: mov edx, dword ptr [ecx + 0x87c] */ r_edx = R32((u32)(r_ecx+0x87cu));
    /* 0041ad92: add edx, 0x40 */ {  u32 a = r_edx; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0041ad95: mov eax, 0x2000 */ r_eax = 0x2000u;
    /* 0041ad9a: cmp edx, 0x2000 */ {  u32 a = r_edx; u32 b = 0x2000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041ada0: jl 0x41ada4 */ if ((fS!=fO)) goto L_0041ada4;
L_0041ada2:; BB(0x0041ada2);
    /* 0041ada2: mov edx, eax */ r_edx = r_eax;
L_0041ada4:; BB(0x0041ada4);
    /* 0041ada4: mov eax, dword ptr [ecx + 0x870] */ r_eax = R32((u32)(r_ecx+0x870u));
    /* 0041adaa: mov dword ptr [ecx + 0x87c], edx */ W32((u32)(r_ecx+0x87cu), r_edx);
    /* 0041adb0: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0041adb3: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041adb6: jl 0x41af5e */ if ((fS!=fO)) goto L_0041af5e;
L_0041adbc:; BB(0x0041adbc);
    /* 0041adbc: mov eax, ecx */ r_eax = r_ecx;
    /* 0041adbe: mov edx, dword ptr [eax + 0x874] */ r_edx = R32((u32)(r_eax+0x874u));
    /* 0041adc4: mov dword ptr [eax + 0x870], 0 */ W32((u32)(r_eax+0x870u), 0x0u);
    /* 0041adce: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0041add1: mov dword ptr [eax + 0x874], edx */ W32((u32)(r_eax+0x874u), r_edx);
    /* 0041add7: cmp edx, 0x28 */ {  u32 a = r_edx; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041adda: jl 0x41adf6 */ if ((fS!=fO)) goto L_0041adf6;
L_0041addc:; BB(0x0041addc);
    /* 0041addc: mov edx, dword ptr [eax + 0x874] */ r_edx = R32((u32)(r_eax+0x874u));
    /* 0041ade2: mov dword ptr [eax + 0x86c], 4 */ W32((u32)(r_eax+0x86cu), 0x4u);
    /* 0041adec: mov dword ptr [eax + 0x65c], 0 */ W32((u32)(r_eax+0x65cu), 0x0u);
L_0041adf6:; BB(0x0041adf6);
    /* 0041adf6: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0041adf9: jne 0x41ae23 */ if (!fZ) goto L_0041ae23;
L_0041adfb:; BB(0x0041adfb);
    /* 0041adfb: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0041adfd: mov eax, edx */ r_eax = r_edx;
    /* 0041adff: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0041ae00: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0041ae02: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0041ae04: and eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0041ae07: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0041ae09: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0041ae0b: movzx ecx, ax */ r_ecx = (u32)(u16)r_eax;
    /* 0041ae0e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041ae0f: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x41ae14u); f_0068d5a8();
    /* 0041ae14: mov ebx, eax */ r_ebx = r_eax;
    /* 0041ae16: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0041ae17: call 0x520f3c */ r_esp -= 4; W32(r_esp, 0x41ae1cu); f_00520f3c();
    /* 0041ae1c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041ae1f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041ae21: jne 0x41ae96 */ if (!fZ) goto L_0041ae96;
L_0041ae23:; BB(0x0041ae23);
    /* 0041ae23: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0041ae26: lea ebx, [eax + 0x784] */ r_ebx = (u32)(r_eax+0x784u);
    /* 0041ae2c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0041ae2e: call 0x763498 */ r_esp -= 4; W32(r_esp, 0x41ae33u); f_00763498();
    /* 0041ae33: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
    /* 0041ae3a: shr eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0041ae3d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0041ae3f: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0041ae42: fild dword ptr [ebp - 0x28] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd8u)));
    /* 0041ae45: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0041ae48: fadd dword ptr [eax*4 + 0x8fba10] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x8fba10u));
    /* 0041ae4f: fdiv dword ptr [0x8fbe98] */ ST(0) = ST(0) / R_F32((u32)(0x8fbe98u));
    /* 0041ae55: fadd dword ptr [0x8fbe94] */ ST(0) = ST(0) + R_F32((u32)(0x8fbe94u));
    /* 0041ae5b: fmul dword ptr [0x8fbe90] */ ST(0) = ST(0) * R_F32((u32)(0x8fbe90u));
    /* 0041ae61: fstp dword ptr [ebp - 0x54] */ W_F32((u32)(r_ebp+0xffffffacu), ST(0)); FPOP();
    /* 0041ae64: call 0x763498 */ r_esp -= 4; W32(r_esp, 0x41ae69u); f_00763498();
    /* 0041ae69: shr eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0041ae6c: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0041ae6f: fild dword ptr [ebp - 0x28] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd8u)));
    /* 0041ae72: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0041ae75: fadd dword ptr [eax*4 + 0x8fba10] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x8fba10u));
    /* 0041ae7c: fdiv dword ptr [0x8fbe98] */ ST(0) = ST(0) / R_F32((u32)(0x8fbe98u));
    /* 0041ae82: fadd dword ptr [0x8fbe94] */ ST(0) = ST(0) + R_F32((u32)(0x8fbe94u));
    /* 0041ae88: fmul dword ptr [0x8fbe90] */ ST(0) = ST(0) * R_F32((u32)(0x8fbe90u));
    /* 0041ae8e: fstp dword ptr [ebp - 0x4c] */ W_F32((u32)(r_ebp+0xffffffb4u), ST(0)); FPOP();
    /* 0041ae91: jmp 0x41af15 */ goto L_0041af15;
L_0041ae96:; BB(0x0041ae96);
    /* 0041ae96: mov edx, dword ptr [ebx + 0x38] */ r_edx = R32((u32)(r_ebx+0x38u));
    /* 0041ae99: mov esi, dword ptr [ebx + 0x3c] */ r_esi = R32((u32)(r_ebx+0x3cu));
    /* 0041ae9c: mov eax, dword ptr [ebx + 0x40] */ r_eax = R32((u32)(r_ebx+0x40u));
    /* 0041ae9f: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0041aea2: lea ebx, [ebx + 0x784] */ r_ebx = (u32)(r_ebx+0x784u);
    /* 0041aea8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0041aeaa: mov dword ptr [ebp - 0x54], edx */ W32((u32)(r_ebp+0xffffffacu), r_edx);
    /* 0041aead: mov dword ptr [ebp - 0x50], esi */ W32((u32)(r_ebp+0xffffffb0u), r_esi);
    /* 0041aeb0: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 0041aeb3: call 0x763498 */ r_esp -= 4; W32(r_esp, 0x41aeb8u); f_00763498();
    /* 0041aeb8: shr eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0041aebb: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0041aebe: fild dword ptr [ebp - 0x28] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd8u)));
    /* 0041aec1: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0041aec4: fadd dword ptr [eax*4 + 0x8fba10] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x8fba10u));
    /* 0041aecb: fdiv dword ptr [0x8fbe98] */ ST(0) = ST(0) / R_F32((u32)(0x8fbe98u));
    /* 0041aed1: fadd dword ptr [0x8fbe94] */ ST(0) = ST(0) + R_F32((u32)(0x8fbe94u));
    /* 0041aed7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0041aed9: fmul dword ptr [0x8fbe80] */ ST(0) = ST(0) * R_F32((u32)(0x8fbe80u));
    /* 0041aedf: fadd dword ptr [ebp - 0x54] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xffffffacu));
    /* 0041aee2: fstp dword ptr [ebp - 0x54] */ W_F32((u32)(r_ebp+0xffffffacu), ST(0)); FPOP();
    /* 0041aee5: call 0x763498 */ r_esp -= 4; W32(r_esp, 0x41aeeau); f_00763498();
    /* 0041aeea: shr eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0041aeed: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0041aef0: fild dword ptr [ebp - 0x28] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd8u)));
    /* 0041aef3: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0041aef6: fadd dword ptr [eax*4 + 0x8fba10] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x8fba10u));
    /* 0041aefd: fdiv dword ptr [0x8fbe98] */ ST(0) = ST(0) / R_F32((u32)(0x8fbe98u));
    /* 0041af03: fadd dword ptr [0x8fbe94] */ ST(0) = ST(0) + R_F32((u32)(0x8fbe94u));
    /* 0041af09: fmul dword ptr [0x8fbe80] */ ST(0) = ST(0) * R_F32((u32)(0x8fbe80u));
    /* 0041af0f: fadd dword ptr [ebp - 0x4c] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xffffffb4u));
    /* 0041af12: fstp dword ptr [ebp - 0x4c] */ W_F32((u32)(r_ebp+0xffffffb4u), ST(0)); FPOP();
L_0041af15:; BB(0x0041af15);
    /* 0041af15: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
    /* 0041af1c: push 0x4c */ { u32 v = 0x4cu; r_esp -= 4; W32(r_esp, v); }
    /* 0041af1e: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x41af23u); f_005caba4();
    /* 0041af23: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0041af24: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 0041af27: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041af29: je 0x41af66 */ if (fZ) goto L_0041af66;
L_0041af2b:; BB(0x0041af2b);
    /* 0041af2b: mov dword ptr [ebp - 0x48], 1 */ W32((u32)(r_ebp+0xffffffb8u), 0x1u);
    /* 0041af32: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0041af39: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0041af3c: lea ebx, [ebp - 0x54] */ r_ebx = (u32)(r_ebp+0xffffffacu);
    /* 0041af3f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0041af40: lea edi, [edx + 0x3cc] */ r_edi = (u32)(r_edx+0x3ccu);
    /* 0041af46: lea esi, [edx + 0x414] */ r_esi = (u32)(r_edx+0x414u);
    /* 0041af4c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0041af4d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0041af4e: mov ecx, eax */ r_ecx = r_eax;
    /* 0041af50: call 0x4266b0 */ r_esp -= 4; W32(r_esp, 0x41af55u); f_004266b0();
    /* 0041af55: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
    /* 0041af5c: jmp 0x41af66 */ goto L_0041af66;
L_0041af5e:; BB(0x0041af5e);
    /* 0041af5e: mov edx, ecx */ r_edx = r_ecx;
    /* 0041af60: mov dword ptr [edx + 0x870], eax */ W32((u32)(r_edx+0x870u), r_eax);
L_0041af66:; BB(0x0041af66);
    /* 0041af66: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0041af69: mov eax, dword ptr [edx + 0x5c] */ r_eax = R32((u32)(r_edx+0x5cu));
    /* 0041af6c: sub eax, dword ptr [edx + 0x87c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x87cu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0041af72: mov ecx, dword ptr [edx + 0x86c] */ r_ecx = R32((u32)(r_edx+0x86cu));
    /* 0041af78: mov dword ptr [edx + 0x5c], eax */ W32((u32)(r_edx+0x5cu), r_eax);
    /* 0041af7b: jmp 0x41abd6 */ goto L_0041abd6;
L_0041af80:; BB(0x0041af80);
    /* 0041af80: mov ecx, eax */ r_ecx = r_eax;
    /* 0041af82: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x41af87u); f_007aa094();
    /* 0041af87: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0041af8a: fld dword ptr [edx + 0xc0] */ FPUSH(R_F32((u32)(r_edx+0xc0u)));
    /* 0041af90: fcomp dword ptr [0x8fbe7c] */ fx_compare(ST(0), R_F32((u32)(0x8fbe7cu))); FPOP();
    /* 0041af96: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0041af98: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0041af99: mov dword ptr [edx + 0x5c], 0 */ W32((u32)(r_edx+0x5cu), 0x0u);
    /* 0041afa0: jbe 0x41afcc */ if ((fC||fZ)) goto L_0041afcc;
L_0041afa2:; BB(0x0041afa2);
    /* 0041afa2: mov eax, edx */ r_eax = r_edx;
    /* 0041afa4: mov dword ptr [eax + 0x87c], 0x1000 */ W32((u32)(r_eax+0x87cu), 0x1000u);
    /* 0041afae: mov ecx, 3 */ r_ecx = 0x3u;
    /* 0041afb3: mov dword ptr [eax + 0x86c], 3 */ W32((u32)(r_eax+0x86cu), 0x3u);
    /* 0041afbd: mov dword ptr [eax + 0x65c], 1 */ W32((u32)(r_eax+0x65cu), 0x1u);
    /* 0041afc7: jmp 0x41abd6 */ goto L_0041abd6;
L_0041afcc:; BB(0x0041afcc);
    /* 0041afcc: mov eax, edx */ r_eax = r_edx;
    /* 0041afce: mov ecx, dword ptr [eax + 0x86c] */ r_ecx = R32((u32)(r_eax+0x86cu));
    /* 0041afd4: jmp 0x41abd6 */ goto L_0041abd6;
L_0041afd9:; BB(0x0041afd9);
    /* 0041afd9: mov ecx, eax */ r_ecx = r_eax;
    /* 0041afdb: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x41afe0u); f_007aa094();
    /* 0041afe0: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0041afe3: fld dword ptr [0x8fbe78] */ FPUSH(R_F32((u32)(0x8fbe78u)));
    /* 0041afe9: fld dword ptr [edx + 0xc0] */ FPUSH(R_F32((u32)(r_edx+0xc0u)));
    /* 0041afef: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0041aff1: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0041aff3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0041aff4: jbe 0x41b024 */ if ((fC||fZ)) goto L_0041b024;
L_0041aff6:; BB(0x0041aff6);
    /* 0041aff6: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 0041aff8: fld dword ptr [edx + 0xc4] */ FPUSH(R_F32((u32)(r_edx+0xc4u)));
    /* 0041affe: fsubrp st(2) */ ST(2) = ST(0) - ST(2); FPOP();
    /* 0041b000: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 0041b002: fmul dword ptr [0x8fbe88] */ ST(0) = ST(0) * R_F32((u32)(0x8fbe88u));
    /* 0041b008: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0041b00a: fnstcw word ptr [ebp - 0x40] */ W16((u32)(r_ebp+0xffffffc0u), fcw);
    /* 0041b00d: movzx eax, word ptr [ebp - 0x40] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc0u));
    /* 0041b011: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0041b016: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0041b019: fldcw word ptr [ebp - 0x38] */ fcw = R16((u32)(r_ebp+0xffffffc8u));
    /* 0041b01c: fist dword ptr [edx + 0x5c] */ W32((u32)(r_edx+0x5cu), (u32)fx_int32(ST(0)));
    /* 0041b01f: fldcw word ptr [ebp - 0x40] */ fcw = R16((u32)(r_ebp+0xffffffc0u));
    /* 0041b022: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
L_0041b024:; BB(0x0041b024);
    /* 0041b024: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0041b026: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0041b028: mov eax, edx */ r_eax = r_edx;
    /* 0041b02a: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 0041b030: test dl, 0x10 */ {  u32 a = (u8)r_edx; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0041b033: je 0x41b057 */ if (fZ) goto L_0041b057;
L_0041b035:; BB(0x0041b035);
    /* 0041b035: mov edx, eax */ r_edx = r_eax;
    /* 0041b037: mov dword ptr [edx + 0x86c], 2 */ W32((u32)(r_edx+0x86cu), 0x2u);
    /* 0041b041: mov eax, 0x18 */ r_eax = 0x18u;
    /* 0041b046: mov word ptr [edx + 0xb8], ax */ W16((u32)(r_edx+0xb8u), (u16)r_eax);
    /* 0041b04d: mov ecx, 2 */ r_ecx = 0x2u;
    /* 0041b052: jmp 0x41abd6 */ goto L_0041abd6;
L_0041b057:; BB(0x0041b057);
    /* 0041b057: mov ecx, dword ptr [eax + 0x86c] */ r_ecx = R32((u32)(r_eax+0x86cu));
    /* 0041b05d: jmp 0x41abd6 */ goto L_0041abd6;
L_0041b062:; BB(0x0041b062);
    /* 0041b062: mov ecx, eax */ r_ecx = r_eax;
    /* 0041b064: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x41b069u); f_007aa094();
    /* 0041b069: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0041b06c: fld dword ptr [edx + 0xc0] */ FPUSH(R_F32((u32)(r_edx+0xc0u)));
    /* 0041b072: fcomp dword ptr [0x8fbe74] */ fx_compare(ST(0), R_F32((u32)(0x8fbe74u))); FPOP();
    /* 0041b078: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0041b07a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0041b07b: jae 0x41b08a */ if (!fC) goto L_0041b08a;
L_0041b07d:; BB(0x0041b07d);
    /* 0041b07d: mov eax, edx */ r_eax = r_edx;
    /* 0041b07f: mov ecx, dword ptr [eax + 0x86c] */ r_ecx = R32((u32)(r_eax+0x86cu));
    /* 0041b085: jmp 0x41abd6 */ goto L_0041abd6;
L_0041b08a:; BB(0x0041b08a);
    /* 0041b08a: mov eax, edx */ r_eax = r_edx;
    /* 0041b08c: mov dword ptr [eax + 0x86c], 1 */ W32((u32)(r_eax+0x86cu), 0x1u);
    /* 0041b096: lea ecx, [eax + 0x644] */ r_ecx = (u32)(r_eax+0x644u);
    /* 0041b09c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0041b09e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041b09f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041b0a0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041b0a1: push 0x324 */ { u32 v = 0x324u; r_esp -= 4; W32(r_esp, v); }
    /* 0041b0a6: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x41b0abu); f_00814298();
    /* 0041b0ab: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041b0ae: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0041b0b1: mov ecx, dword ptr [eax + 0x86c] */ r_ecx = R32((u32)(r_eax+0x86cu));
    /* 0041b0b7: jmp 0x41abd6 */ goto L_0041abd6;
}

void f_0041ac15(void)
{
    FN_ENTER(0x0041ac15);
    /* 0041ac15: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0041ac18: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0041ac1b: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0041ac1e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0041ac21: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0041ac28: mov esp, ebp */ r_esp = r_ebp;
    /* 0041ac2a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041ac2b: ret 4 */ FN_RET(0x0041ac15); r_esp += 8; return;
}

