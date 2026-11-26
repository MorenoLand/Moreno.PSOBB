#include "protos.h"

void f_0042213a(void)
{
    FN_ENTER(0x0042213a);
    /* 0042213a: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0042213c: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 0042213e: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00422140: mov ecx, edi */ r_ecx = r_edi;
    /* 00422142: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x422148u); call_ind(t); }
    /* 00422148: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 0042214c: mov esi, dword ptr [edi + 0x684] */ r_esi = R32((u32)(r_edi+0x684u));
    /* 00422152: mov byte ptr [esp + 0x14], 0x12 */ W8((u32)(r_esp+0x14u), 0x12u);
    /* 00422157: mov edx, 0x19 */ r_edx = 0x19u;
    /* 0042215c: mov byte ptr [esp + 0x15], 5 */ W8((u32)(r_esp+0x15u), 0x5u);
    /* 00422161: mov word ptr [esp + 0x16], ax */ W16((u32)(r_esp+0x16u), (u16)r_eax);
    /* 00422166: movzx eax, word ptr [edi + 0x394] */ r_eax = (u32)R16((u32)(r_edi+0x394u));
    /* 0042216d: mov word ptr [esp + 0x18], dx */ W16((u32)(r_esp+0x18u), (u16)r_edx);
    /* 00422172: mov word ptr [esp + 0x1a], si */ W16((u32)(r_esp+0x1au), (u16)r_esi);
    /* 00422177: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 0042217b: lea ecx, [esp + 0x14] */ r_ecx = (u32)(r_esp+0x14u);
    /* 0042217f: mov eax, dword ptr [edi + 0x698] */ r_eax = R32((u32)(r_edi+0x698u));
    /* 00422185: mov edi, dword ptr [edi + 0x69c] */ r_edi = R32((u32)(r_edi+0x69cu));
    /* 0042218b: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0042218f: mov dword ptr [esp + 0x24], edi */ W32((u32)(r_esp+0x24u), r_edi);
    /* 00422193: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x422198u); f_008003e0();
    /* 00422198: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042219b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0042219c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0042219d: ret 4 */ FN_RET(0x0042213a); r_esp += 8; return;
}

void f_004221a0(void)
{
    FN_ENTER(0x004221a0);
    /* 004221a0: mov ecx, edi */ r_ecx = r_edi;
    /* 004221a2: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x4221a7u); f_007aa094();
    /* 004221a7: mov ecx, edi */ r_ecx = r_edi;
    /* 004221a9: call 0x41ebc0 */ r_esp -= 4; W32(r_esp, 0x4221aeu); f_0041ebc0();
    /* 004221ae: mov ecx, edi */ r_ecx = r_edi;
    /* 004221b0: call 0x41c768 */ r_esp -= 4; W32(r_esp, 0x4221b5u); f_0041c768();
    /* 004221b5: mov eax, dword ptr [edi + 0x86c] */ r_eax = R32((u32)(r_edi+0x86cu));
    /* 004221bb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004221bd: jne 0x422244 */ if (!fZ) goto L_00422244;
L_004221c3:; BB(0x004221c3);
    /* 004221c3: fld dword ptr [0x8fbc1c] */ FPUSH(R_F32((u32)(0x8fbc1cu)));
    /* 004221c9: fadd dword ptr [edi + 0x884] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x884u));
    /* 004221cf: fst dword ptr [edi + 0x884] */ W_F32((u32)(r_edi+0x884u), ST(0));
    /* 004221d5: lea esi, [edi + 0x620] */ r_esi = (u32)(r_edi+0x620u);
    /* 004221db: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004221dc: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004221df: mov ecx, esi */ r_ecx = r_esi;
    /* 004221e1: call 0x782d28 */ r_esp -= 4; W32(r_esp, 0x4221e6u); f_00782d28();
    /* 004221e6: fild dword ptr [edi + 0x87c] */ FPUSH((long double)(i32)R32((u32)(r_edi+0x87cu)));
    /* 004221ec: fild dword ptr [edi + 0x664] */ FPUSH((long double)(i32)R32((u32)(r_edi+0x664u)));
    /* 004221f2: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 004221f4: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004221f6: push dword ptr [edi + 0x884] */ { u32 v = R32((u32)(r_edi+0x884u)); r_esp -= 4; W32(r_esp, v); }
    /* 004221fc: fnstcw word ptr [esp + 0x2c] */ W16((u32)(r_esp+0x2cu), fcw);
    /* 00422200: movzx eax, word ptr [esp + 0x2c] */ r_eax = (u32)R16((u32)(r_esp+0x2cu));
    /* 00422205: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0042220a: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 0042220e: fldcw word ptr [esp + 0x34] */ fcw = R16((u32)(r_esp+0x34u));
    /* 00422212: fistp dword ptr [edi + 0x60] */ W32((u32)(r_edi+0x60u), (u32)fx_int32(ST(0))); FPOP();
    /* 00422215: fldcw word ptr [esp + 0x2c] */ fcw = R16((u32)(r_esp+0x2cu));
    /* 00422219: mov ecx, esi */ r_ecx = r_esi;
    /* 0042221b: call 0x782d9c */ r_esp -= 4; W32(r_esp, 0x422220u); f_00782d9c();
    /* 00422220: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00422222: je 0x4222ad */ if (fZ) goto L_004222ad;
L_00422228:; BB(0x00422228);
    /* 00422228: mov dword ptr [edi + 0x884], 0 */ W32((u32)(r_edi+0x884u), 0x0u);
    /* 00422232: mov dword ptr [edi + 0x86c], 1 */ W32((u32)(r_edi+0x86cu), 0x1u);
    /* 0042223c: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042223f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00422240: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00422241: ret 4 */ FN_RET(0x004221a0); r_esp += 8; return;
L_00422244:; BB(0x00422244);
    /* 00422244: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00422247: jne 0x4222ad */ if (!fZ) goto L_004222ad;
L_00422249:; BB(0x00422249);
    /* 00422249: fld dword ptr [0x8fbc1c] */ FPUSH(R_F32((u32)(0x8fbc1cu)));
    /* 0042224f: fadd dword ptr [edi + 0x884] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x884u));
    /* 00422255: fst dword ptr [edi + 0x884] */ W_F32((u32)(r_edi+0x884u), ST(0));
    /* 0042225b: lea esi, [edi + 0x5fc] */ r_esi = (u32)(r_edi+0x5fcu);
    /* 00422261: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00422262: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00422265: mov ecx, esi */ r_ecx = r_esi;
    /* 00422267: call 0x782d28 */ r_esp -= 4; W32(r_esp, 0x42226cu); f_00782d28();
    /* 0042226c: push dword ptr [edi + 0x884] */ { u32 v = R32((u32)(r_edi+0x884u)); r_esp -= 4; W32(r_esp, v); }
    /* 00422272: fld dword ptr [edi + 0x3a8] */ FPUSH(R_F32((u32)(r_edi+0x3a8u)));
    /* 00422278: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0042227a: fadd dword ptr [edi + 0x898] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x898u));
    /* 00422280: fld dword ptr [edi + 0x3b0] */ FPUSH(R_F32((u32)(r_edi+0x3b0u)));
    /* 00422286: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00422288: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0042228a: fadd dword ptr [edi + 0x8a0] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x8a0u));
    /* 00422290: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00422292: fstp dword ptr [edi + 0x38] */ W_F32((u32)(r_edi+0x38u), ST(0)); FPOP();
    /* 00422295: fstp dword ptr [edi + 0x40] */ W_F32((u32)(r_edi+0x40u), ST(0)); FPOP();
    /* 00422298: mov ecx, esi */ r_ecx = r_esi;
    /* 0042229a: call 0x782d9c */ r_esp -= 4; W32(r_esp, 0x42229fu); f_00782d9c();
    /* 0042229f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004222a1: je 0x4222ad */ if (fZ) goto L_004222ad;
L_004222a3:; BB(0x004222a3);
    /* 004222a3: mov dword ptr [edi + 0x86c], 2 */ W32((u32)(r_edi+0x86cu), 0x2u);
L_004222ad:; BB(0x004222ad);
    /* 004222ad: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004222b0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004222b1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004222b2: ret 4 */ FN_RET(0x004221a0); r_esp += 8; return;
}

void f_004222ad(void)
{
    FN_ENTER(0x004222ad);
    /* 004222ad: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004222b0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004222b1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004222b2: ret 4 */ FN_RET(0x004222ad); r_esp += 8; return;
}

