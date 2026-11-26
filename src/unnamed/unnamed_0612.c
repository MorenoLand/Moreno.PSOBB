#include "protos.h"

void f_006121ec(void) /* sub_6121EC */
{
    FN_ENTER(0x006121ec);
    /* 006121ec: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006121ed: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006121ee: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006121f1: mov esi, ecx */ r_esi = r_ecx;
    /* 006121f3: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006121f4: call 0x4fbf00 */ r_esp -= 4; W32(r_esp, 0x6121f9u); f_004fbf00();
    /* 006121f9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006121fa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006121fc: je 0x6122f4 */ if (fZ) goto L_006122f4;
L_00612202:; BB(0x00612202);
    /* 00612202: fild dword ptr [esi + 0x84] */ FPUSH((long double)(i32)R32((u32)(r_esi+0x84u)));
    /* 00612208: fild dword ptr [esi + 0x88] */ FPUSH((long double)(i32)R32((u32)(r_esi+0x88u)));
    /* 0061220e: fild dword ptr [esi + 0x5c] */ FPUSH((long double)(i32)R32((u32)(r_esi+0x5cu)));
    /* 00612211: fld dword ptr [0x92fdc8] */ FPUSH(R_F32((u32)(0x92fdc8u)));
    /* 00612217: mov eax, dword ptr [esi + 0x68] */ r_eax = R32((u32)(r_esi+0x68u));
    /* 0061221a: mov edx, dword ptr [esi + 0x6c] */ r_edx = R32((u32)(r_esi+0x6cu));
    /* 0061221d: fdiv st(3), st(0) */ ST(3) = ST(3) / ST(0);
    /* 0061221f: fdiv st(2), st(0) */ ST(2) = ST(2) / ST(0);
    /* 00612221: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 00612223: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00612225: fstp dword ptr [esi + 0x348] */ W_F32((u32)(r_esi+0x348u), ST(0)); FPOP();
    /* 0061222b: fstp dword ptr [esi + 0x34c] */ W_F32((u32)(r_esi+0x34cu), ST(0)); FPOP();
    /* 00612231: fstp qword ptr [esp + 8] */ W_F64((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00612235: mov dword ptr [esp], 0x130018 */ W32((u32)(r_esp), 0x130018u);
    /* 0061223c: mov dword ptr [esi + 0x340], eax */ W32((u32)(r_esi+0x340u), r_eax);
    /* 00612242: mov dword ptr [esi + 0x344], edx */ W32((u32)(r_esi+0x344u), r_edx);
    /* 00612248: mov dword ptr [esp + 4], 0x92fde8 */ W32((u32)(r_esp+0x4u), 0x92fde8u);
    /* 00612250: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x612255u); f_0061cdb0();
    /* 00612255: fild dword ptr [esi + 0x60] */ FPUSH((long double)(i32)R32((u32)(r_esi+0x60u)));
    /* 00612258: fdiv dword ptr [0x92fdc8] */ ST(0) = ST(0) / R_F32((u32)(0x92fdc8u));
    /* 0061225e: fstp qword ptr [esp + 8] */ W_F64((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00612262: mov dword ptr [esp], 0x130019 */ W32((u32)(r_esp), 0x130019u);
    /* 00612269: mov dword ptr [esp + 4], 0x92fdfc */ W32((u32)(r_esp+0x4u), 0x92fdfcu);
    /* 00612271: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x612276u); f_0061cdb0();
    /* 00612276: fild dword ptr [esi + 0x64] */ FPUSH((long double)(i32)R32((u32)(r_esi+0x64u)));
    /* 00612279: fdiv dword ptr [0x92fdc8] */ ST(0) = ST(0) / R_F32((u32)(0x92fdc8u));
    /* 0061227f: fstp qword ptr [esp + 8] */ W_F64((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00612283: mov dword ptr [esp], 0x13001a */ W32((u32)(r_esp), 0x13001au);
    /* 0061228a: mov dword ptr [esp + 4], 0x92fe10 */ W32((u32)(r_esp+0x4u), 0x92fe10u);
    /* 00612292: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x612297u); f_0061cdb0();
    /* 00612297: push 0x92fe24 */ { u32 v = 0x92fe24u; r_esp -= 4; W32(r_esp, v); }
    /* 0061229c: push 0x13001c */ { u32 v = 0x13001cu; r_esp -= 4; W32(r_esp, v); }
    /* 006122a1: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x6122a6u); f_0061cdb0();
    /* 006122a6: push 0x92fe34 */ { u32 v = 0x92fe34u; r_esp -= 4; W32(r_esp, v); }
    /* 006122ab: push 0x13001d */ { u32 v = 0x13001du; r_esp -= 4; W32(r_esp, v); }
    /* 006122b0: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x6122b5u); f_0061cdb0();
    /* 006122b5: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006122b8: fld dword ptr [esi + 0x348] */ FPUSH(R_F32((u32)(r_esi+0x348u)));
    /* 006122be: fstp qword ptr [esp + 8] */ W_F64((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 006122c2: mov dword ptr [esp], 0x130020 */ W32((u32)(r_esp), 0x130020u);
    /* 006122c9: mov dword ptr [esp + 4], 0x92fe48 */ W32((u32)(r_esp+0x4u), 0x92fe48u);
    /* 006122d1: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x6122d6u); f_0061cdb0();
    /* 006122d6: fld dword ptr [esi + 0x34c] */ FPUSH(R_F32((u32)(r_esi+0x34cu)));
    /* 006122dc: fstp qword ptr [esp + 8] */ W_F64((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 006122e0: mov dword ptr [esp], 0x130021 */ W32((u32)(r_esp), 0x130021u);
    /* 006122e7: mov dword ptr [esp + 4], 0x92fe60 */ W32((u32)(r_esp+0x4u), 0x92fe60u);
    /* 006122ef: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x6122f4u); f_0061cdb0();
L_006122f4:; BB(0x006122f4);
    /* 006122f4: push 0x9ff9d0 */ { u32 v = 0x9ff9d0u; r_esp -= 4; W32(r_esp, v); }
    /* 006122f9: push dword ptr [esi + 0x348] */ { u32 v = R32((u32)(r_esi+0x348u)); r_esp -= 4; W32(r_esp, v); }
    /* 006122ff: lea edi, [esi + 0x38] */ r_edi = (u32)(r_esi+0x38u);
    /* 00612302: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00612303: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x612308u); f_0061cdb0();
    /* 00612308: push 0x9ff9f0 */ { u32 v = 0x9ff9f0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061230d: push dword ptr [esi + 0x340] */ { u32 v = R32((u32)(r_esi+0x340u)); r_esp -= 4; W32(r_esp, v); }
    /* 00612313: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00612314: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x612319u); f_0061cdb0();
    /* 00612319: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0061231c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0061231d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0061231e: ret  */ FN_RET(0x006121ec); r_esp += 4; return;
}

void f_00612320(void) /* sub_612320 */
{
    FN_ENTER(0x00612320);
    /* 00612320: mov dword ptr [0xa8ea28], 0x3f800000 */ W32((u32)(0xa8ea28u), 0x3f800000u);
    /* 0061232a: mov dword ptr [0xa8ea2c], 0x41000000 */ W32((u32)(0xa8ea2cu), 0x41000000u);
    /* 00612334: mov dword ptr [0xa8ea30], 0x3fc00000 */ W32((u32)(0xa8ea30u), 0x3fc00000u);
    /* 0061233e: ret  */ FN_RET(0x00612320); r_esp += 4; return;
}

void f_00612340(void) /* sub_612340 */
{
    FN_ENTER(0x00612340);
    /* 00612340: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00612341: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00612343: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00612345: call 0x612364 */ r_esp -= 4; W32(r_esp, 0x61234au); f_00612364();
    /* 0061234a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0061234e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00612350: jne 0x612356 */ if (!fZ) goto L_00612356;
L_00612352:; BB(0x00612352);
    /* 00612352: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00612353: ret 4 */ FN_RET(0x00612340); r_esp += 8; return;
L_00612356:; BB(0x00612356);
    /* 00612356: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00612357: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x61235cu); f_005c2f74();
    /* 0061235c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061235d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0061235e: ret 4 */ FN_RET(0x00612340); r_esp += 8; return;
}

void f_00612364(void) /* sub_612364 */
{
    FN_ENTER(0x00612364);
    /* 00612364: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00612365: mov ebp, esp */ r_ebp = r_esp;
    /* 00612367: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00612369: push 0x8e0eec */ { u32 v = 0x8e0eecu; r_esp -= 4; W32(r_esp, v); }
    /* 0061236e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00612374: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00612375: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0061237c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061237f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00612382: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00612385: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00612388: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0061238b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0061238e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00612395: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00612398: mov dword ptr [eax], 0xb24dc0 */ W32((u32)(r_eax), 0xb24dc0u);
    /* 0061239e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061239f: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x6123a4u); f_007b4e84();
    /* 006123a4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006123a5: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006123a8: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x6123adu); f_007b9c8c();
    /* 006123ad: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006123b4: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006123b7: call 0x770660 */ r_esp -= 4; W32(r_esp, 0x6123bcu); f_00770660();
    /* 006123bc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006123bf: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006123c6: mov esp, ebp */ r_esp = r_ebp;
    /* 006123c8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006123c9: ret  */ FN_RET(0x00612364); r_esp += 4; return;
}

void f_006123cc(void) /* sub_6123CC */
{
    FN_ENTER(0x006123cc);
    /* 006123cc: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006123d0: call 0x6123e0 */ r_esp -= 4; W32(r_esp, 0x6123d5u); f_006123e0();
    /* 006123d5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006123d7: fld dword ptr [0x92fe9c] */ FPUSH(R_F32((u32)(0x92fe9cu)));
    /* 006123dd: ret 8 */ FN_RET(0x006123cc); r_esp += 12; return;
}

void f_006123e0(void) /* sub_6123E0 */
{
    FN_ENTER(0x006123e0);
    /* 006123e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006123e1: mov ebp, esp */ r_ebp = r_esp;
    /* 006123e3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006123e5: push 0x8e0f2e */ { u32 v = 0x8e0f2eu; r_esp -= 4; W32(r_esp, v); }
    /* 006123ea: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006123f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006123f1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006123f8: sub esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006123fb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006123fe: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 00612401: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 00612404: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 00612407: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0061240a: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0061240d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061240f: je 0x612426 */ if (fZ) goto L_00612426;
L_00612411:; BB(0x00612411);
    /* 00612411: movzx eax, word ptr [edx + 0x1c] */ r_eax = (u32)R16((u32)(r_edx+0x1cu));
    /* 00612415: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00612418: jge 0x612426 */ if ((fS==fO)) goto L_00612426;
L_0061241a:; BB(0x0061241a);
    /* 0061241a: movsx eax, word ptr [edx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x32cu));
    /* 00612421: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00612424: je 0x612467 */ if (fZ) goto L_00612467;
L_00612426:; BB(0x00612426);
    /* 00612426: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00612429: push 0x1d0 */ { u32 v = 0x1d0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061242e: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00612431: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00612434: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00612435: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x61243au); f_0050b510();
    /* 0061243a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0061243d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0061243f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00612440: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x612445u); f_0050b510();
    /* 00612445: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00612448: fld dword ptr [0x92fe98] */ FPUSH(R_F32((u32)(0x92fe98u)));
    /* 0061244e: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00612451: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00612454: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00612457: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061245a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00612461: mov esp, ebp */ r_esp = r_ebp;
    /* 00612463: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00612464: ret 4 */ FN_RET(0x006123e0); r_esp += 8; return;
L_00612467:; BB(0x00612467);
    /* 00612467: mov eax, ecx */ r_eax = r_ecx;
    /* 00612469: mov eax, dword ptr [eax + 0x354] */ r_eax = R32((u32)(r_eax+0x354u));
    /* 0061246f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00612471: jl 0x6124a1 */ if ((fS!=fO)) goto L_006124a1;
L_00612473:; BB(0x00612473);
    /* 00612473: cmp eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00612478: jge 0x6124a1 */ if ((fS==fO)) goto L_006124a1;
L_0061247a:; BB(0x0061247a);
    /* 0061247a: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 0061247d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061247e: call 0x816eec */ r_esp -= 4; W32(r_esp, 0x612483u); f_00816eec();
    /* 00612483: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00612484: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00612487: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00612489: jne 0x6124a1 */ if (!fZ) goto L_006124a1;
L_0061248b:; BB(0x0061248b);
    /* 0061248b: fld dword ptr [0x92fe98] */ FPUSH(R_F32((u32)(0x92fe98u)));
    /* 00612491: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00612494: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0061249b: mov esp, ebp */ r_esp = r_ebp;
    /* 0061249d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061249e: ret 4 */ FN_RET(0x006123e0); r_esp += 8; return;
L_006124a1:; BB(0x006124a1);
    /* 006124a1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006124a4: mov eax, dword ptr [eax + 0x344] */ r_eax = R32((u32)(r_eax+0x344u));
    /* 006124aa: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006124ad: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006124af: jle 0x612553 */ if ((fZ||fS!=fO)) goto L_00612553;
L_006124b5:; BB(0x006124b5);
    /* 006124b5: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006124b8: movsx edx, word ptr [ecx + 0x32e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 006124bf: mov dword ptr [ecx + 0x344], eax */ W32((u32)(r_ecx+0x344u), r_eax);
    /* 006124c5: mov ecx, dword ptr [ecx + 0x80] */ r_ecx = R32((u32)(r_ecx+0x80u));
    /* 006124cb: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006124cd: je 0x6124f9 */ if (fZ) goto L_006124f9;
L_006124cf:; BB(0x006124cf);
    /* 006124cf: movsx ebx, word ptr [ecx + 4] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_ecx+0x4u));
    /* 006124d3: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006124d5: jl 0x6124f9 */ if ((fS!=fO)) goto L_006124f9;
L_006124d7:; BB(0x006124d7);
    /* 006124d7: cmp ebx, 0xb9f */ {  u32 a = r_ebx; u32 b = 0xb9fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006124dd: jg 0x6124f9 */ if ((!fZ&&fS==fO)) goto L_006124f9;
L_006124df:; BB(0x006124df);
    /* 006124df: mov ecx, dword ptr [0xab02bc] */ r_ecx = R32((u32)(0xab02bcu));
    /* 006124e5: mov word ptr [ecx + ebx*4], dx */ W16((u32)(r_ecx+r_ebx*4), (u16)r_edx);
    /* 006124e9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006124eb: mov word ptr [ecx + ebx*4 + 2], ax */ W16((u32)(r_ecx+r_ebx*4+0x2u), (u16)r_eax);
    /* 006124f0: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 006124f3: mov ecx, dword ptr [ebx + 0x80] */ r_ecx = R32((u32)(r_ebx+0x80u));
L_006124f9:; BB(0x006124f9);
    /* 006124f9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006124fb: je 0x612426 */ if (fZ) goto L_00612426;
L_00612501:; BB(0x00612501);
    /* 00612501: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00612504: movzx esi, word ptr [ebx + 0x1c] */ r_esi = (u32)R16((u32)(r_ebx+0x1cu));
    /* 00612508: mov byte ptr [ebp - 0x5c], 0x91 */ W8((u32)(r_ebp+0xffffffa4u), 0x91u);
    /* 0061250c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0061250e: mov byte ptr [ebp - 0x5b], 5 */ W8((u32)(r_ebp+0xffffffa5u), 0x5u);
    /* 00612512: mov word ptr [ebp - 0x50], ax */ W16((u32)(r_ebp+0xffffffb0u), (u16)r_eax);
    /* 00612516: mov word ptr [ebp - 0x4e], ax */ W16((u32)(r_ebp+0xffffffb2u), (u16)r_eax);
    /* 0061251a: mov word ptr [ebp - 0x5a], si */ W16((u32)(r_ebp+0xffffffa6u), (u16)r_esi);
    /* 0061251e: mov dword ptr [ebp - 0x58], edx */ W32((u32)(r_ebp+0xffffffa8u), r_edx);
    /* 00612521: movsx edi, word ptr [ecx + 4] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ecx+0x4u));
    /* 00612525: mov ecx, dword ptr [0xaafca0] */ r_ecx = R32((u32)(0xaafca0u));
    /* 0061252b: mov edx, dword ptr [ebx + 0x344] */ r_edx = R32((u32)(r_ebx+0x344u));
    /* 00612531: mov dword ptr [ebp - 0x54], edi */ W32((u32)(r_ebp+0xffffffacu), r_edi);
    /* 00612534: mov word ptr [ebp - 0x50], ax */ W16((u32)(r_ebp+0xffffffb0u), (u16)r_eax);
    /* 00612538: mov word ptr [ebp - 0x4e], dx */ W16((u32)(r_ebp+0xffffffb2u), (u16)r_edx);
    /* 0061253c: mov byte ptr [ebp - 0x4a], al */ W8((u32)(r_ebp+0xffffffb6u), (u8)r_eax);
    /* 0061253f: mov word ptr [ebp - 0x4c], ax */ W16((u32)(r_ebp+0xffffffb4u), (u16)r_eax);
    /* 00612543: mov byte ptr [ebp - 0x49], cl */ W8((u32)(r_ebp+0xffffffb7u), (u8)r_ecx);
    /* 00612546: lea ecx, [ebp - 0x5c] */ r_ecx = (u32)(r_ebp+0xffffffa4u);
    /* 00612549: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x61254eu); f_008003e0();
    /* 0061254e: jmp 0x612426 */ goto L_00612426;
L_00612553:; BB(0x00612553);
    /* 00612553: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00612556: movsx edx, word ptr [eax + 0x32e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x32eu));
    /* 0061255d: mov esi, dword ptr [eax + 0x80] */ r_esi = R32((u32)(r_eax+0x80u));
    /* 00612563: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00612565: mov dword ptr [eax + 0x344], 0 */ W32((u32)(r_eax+0x344u), 0x0u);
    /* 0061256f: je 0x61259b */ if (fZ) goto L_0061259b;
L_00612571:; BB(0x00612571);
    /* 00612571: movsx ebx, word ptr [esi + 4] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_esi+0x4u));
    /* 00612575: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00612577: jl 0x61259b */ if ((fS!=fO)) goto L_0061259b;
L_00612579:; BB(0x00612579);
    /* 00612579: cmp ebx, 0xb9f */ {  u32 a = r_ebx; u32 b = 0xb9fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061257f: jg 0x61259b */ if ((!fZ&&fS==fO)) goto L_0061259b;
L_00612581:; BB(0x00612581);
    /* 00612581: mov ecx, dword ptr [0xab02bc] */ r_ecx = R32((u32)(0xab02bcu));
    /* 00612587: mov word ptr [ecx + ebx*4], dx */ W16((u32)(r_ecx+r_ebx*4), (u16)r_edx);
    /* 0061258b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0061258d: mov word ptr [ecx + ebx*4 + 2], ax */ W16((u32)(r_ecx+r_ebx*4+0x2u), (u16)r_eax);
    /* 00612592: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00612595: mov esi, dword ptr [ebx + 0x80] */ r_esi = R32((u32)(r_ebx+0x80u));
L_0061259b:; BB(0x0061259b);
    /* 0061259b: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061259d: je 0x612616 */ if (fZ) goto L_00612616;
L_0061259f:; BB(0x0061259f);
    /* 0061259f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006125a2: movzx ebx, word ptr [eax + 0x1c] */ r_ebx = (u32)R16((u32)(r_eax+0x1cu));
    /* 006125a6: mov edi, dword ptr [eax + 0x344] */ r_edi = R32((u32)(r_eax+0x344u));
    /* 006125ac: mov eax, dword ptr [eax + 0x34c] */ r_eax = R32((u32)(r_eax+0x34cu));
    /* 006125b2: mov word ptr [ebp - 0x46], bx */ W16((u32)(r_ebp+0xffffffbau), (u16)r_ebx);
    /* 006125b6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006125b8: mov byte ptr [ebp - 0x48], 0x91 */ W8((u32)(r_ebp+0xffffffb8u), 0x91u);
    /* 006125bc: mov ecx, 0 */ r_ecx = 0x0u;
    /* 006125c1: mov word ptr [ebp - 0x3c], cx */ W16((u32)(r_ebp+0xffffffc4u), (u16)r_ecx);
    /* 006125c5: mov byte ptr [ebp - 0x47], 5 */ W8((u32)(r_ebp+0xffffffb9u), 0x5u);
    /* 006125c9: mov word ptr [ebp - 0x3a], cx */ W16((u32)(r_ebp+0xffffffc6u), (u16)r_ecx);
    /* 006125cd: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 006125d0: movsx edx, word ptr [esi + 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x4u));
    /* 006125d4: mov esi, 1 */ r_esi = 0x1u;
    /* 006125d9: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 006125dc: mov word ptr [ebp - 0x3c], si */ W16((u32)(r_ebp+0xffffffc4u), (u16)r_esi);
    /* 006125e0: mov word ptr [ebp - 0x3a], di */ W16((u32)(r_ebp+0xffffffc6u), (u16)r_edi);
    /* 006125e4: jne 0x6125fd */ if (!fZ) goto L_006125fd;
L_006125e6:; BB(0x006125e6);
    /* 006125e6: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006125e9: mov eax, dword ptr [eax + 0x350] */ r_eax = R32((u32)(r_eax+0x350u));
    /* 006125ef: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006125f1: jl 0x6125fd */ if ((fS!=fO)) goto L_006125fd;
L_006125f3:; BB(0x006125f3);
    /* 006125f3: mov byte ptr [ebp - 0x36], 1 */ W8((u32)(r_ebp+0xffffffcau), 0x1u);
    /* 006125f7: mov word ptr [ebp - 0x38], ax */ W16((u32)(r_ebp+0xffffffc8u), (u16)r_eax);
    /* 006125fb: jmp 0x612606 */ goto L_00612606;
L_006125fd:; BB(0x006125fd);
    /* 006125fd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006125ff: mov byte ptr [ebp - 0x36], al */ W8((u32)(r_ebp+0xffffffcau), (u8)r_eax);
    /* 00612602: mov word ptr [ebp - 0x38], ax */ W16((u32)(r_ebp+0xffffffc8u), (u16)r_eax);
L_00612606:; BB(0x00612606);
    /* 00612606: mov eax, dword ptr [0xaafca0] */ r_eax = R32((u32)(0xaafca0u));
    /* 0061260b: mov byte ptr [ebp - 0x35], al */ W8((u32)(r_ebp+0xffffffcbu), (u8)r_eax);
    /* 0061260e: lea ecx, [ebp - 0x48] */ r_ecx = (u32)(r_ebp+0xffffffb8u);
    /* 00612611: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x612616u); f_008003e0();
L_00612616:; BB(0x00612616);
    /* 00612616: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00612619: mov edx, dword ptr [eax + 0x34c] */ r_edx = R32((u32)(r_eax+0x34cu));
    /* 0061261f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00612621: jle 0x612426 */ if ((fZ||fS!=fO)) goto L_00612426;
L_00612627:; BB(0x00612627);
    /* 00612627: mov eax, dword ptr [eax + 0x348] */ r_eax = R32((u32)(r_eax+0x348u));
    /* 0061262d: cmp eax, 0x64 */ {  u32 a = r_eax; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00612630: jl 0x6126c6 */ if ((fS!=fO)) goto L_006126c6;
L_00612636:; BB(0x00612636);
    /* 00612636: cmp eax, 0x3e8 */ {  u32 a = r_eax; u32 b = 0x3e8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061263b: jge 0x6126c6 */ if ((fS==fO)) goto L_006126c6;
L_00612641:; BB(0x00612641);
    /* 00612641: mov ecx, dword ptr [0xa95aa8] */ r_ecx = R32((u32)(0xa95aa8u));
    /* 00612647: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00612649: je 0x6126c6 */ if (fZ) goto L_006126c6;
L_0061264b:; BB(0x0061264b);
    /* 0061264b: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x612650u); f_008173b4();
    /* 00612650: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00612652: je 0x6126c6 */ if (fZ) goto L_006126c6;
L_00612654:; BB(0x00612654);
    /* 00612654: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 0061265b: push 0x198 */ { u32 v = 0x198u; r_esp -= 4; W32(r_esp, v); }
    /* 00612660: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x612665u); f_005caba4();
    /* 00612665: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00612668: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061266b: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0061266e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00612670: je 0x61274f */ if (fZ) goto L_0061274f;
L_00612676:; BB(0x00612676);
    /* 00612676: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 0061267d: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00612684: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00612687: push dword ptr [eax + 0x34c] */ { u32 v = R32((u32)(r_eax+0x34cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0061268d: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00612690: push dword ptr [0xa95aa8] */ { u32 v = R32((u32)(0xa95aa8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00612696: call 0x6bc800 */ r_esp -= 4; W32(r_esp, 0x61269bu); f_006bc800();
    /* 0061269b: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_006126a2:; BB(0x006126a2);
    /* 006126a2: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006126a9: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006126ac: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006126ae: je 0x612426 */ if (fZ) goto L_00612426;
L_006126b4:; BB(0x006126b4);
    /* 006126b4: push dword ptr [0xaca384] */ { u32 v = R32((u32)(0xaca384u)); r_esp -= 4; W32(r_esp, v); }
    /* 006126ba: mov ecx, eax */ r_ecx = r_eax;
    /* 006126bc: call 0x8172d4 */ r_esp -= 4; W32(r_esp, 0x6126c1u); f_008172d4();
    /* 006126c1: jmp 0x612426 */ goto L_00612426;
L_006126c6:; BB(0x006126c6);
    /* 006126c6: mov ecx, dword ptr [0xa95aa4] */ r_ecx = R32((u32)(0xa95aa4u));
    /* 006126cc: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006126ce: je 0x612426 */ if (fZ) goto L_00612426;
L_006126d4:; BB(0x006126d4);
    /* 006126d4: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x6126d9u); f_008173b4();
    /* 006126d9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006126db: je 0x612426 */ if (fZ) goto L_00612426;
L_006126e1:; BB(0x006126e1);
    /* 006126e1: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 006126e8: push 0x198 */ { u32 v = 0x198u; r_esp -= 4; W32(r_esp, v); }
    /* 006126ed: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6126f2u); f_005caba4();
    /* 006126f2: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006126f5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006126f8: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 006126fb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006126fd: je 0x612759 */ if (fZ) goto L_00612759;
L_006126ff:; BB(0x006126ff);
    /* 006126ff: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 00612706: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0061270d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00612710: push dword ptr [eax + 0x34c] */ { u32 v = R32((u32)(r_eax+0x34cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00612716: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00612719: push dword ptr [0xa95aa4] */ { u32 v = R32((u32)(0xa95aa4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061271f: call 0x6bc800 */ r_esp -= 4; W32(r_esp, 0x612724u); f_006bc800();
    /* 00612724: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_0061272b:; BB(0x0061272b);
    /* 0061272b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00612732: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00612735: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00612737: je 0x612426 */ if (fZ) goto L_00612426;
L_0061273d:; BB(0x0061273d);
    /* 0061273d: push dword ptr [0xaca384] */ { u32 v = R32((u32)(0xaca384u)); r_esp -= 4; W32(r_esp, v); }
    /* 00612743: mov ecx, eax */ r_ecx = r_eax;
    /* 00612745: call 0x8172d4 */ r_esp -= 4; W32(r_esp, 0x61274au); f_008172d4();
    /* 0061274a: jmp 0x612426 */ goto L_00612426;
L_0061274f:; BB(0x0061274f);
    /* 0061274f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00612751: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00612754: jmp 0x6126a2 */ goto L_006126a2;
L_00612759:; BB(0x00612759);
    /* 00612759: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0061275b: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0061275e: jmp 0x61272b */ goto L_0061272b;
}

void f_00612760(void) /* sub_612760 */
{
    FN_ENTER(0x00612760);
    /* 00612760: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00612764: call 0x6123e0 */ r_esp -= 4; W32(r_esp, 0x612769u); f_006123e0();
    /* 00612769: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0061276b: fld dword ptr [0x92fe94] */ FPUSH(R_F32((u32)(0x92fe94u)));
    /* 00612771: ret 0x18 */ FN_RET(0x00612760); r_esp += 28; return;
}

void f_00612774(void) /* sub_612774 */
{
    FN_ENTER(0x00612774);
    /* 00612774: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00612778: call 0x6123e0 */ r_esp -= 4; W32(r_esp, 0x61277du); f_006123e0();
    /* 0061277d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0061277f: fld dword ptr [0x92fe90] */ FPUSH(R_F32((u32)(0x92fe90u)));
    /* 00612785: ret 8 */ FN_RET(0x00612774); r_esp += 12; return;
}

void f_00612788(void)
{
    FN_ENTER(0x00612788);
    /* 00612788: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00612789: mov ebp, esp */ r_ebp = r_esp;
    /* 0061278b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0061278d: push 0x8e0f54 */ { u32 v = 0x8e0f54u; r_esp -= 4; W32(r_esp, v); }
    /* 00612792: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00612798: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00612799: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006127a0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006127a3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006127a6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006127a9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006127ac: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006127af: push 0x358 */ { u32 v = 0x358u; r_esp -= 4; W32(r_esp, v); }
    /* 006127b4: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 006127bb: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6127c0u); f_005caba4();
    /* 006127c0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006127c1: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006127c4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006127c6: je 0x6127f9 */ if (fZ) goto L_006127f9;
L_006127c8:; BB(0x006127c8);
    /* 006127c8: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 006127cf: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006127d6: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006127d9: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006127dc: call 0x612800 */ r_esp -= 4; W32(r_esp, 0x6127e1u); f_00612800();
    /* 006127e1: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006127e4: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_006127eb:; BB(0x006127eb);
    /* 006127eb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006127ee: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006127f5: mov esp, ebp */ r_esp = r_ebp;
    /* 006127f7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006127f8: ret  */ FN_RET(0x00612788); r_esp += 4; return;
L_006127f9:; BB(0x006127f9);
    /* 006127f9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006127fb: jmp 0x6127eb */ goto L_006127eb;
}

void f_00612800(void) /* sub_612800 */
{
    FN_ENTER(0x00612800);
    /* 00612800: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00612801: mov ebp, esp */ r_ebp = r_esp;
    /* 00612803: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00612805: push 0x8e0f70 */ { u32 v = 0x8e0f70u; r_esp -= 4; W32(r_esp, v); }
    /* 0061280a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00612810: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00612811: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00612818: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061281b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0061281e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00612821: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00612824: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00612827: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0061282a: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 00612830: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00612833: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00612836: call 0x770748 */ r_esp -= 4; W32(r_esp, 0x61283bu); f_00770748();
    /* 0061283b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00612842: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00612845: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00612848: mov dword ptr [ecx], 0xb24dc0 */ W32((u32)(r_ecx), 0xb24dc0u);
    /* 0061284e: mov eax, dword ptr [0x9c481c] */ r_eax = R32((u32)(0x9c481cu));
    /* 00612853: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00612854: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00612857: call dword ptr [0xb24dd4] */ { u32 t = R32((u32)(0xb24dd4u)); r_esp -= 4; W32(r_esp, 0x61285du); call_ind(t); }
    /* 0061285d: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00612860: call 0x77a1f4 */ r_esp -= 4; W32(r_esp, 0x612865u); f_0077a1f4();
    /* 00612865: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00612868: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0061286a: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 0061286d: or eax, 0x60000000 */ {  u32 a = r_eax; u32 b = 0x60000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00612872: push 0x9c4820 */ { u32 v = 0x9c4820u; r_esp -= 4; W32(r_esp, v); }
    /* 00612877: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 0061287a: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x61287fu); f_007b9a88();
    /* 0061287f: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00612882: push 0x718 */ { u32 v = 0x718u; r_esp -= 4; W32(r_esp, v); }
    /* 00612887: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00612889: call 0x7b52c4 */ r_esp -= 4; W32(r_esp, 0x61288eu); f_007b52c4();
    /* 0061288e: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00612891: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x612896u); f_007b4f54();
    /* 00612896: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00612899: mov dword ptr [ecx + 0x33c], 0x43fa0000 */ W32((u32)(r_ecx+0x33cu), 0x43fa0000u);
    /* 006128a3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006128a5: mov word ptr [ecx + 0x32e], ax */ W16((u32)(r_ecx+0x32eu), (u16)r_eax);
    /* 006128ac: mov dword ptr [ecx + 0x340], 0x42480000 */ W32((u32)(r_ecx+0x340u), 0x42480000u);
    /* 006128b6: call 0x6128d0 */ r_esp -= 4; W32(r_esp, 0x6128bbu); f_006128d0();
    /* 006128bb: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 006128be: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006128c1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006128c8: mov esp, ebp */ r_esp = r_ebp;
    /* 006128ca: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006128cb: ret 4 */ FN_RET(0x00612800); r_esp += 8; return;
}

void f_006128d0(void) /* sub_6128D0 */
{
    FN_ENTER(0x006128d0);
    /* 006128d0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006128d1: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006128d4: mov edi, ecx */ r_edi = r_ecx;
    /* 006128d6: mov ecx, dword ptr [edi + 0x84] */ r_ecx = R32((u32)(r_edi+0x84u));
    /* 006128dc: fld dword ptr [edi + 0x68] */ FPUSH(R_F32((u32)(r_edi+0x68u)));
    /* 006128df: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006128e2: mov edx, 0x100 */ r_edx = 0x100u;
    /* 006128e7: cmp ecx, 0x100 */ {  u32 a = r_ecx; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006128ed: mov eax, 1 */ r_eax = 0x1u;
    /* 006128f2: jl 0x6128f6 */ if ((fS!=fO)) goto L_006128f6;
L_006128f4:; BB(0x006128f4);
    /* 006128f4: mov ecx, edx */ r_ecx = r_edx;
L_006128f6:; BB(0x006128f6);
    /* 006128f6: mov edx, dword ptr [edi + 0x88] */ r_edx = R32((u32)(r_edi+0x88u));
    /* 006128fc: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006128ff: jg 0x612903 */ if ((!fZ&&fS==fO)) goto L_00612903;
L_00612901:; BB(0x00612901);
    /* 00612901: mov ecx, eax */ r_ecx = r_eax;
L_00612903:; BB(0x00612903);
    /* 00612903: mov dword ptr [edi + 0x344], ecx */ W32((u32)(r_edi+0x344u), r_ecx);
    /* 00612909: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0061290b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0061290d: jg 0x612911 */ if ((!fZ&&fS==fO)) goto L_00612911;
L_0061290f:; BB(0x0061290f);
    /* 0061290f: mov edx, eax */ r_edx = r_eax;
L_00612911:; BB(0x00612911);
    /* 00612911: mov dword ptr [edi + 0x348], edx */ W32((u32)(r_edi+0x348u), r_edx);
    /* 00612917: mov edx, dword ptr [edi + 0x8c] */ r_edx = R32((u32)(r_edi+0x8cu));
    /* 0061291d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0061291f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00612921: jg 0x612925 */ if ((!fZ&&fS==fO)) goto L_00612925;
L_00612923:; BB(0x00612923);
    /* 00612923: mov edx, eax */ r_edx = r_eax;
L_00612925:; BB(0x00612925);
    /* 00612925: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00612928: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0061292c: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00612931: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00612935: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00612939: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 0061293d: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00612940: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00612944: mov dword ptr [edi + 0x34c], edx */ W32((u32)(r_edi+0x34cu), r_edx);
    /* 0061294a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0061294c: jl 0x61295d */ if ((fS!=fO)) goto L_0061295d;
L_0061294e:; BB(0x0061294e);
    /* 0061294e: cmp eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00612953: jge 0x61295d */ if ((fS==fO)) goto L_0061295d;
L_00612955:; BB(0x00612955);
    /* 00612955: mov dword ptr [edi + 0x354], eax */ W32((u32)(r_edi+0x354u), r_eax);
    /* 0061295b: jmp 0x612967 */ goto L_00612967;
L_0061295d:; BB(0x0061295d);
    /* 0061295d: mov dword ptr [edi + 0x354], 0xffffffff */ W32((u32)(r_edi+0x354u), 0xffffffffu);
L_00612967:; BB(0x00612967);
    /* 00612967: fld dword ptr [edi + 0x6c] */ FPUSH(R_F32((u32)(r_edi+0x6cu)));
    /* 0061296a: fcomp dword ptr [0x92fe84] */ fx_compare(ST(0), R_F32((u32)(0x92fe84u))); FPOP();
    /* 00612970: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00612972: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00612973: jae 0x612985 */ if (!fC) goto L_00612985;
L_00612975:; BB(0x00612975);
    /* 00612975: push 0x8000000 */ { u32 v = 0x8000000u; r_esp -= 4; W32(r_esp, v); }
    /* 0061297a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061297c: mov ecx, edi */ r_ecx = r_edi;
    /* 0061297e: call 0x7b52c4 */ r_esp -= 4; W32(r_esp, 0x612983u); f_007b52c4();
    /* 00612983: jmp 0x612993 */ goto L_00612993;
L_00612985:; BB(0x00612985);
    /* 00612985: push 0x8000000 */ { u32 v = 0x8000000u; r_esp -= 4; W32(r_esp, v); }
    /* 0061298a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061298c: mov ecx, edi */ r_ecx = r_edi;
    /* 0061298e: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x612993u); f_007b52ec();
L_00612993:; BB(0x00612993);
    /* 00612993: mov eax, dword ptr [edi + 0x34c] */ r_eax = R32((u32)(r_edi+0x34cu));
    /* 00612999: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061299b: jne 0x6129e4 */ if (!fZ) goto L_006129e4;
L_0061299d:; BB(0x0061299d);
    /* 0061299d: fld dword ptr [edi + 0x70] */ FPUSH(R_F32((u32)(r_edi+0x70u)));
    /* 006129a0: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 006129a3: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 006129a7: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006129ac: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 006129b0: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 006129b4: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 006129b8: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 006129bb: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 006129bf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006129c1: jl 0x6129d5 */ if ((fS!=fO)) goto L_006129d5;
L_006129c3:; BB(0x006129c3);
    /* 006129c3: cmp eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006129c8: jge 0x6129d5 */ if ((fS==fO)) goto L_006129d5;
L_006129ca:; BB(0x006129ca);
    /* 006129ca: mov dword ptr [edi + 0x350], eax */ W32((u32)(r_edi+0x350u), r_eax);
    /* 006129d0: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006129d3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006129d4: ret  */ FN_RET(0x006128d0); r_esp += 4; return;
L_006129d5:; BB(0x006129d5);
    /* 006129d5: mov dword ptr [edi + 0x350], 0xffffffff */ W32((u32)(r_edi+0x350u), 0xffffffffu);
    /* 006129df: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006129e2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006129e3: ret  */ FN_RET(0x006128d0); r_esp += 4; return;
L_006129e4:; BB(0x006129e4);
    /* 006129e4: mov dword ptr [edi + 0x350], 0xffffffff */ W32((u32)(r_edi+0x350u), 0xffffffffu);
    /* 006129ee: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006129f1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006129f2: ret  */ FN_RET(0x006128d0); r_esp += 4; return;
}

void f_006129f4(void) /* sub_6129F4 */
{
    FN_ENTER(0x006129f4);
    /* 006129f4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006129f5: mov esi, ecx */ r_esi = r_ecx;
    /* 006129f7: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x6129fcu); f_004f7c84();
    /* 006129fc: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006129ff: je 0x612a2a */ if (fZ) goto L_00612a2a;
L_00612a01:; BB(0x00612a01);
    /* 00612a01: movsx eax, word ptr [esi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x32eu));
    /* 00612a08: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00612a0a: je 0x612a23 */ if (fZ) goto L_00612a23;
L_00612a0c:; BB(0x00612a0c);
    /* 00612a0c: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00612a0f: jne 0x612a1a */ if (!fZ) goto L_00612a1a;
L_00612a11:; BB(0x00612a11);
    /* 00612a11: mov ecx, esi */ r_ecx = r_esi;
    /* 00612a13: call 0x6401d4 */ r_esp -= 4; W32(r_esp, 0x612a18u); f_006401d4();
    /* 00612a18: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00612a19: ret  */ FN_RET(0x006129f4); r_esp += 4; return;
L_00612a1a:; BB(0x00612a1a);
    /* 00612a1a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00612a1c: mov word ptr [esi + 0x32e], ax */ W16((u32)(r_esi+0x32eu), (u16)r_eax);
L_00612a23:; BB(0x00612a23);
    /* 00612a23: mov ecx, esi */ r_ecx = r_esi;
    /* 00612a25: call 0x612a2c */ r_esp -= 4; W32(r_esp, 0x612a2au); f_00612a2c();
L_00612a2a:; BB(0x00612a2a);
    /* 00612a2a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00612a2b: ret  */ FN_RET(0x006129f4); r_esp += 4; return;
}

void f_00612a2c(void) /* sub_612A2C */
{
    FN_ENTER(0x00612a2c);
    /* 00612a2c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00612a2d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00612a2e: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00612a31: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00612a33: mov eax, dword ptr [ebp + 0x354] */ r_eax = R32((u32)(r_ebp+0x354u));
    /* 00612a39: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00612a3b: jl 0x612a5c */ if ((fS!=fO)) goto L_00612a5c;
L_00612a3d:; BB(0x00612a3d);
    /* 00612a3d: cmp eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00612a42: jge 0x612a5c */ if ((fS==fO)) goto L_00612a5c;
L_00612a44:; BB(0x00612a44);
    /* 00612a44: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 00612a47: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00612a48: call 0x816eec */ r_esp -= 4; W32(r_esp, 0x612a4du); f_00816eec();
    /* 00612a4d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00612a4e: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00612a51: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00612a54: je 0x612a5c */ if (fZ) goto L_00612a5c;
L_00612a56:; BB(0x00612a56);
    /* 00612a56: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00612a59: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00612a5a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00612a5b: ret  */ FN_RET(0x00612a2c); r_esp += 4; return;
L_00612a5c:; BB(0x00612a5c);
    /* 00612a5c: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00612a5e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00612a5f: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x612a64u); f_006946a8();
    /* 00612a64: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00612a67: mov eax, dword ptr [ebp + 0x344] */ r_eax = R32((u32)(r_ebp+0x344u));
    /* 00612a6d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00612a6f: jle 0x612aa4 */ if ((fZ||fS!=fO)) goto L_00612aa4;
L_00612a71:; BB(0x00612a71);
    /* 00612a71: mov eax, dword ptr [ebp + 0x34c] */ r_eax = R32((u32)(r_ebp+0x34cu));
    /* 00612a77: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00612a79: jne 0x612a9e */ if (!fZ) goto L_00612a9e;
L_00612a7b:; BB(0x00612a7b);
    /* 00612a7b: mov eax, dword ptr [ebp + 0x350] */ r_eax = R32((u32)(r_ebp+0x350u));
    /* 00612a81: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00612a83: jl 0x612a9e */ if ((fS!=fO)) goto L_00612a9e;
L_00612a85:; BB(0x00612a85);
    /* 00612a85: cmp eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00612a8a: jge 0x612a9e */ if ((fS==fO)) goto L_00612a9e;
L_00612a8c:; BB(0x00612a8c);
    /* 00612a8c: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 00612a8f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00612a90: call 0x816eec */ r_esp -= 4; W32(r_esp, 0x612a95u); f_00816eec();
    /* 00612a95: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00612a96: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00612a99: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00612a9c: je 0x612aa4 */ if (fZ) goto L_00612aa4;
L_00612a9e:; BB(0x00612a9e);
    /* 00612a9e: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00612aa1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00612aa2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00612aa3: ret  */ FN_RET(0x00612a2c); r_esp += 4; return;
L_00612aa4:; BB(0x00612aa4);
    /* 00612aa4: movsx ecx, word ptr [ebp + 0x32e] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x32eu));
    /* 00612aab: mov eax, dword ptr [ebp + 0x80] */ r_eax = R32((u32)(r_ebp+0x80u));
    /* 00612ab1: mov dword ptr [ebp + 0x344], 0 */ W32((u32)(r_ebp+0x344u), 0x0u);
    /* 00612abb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00612abd: je 0x612ae6 */ if (fZ) goto L_00612ae6;
L_00612abf:; BB(0x00612abf);
    /* 00612abf: movsx edx, word ptr [eax + 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x4u));
    /* 00612ac3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00612ac5: jl 0x612ae6 */ if ((fS!=fO)) goto L_00612ae6;
L_00612ac7:; BB(0x00612ac7);
    /* 00612ac7: cmp edx, 0xb9f */ {  u32 a = r_edx; u32 b = 0xb9fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00612acd: jg 0x612ae6 */ if ((!fZ&&fS==fO)) goto L_00612ae6;
L_00612acf:; BB(0x00612acf);
    /* 00612acf: mov edi, dword ptr [0xab02bc] */ r_edi = R32((u32)(0xab02bcu));
    /* 00612ad5: mov word ptr [edi + edx*4], cx */ W16((u32)(r_edi+r_edx*4), (u16)r_ecx);
    /* 00612ad9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00612adb: mov word ptr [edi + edx*4 + 2], ax */ W16((u32)(r_edi+r_edx*4+0x2u), (u16)r_eax);
    /* 00612ae0: mov eax, dword ptr [ebp + 0x80] */ r_eax = R32((u32)(r_ebp+0x80u));
L_00612ae6:; BB(0x00612ae6);
    /* 00612ae6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00612ae8: je 0x612a9e */ if (fZ) goto L_00612a9e;
L_00612aea:; BB(0x00612aea);
    /* 00612aea: movzx edi, word ptr [ebp + 0x1c] */ r_edi = (u32)R16((u32)(r_ebp+0x1cu));
    /* 00612aee: mov byte ptr [esp], 0x91 */ W8((u32)(r_esp), 0x91u);
    /* 00612af2: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00612af4: mov word ptr [esp + 0xc], dx */ W16((u32)(r_esp+0xcu), (u16)r_edx);
    /* 00612af9: mov byte ptr [esp + 1], 5 */ W8((u32)(r_esp+0x1u), 0x5u);
    /* 00612afe: mov word ptr [esp + 0xe], dx */ W16((u32)(r_esp+0xeu), (u16)r_edx);
    /* 00612b03: mov word ptr [esp + 2], di */ W16((u32)(r_esp+0x2u), (u16)r_edi);
    /* 00612b08: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 00612b0c: movsx eax, word ptr [eax + 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x4u));
    /* 00612b10: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00612b14: mov eax, 1 */ r_eax = 0x1u;
    /* 00612b19: mov word ptr [esp + 0xc], ax */ W16((u32)(r_esp+0xcu), (u16)r_eax);
    /* 00612b1e: mov eax, dword ptr [ebp + 0x344] */ r_eax = R32((u32)(r_ebp+0x344u));
    /* 00612b24: mov word ptr [esp + 0xe], ax */ W16((u32)(r_esp+0xeu), (u16)r_eax);
    /* 00612b29: mov eax, dword ptr [ebp + 0x34c] */ r_eax = R32((u32)(r_ebp+0x34cu));
    /* 00612b2f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00612b31: jne 0x612b49 */ if (!fZ) goto L_00612b49;
L_00612b33:; BB(0x00612b33);
    /* 00612b33: mov eax, dword ptr [ebp + 0x350] */ r_eax = R32((u32)(r_ebp+0x350u));
    /* 00612b39: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00612b3b: jl 0x612b49 */ if ((fS!=fO)) goto L_00612b49;
L_00612b3d:; BB(0x00612b3d);
    /* 00612b3d: mov byte ptr [esp + 0x12], 1 */ W8((u32)(r_esp+0x12u), 0x1u);
    /* 00612b42: mov word ptr [esp + 0x10], ax */ W16((u32)(r_esp+0x10u), (u16)r_eax);
    /* 00612b47: jmp 0x612b54 */ goto L_00612b54;
L_00612b49:; BB(0x00612b49);
    /* 00612b49: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00612b4b: mov byte ptr [esp + 0x12], al */ W8((u32)(r_esp+0x12u), (u8)r_eax);
    /* 00612b4f: mov word ptr [esp + 0x10], ax */ W16((u32)(r_esp+0x10u), (u16)r_eax);
L_00612b54:; BB(0x00612b54);
    /* 00612b54: mov eax, dword ptr [0xaafca0] */ r_eax = R32((u32)(0xaafca0u));
    /* 00612b59: mov byte ptr [esp + 0x13], al */ W8((u32)(r_esp+0x13u), (u8)r_eax);
    /* 00612b5d: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00612b60: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x612b65u); f_008003e0();
    /* 00612b65: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00612b68: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00612b69: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00612b6a: ret  */ FN_RET(0x00612a2c); r_esp += 4; return;
}

void f_00612b6c(void) /* sub_612B6C */
{
    FN_ENTER(0x00612b6c);
    /* 00612b6c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00612b6d: mov edi, ecx */ r_edi = r_ecx;
    /* 00612b6f: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00612b73: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00612b75: je 0x612be6 */ if (fZ) goto L_00612be6;
L_00612b77:; BB(0x00612b77);
    /* 00612b77: movsx eax, word ptr [eax] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax));
    /* 00612b7a: mov word ptr [edi + 0x32e], ax */ W16((u32)(r_edi+0x32eu), (u16)r_eax);
L_00612b81:; BB(0x00612b81);
    /* 00612b81: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00612b83: je 0x612bb7 */ if (fZ) goto L_00612bb7;
L_00612b85:; BB(0x00612b85);
    /* 00612b85: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00612b88: jne 0x612bac */ if (!fZ) goto L_00612bac;
L_00612b8a:; BB(0x00612b8a);
    /* 00612b8a: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 00612b8e: mov dword ptr [edi + 0x344], 0 */ W32((u32)(r_edi+0x344u), 0x0u);
    /* 00612b98: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00612b9a: je 0x612bb7 */ if (fZ) goto L_00612bb7;
L_00612b9c:; BB(0x00612b9c);
    /* 00612b9c: mov ecx, edi */ r_ecx = r_edi;
    /* 00612b9e: call 0x612bf0 */ r_esp -= 4; W32(r_esp, 0x612ba3u); f_00612bf0();
    /* 00612ba3: movsx eax, word ptr [edi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32eu));
    /* 00612baa: jmp 0x612bb7 */ goto L_00612bb7;
L_00612bac:; BB(0x00612bac);
    /* 00612bac: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00612bae: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00612bb0: mov word ptr [edi + 0x32e], dx */ W16((u32)(r_edi+0x32eu), (u16)r_edx);
L_00612bb7:; BB(0x00612bb7);
    /* 00612bb7: mov edx, dword ptr [edi + 0x80] */ r_edx = R32((u32)(r_edi+0x80u));
    /* 00612bbd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00612bbf: je 0x612be2 */ if (fZ) goto L_00612be2;
L_00612bc1:; BB(0x00612bc1);
    /* 00612bc1: movsx ecx, word ptr [edx + 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edx+0x4u));
    /* 00612bc5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00612bc7: jl 0x612be2 */ if ((fS!=fO)) goto L_00612be2;
L_00612bc9:; BB(0x00612bc9);
    /* 00612bc9: cmp ecx, 0xb9f */ {  u32 a = r_ecx; u32 b = 0xb9fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00612bcf: jg 0x612be2 */ if ((!fZ&&fS==fO)) goto L_00612be2;
L_00612bd1:; BB(0x00612bd1);
    /* 00612bd1: mov edx, dword ptr [0xab02bc] */ r_edx = R32((u32)(0xab02bcu));
    /* 00612bd7: mov word ptr [edx + ecx*4], ax */ W16((u32)(r_edx+r_ecx*4), (u16)r_eax);
    /* 00612bdb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00612bdd: mov word ptr [edx + ecx*4 + 2], ax */ W16((u32)(r_edx+r_ecx*4+0x2u), (u16)r_eax);
L_00612be2:; BB(0x00612be2);
    /* 00612be2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00612be3: ret 8 */ FN_RET(0x00612b6c); r_esp += 12; return;
L_00612be6:; BB(0x00612be6);
    /* 00612be6: movsx eax, word ptr [edi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32eu));
    /* 00612bed: jmp 0x612b81 */ goto L_00612b81;
}

void f_00612bf0(void) /* sub_612BF0 */
{
    FN_ENTER(0x00612bf0);
    /* 00612bf0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00612bf2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00612bf4: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x612bf9u); f_007b52ec();
    /* 00612bf9: ret  */ FN_RET(0x00612bf0); r_esp += 4; return;
}

void f_00612bfc(void) /* sub_612BFC */
{
    FN_ENTER(0x00612bfc);
    /* 00612bfc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00612bfd: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00612bfe: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00612bff: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
    /* 00612c03: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00612c05: je 0x612cc9 */ if (fZ) goto L_00612cc9;
L_00612c0b:; BB(0x00612c0b);
    /* 00612c0b: movzx eax, word ptr [ebx + 2] */ r_eax = (u32)R16((u32)(r_ebx+0x2u));
    /* 00612c0f: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00612c14: je 0x612cc9 */ if (fZ) goto L_00612cc9;
L_00612c1a:; BB(0x00612c1a);
    /* 00612c1a: cmp eax, 0x4000 */ {  u32 a = r_eax; u32 b = 0x4000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00612c1f: jl 0x612cc9 */ if ((fS!=fO)) goto L_00612cc9;
L_00612c25:; BB(0x00612c25);
    /* 00612c25: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00612c26: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x612c2bu); f_007b4d18();
    /* 00612c2b: mov ebp, eax */ r_ebp = r_eax;
    /* 00612c2d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00612c30: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00612c32: je 0x612cf0 */ if (fZ) goto L_00612cf0;
L_00612c38:; BB(0x00612c38);
    /* 00612c38: mov edx, dword ptr [ebp + 4] */ r_edx = R32((u32)(r_ebp+0x4u));
    /* 00612c3b: cmp edx, dword ptr [0x9c481c] */ {  u32 a = r_edx; u32 b = R32((u32)(0x9c481cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00612c41: jne 0x612cc0 */ if (!fZ) goto L_00612cc0;
L_00612c43:; BB(0x00612c43);
    /* 00612c43: movzx edx, word ptr [ebx + 0xc] */ r_edx = (u32)R16((u32)(r_ebx+0xcu));
    /* 00612c47: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00612c49: jne 0x612c7a */ if (!fZ) goto L_00612c7a;
L_00612c4b:; BB(0x00612c4b);
    /* 00612c4b: movsx eax, word ptr [ebp + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32eu));
    /* 00612c52: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00612c54: je 0x612c66 */ if (fZ) goto L_00612c66;
L_00612c56:; BB(0x00612c56);
    /* 00612c56: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00612c59: je 0x612cae */ if (fZ) goto L_00612cae;
L_00612c5b:; BB(0x00612c5b);
    /* 00612c5b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00612c5d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00612c5f: mov word ptr [ebp + 0x32e], dx */ W16((u32)(r_ebp+0x32eu), (u16)r_edx);
L_00612c66:; BB(0x00612c66);
    /* 00612c66: movzx edx, word ptr [ebx + 0xe] */ r_edx = (u32)R16((u32)(r_ebx+0xeu));
    /* 00612c6a: cmp edx, dword ptr [ebp + 0x344] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x344u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00612c70: jge 0x612cae */ if ((fS==fO)) goto L_00612cae;
L_00612c72:; BB(0x00612c72);
    /* 00612c72: mov dword ptr [ebp + 0x344], edx */ W32((u32)(r_ebp+0x344u), r_edx);
    /* 00612c78: jmp 0x612cae */ goto L_00612cae;
L_00612c7a:; BB(0x00612c7a);
    /* 00612c7a: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00612c7d: jne 0x612ca7 */ if (!fZ) goto L_00612ca7;
L_00612c7f:; BB(0x00612c7f);
    /* 00612c7f: movsx eax, word ptr [ebp + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32eu));
    /* 00612c86: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00612c89: je 0x612cae */ if (fZ) goto L_00612cae;
L_00612c8b:; BB(0x00612c8b);
    /* 00612c8b: mov edx, 1 */ r_edx = 0x1u;
    /* 00612c90: mov word ptr [ebp + 0x32e], dx */ W16((u32)(r_ebp+0x32eu), (u16)r_edx);
    /* 00612c97: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00612c99: call 0x612bf0 */ r_esp -= 4; W32(r_esp, 0x612c9eu); f_00612bf0();
    /* 00612c9e: movsx eax, word ptr [ebp + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32eu));
    /* 00612ca5: jmp 0x612cae */ goto L_00612cae;
L_00612ca7:; BB(0x00612ca7);
    /* 00612ca7: movsx eax, word ptr [ebp + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32eu));
L_00612cae:; BB(0x00612cae);
    /* 00612cae: mov word ptr [esp], ax */ W16((u32)(r_esp), (u16)r_eax);
    /* 00612cb2: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 00612cb5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00612cb7: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00612cba: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00612cbb: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00612cbd: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x612cc0u); call_ind(t); }
L_00612cc0:; BB(0x00612cc0);
    /* 00612cc0: movzx eax, byte ptr [ebx + 0x12] */ r_eax = (u32)R8((u32)(r_ebx+0x12u));
    /* 00612cc4: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00612cc7: je 0x612ccd */ if (fZ) goto L_00612ccd;
L_00612cc9:; BB(0x00612cc9);
    /* 00612cc9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00612cca: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00612ccb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00612ccc: ret  */ FN_RET(0x00612bfc); r_esp += 4; return;
L_00612ccd:; BB(0x00612ccd);
    /* 00612ccd: movzx edx, word ptr [ebx + 0x10] */ r_edx = (u32)R16((u32)(r_ebx+0x10u));
    /* 00612cd1: cmp edx, 0x100 */ {  u32 a = r_edx; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00612cd7: jge 0x612cc9 */ if ((fS==fO)) goto L_00612cc9;
L_00612cd9:; BB(0x00612cd9);
    /* 00612cd9: movsx eax, byte ptr [ebx + 0x13] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebx+0x13u));
    /* 00612cdd: cmp eax, 0x12 */ {  u32 a = r_eax; u32 b = 0x12u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00612ce0: jge 0x612cc9 */ if ((fS==fO)) goto L_00612cc9;
L_00612ce2:; BB(0x00612ce2);
    /* 00612ce2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00612ce3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00612ce4: call 0x816df0 */ r_esp -= 4; W32(r_esp, 0x612ce9u); f_00816df0();
    /* 00612ce9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00612cec: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00612ced: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00612cee: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00612cef: ret  */ FN_RET(0x00612bfc); r_esp += 4; return;
L_00612cf0:; BB(0x00612cf0);
    /* 00612cf0: mov ecx, dword ptr [0xab02bc] */ r_ecx = R32((u32)(0xab02bcu));
    /* 00612cf6: mov ebp, dword ptr [ebx + 8] */ r_ebp = R32((u32)(r_ebx+0x8u));
    /* 00612cf9: movzx edx, word ptr [ecx + ebp*4 + 2] */ r_edx = (u32)R16((u32)(r_ecx+r_ebp*4+0x2u));
    /* 00612cfe: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 00612d01: movsx ebp, bp */ r_ebp = (u32)(i32)(i16)(u16)r_ebp;
    /* 00612d04: cmp ebp, 0xb9f */ {  u32 a = r_ebp; u32 b = 0xb9fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00612d0a: jg 0x612cc0 */ if ((!fZ&&fS==fO)) goto L_00612cc0;
L_00612d0c:; BB(0x00612d0c);
    /* 00612d0c: mov word ptr [ecx + ebp*4], ax */ W16((u32)(r_ecx+r_ebp*4), (u16)r_eax);
    /* 00612d10: mov word ptr [ecx + ebp*4 + 2], dx */ W16((u32)(r_ecx+r_ebp*4+0x2u), (u16)r_edx);
    /* 00612d15: jmp 0x612cc0 */ goto L_00612cc0;
}

void f_00612d18(void) /* sub_612D18 */
{
    FN_ENTER(0x00612d18);
    /* 00612d18: mov dword ptr [0xa8ea38], 0x3f800000 */ W32((u32)(0xa8ea38u), 0x3f800000u);
    /* 00612d22: mov dword ptr [0xa8ea3c], 0x41000000 */ W32((u32)(0xa8ea3cu), 0x41000000u);
    /* 00612d2c: mov dword ptr [0xa8ea40], 0x3fc00000 */ W32((u32)(0xa8ea40u), 0x3fc00000u);
    /* 00612d36: ret  */ FN_RET(0x00612d18); r_esp += 4; return;
}

void f_00612d38(void) /* sub_612D38 */
{
    FN_ENTER(0x00612d38);
    /* 00612d38: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00612d39: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00612d3b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00612d3d: call 0x612d5c */ r_esp -= 4; W32(r_esp, 0x612d42u); f_00612d5c();
    /* 00612d42: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00612d46: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00612d48: jne 0x612d4e */ if (!fZ) goto L_00612d4e;
L_00612d4a:; BB(0x00612d4a);
    /* 00612d4a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00612d4b: ret 4 */ FN_RET(0x00612d38); r_esp += 8; return;
L_00612d4e:; BB(0x00612d4e);
    /* 00612d4e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00612d4f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x612d54u); f_005c2f74();
    /* 00612d54: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00612d55: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00612d56: ret 4 */ FN_RET(0x00612d38); r_esp += 8; return;
}

void f_00612d5c(void) /* sub_612D5C */
{
    FN_ENTER(0x00612d5c);
    /* 00612d5c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00612d5d: mov ebp, esp */ r_ebp = r_esp;
    /* 00612d5f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00612d61: push 0x8e0f8c */ { u32 v = 0x8e0f8cu; r_esp -= 4; W32(r_esp, v); }
    /* 00612d66: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00612d6c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00612d6d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00612d74: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00612d77: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00612d7a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00612d7d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00612d80: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00612d83: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00612d86: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00612d8d: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00612d90: mov dword ptr [eax], 0xb24fc0 */ W32((u32)(r_eax), 0xb24fc0u);
    /* 00612d96: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00612d97: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x612d9cu); f_007b4e84();
    /* 00612d9c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00612d9d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00612da0: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x612da5u); f_007b9c8c();
    /* 00612da5: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00612dac: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00612daf: call 0x619b10 */ r_esp -= 4; W32(r_esp, 0x612db4u); f_00619b10();
    /* 00612db4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00612db7: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00612dbe: mov esp, ebp */ r_esp = r_ebp;
    /* 00612dc0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00612dc1: ret  */ FN_RET(0x00612d5c); r_esp += 4; return;
}

void f_00612dc4(void) /* sub_612DC4 */
{
    FN_ENTER(0x00612dc4);
    /* 00612dc4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00612dc5: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00612dc7: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00612dc9: call 0x61347c */ r_esp -= 4; W32(r_esp, 0x612dceu); f_0061347c();
    /* 00612dce: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00612dd0: call 0x612e04 */ r_esp -= 4; W32(r_esp, 0x612dd5u); f_00612e04();
    /* 00612dd5: mov eax, dword ptr [ebp + 0xd0] */ r_eax = R32((u32)(r_ebp+0xd0u));
    /* 00612ddb: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00612ddd: jne 0x612de1 */ if (!fZ) goto L_00612de1;
L_00612ddf:; BB(0x00612ddf);
    /* 00612ddf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00612de0: ret  */ FN_RET(0x00612dc4); r_esp += 4; return;
L_00612de1:; BB(0x00612de1);
    /* 00612de1: mov dword ptr [ebp + 0xac], 1 */ W32((u32)(r_ebp+0xacu), 0x1u);
    /* 00612deb: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00612ded: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00612def: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00612df1: call 0x7b52c4 */ r_esp -= 4; W32(r_esp, 0x612df6u); f_007b52c4();
    /* 00612df6: mov eax, dword ptr [0xa8ea48] */ r_eax = R32((u32)(0xa8ea48u));
    /* 00612dfb: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00612dfe: mov dword ptr [ebp + 0x24], edx */ W32((u32)(r_ebp+0x24u), r_edx);
    /* 00612e01: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00612e02: ret  */ FN_RET(0x00612dc4); r_esp += 4; return;
}

void f_00612e04(void) /* sub_612E04 */
{
    FN_ENTER(0x00612e04);
    /* 00612e04: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00612e05: mov esi, ecx */ r_esi = r_ecx;
    /* 00612e07: call 0x807e78 */ r_esp -= 4; W32(r_esp, 0x612e0cu); f_00807e78();
    /* 00612e0c: mov ecx, eax */ r_ecx = r_eax;
    /* 00612e0e: lea eax, [esi + 0x38] */ r_eax = (u32)(r_esi+0x38u);
    /* 00612e11: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00612e13: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00612e14: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00612e15: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00612e16: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00612e17: push dword ptr [ecx*4 + 0x92fea0] */ { u32 v = R32((u32)(r_ecx*4+0x92fea0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00612e1e: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x612e23u); f_008144b0();
    /* 00612e23: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00612e26: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00612e27: ret  */ FN_RET(0x00612e04); r_esp += 4; return;
}

void f_00612e28(void) /* sub_612E28 */
{
    FN_ENTER(0x00612e28);
    /* 00612e28: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00612e29: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00612e2b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00612e2d: call 0x61347c */ r_esp -= 4; W32(r_esp, 0x612e32u); f_0061347c();
    /* 00612e32: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00612e34: call 0x612e04 */ r_esp -= 4; W32(r_esp, 0x612e39u); f_00612e04();
    /* 00612e39: mov dword ptr [ebx + 0xac], 2 */ W32((u32)(r_ebx+0xacu), 0x2u);
    /* 00612e43: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00612e44: ret  */ FN_RET(0x00612e28); r_esp += 4; return;
}

void f_00612e48(void) /* sub_612E48 */
{
    FN_ENTER(0x00612e48);
    /* 00612e48: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00612e49: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00612e4b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00612e4d: call 0x61347c */ r_esp -= 4; W32(r_esp, 0x612e52u); f_0061347c();
    /* 00612e52: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00612e54: call 0x612e04 */ r_esp -= 4; W32(r_esp, 0x612e59u); f_00612e04();
    /* 00612e59: mov eax, dword ptr [ebp + 0xd0] */ r_eax = R32((u32)(r_ebp+0xd0u));
    /* 00612e5f: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00612e61: jne 0x612e82 */ if (!fZ) goto L_00612e82;
L_00612e63:; BB(0x00612e63);
    /* 00612e63: mov dword ptr [ebp + 0xac], 3 */ W32((u32)(r_ebp+0xacu), 0x3u);
    /* 00612e6d: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00612e6f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00612e71: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00612e73: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x612e78u); f_007b52ec();
    /* 00612e78: mov eax, dword ptr [0xa8ea48] */ r_eax = R32((u32)(0xa8ea48u));
    /* 00612e7d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00612e7f: mov dword ptr [ebp + 0x24], edx */ W32((u32)(r_ebp+0x24u), r_edx);
L_00612e82:; BB(0x00612e82);
    /* 00612e82: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00612e83: ret  */ FN_RET(0x00612e48); r_esp += 4; return;
}

void f_00612e84(void) /* sub_612E84 */
{
    FN_ENTER(0x00612e84);
    /* 00612e84: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00612e85: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00612e87: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00612e89: call 0x61347c */ r_esp -= 4; W32(r_esp, 0x612e8eu); f_0061347c();
    /* 00612e8e: mov dword ptr [ebx + 0xac], 0 */ W32((u32)(r_ebx+0xacu), 0x0u);
    /* 00612e98: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00612e9a: call 0x612e04 */ r_esp -= 4; W32(r_esp, 0x612e9fu); f_00612e04();
    /* 00612e9f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00612ea0: ret  */ FN_RET(0x00612e84); r_esp += 4; return;
}

void f_00612ea4(void) /* sub_612EA4 */
{
    FN_ENTER(0x00612ea4);
    /* 00612ea4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00612ea5: mov edi, ecx */ r_edi = r_ecx;
    /* 00612ea7: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00612ea9: mov ecx, edi */ r_ecx = r_edi;
    /* 00612eab: push dword ptr [edi + 0xc4] */ { u32 v = R32((u32)(r_edi+0xc4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00612eb1: push dword ptr [edi + 0xc0] */ { u32 v = R32((u32)(r_edi+0xc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00612eb7: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x612ebau); call_ind(t); }
    /* 00612eba: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00612ebc: je 0x612f18 */ if (fZ) goto L_00612f18;
L_00612ebe:; BB(0x00612ebe);
    /* 00612ebe: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x612ec3u); f_0082d7b0();
    /* 00612ec3: lea ecx, [edi + 0x38] */ r_ecx = (u32)(r_edi+0x38u);
    /* 00612ec6: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x612ecbu); f_0082d838();
    /* 00612ecb: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 00612ece: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00612ed0: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x612ed5u); f_0082d8bc();
    /* 00612ed5: mov ecx, dword ptr [edi + 0x24] */ r_ecx = R32((u32)(r_edi+0x24u));
    /* 00612ed8: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x612eddu); f_00829cc8();
    /* 00612edd: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x612ee2u); f_0082dbac();
    /* 00612ee2: push dword ptr [edi + 0xb0] */ { u32 v = R32((u32)(r_edi+0xb0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00612ee8: mov ecx, dword ptr [edi + 0x34] */ r_ecx = R32((u32)(r_edi+0x34u));
    /* 00612eeb: mov edx, dword ptr [edi + 0xbc] */ r_edx = R32((u32)(r_edi+0xbcu));
    /* 00612ef1: call 0x83bd00 */ r_esp -= 4; W32(r_esp, 0x612ef6u); f_0083bd00();
    /* 00612ef6: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x612efbu); f_0082dab0();
    /* 00612efb: mov eax, dword ptr [0xa8ea48] */ r_eax = R32((u32)(0xa8ea48u));
    /* 00612f00: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00612f03: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x612f08u); f_00829cc8();
    /* 00612f08: mov ecx, dword ptr [0xa8ea4c] */ r_ecx = R32((u32)(0xa8ea4cu));
    /* 00612f0e: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x612f13u); f_00831758();
    /* 00612f13: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x612f18u); f_0082da80();
L_00612f18:; BB(0x00612f18);
    /* 00612f18: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00612f19: ret  */ FN_RET(0x00612ea4); r_esp += 4; return;
}

void f_00612f1c(void) /* sub_612F1C */
{
    FN_ENTER(0x00612f1c);
    /* 00612f1c: mov eax, dword ptr [0xa8ea48] */ r_eax = R32((u32)(0xa8ea48u));
    /* 00612f21: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00612f23: je 0x612f47 */ if (fZ) goto L_00612f47;
L_00612f25:; BB(0x00612f25);
    /* 00612f25: push dword ptr [eax] */ { u32 v = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, v); }
    /* 00612f27: call 0x800b5c */ r_esp -= 4; W32(r_esp, 0x612f2cu); f_00800b5c();
    /* 00612f2c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00612f2d: mov eax, dword ptr [0xa8ea48] */ r_eax = R32((u32)(0xa8ea48u));
    /* 00612f32: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00612f34: je 0x612f47 */ if (fZ) goto L_00612f47;
L_00612f36:; BB(0x00612f36);
    /* 00612f36: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00612f37: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x612f3cu); f_00857e98();
    /* 00612f3c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00612f3d: mov dword ptr [0xa8ea48], 0 */ W32((u32)(0xa8ea48u), 0x0u);
L_00612f47:; BB(0x00612f47);
    /* 00612f47: mov ecx, dword ptr [0xa8ea50] */ r_ecx = R32((u32)(0xa8ea50u));
    /* 00612f4d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00612f4f: je 0x612f64 */ if (fZ) goto L_00612f64;
L_00612f51:; BB(0x00612f51);
    /* 00612f51: je 0x612f5a */ if (fZ) goto L_00612f5a;
L_00612f53:; BB(0x00612f53);
    /* 00612f53: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00612f55: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x612f5au); f_004066a8();
L_00612f5a:; BB(0x00612f5a);
    /* 00612f5a: mov dword ptr [0xa8ea50], 0 */ W32((u32)(0xa8ea50u), 0x0u);
L_00612f64:; BB(0x00612f64);
    /* 00612f64: ret  */ FN_RET(0x00612f1c); r_esp += 4; return;
}

void f_00612f68(void)
{
    FN_ENTER(0x00612f68);
    /* 00612f68: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00612f69: mov ebp, esp */ r_ebp = r_esp;
    /* 00612f6b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00612f6d: push 0x8e0fb4 */ { u32 v = 0x8e0fb4u; r_esp -= 4; W32(r_esp, v); }
    /* 00612f72: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00612f78: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00612f79: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00612f80: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00612f83: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00612f86: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00612f89: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00612f8c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00612f8f: push 0xd4 */ { u32 v = 0xd4u; r_esp -= 4; W32(r_esp, v); }
    /* 00612f94: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00612f9b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x612fa0u); f_005caba4();
    /* 00612fa0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00612fa1: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00612fa4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00612fa6: je 0x612fdf */ if (fZ) goto L_00612fdf;
L_00612fa8:; BB(0x00612fa8);
    /* 00612fa8: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00612faf: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00612fb6: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00612fb9: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 00612fbf: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00612fc2: call 0x612fe4 */ r_esp -= 4; W32(r_esp, 0x612fc7u); f_00612fe4();
    /* 00612fc7: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00612fca: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00612fd1:; BB(0x00612fd1);
    /* 00612fd1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00612fd4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00612fdb: mov esp, ebp */ r_esp = r_ebp;
    /* 00612fdd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00612fde: ret  */ FN_RET(0x00612f68); r_esp += 4; return;
L_00612fdf:; BB(0x00612fdf);
    /* 00612fdf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00612fe1: jmp 0x612fd1 */ goto L_00612fd1;
}

void f_00612fe4(void) /* sub_612FE4 */
{
    FN_ENTER(0x00612fe4);
    /* 00612fe4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00612fe5: mov ebp, esp */ r_ebp = r_esp;
    /* 00612fe7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00612fe9: push 0x8e0fd0 */ { u32 v = 0x8e0fd0u; r_esp -= 4; W32(r_esp, v); }
    /* 00612fee: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00612ff4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00612ff5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00612ffc: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00612fff: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00613002: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00613005: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00613008: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0061300b: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0061300e: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00613011: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00613014: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00613017: call 0x619df0 */ r_esp -= 4; W32(r_esp, 0x61301cu); f_00619df0();
    /* 0061301c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00613023: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00613026: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00613029: mov dword ptr [ecx], 0xb24fc0 */ W32((u32)(r_ecx), 0xb24fc0u);
    /* 0061302f: mov eax, dword ptr [0x9c4870] */ r_eax = R32((u32)(0x9c4870u));
    /* 00613034: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00613035: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00613038: call dword ptr [0xb24fd4] */ { u32 t = R32((u32)(0xb24fd4u)); r_esp -= 4; W32(r_esp, 0x61303eu); call_ind(t); }
    /* 0061303e: mov ecx, dword ptr [0xa8ea50] */ r_ecx = R32((u32)(0xa8ea50u));
    /* 00613044: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00613046: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x61304bu); f_005b8610();
    /* 0061304b: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0061304e: mov ecx, dword ptr [0xa8ea50] */ r_ecx = R32((u32)(0xa8ea50u));
    /* 00613054: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00613056: mov dword ptr [ebx + 0x34], eax */ W32((u32)(r_ebx+0x34u), r_eax);
    /* 00613059: mov eax, dword ptr [0xa8ea48] */ r_eax = R32((u32)(0xa8ea48u));
    /* 0061305e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00613060: mov dword ptr [ebx + 0x24], edx */ W32((u32)(r_ebx+0x24u), r_edx);
    /* 00613063: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x613068u); f_005b8638();
    /* 00613068: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0061306b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0061306d: mov dword ptr [ecx + 0xbc], eax */ W32((u32)(r_ecx+0xbcu), r_eax);
    /* 00613073: fild dword ptr [eax + 4] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x4u)));
    /* 00613076: push 0x9c4874 */ { u32 v = 0x9c4874u; r_esp -= 4; W32(r_esp, v); }
    /* 0061307b: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0061307e: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00613081: fadd dword ptr [edx*4 + 0x92fee8] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x92fee8u));
    /* 00613088: fadd dword ptr [0x92fefc] */ ST(0) = ST(0) + R_F32((u32)(0x92fefcu));
    /* 0061308e: mov dword ptr [ecx + 0xb8], 0x40000000 */ W32((u32)(r_ecx+0xb8u), 0x40000000u);
    /* 00613098: fstp dword ptr [ecx + 0xb4] */ W_F32((u32)(r_ecx+0xb4u), ST(0)); FPOP();
    /* 0061309e: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x6130a3u); f_007b9a88();
    /* 006130a3: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006130a6: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x6130abu); f_007b999c();
    /* 006130ab: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006130ac: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006130af: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x6130b4u); f_007b4f54();
    /* 006130b4: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006130b7: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006130b9: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x6130bcu); call_ind(t); }
    /* 006130bc: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 006130bf: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006130c2: mov dword ptr [eax + 0xc0], 0x43c80000 */ W32((u32)(r_eax+0xc0u), 0x43c80000u);
    /* 006130cc: mov dword ptr [eax + 0xc4], 0x42200000 */ W32((u32)(r_eax+0xc4u), 0x42200000u);
    /* 006130d6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006130d9: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006130e0: mov esp, ebp */ r_esp = r_ebp;
    /* 006130e2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006130e3: ret 8 */ FN_RET(0x00612fe4); r_esp += 12; return;
}