void f_004223ac(void) /* sub_4223AC */
{
    FN_ENTER(0x004223ac);
    /* 004223ac: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004223ad: mov edi, ecx */ r_edi = r_ecx;
    /* 004223af: mov eax, dword ptr [edi + 0x684] */ r_eax = R32((u32)(r_edi+0x684u));
    /* 004223b5: cmp eax, 0x32 */ {  u32 a = r_eax; u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004223b8: jge 0x42240d */ if ((fS==fO)) goto L_0042240d;
L_004223ba:; BB(0x004223ba);
    /* 004223ba: mov edx, dword ptr [edi + 0x38] */ r_edx = R32((u32)(r_edi+0x38u));
    /* 004223bd: mov eax, dword ptr [edi + 0x40] */ r_eax = R32((u32)(r_edi+0x40u));
    /* 004223c0: mov dword ptr [edi + 0x3a0], 0 */ W32((u32)(r_edi+0x3a0u), 0x0u);
    /* 004223ca: mov dword ptr [edi + 0x39c], edx */ W32((u32)(r_edi+0x39cu), r_edx);
    /* 004223d0: mov dword ptr [edi + 0x3a4], eax */ W32((u32)(r_edi+0x3a4u), r_eax);
    /* 004223d6: lea eax, [edi + 0x39c] */ r_eax = (u32)(r_edi+0x39cu);
    /* 004223dc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004223dd: call 0x7828e4 */ r_esp -= 4; W32(r_esp, 0x4223e2u); f_007828e4();
    /* 004223e2: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004223e4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004223e7: fld dword ptr [0x8fbc14] */ FPUSH(R_F32((u32)(0x8fbc14u)));
    /* 004223ed: fld dword ptr [edi + 0x39c] */ FPUSH(R_F32((u32)(r_edi+0x39cu)));
    /* 004223f3: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004223f5: fld dword ptr [edi + 0x3a4] */ FPUSH(R_F32((u32)(r_edi+0x3a4u)));
    /* 004223fb: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 004223fd: fstp dword ptr [edi + 0x39c] */ W_F32((u32)(r_edi+0x39cu), ST(0)); FPOP();
    /* 00422403: fstp dword ptr [edi + 0x3a4] */ W_F32((u32)(r_edi+0x3a4u), ST(0)); FPOP();
    /* 00422409: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0042240a: ret 4 */ FN_RET(0x004223ac); r_esp += 8; return;
L_0042240d:; BB(0x0042240d);
    /* 0042240d: mov dword ptr [edi + 0x39c], 0 */ W32((u32)(r_edi+0x39cu), 0x0u);
    /* 00422417: mov dword ptr [edi + 0x3a0], 0 */ W32((u32)(r_edi+0x3a0u), 0x0u);
    /* 00422421: mov dword ptr [edi + 0x3a4], 0 */ W32((u32)(r_edi+0x3a4u), 0x0u);
    /* 0042242b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0042242c: ret 4 */ FN_RET(0x004223ac); r_esp += 8; return;
}

void f_00422430(void) /* sub_422430 */
{
    FN_ENTER(0x00422430);
    /* 00422430: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00422431: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00422432: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00422435: mov esi, ecx */ r_esi = r_ecx;
    /* 00422437: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 0042243b: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0042243e: ja 0x42272d */ if ((!fC&&!fZ)) goto L_0042272d;
L_00422444:; BB(0x00422444);
    /* 00422444: mov eax, dword ptr [eax*4 + 0x8fb694] */ r_eax = R32((u32)(r_eax*4+0x8fb694u));
    /* 0042244b: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0042272d:; BB(0x0042272d);
    /* 0042272d: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00422730: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00422731: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00422732: ret 4 */ FN_RET(0x00422430); r_esp += 8; return;
}

void f_0042244d(void)
{
    FN_ENTER(0x0042244d);
    /* 0042244d: fld dword ptr [esi + 0x884] */ FPUSH(R_F32((u32)(r_esi+0x884u)));
    /* 00422453: fcomp dword ptr [0x8fbc10] */ fx_compare(ST(0), R_F32((u32)(0x8fbc10u))); FPOP();
    /* 00422459: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0042245b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0042245c: jae 0x42272d */ if (!fC) goto L_0042272d;
L_00422462:; BB(0x00422462);
    /* 00422462: mov ebx, dword ptr [esi + 0x684] */ r_ebx = R32((u32)(r_esi+0x684u));
    /* 00422468: cmp ebx, 0x32 */ {  u32 a = r_ebx; u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042246b: jge 0x422489 */ if ((fS==fO)) goto L_00422489;
L_0042246d:; BB(0x0042246d);
    /* 0042246d: call 0x420a44 */ r_esp -= 4; W32(r_esp, 0x422472u); f_00420a44();
    /* 00422472: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00422474: jne 0x42247d */ if (!fZ) goto L_0042247d;
L_00422476:; BB(0x00422476);
    /* 00422476: mov edx, 0x9a3cb0 */ r_edx = 0x9a3cb0u;
    /* 0042247b: jmp 0x4224a6 */ goto L_004224a6;
L_0042247d:; BB(0x0042247d);
    /* 0042247d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00422480: jne 0x4224a6 */ if (!fZ) goto L_004224a6;
L_00422482:; BB(0x00422482);
    /* 00422482: mov edx, 0x9a3d28 */ r_edx = 0x9a3d28u;
    /* 00422487: jmp 0x4224a6 */ goto L_004224a6;
L_00422489:; BB(0x00422489);
    /* 00422489: add ebx, -0x32 */ {  u32 a = r_ebx; u32 b = 0xffffffceu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0042248c: call 0x420a44 */ r_esp -= 4; W32(r_esp, 0x422491u); f_00420a44();
    /* 00422491: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00422493: jne 0x42249c */ if (!fZ) goto L_0042249c;
L_00422495:; BB(0x00422495);
    /* 00422495: mov edx, 0x9a3cf0 */ r_edx = 0x9a3cf0u;
    /* 0042249a: jmp 0x4224a6 */ goto L_004224a6;
L_0042249c:; BB(0x0042249c);
    /* 0042249c: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042249f: jne 0x4224a6 */ if (!fZ) goto L_004224a6;
L_004224a1:; BB(0x004224a1);
    /* 004224a1: mov edx, 0x9a3d78 */ r_edx = 0x9a3d78u;
L_004224a6:; BB(0x004224a6);
    /* 004224a6: mov ecx, dword ptr [esi + 0x684] */ r_ecx = R32((u32)(r_esi+0x684u));
L_004224ac:; BB(0x004224ac);
    /* 004224ac: mov eax, dword ptr [edx + ebx*4] */ r_eax = R32((u32)(r_edx+r_ebx*4));
    /* 004224af: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004224b2: cmp eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004224b5: jne 0x422735 */ if (!fZ) goto L_00422735;
L_004224bb:; BB(0x004224bb);
    /* 004224bb: mov dword ptr [esi + 0x684], 0 */ W32((u32)(r_esi+0x684u), 0x0u);
    /* 004224c5: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004224c7: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004224c9: jmp 0x4224ac */ goto L_004224ac;
L_0042272d:; BB(0x0042272d);
    /* 0042272d: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00422730: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00422731: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00422732: ret 4 */ FN_RET(0x0042244d); r_esp += 8; return;
L_00422735:; BB(0x00422735);
    /* 00422735: cmp eax, 0x21 */ {  u32 a = r_eax; u32 b = 0x21u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00422738: je 0x422750 */ if (fZ) goto L_00422750;
L_0042273a:; BB(0x0042273a);
    /* 0042273a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042273b: mov dword ptr [esi + 0x684], ecx */ W32((u32)(r_esi+0x684u), r_ecx);
    /* 00422741: mov ecx, esi */ r_ecx = r_esi;
    /* 00422743: call 0x41a808 */ r_esp -= 4; W32(r_esp, 0x422748u); f_0041a808();
    /* 00422748: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042274b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042274c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0042274d: ret 4 */ FN_RET(0x0042244d); r_esp += 8; return;
L_00422750:; BB(0x00422750);
    /* 00422750: mov dword ptr [esi + 0x684], 0x32 */ W32((u32)(r_esi+0x684u), 0x32u);
    /* 0042275a: mov ecx, 0x32 */ r_ecx = 0x32u;
    /* 0042275f: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00422761: jmp 0x4224ac */ goto L_004224ac;
}

void f_004224cb(void)
{
    FN_ENTER(0x004224cb);
    /* 004224cb: mov ecx, esi */ r_ecx = r_esi;
    /* 004224cd: call 0x419ff0 */ r_esp -= 4; W32(r_esp, 0x4224d2u); f_00419ff0();
    /* 004224d2: jmp 0x42272d */ goto L_0042272d;
L_0042272d:; BB(0x0042272d);
    /* 0042272d: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00422730: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00422731: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00422732: ret 4 */ FN_RET(0x004224cb); r_esp += 8; return;
}

void f_004224d7(void)
{
    FN_ENTER(0x004224d7);
    /* 004224d7: mov ecx, esi */ r_ecx = r_esi;
    /* 004224d9: call 0x41a004 */ r_esp -= 4; W32(r_esp, 0x4224deu); f_0041a004();
    /* 004224de: jmp 0x42272d */ goto L_0042272d;
L_0042272d:; BB(0x0042272d);
    /* 0042272d: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00422730: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00422731: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00422732: ret 4 */ FN_RET(0x004224d7); r_esp += 8; return;
}

void f_004224e3(void)
{
    FN_ENTER(0x004224e3);
    /* 004224e3: mov eax, 0xf */ r_eax = 0xfu;
    /* 004224e8: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
    /* 004224ef: mov ecx, esi */ r_ecx = r_esi;
    /* 004224f1: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x4224f6u); f_007aa094();
    /* 004224f6: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 004224f8: mov ecx, esi */ r_ecx = r_esi;
    /* 004224fa: call dword ptr [eax + 0x188] */ { u32 t = R32((u32)(r_eax+0x188u)); r_esp -= 4; W32(r_esp, 0x422500u); call_ind(t); }
    /* 00422500: mov dword ptr [esi + 0x3ec], 0 */ W32((u32)(r_esi+0x3ecu), 0x0u);
    /* 0042250a: mov ecx, esi */ r_ecx = r_esi;
    /* 0042250c: call 0x419130 */ r_esp -= 4; W32(r_esp, 0x422511u); f_00419130();
    /* 00422511: mov eax, dword ptr [esi + 0x3c8] */ r_eax = R32((u32)(r_esi+0x3c8u));
    /* 00422517: mov ebx, dword ptr [esi + 0x3c] */ r_ebx = R32((u32)(r_esi+0x3cu));
    /* 0042251a: mov dword ptr [esi + 0x884], 0 */ W32((u32)(r_esi+0x884u), 0x0u);
    /* 00422524: and eax, 0xfffff17f */ {  u32 a = r_eax; u32 b = 0xfffff17fu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00422529: mov dword ptr [esi + 0x3c8], eax */ W32((u32)(r_esi+0x3c8u), r_eax);
    /* 0042252f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00422531: mov dword ptr [esi + 0x86c], edx */ W32((u32)(r_esi+0x86cu), r_edx);
    /* 00422537: mov dword ptr [esi + 0x870], edx */ W32((u32)(r_esi+0x870u), r_edx);
    /* 0042253d: mov dword ptr [esi + 0x5e0], ebx */ W32((u32)(r_esi+0x5e0u), r_ebx);
    /* 00422543: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00422546: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00422547: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00422548: ret 4 */ FN_RET(0x004224e3); r_esp += 8; return;
}

void f_0042254b(void)
{
    FN_ENTER(0x0042254b);
    /* 0042254b: fld dword ptr [esi + 0x884] */ FPUSH(R_F32((u32)(r_esi+0x884u)));
    /* 00422551: fcomp dword ptr [0x8fbc10] */ fx_compare(ST(0), R_F32((u32)(0x8fbc10u))); FPOP();
    /* 00422557: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00422559: mov dword ptr [esi + 0x770], 0 */ W32((u32)(r_esi+0x770u), 0x0u);
    /* 00422563: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00422564: jae 0x42272d */ if (!fC) goto L_0042272d;
L_0042256a:; BB(0x0042256a);
    /* 0042256a: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0042256c: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 0042256e: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00422570: mov ecx, esi */ r_ecx = r_esi;
    /* 00422572: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x422578u); call_ind(t); }
    /* 00422578: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 0042257c: mov ebx, dword ptr [esi + 0x684] */ r_ebx = R32((u32)(r_esi+0x684u));
    /* 00422582: mov byte ptr [esp], 0x12 */ W8((u32)(r_esp), 0x12u);
    /* 00422586: mov edx, 0x19 */ r_edx = 0x19u;
    /* 0042258b: mov byte ptr [esp + 1], 5 */ W8((u32)(r_esp+0x1u), 0x5u);
    /* 00422590: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 00422595: movzx eax, word ptr [esi + 0x394] */ r_eax = (u32)R16((u32)(r_esi+0x394u));
    /* 0042259c: mov word ptr [esp + 4], dx */ W16((u32)(r_esp+0x4u), (u16)r_edx);
    /* 004225a1: mov word ptr [esp + 6], bx */ W16((u32)(r_esp+0x6u), (u16)r_ebx);
    /* 004225a6: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004225aa: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 004225ad: mov eax, dword ptr [esi + 0x698] */ r_eax = R32((u32)(r_esi+0x698u));
    /* 004225b3: mov esi, dword ptr [esi + 0x69c] */ r_esi = R32((u32)(r_esi+0x69cu));
    /* 004225b9: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 004225bd: mov dword ptr [esp + 0x10], esi */ W32((u32)(r_esp+0x10u), r_esi);
    /* 004225c1: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4225c6u); f_008003e0();
    /* 004225c6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004225c9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004225ca: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004225cb: ret 4 */ FN_RET(0x0042254b); r_esp += 8; return;
L_0042272d:; BB(0x0042272d);
    /* 0042272d: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00422730: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00422731: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00422732: ret 4 */ FN_RET(0x0042254b); r_esp += 8; return;
}

void f_004225ce(void)
{
    FN_ENTER(0x004225ce);
    /* 004225ce: mov eax, dword ptr [esi + 0x870] */ r_eax = R32((u32)(r_esi+0x870u));
    /* 004225d4: add dword ptr [esi + 0x86c], 1 */ { u32 ad = (u32)(r_esi+0x86cu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 004225db: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004225dd: jne 0x422650 */ if (!fZ) goto L_00422650;
L_004225df:; BB(0x004225df);
    /* 004225df: fld dword ptr [esi + 0xc0] */ FPUSH(R_F32((u32)(r_esi+0xc0u)));
    /* 004225e5: fadd dword ptr [esi + 0xc8] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0xc8u));
    /* 004225eb: fcomp dword ptr [0x8fbbfc] */ fx_compare(ST(0), R_F32((u32)(0x8fbbfcu))); FPOP();
    /* 004225f1: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004225f3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004225f4: jb 0x422650 */ if (fC) goto L_00422650;
L_004225f6:; BB(0x004225f6);
    /* 004225f6: mov ecx, esi */ r_ecx = r_esi;
    /* 004225f8: call 0x422768 */ r_esp -= 4; W32(r_esp, 0x4225fdu); f_00422768();
    /* 004225fd: fld dword ptr [0x8fbc0c] */ FPUSH(R_F32((u32)(0x8fbc0cu)));
    /* 00422603: fld dword ptr [0x8fbe70] */ FPUSH(R_F32((u32)(0x8fbe70u)));
    /* 00422609: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0042260b: fst dword ptr [esi + 0x888] */ W_F32((u32)(r_esi+0x888u), ST(0));
    /* 00422611: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00422613: fmul dword ptr [0xa436f8] */ ST(0) = ST(0) * R_F32((u32)(0xa436f8u));
    /* 00422619: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0042261b: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 0042261d: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0042261f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00422620: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00422623: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x422628u); f_0082dc9c();
    /* 00422628: mov eax, dword ptr [esi + 0x3c8] */ r_eax = R32((u32)(r_esi+0x3c8u));
    /* 0042262e: fstp dword ptr [esi + 0x884] */ W_F32((u32)(r_esi+0x884u), ST(0)); FPOP();
    /* 00422634: mov edx, 1 */ r_edx = 0x1u;
    /* 00422639: mov dword ptr [esi + 0x870], edx */ W32((u32)(r_esi+0x870u), r_edx);
    /* 0042263f: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00422644: mov dword ptr [esi + 0x3c8], eax */ W32((u32)(r_esi+0x3c8u), r_eax);
    /* 0042264a: mov dword ptr [esi + 0x3ec], edx */ W32((u32)(r_esi+0x3ecu), r_edx);
L_00422650:; BB(0x00422650);
    /* 00422650: mov ecx, esi */ r_ecx = r_esi;
    /* 00422652: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x422657u); f_007aa094();
    /* 00422657: push 0x41600000 */ { u32 v = 0x41600000u; r_esp -= 4; W32(r_esp, v); }
    /* 0042265c: mov ecx, esi */ r_ecx = r_esi;
    /* 0042265e: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x422663u); f_007aaa30();
    /* 00422663: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00422665: je 0x42267f */ if (fZ) goto L_0042267f;
L_00422667:; BB(0x00422667);
    /* 00422667: lea edx, [esi + 0x644] */ r_edx = (u32)(r_esi+0x644u);
    /* 0042266d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0042266f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00422670: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00422671: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00422672: push 0x318 */ { u32 v = 0x318u; r_esp -= 4; W32(r_esp, v); }
    /* 00422677: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x42267cu); f_00814298();
    /* 0042267c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0042267f:; BB(0x0042267f);
    /* 0042267f: push 0x42280000 */ { u32 v = 0x42280000u; r_esp -= 4; W32(r_esp, v); }
    /* 00422684: mov ecx, esi */ r_ecx = r_esi;
    /* 00422686: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x42268bu); f_007aaa30();
    /* 0042268b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042268d: je 0x4226a7 */ if (fZ) goto L_004226a7;
L_0042268f:; BB(0x0042268f);
    /* 0042268f: lea edx, [esi + 0x644] */ r_edx = (u32)(r_esi+0x644u);
    /* 00422695: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00422697: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00422698: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00422699: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0042269a: push 0x317 */ { u32 v = 0x317u; r_esp -= 4; W32(r_esp, v); }
    /* 0042269f: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4226a4u); f_00814298();
    /* 004226a4: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004226a7:; BB(0x004226a7);
    /* 004226a7: push 0x42380000 */ { u32 v = 0x42380000u; r_esp -= 4; W32(r_esp, v); }
    /* 004226ac: mov ecx, esi */ r_ecx = r_esi;
    /* 004226ae: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x4226b3u); f_007aaa30();
    /* 004226b3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004226b5: je 0x4226ce */ if (fZ) goto L_004226ce;
L_004226b7:; BB(0x004226b7);
    /* 004226b7: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004226b9: mov eax, dword ptr [esi + 0x780] */ r_eax = R32((u32)(r_esi+0x780u));
    /* 004226bf: push dword ptr [eax + 4] */ { u32 v = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 004226c2: lea edx, [esi + 0x38] */ r_edx = (u32)(r_esi+0x38u);
    /* 004226c5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004226c6: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x4226cbu); f_0050b7a4();
    /* 004226cb: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004226ce:; BB(0x004226ce);
    /* 004226ce: mov eax, dword ptr [esi + 0x870] */ r_eax = R32((u32)(r_esi+0x870u));
    /* 004226d4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004226d6: je 0x42272d */ if (fZ) goto L_0042272d;
L_004226d8:; BB(0x004226d8);
    /* 004226d8: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004226db: jne 0x42272d */ if (!fZ) goto L_0042272d;
L_004226dd:; BB(0x004226dd);
    /* 004226dd: mov ecx, esi */ r_ecx = r_esi;
    /* 004226df: call 0x422768 */ r_esp -= 4; W32(r_esp, 0x4226e4u); f_00422768();
    /* 004226e4: fld dword ptr [esi + 0x888] */ FPUSH(R_F32((u32)(r_esi+0x888u)));
    /* 004226ea: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 004226ec: fadd dword ptr [esi + 0x5e8] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x5e8u));
    /* 004226f2: fld dword ptr [esi + 0x888] */ FPUSH(R_F32((u32)(r_esi+0x888u)));
    /* 004226f8: fadd dword ptr [esi + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x3cu));
    /* 004226fb: fld dword ptr [esi + 0x888] */ FPUSH(R_F32((u32)(r_esi+0x888u)));
    /* 00422701: fadd dword ptr [esi + 0x884] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x884u));
    /* 00422707: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00422709: fstp dword ptr [esi + 0x5e4] */ W_F32((u32)(r_esi+0x5e4u), ST(0)); FPOP();
    /* 0042270f: fstp dword ptr [esi + 0x5e0] */ W_F32((u32)(r_esi+0x5e0u), ST(0)); FPOP();
    /* 00422715: fstp dword ptr [esi + 0x888] */ W_F32((u32)(r_esi+0x888u), ST(0)); FPOP();
    /* 0042271b: fld dword ptr [0xa436f8] */ FPUSH(R_F32((u32)(0xa436f8u)));
    /* 00422721: fadd dword ptr [esi + 0x884] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x884u));
    /* 00422727: fstp dword ptr [esi + 0x884] */ W_F32((u32)(r_esi+0x884u), ST(0)); FPOP();
L_0042272d:; BB(0x0042272d);
    /* 0042272d: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00422730: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00422731: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00422732: ret 4 */ FN_RET(0x004225ce); r_esp += 8; return;
}

void f_0042272d(void)
{
    FN_ENTER(0x0042272d);
    /* 0042272d: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00422730: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00422731: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00422732: ret 4 */ FN_RET(0x0042272d); r_esp += 8; return;
}

void f_00422768(void) /* sub_422768 */
{
    FN_ENTER(0x00422768);
    /* 00422768: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00422769: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0042276c: mov esi, ecx */ r_esi = r_ecx;
    /* 0042276e: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 00422773: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 0042277a: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 00422782: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 0042278a: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x42278fu); f_0082d990();
    /* 0042278f: push 0x40000000 */ { u32 v = 0x40000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00422794: push 0x40000000 */ { u32 v = 0x40000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00422799: push 0x40000000 */ { u32 v = 0x40000000u; r_esp -= 4; W32(r_esp, v); }
    /* 0042279e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004227a0: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x4227a5u); f_0082fa0c();
    /* 004227a5: push dword ptr [esi + 0xc0] */ { u32 v = R32((u32)(r_esi+0xc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004227ab: mov ecx, dword ptr [esi + 0xf8] */ r_ecx = R32((u32)(r_esi+0xf8u));
    /* 004227b1: call 0x8304c8 */ r_esp -= 4; W32(r_esp, 0x4227b6u); f_008304c8();
    /* 004227b6: mov ecx, dword ptr [esi + 0x34] */ r_ecx = R32((u32)(r_esi+0x34u));
    /* 004227b9: call 0x8305ec */ r_esp -= 4; W32(r_esp, 0x4227beu); f_008305ec();
    /* 004227be: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 004227c1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004227c2: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 004227c6: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004227c8: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x4227cdu); f_00830aa0();
    /* 004227cd: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x4227d2u); f_0082da80();
    /* 004227d2: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 004227d6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004227d9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004227da: ret  */ FN_RET(0x00422768); r_esp += 4; return;
}

void f_004227dc(void) /* sub_4227DC */
{
    FN_ENTER(0x004227dc);
    /* 004227dc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004227dd: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004227de: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004227e1: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004227e3: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 004227e7: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004227ea: ja 0x4229cf */ if ((!fC&&!fZ)) goto L_004229cf;
L_004227f0:; BB(0x004227f0);
    /* 004227f0: mov eax, dword ptr [eax*4 + 0x8fb6c4] */ r_eax = R32((u32)(r_eax*4+0x8fb6c4u));
    /* 004227f7: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_004229cf:; BB(0x004229cf);
    /* 004229cf: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004229d2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004229d3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004229d4: ret 4 */ FN_RET(0x004227dc); r_esp += 8; return;
}

void f_004227f9(void)
{
    FN_ENTER(0x004227f9);
    /* 004227f9: mov eax, dword ptr [ebp + 0xb0] */ r_eax = R32((u32)(r_ebp+0xb0u));
    /* 004227ff: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00422801: je 0x4229cf */ if (fZ) goto L_004229cf;
L_00422807:; BB(0x00422807);
    /* 00422807: mov ebx, dword ptr [ebp + 0x684] */ r_ebx = R32((u32)(r_ebp+0x684u));
    /* 0042280d: cmp ebx, 0x32 */ {  u32 a = r_ebx; u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00422810: jge 0x42282e */ if ((fS==fO)) goto L_0042282e;
L_00422812:; BB(0x00422812);
    /* 00422812: call 0x420a44 */ r_esp -= 4; W32(r_esp, 0x422817u); f_00420a44();
    /* 00422817: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00422819: jne 0x422822 */ if (!fZ) goto L_00422822;
L_0042281b:; BB(0x0042281b);
    /* 0042281b: mov edx, 0x9a3cb0 */ r_edx = 0x9a3cb0u;
    /* 00422820: jmp 0x42284b */ goto L_0042284b;
L_00422822:; BB(0x00422822);
    /* 00422822: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00422825: jne 0x42284b */ if (!fZ) goto L_0042284b;
L_00422827:; BB(0x00422827);
    /* 00422827: mov edx, 0x9a3d28 */ r_edx = 0x9a3d28u;
    /* 0042282c: jmp 0x42284b */ goto L_0042284b;
L_0042282e:; BB(0x0042282e);
    /* 0042282e: add ebx, -0x32 */ {  u32 a = r_ebx; u32 b = 0xffffffceu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00422831: call 0x420a44 */ r_esp -= 4; W32(r_esp, 0x422836u); f_00420a44();
    /* 00422836: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00422838: jne 0x422841 */ if (!fZ) goto L_00422841;
L_0042283a:; BB(0x0042283a);
    /* 0042283a: mov edx, 0x9a3cf0 */ r_edx = 0x9a3cf0u;
    /* 0042283f: jmp 0x42284b */ goto L_0042284b;
L_00422841:; BB(0x00422841);
    /* 00422841: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00422844: jne 0x42284b */ if (!fZ) goto L_0042284b;
L_00422846:; BB(0x00422846);
    /* 00422846: mov edx, 0x9a3d78 */ r_edx = 0x9a3d78u;
L_0042284b:; BB(0x0042284b);
    /* 0042284b: mov ecx, dword ptr [ebp + 0x684] */ r_ecx = R32((u32)(r_ebp+0x684u));
L_00422851:; BB(0x00422851);
    /* 00422851: mov eax, dword ptr [edx + ebx*4] */ r_eax = R32((u32)(r_edx+r_ebx*4));
    /* 00422854: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00422857: cmp eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042285a: jne 0x4229d7 */ if (!fZ) goto L_004229d7;
L_00422860:; BB(0x00422860);
    /* 00422860: mov dword ptr [ebp + 0x684], 0 */ W32((u32)(r_ebp+0x684u), 0x0u);
    /* 0042286a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0042286c: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0042286e: jmp 0x422851 */ goto L_00422851;
L_004229cf:; BB(0x004229cf);
    /* 004229cf: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004229d2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004229d3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004229d4: ret 4 */ FN_RET(0x004227f9); r_esp += 8; return;
L_004229d7:; BB(0x004229d7);
    /* 004229d7: cmp eax, 0x21 */ {  u32 a = r_eax; u32 b = 0x21u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004229da: je 0x4229f2 */ if (fZ) goto L_004229f2;
L_004229dc:; BB(0x004229dc);
    /* 004229dc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004229dd: mov dword ptr [ebp + 0x684], ecx */ W32((u32)(r_ebp+0x684u), r_ecx);
    /* 004229e3: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004229e5: call 0x41a808 */ r_esp -= 4; W32(r_esp, 0x4229eau); f_0041a808();
    /* 004229ea: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004229ed: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004229ee: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004229ef: ret 4 */ FN_RET(0x004227f9); r_esp += 8; return;
L_004229f2:; BB(0x004229f2);
    /* 004229f2: mov dword ptr [ebp + 0x684], 0x32 */ W32((u32)(r_ebp+0x684u), 0x32u);
    /* 004229fc: mov ecx, 0x32 */ r_ecx = 0x32u;
    /* 00422a01: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00422a03: jmp 0x422851 */ goto L_00422851;
}

void f_00422870(void)
{
    FN_ENTER(0x00422870);
    /* 00422870: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00422873: mov eax, 7 */ r_eax = 0x7u;
    /* 00422878: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 0042287f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00422881: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x422887u); call_ind(t); }
    /* 00422887: mov dword ptr [ebp + 0x3ec], 0 */ W32((u32)(r_ebp+0x3ecu), 0x0u);
    /* 00422891: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00422893: call 0x419130 */ r_esp -= 4; W32(r_esp, 0x422898u); f_00419130();
    /* 00422898: mov eax, dword ptr [ebp + 0x3c8] */ r_eax = R32((u32)(r_ebp+0x3c8u));
    /* 0042289e: mov ecx, dword ptr [ebp + 0x68c] */ r_ecx = R32((u32)(r_ebp+0x68cu));
    /* 004228a4: mov dword ptr [ebp + 0x86c], 0 */ W32((u32)(r_ebp+0x86cu), 0x0u);
    /* 004228ae: and eax, 0xfffff37f */ {  u32 a = r_eax; u32 b = 0xfffff37fu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004228b3: or eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004228b8: mov dword ptr [ebp + 0x3c8], eax */ W32((u32)(r_ebp+0x3c8u), r_eax);
    /* 004228be: call 0x426b98 */ r_esp -= 4; W32(r_esp, 0x4228c3u); f_00426b98();
    /* 004228c3: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004228c6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004228c7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004228c8: ret 4 */ FN_RET(0x00422870); r_esp += 8; return;
}

void f_004228cb(void)
{
    FN_ENTER(0x004228cb);
    /* 004228cb: mov eax, dword ptr [ebp + 0xb0] */ r_eax = R32((u32)(r_ebp+0xb0u));
    /* 004228d1: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004228d3: je 0x4229cf */ if (fZ) goto L_004229cf;
L_004228d9:; BB(0x004228d9);
    /* 004228d9: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004228db: push 0x17 */ { u32 v = 0x17u; r_esp -= 4; W32(r_esp, v); }
    /* 004228dd: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 004228e0: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004228e2: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4228e8u); call_ind(t); }
    /* 004228e8: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 004228ec: mov ebx, dword ptr [ebp + 0x684] */ r_ebx = R32((u32)(r_ebp+0x684u));
    /* 004228f2: mov byte ptr [esp], 0x12 */ W8((u32)(r_esp), 0x12u);
    /* 004228f6: mov edx, 0x17 */ r_edx = 0x17u;
    /* 004228fb: mov byte ptr [esp + 1], 5 */ W8((u32)(r_esp+0x1u), 0x5u);
    /* 00422900: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 00422905: movzx eax, word ptr [ebp + 0x394] */ r_eax = (u32)R16((u32)(r_ebp+0x394u));
    /* 0042290c: mov word ptr [esp + 4], dx */ W16((u32)(r_esp+0x4u), (u16)r_edx);
    /* 00422911: mov word ptr [esp + 6], bx */ W16((u32)(r_esp+0x6u), (u16)r_ebx);
    /* 00422916: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0042291a: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0042291d: mov eax, dword ptr [ebp + 0x698] */ r_eax = R32((u32)(r_ebp+0x698u));
    /* 00422923: mov ebp, dword ptr [ebp + 0x69c] */ r_ebp = R32((u32)(r_ebp+0x69cu));
    /* 00422929: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0042292d: mov dword ptr [esp + 0x10], ebp */ W32((u32)(r_esp+0x10u), r_ebp);
    /* 00422931: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x422936u); f_008003e0();
    /* 00422936: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00422939: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042293a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042293b: ret 4 */ FN_RET(0x004228cb); r_esp += 8; return;
L_004229cf:; BB(0x004229cf);
    /* 004229cf: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004229d2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004229d3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004229d4: ret 4 */ FN_RET(0x004228cb); r_esp += 8; return;
}

void f_0042293e(void)
{
    FN_ENTER(0x0042293e);
    /* 0042293e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00422940: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x422945u); f_007aa094();
    /* 00422945: add dword ptr [ebp + 0x86c], 1 */ { u32 ad = (u32)(r_ebp+0x86cu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0042294c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042294e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00422950: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x422955u); f_007aaa30();
    /* 00422955: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00422957: jne 0x422969 */ if (!fZ) goto L_00422969;
L_00422959:; BB(0x00422959);
    /* 00422959: push 0x41400000 */ { u32 v = 0x41400000u; r_esp -= 4; W32(r_esp, v); }
    /* 0042295e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00422960: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x422965u); f_007aaa30();
    /* 00422965: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00422967: je 0x422981 */ if (fZ) goto L_00422981;
L_00422969:; BB(0x00422969);
    /* 00422969: lea edx, [ebp + 0x644] */ r_edx = (u32)(r_ebp+0x644u);
    /* 0042296f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00422971: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00422972: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00422973: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00422974: push 0x31d */ { u32 v = 0x31du; r_esp -= 4; W32(r_esp, v); }
    /* 00422979: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x42297eu); f_00814298();
    /* 0042297e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00422981:; BB(0x00422981);
    /* 00422981: mov eax, dword ptr [ebp + 0x86c] */ r_eax = R32((u32)(r_ebp+0x86cu));
    /* 00422987: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042298a: jle 0x4229cf */ if ((fZ||fS!=fO)) goto L_004229cf;
L_0042298c:; BB(0x0042298c);
    /* 0042298c: push 0x41200000 */ { u32 v = 0x41200000u; r_esp -= 4; W32(r_esp, v); }
    /* 00422991: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00422993: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x422998u); f_007aaa30();
    /* 00422998: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042299a: je 0x4229a9 */ if (fZ) goto L_004229a9;
L_0042299c:; BB(0x0042299c);
    /* 0042299c: mov ecx, dword ptr [ebp + 0x68c] */ r_ecx = R32((u32)(r_ebp+0x68cu));
    /* 004229a2: call 0x426b88 */ r_esp -= 4; W32(r_esp, 0x4229a7u); f_00426b88();
    /* 004229a7: jmp 0x4229c4 */ goto L_004229c4;
L_004229a9:; BB(0x004229a9);
    /* 004229a9: push 0x41b80000 */ { u32 v = 0x41b80000u; r_esp -= 4; W32(r_esp, v); }
    /* 004229ae: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004229b0: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x4229b5u); f_007aaa30();
    /* 004229b5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004229b7: je 0x4229c4 */ if (fZ) goto L_004229c4;
L_004229b9:; BB(0x004229b9);
    /* 004229b9: mov ecx, dword ptr [ebp + 0x68c] */ r_ecx = R32((u32)(r_ebp+0x68cu));
    /* 004229bf: call 0x426b98 */ r_esp -= 4; W32(r_esp, 0x4229c4u); f_00426b98();
L_004229c4:; BB(0x004229c4);
    /* 004229c4: mov ecx, dword ptr [ebp + 0x68c] */ r_ecx = R32((u32)(r_ebp+0x68cu));
    /* 004229ca: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004229cc: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x4229cfu); call_ind(t); }
L_004229cf:; BB(0x004229cf);
    /* 004229cf: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004229d2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004229d3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004229d4: ret 4 */ FN_RET(0x0042293e); r_esp += 8; return;
}

void f_004229cf(void)
{
    FN_ENTER(0x004229cf);
    /* 004229cf: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004229d2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004229d3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004229d4: ret 4 */ FN_RET(0x004229cf); r_esp += 8; return;
}

void f_00422a08(void) /* sub_422A08 */
{
    FN_ENTER(0x00422a08);
    /* 00422a08: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00422a09: mov ebp, esp */ r_ebp = r_esp;
    /* 00422a0b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00422a0d: push 0x8cd744 */ { u32 v = 0x8cd744u; r_esp -= 4; W32(r_esp, v); }
    /* 00422a12: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00422a18: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00422a19: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00422a20: sub esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00422a23: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00422a26: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 00422a29: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 00422a2c: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 00422a2f: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00422a32: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00422a35: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00422a38: ja 0x422e9f */ if ((!fC&&!fZ)) goto L_00422e9f;
L_00422a3e:; BB(0x00422a3e);
    /* 00422a3e: mov eax, dword ptr [eax*4 + 0x8fb6f4] */ r_eax = R32((u32)(r_eax*4+0x8fb6f4u));
    /* 00422a45: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_00422e9f:; BB(0x00422e9f);
    /* 00422e9f: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00422ea2: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00422ea5: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00422ea8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00422eab: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00422eb2: mov esp, ebp */ r_esp = r_ebp;
    /* 00422eb4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00422eb5: ret 4 */ FN_RET(0x00422a08); r_esp += 8; return;
}

void f_00422a47(void)
{
    FN_ENTER(0x00422a47);
    /* 00422a47: mov eax, ecx */ r_eax = r_ecx;
    /* 00422a49: mov edx, dword ptr [eax + 0x86c] */ r_edx = R32((u32)(r_eax+0x86cu));
    /* 00422a4f: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00422a52: je 0x422eb8 */ if (fZ) goto L_00422eb8;
L_00422a58:; BB(0x00422a58);
    /* 00422a58: jmp 0x422e9f */ goto L_00422e9f;
L_00422e9f:; BB(0x00422e9f);
    /* 00422e9f: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00422ea2: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00422ea5: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00422ea8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00422eab: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00422eb2: mov esp, ebp */ r_esp = r_ebp;
    /* 00422eb4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00422eb5: ret 4 */ FN_RET(0x00422a47); r_esp += 8; return;
L_00422eb8:; BB(0x00422eb8);
    /* 00422eb8: mov ebx, dword ptr [eax + 0x684] */ r_ebx = R32((u32)(r_eax+0x684u));
    /* 00422ebe: cmp ebx, 0x32 */ {  u32 a = r_ebx; u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00422ec1: jge 0x422edf */ if ((fS==fO)) goto L_00422edf;
L_00422ec3:; BB(0x00422ec3);
    /* 00422ec3: call 0x420a44 */ r_esp -= 4; W32(r_esp, 0x422ec8u); f_00420a44();
    /* 00422ec8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00422eca: jne 0x422ed3 */ if (!fZ) goto L_00422ed3;
L_00422ecc:; BB(0x00422ecc);
    /* 00422ecc: mov edx, 0x9a3cb0 */ r_edx = 0x9a3cb0u;
    /* 00422ed1: jmp 0x422efc */ goto L_00422efc;
L_00422ed3:; BB(0x00422ed3);
    /* 00422ed3: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00422ed6: jne 0x422efc */ if (!fZ) goto L_00422efc;
L_00422ed8:; BB(0x00422ed8);
    /* 00422ed8: mov edx, 0x9a3d28 */ r_edx = 0x9a3d28u;
    /* 00422edd: jmp 0x422efc */ goto L_00422efc;
L_00422edf:; BB(0x00422edf);
    /* 00422edf: add ebx, -0x32 */ {  u32 a = r_ebx; u32 b = 0xffffffceu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00422ee2: call 0x420a44 */ r_esp -= 4; W32(r_esp, 0x422ee7u); f_00420a44();
    /* 00422ee7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00422ee9: jne 0x422ef2 */ if (!fZ) goto L_00422ef2;
L_00422eeb:; BB(0x00422eeb);
    /* 00422eeb: mov edx, 0x9a3cf0 */ r_edx = 0x9a3cf0u;
    /* 00422ef0: jmp 0x422efc */ goto L_00422efc;
L_00422ef2:; BB(0x00422ef2);
    /* 00422ef2: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00422ef5: jne 0x422efc */ if (!fZ) goto L_00422efc;
L_00422ef7:; BB(0x00422ef7);
    /* 00422ef7: mov edx, 0x9a3d78 */ r_edx = 0x9a3d78u;
L_00422efc:; BB(0x00422efc);
    /* 00422efc: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00422eff: mov eax, dword ptr [eax + 0x684] */ r_eax = R32((u32)(r_eax+0x684u));
L_00422f05:; BB(0x00422f05);
    /* 00422f05: mov ecx, dword ptr [edx + ebx*4] */ r_ecx = R32((u32)(r_edx+r_ebx*4));
    /* 00422f08: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00422f0b: cmp ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00422f0e: jne 0x422f23 */ if (!fZ) goto L_00422f23;
L_00422f10:; BB(0x00422f10);
    /* 00422f10: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00422f13: mov dword ptr [ecx + 0x684], 0 */ W32((u32)(r_ecx+0x684u), 0x0u);
    /* 00422f1d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00422f1f: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00422f21: jmp 0x422f05 */ goto L_00422f05;
L_00422f23:; BB(0x00422f23);
    /* 00422f23: cmp ecx, 0x21 */ {  u32 a = r_ecx; u32 b = 0x21u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00422f26: je 0x422f3e */ if (fZ) goto L_00422f3e;
L_00422f28:; BB(0x00422f28);
    /* 00422f28: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00422f2b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00422f2c: mov dword ptr [edx + 0x684], eax */ W32((u32)(r_edx+0x684u), r_eax);
    /* 00422f32: mov ecx, edx */ r_ecx = r_edx;
    /* 00422f34: call 0x41a808 */ r_esp -= 4; W32(r_esp, 0x422f39u); f_0041a808();
    /* 00422f39: jmp 0x422e9f */ goto L_00422e9f;
L_00422f3e:; BB(0x00422f3e);
    /* 00422f3e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00422f41: mov dword ptr [ecx + 0x684], 0x32 */ W32((u32)(r_ecx+0x684u), 0x32u);
    /* 00422f4b: mov eax, 0x32 */ r_eax = 0x32u;
    /* 00422f50: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00422f52: jmp 0x422f05 */ goto L_00422f05;
}

void f_00422a5d(void)
{
    FN_ENTER(0x00422a5d);
    /* 00422a5d: call 0x41f21c */ r_esp -= 4; W32(r_esp, 0x422a62u); f_0041f21c();
    /* 00422a62: jmp 0x422e9f */ goto L_00422e9f;
L_00422e9f:; BB(0x00422e9f);
    /* 00422e9f: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00422ea2: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00422ea5: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00422ea8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00422eab: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00422eb2: mov esp, ebp */ r_esp = r_ebp;
    /* 00422eb4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00422eb5: ret 4 */ FN_RET(0x00422a5d); r_esp += 8; return;
}

void f_00422a67(void)
{
    FN_ENTER(0x00422a67);
    /* 00422a67: call 0x52126c */ r_esp -= 4; W32(r_esp, 0x422a6cu); f_0052126c();
    /* 00422a6c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00422a6e: je 0x422a7a */ if (fZ) goto L_00422a7a;
L_00422a70:; BB(0x00422a70);
    /* 00422a70: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00422a73: call 0x5213d8 */ r_esp -= 4; W32(r_esp, 0x422a78u); f_005213d8();
    /* 00422a78: jmp 0x422ac0 */ goto L_00422ac0;
L_00422a7a:; BB(0x00422a7a);
    /* 00422a7a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00422a7d: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 00422a80: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x422a85u); f_0082dcbc();
    /* 00422a85: fmul dword ptr [0xa436fc] */ ST(0) = ST(0) * R_F32((u32)(0xa436fcu));
    /* 00422a8b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00422a8e: fadd dword ptr [edx + 0x414] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x414u));
    /* 00422a94: mov eax, dword ptr [edx + 0x3c] */ r_eax = R32((u32)(r_edx+0x3cu));
    /* 00422a97: mov ecx, dword ptr [edx + 0x60] */ r_ecx = R32((u32)(r_edx+0x60u));
    /* 00422a9a: fstp dword ptr [edx + 0x39c] */ W_F32((u32)(r_edx+0x39cu), ST(0)); FPOP();
    /* 00422aa0: mov dword ptr [edx + 0x3a0], eax */ W32((u32)(r_edx+0x3a0u), r_eax);
    /* 00422aa6: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x422aabu); f_0082ddd8();
    /* 00422aab: fmul dword ptr [0xa436fc] */ ST(0) = ST(0) * R_F32((u32)(0xa436fcu));
    /* 00422ab1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00422ab4: fadd dword ptr [eax + 0x41c] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x41cu));
    /* 00422aba: fstp dword ptr [eax + 0x3a4] */ W_F32((u32)(r_eax+0x3a4u), ST(0)); FPOP();
L_00422ac0:; BB(0x00422ac0);
    /* 00422ac0: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00422ac3: call 0x4235f8 */ r_esp -= 4; W32(r_esp, 0x422ac8u); f_004235f8();
    /* 00422ac8: jmp 0x422e9f */ goto L_00422e9f;
L_00422e9f:; BB(0x00422e9f);
    /* 00422e9f: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00422ea2: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00422ea5: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00422ea8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00422eab: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00422eb2: mov esp, ebp */ r_esp = r_ebp;
    /* 00422eb4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00422eb5: ret 4 */ FN_RET(0x00422a67); r_esp += 8; return;
}

void f_00422acd(void)
{
    FN_ENTER(0x00422acd);
    /* 00422acd: mov eax, ecx */ r_eax = r_ecx;
    /* 00422acf: mov edx, dword ptr [eax + 0x8b4] */ r_edx = R32((u32)(r_eax+0x8b4u));
    /* 00422ad5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00422ad7: je 0x422af2 */ if (fZ) goto L_00422af2;
L_00422ad9:; BB(0x00422ad9);
    /* 00422ad9: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00422add: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00422ae2: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00422ae6: mov edx, ecx */ r_edx = r_ecx;
    /* 00422ae8: mov dword ptr [edx + 0x8b4], 0 */ W32((u32)(r_edx+0x8b4u), 0x0u);
L_00422af2:; BB(0x00422af2);
    /* 00422af2: mov eax, ecx */ r_eax = r_ecx;
    /* 00422af4: mov edx, dword ptr [eax + 0x8b8] */ r_edx = R32((u32)(r_eax+0x8b8u));
    /* 00422afa: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00422afc: je 0x422b17 */ if (fZ) goto L_00422b17;
L_00422afe:; BB(0x00422afe);
    /* 00422afe: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00422b02: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00422b07: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00422b0b: mov edx, ecx */ r_edx = r_ecx;
    /* 00422b0d: mov dword ptr [edx + 0x8b8], 0 */ W32((u32)(r_edx+0x8b8u), 0x0u);
L_00422b17:; BB(0x00422b17);
    /* 00422b17: mov eax, ecx */ r_eax = r_ecx;
    /* 00422b19: mov edx, dword ptr [eax + 0x8bc] */ r_edx = R32((u32)(r_eax+0x8bcu));
    /* 00422b1f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00422b21: je 0x422e9f */ if (fZ) goto L_00422e9f;
L_00422b27:; BB(0x00422b27);
    /* 00422b27: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00422b2b: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00422b30: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00422b34: mov edx, ecx */ r_edx = r_ecx;
    /* 00422b36: mov dword ptr [edx + 0x8bc], 0 */ W32((u32)(r_edx+0x8bcu), 0x0u);
    /* 00422b40: jmp 0x422e9f */ goto L_00422e9f;
L_00422e9f:; BB(0x00422e9f);
    /* 00422e9f: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00422ea2: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00422ea5: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00422ea8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00422eab: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00422eb2: mov esp, ebp */ r_esp = r_ebp;
    /* 00422eb4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00422eb5: ret 4 */ FN_RET(0x00422acd); r_esp += 8; return;
}

void f_00422b45(void)
{
    FN_ENTER(0x00422b45);
    /* 00422b45: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00422b47: mov eax, 4 */ r_eax = 0x4u;
    /* 00422b4c: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 00422b53: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x422b59u); call_ind(t); }
    /* 00422b59: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00422b5c: mov dword ptr [ecx + 0x3ec], 0 */ W32((u32)(r_ecx+0x3ecu), 0x0u);
    /* 00422b66: call 0x419130 */ r_esp -= 4; W32(r_esp, 0x422b6bu); f_00419130();
    /* 00422b6b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00422b6e: mov eax, dword ptr [ecx + 0x3c8] */ r_eax = R32((u32)(r_ecx+0x3c8u));
    /* 00422b74: mov dword ptr [ecx + 0x870], 2 */ W32((u32)(r_ecx+0x870u), 0x2u);
    /* 00422b7e: and eax, 0xfffff17f */ {  u32 a = r_eax; u32 b = 0xfffff17fu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00422b83: mov dword ptr [ecx + 0x3c8], eax */ W32((u32)(r_ecx+0x3c8u), r_eax);
    /* 00422b89: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00422b8b: mov dword ptr [ecx + 0x86c], edx */ W32((u32)(r_ecx+0x86cu), r_edx);
    /* 00422b91: mov dword ptr [ecx + 0x874], edx */ W32((u32)(r_ecx+0x874u), r_edx);
    /* 00422b97: mov dword ptr [ecx + 0x8b4], edx */ W32((u32)(r_ecx+0x8b4u), r_edx);
    /* 00422b9d: mov dword ptr [ecx + 0x8b8], edx */ W32((u32)(r_ecx+0x8b8u), r_edx);
    /* 00422ba3: mov dword ptr [ecx + 0x8bc], edx */ W32((u32)(r_ecx+0x8bcu), r_edx);
    /* 00422ba9: jmp 0x422e9f */ goto L_00422e9f;
L_00422e9f:; BB(0x00422e9f);
    /* 00422e9f: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00422ea2: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00422ea5: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00422ea8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00422eab: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00422eb2: mov esp, ebp */ r_esp = r_ebp;
    /* 00422eb4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00422eb5: ret 4 */ FN_RET(0x00422b45); r_esp += 8; return;
}

void f_00422bae(void)
{
    FN_ENTER(0x00422bae);
    /* 00422bae: mov eax, ecx */ r_eax = r_ecx;
    /* 00422bb0: mov edx, dword ptr [eax + 0x86c] */ r_edx = R32((u32)(r_eax+0x86cu));
    /* 00422bb6: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00422bb9: je 0x422f54 */ if (fZ) goto L_00422f54;
L_00422bbf:; BB(0x00422bbf);
    /* 00422bbf: jmp 0x422e9f */ goto L_00422e9f;
L_00422e9f:; BB(0x00422e9f);
    /* 00422e9f: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00422ea2: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00422ea5: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00422ea8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00422eab: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00422eb2: mov esp, ebp */ r_esp = r_ebp;
    /* 00422eb4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00422eb5: ret 4 */ FN_RET(0x00422bae); r_esp += 8; return;
L_00422f54:; BB(0x00422f54);
    /* 00422f54: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00422f56: push 0x17 */ { u32 v = 0x17u; r_esp -= 4; W32(r_esp, v); }
    /* 00422f58: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00422f5a: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x422f60u); call_ind(t); }
    /* 00422f60: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00422f63: movzx eax, word ptr [ecx + 0x1c] */ r_eax = (u32)R16((u32)(r_ecx+0x1cu));
    /* 00422f67: mov ebx, dword ptr [ecx + 0x684] */ r_ebx = R32((u32)(r_ecx+0x684u));
    /* 00422f6d: movzx esi, word ptr [ecx + 0x394] */ r_esi = (u32)R16((u32)(r_ecx+0x394u));
    /* 00422f74: mov edi, dword ptr [ecx + 0x698] */ r_edi = R32((u32)(r_ecx+0x698u));
    /* 00422f7a: mov edx, 0x17 */ r_edx = 0x17u;
    /* 00422f7f: mov byte ptr [ebp - 0x64], 0x12 */ W8((u32)(r_ebp+0xffffff9cu), 0x12u);
    /* 00422f83: mov word ptr [ebp - 0x62], ax */ W16((u32)(r_ebp+0xffffff9eu), (u16)r_eax);
    /* 00422f87: mov eax, dword ptr [ecx + 0x69c] */ r_eax = R32((u32)(r_ecx+0x69cu));
    /* 00422f8d: mov byte ptr [ebp - 0x63], 5 */ W8((u32)(r_ebp+0xffffff9du), 0x5u);
    /* 00422f91: mov word ptr [ebp - 0x60], dx */ W16((u32)(r_ebp+0xffffffa0u), (u16)r_edx);
    /* 00422f95: mov word ptr [ebp - 0x5e], bx */ W16((u32)(r_ebp+0xffffffa2u), (u16)r_ebx);
    /* 00422f99: mov dword ptr [ebp - 0x5c], esi */ W32((u32)(r_ebp+0xffffffa4u), r_esi);
    /* 00422f9c: mov dword ptr [ebp - 0x58], edi */ W32((u32)(r_ebp+0xffffffa8u), r_edi);
    /* 00422f9f: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 00422fa2: lea ecx, [ebp - 0x64] */ r_ecx = (u32)(r_ebp+0xffffff9cu);
    /* 00422fa5: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x422faau); f_008003e0();
    /* 00422faa: jmp 0x422e9f */ goto L_00422e9f;
}

void f_00422bc4(void)
{
    FN_ENTER(0x00422bc4);
    /* 00422bc4: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x422bc9u); f_007aa094();
    /* 00422bc9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00422bcc: mov eax, dword ptr [eax + 0x86c] */ r_eax = R32((u32)(r_eax+0x86cu));
    /* 00422bd2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00422bd4: je 0x422e19 */ if (fZ) goto L_00422e19;
L_00422bda:; BB(0x00422bda);
    /* 00422bda: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00422bdd: jne 0x422dad */ if (!fZ) goto L_00422dad;
L_00422be3:; BB(0x00422be3);
    /* 00422be3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00422be6: mov edx, dword ptr [eax + 0x874] */ r_edx = R32((u32)(r_eax+0x874u));
    /* 00422bec: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00422bef: mov dword ptr [eax + 0x874], edx */ W32((u32)(r_eax+0x874u), r_edx);
    /* 00422bf5: cmp edx, 0x78 */ {  u32 a = r_edx; u32 b = 0x78u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00422bf8: jl 0x422c9a */ if ((fS!=fO)) goto L_00422c9a;
L_00422bfe:; BB(0x00422bfe);
    /* 00422bfe: mov edx, eax */ r_edx = r_eax;
    /* 00422c00: mov eax, 6 */ r_eax = 0x6u;
    /* 00422c05: mov word ptr [edx + 0xb8], ax */ W16((u32)(r_edx+0xb8u), (u16)r_eax);
    /* 00422c0c: mov edx, dword ptr [edx + 0x8b4] */ r_edx = R32((u32)(r_edx+0x8b4u));
    /* 00422c12: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00422c14: je 0x422c30 */ if (fZ) goto L_00422c30;
L_00422c16:; BB(0x00422c16);
    /* 00422c16: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00422c1a: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00422c1f: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00422c23: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00422c26: mov dword ptr [edx + 0x8b4], 0 */ W32((u32)(r_edx+0x8b4u), 0x0u);
L_00422c30:; BB(0x00422c30);
    /* 00422c30: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00422c33: mov edx, dword ptr [eax + 0x8b8] */ r_edx = R32((u32)(r_eax+0x8b8u));
    /* 00422c39: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00422c3b: je 0x422c57 */ if (fZ) goto L_00422c57;
L_00422c3d:; BB(0x00422c3d);
    /* 00422c3d: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00422c41: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00422c46: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00422c4a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00422c4d: mov dword ptr [edx + 0x8b8], 0 */ W32((u32)(r_edx+0x8b8u), 0x0u);
L_00422c57:; BB(0x00422c57);
    /* 00422c57: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00422c5a: mov edx, dword ptr [eax + 0x8bc] */ r_edx = R32((u32)(r_eax+0x8bcu));
    /* 00422c60: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00422c62: je 0x422c7e */ if (fZ) goto L_00422c7e;
L_00422c64:; BB(0x00422c64);
    /* 00422c64: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00422c68: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00422c6d: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00422c71: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00422c74: mov dword ptr [edx + 0x8bc], 0 */ W32((u32)(r_edx+0x8bcu), 0x0u);
L_00422c7e:; BB(0x00422c7e);
    /* 00422c7e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00422c81: mov dword ptr [eax + 0x86c], 2 */ W32((u32)(r_eax+0x86cu), 0x2u);
    /* 00422c8b: mov dword ptr [eax + 0x870], 0 */ W32((u32)(r_eax+0x870u), 0x0u);
    /* 00422c95: jmp 0x422e9f */ goto L_00422e9f;
L_00422c9a:; BB(0x00422c9a);
    /* 00422c9a: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 00422ca0: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00422ca3: jne 0x422e9f */ if (!fZ) goto L_00422e9f;
L_00422ca9:; BB(0x00422ca9);
    /* 00422ca9: mov ecx, eax */ r_ecx = r_eax;
    /* 00422cab: lea edx, [ecx + 0x644] */ r_edx = (u32)(r_ecx+0x644u);
    /* 00422cb1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00422cb3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00422cb4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00422cb5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00422cb6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00422cb7: push 0x321 */ { u32 v = 0x321u; r_esp -= 4; W32(r_esp, v); }
    /* 00422cbc: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x422cc1u); f_008144b0();
    /* 00422cc1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00422cc4: lea ecx, [ebp - 0x50] */ r_ecx = (u32)(r_ebp+0xffffffb0u);
    /* 00422cc7: lea edx, [ebp - 0x48] */ r_edx = (u32)(r_ebp+0xffffffb8u);
    /* 00422cca: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00422ccb: lea ebx, [eax + 0x420] */ r_ebx = (u32)(r_eax+0x420u);
    /* 00422cd1: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00422cd4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00422cd5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00422cd6: call 0x7a8d98 */ r_esp -= 4; W32(r_esp, 0x422cdbu); f_007a8d98();
    /* 00422cdb: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00422cde: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00422ce1: mov edx, dword ptr [eax + 0x870] */ r_edx = R32((u32)(r_eax+0x870u));
    /* 00422ce7: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00422cea: mov dword ptr [eax + 0x870], edx */ W32((u32)(r_eax+0x870u), r_edx);
    /* 00422cf0: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00422cf3: jl 0x422d4d */ if ((fS!=fO)) goto L_00422d4d;
L_00422cf5:; BB(0x00422cf5);
    /* 00422cf5: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
    /* 00422cfc: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 00422cfe: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x422d03u); f_005caba4();
    /* 00422d03: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00422d04: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00422d07: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00422d09: je 0x422d39 */ if (fZ) goto L_00422d39;
L_00422d0b:; BB(0x00422d0b);
    /* 00422d0b: mov dword ptr [ebp - 0x44], 1 */ W32((u32)(r_ebp+0xffffffbcu), 0x1u);
    /* 00422d12: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00422d19: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00422d1c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00422d1d: lea edi, [edx + 0x3cc] */ r_edi = (u32)(r_edx+0x3ccu);
    /* 00422d23: lea esi, [edx + 0x414] */ r_esi = (u32)(r_edx+0x414u);
    /* 00422d29: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00422d2a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00422d2b: mov ecx, eax */ r_ecx = r_eax;
    /* 00422d2d: call 0x4264a4 */ r_esp -= 4; W32(r_esp, 0x422d32u); f_004264a4();
    /* 00422d32: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
L_00422d39:; BB(0x00422d39);
    /* 00422d39: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00422d40: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00422d43: mov dword ptr [eax + 0x870], 0 */ W32((u32)(r_eax+0x870u), 0x0u);
L_00422d4d:; BB(0x00422d4d);
    /* 00422d4d: mov ecx, dword ptr [eax + 0x8b4] */ r_ecx = R32((u32)(r_eax+0x8b4u));
    /* 00422d53: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00422d55: je 0x422fea */ if (fZ) goto L_00422fea;
L_00422d5b:; BB(0x00422d5b);
    /* 00422d5b: lea edx, [eax + 0x42c] */ r_edx = (u32)(r_eax+0x42cu);
    /* 00422d61: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00422d62: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x422d67u); f_00508db8();
    /* 00422d67: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00422d6a: lea eax, [ebp - 0x50] */ r_eax = (u32)(r_ebp+0xffffffb0u);
    /* 00422d6d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00422d6e: mov ecx, dword ptr [edx + 0x8b4] */ r_ecx = R32((u32)(r_edx+0x8b4u));
    /* 00422d74: call 0x508dd0 */ r_esp -= 4; W32(r_esp, 0x422d79u); f_00508dd0();
L_00422d79:; BB(0x00422d79);
    /* 00422d79: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00422d7c: mov ecx, dword ptr [eax + 0x8bc] */ r_ecx = R32((u32)(r_eax+0x8bcu));
    /* 00422d82: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00422d84: je 0x422faf */ if (fZ) goto L_00422faf;
L_00422d8a:; BB(0x00422d8a);
    /* 00422d8a: lea edx, [eax + 0x42c] */ r_edx = (u32)(r_eax+0x42cu);
    /* 00422d90: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00422d91: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x422d96u); f_00508db8();
    /* 00422d96: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00422d99: lea eax, [ebp - 0x50] */ r_eax = (u32)(r_ebp+0xffffffb0u);
    /* 00422d9c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00422d9d: mov ecx, dword ptr [edx + 0x8bc] */ r_ecx = R32((u32)(r_edx+0x8bcu));
    /* 00422da3: call 0x508dd0 */ r_esp -= 4; W32(r_esp, 0x422da8u); f_00508dd0();
    /* 00422da8: jmp 0x422e9f */ goto L_00422e9f;
L_00422dad:; BB(0x00422dad);
    /* 00422dad: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00422db0: jne 0x422e9f */ if (!fZ) goto L_00422e9f;
L_00422db6:; BB(0x00422db6);
    /* 00422db6: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00422db9: mov edx, dword ptr [eax + 0x870] */ r_edx = R32((u32)(r_eax+0x870u));
    /* 00422dbf: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00422dc2: mov dword ptr [eax + 0x870], edx */ W32((u32)(r_eax+0x870u), r_edx);
    /* 00422dc8: cmp edx, 0x1e */ {  u32 a = r_edx; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00422dcb: jge 0x422de8 */ if ((fS==fO)) goto L_00422de8;
L_00422dcd:; BB(0x00422dcd);
    /* 00422dcd: mov ecx, eax */ r_ecx = r_eax;
    /* 00422dcf: lea edx, [ecx + 0x644] */ r_edx = (u32)(r_ecx+0x644u);
    /* 00422dd5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00422dd7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00422dd8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00422dd9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00422dda: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00422ddb: push 0x321 */ { u32 v = 0x321u; r_esp -= 4; W32(r_esp, v); }
    /* 00422de0: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x422de5u); f_008144b0();
    /* 00422de5: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00422de8:; BB(0x00422de8);
    /* 00422de8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00422deb: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 00422df1: test dl, 0x10 */ {  u32 a = (u8)r_edx; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00422df4: je 0x422dfd */ if (fZ) goto L_00422dfd;
L_00422df6:; BB(0x00422df6);
    /* 00422df6: mov eax, 1 */ r_eax = 0x1u;
    /* 00422dfb: jmp 0x422dff */ goto L_00422dff;
L_00422dfd:; BB(0x00422dfd);
    /* 00422dfd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00422dff:; BB(0x00422dff);
    /* 00422dff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00422e01: je 0x422e9f */ if (fZ) goto L_00422e9f;
L_00422e07:; BB(0x00422e07);
    /* 00422e07: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00422e0a: mov dword ptr [eax + 0x86c], 3 */ W32((u32)(r_eax+0x86cu), 0x3u);
    /* 00422e14: jmp 0x422e9f */ goto L_00422e9f;
L_00422e19:; BB(0x00422e19);
    /* 00422e19: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00422e1c: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x422e21u); f_00521410();
    /* 00422e21: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00422e24: call 0x423028 */ r_esp -= 4; W32(r_esp, 0x422e29u); f_00423028();
    /* 00422e29: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00422e2c: fld dword ptr [ecx + 0x3a8] */ FPUSH(R_F32((u32)(r_ecx+0x3a8u)));
    /* 00422e32: fld dword ptr [ecx + 0x3b0] */ FPUSH(R_F32((u32)(r_ecx+0x3b0u)));
    /* 00422e38: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 00422e3a: fmul qword ptr [0x8fb9a0] */ ST(0) = ST(0) * R_F64((u32)(0x8fb9a0u));
    /* 00422e40: fdiv qword ptr [0x8fb998] */ ST(0) = ST(0) / R_F64((u32)(0x8fb998u));
    /* 00422e46: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00422e49: fnstcw word ptr [ebp - 0x3c] */ W16((u32)(r_ebp+0xffffffc4u), fcw);
    /* 00422e4c: movzx eax, word ptr [ebp - 0x3c] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc4u));
    /* 00422e50: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00422e55: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00422e58: fldcw word ptr [ebp - 0x34] */ fcw = R16((u32)(r_ebp+0xffffffccu));
    /* 00422e5b: fistp dword ptr [ebp - 0x2c] */ W32((u32)(r_ebp+0xffffffd4u), (u32)fx_int32(ST(0))); FPOP();
    /* 00422e5e: fldcw word ptr [ebp - 0x3c] */ fcw = R16((u32)(r_ebp+0xffffffc4u));
    /* 00422e61: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00422e64: push 0xa0 */ { u32 v = 0xa0u; r_esp -= 4; W32(r_esp, v); }
    /* 00422e69: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00422e6a: push dword ptr [edx + 0x60] */ { u32 v = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 00422e6d: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x422e72u); f_007a8c74();
    /* 00422e72: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00422e75: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00422e78: mov ecx, dword ptr [edx + 0xb0] */ r_ecx = R32((u32)(r_edx+0xb0u));
    /* 00422e7e: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 00422e81: mov dword ptr [edx + 0x60], eax */ W32((u32)(r_edx+0x60u), r_eax);
    /* 00422e84: test cl, 0x10 */ {  u32 a = (u8)r_ecx; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00422e87: je 0x422e9f */ if (fZ) goto L_00422e9f;
L_00422e89:; BB(0x00422e89);
    /* 00422e89: mov dword ptr [edx + 0x86c], 1 */ W32((u32)(r_edx+0x86cu), 0x1u);
    /* 00422e93: mov eax, 5 */ r_eax = 0x5u;
    /* 00422e98: mov word ptr [edx + 0xb8], ax */ W16((u32)(r_edx+0xb8u), (u16)r_eax);
L_00422e9f:; BB(0x00422e9f);
    /* 00422e9f: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00422ea2: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00422ea5: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00422ea8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00422eab: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00422eb2: mov esp, ebp */ r_esp = r_ebp;
    /* 00422eb4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00422eb5: ret 4 */ FN_RET(0x00422bc4); r_esp += 8; return;
L_00422faf:; BB(0x00422faf);
    /* 00422faf: lea ecx, [ebp - 0x50] */ r_ecx = (u32)(r_ebp+0xffffffb0u);
    /* 00422fb2: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00422fb4: mov edx, dword ptr [eax + 0x780] */ r_edx = R32((u32)(r_eax+0x780u));
    /* 00422fba: lea ebx, [eax + 0x414] */ r_ebx = (u32)(r_eax+0x414u);
    /* 00422fc0: push dword ptr [edx + 0x14] */ { u32 v = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 00422fc3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00422fc4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00422fc5: call 0x509dc4 */ r_esp -= 4; W32(r_esp, 0x422fcau); f_00509dc4();
    /* 00422fca: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00422fcd: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00422fd0: mov dword ptr [edx + 0x8bc], eax */ W32((u32)(r_edx+0x8bcu), r_eax);
    /* 00422fd6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00422fd8: je 0x422e9f */ if (fZ) goto L_00422e9f;
L_00422fde:; BB(0x00422fde);
    /* 00422fde: mov ecx, eax */ r_ecx = r_eax;
    /* 00422fe0: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x422fe5u); f_00508f48();
    /* 00422fe5: jmp 0x422e9f */ goto L_00422e9f;
L_00422fea:; BB(0x00422fea);
    /* 00422fea: lea ecx, [ebp - 0x50] */ r_ecx = (u32)(r_ebp+0xffffffb0u);
    /* 00422fed: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00422fef: mov edx, dword ptr [eax + 0x780] */ r_edx = R32((u32)(r_eax+0x780u));
    /* 00422ff5: lea ebx, [eax + 0x414] */ r_ebx = (u32)(r_eax+0x414u);
    /* 00422ffb: push dword ptr [edx + 0x10] */ { u32 v = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00422ffe: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00422fff: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00423000: call 0x509dc4 */ r_esp -= 4; W32(r_esp, 0x423005u); f_00509dc4();
    /* 00423005: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00423008: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0042300b: mov dword ptr [edx + 0x8b4], eax */ W32((u32)(r_edx+0x8b4u), r_eax);
    /* 00423011: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00423013: je 0x422d79 */ if (fZ) goto L_00422d79;
L_00423019:; BB(0x00423019);
    /* 00423019: mov ecx, eax */ r_ecx = r_eax;
    /* 0042301b: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x423020u); f_00508f48();
    /* 00423020: jmp 0x422d79 */ goto L_00422d79;
}

void f_00422e9f(void)
{
    FN_ENTER(0x00422e9f);
    /* 00422e9f: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00422ea2: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00422ea5: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00422ea8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00422eab: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00422eb2: mov esp, ebp */ r_esp = r_ebp;
    /* 00422eb4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00422eb5: ret 4 */ FN_RET(0x00422e9f); r_esp += 8; return;
}

